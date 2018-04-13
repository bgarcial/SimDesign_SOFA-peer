import zmq

def main():
    ctx = zmq.Context()
    publisher = ctx.socket(zmq.PUB)
    publisher.bind("tcp://*:5557")

    print("Network Manager CNVSS Broker listening")

    collector = ctx.socket(zmq.PULL)
    collector.bind("tcp://*:5558")

    while True:
        message = collector.recv()
        print("Publishing update %s" % message)
        publisher.send(message)

if __name__ == '__main__':
    main()