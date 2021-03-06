// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: echo_test.proto

#ifndef PROTOBUF_echo_5ftest_2eproto__INCLUDED
#define PROTOBUF_echo_5ftest_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/service.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace protobuf_echo_5ftest_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsRequestMessageImpl();
void InitDefaultsRequestMessage();
void InitDefaultsResponseMessageImpl();
void InitDefaultsResponseMessage();
inline void InitDefaults() {
  InitDefaultsRequestMessage();
  InitDefaultsResponseMessage();
}
}  // namespace protobuf_echo_5ftest_2eproto
namespace echo {
class RequestMessage;
class RequestMessageDefaultTypeInternal;
extern RequestMessageDefaultTypeInternal _RequestMessage_default_instance_;
class ResponseMessage;
class ResponseMessageDefaultTypeInternal;
extern ResponseMessageDefaultTypeInternal _ResponseMessage_default_instance_;
}  // namespace echo
namespace echo {

// ===================================================================

class RequestMessage : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:echo.RequestMessage) */ {
 public:
  RequestMessage();
  virtual ~RequestMessage();

  RequestMessage(const RequestMessage& from);

  inline RequestMessage& operator=(const RequestMessage& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  RequestMessage(RequestMessage&& from) noexcept
    : RequestMessage() {
    *this = ::std::move(from);
  }

  inline RequestMessage& operator=(RequestMessage&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const RequestMessage& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const RequestMessage* internal_default_instance() {
    return reinterpret_cast<const RequestMessage*>(
               &_RequestMessage_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(RequestMessage* other);
  friend void swap(RequestMessage& a, RequestMessage& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline RequestMessage* New() const PROTOBUF_FINAL { return New(NULL); }

  RequestMessage* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const RequestMessage& from);
  void MergeFrom(const RequestMessage& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(RequestMessage* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string msg = 2;
  void clear_msg();
  static const int kMsgFieldNumber = 2;
  const ::std::string& msg() const;
  void set_msg(const ::std::string& value);
  #if LANG_CXX11
  void set_msg(::std::string&& value);
  #endif
  void set_msg(const char* value);
  void set_msg(const char* value, size_t size);
  ::std::string* mutable_msg();
  ::std::string* release_msg();
  void set_allocated_msg(::std::string* msg);

  // int32 id = 1;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::int32 id() const;
  void set_id(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:echo.RequestMessage)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr msg_;
  ::google::protobuf::int32 id_;
  mutable int _cached_size_;
  friend struct ::protobuf_echo_5ftest_2eproto::TableStruct;
  friend void ::protobuf_echo_5ftest_2eproto::InitDefaultsRequestMessageImpl();
};
// -------------------------------------------------------------------

class ResponseMessage : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:echo.ResponseMessage) */ {
 public:
  ResponseMessage();
  virtual ~ResponseMessage();

  ResponseMessage(const ResponseMessage& from);

  inline ResponseMessage& operator=(const ResponseMessage& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ResponseMessage(ResponseMessage&& from) noexcept
    : ResponseMessage() {
    *this = ::std::move(from);
  }

  inline ResponseMessage& operator=(ResponseMessage&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const ResponseMessage& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ResponseMessage* internal_default_instance() {
    return reinterpret_cast<const ResponseMessage*>(
               &_ResponseMessage_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(ResponseMessage* other);
  friend void swap(ResponseMessage& a, ResponseMessage& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ResponseMessage* New() const PROTOBUF_FINAL { return New(NULL); }

  ResponseMessage* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const ResponseMessage& from);
  void MergeFrom(const ResponseMessage& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(ResponseMessage* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string msg = 2;
  void clear_msg();
  static const int kMsgFieldNumber = 2;
  const ::std::string& msg() const;
  void set_msg(const ::std::string& value);
  #if LANG_CXX11
  void set_msg(::std::string&& value);
  #endif
  void set_msg(const char* value);
  void set_msg(const char* value, size_t size);
  ::std::string* mutable_msg();
  ::std::string* release_msg();
  void set_allocated_msg(::std::string* msg);

  // int32 id = 1;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::int32 id() const;
  void set_id(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:echo.ResponseMessage)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr msg_;
  ::google::protobuf::int32 id_;
  mutable int _cached_size_;
  friend struct ::protobuf_echo_5ftest_2eproto::TableStruct;
  friend void ::protobuf_echo_5ftest_2eproto::InitDefaultsResponseMessageImpl();
};
// ===================================================================

class EchoService_Stub;

class EchoService : public ::google::protobuf::Service {
 protected:
  // This class should be treated as an abstract interface.
  inline EchoService() {};
 public:
  virtual ~EchoService();

  typedef EchoService_Stub Stub;

  static const ::google::protobuf::ServiceDescriptor* descriptor();

  virtual void echo(::google::protobuf::RpcController* controller,
                       const ::echo::RequestMessage* request,
                       ::echo::ResponseMessage* response,
                       ::google::protobuf::Closure* done);

  // implements Service ----------------------------------------------

  const ::google::protobuf::ServiceDescriptor* GetDescriptor();
  void CallMethod(const ::google::protobuf::MethodDescriptor* method,
                  ::google::protobuf::RpcController* controller,
                  const ::google::protobuf::Message* request,
                  ::google::protobuf::Message* response,
                  ::google::protobuf::Closure* done);
  const ::google::protobuf::Message& GetRequestPrototype(
    const ::google::protobuf::MethodDescriptor* method) const;
  const ::google::protobuf::Message& GetResponsePrototype(
    const ::google::protobuf::MethodDescriptor* method) const;

 private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(EchoService);
};

class EchoService_Stub : public EchoService {
 public:
  EchoService_Stub(::google::protobuf::RpcChannel* channel);
  EchoService_Stub(::google::protobuf::RpcChannel* channel,
                   ::google::protobuf::Service::ChannelOwnership ownership);
  ~EchoService_Stub();

  inline ::google::protobuf::RpcChannel* channel() { return channel_; }

  // implements EchoService ------------------------------------------

  void echo(::google::protobuf::RpcController* controller,
                       const ::echo::RequestMessage* request,
                       ::echo::ResponseMessage* response,
                       ::google::protobuf::Closure* done);
 private:
  ::google::protobuf::RpcChannel* channel_;
  bool owns_channel_;
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(EchoService_Stub);
};


// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// RequestMessage

// int32 id = 1;
inline void RequestMessage::clear_id() {
  id_ = 0;
}
inline ::google::protobuf::int32 RequestMessage::id() const {
  // @@protoc_insertion_point(field_get:echo.RequestMessage.id)
  return id_;
}
inline void RequestMessage::set_id(::google::protobuf::int32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:echo.RequestMessage.id)
}

// string msg = 2;
inline void RequestMessage::clear_msg() {
  msg_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& RequestMessage::msg() const {
  // @@protoc_insertion_point(field_get:echo.RequestMessage.msg)
  return msg_.GetNoArena();
}
inline void RequestMessage::set_msg(const ::std::string& value) {
  
  msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:echo.RequestMessage.msg)
}
#if LANG_CXX11
inline void RequestMessage::set_msg(::std::string&& value) {
  
  msg_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:echo.RequestMessage.msg)
}
#endif
inline void RequestMessage::set_msg(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:echo.RequestMessage.msg)
}
inline void RequestMessage::set_msg(const char* value, size_t size) {
  
  msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:echo.RequestMessage.msg)
}
inline ::std::string* RequestMessage::mutable_msg() {
  
  // @@protoc_insertion_point(field_mutable:echo.RequestMessage.msg)
  return msg_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* RequestMessage::release_msg() {
  // @@protoc_insertion_point(field_release:echo.RequestMessage.msg)
  
  return msg_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void RequestMessage::set_allocated_msg(::std::string* msg) {
  if (msg != NULL) {
    
  } else {
    
  }
  msg_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), msg);
  // @@protoc_insertion_point(field_set_allocated:echo.RequestMessage.msg)
}

// -------------------------------------------------------------------

// ResponseMessage

// int32 id = 1;
inline void ResponseMessage::clear_id() {
  id_ = 0;
}
inline ::google::protobuf::int32 ResponseMessage::id() const {
  // @@protoc_insertion_point(field_get:echo.ResponseMessage.id)
  return id_;
}
inline void ResponseMessage::set_id(::google::protobuf::int32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:echo.ResponseMessage.id)
}

// string msg = 2;
inline void ResponseMessage::clear_msg() {
  msg_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ResponseMessage::msg() const {
  // @@protoc_insertion_point(field_get:echo.ResponseMessage.msg)
  return msg_.GetNoArena();
}
inline void ResponseMessage::set_msg(const ::std::string& value) {
  
  msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:echo.ResponseMessage.msg)
}
#if LANG_CXX11
inline void ResponseMessage::set_msg(::std::string&& value) {
  
  msg_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:echo.ResponseMessage.msg)
}
#endif
inline void ResponseMessage::set_msg(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:echo.ResponseMessage.msg)
}
inline void ResponseMessage::set_msg(const char* value, size_t size) {
  
  msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:echo.ResponseMessage.msg)
}
inline ::std::string* ResponseMessage::mutable_msg() {
  
  // @@protoc_insertion_point(field_mutable:echo.ResponseMessage.msg)
  return msg_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ResponseMessage::release_msg() {
  // @@protoc_insertion_point(field_release:echo.ResponseMessage.msg)
  
  return msg_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ResponseMessage::set_allocated_msg(::std::string* msg) {
  if (msg != NULL) {
    
  } else {
    
  }
  msg_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), msg);
  // @@protoc_insertion_point(field_set_allocated:echo.ResponseMessage.msg)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace echo

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_echo_5ftest_2eproto__INCLUDED
