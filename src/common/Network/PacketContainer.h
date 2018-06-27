#ifndef _PacketContainer_H_
#define _PacketContainer_H_

#include <vector>

#include "Common.h"
#include "CommonNetwork.h"
#include "GamePacketNew.h"

namespace Core {
namespace Network {
namespace Packets {

class GamePacket;

class PacketContainer
{
public:
   PacketContainer();
   ~PacketContainer();

   void addPacket( FFXIVPacketBase entry );

   FFXIVARR_PACKET_HEADER m_ipcHdr;

   std::vector< FFXIVPacketBase > m_entryList;

   std::string toString();

   void fillSendBuffer( std::vector< uint8_t >& sendBuffer );

};

}
}
}

#endif
