#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_Cheat_GiveBeerBuff_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Cheat_GiveBeerBuff.Cheat_GiveBeerBuff_C
// 0x0030 (0x0260 - 0x0230)
class UCheat_GiveBeerBuff_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UScrollBox*                                  ScrollBox_80;                                             // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UTemporaryBuff*>                      BeerBuffList;                                             // 0x0240(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UCheat_GiveBeerBuff_Row_C*>           my_beer_buff_rows;                                        // 0x0250(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Cheat_GiveBeerBuff.Cheat_GiveBeerBuff_C");
		return ptr;
	}


	void Construct();
	void set_selected_row_active(class UCheat_GiveBeerBuff_Row_C** Buff_row_to_skip);
	void ExecuteUbergraph_Cheat_GiveBeerBuff(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
