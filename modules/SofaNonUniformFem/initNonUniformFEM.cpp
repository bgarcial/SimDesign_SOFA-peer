/******************************************************************************
*       SOFA, Simulation Open-Framework Architecture, v17.06                  *
*                (c) 2006-2017 INRIA, USTL, UJF, CNRS, MGH                    *
*                                                                             *
* This program is free software; you can redistribute it and/or modify it     *
* under the terms of the GNU Lesser General Public License as published by    *
* the Free Software Foundation; either version 2.1 of the License, or (at     *
* your option) any later version.                                             *
*                                                                             *
* This program is distributed in the hope that it will be useful, but WITHOUT *
* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or       *
* FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License *
* for more details.                                                           *
*                                                                             *
* You should have received a copy of the GNU Lesser General Public License    *
* along with this program. If not, see <http://www.gnu.org/licenses/>.        *
*******************************************************************************
* Authors: The SOFA Team and external contributors (see Authors.txt)          *
*                                                                             *
* Contact information: contact@sofa-framework.org                             *
******************************************************************************/
#include <sofa/helper/system/config.h>
#include <SofaNonUniformFem/initNonUniformFEM.h>


namespace sofa
{

namespace component
{


void initNonUniformFEM()
{
    static bool first = true;
    if (first)
    {
        first = false;
    }
}

SOFA_LINK_CLASS(NonUniformHexahedralFEMForceFieldAndMass)
//SOFA_LINK_CLASS(NonUniformHexahedronFEMForceFieldDensity)
SOFA_LINK_CLASS(DynamicSparseGridGeometryAlgorithms)
SOFA_LINK_CLASS(DynamicSparseGridTopologyAlgorithms)
SOFA_LINK_CLASS(DynamicSparseGridTopologyContainer)
SOFA_LINK_CLASS(DynamicSparseGridTopologyModifier)
SOFA_LINK_CLASS(MultilevelHexahedronSetTopologyContainer)
SOFA_LINK_CLASS(SparseGridMultipleTopology)
SOFA_LINK_CLASS(SparseGridRamificationTopology)
#ifdef SOFA_HAVE_NEWMAT
SOFA_LINK_CLASS(HexahedronCompositeFEMForceFieldAndMass)
#endif
SOFA_LINK_CLASS(HexahedronCompositeFEMMapping)

} // namespace component

} // namespace sofa