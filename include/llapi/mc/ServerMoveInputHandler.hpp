// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "MoveInput.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ServerMoveInputHandler : public MoveInput {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERMOVEINPUTHANDLER
public:
    class ServerMoveInputHandler& operator=(class ServerMoveInputHandler const &) = delete;
    ServerMoveInputHandler(class ServerMoveInputHandler const &) = delete;
    ServerMoveInputHandler() = delete;
#endif

public:
    /*0*/ virtual ~ServerMoveInputHandler();
    /*1*/ virtual void tick(class Player &);
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    /*5*/ virtual void __unk_vfn_5();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERMOVEINPUTHANDLER
    MCVAPI void registerInputHandlers(class InputHandler &);
#endif
    MCAPI void digestPlayerInputPacket(class PlayerAuthInputPacket const &);

};