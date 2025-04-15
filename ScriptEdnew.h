typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
float10
typedef pointer32 ImageBaseOffset32;

typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef short    wchar_t;
typedef unsigned short    word;
#define unkbyte9   unsigned long long
#define unkbyte10   unsigned long long
#define unkbyte11   unsigned long long
#define unkbyte12   unsigned long long
#define unkbyte13   unsigned long long
#define unkbyte14   unsigned long long
#define unkbyte15   unsigned long long
#define unkbyte16   unsigned long long

#define unkuint9   unsigned long long
#define unkuint10   unsigned long long
#define unkuint11   unsigned long long
#define unkuint12   unsigned long long
#define unkuint13   unsigned long long
#define unkuint14   unsigned long long
#define unkuint15   unsigned long long
#define unkuint16   unsigned long long

#define unkint9   long long
#define unkint10   long long
#define unkint11   long long
#define unkint12   long long
#define unkint13   long long
#define unkint14   long long
#define unkint15   long long
#define unkint16   long long

#define unkfloat1   float
#define unkfloat2   float
#define unkfloat3   float
#define unkfloat5   double
#define unkfloat6   double
#define unkfloat7   double
#define unkfloat9   long double
#define unkfloat11   long double
#define unkfloat12   long double
#define unkfloat13   long double
#define unkfloat14   long double
#define unkfloat15   long double
#define unkfloat16   long double

#define BADSPACEBASE   void
#define code   void

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion;

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct {
    dword OffsetToDirectory;
    dword DataIsDirectory;
};

union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion {
    dword OffsetToData;
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;
};

typedef unsigned short    wchar16;
typedef ulong DWORD;

typedef DWORD SHCONTF;

typedef struct IEnumIDList IEnumIDList, *PIEnumIDList;

typedef struct IEnumIDListVtbl IEnumIDListVtbl, *PIEnumIDListVtbl;

typedef long HRESULT;

typedef struct _GUID _GUID, *P_GUID;

typedef struct _GUID GUID;

typedef GUID IID;

typedef DWORD ULONG;

typedef struct _ITEMIDLIST _ITEMIDLIST, *P_ITEMIDLIST;

typedef struct _ITEMIDLIST ITEMIDLIST;

typedef ITEMIDLIST *LPITEMIDLIST;

typedef struct _SHITEMID _SHITEMID, *P_SHITEMID;

typedef struct _SHITEMID SHITEMID;

typedef ushort USHORT;

typedef uchar BYTE;

struct _SHITEMID {
    USHORT cb;
    BYTE abID[1];
};

struct _ITEMIDLIST {
    SHITEMID mkid;
};

struct _GUID {
    ulong Data1;
    ushort Data2;
    ushort Data3;
    uchar Data4[8];
};

struct IEnumIDList {
    struct IEnumIDListVtbl *lpVtbl;
};

struct IEnumIDListVtbl {
    HRESULT (*QueryInterface)(struct IEnumIDList *, IID *, void **);
    ULONG (*AddRef)(struct IEnumIDList *);
    ULONG (*Release)(struct IEnumIDList *);
    HRESULT (*Next)(struct IEnumIDList *, ULONG, LPITEMIDLIST *, ULONG *);
    HRESULT (*Skip)(struct IEnumIDList *, ULONG);
    HRESULT (*Reset)(struct IEnumIDList *);
    HRESULT (*Clone)(struct IEnumIDList *, struct IEnumIDList **);
};

typedef DWORD SHGDNF;

typedef ULONG SFGAOF;

typedef struct IShellFolder IShellFolder, *PIShellFolder;

typedef struct IShellFolderVtbl IShellFolderVtbl, *PIShellFolderVtbl;

typedef struct HWND__ HWND__, *PHWND__;

typedef struct HWND__ *HWND;

typedef struct IBindCtx IBindCtx, *PIBindCtx;

typedef wchar_t WCHAR;

typedef WCHAR *LPWSTR;

typedef ITEMIDLIST *LPCITEMIDLIST;

typedef long LONG_PTR;

typedef LONG_PTR LPARAM;

typedef uint UINT;

typedef struct _STRRET _STRRET, *P_STRRET;

typedef struct _STRRET STRRET;

typedef WCHAR *LPCWSTR;

typedef struct IBindCtxVtbl IBindCtxVtbl, *PIBindCtxVtbl;

typedef struct IUnknown IUnknown, *PIUnknown;

typedef struct tagBIND_OPTS tagBIND_OPTS, *PtagBIND_OPTS;

typedef struct tagBIND_OPTS BIND_OPTS;

typedef struct IRunningObjectTable IRunningObjectTable, *PIRunningObjectTable;

typedef WCHAR OLECHAR;

typedef OLECHAR *LPOLESTR;

typedef struct IEnumString IEnumString, *PIEnumString;

typedef union _union_3888 _union_3888, *P_union_3888;

typedef struct IUnknownVtbl IUnknownVtbl, *PIUnknownVtbl;

typedef struct IRunningObjectTableVtbl IRunningObjectTableVtbl, *PIRunningObjectTableVtbl;

typedef struct IMoniker IMoniker, *PIMoniker;

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME FILETIME;

typedef struct IEnumMoniker IEnumMoniker, *PIEnumMoniker;

typedef struct IEnumStringVtbl IEnumStringVtbl, *PIEnumStringVtbl;

typedef struct IMonikerVtbl IMonikerVtbl, *PIMonikerVtbl;

typedef GUID CLSID;

typedef struct IStream IStream, *PIStream;

typedef int BOOL;

typedef union _ULARGE_INTEGER _ULARGE_INTEGER, *P_ULARGE_INTEGER;

typedef union _ULARGE_INTEGER ULARGE_INTEGER;

typedef struct IEnumMonikerVtbl IEnumMonikerVtbl, *PIEnumMonikerVtbl;

typedef struct IStreamVtbl IStreamVtbl, *PIStreamVtbl;

typedef union _LARGE_INTEGER _LARGE_INTEGER, *P_LARGE_INTEGER;

typedef union _LARGE_INTEGER LARGE_INTEGER;

typedef struct tagSTATSTG tagSTATSTG, *PtagSTATSTG;

typedef struct tagSTATSTG STATSTG;

typedef struct _struct_22 _struct_22, *P_struct_22;

typedef struct _struct_23 _struct_23, *P_struct_23;

typedef double ULONGLONG;

typedef struct _struct_19 _struct_19, *P_struct_19;

typedef struct _struct_20 _struct_20, *P_struct_20;

typedef double LONGLONG;

typedef long LONG;

struct IStreamVtbl {
    HRESULT (*QueryInterface)(struct IStream *, IID *, void **);
    ULONG (*AddRef)(struct IStream *);
    ULONG (*Release)(struct IStream *);
    HRESULT (*Read)(struct IStream *, void *, ULONG, ULONG *);
    HRESULT (*Write)(struct IStream *, void *, ULONG, ULONG *);
    HRESULT (*Seek)(struct IStream *, LARGE_INTEGER, DWORD, ULARGE_INTEGER *);
    HRESULT (*SetSize)(struct IStream *, ULARGE_INTEGER);
    HRESULT (*CopyTo)(struct IStream *, struct IStream *, ULARGE_INTEGER, ULARGE_INTEGER *, ULARGE_INTEGER *);
    HRESULT (*Commit)(struct IStream *, DWORD);
    HRESULT (*Revert)(struct IStream *);
    HRESULT (*LockRegion)(struct IStream *, ULARGE_INTEGER, ULARGE_INTEGER, DWORD);
    HRESULT (*UnlockRegion)(struct IStream *, ULARGE_INTEGER, ULARGE_INTEGER, DWORD);
    HRESULT (*Stat)(struct IStream *, STATSTG *, DWORD);
    HRESULT (*Clone)(struct IStream *, struct IStream **);
};

struct IEnumStringVtbl {
    HRESULT (*QueryInterface)(struct IEnumString *, IID *, void **);
    ULONG (*AddRef)(struct IEnumString *);
    ULONG (*Release)(struct IEnumString *);
    HRESULT (*Next)(struct IEnumString *, ULONG, LPOLESTR *, ULONG *);
    HRESULT (*Skip)(struct IEnumString *, ULONG);
    HRESULT (*Reset)(struct IEnumString *);
    HRESULT (*Clone)(struct IEnumString *, struct IEnumString **);
};

struct IStream {
    struct IStreamVtbl *lpVtbl;
};

struct _struct_20 {
    DWORD LowPart;
    LONG HighPart;
};

struct _struct_19 {
    DWORD LowPart;
    LONG HighPart;
};

union _LARGE_INTEGER {
    struct _struct_19 s;
    struct _struct_20 u;
    LONGLONG QuadPart;
};

struct IMoniker {
    struct IMonikerVtbl *lpVtbl;
};

struct IEnumString {
    struct IEnumStringVtbl *lpVtbl;
};

struct IEnumMonikerVtbl {
    HRESULT (*QueryInterface)(struct IEnumMoniker *, IID *, void **);
    ULONG (*AddRef)(struct IEnumMoniker *);
    ULONG (*Release)(struct IEnumMoniker *);
    HRESULT (*Next)(struct IEnumMoniker *, ULONG, struct IMoniker **, ULONG *);
    HRESULT (*Skip)(struct IEnumMoniker *, ULONG);
    HRESULT (*Reset)(struct IEnumMoniker *);
    HRESULT (*Clone)(struct IEnumMoniker *, struct IEnumMoniker **);
};

struct tagBIND_OPTS {
    DWORD cbStruct;
    DWORD grfFlags;
    DWORD grfMode;
    DWORD dwTickCountDeadline;
};

struct _struct_22 {
    DWORD LowPart;
    DWORD HighPart;
};

struct _struct_23 {
    DWORD LowPart;
    DWORD HighPart;
};

union _ULARGE_INTEGER {
    struct _struct_22 s;
    struct _struct_23 u;
    ULONGLONG QuadPart;
};

struct IBindCtx {
    struct IBindCtxVtbl *lpVtbl;
};

struct IBindCtxVtbl {
    HRESULT (*QueryInterface)(struct IBindCtx *, IID *, void **);
    ULONG (*AddRef)(struct IBindCtx *);
    ULONG (*Release)(struct IBindCtx *);
    HRESULT (*RegisterObjectBound)(struct IBindCtx *, struct IUnknown *);
    HRESULT (*RevokeObjectBound)(struct IBindCtx *, struct IUnknown *);
    HRESULT (*ReleaseBoundObjects)(struct IBindCtx *);
    HRESULT (*SetBindOptions)(struct IBindCtx *, BIND_OPTS *);
    HRESULT (*GetBindOptions)(struct IBindCtx *, BIND_OPTS *);
    HRESULT (*GetRunningObjectTable)(struct IBindCtx *, struct IRunningObjectTable **);
    HRESULT (*RegisterObjectParam)(struct IBindCtx *, LPOLESTR, struct IUnknown *);
    HRESULT (*GetObjectParam)(struct IBindCtx *, LPOLESTR, struct IUnknown **);
    HRESULT (*EnumObjectParam)(struct IBindCtx *, struct IEnumString **);
    HRESULT (*RevokeObjectParam)(struct IBindCtx *, LPOLESTR);
};

struct IRunningObjectTableVtbl {
    HRESULT (*QueryInterface)(struct IRunningObjectTable *, IID *, void **);
    ULONG (*AddRef)(struct IRunningObjectTable *);
    ULONG (*Release)(struct IRunningObjectTable *);
    HRESULT (*Register)(struct IRunningObjectTable *, DWORD, struct IUnknown *, struct IMoniker *, DWORD *);
    HRESULT (*Revoke)(struct IRunningObjectTable *, DWORD);
    HRESULT (*IsRunning)(struct IRunningObjectTable *, struct IMoniker *);
    HRESULT (*GetObjectA)(struct IRunningObjectTable *, struct IMoniker *, struct IUnknown **);
    HRESULT (*NoteChangeTime)(struct IRunningObjectTable *, DWORD, FILETIME *);
    HRESULT (*GetTimeOfLastChange)(struct IRunningObjectTable *, struct IMoniker *, FILETIME *);
    HRESULT (*EnumRunning)(struct IRunningObjectTable *, struct IEnumMoniker **);
};

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

struct tagSTATSTG {
    LPOLESTR pwcsName;
    DWORD type;
    ULARGE_INTEGER cbSize;
    FILETIME mtime;
    FILETIME ctime;
    FILETIME atime;
    DWORD grfMode;
    DWORD grfLocksSupported;
    CLSID clsid;
    DWORD grfStateBits;
    DWORD reserved;
};

struct IMonikerVtbl {
    HRESULT (*QueryInterface)(struct IMoniker *, IID *, void **);
    ULONG (*AddRef)(struct IMoniker *);
    ULONG (*Release)(struct IMoniker *);
    HRESULT (*GetClassID)(struct IMoniker *, CLSID *);
    HRESULT (*IsDirty)(struct IMoniker *);
    HRESULT (*Load)(struct IMoniker *, struct IStream *);
    HRESULT (*Save)(struct IMoniker *, struct IStream *, BOOL);
    HRESULT (*GetSizeMax)(struct IMoniker *, ULARGE_INTEGER *);
    HRESULT (*BindToObject)(struct IMoniker *, struct IBindCtx *, struct IMoniker *, IID *, void **);
    HRESULT (*BindToStorage)(struct IMoniker *, struct IBindCtx *, struct IMoniker *, IID *, void **);
    HRESULT (*Reduce)(struct IMoniker *, struct IBindCtx *, DWORD, struct IMoniker **, struct IMoniker **);
    HRESULT (*ComposeWith)(struct IMoniker *, struct IMoniker *, BOOL, struct IMoniker **);
    HRESULT (*Enum)(struct IMoniker *, BOOL, struct IEnumMoniker **);
    HRESULT (*IsEqual)(struct IMoniker *, struct IMoniker *);
    HRESULT (*Hash)(struct IMoniker *, DWORD *);
    HRESULT (*IsRunning)(struct IMoniker *, struct IBindCtx *, struct IMoniker *, struct IMoniker *);
    HRESULT (*GetTimeOfLastChange)(struct IMoniker *, struct IBindCtx *, struct IMoniker *, FILETIME *);
    HRESULT (*Inverse)(struct IMoniker *, struct IMoniker **);
    HRESULT (*CommonPrefixWith)(struct IMoniker *, struct IMoniker *, struct IMoniker **);
    HRESULT (*RelativePathTo)(struct IMoniker *, struct IMoniker *, struct IMoniker **);
    HRESULT (*GetDisplayName)(struct IMoniker *, struct IBindCtx *, struct IMoniker *, LPOLESTR *);
    HRESULT (*ParseDisplayName)(struct IMoniker *, struct IBindCtx *, struct IMoniker *, LPOLESTR, ULONG *, struct IMoniker **);
    HRESULT (*IsSystemMoniker)(struct IMoniker *, DWORD *);
};

struct HWND__ {
    int unused;
};

struct IShellFolder {
    struct IShellFolderVtbl *lpVtbl;
};

struct IShellFolderVtbl {
    HRESULT (*QueryInterface)(struct IShellFolder *, IID *, void **);
    ULONG (*AddRef)(struct IShellFolder *);
    ULONG (*Release)(struct IShellFolder *);
    HRESULT (*ParseDisplayName)(struct IShellFolder *, HWND, struct IBindCtx *, LPWSTR, ULONG *, LPITEMIDLIST *, ULONG *);
    HRESULT (*EnumObjects)(struct IShellFolder *, HWND, SHCONTF, struct IEnumIDList **);
    HRESULT (*BindToObject)(struct IShellFolder *, LPCITEMIDLIST, struct IBindCtx *, IID *, void **);
    HRESULT (*BindToStorage)(struct IShellFolder *, LPCITEMIDLIST, struct IBindCtx *, IID *, void **);
    HRESULT (*CompareIDs)(struct IShellFolder *, LPARAM, LPCITEMIDLIST, LPCITEMIDLIST);
    HRESULT (*CreateViewObject)(struct IShellFolder *, HWND, IID *, void **);
    HRESULT (*GetAttributesOf)(struct IShellFolder *, UINT, LPCITEMIDLIST *, SFGAOF *);
    HRESULT (*GetUIObjectOf)(struct IShellFolder *, HWND, UINT, LPCITEMIDLIST *, IID *, UINT *, void **);
    HRESULT (*GetDisplayNameOf)(struct IShellFolder *, LPCITEMIDLIST, SHGDNF, STRRET *);
    HRESULT (*SetNameOf)(struct IShellFolder *, HWND, LPCITEMIDLIST, LPCWSTR, SHGDNF, LPITEMIDLIST *);
};

struct IRunningObjectTable {
    struct IRunningObjectTableVtbl *lpVtbl;
};

struct IUnknownVtbl {
    HRESULT (*QueryInterface)(struct IUnknown *, IID *, void **);
    ULONG (*AddRef)(struct IUnknown *);
    ULONG (*Release)(struct IUnknown *);
};

struct IUnknown {
    struct IUnknownVtbl *lpVtbl;
};

union _union_3888 {
    LPWSTR pOleStr;
    UINT uOffset;
    char cStr[260];
};

struct _STRRET {
    UINT uType;
    union _union_3888 u;
};

struct IEnumMoniker {
    struct IEnumMonikerVtbl *lpVtbl;
};

typedef char CHAR;

typedef CHAR *LPSTR;

typedef BOOL (*CALINFO_ENUMPROCA)(LPSTR);

typedef struct _cpinfo _cpinfo, *P_cpinfo;

struct _cpinfo {
    UINT MaxCharSize;
    BYTE DefaultChar[2];
    BYTE LeadByte[12];
};

typedef DWORD CALID;

typedef DWORD CALTYPE;

typedef struct _cpinfo *LPCPINFO;

typedef DWORD LCTYPE;

typedef struct _SYSTEM_INFO _SYSTEM_INFO, *P_SYSTEM_INFO;

typedef union _union_530 _union_530, *P_union_530;

typedef void *LPVOID;

typedef ulong ULONG_PTR;

typedef ULONG_PTR DWORD_PTR;

typedef ushort WORD;

typedef struct _struct_531 _struct_531, *P_struct_531;

struct _struct_531 {
    WORD wProcessorArchitecture;
    WORD wReserved;
};

union _union_530 {
    DWORD dwOemId;
    struct _struct_531 s;
};

struct _SYSTEM_INFO {
    union _union_530 u;
    DWORD dwPageSize;
    LPVOID lpMinimumApplicationAddress;
    LPVOID lpMaximumApplicationAddress;
    DWORD_PTR dwActiveProcessorMask;
    DWORD dwNumberOfProcessors;
    DWORD dwProcessorType;
    DWORD dwAllocationGranularity;
    WORD wProcessorLevel;
    WORD wProcessorRevision;
};

typedef struct _OVERLAPPED _OVERLAPPED, *P_OVERLAPPED;

typedef union _union_518 _union_518, *P_union_518;

typedef void *HANDLE;

typedef struct _struct_519 _struct_519, *P_struct_519;

typedef void *PVOID;

struct _struct_519 {
    DWORD Offset;
    DWORD OffsetHigh;
};

union _union_518 {
    struct _struct_519 s;
    PVOID Pointer;
};

struct _OVERLAPPED {
    ULONG_PTR Internal;
    ULONG_PTR InternalHigh;
    union _union_518 u;
    HANDLE hEvent;
};

typedef struct _SYSTEMTIME _SYSTEMTIME, *P_SYSTEMTIME;

struct _SYSTEMTIME {
    WORD wYear;
    WORD wMonth;
    WORD wDayOfWeek;
    WORD wDay;
    WORD wHour;
    WORD wMinute;
    WORD wSecond;
    WORD wMilliseconds;
};

typedef struct _WIN32_FIND_DATAA _WIN32_FIND_DATAA, *P_WIN32_FIND_DATAA;

struct _WIN32_FIND_DATAA {
    DWORD dwFileAttributes;
    FILETIME ftCreationTime;
    FILETIME ftLastAccessTime;
    FILETIME ftLastWriteTime;
    DWORD nFileSizeHigh;
    DWORD nFileSizeLow;
    DWORD dwReserved0;
    DWORD dwReserved1;
    CHAR cFileName[260];
    CHAR cAlternateFileName[14];
};

typedef struct _SECURITY_ATTRIBUTES _SECURITY_ATTRIBUTES, *P_SECURITY_ATTRIBUTES;

typedef struct _SECURITY_ATTRIBUTES *LPSECURITY_ATTRIBUTES;

struct _SECURITY_ATTRIBUTES {
    DWORD nLength;
    LPVOID lpSecurityDescriptor;
    BOOL bInheritHandle;
};

typedef struct _STARTUPINFOA _STARTUPINFOA, *P_STARTUPINFOA;

typedef BYTE *LPBYTE;

struct _STARTUPINFOA {
    DWORD cb;
    LPSTR lpReserved;
    LPSTR lpDesktop;
    LPSTR lpTitle;
    DWORD dwX;
    DWORD dwY;
    DWORD dwXSize;
    DWORD dwYSize;
    DWORD dwXCountChars;
    DWORD dwYCountChars;
    DWORD dwFillAttribute;
    DWORD dwFlags;
    WORD wShowWindow;
    WORD cbReserved2;
    LPBYTE lpReserved2;
    HANDLE hStdInput;
    HANDLE hStdOutput;
    HANDLE hStdError;
};

typedef struct _SYSTEMTIME SYSTEMTIME;

typedef DWORD (*PTHREAD_START_ROUTINE)(LPVOID);

typedef struct _SYSTEM_INFO *LPSYSTEM_INFO;

typedef PTHREAD_START_ROUTINE LPTHREAD_START_ROUTINE;

typedef struct _OVERLAPPED *LPOVERLAPPED;

typedef struct _WIN32_FIND_DATAA *LPWIN32_FIND_DATAA;

typedef struct _STARTUPINFOA *LPSTARTUPINFOA;

typedef struct _RTL_CRITICAL_SECTION _RTL_CRITICAL_SECTION, *P_RTL_CRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION *PRTL_CRITICAL_SECTION;

typedef PRTL_CRITICAL_SECTION LPCRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION_DEBUG _RTL_CRITICAL_SECTION_DEBUG, *P_RTL_CRITICAL_SECTION_DEBUG;

typedef struct _RTL_CRITICAL_SECTION_DEBUG *PRTL_CRITICAL_SECTION_DEBUG;

typedef struct _LIST_ENTRY _LIST_ENTRY, *P_LIST_ENTRY;

typedef struct _LIST_ENTRY LIST_ENTRY;

struct _RTL_CRITICAL_SECTION {
    PRTL_CRITICAL_SECTION_DEBUG DebugInfo;
    LONG LockCount;
    LONG RecursionCount;
    HANDLE OwningThread;
    HANDLE LockSemaphore;
    ULONG_PTR SpinCount;
};

struct _LIST_ENTRY {
    struct _LIST_ENTRY *Flink;
    struct _LIST_ENTRY *Blink;
};

struct _RTL_CRITICAL_SECTION_DEBUG {
    WORD Type;
    WORD CreatorBackTraceIndex;
    struct _RTL_CRITICAL_SECTION *CriticalSection;
    LIST_ENTRY ProcessLocksList;
    DWORD EntryCount;
    DWORD ContentionCount;
    DWORD Flags;
    WORD CreatorBackTraceIndexHigh;
    WORD SpareWORD;
};

typedef struct _SYSTEMTIME *LPSYSTEMTIME;

typedef struct tagSAFEARRAY tagSAFEARRAY, *PtagSAFEARRAY;

typedef struct tagSAFEARRAY SAFEARRAY;

typedef struct tagSAFEARRAYBOUND tagSAFEARRAYBOUND, *PtagSAFEARRAYBOUND;

typedef struct tagSAFEARRAYBOUND SAFEARRAYBOUND;

struct tagSAFEARRAYBOUND {
    ULONG cElements;
    LONG lLbound;
};

struct tagSAFEARRAY {
    USHORT cDims;
    USHORT fFeatures;
    ULONG cbElements;
    ULONG cLocks;
    PVOID pvData;
    SAFEARRAYBOUND rgsabound[1];
};

typedef LONG DISPID;

typedef struct ITypeInfoVtbl ITypeInfoVtbl, *PITypeInfoVtbl;

typedef struct ITypeInfo ITypeInfo, *PITypeInfo;

typedef struct tagTYPEATTR tagTYPEATTR, *PtagTYPEATTR;

typedef struct tagTYPEATTR TYPEATTR;

typedef struct ITypeComp ITypeComp, *PITypeComp;

typedef struct tagFUNCDESC tagFUNCDESC, *PtagFUNCDESC;

typedef struct tagFUNCDESC FUNCDESC;

typedef struct tagVARDESC tagVARDESC, *PtagVARDESC;

typedef struct tagVARDESC VARDESC;

typedef DISPID MEMBERID;

typedef OLECHAR *BSTR;

typedef DWORD HREFTYPE;

typedef int INT;

typedef struct tagDISPPARAMS tagDISPPARAMS, *PtagDISPPARAMS;

typedef struct tagDISPPARAMS DISPPARAMS;

typedef struct tagVARIANT tagVARIANT, *PtagVARIANT;

typedef struct tagVARIANT VARIANT;

typedef struct tagEXCEPINFO tagEXCEPINFO, *PtagEXCEPINFO;

typedef struct tagEXCEPINFO EXCEPINFO;

typedef enum tagINVOKEKIND {
    INVOKE_FUNC=1,
    INVOKE_PROPERTYGET=2,
    INVOKE_PROPERTYPUT=4,
    INVOKE_PROPERTYPUTREF=8
} tagINVOKEKIND;

typedef enum tagINVOKEKIND INVOKEKIND;

typedef struct ITypeLib ITypeLib, *PITypeLib;

typedef DWORD LCID;

typedef enum tagTYPEKIND {
    TKIND_ENUM=0,
    TKIND_RECORD=1,
    TKIND_MODULE=2,
    TKIND_INTERFACE=3,
    TKIND_DISPATCH=4,
    TKIND_COCLASS=5,
    TKIND_ALIAS=6,
    TKIND_UNION=7,
    TKIND_MAX=8
} tagTYPEKIND;

typedef enum tagTYPEKIND TYPEKIND;

typedef struct tagTYPEDESC tagTYPEDESC, *PtagTYPEDESC;

typedef struct tagTYPEDESC TYPEDESC;

typedef struct tagIDLDESC tagIDLDESC, *PtagIDLDESC;

typedef struct tagIDLDESC IDLDESC;

typedef struct ITypeCompVtbl ITypeCompVtbl, *PITypeCompVtbl;

typedef enum tagDESCKIND {
    DESCKIND_NONE=0,
    DESCKIND_FUNCDESC=1,
    DESCKIND_VARDESC=2,
    DESCKIND_TYPECOMP=3,
    DESCKIND_IMPLICITAPPOBJ=4,
    DESCKIND_MAX=5
} tagDESCKIND;

typedef enum tagDESCKIND DESCKIND;

typedef union tagBINDPTR tagBINDPTR, *PtagBINDPTR;

typedef union tagBINDPTR BINDPTR;

typedef LONG SCODE;

typedef struct tagELEMDESC tagELEMDESC, *PtagELEMDESC;

typedef struct tagELEMDESC ELEMDESC;

typedef enum tagFUNCKIND {
    FUNC_VIRTUAL=0,
    FUNC_PUREVIRTUAL=1,
    FUNC_NONVIRTUAL=2,
    FUNC_STATIC=3,
    FUNC_DISPATCH=4
} tagFUNCKIND;

typedef enum tagFUNCKIND FUNCKIND;

typedef enum tagCALLCONV {
    CC_FASTCALL=0,
    CC_CDECL=1,
    CC_MSCPASCAL=2,
    CC_PASCAL=3,
    CC_MACPASCAL=4,
    CC_STDCALL=5,
    CC_FPFASTCALL=6,
    CC_SYSCALL=7,
    CC_MPWCDECL=8,
    CC_MPWPASCAL=9,
    CC_MAX=10
} tagCALLCONV;

typedef enum tagCALLCONV CALLCONV;

typedef short SHORT;

typedef union _union_2711 _union_2711, *P_union_2711;

typedef enum tagVARKIND {
    VAR_PERINSTANCE=0,
    VAR_STATIC=1,
    VAR_CONST=2,
    VAR_DISPATCH=3
} tagVARKIND;

typedef enum tagVARKIND VARKIND;

typedef VARIANT VARIANTARG;

typedef union _union_2683 _union_2683, *P_union_2683;

typedef struct ITypeLibVtbl ITypeLibVtbl, *PITypeLibVtbl;

typedef struct tagTLIBATTR tagTLIBATTR, *PtagTLIBATTR;

typedef struct tagTLIBATTR TLIBATTR;

typedef union _union_2691 _union_2691, *P_union_2691;

typedef ushort VARTYPE;

typedef union _union_2702 _union_2702, *P_union_2702;

typedef struct __tagVARIANT __tagVARIANT, *P__tagVARIANT;

typedef struct tagDEC tagDEC, *PtagDEC;

typedef struct tagDEC DECIMAL;

typedef enum tagSYSKIND {
    SYS_WIN16=0,
    SYS_WIN32=1,
    SYS_MAC=2,
    SYS_WIN64=3
} tagSYSKIND;

typedef enum tagSYSKIND SYSKIND;

typedef struct tagARRAYDESC tagARRAYDESC, *PtagARRAYDESC;

typedef struct tagPARAMDESC tagPARAMDESC, *PtagPARAMDESC;

typedef struct tagPARAMDESC PARAMDESC;

typedef union _union_2685 _union_2685, *P_union_2685;

typedef union _union_1695 _union_1695, *P_union_1695;

typedef union _union_1697 _union_1697, *P_union_1697;

typedef struct tagPARAMDESCEX tagPARAMDESCEX, *PtagPARAMDESCEX;

typedef struct tagPARAMDESCEX *LPPARAMDESCEX;

typedef float FLOAT;

typedef double DOUBLE;

typedef short VARIANT_BOOL;

typedef union tagCY tagCY, *PtagCY;

typedef union tagCY CY;

typedef double DATE;

typedef struct IDispatch IDispatch, *PIDispatch;

typedef struct __tagBRECORD __tagBRECORD, *P__tagBRECORD;

typedef struct _struct_1696 _struct_1696, *P_struct_1696;

typedef struct _struct_1698 _struct_1698, *P_struct_1698;

typedef struct _struct_1693 _struct_1693, *P_struct_1693;

typedef struct IDispatchVtbl IDispatchVtbl, *PIDispatchVtbl;

typedef struct IRecordInfo IRecordInfo, *PIRecordInfo;

typedef struct IRecordInfoVtbl IRecordInfoVtbl, *PIRecordInfoVtbl;

typedef OLECHAR *LPCOLESTR;

struct _struct_1693 {
    ulong Lo;
    long Hi;
};

union tagCY {
    struct _struct_1693 s;
    LONGLONG int64;
};

struct _struct_1698 {
    ULONG Lo32;
    ULONG Mid32;
};

union _union_1697 {
    struct _struct_1698 s2;
    ULONGLONG Lo64;
};

struct _struct_1696 {
    BYTE scale;
    BYTE sign;
};

union _union_1695 {
    struct _struct_1696 s;
    USHORT signscale;
};

struct tagDEC {
    USHORT wReserved;
    union _union_1695 u;
    ULONG Hi32;
    union _union_1697 u2;
};

struct __tagBRECORD {
    PVOID pvRecord;
    struct IRecordInfo *pRecInfo;
};

union _union_2685 {
    LONGLONG llVal;
    LONG lVal;
    BYTE bVal;
    SHORT iVal;
    FLOAT fltVal;
    DOUBLE dblVal;
    VARIANT_BOOL boolVal;
    SCODE scode;
    CY cyVal;
    DATE date;
    BSTR bstrVal;
    struct IUnknown *punkVal;
    struct IDispatch *pdispVal;
    SAFEARRAY *parray;
    BYTE *pbVal;
    SHORT *piVal;
    LONG *plVal;
    LONGLONG *pllVal;
    FLOAT *pfltVal;
    DOUBLE *pdblVal;
    VARIANT_BOOL *pboolVal;
    SCODE *pscode;
    CY *pcyVal;
    DATE *pdate;
    BSTR *pbstrVal;
    struct IUnknown **ppunkVal;
    struct IDispatch **ppdispVal;
    SAFEARRAY **pparray;
    VARIANT *pvarVal;
    PVOID byref;
    CHAR cVal;
    USHORT uiVal;
    ULONG ulVal;
    ULONGLONG ullVal;
    INT intVal;
    UINT uintVal;
    DECIMAL *pdecVal;
    CHAR *pcVal;
    USHORT *puiVal;
    ULONG *pulVal;
    ULONGLONG *pullVal;
    INT *pintVal;
    UINT *puintVal;
    struct __tagBRECORD brecVal;
};

struct __tagVARIANT {
    VARTYPE vt;
    WORD wReserved1;
    WORD wReserved2;
    WORD wReserved3;
    union _union_2685 n3;
};

union _union_2683 {
    struct __tagVARIANT n2;
    DECIMAL decVal;
};

union _union_2691 {
    struct tagTYPEDESC *lptdesc;
    struct tagARRAYDESC *lpadesc;
    HREFTYPE hreftype;
};

struct tagTYPEDESC {
    union _union_2691 u;
    VARTYPE vt;
};

struct tagIDLDESC {
    ULONG_PTR dwReserved;
    USHORT wIDLFlags;
};

struct tagPARAMDESC {
    LPPARAMDESCEX pparamdescex;
    USHORT wParamFlags;
};

union _union_2702 {
    IDLDESC idldesc;
    PARAMDESC paramdesc;
};

struct tagELEMDESC {
    TYPEDESC tdesc;
    union _union_2702 u;
};

struct tagFUNCDESC {
    MEMBERID memid;
    SCODE *lprgscode;
    ELEMDESC *lprgelemdescParam;
    FUNCKIND funckind;
    INVOKEKIND invkind;
    CALLCONV callconv;
    SHORT cParams;
    SHORT cParamsOpt;
    SHORT oVft;
    SHORT cScodes;
    ELEMDESC elemdescFunc;
    WORD wFuncFlags;
};

struct tagVARIANT {
    union _union_2683 n1;
};

struct tagPARAMDESCEX {
    ULONG cBytes;
    VARIANTARG varDefaultValue;
};

union _union_2711 {
    ULONG oInst;
    VARIANT *lpvarValue;
};

struct tagVARDESC {
    MEMBERID memid;
    LPOLESTR lpstrSchema;
    union _union_2711 u;
    ELEMDESC elemdescVar;
    WORD wVarFlags;
    VARKIND varkind;
};

struct ITypeCompVtbl {
    HRESULT (*QueryInterface)(struct ITypeComp *, IID *, void **);
    ULONG (*AddRef)(struct ITypeComp *);
    ULONG (*Release)(struct ITypeComp *);
    HRESULT (*Bind)(struct ITypeComp *, LPOLESTR, ULONG, WORD, struct ITypeInfo **, DESCKIND *, BINDPTR *);
    HRESULT (*BindType)(struct ITypeComp *, LPOLESTR, ULONG, struct ITypeInfo **, struct ITypeComp **);
};

struct ITypeInfoVtbl {
    HRESULT (*QueryInterface)(struct ITypeInfo *, IID *, void **);
    ULONG (*AddRef)(struct ITypeInfo *);
    ULONG (*Release)(struct ITypeInfo *);
    HRESULT (*GetTypeAttr)(struct ITypeInfo *, TYPEATTR **);
    HRESULT (*GetTypeComp)(struct ITypeInfo *, struct ITypeComp **);
    HRESULT (*GetFuncDesc)(struct ITypeInfo *, UINT, FUNCDESC **);
    HRESULT (*GetVarDesc)(struct ITypeInfo *, UINT, VARDESC **);
    HRESULT (*GetNames)(struct ITypeInfo *, MEMBERID, BSTR *, UINT, UINT *);
    HRESULT (*GetRefTypeOfImplType)(struct ITypeInfo *, UINT, HREFTYPE *);
    HRESULT (*GetImplTypeFlags)(struct ITypeInfo *, UINT, INT *);
    HRESULT (*GetIDsOfNames)(struct ITypeInfo *, LPOLESTR *, UINT, MEMBERID *);
    HRESULT (*Invoke)(struct ITypeInfo *, PVOID, MEMBERID, WORD, DISPPARAMS *, VARIANT *, EXCEPINFO *, UINT *);
    HRESULT (*GetDocumentation)(struct ITypeInfo *, MEMBERID, BSTR *, BSTR *, DWORD *, BSTR *);
    HRESULT (*GetDllEntry)(struct ITypeInfo *, MEMBERID, INVOKEKIND, BSTR *, BSTR *, WORD *);
    HRESULT (*GetRefTypeInfo)(struct ITypeInfo *, HREFTYPE, struct ITypeInfo **);
    HRESULT (*AddressOfMember)(struct ITypeInfo *, MEMBERID, INVOKEKIND, PVOID *);
    HRESULT (*CreateInstance)(struct ITypeInfo *, struct IUnknown *, IID *, PVOID *);
    HRESULT (*GetMops)(struct ITypeInfo *, MEMBERID, BSTR *);
    HRESULT (*GetContainingTypeLib)(struct ITypeInfo *, struct ITypeLib **, UINT *);
    void (*ReleaseTypeAttr)(struct ITypeInfo *, TYPEATTR *);
    void (*ReleaseFuncDesc)(struct ITypeInfo *, FUNCDESC *);
    void (*ReleaseVarDesc)(struct ITypeInfo *, VARDESC *);
};

