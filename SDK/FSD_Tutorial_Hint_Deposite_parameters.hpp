#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Tutorial_Hint_Deposite_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Tutorial_Hint_Deposite.Tutorial_Hint_Deposite_C.OnResourceFull
struct UTutorial_Hint_Deposite_C_OnResourceFull_Params
{
	class UCappedResource**                            Resource;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tutorial_Hint_Deposite.Tutorial_Hint_Deposite_C.OnCallDonkey
struct UTutorial_Hint_Deposite_C_OnCallDonkey_Params
{
};

// Function Tutorial_Hint_Deposite.Tutorial_Hint_Deposite_C.ReceiveOnInitialized
struct UTutorial_Hint_Deposite_C_ReceiveOnInitialized_Params
{
};

// Function Tutorial_Hint_Deposite.Tutorial_Hint_Deposite_C.DepositEnd
struct UTutorial_Hint_Deposite_C_DepositEnd_Params
{
	class UResourceBank**                              ResourceBank;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Tutorial_Hint_Deposite.Tutorial_Hint_Deposite_C.ExecuteUbergraph_Tutorial_Hint_Deposite
struct UTutorial_Hint_Deposite_C_ExecuteUbergraph_Tutorial_Hint_Deposite_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
