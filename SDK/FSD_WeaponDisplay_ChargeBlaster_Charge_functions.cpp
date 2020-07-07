// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WeaponDisplay_ChargeBlaster_Charge_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponDisplay_ChargeBlaster_Charge.WeaponDisplay_ChargeBlaster_Charge_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWeaponDisplay_ChargeBlaster_Charge_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_ChargeBlaster_Charge.WeaponDisplay_ChargeBlaster_Charge_C.Construct");

	UWeaponDisplay_ChargeBlaster_Charge_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponDisplay_ChargeBlaster_Charge.WeaponDisplay_ChargeBlaster_Charge_C.SetChargeValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         ChargeValue                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Overheated                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ready                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          FullCharge                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponDisplay_ChargeBlaster_Charge_C::SetChargeValue(float* ChargeValue, bool* Overheated, bool* ready, bool* FullCharge)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_ChargeBlaster_Charge.WeaponDisplay_ChargeBlaster_Charge_C.SetChargeValue");

	UWeaponDisplay_ChargeBlaster_Charge_C_SetChargeValue_Params params;
	params.ChargeValue = ChargeValue;
	params.Overheated = Overheated;
	params.ready = ready;
	params.FullCharge = FullCharge;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponDisplay_ChargeBlaster_Charge.WeaponDisplay_ChargeBlaster_Charge_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponDisplay_ChargeBlaster_Charge_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_ChargeBlaster_Charge.WeaponDisplay_ChargeBlaster_Charge_C.PreConstruct");

	UWeaponDisplay_ChargeBlaster_Charge_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponDisplay_ChargeBlaster_Charge.WeaponDisplay_ChargeBlaster_Charge_C.ExecuteUbergraph_WeaponDisplay_ChargeBlaster_Charge
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponDisplay_ChargeBlaster_Charge_C::ExecuteUbergraph_WeaponDisplay_ChargeBlaster_Charge(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponDisplay_ChargeBlaster_Charge.WeaponDisplay_ChargeBlaster_Charge_C.ExecuteUbergraph_WeaponDisplay_ChargeBlaster_Charge");

	UWeaponDisplay_ChargeBlaster_Charge_C_ExecuteUbergraph_WeaponDisplay_ChargeBlaster_Charge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
