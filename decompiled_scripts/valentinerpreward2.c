#region Local Var
	char* sLocal_0 = NULL;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	struct<3> Local_16 = { 0, 0, 0 } ;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	int iLocal_25 = 0;
	bool bLocal_26 = 0;
	var uLocal_27[3] = { 0, 0, 0 };
	int iLocal_31[3] = { 0, 0, 0 };
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43[3] = { 0, 0, 0 };
	struct<2> Local_47[3];
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	var uLocal_62[2] = { 0, 0 };
	struct<3> Local_65 = { 0, 0, 0 } ;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	sLocal_0 = "1.49.08";
	iLocal_20 = -1;
	iLocal_21 = -1;
	iLocal_42 = -1;
	unk_0x256D93AFAE851A7A(0);
	unk_0xB57F88F0123F4C38();
	if (iScriptParam_0 == iScriptParam_0)
	{
	}
	Global_1315809 = unk_0x12AB0310C2281427(sLocal_0);
	iVar0 = unk_0x1C0640BA9A7327B3() + 10000;
	while (unk_0x1C0640BA9A7327B3() < iVar0)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		if (func_209())
		{
			func_207();
		}
		if (unk_0x8CD06866876216F2() && Global_2458936.f_3)
		{
			func_188();
			func_187();
			func_186();
			func_183();
			func_181();
			func_180();
			func_179();
			func_177();
			func_166();
			func_164();
			func_162();
			func_160();
			func_157();
			func_152();
			func_149();
			func_143();
			func_139();
			func_134();
			func_131();
			func_128();
			func_119();
			func_51();
			func_41();
			if (unk_0x0EFF6B4415DAF4A1())
			{
				func_36();
			}
		}
		if (unk_0xA14BB9332558B949())
		{
			func_35();
		}
		func_1();
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x10FAF14A60A0DBE1();
}

void func_1()
{
	int iVar0;
	
	Global_1391799.f_719 = 1;
	Global_1391799.f_720 = 1;
	Global_1391799.f_718 = 1;
	if (unk_0x3BE9D9F3DC14F695())
	{
		if (unk_0x15673EFF6BDD825C(func_34(), -1, 0) == unk_0xD803B885F5E47A62())
		{
			func_31();
		}
		else if (iLocal_54)
		{
			func_29();
			iLocal_54 = 0;
		}
		iVar0 = unk_0x117658E336116132(0);
		if (func_28(iVar0, 0, 1))
		{
			if (iVar0 != unk_0xD803B885F5E47A62())
			{
				if (iLocal_55)
				{
					if (!func_17(unk_0xD803B885F5E47A62()) || !func_16(iVar0))
					{
						func_3(0, unk_0xD803B885F5E47A62());
						iLocal_55 = 0;
					}
				}
				else if (func_17(unk_0xD803B885F5E47A62()))
				{
					if (func_16(iVar0))
					{
						if (func_2())
						{
							func_3(1, unk_0xD803B885F5E47A62());
							iLocal_55 = 1;
						}
					}
					else if ((unk_0xF4CCC8CB6DE7F1AE() % 30) == 0)
					{
					}
				}
			}
		}
		else if (iLocal_55)
		{
			iLocal_55 = 0;
		}
	}
	else
	{
		iLocal_55 = 0;
		iLocal_54 = 0;
		iLocal_42 = -1;
	}
}

int func_2()
{
	int iVar0;
	
	if (iLocal_42 == -1)
	{
		return 1;
	}
	iVar0 = 15;
	while (iVar0 <= 17)
	{
		if (Global_2419327.f_199.f_674[iLocal_42 /*57*/].f_1[iVar0] == 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_3(bool bParam0, int iParam1)
{
	struct<4> Var0;
	int iVar5;
	
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1000;
	Var0.f_0 = -1884218406;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	if (bParam0)
	{
		Var0.f_2 = func_9(func_10(iParam1));
	}
	else
	{
		Var0.f_2 = 0;
	}
	Var0.f_3 = { func_8() };
	iVar5 = func_4(1, 1);
	if (!iVar5 == 0)
	{
		unk_0xFB061A86A7AC749F(1, &Var0, 5, iVar5);
	}
}

int func_4(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x117658E336116132(iVar1);
		if (func_28(iVar2, 0, 0))
		{
			if (iVar2 != unk_0xD803B885F5E47A62() || iParam0)
			{
				if (bParam1)
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar1);
				}
				else if (!func_5(iVar2, 0))
				{
					unk_0x5D96D8530B3D0904(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_5(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_6(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590535[iParam0 /*876*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x40B8C182D63932FC(iParam0))
		{
			bVar0 = unk_0x08067D4957B73C02(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_6(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_7();
	}
	if (Global_1312857[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312739[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_7()
{
	return Global_1312745;
}

struct<2> func_8()
{
	struct<2> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1000;
	Var0.f_0 = unk_0x7CF4675EC2B8ED0B();
	Var0.f_1 = 0;
	unk_0x5D96D8530B3D0904(&(Var0.f_1), unk_0xD803B885F5E47A62());
	return Var0;
}

int func_9(int iParam0)
{
	switch (iParam0)
	{
		case 128:
			return 714;
		
		case 129:
			return 715;
		
		case 130:
			return 716;
		
		case 131:
			return 717;
		
		case 132:
			return 718;
		
		case 133:
			return 719;
		
		default:
	}
	return 0;
}

int func_10(int iParam0)
{
	int iVar0;
	
	if (iParam0 != func_15())
	{
		iVar0 = func_14(iParam0);
		if (iVar0 != 0)
		{
			return func_11(iVar0);
		}
	}
	return -1;
}

int func_11(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 146)
	{
		if (func_13(iVar0) == 17)
		{
			if (func_12(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_12(int iParam0)
{
	switch (iParam0)
	{
		case 128:
			return 1;
		
		case 129:
			return 2;
		
		case 130:
			return 3;
		
		case 131:
			return 4;
		
		case 132:
			return 5;
		
		case 133:
			return 6;
		
		default:
	}
	return 0;
}

int func_13(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
	}
	return -1;
}

int func_14(int iParam0)
{
	if (iParam0 != func_15())
	{
		return Global_1590535[iParam0 /*876*/].f_274.f_393;
	}
	return 0;
}

int func_15()
{
	return -1;
}

int func_16(int iParam0)
{
	if (iParam0 != func_15())
	{
		if (Global_1628237[iParam0 /*615*/].f_11 != func_15())
		{
			return Global_1628237[iParam0 /*615*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_17(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_28(iParam0, 0, 1))
	{
		iVar0 = -1;
		if (func_26(iParam0) == 158)
		{
			iVar0 = func_25();
			if (func_24(iVar0))
			{
				return 1;
			}
		}
		iVar0 = func_23(iParam0);
		if (func_24(iVar0))
		{
			return 1;
		}
		if (func_26(iParam0) == 243)
		{
			iVar1 = func_25();
			if (func_22(iVar1))
			{
				return 1;
			}
		}
		iVar1 = func_18(iParam0);
		if (func_22(iVar1))
		{
			return 1;
		}
	}
	return 0;
}

int func_18(int iParam0)
{
	if (func_21(iParam0) == 243)
	{
		return func_19(iParam0);
	}
	return -1;
}

int func_19(int iParam0)
{
	if (func_20(iParam0, 0))
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_181;
	}
	return -1;
}

int func_20(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0 /*615*/].f_11.f_33 != -1 || (iParam1 && Global_1628237[iParam0 /*615*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_21(int iParam0)
{
	if (func_20(iParam0, 0))
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_33;
	}
	return -1;
}

int func_22(int iParam0)
{
	if ((((iParam0 == 14 || iParam0 == 5) || iParam0 == 0) || iParam0 == 3) || iParam0 == 2)
	{
		return 1;
	}
	return 0;
}

int func_23(int iParam0)
{
	if (func_21(iParam0) == 158)
	{
		return func_19(iParam0);
	}
	return -1;
}

int func_24(int iParam0)
{
	if (((((((((((iParam0 == 0 || iParam0 == 4) || iParam0 == 2) || iParam0 == 1) || iParam0 == 3) || iParam0 == 30) || iParam0 == 31) || iParam0 == 32) || iParam0 == 28) || iParam0 == 29) || iParam0 == 52) || iParam0 == 37)
	{
		return 1;
	}
	return 0;
}

int func_25()
{
	return Global_2537071.f_5124.f_339;
}

int func_26(int iParam0)
{
	if (func_27(iParam0, 0))
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_32;
	}
	return -1;
}

int func_27(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0 /*615*/].f_11.f_32 != -1 || (iParam1 && Global_1628237[iParam0 /*615*/].f_11.f_33 != -1))
	{
		return 1;
	}
	return 0;
}

int func_28(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x40B8C182D63932FC(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xE1DBBD6CE209517C(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2439138.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_29()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iLocal_43[iVar0] = 0;
		Local_47[iVar0 /*2*/] = { func_30() };
		iVar0++;
	}
}

struct<2> func_30()
{
	struct<2> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1000;
	return Var0;
}

void func_31()
{
	int iVar0;
	int iVar1;
	
	if (iLocal_42 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (Global_2419327.f_199.f_674[iVar0 /*57*/] == unk_0x117658E336116132(0))
			{
				iLocal_42 = iVar0;
				func_32();
				return;
			}
			iVar0++;
		}
	}
	else
	{
		if (Global_2419327.f_199.f_674[iLocal_42 /*57*/] != unk_0x117658E336116132(0))
		{
			iLocal_42 = -1;
			return;
		}
		func_32();
		if (iLocal_54)
		{
			iVar0 = 15;
			while (iVar0 <= 17)
			{
				iVar1 = (iVar0 - 15);
				if (iLocal_43[iVar1] != 0 && Global_2419327.f_199.f_674[iLocal_42 /*57*/].f_1[iVar0] != iLocal_43[iVar1])
				{
					Global_2419327.f_199.f_674[iLocal_42 /*57*/] = unk_0x117658E336116132(0);
					Global_2419327.f_199.f_674[iLocal_42 /*57*/].f_1[iVar0] = iLocal_43[iVar1];
					Global_2419327.f_199.f_674[iLocal_42 /*57*/].f_20[iVar0 /*2*/] = { Local_47[iVar1 /*2*/] };
				}
				iVar0++;
			}
		}
	}
}

void func_32()
{
	if (!iLocal_54)
	{
		iLocal_54 = func_33();
	}
}

int func_33()
{
	int iVar0;
	int iVar1;
	
	if (iLocal_42 == -1)
	{
		return 0;
	}
	iVar0 = 15;
	while (iVar0 <= 17)
	{
		iVar1 = (iVar0 - 15);
		iLocal_43[iVar1] = Global_2419327.f_199.f_674[iLocal_42 /*57*/].f_1[iVar0];
		Local_47[iVar1 /*2*/] = { Global_2419327.f_199.f_674[iLocal_42 /*57*/].f_20[iVar0 /*2*/] };
		iVar0++;
	}
	return 1;
}

char* func_34()
{
	return "freemode";
}

void func_35()
{
	int iVar0;
	int iVar1;
	
	if (Global_4456448.f_232883 != 60)
	{
		iLocal_41 = 0;
		iLocal_40 = -1;
		return;
	}
	if (Global_1312792)
	{
		if (iLocal_40 >= 31)
		{
			iLocal_40 = -1;
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 <= 31)
			{
				if (unk_0xEAE0D21A50E6C7F4(iLocal_41, iVar0))
				{
					Global_4456448.f_195397[iVar0 /*57*/].f_10 = 20;
				}
				iVar0++;
			}
		}
		iLocal_40++;
		if (iLocal_40 == 30)
		{
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 <= 31)
			{
				if (Global_4456448.f_195397[iVar1 /*57*/].f_10 == 20)
				{
					unk_0x5D96D8530B3D0904(&iLocal_41, iVar1);
					Global_4456448.f_195397[iVar1 /*57*/].f_10 = 999;
				}
				iVar1++;
			}
		}
	}
	else
	{
		iLocal_41 = 0;
		iLocal_40 = -1;
	}
}

void func_36()
{
	float fVar0;
	float fVar1;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		Local_65 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), 1) };
	}
	if (!func_40(Local_65))
	{
		fVar0 = unk_0xB7A628320EFF8E47(func_39(iLocal_61), Local_65);
		fVar1 = unk_0xB7A628320EFF8E47(func_39(iLocal_60), Local_65);
		if (fVar0 < fVar1)
		{
			iLocal_60 = iLocal_61;
			fVar1 = fVar0;
		}
		if (iLocal_69 && fVar1 < 2.5f)
		{
			if (!func_38(iLocal_60))
			{
				func_37(iLocal_60);
			}
		}
		if (func_38(iLocal_60) || fVar1 > 2.5f)
		{
			if (!iLocal_68)
			{
				unk_0xD61D1D8400A3832C(joaat("vw_prop_vw_lux_card_01a"), 0);
				iLocal_68 = 1;
			}
		}
		else if (iLocal_68)
		{
			unk_0xD61D1D8400A3832C(joaat("vw_prop_vw_lux_card_01a"), 1);
			iLocal_68 = 0;
		}
		iLocal_61 = (iLocal_61 + 1 % 54);
	}
	iLocal_69 = 0;
}

void func_37(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x5D96D8530B3D0904(&(uLocal_62[iVar0]), iVar1);
}

bool func_38(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xEAE0D21A50E6C7F4(uLocal_62[iVar0], iVar1);
}

Vector3 func_39(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1992.183f, 3046.28f, 47.125f;
		
		case 1:
			return 120.38f, -1297.669f, 28.705f;
		
		case 2:
			return 79.293f, 3704.578f, 40.945f;
		
		case 3:
			return 2937.738f, 5325.846f, 100.176f;
		
		case 4:
			return 727.153f, 4189.818f, 40.476f;
		
		case 5:
			return -103.14f, 369.008f, 112.267f;
		
		case 6:
			return 99.959f, 6619.539f, 32.314f;
		
		case 7:
			return -282.6689f, 6226.274f, 31.3554f;
		
		case 8:
			return 1707.556f, 4921.021f, 41.865f;
		
		case 9:
			return -1581.86f, 5204.295f, 3.9093f;
		
		case 10:
			return 10.8264f, -1101.157f, 29.613f;
		
		case 11:
			return 1690.043f, 3589.014f, 35.5883f;
		
		case 12:
			return 1159.144f, -316.5876f, 69.5134f;
		
		case 13:
			return 2341.807f, 2571.737f, 47.6079f;
		
		case 14:
			return -3048.193f, 585.2986f, 7.7708f;
		
		case 15:
			return -3149.707f, 1115.83f, 20.7216f;
		
		case 16:
			return -1840.641f, -1235.319f, 13.2937f;
		
		case 17:
			return 810.6056f, -2978.741f, 5.8116f;
		
		case 18:
			return 202.2747f, -1645.225f, 29.7679f;
		
		case 19:
			return 253.2056f, 215.9778f, 106.2848f;
		
		case 20:
			return -1166.183f, -233.9277f, 38.262f;
		
		case 21:
			return 729.9886f, 2514.713f, 73.1663f;
		
		case 22:
			return 188.1851f, 3076.332f, 43.0447f;
		
		case 23:
			return 3687.914f, 4569.073f, 24.9397f;
		
		case 24:
			return 1876.975f, 6410.034f, 46.5982f;
		
		case 25:
			return 2121.146f, 4784.687f, 40.8114f;
		
		case 26:
			return 900.0845f, 3558.156f, 33.6258f;
		
		case 27:
			return 2695.272f, 4324.496f, 45.6516f;
		
		case 28:
			return -1829.428f, 798.4049f, 138.0583f;
		
		case 29:
			return -1203.725f, -1558.866f, 4.1736f;
		
		case 30:
			return -73.2829f, -2005.476f, 18.2561f;
		
		case 31:
			return -1154.201f, -527.2959f, 31.7117f;
		
		case 32:
			return 990.0786f, -1800.391f, 31.3781f;
		
		case 33:
			return 827.5513f, -2158.744f, 29.417f;
		
		case 34:
			return -1512.08f, -103.625f, 54.2027f;
		
		case 35:
			return -970.7493f, 104.3396f, 55.0431f;
		
		case 36:
			return -428.6815f, 1213.905f, 325.9329f;
		
		case 37:
			return -167.8387f, -297.1122f, 39.0353f;
		
		case 38:
			return 2747.322f, 3465.12f, 55.6336f;
		
		case 39:
			return -1103.659f, 2714.689f, 19.4539f;
		
		case 40:
			return 549.4841f, -189.3053f, 54.4369f;
		
		case 41:
			return -1287.689f, -1118.818f, 6.3057f;
		
		case 42:
			return 1131.428f, -982.0297f, 46.6521f;
		
		case 43:
			return -1028.083f, -2746.936f, 13.3589f;
		
		case 44:
			return -538.5779f, -1278.542f, 26.3437f;
		
		case 45:
			return 1326.449f, -1651.263f, 52.0964f;
		
		case 46:
			return 183.3252f, -685.2661f, 42.607f;
		
		case 47:
			return 1487.846f, 1129.2f, 114.3005f;
		
		case 48:
			return -2305.538f, 3387.973f, 31.0201f;
		
		case 49:
			return -522.632f, 4193.459f, 193.7517f;
		
		case 50:
			return -748.9897f, 5599.534f, 41.5794f;
		
		case 51:
			return -288.0628f, 2545.21f, 74.4223f;
		
		case 52:
			return 2565.326f, 296.8703f, 108.7367f;
		
		case 53:
			return -408.2484f, 585.783f, 124.378f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_40(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_41()
{
	if (func_50(unk_0xD803B885F5E47A62()) || func_49(unk_0xD803B885F5E47A62()))
	{
		func_42();
	}
}

void func_42()
{
	if (func_48() || func_47())
	{
		func_46();
		func_43();
	}
}

void func_43()
{
	if ((!func_45() && !func_44()) && Global_2451425)
	{
		Global_4456448.f_194990 = 0;
	}
}

bool func_44()
{
	return Global_2450632.f_591;
}

bool func_45()
{
	return Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_196 != 0;
}

void func_46()
{
	Global_2450632.f_656 = 1;
}

var func_47()
{
	return Global_2450632.f_635;
}

bool func_48()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2450632.f_2, 11);
}

int func_49(int iParam0)
{
	if (iParam0 != func_15())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0 /*421*/].f_310, 7);
	}
	return 0;
}

