#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_TSK_FleeFrom_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TSK_FleeFrom.TSK_FleeFrom_C.SetFleeFalse
struct UTSK_FleeFrom_C_SetFleeFalse_Params
{
	class AController**                                Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TSK_FleeFrom.TSK_FleeFrom_C.OutsideDanger
struct UTSK_FleeFrom_C_OutsideDanger_Params
{
	class AActor**                                     Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TSK_FleeFrom.TSK_FleeFrom_C.ReceiveExecuteAI
struct UTSK_FleeFrom_C_ReceiveExecuteAI_Params
{
	class AAIController**                              OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TSK_FleeFrom.TSK_FleeFrom_C.PathDone
struct UTSK_FleeFrom_C_PathDone_Params
{
	bool*                                              success;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TSK_FleeFrom.TSK_FleeFrom_C.RefreshDest
struct UTSK_FleeFrom_C_RefreshDest_Params
{
};

// Function TSK_FleeFrom.TSK_FleeFrom_C.ReceiveAbortAI
struct UTSK_FleeFrom_C_ReceiveAbortAI_Params
{
	class AAIController**                              OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TSK_FleeFrom.TSK_FleeFrom_C.ExecuteUbergraph_TSK_FleeFrom
struct UTSK_FleeFrom_C_ExecuteUbergraph_TSK_FleeFrom_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
