#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	float fLocal_4 = 0f;
#endregion

void __EntryFunction__()
{
	fLocal_4 = -99f;
	unk_0x20A629A7D3DC97F2();
	if (unk_0x2C897F101BA20806(32))
	{
		func_30();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_29(0);
		func_28();
		func_21();
		func_18();
		func_13();
		func_2();
		iLocal_1++;
		if (iLocal_1 >= 16)
		{
			iLocal_1 = 0;
		}
		iLocal_2++;
		if (iLocal_2 >= 16)
		{
			iLocal_2 = 0;
		}
		iLocal_3++;
		if (iLocal_3 >= 5)
		{
			iLocal_3 = 0;
		}
		if (!func_1())
		{
			func_30();
		}
	}
}

int func_1()
{
	if (Global_35931)
	{
		return 1;
	}
	if (unk_0xBAB691F99A2A7346(Global_35932))
	{
		return 1;
	}
	if (unk_0x16CDA1894CFE0781(joaat("drunk")) > 0)
	{
		return 1;
	}
	if (Global_35741 > 0)
	{
		return 1;
	}
	return 0;
}

void func_2()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	bool bVar5;
	
	if (!Global_35931)
	{
		return;
	}
	iVar0 = unk_0x09560C7DE2A384BD();
	if (Global_35933 > iVar0 || Global_35933 == -1)
	{
		if (unk_0xB4B5BF5882A555F9())
		{
			return;
		}
		fVar1 = func_12();
		fVar2 = func_7();
		if (Global_35936 != Global_35937)
		{
			fVar3 = (Global_35937 - Global_35936);
			Global_35936 = (Global_35936 + (fVar3 * 0.1f));
			if (unk_0x3545D662A0A53653((Global_35936 - Global_35937)) < 0.01f)
			{
				Global_35936 = Global_35937;
			}
		}
		if (!unk_0xEB41CF848D5C74B3())
		{
			unk_0xAB5CCF01CDA7E330("DRUNK_SHAKE", ((Global_35936 * fVar1) * fVar2));
		}
		unk_0xAEED20447B8CECBE(((Global_35936 * fVar1) * fVar2));
		unk_0xA1D3E8BBFB4D4920(((Global_35935 * fVar1) * fVar2));
		if (((Global_35935 * fVar1) * fVar2) < 1f)
		{
			unk_0x10B8CEB2B722BF40(((Global_35935 * fVar1) * fVar2));
		}
		else
		{
			unk_0x10B8CEB2B722BF40(1f);
		}
		if (!unk_0x6E159174C751778D())
		{
			unk_0xFAF5828A1961B083("DRUNK_SHAKE", (((Global_35936 * Global_35930) * fVar1) * fVar2));
		}
		unk_0x6826F3546F4ED44C((((Global_35936 * Global_35930) * fVar1) * fVar2));
		if (unk_0xBAB691F99A2A7346(Global_35932))
		{
			if (unk_0xBFD41349389EDB4B(Global_35932))
			{
				unk_0xB37AA66899507900(Global_35932, ((Global_35936 * fVar1) * fVar2));
			}
		}
		if (!unk_0x06771AF7795B3ECF(&Global_35959) && !unk_0x06771AF7795B3ECF(&Global_35943))
		{
			unk_0x3EF2F05E6EA65602(&Global_35943);
			StringCopy(&Global_35959, "", 16);
		}
		unk_0xDE2F7549DBE656D4();
		if (Global_35938 > 0f)
		{
			if (fLocal_4 != Global_35938)
			{
				if (unk_0xD58373CDEEC1F357() != -1)
				{
				}
				else
				{
					unk_0xEEA34448095CC22C(&Global_35939, 15f);
					fLocal_4 = Global_35938;
				}
			}
			else
			{
				if (unk_0xD58373CDEEC1F357() != -1 && unk_0xD6D9715C81634F0A() != -1)
				{
					fLocal_4 = -99f;
				}
				unk_0x9E450B87184E155A(2);
				iVar4 = (Global_35933 - iVar0);
				if (iVar4 <= (Global_35934 / 2))
				{
					bVar5 = false;
					if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
					{
						if (unk_0x2E7891B765D55582(unk_0xA16EC202D9D35357()))
						{
							bVar5 = true;
						}
					}
					if (func_5(unk_0xA16EC202D9D35357()))
					{
						Global_35933 += 1000;
					}
					else if (bVar5)
					{
						Global_35933 += 1000;
					}
					else if (unk_0xD58373CDEEC1F357() != -1)
					{
						Global_35933 += 1000;
					}
					else
					{
						if (unk_0xD6D9715C81634F0A() != -1)
						{
							unk_0xA6FF5872E96CCB46((unk_0xBBDA792448DB5A89((Global_35934 / 2)) / 1000f));
						}
						fLocal_4 = -99f;
						Global_35938 = 0f;
						StringCopy(&Global_35939, "", 16);
					}
				}
			}
		}
		return;
	}
	func_3(1);
	iLocal_0 = 1;
}