struct ITypeLibVtbl {
    HRESULT (*QueryInterface)(struct ITypeLib *, IID *, void **);
    ULONG (*AddRef)(struct ITypeLib *);
    ULONG (*Release)(struct ITypeLib *);
    UINT (*GetTypeInfoCount)(struct ITypeLib *);
    HRESULT (*GetTypeInfo)(struct ITypeLib *, UINT, struct ITypeInfo **);
    HRESULT (*GetTypeInfoType)(struct ITypeLib *, UINT, TYPEKIND *);
    HRESULT (*GetTypeInfoOfGuid)(struct ITypeLib *, GUID *, struct ITypeInfo **);
    HRESULT (*GetLibAttr)(struct ITypeLib *, TLIBATTR **);
    HRESULT (*GetTypeComp)(struct ITypeLib *, struct ITypeComp **);
    HRESULT (*GetDocumentation)(struct ITypeLib *, INT, BSTR *, BSTR *, DWORD *, BSTR *);
    HRESULT (*IsName)(struct ITypeLib *, LPOLESTR, ULONG, BOOL *);
    HRESULT (*FindName)(struct ITypeLib *, LPOLESTR, ULONG, struct ITypeInfo **, MEMBERID *, USHORT *);
    void (*ReleaseTLibAttr)(struct ITypeLib *, TLIBATTR *);
};

struct tagTLIBATTR {
    GUID guid;
    LCID lcid;
    SYSKIND syskind;
    WORD wMajorVerNum;
    WORD wMinorVerNum;
    WORD wLibFlags;
};

struct tagARRAYDESC {
    TYPEDESC tdescElem;
    USHORT cDims;
    SAFEARRAYBOUND rgbounds[1];
};

struct ITypeComp {
    struct ITypeCompVtbl *lpVtbl;
};

struct IRecordInfo {
    struct IRecordInfoVtbl *lpVtbl;
};

struct tagTYPEATTR {
    GUID guid;
    LCID lcid;
    DWORD dwReserved;
    MEMBERID memidConstructor;
    MEMBERID memidDestructor;
    LPOLESTR lpstrSchema;
    ULONG cbSizeInstance;
    TYPEKIND typekind;
    WORD cFuncs;
    WORD cVars;
    WORD cImplTypes;
    WORD cbSizeVft;
    WORD cbAlignment;
    WORD wTypeFlags;
    WORD wMajorVerNum;
    WORD wMinorVerNum;
    TYPEDESC tdescAlias;
    IDLDESC idldescType;
};

struct IRecordInfoVtbl {
    HRESULT (*QueryInterface)(struct IRecordInfo *, IID *, void **);
    ULONG (*AddRef)(struct IRecordInfo *);
    ULONG (*Release)(struct IRecordInfo *);
    HRESULT (*RecordInit)(struct IRecordInfo *, PVOID);
    HRESULT (*RecordClear)(struct IRecordInfo *, PVOID);
    HRESULT (*RecordCopy)(struct IRecordInfo *, PVOID, PVOID);
    HRESULT (*GetGuid)(struct IRecordInfo *, GUID *);
    HRESULT (*GetName)(struct IRecordInfo *, BSTR *);
    HRESULT (*GetSize)(struct IRecordInfo *, ULONG *);
    HRESULT (*GetTypeInfo)(struct IRecordInfo *, struct ITypeInfo **);
    HRESULT (*GetField)(struct IRecordInfo *, PVOID, LPCOLESTR, VARIANT *);
    HRESULT (*GetFieldNoCopy)(struct IRecordInfo *, PVOID, LPCOLESTR, VARIANT *, PVOID *);
    HRESULT (*PutField)(struct IRecordInfo *, ULONG, PVOID, LPCOLESTR, VARIANT *);
    HRESULT (*PutFieldNoCopy)(struct IRecordInfo *, ULONG, PVOID, LPCOLESTR, VARIANT *);
    HRESULT (*GetFieldNames)(struct IRecordInfo *, ULONG *, BSTR *);
    BOOL (*IsMatchingType)(struct IRecordInfo *, struct IRecordInfo *);
    PVOID (*RecordCreate)(struct IRecordInfo *);
    HRESULT (*RecordCreateCopy)(struct IRecordInfo *, PVOID, PVOID *);
    HRESULT (*RecordDestroy)(struct IRecordInfo *, PVOID);
};

struct tagDISPPARAMS {
    VARIANTARG *rgvarg;
    DISPID *rgdispidNamedArgs;
    UINT cArgs;
    UINT cNamedArgs;
};

union tagBINDPTR {
    FUNCDESC *lpfuncdesc;
    VARDESC *lpvardesc;
    struct ITypeComp *lptcomp;
};

struct IDispatch {
    struct IDispatchVtbl *lpVtbl;
};

struct IDispatchVtbl {
    HRESULT (*QueryInterface)(struct IDispatch *, IID *, void **);
    ULONG (*AddRef)(struct IDispatch *);
    ULONG (*Release)(struct IDispatch *);
    HRESULT (*GetTypeInfoCount)(struct IDispatch *, UINT *);
    HRESULT (*GetTypeInfo)(struct IDispatch *, UINT, LCID, struct ITypeInfo **);
    HRESULT (*GetIDsOfNames)(struct IDispatch *, IID *, LPOLESTR *, UINT, LCID, DISPID *);
    HRESULT (*Invoke)(struct IDispatch *, DISPID, IID *, LCID, WORD, DISPPARAMS *, VARIANT *, EXCEPINFO *, UINT *);
};

struct ITypeLib {
    struct ITypeLibVtbl *lpVtbl;
};

struct ITypeInfo {
    struct ITypeInfoVtbl *lpVtbl;
};

struct tagEXCEPINFO {
    WORD wCode;
    WORD wReserved;
    BSTR bstrSource;
    BSTR bstrDescription;
    BSTR bstrHelpFile;
    DWORD dwHelpContext;
    PVOID pvReserved;
    HRESULT (*pfnDeferredFillIn)(struct tagEXCEPINFO *);
    SCODE scode;
};

typedef struct IMalloc IMalloc, *PIMalloc;

typedef struct IMallocVtbl IMallocVtbl, *PIMallocVtbl;

typedef ULONG_PTR SIZE_T;

struct IMalloc {
    struct IMallocVtbl *lpVtbl;
};

struct IMallocVtbl {
    HRESULT (*QueryInterface)(struct IMalloc *, IID *, void **);
    ULONG (*AddRef)(struct IMalloc *);
    ULONG (*Release)(struct IMalloc *);
    void * (*Alloc)(struct IMalloc *, SIZE_T);
    void * (*Realloc)(struct IMalloc *, void *, SIZE_T);
    void (*Free)(struct IMalloc *, void *);
    SIZE_T (*GetSize)(struct IMalloc *, void *);
    int (*DidAlloc)(struct IMalloc *, void *);
    void (*HeapMinimize)(struct IMalloc *);
};

typedef struct _CONTEXT _CONTEXT, *P_CONTEXT;

typedef struct _FLOATING_SAVE_AREA _FLOATING_SAVE_AREA, *P_FLOATING_SAVE_AREA;

typedef struct _FLOATING_SAVE_AREA FLOATING_SAVE_AREA;

struct _FLOATING_SAVE_AREA {
    DWORD ControlWord;
    DWORD StatusWord;
    DWORD TagWord;
    DWORD ErrorOffset;
    DWORD ErrorSelector;
    DWORD DataOffset;
    DWORD DataSelector;
    BYTE RegisterArea[80];
    DWORD Cr0NpxState;
};

struct _CONTEXT {
    DWORD ContextFlags;
    DWORD Dr0;
    DWORD Dr1;
    DWORD Dr2;
    DWORD Dr3;
    DWORD Dr6;
    DWORD Dr7;
    FLOATING_SAVE_AREA FloatSave;
    DWORD SegGs;
    DWORD SegFs;
    DWORD SegEs;
    DWORD SegDs;
    DWORD Edi;
    DWORD Esi;
    DWORD Ebx;
    DWORD Edx;
    DWORD Ecx;
    DWORD Eax;
    DWORD Ebp;
    DWORD Eip;
    DWORD SegCs;
    DWORD EFlags;
    DWORD Esp;
    DWORD SegSs;
    BYTE ExtendedRegisters[512];
};

typedef struct _EXCEPTION_RECORD _EXCEPTION_RECORD, *P_EXCEPTION_RECORD;

struct _EXCEPTION_RECORD {
    DWORD ExceptionCode;
    DWORD ExceptionFlags;
    struct _EXCEPTION_RECORD *ExceptionRecord;
    PVOID ExceptionAddress;
    DWORD NumberParameters;
    ULONG_PTR ExceptionInformation[15];
};

typedef struct _EXCEPTION_POINTERS _EXCEPTION_POINTERS, *P_EXCEPTION_POINTERS;

typedef struct _EXCEPTION_RECORD EXCEPTION_RECORD;

typedef EXCEPTION_RECORD *PEXCEPTION_RECORD;

typedef struct _CONTEXT CONTEXT;

typedef CONTEXT *PCONTEXT;

struct _EXCEPTION_POINTERS {
    PEXCEPTION_RECORD ExceptionRecord;
    PCONTEXT ContextRecord;
};

typedef char *va_list;

typedef struct tagOFNA tagOFNA, *PtagOFNA;

typedef struct tagOFNA *LPOPENFILENAMEA;

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

typedef struct HINSTANCE__ *HINSTANCE;

typedef CHAR *LPCSTR;

typedef uint UINT_PTR;

typedef UINT_PTR WPARAM;

typedef UINT_PTR (*LPOFNHOOKPROC)(HWND, UINT, WPARAM, LPARAM);

struct tagOFNA {
    DWORD lStructSize;
    HWND hwndOwner;
    HINSTANCE hInstance;
    LPCSTR lpstrFilter;
    LPSTR lpstrCustomFilter;
    DWORD nMaxCustFilter;
    DWORD nFilterIndex;
    LPSTR lpstrFile;
    DWORD nMaxFile;
    LPSTR lpstrFileTitle;
    DWORD nMaxFileTitle;
    LPCSTR lpstrInitialDir;
    LPCSTR lpstrTitle;
    DWORD Flags;
    WORD nFileOffset;
    WORD nFileExtension;
    LPCSTR lpstrDefExt;
    LPARAM lCustData;
    LPOFNHOOKPROC lpfnHook;
    LPCSTR lpTemplateName;
    void *pvReserved;
    DWORD dwReserved;
    DWORD FlagsEx;
};

struct HINSTANCE__ {
    int unused;
};

typedef struct _browseinfoA _browseinfoA, *P_browseinfoA;

typedef struct _browseinfoA *LPBROWSEINFOA;

typedef int (*BFFCALLBACK)(HWND, UINT, LPARAM, LPARAM);

struct _browseinfoA {
    HWND hwndOwner;
    LPCITEMIDLIST pidlRoot;
    LPSTR pszDisplayName;
    LPCSTR lpszTitle;
    UINT ulFlags;
    BFFCALLBACK lpfn;
    LPARAM lParam;
    int iImage;
};

typedef struct tagMENUITEMINFOA tagMENUITEMINFOA, *PtagMENUITEMINFOA;

typedef struct tagMENUITEMINFOA MENUITEMINFOA;

typedef struct HMENU__ HMENU__, *PHMENU__;

typedef struct HMENU__ *HMENU;

typedef struct HBITMAP__ HBITMAP__, *PHBITMAP__;

typedef struct HBITMAP__ *HBITMAP;

struct tagMENUITEMINFOA {
    UINT cbSize;
    UINT fMask;
    UINT fType;
    UINT fState;
    UINT wID;
    HMENU hSubMenu;
    HBITMAP hbmpChecked;
    HBITMAP hbmpUnchecked;
    ULONG_PTR dwItemData;
    LPSTR dwTypeData;
    UINT cch;
    HBITMAP hbmpItem;
};

struct HMENU__ {
    int unused;
};

struct HBITMAP__ {
    int unused;
};

typedef struct tagMSG tagMSG, *PtagMSG;

typedef struct tagMSG *LPMSG;

typedef struct tagPOINT tagPOINT, *PtagPOINT;

typedef struct tagPOINT POINT;

struct tagPOINT {
    LONG x;
    LONG y;
};

struct tagMSG {
    HWND hwnd;
    UINT message;
    WPARAM wParam;
    LPARAM lParam;
    DWORD time;
    POINT pt;
};

typedef struct _ICONINFO _ICONINFO, *P_ICONINFO;

typedef struct _ICONINFO ICONINFO;

struct _ICONINFO {
    BOOL fIcon;
    DWORD xHotspot;
    DWORD yHotspot;
    HBITMAP hbmMask;
    HBITMAP hbmColor;
};

typedef MENUITEMINFOA *LPCMENUITEMINFOA;

typedef struct tagSCROLLINFO tagSCROLLINFO, *PtagSCROLLINFO;

struct tagSCROLLINFO {
    UINT cbSize;
    UINT fMask;
    int nMin;
    int nMax;
    UINT nPage;
    int nPos;
    int nTrackPos;
};

typedef struct tagSCROLLINFO SCROLLINFO;

typedef LONG_PTR LRESULT;

typedef LRESULT (*HOOKPROC)(int, WPARAM, LPARAM);

typedef struct tagPAINTSTRUCT tagPAINTSTRUCT, *PtagPAINTSTRUCT;

typedef struct tagPAINTSTRUCT *LPPAINTSTRUCT;

typedef struct HDC__ HDC__, *PHDC__;

typedef struct HDC__ *HDC;

typedef struct tagRECT tagRECT, *PtagRECT;

typedef struct tagRECT RECT;

struct tagRECT {
    LONG left;
    LONG top;
    LONG right;
    LONG bottom;
};

struct HDC__ {
    int unused;
};

struct tagPAINTSTRUCT {
    HDC hdc;
    BOOL fErase;
    RECT rcPaint;
    BOOL fRestore;
    BOOL fIncUpdate;
    BYTE rgbReserved[32];
};

typedef LRESULT (*WNDPROC)(HWND, UINT, WPARAM, LPARAM);

typedef struct tagPAINTSTRUCT PAINTSTRUCT;

typedef BOOL (*WNDENUMPROC)(HWND, LPARAM);

typedef void (*TIMERPROC)(HWND, UINT, UINT_PTR, DWORD);

typedef struct tagWNDCLASSA tagWNDCLASSA, *PtagWNDCLASSA;

typedef struct tagWNDCLASSA WNDCLASSA;

typedef struct HICON__ HICON__, *PHICON__;

typedef struct HICON__ *HICON;

typedef HICON HCURSOR;

typedef struct HBRUSH__ HBRUSH__, *PHBRUSH__;

typedef struct HBRUSH__ *HBRUSH;

struct HBRUSH__ {
    int unused;
};

struct tagWNDCLASSA {
    UINT style;
    WNDPROC lpfnWndProc;
    int cbClsExtra;
    int cbWndExtra;
    HINSTANCE hInstance;
    HICON hIcon;
    HCURSOR hCursor;
    HBRUSH hbrBackground;
    LPCSTR lpszMenuName;
    LPCSTR lpszClassName;
};

struct HICON__ {
    int unused;
};

typedef struct tagWINDOWPLACEMENT tagWINDOWPLACEMENT, *PtagWINDOWPLACEMENT;

typedef struct tagWINDOWPLACEMENT WINDOWPLACEMENT;

struct tagWINDOWPLACEMENT {
    UINT length;
    UINT flags;
    UINT showCmd;
    POINT ptMinPosition;
    POINT ptMaxPosition;
    RECT rcNormalPosition;
};

typedef struct tagMSG MSG;

typedef struct tagMENUITEMINFOA *LPMENUITEMINFOA;

typedef SCROLLINFO *LPCSCROLLINFO;

typedef ICONINFO *PICONINFO;

typedef struct tagSCROLLINFO *LPSCROLLINFO;

typedef struct tagWNDCLASSA *LPWNDCLASSA;

typedef struct _devicemodeA _devicemodeA, *P_devicemodeA;

typedef union _union_655 _union_655, *P_union_655;

typedef union _union_658 _union_658, *P_union_658;

typedef struct _struct_656 _struct_656, *P_struct_656;

typedef struct _struct_657 _struct_657, *P_struct_657;

typedef struct _POINTL _POINTL, *P_POINTL;

typedef struct _POINTL POINTL;

struct _struct_656 {
    short dmOrientation;
    short dmPaperSize;
    short dmPaperLength;
    short dmPaperWidth;
    short dmScale;
    short dmCopies;
    short dmDefaultSource;
    short dmPrintQuality;
};

struct _POINTL {
    LONG x;
    LONG y;
};

struct _struct_657 {
    POINTL dmPosition;
    DWORD dmDisplayOrientation;
    DWORD dmDisplayFixedOutput;
};

union _union_655 {
    struct _struct_656 field0;
    struct _struct_657 field1;
};

union _union_658 {
    DWORD dmDisplayFlags;
    DWORD dmNup;
};

struct _devicemodeA {
    BYTE dmDeviceName[32];
    WORD dmSpecVersion;
    WORD dmDriverVersion;
    WORD dmSize;
    WORD dmDriverExtra;
    DWORD dmFields;
    union _union_655 field6_0x2c;
    short dmColor;
    short dmDuplex;
    short dmYResolution;
    short dmTTOption;
    short dmCollate;
    BYTE dmFormName[32];
    WORD dmLogPixels;
    DWORD dmBitsPerPel;
    DWORD dmPelsWidth;
    DWORD dmPelsHeight;
    union _union_658 field17_0x74;
    DWORD dmDisplayFrequency;
    DWORD dmICMMethod;
    DWORD dmICMIntent;
    DWORD dmMediaType;
    DWORD dmDitherType;
    DWORD dmReserved1;
    DWORD dmReserved2;
    DWORD dmPanningWidth;
    DWORD dmPanningHeight;
};

typedef struct tagENHMETAHEADER tagENHMETAHEADER, *PtagENHMETAHEADER;

typedef struct tagENHMETAHEADER *LPENHMETAHEADER;

typedef struct _RECTL _RECTL, *P_RECTL;

typedef struct _RECTL RECTL;

typedef struct tagSIZE tagSIZE, *PtagSIZE;

typedef struct tagSIZE SIZE;

typedef SIZE SIZEL;

struct tagSIZE {
    LONG cx;
    LONG cy;
};

struct _RECTL {
    LONG left;
    LONG top;
    LONG right;
    LONG bottom;
};

struct tagENHMETAHEADER {
    DWORD iType;
    DWORD nSize;
    RECTL rclBounds;
    RECTL rclFrame;
    DWORD dSignature;
    DWORD nVersion;
    DWORD nBytes;
    DWORD nRecords;
    WORD nHandles;
    WORD sReserved;
    DWORD nDescription;
    DWORD offDescription;
    DWORD nPalEntries;
    SIZEL szlDevice;
    SIZEL szlMillimeters;
    DWORD cbPixelFormat;
    DWORD offPixelFormat;
    DWORD bOpenGL;
    SIZEL szlMicrometers;
};

typedef struct _devicemodeA *PDEVMODEA;

typedef struct tagLOGPALETTE tagLOGPALETTE, *PtagLOGPALETTE;

typedef struct tagLOGPALETTE LOGPALETTE;

typedef struct tagPALETTEENTRY tagPALETTEENTRY, *PtagPALETTEENTRY;

typedef struct tagPALETTEENTRY PALETTEENTRY;

struct tagPALETTEENTRY {
    BYTE peRed;
    BYTE peGreen;
    BYTE peBlue;
    BYTE peFlags;
};

struct tagLOGPALETTE {
    WORD palVersion;
    WORD palNumEntries;
    PALETTEENTRY palPalEntry[1];
};

typedef struct tagLOGFONTA tagLOGFONTA, *PtagLOGFONTA;

typedef struct tagLOGFONTA LOGFONTA;

struct tagLOGFONTA {
    LONG lfHeight;
    LONG lfWidth;
    LONG lfEscapement;
    LONG lfOrientation;
    LONG lfWeight;
    BYTE lfItalic;
    BYTE lfUnderline;
    BYTE lfStrikeOut;
    BYTE lfCharSet;
    BYTE lfOutPrecision;
    BYTE lfClipPrecision;
    BYTE lfQuality;
    BYTE lfPitchAndFamily;
    CHAR lfFaceName[32];
};

typedef struct _DOCINFOA _DOCINFOA, *P_DOCINFOA;

struct _DOCINFOA {
    int cbSize;
    LPCSTR lpszDocName;
    LPCSTR lpszOutput;
    LPCSTR lpszDatatype;
    DWORD fwType;
};

typedef struct _devicemodeA DEVMODEA;

typedef struct tagBITMAPINFOHEADER tagBITMAPINFOHEADER, *PtagBITMAPINFOHEADER;

typedef struct tagBITMAPINFOHEADER BITMAPINFOHEADER;

struct tagBITMAPINFOHEADER {
    DWORD biSize;
    LONG biWidth;
    LONG biHeight;
    WORD biPlanes;
    WORD biBitCount;
    DWORD biCompression;
    DWORD biSizeImage;
    LONG biXPelsPerMeter;
    LONG biYPelsPerMeter;
    DWORD biClrUsed;
    DWORD biClrImportant;
};

typedef struct tagBITMAPINFO tagBITMAPINFO, *PtagBITMAPINFO;

typedef struct tagRGBQUAD tagRGBQUAD, *PtagRGBQUAD;

typedef struct tagRGBQUAD RGBQUAD;

struct tagRGBQUAD {
    BYTE rgbBlue;
    BYTE rgbGreen;
    BYTE rgbRed;
    BYTE rgbReserved;
};

struct tagBITMAPINFO {
    BITMAPINFOHEADER bmiHeader;
    RGBQUAD bmiColors[1];
};

typedef BOOL (*ABORTPROC)(HDC, int);

typedef struct tagTEXTMETRICA tagTEXTMETRICA, *PtagTEXTMETRICA;

struct tagTEXTMETRICA {
    LONG tmHeight;
    LONG tmAscent;
    LONG tmDescent;
    LONG tmInternalLeading;
    LONG tmExternalLeading;
    LONG tmAveCharWidth;
    LONG tmMaxCharWidth;
    LONG tmWeight;
    LONG tmOverhang;
    LONG tmDigitizedAspectX;
    LONG tmDigitizedAspectY;
    BYTE tmFirstChar;
    BYTE tmLastChar;
    BYTE tmDefaultChar;
    BYTE tmBreakChar;
    BYTE tmItalic;
    BYTE tmUnderlined;
    BYTE tmStruckOut;
    BYTE tmPitchAndFamily;
    BYTE tmCharSet;
};

typedef struct tagLOGPEN tagLOGPEN, *PtagLOGPEN;

typedef DWORD COLORREF;

struct tagLOGPEN {
    UINT lopnStyle;
    POINT lopnWidth;
    COLORREF lopnColor;
};

typedef struct tagBITMAPINFO BITMAPINFO;

typedef struct _DOCINFOA DOCINFOA;

typedef struct tagLOGBRUSH tagLOGBRUSH, *PtagLOGBRUSH;

typedef struct tagLOGBRUSH LOGBRUSH;

struct tagLOGBRUSH {
    UINT lbStyle;
    COLORREF lbColor;
    ULONG_PTR lbHatch;
};

typedef struct tagLOGPEN LOGPEN;

typedef struct tagMETAFILEPICT tagMETAFILEPICT, *PtagMETAFILEPICT;

typedef struct tagMETAFILEPICT METAFILEPICT;

typedef struct HMETAFILE__ HMETAFILE__, *PHMETAFILE__;

typedef struct HMETAFILE__ *HMETAFILE;

struct tagMETAFILEPICT {
    LONG mm;
    LONG xExt;
    LONG yExt;
    HMETAFILE hMF;
};

struct HMETAFILE__ {
    int unused;
};

typedef struct _devicemodeA *LPDEVMODEA;

typedef struct tagTEXTMETRICA *LPTEXTMETRICA;

typedef struct tagBITMAPINFO *LPBITMAPINFO;

typedef struct tagPALETTEENTRY *LPPALETTEENTRY;

typedef struct _MEMORY_BASIC_INFORMATION _MEMORY_BASIC_INFORMATION, *P_MEMORY_BASIC_INFORMATION;

typedef struct _MEMORY_BASIC_INFORMATION *PMEMORY_BASIC_INFORMATION;

struct _MEMORY_BASIC_INFORMATION {
    PVOID BaseAddress;
    PVOID AllocationBase;
    DWORD AllocationProtect;
    SIZE_T RegionSize;
    DWORD State;
    DWORD Protect;
    DWORD Type;
};

typedef LONG *PLONG;

typedef struct _OSVERSIONINFOA _OSVERSIONINFOA, *P_OSVERSIONINFOA;

struct _OSVERSIONINFOA {
    DWORD dwOSVersionInfoSize;
    DWORD dwMajorVersion;
    DWORD dwMinorVersion;
    DWORD dwBuildNumber;
    DWORD dwPlatformId;
    CHAR szCSDVersion[128];
};

typedef struct _OSVERSIONINFOA *LPOSVERSIONINFOA;

typedef DWORD ACCESS_MASK;

typedef CHAR *PCNZCH;

typedef struct IMAGE_DOS_HEADER IMAGE_DOS_HEADER, *PIMAGE_DOS_HEADER;

struct IMAGE_DOS_HEADER {
    char e_magic[2]; // Magic number
    word e_cblp; // Bytes of last page
    word e_cp; // Pages in file
    word e_crlc; // Relocations
    word e_cparhdr; // Size of header in paragraphs
    word e_minalloc; // Minimum extra paragraphs needed
    word e_maxalloc; // Maximum extra paragraphs needed
    word e_ss; // Initial (relative) SS value
    word e_sp; // Initial SP value
    word e_csum; // Checksum
    word e_ip; // Initial IP value
    word e_cs; // Initial (relative) CS value
    word e_lfarlc; // File address of relocation table
    word e_ovno; // Overlay number
    word e_res[4][4]; // Reserved words
    word e_oemid; // OEM identifier (for e_oeminfo)
    word e_oeminfo; // OEM information; e_oemid specific
    word e_res2[10][10]; // Reserved words
    dword e_lfanew; // File address of new exe header
    byte e_program[192]; // Actual DOS program
};

typedef struct _IMAGELIST _IMAGELIST, *P_IMAGELIST;

typedef struct _IMAGELIST *HIMAGELIST;

struct _IMAGELIST {
};

typedef struct HKL__ HKL__, *PHKL__;

struct HKL__ {
    int unused;
};

typedef struct HFONT__ HFONT__, *PHFONT__;

struct HFONT__ {
    int unused;
};

typedef struct HKEY__ HKEY__, *PHKEY__;

struct HKEY__ {
    int unused;
};

typedef HINSTANCE HMODULE;

typedef struct HPEN__ HPEN__, *PHPEN__;

struct HPEN__ {
    int unused;
};

typedef int (*FARPROC)(void);

typedef BOOL *LPBOOL;

typedef struct HKEY__ *HKEY;

typedef struct HRSRC__ HRSRC__, *PHRSRC__;

typedef struct HRSRC__ *HRSRC;

struct HRSRC__ {
    int unused;
};

typedef struct HRGN__ HRGN__, *PHRGN__;

struct HRGN__ {
    int unused;
};

typedef struct HENHMETAFILE__ HENHMETAFILE__, *PHENHMETAFILE__;

typedef struct HENHMETAFILE__ *HENHMETAFILE;

struct HENHMETAFILE__ {
    int unused;
};

typedef struct HFONT__ *HFONT;

typedef DWORD *LPDWORD;

typedef struct HHOOK__ HHOOK__, *PHHOOK__;

struct HHOOK__ {
    int unused;
};

typedef WORD *LPWORD;

typedef struct tagPOINT *LPPOINT;

typedef uint *PUINT;

typedef struct HPALETTE__ HPALETTE__, *PHPALETTE__;

struct HPALETTE__ {
    int unused;
};

typedef HANDLE HLOCAL;

typedef WORD ATOM;

typedef struct HRGN__ *HRGN;

typedef struct tagRECT *LPRECT;

typedef void *HGDIOBJ;

typedef struct HKL__ *HKL;

typedef struct HHOOK__ *HHOOK;

typedef struct HPEN__ *HPEN;

typedef struct HPALETTE__ *HPALETTE;

typedef int *LPINT;

typedef struct tagSIZE *LPSIZE;

typedef struct _FILETIME *LPFILETIME;

typedef HANDLE *LPHANDLE;

typedef HKEY *PHKEY;

typedef HANDLE HGLOBAL;

typedef BYTE *PBYTE;

typedef void *LPCVOID;

typedef struct Var Var, *PVar;

