// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Lore_Container_CreatureInfo_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Lore_Container_CreatureInfo.Lore_Container_CreatureInfo_C.GetTypeText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EEnemyType*                    InType                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   DisplayText                    (Parm, OutParm)
// class UTexture2D*              Icon                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULore_Container_CreatureInfo_C::GetTypeText(EEnemyType* InType, struct FText* DisplayText, class UTexture2D** Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_Container_CreatureInfo.Lore_Container_CreatureInfo_C.GetTypeText");

	ULore_Container_CreatureInfo_C_GetTypeText_Params params;
	params.InType = InType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DisplayText != nullptr)
		*DisplayText = params.DisplayText;
	if (Icon != nullptr)
		*Icon = params.Icon;
}


// Function Lore_Container_CreatureInfo.Lore_Container_CreatureInfo_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEnemyMinersManualData** Creature                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMinersManual**          MinersManual                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULore_Container_CreatureInfo_C::SetData(class UEnemyMinersManualData** Creature, class UMinersManual** MinersManual)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_Container_CreatureInfo.Lore_Container_CreatureInfo_C.SetData");

	ULore_Container_CreatureInfo_C_SetData_Params params;
	params.Creature = Creature;
	params.MinersManual = MinersManual;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lore_Container_CreatureInfo.Lore_Container_CreatureInfo_C.FillInAttacks
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWrapBox**               Container                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<struct FEnemyAttackDescription>* attacks                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ULore_Container_CreatureInfo_C::FillInAttacks(class UWrapBox** Container, TArray<struct FEnemyAttackDescription>* attacks)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_Container_CreatureInfo.Lore_Container_CreatureInfo_C.FillInAttacks");

	ULore_Container_CreatureInfo_C_FillInAttacks_Params params;
	params.Container = Container;
	params.attacks = attacks;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lore_Container_CreatureInfo.Lore_Container_CreatureInfo_C.ExecuteUbergraph_Lore_Container_CreatureInfo
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULore_Container_CreatureInfo_C::ExecuteUbergraph_Lore_Container_CreatureInfo(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_Container_CreatureInfo.Lore_Container_CreatureInfo_C.ExecuteUbergraph_Lore_Container_CreatureInfo");

	ULore_Container_CreatureInfo_C_ExecuteUbergraph_Lore_Container_CreatureInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