int func_50(int iParam0)
{
	if (iParam0 != func_15())
	{
		return unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0 /*421*/].f_310.f_2, 31);
	}
	return 0;
}

void func_51()
{
	if (func_118(1) && func_117(unk_0xD803B885F5E47A62()))
	{
		if (Global_1681961.f_4551)
		{
			if (!iLocal_59)
			{
				func_52(Global_1681961.f_4547, 0, 0, 0, func_115(unk_0xD803B885F5E47A62()));
				iLocal_59 = 1;
			}
		}
		else
		{
			iLocal_59 = 0;
		}
	}
	else
	{
		iLocal_59 = 0;
	}
}

int func_52(int iParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4)
{
	struct<2> Var0;
	int iVar2;
	int iVar3[5];
	struct<2> Var9;
	var uVar11[5];
	bool bVar17;
	var uVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	struct<2> Var22;
	
	if (!func_113())
	{
		Var0 = { func_112(iParam0) };
		Var9 = { func_106(unk_0xD803B885F5E47A62(), Var0) };
		bVar17 = func_105(Var9);
		uVar18 = func_102(iParam0);
		bVar19 = func_101(iParam0);
		bVar20 = func_100(Var9, iParam0);
		if (((bVar17 && uVar18) && !bVar19) && !bVar20)
		{
			iVar2 = 0;
			while (iVar2 < 5)
			{
				if (func_105(Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_579.f_1[iVar2 /*2*/]))
				{
					iVar3[iVar2] = (func_99(Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_579.f_1[iVar2 /*2*/]) - 1);
					uVar11[iVar2] = func_98(Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_579.f_1[iVar2 /*2*/]);
				}
				iVar2++;
			}
			bVar21 = func_97(Global_1681961.f_4706.f_2);
			if (func_95(unk_0xD803B885F5E47A62(), Var0) && uParam4)
			{
				unk_0x5D96D8530B3D0904(&(Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_579), 4);
				func_94(&(Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_579.f_1), &iVar3, iParam0, &uVar11, Var0, bVar21);
			}
			else
			{
				Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_579.f_12 = { Var9 };
				func_89(Var9, (func_99(Var9) - 1), iParam0, func_98(Var9), func_92(), bVar21);
			}
			iVar2 = 0;
			while (iVar2 < 5)
			{
				if (func_105(Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_579.f_1[iVar2 /*2*/]))
				{
					Var22 = { func_86(Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_579.f_1[iVar2 /*2*/]) };
					if (func_84(Var22, Var0))
					{
						func_56(Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_579.f_1[iVar2 /*2*/], iParam0, iVar3[iVar2], bParam1, bParam2, bParam3);
					}
				}
				iVar2++;
			}
			func_53();
			Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_579.f_15 = iParam0;
			Global_1681961.f_4709 = { Var0 };
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_53()
{
	func_55(&(Global_1681961.f_4620));
	func_54(&(Global_1681961.f_4620), 0, 0);
}

void func_54(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x8CD06866876216F2() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x2B6E0A53779D29EA();
			}
			else
			{
				*uParam0 = unk_0x6794171A1021C2D8();
			}
		}
		else
		{
			*uParam0 = unk_0x1C0640BA9A7327B3();
		}
		uParam0->f_1 = 1;
	}
}

