#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_WND_Jobs_Entry_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C
// 0x0028 (0x0258 - 0x0230)
class UWND_Jobs_Entry_Base_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FScriptMulticastDelegate                    Unfolded;                                                 // 0x0238(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    Updated;                                                  // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C");
		return ptr;
	}


	void Fold();
	void SetData(class UCampaign** Campaign);
	void Refresh();
	void Unfold();
	void ExecuteUbergraph_WND_Jobs_Entry_Base(int* EntryPoint);
	void Updated__DelegateSignature();
	void Unfolded__DelegateSignature(class UWND_Jobs_Entry_Base_C** entry);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