void func_3(bool bParam0)
{
	unk_0xA1D3E8BBFB4D4920(0f);
	unk_0x10B8CEB2B722BF40(0f);
	unk_0xAEED20447B8CECBE(0f);
	unk_0x32B9BE5C33D72403(1);
	unk_0x6826F3546F4ED44C(0f);
	unk_0x1AD37E488BC8D426(1);
	unk_0x9E450B87184E155A(0);
	if (unk_0x4CBFDAD06D630F7C("SAFEHOUSE_STONED_MICHAEL"))
	{
		unk_0x124843CE93F39C27("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!unk_0x06771AF7795B3ECF(&Global_35943))
	{
		if (unk_0x4CBFDAD06D630F7C(&Global_35943))
		{
			unk_0x124843CE93F39C27(&Global_35943);
		}
	}
	if (unk_0xBAB691F99A2A7346(Global_35932))
	{
		if (unk_0xBFD41349389EDB4B(Global_35932))
		{
			unk_0xB37AA66899507900(Global_35932, 0f);
			unk_0x05F0ADDBF1E7785B(Global_35932, 1);
		}
	}
	if (bParam0)
	{
		if (unk_0xD6D9715C81634F0A() != -1 || unk_0xD58373CDEEC1F357() != -1)
		{
			unk_0x2116F20DFA679353();
		}
		else if (unk_0xB4B5BF5882A555F9())
		{
			unk_0x2116F20DFA679353();
		}
	}
	Global_35938 = 0f;
	StringCopy(&Global_35939, "", 16);
	StringCopy(&Global_35943, "", 64);
	StringCopy(&Global_35959, "", 16);
	func_4();
}

void func_4()
{
	Global_35931 = 0;
	Global_35932 = 0;
	Global_35933 = 0;
	Global_35934 = 30000;
	Global_35935 = 0f;
	Global_35937 = 0f;
	Global_35936 = 0f;
	Global_35938 = 0f;
	StringCopy(&Global_35939, "", 16);
}

int func_5(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_6(iParam0) == -1)
	{
		return 0;
	}
	return 1;
}

int func_6(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_35768[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_35768[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

float func_7()
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = 1f;
	iVar1 = func_11(unk_0xA16EC202D9D35357());
	iVar2 = func_8(unk_0xA16EC202D9D35357());
	if (iVar2 == 0)
	{
		if (iVar1 != 0)
		{
			fVar0 = (unk_0xBBDA792448DB5A89(iVar1) / unk_0xBBDA792448DB5A89(10));
			if (fVar0 > 1f)
			{
				fVar0 = 1f;
			}
		}
	}
	else if (iVar2 != 0)
	{
		fVar0 = (unk_0xBBDA792448DB5A89(iVar2) / unk_0xBBDA792448DB5A89(5));
		if (fVar0 > 1f)
		{
			fVar0 = 1f;
		}
	}
	return fVar0;
}

int func_8(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x538DF9E5B1DF01EB(iParam0))
	{
		return 0;
	}
	iVar0 = func_10(iParam0);
	iVar1 = func_9(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_35768[iVar1 /*5*/].f_4;
}

int func_9(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_35768[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_10(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_35768[iVar0 /*5*/].f_1)
		{
			return Global_35768[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

int func_11(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x538DF9E5B1DF01EB(iParam0))
	{
		return 0;
	}
	iVar0 = func_10(iParam0);
	iVar1 = func_9(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_35768[iVar1 /*5*/].f_3;
}

float func_12()
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = unk_0x09560C7DE2A384BD();
	fVar1 = 1f;
	iVar2 = (Global_35933 - iVar0);
	if (iVar2 <= Global_35934)
	{
		if (Global_35933 != -1)
		{
			fVar1 = (unk_0xBBDA792448DB5A89(iVar2) / unk_0xBBDA792448DB5A89(Global_35934));
		}
	}
	return fVar1;
}

void func_13()
{
	if (Global_35742[iLocal_3 /*5*/] == 0)
	{
		func_14(iLocal_3);
	}
}

void func_14(int iParam0)
{
	int iVar0;
	struct<5> Var1;
	
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (unk_0xE44A580B551C3645(Global_35742[iParam0 /*5*/].f_1))
	{
		func_17(iParam0);
		return;
	}
	if (func_5(Global_35742[iParam0 /*5*/].f_1))
	{
		func_17(iParam0);
		return;
	}
	if (!unk_0x3EBB3CB89FC2CE55("drunk"))
	{
		unk_0x19DD85EFF70867D4("drunk");
		return;
	}
	iVar0 = func_16();
	if (iVar0 == -1)
	{
		func_17(iParam0);
		return;
	}
	Global_35768[iVar0 /*5*/] = func_15();
	Global_35768[iVar0 /*5*/].f_1 = Global_35742[iParam0 /*5*/].f_1;
	Global_35768[iVar0 /*5*/].f_2 = 0;
	Var1 = { Global_35742[iParam0 /*5*/] };
	unk_0xB8BA7F44DF1575E1("drunk", &Var1, 5, 1424);
	unk_0xF8FDF7446A3DA9B4("drunk");
	func_17(iParam0);
}

var func_15()
{
	var uVar0;
	
	uVar0 = Global_35740;
	Global_35740++;
	return uVar0;
}

int func_16()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_35768[iVar0 /*5*/] == -1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_17(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_35742[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_35742[iParam0 /*5*/].f_1 == unk_0xA16EC202D9D35357())
		{
			Global_35963 = 0;
		}
	}
	Global_35742[iParam0 /*5*/] = 13;
	Global_35742[iParam0 /*5*/].f_1 = 0;
	Global_35742[iParam0 /*5*/].f_2 = 0;
	Global_35742[iParam0 /*5*/].f_3 = 0;
	Global_35742[iParam0 /*5*/].f_4 = 0;
	Global_35741 = (Global_35741 - 1);
	if (Global_35741 < 0)
	{
		Global_35741 = 0;
	}
}

void func_18()
{
	if (!Global_35849[iLocal_1 /*5*/].f_2 == 6)
	{
		if (Global_35849[iLocal_1 /*5*/].f_1 == 0)
		{
			func_20(iLocal_1);
			func_19(iLocal_1);
		}
	}
}

void func_19(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 16)
	{
		return;
	}
	Global_35849[iParam0 /*5*/] = -1;
	Global_35849[iParam0 /*5*/].f_1 = -1;
	Global_35849[iParam0 /*5*/].f_2 = 6;
	Global_35849[iParam0 /*5*/].f_3 = 0;
	Global_35849[iParam0 /*5*/].f_4 = 0;
}

void func_20(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_35849[iParam0 /*5*/].f_2;
	switch (iVar0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			break;
		
		default:
			break;
	}
}

void func_21()
{
	int iVar0;
	
	iVar0 = -1;
	if (!Global_35768[iLocal_2 /*5*/] == -1)
	{
		iVar0 = func_27(Global_35768[iLocal_2 /*5*/], 0);
		if (iVar0 == -1)
		{
			func_22(Global_35768[iLocal_2 /*5*/]);
		}
		else
		{
			func_19(iVar0);
		}
	}
}

void func_22(int iParam0)
{
	int iVar0;
	
	func_25(iParam0);
	iVar0 = func_24(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	func_23(iVar0);
}

void func_23(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 16)
	{
		return;
	}
	Global_35768[iParam0 /*5*/] = -1;
	Global_35768[iParam0 /*5*/].f_1 = 0;
	Global_35768[iParam0 /*5*/].f_2 = -1;
	Global_35768[iParam0 /*5*/].f_3 = 0;
	Global_35768[iParam0 /*5*/].f_4 = 0;
}

int func_24(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_35768[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_25(int iParam0)
{
	func_29(iParam0);
	func_26(iParam0);
}

void func_26(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_35849[iVar0 /*5*/].f_1)
		{
			func_19(iVar0);
		}
		iVar0++;
	}
}

int func_27(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam1 == Global_35849[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_35849[iVar0 /*5*/])
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_28()
{
	if (Global_35849[iLocal_1 /*5*/] == 1)
	{
		Global_35849[iLocal_1 /*5*/] = 0;
	}
}

void func_29(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_35849[iVar0 /*5*/])
		{
			func_19(iVar0);
		}
		iVar0++;
	}
}

void func_30()
{
	func_31();
	if (!iLocal_0)
	{
		func_3(1);
	}
	unk_0x82706E6C897B0FA1();
}

void func_31()
{
	func_34();
	func_33();
	func_32();
	func_4();
	Global_35964 = 0;
	Global_35963 = 0;
	Global_35741 = 0;
	unk_0xCA9A3A6F764CC8C1("drunk");
}

void func_32()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_19(iVar0);
		iVar0++;
	}
}

void func_33()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_23(iVar0);
		iVar0++;
	}
}

void func_34()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_17(iVar0);
		iVar0++;
	}
}

