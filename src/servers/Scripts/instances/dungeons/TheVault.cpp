#include <ScriptObject.h>
#include <Zone/InstanceContent.h>

class TheVault : public InstanceContentScript
{
public:
   TheVault() : InstanceContentScript( 34 )
   { }

   void onInit( InstanceContentPtr instance ) override
   {

   }

   void onUpdate( InstanceContentPtr instance, uint32_t currTime ) override
   {

   }

   void onEnterTerritory( Entity::Player &player, uint32_t eventId, uint16_t param1, uint16_t param2 ) override
   {

   }

};