struct Var {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct {
    dword NameOffset;
    dword NameIsString;
};

typedef struct IMAGE_THUNK_DATA32 IMAGE_THUNK_DATA32, *PIMAGE_THUNK_DATA32;

struct IMAGE_THUNK_DATA32 {
    dword StartAddressOfRawData;
    dword EndAddressOfRawData;
    dword AddressOfIndex;
    dword AddressOfCallBacks;
    dword SizeOfZeroFill;
    dword Characteristics;
};

typedef struct IMAGE_RESOURCE_DIR_STRING_U_14 IMAGE_RESOURCE_DIR_STRING_U_14, *PIMAGE_RESOURCE_DIR_STRING_U_14;

struct IMAGE_RESOURCE_DIR_STRING_U_14 {
    word Length;
    wchar16 NameString[7];
};

typedef struct IMAGE_RESOURCE_DIR_STRING_U_16 IMAGE_RESOURCE_DIR_STRING_U_16, *PIMAGE_RESOURCE_DIR_STRING_U_16;

struct IMAGE_RESOURCE_DIR_STRING_U_16 {
    word Length;
    wchar16 NameString[8];
};

typedef struct IMAGE_RESOURCE_DIR_STRING_U_10 IMAGE_RESOURCE_DIR_STRING_U_10, *PIMAGE_RESOURCE_DIR_STRING_U_10;

struct IMAGE_RESOURCE_DIR_STRING_U_10 {
    word Length;
    wchar16 NameString[5];
};

typedef struct IMAGE_RESOURCE_DIR_STRING_U_12 IMAGE_RESOURCE_DIR_STRING_U_12, *PIMAGE_RESOURCE_DIR_STRING_U_12;

struct IMAGE_RESOURCE_DIR_STRING_U_12 {
    word Length;
    wchar16 NameString[6];
};

typedef struct StringTable StringTable, *PStringTable;

struct StringTable {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct IMAGE_SECTION_HEADER IMAGE_SECTION_HEADER, *PIMAGE_SECTION_HEADER;

typedef union Misc Misc, *PMisc;

typedef enum SectionFlags {
    IMAGE_SCN_TYPE_NO_PAD=8,
    IMAGE_SCN_RESERVED_0001=16,
    IMAGE_SCN_CNT_CODE=32,
    IMAGE_SCN_CNT_INITIALIZED_DATA=64,
    IMAGE_SCN_CNT_UNINITIALIZED_DATA=128,
    IMAGE_SCN_LNK_OTHER=256,
    IMAGE_SCN_LNK_INFO=512,
    IMAGE_SCN_RESERVED_0040=1024,
    IMAGE_SCN_LNK_REMOVE=2048,
    IMAGE_SCN_LNK_COMDAT=4096,
    IMAGE_SCN_GPREL=32768,
    IMAGE_SCN_MEM_16BIT=131072,
    IMAGE_SCN_MEM_PURGEABLE=131072,
    IMAGE_SCN_MEM_LOCKED=262144,
    IMAGE_SCN_MEM_PRELOAD=524288,
    IMAGE_SCN_ALIGN_1BYTES=1048576,
    IMAGE_SCN_ALIGN_2BYTES=2097152,
    IMAGE_SCN_ALIGN_4BYTES=3145728,
    IMAGE_SCN_ALIGN_8BYTES=4194304,
    IMAGE_SCN_ALIGN_16BYTES=5242880,
    IMAGE_SCN_ALIGN_32BYTES=6291456,
    IMAGE_SCN_ALIGN_64BYTES=7340032,
    IMAGE_SCN_ALIGN_128BYTES=8388608,
    IMAGE_SCN_ALIGN_256BYTES=9437184,
    IMAGE_SCN_ALIGN_512BYTES=10485760,
    IMAGE_SCN_ALIGN_1024BYTES=11534336,
    IMAGE_SCN_ALIGN_2048BYTES=12582912,
    IMAGE_SCN_ALIGN_4096BYTES=13631488,
    IMAGE_SCN_ALIGN_8192BYTES=14680064,
    IMAGE_SCN_LNK_NRELOC_OVFL=16777216,
    IMAGE_SCN_MEM_DISCARDABLE=33554432,
    IMAGE_SCN_MEM_NOT_CACHED=67108864,
    IMAGE_SCN_MEM_NOT_PAGED=134217728,
    IMAGE_SCN_MEM_SHARED=268435456,
    IMAGE_SCN_MEM_EXECUTE=536870912,
    IMAGE_SCN_MEM_READ=1073741824,
    IMAGE_SCN_MEM_WRITE=2147483648
} SectionFlags;

union Misc {
    dword PhysicalAddress;
    dword VirtualSize;
};

struct IMAGE_SECTION_HEADER {
    char Name[8];
    union Misc Misc;
    ImageBaseOffset32 VirtualAddress;
    dword SizeOfRawData;
    dword PointerToRawData;
    dword PointerToRelocations;
    dword PointerToLinenumbers;
    word NumberOfRelocations;
    word NumberOfLinenumbers;
    enum SectionFlags Characteristics;
};

typedef struct IMAGE_RESOURCE_DIR_STRING_U_8 IMAGE_RESOURCE_DIR_STRING_U_8, *PIMAGE_RESOURCE_DIR_STRING_U_8;

struct IMAGE_RESOURCE_DIR_STRING_U_8 {
    word Length;
    wchar16 NameString[4];
};

typedef struct IMAGE_DATA_DIRECTORY IMAGE_DATA_DIRECTORY, *PIMAGE_DATA_DIRECTORY;

struct IMAGE_DATA_DIRECTORY {
    ImageBaseOffset32 VirtualAddress;
    dword Size;
};

typedef struct IMAGE_RESOURCE_DIR_STRING_U_6 IMAGE_RESOURCE_DIR_STRING_U_6, *PIMAGE_RESOURCE_DIR_STRING_U_6;

struct IMAGE_RESOURCE_DIR_STRING_U_6 {
    word Length;
    wchar16 NameString[3];
};

typedef struct IMAGE_RESOURCE_DATA_ENTRY IMAGE_RESOURCE_DATA_ENTRY, *PIMAGE_RESOURCE_DATA_ENTRY;

struct IMAGE_RESOURCE_DATA_ENTRY {
    dword OffsetToData;
    dword Size;
    dword CodePage;
    dword Reserved;
};

typedef struct IMAGE_RESOURCE_DIRECTORY IMAGE_RESOURCE_DIRECTORY, *PIMAGE_RESOURCE_DIRECTORY;

struct IMAGE_RESOURCE_DIRECTORY {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    word NumberOfNamedEntries;
    word NumberOfIdEntries;
};

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion;

union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion {
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;
    dword Name;
    word Id;
};

typedef struct IMAGE_OPTIONAL_HEADER32 IMAGE_OPTIONAL_HEADER32, *PIMAGE_OPTIONAL_HEADER32;

struct IMAGE_OPTIONAL_HEADER32 {
    word Magic;
    byte MajorLinkerVersion;
    byte MinorLinkerVersion;
    dword SizeOfCode;
    dword SizeOfInitializedData;
    dword SizeOfUninitializedData;
    ImageBaseOffset32 AddressOfEntryPoint;
    ImageBaseOffset32 BaseOfCode;
    ImageBaseOffset32 BaseOfData;
    pointer32 ImageBase;
    dword SectionAlignment;
    dword FileAlignment;
    word MajorOperatingSystemVersion;
    word MinorOperatingSystemVersion;
    word MajorImageVersion;
    word MinorImageVersion;
    word MajorSubsystemVersion;
    word MinorSubsystemVersion;
    dword Win32VersionValue;
    dword SizeOfImage;
    dword SizeOfHeaders;
    dword CheckSum;
    word Subsystem;
    word DllCharacteristics;
    dword SizeOfStackReserve;
    dword SizeOfStackCommit;
    dword SizeOfHeapReserve;
    dword SizeOfHeapCommit;
    dword LoaderFlags;
    dword NumberOfRvaAndSizes;
    struct IMAGE_DATA_DIRECTORY DataDirectory[16];
};

typedef struct IMAGE_FILE_HEADER IMAGE_FILE_HEADER, *PIMAGE_FILE_HEADER;

struct IMAGE_FILE_HEADER {
    word Machine; // 332
    word NumberOfSections;
    dword TimeDateStamp;
    dword PointerToSymbolTable;
    dword NumberOfSymbols;
    word SizeOfOptionalHeader;
    word Characteristics;
};

typedef struct IMAGE_NT_HEADERS32 IMAGE_NT_HEADERS32, *PIMAGE_NT_HEADERS32;

struct IMAGE_NT_HEADERS32 {
    char Signature[4];
    struct IMAGE_FILE_HEADER FileHeader;
    struct IMAGE_OPTIONAL_HEADER32 OptionalHeader;
};

typedef struct StringFileInfo StringFileInfo, *PStringFileInfo;

struct StringFileInfo {
    word wLength;
    word wValueLength;
    word wType;
};

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY IMAGE_RESOURCE_DIRECTORY_ENTRY, *PIMAGE_RESOURCE_DIRECTORY_ENTRY;

union IMAGE_RESOURCE_DIRECTORY_ENTRY {
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion NameUnion;
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion DirectoryUnion;
};

typedef struct IMAGE_RESOURCE_DIR_STRING_U_18 IMAGE_RESOURCE_DIR_STRING_U_18, *PIMAGE_RESOURCE_DIR_STRING_U_18;

struct IMAGE_RESOURCE_DIR_STRING_U_18 {
    word Length;
    wchar16 NameString[9];
};

typedef struct VS_VERSION_INFO VS_VERSION_INFO, *PVS_VERSION_INFO;

struct VS_VERSION_INFO {
    word StructLength;
    word ValueLength;
    word StructType;
    wchar16 Info[16];
    byte Padding[2];
    dword Signature;
    word StructVersion[2];
    word FileVersion[4];
    word ProductVersion[4];
    dword FileFlagsMask[2];
    dword FileFlags;
    dword FileOS;
    dword FileType;
    dword FileSubtype;
    dword FileTimestamp;
};

typedef struct VarFileInfo VarFileInfo, *PVarFileInfo;

struct VarFileInfo {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct IMAGE_RESOURCE_DIR_STRING_U_20 IMAGE_RESOURCE_DIR_STRING_U_20, *PIMAGE_RESOURCE_DIR_STRING_U_20;

struct IMAGE_RESOURCE_DIR_STRING_U_20 {
    word Length;
    wchar16 NameString[10];
};

typedef struct StringInfo StringInfo, *PStringInfo;

struct StringInfo {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct IMAGE_RESOURCE_DIR_STRING_U_26 IMAGE_RESOURCE_DIR_STRING_U_26, *PIMAGE_RESOURCE_DIR_STRING_U_26;

struct IMAGE_RESOURCE_DIR_STRING_U_26 {
    word Length;
    wchar16 NameString[13];
};

typedef struct IMAGE_RESOURCE_DIR_STRING_U_22 IMAGE_RESOURCE_DIR_STRING_U_22, *PIMAGE_RESOURCE_DIR_STRING_U_22;

struct IMAGE_RESOURCE_DIR_STRING_U_22 {
    word Length;
    wchar16 NameString[11];
};

typedef struct IMAGE_RESOURCE_DIR_STRING_U_24 IMAGE_RESOURCE_DIR_STRING_U_24, *PIMAGE_RESOURCE_DIR_STRING_U_24;

struct IMAGE_RESOURCE_DIR_STRING_U_24 {
    word Length;
    wchar16 NameString[12];
};

typedef ACCESS_MASK REGSAM;

typedef LONG LSTATUS;

typedef struct _PRINTER_DEFAULTSA _PRINTER_DEFAULTSA, *P_PRINTER_DEFAULTSA;

typedef struct _PRINTER_DEFAULTSA *LPPRINTER_DEFAULTSA;

struct _PRINTER_DEFAULTSA {
    LPSTR pDatatype;
    LPDEVMODEA pDevMode;
    ACCESS_MASK DesiredAccess;
};




BOOL __stdcall CloseHandle(HANDLE hObject);
HANDLE __stdcall CreateFileA(LPCSTR lpFileName,DWORD dwDesiredAccess,DWORD dwShareMode,LPSECURITY_ATTRIBUTES lpSecurityAttributes,DWORD dwCreationDisposition,DWORD dwFlagsAndAttributes,HANDLE hTemplateFile);
DWORD __stdcall GetFileType(HANDLE hFile);
DWORD __stdcall GetFileSize(HANDLE hFile,LPDWORD lpFileSizeHigh);
HANDLE __stdcall GetStdHandle(DWORD nStdHandle);
BOOL __stdcall ReadFile(HANDLE hFile,LPVOID lpBuffer,DWORD nNumberOfBytesToRead,LPDWORD lpNumberOfBytesRead,LPOVERLAPPED lpOverlapped);
BOOL __stdcall SetEndOfFile(HANDLE hFile);
DWORD __stdcall SetFilePointer(HANDLE hFile,LONG lDistanceToMove,PLONG lpDistanceToMoveHigh,DWORD dwMoveMethod);
LONG __stdcall UnhandledExceptionFilter(_EXCEPTION_POINTERS *ExceptionInfo);
BOOL __stdcall WriteFile(HANDLE hFile,LPCVOID lpBuffer,DWORD nNumberOfBytesToWrite,LPDWORD lpNumberOfBytesWritten,LPOVERLAPPED lpOverlapped);
LPSTR __stdcall CharNextA(LPCSTR lpsz);
void __stdcall ExitProcess(UINT uExitCode);
int __stdcall MessageBoxA(HWND hWnd,LPCSTR lpText,LPCSTR lpCaption,UINT uType);
BOOL __stdcall FindClose(HANDLE hFindFile);
HANDLE __stdcall FindFirstFileA(LPCSTR lpFileName,LPWIN32_FIND_DATAA lpFindFileData);
BOOL __stdcall FreeLibrary(HMODULE hLibModule);
LPSTR __stdcall GetCommandLineA(void);
DWORD __stdcall GetCurrentDirectoryA(DWORD nBufferLength,LPSTR lpBuffer);
DWORD __stdcall GetLastError(void);
int __stdcall GetLocaleInfoA(LCID Locale,LCTYPE LCType,LPSTR lpLCData,int cchData);
DWORD __stdcall GetModuleFileNameA(HMODULE hModule,LPSTR lpFilename,DWORD nSize);
HMODULE __stdcall GetModuleHandleA(LPCSTR lpModuleName);
FARPROC __stdcall GetProcAddress(HMODULE hModule,LPCSTR lpProcName);
void __stdcall GetStartupInfoA(LPSTARTUPINFOA lpStartupInfo);
LCID __stdcall GetThreadLocale(void);
HMODULE __stdcall LoadLibraryExA(LPCSTR lpLibFileName,HANDLE hFile,DWORD dwFlags);
int __stdcall LoadStringA(HINSTANCE hInstance,UINT uID,LPSTR lpBuffer,int cchBufferMax);
LPSTR __stdcall lstrcpynA(LPSTR lpString1,LPCSTR lpString2,int iMaxLength);
int __stdcall lstrlenA(LPCSTR lpString);
int __stdcall MultiByteToWideChar(UINT CodePage,DWORD dwFlags,LPCSTR lpMultiByteStr,int cbMultiByte,LPWSTR lpWideCharStr,int cchWideChar);
LSTATUS __stdcall RegCloseKey(HKEY hKey);
LSTATUS __stdcall RegOpenKeyExA(HKEY hKey,LPCSTR lpSubKey,DWORD ulOptions,REGSAM samDesired,PHKEY phkResult);
LSTATUS __stdcall RegQueryValueExA(HKEY hKey,LPCSTR lpValueName,LPDWORD lpReserved,LPDWORD lpType,LPBYTE lpData,LPDWORD lpcbData);
BOOL __stdcall SetCurrentDirectoryA(LPCSTR lpPathName);
int __stdcall WideCharToMultiByte(UINT CodePage,DWORD dwFlags,LPCWSTR lpWideCharStr,int cchWideChar,LPSTR lpMultiByteStr,int cbMultiByte,LPCSTR lpDefaultChar,LPBOOL lpUsedDefaultChar);
SIZE_T __stdcall VirtualQuery(LPCVOID lpAddress,PMEMORY_BASIC_INFORMATION lpBuffer,SIZE_T dwLength);
BSTR __stdcall SysAllocStringLen(OLECHAR *strIn,UINT ui);
INT __stdcall SysReAllocStringLen(BSTR *pbstr,OLECHAR *psz,uint len);
void __stdcall SysFreeString(BSTR bstrString);
LONG __stdcall InterlockedIncrement(LONG *lpAddend);
LONG __stdcall InterlockedDecrement(LONG *lpAddend);
DWORD __stdcall GetCurrentThreadId(void);
WORD FUN_004013b0(void);
HLOCAL __stdcall LocalAlloc(UINT uFlags,SIZE_T uBytes);
HLOCAL __stdcall LocalFree(HLOCAL hMem);
LPVOID __stdcall VirtualAlloc(LPVOID lpAddress,SIZE_T dwSize,DWORD flAllocationType,DWORD flProtect);
BOOL __stdcall VirtualFree(LPVOID lpAddress,SIZE_T dwSize,DWORD dwFreeType);
void __stdcall InitializeCriticalSection(LPCRITICAL_SECTION lpCriticalSection);
void __stdcall EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection);
void __stdcall LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection);
void __stdcall DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection);
int * FUN_00401414(void);
void FUN_00401464(int param_1);
undefined4 FUN_0040146c(int *param_1,int *param_2);
void FUN_0040149c(int *param_1);
void FUN_004014b4(int *param_1,int *param_2,int *param_3);
undefined4 FUN_00401528(int *param_1,uint *param_2);
void FUN_004015b8(int param_1,int *param_2);
void FUN_0040161c(LPVOID param_1,int param_2,int *param_3);
void FUN_00401694(LPVOID param_1,int param_2,undefined4 *param_3);
void FUN_0040174c(uint param_1,int param_2,undefined4 *param_3);
void FUN_004017e0(int param_1,int param_2,undefined4 *param_3);
void FUN_00401860(int param_1,int *param_2);
void FUN_004018f0(LPVOID param_1,int param_2,int *param_3);
void FUN_00401a14(int param_1,int param_2,int *param_3);
void FUN_00401aa0(void);
void FUN_00401b64(void);
void FUN_00401c44(int *param_1);
undefined4 * FUN_00401ca8(uint param_1);
void FUN_00401cd8(uint *param_1,uint param_2);
void FUN_00401d08(int param_1);
void FUN_00401d2c(uint *param_1,uint param_2);
uint FUN_00401d54(int param_1);
uint FUN_00401dc4(uint *param_1);
undefined1 FUN_00401dfc(uint *param_1,int param_2);
void FUN_00401eac(uint *param_1,uint param_2);
void FUN_00401f34(void);
undefined4 FUN_00401f80(uint *param_1);
undefined4 FUN_0040200c(int param_1);
undefined4 FUN_00402038(LPVOID param_1,int param_2);
int FUN_0040206c(int param_1);
uint * FUN_00402098(uint param_1);
uint * FUN_0040218c(int param_1);
undefined4 FUN_0040231c(int param_1);
undefined4 FUN_004024c0(int param_1,int param_2);
undefined4 FUN_00402690(undefined4 *param_1,uint param_2);
int FUN_00402754(int param_1);
int FUN_00402774(int param_1);
void FUN_00402794(int *param_1,int param_2);
undefined4 FUN_004027e4(void);
undefined4 FUN_00402804(void);
void FUN_00402858(undefined4 param_1,undefined4 param_2);
void FUN_00402864(uint param_1,undefined4 param_2);
void FUN_004028b0(uint param_1);
void FUN_004028bc(void);
void FUN_004028dc(undefined4 param_1);
void FUN_004028ec(void);
void FUN_004028f8(undefined *param_1);
void FUN_0040290c(LPCSTR param_1);
void FUN_00402924(char param_1,int *param_2);
void FUN_0040299c(char param_1,byte *param_2,byte param_3);
undefined4 FUN_00402a0c(void);
void FUN_00402a2c(undefined4 *param_1,undefined4 *param_2,uint param_3);
byte FUN_00402a6c(byte param_1);
undefined4 FUN_00402ab4(void);
undefined4 FUN_00402ac0(void);
void FUN_00402ae4(void);
int FUN_00402b00(undefined *param_1,undefined2 param_2);
void FUN_00402b58(undefined *param_1);
void FUN_00402b64(undefined *param_1);
undefined4 FUN_00402bec(HANDLE param_1);
DWORD FUN_00402bfc(undefined4 *param_1);
DWORD FUN_00402c1c(undefined4 *param_1);
undefined4 FUN_00402dc8(undefined4 *param_1,undefined *param_2);
int FUN_00402e30(undefined *param_1,undefined *param_2,undefined4 param_3);
void FUN_00402e78(undefined *param_1,undefined4 param_2,undefined4 param_3);
void FUN_00402e84(undefined *param_1,undefined4 param_2,undefined4 param_3);
uint FUN_00402ea0(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined *param_5,uint param_6,uint *param_7);
void FUN_00402f2c(undefined4 *param_1,undefined4 param_2,uint param_3,uint *param_4);
void FUN_00402f4c(undefined4 *param_1,undefined4 param_2,uint param_3,uint *param_4);
int FUN_00402f6c(undefined *param_1);
void FUN_00402fc4(byte *param_1,byte *param_2,byte param_3);
void FUN_00402ff4(undefined4 *param_1,byte *param_2);
void FUN_00403000(byte *param_1,byte *param_2,byte param_3);
int FUN_0040301c(byte *param_1,byte *param_2);
int * FUN_004030a0(int *param_1,int *param_2,uint param_3);
undefined4 FUN_00403110(undefined *param_1);
uint FUN_00403148(undefined4 *param_1);
uint FUN_00403198(undefined4 *param_1);
void FUN_004031e4(undefined4 *param_1,uint param_2,undefined1 param_3);
bool FUN_00403204(undefined *param_1);
uint FUN_00403240(undefined *param_1);
undefined4 FUN_004032ac(undefined *param_1);
undefined * FUN_00403304(undefined *param_1,char *param_2,int param_3);
void FUN_00403378(undefined *param_1,undefined1 *param_2,int param_3);
undefined4 * FUN_00403384(undefined *param_1,int *param_2);
void FUN_004033f0(undefined *param_1);
void FUN_00403448(undefined4 *param_1,undefined4 param_2,int param_3);
void FUN_00403528(undefined4 *param_1,undefined4 param_2);
void FUN_00403544(undefined4 *param_1,undefined4 param_2);
void FUN_00403550(undefined4 *param_1,int param_2);
undefined4 FUN_00403584(undefined *param_1);
void FUN_004035a4(uint param_1,int param_2,char *param_3);
void FUN_00403604(byte *param_1,int *param_2);
bool FUN_004036d0(undefined *param_1);
undefined * FUN_00403714(undefined *param_1,undefined1 *param_2,int param_3);
undefined * FUN_00403768(undefined *param_1,int param_2);
undefined * FUN_004037e4(undefined *param_1,undefined1 param_2);
void FUN_00403820(undefined *param_1,uint param_2,int param_3);
void FUN_00403860(undefined *param_1,uint param_2);
void FUN_00403868(undefined *param_1,byte *param_2);
void FUN_00403874(undefined *param_1,byte *param_2,int param_3);
undefined * FUN_0040389c(undefined *param_1,undefined4 param_2,undefined4 param_3);
void FUN_004038e4(char *param_1,char *param_2);
void FUN_004038f0(char *param_1,char *param_2,uint param_3);
void FUN_00403914(undefined1 *param_1,byte param_2,byte param_3);
void FUN_00403938(char *param_1,char *param_2,uint param_3);
void FUN_0040394c(byte *param_1,byte *param_2,char param_3);
void thunk_FUN_00403960(void);
void FUN_00403960(void);
int __stdcall GetKeyboardType(int nTypeFlag);
undefined4 FUN_00403c48(void);
void FUN_00403c78(void);
void FUN_00403d3c(void);
undefined4 FUN_00403d48(undefined4 *param_1);
void FUN_00403d50(int param_1,byte *param_2);
undefined1 FUN_00403d64(int param_1,int param_2);
int * FUN_00403d8c(int param_1);
void FUN_00403d98(int param_1);
void FUN_00403db4(int *param_1);
undefined4 FUN_00403dc8(int param_1);
void FUN_00403dd0(int *param_1,char param_2,undefined4 param_3);
void FUN_00403df0(int *param_1,char param_2);
void FUN_00403e00(int *param_1);
void FUN_00403e0c(int param_1,int *param_2);
void FUN_00403e64(int *param_1);
void FUN_00403e84(int *param_1,undefined *UNRECOVERED_JUMPTABLE,int *param_3);
void FUN_00403eb4(int *param_1,int *param_2,int *param_3);
int * FUN_00403f48(int param_1,int *param_2);
undefined4 FUN_00403f8c(int *param_1,int param_2);
void FUN_00403fb0(int *param_1,int param_2);
void FUN_00403fcc(int param_1);
void FUN_00403ffc(int *param_1,undefined4 param_2,undefined4 param_3);
undefined4 FUN_00404014(int *param_1,undefined4 param_2);
int * thunk_FUN_00404030(int param_1,int param_2);
int * FUN_00404030(int param_1,int param_2);
undefined4 FUN_00404040(int param_1);
undefined4 FUN_00404048(void);
void FUN_00404050(void);
void FUN_00404054(void);
void FUN_00404058(void);
undefined4 FUN_00404084(int param_1,byte *param_2);
void FUN_004040d4(int param_1,int param_2,byte *param_3);
int FUN_00404114(int *param_1,char *param_2);
void FUN_00404164(int param_1,char param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void FUN_004041b4(int *param_1);
int * FUN_004041bc(int *param_1);
int * FUN_004041cc(int *param_1,char param_2);
undefined4 FUN_004041f8(undefined4 param_1);
undefined4 FUN_0040421c(void);
void FUN_00404234(void);
void FUN_00404248(void);
int FUN_0040425c(int param_1,undefined4 param_2,char *param_3);
undefined4 * FUN_0040427c(undefined4 *param_1,undefined4 param_2,char *param_3);
undefined4 FUN_004042c0(undefined4 param_1);
undefined4 FUN_004042e0(int *param_1);
undefined4 FUN_0040440c(int *param_1,int param_2);
undefined4 FUN_00404594(undefined4 *param_1,int param_2);
void FUN_004045cc(int param_1);
void FUN_00404678(undefined4 param_1,int param_2);
void FUN_004047d0(void);
void FUN_004047f0(void);
void FUN_00404818(void);
void FUN_00404878(void);
void FUN_004048d8(undefined4 param_1,int param_2);
void FUN_00404918(int *param_1);
void FUN_00404940(int *param_1);
void FUN_00404964(void);
bool FUN_004049c0(void);
void FUN_004049f0(undefined4 param_1,undefined4 param_2,DWORD param_3);
void FUN_00404a7c(void);
void FUN_00404b54(undefined4 param_1);
void FUN_00404b60(undefined4 param_1);
int * FUN_00404b6c(int *param_1);
void FUN_00404b90(int *param_1,int param_2);
void FUN_00404bc0(int *param_1,undefined4 *param_2);
void FUN_00404c04(int *param_1,int param_2);
undefined4 * FUN_00404c30(int param_1);
void FUN_00404c5c(int *param_1,undefined4 *param_2,uint param_3);
void FUN_00404c8c(LPSTR param_1,int param_2,LPCWSTR param_3,int param_4);
void FUN_00404ca8(LPWSTR param_1,int param_2,LPCSTR param_3,int param_4);
void FUN_00404cc0(int *param_1,LPCWSTR param_2,int param_3);
void FUN_00404d4c(int *param_1,undefined4 param_2);
void FUN_00404d5c(int *param_1,char *param_2);
void FUN_00404d8c(int *param_1,LPCWSTR param_2);
void FUN_00404dc8(int *param_1,byte *param_2);
void FUN_00404dd4(int *param_1,char *param_2,uint param_3);
void FUN_00404dec(int *param_1,LPCWSTR param_2);
void FUN_00404e00(undefined1 *param_1,undefined4 *param_2,uint param_3);
int FUN_00404e24(int param_1);
void FUN_00404e2c(int *param_1,undefined4 *param_2);
void FUN_00404e70(int *param_1,undefined4 *param_2,undefined4 *param_3);
void FUN_00404e92(int *param_1,undefined4 *param_2,undefined4 *param_3);
void FUN_00404ee4(int *param_1,int param_2);
uint * FUN_00404f68(uint *param_1,uint *param_2);
void FUN_0040500c(int param_1);
undefined * FUN_0040501c(undefined *param_1);
int FUN_00405028(int *param_1);
int thunk_FUN_00405028(int *param_1);
int thunk_FUN_00405028(int *param_1);
void FUN_0040507c(int param_1,int param_2,uint param_3,int *param_4);
void FUN_004050bc(int *param_1,int param_2,int param_3);
void FUN_00405104(undefined4 *param_1,int *param_2,int param_3);
char * FUN_00405160(char *param_1,char *param_2);
void FUN_004051a8(int *param_1,uint param_2);
void FUN_0040520c(undefined1 param_1,uint param_2,int *param_3);
void FUN_00405238(undefined *param_1,undefined1 *param_2);
void FUN_00405240(undefined *param_1,undefined1 *param_2,int param_3);
void FUN_00405268(UINT param_1);
void FUN_00405280(undefined4 *param_1,undefined4 param_2);
undefined4 * FUN_00405290(undefined4 *param_1);
void FUN_004052a8(undefined4 *param_1,int param_2);
BSTR * FUN_004052cc(BSTR *param_1,OLECHAR *param_2);
void FUN_004052f0(uint *param_1,LPCSTR param_2,int param_3);
BSTR FUN_0040537c(undefined4 *param_1,OLECHAR *param_2,UINT param_3);
void FUN_004053a0(undefined4 *param_1,OLECHAR *param_2);
void FUN_004053dc(uint *param_1,LPCSTR param_2);
undefined * FUN_004053ec(undefined *param_1);
uint FUN_004053fc(uint param_1);
void FUN_00405408(uint *param_1,undefined4 *param_2);
int * FUN_00405468(int *param_1,int *param_2);
void FUN_004054ec(uint param_1,int param_2,UINT param_3,undefined4 *param_4);
void FUN_00405538(uint *param_1,UINT param_2);
void FUN_0040557c(undefined4 *param_1);
void FUN_0040559c(int param_1,int param_2);
void FUN_004055cc(undefined4 *param_1,char *param_2,int param_3);
void FUN_00405660(undefined4 *param_1,char *param_2);
int FUN_0040566c(int param_1,int param_2);
int * FUN_004056a0(int *param_1,char *param_2,int param_3);
void FUN_0040578c(int *param_1,char *param_2);
void FUN_00405798(int param_1,int param_2);
void FUN_004057c8(int *param_1,char *param_2,int param_3);
void FUN_00405888(int param_1,int param_2,int param_3);
void FUN_004059a4(BSTR *param_1,int *param_2,char *param_3,int param_4);
undefined4 * FUN_00405a98(int param_1,char *param_2);
void FUN_00405aac(int *param_1,char *param_2);
void FUN_00405abc(LPCWSTR param_1,int param_2,int *param_3);
void FUN_00405ac8(LPCWSTR param_1,int *param_2);
uint FUN_00405aec(LPCSTR param_1);
void thunk_FUN_004028b0(uint param_1);
void FUN_00405b30(void);
void FUN_00405b50(undefined4 *param_1);
void FUN_00405b64(undefined4 *param_1);
void FUN_00405b78(void);
void FUN_00405b80(void);
void FUN_00405b88(void);
void FUN_00405b90(void);
void FUN_00405b98(void);
void FUN_00405ba0(void);
void FUN_00405ba8(void);
void FUN_00405bb0(void);
void FUN_00405bb8(void);
void FUN_00405bc0(void);
void FUN_00405bc8(void);
void FUN_00405bd0(void);
void FUN_00405bd8(undefined4 param_1,undefined4 param_2);
void FUN_00405bec(void);
void FUN_00405bf4(void);
void FUN_00405bfc(void);
void FUN_00405c04(void);
void FUN_00405c0c(void);
void FUN_00405c14(void);
void FUN_00405c1c(void);
void FUN_00405c24(undefined4 param_1,undefined4 param_2);
undefined4 FUN_00405c30(undefined4 param_1);
void FUN_00405c38(void);
int FUN_00405c48(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
int FUN_00405c6c(int param_1,uint param_2,undefined4 param_3,uint param_4,uint param_5);
int FUN_00405ce8(int param_1,uint param_2,undefined4 param_3,uint param_4,uint param_5);
uint FUN_00405d34(int param_1,uint param_2,undefined4 param_3,uint param_4,uint param_5);
uint FUN_00405db0(int param_1,uint param_2,undefined4 param_3,uint param_4,uint param_5);
int FUN_00405e00(int param_1,undefined4 param_2,byte param_3);
uint FUN_00405e20(uint param_1,uint param_2,byte param_3);
uint FUN_00405e40(int param_1,int *param_2,undefined4 param_3);
int FUN_00406064(int param_1);
int FUN_0040606c(int param_1);
void FUN_00406074(BSTR *param_1,int *param_2,char *param_3,int param_4);
int * thunk_FUN_004056a0(int *param_1,char *param_2,int param_3);
void FUN_0040608c(int *param_1,int param_2);
void FUN_00406094(int *param_1,int param_2,int param_3,int *param_4);
void FUN_00406220(int *param_1,int param_2,int param_3);
void FUN_0040622c(int param_1,int param_2,int *param_3);
void FUN_0040624c(int param_1,int param_2,int param_3,int *param_4,int param_5);
int * FUN_00406340(int *param_1,int param_2);
void FUN_0040637c(int *param_1,int param_2,int param_3);
void FUN_004063a4(int param_1);
PVOID FUN_004063b0(LPCVOID param_1);
void FUN_004063d8(LPCVOID param_1);
undefined4 FUN_004063e0(int param_1);
void FUN_00406428(int param_1);
void thunk_FUN_00406458(LPCSTR param_1);
void FUN_00406458(LPCSTR param_1);
char * FUN_00406464(char *param_1,int param_2);
HMODULE FUN_0040661c(LPCSTR param_1);
void FUN_0040688c(undefined4 param_1);
void FUN_00406894(int param_1);
void FUN_0040689c(undefined4 param_1);
void FUN_004068bc(int param_1);
void FUN_0040691c(undefined4 param_1,undefined4 param_2,undefined1 *param_3);
void FUN_00406978(undefined4 *param_1);
void FUN_00406988(undefined4 *param_1,undefined4 param_2,undefined1 *param_3);
int * FUN_004069f8(int *param_1);
void FUN_00406a10(int *param_1,int *param_2);
int * FUN_00406a3c(int *param_1,undefined4 *param_2);
void FUN_00406a68(int *param_1);
undefined4 FUN_00406aa0(int *param_1,int *param_2,int *param_3);
void FUN_00406ac8(int param_1);
LONG FUN_00406adc(int *param_1);
int FUN_00406b04(int param_1,uint param_2,int param_3,uint param_4);
int FUN_00406be0(int param_1,uint param_2,int param_3,uint param_4);
void FUN_00406d24(int *param_1,int *param_2);
void FUN_00406dd0(undefined *param_1,BSTR *param_2);
void FUN_00406e74(LPCSTR param_1,int *param_2);
void FUN_00406ec4(undefined4 *param_1,int *param_2);
HMODULE __stdcall GetModuleHandleA(LPCSTR lpModuleName);
HLOCAL __stdcall LocalAlloc(UINT uFlags,SIZE_T uBytes);
LPVOID __stdcall TlsGetValue(DWORD dwTlsIndex);
BOOL __stdcall TlsSetValue(DWORD dwTlsIndex,LPVOID lpTlsValue);
void FUN_00407004(SIZE_T param_1);
undefined4 FUN_00407010(void);
void FUN_00407018(void);
LPVOID FUN_0040705c(void);
void FUN_0040709c(void);
void FUN_004070a8(undefined4 param_1);
void FUN_00407124(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,undefined4 param_5);
void FUN_00407140(undefined4 param_1,undefined4 param_2,undefined4 *param_3);
undefined4 FUN_004071a8(int *param_1);
undefined4 FUN_004071c0(int *param_1,int param_2,int param_3);
void FUN_004071d8(int param_1,int param_2,int param_3,int *param_4,int param_5);
void FUN_004071f4(int *param_1,int *param_2);
LSTATUS __stdcall RegCloseKey(HKEY hKey);
LSTATUS __stdcall RegFlushKey(HKEY hKey);
LSTATUS __stdcall RegOpenKeyExA(HKEY hKey,LPCSTR lpSubKey,DWORD ulOptions,REGSAM samDesired,PHKEY phkResult);
LSTATUS __stdcall RegQueryValueExA(HKEY hKey,LPCSTR lpValueName,LPDWORD lpReserved,LPDWORD lpType,LPBYTE lpData,LPDWORD lpcbData);
BOOL __stdcall CloseHandle(HANDLE hObject);
int __stdcall CompareStringA(LCID Locale,DWORD dwCmpFlags,PCNZCH lpString1,int cchCount1,PCNZCH lpString2,int cchCount2);
BOOL __stdcall CreateDirectoryA(LPCSTR lpPathName,LPSECURITY_ATTRIBUTES lpSecurityAttributes);
HANDLE __stdcall CreateEventA(LPSECURITY_ATTRIBUTES lpEventAttributes,BOOL bManualReset,BOOL bInitialState,LPCSTR lpName);
HANDLE __stdcall CreateFileA(LPCSTR lpFileName,DWORD dwDesiredAccess,DWORD dwShareMode,LPSECURITY_ATTRIBUTES lpSecurityAttributes,DWORD dwCreationDisposition,DWORD dwFlagsAndAttributes,HANDLE hTemplateFile);
HANDLE __stdcall CreateThread(LPSECURITY_ATTRIBUTES lpThreadAttributes,SIZE_T dwStackSize,LPTHREAD_START_ROUTINE lpStartAddress,LPVOID lpParameter,DWORD dwCreationFlags,LPDWORD lpThreadId);
void __stdcall DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection);
BOOL __stdcall DeleteFileA(LPCSTR lpFileName);
void __stdcall EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection);
BOOL __stdcall EnumCalendarInfoA(CALINFO_ENUMPROCA lpCalInfoEnumProc,LCID Locale,CALID Calendar,CALTYPE CalType);
BOOL __stdcall FileTimeToDosDateTime(FILETIME *lpFileTime,LPWORD lpFatDate,LPWORD lpFatTime);
BOOL __stdcall FileTimeToLocalFileTime(FILETIME *lpFileTime,LPFILETIME lpLocalFileTime);
BOOL __stdcall FindClose(HANDLE hFindFile);
HANDLE __stdcall FindFirstFileA(LPCSTR lpFileName,LPWIN32_FIND_DATAA lpFindFileData);
BOOL __stdcall FindNextFileA(HANDLE hFindFile,LPWIN32_FIND_DATAA lpFindFileData);
HRSRC __stdcall FindResourceA(HMODULE hModule,LPCSTR lpName,LPCSTR lpType);
DWORD __stdcall FormatMessageA(DWORD dwFlags,LPCVOID lpSource,DWORD dwMessageId,DWORD dwLanguageId,LPSTR lpBuffer,DWORD nSize,va_list *Arguments);
BOOL __stdcall FreeLibrary(HMODULE hLibModule);
BOOL __stdcall FreeResource(HGLOBAL hResData);
UINT __stdcall GetACP(void);
BOOL __stdcall GetCPInfo(UINT CodePage,LPCPINFO lpCPInfo);
DWORD __stdcall GetCurrentProcessId(void);
DWORD __stdcall GetCurrentThreadId(void);
int __stdcall GetDateFormatA(LCID Locale,DWORD dwFlags,SYSTEMTIME *lpDate,LPCSTR lpFormat,LPSTR lpDateStr,int cchDate);
BOOL __stdcall GetDiskFreeSpaceA(LPCSTR lpRootPathName,LPDWORD lpSectorsPerCluster,LPDWORD lpBytesPerSector,LPDWORD lpNumberOfFreeClusters,LPDWORD lpTotalNumberOfClusters);
UINT __stdcall GetDriveTypeA(LPCSTR lpRootPathName);
DWORD __stdcall GetFileAttributesA(LPCSTR lpFileName);
DWORD __stdcall GetFullPathNameA(LPCSTR lpFileName,DWORD nBufferLength,LPSTR lpBuffer,LPSTR *lpFilePart);
DWORD __stdcall GetLastError(void);
void __stdcall GetLocalTime(LPSYSTEMTIME lpSystemTime);
int __stdcall GetLocaleInfoA(LCID Locale,LCTYPE LCType,LPSTR lpLCData,int cchData);
DWORD __stdcall GetLogicalDrives(void);
DWORD __stdcall GetModuleFileNameA(HMODULE hModule,LPSTR lpFilename,DWORD nSize);
HMODULE __stdcall GetModuleHandleA(LPCSTR lpModuleName);
DWORD __stdcall GetPrivateProfileStringA(LPCSTR lpAppName,LPCSTR lpKeyName,LPCSTR lpDefault,LPSTR lpReturnedString,DWORD nSize,LPCSTR lpFileName);
FARPROC __stdcall GetProcAddress(HMODULE hModule,LPCSTR lpProcName);
DWORD __stdcall GetProfileStringA(LPCSTR lpAppName,LPCSTR lpKeyName,LPCSTR lpDefault,LPSTR lpReturnedString,DWORD nSize);
HANDLE __stdcall GetStdHandle(DWORD nStdHandle);
BOOL __stdcall GetStringTypeExA(LCID Locale,DWORD dwInfoType,LPCSTR lpSrcStr,int cchSrc,LPWORD lpCharType);
void __stdcall GetSystemInfo(LPSYSTEM_INFO lpSystemInfo);
LCID __stdcall GetThreadLocale(void);
DWORD __stdcall GetTickCount(void);
DWORD __stdcall GetVersion(void);
BOOL __stdcall GetVersionExA(LPOSVERSIONINFOA lpVersionInformation);
BOOL __stdcall GetVolumeInformationA(LPCSTR lpRootPathName,LPSTR lpVolumeNameBuffer,DWORD nVolumeNameSize,LPDWORD lpVolumeSerialNumber,LPDWORD lpMaximumComponentLength,LPDWORD lpFileSystemFlags,LPSTR lpFileSystemNameBuffer,DWORD nFileSystemNameSize);
ATOM __stdcall GlobalAddAtomA(LPCSTR lpString);
HGLOBAL __stdcall GlobalAlloc(UINT uFlags,SIZE_T dwBytes);
ATOM __stdcall GlobalDeleteAtom(ATOM nAtom);
ATOM __stdcall GlobalFindAtomA(LPCSTR lpString);
HGLOBAL __stdcall GlobalFree(HGLOBAL hMem);
LPVOID __stdcall GlobalLock(HGLOBAL hMem);
HGLOBAL __stdcall GlobalHandle(LPCVOID pMem);
HGLOBAL __stdcall GlobalReAlloc(HGLOBAL hMem,SIZE_T dwBytes,UINT uFlags);
BOOL __stdcall GlobalUnlock(HGLOBAL hMem);
void __stdcall InitializeCriticalSection(LPCRITICAL_SECTION lpCriticalSection);
void __stdcall LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection);
HMODULE __stdcall LoadLibraryA(LPCSTR lpLibFileName);
HGLOBAL __stdcall LoadResource(HMODULE hModule,HRSRC hResInfo);
LPVOID __stdcall LockResource(HGLOBAL hResData);
int __stdcall MulDiv(int nNumber,int nNumerator,int nDenominator);
BOOL __stdcall ReadFile(HANDLE hFile,LPVOID lpBuffer,DWORD nNumberOfBytesToRead,LPDWORD lpNumberOfBytesRead,LPOVERLAPPED lpOverlapped);
BOOL __stdcall ResetEvent(HANDLE hEvent);
BOOL __stdcall SetEndOfFile(HANDLE hFile);
UINT __stdcall SetErrorMode(UINT uMode);
BOOL __stdcall SetEvent(HANDLE hEvent);
DWORD __stdcall SetFilePointer(HANDLE hFile,LONG lDistanceToMove,PLONG lpDistanceToMoveHigh,DWORD dwMoveMethod);
BOOL __stdcall SetThreadLocale(LCID Locale);
DWORD __stdcall SizeofResource(HMODULE hModule,HRSRC hResInfo);
void __stdcall Sleep(DWORD dwMilliseconds);
LPVOID __stdcall VirtualAlloc(LPVOID lpAddress,SIZE_T dwSize,DWORD flAllocationType,DWORD flProtect);
SIZE_T __stdcall VirtualQuery(LPCVOID lpAddress,PMEMORY_BASIC_INFORMATION lpBuffer,SIZE_T dwLength);
DWORD __stdcall WaitForSingleObject(HANDLE hHandle,DWORD dwMilliseconds);
BOOL __stdcall WriteFile(HANDLE hFile,LPCVOID lpBuffer,DWORD nNumberOfBytesToWrite,LPDWORD lpNumberOfBytesWritten,LPOVERLAPPED lpOverlapped);
BOOL __stdcall WritePrivateProfileStringA(LPCSTR lpAppName,LPCSTR lpKeyName,LPCSTR lpString,LPCSTR lpFileName);
int __stdcall lstrcmpA(LPCSTR lpString1,LPCSTR lpString2);
LPSTR __stdcall lstrcpyA(LPSTR lpString1,LPCSTR lpString2);
DWORD __stdcall WNetGetConnectionA(LPCSTR lpLocalName,LPSTR lpRemoteName,LPDWORD lpnLength);
BOOL __stdcall GetFileVersionInfoA(LPCSTR lptstrFilename,DWORD dwHandle,DWORD dwLen,LPVOID lpData);
DWORD __stdcall GetFileVersionInfoSizeA(LPCSTR lptstrFilename,LPDWORD lpdwHandle);
BOOL __stdcall VerQueryValueA(LPCVOID pBlock,LPCSTR lpSubBlock,LPVOID *lplpBuffer,PUINT puLen);
BOOL __stdcall BitBlt(HDC hdc,int x,int y,int cx,int cy,HDC hdcSrc,int x1,int y1,DWORD rop);
HENHMETAFILE __stdcall CopyEnhMetaFileA(HENHMETAFILE hEnh,LPCSTR lpFileName);
HBITMAP __stdcall CreateBitmap(int nWidth,int nHeight,UINT nPlanes,UINT nBitCount,void *lpBits);
HBRUSH __stdcall CreateBrushIndirect(LOGBRUSH *plbrush);
HBITMAP __stdcall CreateCompatibleBitmap(HDC hdc,int cx,int cy);
HDC __stdcall CreateCompatibleDC(HDC hdc);
HBITMAP __stdcall CreateDIBSection(HDC hdc,BITMAPINFO *lpbmi,UINT usage,void **ppvBits,HANDLE hSection,DWORD offset);
HBITMAP __stdcall CreateDIBitmap(HDC hdc,BITMAPINFOHEADER *pbmih,DWORD flInit,void *pjBits,BITMAPINFO *pbmi,UINT iUsage);
HFONT __stdcall CreateFontIndirectA(LOGFONTA *lplf);
HPALETTE __stdcall CreateHalftonePalette(HDC hdc);
HPALETTE __stdcall CreatePalette(LOGPALETTE *plpal);
HPEN __stdcall CreatePenIndirect(LOGPEN *plpen);
HBRUSH __stdcall CreateSolidBrush(COLORREF color);
BOOL __stdcall DeleteDC(HDC hdc);
BOOL __stdcall DeleteEnhMetaFile(HENHMETAFILE hmf);
BOOL __stdcall DeleteObject(HGDIOBJ ho);
int __stdcall EndDoc(HDC hdc);
int __stdcall EndPage(HDC hdc);
int __stdcall ExcludeClipRect(HDC hdc,int left,int top,int right,int bottom);
BOOL __stdcall ExtTextOutA(HDC hdc,int x,int y,UINT options,RECT *lprect,LPCSTR lpString,UINT c,INT *lpDx);
LONG __stdcall GetBitmapBits(HBITMAP hbit,LONG cb,LPVOID lpvBits);
BOOL __stdcall GetBrushOrgEx(HDC hdc,LPPOINT lppt);
int __stdcall GetClipBox(HDC hdc,LPRECT lprect);
BOOL __stdcall GetCurrentPositionEx(HDC hdc,LPPOINT lppt);
BOOL __stdcall GetDCOrgEx(HDC hdc,LPPOINT lppt);
UINT __stdcall GetDIBColorTable(HDC hdc,UINT iStart,UINT cEntries,RGBQUAD *prgbq);
int __stdcall GetDIBits(HDC hdc,HBITMAP hbm,UINT start,UINT cLines,LPVOID lpvBits,LPBITMAPINFO lpbmi,UINT usage);
int __stdcall GetDeviceCaps(HDC hdc,int index);
UINT __stdcall GetEnhMetaFileBits(HENHMETAFILE hEMF,UINT nSize,LPBYTE lpData);
UINT __stdcall GetEnhMetaFileHeader(HENHMETAFILE hemf,UINT nSize,LPENHMETAHEADER lpEnhMetaHeader);
UINT __stdcall GetEnhMetaFilePaletteEntries(HENHMETAFILE hemf,UINT nNumEntries,LPPALETTEENTRY lpPaletteEntries);
int __stdcall GetObjectA(HANDLE h,int c,LPVOID pv);
UINT __stdcall GetPaletteEntries(HPALETTE hpal,UINT iStart,UINT cEntries,LPPALETTEENTRY pPalEntries);
COLORREF __stdcall GetPixel(HDC hdc,int x,int y);
HGDIOBJ __stdcall GetStockObject(int i);
UINT __stdcall GetSystemPaletteEntries(HDC hdc,UINT iStart,UINT cEntries,LPPALETTEENTRY pPalEntries);
BOOL __stdcall GetTextExtentPoint32A(HDC hdc,LPCSTR lpString,int c,LPSIZE psizl);
BOOL __stdcall GetTextExtentPointA(HDC hdc,LPCSTR lpString,int c,LPSIZE lpsz);
BOOL __stdcall GetTextMetricsA(HDC hdc,LPTEXTMETRICA lptm);
UINT __stdcall GetWinMetaFileBits(HENHMETAFILE hemf,UINT cbData16,LPBYTE pData16,INT iMapMode,HDC hdcRef);
BOOL __stdcall GetWindowOrgEx(HDC hdc,LPPOINT lppoint);
int __stdcall IntersectClipRect(HDC hdc,int left,int top,int right,int bottom);
BOOL __stdcall LineTo(HDC hdc,int x,int y);
BOOL __stdcall MaskBlt(HDC hdcDest,int xDest,int yDest,int width,int height,HDC hdcSrc,int xSrc,int ySrc,HBITMAP hbmMask,int xMask,int yMask,DWORD rop);
BOOL __stdcall MoveToEx(HDC hdc,int x,int y,LPPOINT lppt);
BOOL __stdcall PatBlt(HDC hdc,int x,int y,int w,int h,DWORD rop);
BOOL __stdcall PlayEnhMetaFile(HDC hdc,HENHMETAFILE hmf,RECT *lprect);
BOOL __stdcall Polyline(HDC hdc,POINT *apt,int cpt);
UINT __stdcall RealizePalette(HDC hdc);
BOOL __stdcall RectVisible(HDC hdc,RECT *lprect);
BOOL __stdcall Rectangle(HDC hdc,int left,int top,int right,int bottom);
BOOL __stdcall RestoreDC(HDC hdc,int nSavedDC);
int __stdcall SaveDC(HDC hdc);
HGDIOBJ __stdcall SelectObject(HDC hdc,HGDIOBJ h);
HPALETTE __stdcall SelectPalette(HDC hdc,HPALETTE hPal,BOOL bForceBkgd);
int __stdcall SetAbortProc(HDC hdc,ABORTPROC proc);
COLORREF __stdcall SetBkColor(HDC hdc,COLORREF color);
int __stdcall SetBkMode(HDC hdc,int mode);
BOOL __stdcall SetBrushOrgEx(HDC hdc,int x,int y,LPPOINT lppt);
UINT __stdcall SetDIBColorTable(HDC hdc,UINT iStart,UINT cEntries,RGBQUAD *prgbq);
HENHMETAFILE __stdcall SetEnhMetaFileBits(UINT nSize,BYTE *pb);
int __stdcall SetMapMode(HDC hdc,int iMode);
COLORREF __stdcall SetPixel(HDC hdc,int x,int y,COLORREF color);
int __stdcall SetROP2(HDC hdc,int rop2);
int __stdcall SetStretchBltMode(HDC hdc,int mode);
COLORREF __stdcall SetTextColor(HDC hdc,COLORREF color);
BOOL __stdcall SetViewportOrgEx(HDC hdc,int x,int y,LPPOINT lppt);
HENHMETAFILE __stdcall SetWinMetaFileBits(UINT nSize,BYTE *lpMeta16Data,HDC hdcRef,METAFILEPICT *lpMFP);
BOOL __stdcall SetWindowOrgEx(HDC hdc,int x,int y,LPPOINT lppt);
int __stdcall StartDocA(HDC hdc,DOCINFOA *lpdi);
int __stdcall StartPage(HDC hdc);
BOOL __stdcall StretchBlt(HDC hdcDest,int xDest,int yDest,int wDest,int hDest,HDC hdcSrc,int xSrc,int ySrc,int wSrc,int hSrc,DWORD rop);
BOOL __stdcall UnrealizeObject(HGDIOBJ h);
HKL __stdcall ActivateKeyboardLayout(HKL hkl,UINT Flags);
BOOL __stdcall AdjustWindowRectEx(LPRECT lpRect,DWORD dwStyle,BOOL bMenu,DWORD dwExStyle);
LPSTR __stdcall CharLowerA(LPSTR lpsz);
HDC __stdcall BeginPaint(HWND hWnd,LPPAINTSTRUCT lpPaint);
LRESULT __stdcall CallNextHookEx(HHOOK hhk,int nCode,WPARAM wParam,LPARAM lParam);
LRESULT __stdcall CallWindowProcA(WNDPROC lpPrevWndFunc,HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam);
DWORD __stdcall CharLowerBuffA(LPSTR lpsz,DWORD cchLength);
LPSTR __stdcall CharNextA(LPCSTR lpsz);
DWORD __stdcall CharUpperBuffA(LPSTR lpsz,DWORD cchLength);
DWORD __stdcall CheckMenuItem(HMENU hMenu,UINT uIDCheckItem,UINT uCheck);
HWND __stdcall ChildWindowFromPoint(HWND hWndParent,POINT Point);
BOOL __stdcall ClientToScreen(HWND hWnd,LPPOINT lpPoint);
BOOL __stdcall CloseClipboard(void);
HICON __stdcall CreateIcon(HINSTANCE hInstance,int nWidth,int nHeight,BYTE cPlanes,BYTE cBitsPixel,BYTE *lpbANDbits,BYTE *lpbXORbits);
HMENU __stdcall CreateMenu(void);
HMENU __stdcall CreatePopupMenu(void);
HWND __stdcall CreateWindowExA(DWORD dwExStyle,LPCSTR lpClassName,LPCSTR lpWindowName,DWORD dwStyle,int X,int Y,int nWidth,int nHeight,HWND hWndParent,HMENU hMenu,HINSTANCE hInstance,LPVOID lpParam);
LRESULT __stdcall DefFrameProcA(HWND hWnd,HWND hWndMDIClient,UINT uMsg,WPARAM wParam,LPARAM lParam);
LRESULT __stdcall DefWindowProcA(HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam);
BOOL __stdcall DeleteMenu(HMENU hMenu,UINT uPosition,UINT uFlags);
BOOL __stdcall DestroyCursor(HCURSOR hCursor);
BOOL __stdcall DestroyIcon(HICON hIcon);
BOOL __stdcall DestroyMenu(HMENU hMenu);
BOOL __stdcall DestroyWindow(HWND hWnd);
LRESULT __stdcall DispatchMessageA(MSG *lpMsg);
BOOL __stdcall DrawEdge(HDC hdc,LPRECT qrc,UINT edge,UINT grfFlags);
BOOL __stdcall DrawFocusRect(HDC hDC,RECT *lprc);
BOOL __stdcall DrawFrameControl(HDC param_1,LPRECT param_2,UINT param_3,UINT param_4);
BOOL __stdcall DrawIcon(HDC hDC,int X,int Y,HICON hIcon);
BOOL __stdcall DrawIconEx(HDC hdc,int xLeft,int yTop,HICON hIcon,int cxWidth,int cyWidth,UINT istepIfAniCur,HBRUSH hbrFlickerFreeDraw,UINT diFlags);
BOOL __stdcall DrawMenuBar(HWND hWnd);
int __stdcall DrawTextA(HDC hdc,LPCSTR lpchText,int cchText,LPRECT lprc,UINT format);
BOOL __stdcall EmptyClipboard(void);
BOOL __stdcall EnableMenuItem(HMENU hMenu,UINT uIDEnableItem,UINT uEnable);
BOOL __stdcall EnableWindow(HWND hWnd,BOOL bEnable);
BOOL __stdcall EndPaint(HWND hWnd,PAINTSTRUCT *lpPaint);
BOOL __stdcall EnumThreadWindows(DWORD dwThreadId,WNDENUMPROC lpfn,LPARAM lParam);
BOOL __stdcall EnumWindows(WNDENUMPROC lpEnumFunc,LPARAM lParam);
BOOL __stdcall EqualRect(RECT *lprc1,RECT *lprc2);
int __stdcall FillRect(HDC hDC,RECT *lprc,HBRUSH hbr);
HWND __stdcall FindWindowA(LPCSTR lpClassName,LPCSTR lpWindowName);
int __stdcall FrameRect(HDC hDC,RECT *lprc,HBRUSH hbr);
HWND __stdcall GetActiveWindow(void);
HWND __stdcall GetCapture(void);
BOOL __stdcall GetClassInfoA(HINSTANCE hInstance,LPCSTR lpClassName,LPWNDCLASSA lpWndClass);
int __stdcall GetClassNameA(HWND hWnd,LPSTR lpClassName,int nMaxCount);
BOOL __stdcall GetClientRect(HWND hWnd,LPRECT lpRect);
HANDLE __stdcall GetClipboardData(UINT uFormat);
HCURSOR __stdcall GetCursor(void);
BOOL __stdcall GetCursorPos(LPPOINT lpPoint);
HDC __stdcall GetDC(HWND hWnd);
HDC __stdcall GetDCEx(HWND hWnd,HRGN hrgnClip,DWORD flags);
HWND __stdcall GetDesktopWindow(void);
HWND __stdcall GetDlgItem(HWND hDlg,int nIDDlgItem);
HWND __stdcall GetFocus(void);
HWND __stdcall GetForegroundWindow(void);
BOOL __stdcall GetIconInfo(HICON hIcon,PICONINFO piconinfo);
int __stdcall GetKeyNameTextA(LONG lParam,LPSTR lpString,int cchSize);
SHORT __stdcall GetKeyState(int nVirtKey);
HKL __stdcall GetKeyboardLayout(DWORD idThread);
int __stdcall GetKeyboardLayoutList(int nBuff,HKL *lpList);
BOOL __stdcall GetKeyboardState(PBYTE lpKeyState);
HWND __stdcall GetLastActivePopup(HWND hWnd);
HMENU __stdcall GetMenu(HWND hWnd);
int __stdcall GetMenuItemCount(HMENU hMenu);
UINT __stdcall GetMenuItemID(HMENU hMenu,int nPos);
BOOL __stdcall GetMenuItemInfoA(HMENU hmenu,UINT item,BOOL fByPosition,LPMENUITEMINFOA lpmii);
UINT __stdcall GetMenuState(HMENU hMenu,UINT uId,UINT uFlags);
int __stdcall GetMenuStringA(HMENU hMenu,UINT uIDItem,LPSTR lpString,int cchMax,UINT flags);
DWORD __stdcall GetMessagePos(void);
HWND __stdcall GetWindow(HWND hWnd,UINT uCmd);
HWND __stdcall GetParent(HWND hWnd);
HANDLE __stdcall GetPropA(HWND hWnd,LPCSTR lpString);
HMENU __stdcall GetSubMenu(HMENU hMenu,int nPos);
DWORD __stdcall GetSysColor(int nIndex);
HMENU __stdcall GetSystemMenu(HWND hWnd,BOOL bRevert);
int __stdcall GetSystemMetrics(int nIndex);
HWND __stdcall GetTopWindow(HWND hWnd);
HWND __stdcall GetWindow(HWND hWnd,UINT uCmd);
HDC __stdcall GetWindowDC(HWND hWnd);
LONG __stdcall GetWindowLongA(HWND hWnd,int nIndex);
BOOL __stdcall GetWindowPlacement(HWND hWnd,WINDOWPLACEMENT *lpwndpl);
BOOL __stdcall GetWindowRect(HWND hWnd,LPRECT lpRect);
int __stdcall GetWindowTextA(HWND hWnd,LPSTR lpString,int nMaxCount);
DWORD __stdcall GetWindowThreadProcessId(HWND hWnd,LPDWORD lpdwProcessId);
DWORD __stdcall GetWindowThreadProcessId(HWND hWnd,LPDWORD lpdwProcessId);
BOOL __stdcall InflateRect(LPRECT lprc,int dx,int dy);
BOOL __stdcall InsertMenuA(HMENU hMenu,UINT uPosition,UINT uFlags,UINT_PTR uIDNewItem,LPCSTR lpNewItem);
BOOL __stdcall InsertMenuItemA(HMENU hmenu,UINT item,BOOL fByPosition,LPCMENUITEMINFOA lpmi);
BOOL __stdcall IntersectRect(LPRECT lprcDst,RECT *lprcSrc1,RECT *lprcSrc2);
BOOL __stdcall InvalidateRect(HWND hWnd,RECT *lpRect,BOOL bErase);
BOOL __stdcall IsChild(HWND hWndParent,HWND hWnd);
BOOL __stdcall IsDialogMessageA(HWND hDlg,LPMSG lpMsg);
BOOL __stdcall IsIconic(HWND hWnd);
BOOL __stdcall IsRectEmpty(RECT *lprc);
BOOL __stdcall IsWindow(HWND hWnd);
BOOL __stdcall IsWindowEnabled(HWND hWnd);
BOOL __stdcall IsWindowVisible(HWND hWnd);
BOOL __stdcall KillTimer(HWND hWnd,UINT_PTR uIDEvent);
HBITMAP __stdcall LoadBitmapA(HINSTANCE hInstance,LPCSTR lpBitmapName);
HCURSOR __stdcall LoadCursorA(HINSTANCE hInstance,LPCSTR lpCursorName);
HICON __stdcall LoadIconA(HINSTANCE hInstance,LPCSTR lpIconName);
HKL __stdcall LoadKeyboardLayoutA(LPCSTR pwszKLID,UINT Flags);
int __stdcall LoadStringA(HINSTANCE hInstance,UINT uID,LPSTR lpBuffer,int cchBufferMax);
UINT __stdcall MapVirtualKeyA(UINT uCode,UINT uMapType);
int __stdcall MapWindowPoints(HWND hWndFrom,HWND hWndTo,LPPOINT lpPoints,UINT cPoints);
BOOL __stdcall MessageBeep(UINT uType);
int __stdcall MessageBoxA(HWND hWnd,LPCSTR lpText,LPCSTR lpCaption,UINT uType);
BOOL __stdcall OemToCharA(LPCSTR pSrc,LPSTR pDst);
BOOL __stdcall OffsetRect(LPRECT lprc,int dx,int dy);
BOOL __stdcall OpenClipboard(HWND hWndNewOwner);
BOOL __stdcall PeekMessageA(LPMSG lpMsg,HWND hWnd,UINT wMsgFilterMin,UINT wMsgFilterMax,UINT wRemoveMsg);
BOOL __stdcall PostMessageA(HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam);
void __stdcall PostQuitMessage(int nExitCode);
BOOL __stdcall PtInRect(RECT *lprc,POINT pt);
BOOL __stdcall RedrawWindow(HWND hWnd,RECT *lprcUpdate,HRGN hrgnUpdate,UINT flags);
ATOM __stdcall RegisterClassA(WNDCLASSA *lpWndClass);
UINT __stdcall RegisterClipboardFormatA(LPCSTR lpszFormat);
UINT __stdcall RegisterWindowMessageA(LPCSTR lpString);
BOOL __stdcall ReleaseCapture(void);
int __stdcall ReleaseDC(HWND hWnd,HDC hDC);
BOOL __stdcall RemoveMenu(HMENU hMenu,UINT uPosition,UINT uFlags);
HANDLE __stdcall RemovePropA(HWND hWnd,LPCSTR lpString);
BOOL __stdcall ScreenToClient(HWND hWnd,LPPOINT lpPoint);
BOOL __stdcall ScrollWindow(HWND hWnd,int XAmount,int YAmount,RECT *lpRect,RECT *lpClipRect);
LRESULT __stdcall SendMessageA(HWND hWnd,UINT Msg,WPARAM wParam,LPARAM lParam);
HWND __stdcall SetActiveWindow(HWND hWnd);
HWND __stdcall SetCapture(HWND hWnd);
DWORD __stdcall SetClassLongA(HWND hWnd,int nIndex,LONG dwNewLong);
HANDLE __stdcall SetClipboardData(UINT uFormat,HANDLE hMem);
HCURSOR __stdcall SetCursor(HCURSOR hCursor);
HWND __stdcall SetFocus(HWND hWnd);
BOOL __stdcall SetForegroundWindow(HWND hWnd);
BOOL __stdcall SetMenu(HWND hWnd,HMENU hMenu);
BOOL __stdcall SetMenuItemInfoA(HMENU hmenu,UINT item,BOOL fByPositon,LPCMENUITEMINFOA lpmii);
BOOL __stdcall SetPropA(HWND hWnd,LPCSTR lpString,HANDLE hData);
BOOL __stdcall SetRect(LPRECT lprc,int xLeft,int yTop,int xRight,int yBottom);
UINT_PTR __stdcall SetTimer(HWND hWnd,UINT_PTR nIDEvent,UINT uElapse,TIMERPROC lpTimerFunc);
LONG __stdcall SetWindowLongA(HWND hWnd,int nIndex,LONG dwNewLong);
BOOL __stdcall SetWindowPlacement(HWND hWnd,WINDOWPLACEMENT *lpwndpl);
BOOL __stdcall SetWindowPos(HWND hWnd,HWND hWndInsertAfter,int X,int Y,int cx,int cy,UINT uFlags);
BOOL __stdcall SetWindowTextA(HWND hWnd,LPCSTR lpString);
HHOOK __stdcall SetWindowsHookExA(int idHook,HOOKPROC lpfn,HINSTANCE hmod,DWORD dwThreadId);
int __stdcall ShowCursor(BOOL bShow);
BOOL __stdcall ShowOwnedPopups(HWND hWnd,BOOL fShow);
BOOL __stdcall ShowWindow(HWND hWnd,int nCmdShow);
BOOL __stdcall SystemParametersInfoA(UINT uiAction,UINT uiParam,PVOID pvParam,UINT fWinIni);
BOOL __stdcall TrackPopupMenu(HMENU hMenu,UINT uFlags,int x,int y,int nReserved,HWND hWnd,RECT *prcRect);
BOOL __stdcall TranslateMDISysAccel(HWND hWndClient,LPMSG lpMsg);
BOOL __stdcall TranslateMessage(MSG *lpMsg);
BOOL __stdcall UnhookWindowsHookEx(HHOOK hhk);
BOOL __stdcall UnregisterClassA(LPCSTR lpClassName,HINSTANCE hInstance);
BOOL __stdcall UpdateWindow(HWND hWnd);
BOOL __stdcall WaitMessage(void);
BOOL __stdcall WinHelpA(HWND hWndMain,LPCSTR lpszHelp,UINT uCommand,ULONG_PTR dwData);
HWND __stdcall WindowFromPoint(POINT Point);
uint FUN_00407c90(uint param_1,int param_2);
uint FUN_00407c9c(uint param_1);
void FUN_00407ca0(void);
undefined4 FUN_00407ca8(void);
void FUN_00407cac(UINT param_1,SIZE_T param_2);
void FUN_00407cbc(LPCVOID param_1,SIZE_T param_2,UINT param_3);
void FUN_00407cd8(LPCVOID param_1);
uint FUN_00407cec(uint param_1,uint param_2);
void FUN_00407cf8(undefined4 param_1,int *param_2);
undefined4 FUN_00407d0c(undefined2 *param_1);
void FUN_00407d24(uint param_1,int param_2);
void FUN_00407d2c(LPCSTR param_1,LPCSTR param_2,DWORD param_3,LPVOID param_4,HINSTANCE param_5,HMENU param_6,HWND param_7,int param_8,int param_9,int param_10,int param_11);
HWND FUN_00407d60(UINT *param_1,UINT *param_2,UINT *param_3,LRESULT *param_4,LRESULT *param_5);
void FUN_00408da0(uint param_1,uint param_2,undefined2 *param_3,undefined2 *param_4);
void FUN_00408dbc(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
undefined4 * FUN_00408de0(uint param_1);
void FUN_00408e2c(undefined4 param_1);
void FUN_00408e64(byte *param_1,int *param_2);
void FUN_00408ea0(byte *param_1,int *param_2);
int FUN_00408edc(char *param_1,char *param_2);
undefined4 FUN_00408f0c(int *param_1,int *param_2,uint param_3);
int FUN_00408f2c(char *param_1,char *param_2);
undefined4 FUN_00408f80(char *param_1,char *param_2);
void FUN_00408fa4(undefined *param_1,int *param_2);
void FUN_00408fd8(undefined *param_1,int *param_2);
int FUN_0040900c(undefined *param_1,undefined *param_2);
int FUN_00409044(undefined *param_1,undefined *param_2);
bool FUN_0040907c(undefined *param_1,undefined *param_2);
int FUN_00409094(PCNZCH param_1,PCNZCH param_2,int param_3);
void FUN_004090b4(int param_1,int *param_2);
void FUN_00409164(byte *param_1,char param_2,int *param_3);
void FUN_00409288(int *param_1,char param_2,int *param_3);
void FUN_00409388(byte *param_1,char param_2,int *param_3);
undefined4 FUN_004094f0(char *param_1);
void FUN_00409554(undefined4 param_1,int *param_2);
void FUN_00409584(int *param_1);
undefined4 FUN_004095b8(byte *param_1);
undefined4 FUN_004095f4(byte *param_1,undefined4 param_2,int param_3);
uint FUN_0040960c(int param_1,undefined4 param_2,undefined4 param_3);
HANDLE FUN_00409668(undefined *param_1,uint param_2);
void FUN_004096c4(undefined *param_1);
void FUN_004096e8(undefined *param_1);
DWORD FUN_004096f0(HANDLE param_1,LPVOID param_2,DWORD param_3);
DWORD FUN_0040971c(HANDLE param_1,LPCVOID param_2,DWORD param_3);
DWORD FUN_00409748(HANDLE param_1,DWORD param_2,undefined4 param_3,LONG param_4,LONG param_5);
void FUN_00409780(HANDLE param_1);
undefined4 FUN_00409788(undefined *param_1);
undefined4 FUN_004097f0(undefined *param_1);
undefined4 FUN_00409800(undefined *param_1);
void FUN_00409824(uint *param_1);
DWORD FUN_00409908(LPWORD param_1);
DWORD FUN_0040996c(undefined *param_1,uint param_2,LPWORD param_3);
void FUN_004099bc(LPWORD param_1);
void FUN_004099e0(int param_1);
bool FUN_004099fc(undefined *param_1);
undefined * FUN_00409a14(undefined *param_1);
int FUN_00409a44(undefined *param_1,undefined *param_2);
void FUN_00409a94(undefined *param_1,undefined4 *param_2,int *param_3);
void FUN_00409b28(undefined *param_1,int *param_2);
void FUN_00409b5c(undefined *param_1,int *param_2);
void FUN_00409bd0(char *param_1,int *param_2);
void FUN_00409c64(undefined *param_1,int *param_2);
void FUN_00409c9c(undefined *param_1,int *param_2);
void FUN_00409ce4(undefined *param_1,int *param_2);
void FUN_00409d94(int *param_1);
bool FUN_00409da0(undefined *param_1);
int FUN_00409dbc(char *param_1);
char * FUN_00409dd4(char *param_1);
undefined4 * FUN_00409de8(undefined4 *param_1,undefined4 *param_2,uint param_3);
char * FUN_00409df8(char *param_1,char *param_2);
char * FUN_00409e20(char *param_1,char *param_2,int param_3);
void FUN_00409e54(char *param_1,undefined *param_2);
void FUN_00409e78(char *param_1,undefined *param_2,int param_3);
int FUN_00409e98(char *param_1,char *param_2);
void FUN_00409ebc(char *param_1,char *param_2);
void FUN_00409efc(char *param_1,char *param_2,int param_3);
char * FUN_00409f40(char *param_1,char param_2);
char * FUN_00409f60(char *param_1,char *param_2);
void FUN_00409fb4(char *param_1,int *param_2);
int * FUN_00409fc8(int param_1);
int FUN_00409fdc(int param_1);
undefined4 * FUN_00409fe8(char *param_1);
void FUN_0040a014(int param_1);
void FUN_0040a024(int param_1,byte *param_2,uint param_3);
void FUN_0040a090(int *param_1);
void FUN_0040a09c(byte *param_1,byte *param_2,byte *param_3,undefined4 param_4,undefined4 param_5,int param_6);
uint FUN_0040a17e(uint param_1,undefined4 param_2,byte *param_3);
void FUN_0040a1c6(undefined1 param_1,undefined4 param_2,undefined4 param_3);
void FUN_0040a289(void);
undefined4 FUN_0040a490(undefined4 param_1);
void FUN_0040a4a0(undefined4 param_1);
byte * FUN_0040a4b0(byte *param_1,byte *param_2,undefined4 param_3,undefined4 param_4);
byte * FUN_0040a4f0(byte *param_1,byte *param_2,byte *param_3,undefined4 param_4,undefined4 param_5);
void FUN_0040a530(byte *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
void FUN_0040a544(int *param_1,byte *param_2,undefined4 param_3,undefined4 param_4);
uint FUN_0040a604(undefined4 param_1,uint param_2,int param_3);
void FUN_0040a648(undefined1 *param_1,undefined4 param_2,char param_3,undefined4 param_4,int param_5,byte param_6);
char FUN_0040a73e(void);
void FUN_0040a747(void);
void FUN_0040a7eb(void);
void FUN_0040a8a4(void);
void FUN_0040a917(void);
void FUN_0040a920(undefined4 param_1,undefined4 param_2,char param_3);
void FUN_0040a94d(void);
void FUN_0040aa6f(void);
void FUN_0040ab43(void);
void FUN_0040ab4c(byte *param_1,float10 *param_2,char param_3);
void FUN_0040ac03(void);
void FUN_0040ac0e(void);
void FUN_0040ac2a(void);
void FUN_0040ac59(void);
void FUN_0040ac60(int *param_1);
void FUN_0040ac90(undefined *param_1);
void FUN_0040accc(undefined4 *param_1,undefined4 param_2,undefined4 param_3,double param_4);
undefined1 FUN_0040ad10(ushort param_1,ushort param_2,ushort param_3,double *param_4,ushort param_5);
void FUN_0040ad80(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3,undefined2 *param_4,undefined4 param_5,undefined4 param_6);
undefined4 FUN_0040addc(uint param_1);
undefined1 FUN_0040ae18(uint param_1,ushort param_2,ushort param_3,double *param_4);
uint FUN_0040aee0(short *param_1,ushort *param_2,short *param_3,undefined2 *param_4,undefined4 param_5,undefined4 param_6);
void FUN_0040b02c(short *param_1,ushort *param_2,short *param_3,undefined4 param_4,undefined4 param_5);
int FUN_0040b04c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
WORD FUN_0040b074(void);
void FUN_0040b088(undefined4 *param_1,uint param_2,undefined4 param_3,int param_4);
void FUN_0040b0cc(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4);
void FUN_0040b0ec(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4);
void FUN_0040b138(int param_1);
void FUN_0040b164(int param_1);
void FUN_0040b19c(int param_1);
void FUN_0040b1dc(int param_1,int *param_2,undefined4 param_3,int param_4);
void FUN_0040b344(int param_1,int *param_2,undefined4 param_3,int param_4);
void FUN_0040b44c(byte *param_1,undefined4 param_2,undefined4 param_3,int param_4);
void FUN_0040bbdc(int *param_1,byte *param_2,undefined4 param_3);
void FUN_0040bc38(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void FUN_0040bc50(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void FUN_0040bc68(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void FUN_0040bc7c(int param_1,int *param_2);
bool FUN_0040bca0(int param_1,int *param_2,ushort *param_3,char *param_4);
void FUN_0040bd34(int param_1,int *param_2,undefined *param_3);
undefined4 FUN_0040bdc0(int param_1,int *param_2,char param_3);
undefined4 FUN_0040bdf8(int param_1);
int FUN_0040be44(undefined *param_1,int *param_2);
undefined4 FUN_0040be8c(undefined *param_1);
int FUN_0040bee0(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
void FUN_0040bf3c(undefined *param_1,int *param_2,double *param_3);
undefined1 FUN_0040c278(int param_1,int *param_2,double *param_3);
void FUN_0040c46c(undefined *param_1);
undefined4 FUN_0040c4a0(undefined *param_1,double *param_2);
void FUN_0040c4d4(int param_1);
undefined4 FUN_0040c508(int param_1,double *param_2);
void FUN_0040c53c(undefined *param_1);
undefined4 FUN_0040c570(undefined *param_1,double *param_2);
void FUN_0040c5fc(DWORD param_1,int *param_2);
void FUN_0040c648(LCID param_1,LCTYPE param_2,undefined4 *param_3,int *param_4);
uint FUN_0040c694(LCID param_1,LCTYPE param_2,uint param_3);
void FUN_0040c6bc(LCTYPE param_1,int param_2,int param_3,int *param_4,undefined4 param_5,int param_6);
void FUN_0040c6f8(void);
undefined4 lpCalInfoEnumProc_0040c81c(char *param_1);
BOOL lpCalInfoEnumProc_0040c858(void);
void FUN_0040c8d0(void);
void FUN_0040c980(undefined4 *param_1,int *param_2);
void FUN_0040cbb4(int *param_1,LPCVOID param_2,byte *param_3,byte *param_4);
void FUN_0040cd3c(int *param_1,LPCVOID param_2);
int * FUN_0040cdf0(int *param_1,char param_2,undefined4 *param_3);
void FUN_0040ce2c(int param_1,char param_2,byte *param_3,undefined4 param_4,undefined4 param_5);
int * FUN_0040ceac(int *param_1,char param_2,undefined4 *param_3);
void FUN_0040cee8(int param_1,char param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5);
void FUN_0040cfa8(void);
void FUN_0040d07c(int param_1,undefined4 param_2,undefined4 param_3);
void FUN_0040d128(int param_1,undefined4 param_2,undefined4 *param_3);
undefined4 FUN_0040d16c(int *param_1);
undefined4 FUN_0040d1ec(int *param_1);
void FUN_0040d204(void);
void FUN_0040d4ac(void);
void FUN_0040d530(void);
void FUN_0040d59c(void);
void FUN_0040d5f4(void);
undefined4 FUN_0040d5fc(byte *param_1,int param_2);
undefined4 FUN_0040d674(undefined *param_1,int param_2);
undefined4 FUN_0040d698(byte *param_1,int param_2);
void FUN_0040d6b0(undefined *param_1,int param_2);
int FUN_0040d6d8(undefined *param_1,int param_2);
void FUN_0040d730(undefined *param_1,int param_2,int *param_3,int *param_4);
int FUN_0040d7c0(undefined *param_1,int param_2);
int FUN_0040d824(undefined *param_1,int param_2);
int FUN_0040d884(LPCSTR param_1);
void FUN_0040d8a4(LPCSTR param_1);
int FUN_0040d8ac(undefined *param_1,int param_2);
int FUN_0040d8e8(undefined *param_1,int param_2);
undefined4 FUN_0040d924(undefined *param_1,int param_2);
bool FUN_0040d958(undefined *param_1,undefined *param_2,int param_3);
void FUN_0040d99c(undefined4 *param_1,int *param_2);
PCNZCH FUN_0040d9d4(undefined *param_1,undefined *param_2);
void FUN_0040da0c(undefined *param_1,undefined *param_2);
int FUN_0040da74(undefined *param_1,int *param_2);
int FUN_0040db00(undefined *param_1,int *param_2);
PCNZCH FUN_0040db8c(byte *param_1,char *param_2);
char * FUN_0040dc2c(byte *param_1,char param_2);
char * FUN_0040dc54(byte *param_1,char param_2);
void FUN_0040dc94(LCID param_1);
void FUN_0040dd08(void);
undefined4 FUN_0040dd68(void);
void FUN_0040dd80(void);
void FUN_0040def4(void);
void FUN_0040e26c(undefined *param_1,undefined *param_2,undefined4 param_3,int *param_4,byte param_5);
void __stdcall Sleep(DWORD dwMilliseconds);
void FUN_0040e3a8(void);
int FUN_0040e444(int param_1);
void FUN_0040e454(void);
void FUN_0040e470(void);
void FUN_0040e490(void);
int FUN_0040e4ec(int *param_1);
int FUN_0040e4f8(int *param_1);
undefined4 FUN_0040e504(undefined4 *param_1,undefined4 param_2);
int FUN_0040e50c(int *param_1,int param_2);
int * FUN_0040e514(int *param_1,char param_2,undefined4 param_3);
void FUN_0040e550(int *param_1,char param_2);
uint FUN_0040e5b8(void);
void FUN_0040e5d0(int param_1,undefined4 *param_2);
void FUN_0040e648(int param_1,undefined4 *param_2);
void FUN_0040e6d0(int param_1,int *param_2);
void FUN_0040e718(int param_1,int param_2);
undefined4 * FUN_0040e744(int param_1);
int * FUN_0040e79c(int *param_1,char param_2,undefined4 param_3);
void FUN_0040e858(int param_1);
void FUN_0040e864(int param_1);
void FUN_0040e870(int param_1);
void FUN_0040e87c(int param_1);
undefined4 FUN_0040e89c(int param_1);
void FUN_0040e99c(int param_1);
void FUN_0040ea40(int param_1);
void FUN_0040eae4(int param_1);
void FUN_0040eb74(undefined4 *param_1);
undefined4 FUN_0040eb84(undefined4 *param_1);
void FUN_0040eba8(int *param_1,int *param_2,int *param_3);
void FUN_0040ec40(undefined *param_1,UINT param_2);
void __stdcall VariantInit(VARIANTARG *pvarg);
HRESULT __stdcall VariantClear(VARIANTARG *pvarg);
HRESULT __stdcall VariantCopy(VARIANTARG *pvargDest,VARIANTARG *pvargSrc);
HRESULT __stdcall VariantCopyInd(VARIANT *pvarDest,VARIANTARG *pvargSrc);
HRESULT __stdcall VariantChangeTypeEx(VARIANTARG *pvargDest,VARIANTARG *pvarSrc,LCID lcid,USHORT wFlags,VARTYPE vt);
SAFEARRAY * __stdcall SafeArrayCreate(VARTYPE vt,UINT cDims,SAFEARRAYBOUND *rgsabound);
HRESULT __stdcall SafeArrayRedim(SAFEARRAY *psa,SAFEARRAYBOUND *psaboundNew);
HRESULT __stdcall SafeArrayGetLBound(SAFEARRAY *psa,UINT nDim,LONG *plLbound);
HRESULT __stdcall SafeArrayGetUBound(SAFEARRAY *psa,UINT nDim,LONG *plUbound);
HRESULT __stdcall SafeArrayGetElement(SAFEARRAY *psa,LONG *rgIndices,void *pv);
HRESULT __stdcall SafeArrayPutElement(SAFEARRAY *psa,LONG *rgIndices,void *pv);
HRESULT __stdcall SafeArrayPtrOfIndex(SAFEARRAY *psa,LONG *rgIndices,void **ppvData);
void thunk_FUN_004028b0(uint param_1);
void thunk_FUN_004028b0(uint param_1);
void thunk_FUN_004028b0(uint param_1);
void FUN_0040f398(VARIANTARG *param_1);
void FUN_0040f3a0(VARIANTARG *param_1,undefined4 param_2,int *param_3);
void FUN_0040f418(undefined4 param_1,undefined4 param_2,int *param_3,VARIANTARG *param_4,ushort *param_5,undefined4 param_6);
undefined4 FUN_0040f484(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
void FUN_0040f4e0(VARIANTARG *param_1,VARIANTARG *param_2,undefined *param_3);
void FUN_0040f6b4(VARIANTARG *param_1,VARIANTARG *param_2,int *param_3);
void thunk_FUN_0040f6b4(VARIANTARG *param_1,VARIANTARG *param_2,int *param_3);
void thunk_FUN_0040f6b4(VARIANTARG *param_1,VARIANTARG *param_2,int *param_3);
void FUN_0040f7dc(undefined2 *param_1,ushort *param_2,undefined2 param_3);
void FUN_0040f978(VARIANTARG *param_1,int param_2,ushort param_3);
void FUN_0040faf0(VARIANTARG *param_1,VARIANTARG *param_2,int *param_3);
bool FUN_0040fb58(undefined4 param_1,VARIANTARG *param_2,undefined4 param_3);
void FUN_0040fb70(VARIANTARG *param_1,VARIANTARG *param_2,int *param_3);
void FUN_0040fcf8(VARIANTARG *param_1,int param_2);
void FUN_0040fd28(VARIANTARG *param_1,int param_2);
void thunk_FUN_0040fd28(VARIANTARG *param_1,int param_2);
void FUN_0040fd50(VARIANTARG *param_1,VARIANTARG *param_2,int *param_3);
void FUN_0040fe6c(VARIANTARG *param_1,VARIANTARG *param_2,int *param_3);
BADTYPE FUN_0040fed4(VARIANTARG *param_1);
uint FUN_0040ffb0(VARIANTARG *param_1);
bool FUN_004100fc(VARIANTARG *param_1);
void FUN_00410138(VARIANTARG *param_1);
void FUN_00410274(VARIANTARG *param_1);
void FUN_004103e8(int *param_1,VARIANTARG *param_2);
void FUN_0041051c(int *param_1,VARIANTARG *param_2);
void FUN_004106c4(VARIANTARG *param_1,undefined4 param_2,int *param_3);
void FUN_00410774(VARIANTARG *param_1,undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5);
void FUN_00410810(VARIANTARG *param_1,undefined4 *param_2,int *param_3);
void FUN_0041088c(VARIANTARG *param_1,uint param_2,int *param_3);
void FUN_00410930(VARIANTARG *param_1,LPCSTR param_2);
void FUN_00410980(VARIANTARG *param_1,byte *param_2);
void FUN_004109d0(VARIANTARG *param_1,VARIANTARG *param_2);
void FUN_00410a7c(VARIANTARG *param_1,VARIANTARG *param_2,int *param_3);
void FUN_00410bb8(short *param_1);
void FUN_00410c6c(VARIANTARG *param_1,VARIANTARG *param_2,int param_3);
void FUN_00410ee4(void);
void FUN_00410ee8(short *param_1,VARIANTARG *param_2,int param_3);
uint FUN_00410f74(uint param_1,undefined4 param_2,undefined4 param_3,int param_4);
void FUN_00410fbc(VARIANTARG *param_1,VARIANTARG *param_2,int param_3);
void FUN_0041104c(VARIANTARG *param_1,VARIANTARG *param_2,int param_3);
void FUN_00411170(VARIANTARG *param_1,VARIANTARG *param_2,int param_3);
void FUN_0041135c(VARIANTARG *param_1,VARIANTARG *param_2,int param_3);
void FUN_00411774(VARIANTARG *param_1,VARIANTARG *param_2,int param_3);
uint FUN_00411b30(uint param_1);
undefined4 FUN_00411b54(int param_1,int param_2);
undefined4 FUN_00411b68(uint param_1,int param_2,uint param_3,int param_4);
undefined4 FUN_00411ba4(undefined4 param_1,undefined4 param_2,undefined4 param_3,double param_4,double param_5);
void FUN_00411bcc(VARIANTARG *param_1,VARIANTARG *param_2);
uint FUN_00411c44(VARIANTARG *param_1,VARIANTARG *param_2);
void FUN_00411dec(VARIANTARG *param_1);
void FUN_00411eb8(VARIANTARG *param_1,undefined4 param_2,int *param_3);
void FUN_00411efc(VARIANTARG *param_1);
undefined2 FUN_00411fc8(undefined2 *param_1);
undefined4 FUN_00411fcc(ushort *param_1,undefined4 param_2,int *param_3);
undefined4 FUN_00412030(ushort param_1,undefined4 param_2,undefined4 param_3);
bool FUN_0041205c(short *param_1,ushort *param_2);
void FUN_004120a0(undefined2 *param_1);
void FUN_004120b0(undefined *param_1,short *param_2,int param_3);
undefined4 FUN_00412130(short *param_1,short *param_2,undefined4 *param_3);
void FUN_0041217c(LONG *param_1,uint param_2,VARTYPE param_3,VARIANTARG *param_4);
undefined4 FUN_0041227c(short *param_1);
undefined2 FUN_004122a4(short *param_1);
LONG FUN_004122cc(short *param_1,UINT param_2,LONG param_3);
LONG FUN_004122f4(short *param_1,UINT param_2,LONG param_3);
void FUN_0041231c(short *param_1);
undefined4 FUN_00412324(short *param_1,char param_2);
undefined4 FUN_0041234c(uint param_1);
undefined4 FUN_00412370(ushort param_1,undefined *param_2,undefined4 param_3);
void FUN_004123a8(void);
void FUN_0041247c(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4);
void FUN_004124a0(void);
void FUN_004125e8(int param_1);
undefined4 * FUN_00412610(undefined4 *param_1,int param_2,int param_3,int *param_4);
undefined4 FUN_00412650(int param_1);
int FUN_0041266c(char *param_1);
int FUN_00412684(int param_1);
undefined1 FUN_0041268c(int *param_1,char *param_2);
void FUN_004126f4(undefined4 *param_1,char *param_2,int *param_3);
char FUN_00412748(int *param_1,int param_2);
void FUN_004127b4(undefined4 *param_1,char *param_2,int *param_3);
int FUN_0041280c(char *param_1);
void FUN_00412834(undefined4 param_1,int *param_2);
void FUN_00412b48(int *param_1,short *param_2);
void FUN_00412e24(void);
void FUN_00412ea0(uint param_1,undefined4 param_2,ushort *param_3);
void FUN_00412ed8(uint param_1,undefined4 param_2,ushort *param_3,undefined4 param_4);
void FUN_00412f20(uint param_1);
undefined1 FUN_00412f2c(int *param_1,undefined4 param_2,uint param_3,int param_4);
undefined4 FUN_00413028(int param_1,undefined4 param_2,undefined4 param_3,undefined2 *param_4);
void FUN_00413044(uint param_1);
void FUN_0041304c(uint param_1);
void FUN_00413054(uint param_1);
undefined4 FUN_00413084(void);
void FUN_004130c4(ushort param_1,undefined4 *param_2);
void FUN_00413164(char *param_1,int *param_2);
void FUN_0041324c(VARIANTARG *param_1,undefined4 param_2,int *param_3);
void FUN_004132c4(void);
int FUN_0041363c(int param_1);
void FUN_00413648(char *param_1,uint param_2,int *param_3);
int FUN_0041373c(int param_1,int param_2);
int FUN_00413788(char *param_1,byte *param_2);
void FUN_004137ec(int param_1,undefined1 *param_2);
void FUN_0041385c(int param_1,undefined4 *param_2);
uint FUN_004138b0(int *param_1,int param_2);
uint FUN_004138e0(int *param_1,undefined4 *param_2);
void FUN_00413954(int *param_1,undefined4 *param_2,int param_3);
void FUN_004139b0(int *param_1,int param_2,byte *param_3);
void FUN_004139f4(int *param_1,undefined4 *param_2,byte *param_3);
void FUN_00413a48(int *param_1,int param_2,int *param_3);
void FUN_00413a70(int *param_1,undefined4 *param_2,undefined4 *param_3);
void FUN_00413aa4(int *param_1,undefined4 *param_2);
void FUN_00413ab8(int *param_1,int param_2,int *param_3);
void FUN_00413af8(int *param_1,int param_2,undefined4 *param_3);
void FUN_00413b38(int *param_1,undefined4 *param_2,int *param_3);
void FUN_00413b90(int *param_1,undefined4 *param_2,LPCSTR param_3);
void FUN_00413be8(int *param_1,undefined4 *param_2,int *param_3);
void FUN_00413c28(int *param_1,undefined4 *param_2,LPCSTR param_3);
void FUN_00413c54(int *param_1,undefined4 *param_2,BSTR *param_3);
void FUN_00413d3c(int *param_1,undefined4 *param_2,LPCWSTR param_3);
void FUN_00413e10(int *param_1,undefined4 *param_2);
void FUN_00413f28(int *param_1,undefined4 *param_2,undefined4 param_3,float param_4,float param_5,undefined2 param_6);
void FUN_00414120(void);
void FUN_00414134(int *param_1,int param_2,int param_3);
void FUN_00414174(int *param_1,int param_2,int param_3);
void FUN_004141b4(int *param_1,int param_2,undefined4 *param_3);
void FUN_004141f4(int *param_1,int param_2,undefined4 *param_3);
undefined4 FUN_0041422c(int *param_1,int param_2);
void FUN_00414254(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void FUN_00414290(int *param_1,int param_2,int *param_3);
void FUN_00414310(int *param_1,int param_2,int *param_3);
void FUN_00415c4c(undefined4 param_1,undefined4 param_2,undefined4 *param_3);
undefined4 FUN_00415c64(undefined2 param_1,undefined2 param_2);
void FUN_00415c74(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,undefined4 param_5);
void FUN_00415c9c(int param_1,int param_2,int param_3,int *param_4,int param_5);
undefined4 FUN_00415cc4(int *param_1);
undefined4 FUN_00415cd8(undefined4 param_1);
void FUN_00415da4(int param_1,int param_2);
int FUN_00415db0(int param_1,int param_2);
int FUN_00415e10(undefined4 param_1,int param_2,int param_3,int param_4);
int * FUN_00415e80(int *param_1,char param_2,int param_3);
int FUN_00415f3c(int param_1,int param_2);
undefined4 FUN_00415f9c(int param_1,int param_2);
void FUN_00415fe0(int param_1,int param_2);
bool FUN_00416088(int param_1,int param_2);
undefined4 FUN_004160a0(LPCVOID param_1,PVOID param_2);
void FUN_004160c0(int param_1,PVOID param_2);
void FUN_00416164(int param_1,int param_2);
int * FUN_004161b0(int *param_1,char param_2,undefined4 param_3);
int FUN_00416280(int param_1,int param_2);
int FUN_004162c4(int param_1,int param_2);
void FUN_00416308(void);
void FUN_00416398(int param_1,int param_2,int param_3);
void FUN_00416460(int param_1);
void FUN_0041646c(int param_1,int param_2);
undefined4 FUN_00416484(int param_1,int param_2);
void FUN_004164c8(int param_1,int param_2);
void FUN_00416518(int param_1);
void FUN_00416524(int param_1,PVOID param_2);
void FUN_00416554(int *param_1,char param_2,int param_3,char param_4);
int FUN_004166b0(int param_1,int param_2);
int FUN_00416738(int param_1);
void FUN_00416744(undefined4 param_1);
void FUN_004167b0(int param_1);
int FUN_00416804(int param_1);
void FUN_00416824(undefined **param_1);
void FUN_00416894(PVOID param_1);
void FUN_004168e0(int param_1);
void FUN_0041692c(int param_1,int param_2);
void FUN_00416980(int param_1);
void FUN_00416a34(int *param_1,char param_2,int param_3,int param_4,int param_5);
void FUN_00416a6c(int param_1,int param_2,int param_3);
undefined4 FUN_00416a98(int param_1);
undefined4 FUN_00416b14(int param_1);
undefined4 FUN_00416b90(char *param_1,undefined4 *param_2,int param_3,int param_4);
undefined1 FUN_00416bd0(int param_1,int *param_2,int *param_3,int param_4);
void FUN_00416c14(int param_1,undefined4 param_2,undefined4 param_3);
void FUN_00416c54(int param_1);
int FUN_00416c6c(undefined4 param_1);
undefined1 FUN_00416cac(undefined4 param_1);
void FUN_00416cd0(undefined *param_1,HMODULE param_2,undefined4 *param_3);
void FUN_00416d54(void);
void FUN_00416dac(void);
void FUN_00416ddc(void);
void FUN_00416e38(undefined **param_1,undefined4 param_2,undefined4 param_3,int param_4);
void FUN_00416ee0(undefined4 *param_1,undefined4 param_2);
void FUN_00417134(int *param_1,char param_2);
int FUN_00417154(int *param_1,int param_2);
void FUN_00417188(int *param_1);
void FUN_004171a0(int *param_1,int param_2);
undefined4 FUN_00417200(void);
void FUN_00417204(undefined4 param_1,byte *param_2,undefined4 param_3);
void FUN_0041723c(undefined4 param_1,undefined4 *param_2,undefined4 param_3);
undefined4 * FUN_00417290(undefined4 *param_1);
void FUN_004172a8(undefined4 *param_1);
undefined4 FUN_004172b0(undefined4 *param_1,int param_2);
int FUN_0041730c(int param_1,int param_2);
void FUN_0041732c(int *param_1,int param_2,int param_3);
void FUN_00417398(undefined4 *param_1);
void FUN_004173a4(int *param_1,int param_2,int param_3);
void FUN_004173fc(int *param_1,int param_2,int param_3);
int FUN_00417450(int *param_1,int param_2);
void FUN_00417470(undefined4 *param_1,int param_2);
void FUN_004174ac(int *param_1,int param_2);
void FUN_0041751c(void);
void FUN_00417520(int *param_1,undefined4 *param_2,uint param_3,undefined4 *param_4);
int * FUN_004177ec(int *param_1,char param_2,undefined4 param_3);
void FUN_004178bc(int param_1,int param_2);
undefined4 FUN_00417944(int param_1);
void FUN_00417958(int param_1,int param_2);
void FUN_004179a8(int param_1);
void FUN_004179e4(void);
int FUN_004179fc(int param_1,int param_2);
void FUN_00417a08(int param_1,int param_2);
void FUN_00417aac(int param_1,uint param_2,char param_3);
uint FUN_00417ad8(int param_1,uint param_2);
int FUN_00417af0(int param_1);
void FUN_00417b68(int *param_1,char param_2);
void FUN_00417b94(int *param_1,undefined4 *param_2);
void FUN_00417ba8(int *param_1,int *param_2);
void FUN_00417c78(int *param_1,int *param_2);
void FUN_00417c80(void);
void FUN_00417d38(int *param_1);
void FUN_00417df0(int *param_1,int *param_2);
void FUN_00417e88(int *param_1,undefined4 param_2,undefined4 param_3);
int * FUN_00417eec(int *param_1,char param_2,undefined4 param_3);
void FUN_00417f24(int *param_1,char param_2);
void FUN_00417f54(int param_1,char param_2);
int FUN_00417f78(int param_1);
void FUN_00417f90(int *param_1,int *param_2);
void FUN_00417fb8(int *param_1,int *param_2);
void FUN_00418098(int param_1);
void FUN_004180a0(int param_1,int param_2);
int * FUN_004180d0(int *param_1,char param_2,int param_3);
void FUN_00418168(int param_1);
void FUN_00418174(int *param_1,int *param_2);
void FUN_00418210(int *param_1);
void FUN_00418220(int *param_1);
void FUN_004182a4(int param_1,undefined4 param_2,int param_3,undefined4 param_4);
undefined4 FUN_004182c4(int param_1);
void FUN_004182cc(int param_1,int param_2);
void FUN_004182e0(int *param_1,int *param_2);
void FUN_004183a8(int *param_1,int *param_2);
int * FUN_004184c4(int param_1,undefined4 param_2);
void FUN_004184e0(int *param_1,int *param_2);
void FUN_00418548(int *param_1,int param_2);
void FUN_004185a0(void);
void FUN_004185a4(int *param_1,int param_2);
void FUN_004185d4(int *param_1,undefined4 param_2,undefined4 param_3);
int * FUN_0041860c(int *param_1,char param_2,int param_3,int param_4);
void FUN_00418654(int *param_1,char param_2);
void FUN_004186cc(int *param_1,int *param_2);
void FUN_00418814(int *param_1);
byte FUN_0041882c(int param_1);
void FUN_004188d0(int *param_1);
void FUN_004188e4(int *param_1,int *param_2);
undefined4 FUN_0041898c(void);
void FUN_00418990(undefined4 param_1,byte *param_2,undefined4 param_3);
void FUN_004189c8(undefined4 param_1,undefined4 *param_2,undefined4 param_3);
void FUN_00418b10(int *param_1,int *param_2);
void FUN_00418b98(int *param_1,int *param_2);
void FUN_00418d8c(int *param_1);
void FUN_00418f08(int *param_1,undefined4 param_2);
void FUN_00419090(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_004190c0(int *param_1,undefined *param_2);
void FUN_00419114(int *param_1,int *param_2);
void FUN_004191c0(int *param_1,int param_2,int param_3);
void FUN_00419270(int *param_1,undefined4 param_2,undefined4 param_3);
void FUN_00419354(int *param_1,undefined *param_2);
void FUN_0041940c(int *param_1,undefined *param_2);
void FUN_00419430(int param_1,int *param_2);
void FUN_004194b4(int *param_1,char *param_2);
void FUN_004195fc(int *param_1,undefined *param_2);
undefined1 FUN_0041975c(int param_1);
undefined1 FUN_00419774(int param_1);
void FUN_0041978c(int param_1,char param_2);
void FUN_004197a8(int param_1,char param_2);
void FUN_004197d0(int *param_1,char param_2);
void FUN_0041982c(int *param_1,undefined4 param_2);
int FUN_00419838(int *param_1,undefined4 param_2,int param_3);
void FUN_00419914(int *param_1,int param_2);
void FUN_004199dc(int param_1,int param_2,int param_3);
undefined1 FUN_00419a00(int *param_1,undefined4 param_2,uint *param_3);
void FUN_00419adc(int *param_1);
void FUN_00419b4c(int *param_1);
void FUN_00419b5c(int *param_1,int param_2,undefined4 param_3,undefined4 param_4);
void FUN_00419c28(int *param_1,int param_2,undefined4 *param_3);
void FUN_00419c84(int *param_1,int param_2,undefined4 param_3);
void FUN_00419cc4(int param_1,uint param_2,uint param_3,undefined *param_4);
void FUN_00419d74(int *param_1,char param_2);
undefined4 FUN_00419e24(int *param_1);
void FUN_00419e44(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
undefined4 FUN_00419e58(int *param_1);
void FUN_00419ea8(int *param_1,undefined4 param_2,undefined4 param_3);
void FUN_00419f10(void);
void FUN_0041a050(int *param_1,undefined4 param_2,int param_3);
void FUN_0041a088(int *param_1,undefined4 param_2,int param_3);
void FUN_0041a0c0(int *param_1,int *param_2,undefined4 param_3,uint param_4,int param_5);
void FUN_0041a1b4(int param_1,int *param_2);
void FUN_0041a214(int *param_1,undefined4 param_2);
int * FUN_0041a27c(int *param_1,char param_2,int param_3);
void FUN_0041a318(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
int * FUN_0041a340(int *param_1,char param_2,undefined *param_3,ushort param_4);
int * FUN_0041a384(int *param_1,char param_2,undefined *param_3,undefined4 param_4,ushort param_5);
void FUN_0041a480(int param_1,undefined4 param_2,undefined4 param_3);
uint FUN_0041a488(int param_1,undefined4 *param_2,uint param_3);
void FUN_0041a510(int *param_1);
void FUN_0041a528(int *param_1,int param_2);
LPCVOID FUN_0041a57c(int param_1,SIZE_T *param_2);
int * FUN_0041a658(int *param_1,char param_2,HMODULE param_3,LPCSTR param_4,undefined *param_5);
void FUN_0041a6b0(void);
void FUN_0041a720(int param_1,HMODULE param_2,LPCSTR param_3,LPCSTR param_4);
int * FUN_0041a7dc(int *param_1,char param_2,int param_3,int param_4);
void FUN_0041a824(int *param_1,char param_2);
void FUN_0041a84c(int param_1,undefined4 param_2);
int * FUN_0041a928(int *param_1,char param_2,int param_3,undefined4 *param_4,undefined4 *param_5,int param_6,int param_7);
bool FUN_0041a980(int param_1);
void FUN_0041a9d8(int param_1,int *param_2);
void FUN_0041aa5c(int param_1,char *param_2);
void FUN_0041ab24(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
void FUN_0041ab5c(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
void FUN_0041aba4(void);
void FUN_0041ad4c(int param_1,char *param_2);
void FUN_0041adf8(int param_1);
void FUN_0041ae7c(undefined4 *param_1);
void FUN_0041ae94(void);
void FUN_0041aea0(undefined4 param_1);
void FUN_0041aecc(int *param_1,char param_2);
void FUN_0041af08(int param_1,undefined4 param_2,uint param_3);
void FUN_0041af2c(int param_1,char *param_2,code *param_3,undefined4 param_4);
void FUN_0041af60(int param_1,char *param_2);
bool FUN_0041b03c(int param_1,undefined4 param_2,uint param_3);
int FUN_0041b070(int param_1,int *param_2,undefined4 *param_3);
void FUN_0041b0d8(int param_1);
void FUN_0041b154(int *param_1);
void FUN_0041b298(int param_1);
int FUN_0041b2d4(int param_1,undefined4 *param_2,int param_3);
int FUN_0041b368(int param_1);
void FUN_0041b380(int param_1,undefined4 param_2,uint param_3);
void FUN_0041b390(int param_1,undefined4 param_2,uint param_3);
void FUN_0041b3a4(int param_1,undefined4 *param_2,uint param_3);
void FUN_0041b3f0(int param_1);
bool FUN_0041b42c(int param_1,undefined4 param_2,uint param_3);
void FUN_0041b440(int param_1);
void FUN_0041b498(int param_1,int *param_2);
void FUN_0041b5c4(undefined4 param_1,undefined4 param_2,int param_3,int param_4);
void FUN_0041b6d4(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4);
void FUN_0041b774(undefined4 param_1,undefined4 param_2,int param_3,int param_4);
void FUN_0041b818(int *param_1,int *param_2);
void FUN_0041b9f0(int *param_1,int *param_2,uint param_3);
void FUN_0041ba60(int *param_1,int *param_2,uint param_3);
void FUN_0041bb30(int param_1,undefined4 param_2,uint param_3);
void FUN_0041bb70(int param_1,undefined4 param_2,uint param_3);
void FUN_0041bbb0(int param_1,undefined4 param_2,uint param_3);
void FUN_0041bbfc(int param_1,undefined4 param_2,uint param_3);
void FUN_0041bc3c(int param_1,int *param_2,uint param_3);
int FUN_0041bd3c(int param_1,undefined4 param_2,uint param_3);
int FUN_0041bda8(int param_1,undefined4 param_2,uint param_3);
void FUN_0041bdec(int param_1,undefined4 param_2,uint param_3);
void FUN_0041bdf4(int param_1,undefined4 param_2,uint param_3);
void FUN_0041bdfc(int param_1,byte *param_2,int *param_3);
void FUN_0041bf3c(undefined4 param_1,undefined4 param_2,uint param_3,int param_4);
void FUN_0041bf58(int *param_1,int *param_2);
void FUN_0041c138(int *param_1,undefined4 *param_2,undefined4 param_3);
void FUN_0041c180(int param_1,int param_2,undefined4 *param_3,int param_4);
void FUN_0041c1c0(undefined4 param_1,undefined4 param_2,uint param_3,int param_4);
void FUN_0041c280(int *param_1,int *param_2);
void FUN_0041c5a4(undefined4 *param_1,int *param_2);
void FUN_0041c604(int *param_1,int *param_2);
void FUN_0041c930(int param_1,int param_2);
void FUN_0041c9ec(int param_1,undefined4 param_2,int param_3);
void FUN_0041ca10(int param_1,int *param_2,uint param_3);
void FUN_0041ca4c(int param_1,int *param_2);
void FUN_0041cb08(int param_1,BSTR *param_2,uint param_3);
uint FUN_0041cbec(int param_1,undefined4 param_2,uint param_3);
void FUN_0041cc00(int param_1,undefined4 param_2,uint param_3);
void FUN_0041cc48(undefined4 param_1,undefined4 param_2,uint param_3,int param_4);
void FUN_0041cc70(int param_1,undefined4 param_2,int param_3,int param_4);
void FUN_0041cca0(undefined4 param_1,undefined4 param_2,uint param_3,int param_4);
void FUN_0041ccfc(int param_1,undefined4 param_2,uint param_3);
void FUN_0041ce98(int param_1,undefined4 param_2,uint param_3);
int FUN_0041d080(int param_1,int param_2,int param_3);
void FUN_0041d0f4(int param_1,uint param_2);
void FUN_0041d13c(undefined2 *param_1,undefined4 param_2,uint param_3,int param_4);
void FUN_0041d2fc(int param_1,VARIANTARG *param_2);
int FUN_0041d580(int param_1);
void FUN_0041d598(int param_1,int param_2);
void FUN_0041d5ec(int param_1,undefined4 *param_2,uint param_3);
void FUN_0041d638(int param_1,undefined4 param_2,undefined4 param_3,undefined *param_4,undefined4 param_5);
void FUN_0041d6c0(int param_1);
void FUN_0041d6d8(int param_1,char param_2,undefined4 param_3);
void FUN_0041d6ec(int param_1,undefined4 param_2);
void FUN_0041d73c(int param_1,int param_2,undefined4 param_3);
int FUN_0041d7dc(char *param_1,undefined4 param_2,undefined4 param_3,int param_4);
void FUN_0041d82c(int param_1,int *param_2,undefined4 param_3);
void FUN_0041d908(int param_1,int *param_2);
void FUN_0041dd30(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4);
void FUN_0041dd54(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4);
void FUN_0041dd78(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4);
void FUN_0041dd9c(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4);
void FUN_0041ddc0(int param_1,char *param_2);
void FUN_0041de84(int param_1,int param_2,undefined4 param_3);
void FUN_0041def8(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,int param_5);
void FUN_0041df50(int param_1,undefined4 param_2,undefined4 param_3);
void FUN_0041df58(int param_1,undefined4 param_2,undefined4 param_3);
void FUN_0041df60(int param_1,char param_2,int param_3);
void FUN_0041dfa4(undefined4 param_1,int *param_2);
undefined4 FUN_0041e06c(int param_1);
void FUN_0041e0b4(void);
void FUN_0041e108(uint param_1,undefined4 param_2,undefined4 param_3,int param_4);
void FUN_0041e19c(int param_1,int param_2,undefined4 param_3,int param_4);
bool FUN_0041e2ac(int param_1);
void FUN_0041e308(void);
undefined4 FUN_0041e3dc(int param_1);
void FUN_0041e434(void);
bool FUN_0041e480(int param_1);
void FUN_0041e4d0(void);
void FUN_0041e518(void);
void FUN_0041e5a0(void);
undefined4 FUN_0041e60c(int param_1,int param_2);
void FUN_0041e624(int param_1,int *param_2,undefined4 param_3,int param_4);
undefined4 FUN_0041e74c(int param_1,int param_2,undefined4 param_3,int param_4);
bool FUN_0041e794(int param_1);
void FUN_0041e7f4(void);
void FUN_0041ea24(void);
void FUN_0041eaf8(void);
undefined4 FUN_0041ec18(void);
void FUN_0041ec9c(void);
void FUN_0041ed50(void);
void FUN_0041eddc(void);
void FUN_0041ee4c(undefined4 param_1,int *param_2,undefined4 *param_3);
void FUN_0041ef64(int param_1,ushort *param_2);
void FUN_0041f35c(int param_1,undefined4 *param_2);
void FUN_0041f3b0(int param_1);
void FUN_0041f3c0(int param_1,undefined *param_2,uint param_3);
void FUN_0041f408(int param_1,uint *param_2,uint *param_3);
void FUN_0041f4a0(int param_1,uint *param_2);
void FUN_0041f4f4(int param_1,LPCWSTR param_2);
void FUN_0041f5a8(int param_1,undefined1 param_2,undefined4 param_3);
void FUN_0041f5bc(int param_1,char *param_2,int param_3);
int FUN_0041f5f8(byte *param_1,char *param_2,int param_3);
undefined4 FUN_0041f650(void);
int * FUN_0041f77c(int *param_1,char param_2,int *param_3);
void FUN_0041f7c8(int *param_1,char param_2);
void FUN_0041f84c(int param_1,int param_2,undefined4 param_3);
void FUN_0041f8e0(int param_1,int param_2,undefined4 param_3);
void FUN_0041f90c(int param_1,int param_2);
void FUN_0041f934(int *param_1,int *param_2,undefined4 param_3);
void FUN_0041f98c(int *param_1,int param_2);
void FUN_0041f9c4(int *param_1);
void FUN_0041fa1c(int param_1);
void FUN_0041fa58(int param_1,int param_2);
void FUN_0041fa7c(int param_1,int param_2);
void FUN_0041fa98(int param_1,int param_2,char param_3);
void FUN_0041faf4(int param_1,int *param_2);
undefined4 FUN_0041fb7c(void);
void FUN_0041fb80(void);
undefined4 FUN_0041fbac(void);
void FUN_0041fbcc(int param_1);
void FUN_0041fbdc(int *param_1,int *param_2,uint param_3);
void FUN_0041fbec(int param_1,int param_2,char *param_3,char *param_4);
int FUN_0041fc84(int param_1,char *param_2);
void FUN_0041fcd4(int *param_1,uint *param_2);
void FUN_0041fd60(int param_1,undefined4 *param_2);
void FUN_0041fd74(int param_1,int param_2);
undefined4 FUN_0041fda0(int param_1);
void FUN_0041fdb0(int param_1,int param_2);
void FUN_0041fe04(int param_1,undefined4 param_2,char param_3);
void FUN_0041fe54(int param_1,char param_2);
undefined4 FUN_0041fe9c(undefined4 param_1,int *param_2);
void FUN_0041ff04(void);
undefined4 FUN_0041ff0c(int *param_1,int *param_2,int *param_3);
undefined4 FUN_0041ff4c(int param_1);
undefined4 FUN_0041ff6c(int param_1);
void FUN_00420060(int param_1,int param_2);
undefined1 FUN_0042008c(void);
void FUN_00420090(void);
int * FUN_004200a4(int *param_1,char param_2,int *param_3);
void FUN_004200e8(int *param_1,char param_2);
undefined4 FUN_00420174(int param_1);
undefined4 FUN_00420190(int param_1);
void FUN_0042021c(int param_1,int param_2);
void FUN_00420228(int param_1,int param_2);
int * FUN_00420268(int *param_1,char param_2,int param_3,undefined1 param_4);
undefined4 FUN_004202e8(int param_1,int param_2,undefined4 param_3,undefined4 *param_4);
undefined4 FUN_004206b8(void);
undefined4 FUN_004206c4(void);
undefined4 FUN_004206d0(int param_1,int param_2);
undefined4 FUN_0042074c(undefined4 *param_1);
void FUN_00420764(void);
int FUN_004207f8(int param_1,int param_2);
undefined1 * FUN_00420800(undefined4 param_1,undefined4 param_2);
void FUN_00420898(int param_1);
HWND FUN_004208bc(void);
void FUN_00420970(HWND param_1);
int FUN_00420b9c(int param_1,int param_2);
int FUN_00420ba4(int param_1,int param_2);
void FUN_00420bac(void);
int * FUN_00420d14(int *param_1,char param_2,undefined4 param_3);
void FUN_00420d50(undefined4 *param_1,int param_2);
void FUN_00420d64(int *param_1,int param_2,int param_3);
int * FUN_00420db0(int *param_1,char param_2,undefined4 param_3);
void FUN_00422194(HGDIOBJ param_1);
uint FUN_00422208(byte *param_1,int param_2);
int * FUN_0042221c(int *param_1,char param_2,undefined4 param_3);
void FUN_0042227c(int param_1);
void FUN_00422288(int param_1);
void FUN_00422294(int param_1,byte *param_2);
void FUN_00422378(int param_1,undefined4 *param_2);
void FUN_00422428(int param_1,int *param_2,byte *param_3);
void FUN_004224a0(int param_1,int *param_2,undefined4 *param_3);
void FUN_0042250c(int param_1);
void FUN_00422578(void);
void FUN_00422a24(uint param_1);
void FUN_00422a68(int param_1);
void FUN_00422a78(int param_1);
void FUN_00422c5c(HANDLE param_1,undefined4 *param_2);
int * FUN_00422d10(int *param_1,char param_2,undefined4 param_3);
void FUN_00422e7c(int param_1,undefined4 *param_2);
void FUN_00422e94(int *param_1,byte *param_2);
void FUN_00422ee4(int *param_1,int param_2,undefined4 param_3);
void FUN_00422ef8(int param_1);
void FUN_004230a0(int *param_1,HANDLE param_2);
undefined4 FUN_004230c4(int param_1);
void FUN_004230cc(int *param_1,undefined4 param_2);
void FUN_004230f4(int param_1,int *param_2);
void FUN_0042310c(int *param_1,undefined4 *param_2);
int FUN_00423168(int param_1);
void FUN_00423184(int *param_1,int param_2);
undefined1 FUN_004231a4(int param_1);
void FUN_004231b0(int *param_1,undefined1 param_2);
undefined4 FUN_004231dc(int param_1);
void FUN_004231e4(int *param_1,undefined1 param_2);
undefined4 FUN_0042320c(int param_1);
void FUN_00423214(int *param_1,undefined1 param_2);
int * FUN_0042323c(int *param_1,char param_2,undefined4 param_3);
void FUN_00423360(int param_1,undefined4 *param_2);
void FUN_00423378(int *param_1,byte *param_2);
void FUN_004233d0(int *param_1,undefined4 param_2);
undefined4 FUN_004233f8(int param_1);
void FUN_00423490(int *param_1,undefined4 param_2,undefined4 param_3);
void FUN_004234ac(int *param_1,undefined1 param_2);
void FUN_004234dc(int *param_1,int param_2);
int * FUN_00423508(int *param_1,char param_2,undefined4 param_3);
void FUN_00423618(int param_1,undefined4 *param_2);
void FUN_00423634(int *param_1,byte *param_2);
void FUN_00423684(int *param_1,undefined4 param_2);
undefined4 FUN_004236a8(int param_1);
void FUN_004236b0(int *param_1,undefined4 param_2);
undefined4 FUN_004236e4(int param_1);
undefined4 FUN_004237c4(int param_1);
void FUN_004237cc(int *param_1,char param_2);
int * FUN_00423800(int *param_1,char param_2,undefined4 param_3);
void FUN_004238c4(int *param_1,char param_2);
void FUN_00423920(int *param_1,int *param_2,int *param_3,uint param_4,int *param_5);
void FUN_00423be0(int *param_1,int *param_2,int *param_3,int *param_4);
void FUN_00423c68(int *param_1,int param_2,int param_3,int *param_4);
void FUN_00423d14(int *param_1,RECT *param_2);
void FUN_00423d50(int *param_1,RECT *param_2);
void FUN_00423d8c(int *param_1,int param_2,int param_3);
void FUN_00423dc4(int param_1);
void FUN_00423dec(int *param_1,int param_2,int param_3);
void FUN_00423e18(int *param_1,POINT *param_2,int param_3);
void FUN_00423e50(int *param_1,int param_2,int param_3,int param_4,int param_5);
void FUN_00423e98(int param_1);
void FUN_00423ea0(int *param_1,undefined4 param_2,int *param_3);
undefined4 FUN_00423edc(int *param_1);
void FUN_00423f08(int *param_1,int param_2,int param_3,undefined *param_4);
void FUN_00423f94(int *param_1,undefined *param_2,LPSIZE param_3);
LONG FUN_00423fd8(int *param_1,undefined *param_2);
LONG FUN_00423ff4(int *param_1,undefined *param_2);
void FUN_00424014(int param_1);
void FUN_00424070(int param_1);
void FUN_00424098(int param_1);
void FUN_004240b4(int param_1);
void FUN_004240c0(int *param_1,LPPOINT param_2);
void FUN_004240e4(int *param_1,int *param_2);
void FUN_00424104(int *param_1,int param_2,int param_3);
void FUN_00424130(int *param_1,int param_2,int param_3,uint param_4);
int FUN_00424178(int *param_1);
void FUN_00424198(int param_1);
void FUN_004241f4(void);
void FUN_004241f8(int *param_1,int param_2);
void FUN_0042424c(int *param_1,byte param_2);
void FUN_004242c0(int param_1);
void FUN_004242e8(int param_1);
void FUN_00424314(int param_1);
void FUN_00424344(int param_1);
void FUN_00424420(undefined4 *param_1);
void FUN_00424438(undefined4 *param_1);
void FUN_00424450(void);
void FUN_0042445c(void);
void FUN_00424468(void);
void FUN_00424474(void);
void FUN_004244c8(void);
int FUN_00424570(int param_1);
void FUN_00424580(HANDLE param_1,int *param_2,char param_3);
int FUN_004246e0(short param_1);
int FUN_00424700(int param_1,int param_2,int param_3);
void FUN_00424714(HDC param_1,int param_2,int param_3,int param_4,int param_5,HDC param_6,int param_7,int param_8,int param_9,int param_10,HDC param_11,int param_12,int param_13);
void FUN_004249a8(int param_1);
void FUN_004249e0(int param_1,int *param_2);
void FUN_00424a58(int param_1,int param_2);
void FUN_00424ab0(undefined4 *param_1);
int FUN_00424bc8(int param_1);
HPALETTE FUN_00424c60(HGDIOBJ param_1,undefined4 *param_2,int param_3);
UINT FUN_00424d04(HPALETTE param_1,LPPALETTEENTRY param_2,int param_3);
void FUN_00424d58(BITMAPINFOHEADER *param_1,undefined4 *param_2,undefined4 param_3,int *param_4);
int FUN_00424f14(int param_1);
undefined4 FUN_00424f20(byte *param_1,byte *param_2,undefined4 param_3,int param_4);
void FUN_00424fb0(int *param_1,undefined4 param_2,int param_3,int *param_4,int *param_5);
ushort FUN_004252b8(ushort *param_1);
void FUN_004252d0(HANDLE param_1,uint *param_2,uint param_3);
void FUN_004253b4(HANDLE param_1,int *param_2,undefined4 *param_3,uint param_4);
void FUN_00425418(HANDLE param_1,int *param_2,undefined4 *param_3);
void FUN_00425420(HBITMAP param_1,HPALETTE param_2,LPBITMAPINFO param_3,uint param_4,LPVOID param_5);
void FUN_004254d0(HBITMAP param_1,HPALETTE param_2,LPBITMAPINFO param_3,LPVOID param_4);
void FUN_004254e4(void);
void FUN_004254e8(int param_1);
void FUN_004254f4(int *param_1,HICON param_2,char param_3);
int * FUN_004256f0(int *param_1,char param_2,undefined4 param_3);
void FUN_00425728(int param_1);
uint FUN_00425740(int param_1);
void FUN_00425798(int *param_1,int *param_2);
void FUN_0042598c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined1 param_6,undefined1 param_7);
void FUN_004259c0(int *param_1,undefined *param_2);
void FUN_00425ad4(int *param_1,char param_2);
void FUN_00425c54(int *param_1,undefined *param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5);
void FUN_00425ce8(undefined4 *param_1,uint *param_2);
int * FUN_00425dd8(int *param_1,char param_2,undefined4 param_3);
void FUN_00425e84(int param_1,uint param_2,int param_3);
int FUN_00425eec(void);
int * FUN_00425f0c(undefined4 param_1,undefined4 param_2,undefined4 param_3);
int * FUN_00425f2c(int *param_1,char param_2,undefined4 param_3);
void FUN_00425fd0(int *param_1,int param_2);
int FUN_0042604c(int *param_1);
void FUN_00426064(int *param_1,undefined4 *param_2);
void FUN_004261a0(int param_1);
bool FUN_00426360(int param_1);
void FUN_004263dc(undefined4 param_1,int *param_2);
undefined4 FUN_00426428(int param_1);
undefined4 FUN_00426440(int param_1);
void FUN_004265a4(int *param_1,int *param_2,LONG *param_3);
void FUN_004267e4(int param_1);
void FUN_0042680c(int *param_1,int *param_2,int param_3);
void FUN_00426878(int param_1,int *param_2);
void FUN_00426948(int param_1,int *param_2,int param_3);
void FUN_00426be4(int *param_1,int param_2,undefined4 param_3);
void FUN_00426c20(int *param_1,int param_2,undefined4 param_3);
undefined4 FUN_00426cd4(undefined4 param_1,int *param_2);
void FUN_00426d34(int param_1,undefined4 param_2,undefined4 param_3);
void FUN_00426db8(int param_1,int *param_2);
void FUN_00426e3c(int param_1,int *param_2);
void FUN_00426ec8(int param_1,int *param_2);
void FUN_00427010(int *param_1);
void FUN_00427094(int param_1,undefined2 *param_2,undefined4 *param_3,undefined4 *param_4);
void FUN_00427164(void);
void FUN_00427210(int param_1);
int * FUN_0042728c(int *param_1,char param_2,int param_3);
void FUN_004272f4(int *param_1);
void FUN_00427394(int *param_1);
void FUN_00427480(int param_1);
void FUN_00427484(int *param_1);
void FUN_0042754c(HGDIOBJ param_1,HPALETTE param_2,int param_3);
void FUN_00427608(int param_1);
HPALETTE FUN_00427654(HBITMAP param_1,HPALETTE param_2,HPALETTE param_3,int param_4,int param_5);
HPALETTE FUN_00427cb8(HPALETTE param_1);
BOOL FUN_00427d1c(HPALETTE param_1,HPALETTE param_2,COLORREF param_3);
int * FUN_00427f28(int *param_1,char param_2,undefined4 param_3);
void FUN_00427fcc(int *param_1,int *param_2);
void FUN_004280bc(int param_1,HBITMAP param_2,HPALETTE param_3,undefined4 *param_4);
void FUN_0042817c(int *param_1,undefined4 param_2,undefined4 param_3);
void FUN_004281ac(int *param_1,undefined4 param_2,undefined4 param_3);
void FUN_00428470(int *param_1,undefined4 param_2,undefined4 param_3);
int FUN_004284f0(int *param_1,undefined4 param_2,undefined4 param_3);
undefined4 FUN_0042855c(int param_1);
undefined4 FUN_004285ac(int param_1);
uint FUN_004285dc(int *param_1);
void FUN_0042862c(int param_1);
void FUN_004286a0(int param_1);
void FUN_004286b0(int *param_1,undefined4 param_2,undefined4 param_3);
void FUN_00428750(int *param_1,uint param_2);
void FUN_00428830(int *param_1);
void FUN_00428890(int param_1);
void FUN_00428948(int *param_1,short param_2,HBITMAP param_3,HPALETTE param_4);
void FUN_004289f0(undefined4 param_1,HMODULE param_2,undefined *param_3);
void FUN_00428a50(int param_1,undefined4 param_2,undefined4 param_3,int *param_4,undefined1 param_5,undefined4 *param_6);
void FUN_00428b78(undefined4 param_1,int *param_2,int param_3,undefined1 *param_4);
void FUN_004290e0(int param_1,int *param_2,int param_3);
void FUN_00429150(int *param_1,HANDLE param_2);
void FUN_0042934c(int *param_1,int param_2,undefined4 param_3);
void FUN_004293a0(int *param_1,undefined4 param_2,undefined4 param_3);
void FUN_004294f4(int *param_1,int param_2,undefined4 param_3);
void FUN_004295a0(int *param_1,int *param_2,char param_3);
void FUN_00429860(int *param_1,undefined2 *param_2,undefined4 *param_3,undefined4 *param_4);
int * FUN_00429948(int *param_1,char param_2,undefined4 param_3);
undefined4 FUN_00429a84(int param_1,undefined4 param_2,undefined4 param_3);
void FUN_00429ac0(int param_1,undefined4 param_2,undefined4 param_3);
void FUN_00429b38(int param_1,undefined4 param_2,undefined4 param_3);
void FUN_00429ca4(int param_1,undefined4 param_2,undefined4 param_3);
void FUN_00429d18(int *param_1,undefined4 param_2);
void FUN_00429db8(void);
BYTE FUN_00429df0(void);
void FUN_00429e34(void);
int * FUN_00429f00(int *param_1,char param_2,undefined4 param_3);
void FUN_00429f64(int param_1);
void FUN_00429f70(int param_1);
void FUN_00429f7c(int param_1,int param_2,uint param_3);
int * FUN_0042a030(undefined4 param_1,undefined4 param_2,uint param_3);
void FUN_0042a130(int param_1);
undefined4 FUN_0042a1a8(uint param_1,uint param_2);
void __stdcall InitCommonControls(void);
void FUN_0042a3b8(void);
int FUN_0042a418(void);
HIMAGELIST __stdcall ImageList_Create(int cx,int cy,UINT flags,int cInitial,int cGrow);
BOOL __stdcall ImageList_Destroy(HIMAGELIST himl);
int __stdcall ImageList_GetImageCount(HIMAGELIST himl);
int __stdcall ImageList_Add(HIMAGELIST himl,HBITMAP hbmImage,HBITMAP hbmMask);
int __stdcall ImageList_ReplaceIcon(HIMAGELIST himl,int i,HICON hicon);
COLORREF __stdcall ImageList_SetBkColor(HIMAGELIST himl,COLORREF clrBk);
COLORREF __stdcall ImageList_GetBkColor(HIMAGELIST himl);
void FUN_0042a484(HIMAGELIST param_1,HICON param_2);
int FUN_0042a490(int param_1);
BOOL __stdcall ImageList_Draw(HIMAGELIST himl,int i,HDC hdcDst,int x,int y,UINT fStyle);
BOOL __stdcall ImageList_Replace(HIMAGELIST himl,int i,HBITMAP hbmImage,HBITMAP hbmMask);
BOOL __stdcall ImageList_DrawEx(HIMAGELIST himl,int i,HDC hdcDst,int x,int y,int dx,int dy,COLORREF rgbBk,COLORREF rgbFg,UINT fStyle);
BOOL __stdcall ImageList_Remove(HIMAGELIST himl,int i);
BOOL __stdcall ImageList_BeginDrag(HIMAGELIST himlTrack,int iTrack,int dxHotspot,int dyHotspot);
void __stdcall ImageList_EndDrag(void);
BOOL __stdcall ImageList_DragEnter(HWND hwndLock,int x,int y);
BOOL __stdcall ImageList_DragLeave(HWND hwndLock);
BOOL __stdcall ImageList_DragMove(int x,int y);
BOOL __stdcall ImageList_SetDragCursorImage(HIMAGELIST himlDrag,int iDrag,int dxHotspot,int dyHotspot);
BOOL __stdcall ImageList_DragShowNolock(BOOL fShow);
HIMAGELIST __stdcall ImageList_GetDragImage(POINT *ppt,POINT *pptHotspot);
HIMAGELIST __stdcall ImageList_Read(IStream *pstm);
BOOL __stdcall ImageList_Write(HIMAGELIST himl,IStream *pstm);
BOOL __stdcall ImageList_GetIconSize(HIMAGELIST himl,int *cx,int *cy);
BOOL __stdcall ImageList_SetIconSize(HIMAGELIST himl,int cx,int cy);
void FUN_0042a514(HWND param_1,LPARAM param_2);
void FUN_0042a52c(HWND param_1,LPARAM param_2,WPARAM param_3);
void FUN_0042a548(HWND param_1);
int FUN_0042a558(int param_1);
void FUN_0042a55c(HWND param_1,LPARAM param_2);
void FUN_0042a574(HWND param_1,LPARAM param_2);
void FUN_0042a58c(HWND param_1,LPARAM param_2);
void FUN_0042a5a4(HWND param_1,WPARAM param_2);
void FUN_0042a5bc(HWND param_1);
void FUN_0042a5d0(HWND param_1,WPARAM param_2,uint param_3);
void FUN_0042a5f4(HWND param_1,WPARAM param_2,LPARAM param_3);
void FUN_0042a604(HWND param_1,WPARAM param_2,undefined4 *param_3,undefined4 param_4);
void FUN_0042a640(HWND param_1,LPARAM param_2);
void FUN_0042a650(HWND param_1,WPARAM param_2,LPARAM param_3);
void FUN_0042a66c(HWND param_1,WPARAM param_2);
void FUN_0042a69c(HWND param_1);
void FUN_0042a6b0(HWND param_1,WPARAM param_2,LPARAM param_3);
void FUN_0042a6cc(HWND param_1,WPARAM param_2,LPARAM param_3);
void FUN_0042a6dc(HWND param_1,WPARAM param_2);
void FUN_0042a6f4(HWND param_1,WPARAM param_2);
void FUN_0042a70c(HWND param_1,WPARAM param_2,uint param_3);
void FUN_0042a730(HWND param_1,WPARAM param_2,LPARAM param_3);
void FUN_0042a74c(HWND param_1,LPARAM param_2);
void FUN_0042a764(HWND param_1,LPARAM param_2);
void FUN_0042a77c(HWND param_1);
void FUN_0042a78c(HWND param_1,LPARAM param_2);
int FUN_0042a7a4(HWND param_1,WPARAM param_2);
void FUN_0042a7c4(HWND param_1,WPARAM param_2,undefined4 param_3,undefined4 param_4);
void FUN_0042a7f4(HWND param_1,WPARAM param_2,LPARAM param_3);
int FUN_0042a804(HWND param_1,WPARAM param_2);
void FUN_0042a824(HWND param_1,WPARAM param_2,uint param_3);
void FUN_0042a850(HWND param_1,WPARAM param_2,undefined4 param_3,undefined4 param_4);
void FUN_0042a880(HWND param_1,WPARAM param_2);
void FUN_0042a890(HWND param_1,WPARAM param_2,LPARAM param_3);
void FUN_0042a8a0(HWND param_1,LPARAM param_2,WPARAM param_3);
void FUN_0042a8bc(HWND param_1);
void FUN_0042a8cc(HWND param_1,LPARAM param_2);
void FUN_0042a8e4(HWND param_1,WPARAM param_2,LPARAM param_3);
void FUN_0042a900(HWND param_1,WPARAM param_2,LPARAM param_3);
void FUN_0042a91c(HWND param_1,WPARAM param_2,LPARAM param_3);
void FUN_0042a958(HWND param_1,LPARAM param_2);
void FUN_0042a970(HWND param_1,LPARAM param_2);
void FUN_0042a988(HWND param_1);
void FUN_0042a9a0(HWND param_1,LPARAM param_2,WPARAM param_3);
void FUN_0042a9bc(HWND param_1,undefined4 param_2,undefined4 *param_3,WPARAM param_4);
void FUN_0042a9e0(HWND param_1);
void FUN_0042a9f0(HWND param_1);
void FUN_0042aa00(HWND param_1,WPARAM param_2);
void FUN_0042aa18(HWND param_1,LPARAM param_2,WPARAM param_3);
void FUN_0042aa34(HWND param_1,LPARAM param_2,WPARAM param_3);
void FUN_0042aa50(HWND param_1,LPARAM param_2);
void FUN_0042aa5c(HWND param_1,LPARAM param_2);
void FUN_0042aa68(HWND param_1,LPARAM param_2);
void FUN_0042aa74(HWND param_1,LPARAM param_2);
void FUN_0042aa80(HWND param_1);
void FUN_0042aa90(HWND param_1,LPARAM param_2);
void FUN_0042aa9c(HWND param_1,LPARAM param_2);
void FUN_0042aaa8(HWND param_1);
void FUN_0042aab8(HWND param_1);
void FUN_0042aac8(HWND param_1);
void FUN_0042aad4(HWND param_1,LPARAM param_2,WPARAM param_3);
void FUN_0042aaf0(HWND param_1,LPARAM param_2);
void FUN_0042aafc(HWND param_1,LPARAM param_2);
void FUN_0042ab08(HWND param_1,LPARAM param_2);
void FUN_0042ab14(HWND param_1,LPARAM param_2);
void FUN_0042ab2c(HWND param_1,LPARAM param_2);
void FUN_0042ab44(HWND param_1);
void FUN_0042ab58(HWND param_1,LPARAM param_2);
void FUN_0042ab70(HWND param_1,LPARAM param_2);
void FUN_0042ab88(HWND param_1,LPARAM param_2,WPARAM param_3);
void FUN_0042aba4(HWND param_1,LPARAM param_2);
void FUN_0042abbc(HWND param_1,LPARAM param_2);
void FUN_0042abd4(void);
void FUN_0042ac0c(byte param_1,undefined4 param_2,undefined *param_3);
undefined4 FUN_0042ad7c(int *param_1,uint param_2);
void FUN_0042b2e8(void);
void FUN_0042b394(void);
void FUN_0042b790(int *param_1,int *param_2);
undefined4 FUN_0042b828(int *param_1,undefined4 param_2,undefined4 param_3);
void FUN_0042b888(int param_1,char param_2,int *param_3);
int * FUN_0042b904(int *param_1,char param_2,undefined4 param_3);
void FUN_0042b978(undefined4 *param_1,int *param_2,int *param_3);
void FUN_0042bab0(int param_1);
void FUN_0042baf8(int param_1);
void FUN_0042bb28(int param_1,undefined4 param_2,undefined4 param_3);
void FUN_0042bcc8(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,undefined2 param_5);
void FUN_0042bfe4(int param_1,undefined4 param_2,undefined4 *param_3);
void FUN_0042c260(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,short param_5);
void FUN_0042c334(int param_1,int param_2);
void FUN_0042c3f8(void);
BOOL __stdcall ClosePrinter(HANDLE hPrinter);
LONG __stdcall DocumentPropertiesA(HWND hWnd,HANDLE hPrinter,LPSTR pDeviceName,PDEVMODEA pDevModeOutput,PDEVMODEA pDevModeInput,DWORD fMode);
BOOL __stdcall EnumPrintersA(DWORD Flags,LPSTR Name,DWORD Level,LPBYTE pPrinterEnum,DWORD cbBuf,LPDWORD pcbNeeded,LPDWORD pcReturned);
BOOL __stdcall OpenPrinterA(LPSTR pPrinterName,LPHANDLE phPrinter,LPPRINTER_DEFAULTSA pDefault);
char * FUN_0042c55c(int *param_1);
void FUN_0042c590(undefined4 *param_1);
int proc_0042c5a8(undefined4 param_1,undefined4 param_2,uint param_3);
int * FUN_0042c64c(int *param_1,char param_2,char *param_3,char *param_4,char *param_5);
void FUN_0042c6ac(int param_1,undefined4 param_2,char *param_3,char *param_4);
int * FUN_0042c820(int *param_1,char param_2,int param_3);
void FUN_0042c85c(int *param_1);
void FUN_0042c880(int param_1);
void FUN_0042c8a0(int param_1);
int * FUN_0042c8e8(int *param_1,char param_2,undefined4 param_3);
void FUN_0042c9a0(int param_1,char param_2);
void FUN_0042cacc(int param_1,char param_2);
void FUN_0042cb3c(int param_1);
void FUN_0042cbc4(int param_1);
void FUN_0042cbf8(int param_1);
void FUN_0042cc28(int param_1,uint param_2);
void FUN_0042cc64(int param_1,char *param_2,char *param_3,HGLOBAL param_4,char *param_5);
undefined4 FUN_0042ceac(int param_1);
undefined4 FUN_0042cecc(int param_1);
void FUN_0042cee0(int param_1);
void FUN_0042cefc(int param_1);
undefined4 FUN_0042cf18(int param_1);
void FUN_0042cf30(int param_1,undefined4 param_2,undefined4 param_3);
void FUN_0042d170(int param_1);
void FUN_0042d370(int param_1);
void FUN_0042d3ac(int param_1);
int * FUN_0042d3b8(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_0042d3d8(void);
int FUN_0042d41c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
int FUN_0042d450(undefined4 param_1);
void FUN_0042d478(void);
undefined4 FUN_00432cfc(int param_1);
void FUN_004330f4(int *param_1);
void FUN_00433380(int *param_1);
void FUN_00433394(int *param_1,undefined4 param_2);
int * FUN_004333c4(int *param_1,char param_2,int *param_3);
void FUN_004336b0(int *param_1);
uint FUN_004337d4(int param_1);
void FUN_004337e0(int param_1,int param_2,undefined4 param_3);
void FUN_004337f4(int *param_1,char param_2);
void FUN_0043386c(int *param_1,undefined4 param_2,undefined4 param_3);
void FUN_00433894(int *param_1,int param_2,char param_3);
void FUN_004338f8(int *param_1,int param_2);
void FUN_004339b8(int param_1);
int * FUN_004339dc(int *param_1,char param_2,int *param_3);
void FUN_00433ab8(int *param_1,char param_2);
void FUN_00433b04(int *param_1,int param_2);
undefined1 FUN_00433b48(int *param_1);
void FUN_00433b80(int *param_1,byte param_2);
void FUN_00433c40(int *param_1,byte param_2);
void FUN_00433d54(int *param_1);
void FUN_00433d70(int *param_1);
void FUN_00433d8c(int *param_1,char *param_2,int param_3);
void FUN_00433e28(int *param_1,int *param_2);
void FUN_00433ec4(int *param_1,undefined *param_2);
void FUN_00433eec(int *param_1,int *param_2);
void FUN_00434018(int *param_1);
void FUN_004340bc(int *param_1);
void FUN_004340d8(int *param_1);
void FUN_00434114(int *param_1);
void FUN_004341bc(int param_1);
void FUN_0043428c(int *param_1);
LRESULT FUN_00434364(int param_1);
void FUN_00434418(int param_1,WPARAM param_2,undefined *param_3);
void FUN_0043448c(int param_1,WPARAM param_2,undefined4 *param_3);
void FUN_0043469c(int param_1,byte *param_2);
int * FUN_00434774(int *param_1,char param_2,int *param_3);
void FUN_004347f8(int *param_1,char param_2);
void FUN_00434828(int *param_1,int *param_2);
void FUN_0043488c(int param_1,LPARAM *param_2);
void FUN_00434a00(int *param_1);
void FUN_00434ac4(int param_1);
void FUN_00434ae0(int param_1,WPARAM param_2);
int * FUN_00434db0(int *param_1,char param_2,int *param_3);
void FUN_00434ea4(int *param_1,char param_2);
void FUN_00434f00(int param_1);
void FUN_00434f50(int *param_1);
bool FUN_00434f70(int *param_1);
void FUN_00434f94(int *param_1,byte param_2);
void FUN_00435150(int *param_1,int param_2);
void FUN_004352a4(int *param_1,UINT *param_2,HWND param_3,WNDPROC param_4);
void FUN_00435580(int *param_1,uint *param_2,undefined4 param_3);
void FUN_00435820(int param_1,undefined4 param_2,int *param_3,undefined2 param_4);
void FUN_004359a0(int *param_1);
void FUN_004359d8(int *param_1);
void FUN_00435b88(int param_1,undefined4 param_2);
void FUN_00435b90(int param_1,int param_2,undefined4 param_3);
int * FUN_00435be8(int *param_1,char param_2,int *param_3);
void FUN_00435c60(int *param_1,char param_2);
void FUN_00435cb0(int param_1,char param_2);
void FUN_00435d78(int *param_1);
void FUN_00435eb8(int *param_1);
undefined4 FUN_00435f5c(uint *param_1,uint *param_2,undefined4 param_3,int param_4);
void FUN_00435f88(void);
void FUN_00436354(int *param_1,undefined4 *param_2);
void FUN_00436508(int *param_1,int param_2);
int * FUN_004369dc(int *param_1,char param_2,int *param_3);
undefined4 FUN_00436a84(int param_1);
int * FUN_00436b20(int *param_1,char param_2,int *param_3);
void FUN_00436bac(int *param_1,char param_2);
void FUN_00436c00(int *param_1,undefined1 param_2);
void FUN_00436c9c(int *param_1,int param_2);
void FUN_00436d90(int *param_1,int param_2);
void FUN_00436f18(int *param_1,char param_2);
void FUN_004370d8(int param_1,WPARAM param_2,int *param_3);
void FUN_00437240(int *param_1,undefined4 param_2,undefined4 param_3);
void FUN_0043742c(int *param_1,int param_2,int param_3);
int * FUN_00437724(int *param_1,char param_2,int *param_3);
void FUN_00437810(int *param_1,char param_2);
void FUN_00437b68(int *param_1);
void FUN_00437bbc(int *param_1,int param_2);
void FUN_00437cdc(int *param_1,char param_2);
void FUN_00437d48(int param_1,int param_2);
bool FUN_00437d90(int *param_1,WPARAM param_2);
void FUN_00437de0(int *param_1,WPARAM param_2,byte param_3);
void FUN_00437e90(int param_1,char param_2);
void FUN_00437eb4(int param_1,char param_2);
void FUN_00437ef0(int *param_1);
void FUN_00437f0c(int *param_1,int param_2);
void FUN_00438078(int *param_1,WPARAM param_2);
int FUN_004380e8(int *param_1,POINT *param_2,char param_3);
void FUN_00438174(int *param_1,int *param_2);
void FUN_0043828c(int *param_1);
void FUN_0043835c(int *param_1);
void FUN_00438850(int *param_1,int param_2);
void FUN_00438968(int *param_1);
void FUN_00438b94(int *param_1,WPARAM param_2);
void FUN_00438c78(int param_1,undefined4 param_2,undefined4 param_3);
undefined4 FUN_00438c98(int param_1,undefined4 param_2,undefined4 param_3);
undefined4 FUN_00438cc0(int param_1,undefined4 param_2);
void FUN_00438ce4(int *param_1);
LPITEMIDLIST __stdcall SHBrowseForFolderA(LPBROWSEINFOA lpbi);
HRESULT __stdcall SHGetDesktopFolder(IShellFolder **ppshf);
HRESULT __stdcall SHGetMalloc(IMalloc **ppMalloc);
BOOL __stdcall SHGetPathFromIDListA(LPCITEMIDLIST pidl,LPSTR pszPath);
void FUN_00439fe8(void);
void FUN_0043a0ac(int param_1,LPRECT param_2,undefined4 param_3,int param_4);
int * FUN_0043a10c(int *param_1,char param_2,int *param_3);
void FUN_0043a1f0(int *param_1,LPRECT param_2);
void FUN_0043a31c(int *param_1);
undefined4 FUN_0043a3dc(int *param_1);
void FUN_0043a474(int *param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined1 param_7);
int * FUN_0043a6c4(int *param_1,char param_2,int *param_3);
void FUN_0043a74c(int *param_1,UINT *param_2,undefined4 param_3);
void FUN_0043a7c0(int param_1);
void FUN_0043a84c(int param_1,char param_2);
void FUN_0043a85c(int param_1,int param_2);
void FUN_0043a86c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
int * FUN_0043a898(int *param_1,char param_2,int *param_3);
void FUN_0043aae0(char param_1,undefined4 param_2,undefined4 param_3,int param_4);
void FUN_0043aca4(int *param_1,undefined1 param_2);
void FUN_0043acc0(int *param_1,int param_2);
void FUN_0043ad6c(int *param_1,int param_2);
void FUN_0043aed4(void);
void FUN_0043af28(void);
void FUN_0043b6d4(HWND param_1);
undefined4 FUN_0043b788(HWND param_1,int param_2,WPARAM param_3,LPARAM param_4);
int * FUN_0043b7f0(int *param_1,char param_2,int *param_3);
void FUN_0043b838(int *param_1,char param_2);
void FUN_0043b918(int *param_1);
undefined4 FUN_0043ba60(void);
int * FUN_0043bae4(int *param_1,char param_2,int *param_3);
void FUN_0043bb60(int *param_1,char param_2);
undefined4 FUN_0043bb98(int *param_1,int param_2);
void FUN_0043bbc0(int *param_1,int *param_2,uint param_3);
void FUN_0043bd24(int param_1);
void FUN_0043bdc4(undefined4 *param_1,int *param_2);
void FUN_0043be14(int *param_1,undefined4 param_2);
char * FUN_0043c0d8(byte *param_1,int *param_2,undefined4 param_3,int param_4);
void FUN_0043c120(byte *param_1,undefined4 param_2,undefined4 param_3,int param_4);
void FUN_0043c220(int param_1,int param_2);
void FUN_0043c2d8(int param_1,LPRECT param_2);
void FUN_0043c32c(int param_1,int *param_2);
undefined4 FUN_0043c384(int param_1);
void FUN_0043c394(int param_1,undefined *param_2);
bool FUN_0043c3ec(int *param_1);
bool FUN_0043c420(int *param_1);
void FUN_0043c438(int *param_1,LPSIZE param_2);
int * FUN_0043c600(int *param_1,char param_2,int *param_3);
void FUN_0043c6fc(undefined4 param_1,undefined *param_2);
void FUN_0043c838(int param_1,int *param_2);
void FUN_0043cad8(uint *param_1,byte param_2,ushort param_3);
void FUN_0043d07c(uint *param_1,byte param_2,ushort param_3,undefined4 param_4);
void FUN_0043d09c(uint *param_1,byte param_2,ushort param_3,int param_4,int param_5,undefined4 param_6);
void FUN_0043d0c0(uint *param_1,byte param_2,ushort param_3,undefined4 *param_4,int param_5,int param_6,undefined4 param_7);
void FUN_0043d174(uint *param_1);
void FUN_0043d180(uint *param_1,int param_2,int param_3);
void FUN_0043d198(uint *param_1,uint *param_2,int *param_3);
void FUN_0043d4b4(uint *param_1,uint *param_2,undefined4 *param_3,int *param_4);
void FUN_0043d4e4(void);
int * FUN_0043d880(int *param_1,char param_2,int *param_3);
int * FUN_0043da98(int *param_1,char param_2,undefined4 param_3);
void FUN_0043dad0(int param_1,int param_2,int *param_3);
void FUN_0043db60(int param_1);
void FUN_0043db8c(undefined4 param_1,int *param_2);
void FUN_0043dba0(int param_1,undefined4 param_2);
void FUN_0043dc18(undefined4 param_1,undefined4 param_2,undefined4 param_3);
undefined1 FUN_0043dcbc(void);
void FUN_0043dcc0(int param_1);
void FUN_0043dd48(int param_1,undefined4 param_2);
void FUN_0043de74(int param_1,undefined4 param_2);
void FUN_0043de78(int param_1);
void FUN_0043dec4(int param_1,undefined4 param_2);
void FUN_0043df2c(int param_1,undefined4 param_2);
void FUN_0043e040(int param_1,undefined4 param_2,int param_3);
void FUN_0043e0b4(int param_1,ULONG_PTR param_2,int param_3);
void FUN_0043e144(int param_1,HWND param_2,int param_3,ULONG_PTR param_4,ushort param_5);
int lpEnumFunc_0043e254(void);
int lpfn_0043e2b0(void);
void FUN_0043e308(int param_1);
void FUN_0043e324(int param_1,char param_2,char *param_3);
undefined4 FUN_0043e3b0(void);
bool FUN_0043e3b4(undefined4 param_1,int param_2);
undefined4 FUN_0043e3d4(int param_1);
void FUN_0043e42c(int param_1);
void FUN_00440ae8(char *param_1);
undefined4 FUN_00440afc(void);
LRESULT FUN_00440bb4(HWND param_1,undefined4 param_2,DWORD param_3);
HANDLE FUN_00440be4(HWND param_1);
LRESULT FUN_00440c20(UINT param_1,WPARAM param_2,LPARAM param_3);
void FUN_00440e04(undefined4 *param_1,int *param_2);
void FUN_00440e48(undefined4 *param_1,int *param_2);
HANDLE FUN_00440e8c(void);
void FUN_00440eb4(int *param_1);
bool FUN_00440f60(undefined4 *param_1,int param_2,int *param_3);
HWND FUN_00440f94(int param_1);
void FUN_00440fbc(int *param_1,undefined4 param_2);
int FUN_0044104c(undefined4 *param_1,undefined4 param_2,int param_3);
void FUN_004410b0(int param_1,int param_2);
HWND FUN_004410f0(void);
void FUN_00441108(void);
void FUN_00441138(undefined4 param_1,HWND param_2);
undefined2 FUN_0044124c(undefined4 param_1,char param_2);
void FUN_004412e4(int *param_1,char param_2,int param_3);
void FUN_00441308(int param_1,int *param_2);
int * FUN_004413fc(int *param_1,char param_2,int param_3);
void FUN_004414ec(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
uint FUN_00441510(uint param_1,uint param_2);
void FUN_00441534(int param_1,int *param_2);
undefined4 FUN_004415d8(void);
undefined4 lpfn_004415f0(void);
undefined1 FUN_0044165c(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);
bool FUN_004417f4(int param_1);
int * FUN_00441838(LONG *param_1,int *param_2);
void FUN_00441994(int param_1,char param_2,undefined4 param_3);
LRESULT FUN_004419f4(HWND param_1,uint param_2,undefined4 param_3,undefined4 *param_4,undefined4 param_5);
bool FUN_00441a4c(HWND param_1);
HWND FUN_00441a94(POINT *param_1);
int * FUN_00441ac0(POINT *param_1,int *param_2,char param_3,int *param_4);
bool FUN_00441b10(uint param_1);
undefined4 FUN_00441b4c(void);
void FUN_00441be0(POINT *param_1);
void FUN_00441eb0(int *param_1,char param_2,undefined4 param_3);
void FUN_00442020(int *param_1,char param_2,undefined4 param_3);
undefined1 FUN_004421e4(int param_1);
void FUN_00442258(char param_1);
void FUN_00442530(void);
HANDLE FUN_00442548(POINT *param_1);
int * FUN_0044257c(POINT *param_1,undefined4 param_2);
void FUN_004425c4(int *param_1,int param_2,undefined4 param_3);
void FUN_004425ec(int *param_1,int param_2);
void FUN_0044260c(HDC param_1,int param_2,int param_3);
void FUN_0044263c(void);
void FUN_004426f8(void);
void FUN_004427d0(int *param_1);
void FUN_00442878(int *param_1);
void FUN_004428ac(int *param_1,int param_2);
void FUN_004428c4(int param_1);
int * FUN_004428f0(int *param_1,char param_2,int param_3);
void FUN_00442974(int *param_1,int param_2,uint param_3);
void FUN_00442a14(int param_1,int *param_2);
undefined4 FUN_00442bc8(int param_1);
undefined4 FUN_00442c00(int param_1);
undefined4 FUN_00442d0c(int param_1);
void FUN_00442d90(int *param_1,undefined4 param_2);
int * FUN_00442dd0(int *param_1,char param_2,int *param_3);
void FUN_00442ea8(int *param_1,char param_2);
undefined4 FUN_00442f9c(int *param_1,undefined4 param_2,undefined4 param_3);
void FUN_00443024(int param_1,char param_2);
void FUN_00443044(int *param_1,int param_2,undefined4 param_3);
bool FUN_004430c0(int param_1);
void FUN_004430d8(int param_1,undefined1 param_2);
void FUN_0044310c(int *param_1,int *param_2);
void FUN_004431a0(int *param_1,int param_2,char param_3);
void FUN_004431e4(int *param_1,uint param_2,undefined4 param_3);
void FUN_0044328c(int *param_1,int param_2,int param_3,int param_4,int param_5);
void FUN_00443324(int param_1);
void FUN_00443440(int *param_1,undefined4 param_2);
void FUN_00443464(int *param_1,undefined4 param_2);
void FUN_0044348c(int *param_1,undefined4 param_2);
void FUN_004434b0(int *param_1,undefined4 param_2);
void FUN_004434d4(int *param_1,int *param_2,undefined4 *param_3);
void FUN_004435e0(int *param_1,int param_2,int *param_3);
void FUN_00443638(int param_1,undefined4 param_2);
void FUN_0044364c(int param_1,undefined4 *param_2);
void FUN_00443670(int param_1,undefined4 *param_2);
void FUN_00443690(int *param_1,int *param_2);
undefined4 FUN_004436d4(int *param_1);
void FUN_004436ec(int *param_1,undefined4 param_2);
undefined4 FUN_00443718(int *param_1);
void FUN_00443730(int *param_1,undefined4 param_2);
void FUN_00443758(int param_1,int *param_2);
void FUN_004437e8(int *param_1,int *param_2,int *param_3);
void FUN_00443814(int *param_1,int *param_2,int *param_3);
void FUN_00443840(int *param_1,undefined4 param_2);
void FUN_00443870(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_004438dc(int param_1);
void FUN_004438ec(int *param_1,int param_2,int param_3);
void FUN_00443b5c(int *param_1,int *param_2);
void FUN_00443ba4(int *param_1,int *param_2,undefined4 param_3);
void FUN_00443bf0(int *param_1,uint param_2,undefined4 param_3);
void FUN_00443c44(int param_1);
void FUN_00443c54(int param_1,undefined4 param_2,undefined4 param_3);
int FUN_00443c60(int param_1);
int FUN_00443c74(int param_1);
void FUN_00443c88(int *param_1,int *param_2);
void FUN_00443cac(int param_1,undefined4 param_2);
void FUN_00443cd0(int param_1,int *param_2);
void FUN_00443d00(int param_1,uint *param_2);
void FUN_00443d80(int param_1);
void FUN_00443dc4(int param_1);
void FUN_00443dfc(int param_1,char param_2);
void FUN_00443e20(int param_1,char param_2);
void FUN_00443e70(int param_1,int param_2);
void FUN_00443e94(int param_1,char param_2);
void FUN_00443eb8(int param_1,char param_2);
void FUN_00443edc(int param_1,short param_2);
bool FUN_00443ef8(HANDLE param_1);
void FUN_00443f08(int *param_1,char param_2);
void FUN_00443f30(int *param_1,undefined4 param_2,undefined4 param_3);
void FUN_00443f40(int *param_1,int param_2);
void FUN_00443fe4(int param_1);
undefined1 FUN_0044408c(void);
void FUN_00444118(int param_1,char param_2,char param_3);
void FUN_004441b4(int *param_1,int param_2);
void FUN_004441f8(int *param_1,undefined4 param_2,undefined4 param_3);
void FUN_00444200(int *param_1,undefined4 param_2,undefined4 param_3);
void FUN_00444244(int *param_1);
undefined4 FUN_0044434c(int param_1);
undefined4 FUN_0044437c(int param_1);
void FUN_004443b0(int *param_1,char param_2,int param_3);
bool FUN_00444478(int param_1);
void FUN_004444ec(int param_1,undefined4 param_2);
void FUN_0044450c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_00444608(int *param_1,undefined4 param_2,undefined4 param_3);
char FUN_00444668(int *param_1,undefined1 param_2,int param_3,undefined4 *param_4);
undefined1 FUN_0044472c(int param_1,undefined1 param_2,undefined4 *param_3);
void FUN_00444918(int *param_1,int param_2);
undefined4 FUN_00444a08(int *param_1,int *param_2,int param_3,undefined1 param_4);
char FUN_00444be8(int *param_1,int *param_2);
uint FUN_00444c8c(int param_1,undefined4 param_2,undefined4 param_3);
undefined4 FUN_00444cbc(int *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 FUN_00444d28(int *param_1,int *param_2,int *param_3);
void FUN_00444d58(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void FUN_00444d88(int *param_1,LPPOINT param_2);
void FUN_00444de8(int *param_1,int *param_2,int *param_3);
undefined4 FUN_00444ebc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
int FUN_00444ef0(int *param_1);
void FUN_00444f60(int param_1,int *param_2);
void FUN_00444f88(int *param_1,uint *param_2,undefined4 param_3);
void FUN_00445120(int param_1,int *param_2);
undefined4 FUN_004451c8(int param_1);
void FUN_004451f8(undefined4 param_1,int *param_2);
void FUN_00445248(int *param_1);
void FUN_004452d4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void FUN_0044530c(int *param_1,int param_2,undefined4 param_3,byte param_4);
void FUN_00445390(int *param_1,int param_2);
void FUN_004453dc(int *param_1,undefined4 param_2);
void FUN_004453f8(int *param_1,int param_2);
char FUN_00445450(int *param_1,int *param_2,int *param_3);
void FUN_004455bc(int *param_1,int param_2);
void FUN_00445634(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void FUN_004457f4(int *param_1,int param_2);
void FUN_004458d4(int *param_1);
void FUN_004458dc(int *param_1);
void FUN_004458e4(int param_1,int param_2);
void FUN_00445994(int *param_1,int param_2);
void FUN_004459dc(int param_1,int param_2);
void FUN_00445a0c(int param_1);
void FUN_00445a38(int param_1);
void FUN_00445a50(int param_1);
void FUN_00445a68(undefined4 param_1,int param_2);
int * FUN_00445a70(int *param_1,int *param_2);
void FUN_00445af4(void);
void FUN_00445b80(int *param_1,int param_2);
void FUN_00445be0(int *param_1,int *param_2,char param_3);
undefined4 FUN_00445d28(int param_1);
undefined4 FUN_00445d48(int param_1);
undefined4 FUN_00445d68(int param_1);
undefined4 FUN_00445d88(int param_1);
undefined4 FUN_00445da8(int param_1);
void FUN_00445dc8(int *param_1);
void FUN_00445e00(int *param_1,int *param_2);
undefined4 FUN_00445f98(int *param_1);
uint FUN_00445fec(int *param_1,uint param_2,undefined4 param_3);
undefined4 FUN_0044602c(int param_1);
void FUN_00446058(int param_1,int param_2);
void FUN_00446084(int *param_1,int param_2);
void FUN_004461ac(int param_1,undefined4 *param_2,undefined4 param_3);
void FUN_004461ec(int param_1,int *param_2,int param_3,int *param_4);
void FUN_00446300(int param_1,int *param_2);
void FUN_00446334(int *param_1,char param_2,int *param_3);
void FUN_00446458(int *param_1,char param_2);
void FUN_00446528(int param_1,undefined4 param_2,undefined4 param_3);
void FUN_004465fc(int *param_1,int *param_2);
void FUN_00446674(void);
uint FUN_00446678(int param_1,int param_2,undefined1 param_3,int param_4);
void FUN_00446704(int *param_1,byte param_2,undefined4 *param_3,int param_4);
void FUN_00446b30(byte param_1,undefined4 param_2,undefined4 param_3,int param_4);
undefined4 FUN_00446ca0(int param_1);
void FUN_00446cf4(int *param_1,undefined4 param_2,undefined4 param_3);
void FUN_00446df8(int *param_1,undefined4 param_2);
void FUN_00446e8c(int param_1);
void FUN_00446e94(int param_1);
void FUN_00446eb4(int *param_1);
void FUN_00446ebc(int *param_1,undefined4 param_2,undefined4 param_3);
void FUN_00446f90(int *param_1);
bool thunk_FUN_004470d5(int param_1,int param_2);
bool FUN_004470d5(int param_1,int param_2);
void FUN_004470e4(int *param_1,char param_2);
void FUN_00447104(int param_1,int *param_2);
void FUN_00447150(int param_1,int *param_2);
void FUN_00447198(int *param_1,int *param_2,undefined4 param_3);
void FUN_0044726c(int *param_1,int *param_2);
void FUN_004472e8(int param_1,int param_2);
int FUN_00447324(int param_1);
void FUN_00447344(int param_1,int param_2);
void FUN_00447384(int param_1,uint param_2);
void FUN_004473ac(undefined4 param_1,int param_2,LPCSTR param_3);
void FUN_00447418(int *param_1,uint *param_2);
void FUN_00447480(int *param_1,int *param_2);
void FUN_004475ac(int *param_1);
void FUN_00447744(int param_1,undefined4 *param_2);
undefined4 FUN_00447814(int *param_1,int *param_2);
undefined1 FUN_00447828(void);
void FUN_00447900(undefined4 param_1,int *param_2);
void FUN_0044795c(int *param_1);
void FUN_004479b4(int param_1);
int FUN_00447a18(int param_1,int param_2);
void FUN_00447a60(int *param_1);
void FUN_00447afc(void);
void FUN_00447b18(int *param_1);
void FUN_00447b60(int param_1);
void FUN_00447b78(int *param_1,undefined4 param_2,undefined4 param_3);
void FUN_00447bb8(int *param_1);
void FUN_00447cb4(int *param_1);
void FUN_00447d6c(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);
undefined4 FUN_00447e24(int param_1,undefined4 param_2,undefined4 param_3,char param_4);
bool FUN_00447eb8(int *param_1,undefined4 *param_2);
void FUN_00447f4c(int *param_1,uint *param_2,undefined4 param_3);
void FUN_004480b0(UINT param_1,UINT *param_2);
bool FUN_004481b8(HWND param_1,int *param_2);
void FUN_004481ec(int *param_1,int param_2);
void FUN_00448348(int param_1,HDC param_2,int param_3);
void FUN_00448578(int *param_1,HDC param_2,int param_3,int param_4);
void FUN_004486cc(int *param_1,int param_2);
void FUN_0044884c(int *param_1,int *param_2);
void FUN_004489dc(int *param_1,int param_2);
void FUN_00448aec(int *param_1,undefined4 param_2);
void FUN_00448b34(int *param_1,int param_2);
void FUN_00448c84(int *param_1,undefined4 param_2,undefined4 param_3);
void FUN_00448d70(int *param_1,undefined4 param_2,undefined4 param_3);
void FUN_00448e08(undefined4 param_1,int *param_2);
void FUN_00448e18(void);
void FUN_00448e1c(int param_1);
void FUN_00448e3c(int param_1);
void FUN_00448eac(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined1 param_5,undefined4 param_6);
undefined1 FUN_00448f20(int param_1,undefined4 param_2,undefined4 param_3);
void FUN_00448f78(int param_1,char *param_2,undefined4 *param_3);
undefined4 FUN_00448f9c(int param_1);
undefined4 FUN_00448fb0(int param_1,int param_2);
int FUN_00449030(int param_1);
void FUN_004490dc(int *param_1,char param_2,undefined4 param_3);
void FUN_00449194(int *param_1,int param_2);
void FUN_00449280(int param_1,int param_2);
undefined4 FUN_00449354(int *param_1,int param_2);
undefined4 FUN_00449424(int *param_1,int param_2);
void FUN_004494cc(int param_1,undefined4 param_2);
undefined4 FUN_004494ec(int *param_1,int param_2,undefined4 param_3);
undefined1 FUN_00449570(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
void FUN_004496e8(int *param_1,int *param_2);
void FUN_0044978c(int *param_1,int param_2);
void FUN_0044982c(int *param_1,int param_2,undefined4 param_3);
void FUN_00449864(int *param_1,int param_2);
void FUN_00449964(int param_1,int param_2);
void FUN_0044996c(int param_1,int param_2);
void FUN_00449974(int param_1,int param_2);
void FUN_0044997c(int *param_1);
void FUN_004499ac(int param_1);
void FUN_004499d4(int *param_1);
void FUN_00449a1c(int *param_1);
void FUN_00449a44(int *param_1);
void FUN_00449ac0(int *param_1);
void FUN_00449b00(int param_1,undefined4 param_2);
void FUN_00449b80(int param_1,int param_2);
void FUN_00449b88(int param_1,int param_2);
void FUN_00449ba0(int *param_1,int param_2);
void FUN_00449bfc(int param_1);
void FUN_00449c10(int param_1,int param_2);
bool FUN_00449c2c(int *param_1,int param_2,undefined4 param_3);
void FUN_00449cc0(int *param_1,int param_2,undefined4 param_3);
void FUN_00449ec8(int *param_1,int param_2,int param_3,int param_4,int param_5);
void FUN_00449fa0(int param_1,undefined4 param_2,undefined4 param_3);
void FUN_00449fe8(int *param_1,int param_2,int param_3);
void FUN_0044a094(int *param_1,undefined4 param_2,undefined4 param_3);
void FUN_0044a13c(int *param_1,int param_2,int param_3);
void FUN_0044a214(int param_1);
void FUN_0044a22c(int param_1,int param_2);
void FUN_0044a434(int *param_1);
void FUN_0044a44c(int param_1);
undefined4 FUN_0044a4fc(int param_1);
void FUN_0044a520(int *param_1);
int FUN_0044a544(int *param_1);
void FUN_0044a60c(int *param_1,LPRECT param_2);
void FUN_0044a624(int *param_1);
void FUN_0044a684(int param_1,char param_2);
int FUN_0044a6e0(int param_1);
void FUN_0044a704(int param_1,short param_2);
void FUN_0044a760(int param_1,short param_2);
void FUN_0044a778(int param_1,char param_2);
void FUN_0044a7d8(int *param_1,byte param_2,undefined4 param_3);
bool FUN_0044a848(int param_1);
void FUN_0044a854(int param_1);
void FUN_0044a96c(int *param_1,int param_2,undefined4 param_3,char param_4,char param_5);
void FUN_0044aaa4(int *param_1);
void FUN_0044aae8(int param_1,int param_2,undefined4 param_3,undefined *param_4,undefined4 param_5);
void FUN_0044ab30(undefined4 param_1,int *param_2,int param_3);
void FUN_0044ab78(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5);
void FUN_0044abfc(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5);
void FUN_0044b014(int *param_1,int *param_2,char param_3);
undefined1 FUN_0044b08c(int *param_1,undefined4 param_2,undefined4 param_3);
void FUN_0044b61c(int *param_1,int param_2);
int * FUN_0044b688(int *param_1,char param_2,int *param_3);
void FUN_0044b6e4(int *param_1,char param_2);
void FUN_0044b724(int *param_1,int param_2);
int * FUN_0044b7d0(int *param_1,char param_2,int *param_3);
void FUN_0044b9f0(int *param_1);
void FUN_0044ba90(int *param_1,int *param_2,uint *param_3);
void FUN_0044bd44(HWND param_1,int param_2,int param_3,int *param_4);
void FUN_0044bd84(int *param_1,undefined4 param_2,undefined4 param_3);
void FUN_0044bd9c(int param_1);
bool FUN_0044be68(int *param_1,int param_2,int param_3,int param_4);
void FUN_0044beb0(int param_1,short param_2);
bool FUN_0044bef4(int *param_1,HWND param_2,int param_3,int param_4);
bool FUN_0044bf54(int param_1,HWND param_2,int param_3,int param_4);
void FUN_0044bfb8(int param_1);
bool FUN_0044bfdc(int param_1,int param_2,int param_3);
void FUN_0044c020(int param_1);
void FUN_0044c038(int param_1);
bool FUN_0044c050(int param_1);
int * FUN_0044c098(int *param_1,char param_2,int *param_3);
int FUN_0044c1f4(int param_1);
undefined4 FUN_0044c210(int param_1);
void FUN_0044c234(int *param_1,char param_2,int param_3);
int FUN_0044c258(int param_1);
int FUN_0044c26c(int param_1);
undefined1 FUN_0044c288(int param_1);
void FUN_0044c2bc(int param_1);
void FUN_0044c304(int param_1);
undefined4 FUN_0044c34c(int param_1,char param_2);
int FUN_0044c3b8(int param_1,char param_2);
void FUN_0044c468(int param_1);
void FUN_0044c510(int param_1,int *param_2);
uint FUN_0044c554(int param_1,undefined4 param_2);
undefined4 FUN_0044c5d8(int param_1);
void FUN_0044c608(int param_1);
undefined4 FUN_0044c780(int param_1);
void FUN_0044c7a8(int param_1,undefined4 param_2);
void FUN_0044c7ac(int param_1);
void FUN_0044c7bc(int param_1,undefined4 param_2);
void FUN_0044c7f8(int param_1);
void FUN_0044c858(int param_1);
int FUN_0044c864(int param_1);
void FUN_0044c880(int param_1);
void FUN_0044c88c(int *param_1,char param_2,int param_3);
void FUN_0044ca5c(int param_1);
void FUN_0044ca60(int param_1);
void FUN_0044ca74(int param_1,undefined4 param_2,int param_3,int param_4);
undefined4 FUN_0044cacc(int param_1,int param_2,int param_3);
void FUN_0044caf8(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
void FUN_0044cb34(int param_1,int param_2,undefined4 param_3);
void FUN_0044cb4c(int param_1,int param_2,int *param_3);
void FUN_0044cde0(int param_1,int param_2,int param_3,char param_4,undefined1 param_5);
void FUN_0044cf88(int param_1,int param_2,int param_3,char param_4);
void FUN_0044d000(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
int * FUN_0044d22c(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);
int FUN_0044d2c0(int param_1,int *param_2,undefined4 *param_3);
void FUN_0044d348(int *param_1,undefined4 param_2,uint param_3,int param_4);
void FUN_0044d390(int param_1,int *param_2);
void FUN_0044d598(int param_1,int param_2,undefined4 param_3,int param_4);
void FUN_0044d5f0(int param_1,int param_2,int param_3,int param_4,int param_5);
void FUN_0044d678(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
void FUN_0044da2c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_0044da60(int param_1,int *param_2,undefined4 param_3);
void FUN_0044daf8(int param_1,int *param_2);
void FUN_0044dd74(int param_1,char param_2);
void FUN_0044de8c(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
void FUN_0044df04(int param_1,int param_2,undefined4 param_3,int param_4);
void FUN_0044e108(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
void FUN_0044e190(int param_1,int param_2,undefined4 param_3);
void FUN_0044e204(int param_1,undefined4 param_2,undefined4 *param_3);
void FUN_0044e264(int param_1);
void FUN_0044e2e0(int param_1);
void FUN_0044e318(int param_1);
void FUN_0044e404(int param_1,undefined4 param_2,int param_3,int param_4);
int FUN_0044e494(int param_1,int param_2);
undefined4 FUN_0044e4e4(int param_1,int param_2);
void FUN_0044e560(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
void FUN_0044e5e0(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
void FUN_0044e718(int *param_1,int param_2,int param_3);
void FUN_0044e7a0(int param_1);
int * FUN_0044ec1c(int *param_1,char param_2,undefined4 param_3);
void FUN_0044ecdc(void);
void FUN_0044ece4(undefined4 param_1,LPPOINT param_2);
void FUN_0044ecf4(int param_1);
void FUN_0044ed10(int param_1);
void FUN_0044ed40(int param_1,undefined4 param_2,LRESULT param_3);
void FUN_0044ed68(undefined4 param_1,HWND param_2);
void FUN_0044ed90(int param_1,int param_2);
void FUN_0044edf4(void);
undefined4 FUN_0044f05c(void);
void FUN_0044f078(undefined4 param_1,char param_2);
undefined4 FUN_0044f154(void);
void FUN_0044f168(void);
void FUN_0044f1f0(void);
int FUN_0044fa2c(int param_1);
void FUN_0044fa68(int *param_1,int *param_2,uint param_3);
void FUN_0044fa9c(int param_1,int param_2);
void FUN_0044fb10(int param_1,int param_2);
void FUN_0044fd18(int param_1,int *param_2,int param_3);
void FUN_0044fd48(int param_1,int param_2);
undefined4 FUN_0044fd5c(int param_1);
void FUN_0044fda4(int *param_1,int *param_2,char param_3);
void FUN_0044fdec(int param_1,int param_2);
void FUN_0044fe0c(int param_1,int param_2);
void FUN_0044fe28(int param_1);
undefined4 FUN_0044fe90(int param_1,int param_2);
void FUN_0044ff5c(int param_1);
void FUN_0044ff70(int param_1);
void FUN_0044ff84(int param_1);
void FUN_0044ff98(int param_1);
void FUN_0044ffac(int param_1);
void FUN_0044ffc0(int param_1);
void FUN_0044ffd4(int param_1);
void FUN_0044ffe8(int param_1);
void FUN_0044fffc(int param_1);
void FUN_00450010(int param_1);
int * FUN_00450054(int *param_1,char param_2,int *param_3);
void FUN_004500a8(int *param_1,char param_2);
void FUN_004500f8(int *param_1,int *param_2);
void FUN_004501a4(int *param_1,uint *param_2);
void FUN_00450204(int *param_1,undefined4 param_2);
void FUN_0045030c(int *param_1,char param_2);
void FUN_00450444(int *param_1,uint *param_2);
void FUN_004504a4(int *param_1,int param_2);
void FUN_00450500(int *param_1,short param_2);
void FUN_00450564(int *param_1,undefined4 param_2);
undefined4 FUN_00450680(int param_1,undefined4 param_2,undefined4 param_3);
int FUN_00450738(int *param_1,short param_2);
undefined4 FUN_00452dcc(void);
void FUN_00452dd4(undefined4 param_1);
void FUN_00452ddc(HWND param_1,char param_2);
void FUN_00452e28(void);
undefined4 lpfn_00452e60(HWND param_1);
void FUN_00452eb0(undefined4 param_1);
void FUN_00452f64(int *param_1);
undefined4 lpfn_00452f9c(HWND param_1);
int FUN_00453000(undefined4 param_1);
bool FUN_0045303c(HWND param_1,uint param_2);
undefined4 lpfn_0045305c(int param_1,int *param_2);
undefined1 FUN_0045307c(void);
byte FUN_00453128(uint param_1);
byte FUN_0045317c(uint param_1);
byte FUN_004531b8(int param_1);
byte FUN_00453204(void);
void FUN_00453224(undefined4 param_1,int param_2);
int * FUN_00453294(int *param_1);
void FUN_004532bc(int *param_1);
int * FUN_0045333c(int *param_1,char param_2,int param_3,undefined1 param_4);
void FUN_0045341c(int param_1);
void FUN_00453454(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
void FUN_004534c0(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
void FUN_00453528(int param_1);
undefined4 FUN_004535d4(int param_1);
bool FUN_0045360c(short param_1,undefined4 param_2,undefined4 param_3,int param_4);
int FUN_00453640(short param_1,undefined4 param_2,int param_3,int param_4);
int FUN_004536bc(int param_1);
bool FUN_0045373c(int param_1);
int FUN_00453754(void);
uint FUN_004537b4(uint param_1,int param_2);
void FUN_00453b24(int param_1,int param_2);
void FUN_00453c5c(int param_1,int param_2);
void FUN_00453c74(int param_1,int param_2);
void FUN_00453c94(int param_1,undefined1 param_2);
void FUN_00453ca0(int param_1);
void FUN_00453da8(int param_1);
int * FUN_00453ec0(int *param_1,char param_2,int *param_3);
void FUN_00453f28(int *param_1,char param_2);
void FUN_00453f64(int *param_1,int *param_2);
void FUN_00453f74(int *param_1);
void FUN_00453fa0(int *param_1,undefined4 param_2,undefined4 param_3);
void FUN_004540f8(int param_1);
void FUN_0045411c(int param_1,char param_2);
void FUN_00454178(int param_1);
void FUN_00454288(int *param_1,int *param_2);
void FUN_004543dc(int param_1,int param_2,int param_3);
void FUN_00454480(int *param_1,int param_2,int param_3);
void FUN_004545cc(int *param_1,int *param_2);
void FUN_0045463c(int *param_1,int param_2);
void FUN_004547d0(int *param_1,char param_2,undefined4 param_3);
void FUN_0045495c(int *param_1,undefined4 param_2,undefined4 param_3);
int * FUN_00454994(int *param_1,char param_2,int *param_3);
void FUN_00454b6c(int *param_1,char param_2);
void FUN_00454c50(int *param_1,undefined4 param_2,undefined1 *param_3);
void FUN_00454ccc(int param_1);
void FUN_00454d2c(int *param_1);
void FUN_00454d68(int *param_1,int *param_2,undefined4 param_3);
void FUN_004551fc(int param_1);
undefined4 FUN_00455338(int param_1);
undefined4 FUN_004554c0(int *param_1);
void FUN_004554ec(int param_1,int *param_2,int param_3);
void FUN_004555a8(int *param_1,int param_2);
void FUN_004555d8(int *param_1,int param_2);
void FUN_00455608(int *param_1,uint param_2,undefined4 param_3);
void FUN_00455b60(int param_1);
undefined4 FUN_00455bac(int param_1);
void FUN_00455d34(int *param_1,undefined4 param_2,int *param_3);
void FUN_00455d70(int *param_1,int param_2,uint param_3);
void FUN_00455ebc(int param_1,char param_2);
void FUN_00455ef4(int *param_1,int *param_2,undefined4 *param_3);
void FUN_00455f38(int *param_1,int param_2,int *param_3);
HANDLE FUN_00455f8c(int param_1);
int FUN_00455fc0(int param_1);
int FUN_0045600c(int param_1,int param_2);
undefined4 FUN_0045605c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,int *param_7);
int FUN_0045608c(int *param_1);
undefined4 FUN_00456174(int param_1);
uint FUN_00456188(int param_1);
void FUN_004561b8(int *param_1,undefined4 param_2,undefined4 param_3);
void FUN_00456238(int *param_1);
void FUN_004562b4(int param_1,int *param_2,undefined4 param_3);
void FUN_004562d8(int *param_1,int param_2,undefined4 param_3);
void FUN_00456300(int *param_1,int *param_2);
int FUN_004564d4(int param_1);
void FUN_0045651c(int param_1,char param_2);
undefined4 FUN_00456598(int param_1);
void FUN_004565f8(int *param_1);
void FUN_00456634(int *param_1,byte param_2);
void FUN_00456674(int *param_1);
undefined * FUN_004569c8(int *param_1,int *param_2);
void FUN_00456e5c(int *param_1);
void FUN_00456f04(int *param_1,int *param_2,undefined4 param_3);
void FUN_00456fbc(int *param_1,int param_2,char param_3);
void FUN_00457004(int *param_1,int *param_2,undefined4 param_3);
void FUN_004572bc(int *param_1);
void FUN_00457370(int param_1,undefined4 param_2);
void FUN_004573c0(int param_1,char param_2);
void FUN_00457468(UINT param_1,int *param_2,int *param_3);
void FUN_004574e4(int *param_1);
void FUN_00457534(int param_1,undefined4 param_2,undefined4 param_3);
void FUN_004577d8(int param_1);
void FUN_00457908(int *param_1,int param_2);
int FUN_00457dcc(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);
void FUN_00458864(int *param_1,undefined4 param_2,int param_3);
void FUN_0045896c(int *param_1);
void FUN_00458a04(int *param_1,undefined4 param_2,undefined4 param_3);
void FUN_00458a0c(int *param_1,undefined4 param_2,undefined4 param_3);
void FUN_00458aa0(int *param_1);
void FUN_00458abc(int *param_1);
void FUN_00458d5c(int param_1);
undefined4 FUN_00458e74(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);
undefined4 FUN_00458ea4(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
void FUN_00458f20(int *param_1,int param_2,undefined4 param_3);
undefined4 FUN_00458f74(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);
undefined4 FUN_00458fa4(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
void FUN_00459020(int *param_1,int param_2,undefined4 param_3);
undefined4 FUN_00459074(int param_1);
undefined4 FUN_004590c8(int param_1,undefined4 param_2,undefined4 param_3);
undefined4 FUN_00459144(int param_1,undefined4 param_2,undefined4 param_3);
void FUN_00459180(int *param_1,int param_2);
void FUN_004591c8(int *param_1);
void FUN_004592f0(int param_1,int param_2);
void FUN_00459384(int *param_1,int *param_2,undefined4 param_3);
void FUN_004594d4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
undefined4 FUN_00459740(undefined4 param_1);
int FUN_00459758(undefined4 param_1);
undefined4 FUN_00459774(undefined4 param_1);
int FUN_0045978c(undefined4 param_1);
void FUN_004597a8(undefined4 param_1,int param_2);
int * FUN_004597d8(int *param_1,char param_2,int *param_3);
void FUN_004599f8(void);
void FUN_00459a04(void);
void FUN_00459a10(void);
void FUN_00459a1c(void);
void FUN_00459a28(void);
void FUN_00459a34(void);
void FUN_00459a40(int param_1,int param_2);
int FUN_00459a54(int param_1);
void FUN_00459a70(int param_1,int param_2);
undefined4 FUN_00459a84(int param_1);
void FUN_00459a8c(int param_1,int param_2);
undefined4 FUN_00459aa0(int param_1);
void FUN_00459aa8(int param_1);
void FUN_00459af4(int param_1,int *param_2);
void FUN_00459b2c(int param_1,int param_2);
void FUN_00459b94(int param_1);
void FUN_00459bf0(int param_1);
void FUN_00459c4c(int param_1,undefined4 param_2,undefined4 param_3);
void FUN_00459c74(int param_1,undefined4 param_2,undefined4 param_3);
void FUN_00459e74(int param_1,int *param_2,undefined4 param_3);
void FUN_00459ee0(int param_1,int param_2);
undefined4 FUN_00459ef4(int param_1);
undefined4 FUN_00459efc(int param_1,int param_2);
void FUN_00459f24(int param_1,short param_2);
void FUN_00459fb4(int param_1);
uint FUN_0045a138(int param_1,int param_2,char param_3);
void FUN_0045a198(int *param_1,char param_2,undefined4 param_3,int param_4);
void FUN_0045a348(char param_1,undefined4 param_2,undefined4 param_3,int param_4);
undefined4 FUN_0045a494(int param_1);
void FUN_0045a5fc(int param_1);
void FUN_0045a608(int param_1,int *param_2);
int thunk_FUN_0045a645(int param_1);
int FUN_0045a645(int param_1);
void lpTimerFunc_0045a660(void);
DWORD lpStartAddress_0045a6b4(void);
LRESULT FUN_0045a710(int param_1,WPARAM param_2,LPARAM param_3);
void FUN_0045a754(undefined4 param_1,undefined4 param_2,DWORD param_3);
void FUN_0045a7c8(void);
bool FUN_0045a824(void);
void FUN_0045a854(char param_1);
void FUN_0045a87c(HWND param_1,int param_2);
int * FUN_0045a8bc(int *param_1,char param_2,int *param_3);
void FUN_0045abc4(int param_1);
void FUN_0045ad68(int param_1,int param_2);
undefined4 lpEnumFunc_0045adc8(void);
void FUN_0045ae38(int param_1,undefined1 param_2);
void FUN_0045aee8(int param_1);
void FUN_0045aef0(int param_1);
void FUN_0045aef8(int param_1);
undefined4 FUN_0045af64(int param_1);
undefined4 FUN_0045af7c(int param_1);
undefined4 FUN_0045af94(int param_1,int *param_2);
void FUN_0045afec(int param_1,int param_2);
void FUN_0045b058(int param_1);
void FUN_0045b094(void);
void FUN_0045b7b8(int param_1,undefined4 param_2,undefined4 param_3);
void FUN_0045b7d4(int param_1);
void FUN_0045b884(int param_1);
void FUN_0045b984(int param_1);
void FUN_0045b9c0(int param_1,int *param_2);
void FUN_0045ba0c(int param_1,uint *param_2);
bool FUN_0045ba9c(int param_1,LPMSG param_2);
bool FUN_0045bac0(int param_1,LPMSG param_2);
undefined4 FUN_0045bafc(int param_1,int *param_2);
undefined4 FUN_0045bbb4(int param_1,undefined4 param_2);
undefined4 FUN_0045bbe8(int param_1,undefined4 param_2,uint param_3);
undefined4 FUN_0045bc54(int param_1,LPMSG param_2,uint param_3);
void FUN_0045bcec(int param_1,undefined4 param_2,uint param_3);
void FUN_0045bd04(int param_1,undefined4 param_2,uint param_3);
void FUN_0045bd28(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void FUN_0045bd84(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5);
void FUN_0045be00(void);
void FUN_0045be18(int param_1,int param_2,undefined4 *param_3);
void FUN_0045be98(int param_1);
void FUN_0045bf84(void);
void FUN_0045c028(int param_1,LPCSTR param_2,LPCSTR param_3,UINT param_4);
void FUN_0045c190(int param_1,int param_2);
undefined4 FUN_0045c268(int param_1,uint param_2,LPARAM param_3);
void FUN_0045c398(int param_1,undefined4 param_2);
void FUN_0045c400(int param_1,undefined4 param_2);
void FUN_0045c468(int param_1,uint param_2,LPARAM param_3);
void FUN_0045c470(int param_1,char param_2);
void FUN_0045c4c0(int param_1,int param_2);
void FUN_0045c4e0(void);
int * FUN_0045c544(int param_1);
void FUN_0045c5c8(int param_1);
void FUN_0045c6e4(undefined4 param_1,uint param_2);
void FUN_0045c784(int *param_1,uint *param_2);
void FUN_0045c818(byte param_1,undefined4 param_2,undefined4 param_3,int param_4);
void FUN_0045c874(int param_1);
bool FUN_0045c8fc(int param_1);
void FUN_0045c924(int param_1,UINT param_2,undefined1 param_3);
void FUN_0045c968(int param_1);
void FUN_0045c990(int param_1,int *param_2,int param_3);
void FUN_0045caa0(int param_1);
void FUN_0045cad8(int param_1);
void FUN_0045cb1c(int param_1);
int FUN_0045cb44(char *param_1,int param_2,char param_3);
int FUN_0045cb54(void);
void FUN_0045cca8(undefined *param_1,undefined4 param_2,undefined4 param_3,int param_4);
void FUN_0045cd08(int param_1,int *param_2);
void FUN_0045d0c4(int param_1,int *param_2);
char FUN_0045d100(int param_1,undefined4 param_2,int *param_3);
uint FUN_0045d190(int param_1,undefined4 param_2,uint param_3);
uint FUN_0045d1b8(int param_1,undefined4 param_2,uint param_3);
void FUN_0045d1e0(void);
void FUN_0045d23c(undefined4 param_1);
void FUN_0045d24c(void);
int FUN_0045d4e0(uint param_1);
int FUN_0045d500(int param_1);
int * FUN_0045d56c(int *param_1,char param_2,int param_3,int param_4);
void FUN_0045d5c0(int *param_1,char param_2);
void FUN_0045d62c(int *param_1,undefined4 param_2,undefined4 param_3);
bool FUN_0045d6e4(int param_1);
void FUN_0045d6ec(int *param_1);
void FUN_0045d6f8(int param_1);
void FUN_0045d7bc(int param_1,HIMAGELIST param_2);
void FUN_0045d87c(int *param_1,HIMAGELIST param_2);
int FUN_0045d8a8(int param_1,int param_2);
int FUN_0045d8b8(int *param_1);
void FUN_0045d8c8(int param_1,int *param_2,int *param_3);
void FUN_0045d91c(int *param_1);
void FUN_0045d954(int *param_1);
void FUN_0045d9f0(int *param_1,int *param_2,int *param_3);
void FUN_0045dabc(int *param_1,int *param_2,int param_3);
int FUN_0045dbd8(int *param_1);
void FUN_0045dbfc(int *param_1,int param_2,int *param_3,int param_4);
void FUN_0045de24(int *param_1,int param_2);
void FUN_0045deb0(int *param_1);
void FUN_0045debc(int *param_1,uint param_2);
int FUN_0045def4(int *param_1);
void FUN_0045df1c(int *param_1,int param_2,int *param_3,char param_4,UINT param_5,int param_6,int param_7);
void FUN_0045e0f0(int *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,undefined4 param_5,undefined4 param_6);
void FUN_0045e114(int *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,byte param_5,byte param_6,undefined4 param_7,undefined4 param_8);
void FUN_0045e160(int *param_1,HIMAGELIST param_2);
void FUN_0045e2f8(int *param_1,int *param_2);
void FUN_0045e488(int param_1,int *param_2);
void FUN_0045e500(int *param_1,undefined4 param_2,undefined4 param_3);
void FUN_0045e518(undefined4 param_1,undefined4 *param_2);
void FUN_0045e528(int param_1);
void FUN_0045e578(int param_1,int param_2);
void FUN_0045e5bc(int param_1,int param_2);
undefined4 FUN_0045e5d0(int *param_1,int *param_2);
undefined1 FUN_0045e618(int *param_1,int *param_2);
bool FUN_0045e708(int param_1);
void FUN_0045e7bc(int *param_1,int *param_2);
void FUN_0045ea50(int *param_1,int param_2);
void FUN_0045eb60(int *param_1,int param_2);
void FUN_0045ebdc(int param_1);
void FUN_0045ebe0(int *param_1,undefined4 param_2,undefined4 param_3);
HANDLE FUN_0045fb78(POINT *param_1);
undefined4 FUN_0045fba8(undefined4 param_1);
void FUN_0045fbb0(undefined4 *param_1);
short FUN_0045fbd0(short param_1,byte param_2);
void FUN_0045fc08(undefined2 param_1,int *param_2);
void FUN_0045fc5c(ushort param_1,int *param_2);
undefined4 FUN_0045fe60(int *param_1,undefined *param_2);
void FUN_0045febc(undefined *param_1);
uint FUN_0045ffb4(void);
char FUN_0045ffd4(int *param_1,int param_2,undefined *param_3,int param_4);
void FUN_00460034(undefined *param_1,int param_2,int param_3);
undefined4 FUN_004601e8(int param_1);
undefined4 FUN_00460218(int param_1);
undefined4 FUN_00460248(int param_1);
undefined4 FUN_0046027c(int param_1);
undefined4 FUN_004602b8(int param_1);
undefined4 FUN_00460320(int param_1);
int * FUN_004604c8(int *param_1,char param_2,int *param_3);
void FUN_004605f8(int param_1,HMENU param_2,byte param_3);
void FUN_00460898(int param_1);
void FUN_00460908(int *param_1,int param_2);
void FUN_00460960(int *param_1,int param_2,undefined4 param_3);
void FUN_00460990(int *param_1);
void FUN_004609cc(int *param_1);
void FUN_00460a9c(int param_1,int param_2,byte param_3);
undefined4 FUN_00460afc(int param_1);
void FUN_00460b8c(int param_1,int *param_2,int param_3,uint param_4,char param_5,LPRECT param_6);
void FUN_00460ddc(void);
void FUN_00461654(void);
undefined4 FUN_0046200c(int param_1);
void FUN_0046203c(void);
void FUN_0046229c(int *param_1,uint *param_2);
void FUN_004622c4(int param_1);
void FUN_0046230c(int param_1,byte param_2);
void FUN_00462360(int *param_1,byte param_2);
void FUN_004623d8(int param_1,byte param_2);
undefined4 FUN_0046241c(int param_1);
undefined4 FUN_00462434(int param_1);
void FUN_00462444(int param_1,int param_2);
void FUN_00462468(int *param_1,short param_2);
void FUN_0046247c(int *param_1,char param_2);
void FUN_0046248c(int *param_1,int param_2);
void FUN_004625c0(int *param_1,int param_2,int param_3);
void FUN_00462674(int *param_1,int param_2);
void FUN_004626e8(int param_1);
int FUN_00462798(int param_1,int param_2);
void FUN_004627cc(int *param_1,int param_2);
void FUN_00462838(int *param_1,undefined4 param_2,undefined4 param_3,char param_4);
undefined4 FUN_00462890(int param_1,undefined4 param_2,undefined4 param_3);
void FUN_004628b8(int *param_1,int param_2,undefined4 param_3);
void FUN_0046295c(int param_1);
undefined4 thunk_FUN_004629f4(int param_1);
undefined4 FUN_004629f4(int param_1);
void FUN_00462a00(int *param_1,char param_2);
undefined4 FUN_00462b70(int param_1);
undefined4 FUN_00462b90(int param_1);
undefined4 FUN_00462bb0(int param_1);
undefined4 FUN_00462bd0(int param_1);
undefined4 FUN_00462bf0(int param_1);
undefined4 FUN_00462c10(int param_1);
undefined4 FUN_00462c30(int param_1);
undefined4 FUN_00462c50(int param_1);
undefined4 FUN_00462c70(int param_1);
void FUN_00462c90(int *param_1,int *param_2);
void FUN_00462d08(int *param_1,int param_2,char param_3);
void FUN_00462d5c(int param_1,int param_2);
undefined4 FUN_00462da4(int *param_1);
void FUN_00462dcc(int param_1);
bool FUN_00462de0(undefined *param_1,undefined4 param_2,undefined4 param_3,int param_4);
void FUN_00462e10(int param_1);
void FUN_00462e94(int *param_1,undefined4 param_2,int param_3);
void FUN_00462ff4(int param_1,char param_2);
undefined1 FUN_004634cc(int param_1);
undefined1 FUN_004634f0(int param_1,char param_2);
undefined1 FUN_00463648(int param_1);
undefined1 FUN_00463674(int param_1);
int * FUN_004636a0(int *param_1,char param_2,int *param_3);
void FUN_0046373c(int *param_1,char param_2);
void FUN_00463790(int param_1);
void FUN_004637d8(int param_1);
undefined1 FUN_004637f0(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
undefined4 FUN_00463888(int param_1);
undefined4 FUN_004638b8(int *param_1,int param_2,char param_3);
bool FUN_00463928(int param_1);
undefined4 FUN_00463944(int *param_1);
undefined4 FUN_00463a0c(int param_1);
void thunk_FUN_00463a26(int param_1,int param_2);
void FUN_00463a26(int param_1,int param_2);
char FUN_00463a30(int *param_1,int param_2,undefined4 param_3,int param_4);
void FUN_00463ca8(int *param_1);
void FUN_00463d64(HMENU param_1,undefined4 param_2,undefined4 param_3,int param_4);
undefined4 FUN_00463e04(int *param_1);
void FUN_00463e98(int *param_1);
void FUN_00463f14(int *param_1,int param_2);
void FUN_00463f64(int *param_1);
void FUN_00463f7c(int *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4);
void FUN_00463fc4(int param_1,int param_2);
undefined4 FUN_0046402c(int param_1);
undefined4 FUN_00464044(HMENU param_1,uint param_2,int param_3,byte param_4,int param_5);
void FUN_004640a0(HMENU param_1,ushort param_2,int param_3,undefined1 param_4,int param_5);
void FUN_00464188(undefined4 param_1,int param_2);
int FUN_00464300(int param_1,HMENU param_2,UINT param_3,UINT param_4,int param_5,char *param_6);
void FUN_004643a8(int *param_1,char param_2);
void FUN_004643cc(int *param_1);
void FUN_004643f4(int *param_1,int *param_2);
void FUN_00464480(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
void FUN_004644d8(int param_1,int param_2,undefined4 param_3);
void FUN_004644f4(int param_1,int param_2);
void FUN_00464510(int *param_1);
void FUN_0046454c(int *param_1);
void FUN_00464adc(int *param_1,int param_2);
void FUN_00464b04(int *param_1,int param_2);
undefined4 FUN_00464bdc(int param_1);
void FUN_00464bec(int *param_1);
uint FUN_00464c34(int param_1);
void FUN_00464d34(int param_1,int param_2);
void FUN_00464d70(int *param_1,int param_2,undefined4 *param_3,ushort param_4);
void FUN_00464e58(undefined4 *param_1,int *param_2);
void FUN_00464ef0(int param_1,int *param_2);
void FUN_00464f54(undefined4 *param_1,undefined4 *param_2);
int * FUN_00465a84(int *param_1,char param_2,int param_3,int param_4);
uint FUN_00465b08(int *param_1);
uint FUN_00465b54(int *param_1,int *param_2,int param_3);
void FUN_00465b80(int param_1,uint param_2);
int * FUN_00465bb0(int *param_1,char param_2,undefined4 param_3);
int * FUN_00465c24(int param_1,int param_2,int param_3);
void FUN_00465c84(int param_1,int *param_2);
undefined4 FUN_00465ca8(int param_1);
int * FUN_00465cb4(int *param_1,char param_2,undefined4 param_3);
void FUN_00465da4(int param_1);
void FUN_00465dec(int param_1,int *param_2);
int FUN_00465e1c(int param_1,int *param_2);
void FUN_00465e94(int param_1,char param_2);
int FUN_00465ebc(int param_1,byte param_2);
void FUN_00466494(int param_1,int *param_2,int *param_3,char param_4,byte param_5);
void FUN_00466550(undefined4 param_1,int *param_2,undefined *param_3,uint param_4,char param_5,LONG *param_6);
void FUN_00466630(int param_1,int *param_2,int *param_3,uint param_4,LPRECT param_5,int *param_6,int param_7,int param_8,byte param_9,undefined *param_10,int *param_11);
void FUN_00466938(int param_1,int *param_2,int *param_3,LPRECT param_4,uint param_5,char param_6,byte param_7,int param_8,int param_9,byte param_10,undefined *param_11,int *param_12);
int * FUN_00466a88(int *param_1,char param_2,int *param_3);
void FUN_00466dc8(int *param_1);
void FUN_00466e2c(int *param_1);
void FUN_00466f50(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5);
undefined4 FUN_0046706c(int param_1);
void FUN_00467078(int *param_1,int *param_2);
void FUN_004670d0(int param_1);
void FUN_00467108(int *param_1,char param_2);
void FUN_00467178(int *param_1,char param_2);
void FUN_00467194(int param_1,int param_2);
void FUN_00467200(int *param_1,char param_2);
void FUN_00467314(int *param_1,int param_2);
void FUN_0046746c(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);
void FUN_004674fc(int *param_1,int *param_2,char param_3);
void FUN_0046759c(void);
int * FUN_004678a4(int *param_1,char param_2,undefined4 *param_3);
bool FUN_00467a00(int *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4);
void FUN_00467a2c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void FUN_00467ae4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void FUN_00467b9c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void FUN_00467c54(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void FUN_00467d0c(int *param_1,undefined4 param_2,undefined4 param_3);
void FUN_00467ec4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
void FUN_004681d4(int param_1,undefined *param_2,undefined *param_3,int *param_4,undefined *param_5);
undefined4 FUN_004687d8(char *param_1);
undefined4 FUN_004687ec(int param_1);
void FUN_00468884(int param_1);
bool FUN_00468a3c(int param_1,undefined *param_2,undefined4 *param_3);
undefined4 FUN_00468a8c(int param_1,undefined *param_2);
void FUN_00469a08(int param_1);
void FUN_00469a80(int param_1,undefined4 *param_2);
void FUN_00469a9c(int param_1,undefined4 param_2);
void FUN_00469aa8(int param_1,undefined4 param_2);
void FUN_00469ae0(int param_1);
void FUN_00469af0(int param_1,undefined *param_2);
void FUN_00469b5c(int param_1,int param_2,int param_3);
void FUN_00469bb8(int param_1,uint param_2,uint param_3,undefined *param_4);
void FUN_00469c4c(int param_1,int param_2);
void FUN_00469c78(int param_1);
int * FUN_00469c84(int *param_1,char param_2,int *param_3);
void FUN_00469e28(int *param_1);
void FUN_00469e5c(int *param_1,char param_2);
void FUN_00469f5c(int param_1,int param_2);
void FUN_00469fc8(int param_1,undefined4 param_2);
bool FUN_0046a028(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void FUN_0046a078(int param_1,int param_2,char param_3);
void FUN_0046a228(int param_1,int param_2);
char FUN_0046a3e0(int param_1,int param_2,int *param_3);
undefined4 FUN_0046a4b8(int param_1);
void FUN_0046a4e4(int *param_1,int param_2);
void FUN_0046a598(int *param_1);
bool FUN_00470fc8(void);
void FUN_00470ff4(void);
void FUN_0047101c(void);
void FUN_00471268(undefined4 *param_1);
void FUN_00471280(int param_1);
void FUN_004712f0(int param_1,WPARAM param_2);
void FUN_004714a0(int param_1,WPARAM param_2);
void FUN_00471540(int param_1,WPARAM param_2,undefined *param_3);
int * FUN_004717e4(int *param_1,char param_2,int *param_3);
void FUN_004718a4(int *param_1,char param_2);
void FUN_00471924(int param_1);
void FUN_00471acc(int param_1,undefined4 param_2,RECT *param_3,undefined1 param_4);
void FUN_00471b08(int *param_1,int param_2);
undefined4 FUN_00471b3c(int param_1,undefined4 param_2);
void FUN_00471b64(int *param_1);
void FUN_00471b80(int *param_1);
void FUN_00471bb0(int *param_1,int param_2,char param_3);
void FUN_00471be0(int param_1,int param_2);
void FUN_00471c70(int param_1,char param_2);
void FUN_00471e90(int *param_1,WPARAM param_2);
void FUN_0047200c(int *param_1);
void FUN_0047204c(int *param_1);
void FUN_00472074(int *param_1);
void FUN_00472318(int *param_1,undefined4 param_2);
void FUN_00472338(int *param_1);
void FUN_00472394(int *param_1,int param_2,undefined4 param_3);
void FUN_004723d8(int *param_1,int param_2);
void FUN_004724e4(int *param_1,int param_2);
int * FUN_00472568(int *param_1,char param_2,int *param_3);
int FUN_0047265c(int param_1);
int FUN_00472678(int param_1);
void FUN_004726d8(int *param_1,int *param_2);
void FUN_00472734(int *param_1,int *param_2);
void FUN_00472768(int param_1,int param_2);
void FUN_004727fc(int param_1,char param_2);
void FUN_00472840(int param_1,char param_2);
void FUN_00472854(int param_1);
void FUN_0047288c(int *param_1);
void FUN_00472934(int param_1,byte param_2);
int * FUN_00472974(int *param_1,char param_2,int *param_3);
void FUN_00472a28(int param_1);
void FUN_00472a98(int *param_1);
void FUN_00472ae0(int *param_1,int *param_2);
void FUN_00472be4(int *param_1,int param_2,WPARAM param_3);
int FUN_00472ce0(int param_1,int param_2,char param_3,char param_4);
void FUN_00472d68(int param_1,undefined4 param_2,undefined4 param_3,undefined *param_4,undefined4 param_5);
undefined4 FUN_00472da8(int param_1,int param_2);
undefined4 FUN_00472e24(int param_1,int param_2);
void FUN_00472e74(int param_1,int param_2);
undefined4 FUN_00472e8c(int param_1);
void FUN_00472edc(int param_1,int param_2);
void FUN_00472f00(int *param_1,int param_2);
void FUN_00472f6c(int param_1,undefined4 param_2,undefined4 param_3);
void FUN_00472f8c(int *param_1,int *param_2);
void FUN_00472fdc(int *param_1,char param_2,char param_3);
void FUN_00473028(int *param_1,int *param_2);
void FUN_004730b0(int param_1,int param_2);
void FUN_00473148(int *param_1,int param_2);
void FUN_004731a4(int *param_1,int param_2,undefined4 param_3);
void FUN_00473210(int *param_1,int param_2);
int FUN_00473460(int *param_1,undefined4 *param_2);
void FUN_004734f0(int *param_1,int param_2);
void FUN_004735bc(int *param_1,int *param_2);
void FUN_00473618(int param_1,char param_2);
void FUN_00473644(int *param_1,undefined4 param_2,undefined4 param_3);
undefined4 FUN_0047367c(int param_1);
undefined4 FUN_00473694(int param_1);
void FUN_004736d0(int param_1,char param_2);
void FUN_004736e0(int param_1,char param_2);
void FUN_004736f0(int param_1,char param_2);
void FUN_00473700(int param_1,uint *param_2);
void FUN_00473728(int param_1,int param_2);
int * FUN_00473738(int *param_1,char param_2,int *param_3);
void FUN_00473798(int param_1);
void FUN_004737a4(int param_1,int param_2);
int * FUN_004737ec(int *param_1,char param_2,int *param_3);
void FUN_00473a70(undefined4 param_1,int *param_2,char param_3,char param_4);
void FUN_00473ad8(int *param_1,undefined4 param_2,undefined4 param_3);
void FUN_00473b3c(int *param_1,uint *param_2);
void FUN_00473b68(int *param_1,int param_2);
void FUN_00473db8(int param_1);
void FUN_00473de8(int *param_1,int param_2,char param_3);
void FUN_00473f70(int *param_1,char param_2,char param_3);
void FUN_00474234(int param_1,char param_2);
void FUN_00474278(int param_1,int param_2);
void FUN_00474314(int param_1,int param_2);
void FUN_00474328(int param_1,int param_2);
void FUN_00474390(int *param_1,undefined1 param_2);
void FUN_004744dc(undefined4 *param_1);
int * FUN_004744f4(int *param_1,char param_2,int param_3);
void FUN_0047461c(int param_1);
undefined4 FUN_00474630(int param_1);
undefined4 FUN_00474638(int param_1,int param_2);
uint * FUN_00474678(uint *param_1,uint *param_2);
void FUN_0047470c(int param_1,int param_2);
bool FUN_0047477c(int param_1,undefined1 param_2);
void FUN_00474810(int param_1,undefined1 param_2,char param_3);
void FUN_004748ac(int param_1,int param_2);
void FUN_00474904(int param_1,int param_2);
void FUN_0047495c(int param_1,int param_2);
void FUN_004749ac(int param_1,int param_2);
undefined4 FUN_00474a00(int param_1,int param_2);
undefined4 FUN_00474a30(int param_1,char param_2);
void FUN_00474a84(int param_1,char param_2);
void FUN_00474ac8(int param_1,undefined4 param_2,char param_3);
void FUN_00474bb8(int param_1,undefined4 param_2);
void FUN_00474bc4(int param_1,char param_2);
void FUN_00474bd0(int param_1);
void FUN_00474bd8(int param_1,char param_2);
void FUN_00474c04(int param_1);
void FUN_00474c0c(int param_1,char param_2);
void FUN_00474cac(int param_1,char param_2);
void FUN_00474cb8(int param_1);
void FUN_00474cc0(int param_1,char param_2);
void FUN_00474ce0(int param_1);
void FUN_00474ce8(int param_1,char param_2);
bool FUN_00474d30(int param_1);
void FUN_00474d70(int param_1,char param_2);
void FUN_00474d90(int param_1);
void FUN_00474d98(int param_1,byte param_2);
undefined4 FUN_00474dd0(int param_1);
undefined4 FUN_00474e0c(int param_1);
undefined4 FUN_00474e48(int param_1);
undefined4 FUN_00474e84(int param_1);
undefined4 FUN_00474ec8(int param_1);
undefined4 FUN_00474f0c(undefined4 param_1,int param_2);
undefined4 FUN_00474f1c(int param_1);
int FUN_00474f58(int param_1);
undefined4 FUN_00474f78(int param_1);
int FUN_00474ff0(int param_1);
int FUN_00475020(int param_1);
void FUN_00475058(int param_1,int param_2);
int FUN_004750f8(int param_1,int param_2);
int FUN_0047512c(int param_1);
void FUN_00475148(int *param_1,undefined4 param_2,int param_3,char param_4,undefined4 param_5);
void FUN_004752c4(int *param_1,int *param_2,char param_3);
undefined4 FUN_00475450(int param_1);
undefined4 FUN_00475478(int param_1);
void FUN_004754a8(int param_1,char param_2,undefined4 *param_3);
void FUN_004754e4(int param_1,char param_2);
char FUN_004754f0(int param_1,undefined1 *param_2,undefined4 param_3,char param_4);
void FUN_0047558c(int *param_1);
undefined4 FUN_0047564c(int param_1,int param_2);
void FUN_00475674(uint *param_1,int *param_2,int *param_3);
void FUN_00475764(int param_1,int *param_2,undefined4 *param_3);
int * FUN_00475814(int *param_1,char param_2,int param_3);
undefined4 FUN_0047587c(int param_1);
void FUN_004758a0(int param_1);
void FUN_004758ac(undefined4 param_1,int *param_2);
void FUN_004758b4(int param_1);
void FUN_00475938(int param_1,int param_2,uint *param_3);
void FUN_00475948(int param_1,int param_2,uint *param_3);
void FUN_00475958(int param_1,uint *param_2,int param_3,byte param_4,int param_5,uint *param_6);
void FUN_00475b08(int param_1,int param_2);
void FUN_00475b5c(int param_1,int param_2);
void FUN_00475b7c(undefined4 param_1,int param_2,undefined4 *param_3);
void FUN_00475ba0(int param_1,undefined4 param_2,undefined4 param_3,char param_4,undefined4 *param_5);
void FUN_00475c14(int param_1);
void FUN_00475c30(int param_1,int param_2);
undefined4 FUN_00475d18(int param_1,undefined4 param_2);
void FUN_00475d48(int param_1);
void FUN_00475d60(int param_1,byte param_2);
void FUN_00475d94(int param_1);
uint FUN_00475e3c(void);
void FUN_00475f24(int param_1,int *param_2);
void FUN_00475fec(int param_1,int *param_2);
int FUN_0047605c(int param_1,int *param_2);
void FUN_004760d8(int param_1,int *param_2);
void FUN_00476134(int param_1);
void FUN_004766f8(int *param_1);
void FUN_004768bc(int *param_1,UINT *param_2,undefined4 param_3);
void FUN_004769bc(int *param_1);
void FUN_004769fc(int *param_1);
void FUN_00476a4c(int *param_1,char param_2);
bool FUN_00476a58(int *param_1,undefined1 *param_2,undefined4 param_3,char param_4);
undefined4 FUN_00476b30(int *param_1,undefined4 param_2,undefined4 param_3);
uint FUN_00476b68(int *param_1,undefined4 param_2,undefined4 param_3);
void FUN_00476c20(int *param_1,WPARAM param_2);
void FUN_00476c44(int *param_1);
void FUN_00476c58(int param_1);
undefined4 FUN_00476ca0(int *param_1);
void FUN_00476cd0(int *param_1,int param_2);
int FUN_00476d20(int *param_1);
void FUN_00476d68(int *param_1,int param_2);
int FUN_00476d8c(int *param_1);
void FUN_00476dc4(int *param_1,int param_2);
undefined4 FUN_00476df8(int param_1,int param_2);
void FUN_00476e20(int *param_1,int param_2);
void FUN_00477990(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_00477a38(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void FUN_00477d60(int *param_1,LPARAM param_2,WPARAM param_3);
void FUN_00477d88(int *param_1,int *param_2);
void FUN_00477e24(int *param_1,int param_2);
void FUN_00477e8c(int *param_1,int param_2);
void FUN_00478378(int *param_1,int param_2);
void FUN_004783dc(int *param_1,int param_2,undefined4 param_3);
void FUN_0047840c(int *param_1);
void FUN_00478420(int *param_1,int param_2,byte param_3);
undefined4 FUN_00478608(int param_1);
void FUN_00478614(int param_1,int param_2);
void FUN_0047862c(int *param_1);
void FUN_004786e4(int param_1,int param_2);
void FUN_0047870c(int param_1,int param_2,int param_3);
void FUN_00478758(int *param_1,int param_2);
void FUN_004787d0(int *param_1,int param_2,undefined4 param_3,char param_4);
void FUN_004789b0(int param_1,int param_2,char param_3);
void FUN_00478a4c(int param_1);
void FUN_00478b70(int *param_1,int *param_2,undefined4 param_3);
bool FUN_00478d20(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
int FUN_00478d50(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
void FUN_00478e44(int *param_1,int *param_2);
void FUN_00478e88(void);
int * FUN_00478ec0(int *param_1,char param_2,int *param_3);
void FUN_00479030(int *param_1);
LRESULT FUN_00479084(int *param_1);
int FUN_004790bc(int *param_1);
void FUN_0047910c(int *param_1,uint param_2,int param_3);
void FUN_0047925c(int *param_1,int param_2);
void FUN_0047926c(int *param_1,WPARAM param_2);
void FUN_004792b8(int *param_1,int param_2);
void FUN_004792f4(int *param_1,WPARAM param_2);
int * FUN_00479348(int *param_1,char param_2,int param_3,undefined1 param_4);
void FUN_00479390(undefined4 param_1,undefined4 *param_2);
void FUN_004793ac(int param_1,undefined4 *param_2);
void FUN_004793ec(int param_1,LPARAM param_2);
undefined1 FUN_00479428(int param_1);
void FUN_0047943c(int param_1,undefined1 param_2);
undefined4 FUN_0047946c(int param_1);
void FUN_0047948c(int param_1,uint param_2);
void FUN_004794d4(int param_1,int *param_2);
void FUN_004794f8(int param_1,undefined *param_2);
byte FUN_00479568(int param_1);
void FUN_004795b8(int param_1,byte param_2);
int FUN_00479610(int param_1);
void FUN_0047962c(int param_1,int param_2);
undefined4 FUN_00479664(int param_1);
void FUN_00479694(int param_1,char param_2);
int * FUN_00479944(int *param_1,char param_2,int param_3);
void FUN_00479980(undefined4 param_1,undefined4 *param_2);
void FUN_0047999c(int param_1,undefined4 *param_2);
void FUN_004799d0(int param_1,int param_2);
int FUN_00479a34(int param_1);
void FUN_00479a50(int param_1,byte param_2);
undefined1 FUN_00479a8c(int param_1);
void FUN_00479aa4(int param_1,byte param_2);
int FUN_00479b08(int param_1);
void FUN_00479b28(int param_1,int param_2);
int FUN_00479b64(int param_1);
void FUN_00479b84(int param_1,int param_2);
int FUN_00479bc0(int param_1);
void FUN_00479be0(int param_1,int param_2);
int FUN_00479c1c(int param_1,byte param_2);
void FUN_00479c44(int param_1,byte param_2,int param_3);
void FUN_00479c98(int *param_1,int *param_2);
void FUN_00479d48(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4);
void FUN_00479fbc(int param_1,WPARAM param_2,undefined *param_3);
void FUN_0047a048(int param_1,WPARAM param_2,undefined4 param_3);
void FUN_0047a2e0(int param_1,char param_2);
int FUN_0047a38c(char *param_1,char *param_2);
undefined4 FUN_0047a3c0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4);
void FUN_0047a890(int *param_1,undefined *param_2);
void FUN_0047aafc(int *param_1);
void FUN_0047af2c(int *param_1,char *param_2,int param_3);
void FUN_0047b03c(int param_1,char param_2);
void FUN_0047b050(int *param_1,char param_2);
void FUN_0047b080(int *param_1,int param_2);
undefined4 FUN_0047b0dc(int param_1);
void FUN_0047b0e8(int param_1,undefined1 param_2);
void FUN_0047b158(int *param_1,undefined4 *param_2);
void FUN_0047b480(int *param_1,int param_2,undefined4 param_3);
uint FUN_0047b4fc(int param_1,undefined4 param_2,undefined4 param_3);
uint FUN_0047b52c(int param_1,undefined4 param_2,uint param_3);
int * FUN_0047b59c(int *param_1,char param_2,int *param_3);
void FUN_0047b844(int *param_1,int param_2);
void FUN_0047b89c(int *param_1,undefined4 param_2,undefined4 param_3);
undefined4 FUN_0047b9cc(int *param_1,int param_2);
void FUN_0047b9fc(int *param_1,int *param_2);
void FUN_0047bc08(int *param_1,int *param_2);
void FUN_0047bc5c(int *param_1,int param_2,char param_3);
void FUN_0047bd2c(int *param_1,short param_2);
void FUN_0047bd74(int *param_1,int param_2);
void FUN_0047bdd0(int *param_1,undefined4 param_2);
void FUN_0047bf20(int *param_1,char param_2);
void FUN_0047bf5c(int *param_1,char param_2);
void FUN_0047bf98(int *param_1,char param_2);
void FUN_0047bfd4(int *param_1,char param_2);
int * FUN_0047c010(int *param_1,char param_2,int param_3);
void FUN_0047c1ac(void);
void FUN_0047c2a8(int param_1);
void FUN_0047c3d8(int param_1,uint *param_2);
undefined4 FUN_0047c400(int param_1);
void FUN_0047c434(int param_1,int param_2);
void FUN_0047c460(int param_1,char param_2);
void FUN_0047c498(int param_1,char param_2);
void FUN_0047c4cc(int param_1,int param_2);
void FUN_0047c4dc(int param_1,int param_2);
void FUN_0047c4ec(int param_1,int param_2);
int * FUN_0047c594(int *param_1,char param_2,int param_3);
void FUN_0047c5d8(int param_1,int param_2);
undefined4 FUN_0047c5ec(int param_1);
void FUN_0047c628(int *param_1);
void FUN_0047c874(int param_1,int param_2);
int * FUN_0047c99c(int *param_1,char param_2,int param_3);
int FUN_0047ca40(int *param_1,undefined4 param_2,int param_3);
void FUN_0047ca8c(int param_1);
void FUN_0047ca98(int param_1,int param_2);
void FUN_0047cadc(int *param_1,int param_2);
void FUN_0047cb38(int param_1,int param_2);
void FUN_0047cb70(int param_1,int param_2);
void FUN_0047cb84(int param_1,int param_2,int param_3);
int * FUN_0047cb90(int *param_1,char param_2,int param_3);
undefined4 FUN_0047cc4c(int param_1);
void FUN_0047cc54(int *param_1);
void FUN_0047cc78(int param_1);
bool FUN_0047cc8c(int param_1);
void FUN_0047ccd0(int param_1,uint param_2);
void FUN_0047cd1c(int param_1);
uint * FUN_0047cd38(int param_1,uint *param_2);
void FUN_0047cde8(int param_1,int param_2);
bool FUN_0047ce48(int param_1,undefined4 param_2);
void FUN_0047ceb0(int param_1,undefined4 param_2,char param_3);
void FUN_0047cf20(int param_1,int param_2,int param_3);
void FUN_0047d05c(int param_1,int param_2);
undefined4 FUN_0047d160(int param_1,int param_2);
void FUN_0047d188(int param_1,int param_2);
undefined4 FUN_0047d19c(int param_1);
void FUN_0047d1b8(int param_1,byte param_2,undefined4 *param_3);
void FUN_0047d1e8(int param_1,int param_2);
void FUN_0047d1f4(int param_1,int param_2,int param_3);
int * FUN_0047d260(int *param_1,char param_2,int param_3);
void FUN_0047d2c8(int param_1);
int FUN_0047d2d4(int param_1,int param_2,int param_3);
undefined4 FUN_0047d324(int param_1);
void FUN_0047d348(int param_1);
undefined4 FUN_0047d354(int param_1,undefined4 param_2);
void FUN_0047d3d4(int param_1,undefined4 param_2);
void FUN_0047d3fc(int param_1,WPARAM param_2);
void FUN_0047d418(int param_1);
void FUN_0047d438(int param_1);
void FUN_0047d450(int param_1,char param_2);
void FUN_0047d614(int param_1);
uint FUN_0047d688(void);
int FUN_0047d968(int param_1);
void FUN_0047dc20(int param_1,undefined4 param_2);
void FUN_0047dc38(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4);
int * FUN_0047dc5c(int *param_1,char param_2,int param_3);
void FUN_0047dcd0(int param_1,char param_2);
void FUN_0047dce4(int param_1,char param_2);
void FUN_0047dcf8(int param_1,char param_2);
int * FUN_0047dd78(int *param_1,char param_2,int *param_3);
void FUN_0047e18c(void);
void FUN_0047e240(int *param_1);
void FUN_0047e428(int *param_1,undefined4 param_2,undefined4 param_3);
void FUN_0047e4a4(int *param_1,LPARAM param_2,WPARAM param_3);
void FUN_0047e4cc(int *param_1,int *param_2);
void FUN_0047e5b4(void);
void FUN_0047e8e8(int *param_1,WPARAM param_2,LPARAM param_3);
void FUN_0047e908(int *param_1);
void FUN_0047ea04(int param_1,undefined4 param_2,undefined4 param_3);
void FUN_0047ea90(int param_1,undefined4 param_2,undefined4 param_3);
void FUN_0047eb14(int *param_1,char param_2);
void FUN_0047ec60(int param_1,char param_2);
void FUN_0047ec74(int param_1,char param_2);
void FUN_0047ece4(int param_1,char param_2);
void FUN_0047ecf8(int *param_1);
void FUN_0047ed18(int *param_1);
void FUN_0047ed4c(int *param_1,WPARAM param_2);
void FUN_0047ed7c(int *param_1);
bool FUN_0047efe8(int param_1);
bool FUN_0047eff4(int param_1);
void FUN_0047f000(int *param_1);
void FUN_0047f040(int param_1,char param_2);
int * FUN_0047f094(int *param_1,char param_2);
void FUN_0047f118(int *param_1,int *param_2);
undefined4 FUN_0047f168(int *param_1);
byte FUN_0047f2ac(uint param_1);
void FUN_0047f2f8(int *param_1,uint *param_2);
void FUN_0047f428(int *param_1);
undefined4 FUN_0047f43c(uint param_1);
uint FUN_0047f460(uint param_1);
void FUN_00480178(int *param_1,int param_2,int param_3);
void FUN_0048020c(int param_1,undefined4 param_2,undefined4 *param_3);
void FUN_0048025c(int param_1,uint *param_2,int param_3);
void FUN_00480444(int *param_1,uint *param_2,undefined4 param_3);
void FUN_004806f8(int *param_1,int *param_2,undefined4 param_3,char param_4,undefined4 param_5);
bool FUN_0048079c(int *param_1);
void FUN_004807cc(int *param_1,char param_2);
void FUN_00480804(int *param_1,LPARAM param_2);
undefined4 FUN_0048081c(int *param_1);
void FUN_00480854(int *param_1,int param_2);
void FUN_004808c4(int *param_1,int param_2);
void FUN_0048093c(int *param_1,int param_2,undefined4 param_3);
void FUN_004809f8(int param_1,int param_2);
void FUN_00480a04(int *param_1);
int FUN_00480a1c(int *param_1);
void FUN_00480a40(int *param_1,int param_2);
void FUN_00480ae0(int param_1,undefined4 param_2);
undefined4 FUN_00480b00(int *param_1,int param_2,undefined1 param_3,byte param_4);
undefined4 FUN_00480bd4(int *param_1,undefined4 *param_2,byte param_3);
undefined4 FUN_00480c3c(int *param_1,undefined4 param_2,undefined4 param_3);
void FUN_00480ca0(int *param_1,byte param_2);
void FUN_00480cc0(int *param_1);
void FUN_00480d00(int *param_1,int param_2);
void FUN_00480e48(int *param_1,int param_2);
void FUN_00480fac(int *param_1,undefined4 param_2,undefined4 param_3);
void FUN_00481174(int *param_1,int param_2);
undefined1 FUN_0048147c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined2 param_5);
void FUN_004814f4(int param_1,int param_2,int *param_3,undefined2 param_4);
void FUN_0048156c(int param_1,int param_2,int param_3,undefined4 param_4);
void FUN_004815b0(int *param_1);
int FUN_00481948(int param_1,int param_2);
void FUN_004819f4(int param_1);
void FUN_00481a30(int param_1,int *param_2);
void FUN_00481b58(int param_1);
void FUN_00481b94(int param_1);
void FUN_00481c58(int param_1,int param_2);
void FUN_00481c88(int param_1,undefined4 *param_2);
void FUN_00481d5c(int param_1,undefined4 param_2);
void FUN_00481d94(int param_1);
int * FUN_00481da0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,undefined4 param_6,undefined4 param_7);
void FUN_00481e08(int param_1,int param_2);
void FUN_00481e1c(int param_1,undefined4 param_2);
void FUN_00481ea0(int *param_1,WPARAM param_2);
int * FUN_00481f84(int *param_1,char param_2,int *param_3);
void FUN_00482164(int *param_1,int param_2);
void FUN_0048267c(int param_1,undefined4 param_2);
int * FUN_00482838(int *param_1,char param_2,int param_3);
void FUN_00482a1c(int param_1,int param_2,int *param_3);
void FUN_00482ad8(int param_1,int param_2,undefined4 param_3);
void FUN_00482c20(int *param_1,int param_2);
void FUN_00482cf8(void);
void FUN_00484ad0(undefined4 *param_1,undefined4 *param_2,int *param_3);
void FUN_00484b68(int *param_1);
void FUN_00484c58(int *param_1);
void FUN_00484d14(undefined4 *param_1,int *param_2,int param_3,int *param_4);
void FUN_00484e5c(undefined4 param_1,int *param_2);
void FUN_00484ff8(undefined4 param_1,int *param_2);
void FUN_004850d8(undefined4 *param_1,char *param_2,int *param_3,int *param_4);
LONG FUN_0048537c(int param_1);
int * FUN_004853bc(int *param_1,char param_2,int *param_3);
void FUN_004854a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4);
void FUN_00485710(int *param_1,byte param_2);
void FUN_004858a8(int *param_1);
void FUN_004858cc(int param_1,undefined4 param_2,int *param_3);
void FUN_00485a14(int *param_1);
void FUN_00485aa4(int *param_1);
void FUN_00485ae0(int param_1,undefined4 param_2,undefined4 param_3);
int FUN_00485c1c(undefined *param_1);
int * FUN_00485c48(int *param_1,char param_2,int *param_3);
void FUN_00485d04(int *param_1,byte param_2);
void FUN_00485dfc(int param_1,int param_2,undefined4 param_3);
void FUN_00485e68(int *param_1);
void FUN_00485ec4(int param_1,undefined4 *param_2,int *param_3);
void FUN_00485ef4(int param_1,undefined *param_2,undefined *param_3);
void FUN_00485f14(undefined4 param_1,undefined4 *param_2,int *param_3);
void FUN_00486430(int param_1);
void FUN_004865e4(int param_1,int param_2,int *param_3);
void FUN_004867c8(int param_1);
undefined4 FUN_00486800(int param_1);
void FUN_0048680c(int *param_1,byte param_2);
void FUN_004869b8(int *param_1,int param_2,char param_3);
void FUN_00486a0c(int param_1);
int * FUN_00486a84(int *param_1,char param_2,int *param_3);
void FUN_00486fe4(int *param_1);
void FUN_004870e8(int *param_1,int *param_2);
void FUN_00487138(int *param_1,undefined *param_2);
void FUN_00487394(int *param_1,undefined *param_2);
void FUN_004873e8(int *param_1,char param_2);
void FUN_00487410(int *param_1,uint *param_2);
void FUN_00487440(int *param_1);
void FUN_00487454(int param_1);
void FUN_0048773c(int *param_1,char param_2);
void FUN_00487d24(int param_1);
void FUN_00487db4(int param_1);
void FUN_00487e84(int param_1,uint param_2,undefined4 param_3);
void FUN_00487ebc(int param_1,undefined4 *param_2);
void FUN_0048800c(int param_1,int *param_2);
void FUN_0048803c(int *param_1);
void FUN_0048805c(int param_1);
void FUN_004880f4(int *param_1,byte param_2,int param_3);
void FUN_00488304(undefined *param_1,int *param_2,int *param_3);
void FUN_004884dc(undefined *param_1);
void FUN_004884e4(uint *param_1);
void FUN_00488780(undefined4 *param_1,undefined4 *param_2,uint param_3);
int FUN_004887a8(int param_1);
int FUN_004887d8(int param_1);
int * FUN_00488808(int *param_1,char param_2,int *param_3);
int * FUN_00488870(int *param_1,char param_2,int *param_3);
int FUN_00488910(int *param_1,int param_2,int param_3);
int FUN_004889c8(int *param_1,uint param_2,short param_3);
undefined4 FUN_00488a94(int param_1);
undefined4 FUN_00488b00(int param_1);
undefined4 FUN_00488b68(int param_1,int param_2,char *param_3,int param_4);
void FUN_00488c88(int param_1,char *param_2,int param_3);
int FUN_00488cb4(int *param_1,int param_2);
undefined4 FUN_00489400(int *param_1,uint param_2,uint param_3,int param_4,uint *param_5,int *param_6,int param_7,int param_8);
int FUN_00489994(int *param_1,uint *param_2,int *param_3,int param_4);
int FUN_00489a08(uint param_1,uint param_2,int *param_3,int param_4,int *param_5,int *param_6,uint *param_7,uint *param_8);
undefined4 FUN_00489b38(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4);
undefined4 FUN_00489d00(int param_1,int param_2);
void FUN_00489fc4(int *param_1,int param_2,int *param_3);
int * FUN_0048a094(int param_1,int param_2,int param_3);
void FUN_0048a13c(undefined4 *param_1,int *param_2,int param_3);
undefined4 FUN_0048b3f4(int *param_1,int param_2,int *param_3);
undefined4 *FUN_0048b484(undefined1 param_1,undefined1 param_2,undefined4 param_3,int param_4,undefined4 param_5);
void FUN_0048b4e8(int param_1,int *param_2,int param_3);
void FUN_0048c1c0(undefined4 param_1,int param_2);
int FUN_0048c1e0(int param_1,int param_2,int param_3);
undefined4 FUN_0048c3ac(int param_1,int param_2,int param_3,int *param_4,int param_5,int param_6);
void FUN_0048c87c(undefined *param_1,undefined *param_2);
void FUN_0048cac8(char *param_1,int param_2,char *param_3,int *param_4);
void FUN_0048cbc4(void);
void FUN_0048cc9c(void);
int FUN_0048ccd4(int param_1,int param_2);
int FUN_0048cd2c(int param_1,int param_2,int param_3);
void FUN_0048cdb4(int param_1,int param_2,int param_3,int *param_4);
void FUN_0048ce28(void);
void FUN_0048ce9c(undefined *param_1);
void FUN_0048d090(int param_1,undefined *param_2,int *param_3);
void FUN_0048d354(void);
void FUN_0048d5a4(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_0048d5b0(void);
void FUN_0048d880(int param_1);
void FUN_0048d8c0(int param_1);
void FUN_0048d8f0(void);
void FUN_0048e074(int param_1);
BOOL __stdcall GetOpenFileNameA(LPOPENFILENAMEA param_1);
undefined4 FUN_0048e3a4(void);
void FUN_0048e3e0(int *param_1,char param_2,undefined4 param_3);
void FUN_0048e404(void);
int * FUN_0048e5a0(int *param_1,char param_2,int *param_3);
void FUN_0048e624(int param_1);
void FUN_0048e680(int param_1,undefined4 param_2);
void FUN_0048eed4(void);
void FUN_0049005c(void);
void FUN_004904f0(int param_1);
int * FUN_004911f8(int *param_1,char param_2,int *param_3);
void FUN_0049132c(int *param_1,char param_2);
void FUN_004913d4(int *param_1);
void FUN_004914d0(int param_1);
int * FUN_004914e4(int *param_1,char param_2,undefined4 param_3);
void FUN_004915f8(int param_1,undefined4 *param_2);
void FUN_00491614(int param_1);
int * FUN_00491628(int *param_1,char param_2,undefined4 param_3);
void FUN_00491804(void);
int * FUN_00491a4c(int *param_1,char param_2,int *param_3);
void FUN_00491b0c(void);
void FUN_00491f84(int param_1,undefined4 *param_2);
void FUN_00492054(int param_1);
void FUN_004920c8(int *param_1,char param_2,undefined4 param_3);
void FUN_0049274c(int param_1);
void FUN_00492840(int param_1,undefined4 *param_2);
void FUN_004928a4(int *param_1,char param_2,undefined4 param_3);
void FUN_00492cdc(int param_1);
void FUN_00492f18(void);
void FUN_00493c44(int param_1);
void FUN_00493edc(int param_1);
void FUN_0049462c(void);
void FUN_00494bd4(void);
void FUN_00494c40(byte *param_1);
void FUN_0049506c(int param_1,uint *param_2,int *param_3);
void FUN_00495114(int param_1,int param_2);
void FUN_0049522c(int param_1,int param_2,int *param_3);
void FUN_00495350(int *param_1,int *param_2,uint *param_3,int *param_4);
void FUN_00495700(int param_1);
void FUN_004957e4(undefined4 param_1,undefined *param_2);
void FUN_004960c8(undefined4 *param_1);
void FUN_00496784(int param_1,int param_2);
void FUN_00497044(int param_1);
void FUN_00497114(int param_1);
void FUN_004971e4(byte *param_1,uint *param_2);
void FUN_00497784(int param_1);
void FUN_00497824(int param_1,int param_2,undefined4 param_3,int *param_4,int param_5);
void FUN_00498ed0(int param_1,uint *param_2,undefined4 param_3,char param_4);
void FUN_0049a214(undefined *param_1);
void FUN_0049b264(undefined4 *param_1,int param_2);
void FUN_0049b324(undefined4 *param_1,int param_2);
void FUN_0049b3e4(undefined *param_1);
void FUN_0049b7c0(undefined *param_1);
void FUN_0049d0a0(int param_1);
void FUN_0049d270(int param_1,int param_2);
void FUN_0049e1f8(int param_1);
void FUN_0049fe7c(int param_1);
void FUN_004a0204(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_004a0828(undefined4 param_1);
void FUN_004a5fc0(undefined4 *param_1,int param_2,int param_3,undefined *param_4);
void FUN_004a619c(int param_1,undefined4 *param_2);
void FUN_004a625c(int param_1,byte *param_2);
void FUN_004a6308(undefined4 *param_1,int param_2,byte *param_3,undefined4 *param_4);
void FUN_004a66b8(undefined4 *param_1,int param_2,byte *param_3);
void FUN_004a6adc(void);
void FUN_004a6ae0(undefined4 *param_1,int param_2,undefined4 *param_3);
void FUN_004a6fd8(undefined4 param_1,undefined4 param_2,int param_3,int *param_4,undefined4 param_5,int param_6);
void entry(void);

