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
	unk_0x15378F974E08496E();
	if (unk_0x8D841F1DD3FA555F(32))
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
	if (Global_36459)
	{
		return 1;
	}
	if (unk_0x42E36F2D658EB2FF(Global_36460))
	{
		return 1;
	}
	if (unk_0x968BF1C2C695B61A(joaat("drunk")) > 0)
	{
		return 1;
	}
	if (Global_36269 > 0)
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
	
	if (!Global_36459)
	{
		return;
	}
	iVar0 = unk_0x48E480685981C7D4();
	if (Global_36461 > iVar0 || Global_36461 == -1)
	{
		if (unk_0xF33755A765033580())
		{
			return;
		}
		fVar1 = func_12();
		fVar2 = func_7();
		if (Global_36464 != Global_36465)
		{
			fVar3 = (Global_36465 - Global_36464);
			Global_36464 = (Global_36464 + (fVar3 * 0.1f));
			if (unk_0xB9AA84B14E04BC20((Global_36464 - Global_36465)) < 0.01f)
			{
				Global_36464 = Global_36465;
			}
		}
		if (!unk_0xAF4185036B3AF650())
		{
			unk_0x67F68184B7855814("DRUNK_SHAKE", ((Global_36464 * fVar1) * fVar2));
		}
		unk_0xB6C88FA2212D78E0(((Global_36464 * fVar1) * fVar2));
		unk_0x418F5717704BF717(((Global_36463 * fVar1) * fVar2));
		if (((Global_36463 * fVar1) * fVar2) < 1f)
		{
			unk_0x7FACAFB713BC76BB(((Global_36463 * fVar1) * fVar2));
		}
		else
		{
			unk_0x7FACAFB713BC76BB(1f);
		}
		if (!unk_0x1AE77F1F79D443D0())
		{
			unk_0xB46F81CC5DBDBBDC("DRUNK_SHAKE", (((Global_36464 * Global_36458) * fVar1) * fVar2));
		}
		unk_0x451B5C1EDF933E94((((Global_36464 * Global_36458) * fVar1) * fVar2));
		if (unk_0x42E36F2D658EB2FF(Global_36460))
		{
			if (unk_0x3A5D57B5EBCB4FEF(Global_36460))
			{
				unk_0xB183977AFC75D047(Global_36460, ((Global_36464 * fVar1) * fVar2));
			}
		}
		if (!unk_0xB318FDA0D1ABDB20(&Global_36487) && !unk_0xB318FDA0D1ABDB20(&Global_36471))
		{
			unk_0xF2A6D4C99549CA85(&Global_36471);
			StringCopy(&Global_36487, "", 16);
		}
		unk_0xC6C4C444EC78161A();
		if (Global_36466 > 0f)
		{
			if (fLocal_4 != Global_36466)
			{
				if (unk_0xEAB68DA0F3844031() != -1)
				{
				}
				else
				{
					unk_0x111096DC75C3A51B(&Global_36467, 15f);
					fLocal_4 = Global_36466;
				}
			}
			else
			{
				if (unk_0xEAB68DA0F3844031() != -1 && unk_0xADEB81F3682A29A2() != -1)
				{
					fLocal_4 = -99f;
				}
				unk_0xF6F43530C380A7DA(2);
				iVar4 = (Global_36461 - iVar0);
				if (iVar4 <= (Global_36462 / 2))
				{
					bVar5 = false;
					if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
					{
						if (unk_0x93FFC2B4860C54A3(unk_0x81873881071CD9FE()))
						{
							bVar5 = true;
						}
					}
					if (func_5(unk_0x81873881071CD9FE()))
					{
						Global_36461 += 1000;
					}
					else if (bVar5)
					{
						Global_36461 += 1000;
					}
					else if (unk_0xEAB68DA0F3844031() != -1)
					{
						Global_36461 += 1000;
					}
					else
					{
						if (unk_0xADEB81F3682A29A2() != -1)
						{
							unk_0x32C96532B582B442((unk_0xBBDA792448DB5A89((Global_36462 / 2)) / 1000f));
						}
						fLocal_4 = -99f;
						Global_36466 = 0f;
						StringCopy(&Global_36467, "", 16);
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
	unk_0x418F5717704BF717(0f);
	unk_0x7FACAFB713BC76BB(0f);
	unk_0xB6C88FA2212D78E0(0f);
	unk_0x55FFFE9031CD8ABF(1);
	unk_0x451B5C1EDF933E94(0f);
	unk_0x221C24DE301307B2(1);
	unk_0xF6F43530C380A7DA(0);
	if (unk_0x12F24A1A22BF90A7("SAFEHOUSE_STONED_MICHAEL"))
	{
		unk_0x0C22E352114F699C("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!unk_0xB318FDA0D1ABDB20(&Global_36471))
	{
		if (unk_0x12F24A1A22BF90A7(&Global_36471))
		{
			unk_0x0C22E352114F699C(&Global_36471);
		}
	}
	if (unk_0x42E36F2D658EB2FF(Global_36460))
	{
		if (unk_0x3A5D57B5EBCB4FEF(Global_36460))
		{
			unk_0xB183977AFC75D047(Global_36460, 0f);
			unk_0x19E32192B402B7F9(Global_36460, 1);
		}
	}
	if (bParam0)
	{
		if (unk_0xADEB81F3682A29A2() != -1 || unk_0xEAB68DA0F3844031() != -1)
		{
			unk_0x89D15E63F65D1047();
		}
		else if (unk_0xF33755A765033580())
		{
			unk_0x89D15E63F65D1047();
		}
	}
	Global_36466 = 0f;
	StringCopy(&Global_36467, "", 16);
	StringCopy(&Global_36471, "", 64);
	StringCopy(&Global_36487, "", 16);
	func_4();
}

void func_4()
{
	Global_36459 = 0;
	Global_36460 = 0;
	Global_36461 = 0;
	Global_36462 = 30000;
	Global_36463 = 0f;
	Global_36465 = 0f;
	Global_36464 = 0f;
	Global_36466 = 0f;
	StringCopy(&Global_36467, "", 16);
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
		if (!Global_36296[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_36296[iVar0 /*5*/].f_1)
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
	iVar1 = func_11(unk_0x81873881071CD9FE());
	iVar2 = func_8(unk_0x81873881071CD9FE());
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
	if (!unk_0x86CCCD2FAE9D5E65(iParam0))
	{
		return 0;
	}
	iVar0 = func_10(iParam0);
	iVar1 = func_9(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_36296[iVar1 /*5*/].f_4;
}

int func_9(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36296[iVar0 /*5*/] == iParam0)
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
		if (iParam0 == Global_36296[iVar0 /*5*/].f_1)
		{
			return Global_36296[iVar0 /*5*/];
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
	if (!unk_0x86CCCD2FAE9D5E65(iParam0))
	{
		return 0;
	}
	iVar0 = func_10(iParam0);
	iVar1 = func_9(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_36296[iVar1 /*5*/].f_3;
}

float func_12()
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = unk_0x48E480685981C7D4();
	fVar1 = 1f;
	iVar2 = (Global_36461 - iVar0);
	if (iVar2 <= Global_36462)
	{
		if (Global_36461 != -1)
		{
			fVar1 = (unk_0xBBDA792448DB5A89(iVar2) / unk_0xBBDA792448DB5A89(Global_36462));
		}
	}
	return fVar1;
}

void func_13()
{
	if (Global_36270[iLocal_3 /*5*/] == 0)
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
	if (unk_0x930F8FBB8E9537CC(Global_36270[iParam0 /*5*/].f_1))
	{
		func_17(iParam0);
		return;
	}
	if (func_5(Global_36270[iParam0 /*5*/].f_1))
	{
		func_17(iParam0);
		return;
	}
	if (!unk_0x06D4A1BE3DF77306("drunk"))
	{
		unk_0xE0013E74AB6963DC("drunk");
		return;
	}
	iVar0 = func_16();
	if (iVar0 == -1)
	{
		func_17(iParam0);
		return;
	}
	Global_36296[iVar0 /*5*/] = func_15();
	Global_36296[iVar0 /*5*/].f_1 = Global_36270[iParam0 /*5*/].f_1;
	Global_36296[iVar0 /*5*/].f_2 = 0;
	Var1 = { Global_36270[iParam0 /*5*/] };
	unk_0xB8BA7F44DF1575E1("drunk", &Var1, 5, 1424);
	unk_0xD25F9F5A80824C77("drunk");
	func_17(iParam0);
}

var func_15()
{
	var uVar0;
	
	uVar0 = Global_36268;
	Global_36268++;
	return uVar0;
}

int func_16()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36296[iVar0 /*5*/] == -1)
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
	if (!Global_36270[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_36270[iParam0 /*5*/].f_1 == unk_0x81873881071CD9FE())
		{
			Global_36491 = 0;
		}
	}
	Global_36270[iParam0 /*5*/] = 13;
	Global_36270[iParam0 /*5*/].f_1 = 0;
	Global_36270[iParam0 /*5*/].f_2 = 0;
	Global_36270[iParam0 /*5*/].f_3 = 0;
	Global_36270[iParam0 /*5*/].f_4 = 0;
	Global_36269 = (Global_36269 - 1);
	if (Global_36269 < 0)
	{
		Global_36269 = 0;
	}
}

void func_18()
{
	if (!Global_36377[iLocal_1 /*5*/].f_2 == 6)
	{
		if (Global_36377[iLocal_1 /*5*/].f_1 == 0)
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
	Global_36377[iParam0 /*5*/] = -1;
	Global_36377[iParam0 /*5*/].f_1 = -1;
	Global_36377[iParam0 /*5*/].f_2 = 6;
	Global_36377[iParam0 /*5*/].f_3 = 0;
	Global_36377[iParam0 /*5*/].f_4 = 0;
}

void func_20(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_36377[iParam0 /*5*/].f_2;
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
	if (!Global_36296[iLocal_2 /*5*/] == -1)
	{
		iVar0 = func_27(Global_36296[iLocal_2 /*5*/], 0);
		if (iVar0 == -1)
		{
			func_22(Global_36296[iLocal_2 /*5*/]);
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
	Global_36296[iParam0 /*5*/] = -1;
	Global_36296[iParam0 /*5*/].f_1 = 0;
	Global_36296[iParam0 /*5*/].f_2 = -1;
	Global_36296[iParam0 /*5*/].f_3 = 0;
	Global_36296[iParam0 /*5*/].f_4 = 0;
}

int func_24(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36296[iVar0 /*5*/] == iParam0)
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
		if (iParam0 == Global_36377[iVar0 /*5*/].f_1)
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
		if (iParam1 == Global_36377[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_36377[iVar0 /*5*/])
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
	if (Global_36377[iLocal_1 /*5*/] == 1)
	{
		Global_36377[iLocal_1 /*5*/] = 0;
	}
}

void func_29(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_36377[iVar0 /*5*/])
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
	unk_0xC23A229F78DAD92A();
}

void func_31()
{
	func_34();
	func_33();
	func_32();
	func_4();
	Global_36492 = 0;
	Global_36491 = 0;
	Global_36269 = 0;
	unk_0xCA954FF82A4E3698("drunk");
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

