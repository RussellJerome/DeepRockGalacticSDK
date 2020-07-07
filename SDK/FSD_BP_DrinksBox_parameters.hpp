#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_DrinksBox_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_DrinksBox.BP_DrinksBox_C.OnRep_DrinkableActor
struct ABP_DrinksBox_C_OnRep_DrinkableActor_Params
{
};

// Function BP_DrinksBox.BP_DrinksBox_C.IsAvailable
struct ABP_DrinksBox_C_IsAvailable_Params
{
	bool                                               IsAvailable;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DrinksBox.BP_DrinksBox_C.OnRep_State
struct ABP_DrinksBox_C_OnRep_State_Params
{
};

// Function BP_DrinksBox.BP_DrinksBox_C.Spawn Drink
struct ABP_DrinksBox_C_Spawn_Drink_Params
{
	class UDrinkableDataAsset**                        Drinkable;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DrinksBox.BP_DrinksBox_C.OnDrinkableDestroyed
struct ABP_DrinksBox_C_OnDrinkableDestroyed_Params
{
	class AActor**                                     DestroyedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DrinksBox.BP_DrinksBox_C.Fill DrinkableActor
struct ABP_DrinksBox_C_Fill_DrinkableActor_Params
{
};

// Function BP_DrinksBox.BP_DrinksBox_C.ExecuteUbergraph_BP_DrinksBox
struct ABP_DrinksBox_C_ExecuteUbergraph_BP_DrinksBox_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DrinksBox.BP_DrinksBox_C.OnStateChanged__DelegateSignature
struct ABP_DrinksBox_C_OnStateChanged__DelegateSignature_Params
{
	unsigned char*                                     State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DrinksBox.BP_DrinksBox_C.OnDrinkReady__DelegateSignature
struct ABP_DrinksBox_C_OnDrinkReady__DelegateSignature_Params
{
	class ABP_DrinksBox_C**                            DrinkBox;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DrinksBox.BP_DrinksBox_C.OnAvailableForNewDrink__DelegateSignature
struct ABP_DrinksBox_C_OnAvailableForNewDrink__DelegateSignature_Params
{
	class ABP_DrinksBox_C**                            DrinkBox;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