void func_55(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_56(struct<2> Param0, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	
	if (iParam2 > 0)
	{
		if (iParam2 <= 11)
		{
			if (bParam4)
			{
				if (func_98(Param0) == 1 || func_98(Param0) == 3)
				{
					func_61(iParam2, func_83());
				}
			}
		}
		else if ((iParam2 >= 377 && iParam2 <= 381) || (iParam2 >= 684 && iParam2 <= 693))
		{
			if (bParam4)
			{
				iVar0 = func_83();
				if (!func_59(unk_0xD803B885F5E47A62(), Param0.f_0))
				{
					if (func_83() == func_15())
					{
						iVar0 = unk_0xD803B885F5E47A62();
					}
				}
				func_61(iParam2, iVar0);
			}
		}
		else if (iParam2 >= 675 && iParam2 <= 683)
		{
			if (bParam4)
			{
				iVar1 = func_83();
				if (!func_59(unk_0xD803B885F5E47A62(), Param0.f_0))
				{
					if (func_83() == func_15())
					{
						iVar1 = unk_0xD803B885F5E47A62();
					}
				}
				func_61(iParam2, iVar1);
				if (iParam3 <= 0)
				{
					if (bParam5)
					{
						func_58(Param0);
					}
					else if (bParam6)
					{
						func_57(Param0);
					}
				}
			}
		}
		else if (iParam3 <= 0)
		{
			if (bParam5)
			{
				func_58(Param0);
			}
			else if (bParam6)
			{
				func_57(Param0);
			}
		}
	}
}

void func_57(struct<2> Param0)
{
	struct<3> Var0;
	int iVar4;
	
	Var0.f_2.f_1 = -1;
	Var0.f_0 = 157842321;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	Var0.f_2 = { Param0 };
	iVar4 = func_4(1, 1);
	if (!iVar4 == 0)
	{
		unk_0xFB061A86A7AC749F(1, &Var0, 4, iVar4);
	}
}

void func_58(struct<2> Param0)
{
	struct<3> Var0;
	int iVar4;
	
	Var0.f_2.f_1 = -1;
	Var0.f_0 = -315200433;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	Var0.f_2 = { Param0 };
	iVar4 = func_4(1, 1);
	if (!iVar4 == 0)
	{
		unk_0xFB061A86A7AC749F(1, &Var0, 4, iVar4);
	}
}

int func_59(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_60(iParam0);
	if (!iVar0 == func_15())
	{
		if (iVar0 == func_60(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_60(int iParam0)
{
	if (iParam0 != func_15())
	{
		return Global_1628237[iParam0 /*615*/].f_11;
	}
	return func_15();
}

void func_61(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (iParam0 > 0)
	{
		if (iParam0 <= 11)
		{
			iVar0 = func_80(func_82(iParam1));
		}
		else if (iParam0 >= 377 && iParam0 <= 381)
		{
			iVar0 = func_77(func_79(iParam1));
			func_71(iParam1);
		}
		else if (iParam0 >= 675 && iParam0 <= 683)
		{
			iVar0 = func_68(func_70(iParam1));
		}
		else if (iParam0 >= 684 && iParam0 <= 693)
		{
			iVar0 = func_65(func_67(iParam1));
		}
		else if ((iParam0 == 704 || iParam0 == 705) || iParam0 == 711)
		{
			iVar0 = 123;
		}
		else if (iParam0 >= 714 && iParam0 <= 725)
		{
			func_63(2);
			iVar0 = func_11(func_14(iParam1));
		}
		else if (iParam0 == 755)
		{
			iVar0 = 145;
		}
	}
	else if (iParam0 == 0)
	{
	}
	if (iVar0 != -1)
	{
		Global_1676377.f_460 = -1;
		func_62(1);
		Global_1676377.f_3326 = iVar0;
		Global_1676377.f_3327 = 0;
		Global_1676377.f_3332 = 1;
		Global_1676377.f_3014 = iParam1;
	}
}

void func_62(bool bParam0)
{
	if (bParam0)
	{
		if (!Global_1676377.f_3325)
		{
			Global_1676377.f_3325 = 1;
		}
	}
	else if (Global_1676377.f_3325)
	{
		Global_1676377.f_3325 = 0;
	}
}

void func_63(int iParam0)
{
	if (!func_64())
	{
		return;
	}
	Global_2425662[unk_0xD803B885F5E47A62() /*421*/].f_310.f_24 = iParam0;
}

bool func_64()
{
	return !unk_0xEAE0D21A50E6C7F4(Global_1676377.f_5, 4);
}

int func_65(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 146)
	{
		if (func_13(iVar0) == 11)
		{
			if (func_66(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_66(int iParam0)
{
	switch (iParam0)
	{
		case 102:
			return 1;
		
		case 103:
			return 2;
		
		case 104:
			return 3;
		
		case 105:
			return 4;
		
		case 106:
			return 5;
		
		case 107:
			return 6;
		
		case 108:
			return 7;
		
		case 109:
			return 8;
		
		case 110:
			return 9;
		
		case 111:
			return 10;
		
		default:
	}
	return 0;
}

int func_67(int iParam0)
{
	if (iParam0 != func_15())
	{
		return Global_1590535[iParam0 /*876*/].f_274.f_322;
	}
	return 0;
}

int func_68(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 146)
	{
		if (func_13(iVar0) == 9)
		{
			if (func_69(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_69(int iParam0)
{
	switch (iParam0)
	{
		case 89:
			return 1;
			break;
		
		case 90:
			return 2;
			break;
		
		case 91:
			return 3;
			break;
		
		case 92:
			return 4;
			break;
		
		case 93:
			return 5;
			break;
		
		case 94:
			return 6;
			break;
		
		case 95:
			return 7;
			break;
		
		case 96:
			return 8;
			break;
		
		case 97:
			return 9;
			break;
	}
	return 0;
}

int func_70(int iParam0)
{
	if (iParam0 != func_15())
	{
		return Global_1590535[iParam0 /*876*/].f_274.f_271;
	}
	return 0;
}

void func_71(int iParam0)
{
	var uVar0;
	
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		uVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
		if ((((func_76(uVar0, 1) && func_75(unk_0x134B62B726CEC8E6(uVar0))) && unk_0xA30B8362589C124A(uVar0, -1, 0) == unk_0x9539D44F3E4492F6(iParam0)) && func_73(uVar0) == iParam0) && func_28(iParam0, 1, 1))
		{
			if (func_72(unk_0x16F2683693E537C9(), 0) != -1)
			{
				if (!unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_579, 6))
				{
					Global_1676349 = 1;
					Global_1676364 = func_72(unk_0x16F2683693E537C9(), 0);
				}
				Global_1676350 = 1;
			}
		}
	}
}

int func_72(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (unk_0x405E212DDE472467(iParam0, iParam1))
		{
			uVar0 = unk_0x6937EA2286828455(iParam0, iParam1);
			if (unk_0xC844350D5D58C99A(uVar0))
			{
				iVar1 = unk_0x7087E053058E9F6C(unk_0x134B62B726CEC8E6(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0xBBA8A868118C90ED(iVar0, iVar3, 0))
					{
						if (unk_0xA30B8362589C124A(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

int func_73(var uParam0)
{
	int iVar0;
	
	if (!func_76(uParam0, 1))
	{
		return func_15();
	}
	iVar0 = unk_0x1E2DFB0EF4BB4566(uParam0, "Player_Vehicle");
	return func_74(iVar0, 0, 1, 0);
}

int func_74(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (bParam2)
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			iVar0 = unk_0x117658E336116132(iVar1);
			if (func_28(iVar0, 0, 1) || (iParam1 && unk_0xCA61DCC1F907C299(iVar0)))
			{
				if (iParam0 == unk_0xE86C2816EDC6CAF0(iVar0))
				{
					return iVar0;
				}
			}
			iVar1++;
		}
	}
	else if (func_28(iParam3, 0, 1) || (iParam1 && unk_0xCA61DCC1F907C299(iParam3)))
	{
		if (iParam0 == unk_0xE86C2816EDC6CAF0(iParam3))
		{
			return iParam3;
		}
	}
	return func_15();
}

int func_75(int iParam0)
{
	switch (iParam0)
	{
		case joaat("buzzard"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("hydra"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("havok"):
		case joaat("hunter"):
		case joaat("volatus"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("annihilator"):
		case joaat("mogul"):
		case joaat("rogue"):
		case joaat("starling"):
		case joaat("seabreeze"):
		case joaat("microlight"):
		case joaat("tula"):
		case joaat("lazer"):
		case joaat("pyro"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("howard"):
		case joaat("bombushka"):
		case joaat("alphaz1"):
		case joaat("nimbus"):
		case joaat("luxor2"):
		case joaat("velum2"):
		case joaat("dodo"):
		case joaat("miljet"):
		case joaat("besra"):
		case joaat("vestra"):
		case joaat("duster"):
		case joaat("shamal"):
		case joaat("cuban800"):
		case joaat("luxor"):
		case joaat("stunt"):
		case joaat("mammatus"):
		case joaat("titan"):
		case joaat("velum"):
		case joaat("akula"):
		case joaat("volatol"):
		case joaat("seasparrow"):
			return 1;
		
		default:
	}
	if (iParam0 == joaat("strikeforce"))
	{
		return 1;
	}
	return 0;
}

int func_76(int iParam0, bool bParam1)
{
	if (Global_76622)
	{
		if (unk_0xC844350D5D58C99A(uParam0) && (!bParam1 || unk_0xDF1306B443CD3D15(iParam0, 0)))
		{
			if (unk_0x30F813723591D02E(iParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_77(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 146)
	{
		if (func_13(iVar0) == 7)
		{
			if (func_78(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_78(int iParam0)
{
	switch (iParam0)
	{
		case 83:
			return 1;
			break;
		
		case 84:
			return 2;
			break;
		
		case 85:
			return 3;
			break;
		
		case 86:
			return 4;
			break;
		
		case 87:
			return 5;
			break;
	}
	return 0;
}

int func_79(int iParam0)
{
	if (iParam0 != func_15())
	{
		return Global_1590535[iParam0 /*876*/].f_274.f_264;
	}
	return 0;
}

int func_80(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 146)
	{
		if (func_81(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_81(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return 1;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 3;
			break;
		
		case 25:
			return 4;
			break;
		
		case 26:
			return 5;
			break;
		
		case 27:
			return 6;
			break;
		
		case 28:
			return 7;
			break;
		
		case 29:
			return 8;
			break;
		
		case 30:
			return 9;
			break;
		
		case 31:
			return 10;
			break;
		
		case 32:
			return 11;
			break;
		
		case 33:
			return 12;
			break;
		
		case 34:
			return 13;
			break;
		
		case 35:
			return 14;
			break;
		
		case 36:
			return 15;
			break;
		
		case 37:
			return 16;
			break;
		
		case 38:
			return 17;
			break;
		
		case 39:
			return 18;
			break;
		
		case 40:
			return 19;
			break;
		
		case 41:
			return 20;
			break;
		
		case 70:
			return 21;
			break;
		
		case 71:
			return 22;
			break;
		
		case 72:
			return 23;
			break;
		
		case 73:
			return 24;
			break;
		
		case 74:
			return 25;
			break;
		
		case 75:
			return 26;
			break;
		
		case 76:
			return 27;
			break;
		
		case 77:
			return 28;
			break;
		
		case 78:
			return 29;
			break;
		
		case joaat("mpsv_lp0_31"):
			return 30;
			break;
		
		case 80:
			return 31;
			break;
	}
	return 0;
}

int func_82(int iParam0)
{
	if (iParam0 == func_15())
	{
		return 0;
	}
	return Global_1590535[iParam0 /*876*/].f_274.f_183[5 /*12*/];
}

int func_83()
{
	return Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_11;
}

int func_84(struct<2> Param0, struct<2> Param2)
{
	if (!func_85(Param0))
	{
		return 0;
	}
	if (Param0.f_0 == Param2.f_0 && Param0.f_1 == Param2.f_1)
	{
		return 1;
	}
	return 0;
}

int func_85(struct<2> Param0)
{
	if (Param0.f_0 == -1 || Param0.f_1 == -1000)
	{
		return 0;
	}
	return 1;
}

struct<2> func_86(struct<2> Param0)
{
	int iVar0;
	struct<2> Var1;
	
	iVar0 = func_87(Param0);
	if (iVar0 < 0 || iVar0 >= 48)
	{
		Var1 = -1;
		Var1.f_1 = -1000;
		return Var1;
	}
	return Global_2419327.f_199.f_1[iVar0 /*14*/].f_11;
}

int func_87(struct<2> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_88(Param0, Global_2419327.f_199.f_1[iVar0 /*14*/].f_1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_88(struct<2> Param0, struct<2> Param2)
{
	if (Param0.f_1 != -1 && Param2.f_1 != -1)
	{
		return (Param0.f_0 == Param2.f_0 && Param0.f_1 == Param2.f_1);
	}
	return 0;
}

void func_89(struct<2> Param0, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<10> Var0;
	int iVar10;
	
	Var0.f_2.f_1 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_0 = -1872730803;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	Var0.f_2 = { Param0 };
	Var0.f_6 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = iParam4;
	Var0.f_7 = bParam5;
	if (bParam5)
	{
		Var0.f_8 = Global_2537071.f_6523.f_8;
		Var0.f_9 = Global_2537071.f_6523.f_9;
	}
	iVar10 = 0;
	if (bParam6)
	{
		iVar10 = func_4(1, 1);
	}
	if (iVar10 == 0)
	{
		if (func_59(unk_0xD803B885F5E47A62(), Var0.f_2))
		{
			iVar10 = func_91(1);
		}
		else
		{
			if (bParam5 && (iParam4 == 14 || iParam4 == 13))
			{
				if (func_83() != func_15())
				{
					iVar10 = func_91(0);
				}
				if (func_28(Var0.f_2, 0, 1))
				{
					unk_0x5D96D8530B3D0904(&iVar10, Var0.f_2);
				}
			}
			else
			{
				if (func_28(Var0.f_2, 0, 1))
				{
					iVar10 = func_90(Var0.f_2);
				}
				if (func_83() != func_15())
				{
					unk_0x5D96D8530B3D0904(&iVar10, func_83());
				}
			}
			unk_0x5D96D8530B3D0904(&iVar10, unk_0xD803B885F5E47A62());
		}
	}
	if (!iVar10 == 0)
	{
		unk_0xFB061A86A7AC749F(1, &Var0, 10, iVar10);
	}
}

int func_90(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		unk_0x5D96D8530B3D0904(&uVar0, iParam0);
	}
	return uVar0;
}

int func_91(bool bParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_16(unk_0xD803B885F5E47A62()))
	{
		iVar2 = unk_0xD803B885F5E47A62();
	}
	else
	{
		iVar2 = func_83();
	}
	if (iVar2 == unk_0xD803B885F5E47A62() || func_28(iVar2, bParam0, 1))
	{
		unk_0x5D96D8530B3D0904(&uVar0, iVar2);
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar3 = iVar1;
		if ((iVar2 != iVar3 && func_59(iVar3, iVar2)) && func_28(iVar3, bParam0, 1))
		{
			unk_0x5D96D8530B3D0904(&uVar0, iVar1);
		}
		iVar1++;
	}
	return uVar0;
}

bool func_92()
{
	return func_93(Global_1681961.f_4706.f_2);
}

bool func_93(int iParam0)
{
	if (iParam0 >= 684 && iParam0 <= 703)
	{
		return 0;
	}
	return iParam0 != 0;
}

void func_94(var uParam0, int iParam1, int iParam2, var uParam3, struct<2> Param4, bool bParam6)
{
	struct<21> Var0;
	int iVar26;
	struct<2> Var27;
	int iVar29;
	
	Var0.f_2 = 5;
	Var0.f_2.f_1.f_1 = -1;
	Var0.f_2.f_1.f_2.f_1 = -1;
	Var0.f_2.f_1.f_2.f_2.f_1 = -1;
	Var0.f_2.f_1.f_2.f_2.f_2.f_1 = -1;
	Var0.f_2.f_1.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_14 = 5;
	Var0.f_20 = 5;
	Var0.f_0 = -1717006654;
	Var0.f_1 = unk_0xD803B885F5E47A62();
	iVar26 = 0;
	while (iVar26 < 5)
	{
		Var27 = { func_86(*(uParam0[iVar26 /*2*/])) };
		if (func_84(Var27, Param4))
		{
			Var0.f_2[iVar26 /*2*/] = { *(uParam0[iVar26 /*2*/]) };
			Var0.f_20[iVar26] = (*iParam1)[iVar26];
			Var0.f_14[iVar26] = (*uParam3)[iVar26];
		}
		iVar26++;
	}
	Var0.f_13 = iParam2;
	iVar29 = func_91(1);
	if (!func_118(1))
	{
		iVar29 = 0;
		unk_0x5D96D8530B3D0904(&iVar29, unk_0xD803B885F5E47A62());
	}
	if (bParam6)
	{
		iVar29 = func_4(1, 1);
	}
	if (!iVar29 == 0)
	{
		unk_0xFB061A86A7AC749F(1, &Var0, 26, iVar29);
	}
}

bool func_95(int iParam0, struct<2> Param1)
{
	return func_96(iParam0, Param1) > 1;
}

int func_96(int iParam0, struct<2> Param1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	
	if (iParam0 != func_15())
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (func_105(Global_1628237[iParam0 /*615*/].f_579.f_1[iVar0 /*2*/]))
			{
				Var2 = { func_86(Global_1628237[iParam0 /*615*/].f_579.f_1[iVar0 /*2*/]) };
				if (func_84(Var2, Param1))
				{
					iVar1++;
				}
			}
			iVar0++;
		}
	}
	return iVar1;
}

int func_97(int iParam0)
{
	if ((iParam0 >= 684 && iParam0 <= 703) || iParam0 == 747)
	{
		return 1;
	}
	return 0;
}

int func_98(struct<2> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (Global_2419327.f_199.f_1[iVar0 /*14*/].f_1.f_1 != -1 && func_88(Global_2419327.f_199.f_1[iVar0 /*14*/].f_1, Param0))
		{
			return Global_2419327.f_199.f_1[iVar0 /*14*/].f_3;
		}
		iVar0++;
	}
	return 0;
}

int func_99(struct<2> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (Global_2419327.f_199.f_1[iVar0 /*14*/].f_1.f_1 != -1 && func_88(Global_2419327.f_199.f_1[iVar0 /*14*/].f_1, Param0))
		{
			return Global_2419327.f_199.f_1[iVar0 /*14*/].f_13;
		}
		iVar0++;
	}
	return 0;
}

int func_100(struct<2> Param0, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (Global_2419327.f_199.f_1[iVar0 /*14*/].f_1.f_1 != -1 && func_88(Global_2419327.f_199.f_1[iVar0 /*14*/].f_1, Param0))
		{
			iVar1 = 0;
			while (iVar1 < 5)
			{
				if (Global_2419327.f_199.f_1[iVar0 /*14*/].f_5[iVar1] != 0 && Global_2419327.f_199.f_1[iVar0 /*14*/].f_5[iVar1] == iParam2)
				{
					return 1;
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_101(int iParam0)
{
	int iVar0;
	
	if (iParam0 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 18)
		{
			if (Global_1681961.f_4601[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_102(int iParam0)
{
	return func_103(iParam0, unk_0xD803B885F5E47A62());
}

int func_103(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 != func_15() && func_28(iParam1, 0, 1))
	{
		if (Global_1681961.f_4706.f_2 != 0)
		{
			return 1;
		}
		if (iParam0 != 0)
		{
			iVar0 = iParam1;
			if (func_104(iParam1, 1))
			{
				iVar0 = func_60(iParam1);
			}
			iVar1 = 0;
			while (iVar1 < 10)
			{
				if (Global_2419327.f_199.f_674[iVar1 /*57*/] == iVar0)
				{
					iVar2 = 0;
					while (iVar2 < 18)
					{
						if (Global_2419327.f_199.f_674[iVar1 /*57*/].f_1[iVar2] == iParam0)
						{
							return 1;
						}
						iVar2++;
					}
				}
				iVar1++;
			}
		}
	}
	return 0;
}

bool func_104(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_16(iParam0))
		{
			return 0;
		}
	}
	return Global_1628237[iParam0 /*615*/].f_11 != func_15();
}

bool func_105(struct<2> Param0)
{
	return (Param0.f_1 != -1 && Param0.f_0 != func_15());
}

struct<2> func_106(int iParam0, struct<2> Param1)
{
	struct<2> Var0;
	int iVar2;
	struct<2> Var3;
	struct<2> Var5;
	
	Var0.f_1 = -1;
	if (!func_111(iParam0) || !func_85(Param1))
	{
		return Var0;
	}
	iVar2 = 0;
	while (iVar2 < 5)
	{
		Var3 = { func_108(iParam0, iVar2, 0) };
		if (func_105(Var3) && func_107(Var3))
		{
			Var5 = { func_86(Var3) };
			if (func_84(Var5, Param1))
			{
				return Var3;
			}
		}
		iVar2++;
	}
	return Var0;
}

int func_107(struct<2> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (Global_2419327.f_199.f_1[iVar0 /*14*/].f_1.f_1 != -1 && func_88(Global_2419327.f_199.f_1[iVar0 /*14*/].f_1, Param0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

struct<2> func_108(int iParam0, int iParam1, bool bParam2)
{
	struct<2> Var0;
	int iVar2;
	int iVar3;
	
	Var0.f_1 = -1;
	if (!func_111(iParam0))
	{
		return Var0;
	}
	if ((func_28(iParam0, 0, 1) && iParam1 > -2) && iParam1 < 5)
	{
		if (iParam1 == -1)
		{
			iVar2 = 0;
			while (iVar2 < 5)
			{
				if ((func_105(Global_1628237[iParam0 /*615*/].f_579.f_1[iVar2 /*2*/]) && func_107(Global_1628237[iParam0 /*615*/].f_579.f_1[iVar2 /*2*/])) && (!bParam2 || !func_109(Global_1628237[iParam0 /*615*/].f_579.f_1[iVar2 /*2*/])))
				{
					return Global_1628237[iParam0 /*615*/].f_579.f_1[iVar2 /*2*/];
				}
				iVar2++;
			}
		}
		else
		{
			iVar3 = iParam1;
			if (func_105(Global_1628237[iParam0 /*615*/].f_579.f_1[iVar3 /*2*/]) && func_107(Global_1628237[iParam0 /*615*/].f_579.f_1[iVar3 /*2*/]))
			{
				return Global_1628237[iParam0 /*615*/].f_579.f_1[iVar3 /*2*/];
			}
		}
	}
	return Var0;
}

int func_109(struct<2> Param0)
{
	if (func_105(Param0))
	{
		if (func_110(Param0) == 2 || func_88(Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_579.f_12, Param0))
		{
			return 1;
		}
	}
	return 0;
}

int func_110(struct<2> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (Global_2419327.f_199.f_1[iVar0 /*14*/].f_1.f_1 != -1 && func_88(Global_2419327.f_199.f_1[iVar0 /*14*/].f_1, Param0))
		{
			return Global_2419327.f_199.f_1[iVar0 /*14*/];
		}
		iVar0++;
	}
	return -1;
}

int func_111(int iParam0)
{
	if (iParam0 != func_15() && func_28(iParam0, 0, 1))
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_579, 0);
	}
	return 0;
}

struct<2> func_112(int iParam0)
{
	struct<2> Var0;
	int iVar2;
	int iVar3;
	int iVar4;
	
	Var0 = -1;
	Var0.f_1 = -1000;
	if (iParam0 != 0)
	{
		if (Global_1681961.f_4706.f_2 == iParam0)
		{
			return Global_1681961.f_4706;
		}
		iVar4 = func_83();
		iVar2 = 0;
		while (iVar2 < 10)
		{
			if (Global_2419327.f_199.f_674[iVar2 /*57*/] == iVar4)
			{
				iVar3 = 0;
				while (iVar3 < 18)
				{
					if (Global_2419327.f_199.f_674[iVar2 /*57*/].f_1[iVar3] == iParam0)
					{
						return Global_2419327.f_199.f_674[iVar2 /*57*/].f_20[iVar3 /*2*/];
					}
					iVar3++;
				}
			}
			iVar2++;
		}
	}
	return Var0;
}

bool func_113()
{
	return func_114(unk_0xD803B885F5E47A62());
}

int func_114(int iParam0)
{
	if (iParam0 != func_15())
	{
		if (func_105(Global_1628237[iParam0 /*615*/].f_579.f_12) || unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_579, 4))
		{
			return 1;
		}
	}
	return 0;
}

bool func_115(int iParam0)
{
	return func_116(iParam0) > 1;
}

int func_116(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != func_15())
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (func_105(Global_1628237[iParam0 /*615*/].f_579.f_1[iVar0 /*2*/]))
			{
				iVar1++;
			}
			iVar0++;
		}
	}
	return iVar1;
}

bool func_117(int iParam0)
{
	return func_116(iParam0) > 0;
}

bool func_118(bool bParam0)
{
	return func_104(unk_0xD803B885F5E47A62(), bParam0);
}

void func_119()
{
	if (func_127(unk_0xD803B885F5E47A62()))
	{
		if (((func_126() || !func_124()) || func_45()) || func_123())
		{
			func_122(&uLocal_57, 1, 0);
			unk_0x5D96D8530B3D0904(&(Global_1676377.f_4), 26);
			if (!iLocal_56)
			{
			}
			iLocal_56 = 1;
		}
		else if (iLocal_56)
		{
			if (!func_121(&uLocal_57) || func_120(&uLocal_57, 2000, 1))
			{
				unk_0x0674E58A79778E99(&(Global_1676377.f_4), 26);
				iLocal_56 = 0;
			}
			else
			{
				unk_0x5D96D8530B3D0904(&(Global_1676377.f_4), 26);
			}
		}
	}
	else if (iLocal_56)
	{
		if (!func_121(&uLocal_57) || func_120(&uLocal_57, 2000, 1))
		{
			unk_0x0674E58A79778E99(&(Global_1676377.f_4), 26);
			iLocal_56 = 0;
		}
		else
		{
			unk_0x5D96D8530B3D0904(&(Global_1676377.f_4), 26);
		}
	}
}

int func_120(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_54(uParam0, bParam2, 0);
	if (unk_0x8CD06866876216F2() && !bParam2)
	{
		if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x51D1D19912234EA0(unk_0x519D13E6C1911A0B(unk_0x1C0640BA9A7327B3(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_121(var uParam0)
{
	return uParam0->f_1;
}

void func_122(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x8CD06866876216F2() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x2B6E0A53779D29EA();
		}
		else
		{
			*uParam0 = unk_0x6794171A1021C2D8();
		}
	}
	else
	{
		*uParam0 = unk_0x1C0640BA9A7327B3();
	}
	uParam0->f_1 = 1;
}

var func_123()
{
	return Global_2359693.f_3;
}

int func_124()
{
	if (func_125() == 0)
	{
		return 1;
	}
	return 0;
}

int func_125()
{
	return Global_1312467.f_18;
}

bool func_126()
{
	return unk_0x8BB17FEBE0394018() != 0;
}

int func_127(int iParam0)
{
	if (iParam0 != func_15())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_13(Global_2425662[iParam0 /*421*/].f_310.f_5) == 14;
			}
		}
	}
	return 0;
}

void func_128()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (!iLocal_39)
	{
		if (Global_1387909)
		{
			iLocal_39 = 1;
			func_130();
		}
	}
	else if (!Global_1387909)
	{
		iLocal_39 = 0;
	}
	iVar0 = 0;
	while (iVar0 < unk_0xDFB2BAED99ED0A2E(0))
	{
		iVar1 = unk_0xB98DB26FBF676FA1(0, iVar0);
		if (iVar1 == 147)
		{
			if (unk_0x218F818E64020C17(0, iVar0, &uVar3, 1))
			{
				iVar2 = uVar3;
				switch (iVar2)
				{
					case joaat("mp0_gold_intchar_4"):
						Global_1387952[0] = func_129(8730, 0);
						break;
					
					case joaat("mp1_gold_intchar_4"):
						Global_1387952[1] = func_129(8730, 1);
						break;
					
					case joaat("mp0_silver_intchar_4"):
						Global_1387982[0] = func_129(8728, 0);
						break;
					
					case joaat("mp1_silver_intchar_4"):
						Global_1387982[1] = func_129(8728, 1);
						break;
					
					case joaat("mp0_bronze_intchar_4"):
						Global_1388012[0] = func_129(8726, 0);
						break;
					
					case joaat("mp1_bronze_intchar_4"):
						Global_1388012[1] = func_129(8726, 1);
						break;
					
					case joaat("mp0_platinum_intchar_4"):
						Global_1388042[0] = func_129(8732, 0);
						break;
					
					case joaat("mp1_platinum_intchar_4"):
						Global_1388042[1] = func_129(8732, 1);
						break;
					
					case joaat("mp0_platinum_boolchar_3"):
						Global_1388090[0] = func_129(8731, 0);
						break;
					
					case joaat("mp1_platinum_boolchar_3"):
						Global_1388090[1] = func_129(8731, 1);
						break;
					}
				}
		}
		iVar0++;
	}
}

int func_129(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2548434[iParam0 /*3*/][iParam1];
	if (unk_0x6FB46C25CCB7E6D5(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_130()
{
	int iVar0;
	
	Global_1387952[0] = 0;
	Global_1387952[1] = 0;
	Global_1387952[2] = 0;
	Global_1387952[3] = 0;
	Global_1387952[4] = 0;
	Global_1387982[0] = 0;
	Global_1387982[1] = 0;
	Global_1387982[2] = 0;
	Global_1387982[3] = 0;
	Global_1387982[4] = 0;
	Global_1388012[0] = 0;
	Global_1388012[1] = 0;
	Global_1388012[2] = 0;
	Global_1388012[3] = 0;
	Global_1388012[4] = 0;
	Global_1388042[0] = 0;
	Global_1388042[1] = 0;
	Global_1388042[2] = 0;
	Global_1388042[3] = 0;
	Global_1388042[4] = 0;
	Global_1388090[0] = 0;
	Global_1388090[1] = 0;
	Global_1388090[2] = 0;
	Global_1388090[3] = 0;
	Global_1388090[4] = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_1388090[iVar0] = func_129(8731, iVar0);
		Global_1388042[iVar0] = func_129(8732, iVar0);
		Global_1388012[iVar0] = func_129(8726, iVar0);
		Global_1387982[iVar0] = func_129(8728, iVar0);
		Global_1387952[iVar0] = func_129(8730, iVar0);
		iVar0++;
	}
}

void func_131()
{
	if (func_133() == -1 || func_132() == -1)
	{
		if (!Global_262145.f_25842)
		{
			Global_262145.f_25842 = 1;
			iLocal_38 = 1;
		}
		func_122(&uLocal_36, 1, 0);
	}
	else if (func_45())
	{
		if (!Global_262145.f_25842)
		{
			Global_262145.f_25842 = 1;
			iLocal_38 = 1;
		}
		func_122(&uLocal_36, 1, 0);
	}
	else if (iLocal_38)
	{
		if (func_120(&uLocal_36, 5000, 1))
		{
			Global_262145.f_25842 = 0;
			iLocal_38 = 0;
		}
	}
}

int func_132()
{
	int iVar0;
	
	iVar0 = func_133();
	if (iVar0 != -1)
	{
		return Global_1574577.f_25[iVar0];
	}
	return -1;
}

int func_133()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (Global_262145.f_6446[iVar0] == 251)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_134()
{
	if (func_45() || Global_2451426.f_2846.f_195)
	{
		if (!func_138(&(Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_558), 36))
		{
			func_135(36, 1);
			iLocal_35 = 1;
		}
	}
	else if (iLocal_35)
	{
		func_135(36, 0);
		iLocal_35 = 0;
	}
}

void func_135(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_138(&(Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_558), iParam0))
		{
			func_137(&(Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_558), iParam0);
		}
	}
	else if (func_138(&(Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_558), iParam0))
	{
		func_136(&(Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_558), iParam0);
	}
	if (iParam0 == 10)
	{
		func_135(11, bParam1);
		func_135(12, bParam1);
		func_135(13, bParam1);
	}
	if (iParam0 == 36)
	{
		func_135(37, bParam1);
		func_135(38, bParam1);
		func_135(39, bParam1);
		func_135(40, bParam1);
		func_135(41, bParam1);
	}
}

void func_136(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 % 32);
	unk_0x0674E58A79778E99(uParam0[iVar0], iVar1);
}

void func_137(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 % 32);
	unk_0x5D96D8530B3D0904(uParam0[iVar0], iVar1);
}

bool func_138(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 % 32);
	return unk_0xEAE0D21A50E6C7F4((*uParam0)[iVar0], iVar1);
}

void func_139()
{
	int iVar0;
	
	if (func_124())
	{
		if (Global_262145.f_27815)
		{
			Global_262145.f_27815 = 0;
		}
		iVar0 = func_142(8833, -1, 0);
		if (unk_0xEAE0D21A50E6C7F4(iVar0, 19))
		{
			unk_0x0674E58A79778E99(&iVar0, 19);
			func_140(8833, iVar0, -1, 1, 0);
		}
	}
}

void func_140(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_141(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_141(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_7();
		if (iVar1 > -1)
		{
			Global_2548146 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2548146 = 1;
		}
	}
	return iVar0;
}

int func_142(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2548434[iParam0 /*3*/][func_141(iParam1)];
	if (unk_0x6FB46C25CCB7E6D5(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_143()
{
	if (Global_2462100)
	{
		if (((((uLocal_27[0] != Global_2097152[func_148() /*10930*/].f_6174.f_1304[5] || uLocal_27[1] != Global_2097152[func_148() /*10930*/].f_6174.f_1304[21]) || uLocal_27[2] != Global_2097152[func_148() /*10930*/].f_6174.f_1304[22]) || iLocal_31[0] != func_144(7, -1)) || iLocal_31[1] != func_144(23, -1)) || iLocal_31[2] != func_144(24, -1))
		{
			iLocal_31[0] = func_144(7, -1);
			iLocal_31[1] = func_144(23, -1);
			iLocal_31[2] = func_144(24, -1);
			func_140(3233, Global_2097152[func_148() /*10930*/].f_6174.f_1304[5], -1, 1, 0);
			func_140(8976, Global_2097152[func_148() /*10930*/].f_6174.f_1304[21], -1, 1, 0);
			func_140(8979, Global_2097152[func_148() /*10930*/].f_6174.f_1304[22], -1, 1, 0);
			uLocal_27[0] = Global_2097152[func_148() /*10930*/].f_6174.f_1304[5];
			uLocal_27[1] = Global_2097152[func_148() /*10930*/].f_6174.f_1304[21];
			uLocal_27[2] = Global_2097152[func_148() /*10930*/].f_6174.f_1304[22];
		}
	}
}

int func_144(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_7();
	}
	if (iParam0 == 7 && !Global_262145.f_16984)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_147(iParam0);
		if (iVar1 == 0 && func_142(5393, iParam1, 0) != 0)
		{
			return 1234;
		}
		if (func_146(-1) && iVar1 == 2)
		{
			return 1236;
		}
		if (func_145(unk_0xD803B885F5E47A62()) && iVar1 == 1)
		{
			return 1237;
		}
	}
	if (iParam0 == 0)
	{
		return Global_1388066[iVar0];
	}
	else if (iParam0 == 99)
	{
		return Global_2586214[iVar0];
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 25)
		{
			return 0;
		}
		return Global_2586065[(iParam0 - 1) /*3*/][iVar0];
	}
	return 0;
}

int func_145(int iParam0)
{
	if (iParam0 != func_15())
	{
		return Global_1590535[iParam0 /*876*/].f_274.f_322 != 0;
	}
	return 0;
}

bool func_146(int iParam0)
{
	if (!Global_262145.f_23663)
	{
		return 0;
	}
	return func_142(7207, iParam0, 0) != 0;
}

int func_147(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 3)
	{
		return iParam0;
	}
	return -1;
}

int func_148()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_149()
{
	var uVar0;
	
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		if (func_151(unk_0xD803B885F5E47A62(), -1))
		{
			if (func_150())
			{
				uVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
				if (unk_0x7F8A39872A07D2CE(&(Global_22350.f_1), "CMOD_MOD_T"))
				{
					iLocal_26 = unk_0xB97ED2A4B56844DE(uVar0, 18);
					if (iLocal_26)
					{
						iLocal_25 = 1;
					}
				}
				else if ((unk_0x7F8A39872A07D2CE(&(Global_22350.f_1), "CMOD_BUM_T") || unk_0x7F8A39872A07D2CE(&(Global_22350.f_1), "CMOD_BUMF_T")) || unk_0x7F8A39872A07D2CE(&(Global_22350.f_1), "CMOD_BUMR_T"))
				{
					if (iLocal_25)
					{
						if (!unk_0xB97ED2A4B56844DE(uVar0, 18) && iLocal_26)
						{
							unk_0x73BEC6F1685574E6(uVar0, 18, iLocal_26);
						}
					}
				}
				else if (iLocal_25)
				{
					iLocal_25 = 0;
					bLocal_26 = false;
				}
			}
			else if (iLocal_25)
			{
				iLocal_25 = 0;
				bLocal_26 = false;
			}
		}
	}
	else if (iLocal_25)
	{
		iLocal_25 = 0;
		bLocal_26 = false;
	}
}

bool func_150()
{
	return unk_0x1C0640BA9A7327B3() <= Global_22350.f_5878 + 100;
}

int func_151(int iParam0, int iParam1)
{
	var uVar0;
	
	if (func_28(iParam0, 1, 1))
	{
		if (unk_0x405E212DDE472467(unk_0x9539D44F3E4492F6(iParam0), 0))
		{
			uVar0 = unk_0x6937EA2286828455(unk_0x9539D44F3E4492F6(iParam0), 0);
			if (unk_0xDF1306B443CD3D15(uVar0, 0))
			{
				if (unk_0x16F2683693E537C9() == unk_0xA30B8362589C124A(iVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_152()
{
	if (!func_154(30259, -1, -1))
	{
		if ((unk_0xEAE0D21A50E6C7F4(func_142(8972, -1, 0), 14) || unk_0xEAE0D21A50E6C7F4(func_142(8972, -1, 0), 16)) || unk_0xEAE0D21A50E6C7F4(Global_2537071.f_1736, 7))
		{
			func_153(30259, 1, -1, 1);
		}
	}
}

int func_153(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	
	if (iParam2 == -1)
	{
		iParam2 = func_7();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x04D746E8DA20611E((iParam0 - 0)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x04D746E8DA20611E((iParam0 - 192)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x04D746E8DA20611E((iParam0 - 513)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x04D746E8DA20611E((iParam0 - 705)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0x61B9EF786FB4440A((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x04D746E8DA20611E((iParam0 - 3111)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0x61B9EF786FB4440A((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x04D746E8DA20611E((iParam0 - 2919)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x5748837B16D6E66B((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x04D746E8DA20611E((iParam0 - 4207)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x5748837B16D6E66B((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x04D746E8DA20611E((iParam0 - 4335)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x5748837B16D6E66B((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x04D746E8DA20611E((iParam0 - 6029)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x5748837B16D6E66B((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x04D746E8DA20611E((iParam0 - 7385)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x5748837B16D6E66B((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x04D746E8DA20611E((iParam0 - 7321)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0x5748837B16D6E66B((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x04D746E8DA20611E((iParam0 - 9361)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0x5748837B16D6E66B((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x04D746E8DA20611E((iParam0 - 15369)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0x5748837B16D6E66B((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x04D746E8DA20611E((iParam0 - 15562)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0x5748837B16D6E66B((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x04D746E8DA20611E((iParam0 - 15946)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0x5748837B16D6E66B((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x04D746E8DA20611E((iParam0 - 18098)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = unk_0x5748837B16D6E66B((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x04D746E8DA20611E((iParam0 - 22066)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = unk_0x5748837B16D6E66B((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - unk_0x04D746E8DA20611E((iParam0 - 24962)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar19, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = unk_0x5748837B16D6E66B((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - unk_0x04D746E8DA20611E((iParam0 - 26810)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar20, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar21 = unk_0x5748837B16D6E66B((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - unk_0x04D746E8DA20611E((iParam0 - 28098)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar21, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar22 = unk_0x5748837B16D6E66B((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - unk_0x04D746E8DA20611E((iParam0 - 28355)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar22, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar23 = unk_0x5748837B16D6E66B((iParam0 - 30227), 0, 1, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - unk_0x04D746E8DA20611E((iParam0 - 30227)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar23, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar24 = unk_0x5748837B16D6E66B((iParam0 - 30355), 0, 1, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - unk_0x04D746E8DA20611E((iParam0 - 30355)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar24, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_154(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_7();
	}
	iVar1 = func_156(iParam0, iParam1);
	uVar2 = func_155(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x16AE5C7FBDF5077E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_155(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x04D746E8DA20611E((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x04D746E8DA20611E((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x04D746E8DA20611E((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x04D746E8DA20611E((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x04D746E8DA20611E((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x04D746E8DA20611E((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x04D746E8DA20611E((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x04D746E8DA20611E((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x04D746E8DA20611E((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x04D746E8DA20611E((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x04D746E8DA20611E((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x04D746E8DA20611E((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x04D746E8DA20611E((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x04D746E8DA20611E((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0x04D746E8DA20611E((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0x04D746E8DA20611E((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - unk_0x04D746E8DA20611E((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - unk_0x04D746E8DA20611E((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - unk_0x04D746E8DA20611E((iParam0 - 26810)) * 64);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = ((iParam0 - 28098) - unk_0x04D746E8DA20611E((iParam0 - 28098)) * 64);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = ((iParam0 - 28355) - unk_0x04D746E8DA20611E((iParam0 - 28355)) * 64);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = ((iParam0 - 30227) - unk_0x04D746E8DA20611E((iParam0 - 30227)) * 64);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = ((iParam0 - 30355) - unk_0x04D746E8DA20611E((iParam0 - 30355)) * 64);
	}
	return iVar0;
}

int func_156(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_7();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x61B9EF786FB4440A((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x61B9EF786FB4440A((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 26810), 0, 1, iParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 28098), 0, 1, iParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 28355), 0, 1, iParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 30227), 0, 1, iParam1, "_SU20PSTAT_BOOL");
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = unk_0x5748837B16D6E66B((iParam0 - 30355), 0, 1, iParam1, "_SU20TATTOOSTAT_BOOL");
	}
	return iVar0;
}

void func_157()
{
	if (func_49(unk_0xD803B885F5E47A62()))
	{
		func_158();
	}
}

int func_158()
{
	if (Global_1370230)
	{
		return 0;
	}
	unk_0x38C3A68D7861DCFD(0, 37, 1);
	unk_0x38C3A68D7861DCFD(0, 157, 1);
	unk_0x38C3A68D7861DCFD(0, 159, 1);
	unk_0x38C3A68D7861DCFD(0, 160, 1);
	unk_0x38C3A68D7861DCFD(0, 161, 1);
	unk_0x38C3A68D7861DCFD(0, 162, 1);
	unk_0x38C3A68D7861DCFD(0, 163, 1);
	unk_0x38C3A68D7861DCFD(0, 164, 1);
	unk_0x38C3A68D7861DCFD(0, 165, 1);
	unk_0x38C3A68D7861DCFD(0, 158, 1);
	func_159();
	unk_0x38C3A68D7861DCFD(0, 101, 1);
	unk_0x38C3A68D7861DCFD(0, 337, 1);
	unk_0x38C3A68D7861DCFD(0, 53, 1);
	unk_0x38C3A68D7861DCFD(0, 54, 1);
	unk_0x38C3A68D7861DCFD(0, 47, 1);
	unk_0x38C3A68D7861DCFD(0, 140, 1);
	unk_0x38C3A68D7861DCFD(0, 141, 1);
	unk_0x38C3A68D7861DCFD(0, 263, 1);
	unk_0x38C3A68D7861DCFD(0, 264, 1);
	unk_0x38C3A68D7861DCFD(0, 142, 1);
	unk_0x38C3A68D7861DCFD(0, 143, 1);
	unk_0x38C3A68D7861DCFD(0, 24, 1);
	unk_0x38C3A68D7861DCFD(0, 257, 1);
	unk_0x38C3A68D7861DCFD(0, 44, 1);
	unk_0x38C3A68D7861DCFD(0, 282, 1);
	unk_0x38C3A68D7861DCFD(0, 283, 1);
	unk_0x38C3A68D7861DCFD(0, 284, 1);
	unk_0x38C3A68D7861DCFD(0, 285, 1);
	unk_0x38C3A68D7861DCFD(0, 69, 1);
	unk_0x38C3A68D7861DCFD(0, 70, 1);
	unk_0x38C3A68D7861DCFD(0, 114, 1);
	unk_0x38C3A68D7861DCFD(0, 99, 1);
	unk_0x38C3A68D7861DCFD(0, 100, 1);
	unk_0x38C3A68D7861DCFD(0, 102, 1);
	unk_0x38C3A68D7861DCFD(0, 74, 1);
	unk_0x38C3A68D7861DCFD(0, 68, 1);
	unk_0x38C3A68D7861DCFD(0, 25, 1);
	unk_0x38C3A68D7861DCFD(0, 36, 1);
	unk_0x38C3A68D7861DCFD(0, 345, 1);
	unk_0x38C3A68D7861DCFD(0, 346, 1);
	unk_0x38C3A68D7861DCFD(0, 347, 1);
	unk_0x38C3A68D7861DCFD(0, 91, 1);
	unk_0x38C3A68D7861DCFD(0, 92, 1);
	unk_0x38C3A68D7861DCFD(0, 81, 1);
	unk_0x38C3A68D7861DCFD(0, 82, 1);
	unk_0x38C3A68D7861DCFD(0, 83, 1);
	unk_0x38C3A68D7861DCFD(0, 84, 1);
	unk_0x38C3A68D7861DCFD(0, 85, 1);
	return 0;
}

void func_159()
{
	int iVar0;
	
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar0, 1);
		if (!(iVar0 == joaat("weapon_unarmed") || iVar0 == joaat("object")))
		{
			unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), joaat("weapon_unarmed"), 1);
		}
	}
}

void func_160()
{
	if (unk_0xEAE0D21A50E6C7F4(Global_102161, 0))
	{
		if (!func_161())
		{
			if (!func_121(&uLocal_23))
			{
				func_54(&uLocal_23, 0, 0);
			}
			else if (func_120(&uLocal_23, 5000, 0))
			{
				unk_0x0674E58A79778E99(&Global_102161, 0);
			}
		}
		else
		{
			func_55(&uLocal_23);
		}
	}
	else
	{
		func_55(&uLocal_23);
	}
}

bool func_161()
{
	return unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), 201.2196f, 5174.217f, -89.99727f, 198.8149f, 5175.969f, -87.49727f, 1.75f, 0, 1, 0);
}

void func_162()
{
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (func_163(iLocal_22))
		{
			unk_0x5D96D8530B3D0904(&(Global_1323615[iLocal_22 /*141*/].f_102), 2);
		}
		iLocal_22++;
		if (iLocal_22 >= 307)
		{
			iLocal_22 = 0;
		}
	}
}

int func_163(int iParam0)
{
	switch (Global_1323615[iParam0 /*141*/].f_66)
	{
		case joaat("thrax"):
		case joaat("paragon2"):
		case joaat("turismo2"):
		case joaat("jester3"):
		case joaat("infernus2"):
		case joaat("schlagen"):
		case joaat("taipan"):
		case joaat("nero"):
		case joaat("gauntlet3"):
		case joaat("stafford"):
		case joaat("mamba"):
		case joaat("swinger"):
		case joaat("deveste"):
		case joaat("locust"):
		case joaat("caracara2"):
		case joaat("sanctus"):
		case joaat("neo"):
		case joaat("stromberg"):
		case joaat("krieger"):
		case joaat("gauntlet4"):
		case joaat("flashgt"):
			return 1;
			break;
		
		case joaat("dodo"):
		case joaat("turismor"):
		case joaat("toros"):
		case joaat("monroe"):
		case joaat("velum"):
		case joaat("furoregt"):
		case joaat("infernus"):
		case joaat("ruston"):
		case joaat("marquis"):
		case joaat("defiler"):
		case joaat("pigalle"):
		case joaat("massacro2"):
		case joaat("tornado6"):
		case joaat("tampa"):
		case joaat("issi3"):
		case joaat("jb700"):
		case joaat("jester2"):
		case joaat("kamacho"):
		case joaat("fagaloa"):
		case joaat("impaler"):
		case joaat("dominator2"):
		case joaat("mammatus"):
		case joaat("jetmax"):
		case joaat("stalion2"):
		case joaat("massacro"):
		case joaat("esskey"):
		case joaat("cognoscenti"):
		case joaat("xls"):
		case joaat("superd"):
		case joaat("stunt"):
		case joaat("cuban800"):
		case joaat("vacca"):
		case joaat("jester"):
		case joaat("gauntlet2"):
		case joaat("exemplar"):
		case joaat("slamvan2"):
		case joaat("glendale"):
		case joaat("squalo"):
		case joaat("carbonizzare"):
		case joaat("virgo"):
		case joaat("cogcabrio"):
		case joaat("dinghy3"):
		case joaat("blade"):
		case joaat("bullet"):
		case joaat("brioso"):
		case joaat("voltic"):
		case joaat("voltic2"):
		case joaat("alpha"):
		case joaat("feltzer2"):
		case joaat("cheburek"):
		case joaat("rapidgt2"):
		case joaat("rhapsody"):
		case joaat("coquette"):
		case joaat("coquette2"):
		case joaat("rapidgt"):
		case joaat("ninef2"):
		case joaat("kuruma"):
		case joaat("ninef"):
		case joaat("schafter3"):
		case joaat("surano"):
		case joaat("banshee"):
		case joaat("khamelion"):
		case joaat("nightblade"):
		case joaat("chino"):
		case joaat("diablous"):
		case joaat("virgo3"):
		case joaat("fcr"):
		case joaat("comet2"):
		case joaat("zombiea"):
		case joaat("felon2"):
		case joaat("bf400"):
		case joaat("felon"):
		case joaat("baller2"):
		case joaat("hotknife"):
		case joaat("mesa3"):
		case joaat("panto"):
		case joaat("hakuchou"):
		case joaat("blazer4"):
		case joaat("f620"):
		case joaat("oracle2"):
		case joaat("bifta"):
		case joaat("stalion"):
		case joaat("blazer3"):
		case joaat("manchez"):
		case joaat("schafter2"):
		case joaat("zion2"):
		case joaat("dukes"):
		case joaat("jackal"):
		case joaat("serrano"):
		case joaat("patriot"):
		case joaat("fq2"):
		case joaat("slamvan"):
		case joaat("enduro"):
		case joaat("faggio"):
		case joaat("blista2"):
		case joaat("carbonrs"):
		case joaat("kalahari"):
		case joaat("ratloader2"):
		case joaat("faction"):
		case joaat("buffalo"):
		case joaat("dominator"):
		case joaat("moonbeam"):
		case joaat("gauntlet"):
		case joaat("tornado"):
		case joaat("buccaneer"):
		case joaat("prairie"):
		case joaat("penumbra"):
		case joaat("fugitive"):
		case joaat("issi2"):
		case joaat("seashark"):
		case joaat("intruder"):
		case joaat("bagger"):
		case joaat("bfinjection"):
		case joaat("hexer"):
		case joaat("washington"):
		case joaat("bati"):
		case joaat("bati2"):
		case joaat("sabregt"):
		case joaat("sultan"):
		case joaat("nemesis"):
		case joaat("double"):
		case joaat("tribike"):
		case joaat("tribike2"):
		case joaat("tribike3"):
		case joaat("ruffian"):
		case joaat("ruiner"):
		case joaat("picador"):
		case joaat("akuma"):
		case joaat("pcj"):
		case joaat("primo"):
		case joaat("futo"):
		case joaat("blazer"):
		case joaat("sanchez2"):
		case joaat("sanchez"):
		case joaat("voodoo2"):
		case joaat("faggio2"):
		case joaat("scorcher"):
		case joaat("cruiser"):
		case joaat("bmx"):
		case joaat("minivan"):
			if (unk_0xEAE0D21A50E6C7F4(Global_1323615[iParam0 /*141*/].f_102, 13))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_164()
{
	switch (func_165())
	{
		case joaat("penumbra2"):
			Global_1696072 = 0.88f;
			break;
		
		case joaat("italigtb"):
			Global_1696072 = 0.55f;
			break;
		
		case joaat("formula"):
			Global_1696072 = 0.52f;
			break;
		
		case joaat("pfister811"):
			Global_1696072 = 0.57f;
			break;
		
		case joaat("coquette4"):
			Global_1696072 = 0.52f;
			break;
		
		case joaat("sheava"):
			Global_1696072 = 0.68f;
			break;
		
		case joaat("s80"):
			Global_1696072 = 0.45f;
			break;
		
		case joaat("gauntlet5"):
			Global_1696072 = 0.6f;
			break;
		
		case joaat("openwheel2"):
			Global_1696072 = 0.51f;
			break;
		
		case joaat("btype2"):
			Global_1696072 = 0.57f;
			break;
		
		case joaat("xa21"):
			Global_1696072 = 0.74f;
			break;
		
		case joaat("tigon"):
			Global_1696072 = 0.6f;
			break;
	}
}

int func_165()
{
	return Global_262145.f_25985;
}

void func_166()
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	float fVar46;
	float fVar47;
	struct<3> Var48;
	
	if (func_121(&uLocal_14))
	{
		unk_0x5D96D8530B3D0904(&Global_7357, 2);
		if (func_120(&uLocal_14, 60000, 0))
		{
			func_122(&uLocal_14, 0, 0);
			func_55(&uLocal_14);
		}
	}
	if (func_121(&uLocal_12) && func_120(&uLocal_12, 1000, 0))
	{
		if (iLocal_21 == -1)
		{
			if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
			{
				iLocal_21 = unk_0xD68EA767274B7444();
				unk_0xCEAA091B490F8407(iLocal_21, "05", unk_0x16F2683693E537C9(), "DLC_GR_CS2_Sounds", 0, 0);
			}
		}
		else if (func_120(&uLocal_12, 4000, 0))
		{
			if (!unk_0x8AA6DC470ABA63A2(iLocal_21))
			{
				unk_0x55D0A2DB35045A35(iLocal_21);
			}
			unk_0x43A06902454A1172(iLocal_21);
			iLocal_21 = -1;
			unk_0x8910D3D58E0132B8("DLC_GR_CS2_General_Scene");
			func_122(&uLocal_12, 0, 0);
			func_55(&uLocal_12);
		}
	}
	if (!iLocal_6 && !func_173())
	{
		return;
	}
	iLocal_6 = 1;
	unk_0x5D96D8530B3D0904(&Global_7357, 2);
	if (!unk_0xC844350D5D58C99A(uLocal_5))
	{
		iVar0 = joaat("imp_prop_ship_01a");
		unk_0x523BCC9DC80CD82F(iVar0);
		if (unk_0xB87F6CF6E5628C67(iVar0))
		{
			iLocal_5 = unk_0xB0BE3DFBBB59A620(iVar0, 360.8759f, 5623.427f, 780.1747f, 0, 0, 1);
			unk_0x71199B01895C6202(iVar0);
			unk_0x1E9649458B15960F(iLocal_5, 1);
			unk_0x25BD67336EA4AECE(iLocal_5, 8000);
			iVar1 = func_142(7866, -1, 0);
			func_140(7866, iVar1 + 1, -1, 1, 0);
			Var2.f_1 = 1;
			Var2.f_0 = 24;
			unk_0x09B65A782EA88A3D(&Var2);
			Local_16 = { unk_0x68F4C0EC296D3901(iLocal_5, 0) };
			iLocal_19 = 0;
		}
	}
	else
	{
		func_172();
		if (unk_0x0F1CCD77290EE12F() || unk_0x7BCE0E6DD4A1F749())
		{
			if (iLocal_20 == -1)
			{
				unk_0x8BC9595FD2792B5D("DLC_GR_CS2_General_Scene");
				iLocal_20 = unk_0xD68EA767274B7444();
				unk_0xCEAA091B490F8407(iLocal_20, "07", iLocal_5, "DLC_GR_CS2_Sounds", 0, 0);
			}
			if (!iLocal_7)
			{
				if (func_120(&uLocal_8, 4500, 0))
				{
					unk_0x1E9649458B15960F(iLocal_5, 0);
					func_122(&uLocal_8, 0, 0);
					func_55(&uLocal_8);
					func_54(&uLocal_10, 0, 0);
					iLocal_7 = 1;
				}
			}
			else
			{
				fVar46 = (unk_0xBBDA792448DB5A89(func_171(&uLocal_10, 0, 0)) / unk_0xBBDA792448DB5A89(func_170()));
				fVar47 = (unk_0xBBDA792448DB5A89(func_171(&uLocal_8, 0, 0)) / unk_0xBBDA792448DB5A89(func_169()));
				fVar47 = (fVar47 * fVar46);
				Var48 = { func_167(Local_16, func_168(), fVar47) };
				unk_0xA47B46945FF6DE74(iLocal_5, Var48, 1, 0, 0, 1);
				if (fVar47 >= 1f)
				{
					iLocal_19++;
					Local_16 = { unk_0x68F4C0EC296D3901(iLocal_5, 0) };
					func_122(&uLocal_8, 0, 0);
					func_55(&uLocal_8);
					if (func_169() == -1)
					{
						unk_0xF690C84DADBB3551(&iLocal_5);
						unk_0x7A36B76661EE453C();
						if (!unk_0x8AA6DC470ABA63A2(iLocal_20))
						{
							unk_0x55D0A2DB35045A35(iLocal_20);
						}
						unk_0x43A06902454A1172(iLocal_20);
						iLocal_20 = -1;
						func_54(&uLocal_12, 0, 0);
						func_54(&uLocal_14, 0, 0);
						func_122(&uLocal_10, 0, 0);
						func_55(&uLocal_10);
						Local_16 = { 0f, 0f, 0f };
						iLocal_19 = 0;
						iLocal_6 = 0;
						iLocal_7 = 0;
					}
				}
			}
		}
	}
}

Vector3 func_167(struct<3> Param0, struct<3> Param3, float fParam6)
{
	return FtoV((1f - fParam6)) * Param0 + Vector(fParam6, fParam6, fParam6) * Param3;
}

Vector3 func_168()
{
	switch (iLocal_19)
	{
		case 0:
			return 306.567f, 5652.283f, 785.594f;
		
		case 1:
			return -1082.865f, 6390.52f, 924.2493f;
		
		case 2:
			return -2542.874f, 7217.514f, 1051.333f;
		
		case 3:
			return -4139.106f, 8143.302f, 1412.694f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_169()
{
	switch (iLocal_19)
	{
		case 0:
			return 2000;
		
		case 1:
			return 1000;
		
		case 2:
			return 100;
		
		case 3:
			return 50;
		
		default:
	}
	return -1;
}

int func_170()
{
	return 3150;
}

var func_171(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x8CD06866876216F2() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x519D13E6C1911A0B(unk_0x2B6E0A53779D29EA(), *uParam0);
		}
		else
		{
			return unk_0x519D13E6C1911A0B(unk_0x6794171A1021C2D8(), *uParam0);
		}
	}
	return unk_0x519D13E6C1911A0B(unk_0x1C0640BA9A7327B3(), *uParam0);
}

void func_172()
{
	struct<3> Var0;
	
	Var0 = { unk_0x835730A2D89F6093(iLocal_5, 2) };
	Var0.f_0 = 0f;
	Var0.f_1 = 0f;
	Var0.f_2 = (Var0.f_2 + 1f);
	unk_0xC023D1C4BF532815(iLocal_5, Var0, 2, 1);
}

int func_173()
{
	if (((((((func_154(22107, -1, -1) && Global_2409287 == 7) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0)) && func_176(unk_0x16F2683693E537C9(), 426.433f, 5614.172f, 766.414f, 1f)) && Global_2451426.f_3074.f_178 >= 1) && Global_2451426.f_3074.f_178 < 4) && func_175()) && func_174())
	{
		return 1;
	}
	return 0;
}

int func_174()
{
	if (func_154(15476, -1, -1) && func_142(5450, func_7(), 0) > 577)
	{
		return 1;
	}
	return 0;
}

int func_175()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0x1BC83DD08AA82285(&iVar0, &iVar1, &fVar2);
	if (fVar2 < 0.5f)
	{
		if ((iVar0 == joaat("rain") || iVar0 == joaat("THUNDER")) || iVar1 == -1429616491)
		{
			return 1;
		}
	}
	else if ((iVar1 == joaat("rain") || iVar1 == joaat("THUNDER")) || iVar1 == -1429616491)
	{
		return 1;
	}
	return 0;
}

bool func_176(int iParam0, struct<3> Param1, float fParam4)
{
	return unk_0xB7A628320EFF8E47(unk_0x68F4C0EC296D3901(uParam0, 1), Param1) <= (fParam4 * fParam4);
}

void func_177()
{
	switch (Global_1703580)
	{
		case 5:
			switch (Global_1703580.f_1)
			{
				case 0:
					Global_1703580.f_1 = 9;
					break;
				
				case 9:
					if (func_178(unk_0xD803B885F5E47A62()))
					{
						if (!unk_0xEAE0D21A50E6C7F4(Global_1703580.f_2, 6))
						{
							unk_0xAE317D00A5A55DF6("DLC_SUM20/DLC_SUM20_HIDDEN_COLLECTIBLES", 0, -1);
							unk_0x5D96D8530B3D0904(&(Global_1703580.f_2), 6);
						}
					}
					else if (unk_0xEAE0D21A50E6C7F4(Global_1703580.f_2, 6))
					{
						unk_0x42740B44BA8D7B43("DLC_SUM20/DLC_SUM20_HIDDEN_COLLECTIBLES");
						unk_0x0674E58A79778E99(&(Global_1703580.f_2), 6);
					}
					if (unk_0xEAE0D21A50E6C7F4(Global_1703580.f_2, 4))
					{
						func_55(&(Global_1703580.f_7));
						Global_1703580.f_10.f_2 = unk_0xD68EA767274B7444();
						unk_0x4D7F4CC43D4D0DE3(Global_1703580.f_10.f_2, "movie_prop_reward_cut_music", "DLC_sum20_hidden_collectible_sounds", 1);
						unk_0x8BC9595FD2792B5D("DLC_Sum20_Hidden_Collectibles_Reward_Scene");
						Global_1703580.f_1 = 1;
					}
					break;
				
				case 5:
					switch (Global_1703580.f_10)
					{
						case 3:
							Global_1703580.f_10 = 7;
							break;
						
						case 7:
							if (unk_0xA45992A6CE82FB43(Global_1703580.f_10.f_1) > 0.35f)
							{
								unk_0x4D7F4CC43D4D0DE3(-1, "movie_prop_reward_cut_roar", "DLC_sum20_hidden_collectible_sounds", 1);
								unk_0x55D0A2DB35045A35(Global_1703580.f_10.f_2);
								Global_1703580.f_10 = 4;
							}
							break;
					}
					break;
			}
			break;
	}
}

int func_178(int iParam0)
{
	if (iParam0 != func_15())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_13(Global_2425662[iParam0 /*421*/].f_310.f_5) == 18;
			}
		}
	}
	return 0;
}

void func_179()
{
	if (Global_1703580 == 3)
	{
		if (func_121(&(Global_1703580.f_7)))
		{
			func_55(&(Global_1703580.f_7));
		}
	}
	else if (Global_1703580 == 4)
	{
		if (func_178(unk_0xD803B885F5E47A62()))
		{
			Global_1703580 = 7;
		}
	}
	else if (Global_1703580 == 7)
	{
		if (!func_178(unk_0xD803B885F5E47A62()))
		{
			func_55(&(Global_1703580.f_7));
			Global_1703580 = 4;
		}
	}
}

void func_180()
{
	if ((Global_110584 && unk_0x8A22C4C08282BF26(joaat("director_mode")) <= 0) && func_124())
	{
		unk_0x1B48B61732969D5B();
	}
}

void func_181()
{
	int iVar0;
	
	if (!iLocal_4)
	{
		if (Global_1574211)
		{
			iVar0 = func_182(joaat("mpply_char_exploit_level"));
			if (iVar0 >= 4)
			{
				Global_262145.f_10126 = 1;
			}
			iLocal_4 = 1;
		}
	}
	else if (!Global_1574211)
	{
		iLocal_4 = 0;
	}
}

int func_182(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0x6FB46C25CCB7E6D5(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_183()
{
	if (!iLocal_3)
	{
		if (Global_1574211)
		{
			if (func_185() || func_184())
			{
				Global_262145.f_19697 = 1;
			}
			else
			{
				Global_262145.f_19697 = 0;
			}
			iLocal_3 = 1;
		}
	}
	else if (!Global_1574211)
	{
		iLocal_3 = 0;
	}
}

int func_184()
{
	int iVar0;
	var uVar1[4];
	int iVar6;
	
	iVar0 = func_182(joaat("mpply_char_peak_exploit_level"));
	if (iVar0 < Global_262145.f_10235)
	{
		return 0;
	}
	uVar1[0] = func_182(joaat("mpply_prevseasonexploitlevel"));
	uVar1[1] = func_182(joaat("mpply_prevseason2exploitlevel"));
	uVar1[2] = func_182(joaat("mpply_prevseason3exploitlevel"));
	uVar1[3] = func_182(joaat("mpply_prevseason4exploitlevel"));
	iVar6 = 0;
	while (iVar6 < (Global_262145.f_10231 - 1))
	{
		if (uVar1[iVar6] < Global_262145.f_10235)
		{
			return 0;
		}
		iVar6++;
	}
	return 1;
}

int func_185()
{
	int iVar0;
	var uVar1[4];
	int iVar6;
	
	iVar0 = func_182(joaat("mpply_char_peak_exploit_level"));
	if (iVar0 < Global_262145.f_10234)
	{
		return 0;
	}
	uVar1[0] = func_182(joaat("mpply_prevseasonexploitlevel"));
	uVar1[1] = func_182(joaat("mpply_prevseason2exploitlevel"));
	uVar1[2] = func_182(joaat("mpply_prevseason3exploitlevel"));
	uVar1[3] = func_182(joaat("mpply_prevseason4exploitlevel"));
	iVar6 = 0;
	while (iVar6 < (Global_262145.f_10230 - 1))
	{
		if (uVar1[iVar6] < Global_262145.f_10234)
		{
			return 0;
		}
		iVar6++;
	}
	return 1;
}

void func_186()
{
	int iVar0;
	
	if (unk_0x0EFF6B4415DAF4A1())
	{
		iVar0 = 0;
		while (iVar0 < Global_1590535)
		{
			unk_0x5D96D8530B3D0904(&(Global_1590535[iVar0 /*876*/].f_737), 1);
			iVar0++;
		}
	}
}

void func_187()
{
	if (Global_262145.f_10210 != 120)
	{
		Global_262145.f_10210 = 120;
	}
}

void func_188()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < unk_0xDFB2BAED99ED0A2E(1))
	{
		iVar1 = unk_0xB98DB26FBF676FA1(1, iVar0);
		if (iVar1 == 174)
		{
			if (unk_0x218F818E64020C17(1, iVar0, &iVar2, 2))
			{
				if (iVar2 == -1884218406)
				{
					func_201(iVar0);
				}
				else if (iVar2 == -1264141133)
				{
					func_199(iVar0);
				}
				else if (iVar2 == 1704682300)
				{
					func_190(iVar0);
				}
			}
		}
		else if (iVar1 == 166)
		{
			if (unk_0x0EFF6B4415DAF4A1())
			{
				func_189(iVar0);
			}
		}
		iVar0++;
	}
}

void func_189(int iParam0)
{
	struct<4> Var0;
	
	if (unk_0x218F818E64020C17(1, iParam0, &Var0, 7))
	{
		if (Var0.f_3 == joaat("vw_prop_vw_lux_card_01a"))
		{
			iLocal_69 = 1;
		}
	}
}

void func_190(int iParam0)
{
	struct<3> Var0;
	
	Var0.f_2.f_1 = -1;
	if (unk_0x218F818E64020C17(1, iParam0, &Var0, 4))
	{
		if (unk_0x15673EFF6BDD825C(func_34(), -1, 0) != unk_0xD803B885F5E47A62())
		{
			if (unk_0x15673EFF6BDD825C(func_34(), -1, 0) != -1)
			{
			}
			return;
		}
		func_191(Var0.f_2);
	}
}

void func_191(struct<2> Param0)
{
	int iVar0;
	
	if (unk_0x15673EFF6BDD825C(func_34(), -1, 0) == unk_0xD803B885F5E47A62())
	{
		iVar0 = 0;
		while (iVar0 < 48)
		{
			if (func_88(Global_2419327.f_199.f_1[iVar0 /*14*/].f_1, Param0))
			{
				if (func_192(iVar0))
				{
					Global_2419327.f_199.f_1[iVar0 /*14*/].f_1.f_1 = -1;
					Global_2419327.f_199.f_1[iVar0 /*14*/] = -1;
					Global_2419327.f_199.f_1[iVar0 /*14*/].f_13 = 0;
					Global_2419327.f_199.f_1[iVar0 /*14*/].f_3 = 0;
				}
				return;
			}
			iVar0++;
		}
	}
}

int func_192(int iParam0)
{
	int iVar0;
	
	switch (Global_2419327.f_199.f_1[iParam0 /*14*/].f_3)
	{
		case 22:
			if (func_198() == 1)
			{
				return 0;
			}
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
			if (unk_0xADC2AA9A68E522A1("BUSINESS_BATTLES", -1, 1, 0) || unk_0xADC2AA9A68E522A1("FM_CONTENT_BUSINESS_BATTLES", -1, 1, 0))
			{
				return 0;
			}
			iVar0 = 0;
			while (iVar0 < func_197())
			{
				if (func_28(unk_0x117658E336116132(iVar0), 0, 1) && (func_195(unk_0x117658E336116132(iVar0)) || func_193(unk_0x117658E336116132(iVar0))))
				{
					return 0;
				}
				iVar0++;
			}
			break;
		
		case 24:
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (Global_1703118.f_1[iVar0 /*13*/] == 2)
				{
					return 0;
				}
				iVar0++;
			}
			break;
	}
	return 1;
}

int func_193(int iParam0)
{
	if (func_194(iParam0) == 236 || func_194(iParam0) == 150)
	{
		return 1;
	}
	return 0;
}

int func_194(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1628237[iVar0 /*615*/];
	}
	return -1;
}

int func_195(int iParam0)
{
	if (Global_1628237[iParam0 /*615*/] == 236 || Global_1628237[iParam0 /*615*/] == 150)
	{
		return func_196(iParam0);
	}
	return 0;
}

int func_196(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_1628237[iVar0 /*615*/].f_1, 0);
	}
	return 0;
}

int func_197()
{
	if (Global_2457997)
	{
		return 32;
	}
	return (32 - Global_2457998);
}

int func_198()
{
	return Global_1650640.f_630;
}

void func_199(int iParam0)
{
	struct<25> Var0;
	int iVar25;
	int iVar26;
	int iVar27;
	
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1000;
	Var0.f_5 = 18;
	if (unk_0x218F818E64020C17(1, iParam0, &Var0, 25))
	{
		if (unk_0x15673EFF6BDD825C(func_34(), -1, 0) != unk_0xD803B885F5E47A62())
		{
			return;
		}
		iVar25 = 0;
		while (iVar25 < 10)
		{
			if (Global_2419327.f_199.f_674[iVar25 /*57*/] == Var0.f_2)
			{
				iVar26 = 0;
				while (iVar26 < Var0.f_24)
				{
					if (Var0.f_5[iVar26] != 0)
					{
						iVar27 = func_200(iVar25, Var0.f_5[iVar26]);
						if (iVar27 != -1)
						{
							if (Global_2419327.f_199.f_674[iVar25 /*57*/].f_20[iVar27 /*2*/] == unk_0x7CF4675EC2B8ED0B())
							{
							}
							else
							{
								Global_2419327.f_199.f_674[iVar25 /*57*/].f_20[iVar27 /*2*/] = { Var0.f_3 };
							}
						}
					}
					iVar26++;
				}
				return;
			}
			iVar25++;
		}
	}
}

int func_200(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 18)
	{
		if (iParam1 == Global_2419327.f_199.f_674[iParam0 /*57*/].f_1[iVar0])
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_201(int iParam0)
{
	struct<4> Var0;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1000;
	if (unk_0x218F818E64020C17(1, iParam0, &Var0, 5))
	{
		if (unk_0x15673EFF6BDD825C(func_34(), -1, 0) != unk_0xD803B885F5E47A62())
		{
			return;
		}
		func_32();
		if (Var0.f_2 == 0)
		{
			if (Var0.f_3 == unk_0x7CF4675EC2B8ED0B())
			{
				iVar5 = 0;
				while (iVar5 < 10)
				{
					if (Global_2419327.f_199.f_674[iVar5 /*57*/] == unk_0x117658E336116132(0))
					{
						iVar6 = 0;
						while (iVar6 < 18)
						{
							if (Global_2419327.f_199.f_674[iVar5 /*57*/].f_20[iVar6 /*2*/] == unk_0x7CF4675EC2B8ED0B())
							{
								unk_0x0674E58A79778E99(&(Global_2419327.f_199.f_674[iVar5 /*57*/].f_20[iVar6 /*2*/].f_1), Var0.f_1);
								if (Global_2419327.f_199.f_674[iVar5 /*57*/].f_20[iVar6 /*2*/].f_1 == 0)
								{
									Global_2419327.f_199.f_674[iVar5 /*57*/].f_1[iVar6] = 0;
									Global_2419327.f_199.f_674[iVar5 /*57*/].f_20[iVar6 /*2*/] = { func_30() };
									func_206(iVar6);
								}
								else
								{
									func_205(iVar6, Global_2419327.f_199.f_674[iVar5 /*57*/].f_20[iVar6 /*2*/]);
								}
								Jump @297; //curOff = 282
							}
							iVar6++;
						}
					}
					else
					{
						iVar5++;
					}
				}
			}
			else
			{
				iVar7 = 0;
				while (iVar7 < 10)
				{
					if (Global_2419327.f_199.f_674[iVar7 /*57*/] == Var0.f_1)
					{
						iVar8 = 0;
						while (iVar8 < 18)
						{
							Global_2419327.f_199.f_674[iVar7 /*57*/].f_1[iVar8] = 0;
							Global_2419327.f_199.f_674[iVar7 /*57*/].f_20[iVar8 /*2*/] = { func_30() };
							iVar8++;
						}
						Global_2419327.f_199.f_674[iVar7 /*57*/] = func_15();
					}
					iVar7++;
				}
			}
		}
		else if (Var0.f_3 == unk_0x7CF4675EC2B8ED0B())
		{
			func_202(Var0.f_2, unk_0x117658E336116132(0), Var0.f_3, 1, 1);
		}
		else
		{
			func_202(Var0.f_2, Var0.f_1, Var0.f_3, 0, 1);
		}
	}
}

void func_202(int iParam0, int iParam1, struct<2> Param2, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0x15673EFF6BDD825C(func_34(), -1, 0) != unk_0xD803B885F5E47A62())
	{
		return;
	}
	if ((iParam0 != 0 && iParam1 != func_15()) && func_28(iParam1, 0, 1))
	{
		iVar0 = -1;
		iVar1 = -1;
		iVar2 = 0;
		while (iVar2 < 10)
		{
			if (bParam5)
			{
				if (Global_2419327.f_199.f_674[iVar2 /*57*/] == func_15())
				{
					if (iVar1 == -1)
					{
						iVar1 = iVar2;
					}
				}
				else if (Global_2419327.f_199.f_674[iVar2 /*57*/] == iParam1)
				{
					iVar0 = iVar2;
				}
				else
				{
					Jump @220; //curOff = 136
					if (Global_2419327.f_199.f_674[iVar2 /*57*/] == iParam1)
					{
						iVar3 = 0;
						while (iVar3 < 18)
						{
							if (Global_2419327.f_199.f_674[iVar2 /*57*/].f_1[iVar3] == iParam0)
							{
								Global_2419327.f_199.f_674[iVar2 /*57*/].f_1[iVar3] = 0;
							}
							iVar3++;
						}
					}
					iVar2++;
				}
				if (bParam5)
				{
					if (iVar0 == -1)
					{
						if (iVar1 != -1)
						{
							iVar0 = iVar1;
						}
						else
						{
							return;
						}
					}
					iVar4 = -1;
					if (bParam4)
					{
						iVar2 = 17;
						while (iVar2 >= 0)
						{
							if (Global_2419327.f_199.f_674[iVar0 /*57*/].f_1[iVar2] == 0)
							{
								if (iVar4 == -1)
								{
									iVar4 = iVar2;
								}
							}
							if (Global_2419327.f_199.f_674[iVar0 /*57*/].f_1[iVar2] == iParam0)
							{
								return;
							}
							iVar2 = (iVar2 + -1);
						}
					}
					else
					{
						iVar2 = 0;
						while (iVar2 < 18)
						{
							if (Global_2419327.f_199.f_674[iVar0 /*57*/].f_1[iVar2] == 0)
							{
								if (iVar4 == -1)
								{
									iVar4 = iVar2;
								}
							}
							if (Global_2419327.f_199.f_674[iVar0 /*57*/].f_1[iVar2] == iParam0)
							{
								return;
							}
							iVar2++;
						}
					}
					if (iVar4 > -1)
					{
						Global_2419327.f_199.f_674[iVar0 /*57*/].f_1[iVar4] = iParam0;
						Global_2419327.f_199.f_674[iVar0 /*57*/] = iParam1;
						Global_2419327.f_199.f_674[iVar0 /*57*/].f_20[iVar4 /*2*/] = { Param2 };
						if (iVar4 >= 15)
						{
							func_203(iVar4, iParam0, Param2);
						}
					}
					else
					{
						return;
					}
				}
			}

void func_203(int iParam0, int iParam1, struct<2> Param2)
{
	int iVar0;
	
	iVar0 = func_204(iParam0);
	iLocal_43[iVar0] = iParam1;
	Local_47[iVar0 /*2*/] = { Param2 };
}

int func_204(int iParam0)
{
	int iVar0;
	
	iVar0 = (iParam0 - 15);
	if (iVar0 < 0 || iVar0 >= 3)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_205(int iParam0, struct<2> Param1)
{
	int iVar0;
	
	iVar0 = func_204(iParam0);
	Local_47[iVar0 /*2*/] = { Param1 };
}

void func_206(int iParam0)
{
	int iVar0;
	
	iVar0 = func_204(iParam0);
	iLocal_43[iVar0] = 0;
	Local_47[iVar0 /*2*/] = { func_30() };
}

void func_207()
{
	if (iLocal_1)
	{
		unk_0xD3539A877EC25E86(0f, 0.23f);
		unk_0x7178F32F6742C936(255, 255, 255, 255);
		func_208(0.69f, 0.06f, "STRING", sLocal_0);
	}
	if (!iLocal_1)
	{
		if (unk_0x798A3F1296751F46())
		{
			switch (iLocal_2)
			{
				case 0:
					if (unk_0xBFC0798A6E3417F9(2, 189))
					{
						iLocal_2++;
						unk_0xC1B1E9A034A63A62(0);
					}
					break;
				
				case 1:
					if (unk_0xBFC0798A6E3417F9(2, 190))
					{
						iLocal_2++;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				
				case 2:
					if (unk_0xBFC0798A6E3417F9(2, 189))
					{
						iLocal_2++;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				
				case 3:
					if (unk_0xBFC0798A6E3417F9(2, 190))
					{
						iLocal_2++;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				
				case 4:
					if (unk_0xBFC0798A6E3417F9(2, 188))
					{
						iLocal_1 = 1;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				}
		}
	}
	else if (unk_0x798A3F1296751F46())
	{
		switch (iLocal_2)
		{
			case 0:
				if (unk_0xBFC0798A6E3417F9(2, 188))
				{
					iLocal_2++;
					unk_0xC1B1E9A034A63A62(0);
				}
				break;
			
			case 1:
				if (unk_0xBFC0798A6E3417F9(2, 190))
				{
					iLocal_2++;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			
			case 2:
				if (unk_0xBFC0798A6E3417F9(2, 189))
				{
					iLocal_2++;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			
			case 3:
				if (unk_0xBFC0798A6E3417F9(2, 190))
				{
					iLocal_2++;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			
			case 4:
				if (unk_0xBFC0798A6E3417F9(2, 189))
				{
					iLocal_1 = 0;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			}
	}
}

void func_208(float fParam0, float fParam1, char* sParam2, char* sParam3)
{
	unk_0x070005E852D4C0E9(sParam2);
	unk_0x0D45A7AB73600CFA(sParam3);
	unk_0xE0026608C37C7C41(fParam0, fParam1, 0);
}

bool func_209()
{
	return unk_0xC146D5FBD23C6954(-1762644250);
}

