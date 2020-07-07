// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_TOOLTIP_MatrixCore_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TOOLTIP_MatrixCore.TOOLTIP_MatrixCore_C.FromSchematic
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USchematic**             InSchematic                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTOOLTIP_MatrixCore_C::FromSchematic(class USchematic** InSchematic)
{
	static auto fn = UObject::FindObject<UFunction>("Function TOOLTIP_MatrixCore.TOOLTIP_MatrixCore_C.FromSchematic");

	UTOOLTIP_MatrixCore_C_FromSchematic_Params params;
	params.InSchematic = InSchematic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
