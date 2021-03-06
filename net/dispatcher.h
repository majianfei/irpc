#ifndef __NET_DISPATCHER_H__
#define __NET_DISPATCHER_H__

#include <stdint.h>
#include <map>
#include <memory>
#include <functional>
#include <ev++.h>
#include "channel.h"

namespace inet{

//class Acceptor;
class Package;

typedef std::unique_ptr<Channel> ChannelPtr;

class Dispatcher{

public:
	typedef std::function<void(Channel*,Package*)> HandlePackageCB;

	Dispatcher();

	void loop();

	void NewConnection(int fd);
	void DelConnection(int fd);

	void HandlePackage(Channel* channel,Package* pack);
	void SendPackage(Channel* channel, Package* pack);

	void setHandlePackageCB(HandlePackageCB cb){
		handlePackageCB_ = std::move(cb);
	}

private:
	uint16_t port_;
	//std::unique_ptr<Acceptor> acceptor_;
	ev::default_loop loop_;
	typedef std::map<int, ChannelPtr> ChannelMap;
	ChannelMap channel_map_;

	HandlePackageCB handlePackageCB_;
};

}

#endif