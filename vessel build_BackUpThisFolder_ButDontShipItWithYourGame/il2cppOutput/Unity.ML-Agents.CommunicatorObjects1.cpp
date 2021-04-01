﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericVirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// Google.Protobuf.ByteString
struct ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A;
// Google.Protobuf.CodedInputStream
struct CodedInputStream_t90AE13DCCB9A5F6C02B698E7EDC3E79A5F585C24;
// Google.Protobuf.CodedOutputStream
struct CodedOutputStream_tEDA55D3B33B67A94D65BA47D099A2710F29AEDCA;
// Google.Protobuf.Collections.MapField`2/Codec<System.Object,System.Object>
struct Codec_tB7CC16BE96428FDE1E5305EEF6EC2ED39D422CDF;
// Google.Protobuf.Collections.MapField`2/Codec<System.String,Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto>
struct Codec_tE5E96F1D701ECCAAC649B5851698F7B1956637AE;
// Google.Protobuf.Collections.MapField`2/Codec<System.String,Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto>
struct Codec_t783AB5BD5C8C87BB04A840234E5A6E38B1991493;
// Google.Protobuf.Collections.MapField`2<System.Object,System.Object>
struct MapField_2_t9A247BA10907DD9E1A37F776352D35F07C4B496D;
// Google.Protobuf.Collections.MapField`2<System.String,Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto>
struct MapField_2_tD148F5CFC6F243B4A02E983CBB129C24B8AB69FB;
// Google.Protobuf.Collections.MapField`2<System.String,Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto>
struct MapField_2_t8BA58C589830633C7DCCC6E650D623B9E1EDC681;
// Google.Protobuf.Collections.RepeatedField`1<System.Boolean>
struct RepeatedField_1_t9901F9D2108DE5040A0A5A29CA8FBCC20E79E4C0;
// Google.Protobuf.Collections.RepeatedField`1<System.Int32>
struct RepeatedField_1_t2FE11A70F0B15E2630371E2BA4F257FAE77EB8CF;
// Google.Protobuf.Collections.RepeatedField`1<System.Object>
struct RepeatedField_1_tBF0488B7C5CB27F3CBE6EA8D004EC5133252BF66;
// Google.Protobuf.Collections.RepeatedField`1<System.Single>
struct RepeatedField_1_tADBF45AB25450D0E223099AC57419E83C7A3B28A;
// Google.Protobuf.Collections.RepeatedField`1<Unity.MLAgents.CommunicatorObjects.AgentActionProto>
struct RepeatedField_1_t5CED0C9D40D73B800EBF4F7240C943DC34F268E5;
// Google.Protobuf.Collections.RepeatedField`1<Unity.MLAgents.CommunicatorObjects.AgentInfoProto>
struct RepeatedField_1_tCF11F7126638E9C61AA512264FF6A708BACA9785;
// Google.Protobuf.Collections.RepeatedField`1<Unity.MLAgents.CommunicatorObjects.BrainParametersProto>
struct RepeatedField_1_tF7E5C2E34CB19414ED5DE55A400AB54ED2562A24;
// Google.Protobuf.Collections.RepeatedField`1<Unity.MLAgents.CommunicatorObjects.ObservationProto>
struct RepeatedField_1_t927D7B7E19B410D15F22A7633BDC5F9B60447354;
// Google.Protobuf.ExtensionRegistry
struct ExtensionRegistry_t9CDDB7C7F80CE3A85108DCBB9F87E7DDCE3B7C45;
// Google.Protobuf.Extension[]
struct ExtensionU5BU5D_t2681A83D242011D183C2C5D69B53BDF490D9BB0B;
// Google.Protobuf.FieldCodec`1/InputMerger<System.String>
struct InputMerger_t9347585101A9426897B4196D1866708637802C70;
// Google.Protobuf.FieldCodec`1/InputMerger<Unity.MLAgents.CommunicatorObjects.AgentActionProto>
struct InputMerger_t19397F2296E1355B113A3C055FF877B61EFB58DD;
// Google.Protobuf.FieldCodec`1/InputMerger<Unity.MLAgents.CommunicatorObjects.AgentInfoProto>
struct InputMerger_t88D25A1A4628219B16FA969F3B96D81A9840BA65;
// Google.Protobuf.FieldCodec`1/InputMerger<Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto>
struct InputMerger_tB33D2F00DAA89F31072B8E37A78794943E7B1BA0;
// Google.Protobuf.FieldCodec`1/InputMerger<Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto>
struct InputMerger_t0E91EC955D8AD8714888BAD28111A486EEFC9B7C;
// Google.Protobuf.FieldCodec`1/ValuesMerger<System.String>
struct ValuesMerger_t2A3FF69221EF6DB250C67A1627C966497B41FC1E;
// Google.Protobuf.FieldCodec`1/ValuesMerger<Unity.MLAgents.CommunicatorObjects.AgentActionProto>
struct ValuesMerger_t96BC9AD302569F9DC87C977FD66F26C2D24F4EBD;
// Google.Protobuf.FieldCodec`1/ValuesMerger<Unity.MLAgents.CommunicatorObjects.AgentInfoProto>
struct ValuesMerger_t4B955A0E621B9C7A7EBCAD931EDE5EE6BEADE1E9;
// Google.Protobuf.FieldCodec`1/ValuesMerger<Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto>
struct ValuesMerger_t1D22EC12BA2390E43412499B1E2BECC8497F78C5;
// Google.Protobuf.FieldCodec`1/ValuesMerger<Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto>
struct ValuesMerger_t8A02401F0FF550E92681D1F5E828A904E87C4AF8;
// Google.Protobuf.FieldCodec`1<System.Boolean>
struct FieldCodec_1_tCC2D2903A8B4AD7D178A1848A0DA28764970C5EC;
// Google.Protobuf.FieldCodec`1<System.Int32>
struct FieldCodec_1_t593710254A7A74A3E80CD3253F1428CDAA46CF4A;
// Google.Protobuf.FieldCodec`1<System.Object>
struct FieldCodec_1_t247D609E831262BE600C1FF19B989C9E7A3AFBC7;
// Google.Protobuf.FieldCodec`1<System.Single>
struct FieldCodec_1_t3911AD6F4573B14A418A1A590B8C456C4A1192D2;
// Google.Protobuf.FieldCodec`1<System.String>
struct FieldCodec_1_t156034F6D44891148E8D3C98BCDB5672D2CE4A29;
// Google.Protobuf.FieldCodec`1<Unity.MLAgents.CommunicatorObjects.AgentActionProto>
struct FieldCodec_1_t81FE647280EF3EFB39888CEE098EFFFABD0EB887;
// Google.Protobuf.FieldCodec`1<Unity.MLAgents.CommunicatorObjects.AgentInfoProto>
struct FieldCodec_1_tCA7C1F70281CCD6EEAB215F57EF24B5E6CFCC629;
// Google.Protobuf.FieldCodec`1<Unity.MLAgents.CommunicatorObjects.BrainParametersProto>
struct FieldCodec_1_t8BC11DDB3E1B80B4EE880B2ED9F16B2420D4810D;
// Google.Protobuf.FieldCodec`1<Unity.MLAgents.CommunicatorObjects.ObservationProto>
struct FieldCodec_1_tF0C9D51EE424A06F75137229FE8CE2A4D893B28A;
// Google.Protobuf.FieldCodec`1<Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto>
struct FieldCodec_1_tB768A791704F24E2C2B5A284921F7D1D808778F5;
// Google.Protobuf.FieldCodec`1<Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto>
struct FieldCodec_1_t28E6C8B6C890722CF301D6ADEA9FA22C442E2791;
// Google.Protobuf.IMessage
struct IMessage_tA5DABB37E85570E85068800E3C4D00695A0E9377;
// Google.Protobuf.MessageParser
struct MessageParser_t194BE39F7FDA7A23C5A94D642095A044763C8FAD;
// Google.Protobuf.MessageParser`1<System.Object>
struct MessageParser_1_tC61CC0171F3D1FDC02619F563F6017CE1B28B1DF;
// Google.Protobuf.MessageParser`1<Unity.MLAgents.CommunicatorObjects.AgentActionProto>
struct MessageParser_1_tDD093BAC6289A0E6913065203F01B017D3F705E2;
// Google.Protobuf.MessageParser`1<Unity.MLAgents.CommunicatorObjects.AgentInfoProto>
struct MessageParser_1_t22E2BEA51C2B5AD6B1005D5F6AD497277762E2CE;
// Google.Protobuf.MessageParser`1<Unity.MLAgents.CommunicatorObjects.UnityMessageProto>
struct MessageParser_1_t352DB8B114FB0010B1737343561DB051851EA4F7;
// Google.Protobuf.MessageParser`1<Unity.MLAgents.CommunicatorObjects.UnityRLInitializationInputProto>
struct MessageParser_1_t282425D3E3A384629DB8B5E5A41C1299DA1FF2FE;
// Google.Protobuf.MessageParser`1<Unity.MLAgents.CommunicatorObjects.UnityRLInitializationOutputProto>
struct MessageParser_1_t11F6130B5701C9992E0A73F4900A7816D14A3319;
// Google.Protobuf.MessageParser`1<Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto>
struct MessageParser_1_t5420BF51729BDB4FBC6434906782CFC4FE81F541;
// Google.Protobuf.MessageParser`1<Unity.MLAgents.CommunicatorObjects.UnityRLInputProto>
struct MessageParser_1_t76C3D8CC3698E2678107C9AB953C0ED781186CFC;
// Google.Protobuf.MessageParser`1<Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto>
struct MessageParser_1_tFCC153276983A237B272DFE38939C2203C07096E;
// Google.Protobuf.MessageParser`1<Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto>
struct MessageParser_1_t599AFE94D623A6084E4A6E9656D1DE8C69383948;
// Google.Protobuf.Reflection.DescriptorPool
struct DescriptorPool_t0E3340D6F33B7ECB5676256EABDC2B95D0992A02;
// Google.Protobuf.Reflection.DescriptorProto
struct DescriptorProto_tE6B15DCFADA9CC164A7AB69A6D7C91911A2FA1F0;
// Google.Protobuf.Reflection.ExtensionCollection
struct ExtensionCollection_tF96B3043CB25F9B83D1CCD7474DA5D16335E0991;
// Google.Protobuf.Reflection.FileDescriptor
struct FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5;
// Google.Protobuf.Reflection.FileDescriptorProto
struct FileDescriptorProto_t14C58A997A94BEB3E31C5EB7691B5774C68F69A6;
// Google.Protobuf.Reflection.FileDescriptor[]
struct FileDescriptorU5BU5D_t91F2611AD4922B7697DBD2C6C8627C68AE7B2D4B;
// Google.Protobuf.Reflection.GeneratedClrTypeInfo
struct GeneratedClrTypeInfo_tF2F0DF2AAEC92C81106422AB98D931414053DE97;
// Google.Protobuf.Reflection.GeneratedClrTypeInfo[]
struct GeneratedClrTypeInfoU5BU5D_t38490948FF5D4B2D4E8557D1209161FDA3B07C87;
// Google.Protobuf.Reflection.MessageDescriptor
struct MessageDescriptor_t66BFACC1855F8CF3B4F0FB366C773ECDCBE900CB;
// Google.Protobuf.Reflection.MessageDescriptor/FieldCollection
struct FieldCollection_t4356FD08307DCE65A0B9F2850EED4F2407B65A2C;
// Google.Protobuf.UnknownField
struct UnknownField_t356B5CFFC7BA62EC0593C9028B3A0C9DE8D8E77F;
// Google.Protobuf.UnknownFieldSet
struct UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5;
// Grpc.Core.CallCredentials
struct CallCredentials_t2FE73AD74309014E2602D649F67CB2A1B9A026F1;
// Grpc.Core.CallInvoker
struct CallInvoker_t8D08B1AC2305E30108FB2F8AFBB87380CB354565;
// Grpc.Core.Channel
struct Channel_tACA478F7B1F9D4A2151EF268E78A232E7EF5B765;
// Grpc.Core.ClientBase
struct ClientBase_t7D7B773C37F5A5D8F3791A3A98E58570F38A7727;
// Grpc.Core.ClientBase/ClientBaseConfiguration
struct ClientBaseConfiguration_t4903F42238056164FC98C7CF199E2DBB392D844D;
// Grpc.Core.ClientBase`1<System.Object>
struct ClientBase_1_t09D783ECF519C9C40911F986D4F5CD2E4BE408E5;
// Grpc.Core.ClientBase`1<Unity.MLAgents.CommunicatorObjects.UnityToExternalProto/UnityToExternalProtoClient>
struct ClientBase_1_t79B82AAC18F5519EE8A925984D3B9C7B412DF28E;
// Grpc.Core.ContextPropagationOptions
struct ContextPropagationOptions_t2E52B62A06CAFA256A454F547C5099A0F611090E;
// Grpc.Core.ContextPropagationToken
struct ContextPropagationToken_t0170EC5F7D6ABBDE5E53D75D19385B88C4724D6D;
// Grpc.Core.GrpcEnvironment
struct GrpcEnvironment_t050C93796F0457E6CE96F96F532B94E92681EE88;
// Grpc.Core.Internal.AtomicCounter
struct AtomicCounter_tAE814F7D7689D949BC63A56CD8DF1D5D6C5ADFE6;
// Grpc.Core.Internal.BatchCompletionDelegate
struct BatchCompletionDelegate_t7373F9B79590F33A601F074B9D3BE5E8DC3BFA9F;
// Grpc.Core.Internal.CallSafeHandle
struct CallSafeHandle_t1C036E83BF77C1F2B25E5FFD5723776426955017;
// Grpc.Core.Internal.ChannelSafeHandle
struct ChannelSafeHandle_t5961F0FF2E6CAAE58B76445E048823D739BAD381;
// Grpc.Core.Internal.CompletionQueueSafeHandle
struct CompletionQueueSafeHandle_t51DCE7AF65E262316D3C3DFDEC1C660A7725B97C;
// Grpc.Core.Logging.ILogger
struct ILogger_tE6164A998434654F828A0C8794FE569417F5A40A;
// Grpc.Core.Marshaller`1<System.Object>
struct Marshaller_1_t1529DDC601D917B92DABE5F611360766CB4976A2;
// Grpc.Core.Marshaller`1<Unity.MLAgents.CommunicatorObjects.UnityMessageProto>
struct Marshaller_1_t9D307945ED8B62035303716CA88CBE969F20136B;
// Grpc.Core.Metadata
struct Metadata_t26C6E825EB0A531EB2CDB3A5F149BA44336193F8;
// Grpc.Core.Method`2<System.Object,System.Object>
struct Method_2_tB9E3D6158231CA1BDA80FE2F4716E0FC1A865772;
// Grpc.Core.Method`2<Unity.MLAgents.CommunicatorObjects.UnityMessageProto,Unity.MLAgents.CommunicatorObjects.UnityMessageProto>
struct Method_2_t2C16E4478D00E27E608963926C184DF53BA57473;
// Grpc.Core.WriteOptions
struct WriteOptions_t3D98497F20B5373A61127A45647E5E8B7B7211EE;
// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.Action`2<Google.Protobuf.CodedOutputStream,System.String>
struct Action_2_tEDB3248B7697EBF1D27F0264CA7DC474DF77C7E9;
// System.Action`2<Google.Protobuf.CodedOutputStream,Unity.MLAgents.CommunicatorObjects.AgentActionProto>
struct Action_2_tDF0734F3DC6568F0D1AFE8E7363105134BDED33E;
// System.Action`2<Google.Protobuf.CodedOutputStream,Unity.MLAgents.CommunicatorObjects.AgentInfoProto>
struct Action_2_tBAF7338CCAC68ACBBCF6DBC59E4E4F3DE33EA648;
// System.Action`2<Google.Protobuf.CodedOutputStream,Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto>
struct Action_2_t7A1D71D259CADF99E4E8AE22C12157AA03CB4117;
// System.Action`2<Google.Protobuf.CodedOutputStream,Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto>
struct Action_2_t0D879364088CACCBFD5C8BBF114365F04ACEDCDB;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.String,Grpc.Core.ChannelOption>
struct Dictionary_2_t314F26391A5660B4A906607C5BC3E8DF97D0F43B;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.LinkedListNode`1<System.Collections.Generic.KeyValuePair`2<System.String,Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto>>>
struct Dictionary_2_tEE11B88E9B95EA98512058AE3484451DF5B786ED;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.LinkedListNode`1<System.Collections.Generic.KeyValuePair`2<System.String,Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto>>>
struct Dictionary_2_tA755EDC4E84BC2B28A296C051CDA8DD40DA7FC1D;
// System.Collections.Generic.EqualityComparer`1<System.String>
struct EqualityComparer_1_tBEFFC6F649A17852373A084880D57CB299084137;
// System.Collections.Generic.EqualityComparer`1<Unity.MLAgents.CommunicatorObjects.AgentActionProto>
struct EqualityComparer_1_t661212EE586E6AC24DC4EA6BC049C096D8519586;
// System.Collections.Generic.EqualityComparer`1<Unity.MLAgents.CommunicatorObjects.AgentInfoProto>
struct EqualityComparer_1_t697882B8B985505A5044DAC80E324F1C0FB2D292;
// System.Collections.Generic.EqualityComparer`1<Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto>
struct EqualityComparer_1_t71DDE0F67797C2833DD0FEDDCCB0F4CEBEF00B2D;
// System.Collections.Generic.EqualityComparer`1<Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto>
struct EqualityComparer_1_tB6D440167991272A52D7189C931DDE77F0A59AF5;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A;
// System.Collections.Generic.IDictionary`2<System.Int32,Google.Protobuf.UnknownField>
struct IDictionary_2_tD74657D8E5A485708455BDB648C53257A1341FBD;
// System.Collections.Generic.IDictionary`2<System.Object,System.Object>
struct IDictionary_2_tF77278125F2C7A401884F0168E974ADB442020AF;
// System.Collections.Generic.IDictionary`2<System.String,Google.Protobuf.Reflection.FieldDescriptor>
struct IDictionary_2_tFDA90545E581CC54A58B5146E9E5CE971924764F;
// System.Collections.Generic.IDictionary`2<System.String,Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto>
struct IDictionary_2_tFA4D008891D548650D8B44ECB16CAA8937847117;
// System.Collections.Generic.IDictionary`2<System.String,Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto>
struct IDictionary_2_tC8F9E01AB51D1BFD00D2F99DC8AEB8C6BC5B925B;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2F75FCBEC68AFE08982DA43985F9D04056E2BE73;
// System.Collections.Generic.IEnumerable`1<Unity.MLAgents.CommunicatorObjects.AgentActionProto>
struct IEnumerable_1_t88CBB795069F893D573131C18C1FBD31587C98FF;
// System.Collections.Generic.IEnumerable`1<Unity.MLAgents.CommunicatorObjects.AgentInfoProto>
struct IEnumerable_1_tA3877339964AA8E64DDB3C0035288D906C75D89E;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.EnumDescriptor>
struct IList_1_tD9437695E019DBE50C37F8209CAE19F828927AD1;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor>
struct IList_1_t49926E1A6ADE2BD4A4F36F732CD64782C58F18DF;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FileDescriptor>
struct IList_1_t3428FB6510115BB0181FFF35C5374D910C152D55;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor>
struct IList_1_tBFA28A10AE545176F19CEBAE995B37D51D9B5EE1;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.OneofDescriptor>
struct IList_1_t3C301385B944D5408E331A4A013AC5C0B2F9A8FF;
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.ServiceDescriptor>
struct IList_1_t89AAA9DEBFD2D5AC5E6B23D192FD2B68CC9A3D7C;
// System.Collections.Generic.LinkedList`1<System.Collections.Generic.KeyValuePair`2<System.String,Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto>>
struct LinkedList_1_tE24914557CAEA884912D4F532A16378E4543A6C1;
// System.Collections.Generic.LinkedList`1<System.Collections.Generic.KeyValuePair`2<System.String,Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto>>
struct LinkedList_1_tCF1BEDB5C4E3D714DAEAA0C22D3A3067B506602C;
// System.Collections.Generic.List`1<Grpc.Core.Metadata/Entry>
struct List_1_t1D0476DB02B972924764584B975FF73B5C6BEDBF;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Func`1<Google.Protobuf.IMessage>
struct Func_1_tB4CF360F61E295CA69591D3966F68E37294E3C0E;
// System.Func`1<System.Object>
struct Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386;
// System.Func`1<Unity.MLAgents.CommunicatorObjects.AgentActionProto>
struct Func_1_tE2434591EF0FE2F9DFA8960400343267E5769993;
// System.Func`1<Unity.MLAgents.CommunicatorObjects.AgentInfoProto>
struct Func_1_tFAFC0C443FE7B4F5861F828B95752B38B155BB42;
// System.Func`1<Unity.MLAgents.CommunicatorObjects.UnityMessageProto>
struct Func_1_t107B32A82EC6D672A1DD7A8885E4802353485CBE;
// System.Func`1<Unity.MLAgents.CommunicatorObjects.UnityRLInitializationInputProto>
struct Func_1_t5D7EB8E27878EDCE8227AE44C3E2A0C396D73F09;
// System.Func`1<Unity.MLAgents.CommunicatorObjects.UnityRLInitializationOutputProto>
struct Func_1_tA7F576DC8C9110C57338FAC8C602D7138AEBD7FF;
// System.Func`1<Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto>
struct Func_1_t8BC331C95BEB4D5B22FA94D469CC99C18D998D55;
// System.Func`1<Unity.MLAgents.CommunicatorObjects.UnityRLInputProto>
struct Func_1_t288173BF3A6E883F68A0606FEF98AF1788CD8382;
// System.Func`1<Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto>
struct Func_1_tF822C61A09E63838B55573EB289FC36FBF1F7DFF;
// System.Func`1<Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto>
struct Func_1_tDC2B2E30FB41913C53E3A196F871F8F1B2C5DEF9;
// System.Func`2<Google.Protobuf.CodedInputStream,System.String>
struct Func_2_t2354D14485FA25028E41A18C348288155054D0B9;
// System.Func`2<Google.Protobuf.CodedInputStream,Unity.MLAgents.CommunicatorObjects.AgentActionProto>
struct Func_2_t99A6031AE11752B433A23DDDB49E00C351FB27F4;
// System.Func`2<Google.Protobuf.CodedInputStream,Unity.MLAgents.CommunicatorObjects.AgentInfoProto>
struct Func_2_tBE80A8223652FBC73D2DACD0D9552A0A236DDA05;
// System.Func`2<Google.Protobuf.CodedInputStream,Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto>
struct Func_2_t950BB7251B661DF84C4077856A983E6E462EA874;
// System.Func`2<Google.Protobuf.CodedInputStream,Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto>
struct Func_2_tD4A722E4F08A7B7D051B0EB6895403A187578DB0;
// System.Func`2<System.Byte[],System.Object>
struct Func_2_t8376A1F3AC1F26DE15B452E59E20AC4CFD3079A8;
// System.Func`2<System.Byte[],Unity.MLAgents.CommunicatorObjects.UnityMessageProto>
struct Func_2_t1B7D640DEA23BEFB06C17E1A1058A412B8A02A18;
// System.Func`2<System.Object,System.Byte[]>
struct Func_2_t2946281ED39AE51B6768E719C5E755882180A50A;
// System.Func`2<System.Object,System.Object>
struct Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4;
// System.Func`2<System.String,System.Int32>
struct Func_2_t2901F617470C55B4D846B4CEB9391D398E86C62C;
// System.Func`2<Unity.MLAgents.CommunicatorObjects.AgentActionProto,System.Int32>
struct Func_2_t72A2262359CFF63919A786B321B126FE4A7BB1B5;
// System.Func`2<Unity.MLAgents.CommunicatorObjects.AgentInfoProto,System.Int32>
struct Func_2_t73B65842E05C621A824BCBD10B37FDC738C05734;
// System.Func`2<Unity.MLAgents.CommunicatorObjects.UnityMessageProto,System.Byte[]>
struct Func_2_tD5F010B2FE5FD8A131A1E87650D1ACFDEB9DFA81;
// System.Func`2<Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto,System.Int32>
struct Func_2_tD4F3033200C2B46943442AEDAF18AD64FA1C6652;
// System.Func`2<Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto,System.Int32>
struct Func_2_t4744A212B6F32D01E8832067A07C7D4818BF21BF;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IO.Stream
struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Lazy`1<System.Collections.Generic.Dictionary`2<Google.Protobuf.Reflection.IDescriptor,Google.Protobuf.Reflection.DescriptorDeclaration>>
struct Lazy_1_tFEE7EF30F90C378B3B7777F147F19F5FAE949584;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Text.Encoding
struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE;
// System.Threading.Tasks.Task
struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// Unity.MLAgents.CommunicatorObjects.AgentActionProto
struct AgentActionProto_tD039A9669DE32649580A51A04DC77145F5D748C9;
// Unity.MLAgents.CommunicatorObjects.AgentActionProto[]
struct AgentActionProtoU5BU5D_tF820BA069182EF5A73BC78C4838650C447E998F3;
// Unity.MLAgents.CommunicatorObjects.AgentInfoProto
struct AgentInfoProto_tB07CB4D6C9A6367975913C1581FAA29FDB4FF5B0;
// Unity.MLAgents.CommunicatorObjects.AgentInfoProto[]
struct AgentInfoProtoU5BU5D_t9CA186F9736099591547C51C8BCD8AB9BF8B43BE;
// Unity.MLAgents.CommunicatorObjects.HeaderProto
struct HeaderProto_t43CFF9CBED56F7CCAFF7D02B94405CB4BA7D1B8F;
// Unity.MLAgents.CommunicatorObjects.UnityInputProto
struct UnityInputProto_t5CF40522317C12CD281AA7FBA1EC51FB9F183BEE;
// Unity.MLAgents.CommunicatorObjects.UnityMessageProto
struct UnityMessageProto_tD5391F5B3FDFAFE6B6AEC00BEED8871DCD4B2B26;
// Unity.MLAgents.CommunicatorObjects.UnityOutputProto
struct UnityOutputProto_t93805FFF4DC5692F244FA2A945F93128E5B955ED;
// Unity.MLAgents.CommunicatorObjects.UnityRLCapabilitiesProto
struct UnityRLCapabilitiesProto_t8DC7478490CD77D975FB667731185C2A16374675;
// Unity.MLAgents.CommunicatorObjects.UnityRLInitializationOutputProto
struct UnityRLInitializationOutputProto_tC42D4D6F0F04C6EC9171D63F974FEBFD70943CA0;
// Unity.MLAgents.CommunicatorObjects.UnityRLInitializationOutputProto/<>c
struct U3CU3Ec_tB06FDCE551BEEA534930B9EDDACE5460F74B356C;
// Unity.MLAgents.CommunicatorObjects.UnityRLInputProto
struct UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0;
// Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/<>c
struct U3CU3Ec_t8C8913C1ED402AE5A22F45AEFE071BC747C307F9;
// Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto
struct ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925;
// Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto/<>c
struct U3CU3Ec_tE8A7A790398B36ED81CC520B108127AB5D297DBB;
// Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto
struct UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7;
// Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/<>c
struct U3CU3Ec_t1C9BDC2165F2217C8C45838436E89F90ABEC413C;
// Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto
struct ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354;
// Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto/<>c
struct U3CU3Ec_tBA763BFD8BA8427B116C9861173A6C8BE5876A30;
// Unity.MLAgents.CommunicatorObjects.UnityToExternalProto/<>c
struct U3CU3Ec_tE239152597DE8CE5ACBF9989618F9AE0A5ADD1AD;
// Unity.MLAgents.CommunicatorObjects.UnityToExternalProto/UnityToExternalProtoClient
struct UnityToExternalProtoClient_t924C92326C6A8ECD20D82F229CB1CA8B7AE2E1E2;

IL2CPP_EXTERN_C RuntimeClass* AgentActionProto_tD039A9669DE32649580A51A04DC77145F5D748C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AgentActionReflection_tBA544673D5D08C2470AB2DDB97F023BD10EDA367_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AgentInfoProto_tB07CB4D6C9A6367975913C1581FAA29FDB4FF5B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AgentInfoReflection_t49013675F1E2B6D3F15FB8FB3FBB07C33555B3BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BrainParametersReflection_tFA72E8BF1EB04761020D829D76D68A89FD9ED905_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CapabilitiesReflection_tB11BAD1ED4A2E9994A7AA8AEAFF5FEE02FF83C07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Codec_t783AB5BD5C8C87BB04A840234E5A6E38B1991493_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Codec_tE5E96F1D701ECCAAC649B5851698F7B1956637AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CodedOutputStream_tEDA55D3B33B67A94D65BA47D099A2710F29AEDCA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CommandReflection_t3F6C832949B0C06BB4474B84EBAAAACAB7160E74_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileDescriptorU5BU5D_t91F2611AD4922B7697DBD2C6C8627C68AE7B2D4B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t288173BF3A6E883F68A0606FEF98AF1788CD8382_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t8BC331C95BEB4D5B22FA94D469CC99C18D998D55_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_tDC2B2E30FB41913C53E3A196F871F8F1B2C5DEF9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_tF822C61A09E63838B55573EB289FC36FBF1F7DFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t1B7D640DEA23BEFB06C17E1A1058A412B8A02A18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tD5F010B2FE5FD8A131A1E87650D1ACFDEB9DFA81_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GeneratedClrTypeInfoU5BU5D_t38490948FF5D4B2D4E8557D1209161FDA3B07C87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GeneratedClrTypeInfo_tF2F0DF2AAEC92C81106422AB98D931414053DE97_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_tBFA28A10AE545176F19CEBAE995B37D51D9B5EE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonFormatter_tFF068B629D936222A398D2CDBD4A445525D3E5E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MapField_2_t8BA58C589830633C7DCCC6E650D623B9E1EDC681_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MapField_2_tD148F5CFC6F243B4A02E983CBB129C24B8AB69FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageParser_1_t5420BF51729BDB4FBC6434906782CFC4FE81F541_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageParser_1_t599AFE94D623A6084E4A6E9656D1DE8C69383948_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageParser_1_t76C3D8CC3698E2678107C9AB953C0ED781186CFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageParser_1_tFCC153276983A237B272DFE38939C2203C07096E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Method_2_t2C16E4478D00E27E608963926C184DF53BA57473_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RepeatedField_1_t5CED0C9D40D73B800EBF4F7240C943DC34F268E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RepeatedField_1_tCF11F7126638E9C61AA512264FF6A708BACA9785_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t1C9BDC2165F2217C8C45838436E89F90ABEC413C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t8C8913C1ED402AE5A22F45AEFE071BC747C307F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tB06FDCE551BEEA534930B9EDDACE5460F74B356C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tBA763BFD8BA8427B116C9861173A6C8BE5876A30_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tE239152597DE8CE5ACBF9989618F9AE0A5ADD1AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tE8A7A790398B36ED81CC520B108127AB5D297DBB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityMessageProto_tD5391F5B3FDFAFE6B6AEC00BEED8871DCD4B2B26_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityRLInitializationInputProto_t80AF7CBDE43BD9439BDCC706F66B3EE5BCCF2762_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityRLInitializationOutputProto_tC42D4D6F0F04C6EC9171D63F974FEBFD70943CA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityRlInitializationInputReflection_t81105574968FC44D34BD8A1EC3A81E7EB0B76E0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityRlInitializationOutputReflection_t9544B7A86BEA02854A27B25C2BC75A1C45EEBADB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityRlInputReflection_t44A240DE4E74AC47F66186A3A0BB165E653A6EF6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityRlOutputReflection_t0776186F804074BFA18A3600865C682779F04F75_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityToExternalProto_t8BBC923650009D9E6B779D97F6C57AE79B7F0B44_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral07AC4E40643C83D5C018288B4C2B24E7D45A366A;
IL2CPP_EXTERN_C String_t* _stringLiteral07F3D39003F8CB26C2CCE0B40D99701F6F34AC5B;
IL2CPP_EXTERN_C String_t* _stringLiteral0E8F1680002D16E08FCEA6419FEE9537363EECF1;
IL2CPP_EXTERN_C String_t* _stringLiteral118A9E4BA5D67005E185C8F8E7088BDDCB010470;
IL2CPP_EXTERN_C String_t* _stringLiteral17CDCBE2C8B55C2BD5761E757EE46502CF6AE8F1;
IL2CPP_EXTERN_C String_t* _stringLiteral193EF931A5559CABD96FB5DB88CFC4028C2C6805;
IL2CPP_EXTERN_C String_t* _stringLiteral1DEDC1D5E9E29DFCFCAEDA2B2FD5F6646031A748;
IL2CPP_EXTERN_C String_t* _stringLiteral1E2AEE4D7835C3309CE031322F2458FDEF11FB65;
IL2CPP_EXTERN_C String_t* _stringLiteral206CFF761A69D71EB982D6A75114A97C4BCD6BCF;
IL2CPP_EXTERN_C String_t* _stringLiteral239C86EEE283D24DB2F0C5B29FE2FCC718AAFFBB;
IL2CPP_EXTERN_C String_t* _stringLiteral245D9552E03A552F43CC76343346D5EE3F2B8AD8;
IL2CPP_EXTERN_C String_t* _stringLiteral2EDAF1B67BFBD51BFDEF1ECC4DA9BAA1C1151F25;
IL2CPP_EXTERN_C String_t* _stringLiteral32FE9F5BDA708F956B34E6513BBED17121F39547;
IL2CPP_EXTERN_C String_t* _stringLiteral34E7C6949E83E1DBFBCEE82BBB3EA5F4140D48D5;
IL2CPP_EXTERN_C String_t* _stringLiteral3B249EFFA8F1E30D9233C2064C88CE204DD59164;
IL2CPP_EXTERN_C String_t* _stringLiteral53EC5992E9FDDF6202B91779CD6D153FA39278E0;
IL2CPP_EXTERN_C String_t* _stringLiteral541D601CCE75BC11048E5E4D46F3BDB308D06A53;
IL2CPP_EXTERN_C String_t* _stringLiteral5A048F80A4E7952A615F9F1F43E82F4CB2BA3519;
IL2CPP_EXTERN_C String_t* _stringLiteral5A9D51970BF760BC801196CC6808122A6E291EC0;
IL2CPP_EXTERN_C String_t* _stringLiteral5B13EAC7ED3A5CDEAB32EAAC51566E907C891622;
IL2CPP_EXTERN_C String_t* _stringLiteral5E584DFF861AC0CDFA0A2EF6590535448FE36593;
IL2CPP_EXTERN_C String_t* _stringLiteral5F0A923FF2BB3A204ED7D0CCA98CA1BAB7EFEE40;
IL2CPP_EXTERN_C String_t* _stringLiteral5F7D6B7188F8AE28C5CB69F7A421C495BF9C5BDC;
IL2CPP_EXTERN_C String_t* _stringLiteral5FD9935F3F24322FB447BE5E2DD698F06C0BB06B;
IL2CPP_EXTERN_C String_t* _stringLiteral690454EDCC5DFC6572D201C46BA29D60390979CE;
IL2CPP_EXTERN_C String_t* _stringLiteral6C219D73CB2D1FA5A4034B3C448CB463A3627355;
IL2CPP_EXTERN_C String_t* _stringLiteral709A23220F2C3D64D1E1D6D18C4D5280F8D82FCA;
IL2CPP_EXTERN_C String_t* _stringLiteral7236E68F716DDF5ADA5B6E919C36E4906A725351;
IL2CPP_EXTERN_C String_t* _stringLiteral7994115DCA7E35129CBEC37468FB3C229F8C72C2;
IL2CPP_EXTERN_C String_t* _stringLiteral7EA29F8D4D04B483D33CFD61C40EC1CE7FDA757D;
IL2CPP_EXTERN_C String_t* _stringLiteral829E8FAE4BB9AE000311B3EC7C8000E4C10772E8;
IL2CPP_EXTERN_C String_t* _stringLiteral87B2A5A4C3B91CF63C91453F4CFB8BE698E7F335;
IL2CPP_EXTERN_C String_t* _stringLiteral8901895FB1B1D4C4EA2FEC368C25176BF73E2F7E;
IL2CPP_EXTERN_C String_t* _stringLiteral897594AF724704BB36459D4B550928A527E1A687;
IL2CPP_EXTERN_C String_t* _stringLiteral8B0ABA24039E14E7C8527BA441D01D2F155C0FBD;
IL2CPP_EXTERN_C String_t* _stringLiteral8BE25866D237EBE052298B2617F4E4A3AC200DC4;
IL2CPP_EXTERN_C String_t* _stringLiteral8D17CDF24AB47C8A7D4A97CA89AE6E25F8152FA2;
IL2CPP_EXTERN_C String_t* _stringLiteral8DCE170DE238B1FEDA2ECD9674EA3CA0D068FBCB;
IL2CPP_EXTERN_C String_t* _stringLiteral927CC63DD0E7D2FDB4F08536CAC9967C907496AF;
IL2CPP_EXTERN_C String_t* _stringLiteral965427B8585608AC9D4CBA044F560DBFEC070A62;
IL2CPP_EXTERN_C String_t* _stringLiteral96D4612A372C8A6F143537A110A84EEBABCFE2FA;
IL2CPP_EXTERN_C String_t* _stringLiteral979A119EC9266B70BD9A952B8EF50757E9831C6C;
IL2CPP_EXTERN_C String_t* _stringLiteral9955750869EC6D81959EC7650AAC53D010E4373C;
IL2CPP_EXTERN_C String_t* _stringLiteral9F48921A45C7C3B043F1B8C608C0A31DBE3124B8;
IL2CPP_EXTERN_C String_t* _stringLiteralA48523D5FE5A0D317430DCD088970AF12BFA3200;
IL2CPP_EXTERN_C String_t* _stringLiteralB06734812D8E1B3C4904ED47EFBCCBCE2AEC8FF9;
IL2CPP_EXTERN_C String_t* _stringLiteralB6F2755D6D072E61F10528817AF2FB794FFBA063;
IL2CPP_EXTERN_C String_t* _stringLiteralBAD70ABA9DCA7F775425FAB472380F3D4857C0D4;
IL2CPP_EXTERN_C String_t* _stringLiteralCA09C54BFF74A82BAE543EBE259F7452EE8C5293;
IL2CPP_EXTERN_C String_t* _stringLiteralCDAB62BA59DAA0FE5DF6148EA94FB976769F14B3;
IL2CPP_EXTERN_C String_t* _stringLiteralCDFC4D69660EC6CA73FB83169FBED7C57B287C9D;
IL2CPP_EXTERN_C String_t* _stringLiteralD3E6A23E8E7837EB86A8F02C7C850A1ECA55E4F1;
IL2CPP_EXTERN_C String_t* _stringLiteralD690442E8CD0BB6D12BE323D0B4A6189F1C2DB3E;
IL2CPP_EXTERN_C String_t* _stringLiteralDF612DADEFC7726D11F92DB0401502266490FDE6;
IL2CPP_EXTERN_C String_t* _stringLiteralE58F8B9527318BEA000B3D29263E9FFFD423DEF8;
IL2CPP_EXTERN_C String_t* _stringLiteralE6DBD26BBD42AA1D99763E4C53D9347DAE427233;
IL2CPP_EXTERN_C String_t* _stringLiteralEEFEC9BD6150D1361491F9BDC21B937B0E62E7E0;
IL2CPP_EXTERN_C String_t* _stringLiteralEFD95EC99681FB0DE0C46C5200B20701B7D740B1;
IL2CPP_EXTERN_C String_t* _stringLiteralF32B67C7E26342AF42EFABC674D441DCA0A281C5;
IL2CPP_EXTERN_C String_t* _stringLiteralF700A5609311009315CF148276EC7C5A0A8105CA;
IL2CPP_EXTERN_C String_t* _stringLiteralFD3E35BFE67520CE7654F6494C9DEB36E1DD0F21;
IL2CPP_EXTERN_C String_t* _stringLiteralFE845653F13A81A33A26CABA2941BA6EE62B432D;
IL2CPP_EXTERN_C const RuntimeMethod* CallInvoker_BlockingUnaryCall_TisUnityMessageProto_tD5391F5B3FDFAFE6B6AEC00BEED8871DCD4B2B26_TisUnityMessageProto_tD5391F5B3FDFAFE6B6AEC00BEED8871DCD4B2B26_mC32CF7CF0E1FB84B4FD18EA7FB26252547B00030_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ClientBase_1__ctor_mB526D8160C83AF064E5A7DE421052A63845F5E4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Codec__ctor_m41A7BA1870CCEEC74EC9F230514F40876A72C2A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Codec__ctor_mD08C81168009A194678420B54C783D20A045F685_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FieldCodec_ForMessage_TisAgentActionProto_tD039A9669DE32649580A51A04DC77145F5D748C9_mC2B80E3AF5B613D3856C12A9CCC1DA1CF5767B34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FieldCodec_ForMessage_TisAgentInfoProto_tB07CB4D6C9A6367975913C1581FAA29FDB4FF5B0_m15E459C5F286D035E858CD73F9EA87506E2C9842_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FieldCodec_ForMessage_TisListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925_m1374C9F39F5EA970B850F3DD9930543B992C70AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FieldCodec_ForMessage_TisListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354_mE729CC0E7499CDC79E0FD180D39862F6915ECF01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m0281DBAD7E0979A751FAA7D8D821D3962FE475F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m9A73F7A2589030305E13F6EC1E7883F80ED9030F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m9C83F2EE34FD289A45A5050CE96657CB0D77594B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m9D38EE1CA6A0069DBABF212B889CDD16B33E57A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m7D0971E1B4C07728BE7C791731DBD8C1A7679B6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mF01B96E9D48EF51CC36C0FE07E39E3B4EB8401E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MapField_2_AddEntriesFrom_m447F2DEAE53F2BD2ABAAEAC6602DBA491CA8CF4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MapField_2_AddEntriesFrom_mD2A342155482742418F8A76701E7012837F0443A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MapField_2_Add_m669A27F921808318426FDF685A33C6FEBC4E7982_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MapField_2_Add_mC51509CEA2B3ED6DB971344958D2521EA174D672_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MapField_2_CalculateSize_m0DDA767F779A93987411993CFBF82DD1321F6739_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MapField_2_CalculateSize_mE43C4244D0D0B9EDF47EBAEF3D6EC559A6158EBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MapField_2_Clone_m529DD3623738559C01A1E515EFC50D39421D9AB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MapField_2_Clone_mD41C18F3F74FC6B14AA01B5DC42D0E2BFE2D4521_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MapField_2_Equals_m9C7E1B4BD5154A2C779C4C73687A26CC2877F5AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MapField_2_Equals_mC3B206091190E75A93F5877D236503F12B475104_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MapField_2_WriteTo_m15160657572F68D191943168BFF932A24E8ACE58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MapField_2_WriteTo_m6B2CB362A1E4066C903B27BE64EC60B6574152DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MapField_2__ctor_mD514E612E0F0F320F885C23C044E105904B9A5BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MapField_2__ctor_mF5B726984F1EECCDEB836E8F8214D5B5DECAE02D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshallers_Create_TisUnityMessageProto_tD5391F5B3FDFAFE6B6AEC00BEED8871DCD4B2B26_m2A322A84432C850562F8DE4F674DFEFB45FB663F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MessageParser_1_ParseFrom_m770912733AA7FED88E41025B79037EA24E901159_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MessageParser_1__ctor_m9A883C775696A30DEE6D8A0DE26C7B2CD58CBC99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MessageParser_1__ctor_m9D6428DC4A296A9762D4D8D652723C7880410F5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MessageParser_1__ctor_mA3299A4144E132FA2B2C8AA31B0B883927E928CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MessageParser_1__ctor_mC2124E5CFE990D94DFBD3DE2204783B57411FA96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Method_2__ctor_mF6E3D33A2F86AB66AE719403352BD07FEAB4032B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProtoPreconditions_CheckNotNull_TisByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A_mCD24610F4F035AF6D750F9FB7EE41E0207F98566_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedField_1_AddEntriesFrom_m1BF8E3FCC7267C632B71AC102C5476DCB16911F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedField_1_AddEntriesFrom_m6C8F8634E6CA4B4EF88251F60497D41213D405C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedField_1_Add_m186739FDCA88984BFAEF77B346C8534D3883125B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedField_1_Add_m9DE5A811ECBC3D2EAD811F678BA8BC20585E1DE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedField_1_CalculateSize_m740D6E3E74F9A83F042CB85126FE964D01B25B15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedField_1_CalculateSize_mE680EF54C3805A0E7F2F9EC39B5C680295A8ADB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedField_1_Clone_m1F102FCCEFA88998A34BD42E3AEE78F669A05DD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedField_1_Clone_mC893063613A994FF943AA4E9DC858EBBCBC7A626_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedField_1_Equals_m189F4DE6DCFB38E8574B5BEE5308679F16D67D56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedField_1_Equals_m8944DD0E59BA6DBE56DFCBE09A0D188A888BB233_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedField_1_WriteTo_m8A932298668C92A8100ED9EF954DEEBE4B1567A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedField_1_WriteTo_mA2C3B90B90E724DD48D1D8013644F7279D267112_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedField_1__ctor_m114BFD1851942E9E40B55D20DBACB5ACB3B44834_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RepeatedField_1__ctor_mA63362A207829C1E8E2DE110D8164F194CA0ADFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__25_0_m5257D4F6E98E5E619F6D8424BB552CBE0F0C5100_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__25_0_m74CEDF4CF23861E633E383E138B8503838037182_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__31_0_m30880B593C2A046A3276C89F06DA6E5CE820F68E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__36_0_m3D7446638853E38A17DF0AE67D4FD7C5A15A9F9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__8_0_m621306743158CA0CFB636BF0E091CEB38BB39885_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UnityRLInitializationInputProto_t80AF7CBDE43BD9439BDCC706F66B3EE5BCCF2762_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UnityRLInitializationOutputProto_tC42D4D6F0F04C6EC9171D63F974FEBFD70943CA0_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t AgentActionProto_get_Parser_m6E35FBF409BF005A36D4538EBF5DE80B406E6224Unity_MLU2DAgents_CommunicatorObjects1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AgentActionReflection_get_Descriptor_m52778BBF06149132FC6DB827B18CC0D73FC6A642Unity_MLU2DAgents_CommunicatorObjects1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AgentInfoProto_get_Parser_mD32C2989338F0DB9DB3017716FEAFEE008D1682CUnity_MLU2DAgents_CommunicatorObjects1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AgentInfoReflection_get_Descriptor_m53079D2FBD62E6DB563670E10BF9C184A70048C1Unity_MLU2DAgents_CommunicatorObjects1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BrainParametersReflection_get_Descriptor_m09FF522C12CBC8AF443ADCD7A6734794625DC100Unity_MLU2DAgents_CommunicatorObjects1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ByteString_get_Empty_mEFE0CF6E76539FB8154334F5B28EB169A1F0C87DUnity_MLU2DAgents_CommunicatorObjects1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CapabilitiesReflection_get_Descriptor_m6543ED9CF60EA4CA4AB51C90E83144680F7E00DAUnity_MLU2DAgents_CommunicatorObjects1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CommandReflection_get_Descriptor_mB7605DDFA54D2848FD1A124CB983FBD89583B887Unity_MLU2DAgents_CommunicatorObjects1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ListAgentActionProto_CalculateSize_m93CD2939004BD136AACE7CE629F374916BBE6668_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ListAgentActionProto_Clone_mF41896EBD687F2C8C3D05AE37BB4F027150C4271_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ListAgentActionProto_Equals_m3933C179FB74AC3F2ED5ADA1217B4B124ACD100B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ListAgentActionProto_Equals_m9E334A77C8096E732D25BF3A52E37910EA40A752_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ListAgentActionProto_MergeFrom_m45A87BF4492B282A3582440373AB9511D5ACF9EA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ListAgentActionProto_MergeFrom_m98DF203E865A3D7C5FF51600C45FFDCA1D86B0DC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ListAgentActionProto_ToString_mD161DF125A4CA12355C66093F18040F6421B4F1E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ListAgentActionProto_WriteTo_mD2482376828306BB08FB62D6FF9B14A1F4EF5C45_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ListAgentActionProto__cctor_m6B85D4E3D01E5BB131979D37A257F30A8452BEF4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ListAgentActionProto__ctor_m577112C3CC583F8E8EEA5F2AE136DB379882B793_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ListAgentActionProto__ctor_mF20505EA160904391D3075545F981A4FFC09F8D2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ListAgentActionProto_get_Descriptor_m2293C1E921EEF4161A80A4B77D193CF0DC603E87_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ListAgentActionProto_get_Parser_m440581130B48C05D80C94FA05729A12903CD7323Unity_MLU2DAgents_CommunicatorObjects1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ListAgentActionProto_get_Parser_m440581130B48C05D80C94FA05729A12903CD7323_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ListAgentActionProto_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_m13491B860F16B16E4BD9D7994E614F496D444993_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ListAgentInfoProto_CalculateSize_mE9D5A21D53C7BB3E0F5E29506148EBCF19A8ADB8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ListAgentInfoProto_Clone_m1773E5E27A3686CD7540FAB3B5CA4D9F9349928F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ListAgentInfoProto_Equals_m6810C439789F423BB0749E7935195DC87004D7AA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ListAgentInfoProto_Equals_m799A07E24917B7E074F9176A079528AA68A35453_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ListAgentInfoProto_MergeFrom_mB5201BC5D29AA3A41DB5FA5D2716258BA68BE2EE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ListAgentInfoProto_MergeFrom_mEE5B21BA5FB8E1E26F83640E07EB41B3F20A702E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ListAgentInfoProto_ToString_m3302D472013E659F176AFC359E04CD7DE7C56AEE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ListAgentInfoProto_WriteTo_m1B4782111F82D9686B8E372FACD452830228790E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ListAgentInfoProto__cctor_m848E6C0C6001D5DE3625E3F6575DB643BF0C2BF1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ListAgentInfoProto__ctor_m082350D1408AEC06590A38EC0B72A4D59DB8D0B2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ListAgentInfoProto__ctor_mCBAB94463AA37F83FB31A6AAB3DB873054BD5843_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ListAgentInfoProto_get_Descriptor_m13CE7EA88D9484F010D80B88D74DFB9CD6272021_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ListAgentInfoProto_get_Parser_mE43947C6D53FF14A540E7E3DACA5E0BBBC395C18Unity_MLU2DAgents_CommunicatorObjects1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ListAgentInfoProto_get_Parser_mE43947C6D53FF14A540E7E3DACA5E0BBBC395C18_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ListAgentInfoProto_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_m2B2AC9B5D46EF40739A945B19AF202EBF0513ECE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__25_0_m5257D4F6E98E5E619F6D8424BB552CBE0F0C5100_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__25_0_m74CEDF4CF23861E633E383E138B8503838037182_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__31_0_m30880B593C2A046A3276C89F06DA6E5CE820F68E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__36_0_m3D7446638853E38A17DF0AE67D4FD7C5A15A9F9C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__50_0_mE02F407DA3FEDD03D29881112753663278397F98_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_m1AE0DE1E7DFC17DD898D96EC8A66E6A3216E125C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_m4D07D6E4A4CA2B5D133FB8FB4530C5096540B873_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_m787187DB3E7C9B6310F147A13FF400F9C3BA1211_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_mAB8D28BE9D7F7E168B1DB49352D1063E154219DB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_mDCC1BB69144CEA5BA55F46FAFE4A6B7825935166_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_mE8C61CE97B210EB916E26C26760FFE452D06134A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityMessageProto_get_Parser_m58AD0E729F7B142EC6485BE3A02EBFBE5A7DD956Unity_MLU2DAgents_CommunicatorObjects1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityRLInitializationInputProto_get_Parser_m3A3426B1DDCAC0F07CE62541788DDC4892165D03Unity_MLU2DAgents_CommunicatorObjects1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityRLInitializationOutputProto_get_Parser_m533687B973C280208A545011301356FA924E98DEUnity_MLU2DAgents_CommunicatorObjects1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityRLInputProto_CalculateSize_m54E8FB6BDFCCD9FFFC0A4DC479CB508A298F619B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityRLInputProto_Clone_m97607FC00DBB17D5DE4B1955FA24AF67D456A3EC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityRLInputProto_Equals_m2D224AD5215F3AD48EF5AC48F5DE9AB3725596DB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityRLInputProto_Equals_m73EB68640AB463AC6478529140028E364EF4626E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityRLInputProto_MergeFrom_mAD0B7DA58E3A2BE0D67826A2F9333DF0C772E173_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityRLInputProto_MergeFrom_mBCAFDCA74F182104450D95A116BDF06805D67FCD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityRLInputProto_ToString_mB854EB3C75964112F6F437B48B046EE9DA8F28E0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityRLInputProto_WriteTo_m4D44E07881AA8C31F25B3A6730606E2B4D6D7258_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityRLInputProto__cctor_m3296EF8127AC89C38FA47C18B348CBD52FC6FF44_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityRLInputProto__ctor_m17DD5458D94C607A56C9C3AD9D7D8BF60C526904_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityRLInputProto__ctor_m58F41EFD8C3472FE1F4BCED8EA9D29A6F58345FD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityRLInputProto_get_Descriptor_mE324547981BC6796279977757EF2383DEFE25766_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityRLInputProto_get_Parser_m732A203B6A457C70EBD2223BB5DF31E1E22250EEUnity_MLU2DAgents_CommunicatorObjects1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityRLInputProto_get_Parser_m732A203B6A457C70EBD2223BB5DF31E1E22250EE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityRLInputProto_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_m39A0BF8F79B1B5DF21DDF6B1BA01A49AF4D2170F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityRLInputProto_set_SideChannel_mE5D873FE1F0C657037EC7FF846B099A1815481D0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityRLOutputProto_CalculateSize_m542C0FAEE3952D29643847E1918A0E38D6E134B9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityRLOutputProto_Clone_m3AB05EC2EA4372B3E3F284D76952F7A5F5692840_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityRLOutputProto_Equals_m533D8BA1DAAF53D7596AFB0D0485964EEA571D72_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityRLOutputProto_Equals_m53F9BC2C66A6EBD3518E23A449F7D54D71EC314A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityRLOutputProto_MergeFrom_m42D007604F1DBE6E3C5518B4C31D0548D9B3A62F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityRLOutputProto_MergeFrom_m8952EEA2E521ADBC3AD8EEF6ABC8C19B53D532F7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityRLOutputProto_ToString_mCC3968BCCC689F8A735B4C77BAC37D7B1EA13041_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityRLOutputProto_WriteTo_m4548E352B991F3DBF22BF22E95A9487773B8606D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityRLOutputProto__cctor_m53C809D89DCB2523BBA3EDCA80F7495E8B04E92A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityRLOutputProto__ctor_m4E22E8F9227D78E68F6D383195CE90D09C0F9CA9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityRLOutputProto__ctor_m866DD6AA97506ECA09BE39D6C76854E4EA72E0EA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityRLOutputProto_get_Descriptor_mC405795B20ABAAD003497CBAF06B23A701A0D4FF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityRLOutputProto_get_Parser_m3082F856637D0BCCE8432273D0F9A43C2D6BDBF5Unity_MLU2DAgents_CommunicatorObjects1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityRLOutputProto_get_Parser_m3082F856637D0BCCE8432273D0F9A43C2D6BDBF5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityRLOutputProto_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_mE12A6D82C778DD31FF1BE13F769AE0CEBE792B83_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityRLOutputProto_set_SideChannel_mA95C514E35E334FC8D5AB2138162C5A4CC8D1A63_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityRlInitializationInputReflection__cctor_m00386482AED2EAEEE8EEC4C7556B5386761B077C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityRlInitializationInputReflection_get_Descriptor_m7B6F84785DB977708ADDC39872D586217809C134_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityRlInitializationOutputReflection__cctor_m1E5C8043FAF26406726E17EF5CCC625113E1FCD3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityRlInitializationOutputReflection_get_Descriptor_m5D0593F6CF414CFFB328036F1D7776864884C30B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityRlInputReflection__cctor_mD3713392E7B3480C40ACAE7260DEB0B4216E8A83_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityRlInputReflection_get_Descriptor_mACDE921AC2A9C38BF9C2C70397D59BA9522E5E3FUnity_MLU2DAgents_CommunicatorObjects1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityRlInputReflection_get_Descriptor_mACDE921AC2A9C38BF9C2C70397D59BA9522E5E3F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityRlOutputReflection__cctor_mF2602E1D806EF82FF40C669DEBD3D3F0EAF462E5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityRlOutputReflection_get_Descriptor_m5D75BACA3A8B729D44606FC38AA1B740E172A896Unity_MLU2DAgents_CommunicatorObjects1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityRlOutputReflection_get_Descriptor_m5D75BACA3A8B729D44606FC38AA1B740E172A896_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityToExternalProtoClient_Exchange_m78907637C581F4330EA4B04586A3E09A5E89212F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityToExternalProtoClient__ctor_m3E1A1C11C4A69FC514594653839D2D00C33F6CD1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityToExternalProto__cctor_m6692727C8DFA895962AB17AFDB8DE4256A634A81_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct FileDescriptorU5BU5D_t91F2611AD4922B7697DBD2C6C8627C68AE7B2D4B;
struct GeneratedClrTypeInfoU5BU5D_t38490948FF5D4B2D4E8557D1209161FDA3B07C87;
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// Google.Protobuf.ByteString
struct  ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A  : public RuntimeObject
{
public:
	// System.Byte[] Google.Protobuf.ByteString::bytes
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___bytes_1;

public:
	inline static int32_t get_offset_of_bytes_1() { return static_cast<int32_t>(offsetof(ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A, ___bytes_1)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_bytes_1() const { return ___bytes_1; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_bytes_1() { return &___bytes_1; }
	inline void set_bytes_1(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___bytes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bytes_1), (void*)value);
	}
};

struct ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A_StaticFields
{
public:
	// Google.Protobuf.ByteString Google.Protobuf.ByteString::empty
	ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * ___empty_0;

public:
	inline static int32_t get_offset_of_empty_0() { return static_cast<int32_t>(offsetof(ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A_StaticFields, ___empty_0)); }
	inline ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * get_empty_0() const { return ___empty_0; }
	inline ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A ** get_address_of_empty_0() { return &___empty_0; }
	inline void set_empty_0(ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * value)
	{
		___empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___empty_0), (void*)value);
	}
};


// Google.Protobuf.CodedInputStream
struct  CodedInputStream_t90AE13DCCB9A5F6C02B698E7EDC3E79A5F585C24  : public RuntimeObject
{
public:
	// System.Boolean Google.Protobuf.CodedInputStream::leaveOpen
	bool ___leaveOpen_0;
	// System.Byte[] Google.Protobuf.CodedInputStream::buffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer_1;
	// System.Int32 Google.Protobuf.CodedInputStream::bufferSize
	int32_t ___bufferSize_2;
	// System.Int32 Google.Protobuf.CodedInputStream::bufferSizeAfterLimit
	int32_t ___bufferSizeAfterLimit_3;
	// System.Int32 Google.Protobuf.CodedInputStream::bufferPos
	int32_t ___bufferPos_4;
	// System.IO.Stream Google.Protobuf.CodedInputStream::input
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___input_5;
	// System.UInt32 Google.Protobuf.CodedInputStream::lastTag
	uint32_t ___lastTag_6;
	// System.UInt32 Google.Protobuf.CodedInputStream::nextTag
	uint32_t ___nextTag_7;
	// System.Boolean Google.Protobuf.CodedInputStream::hasNextTag
	bool ___hasNextTag_8;
	// System.Int32 Google.Protobuf.CodedInputStream::totalBytesRetired
	int32_t ___totalBytesRetired_9;
	// System.Int32 Google.Protobuf.CodedInputStream::currentLimit
	int32_t ___currentLimit_10;
	// System.Int32 Google.Protobuf.CodedInputStream::recursionDepth
	int32_t ___recursionDepth_11;
	// System.Int32 Google.Protobuf.CodedInputStream::recursionLimit
	int32_t ___recursionLimit_12;
	// System.Int32 Google.Protobuf.CodedInputStream::sizeLimit
	int32_t ___sizeLimit_13;
	// System.Boolean Google.Protobuf.CodedInputStream::<DiscardUnknownFields>k__BackingField
	bool ___U3CDiscardUnknownFieldsU3Ek__BackingField_14;
	// Google.Protobuf.ExtensionRegistry Google.Protobuf.CodedInputStream::<ExtensionRegistry>k__BackingField
	ExtensionRegistry_t9CDDB7C7F80CE3A85108DCBB9F87E7DDCE3B7C45 * ___U3CExtensionRegistryU3Ek__BackingField_15;

public:
	inline static int32_t get_offset_of_leaveOpen_0() { return static_cast<int32_t>(offsetof(CodedInputStream_t90AE13DCCB9A5F6C02B698E7EDC3E79A5F585C24, ___leaveOpen_0)); }
	inline bool get_leaveOpen_0() const { return ___leaveOpen_0; }
	inline bool* get_address_of_leaveOpen_0() { return &___leaveOpen_0; }
	inline void set_leaveOpen_0(bool value)
	{
		___leaveOpen_0 = value;
	}

	inline static int32_t get_offset_of_buffer_1() { return static_cast<int32_t>(offsetof(CodedInputStream_t90AE13DCCB9A5F6C02B698E7EDC3E79A5F585C24, ___buffer_1)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_buffer_1() const { return ___buffer_1; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_buffer_1() { return &___buffer_1; }
	inline void set_buffer_1(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___buffer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buffer_1), (void*)value);
	}

	inline static int32_t get_offset_of_bufferSize_2() { return static_cast<int32_t>(offsetof(CodedInputStream_t90AE13DCCB9A5F6C02B698E7EDC3E79A5F585C24, ___bufferSize_2)); }
	inline int32_t get_bufferSize_2() const { return ___bufferSize_2; }
	inline int32_t* get_address_of_bufferSize_2() { return &___bufferSize_2; }
	inline void set_bufferSize_2(int32_t value)
	{
		___bufferSize_2 = value;
	}

	inline static int32_t get_offset_of_bufferSizeAfterLimit_3() { return static_cast<int32_t>(offsetof(CodedInputStream_t90AE13DCCB9A5F6C02B698E7EDC3E79A5F585C24, ___bufferSizeAfterLimit_3)); }
	inline int32_t get_bufferSizeAfterLimit_3() const { return ___bufferSizeAfterLimit_3; }
	inline int32_t* get_address_of_bufferSizeAfterLimit_3() { return &___bufferSizeAfterLimit_3; }
	inline void set_bufferSizeAfterLimit_3(int32_t value)
	{
		___bufferSizeAfterLimit_3 = value;
	}

	inline static int32_t get_offset_of_bufferPos_4() { return static_cast<int32_t>(offsetof(CodedInputStream_t90AE13DCCB9A5F6C02B698E7EDC3E79A5F585C24, ___bufferPos_4)); }
	inline int32_t get_bufferPos_4() const { return ___bufferPos_4; }
	inline int32_t* get_address_of_bufferPos_4() { return &___bufferPos_4; }
	inline void set_bufferPos_4(int32_t value)
	{
		___bufferPos_4 = value;
	}

	inline static int32_t get_offset_of_input_5() { return static_cast<int32_t>(offsetof(CodedInputStream_t90AE13DCCB9A5F6C02B698E7EDC3E79A5F585C24, ___input_5)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_input_5() const { return ___input_5; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_input_5() { return &___input_5; }
	inline void set_input_5(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___input_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___input_5), (void*)value);
	}

	inline static int32_t get_offset_of_lastTag_6() { return static_cast<int32_t>(offsetof(CodedInputStream_t90AE13DCCB9A5F6C02B698E7EDC3E79A5F585C24, ___lastTag_6)); }
	inline uint32_t get_lastTag_6() const { return ___lastTag_6; }
	inline uint32_t* get_address_of_lastTag_6() { return &___lastTag_6; }
	inline void set_lastTag_6(uint32_t value)
	{
		___lastTag_6 = value;
	}

	inline static int32_t get_offset_of_nextTag_7() { return static_cast<int32_t>(offsetof(CodedInputStream_t90AE13DCCB9A5F6C02B698E7EDC3E79A5F585C24, ___nextTag_7)); }
	inline uint32_t get_nextTag_7() const { return ___nextTag_7; }
	inline uint32_t* get_address_of_nextTag_7() { return &___nextTag_7; }
	inline void set_nextTag_7(uint32_t value)
	{
		___nextTag_7 = value;
	}

	inline static int32_t get_offset_of_hasNextTag_8() { return static_cast<int32_t>(offsetof(CodedInputStream_t90AE13DCCB9A5F6C02B698E7EDC3E79A5F585C24, ___hasNextTag_8)); }
	inline bool get_hasNextTag_8() const { return ___hasNextTag_8; }
	inline bool* get_address_of_hasNextTag_8() { return &___hasNextTag_8; }
	inline void set_hasNextTag_8(bool value)
	{
		___hasNextTag_8 = value;
	}

	inline static int32_t get_offset_of_totalBytesRetired_9() { return static_cast<int32_t>(offsetof(CodedInputStream_t90AE13DCCB9A5F6C02B698E7EDC3E79A5F585C24, ___totalBytesRetired_9)); }
	inline int32_t get_totalBytesRetired_9() const { return ___totalBytesRetired_9; }
	inline int32_t* get_address_of_totalBytesRetired_9() { return &___totalBytesRetired_9; }
	inline void set_totalBytesRetired_9(int32_t value)
	{
		___totalBytesRetired_9 = value;
	}

	inline static int32_t get_offset_of_currentLimit_10() { return static_cast<int32_t>(offsetof(CodedInputStream_t90AE13DCCB9A5F6C02B698E7EDC3E79A5F585C24, ___currentLimit_10)); }
	inline int32_t get_currentLimit_10() const { return ___currentLimit_10; }
	inline int32_t* get_address_of_currentLimit_10() { return &___currentLimit_10; }
	inline void set_currentLimit_10(int32_t value)
	{
		___currentLimit_10 = value;
	}

	inline static int32_t get_offset_of_recursionDepth_11() { return static_cast<int32_t>(offsetof(CodedInputStream_t90AE13DCCB9A5F6C02B698E7EDC3E79A5F585C24, ___recursionDepth_11)); }
	inline int32_t get_recursionDepth_11() const { return ___recursionDepth_11; }
	inline int32_t* get_address_of_recursionDepth_11() { return &___recursionDepth_11; }
	inline void set_recursionDepth_11(int32_t value)
	{
		___recursionDepth_11 = value;
	}

	inline static int32_t get_offset_of_recursionLimit_12() { return static_cast<int32_t>(offsetof(CodedInputStream_t90AE13DCCB9A5F6C02B698E7EDC3E79A5F585C24, ___recursionLimit_12)); }
	inline int32_t get_recursionLimit_12() const { return ___recursionLimit_12; }
	inline int32_t* get_address_of_recursionLimit_12() { return &___recursionLimit_12; }
	inline void set_recursionLimit_12(int32_t value)
	{
		___recursionLimit_12 = value;
	}

	inline static int32_t get_offset_of_sizeLimit_13() { return static_cast<int32_t>(offsetof(CodedInputStream_t90AE13DCCB9A5F6C02B698E7EDC3E79A5F585C24, ___sizeLimit_13)); }
	inline int32_t get_sizeLimit_13() const { return ___sizeLimit_13; }
	inline int32_t* get_address_of_sizeLimit_13() { return &___sizeLimit_13; }
	inline void set_sizeLimit_13(int32_t value)
	{
		___sizeLimit_13 = value;
	}

	inline static int32_t get_offset_of_U3CDiscardUnknownFieldsU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(CodedInputStream_t90AE13DCCB9A5F6C02B698E7EDC3E79A5F585C24, ___U3CDiscardUnknownFieldsU3Ek__BackingField_14)); }
	inline bool get_U3CDiscardUnknownFieldsU3Ek__BackingField_14() const { return ___U3CDiscardUnknownFieldsU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CDiscardUnknownFieldsU3Ek__BackingField_14() { return &___U3CDiscardUnknownFieldsU3Ek__BackingField_14; }
	inline void set_U3CDiscardUnknownFieldsU3Ek__BackingField_14(bool value)
	{
		___U3CDiscardUnknownFieldsU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CExtensionRegistryU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(CodedInputStream_t90AE13DCCB9A5F6C02B698E7EDC3E79A5F585C24, ___U3CExtensionRegistryU3Ek__BackingField_15)); }
	inline ExtensionRegistry_t9CDDB7C7F80CE3A85108DCBB9F87E7DDCE3B7C45 * get_U3CExtensionRegistryU3Ek__BackingField_15() const { return ___U3CExtensionRegistryU3Ek__BackingField_15; }
	inline ExtensionRegistry_t9CDDB7C7F80CE3A85108DCBB9F87E7DDCE3B7C45 ** get_address_of_U3CExtensionRegistryU3Ek__BackingField_15() { return &___U3CExtensionRegistryU3Ek__BackingField_15; }
	inline void set_U3CExtensionRegistryU3Ek__BackingField_15(ExtensionRegistry_t9CDDB7C7F80CE3A85108DCBB9F87E7DDCE3B7C45 * value)
	{
		___U3CExtensionRegistryU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CExtensionRegistryU3Ek__BackingField_15), (void*)value);
	}
};


// Google.Protobuf.CodedOutputStream
struct  CodedOutputStream_tEDA55D3B33B67A94D65BA47D099A2710F29AEDCA  : public RuntimeObject
{
public:
	// System.Boolean Google.Protobuf.CodedOutputStream::leaveOpen
	bool ___leaveOpen_2;
	// System.Byte[] Google.Protobuf.CodedOutputStream::buffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer_3;
	// System.Int32 Google.Protobuf.CodedOutputStream::limit
	int32_t ___limit_4;
	// System.Int32 Google.Protobuf.CodedOutputStream::position
	int32_t ___position_5;
	// System.IO.Stream Google.Protobuf.CodedOutputStream::output
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___output_6;

public:
	inline static int32_t get_offset_of_leaveOpen_2() { return static_cast<int32_t>(offsetof(CodedOutputStream_tEDA55D3B33B67A94D65BA47D099A2710F29AEDCA, ___leaveOpen_2)); }
	inline bool get_leaveOpen_2() const { return ___leaveOpen_2; }
	inline bool* get_address_of_leaveOpen_2() { return &___leaveOpen_2; }
	inline void set_leaveOpen_2(bool value)
	{
		___leaveOpen_2 = value;
	}

	inline static int32_t get_offset_of_buffer_3() { return static_cast<int32_t>(offsetof(CodedOutputStream_tEDA55D3B33B67A94D65BA47D099A2710F29AEDCA, ___buffer_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_buffer_3() const { return ___buffer_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_buffer_3() { return &___buffer_3; }
	inline void set_buffer_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___buffer_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buffer_3), (void*)value);
	}

	inline static int32_t get_offset_of_limit_4() { return static_cast<int32_t>(offsetof(CodedOutputStream_tEDA55D3B33B67A94D65BA47D099A2710F29AEDCA, ___limit_4)); }
	inline int32_t get_limit_4() const { return ___limit_4; }
	inline int32_t* get_address_of_limit_4() { return &___limit_4; }
	inline void set_limit_4(int32_t value)
	{
		___limit_4 = value;
	}

	inline static int32_t get_offset_of_position_5() { return static_cast<int32_t>(offsetof(CodedOutputStream_tEDA55D3B33B67A94D65BA47D099A2710F29AEDCA, ___position_5)); }
	inline int32_t get_position_5() const { return ___position_5; }
	inline int32_t* get_address_of_position_5() { return &___position_5; }
	inline void set_position_5(int32_t value)
	{
		___position_5 = value;
	}

	inline static int32_t get_offset_of_output_6() { return static_cast<int32_t>(offsetof(CodedOutputStream_tEDA55D3B33B67A94D65BA47D099A2710F29AEDCA, ___output_6)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_output_6() const { return ___output_6; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_output_6() { return &___output_6; }
	inline void set_output_6(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___output_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___output_6), (void*)value);
	}
};

struct CodedOutputStream_tEDA55D3B33B67A94D65BA47D099A2710F29AEDCA_StaticFields
{
public:
	// System.Text.Encoding Google.Protobuf.CodedOutputStream::Utf8Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___Utf8Encoding_0;
	// System.Int32 Google.Protobuf.CodedOutputStream::DefaultBufferSize
	int32_t ___DefaultBufferSize_1;

public:
	inline static int32_t get_offset_of_Utf8Encoding_0() { return static_cast<int32_t>(offsetof(CodedOutputStream_tEDA55D3B33B67A94D65BA47D099A2710F29AEDCA_StaticFields, ___Utf8Encoding_0)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_Utf8Encoding_0() const { return ___Utf8Encoding_0; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_Utf8Encoding_0() { return &___Utf8Encoding_0; }
	inline void set_Utf8Encoding_0(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___Utf8Encoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Utf8Encoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_DefaultBufferSize_1() { return static_cast<int32_t>(offsetof(CodedOutputStream_tEDA55D3B33B67A94D65BA47D099A2710F29AEDCA_StaticFields, ___DefaultBufferSize_1)); }
	inline int32_t get_DefaultBufferSize_1() const { return ___DefaultBufferSize_1; }
	inline int32_t* get_address_of_DefaultBufferSize_1() { return &___DefaultBufferSize_1; }
	inline void set_DefaultBufferSize_1(int32_t value)
	{
		___DefaultBufferSize_1 = value;
	}
};


// Google.Protobuf.Collections.MapField`2/Codec<System.String,Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto>
struct  Codec_tE5E96F1D701ECCAAC649B5851698F7B1956637AE  : public RuntimeObject
{
public:
	// Google.Protobuf.FieldCodec`1<TKey> Google.Protobuf.Collections.MapField`2/Codec::keyCodec
	FieldCodec_1_t156034F6D44891148E8D3C98BCDB5672D2CE4A29 * ___keyCodec_0;
	// Google.Protobuf.FieldCodec`1<TValue> Google.Protobuf.Collections.MapField`2/Codec::valueCodec
	FieldCodec_1_tB768A791704F24E2C2B5A284921F7D1D808778F5 * ___valueCodec_1;
	// System.UInt32 Google.Protobuf.Collections.MapField`2/Codec::mapTag
	uint32_t ___mapTag_2;

public:
	inline static int32_t get_offset_of_keyCodec_0() { return static_cast<int32_t>(offsetof(Codec_tE5E96F1D701ECCAAC649B5851698F7B1956637AE, ___keyCodec_0)); }
	inline FieldCodec_1_t156034F6D44891148E8D3C98BCDB5672D2CE4A29 * get_keyCodec_0() const { return ___keyCodec_0; }
	inline FieldCodec_1_t156034F6D44891148E8D3C98BCDB5672D2CE4A29 ** get_address_of_keyCodec_0() { return &___keyCodec_0; }
	inline void set_keyCodec_0(FieldCodec_1_t156034F6D44891148E8D3C98BCDB5672D2CE4A29 * value)
	{
		___keyCodec_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyCodec_0), (void*)value);
	}

	inline static int32_t get_offset_of_valueCodec_1() { return static_cast<int32_t>(offsetof(Codec_tE5E96F1D701ECCAAC649B5851698F7B1956637AE, ___valueCodec_1)); }
	inline FieldCodec_1_tB768A791704F24E2C2B5A284921F7D1D808778F5 * get_valueCodec_1() const { return ___valueCodec_1; }
	inline FieldCodec_1_tB768A791704F24E2C2B5A284921F7D1D808778F5 ** get_address_of_valueCodec_1() { return &___valueCodec_1; }
	inline void set_valueCodec_1(FieldCodec_1_tB768A791704F24E2C2B5A284921F7D1D808778F5 * value)
	{
		___valueCodec_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___valueCodec_1), (void*)value);
	}

	inline static int32_t get_offset_of_mapTag_2() { return static_cast<int32_t>(offsetof(Codec_tE5E96F1D701ECCAAC649B5851698F7B1956637AE, ___mapTag_2)); }
	inline uint32_t get_mapTag_2() const { return ___mapTag_2; }
	inline uint32_t* get_address_of_mapTag_2() { return &___mapTag_2; }
	inline void set_mapTag_2(uint32_t value)
	{
		___mapTag_2 = value;
	}
};


// Google.Protobuf.Collections.MapField`2/Codec<System.String,Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto>
struct  Codec_t783AB5BD5C8C87BB04A840234E5A6E38B1991493  : public RuntimeObject
{
public:
	// Google.Protobuf.FieldCodec`1<TKey> Google.Protobuf.Collections.MapField`2/Codec::keyCodec
	FieldCodec_1_t156034F6D44891148E8D3C98BCDB5672D2CE4A29 * ___keyCodec_0;
	// Google.Protobuf.FieldCodec`1<TValue> Google.Protobuf.Collections.MapField`2/Codec::valueCodec
	FieldCodec_1_t28E6C8B6C890722CF301D6ADEA9FA22C442E2791 * ___valueCodec_1;
	// System.UInt32 Google.Protobuf.Collections.MapField`2/Codec::mapTag
	uint32_t ___mapTag_2;

public:
	inline static int32_t get_offset_of_keyCodec_0() { return static_cast<int32_t>(offsetof(Codec_t783AB5BD5C8C87BB04A840234E5A6E38B1991493, ___keyCodec_0)); }
	inline FieldCodec_1_t156034F6D44891148E8D3C98BCDB5672D2CE4A29 * get_keyCodec_0() const { return ___keyCodec_0; }
	inline FieldCodec_1_t156034F6D44891148E8D3C98BCDB5672D2CE4A29 ** get_address_of_keyCodec_0() { return &___keyCodec_0; }
	inline void set_keyCodec_0(FieldCodec_1_t156034F6D44891148E8D3C98BCDB5672D2CE4A29 * value)
	{
		___keyCodec_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyCodec_0), (void*)value);
	}

	inline static int32_t get_offset_of_valueCodec_1() { return static_cast<int32_t>(offsetof(Codec_t783AB5BD5C8C87BB04A840234E5A6E38B1991493, ___valueCodec_1)); }
	inline FieldCodec_1_t28E6C8B6C890722CF301D6ADEA9FA22C442E2791 * get_valueCodec_1() const { return ___valueCodec_1; }
	inline FieldCodec_1_t28E6C8B6C890722CF301D6ADEA9FA22C442E2791 ** get_address_of_valueCodec_1() { return &___valueCodec_1; }
	inline void set_valueCodec_1(FieldCodec_1_t28E6C8B6C890722CF301D6ADEA9FA22C442E2791 * value)
	{
		___valueCodec_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___valueCodec_1), (void*)value);
	}

	inline static int32_t get_offset_of_mapTag_2() { return static_cast<int32_t>(offsetof(Codec_t783AB5BD5C8C87BB04A840234E5A6E38B1991493, ___mapTag_2)); }
	inline uint32_t get_mapTag_2() const { return ___mapTag_2; }
	inline uint32_t* get_address_of_mapTag_2() { return &___mapTag_2; }
	inline void set_mapTag_2(uint32_t value)
	{
		___mapTag_2 = value;
	}
};


// Google.Protobuf.Collections.MapField`2<System.String,Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto>
struct  MapField_2_tD148F5CFC6F243B4A02E983CBB129C24B8AB69FB  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,System.Collections.Generic.LinkedListNode`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>>> Google.Protobuf.Collections.MapField`2::map
	Dictionary_2_tEE11B88E9B95EA98512058AE3484451DF5B786ED * ___map_2;
	// System.Collections.Generic.LinkedList`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> Google.Protobuf.Collections.MapField`2::list
	LinkedList_1_tE24914557CAEA884912D4F532A16378E4543A6C1 * ___list_3;

public:
	inline static int32_t get_offset_of_map_2() { return static_cast<int32_t>(offsetof(MapField_2_tD148F5CFC6F243B4A02E983CBB129C24B8AB69FB, ___map_2)); }
	inline Dictionary_2_tEE11B88E9B95EA98512058AE3484451DF5B786ED * get_map_2() const { return ___map_2; }
	inline Dictionary_2_tEE11B88E9B95EA98512058AE3484451DF5B786ED ** get_address_of_map_2() { return &___map_2; }
	inline void set_map_2(Dictionary_2_tEE11B88E9B95EA98512058AE3484451DF5B786ED * value)
	{
		___map_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___map_2), (void*)value);
	}

	inline static int32_t get_offset_of_list_3() { return static_cast<int32_t>(offsetof(MapField_2_tD148F5CFC6F243B4A02E983CBB129C24B8AB69FB, ___list_3)); }
	inline LinkedList_1_tE24914557CAEA884912D4F532A16378E4543A6C1 * get_list_3() const { return ___list_3; }
	inline LinkedList_1_tE24914557CAEA884912D4F532A16378E4543A6C1 ** get_address_of_list_3() { return &___list_3; }
	inline void set_list_3(LinkedList_1_tE24914557CAEA884912D4F532A16378E4543A6C1 * value)
	{
		___list_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_3), (void*)value);
	}
};

struct MapField_2_tD148F5CFC6F243B4A02E983CBB129C24B8AB69FB_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<TValue> Google.Protobuf.Collections.MapField`2::ValueEqualityComparer
	EqualityComparer_1_t71DDE0F67797C2833DD0FEDDCCB0F4CEBEF00B2D * ___ValueEqualityComparer_0;
	// System.Collections.Generic.EqualityComparer`1<TKey> Google.Protobuf.Collections.MapField`2::KeyEqualityComparer
	EqualityComparer_1_tBEFFC6F649A17852373A084880D57CB299084137 * ___KeyEqualityComparer_1;

public:
	inline static int32_t get_offset_of_ValueEqualityComparer_0() { return static_cast<int32_t>(offsetof(MapField_2_tD148F5CFC6F243B4A02E983CBB129C24B8AB69FB_StaticFields, ___ValueEqualityComparer_0)); }
	inline EqualityComparer_1_t71DDE0F67797C2833DD0FEDDCCB0F4CEBEF00B2D * get_ValueEqualityComparer_0() const { return ___ValueEqualityComparer_0; }
	inline EqualityComparer_1_t71DDE0F67797C2833DD0FEDDCCB0F4CEBEF00B2D ** get_address_of_ValueEqualityComparer_0() { return &___ValueEqualityComparer_0; }
	inline void set_ValueEqualityComparer_0(EqualityComparer_1_t71DDE0F67797C2833DD0FEDDCCB0F4CEBEF00B2D * value)
	{
		___ValueEqualityComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ValueEqualityComparer_0), (void*)value);
	}

	inline static int32_t get_offset_of_KeyEqualityComparer_1() { return static_cast<int32_t>(offsetof(MapField_2_tD148F5CFC6F243B4A02E983CBB129C24B8AB69FB_StaticFields, ___KeyEqualityComparer_1)); }
	inline EqualityComparer_1_tBEFFC6F649A17852373A084880D57CB299084137 * get_KeyEqualityComparer_1() const { return ___KeyEqualityComparer_1; }
	inline EqualityComparer_1_tBEFFC6F649A17852373A084880D57CB299084137 ** get_address_of_KeyEqualityComparer_1() { return &___KeyEqualityComparer_1; }
	inline void set_KeyEqualityComparer_1(EqualityComparer_1_tBEFFC6F649A17852373A084880D57CB299084137 * value)
	{
		___KeyEqualityComparer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___KeyEqualityComparer_1), (void*)value);
	}
};


// Google.Protobuf.Collections.MapField`2<System.String,Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto>
struct  MapField_2_t8BA58C589830633C7DCCC6E650D623B9E1EDC681  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,System.Collections.Generic.LinkedListNode`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>>> Google.Protobuf.Collections.MapField`2::map
	Dictionary_2_tA755EDC4E84BC2B28A296C051CDA8DD40DA7FC1D * ___map_2;
	// System.Collections.Generic.LinkedList`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> Google.Protobuf.Collections.MapField`2::list
	LinkedList_1_tCF1BEDB5C4E3D714DAEAA0C22D3A3067B506602C * ___list_3;

public:
	inline static int32_t get_offset_of_map_2() { return static_cast<int32_t>(offsetof(MapField_2_t8BA58C589830633C7DCCC6E650D623B9E1EDC681, ___map_2)); }
	inline Dictionary_2_tA755EDC4E84BC2B28A296C051CDA8DD40DA7FC1D * get_map_2() const { return ___map_2; }
	inline Dictionary_2_tA755EDC4E84BC2B28A296C051CDA8DD40DA7FC1D ** get_address_of_map_2() { return &___map_2; }
	inline void set_map_2(Dictionary_2_tA755EDC4E84BC2B28A296C051CDA8DD40DA7FC1D * value)
	{
		___map_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___map_2), (void*)value);
	}

	inline static int32_t get_offset_of_list_3() { return static_cast<int32_t>(offsetof(MapField_2_t8BA58C589830633C7DCCC6E650D623B9E1EDC681, ___list_3)); }
	inline LinkedList_1_tCF1BEDB5C4E3D714DAEAA0C22D3A3067B506602C * get_list_3() const { return ___list_3; }
	inline LinkedList_1_tCF1BEDB5C4E3D714DAEAA0C22D3A3067B506602C ** get_address_of_list_3() { return &___list_3; }
	inline void set_list_3(LinkedList_1_tCF1BEDB5C4E3D714DAEAA0C22D3A3067B506602C * value)
	{
		___list_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_3), (void*)value);
	}
};

struct MapField_2_t8BA58C589830633C7DCCC6E650D623B9E1EDC681_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<TValue> Google.Protobuf.Collections.MapField`2::ValueEqualityComparer
	EqualityComparer_1_tB6D440167991272A52D7189C931DDE77F0A59AF5 * ___ValueEqualityComparer_0;
	// System.Collections.Generic.EqualityComparer`1<TKey> Google.Protobuf.Collections.MapField`2::KeyEqualityComparer
	EqualityComparer_1_tBEFFC6F649A17852373A084880D57CB299084137 * ___KeyEqualityComparer_1;

public:
	inline static int32_t get_offset_of_ValueEqualityComparer_0() { return static_cast<int32_t>(offsetof(MapField_2_t8BA58C589830633C7DCCC6E650D623B9E1EDC681_StaticFields, ___ValueEqualityComparer_0)); }
	inline EqualityComparer_1_tB6D440167991272A52D7189C931DDE77F0A59AF5 * get_ValueEqualityComparer_0() const { return ___ValueEqualityComparer_0; }
	inline EqualityComparer_1_tB6D440167991272A52D7189C931DDE77F0A59AF5 ** get_address_of_ValueEqualityComparer_0() { return &___ValueEqualityComparer_0; }
	inline void set_ValueEqualityComparer_0(EqualityComparer_1_tB6D440167991272A52D7189C931DDE77F0A59AF5 * value)
	{
		___ValueEqualityComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ValueEqualityComparer_0), (void*)value);
	}

	inline static int32_t get_offset_of_KeyEqualityComparer_1() { return static_cast<int32_t>(offsetof(MapField_2_t8BA58C589830633C7DCCC6E650D623B9E1EDC681_StaticFields, ___KeyEqualityComparer_1)); }
	inline EqualityComparer_1_tBEFFC6F649A17852373A084880D57CB299084137 * get_KeyEqualityComparer_1() const { return ___KeyEqualityComparer_1; }
	inline EqualityComparer_1_tBEFFC6F649A17852373A084880D57CB299084137 ** get_address_of_KeyEqualityComparer_1() { return &___KeyEqualityComparer_1; }
	inline void set_KeyEqualityComparer_1(EqualityComparer_1_tBEFFC6F649A17852373A084880D57CB299084137 * value)
	{
		___KeyEqualityComparer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___KeyEqualityComparer_1), (void*)value);
	}
};


// Google.Protobuf.Collections.RepeatedField`1<Unity.MLAgents.CommunicatorObjects.AgentActionProto>
struct  RepeatedField_1_t5CED0C9D40D73B800EBF4F7240C943DC34F268E5  : public RuntimeObject
{
public:
	// T[] Google.Protobuf.Collections.RepeatedField`1::array
	AgentActionProtoU5BU5D_tF820BA069182EF5A73BC78C4838650C447E998F3* ___array_2;
	// System.Int32 Google.Protobuf.Collections.RepeatedField`1::count
	int32_t ___count_3;

public:
	inline static int32_t get_offset_of_array_2() { return static_cast<int32_t>(offsetof(RepeatedField_1_t5CED0C9D40D73B800EBF4F7240C943DC34F268E5, ___array_2)); }
	inline AgentActionProtoU5BU5D_tF820BA069182EF5A73BC78C4838650C447E998F3* get_array_2() const { return ___array_2; }
	inline AgentActionProtoU5BU5D_tF820BA069182EF5A73BC78C4838650C447E998F3** get_address_of_array_2() { return &___array_2; }
	inline void set_array_2(AgentActionProtoU5BU5D_tF820BA069182EF5A73BC78C4838650C447E998F3* value)
	{
		___array_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___array_2), (void*)value);
	}

	inline static int32_t get_offset_of_count_3() { return static_cast<int32_t>(offsetof(RepeatedField_1_t5CED0C9D40D73B800EBF4F7240C943DC34F268E5, ___count_3)); }
	inline int32_t get_count_3() const { return ___count_3; }
	inline int32_t* get_address_of_count_3() { return &___count_3; }
	inline void set_count_3(int32_t value)
	{
		___count_3 = value;
	}
};

struct RepeatedField_1_t5CED0C9D40D73B800EBF4F7240C943DC34F268E5_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> Google.Protobuf.Collections.RepeatedField`1::EqualityComparer
	EqualityComparer_1_t661212EE586E6AC24DC4EA6BC049C096D8519586 * ___EqualityComparer_0;
	// T[] Google.Protobuf.Collections.RepeatedField`1::EmptyArray
	AgentActionProtoU5BU5D_tF820BA069182EF5A73BC78C4838650C447E998F3* ___EmptyArray_1;

public:
	inline static int32_t get_offset_of_EqualityComparer_0() { return static_cast<int32_t>(offsetof(RepeatedField_1_t5CED0C9D40D73B800EBF4F7240C943DC34F268E5_StaticFields, ___EqualityComparer_0)); }
	inline EqualityComparer_1_t661212EE586E6AC24DC4EA6BC049C096D8519586 * get_EqualityComparer_0() const { return ___EqualityComparer_0; }
	inline EqualityComparer_1_t661212EE586E6AC24DC4EA6BC049C096D8519586 ** get_address_of_EqualityComparer_0() { return &___EqualityComparer_0; }
	inline void set_EqualityComparer_0(EqualityComparer_1_t661212EE586E6AC24DC4EA6BC049C096D8519586 * value)
	{
		___EqualityComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EqualityComparer_0), (void*)value);
	}

	inline static int32_t get_offset_of_EmptyArray_1() { return static_cast<int32_t>(offsetof(RepeatedField_1_t5CED0C9D40D73B800EBF4F7240C943DC34F268E5_StaticFields, ___EmptyArray_1)); }
	inline AgentActionProtoU5BU5D_tF820BA069182EF5A73BC78C4838650C447E998F3* get_EmptyArray_1() const { return ___EmptyArray_1; }
	inline AgentActionProtoU5BU5D_tF820BA069182EF5A73BC78C4838650C447E998F3** get_address_of_EmptyArray_1() { return &___EmptyArray_1; }
	inline void set_EmptyArray_1(AgentActionProtoU5BU5D_tF820BA069182EF5A73BC78C4838650C447E998F3* value)
	{
		___EmptyArray_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyArray_1), (void*)value);
	}
};


// Google.Protobuf.Collections.RepeatedField`1<Unity.MLAgents.CommunicatorObjects.AgentInfoProto>
struct  RepeatedField_1_tCF11F7126638E9C61AA512264FF6A708BACA9785  : public RuntimeObject
{
public:
	// T[] Google.Protobuf.Collections.RepeatedField`1::array
	AgentInfoProtoU5BU5D_t9CA186F9736099591547C51C8BCD8AB9BF8B43BE* ___array_2;
	// System.Int32 Google.Protobuf.Collections.RepeatedField`1::count
	int32_t ___count_3;

public:
	inline static int32_t get_offset_of_array_2() { return static_cast<int32_t>(offsetof(RepeatedField_1_tCF11F7126638E9C61AA512264FF6A708BACA9785, ___array_2)); }
	inline AgentInfoProtoU5BU5D_t9CA186F9736099591547C51C8BCD8AB9BF8B43BE* get_array_2() const { return ___array_2; }
	inline AgentInfoProtoU5BU5D_t9CA186F9736099591547C51C8BCD8AB9BF8B43BE** get_address_of_array_2() { return &___array_2; }
	inline void set_array_2(AgentInfoProtoU5BU5D_t9CA186F9736099591547C51C8BCD8AB9BF8B43BE* value)
	{
		___array_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___array_2), (void*)value);
	}

	inline static int32_t get_offset_of_count_3() { return static_cast<int32_t>(offsetof(RepeatedField_1_tCF11F7126638E9C61AA512264FF6A708BACA9785, ___count_3)); }
	inline int32_t get_count_3() const { return ___count_3; }
	inline int32_t* get_address_of_count_3() { return &___count_3; }
	inline void set_count_3(int32_t value)
	{
		___count_3 = value;
	}
};

struct RepeatedField_1_tCF11F7126638E9C61AA512264FF6A708BACA9785_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> Google.Protobuf.Collections.RepeatedField`1::EqualityComparer
	EqualityComparer_1_t697882B8B985505A5044DAC80E324F1C0FB2D292 * ___EqualityComparer_0;
	// T[] Google.Protobuf.Collections.RepeatedField`1::EmptyArray
	AgentInfoProtoU5BU5D_t9CA186F9736099591547C51C8BCD8AB9BF8B43BE* ___EmptyArray_1;

public:
	inline static int32_t get_offset_of_EqualityComparer_0() { return static_cast<int32_t>(offsetof(RepeatedField_1_tCF11F7126638E9C61AA512264FF6A708BACA9785_StaticFields, ___EqualityComparer_0)); }
	inline EqualityComparer_1_t697882B8B985505A5044DAC80E324F1C0FB2D292 * get_EqualityComparer_0() const { return ___EqualityComparer_0; }
	inline EqualityComparer_1_t697882B8B985505A5044DAC80E324F1C0FB2D292 ** get_address_of_EqualityComparer_0() { return &___EqualityComparer_0; }
	inline void set_EqualityComparer_0(EqualityComparer_1_t697882B8B985505A5044DAC80E324F1C0FB2D292 * value)
	{
		___EqualityComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EqualityComparer_0), (void*)value);
	}

	inline static int32_t get_offset_of_EmptyArray_1() { return static_cast<int32_t>(offsetof(RepeatedField_1_tCF11F7126638E9C61AA512264FF6A708BACA9785_StaticFields, ___EmptyArray_1)); }
	inline AgentInfoProtoU5BU5D_t9CA186F9736099591547C51C8BCD8AB9BF8B43BE* get_EmptyArray_1() const { return ___EmptyArray_1; }
	inline AgentInfoProtoU5BU5D_t9CA186F9736099591547C51C8BCD8AB9BF8B43BE** get_address_of_EmptyArray_1() { return &___EmptyArray_1; }
	inline void set_EmptyArray_1(AgentInfoProtoU5BU5D_t9CA186F9736099591547C51C8BCD8AB9BF8B43BE* value)
	{
		___EmptyArray_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyArray_1), (void*)value);
	}
};


// Google.Protobuf.FieldCodec`1<System.String>
struct  FieldCodec_1_t156034F6D44891148E8D3C98BCDB5672D2CE4A29  : public RuntimeObject
{
public:
	// System.Boolean Google.Protobuf.FieldCodec`1::<PackedRepeatedField>k__BackingField
	bool ___U3CPackedRepeatedFieldU3Ek__BackingField_3;
	// System.Action`2<Google.Protobuf.CodedOutputStream,T> Google.Protobuf.FieldCodec`1::<ValueWriter>k__BackingField
	Action_2_tEDB3248B7697EBF1D27F0264CA7DC474DF77C7E9 * ___U3CValueWriterU3Ek__BackingField_4;
	// System.Func`2<T,System.Int32> Google.Protobuf.FieldCodec`1::<ValueSizeCalculator>k__BackingField
	Func_2_t2901F617470C55B4D846B4CEB9391D398E86C62C * ___U3CValueSizeCalculatorU3Ek__BackingField_5;
	// System.Func`2<Google.Protobuf.CodedInputStream,T> Google.Protobuf.FieldCodec`1::<ValueReader>k__BackingField
	Func_2_t2354D14485FA25028E41A18C348288155054D0B9 * ___U3CValueReaderU3Ek__BackingField_6;
	// Google.Protobuf.FieldCodec`1/InputMerger<T> Google.Protobuf.FieldCodec`1::<ValueMerger>k__BackingField
	InputMerger_t9347585101A9426897B4196D1866708637802C70 * ___U3CValueMergerU3Ek__BackingField_7;
	// Google.Protobuf.FieldCodec`1/ValuesMerger<T> Google.Protobuf.FieldCodec`1::<FieldMerger>k__BackingField
	ValuesMerger_t2A3FF69221EF6DB250C67A1627C966497B41FC1E * ___U3CFieldMergerU3Ek__BackingField_8;
	// System.Int32 Google.Protobuf.FieldCodec`1::<FixedSize>k__BackingField
	int32_t ___U3CFixedSizeU3Ek__BackingField_9;
	// System.UInt32 Google.Protobuf.FieldCodec`1::<Tag>k__BackingField
	uint32_t ___U3CTagU3Ek__BackingField_10;
	// System.UInt32 Google.Protobuf.FieldCodec`1::<EndTag>k__BackingField
	uint32_t ___U3CEndTagU3Ek__BackingField_11;
	// T Google.Protobuf.FieldCodec`1::<DefaultValue>k__BackingField
	String_t* ___U3CDefaultValueU3Ek__BackingField_12;
	// System.Int32 Google.Protobuf.FieldCodec`1::tagSize
	int32_t ___tagSize_13;

public:
	inline static int32_t get_offset_of_U3CPackedRepeatedFieldU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(FieldCodec_1_t156034F6D44891148E8D3C98BCDB5672D2CE4A29, ___U3CPackedRepeatedFieldU3Ek__BackingField_3)); }
	inline bool get_U3CPackedRepeatedFieldU3Ek__BackingField_3() const { return ___U3CPackedRepeatedFieldU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CPackedRepeatedFieldU3Ek__BackingField_3() { return &___U3CPackedRepeatedFieldU3Ek__BackingField_3; }
	inline void set_U3CPackedRepeatedFieldU3Ek__BackingField_3(bool value)
	{
		___U3CPackedRepeatedFieldU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CValueWriterU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(FieldCodec_1_t156034F6D44891148E8D3C98BCDB5672D2CE4A29, ___U3CValueWriterU3Ek__BackingField_4)); }
	inline Action_2_tEDB3248B7697EBF1D27F0264CA7DC474DF77C7E9 * get_U3CValueWriterU3Ek__BackingField_4() const { return ___U3CValueWriterU3Ek__BackingField_4; }
	inline Action_2_tEDB3248B7697EBF1D27F0264CA7DC474DF77C7E9 ** get_address_of_U3CValueWriterU3Ek__BackingField_4() { return &___U3CValueWriterU3Ek__BackingField_4; }
	inline void set_U3CValueWriterU3Ek__BackingField_4(Action_2_tEDB3248B7697EBF1D27F0264CA7DC474DF77C7E9 * value)
	{
		___U3CValueWriterU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValueWriterU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CValueSizeCalculatorU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(FieldCodec_1_t156034F6D44891148E8D3C98BCDB5672D2CE4A29, ___U3CValueSizeCalculatorU3Ek__BackingField_5)); }
	inline Func_2_t2901F617470C55B4D846B4CEB9391D398E86C62C * get_U3CValueSizeCalculatorU3Ek__BackingField_5() const { return ___U3CValueSizeCalculatorU3Ek__BackingField_5; }
	inline Func_2_t2901F617470C55B4D846B4CEB9391D398E86C62C ** get_address_of_U3CValueSizeCalculatorU3Ek__BackingField_5() { return &___U3CValueSizeCalculatorU3Ek__BackingField_5; }
	inline void set_U3CValueSizeCalculatorU3Ek__BackingField_5(Func_2_t2901F617470C55B4D846B4CEB9391D398E86C62C * value)
	{
		___U3CValueSizeCalculatorU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValueSizeCalculatorU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CValueReaderU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(FieldCodec_1_t156034F6D44891148E8D3C98BCDB5672D2CE4A29, ___U3CValueReaderU3Ek__BackingField_6)); }
	inline Func_2_t2354D14485FA25028E41A18C348288155054D0B9 * get_U3CValueReaderU3Ek__BackingField_6() const { return ___U3CValueReaderU3Ek__BackingField_6; }
	inline Func_2_t2354D14485FA25028E41A18C348288155054D0B9 ** get_address_of_U3CValueReaderU3Ek__BackingField_6() { return &___U3CValueReaderU3Ek__BackingField_6; }
	inline void set_U3CValueReaderU3Ek__BackingField_6(Func_2_t2354D14485FA25028E41A18C348288155054D0B9 * value)
	{
		___U3CValueReaderU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValueReaderU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CValueMergerU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(FieldCodec_1_t156034F6D44891148E8D3C98BCDB5672D2CE4A29, ___U3CValueMergerU3Ek__BackingField_7)); }
	inline InputMerger_t9347585101A9426897B4196D1866708637802C70 * get_U3CValueMergerU3Ek__BackingField_7() const { return ___U3CValueMergerU3Ek__BackingField_7; }
	inline InputMerger_t9347585101A9426897B4196D1866708637802C70 ** get_address_of_U3CValueMergerU3Ek__BackingField_7() { return &___U3CValueMergerU3Ek__BackingField_7; }
	inline void set_U3CValueMergerU3Ek__BackingField_7(InputMerger_t9347585101A9426897B4196D1866708637802C70 * value)
	{
		___U3CValueMergerU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValueMergerU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFieldMergerU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(FieldCodec_1_t156034F6D44891148E8D3C98BCDB5672D2CE4A29, ___U3CFieldMergerU3Ek__BackingField_8)); }
	inline ValuesMerger_t2A3FF69221EF6DB250C67A1627C966497B41FC1E * get_U3CFieldMergerU3Ek__BackingField_8() const { return ___U3CFieldMergerU3Ek__BackingField_8; }
	inline ValuesMerger_t2A3FF69221EF6DB250C67A1627C966497B41FC1E ** get_address_of_U3CFieldMergerU3Ek__BackingField_8() { return &___U3CFieldMergerU3Ek__BackingField_8; }
	inline void set_U3CFieldMergerU3Ek__BackingField_8(ValuesMerger_t2A3FF69221EF6DB250C67A1627C966497B41FC1E * value)
	{
		___U3CFieldMergerU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFieldMergerU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFixedSizeU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(FieldCodec_1_t156034F6D44891148E8D3C98BCDB5672D2CE4A29, ___U3CFixedSizeU3Ek__BackingField_9)); }
	inline int32_t get_U3CFixedSizeU3Ek__BackingField_9() const { return ___U3CFixedSizeU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CFixedSizeU3Ek__BackingField_9() { return &___U3CFixedSizeU3Ek__BackingField_9; }
	inline void set_U3CFixedSizeU3Ek__BackingField_9(int32_t value)
	{
		___U3CFixedSizeU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CTagU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(FieldCodec_1_t156034F6D44891148E8D3C98BCDB5672D2CE4A29, ___U3CTagU3Ek__BackingField_10)); }
	inline uint32_t get_U3CTagU3Ek__BackingField_10() const { return ___U3CTagU3Ek__BackingField_10; }
	inline uint32_t* get_address_of_U3CTagU3Ek__BackingField_10() { return &___U3CTagU3Ek__BackingField_10; }
	inline void set_U3CTagU3Ek__BackingField_10(uint32_t value)
	{
		___U3CTagU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CEndTagU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(FieldCodec_1_t156034F6D44891148E8D3C98BCDB5672D2CE4A29, ___U3CEndTagU3Ek__BackingField_11)); }
	inline uint32_t get_U3CEndTagU3Ek__BackingField_11() const { return ___U3CEndTagU3Ek__BackingField_11; }
	inline uint32_t* get_address_of_U3CEndTagU3Ek__BackingField_11() { return &___U3CEndTagU3Ek__BackingField_11; }
	inline void set_U3CEndTagU3Ek__BackingField_11(uint32_t value)
	{
		___U3CEndTagU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CDefaultValueU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(FieldCodec_1_t156034F6D44891148E8D3C98BCDB5672D2CE4A29, ___U3CDefaultValueU3Ek__BackingField_12)); }
	inline String_t* get_U3CDefaultValueU3Ek__BackingField_12() const { return ___U3CDefaultValueU3Ek__BackingField_12; }
	inline String_t** get_address_of_U3CDefaultValueU3Ek__BackingField_12() { return &___U3CDefaultValueU3Ek__BackingField_12; }
	inline void set_U3CDefaultValueU3Ek__BackingField_12(String_t* value)
	{
		___U3CDefaultValueU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDefaultValueU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_tagSize_13() { return static_cast<int32_t>(offsetof(FieldCodec_1_t156034F6D44891148E8D3C98BCDB5672D2CE4A29, ___tagSize_13)); }
	inline int32_t get_tagSize_13() const { return ___tagSize_13; }
	inline int32_t* get_address_of_tagSize_13() { return &___tagSize_13; }
	inline void set_tagSize_13(int32_t value)
	{
		___tagSize_13 = value;
	}
};

struct FieldCodec_1_t156034F6D44891148E8D3C98BCDB5672D2CE4A29_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> Google.Protobuf.FieldCodec`1::EqualityComparer
	EqualityComparer_1_tBEFFC6F649A17852373A084880D57CB299084137 * ___EqualityComparer_0;
	// T Google.Protobuf.FieldCodec`1::DefaultDefault
	String_t* ___DefaultDefault_1;
	// System.Boolean Google.Protobuf.FieldCodec`1::TypeSupportsPacking
	bool ___TypeSupportsPacking_2;

public:
	inline static int32_t get_offset_of_EqualityComparer_0() { return static_cast<int32_t>(offsetof(FieldCodec_1_t156034F6D44891148E8D3C98BCDB5672D2CE4A29_StaticFields, ___EqualityComparer_0)); }
	inline EqualityComparer_1_tBEFFC6F649A17852373A084880D57CB299084137 * get_EqualityComparer_0() const { return ___EqualityComparer_0; }
	inline EqualityComparer_1_tBEFFC6F649A17852373A084880D57CB299084137 ** get_address_of_EqualityComparer_0() { return &___EqualityComparer_0; }
	inline void set_EqualityComparer_0(EqualityComparer_1_tBEFFC6F649A17852373A084880D57CB299084137 * value)
	{
		___EqualityComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EqualityComparer_0), (void*)value);
	}

	inline static int32_t get_offset_of_DefaultDefault_1() { return static_cast<int32_t>(offsetof(FieldCodec_1_t156034F6D44891148E8D3C98BCDB5672D2CE4A29_StaticFields, ___DefaultDefault_1)); }
	inline String_t* get_DefaultDefault_1() const { return ___DefaultDefault_1; }
	inline String_t** get_address_of_DefaultDefault_1() { return &___DefaultDefault_1; }
	inline void set_DefaultDefault_1(String_t* value)
	{
		___DefaultDefault_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultDefault_1), (void*)value);
	}

	inline static int32_t get_offset_of_TypeSupportsPacking_2() { return static_cast<int32_t>(offsetof(FieldCodec_1_t156034F6D44891148E8D3C98BCDB5672D2CE4A29_StaticFields, ___TypeSupportsPacking_2)); }
	inline bool get_TypeSupportsPacking_2() const { return ___TypeSupportsPacking_2; }
	inline bool* get_address_of_TypeSupportsPacking_2() { return &___TypeSupportsPacking_2; }
	inline void set_TypeSupportsPacking_2(bool value)
	{
		___TypeSupportsPacking_2 = value;
	}
};


// Google.Protobuf.FieldCodec`1<Unity.MLAgents.CommunicatorObjects.AgentActionProto>
struct  FieldCodec_1_t81FE647280EF3EFB39888CEE098EFFFABD0EB887  : public RuntimeObject
{
public:
	// System.Boolean Google.Protobuf.FieldCodec`1::<PackedRepeatedField>k__BackingField
	bool ___U3CPackedRepeatedFieldU3Ek__BackingField_3;
	// System.Action`2<Google.Protobuf.CodedOutputStream,T> Google.Protobuf.FieldCodec`1::<ValueWriter>k__BackingField
	Action_2_tDF0734F3DC6568F0D1AFE8E7363105134BDED33E * ___U3CValueWriterU3Ek__BackingField_4;
	// System.Func`2<T,System.Int32> Google.Protobuf.FieldCodec`1::<ValueSizeCalculator>k__BackingField
	Func_2_t72A2262359CFF63919A786B321B126FE4A7BB1B5 * ___U3CValueSizeCalculatorU3Ek__BackingField_5;
	// System.Func`2<Google.Protobuf.CodedInputStream,T> Google.Protobuf.FieldCodec`1::<ValueReader>k__BackingField
	Func_2_t99A6031AE11752B433A23DDDB49E00C351FB27F4 * ___U3CValueReaderU3Ek__BackingField_6;
	// Google.Protobuf.FieldCodec`1/InputMerger<T> Google.Protobuf.FieldCodec`1::<ValueMerger>k__BackingField
	InputMerger_t19397F2296E1355B113A3C055FF877B61EFB58DD * ___U3CValueMergerU3Ek__BackingField_7;
	// Google.Protobuf.FieldCodec`1/ValuesMerger<T> Google.Protobuf.FieldCodec`1::<FieldMerger>k__BackingField
	ValuesMerger_t96BC9AD302569F9DC87C977FD66F26C2D24F4EBD * ___U3CFieldMergerU3Ek__BackingField_8;
	// System.Int32 Google.Protobuf.FieldCodec`1::<FixedSize>k__BackingField
	int32_t ___U3CFixedSizeU3Ek__BackingField_9;
	// System.UInt32 Google.Protobuf.FieldCodec`1::<Tag>k__BackingField
	uint32_t ___U3CTagU3Ek__BackingField_10;
	// System.UInt32 Google.Protobuf.FieldCodec`1::<EndTag>k__BackingField
	uint32_t ___U3CEndTagU3Ek__BackingField_11;
	// T Google.Protobuf.FieldCodec`1::<DefaultValue>k__BackingField
	AgentActionProto_tD039A9669DE32649580A51A04DC77145F5D748C9 * ___U3CDefaultValueU3Ek__BackingField_12;
	// System.Int32 Google.Protobuf.FieldCodec`1::tagSize
	int32_t ___tagSize_13;

public:
	inline static int32_t get_offset_of_U3CPackedRepeatedFieldU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(FieldCodec_1_t81FE647280EF3EFB39888CEE098EFFFABD0EB887, ___U3CPackedRepeatedFieldU3Ek__BackingField_3)); }
	inline bool get_U3CPackedRepeatedFieldU3Ek__BackingField_3() const { return ___U3CPackedRepeatedFieldU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CPackedRepeatedFieldU3Ek__BackingField_3() { return &___U3CPackedRepeatedFieldU3Ek__BackingField_3; }
	inline void set_U3CPackedRepeatedFieldU3Ek__BackingField_3(bool value)
	{
		___U3CPackedRepeatedFieldU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CValueWriterU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(FieldCodec_1_t81FE647280EF3EFB39888CEE098EFFFABD0EB887, ___U3CValueWriterU3Ek__BackingField_4)); }
	inline Action_2_tDF0734F3DC6568F0D1AFE8E7363105134BDED33E * get_U3CValueWriterU3Ek__BackingField_4() const { return ___U3CValueWriterU3Ek__BackingField_4; }
	inline Action_2_tDF0734F3DC6568F0D1AFE8E7363105134BDED33E ** get_address_of_U3CValueWriterU3Ek__BackingField_4() { return &___U3CValueWriterU3Ek__BackingField_4; }
	inline void set_U3CValueWriterU3Ek__BackingField_4(Action_2_tDF0734F3DC6568F0D1AFE8E7363105134BDED33E * value)
	{
		___U3CValueWriterU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValueWriterU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CValueSizeCalculatorU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(FieldCodec_1_t81FE647280EF3EFB39888CEE098EFFFABD0EB887, ___U3CValueSizeCalculatorU3Ek__BackingField_5)); }
	inline Func_2_t72A2262359CFF63919A786B321B126FE4A7BB1B5 * get_U3CValueSizeCalculatorU3Ek__BackingField_5() const { return ___U3CValueSizeCalculatorU3Ek__BackingField_5; }
	inline Func_2_t72A2262359CFF63919A786B321B126FE4A7BB1B5 ** get_address_of_U3CValueSizeCalculatorU3Ek__BackingField_5() { return &___U3CValueSizeCalculatorU3Ek__BackingField_5; }
	inline void set_U3CValueSizeCalculatorU3Ek__BackingField_5(Func_2_t72A2262359CFF63919A786B321B126FE4A7BB1B5 * value)
	{
		___U3CValueSizeCalculatorU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValueSizeCalculatorU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CValueReaderU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(FieldCodec_1_t81FE647280EF3EFB39888CEE098EFFFABD0EB887, ___U3CValueReaderU3Ek__BackingField_6)); }
	inline Func_2_t99A6031AE11752B433A23DDDB49E00C351FB27F4 * get_U3CValueReaderU3Ek__BackingField_6() const { return ___U3CValueReaderU3Ek__BackingField_6; }
	inline Func_2_t99A6031AE11752B433A23DDDB49E00C351FB27F4 ** get_address_of_U3CValueReaderU3Ek__BackingField_6() { return &___U3CValueReaderU3Ek__BackingField_6; }
	inline void set_U3CValueReaderU3Ek__BackingField_6(Func_2_t99A6031AE11752B433A23DDDB49E00C351FB27F4 * value)
	{
		___U3CValueReaderU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValueReaderU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CValueMergerU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(FieldCodec_1_t81FE647280EF3EFB39888CEE098EFFFABD0EB887, ___U3CValueMergerU3Ek__BackingField_7)); }
	inline InputMerger_t19397F2296E1355B113A3C055FF877B61EFB58DD * get_U3CValueMergerU3Ek__BackingField_7() const { return ___U3CValueMergerU3Ek__BackingField_7; }
	inline InputMerger_t19397F2296E1355B113A3C055FF877B61EFB58DD ** get_address_of_U3CValueMergerU3Ek__BackingField_7() { return &___U3CValueMergerU3Ek__BackingField_7; }
	inline void set_U3CValueMergerU3Ek__BackingField_7(InputMerger_t19397F2296E1355B113A3C055FF877B61EFB58DD * value)
	{
		___U3CValueMergerU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValueMergerU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFieldMergerU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(FieldCodec_1_t81FE647280EF3EFB39888CEE098EFFFABD0EB887, ___U3CFieldMergerU3Ek__BackingField_8)); }
	inline ValuesMerger_t96BC9AD302569F9DC87C977FD66F26C2D24F4EBD * get_U3CFieldMergerU3Ek__BackingField_8() const { return ___U3CFieldMergerU3Ek__BackingField_8; }
	inline ValuesMerger_t96BC9AD302569F9DC87C977FD66F26C2D24F4EBD ** get_address_of_U3CFieldMergerU3Ek__BackingField_8() { return &___U3CFieldMergerU3Ek__BackingField_8; }
	inline void set_U3CFieldMergerU3Ek__BackingField_8(ValuesMerger_t96BC9AD302569F9DC87C977FD66F26C2D24F4EBD * value)
	{
		___U3CFieldMergerU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFieldMergerU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFixedSizeU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(FieldCodec_1_t81FE647280EF3EFB39888CEE098EFFFABD0EB887, ___U3CFixedSizeU3Ek__BackingField_9)); }
	inline int32_t get_U3CFixedSizeU3Ek__BackingField_9() const { return ___U3CFixedSizeU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CFixedSizeU3Ek__BackingField_9() { return &___U3CFixedSizeU3Ek__BackingField_9; }
	inline void set_U3CFixedSizeU3Ek__BackingField_9(int32_t value)
	{
		___U3CFixedSizeU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CTagU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(FieldCodec_1_t81FE647280EF3EFB39888CEE098EFFFABD0EB887, ___U3CTagU3Ek__BackingField_10)); }
	inline uint32_t get_U3CTagU3Ek__BackingField_10() const { return ___U3CTagU3Ek__BackingField_10; }
	inline uint32_t* get_address_of_U3CTagU3Ek__BackingField_10() { return &___U3CTagU3Ek__BackingField_10; }
	inline void set_U3CTagU3Ek__BackingField_10(uint32_t value)
	{
		___U3CTagU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CEndTagU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(FieldCodec_1_t81FE647280EF3EFB39888CEE098EFFFABD0EB887, ___U3CEndTagU3Ek__BackingField_11)); }
	inline uint32_t get_U3CEndTagU3Ek__BackingField_11() const { return ___U3CEndTagU3Ek__BackingField_11; }
	inline uint32_t* get_address_of_U3CEndTagU3Ek__BackingField_11() { return &___U3CEndTagU3Ek__BackingField_11; }
	inline void set_U3CEndTagU3Ek__BackingField_11(uint32_t value)
	{
		___U3CEndTagU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CDefaultValueU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(FieldCodec_1_t81FE647280EF3EFB39888CEE098EFFFABD0EB887, ___U3CDefaultValueU3Ek__BackingField_12)); }
	inline AgentActionProto_tD039A9669DE32649580A51A04DC77145F5D748C9 * get_U3CDefaultValueU3Ek__BackingField_12() const { return ___U3CDefaultValueU3Ek__BackingField_12; }
	inline AgentActionProto_tD039A9669DE32649580A51A04DC77145F5D748C9 ** get_address_of_U3CDefaultValueU3Ek__BackingField_12() { return &___U3CDefaultValueU3Ek__BackingField_12; }
	inline void set_U3CDefaultValueU3Ek__BackingField_12(AgentActionProto_tD039A9669DE32649580A51A04DC77145F5D748C9 * value)
	{
		___U3CDefaultValueU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDefaultValueU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_tagSize_13() { return static_cast<int32_t>(offsetof(FieldCodec_1_t81FE647280EF3EFB39888CEE098EFFFABD0EB887, ___tagSize_13)); }
	inline int32_t get_tagSize_13() const { return ___tagSize_13; }
	inline int32_t* get_address_of_tagSize_13() { return &___tagSize_13; }
	inline void set_tagSize_13(int32_t value)
	{
		___tagSize_13 = value;
	}
};

struct FieldCodec_1_t81FE647280EF3EFB39888CEE098EFFFABD0EB887_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> Google.Protobuf.FieldCodec`1::EqualityComparer
	EqualityComparer_1_t661212EE586E6AC24DC4EA6BC049C096D8519586 * ___EqualityComparer_0;
	// T Google.Protobuf.FieldCodec`1::DefaultDefault
	AgentActionProto_tD039A9669DE32649580A51A04DC77145F5D748C9 * ___DefaultDefault_1;
	// System.Boolean Google.Protobuf.FieldCodec`1::TypeSupportsPacking
	bool ___TypeSupportsPacking_2;

public:
	inline static int32_t get_offset_of_EqualityComparer_0() { return static_cast<int32_t>(offsetof(FieldCodec_1_t81FE647280EF3EFB39888CEE098EFFFABD0EB887_StaticFields, ___EqualityComparer_0)); }
	inline EqualityComparer_1_t661212EE586E6AC24DC4EA6BC049C096D8519586 * get_EqualityComparer_0() const { return ___EqualityComparer_0; }
	inline EqualityComparer_1_t661212EE586E6AC24DC4EA6BC049C096D8519586 ** get_address_of_EqualityComparer_0() { return &___EqualityComparer_0; }
	inline void set_EqualityComparer_0(EqualityComparer_1_t661212EE586E6AC24DC4EA6BC049C096D8519586 * value)
	{
		___EqualityComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EqualityComparer_0), (void*)value);
	}

	inline static int32_t get_offset_of_DefaultDefault_1() { return static_cast<int32_t>(offsetof(FieldCodec_1_t81FE647280EF3EFB39888CEE098EFFFABD0EB887_StaticFields, ___DefaultDefault_1)); }
	inline AgentActionProto_tD039A9669DE32649580A51A04DC77145F5D748C9 * get_DefaultDefault_1() const { return ___DefaultDefault_1; }
	inline AgentActionProto_tD039A9669DE32649580A51A04DC77145F5D748C9 ** get_address_of_DefaultDefault_1() { return &___DefaultDefault_1; }
	inline void set_DefaultDefault_1(AgentActionProto_tD039A9669DE32649580A51A04DC77145F5D748C9 * value)
	{
		___DefaultDefault_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultDefault_1), (void*)value);
	}

	inline static int32_t get_offset_of_TypeSupportsPacking_2() { return static_cast<int32_t>(offsetof(FieldCodec_1_t81FE647280EF3EFB39888CEE098EFFFABD0EB887_StaticFields, ___TypeSupportsPacking_2)); }
	inline bool get_TypeSupportsPacking_2() const { return ___TypeSupportsPacking_2; }
	inline bool* get_address_of_TypeSupportsPacking_2() { return &___TypeSupportsPacking_2; }
	inline void set_TypeSupportsPacking_2(bool value)
	{
		___TypeSupportsPacking_2 = value;
	}
};


// Google.Protobuf.FieldCodec`1<Unity.MLAgents.CommunicatorObjects.AgentInfoProto>
struct  FieldCodec_1_tCA7C1F70281CCD6EEAB215F57EF24B5E6CFCC629  : public RuntimeObject
{
public:
	// System.Boolean Google.Protobuf.FieldCodec`1::<PackedRepeatedField>k__BackingField
	bool ___U3CPackedRepeatedFieldU3Ek__BackingField_3;
	// System.Action`2<Google.Protobuf.CodedOutputStream,T> Google.Protobuf.FieldCodec`1::<ValueWriter>k__BackingField
	Action_2_tBAF7338CCAC68ACBBCF6DBC59E4E4F3DE33EA648 * ___U3CValueWriterU3Ek__BackingField_4;
	// System.Func`2<T,System.Int32> Google.Protobuf.FieldCodec`1::<ValueSizeCalculator>k__BackingField
	Func_2_t73B65842E05C621A824BCBD10B37FDC738C05734 * ___U3CValueSizeCalculatorU3Ek__BackingField_5;
	// System.Func`2<Google.Protobuf.CodedInputStream,T> Google.Protobuf.FieldCodec`1::<ValueReader>k__BackingField
	Func_2_tBE80A8223652FBC73D2DACD0D9552A0A236DDA05 * ___U3CValueReaderU3Ek__BackingField_6;
	// Google.Protobuf.FieldCodec`1/InputMerger<T> Google.Protobuf.FieldCodec`1::<ValueMerger>k__BackingField
	InputMerger_t88D25A1A4628219B16FA969F3B96D81A9840BA65 * ___U3CValueMergerU3Ek__BackingField_7;
	// Google.Protobuf.FieldCodec`1/ValuesMerger<T> Google.Protobuf.FieldCodec`1::<FieldMerger>k__BackingField
	ValuesMerger_t4B955A0E621B9C7A7EBCAD931EDE5EE6BEADE1E9 * ___U3CFieldMergerU3Ek__BackingField_8;
	// System.Int32 Google.Protobuf.FieldCodec`1::<FixedSize>k__BackingField
	int32_t ___U3CFixedSizeU3Ek__BackingField_9;
	// System.UInt32 Google.Protobuf.FieldCodec`1::<Tag>k__BackingField
	uint32_t ___U3CTagU3Ek__BackingField_10;
	// System.UInt32 Google.Protobuf.FieldCodec`1::<EndTag>k__BackingField
	uint32_t ___U3CEndTagU3Ek__BackingField_11;
	// T Google.Protobuf.FieldCodec`1::<DefaultValue>k__BackingField
	AgentInfoProto_tB07CB4D6C9A6367975913C1581FAA29FDB4FF5B0 * ___U3CDefaultValueU3Ek__BackingField_12;
	// System.Int32 Google.Protobuf.FieldCodec`1::tagSize
	int32_t ___tagSize_13;

public:
	inline static int32_t get_offset_of_U3CPackedRepeatedFieldU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(FieldCodec_1_tCA7C1F70281CCD6EEAB215F57EF24B5E6CFCC629, ___U3CPackedRepeatedFieldU3Ek__BackingField_3)); }
	inline bool get_U3CPackedRepeatedFieldU3Ek__BackingField_3() const { return ___U3CPackedRepeatedFieldU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CPackedRepeatedFieldU3Ek__BackingField_3() { return &___U3CPackedRepeatedFieldU3Ek__BackingField_3; }
	inline void set_U3CPackedRepeatedFieldU3Ek__BackingField_3(bool value)
	{
		___U3CPackedRepeatedFieldU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CValueWriterU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(FieldCodec_1_tCA7C1F70281CCD6EEAB215F57EF24B5E6CFCC629, ___U3CValueWriterU3Ek__BackingField_4)); }
	inline Action_2_tBAF7338CCAC68ACBBCF6DBC59E4E4F3DE33EA648 * get_U3CValueWriterU3Ek__BackingField_4() const { return ___U3CValueWriterU3Ek__BackingField_4; }
	inline Action_2_tBAF7338CCAC68ACBBCF6DBC59E4E4F3DE33EA648 ** get_address_of_U3CValueWriterU3Ek__BackingField_4() { return &___U3CValueWriterU3Ek__BackingField_4; }
	inline void set_U3CValueWriterU3Ek__BackingField_4(Action_2_tBAF7338CCAC68ACBBCF6DBC59E4E4F3DE33EA648 * value)
	{
		___U3CValueWriterU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValueWriterU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CValueSizeCalculatorU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(FieldCodec_1_tCA7C1F70281CCD6EEAB215F57EF24B5E6CFCC629, ___U3CValueSizeCalculatorU3Ek__BackingField_5)); }
	inline Func_2_t73B65842E05C621A824BCBD10B37FDC738C05734 * get_U3CValueSizeCalculatorU3Ek__BackingField_5() const { return ___U3CValueSizeCalculatorU3Ek__BackingField_5; }
	inline Func_2_t73B65842E05C621A824BCBD10B37FDC738C05734 ** get_address_of_U3CValueSizeCalculatorU3Ek__BackingField_5() { return &___U3CValueSizeCalculatorU3Ek__BackingField_5; }
	inline void set_U3CValueSizeCalculatorU3Ek__BackingField_5(Func_2_t73B65842E05C621A824BCBD10B37FDC738C05734 * value)
	{
		___U3CValueSizeCalculatorU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValueSizeCalculatorU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CValueReaderU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(FieldCodec_1_tCA7C1F70281CCD6EEAB215F57EF24B5E6CFCC629, ___U3CValueReaderU3Ek__BackingField_6)); }
	inline Func_2_tBE80A8223652FBC73D2DACD0D9552A0A236DDA05 * get_U3CValueReaderU3Ek__BackingField_6() const { return ___U3CValueReaderU3Ek__BackingField_6; }
	inline Func_2_tBE80A8223652FBC73D2DACD0D9552A0A236DDA05 ** get_address_of_U3CValueReaderU3Ek__BackingField_6() { return &___U3CValueReaderU3Ek__BackingField_6; }
	inline void set_U3CValueReaderU3Ek__BackingField_6(Func_2_tBE80A8223652FBC73D2DACD0D9552A0A236DDA05 * value)
	{
		___U3CValueReaderU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValueReaderU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CValueMergerU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(FieldCodec_1_tCA7C1F70281CCD6EEAB215F57EF24B5E6CFCC629, ___U3CValueMergerU3Ek__BackingField_7)); }
	inline InputMerger_t88D25A1A4628219B16FA969F3B96D81A9840BA65 * get_U3CValueMergerU3Ek__BackingField_7() const { return ___U3CValueMergerU3Ek__BackingField_7; }
	inline InputMerger_t88D25A1A4628219B16FA969F3B96D81A9840BA65 ** get_address_of_U3CValueMergerU3Ek__BackingField_7() { return &___U3CValueMergerU3Ek__BackingField_7; }
	inline void set_U3CValueMergerU3Ek__BackingField_7(InputMerger_t88D25A1A4628219B16FA969F3B96D81A9840BA65 * value)
	{
		___U3CValueMergerU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValueMergerU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFieldMergerU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(FieldCodec_1_tCA7C1F70281CCD6EEAB215F57EF24B5E6CFCC629, ___U3CFieldMergerU3Ek__BackingField_8)); }
	inline ValuesMerger_t4B955A0E621B9C7A7EBCAD931EDE5EE6BEADE1E9 * get_U3CFieldMergerU3Ek__BackingField_8() const { return ___U3CFieldMergerU3Ek__BackingField_8; }
	inline ValuesMerger_t4B955A0E621B9C7A7EBCAD931EDE5EE6BEADE1E9 ** get_address_of_U3CFieldMergerU3Ek__BackingField_8() { return &___U3CFieldMergerU3Ek__BackingField_8; }
	inline void set_U3CFieldMergerU3Ek__BackingField_8(ValuesMerger_t4B955A0E621B9C7A7EBCAD931EDE5EE6BEADE1E9 * value)
	{
		___U3CFieldMergerU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFieldMergerU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFixedSizeU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(FieldCodec_1_tCA7C1F70281CCD6EEAB215F57EF24B5E6CFCC629, ___U3CFixedSizeU3Ek__BackingField_9)); }
	inline int32_t get_U3CFixedSizeU3Ek__BackingField_9() const { return ___U3CFixedSizeU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CFixedSizeU3Ek__BackingField_9() { return &___U3CFixedSizeU3Ek__BackingField_9; }
	inline void set_U3CFixedSizeU3Ek__BackingField_9(int32_t value)
	{
		___U3CFixedSizeU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CTagU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(FieldCodec_1_tCA7C1F70281CCD6EEAB215F57EF24B5E6CFCC629, ___U3CTagU3Ek__BackingField_10)); }
	inline uint32_t get_U3CTagU3Ek__BackingField_10() const { return ___U3CTagU3Ek__BackingField_10; }
	inline uint32_t* get_address_of_U3CTagU3Ek__BackingField_10() { return &___U3CTagU3Ek__BackingField_10; }
	inline void set_U3CTagU3Ek__BackingField_10(uint32_t value)
	{
		___U3CTagU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CEndTagU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(FieldCodec_1_tCA7C1F70281CCD6EEAB215F57EF24B5E6CFCC629, ___U3CEndTagU3Ek__BackingField_11)); }
	inline uint32_t get_U3CEndTagU3Ek__BackingField_11() const { return ___U3CEndTagU3Ek__BackingField_11; }
	inline uint32_t* get_address_of_U3CEndTagU3Ek__BackingField_11() { return &___U3CEndTagU3Ek__BackingField_11; }
	inline void set_U3CEndTagU3Ek__BackingField_11(uint32_t value)
	{
		___U3CEndTagU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CDefaultValueU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(FieldCodec_1_tCA7C1F70281CCD6EEAB215F57EF24B5E6CFCC629, ___U3CDefaultValueU3Ek__BackingField_12)); }
	inline AgentInfoProto_tB07CB4D6C9A6367975913C1581FAA29FDB4FF5B0 * get_U3CDefaultValueU3Ek__BackingField_12() const { return ___U3CDefaultValueU3Ek__BackingField_12; }
	inline AgentInfoProto_tB07CB4D6C9A6367975913C1581FAA29FDB4FF5B0 ** get_address_of_U3CDefaultValueU3Ek__BackingField_12() { return &___U3CDefaultValueU3Ek__BackingField_12; }
	inline void set_U3CDefaultValueU3Ek__BackingField_12(AgentInfoProto_tB07CB4D6C9A6367975913C1581FAA29FDB4FF5B0 * value)
	{
		___U3CDefaultValueU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDefaultValueU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_tagSize_13() { return static_cast<int32_t>(offsetof(FieldCodec_1_tCA7C1F70281CCD6EEAB215F57EF24B5E6CFCC629, ___tagSize_13)); }
	inline int32_t get_tagSize_13() const { return ___tagSize_13; }
	inline int32_t* get_address_of_tagSize_13() { return &___tagSize_13; }
	inline void set_tagSize_13(int32_t value)
	{
		___tagSize_13 = value;
	}
};

struct FieldCodec_1_tCA7C1F70281CCD6EEAB215F57EF24B5E6CFCC629_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> Google.Protobuf.FieldCodec`1::EqualityComparer
	EqualityComparer_1_t697882B8B985505A5044DAC80E324F1C0FB2D292 * ___EqualityComparer_0;
	// T Google.Protobuf.FieldCodec`1::DefaultDefault
	AgentInfoProto_tB07CB4D6C9A6367975913C1581FAA29FDB4FF5B0 * ___DefaultDefault_1;
	// System.Boolean Google.Protobuf.FieldCodec`1::TypeSupportsPacking
	bool ___TypeSupportsPacking_2;

public:
	inline static int32_t get_offset_of_EqualityComparer_0() { return static_cast<int32_t>(offsetof(FieldCodec_1_tCA7C1F70281CCD6EEAB215F57EF24B5E6CFCC629_StaticFields, ___EqualityComparer_0)); }
	inline EqualityComparer_1_t697882B8B985505A5044DAC80E324F1C0FB2D292 * get_EqualityComparer_0() const { return ___EqualityComparer_0; }
	inline EqualityComparer_1_t697882B8B985505A5044DAC80E324F1C0FB2D292 ** get_address_of_EqualityComparer_0() { return &___EqualityComparer_0; }
	inline void set_EqualityComparer_0(EqualityComparer_1_t697882B8B985505A5044DAC80E324F1C0FB2D292 * value)
	{
		___EqualityComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EqualityComparer_0), (void*)value);
	}

	inline static int32_t get_offset_of_DefaultDefault_1() { return static_cast<int32_t>(offsetof(FieldCodec_1_tCA7C1F70281CCD6EEAB215F57EF24B5E6CFCC629_StaticFields, ___DefaultDefault_1)); }
	inline AgentInfoProto_tB07CB4D6C9A6367975913C1581FAA29FDB4FF5B0 * get_DefaultDefault_1() const { return ___DefaultDefault_1; }
	inline AgentInfoProto_tB07CB4D6C9A6367975913C1581FAA29FDB4FF5B0 ** get_address_of_DefaultDefault_1() { return &___DefaultDefault_1; }
	inline void set_DefaultDefault_1(AgentInfoProto_tB07CB4D6C9A6367975913C1581FAA29FDB4FF5B0 * value)
	{
		___DefaultDefault_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultDefault_1), (void*)value);
	}

	inline static int32_t get_offset_of_TypeSupportsPacking_2() { return static_cast<int32_t>(offsetof(FieldCodec_1_tCA7C1F70281CCD6EEAB215F57EF24B5E6CFCC629_StaticFields, ___TypeSupportsPacking_2)); }
	inline bool get_TypeSupportsPacking_2() const { return ___TypeSupportsPacking_2; }
	inline bool* get_address_of_TypeSupportsPacking_2() { return &___TypeSupportsPacking_2; }
	inline void set_TypeSupportsPacking_2(bool value)
	{
		___TypeSupportsPacking_2 = value;
	}
};


// Google.Protobuf.FieldCodec`1<Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto>
struct  FieldCodec_1_tB768A791704F24E2C2B5A284921F7D1D808778F5  : public RuntimeObject
{
public:
	// System.Boolean Google.Protobuf.FieldCodec`1::<PackedRepeatedField>k__BackingField
	bool ___U3CPackedRepeatedFieldU3Ek__BackingField_3;
	// System.Action`2<Google.Protobuf.CodedOutputStream,T> Google.Protobuf.FieldCodec`1::<ValueWriter>k__BackingField
	Action_2_t7A1D71D259CADF99E4E8AE22C12157AA03CB4117 * ___U3CValueWriterU3Ek__BackingField_4;
	// System.Func`2<T,System.Int32> Google.Protobuf.FieldCodec`1::<ValueSizeCalculator>k__BackingField
	Func_2_tD4F3033200C2B46943442AEDAF18AD64FA1C6652 * ___U3CValueSizeCalculatorU3Ek__BackingField_5;
	// System.Func`2<Google.Protobuf.CodedInputStream,T> Google.Protobuf.FieldCodec`1::<ValueReader>k__BackingField
	Func_2_t950BB7251B661DF84C4077856A983E6E462EA874 * ___U3CValueReaderU3Ek__BackingField_6;
	// Google.Protobuf.FieldCodec`1/InputMerger<T> Google.Protobuf.FieldCodec`1::<ValueMerger>k__BackingField
	InputMerger_tB33D2F00DAA89F31072B8E37A78794943E7B1BA0 * ___U3CValueMergerU3Ek__BackingField_7;
	// Google.Protobuf.FieldCodec`1/ValuesMerger<T> Google.Protobuf.FieldCodec`1::<FieldMerger>k__BackingField
	ValuesMerger_t1D22EC12BA2390E43412499B1E2BECC8497F78C5 * ___U3CFieldMergerU3Ek__BackingField_8;
	// System.Int32 Google.Protobuf.FieldCodec`1::<FixedSize>k__BackingField
	int32_t ___U3CFixedSizeU3Ek__BackingField_9;
	// System.UInt32 Google.Protobuf.FieldCodec`1::<Tag>k__BackingField
	uint32_t ___U3CTagU3Ek__BackingField_10;
	// System.UInt32 Google.Protobuf.FieldCodec`1::<EndTag>k__BackingField
	uint32_t ___U3CEndTagU3Ek__BackingField_11;
	// T Google.Protobuf.FieldCodec`1::<DefaultValue>k__BackingField
	ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925 * ___U3CDefaultValueU3Ek__BackingField_12;
	// System.Int32 Google.Protobuf.FieldCodec`1::tagSize
	int32_t ___tagSize_13;

public:
	inline static int32_t get_offset_of_U3CPackedRepeatedFieldU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(FieldCodec_1_tB768A791704F24E2C2B5A284921F7D1D808778F5, ___U3CPackedRepeatedFieldU3Ek__BackingField_3)); }
	inline bool get_U3CPackedRepeatedFieldU3Ek__BackingField_3() const { return ___U3CPackedRepeatedFieldU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CPackedRepeatedFieldU3Ek__BackingField_3() { return &___U3CPackedRepeatedFieldU3Ek__BackingField_3; }
	inline void set_U3CPackedRepeatedFieldU3Ek__BackingField_3(bool value)
	{
		___U3CPackedRepeatedFieldU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CValueWriterU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(FieldCodec_1_tB768A791704F24E2C2B5A284921F7D1D808778F5, ___U3CValueWriterU3Ek__BackingField_4)); }
	inline Action_2_t7A1D71D259CADF99E4E8AE22C12157AA03CB4117 * get_U3CValueWriterU3Ek__BackingField_4() const { return ___U3CValueWriterU3Ek__BackingField_4; }
	inline Action_2_t7A1D71D259CADF99E4E8AE22C12157AA03CB4117 ** get_address_of_U3CValueWriterU3Ek__BackingField_4() { return &___U3CValueWriterU3Ek__BackingField_4; }
	inline void set_U3CValueWriterU3Ek__BackingField_4(Action_2_t7A1D71D259CADF99E4E8AE22C12157AA03CB4117 * value)
	{
		___U3CValueWriterU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValueWriterU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CValueSizeCalculatorU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(FieldCodec_1_tB768A791704F24E2C2B5A284921F7D1D808778F5, ___U3CValueSizeCalculatorU3Ek__BackingField_5)); }
	inline Func_2_tD4F3033200C2B46943442AEDAF18AD64FA1C6652 * get_U3CValueSizeCalculatorU3Ek__BackingField_5() const { return ___U3CValueSizeCalculatorU3Ek__BackingField_5; }
	inline Func_2_tD4F3033200C2B46943442AEDAF18AD64FA1C6652 ** get_address_of_U3CValueSizeCalculatorU3Ek__BackingField_5() { return &___U3CValueSizeCalculatorU3Ek__BackingField_5; }
	inline void set_U3CValueSizeCalculatorU3Ek__BackingField_5(Func_2_tD4F3033200C2B46943442AEDAF18AD64FA1C6652 * value)
	{
		___U3CValueSizeCalculatorU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValueSizeCalculatorU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CValueReaderU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(FieldCodec_1_tB768A791704F24E2C2B5A284921F7D1D808778F5, ___U3CValueReaderU3Ek__BackingField_6)); }
	inline Func_2_t950BB7251B661DF84C4077856A983E6E462EA874 * get_U3CValueReaderU3Ek__BackingField_6() const { return ___U3CValueReaderU3Ek__BackingField_6; }
	inline Func_2_t950BB7251B661DF84C4077856A983E6E462EA874 ** get_address_of_U3CValueReaderU3Ek__BackingField_6() { return &___U3CValueReaderU3Ek__BackingField_6; }
	inline void set_U3CValueReaderU3Ek__BackingField_6(Func_2_t950BB7251B661DF84C4077856A983E6E462EA874 * value)
	{
		___U3CValueReaderU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValueReaderU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CValueMergerU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(FieldCodec_1_tB768A791704F24E2C2B5A284921F7D1D808778F5, ___U3CValueMergerU3Ek__BackingField_7)); }
	inline InputMerger_tB33D2F00DAA89F31072B8E37A78794943E7B1BA0 * get_U3CValueMergerU3Ek__BackingField_7() const { return ___U3CValueMergerU3Ek__BackingField_7; }
	inline InputMerger_tB33D2F00DAA89F31072B8E37A78794943E7B1BA0 ** get_address_of_U3CValueMergerU3Ek__BackingField_7() { return &___U3CValueMergerU3Ek__BackingField_7; }
	inline void set_U3CValueMergerU3Ek__BackingField_7(InputMerger_tB33D2F00DAA89F31072B8E37A78794943E7B1BA0 * value)
	{
		___U3CValueMergerU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValueMergerU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFieldMergerU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(FieldCodec_1_tB768A791704F24E2C2B5A284921F7D1D808778F5, ___U3CFieldMergerU3Ek__BackingField_8)); }
	inline ValuesMerger_t1D22EC12BA2390E43412499B1E2BECC8497F78C5 * get_U3CFieldMergerU3Ek__BackingField_8() const { return ___U3CFieldMergerU3Ek__BackingField_8; }
	inline ValuesMerger_t1D22EC12BA2390E43412499B1E2BECC8497F78C5 ** get_address_of_U3CFieldMergerU3Ek__BackingField_8() { return &___U3CFieldMergerU3Ek__BackingField_8; }
	inline void set_U3CFieldMergerU3Ek__BackingField_8(ValuesMerger_t1D22EC12BA2390E43412499B1E2BECC8497F78C5 * value)
	{
		___U3CFieldMergerU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFieldMergerU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFixedSizeU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(FieldCodec_1_tB768A791704F24E2C2B5A284921F7D1D808778F5, ___U3CFixedSizeU3Ek__BackingField_9)); }
	inline int32_t get_U3CFixedSizeU3Ek__BackingField_9() const { return ___U3CFixedSizeU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CFixedSizeU3Ek__BackingField_9() { return &___U3CFixedSizeU3Ek__BackingField_9; }
	inline void set_U3CFixedSizeU3Ek__BackingField_9(int32_t value)
	{
		___U3CFixedSizeU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CTagU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(FieldCodec_1_tB768A791704F24E2C2B5A284921F7D1D808778F5, ___U3CTagU3Ek__BackingField_10)); }
	inline uint32_t get_U3CTagU3Ek__BackingField_10() const { return ___U3CTagU3Ek__BackingField_10; }
	inline uint32_t* get_address_of_U3CTagU3Ek__BackingField_10() { return &___U3CTagU3Ek__BackingField_10; }
	inline void set_U3CTagU3Ek__BackingField_10(uint32_t value)
	{
		___U3CTagU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CEndTagU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(FieldCodec_1_tB768A791704F24E2C2B5A284921F7D1D808778F5, ___U3CEndTagU3Ek__BackingField_11)); }
	inline uint32_t get_U3CEndTagU3Ek__BackingField_11() const { return ___U3CEndTagU3Ek__BackingField_11; }
	inline uint32_t* get_address_of_U3CEndTagU3Ek__BackingField_11() { return &___U3CEndTagU3Ek__BackingField_11; }
	inline void set_U3CEndTagU3Ek__BackingField_11(uint32_t value)
	{
		___U3CEndTagU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CDefaultValueU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(FieldCodec_1_tB768A791704F24E2C2B5A284921F7D1D808778F5, ___U3CDefaultValueU3Ek__BackingField_12)); }
	inline ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925 * get_U3CDefaultValueU3Ek__BackingField_12() const { return ___U3CDefaultValueU3Ek__BackingField_12; }
	inline ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925 ** get_address_of_U3CDefaultValueU3Ek__BackingField_12() { return &___U3CDefaultValueU3Ek__BackingField_12; }
	inline void set_U3CDefaultValueU3Ek__BackingField_12(ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925 * value)
	{
		___U3CDefaultValueU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDefaultValueU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_tagSize_13() { return static_cast<int32_t>(offsetof(FieldCodec_1_tB768A791704F24E2C2B5A284921F7D1D808778F5, ___tagSize_13)); }
	inline int32_t get_tagSize_13() const { return ___tagSize_13; }
	inline int32_t* get_address_of_tagSize_13() { return &___tagSize_13; }
	inline void set_tagSize_13(int32_t value)
	{
		___tagSize_13 = value;
	}
};

struct FieldCodec_1_tB768A791704F24E2C2B5A284921F7D1D808778F5_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> Google.Protobuf.FieldCodec`1::EqualityComparer
	EqualityComparer_1_t71DDE0F67797C2833DD0FEDDCCB0F4CEBEF00B2D * ___EqualityComparer_0;
	// T Google.Protobuf.FieldCodec`1::DefaultDefault
	ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925 * ___DefaultDefault_1;
	// System.Boolean Google.Protobuf.FieldCodec`1::TypeSupportsPacking
	bool ___TypeSupportsPacking_2;

public:
	inline static int32_t get_offset_of_EqualityComparer_0() { return static_cast<int32_t>(offsetof(FieldCodec_1_tB768A791704F24E2C2B5A284921F7D1D808778F5_StaticFields, ___EqualityComparer_0)); }
	inline EqualityComparer_1_t71DDE0F67797C2833DD0FEDDCCB0F4CEBEF00B2D * get_EqualityComparer_0() const { return ___EqualityComparer_0; }
	inline EqualityComparer_1_t71DDE0F67797C2833DD0FEDDCCB0F4CEBEF00B2D ** get_address_of_EqualityComparer_0() { return &___EqualityComparer_0; }
	inline void set_EqualityComparer_0(EqualityComparer_1_t71DDE0F67797C2833DD0FEDDCCB0F4CEBEF00B2D * value)
	{
		___EqualityComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EqualityComparer_0), (void*)value);
	}

	inline static int32_t get_offset_of_DefaultDefault_1() { return static_cast<int32_t>(offsetof(FieldCodec_1_tB768A791704F24E2C2B5A284921F7D1D808778F5_StaticFields, ___DefaultDefault_1)); }
	inline ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925 * get_DefaultDefault_1() const { return ___DefaultDefault_1; }
	inline ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925 ** get_address_of_DefaultDefault_1() { return &___DefaultDefault_1; }
	inline void set_DefaultDefault_1(ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925 * value)
	{
		___DefaultDefault_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultDefault_1), (void*)value);
	}

	inline static int32_t get_offset_of_TypeSupportsPacking_2() { return static_cast<int32_t>(offsetof(FieldCodec_1_tB768A791704F24E2C2B5A284921F7D1D808778F5_StaticFields, ___TypeSupportsPacking_2)); }
	inline bool get_TypeSupportsPacking_2() const { return ___TypeSupportsPacking_2; }
	inline bool* get_address_of_TypeSupportsPacking_2() { return &___TypeSupportsPacking_2; }
	inline void set_TypeSupportsPacking_2(bool value)
	{
		___TypeSupportsPacking_2 = value;
	}
};


// Google.Protobuf.FieldCodec`1<Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto>
struct  FieldCodec_1_t28E6C8B6C890722CF301D6ADEA9FA22C442E2791  : public RuntimeObject
{
public:
	// System.Boolean Google.Protobuf.FieldCodec`1::<PackedRepeatedField>k__BackingField
	bool ___U3CPackedRepeatedFieldU3Ek__BackingField_3;
	// System.Action`2<Google.Protobuf.CodedOutputStream,T> Google.Protobuf.FieldCodec`1::<ValueWriter>k__BackingField
	Action_2_t0D879364088CACCBFD5C8BBF114365F04ACEDCDB * ___U3CValueWriterU3Ek__BackingField_4;
	// System.Func`2<T,System.Int32> Google.Protobuf.FieldCodec`1::<ValueSizeCalculator>k__BackingField
	Func_2_t4744A212B6F32D01E8832067A07C7D4818BF21BF * ___U3CValueSizeCalculatorU3Ek__BackingField_5;
	// System.Func`2<Google.Protobuf.CodedInputStream,T> Google.Protobuf.FieldCodec`1::<ValueReader>k__BackingField
	Func_2_tD4A722E4F08A7B7D051B0EB6895403A187578DB0 * ___U3CValueReaderU3Ek__BackingField_6;
	// Google.Protobuf.FieldCodec`1/InputMerger<T> Google.Protobuf.FieldCodec`1::<ValueMerger>k__BackingField
	InputMerger_t0E91EC955D8AD8714888BAD28111A486EEFC9B7C * ___U3CValueMergerU3Ek__BackingField_7;
	// Google.Protobuf.FieldCodec`1/ValuesMerger<T> Google.Protobuf.FieldCodec`1::<FieldMerger>k__BackingField
	ValuesMerger_t8A02401F0FF550E92681D1F5E828A904E87C4AF8 * ___U3CFieldMergerU3Ek__BackingField_8;
	// System.Int32 Google.Protobuf.FieldCodec`1::<FixedSize>k__BackingField
	int32_t ___U3CFixedSizeU3Ek__BackingField_9;
	// System.UInt32 Google.Protobuf.FieldCodec`1::<Tag>k__BackingField
	uint32_t ___U3CTagU3Ek__BackingField_10;
	// System.UInt32 Google.Protobuf.FieldCodec`1::<EndTag>k__BackingField
	uint32_t ___U3CEndTagU3Ek__BackingField_11;
	// T Google.Protobuf.FieldCodec`1::<DefaultValue>k__BackingField
	ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354 * ___U3CDefaultValueU3Ek__BackingField_12;
	// System.Int32 Google.Protobuf.FieldCodec`1::tagSize
	int32_t ___tagSize_13;

public:
	inline static int32_t get_offset_of_U3CPackedRepeatedFieldU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(FieldCodec_1_t28E6C8B6C890722CF301D6ADEA9FA22C442E2791, ___U3CPackedRepeatedFieldU3Ek__BackingField_3)); }
	inline bool get_U3CPackedRepeatedFieldU3Ek__BackingField_3() const { return ___U3CPackedRepeatedFieldU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CPackedRepeatedFieldU3Ek__BackingField_3() { return &___U3CPackedRepeatedFieldU3Ek__BackingField_3; }
	inline void set_U3CPackedRepeatedFieldU3Ek__BackingField_3(bool value)
	{
		___U3CPackedRepeatedFieldU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CValueWriterU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(FieldCodec_1_t28E6C8B6C890722CF301D6ADEA9FA22C442E2791, ___U3CValueWriterU3Ek__BackingField_4)); }
	inline Action_2_t0D879364088CACCBFD5C8BBF114365F04ACEDCDB * get_U3CValueWriterU3Ek__BackingField_4() const { return ___U3CValueWriterU3Ek__BackingField_4; }
	inline Action_2_t0D879364088CACCBFD5C8BBF114365F04ACEDCDB ** get_address_of_U3CValueWriterU3Ek__BackingField_4() { return &___U3CValueWriterU3Ek__BackingField_4; }
	inline void set_U3CValueWriterU3Ek__BackingField_4(Action_2_t0D879364088CACCBFD5C8BBF114365F04ACEDCDB * value)
	{
		___U3CValueWriterU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValueWriterU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CValueSizeCalculatorU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(FieldCodec_1_t28E6C8B6C890722CF301D6ADEA9FA22C442E2791, ___U3CValueSizeCalculatorU3Ek__BackingField_5)); }
	inline Func_2_t4744A212B6F32D01E8832067A07C7D4818BF21BF * get_U3CValueSizeCalculatorU3Ek__BackingField_5() const { return ___U3CValueSizeCalculatorU3Ek__BackingField_5; }
	inline Func_2_t4744A212B6F32D01E8832067A07C7D4818BF21BF ** get_address_of_U3CValueSizeCalculatorU3Ek__BackingField_5() { return &___U3CValueSizeCalculatorU3Ek__BackingField_5; }
	inline void set_U3CValueSizeCalculatorU3Ek__BackingField_5(Func_2_t4744A212B6F32D01E8832067A07C7D4818BF21BF * value)
	{
		___U3CValueSizeCalculatorU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValueSizeCalculatorU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CValueReaderU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(FieldCodec_1_t28E6C8B6C890722CF301D6ADEA9FA22C442E2791, ___U3CValueReaderU3Ek__BackingField_6)); }
	inline Func_2_tD4A722E4F08A7B7D051B0EB6895403A187578DB0 * get_U3CValueReaderU3Ek__BackingField_6() const { return ___U3CValueReaderU3Ek__BackingField_6; }
	inline Func_2_tD4A722E4F08A7B7D051B0EB6895403A187578DB0 ** get_address_of_U3CValueReaderU3Ek__BackingField_6() { return &___U3CValueReaderU3Ek__BackingField_6; }
	inline void set_U3CValueReaderU3Ek__BackingField_6(Func_2_tD4A722E4F08A7B7D051B0EB6895403A187578DB0 * value)
	{
		___U3CValueReaderU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValueReaderU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CValueMergerU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(FieldCodec_1_t28E6C8B6C890722CF301D6ADEA9FA22C442E2791, ___U3CValueMergerU3Ek__BackingField_7)); }
	inline InputMerger_t0E91EC955D8AD8714888BAD28111A486EEFC9B7C * get_U3CValueMergerU3Ek__BackingField_7() const { return ___U3CValueMergerU3Ek__BackingField_7; }
	inline InputMerger_t0E91EC955D8AD8714888BAD28111A486EEFC9B7C ** get_address_of_U3CValueMergerU3Ek__BackingField_7() { return &___U3CValueMergerU3Ek__BackingField_7; }
	inline void set_U3CValueMergerU3Ek__BackingField_7(InputMerger_t0E91EC955D8AD8714888BAD28111A486EEFC9B7C * value)
	{
		___U3CValueMergerU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValueMergerU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFieldMergerU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(FieldCodec_1_t28E6C8B6C890722CF301D6ADEA9FA22C442E2791, ___U3CFieldMergerU3Ek__BackingField_8)); }
	inline ValuesMerger_t8A02401F0FF550E92681D1F5E828A904E87C4AF8 * get_U3CFieldMergerU3Ek__BackingField_8() const { return ___U3CFieldMergerU3Ek__BackingField_8; }
	inline ValuesMerger_t8A02401F0FF550E92681D1F5E828A904E87C4AF8 ** get_address_of_U3CFieldMergerU3Ek__BackingField_8() { return &___U3CFieldMergerU3Ek__BackingField_8; }
	inline void set_U3CFieldMergerU3Ek__BackingField_8(ValuesMerger_t8A02401F0FF550E92681D1F5E828A904E87C4AF8 * value)
	{
		___U3CFieldMergerU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFieldMergerU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFixedSizeU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(FieldCodec_1_t28E6C8B6C890722CF301D6ADEA9FA22C442E2791, ___U3CFixedSizeU3Ek__BackingField_9)); }
	inline int32_t get_U3CFixedSizeU3Ek__BackingField_9() const { return ___U3CFixedSizeU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CFixedSizeU3Ek__BackingField_9() { return &___U3CFixedSizeU3Ek__BackingField_9; }
	inline void set_U3CFixedSizeU3Ek__BackingField_9(int32_t value)
	{
		___U3CFixedSizeU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CTagU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(FieldCodec_1_t28E6C8B6C890722CF301D6ADEA9FA22C442E2791, ___U3CTagU3Ek__BackingField_10)); }
	inline uint32_t get_U3CTagU3Ek__BackingField_10() const { return ___U3CTagU3Ek__BackingField_10; }
	inline uint32_t* get_address_of_U3CTagU3Ek__BackingField_10() { return &___U3CTagU3Ek__BackingField_10; }
	inline void set_U3CTagU3Ek__BackingField_10(uint32_t value)
	{
		___U3CTagU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CEndTagU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(FieldCodec_1_t28E6C8B6C890722CF301D6ADEA9FA22C442E2791, ___U3CEndTagU3Ek__BackingField_11)); }
	inline uint32_t get_U3CEndTagU3Ek__BackingField_11() const { return ___U3CEndTagU3Ek__BackingField_11; }
	inline uint32_t* get_address_of_U3CEndTagU3Ek__BackingField_11() { return &___U3CEndTagU3Ek__BackingField_11; }
	inline void set_U3CEndTagU3Ek__BackingField_11(uint32_t value)
	{
		___U3CEndTagU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CDefaultValueU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(FieldCodec_1_t28E6C8B6C890722CF301D6ADEA9FA22C442E2791, ___U3CDefaultValueU3Ek__BackingField_12)); }
	inline ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354 * get_U3CDefaultValueU3Ek__BackingField_12() const { return ___U3CDefaultValueU3Ek__BackingField_12; }
	inline ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354 ** get_address_of_U3CDefaultValueU3Ek__BackingField_12() { return &___U3CDefaultValueU3Ek__BackingField_12; }
	inline void set_U3CDefaultValueU3Ek__BackingField_12(ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354 * value)
	{
		___U3CDefaultValueU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDefaultValueU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_tagSize_13() { return static_cast<int32_t>(offsetof(FieldCodec_1_t28E6C8B6C890722CF301D6ADEA9FA22C442E2791, ___tagSize_13)); }
	inline int32_t get_tagSize_13() const { return ___tagSize_13; }
	inline int32_t* get_address_of_tagSize_13() { return &___tagSize_13; }
	inline void set_tagSize_13(int32_t value)
	{
		___tagSize_13 = value;
	}
};

struct FieldCodec_1_t28E6C8B6C890722CF301D6ADEA9FA22C442E2791_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> Google.Protobuf.FieldCodec`1::EqualityComparer
	EqualityComparer_1_tB6D440167991272A52D7189C931DDE77F0A59AF5 * ___EqualityComparer_0;
	// T Google.Protobuf.FieldCodec`1::DefaultDefault
	ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354 * ___DefaultDefault_1;
	// System.Boolean Google.Protobuf.FieldCodec`1::TypeSupportsPacking
	bool ___TypeSupportsPacking_2;

public:
	inline static int32_t get_offset_of_EqualityComparer_0() { return static_cast<int32_t>(offsetof(FieldCodec_1_t28E6C8B6C890722CF301D6ADEA9FA22C442E2791_StaticFields, ___EqualityComparer_0)); }
	inline EqualityComparer_1_tB6D440167991272A52D7189C931DDE77F0A59AF5 * get_EqualityComparer_0() const { return ___EqualityComparer_0; }
	inline EqualityComparer_1_tB6D440167991272A52D7189C931DDE77F0A59AF5 ** get_address_of_EqualityComparer_0() { return &___EqualityComparer_0; }
	inline void set_EqualityComparer_0(EqualityComparer_1_tB6D440167991272A52D7189C931DDE77F0A59AF5 * value)
	{
		___EqualityComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EqualityComparer_0), (void*)value);
	}

	inline static int32_t get_offset_of_DefaultDefault_1() { return static_cast<int32_t>(offsetof(FieldCodec_1_t28E6C8B6C890722CF301D6ADEA9FA22C442E2791_StaticFields, ___DefaultDefault_1)); }
	inline ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354 * get_DefaultDefault_1() const { return ___DefaultDefault_1; }
	inline ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354 ** get_address_of_DefaultDefault_1() { return &___DefaultDefault_1; }
	inline void set_DefaultDefault_1(ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354 * value)
	{
		___DefaultDefault_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultDefault_1), (void*)value);
	}

	inline static int32_t get_offset_of_TypeSupportsPacking_2() { return static_cast<int32_t>(offsetof(FieldCodec_1_t28E6C8B6C890722CF301D6ADEA9FA22C442E2791_StaticFields, ___TypeSupportsPacking_2)); }
	inline bool get_TypeSupportsPacking_2() const { return ___TypeSupportsPacking_2; }
	inline bool* get_address_of_TypeSupportsPacking_2() { return &___TypeSupportsPacking_2; }
	inline void set_TypeSupportsPacking_2(bool value)
	{
		___TypeSupportsPacking_2 = value;
	}
};


// Google.Protobuf.MessageParser
struct  MessageParser_t194BE39F7FDA7A23C5A94D642095A044763C8FAD  : public RuntimeObject
{
public:
	// System.Func`1<Google.Protobuf.IMessage> Google.Protobuf.MessageParser::factory
	Func_1_tB4CF360F61E295CA69591D3966F68E37294E3C0E * ___factory_0;
	// System.Boolean Google.Protobuf.MessageParser::<DiscardUnknownFields>k__BackingField
	bool ___U3CDiscardUnknownFieldsU3Ek__BackingField_1;
	// Google.Protobuf.ExtensionRegistry Google.Protobuf.MessageParser::<Extensions>k__BackingField
	ExtensionRegistry_t9CDDB7C7F80CE3A85108DCBB9F87E7DDCE3B7C45 * ___U3CExtensionsU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_factory_0() { return static_cast<int32_t>(offsetof(MessageParser_t194BE39F7FDA7A23C5A94D642095A044763C8FAD, ___factory_0)); }
	inline Func_1_tB4CF360F61E295CA69591D3966F68E37294E3C0E * get_factory_0() const { return ___factory_0; }
	inline Func_1_tB4CF360F61E295CA69591D3966F68E37294E3C0E ** get_address_of_factory_0() { return &___factory_0; }
	inline void set_factory_0(Func_1_tB4CF360F61E295CA69591D3966F68E37294E3C0E * value)
	{
		___factory_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___factory_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDiscardUnknownFieldsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MessageParser_t194BE39F7FDA7A23C5A94D642095A044763C8FAD, ___U3CDiscardUnknownFieldsU3Ek__BackingField_1)); }
	inline bool get_U3CDiscardUnknownFieldsU3Ek__BackingField_1() const { return ___U3CDiscardUnknownFieldsU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CDiscardUnknownFieldsU3Ek__BackingField_1() { return &___U3CDiscardUnknownFieldsU3Ek__BackingField_1; }
	inline void set_U3CDiscardUnknownFieldsU3Ek__BackingField_1(bool value)
	{
		___U3CDiscardUnknownFieldsU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CExtensionsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MessageParser_t194BE39F7FDA7A23C5A94D642095A044763C8FAD, ___U3CExtensionsU3Ek__BackingField_2)); }
	inline ExtensionRegistry_t9CDDB7C7F80CE3A85108DCBB9F87E7DDCE3B7C45 * get_U3CExtensionsU3Ek__BackingField_2() const { return ___U3CExtensionsU3Ek__BackingField_2; }
	inline ExtensionRegistry_t9CDDB7C7F80CE3A85108DCBB9F87E7DDCE3B7C45 ** get_address_of_U3CExtensionsU3Ek__BackingField_2() { return &___U3CExtensionsU3Ek__BackingField_2; }
	inline void set_U3CExtensionsU3Ek__BackingField_2(ExtensionRegistry_t9CDDB7C7F80CE3A85108DCBB9F87E7DDCE3B7C45 * value)
	{
		___U3CExtensionsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CExtensionsU3Ek__BackingField_2), (void*)value);
	}
};


// Google.Protobuf.Reflection.DescriptorBase
struct  DescriptorBase_t516AD644A587921498DA61C0921A22BB87220F3F  : public RuntimeObject
{
public:
	// System.Int32 Google.Protobuf.Reflection.DescriptorBase::<Index>k__BackingField
	int32_t ___U3CIndexU3Ek__BackingField_0;
	// System.String Google.Protobuf.Reflection.DescriptorBase::<FullName>k__BackingField
	String_t* ___U3CFullNameU3Ek__BackingField_1;
	// Google.Protobuf.Reflection.FileDescriptor Google.Protobuf.Reflection.DescriptorBase::<File>k__BackingField
	FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * ___U3CFileU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CIndexU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DescriptorBase_t516AD644A587921498DA61C0921A22BB87220F3F, ___U3CIndexU3Ek__BackingField_0)); }
	inline int32_t get_U3CIndexU3Ek__BackingField_0() const { return ___U3CIndexU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CIndexU3Ek__BackingField_0() { return &___U3CIndexU3Ek__BackingField_0; }
	inline void set_U3CIndexU3Ek__BackingField_0(int32_t value)
	{
		___U3CIndexU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CFullNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DescriptorBase_t516AD644A587921498DA61C0921A22BB87220F3F, ___U3CFullNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CFullNameU3Ek__BackingField_1() const { return ___U3CFullNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CFullNameU3Ek__BackingField_1() { return &___U3CFullNameU3Ek__BackingField_1; }
	inline void set_U3CFullNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CFullNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFullNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFileU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(DescriptorBase_t516AD644A587921498DA61C0921A22BB87220F3F, ___U3CFileU3Ek__BackingField_2)); }
	inline FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * get_U3CFileU3Ek__BackingField_2() const { return ___U3CFileU3Ek__BackingField_2; }
	inline FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 ** get_address_of_U3CFileU3Ek__BackingField_2() { return &___U3CFileU3Ek__BackingField_2; }
	inline void set_U3CFileU3Ek__BackingField_2(FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * value)
	{
		___U3CFileU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFileU3Ek__BackingField_2), (void*)value);
	}
};


// Google.Protobuf.Reflection.FileDescriptor
struct  FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5  : public RuntimeObject
{
public:
	// System.Lazy`1<System.Collections.Generic.Dictionary`2<Google.Protobuf.Reflection.IDescriptor,Google.Protobuf.Reflection.DescriptorDeclaration>> Google.Protobuf.Reflection.FileDescriptor::declarations
	Lazy_1_tFEE7EF30F90C378B3B7777F147F19F5FAE949584 * ___declarations_0;
	// Google.Protobuf.Reflection.FileDescriptorProto Google.Protobuf.Reflection.FileDescriptor::<Proto>k__BackingField
	FileDescriptorProto_t14C58A997A94BEB3E31C5EB7691B5774C68F69A6 * ___U3CProtoU3Ek__BackingField_1;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor> Google.Protobuf.Reflection.FileDescriptor::<MessageTypes>k__BackingField
	RuntimeObject* ___U3CMessageTypesU3Ek__BackingField_2;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.EnumDescriptor> Google.Protobuf.Reflection.FileDescriptor::<EnumTypes>k__BackingField
	RuntimeObject* ___U3CEnumTypesU3Ek__BackingField_3;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.ServiceDescriptor> Google.Protobuf.Reflection.FileDescriptor::<Services>k__BackingField
	RuntimeObject* ___U3CServicesU3Ek__BackingField_4;
	// Google.Protobuf.Reflection.ExtensionCollection Google.Protobuf.Reflection.FileDescriptor::<Extensions>k__BackingField
	ExtensionCollection_tF96B3043CB25F9B83D1CCD7474DA5D16335E0991 * ___U3CExtensionsU3Ek__BackingField_5;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FileDescriptor> Google.Protobuf.Reflection.FileDescriptor::<Dependencies>k__BackingField
	RuntimeObject* ___U3CDependenciesU3Ek__BackingField_6;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FileDescriptor> Google.Protobuf.Reflection.FileDescriptor::<PublicDependencies>k__BackingField
	RuntimeObject* ___U3CPublicDependenciesU3Ek__BackingField_7;
	// Google.Protobuf.ByteString Google.Protobuf.Reflection.FileDescriptor::<SerializedData>k__BackingField
	ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * ___U3CSerializedDataU3Ek__BackingField_8;
	// Google.Protobuf.Reflection.DescriptorPool Google.Protobuf.Reflection.FileDescriptor::<DescriptorPool>k__BackingField
	DescriptorPool_t0E3340D6F33B7ECB5676256EABDC2B95D0992A02 * ___U3CDescriptorPoolU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_declarations_0() { return static_cast<int32_t>(offsetof(FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5, ___declarations_0)); }
	inline Lazy_1_tFEE7EF30F90C378B3B7777F147F19F5FAE949584 * get_declarations_0() const { return ___declarations_0; }
	inline Lazy_1_tFEE7EF30F90C378B3B7777F147F19F5FAE949584 ** get_address_of_declarations_0() { return &___declarations_0; }
	inline void set_declarations_0(Lazy_1_tFEE7EF30F90C378B3B7777F147F19F5FAE949584 * value)
	{
		___declarations_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___declarations_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CProtoU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5, ___U3CProtoU3Ek__BackingField_1)); }
	inline FileDescriptorProto_t14C58A997A94BEB3E31C5EB7691B5774C68F69A6 * get_U3CProtoU3Ek__BackingField_1() const { return ___U3CProtoU3Ek__BackingField_1; }
	inline FileDescriptorProto_t14C58A997A94BEB3E31C5EB7691B5774C68F69A6 ** get_address_of_U3CProtoU3Ek__BackingField_1() { return &___U3CProtoU3Ek__BackingField_1; }
	inline void set_U3CProtoU3Ek__BackingField_1(FileDescriptorProto_t14C58A997A94BEB3E31C5EB7691B5774C68F69A6 * value)
	{
		___U3CProtoU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CProtoU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMessageTypesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5, ___U3CMessageTypesU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CMessageTypesU3Ek__BackingField_2() const { return ___U3CMessageTypesU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CMessageTypesU3Ek__BackingField_2() { return &___U3CMessageTypesU3Ek__BackingField_2; }
	inline void set_U3CMessageTypesU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CMessageTypesU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMessageTypesU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEnumTypesU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5, ___U3CEnumTypesU3Ek__BackingField_3)); }
	inline RuntimeObject* get_U3CEnumTypesU3Ek__BackingField_3() const { return ___U3CEnumTypesU3Ek__BackingField_3; }
	inline RuntimeObject** get_address_of_U3CEnumTypesU3Ek__BackingField_3() { return &___U3CEnumTypesU3Ek__BackingField_3; }
	inline void set_U3CEnumTypesU3Ek__BackingField_3(RuntimeObject* value)
	{
		___U3CEnumTypesU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEnumTypesU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServicesU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5, ___U3CServicesU3Ek__BackingField_4)); }
	inline RuntimeObject* get_U3CServicesU3Ek__BackingField_4() const { return ___U3CServicesU3Ek__BackingField_4; }
	inline RuntimeObject** get_address_of_U3CServicesU3Ek__BackingField_4() { return &___U3CServicesU3Ek__BackingField_4; }
	inline void set_U3CServicesU3Ek__BackingField_4(RuntimeObject* value)
	{
		___U3CServicesU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServicesU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CExtensionsU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5, ___U3CExtensionsU3Ek__BackingField_5)); }
	inline ExtensionCollection_tF96B3043CB25F9B83D1CCD7474DA5D16335E0991 * get_U3CExtensionsU3Ek__BackingField_5() const { return ___U3CExtensionsU3Ek__BackingField_5; }
	inline ExtensionCollection_tF96B3043CB25F9B83D1CCD7474DA5D16335E0991 ** get_address_of_U3CExtensionsU3Ek__BackingField_5() { return &___U3CExtensionsU3Ek__BackingField_5; }
	inline void set_U3CExtensionsU3Ek__BackingField_5(ExtensionCollection_tF96B3043CB25F9B83D1CCD7474DA5D16335E0991 * value)
	{
		___U3CExtensionsU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CExtensionsU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDependenciesU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5, ___U3CDependenciesU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CDependenciesU3Ek__BackingField_6() const { return ___U3CDependenciesU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CDependenciesU3Ek__BackingField_6() { return &___U3CDependenciesU3Ek__BackingField_6; }
	inline void set_U3CDependenciesU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CDependenciesU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDependenciesU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPublicDependenciesU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5, ___U3CPublicDependenciesU3Ek__BackingField_7)); }
	inline RuntimeObject* get_U3CPublicDependenciesU3Ek__BackingField_7() const { return ___U3CPublicDependenciesU3Ek__BackingField_7; }
	inline RuntimeObject** get_address_of_U3CPublicDependenciesU3Ek__BackingField_7() { return &___U3CPublicDependenciesU3Ek__BackingField_7; }
	inline void set_U3CPublicDependenciesU3Ek__BackingField_7(RuntimeObject* value)
	{
		___U3CPublicDependenciesU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPublicDependenciesU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSerializedDataU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5, ___U3CSerializedDataU3Ek__BackingField_8)); }
	inline ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * get_U3CSerializedDataU3Ek__BackingField_8() const { return ___U3CSerializedDataU3Ek__BackingField_8; }
	inline ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A ** get_address_of_U3CSerializedDataU3Ek__BackingField_8() { return &___U3CSerializedDataU3Ek__BackingField_8; }
	inline void set_U3CSerializedDataU3Ek__BackingField_8(ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * value)
	{
		___U3CSerializedDataU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSerializedDataU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDescriptorPoolU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5, ___U3CDescriptorPoolU3Ek__BackingField_9)); }
	inline DescriptorPool_t0E3340D6F33B7ECB5676256EABDC2B95D0992A02 * get_U3CDescriptorPoolU3Ek__BackingField_9() const { return ___U3CDescriptorPoolU3Ek__BackingField_9; }
	inline DescriptorPool_t0E3340D6F33B7ECB5676256EABDC2B95D0992A02 ** get_address_of_U3CDescriptorPoolU3Ek__BackingField_9() { return &___U3CDescriptorPoolU3Ek__BackingField_9; }
	inline void set_U3CDescriptorPoolU3Ek__BackingField_9(DescriptorPool_t0E3340D6F33B7ECB5676256EABDC2B95D0992A02 * value)
	{
		___U3CDescriptorPoolU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDescriptorPoolU3Ek__BackingField_9), (void*)value);
	}
};


// Google.Protobuf.Reflection.GeneratedClrTypeInfo
struct  GeneratedClrTypeInfo_tF2F0DF2AAEC92C81106422AB98D931414053DE97  : public RuntimeObject
{
public:
	// System.Type Google.Protobuf.Reflection.GeneratedClrTypeInfo::<ClrType>k__BackingField
	Type_t * ___U3CClrTypeU3Ek__BackingField_3;
	// Google.Protobuf.MessageParser Google.Protobuf.Reflection.GeneratedClrTypeInfo::<Parser>k__BackingField
	MessageParser_t194BE39F7FDA7A23C5A94D642095A044763C8FAD * ___U3CParserU3Ek__BackingField_4;
	// System.String[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::<PropertyNames>k__BackingField
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___U3CPropertyNamesU3Ek__BackingField_5;
	// Google.Protobuf.Extension[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::<Extensions>k__BackingField
	ExtensionU5BU5D_t2681A83D242011D183C2C5D69B53BDF490D9BB0B* ___U3CExtensionsU3Ek__BackingField_6;
	// System.String[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::<OneofNames>k__BackingField
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___U3COneofNamesU3Ek__BackingField_7;
	// Google.Protobuf.Reflection.GeneratedClrTypeInfo[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::<NestedTypes>k__BackingField
	GeneratedClrTypeInfoU5BU5D_t38490948FF5D4B2D4E8557D1209161FDA3B07C87* ___U3CNestedTypesU3Ek__BackingField_8;
	// System.Type[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::<NestedEnums>k__BackingField
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___U3CNestedEnumsU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_U3CClrTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(GeneratedClrTypeInfo_tF2F0DF2AAEC92C81106422AB98D931414053DE97, ___U3CClrTypeU3Ek__BackingField_3)); }
	inline Type_t * get_U3CClrTypeU3Ek__BackingField_3() const { return ___U3CClrTypeU3Ek__BackingField_3; }
	inline Type_t ** get_address_of_U3CClrTypeU3Ek__BackingField_3() { return &___U3CClrTypeU3Ek__BackingField_3; }
	inline void set_U3CClrTypeU3Ek__BackingField_3(Type_t * value)
	{
		___U3CClrTypeU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CClrTypeU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CParserU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(GeneratedClrTypeInfo_tF2F0DF2AAEC92C81106422AB98D931414053DE97, ___U3CParserU3Ek__BackingField_4)); }
	inline MessageParser_t194BE39F7FDA7A23C5A94D642095A044763C8FAD * get_U3CParserU3Ek__BackingField_4() const { return ___U3CParserU3Ek__BackingField_4; }
	inline MessageParser_t194BE39F7FDA7A23C5A94D642095A044763C8FAD ** get_address_of_U3CParserU3Ek__BackingField_4() { return &___U3CParserU3Ek__BackingField_4; }
	inline void set_U3CParserU3Ek__BackingField_4(MessageParser_t194BE39F7FDA7A23C5A94D642095A044763C8FAD * value)
	{
		___U3CParserU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CParserU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPropertyNamesU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(GeneratedClrTypeInfo_tF2F0DF2AAEC92C81106422AB98D931414053DE97, ___U3CPropertyNamesU3Ek__BackingField_5)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_U3CPropertyNamesU3Ek__BackingField_5() const { return ___U3CPropertyNamesU3Ek__BackingField_5; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_U3CPropertyNamesU3Ek__BackingField_5() { return &___U3CPropertyNamesU3Ek__BackingField_5; }
	inline void set_U3CPropertyNamesU3Ek__BackingField_5(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___U3CPropertyNamesU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPropertyNamesU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CExtensionsU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(GeneratedClrTypeInfo_tF2F0DF2AAEC92C81106422AB98D931414053DE97, ___U3CExtensionsU3Ek__BackingField_6)); }
	inline ExtensionU5BU5D_t2681A83D242011D183C2C5D69B53BDF490D9BB0B* get_U3CExtensionsU3Ek__BackingField_6() const { return ___U3CExtensionsU3Ek__BackingField_6; }
	inline ExtensionU5BU5D_t2681A83D242011D183C2C5D69B53BDF490D9BB0B** get_address_of_U3CExtensionsU3Ek__BackingField_6() { return &___U3CExtensionsU3Ek__BackingField_6; }
	inline void set_U3CExtensionsU3Ek__BackingField_6(ExtensionU5BU5D_t2681A83D242011D183C2C5D69B53BDF490D9BB0B* value)
	{
		___U3CExtensionsU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CExtensionsU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3COneofNamesU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(GeneratedClrTypeInfo_tF2F0DF2AAEC92C81106422AB98D931414053DE97, ___U3COneofNamesU3Ek__BackingField_7)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_U3COneofNamesU3Ek__BackingField_7() const { return ___U3COneofNamesU3Ek__BackingField_7; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_U3COneofNamesU3Ek__BackingField_7() { return &___U3COneofNamesU3Ek__BackingField_7; }
	inline void set_U3COneofNamesU3Ek__BackingField_7(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___U3COneofNamesU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COneofNamesU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNestedTypesU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(GeneratedClrTypeInfo_tF2F0DF2AAEC92C81106422AB98D931414053DE97, ___U3CNestedTypesU3Ek__BackingField_8)); }
	inline GeneratedClrTypeInfoU5BU5D_t38490948FF5D4B2D4E8557D1209161FDA3B07C87* get_U3CNestedTypesU3Ek__BackingField_8() const { return ___U3CNestedTypesU3Ek__BackingField_8; }
	inline GeneratedClrTypeInfoU5BU5D_t38490948FF5D4B2D4E8557D1209161FDA3B07C87** get_address_of_U3CNestedTypesU3Ek__BackingField_8() { return &___U3CNestedTypesU3Ek__BackingField_8; }
	inline void set_U3CNestedTypesU3Ek__BackingField_8(GeneratedClrTypeInfoU5BU5D_t38490948FF5D4B2D4E8557D1209161FDA3B07C87* value)
	{
		___U3CNestedTypesU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNestedTypesU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNestedEnumsU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(GeneratedClrTypeInfo_tF2F0DF2AAEC92C81106422AB98D931414053DE97, ___U3CNestedEnumsU3Ek__BackingField_9)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_U3CNestedEnumsU3Ek__BackingField_9() const { return ___U3CNestedEnumsU3Ek__BackingField_9; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_U3CNestedEnumsU3Ek__BackingField_9() { return &___U3CNestedEnumsU3Ek__BackingField_9; }
	inline void set_U3CNestedEnumsU3Ek__BackingField_9(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___U3CNestedEnumsU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNestedEnumsU3Ek__BackingField_9), (void*)value);
	}
};

struct GeneratedClrTypeInfo_tF2F0DF2AAEC92C81106422AB98D931414053DE97_StaticFields
{
public:
	// System.String[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::EmptyNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___EmptyNames_0;
	// Google.Protobuf.Reflection.GeneratedClrTypeInfo[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::EmptyCodeInfo
	GeneratedClrTypeInfoU5BU5D_t38490948FF5D4B2D4E8557D1209161FDA3B07C87* ___EmptyCodeInfo_1;
	// Google.Protobuf.Extension[] Google.Protobuf.Reflection.GeneratedClrTypeInfo::EmptyExtensions
	ExtensionU5BU5D_t2681A83D242011D183C2C5D69B53BDF490D9BB0B* ___EmptyExtensions_2;

public:
	inline static int32_t get_offset_of_EmptyNames_0() { return static_cast<int32_t>(offsetof(GeneratedClrTypeInfo_tF2F0DF2AAEC92C81106422AB98D931414053DE97_StaticFields, ___EmptyNames_0)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_EmptyNames_0() const { return ___EmptyNames_0; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_EmptyNames_0() { return &___EmptyNames_0; }
	inline void set_EmptyNames_0(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___EmptyNames_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyNames_0), (void*)value);
	}

	inline static int32_t get_offset_of_EmptyCodeInfo_1() { return static_cast<int32_t>(offsetof(GeneratedClrTypeInfo_tF2F0DF2AAEC92C81106422AB98D931414053DE97_StaticFields, ___EmptyCodeInfo_1)); }
	inline GeneratedClrTypeInfoU5BU5D_t38490948FF5D4B2D4E8557D1209161FDA3B07C87* get_EmptyCodeInfo_1() const { return ___EmptyCodeInfo_1; }
	inline GeneratedClrTypeInfoU5BU5D_t38490948FF5D4B2D4E8557D1209161FDA3B07C87** get_address_of_EmptyCodeInfo_1() { return &___EmptyCodeInfo_1; }
	inline void set_EmptyCodeInfo_1(GeneratedClrTypeInfoU5BU5D_t38490948FF5D4B2D4E8557D1209161FDA3B07C87* value)
	{
		___EmptyCodeInfo_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyCodeInfo_1), (void*)value);
	}

	inline static int32_t get_offset_of_EmptyExtensions_2() { return static_cast<int32_t>(offsetof(GeneratedClrTypeInfo_tF2F0DF2AAEC92C81106422AB98D931414053DE97_StaticFields, ___EmptyExtensions_2)); }
	inline ExtensionU5BU5D_t2681A83D242011D183C2C5D69B53BDF490D9BB0B* get_EmptyExtensions_2() const { return ___EmptyExtensions_2; }
	inline ExtensionU5BU5D_t2681A83D242011D183C2C5D69B53BDF490D9BB0B** get_address_of_EmptyExtensions_2() { return &___EmptyExtensions_2; }
	inline void set_EmptyExtensions_2(ExtensionU5BU5D_t2681A83D242011D183C2C5D69B53BDF490D9BB0B* value)
	{
		___EmptyExtensions_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyExtensions_2), (void*)value);
	}
};


// Google.Protobuf.UnknownFieldSet
struct  UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<System.Int32,Google.Protobuf.UnknownField> Google.Protobuf.UnknownFieldSet::fields
	RuntimeObject* ___fields_0;
	// System.Int32 Google.Protobuf.UnknownFieldSet::lastFieldNumber
	int32_t ___lastFieldNumber_1;
	// Google.Protobuf.UnknownField Google.Protobuf.UnknownFieldSet::lastField
	UnknownField_t356B5CFFC7BA62EC0593C9028B3A0C9DE8D8E77F * ___lastField_2;

public:
	inline static int32_t get_offset_of_fields_0() { return static_cast<int32_t>(offsetof(UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5, ___fields_0)); }
	inline RuntimeObject* get_fields_0() const { return ___fields_0; }
	inline RuntimeObject** get_address_of_fields_0() { return &___fields_0; }
	inline void set_fields_0(RuntimeObject* value)
	{
		___fields_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fields_0), (void*)value);
	}

	inline static int32_t get_offset_of_lastFieldNumber_1() { return static_cast<int32_t>(offsetof(UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5, ___lastFieldNumber_1)); }
	inline int32_t get_lastFieldNumber_1() const { return ___lastFieldNumber_1; }
	inline int32_t* get_address_of_lastFieldNumber_1() { return &___lastFieldNumber_1; }
	inline void set_lastFieldNumber_1(int32_t value)
	{
		___lastFieldNumber_1 = value;
	}

	inline static int32_t get_offset_of_lastField_2() { return static_cast<int32_t>(offsetof(UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5, ___lastField_2)); }
	inline UnknownField_t356B5CFFC7BA62EC0593C9028B3A0C9DE8D8E77F * get_lastField_2() const { return ___lastField_2; }
	inline UnknownField_t356B5CFFC7BA62EC0593C9028B3A0C9DE8D8E77F ** get_address_of_lastField_2() { return &___lastField_2; }
	inline void set_lastField_2(UnknownField_t356B5CFFC7BA62EC0593C9028B3A0C9DE8D8E77F * value)
	{
		___lastField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastField_2), (void*)value);
	}
};


// Grpc.Core.CallCredentials
struct  CallCredentials_t2FE73AD74309014E2602D649F67CB2A1B9A026F1  : public RuntimeObject
{
public:

public:
};


// Grpc.Core.CallInvoker
struct  CallInvoker_t8D08B1AC2305E30108FB2F8AFBB87380CB354565  : public RuntimeObject
{
public:

public:
};


// Grpc.Core.Channel
struct  Channel_tACA478F7B1F9D4A2151EF268E78A232E7EF5B765  : public RuntimeObject
{
public:
	// System.Object Grpc.Core.Channel::myLock
	RuntimeObject * ___myLock_1;
	// Grpc.Core.Internal.AtomicCounter Grpc.Core.Channel::activeCallCounter
	AtomicCounter_tAE814F7D7689D949BC63A56CD8DF1D5D6C5ADFE6 * ___activeCallCounter_2;
	// System.Threading.CancellationTokenSource Grpc.Core.Channel::shutdownTokenSource
	CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * ___shutdownTokenSource_3;
	// System.String Grpc.Core.Channel::target
	String_t* ___target_4;
	// Grpc.Core.GrpcEnvironment Grpc.Core.Channel::environment
	GrpcEnvironment_t050C93796F0457E6CE96F96F532B94E92681EE88 * ___environment_5;
	// Grpc.Core.Internal.CompletionQueueSafeHandle Grpc.Core.Channel::completionQueue
	CompletionQueueSafeHandle_t51DCE7AF65E262316D3C3DFDEC1C660A7725B97C * ___completionQueue_6;
	// Grpc.Core.Internal.ChannelSafeHandle Grpc.Core.Channel::handle
	ChannelSafeHandle_t5961F0FF2E6CAAE58B76445E048823D739BAD381 * ___handle_7;
	// System.Collections.Generic.Dictionary`2<System.String,Grpc.Core.ChannelOption> Grpc.Core.Channel::options
	Dictionary_2_t314F26391A5660B4A906607C5BC3E8DF97D0F43B * ___options_8;
	// System.Threading.Tasks.Task Grpc.Core.Channel::connectivityWatcherTask
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___connectivityWatcherTask_9;
	// System.Boolean Grpc.Core.Channel::shutdownRequested
	bool ___shutdownRequested_10;

public:
	inline static int32_t get_offset_of_myLock_1() { return static_cast<int32_t>(offsetof(Channel_tACA478F7B1F9D4A2151EF268E78A232E7EF5B765, ___myLock_1)); }
	inline RuntimeObject * get_myLock_1() const { return ___myLock_1; }
	inline RuntimeObject ** get_address_of_myLock_1() { return &___myLock_1; }
	inline void set_myLock_1(RuntimeObject * value)
	{
		___myLock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myLock_1), (void*)value);
	}

	inline static int32_t get_offset_of_activeCallCounter_2() { return static_cast<int32_t>(offsetof(Channel_tACA478F7B1F9D4A2151EF268E78A232E7EF5B765, ___activeCallCounter_2)); }
	inline AtomicCounter_tAE814F7D7689D949BC63A56CD8DF1D5D6C5ADFE6 * get_activeCallCounter_2() const { return ___activeCallCounter_2; }
	inline AtomicCounter_tAE814F7D7689D949BC63A56CD8DF1D5D6C5ADFE6 ** get_address_of_activeCallCounter_2() { return &___activeCallCounter_2; }
	inline void set_activeCallCounter_2(AtomicCounter_tAE814F7D7689D949BC63A56CD8DF1D5D6C5ADFE6 * value)
	{
		___activeCallCounter_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeCallCounter_2), (void*)value);
	}

	inline static int32_t get_offset_of_shutdownTokenSource_3() { return static_cast<int32_t>(offsetof(Channel_tACA478F7B1F9D4A2151EF268E78A232E7EF5B765, ___shutdownTokenSource_3)); }
	inline CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * get_shutdownTokenSource_3() const { return ___shutdownTokenSource_3; }
	inline CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE ** get_address_of_shutdownTokenSource_3() { return &___shutdownTokenSource_3; }
	inline void set_shutdownTokenSource_3(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * value)
	{
		___shutdownTokenSource_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shutdownTokenSource_3), (void*)value);
	}

	inline static int32_t get_offset_of_target_4() { return static_cast<int32_t>(offsetof(Channel_tACA478F7B1F9D4A2151EF268E78A232E7EF5B765, ___target_4)); }
	inline String_t* get_target_4() const { return ___target_4; }
	inline String_t** get_address_of_target_4() { return &___target_4; }
	inline void set_target_4(String_t* value)
	{
		___target_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_4), (void*)value);
	}

	inline static int32_t get_offset_of_environment_5() { return static_cast<int32_t>(offsetof(Channel_tACA478F7B1F9D4A2151EF268E78A232E7EF5B765, ___environment_5)); }
	inline GrpcEnvironment_t050C93796F0457E6CE96F96F532B94E92681EE88 * get_environment_5() const { return ___environment_5; }
	inline GrpcEnvironment_t050C93796F0457E6CE96F96F532B94E92681EE88 ** get_address_of_environment_5() { return &___environment_5; }
	inline void set_environment_5(GrpcEnvironment_t050C93796F0457E6CE96F96F532B94E92681EE88 * value)
	{
		___environment_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___environment_5), (void*)value);
	}

	inline static int32_t get_offset_of_completionQueue_6() { return static_cast<int32_t>(offsetof(Channel_tACA478F7B1F9D4A2151EF268E78A232E7EF5B765, ___completionQueue_6)); }
	inline CompletionQueueSafeHandle_t51DCE7AF65E262316D3C3DFDEC1C660A7725B97C * get_completionQueue_6() const { return ___completionQueue_6; }
	inline CompletionQueueSafeHandle_t51DCE7AF65E262316D3C3DFDEC1C660A7725B97C ** get_address_of_completionQueue_6() { return &___completionQueue_6; }
	inline void set_completionQueue_6(CompletionQueueSafeHandle_t51DCE7AF65E262316D3C3DFDEC1C660A7725B97C * value)
	{
		___completionQueue_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___completionQueue_6), (void*)value);
	}

	inline static int32_t get_offset_of_handle_7() { return static_cast<int32_t>(offsetof(Channel_tACA478F7B1F9D4A2151EF268E78A232E7EF5B765, ___handle_7)); }
	inline ChannelSafeHandle_t5961F0FF2E6CAAE58B76445E048823D739BAD381 * get_handle_7() const { return ___handle_7; }
	inline ChannelSafeHandle_t5961F0FF2E6CAAE58B76445E048823D739BAD381 ** get_address_of_handle_7() { return &___handle_7; }
	inline void set_handle_7(ChannelSafeHandle_t5961F0FF2E6CAAE58B76445E048823D739BAD381 * value)
	{
		___handle_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handle_7), (void*)value);
	}

	inline static int32_t get_offset_of_options_8() { return static_cast<int32_t>(offsetof(Channel_tACA478F7B1F9D4A2151EF268E78A232E7EF5B765, ___options_8)); }
	inline Dictionary_2_t314F26391A5660B4A906607C5BC3E8DF97D0F43B * get_options_8() const { return ___options_8; }
	inline Dictionary_2_t314F26391A5660B4A906607C5BC3E8DF97D0F43B ** get_address_of_options_8() { return &___options_8; }
	inline void set_options_8(Dictionary_2_t314F26391A5660B4A906607C5BC3E8DF97D0F43B * value)
	{
		___options_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___options_8), (void*)value);
	}

	inline static int32_t get_offset_of_connectivityWatcherTask_9() { return static_cast<int32_t>(offsetof(Channel_tACA478F7B1F9D4A2151EF268E78A232E7EF5B765, ___connectivityWatcherTask_9)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_connectivityWatcherTask_9() const { return ___connectivityWatcherTask_9; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_connectivityWatcherTask_9() { return &___connectivityWatcherTask_9; }
	inline void set_connectivityWatcherTask_9(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___connectivityWatcherTask_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___connectivityWatcherTask_9), (void*)value);
	}

	inline static int32_t get_offset_of_shutdownRequested_10() { return static_cast<int32_t>(offsetof(Channel_tACA478F7B1F9D4A2151EF268E78A232E7EF5B765, ___shutdownRequested_10)); }
	inline bool get_shutdownRequested_10() const { return ___shutdownRequested_10; }
	inline bool* get_address_of_shutdownRequested_10() { return &___shutdownRequested_10; }
	inline void set_shutdownRequested_10(bool value)
	{
		___shutdownRequested_10 = value;
	}
};

struct Channel_tACA478F7B1F9D4A2151EF268E78A232E7EF5B765_StaticFields
{
public:
	// Grpc.Core.Logging.ILogger Grpc.Core.Channel::Logger
	RuntimeObject* ___Logger_0;
	// Grpc.Core.Internal.BatchCompletionDelegate Grpc.Core.Channel::WatchConnectivityStateHandler
	BatchCompletionDelegate_t7373F9B79590F33A601F074B9D3BE5E8DC3BFA9F * ___WatchConnectivityStateHandler_11;

public:
	inline static int32_t get_offset_of_Logger_0() { return static_cast<int32_t>(offsetof(Channel_tACA478F7B1F9D4A2151EF268E78A232E7EF5B765_StaticFields, ___Logger_0)); }
	inline RuntimeObject* get_Logger_0() const { return ___Logger_0; }
	inline RuntimeObject** get_address_of_Logger_0() { return &___Logger_0; }
	inline void set_Logger_0(RuntimeObject* value)
	{
		___Logger_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Logger_0), (void*)value);
	}

	inline static int32_t get_offset_of_WatchConnectivityStateHandler_11() { return static_cast<int32_t>(offsetof(Channel_tACA478F7B1F9D4A2151EF268E78A232E7EF5B765_StaticFields, ___WatchConnectivityStateHandler_11)); }
	inline BatchCompletionDelegate_t7373F9B79590F33A601F074B9D3BE5E8DC3BFA9F * get_WatchConnectivityStateHandler_11() const { return ___WatchConnectivityStateHandler_11; }
	inline BatchCompletionDelegate_t7373F9B79590F33A601F074B9D3BE5E8DC3BFA9F ** get_address_of_WatchConnectivityStateHandler_11() { return &___WatchConnectivityStateHandler_11; }
	inline void set_WatchConnectivityStateHandler_11(BatchCompletionDelegate_t7373F9B79590F33A601F074B9D3BE5E8DC3BFA9F * value)
	{
		___WatchConnectivityStateHandler_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WatchConnectivityStateHandler_11), (void*)value);
	}
};


// Grpc.Core.ClientBase
struct  ClientBase_t7D7B773C37F5A5D8F3791A3A98E58570F38A7727  : public RuntimeObject
{
public:
	// Grpc.Core.ClientBase/ClientBaseConfiguration Grpc.Core.ClientBase::configuration
	ClientBaseConfiguration_t4903F42238056164FC98C7CF199E2DBB392D844D * ___configuration_0;
	// Grpc.Core.CallInvoker Grpc.Core.ClientBase::callInvoker
	CallInvoker_t8D08B1AC2305E30108FB2F8AFBB87380CB354565 * ___callInvoker_1;

public:
	inline static int32_t get_offset_of_configuration_0() { return static_cast<int32_t>(offsetof(ClientBase_t7D7B773C37F5A5D8F3791A3A98E58570F38A7727, ___configuration_0)); }
	inline ClientBaseConfiguration_t4903F42238056164FC98C7CF199E2DBB392D844D * get_configuration_0() const { return ___configuration_0; }
	inline ClientBaseConfiguration_t4903F42238056164FC98C7CF199E2DBB392D844D ** get_address_of_configuration_0() { return &___configuration_0; }
	inline void set_configuration_0(ClientBaseConfiguration_t4903F42238056164FC98C7CF199E2DBB392D844D * value)
	{
		___configuration_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___configuration_0), (void*)value);
	}

	inline static int32_t get_offset_of_callInvoker_1() { return static_cast<int32_t>(offsetof(ClientBase_t7D7B773C37F5A5D8F3791A3A98E58570F38A7727, ___callInvoker_1)); }
	inline CallInvoker_t8D08B1AC2305E30108FB2F8AFBB87380CB354565 * get_callInvoker_1() const { return ___callInvoker_1; }
	inline CallInvoker_t8D08B1AC2305E30108FB2F8AFBB87380CB354565 ** get_address_of_callInvoker_1() { return &___callInvoker_1; }
	inline void set_callInvoker_1(CallInvoker_t8D08B1AC2305E30108FB2F8AFBB87380CB354565 * value)
	{
		___callInvoker_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callInvoker_1), (void*)value);
	}
};


// Grpc.Core.Marshaller`1<Unity.MLAgents.CommunicatorObjects.UnityMessageProto>
struct  Marshaller_1_t9D307945ED8B62035303716CA88CBE969F20136B  : public RuntimeObject
{
public:
	// System.Func`2<T,System.Byte[]> Grpc.Core.Marshaller`1::serializer
	Func_2_tD5F010B2FE5FD8A131A1E87650D1ACFDEB9DFA81 * ___serializer_0;
	// System.Func`2<System.Byte[],T> Grpc.Core.Marshaller`1::deserializer
	Func_2_t1B7D640DEA23BEFB06C17E1A1058A412B8A02A18 * ___deserializer_1;

public:
	inline static int32_t get_offset_of_serializer_0() { return static_cast<int32_t>(offsetof(Marshaller_1_t9D307945ED8B62035303716CA88CBE969F20136B, ___serializer_0)); }
	inline Func_2_tD5F010B2FE5FD8A131A1E87650D1ACFDEB9DFA81 * get_serializer_0() const { return ___serializer_0; }
	inline Func_2_tD5F010B2FE5FD8A131A1E87650D1ACFDEB9DFA81 ** get_address_of_serializer_0() { return &___serializer_0; }
	inline void set_serializer_0(Func_2_tD5F010B2FE5FD8A131A1E87650D1ACFDEB9DFA81 * value)
	{
		___serializer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serializer_0), (void*)value);
	}

	inline static int32_t get_offset_of_deserializer_1() { return static_cast<int32_t>(offsetof(Marshaller_1_t9D307945ED8B62035303716CA88CBE969F20136B, ___deserializer_1)); }
	inline Func_2_t1B7D640DEA23BEFB06C17E1A1058A412B8A02A18 * get_deserializer_1() const { return ___deserializer_1; }
	inline Func_2_t1B7D640DEA23BEFB06C17E1A1058A412B8A02A18 ** get_address_of_deserializer_1() { return &___deserializer_1; }
	inline void set_deserializer_1(Func_2_t1B7D640DEA23BEFB06C17E1A1058A412B8A02A18 * value)
	{
		___deserializer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deserializer_1), (void*)value);
	}
};


// Grpc.Core.Metadata
struct  Metadata_t26C6E825EB0A531EB2CDB3A5F149BA44336193F8  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Grpc.Core.Metadata/Entry> Grpc.Core.Metadata::entries
	List_1_t1D0476DB02B972924764584B975FF73B5C6BEDBF * ___entries_1;
	// System.Boolean Grpc.Core.Metadata::readOnly
	bool ___readOnly_2;

public:
	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Metadata_t26C6E825EB0A531EB2CDB3A5F149BA44336193F8, ___entries_1)); }
	inline List_1_t1D0476DB02B972924764584B975FF73B5C6BEDBF * get_entries_1() const { return ___entries_1; }
	inline List_1_t1D0476DB02B972924764584B975FF73B5C6BEDBF ** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(List_1_t1D0476DB02B972924764584B975FF73B5C6BEDBF * value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_readOnly_2() { return static_cast<int32_t>(offsetof(Metadata_t26C6E825EB0A531EB2CDB3A5F149BA44336193F8, ___readOnly_2)); }
	inline bool get_readOnly_2() const { return ___readOnly_2; }
	inline bool* get_address_of_readOnly_2() { return &___readOnly_2; }
	inline void set_readOnly_2(bool value)
	{
		___readOnly_2 = value;
	}
};

struct Metadata_t26C6E825EB0A531EB2CDB3A5F149BA44336193F8_StaticFields
{
public:
	// Grpc.Core.Metadata Grpc.Core.Metadata::Empty
	Metadata_t26C6E825EB0A531EB2CDB3A5F149BA44336193F8 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Metadata_t26C6E825EB0A531EB2CDB3A5F149BA44336193F8_StaticFields, ___Empty_0)); }
	inline Metadata_t26C6E825EB0A531EB2CDB3A5F149BA44336193F8 * get_Empty_0() const { return ___Empty_0; }
	inline Metadata_t26C6E825EB0A531EB2CDB3A5F149BA44336193F8 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Metadata_t26C6E825EB0A531EB2CDB3A5F149BA44336193F8 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// Unity.MLAgents.CommunicatorObjects.AgentActionProto
struct  AgentActionProto_tD039A9669DE32649580A51A04DC77145F5D748C9  : public RuntimeObject
{
public:
	// Google.Protobuf.UnknownFieldSet Unity.MLAgents.CommunicatorObjects.AgentActionProto::_unknownFields
	UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * ____unknownFields_1;
	// Google.Protobuf.Collections.RepeatedField`1<System.Single> Unity.MLAgents.CommunicatorObjects.AgentActionProto::vectorActionsDeprecated_
	RepeatedField_1_tADBF45AB25450D0E223099AC57419E83C7A3B28A * ___vectorActionsDeprecated__3;
	// System.Single Unity.MLAgents.CommunicatorObjects.AgentActionProto::value_
	float ___value__4;
	// Google.Protobuf.Collections.RepeatedField`1<System.Single> Unity.MLAgents.CommunicatorObjects.AgentActionProto::continuousActions_
	RepeatedField_1_tADBF45AB25450D0E223099AC57419E83C7A3B28A * ___continuousActions__6;
	// Google.Protobuf.Collections.RepeatedField`1<System.Int32> Unity.MLAgents.CommunicatorObjects.AgentActionProto::discreteActions_
	RepeatedField_1_t2FE11A70F0B15E2630371E2BA4F257FAE77EB8CF * ___discreteActions__8;

public:
	inline static int32_t get_offset_of__unknownFields_1() { return static_cast<int32_t>(offsetof(AgentActionProto_tD039A9669DE32649580A51A04DC77145F5D748C9, ____unknownFields_1)); }
	inline UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * get__unknownFields_1() const { return ____unknownFields_1; }
	inline UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 ** get_address_of__unknownFields_1() { return &____unknownFields_1; }
	inline void set__unknownFields_1(UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * value)
	{
		____unknownFields_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____unknownFields_1), (void*)value);
	}

	inline static int32_t get_offset_of_vectorActionsDeprecated__3() { return static_cast<int32_t>(offsetof(AgentActionProto_tD039A9669DE32649580A51A04DC77145F5D748C9, ___vectorActionsDeprecated__3)); }
	inline RepeatedField_1_tADBF45AB25450D0E223099AC57419E83C7A3B28A * get_vectorActionsDeprecated__3() const { return ___vectorActionsDeprecated__3; }
	inline RepeatedField_1_tADBF45AB25450D0E223099AC57419E83C7A3B28A ** get_address_of_vectorActionsDeprecated__3() { return &___vectorActionsDeprecated__3; }
	inline void set_vectorActionsDeprecated__3(RepeatedField_1_tADBF45AB25450D0E223099AC57419E83C7A3B28A * value)
	{
		___vectorActionsDeprecated__3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vectorActionsDeprecated__3), (void*)value);
	}

	inline static int32_t get_offset_of_value__4() { return static_cast<int32_t>(offsetof(AgentActionProto_tD039A9669DE32649580A51A04DC77145F5D748C9, ___value__4)); }
	inline float get_value__4() const { return ___value__4; }
	inline float* get_address_of_value__4() { return &___value__4; }
	inline void set_value__4(float value)
	{
		___value__4 = value;
	}

	inline static int32_t get_offset_of_continuousActions__6() { return static_cast<int32_t>(offsetof(AgentActionProto_tD039A9669DE32649580A51A04DC77145F5D748C9, ___continuousActions__6)); }
	inline RepeatedField_1_tADBF45AB25450D0E223099AC57419E83C7A3B28A * get_continuousActions__6() const { return ___continuousActions__6; }
	inline RepeatedField_1_tADBF45AB25450D0E223099AC57419E83C7A3B28A ** get_address_of_continuousActions__6() { return &___continuousActions__6; }
	inline void set_continuousActions__6(RepeatedField_1_tADBF45AB25450D0E223099AC57419E83C7A3B28A * value)
	{
		___continuousActions__6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continuousActions__6), (void*)value);
	}

	inline static int32_t get_offset_of_discreteActions__8() { return static_cast<int32_t>(offsetof(AgentActionProto_tD039A9669DE32649580A51A04DC77145F5D748C9, ___discreteActions__8)); }
	inline RepeatedField_1_t2FE11A70F0B15E2630371E2BA4F257FAE77EB8CF * get_discreteActions__8() const { return ___discreteActions__8; }
	inline RepeatedField_1_t2FE11A70F0B15E2630371E2BA4F257FAE77EB8CF ** get_address_of_discreteActions__8() { return &___discreteActions__8; }
	inline void set_discreteActions__8(RepeatedField_1_t2FE11A70F0B15E2630371E2BA4F257FAE77EB8CF * value)
	{
		___discreteActions__8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___discreteActions__8), (void*)value);
	}
};

struct AgentActionProto_tD039A9669DE32649580A51A04DC77145F5D748C9_StaticFields
{
public:
	// Google.Protobuf.MessageParser`1<Unity.MLAgents.CommunicatorObjects.AgentActionProto> Unity.MLAgents.CommunicatorObjects.AgentActionProto::_parser
	MessageParser_1_tDD093BAC6289A0E6913065203F01B017D3F705E2 * ____parser_0;
	// Google.Protobuf.FieldCodec`1<System.Single> Unity.MLAgents.CommunicatorObjects.AgentActionProto::_repeated_vectorActionsDeprecated_codec
	FieldCodec_1_t3911AD6F4573B14A418A1A590B8C456C4A1192D2 * ____repeated_vectorActionsDeprecated_codec_2;
	// Google.Protobuf.FieldCodec`1<System.Single> Unity.MLAgents.CommunicatorObjects.AgentActionProto::_repeated_continuousActions_codec
	FieldCodec_1_t3911AD6F4573B14A418A1A590B8C456C4A1192D2 * ____repeated_continuousActions_codec_5;
	// Google.Protobuf.FieldCodec`1<System.Int32> Unity.MLAgents.CommunicatorObjects.AgentActionProto::_repeated_discreteActions_codec
	FieldCodec_1_t593710254A7A74A3E80CD3253F1428CDAA46CF4A * ____repeated_discreteActions_codec_7;

public:
	inline static int32_t get_offset_of__parser_0() { return static_cast<int32_t>(offsetof(AgentActionProto_tD039A9669DE32649580A51A04DC77145F5D748C9_StaticFields, ____parser_0)); }
	inline MessageParser_1_tDD093BAC6289A0E6913065203F01B017D3F705E2 * get__parser_0() const { return ____parser_0; }
	inline MessageParser_1_tDD093BAC6289A0E6913065203F01B017D3F705E2 ** get_address_of__parser_0() { return &____parser_0; }
	inline void set__parser_0(MessageParser_1_tDD093BAC6289A0E6913065203F01B017D3F705E2 * value)
	{
		____parser_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parser_0), (void*)value);
	}

	inline static int32_t get_offset_of__repeated_vectorActionsDeprecated_codec_2() { return static_cast<int32_t>(offsetof(AgentActionProto_tD039A9669DE32649580A51A04DC77145F5D748C9_StaticFields, ____repeated_vectorActionsDeprecated_codec_2)); }
	inline FieldCodec_1_t3911AD6F4573B14A418A1A590B8C456C4A1192D2 * get__repeated_vectorActionsDeprecated_codec_2() const { return ____repeated_vectorActionsDeprecated_codec_2; }
	inline FieldCodec_1_t3911AD6F4573B14A418A1A590B8C456C4A1192D2 ** get_address_of__repeated_vectorActionsDeprecated_codec_2() { return &____repeated_vectorActionsDeprecated_codec_2; }
	inline void set__repeated_vectorActionsDeprecated_codec_2(FieldCodec_1_t3911AD6F4573B14A418A1A590B8C456C4A1192D2 * value)
	{
		____repeated_vectorActionsDeprecated_codec_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____repeated_vectorActionsDeprecated_codec_2), (void*)value);
	}

	inline static int32_t get_offset_of__repeated_continuousActions_codec_5() { return static_cast<int32_t>(offsetof(AgentActionProto_tD039A9669DE32649580A51A04DC77145F5D748C9_StaticFields, ____repeated_continuousActions_codec_5)); }
	inline FieldCodec_1_t3911AD6F4573B14A418A1A590B8C456C4A1192D2 * get__repeated_continuousActions_codec_5() const { return ____repeated_continuousActions_codec_5; }
	inline FieldCodec_1_t3911AD6F4573B14A418A1A590B8C456C4A1192D2 ** get_address_of__repeated_continuousActions_codec_5() { return &____repeated_continuousActions_codec_5; }
	inline void set__repeated_continuousActions_codec_5(FieldCodec_1_t3911AD6F4573B14A418A1A590B8C456C4A1192D2 * value)
	{
		____repeated_continuousActions_codec_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____repeated_continuousActions_codec_5), (void*)value);
	}

	inline static int32_t get_offset_of__repeated_discreteActions_codec_7() { return static_cast<int32_t>(offsetof(AgentActionProto_tD039A9669DE32649580A51A04DC77145F5D748C9_StaticFields, ____repeated_discreteActions_codec_7)); }
	inline FieldCodec_1_t593710254A7A74A3E80CD3253F1428CDAA46CF4A * get__repeated_discreteActions_codec_7() const { return ____repeated_discreteActions_codec_7; }
	inline FieldCodec_1_t593710254A7A74A3E80CD3253F1428CDAA46CF4A ** get_address_of__repeated_discreteActions_codec_7() { return &____repeated_discreteActions_codec_7; }
	inline void set__repeated_discreteActions_codec_7(FieldCodec_1_t593710254A7A74A3E80CD3253F1428CDAA46CF4A * value)
	{
		____repeated_discreteActions_codec_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____repeated_discreteActions_codec_7), (void*)value);
	}
};


// Unity.MLAgents.CommunicatorObjects.AgentActionReflection
struct  AgentActionReflection_tBA544673D5D08C2470AB2DDB97F023BD10EDA367  : public RuntimeObject
{
public:

public:
};

struct AgentActionReflection_tBA544673D5D08C2470AB2DDB97F023BD10EDA367_StaticFields
{
public:
	// Google.Protobuf.Reflection.FileDescriptor Unity.MLAgents.CommunicatorObjects.AgentActionReflection::descriptor
	FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * ___descriptor_0;

public:
	inline static int32_t get_offset_of_descriptor_0() { return static_cast<int32_t>(offsetof(AgentActionReflection_tBA544673D5D08C2470AB2DDB97F023BD10EDA367_StaticFields, ___descriptor_0)); }
	inline FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * get_descriptor_0() const { return ___descriptor_0; }
	inline FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 ** get_address_of_descriptor_0() { return &___descriptor_0; }
	inline void set_descriptor_0(FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * value)
	{
		___descriptor_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___descriptor_0), (void*)value);
	}
};


// Unity.MLAgents.CommunicatorObjects.AgentInfoProto
struct  AgentInfoProto_tB07CB4D6C9A6367975913C1581FAA29FDB4FF5B0  : public RuntimeObject
{
public:
	// Google.Protobuf.UnknownFieldSet Unity.MLAgents.CommunicatorObjects.AgentInfoProto::_unknownFields
	UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * ____unknownFields_1;
	// System.Single Unity.MLAgents.CommunicatorObjects.AgentInfoProto::reward_
	float ___reward__2;
	// System.Boolean Unity.MLAgents.CommunicatorObjects.AgentInfoProto::done_
	bool ___done__3;
	// System.Boolean Unity.MLAgents.CommunicatorObjects.AgentInfoProto::maxStepReached_
	bool ___maxStepReached__4;
	// System.Int32 Unity.MLAgents.CommunicatorObjects.AgentInfoProto::id_
	int32_t ___id__5;
	// Google.Protobuf.Collections.RepeatedField`1<System.Boolean> Unity.MLAgents.CommunicatorObjects.AgentInfoProto::actionMask_
	RepeatedField_1_t9901F9D2108DE5040A0A5A29CA8FBCC20E79E4C0 * ___actionMask__7;
	// Google.Protobuf.Collections.RepeatedField`1<Unity.MLAgents.CommunicatorObjects.ObservationProto> Unity.MLAgents.CommunicatorObjects.AgentInfoProto::observations_
	RepeatedField_1_t927D7B7E19B410D15F22A7633BDC5F9B60447354 * ___observations__9;
	// System.Int32 Unity.MLAgents.CommunicatorObjects.AgentInfoProto::groupId_
	int32_t ___groupId__10;
	// System.Single Unity.MLAgents.CommunicatorObjects.AgentInfoProto::groupReward_
	float ___groupReward__11;

public:
	inline static int32_t get_offset_of__unknownFields_1() { return static_cast<int32_t>(offsetof(AgentInfoProto_tB07CB4D6C9A6367975913C1581FAA29FDB4FF5B0, ____unknownFields_1)); }
	inline UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * get__unknownFields_1() const { return ____unknownFields_1; }
	inline UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 ** get_address_of__unknownFields_1() { return &____unknownFields_1; }
	inline void set__unknownFields_1(UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * value)
	{
		____unknownFields_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____unknownFields_1), (void*)value);
	}

	inline static int32_t get_offset_of_reward__2() { return static_cast<int32_t>(offsetof(AgentInfoProto_tB07CB4D6C9A6367975913C1581FAA29FDB4FF5B0, ___reward__2)); }
	inline float get_reward__2() const { return ___reward__2; }
	inline float* get_address_of_reward__2() { return &___reward__2; }
	inline void set_reward__2(float value)
	{
		___reward__2 = value;
	}

	inline static int32_t get_offset_of_done__3() { return static_cast<int32_t>(offsetof(AgentInfoProto_tB07CB4D6C9A6367975913C1581FAA29FDB4FF5B0, ___done__3)); }
	inline bool get_done__3() const { return ___done__3; }
	inline bool* get_address_of_done__3() { return &___done__3; }
	inline void set_done__3(bool value)
	{
		___done__3 = value;
	}

	inline static int32_t get_offset_of_maxStepReached__4() { return static_cast<int32_t>(offsetof(AgentInfoProto_tB07CB4D6C9A6367975913C1581FAA29FDB4FF5B0, ___maxStepReached__4)); }
	inline bool get_maxStepReached__4() const { return ___maxStepReached__4; }
	inline bool* get_address_of_maxStepReached__4() { return &___maxStepReached__4; }
	inline void set_maxStepReached__4(bool value)
	{
		___maxStepReached__4 = value;
	}

	inline static int32_t get_offset_of_id__5() { return static_cast<int32_t>(offsetof(AgentInfoProto_tB07CB4D6C9A6367975913C1581FAA29FDB4FF5B0, ___id__5)); }
	inline int32_t get_id__5() const { return ___id__5; }
	inline int32_t* get_address_of_id__5() { return &___id__5; }
	inline void set_id__5(int32_t value)
	{
		___id__5 = value;
	}

	inline static int32_t get_offset_of_actionMask__7() { return static_cast<int32_t>(offsetof(AgentInfoProto_tB07CB4D6C9A6367975913C1581FAA29FDB4FF5B0, ___actionMask__7)); }
	inline RepeatedField_1_t9901F9D2108DE5040A0A5A29CA8FBCC20E79E4C0 * get_actionMask__7() const { return ___actionMask__7; }
	inline RepeatedField_1_t9901F9D2108DE5040A0A5A29CA8FBCC20E79E4C0 ** get_address_of_actionMask__7() { return &___actionMask__7; }
	inline void set_actionMask__7(RepeatedField_1_t9901F9D2108DE5040A0A5A29CA8FBCC20E79E4C0 * value)
	{
		___actionMask__7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actionMask__7), (void*)value);
	}

	inline static int32_t get_offset_of_observations__9() { return static_cast<int32_t>(offsetof(AgentInfoProto_tB07CB4D6C9A6367975913C1581FAA29FDB4FF5B0, ___observations__9)); }
	inline RepeatedField_1_t927D7B7E19B410D15F22A7633BDC5F9B60447354 * get_observations__9() const { return ___observations__9; }
	inline RepeatedField_1_t927D7B7E19B410D15F22A7633BDC5F9B60447354 ** get_address_of_observations__9() { return &___observations__9; }
	inline void set_observations__9(RepeatedField_1_t927D7B7E19B410D15F22A7633BDC5F9B60447354 * value)
	{
		___observations__9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observations__9), (void*)value);
	}

	inline static int32_t get_offset_of_groupId__10() { return static_cast<int32_t>(offsetof(AgentInfoProto_tB07CB4D6C9A6367975913C1581FAA29FDB4FF5B0, ___groupId__10)); }
	inline int32_t get_groupId__10() const { return ___groupId__10; }
	inline int32_t* get_address_of_groupId__10() { return &___groupId__10; }
	inline void set_groupId__10(int32_t value)
	{
		___groupId__10 = value;
	}

	inline static int32_t get_offset_of_groupReward__11() { return static_cast<int32_t>(offsetof(AgentInfoProto_tB07CB4D6C9A6367975913C1581FAA29FDB4FF5B0, ___groupReward__11)); }
	inline float get_groupReward__11() const { return ___groupReward__11; }
	inline float* get_address_of_groupReward__11() { return &___groupReward__11; }
	inline void set_groupReward__11(float value)
	{
		___groupReward__11 = value;
	}
};

struct AgentInfoProto_tB07CB4D6C9A6367975913C1581FAA29FDB4FF5B0_StaticFields
{
public:
	// Google.Protobuf.MessageParser`1<Unity.MLAgents.CommunicatorObjects.AgentInfoProto> Unity.MLAgents.CommunicatorObjects.AgentInfoProto::_parser
	MessageParser_1_t22E2BEA51C2B5AD6B1005D5F6AD497277762E2CE * ____parser_0;
	// Google.Protobuf.FieldCodec`1<System.Boolean> Unity.MLAgents.CommunicatorObjects.AgentInfoProto::_repeated_actionMask_codec
	FieldCodec_1_tCC2D2903A8B4AD7D178A1848A0DA28764970C5EC * ____repeated_actionMask_codec_6;
	// Google.Protobuf.FieldCodec`1<Unity.MLAgents.CommunicatorObjects.ObservationProto> Unity.MLAgents.CommunicatorObjects.AgentInfoProto::_repeated_observations_codec
	FieldCodec_1_tF0C9D51EE424A06F75137229FE8CE2A4D893B28A * ____repeated_observations_codec_8;

public:
	inline static int32_t get_offset_of__parser_0() { return static_cast<int32_t>(offsetof(AgentInfoProto_tB07CB4D6C9A6367975913C1581FAA29FDB4FF5B0_StaticFields, ____parser_0)); }
	inline MessageParser_1_t22E2BEA51C2B5AD6B1005D5F6AD497277762E2CE * get__parser_0() const { return ____parser_0; }
	inline MessageParser_1_t22E2BEA51C2B5AD6B1005D5F6AD497277762E2CE ** get_address_of__parser_0() { return &____parser_0; }
	inline void set__parser_0(MessageParser_1_t22E2BEA51C2B5AD6B1005D5F6AD497277762E2CE * value)
	{
		____parser_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parser_0), (void*)value);
	}

	inline static int32_t get_offset_of__repeated_actionMask_codec_6() { return static_cast<int32_t>(offsetof(AgentInfoProto_tB07CB4D6C9A6367975913C1581FAA29FDB4FF5B0_StaticFields, ____repeated_actionMask_codec_6)); }
	inline FieldCodec_1_tCC2D2903A8B4AD7D178A1848A0DA28764970C5EC * get__repeated_actionMask_codec_6() const { return ____repeated_actionMask_codec_6; }
	inline FieldCodec_1_tCC2D2903A8B4AD7D178A1848A0DA28764970C5EC ** get_address_of__repeated_actionMask_codec_6() { return &____repeated_actionMask_codec_6; }
	inline void set__repeated_actionMask_codec_6(FieldCodec_1_tCC2D2903A8B4AD7D178A1848A0DA28764970C5EC * value)
	{
		____repeated_actionMask_codec_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____repeated_actionMask_codec_6), (void*)value);
	}

	inline static int32_t get_offset_of__repeated_observations_codec_8() { return static_cast<int32_t>(offsetof(AgentInfoProto_tB07CB4D6C9A6367975913C1581FAA29FDB4FF5B0_StaticFields, ____repeated_observations_codec_8)); }
	inline FieldCodec_1_tF0C9D51EE424A06F75137229FE8CE2A4D893B28A * get__repeated_observations_codec_8() const { return ____repeated_observations_codec_8; }
	inline FieldCodec_1_tF0C9D51EE424A06F75137229FE8CE2A4D893B28A ** get_address_of__repeated_observations_codec_8() { return &____repeated_observations_codec_8; }
	inline void set__repeated_observations_codec_8(FieldCodec_1_tF0C9D51EE424A06F75137229FE8CE2A4D893B28A * value)
	{
		____repeated_observations_codec_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____repeated_observations_codec_8), (void*)value);
	}
};


// Unity.MLAgents.CommunicatorObjects.AgentInfoReflection
struct  AgentInfoReflection_t49013675F1E2B6D3F15FB8FB3FBB07C33555B3BE  : public RuntimeObject
{
public:

public:
};

struct AgentInfoReflection_t49013675F1E2B6D3F15FB8FB3FBB07C33555B3BE_StaticFields
{
public:
	// Google.Protobuf.Reflection.FileDescriptor Unity.MLAgents.CommunicatorObjects.AgentInfoReflection::descriptor
	FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * ___descriptor_0;

public:
	inline static int32_t get_offset_of_descriptor_0() { return static_cast<int32_t>(offsetof(AgentInfoReflection_t49013675F1E2B6D3F15FB8FB3FBB07C33555B3BE_StaticFields, ___descriptor_0)); }
	inline FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * get_descriptor_0() const { return ___descriptor_0; }
	inline FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 ** get_address_of_descriptor_0() { return &___descriptor_0; }
	inline void set_descriptor_0(FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * value)
	{
		___descriptor_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___descriptor_0), (void*)value);
	}
};


// Unity.MLAgents.CommunicatorObjects.BrainParametersReflection
struct  BrainParametersReflection_tFA72E8BF1EB04761020D829D76D68A89FD9ED905  : public RuntimeObject
{
public:

public:
};

struct BrainParametersReflection_tFA72E8BF1EB04761020D829D76D68A89FD9ED905_StaticFields
{
public:
	// Google.Protobuf.Reflection.FileDescriptor Unity.MLAgents.CommunicatorObjects.BrainParametersReflection::descriptor
	FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * ___descriptor_0;

public:
	inline static int32_t get_offset_of_descriptor_0() { return static_cast<int32_t>(offsetof(BrainParametersReflection_tFA72E8BF1EB04761020D829D76D68A89FD9ED905_StaticFields, ___descriptor_0)); }
	inline FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * get_descriptor_0() const { return ___descriptor_0; }
	inline FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 ** get_address_of_descriptor_0() { return &___descriptor_0; }
	inline void set_descriptor_0(FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * value)
	{
		___descriptor_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___descriptor_0), (void*)value);
	}
};


// Unity.MLAgents.CommunicatorObjects.CapabilitiesReflection
struct  CapabilitiesReflection_tB11BAD1ED4A2E9994A7AA8AEAFF5FEE02FF83C07  : public RuntimeObject
{
public:

public:
};

struct CapabilitiesReflection_tB11BAD1ED4A2E9994A7AA8AEAFF5FEE02FF83C07_StaticFields
{
public:
	// Google.Protobuf.Reflection.FileDescriptor Unity.MLAgents.CommunicatorObjects.CapabilitiesReflection::descriptor
	FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * ___descriptor_0;

public:
	inline static int32_t get_offset_of_descriptor_0() { return static_cast<int32_t>(offsetof(CapabilitiesReflection_tB11BAD1ED4A2E9994A7AA8AEAFF5FEE02FF83C07_StaticFields, ___descriptor_0)); }
	inline FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * get_descriptor_0() const { return ___descriptor_0; }
	inline FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 ** get_address_of_descriptor_0() { return &___descriptor_0; }
	inline void set_descriptor_0(FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * value)
	{
		___descriptor_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___descriptor_0), (void*)value);
	}
};


// Unity.MLAgents.CommunicatorObjects.CommandReflection
struct  CommandReflection_t3F6C832949B0C06BB4474B84EBAAAACAB7160E74  : public RuntimeObject
{
public:

public:
};

struct CommandReflection_t3F6C832949B0C06BB4474B84EBAAAACAB7160E74_StaticFields
{
public:
	// Google.Protobuf.Reflection.FileDescriptor Unity.MLAgents.CommunicatorObjects.CommandReflection::descriptor
	FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * ___descriptor_0;

public:
	inline static int32_t get_offset_of_descriptor_0() { return static_cast<int32_t>(offsetof(CommandReflection_t3F6C832949B0C06BB4474B84EBAAAACAB7160E74_StaticFields, ___descriptor_0)); }
	inline FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * get_descriptor_0() const { return ___descriptor_0; }
	inline FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 ** get_address_of_descriptor_0() { return &___descriptor_0; }
	inline void set_descriptor_0(FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * value)
	{
		___descriptor_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___descriptor_0), (void*)value);
	}
};


// Unity.MLAgents.CommunicatorObjects.UnityMessageProto
struct  UnityMessageProto_tD5391F5B3FDFAFE6B6AEC00BEED8871DCD4B2B26  : public RuntimeObject
{
public:
	// Google.Protobuf.UnknownFieldSet Unity.MLAgents.CommunicatorObjects.UnityMessageProto::_unknownFields
	UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * ____unknownFields_1;
	// Unity.MLAgents.CommunicatorObjects.HeaderProto Unity.MLAgents.CommunicatorObjects.UnityMessageProto::header_
	HeaderProto_t43CFF9CBED56F7CCAFF7D02B94405CB4BA7D1B8F * ___header__2;
	// Unity.MLAgents.CommunicatorObjects.UnityOutputProto Unity.MLAgents.CommunicatorObjects.UnityMessageProto::unityOutput_
	UnityOutputProto_t93805FFF4DC5692F244FA2A945F93128E5B955ED * ___unityOutput__3;
	// Unity.MLAgents.CommunicatorObjects.UnityInputProto Unity.MLAgents.CommunicatorObjects.UnityMessageProto::unityInput_
	UnityInputProto_t5CF40522317C12CD281AA7FBA1EC51FB9F183BEE * ___unityInput__4;

public:
	inline static int32_t get_offset_of__unknownFields_1() { return static_cast<int32_t>(offsetof(UnityMessageProto_tD5391F5B3FDFAFE6B6AEC00BEED8871DCD4B2B26, ____unknownFields_1)); }
	inline UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * get__unknownFields_1() const { return ____unknownFields_1; }
	inline UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 ** get_address_of__unknownFields_1() { return &____unknownFields_1; }
	inline void set__unknownFields_1(UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * value)
	{
		____unknownFields_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____unknownFields_1), (void*)value);
	}

	inline static int32_t get_offset_of_header__2() { return static_cast<int32_t>(offsetof(UnityMessageProto_tD5391F5B3FDFAFE6B6AEC00BEED8871DCD4B2B26, ___header__2)); }
	inline HeaderProto_t43CFF9CBED56F7CCAFF7D02B94405CB4BA7D1B8F * get_header__2() const { return ___header__2; }
	inline HeaderProto_t43CFF9CBED56F7CCAFF7D02B94405CB4BA7D1B8F ** get_address_of_header__2() { return &___header__2; }
	inline void set_header__2(HeaderProto_t43CFF9CBED56F7CCAFF7D02B94405CB4BA7D1B8F * value)
	{
		___header__2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___header__2), (void*)value);
	}

	inline static int32_t get_offset_of_unityOutput__3() { return static_cast<int32_t>(offsetof(UnityMessageProto_tD5391F5B3FDFAFE6B6AEC00BEED8871DCD4B2B26, ___unityOutput__3)); }
	inline UnityOutputProto_t93805FFF4DC5692F244FA2A945F93128E5B955ED * get_unityOutput__3() const { return ___unityOutput__3; }
	inline UnityOutputProto_t93805FFF4DC5692F244FA2A945F93128E5B955ED ** get_address_of_unityOutput__3() { return &___unityOutput__3; }
	inline void set_unityOutput__3(UnityOutputProto_t93805FFF4DC5692F244FA2A945F93128E5B955ED * value)
	{
		___unityOutput__3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unityOutput__3), (void*)value);
	}

	inline static int32_t get_offset_of_unityInput__4() { return static_cast<int32_t>(offsetof(UnityMessageProto_tD5391F5B3FDFAFE6B6AEC00BEED8871DCD4B2B26, ___unityInput__4)); }
	inline UnityInputProto_t5CF40522317C12CD281AA7FBA1EC51FB9F183BEE * get_unityInput__4() const { return ___unityInput__4; }
	inline UnityInputProto_t5CF40522317C12CD281AA7FBA1EC51FB9F183BEE ** get_address_of_unityInput__4() { return &___unityInput__4; }
	inline void set_unityInput__4(UnityInputProto_t5CF40522317C12CD281AA7FBA1EC51FB9F183BEE * value)
	{
		___unityInput__4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unityInput__4), (void*)value);
	}
};

struct UnityMessageProto_tD5391F5B3FDFAFE6B6AEC00BEED8871DCD4B2B26_StaticFields
{
public:
	// Google.Protobuf.MessageParser`1<Unity.MLAgents.CommunicatorObjects.UnityMessageProto> Unity.MLAgents.CommunicatorObjects.UnityMessageProto::_parser
	MessageParser_1_t352DB8B114FB0010B1737343561DB051851EA4F7 * ____parser_0;

public:
	inline static int32_t get_offset_of__parser_0() { return static_cast<int32_t>(offsetof(UnityMessageProto_tD5391F5B3FDFAFE6B6AEC00BEED8871DCD4B2B26_StaticFields, ____parser_0)); }
	inline MessageParser_1_t352DB8B114FB0010B1737343561DB051851EA4F7 * get__parser_0() const { return ____parser_0; }
	inline MessageParser_1_t352DB8B114FB0010B1737343561DB051851EA4F7 ** get_address_of__parser_0() { return &____parser_0; }
	inline void set__parser_0(MessageParser_1_t352DB8B114FB0010B1737343561DB051851EA4F7 * value)
	{
		____parser_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parser_0), (void*)value);
	}
};


// Unity.MLAgents.CommunicatorObjects.UnityRLInitializationInputProto
struct  UnityRLInitializationInputProto_t80AF7CBDE43BD9439BDCC706F66B3EE5BCCF2762  : public RuntimeObject
{
public:
	// Google.Protobuf.UnknownFieldSet Unity.MLAgents.CommunicatorObjects.UnityRLInitializationInputProto::_unknownFields
	UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * ____unknownFields_1;
	// System.Int32 Unity.MLAgents.CommunicatorObjects.UnityRLInitializationInputProto::seed_
	int32_t ___seed__2;
	// System.String Unity.MLAgents.CommunicatorObjects.UnityRLInitializationInputProto::communicationVersion_
	String_t* ___communicationVersion__3;
	// System.String Unity.MLAgents.CommunicatorObjects.UnityRLInitializationInputProto::packageVersion_
	String_t* ___packageVersion__4;
	// Unity.MLAgents.CommunicatorObjects.UnityRLCapabilitiesProto Unity.MLAgents.CommunicatorObjects.UnityRLInitializationInputProto::capabilities_
	UnityRLCapabilitiesProto_t8DC7478490CD77D975FB667731185C2A16374675 * ___capabilities__5;

public:
	inline static int32_t get_offset_of__unknownFields_1() { return static_cast<int32_t>(offsetof(UnityRLInitializationInputProto_t80AF7CBDE43BD9439BDCC706F66B3EE5BCCF2762, ____unknownFields_1)); }
	inline UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * get__unknownFields_1() const { return ____unknownFields_1; }
	inline UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 ** get_address_of__unknownFields_1() { return &____unknownFields_1; }
	inline void set__unknownFields_1(UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * value)
	{
		____unknownFields_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____unknownFields_1), (void*)value);
	}

	inline static int32_t get_offset_of_seed__2() { return static_cast<int32_t>(offsetof(UnityRLInitializationInputProto_t80AF7CBDE43BD9439BDCC706F66B3EE5BCCF2762, ___seed__2)); }
	inline int32_t get_seed__2() const { return ___seed__2; }
	inline int32_t* get_address_of_seed__2() { return &___seed__2; }
	inline void set_seed__2(int32_t value)
	{
		___seed__2 = value;
	}

	inline static int32_t get_offset_of_communicationVersion__3() { return static_cast<int32_t>(offsetof(UnityRLInitializationInputProto_t80AF7CBDE43BD9439BDCC706F66B3EE5BCCF2762, ___communicationVersion__3)); }
	inline String_t* get_communicationVersion__3() const { return ___communicationVersion__3; }
	inline String_t** get_address_of_communicationVersion__3() { return &___communicationVersion__3; }
	inline void set_communicationVersion__3(String_t* value)
	{
		___communicationVersion__3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___communicationVersion__3), (void*)value);
	}

	inline static int32_t get_offset_of_packageVersion__4() { return static_cast<int32_t>(offsetof(UnityRLInitializationInputProto_t80AF7CBDE43BD9439BDCC706F66B3EE5BCCF2762, ___packageVersion__4)); }
	inline String_t* get_packageVersion__4() const { return ___packageVersion__4; }
	inline String_t** get_address_of_packageVersion__4() { return &___packageVersion__4; }
	inline void set_packageVersion__4(String_t* value)
	{
		___packageVersion__4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___packageVersion__4), (void*)value);
	}

	inline static int32_t get_offset_of_capabilities__5() { return static_cast<int32_t>(offsetof(UnityRLInitializationInputProto_t80AF7CBDE43BD9439BDCC706F66B3EE5BCCF2762, ___capabilities__5)); }
	inline UnityRLCapabilitiesProto_t8DC7478490CD77D975FB667731185C2A16374675 * get_capabilities__5() const { return ___capabilities__5; }
	inline UnityRLCapabilitiesProto_t8DC7478490CD77D975FB667731185C2A16374675 ** get_address_of_capabilities__5() { return &___capabilities__5; }
	inline void set_capabilities__5(UnityRLCapabilitiesProto_t8DC7478490CD77D975FB667731185C2A16374675 * value)
	{
		___capabilities__5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___capabilities__5), (void*)value);
	}
};

struct UnityRLInitializationInputProto_t80AF7CBDE43BD9439BDCC706F66B3EE5BCCF2762_StaticFields
{
public:
	// Google.Protobuf.MessageParser`1<Unity.MLAgents.CommunicatorObjects.UnityRLInitializationInputProto> Unity.MLAgents.CommunicatorObjects.UnityRLInitializationInputProto::_parser
	MessageParser_1_t282425D3E3A384629DB8B5E5A41C1299DA1FF2FE * ____parser_0;

public:
	inline static int32_t get_offset_of__parser_0() { return static_cast<int32_t>(offsetof(UnityRLInitializationInputProto_t80AF7CBDE43BD9439BDCC706F66B3EE5BCCF2762_StaticFields, ____parser_0)); }
	inline MessageParser_1_t282425D3E3A384629DB8B5E5A41C1299DA1FF2FE * get__parser_0() const { return ____parser_0; }
	inline MessageParser_1_t282425D3E3A384629DB8B5E5A41C1299DA1FF2FE ** get_address_of__parser_0() { return &____parser_0; }
	inline void set__parser_0(MessageParser_1_t282425D3E3A384629DB8B5E5A41C1299DA1FF2FE * value)
	{
		____parser_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parser_0), (void*)value);
	}
};


// Unity.MLAgents.CommunicatorObjects.UnityRLInitializationOutputProto
struct  UnityRLInitializationOutputProto_tC42D4D6F0F04C6EC9171D63F974FEBFD70943CA0  : public RuntimeObject
{
public:
	// Google.Protobuf.UnknownFieldSet Unity.MLAgents.CommunicatorObjects.UnityRLInitializationOutputProto::_unknownFields
	UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * ____unknownFields_1;
	// System.String Unity.MLAgents.CommunicatorObjects.UnityRLInitializationOutputProto::name_
	String_t* ___name__2;
	// System.String Unity.MLAgents.CommunicatorObjects.UnityRLInitializationOutputProto::communicationVersion_
	String_t* ___communicationVersion__3;
	// System.String Unity.MLAgents.CommunicatorObjects.UnityRLInitializationOutputProto::logPath_
	String_t* ___logPath__4;
	// Google.Protobuf.Collections.RepeatedField`1<Unity.MLAgents.CommunicatorObjects.BrainParametersProto> Unity.MLAgents.CommunicatorObjects.UnityRLInitializationOutputProto::brainParameters_
	RepeatedField_1_tF7E5C2E34CB19414ED5DE55A400AB54ED2562A24 * ___brainParameters__6;
	// System.String Unity.MLAgents.CommunicatorObjects.UnityRLInitializationOutputProto::packageVersion_
	String_t* ___packageVersion__7;
	// Unity.MLAgents.CommunicatorObjects.UnityRLCapabilitiesProto Unity.MLAgents.CommunicatorObjects.UnityRLInitializationOutputProto::capabilities_
	UnityRLCapabilitiesProto_t8DC7478490CD77D975FB667731185C2A16374675 * ___capabilities__8;

public:
	inline static int32_t get_offset_of__unknownFields_1() { return static_cast<int32_t>(offsetof(UnityRLInitializationOutputProto_tC42D4D6F0F04C6EC9171D63F974FEBFD70943CA0, ____unknownFields_1)); }
	inline UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * get__unknownFields_1() const { return ____unknownFields_1; }
	inline UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 ** get_address_of__unknownFields_1() { return &____unknownFields_1; }
	inline void set__unknownFields_1(UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * value)
	{
		____unknownFields_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____unknownFields_1), (void*)value);
	}

	inline static int32_t get_offset_of_name__2() { return static_cast<int32_t>(offsetof(UnityRLInitializationOutputProto_tC42D4D6F0F04C6EC9171D63F974FEBFD70943CA0, ___name__2)); }
	inline String_t* get_name__2() const { return ___name__2; }
	inline String_t** get_address_of_name__2() { return &___name__2; }
	inline void set_name__2(String_t* value)
	{
		___name__2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name__2), (void*)value);
	}

	inline static int32_t get_offset_of_communicationVersion__3() { return static_cast<int32_t>(offsetof(UnityRLInitializationOutputProto_tC42D4D6F0F04C6EC9171D63F974FEBFD70943CA0, ___communicationVersion__3)); }
	inline String_t* get_communicationVersion__3() const { return ___communicationVersion__3; }
	inline String_t** get_address_of_communicationVersion__3() { return &___communicationVersion__3; }
	inline void set_communicationVersion__3(String_t* value)
	{
		___communicationVersion__3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___communicationVersion__3), (void*)value);
	}

	inline static int32_t get_offset_of_logPath__4() { return static_cast<int32_t>(offsetof(UnityRLInitializationOutputProto_tC42D4D6F0F04C6EC9171D63F974FEBFD70943CA0, ___logPath__4)); }
	inline String_t* get_logPath__4() const { return ___logPath__4; }
	inline String_t** get_address_of_logPath__4() { return &___logPath__4; }
	inline void set_logPath__4(String_t* value)
	{
		___logPath__4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___logPath__4), (void*)value);
	}

	inline static int32_t get_offset_of_brainParameters__6() { return static_cast<int32_t>(offsetof(UnityRLInitializationOutputProto_tC42D4D6F0F04C6EC9171D63F974FEBFD70943CA0, ___brainParameters__6)); }
	inline RepeatedField_1_tF7E5C2E34CB19414ED5DE55A400AB54ED2562A24 * get_brainParameters__6() const { return ___brainParameters__6; }
	inline RepeatedField_1_tF7E5C2E34CB19414ED5DE55A400AB54ED2562A24 ** get_address_of_brainParameters__6() { return &___brainParameters__6; }
	inline void set_brainParameters__6(RepeatedField_1_tF7E5C2E34CB19414ED5DE55A400AB54ED2562A24 * value)
	{
		___brainParameters__6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___brainParameters__6), (void*)value);
	}

	inline static int32_t get_offset_of_packageVersion__7() { return static_cast<int32_t>(offsetof(UnityRLInitializationOutputProto_tC42D4D6F0F04C6EC9171D63F974FEBFD70943CA0, ___packageVersion__7)); }
	inline String_t* get_packageVersion__7() const { return ___packageVersion__7; }
	inline String_t** get_address_of_packageVersion__7() { return &___packageVersion__7; }
	inline void set_packageVersion__7(String_t* value)
	{
		___packageVersion__7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___packageVersion__7), (void*)value);
	}

	inline static int32_t get_offset_of_capabilities__8() { return static_cast<int32_t>(offsetof(UnityRLInitializationOutputProto_tC42D4D6F0F04C6EC9171D63F974FEBFD70943CA0, ___capabilities__8)); }
	inline UnityRLCapabilitiesProto_t8DC7478490CD77D975FB667731185C2A16374675 * get_capabilities__8() const { return ___capabilities__8; }
	inline UnityRLCapabilitiesProto_t8DC7478490CD77D975FB667731185C2A16374675 ** get_address_of_capabilities__8() { return &___capabilities__8; }
	inline void set_capabilities__8(UnityRLCapabilitiesProto_t8DC7478490CD77D975FB667731185C2A16374675 * value)
	{
		___capabilities__8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___capabilities__8), (void*)value);
	}
};

struct UnityRLInitializationOutputProto_tC42D4D6F0F04C6EC9171D63F974FEBFD70943CA0_StaticFields
{
public:
	// Google.Protobuf.MessageParser`1<Unity.MLAgents.CommunicatorObjects.UnityRLInitializationOutputProto> Unity.MLAgents.CommunicatorObjects.UnityRLInitializationOutputProto::_parser
	MessageParser_1_t11F6130B5701C9992E0A73F4900A7816D14A3319 * ____parser_0;
	// Google.Protobuf.FieldCodec`1<Unity.MLAgents.CommunicatorObjects.BrainParametersProto> Unity.MLAgents.CommunicatorObjects.UnityRLInitializationOutputProto::_repeated_brainParameters_codec
	FieldCodec_1_t8BC11DDB3E1B80B4EE880B2ED9F16B2420D4810D * ____repeated_brainParameters_codec_5;

public:
	inline static int32_t get_offset_of__parser_0() { return static_cast<int32_t>(offsetof(UnityRLInitializationOutputProto_tC42D4D6F0F04C6EC9171D63F974FEBFD70943CA0_StaticFields, ____parser_0)); }
	inline MessageParser_1_t11F6130B5701C9992E0A73F4900A7816D14A3319 * get__parser_0() const { return ____parser_0; }
	inline MessageParser_1_t11F6130B5701C9992E0A73F4900A7816D14A3319 ** get_address_of__parser_0() { return &____parser_0; }
	inline void set__parser_0(MessageParser_1_t11F6130B5701C9992E0A73F4900A7816D14A3319 * value)
	{
		____parser_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parser_0), (void*)value);
	}

	inline static int32_t get_offset_of__repeated_brainParameters_codec_5() { return static_cast<int32_t>(offsetof(UnityRLInitializationOutputProto_tC42D4D6F0F04C6EC9171D63F974FEBFD70943CA0_StaticFields, ____repeated_brainParameters_codec_5)); }
	inline FieldCodec_1_t8BC11DDB3E1B80B4EE880B2ED9F16B2420D4810D * get__repeated_brainParameters_codec_5() const { return ____repeated_brainParameters_codec_5; }
	inline FieldCodec_1_t8BC11DDB3E1B80B4EE880B2ED9F16B2420D4810D ** get_address_of__repeated_brainParameters_codec_5() { return &____repeated_brainParameters_codec_5; }
	inline void set__repeated_brainParameters_codec_5(FieldCodec_1_t8BC11DDB3E1B80B4EE880B2ED9F16B2420D4810D * value)
	{
		____repeated_brainParameters_codec_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____repeated_brainParameters_codec_5), (void*)value);
	}
};


// Unity.MLAgents.CommunicatorObjects.UnityRLInitializationOutputProto/<>c
struct  U3CU3Ec_tB06FDCE551BEEA534930B9EDDACE5460F74B356C  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tB06FDCE551BEEA534930B9EDDACE5460F74B356C_StaticFields
{
public:
	// Unity.MLAgents.CommunicatorObjects.UnityRLInitializationOutputProto/<>c Unity.MLAgents.CommunicatorObjects.UnityRLInitializationOutputProto/<>c::<>9
	U3CU3Ec_tB06FDCE551BEEA534930B9EDDACE5460F74B356C * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB06FDCE551BEEA534930B9EDDACE5460F74B356C_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tB06FDCE551BEEA534930B9EDDACE5460F74B356C * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tB06FDCE551BEEA534930B9EDDACE5460F74B356C ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tB06FDCE551BEEA534930B9EDDACE5460F74B356C * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/<>c
struct  U3CU3Ec_t8C8913C1ED402AE5A22F45AEFE071BC747C307F9  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t8C8913C1ED402AE5A22F45AEFE071BC747C307F9_StaticFields
{
public:
	// Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/<>c Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/<>c::<>9
	U3CU3Ec_t8C8913C1ED402AE5A22F45AEFE071BC747C307F9 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t8C8913C1ED402AE5A22F45AEFE071BC747C307F9_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t8C8913C1ED402AE5A22F45AEFE071BC747C307F9 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t8C8913C1ED402AE5A22F45AEFE071BC747C307F9 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t8C8913C1ED402AE5A22F45AEFE071BC747C307F9 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types
struct  Types_tBA04F0F5D8B0C336E3428B1B6EDB3FEB771DD4AF  : public RuntimeObject
{
public:

public:
};


// Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto
struct  ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925  : public RuntimeObject
{
public:
	// Google.Protobuf.UnknownFieldSet Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto::_unknownFields
	UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * ____unknownFields_1;
	// Google.Protobuf.Collections.RepeatedField`1<Unity.MLAgents.CommunicatorObjects.AgentActionProto> Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto::value_
	RepeatedField_1_t5CED0C9D40D73B800EBF4F7240C943DC34F268E5 * ___value__3;

public:
	inline static int32_t get_offset_of__unknownFields_1() { return static_cast<int32_t>(offsetof(ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925, ____unknownFields_1)); }
	inline UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * get__unknownFields_1() const { return ____unknownFields_1; }
	inline UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 ** get_address_of__unknownFields_1() { return &____unknownFields_1; }
	inline void set__unknownFields_1(UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * value)
	{
		____unknownFields_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____unknownFields_1), (void*)value);
	}

	inline static int32_t get_offset_of_value__3() { return static_cast<int32_t>(offsetof(ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925, ___value__3)); }
	inline RepeatedField_1_t5CED0C9D40D73B800EBF4F7240C943DC34F268E5 * get_value__3() const { return ___value__3; }
	inline RepeatedField_1_t5CED0C9D40D73B800EBF4F7240C943DC34F268E5 ** get_address_of_value__3() { return &___value__3; }
	inline void set_value__3(RepeatedField_1_t5CED0C9D40D73B800EBF4F7240C943DC34F268E5 * value)
	{
		___value__3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value__3), (void*)value);
	}
};

struct ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925_StaticFields
{
public:
	// Google.Protobuf.MessageParser`1<Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto> Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto::_parser
	MessageParser_1_t5420BF51729BDB4FBC6434906782CFC4FE81F541 * ____parser_0;
	// Google.Protobuf.FieldCodec`1<Unity.MLAgents.CommunicatorObjects.AgentActionProto> Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto::_repeated_value_codec
	FieldCodec_1_t81FE647280EF3EFB39888CEE098EFFFABD0EB887 * ____repeated_value_codec_2;

public:
	inline static int32_t get_offset_of__parser_0() { return static_cast<int32_t>(offsetof(ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925_StaticFields, ____parser_0)); }
	inline MessageParser_1_t5420BF51729BDB4FBC6434906782CFC4FE81F541 * get__parser_0() const { return ____parser_0; }
	inline MessageParser_1_t5420BF51729BDB4FBC6434906782CFC4FE81F541 ** get_address_of__parser_0() { return &____parser_0; }
	inline void set__parser_0(MessageParser_1_t5420BF51729BDB4FBC6434906782CFC4FE81F541 * value)
	{
		____parser_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parser_0), (void*)value);
	}

	inline static int32_t get_offset_of__repeated_value_codec_2() { return static_cast<int32_t>(offsetof(ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925_StaticFields, ____repeated_value_codec_2)); }
	inline FieldCodec_1_t81FE647280EF3EFB39888CEE098EFFFABD0EB887 * get__repeated_value_codec_2() const { return ____repeated_value_codec_2; }
	inline FieldCodec_1_t81FE647280EF3EFB39888CEE098EFFFABD0EB887 ** get_address_of__repeated_value_codec_2() { return &____repeated_value_codec_2; }
	inline void set__repeated_value_codec_2(FieldCodec_1_t81FE647280EF3EFB39888CEE098EFFFABD0EB887 * value)
	{
		____repeated_value_codec_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____repeated_value_codec_2), (void*)value);
	}
};


// Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto/<>c
struct  U3CU3Ec_tE8A7A790398B36ED81CC520B108127AB5D297DBB  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tE8A7A790398B36ED81CC520B108127AB5D297DBB_StaticFields
{
public:
	// Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto/<>c Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto/<>c::<>9
	U3CU3Ec_tE8A7A790398B36ED81CC520B108127AB5D297DBB * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE8A7A790398B36ED81CC520B108127AB5D297DBB_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tE8A7A790398B36ED81CC520B108127AB5D297DBB * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tE8A7A790398B36ED81CC520B108127AB5D297DBB ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tE8A7A790398B36ED81CC520B108127AB5D297DBB * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto
struct  UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7  : public RuntimeObject
{
public:
	// Google.Protobuf.UnknownFieldSet Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto::_unknownFields
	UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * ____unknownFields_1;
	// Google.Protobuf.Collections.MapField`2<System.String,Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto> Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto::agentInfos_
	MapField_2_t8BA58C589830633C7DCCC6E650D623B9E1EDC681 * ___agentInfos__3;
	// Google.Protobuf.ByteString Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto::sideChannel_
	ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * ___sideChannel__4;

public:
	inline static int32_t get_offset_of__unknownFields_1() { return static_cast<int32_t>(offsetof(UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7, ____unknownFields_1)); }
	inline UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * get__unknownFields_1() const { return ____unknownFields_1; }
	inline UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 ** get_address_of__unknownFields_1() { return &____unknownFields_1; }
	inline void set__unknownFields_1(UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * value)
	{
		____unknownFields_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____unknownFields_1), (void*)value);
	}

	inline static int32_t get_offset_of_agentInfos__3() { return static_cast<int32_t>(offsetof(UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7, ___agentInfos__3)); }
	inline MapField_2_t8BA58C589830633C7DCCC6E650D623B9E1EDC681 * get_agentInfos__3() const { return ___agentInfos__3; }
	inline MapField_2_t8BA58C589830633C7DCCC6E650D623B9E1EDC681 ** get_address_of_agentInfos__3() { return &___agentInfos__3; }
	inline void set_agentInfos__3(MapField_2_t8BA58C589830633C7DCCC6E650D623B9E1EDC681 * value)
	{
		___agentInfos__3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___agentInfos__3), (void*)value);
	}

	inline static int32_t get_offset_of_sideChannel__4() { return static_cast<int32_t>(offsetof(UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7, ___sideChannel__4)); }
	inline ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * get_sideChannel__4() const { return ___sideChannel__4; }
	inline ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A ** get_address_of_sideChannel__4() { return &___sideChannel__4; }
	inline void set_sideChannel__4(ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * value)
	{
		___sideChannel__4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sideChannel__4), (void*)value);
	}
};

struct UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7_StaticFields
{
public:
	// Google.Protobuf.MessageParser`1<Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto> Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto::_parser
	MessageParser_1_t599AFE94D623A6084E4A6E9656D1DE8C69383948 * ____parser_0;
	// Google.Protobuf.Collections.MapField`2/Codec<System.String,Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto> Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto::_map_agentInfos_codec
	Codec_t783AB5BD5C8C87BB04A840234E5A6E38B1991493 * ____map_agentInfos_codec_2;

public:
	inline static int32_t get_offset_of__parser_0() { return static_cast<int32_t>(offsetof(UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7_StaticFields, ____parser_0)); }
	inline MessageParser_1_t599AFE94D623A6084E4A6E9656D1DE8C69383948 * get__parser_0() const { return ____parser_0; }
	inline MessageParser_1_t599AFE94D623A6084E4A6E9656D1DE8C69383948 ** get_address_of__parser_0() { return &____parser_0; }
	inline void set__parser_0(MessageParser_1_t599AFE94D623A6084E4A6E9656D1DE8C69383948 * value)
	{
		____parser_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parser_0), (void*)value);
	}

	inline static int32_t get_offset_of__map_agentInfos_codec_2() { return static_cast<int32_t>(offsetof(UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7_StaticFields, ____map_agentInfos_codec_2)); }
	inline Codec_t783AB5BD5C8C87BB04A840234E5A6E38B1991493 * get__map_agentInfos_codec_2() const { return ____map_agentInfos_codec_2; }
	inline Codec_t783AB5BD5C8C87BB04A840234E5A6E38B1991493 ** get_address_of__map_agentInfos_codec_2() { return &____map_agentInfos_codec_2; }
	inline void set__map_agentInfos_codec_2(Codec_t783AB5BD5C8C87BB04A840234E5A6E38B1991493 * value)
	{
		____map_agentInfos_codec_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____map_agentInfos_codec_2), (void*)value);
	}
};


// Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/<>c
struct  U3CU3Ec_t1C9BDC2165F2217C8C45838436E89F90ABEC413C  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t1C9BDC2165F2217C8C45838436E89F90ABEC413C_StaticFields
{
public:
	// Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/<>c Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/<>c::<>9
	U3CU3Ec_t1C9BDC2165F2217C8C45838436E89F90ABEC413C * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1C9BDC2165F2217C8C45838436E89F90ABEC413C_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t1C9BDC2165F2217C8C45838436E89F90ABEC413C * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t1C9BDC2165F2217C8C45838436E89F90ABEC413C ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t1C9BDC2165F2217C8C45838436E89F90ABEC413C * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types
struct  Types_t710F7004F946E6A165C6F2E9959F67D9A0C85591  : public RuntimeObject
{
public:

public:
};


// Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto
struct  ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354  : public RuntimeObject
{
public:
	// Google.Protobuf.UnknownFieldSet Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto::_unknownFields
	UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * ____unknownFields_1;
	// Google.Protobuf.Collections.RepeatedField`1<Unity.MLAgents.CommunicatorObjects.AgentInfoProto> Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto::value_
	RepeatedField_1_tCF11F7126638E9C61AA512264FF6A708BACA9785 * ___value__3;

public:
	inline static int32_t get_offset_of__unknownFields_1() { return static_cast<int32_t>(offsetof(ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354, ____unknownFields_1)); }
	inline UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * get__unknownFields_1() const { return ____unknownFields_1; }
	inline UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 ** get_address_of__unknownFields_1() { return &____unknownFields_1; }
	inline void set__unknownFields_1(UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * value)
	{
		____unknownFields_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____unknownFields_1), (void*)value);
	}

	inline static int32_t get_offset_of_value__3() { return static_cast<int32_t>(offsetof(ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354, ___value__3)); }
	inline RepeatedField_1_tCF11F7126638E9C61AA512264FF6A708BACA9785 * get_value__3() const { return ___value__3; }
	inline RepeatedField_1_tCF11F7126638E9C61AA512264FF6A708BACA9785 ** get_address_of_value__3() { return &___value__3; }
	inline void set_value__3(RepeatedField_1_tCF11F7126638E9C61AA512264FF6A708BACA9785 * value)
	{
		___value__3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value__3), (void*)value);
	}
};

struct ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354_StaticFields
{
public:
	// Google.Protobuf.MessageParser`1<Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto> Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto::_parser
	MessageParser_1_tFCC153276983A237B272DFE38939C2203C07096E * ____parser_0;
	// Google.Protobuf.FieldCodec`1<Unity.MLAgents.CommunicatorObjects.AgentInfoProto> Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto::_repeated_value_codec
	FieldCodec_1_tCA7C1F70281CCD6EEAB215F57EF24B5E6CFCC629 * ____repeated_value_codec_2;

public:
	inline static int32_t get_offset_of__parser_0() { return static_cast<int32_t>(offsetof(ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354_StaticFields, ____parser_0)); }
	inline MessageParser_1_tFCC153276983A237B272DFE38939C2203C07096E * get__parser_0() const { return ____parser_0; }
	inline MessageParser_1_tFCC153276983A237B272DFE38939C2203C07096E ** get_address_of__parser_0() { return &____parser_0; }
	inline void set__parser_0(MessageParser_1_tFCC153276983A237B272DFE38939C2203C07096E * value)
	{
		____parser_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parser_0), (void*)value);
	}

	inline static int32_t get_offset_of__repeated_value_codec_2() { return static_cast<int32_t>(offsetof(ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354_StaticFields, ____repeated_value_codec_2)); }
	inline FieldCodec_1_tCA7C1F70281CCD6EEAB215F57EF24B5E6CFCC629 * get__repeated_value_codec_2() const { return ____repeated_value_codec_2; }
	inline FieldCodec_1_tCA7C1F70281CCD6EEAB215F57EF24B5E6CFCC629 ** get_address_of__repeated_value_codec_2() { return &____repeated_value_codec_2; }
	inline void set__repeated_value_codec_2(FieldCodec_1_tCA7C1F70281CCD6EEAB215F57EF24B5E6CFCC629 * value)
	{
		____repeated_value_codec_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____repeated_value_codec_2), (void*)value);
	}
};


// Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto/<>c
struct  U3CU3Ec_tBA763BFD8BA8427B116C9861173A6C8BE5876A30  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tBA763BFD8BA8427B116C9861173A6C8BE5876A30_StaticFields
{
public:
	// Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto/<>c Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto/<>c::<>9
	U3CU3Ec_tBA763BFD8BA8427B116C9861173A6C8BE5876A30 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tBA763BFD8BA8427B116C9861173A6C8BE5876A30_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tBA763BFD8BA8427B116C9861173A6C8BE5876A30 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tBA763BFD8BA8427B116C9861173A6C8BE5876A30 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tBA763BFD8BA8427B116C9861173A6C8BE5876A30 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// Unity.MLAgents.CommunicatorObjects.UnityRlInitializationInputReflection
struct  UnityRlInitializationInputReflection_t81105574968FC44D34BD8A1EC3A81E7EB0B76E0C  : public RuntimeObject
{
public:

public:
};

struct UnityRlInitializationInputReflection_t81105574968FC44D34BD8A1EC3A81E7EB0B76E0C_StaticFields
{
public:
	// Google.Protobuf.Reflection.FileDescriptor Unity.MLAgents.CommunicatorObjects.UnityRlInitializationInputReflection::descriptor
	FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * ___descriptor_0;

public:
	inline static int32_t get_offset_of_descriptor_0() { return static_cast<int32_t>(offsetof(UnityRlInitializationInputReflection_t81105574968FC44D34BD8A1EC3A81E7EB0B76E0C_StaticFields, ___descriptor_0)); }
	inline FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * get_descriptor_0() const { return ___descriptor_0; }
	inline FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 ** get_address_of_descriptor_0() { return &___descriptor_0; }
	inline void set_descriptor_0(FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * value)
	{
		___descriptor_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___descriptor_0), (void*)value);
	}
};


// Unity.MLAgents.CommunicatorObjects.UnityRlInitializationOutputReflection
struct  UnityRlInitializationOutputReflection_t9544B7A86BEA02854A27B25C2BC75A1C45EEBADB  : public RuntimeObject
{
public:

public:
};

struct UnityRlInitializationOutputReflection_t9544B7A86BEA02854A27B25C2BC75A1C45EEBADB_StaticFields
{
public:
	// Google.Protobuf.Reflection.FileDescriptor Unity.MLAgents.CommunicatorObjects.UnityRlInitializationOutputReflection::descriptor
	FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * ___descriptor_0;

public:
	inline static int32_t get_offset_of_descriptor_0() { return static_cast<int32_t>(offsetof(UnityRlInitializationOutputReflection_t9544B7A86BEA02854A27B25C2BC75A1C45EEBADB_StaticFields, ___descriptor_0)); }
	inline FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * get_descriptor_0() const { return ___descriptor_0; }
	inline FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 ** get_address_of_descriptor_0() { return &___descriptor_0; }
	inline void set_descriptor_0(FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * value)
	{
		___descriptor_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___descriptor_0), (void*)value);
	}
};


// Unity.MLAgents.CommunicatorObjects.UnityRlInputReflection
struct  UnityRlInputReflection_t44A240DE4E74AC47F66186A3A0BB165E653A6EF6  : public RuntimeObject
{
public:

public:
};

struct UnityRlInputReflection_t44A240DE4E74AC47F66186A3A0BB165E653A6EF6_StaticFields
{
public:
	// Google.Protobuf.Reflection.FileDescriptor Unity.MLAgents.CommunicatorObjects.UnityRlInputReflection::descriptor
	FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * ___descriptor_0;

public:
	inline static int32_t get_offset_of_descriptor_0() { return static_cast<int32_t>(offsetof(UnityRlInputReflection_t44A240DE4E74AC47F66186A3A0BB165E653A6EF6_StaticFields, ___descriptor_0)); }
	inline FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * get_descriptor_0() const { return ___descriptor_0; }
	inline FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 ** get_address_of_descriptor_0() { return &___descriptor_0; }
	inline void set_descriptor_0(FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * value)
	{
		___descriptor_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___descriptor_0), (void*)value);
	}
};


// Unity.MLAgents.CommunicatorObjects.UnityRlOutputReflection
struct  UnityRlOutputReflection_t0776186F804074BFA18A3600865C682779F04F75  : public RuntimeObject
{
public:

public:
};

struct UnityRlOutputReflection_t0776186F804074BFA18A3600865C682779F04F75_StaticFields
{
public:
	// Google.Protobuf.Reflection.FileDescriptor Unity.MLAgents.CommunicatorObjects.UnityRlOutputReflection::descriptor
	FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * ___descriptor_0;

public:
	inline static int32_t get_offset_of_descriptor_0() { return static_cast<int32_t>(offsetof(UnityRlOutputReflection_t0776186F804074BFA18A3600865C682779F04F75_StaticFields, ___descriptor_0)); }
	inline FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * get_descriptor_0() const { return ___descriptor_0; }
	inline FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 ** get_address_of_descriptor_0() { return &___descriptor_0; }
	inline void set_descriptor_0(FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * value)
	{
		___descriptor_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___descriptor_0), (void*)value);
	}
};


// Unity.MLAgents.CommunicatorObjects.UnityToExternalProto
struct  UnityToExternalProto_t8BBC923650009D9E6B779D97F6C57AE79B7F0B44  : public RuntimeObject
{
public:

public:
};

struct UnityToExternalProto_t8BBC923650009D9E6B779D97F6C57AE79B7F0B44_StaticFields
{
public:
	// System.String Unity.MLAgents.CommunicatorObjects.UnityToExternalProto::__ServiceName
	String_t* _____ServiceName_0;
	// Grpc.Core.Marshaller`1<Unity.MLAgents.CommunicatorObjects.UnityMessageProto> Unity.MLAgents.CommunicatorObjects.UnityToExternalProto::__Marshaller_communicator_objects_UnityMessageProto
	Marshaller_1_t9D307945ED8B62035303716CA88CBE969F20136B * _____Marshaller_communicator_objects_UnityMessageProto_1;
	// Grpc.Core.Method`2<Unity.MLAgents.CommunicatorObjects.UnityMessageProto,Unity.MLAgents.CommunicatorObjects.UnityMessageProto> Unity.MLAgents.CommunicatorObjects.UnityToExternalProto::__Method_Exchange
	Method_2_t2C16E4478D00E27E608963926C184DF53BA57473 * _____Method_Exchange_2;

public:
	inline static int32_t get_offset_of___ServiceName_0() { return static_cast<int32_t>(offsetof(UnityToExternalProto_t8BBC923650009D9E6B779D97F6C57AE79B7F0B44_StaticFields, _____ServiceName_0)); }
	inline String_t* get___ServiceName_0() const { return _____ServiceName_0; }
	inline String_t** get_address_of___ServiceName_0() { return &_____ServiceName_0; }
	inline void set___ServiceName_0(String_t* value)
	{
		_____ServiceName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&_____ServiceName_0), (void*)value);
	}

	inline static int32_t get_offset_of___Marshaller_communicator_objects_UnityMessageProto_1() { return static_cast<int32_t>(offsetof(UnityToExternalProto_t8BBC923650009D9E6B779D97F6C57AE79B7F0B44_StaticFields, _____Marshaller_communicator_objects_UnityMessageProto_1)); }
	inline Marshaller_1_t9D307945ED8B62035303716CA88CBE969F20136B * get___Marshaller_communicator_objects_UnityMessageProto_1() const { return _____Marshaller_communicator_objects_UnityMessageProto_1; }
	inline Marshaller_1_t9D307945ED8B62035303716CA88CBE969F20136B ** get_address_of___Marshaller_communicator_objects_UnityMessageProto_1() { return &_____Marshaller_communicator_objects_UnityMessageProto_1; }
	inline void set___Marshaller_communicator_objects_UnityMessageProto_1(Marshaller_1_t9D307945ED8B62035303716CA88CBE969F20136B * value)
	{
		_____Marshaller_communicator_objects_UnityMessageProto_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&_____Marshaller_communicator_objects_UnityMessageProto_1), (void*)value);
	}

	inline static int32_t get_offset_of___Method_Exchange_2() { return static_cast<int32_t>(offsetof(UnityToExternalProto_t8BBC923650009D9E6B779D97F6C57AE79B7F0B44_StaticFields, _____Method_Exchange_2)); }
	inline Method_2_t2C16E4478D00E27E608963926C184DF53BA57473 * get___Method_Exchange_2() const { return _____Method_Exchange_2; }
	inline Method_2_t2C16E4478D00E27E608963926C184DF53BA57473 ** get_address_of___Method_Exchange_2() { return &_____Method_Exchange_2; }
	inline void set___Method_Exchange_2(Method_2_t2C16E4478D00E27E608963926C184DF53BA57473 * value)
	{
		_____Method_Exchange_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&_____Method_Exchange_2), (void*)value);
	}
};


// Unity.MLAgents.CommunicatorObjects.UnityToExternalProto/<>c
struct  U3CU3Ec_tE239152597DE8CE5ACBF9989618F9AE0A5ADD1AD  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tE239152597DE8CE5ACBF9989618F9AE0A5ADD1AD_StaticFields
{
public:
	// Unity.MLAgents.CommunicatorObjects.UnityToExternalProto/<>c Unity.MLAgents.CommunicatorObjects.UnityToExternalProto/<>c::<>9
	U3CU3Ec_tE239152597DE8CE5ACBF9989618F9AE0A5ADD1AD * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE239152597DE8CE5ACBF9989618F9AE0A5ADD1AD_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tE239152597DE8CE5ACBF9989618F9AE0A5ADD1AD * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tE239152597DE8CE5ACBF9989618F9AE0A5ADD1AD ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tE239152597DE8CE5ACBF9989618F9AE0A5ADD1AD * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// Google.Protobuf.MessageParser`1<Unity.MLAgents.CommunicatorObjects.AgentActionProto>
struct  MessageParser_1_tDD093BAC6289A0E6913065203F01B017D3F705E2  : public MessageParser_t194BE39F7FDA7A23C5A94D642095A044763C8FAD
{
public:
	// System.Func`1<T> Google.Protobuf.MessageParser`1::factory
	Func_1_tE2434591EF0FE2F9DFA8960400343267E5769993 * ___factory_3;

public:
	inline static int32_t get_offset_of_factory_3() { return static_cast<int32_t>(offsetof(MessageParser_1_tDD093BAC6289A0E6913065203F01B017D3F705E2, ___factory_3)); }
	inline Func_1_tE2434591EF0FE2F9DFA8960400343267E5769993 * get_factory_3() const { return ___factory_3; }
	inline Func_1_tE2434591EF0FE2F9DFA8960400343267E5769993 ** get_address_of_factory_3() { return &___factory_3; }
	inline void set_factory_3(Func_1_tE2434591EF0FE2F9DFA8960400343267E5769993 * value)
	{
		___factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___factory_3), (void*)value);
	}
};


// Google.Protobuf.MessageParser`1<Unity.MLAgents.CommunicatorObjects.AgentInfoProto>
struct  MessageParser_1_t22E2BEA51C2B5AD6B1005D5F6AD497277762E2CE  : public MessageParser_t194BE39F7FDA7A23C5A94D642095A044763C8FAD
{
public:
	// System.Func`1<T> Google.Protobuf.MessageParser`1::factory
	Func_1_tFAFC0C443FE7B4F5861F828B95752B38B155BB42 * ___factory_3;

public:
	inline static int32_t get_offset_of_factory_3() { return static_cast<int32_t>(offsetof(MessageParser_1_t22E2BEA51C2B5AD6B1005D5F6AD497277762E2CE, ___factory_3)); }
	inline Func_1_tFAFC0C443FE7B4F5861F828B95752B38B155BB42 * get_factory_3() const { return ___factory_3; }
	inline Func_1_tFAFC0C443FE7B4F5861F828B95752B38B155BB42 ** get_address_of_factory_3() { return &___factory_3; }
	inline void set_factory_3(Func_1_tFAFC0C443FE7B4F5861F828B95752B38B155BB42 * value)
	{
		___factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___factory_3), (void*)value);
	}
};


// Google.Protobuf.MessageParser`1<Unity.MLAgents.CommunicatorObjects.UnityMessageProto>
struct  MessageParser_1_t352DB8B114FB0010B1737343561DB051851EA4F7  : public MessageParser_t194BE39F7FDA7A23C5A94D642095A044763C8FAD
{
public:
	// System.Func`1<T> Google.Protobuf.MessageParser`1::factory
	Func_1_t107B32A82EC6D672A1DD7A8885E4802353485CBE * ___factory_3;

public:
	inline static int32_t get_offset_of_factory_3() { return static_cast<int32_t>(offsetof(MessageParser_1_t352DB8B114FB0010B1737343561DB051851EA4F7, ___factory_3)); }
	inline Func_1_t107B32A82EC6D672A1DD7A8885E4802353485CBE * get_factory_3() const { return ___factory_3; }
	inline Func_1_t107B32A82EC6D672A1DD7A8885E4802353485CBE ** get_address_of_factory_3() { return &___factory_3; }
	inline void set_factory_3(Func_1_t107B32A82EC6D672A1DD7A8885E4802353485CBE * value)
	{
		___factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___factory_3), (void*)value);
	}
};


// Google.Protobuf.MessageParser`1<Unity.MLAgents.CommunicatorObjects.UnityRLInitializationInputProto>
struct  MessageParser_1_t282425D3E3A384629DB8B5E5A41C1299DA1FF2FE  : public MessageParser_t194BE39F7FDA7A23C5A94D642095A044763C8FAD
{
public:
	// System.Func`1<T> Google.Protobuf.MessageParser`1::factory
	Func_1_t5D7EB8E27878EDCE8227AE44C3E2A0C396D73F09 * ___factory_3;

public:
	inline static int32_t get_offset_of_factory_3() { return static_cast<int32_t>(offsetof(MessageParser_1_t282425D3E3A384629DB8B5E5A41C1299DA1FF2FE, ___factory_3)); }
	inline Func_1_t5D7EB8E27878EDCE8227AE44C3E2A0C396D73F09 * get_factory_3() const { return ___factory_3; }
	inline Func_1_t5D7EB8E27878EDCE8227AE44C3E2A0C396D73F09 ** get_address_of_factory_3() { return &___factory_3; }
	inline void set_factory_3(Func_1_t5D7EB8E27878EDCE8227AE44C3E2A0C396D73F09 * value)
	{
		___factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___factory_3), (void*)value);
	}
};


// Google.Protobuf.MessageParser`1<Unity.MLAgents.CommunicatorObjects.UnityRLInitializationOutputProto>
struct  MessageParser_1_t11F6130B5701C9992E0A73F4900A7816D14A3319  : public MessageParser_t194BE39F7FDA7A23C5A94D642095A044763C8FAD
{
public:
	// System.Func`1<T> Google.Protobuf.MessageParser`1::factory
	Func_1_tA7F576DC8C9110C57338FAC8C602D7138AEBD7FF * ___factory_3;

public:
	inline static int32_t get_offset_of_factory_3() { return static_cast<int32_t>(offsetof(MessageParser_1_t11F6130B5701C9992E0A73F4900A7816D14A3319, ___factory_3)); }
	inline Func_1_tA7F576DC8C9110C57338FAC8C602D7138AEBD7FF * get_factory_3() const { return ___factory_3; }
	inline Func_1_tA7F576DC8C9110C57338FAC8C602D7138AEBD7FF ** get_address_of_factory_3() { return &___factory_3; }
	inline void set_factory_3(Func_1_tA7F576DC8C9110C57338FAC8C602D7138AEBD7FF * value)
	{
		___factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___factory_3), (void*)value);
	}
};


// Google.Protobuf.MessageParser`1<Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto>
struct  MessageParser_1_t5420BF51729BDB4FBC6434906782CFC4FE81F541  : public MessageParser_t194BE39F7FDA7A23C5A94D642095A044763C8FAD
{
public:
	// System.Func`1<T> Google.Protobuf.MessageParser`1::factory
	Func_1_t8BC331C95BEB4D5B22FA94D469CC99C18D998D55 * ___factory_3;

public:
	inline static int32_t get_offset_of_factory_3() { return static_cast<int32_t>(offsetof(MessageParser_1_t5420BF51729BDB4FBC6434906782CFC4FE81F541, ___factory_3)); }
	inline Func_1_t8BC331C95BEB4D5B22FA94D469CC99C18D998D55 * get_factory_3() const { return ___factory_3; }
	inline Func_1_t8BC331C95BEB4D5B22FA94D469CC99C18D998D55 ** get_address_of_factory_3() { return &___factory_3; }
	inline void set_factory_3(Func_1_t8BC331C95BEB4D5B22FA94D469CC99C18D998D55 * value)
	{
		___factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___factory_3), (void*)value);
	}
};


// Google.Protobuf.MessageParser`1<Unity.MLAgents.CommunicatorObjects.UnityRLInputProto>
struct  MessageParser_1_t76C3D8CC3698E2678107C9AB953C0ED781186CFC  : public MessageParser_t194BE39F7FDA7A23C5A94D642095A044763C8FAD
{
public:
	// System.Func`1<T> Google.Protobuf.MessageParser`1::factory
	Func_1_t288173BF3A6E883F68A0606FEF98AF1788CD8382 * ___factory_3;

public:
	inline static int32_t get_offset_of_factory_3() { return static_cast<int32_t>(offsetof(MessageParser_1_t76C3D8CC3698E2678107C9AB953C0ED781186CFC, ___factory_3)); }
	inline Func_1_t288173BF3A6E883F68A0606FEF98AF1788CD8382 * get_factory_3() const { return ___factory_3; }
	inline Func_1_t288173BF3A6E883F68A0606FEF98AF1788CD8382 ** get_address_of_factory_3() { return &___factory_3; }
	inline void set_factory_3(Func_1_t288173BF3A6E883F68A0606FEF98AF1788CD8382 * value)
	{
		___factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___factory_3), (void*)value);
	}
};


// Google.Protobuf.MessageParser`1<Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto>
struct  MessageParser_1_tFCC153276983A237B272DFE38939C2203C07096E  : public MessageParser_t194BE39F7FDA7A23C5A94D642095A044763C8FAD
{
public:
	// System.Func`1<T> Google.Protobuf.MessageParser`1::factory
	Func_1_tF822C61A09E63838B55573EB289FC36FBF1F7DFF * ___factory_3;

public:
	inline static int32_t get_offset_of_factory_3() { return static_cast<int32_t>(offsetof(MessageParser_1_tFCC153276983A237B272DFE38939C2203C07096E, ___factory_3)); }
	inline Func_1_tF822C61A09E63838B55573EB289FC36FBF1F7DFF * get_factory_3() const { return ___factory_3; }
	inline Func_1_tF822C61A09E63838B55573EB289FC36FBF1F7DFF ** get_address_of_factory_3() { return &___factory_3; }
	inline void set_factory_3(Func_1_tF822C61A09E63838B55573EB289FC36FBF1F7DFF * value)
	{
		___factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___factory_3), (void*)value);
	}
};


// Google.Protobuf.MessageParser`1<Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto>
struct  MessageParser_1_t599AFE94D623A6084E4A6E9656D1DE8C69383948  : public MessageParser_t194BE39F7FDA7A23C5A94D642095A044763C8FAD
{
public:
	// System.Func`1<T> Google.Protobuf.MessageParser`1::factory
	Func_1_tDC2B2E30FB41913C53E3A196F871F8F1B2C5DEF9 * ___factory_3;

public:
	inline static int32_t get_offset_of_factory_3() { return static_cast<int32_t>(offsetof(MessageParser_1_t599AFE94D623A6084E4A6E9656D1DE8C69383948, ___factory_3)); }
	inline Func_1_tDC2B2E30FB41913C53E3A196F871F8F1B2C5DEF9 * get_factory_3() const { return ___factory_3; }
	inline Func_1_tDC2B2E30FB41913C53E3A196F871F8F1B2C5DEF9 ** get_address_of_factory_3() { return &___factory_3; }
	inline void set_factory_3(Func_1_tDC2B2E30FB41913C53E3A196F871F8F1B2C5DEF9 * value)
	{
		___factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___factory_3), (void*)value);
	}
};


// Google.Protobuf.Reflection.MessageDescriptor
struct  MessageDescriptor_t66BFACC1855F8CF3B4F0FB366C773ECDCBE900CB  : public DescriptorBase_t516AD644A587921498DA61C0921A22BB87220F3F
{
public:
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.MessageDescriptor::fieldsInDeclarationOrder
	RuntimeObject* ___fieldsInDeclarationOrder_4;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.MessageDescriptor::fieldsInNumberOrder
	RuntimeObject* ___fieldsInNumberOrder_5;
	// System.Collections.Generic.IDictionary`2<System.String,Google.Protobuf.Reflection.FieldDescriptor> Google.Protobuf.Reflection.MessageDescriptor::jsonFieldMap
	RuntimeObject* ___jsonFieldMap_6;
	// Google.Protobuf.Reflection.DescriptorProto Google.Protobuf.Reflection.MessageDescriptor::<Proto>k__BackingField
	DescriptorProto_tE6B15DCFADA9CC164A7AB69A6D7C91911A2FA1F0 * ___U3CProtoU3Ek__BackingField_7;
	// System.Type Google.Protobuf.Reflection.MessageDescriptor::<ClrType>k__BackingField
	Type_t * ___U3CClrTypeU3Ek__BackingField_8;
	// Google.Protobuf.MessageParser Google.Protobuf.Reflection.MessageDescriptor::<Parser>k__BackingField
	MessageParser_t194BE39F7FDA7A23C5A94D642095A044763C8FAD * ___U3CParserU3Ek__BackingField_9;
	// Google.Protobuf.Reflection.MessageDescriptor Google.Protobuf.Reflection.MessageDescriptor::<ContainingType>k__BackingField
	MessageDescriptor_t66BFACC1855F8CF3B4F0FB366C773ECDCBE900CB * ___U3CContainingTypeU3Ek__BackingField_10;
	// Google.Protobuf.Reflection.MessageDescriptor/FieldCollection Google.Protobuf.Reflection.MessageDescriptor::<Fields>k__BackingField
	FieldCollection_t4356FD08307DCE65A0B9F2850EED4F2407B65A2C * ___U3CFieldsU3Ek__BackingField_11;
	// Google.Protobuf.Reflection.ExtensionCollection Google.Protobuf.Reflection.MessageDescriptor::<Extensions>k__BackingField
	ExtensionCollection_tF96B3043CB25F9B83D1CCD7474DA5D16335E0991 * ___U3CExtensionsU3Ek__BackingField_12;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor> Google.Protobuf.Reflection.MessageDescriptor::<NestedTypes>k__BackingField
	RuntimeObject* ___U3CNestedTypesU3Ek__BackingField_13;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.EnumDescriptor> Google.Protobuf.Reflection.MessageDescriptor::<EnumTypes>k__BackingField
	RuntimeObject* ___U3CEnumTypesU3Ek__BackingField_14;
	// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.OneofDescriptor> Google.Protobuf.Reflection.MessageDescriptor::<Oneofs>k__BackingField
	RuntimeObject* ___U3COneofsU3Ek__BackingField_15;

public:
	inline static int32_t get_offset_of_fieldsInDeclarationOrder_4() { return static_cast<int32_t>(offsetof(MessageDescriptor_t66BFACC1855F8CF3B4F0FB366C773ECDCBE900CB, ___fieldsInDeclarationOrder_4)); }
	inline RuntimeObject* get_fieldsInDeclarationOrder_4() const { return ___fieldsInDeclarationOrder_4; }
	inline RuntimeObject** get_address_of_fieldsInDeclarationOrder_4() { return &___fieldsInDeclarationOrder_4; }
	inline void set_fieldsInDeclarationOrder_4(RuntimeObject* value)
	{
		___fieldsInDeclarationOrder_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fieldsInDeclarationOrder_4), (void*)value);
	}

	inline static int32_t get_offset_of_fieldsInNumberOrder_5() { return static_cast<int32_t>(offsetof(MessageDescriptor_t66BFACC1855F8CF3B4F0FB366C773ECDCBE900CB, ___fieldsInNumberOrder_5)); }
	inline RuntimeObject* get_fieldsInNumberOrder_5() const { return ___fieldsInNumberOrder_5; }
	inline RuntimeObject** get_address_of_fieldsInNumberOrder_5() { return &___fieldsInNumberOrder_5; }
	inline void set_fieldsInNumberOrder_5(RuntimeObject* value)
	{
		___fieldsInNumberOrder_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fieldsInNumberOrder_5), (void*)value);
	}

	inline static int32_t get_offset_of_jsonFieldMap_6() { return static_cast<int32_t>(offsetof(MessageDescriptor_t66BFACC1855F8CF3B4F0FB366C773ECDCBE900CB, ___jsonFieldMap_6)); }
	inline RuntimeObject* get_jsonFieldMap_6() const { return ___jsonFieldMap_6; }
	inline RuntimeObject** get_address_of_jsonFieldMap_6() { return &___jsonFieldMap_6; }
	inline void set_jsonFieldMap_6(RuntimeObject* value)
	{
		___jsonFieldMap_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jsonFieldMap_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CProtoU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(MessageDescriptor_t66BFACC1855F8CF3B4F0FB366C773ECDCBE900CB, ___U3CProtoU3Ek__BackingField_7)); }
	inline DescriptorProto_tE6B15DCFADA9CC164A7AB69A6D7C91911A2FA1F0 * get_U3CProtoU3Ek__BackingField_7() const { return ___U3CProtoU3Ek__BackingField_7; }
	inline DescriptorProto_tE6B15DCFADA9CC164A7AB69A6D7C91911A2FA1F0 ** get_address_of_U3CProtoU3Ek__BackingField_7() { return &___U3CProtoU3Ek__BackingField_7; }
	inline void set_U3CProtoU3Ek__BackingField_7(DescriptorProto_tE6B15DCFADA9CC164A7AB69A6D7C91911A2FA1F0 * value)
	{
		___U3CProtoU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CProtoU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CClrTypeU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(MessageDescriptor_t66BFACC1855F8CF3B4F0FB366C773ECDCBE900CB, ___U3CClrTypeU3Ek__BackingField_8)); }
	inline Type_t * get_U3CClrTypeU3Ek__BackingField_8() const { return ___U3CClrTypeU3Ek__BackingField_8; }
	inline Type_t ** get_address_of_U3CClrTypeU3Ek__BackingField_8() { return &___U3CClrTypeU3Ek__BackingField_8; }
	inline void set_U3CClrTypeU3Ek__BackingField_8(Type_t * value)
	{
		___U3CClrTypeU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CClrTypeU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CParserU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(MessageDescriptor_t66BFACC1855F8CF3B4F0FB366C773ECDCBE900CB, ___U3CParserU3Ek__BackingField_9)); }
	inline MessageParser_t194BE39F7FDA7A23C5A94D642095A044763C8FAD * get_U3CParserU3Ek__BackingField_9() const { return ___U3CParserU3Ek__BackingField_9; }
	inline MessageParser_t194BE39F7FDA7A23C5A94D642095A044763C8FAD ** get_address_of_U3CParserU3Ek__BackingField_9() { return &___U3CParserU3Ek__BackingField_9; }
	inline void set_U3CParserU3Ek__BackingField_9(MessageParser_t194BE39F7FDA7A23C5A94D642095A044763C8FAD * value)
	{
		___U3CParserU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CParserU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CContainingTypeU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(MessageDescriptor_t66BFACC1855F8CF3B4F0FB366C773ECDCBE900CB, ___U3CContainingTypeU3Ek__BackingField_10)); }
	inline MessageDescriptor_t66BFACC1855F8CF3B4F0FB366C773ECDCBE900CB * get_U3CContainingTypeU3Ek__BackingField_10() const { return ___U3CContainingTypeU3Ek__BackingField_10; }
	inline MessageDescriptor_t66BFACC1855F8CF3B4F0FB366C773ECDCBE900CB ** get_address_of_U3CContainingTypeU3Ek__BackingField_10() { return &___U3CContainingTypeU3Ek__BackingField_10; }
	inline void set_U3CContainingTypeU3Ek__BackingField_10(MessageDescriptor_t66BFACC1855F8CF3B4F0FB366C773ECDCBE900CB * value)
	{
		___U3CContainingTypeU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CContainingTypeU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFieldsU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(MessageDescriptor_t66BFACC1855F8CF3B4F0FB366C773ECDCBE900CB, ___U3CFieldsU3Ek__BackingField_11)); }
	inline FieldCollection_t4356FD08307DCE65A0B9F2850EED4F2407B65A2C * get_U3CFieldsU3Ek__BackingField_11() const { return ___U3CFieldsU3Ek__BackingField_11; }
	inline FieldCollection_t4356FD08307DCE65A0B9F2850EED4F2407B65A2C ** get_address_of_U3CFieldsU3Ek__BackingField_11() { return &___U3CFieldsU3Ek__BackingField_11; }
	inline void set_U3CFieldsU3Ek__BackingField_11(FieldCollection_t4356FD08307DCE65A0B9F2850EED4F2407B65A2C * value)
	{
		___U3CFieldsU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFieldsU3Ek__BackingField_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CExtensionsU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(MessageDescriptor_t66BFACC1855F8CF3B4F0FB366C773ECDCBE900CB, ___U3CExtensionsU3Ek__BackingField_12)); }
	inline ExtensionCollection_tF96B3043CB25F9B83D1CCD7474DA5D16335E0991 * get_U3CExtensionsU3Ek__BackingField_12() const { return ___U3CExtensionsU3Ek__BackingField_12; }
	inline ExtensionCollection_tF96B3043CB25F9B83D1CCD7474DA5D16335E0991 ** get_address_of_U3CExtensionsU3Ek__BackingField_12() { return &___U3CExtensionsU3Ek__BackingField_12; }
	inline void set_U3CExtensionsU3Ek__BackingField_12(ExtensionCollection_tF96B3043CB25F9B83D1CCD7474DA5D16335E0991 * value)
	{
		___U3CExtensionsU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CExtensionsU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNestedTypesU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(MessageDescriptor_t66BFACC1855F8CF3B4F0FB366C773ECDCBE900CB, ___U3CNestedTypesU3Ek__BackingField_13)); }
	inline RuntimeObject* get_U3CNestedTypesU3Ek__BackingField_13() const { return ___U3CNestedTypesU3Ek__BackingField_13; }
	inline RuntimeObject** get_address_of_U3CNestedTypesU3Ek__BackingField_13() { return &___U3CNestedTypesU3Ek__BackingField_13; }
	inline void set_U3CNestedTypesU3Ek__BackingField_13(RuntimeObject* value)
	{
		___U3CNestedTypesU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNestedTypesU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEnumTypesU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(MessageDescriptor_t66BFACC1855F8CF3B4F0FB366C773ECDCBE900CB, ___U3CEnumTypesU3Ek__BackingField_14)); }
	inline RuntimeObject* get_U3CEnumTypesU3Ek__BackingField_14() const { return ___U3CEnumTypesU3Ek__BackingField_14; }
	inline RuntimeObject** get_address_of_U3CEnumTypesU3Ek__BackingField_14() { return &___U3CEnumTypesU3Ek__BackingField_14; }
	inline void set_U3CEnumTypesU3Ek__BackingField_14(RuntimeObject* value)
	{
		___U3CEnumTypesU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEnumTypesU3Ek__BackingField_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3COneofsU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(MessageDescriptor_t66BFACC1855F8CF3B4F0FB366C773ECDCBE900CB, ___U3COneofsU3Ek__BackingField_15)); }
	inline RuntimeObject* get_U3COneofsU3Ek__BackingField_15() const { return ___U3COneofsU3Ek__BackingField_15; }
	inline RuntimeObject** get_address_of_U3COneofsU3Ek__BackingField_15() { return &___U3COneofsU3Ek__BackingField_15; }
	inline void set_U3COneofsU3Ek__BackingField_15(RuntimeObject* value)
	{
		___U3COneofsU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COneofsU3Ek__BackingField_15), (void*)value);
	}
};

struct MessageDescriptor_t66BFACC1855F8CF3B4F0FB366C773ECDCBE900CB_StaticFields
{
public:
	// System.Collections.Generic.HashSet`1<System.String> Google.Protobuf.Reflection.MessageDescriptor::WellKnownTypeNames
	HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A * ___WellKnownTypeNames_3;

public:
	inline static int32_t get_offset_of_WellKnownTypeNames_3() { return static_cast<int32_t>(offsetof(MessageDescriptor_t66BFACC1855F8CF3B4F0FB366C773ECDCBE900CB_StaticFields, ___WellKnownTypeNames_3)); }
	inline HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A * get_WellKnownTypeNames_3() const { return ___WellKnownTypeNames_3; }
	inline HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A ** get_address_of_WellKnownTypeNames_3() { return &___WellKnownTypeNames_3; }
	inline void set_WellKnownTypeNames_3(HashSet_1_tAF31CD0D5B1F27E354D2DA33F8CF07F490E8C98A * value)
	{
		___WellKnownTypeNames_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WellKnownTypeNames_3), (void*)value);
	}
};


// Grpc.Core.ClientBase`1<Unity.MLAgents.CommunicatorObjects.UnityToExternalProto/UnityToExternalProtoClient>
struct  ClientBase_1_t79B82AAC18F5519EE8A925984D3B9C7B412DF28E  : public ClientBase_t7D7B773C37F5A5D8F3791A3A98E58570F38A7727
{
public:

public:
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.DateTime
struct  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Threading.CancellationToken
struct  CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB 
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::m_source
	CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * ___m_source_0;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB, ___m_source_0)); }
	inline CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * get_m_source_0() const { return ___m_source_0; }
	inline CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}
};

struct CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_ActionToActionObjShunt
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ___s_ActionToActionObjShunt_1;

public:
	inline static int32_t get_offset_of_s_ActionToActionObjShunt_1() { return static_cast<int32_t>(offsetof(CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_StaticFields, ___s_ActionToActionObjShunt_1)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get_s_ActionToActionObjShunt_1() const { return ___s_ActionToActionObjShunt_1; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of_s_ActionToActionObjShunt_1() { return &___s_ActionToActionObjShunt_1; }
	inline void set_s_ActionToActionObjShunt_1(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		___s_ActionToActionObjShunt_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ActionToActionObjShunt_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_marshaled_pinvoke
{
	CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * ___m_source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_marshaled_com
{
	CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * ___m_source_0;
};

// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// Grpc.Core.ContextPropagationToken
struct  ContextPropagationToken_t0170EC5F7D6ABBDE5E53D75D19385B88C4724D6D  : public RuntimeObject
{
public:
	// Grpc.Core.Internal.CallSafeHandle Grpc.Core.ContextPropagationToken::parentCall
	CallSafeHandle_t1C036E83BF77C1F2B25E5FFD5723776426955017 * ___parentCall_0;
	// System.DateTime Grpc.Core.ContextPropagationToken::deadline
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___deadline_1;
	// System.Threading.CancellationToken Grpc.Core.ContextPropagationToken::cancellationToken
	CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___cancellationToken_2;
	// Grpc.Core.ContextPropagationOptions Grpc.Core.ContextPropagationToken::options
	ContextPropagationOptions_t2E52B62A06CAFA256A454F547C5099A0F611090E * ___options_3;

public:
	inline static int32_t get_offset_of_parentCall_0() { return static_cast<int32_t>(offsetof(ContextPropagationToken_t0170EC5F7D6ABBDE5E53D75D19385B88C4724D6D, ___parentCall_0)); }
	inline CallSafeHandle_t1C036E83BF77C1F2B25E5FFD5723776426955017 * get_parentCall_0() const { return ___parentCall_0; }
	inline CallSafeHandle_t1C036E83BF77C1F2B25E5FFD5723776426955017 ** get_address_of_parentCall_0() { return &___parentCall_0; }
	inline void set_parentCall_0(CallSafeHandle_t1C036E83BF77C1F2B25E5FFD5723776426955017 * value)
	{
		___parentCall_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parentCall_0), (void*)value);
	}

	inline static int32_t get_offset_of_deadline_1() { return static_cast<int32_t>(offsetof(ContextPropagationToken_t0170EC5F7D6ABBDE5E53D75D19385B88C4724D6D, ___deadline_1)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_deadline_1() const { return ___deadline_1; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_deadline_1() { return &___deadline_1; }
	inline void set_deadline_1(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___deadline_1 = value;
	}

	inline static int32_t get_offset_of_cancellationToken_2() { return static_cast<int32_t>(offsetof(ContextPropagationToken_t0170EC5F7D6ABBDE5E53D75D19385B88C4724D6D, ___cancellationToken_2)); }
	inline CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  get_cancellationToken_2() const { return ___cancellationToken_2; }
	inline CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB * get_address_of_cancellationToken_2() { return &___cancellationToken_2; }
	inline void set_cancellationToken_2(CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  value)
	{
		___cancellationToken_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_2))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_options_3() { return static_cast<int32_t>(offsetof(ContextPropagationToken_t0170EC5F7D6ABBDE5E53D75D19385B88C4724D6D, ___options_3)); }
	inline ContextPropagationOptions_t2E52B62A06CAFA256A454F547C5099A0F611090E * get_options_3() const { return ___options_3; }
	inline ContextPropagationOptions_t2E52B62A06CAFA256A454F547C5099A0F611090E ** get_address_of_options_3() { return &___options_3; }
	inline void set_options_3(ContextPropagationOptions_t2E52B62A06CAFA256A454F547C5099A0F611090E * value)
	{
		___options_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___options_3), (void*)value);
	}
};


// Grpc.Core.Internal.CallFlags
struct  CallFlags_t01E65DA2F5605DAB2E7B9A1F682F655861D957D2 
{
public:
	// System.Int32 Grpc.Core.Internal.CallFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CallFlags_t01E65DA2F5605DAB2E7B9A1F682F655861D957D2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Grpc.Core.MethodType
struct  MethodType_t90C1479EB6166B28F3AEB872666747F4FA47DE37 
{
public:
	// System.Int32 Grpc.Core.MethodType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MethodType_t90C1479EB6166B28F3AEB872666747F4FA47DE37, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Grpc.Core.WriteFlags
struct  WriteFlags_t3C5B58D76D15AF38B6F76A74BC05C428E2AEB843 
{
public:
	// System.Int32 Grpc.Core.WriteFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WriteFlags_t3C5B58D76D15AF38B6F76A74BC05C428E2AEB843, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Nullable`1<System.DateTime>
struct  Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78 
{
public:
	// T System.Nullable`1::value
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78, ___value_0)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_value_0() const { return ___value_0; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// Unity.MLAgents.CommunicatorObjects.CommandProto
struct  CommandProto_tAC17245E54D40F31B8AABC01FA32D836060C68A5 
{
public:
	// System.Int32 Unity.MLAgents.CommunicatorObjects.CommandProto::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CommandProto_tAC17245E54D40F31B8AABC01FA32D836060C68A5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.MLAgents.CommunicatorObjects.UnityToExternalProto/UnityToExternalProtoClient
struct  UnityToExternalProtoClient_t924C92326C6A8ECD20D82F229CB1CA8B7AE2E1E2  : public ClientBase_1_t79B82AAC18F5519EE8A925984D3B9C7B412DF28E
{
public:

public:
};


// Grpc.Core.CallOptions
struct  CallOptions_t245FDD2D751812FADC5BB72858891DB919411A27 
{
public:
	// Grpc.Core.Metadata Grpc.Core.CallOptions::headers
	Metadata_t26C6E825EB0A531EB2CDB3A5F149BA44336193F8 * ___headers_0;
	// System.Nullable`1<System.DateTime> Grpc.Core.CallOptions::deadline
	Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78  ___deadline_1;
	// System.Threading.CancellationToken Grpc.Core.CallOptions::cancellationToken
	CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___cancellationToken_2;
	// Grpc.Core.WriteOptions Grpc.Core.CallOptions::writeOptions
	WriteOptions_t3D98497F20B5373A61127A45647E5E8B7B7211EE * ___writeOptions_3;
	// Grpc.Core.ContextPropagationToken Grpc.Core.CallOptions::propagationToken
	ContextPropagationToken_t0170EC5F7D6ABBDE5E53D75D19385B88C4724D6D * ___propagationToken_4;
	// Grpc.Core.CallCredentials Grpc.Core.CallOptions::credentials
	CallCredentials_t2FE73AD74309014E2602D649F67CB2A1B9A026F1 * ___credentials_5;
	// Grpc.Core.Internal.CallFlags Grpc.Core.CallOptions::flags
	int32_t ___flags_6;

public:
	inline static int32_t get_offset_of_headers_0() { return static_cast<int32_t>(offsetof(CallOptions_t245FDD2D751812FADC5BB72858891DB919411A27, ___headers_0)); }
	inline Metadata_t26C6E825EB0A531EB2CDB3A5F149BA44336193F8 * get_headers_0() const { return ___headers_0; }
	inline Metadata_t26C6E825EB0A531EB2CDB3A5F149BA44336193F8 ** get_address_of_headers_0() { return &___headers_0; }
	inline void set_headers_0(Metadata_t26C6E825EB0A531EB2CDB3A5F149BA44336193F8 * value)
	{
		___headers_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___headers_0), (void*)value);
	}

	inline static int32_t get_offset_of_deadline_1() { return static_cast<int32_t>(offsetof(CallOptions_t245FDD2D751812FADC5BB72858891DB919411A27, ___deadline_1)); }
	inline Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78  get_deadline_1() const { return ___deadline_1; }
	inline Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78 * get_address_of_deadline_1() { return &___deadline_1; }
	inline void set_deadline_1(Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78  value)
	{
		___deadline_1 = value;
	}

	inline static int32_t get_offset_of_cancellationToken_2() { return static_cast<int32_t>(offsetof(CallOptions_t245FDD2D751812FADC5BB72858891DB919411A27, ___cancellationToken_2)); }
	inline CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  get_cancellationToken_2() const { return ___cancellationToken_2; }
	inline CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB * get_address_of_cancellationToken_2() { return &___cancellationToken_2; }
	inline void set_cancellationToken_2(CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  value)
	{
		___cancellationToken_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_2))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_writeOptions_3() { return static_cast<int32_t>(offsetof(CallOptions_t245FDD2D751812FADC5BB72858891DB919411A27, ___writeOptions_3)); }
	inline WriteOptions_t3D98497F20B5373A61127A45647E5E8B7B7211EE * get_writeOptions_3() const { return ___writeOptions_3; }
	inline WriteOptions_t3D98497F20B5373A61127A45647E5E8B7B7211EE ** get_address_of_writeOptions_3() { return &___writeOptions_3; }
	inline void set_writeOptions_3(WriteOptions_t3D98497F20B5373A61127A45647E5E8B7B7211EE * value)
	{
		___writeOptions_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___writeOptions_3), (void*)value);
	}

	inline static int32_t get_offset_of_propagationToken_4() { return static_cast<int32_t>(offsetof(CallOptions_t245FDD2D751812FADC5BB72858891DB919411A27, ___propagationToken_4)); }
	inline ContextPropagationToken_t0170EC5F7D6ABBDE5E53D75D19385B88C4724D6D * get_propagationToken_4() const { return ___propagationToken_4; }
	inline ContextPropagationToken_t0170EC5F7D6ABBDE5E53D75D19385B88C4724D6D ** get_address_of_propagationToken_4() { return &___propagationToken_4; }
	inline void set_propagationToken_4(ContextPropagationToken_t0170EC5F7D6ABBDE5E53D75D19385B88C4724D6D * value)
	{
		___propagationToken_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___propagationToken_4), (void*)value);
	}

	inline static int32_t get_offset_of_credentials_5() { return static_cast<int32_t>(offsetof(CallOptions_t245FDD2D751812FADC5BB72858891DB919411A27, ___credentials_5)); }
	inline CallCredentials_t2FE73AD74309014E2602D649F67CB2A1B9A026F1 * get_credentials_5() const { return ___credentials_5; }
	inline CallCredentials_t2FE73AD74309014E2602D649F67CB2A1B9A026F1 ** get_address_of_credentials_5() { return &___credentials_5; }
	inline void set_credentials_5(CallCredentials_t2FE73AD74309014E2602D649F67CB2A1B9A026F1 * value)
	{
		___credentials_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___credentials_5), (void*)value);
	}

	inline static int32_t get_offset_of_flags_6() { return static_cast<int32_t>(offsetof(CallOptions_t245FDD2D751812FADC5BB72858891DB919411A27, ___flags_6)); }
	inline int32_t get_flags_6() const { return ___flags_6; }
	inline int32_t* get_address_of_flags_6() { return &___flags_6; }
	inline void set_flags_6(int32_t value)
	{
		___flags_6 = value;
	}
};

// Native definition for P/Invoke marshalling of Grpc.Core.CallOptions
struct CallOptions_t245FDD2D751812FADC5BB72858891DB919411A27_marshaled_pinvoke
{
	Metadata_t26C6E825EB0A531EB2CDB3A5F149BA44336193F8 * ___headers_0;
	Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78  ___deadline_1;
	CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_marshaled_pinvoke ___cancellationToken_2;
	WriteOptions_t3D98497F20B5373A61127A45647E5E8B7B7211EE * ___writeOptions_3;
	ContextPropagationToken_t0170EC5F7D6ABBDE5E53D75D19385B88C4724D6D * ___propagationToken_4;
	CallCredentials_t2FE73AD74309014E2602D649F67CB2A1B9A026F1 * ___credentials_5;
	int32_t ___flags_6;
};
// Native definition for COM marshalling of Grpc.Core.CallOptions
struct CallOptions_t245FDD2D751812FADC5BB72858891DB919411A27_marshaled_com
{
	Metadata_t26C6E825EB0A531EB2CDB3A5F149BA44336193F8 * ___headers_0;
	Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78  ___deadline_1;
	CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_marshaled_com ___cancellationToken_2;
	WriteOptions_t3D98497F20B5373A61127A45647E5E8B7B7211EE * ___writeOptions_3;
	ContextPropagationToken_t0170EC5F7D6ABBDE5E53D75D19385B88C4724D6D * ___propagationToken_4;
	CallCredentials_t2FE73AD74309014E2602D649F67CB2A1B9A026F1 * ___credentials_5;
	int32_t ___flags_6;
};

// Grpc.Core.Method`2<Unity.MLAgents.CommunicatorObjects.UnityMessageProto,Unity.MLAgents.CommunicatorObjects.UnityMessageProto>
struct  Method_2_t2C16E4478D00E27E608963926C184DF53BA57473  : public RuntimeObject
{
public:
	// Grpc.Core.MethodType Grpc.Core.Method`2::type
	int32_t ___type_0;
	// System.String Grpc.Core.Method`2::serviceName
	String_t* ___serviceName_1;
	// System.String Grpc.Core.Method`2::name
	String_t* ___name_2;
	// Grpc.Core.Marshaller`1<TRequest> Grpc.Core.Method`2::requestMarshaller
	Marshaller_1_t9D307945ED8B62035303716CA88CBE969F20136B * ___requestMarshaller_3;
	// Grpc.Core.Marshaller`1<TResponse> Grpc.Core.Method`2::responseMarshaller
	Marshaller_1_t9D307945ED8B62035303716CA88CBE969F20136B * ___responseMarshaller_4;
	// System.String Grpc.Core.Method`2::fullName
	String_t* ___fullName_5;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(Method_2_t2C16E4478D00E27E608963926C184DF53BA57473, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_serviceName_1() { return static_cast<int32_t>(offsetof(Method_2_t2C16E4478D00E27E608963926C184DF53BA57473, ___serviceName_1)); }
	inline String_t* get_serviceName_1() const { return ___serviceName_1; }
	inline String_t** get_address_of_serviceName_1() { return &___serviceName_1; }
	inline void set_serviceName_1(String_t* value)
	{
		___serviceName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serviceName_1), (void*)value);
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(Method_2_t2C16E4478D00E27E608963926C184DF53BA57473, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_2), (void*)value);
	}

	inline static int32_t get_offset_of_requestMarshaller_3() { return static_cast<int32_t>(offsetof(Method_2_t2C16E4478D00E27E608963926C184DF53BA57473, ___requestMarshaller_3)); }
	inline Marshaller_1_t9D307945ED8B62035303716CA88CBE969F20136B * get_requestMarshaller_3() const { return ___requestMarshaller_3; }
	inline Marshaller_1_t9D307945ED8B62035303716CA88CBE969F20136B ** get_address_of_requestMarshaller_3() { return &___requestMarshaller_3; }
	inline void set_requestMarshaller_3(Marshaller_1_t9D307945ED8B62035303716CA88CBE969F20136B * value)
	{
		___requestMarshaller_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___requestMarshaller_3), (void*)value);
	}

	inline static int32_t get_offset_of_responseMarshaller_4() { return static_cast<int32_t>(offsetof(Method_2_t2C16E4478D00E27E608963926C184DF53BA57473, ___responseMarshaller_4)); }
	inline Marshaller_1_t9D307945ED8B62035303716CA88CBE969F20136B * get_responseMarshaller_4() const { return ___responseMarshaller_4; }
	inline Marshaller_1_t9D307945ED8B62035303716CA88CBE969F20136B ** get_address_of_responseMarshaller_4() { return &___responseMarshaller_4; }
	inline void set_responseMarshaller_4(Marshaller_1_t9D307945ED8B62035303716CA88CBE969F20136B * value)
	{
		___responseMarshaller_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___responseMarshaller_4), (void*)value);
	}

	inline static int32_t get_offset_of_fullName_5() { return static_cast<int32_t>(offsetof(Method_2_t2C16E4478D00E27E608963926C184DF53BA57473, ___fullName_5)); }
	inline String_t* get_fullName_5() const { return ___fullName_5; }
	inline String_t** get_address_of_fullName_5() { return &___fullName_5; }
	inline void set_fullName_5(String_t* value)
	{
		___fullName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fullName_5), (void*)value);
	}
};


// Grpc.Core.WriteOptions
struct  WriteOptions_t3D98497F20B5373A61127A45647E5E8B7B7211EE  : public RuntimeObject
{
public:
	// Grpc.Core.WriteFlags Grpc.Core.WriteOptions::flags
	int32_t ___flags_1;

public:
	inline static int32_t get_offset_of_flags_1() { return static_cast<int32_t>(offsetof(WriteOptions_t3D98497F20B5373A61127A45647E5E8B7B7211EE, ___flags_1)); }
	inline int32_t get_flags_1() const { return ___flags_1; }
	inline int32_t* get_address_of_flags_1() { return &___flags_1; }
	inline void set_flags_1(int32_t value)
	{
		___flags_1 = value;
	}
};

struct WriteOptions_t3D98497F20B5373A61127A45647E5E8B7B7211EE_StaticFields
{
public:
	// Grpc.Core.WriteOptions Grpc.Core.WriteOptions::Default
	WriteOptions_t3D98497F20B5373A61127A45647E5E8B7B7211EE * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(WriteOptions_t3D98497F20B5373A61127A45647E5E8B7B7211EE_StaticFields, ___Default_0)); }
	inline WriteOptions_t3D98497F20B5373A61127A45647E5E8B7B7211EE * get_Default_0() const { return ___Default_0; }
	inline WriteOptions_t3D98497F20B5373A61127A45647E5E8B7B7211EE ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(WriteOptions_t3D98497F20B5373A61127A45647E5E8B7B7211EE * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Default_0), (void*)value);
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// Unity.MLAgents.CommunicatorObjects.UnityRLInputProto
struct  UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0  : public RuntimeObject
{
public:
	// Google.Protobuf.UnknownFieldSet Unity.MLAgents.CommunicatorObjects.UnityRLInputProto::_unknownFields
	UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * ____unknownFields_1;
	// Google.Protobuf.Collections.MapField`2<System.String,Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto> Unity.MLAgents.CommunicatorObjects.UnityRLInputProto::agentActions_
	MapField_2_tD148F5CFC6F243B4A02E983CBB129C24B8AB69FB * ___agentActions__3;
	// Unity.MLAgents.CommunicatorObjects.CommandProto Unity.MLAgents.CommunicatorObjects.UnityRLInputProto::command_
	int32_t ___command__4;
	// Google.Protobuf.ByteString Unity.MLAgents.CommunicatorObjects.UnityRLInputProto::sideChannel_
	ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * ___sideChannel__5;

public:
	inline static int32_t get_offset_of__unknownFields_1() { return static_cast<int32_t>(offsetof(UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0, ____unknownFields_1)); }
	inline UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * get__unknownFields_1() const { return ____unknownFields_1; }
	inline UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 ** get_address_of__unknownFields_1() { return &____unknownFields_1; }
	inline void set__unknownFields_1(UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * value)
	{
		____unknownFields_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____unknownFields_1), (void*)value);
	}

	inline static int32_t get_offset_of_agentActions__3() { return static_cast<int32_t>(offsetof(UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0, ___agentActions__3)); }
	inline MapField_2_tD148F5CFC6F243B4A02E983CBB129C24B8AB69FB * get_agentActions__3() const { return ___agentActions__3; }
	inline MapField_2_tD148F5CFC6F243B4A02E983CBB129C24B8AB69FB ** get_address_of_agentActions__3() { return &___agentActions__3; }
	inline void set_agentActions__3(MapField_2_tD148F5CFC6F243B4A02E983CBB129C24B8AB69FB * value)
	{
		___agentActions__3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___agentActions__3), (void*)value);
	}

	inline static int32_t get_offset_of_command__4() { return static_cast<int32_t>(offsetof(UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0, ___command__4)); }
	inline int32_t get_command__4() const { return ___command__4; }
	inline int32_t* get_address_of_command__4() { return &___command__4; }
	inline void set_command__4(int32_t value)
	{
		___command__4 = value;
	}

	inline static int32_t get_offset_of_sideChannel__5() { return static_cast<int32_t>(offsetof(UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0, ___sideChannel__5)); }
	inline ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * get_sideChannel__5() const { return ___sideChannel__5; }
	inline ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A ** get_address_of_sideChannel__5() { return &___sideChannel__5; }
	inline void set_sideChannel__5(ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * value)
	{
		___sideChannel__5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sideChannel__5), (void*)value);
	}
};

struct UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0_StaticFields
{
public:
	// Google.Protobuf.MessageParser`1<Unity.MLAgents.CommunicatorObjects.UnityRLInputProto> Unity.MLAgents.CommunicatorObjects.UnityRLInputProto::_parser
	MessageParser_1_t76C3D8CC3698E2678107C9AB953C0ED781186CFC * ____parser_0;
	// Google.Protobuf.Collections.MapField`2/Codec<System.String,Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto> Unity.MLAgents.CommunicatorObjects.UnityRLInputProto::_map_agentActions_codec
	Codec_tE5E96F1D701ECCAAC649B5851698F7B1956637AE * ____map_agentActions_codec_2;

public:
	inline static int32_t get_offset_of__parser_0() { return static_cast<int32_t>(offsetof(UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0_StaticFields, ____parser_0)); }
	inline MessageParser_1_t76C3D8CC3698E2678107C9AB953C0ED781186CFC * get__parser_0() const { return ____parser_0; }
	inline MessageParser_1_t76C3D8CC3698E2678107C9AB953C0ED781186CFC ** get_address_of__parser_0() { return &____parser_0; }
	inline void set__parser_0(MessageParser_1_t76C3D8CC3698E2678107C9AB953C0ED781186CFC * value)
	{
		____parser_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parser_0), (void*)value);
	}

	inline static int32_t get_offset_of__map_agentActions_codec_2() { return static_cast<int32_t>(offsetof(UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0_StaticFields, ____map_agentActions_codec_2)); }
	inline Codec_tE5E96F1D701ECCAAC649B5851698F7B1956637AE * get__map_agentActions_codec_2() const { return ____map_agentActions_codec_2; }
	inline Codec_tE5E96F1D701ECCAAC649B5851698F7B1956637AE ** get_address_of__map_agentActions_codec_2() { return &____map_agentActions_codec_2; }
	inline void set__map_agentActions_codec_2(Codec_tE5E96F1D701ECCAAC649B5851698F7B1956637AE * value)
	{
		____map_agentActions_codec_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____map_agentActions_codec_2), (void*)value);
	}
};


// System.Func`1<Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto>
struct  Func_1_t8BC331C95BEB4D5B22FA94D469CC99C18D998D55  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<Unity.MLAgents.CommunicatorObjects.UnityRLInputProto>
struct  Func_1_t288173BF3A6E883F68A0606FEF98AF1788CD8382  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto>
struct  Func_1_tF822C61A09E63838B55573EB289FC36FBF1F7DFF  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto>
struct  Func_1_tDC2B2E30FB41913C53E3A196F871F8F1B2C5DEF9  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Byte[],Unity.MLAgents.CommunicatorObjects.UnityMessageProto>
struct  Func_2_t1B7D640DEA23BEFB06C17E1A1058A412B8A02A18  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Unity.MLAgents.CommunicatorObjects.UnityMessageProto,System.Byte[]>
struct  Func_2_tD5F010B2FE5FD8A131A1E87650D1ACFDEB9DFA81  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// Google.Protobuf.Reflection.FileDescriptor[]
struct FileDescriptorU5BU5D_t91F2611AD4922B7697DBD2C6C8627C68AE7B2D4B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * m_Items[1];

public:
	inline FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Google.Protobuf.Reflection.GeneratedClrTypeInfo[]
struct GeneratedClrTypeInfoU5BU5D_t38490948FF5D4B2D4E8557D1209161FDA3B07C87  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GeneratedClrTypeInfo_tF2F0DF2AAEC92C81106422AB98D931414053DE97 * m_Items[1];

public:
	inline GeneratedClrTypeInfo_tF2F0DF2AAEC92C81106422AB98D931414053DE97 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GeneratedClrTypeInfo_tF2F0DF2AAEC92C81106422AB98D931414053DE97 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GeneratedClrTypeInfo_tF2F0DF2AAEC92C81106422AB98D931414053DE97 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GeneratedClrTypeInfo_tF2F0DF2AAEC92C81106422AB98D931414053DE97 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GeneratedClrTypeInfo_tF2F0DF2AAEC92C81106422AB98D931414053DE97 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GeneratedClrTypeInfo_tF2F0DF2AAEC92C81106422AB98D931414053DE97 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void Google.Protobuf.Collections.MapField`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapField_2__ctor_mCA086DEF4CD7AF6265081E1FCC2AA0615C4D95ED_gshared (MapField_2_t9A247BA10907DD9E1A37F776352D35F07C4B496D * __this, const RuntimeMethod* method);
// Google.Protobuf.Collections.MapField`2<!0,!1> Google.Protobuf.Collections.MapField`2<System.Object,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MapField_2_t9A247BA10907DD9E1A37F776352D35F07C4B496D * MapField_2_Clone_m34D88E65C60E2CDA3587D1528119CF2BF97F05CB_gshared (MapField_2_t9A247BA10907DD9E1A37F776352D35F07C4B496D * __this, const RuntimeMethod* method);
// !!0 Google.Protobuf.ProtoPreconditions::CheckNotNull<System.Object>(!!0,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ProtoPreconditions_CheckNotNull_TisRuntimeObject_mA0CD53540525DCF13BEC29E9E4504A5E69ED33A4_gshared (RuntimeObject * ___value0, String_t* ___name1, const RuntimeMethod* method);
// System.Boolean Google.Protobuf.Collections.MapField`2<System.Object,System.Object>::Equals(Google.Protobuf.Collections.MapField`2<!0,!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MapField_2_Equals_m5CE3AEBA26839EF5B372BF4B9DE43DEBAA94C357_gshared (MapField_2_t9A247BA10907DD9E1A37F776352D35F07C4B496D * __this, MapField_2_t9A247BA10907DD9E1A37F776352D35F07C4B496D * ___other0, const RuntimeMethod* method);
// System.Void Google.Protobuf.Collections.MapField`2<System.Object,System.Object>::WriteTo(Google.Protobuf.CodedOutputStream,Google.Protobuf.Collections.MapField`2/Codec<!0,!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapField_2_WriteTo_m3C8732144FC9A5FCE8AE977E942C49A798C7510C_gshared (MapField_2_t9A247BA10907DD9E1A37F776352D35F07C4B496D * __this, CodedOutputStream_tEDA55D3B33B67A94D65BA47D099A2710F29AEDCA * ___output0, Codec_tB7CC16BE96428FDE1E5305EEF6EC2ED39D422CDF * ___codec1, const RuntimeMethod* method);
// System.Int32 Google.Protobuf.Collections.MapField`2<System.Object,System.Object>::CalculateSize(Google.Protobuf.Collections.MapField`2/Codec<!0,!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MapField_2_CalculateSize_mEF20ADC7534F088CD4A3AA29196F10C0F21FDA96_gshared (MapField_2_t9A247BA10907DD9E1A37F776352D35F07C4B496D * __this, Codec_tB7CC16BE96428FDE1E5305EEF6EC2ED39D422CDF * ___codec0, const RuntimeMethod* method);
// System.Void Google.Protobuf.Collections.MapField`2<System.Object,System.Object>::Add(System.Collections.Generic.IDictionary`2<!0,!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapField_2_Add_m9E9FC25F2CA83999C08CEAA9FB0524CE0C2C5A3F_gshared (MapField_2_t9A247BA10907DD9E1A37F776352D35F07C4B496D * __this, RuntimeObject* ___entries0, const RuntimeMethod* method);
// System.Void Google.Protobuf.Collections.MapField`2<System.Object,System.Object>::AddEntriesFrom(Google.Protobuf.CodedInputStream,Google.Protobuf.Collections.MapField`2/Codec<!0,!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapField_2_AddEntriesFrom_mC8794D6CA631E1DFD700E3996AD1E6062320F690_gshared (MapField_2_t9A247BA10907DD9E1A37F776352D35F07C4B496D * __this, CodedInputStream_t90AE13DCCB9A5F6C02B698E7EDC3E79A5F585C24 * ___input0, Codec_tB7CC16BE96428FDE1E5305EEF6EC2ED39D422CDF * ___codec1, const RuntimeMethod* method);
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mE02699FC76D830943069F8FC19D16C3B72A98A1F_gshared (Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Google.Protobuf.MessageParser`1<System.Object>::.ctor(System.Func`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageParser_1__ctor_mF5F303449FFE6BC2F426A29B63BD20A926581F6D_gshared (MessageParser_1_tC61CC0171F3D1FDC02619F563F6017CE1B28B1DF * __this, Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386 * ___factory0, const RuntimeMethod* method);
// Google.Protobuf.FieldCodec`1<!!0> Google.Protobuf.FieldCodec::ForMessage<System.Object>(System.UInt32,Google.Protobuf.MessageParser`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldCodec_1_t247D609E831262BE600C1FF19B989C9E7A3AFBC7 * FieldCodec_ForMessage_TisRuntimeObject_mAC761BC8E63325AAC0FCC99F85C2444EABC7A400_gshared (uint32_t ___tag0, MessageParser_1_tC61CC0171F3D1FDC02619F563F6017CE1B28B1DF * ___parser1, const RuntimeMethod* method);
// System.Void Google.Protobuf.Collections.MapField`2/Codec<System.Object,System.Object>::.ctor(Google.Protobuf.FieldCodec`1<!0>,Google.Protobuf.FieldCodec`1<!1>,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Codec__ctor_m1A413AEC8B607011A1B9E4D1AAD980A5D1672199_gshared (Codec_tB7CC16BE96428FDE1E5305EEF6EC2ED39D422CDF * __this, FieldCodec_1_t247D609E831262BE600C1FF19B989C9E7A3AFBC7 * ___keyCodec0, FieldCodec_1_t247D609E831262BE600C1FF19B989C9E7A3AFBC7 * ___valueCodec1, uint32_t ___mapTag2, const RuntimeMethod* method);
// System.Void Google.Protobuf.Collections.RepeatedField`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RepeatedField_1__ctor_m57E4E0FBBF9056756A74DB0F8755F8273AD1009D_gshared (RepeatedField_1_tBF0488B7C5CB27F3CBE6EA8D004EC5133252BF66 * __this, const RuntimeMethod* method);
// Google.Protobuf.Collections.RepeatedField`1<!0> Google.Protobuf.Collections.RepeatedField`1<System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RepeatedField_1_tBF0488B7C5CB27F3CBE6EA8D004EC5133252BF66 * RepeatedField_1_Clone_m3CAADB88442F6138B91A40522A6E6497346602E2_gshared (RepeatedField_1_tBF0488B7C5CB27F3CBE6EA8D004EC5133252BF66 * __this, const RuntimeMethod* method);
// System.Boolean Google.Protobuf.Collections.RepeatedField`1<System.Object>::Equals(Google.Protobuf.Collections.RepeatedField`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RepeatedField_1_Equals_m1416149BD0101BD11752422227479B5956E2809C_gshared (RepeatedField_1_tBF0488B7C5CB27F3CBE6EA8D004EC5133252BF66 * __this, RepeatedField_1_tBF0488B7C5CB27F3CBE6EA8D004EC5133252BF66 * ___other0, const RuntimeMethod* method);
// System.Void Google.Protobuf.Collections.RepeatedField`1<System.Object>::WriteTo(Google.Protobuf.CodedOutputStream,Google.Protobuf.FieldCodec`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RepeatedField_1_WriteTo_m7132BB8BB9002BD0557A8F12381E76E846FA03CD_gshared (RepeatedField_1_tBF0488B7C5CB27F3CBE6EA8D004EC5133252BF66 * __this, CodedOutputStream_tEDA55D3B33B67A94D65BA47D099A2710F29AEDCA * ___output0, FieldCodec_1_t247D609E831262BE600C1FF19B989C9E7A3AFBC7 * ___codec1, const RuntimeMethod* method);
// System.Int32 Google.Protobuf.Collections.RepeatedField`1<System.Object>::CalculateSize(Google.Protobuf.FieldCodec`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RepeatedField_1_CalculateSize_mB140759119D803BA8E7EDA547F37FE63385CF92E_gshared (RepeatedField_1_tBF0488B7C5CB27F3CBE6EA8D004EC5133252BF66 * __this, FieldCodec_1_t247D609E831262BE600C1FF19B989C9E7A3AFBC7 * ___codec0, const RuntimeMethod* method);
// System.Void Google.Protobuf.Collections.RepeatedField`1<System.Object>::Add(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RepeatedField_1_Add_m654CEA5A8AFDDF632D51ABFACD88245C84723B71_gshared (RepeatedField_1_tBF0488B7C5CB27F3CBE6EA8D004EC5133252BF66 * __this, RuntimeObject* ___values0, const RuntimeMethod* method);
// System.Void Google.Protobuf.Collections.RepeatedField`1<System.Object>::AddEntriesFrom(Google.Protobuf.CodedInputStream,Google.Protobuf.FieldCodec`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RepeatedField_1_AddEntriesFrom_m549AA46ECB6228D59B08291D47CF3B0A90D1298E_gshared (RepeatedField_1_tBF0488B7C5CB27F3CBE6EA8D004EC5133252BF66 * __this, CodedInputStream_t90AE13DCCB9A5F6C02B698E7EDC3E79A5F585C24 * ___input0, FieldCodec_1_t247D609E831262BE600C1FF19B989C9E7A3AFBC7 * ___codec1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mE2AF7615AD18E9CD92B1909285F5EC5DA8D180C8_gshared (Func_2_tE9A60F007AC624EA27BF19DEF4242B7DA2F1C2A4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// Grpc.Core.Marshaller`1<!!0> Grpc.Core.Marshallers::Create<System.Object>(System.Func`2<!!0,System.Byte[]>,System.Func`2<System.Byte[],!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Marshaller_1_t1529DDC601D917B92DABE5F611360766CB4976A2 * Marshallers_Create_TisRuntimeObject_mEB3BC8D17185EA46E496E24D3C476DA0FD116819_gshared (Func_2_t2946281ED39AE51B6768E719C5E755882180A50A * ___serializer0, Func_2_t8376A1F3AC1F26DE15B452E59E20AC4CFD3079A8 * ___deserializer1, const RuntimeMethod* method);
// System.Void Grpc.Core.Method`2<System.Object,System.Object>::.ctor(Grpc.Core.MethodType,System.String,System.String,Grpc.Core.Marshaller`1<!0>,Grpc.Core.Marshaller`1<!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Method_2__ctor_mA3134411B8408786DEC61CBF2581B21A5E0EC30C_gshared (Method_2_tB9E3D6158231CA1BDA80FE2F4716E0FC1A865772 * __this, int32_t ___type0, String_t* ___serviceName1, String_t* ___name2, Marshaller_1_t1529DDC601D917B92DABE5F611360766CB4976A2 * ___requestMarshaller3, Marshaller_1_t1529DDC601D917B92DABE5F611360766CB4976A2 * ___responseMarshaller4, const RuntimeMethod* method);
// System.Void Grpc.Core.ClientBase`1<System.Object>::.ctor(Grpc.Core.Channel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientBase_1__ctor_mD98EBDBA1F0A8B7B1CE3E4E69CADD00253C74824_gshared (ClientBase_1_t09D783ECF519C9C40911F986D4F5CD2E4BE408E5 * __this, Channel_tACA478F7B1F9D4A2151EF268E78A232E7EF5B765 * ___channel0, const RuntimeMethod* method);

// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLInitializationOutputProto/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2D01856F24DCFF1D02F3FE2C5559BFD73EF37DE3 (U3CU3Ec_tB06FDCE551BEEA534930B9EDDACE5460F74B356C * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLInitializationOutputProto::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityRLInitializationOutputProto__ctor_m5529D06C628008105E02E39CF7D6094E0505912C (UnityRLInitializationOutputProto_tC42D4D6F0F04C6EC9171D63F974FEBFD70943CA0 * __this, const RuntimeMethod* method);
// Google.Protobuf.Reflection.FileDescriptor Unity.MLAgents.CommunicatorObjects.UnityRlInputReflection::get_Descriptor()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * UnityRlInputReflection_get_Descriptor_mACDE921AC2A9C38BF9C2C70397D59BA9522E5E3F_inline (const RuntimeMethod* method);
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor> Google.Protobuf.Reflection.FileDescriptor::get_MessageTypes()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* FileDescriptor_get_MessageTypes_mA3C7B50D952576611016C2F2FD7FE267FBC760AA_inline (FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * __this, const RuntimeMethod* method);
// Google.Protobuf.Reflection.MessageDescriptor Unity.MLAgents.CommunicatorObjects.UnityRLInputProto::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_t66BFACC1855F8CF3B4F0FB366C773ECDCBE900CB * UnityRLInputProto_get_Descriptor_mE324547981BC6796279977757EF2383DEFE25766 (const RuntimeMethod* method);
// System.Void Google.Protobuf.Collections.MapField`2<System.String,Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto>::.ctor()
inline void MapField_2__ctor_mD514E612E0F0F320F885C23C044E105904B9A5BD (MapField_2_tD148F5CFC6F243B4A02E983CBB129C24B8AB69FB * __this, const RuntimeMethod* method)
{
	((  void (*) (MapField_2_tD148F5CFC6F243B4A02E983CBB129C24B8AB69FB *, const RuntimeMethod*))MapField_2__ctor_mCA086DEF4CD7AF6265081E1FCC2AA0615C4D95ED_gshared)(__this, method);
}
// Google.Protobuf.ByteString Google.Protobuf.ByteString::get_Empty()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * ByteString_get_Empty_mEFE0CF6E76539FB8154334F5B28EB169A1F0C87D_inline (const RuntimeMethod* method);
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLInputProto::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityRLInputProto__ctor_m17DD5458D94C607A56C9C3AD9D7D8BF60C526904 (UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0 * __this, const RuntimeMethod* method);
// Google.Protobuf.Collections.MapField`2<!0,!1> Google.Protobuf.Collections.MapField`2<System.String,Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto>::Clone()
inline MapField_2_tD148F5CFC6F243B4A02E983CBB129C24B8AB69FB * MapField_2_Clone_m529DD3623738559C01A1E515EFC50D39421D9AB3 (MapField_2_tD148F5CFC6F243B4A02E983CBB129C24B8AB69FB * __this, const RuntimeMethod* method)
{
	return ((  MapField_2_tD148F5CFC6F243B4A02E983CBB129C24B8AB69FB * (*) (MapField_2_tD148F5CFC6F243B4A02E983CBB129C24B8AB69FB *, const RuntimeMethod*))MapField_2_Clone_m34D88E65C60E2CDA3587D1528119CF2BF97F05CB_gshared)(__this, method);
}
// Google.Protobuf.UnknownFieldSet Google.Protobuf.UnknownFieldSet::Clone(Google.Protobuf.UnknownFieldSet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * UnknownFieldSet_Clone_mA6F97A86D04484D55E0015A1BB9A08BA895BA075 (UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * ___other0, const RuntimeMethod* method);
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLInputProto::.ctor(Unity.MLAgents.CommunicatorObjects.UnityRLInputProto)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityRLInputProto__ctor_m58F41EFD8C3472FE1F4BCED8EA9D29A6F58345FD (UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0 * __this, UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0 * ___other0, const RuntimeMethod* method);
// !!0 Google.Protobuf.ProtoPreconditions::CheckNotNull<Google.Protobuf.ByteString>(!!0,System.String)
inline ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * ProtoPreconditions_CheckNotNull_TisByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A_mCD24610F4F035AF6D750F9FB7EE41E0207F98566 (ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * ___value0, String_t* ___name1, const RuntimeMethod* method)
{
	return ((  ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * (*) (ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A *, String_t*, const RuntimeMethod*))ProtoPreconditions_CheckNotNull_TisRuntimeObject_mA0CD53540525DCF13BEC29E9E4504A5E69ED33A4_gshared)(___value0, ___name1, method);
}
// System.Boolean Unity.MLAgents.CommunicatorObjects.UnityRLInputProto::Equals(Unity.MLAgents.CommunicatorObjects.UnityRLInputProto)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityRLInputProto_Equals_m73EB68640AB463AC6478529140028E364EF4626E (UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0 * __this, UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0 * ___other0, const RuntimeMethod* method);
// Google.Protobuf.Collections.MapField`2<System.String,Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto> Unity.MLAgents.CommunicatorObjects.UnityRLInputProto::get_AgentActions()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MapField_2_tD148F5CFC6F243B4A02E983CBB129C24B8AB69FB * UnityRLInputProto_get_AgentActions_m2B50929E9C2A8D1D84B8ECD48F9466EE1F5318DE_inline (UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0 * __this, const RuntimeMethod* method);
// System.Boolean Google.Protobuf.Collections.MapField`2<System.String,Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto>::Equals(Google.Protobuf.Collections.MapField`2<!0,!1>)
inline bool MapField_2_Equals_mC3B206091190E75A93F5877D236503F12B475104 (MapField_2_tD148F5CFC6F243B4A02E983CBB129C24B8AB69FB * __this, MapField_2_tD148F5CFC6F243B4A02E983CBB129C24B8AB69FB * ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (MapField_2_tD148F5CFC6F243B4A02E983CBB129C24B8AB69FB *, MapField_2_tD148F5CFC6F243B4A02E983CBB129C24B8AB69FB *, const RuntimeMethod*))MapField_2_Equals_m5CE3AEBA26839EF5B372BF4B9DE43DEBAA94C357_gshared)(__this, ___other0, method);
}
// Unity.MLAgents.CommunicatorObjects.CommandProto Unity.MLAgents.CommunicatorObjects.UnityRLInputProto::get_Command()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t UnityRLInputProto_get_Command_m483721CC871CBE4BCCE4D0307B3F351DF0BD2C0F_inline (UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0 * __this, const RuntimeMethod* method);
// Google.Protobuf.ByteString Unity.MLAgents.CommunicatorObjects.UnityRLInputProto::get_SideChannel()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * UnityRLInputProto_get_SideChannel_m8EF684D10D1FE1DA52BC862C887DB32D3CF432D2_inline (UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0 * __this, const RuntimeMethod* method);
// System.Boolean Google.Protobuf.ByteString::op_Inequality(Google.Protobuf.ByteString,Google.Protobuf.ByteString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ByteString_op_Inequality_m8736472785083AF8213A7826893C4CEDCF207E35 (ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * ___lhs0, ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * ___rhs1, const RuntimeMethod* method);
// System.Boolean System.Object::Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_Equals_mD98CD6D19C28ADC48B8468F78F94D38E203D0521 (RuntimeObject * ___objA0, RuntimeObject * ___objB1, const RuntimeMethod* method);
// System.Int32 System.Int32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m245C424ECE351E5FE3277A88EEB02132DAB8C25A (int32_t* __this, const RuntimeMethod* method);
// System.Int32 Google.Protobuf.ByteString::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ByteString_get_Length_m1A3DD7629A6447C147E6CEC801C234F45CC27ACB (ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * __this, const RuntimeMethod* method);
// System.String Google.Protobuf.JsonFormatter::ToDiagnosticString(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonFormatter_ToDiagnosticString_m035CD03C07A6C01C8124FB391CA2498527CF6511 (RuntimeObject* ___message0, const RuntimeMethod* method);
// System.Void Google.Protobuf.Collections.MapField`2<System.String,Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto>::WriteTo(Google.Protobuf.CodedOutputStream,Google.Protobuf.Collections.MapField`2/Codec<!0,!1>)
inline void MapField_2_WriteTo_m6B2CB362A1E4066C903B27BE64EC60B6574152DE (MapField_2_tD148F5CFC6F243B4A02E983CBB129C24B8AB69FB * __this, CodedOutputStream_tEDA55D3B33B67A94D65BA47D099A2710F29AEDCA * ___output0, Codec_tE5E96F1D701ECCAAC649B5851698F7B1956637AE * ___codec1, const RuntimeMethod* method)
{
	((  void (*) (MapField_2_tD148F5CFC6F243B4A02E983CBB129C24B8AB69FB *, CodedOutputStream_tEDA55D3B33B67A94D65BA47D099A2710F29AEDCA *, Codec_tE5E96F1D701ECCAAC649B5851698F7B1956637AE *, const RuntimeMethod*))MapField_2_WriteTo_m3C8732144FC9A5FCE8AE977E942C49A798C7510C_gshared)(__this, ___output0, ___codec1, method);
}
// System.Void Google.Protobuf.CodedOutputStream::WriteRawTag(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedOutputStream_WriteRawTag_mE305FE9040396876AE1C1F5C114B63D5804F4C7D (CodedOutputStream_tEDA55D3B33B67A94D65BA47D099A2710F29AEDCA * __this, uint8_t ___b10, const RuntimeMethod* method);
// System.Void Google.Protobuf.CodedOutputStream::WriteEnum(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedOutputStream_WriteEnum_m69D8A98141B00C8A95E6364C0048E4501ACCB5D7 (CodedOutputStream_tEDA55D3B33B67A94D65BA47D099A2710F29AEDCA * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Google.Protobuf.CodedOutputStream::WriteBytes(Google.Protobuf.ByteString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CodedOutputStream_WriteBytes_m456DDC2D84DEC5B919905E0FA19C12FCBC3AC49B (CodedOutputStream_tEDA55D3B33B67A94D65BA47D099A2710F29AEDCA * __this, ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * ___value0, const RuntimeMethod* method);
// System.Void Google.Protobuf.UnknownFieldSet::WriteTo(Google.Protobuf.CodedOutputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnknownFieldSet_WriteTo_m3424C9BA71D0B5D7FAAE9E036273F95F49C89B3C (UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * __this, CodedOutputStream_tEDA55D3B33B67A94D65BA47D099A2710F29AEDCA * ___output0, const RuntimeMethod* method);
// System.Int32 Google.Protobuf.Collections.MapField`2<System.String,Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto>::CalculateSize(Google.Protobuf.Collections.MapField`2/Codec<!0,!1>)
inline int32_t MapField_2_CalculateSize_mE43C4244D0D0B9EDF47EBAEF3D6EC559A6158EBE (MapField_2_tD148F5CFC6F243B4A02E983CBB129C24B8AB69FB * __this, Codec_tE5E96F1D701ECCAAC649B5851698F7B1956637AE * ___codec0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (MapField_2_tD148F5CFC6F243B4A02E983CBB129C24B8AB69FB *, Codec_tE5E96F1D701ECCAAC649B5851698F7B1956637AE *, const RuntimeMethod*))MapField_2_CalculateSize_mEF20ADC7534F088CD4A3AA29196F10C0F21FDA96_gshared)(__this, ___codec0, method);
}
// System.Int32 Google.Protobuf.CodedOutputStream::ComputeEnumSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodedOutputStream_ComputeEnumSize_m55BF0C21DDF66F5667BAECDE756F8686B16DD70D (int32_t ___value0, const RuntimeMethod* method);
// System.Int32 Google.Protobuf.CodedOutputStream::ComputeBytesSize(Google.Protobuf.ByteString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodedOutputStream_ComputeBytesSize_m72116563ED4B522D3C9881109303561D5409C3F8 (ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * ___value0, const RuntimeMethod* method);
// System.Int32 Google.Protobuf.UnknownFieldSet::CalculateSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnknownFieldSet_CalculateSize_mA7C6692435A234A3099B04DB0D0E4290648EB03D (UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * __this, const RuntimeMethod* method);
// System.Void Google.Protobuf.Collections.MapField`2<System.String,Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto>::Add(System.Collections.Generic.IDictionary`2<!0,!1>)
inline void MapField_2_Add_m669A27F921808318426FDF685A33C6FEBC4E7982 (MapField_2_tD148F5CFC6F243B4A02E983CBB129C24B8AB69FB * __this, RuntimeObject* ___entries0, const RuntimeMethod* method)
{
	((  void (*) (MapField_2_tD148F5CFC6F243B4A02E983CBB129C24B8AB69FB *, RuntimeObject*, const RuntimeMethod*))MapField_2_Add_m9E9FC25F2CA83999C08CEAA9FB0524CE0C2C5A3F_gshared)(__this, ___entries0, method);
}
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLInputProto::set_Command(Unity.MLAgents.CommunicatorObjects.CommandProto)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void UnityRLInputProto_set_Command_m1B268715F7AF2B8FCE0AFAEF7641ACC6D008CCC1_inline (UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLInputProto::set_SideChannel(Google.Protobuf.ByteString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityRLInputProto_set_SideChannel_mE5D873FE1F0C657037EC7FF846B099A1815481D0 (UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0 * __this, ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * ___value0, const RuntimeMethod* method);
// Google.Protobuf.UnknownFieldSet Google.Protobuf.UnknownFieldSet::MergeFrom(Google.Protobuf.UnknownFieldSet,Google.Protobuf.UnknownFieldSet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * UnknownFieldSet_MergeFrom_mFC2B2A3949FABEBE37E6966AA39462D221D53B75 (UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * ___unknownFields0, UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * ___other1, const RuntimeMethod* method);
// Google.Protobuf.UnknownFieldSet Google.Protobuf.UnknownFieldSet::MergeFieldFrom(Google.Protobuf.UnknownFieldSet,Google.Protobuf.CodedInputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * UnknownFieldSet_MergeFieldFrom_m85004DAA185E6DBC8B7AABE34A8D61730D38EE51 (UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * ___unknownFields0, CodedInputStream_t90AE13DCCB9A5F6C02B698E7EDC3E79A5F585C24 * ___input1, const RuntimeMethod* method);
// System.Void Google.Protobuf.Collections.MapField`2<System.String,Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto>::AddEntriesFrom(Google.Protobuf.CodedInputStream,Google.Protobuf.Collections.MapField`2/Codec<!0,!1>)
inline void MapField_2_AddEntriesFrom_m447F2DEAE53F2BD2ABAAEAC6602DBA491CA8CF4C (MapField_2_tD148F5CFC6F243B4A02E983CBB129C24B8AB69FB * __this, CodedInputStream_t90AE13DCCB9A5F6C02B698E7EDC3E79A5F585C24 * ___input0, Codec_tE5E96F1D701ECCAAC649B5851698F7B1956637AE * ___codec1, const RuntimeMethod* method)
{
	((  void (*) (MapField_2_tD148F5CFC6F243B4A02E983CBB129C24B8AB69FB *, CodedInputStream_t90AE13DCCB9A5F6C02B698E7EDC3E79A5F585C24 *, Codec_tE5E96F1D701ECCAAC649B5851698F7B1956637AE *, const RuntimeMethod*))MapField_2_AddEntriesFrom_mC8794D6CA631E1DFD700E3996AD1E6062320F690_gshared)(__this, ___input0, ___codec1, method);
}
// System.Int32 Google.Protobuf.CodedInputStream::ReadEnum()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CodedInputStream_ReadEnum_mC0EF09EDE504E8E1917B60BC6729DE8D0F387D9A (CodedInputStream_t90AE13DCCB9A5F6C02B698E7EDC3E79A5F585C24 * __this, const RuntimeMethod* method);
// Google.Protobuf.ByteString Google.Protobuf.CodedInputStream::ReadBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * CodedInputStream_ReadBytes_mADEAEDDAE3A4B3E07099D9BFA9C391A7DDB97876 (CodedInputStream_t90AE13DCCB9A5F6C02B698E7EDC3E79A5F585C24 * __this, const RuntimeMethod* method);
// System.UInt32 Google.Protobuf.CodedInputStream::ReadTag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CodedInputStream_ReadTag_m6FFC6CE4BC783735866EBFC3CC95E769206A9EFB (CodedInputStream_t90AE13DCCB9A5F6C02B698E7EDC3E79A5F585C24 * __this, const RuntimeMethod* method);
// System.Void System.Func`1<Unity.MLAgents.CommunicatorObjects.UnityRLInputProto>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m0281DBAD7E0979A751FAA7D8D821D3962FE475F2 (Func_1_t288173BF3A6E883F68A0606FEF98AF1788CD8382 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t288173BF3A6E883F68A0606FEF98AF1788CD8382 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_mE02699FC76D830943069F8FC19D16C3B72A98A1F_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Google.Protobuf.MessageParser`1<Unity.MLAgents.CommunicatorObjects.UnityRLInputProto>::.ctor(System.Func`1<!0>)
inline void MessageParser_1__ctor_mA3299A4144E132FA2B2C8AA31B0B883927E928CB (MessageParser_1_t76C3D8CC3698E2678107C9AB953C0ED781186CFC * __this, Func_1_t288173BF3A6E883F68A0606FEF98AF1788CD8382 * ___factory0, const RuntimeMethod* method)
{
	((  void (*) (MessageParser_1_t76C3D8CC3698E2678107C9AB953C0ED781186CFC *, Func_1_t288173BF3A6E883F68A0606FEF98AF1788CD8382 *, const RuntimeMethod*))MessageParser_1__ctor_mF5F303449FFE6BC2F426A29B63BD20A926581F6D_gshared)(__this, ___factory0, method);
}
// Google.Protobuf.FieldCodec`1<System.String> Google.Protobuf.FieldCodec::ForString(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldCodec_1_t156034F6D44891148E8D3C98BCDB5672D2CE4A29 * FieldCodec_ForString_m06E3BA3C951B030A6D4A40A53B8901A01B5FF436 (uint32_t ___tag0, const RuntimeMethod* method);
// Google.Protobuf.MessageParser`1<Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto> Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto::get_Parser()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MessageParser_1_t5420BF51729BDB4FBC6434906782CFC4FE81F541 * ListAgentActionProto_get_Parser_m440581130B48C05D80C94FA05729A12903CD7323_inline (const RuntimeMethod* method);
// Google.Protobuf.FieldCodec`1<!!0> Google.Protobuf.FieldCodec::ForMessage<Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto>(System.UInt32,Google.Protobuf.MessageParser`1<!!0>)
inline FieldCodec_1_tB768A791704F24E2C2B5A284921F7D1D808778F5 * FieldCodec_ForMessage_TisListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925_m1374C9F39F5EA970B850F3DD9930543B992C70AB (uint32_t ___tag0, MessageParser_1_t5420BF51729BDB4FBC6434906782CFC4FE81F541 * ___parser1, const RuntimeMethod* method)
{
	return ((  FieldCodec_1_tB768A791704F24E2C2B5A284921F7D1D808778F5 * (*) (uint32_t, MessageParser_1_t5420BF51729BDB4FBC6434906782CFC4FE81F541 *, const RuntimeMethod*))FieldCodec_ForMessage_TisRuntimeObject_mAC761BC8E63325AAC0FCC99F85C2444EABC7A400_gshared)(___tag0, ___parser1, method);
}
// System.Void Google.Protobuf.Collections.MapField`2/Codec<System.String,Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto>::.ctor(Google.Protobuf.FieldCodec`1<!0>,Google.Protobuf.FieldCodec`1<!1>,System.UInt32)
inline void Codec__ctor_m41A7BA1870CCEEC74EC9F230514F40876A72C2A7 (Codec_tE5E96F1D701ECCAAC649B5851698F7B1956637AE * __this, FieldCodec_1_t156034F6D44891148E8D3C98BCDB5672D2CE4A29 * ___keyCodec0, FieldCodec_1_tB768A791704F24E2C2B5A284921F7D1D808778F5 * ___valueCodec1, uint32_t ___mapTag2, const RuntimeMethod* method)
{
	((  void (*) (Codec_tE5E96F1D701ECCAAC649B5851698F7B1956637AE *, FieldCodec_1_t156034F6D44891148E8D3C98BCDB5672D2CE4A29 *, FieldCodec_1_tB768A791704F24E2C2B5A284921F7D1D808778F5 *, uint32_t, const RuntimeMethod*))Codec__ctor_m1A413AEC8B607011A1B9E4D1AAD980A5D1672199_gshared)(__this, ___keyCodec0, ___valueCodec1, ___mapTag2, method);
}
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mDBBBC8537C4A130EFF691C1C9155E99059A70CB2 (U3CU3Ec_t8C8913C1ED402AE5A22F45AEFE071BC747C307F9 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor> Google.Protobuf.Reflection.MessageDescriptor::get_NestedTypes()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* MessageDescriptor_get_NestedTypes_m6C005AD1BD430E30D7A2C808A761C5ED5CCC8D47_inline (MessageDescriptor_t66BFACC1855F8CF3B4F0FB366C773ECDCBE900CB * __this, const RuntimeMethod* method);
// Google.Protobuf.Reflection.MessageDescriptor Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_t66BFACC1855F8CF3B4F0FB366C773ECDCBE900CB * ListAgentActionProto_get_Descriptor_m2293C1E921EEF4161A80A4B77D193CF0DC603E87 (const RuntimeMethod* method);
// System.Void Google.Protobuf.Collections.RepeatedField`1<Unity.MLAgents.CommunicatorObjects.AgentActionProto>::.ctor()
inline void RepeatedField_1__ctor_mA63362A207829C1E8E2DE110D8164F194CA0ADFA (RepeatedField_1_t5CED0C9D40D73B800EBF4F7240C943DC34F268E5 * __this, const RuntimeMethod* method)
{
	((  void (*) (RepeatedField_1_t5CED0C9D40D73B800EBF4F7240C943DC34F268E5 *, const RuntimeMethod*))RepeatedField_1__ctor_m57E4E0FBBF9056756A74DB0F8755F8273AD1009D_gshared)(__this, method);
}
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListAgentActionProto__ctor_m577112C3CC583F8E8EEA5F2AE136DB379882B793 (ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925 * __this, const RuntimeMethod* method);
// Google.Protobuf.Collections.RepeatedField`1<!0> Google.Protobuf.Collections.RepeatedField`1<Unity.MLAgents.CommunicatorObjects.AgentActionProto>::Clone()
inline RepeatedField_1_t5CED0C9D40D73B800EBF4F7240C943DC34F268E5 * RepeatedField_1_Clone_mC893063613A994FF943AA4E9DC858EBBCBC7A626 (RepeatedField_1_t5CED0C9D40D73B800EBF4F7240C943DC34F268E5 * __this, const RuntimeMethod* method)
{
	return ((  RepeatedField_1_t5CED0C9D40D73B800EBF4F7240C943DC34F268E5 * (*) (RepeatedField_1_t5CED0C9D40D73B800EBF4F7240C943DC34F268E5 *, const RuntimeMethod*))RepeatedField_1_Clone_m3CAADB88442F6138B91A40522A6E6497346602E2_gshared)(__this, method);
}
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto::.ctor(Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListAgentActionProto__ctor_mF20505EA160904391D3075545F981A4FFC09F8D2 (ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925 * __this, ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925 * ___other0, const RuntimeMethod* method);
// System.Boolean Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto::Equals(Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ListAgentActionProto_Equals_m9E334A77C8096E732D25BF3A52E37910EA40A752 (ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925 * __this, ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925 * ___other0, const RuntimeMethod* method);
// System.Boolean Google.Protobuf.Collections.RepeatedField`1<Unity.MLAgents.CommunicatorObjects.AgentActionProto>::Equals(Google.Protobuf.Collections.RepeatedField`1<!0>)
inline bool RepeatedField_1_Equals_m189F4DE6DCFB38E8574B5BEE5308679F16D67D56 (RepeatedField_1_t5CED0C9D40D73B800EBF4F7240C943DC34F268E5 * __this, RepeatedField_1_t5CED0C9D40D73B800EBF4F7240C943DC34F268E5 * ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (RepeatedField_1_t5CED0C9D40D73B800EBF4F7240C943DC34F268E5 *, RepeatedField_1_t5CED0C9D40D73B800EBF4F7240C943DC34F268E5 *, const RuntimeMethod*))RepeatedField_1_Equals_m1416149BD0101BD11752422227479B5956E2809C_gshared)(__this, ___other0, method);
}
// System.Void Google.Protobuf.Collections.RepeatedField`1<Unity.MLAgents.CommunicatorObjects.AgentActionProto>::WriteTo(Google.Protobuf.CodedOutputStream,Google.Protobuf.FieldCodec`1<!0>)
inline void RepeatedField_1_WriteTo_m8A932298668C92A8100ED9EF954DEEBE4B1567A8 (RepeatedField_1_t5CED0C9D40D73B800EBF4F7240C943DC34F268E5 * __this, CodedOutputStream_tEDA55D3B33B67A94D65BA47D099A2710F29AEDCA * ___output0, FieldCodec_1_t81FE647280EF3EFB39888CEE098EFFFABD0EB887 * ___codec1, const RuntimeMethod* method)
{
	((  void (*) (RepeatedField_1_t5CED0C9D40D73B800EBF4F7240C943DC34F268E5 *, CodedOutputStream_tEDA55D3B33B67A94D65BA47D099A2710F29AEDCA *, FieldCodec_1_t81FE647280EF3EFB39888CEE098EFFFABD0EB887 *, const RuntimeMethod*))RepeatedField_1_WriteTo_m7132BB8BB9002BD0557A8F12381E76E846FA03CD_gshared)(__this, ___output0, ___codec1, method);
}
// System.Int32 Google.Protobuf.Collections.RepeatedField`1<Unity.MLAgents.CommunicatorObjects.AgentActionProto>::CalculateSize(Google.Protobuf.FieldCodec`1<!0>)
inline int32_t RepeatedField_1_CalculateSize_mE680EF54C3805A0E7F2F9EC39B5C680295A8ADB9 (RepeatedField_1_t5CED0C9D40D73B800EBF4F7240C943DC34F268E5 * __this, FieldCodec_1_t81FE647280EF3EFB39888CEE098EFFFABD0EB887 * ___codec0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RepeatedField_1_t5CED0C9D40D73B800EBF4F7240C943DC34F268E5 *, FieldCodec_1_t81FE647280EF3EFB39888CEE098EFFFABD0EB887 *, const RuntimeMethod*))RepeatedField_1_CalculateSize_mB140759119D803BA8E7EDA547F37FE63385CF92E_gshared)(__this, ___codec0, method);
}
// System.Void Google.Protobuf.Collections.RepeatedField`1<Unity.MLAgents.CommunicatorObjects.AgentActionProto>::Add(System.Collections.Generic.IEnumerable`1<!0>)
inline void RepeatedField_1_Add_m186739FDCA88984BFAEF77B346C8534D3883125B (RepeatedField_1_t5CED0C9D40D73B800EBF4F7240C943DC34F268E5 * __this, RuntimeObject* ___values0, const RuntimeMethod* method)
{
	((  void (*) (RepeatedField_1_t5CED0C9D40D73B800EBF4F7240C943DC34F268E5 *, RuntimeObject*, const RuntimeMethod*))RepeatedField_1_Add_m654CEA5A8AFDDF632D51ABFACD88245C84723B71_gshared)(__this, ___values0, method);
}
// System.Void Google.Protobuf.Collections.RepeatedField`1<Unity.MLAgents.CommunicatorObjects.AgentActionProto>::AddEntriesFrom(Google.Protobuf.CodedInputStream,Google.Protobuf.FieldCodec`1<!0>)
inline void RepeatedField_1_AddEntriesFrom_m1BF8E3FCC7267C632B71AC102C5476DCB16911F5 (RepeatedField_1_t5CED0C9D40D73B800EBF4F7240C943DC34F268E5 * __this, CodedInputStream_t90AE13DCCB9A5F6C02B698E7EDC3E79A5F585C24 * ___input0, FieldCodec_1_t81FE647280EF3EFB39888CEE098EFFFABD0EB887 * ___codec1, const RuntimeMethod* method)
{
	((  void (*) (RepeatedField_1_t5CED0C9D40D73B800EBF4F7240C943DC34F268E5 *, CodedInputStream_t90AE13DCCB9A5F6C02B698E7EDC3E79A5F585C24 *, FieldCodec_1_t81FE647280EF3EFB39888CEE098EFFFABD0EB887 *, const RuntimeMethod*))RepeatedField_1_AddEntriesFrom_m549AA46ECB6228D59B08291D47CF3B0A90D1298E_gshared)(__this, ___input0, ___codec1, method);
}
// System.Void System.Func`1<Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m9C83F2EE34FD289A45A5050CE96657CB0D77594B (Func_1_t8BC331C95BEB4D5B22FA94D469CC99C18D998D55 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t8BC331C95BEB4D5B22FA94D469CC99C18D998D55 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_mE02699FC76D830943069F8FC19D16C3B72A98A1F_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Google.Protobuf.MessageParser`1<Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto>::.ctor(System.Func`1<!0>)
inline void MessageParser_1__ctor_m9A883C775696A30DEE6D8A0DE26C7B2CD58CBC99 (MessageParser_1_t5420BF51729BDB4FBC6434906782CFC4FE81F541 * __this, Func_1_t8BC331C95BEB4D5B22FA94D469CC99C18D998D55 * ___factory0, const RuntimeMethod* method)
{
	((  void (*) (MessageParser_1_t5420BF51729BDB4FBC6434906782CFC4FE81F541 *, Func_1_t8BC331C95BEB4D5B22FA94D469CC99C18D998D55 *, const RuntimeMethod*))MessageParser_1__ctor_mF5F303449FFE6BC2F426A29B63BD20A926581F6D_gshared)(__this, ___factory0, method);
}
// Google.Protobuf.MessageParser`1<Unity.MLAgents.CommunicatorObjects.AgentActionProto> Unity.MLAgents.CommunicatorObjects.AgentActionProto::get_Parser()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MessageParser_1_tDD093BAC6289A0E6913065203F01B017D3F705E2 * AgentActionProto_get_Parser_m6E35FBF409BF005A36D4538EBF5DE80B406E6224_inline (const RuntimeMethod* method);
// Google.Protobuf.FieldCodec`1<!!0> Google.Protobuf.FieldCodec::ForMessage<Unity.MLAgents.CommunicatorObjects.AgentActionProto>(System.UInt32,Google.Protobuf.MessageParser`1<!!0>)
inline FieldCodec_1_t81FE647280EF3EFB39888CEE098EFFFABD0EB887 * FieldCodec_ForMessage_TisAgentActionProto_tD039A9669DE32649580A51A04DC77145F5D748C9_mC2B80E3AF5B613D3856C12A9CCC1DA1CF5767B34 (uint32_t ___tag0, MessageParser_1_tDD093BAC6289A0E6913065203F01B017D3F705E2 * ___parser1, const RuntimeMethod* method)
{
	return ((  FieldCodec_1_t81FE647280EF3EFB39888CEE098EFFFABD0EB887 * (*) (uint32_t, MessageParser_1_tDD093BAC6289A0E6913065203F01B017D3F705E2 *, const RuntimeMethod*))FieldCodec_ForMessage_TisRuntimeObject_mAC761BC8E63325AAC0FCC99F85C2444EABC7A400_gshared)(___tag0, ___parser1, method);
}
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m49AA87959B32F7C5BC0F760BB2B64A7D52E88281 (U3CU3Ec_tE8A7A790398B36ED81CC520B108127AB5D297DBB * __this, const RuntimeMethod* method);
// Google.Protobuf.Reflection.FileDescriptor Unity.MLAgents.CommunicatorObjects.UnityRlOutputReflection::get_Descriptor()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * UnityRlOutputReflection_get_Descriptor_m5D75BACA3A8B729D44606FC38AA1B740E172A896_inline (const RuntimeMethod* method);
// Google.Protobuf.Reflection.MessageDescriptor Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_t66BFACC1855F8CF3B4F0FB366C773ECDCBE900CB * UnityRLOutputProto_get_Descriptor_mC405795B20ABAAD003497CBAF06B23A701A0D4FF (const RuntimeMethod* method);
// System.Void Google.Protobuf.Collections.MapField`2<System.String,Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto>::.ctor()
inline void MapField_2__ctor_mF5B726984F1EECCDEB836E8F8214D5B5DECAE02D (MapField_2_t8BA58C589830633C7DCCC6E650D623B9E1EDC681 * __this, const RuntimeMethod* method)
{
	((  void (*) (MapField_2_t8BA58C589830633C7DCCC6E650D623B9E1EDC681 *, const RuntimeMethod*))MapField_2__ctor_mCA086DEF4CD7AF6265081E1FCC2AA0615C4D95ED_gshared)(__this, method);
}
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityRLOutputProto__ctor_m866DD6AA97506ECA09BE39D6C76854E4EA72E0EA (UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7 * __this, const RuntimeMethod* method);
// Google.Protobuf.Collections.MapField`2<!0,!1> Google.Protobuf.Collections.MapField`2<System.String,Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto>::Clone()
inline MapField_2_t8BA58C589830633C7DCCC6E650D623B9E1EDC681 * MapField_2_Clone_mD41C18F3F74FC6B14AA01B5DC42D0E2BFE2D4521 (MapField_2_t8BA58C589830633C7DCCC6E650D623B9E1EDC681 * __this, const RuntimeMethod* method)
{
	return ((  MapField_2_t8BA58C589830633C7DCCC6E650D623B9E1EDC681 * (*) (MapField_2_t8BA58C589830633C7DCCC6E650D623B9E1EDC681 *, const RuntimeMethod*))MapField_2_Clone_m34D88E65C60E2CDA3587D1528119CF2BF97F05CB_gshared)(__this, method);
}
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto::.ctor(Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityRLOutputProto__ctor_m4E22E8F9227D78E68F6D383195CE90D09C0F9CA9 (UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7 * __this, UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7 * ___other0, const RuntimeMethod* method);
// System.Boolean Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto::Equals(Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityRLOutputProto_Equals_m53F9BC2C66A6EBD3518E23A449F7D54D71EC314A (UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7 * __this, UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7 * ___other0, const RuntimeMethod* method);
// Google.Protobuf.Collections.MapField`2<System.String,Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto> Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto::get_AgentInfos()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MapField_2_t8BA58C589830633C7DCCC6E650D623B9E1EDC681 * UnityRLOutputProto_get_AgentInfos_mAD6E4B1BB974BD9ED839643B02EBB7DD4C0084EE_inline (UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7 * __this, const RuntimeMethod* method);
// System.Boolean Google.Protobuf.Collections.MapField`2<System.String,Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto>::Equals(Google.Protobuf.Collections.MapField`2<!0,!1>)
inline bool MapField_2_Equals_m9C7E1B4BD5154A2C779C4C73687A26CC2877F5AA (MapField_2_t8BA58C589830633C7DCCC6E650D623B9E1EDC681 * __this, MapField_2_t8BA58C589830633C7DCCC6E650D623B9E1EDC681 * ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (MapField_2_t8BA58C589830633C7DCCC6E650D623B9E1EDC681 *, MapField_2_t8BA58C589830633C7DCCC6E650D623B9E1EDC681 *, const RuntimeMethod*))MapField_2_Equals_m5CE3AEBA26839EF5B372BF4B9DE43DEBAA94C357_gshared)(__this, ___other0, method);
}
// Google.Protobuf.ByteString Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto::get_SideChannel()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * UnityRLOutputProto_get_SideChannel_mE3853244B5B1C97B5FB4728E668B531BAED06990_inline (UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7 * __this, const RuntimeMethod* method);
// System.Void Google.Protobuf.Collections.MapField`2<System.String,Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto>::WriteTo(Google.Protobuf.CodedOutputStream,Google.Protobuf.Collections.MapField`2/Codec<!0,!1>)
inline void MapField_2_WriteTo_m15160657572F68D191943168BFF932A24E8ACE58 (MapField_2_t8BA58C589830633C7DCCC6E650D623B9E1EDC681 * __this, CodedOutputStream_tEDA55D3B33B67A94D65BA47D099A2710F29AEDCA * ___output0, Codec_t783AB5BD5C8C87BB04A840234E5A6E38B1991493 * ___codec1, const RuntimeMethod* method)
{
	((  void (*) (MapField_2_t8BA58C589830633C7DCCC6E650D623B9E1EDC681 *, CodedOutputStream_tEDA55D3B33B67A94D65BA47D099A2710F29AEDCA *, Codec_t783AB5BD5C8C87BB04A840234E5A6E38B1991493 *, const RuntimeMethod*))MapField_2_WriteTo_m3C8732144FC9A5FCE8AE977E942C49A798C7510C_gshared)(__this, ___output0, ___codec1, method);
}
// System.Int32 Google.Protobuf.Collections.MapField`2<System.String,Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto>::CalculateSize(Google.Protobuf.Collections.MapField`2/Codec<!0,!1>)
inline int32_t MapField_2_CalculateSize_m0DDA767F779A93987411993CFBF82DD1321F6739 (MapField_2_t8BA58C589830633C7DCCC6E650D623B9E1EDC681 * __this, Codec_t783AB5BD5C8C87BB04A840234E5A6E38B1991493 * ___codec0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (MapField_2_t8BA58C589830633C7DCCC6E650D623B9E1EDC681 *, Codec_t783AB5BD5C8C87BB04A840234E5A6E38B1991493 *, const RuntimeMethod*))MapField_2_CalculateSize_mEF20ADC7534F088CD4A3AA29196F10C0F21FDA96_gshared)(__this, ___codec0, method);
}
// System.Void Google.Protobuf.Collections.MapField`2<System.String,Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto>::Add(System.Collections.Generic.IDictionary`2<!0,!1>)
inline void MapField_2_Add_mC51509CEA2B3ED6DB971344958D2521EA174D672 (MapField_2_t8BA58C589830633C7DCCC6E650D623B9E1EDC681 * __this, RuntimeObject* ___entries0, const RuntimeMethod* method)
{
	((  void (*) (MapField_2_t8BA58C589830633C7DCCC6E650D623B9E1EDC681 *, RuntimeObject*, const RuntimeMethod*))MapField_2_Add_m9E9FC25F2CA83999C08CEAA9FB0524CE0C2C5A3F_gshared)(__this, ___entries0, method);
}
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto::set_SideChannel(Google.Protobuf.ByteString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityRLOutputProto_set_SideChannel_mA95C514E35E334FC8D5AB2138162C5A4CC8D1A63 (UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7 * __this, ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * ___value0, const RuntimeMethod* method);
// System.Void Google.Protobuf.Collections.MapField`2<System.String,Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto>::AddEntriesFrom(Google.Protobuf.CodedInputStream,Google.Protobuf.Collections.MapField`2/Codec<!0,!1>)
inline void MapField_2_AddEntriesFrom_mD2A342155482742418F8A76701E7012837F0443A (MapField_2_t8BA58C589830633C7DCCC6E650D623B9E1EDC681 * __this, CodedInputStream_t90AE13DCCB9A5F6C02B698E7EDC3E79A5F585C24 * ___input0, Codec_t783AB5BD5C8C87BB04A840234E5A6E38B1991493 * ___codec1, const RuntimeMethod* method)
{
	((  void (*) (MapField_2_t8BA58C589830633C7DCCC6E650D623B9E1EDC681 *, CodedInputStream_t90AE13DCCB9A5F6C02B698E7EDC3E79A5F585C24 *, Codec_t783AB5BD5C8C87BB04A840234E5A6E38B1991493 *, const RuntimeMethod*))MapField_2_AddEntriesFrom_mC8794D6CA631E1DFD700E3996AD1E6062320F690_gshared)(__this, ___input0, ___codec1, method);
}
// System.Void System.Func`1<Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m9D38EE1CA6A0069DBABF212B889CDD16B33E57A9 (Func_1_tDC2B2E30FB41913C53E3A196F871F8F1B2C5DEF9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tDC2B2E30FB41913C53E3A196F871F8F1B2C5DEF9 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_mE02699FC76D830943069F8FC19D16C3B72A98A1F_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Google.Protobuf.MessageParser`1<Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto>::.ctor(System.Func`1<!0>)
inline void MessageParser_1__ctor_mC2124E5CFE990D94DFBD3DE2204783B57411FA96 (MessageParser_1_t599AFE94D623A6084E4A6E9656D1DE8C69383948 * __this, Func_1_tDC2B2E30FB41913C53E3A196F871F8F1B2C5DEF9 * ___factory0, const RuntimeMethod* method)
{
	((  void (*) (MessageParser_1_t599AFE94D623A6084E4A6E9656D1DE8C69383948 *, Func_1_tDC2B2E30FB41913C53E3A196F871F8F1B2C5DEF9 *, const RuntimeMethod*))MessageParser_1__ctor_mF5F303449FFE6BC2F426A29B63BD20A926581F6D_gshared)(__this, ___factory0, method);
}
// Google.Protobuf.MessageParser`1<Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto> Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto::get_Parser()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MessageParser_1_tFCC153276983A237B272DFE38939C2203C07096E * ListAgentInfoProto_get_Parser_mE43947C6D53FF14A540E7E3DACA5E0BBBC395C18_inline (const RuntimeMethod* method);
// Google.Protobuf.FieldCodec`1<!!0> Google.Protobuf.FieldCodec::ForMessage<Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto>(System.UInt32,Google.Protobuf.MessageParser`1<!!0>)
inline FieldCodec_1_t28E6C8B6C890722CF301D6ADEA9FA22C442E2791 * FieldCodec_ForMessage_TisListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354_mE729CC0E7499CDC79E0FD180D39862F6915ECF01 (uint32_t ___tag0, MessageParser_1_tFCC153276983A237B272DFE38939C2203C07096E * ___parser1, const RuntimeMethod* method)
{
	return ((  FieldCodec_1_t28E6C8B6C890722CF301D6ADEA9FA22C442E2791 * (*) (uint32_t, MessageParser_1_tFCC153276983A237B272DFE38939C2203C07096E *, const RuntimeMethod*))FieldCodec_ForMessage_TisRuntimeObject_mAC761BC8E63325AAC0FCC99F85C2444EABC7A400_gshared)(___tag0, ___parser1, method);
}
// System.Void Google.Protobuf.Collections.MapField`2/Codec<System.String,Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto>::.ctor(Google.Protobuf.FieldCodec`1<!0>,Google.Protobuf.FieldCodec`1<!1>,System.UInt32)
inline void Codec__ctor_mD08C81168009A194678420B54C783D20A045F685 (Codec_t783AB5BD5C8C87BB04A840234E5A6E38B1991493 * __this, FieldCodec_1_t156034F6D44891148E8D3C98BCDB5672D2CE4A29 * ___keyCodec0, FieldCodec_1_t28E6C8B6C890722CF301D6ADEA9FA22C442E2791 * ___valueCodec1, uint32_t ___mapTag2, const RuntimeMethod* method)
{
	((  void (*) (Codec_t783AB5BD5C8C87BB04A840234E5A6E38B1991493 *, FieldCodec_1_t156034F6D44891148E8D3C98BCDB5672D2CE4A29 *, FieldCodec_1_t28E6C8B6C890722CF301D6ADEA9FA22C442E2791 *, uint32_t, const RuntimeMethod*))Codec__ctor_m1A413AEC8B607011A1B9E4D1AAD980A5D1672199_gshared)(__this, ___keyCodec0, ___valueCodec1, ___mapTag2, method);
}
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8C2B0DD37436C9FABF1BF1C4F5AA2DF60193C268 (U3CU3Ec_t1C9BDC2165F2217C8C45838436E89F90ABEC413C * __this, const RuntimeMethod* method);
// Google.Protobuf.Reflection.MessageDescriptor Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_t66BFACC1855F8CF3B4F0FB366C773ECDCBE900CB * ListAgentInfoProto_get_Descriptor_m13CE7EA88D9484F010D80B88D74DFB9CD6272021 (const RuntimeMethod* method);
// System.Void Google.Protobuf.Collections.RepeatedField`1<Unity.MLAgents.CommunicatorObjects.AgentInfoProto>::.ctor()
inline void RepeatedField_1__ctor_m114BFD1851942E9E40B55D20DBACB5ACB3B44834 (RepeatedField_1_tCF11F7126638E9C61AA512264FF6A708BACA9785 * __this, const RuntimeMethod* method)
{
	((  void (*) (RepeatedField_1_tCF11F7126638E9C61AA512264FF6A708BACA9785 *, const RuntimeMethod*))RepeatedField_1__ctor_m57E4E0FBBF9056756A74DB0F8755F8273AD1009D_gshared)(__this, method);
}
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListAgentInfoProto__ctor_mCBAB94463AA37F83FB31A6AAB3DB873054BD5843 (ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354 * __this, const RuntimeMethod* method);
// Google.Protobuf.Collections.RepeatedField`1<!0> Google.Protobuf.Collections.RepeatedField`1<Unity.MLAgents.CommunicatorObjects.AgentInfoProto>::Clone()
inline RepeatedField_1_tCF11F7126638E9C61AA512264FF6A708BACA9785 * RepeatedField_1_Clone_m1F102FCCEFA88998A34BD42E3AEE78F669A05DD0 (RepeatedField_1_tCF11F7126638E9C61AA512264FF6A708BACA9785 * __this, const RuntimeMethod* method)
{
	return ((  RepeatedField_1_tCF11F7126638E9C61AA512264FF6A708BACA9785 * (*) (RepeatedField_1_tCF11F7126638E9C61AA512264FF6A708BACA9785 *, const RuntimeMethod*))RepeatedField_1_Clone_m3CAADB88442F6138B91A40522A6E6497346602E2_gshared)(__this, method);
}
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto::.ctor(Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListAgentInfoProto__ctor_m082350D1408AEC06590A38EC0B72A4D59DB8D0B2 (ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354 * __this, ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354 * ___other0, const RuntimeMethod* method);
// System.Boolean Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto::Equals(Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ListAgentInfoProto_Equals_m6810C439789F423BB0749E7935195DC87004D7AA (ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354 * __this, ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354 * ___other0, const RuntimeMethod* method);
// System.Boolean Google.Protobuf.Collections.RepeatedField`1<Unity.MLAgents.CommunicatorObjects.AgentInfoProto>::Equals(Google.Protobuf.Collections.RepeatedField`1<!0>)
inline bool RepeatedField_1_Equals_m8944DD0E59BA6DBE56DFCBE09A0D188A888BB233 (RepeatedField_1_tCF11F7126638E9C61AA512264FF6A708BACA9785 * __this, RepeatedField_1_tCF11F7126638E9C61AA512264FF6A708BACA9785 * ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (RepeatedField_1_tCF11F7126638E9C61AA512264FF6A708BACA9785 *, RepeatedField_1_tCF11F7126638E9C61AA512264FF6A708BACA9785 *, const RuntimeMethod*))RepeatedField_1_Equals_m1416149BD0101BD11752422227479B5956E2809C_gshared)(__this, ___other0, method);
}
// System.Void Google.Protobuf.Collections.RepeatedField`1<Unity.MLAgents.CommunicatorObjects.AgentInfoProto>::WriteTo(Google.Protobuf.CodedOutputStream,Google.Protobuf.FieldCodec`1<!0>)
inline void RepeatedField_1_WriteTo_mA2C3B90B90E724DD48D1D8013644F7279D267112 (RepeatedField_1_tCF11F7126638E9C61AA512264FF6A708BACA9785 * __this, CodedOutputStream_tEDA55D3B33B67A94D65BA47D099A2710F29AEDCA * ___output0, FieldCodec_1_tCA7C1F70281CCD6EEAB215F57EF24B5E6CFCC629 * ___codec1, const RuntimeMethod* method)
{
	((  void (*) (RepeatedField_1_tCF11F7126638E9C61AA512264FF6A708BACA9785 *, CodedOutputStream_tEDA55D3B33B67A94D65BA47D099A2710F29AEDCA *, FieldCodec_1_tCA7C1F70281CCD6EEAB215F57EF24B5E6CFCC629 *, const RuntimeMethod*))RepeatedField_1_WriteTo_m7132BB8BB9002BD0557A8F12381E76E846FA03CD_gshared)(__this, ___output0, ___codec1, method);
}
// System.Int32 Google.Protobuf.Collections.RepeatedField`1<Unity.MLAgents.CommunicatorObjects.AgentInfoProto>::CalculateSize(Google.Protobuf.FieldCodec`1<!0>)
inline int32_t RepeatedField_1_CalculateSize_m740D6E3E74F9A83F042CB85126FE964D01B25B15 (RepeatedField_1_tCF11F7126638E9C61AA512264FF6A708BACA9785 * __this, FieldCodec_1_tCA7C1F70281CCD6EEAB215F57EF24B5E6CFCC629 * ___codec0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RepeatedField_1_tCF11F7126638E9C61AA512264FF6A708BACA9785 *, FieldCodec_1_tCA7C1F70281CCD6EEAB215F57EF24B5E6CFCC629 *, const RuntimeMethod*))RepeatedField_1_CalculateSize_mB140759119D803BA8E7EDA547F37FE63385CF92E_gshared)(__this, ___codec0, method);
}
// System.Void Google.Protobuf.Collections.RepeatedField`1<Unity.MLAgents.CommunicatorObjects.AgentInfoProto>::Add(System.Collections.Generic.IEnumerable`1<!0>)
inline void RepeatedField_1_Add_m9DE5A811ECBC3D2EAD811F678BA8BC20585E1DE8 (RepeatedField_1_tCF11F7126638E9C61AA512264FF6A708BACA9785 * __this, RuntimeObject* ___values0, const RuntimeMethod* method)
{
	((  void (*) (RepeatedField_1_tCF11F7126638E9C61AA512264FF6A708BACA9785 *, RuntimeObject*, const RuntimeMethod*))RepeatedField_1_Add_m654CEA5A8AFDDF632D51ABFACD88245C84723B71_gshared)(__this, ___values0, method);
}
// System.Void Google.Protobuf.Collections.RepeatedField`1<Unity.MLAgents.CommunicatorObjects.AgentInfoProto>::AddEntriesFrom(Google.Protobuf.CodedInputStream,Google.Protobuf.FieldCodec`1<!0>)
inline void RepeatedField_1_AddEntriesFrom_m6C8F8634E6CA4B4EF88251F60497D41213D405C1 (RepeatedField_1_tCF11F7126638E9C61AA512264FF6A708BACA9785 * __this, CodedInputStream_t90AE13DCCB9A5F6C02B698E7EDC3E79A5F585C24 * ___input0, FieldCodec_1_tCA7C1F70281CCD6EEAB215F57EF24B5E6CFCC629 * ___codec1, const RuntimeMethod* method)
{
	((  void (*) (RepeatedField_1_tCF11F7126638E9C61AA512264FF6A708BACA9785 *, CodedInputStream_t90AE13DCCB9A5F6C02B698E7EDC3E79A5F585C24 *, FieldCodec_1_tCA7C1F70281CCD6EEAB215F57EF24B5E6CFCC629 *, const RuntimeMethod*))RepeatedField_1_AddEntriesFrom_m549AA46ECB6228D59B08291D47CF3B0A90D1298E_gshared)(__this, ___input0, ___codec1, method);
}
// System.Void System.Func`1<Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m9A73F7A2589030305E13F6EC1E7883F80ED9030F (Func_1_tF822C61A09E63838B55573EB289FC36FBF1F7DFF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tF822C61A09E63838B55573EB289FC36FBF1F7DFF *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_mE02699FC76D830943069F8FC19D16C3B72A98A1F_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Google.Protobuf.MessageParser`1<Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto>::.ctor(System.Func`1<!0>)
inline void MessageParser_1__ctor_m9D6428DC4A296A9762D4D8D652723C7880410F5E (MessageParser_1_tFCC153276983A237B272DFE38939C2203C07096E * __this, Func_1_tF822C61A09E63838B55573EB289FC36FBF1F7DFF * ___factory0, const RuntimeMethod* method)
{
	((  void (*) (MessageParser_1_tFCC153276983A237B272DFE38939C2203C07096E *, Func_1_tF822C61A09E63838B55573EB289FC36FBF1F7DFF *, const RuntimeMethod*))MessageParser_1__ctor_mF5F303449FFE6BC2F426A29B63BD20A926581F6D_gshared)(__this, ___factory0, method);
}
// Google.Protobuf.MessageParser`1<Unity.MLAgents.CommunicatorObjects.AgentInfoProto> Unity.MLAgents.CommunicatorObjects.AgentInfoProto::get_Parser()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MessageParser_1_t22E2BEA51C2B5AD6B1005D5F6AD497277762E2CE * AgentInfoProto_get_Parser_mD32C2989338F0DB9DB3017716FEAFEE008D1682C_inline (const RuntimeMethod* method);
// Google.Protobuf.FieldCodec`1<!!0> Google.Protobuf.FieldCodec::ForMessage<Unity.MLAgents.CommunicatorObjects.AgentInfoProto>(System.UInt32,Google.Protobuf.MessageParser`1<!!0>)
inline FieldCodec_1_tCA7C1F70281CCD6EEAB215F57EF24B5E6CFCC629 * FieldCodec_ForMessage_TisAgentInfoProto_tB07CB4D6C9A6367975913C1581FAA29FDB4FF5B0_m15E459C5F286D035E858CD73F9EA87506E2C9842 (uint32_t ___tag0, MessageParser_1_t22E2BEA51C2B5AD6B1005D5F6AD497277762E2CE * ___parser1, const RuntimeMethod* method)
{
	return ((  FieldCodec_1_tCA7C1F70281CCD6EEAB215F57EF24B5E6CFCC629 * (*) (uint32_t, MessageParser_1_t22E2BEA51C2B5AD6B1005D5F6AD497277762E2CE *, const RuntimeMethod*))FieldCodec_ForMessage_TisRuntimeObject_mAC761BC8E63325AAC0FCC99F85C2444EABC7A400_gshared)(___tag0, ___parser1, method);
}
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8327D1F2656994D840DDEE2DB2485FE4326C8F2E (U3CU3Ec_tBA763BFD8BA8427B116C9861173A6C8BE5876A30 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___values0, const RuntimeMethod* method);
// System.Byte[] System.Convert::FromBase64String(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* Convert_FromBase64String_m079F788D000703E8018DA39BE9C05F1CBF60B156 (String_t* ___s0, const RuntimeMethod* method);
// Google.Protobuf.Reflection.FileDescriptor Unity.MLAgents.CommunicatorObjects.CapabilitiesReflection::get_Descriptor()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * CapabilitiesReflection_get_Descriptor_m6543ED9CF60EA4CA4AB51C90E83144680F7E00DA_inline (const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// Google.Protobuf.MessageParser`1<Unity.MLAgents.CommunicatorObjects.UnityRLInitializationInputProto> Unity.MLAgents.CommunicatorObjects.UnityRLInitializationInputProto::get_Parser()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MessageParser_1_t282425D3E3A384629DB8B5E5A41C1299DA1FF2FE * UnityRLInitializationInputProto_get_Parser_m3A3426B1DDCAC0F07CE62541788DDC4892165D03_inline (const RuntimeMethod* method);
// System.Void Google.Protobuf.Reflection.GeneratedClrTypeInfo::.ctor(System.Type,Google.Protobuf.MessageParser,System.String[],System.String[],System.Type[],Google.Protobuf.Reflection.GeneratedClrTypeInfo[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedClrTypeInfo__ctor_m061BADACE7D5089AA0B7645AC47F0D35C3907EB9 (GeneratedClrTypeInfo_tF2F0DF2AAEC92C81106422AB98D931414053DE97 * __this, Type_t * ___clrType0, MessageParser_t194BE39F7FDA7A23C5A94D642095A044763C8FAD * ___parser1, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___propertyNames2, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___oneofNames3, TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___nestedEnums4, GeneratedClrTypeInfoU5BU5D_t38490948FF5D4B2D4E8557D1209161FDA3B07C87* ___nestedTypes5, const RuntimeMethod* method);
// System.Void Google.Protobuf.Reflection.GeneratedClrTypeInfo::.ctor(System.Type[],Google.Protobuf.Reflection.GeneratedClrTypeInfo[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneratedClrTypeInfo__ctor_mA5CF3615FAD8D655D18273D2F76EDD82CE1BA52D (GeneratedClrTypeInfo_tF2F0DF2AAEC92C81106422AB98D931414053DE97 * __this, TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___nestedEnums0, GeneratedClrTypeInfoU5BU5D_t38490948FF5D4B2D4E8557D1209161FDA3B07C87* ___nestedTypes1, const RuntimeMethod* method);
// Google.Protobuf.Reflection.FileDescriptor Google.Protobuf.Reflection.FileDescriptor::FromGeneratedCode(System.Byte[],Google.Protobuf.Reflection.FileDescriptor[],Google.Protobuf.Reflection.GeneratedClrTypeInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * FileDescriptor_FromGeneratedCode_m56776884BBFE977064E87AD91F33ED221E2D6461 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___descriptorData0, FileDescriptorU5BU5D_t91F2611AD4922B7697DBD2C6C8627C68AE7B2D4B* ___dependencies1, GeneratedClrTypeInfo_tF2F0DF2AAEC92C81106422AB98D931414053DE97 * ___generatedCodeInfo2, const RuntimeMethod* method);
// Google.Protobuf.Reflection.FileDescriptor Unity.MLAgents.CommunicatorObjects.BrainParametersReflection::get_Descriptor()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * BrainParametersReflection_get_Descriptor_m09FF522C12CBC8AF443ADCD7A6734794625DC100_inline (const RuntimeMethod* method);
// Google.Protobuf.MessageParser`1<Unity.MLAgents.CommunicatorObjects.UnityRLInitializationOutputProto> Unity.MLAgents.CommunicatorObjects.UnityRLInitializationOutputProto::get_Parser()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MessageParser_1_t11F6130B5701C9992E0A73F4900A7816D14A3319 * UnityRLInitializationOutputProto_get_Parser_m533687B973C280208A545011301356FA924E98DE_inline (const RuntimeMethod* method);
// Google.Protobuf.Reflection.FileDescriptor Unity.MLAgents.CommunicatorObjects.AgentActionReflection::get_Descriptor()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * AgentActionReflection_get_Descriptor_m52778BBF06149132FC6DB827B18CC0D73FC6A642_inline (const RuntimeMethod* method);
// Google.Protobuf.Reflection.FileDescriptor Unity.MLAgents.CommunicatorObjects.CommandReflection::get_Descriptor()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * CommandReflection_get_Descriptor_mB7605DDFA54D2848FD1A124CB983FBD89583B887_inline (const RuntimeMethod* method);
// Google.Protobuf.MessageParser`1<Unity.MLAgents.CommunicatorObjects.UnityRLInputProto> Unity.MLAgents.CommunicatorObjects.UnityRLInputProto::get_Parser()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MessageParser_1_t76C3D8CC3698E2678107C9AB953C0ED781186CFC * UnityRLInputProto_get_Parser_m732A203B6A457C70EBD2223BB5DF31E1E22250EE_inline (const RuntimeMethod* method);
// Google.Protobuf.Reflection.FileDescriptor Unity.MLAgents.CommunicatorObjects.AgentInfoReflection::get_Descriptor()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * AgentInfoReflection_get_Descriptor_m53079D2FBD62E6DB563670E10BF9C184A70048C1_inline (const RuntimeMethod* method);
// Google.Protobuf.MessageParser`1<Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto> Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto::get_Parser()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MessageParser_1_t599AFE94D623A6084E4A6E9656D1DE8C69383948 * UnityRLOutputProto_get_Parser_m3082F856637D0BCCE8432273D0F9A43C2D6BDBF5_inline (const RuntimeMethod* method);
// System.Void System.Func`2<Unity.MLAgents.CommunicatorObjects.UnityMessageProto,System.Byte[]>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mF01B96E9D48EF51CC36C0FE07E39E3B4EB8401E9 (Func_2_tD5F010B2FE5FD8A131A1E87650D1ACFDEB9DFA81 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tD5F010B2FE5FD8A131A1E87650D1ACFDEB9DFA81 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mE2AF7615AD18E9CD92B1909285F5EC5DA8D180C8_gshared)(__this, ___object0, ___method1, method);
}
// Google.Protobuf.MessageParser`1<Unity.MLAgents.CommunicatorObjects.UnityMessageProto> Unity.MLAgents.CommunicatorObjects.UnityMessageProto::get_Parser()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MessageParser_1_t352DB8B114FB0010B1737343561DB051851EA4F7 * UnityMessageProto_get_Parser_m58AD0E729F7B142EC6485BE3A02EBFBE5A7DD956_inline (const RuntimeMethod* method);
// System.Void System.Func`2<System.Byte[],Unity.MLAgents.CommunicatorObjects.UnityMessageProto>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m7D0971E1B4C07728BE7C791731DBD8C1A7679B6E (Func_2_t1B7D640DEA23BEFB06C17E1A1058A412B8A02A18 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t1B7D640DEA23BEFB06C17E1A1058A412B8A02A18 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mE2AF7615AD18E9CD92B1909285F5EC5DA8D180C8_gshared)(__this, ___object0, ___method1, method);
}
// Grpc.Core.Marshaller`1<!!0> Grpc.Core.Marshallers::Create<Unity.MLAgents.CommunicatorObjects.UnityMessageProto>(System.Func`2<!!0,System.Byte[]>,System.Func`2<System.Byte[],!!0>)
inline Marshaller_1_t9D307945ED8B62035303716CA88CBE969F20136B * Marshallers_Create_TisUnityMessageProto_tD5391F5B3FDFAFE6B6AEC00BEED8871DCD4B2B26_m2A322A84432C850562F8DE4F674DFEFB45FB663F (Func_2_tD5F010B2FE5FD8A131A1E87650D1ACFDEB9DFA81 * ___serializer0, Func_2_t1B7D640DEA23BEFB06C17E1A1058A412B8A02A18 * ___deserializer1, const RuntimeMethod* method)
{
	return ((  Marshaller_1_t9D307945ED8B62035303716CA88CBE969F20136B * (*) (Func_2_tD5F010B2FE5FD8A131A1E87650D1ACFDEB9DFA81 *, Func_2_t1B7D640DEA23BEFB06C17E1A1058A412B8A02A18 *, const RuntimeMethod*))Marshallers_Create_TisRuntimeObject_mEB3BC8D17185EA46E496E24D3C476DA0FD116819_gshared)(___serializer0, ___deserializer1, method);
}
// System.Void Grpc.Core.Method`2<Unity.MLAgents.CommunicatorObjects.UnityMessageProto,Unity.MLAgents.CommunicatorObjects.UnityMessageProto>::.ctor(Grpc.Core.MethodType,System.String,System.String,Grpc.Core.Marshaller`1<!0>,Grpc.Core.Marshaller`1<!1>)
inline void Method_2__ctor_mF6E3D33A2F86AB66AE719403352BD07FEAB4032B (Method_2_t2C16E4478D00E27E608963926C184DF53BA57473 * __this, int32_t ___type0, String_t* ___serviceName1, String_t* ___name2, Marshaller_1_t9D307945ED8B62035303716CA88CBE969F20136B * ___requestMarshaller3, Marshaller_1_t9D307945ED8B62035303716CA88CBE969F20136B * ___responseMarshaller4, const RuntimeMethod* method)
{
	((  void (*) (Method_2_t2C16E4478D00E27E608963926C184DF53BA57473 *, int32_t, String_t*, String_t*, Marshaller_1_t9D307945ED8B62035303716CA88CBE969F20136B *, Marshaller_1_t9D307945ED8B62035303716CA88CBE969F20136B *, const RuntimeMethod*))Method_2__ctor_mA3134411B8408786DEC61CBF2581B21A5E0EC30C_gshared)(__this, ___type0, ___serviceName1, ___name2, ___requestMarshaller3, ___responseMarshaller4, method);
}
// System.Void Unity.MLAgents.CommunicatorObjects.UnityToExternalProto/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mEF4D289349F0A5EEDD4EF3C1979C20EF4FAB6CAD (U3CU3Ec_tE239152597DE8CE5ACBF9989618F9AE0A5ADD1AD * __this, const RuntimeMethod* method);
// System.Byte[] Google.Protobuf.MessageExtensions::ToByteArray(Google.Protobuf.IMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* MessageExtensions_ToByteArray_mCB5C55AB21B9917267B027DB0A4CDFDA855E7D52 (RuntimeObject* ___message0, const RuntimeMethod* method);
// System.Void Grpc.Core.ClientBase`1<Unity.MLAgents.CommunicatorObjects.UnityToExternalProto/UnityToExternalProtoClient>::.ctor(Grpc.Core.Channel)
inline void ClientBase_1__ctor_mB526D8160C83AF064E5A7DE421052A63845F5E4B (ClientBase_1_t79B82AAC18F5519EE8A925984D3B9C7B412DF28E * __this, Channel_tACA478F7B1F9D4A2151EF268E78A232E7EF5B765 * ___channel0, const RuntimeMethod* method)
{
	((  void (*) (ClientBase_1_t79B82AAC18F5519EE8A925984D3B9C7B412DF28E *, Channel_tACA478F7B1F9D4A2151EF268E78A232E7EF5B765 *, const RuntimeMethod*))ClientBase_1__ctor_mD98EBDBA1F0A8B7B1CE3E4E69CADD00253C74824_gshared)(__this, ___channel0, method);
}
// System.Void Grpc.Core.CallOptions::.ctor(Grpc.Core.Metadata,System.Nullable`1<System.DateTime>,System.Threading.CancellationToken,Grpc.Core.WriteOptions,Grpc.Core.ContextPropagationToken,Grpc.Core.CallCredentials)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallOptions__ctor_m1AEB9AE5049E7BCBE1FF371D565CF313FCFAEAF4 (CallOptions_t245FDD2D751812FADC5BB72858891DB919411A27 * __this, Metadata_t26C6E825EB0A531EB2CDB3A5F149BA44336193F8 * ___headers0, Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78  ___deadline1, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___cancellationToken2, WriteOptions_t3D98497F20B5373A61127A45647E5E8B7B7211EE * ___writeOptions3, ContextPropagationToken_t0170EC5F7D6ABBDE5E53D75D19385B88C4724D6D * ___propagationToken4, CallCredentials_t2FE73AD74309014E2602D649F67CB2A1B9A026F1 * ___credentials5, const RuntimeMethod* method);
// Grpc.Core.CallInvoker Grpc.Core.ClientBase::get_CallInvoker()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR CallInvoker_t8D08B1AC2305E30108FB2F8AFBB87380CB354565 * ClientBase_get_CallInvoker_m8A5DF25E614C5C611656BFD6FBB75AB59A1AC8DE_inline (ClientBase_t7D7B773C37F5A5D8F3791A3A98E58570F38A7727 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLInitializationOutputProto/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mE8C61CE97B210EB916E26C26760FFE452D06134A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_mE8C61CE97B210EB916E26C26760FFE452D06134A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tB06FDCE551BEEA534930B9EDDACE5460F74B356C * L_0 = (U3CU3Ec_tB06FDCE551BEEA534930B9EDDACE5460F74B356C *)il2cpp_codegen_object_new(U3CU3Ec_tB06FDCE551BEEA534930B9EDDACE5460F74B356C_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m2D01856F24DCFF1D02F3FE2C5559BFD73EF37DE3(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tB06FDCE551BEEA534930B9EDDACE5460F74B356C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB06FDCE551BEEA534930B9EDDACE5460F74B356C_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLInitializationOutputProto/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2D01856F24DCFF1D02F3FE2C5559BFD73EF37DE3 (U3CU3Ec_tB06FDCE551BEEA534930B9EDDACE5460F74B356C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// Unity.MLAgents.CommunicatorObjects.UnityRLInitializationOutputProto Unity.MLAgents.CommunicatorObjects.UnityRLInitializationOutputProto/<>c::<.cctor>b__50_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityRLInitializationOutputProto_tC42D4D6F0F04C6EC9171D63F974FEBFD70943CA0 * U3CU3Ec_U3C_cctorU3Eb__50_0_mE02F407DA3FEDD03D29881112753663278397F98 (U3CU3Ec_tB06FDCE551BEEA534930B9EDDACE5460F74B356C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__50_0_mE02F407DA3FEDD03D29881112753663278397F98_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly pb::MessageParser<UnityRLInitializationOutputProto> _parser = new pb::MessageParser<UnityRLInitializationOutputProto>(() => new UnityRLInitializationOutputProto());
		UnityRLInitializationOutputProto_tC42D4D6F0F04C6EC9171D63F974FEBFD70943CA0 * L_0 = (UnityRLInitializationOutputProto_tC42D4D6F0F04C6EC9171D63F974FEBFD70943CA0 *)il2cpp_codegen_object_new(UnityRLInitializationOutputProto_tC42D4D6F0F04C6EC9171D63F974FEBFD70943CA0_il2cpp_TypeInfo_var);
		UnityRLInitializationOutputProto__ctor_m5529D06C628008105E02E39CF7D6094E0505912C(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Google.Protobuf.MessageParser`1<Unity.MLAgents.CommunicatorObjects.UnityRLInputProto> Unity.MLAgents.CommunicatorObjects.UnityRLInputProto::get_Parser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageParser_1_t76C3D8CC3698E2678107C9AB953C0ED781186CFC * UnityRLInputProto_get_Parser_m732A203B6A457C70EBD2223BB5DF31E1E22250EE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRLInputProto_get_Parser_m732A203B6A457C70EBD2223BB5DF31E1E22250EE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static pb::MessageParser<UnityRLInputProto> Parser { get { return _parser; } }
		IL2CPP_RUNTIME_CLASS_INIT(UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0_il2cpp_TypeInfo_var);
		MessageParser_1_t76C3D8CC3698E2678107C9AB953C0ED781186CFC * L_0 = ((UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0_StaticFields*)il2cpp_codegen_static_fields_for(UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0_il2cpp_TypeInfo_var))->get__parser_0();
		return L_0;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Unity.MLAgents.CommunicatorObjects.UnityRLInputProto::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_t66BFACC1855F8CF3B4F0FB366C773ECDCBE900CB * UnityRLInputProto_get_Descriptor_mE324547981BC6796279977757EF2383DEFE25766 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRLInputProto_get_Descriptor_mE324547981BC6796279977757EF2383DEFE25766_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return global::Unity.MLAgents.CommunicatorObjects.UnityRlInputReflection.Descriptor.MessageTypes[0]; }
		IL2CPP_RUNTIME_CLASS_INIT(UnityRlInputReflection_t44A240DE4E74AC47F66186A3A0BB165E653A6EF6_il2cpp_TypeInfo_var);
		FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * L_0 = UnityRlInputReflection_get_Descriptor_mACDE921AC2A9C38BF9C2C70397D59BA9522E5E3F_inline(/*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = FileDescriptor_get_MessageTypes_mA3C7B50D952576611016C2F2FD7FE267FBC760AA_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		MessageDescriptor_t66BFACC1855F8CF3B4F0FB366C773ECDCBE900CB * L_2 = InterfaceFuncInvoker1< MessageDescriptor_t66BFACC1855F8CF3B4F0FB366C773ECDCBE900CB *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor>::get_Item(System.Int32) */, IList_1_tBFA28A10AE545176F19CEBAE995B37D51D9B5EE1_il2cpp_TypeInfo_var, L_1, 0);
		return L_2;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Unity.MLAgents.CommunicatorObjects.UnityRLInputProto::pb::Google.Protobuf.IMessage.get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_t66BFACC1855F8CF3B4F0FB366C773ECDCBE900CB * UnityRLInputProto_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_m39A0BF8F79B1B5DF21DDF6B1BA01A49AF4D2170F (UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRLInputProto_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_m39A0BF8F79B1B5DF21DDF6B1BA01A49AF4D2170F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return Descriptor; }
		IL2CPP_RUNTIME_CLASS_INIT(UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0_il2cpp_TypeInfo_var);
		MessageDescriptor_t66BFACC1855F8CF3B4F0FB366C773ECDCBE900CB * L_0 = UnityRLInputProto_get_Descriptor_mE324547981BC6796279977757EF2383DEFE25766(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLInputProto::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityRLInputProto__ctor_m17DD5458D94C607A56C9C3AD9D7D8BF60C526904 (UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRLInputProto__ctor_m17DD5458D94C607A56C9C3AD9D7D8BF60C526904_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly pbc::MapField<string, global::Unity.MLAgents.CommunicatorObjects.UnityRLInputProto.Types.ListAgentActionProto> agentActions_ = new pbc::MapField<string, global::Unity.MLAgents.CommunicatorObjects.UnityRLInputProto.Types.ListAgentActionProto>();
		MapField_2_tD148F5CFC6F243B4A02E983CBB129C24B8AB69FB * L_0 = (MapField_2_tD148F5CFC6F243B4A02E983CBB129C24B8AB69FB *)il2cpp_codegen_object_new(MapField_2_tD148F5CFC6F243B4A02E983CBB129C24B8AB69FB_il2cpp_TypeInfo_var);
		MapField_2__ctor_mD514E612E0F0F320F885C23C044E105904B9A5BD(L_0, /*hidden argument*/MapField_2__ctor_mD514E612E0F0F320F885C23C044E105904B9A5BD_RuntimeMethod_var);
		__this->set_agentActions__3(L_0);
		// private pb::ByteString sideChannel_ = pb::ByteString.Empty;
		IL2CPP_RUNTIME_CLASS_INIT(ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A_il2cpp_TypeInfo_var);
		ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * L_1 = ByteString_get_Empty_mEFE0CF6E76539FB8154334F5B28EB169A1F0C87D_inline(/*hidden argument*/NULL);
		__this->set_sideChannel__5(L_1);
		// public UnityRLInputProto() {
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLInputProto::.ctor(Unity.MLAgents.CommunicatorObjects.UnityRLInputProto)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityRLInputProto__ctor_m58F41EFD8C3472FE1F4BCED8EA9D29A6F58345FD (UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0 * __this, UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRLInputProto__ctor_m58F41EFD8C3472FE1F4BCED8EA9D29A6F58345FD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public UnityRLInputProto(UnityRLInputProto other) : this() {
		UnityRLInputProto__ctor_m17DD5458D94C607A56C9C3AD9D7D8BF60C526904(__this, /*hidden argument*/NULL);
		// agentActions_ = other.agentActions_.Clone();
		UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0 * L_0 = ___other0;
		NullCheck(L_0);
		MapField_2_tD148F5CFC6F243B4A02E983CBB129C24B8AB69FB * L_1 = L_0->get_agentActions__3();
		NullCheck(L_1);
		MapField_2_tD148F5CFC6F243B4A02E983CBB129C24B8AB69FB * L_2 = MapField_2_Clone_m529DD3623738559C01A1E515EFC50D39421D9AB3(L_1, /*hidden argument*/MapField_2_Clone_m529DD3623738559C01A1E515EFC50D39421D9AB3_RuntimeMethod_var);
		__this->set_agentActions__3(L_2);
		// command_ = other.command_;
		UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0 * L_3 = ___other0;
		NullCheck(L_3);
		int32_t L_4 = L_3->get_command__4();
		__this->set_command__4(L_4);
		// sideChannel_ = other.sideChannel_;
		UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0 * L_5 = ___other0;
		NullCheck(L_5);
		ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * L_6 = L_5->get_sideChannel__5();
		__this->set_sideChannel__5(L_6);
		// _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
		UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0 * L_7 = ___other0;
		NullCheck(L_7);
		UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * L_8 = L_7->get__unknownFields_1();
		UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * L_9 = UnknownFieldSet_Clone_mA6F97A86D04484D55E0015A1BB9A08BA895BA075(L_8, /*hidden argument*/NULL);
		__this->set__unknownFields_1(L_9);
		// }
		return;
	}
}
// Unity.MLAgents.CommunicatorObjects.UnityRLInputProto Unity.MLAgents.CommunicatorObjects.UnityRLInputProto::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0 * UnityRLInputProto_Clone_m97607FC00DBB17D5DE4B1955FA24AF67D456A3EC (UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRLInputProto_Clone_m97607FC00DBB17D5DE4B1955FA24AF67D456A3EC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new UnityRLInputProto(this);
		UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0 * L_0 = (UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0 *)il2cpp_codegen_object_new(UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0_il2cpp_TypeInfo_var);
		UnityRLInputProto__ctor_m58F41EFD8C3472FE1F4BCED8EA9D29A6F58345FD(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// Google.Protobuf.Collections.MapField`2<System.String,Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto> Unity.MLAgents.CommunicatorObjects.UnityRLInputProto::get_AgentActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MapField_2_tD148F5CFC6F243B4A02E983CBB129C24B8AB69FB * UnityRLInputProto_get_AgentActions_m2B50929E9C2A8D1D84B8ECD48F9466EE1F5318DE (UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0 * __this, const RuntimeMethod* method)
{
	{
		// get { return agentActions_; }
		MapField_2_tD148F5CFC6F243B4A02E983CBB129C24B8AB69FB * L_0 = __this->get_agentActions__3();
		return L_0;
	}
}
// Unity.MLAgents.CommunicatorObjects.CommandProto Unity.MLAgents.CommunicatorObjects.UnityRLInputProto::get_Command()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityRLInputProto_get_Command_m483721CC871CBE4BCCE4D0307B3F351DF0BD2C0F (UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0 * __this, const RuntimeMethod* method)
{
	{
		// get { return command_; }
		int32_t L_0 = __this->get_command__4();
		return L_0;
	}
}
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLInputProto::set_Command(Unity.MLAgents.CommunicatorObjects.CommandProto)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityRLInputProto_set_Command_m1B268715F7AF2B8FCE0AFAEF7641ACC6D008CCC1 (UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// command_ = value;
		int32_t L_0 = ___value0;
		__this->set_command__4(L_0);
		// }
		return;
	}
}
// Google.Protobuf.ByteString Unity.MLAgents.CommunicatorObjects.UnityRLInputProto::get_SideChannel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * UnityRLInputProto_get_SideChannel_m8EF684D10D1FE1DA52BC862C887DB32D3CF432D2 (UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0 * __this, const RuntimeMethod* method)
{
	{
		// get { return sideChannel_; }
		ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * L_0 = __this->get_sideChannel__5();
		return L_0;
	}
}
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLInputProto::set_SideChannel(Google.Protobuf.ByteString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityRLInputProto_set_SideChannel_mE5D873FE1F0C657037EC7FF846B099A1815481D0 (UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0 * __this, ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRLInputProto_set_SideChannel_mE5D873FE1F0C657037EC7FF846B099A1815481D0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sideChannel_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
		ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * L_0 = ___value0;
		ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * L_1 = ProtoPreconditions_CheckNotNull_TisByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A_mCD24610F4F035AF6D750F9FB7EE41E0207F98566(L_0, _stringLiteralF32B67C7E26342AF42EFABC674D441DCA0A281C5, /*hidden argument*/ProtoPreconditions_CheckNotNull_TisByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A_mCD24610F4F035AF6D750F9FB7EE41E0207F98566_RuntimeMethod_var);
		__this->set_sideChannel__5(L_1);
		// }
		return;
	}
}
// System.Boolean Unity.MLAgents.CommunicatorObjects.UnityRLInputProto::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityRLInputProto_Equals_m2D224AD5215F3AD48EF5AC48F5DE9AB3725596DB (UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRLInputProto_Equals_m2D224AD5215F3AD48EF5AC48F5DE9AB3725596DB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Equals(other as UnityRLInputProto);
		RuntimeObject * L_0 = ___other0;
		bool L_1 = UnityRLInputProto_Equals_m73EB68640AB463AC6478529140028E364EF4626E(__this, ((UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0 *)IsInstSealed((RuntimeObject*)L_0, UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Unity.MLAgents.CommunicatorObjects.UnityRLInputProto::Equals(Unity.MLAgents.CommunicatorObjects.UnityRLInputProto)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityRLInputProto_Equals_m73EB68640AB463AC6478529140028E364EF4626E (UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0 * __this, UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRLInputProto_Equals_m73EB68640AB463AC6478529140028E364EF4626E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ReferenceEquals(other, null)) {
		UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0 * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0005:
	{
		// if (ReferenceEquals(other, this)) {
		UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0 * L_1 = ___other0;
		if ((!(((RuntimeObject*)(UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0 *)L_1) == ((RuntimeObject*)(UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0 *)__this))))
		{
			goto IL_000b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000b:
	{
		// if (!AgentActions.Equals(other.AgentActions)) return false;
		MapField_2_tD148F5CFC6F243B4A02E983CBB129C24B8AB69FB * L_2 = UnityRLInputProto_get_AgentActions_m2B50929E9C2A8D1D84B8ECD48F9466EE1F5318DE_inline(__this, /*hidden argument*/NULL);
		UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0 * L_3 = ___other0;
		NullCheck(L_3);
		MapField_2_tD148F5CFC6F243B4A02E983CBB129C24B8AB69FB * L_4 = UnityRLInputProto_get_AgentActions_m2B50929E9C2A8D1D84B8ECD48F9466EE1F5318DE_inline(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_5 = MapField_2_Equals_mC3B206091190E75A93F5877D236503F12B475104(L_2, L_4, /*hidden argument*/MapField_2_Equals_mC3B206091190E75A93F5877D236503F12B475104_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_0020;
		}
	}
	{
		// if (!AgentActions.Equals(other.AgentActions)) return false;
		return (bool)0;
	}

IL_0020:
	{
		// if (Command != other.Command) return false;
		int32_t L_6 = UnityRLInputProto_get_Command_m483721CC871CBE4BCCE4D0307B3F351DF0BD2C0F_inline(__this, /*hidden argument*/NULL);
		UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0 * L_7 = ___other0;
		NullCheck(L_7);
		int32_t L_8 = UnityRLInputProto_get_Command_m483721CC871CBE4BCCE4D0307B3F351DF0BD2C0F_inline(L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_6) == ((int32_t)L_8)))
		{
			goto IL_0030;
		}
	}
	{
		// if (Command != other.Command) return false;
		return (bool)0;
	}

IL_0030:
	{
		// if (SideChannel != other.SideChannel) return false;
		ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * L_9 = UnityRLInputProto_get_SideChannel_m8EF684D10D1FE1DA52BC862C887DB32D3CF432D2_inline(__this, /*hidden argument*/NULL);
		UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0 * L_10 = ___other0;
		NullCheck(L_10);
		ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * L_11 = UnityRLInputProto_get_SideChannel_m8EF684D10D1FE1DA52BC862C887DB32D3CF432D2_inline(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A_il2cpp_TypeInfo_var);
		bool L_12 = ByteString_op_Inequality_m8736472785083AF8213A7826893C4CEDCF207E35(L_9, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0045;
		}
	}
	{
		// if (SideChannel != other.SideChannel) return false;
		return (bool)0;
	}

IL_0045:
	{
		// return Equals(_unknownFields, other._unknownFields);
		UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * L_13 = __this->get__unknownFields_1();
		UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0 * L_14 = ___other0;
		NullCheck(L_14);
		UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * L_15 = L_14->get__unknownFields_1();
		bool L_16 = Object_Equals_mD98CD6D19C28ADC48B8468F78F94D38E203D0521(L_13, L_15, /*hidden argument*/NULL);
		return L_16;
	}
}
// System.Int32 Unity.MLAgents.CommunicatorObjects.UnityRLInputProto::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityRLInputProto_GetHashCode_m192A6F41E341CC9B4778B40E74E833C9D0200E38 (UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int hash = 1;
		V_0 = 1;
		// hash ^= AgentActions.GetHashCode();
		int32_t L_0 = V_0;
		MapField_2_tD148F5CFC6F243B4A02E983CBB129C24B8AB69FB * L_1 = UnityRLInputProto_get_AgentActions_m2B50929E9C2A8D1D84B8ECD48F9466EE1F5318DE_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		V_0 = ((int32_t)((int32_t)L_0^(int32_t)L_2));
		// if (Command != 0) hash ^= Command.GetHashCode();
		int32_t L_3 = UnityRLInputProto_get_Command_m483721CC871CBE4BCCE4D0307B3F351DF0BD2C0F_inline(__this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		// if (Command != 0) hash ^= Command.GetHashCode();
		int32_t L_4 = V_0;
		int32_t L_5 = UnityRLInputProto_get_Command_m483721CC871CBE4BCCE4D0307B3F351DF0BD2C0F_inline(__this, /*hidden argument*/NULL);
		V_1 = L_5;
		int32_t L_6 = Int32_GetHashCode_m245C424ECE351E5FE3277A88EEB02132DAB8C25A((int32_t*)(&V_1), /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_4^(int32_t)L_6));
	}

IL_002f:
	{
		// if (SideChannel.Length != 0) hash ^= SideChannel.GetHashCode();
		ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * L_7 = UnityRLInputProto_get_SideChannel_m8EF684D10D1FE1DA52BC862C887DB32D3CF432D2_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		int32_t L_8 = ByteString_get_Length_m1A3DD7629A6447C147E6CEC801C234F45CC27ACB(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_004a;
		}
	}
	{
		// if (SideChannel.Length != 0) hash ^= SideChannel.GetHashCode();
		int32_t L_9 = V_0;
		ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * L_10 = UnityRLInputProto_get_SideChannel_m8EF684D10D1FE1DA52BC862C887DB32D3CF432D2_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		int32_t L_11 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_10);
		V_0 = ((int32_t)((int32_t)L_9^(int32_t)L_11));
	}

IL_004a:
	{
		// if (_unknownFields != null) {
		UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * L_12 = __this->get__unknownFields_1();
		if (!L_12)
		{
			goto IL_0060;
		}
	}
	{
		// hash ^= _unknownFields.GetHashCode();
		int32_t L_13 = V_0;
		UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * L_14 = __this->get__unknownFields_1();
		NullCheck(L_14);
		int32_t L_15 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_14);
		V_0 = ((int32_t)((int32_t)L_13^(int32_t)L_15));
	}

IL_0060:
	{
		// return hash;
		int32_t L_16 = V_0;
		return L_16;
	}
}
// System.String Unity.MLAgents.CommunicatorObjects.UnityRLInputProto::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityRLInputProto_ToString_mB854EB3C75964112F6F437B48B046EE9DA8F28E0 (UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRLInputProto_ToString_mB854EB3C75964112F6F437B48B046EE9DA8F28E0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return pb::JsonFormatter.ToDiagnosticString(this);
		IL2CPP_RUNTIME_CLASS_INIT(JsonFormatter_tFF068B629D936222A398D2CDBD4A445525D3E5E7_il2cpp_TypeInfo_var);
		String_t* L_0 = JsonFormatter_ToDiagnosticString_m035CD03C07A6C01C8124FB391CA2498527CF6511(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLInputProto::WriteTo(Google.Protobuf.CodedOutputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityRLInputProto_WriteTo_m4D44E07881AA8C31F25B3A6730606E2B4D6D7258 (UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0 * __this, CodedOutputStream_tEDA55D3B33B67A94D65BA47D099A2710F29AEDCA * ___output0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRLInputProto_WriteTo_m4D44E07881AA8C31F25B3A6730606E2B4D6D7258_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// agentActions_.WriteTo(output, _map_agentActions_codec);
		MapField_2_tD148F5CFC6F243B4A02E983CBB129C24B8AB69FB * L_0 = __this->get_agentActions__3();
		CodedOutputStream_tEDA55D3B33B67A94D65BA47D099A2710F29AEDCA * L_1 = ___output0;
		IL2CPP_RUNTIME_CLASS_INIT(UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0_il2cpp_TypeInfo_var);
		Codec_tE5E96F1D701ECCAAC649B5851698F7B1956637AE * L_2 = ((UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0_StaticFields*)il2cpp_codegen_static_fields_for(UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0_il2cpp_TypeInfo_var))->get__map_agentActions_codec_2();
		NullCheck(L_0);
		MapField_2_WriteTo_m6B2CB362A1E4066C903B27BE64EC60B6574152DE(L_0, L_1, L_2, /*hidden argument*/MapField_2_WriteTo_m6B2CB362A1E4066C903B27BE64EC60B6574152DE_RuntimeMethod_var);
		// if (Command != 0) {
		int32_t L_3 = UnityRLInputProto_get_Command_m483721CC871CBE4BCCE4D0307B3F351DF0BD2C0F_inline(__this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// output.WriteRawTag(32);
		CodedOutputStream_tEDA55D3B33B67A94D65BA47D099A2710F29AEDCA * L_4 = ___output0;
		NullCheck(L_4);
		CodedOutputStream_WriteRawTag_mE305FE9040396876AE1C1F5C114B63D5804F4C7D(L_4, (uint8_t)((int32_t)32), /*hidden argument*/NULL);
		// output.WriteEnum((int) Command);
		CodedOutputStream_tEDA55D3B33B67A94D65BA47D099A2710F29AEDCA * L_5 = ___output0;
		int32_t L_6 = UnityRLInputProto_get_Command_m483721CC871CBE4BCCE4D0307B3F351DF0BD2C0F_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		CodedOutputStream_WriteEnum_m69D8A98141B00C8A95E6364C0048E4501ACCB5D7(L_5, L_6, /*hidden argument*/NULL);
	}

IL_002d:
	{
		// if (SideChannel.Length != 0) {
		ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * L_7 = UnityRLInputProto_get_SideChannel_m8EF684D10D1FE1DA52BC862C887DB32D3CF432D2_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		int32_t L_8 = ByteString_get_Length_m1A3DD7629A6447C147E6CEC801C234F45CC27ACB(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_004e;
		}
	}
	{
		// output.WriteRawTag(42);
		CodedOutputStream_tEDA55D3B33B67A94D65BA47D099A2710F29AEDCA * L_9 = ___output0;
		NullCheck(L_9);
		CodedOutputStream_WriteRawTag_mE305FE9040396876AE1C1F5C114B63D5804F4C7D(L_9, (uint8_t)((int32_t)42), /*hidden argument*/NULL);
		// output.WriteBytes(SideChannel);
		CodedOutputStream_tEDA55D3B33B67A94D65BA47D099A2710F29AEDCA * L_10 = ___output0;
		ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * L_11 = UnityRLInputProto_get_SideChannel_m8EF684D10D1FE1DA52BC862C887DB32D3CF432D2_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		CodedOutputStream_WriteBytes_m456DDC2D84DEC5B919905E0FA19C12FCBC3AC49B(L_10, L_11, /*hidden argument*/NULL);
	}

IL_004e:
	{
		// if (_unknownFields != null) {
		UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * L_12 = __this->get__unknownFields_1();
		if (!L_12)
		{
			goto IL_0062;
		}
	}
	{
		// _unknownFields.WriteTo(output);
		UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * L_13 = __this->get__unknownFields_1();
		CodedOutputStream_tEDA55D3B33B67A94D65BA47D099A2710F29AEDCA * L_14 = ___output0;
		NullCheck(L_13);
		UnknownFieldSet_WriteTo_m3424C9BA71D0B5D7FAAE9E036273F95F49C89B3C(L_13, L_14, /*hidden argument*/NULL);
	}

IL_0062:
	{
		// }
		return;
	}
}
// System.Int32 Unity.MLAgents.CommunicatorObjects.UnityRLInputProto::CalculateSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityRLInputProto_CalculateSize_m54E8FB6BDFCCD9FFFC0A4DC479CB508A298F619B (UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRLInputProto_CalculateSize_m54E8FB6BDFCCD9FFFC0A4DC479CB508A298F619B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int size = 0;
		V_0 = 0;
		// size += agentActions_.CalculateSize(_map_agentActions_codec);
		int32_t L_0 = V_0;
		MapField_2_tD148F5CFC6F243B4A02E983CBB129C24B8AB69FB * L_1 = __this->get_agentActions__3();
		IL2CPP_RUNTIME_CLASS_INIT(UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0_il2cpp_TypeInfo_var);
		Codec_tE5E96F1D701ECCAAC649B5851698F7B1956637AE * L_2 = ((UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0_StaticFields*)il2cpp_codegen_static_fields_for(UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0_il2cpp_TypeInfo_var))->get__map_agentActions_codec_2();
		NullCheck(L_1);
		int32_t L_3 = MapField_2_CalculateSize_mE43C4244D0D0B9EDF47EBAEF3D6EC559A6158EBE(L_1, L_2, /*hidden argument*/MapField_2_CalculateSize_mE43C4244D0D0B9EDF47EBAEF3D6EC559A6158EBE_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_3));
		// if (Command != 0) {
		int32_t L_4 = UnityRLInputProto_get_Command_m483721CC871CBE4BCCE4D0307B3F351DF0BD2C0F_inline(__this, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		// size += 1 + pb::CodedOutputStream.ComputeEnumSize((int) Command);
		int32_t L_5 = V_0;
		int32_t L_6 = UnityRLInputProto_get_Command_m483721CC871CBE4BCCE4D0307B3F351DF0BD2C0F_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CodedOutputStream_tEDA55D3B33B67A94D65BA47D099A2710F29AEDCA_il2cpp_TypeInfo_var);
		int32_t L_7 = CodedOutputStream_ComputeEnumSize_m55BF0C21DDF66F5667BAECDE756F8686B16DD70D(L_6, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)1, (int32_t)L_7))));
	}

IL_002d:
	{
		// if (SideChannel.Length != 0) {
		ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * L_8 = UnityRLInputProto_get_SideChannel_m8EF684D10D1FE1DA52BC862C887DB32D3CF432D2_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		int32_t L_9 = ByteString_get_Length_m1A3DD7629A6447C147E6CEC801C234F45CC27ACB(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_004a;
		}
	}
	{
		// size += 1 + pb::CodedOutputStream.ComputeBytesSize(SideChannel);
		int32_t L_10 = V_0;
		ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * L_11 = UnityRLInputProto_get_SideChannel_m8EF684D10D1FE1DA52BC862C887DB32D3CF432D2_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CodedOutputStream_tEDA55D3B33B67A94D65BA47D099A2710F29AEDCA_il2cpp_TypeInfo_var);
		int32_t L_12 = CodedOutputStream_ComputeBytesSize_m72116563ED4B522D3C9881109303561D5409C3F8(L_11, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)1, (int32_t)L_12))));
	}

IL_004a:
	{
		// if (_unknownFields != null) {
		UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * L_13 = __this->get__unknownFields_1();
		if (!L_13)
		{
			goto IL_0060;
		}
	}
	{
		// size += _unknownFields.CalculateSize();
		int32_t L_14 = V_0;
		UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * L_15 = __this->get__unknownFields_1();
		NullCheck(L_15);
		int32_t L_16 = UnknownFieldSet_CalculateSize_mA7C6692435A234A3099B04DB0D0E4290648EB03D(L_15, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)L_16));
	}

IL_0060:
	{
		// return size;
		int32_t L_17 = V_0;
		return L_17;
	}
}
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLInputProto::MergeFrom(Unity.MLAgents.CommunicatorObjects.UnityRLInputProto)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityRLInputProto_MergeFrom_mBCAFDCA74F182104450D95A116BDF06805D67FCD (UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0 * __this, UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRLInputProto_MergeFrom_mBCAFDCA74F182104450D95A116BDF06805D67FCD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other == null) {
		UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0 * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// return;
		return;
	}

IL_0004:
	{
		// agentActions_.Add(other.agentActions_);
		MapField_2_tD148F5CFC6F243B4A02E983CBB129C24B8AB69FB * L_1 = __this->get_agentActions__3();
		UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0 * L_2 = ___other0;
		NullCheck(L_2);
		MapField_2_tD148F5CFC6F243B4A02E983CBB129C24B8AB69FB * L_3 = L_2->get_agentActions__3();
		NullCheck(L_1);
		MapField_2_Add_m669A27F921808318426FDF685A33C6FEBC4E7982(L_1, L_3, /*hidden argument*/MapField_2_Add_m669A27F921808318426FDF685A33C6FEBC4E7982_RuntimeMethod_var);
		// if (other.Command != 0) {
		UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0 * L_4 = ___other0;
		NullCheck(L_4);
		int32_t L_5 = UnityRLInputProto_get_Command_m483721CC871CBE4BCCE4D0307B3F351DF0BD2C0F_inline(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		// Command = other.Command;
		UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0 * L_6 = ___other0;
		NullCheck(L_6);
		int32_t L_7 = UnityRLInputProto_get_Command_m483721CC871CBE4BCCE4D0307B3F351DF0BD2C0F_inline(L_6, /*hidden argument*/NULL);
		UnityRLInputProto_set_Command_m1B268715F7AF2B8FCE0AFAEF7641ACC6D008CCC1_inline(__this, L_7, /*hidden argument*/NULL);
	}

IL_0029:
	{
		// if (other.SideChannel.Length != 0) {
		UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0 * L_8 = ___other0;
		NullCheck(L_8);
		ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * L_9 = UnityRLInputProto_get_SideChannel_m8EF684D10D1FE1DA52BC862C887DB32D3CF432D2_inline(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		int32_t L_10 = ByteString_get_Length_m1A3DD7629A6447C147E6CEC801C234F45CC27ACB(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0042;
		}
	}
	{
		// SideChannel = other.SideChannel;
		UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0 * L_11 = ___other0;
		NullCheck(L_11);
		ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * L_12 = UnityRLInputProto_get_SideChannel_m8EF684D10D1FE1DA52BC862C887DB32D3CF432D2_inline(L_11, /*hidden argument*/NULL);
		UnityRLInputProto_set_SideChannel_mE5D873FE1F0C657037EC7FF846B099A1815481D0(__this, L_12, /*hidden argument*/NULL);
	}

IL_0042:
	{
		// _unknownFields = pb::UnknownFieldSet.MergeFrom(_unknownFields, other._unknownFields);
		UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * L_13 = __this->get__unknownFields_1();
		UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0 * L_14 = ___other0;
		NullCheck(L_14);
		UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * L_15 = L_14->get__unknownFields_1();
		UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * L_16 = UnknownFieldSet_MergeFrom_mFC2B2A3949FABEBE37E6966AA39462D221D53B75(L_13, L_15, /*hidden argument*/NULL);
		__this->set__unknownFields_1(L_16);
		// }
		return;
	}
}
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLInputProto::MergeFrom(Google.Protobuf.CodedInputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityRLInputProto_MergeFrom_mAD0B7DA58E3A2BE0D67826A2F9333DF0C772E173 (UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0 * __this, CodedInputStream_t90AE13DCCB9A5F6C02B698E7EDC3E79A5F585C24 * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRLInputProto_MergeFrom_mAD0B7DA58E3A2BE0D67826A2F9333DF0C772E173_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		goto IL_0052;
	}

IL_0002:
	{
		// switch(tag) {
		uint32_t L_0 = V_0;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)10))))
		{
			goto IL_0025;
		}
	}
	{
		uint32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)32))))
		{
			goto IL_0038;
		}
	}
	{
		uint32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)42))))
		{
			goto IL_0046;
		}
	}
	{
		// _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, input);
		UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * L_3 = __this->get__unknownFields_1();
		CodedInputStream_t90AE13DCCB9A5F6C02B698E7EDC3E79A5F585C24 * L_4 = ___input0;
		UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * L_5 = UnknownFieldSet_MergeFieldFrom_m85004DAA185E6DBC8B7AABE34A8D61730D38EE51(L_3, L_4, /*hidden argument*/NULL);
		__this->set__unknownFields_1(L_5);
		// break;
		goto IL_0052;
	}

IL_0025:
	{
		// agentActions_.AddEntriesFrom(input, _map_agentActions_codec);
		MapField_2_tD148F5CFC6F243B4A02E983CBB129C24B8AB69FB * L_6 = __this->get_agentActions__3();
		CodedInputStream_t90AE13DCCB9A5F6C02B698E7EDC3E79A5F585C24 * L_7 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0_il2cpp_TypeInfo_var);
		Codec_tE5E96F1D701ECCAAC649B5851698F7B1956637AE * L_8 = ((UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0_StaticFields*)il2cpp_codegen_static_fields_for(UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0_il2cpp_TypeInfo_var))->get__map_agentActions_codec_2();
		NullCheck(L_6);
		MapField_2_AddEntriesFrom_m447F2DEAE53F2BD2ABAAEAC6602DBA491CA8CF4C(L_6, L_7, L_8, /*hidden argument*/MapField_2_AddEntriesFrom_m447F2DEAE53F2BD2ABAAEAC6602DBA491CA8CF4C_RuntimeMethod_var);
		// break;
		goto IL_0052;
	}

IL_0038:
	{
		// command_ = (global::Unity.MLAgents.CommunicatorObjects.CommandProto) input.ReadEnum();
		CodedInputStream_t90AE13DCCB9A5F6C02B698E7EDC3E79A5F585C24 * L_9 = ___input0;
		NullCheck(L_9);
		int32_t L_10 = CodedInputStream_ReadEnum_mC0EF09EDE504E8E1917B60BC6729DE8D0F387D9A(L_9, /*hidden argument*/NULL);
		__this->set_command__4(L_10);
		// break;
		goto IL_0052;
	}

IL_0046:
	{
		// SideChannel = input.ReadBytes();
		CodedInputStream_t90AE13DCCB9A5F6C02B698E7EDC3E79A5F585C24 * L_11 = ___input0;
		NullCheck(L_11);
		ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * L_12 = CodedInputStream_ReadBytes_mADEAEDDAE3A4B3E07099D9BFA9C391A7DDB97876(L_11, /*hidden argument*/NULL);
		UnityRLInputProto_set_SideChannel_mE5D873FE1F0C657037EC7FF846B099A1815481D0(__this, L_12, /*hidden argument*/NULL);
	}

IL_0052:
	{
		// while ((tag = input.ReadTag()) != 0) {
		CodedInputStream_t90AE13DCCB9A5F6C02B698E7EDC3E79A5F585C24 * L_13 = ___input0;
		NullCheck(L_13);
		uint32_t L_14 = CodedInputStream_ReadTag_m6FFC6CE4BC783735866EBFC3CC95E769206A9EFB(L_13, /*hidden argument*/NULL);
		uint32_t L_15 = L_14;
		V_0 = L_15;
		if (L_15)
		{
			goto IL_0002;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLInputProto::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityRLInputProto__cctor_m3296EF8127AC89C38FA47C18B348CBD52FC6FF44 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRLInputProto__cctor_m3296EF8127AC89C38FA47C18B348CBD52FC6FF44_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly pb::MessageParser<UnityRLInputProto> _parser = new pb::MessageParser<UnityRLInputProto>(() => new UnityRLInputProto());
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t8C8913C1ED402AE5A22F45AEFE071BC747C307F9_il2cpp_TypeInfo_var);
		U3CU3Ec_t8C8913C1ED402AE5A22F45AEFE071BC747C307F9 * L_0 = ((U3CU3Ec_t8C8913C1ED402AE5A22F45AEFE071BC747C307F9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8C8913C1ED402AE5A22F45AEFE071BC747C307F9_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_1_t288173BF3A6E883F68A0606FEF98AF1788CD8382 * L_1 = (Func_1_t288173BF3A6E883F68A0606FEF98AF1788CD8382 *)il2cpp_codegen_object_new(Func_1_t288173BF3A6E883F68A0606FEF98AF1788CD8382_il2cpp_TypeInfo_var);
		Func_1__ctor_m0281DBAD7E0979A751FAA7D8D821D3962FE475F2(L_1, L_0, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__36_0_m3D7446638853E38A17DF0AE67D4FD7C5A15A9F9C_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m0281DBAD7E0979A751FAA7D8D821D3962FE475F2_RuntimeMethod_var);
		MessageParser_1_t76C3D8CC3698E2678107C9AB953C0ED781186CFC * L_2 = (MessageParser_1_t76C3D8CC3698E2678107C9AB953C0ED781186CFC *)il2cpp_codegen_object_new(MessageParser_1_t76C3D8CC3698E2678107C9AB953C0ED781186CFC_il2cpp_TypeInfo_var);
		MessageParser_1__ctor_mA3299A4144E132FA2B2C8AA31B0B883927E928CB(L_2, L_1, /*hidden argument*/MessageParser_1__ctor_mA3299A4144E132FA2B2C8AA31B0B883927E928CB_RuntimeMethod_var);
		((UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0_StaticFields*)il2cpp_codegen_static_fields_for(UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0_il2cpp_TypeInfo_var))->set__parser_0(L_2);
		// private static readonly pbc::MapField<string, global::Unity.MLAgents.CommunicatorObjects.UnityRLInputProto.Types.ListAgentActionProto>.Codec _map_agentActions_codec
		//     = new pbc::MapField<string, global::Unity.MLAgents.CommunicatorObjects.UnityRLInputProto.Types.ListAgentActionProto>.Codec(pb::FieldCodec.ForString(10), pb::FieldCodec.ForMessage(18, global::Unity.MLAgents.CommunicatorObjects.UnityRLInputProto.Types.ListAgentActionProto.Parser), 10);
		FieldCodec_1_t156034F6D44891148E8D3C98BCDB5672D2CE4A29 * L_3 = FieldCodec_ForString_m06E3BA3C951B030A6D4A40A53B8901A01B5FF436(((int32_t)10), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925_il2cpp_TypeInfo_var);
		MessageParser_1_t5420BF51729BDB4FBC6434906782CFC4FE81F541 * L_4 = ListAgentActionProto_get_Parser_m440581130B48C05D80C94FA05729A12903CD7323_inline(/*hidden argument*/NULL);
		FieldCodec_1_tB768A791704F24E2C2B5A284921F7D1D808778F5 * L_5 = FieldCodec_ForMessage_TisListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925_m1374C9F39F5EA970B850F3DD9930543B992C70AB(((int32_t)18), L_4, /*hidden argument*/FieldCodec_ForMessage_TisListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925_m1374C9F39F5EA970B850F3DD9930543B992C70AB_RuntimeMethod_var);
		Codec_tE5E96F1D701ECCAAC649B5851698F7B1956637AE * L_6 = (Codec_tE5E96F1D701ECCAAC649B5851698F7B1956637AE *)il2cpp_codegen_object_new(Codec_tE5E96F1D701ECCAAC649B5851698F7B1956637AE_il2cpp_TypeInfo_var);
		Codec__ctor_m41A7BA1870CCEEC74EC9F230514F40876A72C2A7(L_6, L_3, L_5, ((int32_t)10), /*hidden argument*/Codec__ctor_m41A7BA1870CCEEC74EC9F230514F40876A72C2A7_RuntimeMethod_var);
		((UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0_StaticFields*)il2cpp_codegen_static_fields_for(UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0_il2cpp_TypeInfo_var))->set__map_agentActions_codec_2(L_6);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mAB8D28BE9D7F7E168B1DB49352D1063E154219DB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_mAB8D28BE9D7F7E168B1DB49352D1063E154219DB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t8C8913C1ED402AE5A22F45AEFE071BC747C307F9 * L_0 = (U3CU3Ec_t8C8913C1ED402AE5A22F45AEFE071BC747C307F9 *)il2cpp_codegen_object_new(U3CU3Ec_t8C8913C1ED402AE5A22F45AEFE071BC747C307F9_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mDBBBC8537C4A130EFF691C1C9155E99059A70CB2(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t8C8913C1ED402AE5A22F45AEFE071BC747C307F9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8C8913C1ED402AE5A22F45AEFE071BC747C307F9_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mDBBBC8537C4A130EFF691C1C9155E99059A70CB2 (U3CU3Ec_t8C8913C1ED402AE5A22F45AEFE071BC747C307F9 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// Unity.MLAgents.CommunicatorObjects.UnityRLInputProto Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/<>c::<.cctor>b__36_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0 * U3CU3Ec_U3C_cctorU3Eb__36_0_m3D7446638853E38A17DF0AE67D4FD7C5A15A9F9C (U3CU3Ec_t8C8913C1ED402AE5A22F45AEFE071BC747C307F9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__36_0_m3D7446638853E38A17DF0AE67D4FD7C5A15A9F9C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly pb::MessageParser<UnityRLInputProto> _parser = new pb::MessageParser<UnityRLInputProto>(() => new UnityRLInputProto());
		UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0 * L_0 = (UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0 *)il2cpp_codegen_object_new(UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0_il2cpp_TypeInfo_var);
		UnityRLInputProto__ctor_m17DD5458D94C607A56C9C3AD9D7D8BF60C526904(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Google.Protobuf.MessageParser`1<Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto> Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto::get_Parser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageParser_1_t5420BF51729BDB4FBC6434906782CFC4FE81F541 * ListAgentActionProto_get_Parser_m440581130B48C05D80C94FA05729A12903CD7323 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListAgentActionProto_get_Parser_m440581130B48C05D80C94FA05729A12903CD7323_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static pb::MessageParser<ListAgentActionProto> Parser { get { return _parser; } }
		IL2CPP_RUNTIME_CLASS_INIT(ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925_il2cpp_TypeInfo_var);
		MessageParser_1_t5420BF51729BDB4FBC6434906782CFC4FE81F541 * L_0 = ((ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925_StaticFields*)il2cpp_codegen_static_fields_for(ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925_il2cpp_TypeInfo_var))->get__parser_0();
		return L_0;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_t66BFACC1855F8CF3B4F0FB366C773ECDCBE900CB * ListAgentActionProto_get_Descriptor_m2293C1E921EEF4161A80A4B77D193CF0DC603E87 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListAgentActionProto_get_Descriptor_m2293C1E921EEF4161A80A4B77D193CF0DC603E87_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return global::Unity.MLAgents.CommunicatorObjects.UnityRLInputProto.Descriptor.NestedTypes[0]; }
		IL2CPP_RUNTIME_CLASS_INIT(UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0_il2cpp_TypeInfo_var);
		MessageDescriptor_t66BFACC1855F8CF3B4F0FB366C773ECDCBE900CB * L_0 = UnityRLInputProto_get_Descriptor_mE324547981BC6796279977757EF2383DEFE25766(/*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = MessageDescriptor_get_NestedTypes_m6C005AD1BD430E30D7A2C808A761C5ED5CCC8D47_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		MessageDescriptor_t66BFACC1855F8CF3B4F0FB366C773ECDCBE900CB * L_2 = InterfaceFuncInvoker1< MessageDescriptor_t66BFACC1855F8CF3B4F0FB366C773ECDCBE900CB *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor>::get_Item(System.Int32) */, IList_1_tBFA28A10AE545176F19CEBAE995B37D51D9B5EE1_il2cpp_TypeInfo_var, L_1, 0);
		return L_2;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto::pb::Google.Protobuf.IMessage.get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_t66BFACC1855F8CF3B4F0FB366C773ECDCBE900CB * ListAgentActionProto_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_m13491B860F16B16E4BD9D7994E614F496D444993 (ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListAgentActionProto_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_m13491B860F16B16E4BD9D7994E614F496D444993_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return Descriptor; }
		IL2CPP_RUNTIME_CLASS_INIT(ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925_il2cpp_TypeInfo_var);
		MessageDescriptor_t66BFACC1855F8CF3B4F0FB366C773ECDCBE900CB * L_0 = ListAgentActionProto_get_Descriptor_m2293C1E921EEF4161A80A4B77D193CF0DC603E87(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListAgentActionProto__ctor_m577112C3CC583F8E8EEA5F2AE136DB379882B793 (ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListAgentActionProto__ctor_m577112C3CC583F8E8EEA5F2AE136DB379882B793_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly pbc::RepeatedField<global::Unity.MLAgents.CommunicatorObjects.AgentActionProto> value_ = new pbc::RepeatedField<global::Unity.MLAgents.CommunicatorObjects.AgentActionProto>();
		RepeatedField_1_t5CED0C9D40D73B800EBF4F7240C943DC34F268E5 * L_0 = (RepeatedField_1_t5CED0C9D40D73B800EBF4F7240C943DC34F268E5 *)il2cpp_codegen_object_new(RepeatedField_1_t5CED0C9D40D73B800EBF4F7240C943DC34F268E5_il2cpp_TypeInfo_var);
		RepeatedField_1__ctor_mA63362A207829C1E8E2DE110D8164F194CA0ADFA(L_0, /*hidden argument*/RepeatedField_1__ctor_mA63362A207829C1E8E2DE110D8164F194CA0ADFA_RuntimeMethod_var);
		__this->set_value__3(L_0);
		// public ListAgentActionProto() {
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto::.ctor(Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListAgentActionProto__ctor_mF20505EA160904391D3075545F981A4FFC09F8D2 (ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925 * __this, ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListAgentActionProto__ctor_mF20505EA160904391D3075545F981A4FFC09F8D2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ListAgentActionProto(ListAgentActionProto other) : this() {
		ListAgentActionProto__ctor_m577112C3CC583F8E8EEA5F2AE136DB379882B793(__this, /*hidden argument*/NULL);
		// value_ = other.value_.Clone();
		ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925 * L_0 = ___other0;
		NullCheck(L_0);
		RepeatedField_1_t5CED0C9D40D73B800EBF4F7240C943DC34F268E5 * L_1 = L_0->get_value__3();
		NullCheck(L_1);
		RepeatedField_1_t5CED0C9D40D73B800EBF4F7240C943DC34F268E5 * L_2 = RepeatedField_1_Clone_mC893063613A994FF943AA4E9DC858EBBCBC7A626(L_1, /*hidden argument*/RepeatedField_1_Clone_mC893063613A994FF943AA4E9DC858EBBCBC7A626_RuntimeMethod_var);
		__this->set_value__3(L_2);
		// _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
		ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925 * L_3 = ___other0;
		NullCheck(L_3);
		UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * L_4 = L_3->get__unknownFields_1();
		UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * L_5 = UnknownFieldSet_Clone_mA6F97A86D04484D55E0015A1BB9A08BA895BA075(L_4, /*hidden argument*/NULL);
		__this->set__unknownFields_1(L_5);
		// }
		return;
	}
}
// Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925 * ListAgentActionProto_Clone_mF41896EBD687F2C8C3D05AE37BB4F027150C4271 (ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListAgentActionProto_Clone_mF41896EBD687F2C8C3D05AE37BB4F027150C4271_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new ListAgentActionProto(this);
		ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925 * L_0 = (ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925 *)il2cpp_codegen_object_new(ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925_il2cpp_TypeInfo_var);
		ListAgentActionProto__ctor_mF20505EA160904391D3075545F981A4FFC09F8D2(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// Google.Protobuf.Collections.RepeatedField`1<Unity.MLAgents.CommunicatorObjects.AgentActionProto> Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RepeatedField_1_t5CED0C9D40D73B800EBF4F7240C943DC34F268E5 * ListAgentActionProto_get_Value_m8C5665193ADDE4D63E73549D630F1FDB79327CDF (ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925 * __this, const RuntimeMethod* method)
{
	{
		// get { return value_; }
		RepeatedField_1_t5CED0C9D40D73B800EBF4F7240C943DC34F268E5 * L_0 = __this->get_value__3();
		return L_0;
	}
}
// System.Boolean Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ListAgentActionProto_Equals_m3933C179FB74AC3F2ED5ADA1217B4B124ACD100B (ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListAgentActionProto_Equals_m3933C179FB74AC3F2ED5ADA1217B4B124ACD100B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Equals(other as ListAgentActionProto);
		RuntimeObject * L_0 = ___other0;
		bool L_1 = ListAgentActionProto_Equals_m9E334A77C8096E732D25BF3A52E37910EA40A752(__this, ((ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925 *)IsInstSealed((RuntimeObject*)L_0, ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto::Equals(Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ListAgentActionProto_Equals_m9E334A77C8096E732D25BF3A52E37910EA40A752 (ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925 * __this, ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListAgentActionProto_Equals_m9E334A77C8096E732D25BF3A52E37910EA40A752_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ReferenceEquals(other, null)) {
		ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925 * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0005:
	{
		// if (ReferenceEquals(other, this)) {
		ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925 * L_1 = ___other0;
		if ((!(((RuntimeObject*)(ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925 *)L_1) == ((RuntimeObject*)(ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925 *)__this))))
		{
			goto IL_000b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000b:
	{
		// if(!value_.Equals(other.value_)) return false;
		RepeatedField_1_t5CED0C9D40D73B800EBF4F7240C943DC34F268E5 * L_2 = __this->get_value__3();
		ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925 * L_3 = ___other0;
		NullCheck(L_3);
		RepeatedField_1_t5CED0C9D40D73B800EBF4F7240C943DC34F268E5 * L_4 = L_3->get_value__3();
		NullCheck(L_2);
		bool L_5 = RepeatedField_1_Equals_m189F4DE6DCFB38E8574B5BEE5308679F16D67D56(L_2, L_4, /*hidden argument*/RepeatedField_1_Equals_m189F4DE6DCFB38E8574B5BEE5308679F16D67D56_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_0020;
		}
	}
	{
		// if(!value_.Equals(other.value_)) return false;
		return (bool)0;
	}

IL_0020:
	{
		// return Equals(_unknownFields, other._unknownFields);
		UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * L_6 = __this->get__unknownFields_1();
		ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925 * L_7 = ___other0;
		NullCheck(L_7);
		UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * L_8 = L_7->get__unknownFields_1();
		bool L_9 = Object_Equals_mD98CD6D19C28ADC48B8468F78F94D38E203D0521(L_6, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Int32 Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ListAgentActionProto_GetHashCode_mF20DD68036A2B3ABFCC880621535C1189B643645 (ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// int hash = 1;
		V_0 = 1;
		// hash ^= value_.GetHashCode();
		int32_t L_0 = V_0;
		RepeatedField_1_t5CED0C9D40D73B800EBF4F7240C943DC34F268E5 * L_1 = __this->get_value__3();
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		V_0 = ((int32_t)((int32_t)L_0^(int32_t)L_2));
		// if (_unknownFields != null) {
		UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * L_3 = __this->get__unknownFields_1();
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		// hash ^= _unknownFields.GetHashCode();
		int32_t L_4 = V_0;
		UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * L_5 = __this->get__unknownFields_1();
		NullCheck(L_5);
		int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_5);
		V_0 = ((int32_t)((int32_t)L_4^(int32_t)L_6));
	}

IL_0026:
	{
		// return hash;
		int32_t L_7 = V_0;
		return L_7;
	}
}
// System.String Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ListAgentActionProto_ToString_mD161DF125A4CA12355C66093F18040F6421B4F1E (ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListAgentActionProto_ToString_mD161DF125A4CA12355C66093F18040F6421B4F1E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return pb::JsonFormatter.ToDiagnosticString(this);
		IL2CPP_RUNTIME_CLASS_INIT(JsonFormatter_tFF068B629D936222A398D2CDBD4A445525D3E5E7_il2cpp_TypeInfo_var);
		String_t* L_0 = JsonFormatter_ToDiagnosticString_m035CD03C07A6C01C8124FB391CA2498527CF6511(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto::WriteTo(Google.Protobuf.CodedOutputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListAgentActionProto_WriteTo_mD2482376828306BB08FB62D6FF9B14A1F4EF5C45 (ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925 * __this, CodedOutputStream_tEDA55D3B33B67A94D65BA47D099A2710F29AEDCA * ___output0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListAgentActionProto_WriteTo_mD2482376828306BB08FB62D6FF9B14A1F4EF5C45_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// value_.WriteTo(output, _repeated_value_codec);
		RepeatedField_1_t5CED0C9D40D73B800EBF4F7240C943DC34F268E5 * L_0 = __this->get_value__3();
		CodedOutputStream_tEDA55D3B33B67A94D65BA47D099A2710F29AEDCA * L_1 = ___output0;
		IL2CPP_RUNTIME_CLASS_INIT(ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925_il2cpp_TypeInfo_var);
		FieldCodec_1_t81FE647280EF3EFB39888CEE098EFFFABD0EB887 * L_2 = ((ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925_StaticFields*)il2cpp_codegen_static_fields_for(ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925_il2cpp_TypeInfo_var))->get__repeated_value_codec_2();
		NullCheck(L_0);
		RepeatedField_1_WriteTo_m8A932298668C92A8100ED9EF954DEEBE4B1567A8(L_0, L_1, L_2, /*hidden argument*/RepeatedField_1_WriteTo_m8A932298668C92A8100ED9EF954DEEBE4B1567A8_RuntimeMethod_var);
		// if (_unknownFields != null) {
		UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * L_3 = __this->get__unknownFields_1();
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		// _unknownFields.WriteTo(output);
		UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * L_4 = __this->get__unknownFields_1();
		CodedOutputStream_tEDA55D3B33B67A94D65BA47D099A2710F29AEDCA * L_5 = ___output0;
		NullCheck(L_4);
		UnknownFieldSet_WriteTo_m3424C9BA71D0B5D7FAAE9E036273F95F49C89B3C(L_4, L_5, /*hidden argument*/NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Int32 Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto::CalculateSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ListAgentActionProto_CalculateSize_m93CD2939004BD136AACE7CE629F374916BBE6668 (ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListAgentActionProto_CalculateSize_m93CD2939004BD136AACE7CE629F374916BBE6668_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int size = 0;
		V_0 = 0;
		// size += value_.CalculateSize(_repeated_value_codec);
		int32_t L_0 = V_0;
		RepeatedField_1_t5CED0C9D40D73B800EBF4F7240C943DC34F268E5 * L_1 = __this->get_value__3();
		IL2CPP_RUNTIME_CLASS_INIT(ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925_il2cpp_TypeInfo_var);
		FieldCodec_1_t81FE647280EF3EFB39888CEE098EFFFABD0EB887 * L_2 = ((ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925_StaticFields*)il2cpp_codegen_static_fields_for(ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925_il2cpp_TypeInfo_var))->get__repeated_value_codec_2();
		NullCheck(L_1);
		int32_t L_3 = RepeatedField_1_CalculateSize_mE680EF54C3805A0E7F2F9EC39B5C680295A8ADB9(L_1, L_2, /*hidden argument*/RepeatedField_1_CalculateSize_mE680EF54C3805A0E7F2F9EC39B5C680295A8ADB9_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_3));
		// if (_unknownFields != null) {
		UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * L_4 = __this->get__unknownFields_1();
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		// size += _unknownFields.CalculateSize();
		int32_t L_5 = V_0;
		UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * L_6 = __this->get__unknownFields_1();
		NullCheck(L_6);
		int32_t L_7 = UnknownFieldSet_CalculateSize_mA7C6692435A234A3099B04DB0D0E4290648EB03D(L_6, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)L_7));
	}

IL_002b:
	{
		// return size;
		int32_t L_8 = V_0;
		return L_8;
	}
}
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto::MergeFrom(Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListAgentActionProto_MergeFrom_m45A87BF4492B282A3582440373AB9511D5ACF9EA (ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925 * __this, ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListAgentActionProto_MergeFrom_m45A87BF4492B282A3582440373AB9511D5ACF9EA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other == null) {
		ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925 * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// return;
		return;
	}

IL_0004:
	{
		// value_.Add(other.value_);
		RepeatedField_1_t5CED0C9D40D73B800EBF4F7240C943DC34F268E5 * L_1 = __this->get_value__3();
		ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925 * L_2 = ___other0;
		NullCheck(L_2);
		RepeatedField_1_t5CED0C9D40D73B800EBF4F7240C943DC34F268E5 * L_3 = L_2->get_value__3();
		NullCheck(L_1);
		RepeatedField_1_Add_m186739FDCA88984BFAEF77B346C8534D3883125B(L_1, L_3, /*hidden argument*/RepeatedField_1_Add_m186739FDCA88984BFAEF77B346C8534D3883125B_RuntimeMethod_var);
		// _unknownFields = pb::UnknownFieldSet.MergeFrom(_unknownFields, other._unknownFields);
		UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * L_4 = __this->get__unknownFields_1();
		ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925 * L_5 = ___other0;
		NullCheck(L_5);
		UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * L_6 = L_5->get__unknownFields_1();
		UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * L_7 = UnknownFieldSet_MergeFrom_mFC2B2A3949FABEBE37E6966AA39462D221D53B75(L_4, L_6, /*hidden argument*/NULL);
		__this->set__unknownFields_1(L_7);
		// }
		return;
	}
}
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto::MergeFrom(Google.Protobuf.CodedInputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListAgentActionProto_MergeFrom_m98DF203E865A3D7C5FF51600C45FFDCA1D86B0DC (ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925 * __this, CodedInputStream_t90AE13DCCB9A5F6C02B698E7EDC3E79A5F585C24 * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListAgentActionProto_MergeFrom_m98DF203E865A3D7C5FF51600C45FFDCA1D86B0DC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		goto IL_002c;
	}

IL_0002:
	{
		// switch(tag) {
		uint32_t L_0 = V_0;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)10))))
		{
			goto IL_001b;
		}
	}
	{
		// _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, input);
		UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * L_1 = __this->get__unknownFields_1();
		CodedInputStream_t90AE13DCCB9A5F6C02B698E7EDC3E79A5F585C24 * L_2 = ___input0;
		UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * L_3 = UnknownFieldSet_MergeFieldFrom_m85004DAA185E6DBC8B7AABE34A8D61730D38EE51(L_1, L_2, /*hidden argument*/NULL);
		__this->set__unknownFields_1(L_3);
		// break;
		goto IL_002c;
	}

IL_001b:
	{
		// value_.AddEntriesFrom(input, _repeated_value_codec);
		RepeatedField_1_t5CED0C9D40D73B800EBF4F7240C943DC34F268E5 * L_4 = __this->get_value__3();
		CodedInputStream_t90AE13DCCB9A5F6C02B698E7EDC3E79A5F585C24 * L_5 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925_il2cpp_TypeInfo_var);
		FieldCodec_1_t81FE647280EF3EFB39888CEE098EFFFABD0EB887 * L_6 = ((ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925_StaticFields*)il2cpp_codegen_static_fields_for(ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925_il2cpp_TypeInfo_var))->get__repeated_value_codec_2();
		NullCheck(L_4);
		RepeatedField_1_AddEntriesFrom_m1BF8E3FCC7267C632B71AC102C5476DCB16911F5(L_4, L_5, L_6, /*hidden argument*/RepeatedField_1_AddEntriesFrom_m1BF8E3FCC7267C632B71AC102C5476DCB16911F5_RuntimeMethod_var);
	}

IL_002c:
	{
		// while ((tag = input.ReadTag()) != 0) {
		CodedInputStream_t90AE13DCCB9A5F6C02B698E7EDC3E79A5F585C24 * L_7 = ___input0;
		NullCheck(L_7);
		uint32_t L_8 = CodedInputStream_ReadTag_m6FFC6CE4BC783735866EBFC3CC95E769206A9EFB(L_7, /*hidden argument*/NULL);
		uint32_t L_9 = L_8;
		V_0 = L_9;
		if (L_9)
		{
			goto IL_0002;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListAgentActionProto__cctor_m6B85D4E3D01E5BB131979D37A257F30A8452BEF4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListAgentActionProto__cctor_m6B85D4E3D01E5BB131979D37A257F30A8452BEF4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly pb::MessageParser<ListAgentActionProto> _parser = new pb::MessageParser<ListAgentActionProto>(() => new ListAgentActionProto());
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tE8A7A790398B36ED81CC520B108127AB5D297DBB_il2cpp_TypeInfo_var);
		U3CU3Ec_tE8A7A790398B36ED81CC520B108127AB5D297DBB * L_0 = ((U3CU3Ec_tE8A7A790398B36ED81CC520B108127AB5D297DBB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE8A7A790398B36ED81CC520B108127AB5D297DBB_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_1_t8BC331C95BEB4D5B22FA94D469CC99C18D998D55 * L_1 = (Func_1_t8BC331C95BEB4D5B22FA94D469CC99C18D998D55 *)il2cpp_codegen_object_new(Func_1_t8BC331C95BEB4D5B22FA94D469CC99C18D998D55_il2cpp_TypeInfo_var);
		Func_1__ctor_m9C83F2EE34FD289A45A5050CE96657CB0D77594B(L_1, L_0, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__25_0_m5257D4F6E98E5E619F6D8424BB552CBE0F0C5100_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m9C83F2EE34FD289A45A5050CE96657CB0D77594B_RuntimeMethod_var);
		MessageParser_1_t5420BF51729BDB4FBC6434906782CFC4FE81F541 * L_2 = (MessageParser_1_t5420BF51729BDB4FBC6434906782CFC4FE81F541 *)il2cpp_codegen_object_new(MessageParser_1_t5420BF51729BDB4FBC6434906782CFC4FE81F541_il2cpp_TypeInfo_var);
		MessageParser_1__ctor_m9A883C775696A30DEE6D8A0DE26C7B2CD58CBC99(L_2, L_1, /*hidden argument*/MessageParser_1__ctor_m9A883C775696A30DEE6D8A0DE26C7B2CD58CBC99_RuntimeMethod_var);
		((ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925_StaticFields*)il2cpp_codegen_static_fields_for(ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925_il2cpp_TypeInfo_var))->set__parser_0(L_2);
		// private static readonly pb::FieldCodec<global::Unity.MLAgents.CommunicatorObjects.AgentActionProto> _repeated_value_codec
		//     = pb::FieldCodec.ForMessage(10, global::Unity.MLAgents.CommunicatorObjects.AgentActionProto.Parser);
		IL2CPP_RUNTIME_CLASS_INIT(AgentActionProto_tD039A9669DE32649580A51A04DC77145F5D748C9_il2cpp_TypeInfo_var);
		MessageParser_1_tDD093BAC6289A0E6913065203F01B017D3F705E2 * L_3 = AgentActionProto_get_Parser_m6E35FBF409BF005A36D4538EBF5DE80B406E6224_inline(/*hidden argument*/NULL);
		FieldCodec_1_t81FE647280EF3EFB39888CEE098EFFFABD0EB887 * L_4 = FieldCodec_ForMessage_TisAgentActionProto_tD039A9669DE32649580A51A04DC77145F5D748C9_mC2B80E3AF5B613D3856C12A9CCC1DA1CF5767B34(((int32_t)10), L_3, /*hidden argument*/FieldCodec_ForMessage_TisAgentActionProto_tD039A9669DE32649580A51A04DC77145F5D748C9_mC2B80E3AF5B613D3856C12A9CCC1DA1CF5767B34_RuntimeMethod_var);
		((ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925_StaticFields*)il2cpp_codegen_static_fields_for(ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925_il2cpp_TypeInfo_var))->set__repeated_value_codec_2(L_4);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m4D07D6E4A4CA2B5D133FB8FB4530C5096540B873 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m4D07D6E4A4CA2B5D133FB8FB4530C5096540B873_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tE8A7A790398B36ED81CC520B108127AB5D297DBB * L_0 = (U3CU3Ec_tE8A7A790398B36ED81CC520B108127AB5D297DBB *)il2cpp_codegen_object_new(U3CU3Ec_tE8A7A790398B36ED81CC520B108127AB5D297DBB_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m49AA87959B32F7C5BC0F760BB2B64A7D52E88281(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tE8A7A790398B36ED81CC520B108127AB5D297DBB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE8A7A790398B36ED81CC520B108127AB5D297DBB_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m49AA87959B32F7C5BC0F760BB2B64A7D52E88281 (U3CU3Ec_tE8A7A790398B36ED81CC520B108127AB5D297DBB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto Unity.MLAgents.CommunicatorObjects.UnityRLInputProto/Types/ListAgentActionProto/<>c::<.cctor>b__25_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925 * U3CU3Ec_U3C_cctorU3Eb__25_0_m5257D4F6E98E5E619F6D8424BB552CBE0F0C5100 (U3CU3Ec_tE8A7A790398B36ED81CC520B108127AB5D297DBB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__25_0_m5257D4F6E98E5E619F6D8424BB552CBE0F0C5100_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly pb::MessageParser<ListAgentActionProto> _parser = new pb::MessageParser<ListAgentActionProto>(() => new ListAgentActionProto());
		ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925 * L_0 = (ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925 *)il2cpp_codegen_object_new(ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925_il2cpp_TypeInfo_var);
		ListAgentActionProto__ctor_m577112C3CC583F8E8EEA5F2AE136DB379882B793(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Google.Protobuf.MessageParser`1<Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto> Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto::get_Parser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageParser_1_t599AFE94D623A6084E4A6E9656D1DE8C69383948 * UnityRLOutputProto_get_Parser_m3082F856637D0BCCE8432273D0F9A43C2D6BDBF5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRLOutputProto_get_Parser_m3082F856637D0BCCE8432273D0F9A43C2D6BDBF5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static pb::MessageParser<UnityRLOutputProto> Parser { get { return _parser; } }
		IL2CPP_RUNTIME_CLASS_INIT(UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7_il2cpp_TypeInfo_var);
		MessageParser_1_t599AFE94D623A6084E4A6E9656D1DE8C69383948 * L_0 = ((UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7_StaticFields*)il2cpp_codegen_static_fields_for(UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7_il2cpp_TypeInfo_var))->get__parser_0();
		return L_0;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_t66BFACC1855F8CF3B4F0FB366C773ECDCBE900CB * UnityRLOutputProto_get_Descriptor_mC405795B20ABAAD003497CBAF06B23A701A0D4FF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRLOutputProto_get_Descriptor_mC405795B20ABAAD003497CBAF06B23A701A0D4FF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return global::Unity.MLAgents.CommunicatorObjects.UnityRlOutputReflection.Descriptor.MessageTypes[0]; }
		IL2CPP_RUNTIME_CLASS_INIT(UnityRlOutputReflection_t0776186F804074BFA18A3600865C682779F04F75_il2cpp_TypeInfo_var);
		FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * L_0 = UnityRlOutputReflection_get_Descriptor_m5D75BACA3A8B729D44606FC38AA1B740E172A896_inline(/*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = FileDescriptor_get_MessageTypes_mA3C7B50D952576611016C2F2FD7FE267FBC760AA_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		MessageDescriptor_t66BFACC1855F8CF3B4F0FB366C773ECDCBE900CB * L_2 = InterfaceFuncInvoker1< MessageDescriptor_t66BFACC1855F8CF3B4F0FB366C773ECDCBE900CB *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor>::get_Item(System.Int32) */, IList_1_tBFA28A10AE545176F19CEBAE995B37D51D9B5EE1_il2cpp_TypeInfo_var, L_1, 0);
		return L_2;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto::pb::Google.Protobuf.IMessage.get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_t66BFACC1855F8CF3B4F0FB366C773ECDCBE900CB * UnityRLOutputProto_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_mE12A6D82C778DD31FF1BE13F769AE0CEBE792B83 (UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRLOutputProto_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_mE12A6D82C778DD31FF1BE13F769AE0CEBE792B83_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return Descriptor; }
		IL2CPP_RUNTIME_CLASS_INIT(UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7_il2cpp_TypeInfo_var);
		MessageDescriptor_t66BFACC1855F8CF3B4F0FB366C773ECDCBE900CB * L_0 = UnityRLOutputProto_get_Descriptor_mC405795B20ABAAD003497CBAF06B23A701A0D4FF(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityRLOutputProto__ctor_m866DD6AA97506ECA09BE39D6C76854E4EA72E0EA (UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRLOutputProto__ctor_m866DD6AA97506ECA09BE39D6C76854E4EA72E0EA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly pbc::MapField<string, global::Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto.Types.ListAgentInfoProto> agentInfos_ = new pbc::MapField<string, global::Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto.Types.ListAgentInfoProto>();
		MapField_2_t8BA58C589830633C7DCCC6E650D623B9E1EDC681 * L_0 = (MapField_2_t8BA58C589830633C7DCCC6E650D623B9E1EDC681 *)il2cpp_codegen_object_new(MapField_2_t8BA58C589830633C7DCCC6E650D623B9E1EDC681_il2cpp_TypeInfo_var);
		MapField_2__ctor_mF5B726984F1EECCDEB836E8F8214D5B5DECAE02D(L_0, /*hidden argument*/MapField_2__ctor_mF5B726984F1EECCDEB836E8F8214D5B5DECAE02D_RuntimeMethod_var);
		__this->set_agentInfos__3(L_0);
		// private pb::ByteString sideChannel_ = pb::ByteString.Empty;
		IL2CPP_RUNTIME_CLASS_INIT(ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A_il2cpp_TypeInfo_var);
		ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * L_1 = ByteString_get_Empty_mEFE0CF6E76539FB8154334F5B28EB169A1F0C87D_inline(/*hidden argument*/NULL);
		__this->set_sideChannel__4(L_1);
		// public UnityRLOutputProto() {
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto::.ctor(Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityRLOutputProto__ctor_m4E22E8F9227D78E68F6D383195CE90D09C0F9CA9 (UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7 * __this, UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRLOutputProto__ctor_m4E22E8F9227D78E68F6D383195CE90D09C0F9CA9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public UnityRLOutputProto(UnityRLOutputProto other) : this() {
		UnityRLOutputProto__ctor_m866DD6AA97506ECA09BE39D6C76854E4EA72E0EA(__this, /*hidden argument*/NULL);
		// agentInfos_ = other.agentInfos_.Clone();
		UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7 * L_0 = ___other0;
		NullCheck(L_0);
		MapField_2_t8BA58C589830633C7DCCC6E650D623B9E1EDC681 * L_1 = L_0->get_agentInfos__3();
		NullCheck(L_1);
		MapField_2_t8BA58C589830633C7DCCC6E650D623B9E1EDC681 * L_2 = MapField_2_Clone_mD41C18F3F74FC6B14AA01B5DC42D0E2BFE2D4521(L_1, /*hidden argument*/MapField_2_Clone_mD41C18F3F74FC6B14AA01B5DC42D0E2BFE2D4521_RuntimeMethod_var);
		__this->set_agentInfos__3(L_2);
		// sideChannel_ = other.sideChannel_;
		UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7 * L_3 = ___other0;
		NullCheck(L_3);
		ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * L_4 = L_3->get_sideChannel__4();
		__this->set_sideChannel__4(L_4);
		// _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
		UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7 * L_5 = ___other0;
		NullCheck(L_5);
		UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * L_6 = L_5->get__unknownFields_1();
		UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * L_7 = UnknownFieldSet_Clone_mA6F97A86D04484D55E0015A1BB9A08BA895BA075(L_6, /*hidden argument*/NULL);
		__this->set__unknownFields_1(L_7);
		// }
		return;
	}
}
// Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7 * UnityRLOutputProto_Clone_m3AB05EC2EA4372B3E3F284D76952F7A5F5692840 (UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRLOutputProto_Clone_m3AB05EC2EA4372B3E3F284D76952F7A5F5692840_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new UnityRLOutputProto(this);
		UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7 * L_0 = (UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7 *)il2cpp_codegen_object_new(UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7_il2cpp_TypeInfo_var);
		UnityRLOutputProto__ctor_m4E22E8F9227D78E68F6D383195CE90D09C0F9CA9(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// Google.Protobuf.Collections.MapField`2<System.String,Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto> Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto::get_AgentInfos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MapField_2_t8BA58C589830633C7DCCC6E650D623B9E1EDC681 * UnityRLOutputProto_get_AgentInfos_mAD6E4B1BB974BD9ED839643B02EBB7DD4C0084EE (UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7 * __this, const RuntimeMethod* method)
{
	{
		// get { return agentInfos_; }
		MapField_2_t8BA58C589830633C7DCCC6E650D623B9E1EDC681 * L_0 = __this->get_agentInfos__3();
		return L_0;
	}
}
// Google.Protobuf.ByteString Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto::get_SideChannel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * UnityRLOutputProto_get_SideChannel_mE3853244B5B1C97B5FB4728E668B531BAED06990 (UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7 * __this, const RuntimeMethod* method)
{
	{
		// get { return sideChannel_; }
		ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * L_0 = __this->get_sideChannel__4();
		return L_0;
	}
}
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto::set_SideChannel(Google.Protobuf.ByteString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityRLOutputProto_set_SideChannel_mA95C514E35E334FC8D5AB2138162C5A4CC8D1A63 (UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7 * __this, ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRLOutputProto_set_SideChannel_mA95C514E35E334FC8D5AB2138162C5A4CC8D1A63_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sideChannel_ = pb::ProtoPreconditions.CheckNotNull(value, "value");
		ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * L_0 = ___value0;
		ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * L_1 = ProtoPreconditions_CheckNotNull_TisByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A_mCD24610F4F035AF6D750F9FB7EE41E0207F98566(L_0, _stringLiteralF32B67C7E26342AF42EFABC674D441DCA0A281C5, /*hidden argument*/ProtoPreconditions_CheckNotNull_TisByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A_mCD24610F4F035AF6D750F9FB7EE41E0207F98566_RuntimeMethod_var);
		__this->set_sideChannel__4(L_1);
		// }
		return;
	}
}
// System.Boolean Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityRLOutputProto_Equals_m533D8BA1DAAF53D7596AFB0D0485964EEA571D72 (UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRLOutputProto_Equals_m533D8BA1DAAF53D7596AFB0D0485964EEA571D72_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Equals(other as UnityRLOutputProto);
		RuntimeObject * L_0 = ___other0;
		bool L_1 = UnityRLOutputProto_Equals_m53F9BC2C66A6EBD3518E23A449F7D54D71EC314A(__this, ((UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7 *)IsInstSealed((RuntimeObject*)L_0, UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto::Equals(Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityRLOutputProto_Equals_m53F9BC2C66A6EBD3518E23A449F7D54D71EC314A (UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7 * __this, UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRLOutputProto_Equals_m53F9BC2C66A6EBD3518E23A449F7D54D71EC314A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ReferenceEquals(other, null)) {
		UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7 * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0005:
	{
		// if (ReferenceEquals(other, this)) {
		UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7 * L_1 = ___other0;
		if ((!(((RuntimeObject*)(UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7 *)L_1) == ((RuntimeObject*)(UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7 *)__this))))
		{
			goto IL_000b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000b:
	{
		// if (!AgentInfos.Equals(other.AgentInfos)) return false;
		MapField_2_t8BA58C589830633C7DCCC6E650D623B9E1EDC681 * L_2 = UnityRLOutputProto_get_AgentInfos_mAD6E4B1BB974BD9ED839643B02EBB7DD4C0084EE_inline(__this, /*hidden argument*/NULL);
		UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7 * L_3 = ___other0;
		NullCheck(L_3);
		MapField_2_t8BA58C589830633C7DCCC6E650D623B9E1EDC681 * L_4 = UnityRLOutputProto_get_AgentInfos_mAD6E4B1BB974BD9ED839643B02EBB7DD4C0084EE_inline(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_5 = MapField_2_Equals_m9C7E1B4BD5154A2C779C4C73687A26CC2877F5AA(L_2, L_4, /*hidden argument*/MapField_2_Equals_m9C7E1B4BD5154A2C779C4C73687A26CC2877F5AA_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_0020;
		}
	}
	{
		// if (!AgentInfos.Equals(other.AgentInfos)) return false;
		return (bool)0;
	}

IL_0020:
	{
		// if (SideChannel != other.SideChannel) return false;
		ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * L_6 = UnityRLOutputProto_get_SideChannel_mE3853244B5B1C97B5FB4728E668B531BAED06990_inline(__this, /*hidden argument*/NULL);
		UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7 * L_7 = ___other0;
		NullCheck(L_7);
		ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * L_8 = UnityRLOutputProto_get_SideChannel_mE3853244B5B1C97B5FB4728E668B531BAED06990_inline(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A_il2cpp_TypeInfo_var);
		bool L_9 = ByteString_op_Inequality_m8736472785083AF8213A7826893C4CEDCF207E35(L_6, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0035;
		}
	}
	{
		// if (SideChannel != other.SideChannel) return false;
		return (bool)0;
	}

IL_0035:
	{
		// return Equals(_unknownFields, other._unknownFields);
		UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * L_10 = __this->get__unknownFields_1();
		UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7 * L_11 = ___other0;
		NullCheck(L_11);
		UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * L_12 = L_11->get__unknownFields_1();
		bool L_13 = Object_Equals_mD98CD6D19C28ADC48B8468F78F94D38E203D0521(L_10, L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
// System.Int32 Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityRLOutputProto_GetHashCode_mFA5231B42A269C22EDD205E05BBC3D617BAE63C5 (UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// int hash = 1;
		V_0 = 1;
		// hash ^= AgentInfos.GetHashCode();
		int32_t L_0 = V_0;
		MapField_2_t8BA58C589830633C7DCCC6E650D623B9E1EDC681 * L_1 = UnityRLOutputProto_get_AgentInfos_mAD6E4B1BB974BD9ED839643B02EBB7DD4C0084EE_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		V_0 = ((int32_t)((int32_t)L_0^(int32_t)L_2));
		// if (SideChannel.Length != 0) hash ^= SideChannel.GetHashCode();
		ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * L_3 = UnityRLOutputProto_get_SideChannel_mE3853244B5B1C97B5FB4728E668B531BAED06990_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = ByteString_get_Length_m1A3DD7629A6447C147E6CEC801C234F45CC27ACB(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		// if (SideChannel.Length != 0) hash ^= SideChannel.GetHashCode();
		int32_t L_5 = V_0;
		ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * L_6 = UnityRLOutputProto_get_SideChannel_mE3853244B5B1C97B5FB4728E668B531BAED06990_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		int32_t L_7 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_6);
		V_0 = ((int32_t)((int32_t)L_5^(int32_t)L_7));
	}

IL_002b:
	{
		// if (_unknownFields != null) {
		UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * L_8 = __this->get__unknownFields_1();
		if (!L_8)
		{
			goto IL_0041;
		}
	}
	{
		// hash ^= _unknownFields.GetHashCode();
		int32_t L_9 = V_0;
		UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * L_10 = __this->get__unknownFields_1();
		NullCheck(L_10);
		int32_t L_11 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_10);
		V_0 = ((int32_t)((int32_t)L_9^(int32_t)L_11));
	}

IL_0041:
	{
		// return hash;
		int32_t L_12 = V_0;
		return L_12;
	}
}
// System.String Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityRLOutputProto_ToString_mCC3968BCCC689F8A735B4C77BAC37D7B1EA13041 (UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRLOutputProto_ToString_mCC3968BCCC689F8A735B4C77BAC37D7B1EA13041_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return pb::JsonFormatter.ToDiagnosticString(this);
		IL2CPP_RUNTIME_CLASS_INIT(JsonFormatter_tFF068B629D936222A398D2CDBD4A445525D3E5E7_il2cpp_TypeInfo_var);
		String_t* L_0 = JsonFormatter_ToDiagnosticString_m035CD03C07A6C01C8124FB391CA2498527CF6511(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto::WriteTo(Google.Protobuf.CodedOutputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityRLOutputProto_WriteTo_m4548E352B991F3DBF22BF22E95A9487773B8606D (UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7 * __this, CodedOutputStream_tEDA55D3B33B67A94D65BA47D099A2710F29AEDCA * ___output0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRLOutputProto_WriteTo_m4548E352B991F3DBF22BF22E95A9487773B8606D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// agentInfos_.WriteTo(output, _map_agentInfos_codec);
		MapField_2_t8BA58C589830633C7DCCC6E650D623B9E1EDC681 * L_0 = __this->get_agentInfos__3();
		CodedOutputStream_tEDA55D3B33B67A94D65BA47D099A2710F29AEDCA * L_1 = ___output0;
		IL2CPP_RUNTIME_CLASS_INIT(UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7_il2cpp_TypeInfo_var);
		Codec_t783AB5BD5C8C87BB04A840234E5A6E38B1991493 * L_2 = ((UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7_StaticFields*)il2cpp_codegen_static_fields_for(UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7_il2cpp_TypeInfo_var))->get__map_agentInfos_codec_2();
		NullCheck(L_0);
		MapField_2_WriteTo_m15160657572F68D191943168BFF932A24E8ACE58(L_0, L_1, L_2, /*hidden argument*/MapField_2_WriteTo_m15160657572F68D191943168BFF932A24E8ACE58_RuntimeMethod_var);
		// if (SideChannel.Length != 0) {
		ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * L_3 = UnityRLOutputProto_get_SideChannel_mE3853244B5B1C97B5FB4728E668B531BAED06990_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = ByteString_get_Length_m1A3DD7629A6447C147E6CEC801C234F45CC27ACB(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// output.WriteRawTag(26);
		CodedOutputStream_tEDA55D3B33B67A94D65BA47D099A2710F29AEDCA * L_5 = ___output0;
		NullCheck(L_5);
		CodedOutputStream_WriteRawTag_mE305FE9040396876AE1C1F5C114B63D5804F4C7D(L_5, (uint8_t)((int32_t)26), /*hidden argument*/NULL);
		// output.WriteBytes(SideChannel);
		CodedOutputStream_tEDA55D3B33B67A94D65BA47D099A2710F29AEDCA * L_6 = ___output0;
		ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * L_7 = UnityRLOutputProto_get_SideChannel_mE3853244B5B1C97B5FB4728E668B531BAED06990_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		CodedOutputStream_WriteBytes_m456DDC2D84DEC5B919905E0FA19C12FCBC3AC49B(L_6, L_7, /*hidden argument*/NULL);
	}

IL_0032:
	{
		// if (_unknownFields != null) {
		UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * L_8 = __this->get__unknownFields_1();
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		// _unknownFields.WriteTo(output);
		UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * L_9 = __this->get__unknownFields_1();
		CodedOutputStream_tEDA55D3B33B67A94D65BA47D099A2710F29AEDCA * L_10 = ___output0;
		NullCheck(L_9);
		UnknownFieldSet_WriteTo_m3424C9BA71D0B5D7FAAE9E036273F95F49C89B3C(L_9, L_10, /*hidden argument*/NULL);
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Int32 Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto::CalculateSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityRLOutputProto_CalculateSize_m542C0FAEE3952D29643847E1918A0E38D6E134B9 (UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRLOutputProto_CalculateSize_m542C0FAEE3952D29643847E1918A0E38D6E134B9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int size = 0;
		V_0 = 0;
		// size += agentInfos_.CalculateSize(_map_agentInfos_codec);
		int32_t L_0 = V_0;
		MapField_2_t8BA58C589830633C7DCCC6E650D623B9E1EDC681 * L_1 = __this->get_agentInfos__3();
		IL2CPP_RUNTIME_CLASS_INIT(UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7_il2cpp_TypeInfo_var);
		Codec_t783AB5BD5C8C87BB04A840234E5A6E38B1991493 * L_2 = ((UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7_StaticFields*)il2cpp_codegen_static_fields_for(UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7_il2cpp_TypeInfo_var))->get__map_agentInfos_codec_2();
		NullCheck(L_1);
		int32_t L_3 = MapField_2_CalculateSize_m0DDA767F779A93987411993CFBF82DD1321F6739(L_1, L_2, /*hidden argument*/MapField_2_CalculateSize_m0DDA767F779A93987411993CFBF82DD1321F6739_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_3));
		// if (SideChannel.Length != 0) {
		ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * L_4 = UnityRLOutputProto_get_SideChannel_mE3853244B5B1C97B5FB4728E668B531BAED06990_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = ByteString_get_Length_m1A3DD7629A6447C147E6CEC801C234F45CC27ACB(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0032;
		}
	}
	{
		// size += 1 + pb::CodedOutputStream.ComputeBytesSize(SideChannel);
		int32_t L_6 = V_0;
		ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * L_7 = UnityRLOutputProto_get_SideChannel_mE3853244B5B1C97B5FB4728E668B531BAED06990_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CodedOutputStream_tEDA55D3B33B67A94D65BA47D099A2710F29AEDCA_il2cpp_TypeInfo_var);
		int32_t L_8 = CodedOutputStream_ComputeBytesSize_m72116563ED4B522D3C9881109303561D5409C3F8(L_7, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)1, (int32_t)L_8))));
	}

IL_0032:
	{
		// if (_unknownFields != null) {
		UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * L_9 = __this->get__unknownFields_1();
		if (!L_9)
		{
			goto IL_0048;
		}
	}
	{
		// size += _unknownFields.CalculateSize();
		int32_t L_10 = V_0;
		UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * L_11 = __this->get__unknownFields_1();
		NullCheck(L_11);
		int32_t L_12 = UnknownFieldSet_CalculateSize_mA7C6692435A234A3099B04DB0D0E4290648EB03D(L_11, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)L_12));
	}

IL_0048:
	{
		// return size;
		int32_t L_13 = V_0;
		return L_13;
	}
}
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto::MergeFrom(Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityRLOutputProto_MergeFrom_m8952EEA2E521ADBC3AD8EEF6ABC8C19B53D532F7 (UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7 * __this, UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRLOutputProto_MergeFrom_m8952EEA2E521ADBC3AD8EEF6ABC8C19B53D532F7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other == null) {
		UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7 * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// return;
		return;
	}

IL_0004:
	{
		// agentInfos_.Add(other.agentInfos_);
		MapField_2_t8BA58C589830633C7DCCC6E650D623B9E1EDC681 * L_1 = __this->get_agentInfos__3();
		UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7 * L_2 = ___other0;
		NullCheck(L_2);
		MapField_2_t8BA58C589830633C7DCCC6E650D623B9E1EDC681 * L_3 = L_2->get_agentInfos__3();
		NullCheck(L_1);
		MapField_2_Add_mC51509CEA2B3ED6DB971344958D2521EA174D672(L_1, L_3, /*hidden argument*/MapField_2_Add_mC51509CEA2B3ED6DB971344958D2521EA174D672_RuntimeMethod_var);
		// if (other.SideChannel.Length != 0) {
		UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7 * L_4 = ___other0;
		NullCheck(L_4);
		ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * L_5 = UnityRLOutputProto_get_SideChannel_mE3853244B5B1C97B5FB4728E668B531BAED06990_inline(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6 = ByteString_get_Length_m1A3DD7629A6447C147E6CEC801C234F45CC27ACB(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_002e;
		}
	}
	{
		// SideChannel = other.SideChannel;
		UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7 * L_7 = ___other0;
		NullCheck(L_7);
		ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * L_8 = UnityRLOutputProto_get_SideChannel_mE3853244B5B1C97B5FB4728E668B531BAED06990_inline(L_7, /*hidden argument*/NULL);
		UnityRLOutputProto_set_SideChannel_mA95C514E35E334FC8D5AB2138162C5A4CC8D1A63(__this, L_8, /*hidden argument*/NULL);
	}

IL_002e:
	{
		// _unknownFields = pb::UnknownFieldSet.MergeFrom(_unknownFields, other._unknownFields);
		UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * L_9 = __this->get__unknownFields_1();
		UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7 * L_10 = ___other0;
		NullCheck(L_10);
		UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * L_11 = L_10->get__unknownFields_1();
		UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * L_12 = UnknownFieldSet_MergeFrom_mFC2B2A3949FABEBE37E6966AA39462D221D53B75(L_9, L_11, /*hidden argument*/NULL);
		__this->set__unknownFields_1(L_12);
		// }
		return;
	}
}
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto::MergeFrom(Google.Protobuf.CodedInputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityRLOutputProto_MergeFrom_m42D007604F1DBE6E3C5518B4C31D0548D9B3A62F (UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7 * __this, CodedInputStream_t90AE13DCCB9A5F6C02B698E7EDC3E79A5F585C24 * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRLOutputProto_MergeFrom_m42D007604F1DBE6E3C5518B4C31D0548D9B3A62F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		goto IL_003f;
	}

IL_0002:
	{
		// switch(tag) {
		uint32_t L_0 = V_0;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)18))))
		{
			goto IL_0020;
		}
	}
	{
		uint32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)26))))
		{
			goto IL_0033;
		}
	}
	{
		// _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, input);
		UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * L_2 = __this->get__unknownFields_1();
		CodedInputStream_t90AE13DCCB9A5F6C02B698E7EDC3E79A5F585C24 * L_3 = ___input0;
		UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * L_4 = UnknownFieldSet_MergeFieldFrom_m85004DAA185E6DBC8B7AABE34A8D61730D38EE51(L_2, L_3, /*hidden argument*/NULL);
		__this->set__unknownFields_1(L_4);
		// break;
		goto IL_003f;
	}

IL_0020:
	{
		// agentInfos_.AddEntriesFrom(input, _map_agentInfos_codec);
		MapField_2_t8BA58C589830633C7DCCC6E650D623B9E1EDC681 * L_5 = __this->get_agentInfos__3();
		CodedInputStream_t90AE13DCCB9A5F6C02B698E7EDC3E79A5F585C24 * L_6 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7_il2cpp_TypeInfo_var);
		Codec_t783AB5BD5C8C87BB04A840234E5A6E38B1991493 * L_7 = ((UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7_StaticFields*)il2cpp_codegen_static_fields_for(UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7_il2cpp_TypeInfo_var))->get__map_agentInfos_codec_2();
		NullCheck(L_5);
		MapField_2_AddEntriesFrom_mD2A342155482742418F8A76701E7012837F0443A(L_5, L_6, L_7, /*hidden argument*/MapField_2_AddEntriesFrom_mD2A342155482742418F8A76701E7012837F0443A_RuntimeMethod_var);
		// break;
		goto IL_003f;
	}

IL_0033:
	{
		// SideChannel = input.ReadBytes();
		CodedInputStream_t90AE13DCCB9A5F6C02B698E7EDC3E79A5F585C24 * L_8 = ___input0;
		NullCheck(L_8);
		ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * L_9 = CodedInputStream_ReadBytes_mADEAEDDAE3A4B3E07099D9BFA9C391A7DDB97876(L_8, /*hidden argument*/NULL);
		UnityRLOutputProto_set_SideChannel_mA95C514E35E334FC8D5AB2138162C5A4CC8D1A63(__this, L_9, /*hidden argument*/NULL);
	}

IL_003f:
	{
		// while ((tag = input.ReadTag()) != 0) {
		CodedInputStream_t90AE13DCCB9A5F6C02B698E7EDC3E79A5F585C24 * L_10 = ___input0;
		NullCheck(L_10);
		uint32_t L_11 = CodedInputStream_ReadTag_m6FFC6CE4BC783735866EBFC3CC95E769206A9EFB(L_10, /*hidden argument*/NULL);
		uint32_t L_12 = L_11;
		V_0 = L_12;
		if (L_12)
		{
			goto IL_0002;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityRLOutputProto__cctor_m53C809D89DCB2523BBA3EDCA80F7495E8B04E92A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRLOutputProto__cctor_m53C809D89DCB2523BBA3EDCA80F7495E8B04E92A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly pb::MessageParser<UnityRLOutputProto> _parser = new pb::MessageParser<UnityRLOutputProto>(() => new UnityRLOutputProto());
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t1C9BDC2165F2217C8C45838436E89F90ABEC413C_il2cpp_TypeInfo_var);
		U3CU3Ec_t1C9BDC2165F2217C8C45838436E89F90ABEC413C * L_0 = ((U3CU3Ec_t1C9BDC2165F2217C8C45838436E89F90ABEC413C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1C9BDC2165F2217C8C45838436E89F90ABEC413C_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_1_tDC2B2E30FB41913C53E3A196F871F8F1B2C5DEF9 * L_1 = (Func_1_tDC2B2E30FB41913C53E3A196F871F8F1B2C5DEF9 *)il2cpp_codegen_object_new(Func_1_tDC2B2E30FB41913C53E3A196F871F8F1B2C5DEF9_il2cpp_TypeInfo_var);
		Func_1__ctor_m9D38EE1CA6A0069DBABF212B889CDD16B33E57A9(L_1, L_0, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__31_0_m30880B593C2A046A3276C89F06DA6E5CE820F68E_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m9D38EE1CA6A0069DBABF212B889CDD16B33E57A9_RuntimeMethod_var);
		MessageParser_1_t599AFE94D623A6084E4A6E9656D1DE8C69383948 * L_2 = (MessageParser_1_t599AFE94D623A6084E4A6E9656D1DE8C69383948 *)il2cpp_codegen_object_new(MessageParser_1_t599AFE94D623A6084E4A6E9656D1DE8C69383948_il2cpp_TypeInfo_var);
		MessageParser_1__ctor_mC2124E5CFE990D94DFBD3DE2204783B57411FA96(L_2, L_1, /*hidden argument*/MessageParser_1__ctor_mC2124E5CFE990D94DFBD3DE2204783B57411FA96_RuntimeMethod_var);
		((UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7_StaticFields*)il2cpp_codegen_static_fields_for(UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7_il2cpp_TypeInfo_var))->set__parser_0(L_2);
		// private static readonly pbc::MapField<string, global::Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto.Types.ListAgentInfoProto>.Codec _map_agentInfos_codec
		//     = new pbc::MapField<string, global::Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto.Types.ListAgentInfoProto>.Codec(pb::FieldCodec.ForString(10), pb::FieldCodec.ForMessage(18, global::Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto.Types.ListAgentInfoProto.Parser), 18);
		FieldCodec_1_t156034F6D44891148E8D3C98BCDB5672D2CE4A29 * L_3 = FieldCodec_ForString_m06E3BA3C951B030A6D4A40A53B8901A01B5FF436(((int32_t)10), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354_il2cpp_TypeInfo_var);
		MessageParser_1_tFCC153276983A237B272DFE38939C2203C07096E * L_4 = ListAgentInfoProto_get_Parser_mE43947C6D53FF14A540E7E3DACA5E0BBBC395C18_inline(/*hidden argument*/NULL);
		FieldCodec_1_t28E6C8B6C890722CF301D6ADEA9FA22C442E2791 * L_5 = FieldCodec_ForMessage_TisListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354_mE729CC0E7499CDC79E0FD180D39862F6915ECF01(((int32_t)18), L_4, /*hidden argument*/FieldCodec_ForMessage_TisListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354_mE729CC0E7499CDC79E0FD180D39862F6915ECF01_RuntimeMethod_var);
		Codec_t783AB5BD5C8C87BB04A840234E5A6E38B1991493 * L_6 = (Codec_t783AB5BD5C8C87BB04A840234E5A6E38B1991493 *)il2cpp_codegen_object_new(Codec_t783AB5BD5C8C87BB04A840234E5A6E38B1991493_il2cpp_TypeInfo_var);
		Codec__ctor_mD08C81168009A194678420B54C783D20A045F685(L_6, L_3, L_5, ((int32_t)18), /*hidden argument*/Codec__ctor_mD08C81168009A194678420B54C783D20A045F685_RuntimeMethod_var);
		((UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7_StaticFields*)il2cpp_codegen_static_fields_for(UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7_il2cpp_TypeInfo_var))->set__map_agentInfos_codec_2(L_6);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mDCC1BB69144CEA5BA55F46FAFE4A6B7825935166 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_mDCC1BB69144CEA5BA55F46FAFE4A6B7825935166_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t1C9BDC2165F2217C8C45838436E89F90ABEC413C * L_0 = (U3CU3Ec_t1C9BDC2165F2217C8C45838436E89F90ABEC413C *)il2cpp_codegen_object_new(U3CU3Ec_t1C9BDC2165F2217C8C45838436E89F90ABEC413C_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m8C2B0DD37436C9FABF1BF1C4F5AA2DF60193C268(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t1C9BDC2165F2217C8C45838436E89F90ABEC413C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1C9BDC2165F2217C8C45838436E89F90ABEC413C_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8C2B0DD37436C9FABF1BF1C4F5AA2DF60193C268 (U3CU3Ec_t1C9BDC2165F2217C8C45838436E89F90ABEC413C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/<>c::<.cctor>b__31_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7 * U3CU3Ec_U3C_cctorU3Eb__31_0_m30880B593C2A046A3276C89F06DA6E5CE820F68E (U3CU3Ec_t1C9BDC2165F2217C8C45838436E89F90ABEC413C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__31_0_m30880B593C2A046A3276C89F06DA6E5CE820F68E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly pb::MessageParser<UnityRLOutputProto> _parser = new pb::MessageParser<UnityRLOutputProto>(() => new UnityRLOutputProto());
		UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7 * L_0 = (UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7 *)il2cpp_codegen_object_new(UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7_il2cpp_TypeInfo_var);
		UnityRLOutputProto__ctor_m866DD6AA97506ECA09BE39D6C76854E4EA72E0EA(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Google.Protobuf.MessageParser`1<Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto> Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto::get_Parser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageParser_1_tFCC153276983A237B272DFE38939C2203C07096E * ListAgentInfoProto_get_Parser_mE43947C6D53FF14A540E7E3DACA5E0BBBC395C18 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListAgentInfoProto_get_Parser_mE43947C6D53FF14A540E7E3DACA5E0BBBC395C18_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static pb::MessageParser<ListAgentInfoProto> Parser { get { return _parser; } }
		IL2CPP_RUNTIME_CLASS_INIT(ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354_il2cpp_TypeInfo_var);
		MessageParser_1_tFCC153276983A237B272DFE38939C2203C07096E * L_0 = ((ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354_StaticFields*)il2cpp_codegen_static_fields_for(ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354_il2cpp_TypeInfo_var))->get__parser_0();
		return L_0;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_t66BFACC1855F8CF3B4F0FB366C773ECDCBE900CB * ListAgentInfoProto_get_Descriptor_m13CE7EA88D9484F010D80B88D74DFB9CD6272021 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListAgentInfoProto_get_Descriptor_m13CE7EA88D9484F010D80B88D74DFB9CD6272021_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return global::Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto.Descriptor.NestedTypes[0]; }
		IL2CPP_RUNTIME_CLASS_INIT(UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7_il2cpp_TypeInfo_var);
		MessageDescriptor_t66BFACC1855F8CF3B4F0FB366C773ECDCBE900CB * L_0 = UnityRLOutputProto_get_Descriptor_mC405795B20ABAAD003497CBAF06B23A701A0D4FF(/*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = MessageDescriptor_get_NestedTypes_m6C005AD1BD430E30D7A2C808A761C5ED5CCC8D47_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		MessageDescriptor_t66BFACC1855F8CF3B4F0FB366C773ECDCBE900CB * L_2 = InterfaceFuncInvoker1< MessageDescriptor_t66BFACC1855F8CF3B4F0FB366C773ECDCBE900CB *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<Google.Protobuf.Reflection.MessageDescriptor>::get_Item(System.Int32) */, IList_1_tBFA28A10AE545176F19CEBAE995B37D51D9B5EE1_il2cpp_TypeInfo_var, L_1, 0);
		return L_2;
	}
}
// Google.Protobuf.Reflection.MessageDescriptor Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto::pb::Google.Protobuf.IMessage.get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageDescriptor_t66BFACC1855F8CF3B4F0FB366C773ECDCBE900CB * ListAgentInfoProto_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_m2B2AC9B5D46EF40739A945B19AF202EBF0513ECE (ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListAgentInfoProto_pbU3AU3AGoogle_Protobuf_IMessage_get_Descriptor_m2B2AC9B5D46EF40739A945B19AF202EBF0513ECE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return Descriptor; }
		IL2CPP_RUNTIME_CLASS_INIT(ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354_il2cpp_TypeInfo_var);
		MessageDescriptor_t66BFACC1855F8CF3B4F0FB366C773ECDCBE900CB * L_0 = ListAgentInfoProto_get_Descriptor_m13CE7EA88D9484F010D80B88D74DFB9CD6272021(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListAgentInfoProto__ctor_mCBAB94463AA37F83FB31A6AAB3DB873054BD5843 (ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListAgentInfoProto__ctor_mCBAB94463AA37F83FB31A6AAB3DB873054BD5843_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly pbc::RepeatedField<global::Unity.MLAgents.CommunicatorObjects.AgentInfoProto> value_ = new pbc::RepeatedField<global::Unity.MLAgents.CommunicatorObjects.AgentInfoProto>();
		RepeatedField_1_tCF11F7126638E9C61AA512264FF6A708BACA9785 * L_0 = (RepeatedField_1_tCF11F7126638E9C61AA512264FF6A708BACA9785 *)il2cpp_codegen_object_new(RepeatedField_1_tCF11F7126638E9C61AA512264FF6A708BACA9785_il2cpp_TypeInfo_var);
		RepeatedField_1__ctor_m114BFD1851942E9E40B55D20DBACB5ACB3B44834(L_0, /*hidden argument*/RepeatedField_1__ctor_m114BFD1851942E9E40B55D20DBACB5ACB3B44834_RuntimeMethod_var);
		__this->set_value__3(L_0);
		// public ListAgentInfoProto() {
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto::.ctor(Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListAgentInfoProto__ctor_m082350D1408AEC06590A38EC0B72A4D59DB8D0B2 (ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354 * __this, ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListAgentInfoProto__ctor_m082350D1408AEC06590A38EC0B72A4D59DB8D0B2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ListAgentInfoProto(ListAgentInfoProto other) : this() {
		ListAgentInfoProto__ctor_mCBAB94463AA37F83FB31A6AAB3DB873054BD5843(__this, /*hidden argument*/NULL);
		// value_ = other.value_.Clone();
		ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354 * L_0 = ___other0;
		NullCheck(L_0);
		RepeatedField_1_tCF11F7126638E9C61AA512264FF6A708BACA9785 * L_1 = L_0->get_value__3();
		NullCheck(L_1);
		RepeatedField_1_tCF11F7126638E9C61AA512264FF6A708BACA9785 * L_2 = RepeatedField_1_Clone_m1F102FCCEFA88998A34BD42E3AEE78F669A05DD0(L_1, /*hidden argument*/RepeatedField_1_Clone_m1F102FCCEFA88998A34BD42E3AEE78F669A05DD0_RuntimeMethod_var);
		__this->set_value__3(L_2);
		// _unknownFields = pb::UnknownFieldSet.Clone(other._unknownFields);
		ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354 * L_3 = ___other0;
		NullCheck(L_3);
		UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * L_4 = L_3->get__unknownFields_1();
		UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * L_5 = UnknownFieldSet_Clone_mA6F97A86D04484D55E0015A1BB9A08BA895BA075(L_4, /*hidden argument*/NULL);
		__this->set__unknownFields_1(L_5);
		// }
		return;
	}
}
// Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354 * ListAgentInfoProto_Clone_m1773E5E27A3686CD7540FAB3B5CA4D9F9349928F (ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListAgentInfoProto_Clone_m1773E5E27A3686CD7540FAB3B5CA4D9F9349928F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new ListAgentInfoProto(this);
		ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354 * L_0 = (ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354 *)il2cpp_codegen_object_new(ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354_il2cpp_TypeInfo_var);
		ListAgentInfoProto__ctor_m082350D1408AEC06590A38EC0B72A4D59DB8D0B2(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// Google.Protobuf.Collections.RepeatedField`1<Unity.MLAgents.CommunicatorObjects.AgentInfoProto> Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RepeatedField_1_tCF11F7126638E9C61AA512264FF6A708BACA9785 * ListAgentInfoProto_get_Value_mB6A0AF6FEA03AC49E20E93805A6167D1537B9FF1 (ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354 * __this, const RuntimeMethod* method)
{
	{
		// get { return value_; }
		RepeatedField_1_tCF11F7126638E9C61AA512264FF6A708BACA9785 * L_0 = __this->get_value__3();
		return L_0;
	}
}
// System.Boolean Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ListAgentInfoProto_Equals_m799A07E24917B7E074F9176A079528AA68A35453 (ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListAgentInfoProto_Equals_m799A07E24917B7E074F9176A079528AA68A35453_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Equals(other as ListAgentInfoProto);
		RuntimeObject * L_0 = ___other0;
		bool L_1 = ListAgentInfoProto_Equals_m6810C439789F423BB0749E7935195DC87004D7AA(__this, ((ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354 *)IsInstSealed((RuntimeObject*)L_0, ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto::Equals(Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ListAgentInfoProto_Equals_m6810C439789F423BB0749E7935195DC87004D7AA (ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354 * __this, ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListAgentInfoProto_Equals_m6810C439789F423BB0749E7935195DC87004D7AA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ReferenceEquals(other, null)) {
		ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354 * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0005:
	{
		// if (ReferenceEquals(other, this)) {
		ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354 * L_1 = ___other0;
		if ((!(((RuntimeObject*)(ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354 *)L_1) == ((RuntimeObject*)(ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354 *)__this))))
		{
			goto IL_000b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000b:
	{
		// if(!value_.Equals(other.value_)) return false;
		RepeatedField_1_tCF11F7126638E9C61AA512264FF6A708BACA9785 * L_2 = __this->get_value__3();
		ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354 * L_3 = ___other0;
		NullCheck(L_3);
		RepeatedField_1_tCF11F7126638E9C61AA512264FF6A708BACA9785 * L_4 = L_3->get_value__3();
		NullCheck(L_2);
		bool L_5 = RepeatedField_1_Equals_m8944DD0E59BA6DBE56DFCBE09A0D188A888BB233(L_2, L_4, /*hidden argument*/RepeatedField_1_Equals_m8944DD0E59BA6DBE56DFCBE09A0D188A888BB233_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_0020;
		}
	}
	{
		// if(!value_.Equals(other.value_)) return false;
		return (bool)0;
	}

IL_0020:
	{
		// return Equals(_unknownFields, other._unknownFields);
		UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * L_6 = __this->get__unknownFields_1();
		ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354 * L_7 = ___other0;
		NullCheck(L_7);
		UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * L_8 = L_7->get__unknownFields_1();
		bool L_9 = Object_Equals_mD98CD6D19C28ADC48B8468F78F94D38E203D0521(L_6, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Int32 Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ListAgentInfoProto_GetHashCode_m981AC265F2AC7FE9B9BF8A0F9590992C3A0A3B51 (ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// int hash = 1;
		V_0 = 1;
		// hash ^= value_.GetHashCode();
		int32_t L_0 = V_0;
		RepeatedField_1_tCF11F7126638E9C61AA512264FF6A708BACA9785 * L_1 = __this->get_value__3();
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		V_0 = ((int32_t)((int32_t)L_0^(int32_t)L_2));
		// if (_unknownFields != null) {
		UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * L_3 = __this->get__unknownFields_1();
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		// hash ^= _unknownFields.GetHashCode();
		int32_t L_4 = V_0;
		UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * L_5 = __this->get__unknownFields_1();
		NullCheck(L_5);
		int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_5);
		V_0 = ((int32_t)((int32_t)L_4^(int32_t)L_6));
	}

IL_0026:
	{
		// return hash;
		int32_t L_7 = V_0;
		return L_7;
	}
}
// System.String Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ListAgentInfoProto_ToString_m3302D472013E659F176AFC359E04CD7DE7C56AEE (ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListAgentInfoProto_ToString_m3302D472013E659F176AFC359E04CD7DE7C56AEE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return pb::JsonFormatter.ToDiagnosticString(this);
		IL2CPP_RUNTIME_CLASS_INIT(JsonFormatter_tFF068B629D936222A398D2CDBD4A445525D3E5E7_il2cpp_TypeInfo_var);
		String_t* L_0 = JsonFormatter_ToDiagnosticString_m035CD03C07A6C01C8124FB391CA2498527CF6511(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto::WriteTo(Google.Protobuf.CodedOutputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListAgentInfoProto_WriteTo_m1B4782111F82D9686B8E372FACD452830228790E (ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354 * __this, CodedOutputStream_tEDA55D3B33B67A94D65BA47D099A2710F29AEDCA * ___output0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListAgentInfoProto_WriteTo_m1B4782111F82D9686B8E372FACD452830228790E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// value_.WriteTo(output, _repeated_value_codec);
		RepeatedField_1_tCF11F7126638E9C61AA512264FF6A708BACA9785 * L_0 = __this->get_value__3();
		CodedOutputStream_tEDA55D3B33B67A94D65BA47D099A2710F29AEDCA * L_1 = ___output0;
		IL2CPP_RUNTIME_CLASS_INIT(ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354_il2cpp_TypeInfo_var);
		FieldCodec_1_tCA7C1F70281CCD6EEAB215F57EF24B5E6CFCC629 * L_2 = ((ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354_StaticFields*)il2cpp_codegen_static_fields_for(ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354_il2cpp_TypeInfo_var))->get__repeated_value_codec_2();
		NullCheck(L_0);
		RepeatedField_1_WriteTo_mA2C3B90B90E724DD48D1D8013644F7279D267112(L_0, L_1, L_2, /*hidden argument*/RepeatedField_1_WriteTo_mA2C3B90B90E724DD48D1D8013644F7279D267112_RuntimeMethod_var);
		// if (_unknownFields != null) {
		UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * L_3 = __this->get__unknownFields_1();
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		// _unknownFields.WriteTo(output);
		UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * L_4 = __this->get__unknownFields_1();
		CodedOutputStream_tEDA55D3B33B67A94D65BA47D099A2710F29AEDCA * L_5 = ___output0;
		NullCheck(L_4);
		UnknownFieldSet_WriteTo_m3424C9BA71D0B5D7FAAE9E036273F95F49C89B3C(L_4, L_5, /*hidden argument*/NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Int32 Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto::CalculateSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ListAgentInfoProto_CalculateSize_mE9D5A21D53C7BB3E0F5E29506148EBCF19A8ADB8 (ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListAgentInfoProto_CalculateSize_mE9D5A21D53C7BB3E0F5E29506148EBCF19A8ADB8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int size = 0;
		V_0 = 0;
		// size += value_.CalculateSize(_repeated_value_codec);
		int32_t L_0 = V_0;
		RepeatedField_1_tCF11F7126638E9C61AA512264FF6A708BACA9785 * L_1 = __this->get_value__3();
		IL2CPP_RUNTIME_CLASS_INIT(ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354_il2cpp_TypeInfo_var);
		FieldCodec_1_tCA7C1F70281CCD6EEAB215F57EF24B5E6CFCC629 * L_2 = ((ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354_StaticFields*)il2cpp_codegen_static_fields_for(ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354_il2cpp_TypeInfo_var))->get__repeated_value_codec_2();
		NullCheck(L_1);
		int32_t L_3 = RepeatedField_1_CalculateSize_m740D6E3E74F9A83F042CB85126FE964D01B25B15(L_1, L_2, /*hidden argument*/RepeatedField_1_CalculateSize_m740D6E3E74F9A83F042CB85126FE964D01B25B15_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_3));
		// if (_unknownFields != null) {
		UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * L_4 = __this->get__unknownFields_1();
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		// size += _unknownFields.CalculateSize();
		int32_t L_5 = V_0;
		UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * L_6 = __this->get__unknownFields_1();
		NullCheck(L_6);
		int32_t L_7 = UnknownFieldSet_CalculateSize_mA7C6692435A234A3099B04DB0D0E4290648EB03D(L_6, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)L_7));
	}

IL_002b:
	{
		// return size;
		int32_t L_8 = V_0;
		return L_8;
	}
}
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto::MergeFrom(Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListAgentInfoProto_MergeFrom_mB5201BC5D29AA3A41DB5FA5D2716258BA68BE2EE (ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354 * __this, ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListAgentInfoProto_MergeFrom_mB5201BC5D29AA3A41DB5FA5D2716258BA68BE2EE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other == null) {
		ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354 * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// return;
		return;
	}

IL_0004:
	{
		// value_.Add(other.value_);
		RepeatedField_1_tCF11F7126638E9C61AA512264FF6A708BACA9785 * L_1 = __this->get_value__3();
		ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354 * L_2 = ___other0;
		NullCheck(L_2);
		RepeatedField_1_tCF11F7126638E9C61AA512264FF6A708BACA9785 * L_3 = L_2->get_value__3();
		NullCheck(L_1);
		RepeatedField_1_Add_m9DE5A811ECBC3D2EAD811F678BA8BC20585E1DE8(L_1, L_3, /*hidden argument*/RepeatedField_1_Add_m9DE5A811ECBC3D2EAD811F678BA8BC20585E1DE8_RuntimeMethod_var);
		// _unknownFields = pb::UnknownFieldSet.MergeFrom(_unknownFields, other._unknownFields);
		UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * L_4 = __this->get__unknownFields_1();
		ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354 * L_5 = ___other0;
		NullCheck(L_5);
		UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * L_6 = L_5->get__unknownFields_1();
		UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * L_7 = UnknownFieldSet_MergeFrom_mFC2B2A3949FABEBE37E6966AA39462D221D53B75(L_4, L_6, /*hidden argument*/NULL);
		__this->set__unknownFields_1(L_7);
		// }
		return;
	}
}
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto::MergeFrom(Google.Protobuf.CodedInputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListAgentInfoProto_MergeFrom_mEE5B21BA5FB8E1E26F83640E07EB41B3F20A702E (ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354 * __this, CodedInputStream_t90AE13DCCB9A5F6C02B698E7EDC3E79A5F585C24 * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListAgentInfoProto_MergeFrom_mEE5B21BA5FB8E1E26F83640E07EB41B3F20A702E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		goto IL_002c;
	}

IL_0002:
	{
		// switch(tag) {
		uint32_t L_0 = V_0;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)10))))
		{
			goto IL_001b;
		}
	}
	{
		// _unknownFields = pb::UnknownFieldSet.MergeFieldFrom(_unknownFields, input);
		UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * L_1 = __this->get__unknownFields_1();
		CodedInputStream_t90AE13DCCB9A5F6C02B698E7EDC3E79A5F585C24 * L_2 = ___input0;
		UnknownFieldSet_t119DFFCAEEE73ED069D5D96AE7C089F5245697E5 * L_3 = UnknownFieldSet_MergeFieldFrom_m85004DAA185E6DBC8B7AABE34A8D61730D38EE51(L_1, L_2, /*hidden argument*/NULL);
		__this->set__unknownFields_1(L_3);
		// break;
		goto IL_002c;
	}

IL_001b:
	{
		// value_.AddEntriesFrom(input, _repeated_value_codec);
		RepeatedField_1_tCF11F7126638E9C61AA512264FF6A708BACA9785 * L_4 = __this->get_value__3();
		CodedInputStream_t90AE13DCCB9A5F6C02B698E7EDC3E79A5F585C24 * L_5 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354_il2cpp_TypeInfo_var);
		FieldCodec_1_tCA7C1F70281CCD6EEAB215F57EF24B5E6CFCC629 * L_6 = ((ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354_StaticFields*)il2cpp_codegen_static_fields_for(ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354_il2cpp_TypeInfo_var))->get__repeated_value_codec_2();
		NullCheck(L_4);
		RepeatedField_1_AddEntriesFrom_m6C8F8634E6CA4B4EF88251F60497D41213D405C1(L_4, L_5, L_6, /*hidden argument*/RepeatedField_1_AddEntriesFrom_m6C8F8634E6CA4B4EF88251F60497D41213D405C1_RuntimeMethod_var);
	}

IL_002c:
	{
		// while ((tag = input.ReadTag()) != 0) {
		CodedInputStream_t90AE13DCCB9A5F6C02B698E7EDC3E79A5F585C24 * L_7 = ___input0;
		NullCheck(L_7);
		uint32_t L_8 = CodedInputStream_ReadTag_m6FFC6CE4BC783735866EBFC3CC95E769206A9EFB(L_7, /*hidden argument*/NULL);
		uint32_t L_9 = L_8;
		V_0 = L_9;
		if (L_9)
		{
			goto IL_0002;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListAgentInfoProto__cctor_m848E6C0C6001D5DE3625E3F6575DB643BF0C2BF1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListAgentInfoProto__cctor_m848E6C0C6001D5DE3625E3F6575DB643BF0C2BF1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly pb::MessageParser<ListAgentInfoProto> _parser = new pb::MessageParser<ListAgentInfoProto>(() => new ListAgentInfoProto());
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tBA763BFD8BA8427B116C9861173A6C8BE5876A30_il2cpp_TypeInfo_var);
		U3CU3Ec_tBA763BFD8BA8427B116C9861173A6C8BE5876A30 * L_0 = ((U3CU3Ec_tBA763BFD8BA8427B116C9861173A6C8BE5876A30_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBA763BFD8BA8427B116C9861173A6C8BE5876A30_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_1_tF822C61A09E63838B55573EB289FC36FBF1F7DFF * L_1 = (Func_1_tF822C61A09E63838B55573EB289FC36FBF1F7DFF *)il2cpp_codegen_object_new(Func_1_tF822C61A09E63838B55573EB289FC36FBF1F7DFF_il2cpp_TypeInfo_var);
		Func_1__ctor_m9A73F7A2589030305E13F6EC1E7883F80ED9030F(L_1, L_0, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__25_0_m74CEDF4CF23861E633E383E138B8503838037182_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m9A73F7A2589030305E13F6EC1E7883F80ED9030F_RuntimeMethod_var);
		MessageParser_1_tFCC153276983A237B272DFE38939C2203C07096E * L_2 = (MessageParser_1_tFCC153276983A237B272DFE38939C2203C07096E *)il2cpp_codegen_object_new(MessageParser_1_tFCC153276983A237B272DFE38939C2203C07096E_il2cpp_TypeInfo_var);
		MessageParser_1__ctor_m9D6428DC4A296A9762D4D8D652723C7880410F5E(L_2, L_1, /*hidden argument*/MessageParser_1__ctor_m9D6428DC4A296A9762D4D8D652723C7880410F5E_RuntimeMethod_var);
		((ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354_StaticFields*)il2cpp_codegen_static_fields_for(ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354_il2cpp_TypeInfo_var))->set__parser_0(L_2);
		// private static readonly pb::FieldCodec<global::Unity.MLAgents.CommunicatorObjects.AgentInfoProto> _repeated_value_codec
		//     = pb::FieldCodec.ForMessage(10, global::Unity.MLAgents.CommunicatorObjects.AgentInfoProto.Parser);
		IL2CPP_RUNTIME_CLASS_INIT(AgentInfoProto_tB07CB4D6C9A6367975913C1581FAA29FDB4FF5B0_il2cpp_TypeInfo_var);
		MessageParser_1_t22E2BEA51C2B5AD6B1005D5F6AD497277762E2CE * L_3 = AgentInfoProto_get_Parser_mD32C2989338F0DB9DB3017716FEAFEE008D1682C_inline(/*hidden argument*/NULL);
		FieldCodec_1_tCA7C1F70281CCD6EEAB215F57EF24B5E6CFCC629 * L_4 = FieldCodec_ForMessage_TisAgentInfoProto_tB07CB4D6C9A6367975913C1581FAA29FDB4FF5B0_m15E459C5F286D035E858CD73F9EA87506E2C9842(((int32_t)10), L_3, /*hidden argument*/FieldCodec_ForMessage_TisAgentInfoProto_tB07CB4D6C9A6367975913C1581FAA29FDB4FF5B0_m15E459C5F286D035E858CD73F9EA87506E2C9842_RuntimeMethod_var);
		((ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354_StaticFields*)il2cpp_codegen_static_fields_for(ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354_il2cpp_TypeInfo_var))->set__repeated_value_codec_2(L_4);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m1AE0DE1E7DFC17DD898D96EC8A66E6A3216E125C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m1AE0DE1E7DFC17DD898D96EC8A66E6A3216E125C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tBA763BFD8BA8427B116C9861173A6C8BE5876A30 * L_0 = (U3CU3Ec_tBA763BFD8BA8427B116C9861173A6C8BE5876A30 *)il2cpp_codegen_object_new(U3CU3Ec_tBA763BFD8BA8427B116C9861173A6C8BE5876A30_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m8327D1F2656994D840DDEE2DB2485FE4326C8F2E(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tBA763BFD8BA8427B116C9861173A6C8BE5876A30_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBA763BFD8BA8427B116C9861173A6C8BE5876A30_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8327D1F2656994D840DDEE2DB2485FE4326C8F2E (U3CU3Ec_tBA763BFD8BA8427B116C9861173A6C8BE5876A30 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto/Types/ListAgentInfoProto/<>c::<.cctor>b__25_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354 * U3CU3Ec_U3C_cctorU3Eb__25_0_m74CEDF4CF23861E633E383E138B8503838037182 (U3CU3Ec_tBA763BFD8BA8427B116C9861173A6C8BE5876A30 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__25_0_m74CEDF4CF23861E633E383E138B8503838037182_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly pb::MessageParser<ListAgentInfoProto> _parser = new pb::MessageParser<ListAgentInfoProto>(() => new ListAgentInfoProto());
		ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354 * L_0 = (ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354 *)il2cpp_codegen_object_new(ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354_il2cpp_TypeInfo_var);
		ListAgentInfoProto__ctor_mCBAB94463AA37F83FB31A6AAB3DB873054BD5843(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Google.Protobuf.Reflection.FileDescriptor Unity.MLAgents.CommunicatorObjects.UnityRlInitializationInputReflection::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * UnityRlInitializationInputReflection_get_Descriptor_m7B6F84785DB977708ADDC39872D586217809C134 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRlInitializationInputReflection_get_Descriptor_m7B6F84785DB977708ADDC39872D586217809C134_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return descriptor; }
		IL2CPP_RUNTIME_CLASS_INIT(UnityRlInitializationInputReflection_t81105574968FC44D34BD8A1EC3A81E7EB0B76E0C_il2cpp_TypeInfo_var);
		FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * L_0 = ((UnityRlInitializationInputReflection_t81105574968FC44D34BD8A1EC3A81E7EB0B76E0C_StaticFields*)il2cpp_codegen_static_fields_for(UnityRlInitializationInputReflection_t81105574968FC44D34BD8A1EC3A81E7EB0B76E0C_il2cpp_TypeInfo_var))->get_descriptor_0();
		return L_0;
	}
}
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRlInitializationInputReflection::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityRlInitializationInputReflection__cctor_m00386482AED2EAEEE8EEC4C7556B5386761B077C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRlInitializationInputReflection__cctor_m00386482AED2EAEEE8EEC4C7556B5386761B077C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// byte[] descriptorData = global::System.Convert.FromBase64String(
		//     string.Concat(
		//       "CkZtbGFnZW50c19lbnZzL2NvbW11bmljYXRvcl9vYmplY3RzL3VuaXR5X3Js",
		//       "X2luaXRpYWxpemF0aW9uX2lucHV0LnByb3RvEhRjb21tdW5pY2F0b3Jfb2Jq",
		//       "ZWN0cxo1bWxhZ2VudHNfZW52cy9jb21tdW5pY2F0b3Jfb2JqZWN0cy9jYXBh",
		//       "YmlsaXRpZXMucHJvdG8irQEKH1VuaXR5UkxJbml0aWFsaXphdGlvbklucHV0",
		//       "UHJvdG8SDAoEc2VlZBgBIAEoBRIdChVjb21tdW5pY2F0aW9uX3ZlcnNpb24Y",
		//       "AiABKAkSFwoPcGFja2FnZV92ZXJzaW9uGAMgASgJEkQKDGNhcGFiaWxpdGll",
		//       "cxgEIAEoCzIuLmNvbW11bmljYXRvcl9vYmplY3RzLlVuaXR5UkxDYXBhYmls",
		//       "aXRpZXNQcm90b0IlqgIiVW5pdHkuTUxBZ2VudHMuQ29tbXVuaWNhdG9yT2Jq",
		//       "ZWN0c2IGcHJvdG8z"));
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralA48523D5FE5A0D317430DCD088970AF12BFA3200);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA48523D5FE5A0D317430DCD088970AF12BFA3200);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteralE6DBD26BBD42AA1D99763E4C53D9347DAE427233);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralE6DBD26BBD42AA1D99763E4C53D9347DAE427233);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralB06734812D8E1B3C4904ED47EFBCCBCE2AEC8FF9);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralB06734812D8E1B3C4904ED47EFBCCBCE2AEC8FF9);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral9F48921A45C7C3B043F1B8C608C0A31DBE3124B8);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral9F48921A45C7C3B043F1B8C608C0A31DBE3124B8);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral690454EDCC5DFC6572D201C46BA29D60390979CE);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral690454EDCC5DFC6572D201C46BA29D60390979CE);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral541D601CCE75BC11048E5E4D46F3BDB308D06A53);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral541D601CCE75BC11048E5E4D46F3BDB308D06A53);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral07AC4E40643C83D5C018288B4C2B24E7D45A366A);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral07AC4E40643C83D5C018288B4C2B24E7D45A366A);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral9955750869EC6D81959EC7650AAC53D010E4373C);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral9955750869EC6D81959EC7650AAC53D010E4373C);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteralCDFC4D69660EC6CA73FB83169FBED7C57B287C9D);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralCDFC4D69660EC6CA73FB83169FBED7C57B287C9D);
		String_t* L_10 = String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_11 = Convert_FromBase64String_m079F788D000703E8018DA39BE9C05F1CBF60B156(L_10, /*hidden argument*/NULL);
		// descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
		//     new pbr::FileDescriptor[] { global::Unity.MLAgents.CommunicatorObjects.CapabilitiesReflection.Descriptor, },
		//     new pbr::GeneratedClrTypeInfo(null, new pbr::GeneratedClrTypeInfo[] {
		//       new pbr::GeneratedClrTypeInfo(typeof(global::Unity.MLAgents.CommunicatorObjects.UnityRLInitializationInputProto), global::Unity.MLAgents.CommunicatorObjects.UnityRLInitializationInputProto.Parser, new[]{ "Seed", "CommunicationVersion", "PackageVersion", "Capabilities" }, null, null, null)
		//     }));
		FileDescriptorU5BU5D_t91F2611AD4922B7697DBD2C6C8627C68AE7B2D4B* L_12 = (FileDescriptorU5BU5D_t91F2611AD4922B7697DBD2C6C8627C68AE7B2D4B*)(FileDescriptorU5BU5D_t91F2611AD4922B7697DBD2C6C8627C68AE7B2D4B*)SZArrayNew(FileDescriptorU5BU5D_t91F2611AD4922B7697DBD2C6C8627C68AE7B2D4B_il2cpp_TypeInfo_var, (uint32_t)1);
		FileDescriptorU5BU5D_t91F2611AD4922B7697DBD2C6C8627C68AE7B2D4B* L_13 = L_12;
		IL2CPP_RUNTIME_CLASS_INIT(CapabilitiesReflection_tB11BAD1ED4A2E9994A7AA8AEAFF5FEE02FF83C07_il2cpp_TypeInfo_var);
		FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * L_14 = CapabilitiesReflection_get_Descriptor_m6543ED9CF60EA4CA4AB51C90E83144680F7E00DA_inline(/*hidden argument*/NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 *)L_14);
		GeneratedClrTypeInfoU5BU5D_t38490948FF5D4B2D4E8557D1209161FDA3B07C87* L_15 = (GeneratedClrTypeInfoU5BU5D_t38490948FF5D4B2D4E8557D1209161FDA3B07C87*)(GeneratedClrTypeInfoU5BU5D_t38490948FF5D4B2D4E8557D1209161FDA3B07C87*)SZArrayNew(GeneratedClrTypeInfoU5BU5D_t38490948FF5D4B2D4E8557D1209161FDA3B07C87_il2cpp_TypeInfo_var, (uint32_t)1);
		GeneratedClrTypeInfoU5BU5D_t38490948FF5D4B2D4E8557D1209161FDA3B07C87* L_16 = L_15;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_17 = { reinterpret_cast<intptr_t> (UnityRLInitializationInputProto_t80AF7CBDE43BD9439BDCC706F66B3EE5BCCF2762_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_18 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityRLInitializationInputProto_t80AF7CBDE43BD9439BDCC706F66B3EE5BCCF2762_il2cpp_TypeInfo_var);
		MessageParser_1_t282425D3E3A384629DB8B5E5A41C1299DA1FF2FE * L_19 = UnityRLInitializationInputProto_get_Parser_m3A3426B1DDCAC0F07CE62541788DDC4892165D03_inline(/*hidden argument*/NULL);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_20 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)4);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_21 = L_20;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteral32FE9F5BDA708F956B34E6513BBED17121F39547);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral32FE9F5BDA708F956B34E6513BBED17121F39547);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_22 = L_21;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteralB6F2755D6D072E61F10528817AF2FB794FFBA063);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralB6F2755D6D072E61F10528817AF2FB794FFBA063);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_23 = L_22;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteral8BE25866D237EBE052298B2617F4E4A3AC200DC4);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral8BE25866D237EBE052298B2617F4E4A3AC200DC4);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_24 = L_23;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, _stringLiteralCA09C54BFF74A82BAE543EBE259F7452EE8C5293);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralCA09C54BFF74A82BAE543EBE259F7452EE8C5293);
		GeneratedClrTypeInfo_tF2F0DF2AAEC92C81106422AB98D931414053DE97 * L_25 = (GeneratedClrTypeInfo_tF2F0DF2AAEC92C81106422AB98D931414053DE97 *)il2cpp_codegen_object_new(GeneratedClrTypeInfo_tF2F0DF2AAEC92C81106422AB98D931414053DE97_il2cpp_TypeInfo_var);
		GeneratedClrTypeInfo__ctor_m061BADACE7D5089AA0B7645AC47F0D35C3907EB9(L_25, L_18, L_19, L_24, (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)NULL, (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)NULL, (GeneratedClrTypeInfoU5BU5D_t38490948FF5D4B2D4E8557D1209161FDA3B07C87*)(GeneratedClrTypeInfoU5BU5D_t38490948FF5D4B2D4E8557D1209161FDA3B07C87*)NULL, /*hidden argument*/NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_25);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (GeneratedClrTypeInfo_tF2F0DF2AAEC92C81106422AB98D931414053DE97 *)L_25);
		GeneratedClrTypeInfo_tF2F0DF2AAEC92C81106422AB98D931414053DE97 * L_26 = (GeneratedClrTypeInfo_tF2F0DF2AAEC92C81106422AB98D931414053DE97 *)il2cpp_codegen_object_new(GeneratedClrTypeInfo_tF2F0DF2AAEC92C81106422AB98D931414053DE97_il2cpp_TypeInfo_var);
		GeneratedClrTypeInfo__ctor_mA5CF3615FAD8D655D18273D2F76EDD82CE1BA52D(L_26, (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)NULL, L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5_il2cpp_TypeInfo_var);
		FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * L_27 = FileDescriptor_FromGeneratedCode_m56776884BBFE977064E87AD91F33ED221E2D6461(L_11, L_13, L_26, /*hidden argument*/NULL);
		((UnityRlInitializationInputReflection_t81105574968FC44D34BD8A1EC3A81E7EB0B76E0C_StaticFields*)il2cpp_codegen_static_fields_for(UnityRlInitializationInputReflection_t81105574968FC44D34BD8A1EC3A81E7EB0B76E0C_il2cpp_TypeInfo_var))->set_descriptor_0(L_27);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Google.Protobuf.Reflection.FileDescriptor Unity.MLAgents.CommunicatorObjects.UnityRlInitializationOutputReflection::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * UnityRlInitializationOutputReflection_get_Descriptor_m5D0593F6CF414CFFB328036F1D7776864884C30B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRlInitializationOutputReflection_get_Descriptor_m5D0593F6CF414CFFB328036F1D7776864884C30B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return descriptor; }
		IL2CPP_RUNTIME_CLASS_INIT(UnityRlInitializationOutputReflection_t9544B7A86BEA02854A27B25C2BC75A1C45EEBADB_il2cpp_TypeInfo_var);
		FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * L_0 = ((UnityRlInitializationOutputReflection_t9544B7A86BEA02854A27B25C2BC75A1C45EEBADB_StaticFields*)il2cpp_codegen_static_fields_for(UnityRlInitializationOutputReflection_t9544B7A86BEA02854A27B25C2BC75A1C45EEBADB_il2cpp_TypeInfo_var))->get_descriptor_0();
		return L_0;
	}
}
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRlInitializationOutputReflection::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityRlInitializationOutputReflection__cctor_m1E5C8043FAF26406726E17EF5CCC625113E1FCD3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRlInitializationOutputReflection__cctor_m1E5C8043FAF26406726E17EF5CCC625113E1FCD3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// byte[] descriptorData = global::System.Convert.FromBase64String(
		//     string.Concat(
		//       "CkdtbGFnZW50c19lbnZzL2NvbW11bmljYXRvcl9vYmplY3RzL3VuaXR5X3Js",
		//       "X2luaXRpYWxpemF0aW9uX291dHB1dC5wcm90bxIUY29tbXVuaWNhdG9yX29i",
		//       "amVjdHMaNW1sYWdlbnRzX2VudnMvY29tbXVuaWNhdG9yX29iamVjdHMvY2Fw",
		//       "YWJpbGl0aWVzLnByb3RvGjltbGFnZW50c19lbnZzL2NvbW11bmljYXRvcl9v",
		//       "YmplY3RzL2JyYWluX3BhcmFtZXRlcnMucHJvdG8ijAIKIFVuaXR5UkxJbml0",
		//       "aWFsaXphdGlvbk91dHB1dFByb3RvEgwKBG5hbWUYASABKAkSHQoVY29tbXVu",
		//       "aWNhdGlvbl92ZXJzaW9uGAIgASgJEhAKCGxvZ19wYXRoGAMgASgJEkQKEGJy",
		//       "YWluX3BhcmFtZXRlcnMYBSADKAsyKi5jb21tdW5pY2F0b3Jfb2JqZWN0cy5C",
		//       "cmFpblBhcmFtZXRlcnNQcm90bxIXCg9wYWNrYWdlX3ZlcnNpb24YByABKAkS",
		//       "RAoMY2FwYWJpbGl0aWVzGAggASgLMi4uY29tbXVuaWNhdG9yX29iamVjdHMu",
		//       "VW5pdHlSTENhcGFiaWxpdGllc1Byb3RvSgQIBhAHQiWqAiJVbml0eS5NTEFn",
		//       "ZW50cy5Db21tdW5pY2F0b3JPYmplY3RzYgZwcm90bzM="));
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral2EDAF1B67BFBD51BFDEF1ECC4DA9BAA1C1151F25);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2EDAF1B67BFBD51BFDEF1ECC4DA9BAA1C1151F25);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral193EF931A5559CABD96FB5DB88CFC4028C2C6805);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral193EF931A5559CABD96FB5DB88CFC4028C2C6805);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral34E7C6949E83E1DBFBCEE82BBB3EA5F4140D48D5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral34E7C6949E83E1DBFBCEE82BBB3EA5F4140D48D5);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral5A9D51970BF760BC801196CC6808122A6E291EC0);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral5A9D51970BF760BC801196CC6808122A6E291EC0);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral5F7D6B7188F8AE28C5CB69F7A421C495BF9C5BDC);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral5F7D6B7188F8AE28C5CB69F7A421C495BF9C5BDC);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral965427B8585608AC9D4CBA044F560DBFEC070A62);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral965427B8585608AC9D4CBA044F560DBFEC070A62);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral5FD9935F3F24322FB447BE5E2DD698F06C0BB06B);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral5FD9935F3F24322FB447BE5E2DD698F06C0BB06B);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteralCDAB62BA59DAA0FE5DF6148EA94FB976769F14B3);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteralCDAB62BA59DAA0FE5DF6148EA94FB976769F14B3);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteralFD3E35BFE67520CE7654F6494C9DEB36E1DD0F21);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralFD3E35BFE67520CE7654F6494C9DEB36E1DD0F21);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral8D17CDF24AB47C8A7D4A97CA89AE6E25F8152FA2);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral8D17CDF24AB47C8A7D4A97CA89AE6E25F8152FA2);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral53EC5992E9FDDF6202B91779CD6D153FA39278E0);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteral53EC5992E9FDDF6202B91779CD6D153FA39278E0);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_12 = L_11;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral7994115DCA7E35129CBEC37468FB3C229F8C72C2);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteral7994115DCA7E35129CBEC37468FB3C229F8C72C2);
		String_t* L_13 = String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_14 = Convert_FromBase64String_m079F788D000703E8018DA39BE9C05F1CBF60B156(L_13, /*hidden argument*/NULL);
		// descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
		//     new pbr::FileDescriptor[] { global::Unity.MLAgents.CommunicatorObjects.CapabilitiesReflection.Descriptor, global::Unity.MLAgents.CommunicatorObjects.BrainParametersReflection.Descriptor, },
		//     new pbr::GeneratedClrTypeInfo(null, new pbr::GeneratedClrTypeInfo[] {
		//       new pbr::GeneratedClrTypeInfo(typeof(global::Unity.MLAgents.CommunicatorObjects.UnityRLInitializationOutputProto), global::Unity.MLAgents.CommunicatorObjects.UnityRLInitializationOutputProto.Parser, new[]{ "Name", "CommunicationVersion", "LogPath", "BrainParameters", "PackageVersion", "Capabilities" }, null, null, null)
		//     }));
		FileDescriptorU5BU5D_t91F2611AD4922B7697DBD2C6C8627C68AE7B2D4B* L_15 = (FileDescriptorU5BU5D_t91F2611AD4922B7697DBD2C6C8627C68AE7B2D4B*)(FileDescriptorU5BU5D_t91F2611AD4922B7697DBD2C6C8627C68AE7B2D4B*)SZArrayNew(FileDescriptorU5BU5D_t91F2611AD4922B7697DBD2C6C8627C68AE7B2D4B_il2cpp_TypeInfo_var, (uint32_t)2);
		FileDescriptorU5BU5D_t91F2611AD4922B7697DBD2C6C8627C68AE7B2D4B* L_16 = L_15;
		IL2CPP_RUNTIME_CLASS_INIT(CapabilitiesReflection_tB11BAD1ED4A2E9994A7AA8AEAFF5FEE02FF83C07_il2cpp_TypeInfo_var);
		FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * L_17 = CapabilitiesReflection_get_Descriptor_m6543ED9CF60EA4CA4AB51C90E83144680F7E00DA_inline(/*hidden argument*/NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 *)L_17);
		FileDescriptorU5BU5D_t91F2611AD4922B7697DBD2C6C8627C68AE7B2D4B* L_18 = L_16;
		IL2CPP_RUNTIME_CLASS_INIT(BrainParametersReflection_tFA72E8BF1EB04761020D829D76D68A89FD9ED905_il2cpp_TypeInfo_var);
		FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * L_19 = BrainParametersReflection_get_Descriptor_m09FF522C12CBC8AF443ADCD7A6734794625DC100_inline(/*hidden argument*/NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(1), (FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 *)L_19);
		GeneratedClrTypeInfoU5BU5D_t38490948FF5D4B2D4E8557D1209161FDA3B07C87* L_20 = (GeneratedClrTypeInfoU5BU5D_t38490948FF5D4B2D4E8557D1209161FDA3B07C87*)(GeneratedClrTypeInfoU5BU5D_t38490948FF5D4B2D4E8557D1209161FDA3B07C87*)SZArrayNew(GeneratedClrTypeInfoU5BU5D_t38490948FF5D4B2D4E8557D1209161FDA3B07C87_il2cpp_TypeInfo_var, (uint32_t)1);
		GeneratedClrTypeInfoU5BU5D_t38490948FF5D4B2D4E8557D1209161FDA3B07C87* L_21 = L_20;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_22 = { reinterpret_cast<intptr_t> (UnityRLInitializationOutputProto_tC42D4D6F0F04C6EC9171D63F974FEBFD70943CA0_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_23 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_22, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityRLInitializationOutputProto_tC42D4D6F0F04C6EC9171D63F974FEBFD70943CA0_il2cpp_TypeInfo_var);
		MessageParser_1_t11F6130B5701C9992E0A73F4900A7816D14A3319 * L_24 = UnityRLInitializationOutputProto_get_Parser_m533687B973C280208A545011301356FA924E98DE_inline(/*hidden argument*/NULL);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_25 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_26 = L_25;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, _stringLiteral709A23220F2C3D64D1E1D6D18C4D5280F8D82FCA);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral709A23220F2C3D64D1E1D6D18C4D5280F8D82FCA);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_27 = L_26;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, _stringLiteralB6F2755D6D072E61F10528817AF2FB794FFBA063);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralB6F2755D6D072E61F10528817AF2FB794FFBA063);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_28 = L_27;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, _stringLiteralE58F8B9527318BEA000B3D29263E9FFFD423DEF8);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralE58F8B9527318BEA000B3D29263E9FFFD423DEF8);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_29 = L_28;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, _stringLiteral118A9E4BA5D67005E185C8F8E7088BDDCB010470);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral118A9E4BA5D67005E185C8F8E7088BDDCB010470);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_30 = L_29;
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, _stringLiteral8BE25866D237EBE052298B2617F4E4A3AC200DC4);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral8BE25866D237EBE052298B2617F4E4A3AC200DC4);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_31 = L_30;
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, _stringLiteralCA09C54BFF74A82BAE543EBE259F7452EE8C5293);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralCA09C54BFF74A82BAE543EBE259F7452EE8C5293);
		GeneratedClrTypeInfo_tF2F0DF2AAEC92C81106422AB98D931414053DE97 * L_32 = (GeneratedClrTypeInfo_tF2F0DF2AAEC92C81106422AB98D931414053DE97 *)il2cpp_codegen_object_new(GeneratedClrTypeInfo_tF2F0DF2AAEC92C81106422AB98D931414053DE97_il2cpp_TypeInfo_var);
		GeneratedClrTypeInfo__ctor_m061BADACE7D5089AA0B7645AC47F0D35C3907EB9(L_32, L_23, L_24, L_31, (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)NULL, (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)NULL, (GeneratedClrTypeInfoU5BU5D_t38490948FF5D4B2D4E8557D1209161FDA3B07C87*)(GeneratedClrTypeInfoU5BU5D_t38490948FF5D4B2D4E8557D1209161FDA3B07C87*)NULL, /*hidden argument*/NULL);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_32);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(0), (GeneratedClrTypeInfo_tF2F0DF2AAEC92C81106422AB98D931414053DE97 *)L_32);
		GeneratedClrTypeInfo_tF2F0DF2AAEC92C81106422AB98D931414053DE97 * L_33 = (GeneratedClrTypeInfo_tF2F0DF2AAEC92C81106422AB98D931414053DE97 *)il2cpp_codegen_object_new(GeneratedClrTypeInfo_tF2F0DF2AAEC92C81106422AB98D931414053DE97_il2cpp_TypeInfo_var);
		GeneratedClrTypeInfo__ctor_mA5CF3615FAD8D655D18273D2F76EDD82CE1BA52D(L_33, (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)NULL, L_21, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5_il2cpp_TypeInfo_var);
		FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * L_34 = FileDescriptor_FromGeneratedCode_m56776884BBFE977064E87AD91F33ED221E2D6461(L_14, L_18, L_33, /*hidden argument*/NULL);
		((UnityRlInitializationOutputReflection_t9544B7A86BEA02854A27B25C2BC75A1C45EEBADB_StaticFields*)il2cpp_codegen_static_fields_for(UnityRlInitializationOutputReflection_t9544B7A86BEA02854A27B25C2BC75A1C45EEBADB_il2cpp_TypeInfo_var))->set_descriptor_0(L_34);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Google.Protobuf.Reflection.FileDescriptor Unity.MLAgents.CommunicatorObjects.UnityRlInputReflection::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * UnityRlInputReflection_get_Descriptor_mACDE921AC2A9C38BF9C2C70397D59BA9522E5E3F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRlInputReflection_get_Descriptor_mACDE921AC2A9C38BF9C2C70397D59BA9522E5E3F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return descriptor; }
		IL2CPP_RUNTIME_CLASS_INIT(UnityRlInputReflection_t44A240DE4E74AC47F66186A3A0BB165E653A6EF6_il2cpp_TypeInfo_var);
		FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * L_0 = ((UnityRlInputReflection_t44A240DE4E74AC47F66186A3A0BB165E653A6EF6_StaticFields*)il2cpp_codegen_static_fields_for(UnityRlInputReflection_t44A240DE4E74AC47F66186A3A0BB165E653A6EF6_il2cpp_TypeInfo_var))->get_descriptor_0();
		return L_0;
	}
}
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRlInputReflection::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityRlInputReflection__cctor_mD3713392E7B3480C40ACAE7260DEB0B4216E8A83 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRlInputReflection__cctor_mD3713392E7B3480C40ACAE7260DEB0B4216E8A83_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// byte[] descriptorData = global::System.Convert.FromBase64String(
		//     string.Concat(
		//       "CjdtbGFnZW50c19lbnZzL2NvbW11bmljYXRvcl9vYmplY3RzL3VuaXR5X3Js",
		//       "X2lucHV0LnByb3RvEhRjb21tdW5pY2F0b3Jfb2JqZWN0cxo1bWxhZ2VudHNf",
		//       "ZW52cy9jb21tdW5pY2F0b3Jfb2JqZWN0cy9hZ2VudF9hY3Rpb24ucHJvdG8a",
		//       "MG1sYWdlbnRzX2VudnMvY29tbXVuaWNhdG9yX29iamVjdHMvY29tbWFuZC5w",
		//       "cm90byL+AgoRVW5pdHlSTElucHV0UHJvdG8SUAoNYWdlbnRfYWN0aW9ucxgB",
		//       "IAMoCzI5LmNvbW11bmljYXRvcl9vYmplY3RzLlVuaXR5UkxJbnB1dFByb3Rv",
		//       "LkFnZW50QWN0aW9uc0VudHJ5EjMKB2NvbW1hbmQYBCABKA4yIi5jb21tdW5p",
		//       "Y2F0b3Jfb2JqZWN0cy5Db21tYW5kUHJvdG8SFAoMc2lkZV9jaGFubmVsGAUg",
		//       "ASgMGk0KFExpc3RBZ2VudEFjdGlvblByb3RvEjUKBXZhbHVlGAEgAygLMiYu",
		//       "Y29tbXVuaWNhdG9yX29iamVjdHMuQWdlbnRBY3Rpb25Qcm90bxpxChFBZ2Vu",
		//       "dEFjdGlvbnNFbnRyeRILCgNrZXkYASABKAkSSwoFdmFsdWUYAiABKAsyPC5j",
		//       "b21tdW5pY2F0b3Jfb2JqZWN0cy5Vbml0eVJMSW5wdXRQcm90by5MaXN0QWdl",
		//       "bnRBY3Rpb25Qcm90bzoCOAFKBAgCEANKBAgDEARCJaoCIlVuaXR5Lk1MQWdl",
		//       "bnRzLkNvbW11bmljYXRvck9iamVjdHNiBnByb3RvMw=="));
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)((int32_t)14));
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral897594AF724704BB36459D4B550928A527E1A687);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral897594AF724704BB36459D4B550928A527E1A687);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral979A119EC9266B70BD9A952B8EF50757E9831C6C);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral979A119EC9266B70BD9A952B8EF50757E9831C6C);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral3B249EFFA8F1E30D9233C2064C88CE204DD59164);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3B249EFFA8F1E30D9233C2064C88CE204DD59164);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral5A048F80A4E7952A615F9F1F43E82F4CB2BA3519);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral5A048F80A4E7952A615F9F1F43E82F4CB2BA3519);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral0E8F1680002D16E08FCEA6419FEE9537363EECF1);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral0E8F1680002D16E08FCEA6419FEE9537363EECF1);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralDF612DADEFC7726D11F92DB0401502266490FDE6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralDF612DADEFC7726D11F92DB0401502266490FDE6);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral7EA29F8D4D04B483D33CFD61C40EC1CE7FDA757D);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral7EA29F8D4D04B483D33CFD61C40EC1CE7FDA757D);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral8B0ABA24039E14E7C8527BA441D01D2F155C0FBD);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral8B0ABA24039E14E7C8527BA441D01D2F155C0FBD);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteralD690442E8CD0BB6D12BE323D0B4A6189F1C2DB3E);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralD690442E8CD0BB6D12BE323D0B4A6189F1C2DB3E);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteralD3E6A23E8E7837EB86A8F02C7C850A1ECA55E4F1);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteralD3E6A23E8E7837EB86A8F02C7C850A1ECA55E4F1);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral5E584DFF861AC0CDFA0A2EF6590535448FE36593);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteral5E584DFF861AC0CDFA0A2EF6590535448FE36593);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_12 = L_11;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral6C219D73CB2D1FA5A4034B3C448CB463A3627355);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteral6C219D73CB2D1FA5A4034B3C448CB463A3627355);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_13 = L_12;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteralEFD95EC99681FB0DE0C46C5200B20701B7D740B1);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteralEFD95EC99681FB0DE0C46C5200B20701B7D740B1);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_14 = L_13;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteralF700A5609311009315CF148276EC7C5A0A8105CA);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)_stringLiteralF700A5609311009315CF148276EC7C5A0A8105CA);
		String_t* L_15 = String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B(L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_16 = Convert_FromBase64String_m079F788D000703E8018DA39BE9C05F1CBF60B156(L_15, /*hidden argument*/NULL);
		// descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
		//     new pbr::FileDescriptor[] { global::Unity.MLAgents.CommunicatorObjects.AgentActionReflection.Descriptor, global::Unity.MLAgents.CommunicatorObjects.CommandReflection.Descriptor, },
		//     new pbr::GeneratedClrTypeInfo(null, new pbr::GeneratedClrTypeInfo[] {
		//       new pbr::GeneratedClrTypeInfo(typeof(global::Unity.MLAgents.CommunicatorObjects.UnityRLInputProto), global::Unity.MLAgents.CommunicatorObjects.UnityRLInputProto.Parser, new[]{ "AgentActions", "Command", "SideChannel" }, null, null, new pbr::GeneratedClrTypeInfo[] { new pbr::GeneratedClrTypeInfo(typeof(global::Unity.MLAgents.CommunicatorObjects.UnityRLInputProto.Types.ListAgentActionProto), global::Unity.MLAgents.CommunicatorObjects.UnityRLInputProto.Types.ListAgentActionProto.Parser, new[]{ "Value" }, null, null, null),
		//       null, })
		//     }));
		FileDescriptorU5BU5D_t91F2611AD4922B7697DBD2C6C8627C68AE7B2D4B* L_17 = (FileDescriptorU5BU5D_t91F2611AD4922B7697DBD2C6C8627C68AE7B2D4B*)(FileDescriptorU5BU5D_t91F2611AD4922B7697DBD2C6C8627C68AE7B2D4B*)SZArrayNew(FileDescriptorU5BU5D_t91F2611AD4922B7697DBD2C6C8627C68AE7B2D4B_il2cpp_TypeInfo_var, (uint32_t)2);
		FileDescriptorU5BU5D_t91F2611AD4922B7697DBD2C6C8627C68AE7B2D4B* L_18 = L_17;
		IL2CPP_RUNTIME_CLASS_INIT(AgentActionReflection_tBA544673D5D08C2470AB2DDB97F023BD10EDA367_il2cpp_TypeInfo_var);
		FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * L_19 = AgentActionReflection_get_Descriptor_m52778BBF06149132FC6DB827B18CC0D73FC6A642_inline(/*hidden argument*/NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 *)L_19);
		FileDescriptorU5BU5D_t91F2611AD4922B7697DBD2C6C8627C68AE7B2D4B* L_20 = L_18;
		IL2CPP_RUNTIME_CLASS_INIT(CommandReflection_t3F6C832949B0C06BB4474B84EBAAAACAB7160E74_il2cpp_TypeInfo_var);
		FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * L_21 = CommandReflection_get_Descriptor_mB7605DDFA54D2848FD1A124CB983FBD89583B887_inline(/*hidden argument*/NULL);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_21);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(1), (FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 *)L_21);
		GeneratedClrTypeInfoU5BU5D_t38490948FF5D4B2D4E8557D1209161FDA3B07C87* L_22 = (GeneratedClrTypeInfoU5BU5D_t38490948FF5D4B2D4E8557D1209161FDA3B07C87*)(GeneratedClrTypeInfoU5BU5D_t38490948FF5D4B2D4E8557D1209161FDA3B07C87*)SZArrayNew(GeneratedClrTypeInfoU5BU5D_t38490948FF5D4B2D4E8557D1209161FDA3B07C87_il2cpp_TypeInfo_var, (uint32_t)1);
		GeneratedClrTypeInfoU5BU5D_t38490948FF5D4B2D4E8557D1209161FDA3B07C87* L_23 = L_22;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_24 = { reinterpret_cast<intptr_t> (UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_25 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_24, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0_il2cpp_TypeInfo_var);
		MessageParser_1_t76C3D8CC3698E2678107C9AB953C0ED781186CFC * L_26 = UnityRLInputProto_get_Parser_m732A203B6A457C70EBD2223BB5DF31E1E22250EE_inline(/*hidden argument*/NULL);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_27 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)3);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_28 = L_27;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, _stringLiteral07F3D39003F8CB26C2CCE0B40D99701F6F34AC5B);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral07F3D39003F8CB26C2CCE0B40D99701F6F34AC5B);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_29 = L_28;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, _stringLiteral8901895FB1B1D4C4EA2FEC368C25176BF73E2F7E);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral8901895FB1B1D4C4EA2FEC368C25176BF73E2F7E);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_30 = L_29;
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, _stringLiteral17CDCBE2C8B55C2BD5761E757EE46502CF6AE8F1);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral17CDCBE2C8B55C2BD5761E757EE46502CF6AE8F1);
		GeneratedClrTypeInfoU5BU5D_t38490948FF5D4B2D4E8557D1209161FDA3B07C87* L_31 = (GeneratedClrTypeInfoU5BU5D_t38490948FF5D4B2D4E8557D1209161FDA3B07C87*)(GeneratedClrTypeInfoU5BU5D_t38490948FF5D4B2D4E8557D1209161FDA3B07C87*)SZArrayNew(GeneratedClrTypeInfoU5BU5D_t38490948FF5D4B2D4E8557D1209161FDA3B07C87_il2cpp_TypeInfo_var, (uint32_t)2);
		GeneratedClrTypeInfoU5BU5D_t38490948FF5D4B2D4E8557D1209161FDA3B07C87* L_32 = L_31;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_33 = { reinterpret_cast<intptr_t> (ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925_0_0_0_var) };
		Type_t * L_34 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_33, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925_il2cpp_TypeInfo_var);
		MessageParser_1_t5420BF51729BDB4FBC6434906782CFC4FE81F541 * L_35 = ListAgentActionProto_get_Parser_m440581130B48C05D80C94FA05729A12903CD7323_inline(/*hidden argument*/NULL);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_36 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_37 = L_36;
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, _stringLiteral8DCE170DE238B1FEDA2ECD9674EA3CA0D068FBCB);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral8DCE170DE238B1FEDA2ECD9674EA3CA0D068FBCB);
		GeneratedClrTypeInfo_tF2F0DF2AAEC92C81106422AB98D931414053DE97 * L_38 = (GeneratedClrTypeInfo_tF2F0DF2AAEC92C81106422AB98D931414053DE97 *)il2cpp_codegen_object_new(GeneratedClrTypeInfo_tF2F0DF2AAEC92C81106422AB98D931414053DE97_il2cpp_TypeInfo_var);
		GeneratedClrTypeInfo__ctor_m061BADACE7D5089AA0B7645AC47F0D35C3907EB9(L_38, L_34, L_35, L_37, (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)NULL, (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)NULL, (GeneratedClrTypeInfoU5BU5D_t38490948FF5D4B2D4E8557D1209161FDA3B07C87*)(GeneratedClrTypeInfoU5BU5D_t38490948FF5D4B2D4E8557D1209161FDA3B07C87*)NULL, /*hidden argument*/NULL);
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_38);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(0), (GeneratedClrTypeInfo_tF2F0DF2AAEC92C81106422AB98D931414053DE97 *)L_38);
		GeneratedClrTypeInfo_tF2F0DF2AAEC92C81106422AB98D931414053DE97 * L_39 = (GeneratedClrTypeInfo_tF2F0DF2AAEC92C81106422AB98D931414053DE97 *)il2cpp_codegen_object_new(GeneratedClrTypeInfo_tF2F0DF2AAEC92C81106422AB98D931414053DE97_il2cpp_TypeInfo_var);
		GeneratedClrTypeInfo__ctor_m061BADACE7D5089AA0B7645AC47F0D35C3907EB9(L_39, L_25, L_26, L_30, (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)NULL, (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)NULL, L_32, /*hidden argument*/NULL);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_39);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(0), (GeneratedClrTypeInfo_tF2F0DF2AAEC92C81106422AB98D931414053DE97 *)L_39);
		GeneratedClrTypeInfo_tF2F0DF2AAEC92C81106422AB98D931414053DE97 * L_40 = (GeneratedClrTypeInfo_tF2F0DF2AAEC92C81106422AB98D931414053DE97 *)il2cpp_codegen_object_new(GeneratedClrTypeInfo_tF2F0DF2AAEC92C81106422AB98D931414053DE97_il2cpp_TypeInfo_var);
		GeneratedClrTypeInfo__ctor_mA5CF3615FAD8D655D18273D2F76EDD82CE1BA52D(L_40, (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)NULL, L_23, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5_il2cpp_TypeInfo_var);
		FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * L_41 = FileDescriptor_FromGeneratedCode_m56776884BBFE977064E87AD91F33ED221E2D6461(L_16, L_20, L_40, /*hidden argument*/NULL);
		((UnityRlInputReflection_t44A240DE4E74AC47F66186A3A0BB165E653A6EF6_StaticFields*)il2cpp_codegen_static_fields_for(UnityRlInputReflection_t44A240DE4E74AC47F66186A3A0BB165E653A6EF6_il2cpp_TypeInfo_var))->set_descriptor_0(L_41);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Google.Protobuf.Reflection.FileDescriptor Unity.MLAgents.CommunicatorObjects.UnityRlOutputReflection::get_Descriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * UnityRlOutputReflection_get_Descriptor_m5D75BACA3A8B729D44606FC38AA1B740E172A896 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRlOutputReflection_get_Descriptor_m5D75BACA3A8B729D44606FC38AA1B740E172A896_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return descriptor; }
		IL2CPP_RUNTIME_CLASS_INIT(UnityRlOutputReflection_t0776186F804074BFA18A3600865C682779F04F75_il2cpp_TypeInfo_var);
		FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * L_0 = ((UnityRlOutputReflection_t0776186F804074BFA18A3600865C682779F04F75_StaticFields*)il2cpp_codegen_static_fields_for(UnityRlOutputReflection_t0776186F804074BFA18A3600865C682779F04F75_il2cpp_TypeInfo_var))->get_descriptor_0();
		return L_0;
	}
}
// System.Void Unity.MLAgents.CommunicatorObjects.UnityRlOutputReflection::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityRlOutputReflection__cctor_mF2602E1D806EF82FF40C669DEBD3D3F0EAF462E5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRlOutputReflection__cctor_mF2602E1D806EF82FF40C669DEBD3D3F0EAF462E5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// byte[] descriptorData = global::System.Convert.FromBase64String(
		//     string.Concat(
		//       "CjhtbGFnZW50c19lbnZzL2NvbW11bmljYXRvcl9vYmplY3RzL3VuaXR5X3Js",
		//       "X291dHB1dC5wcm90bxIUY29tbXVuaWNhdG9yX29iamVjdHMaM21sYWdlbnRz",
		//       "X2VudnMvY29tbXVuaWNhdG9yX29iamVjdHMvYWdlbnRfaW5mby5wcm90byK5",
		//       "AgoSVW5pdHlSTE91dHB1dFByb3RvEkwKCmFnZW50SW5mb3MYAiADKAsyOC5j",
		//       "b21tdW5pY2F0b3Jfb2JqZWN0cy5Vbml0eVJMT3V0cHV0UHJvdG8uQWdlbnRJ",
		//       "bmZvc0VudHJ5EhQKDHNpZGVfY2hhbm5lbBgDIAEoDBpJChJMaXN0QWdlbnRJ",
		//       "bmZvUHJvdG8SMwoFdmFsdWUYASADKAsyJC5jb21tdW5pY2F0b3Jfb2JqZWN0",
		//       "cy5BZ2VudEluZm9Qcm90bxpuCg9BZ2VudEluZm9zRW50cnkSCwoDa2V5GAEg",
		//       "ASgJEkoKBXZhbHVlGAIgASgLMjsuY29tbXVuaWNhdG9yX29iamVjdHMuVW5p",
		//       "dHlSTE91dHB1dFByb3RvLkxpc3RBZ2VudEluZm9Qcm90bzoCOAFKBAgBEAJC",
		//       "JaoCIlVuaXR5Lk1MQWdlbnRzLkNvbW11bmljYXRvck9iamVjdHNiBnByb3Rv",
		//       "Mw=="));
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral1DEDC1D5E9E29DFCFCAEDA2B2FD5F6646031A748);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral1DEDC1D5E9E29DFCFCAEDA2B2FD5F6646031A748);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral239C86EEE283D24DB2F0C5B29FE2FCC718AAFFBB);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral239C86EEE283D24DB2F0C5B29FE2FCC718AAFFBB);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral927CC63DD0E7D2FDB4F08536CAC9967C907496AF);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral927CC63DD0E7D2FDB4F08536CAC9967C907496AF);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral7236E68F716DDF5ADA5B6E919C36E4906A725351);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral7236E68F716DDF5ADA5B6E919C36E4906A725351);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralBAD70ABA9DCA7F775425FAB472380F3D4857C0D4);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralBAD70ABA9DCA7F775425FAB472380F3D4857C0D4);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral1E2AEE4D7835C3309CE031322F2458FDEF11FB65);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral1E2AEE4D7835C3309CE031322F2458FDEF11FB65);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralEEFEC9BD6150D1361491F9BDC21B937B0E62E7E0);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralEEFEC9BD6150D1361491F9BDC21B937B0E62E7E0);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral829E8FAE4BB9AE000311B3EC7C8000E4C10772E8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral829E8FAE4BB9AE000311B3EC7C8000E4C10772E8);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral245D9552E03A552F43CC76343346D5EE3F2B8AD8);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral245D9552E03A552F43CC76343346D5EE3F2B8AD8);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral206CFF761A69D71EB982D6A75114A97C4BCD6BCF);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral206CFF761A69D71EB982D6A75114A97C4BCD6BCF);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral87B2A5A4C3B91CF63C91453F4CFB8BE698E7F335);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteral87B2A5A4C3B91CF63C91453F4CFB8BE698E7F335);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_12 = L_11;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral96D4612A372C8A6F143537A110A84EEBABCFE2FA);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteral96D4612A372C8A6F143537A110A84EEBABCFE2FA);
		String_t* L_13 = String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_14 = Convert_FromBase64String_m079F788D000703E8018DA39BE9C05F1CBF60B156(L_13, /*hidden argument*/NULL);
		// descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
		//     new pbr::FileDescriptor[] { global::Unity.MLAgents.CommunicatorObjects.AgentInfoReflection.Descriptor, },
		//     new pbr::GeneratedClrTypeInfo(null, new pbr::GeneratedClrTypeInfo[] {
		//       new pbr::GeneratedClrTypeInfo(typeof(global::Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto), global::Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto.Parser, new[]{ "AgentInfos", "SideChannel" }, null, null, new pbr::GeneratedClrTypeInfo[] { new pbr::GeneratedClrTypeInfo(typeof(global::Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto.Types.ListAgentInfoProto), global::Unity.MLAgents.CommunicatorObjects.UnityRLOutputProto.Types.ListAgentInfoProto.Parser, new[]{ "Value" }, null, null, null),
		//       null, })
		//     }));
		FileDescriptorU5BU5D_t91F2611AD4922B7697DBD2C6C8627C68AE7B2D4B* L_15 = (FileDescriptorU5BU5D_t91F2611AD4922B7697DBD2C6C8627C68AE7B2D4B*)(FileDescriptorU5BU5D_t91F2611AD4922B7697DBD2C6C8627C68AE7B2D4B*)SZArrayNew(FileDescriptorU5BU5D_t91F2611AD4922B7697DBD2C6C8627C68AE7B2D4B_il2cpp_TypeInfo_var, (uint32_t)1);
		FileDescriptorU5BU5D_t91F2611AD4922B7697DBD2C6C8627C68AE7B2D4B* L_16 = L_15;
		IL2CPP_RUNTIME_CLASS_INIT(AgentInfoReflection_t49013675F1E2B6D3F15FB8FB3FBB07C33555B3BE_il2cpp_TypeInfo_var);
		FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * L_17 = AgentInfoReflection_get_Descriptor_m53079D2FBD62E6DB563670E10BF9C184A70048C1_inline(/*hidden argument*/NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 *)L_17);
		GeneratedClrTypeInfoU5BU5D_t38490948FF5D4B2D4E8557D1209161FDA3B07C87* L_18 = (GeneratedClrTypeInfoU5BU5D_t38490948FF5D4B2D4E8557D1209161FDA3B07C87*)(GeneratedClrTypeInfoU5BU5D_t38490948FF5D4B2D4E8557D1209161FDA3B07C87*)SZArrayNew(GeneratedClrTypeInfoU5BU5D_t38490948FF5D4B2D4E8557D1209161FDA3B07C87_il2cpp_TypeInfo_var, (uint32_t)1);
		GeneratedClrTypeInfoU5BU5D_t38490948FF5D4B2D4E8557D1209161FDA3B07C87* L_19 = L_18;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_20 = { reinterpret_cast<intptr_t> (UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_21 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_20, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7_il2cpp_TypeInfo_var);
		MessageParser_1_t599AFE94D623A6084E4A6E9656D1DE8C69383948 * L_22 = UnityRLOutputProto_get_Parser_m3082F856637D0BCCE8432273D0F9A43C2D6BDBF5_inline(/*hidden argument*/NULL);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_23 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)2);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_24 = L_23;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, _stringLiteralFE845653F13A81A33A26CABA2941BA6EE62B432D);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralFE845653F13A81A33A26CABA2941BA6EE62B432D);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_25 = L_24;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, _stringLiteral17CDCBE2C8B55C2BD5761E757EE46502CF6AE8F1);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral17CDCBE2C8B55C2BD5761E757EE46502CF6AE8F1);
		GeneratedClrTypeInfoU5BU5D_t38490948FF5D4B2D4E8557D1209161FDA3B07C87* L_26 = (GeneratedClrTypeInfoU5BU5D_t38490948FF5D4B2D4E8557D1209161FDA3B07C87*)(GeneratedClrTypeInfoU5BU5D_t38490948FF5D4B2D4E8557D1209161FDA3B07C87*)SZArrayNew(GeneratedClrTypeInfoU5BU5D_t38490948FF5D4B2D4E8557D1209161FDA3B07C87_il2cpp_TypeInfo_var, (uint32_t)2);
		GeneratedClrTypeInfoU5BU5D_t38490948FF5D4B2D4E8557D1209161FDA3B07C87* L_27 = L_26;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_28 = { reinterpret_cast<intptr_t> (ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354_0_0_0_var) };
		Type_t * L_29 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_28, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354_il2cpp_TypeInfo_var);
		MessageParser_1_tFCC153276983A237B272DFE38939C2203C07096E * L_30 = ListAgentInfoProto_get_Parser_mE43947C6D53FF14A540E7E3DACA5E0BBBC395C18_inline(/*hidden argument*/NULL);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_31 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_32 = L_31;
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, _stringLiteral8DCE170DE238B1FEDA2ECD9674EA3CA0D068FBCB);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral8DCE170DE238B1FEDA2ECD9674EA3CA0D068FBCB);
		GeneratedClrTypeInfo_tF2F0DF2AAEC92C81106422AB98D931414053DE97 * L_33 = (GeneratedClrTypeInfo_tF2F0DF2AAEC92C81106422AB98D931414053DE97 *)il2cpp_codegen_object_new(GeneratedClrTypeInfo_tF2F0DF2AAEC92C81106422AB98D931414053DE97_il2cpp_TypeInfo_var);
		GeneratedClrTypeInfo__ctor_m061BADACE7D5089AA0B7645AC47F0D35C3907EB9(L_33, L_29, L_30, L_32, (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)NULL, (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)NULL, (GeneratedClrTypeInfoU5BU5D_t38490948FF5D4B2D4E8557D1209161FDA3B07C87*)(GeneratedClrTypeInfoU5BU5D_t38490948FF5D4B2D4E8557D1209161FDA3B07C87*)NULL, /*hidden argument*/NULL);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_33);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(0), (GeneratedClrTypeInfo_tF2F0DF2AAEC92C81106422AB98D931414053DE97 *)L_33);
		GeneratedClrTypeInfo_tF2F0DF2AAEC92C81106422AB98D931414053DE97 * L_34 = (GeneratedClrTypeInfo_tF2F0DF2AAEC92C81106422AB98D931414053DE97 *)il2cpp_codegen_object_new(GeneratedClrTypeInfo_tF2F0DF2AAEC92C81106422AB98D931414053DE97_il2cpp_TypeInfo_var);
		GeneratedClrTypeInfo__ctor_m061BADACE7D5089AA0B7645AC47F0D35C3907EB9(L_34, L_21, L_22, L_25, (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)NULL, (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)NULL, L_27, /*hidden argument*/NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_34);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (GeneratedClrTypeInfo_tF2F0DF2AAEC92C81106422AB98D931414053DE97 *)L_34);
		GeneratedClrTypeInfo_tF2F0DF2AAEC92C81106422AB98D931414053DE97 * L_35 = (GeneratedClrTypeInfo_tF2F0DF2AAEC92C81106422AB98D931414053DE97 *)il2cpp_codegen_object_new(GeneratedClrTypeInfo_tF2F0DF2AAEC92C81106422AB98D931414053DE97_il2cpp_TypeInfo_var);
		GeneratedClrTypeInfo__ctor_mA5CF3615FAD8D655D18273D2F76EDD82CE1BA52D(L_35, (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)NULL, L_19, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5_il2cpp_TypeInfo_var);
		FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * L_36 = FileDescriptor_FromGeneratedCode_m56776884BBFE977064E87AD91F33ED221E2D6461(L_14, L_16, L_35, /*hidden argument*/NULL);
		((UnityRlOutputReflection_t0776186F804074BFA18A3600865C682779F04F75_StaticFields*)il2cpp_codegen_static_fields_for(UnityRlOutputReflection_t0776186F804074BFA18A3600865C682779F04F75_il2cpp_TypeInfo_var))->set_descriptor_0(L_36);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.MLAgents.CommunicatorObjects.UnityToExternalProto::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityToExternalProto__cctor_m6692727C8DFA895962AB17AFDB8DE4256A634A81 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityToExternalProto__cctor_m6692727C8DFA895962AB17AFDB8DE4256A634A81_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly string __ServiceName = "communicator_objects.UnityToExternalProto";
		((UnityToExternalProto_t8BBC923650009D9E6B779D97F6C57AE79B7F0B44_StaticFields*)il2cpp_codegen_static_fields_for(UnityToExternalProto_t8BBC923650009D9E6B779D97F6C57AE79B7F0B44_il2cpp_TypeInfo_var))->set___ServiceName_0(_stringLiteral5F0A923FF2BB3A204ED7D0CCA98CA1BAB7EFEE40);
		// static readonly grpc::Marshaller<global::Unity.MLAgents.CommunicatorObjects.UnityMessageProto> __Marshaller_communicator_objects_UnityMessageProto = grpc::Marshallers.Create((arg) => global::Google.Protobuf.MessageExtensions.ToByteArray(arg), global::Unity.MLAgents.CommunicatorObjects.UnityMessageProto.Parser.ParseFrom);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tE239152597DE8CE5ACBF9989618F9AE0A5ADD1AD_il2cpp_TypeInfo_var);
		U3CU3Ec_tE239152597DE8CE5ACBF9989618F9AE0A5ADD1AD * L_0 = ((U3CU3Ec_tE239152597DE8CE5ACBF9989618F9AE0A5ADD1AD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE239152597DE8CE5ACBF9989618F9AE0A5ADD1AD_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_tD5F010B2FE5FD8A131A1E87650D1ACFDEB9DFA81 * L_1 = (Func_2_tD5F010B2FE5FD8A131A1E87650D1ACFDEB9DFA81 *)il2cpp_codegen_object_new(Func_2_tD5F010B2FE5FD8A131A1E87650D1ACFDEB9DFA81_il2cpp_TypeInfo_var);
		Func_2__ctor_mF01B96E9D48EF51CC36C0FE07E39E3B4EB8401E9(L_1, L_0, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__8_0_m621306743158CA0CFB636BF0E091CEB38BB39885_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mF01B96E9D48EF51CC36C0FE07E39E3B4EB8401E9_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(UnityMessageProto_tD5391F5B3FDFAFE6B6AEC00BEED8871DCD4B2B26_il2cpp_TypeInfo_var);
		MessageParser_1_t352DB8B114FB0010B1737343561DB051851EA4F7 * L_2 = UnityMessageProto_get_Parser_m58AD0E729F7B142EC6485BE3A02EBFBE5A7DD956_inline(/*hidden argument*/NULL);
		Func_2_t1B7D640DEA23BEFB06C17E1A1058A412B8A02A18 * L_3 = (Func_2_t1B7D640DEA23BEFB06C17E1A1058A412B8A02A18 *)il2cpp_codegen_object_new(Func_2_t1B7D640DEA23BEFB06C17E1A1058A412B8A02A18_il2cpp_TypeInfo_var);
		Func_2__ctor_m7D0971E1B4C07728BE7C791731DBD8C1A7679B6E(L_3, L_2, (intptr_t)((intptr_t)MessageParser_1_ParseFrom_m770912733AA7FED88E41025B79037EA24E901159_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m7D0971E1B4C07728BE7C791731DBD8C1A7679B6E_RuntimeMethod_var);
		Marshaller_1_t9D307945ED8B62035303716CA88CBE969F20136B * L_4 = Marshallers_Create_TisUnityMessageProto_tD5391F5B3FDFAFE6B6AEC00BEED8871DCD4B2B26_m2A322A84432C850562F8DE4F674DFEFB45FB663F(L_1, L_3, /*hidden argument*/Marshallers_Create_TisUnityMessageProto_tD5391F5B3FDFAFE6B6AEC00BEED8871DCD4B2B26_m2A322A84432C850562F8DE4F674DFEFB45FB663F_RuntimeMethod_var);
		((UnityToExternalProto_t8BBC923650009D9E6B779D97F6C57AE79B7F0B44_StaticFields*)il2cpp_codegen_static_fields_for(UnityToExternalProto_t8BBC923650009D9E6B779D97F6C57AE79B7F0B44_il2cpp_TypeInfo_var))->set___Marshaller_communicator_objects_UnityMessageProto_1(L_4);
		// static readonly grpc::Method<global::Unity.MLAgents.CommunicatorObjects.UnityMessageProto, global::Unity.MLAgents.CommunicatorObjects.UnityMessageProto> __Method_Exchange = new grpc::Method<global::Unity.MLAgents.CommunicatorObjects.UnityMessageProto, global::Unity.MLAgents.CommunicatorObjects.UnityMessageProto>(
		//     grpc::MethodType.Unary,
		//     __ServiceName,
		//     "Exchange",
		//     __Marshaller_communicator_objects_UnityMessageProto,
		//     __Marshaller_communicator_objects_UnityMessageProto);
		String_t* L_5 = ((UnityToExternalProto_t8BBC923650009D9E6B779D97F6C57AE79B7F0B44_StaticFields*)il2cpp_codegen_static_fields_for(UnityToExternalProto_t8BBC923650009D9E6B779D97F6C57AE79B7F0B44_il2cpp_TypeInfo_var))->get___ServiceName_0();
		Marshaller_1_t9D307945ED8B62035303716CA88CBE969F20136B * L_6 = ((UnityToExternalProto_t8BBC923650009D9E6B779D97F6C57AE79B7F0B44_StaticFields*)il2cpp_codegen_static_fields_for(UnityToExternalProto_t8BBC923650009D9E6B779D97F6C57AE79B7F0B44_il2cpp_TypeInfo_var))->get___Marshaller_communicator_objects_UnityMessageProto_1();
		Marshaller_1_t9D307945ED8B62035303716CA88CBE969F20136B * L_7 = ((UnityToExternalProto_t8BBC923650009D9E6B779D97F6C57AE79B7F0B44_StaticFields*)il2cpp_codegen_static_fields_for(UnityToExternalProto_t8BBC923650009D9E6B779D97F6C57AE79B7F0B44_il2cpp_TypeInfo_var))->get___Marshaller_communicator_objects_UnityMessageProto_1();
		Method_2_t2C16E4478D00E27E608963926C184DF53BA57473 * L_8 = (Method_2_t2C16E4478D00E27E608963926C184DF53BA57473 *)il2cpp_codegen_object_new(Method_2_t2C16E4478D00E27E608963926C184DF53BA57473_il2cpp_TypeInfo_var);
		Method_2__ctor_mF6E3D33A2F86AB66AE719403352BD07FEAB4032B(L_8, 0, L_5, _stringLiteral5B13EAC7ED3A5CDEAB32EAAC51566E907C891622, L_6, L_7, /*hidden argument*/Method_2__ctor_mF6E3D33A2F86AB66AE719403352BD07FEAB4032B_RuntimeMethod_var);
		((UnityToExternalProto_t8BBC923650009D9E6B779D97F6C57AE79B7F0B44_StaticFields*)il2cpp_codegen_static_fields_for(UnityToExternalProto_t8BBC923650009D9E6B779D97F6C57AE79B7F0B44_il2cpp_TypeInfo_var))->set___Method_Exchange_2(L_8);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.MLAgents.CommunicatorObjects.UnityToExternalProto/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m787187DB3E7C9B6310F147A13FF400F9C3BA1211 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m787187DB3E7C9B6310F147A13FF400F9C3BA1211_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tE239152597DE8CE5ACBF9989618F9AE0A5ADD1AD * L_0 = (U3CU3Ec_tE239152597DE8CE5ACBF9989618F9AE0A5ADD1AD *)il2cpp_codegen_object_new(U3CU3Ec_tE239152597DE8CE5ACBF9989618F9AE0A5ADD1AD_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mEF4D289349F0A5EEDD4EF3C1979C20EF4FAB6CAD(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tE239152597DE8CE5ACBF9989618F9AE0A5ADD1AD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE239152597DE8CE5ACBF9989618F9AE0A5ADD1AD_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Unity.MLAgents.CommunicatorObjects.UnityToExternalProto/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mEF4D289349F0A5EEDD4EF3C1979C20EF4FAB6CAD (U3CU3Ec_tE239152597DE8CE5ACBF9989618F9AE0A5ADD1AD * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Byte[] Unity.MLAgents.CommunicatorObjects.UnityToExternalProto/<>c::<.cctor>b__8_0(Unity.MLAgents.CommunicatorObjects.UnityMessageProto)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* U3CU3Ec_U3C_cctorU3Eb__8_0_m621306743158CA0CFB636BF0E091CEB38BB39885 (U3CU3Ec_tE239152597DE8CE5ACBF9989618F9AE0A5ADD1AD * __this, UnityMessageProto_tD5391F5B3FDFAFE6B6AEC00BEED8871DCD4B2B26 * ___arg0, const RuntimeMethod* method)
{
	{
		// static readonly grpc::Marshaller<global::Unity.MLAgents.CommunicatorObjects.UnityMessageProto> __Marshaller_communicator_objects_UnityMessageProto = grpc::Marshallers.Create((arg) => global::Google.Protobuf.MessageExtensions.ToByteArray(arg), global::Unity.MLAgents.CommunicatorObjects.UnityMessageProto.Parser.ParseFrom);
		UnityMessageProto_tD5391F5B3FDFAFE6B6AEC00BEED8871DCD4B2B26 * L_0 = ___arg0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = MessageExtensions_ToByteArray_mCB5C55AB21B9917267B027DB0A4CDFDA855E7D52(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.MLAgents.CommunicatorObjects.UnityToExternalProto/UnityToExternalProtoClient::.ctor(Grpc.Core.Channel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityToExternalProtoClient__ctor_m3E1A1C11C4A69FC514594653839D2D00C33F6CD1 (UnityToExternalProtoClient_t924C92326C6A8ECD20D82F229CB1CA8B7AE2E1E2 * __this, Channel_tACA478F7B1F9D4A2151EF268E78A232E7EF5B765 * ___channel0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityToExternalProtoClient__ctor_m3E1A1C11C4A69FC514594653839D2D00C33F6CD1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public UnityToExternalProtoClient(grpc::Channel channel) : base(channel)
		Channel_tACA478F7B1F9D4A2151EF268E78A232E7EF5B765 * L_0 = ___channel0;
		ClientBase_1__ctor_mB526D8160C83AF064E5A7DE421052A63845F5E4B(__this, L_0, /*hidden argument*/ClientBase_1__ctor_mB526D8160C83AF064E5A7DE421052A63845F5E4B_RuntimeMethod_var);
		// }
		return;
	}
}
// Unity.MLAgents.CommunicatorObjects.UnityMessageProto Unity.MLAgents.CommunicatorObjects.UnityToExternalProto/UnityToExternalProtoClient::Exchange(Unity.MLAgents.CommunicatorObjects.UnityMessageProto,Grpc.Core.Metadata,System.Nullable`1<System.DateTime>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityMessageProto_tD5391F5B3FDFAFE6B6AEC00BEED8871DCD4B2B26 * UnityToExternalProtoClient_Exchange_m4621692118B2DCD4DD80B071BC0BAEF858359314 (UnityToExternalProtoClient_t924C92326C6A8ECD20D82F229CB1CA8B7AE2E1E2 * __this, UnityMessageProto_tD5391F5B3FDFAFE6B6AEC00BEED8871DCD4B2B26 * ___request0, Metadata_t26C6E825EB0A531EB2CDB3A5F149BA44336193F8 * ___headers1, Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78  ___deadline2, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___cancellationToken3, const RuntimeMethod* method)
{
	{
		// return Exchange(request, new grpc::CallOptions(headers, deadline, cancellationToken));
		UnityMessageProto_tD5391F5B3FDFAFE6B6AEC00BEED8871DCD4B2B26 * L_0 = ___request0;
		Metadata_t26C6E825EB0A531EB2CDB3A5F149BA44336193F8 * L_1 = ___headers1;
		Nullable_1_t3290384E361396B3724B88B498CBF637D7E87B78  L_2 = ___deadline2;
		CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  L_3 = ___cancellationToken3;
		CallOptions_t245FDD2D751812FADC5BB72858891DB919411A27  L_4;
		memset((&L_4), 0, sizeof(L_4));
		CallOptions__ctor_m1AEB9AE5049E7BCBE1FF371D565CF313FCFAEAF4((&L_4), L_1, L_2, L_3, (WriteOptions_t3D98497F20B5373A61127A45647E5E8B7B7211EE *)NULL, (ContextPropagationToken_t0170EC5F7D6ABBDE5E53D75D19385B88C4724D6D *)NULL, (CallCredentials_t2FE73AD74309014E2602D649F67CB2A1B9A026F1 *)NULL, /*hidden argument*/NULL);
		UnityMessageProto_tD5391F5B3FDFAFE6B6AEC00BEED8871DCD4B2B26 * L_5 = VirtFuncInvoker2< UnityMessageProto_tD5391F5B3FDFAFE6B6AEC00BEED8871DCD4B2B26 *, UnityMessageProto_tD5391F5B3FDFAFE6B6AEC00BEED8871DCD4B2B26 *, CallOptions_t245FDD2D751812FADC5BB72858891DB919411A27  >::Invoke(5 /* Unity.MLAgents.CommunicatorObjects.UnityMessageProto Unity.MLAgents.CommunicatorObjects.UnityToExternalProto/UnityToExternalProtoClient::Exchange(Unity.MLAgents.CommunicatorObjects.UnityMessageProto,Grpc.Core.CallOptions) */, __this, L_0, L_4);
		return L_5;
	}
}
// Unity.MLAgents.CommunicatorObjects.UnityMessageProto Unity.MLAgents.CommunicatorObjects.UnityToExternalProto/UnityToExternalProtoClient::Exchange(Unity.MLAgents.CommunicatorObjects.UnityMessageProto,Grpc.Core.CallOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityMessageProto_tD5391F5B3FDFAFE6B6AEC00BEED8871DCD4B2B26 * UnityToExternalProtoClient_Exchange_m78907637C581F4330EA4B04586A3E09A5E89212F (UnityToExternalProtoClient_t924C92326C6A8ECD20D82F229CB1CA8B7AE2E1E2 * __this, UnityMessageProto_tD5391F5B3FDFAFE6B6AEC00BEED8871DCD4B2B26 * ___request0, CallOptions_t245FDD2D751812FADC5BB72858891DB919411A27  ___options1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityToExternalProtoClient_Exchange_m78907637C581F4330EA4B04586A3E09A5E89212F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return CallInvoker.BlockingUnaryCall(__Method_Exchange, null, options, request);
		CallInvoker_t8D08B1AC2305E30108FB2F8AFBB87380CB354565 * L_0 = ClientBase_get_CallInvoker_m8A5DF25E614C5C611656BFD6FBB75AB59A1AC8DE_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityToExternalProto_t8BBC923650009D9E6B779D97F6C57AE79B7F0B44_il2cpp_TypeInfo_var);
		Method_2_t2C16E4478D00E27E608963926C184DF53BA57473 * L_1 = ((UnityToExternalProto_t8BBC923650009D9E6B779D97F6C57AE79B7F0B44_StaticFields*)il2cpp_codegen_static_fields_for(UnityToExternalProto_t8BBC923650009D9E6B779D97F6C57AE79B7F0B44_il2cpp_TypeInfo_var))->get___Method_Exchange_2();
		CallOptions_t245FDD2D751812FADC5BB72858891DB919411A27  L_2 = ___options1;
		UnityMessageProto_tD5391F5B3FDFAFE6B6AEC00BEED8871DCD4B2B26 * L_3 = ___request0;
		NullCheck(L_0);
		UnityMessageProto_tD5391F5B3FDFAFE6B6AEC00BEED8871DCD4B2B26 * L_4 = GenericVirtFuncInvoker4< UnityMessageProto_tD5391F5B3FDFAFE6B6AEC00BEED8871DCD4B2B26 *, Method_2_t2C16E4478D00E27E608963926C184DF53BA57473 *, String_t*, CallOptions_t245FDD2D751812FADC5BB72858891DB919411A27 , UnityMessageProto_tD5391F5B3FDFAFE6B6AEC00BEED8871DCD4B2B26 * >::Invoke(CallInvoker_BlockingUnaryCall_TisUnityMessageProto_tD5391F5B3FDFAFE6B6AEC00BEED8871DCD4B2B26_TisUnityMessageProto_tD5391F5B3FDFAFE6B6AEC00BEED8871DCD4B2B26_mC32CF7CF0E1FB84B4FD18EA7FB26252547B00030_RuntimeMethod_var, L_0, L_1, (String_t*)NULL, L_2, L_3);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * UnityRlInputReflection_get_Descriptor_mACDE921AC2A9C38BF9C2C70397D59BA9522E5E3F_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRlInputReflection_get_Descriptor_mACDE921AC2A9C38BF9C2C70397D59BA9522E5E3FUnity_MLU2DAgents_CommunicatorObjects1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return descriptor; }
		IL2CPP_RUNTIME_CLASS_INIT(UnityRlInputReflection_t44A240DE4E74AC47F66186A3A0BB165E653A6EF6_il2cpp_TypeInfo_var);
		FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * L_0 = ((UnityRlInputReflection_t44A240DE4E74AC47F66186A3A0BB165E653A6EF6_StaticFields*)il2cpp_codegen_static_fields_for(UnityRlInputReflection_t44A240DE4E74AC47F66186A3A0BB165E653A6EF6_il2cpp_TypeInfo_var))->get_descriptor_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* FileDescriptor_get_MessageTypes_mA3C7B50D952576611016C2F2FD7FE267FBC760AA_inline (FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CMessageTypesU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * ByteString_get_Empty_mEFE0CF6E76539FB8154334F5B28EB169A1F0C87D_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ByteString_get_Empty_mEFE0CF6E76539FB8154334F5B28EB169A1F0C87DUnity_MLU2DAgents_CommunicatorObjects1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A_il2cpp_TypeInfo_var);
		ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * L_0 = ((ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A_StaticFields*)il2cpp_codegen_static_fields_for(ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A_il2cpp_TypeInfo_var))->get_empty_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MapField_2_tD148F5CFC6F243B4A02E983CBB129C24B8AB69FB * UnityRLInputProto_get_AgentActions_m2B50929E9C2A8D1D84B8ECD48F9466EE1F5318DE_inline (UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0 * __this, const RuntimeMethod* method)
{
	{
		// get { return agentActions_; }
		MapField_2_tD148F5CFC6F243B4A02E983CBB129C24B8AB69FB * L_0 = __this->get_agentActions__3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t UnityRLInputProto_get_Command_m483721CC871CBE4BCCE4D0307B3F351DF0BD2C0F_inline (UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0 * __this, const RuntimeMethod* method)
{
	{
		// get { return command_; }
		int32_t L_0 = __this->get_command__4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * UnityRLInputProto_get_SideChannel_m8EF684D10D1FE1DA52BC862C887DB32D3CF432D2_inline (UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0 * __this, const RuntimeMethod* method)
{
	{
		// get { return sideChannel_; }
		ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * L_0 = __this->get_sideChannel__5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void UnityRLInputProto_set_Command_m1B268715F7AF2B8FCE0AFAEF7641ACC6D008CCC1_inline (UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// command_ = value;
		int32_t L_0 = ___value0;
		__this->set_command__4(L_0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MessageParser_1_t5420BF51729BDB4FBC6434906782CFC4FE81F541 * ListAgentActionProto_get_Parser_m440581130B48C05D80C94FA05729A12903CD7323_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListAgentActionProto_get_Parser_m440581130B48C05D80C94FA05729A12903CD7323Unity_MLU2DAgents_CommunicatorObjects1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static pb::MessageParser<ListAgentActionProto> Parser { get { return _parser; } }
		IL2CPP_RUNTIME_CLASS_INIT(ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925_il2cpp_TypeInfo_var);
		MessageParser_1_t5420BF51729BDB4FBC6434906782CFC4FE81F541 * L_0 = ((ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925_StaticFields*)il2cpp_codegen_static_fields_for(ListAgentActionProto_tBBBA29EA517281F8DB994FEF53D6147085DF1925_il2cpp_TypeInfo_var))->get__parser_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* MessageDescriptor_get_NestedTypes_m6C005AD1BD430E30D7A2C808A761C5ED5CCC8D47_inline (MessageDescriptor_t66BFACC1855F8CF3B4F0FB366C773ECDCBE900CB * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CNestedTypesU3Ek__BackingField_13();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MessageParser_1_tDD093BAC6289A0E6913065203F01B017D3F705E2 * AgentActionProto_get_Parser_m6E35FBF409BF005A36D4538EBF5DE80B406E6224_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AgentActionProto_get_Parser_m6E35FBF409BF005A36D4538EBF5DE80B406E6224Unity_MLU2DAgents_CommunicatorObjects1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static pb::MessageParser<AgentActionProto> Parser { get { return _parser; } }
		IL2CPP_RUNTIME_CLASS_INIT(AgentActionProto_tD039A9669DE32649580A51A04DC77145F5D748C9_il2cpp_TypeInfo_var);
		MessageParser_1_tDD093BAC6289A0E6913065203F01B017D3F705E2 * L_0 = ((AgentActionProto_tD039A9669DE32649580A51A04DC77145F5D748C9_StaticFields*)il2cpp_codegen_static_fields_for(AgentActionProto_tD039A9669DE32649580A51A04DC77145F5D748C9_il2cpp_TypeInfo_var))->get__parser_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * UnityRlOutputReflection_get_Descriptor_m5D75BACA3A8B729D44606FC38AA1B740E172A896_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRlOutputReflection_get_Descriptor_m5D75BACA3A8B729D44606FC38AA1B740E172A896Unity_MLU2DAgents_CommunicatorObjects1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return descriptor; }
		IL2CPP_RUNTIME_CLASS_INIT(UnityRlOutputReflection_t0776186F804074BFA18A3600865C682779F04F75_il2cpp_TypeInfo_var);
		FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * L_0 = ((UnityRlOutputReflection_t0776186F804074BFA18A3600865C682779F04F75_StaticFields*)il2cpp_codegen_static_fields_for(UnityRlOutputReflection_t0776186F804074BFA18A3600865C682779F04F75_il2cpp_TypeInfo_var))->get_descriptor_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MapField_2_t8BA58C589830633C7DCCC6E650D623B9E1EDC681 * UnityRLOutputProto_get_AgentInfos_mAD6E4B1BB974BD9ED839643B02EBB7DD4C0084EE_inline (UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7 * __this, const RuntimeMethod* method)
{
	{
		// get { return agentInfos_; }
		MapField_2_t8BA58C589830633C7DCCC6E650D623B9E1EDC681 * L_0 = __this->get_agentInfos__3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * UnityRLOutputProto_get_SideChannel_mE3853244B5B1C97B5FB4728E668B531BAED06990_inline (UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7 * __this, const RuntimeMethod* method)
{
	{
		// get { return sideChannel_; }
		ByteString_t5589D127406BD5B5E3E29053DB9AB5985BFE1F8A * L_0 = __this->get_sideChannel__4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MessageParser_1_tFCC153276983A237B272DFE38939C2203C07096E * ListAgentInfoProto_get_Parser_mE43947C6D53FF14A540E7E3DACA5E0BBBC395C18_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListAgentInfoProto_get_Parser_mE43947C6D53FF14A540E7E3DACA5E0BBBC395C18Unity_MLU2DAgents_CommunicatorObjects1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static pb::MessageParser<ListAgentInfoProto> Parser { get { return _parser; } }
		IL2CPP_RUNTIME_CLASS_INIT(ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354_il2cpp_TypeInfo_var);
		MessageParser_1_tFCC153276983A237B272DFE38939C2203C07096E * L_0 = ((ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354_StaticFields*)il2cpp_codegen_static_fields_for(ListAgentInfoProto_t08D766A794B28D45D1277B747B0AA77A862F7354_il2cpp_TypeInfo_var))->get__parser_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MessageParser_1_t22E2BEA51C2B5AD6B1005D5F6AD497277762E2CE * AgentInfoProto_get_Parser_mD32C2989338F0DB9DB3017716FEAFEE008D1682C_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AgentInfoProto_get_Parser_mD32C2989338F0DB9DB3017716FEAFEE008D1682CUnity_MLU2DAgents_CommunicatorObjects1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static pb::MessageParser<AgentInfoProto> Parser { get { return _parser; } }
		IL2CPP_RUNTIME_CLASS_INIT(AgentInfoProto_tB07CB4D6C9A6367975913C1581FAA29FDB4FF5B0_il2cpp_TypeInfo_var);
		MessageParser_1_t22E2BEA51C2B5AD6B1005D5F6AD497277762E2CE * L_0 = ((AgentInfoProto_tB07CB4D6C9A6367975913C1581FAA29FDB4FF5B0_StaticFields*)il2cpp_codegen_static_fields_for(AgentInfoProto_tB07CB4D6C9A6367975913C1581FAA29FDB4FF5B0_il2cpp_TypeInfo_var))->get__parser_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * CapabilitiesReflection_get_Descriptor_m6543ED9CF60EA4CA4AB51C90E83144680F7E00DA_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CapabilitiesReflection_get_Descriptor_m6543ED9CF60EA4CA4AB51C90E83144680F7E00DAUnity_MLU2DAgents_CommunicatorObjects1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return descriptor; }
		IL2CPP_RUNTIME_CLASS_INIT(CapabilitiesReflection_tB11BAD1ED4A2E9994A7AA8AEAFF5FEE02FF83C07_il2cpp_TypeInfo_var);
		FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * L_0 = ((CapabilitiesReflection_tB11BAD1ED4A2E9994A7AA8AEAFF5FEE02FF83C07_StaticFields*)il2cpp_codegen_static_fields_for(CapabilitiesReflection_tB11BAD1ED4A2E9994A7AA8AEAFF5FEE02FF83C07_il2cpp_TypeInfo_var))->get_descriptor_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MessageParser_1_t282425D3E3A384629DB8B5E5A41C1299DA1FF2FE * UnityRLInitializationInputProto_get_Parser_m3A3426B1DDCAC0F07CE62541788DDC4892165D03_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRLInitializationInputProto_get_Parser_m3A3426B1DDCAC0F07CE62541788DDC4892165D03Unity_MLU2DAgents_CommunicatorObjects1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static pb::MessageParser<UnityRLInitializationInputProto> Parser { get { return _parser; } }
		IL2CPP_RUNTIME_CLASS_INIT(UnityRLInitializationInputProto_t80AF7CBDE43BD9439BDCC706F66B3EE5BCCF2762_il2cpp_TypeInfo_var);
		MessageParser_1_t282425D3E3A384629DB8B5E5A41C1299DA1FF2FE * L_0 = ((UnityRLInitializationInputProto_t80AF7CBDE43BD9439BDCC706F66B3EE5BCCF2762_StaticFields*)il2cpp_codegen_static_fields_for(UnityRLInitializationInputProto_t80AF7CBDE43BD9439BDCC706F66B3EE5BCCF2762_il2cpp_TypeInfo_var))->get__parser_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * BrainParametersReflection_get_Descriptor_m09FF522C12CBC8AF443ADCD7A6734794625DC100_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BrainParametersReflection_get_Descriptor_m09FF522C12CBC8AF443ADCD7A6734794625DC100Unity_MLU2DAgents_CommunicatorObjects1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return descriptor; }
		IL2CPP_RUNTIME_CLASS_INIT(BrainParametersReflection_tFA72E8BF1EB04761020D829D76D68A89FD9ED905_il2cpp_TypeInfo_var);
		FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * L_0 = ((BrainParametersReflection_tFA72E8BF1EB04761020D829D76D68A89FD9ED905_StaticFields*)il2cpp_codegen_static_fields_for(BrainParametersReflection_tFA72E8BF1EB04761020D829D76D68A89FD9ED905_il2cpp_TypeInfo_var))->get_descriptor_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MessageParser_1_t11F6130B5701C9992E0A73F4900A7816D14A3319 * UnityRLInitializationOutputProto_get_Parser_m533687B973C280208A545011301356FA924E98DE_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRLInitializationOutputProto_get_Parser_m533687B973C280208A545011301356FA924E98DEUnity_MLU2DAgents_CommunicatorObjects1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static pb::MessageParser<UnityRLInitializationOutputProto> Parser { get { return _parser; } }
		IL2CPP_RUNTIME_CLASS_INIT(UnityRLInitializationOutputProto_tC42D4D6F0F04C6EC9171D63F974FEBFD70943CA0_il2cpp_TypeInfo_var);
		MessageParser_1_t11F6130B5701C9992E0A73F4900A7816D14A3319 * L_0 = ((UnityRLInitializationOutputProto_tC42D4D6F0F04C6EC9171D63F974FEBFD70943CA0_StaticFields*)il2cpp_codegen_static_fields_for(UnityRLInitializationOutputProto_tC42D4D6F0F04C6EC9171D63F974FEBFD70943CA0_il2cpp_TypeInfo_var))->get__parser_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * AgentActionReflection_get_Descriptor_m52778BBF06149132FC6DB827B18CC0D73FC6A642_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AgentActionReflection_get_Descriptor_m52778BBF06149132FC6DB827B18CC0D73FC6A642Unity_MLU2DAgents_CommunicatorObjects1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return descriptor; }
		IL2CPP_RUNTIME_CLASS_INIT(AgentActionReflection_tBA544673D5D08C2470AB2DDB97F023BD10EDA367_il2cpp_TypeInfo_var);
		FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * L_0 = ((AgentActionReflection_tBA544673D5D08C2470AB2DDB97F023BD10EDA367_StaticFields*)il2cpp_codegen_static_fields_for(AgentActionReflection_tBA544673D5D08C2470AB2DDB97F023BD10EDA367_il2cpp_TypeInfo_var))->get_descriptor_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * CommandReflection_get_Descriptor_mB7605DDFA54D2848FD1A124CB983FBD89583B887_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CommandReflection_get_Descriptor_mB7605DDFA54D2848FD1A124CB983FBD89583B887Unity_MLU2DAgents_CommunicatorObjects1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return descriptor; }
		IL2CPP_RUNTIME_CLASS_INIT(CommandReflection_t3F6C832949B0C06BB4474B84EBAAAACAB7160E74_il2cpp_TypeInfo_var);
		FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * L_0 = ((CommandReflection_t3F6C832949B0C06BB4474B84EBAAAACAB7160E74_StaticFields*)il2cpp_codegen_static_fields_for(CommandReflection_t3F6C832949B0C06BB4474B84EBAAAACAB7160E74_il2cpp_TypeInfo_var))->get_descriptor_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MessageParser_1_t76C3D8CC3698E2678107C9AB953C0ED781186CFC * UnityRLInputProto_get_Parser_m732A203B6A457C70EBD2223BB5DF31E1E22250EE_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRLInputProto_get_Parser_m732A203B6A457C70EBD2223BB5DF31E1E22250EEUnity_MLU2DAgents_CommunicatorObjects1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static pb::MessageParser<UnityRLInputProto> Parser { get { return _parser; } }
		IL2CPP_RUNTIME_CLASS_INIT(UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0_il2cpp_TypeInfo_var);
		MessageParser_1_t76C3D8CC3698E2678107C9AB953C0ED781186CFC * L_0 = ((UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0_StaticFields*)il2cpp_codegen_static_fields_for(UnityRLInputProto_tBE372DF310B68AF280464E5105124209235557F0_il2cpp_TypeInfo_var))->get__parser_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * AgentInfoReflection_get_Descriptor_m53079D2FBD62E6DB563670E10BF9C184A70048C1_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AgentInfoReflection_get_Descriptor_m53079D2FBD62E6DB563670E10BF9C184A70048C1Unity_MLU2DAgents_CommunicatorObjects1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return descriptor; }
		IL2CPP_RUNTIME_CLASS_INIT(AgentInfoReflection_t49013675F1E2B6D3F15FB8FB3FBB07C33555B3BE_il2cpp_TypeInfo_var);
		FileDescriptor_tA497EC4B9C234692E459C1DD55CEE1C85E2EDCF5 * L_0 = ((AgentInfoReflection_t49013675F1E2B6D3F15FB8FB3FBB07C33555B3BE_StaticFields*)il2cpp_codegen_static_fields_for(AgentInfoReflection_t49013675F1E2B6D3F15FB8FB3FBB07C33555B3BE_il2cpp_TypeInfo_var))->get_descriptor_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MessageParser_1_t599AFE94D623A6084E4A6E9656D1DE8C69383948 * UnityRLOutputProto_get_Parser_m3082F856637D0BCCE8432273D0F9A43C2D6BDBF5_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRLOutputProto_get_Parser_m3082F856637D0BCCE8432273D0F9A43C2D6BDBF5Unity_MLU2DAgents_CommunicatorObjects1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static pb::MessageParser<UnityRLOutputProto> Parser { get { return _parser; } }
		IL2CPP_RUNTIME_CLASS_INIT(UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7_il2cpp_TypeInfo_var);
		MessageParser_1_t599AFE94D623A6084E4A6E9656D1DE8C69383948 * L_0 = ((UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7_StaticFields*)il2cpp_codegen_static_fields_for(UnityRLOutputProto_tB9C74F1F60A516BB1665EED465C4935539E03CC7_il2cpp_TypeInfo_var))->get__parser_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MessageParser_1_t352DB8B114FB0010B1737343561DB051851EA4F7 * UnityMessageProto_get_Parser_m58AD0E729F7B142EC6485BE3A02EBFBE5A7DD956_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityMessageProto_get_Parser_m58AD0E729F7B142EC6485BE3A02EBFBE5A7DD956Unity_MLU2DAgents_CommunicatorObjects1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static pb::MessageParser<UnityMessageProto> Parser { get { return _parser; } }
		IL2CPP_RUNTIME_CLASS_INIT(UnityMessageProto_tD5391F5B3FDFAFE6B6AEC00BEED8871DCD4B2B26_il2cpp_TypeInfo_var);
		MessageParser_1_t352DB8B114FB0010B1737343561DB051851EA4F7 * L_0 = ((UnityMessageProto_tD5391F5B3FDFAFE6B6AEC00BEED8871DCD4B2B26_StaticFields*)il2cpp_codegen_static_fields_for(UnityMessageProto_tD5391F5B3FDFAFE6B6AEC00BEED8871DCD4B2B26_il2cpp_TypeInfo_var))->get__parser_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR CallInvoker_t8D08B1AC2305E30108FB2F8AFBB87380CB354565 * ClientBase_get_CallInvoker_m8A5DF25E614C5C611656BFD6FBB75AB59A1AC8DE_inline (ClientBase_t7D7B773C37F5A5D8F3791A3A98E58570F38A7727 * __this, const RuntimeMethod* method)
{
	{
		CallInvoker_t8D08B1AC2305E30108FB2F8AFBB87380CB354565 * L_0 = __this->get_callInvoker_1();
		return L_0;
	}
}
