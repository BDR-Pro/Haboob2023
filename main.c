
undefined4 FUN_00401447(int param_1,int param_2)

{
  char cVar1;
  ulong _Size;
  undefined8 *_Dst;
  size_t sVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined2 local_8;
  undefined local_6;
  
  print(          );
  print("\nSecure Channel Created..\nThis binary is totally bug free... Trust me bro \n\n");
  if (param_1 < 2) {
    pcVar6 = "[x] Choose from 1 to 5\n0 to End Your Misery\n";
  }
  else {
    uVar3 = 0;
    cVar1 = **(char **)(param_2 + 4);
    local_14 = 0xefefc2fb;
    local_10 = 0xede1c3f4;
    local_c = 0xf0f9c8f0;
    local_8 = 0xfde5;
    local_6 = 0;
    if ((cVar1 < '1') || ('9' < cVar1)) {
LAB_00401670:
                    /* WARNING: Subroutine does not return */
      _exit(1);
    }
    if (cVar1 == '0') {
      pcVar6 = "Hope We See You Soon ^_^\n";
    }
    else {
      if (cVar1 == '1') {
        print("[-] Pass Me: {");
        iVar4 = 0;
        do {
          print(&DAT_00418c64,*(undefined *)((int)&local_14 + iVar4));
          if (iVar4 != 13) {
            print(&DAT_00418c6c);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < 14);
        print(&DAT_00418c70);
        if (param_1 != 3) {
          return 0;
        }
        sVar2 = _strlen(*(char **)(param_2 + 8));
        if (sVar2 == 0) {
          return 0;
        }
        pcVar6 = *(char **)(param_2 + 8);
        if (*pcVar6 != '{') {
          return 0;
        }
        uVar5 = 0;
        sVar2 = __mbslen((uchar *)&local_14);
        if (sVar2 != 0) {
          do {
            *(byte *)((int)&local_14 + uVar5) = *(byte *)((int)&local_14 + uVar5) | 0x80;
            uVar5 = uVar5 + 1;
            sVar2 = __mbslen((uchar *)&local_14);
          } while (uVar5 < sVar2);
        }
        sVar2 = __mbslen((uchar *)&local_14);
        if (sVar2 != 0) {
          do {
            *(byte *)((int)&local_14 + uVar3) = *(byte *)((int)&local_14 + uVar3) & 0x7f;
            uVar3 = uVar3 + 1;
            sVar2 = __mbslen((uchar *)&local_14);
          } while (uVar3 < sVar2);
        }
        iVar4 = _strcmp((char *)&local_14,pcVar6);
        if (iVar4 != 0) {
          return 0;
        }
        *DAT_0041b2ec = 2;
        return 0;
      }
      if (cVar1 == '2') {
        print("[x] Ending Parameters..\n");
        if (param_1 == 3) {
          _Size = _strtoul(*(char **)(param_2 + 8),(char **)0x0,0);
          _Dst = (undefined8 *)FUN_0040525c(_Size << 3);
          if (_Dst != (undefined8 *)0x0) {
            _memset(_Dst,1,_Size);
          }
          FUN_00404f70(_Dst);
          *_Dst = 0x4024000000000000;
          return 0;
        }
      }
      else {
        if (cVar1 == '3') {
          print("[x] Bottom Initilization..\n");
          FUN_004011ef();
          return 0;
        }
        if (cVar1 != '4') {
          if (cVar1 == '5') {
            print("[x] Starting Secret Data Exchange..\n");
            FUN_004016b3();
            return 0;
          }
          print("[-] Invalid Choice.\n");
          goto LAB_00401670;
        }
        print("[x] Sending Secret..\n");
        if (param_1 == 4) {
          _strtoul(*(char **)(param_2 + 0xc),(char **)0x0,0);
          FUN_00401344();
          return 0;
        }
      }
      pcVar6 = "[-] Invalid number of arguments.\n";
    }
  }
  print(pcVar6);
  return 0;
}

