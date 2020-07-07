// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_ZipLineConnector_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ZipLineConnector.BP_ZipLineConnector_C.SetConnectorVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          inVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZipLineConnector_C::SetConnectorVisible(bool* inVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZipLineConnector.BP_ZipLineConnector_C.SetConnectorVisible");

	ABP_ZipLineConnector_C_SetConnectorVisible_Params params;
	params.inVisible = inVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZipLineConnector.BP_ZipLineConnector_C.ReceiveConnected
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                WorldLocation                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector*                Direction                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ABP_ZipLineConnector_C::ReceiveConnected(struct FVector* WorldLocation, struct FVector* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZipLineConnector.BP_ZipLineConnector_C.ReceiveConnected");

	ABP_ZipLineConnector_C_ReceiveConnected_Params params;
	params.WorldLocation = WorldLocation;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZipLineConnector.BP_ZipLineConnector_C.ReceiveDisconnected
// (Event, Public, BlueprintEvent)

void ABP_ZipLineConnector_C::ReceiveDisconnected()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZipLineConnector.BP_ZipLineConnector_C.ReceiveDisconnected");

	ABP_ZipLineConnector_C_ReceiveDisconnected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZipLineConnector.BP_ZipLineConnector_C.ReceiveUpdateZipLinePoint
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                WorldLocation                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector*                Directioy                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool*                          Speeding                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZipLineConnector_C::ReceiveUpdateZipLinePoint(struct FVector* WorldLocation, struct FVector* Directioy, bool* Speeding)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZipLineConnector.BP_ZipLineConnector_C.ReceiveUpdateZipLinePoint");

	ABP_ZipLineConnector_C_ReceiveUpdateZipLinePoint_Params params;
	params.WorldLocation = WorldLocation;
	params.Directioy = Directioy;
	params.Speeding = Speeding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZipLineConnector.BP_ZipLineConnector_C.UpdateLocation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZipLineConnector_C::UpdateLocation(struct FVector* Location, struct FVector* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZipLineConnector.BP_ZipLineConnector_C.UpdateLocation");

	ABP_ZipLineConnector_C_UpdateLocation_Params params;
	params.Location = Location;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZipLineConnector.BP_ZipLineConnector_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ZipLineConnector_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZipLineConnector.BP_ZipLineConnector_C.ReceiveBeginPlay");

	ABP_ZipLineConnector_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZipLineConnector.BP_ZipLineConnector_C.ExecuteUbergraph_BP_ZipLineConnector
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZipLineConnector_C::ExecuteUbergraph_BP_ZipLineConnector(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZipLineConnector.BP_ZipLineConnector_C.ExecuteUbergraph_BP_ZipLineConnector");

	ABP_ZipLineConnector_C_ExecuteUbergraph_BP_ZipLineConnector_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
