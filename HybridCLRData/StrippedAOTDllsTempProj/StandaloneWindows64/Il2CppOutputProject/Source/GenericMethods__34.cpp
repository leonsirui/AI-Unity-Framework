#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif




template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct ConstrainedActionInvoker1
{
	static inline void Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, params[0]);
	}
};
template <typename R>
struct ConstrainedFuncInvoker0
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj)
	{
		R ret;
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct ConstrainedFuncInvoker1
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1 p1)
	{
		R ret;
		void* params[1] = { &p1 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, &ret);
		return ret;
	}
};

struct Header_t5C53D1BD1CC252050289B784C3FC1E72F8E5D03B;
struct Header_t4A6BF0415F65A21EBA5C2E48BB2EB03E5A5FF92B;
struct UnsafeList_1_tA068C24D5E1D5CBC03E6D51E587FF66C4EC0C8E3;
struct UnsafeList_1_t7517BB16A0F7933063E20E60999A377DE8B0B4F4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1;
struct Archetype_t96EB5691CCC58A7A4E29CA4F9EA62A25E4C14582;
struct ArchetypePropertyOverride_t1CBD7473E378B647BE981355D2964B81F92150CB;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct BatchDrawCommand_t9DAB9B739DA9EBC6B1BB0D2DD51AF65B12F66BF0;
struct BatchDrawRange_t736D745E918A629658B80A0F7D2D17DAFBA6172F;
struct BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C;
struct BatchMaterialMeshSubMesh_t27466F10F34C75AB783307C2C6D83C84B08F52F2;
struct BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct BlobAssetBatch_tE7DAEECF09D38F983FE3F829F7774B40F4FD6B46;
struct BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct ChunkVisibility_tE2ABD1B3C6900BB4FB37AEFB64ED8A272747D28A;
struct ContentFileId_t630F8A1A207C9248EE434BA833823A2D5C384FD7;
struct DrawCommandStream_t0A2BEB33831D3F47F3A3E1CCA7359B89C0429D0A;
struct DrawCommandVisibility_t192861ABB8BE0514FBDCAB8FC83808D83178DEED;
struct DrawCommandWorkItem_tF70FA79285F3CB53DDEBCF4BF0F3447F11A3F045;
struct Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD;
struct EntityCommandBufferData_t88C8EFD5BBEF42F8008AF73FA2C27B60E5A31DC2;
struct EntityComponentStore_tA85E100ECD667365B260A68DFD9DF9B7C04D037F;
struct EntityQueryImpl_t3E7DD11B3ECD6D708BF02ACF2C07B42A913F7574;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
struct IntPtr_t;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct RemoteContentId_t27977325179FF4C511004EBF35A0B38AA71D66B0;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C;
struct String_t;
struct Type_t;
struct TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C;
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF;
struct UnsafePackedBinaryStream_tA167AA778E63332B246152289D19AED3846C8DFE;
struct UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct ActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA;
struct GetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE;
struct GetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E;
struct GetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B;
struct GetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452;
struct ObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34;
struct ObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C;
struct ObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA;
struct ReferencedEntityUsage_t5A0EA88A4004D1FC8F522DD8A8296F79D0D92B81;
struct BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8;
struct OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982;
struct SharedComponentInfo_tC04CFD574DE82A0BD72273D1EB8868562AE8D021;
struct ComponentData_t2CB40CF3C2FA75B9CA5D8292DCFA8BF12A42DB07;
struct HeaderData_t5CE38A1426623168DB817F1D87E639856A2614B3;
struct PaddedAllocator_tB9AB632DA425C7D50208D9571960614EF43CDF24;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralA515DF9A6BFAAD184ED199830B01884B94168561;
IL2CPP_EXTERN_C String_t* _stringLiteralF25B102A096200C516984CAE5CAA5A67739A1299;
IL2CPP_EXTERN_C String_t* _stringLiteralF62C847A5A10CF47E92BE05483B8A45C31A2FAE7;
IL2CPP_EXTERN_C const RuntimeMethod* BlobArray_1_GetUnsafePtr_m1C36E9770A33F35255BFCC18D7FA21E4863771FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BlobBuilderArray_1_GetUnsafePtr_mC894A9506A69AE0041E008C9BDEC6DB0B732FE22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BlobBuilder_Allocate_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86211515B461EE89BA269987A6A5C659AF0F494E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1_Add_m8F1C8B337385027E5C7335B0A69C3F58D9580C5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct BlobProxy_t02E2BE16CD8692CAE659D61252AF7A4B3FC5E9E4  : public RuntimeObject
{
};
struct BlobStringExtensions_t161E07103958FBA1C981E642FBF37D20E6D90FA8  : public RuntimeObject
{
};
struct Buffer_tF5DDA52AA39735125D710A126AC80BADEB900CD4  : public RuntimeObject
{
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct ArraySlice_1_t38E85DAE9975597DC96B21D715F42183A9C5EF03 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct BlobArray_1_t112C49ADFEB7465DC55221B4D8E6C721002D4D16 
{
	int32_t ___m_OffsetPtr;
	int32_t ___m_Length;
};
struct BlobArray_1_t92D4034D117B24B89F7B548E16040441D797DD7A 
{
	int32_t ___m_OffsetPtr;
	int32_t ___m_Length;
};
struct BlobBuilderArray_1_t5B3DC5242B2D9A248557AE9E6482FAAADCF8C152 
{
	void* ___m_data;
	int32_t ___m_length;
};
struct BlobBuilderArray_1_t9ACBF11807FDDB4011EDB8CC24DED8347A67F9CE 
{
	void* ___m_data;
	int32_t ___m_length;
};
struct BlobPtr_1_t06CF9D7095B1DC673B78A9CA39F8296DEE4DB5C8 
{
	int32_t ___m_OffsetPtr;
};
struct DrawStream_1_tA8E639201CAE668B8909553023EB9578DCF18B5A 
{
	Header_t5C53D1BD1CC252050289B784C3FC1E72F8E5D03B* ___Head;
	DrawCommandVisibility_t192861ABB8BE0514FBDCAB8FC83808D83178DEED* ___m_Begin;
	int32_t ___m_Count;
	int32_t ___m_TotalInstances;
};
struct DrawStream_1_t4E346D7D31A8F53061750C07CF8E9157B2F97FB2 
{
	Header_t4A6BF0415F65A21EBA5C2E48BB2EB03E5A5FF92B* ___Head;
	intptr_t* ___m_Begin;
	int32_t ___m_Count;
	int32_t ___m_TotalInstances;
};
struct Enumerator_t37839615D82C9BDB7D4A9DC4A5D719BBF9CF423D 
{
	int32_t* ___m_Ptr;
	int32_t ___m_Length;
	int32_t ___m_Index;
};
struct NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8 
{
	UnsafeList_1_tA068C24D5E1D5CBC03E6D51E587FF66C4EC0C8E3* ___m_ListData;
};
struct NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE 
{
	UnsafeList_1_t7517BB16A0F7933063E20E60999A377DE8B0B4F4* ___m_ListData;
};
struct SharedStatic_1_t91D24BF9DAB0EDD81AA3013F2C4CBD0A98040667 
{
	void* ____buffer;
};
struct ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D 
{
	int32_t ___Item1;
	int32_t ___Item2;
};
struct ArchetypePropertyOverride_t1CBD7473E378B647BE981355D2964B81F92150CB 
{
	int32_t ___NameID;
	int32_t ___TypeIndex;
	int16_t ___SizeBytesCPU;
	int16_t ___SizeBytesGPU;
};
struct AspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50 
{
	int32_t ___TypeIndex;
};
struct BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D 
{
	BatchDrawCommand_t9DAB9B739DA9EBC6B1BB0D2DD51AF65B12F66BF0* ___drawCommands;
	int32_t* ___visibleInstances;
	BatchDrawRange_t736D745E918A629658B80A0F7D2D17DAFBA6172F* ___drawRanges;
	float* ___instanceSortingPositions;
	int32_t* ___drawCommandPickingInstanceIDs;
	int32_t ___drawCommandCount;
	int32_t ___visibleInstanceCount;
	int32_t ___drawRangeCount;
	int32_t ___instanceSortingPositionFloatCount;
};
struct BatchFilterSettings_t24CAFF037E8C667ABC0B23D55D6CC7125947CDE2 
{
	uint32_t ___renderingLayerMask;
	uint8_t ___layer;
	uint8_t ___m_motionMode;
	uint8_t ___m_shadowMode;
	uint8_t ___m_receiveShadows;
	uint8_t ___m_staticShadowCaster;
	uint8_t ___m_allDepthSorted;
};
struct BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 
{
	uint32_t ___value;
};
struct BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C 
{
	uint32_t ___value;
};
struct BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 
{
	uint32_t ___value;
};
struct BlendShapeWeight_t1C25C923D3E59C3027096C3A28F0B3BA31BBAF1E 
{
	float ___Value;
};
struct BlendWeightBufferIndex_tF8CF0F3336B71B632F5883DC51FCE4A9BACA6ACF 
{
	int32_t ___Value;
};
struct BlobAssetChange_t8D6DB4D327EEE644A836A013F47334D92A86D3BF 
{
	int32_t ___Length;
	uint64_t ___Hash;
};
struct BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 
{
	alignas(IL2CPP_SIZEOF_VOID_P) BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* ___Header;
};
#pragma pack(push, tp, 1)
struct BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					uint8_t* ___m_Ptr;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint8_t* ___m_Ptr_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					int64_t ___m_Align8Union;
				};
				#pragma pack(pop, tp)
				struct
				{
					int64_t ___m_Align8Union_forAlignmentOnly;
				};
			};
		};
		uint8_t BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998__padding[8];
	};
};
#pragma pack(pop, tp)
struct BoneWeight1_t7649BFE1ACB15FE000C995A416EFF9F32C5EA55F 
{
	float ___m_Weight;
	int32_t ___m_BoneIndex;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct ChunkIndex_t932E9A325E198362B9521CAD777D34C98F26792A 
{
	int32_t ___Value;
};
struct ChunkProperty_tFE8800ADA52889512BD70B3843D4F2F505D33A81 
{
	int32_t ___ComponentTypeIndex;
	int32_t ___ValueSizeBytesCPU;
	int32_t ___ValueSizeBytesGPU;
	int32_t ___GPUDataBegin;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___rgba;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___r;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_OffsetPadding[1];
			uint8_t ___g;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_OffsetPadding[2];
			uint8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_OffsetPadding[3];
			uint8_t ___a;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_forAlignmentOnly;
		};
	};
};
struct ContentFile_t2CF8D8FD3314B9FBF06311DB08DF84D55556386B 
{
	uint64_t ___Id;
};
struct DecalEntity_t8CAF09C65939503449C4138ADCDC4907196293FD 
{
	int32_t ___index;
	int32_t ___version;
};
struct DecalSubDrawCall_t68CDD2E663F805776DE0281AB4FAEDC8B8D9EC49 
{
	int32_t ___start;
	int32_t ___end;
};
struct DeformedMeshIndex_tEBE2179D4DF3A39AC97BE4A9F245EE6749F89A0E 
{
	uint32_t ___Value;
};
struct DepthState_t798415D2C1D9202E555FEE5D4C5FDF6B3A077255 
{
	uint8_t ___m_WriteEnabled;
	int8_t ___m_CompareFunction;
};
struct DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5 
{
	int32_t ___firstIndex;
	int32_t ___indexCount;
	int32_t ___minIndexVal;
	int32_t ___vertsReferenced;
};
struct DrawCommandBin_t5539B12FCDB48E97B70D54E10FD761C65A739361 
{
	int32_t ___NumInstances;
	int32_t ___InstanceOffset;
	int32_t ___DrawCommandOffset;
	int32_t ___PositionOffset;
};
struct DrawCommandWorkItem_tF70FA79285F3CB53DDEBCF4BF0F3447F11A3F045 
{
	Header_t5C53D1BD1CC252050289B784C3FC1E72F8E5D03B* ___Arrays;
	Header_t4A6BF0415F65A21EBA5C2E48BB2EB03E5A5FF92B* ___TransformArrays;
	int32_t ___BinIndex;
	int32_t ___PrefixSumNumInstances;
};
struct Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD 
{
	int32_t ___Index;
	int32_t ___Version;
};
struct EntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354 
{
	Archetype_t96EB5691CCC58A7A4E29CA4F9EA62A25E4C14582* ___Archetype;
};
struct EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 
{
	uint64_t ___a;
	uint64_t ___b;
};
struct EntityQuery_t23B7A11FAA475D860E94409BFD4CF7E4B337CF90 
{
	EntityQueryImpl_t3E7DD11B3ECD6D708BF02ACF2C07B42A913F7574* _____impl;
	uint64_t _____seqno;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
#pragma pack(push, tp, 1)
struct FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					uint8_t ___byte0000;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint8_t ___byte0000_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0001_OffsetPadding[1];
					uint8_t ___byte0001;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0001_OffsetPadding_forAlignmentOnly[1];
					uint8_t ___byte0001_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0002_OffsetPadding[2];
					uint8_t ___byte0002;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0002_OffsetPadding_forAlignmentOnly[2];
					uint8_t ___byte0002_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0003_OffsetPadding[3];
					uint8_t ___byte0003;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0003_OffsetPadding_forAlignmentOnly[3];
					uint8_t ___byte0003_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0004_OffsetPadding[4];
					uint8_t ___byte0004;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0004_OffsetPadding_forAlignmentOnly[4];
					uint8_t ___byte0004_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0005_OffsetPadding[5];
					uint8_t ___byte0005;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0005_OffsetPadding_forAlignmentOnly[5];
					uint8_t ___byte0005_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0006_OffsetPadding[6];
					uint8_t ___byte0006;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0006_OffsetPadding_forAlignmentOnly[6];
					uint8_t ___byte0006_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0007_OffsetPadding[7];
					uint8_t ___byte0007;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0007_OffsetPadding_forAlignmentOnly[7];
					uint8_t ___byte0007_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0008_OffsetPadding[8];
					uint8_t ___byte0008;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0008_OffsetPadding_forAlignmentOnly[8];
					uint8_t ___byte0008_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0009_OffsetPadding[9];
					uint8_t ___byte0009;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0009_OffsetPadding_forAlignmentOnly[9];
					uint8_t ___byte0009_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0010_OffsetPadding[10];
					uint8_t ___byte0010;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0010_OffsetPadding_forAlignmentOnly[10];
					uint8_t ___byte0010_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0011_OffsetPadding[11];
					uint8_t ___byte0011;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0011_OffsetPadding_forAlignmentOnly[11];
					uint8_t ___byte0011_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0012_OffsetPadding[12];
					uint8_t ___byte0012;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0012_OffsetPadding_forAlignmentOnly[12];
					uint8_t ___byte0012_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0013_OffsetPadding[13];
					uint8_t ___byte0013;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0013_OffsetPadding_forAlignmentOnly[13];
					uint8_t ___byte0013_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0014_OffsetPadding[14];
					uint8_t ___byte0014;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0014_OffsetPadding_forAlignmentOnly[14];
					uint8_t ___byte0014_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0015_OffsetPadding[15];
					uint8_t ___byte0015;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0015_OffsetPadding_forAlignmentOnly[15];
					uint8_t ___byte0015_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0__padding[16];
	};
};
#pragma pack(pop, tp)
struct Handle_t734A63706EDE11FF0429B53F7756AE2873E1F665 
{
	int32_t ___Index;
	int32_t ___Version;
};
struct HeapBlock_t44D3F86E0ED8F3C5FC9B70A056739AEBEA18640D 
{
	uint64_t ___m_Begin;
	uint64_t ___m_End;
};
struct InclusiveRange_t1762A170B7A199C25DAC4CB39CB109710812A54D 
{
	int16_t ___start;
	int16_t ___end;
};
struct IndexedInt_t24BCB89B541376CF44EFAC03B879082052E960F7 
{
	int32_t ___Value;
	int32_t ___Index;
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 
{
	uint64_t ___jobGroup;
	int32_t ___version;
};
struct Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 
{
	float ___m_Time;
	float ___m_Value;
	float ___m_InTangent;
	float ___m_OutTangent;
	int32_t ___m_WeightedMode;
	float ___m_InWeight;
	float ___m_OutWeight;
};
struct LODRange_t67EDD8C5D2708AAA1E7012C5FD21E15B8A9C2F43 
{
	float ___MinDist;
	float ___MaxDist;
	int32_t ___LODMask;
};
struct LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 
{
	float ___m_red;
	float ___m_green;
	float ___m_blue;
	float ___m_intensity;
};
struct MappedBuffer_t4BAABC09EAD5812AB933A8BA242095323D4282C7 
{
	uint8_t* ___m_Data;
	int64_t ___m_Marker;
	int32_t ___m_BufferID;
};
struct MaterialMeshIndex_tB2252C2B3D608EE2F5FB9D6C7606F95426D27E74 
{
	int32_t ___MaterialIndex;
	int32_t ___MeshIndex;
	int32_t ___SubMeshIndex;
};
struct MaterialPropertyType_tA7F7CD55AE934857962A20B395A3777399183C29 
{
	int32_t ___TypeIndex;
	int32_t ___NameID;
	int16_t ___SizeBytesCPU;
	int16_t ___SizeBytesGPU;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	float ___m00;
	float ___m10;
	float ___m20;
	float ___m30;
	float ___m01;
	float ___m11;
	float ___m21;
	float ___m31;
	float ___m02;
	float ___m12;
	float ___m22;
	float ___m32;
	float ___m03;
	float ___m13;
	float ___m23;
	float ___m33;
};
struct MeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412 
{
	int32_t ___BatchIndex;
	int32_t ___MeshVertexIndex;
	int32_t ___BlendShapeIndex;
	int32_t ___SkinMatrixIndex;
	int32_t ___InstanceCount;
};
struct MetadataValue_tB24D1ECC62550B3B37D7BFA11B02907047E7F937 
{
	int32_t ___NameID;
	uint32_t ___Value;
};
struct PackedComponent_t1F420B0BE93FF9B240DF895BF74ED0354F10D1D6 
{
	int32_t ___PackedEntityIndex;
	int32_t ___PackedTypeIndex;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct ReadCommand_t5DB46BD58D686FDDFBD8AB7600B9CF676DC7D97F 
{
	void* ___Buffer;
	int64_t ___Offset;
	int64_t ___Size;
};
struct RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 
{
	uint8_t ___m_WriteMask;
	uint8_t ___m_SourceColorBlendMode;
	uint8_t ___m_DestinationColorBlendMode;
	uint8_t ___m_SourceAlphaBlendMode;
	uint8_t ___m_DestinationAlphaBlendMode;
	uint8_t ___m_ColorBlendOperation;
	uint8_t ___m_AlphaBlendOperation;
	uint8_t ___m_Padding;
};
struct RequestSceneHeader_tFB164D8BD279642D1C1FF039036393F4C8A31AC6 
{
	HeaderData_t5CE38A1426623168DB817F1D87E639856A2614B3* ___HeaderData;
};
struct RetainBlobAssetBatchPtr_t3C4E424C414A65ED2C7215C76B298CA04E362306 
{
	alignas(IL2CPP_SIZEOF_VOID_P) BlobAssetBatch_tE7DAEECF09D38F983FE3F829F7774B40F4FD6B46* ___BlobAssetBatchPtr;
};
struct RetainBlobAssetPtr_tB58F0A9A302FCFEFE95EAB011F522AFFB283873F 
{
	alignas(IL2CPP_SIZEOF_VOID_P) BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* ___BlobAsset;
};
#pragma pack(push, tp, 1)
struct RuntimeBlobHeaderRef_t5D1D053F0C184F48CB626911CD1C1CCDD1E06D47 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					int64_t ___m_BlobAssetRefStorage;
				};
				#pragma pack(pop, tp)
				struct
				{
					int64_t ___m_BlobAssetRefStorage_forAlignmentOnly;
				};
			};
		};
		uint8_t RuntimeBlobHeaderRef_t5D1D053F0C184F48CB626911CD1C1CCDD1E06D47__padding[8];
	};
};
#pragma pack(pop, tp)
struct ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 
{
	int32_t ___m_Id;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct SkinMatrixBufferIndex_tD7716F62B62B9EDEE4FD56C2E3EFC30751C1433E 
{
	int32_t ___Value;
};
struct StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 
{
	uint8_t ___m_Enabled;
	uint8_t ___m_ReadMask;
	uint8_t ___m_WriteMask;
	uint8_t ___m_Padding;
	uint8_t ___m_CompareFunctionFront;
	uint8_t ___m_PassOperationFront;
	uint8_t ___m_FailOperationFront;
	uint8_t ___m_ZFailOperationFront;
	uint8_t ___m_CompareFunctionBack;
	uint8_t ___m_PassOperationBack;
	uint8_t ___m_FailOperationBack;
	uint8_t ___m_ZFailOperationBack;
};
struct SubMeshIndexInfo32_t7F97A4B1EF649ACA35DAF9C4EAA91536D6AF0A69 
{
	uint32_t ___m_Value;
};
#pragma pack(push, tp, 1)
struct SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					int32_t ___Value;
				};
				#pragma pack(pop, tp)
				struct
				{
					int32_t ___Value_forAlignmentOnly;
				};
			};
		};
		uint8_t SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59__padding[4];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					int32_t ___Value;
				};
				#pragma pack(pop, tp)
				struct
				{
					int32_t ___Value_forAlignmentOnly;
				};
			};
		};
		uint8_t TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C__padding[4];
	};
};
#pragma pack(pop, tp)
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct UIntPtr_t 
{
	void* ____pointer;
};
struct UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B 
{
	int32_t ___instanceId;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA 
{
	float ___x;
	float ___y;
};
struct float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E 
{
	float ___x;
	float ___y;
	float ___z;
};
struct float4_t89D9A294E7A79BD81BFBDD18654508532958555E 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF 
{
	int32_t ___x;
	int32_t ___y;
	int32_t ___z;
};
struct uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9 
{
	uint32_t ___x;
	uint32_t ___y;
	uint32_t ___z;
	uint32_t ___w;
};
struct AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 
{
	uint16_t ___Index;
	uint16_t ___Version;
};
struct BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 
{
	int32_t ___size;
	uint8_t* ___p;
};
struct BlobDataRef_tC50BF7E5090F5D4D0316711BE83B361517B922E4 
{
	int32_t ___allocIndex;
	int32_t ___offset;
};
struct SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC 
{
	uint8_t* ___p;
	int32_t ___index;
};
struct U3CEnabledU3Ee__FixedBuffer_t83B215C28C9B1D0B08BD1CACFD5E3ED889CC9298 
{
	union
	{
		struct
		{
			uint64_t ___FixedElementField;
		};
		uint8_t U3CEnabledU3Ee__FixedBuffer_t83B215C28C9B1D0B08BD1CACFD5E3ED889CC9298__padding[16];
	};
};
struct U3CFlippedWindingU3Ee__FixedBuffer_tF4D15AB64D0B1662C0426CF76CD59ECE2C7CB940 
{
	union
	{
		struct
		{
			uint64_t ___FixedElementField;
		};
		uint8_t U3CFlippedWindingU3Ee__FixedBuffer_tF4D15AB64D0B1662C0426CF76CD59ECE2C7CB940__padding[16];
	};
};
struct U3CCacheLinePaddingU3Ee__FixedBuffer_t318D2ECC4739299F726FD6501C907D0EEB1131DA 
{
	union
	{
		struct
		{
			float ___FixedElementField;
		};
		uint8_t U3CCacheLinePaddingU3Ee__FixedBuffer_t318D2ECC4739299F726FD6501C907D0EEB1131DA__padding[40];
	};
};
struct U3Cm_CacheLinePaddingU3Ee__FixedBuffer_t6B4EC7853C4E583A54345A409EBE3D54C6DFB97C 
{
	union
	{
		struct
		{
			int32_t ___FixedElementField;
		};
		uint8_t U3Cm_CacheLinePaddingU3Ee__FixedBuffer_t6B4EC7853C4E583A54345A409EBE3D54C6DFB97C__padding[48];
	};
};
struct U3Cm_CacheLinePaddingU3Ee__FixedBuffer_t4E8B9A94E976A64E77E4AFA2922469EA7348F4A8 
{
	union
	{
		struct
		{
			int32_t ___FixedElementField;
		};
		uint8_t U3Cm_CacheLinePaddingU3Ee__FixedBuffer_t4E8B9A94E976A64E77E4AFA2922469EA7348F4A8__padding[32];
	};
};
struct U3CCountsU3Ee__FixedBuffer_t7242F2305228AFF87648DC15C161C6CD998EE9CA 
{
	union
	{
		struct
		{
			int32_t ___FixedElementField;
		};
		uint8_t U3CCountsU3Ee__FixedBuffer_t7242F2305228AFF87648DC15C161C6CD998EE9CA__padding[20];
	};
};
struct U3CBurstFunctionsU3Ee__FixedBuffer_t2AF919C99EF2734455947ED50839A04B606A5867 
{
	union
	{
		struct
		{
			uint64_t ___FixedElementField;
		};
		uint8_t U3CBurstFunctionsU3Ee__FixedBuffer_t2AF919C99EF2734455947ED50839A04B606A5867__padding[48];
	};
};
struct U3CGCDefeat1U3Ee__FixedBuffer_tED011B6DBED8DB0280D0A88B2BC3E2CD58D2248D 
{
	union
	{
		struct
		{
			uint64_t ___FixedElementField;
		};
		uint8_t U3CGCDefeat1U3Ee__FixedBuffer_tED011B6DBED8DB0280D0A88B2BC3E2CD58D2248D__padding[48];
	};
};
struct U3CManagedFunctionsU3Ee__FixedBuffer_t6A9DBD3D15260356E0C9213815A348378205741E 
{
	union
	{
		struct
		{
			uint64_t ___FixedElementField;
		};
		uint8_t U3CManagedFunctionsU3Ee__FixedBuffer_t6A9DBD3D15260356E0C9213815A348378205741E__padding[48];
	};
};
struct BlobAssetReference_1_t083E0A88DA01E7BD8A190C0971D1344520389480 
{
	alignas(8) BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 ___m_data;
};
struct BlobAssetReference_1_t9CC4CC80790FA45C2D0C95D03AFA5C4BC6B2A36E 
{
	alignas(8) BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 ___m_data;
};
struct BlobAssetReference_1_tE272FE135F49F621C3F0A24402C578079E56040B 
{
	alignas(8) BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 ___m_data;
};
struct BlobAssetReference_1_tDD332C4A1E41EA2CA76C1632A675CEB17AA84B13 
{
	alignas(8) BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 ___m_data;
};
struct BlobAssetReference_1_tD5149596D95DFDE07586D2F21EBDCE9F21C30A24 
{
	alignas(8) BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 ___m_data;
};
struct BlobAssetReference_1_t2539DE18562593E15A5CAC630C2C2045EEA597E9 
{
	alignas(8) BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 ___m_data;
};
struct BlobAssetReference_1_t9FD7FAAE1333347EB8AB3D10A7FC0C35E3F2778C 
{
	alignas(8) BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998 ___m_data;
};
struct HashMapHelper_1_tF4097677DF54F9B7101CE52DA301CACDF02D8AD9 
{
	uint8_t* ___Ptr;
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* ___Keys;
	int32_t* ___Next;
	int32_t* ___Buckets;
	int32_t ___Count;
	int32_t ___Capacity;
	int32_t ___Log2MinGrowth;
	int32_t ___BucketCapacity;
	int32_t ___AllocatedIndex;
	int32_t ___FirstFreeIdx;
	int32_t ___SizeOfTValue;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
};
struct UnityObjectRef_1_t09B4E21494306A37DB9BF5E470BB7EB3460A0927 
{
	UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B ___Id;
};
struct UnityObjectRef_1_t77601E67D4355EFD7EA1E3E4EB7710DE1A9D5A32 
{
	UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B ___Id;
};
struct UnityObjectRef_1_t98A997E7AA0E9723ACD292BF2F782D4E1E058656 
{
	UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B ___Id;
};
struct UnityObjectRef_1_tBDC2904A7324F2A71AB50EBABF5FA731EF2FA0C6 
{
	UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B ___Id;
};
struct UnityObjectRef_1_t8BE40382883A54D1584104562AE9432F4BD7E4A5 
{
	UntypedUnityObjectRef_t86F1E1943CFA71521B795266B8952DE9E791381B ___Id;
};
struct UnsafeList_1_t86D29969117DEA467914C7222932508E1E794B95 
{
	ArchetypePropertyOverride_t1CBD7473E378B647BE981355D2964B81F92150CB* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t83B32FAD12CCEAE30B2472D4B1DBE3799C81AF87 
{
	BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t8B0C9957E10A013D50E34DBEA8ED1A411DA194A8 
{
	BatchMaterialMeshSubMesh_t27466F10F34C75AB783307C2C6D83C84B08F52F2* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t47D64DE9FDF8B0F6EE5FA9CD2B38D0F8EC7DB97C 
{
	BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t769331BED675661167C96D796BC01151B80BCF83 
{
	ContentFileId_t630F8A1A207C9248EE434BA833823A2D5C384FD7* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_tBEE99D1003DF5F7DFE25B2493AF04602E443B14C 
{
	DrawCommandStream_t0A2BEB33831D3F47F3A3E1CCA7359B89C0429D0A* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t08400821D1454751882D5BF6EF70DBE3AC9F4FD6 
{
	DrawCommandWorkItem_tF70FA79285F3CB53DDEBCF4BF0F3447F11A3F045* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_tC8912F7F078006BA1573ED1A2596ADC7D193B050 
{
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 
{
	int32_t* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613 
{
	intptr_t* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t397F41512917228ECAF62EA4D11C9E3FB7F0697C 
{
	RemoteContentId_t27977325179FF4C511004EBF35A0B38AA71D66B0* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_tEE6D0269E6E8E59E96623AA3410F283FE7B8CF65 
{
	alignas(IL2CPP_SIZEOF_VOID_P) TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t9B1FBEFD612E0FA0F9D5C88BF2BC764C2CC0FCB5 
{
	ActiveDependency_tC1F9FBBCE44F2B897933C00A33183602D43BF6FA* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t2E169590720CAE8D2370A59936FDA97D4E285B6D 
{
	GetComponentDependency_t3F54BF9E046922C57AAFB157719C6DD50C12A3CE* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_tFE26B731BBB5324EC74196596A4FCD2A2F7B910B 
{
	GetComponentsDependency_t1F8EAEB73EA922D18FAD295F0A9946775CF2E01E* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_tDB7B0B8624C61A57ABDB1AC1EDA1F76179077E13 
{
	GetHierarchyDependency_t69464853DF7BA91ADAE660BFFA7E11C7E197EB8B* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t019E726FDD648FDC4E8725736DB3C1E8873AF9A6 
{
	GetHierarchySingleDependency_t91AFD8F80072EE0AF9CB1E03880D6666BE500452* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_tB1909FF2C0A21F7B47ED5BD8F780312C509C5303 
{
	ObjectExistDependency_t0342AECE7F49F22501C91A124F9E30A82E1C0A34* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t47385BA7E4AE412D819BE344107FDEC23EB82F8D 
{
	ObjectPropertyDependency_t48398FAF5893225449E1BB1A2BC533F303DD342C* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_tCFCA13A75A8A7CFC6CD69B080638E71EE151539A 
{
	ObjectStaticDependency_t5293BD8C2BFBFE86258EB509EDF9512034ADD3EA* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t1F456B5D945266804A9EB26C765FF2CFCE17D733 
{
	ReferencedEntityUsage_t5A0EA88A4004D1FC8F522DD8A8296F79D0D92B81* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_tA068C24D5E1D5CBC03E6D51E587FF66C4EC0C8E3 
{
	BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t7517BB16A0F7933063E20E60999A377DE8B0B4F4 
{
	OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_tC512AB26A525DF3622FBF1917719AEBFF48AAB27 
{
	SharedComponentInfo_tC04CFD574DE82A0BD72273D1EB8868562AE8D021* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_tEC05B902270714B5B358D35A42E55F8EBB2B1665 
{
	ComponentData_t2CB40CF3C2FA75B9CA5D8292DCFA8BF12A42DB07* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t74E4F40D641123A06A93F6C8D3231A505181725E 
{
	alignas(IL2CPP_SIZEOF_VOID_P) PaddedAllocator_tB9AB632DA425C7D50208D9571960614EF43CDF24* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeParallelHashMap_2_tDFDB46E479BB5B926D53F974F9E40CE56EACCCE4 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel;
};
struct ValueTuple_2_t7750C62AD4EA55033C68DC92A8665D9651757E31 
{
	BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 ___Item1;
	BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61 ___Item2;
};
struct AABB_t54A6237E1BDC0F6978DE1AF7D387C4EE19A7F56A 
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___Center;
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___Extents;
};
struct AdditionalEntitiesBakingData_t16B67AE176CF0186E6E62B375C8B59BFB902D4E1 
{
	int32_t ___AuthoringComponentID;
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___Value;
};
struct AdditionalEntityParent_tAE181BBE81275FA5C723368D022C27195FAC1D3E 
{
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___Parent;
	int32_t ___ParentInstanceID;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
#pragma pack(push, tp, 1)
struct ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					ChunkIndex_t932E9A325E198362B9521CAD777D34C98F26792A ___m_Chunk;
				};
				#pragma pack(pop, tp)
				struct
				{
					ChunkIndex_t932E9A325E198362B9521CAD777D34C98F26792A ___m_Chunk_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_EntityComponentStore_OffsetPadding[8];
					EntityComponentStore_tA85E100ECD667365B260A68DFD9DF9B7C04D037F* ___m_EntityComponentStore;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_EntityComponentStore_OffsetPadding_forAlignmentOnly[8];
					EntityComponentStore_tA85E100ECD667365B260A68DFD9DF9B7C04D037F* ___m_EntityComponentStore_forAlignmentOnly;
				};
			};
		};
		uint8_t ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5__padding[16];
	};
};
#pragma pack(pop, tp)
struct BatchDrawCommandFlags_tC502FA322382A3181F0800B1EA5A5654027FE034 
{
	int32_t ___value__;
};
struct BatchInfo_tB688FB92123EA5763ADC1EC7914E64CBE88CD115 
{
	HeapBlock_t44D3F86E0ED8F3C5FC9B70A056739AEBEA18640D ___GPUMemoryAllocation;
	HeapBlock_t44D3F86E0ED8F3C5FC9B70A056739AEBEA18640D ___ChunkMetadataAllocation;
};
struct BatchMaterialMeshSubMesh_t27466F10F34C75AB783307C2C6D83C84B08F52F2 
{
	BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C ___Material;
	BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___Mesh;
	int32_t ___SubMeshIndex;
};
struct BlendState_tC9B817349E49EF26CBCDC8FCE02789A661DC2630 
{
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState0;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState1;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState2;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState3;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState4;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState5;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState6;
	RenderTargetBlendState_t51229A3F09EE698F8E49731F1BC5BB77DBEDC4C7 ___m_BlendState7;
	uint8_t ___m_SeparateMRTBlendStates;
	uint8_t ___m_AlphaToMask;
	int16_t ___m_Padding;
};
#pragma pack(push, tp, 1)
struct BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					void* ___ValidationPtr;
				};
				#pragma pack(pop, tp)
				struct
				{
					void* ___ValidationPtr_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___Length_OffsetPadding[8];
					int32_t ___Length;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___Length_OffsetPadding_forAlignmentOnly[8];
					int32_t ___Length_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___Allocator_OffsetPadding[12];
					AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___Allocator_OffsetPadding_forAlignmentOnly[12];
					AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___Hash_OffsetPadding[16];
					uint64_t ___Hash;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___Hash_OffsetPadding_forAlignmentOnly[16];
					uint64_t ___Hash_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___Padding_OffsetPadding[24];
					uint64_t ___Padding;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___Padding_OffsetPadding_forAlignmentOnly[24];
					uint64_t ___Padding_forAlignmentOnly;
				};
			};
		};
		uint8_t BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639__padding[32];
	};
};
#pragma pack(pop, tp)
struct BlobAssetReferenceChange_t949678BF4BEE0AB09C05D43006BAEFB02BEE1311 
{
	PackedComponent_t1F420B0BE93FF9B240DF895BF74ED0354F10D1D6 ___Component;
	int32_t ___Offset;
	uint64_t ___Value;
};
struct BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51 
{
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_allocator;
	NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8 ___m_allocations;
	NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE ___m_patches;
	int32_t ___m_currentChunkIndex;
	int32_t ___m_chunkSize;
};
struct BlobString_t059A4022514441B9F0A46FC1B931579200DFFD92 
{
	BlobArray_1_t112C49ADFEB7465DC55221B4D8E6C721002D4D16 ___Data;
};
struct BoundingSphere_t2DDB3D1711A6920C0ECA9217D3E4E14AFF03C010 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	float ___radius;
};
struct BuiltinMaterialPropertyUnity_LightmapIndex_tB3FFBA44070A59D7CE3FE43E525EE67F62F7DD77 
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___Value;
};
struct BuiltinMaterialPropertyUnity_LightmapST_tF3B17F024F3A80DEC0F7FA53C4B605A79202D14E 
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___Value;
};
struct BuiltinRenderTextureType_t3D56813CAC7C6E4AC3B438039BD1CE7E62FE7C4E 
{
	int32_t ___value__;
};
struct Child_tCA0AD12FC56504F3D4A64E40855F54238020861E 
{
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___Value;
};
struct ChunkInstanceLodEnabled_t5670241854299567EBDD216F0A48CF1C2F3AA3B2 
{
	U3CEnabledU3Ee__FixedBuffer_t83B215C28C9B1D0B08BD1CACFD5E3ED889CC9298 ___Enabled;
};
struct Codec_tF522DBC4700E6753BE420F44346672832B4303A3 
{
	int32_t ___value__;
};
struct CollisionPairHeaderFlags_tBA40F470BC1564B84C3093CEA5761804FA0650C3 
{
	uint16_t ___value__;
};
struct ComponentBakeReason_t928549C4700B90F22B8FF7F91BDFFC5466CB2A13 
{
	int32_t ___value__;
};
struct ComponentTypeFlags_t7F729DFD48E0293C2B98C5E4F41C3E730F6158B0 
{
	uint8_t ___value__;
};
struct ComponentTypeList_t8A43AFD2ABD042DD0F0FAA4F95F3FDA3A1D8C053 
{
	void* ___Ptr;
	int32_t ___Length;
	int32_t ___Capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
};
struct ConversionError_tA911789C09E2326E83B161606EE817DDF5ED8FA9 
{
	int32_t ___value__;
};
struct ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1 
{
	intptr_t ___vertSrc;
	intptr_t ___vertDst;
	int32_t ___vertCount;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___transform;
	int32_t ___transformUVs;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___xformClipPages;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___ids;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___addFlags;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___opacityPage;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___textCoreSettingsPage;
	int32_t ___isText;
	float ___textureId;
	intptr_t ___indexSrc;
	intptr_t ___indexDst;
	int32_t ___indexCount;
	int32_t ___indexOffset;
	int32_t ___flipIndices;
};
struct CopyClosingMeshJobData_t92845C1341A518A8D05CD9DCE53496BD70CF2044 
{
	intptr_t ___vertSrc;
	intptr_t ___vertDst;
	int32_t ___vertCount;
	intptr_t ___indexSrc;
	intptr_t ___indexDst;
	int32_t ___indexCount;
	int32_t ___indexOffset;
};
struct CubemapFace_t300D6E2CD7DF60D44AA28338748B607677ED1D1B 
{
	int32_t ___value__;
};
struct CullMode_t049B71889E4E981866E205A3F71DC8B856306D50 
{
	int32_t ___value__;
};
struct CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___sphereCenter;
	float ___sphereRadius;
	int32_t ___cullingPlaneOffset;
	int32_t ___cullingPlaneCount;
	float ___cascadeBlendCullingFactor;
	float ___nearPlane;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___cullingMatrix;
};
struct CullingSplitData_tCFA8EADD67BB0433DD4A1E9A32838187FE0B0B0E 
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___CullingSphereCenter;
	float ___CullingSphereRadius;
	float ___ShadowCascadeBlendCullingFactor;
	int32_t ___PlanePacketOffset;
	int32_t ___PlanePacketCount;
	int32_t ___CombinedPlanePacketOffset;
	int32_t ___CombinedPlanePacketCount;
};
struct DrawCommandStream_t0A2BEB33831D3F47F3A3E1CCA7359B89C0429D0A 
{
	DrawStream_1_tA8E639201CAE668B8909553023EB9578DCF18B5A ___m_Stream;
	DrawStream_1_t4E346D7D31A8F53061750C07CF8E9157B2F97FB2 ___m_ChunkTransformsStream;
	int32_t ___m_PrevChunkStartIndex;
	DrawCommandVisibility_t192861ABB8BE0514FBDCAB8FC83808D83178DEED* ___m_PrevVisibility;
};
struct DuplicateEntityGuid_tFBE3EBCFAFF9D1BEAC504030BFE1EB798EFCBA92 
{
	EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 ___EntityGuid;
	int32_t ___DuplicateCount;
};
struct EntityBatchInChunk_t59B2C040B5ABCCDF8F5EF73EA18CA2650526CD1C 
{
	ChunkIndex_t932E9A325E198362B9521CAD777D34C98F26792A ___Chunk;
	int32_t ___StartIndex;
	int32_t ___Count;
};
struct EntityInChunk_t9C018862802ABC36E70290747CBFBF57FC0FC9FB 
{
	ChunkIndex_t932E9A325E198362B9521CAD777D34C98F26792A ___Chunk;
	int32_t ___IndexInChunk;
};
struct EntityReferenceChange_tF42C10FF22614A67E5DB929CAE2011B58F569BAE 
{
	PackedComponent_t1F420B0BE93FF9B240DF895BF74ED0354F10D1D6 ___Component;
	int32_t ___Offset;
	EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 ___Value;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct ExternalEntityReference_tE59820343E2601A63B36BADC930E722D9238DC54 
{
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___Entity;
};
struct FalloffType_tE9BECCB411DA63109760103AF7476F422A01376D 
{
	uint8_t ___value__;
};
#pragma pack(push, tp, 1)
struct FixedBytes30_t7721F11929A3AC08287DF5E6D7AEF85CCEE04AD2 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0000;
				};
				#pragma pack(pop, tp)
				struct
				{
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0000_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0016_OffsetPadding[16];
					uint8_t ___byte0016;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0016_OffsetPadding_forAlignmentOnly[16];
					uint8_t ___byte0016_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0017_OffsetPadding[17];
					uint8_t ___byte0017;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0017_OffsetPadding_forAlignmentOnly[17];
					uint8_t ___byte0017_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0018_OffsetPadding[18];
					uint8_t ___byte0018;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0018_OffsetPadding_forAlignmentOnly[18];
					uint8_t ___byte0018_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0019_OffsetPadding[19];
					uint8_t ___byte0019;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0019_OffsetPadding_forAlignmentOnly[19];
					uint8_t ___byte0019_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0020_OffsetPadding[20];
					uint8_t ___byte0020;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0020_OffsetPadding_forAlignmentOnly[20];
					uint8_t ___byte0020_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0021_OffsetPadding[21];
					uint8_t ___byte0021;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0021_OffsetPadding_forAlignmentOnly[21];
					uint8_t ___byte0021_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0022_OffsetPadding[22];
					uint8_t ___byte0022;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0022_OffsetPadding_forAlignmentOnly[22];
					uint8_t ___byte0022_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0023_OffsetPadding[23];
					uint8_t ___byte0023;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0023_OffsetPadding_forAlignmentOnly[23];
					uint8_t ___byte0023_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0024_OffsetPadding[24];
					uint8_t ___byte0024;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0024_OffsetPadding_forAlignmentOnly[24];
					uint8_t ___byte0024_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0025_OffsetPadding[25];
					uint8_t ___byte0025;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0025_OffsetPadding_forAlignmentOnly[25];
					uint8_t ___byte0025_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0026_OffsetPadding[26];
					uint8_t ___byte0026;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0026_OffsetPadding_forAlignmentOnly[26];
					uint8_t ___byte0026_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0027_OffsetPadding[27];
					uint8_t ___byte0027;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0027_OffsetPadding_forAlignmentOnly[27];
					uint8_t ___byte0027_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0028_OffsetPadding[28];
					uint8_t ___byte0028;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0028_OffsetPadding_forAlignmentOnly[28];
					uint8_t ___byte0028_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0029_OffsetPadding[29];
					uint8_t ___byte0029;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0029_OffsetPadding_forAlignmentOnly[29];
					uint8_t ___byte0029_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes30_t7721F11929A3AC08287DF5E6D7AEF85CCEE04AD2__padding[30];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct FixedBytes510_t95B284C3FF966246998B23701C3F0F55C6BD7973 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0000;
				};
				#pragma pack(pop, tp)
				struct
				{
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0000_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0016_OffsetPadding[16];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0016;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0016_OffsetPadding_forAlignmentOnly[16];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0016_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0032_OffsetPadding[32];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0032;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0032_OffsetPadding_forAlignmentOnly[32];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0032_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0048_OffsetPadding[48];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0048;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0048_OffsetPadding_forAlignmentOnly[48];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0048_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0064_OffsetPadding[64];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0064;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0064_OffsetPadding_forAlignmentOnly[64];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0064_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0080_OffsetPadding[80];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0080;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0080_OffsetPadding_forAlignmentOnly[80];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0080_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0096_OffsetPadding[96];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0096;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0096_OffsetPadding_forAlignmentOnly[96];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0096_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0112_OffsetPadding[112];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0112;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0112_OffsetPadding_forAlignmentOnly[112];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0112_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0128_OffsetPadding[128];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0128;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0128_OffsetPadding_forAlignmentOnly[128];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0128_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0144_OffsetPadding[144];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0144;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0144_OffsetPadding_forAlignmentOnly[144];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0144_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0160_OffsetPadding[160];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0160;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0160_OffsetPadding_forAlignmentOnly[160];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0160_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0176_OffsetPadding[176];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0176;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0176_OffsetPadding_forAlignmentOnly[176];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0176_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0192_OffsetPadding[192];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0192;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0192_OffsetPadding_forAlignmentOnly[192];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0192_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0208_OffsetPadding[208];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0208;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0208_OffsetPadding_forAlignmentOnly[208];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0208_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0224_OffsetPadding[224];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0224;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0224_OffsetPadding_forAlignmentOnly[224];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0224_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0240_OffsetPadding[240];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0240;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0240_OffsetPadding_forAlignmentOnly[240];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0240_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0256_OffsetPadding[256];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0256;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0256_OffsetPadding_forAlignmentOnly[256];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0256_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0272_OffsetPadding[272];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0272;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0272_OffsetPadding_forAlignmentOnly[272];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0272_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0288_OffsetPadding[288];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0288;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0288_OffsetPadding_forAlignmentOnly[288];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0288_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0304_OffsetPadding[304];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0304;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0304_OffsetPadding_forAlignmentOnly[304];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0304_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0320_OffsetPadding[320];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0320;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0320_OffsetPadding_forAlignmentOnly[320];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0320_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0336_OffsetPadding[336];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0336;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0336_OffsetPadding_forAlignmentOnly[336];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0336_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0352_OffsetPadding[352];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0352;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0352_OffsetPadding_forAlignmentOnly[352];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0352_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0368_OffsetPadding[368];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0368;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0368_OffsetPadding_forAlignmentOnly[368];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0368_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0384_OffsetPadding[384];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0384;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0384_OffsetPadding_forAlignmentOnly[384];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0384_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0400_OffsetPadding[400];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0400;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0400_OffsetPadding_forAlignmentOnly[400];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0400_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0416_OffsetPadding[416];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0416;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0416_OffsetPadding_forAlignmentOnly[416];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0416_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0432_OffsetPadding[432];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0432;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0432_OffsetPadding_forAlignmentOnly[432];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0432_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0448_OffsetPadding[448];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0448;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0448_OffsetPadding_forAlignmentOnly[448];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0448_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0464_OffsetPadding[464];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0464;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0464_OffsetPadding_forAlignmentOnly[464];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0464_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0480_OffsetPadding[480];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0480;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0480_OffsetPadding_forAlignmentOnly[480];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0480_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0496_OffsetPadding[496];
					uint8_t ___byte0496;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0496_OffsetPadding_forAlignmentOnly[496];
					uint8_t ___byte0496_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0497_OffsetPadding[497];
					uint8_t ___byte0497;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0497_OffsetPadding_forAlignmentOnly[497];
					uint8_t ___byte0497_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0498_OffsetPadding[498];
					uint8_t ___byte0498;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0498_OffsetPadding_forAlignmentOnly[498];
					uint8_t ___byte0498_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0499_OffsetPadding[499];
					uint8_t ___byte0499;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0499_OffsetPadding_forAlignmentOnly[499];
					uint8_t ___byte0499_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0500_OffsetPadding[500];
					uint8_t ___byte0500;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0500_OffsetPadding_forAlignmentOnly[500];
					uint8_t ___byte0500_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0501_OffsetPadding[501];
					uint8_t ___byte0501;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0501_OffsetPadding_forAlignmentOnly[501];
					uint8_t ___byte0501_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0502_OffsetPadding[502];
					uint8_t ___byte0502;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0502_OffsetPadding_forAlignmentOnly[502];
					uint8_t ___byte0502_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0503_OffsetPadding[503];
					uint8_t ___byte0503;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0503_OffsetPadding_forAlignmentOnly[503];
					uint8_t ___byte0503_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0504_OffsetPadding[504];
					uint8_t ___byte0504;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0504_OffsetPadding_forAlignmentOnly[504];
					uint8_t ___byte0504_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0505_OffsetPadding[505];
					uint8_t ___byte0505;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0505_OffsetPadding_forAlignmentOnly[505];
					uint8_t ___byte0505_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0506_OffsetPadding[506];
					uint8_t ___byte0506;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0506_OffsetPadding_forAlignmentOnly[506];
					uint8_t ___byte0506_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0507_OffsetPadding[507];
					uint8_t ___byte0507;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0507_OffsetPadding_forAlignmentOnly[507];
					uint8_t ___byte0507_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0508_OffsetPadding[508];
					uint8_t ___byte0508;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0508_OffsetPadding_forAlignmentOnly[508];
					uint8_t ___byte0508_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0509_OffsetPadding[509];
					uint8_t ___byte0509;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0509_OffsetPadding_forAlignmentOnly[509];
					uint8_t ___byte0509_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes510_t95B284C3FF966246998B23701C3F0F55C6BD7973__padding[510];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct FixedBytes62_t25CC23B7A3CF922DF0D1F0BFD5F801864D4FFD2A 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0000;
				};
				#pragma pack(pop, tp)
				struct
				{
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0000_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0016_OffsetPadding[16];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0016;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0016_OffsetPadding_forAlignmentOnly[16];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0016_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0032_OffsetPadding[32];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0032;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0032_OffsetPadding_forAlignmentOnly[32];
					FixedBytes16_tBBD888116CBD6329886E0FE97A82EEB4B7CB3FA0 ___offset0032_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0048_OffsetPadding[48];
					uint8_t ___byte0048;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0048_OffsetPadding_forAlignmentOnly[48];
					uint8_t ___byte0048_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0049_OffsetPadding[49];
					uint8_t ___byte0049;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0049_OffsetPadding_forAlignmentOnly[49];
					uint8_t ___byte0049_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0050_OffsetPadding[50];
					uint8_t ___byte0050;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0050_OffsetPadding_forAlignmentOnly[50];
					uint8_t ___byte0050_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0051_OffsetPadding[51];
					uint8_t ___byte0051;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0051_OffsetPadding_forAlignmentOnly[51];
					uint8_t ___byte0051_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0052_OffsetPadding[52];
					uint8_t ___byte0052;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0052_OffsetPadding_forAlignmentOnly[52];
					uint8_t ___byte0052_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0053_OffsetPadding[53];
					uint8_t ___byte0053;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0053_OffsetPadding_forAlignmentOnly[53];
					uint8_t ___byte0053_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0054_OffsetPadding[54];
					uint8_t ___byte0054;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0054_OffsetPadding_forAlignmentOnly[54];
					uint8_t ___byte0054_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0055_OffsetPadding[55];
					uint8_t ___byte0055;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0055_OffsetPadding_forAlignmentOnly[55];
					uint8_t ___byte0055_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0056_OffsetPadding[56];
					uint8_t ___byte0056;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0056_OffsetPadding_forAlignmentOnly[56];
					uint8_t ___byte0056_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0057_OffsetPadding[57];
					uint8_t ___byte0057;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0057_OffsetPadding_forAlignmentOnly[57];
					uint8_t ___byte0057_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0058_OffsetPadding[58];
					uint8_t ___byte0058;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0058_OffsetPadding_forAlignmentOnly[58];
					uint8_t ___byte0058_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0059_OffsetPadding[59];
					uint8_t ___byte0059;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0059_OffsetPadding_forAlignmentOnly[59];
					uint8_t ___byte0059_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0060_OffsetPadding[60];
					uint8_t ___byte0060;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0060_OffsetPadding_forAlignmentOnly[60];
					uint8_t ___byte0060_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0061_OffsetPadding[61];
					uint8_t ___byte0061;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0061_OffsetPadding_forAlignmentOnly[61];
					uint8_t ___byte0061_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes62_t25CC23B7A3CF922DF0D1F0BFD5F801864D4FFD2A__padding[62];
	};
};
#pragma pack(pop, tp)
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	intptr_t ___handle;
};
struct GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C 
{
	uint32_t ___offsetFromWriteStart;
	uint32_t ___size;
	uintptr_t ___source;
};
struct GraphicsFormat_tC3D1898F3F3F1F57256C7F3FFD6BA9A37AE7E713 
{
	int32_t ___value__;
};
struct Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B 
{
	uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9 ___Value;
};
struct Int32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C 
{
	int32_t ___value__;
};
struct LODGroupWorldReferencePoint_t1C378B661E81968AF1118358C53D86DA215D7C7E 
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___Value;
};
struct LODWorldReferencePoint_t21EAD8082967CB50E841485D0DAFBE001E3F4E4D 
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___Value;
};
struct LightMode_t058E4E7AAE5689BCFF46BB8E0259D90D227E7FF9 
{
	uint8_t ___value__;
};
struct LightType_t97C5050F2F742FBF050FEB8FC5131A9A8DB50D26 
{
	uint8_t ___value__;
};
struct LinkedEntityGroup_t97546F2DE9AF4E5A8E97F4E215FCCA6395D0EB38 
{
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___Value;
};
struct LinkedEntityGroupBakingData_t614E70399B343A51B06D4BF1BF0508D2C4E99FAD 
{
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___Value;
};
struct LinkedEntityGroupChange_t55954CE432F5A1206C8D0F998304A45ADEA1C842 
{
	EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 ___RootEntityGuid;
	EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 ___ChildEntityGuid;
};
struct MaterialMeshInfo_tA5DA20397A2C8CE93BBE1B1262E8B3448450117D 
{
	int32_t ___Material;
	int32_t ___Mesh;
	SubMeshIndexInfo32_t7F97A4B1EF649ACA35DAF9C4EAA91536D6AF0A69 ___m_SubMeshIndexInfo;
};
struct MeshLODComponent_tEC7D454A01180040B6C5AA441896A4FB66630910 
{
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___Group;
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___ParentGroup;
	int32_t ___LODMask;
};
struct MeshLODGroupComponent_tBC1E27840E50C37F1244F281D24AAEB721FA15CC 
{
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___ParentGroup;
	int32_t ___ParentMask;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___LODDistances0;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___LODDistances1;
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___LocalReferencePoint;
};
struct MinMaxAABB_t73F9DC1DF51B88F574F3D9977E43B12EBCF97FCF 
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___Min;
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___Max;
};
struct ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 
{
	intptr_t ___actor;
	intptr_t ___otherActor;
	intptr_t ___shape;
	intptr_t ___otherShape;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___otherRotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___otherPosition;
	int32_t ___numContacts;
	intptr_t ___contacts;
};
struct NativeArrayOptions_t3E979EEF4B4840228A7692A97DA07553C6465F1D 
{
	int32_t ___value__;
};
struct NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022 
{
	intptr_t ___src;
	intptr_t ___dst;
	int32_t ___count;
	intptr_t ___closingSrc;
	intptr_t ___closingDst;
	int32_t ___closingCount;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___transform;
	int32_t ___vertsBeforeUVDisplacement;
	int32_t ___vertsAfterUVDisplacement;
};
struct OverrideLightProbeAnchorComponent_t504C206585014F2857B080A3A841B78DB0CBE1FB 
{
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___entity;
};
struct PackedComponentDataChange_t666FA9A2140462F6E22E37A895A80019BB12DCC2 
{
	PackedComponent_t1F420B0BE93FF9B240DF895BF74ED0354F10D1D6 ___Component;
	int32_t ___Offset;
	int32_t ___Size;
	int32_t ___Enabled;
};
struct Parent_t473162287DAADFBE8C1A231B52DC5D0C80687304 
{
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___Value;
};
struct Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal;
	float ___m_Distance;
};
struct PreviousParent_t4879AE063F14CAD6263F68FB5BCBFDC18889BEDD 
{
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___Value;
};
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	intptr_t ___m_Ptr;
};
struct PublicEntityRef_t499E2838255A5FCF6E1CE9B5E7C366D795D9D634 
{
	int32_t ___entityIndex;
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___targetEntity;
};
struct RenderBufferLoadAction_t3333B2CABABAC39DA0CDC25602E5E4FD93C2CB0E 
{
	int32_t ___value__;
};
struct RenderBufferStoreAction_t87683F22C09634E24A574F21F42037C953A2C8B7 
{
	int32_t ___value__;
};
struct RenderStateMask_tC9C95BF62EADEE4D622D4E16CDE1DF94E2A9EF57 
{
	int32_t ___value__;
};
struct ResolvedSectionEntity_tD18069CE6AD2FA61A39B747F346310DD10B77CEE 
{
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___SectionEntity;
};
struct RootLODRange_tE8326688FFD668D4F94CFA3D3FD1FFF29A851BDE 
{
	LODRange_t67EDD8C5D2708AAA1E7012C5FD21E15B8A9C2F43 ___LOD;
};
struct RootLODWorldReferencePoint_t402BFA80364BFC8AC31A752126AF65FF4DD1D49D 
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___Value;
};
struct RuntimeTransformComponentFlags_t446D51130D155C5B7256B15F889E589A5CCA175F 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct SHCoefficients_tA64D516B4C4756B7FF4E78ADB989319321BAC163 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___SHAr;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___SHAg;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___SHAb;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___SHBr;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___SHBg;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___SHBb;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___SHC;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___ProbesOcclusion;
};
struct SceneEntityReference_t66E50E7C54B23425953959208B308D7E9C5F4DC2 
{
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___SceneEntity;
};
struct SceneLoadFlags_t01B8805B69006CB4DE124ED8F0B0D2E4025157CE 
{
	int32_t ___value__;
};
struct SceneSectionStreamingData_t15AC9478148B301F9B8FDB6D94D15215F871828B 
{
	EntityQuery_t23B7A11FAA475D860E94409BFD4CF7E4B337CF90 ___m_NestedScenes;
	EntityQuery_t23B7A11FAA475D860E94409BFD4CF7E4B337CF90 ___m_SceneFilter;
};
struct SerializedMemberView_t6369E7535E340ED95E5B3E944819E50723388927 
{
	UnsafePackedBinaryStream_tA167AA778E63332B246152289D19AED3846C8DFE* ___m_Stream;
	Handle_t734A63706EDE11FF0429B53F7756AE2873E1F665 ___m_Handle;
};
struct SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC 
{
	UnsafePackedBinaryStream_tA167AA778E63332B246152289D19AED3846C8DFE* ___m_Stream;
	Handle_t734A63706EDE11FF0429B53F7756AE2873E1F665 ___m_Handle;
};
struct SharedMeshData_tFF18A151F1BA3B6810B3002DF0C28C2C66D5E32C 
{
	BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___MeshID;
	int32_t ___VertexCount;
	int32_t ___BlendShapeCount;
	int32_t ___BoneCount;
	int32_t ___RefCount;
};
struct SystemHandle_t5A4D46B81DF95CD891D2102270B37E23AF992894 
{
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___m_Entity;
	uint16_t ___m_Handle;
	uint16_t ___m_Version;
	uint32_t ___m_WorldSeqNo;
};
struct TileFlags_tDCEE980FCB6A2159202B4C8096C11452E318D2A9 
{
	int32_t ___value__;
};
struct Transform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___v0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___v1;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___v2;
};
struct TransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D 
{
	U3CCountsU3Ee__FixedBuffer_t7242F2305228AFF87648DC15C161C6CD998EE9CA ___Counts;
	int32_t ___IsUsed;
};
struct UCircle_t68411F86930A7056CDBAB9E208076A3075D15218 
{
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___center;
	float ___radius;
};
struct UEncroachingSegment_tD13983B03A27E74BB47A12B60732B020888416BA 
{
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___a;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___b;
	int32_t ___index;
};
struct UEvent_t6B46070B7BC816FDF53E67775BD4EA5508B807C2 
{
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___a;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___b;
	int32_t ___idx;
	int32_t ___type;
};
struct UHull_t042A8827A0CEE132C9302730F1CC1C2206B18B53 
{
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___a;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___b;
	int32_t ___idx;
	ArraySlice_1_t38E85DAE9975597DC96B21D715F42183A9C5EF03 ___ilarray;
	int32_t ___ilcount;
	ArraySlice_1_t38E85DAE9975597DC96B21D715F42183A9C5EF03 ___iuarray;
	int32_t ___iucount;
};
struct UStar_t44BAFB3CDE2A6D37FF4F48B038D7D920F8F47BD4 
{
	ArraySlice_1_t38E85DAE9975597DC96B21D715F42183A9C5EF03 ___points;
	int32_t ___pointCount;
};
struct UnmanagedComponentSystemDelegates_tB8457009CD4CC3E4A0CF63B17035080EF847DCEC 
{
	U3CBurstFunctionsU3Ee__FixedBuffer_t2AF919C99EF2734455947ED50839A04B606A5867 ___BurstFunctions;
	U3CManagedFunctionsU3Ee__FixedBuffer_t6A9DBD3D15260356E0C9213815A348378205741E ___ManagedFunctions;
	U3CGCDefeat1U3Ee__FixedBuffer_tED011B6DBED8DB0280D0A88B2BC3E2CD58D2248D ___GCDefeat1;
	uint16_t ___PresentFunctionBits;
	uint16_t ___BurstFunctionBits;
};
struct UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4 
{
	uint64_t* ___Ptr;
	int32_t ___Length;
	int32_t ___Capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
};
struct UntypedUnsafeList_tB7A46F76589C71832F1147292E5123FB99E199B2 
{
	void* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct WeakReferenceGenerationType_t8BFE0640E45A3A0A8219F431CAE59E10BD6273AD 
{
	int16_t ___value__;
};
struct float3x4_t0884AF37CAE698A5BC546E51634EACF2F8ADCD51 
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___c0;
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___c1;
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___c2;
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___c3;
};
struct float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c0;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c1;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c2;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c3;
};
struct quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___value;
};
struct OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 
{
	int32_t* ___offsetPtr;
	BlobDataRef_tC50BF7E5090F5D4D0316711BE83B361517B922E4 ___target;
	int32_t ___length;
};
struct AccessMode_t08155A76104B91A50C66C3D69AB1F04FF5D91B5D 
{
	int32_t ___value__;
};
struct UploadOperationKind_t84E12848B6EEE52A291AED0D51629E82E3304B4E 
{
	int32_t ___value__;
};
struct LocationType_tEC1E0EF46230B348F0F9D56FEA56D0ED791C79D1 
{
	int32_t ___value__;
};
struct MatrixType_t713AE0FC51654388720FEF3A36565595558DA021 
{
	int32_t ___value__;
};
struct ColliderType_t4C26FB284A330CAD69E47FFD734C9C778E077692 
{
	int32_t ___value__;
};
struct NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct UnsafeHashSet_1_t982205DCD82C95EDB86B40937DA9AC768D4723A8 
{
	HashMapHelper_1_tF4097677DF54F9B7101CE52DA301CACDF02D8AD9 ___m_Data;
};
struct BRGRenderMeshArray_t195C9BD91929A15832922FD9D195021199DB8FD9 
{
	int32_t ___Version;
	UnsafeList_1_t83B32FAD12CCEAE30B2472D4B1DBE3799C81AF87 ___UniqueMaterials;
	UnsafeList_1_t47D64DE9FDF8B0F6EE5FA9CD2B38D0F8EC7DB97C ___UniqueMeshes;
	UnsafeList_1_t8B0C9957E10A013D50E34DBEA8ED1A411DA194A8 ___MaterialMeshSubMeshes;
	uint4_t6C69CBFAE9BF0F727D52B68779D4A3F0DBA8D5C9 ___Hash128;
};
struct BakerEntityUsage_tE394A24EE421B4595946F226800281F25AF6F80A 
{
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___PrimaryEntity;
	TransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D ___PrimaryEntityFlags;
	UnsafeList_1_t1F456B5D945266804A9EB26C765FF2CFCE17D733 ___ReferencedEntityUsages;
};
struct BatchCreateInfo_t15C4620EEBE83EE2A60F4B3A6141A82942786EB2 
{
	int32_t ___GraphicsArchetypeIndex;
	alignas(IL2CPP_SIZEOF_VOID_P) ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5 ___Chunk;
};
struct BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB 
{
	void* ___m_Data;
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___m_ActiveFreeMaskCounts;
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___m_FreeMasksStorage;
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___m_FreeMaskIndicesStorage;
	int32_t ___m_Allocator;
};
struct BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB_marshaled_pinvoke
{
	void* ___m_Data;
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___m_ActiveFreeMaskCounts;
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___m_FreeMasksStorage;
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___m_FreeMaskIndicesStorage;
	int32_t ___m_Allocator;
};
struct BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB_marshaled_com
{
	void* ___m_Data;
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___m_ActiveFreeMaskCounts;
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___m_FreeMasksStorage;
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___m_FreeMaskIndicesStorage;
	int32_t ___m_Allocator;
};
struct BufferAllocatorHeap_t8B23AEAD3FF0104ED854068D0451346730DAC3AE 
{
	UnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613 ___Buffers;
	UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4 ___FreeList;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Handle;
	int32_t ___BufferSizeInBytes;
};
struct BuiltinMaterialPropertyUnity_MatrixPreviousM_t7BFFD7B8FBDED6225F4420CA00AC33BC83E94BFE 
{
	float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 ___Value;
};
struct BuiltinMaterialPropertyUnity_SHCoefficients_t543B714FC53AE0D9CBF0586C8B9F5B6CE8F5EF73 
{
	SHCoefficients_tA64D516B4C4756B7FF4E78ADB989319321BAC163 ___Value;
};
struct ChunkHeader_t3B1ED99D4C2CC2A8EFF6F9CFB6656451BB420F03 
{
	alignas(IL2CPP_SIZEOF_VOID_P) ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5 ___ArchetypeChunk;
};
struct ChunkVisibilityItem_t220AAC5BD7372B13CC8A41E3604981CD47327E17 
{
	alignas(IL2CPP_SIZEOF_VOID_P) ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5 ___Chunk;
	ChunkVisibility_tE2ABD1B3C6900BB4FB37AEFB64ED8A272747D28A* ___Visibility;
};
struct ChunkWorldRenderBounds_t0DE3BB5E33AC5E26298EEB59F77F342AAC223D00 
{
	AABB_t54A6237E1BDC0F6978DE1AF7D387C4EE19A7F56A ___Value;
};
struct CompanionLink_t2C6D134D2EB0678CF010E15832684060591FA368 
{
	UnityObjectRef_1_t09B4E21494306A37DB9BF5E470BB7EB3460A0927 ___Companion;
};
struct ComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D 
{
	int32_t ___AuthoringComponentId;
	int32_t ___BakeReason;
	int32_t ___ReasonId;
	Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B ___ReasonGuid;
	alignas(4) TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___BakingUnityTypeIndex;
};
struct ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA 
{
	alignas(4) TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C ___TypeIndex;
	int32_t ___AccessModeType;
};
struct ComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB 
{
	uint64_t ___StableTypeHash;
	uint8_t ___Flags;
};
struct ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B 
{
	int32_t ___m_BodyID;
	int32_t ___m_OtherBodyID;
	intptr_t ___m_StartPtr;
	uint32_t ___m_NbPairs;
	uint16_t ___m_Flags;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity;
};
struct ContentArchiveId_t597D4859829AE27318BBF350B3B7FBDCF8FC7030 
{
	Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B ___Value;
};
struct ContentFileId_t630F8A1A207C9248EE434BA833823A2D5C384FD7 
{
	Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B ___Value;
};
struct DrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B 
{
	int32_t ___FilterIndex;
	int32_t ___Flags;
	BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C ___MaterialID;
	BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___MeshID;
	uint16_t ___SplitMask;
	uint16_t ___SubMeshIndex;
	BatchID_t884E3C204D1F4C18FFD2361FC14A1E64CFBD8770 ___BatchID;
	int32_t ___m_CachedHash;
};
struct EntitiesGraphicsChunkCullingData_tC37027882083B30CD5A0CB67805D6C47FEF35B04 
{
	int32_t ___ChunkOffsetInBatch;
	uint16_t ___MovementGraceFixed16;
	uint8_t ___Flags;
	uint8_t ___ForceLowLODPrevious;
	ChunkInstanceLodEnabled_t5670241854299567EBDD216F0A48CF1C2F3AA3B2 ___InstanceLodEnableds;
	U3CFlippedWindingU3Ee__FixedBuffer_tF4D15AB64D0B1662C0426CF76CD59ECE2C7CB940 ___FlippedWinding;
};
struct EntityCommandBuffer_tFFB6458BC7FB90A6CF406831009EA1F9FC0CD008 
{
	EntityCommandBufferData_t88C8EFD5BBEF42F8008AF73FA2C27B60E5A31DC2* ___m_Data;
	int32_t ___SystemID;
	SystemHandle_t5A4D46B81DF95CD891D2102270B37E23AF992894 ___OriginSystemHandle;
	int32_t ___PassedPrePlaybackValidation;
};
struct FilteredArchetype_t01C3AC08A05A3462BEB416576B2850730C7D36A5 
{
	int32_t ___EntityCount;
	UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 ___PackedEntityIndices;
	UnsafeList_1_tEE6D0269E6E8E59E96623AA3410F283FE7B8CF65 ___TypeIndices;
};
struct FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824 
{
	union
	{
		struct
		{
			uint16_t ___utf8LengthInBytes;
			alignas(1) FixedBytes30_t7721F11929A3AC08287DF5E6D7AEF85CCEE04AD2 ___bytes;
		};
		uint8_t FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824__padding[32];
	};
};
struct FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E 
{
	union
	{
		struct
		{
			uint16_t ___utf8LengthInBytes;
			alignas(1) FixedBytes510_t95B284C3FF966246998B23701C3F0F55C6BD7973 ___bytes;
		};
		uint8_t FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E__padding[512];
	};
};
struct FixedString64Bytes_t0F1B6FFAFD8C15898CD77D91A79AB36AA078E0A5 
{
	union
	{
		struct
		{
			uint16_t ___utf8LengthInBytes;
			alignas(1) FixedBytes62_t25CC23B7A3CF922DF0D1F0BFD5F801864D4FFD2A ___bytes;
		};
		uint8_t FixedString64Bytes_t0F1B6FFAFD8C15898CD77D91A79AB36AA078E0A5__padding[64];
	};
};
struct GpuUploadOperation_t39F13CF397D975692B4BCE5E300604E3AB8CA152 
{
	int32_t ___Kind;
	int32_t ___SrcMatrixType;
	void* ___Src;
	int32_t ___DstOffset;
	int32_t ___DstOffsetInverse;
	int32_t ___Size;
};
struct GraphicsArchetype_t9F776CA17A337DB797D4F98638C296AC11D98A2B 
{
	UnsafeList_1_t86D29969117DEA467914C7222932508E1E794B95 ___PropertyComponents;
};
struct LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 
{
	int32_t ___instanceID;
	int32_t ___cookieID;
	float ___cookieScale;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	float ___range;
	float ___coneAngle;
	float ___innerConeAngle;
	float ___shape0;
	float ___shape1;
	uint8_t ___type;
	uint8_t ___mode;
	uint8_t ___shadow;
	uint8_t ___falloff;
};
struct LocalToWorld_t23B3E8CDA5838EF771A49AC5B39A57AF233E038D 
{
	float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 ___Value;
};
struct LocalTransform_t8D1FEB4386DEE0D22FA43322268BF76E9FF687BD 
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___Position;
	float ___Scale;
	quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 ___Rotation;
};
struct MeshRendererBakingData_tB57745402D0323D65CD2CF85D95648D4C699862E 
{
	UnityObjectRef_1_t8BE40382883A54D1584104562AE9432F4BD7E4A5 ___MeshRenderer;
};
struct PerWorldSystemInfo_t633E3D6D07B304920DCA0CE411AF821A19C0D756 
{
	SystemHandle_t5A4D46B81DF95CD891D2102270B37E23AF992894 ___handle;
	int32_t ___systemTypeIndex;
};
struct PostTransformMatrix_t4E6015656BF644B8026BEF23B38DC1DAE7C8A78D 
{
	float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 ___Value;
};
struct PrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751 
{
	Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B ___GUID;
	Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B ___Hash;
	int32_t ___RefCount;
};
struct RasterState_tA30E8336EA5D1E2152A6C7252F15384985B98A26 
{
	int32_t ___m_CullingMode;
	int32_t ___m_OffsetUnits;
	float ___m_OffsetFactor;
	uint8_t ___m_DepthClip;
	uint8_t ___m_Conservative;
	uint8_t ___m_Padding1;
	uint8_t ___m_Padding2;
};
struct RenderBounds_tE83D2C345D9E9FBEA1E680C79E47CCF6A46AFA0A 
{
	AABB_t54A6237E1BDC0F6978DE1AF7D387C4EE19A7F56A ___Value;
};
struct RenderMeshUnmanaged_tE7BB4BC0043D5F2763A5D79EF50E34D65BAFB9C0 
{
	UnityObjectRef_1_t98A997E7AA0E9723ACD292BF2F782D4E1E058656 ___mesh;
	SubMeshIndexInfo32_t7F97A4B1EF649ACA35DAF9C4EAA91536D6AF0A69 ___subMeshInfo;
	UnityObjectRef_1_t77601E67D4355EFD7EA1E3E4EB7710DE1A9D5A32 ___materialForSubMesh;
};
struct RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B 
{
	int32_t ___m_Type;
	int32_t ___m_NameID;
	int32_t ___m_InstanceID;
	intptr_t ___m_BufferPointer;
	int32_t ___m_MipLevel;
	int32_t ___m_CubeFace;
	int32_t ___m_DepthSlice;
};
struct RequestSceneLoaded_t84D63EB24CFB758BF46A3B4DDB00140B84E2F9B4 
{
	int32_t ___LoadFlags;
};
struct ResolvedSceneHash_t5CA34693F082AFC6F60F638176577BDA620C9B20 
{
	Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B ___ArtifactHash;
};
struct RuntimeGlobalObjectId_tC6329FB06BA5199F5848D9355CF10D6D7CACEA00 
{
	int64_t ___SceneObjectIdentifier0;
	int64_t ___SceneObjectIdentifier1;
	Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B ___AssetGUID;
	int32_t ___IdentifierType;
};
struct SceneBoundingVolume_tFA9A1787D49E9E52434EA07C08014B51384FE462 
{
	MinMaxAABB_t73F9DC1DF51B88F574F3D9977E43B12EBCF97FCF ___Value;
};
struct SceneReference_t2807450F0E3141AA80D97BE5CDC40D70965940B5 
{
	Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B ___SceneGUID;
};
struct SceneSection_t7E9283B521FC08050547458EF3248964019A36B8 
{
	Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B ___SceneGUID;
	int32_t ___Section;
};
struct SceneSectionData_t22BBFAD9EE6AF38CC454C77315B0DDCEC2FAEE12 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B ___SceneGUID;
		};
		#pragma pack(pop, tp)
		struct
		{
			Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B ___SceneGUID_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SubSectionIndex_OffsetPadding[16];
			int32_t ___SubSectionIndex;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SubSectionIndex_OffsetPadding_forAlignmentOnly[16];
			int32_t ___SubSectionIndex_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___FileSize_OffsetPadding[20];
			int32_t ___FileSize;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___FileSize_OffsetPadding_forAlignmentOnly[20];
			int32_t ___FileSize_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ObjectReferenceCount_OffsetPadding[24];
			int32_t ___ObjectReferenceCount;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ObjectReferenceCount_OffsetPadding_forAlignmentOnly[24];
			int32_t ___ObjectReferenceCount_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___BoundingVolume_OffsetPadding[28];
			MinMaxAABB_t73F9DC1DF51B88F574F3D9977E43B12EBCF97FCF ___BoundingVolume;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___BoundingVolume_OffsetPadding_forAlignmentOnly[28];
			MinMaxAABB_t73F9DC1DF51B88F574F3D9977E43B12EBCF97FCF ___BoundingVolume_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Codec_OffsetPadding[52];
			int32_t ___Codec;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Codec_OffsetPadding_forAlignmentOnly[52];
			int32_t ___Codec_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___DecompressedFileSize_OffsetPadding[56];
			int32_t ___DecompressedFileSize;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___DecompressedFileSize_OffsetPadding_forAlignmentOnly[56];
			int32_t ___DecompressedFileSize_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ExternalEntitiesRefRange_OffsetPadding[60];
			int32_t ___ExternalEntitiesRefRange;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ExternalEntitiesRefRange_OffsetPadding_forAlignmentOnly[60];
			int32_t ___ExternalEntitiesRefRange_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___BlobHeader_OffsetPadding[64];
			RuntimeBlobHeaderRef_t5D1D053F0C184F48CB626911CD1C1CCDD1E06D47 ___BlobHeader;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___BlobHeader_OffsetPadding_forAlignmentOnly[64];
			RuntimeBlobHeaderRef_t5D1D053F0C184F48CB626911CD1C1CCDD1E06D47 ___BlobHeader_forAlignmentOnly;
		};
	};
};
struct SkinMatrix_t34B67BFCA5D79A666D007006850E5D7CE005AF69 
{
	float3x4_t0884AF37CAE698A5BC546E51634EACF2F8ADCD51 ___Value;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct ThreadLocalAABB_t9E046151708D95D2A75A2108020F1402970B40AC 
{
	MinMaxAABB_t73F9DC1DF51B88F574F3D9977E43B12EBCF97FCF ___AABB;
	U3CCacheLinePaddingU3Ee__FixedBuffer_t318D2ECC4739299F726FD6501C907D0EEB1131DA ___CacheLinePadding;
};
struct ThreadLocalAllocator_tE0183C34D45E4B7A3E572FE19DDE644C3FE99F4C 
{
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___rewindAllocatorsMarker;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___rewindMarker;
	UnsafeList_1_t74E4F40D641123A06A93F6C8D3231A505181725E ___Allocators;
};
struct ThreadLocalCollectBuffer_tF53F7FDBD3B862D6FD2BCB67307EED7B5E22864A 
{
	UnsafeList_1_t08400821D1454751882D5BF6EF70DBE3AC9F4FD6 ___WorkItems;
	U3Cm_CacheLinePaddingU3Ee__FixedBuffer_t6B4EC7853C4E583A54345A409EBE3D54C6DFB97C ___m_CacheLinePadding;
};
struct TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F 
{
	int32_t ___m_Sprite;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_Transform;
	int32_t ___m_GameObject;
	int32_t ___m_Flags;
	int32_t ___m_ColliderType;
};
struct TransformAuthoring_t3C311DCBF21C302795452FF32440FC0C77A00939 
{
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___LocalPosition;
	quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 ___LocalRotation;
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___LocalScale;
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___Position;
	quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 ___Rotation;
	float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 ___LocalToWorld;
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___AuthoringParent;
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___RuntimeParent;
	int32_t ___RuntimeTransformUsage;
	uint32_t ___ChangeVersion;
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct UTriangle_tCD210F61D627BAB81A1CFFEC7076C3FBB9A6D7CD 
{
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___va;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___vb;
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___vc;
	UCircle_t68411F86930A7056CDBAB9E208076A3075D15218 ___c;
	float ___area;
	int3_t1D01D28AA6D32890A228297EBADD9BB1A960E2BF ___indices;
};
struct UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67 
{
	UntypedUnsafeList_tB7A46F76589C71832F1147292E5123FB99E199B2 ___m_UntypedListData;
};
struct RecordedDependencies_tD332557133A9411EB6FE425858C928F703711B83 
{
	UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 ___ObjectReference;
	UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 ___PersistentAsset;
	UnsafeList_1_t2E169590720CAE8D2370A59936FDA97D4E285B6D ___GetComponent;
	UnsafeList_1_t019E726FDD648FDC4E8725736DB3C1E8873AF9A6 ___GetHierarchySingle;
	UnsafeList_1_tDB7B0B8624C61A57ABDB1AC1EDA1F76179077E13 ___GetHierarchy;
	UnsafeList_1_tFE26B731BBB5324EC74196596A4FCD2A2F7B910B ___GetComponents;
	UnsafeList_1_tB1909FF2C0A21F7B47ED5BD8F780312C509C5303 ___ObjectExist;
	UnsafeList_1_t47385BA7E4AE412D819BE344107FDEC23EB82F8D ___ObjectProperty;
	UnsafeList_1_tCFCA13A75A8A7CFC6CD69B080638E71EE151539A ___ObjectStatic;
	UnsafeList_1_t9B1FBEFD612E0FA0F9D5C88BF2BC764C2CC0FCB5 ___Active;
	int32_t ___LightBaking;
};
struct ValueTuple_2_t4AC646C9C23C301CF4A194630005998BC4D1619F 
{
	ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA ___Item1;
	EntityQuery_t23B7A11FAA475D860E94409BFD4CF7E4B337CF90 ___Item2;
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct AttachmentDescriptor_tBAC9B26B50BB0838C5C0CC22BB296F9DFF41276E 
{
	int32_t ___m_LoadAction;
	int32_t ___m_StoreAction;
	int32_t ___m_Format;
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___m_LoadStoreTarget;
	RenderTargetIdentifier_tA528663AC6EB3911D8E91AA40F7070FA5455442B ___m_ResolveTarget;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_ClearColor;
	float ___m_ClearDepth;
	uint32_t ___m_ClearStencil;
};
struct BakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7 
{
	UnsafeList_1_tEE6D0269E6E8E59E96623AA3410F283FE7B8CF65 ___AddedComponents;
	UnsafeHashSet_1_t982205DCD82C95EDB86B40937DA9AC768D4723A8 ___Entities;
	Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD ___PrimaryEntity;
	RecordedDependencies_tD332557133A9411EB6FE425858C928F703711B83 ___Dependencies;
	BakerEntityUsage_tE394A24EE421B4595946F226800281F25AF6F80A ___Usage;
};
struct BufferAllocator_tBE0961382918F823D26ED519F45D281AA06494D4 
{
	BufferAllocatorHeap_t8B23AEAD3FF0104ED854068D0451346730DAC3AE ___Allocator;
};
struct EntitiesGraphicsChunkInfo_t5431C496DFC8278759A095EDCE820FE102382C57 
{
	int32_t ___BatchIndex;
	int32_t ___ChunkTypesBegin;
	int32_t ___ChunkTypesEnd;
	EntitiesGraphicsChunkCullingData_tC37027882083B30CD5A0CB67805D6C47FEF35B04 ___CullingData;
	bool ___Valid;
};
struct EntitiesGraphicsChunkInfo_t5431C496DFC8278759A095EDCE820FE102382C57_marshaled_pinvoke
{
	int32_t ___BatchIndex;
	int32_t ___ChunkTypesBegin;
	int32_t ___ChunkTypesEnd;
	EntitiesGraphicsChunkCullingData_tC37027882083B30CD5A0CB67805D6C47FEF35B04 ___CullingData;
	int32_t ___Valid;
};
struct EntitiesGraphicsChunkInfo_t5431C496DFC8278759A095EDCE820FE102382C57_marshaled_com
{
	int32_t ___BatchIndex;
	int32_t ___ChunkTypesBegin;
	int32_t ___ChunkTypesEnd;
	EntitiesGraphicsChunkCullingData_tC37027882083B30CD5A0CB67805D6C47FEF35B04 ___CullingData;
	int32_t ___Valid;
};
struct RemoteContentId_t27977325179FF4C511004EBF35A0B38AA71D66B0 
{
	FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E ___Name;
	Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B ___U3CHashU3Ek__BackingField;
};
struct RemoteContentLocation_t600FAD240C089026DD5CAFCBC44B128555506F7D 
{
	int32_t ___Type;
	FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E ___Path;
	Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B ___Hash;
	uint32_t ___Crc;
	int64_t ___Size;
};
struct RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733 
{
	BlendState_tC9B817349E49EF26CBCDC8FCE02789A661DC2630 ___m_BlendState;
	RasterState_tA30E8336EA5D1E2152A6C7252F15384985B98A26 ___m_RasterState;
	DepthState_t798415D2C1D9202E555FEE5D4C5FDF6B3A077255 ___m_DepthState;
	StencilState_tBE5F7C1134E50C5E93B45A626D4FB4690F1C91A9 ___m_StencilState;
	int32_t ___m_StencilReference;
	int32_t ___m_Mask;
};
struct ThreadLocalDrawCommands_t822AD6AA83D6162496D9693946084E12C2CABD42 
{
	UnsafeParallelHashMap_2_tDFDB46E479BB5B926D53F974F9E40CE56EACCCE4 ___DrawCommandStreamIndices;
	UnsafeList_1_tBEE99D1003DF5F7DFE25B2493AF04602E443B14C ___DrawCommands;
	ThreadLocalAllocator_tE0183C34D45E4B7A3E572FE19DDE644C3FE99F4C ___ThreadLocalAllocator;
	U3Cm_CacheLinePaddingU3Ee__FixedBuffer_t4E8B9A94E976A64E77E4AFA2922469EA7348F4A8 ___m_CacheLinePadding;
};
struct UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A 
{
	RuntimeGlobalObjectId_tC6329FB06BA5199F5848D9355CF10D6D7CACEA00 ___GlobalId;
	int16_t ___GenerationType;
};
struct FileHeader_t430257AAE870D71BF3637853F325940D98A1838D 
{
	int64_t ___MagicValue;
	int32_t ___FileVersion;
	int32_t ___HeaderSize;
	Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B ___FileId;
	FixedString64Bytes_t0F1B6FFAFD8C15898CD77D91A79AB36AA078E0A5 ___FileType;
	int32_t ___FirstLevelNodesCount;
	int64_t ___NodesSectionOffset;
	int32_t ___NodesSectionSize;
	int64_t ___MetadataSectionOffset;
	int32_t ___MetadataSectionSize;
	int64_t ___DataSectionOffset;
	int64_t ___DataSectionSize;
};
struct BlockAllocator_tE609150FFA2B257EBBBEEEFDF795FB7073A4E7AE 
{
	BufferAllocator_tBE0961382918F823D26ED519F45D281AA06494D4 ___m_bufferAllocator;
	UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 ___m_allocations;
	int32_t ___m_currentBlockIndex;
	uint8_t* ___m_nextPtr;
};
struct EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4 
{
	UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A ___Id;
};
struct ResolvedSectionPath_t87B9F3F0B0115B2D7CCADAD376C33481F1B5BE1D 
{
	FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E ___ScenePath;
	UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A ___HybridReferenceId;
};
struct BlobHeader_tCE133EA8852A67AF9C9F3E380D6288A120A34953 
{
	FileHeader_t430257AAE870D71BF3637853F325940D98A1838D ___FileHeader;
	BlobArray_1_t112C49ADFEB7465DC55221B4D8E6C721002D4D16 ___NodeSection;
	BlobArray_1_t112C49ADFEB7465DC55221B4D8E6C721002D4D16 ___MetadataSection;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C_StaticFields
{
	BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C ___Null;
};
struct BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_StaticFields
{
	BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0 ___Null;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_StaticFields
{
	EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877 ___Null;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion;
};
struct ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_StaticFields
{
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___none;
};
struct Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_StaticFields
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___k_HexToLiteral;
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___k_LiteralToHex;
};
struct ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA_StaticFields
{
	FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824 ___kMsg_None;
	FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824 ___kMsg_Space_Buffer;
	FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824 ___kMsg_Space_Exclude;
	FixedString32Bytes_t0FB200DC482825CC1EF24B4640201CC039631824 ___kMsg_Space_Readonly;
};
struct EntityCommandBuffer_tFFB6458BC7FB90A6CF406831009EA1F9FC0CD008_StaticFields
{
	SharedStatic_1_t91D24BF9DAB0EDD81AA3013F2C4CBD0A98040667 ____ms_CommandBufferIDAllocator;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ProfileEcbPlayback;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ProfileEcbDispose;
	SharedStatic_1_t91D24BF9DAB0EDD81AA3013F2C4CBD0A98040667 ____PLAYBACK_WITH_TRACE;
	SharedStatic_1_t91D24BF9DAB0EDD81AA3013F2C4CBD0A98040667 ____ENABLE_PRE_PLAYBACK_VALIDATION;
};
struct LocalTransform_t8D1FEB4386DEE0D22FA43322268BF76E9FF687BD_StaticFields
{
	LocalTransform_t8D1FEB4386DEE0D22FA43322268BF76E9FF687BD ___Identity;
};
struct ThreadLocalCollectBuffer_tF53F7FDBD3B862D6FD2BCB67307EED7B5E22864A_StaticFields
{
	int32_t ___kCollectBufferSize;
};
struct TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F_StaticFields
{
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F ___Default;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlobBuilderArray_1__ctor_m948B069639DD4D38F6F1262D84114DCFE1C61213_gshared (BlobBuilderArray_1_t9ACBF11807FDDB4011EDB8CC24DED8347A67F9CE* __this, void* ___0_data, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeList_1_Add_m8F1C8B337385027E5C7335B0A69C3F58D9580C5A_gshared (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* __this, OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlobBuilderArray_1_t9ACBF11807FDDB4011EDB8CC24DED8347A67F9CE BlobBuilder_Allocate_TisIl2CppFullySharedGenericStruct_mBAE75393D2058A52F296136F65159AB119A8BA84_gshared (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* __this, BlobArray_1_t92D4034D117B24B89F7B548E16040441D797DD7A* ___0_ptr, int32_t ___1_length, int32_t ___2_alignment, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlobBuilderArray_1_t9ACBF11807FDDB4011EDB8CC24DED8347A67F9CE BlobBuilder_Construct_TisIl2CppFullySharedGenericStruct_m968C1740CDF94836A8277822A6FBB8971B58AF2D_gshared (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* __this, BlobArray_1_t92D4034D117B24B89F7B548E16040441D797DD7A* ___0_blobArray, __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ___1_data, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* BlobBuilder_ConstructRoot_TisIl2CppFullySharedGenericStruct_mFD0626363CBDF50FD61583CF2346CF5C85914C3B_gshared (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBlobHeader_tCE133EA8852A67AF9C9F3E380D6288A120A34953_m71B7F28045E57BA4B230177FF855EE09830C108E_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisBlobHeader_tCE133EA8852A67AF9C9F3E380D6288A120A34953_mBB5706C105F86AA43F271DB42E6D2CF889B597D4_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BlobHeader_tCE133EA8852A67AF9C9F3E380D6288A120A34953* UnsafeUtility_AsRef_TisBlobHeader_tCE133EA8852A67AF9C9F3E380D6288A120A34953_m1CA564AC8F5282BE22B6BA0D9B0664FFBD37A51E_gshared_inline (void* ___0_ptr, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlobHeader_tCE133EA8852A67AF9C9F3E380D6288A120A34953* BlobBuilder_ConstructRoot_TisBlobHeader_tCE133EA8852A67AF9C9F3E380D6288A120A34953_m9431D81E8277B0837FBF28ACC805C34B4CA8D515_gshared (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_gshared_inline (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_gshared (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40_gshared (NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_gshared_inline (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0_gshared (NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7 ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_gshared_inline (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_gshared_inline (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179_gshared (NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_gshared (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlobAssetReference_1_t083E0A88DA01E7BD8A190C0971D1344520389480 BlobBuilder_CreateBlobAssetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m310A50943D73D96A06D0517E42F19C124A2AD047_gshared (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlobAssetReference_1_t9CC4CC80790FA45C2D0C95D03AFA5C4BC6B2A36E BlobBuilder_CreateBlobAssetReference_TisRemoteContentCatalogData_t32F84FD2CF243010159A9091363799DA1ED7C404_m8B0CB3D8D4098032633D87926E43F85678F06D74_gshared (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlobAssetReference_1_tE272FE135F49F621C3F0A24402C578079E56040B BlobBuilder_CreateBlobAssetReference_TisResourceCatalogData_t553E280FAF0BE667673BC323E80FAFBE374C731D_m774EAF0DC51DB8F0151BF7D0A9084CEB691DE625_gshared (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlobAssetReference_1_tDD332C4A1E41EA2CA76C1632A675CEB17AA84B13 BlobBuilder_CreateBlobAssetReference_TisRuntimeContentCatalogData_tB54FE67BBB6C431D3ACF06E9C4269EBCBA590635_m9FAA7DB2F697954DF999939A962C6FF7A9264B31_gshared (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlobAssetReference_1_tD5149596D95DFDE07586D2F21EBDCE9F21C30A24 BlobBuilder_CreateBlobAssetReference_TisSceneMetaData_t41E517D27C94A6AB5C1CED25FE6E4C309AFFD420_m50F30BDC18F0BDF4EF58F484FF9580CC859EFDC3_gshared (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlobAssetReference_1_t2539DE18562593E15A5CAC630C2C2045EEA597E9 BlobBuilder_CreateBlobAssetReference_TisIl2CppFullySharedGenericStruct_mAC3F61CBA51340A8BE1DE4EA2915885B87F42466_gshared (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlobAssetReference_1_t9FD7FAAE1333347EB8AB3D10A7FC0C35E3F2778C BlobBuilder_CreateBlobAssetReference_TisBlobHeader_tCE133EA8852A67AF9C9F3E380D6288A120A34953_m8D4E17C8B80802F29987FFD19C5F0658CE10FAB2_gshared (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* BlobBuilder_SetPointer_TisIl2CppFullySharedGenericStruct_m2F6675733786947F7C005AB841841DDD91393C34_gshared (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* __this, BlobPtr_1_t06CF9D7095B1DC673B78A9CA39F8296DEE4DB5C8* ___0_ptr, Il2CppFullySharedGenericStruct* ___1_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* BlobArray_1_GetUnsafePtr_m1C36E9770A33F35255BFCC18D7FA21E4863771FE_gshared (BlobArray_1_t112C49ADFEB7465DC55221B4D8E6C721002D4D16* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BlobString_CopyTo_TisIl2CppFullySharedGenericAny_m1D26A6AE8A4670B9CDFAB759A10426206BE05973_gshared (BlobString_t059A4022514441B9F0A46FC1B931579200DFFD92* __this, Il2CppFullySharedGenericAny* ___0_dest, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlobBuilderArray_1_t5B3DC5242B2D9A248557AE9E6482FAAADCF8C152 BlobBuilder_Allocate_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86211515B461EE89BA269987A6A5C659AF0F494E_gshared (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* __this, BlobArray_1_t112C49ADFEB7465DC55221B4D8E6C721002D4D16* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* BlobBuilderArray_1_GetUnsafePtr_mC894A9506A69AE0041E008C9BDEC6DB0B732FE22_gshared_inline (BlobBuilderArray_1_t5B3DC5242B2D9A248557AE9E6482FAAADCF8C152* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* BlockAllocator_Allocate_TisIl2CppFullySharedGenericStruct_mD65B063953A2C3BD4D077C0739D2DAB152A38339_gshared (BlockAllocator_tE609150FFA2B257EBBBEEEFDF795FB7073A4E7AE* __this, int32_t ___0_items, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* BlockAllocator_Construct_TisIl2CppFullySharedGenericStruct_m763625A659D21E75C7BB3EE3C33F02FD0905F8BE_gshared (BlockAllocator_tE609150FFA2B257EBBBEEEFDF795FB7073A4E7AE* __this, Il2CppFullySharedGenericStruct* ___0_src, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m274F833CD001C63E56A22D8F42C76CE8C6CC39DF_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477_gshared (ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D* __this, int32_t ___0_item1, int32_t ___1_item2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8127223B00E08567EC09EF1D992F89C74F248AB0_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6C198B51ACD7B8EC62D5E0E75433C12BE9D65A58_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C BuddyAllocator_GetNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF34160C9BD8BE094015670C76DC9D83F6BB30258_gshared (BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB* __this, int32_t ___0_offset, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6040A2644049EE10F18319F7950279CDC50BF2AC_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B BuddyAllocator_GetNativeArray_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m4E8A7180E641B7FBF7D890D898C951A84B661CC1_gshared (BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB* __this, int32_t ___0_offset, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 BuddyAllocator_GetNativeArray_TisIl2CppFullySharedGenericStruct_m22429A21546FE501A3CD98D54A3CAF8DECE230E2_gshared (BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB* __this, int32_t ___0_offset, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeList_1_get_Length_mCC820C658B1BB4A17962AB76F15B049E3F24CD58_gshared_inline (UnsafeList_1_tA068C24D5E1D5CBC03E6D51E587FF66C4EC0C8E3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 UnsafeList_1_get_Item_mE5CDA9830B21C68F834C0DA5D9AAB8384DC0D6ED_gshared_inline (UnsafeList_1_tA068C24D5E1D5CBC03E6D51E587FF66C4EC0C8E3* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeList_1_get_Length_mA49FF92B2235FC7B131269EB9560EBE9B6F9ECF6_gshared_inline (UnsafeList_1_t7517BB16A0F7933063E20E60999A377DE8B0B4F4* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 UnsafeList_1_get_Item_mDCBDF29EBE7CBAC8E3079695C5A732EAB19978B4_gshared_inline (UnsafeList_1_t7517BB16A0F7933063E20E60999A377DE8B0B4F4* __this, int32_t ___0_index, const RuntimeMethod* method) ;

inline void BlobBuilderArray_1__ctor_m948B069639DD4D38F6F1262D84114DCFE1C61213 (BlobBuilderArray_1_t9ACBF11807FDDB4011EDB8CC24DED8347A67F9CE* __this, void* ___0_data, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (BlobBuilderArray_1_t9ACBF11807FDDB4011EDB8CC24DED8347A67F9CE*, void*, int32_t, const RuntimeMethod*))BlobBuilderArray_1__ctor_m948B069639DD4D38F6F1262D84114DCFE1C61213_gshared)(__this, ___0_data, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool math_ispow2_m5DB60B3B6A893F0400B2BA64176473995E41ECB0_inline (int32_t ___0_x, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlobDataRef_tC50BF7E5090F5D4D0316711BE83B361517B922E4 BlobBuilder_Allocate_m3F9703704DC02306630C7DBC6979FE8471DB17FA (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* __this, int32_t ___0_size, int32_t ___1_alignment, const RuntimeMethod* method) ;
inline void NativeList_1_Add_m8F1C8B337385027E5C7335B0A69C3F58D9580C5A (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* __this, OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*, OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982*, const RuntimeMethod*))NativeList_1_Add_m8F1C8B337385027E5C7335B0A69C3F58D9580C5A_gshared)(__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* BlobBuilder_AllocationToPointer_mCDAFE0E1B0906914A0F51F04EE02EBED6AB71569 (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* __this, BlobDataRef_tC50BF7E5090F5D4D0316711BE83B361517B922E4 ___0_blobDataRef, const RuntimeMethod* method) ;
inline BlobBuilderArray_1_t9ACBF11807FDDB4011EDB8CC24DED8347A67F9CE BlobBuilder_Allocate_TisIl2CppFullySharedGenericStruct_mBAE75393D2058A52F296136F65159AB119A8BA84 (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* __this, BlobArray_1_t92D4034D117B24B89F7B548E16040441D797DD7A* ___0_ptr, int32_t ___1_length, int32_t ___2_alignment, const RuntimeMethod* method)
{
	return ((  BlobBuilderArray_1_t9ACBF11807FDDB4011EDB8CC24DED8347A67F9CE (*) (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51*, BlobArray_1_t92D4034D117B24B89F7B548E16040441D797DD7A*, int32_t, int32_t, const RuntimeMethod*))BlobBuilder_Allocate_TisIl2CppFullySharedGenericStruct_mBAE75393D2058A52F296136F65159AB119A8BA84_gshared)(__this, ___0_ptr, ___1_length, ___2_alignment, method);
}
inline BlobBuilderArray_1_t9ACBF11807FDDB4011EDB8CC24DED8347A67F9CE BlobBuilder_Construct_TisIl2CppFullySharedGenericStruct_m968C1740CDF94836A8277822A6FBB8971B58AF2D (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* __this, BlobArray_1_t92D4034D117B24B89F7B548E16040441D797DD7A* ___0_blobArray, __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ___1_data, const RuntimeMethod* method)
{
	return ((  BlobBuilderArray_1_t9ACBF11807FDDB4011EDB8CC24DED8347A67F9CE (*) (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51*, BlobArray_1_t92D4034D117B24B89F7B548E16040441D797DD7A*, __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*, const RuntimeMethod*))BlobBuilder_Construct_TisIl2CppFullySharedGenericStruct_m968C1740CDF94836A8277822A6FBB8971B58AF2D_gshared)(__this, ___0_blobArray, ___1_data, method);
}
inline Il2CppFullySharedGenericStruct* BlobBuilder_ConstructRoot_TisIl2CppFullySharedGenericStruct_mFD0626363CBDF50FD61583CF2346CF5C85914C3B (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* __this, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51*, const RuntimeMethod*))BlobBuilder_ConstructRoot_TisIl2CppFullySharedGenericStruct_mFD0626363CBDF50FD61583CF2346CF5C85914C3B_gshared)(__this, method);
}
inline int32_t UnsafeUtility_SizeOf_TisBlobHeader_tCE133EA8852A67AF9C9F3E380D6288A120A34953_m71B7F28045E57BA4B230177FF855EE09830C108E_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisBlobHeader_tCE133EA8852A67AF9C9F3E380D6288A120A34953_m71B7F28045E57BA4B230177FF855EE09830C108E_gshared_inline)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisBlobHeader_tCE133EA8852A67AF9C9F3E380D6288A120A34953_mBB5706C105F86AA43F271DB42E6D2CF889B597D4 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisBlobHeader_tCE133EA8852A67AF9C9F3E380D6288A120A34953_mBB5706C105F86AA43F271DB42E6D2CF889B597D4_gshared)(method);
}
inline BlobHeader_tCE133EA8852A67AF9C9F3E380D6288A120A34953* UnsafeUtility_AsRef_TisBlobHeader_tCE133EA8852A67AF9C9F3E380D6288A120A34953_m1CA564AC8F5282BE22B6BA0D9B0664FFBD37A51E_inline (void* ___0_ptr, const RuntimeMethod* method)
{
	return ((  BlobHeader_tCE133EA8852A67AF9C9F3E380D6288A120A34953* (*) (void*, const RuntimeMethod*))UnsafeUtility_AsRef_TisBlobHeader_tCE133EA8852A67AF9C9F3E380D6288A120A34953_m1CA564AC8F5282BE22B6BA0D9B0664FFBD37A51E_gshared_inline)(___0_ptr, method);
}
inline BlobHeader_tCE133EA8852A67AF9C9F3E380D6288A120A34953* BlobBuilder_ConstructRoot_TisBlobHeader_tCE133EA8852A67AF9C9F3E380D6288A120A34953_m9431D81E8277B0837FBF28ACC805C34B4CA8D515 (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* __this, const RuntimeMethod* method)
{
	return ((  BlobHeader_tCE133EA8852A67AF9C9F3E380D6288A120A34953* (*) (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51*, const RuntimeMethod*))BlobBuilder_ConstructRoot_TisBlobHeader_tCE133EA8852A67AF9C9F3E380D6288A120A34953_m9431D81E8277B0837FBF28ACC805C34B4CA8D515_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlobBuilder_AlignChunk_mB9C0DB02FA87BC040668BFA05F4BAEE7C4599887 (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* __this, int32_t ___0_chunkIndex, const RuntimeMethod* method) ;
inline int32_t NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_inline (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*, const RuntimeMethod*))NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_gshared_inline)(__this, method);
}
inline void NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40 (NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 (*) (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*, int32_t, const RuntimeMethod*))NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_gshared_inline)(__this, ___0_index, method);
}
inline void NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0 (NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7 ___0_array, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7, const RuntimeMethod*))NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0_gshared)(___0_array, method);
}
inline int32_t NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_inline (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*, const RuntimeMethod*))NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_gshared_inline)(__this, method);
}
inline OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_inline (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 (*) (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*, int32_t, const RuntimeMethod*))NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_gshared_inline)(__this, ___0_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5 (int64_t ___0_size, int32_t ___1_align, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177 (void* ___0_destination, void* ___1_source, int64_t ___2_size, const RuntimeMethod* method) ;
inline void NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179 (NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7*, const RuntimeMethod*))NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179_gshared)(__this, method);
}
inline void NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*, const RuntimeMethod*))NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t math_hash_m8DC7F61C691A4C0D78CCFCF54A4943DAD9BE153F (void* ___0_pBuffer, int32_t ___1_numBytes, uint32_t ___2_seed, const RuntimeMethod* method) ;
inline BlobAssetReference_1_t083E0A88DA01E7BD8A190C0971D1344520389480 BlobBuilder_CreateBlobAssetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m310A50943D73D96A06D0517E42F19C124A2AD047 (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	return ((  BlobAssetReference_1_t083E0A88DA01E7BD8A190C0971D1344520389480 (*) (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))BlobBuilder_CreateBlobAssetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m310A50943D73D96A06D0517E42F19C124A2AD047_gshared)(__this, ___0_allocator, method);
}
inline BlobAssetReference_1_t9CC4CC80790FA45C2D0C95D03AFA5C4BC6B2A36E BlobBuilder_CreateBlobAssetReference_TisRemoteContentCatalogData_t32F84FD2CF243010159A9091363799DA1ED7C404_m8B0CB3D8D4098032633D87926E43F85678F06D74 (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	return ((  BlobAssetReference_1_t9CC4CC80790FA45C2D0C95D03AFA5C4BC6B2A36E (*) (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))BlobBuilder_CreateBlobAssetReference_TisRemoteContentCatalogData_t32F84FD2CF243010159A9091363799DA1ED7C404_m8B0CB3D8D4098032633D87926E43F85678F06D74_gshared)(__this, ___0_allocator, method);
}
inline BlobAssetReference_1_tE272FE135F49F621C3F0A24402C578079E56040B BlobBuilder_CreateBlobAssetReference_TisResourceCatalogData_t553E280FAF0BE667673BC323E80FAFBE374C731D_m774EAF0DC51DB8F0151BF7D0A9084CEB691DE625 (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	return ((  BlobAssetReference_1_tE272FE135F49F621C3F0A24402C578079E56040B (*) (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))BlobBuilder_CreateBlobAssetReference_TisResourceCatalogData_t553E280FAF0BE667673BC323E80FAFBE374C731D_m774EAF0DC51DB8F0151BF7D0A9084CEB691DE625_gshared)(__this, ___0_allocator, method);
}
inline BlobAssetReference_1_tDD332C4A1E41EA2CA76C1632A675CEB17AA84B13 BlobBuilder_CreateBlobAssetReference_TisRuntimeContentCatalogData_tB54FE67BBB6C431D3ACF06E9C4269EBCBA590635_m9FAA7DB2F697954DF999939A962C6FF7A9264B31 (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	return ((  BlobAssetReference_1_tDD332C4A1E41EA2CA76C1632A675CEB17AA84B13 (*) (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))BlobBuilder_CreateBlobAssetReference_TisRuntimeContentCatalogData_tB54FE67BBB6C431D3ACF06E9C4269EBCBA590635_m9FAA7DB2F697954DF999939A962C6FF7A9264B31_gshared)(__this, ___0_allocator, method);
}
inline BlobAssetReference_1_tD5149596D95DFDE07586D2F21EBDCE9F21C30A24 BlobBuilder_CreateBlobAssetReference_TisSceneMetaData_t41E517D27C94A6AB5C1CED25FE6E4C309AFFD420_m50F30BDC18F0BDF4EF58F484FF9580CC859EFDC3 (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	return ((  BlobAssetReference_1_tD5149596D95DFDE07586D2F21EBDCE9F21C30A24 (*) (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))BlobBuilder_CreateBlobAssetReference_TisSceneMetaData_t41E517D27C94A6AB5C1CED25FE6E4C309AFFD420_m50F30BDC18F0BDF4EF58F484FF9580CC859EFDC3_gshared)(__this, ___0_allocator, method);
}
inline BlobAssetReference_1_t2539DE18562593E15A5CAC630C2C2045EEA597E9 BlobBuilder_CreateBlobAssetReference_TisIl2CppFullySharedGenericStruct_mAC3F61CBA51340A8BE1DE4EA2915885B87F42466 (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	return ((  BlobAssetReference_1_t2539DE18562593E15A5CAC630C2C2045EEA597E9 (*) (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))BlobBuilder_CreateBlobAssetReference_TisIl2CppFullySharedGenericStruct_mAC3F61CBA51340A8BE1DE4EA2915885B87F42466_gshared)(__this, ___0_allocator, method);
}
inline BlobAssetReference_1_t9FD7FAAE1333347EB8AB3D10A7FC0C35E3F2778C BlobBuilder_CreateBlobAssetReference_TisBlobHeader_tCE133EA8852A67AF9C9F3E380D6288A120A34953_m8D4E17C8B80802F29987FFD19C5F0658CE10FAB2 (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	return ((  BlobAssetReference_1_t9FD7FAAE1333347EB8AB3D10A7FC0C35E3F2778C (*) (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))BlobBuilder_CreateBlobAssetReference_TisBlobHeader_tCE133EA8852A67AF9C9F3E380D6288A120A34953_m8D4E17C8B80802F29987FFD19C5F0658CE10FAB2_gshared)(__this, ___0_allocator, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BlobBuilder_GetPatchTarget_m4B4730A57DE2D062962412A21582052542E16723 (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* __this, void* ___0_address, BlobDataRef_tC50BF7E5090F5D4D0316711BE83B361517B922E4* ___1_blobDataRef, const RuntimeMethod* method) ;
inline Il2CppFullySharedGenericStruct* BlobBuilder_SetPointer_TisIl2CppFullySharedGenericStruct_m2F6675733786947F7C005AB841841DDD91393C34 (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* __this, BlobPtr_1_t06CF9D7095B1DC673B78A9CA39F8296DEE4DB5C8* ___0_ptr, Il2CppFullySharedGenericStruct* ___1_obj, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51*, BlobPtr_1_t06CF9D7095B1DC673B78A9CA39F8296DEE4DB5C8*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))BlobBuilder_SetPointer_TisIl2CppFullySharedGenericStruct_m2F6675733786947F7C005AB841841DDD91393C34_gshared)(__this, ___0_ptr, ___1_obj, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) ;
inline void* BlobArray_1_GetUnsafePtr_m1C36E9770A33F35255BFCC18D7FA21E4863771FE (BlobArray_1_t112C49ADFEB7465DC55221B4D8E6C721002D4D16* __this, const RuntimeMethod* method)
{
	return ((  void* (*) (BlobArray_1_t112C49ADFEB7465DC55221B4D8E6C721002D4D16*, const RuntimeMethod*))BlobArray_1_GetUnsafePtr_m1C36E9770A33F35255BFCC18D7FA21E4863771FE_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BlobString_get_Length_mAC6DF9DA9F498307DF710C1E01A9F143FF55FF86 (BlobString_t059A4022514441B9F0A46FC1B931579200DFFD92* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unicode_Utf8ToUtf8_m201605C57016378B046C4778E4CE25B2A2A44702 (uint8_t* ___0_srcBuffer, int32_t ___1_srcLength, uint8_t* ___2_destBuffer, int32_t* ___3_destLength, int32_t ___4_destCapacity, const RuntimeMethod* method) ;
inline int32_t BlobString_CopyTo_TisIl2CppFullySharedGenericAny_m1D26A6AE8A4670B9CDFAB759A10426206BE05973 (BlobString_t059A4022514441B9F0A46FC1B931579200DFFD92* __this, Il2CppFullySharedGenericAny* ___0_dest, const RuntimeMethod* method)
{
	return ((  int32_t (*) (BlobString_t059A4022514441B9F0A46FC1B931579200DFFD92*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))BlobString_CopyTo_TisIl2CppFullySharedGenericAny_m1D26A6AE8A4670B9CDFAB759A10426206BE05973_gshared)(__this, ___0_dest, method);
}
inline BlobBuilderArray_1_t5B3DC5242B2D9A248557AE9E6482FAAADCF8C152 BlobBuilder_Allocate_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86211515B461EE89BA269987A6A5C659AF0F494E (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* __this, BlobArray_1_t112C49ADFEB7465DC55221B4D8E6C721002D4D16* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	return ((  BlobBuilderArray_1_t5B3DC5242B2D9A248557AE9E6482FAAADCF8C152 (*) (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51*, BlobArray_1_t112C49ADFEB7465DC55221B4D8E6C721002D4D16*, int32_t, const RuntimeMethod*))BlobBuilder_Allocate_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86211515B461EE89BA269987A6A5C659AF0F494E_gshared)(__this, ___0_ptr, ___1_length, method);
}
inline void* BlobBuilderArray_1_GetUnsafePtr_mC894A9506A69AE0041E008C9BDEC6DB0B732FE22_inline (BlobBuilderArray_1_t5B3DC5242B2D9A248557AE9E6482FAAADCF8C152* __this, const RuntimeMethod* method)
{
	return ((  void* (*) (BlobBuilderArray_1_t5B3DC5242B2D9A248557AE9E6482FAAADCF8C152*, const RuntimeMethod*))BlobBuilderArray_1_GetUnsafePtr_mC894A9506A69AE0041E008C9BDEC6DB0B732FE22_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* BlockAllocator_Allocate_m658C66EFC9B1D9F239C3969DE1C8BE7CD74DAC56 (BlockAllocator_tE609150FFA2B257EBBBEEEFDF795FB7073A4E7AE* __this, int32_t ___0_bytesToAllocate, int32_t ___1_alignment, const RuntimeMethod* method) ;
inline Il2CppFullySharedGenericStruct* BlockAllocator_Allocate_TisIl2CppFullySharedGenericStruct_mD65B063953A2C3BD4D077C0739D2DAB152A38339 (BlockAllocator_tE609150FFA2B257EBBBEEEFDF795FB7073A4E7AE* __this, int32_t ___0_items, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (BlockAllocator_tE609150FFA2B257EBBBEEEFDF795FB7073A4E7AE*, int32_t, const RuntimeMethod*))BlockAllocator_Allocate_TisIl2CppFullySharedGenericStruct_mD65B063953A2C3BD4D077C0739D2DAB152A38339_gshared)(__this, ___0_items, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* BlockAllocator_Construct_m19308FE9D6B334CF21ACBD1DA82453D418EEBCE6 (BlockAllocator_tE609150FFA2B257EBBBEEEFDF795FB7073A4E7AE* __this, int32_t ___0_size, int32_t ___1_alignment, void* ___2_src, const RuntimeMethod* method) ;
inline Il2CppFullySharedGenericStruct* BlockAllocator_Construct_TisIl2CppFullySharedGenericStruct_m763625A659D21E75C7BB3EE3C33F02FD0905F8BE (BlockAllocator_tE609150FFA2B257EBBBEEEFDF795FB7073A4E7AE* __this, Il2CppFullySharedGenericStruct* ___0_src, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (BlockAllocator_tE609150FFA2B257EBBBEEEFDF795FB7073A4E7AE*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))BlockAllocator_Construct_TisIl2CppFullySharedGenericStruct_m763625A659D21E75C7BB3EE3C33F02FD0905F8BE_gshared)(__this, ___0_src, method);
}
inline int32_t UnsafeUtility_AlignOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m274F833CD001C63E56A22D8F42C76CE8C6CC39DF (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m274F833CD001C63E56A22D8F42C76CE8C6CC39DF_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BuddyAllocator_AlignForward_m91CB70C4C1EF7525861F09D940734D5F28CE948E (int32_t ___0_offset, int32_t ___1_alignment, const RuntimeMethod* method) ;
inline void ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477 (ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D* __this, int32_t ___0_item1, int32_t ___1_item2, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D*, int32_t, int32_t, const RuntimeMethod*))ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477_gshared)(__this, ___0_item1, ___1_item2, method);
}
inline int32_t UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_gshared_inline)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8127223B00E08567EC09EF1D992F89C74F248AB0 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8127223B00E08567EC09EF1D992F89C74F248AB0_gshared)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6C198B51ACD7B8EC62D5E0E75433C12BE9D65A58_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6C198B51ACD7B8EC62D5E0E75433C12BE9D65A58_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* BuddyAllocator_PtrAdd_m71AE1A734C306F6E5BE090A52FF71F5FD43D9651 (void* ___0_ptr, int32_t ___1_bytes, const RuntimeMethod* method) ;
inline NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C BuddyAllocator_GetNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF34160C9BD8BE094015670C76DC9D83F6BB30258 (BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB* __this, int32_t ___0_offset, int32_t ___1_length, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C (*) (BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB*, int32_t, int32_t, const RuntimeMethod*))BuddyAllocator_GetNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF34160C9BD8BE094015670C76DC9D83F6BB30258_gshared)(__this, ___0_offset, ___1_length, method);
}
inline NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6040A2644049EE10F18319F7950279CDC50BF2AC (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6040A2644049EE10F18319F7950279CDC50BF2AC_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B BuddyAllocator_GetNativeArray_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m4E8A7180E641B7FBF7D890D898C951A84B661CC1 (BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB* __this, int32_t ___0_offset, int32_t ___1_length, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B (*) (BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB*, int32_t, int32_t, const RuntimeMethod*))BuddyAllocator_GetNativeArray_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m4E8A7180E641B7FBF7D890D898C951A84B661CC1_gshared)(__this, ___0_offset, ___1_length, method);
}
inline NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 BuddyAllocator_GetNativeArray_TisIl2CppFullySharedGenericStruct_m22429A21546FE501A3CD98D54A3CAF8DECE230E2 (BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB* __this, int32_t ___0_offset, int32_t ___1_length, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB*, int32_t, int32_t, const RuntimeMethod*))BuddyAllocator_GetNativeArray_TisIl2CppFullySharedGenericStruct_m22429A21546FE501A3CD98D54A3CAF8DECE230E2_gshared)(__this, ___0_offset, ___1_length, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3 (uint8_t* ___0_dest, uint8_t* ___1_src, uint32_t ___2_len, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t RuntimeTypeHandle_get_Value_mDC366CF36C3E21505134EAEE72BD7629107D762A_inline (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeImports_Memmove_wbarrier_m8487273EE6161DB248FB65BB931279FF04F3CA79 (uint8_t* ___0_dest, uint8_t* ___1_src, uint32_t ___2_len, intptr_t ___3_type_handle, const RuntimeMethod* method) ;
inline int32_t UnsafeList_1_get_Length_mCC820C658B1BB4A17962AB76F15B049E3F24CD58_inline (UnsafeList_1_tA068C24D5E1D5CBC03E6D51E587FF66C4EC0C8E3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeList_1_tA068C24D5E1D5CBC03E6D51E587FF66C4EC0C8E3*, const RuntimeMethod*))UnsafeList_1_get_Length_mCC820C658B1BB4A17962AB76F15B049E3F24CD58_gshared_inline)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1_inline (int32_t ___0_value, const RuntimeMethod* method) ;
inline BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 UnsafeList_1_get_Item_mE5CDA9830B21C68F834C0DA5D9AAB8384DC0D6ED_inline (UnsafeList_1_tA068C24D5E1D5CBC03E6D51E587FF66C4EC0C8E3* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 (*) (UnsafeList_1_tA068C24D5E1D5CBC03E6D51E587FF66C4EC0C8E3*, int32_t, const RuntimeMethod*))UnsafeList_1_get_Item_mE5CDA9830B21C68F834C0DA5D9AAB8384DC0D6ED_gshared_inline)(__this, ___0_index, method);
}
inline int32_t UnsafeList_1_get_Length_mA49FF92B2235FC7B131269EB9560EBE9B6F9ECF6_inline (UnsafeList_1_t7517BB16A0F7933063E20E60999A377DE8B0B4F4* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeList_1_t7517BB16A0F7933063E20E60999A377DE8B0B4F4*, const RuntimeMethod*))UnsafeList_1_get_Length_mA49FF92B2235FC7B131269EB9560EBE9B6F9ECF6_gshared_inline)(__this, method);
}
inline OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 UnsafeList_1_get_Item_mDCBDF29EBE7CBAC8E3079695C5A732EAB19978B4_inline (UnsafeList_1_t7517BB16A0F7933063E20E60999A377DE8B0B4F4* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 (*) (UnsafeList_1_t7517BB16A0F7933063E20E60999A377DE8B0B4F4*, int32_t, const RuntimeMethod*))UnsafeList_1_get_Item_mDCBDF29EBE7CBAC8E3079695C5A732EAB19978B4_gshared_inline)(__this, ___0_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlobBuilderArray_1_t9ACBF11807FDDB4011EDB8CC24DED8347A67F9CE BlobBuilder_Allocate_TisIl2CppFullySharedGenericStruct_mBAE75393D2058A52F296136F65159AB119A8BA84_gshared (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* __this, BlobArray_1_t92D4034D117B24B89F7B548E16040441D797DD7A* ___0_ptr, int32_t ___1_length, int32_t ___2_alignment, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Add_m8F1C8B337385027E5C7335B0A69C3F58D9580C5A_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t* V_0 = NULL;
	BlobDataRef_tC50BF7E5090F5D4D0316711BE83B361517B922E4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 V_2;
	memset((&V_2), 0, sizeof(V_2));
	OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		BlobBuilderArray_1_t9ACBF11807FDDB4011EDB8CC24DED8347A67F9CE L_1;
		memset((&L_1), 0, sizeof(L_1));
		BlobBuilderArray_1__ctor_m948B069639DD4D38F6F1262D84114DCFE1C61213((&L_1), (void*)((uintptr_t)0), 0, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_1;
	}

IL_000d:
	{
		int32_t L_2 = ___2_alignment;
		bool L_3;
		L_3 = math_ispow2_m5DB60B3B6A893F0400B2BA64176473995E41ECB0_inline(L_2, NULL);
		if (L_3)
		{
			goto IL_0020;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF62C847A5A10CF47E92BE05483B8A45C31A2FAE7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___2_alignment;
		if ((((int32_t)L_5) <= ((int32_t)((int32_t)16))))
		{
			goto IL_0030;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF25B102A096200C516984CAE5CAA5A67739A1299)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0030:
	{
		BlobArray_1_t92D4034D117B24B89F7B548E16040441D797DD7A* L_7 = ___0_ptr;
		int32_t* L_8 = (int32_t*)(&L_7->___m_OffsetPtr);
		void* L_9;
		L_9 = il2cpp_codegen_unsafe_cast(L_8);
		V_0 = (int32_t*)L_9;
		int32_t L_10;
		L_10 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_11 = ___1_length;
		int32_t L_12 = ___2_alignment;
		BlobDataRef_tC50BF7E5090F5D4D0316711BE83B361517B922E4 L_13;
		L_13 = BlobBuilder_Allocate_m3F9703704DC02306630C7DBC6979FE8471DB17FA(__this, ((int32_t)il2cpp_codegen_multiply(L_10, L_11)), L_12, NULL);
		V_1 = L_13;
		il2cpp_codegen_initobj((&V_3), sizeof(OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982));
		int32_t* L_14 = V_0;
		(&V_3)->___offsetPtr = L_14;
		BlobDataRef_tC50BF7E5090F5D4D0316711BE83B361517B922E4 L_15 = V_1;
		(&V_3)->___target = L_15;
		int32_t L_16 = ___1_length;
		(&V_3)->___length = L_16;
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_17 = V_3;
		V_2 = L_17;
		NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* L_18 = (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*)(&__this->___m_patches);
		NativeList_1_Add_m8F1C8B337385027E5C7335B0A69C3F58D9580C5A(L_18, (&V_2), NativeList_1_Add_m8F1C8B337385027E5C7335B0A69C3F58D9580C5A_RuntimeMethod_var);
		BlobDataRef_tC50BF7E5090F5D4D0316711BE83B361517B922E4 L_19 = V_1;
		void* L_20;
		L_20 = BlobBuilder_AllocationToPointer_mCDAFE0E1B0906914A0F51F04EE02EBED6AB71569(__this, L_19, NULL);
		int32_t L_21 = ___1_length;
		BlobBuilderArray_1_t9ACBF11807FDDB4011EDB8CC24DED8347A67F9CE L_22;
		memset((&L_22), 0, sizeof(L_22));
		BlobBuilderArray_1__ctor_m948B069639DD4D38F6F1262D84114DCFE1C61213((&L_22), L_20, L_21, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_22;
	}
}
IL2CPP_EXTERN_C  BlobBuilderArray_1_t9ACBF11807FDDB4011EDB8CC24DED8347A67F9CE BlobBuilder_Allocate_TisIl2CppFullySharedGenericStruct_mBAE75393D2058A52F296136F65159AB119A8BA84_AdjustorThunk (RuntimeObject* __this, BlobArray_1_t92D4034D117B24B89F7B548E16040441D797DD7A* ___0_ptr, int32_t ___1_length, int32_t ___2_alignment, const RuntimeMethod* method)
{
	BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51*>(__this + _offset);
	BlobBuilderArray_1_t9ACBF11807FDDB4011EDB8CC24DED8347A67F9CE _returnValue;
	_returnValue = BlobBuilder_Allocate_TisIl2CppFullySharedGenericStruct_mBAE75393D2058A52F296136F65159AB119A8BA84(_thisAdjusted, ___0_ptr, ___1_length, ___2_alignment, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlobBuilderArray_1_t9ACBF11807FDDB4011EDB8CC24DED8347A67F9CE BlobBuilder_Construct_TisIl2CppFullySharedGenericStruct_m968C1740CDF94836A8277822A6FBB8971B58AF2D_gshared (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* __this, BlobArray_1_t92D4034D117B24B89F7B548E16040441D797DD7A* ___0_blobArray, __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ___1_data, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t8DDAD4A329A3F09FFDD80EB58F95433E617B8D7F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 7));
	const Il2CppFullySharedGenericStruct L_8 = alloca(SizeOf_T_t8DDAD4A329A3F09FFDD80EB58F95433E617B8D7F);
	BlobBuilderArray_1_t9ACBF11807FDDB4011EDB8CC24DED8347A67F9CE V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		BlobArray_1_t92D4034D117B24B89F7B548E16040441D797DD7A* L_0 = ___0_blobArray;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_1 = ___1_data;
		NullCheck(L_1);
		BlobBuilderArray_1_t9ACBF11807FDDB4011EDB8CC24DED8347A67F9CE L_2;
		L_2 = ((  BlobBuilderArray_1_t9ACBF11807FDDB4011EDB8CC24DED8347A67F9CE (*) (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51*, BlobArray_1_t92D4034D117B24B89F7B548E16040441D797DD7A*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(__this, L_0, ((int32_t)(((RuntimeArray*)L_1)->max_length)), il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_2;
		V_1 = 0;
		goto IL_0027;
	}

IL_000f:
	{
		int32_t L_3 = V_1;
		Il2CppFullySharedGenericStruct* L_4;
		L_4 = ((  Il2CppFullySharedGenericStruct* (*) (BlobBuilderArray_1_t9ACBF11807FDDB4011EDB8CC24DED8347A67F9CE*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&V_0), L_3, il2cpp_rgctx_method(method->rgctx_data, 4));
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_5 = ___1_data;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		il2cpp_codegen_memcpy(L_8, (L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), SizeOf_T_t8DDAD4A329A3F09FFDD80EB58F95433E617B8D7F);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)L_4, L_8, SizeOf_T_t8DDAD4A329A3F09FFDD80EB58F95433E617B8D7F);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 7), (void**)(Il2CppFullySharedGenericStruct*)L_4, (void*)L_8);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0027:
	{
		int32_t L_10 = V_1;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_11 = ___1_data;
		NullCheck(L_11);
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_000f;
		}
	}
	{
		BlobBuilderArray_1_t9ACBF11807FDDB4011EDB8CC24DED8347A67F9CE L_12 = V_0;
		return L_12;
	}
}
IL2CPP_EXTERN_C  BlobBuilderArray_1_t9ACBF11807FDDB4011EDB8CC24DED8347A67F9CE BlobBuilder_Construct_TisIl2CppFullySharedGenericStruct_m968C1740CDF94836A8277822A6FBB8971B58AF2D_AdjustorThunk (RuntimeObject* __this, BlobArray_1_t92D4034D117B24B89F7B548E16040441D797DD7A* ___0_blobArray, __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ___1_data, const RuntimeMethod* method)
{
	BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51*>(__this + _offset);
	BlobBuilderArray_1_t9ACBF11807FDDB4011EDB8CC24DED8347A67F9CE _returnValue;
	_returnValue = BlobBuilder_Construct_TisIl2CppFullySharedGenericStruct_m968C1740CDF94836A8277822A6FBB8971B58AF2D(_thisAdjusted, ___0_blobArray, ___1_data, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* BlobBuilder_ConstructRoot_TisIl2CppFullySharedGenericStruct_mFD0626363CBDF50FD61583CF2346CF5C85914C3B_gshared (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	BlobDataRef_tC50BF7E5090F5D4D0316711BE83B361517B922E4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		BlobDataRef_tC50BF7E5090F5D4D0316711BE83B361517B922E4 L_2;
		L_2 = BlobBuilder_Allocate_m3F9703704DC02306630C7DBC6979FE8471DB17FA(__this, L_0, L_1, NULL);
		V_0 = L_2;
		BlobDataRef_tC50BF7E5090F5D4D0316711BE83B361517B922E4 L_3 = V_0;
		void* L_4;
		L_4 = BlobBuilder_AllocationToPointer_mCDAFE0E1B0906914A0F51F04EE02EBED6AB71569(__this, L_3, NULL);
		Il2CppFullySharedGenericStruct* L_5;
		L_5 = ((  Il2CppFullySharedGenericStruct* (*) (void*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_5;
	}
}
IL2CPP_EXTERN_C  Il2CppFullySharedGenericStruct* BlobBuilder_ConstructRoot_TisIl2CppFullySharedGenericStruct_mFD0626363CBDF50FD61583CF2346CF5C85914C3B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51*>(__this + _offset);
	Il2CppFullySharedGenericStruct* _returnValue;
	_returnValue = BlobBuilder_ConstructRoot_TisIl2CppFullySharedGenericStruct_mFD0626363CBDF50FD61583CF2346CF5C85914C3B(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlobHeader_tCE133EA8852A67AF9C9F3E380D6288A120A34953* BlobBuilder_ConstructRoot_TisBlobHeader_tCE133EA8852A67AF9C9F3E380D6288A120A34953_m9431D81E8277B0837FBF28ACC805C34B4CA8D515_gshared (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	BlobDataRef_tC50BF7E5090F5D4D0316711BE83B361517B922E4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisBlobHeader_tCE133EA8852A67AF9C9F3E380D6288A120A34953_m71B7F28045E57BA4B230177FF855EE09830C108E_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_AlignOf_TisBlobHeader_tCE133EA8852A67AF9C9F3E380D6288A120A34953_mBB5706C105F86AA43F271DB42E6D2CF889B597D4(il2cpp_rgctx_method(method->rgctx_data, 1));
		BlobDataRef_tC50BF7E5090F5D4D0316711BE83B361517B922E4 L_2;
		L_2 = BlobBuilder_Allocate_m3F9703704DC02306630C7DBC6979FE8471DB17FA(__this, L_0, L_1, NULL);
		V_0 = L_2;
		BlobDataRef_tC50BF7E5090F5D4D0316711BE83B361517B922E4 L_3 = V_0;
		void* L_4;
		L_4 = BlobBuilder_AllocationToPointer_mCDAFE0E1B0906914A0F51F04EE02EBED6AB71569(__this, L_3, NULL);
		BlobHeader_tCE133EA8852A67AF9C9F3E380D6288A120A34953* L_5;
		L_5 = UnsafeUtility_AsRef_TisBlobHeader_tCE133EA8852A67AF9C9F3E380D6288A120A34953_m1CA564AC8F5282BE22B6BA0D9B0664FFBD37A51E_inline(L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_5;
	}
}
IL2CPP_EXTERN_C  BlobHeader_tCE133EA8852A67AF9C9F3E380D6288A120A34953* BlobBuilder_ConstructRoot_TisBlobHeader_tCE133EA8852A67AF9C9F3E380D6288A120A34953_m9431D81E8277B0837FBF28ACC805C34B4CA8D515_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51*>(__this + _offset);
	BlobHeader_tCE133EA8852A67AF9C9F3E380D6288A120A34953* _returnValue;
	_returnValue = BlobBuilder_ConstructRoot_TisBlobHeader_tCE133EA8852A67AF9C9F3E380D6288A120A34953_m9431D81E8277B0837FBF28ACC805C34B4CA8D515(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlobAssetReference_1_t083E0A88DA01E7BD8A190C0971D1344520389480 BlobBuilder_CreateBlobAssetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m310A50943D73D96A06D0517E42F19C124A2AD047_gshared (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	int32_t V_6 = 0;
	uint8_t* V_7 = NULL;
	uint8_t* V_8 = NULL;
	BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* V_9 = NULL;
	BlobAssetReference_1_t083E0A88DA01E7BD8A190C0971D1344520389480 V_10;
	memset((&V_10), 0, sizeof(V_10));
	int32_t V_11 = 0;
	SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC V_12;
	memset((&V_12), 0, sizeof(V_12));
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t* V_17 = NULL;
	OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 V_18;
	memset((&V_18), 0, sizeof(V_18));
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	uint8_t* V_21 = NULL;
	{
		int32_t L_0 = __this->___m_currentChunkIndex;
		if ((((int32_t)L_0) == ((int32_t)(-1))))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1 = __this->___m_currentChunkIndex;
		BlobBuilder_AlignChunk_mB9C0DB02FA87BC040668BFA05F4BAEE7C4599887(__this, L_1, NULL);
	}

IL_0015:
	{
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_2 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_3;
		L_3 = NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_inline(L_2, NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D((&V_0), ((int32_t)il2cpp_codegen_add(L_3, 1)), (int32_t)2, (int32_t)1, NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_RuntimeMethod_var);
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_4 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_5;
		L_5 = NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_inline(L_4, NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40((&V_1), L_5, (int32_t)2, (int32_t)1, NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40_RuntimeMethod_var);
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, ((&V_0))->___m_Buffer, 0, (0));
		V_11 = 0;
		goto IL_00af;
	}

IL_004d:
	{
		int32_t L_6 = V_11;
		int32_t L_7 = V_11;
		int32_t L_8;
		L_8 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_0))->___m_Buffer, L_7);
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_9 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_10 = V_11;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_11;
		L_11 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_9, L_10, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		int32_t L_12 = L_11.___size;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, ((&V_0))->___m_Buffer, ((int32_t)il2cpp_codegen_add(L_6, 1)), (((int32_t)il2cpp_codegen_add(L_8, L_12))));
		int32_t L_13 = V_11;
		il2cpp_codegen_initobj((&V_12), sizeof(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC));
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_14 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_15 = V_11;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_16;
		L_16 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_14, L_15, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		uint8_t* L_17 = L_16.___p;
		(&V_12)->___p = L_17;
		int32_t L_18 = V_11;
		(&V_12)->___index = L_18;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_19 = V_12;
		IL2CPP_NATIVEARRAY_SET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, L_13, (L_19));
		int32_t L_20 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_00af:
	{
		int32_t L_21 = V_11;
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_22 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_23;
		L_23 = NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_inline(L_22, NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		if ((((int32_t)L_21) < ((int32_t)L_23)))
		{
			goto IL_004d;
		}
	}
	{
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_24 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_25;
		L_25 = NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_inline(L_24, NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		int32_t L_26;
		L_26 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_0))->___m_Buffer, L_25);
		V_2 = L_26;
		NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7 L_27 = V_1;
		NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0(L_27, NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0_RuntimeMethod_var);
		NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* L_28 = (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*)(&__this->___m_patches);
		int32_t L_29;
		L_29 = NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_inline(L_28, NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_RuntimeMethod_var);
		NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40((&V_3), L_29, (int32_t)2, (int32_t)1, NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40_RuntimeMethod_var);
		V_13 = 0;
		goto IL_012b;
	}

IL_00f0:
	{
		int32_t L_30 = V_13;
		il2cpp_codegen_initobj((&V_12), sizeof(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC));
		NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* L_31 = (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*)(&__this->___m_patches);
		int32_t L_32 = V_13;
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_33;
		L_33 = NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_inline(L_31, L_32, NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_RuntimeMethod_var);
		int32_t* L_34 = L_33.___offsetPtr;
		(&V_12)->___p = (uint8_t*)L_34;
		int32_t L_35 = V_13;
		(&V_12)->___index = L_35;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_36 = V_12;
		IL2CPP_NATIVEARRAY_SET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_3))->___m_Buffer, L_30, (L_36));
		int32_t L_37 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_012b:
	{
		int32_t L_38 = V_13;
		NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* L_39 = (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*)(&__this->___m_patches);
		int32_t L_40;
		L_40 = NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_inline(L_39, NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_RuntimeMethod_var);
		if ((((int32_t)L_38) < ((int32_t)L_40)))
		{
			goto IL_00f0;
		}
	}
	{
		NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7 L_41 = V_3;
		NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0(L_41, NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0_RuntimeMethod_var);
		uint32_t L_42 = sizeof(BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639);
		int32_t L_43 = V_2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_44 = ___0_allocator;
		void* L_45;
		L_45 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(((int64_t)((int32_t)il2cpp_codegen_add((int32_t)L_42, L_43))), ((int32_t)16), L_44, NULL);
		V_4 = (uint8_t*)L_45;
		uint8_t* L_46 = V_4;
		uint32_t L_47 = sizeof(BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639);
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_46, (int32_t)L_47));
		V_14 = 0;
		goto IL_019f;
	}

IL_0163:
	{
		uint8_t* L_48 = V_5;
		int32_t L_49 = V_14;
		int32_t L_50;
		L_50 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_0))->___m_Buffer, L_49);
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_51 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_52 = V_14;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_53;
		L_53 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_51, L_52, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		uint8_t* L_54 = L_53.___p;
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_55 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_56 = V_14;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_57;
		L_57 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_55, L_56, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		int32_t L_58 = L_57.___size;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_48, L_50)), (void*)L_54, ((int64_t)L_58), NULL);
		int32_t L_59 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_59, 1));
	}

IL_019f:
	{
		int32_t L_60 = V_14;
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_61 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_62;
		L_62 = NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_inline(L_61, NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		if ((((int32_t)L_60) < ((int32_t)L_62)))
		{
			goto IL_0163;
		}
	}
	{
		V_6 = 0;
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_63 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_64;
		L_64 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, 0);
		int32_t L_65 = L_64.___index;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_66;
		L_66 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_63, L_65, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		uint8_t* L_67 = L_66.___p;
		V_7 = L_67;
		uint8_t* L_68 = V_7;
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_69 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_70;
		L_70 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, 0);
		int32_t L_71 = L_70.___index;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_72;
		L_72 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_69, L_71, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		int32_t L_73 = L_72.___size;
		V_8 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, L_73));
		V_15 = 0;
		goto IL_02e6;
	}

IL_01fa:
	{
		int32_t L_74 = V_15;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_75;
		L_75 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_3))->___m_Buffer, L_74);
		int32_t L_76 = L_75.___index;
		V_16 = L_76;
		int32_t L_77 = V_15;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_78;
		L_78 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_3))->___m_Buffer, L_77);
		uint8_t* L_79 = L_78.___p;
		V_17 = (int32_t*)L_79;
		goto IL_0265;
	}

IL_021c:
	{
		int32_t L_80 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_80, 1));
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_81 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_82 = V_6;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_83;
		L_83 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, L_82);
		int32_t L_84 = L_83.___index;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_85;
		L_85 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_81, L_84, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		uint8_t* L_86 = L_85.___p;
		V_7 = L_86;
		uint8_t* L_87 = V_7;
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_88 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_89 = V_6;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_90;
		L_90 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, L_89);
		int32_t L_91 = L_90.___index;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_92;
		L_92 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_88, L_91, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		int32_t L_93 = L_92.___size;
		V_8 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_87, L_93));
	}

IL_0265:
	{
		int32_t* L_94 = V_17;
		uint8_t* L_95 = V_8;
		if ((!(((uintptr_t)L_94) < ((uintptr_t)L_95))))
		{
			goto IL_021c;
		}
	}
	{
		NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* L_96 = (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*)(&__this->___m_patches);
		int32_t L_97 = V_16;
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_98;
		L_98 = NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_inline(L_96, L_97, NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_RuntimeMethod_var);
		V_18 = L_98;
		int32_t L_99 = V_6;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_100;
		L_100 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, L_99);
		int32_t L_101 = L_100.___index;
		int32_t L_102;
		L_102 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_0))->___m_Buffer, L_101);
		int32_t* L_103 = V_17;
		uint8_t* L_104 = V_7;
		V_19 = ((int32_t)il2cpp_codegen_add(L_102, ((int32_t)((int64_t)(intptr_t)((int32_t*)((intptr_t)((int32_t*)il2cpp_codegen_subtract((intptr_t)L_103, (intptr_t)L_104))/1))))));
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_105 = V_18;
		BlobDataRef_tC50BF7E5090F5D4D0316711BE83B361517B922E4 L_106 = L_105.___target;
		int32_t L_107 = L_106.___allocIndex;
		int32_t L_108;
		L_108 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_0))->___m_Buffer, L_107);
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_109 = V_18;
		BlobDataRef_tC50BF7E5090F5D4D0316711BE83B361517B922E4 L_110 = L_109.___target;
		int32_t L_111 = L_110.___offset;
		V_20 = ((int32_t)il2cpp_codegen_add(L_108, L_111));
		uint8_t* L_112 = V_5;
		int32_t L_113 = V_19;
		int32_t L_114 = V_20;
		int32_t L_115 = V_19;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_112, L_113))) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_114, L_115));
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_116 = V_18;
		int32_t L_117 = L_116.___length;
		if (!L_117)
		{
			goto IL_02e0;
		}
	}
	{
		uint8_t* L_118 = V_5;
		int32_t L_119 = V_19;
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_120 = V_18;
		int32_t L_121 = L_120.___length;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_118, L_119)), 4))) = (int32_t)L_121;
	}

IL_02e0:
	{
		int32_t L_122 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_122, 1));
	}

IL_02e6:
	{
		int32_t L_123 = V_15;
		NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* L_124 = (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*)(&__this->___m_patches);
		int32_t L_125;
		L_125 = NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_inline(L_124, NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_RuntimeMethod_var);
		if ((((int32_t)L_123) < ((int32_t)L_125)))
		{
			goto IL_01fa;
		}
	}
	{
		NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179((&V_3), NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179_RuntimeMethod_var);
		NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179((&V_1), NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179_RuntimeMethod_var);
		NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E((&V_0), NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_RuntimeMethod_var);
		uint8_t* L_126 = V_4;
		V_9 = (BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639*)L_126;
		BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* L_127 = V_9;
		il2cpp_codegen_initobj(L_127, sizeof(BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639));
		BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* L_128 = V_9;
		int32_t L_129 = V_2;
		NullCheck(L_128);
		L_128->___Length = L_129;
		BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* L_130 = V_9;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_131 = ___0_allocator;
		NullCheck(L_130);
		L_130->___Allocator = L_131;
		BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* L_132 = V_9;
		uint8_t* L_133 = V_4;
		uint32_t L_134 = sizeof(BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639);
		int32_t L_135 = V_2;
		uint32_t L_136;
		L_136 = math_hash_m8DC7F61C691A4C0D78CCFCF54A4943DAD9BE153F((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_133, (int32_t)L_134)), L_135, (uint32_t)0, NULL);
		NullCheck(L_132);
		L_132->___Hash = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_136));
		BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998* L_137 = (BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998*)(&(&V_10)->___m_data);
		L_137->___m_Align8Union = ((int64_t)0);
		BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* L_138 = V_9;
		BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998* L_139 = (BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998*)(&(&V_10)->___m_data);
		uint8_t* L_140 = V_4;
		uint32_t L_141 = sizeof(BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639);
		uint8_t* L_142 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_140, (int32_t)L_141));
		V_21 = L_142;
		L_139->___m_Ptr = L_142;
		uint8_t* L_143 = V_21;
		NullCheck(L_138);
		L_138->___ValidationPtr = (void*)L_143;
		BlobAssetReference_1_t083E0A88DA01E7BD8A190C0971D1344520389480 L_144 = V_10;
		return L_144;
	}
}
IL2CPP_EXTERN_C  BlobAssetReference_1_t083E0A88DA01E7BD8A190C0971D1344520389480 BlobBuilder_CreateBlobAssetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m310A50943D73D96A06D0517E42F19C124A2AD047_AdjustorThunk (RuntimeObject* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51*>(__this + _offset);
	BlobAssetReference_1_t083E0A88DA01E7BD8A190C0971D1344520389480 _returnValue;
	_returnValue = BlobBuilder_CreateBlobAssetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m310A50943D73D96A06D0517E42F19C124A2AD047(_thisAdjusted, ___0_allocator, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlobAssetReference_1_t9CC4CC80790FA45C2D0C95D03AFA5C4BC6B2A36E BlobBuilder_CreateBlobAssetReference_TisRemoteContentCatalogData_t32F84FD2CF243010159A9091363799DA1ED7C404_m8B0CB3D8D4098032633D87926E43F85678F06D74_gshared (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	int32_t V_6 = 0;
	uint8_t* V_7 = NULL;
	uint8_t* V_8 = NULL;
	BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* V_9 = NULL;
	BlobAssetReference_1_t9CC4CC80790FA45C2D0C95D03AFA5C4BC6B2A36E V_10;
	memset((&V_10), 0, sizeof(V_10));
	int32_t V_11 = 0;
	SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC V_12;
	memset((&V_12), 0, sizeof(V_12));
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t* V_17 = NULL;
	OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 V_18;
	memset((&V_18), 0, sizeof(V_18));
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	uint8_t* V_21 = NULL;
	{
		int32_t L_0 = __this->___m_currentChunkIndex;
		if ((((int32_t)L_0) == ((int32_t)(-1))))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1 = __this->___m_currentChunkIndex;
		BlobBuilder_AlignChunk_mB9C0DB02FA87BC040668BFA05F4BAEE7C4599887(__this, L_1, NULL);
	}

IL_0015:
	{
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_2 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_3;
		L_3 = NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_inline(L_2, NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D((&V_0), ((int32_t)il2cpp_codegen_add(L_3, 1)), (int32_t)2, (int32_t)1, NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_RuntimeMethod_var);
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_4 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_5;
		L_5 = NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_inline(L_4, NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40((&V_1), L_5, (int32_t)2, (int32_t)1, NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40_RuntimeMethod_var);
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, ((&V_0))->___m_Buffer, 0, (0));
		V_11 = 0;
		goto IL_00af;
	}

IL_004d:
	{
		int32_t L_6 = V_11;
		int32_t L_7 = V_11;
		int32_t L_8;
		L_8 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_0))->___m_Buffer, L_7);
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_9 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_10 = V_11;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_11;
		L_11 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_9, L_10, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		int32_t L_12 = L_11.___size;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, ((&V_0))->___m_Buffer, ((int32_t)il2cpp_codegen_add(L_6, 1)), (((int32_t)il2cpp_codegen_add(L_8, L_12))));
		int32_t L_13 = V_11;
		il2cpp_codegen_initobj((&V_12), sizeof(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC));
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_14 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_15 = V_11;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_16;
		L_16 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_14, L_15, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		uint8_t* L_17 = L_16.___p;
		(&V_12)->___p = L_17;
		int32_t L_18 = V_11;
		(&V_12)->___index = L_18;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_19 = V_12;
		IL2CPP_NATIVEARRAY_SET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, L_13, (L_19));
		int32_t L_20 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_00af:
	{
		int32_t L_21 = V_11;
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_22 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_23;
		L_23 = NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_inline(L_22, NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		if ((((int32_t)L_21) < ((int32_t)L_23)))
		{
			goto IL_004d;
		}
	}
	{
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_24 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_25;
		L_25 = NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_inline(L_24, NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		int32_t L_26;
		L_26 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_0))->___m_Buffer, L_25);
		V_2 = L_26;
		NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7 L_27 = V_1;
		NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0(L_27, NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0_RuntimeMethod_var);
		NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* L_28 = (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*)(&__this->___m_patches);
		int32_t L_29;
		L_29 = NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_inline(L_28, NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_RuntimeMethod_var);
		NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40((&V_3), L_29, (int32_t)2, (int32_t)1, NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40_RuntimeMethod_var);
		V_13 = 0;
		goto IL_012b;
	}

IL_00f0:
	{
		int32_t L_30 = V_13;
		il2cpp_codegen_initobj((&V_12), sizeof(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC));
		NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* L_31 = (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*)(&__this->___m_patches);
		int32_t L_32 = V_13;
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_33;
		L_33 = NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_inline(L_31, L_32, NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_RuntimeMethod_var);
		int32_t* L_34 = L_33.___offsetPtr;
		(&V_12)->___p = (uint8_t*)L_34;
		int32_t L_35 = V_13;
		(&V_12)->___index = L_35;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_36 = V_12;
		IL2CPP_NATIVEARRAY_SET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_3))->___m_Buffer, L_30, (L_36));
		int32_t L_37 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_012b:
	{
		int32_t L_38 = V_13;
		NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* L_39 = (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*)(&__this->___m_patches);
		int32_t L_40;
		L_40 = NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_inline(L_39, NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_RuntimeMethod_var);
		if ((((int32_t)L_38) < ((int32_t)L_40)))
		{
			goto IL_00f0;
		}
	}
	{
		NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7 L_41 = V_3;
		NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0(L_41, NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0_RuntimeMethod_var);
		uint32_t L_42 = sizeof(BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639);
		int32_t L_43 = V_2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_44 = ___0_allocator;
		void* L_45;
		L_45 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(((int64_t)((int32_t)il2cpp_codegen_add((int32_t)L_42, L_43))), ((int32_t)16), L_44, NULL);
		V_4 = (uint8_t*)L_45;
		uint8_t* L_46 = V_4;
		uint32_t L_47 = sizeof(BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639);
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_46, (int32_t)L_47));
		V_14 = 0;
		goto IL_019f;
	}

IL_0163:
	{
		uint8_t* L_48 = V_5;
		int32_t L_49 = V_14;
		int32_t L_50;
		L_50 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_0))->___m_Buffer, L_49);
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_51 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_52 = V_14;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_53;
		L_53 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_51, L_52, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		uint8_t* L_54 = L_53.___p;
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_55 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_56 = V_14;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_57;
		L_57 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_55, L_56, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		int32_t L_58 = L_57.___size;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_48, L_50)), (void*)L_54, ((int64_t)L_58), NULL);
		int32_t L_59 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_59, 1));
	}

IL_019f:
	{
		int32_t L_60 = V_14;
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_61 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_62;
		L_62 = NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_inline(L_61, NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		if ((((int32_t)L_60) < ((int32_t)L_62)))
		{
			goto IL_0163;
		}
	}
	{
		V_6 = 0;
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_63 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_64;
		L_64 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, 0);
		int32_t L_65 = L_64.___index;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_66;
		L_66 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_63, L_65, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		uint8_t* L_67 = L_66.___p;
		V_7 = L_67;
		uint8_t* L_68 = V_7;
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_69 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_70;
		L_70 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, 0);
		int32_t L_71 = L_70.___index;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_72;
		L_72 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_69, L_71, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		int32_t L_73 = L_72.___size;
		V_8 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, L_73));
		V_15 = 0;
		goto IL_02e6;
	}

IL_01fa:
	{
		int32_t L_74 = V_15;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_75;
		L_75 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_3))->___m_Buffer, L_74);
		int32_t L_76 = L_75.___index;
		V_16 = L_76;
		int32_t L_77 = V_15;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_78;
		L_78 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_3))->___m_Buffer, L_77);
		uint8_t* L_79 = L_78.___p;
		V_17 = (int32_t*)L_79;
		goto IL_0265;
	}

IL_021c:
	{
		int32_t L_80 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_80, 1));
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_81 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_82 = V_6;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_83;
		L_83 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, L_82);
		int32_t L_84 = L_83.___index;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_85;
		L_85 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_81, L_84, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		uint8_t* L_86 = L_85.___p;
		V_7 = L_86;
		uint8_t* L_87 = V_7;
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_88 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_89 = V_6;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_90;
		L_90 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, L_89);
		int32_t L_91 = L_90.___index;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_92;
		L_92 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_88, L_91, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		int32_t L_93 = L_92.___size;
		V_8 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_87, L_93));
	}

IL_0265:
	{
		int32_t* L_94 = V_17;
		uint8_t* L_95 = V_8;
		if ((!(((uintptr_t)L_94) < ((uintptr_t)L_95))))
		{
			goto IL_021c;
		}
	}
	{
		NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* L_96 = (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*)(&__this->___m_patches);
		int32_t L_97 = V_16;
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_98;
		L_98 = NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_inline(L_96, L_97, NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_RuntimeMethod_var);
		V_18 = L_98;
		int32_t L_99 = V_6;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_100;
		L_100 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, L_99);
		int32_t L_101 = L_100.___index;
		int32_t L_102;
		L_102 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_0))->___m_Buffer, L_101);
		int32_t* L_103 = V_17;
		uint8_t* L_104 = V_7;
		V_19 = ((int32_t)il2cpp_codegen_add(L_102, ((int32_t)((int64_t)(intptr_t)((int32_t*)((intptr_t)((int32_t*)il2cpp_codegen_subtract((intptr_t)L_103, (intptr_t)L_104))/1))))));
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_105 = V_18;
		BlobDataRef_tC50BF7E5090F5D4D0316711BE83B361517B922E4 L_106 = L_105.___target;
		int32_t L_107 = L_106.___allocIndex;
		int32_t L_108;
		L_108 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_0))->___m_Buffer, L_107);
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_109 = V_18;
		BlobDataRef_tC50BF7E5090F5D4D0316711BE83B361517B922E4 L_110 = L_109.___target;
		int32_t L_111 = L_110.___offset;
		V_20 = ((int32_t)il2cpp_codegen_add(L_108, L_111));
		uint8_t* L_112 = V_5;
		int32_t L_113 = V_19;
		int32_t L_114 = V_20;
		int32_t L_115 = V_19;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_112, L_113))) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_114, L_115));
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_116 = V_18;
		int32_t L_117 = L_116.___length;
		if (!L_117)
		{
			goto IL_02e0;
		}
	}
	{
		uint8_t* L_118 = V_5;
		int32_t L_119 = V_19;
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_120 = V_18;
		int32_t L_121 = L_120.___length;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_118, L_119)), 4))) = (int32_t)L_121;
	}

IL_02e0:
	{
		int32_t L_122 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_122, 1));
	}

IL_02e6:
	{
		int32_t L_123 = V_15;
		NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* L_124 = (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*)(&__this->___m_patches);
		int32_t L_125;
		L_125 = NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_inline(L_124, NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_RuntimeMethod_var);
		if ((((int32_t)L_123) < ((int32_t)L_125)))
		{
			goto IL_01fa;
		}
	}
	{
		NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179((&V_3), NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179_RuntimeMethod_var);
		NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179((&V_1), NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179_RuntimeMethod_var);
		NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E((&V_0), NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_RuntimeMethod_var);
		uint8_t* L_126 = V_4;
		V_9 = (BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639*)L_126;
		BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* L_127 = V_9;
		il2cpp_codegen_initobj(L_127, sizeof(BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639));
		BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* L_128 = V_9;
		int32_t L_129 = V_2;
		NullCheck(L_128);
		L_128->___Length = L_129;
		BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* L_130 = V_9;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_131 = ___0_allocator;
		NullCheck(L_130);
		L_130->___Allocator = L_131;
		BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* L_132 = V_9;
		uint8_t* L_133 = V_4;
		uint32_t L_134 = sizeof(BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639);
		int32_t L_135 = V_2;
		uint32_t L_136;
		L_136 = math_hash_m8DC7F61C691A4C0D78CCFCF54A4943DAD9BE153F((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_133, (int32_t)L_134)), L_135, (uint32_t)0, NULL);
		NullCheck(L_132);
		L_132->___Hash = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_136));
		BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998* L_137 = (BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998*)(&(&V_10)->___m_data);
		L_137->___m_Align8Union = ((int64_t)0);
		BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* L_138 = V_9;
		BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998* L_139 = (BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998*)(&(&V_10)->___m_data);
		uint8_t* L_140 = V_4;
		uint32_t L_141 = sizeof(BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639);
		uint8_t* L_142 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_140, (int32_t)L_141));
		V_21 = L_142;
		L_139->___m_Ptr = L_142;
		uint8_t* L_143 = V_21;
		NullCheck(L_138);
		L_138->___ValidationPtr = (void*)L_143;
		BlobAssetReference_1_t9CC4CC80790FA45C2D0C95D03AFA5C4BC6B2A36E L_144 = V_10;
		return L_144;
	}
}
IL2CPP_EXTERN_C  BlobAssetReference_1_t9CC4CC80790FA45C2D0C95D03AFA5C4BC6B2A36E BlobBuilder_CreateBlobAssetReference_TisRemoteContentCatalogData_t32F84FD2CF243010159A9091363799DA1ED7C404_m8B0CB3D8D4098032633D87926E43F85678F06D74_AdjustorThunk (RuntimeObject* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51*>(__this + _offset);
	BlobAssetReference_1_t9CC4CC80790FA45C2D0C95D03AFA5C4BC6B2A36E _returnValue;
	_returnValue = BlobBuilder_CreateBlobAssetReference_TisRemoteContentCatalogData_t32F84FD2CF243010159A9091363799DA1ED7C404_m8B0CB3D8D4098032633D87926E43F85678F06D74(_thisAdjusted, ___0_allocator, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlobAssetReference_1_tE272FE135F49F621C3F0A24402C578079E56040B BlobBuilder_CreateBlobAssetReference_TisResourceCatalogData_t553E280FAF0BE667673BC323E80FAFBE374C731D_m774EAF0DC51DB8F0151BF7D0A9084CEB691DE625_gshared (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	int32_t V_6 = 0;
	uint8_t* V_7 = NULL;
	uint8_t* V_8 = NULL;
	BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* V_9 = NULL;
	BlobAssetReference_1_tE272FE135F49F621C3F0A24402C578079E56040B V_10;
	memset((&V_10), 0, sizeof(V_10));
	int32_t V_11 = 0;
	SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC V_12;
	memset((&V_12), 0, sizeof(V_12));
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t* V_17 = NULL;
	OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 V_18;
	memset((&V_18), 0, sizeof(V_18));
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	uint8_t* V_21 = NULL;
	{
		int32_t L_0 = __this->___m_currentChunkIndex;
		if ((((int32_t)L_0) == ((int32_t)(-1))))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1 = __this->___m_currentChunkIndex;
		BlobBuilder_AlignChunk_mB9C0DB02FA87BC040668BFA05F4BAEE7C4599887(__this, L_1, NULL);
	}

IL_0015:
	{
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_2 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_3;
		L_3 = NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_inline(L_2, NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D((&V_0), ((int32_t)il2cpp_codegen_add(L_3, 1)), (int32_t)2, (int32_t)1, NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_RuntimeMethod_var);
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_4 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_5;
		L_5 = NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_inline(L_4, NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40((&V_1), L_5, (int32_t)2, (int32_t)1, NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40_RuntimeMethod_var);
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, ((&V_0))->___m_Buffer, 0, (0));
		V_11 = 0;
		goto IL_00af;
	}

IL_004d:
	{
		int32_t L_6 = V_11;
		int32_t L_7 = V_11;
		int32_t L_8;
		L_8 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_0))->___m_Buffer, L_7);
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_9 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_10 = V_11;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_11;
		L_11 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_9, L_10, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		int32_t L_12 = L_11.___size;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, ((&V_0))->___m_Buffer, ((int32_t)il2cpp_codegen_add(L_6, 1)), (((int32_t)il2cpp_codegen_add(L_8, L_12))));
		int32_t L_13 = V_11;
		il2cpp_codegen_initobj((&V_12), sizeof(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC));
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_14 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_15 = V_11;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_16;
		L_16 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_14, L_15, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		uint8_t* L_17 = L_16.___p;
		(&V_12)->___p = L_17;
		int32_t L_18 = V_11;
		(&V_12)->___index = L_18;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_19 = V_12;
		IL2CPP_NATIVEARRAY_SET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, L_13, (L_19));
		int32_t L_20 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_00af:
	{
		int32_t L_21 = V_11;
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_22 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_23;
		L_23 = NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_inline(L_22, NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		if ((((int32_t)L_21) < ((int32_t)L_23)))
		{
			goto IL_004d;
		}
	}
	{
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_24 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_25;
		L_25 = NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_inline(L_24, NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		int32_t L_26;
		L_26 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_0))->___m_Buffer, L_25);
		V_2 = L_26;
		NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7 L_27 = V_1;
		NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0(L_27, NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0_RuntimeMethod_var);
		NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* L_28 = (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*)(&__this->___m_patches);
		int32_t L_29;
		L_29 = NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_inline(L_28, NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_RuntimeMethod_var);
		NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40((&V_3), L_29, (int32_t)2, (int32_t)1, NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40_RuntimeMethod_var);
		V_13 = 0;
		goto IL_012b;
	}

IL_00f0:
	{
		int32_t L_30 = V_13;
		il2cpp_codegen_initobj((&V_12), sizeof(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC));
		NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* L_31 = (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*)(&__this->___m_patches);
		int32_t L_32 = V_13;
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_33;
		L_33 = NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_inline(L_31, L_32, NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_RuntimeMethod_var);
		int32_t* L_34 = L_33.___offsetPtr;
		(&V_12)->___p = (uint8_t*)L_34;
		int32_t L_35 = V_13;
		(&V_12)->___index = L_35;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_36 = V_12;
		IL2CPP_NATIVEARRAY_SET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_3))->___m_Buffer, L_30, (L_36));
		int32_t L_37 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_012b:
	{
		int32_t L_38 = V_13;
		NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* L_39 = (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*)(&__this->___m_patches);
		int32_t L_40;
		L_40 = NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_inline(L_39, NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_RuntimeMethod_var);
		if ((((int32_t)L_38) < ((int32_t)L_40)))
		{
			goto IL_00f0;
		}
	}
	{
		NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7 L_41 = V_3;
		NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0(L_41, NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0_RuntimeMethod_var);
		uint32_t L_42 = sizeof(BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639);
		int32_t L_43 = V_2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_44 = ___0_allocator;
		void* L_45;
		L_45 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(((int64_t)((int32_t)il2cpp_codegen_add((int32_t)L_42, L_43))), ((int32_t)16), L_44, NULL);
		V_4 = (uint8_t*)L_45;
		uint8_t* L_46 = V_4;
		uint32_t L_47 = sizeof(BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639);
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_46, (int32_t)L_47));
		V_14 = 0;
		goto IL_019f;
	}

IL_0163:
	{
		uint8_t* L_48 = V_5;
		int32_t L_49 = V_14;
		int32_t L_50;
		L_50 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_0))->___m_Buffer, L_49);
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_51 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_52 = V_14;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_53;
		L_53 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_51, L_52, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		uint8_t* L_54 = L_53.___p;
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_55 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_56 = V_14;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_57;
		L_57 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_55, L_56, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		int32_t L_58 = L_57.___size;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_48, L_50)), (void*)L_54, ((int64_t)L_58), NULL);
		int32_t L_59 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_59, 1));
	}

IL_019f:
	{
		int32_t L_60 = V_14;
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_61 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_62;
		L_62 = NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_inline(L_61, NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		if ((((int32_t)L_60) < ((int32_t)L_62)))
		{
			goto IL_0163;
		}
	}
	{
		V_6 = 0;
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_63 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_64;
		L_64 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, 0);
		int32_t L_65 = L_64.___index;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_66;
		L_66 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_63, L_65, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		uint8_t* L_67 = L_66.___p;
		V_7 = L_67;
		uint8_t* L_68 = V_7;
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_69 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_70;
		L_70 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, 0);
		int32_t L_71 = L_70.___index;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_72;
		L_72 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_69, L_71, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		int32_t L_73 = L_72.___size;
		V_8 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, L_73));
		V_15 = 0;
		goto IL_02e6;
	}

IL_01fa:
	{
		int32_t L_74 = V_15;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_75;
		L_75 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_3))->___m_Buffer, L_74);
		int32_t L_76 = L_75.___index;
		V_16 = L_76;
		int32_t L_77 = V_15;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_78;
		L_78 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_3))->___m_Buffer, L_77);
		uint8_t* L_79 = L_78.___p;
		V_17 = (int32_t*)L_79;
		goto IL_0265;
	}

IL_021c:
	{
		int32_t L_80 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_80, 1));
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_81 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_82 = V_6;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_83;
		L_83 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, L_82);
		int32_t L_84 = L_83.___index;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_85;
		L_85 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_81, L_84, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		uint8_t* L_86 = L_85.___p;
		V_7 = L_86;
		uint8_t* L_87 = V_7;
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_88 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_89 = V_6;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_90;
		L_90 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, L_89);
		int32_t L_91 = L_90.___index;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_92;
		L_92 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_88, L_91, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		int32_t L_93 = L_92.___size;
		V_8 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_87, L_93));
	}

IL_0265:
	{
		int32_t* L_94 = V_17;
		uint8_t* L_95 = V_8;
		if ((!(((uintptr_t)L_94) < ((uintptr_t)L_95))))
		{
			goto IL_021c;
		}
	}
	{
		NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* L_96 = (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*)(&__this->___m_patches);
		int32_t L_97 = V_16;
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_98;
		L_98 = NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_inline(L_96, L_97, NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_RuntimeMethod_var);
		V_18 = L_98;
		int32_t L_99 = V_6;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_100;
		L_100 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, L_99);
		int32_t L_101 = L_100.___index;
		int32_t L_102;
		L_102 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_0))->___m_Buffer, L_101);
		int32_t* L_103 = V_17;
		uint8_t* L_104 = V_7;
		V_19 = ((int32_t)il2cpp_codegen_add(L_102, ((int32_t)((int64_t)(intptr_t)((int32_t*)((intptr_t)((int32_t*)il2cpp_codegen_subtract((intptr_t)L_103, (intptr_t)L_104))/1))))));
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_105 = V_18;
		BlobDataRef_tC50BF7E5090F5D4D0316711BE83B361517B922E4 L_106 = L_105.___target;
		int32_t L_107 = L_106.___allocIndex;
		int32_t L_108;
		L_108 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_0))->___m_Buffer, L_107);
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_109 = V_18;
		BlobDataRef_tC50BF7E5090F5D4D0316711BE83B361517B922E4 L_110 = L_109.___target;
		int32_t L_111 = L_110.___offset;
		V_20 = ((int32_t)il2cpp_codegen_add(L_108, L_111));
		uint8_t* L_112 = V_5;
		int32_t L_113 = V_19;
		int32_t L_114 = V_20;
		int32_t L_115 = V_19;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_112, L_113))) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_114, L_115));
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_116 = V_18;
		int32_t L_117 = L_116.___length;
		if (!L_117)
		{
			goto IL_02e0;
		}
	}
	{
		uint8_t* L_118 = V_5;
		int32_t L_119 = V_19;
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_120 = V_18;
		int32_t L_121 = L_120.___length;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_118, L_119)), 4))) = (int32_t)L_121;
	}

IL_02e0:
	{
		int32_t L_122 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_122, 1));
	}

IL_02e6:
	{
		int32_t L_123 = V_15;
		NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* L_124 = (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*)(&__this->___m_patches);
		int32_t L_125;
		L_125 = NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_inline(L_124, NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_RuntimeMethod_var);
		if ((((int32_t)L_123) < ((int32_t)L_125)))
		{
			goto IL_01fa;
		}
	}
	{
		NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179((&V_3), NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179_RuntimeMethod_var);
		NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179((&V_1), NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179_RuntimeMethod_var);
		NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E((&V_0), NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_RuntimeMethod_var);
		uint8_t* L_126 = V_4;
		V_9 = (BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639*)L_126;
		BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* L_127 = V_9;
		il2cpp_codegen_initobj(L_127, sizeof(BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639));
		BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* L_128 = V_9;
		int32_t L_129 = V_2;
		NullCheck(L_128);
		L_128->___Length = L_129;
		BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* L_130 = V_9;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_131 = ___0_allocator;
		NullCheck(L_130);
		L_130->___Allocator = L_131;
		BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* L_132 = V_9;
		uint8_t* L_133 = V_4;
		uint32_t L_134 = sizeof(BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639);
		int32_t L_135 = V_2;
		uint32_t L_136;
		L_136 = math_hash_m8DC7F61C691A4C0D78CCFCF54A4943DAD9BE153F((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_133, (int32_t)L_134)), L_135, (uint32_t)0, NULL);
		NullCheck(L_132);
		L_132->___Hash = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_136));
		BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998* L_137 = (BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998*)(&(&V_10)->___m_data);
		L_137->___m_Align8Union = ((int64_t)0);
		BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* L_138 = V_9;
		BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998* L_139 = (BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998*)(&(&V_10)->___m_data);
		uint8_t* L_140 = V_4;
		uint32_t L_141 = sizeof(BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639);
		uint8_t* L_142 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_140, (int32_t)L_141));
		V_21 = L_142;
		L_139->___m_Ptr = L_142;
		uint8_t* L_143 = V_21;
		NullCheck(L_138);
		L_138->___ValidationPtr = (void*)L_143;
		BlobAssetReference_1_tE272FE135F49F621C3F0A24402C578079E56040B L_144 = V_10;
		return L_144;
	}
}
IL2CPP_EXTERN_C  BlobAssetReference_1_tE272FE135F49F621C3F0A24402C578079E56040B BlobBuilder_CreateBlobAssetReference_TisResourceCatalogData_t553E280FAF0BE667673BC323E80FAFBE374C731D_m774EAF0DC51DB8F0151BF7D0A9084CEB691DE625_AdjustorThunk (RuntimeObject* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51*>(__this + _offset);
	BlobAssetReference_1_tE272FE135F49F621C3F0A24402C578079E56040B _returnValue;
	_returnValue = BlobBuilder_CreateBlobAssetReference_TisResourceCatalogData_t553E280FAF0BE667673BC323E80FAFBE374C731D_m774EAF0DC51DB8F0151BF7D0A9084CEB691DE625(_thisAdjusted, ___0_allocator, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlobAssetReference_1_tDD332C4A1E41EA2CA76C1632A675CEB17AA84B13 BlobBuilder_CreateBlobAssetReference_TisRuntimeContentCatalogData_tB54FE67BBB6C431D3ACF06E9C4269EBCBA590635_m9FAA7DB2F697954DF999939A962C6FF7A9264B31_gshared (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	int32_t V_6 = 0;
	uint8_t* V_7 = NULL;
	uint8_t* V_8 = NULL;
	BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* V_9 = NULL;
	BlobAssetReference_1_tDD332C4A1E41EA2CA76C1632A675CEB17AA84B13 V_10;
	memset((&V_10), 0, sizeof(V_10));
	int32_t V_11 = 0;
	SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC V_12;
	memset((&V_12), 0, sizeof(V_12));
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t* V_17 = NULL;
	OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 V_18;
	memset((&V_18), 0, sizeof(V_18));
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	uint8_t* V_21 = NULL;
	{
		int32_t L_0 = __this->___m_currentChunkIndex;
		if ((((int32_t)L_0) == ((int32_t)(-1))))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1 = __this->___m_currentChunkIndex;
		BlobBuilder_AlignChunk_mB9C0DB02FA87BC040668BFA05F4BAEE7C4599887(__this, L_1, NULL);
	}

IL_0015:
	{
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_2 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_3;
		L_3 = NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_inline(L_2, NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D((&V_0), ((int32_t)il2cpp_codegen_add(L_3, 1)), (int32_t)2, (int32_t)1, NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_RuntimeMethod_var);
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_4 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_5;
		L_5 = NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_inline(L_4, NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40((&V_1), L_5, (int32_t)2, (int32_t)1, NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40_RuntimeMethod_var);
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, ((&V_0))->___m_Buffer, 0, (0));
		V_11 = 0;
		goto IL_00af;
	}

IL_004d:
	{
		int32_t L_6 = V_11;
		int32_t L_7 = V_11;
		int32_t L_8;
		L_8 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_0))->___m_Buffer, L_7);
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_9 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_10 = V_11;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_11;
		L_11 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_9, L_10, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		int32_t L_12 = L_11.___size;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, ((&V_0))->___m_Buffer, ((int32_t)il2cpp_codegen_add(L_6, 1)), (((int32_t)il2cpp_codegen_add(L_8, L_12))));
		int32_t L_13 = V_11;
		il2cpp_codegen_initobj((&V_12), sizeof(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC));
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_14 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_15 = V_11;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_16;
		L_16 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_14, L_15, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		uint8_t* L_17 = L_16.___p;
		(&V_12)->___p = L_17;
		int32_t L_18 = V_11;
		(&V_12)->___index = L_18;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_19 = V_12;
		IL2CPP_NATIVEARRAY_SET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, L_13, (L_19));
		int32_t L_20 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_00af:
	{
		int32_t L_21 = V_11;
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_22 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_23;
		L_23 = NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_inline(L_22, NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		if ((((int32_t)L_21) < ((int32_t)L_23)))
		{
			goto IL_004d;
		}
	}
	{
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_24 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_25;
		L_25 = NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_inline(L_24, NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		int32_t L_26;
		L_26 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_0))->___m_Buffer, L_25);
		V_2 = L_26;
		NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7 L_27 = V_1;
		NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0(L_27, NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0_RuntimeMethod_var);
		NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* L_28 = (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*)(&__this->___m_patches);
		int32_t L_29;
		L_29 = NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_inline(L_28, NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_RuntimeMethod_var);
		NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40((&V_3), L_29, (int32_t)2, (int32_t)1, NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40_RuntimeMethod_var);
		V_13 = 0;
		goto IL_012b;
	}

IL_00f0:
	{
		int32_t L_30 = V_13;
		il2cpp_codegen_initobj((&V_12), sizeof(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC));
		NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* L_31 = (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*)(&__this->___m_patches);
		int32_t L_32 = V_13;
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_33;
		L_33 = NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_inline(L_31, L_32, NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_RuntimeMethod_var);
		int32_t* L_34 = L_33.___offsetPtr;
		(&V_12)->___p = (uint8_t*)L_34;
		int32_t L_35 = V_13;
		(&V_12)->___index = L_35;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_36 = V_12;
		IL2CPP_NATIVEARRAY_SET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_3))->___m_Buffer, L_30, (L_36));
		int32_t L_37 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_012b:
	{
		int32_t L_38 = V_13;
		NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* L_39 = (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*)(&__this->___m_patches);
		int32_t L_40;
		L_40 = NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_inline(L_39, NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_RuntimeMethod_var);
		if ((((int32_t)L_38) < ((int32_t)L_40)))
		{
			goto IL_00f0;
		}
	}
	{
		NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7 L_41 = V_3;
		NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0(L_41, NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0_RuntimeMethod_var);
		uint32_t L_42 = sizeof(BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639);
		int32_t L_43 = V_2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_44 = ___0_allocator;
		void* L_45;
		L_45 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(((int64_t)((int32_t)il2cpp_codegen_add((int32_t)L_42, L_43))), ((int32_t)16), L_44, NULL);
		V_4 = (uint8_t*)L_45;
		uint8_t* L_46 = V_4;
		uint32_t L_47 = sizeof(BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639);
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_46, (int32_t)L_47));
		V_14 = 0;
		goto IL_019f;
	}

IL_0163:
	{
		uint8_t* L_48 = V_5;
		int32_t L_49 = V_14;
		int32_t L_50;
		L_50 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_0))->___m_Buffer, L_49);
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_51 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_52 = V_14;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_53;
		L_53 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_51, L_52, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		uint8_t* L_54 = L_53.___p;
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_55 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_56 = V_14;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_57;
		L_57 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_55, L_56, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		int32_t L_58 = L_57.___size;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_48, L_50)), (void*)L_54, ((int64_t)L_58), NULL);
		int32_t L_59 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_59, 1));
	}

IL_019f:
	{
		int32_t L_60 = V_14;
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_61 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_62;
		L_62 = NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_inline(L_61, NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		if ((((int32_t)L_60) < ((int32_t)L_62)))
		{
			goto IL_0163;
		}
	}
	{
		V_6 = 0;
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_63 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_64;
		L_64 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, 0);
		int32_t L_65 = L_64.___index;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_66;
		L_66 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_63, L_65, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		uint8_t* L_67 = L_66.___p;
		V_7 = L_67;
		uint8_t* L_68 = V_7;
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_69 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_70;
		L_70 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, 0);
		int32_t L_71 = L_70.___index;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_72;
		L_72 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_69, L_71, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		int32_t L_73 = L_72.___size;
		V_8 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, L_73));
		V_15 = 0;
		goto IL_02e6;
	}

IL_01fa:
	{
		int32_t L_74 = V_15;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_75;
		L_75 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_3))->___m_Buffer, L_74);
		int32_t L_76 = L_75.___index;
		V_16 = L_76;
		int32_t L_77 = V_15;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_78;
		L_78 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_3))->___m_Buffer, L_77);
		uint8_t* L_79 = L_78.___p;
		V_17 = (int32_t*)L_79;
		goto IL_0265;
	}

IL_021c:
	{
		int32_t L_80 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_80, 1));
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_81 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_82 = V_6;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_83;
		L_83 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, L_82);
		int32_t L_84 = L_83.___index;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_85;
		L_85 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_81, L_84, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		uint8_t* L_86 = L_85.___p;
		V_7 = L_86;
		uint8_t* L_87 = V_7;
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_88 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_89 = V_6;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_90;
		L_90 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, L_89);
		int32_t L_91 = L_90.___index;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_92;
		L_92 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_88, L_91, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		int32_t L_93 = L_92.___size;
		V_8 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_87, L_93));
	}

IL_0265:
	{
		int32_t* L_94 = V_17;
		uint8_t* L_95 = V_8;
		if ((!(((uintptr_t)L_94) < ((uintptr_t)L_95))))
		{
			goto IL_021c;
		}
	}
	{
		NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* L_96 = (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*)(&__this->___m_patches);
		int32_t L_97 = V_16;
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_98;
		L_98 = NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_inline(L_96, L_97, NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_RuntimeMethod_var);
		V_18 = L_98;
		int32_t L_99 = V_6;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_100;
		L_100 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, L_99);
		int32_t L_101 = L_100.___index;
		int32_t L_102;
		L_102 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_0))->___m_Buffer, L_101);
		int32_t* L_103 = V_17;
		uint8_t* L_104 = V_7;
		V_19 = ((int32_t)il2cpp_codegen_add(L_102, ((int32_t)((int64_t)(intptr_t)((int32_t*)((intptr_t)((int32_t*)il2cpp_codegen_subtract((intptr_t)L_103, (intptr_t)L_104))/1))))));
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_105 = V_18;
		BlobDataRef_tC50BF7E5090F5D4D0316711BE83B361517B922E4 L_106 = L_105.___target;
		int32_t L_107 = L_106.___allocIndex;
		int32_t L_108;
		L_108 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_0))->___m_Buffer, L_107);
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_109 = V_18;
		BlobDataRef_tC50BF7E5090F5D4D0316711BE83B361517B922E4 L_110 = L_109.___target;
		int32_t L_111 = L_110.___offset;
		V_20 = ((int32_t)il2cpp_codegen_add(L_108, L_111));
		uint8_t* L_112 = V_5;
		int32_t L_113 = V_19;
		int32_t L_114 = V_20;
		int32_t L_115 = V_19;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_112, L_113))) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_114, L_115));
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_116 = V_18;
		int32_t L_117 = L_116.___length;
		if (!L_117)
		{
			goto IL_02e0;
		}
	}
	{
		uint8_t* L_118 = V_5;
		int32_t L_119 = V_19;
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_120 = V_18;
		int32_t L_121 = L_120.___length;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_118, L_119)), 4))) = (int32_t)L_121;
	}

IL_02e0:
	{
		int32_t L_122 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_122, 1));
	}

IL_02e6:
	{
		int32_t L_123 = V_15;
		NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* L_124 = (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*)(&__this->___m_patches);
		int32_t L_125;
		L_125 = NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_inline(L_124, NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_RuntimeMethod_var);
		if ((((int32_t)L_123) < ((int32_t)L_125)))
		{
			goto IL_01fa;
		}
	}
	{
		NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179((&V_3), NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179_RuntimeMethod_var);
		NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179((&V_1), NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179_RuntimeMethod_var);
		NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E((&V_0), NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_RuntimeMethod_var);
		uint8_t* L_126 = V_4;
		V_9 = (BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639*)L_126;
		BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* L_127 = V_9;
		il2cpp_codegen_initobj(L_127, sizeof(BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639));
		BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* L_128 = V_9;
		int32_t L_129 = V_2;
		NullCheck(L_128);
		L_128->___Length = L_129;
		BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* L_130 = V_9;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_131 = ___0_allocator;
		NullCheck(L_130);
		L_130->___Allocator = L_131;
		BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* L_132 = V_9;
		uint8_t* L_133 = V_4;
		uint32_t L_134 = sizeof(BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639);
		int32_t L_135 = V_2;
		uint32_t L_136;
		L_136 = math_hash_m8DC7F61C691A4C0D78CCFCF54A4943DAD9BE153F((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_133, (int32_t)L_134)), L_135, (uint32_t)0, NULL);
		NullCheck(L_132);
		L_132->___Hash = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_136));
		BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998* L_137 = (BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998*)(&(&V_10)->___m_data);
		L_137->___m_Align8Union = ((int64_t)0);
		BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* L_138 = V_9;
		BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998* L_139 = (BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998*)(&(&V_10)->___m_data);
		uint8_t* L_140 = V_4;
		uint32_t L_141 = sizeof(BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639);
		uint8_t* L_142 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_140, (int32_t)L_141));
		V_21 = L_142;
		L_139->___m_Ptr = L_142;
		uint8_t* L_143 = V_21;
		NullCheck(L_138);
		L_138->___ValidationPtr = (void*)L_143;
		BlobAssetReference_1_tDD332C4A1E41EA2CA76C1632A675CEB17AA84B13 L_144 = V_10;
		return L_144;
	}
}
IL2CPP_EXTERN_C  BlobAssetReference_1_tDD332C4A1E41EA2CA76C1632A675CEB17AA84B13 BlobBuilder_CreateBlobAssetReference_TisRuntimeContentCatalogData_tB54FE67BBB6C431D3ACF06E9C4269EBCBA590635_m9FAA7DB2F697954DF999939A962C6FF7A9264B31_AdjustorThunk (RuntimeObject* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51*>(__this + _offset);
	BlobAssetReference_1_tDD332C4A1E41EA2CA76C1632A675CEB17AA84B13 _returnValue;
	_returnValue = BlobBuilder_CreateBlobAssetReference_TisRuntimeContentCatalogData_tB54FE67BBB6C431D3ACF06E9C4269EBCBA590635_m9FAA7DB2F697954DF999939A962C6FF7A9264B31(_thisAdjusted, ___0_allocator, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlobAssetReference_1_tD5149596D95DFDE07586D2F21EBDCE9F21C30A24 BlobBuilder_CreateBlobAssetReference_TisSceneMetaData_t41E517D27C94A6AB5C1CED25FE6E4C309AFFD420_m50F30BDC18F0BDF4EF58F484FF9580CC859EFDC3_gshared (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	int32_t V_6 = 0;
	uint8_t* V_7 = NULL;
	uint8_t* V_8 = NULL;
	BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* V_9 = NULL;
	BlobAssetReference_1_tD5149596D95DFDE07586D2F21EBDCE9F21C30A24 V_10;
	memset((&V_10), 0, sizeof(V_10));
	int32_t V_11 = 0;
	SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC V_12;
	memset((&V_12), 0, sizeof(V_12));
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t* V_17 = NULL;
	OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 V_18;
	memset((&V_18), 0, sizeof(V_18));
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	uint8_t* V_21 = NULL;
	{
		int32_t L_0 = __this->___m_currentChunkIndex;
		if ((((int32_t)L_0) == ((int32_t)(-1))))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1 = __this->___m_currentChunkIndex;
		BlobBuilder_AlignChunk_mB9C0DB02FA87BC040668BFA05F4BAEE7C4599887(__this, L_1, NULL);
	}

IL_0015:
	{
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_2 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_3;
		L_3 = NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_inline(L_2, NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D((&V_0), ((int32_t)il2cpp_codegen_add(L_3, 1)), (int32_t)2, (int32_t)1, NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_RuntimeMethod_var);
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_4 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_5;
		L_5 = NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_inline(L_4, NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40((&V_1), L_5, (int32_t)2, (int32_t)1, NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40_RuntimeMethod_var);
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, ((&V_0))->___m_Buffer, 0, (0));
		V_11 = 0;
		goto IL_00af;
	}

IL_004d:
	{
		int32_t L_6 = V_11;
		int32_t L_7 = V_11;
		int32_t L_8;
		L_8 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_0))->___m_Buffer, L_7);
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_9 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_10 = V_11;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_11;
		L_11 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_9, L_10, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		int32_t L_12 = L_11.___size;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, ((&V_0))->___m_Buffer, ((int32_t)il2cpp_codegen_add(L_6, 1)), (((int32_t)il2cpp_codegen_add(L_8, L_12))));
		int32_t L_13 = V_11;
		il2cpp_codegen_initobj((&V_12), sizeof(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC));
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_14 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_15 = V_11;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_16;
		L_16 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_14, L_15, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		uint8_t* L_17 = L_16.___p;
		(&V_12)->___p = L_17;
		int32_t L_18 = V_11;
		(&V_12)->___index = L_18;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_19 = V_12;
		IL2CPP_NATIVEARRAY_SET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, L_13, (L_19));
		int32_t L_20 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_00af:
	{
		int32_t L_21 = V_11;
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_22 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_23;
		L_23 = NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_inline(L_22, NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		if ((((int32_t)L_21) < ((int32_t)L_23)))
		{
			goto IL_004d;
		}
	}
	{
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_24 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_25;
		L_25 = NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_inline(L_24, NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		int32_t L_26;
		L_26 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_0))->___m_Buffer, L_25);
		V_2 = L_26;
		NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7 L_27 = V_1;
		NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0(L_27, NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0_RuntimeMethod_var);
		NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* L_28 = (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*)(&__this->___m_patches);
		int32_t L_29;
		L_29 = NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_inline(L_28, NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_RuntimeMethod_var);
		NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40((&V_3), L_29, (int32_t)2, (int32_t)1, NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40_RuntimeMethod_var);
		V_13 = 0;
		goto IL_012b;
	}

IL_00f0:
	{
		int32_t L_30 = V_13;
		il2cpp_codegen_initobj((&V_12), sizeof(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC));
		NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* L_31 = (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*)(&__this->___m_patches);
		int32_t L_32 = V_13;
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_33;
		L_33 = NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_inline(L_31, L_32, NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_RuntimeMethod_var);
		int32_t* L_34 = L_33.___offsetPtr;
		(&V_12)->___p = (uint8_t*)L_34;
		int32_t L_35 = V_13;
		(&V_12)->___index = L_35;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_36 = V_12;
		IL2CPP_NATIVEARRAY_SET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_3))->___m_Buffer, L_30, (L_36));
		int32_t L_37 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_012b:
	{
		int32_t L_38 = V_13;
		NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* L_39 = (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*)(&__this->___m_patches);
		int32_t L_40;
		L_40 = NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_inline(L_39, NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_RuntimeMethod_var);
		if ((((int32_t)L_38) < ((int32_t)L_40)))
		{
			goto IL_00f0;
		}
	}
	{
		NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7 L_41 = V_3;
		NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0(L_41, NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0_RuntimeMethod_var);
		uint32_t L_42 = sizeof(BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639);
		int32_t L_43 = V_2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_44 = ___0_allocator;
		void* L_45;
		L_45 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(((int64_t)((int32_t)il2cpp_codegen_add((int32_t)L_42, L_43))), ((int32_t)16), L_44, NULL);
		V_4 = (uint8_t*)L_45;
		uint8_t* L_46 = V_4;
		uint32_t L_47 = sizeof(BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639);
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_46, (int32_t)L_47));
		V_14 = 0;
		goto IL_019f;
	}

IL_0163:
	{
		uint8_t* L_48 = V_5;
		int32_t L_49 = V_14;
		int32_t L_50;
		L_50 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_0))->___m_Buffer, L_49);
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_51 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_52 = V_14;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_53;
		L_53 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_51, L_52, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		uint8_t* L_54 = L_53.___p;
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_55 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_56 = V_14;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_57;
		L_57 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_55, L_56, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		int32_t L_58 = L_57.___size;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_48, L_50)), (void*)L_54, ((int64_t)L_58), NULL);
		int32_t L_59 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_59, 1));
	}

IL_019f:
	{
		int32_t L_60 = V_14;
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_61 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_62;
		L_62 = NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_inline(L_61, NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		if ((((int32_t)L_60) < ((int32_t)L_62)))
		{
			goto IL_0163;
		}
	}
	{
		V_6 = 0;
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_63 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_64;
		L_64 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, 0);
		int32_t L_65 = L_64.___index;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_66;
		L_66 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_63, L_65, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		uint8_t* L_67 = L_66.___p;
		V_7 = L_67;
		uint8_t* L_68 = V_7;
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_69 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_70;
		L_70 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, 0);
		int32_t L_71 = L_70.___index;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_72;
		L_72 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_69, L_71, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		int32_t L_73 = L_72.___size;
		V_8 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, L_73));
		V_15 = 0;
		goto IL_02e6;
	}

IL_01fa:
	{
		int32_t L_74 = V_15;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_75;
		L_75 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_3))->___m_Buffer, L_74);
		int32_t L_76 = L_75.___index;
		V_16 = L_76;
		int32_t L_77 = V_15;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_78;
		L_78 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_3))->___m_Buffer, L_77);
		uint8_t* L_79 = L_78.___p;
		V_17 = (int32_t*)L_79;
		goto IL_0265;
	}

IL_021c:
	{
		int32_t L_80 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_80, 1));
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_81 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_82 = V_6;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_83;
		L_83 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, L_82);
		int32_t L_84 = L_83.___index;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_85;
		L_85 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_81, L_84, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		uint8_t* L_86 = L_85.___p;
		V_7 = L_86;
		uint8_t* L_87 = V_7;
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_88 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_89 = V_6;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_90;
		L_90 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, L_89);
		int32_t L_91 = L_90.___index;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_92;
		L_92 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_88, L_91, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		int32_t L_93 = L_92.___size;
		V_8 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_87, L_93));
	}

IL_0265:
	{
		int32_t* L_94 = V_17;
		uint8_t* L_95 = V_8;
		if ((!(((uintptr_t)L_94) < ((uintptr_t)L_95))))
		{
			goto IL_021c;
		}
	}
	{
		NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* L_96 = (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*)(&__this->___m_patches);
		int32_t L_97 = V_16;
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_98;
		L_98 = NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_inline(L_96, L_97, NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_RuntimeMethod_var);
		V_18 = L_98;
		int32_t L_99 = V_6;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_100;
		L_100 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, L_99);
		int32_t L_101 = L_100.___index;
		int32_t L_102;
		L_102 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_0))->___m_Buffer, L_101);
		int32_t* L_103 = V_17;
		uint8_t* L_104 = V_7;
		V_19 = ((int32_t)il2cpp_codegen_add(L_102, ((int32_t)((int64_t)(intptr_t)((int32_t*)((intptr_t)((int32_t*)il2cpp_codegen_subtract((intptr_t)L_103, (intptr_t)L_104))/1))))));
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_105 = V_18;
		BlobDataRef_tC50BF7E5090F5D4D0316711BE83B361517B922E4 L_106 = L_105.___target;
		int32_t L_107 = L_106.___allocIndex;
		int32_t L_108;
		L_108 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_0))->___m_Buffer, L_107);
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_109 = V_18;
		BlobDataRef_tC50BF7E5090F5D4D0316711BE83B361517B922E4 L_110 = L_109.___target;
		int32_t L_111 = L_110.___offset;
		V_20 = ((int32_t)il2cpp_codegen_add(L_108, L_111));
		uint8_t* L_112 = V_5;
		int32_t L_113 = V_19;
		int32_t L_114 = V_20;
		int32_t L_115 = V_19;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_112, L_113))) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_114, L_115));
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_116 = V_18;
		int32_t L_117 = L_116.___length;
		if (!L_117)
		{
			goto IL_02e0;
		}
	}
	{
		uint8_t* L_118 = V_5;
		int32_t L_119 = V_19;
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_120 = V_18;
		int32_t L_121 = L_120.___length;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_118, L_119)), 4))) = (int32_t)L_121;
	}

IL_02e0:
	{
		int32_t L_122 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_122, 1));
	}

IL_02e6:
	{
		int32_t L_123 = V_15;
		NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* L_124 = (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*)(&__this->___m_patches);
		int32_t L_125;
		L_125 = NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_inline(L_124, NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_RuntimeMethod_var);
		if ((((int32_t)L_123) < ((int32_t)L_125)))
		{
			goto IL_01fa;
		}
	}
	{
		NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179((&V_3), NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179_RuntimeMethod_var);
		NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179((&V_1), NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179_RuntimeMethod_var);
		NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E((&V_0), NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_RuntimeMethod_var);
		uint8_t* L_126 = V_4;
		V_9 = (BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639*)L_126;
		BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* L_127 = V_9;
		il2cpp_codegen_initobj(L_127, sizeof(BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639));
		BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* L_128 = V_9;
		int32_t L_129 = V_2;
		NullCheck(L_128);
		L_128->___Length = L_129;
		BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* L_130 = V_9;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_131 = ___0_allocator;
		NullCheck(L_130);
		L_130->___Allocator = L_131;
		BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* L_132 = V_9;
		uint8_t* L_133 = V_4;
		uint32_t L_134 = sizeof(BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639);
		int32_t L_135 = V_2;
		uint32_t L_136;
		L_136 = math_hash_m8DC7F61C691A4C0D78CCFCF54A4943DAD9BE153F((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_133, (int32_t)L_134)), L_135, (uint32_t)0, NULL);
		NullCheck(L_132);
		L_132->___Hash = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_136));
		BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998* L_137 = (BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998*)(&(&V_10)->___m_data);
		L_137->___m_Align8Union = ((int64_t)0);
		BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* L_138 = V_9;
		BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998* L_139 = (BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998*)(&(&V_10)->___m_data);
		uint8_t* L_140 = V_4;
		uint32_t L_141 = sizeof(BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639);
		uint8_t* L_142 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_140, (int32_t)L_141));
		V_21 = L_142;
		L_139->___m_Ptr = L_142;
		uint8_t* L_143 = V_21;
		NullCheck(L_138);
		L_138->___ValidationPtr = (void*)L_143;
		BlobAssetReference_1_tD5149596D95DFDE07586D2F21EBDCE9F21C30A24 L_144 = V_10;
		return L_144;
	}
}
IL2CPP_EXTERN_C  BlobAssetReference_1_tD5149596D95DFDE07586D2F21EBDCE9F21C30A24 BlobBuilder_CreateBlobAssetReference_TisSceneMetaData_t41E517D27C94A6AB5C1CED25FE6E4C309AFFD420_m50F30BDC18F0BDF4EF58F484FF9580CC859EFDC3_AdjustorThunk (RuntimeObject* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51*>(__this + _offset);
	BlobAssetReference_1_tD5149596D95DFDE07586D2F21EBDCE9F21C30A24 _returnValue;
	_returnValue = BlobBuilder_CreateBlobAssetReference_TisSceneMetaData_t41E517D27C94A6AB5C1CED25FE6E4C309AFFD420_m50F30BDC18F0BDF4EF58F484FF9580CC859EFDC3(_thisAdjusted, ___0_allocator, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlobAssetReference_1_t2539DE18562593E15A5CAC630C2C2045EEA597E9 BlobBuilder_CreateBlobAssetReference_TisIl2CppFullySharedGenericStruct_mAC3F61CBA51340A8BE1DE4EA2915885B87F42466_gshared (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	int32_t V_6 = 0;
	uint8_t* V_7 = NULL;
	uint8_t* V_8 = NULL;
	BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* V_9 = NULL;
	BlobAssetReference_1_t2539DE18562593E15A5CAC630C2C2045EEA597E9 V_10;
	memset((&V_10), 0, sizeof(V_10));
	int32_t V_11 = 0;
	SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC V_12;
	memset((&V_12), 0, sizeof(V_12));
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t* V_17 = NULL;
	OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 V_18;
	memset((&V_18), 0, sizeof(V_18));
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	uint8_t* V_21 = NULL;
	{
		int32_t L_0 = __this->___m_currentChunkIndex;
		if ((((int32_t)L_0) == ((int32_t)(-1))))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1 = __this->___m_currentChunkIndex;
		BlobBuilder_AlignChunk_mB9C0DB02FA87BC040668BFA05F4BAEE7C4599887(__this, L_1, NULL);
	}

IL_0015:
	{
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_2 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_3;
		L_3 = NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_inline(L_2, NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D((&V_0), ((int32_t)il2cpp_codegen_add(L_3, 1)), (int32_t)2, (int32_t)1, NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_RuntimeMethod_var);
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_4 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_5;
		L_5 = NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_inline(L_4, NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40((&V_1), L_5, (int32_t)2, (int32_t)1, NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40_RuntimeMethod_var);
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, ((&V_0))->___m_Buffer, 0, (0));
		V_11 = 0;
		goto IL_00af;
	}

IL_004d:
	{
		int32_t L_6 = V_11;
		int32_t L_7 = V_11;
		int32_t L_8;
		L_8 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_0))->___m_Buffer, L_7);
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_9 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_10 = V_11;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_11;
		L_11 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_9, L_10, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		int32_t L_12 = L_11.___size;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, ((&V_0))->___m_Buffer, ((int32_t)il2cpp_codegen_add(L_6, 1)), (((int32_t)il2cpp_codegen_add(L_8, L_12))));
		int32_t L_13 = V_11;
		il2cpp_codegen_initobj((&V_12), sizeof(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC));
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_14 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_15 = V_11;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_16;
		L_16 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_14, L_15, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		uint8_t* L_17 = L_16.___p;
		(&V_12)->___p = L_17;
		int32_t L_18 = V_11;
		(&V_12)->___index = L_18;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_19 = V_12;
		IL2CPP_NATIVEARRAY_SET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, L_13, (L_19));
		int32_t L_20 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_00af:
	{
		int32_t L_21 = V_11;
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_22 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_23;
		L_23 = NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_inline(L_22, NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		if ((((int32_t)L_21) < ((int32_t)L_23)))
		{
			goto IL_004d;
		}
	}
	{
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_24 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_25;
		L_25 = NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_inline(L_24, NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		int32_t L_26;
		L_26 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_0))->___m_Buffer, L_25);
		V_2 = L_26;
		NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7 L_27 = V_1;
		NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0(L_27, NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0_RuntimeMethod_var);
		NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* L_28 = (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*)(&__this->___m_patches);
		int32_t L_29;
		L_29 = NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_inline(L_28, NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_RuntimeMethod_var);
		NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40((&V_3), L_29, (int32_t)2, (int32_t)1, NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40_RuntimeMethod_var);
		V_13 = 0;
		goto IL_012b;
	}

IL_00f0:
	{
		int32_t L_30 = V_13;
		il2cpp_codegen_initobj((&V_12), sizeof(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC));
		NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* L_31 = (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*)(&__this->___m_patches);
		int32_t L_32 = V_13;
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_33;
		L_33 = NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_inline(L_31, L_32, NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_RuntimeMethod_var);
		int32_t* L_34 = L_33.___offsetPtr;
		(&V_12)->___p = (uint8_t*)L_34;
		int32_t L_35 = V_13;
		(&V_12)->___index = L_35;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_36 = V_12;
		IL2CPP_NATIVEARRAY_SET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_3))->___m_Buffer, L_30, (L_36));
		int32_t L_37 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_012b:
	{
		int32_t L_38 = V_13;
		NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* L_39 = (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*)(&__this->___m_patches);
		int32_t L_40;
		L_40 = NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_inline(L_39, NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_RuntimeMethod_var);
		if ((((int32_t)L_38) < ((int32_t)L_40)))
		{
			goto IL_00f0;
		}
	}
	{
		NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7 L_41 = V_3;
		NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0(L_41, NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0_RuntimeMethod_var);
		uint32_t L_42 = sizeof(BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639);
		int32_t L_43 = V_2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_44 = ___0_allocator;
		void* L_45;
		L_45 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(((int64_t)((int32_t)il2cpp_codegen_add((int32_t)L_42, L_43))), ((int32_t)16), L_44, NULL);
		V_4 = (uint8_t*)L_45;
		uint8_t* L_46 = V_4;
		uint32_t L_47 = sizeof(BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639);
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_46, (int32_t)L_47));
		V_14 = 0;
		goto IL_019f;
	}

IL_0163:
	{
		uint8_t* L_48 = V_5;
		int32_t L_49 = V_14;
		int32_t L_50;
		L_50 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_0))->___m_Buffer, L_49);
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_51 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_52 = V_14;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_53;
		L_53 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_51, L_52, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		uint8_t* L_54 = L_53.___p;
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_55 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_56 = V_14;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_57;
		L_57 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_55, L_56, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		int32_t L_58 = L_57.___size;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_48, L_50)), (void*)L_54, ((int64_t)L_58), NULL);
		int32_t L_59 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_59, 1));
	}

IL_019f:
	{
		int32_t L_60 = V_14;
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_61 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_62;
		L_62 = NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_inline(L_61, NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		if ((((int32_t)L_60) < ((int32_t)L_62)))
		{
			goto IL_0163;
		}
	}
	{
		V_6 = 0;
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_63 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_64;
		L_64 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, 0);
		int32_t L_65 = L_64.___index;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_66;
		L_66 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_63, L_65, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		uint8_t* L_67 = L_66.___p;
		V_7 = L_67;
		uint8_t* L_68 = V_7;
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_69 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_70;
		L_70 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, 0);
		int32_t L_71 = L_70.___index;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_72;
		L_72 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_69, L_71, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		int32_t L_73 = L_72.___size;
		V_8 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, L_73));
		V_15 = 0;
		goto IL_02e6;
	}

IL_01fa:
	{
		int32_t L_74 = V_15;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_75;
		L_75 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_3))->___m_Buffer, L_74);
		int32_t L_76 = L_75.___index;
		V_16 = L_76;
		int32_t L_77 = V_15;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_78;
		L_78 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_3))->___m_Buffer, L_77);
		uint8_t* L_79 = L_78.___p;
		V_17 = (int32_t*)L_79;
		goto IL_0265;
	}

IL_021c:
	{
		int32_t L_80 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_80, 1));
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_81 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_82 = V_6;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_83;
		L_83 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, L_82);
		int32_t L_84 = L_83.___index;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_85;
		L_85 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_81, L_84, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		uint8_t* L_86 = L_85.___p;
		V_7 = L_86;
		uint8_t* L_87 = V_7;
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_88 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_89 = V_6;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_90;
		L_90 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, L_89);
		int32_t L_91 = L_90.___index;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_92;
		L_92 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_88, L_91, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		int32_t L_93 = L_92.___size;
		V_8 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_87, L_93));
	}

IL_0265:
	{
		int32_t* L_94 = V_17;
		uint8_t* L_95 = V_8;
		if ((!(((uintptr_t)L_94) < ((uintptr_t)L_95))))
		{
			goto IL_021c;
		}
	}
	{
		NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* L_96 = (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*)(&__this->___m_patches);
		int32_t L_97 = V_16;
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_98;
		L_98 = NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_inline(L_96, L_97, NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_RuntimeMethod_var);
		V_18 = L_98;
		int32_t L_99 = V_6;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_100;
		L_100 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, L_99);
		int32_t L_101 = L_100.___index;
		int32_t L_102;
		L_102 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_0))->___m_Buffer, L_101);
		int32_t* L_103 = V_17;
		uint8_t* L_104 = V_7;
		V_19 = ((int32_t)il2cpp_codegen_add(L_102, ((int32_t)((int64_t)(intptr_t)((int32_t*)((intptr_t)((int32_t*)il2cpp_codegen_subtract((intptr_t)L_103, (intptr_t)L_104))/1))))));
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_105 = V_18;
		BlobDataRef_tC50BF7E5090F5D4D0316711BE83B361517B922E4 L_106 = L_105.___target;
		int32_t L_107 = L_106.___allocIndex;
		int32_t L_108;
		L_108 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_0))->___m_Buffer, L_107);
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_109 = V_18;
		BlobDataRef_tC50BF7E5090F5D4D0316711BE83B361517B922E4 L_110 = L_109.___target;
		int32_t L_111 = L_110.___offset;
		V_20 = ((int32_t)il2cpp_codegen_add(L_108, L_111));
		uint8_t* L_112 = V_5;
		int32_t L_113 = V_19;
		int32_t L_114 = V_20;
		int32_t L_115 = V_19;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_112, L_113))) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_114, L_115));
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_116 = V_18;
		int32_t L_117 = L_116.___length;
		if (!L_117)
		{
			goto IL_02e0;
		}
	}
	{
		uint8_t* L_118 = V_5;
		int32_t L_119 = V_19;
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_120 = V_18;
		int32_t L_121 = L_120.___length;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_118, L_119)), 4))) = (int32_t)L_121;
	}

IL_02e0:
	{
		int32_t L_122 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_122, 1));
	}

IL_02e6:
	{
		int32_t L_123 = V_15;
		NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* L_124 = (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*)(&__this->___m_patches);
		int32_t L_125;
		L_125 = NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_inline(L_124, NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_RuntimeMethod_var);
		if ((((int32_t)L_123) < ((int32_t)L_125)))
		{
			goto IL_01fa;
		}
	}
	{
		NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179((&V_3), NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179_RuntimeMethod_var);
		NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179((&V_1), NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179_RuntimeMethod_var);
		NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E((&V_0), NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_RuntimeMethod_var);
		uint8_t* L_126 = V_4;
		V_9 = (BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639*)L_126;
		BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* L_127 = V_9;
		il2cpp_codegen_initobj(L_127, sizeof(BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639));
		BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* L_128 = V_9;
		int32_t L_129 = V_2;
		NullCheck(L_128);
		L_128->___Length = L_129;
		BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* L_130 = V_9;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_131 = ___0_allocator;
		NullCheck(L_130);
		L_130->___Allocator = L_131;
		BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* L_132 = V_9;
		uint8_t* L_133 = V_4;
		uint32_t L_134 = sizeof(BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639);
		int32_t L_135 = V_2;
		uint32_t L_136;
		L_136 = math_hash_m8DC7F61C691A4C0D78CCFCF54A4943DAD9BE153F((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_133, (int32_t)L_134)), L_135, (uint32_t)0, NULL);
		NullCheck(L_132);
		L_132->___Hash = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_136));
		BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998* L_137 = (BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998*)(&(&V_10)->___m_data);
		L_137->___m_Align8Union = ((int64_t)0);
		BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* L_138 = V_9;
		BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998* L_139 = (BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998*)(&(&V_10)->___m_data);
		uint8_t* L_140 = V_4;
		uint32_t L_141 = sizeof(BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639);
		uint8_t* L_142 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_140, (int32_t)L_141));
		V_21 = L_142;
		L_139->___m_Ptr = L_142;
		uint8_t* L_143 = V_21;
		NullCheck(L_138);
		L_138->___ValidationPtr = (void*)L_143;
		BlobAssetReference_1_t2539DE18562593E15A5CAC630C2C2045EEA597E9 L_144 = V_10;
		return L_144;
	}
}
IL2CPP_EXTERN_C  BlobAssetReference_1_t2539DE18562593E15A5CAC630C2C2045EEA597E9 BlobBuilder_CreateBlobAssetReference_TisIl2CppFullySharedGenericStruct_mAC3F61CBA51340A8BE1DE4EA2915885B87F42466_AdjustorThunk (RuntimeObject* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51*>(__this + _offset);
	BlobAssetReference_1_t2539DE18562593E15A5CAC630C2C2045EEA597E9 _returnValue;
	_returnValue = BlobBuilder_CreateBlobAssetReference_TisIl2CppFullySharedGenericStruct_mAC3F61CBA51340A8BE1DE4EA2915885B87F42466(_thisAdjusted, ___0_allocator, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlobAssetReference_1_t9FD7FAAE1333347EB8AB3D10A7FC0C35E3F2778C BlobBuilder_CreateBlobAssetReference_TisBlobHeader_tCE133EA8852A67AF9C9F3E380D6288A120A34953_m8D4E17C8B80802F29987FFD19C5F0658CE10FAB2_gshared (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	int32_t V_6 = 0;
	uint8_t* V_7 = NULL;
	uint8_t* V_8 = NULL;
	BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* V_9 = NULL;
	BlobAssetReference_1_t9FD7FAAE1333347EB8AB3D10A7FC0C35E3F2778C V_10;
	memset((&V_10), 0, sizeof(V_10));
	int32_t V_11 = 0;
	SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC V_12;
	memset((&V_12), 0, sizeof(V_12));
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t* V_17 = NULL;
	OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 V_18;
	memset((&V_18), 0, sizeof(V_18));
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	uint8_t* V_21 = NULL;
	{
		int32_t L_0 = __this->___m_currentChunkIndex;
		if ((((int32_t)L_0) == ((int32_t)(-1))))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1 = __this->___m_currentChunkIndex;
		BlobBuilder_AlignChunk_mB9C0DB02FA87BC040668BFA05F4BAEE7C4599887(__this, L_1, NULL);
	}

IL_0015:
	{
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_2 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_3;
		L_3 = NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_inline(L_2, NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D((&V_0), ((int32_t)il2cpp_codegen_add(L_3, 1)), (int32_t)2, (int32_t)1, NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_RuntimeMethod_var);
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_4 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_5;
		L_5 = NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_inline(L_4, NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40((&V_1), L_5, (int32_t)2, (int32_t)1, NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40_RuntimeMethod_var);
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, ((&V_0))->___m_Buffer, 0, (0));
		V_11 = 0;
		goto IL_00af;
	}

IL_004d:
	{
		int32_t L_6 = V_11;
		int32_t L_7 = V_11;
		int32_t L_8;
		L_8 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_0))->___m_Buffer, L_7);
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_9 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_10 = V_11;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_11;
		L_11 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_9, L_10, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		int32_t L_12 = L_11.___size;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, ((&V_0))->___m_Buffer, ((int32_t)il2cpp_codegen_add(L_6, 1)), (((int32_t)il2cpp_codegen_add(L_8, L_12))));
		int32_t L_13 = V_11;
		il2cpp_codegen_initobj((&V_12), sizeof(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC));
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_14 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_15 = V_11;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_16;
		L_16 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_14, L_15, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		uint8_t* L_17 = L_16.___p;
		(&V_12)->___p = L_17;
		int32_t L_18 = V_11;
		(&V_12)->___index = L_18;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_19 = V_12;
		IL2CPP_NATIVEARRAY_SET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, L_13, (L_19));
		int32_t L_20 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_00af:
	{
		int32_t L_21 = V_11;
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_22 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_23;
		L_23 = NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_inline(L_22, NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		if ((((int32_t)L_21) < ((int32_t)L_23)))
		{
			goto IL_004d;
		}
	}
	{
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_24 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_25;
		L_25 = NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_inline(L_24, NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		int32_t L_26;
		L_26 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_0))->___m_Buffer, L_25);
		V_2 = L_26;
		NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7 L_27 = V_1;
		NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0(L_27, NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0_RuntimeMethod_var);
		NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* L_28 = (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*)(&__this->___m_patches);
		int32_t L_29;
		L_29 = NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_inline(L_28, NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_RuntimeMethod_var);
		NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40((&V_3), L_29, (int32_t)2, (int32_t)1, NativeArray_1__ctor_m0D0BF46679DD061D59DF64903B47A7D028100B40_RuntimeMethod_var);
		V_13 = 0;
		goto IL_012b;
	}

IL_00f0:
	{
		int32_t L_30 = V_13;
		il2cpp_codegen_initobj((&V_12), sizeof(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC));
		NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* L_31 = (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*)(&__this->___m_patches);
		int32_t L_32 = V_13;
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_33;
		L_33 = NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_inline(L_31, L_32, NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_RuntimeMethod_var);
		int32_t* L_34 = L_33.___offsetPtr;
		(&V_12)->___p = (uint8_t*)L_34;
		int32_t L_35 = V_13;
		(&V_12)->___index = L_35;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_36 = V_12;
		IL2CPP_NATIVEARRAY_SET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_3))->___m_Buffer, L_30, (L_36));
		int32_t L_37 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_012b:
	{
		int32_t L_38 = V_13;
		NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* L_39 = (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*)(&__this->___m_patches);
		int32_t L_40;
		L_40 = NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_inline(L_39, NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_RuntimeMethod_var);
		if ((((int32_t)L_38) < ((int32_t)L_40)))
		{
			goto IL_00f0;
		}
	}
	{
		NativeArray_1_t71815CF453CF1ED53EE2F44FC929ADDEB49C8BF7 L_41 = V_3;
		NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0(L_41, NativeSortExtension_Sort_TisSortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC_m3567CC8342BF6392F2C28431BD8755805C747EE0_RuntimeMethod_var);
		uint32_t L_42 = sizeof(BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639);
		int32_t L_43 = V_2;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_44 = ___0_allocator;
		void* L_45;
		L_45 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(((int64_t)((int32_t)il2cpp_codegen_add((int32_t)L_42, L_43))), ((int32_t)16), L_44, NULL);
		V_4 = (uint8_t*)L_45;
		uint8_t* L_46 = V_4;
		uint32_t L_47 = sizeof(BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639);
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_46, (int32_t)L_47));
		V_14 = 0;
		goto IL_019f;
	}

IL_0163:
	{
		uint8_t* L_48 = V_5;
		int32_t L_49 = V_14;
		int32_t L_50;
		L_50 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_0))->___m_Buffer, L_49);
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_51 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_52 = V_14;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_53;
		L_53 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_51, L_52, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		uint8_t* L_54 = L_53.___p;
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_55 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_56 = V_14;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_57;
		L_57 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_55, L_56, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		int32_t L_58 = L_57.___size;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_48, L_50)), (void*)L_54, ((int64_t)L_58), NULL);
		int32_t L_59 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_59, 1));
	}

IL_019f:
	{
		int32_t L_60 = V_14;
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_61 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_62;
		L_62 = NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_inline(L_61, NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_RuntimeMethod_var);
		if ((((int32_t)L_60) < ((int32_t)L_62)))
		{
			goto IL_0163;
		}
	}
	{
		V_6 = 0;
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_63 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_64;
		L_64 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, 0);
		int32_t L_65 = L_64.___index;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_66;
		L_66 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_63, L_65, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		uint8_t* L_67 = L_66.___p;
		V_7 = L_67;
		uint8_t* L_68 = V_7;
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_69 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_70;
		L_70 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, 0);
		int32_t L_71 = L_70.___index;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_72;
		L_72 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_69, L_71, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		int32_t L_73 = L_72.___size;
		V_8 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, L_73));
		V_15 = 0;
		goto IL_02e6;
	}

IL_01fa:
	{
		int32_t L_74 = V_15;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_75;
		L_75 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_3))->___m_Buffer, L_74);
		int32_t L_76 = L_75.___index;
		V_16 = L_76;
		int32_t L_77 = V_15;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_78;
		L_78 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_3))->___m_Buffer, L_77);
		uint8_t* L_79 = L_78.___p;
		V_17 = (int32_t*)L_79;
		goto IL_0265;
	}

IL_021c:
	{
		int32_t L_80 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_80, 1));
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_81 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_82 = V_6;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_83;
		L_83 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, L_82);
		int32_t L_84 = L_83.___index;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_85;
		L_85 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_81, L_84, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		uint8_t* L_86 = L_85.___p;
		V_7 = L_86;
		uint8_t* L_87 = V_7;
		NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* L_88 = (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8*)(&__this->___m_allocations);
		int32_t L_89 = V_6;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_90;
		L_90 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, L_89);
		int32_t L_91 = L_90.___index;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_92;
		L_92 = NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_inline(L_88, L_91, NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_RuntimeMethod_var);
		int32_t L_93 = L_92.___size;
		V_8 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_87, L_93));
	}

IL_0265:
	{
		int32_t* L_94 = V_17;
		uint8_t* L_95 = V_8;
		if ((!(((uintptr_t)L_94) < ((uintptr_t)L_95))))
		{
			goto IL_021c;
		}
	}
	{
		NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* L_96 = (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*)(&__this->___m_patches);
		int32_t L_97 = V_16;
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_98;
		L_98 = NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_inline(L_96, L_97, NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_RuntimeMethod_var);
		V_18 = L_98;
		int32_t L_99 = V_6;
		SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC L_100;
		L_100 = IL2CPP_NATIVEARRAY_GET_ITEM(SortedIndex_t74B0E9A4C85EBED42878266F13949519F370E7BC, ((&V_1))->___m_Buffer, L_99);
		int32_t L_101 = L_100.___index;
		int32_t L_102;
		L_102 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_0))->___m_Buffer, L_101);
		int32_t* L_103 = V_17;
		uint8_t* L_104 = V_7;
		V_19 = ((int32_t)il2cpp_codegen_add(L_102, ((int32_t)((int64_t)(intptr_t)((int32_t*)((intptr_t)((int32_t*)il2cpp_codegen_subtract((intptr_t)L_103, (intptr_t)L_104))/1))))));
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_105 = V_18;
		BlobDataRef_tC50BF7E5090F5D4D0316711BE83B361517B922E4 L_106 = L_105.___target;
		int32_t L_107 = L_106.___allocIndex;
		int32_t L_108;
		L_108 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_0))->___m_Buffer, L_107);
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_109 = V_18;
		BlobDataRef_tC50BF7E5090F5D4D0316711BE83B361517B922E4 L_110 = L_109.___target;
		int32_t L_111 = L_110.___offset;
		V_20 = ((int32_t)il2cpp_codegen_add(L_108, L_111));
		uint8_t* L_112 = V_5;
		int32_t L_113 = V_19;
		int32_t L_114 = V_20;
		int32_t L_115 = V_19;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_112, L_113))) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_114, L_115));
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_116 = V_18;
		int32_t L_117 = L_116.___length;
		if (!L_117)
		{
			goto IL_02e0;
		}
	}
	{
		uint8_t* L_118 = V_5;
		int32_t L_119 = V_19;
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_120 = V_18;
		int32_t L_121 = L_120.___length;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_118, L_119)), 4))) = (int32_t)L_121;
	}

IL_02e0:
	{
		int32_t L_122 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_122, 1));
	}

IL_02e6:
	{
		int32_t L_123 = V_15;
		NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* L_124 = (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*)(&__this->___m_patches);
		int32_t L_125;
		L_125 = NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_inline(L_124, NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_RuntimeMethod_var);
		if ((((int32_t)L_123) < ((int32_t)L_125)))
		{
			goto IL_01fa;
		}
	}
	{
		NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179((&V_3), NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179_RuntimeMethod_var);
		NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179((&V_1), NativeArray_1_Dispose_mA7C3F43CB6E072D68718B05B07D17F8553BE8179_RuntimeMethod_var);
		NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E((&V_0), NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_RuntimeMethod_var);
		uint8_t* L_126 = V_4;
		V_9 = (BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639*)L_126;
		BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* L_127 = V_9;
		il2cpp_codegen_initobj(L_127, sizeof(BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639));
		BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* L_128 = V_9;
		int32_t L_129 = V_2;
		NullCheck(L_128);
		L_128->___Length = L_129;
		BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* L_130 = V_9;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_131 = ___0_allocator;
		NullCheck(L_130);
		L_130->___Allocator = L_131;
		BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* L_132 = V_9;
		uint8_t* L_133 = V_4;
		uint32_t L_134 = sizeof(BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639);
		int32_t L_135 = V_2;
		uint32_t L_136;
		L_136 = math_hash_m8DC7F61C691A4C0D78CCFCF54A4943DAD9BE153F((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_133, (int32_t)L_134)), L_135, (uint32_t)0, NULL);
		NullCheck(L_132);
		L_132->___Hash = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_136));
		BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998* L_137 = (BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998*)(&(&V_10)->___m_data);
		L_137->___m_Align8Union = ((int64_t)0);
		BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639* L_138 = V_9;
		BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998* L_139 = (BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998*)(&(&V_10)->___m_data);
		uint8_t* L_140 = V_4;
		uint32_t L_141 = sizeof(BlobAssetHeader_t3EC5AD955B287949B57D36BBDE25A4D1BA85E639);
		uint8_t* L_142 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_140, (int32_t)L_141));
		V_21 = L_142;
		L_139->___m_Ptr = L_142;
		uint8_t* L_143 = V_21;
		NullCheck(L_138);
		L_138->___ValidationPtr = (void*)L_143;
		BlobAssetReference_1_t9FD7FAAE1333347EB8AB3D10A7FC0C35E3F2778C L_144 = V_10;
		return L_144;
	}
}
IL2CPP_EXTERN_C  BlobAssetReference_1_t9FD7FAAE1333347EB8AB3D10A7FC0C35E3F2778C BlobBuilder_CreateBlobAssetReference_TisBlobHeader_tCE133EA8852A67AF9C9F3E380D6288A120A34953_m8D4E17C8B80802F29987FFD19C5F0658CE10FAB2_AdjustorThunk (RuntimeObject* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51*>(__this + _offset);
	BlobAssetReference_1_t9FD7FAAE1333347EB8AB3D10A7FC0C35E3F2778C _returnValue;
	_returnValue = BlobBuilder_CreateBlobAssetReference_TisBlobHeader_tCE133EA8852A67AF9C9F3E380D6288A120A34953_m8D4E17C8B80802F29987FFD19C5F0658CE10FAB2(_thisAdjusted, ___0_allocator, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* BlobBuilder_SetPointer_TisIl2CppFullySharedGenericStruct_m2F6675733786947F7C005AB841841DDD91393C34_gshared (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* __this, BlobPtr_1_t06CF9D7095B1DC673B78A9CA39F8296DEE4DB5C8* ___0_ptr, Il2CppFullySharedGenericStruct* ___1_obj, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Add_m8F1C8B337385027E5C7335B0A69C3F58D9580C5A_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t* V_0 = NULL;
	void* V_1 = NULL;
	BlobDataRef_tC50BF7E5090F5D4D0316711BE83B361517B922E4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 V_3;
	memset((&V_3), 0, sizeof(V_3));
	OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		BlobPtr_1_t06CF9D7095B1DC673B78A9CA39F8296DEE4DB5C8* L_0 = ___0_ptr;
		int32_t* L_1 = (int32_t*)(&L_0->___m_OffsetPtr);
		void* L_2;
		L_2 = il2cpp_codegen_unsafe_cast(L_1);
		V_0 = (int32_t*)L_2;
		Il2CppFullySharedGenericStruct* L_3 = ___1_obj;
		void* L_4;
		L_4 = ((  void* (*) (Il2CppFullySharedGenericStruct*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_3, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_1 = L_4;
		void* L_5 = V_1;
		bool L_6;
		L_6 = BlobBuilder_GetPatchTarget_m4B4730A57DE2D062962412A21582052542E16723(__this, L_5, (&V_2), NULL);
		if (!L_6)
		{
			goto IL_0050;
		}
	}
	{
		il2cpp_codegen_initobj((&V_4), sizeof(OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982));
		int32_t* L_7 = V_0;
		(&V_4)->___offsetPtr = L_7;
		BlobDataRef_tC50BF7E5090F5D4D0316711BE83B361517B922E4 L_8 = V_2;
		(&V_4)->___target = L_8;
		(&V_4)->___length = 0;
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_9 = V_4;
		V_3 = L_9;
		NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* L_10 = (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE*)(&__this->___m_patches);
		NativeList_1_Add_m8F1C8B337385027E5C7335B0A69C3F58D9580C5A(L_10, (&V_3), NativeList_1_Add_m8F1C8B337385027E5C7335B0A69C3F58D9580C5A_RuntimeMethod_var);
		goto IL_005b;
	}

IL_0050:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA515DF9A6BFAAD184ED199830B01884B94168561)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_005b:
	{
		Il2CppFullySharedGenericStruct* L_12 = ___1_obj;
		return L_12;
	}
}
IL2CPP_EXTERN_C  Il2CppFullySharedGenericStruct* BlobBuilder_SetPointer_TisIl2CppFullySharedGenericStruct_m2F6675733786947F7C005AB841841DDD91393C34_AdjustorThunk (RuntimeObject* __this, BlobPtr_1_t06CF9D7095B1DC673B78A9CA39F8296DEE4DB5C8* ___0_ptr, Il2CppFullySharedGenericStruct* ___1_obj, const RuntimeMethod* method)
{
	BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51*>(__this + _offset);
	Il2CppFullySharedGenericStruct* _returnValue;
	_returnValue = BlobBuilder_SetPointer_TisIl2CppFullySharedGenericStruct_m2F6675733786947F7C005AB841841DDD91393C34(_thisAdjusted, ___0_ptr, ___1_obj, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BlobProxy_GetPrimitive_TisIl2CppFullySharedGenericStruct_mA2CF9F9B4341D6E6463805E31E9D6A0A9B6D0F64_gshared (intptr_t ___0_basePtr, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t9DFF00FD241A19AA3447C47C68985D18A55D64D8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_t9DFF00FD241A19AA3447C47C68985D18A55D64D8);
	{
		void* L_0;
		L_0 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&___0_basePtr), NULL);
		il2cpp_codegen_memcpy(L_1, L_0, SizeOf_T_t9DFF00FD241A19AA3447C47C68985D18A55D64D8);
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BlobString_CopyTo_TisIl2CppFullySharedGenericAny_m1D26A6AE8A4670B9CDFAB759A10426206BE05973_gshared (BlobString_t059A4022514441B9F0A46FC1B931579200DFFD92* __this, Il2CppFullySharedGenericAny* ___0_dest, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlobArray_1_GetUnsafePtr_m1C36E9770A33F35255BFCC18D7FA21E4863771FE_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	void* L_5 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_7 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_20 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	uint8_t* V_0 = NULL;
	int32_t V_1 = 0;
	uint8_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		BlobArray_1_t112C49ADFEB7465DC55221B4D8E6C721002D4D16* L_0 = (BlobArray_1_t112C49ADFEB7465DC55221B4D8E6C721002D4D16*)(&__this->___Data);
		void* L_1;
		L_1 = BlobArray_1_GetUnsafePtr_m1C36E9770A33F35255BFCC18D7FA21E4863771FE(L_0, BlobArray_1_GetUnsafePtr_m1C36E9770A33F35255BFCC18D7FA21E4863771FE_RuntimeMethod_var);
		V_0 = (uint8_t*)L_1;
		int32_t L_2;
		L_2 = BlobString_get_Length_mAC6DF9DA9F498307DF710C1E01A9F143FF55FF86(__this, NULL);
		V_1 = L_2;
		Il2CppFullySharedGenericAny* L_3 = ___0_dest;
		int32_t L_4 = V_1;
		ConstrainedActionInvoker1< int32_t >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_5, (void*)L_3, L_4);
		Il2CppFullySharedGenericAny* L_6 = ___0_dest;
		uint8_t* L_8;
		L_8 = ConstrainedFuncInvoker1< uint8_t*, int32_t >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 3), L_7, (void*)L_6, 0);
		void* L_9;
		L_9 = il2cpp_codegen_unsafe_cast(L_8);
		V_2 = (uint8_t*)L_9;
		Il2CppFullySharedGenericAny* L_10 = ___0_dest;
		int32_t L_12;
		L_12 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 4), L_11, (void*)L_10);
		V_3 = L_12;
		uint8_t* L_13 = V_0;
		int32_t L_14 = V_1;
		uint8_t* L_15 = V_2;
		int32_t L_16 = V_3;
		int32_t L_17;
		L_17 = Unicode_Utf8ToUtf8_m201605C57016378B046C4778E4CE25B2A2A44702(L_13, L_14, L_15, (&V_4), L_16, NULL);
		Il2CppFullySharedGenericAny* L_18 = ___0_dest;
		int32_t L_19 = V_4;
		ConstrainedActionInvoker1< int32_t >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_20, (void*)L_18, L_19);
		return L_17;
	}
}
IL2CPP_EXTERN_C  int32_t BlobString_CopyTo_TisIl2CppFullySharedGenericAny_m1D26A6AE8A4670B9CDFAB759A10426206BE05973_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericAny* ___0_dest, const RuntimeMethod* method)
{
	BlobString_t059A4022514441B9F0A46FC1B931579200DFFD92* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BlobString_t059A4022514441B9F0A46FC1B931579200DFFD92*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = BlobString_CopyTo_TisIl2CppFullySharedGenericAny_m1D26A6AE8A4670B9CDFAB759A10426206BE05973(_thisAdjusted, ___0_dest, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlobStringExtensions_AllocateString_TisIl2CppFullySharedGenericAny_mE5B659BE5F0C763671AD5CBDEB7D880A890DE591_gshared (BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* ___0_builder, BlobString_t059A4022514441B9F0A46FC1B931579200DFFD92* ___1_blobStr, Il2CppFullySharedGenericAny* ___2_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlobBuilderArray_1_GetUnsafePtr_mC894A9506A69AE0041E008C9BDEC6DB0B732FE22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlobBuilder_Allocate_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86211515B461EE89BA269987A6A5C659AF0F494E_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	void* L_1 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_4 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	int32_t V_0 = 0;
	uint8_t* V_1 = NULL;
	BlobBuilderArray_1_t5B3DC5242B2D9A248557AE9E6482FAAADCF8C152 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Il2CppFullySharedGenericAny* L_0 = ___2_value;
		int32_t L_2;
		L_2 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_1, (void*)L_0);
		V_0 = L_2;
		Il2CppFullySharedGenericAny* L_3 = ___2_value;
		uint8_t* L_5;
		L_5 = ConstrainedFuncInvoker1< uint8_t*, int32_t >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 3), L_4, (void*)L_3, 0);
		void* L_6;
		L_6 = il2cpp_codegen_unsafe_cast(L_5);
		V_1 = (uint8_t*)L_6;
		BlobBuilder_t3C96B3CAFE7B845BDB035B13F13978C5080A5E51* L_7 = ___0_builder;
		BlobString_t059A4022514441B9F0A46FC1B931579200DFFD92* L_8 = ___1_blobStr;
		BlobArray_1_t112C49ADFEB7465DC55221B4D8E6C721002D4D16* L_9 = (BlobArray_1_t112C49ADFEB7465DC55221B4D8E6C721002D4D16*)(&L_8->___Data);
		int32_t L_10 = V_0;
		BlobBuilderArray_1_t5B3DC5242B2D9A248557AE9E6482FAAADCF8C152 L_11;
		L_11 = BlobBuilder_Allocate_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86211515B461EE89BA269987A6A5C659AF0F494E(L_7, L_9, ((int32_t)il2cpp_codegen_add(L_10, 1)), BlobBuilder_Allocate_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m86211515B461EE89BA269987A6A5C659AF0F494E_RuntimeMethod_var);
		V_2 = L_11;
		void* L_12;
		L_12 = BlobBuilderArray_1_GetUnsafePtr_mC894A9506A69AE0041E008C9BDEC6DB0B732FE22_inline((&V_2), BlobBuilderArray_1_GetUnsafePtr_mC894A9506A69AE0041E008C9BDEC6DB0B732FE22_RuntimeMethod_var);
		uint8_t* L_13 = V_1;
		int32_t L_14 = V_0;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177(L_12, (void*)L_13, ((int64_t)((int32_t)il2cpp_codegen_add(L_14, 1))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* BlockAllocator_Allocate_TisIl2CppFullySharedGenericStruct_mD65B063953A2C3BD4D077C0739D2DAB152A38339_gshared (BlockAllocator_tE609150FFA2B257EBBBEEEFDF795FB7073A4E7AE* __this, int32_t ___0_items, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0 = ___0_items;
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_2;
		L_2 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		uint8_t* L_3;
		L_3 = BlockAllocator_Allocate_m658C66EFC9B1D9F239C3969DE1C8BE7CD74DAC56(__this, ((int32_t)il2cpp_codegen_multiply(L_0, L_1)), L_2, NULL);
		return (Il2CppFullySharedGenericStruct*)(L_3);
	}
}
IL2CPP_EXTERN_C  Il2CppFullySharedGenericStruct* BlockAllocator_Allocate_TisIl2CppFullySharedGenericStruct_mD65B063953A2C3BD4D077C0739D2DAB152A38339_AdjustorThunk (RuntimeObject* __this, int32_t ___0_items, const RuntimeMethod* method)
{
	BlockAllocator_tE609150FFA2B257EBBBEEEFDF795FB7073A4E7AE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BlockAllocator_tE609150FFA2B257EBBBEEEFDF795FB7073A4E7AE*>(__this + _offset);
	Il2CppFullySharedGenericStruct* _returnValue;
	_returnValue = BlockAllocator_Allocate_TisIl2CppFullySharedGenericStruct_mD65B063953A2C3BD4D077C0739D2DAB152A38339(_thisAdjusted, ___0_items, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* BlockAllocator_Construct_TisIl2CppFullySharedGenericStruct_m763625A659D21E75C7BB3EE3C33F02FD0905F8BE_gshared (BlockAllocator_tE609150FFA2B257EBBBEEEFDF795FB7073A4E7AE* __this, Il2CppFullySharedGenericStruct* ___0_src, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		Il2CppFullySharedGenericStruct* L_2 = ___0_src;
		uint8_t* L_3;
		L_3 = BlockAllocator_Construct_m19308FE9D6B334CF21ACBD1DA82453D418EEBCE6(__this, L_0, L_1, (void*)L_2, NULL);
		return (Il2CppFullySharedGenericStruct*)(L_3);
	}
}
IL2CPP_EXTERN_C  Il2CppFullySharedGenericStruct* BlockAllocator_Construct_TisIl2CppFullySharedGenericStruct_m763625A659D21E75C7BB3EE3C33F02FD0905F8BE_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct* ___0_src, const RuntimeMethod* method)
{
	BlockAllocator_tE609150FFA2B257EBBBEEEFDF795FB7073A4E7AE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BlockAllocator_tE609150FFA2B257EBBBEEEFDF795FB7073A4E7AE*>(__this + _offset);
	Il2CppFullySharedGenericStruct* _returnValue;
	_returnValue = BlockAllocator_Construct_TisIl2CppFullySharedGenericStruct_m763625A659D21E75C7BB3EE3C33F02FD0905F8BE(_thisAdjusted, ___0_src, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D BuddyAllocator_AllocateRange_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m62E7059E0A70F6E4678A17960D10526ECB43125E_gshared (int32_t ___0_length, int32_t* ___1_dataSize, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		int32_t* L_0 = ___1_dataSize;
		int32_t* L_1 = ___1_dataSize;
		int32_t L_2 = *((int32_t*)L_1);
		int32_t L_3;
		L_3 = UnsafeUtility_AlignOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m274F833CD001C63E56A22D8F42C76CE8C6CC39DF(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_4;
		L_4 = BuddyAllocator_AlignForward_m91CB70C4C1EF7525861F09D940734D5F28CE948E(L_2, L_3, NULL);
		*((int32_t*)L_0) = (int32_t)L_4;
		int32_t* L_5 = ___1_dataSize;
		int32_t L_6 = *((int32_t*)L_5);
		int32_t L_7 = ___0_length;
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_8;
		memset((&L_8), 0, sizeof(L_8));
		ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477((&L_8), L_6, L_7, ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477_RuntimeMethod_var);
		int32_t* L_9 = ___1_dataSize;
		int32_t* L_10 = ___1_dataSize;
		int32_t L_11 = *((int32_t*)L_10);
		int32_t L_12 = ___0_length;
		int32_t L_13;
		L_13 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		*((int32_t*)L_9) = (int32_t)((int32_t)il2cpp_codegen_add(L_11, ((int32_t)il2cpp_codegen_multiply(L_12, L_13))));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D BuddyAllocator_AllocateRange_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8686F640C741E1DD106A1143CE32DDDFEF8BE3D1_gshared (int32_t ___0_length, int32_t* ___1_dataSize, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		int32_t* L_0 = ___1_dataSize;
		int32_t* L_1 = ___1_dataSize;
		int32_t L_2 = *((int32_t*)L_1);
		int32_t L_3;
		L_3 = UnsafeUtility_AlignOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8127223B00E08567EC09EF1D992F89C74F248AB0(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_4;
		L_4 = BuddyAllocator_AlignForward_m91CB70C4C1EF7525861F09D940734D5F28CE948E(L_2, L_3, NULL);
		*((int32_t*)L_0) = (int32_t)L_4;
		int32_t* L_5 = ___1_dataSize;
		int32_t L_6 = *((int32_t*)L_5);
		int32_t L_7 = ___0_length;
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_8;
		memset((&L_8), 0, sizeof(L_8));
		ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477((&L_8), L_6, L_7, ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477_RuntimeMethod_var);
		int32_t* L_9 = ___1_dataSize;
		int32_t* L_10 = ___1_dataSize;
		int32_t L_11 = *((int32_t*)L_10);
		int32_t L_12 = ___0_length;
		int32_t L_13;
		L_13 = UnsafeUtility_SizeOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6C198B51ACD7B8EC62D5E0E75433C12BE9D65A58_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		*((int32_t*)L_9) = (int32_t)((int32_t)il2cpp_codegen_add(L_11, ((int32_t)il2cpp_codegen_multiply(L_12, L_13))));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D BuddyAllocator_AllocateRange_TisIl2CppFullySharedGenericStruct_m4185EDFE641B55BCD995908A4D2E69571C464694_gshared (int32_t ___0_length, int32_t* ___1_dataSize, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		int32_t* L_0 = ___1_dataSize;
		int32_t* L_1 = ___1_dataSize;
		int32_t L_2 = *((int32_t*)L_1);
		int32_t L_3;
		L_3 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_4;
		L_4 = BuddyAllocator_AlignForward_m91CB70C4C1EF7525861F09D940734D5F28CE948E(L_2, L_3, NULL);
		*((int32_t*)L_0) = (int32_t)L_4;
		int32_t* L_5 = ___1_dataSize;
		int32_t L_6 = *((int32_t*)L_5);
		int32_t L_7 = ___0_length;
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_8;
		memset((&L_8), 0, sizeof(L_8));
		ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477((&L_8), L_6, L_7, ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477_RuntimeMethod_var);
		int32_t* L_9 = ___1_dataSize;
		int32_t* L_10 = ___1_dataSize;
		int32_t L_11 = *((int32_t*)L_10);
		int32_t L_12 = ___0_length;
		int32_t L_13;
		L_13 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		*((int32_t*)L_9) = (int32_t)((int32_t)il2cpp_codegen_add(L_11, ((int32_t)il2cpp_codegen_multiply(L_12, L_13))));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C BuddyAllocator_GetNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF34160C9BD8BE094015670C76DC9D83F6BB30258_gshared (BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB* __this, int32_t ___0_offset, int32_t ___1_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		void* L_0 = __this->___m_Data;
		int32_t L_1 = ___0_offset;
		void* L_2;
		L_2 = BuddyAllocator_PtrAdd_m71AE1A734C306F6E5BE090A52FF71F5FD43D9651(L_0, L_1, NULL);
		int32_t L_3 = ___1_length;
		int32_t L_4 = __this->___m_Allocator;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_5;
		L_5 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550(L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_5;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C BuddyAllocator_GetNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF34160C9BD8BE094015670C76DC9D83F6BB30258_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, int32_t ___1_length, const RuntimeMethod* method)
{
	BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB*>(__this + _offset);
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C _returnValue;
	_returnValue = BuddyAllocator_GetNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF34160C9BD8BE094015670C76DC9D83F6BB30258(_thisAdjusted, ___0_offset, ___1_length, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B BuddyAllocator_GetNativeArray_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m4E8A7180E641B7FBF7D890D898C951A84B661CC1_gshared (BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB* __this, int32_t ___0_offset, int32_t ___1_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		void* L_0 = __this->___m_Data;
		int32_t L_1 = ___0_offset;
		void* L_2;
		L_2 = BuddyAllocator_PtrAdd_m71AE1A734C306F6E5BE090A52FF71F5FD43D9651(L_0, L_1, NULL);
		int32_t L_3 = ___1_length;
		int32_t L_4 = __this->___m_Allocator;
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B L_5;
		L_5 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6040A2644049EE10F18319F7950279CDC50BF2AC(L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_5;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B BuddyAllocator_GetNativeArray_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m4E8A7180E641B7FBF7D890D898C951A84B661CC1_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, int32_t ___1_length, const RuntimeMethod* method)
{
	BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB*>(__this + _offset);
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B _returnValue;
	_returnValue = BuddyAllocator_GetNativeArray_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m4E8A7180E641B7FBF7D890D898C951A84B661CC1(_thisAdjusted, ___0_offset, ___1_length, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 BuddyAllocator_GetNativeArray_TisIl2CppFullySharedGenericStruct_m22429A21546FE501A3CD98D54A3CAF8DECE230E2_gshared (BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB* __this, int32_t ___0_offset, int32_t ___1_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		void* L_0 = __this->___m_Data;
		int32_t L_1 = ___0_offset;
		void* L_2;
		L_2 = BuddyAllocator_PtrAdd_m71AE1A734C306F6E5BE090A52FF71F5FD43D9651(L_0, L_1, NULL);
		int32_t L_3 = ___1_length;
		int32_t L_4 = __this->___m_Allocator;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_5;
		L_5 = ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_5;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 BuddyAllocator_GetNativeArray_TisIl2CppFullySharedGenericStruct_m22429A21546FE501A3CD98D54A3CAF8DECE230E2_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, int32_t ___1_length, const RuntimeMethod* method)
{
	BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BuddyAllocator_t0AFAD4299AE9CB75AFEAD5D24CB799BAB079C7EB*>(__this + _offset);
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 _returnValue;
	_returnValue = BuddyAllocator_GetNativeArray_TisIl2CppFullySharedGenericStruct_m22429A21546FE501A3CD98D54A3CAF8DECE230E2(_thisAdjusted, ___0_offset, ___1_length, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisEnumerator_t37839615D82C9BDB7D4A9DC4A5D719BBF9CF423D_m09E6A24C114F8D936CD0E04CCF698BF498F029C7_gshared (Enumerator_t37839615D82C9BDB7D4A9DC4A5D719BBF9CF423D* ___0_destination, Enumerator_t37839615D82C9BDB7D4A9DC4A5D719BBF9CF423D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Enumerator_t37839615D82C9BDB7D4A9DC4A5D719BBF9CF423D* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Enumerator_t37839615D82C9BDB7D4A9DC4A5D719BBF9CF423D* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Enumerator_t37839615D82C9BDB7D4A9DC4A5D719BBF9CF423D>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnityObjectRef_1_tBDC2904A7324F2A71AB50EBABF5FA731EF2FA0C6_mE26A636AEA880EE5EED86365FCA547DD5E9EECC8_gshared (UnityObjectRef_1_tBDC2904A7324F2A71AB50EBABF5FA731EF2FA0C6* ___0_destination, UnityObjectRef_1_tBDC2904A7324F2A71AB50EBABF5FA731EF2FA0C6* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		UnityObjectRef_1_tBDC2904A7324F2A71AB50EBABF5FA731EF2FA0C6* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		UnityObjectRef_1_tBDC2904A7324F2A71AB50EBABF5FA731EF2FA0C6* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<UnityObjectRef_1_tBDC2904A7324F2A71AB50EBABF5FA731EF2FA0C6>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t769331BED675661167C96D796BC01151B80BCF83_m26C035D32C582897E6CB98E0800742D6E3CA17DC_gshared (UnsafeList_1_t769331BED675661167C96D796BC01151B80BCF83* ___0_destination, UnsafeList_1_t769331BED675661167C96D796BC01151B80BCF83* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		UnsafeList_1_t769331BED675661167C96D796BC01151B80BCF83* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		UnsafeList_1_t769331BED675661167C96D796BC01151B80BCF83* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<UnsafeList_1_t769331BED675661167C96D796BC01151B80BCF83>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_tC8912F7F078006BA1573ED1A2596ADC7D193B050_m824055F8D4E7831DBCE90A34014895964E8DDB81_gshared (UnsafeList_1_tC8912F7F078006BA1573ED1A2596ADC7D193B050* ___0_destination, UnsafeList_1_tC8912F7F078006BA1573ED1A2596ADC7D193B050* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		UnsafeList_1_tC8912F7F078006BA1573ED1A2596ADC7D193B050* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		UnsafeList_1_tC8912F7F078006BA1573ED1A2596ADC7D193B050* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<UnsafeList_1_tC8912F7F078006BA1573ED1A2596ADC7D193B050>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m31B03CF22D0E106887FFB49A9FD2BEC54BEB659C_gshared (UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* ___0_destination, UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t397F41512917228ECAF62EA4D11C9E3FB7F0697C_m37DDC375F7B3444C9FB5D4258F55DFA6931DD965_gshared (UnsafeList_1_t397F41512917228ECAF62EA4D11C9E3FB7F0697C* ___0_destination, UnsafeList_1_t397F41512917228ECAF62EA4D11C9E3FB7F0697C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		UnsafeList_1_t397F41512917228ECAF62EA4D11C9E3FB7F0697C* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		UnsafeList_1_t397F41512917228ECAF62EA4D11C9E3FB7F0697C* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<UnsafeList_1_t397F41512917228ECAF62EA4D11C9E3FB7F0697C>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_tC512AB26A525DF3622FBF1917719AEBFF48AAB27_mA63016ED280364EAFD980D645B675D84DE85CA19_gshared (UnsafeList_1_tC512AB26A525DF3622FBF1917719AEBFF48AAB27* ___0_destination, UnsafeList_1_tC512AB26A525DF3622FBF1917719AEBFF48AAB27* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		UnsafeList_1_tC512AB26A525DF3622FBF1917719AEBFF48AAB27* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		UnsafeList_1_tC512AB26A525DF3622FBF1917719AEBFF48AAB27* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<UnsafeList_1_tC512AB26A525DF3622FBF1917719AEBFF48AAB27>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_tEC05B902270714B5B358D35A42E55F8EBB2B1665_m12EDE716234EA7B5FAB80E38167C4C23BEDE4005_gshared (UnsafeList_1_tEC05B902270714B5B358D35A42E55F8EBB2B1665* ___0_destination, UnsafeList_1_tEC05B902270714B5B358D35A42E55F8EBB2B1665* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		UnsafeList_1_tEC05B902270714B5B358D35A42E55F8EBB2B1665* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		UnsafeList_1_tEC05B902270714B5B358D35A42E55F8EBB2B1665* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<UnsafeList_1_tEC05B902270714B5B358D35A42E55F8EBB2B1665>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisValueTuple_2_t7750C62AD4EA55033C68DC92A8665D9651757E31_mF81F4AC44DBA680090966B2E89DB951C43EB178F_gshared (ValueTuple_2_t7750C62AD4EA55033C68DC92A8665D9651757E31* ___0_destination, ValueTuple_2_t7750C62AD4EA55033C68DC92A8665D9651757E31* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ValueTuple_2_t7750C62AD4EA55033C68DC92A8665D9651757E31* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ValueTuple_2_t7750C62AD4EA55033C68DC92A8665D9651757E31* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ValueTuple_2_t7750C62AD4EA55033C68DC92A8665D9651757E31>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisValueTuple_2_t4AC646C9C23C301CF4A194630005998BC4D1619F_m91762A84AC7693E7CD955E9BB5F2DFF5D2A65413_gshared (ValueTuple_2_t4AC646C9C23C301CF4A194630005998BC4D1619F* ___0_destination, ValueTuple_2_t4AC646C9C23C301CF4A194630005998BC4D1619F* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ValueTuple_2_t4AC646C9C23C301CF4A194630005998BC4D1619F* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ValueTuple_2_t4AC646C9C23C301CF4A194630005998BC4D1619F* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ValueTuple_2_t4AC646C9C23C301CF4A194630005998BC4D1619F>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisAdditionalEntitiesBakingData_t16B67AE176CF0186E6E62B375C8B59BFB902D4E1_mE3296A47D09F3EF42FDBE6366F0EFE9B8B8D716B_gshared (AdditionalEntitiesBakingData_t16B67AE176CF0186E6E62B375C8B59BFB902D4E1* ___0_destination, AdditionalEntitiesBakingData_t16B67AE176CF0186E6E62B375C8B59BFB902D4E1* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		AdditionalEntitiesBakingData_t16B67AE176CF0186E6E62B375C8B59BFB902D4E1* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		AdditionalEntitiesBakingData_t16B67AE176CF0186E6E62B375C8B59BFB902D4E1* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<AdditionalEntitiesBakingData_t16B67AE176CF0186E6E62B375C8B59BFB902D4E1>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisAdditionalEntityParent_tAE181BBE81275FA5C723368D022C27195FAC1D3E_m4320EA7312165DBC8C28DCC0819922AB9E09737C_gshared (AdditionalEntityParent_tAE181BBE81275FA5C723368D022C27195FAC1D3E* ___0_destination, AdditionalEntityParent_tAE181BBE81275FA5C723368D022C27195FAC1D3E* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		AdditionalEntityParent_tAE181BBE81275FA5C723368D022C27195FAC1D3E* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		AdditionalEntityParent_tAE181BBE81275FA5C723368D022C27195FAC1D3E* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<AdditionalEntityParent_tAE181BBE81275FA5C723368D022C27195FAC1D3E>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5_mFD64A6E6AB9AC81D394489F4DC79DE6C54611199_gshared (ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5* ___0_destination, ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ArchetypeChunk_tF9C2266ECFAB3A9C58EADE74121F80C845F0CCC5>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisArchetypePropertyOverride_t1CBD7473E378B647BE981355D2964B81F92150CB_mCAEFF90E62CBB90BCAC790AA5C54C3E4DD51E3DD_gshared (ArchetypePropertyOverride_t1CBD7473E378B647BE981355D2964B81F92150CB* ___0_destination, ArchetypePropertyOverride_t1CBD7473E378B647BE981355D2964B81F92150CB* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ArchetypePropertyOverride_t1CBD7473E378B647BE981355D2964B81F92150CB* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ArchetypePropertyOverride_t1CBD7473E378B647BE981355D2964B81F92150CB* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ArchetypePropertyOverride_t1CBD7473E378B647BE981355D2964B81F92150CB>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisAspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50_mC01FBD6EAFE8897CF380AC1759FC30EC30202178_gshared (AspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50* ___0_destination, AspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		AspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		AspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<AspectType_t6A9CA46F1F278FED7D2104D35AB5D472E6F8DB50>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisAttachmentDescriptor_tBAC9B26B50BB0838C5C0CC22BB296F9DFF41276E_mE722009CF3369F14C5504F191D0EA30479F00E86_gshared (AttachmentDescriptor_tBAC9B26B50BB0838C5C0CC22BB296F9DFF41276E* ___0_destination, AttachmentDescriptor_tBAC9B26B50BB0838C5C0CC22BB296F9DFF41276E* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		AttachmentDescriptor_tBAC9B26B50BB0838C5C0CC22BB296F9DFF41276E* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		AttachmentDescriptor_tBAC9B26B50BB0838C5C0CC22BB296F9DFF41276E* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<AttachmentDescriptor_tBAC9B26B50BB0838C5C0CC22BB296F9DFF41276E>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBRGRenderMeshArray_t195C9BD91929A15832922FD9D195021199DB8FD9_m25F60159BB55410CED2478FEF78468C208AA2BE1_gshared (BRGRenderMeshArray_t195C9BD91929A15832922FD9D195021199DB8FD9* ___0_destination, BRGRenderMeshArray_t195C9BD91929A15832922FD9D195021199DB8FD9* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		BRGRenderMeshArray_t195C9BD91929A15832922FD9D195021199DB8FD9* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		BRGRenderMeshArray_t195C9BD91929A15832922FD9D195021199DB8FD9* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<BRGRenderMeshArray_t195C9BD91929A15832922FD9D195021199DB8FD9>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7_m5505016ED42AF30E5A05B5BD95C832D6E222D802_gshared (BakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7* ___0_destination, BakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		BakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		BakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<BakerState_tBC848FEE87649807B5BE06ED28CA889DEB5059C7>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBatchCreateInfo_t15C4620EEBE83EE2A60F4B3A6141A82942786EB2_m57631B99AC99E24C2D82794C45AE9BB9F50A417E_gshared (BatchCreateInfo_t15C4620EEBE83EE2A60F4B3A6141A82942786EB2* ___0_destination, BatchCreateInfo_t15C4620EEBE83EE2A60F4B3A6141A82942786EB2* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		BatchCreateInfo_t15C4620EEBE83EE2A60F4B3A6141A82942786EB2* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		BatchCreateInfo_t15C4620EEBE83EE2A60F4B3A6141A82942786EB2* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<BatchCreateInfo_t15C4620EEBE83EE2A60F4B3A6141A82942786EB2>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m9074142CF2F0828232AFEBB926F490D33E285B9B_gshared (BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* ___0_destination, BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBatchFilterSettings_t24CAFF037E8C667ABC0B23D55D6CC7125947CDE2_m90A8F3D40F1595FC446FA5C28ECAA9B81011051B_gshared (BatchFilterSettings_t24CAFF037E8C667ABC0B23D55D6CC7125947CDE2* ___0_destination, BatchFilterSettings_t24CAFF037E8C667ABC0B23D55D6CC7125947CDE2* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		BatchFilterSettings_t24CAFF037E8C667ABC0B23D55D6CC7125947CDE2* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		BatchFilterSettings_t24CAFF037E8C667ABC0B23D55D6CC7125947CDE2* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<BatchFilterSettings_t24CAFF037E8C667ABC0B23D55D6CC7125947CDE2>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBatchInfo_tB688FB92123EA5763ADC1EC7914E64CBE88CD115_m623F96C9BF50F4C33C944BE739D591D13C836487_gshared (BatchInfo_tB688FB92123EA5763ADC1EC7914E64CBE88CD115* ___0_destination, BatchInfo_tB688FB92123EA5763ADC1EC7914E64CBE88CD115* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		BatchInfo_tB688FB92123EA5763ADC1EC7914E64CBE88CD115* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		BatchInfo_tB688FB92123EA5763ADC1EC7914E64CBE88CD115* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<BatchInfo_tB688FB92123EA5763ADC1EC7914E64CBE88CD115>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C_m8557E6B1B48B7EB426E6CCFA83223FDCB8F16135_gshared (BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C* ___0_destination, BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<BatchMaterialID_tF9E95833BB1C35A6D14D47CF4EC8A6EB7D15D65C>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBatchMaterialMeshSubMesh_t27466F10F34C75AB783307C2C6D83C84B08F52F2_m06D498B1154F420E83FAFB599AE48383C31FEFE9_gshared (BatchMaterialMeshSubMesh_t27466F10F34C75AB783307C2C6D83C84B08F52F2* ___0_destination, BatchMaterialMeshSubMesh_t27466F10F34C75AB783307C2C6D83C84B08F52F2* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		BatchMaterialMeshSubMesh_t27466F10F34C75AB783307C2C6D83C84B08F52F2* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		BatchMaterialMeshSubMesh_t27466F10F34C75AB783307C2C6D83C84B08F52F2* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<BatchMaterialMeshSubMesh_t27466F10F34C75AB783307C2C6D83C84B08F52F2>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0_m9EE961D328A463A3B89EBC9E2B20D70A09D560A9_gshared (BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0* ___0_destination, BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<BatchMeshID_t34167B7C1D0503C43A01A7BD213DFC367525D2A0>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBlendShapeWeight_t1C25C923D3E59C3027096C3A28F0B3BA31BBAF1E_m03D5B5B182CF7BC733052804F1935DC2000553F5_gshared (BlendShapeWeight_t1C25C923D3E59C3027096C3A28F0B3BA31BBAF1E* ___0_destination, BlendShapeWeight_t1C25C923D3E59C3027096C3A28F0B3BA31BBAF1E* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		BlendShapeWeight_t1C25C923D3E59C3027096C3A28F0B3BA31BBAF1E* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		BlendShapeWeight_t1C25C923D3E59C3027096C3A28F0B3BA31BBAF1E* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<BlendShapeWeight_t1C25C923D3E59C3027096C3A28F0B3BA31BBAF1E>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBlendWeightBufferIndex_tF8CF0F3336B71B632F5883DC51FCE4A9BACA6ACF_mAC6A8902624B048E2B2CC6C829D38761C47BE484_gshared (BlendWeightBufferIndex_tF8CF0F3336B71B632F5883DC51FCE4A9BACA6ACF* ___0_destination, BlendWeightBufferIndex_tF8CF0F3336B71B632F5883DC51FCE4A9BACA6ACF* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		BlendWeightBufferIndex_tF8CF0F3336B71B632F5883DC51FCE4A9BACA6ACF* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		BlendWeightBufferIndex_tF8CF0F3336B71B632F5883DC51FCE4A9BACA6ACF* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<BlendWeightBufferIndex_tF8CF0F3336B71B632F5883DC51FCE4A9BACA6ACF>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBlobAssetChange_t8D6DB4D327EEE644A836A013F47334D92A86D3BF_m9077277D8883FD2E5F1C35914E5687671E04EE0B_gshared (BlobAssetChange_t8D6DB4D327EEE644A836A013F47334D92A86D3BF* ___0_destination, BlobAssetChange_t8D6DB4D327EEE644A836A013F47334D92A86D3BF* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		BlobAssetChange_t8D6DB4D327EEE644A836A013F47334D92A86D3BF* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		BlobAssetChange_t8D6DB4D327EEE644A836A013F47334D92A86D3BF* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<BlobAssetChange_t8D6DB4D327EEE644A836A013F47334D92A86D3BF>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61_m9A2F7CC1076C0970CF5322DCF69DF848356AECB1_gshared (BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61* ___0_destination, BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<BlobAssetPtr_tC182EB799C9F1828CD9B90D00118B27E21BD4B61>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBlobAssetReferenceChange_t949678BF4BEE0AB09C05D43006BAEFB02BEE1311_m07C5692A5AC9900DBE4A97A7D64DC00A324FD11D_gshared (BlobAssetReferenceChange_t949678BF4BEE0AB09C05D43006BAEFB02BEE1311* ___0_destination, BlobAssetReferenceChange_t949678BF4BEE0AB09C05D43006BAEFB02BEE1311* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		BlobAssetReferenceChange_t949678BF4BEE0AB09C05D43006BAEFB02BEE1311* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		BlobAssetReferenceChange_t949678BF4BEE0AB09C05D43006BAEFB02BEE1311* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<BlobAssetReferenceChange_t949678BF4BEE0AB09C05D43006BAEFB02BEE1311>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998_mB99454F33CE449D17BB84D775AF29921A0F439E4_gshared (BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998* ___0_destination, BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<BlobAssetReferenceData_tF4066C18E41A2817A3C1144C8A2AE91A33894998>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBoneWeight1_t7649BFE1ACB15FE000C995A416EFF9F32C5EA55F_m9DB7230DD280D8D5B3EA032FD88BCFF7166B6AB4_gshared (BoneWeight1_t7649BFE1ACB15FE000C995A416EFF9F32C5EA55F* ___0_destination, BoneWeight1_t7649BFE1ACB15FE000C995A416EFF9F32C5EA55F* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		BoneWeight1_t7649BFE1ACB15FE000C995A416EFF9F32C5EA55F* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		BoneWeight1_t7649BFE1ACB15FE000C995A416EFF9F32C5EA55F* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<BoneWeight1_t7649BFE1ACB15FE000C995A416EFF9F32C5EA55F>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6C1A997DCFEFC3BA96EEB5E75FB8B54DF2D21198_gshared (bool* ___0_destination, bool* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		bool* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		bool* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<bool>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBoundingSphere_t2DDB3D1711A6920C0ECA9217D3E4E14AFF03C010_m795273AEE7A248BA5B241E561023F0456EF5DED1_gshared (BoundingSphere_t2DDB3D1711A6920C0ECA9217D3E4E14AFF03C010* ___0_destination, BoundingSphere_t2DDB3D1711A6920C0ECA9217D3E4E14AFF03C010* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		BoundingSphere_t2DDB3D1711A6920C0ECA9217D3E4E14AFF03C010* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		BoundingSphere_t2DDB3D1711A6920C0ECA9217D3E4E14AFF03C010* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<BoundingSphere_t2DDB3D1711A6920C0ECA9217D3E4E14AFF03C010>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBuiltinMaterialPropertyUnity_LightmapIndex_tB3FFBA44070A59D7CE3FE43E525EE67F62F7DD77_m78DEDDB317C173576316AF9D21BCF2620B428C97_gshared (BuiltinMaterialPropertyUnity_LightmapIndex_tB3FFBA44070A59D7CE3FE43E525EE67F62F7DD77* ___0_destination, BuiltinMaterialPropertyUnity_LightmapIndex_tB3FFBA44070A59D7CE3FE43E525EE67F62F7DD77* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		BuiltinMaterialPropertyUnity_LightmapIndex_tB3FFBA44070A59D7CE3FE43E525EE67F62F7DD77* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		BuiltinMaterialPropertyUnity_LightmapIndex_tB3FFBA44070A59D7CE3FE43E525EE67F62F7DD77* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<BuiltinMaterialPropertyUnity_LightmapIndex_tB3FFBA44070A59D7CE3FE43E525EE67F62F7DD77>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBuiltinMaterialPropertyUnity_LightmapST_tF3B17F024F3A80DEC0F7FA53C4B605A79202D14E_m80BF5E1C31CF501089F4A4341208A8E0219B01B5_gshared (BuiltinMaterialPropertyUnity_LightmapST_tF3B17F024F3A80DEC0F7FA53C4B605A79202D14E* ___0_destination, BuiltinMaterialPropertyUnity_LightmapST_tF3B17F024F3A80DEC0F7FA53C4B605A79202D14E* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		BuiltinMaterialPropertyUnity_LightmapST_tF3B17F024F3A80DEC0F7FA53C4B605A79202D14E* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		BuiltinMaterialPropertyUnity_LightmapST_tF3B17F024F3A80DEC0F7FA53C4B605A79202D14E* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<BuiltinMaterialPropertyUnity_LightmapST_tF3B17F024F3A80DEC0F7FA53C4B605A79202D14E>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBuiltinMaterialPropertyUnity_MatrixPreviousM_t7BFFD7B8FBDED6225F4420CA00AC33BC83E94BFE_mFC1F0C793118D2E4EEF0AACC23010FE5FD9EFF09_gshared (BuiltinMaterialPropertyUnity_MatrixPreviousM_t7BFFD7B8FBDED6225F4420CA00AC33BC83E94BFE* ___0_destination, BuiltinMaterialPropertyUnity_MatrixPreviousM_t7BFFD7B8FBDED6225F4420CA00AC33BC83E94BFE* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		BuiltinMaterialPropertyUnity_MatrixPreviousM_t7BFFD7B8FBDED6225F4420CA00AC33BC83E94BFE* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		BuiltinMaterialPropertyUnity_MatrixPreviousM_t7BFFD7B8FBDED6225F4420CA00AC33BC83E94BFE* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<BuiltinMaterialPropertyUnity_MatrixPreviousM_t7BFFD7B8FBDED6225F4420CA00AC33BC83E94BFE>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBuiltinMaterialPropertyUnity_SHCoefficients_t543B714FC53AE0D9CBF0586C8B9F5B6CE8F5EF73_mB8A3723F1A5170EF2222F53587648546021FCF98_gshared (BuiltinMaterialPropertyUnity_SHCoefficients_t543B714FC53AE0D9CBF0586C8B9F5B6CE8F5EF73* ___0_destination, BuiltinMaterialPropertyUnity_SHCoefficients_t543B714FC53AE0D9CBF0586C8B9F5B6CE8F5EF73* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		BuiltinMaterialPropertyUnity_SHCoefficients_t543B714FC53AE0D9CBF0586C8B9F5B6CE8F5EF73* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		BuiltinMaterialPropertyUnity_SHCoefficients_t543B714FC53AE0D9CBF0586C8B9F5B6CE8F5EF73* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<BuiltinMaterialPropertyUnity_SHCoefficients_t543B714FC53AE0D9CBF0586C8B9F5B6CE8F5EF73>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB1465EEEBE0A608FA51B29BC3F145F287AD04190_gshared (uint8_t* ___0_destination, uint8_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		uint8_t* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uint8_t* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<uint8_t>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m62AF071D7F91DFC9A4D8B847D6A4472B820B5446_gshared (Il2CppChar* ___0_destination, Il2CppChar* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Il2CppChar* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Il2CppChar* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Il2CppChar>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisChild_tCA0AD12FC56504F3D4A64E40855F54238020861E_m90358EDBD657F2A65A616BDA77F632448B5D5725_gshared (Child_tCA0AD12FC56504F3D4A64E40855F54238020861E* ___0_destination, Child_tCA0AD12FC56504F3D4A64E40855F54238020861E* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Child_tCA0AD12FC56504F3D4A64E40855F54238020861E* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Child_tCA0AD12FC56504F3D4A64E40855F54238020861E* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Child_tCA0AD12FC56504F3D4A64E40855F54238020861E>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisChunkHeader_t3B1ED99D4C2CC2A8EFF6F9CFB6656451BB420F03_m273DF7268E78506E51FB5277A7E5BD81A49F5DEF_gshared (ChunkHeader_t3B1ED99D4C2CC2A8EFF6F9CFB6656451BB420F03* ___0_destination, ChunkHeader_t3B1ED99D4C2CC2A8EFF6F9CFB6656451BB420F03* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ChunkHeader_t3B1ED99D4C2CC2A8EFF6F9CFB6656451BB420F03* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ChunkHeader_t3B1ED99D4C2CC2A8EFF6F9CFB6656451BB420F03* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ChunkHeader_t3B1ED99D4C2CC2A8EFF6F9CFB6656451BB420F03>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisChunkIndex_t932E9A325E198362B9521CAD777D34C98F26792A_m351CF1234D2F3B19A05BD8529848863B59AF10BE_gshared (ChunkIndex_t932E9A325E198362B9521CAD777D34C98F26792A* ___0_destination, ChunkIndex_t932E9A325E198362B9521CAD777D34C98F26792A* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ChunkIndex_t932E9A325E198362B9521CAD777D34C98F26792A* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ChunkIndex_t932E9A325E198362B9521CAD777D34C98F26792A* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ChunkIndex_t932E9A325E198362B9521CAD777D34C98F26792A>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisChunkProperty_tFE8800ADA52889512BD70B3843D4F2F505D33A81_mA775E601C5BAA7371503BC8ABA6D132E74A68F2F_gshared (ChunkProperty_tFE8800ADA52889512BD70B3843D4F2F505D33A81* ___0_destination, ChunkProperty_tFE8800ADA52889512BD70B3843D4F2F505D33A81* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ChunkProperty_tFE8800ADA52889512BD70B3843D4F2F505D33A81* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ChunkProperty_tFE8800ADA52889512BD70B3843D4F2F505D33A81* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ChunkProperty_tFE8800ADA52889512BD70B3843D4F2F505D33A81>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisChunkVisibilityItem_t220AAC5BD7372B13CC8A41E3604981CD47327E17_m6EA6953954689DCFAB56CCA29066E84FA58DE938_gshared (ChunkVisibilityItem_t220AAC5BD7372B13CC8A41E3604981CD47327E17* ___0_destination, ChunkVisibilityItem_t220AAC5BD7372B13CC8A41E3604981CD47327E17* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ChunkVisibilityItem_t220AAC5BD7372B13CC8A41E3604981CD47327E17* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ChunkVisibilityItem_t220AAC5BD7372B13CC8A41E3604981CD47327E17* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ChunkVisibilityItem_t220AAC5BD7372B13CC8A41E3604981CD47327E17>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisChunkWorldRenderBounds_t0DE3BB5E33AC5E26298EEB59F77F342AAC223D00_m1696F53F1DE467F53F839F91E604D996F63A31E3_gshared (ChunkWorldRenderBounds_t0DE3BB5E33AC5E26298EEB59F77F342AAC223D00* ___0_destination, ChunkWorldRenderBounds_t0DE3BB5E33AC5E26298EEB59F77F342AAC223D00* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ChunkWorldRenderBounds_t0DE3BB5E33AC5E26298EEB59F77F342AAC223D00* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ChunkWorldRenderBounds_t0DE3BB5E33AC5E26298EEB59F77F342AAC223D00* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ChunkWorldRenderBounds_t0DE3BB5E33AC5E26298EEB59F77F342AAC223D00>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m3B15D4D61932A340BAAA5BE6E8D419605D3692E6_gshared (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_destination, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_mA65CAF282F03FD4DB46666E2C44C22E3D0035A68_gshared (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___0_destination, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisCompanionLink_t2C6D134D2EB0678CF010E15832684060591FA368_m46F9D818622E706905CD0CA0580113322F78F774_gshared (CompanionLink_t2C6D134D2EB0678CF010E15832684060591FA368* ___0_destination, CompanionLink_t2C6D134D2EB0678CF010E15832684060591FA368* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		CompanionLink_t2C6D134D2EB0678CF010E15832684060591FA368* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		CompanionLink_t2C6D134D2EB0678CF010E15832684060591FA368* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<CompanionLink_t2C6D134D2EB0678CF010E15832684060591FA368>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D_m0BCD6F1057896314E4F1ED2F94590E58137DEDBA_gshared (ComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D* ___0_destination, ComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ComponentBakeTrigger_t5715FBD170C9CB8FBD7A2A96A58ECBF906166A7D>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA_mF20AF83583019BD94003804325D87F62516EA87D_gshared (ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA* ___0_destination, ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ComponentType_t0CB4E9723924AAC17CE8F38A0080018ED412DBDA>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB_m3536FE07206FB1E7BC9FD06CA1C453D868FD14DF_gshared (ComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB* ___0_destination, ComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ComponentTypeHash_t66905E573119387DC1A71DE80118E78E36537DDB>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisComponentTypeList_t8A43AFD2ABD042DD0F0FAA4F95F3FDA3A1D8C053_mC9440463B8228E66F1782AEF4966BD75B0B6373C_gshared (ComponentTypeList_t8A43AFD2ABD042DD0F0FAA4F95F3FDA3A1D8C053* ___0_destination, ComponentTypeList_t8A43AFD2ABD042DD0F0FAA4F95F3FDA3A1D8C053* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ComponentTypeList_t8A43AFD2ABD042DD0F0FAA4F95F3FDA3A1D8C053* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ComponentTypeList_t8A43AFD2ABD042DD0F0FAA4F95F3FDA3A1D8C053* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ComponentTypeList_t8A43AFD2ABD042DD0F0FAA4F95F3FDA3A1D8C053>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_m7B231E78B8FBBF3128AC7D5D9AA1EF250AB8BBB7_gshared (ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* ___0_destination, ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisContentArchiveId_t597D4859829AE27318BBF350B3B7FBDCF8FC7030_m8BE23AEA81D52C00FA650C675BF152DC50D940CB_gshared (ContentArchiveId_t597D4859829AE27318BBF350B3B7FBDCF8FC7030* ___0_destination, ContentArchiveId_t597D4859829AE27318BBF350B3B7FBDCF8FC7030* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ContentArchiveId_t597D4859829AE27318BBF350B3B7FBDCF8FC7030* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ContentArchiveId_t597D4859829AE27318BBF350B3B7FBDCF8FC7030* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ContentArchiveId_t597D4859829AE27318BBF350B3B7FBDCF8FC7030>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisContentFile_t2CF8D8FD3314B9FBF06311DB08DF84D55556386B_m9DBF28CA5778BC51AB0A2002034091079466A4A2_gshared (ContentFile_t2CF8D8FD3314B9FBF06311DB08DF84D55556386B* ___0_destination, ContentFile_t2CF8D8FD3314B9FBF06311DB08DF84D55556386B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ContentFile_t2CF8D8FD3314B9FBF06311DB08DF84D55556386B* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ContentFile_t2CF8D8FD3314B9FBF06311DB08DF84D55556386B* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ContentFile_t2CF8D8FD3314B9FBF06311DB08DF84D55556386B>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisContentFileId_t630F8A1A207C9248EE434BA833823A2D5C384FD7_mD49040CD4A5470A61B61DE40A83010E621DE6055_gshared (ContentFileId_t630F8A1A207C9248EE434BA833823A2D5C384FD7* ___0_destination, ContentFileId_t630F8A1A207C9248EE434BA833823A2D5C384FD7* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ContentFileId_t630F8A1A207C9248EE434BA833823A2D5C384FD7* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ContentFileId_t630F8A1A207C9248EE434BA833823A2D5C384FD7* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ContentFileId_t630F8A1A207C9248EE434BA833823A2D5C384FD7>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1_m747B7D7DC0AA466783F69D3676EC5EE854D08D52_gshared (ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* ___0_destination, ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisCopyClosingMeshJobData_t92845C1341A518A8D05CD9DCE53496BD70CF2044_m49C533FCD49E82DED6CE9BFF4EE71DBC632E91A0_gshared (CopyClosingMeshJobData_t92845C1341A518A8D05CD9DCE53496BD70CF2044* ___0_destination, CopyClosingMeshJobData_t92845C1341A518A8D05CD9DCE53496BD70CF2044* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		CopyClosingMeshJobData_t92845C1341A518A8D05CD9DCE53496BD70CF2044* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		CopyClosingMeshJobData_t92845C1341A518A8D05CD9DCE53496BD70CF2044* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<CopyClosingMeshJobData_t92845C1341A518A8D05CD9DCE53496BD70CF2044>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m9A4B5780CB8BC1ACD63C193EC68D5E217CDBAC80_gshared (CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* ___0_destination, CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisCullingSplitData_tCFA8EADD67BB0433DD4A1E9A32838187FE0B0B0E_m9C59D52260BA8C1DBBC9F6752C8E02860B09AA1E_gshared (CullingSplitData_tCFA8EADD67BB0433DD4A1E9A32838187FE0B0B0E* ___0_destination, CullingSplitData_tCFA8EADD67BB0433DD4A1E9A32838187FE0B0B0E* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		CullingSplitData_tCFA8EADD67BB0433DD4A1E9A32838187FE0B0B0E* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		CullingSplitData_tCFA8EADD67BB0433DD4A1E9A32838187FE0B0B0E* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<CullingSplitData_tCFA8EADD67BB0433DD4A1E9A32838187FE0B0B0E>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisDecalEntity_t8CAF09C65939503449C4138ADCDC4907196293FD_mC49612746C663EF46D693501EF707DA1C808F672_gshared (DecalEntity_t8CAF09C65939503449C4138ADCDC4907196293FD* ___0_destination, DecalEntity_t8CAF09C65939503449C4138ADCDC4907196293FD* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		DecalEntity_t8CAF09C65939503449C4138ADCDC4907196293FD* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		DecalEntity_t8CAF09C65939503449C4138ADCDC4907196293FD* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<DecalEntity_t8CAF09C65939503449C4138ADCDC4907196293FD>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisDecalSubDrawCall_t68CDD2E663F805776DE0281AB4FAEDC8B8D9EC49_mB020FE36A95248E17F02AFAD99294E33BE87EBB7_gshared (DecalSubDrawCall_t68CDD2E663F805776DE0281AB4FAEDC8B8D9EC49* ___0_destination, DecalSubDrawCall_t68CDD2E663F805776DE0281AB4FAEDC8B8D9EC49* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		DecalSubDrawCall_t68CDD2E663F805776DE0281AB4FAEDC8B8D9EC49* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		DecalSubDrawCall_t68CDD2E663F805776DE0281AB4FAEDC8B8D9EC49* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<DecalSubDrawCall_t68CDD2E663F805776DE0281AB4FAEDC8B8D9EC49>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisDeformedMeshIndex_tEBE2179D4DF3A39AC97BE4A9F245EE6749F89A0E_m6267029F48A20A27EFDFDF9F7C35AA86C6712E63_gshared (DeformedMeshIndex_tEBE2179D4DF3A39AC97BE4A9F245EE6749F89A0E* ___0_destination, DeformedMeshIndex_tEBE2179D4DF3A39AC97BE4A9F245EE6749F89A0E* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		DeformedMeshIndex_tEBE2179D4DF3A39AC97BE4A9F245EE6749F89A0E* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		DeformedMeshIndex_tEBE2179D4DF3A39AC97BE4A9F245EE6749F89A0E* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<DeformedMeshIndex_tEBE2179D4DF3A39AC97BE4A9F245EE6749F89A0E>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisDrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5_mDF1CDB2973A50B932ED2E72CC7A57E75C7FCAB54_gshared (DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* ___0_destination, DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisDrawCommandBin_t5539B12FCDB48E97B70D54E10FD761C65A739361_mC7362E47DCCB42D6702EA975D32415B57073EC4A_gshared (DrawCommandBin_t5539B12FCDB48E97B70D54E10FD761C65A739361* ___0_destination, DrawCommandBin_t5539B12FCDB48E97B70D54E10FD761C65A739361* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		DrawCommandBin_t5539B12FCDB48E97B70D54E10FD761C65A739361* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		DrawCommandBin_t5539B12FCDB48E97B70D54E10FD761C65A739361* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<DrawCommandBin_t5539B12FCDB48E97B70D54E10FD761C65A739361>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisDrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B_m8E9F22A93EB5FDCB6416BC623962EF31CDEE1F78_gshared (DrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B* ___0_destination, DrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		DrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		DrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<DrawCommandSettings_t440C7C31DCA003CEF9C02C4F91854A1DCD486D4B>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisDrawCommandStream_t0A2BEB33831D3F47F3A3E1CCA7359B89C0429D0A_m8B7DAE685B68AE5A6E39A88FB2696A79B4791278_gshared (DrawCommandStream_t0A2BEB33831D3F47F3A3E1CCA7359B89C0429D0A* ___0_destination, DrawCommandStream_t0A2BEB33831D3F47F3A3E1CCA7359B89C0429D0A* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		DrawCommandStream_t0A2BEB33831D3F47F3A3E1CCA7359B89C0429D0A* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		DrawCommandStream_t0A2BEB33831D3F47F3A3E1CCA7359B89C0429D0A* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<DrawCommandStream_t0A2BEB33831D3F47F3A3E1CCA7359B89C0429D0A>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisDrawCommandWorkItem_tF70FA79285F3CB53DDEBCF4BF0F3447F11A3F045_mD0FF51014031AE21FF8CC51393192C412B137CDA_gshared (DrawCommandWorkItem_tF70FA79285F3CB53DDEBCF4BF0F3447F11A3F045* ___0_destination, DrawCommandWorkItem_tF70FA79285F3CB53DDEBCF4BF0F3447F11A3F045* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		DrawCommandWorkItem_tF70FA79285F3CB53DDEBCF4BF0F3447F11A3F045* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		DrawCommandWorkItem_tF70FA79285F3CB53DDEBCF4BF0F3447F11A3F045* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<DrawCommandWorkItem_tF70FA79285F3CB53DDEBCF4BF0F3447F11A3F045>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisDuplicateEntityGuid_tFBE3EBCFAFF9D1BEAC504030BFE1EB798EFCBA92_mFEF8924CF51CE34975623F55F0E3B8F0CBAA17A5_gshared (DuplicateEntityGuid_tFBE3EBCFAFF9D1BEAC504030BFE1EB798EFCBA92* ___0_destination, DuplicateEntityGuid_tFBE3EBCFAFF9D1BEAC504030BFE1EB798EFCBA92* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		DuplicateEntityGuid_tFBE3EBCFAFF9D1BEAC504030BFE1EB798EFCBA92* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		DuplicateEntityGuid_tFBE3EBCFAFF9D1BEAC504030BFE1EB798EFCBA92* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<DuplicateEntityGuid_tFBE3EBCFAFF9D1BEAC504030BFE1EB798EFCBA92>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisEntitiesGraphicsChunkInfo_t5431C496DFC8278759A095EDCE820FE102382C57_mD2D0BFDC01CE696E08869432D45C4113ADCC0773_gshared (EntitiesGraphicsChunkInfo_t5431C496DFC8278759A095EDCE820FE102382C57* ___0_destination, EntitiesGraphicsChunkInfo_t5431C496DFC8278759A095EDCE820FE102382C57* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		EntitiesGraphicsChunkInfo_t5431C496DFC8278759A095EDCE820FE102382C57* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		EntitiesGraphicsChunkInfo_t5431C496DFC8278759A095EDCE820FE102382C57* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<EntitiesGraphicsChunkInfo_t5431C496DFC8278759A095EDCE820FE102382C57>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisEntity_t56176FC78C475061A82383D9E0CEE352C6C52ABD_m9A96D3097384189DCBEAE28F8081F0B1B038375D_gshared (Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* ___0_destination, Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Entity_t56176FC78C475061A82383D9E0CEE352C6C52ABD>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisEntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354_m3B7A994635719C7715C228649A7C72B0FD951EC5_gshared (EntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354* ___0_destination, EntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		EntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		EntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<EntityArchetype_tE1D293B55B4783642BB593531A57460AB7709354>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisEntityBatchInChunk_t59B2C040B5ABCCDF8F5EF73EA18CA2650526CD1C_m70FB3A59EF71C1827A792611D9A7841E1222FACE_gshared (EntityBatchInChunk_t59B2C040B5ABCCDF8F5EF73EA18CA2650526CD1C* ___0_destination, EntityBatchInChunk_t59B2C040B5ABCCDF8F5EF73EA18CA2650526CD1C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		EntityBatchInChunk_t59B2C040B5ABCCDF8F5EF73EA18CA2650526CD1C* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		EntityBatchInChunk_t59B2C040B5ABCCDF8F5EF73EA18CA2650526CD1C* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<EntityBatchInChunk_t59B2C040B5ABCCDF8F5EF73EA18CA2650526CD1C>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisEntityCommandBuffer_tFFB6458BC7FB90A6CF406831009EA1F9FC0CD008_m66FB49228DD838E36D93A99C26175F1B57ABA536_gshared (EntityCommandBuffer_tFFB6458BC7FB90A6CF406831009EA1F9FC0CD008* ___0_destination, EntityCommandBuffer_tFFB6458BC7FB90A6CF406831009EA1F9FC0CD008* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		EntityCommandBuffer_tFFB6458BC7FB90A6CF406831009EA1F9FC0CD008* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		EntityCommandBuffer_tFFB6458BC7FB90A6CF406831009EA1F9FC0CD008* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<EntityCommandBuffer_tFFB6458BC7FB90A6CF406831009EA1F9FC0CD008>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisEntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877_m16DE78387779D4771CE617A74A6A88A3DE9DC554_gshared (EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877* ___0_destination, EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<EntityGuid_tAB9B163B73754C5D863D5E88B8E5A1D239433877>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisEntityInChunk_t9C018862802ABC36E70290747CBFBF57FC0FC9FB_mD51DCAF128863348A985828483E27A0DE8A94B2F_gshared (EntityInChunk_t9C018862802ABC36E70290747CBFBF57FC0FC9FB* ___0_destination, EntityInChunk_t9C018862802ABC36E70290747CBFBF57FC0FC9FB* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		EntityInChunk_t9C018862802ABC36E70290747CBFBF57FC0FC9FB* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		EntityInChunk_t9C018862802ABC36E70290747CBFBF57FC0FC9FB* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<EntityInChunk_t9C018862802ABC36E70290747CBFBF57FC0FC9FB>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisEntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4_m60B27127C13EBFBEF83357351674A1AD09091243_gshared (EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4* ___0_destination, EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<EntityPrefabReference_tB1CCEB52D81E222455C57723C8942155529D87F4>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisEntityQuery_t23B7A11FAA475D860E94409BFD4CF7E4B337CF90_mD372A53451E3513498197D0BFD1125525B7C4813_gshared (EntityQuery_t23B7A11FAA475D860E94409BFD4CF7E4B337CF90* ___0_destination, EntityQuery_t23B7A11FAA475D860E94409BFD4CF7E4B337CF90* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		EntityQuery_t23B7A11FAA475D860E94409BFD4CF7E4B337CF90* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		EntityQuery_t23B7A11FAA475D860E94409BFD4CF7E4B337CF90* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<EntityQuery_t23B7A11FAA475D860E94409BFD4CF7E4B337CF90>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisEntityReferenceChange_tF42C10FF22614A67E5DB929CAE2011B58F569BAE_m36C8E884DDAC2A6A954DE17B7F9D6D703C2ABBF9_gshared (EntityReferenceChange_tF42C10FF22614A67E5DB929CAE2011B58F569BAE* ___0_destination, EntityReferenceChange_tF42C10FF22614A67E5DB929CAE2011B58F569BAE* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		EntityReferenceChange_tF42C10FF22614A67E5DB929CAE2011B58F569BAE* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		EntityReferenceChange_tF42C10FF22614A67E5DB929CAE2011B58F569BAE* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<EntityReferenceChange_tF42C10FF22614A67E5DB929CAE2011B58F569BAE>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisExternalEntityReference_tE59820343E2601A63B36BADC930E722D9238DC54_m64364ED739B90028DF305801B606CC0A42504C44_gshared (ExternalEntityReference_tE59820343E2601A63B36BADC930E722D9238DC54* ___0_destination, ExternalEntityReference_tE59820343E2601A63B36BADC930E722D9238DC54* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ExternalEntityReference_tE59820343E2601A63B36BADC930E722D9238DC54* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ExternalEntityReference_tE59820343E2601A63B36BADC930E722D9238DC54* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ExternalEntityReference_tE59820343E2601A63B36BADC930E722D9238DC54>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisFilteredArchetype_t01C3AC08A05A3462BEB416576B2850730C7D36A5_m9CABF6E56C9804324CAA61E859B0A6171DE67222_gshared (FilteredArchetype_t01C3AC08A05A3462BEB416576B2850730C7D36A5* ___0_destination, FilteredArchetype_t01C3AC08A05A3462BEB416576B2850730C7D36A5* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		FilteredArchetype_t01C3AC08A05A3462BEB416576B2850730C7D36A5* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		FilteredArchetype_t01C3AC08A05A3462BEB416576B2850730C7D36A5* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<FilteredArchetype_t01C3AC08A05A3462BEB416576B2850730C7D36A5>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisFixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E_m88366C383E0F7D411CF9D6D704A8C556B040A911_gshared (FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E* ___0_destination, FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<FixedString512Bytes_t0C425B0F2C07FEA1642C32BF8559116DF2BFF50E>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisFixedString64Bytes_t0F1B6FFAFD8C15898CD77D91A79AB36AA078E0A5_m1E85E73EC2F987434B6816973C73119659D084A1_gshared (FixedString64Bytes_t0F1B6FFAFD8C15898CD77D91A79AB36AA078E0A5* ___0_destination, FixedString64Bytes_t0F1B6FFAFD8C15898CD77D91A79AB36AA078E0A5* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		FixedString64Bytes_t0F1B6FFAFD8C15898CD77D91A79AB36AA078E0A5* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		FixedString64Bytes_t0F1B6FFAFD8C15898CD77D91A79AB36AA078E0A5* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<FixedString64Bytes_t0F1B6FFAFD8C15898CD77D91A79AB36AA078E0A5>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_m64A2E113137CB36C10E2E26EEBC8AF66DDCD1151_gshared (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* ___0_destination, GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C_m2CA00C03921B3C30B95A8129FDEA92912124ED5E_gshared (GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C* ___0_destination, GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGpuUploadOperation_t39F13CF397D975692B4BCE5E300604E3AB8CA152_mEE5F3F830AAD3561F1D1F13EA8C283BAC6A26BCA_gshared (GpuUploadOperation_t39F13CF397D975692B4BCE5E300604E3AB8CA152* ___0_destination, GpuUploadOperation_t39F13CF397D975692B4BCE5E300604E3AB8CA152* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		GpuUploadOperation_t39F13CF397D975692B4BCE5E300604E3AB8CA152* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		GpuUploadOperation_t39F13CF397D975692B4BCE5E300604E3AB8CA152* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<GpuUploadOperation_t39F13CF397D975692B4BCE5E300604E3AB8CA152>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGraphicsArchetype_t9F776CA17A337DB797D4F98638C296AC11D98A2B_m185DAF5220F6D6500D69270BC560D3E5F0426B38_gshared (GraphicsArchetype_t9F776CA17A337DB797D4F98638C296AC11D98A2B* ___0_destination, GraphicsArchetype_t9F776CA17A337DB797D4F98638C296AC11D98A2B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		GraphicsArchetype_t9F776CA17A337DB797D4F98638C296AC11D98A2B* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		GraphicsArchetype_t9F776CA17A337DB797D4F98638C296AC11D98A2B* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<GraphicsArchetype_t9F776CA17A337DB797D4F98638C296AC11D98A2B>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisHash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B_mDD9567632B50FB12048FB204F112409B38761089_gshared (Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B* ___0_destination, Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Hash128_t2EA8F45F10BC2DF40B0CE9AE04F222072EB1345B>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisHeapBlock_t44D3F86E0ED8F3C5FC9B70A056739AEBEA18640D_m944745A916D717D22701519EFAA23DA2547498F9_gshared (HeapBlock_t44D3F86E0ED8F3C5FC9B70A056739AEBEA18640D* ___0_destination, HeapBlock_t44D3F86E0ED8F3C5FC9B70A056739AEBEA18640D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		HeapBlock_t44D3F86E0ED8F3C5FC9B70A056739AEBEA18640D* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		HeapBlock_t44D3F86E0ED8F3C5FC9B70A056739AEBEA18640D* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<HeapBlock_t44D3F86E0ED8F3C5FC9B70A056739AEBEA18640D>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInclusiveRange_t1762A170B7A199C25DAC4CB39CB109710812A54D_m31148BC9E64E6998B9195D19EE3DC7309F795FF4_gshared (InclusiveRange_t1762A170B7A199C25DAC4CB39CB109710812A54D* ___0_destination, InclusiveRange_t1762A170B7A199C25DAC4CB39CB109710812A54D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		InclusiveRange_t1762A170B7A199C25DAC4CB39CB109710812A54D* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		InclusiveRange_t1762A170B7A199C25DAC4CB39CB109710812A54D* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<InclusiveRange_t1762A170B7A199C25DAC4CB39CB109710812A54D>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisIndexedInt_t24BCB89B541376CF44EFAC03B879082052E960F7_mC53160E39A14A0109B28077DBC11849BFF5F1B8E_gshared (IndexedInt_t24BCB89B541376CF44EFAC03B879082052E960F7* ___0_destination, IndexedInt_t24BCB89B541376CF44EFAC03B879082052E960F7* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		IndexedInt_t24BCB89B541376CF44EFAC03B879082052E960F7* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		IndexedInt_t24BCB89B541376CF44EFAC03B879082052E960F7* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<IndexedInt_t24BCB89B541376CF44EFAC03B879082052E960F7>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m29ECCE2E57C6E7FEB9E50A7F7C41878E79F45B31_gshared (int16_t* ___0_destination, int16_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		int16_t* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		int16_t* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<int16_t>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1CD5B4A82FDDB0C96C8ABC21339D0339688CEEAB_gshared (int32_t* ___0_destination, int32_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		int32_t* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		int32_t* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<int32_t>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m2F2ACB99CC1A9CA46487DC49524C0BB7FFD583FE_gshared (int32_t* ___0_destination, int32_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		int32_t* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		int32_t* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<int32_t>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mEEF2A60C3462458756768283DF2A7C3591A6A6E4_gshared (int64_t* ___0_destination, int64_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		int64_t* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		int64_t* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<int64_t>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisIntPtr_t_m607FE4CDDE559F9478814758617143FC6C667F3F_gshared (intptr_t* ___0_destination, intptr_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		intptr_t* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		intptr_t* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<intptr_t>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m4DF13B5C2D27E38BFD7112649345659B81B99988_gshared (JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* ___0_destination, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisKeyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0_mD270A88829255FAD924738A2EB8C0228529D6F05_gshared (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* ___0_destination, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisLODGroupWorldReferencePoint_t1C378B661E81968AF1118358C53D86DA215D7C7E_mAE14C846210BDA8D6E4B85D718BF5B2B846630ED_gshared (LODGroupWorldReferencePoint_t1C378B661E81968AF1118358C53D86DA215D7C7E* ___0_destination, LODGroupWorldReferencePoint_t1C378B661E81968AF1118358C53D86DA215D7C7E* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		LODGroupWorldReferencePoint_t1C378B661E81968AF1118358C53D86DA215D7C7E* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		LODGroupWorldReferencePoint_t1C378B661E81968AF1118358C53D86DA215D7C7E* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<LODGroupWorldReferencePoint_t1C378B661E81968AF1118358C53D86DA215D7C7E>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisLODRange_t67EDD8C5D2708AAA1E7012C5FD21E15B8A9C2F43_m51726AA34F5D80513270564B7804433CD7550893_gshared (LODRange_t67EDD8C5D2708AAA1E7012C5FD21E15B8A9C2F43* ___0_destination, LODRange_t67EDD8C5D2708AAA1E7012C5FD21E15B8A9C2F43* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		LODRange_t67EDD8C5D2708AAA1E7012C5FD21E15B8A9C2F43* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		LODRange_t67EDD8C5D2708AAA1E7012C5FD21E15B8A9C2F43* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<LODRange_t67EDD8C5D2708AAA1E7012C5FD21E15B8A9C2F43>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisLODWorldReferencePoint_t21EAD8082967CB50E841485D0DAFBE001E3F4E4D_m1C49BEB976F273902D3204B6D54619192D838106_gshared (LODWorldReferencePoint_t21EAD8082967CB50E841485D0DAFBE001E3F4E4D* ___0_destination, LODWorldReferencePoint_t21EAD8082967CB50E841485D0DAFBE001E3F4E4D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		LODWorldReferencePoint_t21EAD8082967CB50E841485D0DAFBE001E3F4E4D* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		LODWorldReferencePoint_t21EAD8082967CB50E841485D0DAFBE001E3F4E4D* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<LODWorldReferencePoint_t21EAD8082967CB50E841485D0DAFBE001E3F4E4D>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mFAAF3AF84767549D3DF70C7D527FDD5E42EAF197_gshared (LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* ___0_destination, LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisLinkedEntityGroup_t97546F2DE9AF4E5A8E97F4E215FCCA6395D0EB38_m306B1D5EFF20A21AE19F0A23DF16C51E00BA69C2_gshared (LinkedEntityGroup_t97546F2DE9AF4E5A8E97F4E215FCCA6395D0EB38* ___0_destination, LinkedEntityGroup_t97546F2DE9AF4E5A8E97F4E215FCCA6395D0EB38* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		LinkedEntityGroup_t97546F2DE9AF4E5A8E97F4E215FCCA6395D0EB38* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		LinkedEntityGroup_t97546F2DE9AF4E5A8E97F4E215FCCA6395D0EB38* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<LinkedEntityGroup_t97546F2DE9AF4E5A8E97F4E215FCCA6395D0EB38>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisLinkedEntityGroupBakingData_t614E70399B343A51B06D4BF1BF0508D2C4E99FAD_m7106EBFF1B7A17EA7ECFBE04FBA050C43C31BDCA_gshared (LinkedEntityGroupBakingData_t614E70399B343A51B06D4BF1BF0508D2C4E99FAD* ___0_destination, LinkedEntityGroupBakingData_t614E70399B343A51B06D4BF1BF0508D2C4E99FAD* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		LinkedEntityGroupBakingData_t614E70399B343A51B06D4BF1BF0508D2C4E99FAD* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		LinkedEntityGroupBakingData_t614E70399B343A51B06D4BF1BF0508D2C4E99FAD* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<LinkedEntityGroupBakingData_t614E70399B343A51B06D4BF1BF0508D2C4E99FAD>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisLinkedEntityGroupChange_t55954CE432F5A1206C8D0F998304A45ADEA1C842_m62E7DEC725150649939CEE85D426FC64CAF2DAF7_gshared (LinkedEntityGroupChange_t55954CE432F5A1206C8D0F998304A45ADEA1C842* ___0_destination, LinkedEntityGroupChange_t55954CE432F5A1206C8D0F998304A45ADEA1C842* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		LinkedEntityGroupChange_t55954CE432F5A1206C8D0F998304A45ADEA1C842* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		LinkedEntityGroupChange_t55954CE432F5A1206C8D0F998304A45ADEA1C842* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<LinkedEntityGroupChange_t55954CE432F5A1206C8D0F998304A45ADEA1C842>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisLocalToWorld_t23B3E8CDA5838EF771A49AC5B39A57AF233E038D_mAE9CFA4AAA9C549030FA623708FE5D3D66254F45_gshared (LocalToWorld_t23B3E8CDA5838EF771A49AC5B39A57AF233E038D* ___0_destination, LocalToWorld_t23B3E8CDA5838EF771A49AC5B39A57AF233E038D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		LocalToWorld_t23B3E8CDA5838EF771A49AC5B39A57AF233E038D* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		LocalToWorld_t23B3E8CDA5838EF771A49AC5B39A57AF233E038D* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<LocalToWorld_t23B3E8CDA5838EF771A49AC5B39A57AF233E038D>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisLocalTransform_t8D1FEB4386DEE0D22FA43322268BF76E9FF687BD_m70F5C899D91876AF4440E45AC34D8C4D1CF39AE4_gshared (LocalTransform_t8D1FEB4386DEE0D22FA43322268BF76E9FF687BD* ___0_destination, LocalTransform_t8D1FEB4386DEE0D22FA43322268BF76E9FF687BD* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		LocalTransform_t8D1FEB4386DEE0D22FA43322268BF76E9FF687BD* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		LocalTransform_t8D1FEB4386DEE0D22FA43322268BF76E9FF687BD* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<LocalTransform_t8D1FEB4386DEE0D22FA43322268BF76E9FF687BD>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisMappedBuffer_t4BAABC09EAD5812AB933A8BA242095323D4282C7_m657BC4074A2CE1473DE70F13F2A10075EBFE4607_gshared (MappedBuffer_t4BAABC09EAD5812AB933A8BA242095323D4282C7* ___0_destination, MappedBuffer_t4BAABC09EAD5812AB933A8BA242095323D4282C7* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		MappedBuffer_t4BAABC09EAD5812AB933A8BA242095323D4282C7* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		MappedBuffer_t4BAABC09EAD5812AB933A8BA242095323D4282C7* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<MappedBuffer_t4BAABC09EAD5812AB933A8BA242095323D4282C7>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisMaterialMeshIndex_tB2252C2B3D608EE2F5FB9D6C7606F95426D27E74_m2357467D9E06DDD8B761F56CE188BB34319A672F_gshared (MaterialMeshIndex_tB2252C2B3D608EE2F5FB9D6C7606F95426D27E74* ___0_destination, MaterialMeshIndex_tB2252C2B3D608EE2F5FB9D6C7606F95426D27E74* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		MaterialMeshIndex_tB2252C2B3D608EE2F5FB9D6C7606F95426D27E74* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		MaterialMeshIndex_tB2252C2B3D608EE2F5FB9D6C7606F95426D27E74* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<MaterialMeshIndex_tB2252C2B3D608EE2F5FB9D6C7606F95426D27E74>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisMaterialMeshInfo_tA5DA20397A2C8CE93BBE1B1262E8B3448450117D_mF2E49CE957248FB3BC6C71E5912F1EC9B195BFD9_gshared (MaterialMeshInfo_tA5DA20397A2C8CE93BBE1B1262E8B3448450117D* ___0_destination, MaterialMeshInfo_tA5DA20397A2C8CE93BBE1B1262E8B3448450117D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		MaterialMeshInfo_tA5DA20397A2C8CE93BBE1B1262E8B3448450117D* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		MaterialMeshInfo_tA5DA20397A2C8CE93BBE1B1262E8B3448450117D* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<MaterialMeshInfo_tA5DA20397A2C8CE93BBE1B1262E8B3448450117D>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisMaterialPropertyType_tA7F7CD55AE934857962A20B395A3777399183C29_m74D2B30BDA7894A2ADB37C205F7090AC2FDA7486_gshared (MaterialPropertyType_tA7F7CD55AE934857962A20B395A3777399183C29* ___0_destination, MaterialPropertyType_tA7F7CD55AE934857962A20B395A3777399183C29* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		MaterialPropertyType_tA7F7CD55AE934857962A20B395A3777399183C29* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		MaterialPropertyType_tA7F7CD55AE934857962A20B395A3777399183C29* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<MaterialPropertyType_tA7F7CD55AE934857962A20B395A3777399183C29>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m6FE4E2203A341DF3711ECDD055B9E5DB910BC7D3_gshared (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___0_destination, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisMeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412_mF13215C7B95CB10C3DE295C7FDC8FB6BAB54FA0B_gshared (MeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412* ___0_destination, MeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		MeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		MeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<MeshDeformationBatch_t7476A404BFE0426781B91AFF17288C75C0353412>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisMeshLODComponent_tEC7D454A01180040B6C5AA441896A4FB66630910_m9177598DEAA9169AE69A66BE28F0777D0B314074_gshared (MeshLODComponent_tEC7D454A01180040B6C5AA441896A4FB66630910* ___0_destination, MeshLODComponent_tEC7D454A01180040B6C5AA441896A4FB66630910* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		MeshLODComponent_tEC7D454A01180040B6C5AA441896A4FB66630910* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		MeshLODComponent_tEC7D454A01180040B6C5AA441896A4FB66630910* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<MeshLODComponent_tEC7D454A01180040B6C5AA441896A4FB66630910>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisMeshLODGroupComponent_tBC1E27840E50C37F1244F281D24AAEB721FA15CC_mCD69657EF511CA152DEAE1C994C9A72B491C29CF_gshared (MeshLODGroupComponent_tBC1E27840E50C37F1244F281D24AAEB721FA15CC* ___0_destination, MeshLODGroupComponent_tBC1E27840E50C37F1244F281D24AAEB721FA15CC* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		MeshLODGroupComponent_tBC1E27840E50C37F1244F281D24AAEB721FA15CC* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		MeshLODGroupComponent_tBC1E27840E50C37F1244F281D24AAEB721FA15CC* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<MeshLODGroupComponent_tBC1E27840E50C37F1244F281D24AAEB721FA15CC>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisMeshRendererBakingData_tB57745402D0323D65CD2CF85D95648D4C699862E_mC0314292A235AABF4E6C30CF144F657AB406CE32_gshared (MeshRendererBakingData_tB57745402D0323D65CD2CF85D95648D4C699862E* ___0_destination, MeshRendererBakingData_tB57745402D0323D65CD2CF85D95648D4C699862E* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		MeshRendererBakingData_tB57745402D0323D65CD2CF85D95648D4C699862E* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		MeshRendererBakingData_tB57745402D0323D65CD2CF85D95648D4C699862E* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<MeshRendererBakingData_tB57745402D0323D65CD2CF85D95648D4C699862E>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisMetadataValue_tB24D1ECC62550B3B37D7BFA11B02907047E7F937_m9CC9BB5524CD97C8007D1EEBE09C53ED6D819499_gshared (MetadataValue_tB24D1ECC62550B3B37D7BFA11B02907047E7F937* ___0_destination, MetadataValue_tB24D1ECC62550B3B37D7BFA11B02907047E7F937* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		MetadataValue_tB24D1ECC62550B3B37D7BFA11B02907047E7F937* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		MetadataValue_tB24D1ECC62550B3B37D7BFA11B02907047E7F937* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<MetadataValue_tB24D1ECC62550B3B37D7BFA11B02907047E7F937>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_m23A0A1DC27829526256D3EA18AF15897CD688CB4_gshared (ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960* ___0_destination, ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisNudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022_m1344A30C8C64641C8CB6DB508EC56FE1BF15F736_gshared (NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022* ___0_destination, NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRuntimeObject_mD13EEA1538F26A567D15A7615D8851A427DFD15A_gshared (RuntimeObject** ___0_destination, RuntimeObject** ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		goto IL_002f;
	}

IL_002f:
	{
		RuntimeObject** L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_2 = L_1;
		uint8_t* L_2 = V_2;
		RuntimeObject** L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_1 = L_4;
		uint8_t* L_5 = V_1;
		V_3 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_3;
		uint64_t L_7 = ___2_elementCount;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10;
		L_10 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(148, L_9);
		V_4 = L_10;
		intptr_t L_11;
		L_11 = RuntimeTypeHandle_get_Value_mDC366CF36C3E21505134EAEE72BD7629107D762A_inline((&V_4), NULL);
		RuntimeImports_Memmove_wbarrier_m8487273EE6161DB248FB65BB931279FF04F3CA79((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)(uint32_t)L_7), L_11, NULL);
		V_2 = (uint8_t*)((uintptr_t)0);
		V_1 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisOverrideLightProbeAnchorComponent_t504C206585014F2857B080A3A841B78DB0CBE1FB_m810D303251DA596621CAC48376EF3A5833D3F123_gshared (OverrideLightProbeAnchorComponent_t504C206585014F2857B080A3A841B78DB0CBE1FB* ___0_destination, OverrideLightProbeAnchorComponent_t504C206585014F2857B080A3A841B78DB0CBE1FB* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		OverrideLightProbeAnchorComponent_t504C206585014F2857B080A3A841B78DB0CBE1FB* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		OverrideLightProbeAnchorComponent_t504C206585014F2857B080A3A841B78DB0CBE1FB* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<OverrideLightProbeAnchorComponent_t504C206585014F2857B080A3A841B78DB0CBE1FB>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPackedComponent_t1F420B0BE93FF9B240DF895BF74ED0354F10D1D6_m5A2A066F4CCE33666CF9BDEBC74E258298B3536D_gshared (PackedComponent_t1F420B0BE93FF9B240DF895BF74ED0354F10D1D6* ___0_destination, PackedComponent_t1F420B0BE93FF9B240DF895BF74ED0354F10D1D6* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PackedComponent_t1F420B0BE93FF9B240DF895BF74ED0354F10D1D6* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		PackedComponent_t1F420B0BE93FF9B240DF895BF74ED0354F10D1D6* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<PackedComponent_t1F420B0BE93FF9B240DF895BF74ED0354F10D1D6>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPackedComponentDataChange_t666FA9A2140462F6E22E37A895A80019BB12DCC2_m5B5DB7F4B9DEAC23AC95811D9FF0F2E121A6BEC7_gshared (PackedComponentDataChange_t666FA9A2140462F6E22E37A895A80019BB12DCC2* ___0_destination, PackedComponentDataChange_t666FA9A2140462F6E22E37A895A80019BB12DCC2* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PackedComponentDataChange_t666FA9A2140462F6E22E37A895A80019BB12DCC2* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		PackedComponentDataChange_t666FA9A2140462F6E22E37A895A80019BB12DCC2* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<PackedComponentDataChange_t666FA9A2140462F6E22E37A895A80019BB12DCC2>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisParent_t473162287DAADFBE8C1A231B52DC5D0C80687304_m4E2D09E86C402005D09BE119CCBED5107028EEC7_gshared (Parent_t473162287DAADFBE8C1A231B52DC5D0C80687304* ___0_destination, Parent_t473162287DAADFBE8C1A231B52DC5D0C80687304* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Parent_t473162287DAADFBE8C1A231B52DC5D0C80687304* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Parent_t473162287DAADFBE8C1A231B52DC5D0C80687304* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Parent_t473162287DAADFBE8C1A231B52DC5D0C80687304>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPerWorldSystemInfo_t633E3D6D07B304920DCA0CE411AF821A19C0D756_mBF32C2E8E1F754D8720FA83E8C7B5A9161178410_gshared (PerWorldSystemInfo_t633E3D6D07B304920DCA0CE411AF821A19C0D756* ___0_destination, PerWorldSystemInfo_t633E3D6D07B304920DCA0CE411AF821A19C0D756* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PerWorldSystemInfo_t633E3D6D07B304920DCA0CE411AF821A19C0D756* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		PerWorldSystemInfo_t633E3D6D07B304920DCA0CE411AF821A19C0D756* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<PerWorldSystemInfo_t633E3D6D07B304920DCA0CE411AF821A19C0D756>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mF75DD2DBA33D1083E63B1A29456B4085A1CC079F_gshared (Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* ___0_destination, Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPostTransformMatrix_t4E6015656BF644B8026BEF23B38DC1DAE7C8A78D_mCE8B5F55530C5C95E1331DD460E2422D0B07CEDE_gshared (PostTransformMatrix_t4E6015656BF644B8026BEF23B38DC1DAE7C8A78D* ___0_destination, PostTransformMatrix_t4E6015656BF644B8026BEF23B38DC1DAE7C8A78D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PostTransformMatrix_t4E6015656BF644B8026BEF23B38DC1DAE7C8A78D* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		PostTransformMatrix_t4E6015656BF644B8026BEF23B38DC1DAE7C8A78D* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<PostTransformMatrix_t4E6015656BF644B8026BEF23B38DC1DAE7C8A78D>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751_m684B55676F462B8F1F515FF1FE50C8A1007F3602_gshared (PrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751* ___0_destination, PrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		PrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<PrefabState_tE65B9DFE4119E82D14D57789235BAB749C428751>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPreviousParent_t4879AE063F14CAD6263F68FB5BCBFDC18889BEDD_m65056604EDB91E596F6B04CE75E7E88E83EC0F65_gshared (PreviousParent_t4879AE063F14CAD6263F68FB5BCBFDC18889BEDD* ___0_destination, PreviousParent_t4879AE063F14CAD6263F68FB5BCBFDC18889BEDD* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PreviousParent_t4879AE063F14CAD6263F68FB5BCBFDC18889BEDD* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		PreviousParent_t4879AE063F14CAD6263F68FB5BCBFDC18889BEDD* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<PreviousParent_t4879AE063F14CAD6263F68FB5BCBFDC18889BEDD>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisPublicEntityRef_t499E2838255A5FCF6E1CE9B5E7C366D795D9D634_mAD3A7872F3E168B29C23B1BFB359585FE7BD8556_gshared (PublicEntityRef_t499E2838255A5FCF6E1CE9B5E7C366D795D9D634* ___0_destination, PublicEntityRef_t499E2838255A5FCF6E1CE9B5E7C366D795D9D634* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		PublicEntityRef_t499E2838255A5FCF6E1CE9B5E7C366D795D9D634* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		PublicEntityRef_t499E2838255A5FCF6E1CE9B5E7C366D795D9D634* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<PublicEntityRef_t499E2838255A5FCF6E1CE9B5E7C366D795D9D634>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m0CD197E2DFBC77DF284D8F5CAD832F7CEAEBC8FA_gshared (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_destination, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisReadCommand_t5DB46BD58D686FDDFBD8AB7600B9CF676DC7D97F_m79B934C6299FBEAD050C8623DEECA5910C785A77_gshared (ReadCommand_t5DB46BD58D686FDDFBD8AB7600B9CF676DC7D97F* ___0_destination, ReadCommand_t5DB46BD58D686FDDFBD8AB7600B9CF676DC7D97F* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ReadCommand_t5DB46BD58D686FDDFBD8AB7600B9CF676DC7D97F* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ReadCommand_t5DB46BD58D686FDDFBD8AB7600B9CF676DC7D97F* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ReadCommand_t5DB46BD58D686FDDFBD8AB7600B9CF676DC7D97F>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRemoteContentId_t27977325179FF4C511004EBF35A0B38AA71D66B0_m2E21A32DC9122E1BA5798EA1C4A290020B4DEAAE_gshared (RemoteContentId_t27977325179FF4C511004EBF35A0B38AA71D66B0* ___0_destination, RemoteContentId_t27977325179FF4C511004EBF35A0B38AA71D66B0* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		RemoteContentId_t27977325179FF4C511004EBF35A0B38AA71D66B0* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		RemoteContentId_t27977325179FF4C511004EBF35A0B38AA71D66B0* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<RemoteContentId_t27977325179FF4C511004EBF35A0B38AA71D66B0>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRemoteContentLocation_t600FAD240C089026DD5CAFCBC44B128555506F7D_mD1F65B7F1A6947C9CF1EFF74F162B1831C42D52B_gshared (RemoteContentLocation_t600FAD240C089026DD5CAFCBC44B128555506F7D* ___0_destination, RemoteContentLocation_t600FAD240C089026DD5CAFCBC44B128555506F7D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		RemoteContentLocation_t600FAD240C089026DD5CAFCBC44B128555506F7D* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		RemoteContentLocation_t600FAD240C089026DD5CAFCBC44B128555506F7D* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<RemoteContentLocation_t600FAD240C089026DD5CAFCBC44B128555506F7D>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRenderBounds_tE83D2C345D9E9FBEA1E680C79E47CCF6A46AFA0A_m8FC9766477F56FEAE089C6741ED06F13A86EB018_gshared (RenderBounds_tE83D2C345D9E9FBEA1E680C79E47CCF6A46AFA0A* ___0_destination, RenderBounds_tE83D2C345D9E9FBEA1E680C79E47CCF6A46AFA0A* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		RenderBounds_tE83D2C345D9E9FBEA1E680C79E47CCF6A46AFA0A* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		RenderBounds_tE83D2C345D9E9FBEA1E680C79E47CCF6A46AFA0A* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<RenderBounds_tE83D2C345D9E9FBEA1E680C79E47CCF6A46AFA0A>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRenderMeshUnmanaged_tE7BB4BC0043D5F2763A5D79EF50E34D65BAFB9C0_m2EFCA095A262063972D8C5F41FD031A6B9A30585_gshared (RenderMeshUnmanaged_tE7BB4BC0043D5F2763A5D79EF50E34D65BAFB9C0* ___0_destination, RenderMeshUnmanaged_tE7BB4BC0043D5F2763A5D79EF50E34D65BAFB9C0* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		RenderMeshUnmanaged_tE7BB4BC0043D5F2763A5D79EF50E34D65BAFB9C0* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		RenderMeshUnmanaged_tE7BB4BC0043D5F2763A5D79EF50E34D65BAFB9C0* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<RenderMeshUnmanaged_tE7BB4BC0043D5F2763A5D79EF50E34D65BAFB9C0>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733_m6894206E85F92C7E4AF252F3E44348C8831A8A95_gshared (RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* ___0_destination, RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<RenderStateBlock_tFC570EF2C8F3A817FECD578E385D18CEEEA06733>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRequestSceneHeader_tFB164D8BD279642D1C1FF039036393F4C8A31AC6_m6C1BFCA169B7975092A71984085F5E217E166747_gshared (RequestSceneHeader_tFB164D8BD279642D1C1FF039036393F4C8A31AC6* ___0_destination, RequestSceneHeader_tFB164D8BD279642D1C1FF039036393F4C8A31AC6* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		RequestSceneHeader_tFB164D8BD279642D1C1FF039036393F4C8A31AC6* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		RequestSceneHeader_tFB164D8BD279642D1C1FF039036393F4C8A31AC6* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<RequestSceneHeader_tFB164D8BD279642D1C1FF039036393F4C8A31AC6>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRequestSceneLoaded_t84D63EB24CFB758BF46A3B4DDB00140B84E2F9B4_m1B5F811F96CA5D226D470D4B2530B253B1DAEC8D_gshared (RequestSceneLoaded_t84D63EB24CFB758BF46A3B4DDB00140B84E2F9B4* ___0_destination, RequestSceneLoaded_t84D63EB24CFB758BF46A3B4DDB00140B84E2F9B4* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		RequestSceneLoaded_t84D63EB24CFB758BF46A3B4DDB00140B84E2F9B4* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		RequestSceneLoaded_t84D63EB24CFB758BF46A3B4DDB00140B84E2F9B4* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<RequestSceneLoaded_t84D63EB24CFB758BF46A3B4DDB00140B84E2F9B4>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisResolvedSceneHash_t5CA34693F082AFC6F60F638176577BDA620C9B20_m5CD61F0C7584FC7E66CE911A6E7A83D1ED6148CD_gshared (ResolvedSceneHash_t5CA34693F082AFC6F60F638176577BDA620C9B20* ___0_destination, ResolvedSceneHash_t5CA34693F082AFC6F60F638176577BDA620C9B20* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ResolvedSceneHash_t5CA34693F082AFC6F60F638176577BDA620C9B20* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ResolvedSceneHash_t5CA34693F082AFC6F60F638176577BDA620C9B20* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ResolvedSceneHash_t5CA34693F082AFC6F60F638176577BDA620C9B20>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisResolvedSectionEntity_tD18069CE6AD2FA61A39B747F346310DD10B77CEE_m593C8513D98F9D9BA1A385C824FCE1997DA4373F_gshared (ResolvedSectionEntity_tD18069CE6AD2FA61A39B747F346310DD10B77CEE* ___0_destination, ResolvedSectionEntity_tD18069CE6AD2FA61A39B747F346310DD10B77CEE* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ResolvedSectionEntity_tD18069CE6AD2FA61A39B747F346310DD10B77CEE* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ResolvedSectionEntity_tD18069CE6AD2FA61A39B747F346310DD10B77CEE* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ResolvedSectionEntity_tD18069CE6AD2FA61A39B747F346310DD10B77CEE>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisResolvedSectionPath_t87B9F3F0B0115B2D7CCADAD376C33481F1B5BE1D_m8BF13A9C87EC4EAAB1A5AF7FF6B0E631E5A32445_gshared (ResolvedSectionPath_t87B9F3F0B0115B2D7CCADAD376C33481F1B5BE1D* ___0_destination, ResolvedSectionPath_t87B9F3F0B0115B2D7CCADAD376C33481F1B5BE1D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ResolvedSectionPath_t87B9F3F0B0115B2D7CCADAD376C33481F1B5BE1D* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ResolvedSectionPath_t87B9F3F0B0115B2D7CCADAD376C33481F1B5BE1D* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ResolvedSectionPath_t87B9F3F0B0115B2D7CCADAD376C33481F1B5BE1D>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRetainBlobAssetBatchPtr_t3C4E424C414A65ED2C7215C76B298CA04E362306_m07B3840C7FB6870DC6ED9BA668FA2CA2E16E7265_gshared (RetainBlobAssetBatchPtr_t3C4E424C414A65ED2C7215C76B298CA04E362306* ___0_destination, RetainBlobAssetBatchPtr_t3C4E424C414A65ED2C7215C76B298CA04E362306* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		RetainBlobAssetBatchPtr_t3C4E424C414A65ED2C7215C76B298CA04E362306* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		RetainBlobAssetBatchPtr_t3C4E424C414A65ED2C7215C76B298CA04E362306* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<RetainBlobAssetBatchPtr_t3C4E424C414A65ED2C7215C76B298CA04E362306>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRetainBlobAssetPtr_tB58F0A9A302FCFEFE95EAB011F522AFFB283873F_mF0E2D3A6E9EC57A71BF71C2AE13BC961D756C7B1_gshared (RetainBlobAssetPtr_tB58F0A9A302FCFEFE95EAB011F522AFFB283873F* ___0_destination, RetainBlobAssetPtr_tB58F0A9A302FCFEFE95EAB011F522AFFB283873F* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		RetainBlobAssetPtr_tB58F0A9A302FCFEFE95EAB011F522AFFB283873F* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		RetainBlobAssetPtr_tB58F0A9A302FCFEFE95EAB011F522AFFB283873F* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<RetainBlobAssetPtr_tB58F0A9A302FCFEFE95EAB011F522AFFB283873F>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRootLODRange_tE8326688FFD668D4F94CFA3D3FD1FFF29A851BDE_m55A19CFB0AC636B768C7E48C6B3B9748786FB14E_gshared (RootLODRange_tE8326688FFD668D4F94CFA3D3FD1FFF29A851BDE* ___0_destination, RootLODRange_tE8326688FFD668D4F94CFA3D3FD1FFF29A851BDE* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		RootLODRange_tE8326688FFD668D4F94CFA3D3FD1FFF29A851BDE* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		RootLODRange_tE8326688FFD668D4F94CFA3D3FD1FFF29A851BDE* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<RootLODRange_tE8326688FFD668D4F94CFA3D3FD1FFF29A851BDE>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRootLODWorldReferencePoint_t402BFA80364BFC8AC31A752126AF65FF4DD1D49D_m2DEC64559E4240EFE319C3E9A5C2E803304DA2DC_gshared (RootLODWorldReferencePoint_t402BFA80364BFC8AC31A752126AF65FF4DD1D49D* ___0_destination, RootLODWorldReferencePoint_t402BFA80364BFC8AC31A752126AF65FF4DD1D49D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		RootLODWorldReferencePoint_t402BFA80364BFC8AC31A752126AF65FF4DD1D49D* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		RootLODWorldReferencePoint_t402BFA80364BFC8AC31A752126AF65FF4DD1D49D* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<RootLODWorldReferencePoint_t402BFA80364BFC8AC31A752126AF65FF4DD1D49D>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRuntimeGlobalObjectId_tC6329FB06BA5199F5848D9355CF10D6D7CACEA00_m6BBE2C84FACB26992B1842EBE0984479EA6E57F0_gshared (RuntimeGlobalObjectId_tC6329FB06BA5199F5848D9355CF10D6D7CACEA00* ___0_destination, RuntimeGlobalObjectId_tC6329FB06BA5199F5848D9355CF10D6D7CACEA00* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		RuntimeGlobalObjectId_tC6329FB06BA5199F5848D9355CF10D6D7CACEA00* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		RuntimeGlobalObjectId_tC6329FB06BA5199F5848D9355CF10D6D7CACEA00* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<RuntimeGlobalObjectId_tC6329FB06BA5199F5848D9355CF10D6D7CACEA00>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSceneBoundingVolume_tFA9A1787D49E9E52434EA07C08014B51384FE462_m610FF50056731D13A4A3BD21AD8EA01961EB847A_gshared (SceneBoundingVolume_tFA9A1787D49E9E52434EA07C08014B51384FE462* ___0_destination, SceneBoundingVolume_tFA9A1787D49E9E52434EA07C08014B51384FE462* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SceneBoundingVolume_tFA9A1787D49E9E52434EA07C08014B51384FE462* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		SceneBoundingVolume_tFA9A1787D49E9E52434EA07C08014B51384FE462* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<SceneBoundingVolume_tFA9A1787D49E9E52434EA07C08014B51384FE462>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSceneEntityReference_t66E50E7C54B23425953959208B308D7E9C5F4DC2_mCCF4F4BF8089954CAE1CD9E3D93C988B39D78E6A_gshared (SceneEntityReference_t66E50E7C54B23425953959208B308D7E9C5F4DC2* ___0_destination, SceneEntityReference_t66E50E7C54B23425953959208B308D7E9C5F4DC2* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SceneEntityReference_t66E50E7C54B23425953959208B308D7E9C5F4DC2* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		SceneEntityReference_t66E50E7C54B23425953959208B308D7E9C5F4DC2* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<SceneEntityReference_t66E50E7C54B23425953959208B308D7E9C5F4DC2>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSceneReference_t2807450F0E3141AA80D97BE5CDC40D70965940B5_m2FCF34DB31999BB7D4828F4D647F473AECA66D66_gshared (SceneReference_t2807450F0E3141AA80D97BE5CDC40D70965940B5* ___0_destination, SceneReference_t2807450F0E3141AA80D97BE5CDC40D70965940B5* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SceneReference_t2807450F0E3141AA80D97BE5CDC40D70965940B5* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		SceneReference_t2807450F0E3141AA80D97BE5CDC40D70965940B5* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<SceneReference_t2807450F0E3141AA80D97BE5CDC40D70965940B5>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSceneSection_t7E9283B521FC08050547458EF3248964019A36B8_m38A0A98A42DB204F4C1EA0CDA14550B402EB3846_gshared (SceneSection_t7E9283B521FC08050547458EF3248964019A36B8* ___0_destination, SceneSection_t7E9283B521FC08050547458EF3248964019A36B8* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SceneSection_t7E9283B521FC08050547458EF3248964019A36B8* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		SceneSection_t7E9283B521FC08050547458EF3248964019A36B8* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<SceneSection_t7E9283B521FC08050547458EF3248964019A36B8>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSceneSectionData_t22BBFAD9EE6AF38CC454C77315B0DDCEC2FAEE12_mDEB8B0A6AD34927456CE46873CFDF255BE6CA5DA_gshared (SceneSectionData_t22BBFAD9EE6AF38CC454C77315B0DDCEC2FAEE12* ___0_destination, SceneSectionData_t22BBFAD9EE6AF38CC454C77315B0DDCEC2FAEE12* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SceneSectionData_t22BBFAD9EE6AF38CC454C77315B0DDCEC2FAEE12* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		SceneSectionData_t22BBFAD9EE6AF38CC454C77315B0DDCEC2FAEE12* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<SceneSectionData_t22BBFAD9EE6AF38CC454C77315B0DDCEC2FAEE12>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSceneSectionStreamingData_t15AC9478148B301F9B8FDB6D94D15215F871828B_m8BE80521E3BD71A758846C5B1D0350C9D890F2CA_gshared (SceneSectionStreamingData_t15AC9478148B301F9B8FDB6D94D15215F871828B* ___0_destination, SceneSectionStreamingData_t15AC9478148B301F9B8FDB6D94D15215F871828B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SceneSectionStreamingData_t15AC9478148B301F9B8FDB6D94D15215F871828B* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		SceneSectionStreamingData_t15AC9478148B301F9B8FDB6D94D15215F871828B* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<SceneSectionStreamingData_t15AC9478148B301F9B8FDB6D94D15215F871828B>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSerializedMemberView_t6369E7535E340ED95E5B3E944819E50723388927_mA0B81E09ED1BBA7016128DB0E0C0D1A6CF2F10FB_gshared (SerializedMemberView_t6369E7535E340ED95E5B3E944819E50723388927* ___0_destination, SerializedMemberView_t6369E7535E340ED95E5B3E944819E50723388927* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SerializedMemberView_t6369E7535E340ED95E5B3E944819E50723388927* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		SerializedMemberView_t6369E7535E340ED95E5B3E944819E50723388927* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<SerializedMemberView_t6369E7535E340ED95E5B3E944819E50723388927>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC_m42F98D61E192B3608E680537424A88BA013879C4_gshared (SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* ___0_destination, SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_mCCC311A9CB3BBFDF387DB99FA39A44D1D64A739F_gshared (ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* ___0_destination, ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSharedMeshData_tFF18A151F1BA3B6810B3002DF0C28C2C66D5E32C_mD588F2440D78056E2594D8573B620430081F80F3_gshared (SharedMeshData_tFF18A151F1BA3B6810B3002DF0C28C2C66D5E32C* ___0_destination, SharedMeshData_tFF18A151F1BA3B6810B3002DF0C28C2C66D5E32C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SharedMeshData_tFF18A151F1BA3B6810B3002DF0C28C2C66D5E32C* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		SharedMeshData_tFF18A151F1BA3B6810B3002DF0C28C2C66D5E32C* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<SharedMeshData_tFF18A151F1BA3B6810B3002DF0C28C2C66D5E32C>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m8E65A20A53C662400685CE50AE11C2A80FBC6D7C_gshared (float* ___0_destination, float* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		float* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		float* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<float>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSkinMatrix_t34B67BFCA5D79A666D007006850E5D7CE005AF69_mB6DFFA44DEA2F4995CE0C48D1F149F1D5FE0BE64_gshared (SkinMatrix_t34B67BFCA5D79A666D007006850E5D7CE005AF69* ___0_destination, SkinMatrix_t34B67BFCA5D79A666D007006850E5D7CE005AF69* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SkinMatrix_t34B67BFCA5D79A666D007006850E5D7CE005AF69* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		SkinMatrix_t34B67BFCA5D79A666D007006850E5D7CE005AF69* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<SkinMatrix_t34B67BFCA5D79A666D007006850E5D7CE005AF69>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSkinMatrixBufferIndex_tD7716F62B62B9EDEE4FD56C2E3EFC30751C1433E_m91770F76C2C4A12F55CBAC45823E34EB3C644849_gshared (SkinMatrixBufferIndex_tD7716F62B62B9EDEE4FD56C2E3EFC30751C1433E* ___0_destination, SkinMatrixBufferIndex_tD7716F62B62B9EDEE4FD56C2E3EFC30751C1433E* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SkinMatrixBufferIndex_tD7716F62B62B9EDEE4FD56C2E3EFC30751C1433E* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		SkinMatrixBufferIndex_tD7716F62B62B9EDEE4FD56C2E3EFC30751C1433E* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<SkinMatrixBufferIndex_tD7716F62B62B9EDEE4FD56C2E3EFC30751C1433E>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSystemHandle_t5A4D46B81DF95CD891D2102270B37E23AF992894_m4BDCFBEADDE3AB7D96DB242A27B409063F67512D_gshared (SystemHandle_t5A4D46B81DF95CD891D2102270B37E23AF992894* ___0_destination, SystemHandle_t5A4D46B81DF95CD891D2102270B37E23AF992894* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SystemHandle_t5A4D46B81DF95CD891D2102270B37E23AF992894* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		SystemHandle_t5A4D46B81DF95CD891D2102270B37E23AF992894* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<SystemHandle_t5A4D46B81DF95CD891D2102270B37E23AF992894>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59_m8B07FFFBDBC11CD09E802466792DDD952D347A7B_gshared (SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59* ___0_destination, SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<SystemTypeIndex_tF8FE523E862B9185701A867D7FD36966F8F03E59>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisThreadLocalAABB_t9E046151708D95D2A75A2108020F1402970B40AC_m38BF8222A95AA505759063D8BA3B982BAFA3BE6C_gshared (ThreadLocalAABB_t9E046151708D95D2A75A2108020F1402970B40AC* ___0_destination, ThreadLocalAABB_t9E046151708D95D2A75A2108020F1402970B40AC* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ThreadLocalAABB_t9E046151708D95D2A75A2108020F1402970B40AC* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ThreadLocalAABB_t9E046151708D95D2A75A2108020F1402970B40AC* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ThreadLocalAABB_t9E046151708D95D2A75A2108020F1402970B40AC>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisThreadLocalCollectBuffer_tF53F7FDBD3B862D6FD2BCB67307EED7B5E22864A_m0DEBEFB8C20410DA007BFB8CD23D683FAA5E55E5_gshared (ThreadLocalCollectBuffer_tF53F7FDBD3B862D6FD2BCB67307EED7B5E22864A* ___0_destination, ThreadLocalCollectBuffer_tF53F7FDBD3B862D6FD2BCB67307EED7B5E22864A* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ThreadLocalCollectBuffer_tF53F7FDBD3B862D6FD2BCB67307EED7B5E22864A* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ThreadLocalCollectBuffer_tF53F7FDBD3B862D6FD2BCB67307EED7B5E22864A* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ThreadLocalCollectBuffer_tF53F7FDBD3B862D6FD2BCB67307EED7B5E22864A>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisThreadLocalDrawCommands_t822AD6AA83D6162496D9693946084E12C2CABD42_m59CA39961F661609EE784BC160052278CED8B9DA_gshared (ThreadLocalDrawCommands_t822AD6AA83D6162496D9693946084E12C2CABD42* ___0_destination, ThreadLocalDrawCommands_t822AD6AA83D6162496D9693946084E12C2CABD42* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		ThreadLocalDrawCommands_t822AD6AA83D6162496D9693946084E12C2CABD42* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		ThreadLocalDrawCommands_t822AD6AA83D6162496D9693946084E12C2CABD42* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<ThreadLocalDrawCommands_t822AD6AA83D6162496D9693946084E12C2CABD42>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisTileData_tFB814629D010ABD175127C0BE96FD96EA606E00F_m15B0C879197615CE8FBB0E507065369653A60CEB_gshared (TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* ___0_destination, TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisTransform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F_m74B0B0ADC7270ADA117AAAD4BB6550817CCA8AC9_gshared (Transform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F* ___0_destination, Transform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		Transform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Transform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Transform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisTransformAuthoring_t3C311DCBF21C302795452FF32440FC0C77A00939_m2C8BC2EA5334E1A247A0070EF58C8C8EA4F3DB42_gshared (TransformAuthoring_t3C311DCBF21C302795452FF32440FC0C77A00939* ___0_destination, TransformAuthoring_t3C311DCBF21C302795452FF32440FC0C77A00939* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		TransformAuthoring_t3C311DCBF21C302795452FF32440FC0C77A00939* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		TransformAuthoring_t3C311DCBF21C302795452FF32440FC0C77A00939* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<TransformAuthoring_t3C311DCBF21C302795452FF32440FC0C77A00939>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisTransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D_m45EF0613F33702CDB58E6CF071C81E0EC8962504_gshared (TransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D* ___0_destination, TransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		TransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		TransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<TransformUsageFlagCounters_t9719106244B9730B1999F5B0F9C661EE5889DB5D>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisTypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C_m59CA13E610C64B211CA373335F20C7AAF38D254D_gshared (TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C* ___0_destination, TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<TypeIndex_t18365699387F045FB6E4ED39554CD5BE82A04F7C>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUEncroachingSegment_tD13983B03A27E74BB47A12B60732B020888416BA_m9A962FD4E5CF18D385E85314F6638CEE573E26FC_gshared (UEncroachingSegment_tD13983B03A27E74BB47A12B60732B020888416BA* ___0_destination, UEncroachingSegment_tD13983B03A27E74BB47A12B60732B020888416BA* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		UEncroachingSegment_tD13983B03A27E74BB47A12B60732B020888416BA* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		UEncroachingSegment_tD13983B03A27E74BB47A12B60732B020888416BA* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<UEncroachingSegment_tD13983B03A27E74BB47A12B60732B020888416BA>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUEvent_t6B46070B7BC816FDF53E67775BD4EA5508B807C2_m539282743FDA6D53666EF7E340DFE691157E6FFE_gshared (UEvent_t6B46070B7BC816FDF53E67775BD4EA5508B807C2* ___0_destination, UEvent_t6B46070B7BC816FDF53E67775BD4EA5508B807C2* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		UEvent_t6B46070B7BC816FDF53E67775BD4EA5508B807C2* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		UEvent_t6B46070B7BC816FDF53E67775BD4EA5508B807C2* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<UEvent_t6B46070B7BC816FDF53E67775BD4EA5508B807C2>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUHull_t042A8827A0CEE132C9302730F1CC1C2206B18B53_m038DBA501C58928330E5735554E066FD3F26FB76_gshared (UHull_t042A8827A0CEE132C9302730F1CC1C2206B18B53* ___0_destination, UHull_t042A8827A0CEE132C9302730F1CC1C2206B18B53* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		UHull_t042A8827A0CEE132C9302730F1CC1C2206B18B53* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		UHull_t042A8827A0CEE132C9302730F1CC1C2206B18B53* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<UHull_t042A8827A0CEE132C9302730F1CC1C2206B18B53>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mE48DFFFA4D52B03F4ACA304FD485E78F4BFF0E42_gshared (uint16_t* ___0_destination, uint16_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		uint16_t* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uint16_t* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<uint16_t>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mEC6A6EF02BD38F45F23336F48D35B9DC2BC187FD_gshared (uint32_t* ___0_destination, uint32_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		uint32_t* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uint32_t* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<uint32_t>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m4482A7BD91B51B22F471D785B1D22FAE110CD908_gshared (uint64_t* ___0_destination, uint64_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		uint64_t* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uint64_t* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<uint64_t>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUStar_t44BAFB3CDE2A6D37FF4F48B038D7D920F8F47BD4_m62869CB972FDA9EABB898972B35BE28F0297CAC0_gshared (UStar_t44BAFB3CDE2A6D37FF4F48B038D7D920F8F47BD4* ___0_destination, UStar_t44BAFB3CDE2A6D37FF4F48B038D7D920F8F47BD4* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		UStar_t44BAFB3CDE2A6D37FF4F48B038D7D920F8F47BD4* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		UStar_t44BAFB3CDE2A6D37FF4F48B038D7D920F8F47BD4* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<UStar_t44BAFB3CDE2A6D37FF4F48B038D7D920F8F47BD4>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUTriangle_tCD210F61D627BAB81A1CFFEC7076C3FBB9A6D7CD_m1F7A4A55967E8A081C3366C6AD2217EC7E30C732_gshared (UTriangle_tCD210F61D627BAB81A1CFFEC7076C3FBB9A6D7CD* ___0_destination, UTriangle_tCD210F61D627BAB81A1CFFEC7076C3FBB9A6D7CD* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		UTriangle_tCD210F61D627BAB81A1CFFEC7076C3FBB9A6D7CD* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		UTriangle_tCD210F61D627BAB81A1CFFEC7076C3FBB9A6D7CD* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<UTriangle_tCD210F61D627BAB81A1CFFEC7076C3FBB9A6D7CD>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnmanagedComponentSystemDelegates_tB8457009CD4CC3E4A0CF63B17035080EF847DCEC_m2E678C9D27D984821A9CA99D91C92915988D3B35_gshared (UnmanagedComponentSystemDelegates_tB8457009CD4CC3E4A0CF63B17035080EF847DCEC* ___0_destination, UnmanagedComponentSystemDelegates_tB8457009CD4CC3E4A0CF63B17035080EF847DCEC* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		UnmanagedComponentSystemDelegates_tB8457009CD4CC3E4A0CF63B17035080EF847DCEC* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		UnmanagedComponentSystemDelegates_tB8457009CD4CC3E4A0CF63B17035080EF847DCEC* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<UnmanagedComponentSystemDelegates_tB8457009CD4CC3E4A0CF63B17035080EF847DCEC>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67_m3678A0F72E2F54660F119FDA028D8685A9A698A5_gshared (UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67* ___0_destination, UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<UnsafeText_t93F5D82C1FF7AB12B0E621B9D0EC9855D005FF67>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A_mAE92CCB622A4BB8FD96752CCE7B6937AEC6F2AC2_gshared (UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* ___0_destination, UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
	}
	{
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* L_0 = ___0_destination;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A* L_3 = ___1_source;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___2_elementCount;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<UntypedWeakReferenceId_tE6BA94FD975EA12B639C0A568532BD1AB874492A>();
		Buffer_Memmove_mAA31A45BF1B1FA6490F0913B7FB59537767E5EF3((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool math_ispow2_m5DB60B3B6A893F0400B2BA64176473995E41ECB0_inline (int32_t ___0_x, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_x;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___0_x;
		int32_t L_2 = ___0_x;
		return (bool)((((int32_t)((int32_t)(L_1&((int32_t)il2cpp_codegen_subtract(L_2, 1))))) == ((int32_t)0))? 1 : 0);
	}

IL_000d:
	{
		return (bool)0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = *__this;
		return (void*)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t RuntimeTypeHandle_get_Value_mDC366CF36C3E21505134EAEE72BD7629107D762A_inline (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->___value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBlobHeader_tCE133EA8852A67AF9C9F3E380D6288A120A34953_m71B7F28045E57BA4B230177FF855EE09830C108E_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(BlobHeader_tCE133EA8852A67AF9C9F3E380D6288A120A34953);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BlobHeader_tCE133EA8852A67AF9C9F3E380D6288A120A34953* UnsafeUtility_AsRef_TisBlobHeader_tCE133EA8852A67AF9C9F3E380D6288A120A34953_m1CA564AC8F5282BE22B6BA0D9B0664FFBD37A51E_gshared_inline (void* ___0_ptr, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_ptr;
		return (BlobHeader_tCE133EA8852A67AF9C9F3E380D6288A120A34953*)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeList_1_get_Length_m9616E4A2AEE9103D88F43B1B495D41151FD89845_gshared_inline (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* __this, const RuntimeMethod* method) 
{
	{
		UnsafeList_1_tA068C24D5E1D5CBC03E6D51E587FF66C4EC0C8E3* L_0 = __this->___m_ListData;
		int32_t L_1;
		L_1 = UnsafeList_1_get_Length_mCC820C658B1BB4A17962AB76F15B049E3F24CD58_inline((UnsafeList_1_tA068C24D5E1D5CBC03E6D51E587FF66C4EC0C8E3*)L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		int32_t L_2;
		L_2 = CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1_inline(L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 NativeList_1_get_Item_mDCFE56583B7D64A546DFADB0CD8071E3A738FD70_gshared_inline (NativeList_1_tF4092DD82CD7223CE38675082B031DCAFB8F0AC8* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		UnsafeList_1_tA068C24D5E1D5CBC03E6D51E587FF66C4EC0C8E3* L_0 = __this->___m_ListData;
		int32_t L_1 = ___0_index;
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_2;
		L_2 = UnsafeList_1_get_Item_mE5CDA9830B21C68F834C0DA5D9AAB8384DC0D6ED_inline((UnsafeList_1_tA068C24D5E1D5CBC03E6D51E587FF66C4EC0C8E3*)L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeList_1_get_Length_mB1818F30D5AB0C43827E32DC61E6C71E50BB20A1_gshared_inline (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* __this, const RuntimeMethod* method) 
{
	{
		UnsafeList_1_t7517BB16A0F7933063E20E60999A377DE8B0B4F4* L_0 = __this->___m_ListData;
		int32_t L_1;
		L_1 = UnsafeList_1_get_Length_mA49FF92B2235FC7B131269EB9560EBE9B6F9ECF6_inline((UnsafeList_1_t7517BB16A0F7933063E20E60999A377DE8B0B4F4*)L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		int32_t L_2;
		L_2 = CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1_inline(L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 NativeList_1_get_Item_m63ED6CE2C12F365A5AEA35BDE65B3B0799D04442_gshared_inline (NativeList_1_t4A52C52652CC9BCB5EFD9E17F3CDB5DCB462F8EE* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		UnsafeList_1_t7517BB16A0F7933063E20E60999A377DE8B0B4F4* L_0 = __this->___m_ListData;
		int32_t L_1 = ___0_index;
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_2;
		L_2 = UnsafeList_1_get_Item_mDCBDF29EBE7CBAC8E3079695C5A732EAB19978B4_inline((UnsafeList_1_t7517BB16A0F7933063E20E60999A377DE8B0B4F4*)L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* BlobBuilderArray_1_GetUnsafePtr_mC894A9506A69AE0041E008C9BDEC6DB0B732FE22_gshared_inline (BlobBuilderArray_1_t5B3DC5242B2D9A248557AE9E6482FAAADCF8C152* __this, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->___m_data;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(int32_t);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6C198B51ACD7B8EC62D5E0E75433C12BE9D65A58_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint64_t);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1_inline (int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeList_1_get_Length_mCC820C658B1BB4A17962AB76F15B049E3F24CD58_gshared_inline (UnsafeList_1_tA068C24D5E1D5CBC03E6D51E587FF66C4EC0C8E3* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_length;
		int32_t L_1;
		L_1 = CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 UnsafeList_1_get_Item_mE5CDA9830B21C68F834C0DA5D9AAB8384DC0D6ED_gshared_inline (UnsafeList_1_tA068C24D5E1D5CBC03E6D51E587FF66C4EC0C8E3* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8* L_0 = __this->___Ptr;
		int32_t L_1 = ___0_index;
		int32_t L_2;
		L_2 = CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1_inline(L_1, NULL);
		uint32_t L_3 = sizeof(BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8);
		BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8 L_4 = (*(BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8*)((BlobAllocation_t9B295B60425C5C0ABA2633DDF2E57B3FE7DD4ED8*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2), (int32_t)L_3)))));
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeList_1_get_Length_mA49FF92B2235FC7B131269EB9560EBE9B6F9ECF6_gshared_inline (UnsafeList_1_t7517BB16A0F7933063E20E60999A377DE8B0B4F4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_length;
		int32_t L_1;
		L_1 = CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 UnsafeList_1_get_Item_mDCBDF29EBE7CBAC8E3079695C5A732EAB19978B4_gshared_inline (UnsafeList_1_t7517BB16A0F7933063E20E60999A377DE8B0B4F4* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982* L_0 = __this->___Ptr;
		int32_t L_1 = ___0_index;
		int32_t L_2;
		L_2 = CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1_inline(L_1, NULL);
		uint32_t L_3 = sizeof(OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982);
		OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982 L_4 = (*(OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982*)((OffsetPtrPatch_t1156A314B5BABC4F59DD4ABD66DE071058CBE982*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2), (int32_t)L_3)))));
		return L_4;
	}
}
