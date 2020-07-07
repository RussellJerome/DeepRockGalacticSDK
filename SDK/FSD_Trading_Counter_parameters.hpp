#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Trading_Counter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Trading_Counter.Trading_Counter_C.SetMaxValue
struct UTrading_Counter_C_SetMaxValue_Params
{
	int*                                               Max_Value;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Trading_Counter.Trading_Counter_C.GetValue
struct UTrading_Counter_C_GetValue_Params
{
	int                                                Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Trading_Counter.Trading_Counter_C.SetValue
struct UTrading_Counter_C_SetValue_Params
{
	int*                                               Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Trading_Counter.Trading_Counter_C.PreConstruct
struct UTrading_Counter_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Trading_Counter.Trading_Counter_C.BndEvt__Basic_ButtonScalable_K2Node_ComponentBoundEvent_255_OnPressed__DelegateSignature
struct UTrading_Counter_C_BndEvt__Basic_ButtonScalable_K2Node_ComponentBoundEvent_255_OnPressed__DelegateSignature_Params
{
};

// Function Trading_Counter.Trading_Counter_C.BndEvt__ButtonMinus_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature
struct UTrading_Counter_C_BndEvt__ButtonMinus_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature_Params
{
};

// Function Trading_Counter.Trading_Counter_C.Hold Button
struct UTrading_Counter_C_Hold_Button_Params
{
	int*                                               Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBasic_ButtonScalable_C**                    Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Trading_Counter.Trading_Counter_C.ExecuteUbergraph_Trading_Counter
struct UTrading_Counter_C_ExecuteUbergraph_Trading_Counter_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Trading_Counter.Trading_Counter_C.OnValueChanged__DelegateSignature
struct UTrading_Counter_C_OnValueChanged__DelegateSignature_Params
{
	int*                                               Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
