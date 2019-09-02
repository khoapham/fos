// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: proto/fpga_rpc.proto
#ifndef GRPC_proto_2ffpga_5frpc_2eproto__INCLUDED
#define GRPC_proto_2ffpga_5frpc_2eproto__INCLUDED

#include "proto/fpga_rpc.pb.h"

#include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/method_handler_impl.h>
#include <grpc++/impl/codegen/proto_utils.h>
#include <grpc++/impl/codegen/rpc_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/status.h>
#include <grpc++/impl/codegen/stub_options.h>
#include <grpc++/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class Channel;
class RpcService;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

class FPGARPC final {
 public:
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // request a set of jobs from the fpga
    virtual ::grpc::Status Run(::grpc::ClientContext* context, const ::RunMessage& request, ::RunReturn* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::RunReturn>> AsyncRun(::grpc::ClientContext* context, const ::RunMessage& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::RunReturn>>(AsyncRunRaw(context, request, cq));
    }
    // request and free physical buffers
    virtual ::grpc::Status Alloc(::grpc::ClientContext* context, const ::AllocMessage& request, ::AllocReturn* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::AllocReturn>> AsyncAlloc(::grpc::ClientContext* context, const ::AllocMessage& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::AllocReturn>>(AsyncAllocRaw(context, request, cq));
    }
    virtual ::grpc::Status Free(::grpc::ClientContext* context, const ::FreeMessage& request, ::FreeReturn* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::FreeReturn>> AsyncFree(::grpc::ClientContext* context, const ::FreeMessage& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::FreeReturn>>(AsyncFreeRaw(context, request, cq));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::RunReturn>* AsyncRunRaw(::grpc::ClientContext* context, const ::RunMessage& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::AllocReturn>* AsyncAllocRaw(::grpc::ClientContext* context, const ::AllocMessage& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::FreeReturn>* AsyncFreeRaw(::grpc::ClientContext* context, const ::FreeMessage& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status Run(::grpc::ClientContext* context, const ::RunMessage& request, ::RunReturn* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::RunReturn>> AsyncRun(::grpc::ClientContext* context, const ::RunMessage& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::RunReturn>>(AsyncRunRaw(context, request, cq));
    }
    ::grpc::Status Alloc(::grpc::ClientContext* context, const ::AllocMessage& request, ::AllocReturn* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::AllocReturn>> AsyncAlloc(::grpc::ClientContext* context, const ::AllocMessage& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::AllocReturn>>(AsyncAllocRaw(context, request, cq));
    }
    ::grpc::Status Free(::grpc::ClientContext* context, const ::FreeMessage& request, ::FreeReturn* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::FreeReturn>> AsyncFree(::grpc::ClientContext* context, const ::FreeMessage& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::FreeReturn>>(AsyncFreeRaw(context, request, cq));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< ::RunReturn>* AsyncRunRaw(::grpc::ClientContext* context, const ::RunMessage& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::AllocReturn>* AsyncAllocRaw(::grpc::ClientContext* context, const ::AllocMessage& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::FreeReturn>* AsyncFreeRaw(::grpc::ClientContext* context, const ::FreeMessage& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::RpcMethod rpcmethod_Run_;
    const ::grpc::RpcMethod rpcmethod_Alloc_;
    const ::grpc::RpcMethod rpcmethod_Free_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // request a set of jobs from the fpga
    virtual ::grpc::Status Run(::grpc::ServerContext* context, const ::RunMessage* request, ::RunReturn* response);
    // request and free physical buffers
    virtual ::grpc::Status Alloc(::grpc::ServerContext* context, const ::AllocMessage* request, ::AllocReturn* response);
    virtual ::grpc::Status Free(::grpc::ServerContext* context, const ::FreeMessage* request, ::FreeReturn* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_Run : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_Run() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_Run() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Run(::grpc::ServerContext* context, const ::RunMessage* request, ::RunReturn* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestRun(::grpc::ServerContext* context, ::RunMessage* request, ::grpc::ServerAsyncResponseWriter< ::RunReturn>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_Alloc : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_Alloc() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_Alloc() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Alloc(::grpc::ServerContext* context, const ::AllocMessage* request, ::AllocReturn* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestAlloc(::grpc::ServerContext* context, ::AllocMessage* request, ::grpc::ServerAsyncResponseWriter< ::AllocReturn>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_Free : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_Free() {
      ::grpc::Service::MarkMethodAsync(2);
    }
    ~WithAsyncMethod_Free() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Free(::grpc::ServerContext* context, const ::FreeMessage* request, ::FreeReturn* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestFree(::grpc::ServerContext* context, ::FreeMessage* request, ::grpc::ServerAsyncResponseWriter< ::FreeReturn>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_Run<WithAsyncMethod_Alloc<WithAsyncMethod_Free<Service > > > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_Run : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_Run() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_Run() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Run(::grpc::ServerContext* context, const ::RunMessage* request, ::RunReturn* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_Alloc : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_Alloc() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_Alloc() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Alloc(::grpc::ServerContext* context, const ::AllocMessage* request, ::AllocReturn* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_Free : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_Free() {
      ::grpc::Service::MarkMethodGeneric(2);
    }
    ~WithGenericMethod_Free() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Free(::grpc::ServerContext* context, const ::FreeMessage* request, ::FreeReturn* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Run : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_Run() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::StreamedUnaryHandler< ::RunMessage, ::RunReturn>(std::bind(&WithStreamedUnaryMethod_Run<BaseClass>::StreamedRun, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_Run() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Run(::grpc::ServerContext* context, const ::RunMessage* request, ::RunReturn* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedRun(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::RunMessage,::RunReturn>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Alloc : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_Alloc() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::StreamedUnaryHandler< ::AllocMessage, ::AllocReturn>(std::bind(&WithStreamedUnaryMethod_Alloc<BaseClass>::StreamedAlloc, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_Alloc() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Alloc(::grpc::ServerContext* context, const ::AllocMessage* request, ::AllocReturn* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedAlloc(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::AllocMessage,::AllocReturn>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Free : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_Free() {
      ::grpc::Service::MarkMethodStreamed(2,
        new ::grpc::StreamedUnaryHandler< ::FreeMessage, ::FreeReturn>(std::bind(&WithStreamedUnaryMethod_Free<BaseClass>::StreamedFree, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_Free() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Free(::grpc::ServerContext* context, const ::FreeMessage* request, ::FreeReturn* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedFree(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::FreeMessage,::FreeReturn>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_Run<WithStreamedUnaryMethod_Alloc<WithStreamedUnaryMethod_Free<Service > > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_Run<WithStreamedUnaryMethod_Alloc<WithStreamedUnaryMethod_Free<Service > > > StreamedService;
};


#endif  // GRPC_proto_2ffpga_5frpc_2eproto__INCLUDED