// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Lore_Content_Statistics_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Lore_Content_Statistics.Lore_Content_Statistics_C.SetData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEnemyMinersManualData** enemy                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FDamageTypeDescription>* WeaknessesIcons                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FDamageTypeDescription>* ResistancesIcons               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ULore_Content_Statistics_C::SetData(class UEnemyMinersManualData** enemy, TArray<struct FDamageTypeDescription>* WeaknessesIcons, TArray<struct FDamageTypeDescription>* ResistancesIcons)
{
	static auto fn = UObject::FindObject<UFunction>("Function Lore_Content_Statistics.Lore_Content_Statistics_C.SetData");

	ULore_Content_Statistics_C_SetData_Params params;
	params.enemy = enemy;
	params.WeaknessesIcons = WeaknessesIcons;
	params.ResistancesIcons = ResistancesIcons;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
