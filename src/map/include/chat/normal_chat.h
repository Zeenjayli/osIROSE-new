#pragma once

#include "dataconsts.h"
#include "cli_normal_chat.h"

class EntitySystem;

namespace Chat {
void normal_chat(EntitySystem&, RoseCommon::Entity, const RoseCommon::Packet::CliNormalChat&);
}
