// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class NetworkHandler {

#define AFTER_EXTRA
    // Add Member There
public:
    enum NetworkStatisticsConfig;
    class Connection
    {
    public:
        Connection() = delete;
        Connection(Connection const&) = delete;
        Connection(Connection const&&) = delete;
    };
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETWORKHANDLER
public:
    class NetworkHandler& operator=(class NetworkHandler const &) = delete;
    NetworkHandler(class NetworkHandler const &) = delete;
    NetworkHandler() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NETWORKHANDLER
    MCVAPI unsigned short getDefaultGamePort() const;
    MCVAPI unsigned short getDefaultGamePortv6() const;
    MCVAPI void onAllConnectionsClosed(std::string const &, bool);
    MCVAPI void onConnectionClosed(class NetworkIdentifier const &, std::string const &, bool);
    MCVAPI void onNewIncomingConnection(class NetworkIdentifier const &, class std::shared_ptr<class NetworkPeer>);
    MCVAPI void onNewIncomingLocalConnection(class NetworkIdentifier const &, class std::shared_ptr<class NetworkPeer>);
    MCVAPI void onNewOutgoingConnection(class NetworkIdentifier const &, class std::shared_ptr<class NetworkPeer>);
    MCVAPI void onNewOutgoingLocalConnection(class NetworkIdentifier const &, class std::shared_ptr<class NetworkPeer>);
    MCVAPI void onOutgoingConnectionFailed();
    MCVAPI void onWebsocketRequest(std::string const &, std::string const &, class std::function<void (void)>);
    MCVAPI bool useIPv4Only() const;
    MCVAPI bool useIPv6Only() const;
    MCVAPI ~NetworkHandler();
#endif
    MCAPI NetworkHandler(class Scheduler &, enum NetworkHandler::NetworkStatisticsConfig);
    MCAPI void disconnect();
    MCAPI class std::weak_ptr<class EncryptedNetworkPeer> getEncryptedPeerForUser(class NetworkIdentifier const &);
    MCAPI class NetworkIdentifier getLocalNetworkId() const;
    MCAPI class NetworkPeer * getPeerForUser(class NetworkIdentifier const &);
    MCAPI class NetworkIdentifier getServerId() const;
    MCAPI void runEvents(bool);
    MCAPI void send(class NetworkIdentifier const &, class Packet const &, unsigned char);
    MCAPI void update(std::vector<class Player *> const *);

//private:
    MCAPI class NetworkHandler::Connection * _getConnectionFromId(class NetworkIdentifier const &) const;
    MCAPI void _sendInternal(class NetworkIdentifier const &, class Packet const &, std::string const &);
    MCAPI bool _sortAndPacketizeEvents(class NetworkHandler::Connection &, class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>);

private:

};