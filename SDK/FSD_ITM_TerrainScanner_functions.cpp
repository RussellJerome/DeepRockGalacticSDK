// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_TerrainScanner_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_TerrainScanner.ITM_TerrainScanner_C.AddedToInventory
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APlayerCharacter**       ItemOwner                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AITM_TerrainScanner_C::AddedToInventory(class APlayerCharacter** ItemOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TerrainScanner.ITM_TerrainScanner_C.AddedToInventory");

	AITM_TerrainScanner_C_AddedToInventory_Params params;
	params.ItemOwner = ItemOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_TerrainScanner.ITM_TerrainScanner_C.OnTerrainScannerPressed
// (BlueprintCallable, BlueprintEvent)

void AITM_TerrainScanner_C::OnTerrainScannerPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TerrainScanner.ITM_TerrainScanner_C.OnTerrainScannerPressed");

	AITM_TerrainScanner_C_OnTerrainScannerPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_TerrainScanner.ITM_TerrainScanner_C.OnTerrainScannerReleased
// (BlueprintCallable, BlueprintEvent)

void AITM_TerrainScanner_C::OnTerrainScannerReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TerrainScanner.ITM_TerrainScanner_C.OnTerrainScannerReleased");

	AITM_TerrainScanner_C_OnTerrainScannerReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ITM_TerrainScanner.ITM_TerrainScanner_C.ExecuteUbergraph_ITM_TerrainScanner
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AITM_TerrainScanner_C::ExecuteUbergraph_ITM_TerrainScanner(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TerrainScanner.ITM_TerrainScanner_C.ExecuteUbergraph_ITM_TerrainScanner");

	AITM_TerrainScanner_C_ExecuteUbergraph_ITM_TerrainScanner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
