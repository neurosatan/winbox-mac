/*** Autogenerated by WIDL 1.8.2 from bits3_0.idl - Do not edit ***/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include <rpc.h>
#include <rpcndr.h>

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __bits3_0_h__
#define __bits3_0_h__

/* Forward declarations */

#ifndef __IBackgroundCopyCallback2_FWD_DEFINED__
#define __IBackgroundCopyCallback2_FWD_DEFINED__
typedef interface IBackgroundCopyCallback2 IBackgroundCopyCallback2;
#ifdef __cplusplus
interface IBackgroundCopyCallback2;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <bits.h>

#ifdef __cplusplus
extern "C" {
#endif

/*****************************************************************************
 * IBackgroundCopyCallback2 interface
 */
#ifndef __IBackgroundCopyCallback2_INTERFACE_DEFINED__
#define __IBackgroundCopyCallback2_INTERFACE_DEFINED__

DEFINE_GUID(IID_IBackgroundCopyCallback2, 0x659cdeac, 0x489e, 0x11d9, 0xa9,0xcd, 0x00,0x0d,0x56,0x96,0x52,0x51);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("659cdeac-489e-11d9-a9cd-000d56965251")
IBackgroundCopyCallback2 : public IBackgroundCopyCallback
{
    virtual HRESULT STDMETHODCALLTYPE FileTransferred(
        IBackgroundCopyJob *job,
        IBackgroundCopyFile *file) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IBackgroundCopyCallback2, 0x659cdeac, 0x489e, 0x11d9, 0xa9,0xcd, 0x00,0x0d,0x56,0x96,0x52,0x51)
#endif
#else
typedef struct IBackgroundCopyCallback2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IBackgroundCopyCallback2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IBackgroundCopyCallback2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IBackgroundCopyCallback2 *This);

    /*** IBackgroundCopyCallback methods ***/
    HRESULT (STDMETHODCALLTYPE *JobTransferred)(
        IBackgroundCopyCallback2 *This,
        IBackgroundCopyJob *pJob);

    HRESULT (STDMETHODCALLTYPE *JobError)(
        IBackgroundCopyCallback2 *This,
        IBackgroundCopyJob *pJob,
        IBackgroundCopyError *pError);

    HRESULT (STDMETHODCALLTYPE *JobModification)(
        IBackgroundCopyCallback2 *This,
        IBackgroundCopyJob *pJob,
        DWORD dwReserved);

    /*** IBackgroundCopyCallback2 methods ***/
    HRESULT (STDMETHODCALLTYPE *FileTransferred)(
        IBackgroundCopyCallback2 *This,
        IBackgroundCopyJob *job,
        IBackgroundCopyFile *file);

    END_INTERFACE
} IBackgroundCopyCallback2Vtbl;

interface IBackgroundCopyCallback2 {
    CONST_VTBL IBackgroundCopyCallback2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IBackgroundCopyCallback2_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IBackgroundCopyCallback2_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IBackgroundCopyCallback2_Release(This) (This)->lpVtbl->Release(This)
/*** IBackgroundCopyCallback methods ***/
#define IBackgroundCopyCallback2_JobTransferred(This,pJob) (This)->lpVtbl->JobTransferred(This,pJob)
#define IBackgroundCopyCallback2_JobError(This,pJob,pError) (This)->lpVtbl->JobError(This,pJob,pError)
#define IBackgroundCopyCallback2_JobModification(This,pJob,dwReserved) (This)->lpVtbl->JobModification(This,pJob,dwReserved)
/*** IBackgroundCopyCallback2 methods ***/
#define IBackgroundCopyCallback2_FileTransferred(This,job,file) (This)->lpVtbl->FileTransferred(This,job,file)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IBackgroundCopyCallback2_QueryInterface(IBackgroundCopyCallback2* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IBackgroundCopyCallback2_AddRef(IBackgroundCopyCallback2* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IBackgroundCopyCallback2_Release(IBackgroundCopyCallback2* This) {
    return This->lpVtbl->Release(This);
}
/*** IBackgroundCopyCallback methods ***/
static FORCEINLINE HRESULT IBackgroundCopyCallback2_JobTransferred(IBackgroundCopyCallback2* This,IBackgroundCopyJob *pJob) {
    return This->lpVtbl->JobTransferred(This,pJob);
}
static FORCEINLINE HRESULT IBackgroundCopyCallback2_JobError(IBackgroundCopyCallback2* This,IBackgroundCopyJob *pJob,IBackgroundCopyError *pError) {
    return This->lpVtbl->JobError(This,pJob,pError);
}
static FORCEINLINE HRESULT IBackgroundCopyCallback2_JobModification(IBackgroundCopyCallback2* This,IBackgroundCopyJob *pJob,DWORD dwReserved) {
    return This->lpVtbl->JobModification(This,pJob,dwReserved);
}
/*** IBackgroundCopyCallback2 methods ***/
static FORCEINLINE HRESULT IBackgroundCopyCallback2_FileTransferred(IBackgroundCopyCallback2* This,IBackgroundCopyJob *job,IBackgroundCopyFile *file) {
    return This->lpVtbl->FileTransferred(This,job,file);
}
#endif
#endif

#endif

HRESULT STDMETHODCALLTYPE IBackgroundCopyCallback2_FileTransferred_Proxy(
    IBackgroundCopyCallback2* This,
    IBackgroundCopyJob *job,
    IBackgroundCopyFile *file);
void __RPC_STUB IBackgroundCopyCallback2_FileTransferred_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __IBackgroundCopyCallback2_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __bits3_0_h__ */
