#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ITM_DeepDives_Join_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ITM_DeepDives_Join.ITM_DeepDives_Join_C
// 0x0120 (0x0350 - 0x0230)
class UITM_DeepDives_Join_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UITM_DeepDiveHeader_C*                       ITM_DeepDiveHeader;                                       // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBasic_ButtonScalable2_C*                    RefreshBtn;                                               // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UITM_DeepDives_ServerFilters_C*              ServerList_Filters;                                       // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UITM_DeepDives_ServerList_C*                 ServerList_Hard;                                          // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UITM_DeepDives_ServerList_C*                 ServerList_Regular;                                       // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWND_JoiningPassword_C*                      WND_JoiningPassword;                                      // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class ABP_GameState_SpaceRig_C*                    GameState;                                                // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FBlueprintSessionResult                     JoinSession;                                              // 0x0270(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UWND_Joining_C*                              WND_JoiningWait;                                          // 0x0328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	int                                                UpdateIndex;                                              // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0334(0x0004) MISSED OFFSET
	struct FTimerHandle                                UpdateTimerHandle;                                        // 0x0338(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnJoining;                                                // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ITM_DeepDives_Join.ITM_DeepDives_Join_C");
		return ptr;
	}


	void UpdateTextSearchFilter();
	void PopulateServerViewsIfVisible();
	void PopulateNext();
	void ClearServerViews();
	void PopulateServerViews();
	void OnFailure_1FB10C08435EA9BCE39BD9ABFF154396();
	void OnSuccess_1FB10C08435EA9BCE39BD9ABFF154396();
	void OnFailure_0B5BC1CF422A3FBD05716A89A13443B1();
	void OnSuccess_0B5BC1CF422A3FBD05716A89A13443B1();
	void Construct();
	void Open();
	void BndEvt__ServerList_Regular_K2Node_ComponentBoundEvent_0_OnJoinServer__DelegateSignature(struct FBlueprintSessionResult* Session);
	void BndEvt__ServerList_Hard_K2Node_ComponentBoundEvent_1_OnJoinServer__DelegateSignature(struct FBlueprintSessionResult* Session);
	void OnJoinServerClicked(struct FBlueprintSessionResult* InSession);
	void BndEvt__ITM_DeepDives_ServerFilters_K2Node_ComponentBoundEvent_2_OnSearchFiltersChanged__DelegateSignature();
	void BndEvt__WND_JoiningPassword_K2Node_ComponentBoundEvent_3_JoinWithPassword__DelegateSignature(struct FBlueprintSessionResult* Session, class FString* Password);
	void Close_Waiting_Window();
	void Join_Server(struct FBlueprintSessionResult* Session, class FString* Password);
	void BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
	void ExecuteUbergraph_ITM_DeepDives_Join(int* EntryPoint);
	void OnJoining__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
