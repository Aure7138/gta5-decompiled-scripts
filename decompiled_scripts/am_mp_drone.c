#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 10;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 2;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 8;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 8;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	float fLocal_94 = 0f;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	struct<3> Local_115[32];
	var uLocal_212 = 0;
	struct<211> Local_213 = { 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 1069547520, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	struct<12> ScriptParam_0 = { 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_94 = ((0.05f + 0.275f) - 0.01f);
	iLocal_110 = -1;
	iLocal_111 = -1;
	if (unk_0x393E9918BC37548A())
	{
		func_473(ScriptParam_0);
	}
	else
	{
		func_448(0);
	}
	while (true)
	{
		func_447();
		if (func_436())
		{
			func_448(0);
		}
		if (func_431())
		{
			func_448(0);
		}
		func_2();
		if (unk_0x722688699565161D())
		{
			func_1();
		}
	}
}

void func_1()
{
}

void func_2()
{
	if (!func_430(5))
	{
		func_429();
		func_428();
		func_427();
		func_424();
		func_422();
		func_421();
	}
	if (func_430(0))
	{
		func_376();
	}
	else if (func_430(1))
	{
		if (!func_375())
		{
			func_369();
			func_354();
		}
		else
		{
			func_353(1);
			func_352(6);
		}
	}
	else if (func_430(2))
	{
		func_344();
	}
	else if (func_430(3))
	{
		func_343();
		func_338();
		func_336();
		func_335();
		func_334();
		func_333();
		func_332();
		func_327();
		func_321();
		func_307();
		func_305();
		func_263();
		func_262();
		func_247();
		func_344();
		if (func_240())
		{
			func_239();
			return;
		}
		func_235();
		func_234();
		func_228();
		func_216(0);
		func_202();
		func_193();
		func_185();
		func_164();
		func_157();
		func_156();
		func_81();
		func_66();
		func_65();
		func_64();
	}
	else if (func_430(4))
	{
		func_26();
	}
	else if (func_430(5))
	{
		func_22();
		func_20();
	}
	else if (func_430(6))
	{
		func_11();
	}
	if (!func_430(3) && !func_430(5))
	{
		func_5();
	}
	func_4();
	func_3();
}

void func_3()
{
	Local_213.f_44++;
	if (Local_213.f_44 >= 32)
	{
		Local_213.f_44 = 0;
	}
}

void func_4()
{
	if (Local_213.f_44 != -1)
	{
		if (unk_0x8A7BBB98FFB32893(Local_115[Local_213.f_44 /*3*/].f_2))
		{
			if (Global_1648604[unk_0x7C7787D2D7139A85() /*81*/].f_48[Local_213.f_44] != unk_0x833BB45D35E36889(Local_115[Local_213.f_44 /*3*/].f_2))
			{
				Global_1648604[unk_0x7C7787D2D7139A85() /*81*/].f_48[Local_213.f_44] = unk_0x833BB45D35E36889(Local_115[Local_213.f_44 /*3*/].f_2);
			}
		}
	}
}

void func_5()
{
	int iVar0;
	
	if (Local_213.f_118)
	{
		if (func_10(&(Local_213.f_178)))
		{
			if (func_9())
			{
				iVar0 = Global_262145.f_24730;
			}
			else
			{
				iVar0 = Global_262145.f_24130;
			}
			if (func_7(&(Local_213.f_178), iVar0, 0))
			{
				func_6(&(Local_213.f_178));
				Local_213.f_17 = 100;
				unk_0x3B76114EC84D5812(&(Local_213.f_5), 4);
				unk_0x3B76114EC84D5812(&(Local_213.f_5), 3);
				unk_0x3B76114EC84D5812(&(Local_213.f_5), 24);
				Local_213.f_118 = 0;
			}
		}
	}
}

void func_6(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_7(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_8(uParam0, bParam2, 0);
	if (unk_0x393E9918BC37548A() && !bParam2)
	{
		if (unk_0x25A1A0BF87F74E56(unk_0x675EE3FED67AA436(unk_0x169A8AC9F93C2727(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x25A1A0BF87F74E56(unk_0x675EE3FED67AA436(unk_0x9B35D07DCD0F0B43(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_8(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x393E9918BC37548A() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x169A8AC9F93C2727();
			}
			else
			{
				*uParam0 = unk_0x50D85685589EFCBD();
			}
		}
		else
		{
			*uParam0 = unk_0x9B35D07DCD0F0B43();
		}
		uParam0->f_1 = 1;
	}
}

bool func_9()
{
	return unk_0xA2BC31158C8CEFD2(Global_1687880.f_2, 2);
}

bool func_10(var uParam0)
{
	return uParam0->f_1;
}

void func_11()
{
	if (unk_0x8A7BBB98FFB32893(Local_213.f_121))
	{
		if (unk_0xF42AC9E0924DC59B(Local_213.f_121))
		{
			if (!func_12())
			{
				func_448(1);
			}
			else
			{
				func_448(0);
			}
		}
		else
		{
			unk_0x4DB32D0662E0696B(Local_213.f_121);
		}
	}
	else if (!func_12())
	{
		func_448(1);
	}
	else
	{
		func_448(0);
	}
}

int func_12()
{
	if (func_19())
	{
		return 1;
	}
	if (func_18())
	{
		return 1;
	}
	if (func_17() && func_13(unk_0x7C7787D2D7139A85()))
	{
		return 1;
	}
	return 0;
}

int func_13(int iParam0)
{
	if (iParam0 != func_16())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_14(Global_2424073[iParam0 /*421*/].f_309.f_5) == 17;
			}
		}
	}
	return 0;
}

int func_14(int iParam0)
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
	}
	return -1;
}

int func_15(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xD56C8C2B75BF9665(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xD699DB8EAB756F25(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2437549.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_16()
{
	return -1;
}

bool func_17()
{
	return unk_0xA2BC31158C8CEFD2(Global_1687880.f_2, 5);
}

bool func_18()
{
	return unk_0xA2BC31158C8CEFD2(Global_1687880, 24);
}

bool func_19()
{
	return unk_0xA2BC31158C8CEFD2(Global_1687880, 16);
}

void func_20()
{
	char* sVar0;
	
	if (Local_213.f_44 == -1)
	{
		return;
	}
	if (!func_21(Local_213.f_44))
	{
		return;
	}
	if (unk_0x8A7BBB98FFB32893(Local_115[Local_213.f_44 /*3*/].f_2))
	{
		sVar0 = "scr_xs_props";
		unk_0x5CFE984F4EB443F7(sVar0);
		if (unk_0xB30F99610F67002E(sVar0))
		{
			if (!unk_0xFB3E0C95810C1454(Local_213.f_136[Local_213.f_44]))
			{
				unk_0x6DB03BA592B3B9BA(sVar0);
				Local_213.f_136[Local_213.f_44] = unk_0x5C20627D907188D6("scr_xs_guided_missile_trail", unk_0x833BB45D35E36889(Local_115[Local_213.f_44 /*3*/].f_2), 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
			}
		}
	}
	else if (unk_0xFB3E0C95810C1454(Local_213.f_136[Local_213.f_44]))
	{
		unk_0x47E6FFF8419C8442(Local_213.f_136[Local_213.f_44], 0);
	}
}

int func_21(int iParam0)
{
	if (iParam0 != func_16())
	{
		if (Local_115[iParam0 /*3*/].f_1 == 4)
		{
			return 1;
		}
	}
	return 0;
}

void func_22()
{
	if (Local_213.f_44 != -1)
	{
		if (unk_0x8A7BBB98FFB32893(Local_115[Local_213.f_44 /*3*/].f_2) && func_25(unk_0x833BB45D35E36889(Local_115[Local_213.f_44 /*3*/].f_2)))
		{
			if (func_24(Local_213.f_44))
			{
				Local_213.f_119 = "DLC_Arena_Drone_Sounds";
			}
			else if (func_23(Local_213.f_44))
			{
				Local_213.f_119 = "DLC_Arena_Battle_Drone_Sounds";
			}
			else if (func_21(Local_213.f_44))
			{
				Local_213.f_119 = "DLC_Arena_Piloted_Missile_Sounds";
			}
			else
			{
				Local_213.f_119 = "DLC_BTL_Drone_Sounds";
			}
			if (Local_213.f_45[Local_213.f_44] == -1)
			{
				Local_213.f_45[Local_213.f_44] = unk_0x04B8CCFB93858A27();
				unk_0x5F5C6A264C2CA8B1(Local_213.f_45[Local_213.f_44], "Flight_Loop", unk_0x833BB45D35E36889(Local_115[Local_213.f_44 /*3*/].f_2), Local_213.f_119, 0, 0);
				unk_0xEC93A4D791E42F8E(Local_213.f_45[Local_213.f_44], "DroneRotationalSpeed", 1f);
			}
			else
			{
				unk_0xEC93A4D791E42F8E(Local_213.f_45[Local_213.f_44], "DroneRotationalSpeed", 1f);
			}
		}
		else if (Local_213.f_45[Local_213.f_44] != -1)
		{
			unk_0xCFF6AB47B7B014FF(Local_213.f_45[Local_213.f_44]);
			unk_0x0972EA9E8102C153(Local_213.f_45[Local_213.f_44]);
			Local_213.f_45[Local_213.f_44] = -1;
		}
	}
}

int func_23(int iParam0)
{
	if (iParam0 != func_16())
	{
		if (Local_115[iParam0 /*3*/].f_1 == 2)
		{
			return 1;
		}
	}
	return 0;
}

int func_24(int iParam0)
{
	if (iParam0 != func_16())
	{
		if (Local_115[iParam0 /*3*/].f_1 == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_25(int iParam0)
{
	if (unk_0xD4B321D9096B01FC(iParam0))
	{
		if (!unk_0xF4B969E0807E76C7(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_26()
{
	int iVar0;
	
	unk_0x0AF55029F939BA65(9);
	unk_0x0AF55029F939BA65(7);
	unk_0x0AF55029F939BA65(8);
	unk_0x40984840FC30EC06();
	unk_0x572062A62138FBA2(0, 199, 1);
	unk_0x572062A62138FBA2(0, 200, 1);
	func_63();
	func_61();
	func_54(1);
	if (!unk_0xA2BC31158C8CEFD2(Local_213.f_5, 1))
	{
		if (!func_32() && !func_31())
		{
			if ((func_30() || func_9()) || func_29())
			{
				unk_0x5BBDAD06F405ED2C(unk_0x0FA8183DAD2B3203());
			}
		}
		if (unk_0x8A7BBB98FFB32893(Local_213.f_121))
		{
			unk_0xDBAAA280792CB384(unk_0x833BB45D35E36889(Local_213.f_121), 1);
		}
		if (unk_0xDE3C2FB26058823A(Local_213.f_33))
		{
			Local_213.f_33 = unk_0x04B8CCFB93858A27();
			unk_0x9964F5BBD9415AB7(Local_213.f_33, "HUD_Static_Loop", Local_213.f_119, 1);
		}
		if (!func_28())
		{
			unk_0x9EDF0FD0707786D3(0, 300, 100);
			unk_0x6793D62D4C7127BB("RemixDrone");
			unk_0xA1E7A40E1F56E511(&(Local_213.f_6), 0);
		}
		unk_0xA1E7A40E1F56E511(&(Local_213.f_5), 1);
	}
	else if (!func_10(&(Local_213.f_174)))
	{
		func_8(&(Local_213.f_174), 0, 0);
	}
	else
	{
		iVar0 = 1000;
		if (func_27())
		{
			iVar0 = 500;
		}
		if (func_7(&(Local_213.f_174), iVar0, 0) || func_28())
		{
			if (Local_213.f_37 == -1)
			{
				if (unk_0xDE3C2FB26058823A(Local_213.f_37))
				{
					Local_213.f_37 = unk_0x04B8CCFB93858A27();
					unk_0x9964F5BBD9415AB7(Local_213.f_37, "HUD_Disconnect", Local_213.f_119, 1);
				}
			}
			func_353(1);
			func_352(6);
		}
	}
}

bool func_27()
{
	return unk_0xA2BC31158C8CEFD2(Global_1687880.f_2, 4);
}

bool func_28()
{
	return unk_0xA2BC31158C8CEFD2(Global_1687880, 20);
}

bool func_29()
{
	return unk_0xA2BC31158C8CEFD2(Global_1687880.f_2, 3);
}

bool func_30()
{
	return unk_0xA2BC31158C8CEFD2(Global_1687880, 11);
}

bool func_31()
{
	return Global_2508063;
}

int func_32()
{
	if ((func_53(unk_0x7C7787D2D7139A85(), 0) && Global_1319106 == 1) && func_33())
	{
		return 1;
	}
	return 0;
}

int func_33()
{
	if (Global_1319106 != -1 || Global_1319112 != -1)
	{
		if ((((unk_0xF6FD8019402CF03B(unk_0x0FA8183DAD2B3203(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter", 3) || unk_0xF6FD8019402CF03B(unk_0x0FA8183DAD2B3203(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter_left", 3)) || unk_0xF6FD8019402CF03B(unk_0x0FA8183DAD2B3203(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit", 3)) || unk_0xF6FD8019402CF03B(unk_0x0FA8183DAD2B3203(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit_left", 3)) || func_51(unk_0x0FA8183DAD2B3203(), 2106541073))
		{
			return 0;
		}
		if (((((!unk_0xF6FD8019402CF03B(unk_0x0FA8183DAD2B3203(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "base", 3) && !unk_0xF6FD8019402CF03B(unk_0x0FA8183DAD2B3203(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_enter", 3)) && !unk_0xF6FD8019402CF03B(unk_0x0FA8183DAD2B3203(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_exit", 3)) && !unk_0xF6FD8019402CF03B(unk_0x0FA8183DAD2B3203(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle", 3)) && !unk_0xF6FD8019402CF03B(unk_0x0FA8183DAD2B3203(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle_control", 3)) && !unk_0xF6FD8019402CF03B(unk_0x0FA8183DAD2B3203(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter_control", 3))
		{
			return 0;
		}
		if (func_34())
		{
			return 0;
		}
	}
	return 1;
}

int func_34()
{
	int iVar0;
	
	if (func_50(unk_0x7C7787D2D7139A85()))
	{
		iVar0 = func_49(unk_0x7C7787D2D7139A85());
		if (func_15(iVar0, 0, 1))
		{
			if ((((((func_48(iVar0) && func_14(func_47(iVar0)) == 4) && unk_0xD4B321D9096B01FC(unk_0x23625FE58BACEBFD(iVar0))) && !unk_0x2BF5E63466422C38(unk_0x23625FE58BACEBFD(iVar0))) && unk_0x5294582CE404D3F4(unk_0x23625FE58BACEBFD(iVar0), 0)) && unk_0xD4B321D9096B01FC(unk_0x4D57D3E5ECE15A41(unk_0x23625FE58BACEBFD(iVar0), 0))) && func_46(unk_0x4D57D3E5ECE15A41(unk_0x23625FE58BACEBFD(iVar0), 0)))
			{
				return 1;
			}
			if (!func_45(Global_4456448.f_154360))
			{
				if (func_50(iVar0))
				{
					if (func_44(iVar0))
					{
						return 1;
					}
					else if (func_48(unk_0x7C7787D2D7139A85()) || func_43())
					{
						return 1;
					}
				}
			}
		}
	}
	if (Global_1687909)
	{
		return 1;
	}
	if (func_42(unk_0x7C7787D2D7139A85()))
	{
		iVar0 = func_41(unk_0x7C7787D2D7139A85());
		if (func_15(iVar0, 0, 1))
		{
			if ((((((func_48(iVar0) && func_14(func_47(iVar0)) == 9) && unk_0xD4B321D9096B01FC(unk_0x23625FE58BACEBFD(iVar0))) && !unk_0x2BF5E63466422C38(unk_0x23625FE58BACEBFD(iVar0))) && unk_0x5294582CE404D3F4(unk_0x23625FE58BACEBFD(iVar0), 0)) && unk_0xD4B321D9096B01FC(unk_0x4D57D3E5ECE15A41(unk_0x23625FE58BACEBFD(iVar0), 0))) && unk_0x7F375072508F738F(unk_0x4D57D3E5ECE15A41(unk_0x23625FE58BACEBFD(iVar0), 0)) == joaat("avenger"))
			{
				return 1;
			}
			if (func_40(iVar0))
			{
				return 1;
			}
			else if (func_48(unk_0x7C7787D2D7139A85()) || func_43())
			{
				return 1;
			}
		}
	}
	if (func_53(unk_0x7C7787D2D7139A85(), 0))
	{
		iVar0 = func_39(unk_0x7C7787D2D7139A85());
		if (func_15(iVar0, 0, 1))
		{
			if ((((Global_1590293 != func_16() && func_48(Global_1590293)) && func_14(func_47(Global_1590293)) == 11) && func_38(Global_1590293, -1)) && unk_0x759DEE4D113EC07E(unk_0x4D57D3E5ECE15A41(unk_0x23625FE58BACEBFD(Global_1590293), 0), joaat("terbyte")))
			{
				return 1;
			}
			else if (func_37(iVar0))
			{
				return 1;
			}
			else if (func_48(unk_0x7C7787D2D7139A85()) || func_43())
			{
				return 1;
			}
		}
	}
	if (func_42(unk_0x7C7787D2D7139A85()) || func_36(unk_0x7C7787D2D7139A85()))
	{
		switch (Global_1319112)
		{
			case 1:
				if (Global_262145.f_22572)
				{
					return 1;
				}
				break;
			
			case 2:
				if (Global_262145.f_22573)
				{
					return 1;
				}
				break;
			
			case 3:
				if (Global_262145.f_22574)
				{
					return 1;
				}
				break;
			}
	}
	if (Global_1319110 == 1)
	{
		return 1;
	}
	if (func_35(3))
	{
		if (Global_1573351 == 185)
		{
			if (Global_1574439 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_35(int iParam0)
{
	return Global_262145.f_5008[iParam0] == Global_4456448.f_154360;
}

int func_36(int iParam0)
{
	if (iParam0 != func_16())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_14(Global_2424073[iParam0 /*421*/].f_309.f_5) == 10;
			}
		}
	}
	return 0;
}

int func_37(int iParam0)
{
	if (iParam0 != func_16())
	{
		return unk_0xA2BC31158C8CEFD2(Global_2424073[iParam0 /*421*/].f_309.f_3, 4);
	}
	return 0;
}

int func_38(int iParam0, int iParam1)
{
	var uVar0;
	
	if (func_15(iParam0, 1, 1))
	{
		if (unk_0x5294582CE404D3F4(unk_0x23625FE58BACEBFD(iParam0), 0))
		{
			uVar0 = unk_0x4D57D3E5ECE15A41(unk_0x23625FE58BACEBFD(iParam0), 0);
			if (unk_0xD960230552BC4165(uVar0, 0))
			{
				if (unk_0x0FA8183DAD2B3203() == unk_0x300C62F79A4441EB(uVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_39(int iParam0)
{
	if (iParam0 == func_16())
	{
		return iParam0;
	}
	return Global_2424073[iParam0 /*421*/].f_309.f_8;
}

int func_40(int iParam0)
{
	if (iParam0 != func_16())
	{
		return unk_0xA2BC31158C8CEFD2(Global_2424073[iParam0 /*421*/].f_309.f_2, 6);
	}
	return 0;
}

int func_41(int iParam0)
{
	if (iParam0 == func_16())
	{
		return iParam0;
	}
	return Global_2424073[iParam0 /*421*/].f_309.f_8;
}

int func_42(int iParam0)
{
	if (iParam0 != func_16())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1 && Global_2424073[iParam0 /*421*/].f_309.f_8 != func_16())
			{
				return func_14(Global_2424073[iParam0 /*421*/].f_309.f_5) == 8;
			}
		}
	}
	return 0;
}

bool func_43()
{
	return unk_0xA2BC31158C8CEFD2(Global_1676879, 6);
}

int func_44(int iParam0)
{
	if (iParam0 != func_16())
	{
		return unk_0xA2BC31158C8CEFD2(Global_2424073[iParam0 /*421*/].f_309, 6);
	}
	return 0;
}

bool func_45(int iParam0)
{
	return Global_262145.f_4999[4] == iParam0;
}

int func_46(int iParam0)
{
	if (unk_0x7F375072508F738F(uParam0) == joaat("hauler2") || unk_0x7F375072508F738F(iParam0) == joaat("phantom3"))
	{
		return 1;
	}
	return 0;
}

int func_47(int iParam0)
{
	if (iParam0 != func_16() && func_15(iParam0, 1, 1))
	{
		return Global_2424073[iParam0 /*421*/].f_309.f_14;
	}
	return -1;
}

int func_48(int iParam0)
{
	if (iParam0 != func_16() && func_15(iParam0, 1, 1))
	{
		return unk_0xA2BC31158C8CEFD2(Global_2424073[iParam0 /*421*/].f_309, 3);
	}
	return 0;
}

int func_49(int iParam0)
{
	if (iParam0 == func_16())
	{
		return iParam0;
	}
	return Global_2424073[iParam0 /*421*/].f_309.f_8;
}

int func_50(int iParam0)
{
	if (iParam0 != func_16())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1 && Global_2424073[iParam0 /*421*/].f_309.f_8 != func_16())
			{
				return func_14(Global_2424073[iParam0 /*421*/].f_309.f_5) == 5;
			}
		}
	}
	return 0;
}

int func_51(int iParam0, int iParam1)
{
	if (func_52(iParam0))
	{
		if (unk_0x411C065ADB822CD9(iParam0, iParam1) == 1 || unk_0x411C065ADB822CD9(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_52(int iParam0)
{
	if (func_25(uParam0))
	{
		if (!unk_0x2BF5E63466422C38(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_53(int iParam0, bool bParam1)
{
	var uVar0;
	
	if (bParam1)
	{
		if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
		{
			uVar0 = unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
			if (unk_0x7F375072508F738F(uVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_16())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1 && Global_2424073[iParam0 /*421*/].f_309.f_8 != func_16())
			{
				return func_14(Global_2424073[iParam0 /*421*/].f_309.f_5) == 12;
			}
		}
	}
	return 0;
}

void func_54(int iParam0)
{
	if (func_60())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_59(0))
		{
			func_55(iParam0);
		}
		unk_0xA1E7A40E1F56E511(&Global_7357, 2);
	}
}

void func_55(int iParam0)
{
	if (func_60())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_58())
		{
			func_57(1, 1);
		}
		else
		{
			func_57(0, 0);
		}
	}
	if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
	{
		unk_0xA1E7A40E1F56E511(&Global_7357, 16);
	}
	if (unk_0x31634D65216B86B6())
	{
		unk_0x623942A4F366F9BB(0);
	}
	Global_20805 = 5;
	if (iParam0 == 1)
	{
		unk_0xA1E7A40E1F56E511(&Global_7356, 30);
	}
	else
	{
		unk_0x3B76114EC84D5812(&Global_7356, 30);
	}
	if (!func_56())
	{
		Global_19486.f_1 = 3;
	}
}

int func_56()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_57(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_59(0))
		{
			Global_19664 = 1;
			if (bParam1)
			{
				unk_0xB1B52CCC3333E09F(&Global_19423);
			}
			Global_19414 = { Global_19432[Global_19431 /*3*/] };
			unk_0x4577629BF7B43F7F(Global_19414);
		}
	}
	else if (Global_19664 == 1)
	{
		Global_19664 = 0;
		Global_19414 = { Global_19439[Global_19431 /*3*/] };
		if (bParam1)
		{
			unk_0x4577629BF7B43F7F(Global_19423);
		}
		else
		{
			unk_0x4577629BF7B43F7F(Global_19414);
		}
	}
}

bool func_58()
{
	return unk_0xA2BC31158C8CEFD2(Global_1687880, 5);
}

int func_59(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19486.f_1 > 3)
		{
			if (unk_0xA2BC31158C8CEFD2(Global_7356, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x222F76006659B0EB(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_19486.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_60()
{
	return unk_0xA2BC31158C8CEFD2(Global_1687880, 19);
}

void func_61()
{
	unk_0xA42289DB8250C2C0();
	func_62();
}

void func_62()
{
	Global_22211.f_134 = 1;
}

void func_63()
{
	Global_1312666 = 1;
}

void func_64()
{
	if (func_17())
	{
		if (func_18())
		{
			if (func_25(unk_0x0FA8183DAD2B3203()))
			{
				unk_0x70CBCB37A00F34A2(unk_0x0FA8183DAD2B3203(), 124, 1);
			}
		}
	}
}

void func_65()
{
	char* sVar0;
	
	if (!func_27())
	{
		return;
	}
	sVar0 = "scr_xs_props";
	unk_0x5CFE984F4EB443F7(sVar0);
	if (unk_0xB30F99610F67002E(sVar0))
	{
		if (unk_0x8A7BBB98FFB32893(Local_213.f_121))
		{
			if (!unk_0xFB3E0C95810C1454(Local_213.f_136[unk_0x7C7787D2D7139A85()]))
			{
				unk_0x6DB03BA592B3B9BA(sVar0);
				Local_213.f_136[unk_0x7C7787D2D7139A85()] = unk_0x5C20627D907188D6("scr_xs_guided_missile_trail", unk_0x833BB45D35E36889(Local_213.f_121), 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
			}
		}
	}
}

void func_66()
{
	if (unk_0x8A7BBB98FFB32893(Local_213.f_121))
	{
		if (!unk_0xD4B321D9096B01FC(Local_213.f_123))
		{
			unk_0x6BB2B1818CAE531E(func_80());
			if (unk_0x6DF9C43E3CC645BC(func_80()))
			{
				if (!unk_0xA2BC31158C8CEFD2(Local_213.f_5, 6))
				{
					if (func_74(unk_0x1D20AA4302D0BF3D(false, 0) + 1, 0, 1))
					{
						unk_0x98B3F83A2664256A(unk_0x069FA774AADBDDE6(0) + 1);
						unk_0xA1E7A40E1F56E511(&(Local_213.f_5), 6);
					}
				}
				else if (unk_0xEA2FCC46B8870EF9(1))
				{
					Local_213.f_123 = unk_0xB983F26E7AFB47BF(26, func_80(), Local_213.f_112, unk_0xD2809C7F7FD79247(unk_0x833BB45D35E36889(Local_213.f_121)), 0, 0);
					unk_0x04F5A8AA60EC662B(Local_213.f_123, 1);
					unk_0x2BBEC4B37B923F4B(Local_213.f_123, false, 0);
					unk_0xDBAAA280792CB384(Local_213.f_123, 0);
					unk_0xCC94EE23853F38E4(Local_213.f_123, 1);
					unk_0xE0AC40EF164A2569(func_80());
					unk_0x1DB66BD2267055C0(Local_213.f_123, 118, 0);
					unk_0x1DB66BD2267055C0(Local_213.f_123, 108, 1);
					unk_0x1DB66BD2267055C0(Local_213.f_123, 208, 1);
					unk_0x3427075D3608A3BB(Local_213.f_123, 1, 1, 1, 1, 1, 0, 0, 0);
					unk_0x01DF2D3988024DB4(Local_213.f_123, unk_0x833BB45D35E36889(Local_213.f_121), -1, 0f, 0f, -0.25f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					unk_0xD36570C04932359F(Local_213.f_123, 0, 0);
					Global_1687880.f_23 = Local_213.f_123;
				}
			}
		}
		else if (func_25(Local_213.f_123))
		{
			if (unk_0x0975E9E48EA2CC7B(Local_213.f_123))
			{
				unk_0x2BBEC4B37B923F4B(Local_213.f_123, false, 0);
			}
			if (!func_72(unk_0x7C7787D2D7139A85()) && !func_69(unk_0x7C7787D2D7139A85(), 236))
			{
				if (unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()) > 0)
				{
					func_68(Global_1575008);
				}
			}
			else if ((Global_1687880.f_4 == -1 || Global_1687880.f_4 == 0) || Global_1687880.f_4 == Global_1574997)
			{
				func_68(Global_1575008);
			}
			if (unk_0xD11CE32B5375927D(Local_213.f_123) != func_67())
			{
				unk_0xDB889DCC8B0139E6(Local_213.f_123, func_67());
			}
			if (!unk_0xCA7317DE7E0F89E9(Local_213.f_123))
			{
				unk_0x01DF2D3988024DB4(Local_213.f_123, unk_0x833BB45D35E36889(Local_213.f_121), -1, 0f, 0f, -0.25f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				unk_0xD36570C04932359F(Local_213.f_123, 0, 0);
			}
		}
	}
}

int func_67()
{
	if (Global_1687880.f_4 != -1 && Global_1687880.f_4 != 0)
	{
		return Global_1687880.f_4;
	}
	return Global_1575008;
}

void func_68(int iParam0)
{
	if (Global_1687880.f_4 != iParam0)
	{
		Global_1687880.f_4 = iParam0;
	}
}

int func_69(int iParam0, int iParam1)
{
	if (func_71(iParam0) == iParam1)
	{
		return func_70(iParam0);
	}
	return 0;
}

int func_70(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return unk_0xA2BC31158C8CEFD2(Global_1628955[iVar0 /*614*/].f_1, 7);
	}
	return 0;
}

int func_71(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1628955[iVar0 /*614*/];
	}
	return -1;
}

bool func_72(int iParam0)
{
	return func_73(iParam0, 20);
}

bool func_73(int iParam0, int iParam1)
{
	return unk_0xA2BC31158C8CEFD2(Global_1628955[iParam0 /*614*/].f_11.f_4, iParam1);
}

bool func_74(int iParam0, bool bParam1, bool bParam2)
{
	return func_75(2, iParam0, 1, bParam1, bParam2);
}

int func_75(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xA2BC31158C8CEFD2(Global_1385512, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_79(iParam0) - func_78(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_78(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_79(iParam0) - func_77(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_78(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_79(iParam0) - func_78(iParam0, 1));
		}
		if (!bParam4 && Global_1590446[unk_0x7C7787D2D7139A85() /*871*/] != 3)
		{
			iVar1 = (iVar1 - func_76(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_76(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_77(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1385512.f_1;
			break;
		
		case 1:
			return Global_1385512.f_2;
			break;
		
		case 2:
			return Global_1385512.f_3;
			break;
	}
	return 0;
}

int func_78(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x7C7787D2D7139A85();
	switch (iParam0)
	{
		case 0:
			if (!unk_0xF77CF4BC35906B30())
			{
				return Global_2424073[iVar0 /*421*/].f_209;
			}
			else
			{
				return unk_0x03E221531363601B(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!unk_0xF77CF4BC35906B30())
			{
				return Global_2424073[iVar0 /*421*/].f_210;
			}
			else
			{
				return unk_0x0336A7593E5AD83F(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!unk_0xF77CF4BC35906B30())
			{
				return Global_2424073[iVar0 /*421*/].f_211;
			}
			else
			{
				return unk_0x1D20AA4302D0BF3D(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_79(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1385520;
			break;
		
		case 1:
			return Global_1385521;
			break;
		
		case 2:
			return Global_1385522;
			break;
	}
	return 0;
}

int func_80()
{
	return joaat("g_m_m_chigoon_01");
}

void func_81()
{
	if (func_155())
	{
		return;
	}
	if (unk_0x8A7BBB98FFB32893(Local_213.f_121) && !unk_0xF4B969E0807E76C7(unk_0x833BB45D35E36889(Local_213.f_121), 0))
	{
		if (unk_0xD2652A8A890B29BA(Local_213.f_131) && unk_0xBE2A1549F5014A49(Local_213.f_131))
		{
			if (!func_27())
			{
				func_146();
				func_108();
			}
			else
			{
				func_90();
				func_84();
			}
			unk_0xFE6039EDAF163D18();
			func_83(1);
			func_82(2);
		}
	}
}

void func_82(int iParam0)
{
	Global_1315712 = iParam0;
}

void func_83(int iParam0)
{
	Global_1375006.f_1100 = iParam0;
}

void func_84()
{
	int iVar0;
	
	if (!unk_0x08EA887200715AD9(Local_213.f_132))
	{
		Local_213.f_132 = func_89();
		return;
	}
	iVar0 = func_88();
	if (iVar0 < 0 || !func_25(iVar0))
	{
		return;
	}
	func_87(Local_213.f_132, 0);
	func_86(Local_213.f_132, 3, 3, 3);
	func_85(Local_213.f_132, 0f, 0f, 0f, 0f, (unk_0xD2809C7F7FD79247(iVar0) + 180f));
	unk_0xF314976CA3E17AC7(1);
	unk_0x53F520B89860756C(Local_213.f_132, 255, 255, 255, 0, 0);
}

void func_85(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	fParam2 = ((fParam2 - fParam3) / (fParam4 - fParam3));
	unk_0xF1BC72CEC2746995(uParam0, "SET_ALT_FOV_HEADING");
	unk_0xD435957F6275B434(fParam1);
	unk_0xD435957F6275B434(fParam2);
	unk_0xD435957F6275B434(fParam5);
	unk_0xAC7C2DE2DDC7AF03();
}

void func_86(var uParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0xF1BC72CEC2746995(uParam0, "SET_WEAPON_VALUES");
	unk_0xD02F24F3E2DB263A(iParam1);
	unk_0xD02F24F3E2DB263A(iParam2);
	unk_0xD02F24F3E2DB263A(iParam3);
	unk_0xAC7C2DE2DDC7AF03();
}

void func_87(var uParam0, int iParam1)
{
	unk_0xF1BC72CEC2746995(uParam0, "SET_ZOOM_VISIBLE");
	unk_0x282C78036676E0C2(iParam1);
	unk_0xAC7C2DE2DDC7AF03();
}

int func_88()
{
	if (unk_0x7C7787D2D7139A85() != -1)
	{
		return Global_1687880.f_20;
	}
	return -1;
}

var func_89()
{
	char* sVar0;
	
	sVar0 = "";
	switch (Global_4456448.f_184556)
	{
		case 1:
			sVar0 = "ARENA_GUN_CAM_APOCALYPSE";
			break;
		
		case 2:
			sVar0 = "ARENA_GUN_CAM_SCIFI";
			break;
		
		case 3:
			sVar0 = "ARENA_GUN_CAM_CONSUMER";
			break;
		
		default:
			sVar0 = "INVALID_THEME";
			break;
	}
	return unk_0x1FAFE9BB9D8960C1(sVar0);
}

void func_90()
{
	if (!unk_0xA2BC31158C8CEFD2(Local_213.f_5, 16))
	{
		if (func_106(0, -1, 0))
		{
			func_105(-1);
			func_104(20, "DRONE_SPACE", -1);
			func_104(21, "DRONE_POSITION", -1);
			if (!unk_0x59415A8719336539(0))
			{
				func_103(208, "DRONE_SPEEDU", -1, 0);
				func_103(207, "DRONE_SLOWD", -1, 0);
			}
			else
			{
				func_103(209, "DRONE_SPEEDU", -1, 0);
				func_103(210, "DRONE_SLOWD", -1, 0);
			}
			func_103(75, "MOVE_DRONE_RE", -1, 0);
			unk_0xA1E7A40E1F56E511(&(Local_213.f_5), 16);
		}
	}
	else
	{
		func_91(0, -1, 0, 1, 0, 0, 1, 1, 0);
	}
	if (unk_0x59415A8719336539(0))
	{
		if (!unk_0xA2BC31158C8CEFD2(Local_213.f_5, 17))
		{
			unk_0xA1E7A40E1F56E511(&(Local_213.f_5), 17);
			unk_0x3B76114EC84D5812(&(Local_213.f_5), 16);
		}
	}
	else if (unk_0xA2BC31158C8CEFD2(Local_213.f_5, 17))
	{
		unk_0x3B76114EC84D5812(&(Local_213.f_5), 17);
		unk_0x3B76114EC84D5812(&(Local_213.f_5), 16);
	}
}

void func_91(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_102(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_99(bParam4, bParam8))
	{
		return;
	}
	if (func_97())
	{
		return;
	}
	if (unk_0x4ABA84DE907E0474())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_94(unk_0x7C7787D2D7139A85(), 0))
		{
			return;
		}
	}
	if (unk_0xE434AB6E3DE89861())
	{
		if (unk_0x2F972EA053458B78() == 0 || unk_0x4ABA84DE907E0474())
		{
			return;
		}
	}
	if (Global_22350.f_4769 != 0)
	{
		if (unk_0x6BFFC38B3F0D92C2(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_22350.f_4769)
			{
				if (Global_22350.f_5026[iVar1] != 359)
				{
					StringCopy(&(Global_22350.f_4771[iVar1 /*16*/]), unk_0x357127A2E350E9F6(2, Global_22350.f_5026[iVar1], 1), 64);
				}
				else if (Global_22350.f_5039[iVar1] != 32)
				{
					StringCopy(&(Global_22350.f_4771[iVar1 /*16*/]), unk_0xEEC24BCBD00C5C50(2, Global_22350.f_5039[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_22350.f_4770 = 0;
		}
		if (!Global_22350.f_4770)
		{
			unk_0xF1BC72CEC2746995(Global_22350.f_5660[iVar0 /*10*/], "CLEAR_ALL");
			unk_0xAC7C2DE2DDC7AF03();
			unk_0xF1BC72CEC2746995(Global_22350.f_5660[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0xD435957F6275B434((1f - (Global_22350.f_5081 / 100f)));
			unk_0xAC7C2DE2DDC7AF03();
			if (unk_0xE434AB6E3DE89861())
			{
				unk_0xF1BC72CEC2746995(Global_22350.f_5660[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0x282C78036676E0C2(1);
				unk_0xAC7C2DE2DDC7AF03();
			}
			iVar1 = 0;
			while (iVar1 < Global_22350.f_4769)
			{
				if (unk_0xA8C462EF7D9DC564(&(Global_22350.f_4964[iVar1 /*4*/])) != unk_0xA8C462EF7D9DC564("PREV"))
				{
					unk_0xF1BC72CEC2746995(Global_22350.f_5660[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0xD02F24F3E2DB263A(iVar1);
					func_93(&(Global_22350.f_4771[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0xA8C462EF7D9DC564(&(Global_22350.f_4964[iVar2 /*4*/])) == unk_0xA8C462EF7D9DC564("PREV"))
					{
						func_93(&(Global_22350.f_4771[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_22350.f_5013[iVar1] == -1)
					{
						func_92(&(Global_22350.f_4964[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_22350.f_5013[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						unk_0x759AC38FBC6CCA9E(&(Global_22350.f_4964[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0xC5B1209EEC9E6603(iVar3, 70);
						}
						else
						{
							unk_0x6A8B3CC08A759F44(iVar3);
						}
						unk_0x81019766FF500CCA();
					}
					if (unk_0xE434AB6E3DE89861())
					{
						if (Global_22350.f_5026[iVar1] != 359 && unk_0xA2BC31158C8CEFD2(Global_22350.f_5052, iVar1))
						{
							unk_0x282C78036676E0C2(1);
							unk_0xD02F24F3E2DB263A(Global_22350.f_5026[iVar1]);
						}
						else
						{
							unk_0x282C78036676E0C2(0);
							unk_0xD02F24F3E2DB263A(359);
						}
					}
					unk_0xAC7C2DE2DDC7AF03();
				}
				iVar1++;
			}
			if (unk_0xA8C462EF7D9DC564(&(Global_4268271.f_16)) != unk_0xA8C462EF7D9DC564(""))
			{
				unk_0xF1BC72CEC2746995(Global_22350.f_5660[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0xD02F24F3E2DB263A(Global_22350.f_4769);
				func_93(&Global_4268271);
				if (Global_4268271.f_20 == -1)
				{
					func_92(&(Global_4268271.f_16));
				}
				else
				{
					iVar4 = Global_22350.f_5013[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					unk_0x759AC38FBC6CCA9E(&(Global_4268271.f_16));
					if (bParam5)
					{
						unk_0xC5B1209EEC9E6603(iVar4, 70);
					}
					else
					{
						unk_0x6A8B3CC08A759F44(iVar4);
					}
					unk_0x81019766FF500CCA();
				}
				unk_0xAC7C2DE2DDC7AF03();
			}
			unk_0xF1BC72CEC2746995(Global_22350.f_5660[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0xD02F24F3E2DB263A(0);
			unk_0xD02F24F3E2DB263A(0);
			unk_0xD02F24F3E2DB263A(0);
			unk_0xD02F24F3E2DB263A(80);
			unk_0xAC7C2DE2DDC7AF03();
			unk_0xF1BC72CEC2746995(Global_22350.f_5660[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_22350.f_5082)
			{
				unk_0xD02F24F3E2DB263A(1);
			}
			else
			{
				unk_0xD02F24F3E2DB263A(0);
			}
			unk_0xAC7C2DE2DDC7AF03();
			Global_22350.f_4770 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_22350.f_4769)
		{
			if (Global_22350.f_5013[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0xF1BC72CEC2746995(Global_22350.f_5660[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0xD02F24F3E2DB263A(iVar1);
					unk_0x759AC38FBC6CCA9E(&(Global_22350.f_4964[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0xC5B1209EEC9E6603(iParam2, 70);
					}
					else
					{
						unk_0x6A8B3CC08A759F44(iParam2);
					}
					unk_0x81019766FF500CCA();
					unk_0xAC7C2DE2DDC7AF03();
				}
			}
			iVar1++;
		}
		if (Global_4268271.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0xF1BC72CEC2746995(Global_22350.f_5660[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0xD02F24F3E2DB263A(iVar1);
				unk_0x759AC38FBC6CCA9E(&(Global_4268271.f_16));
				if (bParam5)
				{
					unk_0xC5B1209EEC9E6603(iParam2, 70);
				}
				else
				{
					unk_0x6A8B3CC08A759F44(iParam2);
				}
				unk_0x81019766FF500CCA();
				unk_0xAC7C2DE2DDC7AF03();
			}
		}
		unk_0xE0EE6551C6D522E7(76, 66);
		unk_0x8CB8831CA90181C0(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_22350.f_8385)
			{
				unk_0x54A18B54F134D59D(15, 0f, -0.0375f);
				Global_22350.f_8385 = 1;
			}
		}
		else if (Global_22350.f_8385)
		{
			unk_0x129AB650651225C5(15);
			Global_22350.f_8385 = 0;
		}
		unk_0x01C11ACADC5D0A74();
		if (Global_22350.f_5055)
		{
			unk_0xE0EE6551C6D522E7(82, 66);
			unk_0x8CB8831CA90181C0(0f, 0f, 0f, 0f);
			unk_0x1C65AC18AFC2CA39(Global_22350.f_5660[iVar0 /*10*/], Global_22350.f_5053, Global_22350.f_5054, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0x01C11ACADC5D0A74();
		}
		else
		{
			unk_0x53F520B89860756C(Global_22350.f_5660[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_92(var uParam0)
{
	unk_0x759AC38FBC6CCA9E(uParam0);
	unk_0x81019766FF500CCA();
}

void func_93(var uParam0)
{
	unk_0x7151302E2AA285DC(uParam0);
}

bool func_94(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x7C7787D2D7139A85())
	{
		bVar0 = func_95(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590446[iParam0 /*871*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xD56C8C2B75BF9665(iParam0))
		{
			bVar0 = unk_0xC69A85EEB9CA3B95(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_95(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_96();
	}
	if (Global_1312853[iVar1] == 1)
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

int func_96()
{
	return Global_1312745;
}

int func_97()
{
	struct<3> Var0;
	
	if (Global_19486.f_1 > 3)
	{
		return 1;
	}
	if (func_98())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0xB1B52CCC3333E09F(&Var0);
		if (Global_19431 == 0)
		{
			if (Var0.f_1 > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.f_1 > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_98()
{
	if (unk_0x222F76006659B0EB(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_99(bool bParam0, bool bParam1)
{
	if (Global_2437549.f_1893.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0xBF28CCACDDFF5346() || (func_101(8, -1) && func_100() != 65)) || (unk_0x097FC2B62E383500() != 0 && !bParam1)) || (unk_0x16587C6F71675106() && !bParam0)) || unk_0xBEE209BD103A0339()) || Global_76837) || Global_22350.f_8384) || unk_0x8E01A12946ECF396()) || Global_98721.f_1417)
	{
		return 0;
	}
	return 1;
}

int func_100()
{
	return Global_1312808;
}

bool func_101(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1373500.f_203[iParam1];
			}
			break;
	}
	return unk_0xA2BC31158C8CEFD2(Global_1373500.f_1048, iParam0);
}

int func_102(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (unk_0x393E9918BC37548A() && unk_0xF77CF4BC35906B30())
		{
			iParam2 = unk_0xD048B37B1753D376();
		}
	}
	StringCopy(&cVar0, unk_0x0037AFCBDC61F351(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0xA8C462EF7D9DC564(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_22350.f_5721[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_22350.f_5721[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_22350.f_5721[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_103(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = unk_0x357127A2E350E9F6(2, iParam0, 1);
	if (Global_22350.f_4769 >= 12)
	{
		StringCopy(&Global_4268271, sVar0, 64);
		StringCopy(&(Global_4268271.f_16), sParam1, 16);
		Global_4268271.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		unk_0xA1E7A40E1F56E511(&(Global_22350.f_5052), Global_22350.f_4769);
	}
	StringCopy(&(Global_22350.f_4771[Global_22350.f_4769 /*16*/]), sVar0, 64);
	StringCopy(&(Global_22350.f_4964[Global_22350.f_4769 /*4*/]), sParam1, 16);
	Global_22350.f_5013[Global_22350.f_4769] = iParam2;
	Global_22350.f_5026[Global_22350.f_4769] = iParam0;
	Global_22350.f_5039[Global_22350.f_4769] = 32;
	Global_22350.f_4769++;
}

void func_104(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = unk_0xEEC24BCBD00C5C50(2, iParam0, 1);
	if (Global_22350.f_4769 >= 12)
	{
		StringCopy(&Global_4268271, sVar0, 64);
		StringCopy(&(Global_4268271.f_16), sParam1, 16);
		Global_4268271.f_20 = iParam2;
		return;
		return;
	}
	unk_0x3B76114EC84D5812(&(Global_22350.f_5052), Global_22350.f_4769);
	StringCopy(&(Global_22350.f_4771[Global_22350.f_4769 /*16*/]), sVar0, 64);
	StringCopy(&(Global_22350.f_4964[Global_22350.f_4769 /*4*/]), sParam1, 16);
	Global_22350.f_5013[Global_22350.f_4769] = iParam2;
	Global_22350.f_5026[Global_22350.f_4769] = 359;
	Global_22350.f_5039[Global_22350.f_4769] = iParam0;
	Global_22350.f_4769++;
}

void func_105(int iParam0)
{
	int iVar0;
	int iVar1;
	
	Global_22350.f_4769 = 0;
	Global_22350.f_4770 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_22350.f_4964[iVar0 /*4*/]), "", 16);
		Global_22350.f_5013[iVar0] = -1;
		Global_22350.f_5026[iVar0] = 359;
		Global_22350.f_5039[iVar0] = 32;
		iVar0++;
	}
	Global_22350.f_5052 = 0;
	StringCopy(&(Global_4268271.f_16), "", 16);
	Global_4268271.f_20 = -1;
	if (unk_0xE434AB6E3DE89861())
	{
		if (!func_102(&iVar1, 0, iParam0))
		{
			return;
		}
		unk_0xF1BC72CEC2746995(Global_22350.f_5660[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
		unk_0x282C78036676E0C2(0);
		unk_0xAC7C2DE2DDC7AF03();
	}
}

bool func_106(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_102(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_22350.f_5635[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0x9591DE0F00127F2A(&(Global_22350.f_5635[iVar0 /*4*/])))
	{
		unk_0x9F815D4FA0C47F97(&(Global_22350.f_5635[iVar0 /*4*/]), 9);
		Global_22350.f_5628[iVar0] = 1;
		if (!unk_0x4F6F8DF9C96926B9(&(Global_22350.f_5635[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0x4F7B74CE562E3EC6("CommonMenu", 0);
	Global_22350.f_5614[iVar0] = 1;
	if (!unk_0xF409FD92D37CDEEE("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0x4F7B74CE562E3EC6("MPShopSale", 0);
		Global_22350.f_5621[iVar0] = 1;
		if (!unk_0xF409FD92D37CDEEE("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_22350.f_5660[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_107(&(Global_22350.f_5660[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_107(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0x08EA887200715AD9(*uParam0))
			{
				*uParam0 = unk_0x1FAFE9BB9D8960C1(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0x08EA887200715AD9(*uParam0))
					{
						uParam0->f_8 = unk_0x9B35D07DCD0F0B43();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x9B35D07DCD0F0B43();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0x08EA887200715AD9(*uParam0))
			{
				uParam0->f_8 = unk_0x9B35D07DCD0F0B43();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x08EA887200715AD9(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_108()
{
	if (!unk_0x08EA887200715AD9(Local_213.f_132))
	{
		Local_213.f_132 = unk_0x1FAFE9BB9D8960C1("DRONE_CAM");
		return;
	}
	if ((func_29() || func_60()) || func_145(0))
	{
		func_144("SET_DETONATE_METER_IS_VISIBLE", 0);
	}
	else
	{
		func_144("SET_DETONATE_METER_IS_VISIBLE", 1);
	}
	if ((func_29() || func_60()) || func_9())
	{
		func_144("SET_SHOCK_METER_IS_VISIBLE", 0);
	}
	else
	{
		func_144("SET_SHOCK_METER_IS_VISIBLE", 1);
	}
	if (func_9())
	{
		func_144("SET_EMP_METER_IS_VISIBLE", 1);
	}
	else
	{
		func_144("SET_EMP_METER_IS_VISIBLE", 0);
	}
	if (!func_29() && !func_60())
	{
		func_144("SET_RETICLE_IS_VISIBLE", 1);
	}
	else
	{
		func_144("SET_RETICLE_IS_VISIBLE", 0);
	}
	func_144("SET_HEADING_METER_IS_VISIBLE", 1);
	func_144("SET_ZOOM_METER_IS_VISIBLE", 1);
	if (((!func_29() && !func_60()) && !func_9()) && func_143())
	{
		func_144("SET_BOOST_METER_IS_VISIBLE", 1);
	}
	else
	{
		func_144("SET_BOOST_METER_IS_VISIBLE", 0);
	}
	if (func_142())
	{
		func_144("SET_TRANQUILIZE_METER_IS_VISIBLE", 1);
	}
	else
	{
		func_144("SET_TRANQUILIZE_METER_IS_VISIBLE", 0);
	}
	func_144("SET_MISSILE_METER_IS_VISIBLE", 0);
	func_144("SET_BOTTOM_LEFT_CORNER_IS_VISIBLE", 0);
	if (func_140(unk_0x7C7787D2D7139A85()) == 240)
	{
		if (Local_213.f_83 >= (func_139() - 50f) || Local_213.f_84 >= IntToFloat((Global_262145.f_24137 - 50)))
		{
			func_144("SET_SOUND_WAVE_IS_VISIBLE", 0);
			func_138();
			if (unk_0xA2BC31158C8CEFD2(Local_213.f_5, 13))
			{
				unk_0x3B76114EC84D5812(&(Local_213.f_5), 13);
			}
		}
		else
		{
			func_134(func_135());
			if (!unk_0xA2BC31158C8CEFD2(Local_213.f_5, 13))
			{
				func_144("SET_SOUND_WAVE_IS_VISIBLE", 1);
				unk_0xA1E7A40E1F56E511(&(Local_213.f_5), 13);
			}
		}
	}
	else
	{
		func_144("SET_SOUND_WAVE_IS_VISIBLE", 0);
		func_138();
	}
	func_144("SET_INFO_LIST_IS_VISIBLE", 0);
	if (!func_29() && !func_60())
	{
		if (!func_9())
		{
			func_133(Local_213.f_17);
		}
		else
		{
			func_132(Local_213.f_17);
		}
		if (!func_145(0))
		{
			func_131(Local_213.f_18);
		}
	}
	if (func_142())
	{
		func_130(Local_213.f_23);
	}
	if (func_143())
	{
		func_129(Local_213.f_19);
	}
	func_128(0, "DRONE_ZOOM_1");
	func_128(1, "");
	func_128(2, "DRONE_ZOOM_2");
	func_128(3, "");
	func_128(4, "DRONE_ZOOM_3");
	func_126();
	func_124();
	func_122();
	func_121(unk_0xF2DB717A73826179((unk_0xD2809C7F7FD79247(unk_0x833BB45D35E36889(Local_213.f_121)) + 180f)));
	if (func_140(unk_0x7C7787D2D7139A85()) == 240)
	{
		func_120(func_135());
	}
	if (func_119())
	{
		func_112();
	}
	else if (func_9() || func_29())
	{
		func_111();
	}
	else if (func_18())
	{
		func_109();
	}
	unk_0xF314976CA3E17AC7(1);
	unk_0x53F520B89860756C(Local_213.f_132, 255, 255, 255, 0, 0);
}

void func_109()
{
	float fVar0;
	
	fVar0 = Local_213.f_83;
	if (fVar0 >= (func_139() - 50f))
	{
		if (unk_0xDE3C2FB26058823A(Local_213.f_36))
		{
			Local_213.f_36 = unk_0x04B8CCFB93858A27();
			unk_0x9964F5BBD9415AB7(Local_213.f_36, "Out_Of_Bounds_Alarm_Loop", Local_213.f_119, 1);
		}
		if (fVar0 >= (func_139() - 50f) && fVar0 < (func_139() - 45f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.1f);
		}
		else if (fVar0 >= (func_139() - 45f) && fVar0 < (func_139() - 40f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.2f);
		}
		else if (fVar0 >= (func_139() - 40f) && fVar0 < (func_139() - 35f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.3f);
		}
		else if (fVar0 >= (func_139() - 35f) && fVar0 < (func_139() - 30f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.4f);
		}
		else if (fVar0 >= (func_139() - 30f) && fVar0 < (func_139() - 25f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.5f);
		}
		else if (fVar0 >= (func_139() - 25f) && fVar0 < (func_139() - 20f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.6f);
		}
		else if (fVar0 >= (func_139() - 20f) && fVar0 < (func_139() - 15f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.7f);
		}
		else if (fVar0 >= (func_139() - 15f) && fVar0 < (func_139() - 10f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.8f);
		}
		else if (fVar0 >= (func_139() - 10f) && fVar0 < (func_139() - 5f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.9f);
		}
		else if (fVar0 >= (func_139() - 5f) && fVar0 < func_139())
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(1f);
		}
	}
	else
	{
		func_144("SET_WARNING_IS_VISIBLE", 0);
		if (!unk_0xDE3C2FB26058823A(Local_213.f_36))
		{
			unk_0xCFF6AB47B7B014FF(Local_213.f_36);
			unk_0x0972EA9E8102C153(Local_213.f_36);
			Local_213.f_36 = -1;
		}
	}
}

void func_110(float fParam0)
{
	unk_0xF1BC72CEC2746995(Local_213.f_132, "SET_WARNING_FLASH_RATE");
	unk_0xD435957F6275B434(fParam0);
	unk_0xAC7C2DE2DDC7AF03();
}

void func_111()
{
	if (Local_213.f_112.f_2 >= (func_139() - 20f))
	{
		if (unk_0xDE3C2FB26058823A(Local_213.f_36))
		{
			Local_213.f_36 = unk_0x04B8CCFB93858A27();
			unk_0x9964F5BBD9415AB7(Local_213.f_36, "Out_Of_Bounds_Alarm_Loop", Local_213.f_119, 1);
		}
		if (Local_213.f_112.f_2 >= (func_139() - 20f) && Local_213.f_112.f_2 < (func_139() - 16f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.1f);
		}
		else if (Local_213.f_112.f_2 >= (func_139() - 16f) && Local_213.f_112.f_2 < (func_139() - 13f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.2f);
		}
		else if (Local_213.f_112.f_2 >= (func_139() - 13f) && Local_213.f_112.f_2 < (func_139() - 10f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.3f);
		}
		else if (Local_213.f_112.f_2 >= (func_139() - 10f) && Local_213.f_112.f_2 < (func_139() - 8f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.4f);
		}
		else if (Local_213.f_112.f_2 >= (func_139() - 8f) && Local_213.f_112.f_2 < (func_139() - 6f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.5f);
		}
		else if (Local_213.f_112.f_2 >= (func_139() - 6f) && Local_213.f_112.f_2 < (func_139() - 4f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.6f);
		}
		else if (Local_213.f_112.f_2 >= (func_139() - 4f) && Local_213.f_112.f_2 < (func_139() - 3f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.7f);
		}
		else if (Local_213.f_112.f_2 >= (func_139() - 3f) && Local_213.f_112.f_2 < (func_139() - 2f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.8f);
		}
		else if (Local_213.f_112.f_2 >= (func_139() - 2f) && Local_213.f_112.f_2 < (func_139() - 1f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.9f);
		}
		else if (Local_213.f_112.f_2 >= (func_139() - 1f) && Local_213.f_112.f_2 < func_139())
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(1f);
		}
	}
	else
	{
		func_144("SET_WARNING_IS_VISIBLE", 0);
		if (!unk_0xDE3C2FB26058823A(Local_213.f_36))
		{
			unk_0xCFF6AB47B7B014FF(Local_213.f_36);
			unk_0x0972EA9E8102C153(Local_213.f_36);
			Local_213.f_36 = -1;
		}
	}
}

void func_112()
{
	if (Local_213.f_83 >= (func_139() - 50f) || Local_213.f_84 >= IntToFloat((Global_262145.f_24137 - 50)))
	{
		func_113();
		if (unk_0xDE3C2FB26058823A(Local_213.f_36))
		{
			Local_213.f_36 = unk_0x04B8CCFB93858A27();
			unk_0x9964F5BBD9415AB7(Local_213.f_36, "Out_Of_Bounds_Alarm_Loop", Local_213.f_119, 1);
		}
		if ((Local_213.f_83 >= (func_139() - 50f) && Local_213.f_83 < (func_139() - 45f)) || (Local_213.f_84 >= IntToFloat((Global_262145.f_24137 - 50)) && Local_213.f_84 < IntToFloat((Global_262145.f_24137 - 45))))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.1f);
		}
		else if ((Local_213.f_83 >= (func_139() - 45f) && Local_213.f_83 < (func_139() - 40f)) || (Local_213.f_84 >= IntToFloat((Global_262145.f_24137 - 45)) && Local_213.f_84 < IntToFloat((Global_262145.f_24137 - 40))))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.2f);
		}
		else if ((Local_213.f_83 >= (func_139() - 40f) && Local_213.f_83 < (func_139() - 35f)) || (Local_213.f_84 >= IntToFloat((Global_262145.f_24137 - 40)) && Local_213.f_84 < IntToFloat((Global_262145.f_24137 - 35))))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.3f);
		}
		else if ((Local_213.f_83 >= (func_139() - 35f) && Local_213.f_83 < (func_139() - 30f)) || (Local_213.f_84 >= IntToFloat((Global_262145.f_24137 - 35)) && Local_213.f_84 < IntToFloat((Global_262145.f_24137 - 30))))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.4f);
		}
		else if ((Local_213.f_83 >= (func_139() - 30f) && Local_213.f_83 < (func_139() - 25f)) || (Local_213.f_84 >= IntToFloat((Global_262145.f_24137 - 30)) && Local_213.f_84 < IntToFloat((Global_262145.f_24137 - 25))))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.5f);
		}
		else if ((Local_213.f_83 >= (func_139() - 25f) && Local_213.f_83 < (func_139() - 20f)) || (Local_213.f_84 >= IntToFloat((Global_262145.f_24137 - 25)) && Local_213.f_84 < IntToFloat((Global_262145.f_24137 - 20))))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.6f);
		}
		else if ((Local_213.f_83 >= (func_139() - 20f) && Local_213.f_83 < (func_139() - 15f)) || (Local_213.f_84 >= IntToFloat((Global_262145.f_24137 - 20)) && Local_213.f_84 < IntToFloat((Global_262145.f_24137 - 15))))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.7f);
		}
		else if ((Local_213.f_83 >= (func_139() - 15f) && Local_213.f_83 < (func_139() - 10f)) || (Local_213.f_84 >= IntToFloat((Global_262145.f_24137 - 15)) && Local_213.f_84 < IntToFloat((Global_262145.f_24137 - 10))))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.8f);
		}
		else if ((Local_213.f_83 >= (func_139() - 10f) && Local_213.f_83 < (func_139() - 5f)) || (Local_213.f_84 >= IntToFloat((Global_262145.f_24137 - 10)) && Local_213.f_84 < IntToFloat((Global_262145.f_24137 - 5))))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.9f);
		}
		else if ((Local_213.f_83 >= (func_139() - 5f) && Local_213.f_83 < func_139()) || (Local_213.f_84 >= IntToFloat((Global_262145.f_24137 - 5)) && Local_213.f_84 < IntToFloat(Global_262145.f_24137)))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(1f);
		}
	}
	else
	{
		func_144("SET_WARNING_IS_VISIBLE", 0);
		if (!unk_0xDE3C2FB26058823A(Local_213.f_36))
		{
			unk_0xCFF6AB47B7B014FF(Local_213.f_36);
			unk_0x0972EA9E8102C153(Local_213.f_36);
			Local_213.f_36 = -1;
		}
	}
}

void func_113()
{
	int iVar0;
	
	if (unk_0xBF28CCACDDFF5346() && !unk_0xA2BC31158C8CEFD2(Global_1676879.f_3, 15))
	{
		if (!unk_0x0945988C02AF3025())
		{
			iVar0 = func_116(22045, -1, -1);
			if (iVar0 < 4)
			{
				func_115("HACK_DRONE_DIS", -1);
				iVar0++;
				func_114(22045, iVar0, -1, 1);
				unk_0xA1E7A40E1F56E511(&(Global_1676879.f_3), 15);
			}
		}
	}
}

var func_114(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_96();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0x9A1E3D19AE929DDE((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0xB07659B9AFDF0087((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x9A1E3D19AE929DDE((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0xB07659B9AFDF0087((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x9A1E3D19AE929DDE((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0xB07659B9AFDF0087((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x9A1E3D19AE929DDE((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0xB07659B9AFDF0087((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x752DE25BC350DD79((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0xB07659B9AFDF0087((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x752DE25BC350DD79((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0xB07659B9AFDF0087((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0xB07659B9AFDF0087((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0xB07659B9AFDF0087((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0xB07659B9AFDF0087((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0xB07659B9AFDF0087((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0xB07659B9AFDF0087((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - unk_0xB07659B9AFDF0087((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - unk_0xB07659B9AFDF0087((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - unk_0xB07659B9AFDF0087((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - unk_0xB07659B9AFDF0087((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 18162), 0, 1, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - unk_0xB07659B9AFDF0087((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 19018), 0, 1, iParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 19018) - unk_0xB07659B9AFDF0087((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 22194), 0, 1, iParam2, "_ARENAWARSPSTAT_INT");
		iVar1 = ((iParam0 - 22194) - unk_0xB07659B9AFDF0087((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 25538), 0, 1, iParam2, "_CASINOPSTAT_INT");
		iVar1 = ((iParam0 - 25538) - unk_0xB07659B9AFDF0087((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 27258), 0, 1, iParam2, "_CASINOHSTPSTAT_INT");
		iVar1 = ((iParam0 - 27258) - unk_0xB07659B9AFDF0087((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0xB07659B9AFDF0087((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0xB07659B9AFDF0087((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0x49DD5185FB090323(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

void func_115(char* sParam0, int iParam1)
{
	unk_0xD95C12E1062B7D5E(sParam0);
	unk_0x40DC0B0D5BD91E06(0, 0, 1, iParam1);
}

int func_116(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_96();
	}
	iVar0 = 0;
	iVar1 = func_118(iParam0, iParam1);
	uVar2 = func_117(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0xDB563F2AD2722869(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_117(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0xB07659B9AFDF0087((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0xB07659B9AFDF0087((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0xB07659B9AFDF0087((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0xB07659B9AFDF0087((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0xB07659B9AFDF0087((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0xB07659B9AFDF0087((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0xB07659B9AFDF0087((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0xB07659B9AFDF0087((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0xB07659B9AFDF0087((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0xB07659B9AFDF0087((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0xB07659B9AFDF0087((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0xB07659B9AFDF0087((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - unk_0xB07659B9AFDF0087((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - unk_0xB07659B9AFDF0087((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0xB07659B9AFDF0087((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0xB07659B9AFDF0087((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - unk_0xB07659B9AFDF0087((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - unk_0xB07659B9AFDF0087((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - unk_0xB07659B9AFDF0087((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = ((iParam0 - 22194) - unk_0xB07659B9AFDF0087((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = ((iParam0 - 25538) - unk_0xB07659B9AFDF0087((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = ((iParam0 - 27258) - unk_0xB07659B9AFDF0087((iParam0 - 27258)) * 8) * 8;
	}
	return iVar0;
}

int func_118(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_96();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0x9A1E3D19AE929DDE((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x9A1E3D19AE929DDE((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x9A1E3D19AE929DDE((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x9A1E3D19AE929DDE((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x752DE25BC350DD79((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x752DE25BC350DD79((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 25538), 0, 1, iParam1, "_CASINOPSTAT_INT");
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 27258), 0, 1, iParam1, "_CASINOHSTPSTAT_INT");
	}
	return iVar0;
}

bool func_119()
{
	return unk_0xA2BC31158C8CEFD2(Global_1687880.f_2, 1);
}

void func_120(float fParam0)
{
	unk_0xF1BC72CEC2746995(Local_213.f_132, "ATTENUATE_SOUND_WAVE");
	unk_0xD435957F6275B434(fParam0);
	unk_0xAC7C2DE2DDC7AF03();
}

void func_121(int iParam0)
{
	unk_0xF1BC72CEC2746995(Local_213.f_132, "SET_HEADING");
	unk_0xD02F24F3E2DB263A(iParam0);
	unk_0xAC7C2DE2DDC7AF03();
}

void func_122()
{
	if (func_9())
	{
		if (unk_0xA2BC31158C8CEFD2(Local_213.f_5, 11) && !Local_213.f_118)
		{
			func_123(1);
		}
		else
		{
			func_123(0);
		}
	}
	else if (unk_0xA2BC31158C8CEFD2(Local_213.f_5, 11) || unk_0xA2BC31158C8CEFD2(Local_213.f_5, 23))
	{
		func_123(1);
	}
	else
	{
		func_123(0);
	}
}

void func_123(int iParam0)
{
	unk_0xF1BC72CEC2746995(Local_213.f_132, "SET_RETICLE_ON_TARGET");
	unk_0x282C78036676E0C2(iParam0);
	unk_0xAC7C2DE2DDC7AF03();
}

void func_124()
{
	if (unk_0xA2BC31158C8CEFD2(Local_213.f_5, 4) || (unk_0xA2BC31158C8CEFD2(Local_213.f_5, 3) && func_9()))
	{
		if (Local_213.f_17 == 100)
		{
			func_125(1);
		}
		else if (Local_213.f_17 != 0 && Local_213.f_17 != 100)
		{
			func_125(2);
		}
	}
	else
	{
		func_125(0);
	}
}

void func_125(int iParam0)
{
	unk_0xF1BC72CEC2746995(Local_213.f_132, "SET_RETICLE_STATE");
	unk_0xD02F24F3E2DB263A(iParam0);
	unk_0xAC7C2DE2DDC7AF03();
}

void func_126()
{
	switch (Local_213.f_24)
	{
		case 0:
			func_127(0);
			break;
		
		case 1:
			func_127(2);
			break;
		
		case 2:
			func_127(4);
			break;
	}
}

void func_127(int iParam0)
{
	unk_0xF1BC72CEC2746995(Local_213.f_132, "SET_ZOOM");
	unk_0xD02F24F3E2DB263A(iParam0);
	unk_0xAC7C2DE2DDC7AF03();
}

void func_128(int iParam0, char* sParam1)
{
	unk_0xF1BC72CEC2746995(Local_213.f_132, "SET_ZOOM_LABEL");
	unk_0xD02F24F3E2DB263A(iParam0);
	func_92(sParam1);
	unk_0xAC7C2DE2DDC7AF03();
}

void func_129(int iParam0)
{
	unk_0xF1BC72CEC2746995(Local_213.f_132, "SET_BOOST_PERCENTAGE");
	unk_0xD02F24F3E2DB263A(uParam0);
	unk_0xAC7C2DE2DDC7AF03();
}

void func_130(int iParam0)
{
	unk_0xF1BC72CEC2746995(Local_213.f_132, "SET_TRANQUILIZE_PERCENTAGE");
	unk_0xD02F24F3E2DB263A(uParam0);
	unk_0xAC7C2DE2DDC7AF03();
}

void func_131(int iParam0)
{
	unk_0xF1BC72CEC2746995(Local_213.f_132, "SET_DETONATE_PERCENTAGE");
	unk_0xD02F24F3E2DB263A(uParam0);
	unk_0xAC7C2DE2DDC7AF03();
}

void func_132(int iParam0)
{
	unk_0xF1BC72CEC2746995(Local_213.f_132, "SET_EMP_PERCENTAGE");
	unk_0xD02F24F3E2DB263A(uParam0);
	unk_0xAC7C2DE2DDC7AF03();
}

void func_133(int iParam0)
{
	unk_0xF1BC72CEC2746995(Local_213.f_132, "SET_SHOCK_PERCENTAGE");
	unk_0xD02F24F3E2DB263A(uParam0);
	unk_0xAC7C2DE2DDC7AF03();
}

void func_134(float fParam0)
{
	if (unk_0xDE3C2FB26058823A(Local_213.f_43))
	{
		Local_213.f_43 = unk_0x04B8CCFB93858A27();
		unk_0x9964F5BBD9415AB7(Local_213.f_43, "Scanner_Loop", "DLC_BTL_Target_Pursuit_Sounds", 1);
		unk_0xEC93A4D791E42F8E(Local_213.f_43, "signalstrength", uParam0);
	}
	else
	{
		unk_0xEC93A4D791E42F8E(Local_213.f_43, "signalstrength", fParam0);
	}
}

float func_135()
{
	float fVar0;
	
	if (func_140(unk_0x7C7787D2D7139A85()) == 240)
	{
		if (unk_0x8A7BBB98FFB32893(Local_213.f_121) && !unk_0xF4B969E0807E76C7(unk_0x833BB45D35E36889(Local_213.f_121), 0))
		{
			fVar0 = func_136(unk_0x833BB45D35E36889(Local_213.f_121), func_137(), 1);
			if (fVar0 >= 200f)
			{
				return 0f;
			}
			else if (fVar0 >= 180f && fVar0 < 200f)
			{
				return 0.1f;
			}
			else if (fVar0 >= 160f && fVar0 < 180f)
			{
				return 0.2f;
			}
			else if (fVar0 >= 140f && fVar0 < 160f)
			{
				return 0.3f;
			}
			else if (fVar0 >= 120f && fVar0 < 140f)
			{
				return 0.4f;
			}
			else if (fVar0 >= 100f && fVar0 < 120f)
			{
				return 0.5f;
			}
			else if (fVar0 >= 80f && fVar0 < 100f)
			{
				return 0.6f;
			}
			else if (fVar0 >= 60f && fVar0 < 80f)
			{
				return 0.7f;
			}
			else if (fVar0 >= 40f && fVar0 < 60f)
			{
				return 0.8f;
			}
			else if (fVar0 >= 20f && fVar0 < 40f)
			{
				return 0.9f;
			}
			else if (fVar0 <= 20f)
			{
				return 1f;
			}
		}
	}
	return 0f;
}

float func_136(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0xF4B969E0807E76C7(iParam0, 0))
	{
		Var0 = { unk_0xACE5E491FC1B0D37(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xACE5E491FC1B0D37(iParam0, 0) };
	}
	return unk_0xD34AF93E9BCF12F0(Var0, Param1, iParam4);
}

Vector3 func_137()
{
	if (func_140(unk_0x7C7787D2D7139A85()) == 240)
	{
		return Global_1694290;
	}
	return 0f, 0f, 0f;
}

void func_138()
{
	if (!unk_0xDE3C2FB26058823A(Local_213.f_43))
	{
		unk_0xCFF6AB47B7B014FF(Local_213.f_43);
		unk_0x0972EA9E8102C153(Local_213.f_43);
		Local_213.f_43 = -1;
	}
}

float func_139()
{
	if (Global_1687880.f_8 == 0f)
	{
		return Global_262145.f_24138;
	}
	return Global_1687880.f_8;
}

int func_140(int iParam0)
{
	if (func_141(iParam0, 0))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_33;
	}
	return -1;
}

int func_141(int iParam0, int iParam1)
{
	if (Global_1628955[iParam0 /*614*/].f_11.f_33 != -1 || (iParam1 && Global_1628955[iParam0 /*614*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

bool func_142()
{
	return unk_0xA2BC31158C8CEFD2(Global_1687880.f_2, 6);
}

int func_143()
{
	if (func_142())
	{
		if (unk_0x61837007ACF2F2C2(Global_1687880.f_24))
		{
			return 0;
		}
	}
	return 1;
}

void func_144(char* sParam0, int iParam1)
{
	unk_0xF1BC72CEC2746995(Local_213.f_132, sParam0);
	unk_0x282C78036676E0C2(iParam1);
	unk_0xAC7C2DE2DDC7AF03();
}

int func_145(bool bParam0)
{
	if (func_119())
	{
		if (bParam0)
		{
			if (unk_0xA2BC31158C8CEFD2(Local_213.f_5, 4))
			{
				return 1;
			}
		}
	}
	if (func_142())
	{
		return 1;
	}
	return 0;
}

void func_146()
{
	int iVar0;
	int iVar1;
	
	if (func_60())
	{
		return;
	}
	if (!unk_0xA2BC31158C8CEFD2(Local_213.f_5, 16))
	{
		if (func_106(0, -1, 0))
		{
			func_105(-1);
			func_104(21, "DRONE_MOVE", -1);
			func_104(20, "DRONE_POSITION", -1);
			if (!unk_0x59415A8719336539(0))
			{
				func_103(210, "CELL_284", -1, 0);
				if ((!func_29() && !func_9()) && func_143())
				{
					func_103(209, "BOOST_DRONE_E", -1, 0);
				}
				func_103(208, "MOVE_DRONE_UP", -1, 0);
				func_103(207, "MOVE_DRONE_DO", -1, 0);
			}
			else
			{
				func_104(29, "CELL_284", -1);
				if ((!func_29() && !func_9()) && func_143())
				{
					func_103(203, "BOOST_DRONE_E", -1, 0);
				}
				func_103(209, "MOVE_DRONE_UP", -1, 0);
				func_103(210, "MOVE_DRONE_DO", -1, 0);
			}
			if (!func_29())
			{
				iVar0 = 206;
				if (unk_0x59415A8719336539(0))
				{
					iVar0 = 237;
				}
				if (func_9())
				{
					func_103(iVar0, "MOVE_DRONE_EM", -1, 0);
				}
				else
				{
					func_103(iVar0, "MOVE_DRONE_ST", -1, 0);
				}
				iVar1 = 205;
				if (unk_0x59415A8719336539(0))
				{
					iVar1 = 238;
				}
				if (!func_145(0))
				{
					func_103(iVar1, "MOVE_DRONE_EX", -1, 0);
				}
				else if (func_153())
				{
					func_103(iVar1, "MOVE_DRONE_TRG", -1, 0);
				}
			}
			if (!func_9())
			{
				if ((((func_152(0) || func_152(1)) || func_151()) || unk_0xB9AB61E108CF483B()) || func_147(unk_0x7C7787D2D7139A85()))
				{
				}
				else
				{
					func_103(201, "DRONE_PHOTO", -1, 0);
				}
			}
			func_103(80, "MOVE_DRONE_RE", -1, 0);
			unk_0xA1E7A40E1F56E511(&(Local_213.f_5), 16);
		}
	}
	else
	{
		func_91(0, -1, 0, 1, 0, 0, 1, 1, 0);
	}
	if (unk_0x59415A8719336539(0))
	{
		if (!unk_0xA2BC31158C8CEFD2(Local_213.f_5, 17))
		{
			unk_0xA1E7A40E1F56E511(&(Local_213.f_5), 17);
			unk_0x3B76114EC84D5812(&(Local_213.f_5), 16);
		}
	}
	else if (unk_0xA2BC31158C8CEFD2(Local_213.f_5, 17))
	{
		unk_0x3B76114EC84D5812(&(Local_213.f_5), 17);
		unk_0x3B76114EC84D5812(&(Local_213.f_5), 16);
	}
}

int func_147(int iParam0)
{
	if (func_150(func_140(iParam0)))
	{
		if (func_149() != func_16())
		{
			if (func_148() == func_149())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_148()
{
	return Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_35;
}

int func_149()
{
	return Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11;
}

int func_150(int iParam0)
{
	switch (iParam0)
	{
		case 241:
		case 248:
			return 1;
		
		default:
	}
	return 0;
}

var func_151()
{
	return Global_22211.f_135;
}

bool func_152(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

int func_153()
{
	if (func_154() <= 0)
	{
		return 0;
	}
	if (func_142())
	{
		return 1;
	}
	return 0;
}

int func_154()
{
	return Global_1687880.f_6;
}

bool func_155()
{
	return unk_0xA2BC31158C8CEFD2(Global_1687880, 7);
}

void func_156()
{
	int iVar0;
	
	if (unk_0x8A7BBB98FFB32893(Local_213.f_121) && !unk_0xF4B969E0807E76C7(unk_0x833BB45D35E36889(Local_213.f_121), 0))
	{
		if (unk_0xF42AC9E0924DC59B(Local_213.f_121))
		{
			if ((unk_0xD2652A8A890B29BA(Local_213.f_131) && unk_0xBE2A1549F5014A49(Local_213.f_131)) && !func_60())
			{
				iVar0 = 80;
				if (func_27())
				{
					iVar0 = 75;
				}
				if (unk_0x26BB91778477F482(2, iVar0) || unk_0x80E2BA2BD5AB1A3F(2, iVar0))
				{
					if (!unk_0xA2BC31158C8CEFD2(Local_213.f_5, 7))
					{
						unk_0xA1E7A40E1F56E511(&(Local_213.f_5), 7);
					}
				}
			}
		}
	}
}

void func_157()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((func_163() || !func_147(unk_0x7C7787D2D7139A85())) || !unk_0x393E9918BC37548A())
	{
		return;
	}
	iVar0 = func_162(1);
	func_161(iVar0);
	iVar1 = func_162(0);
	iVar2 = unk_0x91D67DB02D1040F1(Local_213.f_103, 2f, iVar1, 0, 0, 0);
	if (unk_0xD4B321D9096B01FC(iVar2) && iVar2 != Local_213.f_124)
	{
		if (unk_0x2230E1136DBEDE5D(iVar2, joaat("weapon_stungun"), 0) || unk_0x35D31BEBAFD53DE6(iVar2) == 999)
		{
			if (!unk_0xA2BC31158C8CEFD2(Local_213.f_5, 26))
			{
				func_160(func_149(), 1);
				unk_0xA1E7A40E1F56E511(&(Local_213.f_5), 26);
			}
		}
	}
	if (unk_0xD4B321D9096B01FC(Local_213.f_124))
	{
		if (unk_0x2230E1136DBEDE5D(Local_213.f_124, joaat("weapon_stungun"), 0) || unk_0x35D31BEBAFD53DE6(Local_213.f_124) == 999)
		{
			if (!unk_0xA2BC31158C8CEFD2(Local_213.f_5, 26))
			{
				func_160(func_149(), 1);
				unk_0xA1E7A40E1F56E511(&(Local_213.f_5), 26);
			}
		}
	}
	if (unk_0xA2BC31158C8CEFD2(Local_213.f_5, 26))
	{
		iVar3 = unk_0x91D67DB02D1040F1(Local_213.f_103, 2f, iVar0, 0, 0, 0);
		if (unk_0xD4B321D9096B01FC(iVar3))
		{
			if (unk_0xD4B321D9096B01FC(Local_213.f_124))
			{
				unk_0x2BBEC4B37B923F4B(Local_213.f_124, false, 0);
			}
			if (unk_0xD4B321D9096B01FC(iVar2))
			{
				unk_0x2BBEC4B37B923F4B(iVar2, false, 0);
			}
			func_158(1);
		}
	}
}

void func_158(bool bParam0)
{
	if (bParam0)
	{
		if (!func_159())
		{
			unk_0xA1E7A40E1F56E511(&Global_1687880, 1);
		}
	}
	else if (func_159())
	{
		unk_0x3B76114EC84D5812(&Global_1687880, 1);
	}
}

bool func_159()
{
	return unk_0xA2BC31158C8CEFD2(Global_1687880, 1);
}

void func_160(int iParam0, int iParam1)
{
	struct<3> Var0;
	int iVar3;
	
	Var0.f_0 = 1034081830;
	Var0.f_1 = unk_0x7C7787D2D7139A85();
	Var0.f_2 = iParam1;
	iVar3 = 0;
	if (iParam0 != func_16())
	{
		unk_0xA1E7A40E1F56E511(&iVar3, iParam0);
	}
	if (!iVar3 == 0)
	{
		unk_0x990C4E4B3665A4D6(1, &Var0, 3, iVar3);
	}
}

bool func_161(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x6BB2B1818CAE531E(iParam0);
	return unk_0x6DF9C43E3CC645BC(iParam0);
}

int func_162(bool bParam0)
{
	if (!bParam0)
	{
		if (Global_1687880.f_19 != 0)
		{
			return Global_1687880.f_19;
		}
		else
		{
			return joaat("ba_prop_battle_secpanel");
		}
	}
	else
	{
		return joaat("ba_prop_battle_secpanel_dam");
	}
	return 0;
}

bool func_163()
{
	return unk_0xA2BC31158C8CEFD2(Global_1687880, 14);
}

void func_164()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if ((unk_0xA2BC31158C8CEFD2(Local_213.f_5, 1) || func_176()) || func_175())
	{
		Local_213.f_17 = 0;
		Local_213.f_18 = 0;
		if (!unk_0xA2BC31158C8CEFD2(Local_213.f_5, 10))
		{
			unk_0xA1E7A40E1F56E511(&(Local_213.f_5), 10);
		}
		return;
	}
	if (!func_175())
	{
		if (unk_0xA2BC31158C8CEFD2(Local_213.f_5, 10))
		{
			Local_213.f_17 = 100;
			unk_0x3B76114EC84D5812(&(Local_213.f_5), 10);
		}
	}
	if (unk_0x8A7BBB98FFB32893(Local_213.f_121) && !unk_0xF4B969E0807E76C7(unk_0x833BB45D35E36889(Local_213.f_121), 0))
	{
		if (unk_0xF42AC9E0924DC59B(Local_213.f_121))
		{
			if ((unk_0xD2652A8A890B29BA(Local_213.f_131) && unk_0xBE2A1549F5014A49(Local_213.f_131)) && !unk_0xA2BC31158C8CEFD2(Local_213.f_5, 2))
			{
				if ((!unk_0xA2BC31158C8CEFD2(Local_213.f_5, 4) && !unk_0xA2BC31158C8CEFD2(Local_213.f_5, 3)) && !Local_213.f_118)
				{
					iVar0 = 206;
					if (unk_0x59415A8719336539(0))
					{
						iVar0 = 237;
					}
					if ((((unk_0x1EB14C6F68B8F915(2, iVar0) || unk_0x38CEC20C56D8586B(2, iVar0)) && !unk_0xA2BC31158C8CEFD2(Local_213.f_5, 5)) && !unk_0xA2BC31158C8CEFD2(Local_213.f_5, 24)) && !func_60())
					{
						unk_0xA1E7A40E1F56E511(&(Local_213.f_5), 24);
						if (unk_0xA2BC31158C8CEFD2(Local_213.f_5, 11) || unk_0xA2BC31158C8CEFD2(Local_213.f_5, 23))
						{
							Local_213.f_26++;
						}
					}
					if (func_9())
					{
						func_171();
					}
					else
					{
						func_170();
					}
				}
				else if (func_10(&(Local_213.f_178)))
				{
					if (func_9())
					{
						iVar1 = Global_262145.f_24730;
					}
					else
					{
						iVar1 = Global_262145.f_24130;
					}
					if (func_7(&(Local_213.f_178), iVar1, 0))
					{
						func_6(&(Local_213.f_178));
						Local_213.f_17 = 100;
						if (Local_213.f_31 != -1)
						{
							unk_0xCFF6AB47B7B014FF(Local_213.f_31);
							unk_0x0972EA9E8102C153(Local_213.f_31);
							Local_213.f_31 = -1;
						}
						if (unk_0xDE3C2FB26058823A(Local_213.f_34))
						{
							unk_0xCFF6AB47B7B014FF(Local_213.f_34);
							unk_0x0972EA9E8102C153(Local_213.f_34);
							Local_213.f_34 = -1;
						}
						unk_0x3B76114EC84D5812(&(Local_213.f_5), 4);
						unk_0x3B76114EC84D5812(&(Local_213.f_5), 3);
						unk_0x3B76114EC84D5812(&(Local_213.f_5), 24);
						Local_213.f_118 = 0;
					}
					else
					{
						iVar2 = (100 * unk_0x25A1A0BF87F74E56(unk_0x675EE3FED67AA436(unk_0x169A8AC9F93C2727(), Local_213.f_178)));
						Local_213.f_17 = (iVar2 / iVar1);
						if (!func_9())
						{
							if (unk_0xDE3C2FB26058823A(Local_213.f_31))
							{
								Local_213.f_31 = unk_0x04B8CCFB93858A27();
								unk_0x9964F5BBD9415AB7(Local_213.f_31, "HUD_Shock_Recharge", Local_213.f_119, 1);
								unk_0xEC93A4D791E42F8E(Local_213.f_31, "Time", (IntToFloat(iVar1) / 1000f));
							}
						}
					}
				}
				func_168();
				func_165();
			}
		}
		else
		{
			unk_0x4DB32D0662E0696B(Local_213.f_121);
		}
	}
}

void func_165()
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	struct<3> Var13;
	int iVar16;
	
	if (func_153())
	{
		if (unk_0x59415A8719336539(0))
		{
			iVar0 = 238;
		}
		else
		{
			iVar0 = 205;
		}
		if (!unk_0xA2BC31158C8CEFD2(Local_213.f_6, 6))
		{
			if (!unk_0xA2BC31158C8CEFD2(Local_213.f_6, 5))
			{
				if (unk_0x1EB14C6F68B8F915(2, iVar0) || unk_0x38CEC20C56D8586B(2, iVar0))
				{
					unk_0xA1E7A40E1F56E511(&(Local_213.f_6), 5);
				}
			}
			else if (Local_213.f_12 == 1)
			{
				if (Local_213.f_173 == 2)
				{
					Var1 = { unk_0x72DDC427E84EEBD1() };
					Var4 = { unk_0x765F48D6E8886201(2) };
					Var7 = { (-unk_0x0BADBFA3B172435F(Var4.f_2) * unk_0xD0FFB162F40A139C(Var4.f_0)), (unk_0xD0FFB162F40A139C(Var4.f_2) * unk_0xD0FFB162F40A139C(Var4.f_0)), unk_0x0BADBFA3B172435F(Var4.f_0) };
					Var10 = { 10f, 10f, 10f };
					Var13 = { Var1 + Var7 * Var10 };
					iVar16 = Global_262145.f_24131;
					if (unk_0xA2BC31158C8CEFD2(Local_213.f_5, 23))
					{
						iVar16 = Global_262145.f_24132;
					}
					unk_0x4DE2720E6B5AFD8C(Local_213.f_112 + Vector(0f, 0f, 0f), Var13, iVar16, 1, joaat("WEAPON_TRANQUILIZER"), unk_0x0FA8183DAD2B3203(), 1, 1, -1082130432, unk_0x833BB45D35E36889(Local_213.f_121), 0, 0, 0, 1, 0, 0);
					Local_213.f_23 = 100;
					unk_0x9EDF0FD0707786D3(0, 300, 150);
					if (unk_0xDE3C2FB26058823A(Local_213.f_80))
					{
						Local_213.f_80 = unk_0x04B8CCFB93858A27();
						unk_0x5F5C6A264C2CA8B1(Local_213.f_80, "Remote_Perspective_Fire", unk_0x833BB45D35E36889(Local_213.f_121), "DLC_H3_Drone_Tranq_Weapon_Sounds", 1, 0);
					}
					unk_0x9964F5BBD9415AB7(-1, "Pilot_Perspective_Fire", "DLC_H3_Drone_Tranq_Weapon_Sounds", 1);
					if (unk_0xA2BC31158C8CEFD2(Local_213.f_5, 11) || unk_0xA2BC31158C8CEFD2(Local_213.f_5, 23))
					{
						Local_213.f_28++;
					}
					func_167((func_154() - 1));
					if (func_154() <= 0)
					{
						Local_213.f_23 = 0;
						unk_0x3B76114EC84D5812(&(Local_213.f_5), 16);
					}
					unk_0xA1E7A40E1F56E511(&(Local_213.f_6), 6);
					func_8(&(Local_213.f_186), 0, 0);
				}
			}
		}
		else
		{
			func_166();
		}
	}
}

void func_166()
{
	int iVar0;
	int iVar1;
	
	if (func_154() > 0)
	{
		if (func_10(&(Local_213.f_186)))
		{
			iVar0 = Global_262145.f_24130;
			if (func_7(&(Local_213.f_186), iVar0, 0))
			{
				unk_0x3B76114EC84D5812(&(Local_213.f_6), 6);
				unk_0x3B76114EC84D5812(&(Local_213.f_6), 5);
				func_6(&(Local_213.f_186));
				Local_213.f_23 = 100;
				if (unk_0xDE3C2FB26058823A(Local_213.f_34))
				{
					unk_0xCFF6AB47B7B014FF(Local_213.f_34);
					unk_0x0972EA9E8102C153(Local_213.f_34);
					Local_213.f_34 = -1;
				}
			}
			else
			{
				iVar1 = (100 * unk_0x25A1A0BF87F74E56(unk_0x675EE3FED67AA436(unk_0x169A8AC9F93C2727(), Local_213.f_186)));
				Local_213.f_23 = (iVar1 / iVar0);
			}
		}
	}
}

void func_167(int iParam0)
{
	if (Global_1687880.f_6 != iParam0)
	{
		Global_1687880.f_6 = iParam0;
	}
}

void func_168()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	Local_213.f_210.f_2 = 2;
	if (unk_0x59415A8719336539(0))
	{
		Local_213.f_210.f_3 = 238;
	}
	else
	{
		Local_213.f_210.f_3 = 205;
	}
	iVar0 = Global_262145.f_24133;
	if (!unk_0xA2BC31158C8CEFD2(Local_213.f_5, 31))
	{
		Local_213.f_21 = 100;
	}
	if (func_9())
	{
		iVar0 = (iVar0 / 2);
		if (unk_0xA2BC31158C8CEFD2(Local_213.f_6, 1))
		{
			Local_213.f_20 = ((Local_213.f_22 * (Global_262145.f_24133 / 2)) / 100);
			Local_213.f_20 = ((Global_262145.f_24133 / 2) - Local_213.f_20);
			unk_0x3B76114EC84D5812(&(Local_213.f_6), 1);
		}
		if (unk_0xA2BC31158C8CEFD2(Local_213.f_5, 31))
		{
			iVar0 = Local_213.f_20;
		}
	}
	else
	{
		Local_213.f_21 = 100;
	}
	if (!func_145(1))
	{
		if (!func_60() && func_169(&(Local_213.f_210), 1, iVar0))
		{
			if (unk_0xDE3C2FB26058823A(Local_213.f_35))
			{
				Local_213.f_35 = unk_0x04B8CCFB93858A27();
				unk_0x5F5C6A264C2CA8B1(Local_213.f_35, "Destroyed", unk_0x833BB45D35E36889(Local_213.f_121), Local_213.f_119, 1, 0);
			}
			unk_0x54DAE1C749971F4D();
			iVar1 = 0;
			if (func_9())
			{
				iVar1 = 69;
			}
			unk_0x4F13F3CA0BEA7327(unk_0x0FA8183DAD2B3203(), Local_213.f_112, iVar1, 0.5f, 1, 0, 1065353216);
			if (unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()) < 1)
			{
				unk_0x31EBACD75CD1F9EC(unk_0x7C7787D2D7139A85(), 0, 0);
				unk_0xF1E958D9BB4D1EF6(unk_0x7C7787D2D7139A85(), 0);
			}
			unk_0x9EDF0FD0707786D3(0, 300, 200);
			unk_0xA1E7A40E1F56E511(&(Local_213.f_5), 2);
		}
	}
	if (func_10(&(Local_213.f_210)))
	{
		unk_0x9EDF0FD0707786D3(0, 300, 20);
		if (!unk_0xA2BC31158C8CEFD2(Local_213.f_5, 5))
		{
			unk_0xA1E7A40E1F56E511(&(Local_213.f_5), 5);
		}
		func_6(&(Local_213.f_202));
		if (!func_7(&(Local_213.f_210), iVar0, 0))
		{
			iVar2 = (Local_213.f_21 * unk_0x25A1A0BF87F74E56(unk_0x675EE3FED67AA436(unk_0x169A8AC9F93C2727(), Local_213.f_210)));
			if (!func_9())
			{
				Local_213.f_18 = (iVar2 / iVar0);
			}
			else if (!unk_0xA2BC31158C8CEFD2(Local_213.f_5, 31))
			{
				Local_213.f_18 = (iVar2 / iVar0);
			}
			else
			{
				Local_213.f_18 = (Local_213.f_22 + (iVar2 / iVar0));
			}
			if (unk_0xDE3C2FB26058823A(Local_213.f_32))
			{
				Local_213.f_32 = unk_0x04B8CCFB93858A27();
				unk_0x9964F5BBD9415AB7(Local_213.f_32, "HUD_Detonate_Charge", Local_213.f_119, 1);
			}
		}
	}
	else if (unk_0xA2BC31158C8CEFD2(Local_213.f_5, 5))
	{
		unk_0x3B76114EC84D5812(&(Local_213.f_5), 5);
		if (!func_9())
		{
			Local_213.f_18 = 0;
		}
		else
		{
			unk_0xA1E7A40E1F56E511(&(Local_213.f_5), 31);
			Local_213.f_21 = (100 - Local_213.f_18);
			Local_213.f_20 = (iVar0 - unk_0x25A1A0BF87F74E56(unk_0x675EE3FED67AA436(unk_0x169A8AC9F93C2727(), Local_213.f_210)));
			Local_213.f_22 = Local_213.f_18;
			func_6(&(Local_213.f_202));
		}
		if (Local_213.f_32 != -1)
		{
			unk_0xCFF6AB47B7B014FF(Local_213.f_32);
			unk_0x0972EA9E8102C153(Local_213.f_32);
			Local_213.f_32 = -1;
		}
	}
	else if (func_9())
	{
		if (Local_213.f_18 > 0)
		{
			if (Local_213.f_18 <= 2)
			{
				Local_213.f_18 = 0;
			}
			if (!func_10(&(Local_213.f_202)))
			{
				func_8(&(Local_213.f_202), 0, 0);
			}
			else
			{
				iVar3 = Global_262145.f_24133;
				if (!func_7(&(Local_213.f_202), iVar3, 0))
				{
					fVar4 = ((100f - IntToFloat(Local_213.f_21)) / unk_0xBBDA792448DB5A89((iVar3 / unk_0x25A1A0BF87F74E56(unk_0x675EE3FED67AA436(unk_0x169A8AC9F93C2727(), Local_213.f_202)))));
					Local_213.f_18 = (Local_213.f_18 - unk_0xF2DB717A73826179(fVar4));
					Local_213.f_22 = Local_213.f_18;
					Local_213.f_21 = (100 - Local_213.f_18);
					unk_0xA1E7A40E1F56E511(&(Local_213.f_6), 1);
				}
				else
				{
					Local_213.f_18 = 0;
				}
			}
		}
		else
		{
			func_6(&(Local_213.f_210));
			unk_0x3B76114EC84D5812(&(Local_213.f_5), 31);
			unk_0x3B76114EC84D5812(&(Local_213.f_6), 1);
		}
	}
}

int func_169(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x3772881BFFE6C3F8(uParam0->f_2, uParam0->f_3) || (unk_0x0B6782DED1C4B3B1(uParam0->f_2, uParam0->f_3) && iParam1))
	{
		if (!func_10(uParam0))
		{
			func_8(uParam0, 0, 0);
		}
		else if (func_7(uParam0, iParam2, 0))
		{
			func_6(uParam0);
			return 1;
		}
	}
	else
	{
		func_6(uParam0);
	}
	return 0;
}

void func_170()
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	int iVar15;
	
	if (unk_0xA2BC31158C8CEFD2(Local_213.f_5, 24))
	{
		if (Local_213.f_12 == 1)
		{
			if (Local_213.f_173 == 2)
			{
				Var0 = { unk_0x72DDC427E84EEBD1() };
				Var3 = { unk_0x765F48D6E8886201(2) };
				Var6 = { (-unk_0x0BADBFA3B172435F(Var3.f_2) * unk_0xD0FFB162F40A139C(Var3.f_0)), (unk_0xD0FFB162F40A139C(Var3.f_2) * unk_0xD0FFB162F40A139C(Var3.f_0)), unk_0x0BADBFA3B172435F(Var3.f_0) };
				Var9 = { 10f, 10f, 10f };
				Var12 = { Var0 + Var6 * Var9 };
				iVar15 = Global_262145.f_24131;
				if (unk_0xA2BC31158C8CEFD2(Local_213.f_5, 23))
				{
					iVar15 = Global_262145.f_24132;
				}
				if (func_142())
				{
					iVar15 = 1;
				}
				unk_0x4DE2720E6B5AFD8C(Local_213.f_112 + Vector(0f, 0f, 0f), Var12, iVar15, 1, joaat("weapon_stungun"), unk_0x0FA8183DAD2B3203(), 1, 1, -1082130432, unk_0x833BB45D35E36889(Local_213.f_121), 0, 0, 0, 1, 0, 0);
				Local_213.f_17 = 100;
				Local_213.f_18 = 0;
				unk_0x9EDF0FD0707786D3(0, 300, 150);
				if (unk_0xDE3C2FB26058823A(Local_213.f_34))
				{
					Local_213.f_34 = unk_0x04B8CCFB93858A27();
					unk_0x5F5C6A264C2CA8B1(Local_213.f_34, "Shock_Fire", unk_0x833BB45D35E36889(Local_213.f_121), Local_213.f_119, 1, 0);
				}
				if (Local_213.f_32 != -1)
				{
					unk_0xCFF6AB47B7B014FF(Local_213.f_32);
					unk_0x0972EA9E8102C153(Local_213.f_32);
					Local_213.f_32 = -1;
				}
				unk_0xA1E7A40E1F56E511(&(Local_213.f_5), 4);
				func_8(&(Local_213.f_178), 0, 0);
			}
		}
	}
}

void func_171()
{
	if ((unk_0xA2BC31158C8CEFD2(Local_213.f_5, 24) && !unk_0xA2BC31158C8CEFD2(Local_213.f_5, 3)) && !Local_213.f_118)
	{
		if (unk_0xB30F99610F67002E("scr_xs_dr"))
		{
			if (unk_0x8A7BBB98FFB32893(Local_213.f_121))
			{
				unk_0x6DB03BA592B3B9BA("scr_xs_dr");
				unk_0xB112145811C5C29E("scr_xs_dr_emp", unk_0x833BB45D35E36889(Local_213.f_121), 0f, -0.5f, 0f, 0f, 0f, 0f, 3f, 0, 0, 0);
			}
		}
		Local_213.f_17 = 100;
		unk_0x9EDF0FD0707786D3(0, 300, 150);
		if (unk_0xDE3C2FB26058823A(Local_213.f_34))
		{
			Local_213.f_34 = unk_0x04B8CCFB93858A27();
			unk_0x5F5C6A264C2CA8B1(Local_213.f_34, "Shock_Fire", unk_0x833BB45D35E36889(Local_213.f_121), Local_213.f_119, 1, 0);
		}
		if (Local_213.f_32 != -1)
		{
			unk_0xCFF6AB47B7B014FF(Local_213.f_32);
			unk_0x0972EA9E8102C153(Local_213.f_32);
			Local_213.f_32 = -1;
		}
		func_172(unk_0xACE5E491FC1B0D37(unk_0x833BB45D35E36889(Local_213.f_121), 1), 0);
		unk_0xA1E7A40E1F56E511(&(Local_213.f_5), 3);
		Local_213.f_118 = 1;
		func_8(&(Local_213.f_178), 0, 0);
	}
}

void func_172(struct<3> Param0, bool bParam3)
{
	struct<6> Var0;
	
	Var0.f_0 = -1949038199;
	Var0.f_1 = unk_0x7C7787D2D7139A85();
	Var0.f_2 = { Param0 };
	Var0.f_5 = bParam3;
	if (!bParam3)
	{
		if (!func_174(1, 1) == 0)
		{
			unk_0x990C4E4B3665A4D6(1, &Var0, 6, func_174(1, 1));
		}
	}
	else if (Global_1687880.f_21 != func_16())
	{
		unk_0x990C4E4B3665A4D6(1, &Var0, 6, func_173(Global_1687880.f_21));
	}
}

var func_173(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		unk_0xA1E7A40E1F56E511(&uVar0, iParam0);
	}
	return uVar0;
}

int func_174(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x0C98179F08C6DA4F(iVar1);
		if (func_15(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x7C7787D2D7139A85() || iParam0)
			{
				if (bParam1)
				{
					unk_0xA1E7A40E1F56E511(&uVar0, iVar1);
				}
				else if (!func_94(iVar2, 0))
				{
					unk_0xA1E7A40E1F56E511(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_175()
{
	return unk_0xA2BC31158C8CEFD2(Global_1687880, 8);
}

int func_176()
{
	if ((unk_0x8A7BBB98FFB32893(Local_213.f_121) && unk_0xF4B969E0807E76C7(unk_0x833BB45D35E36889(Local_213.f_121), 0)) && !unk_0xA2BC31158C8CEFD2(Local_213.f_5, 2))
	{
		return 1;
	}
	if (unk_0x8A7BBB98FFB32893(Local_213.f_121))
	{
		if (func_147(unk_0x7C7787D2D7139A85()) && unk_0xA2BC31158C8CEFD2(Global_2530259, 0))
		{
		}
		else if (func_184())
		{
			if (unk_0xC29ACA630455C49B(unk_0x833BB45D35E36889(Local_213.f_121)))
			{
				Local_213.f_25 = 1;
				return 1;
			}
		}
	}
	if (unk_0xA2BC31158C8CEFD2(Local_213.f_5, 2))
	{
		Local_213.f_25 = 4;
		return 1;
	}
	if (unk_0xA2BC31158C8CEFD2(Local_213.f_5, 9))
	{
		Local_213.f_25 = 1;
		return 1;
	}
	if (unk_0xA2BC31158C8CEFD2(Local_213.f_5, 7))
	{
		Local_213.f_25 = 0;
		return 1;
	}
	if (unk_0x8A7BBB98FFB32893(Local_213.f_121))
	{
		if (unk_0xE294A1321110B3E9(unk_0x833BB45D35E36889(Local_213.f_121)) || func_183(unk_0xAEA6D4EC961DFA03(Local_213.f_121), 0))
		{
			Local_213.f_25 = 3;
			return 1;
		}
	}
	if (func_181(unk_0x7C7787D2D7139A85()))
	{
		Local_213.f_25 = 0;
		return 1;
	}
	if (func_119())
	{
		if (Global_1590293 != func_16())
		{
			if (func_37(Global_1590293))
			{
				Local_213.f_25 = 0;
				return 1;
			}
		}
	}
	if (func_180())
	{
		Local_213.f_25 = 1;
		return 1;
	}
	if (func_179(unk_0x7C7787D2D7139A85()))
	{
		Local_213.f_25 = 0;
		return 1;
	}
	if (func_178())
	{
		Local_213.f_25 = 0;
		return 1;
	}
	if (func_177())
	{
		Local_213.f_25 = 0;
		return 1;
	}
	if (func_19())
	{
		Local_213.f_25 = 0;
		return 1;
	}
	if (func_28())
	{
		Local_213.f_25 = 0;
		return 1;
	}
	if (func_18())
	{
		if (unk_0xFBEFCFA19C9FF74E(unk_0x0FA8183DAD2B3203(), 1))
		{
			Local_213.f_25 = 6;
			return 1;
		}
		if (unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()) || unk_0x5C42127AAAED9EA7(unk_0x0FA8183DAD2B3203()))
		{
			Local_213.f_25 = 6;
			return 1;
		}
		if (func_136(unk_0x0FA8183DAD2B3203(), Local_213.f_115, 1) > 2f)
		{
			Local_213.f_25 = 7;
			return 1;
		}
	}
	return 0;
}

bool func_177()
{
	return Global_96008;
}

bool func_178()
{
	return unk_0xA2BC31158C8CEFD2(Global_1687880, 9);
}

int func_179(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (Global_1628955[iVar0 /*614*/].f_8)
		{
			return 1;
		}
	}
	return 0;
}

int func_180()
{
	struct<3> Var0;
	
	if (Local_213.f_16 == joaat("v_faceoffice"))
	{
		if (func_25(unk_0x833BB45D35E36889(Local_213.f_121)))
		{
			if (unk_0x7229A10262CA0377(unk_0x833BB45D35E36889(Local_213.f_121)) == joaat("GtaMloRoom001"))
			{
				Var0 = { unk_0xACE5E491FC1B0D37(unk_0x833BB45D35E36889(Local_213.f_121), 1) };
				if (Var0.f_2 >= 47f)
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x8A7BBB98FFB32893(Local_213.f_121))
	{
		if (func_25(unk_0x833BB45D35E36889(Local_213.f_121)))
		{
			if (unk_0x42A24CB7B8A08E11(unk_0x833BB45D35E36889(Local_213.f_121), -1071.258f, -242.5484f, 48.02133f, -1069.456f, -245.9234f, 43.87983f, 3f, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_181(int iParam0)
{
	if (iParam0 != func_16() && func_15(iParam0, 1, 1))
	{
		if (func_48(iParam0) && !func_182(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_182(int iParam0)
{
	if (iParam0 != func_16() && func_15(iParam0, 1, 1))
	{
		return unk_0xA2BC31158C8CEFD2(Global_2424073[iParam0 /*421*/].f_309, 4);
	}
	return 0;
}

int func_183(int iParam0, int iParam1)
{
	if (unk_0xD4B321D9096B01FC(iParam0))
	{
		if (!unk_0xF4B969E0807E76C7(iParam0, 0) || iParam1)
		{
			if (unk_0xE294A1321110B3E9(iParam0))
			{
				if (unk_0x19DEEB0989DD9C04(iParam0) >= 0.7f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_184()
{
	return unk_0xA2BC31158C8CEFD2(Global_1687880, 15);
}

void func_185()
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	int iVar18;
	var uVar19;
	struct<3> Var22;
	int iVar25;
	bool bVar26;
	
	if (unk_0x8A7BBB98FFB32893(Local_213.f_121) && !unk_0xF4B969E0807E76C7(unk_0x833BB45D35E36889(Local_213.f_121), 0))
	{
		if (unk_0xF42AC9E0924DC59B(Local_213.f_121))
		{
			Var0 = { Local_213.f_112 };
			switch (Local_213.f_12)
			{
				case 0:
					Var3 = { unk_0x72DDC427E84EEBD1() };
					Var6 = { unk_0x765F48D6E8886201(2) };
					Var9 = { (-unk_0x0BADBFA3B172435F(Var6.f_2) * unk_0xD0FFB162F40A139C(Var6.f_0)), (unk_0xD0FFB162F40A139C(Var6.f_2) * unk_0xD0FFB162F40A139C(Var6.f_0)), unk_0x0BADBFA3B172435F(Var6.f_0) };
					Var12 = { 10f, 10f, 10f };
					if (func_9())
					{
						Var12 = { Global_262145.f_24731, Global_262145.f_24731, Global_262145.f_24731 };
					}
					Var15 = { Var3 + Var9 * Var12 };
					Var0 = { unk_0x16DECC52D9360F1E(Local_213.f_112, unk_0xD2809C7F7FD79247(unk_0x833BB45D35E36889(Local_213.f_121)), 0f, -0.1f, 0f) };
					Local_213.f_129 = unk_0xE595A27685A9E166(Var0, Var15, 123, unk_0x833BB45D35E36889(Local_213.f_121), 7);
					if (Local_213.f_129 != 0)
					{
						Local_213.f_12 = 1;
					}
					break;
				
				case 1:
					Local_213.f_173 = unk_0x19D3834206AE7960(Local_213.f_129, &iVar18, &Var22, &uVar19, &iVar25);
					if (Local_213.f_173 == 2)
					{
						if (iVar18 == 0)
						{
							Local_213.f_13 = 1;
							Var22 = { 0f, 0f, 0f };
							if (unk_0xA2BC31158C8CEFD2(Local_213.f_5, 11) && !func_9())
							{
								unk_0x3B76114EC84D5812(&(Local_213.f_5), 11);
							}
							if (unk_0xA2BC31158C8CEFD2(Local_213.f_5, 23))
							{
								unk_0x3B76114EC84D5812(&(Local_213.f_5), 23);
							}
							func_192();
						}
						else
						{
							Local_213.f_13 = 2;
							if (unk_0xD4B321D9096B01FC(iVar25))
							{
								if (unk_0x4625051E51BA911B(iVar25))
								{
									if (!unk_0xF4B969E0807E76C7(iVar25, 0))
									{
										if (unk_0x7FA2061748BA645E(unk_0x3D464779B732760F(iVar25)))
										{
											if (func_190(unk_0x7C7787D2D7139A85(), unk_0x74D4E16E179B8F53(unk_0x3D464779B732760F(iVar25))))
											{
												bVar26 = true;
											}
										}
										else
										{
											if (!unk_0xA2BC31158C8CEFD2(Local_213.f_5, 23))
											{
												unk_0xA1E7A40E1F56E511(&(Local_213.f_5), 23);
												if (unk_0xA2BC31158C8CEFD2(Local_213.f_5, 11) && !func_9())
												{
													unk_0x3B76114EC84D5812(&(Local_213.f_5), 11);
												}
											}
											if (!func_72(unk_0x7C7787D2D7139A85()) && !func_69(unk_0x7C7787D2D7139A85(), 236))
											{
												if ((func_189(unk_0x3D464779B732760F(iVar25)) || func_188(unk_0x3D464779B732760F(iVar25))) || func_187(unk_0x3D464779B732760F(iVar25)))
												{
													func_68(Global_1575008);
													func_186(&(Local_213.f_188), 0, 0);
												}
												else
												{
													func_192();
												}
											}
										}
										if ((((!unk_0xA2BC31158C8CEFD2(Local_213.f_5, 11) && !bVar26) && func_25(Global_1687880.f_23)) && unk_0x20510084026BC387(Global_1687880.f_23, iVar25, 511)) && (unk_0x7FA2061748BA645E(unk_0x3D464779B732760F(iVar25)) && unk_0x0FA8183DAD2B3203() != unk_0x3D464779B732760F(iVar25)))
										{
											unk_0xA1E7A40E1F56E511(&(Local_213.f_5), 11);
											if (unk_0xA2BC31158C8CEFD2(Local_213.f_5, 23))
											{
												unk_0x3B76114EC84D5812(&(Local_213.f_5), 23);
											}
										}
									}
								}
								else
								{
									if (!func_9())
									{
										if (unk_0xA2BC31158C8CEFD2(Local_213.f_5, 11))
										{
											unk_0x3B76114EC84D5812(&(Local_213.f_5), 11);
										}
									}
									if (unk_0xA2BC31158C8CEFD2(Local_213.f_5, 23))
									{
										unk_0x3B76114EC84D5812(&(Local_213.f_5), 23);
									}
									func_192();
								}
							}
							else
							{
								func_192();
							}
							Local_213.f_129 = 0;
							Local_213.f_12 = 0;
						}
					}
					else if (Local_213.f_173 == 0)
					{
						Local_213.f_12 = 0;
					}
					break;
			}
		}
		else
		{
			unk_0x4DB32D0662E0696B(Local_213.f_121);
		}
	}
}

void func_186(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x393E9918BC37548A() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x169A8AC9F93C2727();
		}
		else
		{
			*uParam0 = unk_0x50D85685589EFCBD();
		}
	}
	else
	{
		*uParam0 = unk_0x9B35D07DCD0F0B43();
	}
	uParam0->f_1 = 1;
}

int func_187(int iParam0)
{
	if (unk_0xD4B321D9096B01FC(iParam0))
	{
		if (unk_0xD11CE32B5375927D(iParam0) == -183807561)
		{
			return 1;
		}
	}
	return 0;
}

int func_188(int iParam0)
{
	if (unk_0xD4B321D9096B01FC(iParam0))
	{
		if ((((((((((((unk_0x2E654F8AB5C1A8F9(iParam0) == 7 || unk_0x2E654F8AB5C1A8F9(iParam0) == 8) || unk_0x2E654F8AB5C1A8F9(iParam0) == 9) || unk_0x2E654F8AB5C1A8F9(iParam0) == 10) || unk_0x2E654F8AB5C1A8F9(iParam0) == 11) || unk_0x2E654F8AB5C1A8F9(iParam0) == 12) || unk_0x2E654F8AB5C1A8F9(iParam0) == 13) || unk_0x2E654F8AB5C1A8F9(iParam0) == 14) || unk_0x2E654F8AB5C1A8F9(iParam0) == 15) || unk_0x2E654F8AB5C1A8F9(iParam0) == 16) || unk_0x2E654F8AB5C1A8F9(iParam0) == 17) || unk_0x2E654F8AB5C1A8F9(iParam0) == 18) || unk_0x2E654F8AB5C1A8F9(iParam0) == 19)
		{
			return 1;
		}
	}
	return 0;
}

int func_189(int iParam0)
{
	if (unk_0xD4B321D9096B01FC(iParam0))
	{
		if ((((unk_0x2E654F8AB5C1A8F9(iParam0) == 6 || unk_0x2E654F8AB5C1A8F9(iParam0) == 29) || unk_0x2E654F8AB5C1A8F9(iParam0) == 27) || unk_0xD11CE32B5375927D(iParam0) == joaat("army")) || unk_0xD11CE32B5375927D(iParam0) == joaat("COP"))
		{
			return 1;
		}
	}
	return 0;
}

int func_190(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_191(iParam0);
	if (!iVar0 == func_16())
	{
		if (iVar0 == func_191(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_191(int iParam0)
{
	if (iParam0 != func_16())
	{
		return Global_1628955[iParam0 /*614*/].f_11;
	}
	return func_16();
}

void func_192()
{
	if (func_10(&(Local_213.f_188)))
	{
		if (func_7(&(Local_213.f_188), 60000, 0))
		{
			func_6(&(Local_213.f_188));
			if (unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()) <= 0)
			{
				func_68(Global_1574997);
			}
		}
	}
}

void func_193()
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	struct<3> Var14;
	struct<3> Var17;
	int iVar20;
	var uVar21;
	struct<3> Var24;
	int iVar27;
	int iVar28;
	int iVar29;
	
	if ((func_27() || func_9()) || func_29())
	{
		if (!unk_0xA2BC31158C8CEFD2(Local_213.f_5, 29))
		{
			return;
		}
	}
	if (unk_0x8A7BBB98FFB32893(Local_213.f_121) && !unk_0xF4B969E0807E76C7(unk_0x833BB45D35E36889(Local_213.f_121), 0))
	{
		if (unk_0x574AAA9B4EC0792F(unk_0x833BB45D35E36889(Local_213.f_121)))
		{
			return;
		}
		if (unk_0xF42AC9E0924DC59B(Local_213.f_121))
		{
			switch (Local_213.f_10)
			{
				case 0:
					if ((func_9() || func_29()) || func_27())
					{
						fVar13 = 0.3f;
					}
					else
					{
						fVar13 = (func_196(Local_213.f_169) * 1.5f);
					}
					if (func_27())
					{
						Var14 = { Local_213.f_112 };
						Var1 = { unk_0x72DDC427E84EEBD1() };
						Var4 = { unk_0x765F48D6E8886201(2) };
						Var7 = { (-unk_0x0BADBFA3B172435F(Var4.f_2) * unk_0xD0FFB162F40A139C(Var4.f_0)), (unk_0xD0FFB162F40A139C(Var4.f_2) * unk_0xD0FFB162F40A139C(Var4.f_0)), unk_0x0BADBFA3B172435F(Var4.f_0) };
						Var10 = { 0.9f, 0.9f, 0.9f };
						Var17 = { Var1 + Var7 * Var10 };
					}
					else
					{
						Var14 = { Local_213.f_112 };
						Var17 = { Local_213.f_112 };
					}
					Local_213.f_128 = unk_0x370A50EE38672923(Var14, Var17, fVar13, 511, unk_0x833BB45D35E36889(Local_213.f_121), 4);
					if (Local_213.f_128 != 0)
					{
						Local_213.f_10 = 1;
					}
					break;
				
				case 1:
					iVar28 = unk_0x19D3834206AE7960(Local_213.f_128, &iVar20, &Var24, &uVar21, &iVar27);
					if (iVar28 == 2)
					{
						if (iVar20 == 0)
						{
							Local_213.f_11 = 1;
							Var24 = { 0f, 0f, 0f };
						}
						else
						{
							if (unk_0xD4B321D9096B01FC(iVar27))
							{
								if (unk_0x905FBA24E7FA8D23(iVar27))
								{
									if (!unk_0xF4B969E0807E76C7(iVar27, 0) && unk_0x7F375072508F738F(iVar27) != Local_213.f_169)
									{
										if (unk_0xB8D4A2BAA78AB950(iVar27) > 0.5f || func_194(unk_0x7F375072508F738F(iVar27)))
										{
											if (!unk_0xA2BC31158C8CEFD2(Local_213.f_5, 9))
											{
												unk_0xA1E7A40E1F56E511(&(Local_213.f_5), 9);
											}
										}
									}
								}
								else if (unk_0x4625051E51BA911B(iVar27))
								{
									if (!unk_0xF4B969E0807E76C7(iVar27, 0))
									{
										if (!unk_0x7FA2061748BA645E(unk_0x3D464779B732760F(iVar27)))
										{
											if (Local_213.f_27 == 0)
											{
												iVar0 = unk_0xBAC643F143880136(0, 3);
												if (iVar0 == 0)
												{
													iVar29 = 85;
												}
												else if (iVar0 == 1)
												{
													iVar29 = 90;
												}
												else
												{
													iVar29 = 79;
												}
												Local_213.f_27 = unk_0x3E95CD40DBA47D5A(iVar29, Local_213.f_112, 5000f);
												func_186(&(Local_213.f_194), 0, 0);
											}
										}
									}
								}
							}
							Local_213.f_11 = 2;
							unk_0x9EDF0FD0707786D3(0, 300, 50);
							Local_213.f_128 = 0;
							Local_213.f_10 = 0;
						}
					}
					else if (iVar28 == 0)
					{
						Local_213.f_10 = 0;
					}
					break;
			}
			if (Local_213.f_27 != 0)
			{
				if (func_10(&(Local_213.f_194)))
				{
					if (func_7(&(Local_213.f_194), 5000, 0))
					{
						unk_0x96483FEDF4721FCB(Local_213.f_27);
						func_6(&(Local_213.f_194));
						Local_213.f_27 = 0;
					}
				}
			}
		}
		else
		{
			unk_0x4DB32D0662E0696B(Local_213.f_121);
		}
	}
}

int func_194(int iParam0)
{
	switch (iParam0)
	{
		case joaat("chernobog"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("skylift"):
		case joaat("taco"):
			return 1;
			break;
	}
	if (func_195(iParam0, 1))
	{
		return 1;
	}
	if (unk_0xDC118E11A4081E9A(iParam0) || unk_0x31337ABC07783F10(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_195(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_14207)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_14208)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_14206)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_14209)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_14211)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_14210)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
			if (Global_262145.f_18657)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_262145.f_18659)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_262145.f_18663)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_262145.f_18660)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_262145.f_18667)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_262145.f_18665)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_262145.f_18670)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("technical3"):
			if (Global_262145.f_20613)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("insurgent3"):
			if (Global_262145.f_20614)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("issi4"):
		case joaat("issi5"):
		case joaat("issi6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("dominator4"):
		case joaat("dominator5"):
		case joaat("dominator6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
	}
	return 0;
}

float func_196(int iParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	
	func_197(iParam0, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
	return unk_0x01CBD71E072E9F33((Var0.f_2 - Var3.f_2));
}

void func_197(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (unk_0xCBBFE6965951B21E(iParam0))
	{
		unk_0xB10397B050DB322E(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_200(iParam0);
		if (iVar0 != 0)
		{
			func_198(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
			return;
		}
	}
	if (unk_0x652D2EEEF1D3E62C(*uParam1) <= 0.01f || unk_0x652D2EEEF1D3E62C(*uParam2) <= 0.01f)
	{
		*uParam1 = (0f - (fParam4 * 0.5f));
		*uParam2 = (0f + (fParam4 * 0.5f));
		uParam1->f_1 = (0f - (fParam3 * 0.5f));
		uParam2->f_1 = (0f + (fParam3 * 0.5f));
		uParam1->f_2 = (0f - (fParam5 * 0.5f));
		uParam2->f_2 = (0f + (fParam5 * 0.5f));
	}
}

void func_198(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	func_199(iParam0, &Global_1315808);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0xCBBFE6965951B21E(Global_1315808[iVar0]))
		{
			unk_0xB10397B050DB322E(Global_1315808[iVar0], &(Global_1315812[iVar0 /*3*/]), &(Global_1315819[iVar0 /*3*/]));
		}
		if (unk_0x652D2EEEF1D3E62C(Global_1315812[iVar0 /*3*/]) <= 0.01f || unk_0x652D2EEEF1D3E62C(Global_1315819[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1315812[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1315819[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1315812[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1315819[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1315812[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1315819[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1315826[iVar0] = (Global_1315819[iVar0 /*3*/] - Global_1315812[iVar0 /*3*/]);
		Global_1315829[iVar0] = (Global_1315819[iVar0 /*3*/].f_1 - Global_1315812[iVar0 /*3*/].f_1);
		Global_1315832[iVar0] = (Global_1315819[iVar0 /*3*/].f_2 - Global_1315812[iVar0 /*3*/].f_2);
		if (Global_1315826[iVar0] > Global_1315835)
		{
			Global_1315835 = Global_1315826[iVar0];
		}
		if (Global_1315832[iVar0] > Global_1315836)
		{
			Global_1315836 = Global_1315832[iVar0];
		}
		iVar0++;
	}
	Global_1315837 = (Global_1315835 * -0.5f);
	Global_1315840 = (Global_1315835 * 0.5f);
	Global_1315837.f_1 = ((((0.5f * Global_1315829[0]) + Global_1315829[1]) + Global_1315808.f_3) * -1f);
	Global_1315840.f_1 = (0.5f * Global_1315829[0]);
	Global_1315837.f_2 = (Global_1315832[0] * -0.5f);
	Global_1315840.f_2 = (Global_1315832[0] * 0.5f);
	*uParam1 = { Global_1315837 };
	*uParam2 = { Global_1315840 };
}

void func_199(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = joaat("hauler2");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
		
		case 2:
			(*uParam1)[0] = joaat("phantom3");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
		
		case 3:
			(*uParam1)[0] = joaat("nightshark");
			(*uParam1)[1] = joaat("trailersmall2");
			uParam1->f_3 = 0.5f;
			break;
	}
}

int func_200(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_201(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_201(int iParam0)
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_202()
{
	int iVar0;
	
	if (unk_0x8A7BBB98FFB32893(Local_213.f_121))
	{
		if (func_25(unk_0x833BB45D35E36889(Local_213.f_121)))
		{
			iVar0 = func_205(unk_0x833BB45D35E36889(Local_213.f_121));
			if (iVar0 != -1)
			{
				if (!func_204(&(Global_1573352.f_370), iVar0) && !func_204(&(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_557), iVar0))
				{
					func_203(1);
				}
			}
		}
	}
}

void func_203(bool bParam0)
{
	if (bParam0)
	{
		if (func_58())
		{
			if (!unk_0xA2BC31158C8CEFD2(Global_1687880, 9))
			{
				unk_0xA1E7A40E1F56E511(&Global_1687880, 9);
			}
		}
	}
	else if (unk_0xA2BC31158C8CEFD2(Global_1687880, 9))
	{
		unk_0x3B76114EC84D5812(&Global_1687880, 9);
	}
}

bool func_204(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 % 32);
	return unk_0xA2BC31158C8CEFD2((*uParam0)[iVar0], iVar1);
}

int func_205(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xD4B321D9096B01FC(iParam0) && !unk_0xF4B969E0807E76C7(iParam0, 0))
	{
		if (func_214(iParam0))
		{
			return 15;
		}
		if (func_211(iParam0))
		{
			return 28;
		}
		if (func_210(iParam0))
		{
			return 23;
		}
		if (func_209(iParam0))
		{
			return 33;
		}
		iVar0 = unk_0x1B15167A6E6F7820(iParam0);
		if (iVar0 != 0)
		{
			iVar1 = 0;
			while (iVar1 < 34)
			{
				iVar2 = iVar1;
				func_206(iVar2);
				if (Global_1681159[iVar1] == iVar0)
				{
					return iVar2;
				}
				iVar1++;
			}
		}
	}
	return -1;
}

void func_206(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (Global_1681159[iVar0] == 0)
	{
		Global_1681159[iVar0] = unk_0x2BA8B1187A604700(func_208(iParam0), func_207(iParam0));
	}
}

char* func_207(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "bkr_biker_dlc_int_03";
		
		case 0:
			return "hei_heist_police_dlc";
		
		case 2:
			return "v_genbank";
		
		case 3:
			return "v_genbank";
		
		case 4:
			return "v_genbank";
		
		case 5:
			return "v_genbank";
		
		case 6:
			return "v_bank4";
		
		case 7:
			return "v_genbank";
		
		case 8:
			return "hei_generic_bank_dlc";
		
		case 9:
			return "v_rockclub";
		
		case 10:
			return "v_factory1";
		
		case 11:
			return "v_factory2";
		
		case 12:
			return "v_factory3";
		
		case 13:
			return "v_factory4";
		
		case 14:
			return "v_farmhouse";
		
		case 15:
			return "gr_gta_milo_bridge";
		
		case 16:
			return "v_recycle";
		
		case 17:
			return "v_lab";
		
		case 18:
			return "v_garagem";
		
		case 19:
			return "v_studio_lo";
		
		case 20:
			return "v_apart_midspaz";
		
		case 21:
			return "v_sheriff";
		
		case 22:
			return "v_sheriff2";
		
		case 23:
			return "dt1_03_carpark";
		
		case 24:
			return "v_carshowroom";
		
		case 27:
			return "v_faceoffice";
		
		case 25:
			return "v_abattoir";
		
		case 26:
			return "V_JEWEL2";
		
		case 28:
			return "smboat";
		
		case 29:
			return "vb_33_garage";
		
		case 30:
			return "v_chopshop";
		
		case 31:
			return "v_methlab";
		
		case 32:
			return "v_office_lobby";
		
		case 33:
			return "v_lab";
		
		default:
	}
	return "";
}

Vector3 func_208(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 984.1552f, -95.3662f, 75.9326f;
		
		case 0:
			return 443.2281f, -984.0744f, 29.6896f;
		
		case 2:
			return -1216.762f, -333.0008f, 36.8508f;
		
		case 3:
			return 145.4168f, -1039.277f, 28.4379f;
		
		case 4:
			return 309.7465f, -277.6442f, 53.2346f;
		
		case 5:
			return -355.4359f, -48.5326f, 48.1064f;
		
		case 6:
			return -109.4503f, 6467.768f, 30.4388f;
		
		case 7:
			return 1179.745f, 2706.985f, 37.1578f;
		
		case 8:
			return -2962.591f, 478.238f, 14.7669f;
		
		case 9:
			return -556.5089f, 286.3181f, 81.1763f;
		
		case 10:
			return -76.6618f, 6222.191f, 32.2412f;
		
		case 11:
			return -100.7106f, 6205.7f, 30.0499f;
		
		case 12:
			return -125.6972f, 6172.923f, 30.0499f;
		
		case 13:
			return -162.4785f, 6155.384f, 30.0499f;
		
		case 14:
			return 2449.785f, 4983.825f, 45.8106f;
		
		case 15:
			return -1426.362f, 6754.506f, 11.7821f;
		
		case 16:
			return -583.2097f, -1599.302f, 26.3052f;
		
		case 17:
			return 3522.845f, 3707.965f, 19.9918f;
		
		case 18:
			return 630f, 4750f, -60f;
		
		case 19:
			return 600f, 4750f, -60f;
		
		case 20:
			return 575f, 4750f, -60f;
		
		case 21:
			return 1853.625f, 3687.826f, 33.2671f;
		
		case 22:
			return -447.5651f, 6013.988f, 30.7164f;
		
		case 23:
			return -28.1023f, -688.8687f, 34.4437f;
		
		case 24:
			return -40.2938f, -1097.321f, 25.4223f;
		
		case 27:
			return -1074.853f, -250.3996f, 36.7388f;
		
		case 25:
			return 982.233f, -2160.382f, 28.4761f;
		
		case 26:
			return -630.4205f, -236.7843f, 37.057f;
		
		case 28:
			return -2032f, -1035f, 5f;
		
		case 29:
			return -1078.561f, -1678.615f, 3.5752f;
		
		case 30:
			return 479.88f, -1318.57f, 28.2f;
		
		case 31:
			return 1392.512f, 3603.185f, 38.5f;
		
		case 32:
			return 105.4557f, -745.4835f, 44.7548f;
		
		case 33:
			return 3522.845f, 3707.965f, 19.9918f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_209(int iParam0)
{
	if (!unk_0xF4B969E0807E76C7(iParam0, 0))
	{
		if ((unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), 3833.558f, 3666.702f, -20.91209f, 3818.202f, 3654.002f, -26.37315f, 12.25f, 0, 1, 0) || unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), 3765.784f, 3661.946f, -15.33658f, 3823.827f, 3654.624f, -24.84368f, 13.75f, 0, 1, 0)) || unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), 3519.188f, 3724.821f, -0.487321f, 3767.179f, 3661.705f, -32.33569f, 115f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_210(int iParam0)
{
	if (!unk_0xF4B969E0807E76C7(iParam0, 0))
	{
		if (unk_0xD34AF93E9BCF12F0(unk_0xACE5E491FC1B0D37(iParam0, 1), -16.2669f, -685.4531f, 31.3381f, 1) <= 80f)
		{
			if ((((((unk_0x42A24CB7B8A08E11(iParam0, -73.06738f, -689.2972f, 31.96555f, -68.41993f, -676.6198f, 36.63721f, 4.25f, 0, 1, 0) || unk_0x42A24CB7B8A08E11(iParam0, 25.07854f, -664.3469f, 30.40673f, 14.14475f, -690.1883f, 38.61758f, 16f, 0, 1, 0)) || unk_0x42A24CB7B8A08E11(iParam0, -18.7689f, -659.366f, 30.79917f, -15.31378f, -703.7052f, 38.08809f, 54.5f, 0, 1, 0)) || unk_0x42A24CB7B8A08E11(iParam0, 9.119493f, -710.9459f, 30.83068f, -39.76558f, -693.0358f, 38.08809f, 24.25f, 0, 1, 0)) || unk_0x42A24CB7B8A08E11(iParam0, -69.84457f, -683.3396f, 30.70474f, -39.69342f, -690.2305f, 36.58809f, 17.25f, 0, 1, 0)) || unk_0x42A24CB7B8A08E11(iParam0, -43.32302f, -693.9668f, 30.58809f, -72.39151f, -683.4483f, 39.48361f, 20f, 0, 1, 0)) || unk_0x42A24CB7B8A08E11(iParam0, -39.63783f, -686.181f, 30.58809f, -39.30408f, -662.2571f, 39.48083f, 20f, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_211(int iParam0)
{
	return ((!unk_0xF4B969E0807E76C7(iParam0, 0) && unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), -2016.6f, -1039.867f, -3.801932f, -2129.956f, -1003.351f, 22.18234f, 15.75f, 0, 1, 0)) || func_212());
}

int func_212()
{
	struct<3> Var0;
	
	if (!unk_0x260395BA7F0C83CB())
	{
		Var0 = { -2073.541f, -1021.104f, 14.99213f };
		if (unk_0xB7A628320EFF8E47(func_213(unk_0x7C7787D2D7139A85()), Var0) <= 25600f)
		{
			if (unk_0x93086679C0E859D8(Var0, 60f))
			{
				return 1;
			}
		}
	}
	return 0;
}

Vector3 func_213(int iParam0)
{
	return unk_0xACE5E491FC1B0D37(unk_0x23625FE58BACEBFD(iParam0), 0);
}

bool func_214(int iParam0)
{
	return ((!unk_0xF4B969E0807E76C7(iParam0, 0) && unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), Vector(-3.801932f, -1039.867f, -2016.6f) + Vector(0f, 7773.967f, 654.731f), Vector(22.18234f, -1003.351f, -2129.956f) + Vector(0f, 7773.967f, 654.731f), 15.75f, 0, 1, 0)) || func_215());
}

int func_215()
{
	struct<3> Var0;
	
	if (!unk_0x260395BA7F0C83CB())
	{
		Var0 = { Vector(-3.801932f, -1039.867f, -2016.6f) + Vector(0f, 7773.967f, 654.731f) };
		if (unk_0xB7A628320EFF8E47(func_213(unk_0x7C7787D2D7139A85()), Var0) <= 25600f)
		{
			if (unk_0x93086679C0E859D8(Var0, 50f))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_216(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (func_27())
	{
		return;
	}
	if (unk_0x8A7BBB98FFB32893(Local_213.f_121))
	{
		if (unk_0xD2652A8A890B29BA(Local_213.f_131) && unk_0x1F70CA72458DB6BD(Local_213.f_131))
		{
			if (unk_0xBE2A1549F5014A49(Local_213.f_131) || iParam0)
			{
				if (!func_60())
				{
					func_54(0);
				}
				func_227(1);
				if ((!func_226() || unk_0xA2BC31158C8CEFD2(Local_213.f_5, 1)) || func_176())
				{
					unk_0x40984840FC30EC06();
				}
				else
				{
					unk_0x0AF55029F939BA65(9);
					unk_0x0AF55029F939BA65(7);
					unk_0x0AF55029F939BA65(8);
					func_63();
					func_224(1);
					uVar0 = unk_0x1B15167A6E6F7820(unk_0xAEA6D4EC961DFA03(Local_213.f_121));
					if (unk_0x61837007ACF2F2C2(uVar0))
					{
						Global_1687880.f_24 = uVar0;
						if (!unk_0xA2BC31158C8CEFD2(Local_213.f_5, 8))
						{
							Local_213.f_86 = func_223(unk_0x960D770B0A0A098C(uVar0));
							unk_0xC9D12845309DE349(uVar0, &(Local_213.f_109), &(Local_213.f_16));
							unk_0xA1E7A40E1F56E511(&(Local_213.f_5), 8);
						}
						iVar1 = 0;
						if (func_222(Local_213.f_112.f_2, 43f, 48.7f))
						{
							iVar1 = 1;
						}
						if (Global_1687880.f_9 == -1f)
						{
							unk_0x700E6BD29C3E8458(1f);
						}
						else
						{
							unk_0x700E6BD29C3E8458(Global_1687880.f_9);
						}
						if (!func_147(unk_0x7C7787D2D7139A85()) && !func_219(unk_0x7C7787D2D7139A85()))
						{
							if (!func_218())
							{
								func_217(1);
							}
						}
						unk_0x580A98D19EED420F(0, 0);
						unk_0xA01AFCD5514FA5F1(Local_213.f_16, Local_213.f_109, Local_213.f_109.f_1, unk_0xF34EE736CF047844(Local_213.f_86), iVar1);
					}
					else
					{
						Local_213.f_16 = -1;
						if (Global_1687880.f_9 == -1f)
						{
							unk_0x700E6BD29C3E8458(0f);
						}
						else
						{
							unk_0x700E6BD29C3E8458(Global_1687880.f_9);
						}
						if (!func_218())
						{
							func_217(1);
						}
						unk_0x580A98D19EED420F(0, 0);
						Global_1687880.f_24 = -1;
						if (unk_0xA2BC31158C8CEFD2(Local_213.f_5, 8))
						{
							unk_0x3B76114EC84D5812(&(Local_213.f_5), 8);
						}
					}
				}
			}
		}
	}
}

void func_217(int iParam0)
{
	Global_2461278 = iParam0;
}

bool func_218()
{
	return Global_2461278;
}

int func_219(int iParam0)
{
	if (func_221(iParam0))
	{
		return 1;
	}
	if (func_220(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_220(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_73(iParam0, 9);
	}
	return 0;
}

int func_221(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return unk_0xA2BC31158C8CEFD2(Global_1628955[iVar0 /*614*/].f_1, 0);
	}
	return 0;
}

int func_222(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 >= fParam1 && fParam0 < fParam2)
	{
		return 1;
	}
	return 0;
}

float func_223(float fParam0)
{
	return (fParam0 * 57.29578f);
}

void func_224(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		Global_98721.f_8 = 1;
	}
	else
	{
		Global_98721.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 53)
	{
		func_225(iVar0);
		iVar0++;
	}
}

void func_225(int iParam0)
{
	Global_98721.f_181[iParam0] = 1;
	Global_98721.f_180 = 1;
}

bool func_226()
{
	return unk_0xA2BC31158C8CEFD2(Global_1687880, 4);
}

void func_227(int iParam0)
{
	if (Global_2531497.f_4554 != iParam0)
	{
		Global_2531497.f_4554 = iParam0;
	}
}

void func_228()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	struct<3> Var13;
	struct<3> Var16;
	float fVar19;
	struct<3> Var20;
	float fVar23;
	float fVar24;
	float fVar25;
	float fVar26;
	struct<3> Var27;
	struct<3> Var30;
	float fVar33;
	float fVar34;
	var uVar35;
	var uVar36;
	struct<3> Var37;
	
	if (!func_27() || func_176())
	{
		return;
	}
	if (unk_0x8A7BBB98FFB32893(Local_213.f_121) && !unk_0xF4B969E0807E76C7(unk_0x833BB45D35E36889(Local_213.f_121), 0))
	{
		if (unk_0xF42AC9E0924DC59B(Local_213.f_121))
		{
			fVar0 = 26f;
			fVar1 = 40f;
			fVar2 = 30f;
			fVar3 = 30f;
			iVar4 = 1;
			fVar5 = unk_0x6E77B3E7393A77D3(unk_0x833BB45D35E36889(Local_213.f_121));
			fVar6 = unk_0x30F2F1A95B6762F0(unk_0x833BB45D35E36889(Local_213.f_121));
			fVar7 = (30f * unk_0x0000000050597EE2());
			func_233();
			unk_0x8D83A1F4B5106D47(2);
			func_232(&(Local_213[0]), &(Local_213[1]), &(Local_213[2]), &(Local_213[3]), 0, 0);
			if (unk_0x59415A8719336539(0))
			{
				iVar4 = 2;
				Local_213[2] = (Local_213[2] * iVar4);
				Local_213[3] = (Local_213[3] * iVar4);
			}
			if (unk_0xE3D790791838F084())
			{
				Local_213[3] = (Local_213[3] * -1);
				Local_213[1] = (Local_213[1] * -1);
			}
			if ((Local_213[2] != 0 || Local_213[3] != 0) || (Local_213[0] != 0 || Local_213[1] != 0))
			{
				if (Local_213[2] != 0)
				{
					fVar8 = (1f / (127f / IntToFloat(Local_213[2])));
				}
				else if (Local_213[0] != 0)
				{
					fVar8 = (1f / (127f / IntToFloat(Local_213[0])));
				}
				else
				{
					fVar8 = 0f;
				}
				if (Local_213[3] != 0)
				{
					fVar9 = (1f / (127f / IntToFloat(Local_213[3])));
				}
				else if (Local_213[1] != 0)
				{
					fVar9 = (1f / (127f / IntToFloat(Local_213[1])));
				}
				else
				{
					fVar9 = 0f;
				}
				Var13 = { unk_0x762900E9B9F74FD4(unk_0x833BB45D35E36889(Local_213.f_121), 2) };
				fVar10 = (((fVar9 * 0.05f) * fVar7) * fVar0);
				fVar11 = -(((fVar8 * 0.05f) * fVar7) * fVar0);
				if ((fVar5 != 0f || Local_213[2] != 0) || Local_213[0] != 0)
				{
					if (Local_213[2] != 0)
					{
						fVar19 = (1f / (127f / IntToFloat(Local_213[2])));
						fVar12 = -(((fVar19 * 0.05f) * fVar7) * (fVar1 - 25f));
					}
					else if (Local_213[0] != 0)
					{
						fVar19 = (1f / (127f / IntToFloat(Local_213[0])));
						fVar12 = -(((fVar19 * 0.05f) * fVar7) * (fVar1 - 25f));
					}
					else
					{
						if (fVar5 > 0.1f || fVar5 < -0.1f)
						{
							if (fVar5 > 0f)
							{
								fVar19 = -1f;
							}
							else
							{
								fVar19 = 1f;
							}
						}
						if (Var13.f_1 != 0f)
						{
							if (Var13.f_1 < 2f && Var13.f_1 > 0f)
							{
								fVar19 = 0.0001f;
							}
							else if (Var13.f_1 > -2f && Var13.f_1 < 0f)
							{
								fVar19 = -0.0001f;
							}
						}
						else
						{
							fVar19 = 0f;
						}
						fVar12 = -(((fVar19 * 0.05f) * fVar7) * (fVar1 - 25f));
					}
				}
				else
				{
					fVar12 = 0f;
				}
				Var16 = { Vector(fVar11, fVar12, fVar10) + Var13 };
				if (fVar5 != 0f)
				{
					if (Local_213[2] == 0 && Local_213[0] == 0)
					{
						if (Var16.f_1 > fVar2)
						{
							Var16.f_1 = fVar2;
						}
						else if (Var16.f_1 < -fVar2)
						{
							Var16.f_1 = -fVar2;
						}
					}
					else if (Var16.f_1 > fVar2)
					{
						Var16.f_1 = fVar2;
					}
					else if (Var16.f_1 < -fVar2)
					{
						Var16.f_1 = -fVar2;
					}
				}
				if (Var16.f_0 > fVar3)
				{
					Var16.f_0 = fVar3;
				}
				else if (Var16.f_0 < -fVar3)
				{
					Var16.f_0 = -fVar3;
				}
				if (!unk_0xA2BC31158C8CEFD2(Local_213.f_5, 12))
				{
					unk_0xA1E7A40E1F56E511(&(Local_213.f_5), 12);
				}
				unk_0xF3D48447FACBBE72(unk_0x833BB45D35E36889(Local_213.f_121), Vector(0f, 0f, 0f) + Vector(Var16.f_2, Var16.f_1, Var16.f_0), 2, 1);
			}
			else if (((Local_213[2] != 0 || Local_213[3] != 0) || Local_213[0] != 0) || Local_213[1] != 0)
			{
				Var20 = { unk_0x762900E9B9F74FD4(unk_0x833BB45D35E36889(Local_213.f_121), 2) };
				if (func_231())
				{
					if (func_230())
					{
						fVar24 = -1f;
						Local_213.f_92 = fVar24;
					}
				}
				else
				{
					if (Local_213[2] != 0)
					{
						fVar23 = (1f / (127f / IntToFloat(Local_213[2])));
						Local_213.f_92 = fVar23;
					}
					else if (Local_213[0] != 0)
					{
						fVar23 = (1f / (127f / IntToFloat(Local_213[0])));
						Local_213.f_92 = fVar23;
					}
					else
					{
						fVar23 = 0f;
					}
					if (Local_213[3] != 0)
					{
						fVar24 = (1f / (127f / IntToFloat(Local_213[3])));
						Local_213.f_92 = fVar23;
					}
					else if (Local_213[1] != 0)
					{
						fVar24 = (1f / (127f / IntToFloat(Local_213[1])));
						Local_213.f_92 = fVar23;
					}
					else
					{
						fVar24 = 0f;
					}
				}
				fVar25 = -(((fVar24 * 0.05f) * fVar7) * fVar1);
				fVar26 = -(((fVar23 * 0.05f) * fVar7) * fVar1);
				if (fVar5 != 0f)
				{
					if (Local_213[2] == 0 && Local_213[0] == 0)
					{
						if (fVar5 > 1f || fVar5 < -1f)
						{
							if (fVar5 > 0f)
							{
								fVar23 = -1f;
							}
							else
							{
								fVar23 = 1f;
							}
						}
						if (Var20.f_1 < 2f && Var20.f_1 > 0f)
						{
							fVar23 = 0.0001f;
						}
						else if (Var20.f_1 > -2f && Var20.f_1 < 0f)
						{
							fVar23 = -0.0001f;
						}
						fVar26 = -(((fVar23 * 0.05f) * fVar7) * (fVar1 - 25f));
					}
				}
				Var27 = { Vector(0f, fVar26, fVar25) + Var20 };
				if (Var27.f_1 > fVar2)
				{
					Var27.f_1 = fVar2;
				}
				else if (Var27.f_1 < -fVar2)
				{
					Var27.f_1 = -fVar2;
				}
				if (Var27.f_0 > fVar3)
				{
					Var27.f_0 = fVar3;
				}
				else if (Var27.f_0 < -fVar3)
				{
					Var27.f_0 = -fVar3;
				}
				if (unk_0xA2BC31158C8CEFD2(Local_213.f_5, 12))
				{
					unk_0x3B76114EC84D5812(&(Local_213.f_5), 12);
				}
				unk_0xF3D48447FACBBE72(unk_0x833BB45D35E36889(Local_213.f_121), Vector(0f, 0f, 0f) + Vector(Var20.f_2, Var27.f_1, Var27.f_0), 2, 1);
			}
			else
			{
				Local_213.f_92 = 0f;
				Var30 = { unk_0x762900E9B9F74FD4(unk_0x833BB45D35E36889(Local_213.f_121), 2) };
				if (fVar5 != 0f || fVar6 != 0f)
				{
					if (Var30.f_1 != 0f)
					{
						if (Var30.f_1 < 0f)
						{
							fVar33 = -1f;
						}
						else
						{
							fVar33 = 1f;
						}
					}
					else
					{
						fVar33 = 0f;
					}
					if (fVar6 != 0f)
					{
						if (Var30.f_0 < 0f)
						{
							fVar34 = -1f;
						}
						else
						{
							fVar34 = 1f;
						}
					}
					else
					{
						fVar34 = 0f;
					}
					if (Var30.f_1 != 0f)
					{
						if (Var30.f_1 < 2f && Var30.f_1 > 0f)
						{
							fVar33 = 0.0001f;
						}
						else if (Var30.f_1 > -2f && Var30.f_1 < 0f)
						{
							fVar33 = -0.0001f;
						}
					}
					else
					{
						fVar33 = 0f;
					}
					if (Var30.f_0 != 0f)
					{
						if (Var30.f_0 < 2f && Var30.f_0 > 0f)
						{
							fVar34 = 0.0001f;
						}
						else if (Var30.f_0 > -2f && Var30.f_0 < 0f)
						{
							fVar34 = -0.0001f;
						}
					}
					else
					{
						fVar34 = 0f;
					}
					uVar35 = func_229(-(((fVar34 * 0.05f) * fVar7) * (fVar1 - 25f)));
					uVar36 = func_229(-(((fVar33 * 0.05f) * fVar7) * (fVar1 - 25f)));
					Var37 = { Vector(0f, uVar36, uVar35) + Var30 };
					if (unk_0xA2BC31158C8CEFD2(Local_213.f_5, 12))
					{
						Var37.f_0 = Var30.f_0;
					}
					unk_0xF3D48447FACBBE72(unk_0x833BB45D35E36889(Local_213.f_121), Vector(0f, 0f, 0f) + Vector(Var30.f_2, Var37.f_1, Var37.f_0), 2, 1);
				}
			}
		}
		else
		{
			unk_0x4DB32D0662E0696B(Local_213.f_121);
		}
	}
}

float func_229(float fParam0)
{
	while (fParam0 > 180f)
	{
		fParam0 = (fParam0 - 360f);
	}
	while (fParam0 < -180f)
	{
		fParam0 = (fParam0 + 360f);
	}
	return fParam0;
}

bool func_230()
{
	return unk_0xA2BC31158C8CEFD2(Local_213.f_5, 22);
}

bool func_231()
{
	return unk_0xA2BC31158C8CEFD2(Local_213.f_5, 21);
}

void func_232(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0x0B7B056651B415AB(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0x0B7B056651B415AB(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0x0B7B056651B415AB(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0x0B7B056651B415AB(2, 221) * 127f));
	if (bParam4)
	{
		if (!unk_0x11A903F097CA2A71(2, 218))
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0x581F0AD9C3973F33(2, 218) * 127f));
		}
		if (!unk_0x11A903F097CA2A71(2, 219))
		{
			*uParam1 = unk_0xF34EE736CF047844((unk_0x581F0AD9C3973F33(2, 219) * 127f));
		}
		if (!unk_0x11A903F097CA2A71(2, 220))
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0x581F0AD9C3973F33(2, 220) * 127f));
		}
		if (!unk_0x11A903F097CA2A71(2, 221))
		{
			*uParam3 = unk_0xF34EE736CF047844((unk_0x581F0AD9C3973F33(2, 221) * 127f));
		}
	}
	if (unk_0x59415A8719336539(2))
	{
		if (bParam5)
		{
			if (unk_0xE3D790791838F084())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (unk_0x8498E3AABF2B8030())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_233()
{
	if (func_119())
	{
		switch (Local_213.f_24)
		{
			case 0:
				Local_213.f_90 = 90f;
				Local_213.f_89 = 90f;
				break;
			
			case 1:
				Local_213.f_90 = 75f;
				Local_213.f_89 = 75f;
				break;
			
			case 2:
				Local_213.f_90 = 45f;
				Local_213.f_89 = 45f;
				break;
		}
	}
	else
	{
		switch (Local_213.f_24)
		{
			case 0:
				Local_213.f_90 = 90f;
				Local_213.f_89 = 90f;
				break;
			
			case 1:
				Local_213.f_90 = 80f;
				Local_213.f_89 = 80f;
				break;
			
			case 2:
				Local_213.f_90 = 70f;
				Local_213.f_89 = 70f;
				break;
			}
	}
}

void func_234()
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	bool bVar7;
	bool bVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	struct<3> Var14;
	struct<3> Var17;
	float fVar20;
	struct<3> Var21;
	float fVar24;
	float fVar25;
	float fVar26;
	float fVar27;
	struct<3> Var28;
	struct<3> Var31;
	float fVar34;
	float fVar35;
	var uVar36;
	var uVar37;
	struct<3> Var38;
	
	if ((unk_0xA2BC31158C8CEFD2(Local_213.f_5, 1) || func_176()) || func_27())
	{
		return;
	}
	if (unk_0x8A7BBB98FFB32893(Local_213.f_121) && !unk_0xF4B969E0807E76C7(unk_0x833BB45D35E36889(Local_213.f_121), 0))
	{
		if (unk_0xF42AC9E0924DC59B(Local_213.f_121))
		{
			fVar0 = 40f;
			fVar1 = 19f;
			fVar2 = 14f;
			iVar3 = 1;
			fVar4 = unk_0x6E77B3E7393A77D3(unk_0x833BB45D35E36889(Local_213.f_121));
			fVar5 = unk_0x30F2F1A95B6762F0(unk_0x833BB45D35E36889(Local_213.f_121));
			if (func_17())
			{
				fVar1 = 10f;
			}
			fVar6 = (30f * unk_0x0000000050597EE2());
			func_233();
			unk_0x8D83A1F4B5106D47(2);
			func_232(&(Local_213[0]), &(Local_213[1]), &(Local_213[2]), &(Local_213[3]), 0, 0);
			if (unk_0x59415A8719336539(0))
			{
				iVar3 = 5;
				Local_213[2] = (Local_213[2] * iVar3);
				Local_213[3] = (Local_213[3] * iVar3);
			}
			if (unk_0xE3D790791838F084())
			{
				Local_213[3] = (Local_213[3] * -1);
			}
			if (func_7(&(Local_213.f_206), 750, 0))
			{
				if (!unk_0x59415A8719336539(0))
				{
					bVar7 = unk_0x80E2BA2BD5AB1A3F(0, 210);
				}
				else
				{
					bVar7 = (unk_0x80E2BA2BD5AB1A3F(0, 241) || unk_0x80E2BA2BD5AB1A3F(0, 242));
					if (unk_0x80E2BA2BD5AB1A3F(0, 241))
					{
						bVar8 = true;
					}
				}
				if (bVar7)
				{
					func_186(&(Local_213.f_206), 0, 0);
				}
			}
			if (bVar7 && !func_231())
			{
				if (!unk_0x59415A8719336539(0))
				{
					Local_213.f_24++;
				}
				else if (bVar8)
				{
					Local_213.f_24 = (Local_213.f_24 - 1);
				}
				else
				{
					Local_213.f_24++;
				}
				if (unk_0xDE3C2FB26058823A(Local_213.f_38))
				{
					Local_213.f_38 = unk_0x04B8CCFB93858A27();
					unk_0x9964F5BBD9415AB7(Local_213.f_38, "HUD_Zoom_Change", Local_213.f_119, 1);
				}
				if (Local_213.f_24 > 2)
				{
					Local_213.f_24 = 0;
				}
				else if (Local_213.f_24 < 0)
				{
					Local_213.f_24 = 2;
				}
			}
			else if (unk_0xDE3C2FB26058823A(Local_213.f_38))
			{
				unk_0xCFF6AB47B7B014FF(Local_213.f_38);
				unk_0x0972EA9E8102C153(Local_213.f_38);
				Local_213.f_38 = -1;
			}
			Local_213.f_91 = (Local_213.f_91 + (((Local_213.f_89 - Local_213.f_91) * 0.06f) * fVar6));
			unk_0x494374BCB9580EA5(Local_213.f_131, Local_213.f_91);
			if (Local_213[2] != 0 || Local_213[3] != 0)
			{
				if (Local_213[2] != 0)
				{
					fVar9 = (1f / (127f / IntToFloat(Local_213[2])));
				}
				else
				{
					fVar9 = 0f;
				}
				if (Local_213[3] != 0)
				{
					fVar10 = (1f / (127f / IntToFloat(Local_213[3])));
				}
				else
				{
					fVar10 = 0f;
				}
				Var14 = { unk_0x762900E9B9F74FD4(unk_0x833BB45D35E36889(Local_213.f_121), 2) };
				fVar11 = (((fVar10 * 0.05f) * fVar6) * Local_213.f_93);
				fVar12 = -(((fVar9 * 0.05f) * fVar6) * Local_213.f_93);
				if ((fVar4 != 0f || Local_213[0] != 0) && !func_60())
				{
					if (Local_213[0] != 0)
					{
						fVar20 = (1f / (127f / IntToFloat(Local_213[0])));
						fVar13 = -(((fVar20 * 0.05f) * fVar6) * (fVar0 - 25f));
					}
					else
					{
						if (fVar4 > 0.1f || fVar4 < -0.1f)
						{
							if (fVar4 > 0f)
							{
								fVar20 = -1f;
							}
							else
							{
								fVar20 = 1f;
							}
						}
						if (Var14.f_1 != 0f)
						{
							if (Var14.f_1 < 1.5f && Var14.f_1 > 0f)
							{
								fVar20 = 0.001f;
							}
							else if (Var14.f_1 > -1.5f && Var14.f_1 < 0f)
							{
								fVar20 = -0.001f;
							}
						}
						else
						{
							fVar20 = 0f;
						}
						fVar13 = -(((fVar20 * 0.05f) * fVar6) * (fVar0 - 25f));
					}
				}
				else
				{
					fVar13 = 0f;
				}
				Var17 = { Vector(fVar12, fVar13, fVar11) + Var14 };
				if (fVar4 != 0f)
				{
					if (Local_213[0] == 0)
					{
						if (Var17.f_1 > fVar1)
						{
							Var17.f_1 = fVar1;
						}
						else if (Var17.f_1 < -fVar1)
						{
							Var17.f_1 = -fVar1;
						}
					}
					else if (Var17.f_1 > fVar1)
					{
						Var17.f_1 = fVar1;
					}
					else if (Var17.f_1 < -fVar1)
					{
						Var17.f_1 = -fVar1;
					}
				}
				if (Var17.f_0 > fVar2)
				{
					Var17.f_0 = fVar2;
				}
				else if (Var17.f_0 < -fVar2)
				{
					Var17.f_0 = -fVar2;
				}
				if (!unk_0xA2BC31158C8CEFD2(Local_213.f_5, 12))
				{
					unk_0xA1E7A40E1F56E511(&(Local_213.f_5), 12);
				}
				unk_0xF3D48447FACBBE72(unk_0x833BB45D35E36889(Local_213.f_121), Vector(0f, 0f, 0f) + Vector(Var17.f_2, Var17.f_1, Var17.f_0), 2, 1);
			}
			else if (((Local_213[0] != 0 || Local_213[1] != 0) && !func_231()) && !func_60())
			{
				Var21 = { unk_0x762900E9B9F74FD4(unk_0x833BB45D35E36889(Local_213.f_121), 2) };
				if (func_231())
				{
					if (func_230())
					{
						fVar25 = -1f;
						Local_213.f_92 = fVar25;
					}
				}
				else
				{
					if (Local_213[0] != 0)
					{
						fVar24 = (1f / (127f / IntToFloat(Local_213[0])));
						Local_213.f_92 = fVar24;
					}
					else
					{
						fVar24 = 0f;
					}
					if (Local_213[1] != 0)
					{
						fVar25 = (1f / (127f / IntToFloat(Local_213[1])));
						Local_213.f_92 = fVar24;
					}
					else
					{
						fVar25 = 0f;
					}
				}
				fVar26 = -(((fVar25 * 0.05f) * fVar6) * fVar0);
				fVar27 = -(((fVar24 * 0.05f) * fVar6) * fVar0);
				if (fVar4 != 0f)
				{
					if ((Local_213[0] == 0 && !func_60()) || func_231())
					{
						if (fVar4 > 1f || fVar4 < -1f)
						{
							if (fVar4 > 0f)
							{
								fVar24 = -1f;
							}
							else
							{
								fVar24 = 1f;
							}
						}
						if (Var21.f_1 < 1.5f && Var21.f_1 > 0f)
						{
							fVar24 = 0.001f;
						}
						else if (Var21.f_1 > -1.5f && Var21.f_1 < 0f)
						{
							fVar24 = -0.001f;
						}
						fVar27 = -(((fVar24 * 0.05f) * fVar6) * (fVar0 - 25f));
					}
				}
				Var28 = { Vector(0f, fVar27, fVar26) + Var21 };
				if (Var28.f_1 > fVar1)
				{
					Var28.f_1 = fVar1;
				}
				else if (Var28.f_1 < -fVar1)
				{
					Var28.f_1 = -fVar1;
				}
				if (Var28.f_0 > fVar2)
				{
					Var28.f_0 = fVar2;
				}
				else if (Var28.f_0 < -fVar2)
				{
					Var28.f_0 = -fVar2;
				}
				if (unk_0xA2BC31158C8CEFD2(Local_213.f_5, 12))
				{
					unk_0x3B76114EC84D5812(&(Local_213.f_5), 12);
				}
				unk_0xF3D48447FACBBE72(unk_0x833BB45D35E36889(Local_213.f_121), Vector(0f, 0f, 0f) + Vector(Var21.f_2, Var28.f_1, Var28.f_0), 2, 1);
			}
			else if (!func_230() && !func_231())
			{
				Local_213.f_92 = 0f;
				Var31 = { unk_0x762900E9B9F74FD4(unk_0x833BB45D35E36889(Local_213.f_121), 2) };
				if (fVar4 != 0f || fVar5 != 0f)
				{
					if (Var31.f_1 != 0f)
					{
						if (Var31.f_1 < 0f)
						{
							fVar34 = -1f;
						}
						else
						{
							fVar34 = 1f;
						}
					}
					else
					{
						fVar34 = 0f;
					}
					if (fVar5 != 0f)
					{
						if (Var31.f_0 < 0f)
						{
							fVar35 = -1f;
						}
						else
						{
							fVar35 = 1f;
						}
					}
					else
					{
						fVar35 = 0f;
					}
					if (Var31.f_1 != 0f)
					{
						if (Var31.f_1 < 1.5f && Var31.f_1 > 0f)
						{
							fVar34 = 0.001f;
						}
						else if (Var31.f_1 > -1.5f && Var31.f_1 < 0f)
						{
							fVar34 = -0.001f;
						}
					}
					else
					{
						fVar34 = 0f;
					}
					if (Var31.f_0 != 0f)
					{
						if (Var31.f_0 < 1.5f && Var31.f_0 > 0f)
						{
							fVar35 = 0.001f;
						}
						else if (Var31.f_0 > -1.5f && Var31.f_0 < 0f)
						{
							fVar35 = -0.001f;
						}
					}
					else
					{
						fVar35 = 0f;
					}
					uVar36 = func_229(-(((fVar35 * 0.05f) * fVar6) * (fVar0 - 25f)));
					uVar37 = func_229(-(((fVar34 * 0.05f) * fVar6) * (fVar0 - 25f)));
					Var38 = { Vector(0f, uVar37, uVar36) + Var31 };
					if (unk_0xA2BC31158C8CEFD2(Local_213.f_5, 12))
					{
						Var38.f_0 = Var31.f_0;
					}
					unk_0xF3D48447FACBBE72(unk_0x833BB45D35E36889(Local_213.f_121), Vector(0f, 0f, 0f) + Vector(Var31.f_2, Var38.f_1, Var38.f_0), 2, 1);
				}
			}
		}
		else
		{
			unk_0x4DB32D0662E0696B(Local_213.f_121);
		}
	}
}

void func_235()
{
	int iVar0;
	int iVar1;
	
	if (func_53(unk_0x7C7787D2D7139A85(), 0))
	{
		iVar0 = func_162(0);
		Local_213.f_103 = { func_238(&Local_213) };
		if (!unk_0xD4B321D9096B01FC(Local_213.f_124))
		{
			if (!func_237(Local_213.f_103))
			{
				if (func_161(iVar0))
				{
					Local_213.f_124 = unk_0x7187764DB5121FC9(iVar0, Local_213.f_103, 0, 0, 1);
					unk_0xC67026146B0E835A(Local_213.f_124, Local_213.f_103, 0, 0, 1);
					unk_0x8C85E8C71AD74415(Local_213.f_124, true, 0);
					unk_0xDA778D908FD69EEE(Local_213.f_124, 1, 1);
					unk_0x775879DF24E29944(Local_213.f_124, 1);
					unk_0x5A2B7C446C0CF087(Local_213.f_124, func_236());
					unk_0x860A5CC30A0EF207(Local_213.f_124, true);
					unk_0x2BBEC4B37B923F4B(Local_213.f_124, false, 0);
					unk_0xE0AC40EF164A2569(iVar0);
				}
			}
		}
		else
		{
			iVar1 = unk_0x91D67DB02D1040F1(Local_213.f_103, 2f, iVar0, 0, 0, 0);
			if (unk_0xD4B321D9096B01FC(iVar1) && iVar1 != Local_213.f_124)
			{
				if (unk_0x77FF1FAF6F41CA71(iVar1))
				{
					unk_0xD36570C04932359F(iVar1, 0, 0);
					unk_0x860A5CC30A0EF207(iVar1, true);
					unk_0x2BBEC4B37B923F4B(iVar1, true, 0);
				}
				else
				{
					unk_0x7252D7992DA58CA9(iVar1);
				}
			}
		}
	}
	else
	{
		Local_213.f_103 = { func_238(&Local_213) };
	}
}

float func_236()
{
	if (Global_1687880.f_7 != 0f)
	{
		return Global_1687880.f_7;
	}
	return 0f;
}

int func_237(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_238(var uParam0)
{
	if (!func_237(Global_1687880.f_10))
	{
		return Global_1687880.f_10;
	}
	else
	{
		return uParam0->f_103;
	}
	return 0f, 0f, 0f;
}

void func_239()
{
	if (Local_213.f_32 != -1)
	{
		unk_0xCFF6AB47B7B014FF(Local_213.f_32);
		unk_0x0972EA9E8102C153(Local_213.f_32);
		Local_213.f_32 = -1;
	}
}

int func_240()
{
	if (unk_0xCD97B9861557C025() || unk_0xBEE209BD103A0339())
	{
		return 1;
	}
	if (unk_0x4ABA84DE907E0474())
	{
		return 1;
	}
	if (func_155())
	{
		return 1;
	}
	if (func_245(unk_0x7C7787D2D7139A85()) && !func_244())
	{
		return 1;
	}
	if (func_147(unk_0x7C7787D2D7139A85()))
	{
		if (unk_0xA2BC31158C8CEFD2(Global_2530259, 0))
		{
			return 1;
		}
	}
	if (Global_1662552 || Global_1312791)
	{
		func_243(1);
		return 1;
	}
	if ((func_241(0) || func_152(1)) || func_151())
	{
		func_54(0);
		func_63();
		func_81();
		return 1;
	}
	return 0;
}

int func_241(bool bParam0)
{
	if (unk_0x8F0856319BE615A3())
	{
		if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
		{
			if (func_242(unk_0x0FA8183DAD2B3203()))
			{
				if (unk_0x3772881BFFE6C3F8(0, 25) || unk_0x3772881BFFE6C3F8(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_22211.f_130)
	{
		return 0;
	}
	if (unk_0x3772881BFFE6C3F8(0, 19) || (!bParam0 && unk_0x0B6782DED1C4B3B1(0, 19)))
	{
		return 1;
	}
	if (unk_0xE434AB6E3DE89861())
	{
		if (((unk_0x3772881BFFE6C3F8(0, 166) || unk_0x3772881BFFE6C3F8(0, 167)) || unk_0x3772881BFFE6C3F8(0, 168)) || unk_0x3772881BFFE6C3F8(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0x0B6782DED1C4B3B1(0, 166) || unk_0x0B6782DED1C4B3B1(0, 167)) || unk_0x0B6782DED1C4B3B1(0, 168)) || unk_0x0B6782DED1C4B3B1(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_242(int iParam0)
{
	int iVar0;
	
	if (unk_0xC6649C48084573DA())
	{
		if (!unk_0x2BF5E63466422C38(iParam0))
		{
			unk_0x63EA4FAF7CDEFEC7(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("weapon_heavysniper_mk2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_243(bool bParam0)
{
	if (bParam0)
	{
		if (!func_28())
		{
			unk_0xA1E7A40E1F56E511(&Global_1687880, 20);
		}
	}
	else if (func_28())
	{
		unk_0x3B76114EC84D5812(&Global_1687880, 20);
	}
}

bool func_244()
{
	return (unk_0xA2BC31158C8CEFD2(Global_4456448.f_30, 12) && unk_0xA2BC31158C8CEFD2(Global_1695602, 0));
}

int func_245(int iParam0)
{
	if (func_94(iParam0, 0))
	{
		return 1;
	}
	if (func_246())
	{
		if (iParam0 == unk_0x7C7787D2D7139A85())
		{
			return 1;
		}
	}
	if (unk_0xA2BC31158C8CEFD2(Global_2424073[iParam0 /*421*/].f_195, 2))
	{
		return 1;
	}
	return 0;
}

bool func_246()
{
	return unk_0xA2BC31158C8CEFD2(Global_2359302, 3);
}

void func_247()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (func_27())
	{
		return;
	}
	if (func_226())
	{
		if (unk_0x8A7BBB98FFB32893(Local_213.f_121))
		{
			if (!unk_0x39A01A052D9B5FF0(Local_213.f_133))
			{
				Local_213.f_133 = func_261(Local_213.f_112, 0);
				unk_0xD1773DD05FE2AB54(Local_213.f_133, 627);
				if (func_17() && !unk_0x39A01A052D9B5FF0(Local_213.f_134))
				{
					Local_213.f_134 = func_258(unk_0x0FA8183DAD2B3203(), 0, 0);
					unk_0xD1773DD05FE2AB54(Local_213.f_134, 6);
					unk_0x73DF1B751952DA65(Local_213.f_134, 0);
					unk_0xBC0D06064C5B5413(Local_213.f_134, 0.7f);
					unk_0x6089156CDC87FE4B(Local_213.f_134, (13 - 1));
					if (func_255(unk_0x7C7787D2D7139A85()) != -1)
					{
						func_251(&(Local_213.f_134), func_253(func_255(unk_0x7C7787D2D7139A85())));
					}
					else
					{
						func_251(&(Local_213.f_134), func_250());
					}
					unk_0xEF55A75C76679C9F(Local_213.f_134, 1);
				}
			}
			else
			{
				fVar0 = func_249(Local_213.f_87);
				fVar1 = Local_213.f_112;
				fVar2 = Local_213.f_112.f_1;
				unk_0xB2FBFC8F00374981(Local_213.f_133, 2);
				unk_0x58531110F2DD153B(Local_213.f_133, Local_213.f_112);
				if (((func_9() || func_29()) && unk_0xCD97B9861557C025()) && unk_0xA51CBC95AC3A4B14())
				{
					if (!unk_0xB667E9EC5C84F751())
					{
						fVar1 = -323.1f;
						fVar2 = -1970.9f;
						unk_0x58531110F2DD153B(Local_213.f_133, fVar1, fVar2, 0f);
						unk_0x7427E1978A984A18(fVar1, fVar2);
						unk_0x74D8EB6B6A85E352();
					}
				}
				unk_0xB3CE6AE66E254E18(fVar1, fVar2);
				unk_0x34FC9C043469D18C(Local_213.f_133, unk_0xF2DB717A73826179(fVar0));
				unk_0xBC0D06064C5B5413(Local_213.f_133, 1f);
				unk_0x6089156CDC87FE4B(Local_213.f_133, 9);
				unk_0x15075DC36982CF61(unk_0xF2DB717A73826179(fVar0));
				if (unk_0x39A01A052D9B5FF0(Local_213.f_134))
				{
					unk_0x34FC9C043469D18C(Local_213.f_134, func_248(unk_0x0FA8183DAD2B3203()));
				}
			}
		}
	}
}

int func_248(int iParam0)
{
	float fVar0;
	
	fVar0 = unk_0x8A9719BEEB48F022(iParam0);
	return unk_0xF2DB717A73826179(fVar0);
}

float func_249(float fParam0)
{
	if (fParam0 > 180f)
	{
		return (fParam0 - 180f);
	}
	return (fParam0 + 180f);
}

int func_250()
{
	return 10;
}

void func_251(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x39A01A052D9B5FF0(*uParam0))
	{
		iVar0 = func_252(iParam1);
		unk_0x088577CF98F96D05(*uParam0, iVar0);
	}
}

int func_252(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	unk_0xE0A2E1F5E75D9DF8(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

int func_253(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_254(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_254(int iParam0)
{
	return Global_2417783.f_2105.f_44[iParam0 /*2*/].f_1;
}

int func_255(int iParam0)
{
	if (!iParam0 == func_16())
	{
		if (func_256(iParam0, 1))
		{
			return Global_2417783.f_2105.f_11[func_191(iParam0)];
		}
	}
	return -1;
}

bool func_256(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_257(iParam0))
		{
			return 0;
		}
	}
	return Global_1628955[iParam0 /*614*/].f_11 != func_16();
}

int func_257(int iParam0)
{
	if (iParam0 != func_16())
	{
		if (Global_1628955[iParam0 /*614*/].f_11 != func_16())
		{
			return Global_1628955[iParam0 /*614*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_258(int iParam0, bool bParam1, bool bParam2)
{
	return func_259(iParam0, !bParam1, bParam2);
}

int func_259(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xD4B321D9096B01FC(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xADA89D4F1A58FCBA(iParam0);
	if (unk_0x905FBA24E7FA8D23(iParam0))
	{
		unk_0xBC0D06064C5B5413(uVar0, func_260(unk_0x393E9918BC37548A(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x14C335BB2F079BD4(uVar0, bParam1);
		}
		else
		{
			unk_0x088577CF98F96D05(uVar0, 2);
		}
	}
	else if (unk_0x4625051E51BA911B(iParam0))
	{
		unk_0xBC0D06064C5B5413(uVar0, func_260(unk_0x393E9918BC37548A(), 0.7f, 0.7f));
		unk_0x14C335BB2F079BD4(uVar0, bParam1);
	}
	else if (unk_0x0F100E7952E44923(iParam0))
	{
		unk_0xBC0D06064C5B5413(uVar0, func_260(unk_0x393E9918BC37548A(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_260(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

var func_261(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0xACAD99314B51277E(Param0);
	unk_0xBC0D06064C5B5413(uVar0, func_260(unk_0x393E9918BC37548A(), 1f, 1f));
	unk_0x925BD1075D119B45(uVar0, iParam3);
	return uVar0;
}

void func_262()
{
	if (func_27())
	{
		if (Local_213.f_112.f_2 >= (func_139() - 20f))
		{
			if (unk_0xDE3C2FB26058823A(Local_213.f_36))
			{
				Local_213.f_36 = unk_0x04B8CCFB93858A27();
				unk_0x9964F5BBD9415AB7(Local_213.f_36, "Out_Of_Bounds_Alarm_Loop", Local_213.f_119, 1);
			}
		}
		else if (!unk_0xDE3C2FB26058823A(Local_213.f_36))
		{
			unk_0xCFF6AB47B7B014FF(Local_213.f_36);
			unk_0x0972EA9E8102C153(Local_213.f_36);
			Local_213.f_36 = -1;
		}
	}
}

void func_263()
{
	if (((func_29() || func_119()) || func_17()) || func_142())
	{
		switch (Local_213.f_171)
		{
			case 0:
				func_286();
				break;
			
			case 1:
				func_273();
				break;
			
			case 2:
				func_271();
				break;
			
			case 3:
				func_264();
				break;
			}
	}
}

void func_264()
{
	func_55(1);
	if (!func_270())
	{
		unk_0xCF33E56642B34516(500);
	}
	func_268(0);
	func_266(0);
	func_265(0);
}

void func_265(int iParam0)
{
	if (Local_213.f_171 != iParam0)
	{
		Local_213.f_171 = iParam0;
	}
}

void func_266(bool bParam0)
{
	if (bParam0)
	{
		if (!func_267())
		{
			unk_0xA1E7A40E1F56E511(&Global_1687880, 17);
		}
	}
	else if (func_267())
	{
		unk_0x3B76114EC84D5812(&Global_1687880, 17);
	}
}

bool func_267()
{
	return unk_0xA2BC31158C8CEFD2(Global_1687880, 17);
}

void func_268(bool bParam0)
{
	if (bParam0)
	{
		if (!func_269())
		{
			unk_0xA1E7A40E1F56E511(&Global_1687880, 18);
		}
	}
	else if (func_269())
	{
		unk_0x3B76114EC84D5812(&Global_1687880, 18);
	}
}

bool func_269()
{
	return unk_0xA2BC31158C8CEFD2(Global_1687880, 18);
}

bool func_270()
{
	return Global_1676879.f_443;
}

void func_271()
{
	if (func_269() || unk_0xCD97B9861557C025())
	{
		func_55(1);
		func_272(0);
		unk_0x3B76114EC84D5812(&(Local_213.f_5), 16);
		func_265(3);
	}
}

void func_272(bool bParam0)
{
	if (bParam0)
	{
		if (!func_60())
		{
			unk_0xA1E7A40E1F56E511(&Global_1687880, 19);
		}
	}
	else if (func_60())
	{
		unk_0x3B76114EC84D5812(&Global_1687880, 19);
	}
}

void func_273()
{
	if (unk_0x260395BA7F0C83CB())
	{
		if (func_7(&(Local_213.f_196), 3000, 0))
		{
			if (func_285())
			{
				if (unk_0xA2BC31158C8CEFD2(Global_4269615, 2) || func_7(&(Local_213.f_200), 8000, 0))
				{
					if (!unk_0xA2BC31158C8CEFD2(Global_4269615, 2))
					{
					}
					unk_0xCF33E56642B34516(500);
					func_274(unk_0x7C7787D2D7139A85(), 1, 0, 0);
					func_6(&(Local_213.f_196));
					func_6(&(Local_213.f_200));
					func_265(2);
				}
			}
			else if (func_7(&(Local_213.f_200), 15000, 0))
			{
				func_6(&(Local_213.f_196));
				func_6(&(Local_213.f_200));
				func_55(1);
				func_272(0);
				unk_0x3B76114EC84D5812(&(Local_213.f_5), 16);
				func_265(3);
			}
		}
	}
}

void func_274(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	var uVar26;
	int iVar27;
	
	if (bParam1)
	{
		if (unk_0x2841E8CEB102C657())
		{
			unk_0x81394B4515AF31C3(0);
		}
	}
	if (func_284())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!unk_0x393E9918BC37548A())
	{
		uVar0 = iParam2;
		unk_0x3D0DE925C0536CA0(iParam0, bParam1, uVar0);
	}
	else
	{
		bVar1 = iParam2 & 2 != false;
		bVar2 = iParam2 & 4 != false;
		bVar3 = iParam2 & 8 != false;
		bVar4 = iParam2 & 16 != false;
		bVar5 = iParam2 & 32 != false;
		bVar6 = iParam2 & 64 != false;
		bVar7 = iParam2 & 128 != false;
		bVar8 = iParam2 & 256 != false;
		bVar9 = iParam2 & 512 != false;
		bVar10 = iParam2 & 1024 != false;
		bVar11 = iParam2 & 2048 != false;
		bVar12 = iParam2 & 4096 != false;
		bVar13 = iParam2 & 8192 != false;
		bVar14 = iParam2 & 16384 != false;
		bVar15 = iParam2 & 32768 != false;
		bVar16 = iParam2 & 65536 != false;
		bVar17 = iParam2 & 131072 != false;
		bVar18 = iParam2 & 262144 != false;
		bVar19 = iParam2 & 524288 != false;
		bVar20 = iParam2 & 1048576 != false;
		bVar21 = iParam2 & 2097152 != false;
		bVar22 = iParam2 & 4194304 != false;
		bVar23 = iParam2 & 8388608 != false;
		bVar24 = iParam2 & 16777216 != false;
		if (!func_282())
		{
			bVar25 = false;
			if (bParam1 == 1)
			{
				bVar25 = true;
			}
			if (bVar15 == 0 && !bVar20)
			{
				bVar25 = true;
			}
			if (bVar9 == 1)
			{
				bVar25 = true;
			}
			if (bVar25)
			{
				return;
			}
		}
		if (bVar17)
		{
		}
		if (unk_0xD56C8C2B75BF9665(iParam0) && (unk_0xD699DB8EAB756F25(iParam0) || iParam3 == 1))
		{
			if (iParam3 && unk_0xF4B969E0807E76C7(unk_0x23625FE58BACEBFD(iParam0), 0))
			{
				return;
			}
			uVar26 = unk_0x23625FE58BACEBFD(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && unk_0x393E9918BC37548A())
				{
					unk_0xFBC7760B97C94CEE(1);
				}
				else if (bVar13 || (!func_94(unk_0x7C7787D2D7139A85(), 0) && !func_246()))
				{
					unk_0x2BBEC4B37B923F4B(uVar26, !bVar13, 0);
				}
				if (!bVar13)
				{
					if (unk_0x393E9918BC37548A() && !bVar18)
					{
						unk_0xFBC7760B97C94CEE(0);
					}
					Global_2424073[iParam0 /*421*/].f_244 = 0;
				}
			}
			if (bParam1)
			{
				func_279(0, 0, 0);
				if (bVar24)
				{
					unk_0x177A62AB5B680108();
				}
				if (!func_278(iVar26) && !unk_0xFAA29571D9280AC0(iVar26))
				{
					if (!bVar21)
					{
						unk_0x8C85E8C71AD74415(iVar26, true, 0);
					}
				}
				if (!unk_0xCA7317DE7E0F89E9(iVar26))
				{
					if (!bVar20)
					{
						unk_0x860A5CC30A0EF207(iVar26, false);
					}
					unk_0x9D3FE4786B8925D2(iVar26, 1);
				}
				else if (!bVar20)
				{
					unk_0x860A5CC30A0EF207(iVar26, false);
				}
				unk_0x6E712A176E3EEFA8(iVar26, true);
				unk_0x80DD2AE2084AED15(iParam0, 0);
				unk_0x39EC8D05FEE60520(iParam0, 0);
				if (unk_0x088441D41D80C5C5(iVar26) && unk_0xB9F75075D0B810BF(iVar26))
				{
					unk_0xF77E0D8A93ED5E86(iVar26);
				}
				unk_0x18CD1B73D89ABE21(iVar26, 1);
				if (unk_0xB3E4EBF4EFCF92BD(unk_0x7C7787D2D7139A85()) == 0)
				{
					func_277();
					func_276();
				}
				if (unk_0x88284A9044C97C3A())
				{
					if (!bVar22)
					{
					}
				}
				if (unk_0xC53766CB7176C7C8())
				{
				}
				Global_2424073[iParam0 /*421*/].f_245 = 0;
				if (!bVar23)
				{
					bVar2 = true;
				}
				if (Global_2405071.f_2670)
				{
					Global_2405071.f_2670 = 0;
				}
			}
			else
			{
				if (!func_278(iVar26) && !unk_0xFAA29571D9280AC0(iVar26))
				{
					if (!bVar21)
					{
						unk_0x8C85E8C71AD74415(iVar26, !bVar14, 0);
					}
					if (!unk_0xCA7317DE7E0F89E9(iVar26))
					{
						if (!bVar20)
						{
							unk_0x860A5CC30A0EF207(iVar26, bVar15);
						}
						if (!bVar15)
						{
							unk_0x9D3FE4786B8925D2(iVar26, 1);
						}
					}
					if (func_275(Global_4456448.f_190930))
					{
						unk_0x860A5CC30A0EF207(iVar26, true);
					}
				}
				if (Global_1312850)
				{
					bVar9 = false;
				}
				if (bVar9)
				{
					unk_0x80DD2AE2084AED15(iParam0, 0);
				}
				else
				{
					unk_0x80DD2AE2084AED15(iParam0, 1);
				}
				unk_0x6E712A176E3EEFA8(iVar26, bVar16);
				if (bVar2)
				{
					if (!unk_0x8597FB96A64B777C(iVar26) && !unk_0x5294582CE404D3F4(iVar26, 0))
					{
						unk_0x5BBDAD06F405ED2C(iVar26);
					}
				}
			}
			iVar27 = 0;
			if (bVar1)
			{
				iVar27 |= 2;
			}
			if (bVar2)
			{
				iVar27 |= 4;
			}
			if (bVar3)
			{
				iVar27 |= 8;
			}
			if (bVar4)
			{
				iVar27 |= 16;
			}
			if (bVar5)
			{
				iVar27 |= 32;
			}
			if (bVar6)
			{
				iVar27 |= 64;
			}
			if (bVar7)
			{
				iVar27 |= 128;
			}
			if (bVar8)
			{
				iVar27 |= 256;
			}
			if (bVar9)
			{
				iVar27 |= 512;
			}
			if (bVar10)
			{
				iVar27 |= 1024;
			}
			if (bVar11)
			{
				iVar27 |= 2048;
			}
			if (bVar12)
			{
				iVar27 |= 4096;
			}
			unk_0x3D0DE925C0536CA0(iParam0, bParam1, iVar27);
		}
	}
}

bool func_275(int iParam0)
{
	return iParam0 == 17;
}

void func_276()
{
	struct<3> Var0;
	
	Global_2437549.f_1232 = 0;
	Global_2437549.f_1233 = 0;
	Global_2437549.f_1234 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2437549.f_1239 = -1;
	Global_2437549.f_1240 = 0;
	Global_2405071.f_2681 = { Var0 };
}

void func_277()
{
	Global_2405071.f_692 = 0;
	Global_2405071.f_2724 = 0;
	Global_2405071.f_510 = 0;
	Global_2405071.f_598 = 0;
	Global_2424073[unk_0x7C7787D2D7139A85() /*421*/].f_207 = 0;
	Global_2405071.f_2679 = 0;
}

int func_278(int iParam0)
{
	int iVar0;
	
	if (unk_0x5294582CE404D3F4(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x411C065ADB822CD9(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_279(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xF4B969E0807E76C7(iParam1, 0))
	{
	}
	if (iParam0 == 1)
	{
		if (unk_0xD4B321D9096B01FC(iParam1))
		{
			if (unk_0x7FA2061748BA645E(iParam1))
			{
				if (!unk_0x645A04F62406C561(unk_0x7C7787D2D7139A85(), unk_0x74D4E16E179B8F53(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (iParam0 == 1)
			{
				func_281();
			}
			else if (!unk_0xA2BC31158C8CEFD2(Global_2359302.f_67, 1))
			{
				if (unk_0xA2BC31158C8CEFD2(Global_2359302.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						unk_0x58AF82C8FFCE212D(iVar1, Global_2359302.f_58[iVar1]);
						iVar1++;
					}
				}
				unk_0xA1E7A40E1F56E511(&(Global_2359302.f_67), 1);
			}
		}
		if (func_94(unk_0x7C7787D2D7139A85(), 0))
		{
			unk_0x1244983AF90581A1(iParam0, iParam1, 1);
		}
		else
		{
			unk_0x82383378B7F391D7(iParam0, iParam1);
		}
		unk_0x62F681DBBF12DD7F(iParam0, iParam1);
		func_280(joaat("mpply_is_char_spectating"), iParam0);
	}
}

void func_280(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x0EC7EA43028EE330(iVar0, iParam1, 1);
	}
}

void func_281()
{
	int iVar0;
	
	if (!unk_0xC2C832CF965AA6C1())
	{
		if (!unk_0xA2BC31158C8CEFD2(Global_2359302.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2359302.f_58[iVar0] = unk_0x328DC5757076B0D5(iVar0);
				iVar0++;
			}
			unk_0xA1E7A40E1F56E511(&(Global_2359302.f_67), 2);
			unk_0xA1E7A40E1F56E511(&(Global_2359302.f_67), 0);
		}
	}
}

int func_282()
{
	if (func_283() == 0)
	{
		return 1;
	}
	return 0;
}

int func_283()
{
	return Global_1312467.f_18;
}

int func_284()
{
	if (Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_35 && !Global_2449755.f_2846.f_214 == -1)
	{
		return 1;
	}
	return 0;
}

int func_285()
{
	if (unk_0x222F76006659B0EB(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_286()
{
	if (func_304())
	{
		if (unk_0x1EB14C6F68B8F915(2, 201) || unk_0x38CEC20C56D8586B(2, 201))
		{
			if (!func_285())
			{
				if (unk_0xBF28CCACDDFF5346())
				{
					func_272(1);
					func_105(-1);
					func_274(unk_0x7C7787D2D7139A85(), 0, 512, 0);
					unk_0x5800A2599806C837(500);
					func_302(1, -1);
					func_287(3, 1, 1, 0);
					func_8(&(Local_213.f_196), 0, 0);
					func_8(&(Local_213.f_200), 0, 0);
					func_265(1);
				}
			}
		}
	}
}

int func_287(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (Global_76577)
	{
		if ((iParam0 != 17 && iParam0 != 3) && iParam0 != 23)
		{
			return 0;
		}
		if (!unk_0xA2BC31158C8CEFD2(Global_4269615, 14))
		{
			if (iParam0 == 17)
			{
				unk_0xA1E7A40E1F56E511(&Global_4269615, 14);
				unk_0xA1E7A40E1F56E511(&Global_4269615, 16);
			}
			if (iParam0 == 3)
			{
				unk_0xA1E7A40E1F56E511(&Global_4269615, 14);
				unk_0xA1E7A40E1F56E511(&Global_4269615, 15);
			}
			if (iParam0 == 23)
			{
				unk_0xA1E7A40E1F56E511(&Global_4269615, 14);
				unk_0xA1E7A40E1F56E511(&Global_4269615, 27);
			}
		}
		if (Global_7363[iParam0 /*15*/].f_9 == 0)
		{
			func_299();
		}
		if (unk_0x222F76006659B0EB(Global_7363[iParam0 /*15*/].f_9) > 0)
		{
			unk_0x3B76114EC84D5812(&Global_4269615, 14);
			unk_0x3B76114EC84D5812(&Global_4269615, 16);
			unk_0x3B76114EC84D5812(&Global_4269615, 15);
			unk_0x3B76114EC84D5812(&Global_4269615, 27);
			return 1;
		}
		else
		{
			return 0;
		}
	}
	func_292();
	if (Global_19486.f_1 == 9)
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		if (func_59(0) == 1)
		{
			return 0;
		}
	}
	if (Global_19452 == 1)
	{
		return 0;
	}
	if (Global_19486.f_1 == 7)
	{
		return 0;
	}
	if (iParam1 == 1)
	{
	}
	if (!unk_0xAB2A82A2838B61B7(Global_19483))
	{
		if (unk_0x222F76006659B0EB(joaat("cellphone_flashhand")) == 0)
		{
			if (Global_19486.f_1 < 4)
			{
				func_291("cellphone_flashhand");
				if (unk_0x222F76006659B0EB(joaat("cellphone_flashhand")) == 0)
				{
					Global_19483 = unk_0xE81651AD79516E48("cellphone_flashhand", 1424);
				}
				unk_0x0915CE69760E0654("cellphone_flashhand");
			}
		}
	}
	while (!Global_19468)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_299();
	func_288();
	if (unk_0x222F76006659B0EB(Global_7363[iParam0 /*15*/].f_9) == 0)
	{
		Global_7962 = 0;
		Global_19486.f_1 = 7;
		func_291(&(Global_7363[iParam0 /*15*/].f_5));
		if (bParam3)
		{
			if (unk_0x222F76006659B0EB(Global_7363[iParam0 /*15*/].f_9) == 0)
			{
				Global_19484 = unk_0xE81651AD79516E48(&(Global_7363[iParam0 /*15*/].f_5), 4000);
			}
		}
		else if (unk_0x222F76006659B0EB(Global_7363[iParam0 /*15*/].f_9) == 0)
		{
			Global_19484 = unk_0xE81651AD79516E48(&(Global_7363[iParam0 /*15*/].f_5), 2552);
		}
		unk_0x0915CE69760E0654(&(Global_7363[iParam0 /*15*/].f_5));
		return 1;
	}
	return 1;
}

void func_288()
{
	if (Global_76577 == 0)
	{
		Global_7363[14 /*15*/].f_4 = -99;
		Global_7363[4 /*15*/].f_4 = -99;
		if (Global_2458994)
		{
			if (func_290(14))
			{
				func_289(2, "CELL_2", 2, "appInternet", 6, 1, 1, 0, 0);
				func_289(14, "CELL_29", 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
			else
			{
				func_289(14, "CELL_29", 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
		}
		else
		{
			func_289(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}
}

void func_289(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	StringCopy(&(Global_7363[iParam0 /*15*/]), sParam1, 16);
	Global_7363[iParam0 /*15*/].f_4 = iParam2;
	StringCopy(&(Global_7363[iParam0 /*15*/].f_5), sParam3, 16);
	Global_7363[iParam0 /*15*/].f_9 = unk_0xA8C462EF7D9DC564(sParam3);
	Global_7363[iParam0 /*15*/].f_10 = iParam4;
	Global_7363[iParam0 /*15*/].f_11 = iParam5;
	Global_7363[iParam0 /*15*/].f_12 = iParam6;
	Global_7363[iParam0 /*15*/].f_13 = iParam7;
	Global_7363[iParam0 /*15*/].f_14 = iParam8;
	if (Global_7363[iParam0 /*15*/].f_12 == 0)
	{
		Global_7363[iParam0 /*15*/].f_12 = 0;
	}
	if (Global_7363[iParam0 /*15*/].f_13 == 0)
	{
		Global_7363[iParam0 /*15*/].f_13 = 0;
	}
	if (Global_7363[iParam0 /*15*/].f_14 == 0)
	{
		Global_7363[iParam0 /*15*/].f_14 = 0;
	}
}

bool func_290(int iParam0)
{
	return Global_41396 == iParam0;
}

void func_291(char* sParam0)
{
	unk_0x42B7026D73D48D50(sParam0);
	while (!unk_0x5F74A266852104C3(sParam0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_292()
{
	if (func_290(14))
	{
		if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
		{
			if (unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()) == Global_111560.f_28045[0 /*29*/])
			{
				Global_19486 = 0;
			}
			else if (unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()) == Global_111560.f_28045[1 /*29*/])
			{
				Global_19486 = 1;
			}
			else if (unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()) == Global_111560.f_28045[2 /*29*/])
			{
				Global_19486 = 2;
			}
			else
			{
				Global_19486 = 0;
			}
		}
	}
	else
	{
		Global_19486 = func_293();
		if (Global_19486 == 145)
		{
			Global_19486 = 3;
		}
		if (Global_76577)
		{
			Global_19486 = 3;
		}
		if (Global_19486 > 3)
		{
			Global_19486 = 3;
		}
	}
}

var func_293()
{
	func_294();
	return Global_111560.f_2358.f_539.f_4321;
}

void func_294()
{
	int iVar0;
	
	if (unk_0xD4B321D9096B01FC(unk_0x0FA8183DAD2B3203()))
	{
		if (func_297(Global_111560.f_2358.f_539.f_4321) != unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()))
		{
			iVar0 = func_296(unk_0x0FA8183DAD2B3203());
			if (func_295(iVar0) && (!func_290(14) || Global_110511))
			{
				if (Global_111560.f_2358.f_539.f_4321 != iVar0 && func_295(Global_111560.f_2358.f_539.f_4321))
				{
					Global_111560.f_2358.f_539.f_4322 = Global_111560.f_2358.f_539.f_4321;
				}
				Global_111560.f_2358.f_539.f_4323 = iVar0;
				Global_111560.f_2358.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_111560.f_2358.f_539.f_4321 != 145)
			{
				Global_111560.f_2358.f_539.f_4323 = Global_111560.f_2358.f_539.f_4321;
			}
			return;
		}
	}
	Global_111560.f_2358.f_539.f_4321 = 145;
}

bool func_295(int iParam0)
{
	return iParam0 < 3;
}

int func_296(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD4B321D9096B01FC(iParam0))
	{
		iVar1 = unk_0x7F375072508F738F(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_297(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_297(int iParam0)
{
	if (func_295(iParam0))
	{
		return func_298(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_298(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

void func_299()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 34)
	{
		Global_7363[iVar0 /*15*/].f_4 = -99;
		iVar0++;
	}
	if (Global_76577 == 0)
	{
		iVar1 = 0;
		while (iVar2 < 161)
		{
			if (func_301(iVar2, Global_19486) == 1)
			{
				iVar1 = 1;
			}
			iVar2++;
		}
		func_289(7, "CELL_5", 0, "appEmail", 4, 1, 1, 0, 0);
		func_289(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_289(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		if ((Global_41396 == 15 && func_300(0) == 0) && Global_7361 == 0)
		{
			func_289(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_19667 = 0;
			Global_7362 = 255;
		}
		else
		{
			func_289(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_19667 = 1;
			Global_7362 = 42;
		}
		if (iVar1 == 1)
		{
			func_289(0, "CELL_0", 4, "appContacts", 27, 1, 1, 0, 0);
		}
		else
		{
			func_289(0, "CELL_0", 4, "appContacts", 5, 1, 1, 0, 0);
		}
		func_289(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_289(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_289(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		if (Global_111560.f_14046.f_89 == 1)
		{
			func_289(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		if (Global_111560.f_14046.f_88 == 1)
		{
			func_289(16, "CELL_25", 0, "appContacts", 40, 2, 1, 0, 0);
		}
		func_289(25, "CELL_14", -99, "appContacts", 17, 2, 1, 0, 0);
		func_289(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_289(11, "CELL_14", -99, "appContacts", 8, 2, 1, 0, 0);
		func_289(27, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_289(28, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_289(29, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
		func_289(30, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_289(31, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_289(32, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
	}
	else
	{
		func_289(7, "CELL_5", 0, "appMPEmail", 4, 1, 1, 0, 0);
		func_289(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_289(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_289(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_289(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		func_289(14, "CELL_29", 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
		func_289(0, "CELL_0", 2, "appContacts", 5, 1, 1, 0, 0);
		func_289(21, "JIPMP_QJ", 3, "AppJIPMP", 14, 1, 1, 0, 0);
		if (unk_0xA2BC31158C8CEFD2(Global_4269615, 4) == 1)
		{
			func_289(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		func_289(13, "CELL_35", -99, "appMPCopBackup", 39, 1, 1, 0, 0);
		func_289(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
		func_289(15, "CELL_18", -99, "appContacts", 8, 1, 1, 0, 0);
		func_289(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_289(5, "CELL_4", -99, "appContacts", 12, 2, 1, 0, 0);
		func_289(23, "CELL_15", 0, "appContacts", 17, 2, 1, 0, 0);
		func_289(24, "CELL_15", 1, "appContacts", 17, 2, 1, 0, 0);
		func_289(25, "CELL_15", 2, "appContacts", 17, 2, 1, 0, 0);
		func_289(26, "CELL_15", 3, "appContacts", 17, 2, 1, 0, 0);
		func_289(27, "CELL_15", 4, "appContacts", 17, 2, 1, 0, 0);
		func_289(28, "CELL_15", 5, "appContacts", 17, 2, 1, 0, 0);
		func_289(29, "CELL_15", 6, "appContacts", 17, 2, 1, 0, 0);
		func_289(30, "CELL_15", 7, "appContacts", 17, 2, 1, 0, 0);
		func_289(31, "CELL_15", 8, "appContacts", 17, 2, 1, 0, 0);
		func_289(32, "CELL_15", 9, "appContacts", 17, 2, 1, 0, 0);
		func_289(33, "CELL_15", 10, "appContacts", 17, 2, 1, 0, 0);
		if (!unk_0xA2BC31158C8CEFD2(Global_4269615, 4) == 1)
		{
			if (Global_1573923)
			{
				func_289(23, "CELL_CIRCBREAK", 8, "AppVLSI", 54, 1, 1, 0, 0);
			}
			else if (unk_0xA2BC31158C8CEFD2(Global_4269615, 20) == 1)
			{
				func_289(23, "CELL_SIGHTS", 8, "AppSettings", 59, 1, 1, 0, 0);
			}
			else if (unk_0xA2BC31158C8CEFD2(Global_4269615, 22) == 1)
			{
				func_289(23, "CELL_EXTRACT", 8, "AppExtraction", 58, 1, 1, 0, 0);
			}
			else if (unk_0xA2BC31158C8CEFD2(Global_4269615, 26) == 1)
			{
				func_289(23, "CELL_SECHACK", 8, "AppSecuroHack", 57, 1, 1, 0, 0);
			}
		}
		if ((((unk_0xA2BC31158C8CEFD2(Global_4269615, 4) == 0 && Global_1573923 == 0) && unk_0xA2BC31158C8CEFD2(Global_4269615, 20) == 0) && unk_0xA2BC31158C8CEFD2(Global_4269615, 22) == 0) && unk_0xA2BC31158C8CEFD2(Global_4269615, 26) == 0)
		{
			func_289(23, "CELL_BOSSAGE", 8, "appMPBossAgency", 57, 1, 1, 0, 0);
		}
	}
}

bool func_300(bool bParam0)
{
	if (!bParam0 && unk_0x222F76006659B0EB(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xA2BC31158C8CEFD2(Global_76825, 0);
}

int func_301(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0 /*29*/].f_19[iParam1];
}

void func_302(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_102(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_22350.f_8385)
	{
		unk_0x129AB650651225C5(15);
		Global_22350.f_8385 = 0;
	}
	unk_0xF3F61F23853206CB(0f);
	if (Global_22350.f_5628[iVar0])
	{
		unk_0xA95AA80044081B2A(9, 0);
		Global_22350.f_5628[iVar0] = 0;
	}
	if (Global_22350.f_5614[iVar0])
	{
		unk_0xD73CEE901CAB1716("CommonMenu");
		Global_22350.f_5614[iVar0] = 0;
	}
	if (Global_22350.f_5621[iVar0])
	{
		unk_0xD73CEE901CAB1716("MPShopSale");
		Global_22350.f_5621[iVar0] = 0;
	}
	if (bParam0)
	{
		func_303(&(Global_22350.f_5660[iVar0 /*10*/]));
		Global_22350.f_5721[iVar0] = 0;
	}
	else
	{
		Global_22350.f_5721[iVar0] = 0;
	}
}

void func_303(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0x08EA887200715AD9(*uParam0))
		{
			unk_0x749CA887CB0AFEC9(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_304()
{
	if (func_60())
	{
		return 0;
	}
	if (unk_0xCD97B9861557C025())
	{
		return 0;
	}
	if ((func_152(0) || func_151()) || unk_0xB9AB61E108CF483B())
	{
		func_6(&(Local_213.f_204));
		func_8(&(Local_213.f_204), 0, 0);
		unk_0x3B76114EC84D5812(&(Local_213.f_5), 16);
		func_81();
		return 0;
	}
	else if (func_10(&(Local_213.f_204)))
	{
		if (!func_7(&(Local_213.f_204), 2000, 0))
		{
			return 0;
		}
		else
		{
			unk_0x3B76114EC84D5812(&(Local_213.f_5), 16);
			func_6(&(Local_213.f_204));
		}
	}
	if (func_147(unk_0x7C7787D2D7139A85()))
	{
		return 0;
	}
	return 1;
}

void func_305()
{
	if (func_306())
	{
		if (unk_0x8A7BBB98FFB32893(Local_213.f_121) && !unk_0xF4B969E0807E76C7(unk_0x833BB45D35E36889(Local_213.f_121), 0))
		{
			if (unk_0xF42AC9E0924DC59B(Local_213.f_121))
			{
				if (!unk_0xA2BC31158C8CEFD2(Local_213.f_5, 25))
				{
					unk_0x860A5CC30A0EF207(unk_0x833BB45D35E36889(Local_213.f_121), true);
					unk_0xA1E7A40E1F56E511(&(Local_213.f_5), 25);
				}
			}
			else
			{
				unk_0x4DB32D0662E0696B(Local_213.f_121);
			}
		}
	}
	else if (unk_0xA2BC31158C8CEFD2(Local_213.f_5, 25))
	{
		if (unk_0x8A7BBB98FFB32893(Local_213.f_121) && !unk_0xF4B969E0807E76C7(unk_0x833BB45D35E36889(Local_213.f_121), 0))
		{
			if (unk_0xF42AC9E0924DC59B(Local_213.f_121))
			{
				unk_0x860A5CC30A0EF207(unk_0x833BB45D35E36889(Local_213.f_121), false);
				unk_0x3B76114EC84D5812(&(Local_213.f_5), 25);
			}
			else
			{
				unk_0x4DB32D0662E0696B(Local_213.f_121);
			}
		}
	}
}

int func_306()
{
	if (func_147(unk_0x7C7787D2D7139A85()))
	{
		if (unk_0xA2BC31158C8CEFD2(Global_2530259, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_307()
{
	int iVar0;
	
	if (func_27())
	{
		Global_1687880.f_1 = 0;
	}
	if (func_311() || func_176())
	{
		if (!func_10(&(Local_213.f_176)))
		{
			func_8(&(Local_213.f_176), 0, 0);
		}
		else if (func_7(&(Local_213.f_176), Global_1687880.f_1, 0) || func_176())
		{
			func_6(&(Local_213.f_174));
			if (func_27())
			{
				if (func_25(unk_0x0FA8183DAD2B3203()))
				{
					unk_0x4F13F3CA0BEA7327(unk_0x0FA8183DAD2B3203(), Local_213.f_112, 72, 0.5f, 1, 0, 1065353216);
				}
				else
				{
					unk_0x8C9274F91C8D4239(Local_213.f_112, 72, 0.5f, 1, 0, 1065353216, 0);
				}
				unk_0x9EDF0FD0707786D3(0, 300, 200);
				unk_0x5CD902263A2E9D7F(Local_213.f_121, 1);
				unk_0x177A62AB5B680108();
				iVar0 = unk_0x833BB45D35E36889(Local_213.f_121);
				unk_0x377C9F2989832369(&iVar0);
				unk_0xA1E7A40E1F56E511(&(Local_213.f_6), 2);
			}
			if (func_18())
			{
				func_310(1);
				if (Local_213.f_25 == 0)
				{
					func_308(6, 0, 0);
				}
				else
				{
					func_308(5, 0, 0);
				}
			}
			func_353(1);
			func_352(4);
		}
	}
	else if (func_10(&(Local_213.f_176)))
	{
		func_186(&(Local_213.f_176), 0, 0);
	}
}

void func_308(int iParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	float fVar17;
	float fVar18;
	
	StringCopy(&cVar0, func_309(iParam0), 64);
	iVar16 = 5;
	if (bParam1)
	{
		iVar16 = 69;
	}
	fVar17 = 8f;
	fVar18 = -8f;
	Local_213.f_78 = unk_0x7A2D5FD0FD8749D9(Local_213.f_115, 0f, 0f, Local_213.f_81, 2, iParam2, bParam1, 1065353216, 0, 1065353216);
	unk_0x701B83BD92AC8A8E(unk_0x0FA8183DAD2B3203(), Local_213.f_78, Local_213.f_120, &cVar0, fVar17, fVar18, iVar16, 0, 1148846080, 0);
	if (iParam0 == 0)
	{
		if (unk_0x8A7BBB98FFB32893(Local_213.f_121))
		{
			StringConCat(&cVar0, "_DRONE", 64);
			unk_0xC42EC06FBBE2BC1E(unk_0xAEA6D4EC961DFA03(Local_213.f_121), Local_213.f_78, Local_213.f_120, &cVar0, fVar17, fVar18, 8);
		}
	}
	StringCopy(&cVar0, func_309(iParam0), 64);
	StringConCat(&cVar0, "_PHONE", 64);
	if (unk_0x8A7BBB98FFB32893(Local_213.f_122))
	{
		unk_0xAF87685A609CD981(unk_0xAEA6D4EC961DFA03(Local_213.f_122), &cVar0, Local_213.f_120, fVar17, bParam1, iParam2, 0, 0f, 0);
		unk_0x7DC20B8D2FDE9E56(unk_0xAEA6D4EC961DFA03(Local_213.f_122));
	}
	unk_0xFE38E793F7E4AD65(Local_213.f_78);
}

char* func_309(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "ENTER";
		
		case 1:
			return "BASE";
		
		case 2:
			return "USE_01";
		
		case 3:
			return "USE_02";
		
		case 4:
			return "USE_03";
		
		case 5:
			return "FAIL";
		
		case 6:
			return "EXIT";
		
		default:
	}
	return "";
}

void func_310(bool bParam0)
{
	int iVar0;
	
	iVar0 = unk_0xE8EC5AFFC564CC19(iVar0);
	if (unk_0xB50E39CA0A3E6020(iVar0))
	{
		unk_0x751BBD3BC1960CFB(iVar0);
		unk_0x6E567C25E3028753(iVar0);
		iVar0 = -1;
	}
	else if (bParam0)
	{
		if (func_25(unk_0x0FA8183DAD2B3203()))
		{
			unk_0xC6612209077465DD(unk_0x0FA8183DAD2B3203());
		}
	}
}

int func_311()
{
	if ((unk_0x8A7BBB98FFB32893(Local_213.f_121) && unk_0xF4B969E0807E76C7(unk_0x833BB45D35E36889(Local_213.f_121), 0)) && !unk_0xA2BC31158C8CEFD2(Local_213.f_5, 2))
	{
		return 1;
	}
	if (Local_213.f_11 == 2)
	{
		Local_213.f_25 = 1;
		return 1;
	}
	if (unk_0xA2BC31158C8CEFD2(Local_213.f_5, 1))
	{
		return 1;
	}
	if (func_320())
	{
		Local_213.f_25 = 5;
		return 1;
	}
	if (func_119() && func_313())
	{
		Local_213.f_25 = 5;
		return 1;
	}
	if (func_18())
	{
		if (func_313())
		{
			Local_213.f_25 = 5;
			return 1;
		}
	}
	if (unk_0xA2BC31158C8CEFD2(Local_213.f_5, 2))
	{
		Local_213.f_25 = 4;
		return 1;
	}
	if (func_159())
	{
		if (!func_10(&(Local_213.f_184)))
		{
			func_8(&(Local_213.f_184), 0, 0);
		}
		else if (func_7(&(Local_213.f_184), 3000, 0))
		{
			Local_213.f_25 = 0;
			return 1;
		}
	}
	if (unk_0xA2BC31158C8CEFD2(Local_213.f_5, 7))
	{
		Local_213.f_25 = 0;
		return 1;
	}
	if (unk_0x8A7BBB98FFB32893(Local_213.f_121))
	{
		if (unk_0xE294A1321110B3E9(unk_0x833BB45D35E36889(Local_213.f_121)) || func_183(unk_0xAEA6D4EC961DFA03(Local_213.f_121), 0))
		{
			Local_213.f_25 = 3;
			return 1;
		}
	}
	if (!func_119() && !func_312())
	{
		if (Local_213.f_112.f_2 >= func_139())
		{
			Local_213.f_25 = 5;
			return 1;
		}
	}
	return 0;
}

bool func_312()
{
	return unk_0xA2BC31158C8CEFD2(Global_1687880.f_2, 0);
}

int func_313()
{
	struct<3> Var0;
	int iVar3;
	
	if (func_319())
	{
		return 0;
	}
	if (func_15(unk_0x7C7787D2D7139A85(), 1, 1))
	{
		if (unk_0x8A7BBB98FFB32893(Local_213.f_121) && !unk_0xF4B969E0807E76C7(unk_0x833BB45D35E36889(Local_213.f_121), 0))
		{
			if (func_119())
			{
				if (unk_0xD4B321D9096B01FC(func_318()) && !unk_0xF4B969E0807E76C7(func_318(), 0))
				{
					Var0 = { unk_0xACE5E491FC1B0D37(func_318(), 1) };
				}
			}
			else if (func_17())
			{
				if (!func_18())
				{
					iVar3 = func_314(Global_2424073[unk_0x7C7787D2D7139A85() /*421*/].f_309.f_8);
					switch (iVar3)
					{
						case 128:
							Var0 = { -245.64f, 6210.96f, 35.94f };
							break;
						
						case 129:
							Var0 = { 1695.88f, 4783.87f, 47.02f };
							break;
						
						case 130:
							Var0 = { -115.15f, -1771.65f, 38.86f };
							break;
						
						case 131:
							Var0 = { -600.96f, 280.47f, 87.04f };
							break;
						
						case 132:
							Var0 = { -1269.72f, -304.09f, 40f };
							break;
						
						case 133:
							Var0 = { 758.46f, -814.57f, 30.3f };
							break;
					}
				}
				else
				{
					Var0 = { unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1) };
				}
			}
			else
			{
				Var0 = { unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1) };
			}
			if (func_25(unk_0x833BB45D35E36889(Local_213.f_121)))
			{
				Local_213.f_83 = func_136(unk_0x833BB45D35E36889(Local_213.f_121), Var0, 1);
				if (Local_213.f_83 > func_139())
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_314(int iParam0)
{
	int iVar0;
	
	if (iParam0 != func_16())
	{
		iVar0 = func_317(iParam0);
		if (iVar0 != 0)
		{
			return func_315(iVar0);
		}
	}
	return -1;
}

int func_315(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 136)
	{
		if (func_14(iVar0) == 17)
		{
			if (func_316(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_316(int iParam0)
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

int func_317(int iParam0)
{
	if (iParam0 != func_16())
	{
		return Global_1590446[iParam0 /*871*/].f_273.f_389;
	}
	return 0;
}

int func_318()
{
	if (Global_1590293 != func_16())
	{
		if (!func_37(Global_1590293))
		{
			if (unk_0xD4B321D9096B01FC(Global_1366586))
			{
				return Global_1366586;
			}
			if (unk_0xD4B321D9096B01FC(Global_1694200[Global_1590293]))
			{
				return Global_1694200[Global_1590293];
			}
		}
	}
	return -1;
}

bool func_319()
{
	return unk_0xA2BC31158C8CEFD2(Global_1687880, 6);
}

int func_320()
{
	float fVar0;
	
	if (unk_0x8A7BBB98FFB32893(Local_213.f_121) && !unk_0xF4B969E0807E76C7(unk_0x833BB45D35E36889(Local_213.f_121), 0))
	{
		if (unk_0xDF956C4106F1E9C5(Local_213.f_112, &fVar0, 1, 0))
		{
			Local_213.f_84 = (Local_213.f_112.f_2 - fVar0);
			if (Local_213.f_84 > IntToFloat(Global_262145.f_24137))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_321()
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	float fVar12;
	int iVar13;
	int iVar14;
	float fVar15;
	float fVar16;
	
	if (!func_27())
	{
		return;
	}
	if ((unk_0x8A7BBB98FFB32893(Local_213.f_121) && !unk_0xF4B969E0807E76C7(unk_0x833BB45D35E36889(Local_213.f_121), 0)) && unk_0xD2652A8A890B29BA(Local_213.f_131))
	{
		if (unk_0xF42AC9E0924DC59B(Local_213.f_121))
		{
			Var0 = { unk_0x762900E9B9F74FD4(unk_0x833BB45D35E36889(Local_213.f_121), 2) };
			Var0 = { (Var0.f_0 + 180f), (-Var0.f_1 + 180f), Var0.f_2 };
			unk_0x92B8564A1A66EF0A(Local_213.f_131, Var0, 2);
			if (unk_0xA2BC31158C8CEFD2(Local_213.f_5, 1) || func_176())
			{
				return;
			}
			Var3 = { func_324(func_325()) };
			Var6 = { func_324(func_323(func_325())) };
			Var9 = { func_322(Var3, Var6) };
			fVar12 = 5f;
			if (!unk_0x59415A8719336539(0))
			{
				if (unk_0x0B7B056651B415AB(2, 208) != 0f)
				{
					iVar13 = 1;
				}
				if (unk_0x0B7B056651B415AB(2, 207) != 0f)
				{
					iVar14 = 1;
				}
			}
			else
			{
				if (unk_0x0B7B056651B415AB(2, 209) != 0f)
				{
					iVar13 = 1;
				}
				if (unk_0x0B7B056651B415AB(2, 210) != 0f)
				{
					iVar14 = 1;
				}
			}
			if (iVar13 && !func_240())
			{
				Local_213.f_82 = 140f;
				fVar12 = 7f;
			}
			else if (iVar14 && !func_240())
			{
				Local_213.f_82 = 60f;
				fVar12 = 3.5f;
			}
			else
			{
				Local_213.f_82 = 100f;
			}
			if (unk_0x59415A8719336539(0))
			{
				if (Local_213[2] >= 127)
				{
					Local_213[2] = 127;
				}
				else if (Local_213[2] <= -127)
				{
					Local_213[2] = -127;
				}
				if (Local_213[0] >= 127)
				{
					Local_213[0] = 127;
				}
				else if (Local_213[0] <= -127)
				{
					Local_213[0] = -127;
				}
			}
			if (Local_213[2] > 0 || Local_213[0] > 0)
			{
				if (Local_213[2] > 0)
				{
					fVar15 = -(fVar12 / (127f / IntToFloat(Local_213[2])));
				}
				else
				{
					fVar15 = -(fVar12 / (127f / IntToFloat(Local_213[0])));
				}
				unk_0x0977D05D452C9828(unk_0x833BB45D35E36889(Local_213.f_121), 0, Var9 * Vector(fVar15, fVar15, fVar15), 0f, -1.2f, 0f, 0, 1, 1, 1, 0, 1);
				unk_0xEF4C0B3A167109AB(unk_0x833BB45D35E36889(Local_213.f_121), 0, Var3 * Vector(-Local_213.f_82, -Local_213.f_82, -Local_213.f_82), 0, 1, 1, 0);
				unk_0x0977D05D452C9828(unk_0x833BB45D35E36889(Local_213.f_121), 0, 0f, 0f, 1f, 0f, -1.2f, 0f, 0, 1, 1, 1, 0, 1);
			}
			else if (Local_213[2] < 0 || Local_213[0] < 0)
			{
				if (Local_213[0] < 0)
				{
					fVar16 = -(fVar12 / (127f / IntToFloat(Local_213[0])));
				}
				else
				{
					fVar16 = -(fVar12 / (127f / IntToFloat(Local_213[2])));
				}
				unk_0xEF4C0B3A167109AB(unk_0x833BB45D35E36889(Local_213.f_121), 0, Var3 * Vector(-Local_213.f_82, -Local_213.f_82, -Local_213.f_82), 0, 1, 1, 0);
				unk_0x0977D05D452C9828(unk_0x833BB45D35E36889(Local_213.f_121), 0, Var9 * Vector(fVar16, fVar16, fVar16), 0f, -1.2f, 0f, 0, 1, 1, 1, 0, 1);
				unk_0x0977D05D452C9828(unk_0x833BB45D35E36889(Local_213.f_121), 0, 0f, 0f, 1f, 0f, -1.2f, 0f, 0, 1, 1, 1, 0, 1);
			}
			else
			{
				unk_0xEF4C0B3A167109AB(unk_0x833BB45D35E36889(Local_213.f_121), 0, Var3 * Vector(-Local_213.f_82, -Local_213.f_82, -Local_213.f_82), 0, 1, 1, 0);
			}
		}
		else
		{
			unk_0x4DB32D0662E0696B(Local_213.f_121);
		}
	}
}

Vector3 func_322(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_1 * Param3.f_2) - (Param0.f_2 * Param3.f_1)), ((Param0.f_2 * Param3.f_0) - (Param0.f_0 * Param3.f_2)), ((Param0.f_0 * Param3.f_1) - (Param0.f_1 * Param3.f_0));
}

Vector3 func_323(struct<2> Param0, var uParam2)
{
	struct<3> Var0;
	
	Var0 = { unk_0x0BADBFA3B172435F(Param0.f_1), (-unk_0x0BADBFA3B172435F(Param0.f_0) * unk_0xD0FFB162F40A139C(Param0.f_1)), (unk_0xD0FFB162F40A139C(Param0.f_0) * unk_0xD0FFB162F40A139C(Param0.f_1)) };
	return Var0;
}

Vector3 func_324(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = unk_0x652D2EEEF1D3E62C(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

Vector3 func_325()
{
	struct<3> Var0;
	
	Var0 = { 0f, 1f, 0f };
	func_326(&Var0);
	return Var0;
}

void func_326(var uParam0)
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	
	fVar0 = unk_0xD0FFB162F40A139C(0f);
	fVar1 = unk_0x0BADBFA3B172435F(0f);
	Var2.f_0 = *uParam0;
	Var2.f_1 = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	Var2.f_2 = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { Var2 };
	fVar0 = unk_0xD0FFB162F40A139C(0f);
	fVar1 = unk_0x0BADBFA3B172435F(0f);
	Var2.f_0 = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	Var2.f_1 = uParam0->f_1;
	Var2.f_2 = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { Var2 };
	fVar0 = unk_0xD0FFB162F40A139C(0f);
	fVar1 = unk_0x0BADBFA3B172435F(0f);
	Var2.f_0 = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	Var2.f_1 = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	Var2.f_2 = uParam0->f_2;
	*uParam0 = { Var2 };
}

void func_327()
{
	float fVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	float fVar4;
	struct<3> Var5;
	struct<3> Var8;
	struct<3> Var11;
	struct<3> Var14;
	float fVar17;
	float fVar18;
	int iVar19;
	int iVar20;
	float fVar21;
	float fVar22;
	float fVar23;
	struct<3> Var24;
	float fVar27;
	float fVar28;
	float fVar29;
	float fVar30;
	float fVar31;
	float fVar32;
	float fVar33;
	float fVar34;
	struct<3> Var35;
	float fVar38;
	float fVar39;
	float fVar40;
	float fVar41;
	
	if (func_27())
	{
		return;
	}
	if ((unk_0x8A7BBB98FFB32893(Local_213.f_121) && !unk_0xF4B969E0807E76C7(unk_0x833BB45D35E36889(Local_213.f_121), 0)) && unk_0xD2652A8A890B29BA(Local_213.f_131))
	{
		if (unk_0xF42AC9E0924DC59B(Local_213.f_121))
		{
			fVar0 = 0f;
			if (!func_29() && !func_9())
			{
				if (!func_231())
				{
					if (func_10(&(Local_213.f_182)))
					{
						iVar1 = Global_262145.f_24135;
						if (func_9())
						{
							iVar1 = (iVar1 / 3);
						}
						if (!func_7(&(Local_213.f_182), iVar1, 0))
						{
							iVar2 = (100 * unk_0x25A1A0BF87F74E56(unk_0x675EE3FED67AA436(unk_0x169A8AC9F93C2727(), Local_213.f_182)));
							Local_213.f_19 = (iVar2 / iVar1);
						}
						else
						{
							if (func_25(Local_213.f_123))
							{
								unk_0x01DF2D3988024DB4(Local_213.f_123, unk_0x833BB45D35E36889(Local_213.f_121), -1, 0f, 0f, -0.25f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							}
							Local_213.f_19 = 100;
							func_6(&(Local_213.f_182));
							if (!unk_0xDE3C2FB26058823A(Local_213.f_42))
							{
								unk_0xCFF6AB47B7B014FF(Local_213.f_42);
								unk_0x0972EA9E8102C153(Local_213.f_42);
								Local_213.f_42 = -1;
							}
						}
					}
					if (!unk_0x59415A8719336539(0))
					{
						bVar3 = unk_0x80E2BA2BD5AB1A3F(0, 209);
					}
					else
					{
						bVar3 = unk_0x80E2BA2BD5AB1A3F(0, 203);
					}
					if ((((bVar3 && Local_213.f_19 == 100) && !func_240()) && !func_60()) && func_143())
					{
						fVar0 = 120f;
						if (func_9())
						{
							fVar0 = 110f;
						}
						else if (func_17())
						{
							fVar0 = 49f;
						}
						if (IntToFloat(Local_213[1]) != 0f)
						{
							func_331(1);
						}
						else
						{
							func_331(0);
						}
						unk_0x3E5A3FD805488EB9("RaceTurbo", 0, 0);
						func_8(&(Local_213.f_180), 0, 0);
						func_330(1);
						if (unk_0xDE3C2FB26058823A(Local_213.f_41))
						{
							Local_213.f_41 = unk_0x04B8CCFB93858A27();
							unk_0x9964F5BBD9415AB7(Local_213.f_41, "HUD_Boost_Loop", Local_213.f_119, 1);
						}
					}
				}
				else
				{
					fVar0 = 120f;
					if (func_9())
					{
						fVar0 = 115f;
					}
					else if (func_17())
					{
						fVar0 = 49f;
					}
					if (unk_0xD2652A8A890B29BA(Local_213.f_131))
					{
						if (!unk_0xF19B1386145597A1(Local_213.f_131))
						{
							unk_0x678A9FFAA65D1846(Local_213.f_131, "DRONE_BOOST_SHAKE", 1065353216);
							unk_0xBE6444D037FD0987(Local_213.f_131, 0.15f);
						}
					}
					if (func_10(&(Local_213.f_180)))
					{
						if (func_7(&(Local_213.f_180), Global_262145.f_24134, 0))
						{
							Local_213.f_19 = 0;
							func_331(0);
							func_330(0);
							func_6(&(Local_213.f_182));
							func_8(&(Local_213.f_182), 0, 0);
							unk_0x0E548D25BBAC1AA4(Local_213.f_131, 1);
							unk_0x6A36089E4B3E4774(0);
							unk_0xF530F03252D7AEE0("RaceTurbo");
							func_6(&(Local_213.f_180));
							if (!unk_0xDE3C2FB26058823A(Local_213.f_41))
							{
								unk_0xCFF6AB47B7B014FF(Local_213.f_41);
								unk_0x0972EA9E8102C153(Local_213.f_41);
								Local_213.f_41 = -1;
							}
							if (unk_0xDE3C2FB26058823A(Local_213.f_42))
							{
								Local_213.f_42 = unk_0x04B8CCFB93858A27();
								unk_0x9964F5BBD9415AB7(Local_213.f_42, "HUD_Boost_Recharge_Loop", Local_213.f_119, 1);
							}
						}
						else
						{
							fVar4 = (100f / (unk_0xBBDA792448DB5A89(Global_262145.f_24134) / IntToFloat(unk_0x675EE3FED67AA436(unk_0x169A8AC9F93C2727(), Local_213.f_180))));
							Local_213.f_19 = (100 - unk_0xF2DB717A73826179(fVar4));
							unk_0x9EDF0FD0707786D3(0, Global_262145.f_24134, 255);
						}
					}
				}
			}
			Var5 = { Local_213.f_112 };
			Var8 = { unk_0x762900E9B9F74FD4(unk_0x833BB45D35E36889(Local_213.f_121), 2) };
			Var8 = { (Var8.f_0 + 180f), (-Var8.f_1 + 180f), Var8.f_2 };
			unk_0x92B8564A1A66EF0A(Local_213.f_131, Var8, 2);
			if (unk_0xA2BC31158C8CEFD2(Local_213.f_5, 1) || func_176())
			{
				return;
			}
			Var11 = { func_324(func_325()) };
			Var14 = { func_324(func_323(func_325())) };
			unk_0xDF956C4106F1E9C5(Var5, &fVar17, 1, 0);
			if (!func_329())
			{
				if (Local_213.f_9 == 2 || (Var5.f_2 - fVar17) < 2f)
				{
					fVar18 = 24f;
					if (Local_213[1] != 0)
					{
						unk_0x572062A62138FBA2(2, 207, 1);
					}
					if (unk_0x0B7B056651B415AB(2, 207) != 0f || Local_213[1] != 0)
					{
						if ((Var5.f_2 - fVar17) < 0.5f || unk_0x0B7B056651B415AB(2, 207) != 0f)
						{
							fVar18 = 24f;
						}
						else
						{
							fVar18 = 10f;
						}
					}
					else
					{
						fVar18 = 3f;
					}
					unk_0xEF4C0B3A167109AB(unk_0x833BB45D35E36889(Local_213.f_121), 0, 0f, 0f, fVar18, 0, 1, 1, 0);
				}
			}
			if (unk_0x59415A8719336539(0))
			{
				if (Local_213[2] >= 127)
				{
					Local_213[2] = 127;
				}
				else if (Local_213[2] <= -127)
				{
					Local_213[2] = -127;
				}
				if (Local_213[0] >= 127)
				{
					Local_213[0] = 127;
				}
				else if (Local_213[0] <= -127)
				{
					Local_213[0] = -127;
				}
			}
			if (!unk_0x59415A8719336539(0))
			{
				if (unk_0x0B7B056651B415AB(2, 208) != 0f)
				{
					iVar19 = 1;
				}
				if (unk_0x0B7B056651B415AB(2, 207) != 0f)
				{
					iVar20 = 1;
				}
			}
			else
			{
				if (unk_0x0B7B056651B415AB(2, 209) != 0f)
				{
					iVar19 = 1;
				}
				if (unk_0x0B7B056651B415AB(2, 210) != 0f)
				{
					iVar20 = 1;
				}
			}
			if (((iVar19 && func_328()) && !func_60()) || (func_231() && !func_230()))
			{
				fVar23 = Local_213.f_82;
				if (func_142())
				{
					fVar23 = 5f;
				}
				if (func_29() || func_9())
				{
					fVar22 = 10f;
				}
				if (func_231() && !func_230())
				{
					if (!unk_0x59415A8719336539(0))
					{
						fVar21 = ((fVar23 + fVar0) / (1f / unk_0x0B7B056651B415AB(2, 208)));
					}
					else
					{
						fVar21 = ((fVar23 + fVar0) / (1f / unk_0x0B7B056651B415AB(2, 209)));
					}
				}
				else if (!unk_0x59415A8719336539(0))
				{
					fVar21 = ((fVar23 + fVar22) / (1f / unk_0x0B7B056651B415AB(2, 208)));
				}
				else
				{
					fVar21 = ((fVar23 + fVar22) / (1f / unk_0x0B7B056651B415AB(2, 209)));
				}
				Var24 = { Var14 * Vector(fVar21, fVar21, fVar21) };
				if (Var24.f_2 > 149f)
				{
					Var24.f_2 = 149f;
				}
				unk_0xEF4C0B3A167109AB(unk_0x833BB45D35E36889(Local_213.f_121), 0, Var24, 0, 1, 1, 0);
			}
			else if (((iVar20 && !func_60()) && func_328()) && !func_240())
			{
				if (func_29() || func_9())
				{
					fVar28 = 10f;
				}
				if (!unk_0x59415A8719336539(0))
				{
					fVar27 = ((Local_213.f_82 + fVar28) / (1f / unk_0x0B7B056651B415AB(2, 207)));
				}
				else
				{
					fVar27 = ((Local_213.f_82 + fVar28) / (1f / unk_0x0B7B056651B415AB(2, 210)));
				}
				unk_0xEF4C0B3A167109AB(unk_0x833BB45D35E36889(Local_213.f_121), 0, Var14 * Vector(-fVar27, -fVar27, -fVar27), 0, 1, 1, 0);
			}
			if (((Local_213[1] > 0 && !func_231()) && !func_240()) && !func_60())
			{
				if (func_29())
				{
					fVar31 = 40f;
				}
				else
				{
					fVar31 = 6.4f;
				}
				fVar29 = (Local_213.f_82 / (127f / IntToFloat(Local_213[1])));
				fVar30 = (fVar31 / (127f / IntToFloat(Local_213[1])));
				unk_0xEF4C0B3A167109AB(unk_0x833BB45D35E36889(Local_213.f_121), 0, Var11 * Vector(fVar29, fVar29, fVar29), 0, 1, 1, 0);
				unk_0xEF4C0B3A167109AB(unk_0x833BB45D35E36889(Local_213.f_121), 0, 0f, 0f, fVar30, 0, 1, 1, 0);
			}
			else if ((((Local_213[1] < 0 && !func_231()) && !func_240()) && !func_60()) || (func_231() && func_230()))
			{
				if (func_231() && func_230())
				{
					fVar34 = 50f;
					if (func_9())
					{
						fVar32 = (Local_213.f_82 / -1f);
					}
					else
					{
						fVar32 = ((Local_213.f_82 + fVar0) / -1f);
					}
					fVar33 = (fVar34 / -1f);
				}
				else
				{
					if (func_29() || func_9())
					{
						fVar34 = 40f;
					}
					else if (func_17())
					{
						fVar34 = 30f;
					}
					else
					{
						fVar34 = 6.4f;
					}
					if (func_9())
					{
						fVar32 = (Local_213.f_82 / (127f / IntToFloat(Local_213[1])));
					}
					else
					{
						fVar32 = ((Local_213.f_82 + fVar0) / (127f / IntToFloat(Local_213[1])));
					}
					fVar33 = (fVar34 / (127f / IntToFloat(Local_213[1])));
				}
				if (func_9())
				{
					if (!func_230())
					{
						unk_0xEF4C0B3A167109AB(unk_0x833BB45D35E36889(Local_213.f_121), 0, 0f, 0f, -fVar33, 0, 1, 1, 0);
						unk_0xEF4C0B3A167109AB(unk_0x833BB45D35E36889(Local_213.f_121), 0, Var11 * Vector(fVar32, fVar32, fVar32), 0, 1, 1, 0);
					}
					else
					{
						unk_0xEF4C0B3A167109AB(unk_0x833BB45D35E36889(Local_213.f_121), 0, 0f, 0f, 41f, 0, 1, 1, 0);
						unk_0xEF4C0B3A167109AB(unk_0x833BB45D35E36889(Local_213.f_121), 0, 0f, -149f, 0f, 0, 1, 1, 0);
					}
				}
				else
				{
					unk_0xEF4C0B3A167109AB(unk_0x833BB45D35E36889(Local_213.f_121), 0, 0f, 0f, -fVar33, 0, 1, 1, 0);
					unk_0xEF4C0B3A167109AB(unk_0x833BB45D35E36889(Local_213.f_121), 0, Var11 * Vector(fVar32, fVar32, fVar32), 0, 1, 1, 0);
				}
			}
			Var35 = { func_322(Var11, Var14) };
			if ((!func_231() && !func_240()) && !func_60())
			{
				if (Local_213[0] > 0)
				{
					fVar38 = -(Local_213.f_82 / (127f / IntToFloat(Local_213[0])));
					fVar39 = (8f / (127f / IntToFloat(Local_213[0])));
					unk_0xEF4C0B3A167109AB(unk_0x833BB45D35E36889(Local_213.f_121), 0, Var35 * Vector(fVar38, fVar38, fVar38), 0, 1, 1, 0);
					unk_0xEF4C0B3A167109AB(unk_0x833BB45D35E36889(Local_213.f_121), 0, 0f, 0f, fVar39, 0, 1, 1, 0);
				}
				else if (Local_213[0] < 0)
				{
					fVar40 = -(Local_213.f_82 / (127f / IntToFloat(Local_213[0])));
					fVar41 = (8f / (127f / IntToFloat(Local_213[0])));
					unk_0xEF4C0B3A167109AB(unk_0x833BB45D35E36889(Local_213.f_121), 0, Var35 * Vector(fVar40, fVar40, fVar40), 0, 1, 1, 0);
					unk_0xEF4C0B3A167109AB(unk_0x833BB45D35E36889(Local_213.f_121), 0, 0f, 0f, -fVar41, 0, 1, 1, 0);
				}
			}
		}
		else
		{
			unk_0x4DB32D0662E0696B(Local_213.f_121);
		}
	}
}

int func_328()
{
	if (func_240())
	{
		return 0;
	}
	if (func_231() && !func_230())
	{
		return 0;
	}
	return 1;
}

bool func_329()
{
	return unk_0xA2BC31158C8CEFD2(Global_1687880, 2);
}

void func_330(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xA2BC31158C8CEFD2(Local_213.f_5, 21))
		{
			unk_0xA1E7A40E1F56E511(&(Local_213.f_5), 21);
		}
	}
	else if (unk_0xA2BC31158C8CEFD2(Local_213.f_5, 21))
	{
		unk_0x3B76114EC84D5812(&(Local_213.f_5), 21);
	}
}

void func_331(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xA2BC31158C8CEFD2(Local_213.f_5, 22))
		{
			unk_0xA1E7A40E1F56E511(&(Local_213.f_5), 22);
		}
	}
	else if (unk_0xA2BC31158C8CEFD2(Local_213.f_5, 22))
	{
		unk_0x3B76114EC84D5812(&(Local_213.f_5), 22);
	}
}

void func_332()
{
	float fVar0;
	float fVar1;
	
	if (unk_0x8A7BBB98FFB32893(Local_213.f_121))
	{
		if (!unk_0xF4B969E0807E76C7(unk_0x40237B62400B4BCC(Local_213.f_121), 0))
		{
			if ((func_9() || func_29()) || func_27())
			{
				fVar0 = -323.1f;
				fVar1 = -1970.9f;
			}
			else
			{
				fVar0 = Local_213.f_112;
				fVar1 = Local_213.f_112.f_1;
			}
			unk_0x7427E1978A984A18(fVar0, fVar1);
			unk_0x7B8FF6DF250560CD(fVar0, fVar1, 0);
			if (!unk_0x61837007ACF2F2C2(Global_1687880.f_24) && !func_27())
			{
				if (!unk_0xA2BC31158C8CEFD2(Local_213.f_5, 8))
				{
					unk_0x74D8EB6B6A85E352();
				}
				unk_0x0E323A3D6F1B1916();
			}
		}
	}
}

void func_333()
{
	if (unk_0x8A7BBB98FFB32893(Local_213.f_121))
	{
		if (unk_0xDE3C2FB26058823A(Local_213.f_40) && Local_213.f_40 == -1)
		{
			Local_213.f_40 = unk_0x04B8CCFB93858A27();
			unk_0x9964F5BBD9415AB7(Local_213.f_40, "HUD_Loop", Local_213.f_119, 1);
		}
	}
}

void func_334()
{
	if (unk_0x8A7BBB98FFB32893(Local_213.f_121))
	{
		if (unk_0xDE3C2FB26058823A(Local_213.f_30))
		{
			Local_213.f_30 = unk_0x04B8CCFB93858A27();
			unk_0x5F5C6A264C2CA8B1(Local_213.f_30, "Flight_Loop", unk_0x833BB45D35E36889(Local_213.f_121), Local_213.f_119, 0, 0);
			unk_0xEC93A4D791E42F8E(Local_213.f_30, "DroneRotationalSpeed", Local_213.f_92);
		}
		else
		{
			unk_0xEC93A4D791E42F8E(Local_213.f_30, "DroneRotationalSpeed", Local_213.f_92);
		}
		if (unk_0xDE3C2FB26058823A(Local_213.f_39))
		{
			unk_0x0972EA9E8102C153(Local_213.f_39);
			Local_213.f_39 = -1;
		}
	}
}

void func_335()
{
	if (func_15(unk_0x7C7787D2D7139A85(), 1, 1))
	{
		unk_0x70CBCB37A00F34A2(unk_0x0FA8183DAD2B3203(), 450, 1);
	}
}

void func_336()
{
	int iVar0;
	
	if (func_9())
	{
		iVar0 = unk_0x0C98179F08C6DA4F(Local_213.f_44);
		if (unk_0x8A7BBB98FFB32893(Local_213.f_121) && func_15(iVar0, 1, 1))
		{
			if (unk_0x5294582CE404D3F4(unk_0x23625FE58BACEBFD(iVar0), 0))
			{
				if (func_337(unk_0x833BB45D35E36889(Local_213.f_121), unk_0x23625FE58BACEBFD(iVar0), Global_262145.f_24731, 1))
				{
					if (!func_190(unk_0x7C7787D2D7139A85(), iVar0))
					{
						if (unk_0xC69A85EEB9CA3B95(unk_0x7C7787D2D7139A85()) != unk_0xC69A85EEB9CA3B95(iVar0) || unk_0xC69A85EEB9CA3B95(unk_0x7C7787D2D7139A85()) == -1)
						{
							unk_0xA1E7A40E1F56E511(&(Local_213.f_5), 11);
							return;
						}
					}
				}
			}
		}
		unk_0x3B76114EC84D5812(&(Local_213.f_5), 11);
	}
}

bool func_337(int iParam0, int iParam1, float fParam2, int iParam3)
{
	return unk_0xB7A628320EFF8E47(unk_0xACE5E491FC1B0D37(iParam0, iParam3), unk_0xACE5E491FC1B0D37(iParam1, iParam3)) <= (fParam2 * fParam2);
}

void func_338()
{
	int iVar0;
	
	if (func_25(func_88()))
	{
		iVar0 = unk_0x0C98179F08C6DA4F(Local_213.f_44);
		if (unk_0x7C7787D2D7139A85() != iVar0)
		{
			if (func_15(iVar0, 1, 1))
			{
				if (unk_0xA2BC31158C8CEFD2(Local_213.f_7, Local_213.f_44))
				{
					if (!unk_0xA890E17DFBBB3192(iVar0))
					{
						unk_0x3B76114EC84D5812(&(Local_213.f_7), Local_213.f_44);
					}
				}
				if (unk_0xB7A628320EFF8E47(func_213(iVar0), Local_213.f_112) < 12100f)
				{
					if (!unk_0xA2BC31158C8CEFD2(Local_213.f_7, Local_213.f_44) && func_340(iVar0))
					{
						func_339(iVar0, 1);
						unk_0xA986EE8F099052F4(Local_213.f_121, iVar0, 1);
						unk_0xA1E7A40E1F56E511(&(Local_213.f_7), Local_213.f_44);
					}
				}
				else if (unk_0xB7A628320EFF8E47(func_213(iVar0), Local_213.f_112) > 14400f)
				{
					if (unk_0xA2BC31158C8CEFD2(Local_213.f_7, Local_213.f_44))
					{
						func_339(iVar0, 0);
						unk_0xA986EE8F099052F4(Local_213.f_121, iVar0, 0);
						unk_0x3B76114EC84D5812(&(Local_213.f_7), Local_213.f_44);
					}
				}
			}
		}
	}
}

void func_339(int iParam0, int iParam1)
{
	struct<3> Var0;
	int iVar3;
	
	Var0.f_0 = 406857800;
	Var0.f_1 = unk_0x7C7787D2D7139A85();
	Var0.f_2 = iParam1;
	iVar3 = func_173(iParam0);
	if (!iVar3 == 0)
	{
		unk_0x990C4E4B3665A4D6(1, &Var0, 3, iVar3);
	}
}

int func_340(int iParam0)
{
	if (func_342(iParam0, 1, 1))
	{
		return 0;
	}
	if (func_48(iParam0))
	{
		return 0;
	}
	if (func_341(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_341(int iParam0)
{
	if (unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_24, 14))
	{
		return 1;
	}
	if (unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_24, 11))
	{
		return 1;
	}
	return 0;
}

int func_342(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_16())
	{
		return 0;
	}
	if (unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_24, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_24, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
		{
			return 1;
		}
	}
	return 0;
}

void func_343()
{
	int iVar0;
	
	if ((func_27() || func_9()) || func_29())
	{
		iVar0 = 1000;
		if (func_9() || func_29())
		{
			iVar0 = 7000;
		}
		if (!unk_0xA2BC31158C8CEFD2(Local_213.f_5, 29))
		{
			if (unk_0xD2652A8A890B29BA(Local_213.f_131) && unk_0xBE2A1549F5014A49(Local_213.f_131))
			{
				if (func_25(func_88()))
				{
					if (func_7(&(Local_213.f_198), iVar0, 0))
					{
						unk_0xD36570C04932359F(func_88(), 1, 0);
						unk_0x8C85E8C71AD74415(func_88(), true, 0);
						unk_0xA1E7A40E1F56E511(&(Local_213.f_5), 29);
					}
				}
			}
		}
	}
}

void func_344()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_351() || !func_18())
	{
		return;
	}
	switch (Local_213.f_79)
	{
		case 0:
			if (!unk_0x8A7BBB98FFB32893(Local_213.f_122))
			{
				iVar0 = joaat("ch_prop_ch_phone_ing_01a");
				if (func_161(iVar0))
				{
					if (func_74(unk_0x1D20AA4302D0BF3D(false, 1) + 1, 0, 1))
					{
						if (!unk_0xA2BC31158C8CEFD2(Local_213.f_6, 4))
						{
							unk_0xA166564E5F3C31A8(unk_0x1D20AA4302D0BF3D(false, 1) + 1);
							unk_0xA1E7A40E1F56E511(&(Local_213.f_6), 4);
						}
						if (unk_0x0BF6D9DA27ADF615(1))
						{
							if (func_350(&(Local_213.f_122), iVar0, unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1), 0, 1, 1, 0, 0, 0, 1))
							{
								unk_0xA986EE8F099052F4(Local_213.f_122, unk_0x7C7787D2D7139A85(), 1);
								iVar1 = unk_0xDD454299E9E58208(unk_0x0FA8183DAD2B3203(), 28422);
								unk_0x01DF2D3988024DB4(unk_0x833BB45D35E36889(Local_213.f_122), unk_0x0FA8183DAD2B3203(), iVar1, 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
								unk_0xE0AC40EF164A2569(iVar0);
							}
						}
					}
				}
			}
			else
			{
				Local_213.f_79 = 1;
			}
			break;
		
		case 1:
			if (unk_0x411C065ADB822CD9(unk_0x0FA8183DAD2B3203(), 2106541073) != 0 && unk_0x411C065ADB822CD9(unk_0x0FA8183DAD2B3203(), 2106541073) != 1)
			{
				func_308(0, 0, 0);
				Local_213.f_79 = 2;
			}
			break;
		
		case 2:
			if (func_349(0, "CREATE"))
			{
				func_334();
				if (func_348(Local_213.f_122))
				{
					if (!unk_0x0975E9E48EA2CC7B(unk_0x833BB45D35E36889(Local_213.f_122)))
					{
						unk_0x2BBEC4B37B923F4B(unk_0x833BB45D35E36889(Local_213.f_122), true, 0);
					}
				}
				if (func_348(Local_213.f_121))
				{
					if (!unk_0x0975E9E48EA2CC7B(unk_0x833BB45D35E36889(Local_213.f_121)))
					{
						unk_0x2BBEC4B37B923F4B(unk_0x833BB45D35E36889(Local_213.f_121), true, 0);
						unk_0x2BBEC4B37B923F4B(Local_213.f_125, false, 0);
					}
				}
			}
			if (func_346(1))
			{
				unk_0x01DF2D3988024DB4(Local_213.f_125, unk_0x833BB45D35E36889(Local_213.f_121), -1, 0f, 0f, -0.8f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				unk_0x2BBEC4B37B923F4B(Local_213.f_125, false, 0);
				unk_0x7DC20B8D2FDE9E56(unk_0xAEA6D4EC961DFA03(Local_213.f_121));
				unk_0x006E4B040ED37EC3(unk_0x833BB45D35E36889(Local_213.f_121));
				func_247();
				func_108();
				func_216(1);
				func_234();
				func_327();
				func_345();
				if (unk_0xDE3C2FB26058823A(Local_213.f_39))
				{
					Local_213.f_39 = unk_0x04B8CCFB93858A27();
					unk_0x9964F5BBD9415AB7(Local_213.f_39, "HUD_Startup", Local_213.f_119, 1);
				}
				unk_0x0298C8010FD5A69E(1, 0, 0, 1, 1, 0);
				Local_213.f_135 = unk_0x169A8AC9F93C2727();
				func_352(3);
				func_308(1, 1, 0);
				Local_213.f_79 = 3;
			}
			break;
		
		case 3:
			if (func_346(0))
			{
				iVar2 = unk_0xBAC643F143880136(0, 3);
				switch (iVar2)
				{
					case 0:
						func_308(2, 0, 0);
						Local_213.f_172 = 2;
						break;
					
					case 1:
						func_308(3, 0, 0);
						Local_213.f_172 = 3;
						break;
					
					case 2:
						func_308(4, 0, 0);
						Local_213.f_172 = 4;
						break;
				}
				Local_213.f_79 = 4;
			}
			break;
		
		case 4:
			if (func_346(0))
			{
				func_308(1, 1, 0);
				Local_213.f_79 = 3;
			}
			break;
	}
}

void func_345()
{
	if (func_119() || func_18())
	{
		if (!unk_0x6FE3A7E505FEC20C("DLC_BTL_Hacker_Drone_HUD_Scene"))
		{
			unk_0x7D17F1A2E0EEDBB9("DLC_BTL_Hacker_Drone_HUD_Scene");
		}
	}
	else if (func_9())
	{
		if (!unk_0x6FE3A7E505FEC20C("DLC_Arena_Battle_Drone_HUD_Scene"))
		{
			unk_0x7D17F1A2E0EEDBB9("DLC_Arena_Battle_Drone_HUD_Scene");
		}
	}
	else if (func_29())
	{
		if (!unk_0x6FE3A7E505FEC20C("DLC_Arena_Spectator_Drone_HUD_Scene"))
		{
			unk_0x7D17F1A2E0EEDBB9("DLC_Arena_Spectator_Drone_HUD_Scene");
		}
	}
	else if (func_27())
	{
		if (!unk_0x6FE3A7E505FEC20C("dlc_aw_arena_piloted_missile_scene"))
		{
			unk_0x7D17F1A2E0EEDBB9("dlc_aw_arena_piloted_missile_scene");
		}
	}
}

int func_346(bool bParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = unk_0x0FA8183DAD2B3203();
	if (func_25(iVar0))
	{
		fVar1 = func_347();
		iVar2 = unk_0xE8EC5AFFC564CC19(Local_213.f_78);
		if (unk_0xB50E39CA0A3E6020(iVar2) && unk_0x91F0628278985DB8(iVar2) >= fVar1)
		{
			if (bParam0)
			{
				func_310(0);
			}
			return 1;
		}
	}
	return 0;
}

float func_347()
{
	return 0.95f;
}

int func_348(var uParam0)
{
	if (unk_0x9C625F4590C97F13(uParam0))
	{
		unk_0x4DB32D0662E0696B(uParam0);
		return unk_0xF42AC9E0924DC59B(uParam0);
	}
	return 0;
}

int func_349(int iParam0, char* sParam1)
{
	int iVar0;
	
	iVar0 = unk_0xE8EC5AFFC564CC19(Local_213.f_78);
	if (iVar0 != -1)
	{
		if (unk_0xB50E39CA0A3E6020(iVar0))
		{
			if ((unk_0x5149CDB3FF43EDD1(unk_0x0FA8183DAD2B3203(), unk_0xA8C462EF7D9DC564(sParam1)) || unk_0x5149CDB3FF43EDD1(unk_0x833BB45D35E36889(Local_213.f_122), unk_0xA8C462EF7D9DC564(sParam1))) || unk_0x5149CDB3FF43EDD1(unk_0x833BB45D35E36889(Local_213.f_121), unk_0xA8C462EF7D9DC564(sParam1)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_350(var uParam0, int iParam1, struct<3> Param2, bool bParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11)
{
	if (!unk_0x0BF6D9DA27ADF615(1))
	{
		return 0;
	}
	if (bParam9)
	{
		*uParam0 = unk_0x19BD72F0D7BDB17C(unk_0x366EC9EEE4362C87(iParam1, Param2, iParam6, bParam5, iParam7));
	}
	else
	{
		*uParam0 = unk_0x19BD72F0D7BDB17C(unk_0x7187764DB5121FC9(iParam1, Param2, iParam6, bParam5, iParam7));
	}
	if (unk_0x9C625F4590C97F13(*uParam0))
	{
		unk_0x9D3FE4786B8925D2(unk_0x833BB45D35E36889(*uParam0), iParam8);
		if (bParam10)
		{
			unk_0x18620062E6D68D6E(unk_0x833BB45D35E36889(*uParam0), 1);
		}
		if (bParam11)
		{
			unk_0x2BBEC4B37B923F4B(unk_0x833BB45D35E36889(*uParam0), false, 0);
		}
		if (unk_0x457EF27DC4F63820(unk_0x833BB45D35E36889(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x9E11C6A0FFF1E999(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

bool func_351()
{
	return unk_0xA2BC31158C8CEFD2(Global_1687880, 13);
}

void func_352(int iParam0)
{
	if (Local_213.f_170 != iParam0)
	{
		Local_213.f_170 = iParam0;
	}
}

void func_353(bool bParam0)
{
	if (bParam0)
	{
		if (!func_351())
		{
			unk_0xA1E7A40E1F56E511(&Global_1687880, 13);
		}
	}
	else if (func_351())
	{
		unk_0x3B76114EC84D5812(&Global_1687880, 13);
	}
}

void func_354()
{
	struct<3> Var0;
	
	if (unk_0x8A7BBB98FFB32893(Local_213.f_121))
	{
		if (unk_0xF42AC9E0924DC59B(Local_213.f_121))
		{
			if (!unk_0xD2652A8A890B29BA(Local_213.f_131) && unk_0xA2BC31158C8CEFD2(Local_213.f_5, 0))
			{
				if (func_364())
				{
					if (func_312())
					{
						func_274(unk_0x7C7787D2D7139A85(), 0, 33280, 0);
					}
					else if (!func_27())
					{
						func_274(unk_0x7C7787D2D7139A85(), 0, 512, 0);
					}
					if (!func_363())
					{
						unk_0xCA258500889C4820();
					}
					else
					{
						unk_0x54DAE1C749971F4D();
					}
					Local_213.f_131 = unk_0xBCB04DDDF3778A10(26379945, 1);
					unk_0x494374BCB9580EA5(Local_213.f_131, Local_213.f_88);
					unk_0x03036E4985212F72(Local_213.f_131, 0.01f);
					unk_0xA2E7DE1146ABAC87(Local_213.f_131, 0.01f);
					unk_0xBAA4E225DE364743();
					if (func_27())
					{
						unk_0x6793D62D4C7127BB("eyeinthesky");
					}
					Var0 = { 0f, -0.038f, -0.004f };
					if (func_9() || func_29())
					{
						Var0 = { 0f, -0.099f, -0.02f };
					}
					else if (func_27())
					{
						Var0 = { 0f, -0.9f, 0f };
					}
					else if (func_17() || func_142())
					{
						Var0 = { 0f, -0.038f, -0.006f };
					}
					unk_0x9F2F93BD843587E2(Local_213.f_131, unk_0x833BB45D35E36889(Local_213.f_121), Var0, 1);
					if (func_27())
					{
						unk_0x92B8564A1A66EF0A(Local_213.f_131, func_362() - Vector(0f, -180f, 180f), 2);
					}
					unk_0xDA1AAECF106B6DA6(Local_213.f_112, 75f, 75f);
					unk_0xF819E1DA22C9AA6F(Local_213.f_112, unk_0x0D7387BC0D91B3C0(Local_213.f_131, 2));
					unk_0x04F5A8AA60EC662B(unk_0x833BB45D35E36889(Local_213.f_121), 0);
					if (!func_312())
					{
						if (unk_0x235F15F5EE0D236B())
						{
							unk_0x7D4946564F5947D1();
						}
					}
					if (!func_18())
					{
						func_345();
						if (unk_0xDE3C2FB26058823A(Local_213.f_39))
						{
							Local_213.f_39 = unk_0x04B8CCFB93858A27();
							unk_0x9964F5BBD9415AB7(Local_213.f_39, "HUD_Startup", Local_213.f_119, 1);
						}
						func_247();
						if (func_27())
						{
							func_84();
						}
						else
						{
							func_108();
						}
						func_216(1);
						func_234();
						func_327();
						unk_0x0298C8010FD5A69E(1, 0, 0, 1, 1, 0);
						Local_213.f_135 = unk_0x169A8AC9F93C2727();
					}
					func_359(1);
					func_358(1);
					func_356(158);
					unk_0xA1E7A40E1F56E511(&(Local_115[unk_0x7C7787D2D7139A85() /*3*/]), 0);
					if (!func_18())
					{
						func_352(3);
					}
					else
					{
						Local_213.f_115 = { func_213(unk_0x7C7787D2D7139A85()) };
						unk_0xDF956C4106F1E9C5(Local_213.f_115, &(Local_213.f_115.f_2), 0, 0);
						Local_213.f_81 = unk_0xD2809C7F7FD79247(unk_0x0FA8183DAD2B3203());
						func_355();
						Local_213.f_115 = { unk_0x16DECC52D9360F1E(Local_213.f_115, Local_213.f_81, -0.0695723f, 0.177497f, 0f) };
						func_352(2);
					}
				}
				else if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
				{
					unk_0x2DCF88AC859255F3(unk_0x0FA8183DAD2B3203(), 0, 0);
				}
			}
			else
			{
				if (unk_0xD2652A8A890B29BA(Local_213.f_131))
				{
				}
				if (!unk_0xA2BC31158C8CEFD2(Local_213.f_5, 0))
				{
				}
			}
		}
		else
		{
			unk_0x4DB32D0662E0696B(Local_213.f_121);
		}
	}
}

void func_355()
{
	int iVar0;
	
	if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
	{
		unk_0x63EA4FAF7CDEFEC7(unk_0x0FA8183DAD2B3203(), &iVar0, 1);
		if (!(iVar0 == joaat("weapon_unarmed") || iVar0 == joaat("object")))
		{
			unk_0xE5DAA5553A176799(unk_0x0FA8183DAD2B3203(), joaat("weapon_unarmed"), 1);
		}
	}
}

void func_356(int iParam0)
{
	int iVar0;
	
	if (Global_262145.f_8571)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2097152[func_357() /*10828*/].f_6168.f_4015[iVar0 /*3*/] == iParam0)
		{
			if (Global_1312570.f_1[iVar0] == -1)
			{
				Global_1312570.f_1[iVar0] = iParam0;
				Global_1312570 = 1;
				return;
			}
		}
		iVar0++;
	}
}

int func_357()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_358(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xA2BC31158C8CEFD2(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_273.f_330, 26))
		{
			unk_0xA1E7A40E1F56E511(&(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_273.f_330), 26);
		}
	}
	else if (unk_0xA2BC31158C8CEFD2(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_273.f_330, 26))
	{
		unk_0x3B76114EC84D5812(&(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_273.f_330), 26);
	}
}

void func_359(bool bParam0)
{
	if (bParam0)
	{
		if (!func_58())
		{
			unk_0xA1E7A40E1F56E511(&Global_1687880, 5);
		}
	}
	else
	{
		if (func_58())
		{
			unk_0x3B76114EC84D5812(&Global_1687880, 5);
		}
		func_360(0);
	}
}

void func_360(bool bParam0)
{
	if (bParam0)
	{
		if (!func_361())
		{
			unk_0xA1E7A40E1F56E511(&Global_1687880, 12);
		}
	}
	else if (func_361())
	{
		unk_0x3B76114EC84D5812(&Global_1687880, 12);
	}
}

bool func_361()
{
	return unk_0xA2BC31158C8CEFD2(Global_1687880, 12);
}

Vector3 func_362()
{
	return Global_1687880.f_16;
}

bool func_363()
{
	return unk_0xA2BC31158C8CEFD2(Global_1687880, 10);
}

int func_364()
{
	if (func_30() && !func_32())
	{
		return 1;
	}
	if (func_367())
	{
		return 1;
	}
	if (func_366())
	{
		return 1;
	}
	if (func_32() && func_365())
	{
		return 1;
	}
	if (!func_53(unk_0x7C7787D2D7139A85(), 0) && !func_270())
	{
		return 1;
	}
	return 0;
}

int func_365()
{
	if (Global_1319106 != -1 || Global_1319112 != -1)
	{
		if (((unk_0xF6FD8019402CF03B(unk_0x0FA8183DAD2B3203(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle", 3) || unk_0xF6FD8019402CF03B(unk_0x0FA8183DAD2B3203(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle_control", 3)) || unk_0xF6FD8019402CF03B(unk_0x0FA8183DAD2B3203(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter_control", 3)) || unk_0xF6FD8019402CF03B(unk_0x0FA8183DAD2B3203(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter", 3))
		{
			return 1;
		}
		if (func_34())
		{
			return 0;
		}
	}
	return 0;
}

int func_366()
{
	return 0;
}

int func_367()
{
	if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
	{
		return 0;
	}
	if (func_32() || func_368())
	{
		return 0;
	}
	if (func_366())
	{
		return 0;
	}
	return 1;
}

int func_368()
{
	if (unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), -1421.593f, -3011.17f, -80.24994f, -1423.142f, -3012.295f, -77.74994f, 2f, 0, 1, 0) || unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), -1419.463f, -3009.145f, -80.49994f, -1420.684f, -3010.617f, -77.99994f, 2f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

void func_369()
{
	int iVar0;
	struct<3> Var1;
	bool bVar4;
	float fVar5;
	
	iVar0 = joaat("bmx");
	if (func_161(Local_213.f_169) && func_161(iVar0))
	{
		if (!unk_0xA2BC31158C8CEFD2(Local_213.f_5, 0))
		{
			if (!unk_0x8A7BBB98FFB32893(Local_213.f_121))
			{
				if (!func_312())
				{
					if (func_119())
					{
						if (func_25(func_318()))
						{
							Var1 = { unk_0xACE5E491FC1B0D37(func_318(), 1) };
						}
					}
					else
					{
						Var1 = { Local_213.f_100 };
					}
					if (unk_0xB3E4EBF4EFCF92BD(unk_0x7C7787D2D7139A85()))
					{
						func_274(unk_0x7C7787D2D7139A85(), 0, 512, 0);
					}
					if (!unk_0xA2BC31158C8CEFD2(Local_213.f_5, 18))
					{
						if (unk_0x155C3BED27FDCC1D(Var1, 100f, 1))
						{
							unk_0xA1E7A40E1F56E511(&(Local_213.f_5), 18);
						}
					}
					else if (unk_0x235F15F5EE0D236B())
					{
						if (!unk_0xA2BC31158C8CEFD2(Local_213.f_5, 19))
						{
							if (func_374())
							{
								if (func_371())
								{
									unk_0xA1E7A40E1F56E511(&(Local_213.f_5), 19);
								}
							}
							else
							{
								if (!func_237(func_370()))
								{
									Local_213.f_100 = { func_370() };
								}
								unk_0xA1E7A40E1F56E511(&(Local_213.f_5), 19);
							}
						}
					}
				}
				if (unk_0xA2BC31158C8CEFD2(Local_213.f_5, 19) || func_312())
				{
					if (!unk_0xA2BC31158C8CEFD2(Local_213.f_5, 20))
					{
						Local_213.f_125 = unk_0x847817A65E16621A(iVar0, Local_213.f_100, 0f, 0, 0, 0);
						unk_0xDA778D908FD69EEE(Local_213.f_125, 1, 1);
						unk_0xC67026146B0E835A(Local_213.f_125, Local_213.f_100, 0, 0, 1);
						unk_0x04F5A8AA60EC662B(Local_213.f_125, 1);
						unk_0xD36570C04932359F(Local_213.f_125, 0, 0);
						unk_0x2BBEC4B37B923F4B(Local_213.f_125, false, 0);
						unk_0xA1E7A40E1F56E511(&(Local_213.f_5), 20);
					}
					else if (func_74(unk_0x1D20AA4302D0BF3D(false, 1) + 1, 0, 1))
					{
						if (!unk_0xA2BC31158C8CEFD2(Local_213.f_5, 30))
						{
							unk_0xA166564E5F3C31A8(unk_0x1D20AA4302D0BF3D(false, 1) + 1);
							unk_0xA1E7A40E1F56E511(&(Local_213.f_5), 30);
						}
						if (unk_0x0BF6D9DA27ADF615(1))
						{
							bVar4 = false;
							if (func_18())
							{
								Local_213.f_115 = { func_213(unk_0x7C7787D2D7139A85()) };
								unk_0xDF956C4106F1E9C5(Local_213.f_115, &(Local_213.f_115.f_2), 0, 0);
								Local_213.f_100 = { unk_0xD0D335A69D1FFE54(Local_213.f_120, "ENTER", Local_213.f_115, unk_0x762900E9B9F74FD4(unk_0x0FA8183DAD2B3203(), 2), 0, 2) };
								bVar4 = true;
							}
							if (func_350(&(Local_213.f_121), Local_213.f_169, Local_213.f_100, 0, 1, 1, 1, 1, 0, bVar4))
							{
								Global_1687880.f_20 = unk_0x833BB45D35E36889(Local_213.f_121);
								if (func_119())
								{
									if (func_25(func_318()))
									{
										unk_0xF3D48447FACBBE72(func_88(), unk_0x762900E9B9F74FD4(func_318(), 2), 2, 1);
										fVar5 = (unk_0xD2809C7F7FD79247(func_318()) + 180f);
									}
								}
								Global_2424073[unk_0x7C7787D2D7139A85() /*421*/].f_407 = { Local_213.f_100 };
								Global_2424073[unk_0x7C7787D2D7139A85() /*421*/].f_410 = fVar5;
								Local_115[unk_0x7C7787D2D7139A85() /*3*/].f_2 = Local_213.f_121;
								unk_0xA986EE8F099052F4(Local_213.f_121, unk_0x7C7787D2D7139A85(), 1);
								unk_0x5332C353FF60F29E(unk_0xAEA6D4EC961DFA03(Local_213.f_121), 1);
								unk_0xDA778D908FD69EEE(unk_0xAEA6D4EC961DFA03(Local_213.f_121), 1, 1);
								unk_0xC67026146B0E835A(func_88(), Local_213.f_100, 0, 0, 1);
								unk_0x5A2B7C446C0CF087(func_88(), fVar5);
								unk_0xB65AEB3AC5AF92FA(func_88(), 1);
								if (!func_237(func_362()))
								{
									unk_0xF3D48447FACBBE72(func_88(), func_362(), 2, 1);
								}
								if (func_27())
								{
									unk_0xD36570C04932359F(func_88(), 0, 0);
								}
								unk_0x14FE72B78AB76A38(Local_213.f_121, 1);
								if (func_147(unk_0x7C7787D2D7139A85()))
								{
									unk_0x0BBBAC4546BFE280(func_88(), Global_262145.f_24136 * 5, 0);
								}
								else
								{
									unk_0x0BBBAC4546BFE280(func_88(), Global_262145.f_24136, 0);
								}
								unk_0x04F5A8AA60EC662B(unk_0x833BB45D35E36889(Local_213.f_121), 1);
								unk_0x5CD902263A2E9D7F(Local_213.f_121, 0);
								unk_0x775879DF24E29944(unk_0xAEA6D4EC961DFA03(Local_213.f_121), 1);
								unk_0xDA1AAECF106B6DA6(Local_213.f_100, 100f, 200f);
								unk_0xF819E1DA22C9AA6F(unk_0xACE5E491FC1B0D37(unk_0xAEA6D4EC961DFA03(Local_213.f_121), 1), unk_0x762900E9B9F74FD4(unk_0xAEA6D4EC961DFA03(Local_213.f_121), 2));
								unk_0xE0AC40EF164A2569(Local_213.f_169);
								unk_0xE0AC40EF164A2569(iVar0);
							}
						}
					}
				}
			}
			else
			{
				unk_0xDBAAA280792CB384(unk_0x833BB45D35E36889(Local_213.f_121), 0);
				if (func_25(Local_213.f_125) && func_25(unk_0xAEA6D4EC961DFA03(Local_213.f_121)))
				{
					unk_0x01DF2D3988024DB4(Local_213.f_125, unk_0x833BB45D35E36889(Local_213.f_121), -1, 0f, 0f, -0.8f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					unk_0xA1E7A40E1F56E511(&(Local_213.f_5), 0);
				}
			}
		}
	}
}

Vector3 func_370()
{
	return Global_1687880.f_13;
}

int func_371()
{
	if (Local_213.f_15 == 0)
	{
		if (!unk_0xA2BC31158C8CEFD2(Local_213.f_5, 14))
		{
			if ((!func_147(unk_0x7C7787D2D7139A85()) && func_119()) && func_25(func_318()))
			{
				Local_213.f_100 = { unk_0x16DECC52D9360F1E(unk_0xACE5E491FC1B0D37(func_318(), 1), unk_0xD2809C7F7FD79247(func_318()), -0.7f, 1.6f, 4f) };
				unk_0xA1E7A40E1F56E511(&(Local_213.f_5), 14);
			}
			else
			{
				if (func_119() && func_25(func_318()))
				{
					Local_213.f_100 = { unk_0x16DECC52D9360F1E(unk_0xACE5E491FC1B0D37(func_318(), 1), unk_0xD2809C7F7FD79247(func_318()), -0.7f, 1.6f, 4f) };
				}
				Local_213.f_100 = unk_0x64A3FFD9D62755C5((Local_213.f_100 - 1.5f), (Local_213.f_100 + 1.5f));
				Local_213.f_100.f_1 = unk_0x64A3FFD9D62755C5((Local_213.f_100.f_1 - 1.5f), (Local_213.f_100.f_1 + 1.5f));
				Local_213.f_100.f_2 = unk_0x64A3FFD9D62755C5((Local_213.f_100.f_2 + 0.5f), (Local_213.f_100.f_2 + 1.5f));
				if (!func_373(Local_213.f_100))
				{
					unk_0xA1E7A40E1F56E511(&(Local_213.f_5), 14);
				}
			}
		}
		else if (unk_0xA2BC31158C8CEFD2(Local_213.f_5, 15))
		{
			Local_213.f_100 = unk_0x64A3FFD9D62755C5((Local_213.f_100 - 1.5f), (Local_213.f_100 + 1.5f));
			Local_213.f_100.f_1 = unk_0x64A3FFD9D62755C5((Local_213.f_100.f_1 - 1.5f), (Local_213.f_100.f_1 + 1.5f));
			Local_213.f_100.f_2 = unk_0x64A3FFD9D62755C5((Local_213.f_100.f_2 + 0.5f), (Local_213.f_100.f_2 + 1.5f));
			if (!func_373(Local_213.f_100))
			{
				unk_0x3B76114EC84D5812(&(Local_213.f_5), 15);
			}
		}
		func_372(Local_213.f_100);
	}
	else if (Local_213.f_15 == 1 && !func_373(Local_213.f_100))
	{
		return 1;
	}
	else
	{
		Local_213.f_15 = 0;
		unk_0xA1E7A40E1F56E511(&(Local_213.f_5), 15);
	}
	return 0;
}

void func_372(struct<3> Param0)
{
	var uVar0;
	float fVar1;
	int iVar2;
	var uVar3;
	struct<3> Var6;
	var uVar9;
	int iVar10;
	
	switch (Local_213.f_14)
	{
		case 0:
			if (func_119())
			{
				if (func_25(func_318()))
				{
					uVar0 = func_318();
				}
			}
			if (func_9() || func_29())
			{
				fVar1 = func_196(Local_213.f_169);
			}
			else
			{
				fVar1 = (func_196(Local_213.f_169) * 11f);
			}
			Local_213.f_130 = unk_0x370A50EE38672923(Param0, Param0, fVar1, 511, uVar0, 4);
			if (Local_213.f_130 != 0)
			{
				Local_213.f_14 = 1;
			}
			break;
		
		case 1:
			iVar10 = unk_0x19D3834206AE7960(Local_213.f_130, &iVar2, &Var6, &uVar3, &uVar9);
			if (iVar10 == 2)
			{
				if (iVar2 == 0)
				{
					Local_213.f_15 = 1;
					Var6 = { 0f, 0f, 0f };
				}
				else
				{
					Local_213.f_15 = 2;
					Local_213.f_130 = 0;
					Local_213.f_14 = 0;
				}
			}
			else if (iVar10 == 0)
			{
				Local_213.f_14 = 0;
			}
			break;
	}
}

int func_373(struct<3> Param0)
{
	if (unk_0xD36AE666DF05C607(Param0, -1036.27f, -228.704f, 53.76435f, -1096.765f, -258.69f, 35.77808f, 20f, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_374()
{
	if (func_119())
	{
		return 1;
	}
	if (func_17() && !func_18())
	{
		return 1;
	}
	return 0;
}

int func_375()
{
	if (func_270())
	{
		return Global_1676879.f_444 == 0;
	}
	return 0;
}

void func_376()
{
	if (func_15(unk_0x7C7787D2D7139A85(), 1, 1))
	{
		Local_213.f_103 = { func_238(&Local_213) };
		if (!func_237(func_370()))
		{
			Local_213.f_100 = { func_370() };
		}
		else
		{
			Local_213.f_100 = { func_213(unk_0x7C7787D2D7139A85()) };
			Local_213.f_100 = { Local_213.f_100, Local_213.f_100.f_1, (Local_213.f_100.f_2 + 1.5f) };
		}
		if (func_53(unk_0x7C7787D2D7139A85(), 0))
		{
			func_420(1);
		}
		if (func_53(unk_0x7C7787D2D7139A85(), 0))
		{
			func_416();
		}
		else if (((func_414(unk_0x7C7787D2D7139A85()) == 2 || func_414(unk_0x7C7787D2D7139A85()) == 1) && !unk_0xA2BC31158C8CEFD2(Global_1695602, 6)) && !unk_0xA2BC31158C8CEFD2(Global_1695603, 0))
		{
			if (unk_0xA2BC31158C8CEFD2(Global_2508185, 0))
			{
				func_413(1);
				func_405(0, 0);
				func_404();
				func_360(1);
				func_352(1);
			}
		}
		else if ((func_31() && func_400()) && !unk_0xA2BC31158C8CEFD2(Global_1695602, 6))
		{
			func_378();
		}
		else if (unk_0xA2BC31158C8CEFD2(Global_1695602, 6) && unk_0xA2BC31158C8CEFD2(Global_1695603, 0))
		{
			func_405(0, 0);
			func_360(1);
			func_352(1);
		}
		else if (func_18() && !func_377())
		{
			unk_0x0D23E3918F7AF11B(1);
			func_115("PIM_DRONAMOS", -1);
			func_274(unk_0x7C7787D2D7139A85(), 1, 0, 0);
			func_352(6);
		}
		else if (func_237(Local_213.f_97))
		{
			Local_213.f_118 = 0;
			func_360(1);
			func_352(1);
		}
	}
}

bool func_377()
{
	return unk_0xA2BC31158C8CEFD2(Global_1687880, 23);
}

void func_378()
{
	struct<3> Var0;
	var uVar3;
	
	if (!func_393())
	{
		if ((((((func_392() || func_391()) && !Global_1662552) && func_400()) && !unk_0xA2BC31158C8CEFD2(Global_2508068, 6)) && Global_1312792) && !(func_392() && Global_262145.f_25789))
		{
			if ((((((unk_0x26BB91778477F482(2, 224) || unk_0x80E2BA2BD5AB1A3F(2, 224)) && !unk_0x26BB91778477F482(2, 223)) && !unk_0x80E2BA2BD5AB1A3F(2, 223)) && !unk_0x26BB91778477F482(2, 235)) && !unk_0x80E2BA2BD5AB1A3F(2, 235)) && !unk_0x0B6782DED1C4B3B1(2, 19))
			{
				if (unk_0x9D1AA2067D7204CD(Global_262145.f_25791, 0, 0, 1, -1, 0) || unk_0xA2BC31158C8CEFD2(Global_2508068, 2))
				{
					unk_0xA1E7A40E1F56E511(&Global_2508068, 0);
					func_405(0, 0);
					func_360(1);
					func_352(1);
					func_387();
					func_385(73, -1);
					func_382();
					Var0 = { func_381() };
					func_379(Var0, 0f, 0f, 0f);
					if (func_392())
					{
						unk_0x5F5C6A264C2CA8B1(uVar3, "Select_Spec_Drone", unk_0x0FA8183DAD2B3203(), "DLC_AW_Spectator_Tablet_Sounds", 1, 0);
					}
				}
				else if (!unk_0xA2BC31158C8CEFD2(Global_2508068, 4))
				{
					unk_0xA1E7A40E1F56E511(&Global_2508068, 4);
				}
			}
		}
	}
}

void func_379(struct<3> Param0, struct<3> Param3)
{
	if (!func_380(Global_1687880.f_13, Param0, 0))
	{
		Global_1687880.f_13 = { Param0 };
		Param3 = { Param3 + Vector(0f, -180f, 180f) };
		Global_1687880.f_16 = { Param3 };
	}
}

bool func_380(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

Vector3 func_381()
{
	float fVar0;
	float fVar1;
	float fVar2;
	struct<3> Var3;
	
	fVar0 = 0f;
	fVar1 = 6f;
	fVar2 = 6f;
	Var3 = { 2800f, -3800.2f, 170f };
	if ((Global_4456448.f_184556.f_1 == 3 || Global_4456448.f_184556.f_1 == 3) || Global_4456448.f_184556.f_1 == 3)
	{
		Var3.f_1 = -3860f;
	}
	fVar1 = (fVar1 * IntToFloat(unk_0x2E40EEA43EF34BD6()));
	fVar2 = (fVar2 * IntToFloat((unk_0x2E40EEA43EF34BD6() / 8)));
	fVar1 = (fVar1 - (8f * fVar2));
	return unk_0x16DECC52D9360F1E(Var3, fVar0, fVar1, fVar2, 0f);
}

void func_382()
{
	int iVar0;
	
	iVar0 = func_383(73, -1);
	if (iVar0 >= 50)
	{
		unk_0xA1E7A40E1F56E511(&(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_273.f_335.f_3), 13);
	}
	else
	{
		unk_0x3B76114EC84D5812(&(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_273.f_335.f_3), 13);
	}
}

int func_383(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2577831[iParam0 /*3*/][func_384(iParam1)];
	if (unk_0x367DA79FE620711B(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_384(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_96();
		if (iVar1 > -1)
		{
			Global_2542240 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2542240 = 1;
		}
	}
	return iVar0;
}

void func_385(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_383(iParam0, func_384(iParam1));
	iVar0++;
	func_386(iParam0, iVar0, iParam1);
}

void func_386(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = Global_2577831[iParam0 /*3*/][func_384(uParam2)];
	unk_0x41410A69AD49AFCD(iVar0, iParam1, 1);
}

void func_387()
{
	func_388(1, 7982);
}

void func_388(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_390(iParam1, -1, 0);
	func_389(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

void func_389(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_384(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x41410A69AD49AFCD(iVar0, iParam1, iParam3);
	}
}

int func_390(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2542527[iParam0 /*3*/][func_384(iParam1)];
	if (unk_0x367DA79FE620711B(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

var func_391()
{
	return Global_2459027;
}

int func_392()
{
	if (Global_2459026 >= 0 && Global_2459026 < 10)
	{
		return 1;
	}
	return 0;
}

int func_393()
{
	if (unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), -1420.915f, -3009.132f, -79.99994f, -1421.98f, -3009.121f, -77.74994f, 1f, 0, 1, 0))
	{
		return 1;
	}
	if (func_399())
	{
		return 1;
	}
	if (func_398())
	{
		return 1;
	}
	if (unk_0xCD97B9861557C025())
	{
		return 1;
	}
	if (func_270())
	{
		return 1;
	}
	if (func_53(unk_0x7C7787D2D7139A85(), 0))
	{
		if (func_37(Global_1590293))
		{
			return 1;
		}
	}
	if (func_119())
	{
		if (func_397())
		{
			if (func_396())
			{
				return 1;
			}
			if (unk_0xA2BC31158C8CEFD2(Local_213.f_5, 28))
			{
				return 1;
			}
		}
	}
	if (func_179(unk_0x7C7787D2D7139A85()))
	{
		return 1;
	}
	if (func_59(0))
	{
		return 1;
	}
	if (func_285())
	{
		return 1;
	}
	if (func_119())
	{
		if (func_30())
		{
			if (func_15(unk_0x7C7787D2D7139A85(), 1, 1))
			{
				if (func_136(unk_0x0FA8183DAD2B3203(), -1422.188f, -3015.926f, -80.1554f, 1) < 1.5f)
				{
					return 1;
				}
				if (func_395())
				{
					return 1;
				}
			}
			if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1) || func_394(unk_0x0FA8183DAD2B3203(), 1))
			{
				return 1;
			}
		}
	}
	if (func_177())
	{
		return 1;
	}
	if (Global_262145.f_24146)
	{
		return 1;
	}
	if (unk_0xA2BC31158C8CEFD2(Local_213.f_5, 27))
	{
		return 1;
	}
	if (func_53(unk_0x7C7787D2D7139A85(), 0))
	{
		if (func_25(func_318()))
		{
			if ((unk_0x42A24CB7B8A08E11(func_318(), -136.1614f, 4617.176f, 124.5134f, -490.3058f, 4924.749f, 159.0677f, 19.5f, 0, 1, 0) || unk_0x42A24CB7B8A08E11(func_318(), 908.465f, 34.85726f, 79.35429f, 926.4139f, 64.37743f, 87.99218f, 19f, 0, 1, 0)) || unk_0x42A24CB7B8A08E11(func_318(), 946.8937f, -6.119501f, 77.90774f, 962.0698f, -5.454865f, 88.65581f, 10.75f, 0, 1, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (Global_1319110)
	{
		return 1;
	}
	if (Global_2509234)
	{
		return 1;
	}
	if (Global_2509232)
	{
		return 1;
	}
	return 0;
}

int func_394(int iParam0, int iParam1)
{
	if (iParam1 && (!unk_0xD4B321D9096B01FC(iParam0) || unk_0xF4B969E0807E76C7(iParam0, 0)))
	{
		return 0;
	}
	if (unk_0x5AFC77A2CEA0DE1E(iParam0, 2))
	{
		return 1;
	}
	if (unk_0x6BB6079D87FC05FA(iParam0) != 0 || unk_0x31D8B4E11CC6050C(iParam0) != 0)
	{
		return 1;
	}
	return 0;
}

int func_395()
{
	if (unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), -1420.588f, -3013.374f, -79.99994f, -1421.918f, -3012.804f, -77.99994f, 0.675f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_396()
{
	if (Global_2424073[unk_0x7C7787D2D7139A85() /*421*/].f_309.f_8 != func_16() && unk_0x7C7787D2D7139A85() != func_16())
	{
		return unk_0xA2BC31158C8CEFD2(Global_1590446[Global_2424073[unk_0x7C7787D2D7139A85() /*421*/].f_309.f_8 /*871*/].f_273.f_330, 20);
	}
	return 0;
}

int func_397()
{
	if (func_147(unk_0x7C7787D2D7139A85()) && Global_1687880.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

int func_398()
{
	if (Global_2437549.f_1155.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

bool func_399()
{
	return unk_0x9B35D07DCD0F0B43() <= Global_22350.f_5878 + 100;
}

int func_400()
{
	int iVar0;
	int iVar1;
	
	if (func_403() && !func_402())
	{
		return 1;
	}
	iVar0 = unk_0xC69A85EEB9CA3B95(unk_0x7C7787D2D7139A85());
	if (iVar0 >= 4 || iVar0 < 0)
	{
		iVar0 = 0;
	}
	iVar1 = Global_969029.f_13[iVar0];
	if (iVar1 < 17)
	{
		if ((((unk_0xA2BC31158C8CEFD2(Global_4456448.f_106[iVar0 /*11610*/].f_5849[iVar1], 23) && unk_0xA2BC31158C8CEFD2(Global_4456448.f_106[iVar0 /*11610*/].f_5849[iVar1], 24)) && unk_0xA2BC31158C8CEFD2(Global_4456448.f_106[iVar0 /*11610*/].f_5849[iVar1], 25)) && unk_0xA2BC31158C8CEFD2(Global_4456448.f_106[iVar0 /*11610*/].f_5849[iVar1], 26)) && unk_0xA2BC31158C8CEFD2(Global_4456448.f_32, 16))
		{
			return 1;
		}
	}
	if (!unk_0xA2BC31158C8CEFD2(Global_4456448.f_32, 16))
	{
		return 1;
	}
	else if (func_391() || func_401(unk_0x7C7787D2D7139A85()))
	{
		return 1;
	}
	return 0;
}

bool func_401(int iParam0)
{
	return unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_39.f_18, 14);
}

int func_402()
{
	if (Global_4456448.f_156052 == 1 || Global_4456448.f_156052 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_403()
{
	return unk_0xA2BC31158C8CEFD2(Global_4456448.f_184550, 12);
}

void func_404()
{
	unk_0x3B76114EC84D5812(&Global_2508185, 0);
}

void func_405(bool bParam0, bool bParam1)
{
	int iVar0;
	
	Local_213.f_82 = Global_262145.f_24139;
	if (func_29() || func_9())
	{
		Local_213.f_82 = (Local_213.f_82 * 4.5f);
	}
	else if (func_27())
	{
		Local_213.f_82 = 100f;
	}
	else if (func_17())
	{
		Local_213.f_82 = 100f;
	}
	else if (func_142())
	{
		Local_213.f_82 = 10f;
	}
	Local_213.f_93 = 40f;
	if (func_17())
	{
		Local_213.f_93 = 70f;
	}
	else if (func_142())
	{
		Local_213.f_93 = 35f;
	}
	if (func_29())
	{
		Local_213.f_169 = joaat("xs_prop_arena_drone_01");
	}
	else if (func_9())
	{
		Local_213.f_169 = joaat("xs_prop_arena_drone_02");
	}
	else if (func_27())
	{
		Local_213.f_169 = joaat("xs_prop_arena_airmissile_01a");
		func_412(1);
	}
	else if (func_17())
	{
		if (!func_18())
		{
			iVar0 = func_411(unk_0x7C7787D2D7139A85());
			switch (iVar0)
			{
				case 37:
					Local_213.f_169 = joaat("ch_prop_arcade_drone_01d");
					break;
				
				case 38:
					Local_213.f_169 = joaat("ch_prop_arcade_drone_01a");
					break;
				
				case 39:
					Local_213.f_169 = joaat("ch_prop_arcade_drone_01c");
					break;
				
				case 40:
					Local_213.f_169 = joaat("ch_prop_arcade_drone_01b");
					break;
			}
		}
		else
		{
			Local_213.f_169 = joaat("ch_prop_casino_drone_01a");
		}
	}
	else if (func_142())
	{
		Local_213.f_169 = joaat("ch_prop_casino_drone_01a");
	}
	else
	{
		Local_213.f_169 = joaat("ba_prop_battle_drone_quad");
	}
	if (bParam1)
	{
		Local_213.f_100 = { Local_213.f_106 };
	}
	Global_1687880.f_1 = 1500;
	func_410();
	func_409(1);
	func_408(1);
	if (func_29() || func_27())
	{
		func_407(1);
	}
	else if (func_9())
	{
		func_407(0);
	}
	if (func_18())
	{
		Local_213.f_120 = "ANIM_HEIST@HS3F@IG4_DRONE@MALE@";
		unk_0x36B659209EBDD366(Local_213.f_120);
	}
	if (func_9())
	{
		unk_0x5CFE984F4EB443F7("scr_xs_dr");
	}
	if (func_18())
	{
		func_406(Global_262145.f_27927);
	}
	else if (func_17() && !func_18())
	{
		func_406(Global_262145.f_27928);
	}
	else if (!func_119() && !func_312())
	{
		func_406(200f);
	}
	func_68(Global_1574997);
	if (bParam0)
	{
	}
}

void func_406(float fParam0)
{
	if (Global_1687880.f_8 != fParam0)
	{
		Global_1687880.f_8 = fParam0;
	}
}

void func_407(bool bParam0)
{
	if (bParam0)
	{
		if (!func_175())
		{
			unk_0xA1E7A40E1F56E511(&Global_1687880, 8);
		}
	}
	else if (func_175())
	{
		unk_0x3B76114EC84D5812(&Global_1687880, 8);
	}
}

void func_408(bool bParam0)
{
	if (bParam0)
	{
		if (!func_329())
		{
			unk_0xA1E7A40E1F56E511(&Global_1687880, 2);
		}
	}
	else if (func_329())
	{
		unk_0x3B76114EC84D5812(&Global_1687880, 2);
	}
}

void func_409(bool bParam0)
{
	if (bParam0)
	{
		if (!func_226())
		{
			unk_0xA1E7A40E1F56E511(&Global_1687880, 4);
		}
	}
	else if (func_226())
	{
		unk_0x3B76114EC84D5812(&Global_1687880, 4);
	}
}

void func_410()
{
	if (!Local_213.f_118)
	{
		Local_213.f_17 = 100;
	}
	if (func_142())
	{
		Local_213.f_23 = 100;
	}
	Local_213.f_18 = 0;
	Local_213.f_19 = 100;
	Local_213.f_88 = 90f;
	Local_213.f_91 = 90f;
	if (!func_27())
	{
		Local_213.f_132 = unk_0x1FAFE9BB9D8960C1("DRONE_CAM");
	}
	else
	{
		Local_213.f_132 = func_89();
	}
	if (func_29())
	{
		Local_213.f_119 = "DLC_Arena_Drone_Sounds";
	}
	else if (func_9())
	{
		Local_213.f_119 = "DLC_Arena_Battle_Drone_Sounds";
	}
	else if (func_27())
	{
		Local_213.f_119 = "DLC_Arena_Piloted_Missile_Sounds";
	}
	else
	{
		Local_213.f_119 = "DLC_BTL_Drone_Sounds";
	}
}

int func_411(int iParam0)
{
	if (iParam0 != func_16())
	{
		return Global_2424073[iParam0 /*421*/].f_416.f_1;
	}
	return -1;
}

void func_412(bool bParam0)
{
	if (bParam0)
	{
		if (!func_184())
		{
			unk_0xA1E7A40E1F56E511(&Global_1687880, 15);
		}
	}
	else if (func_184())
	{
		unk_0x3B76114EC84D5812(&Global_1687880, 15);
	}
}

void func_413(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xA2BC31158C8CEFD2(Global_1687880.f_2, 4))
		{
			Global_1687880.f_2 = 0;
			unk_0xA1E7A40E1F56E511(&(Global_1687880.f_2), 4);
		}
	}
	else if (unk_0xA2BC31158C8CEFD2(Global_1687880.f_2, 4))
	{
		unk_0x3B76114EC84D5812(&(Global_1687880.f_2), 4);
	}
}

int func_414(int iParam0)
{
	if (iParam0 == unk_0x7C7787D2D7139A85() && !func_415())
	{
		return Global_2508090.f_1;
	}
	return Global_2417783.f_2620[iParam0 /*3*/].f_1;
}

int func_415()
{
	if (((Global_2508093 != 0 && Global_2508093 == Global_2508094) && Global_2508082 != 3) && Global_2508082 != 1)
	{
		return 0;
	}
	return 1;
}

void func_416()
{
	if (!func_393())
	{
		if (func_32())
		{
			if (func_367())
			{
				if (!unk_0x0945988C02AF3025() && !unk_0x8F4A1C79B0DAADA3())
				{
					func_419("DRONE_TRIG");
				}
			}
			else if (func_418("DRONE_TRIG"))
			{
				unk_0x0D23E3918F7AF11B(1);
			}
			if (func_32() || func_366())
			{
				if (unk_0x1EB14C6F68B8F915(2, 176) || unk_0x38CEC20C56D8586B(2, 176))
				{
					func_360(1);
					func_352(1);
					unk_0x0D23E3918F7AF11B(1);
				}
			}
			else if (func_418("DRONE_TRIG"))
			{
				if ((unk_0x1EB14C6F68B8F915(2, 51) || unk_0x38CEC20C56D8586B(2, 51)) || unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
				{
					Local_213.f_118 = 0;
					func_360(1);
					func_352(1);
					unk_0x0D23E3918F7AF11B(1);
				}
			}
		}
		else if ((func_30() && !unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), -1420.684f, -3010.617f, -77.99994f, -1423.142f, -3012.295f, -77.74994f, 2f, 0, 1, 0)) && func_367())
		{
			if (!unk_0x0945988C02AF3025() && !unk_0x8F4A1C79B0DAADA3())
			{
				func_419("DRONE_TRIG");
			}
			if (func_418("DRONE_TRIG"))
			{
				if (unk_0x1EB14C6F68B8F915(2, 51) || unk_0x38CEC20C56D8586B(2, 51))
				{
					Local_213.f_118 = 0;
					func_360(1);
					func_352(1);
					unk_0x0D23E3918F7AF11B(1);
				}
			}
		}
		else if (func_418("DRONE_TRIG"))
		{
			unk_0x0D23E3918F7AF11B(1);
		}
		if (func_417() || func_32())
		{
			if (func_418("DRONE_TRIG"))
			{
				unk_0x0D23E3918F7AF11B(1);
			}
		}
	}
	else if (func_418("DRONE_TRIG"))
	{
		unk_0x0D23E3918F7AF11B(1);
	}
}

int func_417()
{
	if ((((unk_0xF6FD8019402CF03B(unk_0x0FA8183DAD2B3203(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter", 3) || unk_0xF6FD8019402CF03B(unk_0x0FA8183DAD2B3203(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter_left", 3)) || unk_0xF6FD8019402CF03B(unk_0x0FA8183DAD2B3203(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit", 3)) || unk_0xF6FD8019402CF03B(unk_0x0FA8183DAD2B3203(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit_left", 3)) || func_51(unk_0x0FA8183DAD2B3203(), 2106541073))
	{
		return 1;
	}
	if ((unk_0xF6FD8019402CF03B(unk_0x0FA8183DAD2B3203(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "base", 3) || unk_0xF6FD8019402CF03B(unk_0x0FA8183DAD2B3203(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_enter", 3)) || unk_0xF6FD8019402CF03B(unk_0x0FA8183DAD2B3203(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_exit", 3))
	{
		return 1;
	}
	return 0;
}

bool func_418(char* sParam0)
{
	unk_0x1EF54B101C71E009(sParam0);
	return unk_0xFA637652FFB4E2E5(0);
}

void func_419(char* sParam0)
{
	unk_0xD95C12E1062B7D5E(sParam0);
	unk_0x40DC0B0D5BD91E06(0, 1, 1, -1);
}

void func_420(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xA2BC31158C8CEFD2(Global_1687880.f_2, 1))
		{
			Global_1687880.f_2 = 0;
			unk_0xA1E7A40E1F56E511(&(Global_1687880.f_2), 1);
		}
	}
	else if (unk_0xA2BC31158C8CEFD2(Global_1687880.f_2, 1))
	{
		unk_0x3B76114EC84D5812(&(Global_1687880.f_2), 1);
	}
}

void func_421()
{
	if (unk_0x8A7BBB98FFB32893(Local_213.f_121))
	{
		if (!unk_0xF4B969E0807E76C7(unk_0x40237B62400B4BCC(Local_213.f_121), 0))
		{
			Local_213.f_112 = { unk_0xACE5E491FC1B0D37(unk_0x40237B62400B4BCC(Local_213.f_121), 1) };
			Local_213.f_87 = unk_0xD2809C7F7FD79247(unk_0x40237B62400B4BCC(Local_213.f_121));
			if (!func_10(&(Local_213.f_190)))
			{
				func_8(&(Local_213.f_190), 0, 0);
			}
			else if (func_7(&(Local_213.f_190), 1000, 0))
			{
				if (!func_380(Global_2424073[unk_0x7C7787D2D7139A85() /*421*/].f_407, Local_213.f_112, 0))
				{
					Global_2424073[unk_0x7C7787D2D7139A85() /*421*/].f_407 = { Local_213.f_112 };
				}
				if (Global_2424073[unk_0x7C7787D2D7139A85() /*421*/].f_410 != unk_0xD2809C7F7FD79247(unk_0x40237B62400B4BCC(Local_213.f_121)))
				{
					Global_2424073[unk_0x7C7787D2D7139A85() /*421*/].f_410 = unk_0xD2809C7F7FD79247(unk_0x40237B62400B4BCC(Local_213.f_121));
				}
				func_6(&(Local_213.f_190));
			}
		}
	}
	if (func_25(Local_213.f_125))
	{
		if (unk_0x0975E9E48EA2CC7B(Local_213.f_125))
		{
			unk_0x2BBEC4B37B923F4B(Local_213.f_125, false, 0);
		}
	}
	if (func_25(Local_213.f_123))
	{
		if (unk_0x0975E9E48EA2CC7B(Local_213.f_123))
		{
			unk_0x2BBEC4B37B923F4B(Local_213.f_123, false, 0);
		}
	}
}

void func_422()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0xEC6B468B6F580489(1))
	{
		iVar1 = unk_0x87C4D2EB1080B8EA(1, iVar0);
		switch (iVar1)
		{
			case 185:
				func_423(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_423(int iParam0)
{
	struct<2> Var0;
	
	if (unk_0x8A7BBB98FFB32893(Local_213.f_121))
	{
		if (unk_0x3C1EC42A2CC175C5(1, iParam0, &Var0, 11))
		{
			if (unk_0xD4B321D9096B01FC(Var0.f_0) && unk_0xAEA6D4EC961DFA03(Local_213.f_121) == Var0.f_0)
			{
				if (unk_0xD4B321D9096B01FC(Var0.f_1))
				{
					if (unk_0x4625051E51BA911B(Var0.f_1))
					{
						if (unk_0x7FA2061748BA645E(unk_0x3D464779B732760F(Var0.f_1)) && unk_0x0FA8183DAD2B3203() != unk_0x3D464779B732760F(Var0.f_1))
						{
							Local_213.f_25 = 2;
						}
					}
				}
			}
		}
	}
}

void func_424()
{
	if (func_430(3))
	{
		if (((func_119() || func_9()) || func_29()) || (func_17() && !func_18()))
		{
			if (!unk_0xB3E4EBF4EFCF92BD(unk_0x7C7787D2D7139A85()))
			{
				func_274(unk_0x7C7787D2D7139A85(), 1, 0, 0);
			}
		}
		unk_0x572062A62138FBA2(0, 37, 0);
		if (!func_27())
		{
			func_425();
			unk_0x583A42EE47B55D77(0, 19, 1);
			unk_0x583A42EE47B55D77(0, 166, 1);
			unk_0x583A42EE47B55D77(0, 167, 1);
			unk_0x583A42EE47B55D77(0, 168, 1);
			unk_0x583A42EE47B55D77(0, 169, 1);
			unk_0x583A42EE47B55D77(2, 218, 1);
			unk_0x583A42EE47B55D77(2, 219, 1);
			unk_0x583A42EE47B55D77(2, 220, 1);
			unk_0x583A42EE47B55D77(2, 221, 1);
			unk_0x583A42EE47B55D77(2, 205, 1);
			unk_0x583A42EE47B55D77(2, 206, 1);
			unk_0x583A42EE47B55D77(2, 207, 1);
			unk_0x583A42EE47B55D77(2, 208, 1);
			unk_0x583A42EE47B55D77(2, 209, 1);
			unk_0x583A42EE47B55D77(2, 210, 1);
			unk_0x583A42EE47B55D77(2, 202, 1);
			unk_0x583A42EE47B55D77(2, 51, 1);
			unk_0x583A42EE47B55D77(2, 190, 1);
			unk_0x583A42EE47B55D77(2, 189, 1);
			unk_0x583A42EE47B55D77(2, 188, 1);
			unk_0x583A42EE47B55D77(2, 187, 1);
			unk_0x583A42EE47B55D77(2, 201, 1);
			unk_0x583A42EE47B55D77(2, 199, 1);
			unk_0x583A42EE47B55D77(2, 200, 1);
			if (unk_0x59415A8719336539(0))
			{
				unk_0x583A42EE47B55D77(0, 238, 1);
				unk_0x583A42EE47B55D77(0, 237, 1);
				unk_0x583A42EE47B55D77(2, 235, 1);
				unk_0x583A42EE47B55D77(2, 234, 1);
				unk_0x583A42EE47B55D77(2, 1, 1);
				unk_0x583A42EE47B55D77(2, 174, 1);
				unk_0x583A42EE47B55D77(2, 175, 1);
				unk_0x583A42EE47B55D77(0, 174, 1);
				unk_0x583A42EE47B55D77(0, 175, 1);
				unk_0x583A42EE47B55D77(0, 245, 1);
				unk_0x583A42EE47B55D77(0, 246, 1);
				unk_0x583A42EE47B55D77(0, 247, 1);
				unk_0x583A42EE47B55D77(0, 248, 1);
			}
			if (unk_0xCD97B9861557C025())
			{
				unk_0x583A42EE47B55D77(0, 201, 1);
				unk_0x583A42EE47B55D77(0, 202, 1);
				unk_0x583A42EE47B55D77(0, 188, 1);
				unk_0x583A42EE47B55D77(0, 187, 1);
				unk_0x583A42EE47B55D77(0, 189, 1);
				unk_0x583A42EE47B55D77(2, 195, 1);
				unk_0x583A42EE47B55D77(2, 196, 1);
				unk_0x583A42EE47B55D77(2, 198, 1);
				unk_0x583A42EE47B55D77(2, 197, 1);
				unk_0x583A42EE47B55D77(2, 217, 1);
			}
		}
	}
}

void func_425()
{
	func_426();
}

void func_426()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 359)
	{
		unk_0x572062A62138FBA2(0, iVar0, 1);
		iVar0++;
	}
}

void func_427()
{
	if (unk_0xA2BC31158C8CEFD2(Local_213.f_5, 28))
	{
		if (!func_10(&(Local_213.f_192)))
		{
			func_8(&(Local_213.f_192), 0, 0);
		}
		else if (func_7(&(Local_213.f_192), 5000, 0))
		{
			unk_0x3B76114EC84D5812(&(Local_213.f_5), 28);
			func_6(&(Local_213.f_192));
		}
	}
}

void func_428()
{
	int iVar0;
	
	if (unk_0xA2BC31158C8CEFD2(Local_213.f_5, 27))
	{
		if (Global_2424073[unk_0x7C7787D2D7139A85() /*421*/].f_309.f_8 != func_16())
		{
			iVar0 = Global_2424073[unk_0x7C7787D2D7139A85() /*421*/].f_309.f_8;
		}
		else if (Global_1590293 != func_16())
		{
			iVar0 = Global_1590293;
		}
		else if (func_256(unk_0x7C7787D2D7139A85(), 0))
		{
			if (func_149() != func_16())
			{
				iVar0 = func_149();
			}
		}
		if (iVar0 != func_16())
		{
			if (unk_0xD56C8C2B75BF9665(iVar0))
			{
				if (unk_0x393E9918BC37548A())
				{
					func_160(iVar0, 0);
					unk_0x3B76114EC84D5812(&(Local_213.f_5), 27);
				}
			}
		}
	}
}

void func_429()
{
	struct<3> Var0;
	
	if (func_119())
	{
		if (func_430(1))
		{
			if (func_25(func_318()))
			{
				Var0 = { unk_0xACE5E491FC1B0D37(func_318(), 1) };
				unk_0xDA1AAECF106B6DA6(Var0, 200f, 200f);
				unk_0x59FC503ECA4D6077(Local_213.f_112, 60f, 30);
			}
		}
	}
	if (func_430(1) || func_430(3))
	{
		if (unk_0x8A7BBB98FFB32893(Local_213.f_121))
		{
			if (unk_0xD2652A8A890B29BA(Local_213.f_131) && unk_0xBE2A1549F5014A49(Local_213.f_131))
			{
				if (func_430(3))
				{
					unk_0xDA1AAECF106B6DA6(Local_213.f_112, 60f, 200f);
					unk_0xA0E8C4E15B1FD908();
					unk_0xF819E1DA22C9AA6F(Local_213.f_112, unk_0x93DC424F261951D6(unk_0x833BB45D35E36889(Local_213.f_121)));
					if ((unk_0xB3EE417AD9F0CAA2() % 120) == 0)
					{
						unk_0x59FC503ECA4D6077(Local_213.f_112, 60f, 30);
					}
				}
			}
		}
	}
}

bool func_430(int iParam0)
{
	return Local_213.f_170 == iParam0;
}

int func_431()
{
	if (func_435())
	{
		return 1;
	}
	if (!func_282())
	{
		return 1;
	}
	if (unk_0x7C7787D2D7139A85() != func_16())
	{
		if (func_245(unk_0x7C7787D2D7139A85()) && !func_244())
		{
			return 1;
		}
	}
	if (func_181(unk_0x7C7787D2D7139A85()))
	{
		return 1;
	}
	if (func_341(unk_0x7C7787D2D7139A85()))
	{
		return 1;
	}
	if (func_434())
	{
		if (func_433())
		{
			return 1;
		}
		if (func_342(unk_0x7C7787D2D7139A85(), 1, 1))
		{
			return 1;
		}
		if (func_31())
		{
			return 1;
		}
		if (!func_432())
		{
			if (func_7(&(Local_213.f_208), 10000, 0))
			{
				return 1;
			}
		}
		else
		{
			func_6(&(Local_213.f_208));
		}
	}
	return 0;
}

int func_432()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (unk_0xAAAE7D3270284C4E() - 1))
	{
		if (unk_0xA2BC31158C8CEFD2(Local_115[iVar0 /*3*/], 0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_433()
{
	return unk_0xA2BC31158C8CEFD2(Global_1687880, 22);
}

bool func_434()
{
	return unk_0xA2BC31158C8CEFD2(Local_213.f_6, 3);
}

bool func_435()
{
	return unk_0xA2BC31158C8CEFD2(Global_1687880, 0);
}

int func_436()
{
	var uVar0;
	
	func_444(&uVar0);
	if (Global_1312850 == 0)
	{
		if (!unk_0x393E9918BC37548A())
		{
			return 1;
		}
	}
	if (func_443())
	{
		return 1;
	}
	if (Global_2461241)
	{
		return 1;
	}
	if (func_442())
	{
		return 1;
	}
	if (func_441(159))
	{
		if (!func_440())
		{
			return 1;
		}
	}
	if (func_441(157))
	{
		return 1;
	}
	if (!unk_0x2A983C9CF4EE0D5E())
	{
		return 1;
	}
	if (func_437() != 0)
	{
		if (unk_0x222F76006659B0EB(func_437()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_437()
{
	switch (func_439())
	{
		case 0:
			return func_438();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_438()
{
	switch (Global_2461343)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_439()
{
	return Global_30736;
}

bool func_440()
{
	return Global_2448961.f_598;
}

int func_441(int iParam0)
{
	if (unk_0xD076BFB919B20653(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_442()
{
	return Global_2458999;
}

bool func_443()
{
	return Global_2448961.f_593;
}

void func_444(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0xEC6B468B6F580489(1))
	{
		iVar1 = unk_0x87C4D2EB1080B8EA(1, iVar0);
		if (iVar1 == 174)
		{
			unk_0x3C1EC42A2CC175C5(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -1773456834:
					func_445(iVar0);
					break;
				
				case -498955166:
					unk_0x3C1EC42A2CC175C5(1, iVar0, &Var4, 4);
					if (Var4.f_2 == 1934809180)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_445(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x3C1EC42A2CC175C5(1, iParam0, &Var0, 3))
	{
		if (func_15(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x23625FE58BACEBFD(Var0.f_1);
			if (unk_0xD4B321D9096B01FC(uVar3))
			{
				if (unk_0x5294582CE404D3F4(iVar3, 0))
				{
					uVar4 = unk_0x4D57D3E5ECE15A41(iVar3, 0);
					if (unk_0x3D65AB2C3D476E32(uVar4, Var0.f_2) && unk_0xF77CF4BC35906B30())
					{
						if (func_446(uVar4, &bVar5))
						{
							unk_0x302E0AC3BB715211(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xF25956700ADFD77F(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_446(int iParam0, var uParam1)
{
	if (unk_0xD4B321D9096B01FC(uParam0))
	{
		if (!unk_0x00123AB82C5FAC28(iParam0))
		{
			if (unk_0xDCDE4069CE0EA4A6(iParam0))
			{
				if (!unk_0x89771D1B3DD40E7A(unk_0x7F375072508F738F(iParam0)))
				{
					unk_0xE5C667CF3B4642D2(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x532AFD85DAA91F63(iParam0, 0))
		{
			if (unk_0x77FF1FAF6F41CA71(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_447()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_448(bool bParam0)
{
	if (!func_434())
	{
		func_454(bParam0);
	}
	else
	{
		func_449();
	}
}

void func_449()
{
	func_6(&(Local_213.f_208));
	func_453(0);
	func_452(0);
	func_451(0);
	func_450();
}

void func_450()
{
	unk_0x9C9E32388A7886A2();
}

void func_451(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xA2BC31158C8CEFD2(Global_1687880, 21))
		{
			unk_0xA1E7A40E1F56E511(&Global_1687880, 21);
		}
	}
	else if (unk_0xA2BC31158C8CEFD2(Global_1687880, 21))
	{
		unk_0x3B76114EC84D5812(&Global_1687880, 21);
	}
}

void func_452(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xA2BC31158C8CEFD2(Global_1687880, 22))
		{
			unk_0xA1E7A40E1F56E511(&Global_1687880, 22);
		}
	}
	else if (unk_0xA2BC31158C8CEFD2(Global_1687880, 22))
	{
		unk_0x3B76114EC84D5812(&Global_1687880, 22);
	}
}

void func_453(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xA2BC31158C8CEFD2(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_273.f_274, 31))
		{
			unk_0xA1E7A40E1F56E511(&(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_273.f_274), 31);
		}
	}
	else if (unk_0xA2BC31158C8CEFD2(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_273.f_274, 31))
	{
		unk_0x3B76114EC84D5812(&(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_273.f_274), 31);
	}
}

void func_454(bool bParam0)
{
	var uVar0;
	struct<8> Var1;
	var uVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	struct<8> Var14;
	
	if (unk_0x8A7BBB98FFB32893(Local_213.f_121))
	{
		unk_0x5CD902263A2E9D7F(Local_213.f_121, 1);
		if (unk_0xF42AC9E0924DC59B(Local_213.f_121))
		{
			if (!unk_0xA2BC31158C8CEFD2(Local_213.f_6, 2))
			{
				if (func_27())
				{
					if (func_25(unk_0x0FA8183DAD2B3203()))
					{
						unk_0x4F13F3CA0BEA7327(unk_0x0FA8183DAD2B3203(), Local_213.f_112, 72, 0.5f, 1, 0, 1065353216);
					}
					else
					{
						unk_0x8C9274F91C8D4239(Local_213.f_112, 72, 0.5f, 1, 0, 1065353216, 0);
					}
					unk_0x9EDF0FD0707786D3(0, 300, 200);
					unk_0xA1E7A40E1F56E511(&(Local_213.f_6), 2);
				}
			}
			unk_0x177A62AB5B680108();
			uVar0 = unk_0x833BB45D35E36889(Local_213.f_121);
			unk_0x8876CB6BC167181F(uVar0, 0, 1);
			unk_0x377C9F2989832369(&uVar0);
		}
		else
		{
			unk_0x4DB32D0662E0696B(Local_213.f_121);
			return;
		}
	}
	if (func_17() && !func_18())
	{
		Var1 = -1;
		Var1.f_6 = 1073741824;
		Var1.f_7 = -1073741824;
		Var1.f_3 = 0;
		Var1.f_4 = 0;
		func_472(&Var1, 11);
	}
	if (func_418("DRONE_TRIG"))
	{
		unk_0x0D23E3918F7AF11B(1);
	}
	if (func_25(Local_213.f_123))
	{
		uVar10 = Local_213.f_123;
		unk_0x4F058F27442031CC(&uVar10);
	}
	if (unk_0xD4B321D9096B01FC(Local_213.f_124))
	{
		unk_0x377C9F2989832369(&(Local_213.f_124));
	}
	if (unk_0x39A01A052D9B5FF0(Local_213.f_133))
	{
		unk_0xAA2276003B2ADF1B(&(Local_213.f_133));
	}
	if (unk_0x39A01A052D9B5FF0(Local_213.f_134))
	{
		unk_0xAA2276003B2ADF1B(&(Local_213.f_134));
	}
	if (unk_0xD4B321D9096B01FC(Local_213.f_125))
	{
		unk_0xBD22862A2C5FD6DF(&(Local_213.f_125));
	}
	unk_0x54DAE1C749971F4D();
	unk_0x3A91AF23B79A3E1A();
	unk_0xC3494B83BE64D7A4();
	unk_0x700E6BD29C3E8458(0f);
	if (func_218())
	{
		func_217(0);
	}
	func_302(1, -1);
	func_471();
	if (func_18())
	{
		func_310(0);
	}
	if (unk_0x8A7BBB98FFB32893(Local_213.f_122))
	{
		uVar11 = unk_0x833BB45D35E36889(Local_213.f_122);
		unk_0x377C9F2989832369(&uVar11);
	}
	if (!bParam0)
	{
		if (!unk_0x9591DE0F00127F2A(Local_213.f_120))
		{
			unk_0x7D74D6A091150B86(Local_213.f_120);
		}
		func_470(0);
	}
	func_227(0);
	if (func_469() && (!func_245(unk_0x7C7787D2D7139A85()) || func_244()))
	{
		func_274(unk_0x7C7787D2D7139A85(), 1, 0, 0);
		unk_0x860A5CC30A0EF207(unk_0x0FA8183DAD2B3203(), false);
	}
	Local_213.f_83 = 0f;
	Local_213.f_84 = 0f;
	Local_213.f_11 = 0;
	Local_213.f_13 = 0;
	Local_213.f_9 = 0;
	Local_213.f_15 = 0;
	func_6(&(Local_213.f_174));
	func_6(&(Local_213.f_176));
	if (!Local_213.f_118)
	{
		func_6(&(Local_213.f_178));
	}
	func_6(&(Local_213.f_182));
	func_6(&(Local_213.f_180));
	func_6(&(Local_213.f_184));
	func_6(&(Local_213.f_188));
	func_6(&(Local_213.f_194));
	func_6(&(Local_213.f_192));
	func_6(&(Local_213.f_190));
	func_6(&(Local_213.f_196));
	func_6(&(Local_213.f_198));
	func_6(&(Local_213.f_200));
	func_6(&(Local_213.f_204));
	func_6(&(Local_213.f_206));
	func_6(&(Local_213.f_186));
	Local_213.f_27 = 0;
	Local_213.f_5 = 0;
	Local_213.f_6 = 0;
	Global_1687880.f_4 = -1;
	func_468(-1f);
	func_406(0f);
	func_224(0);
	func_409(0);
	func_467(0);
	func_407(0);
	func_203(0);
	func_466(0);
	func_158(0);
	func_465(0);
	func_464(0);
	func_463(0);
	func_55(1);
	func_268(0);
	func_266(0);
	func_272(0);
	func_412(0);
	func_379(0f, 0f, 0f, 0f, 0f, 0f);
	func_462();
	Global_1687880.f_24 = -1;
	unk_0x3B76114EC84D5812(&Global_2508068, 0);
	unk_0x3B76114EC84D5812(&Global_1695603, 0);
	func_352(0);
	if (!func_461(0))
	{
		func_264();
	}
	if (func_58())
	{
		func_144("SET_WARNING_IS_VISIBLE", 0);
		if (func_119())
		{
			if (Global_2424073[unk_0x7C7787D2D7139A85() /*421*/].f_309.f_8 != func_16() && unk_0xD56C8C2B75BF9665(Global_2424073[unk_0x7C7787D2D7139A85() /*421*/].f_309.f_8))
			{
				iVar12 = Global_2424073[unk_0x7C7787D2D7139A85() /*421*/].f_309.f_8;
			}
			else if (Global_1590293 != func_16() && unk_0xD56C8C2B75BF9665(Global_1590293))
			{
				iVar12 = Global_1590293;
			}
			else if (func_256(unk_0x7C7787D2D7139A85(), 0))
			{
				if (func_149() != func_16() && unk_0xD56C8C2B75BF9665(func_149()))
				{
					iVar12 = func_149();
				}
			}
			if (iVar12 != func_16())
			{
				if (unk_0xD56C8C2B75BF9665(iVar12) && unk_0x393E9918BC37548A())
				{
					func_160(iVar12, 0);
					unk_0xA1E7A40E1F56E511(&(Local_213.f_5), 28);
				}
				else
				{
					unk_0xA1E7A40E1F56E511(&(Local_213.f_5), 27);
				}
			}
			else
			{
				unk_0xA1E7A40E1F56E511(&(Local_213.f_5), 27);
			}
		}
		else if (func_17() || func_142())
		{
			func_6(&Global_1687845);
			func_460(300000);
			func_459(1);
			unk_0xA1E7A40E1F56E511(&(Local_213.f_5), 28);
		}
		func_359(0);
		func_358(0);
		unk_0x3B76114EC84D5812(&(Local_115[unk_0x7C7787D2D7139A85() /*3*/]), 0);
		iVar13 = unk_0x25A1A0BF87F74E56(unk_0x675EE3FED67AA436(unk_0x169A8AC9F93C2727(), Local_213.f_135));
		if (func_17() || func_142())
		{
			if (func_142())
			{
				Var14.f_7 = Global_786547;
				Var14.f_1 = Global_786547.f_1;
				if (unk_0xA51CBC95AC3A4B14())
				{
					Var14.f_0 = Global_4456448.f_154360;
				}
				else
				{
					Var14.f_0 = func_457(unk_0x7C7787D2D7139A85());
				}
			}
			else
			{
				Var14.f_6 = 1;
			}
			Var14.f_4 = Local_213.f_26;
			Var14.f_5 = Local_213.f_28;
			Var14.f_3 = iVar13;
			Var14.f_2 = Local_213.f_25;
			unk_0xDFBD93BF2943E29B(&Var14);
		}
		else
		{
			unk_0x7841AC90B52F7E40(iVar13, Local_213.f_25, Local_213.f_26);
		}
	}
	func_456();
	func_360(0);
	func_243(0);
	func_167(0);
	unk_0x749CA887CB0AFEC9(&(Local_213.f_132));
	if (func_162(1) != 0)
	{
		unk_0xE0AC40EF164A2569(func_162(1));
	}
	if (func_162(0) != 0)
	{
		unk_0xE0AC40EF164A2569(func_162(0));
	}
	func_353(0);
	func_302(1, -1);
	Local_213.f_25 = 0;
	Local_213.f_26 = 0;
	Local_213.f_28 = 0;
	unk_0x96483FEDF4721FCB(Local_213.f_27);
	if (unk_0xFB3E0C95810C1454(Local_213.f_136[unk_0x7C7787D2D7139A85()]))
	{
		unk_0x47E6FFF8419C8442(Local_213.f_136[unk_0x7C7787D2D7139A85()], 0);
	}
	if (!bParam0)
	{
		if (!func_147(unk_0x7C7787D2D7139A85()))
		{
			func_455(0f, 0f, 0f, 0f);
		}
		Global_1687880.f_2 = 0;
		func_450();
	}
	else
	{
		func_405(0, 1);
	}
}

void func_455(struct<3> Param0, float fParam3)
{
	if (!func_380(Global_1687880.f_10, Param0, 0))
	{
		Global_1687880.f_10 = { Param0 };
		Global_1687880.f_7 = fParam3;
	}
}

void func_456()
{
	int iVar0;
	
	if (!unk_0xDE3C2FB26058823A(Local_213.f_40))
	{
		unk_0xCFF6AB47B7B014FF(Local_213.f_40);
		unk_0x0972EA9E8102C153(Local_213.f_40);
		Local_213.f_40 = -1;
	}
	if (!unk_0xDE3C2FB26058823A(Local_213.f_29))
	{
		unk_0xCFF6AB47B7B014FF(Local_213.f_29);
		unk_0x0972EA9E8102C153(Local_213.f_29);
		Local_213.f_29 = -1;
	}
	if (!unk_0xDE3C2FB26058823A(Local_213.f_30))
	{
		unk_0xCFF6AB47B7B014FF(Local_213.f_30);
		unk_0x0972EA9E8102C153(Local_213.f_30);
		Local_213.f_30 = -1;
	}
	if (!unk_0xDE3C2FB26058823A(Local_213.f_31))
	{
		unk_0xCFF6AB47B7B014FF(Local_213.f_31);
		unk_0x0972EA9E8102C153(Local_213.f_31);
		Local_213.f_31 = -1;
	}
	if (!unk_0xDE3C2FB26058823A(Local_213.f_32))
	{
		unk_0xCFF6AB47B7B014FF(Local_213.f_32);
		unk_0x0972EA9E8102C153(Local_213.f_32);
		Local_213.f_32 = -1;
	}
	if (!unk_0xDE3C2FB26058823A(Local_213.f_33))
	{
		unk_0xCFF6AB47B7B014FF(Local_213.f_33);
		unk_0x0972EA9E8102C153(Local_213.f_33);
		Local_213.f_33 = -1;
	}
	if (!unk_0xDE3C2FB26058823A(Local_213.f_39))
	{
		unk_0xCFF6AB47B7B014FF(Local_213.f_39);
		unk_0x0972EA9E8102C153(Local_213.f_39);
		Local_213.f_39 = -1;
	}
	if (!unk_0xDE3C2FB26058823A(Local_213.f_38))
	{
		unk_0xCFF6AB47B7B014FF(Local_213.f_38);
		unk_0x0972EA9E8102C153(Local_213.f_38);
		Local_213.f_38 = -1;
	}
	if (!unk_0xDE3C2FB26058823A(Local_213.f_37))
	{
		unk_0xCFF6AB47B7B014FF(Local_213.f_37);
		unk_0x0972EA9E8102C153(Local_213.f_37);
		Local_213.f_37 = -1;
	}
	if (!unk_0xDE3C2FB26058823A(Local_213.f_36))
	{
		unk_0xCFF6AB47B7B014FF(Local_213.f_36);
		unk_0x0972EA9E8102C153(Local_213.f_36);
		Local_213.f_36 = -1;
	}
	if (!unk_0xDE3C2FB26058823A(Local_213.f_35))
	{
		unk_0xCFF6AB47B7B014FF(Local_213.f_35);
		unk_0x0972EA9E8102C153(Local_213.f_35);
		Local_213.f_35 = -1;
	}
	if (!unk_0xDE3C2FB26058823A(Local_213.f_34))
	{
		unk_0xCFF6AB47B7B014FF(Local_213.f_34);
		unk_0x0972EA9E8102C153(Local_213.f_34);
		Local_213.f_34 = -1;
	}
	if (!unk_0xDE3C2FB26058823A(Local_213.f_41))
	{
		unk_0xCFF6AB47B7B014FF(Local_213.f_41);
		unk_0x0972EA9E8102C153(Local_213.f_41);
		Local_213.f_41 = -1;
	}
	if (!unk_0xDE3C2FB26058823A(Local_213.f_42))
	{
		unk_0xCFF6AB47B7B014FF(Local_213.f_42);
		unk_0x0972EA9E8102C153(Local_213.f_42);
		Local_213.f_42 = -1;
	}
	if (!unk_0xDE3C2FB26058823A(Local_213.f_80))
	{
		unk_0xCFF6AB47B7B014FF(Local_213.f_80);
		unk_0x0972EA9E8102C153(Local_213.f_80);
		Local_213.f_80 = -1;
	}
	if (func_434())
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (Local_213.f_45[iVar0] != -1)
			{
				unk_0xCFF6AB47B7B014FF(Local_213.f_45[iVar0]);
				unk_0x0972EA9E8102C153(Local_213.f_45[iVar0]);
				Local_213.f_45[iVar0] = -1;
			}
			iVar0++;
		}
	}
	func_138();
	if (unk_0x6FE3A7E505FEC20C("DLC_BTL_Hacker_Drone_HUD_Scene"))
	{
		unk_0x8E3496DF5BF7F24D("DLC_BTL_Hacker_Drone_HUD_Scene");
	}
	if (unk_0x6FE3A7E505FEC20C("dlc_aw_arena_piloted_missile_scene"))
	{
		unk_0x8E3496DF5BF7F24D("dlc_aw_arena_piloted_missile_scene");
	}
	if (unk_0x6FE3A7E505FEC20C("DLC_Arena_Battle_Drone_HUD_Scene"))
	{
		unk_0x8E3496DF5BF7F24D("DLC_Arena_Battle_Drone_HUD_Scene");
	}
	if (unk_0x6FE3A7E505FEC20C("DLC_Arena_Spectator_Drone_HUD_Scene"))
	{
		unk_0x8E3496DF5BF7F24D("DLC_Arena_Spectator_Drone_HUD_Scene");
	}
}

int func_457(int iParam0)
{
	if (func_140(iParam0) == 243)
	{
		return func_458(iParam0);
	}
	return -1;
}

int func_458(int iParam0)
{
	if (func_141(iParam0, 0))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_181;
	}
	return -1;
}

void func_459(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xA2BC31158C8CEFD2(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_273.f_330, 20))
		{
			unk_0xA1E7A40E1F56E511(&(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_273.f_330), 20);
		}
	}
	else if (unk_0xA2BC31158C8CEFD2(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_273.f_330, 20))
	{
		unk_0x3B76114EC84D5812(&(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_273.f_330), 20);
	}
}

void func_460(int iParam0)
{
	if (Global_1687880.f_5 != iParam0)
	{
		Global_1687880.f_5 = iParam0;
	}
}

bool func_461(int iParam0)
{
	return Local_213.f_171 == iParam0;
}

void func_462()
{
	if (func_155())
	{
		unk_0x3B76114EC84D5812(&Global_1687880, 7);
	}
}

void func_463(bool bParam0)
{
	if (bParam0)
	{
		if (func_58())
		{
			if (!unk_0xA2BC31158C8CEFD2(Global_1687880, 16))
			{
				unk_0xA1E7A40E1F56E511(&Global_1687880, 16);
			}
		}
	}
	else if (unk_0xA2BC31158C8CEFD2(Global_1687880, 16))
	{
		unk_0x3B76114EC84D5812(&Global_1687880, 16);
	}
}

void func_464(bool bParam0)
{
	if (bParam0)
	{
		if (!func_435())
		{
			unk_0xA1E7A40E1F56E511(&Global_1687880, 6);
		}
	}
	else if (func_435())
	{
		unk_0x3B76114EC84D5812(&Global_1687880, 6);
	}
}

void func_465(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xA2BC31158C8CEFD2(Global_1687880, 3))
		{
			unk_0xA1E7A40E1F56E511(&Global_1687880, 3);
		}
	}
	else if (unk_0xA2BC31158C8CEFD2(Global_1687880, 3))
	{
		unk_0x3B76114EC84D5812(&Global_1687880, 3);
	}
}

void func_466(bool bParam0)
{
	if (bParam0)
	{
		if (!func_363())
		{
			unk_0xA1E7A40E1F56E511(&Global_1687880, 10);
		}
	}
	else if (func_363())
	{
		unk_0x3B76114EC84D5812(&Global_1687880, 10);
	}
}

void func_467(bool bParam0)
{
	if (bParam0)
	{
		if (unk_0x222F76006659B0EB(unk_0xA8C462EF7D9DC564("AM_MP_DRONE")) > 0)
		{
			if (!func_435())
			{
				unk_0xA1E7A40E1F56E511(&Global_1687880, 0);
			}
		}
	}
	else if (func_435())
	{
		unk_0x3B76114EC84D5812(&Global_1687880, 0);
	}
}

void func_468(float fParam0)
{
	if (Global_1687880.f_9 != fParam0)
	{
		Global_1687880.f_9 = fParam0;
	}
}

int func_469()
{
	if (!func_282())
	{
		return 0;
	}
	if (func_48(unk_0x7C7787D2D7139A85()))
	{
		return 0;
	}
	if (!func_58())
	{
		return 0;
	}
	if (func_27())
	{
		return 0;
	}
	return 1;
}

void func_470(bool bParam0)
{
	if (bParam0)
	{
		if (!func_18())
		{
			unk_0xA1E7A40E1F56E511(&Global_1687880, 24);
		}
	}
	else if (func_18())
	{
		unk_0x3B76114EC84D5812(&Global_1687880, 24);
	}
}

void func_471()
{
	if (unk_0xD2652A8A890B29BA(Local_213.f_131))
	{
		unk_0xDC5BA18043353983(Local_213.f_131, 0);
		unk_0x0298C8010FD5A69E(0, 0, 3000, 1, 0, 0);
		if (!func_28() || unk_0xA2BC31158C8CEFD2(Local_213.f_6, 0))
		{
			unk_0xBAA4E225DE364743();
		}
	}
}

void func_472(var uParam0, int iParam1)
{
	struct<8> Var0;
	bool bVar8;
	bool bVar9;
	int iVar10;
	
	Var0.f_5 = 1073741824;
	Var0.f_6 = -1073741824;
	Var0.f_0 = 1450126354;
	Var0.f_1 = unk_0x7C7787D2D7139A85();
	Var0.f_2 = iParam1;
	Var0.f_3 = uParam0->f_3;
	Var0.f_4 = uParam0->f_4;
	Var0.f_5 = uParam0->f_6;
	Var0.f_6 = uParam0->f_7;
	Var0.f_7 = uParam0->f_8;
	bVar8 = false;
	if (iParam1 == 11)
	{
		if (unk_0xA2BC31158C8CEFD2(Global_2424073[unk_0x7C7787D2D7139A85() /*421*/].f_416, 1))
		{
			unk_0x3B76114EC84D5812(&(Global_2424073[unk_0x7C7787D2D7139A85() /*421*/].f_416), 1);
			bVar8 = true;
		}
	}
	uParam0->f_5 = 0;
	if (!func_10(&(uParam0->f_1)))
	{
		func_8(&(uParam0->f_1), 0, 0);
	}
	bVar9 = true;
	if (*uParam0 == iParam1 && !bVar8)
	{
		if (func_10(&(uParam0->f_1)) && !func_7(&(uParam0->f_1), 1000, 0))
		{
			bVar9 = false;
		}
		else
		{
			func_6(&(uParam0->f_1));
		}
	}
	else
	{
		*uParam0 = iParam1;
		func_6(&(uParam0->f_1));
	}
	if (bVar9)
	{
		iVar10 = func_173(unk_0x7C7787D2D7139A85());
		if (iVar10 != -1)
		{
			unk_0x990C4E4B3665A4D6(1, &Var0, 8, iVar10);
			uParam0->f_5 = 1;
		}
	}
}

void func_473(struct<12> Param0)
{
	unk_0x4CF6FBF2580A447D(32, 0, Param0.f_0);
	func_481(0, -1, 0);
	unk_0xCCD47D736BFD5DE3(&uLocal_212, 1);
	unk_0xFF584A1B7842F821(&Local_115, 97);
	if (!func_480())
	{
		func_448(0);
	}
	if (Param0.f_11)
	{
		unk_0xA1E7A40E1F56E511(&(Local_213.f_6), 3);
	}
	if (unk_0x393E9918BC37548A())
	{
		if (!func_434())
		{
			Local_213.f_97 = { Param0.f_2 };
			switch (Param0.f_1)
			{
				case 1:
					if (unk_0xD4B321D9096B01FC(func_318()) && !unk_0xF4B969E0807E76C7(func_318(), 0))
					{
						Local_213.f_106 = { unk_0x16DECC52D9360F1E(unk_0xACE5E491FC1B0D37(func_318(), 1), unk_0xD2809C7F7FD79247(func_318()), 0f, 1.6f, 2.9f) };
						Local_213.f_100 = { Local_213.f_106 };
					}
					func_420(1);
					Local_115[unk_0x7C7787D2D7139A85() /*3*/].f_1 = 1;
					break;
				
				case 2:
					func_479(1);
					Local_213.f_106 = { Param0.f_5 };
					Local_115[unk_0x7C7787D2D7139A85() /*3*/].f_1 = 2;
					break;
				
				case 3:
					func_478(1);
					Local_213.f_106 = { Param0.f_5 };
					Local_115[unk_0x7C7787D2D7139A85() /*3*/].f_1 = 3;
					break;
				
				case 4:
					func_413(1);
					Local_213.f_106 = { Param0.f_5 };
					Local_115[unk_0x7C7787D2D7139A85() /*3*/].f_1 = 4;
					break;
				
				case 5:
					func_477(1);
					Local_213.f_106 = { Param0.f_5 };
					Local_115[unk_0x7C7787D2D7139A85() /*3*/].f_1 = 5;
					break;
				
				case 6:
					func_476(1);
					Local_213.f_106 = { Param0.f_5 };
					Local_115[unk_0x7C7787D2D7139A85() /*3*/].f_1 = 6;
					break;
				
				default:
					func_475(1);
					Local_213.f_106 = { Param0.f_5 };
					break;
			}
			Local_213.f_103 = { Param0.f_8 };
			if (func_237(func_370()))
			{
				func_379(Local_213.f_106, 0f, 0f, 0f);
			}
		}
	}
	else
	{
		func_448(0);
	}
	if (!func_434())
	{
		func_405(1, 1);
	}
	else
	{
		func_474();
	}
}

void func_474()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Local_213.f_45[iVar0] = -1;
		iVar0++;
	}
	func_352(5);
}

void func_475(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xA2BC31158C8CEFD2(Global_1687880.f_2, 0))
		{
			Global_1687880.f_2 = 0;
			unk_0xA1E7A40E1F56E511(&(Global_1687880.f_2), 0);
		}
	}
	else if (unk_0xA2BC31158C8CEFD2(Global_1687880.f_2, 0))
	{
		unk_0x3B76114EC84D5812(&(Global_1687880.f_2), 0);
	}
}

void func_476(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xA2BC31158C8CEFD2(Global_1687880.f_2, 6))
		{
			Global_1687880.f_2 = 0;
			unk_0xA1E7A40E1F56E511(&(Global_1687880.f_2), 6);
		}
	}
	else if (unk_0xA2BC31158C8CEFD2(Global_1687880.f_2, 6))
	{
		unk_0x3B76114EC84D5812(&(Global_1687880.f_2), 6);
	}
}

void func_477(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xA2BC31158C8CEFD2(Global_1687880.f_2, 5))
		{
			Global_1687880.f_2 = 0;
			unk_0xA1E7A40E1F56E511(&(Global_1687880.f_2), 5);
		}
	}
	else if (unk_0xA2BC31158C8CEFD2(Global_1687880.f_2, 5))
	{
		unk_0x3B76114EC84D5812(&(Global_1687880.f_2), 5);
	}
}

void func_478(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xA2BC31158C8CEFD2(Global_1687880.f_2, 3))
		{
			Global_1687880.f_2 = 0;
			unk_0xA1E7A40E1F56E511(&(Global_1687880.f_2), 3);
		}
	}
	else if (unk_0xA2BC31158C8CEFD2(Global_1687880.f_2, 3))
	{
		unk_0x3B76114EC84D5812(&(Global_1687880.f_2), 3);
	}
}

void func_479(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xA2BC31158C8CEFD2(Global_1687880.f_2, 2))
		{
			Global_1687880.f_2 = 0;
			unk_0xA1E7A40E1F56E511(&(Global_1687880.f_2), 2);
		}
	}
	else if (unk_0xA2BC31158C8CEFD2(Global_1687880.f_2, 2))
	{
		unk_0x3B76114EC84D5812(&(Global_1687880.f_2), 2);
	}
}

int func_480()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x393E9918BC37548A())
		{
			return 0;
		}
		if (unk_0x7A22E0DA3B8BAF4B())
		{
			return 1;
		}
		if (func_443())
		{
			return 0;
		}
		if (func_441(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	return 0;
}

int func_481(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x306B26A377F9A5BE();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_450();
			}
			else
			{
				return 0;
			}
		}
		if (!func_482())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x393E9918BC37548A())
				{
					if (!bParam2)
					{
						func_450();
					}
					else
					{
						return 0;
					}
				}
				if (func_443())
				{
					if (!bParam2)
					{
						func_450();
					}
					else
					{
						return 0;
					}
				}
				if (func_441(157))
				{
					if (!bParam2)
					{
						func_450();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xA2E986F74092E569())
			{
				if (!bParam2)
				{
					func_450();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x306B26A377F9A5BE();
	}
	if (iParam1 > -1)
	{
		Global_1312501 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x393E9918BC37548A())
		{
			if (!bParam2)
			{
				func_450();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xA2E986F74092E569())
	{
		if (!bParam2)
		{
			func_450();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_482()
{
	return Global_1312850;
}

