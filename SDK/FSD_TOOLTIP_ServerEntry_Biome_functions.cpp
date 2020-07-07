// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_TOOLTIP_ServerEntry_Biome_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TOOLTIP_ServerEntry_Biome.TOOLTIP_ServerEntry_Biome_C.SetData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBiome**                 InBiome                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTOOLTIP_ServerEntry_Biome_C::SetData(class UBiome** InBiome)
{
	static auto fn = UObject::FindObject<UFunction>("Function TOOLTIP_ServerEntry_Biome.TOOLTIP_ServerEntry_Biome_C.SetData");

	UTOOLTIP_ServerEntry_Biome_C_SetData_Params params;
	params.InBiome = InBiome;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TOOLTIP_ServerEntry_Biome.TOOLTIP_ServerEntry_Biome_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTOOLTIP_ServerEntry_Biome_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TOOLTIP_ServerEntry_Biome.TOOLTIP_ServerEntry_Biome_C.PreConstruct");

	UTOOLTIP_ServerEntry_Biome_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TOOLTIP_ServerEntry_Biome.TOOLTIP_ServerEntry_Biome_C.ExecuteUbergraph_TOOLTIP_ServerEntry_Biome
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTOOLTIP_ServerEntry_Biome_C::ExecuteUbergraph_TOOLTIP_ServerEntry_Biome(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TOOLTIP_ServerEntry_Biome.TOOLTIP_ServerEntry_Biome_C.ExecuteUbergraph_TOOLTIP_ServerEntry_Biome");

	UTOOLTIP_ServerEntry_Biome_C_ExecuteUbergraph_TOOLTIP_ServerEntry_Biome_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
