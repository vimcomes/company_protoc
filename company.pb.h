// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: company.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_company_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_company_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>

#include "google/protobuf/port_def.inc"
#if PROTOBUF_VERSION < 4022000
#error "This file was generated by a newer version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please update"
#error "your headers."
#endif  // PROTOBUF_VERSION

#if 4022002 < PROTOBUF_MIN_PROTOC_VERSION
#error "This file was generated by an older version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please"
#error "regenerate this file with a newer version of protoc."
#endif  // PROTOBUF_MIN_PROTOC_VERSION
#include "google/protobuf/port_undef.inc"
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/unknown_field_set.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_company_2eproto

PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_company_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable
    descriptor_table_company_2eproto;
class Record;
struct RecordDefaultTypeInternal;
extern RecordDefaultTypeInternal _Record_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template <>
::Record* Arena::CreateMaybeMessage<::Record>(Arena*);
PROTOBUF_NAMESPACE_CLOSE


// ===================================================================


// -------------------------------------------------------------------

class Record final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Record) */ {
 public:
  inline Record() : Record(nullptr) {}
  ~Record() override;
  explicit PROTOBUF_CONSTEXPR Record(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Record(const Record& from);
  Record(Record&& from) noexcept
    : Record() {
    *this = ::std::move(from);
  }

  inline Record& operator=(const Record& from) {
    CopyFrom(from);
    return *this;
  }
  inline Record& operator=(Record&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Record& default_instance() {
    return *internal_default_instance();
  }
  static inline const Record* internal_default_instance() {
    return reinterpret_cast<const Record*>(
               &_Record_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Record& a, Record& b) {
    a.Swap(&b);
  }
  inline void Swap(Record* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Record* other) {
    if (other == this) return;
    ABSL_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Record* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Record>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Record& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Record& from) {
    Record::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Record* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "Record";
  }
  protected:
  explicit Record(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kLegalAddressFieldNumber = 2,
    kCompanyNameFieldNumber = 3,
    kActivityTypeFieldNumber = 4,
    kYearOfFoundationFieldNumber = 1,
    kForeignEconomicActivityFieldNumber = 5,
  };
  // required string legal_address = 2;
  bool has_legal_address() const;
  void clear_legal_address() ;
  const std::string& legal_address() const;




  template <typename Arg_ = const std::string&, typename... Args_>
  void set_legal_address(Arg_&& arg, Args_... args);
  std::string* mutable_legal_address();
  PROTOBUF_NODISCARD std::string* release_legal_address();
  void set_allocated_legal_address(std::string* ptr);

  private:
  const std::string& _internal_legal_address() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_legal_address(
      const std::string& value);
  std::string* _internal_mutable_legal_address();

  public:
  // required string company_name = 3;
  bool has_company_name() const;
  void clear_company_name() ;
  const std::string& company_name() const;




  template <typename Arg_ = const std::string&, typename... Args_>
  void set_company_name(Arg_&& arg, Args_... args);
  std::string* mutable_company_name();
  PROTOBUF_NODISCARD std::string* release_company_name();
  void set_allocated_company_name(std::string* ptr);

  private:
  const std::string& _internal_company_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_company_name(
      const std::string& value);
  std::string* _internal_mutable_company_name();

  public:
  // optional string activity_type = 4;
  bool has_activity_type() const;
  void clear_activity_type() ;
  const std::string& activity_type() const;




  template <typename Arg_ = const std::string&, typename... Args_>
  void set_activity_type(Arg_&& arg, Args_... args);
  std::string* mutable_activity_type();
  PROTOBUF_NODISCARD std::string* release_activity_type();
  void set_allocated_activity_type(std::string* ptr);

  private:
  const std::string& _internal_activity_type() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_activity_type(
      const std::string& value);
  std::string* _internal_mutable_activity_type();

  public:
  // required int32 year_of_foundation = 1;
  bool has_year_of_foundation() const;
  void clear_year_of_foundation() ;
  ::int32_t year_of_foundation() const;
  void set_year_of_foundation(::int32_t value);

  private:
  ::int32_t _internal_year_of_foundation() const;
  void _internal_set_year_of_foundation(::int32_t value);

  public:
  // optional bool foreign_economic_activity = 5;
  bool has_foreign_economic_activity() const;
  void clear_foreign_economic_activity() ;
  bool foreign_economic_activity() const;
  void set_foreign_economic_activity(bool value);

  private:
  bool _internal_foreign_economic_activity() const;
  void _internal_set_foreign_economic_activity(bool value);

  public:
  // @@protoc_insertion_point(class_scope:Record)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  ::size_t RequiredFieldsByteSizeFallback() const;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr legal_address_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr company_name_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr activity_type_;
    ::int32_t year_of_foundation_;
    bool foreign_economic_activity_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_company_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// Record

// required int32 year_of_foundation = 1;
inline bool Record::has_year_of_foundation() const {
  bool value = (_impl_._has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline void Record::clear_year_of_foundation() {
  _impl_.year_of_foundation_ = 0;
  _impl_._has_bits_[0] &= ~0x00000008u;
}
inline ::int32_t Record::year_of_foundation() const {
  // @@protoc_insertion_point(field_get:Record.year_of_foundation)
  return _internal_year_of_foundation();
}
inline void Record::set_year_of_foundation(::int32_t value) {
  _internal_set_year_of_foundation(value);
  // @@protoc_insertion_point(field_set:Record.year_of_foundation)
}
inline ::int32_t Record::_internal_year_of_foundation() const {
  return _impl_.year_of_foundation_;
}
inline void Record::_internal_set_year_of_foundation(::int32_t value) {
  _impl_._has_bits_[0] |= 0x00000008u;
  _impl_.year_of_foundation_ = value;
}

// required string legal_address = 2;
inline bool Record::has_legal_address() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline void Record::clear_legal_address() {
  _impl_.legal_address_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& Record::legal_address() const {
  // @@protoc_insertion_point(field_get:Record.legal_address)
  return _internal_legal_address();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Record::set_legal_address(Arg_&& arg,
                                                     Args_... args) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.legal_address_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Record.legal_address)
}
inline std::string* Record::mutable_legal_address() {
  std::string* _s = _internal_mutable_legal_address();
  // @@protoc_insertion_point(field_mutable:Record.legal_address)
  return _s;
}
inline const std::string& Record::_internal_legal_address() const {
  return _impl_.legal_address_.Get();
}
inline void Record::_internal_set_legal_address(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000001u;


  _impl_.legal_address_.Set(value, GetArenaForAllocation());
}
inline std::string* Record::_internal_mutable_legal_address() {
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.legal_address_.Mutable( GetArenaForAllocation());
}
inline std::string* Record::release_legal_address() {
  // @@protoc_insertion_point(field_release:Record.legal_address)
  if ((_impl_._has_bits_[0] & 0x00000001u) == 0) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000001u;
  auto* released = _impl_.legal_address_.Release();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.legal_address_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return released;
}
inline void Record::set_allocated_legal_address(std::string* value) {
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.legal_address_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.legal_address_.IsDefault()) {
          _impl_.legal_address_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Record.legal_address)
}

// required string company_name = 3;
inline bool Record::has_company_name() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline void Record::clear_company_name() {
  _impl_.company_name_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline const std::string& Record::company_name() const {
  // @@protoc_insertion_point(field_get:Record.company_name)
  return _internal_company_name();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Record::set_company_name(Arg_&& arg,
                                                     Args_... args) {
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.company_name_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Record.company_name)
}
inline std::string* Record::mutable_company_name() {
  std::string* _s = _internal_mutable_company_name();
  // @@protoc_insertion_point(field_mutable:Record.company_name)
  return _s;
}
inline const std::string& Record::_internal_company_name() const {
  return _impl_.company_name_.Get();
}
inline void Record::_internal_set_company_name(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000002u;


  _impl_.company_name_.Set(value, GetArenaForAllocation());
}
inline std::string* Record::_internal_mutable_company_name() {
  _impl_._has_bits_[0] |= 0x00000002u;
  return _impl_.company_name_.Mutable( GetArenaForAllocation());
}
inline std::string* Record::release_company_name() {
  // @@protoc_insertion_point(field_release:Record.company_name)
  if ((_impl_._has_bits_[0] & 0x00000002u) == 0) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000002u;
  auto* released = _impl_.company_name_.Release();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.company_name_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return released;
}
inline void Record::set_allocated_company_name(std::string* value) {
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }
  _impl_.company_name_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.company_name_.IsDefault()) {
          _impl_.company_name_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Record.company_name)
}

// optional string activity_type = 4;
inline bool Record::has_activity_type() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline void Record::clear_activity_type() {
  _impl_.activity_type_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline const std::string& Record::activity_type() const {
  // @@protoc_insertion_point(field_get:Record.activity_type)
  return _internal_activity_type();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Record::set_activity_type(Arg_&& arg,
                                                     Args_... args) {
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.activity_type_.Set(static_cast<Arg_&&>(arg), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Record.activity_type)
}
inline std::string* Record::mutable_activity_type() {
  std::string* _s = _internal_mutable_activity_type();
  // @@protoc_insertion_point(field_mutable:Record.activity_type)
  return _s;
}
inline const std::string& Record::_internal_activity_type() const {
  return _impl_.activity_type_.Get();
}
inline void Record::_internal_set_activity_type(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000004u;


  _impl_.activity_type_.Set(value, GetArenaForAllocation());
}
inline std::string* Record::_internal_mutable_activity_type() {
  _impl_._has_bits_[0] |= 0x00000004u;
  return _impl_.activity_type_.Mutable( GetArenaForAllocation());
}
inline std::string* Record::release_activity_type() {
  // @@protoc_insertion_point(field_release:Record.activity_type)
  if ((_impl_._has_bits_[0] & 0x00000004u) == 0) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000004u;
  auto* released = _impl_.activity_type_.Release();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.activity_type_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return released;
}
inline void Record::set_allocated_activity_type(std::string* value) {
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000004u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000004u;
  }
  _impl_.activity_type_.SetAllocated(value, GetArenaForAllocation());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.activity_type_.IsDefault()) {
          _impl_.activity_type_.Set("", GetArenaForAllocation());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Record.activity_type)
}

// optional bool foreign_economic_activity = 5;
inline bool Record::has_foreign_economic_activity() const {
  bool value = (_impl_._has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline void Record::clear_foreign_economic_activity() {
  _impl_.foreign_economic_activity_ = false;
  _impl_._has_bits_[0] &= ~0x00000010u;
}
inline bool Record::foreign_economic_activity() const {
  // @@protoc_insertion_point(field_get:Record.foreign_economic_activity)
  return _internal_foreign_economic_activity();
}
inline void Record::set_foreign_economic_activity(bool value) {
  _internal_set_foreign_economic_activity(value);
  // @@protoc_insertion_point(field_set:Record.foreign_economic_activity)
}
inline bool Record::_internal_foreign_economic_activity() const {
  return _impl_.foreign_economic_activity_;
}
inline void Record::_internal_set_foreign_economic_activity(bool value) {
  _impl_._has_bits_[0] |= 0x00000010u;
  _impl_.foreign_economic_activity_ = value;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_company_2eproto_2epb_2eh
