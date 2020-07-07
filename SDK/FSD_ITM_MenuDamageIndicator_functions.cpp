// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_MenuDamageIndicator_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_MenuDamageIndicator.ITM_MenuDamageIndicator_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MenuDamageIndicator_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MenuDamageIndicator.ITM_MenuDamageIndicator_C.PreConstruct");

	UITM_MenuDamageIndicator_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MenuDamageIndicator.ITM_MenuDamageIndicator_C.OnHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageClass**           DamageClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          anyHealthLost                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MenuDamageIndicator_C::OnHit(float* Damage, class UDamageClass** DamageClass, class AActor** DamageCauser, bool* anyHealthLost)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MenuDamageIndicator.ITM_MenuDamageIndicator_C.OnHit");

	UITM_MenuDamageIndicator_C_OnHit_Params params;
	params.Damage = Damage;
	params.DamageClass = DamageClass;
	params.DamageCauser = DamageCauser;
	params.anyHealthLost = anyHealthLost;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MenuDamageIndicator.ITM_MenuDamageIndicator_C.OnAnimFinished
// (BlueprintCallable, BlueprintEvent)

void UITM_MenuDamageIndicator_C::OnAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MenuDamageIndicator.ITM_MenuDamageIndicator_C.OnAnimFinished");

	UITM_MenuDamageIndicator_C_OnAnimFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MenuDamageIndicator.ITM_MenuDamageIndicator_C.SetMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget**            EscapeMenu                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UITM_MenuDamageIndicator_C::SetMenu(class UUserWidget** EscapeMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MenuDamageIndicator.ITM_MenuDamageIndicator_C.SetMenu");

	UITM_MenuDamageIndicator_C_SetMenu_Params params;
	params.EscapeMenu = EscapeMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_MenuDamageIndicator.ITM_MenuDamageIndicator_C.ExecuteUbergraph_ITM_MenuDamageIndicator
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UITM_MenuDamageIndicator_C::ExecuteUbergraph_ITM_MenuDamageIndicator(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MenuDamageIndicator.ITM_MenuDamageIndicator_C.ExecuteUbergraph_ITM_MenuDamageIndicator");

	UITM_MenuDamageIndicator_C_ExecuteUbergraph_ITM_MenuDamageIndicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
