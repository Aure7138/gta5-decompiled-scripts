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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
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
	int iLocal_112 = 0;
	var uLocal_113 = 0;
	struct<11> Local_114 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<4> Local_125[32];
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
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
		if (!func_700(ScriptParam_0))
		{
			func_643();
		}
	}
	while (true)
	{
		func_642();
		if (func_634())
		{
			func_643();
		}
		switch (func_633(unk_0x2E40EEA43EF34BD6()))
		{
			case 0:
				if (func_632() == 1)
				{
					if (func_631())
					{
						func_630(unk_0x2E40EEA43EF34BD6(), 1);
					}
				}
				break;
			
			case 1:
				if (func_632() == 1)
				{
					if (!func_628())
					{
						func_95();
					}
					if (func_52(1))
					{
						func_630(unk_0x2E40EEA43EF34BD6(), 3);
					}
				}
				else if (func_632() == 3)
				{
					func_630(unk_0x2E40EEA43EF34BD6(), 3);
				}
				break;
			
			case 3:
				func_643();
				break;
		}
		if (unk_0x722688699565161D())
		{
			if (func_51())
			{
				func_50(3);
			}
			switch (func_632())
			{
				case 0:
					if (func_42())
					{
						func_50(1);
					}
					break;
				
				case 1:
					if (func_41() == 3)
					{
						func_50(3);
					}
					else
					{
						func_1();
					}
					break;
				
				case 3:
					func_643();
					break;
				}
		}
	}
}

void func_1()
{
	switch (Local_114.f_8)
	{
		case 0:
			if (func_40())
			{
				func_39(1);
			}
			func_37();
			break;
		
		case 1:
			func_37();
			func_2();
			break;
		
		case 2:
			if (unk_0xA2BC31158C8CEFD2(Local_114.f_1, 5))
			{
				func_39(3);
			}
			func_37();
			break;
		
		case 3:
			break;
	}
}

void func_2()
{
	if (!func_13(func_36()))
	{
		func_12(1);
		func_39(2);
		unk_0xA1E7A40E1F56E511(&(Local_114.f_1), 2);
	}
	if (func_11() == func_10() || !func_9(func_11(), 0, 1))
	{
		func_12(3);
		func_39(2);
		unk_0xA1E7A40E1F56E511(&(Local_114.f_1), 3);
	}
	if (unk_0xA2BC31158C8CEFD2(Local_114.f_1, 0))
	{
		if (func_3(&(Local_114.f_4), func_5(), 0))
		{
			unk_0xA1E7A40E1F56E511(&(Local_114.f_1), 4);
		}
	}
	if (unk_0xA2BC31158C8CEFD2(Local_114.f_1, 4))
	{
		func_12(2);
		func_39(2);
	}
	if (unk_0xA2BC31158C8CEFD2(Local_114.f_1, 1) || unk_0xA2BC31158C8CEFD2(Local_114.f_1, 7))
	{
		func_12(0);
		func_39(2);
	}
}

int func_3(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_4(uParam0, bParam2, 0);
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

void func_4(var uParam0, bool bParam1, bool bParam2)
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

int func_5()
{
	if (func_6(unk_0x7C7787D2D7139A85(), 1))
	{
		return 120000;
	}
	return 300000;
}

bool func_6(int iParam0, bool bParam1)
{
	return func_7(iParam0, bParam1, 1);
}

int func_7(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_10())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_8(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1628955[iParam0 /*614*/].f_11;
	if (iVar0 != func_10() && Global_1628955[iVar0 /*614*/].f_11.f_450 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_8(int iParam0, int iParam1)
{
	if (iParam0 != func_10())
	{
		if (Global_1628955[iParam0 /*614*/].f_11 != func_10())
		{
			if (Global_1628955[iParam0 /*614*/].f_11 == iParam0 && Global_1628955[iParam0 /*614*/].f_11.f_450 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_9(int iParam0, bool bParam1, bool bParam2)
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

int func_10()
{
	return -1;
}

int func_11()
{
	return Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11;
}

void func_12(int iParam0)
{
	Local_114.f_9 = iParam0;
}

int func_13(int iParam0)
{
	if (func_33(iParam0) && ((func_31(iParam0) == 142 || func_31(iParam0) == 164) || func_31(iParam0) == 148))
	{
		return 0;
	}
	if (iParam0 == func_10())
	{
		return 0;
	}
	if (!func_9(iParam0, 0, 1))
	{
		return 0;
	}
	if (func_30(iParam0, 1, 0))
	{
		return 0;
	}
	if (func_29(iParam0))
	{
		return 0;
	}
	if (func_27(iParam0, 1) && func_26(iParam0) == func_11())
	{
		return 0;
	}
	if (func_22(iParam0))
	{
		return 0;
	}
	if (func_21(iParam0, 7))
	{
		return 0;
	}
	if (func_16(iParam0))
	{
		return 0;
	}
	if (func_14(iParam0, 6))
	{
		return 0;
	}
	return 1;
}

int func_14(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_1312448 != 0)
	{
		return 0;
	}
	if (!func_15(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1590446[iVar0 /*871*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

int func_15(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xA2BC31158C8CEFD2(Global_2437549.f_1, iParam0);
	}
	return 1;
}

int func_16(int iParam0)
{
	if (func_18(iParam0, 0))
	{
		return 1;
	}
	if (func_17())
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

bool func_17()
{
	return unk_0xA2BC31158C8CEFD2(Global_2359302, 3);
}

bool func_18(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x7C7787D2D7139A85())
	{
		bVar0 = func_19(-1, 0) == 8;
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

int func_19(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_20();
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

int func_20()
{
	return Global_1312745;
}

bool func_21(int iParam0, int iParam1)
{
	return unk_0xA2BC31158C8CEFD2(Global_2424073[iParam0 /*421*/].f_208, iParam1);
}

bool func_22(int iParam0)
{
	if (iParam0 == unk_0x7C7787D2D7139A85())
	{
		return func_25();
	}
	return unk_0xA2BC31158C8CEFD2(Global_1373500.f_241.f_136[func_24(10) /*33*/][iParam0], func_23(10));
}

int func_23(int iParam0)
{
	return (iParam0 % 32);
}

int func_24(int iParam0)
{
	return (iParam0 / 32);
}

bool func_25()
{
	return Global_1312417;
}

int func_26(int iParam0)
{
	if (iParam0 != func_10())
	{
		return Global_1628955[iParam0 /*614*/].f_11;
	}
	return func_10();
}

bool func_27(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_28(iParam0))
		{
			return 0;
		}
	}
	return Global_1628955[iParam0 /*614*/].f_11 != func_10();
}

int func_28(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (Global_1628955[iParam0 /*614*/].f_11 != func_10())
		{
			return Global_1628955[iParam0 /*614*/].f_11 == iParam0;
		}
	}
	return 0;
}

bool func_29(int iParam0)
{
	return Global_1590446[iParam0 /*871*/].f_196 != 0;
}

int func_30(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_10())
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

int func_31(int iParam0)
{
	if (func_32(iParam0, 0))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_33;
	}
	return -1;
}

int func_32(int iParam0, int iParam1)
{
	if (Global_1628955[iParam0 /*614*/].f_11.f_33 != -1 || (iParam1 && Global_1628955[iParam0 /*614*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_33(int iParam0)
{
	if (func_28(iParam0))
	{
		if (func_34(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_34(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_35(iParam0, 9);
	}
	return 0;
}

bool func_35(int iParam0, int iParam1)
{
	return unk_0xA2BC31158C8CEFD2(Global_1628955[iParam0 /*614*/].f_11.f_4, iParam1);
}

int func_36()
{
	return Local_114.f_2;
}

void func_37()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = unk_0xACF7D965CEBE5714();
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (func_41() < 2)
		{
			if (unk_0xA2BC31158C8CEFD2(Local_125[iVar2 /*4*/].f_1, 1))
			{
				func_38(unk_0x0C98179F08C6DA4F(iVar2));
				unk_0xA1E7A40E1F56E511(&(Local_114.f_1), 1);
			}
			if (unk_0xA2BC31158C8CEFD2(Local_125[iVar2 /*4*/].f_1, 4))
			{
				func_38(func_11());
				unk_0xA1E7A40E1F56E511(&(Local_114.f_1), 7);
			}
			if (unk_0xA2BC31158C8CEFD2(Local_125[iVar2 /*4*/].f_1, 0))
			{
				unk_0xA1E7A40E1F56E511(&(Local_114.f_1), 0);
			}
			if (unk_0xA2BC31158C8CEFD2(Local_125[iVar2 /*4*/].f_1, 2))
			{
				unk_0xA1E7A40E1F56E511(&(Local_114.f_1), 4);
			}
		}
		else if (func_41() == 2)
		{
			if (unk_0xA2BC31158C8CEFD2(Local_125[iVar2 /*4*/].f_1, 3))
			{
				iVar0++;
			}
		}
		iVar2++;
	}
	if (func_41() == 2)
	{
		if (iVar0 == unk_0xAAAE7D3270284C4E())
		{
			unk_0xA1E7A40E1F56E511(&(Local_114.f_1), 5);
		}
		else if (func_3(&(Local_114.f_6), 10000, 0))
		{
			unk_0xA1E7A40E1F56E511(&(Local_114.f_1), 5);
		}
	}
}

void func_38(int iParam0)
{
	Local_114.f_3 = iParam0;
}

void func_39(int iParam0)
{
	Local_114.f_8 = iParam0;
}

int func_40()
{
	return 1;
}

int func_41()
{
	return Local_114.f_8;
}

int func_42()
{
	if (func_43())
	{
		return 1;
	}
	return 0;
}

int func_43()
{
	if (unk_0xA2BC31158C8CEFD2(Local_114.f_1, 6))
	{
		return 1;
	}
	func_49(func_10());
	if (Global_2531497.f_4898.f_4 != func_10())
	{
	}
	else
	{
		func_50(3);
	}
	if (func_9(Global_2531497.f_4898.f_4, 0, 1))
	{
		if (!func_47(Global_2531497.f_4898.f_4, unk_0x7C7787D2D7139A85(), 1))
		{
			func_49(Global_2531497.f_4898.f_4);
		}
	}
	if (func_36() != func_10())
	{
		if (func_6(unk_0x7C7787D2D7139A85(), 1))
		{
			if (func_46(func_36(), 13))
			{
				Local_114.f_10 = 1;
			}
		}
		func_44(func_45(func_36()), 1);
		Global_2531497.f_4898.f_4 = func_10();
		unk_0xA1E7A40E1F56E511(&(Local_114.f_1), 6);
		return 1;
	}
	else if (func_36() == func_10())
	{
	}
	return 0;
}

void func_44(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.f_0 = 983043215;
	Var0.f_1 = unk_0x7C7787D2D7139A85();
	Var0.f_2 = iParam1;
	if (!iParam0 == 0)
	{
		unk_0x990C4E4B3665A4D6(1, &Var0, 3, iParam0);
	}
}

int func_45(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		unk_0xA1E7A40E1F56E511(&uVar0, iParam0);
	}
	return uVar0;
}

bool func_46(int iParam0, int iParam1)
{
	return unk_0xA2BC31158C8CEFD2(Global_1628955[iParam0 /*614*/].f_11.f_5, iParam1);
}

int func_47(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_10())
	{
		if (!bParam2)
		{
			if (func_48(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1628955[iParam0 /*614*/].f_11 != func_10())
		{
			return iParam1 == Global_1628955[iParam0 /*614*/].f_11;
		}
	}
	return 0;
}

int func_48(int iParam0, int iParam1)
{
	if (iParam1 != func_10())
	{
		if (iParam0 != func_10())
		{
			if (Global_1628955[iParam0 /*614*/].f_11 != func_10())
			{
				if (Global_1628955[iParam0 /*614*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

void func_49(int iParam0)
{
	Local_114.f_2 = iParam0;
	if (iParam0 == func_10())
	{
	}
}

void func_50(int iParam0)
{
	Local_114.f_0 = iParam0;
}

int func_51()
{
	if (Global_2531497.f_4898.f_38)
	{
		Global_2531497.f_4898.f_38 = 0;
		return 1;
	}
	return 0;
}

int func_52(bool bParam0)
{
	if (func_60(1))
	{
		return 1;
	}
	if (Global_2531497.f_4898.f_39)
	{
		Global_2531497.f_4898.f_39 = 0;
		return 1;
	}
	if (bParam0)
	{
		if (func_59() == func_10() || !func_9(func_59(), 0, 1))
		{
			return 1;
		}
	}
	if (!func_57(unk_0x7C7787D2D7139A85()))
	{
		if (func_56(unk_0x7C7787D2D7139A85()) && func_53())
		{
			return 1;
		}
	}
	return 0;
}

int func_53()
{
	switch (func_54(func_55(unk_0x7C7787D2D7139A85())))
	{
		case 11:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_54(int iParam0)
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

int func_55(int iParam0)
{
	if (iParam0 != func_10() && func_9(iParam0, 1, 1))
	{
		return Global_2424073[iParam0 /*421*/].f_309.f_14;
	}
	return -1;
}

int func_56(int iParam0)
{
	if (iParam0 != func_10() && func_9(iParam0, 1, 1))
	{
		return unk_0xA2BC31158C8CEFD2(Global_2424073[iParam0 /*421*/].f_309, 4);
	}
	return 0;
}

int func_57(int iParam0)
{
	if (func_58(iParam0) != func_10())
	{
		return func_58(iParam0) == func_26(iParam0);
	}
	return 0;
}

int func_58(int iParam0)
{
	return Global_1628955[iParam0 /*614*/].f_11.f_35;
}

int func_59()
{
	return Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_35;
}

int func_60(bool bParam0)
{
	bool bVar0;
	
	if (!func_94(1))
	{
		bVar0 = false;
		if (Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_57 != func_10())
		{
			if (func_9(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_57, 0, 1))
			{
				if ((Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_24 == 4 || Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_24 == 8) || Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_24 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_93(func_31(unk_0x7C7787D2D7139A85())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_92(31);
				if (func_91(func_31(unk_0x7C7787D2D7139A85())))
				{
					func_92(81);
				}
				if (Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_57 != func_10() && unk_0xD56C8C2B75BF9665(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_57))
				{
					Global_1627443 = func_62(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_57, -2, 0, 0, 0);
					if (!func_61(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_57))
					{
						func_92(88);
					}
				}
				else
				{
					Global_1627443 = 1;
				}
				Global_1627427 = { Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_104 };
			}
			return 1;
		}
	}
	return 0;
}

bool func_61(int iParam0)
{
	return func_8(iParam0, 1);
}

int func_62(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	
	if (func_16(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = unk_0xC69A85EEB9CA3B95(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4456448.f_149437[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_16(unk_0x7C7787D2D7139A85()) || (func_90() && func_89())) && !unk_0xA2BC31158C8CEFD2(Global_2531497.f_4591, 31)) && !bParam4)
	{
		uVar1 = func_88();
		if (unk_0xD4B321D9096B01FC(uVar1))
		{
			if (unk_0x7FA2061748BA645E(uVar1))
			{
				if (unk_0x74D4E16E179B8F53(uVar1) != -1)
				{
					if (func_9(unk_0x74D4E16E179B8F53(uVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0xA51CBC95AC3A4B14()) && iParam1 < 4)
						{
							if (Global_4456448.f_149437[iParam1] != -1)
							{
								return func_86(iParam1, iParam0, 0);
							}
							else
							{
								return func_75(iParam0, unk_0x74D4E16E179B8F53(uVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_75(iParam0, unk_0x74D4E16E179B8F53(uVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0xA51CBC95AC3A4B14()) && iParam1 < 4)
			{
				if (Global_4456448.f_149437[iParam1] != -1)
				{
					return func_86(iParam1, iParam0, 0);
				}
				else
				{
					return func_63(0, -1, 0);
				}
			}
			else
			{
				return func_63(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0xA51CBC95AC3A4B14()) && iParam1 < 4)
	{
		if (Global_4456448.f_149437[iParam1] != -1)
		{
			return func_86(iParam1, iParam0, 0);
		}
		else
		{
			return func_75(iParam0, unk_0x7C7787D2D7139A85(), iParam1, bParam2, bParam3);
		}
	}
	return func_75(iParam0, unk_0x7C7787D2D7139A85(), iParam1, bParam2, bParam3);
}

int func_63(bool bParam0, int iParam1, bool bParam2)
{
	return func_64(unk_0x7C7787D2D7139A85(), bParam0, iParam1, bParam2);
}

int func_64(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0xD56C8C2B75BF9665(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0xC69A85EEB9CA3B95(iParam0);
	if ((func_74() || (func_73() && func_71())) && Global_1384328.f_1)
	{
		if (bParam1)
		{
			return func_70(iParam2, iVar0);
		}
		else
		{
			return func_70(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_69(iVar0, iParam2, 0) && !unk_0xA2BC31158C8CEFD2(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_68(1);
				}
				else
				{
					return func_68(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xA2BC31158C8CEFD2(Global_4456448.f_4, 20))
			{
				return func_65(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_65(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_68(1);
	}
	return func_68(0);
}

int func_65(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_67(iParam0, iParam1, iParam3);
	if (func_66(Global_4456448.f_154360, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_66(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4456448.f_190930 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9019[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_67(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_69(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_68(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_69(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return unk_0xA2BC31158C8CEFD2(Global_4456448.f_56, 0);
				
				case 1:
					return unk_0xA2BC31158C8CEFD2(Global_4456448.f_56, 1);
				
				case 2:
					return unk_0xA2BC31158C8CEFD2(Global_4456448.f_56, 2);
				
				case 3:
					return unk_0xA2BC31158C8CEFD2(Global_4456448.f_56, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xA2BC31158C8CEFD2(Global_4456448.f_56, 4);
				
				case 1:
					return unk_0xA2BC31158C8CEFD2(Global_4456448.f_56, 5);
				
				case 2:
					return unk_0xA2BC31158C8CEFD2(Global_4456448.f_56, 6);
				
				case 3:
					return unk_0xA2BC31158C8CEFD2(Global_4456448.f_56, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xA2BC31158C8CEFD2(Global_4456448.f_56, 8);
				
				case 1:
					return unk_0xA2BC31158C8CEFD2(Global_4456448.f_56, 9);
				
				case 2:
					return unk_0xA2BC31158C8CEFD2(Global_4456448.f_56, 10);
				
				case 3:
					return unk_0xA2BC31158C8CEFD2(Global_4456448.f_56, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xA2BC31158C8CEFD2(Global_4456448.f_56, 12);
				
				case 1:
					return unk_0xA2BC31158C8CEFD2(Global_4456448.f_56, 13);
				
				case 2:
					return unk_0xA2BC31158C8CEFD2(Global_4456448.f_56, 14);
				
				case 3:
					return unk_0xA2BC31158C8CEFD2(Global_4456448.f_56, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_70(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_67(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

bool func_71()
{
	if (func_72())
	{
		return 1;
	}
	return unk_0xA2BC31158C8CEFD2(Global_4456448.f_195024, 4);
}

bool func_72()
{
	return unk_0xA2BC31158C8CEFD2(Global_4456448.f_184550, 12);
}

bool func_73()
{
	if (unk_0xA51CBC95AC3A4B14())
	{
		return unk_0xA2BC31158C8CEFD2(Global_4456448.f_195024, 0);
	}
	return ((unk_0xA2BC31158C8CEFD2(Global_4456448.f_195024, 0) || Global_1654024) && unk_0x222F76006659B0EB(joaat("fm_deathmatch_creator")) > 0);
}

int func_74()
{
	if (func_72() && unk_0xA51CBC95AC3A4B14())
	{
		return 1;
	}
	return 0;
}

int func_75(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0xC69A85EEB9CA3B95(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1590446[unk_0x7C7787D2D7139A85() /*871*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1590446[iVar2 /*871*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_81())
			{
				iVar3 = func_80(iParam0);
				if (!iVar3 == -1)
				{
					return func_78(iVar3);
				}
			}
			if ((func_77(iParam1, iParam0, iVar0, 0) && !unk_0xA2BC31158C8CEFD2(Global_4456448.f_15, 18)) || ((func_69(unk_0xC69A85EEB9CA3B95(iParam1), unk_0xC69A85EEB9CA3B95(iParam0), 0) && unk_0xA2BC31158C8CEFD2(Global_4456448.f_15, 23)) && !unk_0xA2BC31158C8CEFD2(Global_4456448.f_15, 18)))
			{
				return func_68(1);
			}
			else if (unk_0xA2BC31158C8CEFD2(Global_4456448.f_15, 26))
			{
				return func_76(1);
			}
			else
			{
				return func_64(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574407 || Global_1574398) || Global_1590446[iParam0 /*871*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574407 == 1 && Global_1574417 == 0))
			{
				return func_68(1);
			}
			else
			{
				return func_64(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574402 && Global_1573899.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_80(iParam0);
	if (!iVar4 == -1)
	{
		return func_78(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_76(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_77(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0xC69A85EEB9CA3B95(iParam0) == -1 && unk_0xC69A85EEB9CA3B95(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0xC69A85EEB9CA3B95(iParam0) == unk_0xC69A85EEB9CA3B95(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0xC69A85EEB9CA3B95(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0xC69A85EEB9CA3B95(iParam0) == iParam2;
	}
	return unk_0xC69A85EEB9CA3B95(iParam0) == iParam2;
}

int func_78(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_79(iParam0);
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

var func_79(int iParam0)
{
	return Global_2417783.f_2105.f_44[iParam0 /*2*/].f_1;
}

int func_80(int iParam0)
{
	if (!iParam0 == func_10())
	{
		if (func_27(iParam0, 1))
		{
			return Global_2417783.f_2105.f_11[func_26(iParam0)];
		}
	}
	return -1;
}

int func_81()
{
	if (((func_85() || func_84()) || func_83()) || func_82())
	{
		return 1;
	}
	return 0;
}

bool func_82()
{
	return Global_2448961.f_19;
}

bool func_83()
{
	return Global_2448961.f_17;
}

var func_84()
{
	return Global_2448961.f_16;
}

var func_85()
{
	return Global_2448961.f_15;
}

int func_86(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_969029.f_13[iParam0];
	if (func_81())
	{
		iVar2 = func_80(iParam1);
		if (!iVar2 == -1)
		{
			return func_78(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0xA2BC31158C8CEFD2(Global_4456448.f_106[iParam0 /*11610*/].f_5831[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_10())
	{
		if (Global_4456448.f_149437[iParam0] != -1 && Global_4456448.f_149437[iParam0] <= 4)
		{
			if (Global_4456448.f_149437[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_149437[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_149437[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_149437[iParam0] == 4)
			{
				if (unk_0xA2BC31158C8CEFD2(Global_4456448.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4456448.f_149437[iParam0];
			}
		}
		else
		{
			iVar0 = func_64(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0xA2BC31158C8CEFD2(Global_4456448.f_21, 13))
		{
			iVar0 = func_87(iParam0);
		}
		if (unk_0xA2BC31158C8CEFD2(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (unk_0xA2BC31158C8CEFD2(Global_4456448.f_15, 26) && !func_69(iParam0, unk_0xC69A85EEB9CA3B95(iParam1), 0))
		{
			iVar0 = func_76(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_87(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4456448.f_191014;
			break;
		
		case 1:
			iVar0 = Global_4456448.f_191015;
			break;
		
		case 2:
			iVar0 = Global_4456448.f_191016;
			break;
		
		case 3:
			iVar0 = Global_4456448.f_191017;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_88()
{
	return Global_2359302.f_2;
}

bool func_89()
{
	return unk_0xA2BC31158C8CEFD2(Global_2359302, 4);
}

bool func_90()
{
	return unk_0xA2BC31158C8CEFD2(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_39.f_18, 14);
}

int func_91(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1590446[unk_0x7C7787D2D7139A85() /*871*/] == 148 && func_8(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_35, 1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 182:
		case 183:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 197:
		case 198:
		case 199:
		case 200:
		case 201:
		case 205:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
			return 1;
	}
	return 0;
}

void func_92(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xA1E7A40E1F56E511(&(Global_2531497.f_4898.f_7[iVar0]), iVar1);
}

int func_93(int iParam0)
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
		case 178:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 249:
		case 250:
		case 243:
		case 158:
			return 0;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 241:
		case 242:
		case 244:
		case 248:
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return -1;
}

bool func_94(bool bParam0)
{
	return func_27(unk_0x7C7787D2D7139A85(), bParam0);
}

void func_95()
{
	switch (func_627())
	{
		case 0:
			func_612(151, 1, -1, 0);
			func_611(1);
			if (func_41() > 0)
			{
				func_610(1);
			}
			break;
		
		case 1:
			if (!unk_0xA2BC31158C8CEFD2(uLocal_112, 2))
			{
				func_607();
			}
			if (Global_1682177 == func_10())
			{
				if (unk_0xD56C8C2B75BF9665(func_36()))
				{
					Global_1682177 = func_36();
				}
			}
			func_601();
			func_591();
			func_572();
			func_570();
			func_526();
			func_403(&(Global_1363235.f_534), &Global_1363235, 27, &(Global_1363235.f_1), &(Global_1363235.f_117), -1, 0, 0);
			if (func_41() > 1)
			{
				func_610(2);
			}
			break;
		
		case 2:
			if (!unk_0xA2BC31158C8CEFD2(Local_125[unk_0x2E40EEA43EF34BD6() /*4*/].f_1, 3))
			{
				func_401(0, func_10());
				func_310();
				func_96();
			}
			if (func_41() > 2)
			{
				func_610(3);
			}
			break;
		
		case 3:
			break;
	}
}

void func_96()
{
	struct<20> Var0;
	
	Var0.f_2 = 1065353216;
	Var0.f_3 = 1065353216;
	Var0.f_4 = 1;
	Var0.f_9 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	if (!unk_0xA2BC31158C8CEFD2(Local_125[unk_0x2E40EEA43EF34BD6() /*4*/].f_1, 3))
	{
		if ((unk_0xA2BC31158C8CEFD2(Local_114.f_1, 2) || unk_0xA2BC31158C8CEFD2(Local_114.f_1, 4)) || unk_0xA2BC31158C8CEFD2(Local_114.f_1, 4))
		{
			unk_0xA1E7A40E1F56E511(&(Local_125[unk_0x2E40EEA43EF34BD6() /*4*/].f_1), 3);
			return;
		}
		if (func_309())
		{
			unk_0xA1E7A40E1F56E511(&(Local_125[unk_0x2E40EEA43EF34BD6() /*4*/].f_1), 3);
			return;
		}
		if (func_303())
		{
			unk_0xA1E7A40E1F56E511(&(Local_125[unk_0x2E40EEA43EF34BD6() /*4*/].f_1), 3);
			return;
		}
		if (unk_0xA2BC31158C8CEFD2(Local_114.f_1, 7))
		{
			func_97(151, 1, &Var0, 0);
		}
		else
		{
			func_97(151, unk_0xA2BC31158C8CEFD2(Local_125[unk_0x2E40EEA43EF34BD6() /*4*/].f_1, 1), &Var0, 0);
		}
		unk_0xA1E7A40E1F56E511(&(Local_125[unk_0x2E40EEA43EF34BD6() /*4*/].f_1), 3);
	}
}

void func_97(int iParam0, bool bParam1, var uParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	func_301(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		iVar1 = (iVar1 + func_300(iParam0, uParam2->f_13, bParam3));
		if (iParam0 == 233)
		{
			iVar6 = (uParam2->f_10 / uParam2->f_11) * 100;
			iVar1 = ((iVar1 / 100) * iVar6);
		}
		iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * fVar3));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = (iVar0 + func_299(iParam0, bParam3));
		iVar0 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * fVar2));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * uParam2->f_2));
	}
	else if ((iParam0 == 185 || iParam0 == 220) || iParam0 == 221)
	{
		iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * fVar3));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * fVar2));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * uParam2->f_2));
	}
	if (uParam2->f_18 > -1)
	{
		iVar0 = (iVar0 + uParam2->f_18);
	}
	if (uParam2->f_19 > -1)
	{
		iVar1 = (iVar1 + uParam2->f_19);
	}
	if (func_297(iParam0))
	{
		if (bParam1)
		{
			if (func_296(unk_0x7C7787D2D7139A85()) > 0)
			{
				func_295();
			}
			else
			{
				func_294();
			}
		}
		else
		{
			func_293();
		}
	}
	func_277(iParam0, bParam1, uParam2, &iVar0, &uVar4);
	func_275(iParam0, uParam2, &iVar0, &iVar5);
	func_252(iParam0, uParam2, &iVar0, &iVar5);
	func_238(iParam0, uParam2, &iVar0, &iVar5, &iVar7);
	func_221(iParam0, uParam2, &iVar0, &iVar5);
	if (iParam0 == 168)
	{
		Global_2531497.f_4898.f_380 = uVar4;
	}
	else
	{
		Global_2531497.f_4898.f_380 = iVar5;
	}
	iVar8 = func_59();
	if (iVar8 != func_10() && iParam0 != 148)
	{
		if (func_27(unk_0x7C7787D2D7139A85(), 0))
		{
			if (!func_47(unk_0x7C7787D2D7139A85(), iVar8, 1))
			{
				func_207(&iVar0, 1);
			}
		}
	}
	func_201(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	iVar0 = (iVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_1674861.f_10 = iVar1;
		func_200();
		func_152(0, unk_0x0FA8183DAD2B3203(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1674861.f_9 = iVar0;
		func_129(iParam0, iVar0, iVar7, uVar4, iVar5, uParam2);
		func_128(iParam0, iVar0);
		if (func_127(iParam0))
		{
			if (func_126(iParam0) > -1)
			{
				func_125(func_126(iParam0), iVar0);
			}
		}
		Global_2461199 = iVar0;
		func_124(&Global_2459463, 0, 0);
	}
	if (func_34(unk_0x7C7787D2D7139A85()) || func_123(unk_0x7C7787D2D7139A85()))
	{
		func_110(iParam0);
	}
	if (func_91(iParam0))
	{
		Global_1674879.f_13 = iVar0;
		Global_1674879.f_14 = iVar1;
	}
	if (func_109(iParam0))
	{
		Global_1674933.f_13 = iVar0;
		Global_1674933.f_14 = iVar1;
	}
	if (func_108(iParam0))
	{
		Global_1674996.f_12 = iVar0;
		Global_1674996.f_13 = iVar1;
	}
	if (func_107(iParam0))
	{
		Global_1675040.f_12 = iVar0;
		Global_1675040.f_13 = iVar1;
	}
	if (func_106(iParam0))
	{
		Global_1675094.f_12 = iVar0;
		Global_1675094.f_13 = iVar1;
	}
	if (func_105(iParam0))
	{
		if (func_104(iParam0))
		{
			Global_1675175.f_12 = iVar0;
			Global_1675175.f_13 = iVar1;
		}
		else if (func_100(iParam0))
		{
			Global_1675228.f_12 = iVar0;
			Global_1675228.f_13 = iVar1;
		}
	}
	if (func_99(iParam0))
	{
		Global_1675312.f_12 = iVar0;
		Global_1675312.f_13 = iVar1;
	}
	if (func_98(iParam0))
	{
		Global_1675387.f_16 = iVar0;
		Global_1675387.f_17 = iVar1;
	}
}

int func_98(int iParam0)
{
	switch (iParam0)
	{
		case 158:
			return 1;
		
		default:
	}
	return 0;
}

int func_99(int iParam0)
{
	switch (iParam0)
	{
		case 243:
			return 1;
		
		default:
	}
	return 0;
}

int func_100(int iParam0)
{
	if (((((((((iParam0 == 250 || iParam0 == 238) || iParam0 == 242) || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240) || iParam0 == 249) || (iParam0 == 237 && func_101(func_102(unk_0x7C7787D2D7139A85()))))
	{
		return 1;
	}
	return 0;
}

int func_101(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 3:
		case 2:
		case 5:
		case 1:
			return 1;
		
		default:
	}
	return 0;
}

int func_102(int iParam0)
{
	if (func_31(iParam0) == 237 || func_31(iParam0) == 250)
	{
		return func_103(iParam0);
	}
	return -1;
}

int func_103(int iParam0)
{
	if (func_32(iParam0, 0))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_181;
	}
	return -1;
}

int func_104(int iParam0)
{
	if (iParam0 == 237)
	{
		return 1;
	}
	return 0;
}

int func_105(int iParam0)
{
	switch (iParam0)
	{
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_106(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_107(int iParam0)
{
	switch (iParam0)
	{
		case 229:
		case 230:
			return 1;
		
		default:
	}
	return 0;
}

int func_108(int iParam0)
{
	switch (iParam0)
	{
		case 225:
		case 226:
		case 227:
			return 1;
		
		default:
	}
	return 0;
}

int func_109(int iParam0)
{
	switch (iParam0)
	{
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 188:
		case 178:
			return 1;
		
		default:
	}
	return 0;
}

void func_110(int iParam0)
{
	if (func_122(unk_0x7C7787D2D7139A85()) && func_121())
	{
		if (func_120(iParam0))
		{
			func_114(9639, -1);
		}
		else if (func_113(iParam0))
		{
			func_114(9641, -1);
		}
		else if (func_112(iParam0, 1))
		{
			func_114(9642, -1);
		}
		else if (func_111(iParam0))
		{
			func_114(9643, -1);
		}
	}
}

int func_111(int iParam0)
{
	switch (iParam0)
	{
		case 194:
		case 193:
		case 189:
		case 153:
			return 1;
		
		default:
	}
	return 0;
}

int func_112(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

int func_113(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 201:
		case 200:
		case 148:
			return 1;
		
		default:
	}
	return 0;
}

void func_114(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_118(iParam0, func_119(iParam1), 0);
	iVar0++;
	if (!func_117(iParam0))
	{
		func_116(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_115(iParam0, iVar0, iParam1, 1);
	}
}

void func_115(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2542527[iParam0 /*3*/][func_119(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x41410A69AD49AFCD(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1384207[func_119(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1384213[func_119(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1384219[func_119(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1384225[func_119(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1384177[func_119(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1384183[func_119(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1384189[func_119(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1384195[func_119(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1384147[func_119(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1384153[func_119(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1384159[func_119(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1384165[func_119(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1384237[func_119(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1384243[func_119(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1384249[func_119(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1384255[func_119(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1384267[func_119(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1384273[func_119(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1384279[func_119(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1384285[func_119(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2578592[0 /*3*/][func_119(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2578592[1 /*3*/][func_119(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2578592[2 /*3*/][func_119(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2578592[3 /*3*/][func_119(iParam2)] = iParam1;
			break;
		
		case 9509:
			Global_2578729[func_119(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1384291[func_119(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1384297[func_119(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1384303[func_119(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1384315[func_119(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2578659[0 /*3*/][func_119(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2578659[1 /*3*/][func_119(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2578659[2 /*3*/][func_119(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2578659[3 /*3*/][func_119(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2578659[4 /*3*/][func_119(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2578732[0 /*3*/][func_119(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2578732[1 /*3*/][func_119(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2578732[2 /*3*/][func_119(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2578732[3 /*3*/][func_119(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2578732[4 /*3*/][func_119(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2578748[0 /*3*/][func_119(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2578748[1 /*3*/][func_119(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2578748[2 /*3*/][func_119(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2578748[3 /*3*/][func_119(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2578748[4 /*3*/][func_119(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2578659[5 /*3*/][func_119(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2578592[4 /*3*/][func_119(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2578764[func_119(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2578773[func_119(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2578767[func_119(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2578776[func_119(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2578770[func_119(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2578779[func_119(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2578782[func_119(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2578659[6 /*3*/][func_119(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2578592[5 /*3*/][func_119(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2578659[7 /*3*/][func_119(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2578592[6 /*3*/][func_119(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2578659[8 /*3*/][func_119(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2578592[7 /*3*/][func_119(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2578659[9 /*3*/][func_119(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2578592[8 /*3*/][func_119(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2578659[10 /*3*/][func_119(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2578592[9 /*3*/][func_119(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2578659[11 /*3*/][func_119(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2578592[10 /*3*/][func_119(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2578659[12 /*3*/][func_119(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2578592[11 /*3*/][func_119(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2578659[13 /*3*/][func_119(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2578592[12 /*3*/][func_119(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2578659[14 /*3*/][func_119(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2578592[13 /*3*/][func_119(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2578659[15 /*3*/][func_119(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2578592[14 /*3*/][func_119(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2578659[16 /*3*/][func_119(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2578592[15 /*3*/][func_119(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2578659[17 /*3*/][func_119(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2578592[16 /*3*/][func_119(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2578592[17 /*3*/][func_119(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2578592[18 /*3*/][func_119(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2578592[19 /*3*/][func_119(iParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2578592[20 /*3*/][func_119(iParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2578785[func_119(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2578788[func_119(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2578791[func_119(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2578794[func_119(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2578797[func_119(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2578800[func_119(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2578803[func_119(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2578806[func_119(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2578809[func_119(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2578812[func_119(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2578815[func_119(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2578818[func_119(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2578821[func_119(iParam2)] = iParam1;
			break;
		
		case 8900:
			Global_2578824[func_119(iParam2)] = iParam1;
			break;
		
		case 8534:
			Global_2578592[21 /*3*/][func_119(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_116(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_119(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x41410A69AD49AFCD(iVar0, iParam1, iParam3);
	}
}

int func_117(int iParam0)
{
	if (Global_1384128)
	{
		switch (iParam0)
		{
			case 787:
			case 788:
			case 789:
			case 790:
			case 777:
			case 778:
			case 779:
			case 780:
			case 767:
			case 768:
			case 769:
			case 770:
			case 757:
			case 758:
			case 759:
			case 760:
			case 1303:
			case 7233:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 1236:
			case 1876:
			case 2267:
			case 2929:
			case 3058:
			case 9509:
			case 3053:
			case 3054:
			case 3055:
			case 3056:
			case 3057:
			case 3232:
			case 3234:
			case 3636:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3227:
			case 3221:
			case 3663:
			case 3664:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3689:
			case 3230:
			case 3229:
			case 4020:
			case 4019:
			case 4023:
			case 4022:
			case 4026:
			case 4025:
			case 4029:
			case 4028:
			case 6110:
			case 6109:
			case 6168:
			case 6167:
			case 6533:
			case 6532:
			case 6546:
			case 6545:
			case 6559:
			case 6558:
			case 6562:
			case 6561:
			case 6565:
			case 6564:
			case 7283:
			case 7285:
			case 7287:
			case 8282:
			case 8283:
			case 8284:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8010:
			case 8534:
				return 1;
				break;
			}
	}
	return 0;
}

int func_118(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2542527[iParam0 /*3*/][func_119(iParam1)];
	if (unk_0x367DA79FE620711B(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_119(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_20();
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

int func_120(int iParam0)
{
	switch (iParam0)
	{
		case 180:
		case 183:
		case 185:
		case 186:
		case 182:
		case 195:
		case 197:
		case 198:
		case 207:
		case 208:
		case 209:
			return 1;
		
		default:
	}
	return 0;
}

bool func_121()
{
	return func_61(unk_0x7C7787D2D7139A85());
}

bool func_122(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_119, 14);
}

bool func_123(int iParam0)
{
	return func_35(iParam0, 20);
}

void func_124(var uParam0, bool bParam1, bool bParam2)
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

void func_125(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_23477 == 0 || Global_262145.f_23477 == 1)
		{
			if (!unk_0xE434AB6E3DE89861() || Global_262145.f_23477 == 1)
			{
				Global_2531497.f_283 = iParam0;
				if (iParam1 > Global_262145.f_6584)
				{
					iParam1 = Global_262145.f_6584;
				}
				Global_2531497.f_284 = iParam1;
				Global_2531497.f_285 = 0;
			}
		}
	}
}

int func_126(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return 25;
		
		case 157:
			return 22;
		
		case 159:
			return 21;
		
		case 151:
			return 33;
		
		case 148:
			return 23;
		
		case 164:
			return 24;
		
		case 152:
			return 26;
		
		case 153:
			return 30;
		
		case 154:
			return 32;
		
		case 155:
			return 28;
		
		case 160:
			return 29;
		
		case 162:
			return 31;
		
		case 163:
			return 27;
		
		case 166:
			return 38;
		
		case 170:
			return 34;
		
		case 171:
			return 35;
		
		case 172:
			return 36;
		
		case 173:
			return 37;
		
		case 179:
			return 23;
		
		default:
	}
	return 0;
}

int func_127(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 167:
			iVar0 = 0;
			break;
		
		case 169:
			iVar0 = 0;
			break;
		
		case 168:
			iVar0 = 0;
			break;
		
		case 166:
			iVar0 = 0;
			break;
		
		case 190:
			iVar0 = 0;
			break;
		
		case 191:
			iVar0 = 0;
			break;
		
		case 192:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

void func_128(int iParam0, int iParam1)
{
	if (func_122(unk_0x7C7787D2D7139A85()) && func_121())
	{
		if (func_120(iParam0) && iParam1 > 0)
		{
			func_116(9640, (func_118(9640, -1, 0) + iParam1), -1, 1, 0);
		}
	}
}

void func_129(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	struct<2> Var7;
	
	iVar5 = func_11();
	if (iVar5 != func_10())
	{
		func_151(iVar5, &uVar0, &uVar1);
	}
	bVar6 = !func_94(1);
	Var7.f_1 = -1;
	switch (iParam0)
	{
		case 168:
			if (!func_150())
			{
				unk_0x2ACE96EE44008838(iParam1, uParam3);
			}
			break;
		
		case 190:
			if (func_121())
			{
				if (!func_150())
				{
					Var7 = { func_149() };
					unk_0x6C9D0A5816B98431(iParam1, unk_0xA8C462EF7D9DC564(func_148(Var7.f_0)), func_147(Var7.f_0), iParam4);
				}
			}
			else if (func_150())
			{
				func_136(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				unk_0x2ACE96EE44008838(iParam1, iParam4);
			}
			break;
		
		case 226:
			if (func_135())
			{
				if (!func_150())
				{
					unk_0x6C9D0A5816B98431(iParam1, unk_0xA8C462EF7D9DC564(func_148(func_134(unk_0x7C7787D2D7139A85()))), 5, iParam4);
				}
			}
			else if (func_150())
			{
				func_136(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				unk_0x2ACE96EE44008838(iParam1, iParam4);
			}
			break;
		
		case 230:
			if (func_135())
			{
				if (!func_150())
				{
					iVar2 = func_130(uParam5->f_16, iParam4);
					iVar3 = iParam1;
					if (iVar2 > 0)
					{
						iVar3 = (iVar3 - iVar2);
					}
					if (iParam2 > 0)
					{
						iVar3 = (iVar3 - iParam2);
					}
					unk_0xAB824DE1EED6A559(iVar3, iParam4, iParam2, iVar2, uParam5->f_16);
				}
			}
			else if (func_150())
			{
				func_136(463142405, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				unk_0x0EC6A504BD3D7EA4(uVar0, uVar1, iParam1, bVar6);
			}
			break;
		
		case 233:
			if (func_150())
			{
				func_136(1407278493, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				unk_0x8F6335EC176D3822(iParam1);
			}
			break;
		
		case 237:
			if (func_135())
			{
				if (!func_150())
				{
					unk_0x74CB6C09CF941DE2(iParam1, uParam5->f_20, iParam4);
				}
			}
			else if (func_150())
			{
				func_136(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				unk_0x2ACE96EE44008838(iParam1, iParam4);
			}
			break;
		
		case 250:
			if (func_150())
			{
				func_136(-961034881, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				unk_0x53FC55B55010CA0A(iParam1);
			}
			break;
		
		case 249:
			if (func_150())
			{
				func_136(1135468152, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				unk_0x037C8ED6248A20C2(iParam1);
			}
			break;
		
		case 242:
		case 244:
		case 248:
		case 241:
		case 239:
		case 240:
			if (func_150())
			{
				func_136(-634726636, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				unk_0x66CC1F86B0B49ECE(iParam1);
			}
			break;
		
		case 243:
			if (func_150())
			{
				func_136(1698417709, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				unk_0x0E02BA4947E1A26A(iParam1);
			}
			break;
		
		case 158:
			if (uParam5->f_21)
			{
				if (func_150())
				{
					func_136(1668610896, iParam1, &iVar4, 0, 1, 0);
				}
				else
				{
					unk_0x72E7C7B9615FA3C3(iParam1, 0, 0, 1, iParam1, 0, 0);
				}
			}
			else if (func_150())
			{
				func_136(-2032529561, iParam1, &iVar4, 0, 1, 0);
			}
			else
			{
				unk_0x72E7C7B9615FA3C3(iParam1, 1, iParam1, 0, 0, 0, 0);
			}
			break;
		
		default:
			if (func_150())
			{
				func_136(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				unk_0x70C95C7FFB2AA9AE(uVar0, uVar1, iParam1, bVar6);
			}
			break;
	}
}

int func_130(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_133(iParam0, iParam1);
	fVar1 = (unk_0xBBDA792448DB5A89(func_131(iParam0, iParam1)) * fVar0);
	return unk_0xF2DB717A73826179(fVar1);
}

int func_131(int iParam0, int iParam1)
{
	return (func_132(iParam0) * iParam1);
}

int func_132(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return Global_262145.f_22294;
		
		case 0:
			return Global_262145.f_22295;
		
		case 1:
			return Global_262145.f_22296;
		
		case 2:
			return Global_262145.f_22297;
		
		case 3:
			return Global_262145.f_22298;
		
		case 4:
			return Global_262145.f_22299;
		
		case 5:
			return Global_262145.f_22300;
		
		case 6:
			return Global_262145.f_22301;
		
		case 7:
			return Global_262145.f_22302;
		
		default:
	}
	return 0;
}

float func_133(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_22304);
	switch (iParam0)
	{
		case -1:
		case 8:
			return 0f;
		
		case 7:
			fVar0 = Global_262145.f_22306;
			fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_22303);
			break;
		
		case 3:
			fVar0 = Global_262145.f_22306;
			fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_22303);
			break;
		
		case 0:
			fVar0 = Global_262145.f_22307;
			break;
		
		case 1:
			fVar0 = Global_262145.f_22307;
			break;
		
		case 4:
			fVar0 = Global_262145.f_22307;
			break;
		
		case 6:
			fVar0 = Global_262145.f_22308;
			fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_22305);
			break;
		
		case 2:
			fVar0 = Global_262145.f_22308;
			fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_22305);
			break;
		
		case 5:
			fVar0 = Global_262145.f_22308;
			fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_22305);
			break;
	}
	iVar2 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam1) / fVar1));
	return (unk_0xBBDA792448DB5A89(iVar2) * fVar0);
}

int func_134(int iParam0)
{
	if (iParam0 == func_10())
	{
		return 0;
	}
	return Global_1590446[iParam0 /*871*/].f_273.f_179[5 /*12*/];
}

bool func_135()
{
	return func_28(unk_0x7C7787D2D7139A85());
}

void func_136(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_150())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0 || Global_262145.f_27520)
			{
				func_137(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_137(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -1693570755:
		case 1868043300:
		case -697248883:
		case -1295545795:
		case 914079366:
		case 395122350:
		case -331981076:
		case 1671535231:
			if (iParam1 > 0 || Global_262145.f_27520)
			{
				func_137(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
		case -2017925037:
		case 1668610896:
		case -2032529561:
		case -1224479447:
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
			func_137(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_137(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_150())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x10312E24AC503B38(func_20()) || unk_0x9F3230C03E32BA3F())
		{
			Global_4264386 = 1;
			return 0;
		}
		if (Global_2460158)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4264387 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_4263810[iVar2 /*84*/].f_65.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || unk_0x45E39245DFF8B94A(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0x813C0E090AFE247B(iVar4))
		{
			*uParam0 = func_144(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4263810[*uParam0 /*84*/].f_65.f_8 = 1;
					Global_4263810[*uParam0 /*84*/].f_65.f_12 = 1;
				}
			}
			Global_4264371 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4264385 = 1;
			Global_4264388 = iParam4;
			Global_4264390 = iParam3;
			Global_4264391 = 1;
			Global_4264389 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4264388 = iParam4;
			Global_4264390 = iParam3;
			Global_4264391 = 1;
			Global_4264389 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_143(1, iParam4);
			Global_4264385 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_138(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_138(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xA1E7A40E1F56E511(&(Global_2424073[unk_0x7C7787D2D7139A85() /*421*/].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_139(iParam0);
	}
}

void func_139(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_150())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_142(iParam0))
		{
			if (!bVar0)
			{
				unk_0x35669F69F99705F6();
			}
		}
		else if (!bVar0)
		{
			unk_0x7724338620CF87D3(Global_4263810[iParam0 /*84*/].f_65);
		}
		func_140(&(Global_4263810[iParam0 /*84*/]));
	}
}

void func_140(var uParam0)
{
	uParam0->f_65 = 0;
	uParam0->f_65 = 2147483647;
	uParam0->f_65.f_1 = 0;
	uParam0->f_65.f_2 = 0;
	uParam0->f_65.f_3 = -1593119440;
	uParam0->f_65.f_4 = -2085313189;
	uParam0->f_65.f_5 = 0;
	uParam0->f_65.f_6 = 1227573907;
	uParam0->f_65.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	func_141(&(uParam0->f_13));
	func_141(&(uParam0->f_13.f_13));
	StringCopy(&(uParam0->f_13.f_26), "", 32);
	StringCopy(&(uParam0->f_13.f_34), "", 24);
	StringCopy(&(uParam0->f_13.f_40), "", 16);
	StringCopy(&(uParam0->f_13.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_65.f_8 = 0;
	uParam0->f_65.f_9 = 0;
	uParam0->f_65.f_10 = 0;
	uParam0->f_65.f_11 = 0;
	uParam0->f_65.f_13 = 0;
	uParam0->f_65.f_12 = 0;
	uParam0->f_65.f_14 = 0;
	uParam0->f_65.f_15 = 0;
	uParam0->f_65.f_16 = 0;
	uParam0->f_65.f_18 = 0;
}

void func_141(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_142(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263810[iParam0 /*84*/].f_65.f_5 == 1;
	}
	return 0;
}

void func_143(int iParam0, var uParam1)
{
	Global_2461338 = uParam1;
	Global_2461337 = iParam0;
}

int func_144(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263810[iVar0 /*84*/].f_65.f_2 == 0)
		{
			if (!func_150())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4263810[iVar0 /*84*/].f_65.f_2 = 1;
			Global_4263810[iVar0 /*84*/].f_65.f_1 = uParam5;
			Global_4263810[iVar0 /*84*/].f_65.f_3 = iParam1;
			Global_4263810[iVar0 /*84*/].f_65.f_4 = uParam2;
			Global_4263810[iVar0 /*84*/].f_65.f_7 = uParam3;
			Global_4263810[iVar0 /*84*/].f_65.f_5 = 0;
			Global_4263810[iVar0 /*84*/].f_65 = iParam0;
			Global_4263810[iVar0 /*84*/].f_65.f_6 = iParam4;
			Global_4263810[iVar0 /*84*/].f_65.f_11 = uParam8;
			Global_4263810[iVar0 /*84*/].f_65.f_10 = uParam7;
			Global_4263810[iVar0 /*84*/].f_65.f_13 = iParam9;
			Global_4263810[iVar0 /*84*/].f_65.f_12 = 0;
			Global_4263810[iVar0 /*84*/].f_65.f_14 = unk_0xB3EE417AD9F0CAA2();
			Global_4263810[iVar0 /*84*/].f_65.f_18 = 0;
			Global_4264371 = 0;
			if (bParam6)
			{
				Global_4263810[iVar0 /*84*/].f_65.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_145(Global_4263810[iVar0 /*84*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_145(struct<66> Param0, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, int iParam84)
{
	struct<3> Var0;
	int iVar35;
	
	if (iParam84 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.f_0 = -1969967074;
	Var0.f_1 = unk_0x7C7787D2D7139A85();
	Var0.f_2 = { Param0.f_65 };
	Var0.f_2.f_32 = iParam84;
	iVar35 = func_45(Var0.f_1);
	if ((Global_262145.f_23556 && !Global_262145.f_23557) && !Global_262145.f_23558)
	{
		return;
	}
	if (!iVar35 == 0)
	{
		func_146();
		unk_0x990C4E4B3665A4D6(1, &Var0, 35, iVar35);
	}
}

void func_146()
{
	unk_0x42B7026D73D48D50("AM_ARENA_SHP");
}

int func_147(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 3;
		
		case 2:
			return 1;
		
		case 3:
			return 4;
		
		case 4:
			return 2;
		
		case 5:
			return 0;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 4;
		
		case 9:
			return 2;
		
		case 10:
			return 0;
		
		case 11:
			return 3;
		
		case 12:
			return 1;
		
		case 13:
			return 4;
		
		case 14:
			return 2;
		
		case 15:
			return 0;
		
		case 16:
			return 3;
		
		case 17:
			return 1;
		
		case 18:
			return 4;
		
		case 19:
			return 2;
		
		case 20:
			return 0;
		
		case 21:
			return 5;
		
		case 22:
			return 5;
		
		case 23:
			return 5;
		
		case 24:
			return 5;
		
		case 25:
			return 5;
		
		case 26:
			return 5;
		
		case 27:
			return 5;
		
		case 28:
			return 5;
		
		case 29:
			return 5;
		
		case 30:
			return 5;
		
		case 31:
			return 5;
		
		default:
	}
	return -1;
}

char* func_148(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 2:
			sVar0 = "MP_BWH_WEED_1";
			break;
		
		case 1:
			sVar0 = "MP_BWH_METH_1";
			break;
		
		case 3:
			sVar0 = "MP_BWH_CRACK_1";
			break;
		
		case 5:
			sVar0 = "MP_BWH_FAKEID_1";
			break;
		
		case 4:
			sVar0 = "MP_BWH_CASH_1";
			break;
		
		case 7:
			sVar0 = "MP_BWH_WEED_2";
			break;
		
		case 6:
			sVar0 = "MP_BWH_METH_2";
			break;
		
		case 8:
			sVar0 = "MP_BWH_CRACK_2";
			break;
		
		case 10:
			sVar0 = "MP_BWH_FAKEID_2";
			break;
		
		case 9:
			sVar0 = "MP_BWH_CASH_2";
			break;
		
		case 12:
			sVar0 = "MP_BWH_WEED_3";
			break;
		
		case 11:
			sVar0 = "MP_BWH_METH_3";
			break;
		
		case 13:
			sVar0 = "MP_BWH_CRACK_3";
			break;
		
		case 15:
			sVar0 = "MP_BWH_FAKEID_3";
			break;
		
		case 14:
			sVar0 = "MP_BWH_CASH_3";
			break;
		
		case 17:
			sVar0 = "MP_BWH_WEED_4";
			break;
		
		case 16:
			sVar0 = "MP_BWH_METH_4";
			break;
		
		case 18:
			sVar0 = "MP_BWH_CRACK_4";
			break;
		
		case 20:
			sVar0 = "MP_BWH_FAKEID_4";
			break;
		
		case 19:
			sVar0 = "MP_BWH_CASH_4";
			break;
		
		case 21:
			sVar0 = "MP_BUNKER_1";
			break;
		
		case 22:
			sVar0 = "MP_BUNKER_2";
			break;
		
		case 23:
			sVar0 = "MP_BUNKER_3";
			break;
		
		case 24:
			sVar0 = "MP_BUNKER_4";
			break;
		
		case 25:
			sVar0 = "MP_BUNKER_5";
			break;
		
		case 26:
			sVar0 = "MP_BUNKER_6";
			break;
		
		case 27:
			sVar0 = "MP_BUNKER_7";
			break;
		
		case 28:
			sVar0 = "MP_BUNKER_9";
			break;
		
		case 29:
			sVar0 = "MP_BUNKER_10";
			break;
		
		case 30:
			sVar0 = "MP_BUNKER_11";
			break;
		
		case 31:
			sVar0 = "MP_BUNKER_12";
			break;
	}
	return sVar0;
}

struct<2> func_149()
{
	return Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_193;
}

int func_150()
{
	if (unk_0xE434AB6E3DE89861())
	{
		return unk_0x60E2BDB67AA16B1C();
	}
	return 0;
}

void func_151(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_1628955[iParam0 /*614*/].f_11.f_8[0];
	*uParam2 = Global_1628955[iParam0 /*614*/].f_11.f_8[1];
}

int func_152(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_153(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_153(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_163(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0xD4B321D9096B01FC(iParam1))
		{
			if (unk_0x4625051E51BA911B(iParam1))
			{
				iVar1 = unk_0x3D464779B732760F(iParam1);
				func_159(unk_0x0E516C24C87F5D0C(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_154(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_154(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { func_157(iParam0, 1) };
	if (iParam0 == func_156(unk_0x0FA8183DAD2B3203()))
	{
		func_155(1);
	}
	func_159(Var0, iParam1, 0, sParam2, iParam3);
}

void func_155(int iParam0)
{
	Global_2437549.f_1890 = iParam0;
}

int func_156(int iParam0)
{
	return iParam0;
}

Vector3 func_157(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (unk_0x80022561D13932C8())
	{
		Var3 = { unk_0x521C180E8FDEB978(2) };
	}
	if (iParam0 == func_158(unk_0x0FA8183DAD2B3203()) && unk_0x328DC5757076B0D5(unk_0x18638AA8DFAAE787()) == 4)
	{
		Var0 = { unk_0xC12F91346EA13947(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0xACE5E491FC1B0D37(iParam0, 0) };
	}
	fVar6 = 0f;
	if (!unk_0xF4B969E0807E76C7(iParam0, 0))
	{
		fVar6 = unk_0xD2809C7F7FD79247(iParam0);
		if (unk_0x328DC5757076B0D5(unk_0x18638AA8DFAAE787()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	unk_0xB10397B050DB322E(unk_0x7F375072508F738F(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0.18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0.18f);
	}
	Var0 = { unk_0x16DECC52D9360F1E(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_158(int iParam0)
{
	return iParam0;
}

void func_159(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2437549.f_1289[iVar0 /*30*/].f_6 == 0 || Global_2437549.f_1289[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2437549.f_1289[iVar1 /*30*/] = { Param0 };
			Global_2437549.f_1289[iVar1 /*30*/].f_6 = 1;
			Global_2437549.f_1289[iVar1 /*30*/].f_4 = func_162(Global_2437549.f_1289[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2437549.f_1289[iVar1 /*30*/].f_7 = unk_0x169A8AC9F93C2727();
			Global_2437549.f_1289[iVar1 /*30*/].f_3 = iParam3;
			Global_2437549.f_1289[iVar1 /*30*/].f_8 = iParam4;
			Global_2437549.f_1289[iVar1 /*30*/].f_9 = func_161();
			Global_2437549.f_1289[iVar1 /*30*/].f_10 = func_160();
			StringCopy(&(Global_2437549.f_1289[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2437549.f_1289[iVar1 /*30*/].f_26 = unk_0x067A0219B2815DA1(unk_0x169A8AC9F93C2727(), iParam6);
		}
	}
}

int func_160()
{
	if (Global_2437549.f_1890)
	{
		Global_2437549.f_1890 = 0;
		return 1;
	}
	Global_2437549.f_1890 = 0;
	return 0;
}

var func_161()
{
	var uVar0;
	
	uVar0 = Global_2437549.f_1892;
	Global_2437549.f_1892 = 1;
	return uVar0;
}

float func_162(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0xD34AF93E9BCF12F0(unk_0xEB9451CD6AC51B04(), Param0, 1);
	if (fVar0 < 5f)
	{
		*uParam3 = 0.402f;
		*uParam4 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam3 = 0.212f;
		*uParam4 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam3 = (fVar2 + 0.212f);
	*uParam4 = (fVar3 + 0.286f);
	return fVar1;
}

var func_163(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_164(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_164(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (iParam1 == 0)
	{
		if (func_199(unk_0x7C7787D2D7139A85()) || func_198(unk_0x7C7787D2D7139A85()))
		{
			if (Global_262145.f_9635 > 16000)
			{
				iVar2 = 16000;
			}
			else
			{
				iVar2 = Global_262145.f_9635;
			}
		}
		else if (func_196() || func_195(unk_0x7C7787D2D7139A85()))
		{
			if (Global_262145.f_22762 > 16000)
			{
				iVar2 = 16000;
			}
			else
			{
				iVar2 = Global_262145.f_22762;
			}
		}
		else if (func_82())
		{
			if (Global_262145.f_27882 > 16000)
			{
				iVar2 = 16000;
			}
			else
			{
				iVar2 = Global_262145.f_27882;
			}
		}
		else if (Global_262145.f_6635 > 10000)
		{
			iVar2 = 10000;
		}
		else
		{
			iVar2 = Global_262145.f_6635;
		}
	}
	if (func_194(uParam2))
	{
	}
	if (func_193())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_191(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_190(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_187(0, &iVar1);
					break;
				
				case 3:
					func_187(1, &iVar1);
					break;
				
				case 1:
					func_184(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1686907)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_183(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_175((func_181(unk_0x7C7787D2D7139A85(), 1) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x9DF8487FF4AABAFE(iVar1, iParam8, iParam9);
				if (Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_39.f_2 != -1)
				{
					func_183(1165, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_169(iVar1);
				}
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_165((func_167(unk_0x7C7787D2D7139A85()) + iVar1));
			}
			else
			{
				func_165((func_167(unk_0x7C7787D2D7139A85()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_165(int iParam0)
{
	if (func_193())
	{
		Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_211.f_5 = iParam0;
		func_166(joaat("mpply_globalxp"), iParam0);
	}
}

void func_166(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x41410A69AD49AFCD(iVar0, uParam1, 1);
	}
}

int func_167(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_9(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x7C7787D2D7139A85())
			{
				return func_168(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1590446[iParam0 /*871*/].f_211.f_5;
			}
		}
		else
		{
			return func_168(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_168(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0x367DA79FE620711B(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_169(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_174(unk_0x7C7787D2D7139A85()) };
	if (unk_0xFF6895C150414C31())
	{
		if (unk_0xF10E9BDC0C546560(&Var0))
		{
			iVar13 = func_172(func_173(&Var0));
			if (iVar13 == 0)
			{
				func_171(&Global_1384134, iParam0);
				func_170(joaat("mpply_crew_local_xp_0"), Global_1384134);
			}
			else if (iVar13 == 1)
			{
				func_171(&Global_1384135, iParam0);
				func_170(joaat("mpply_crew_local_xp_1"), Global_1384135);
			}
			else if (iVar13 == 2)
			{
				func_171(&Global_1384136, iParam0);
				func_170(joaat("mpply_crew_local_xp_2"), Global_1384136);
			}
			else if (iVar13 == 3)
			{
				func_171(&Global_1384137, iParam0);
				func_170(joaat("mpply_crew_local_xp_3"), Global_1384137);
			}
			else if (iVar13 == 4)
			{
				func_171(&Global_1384138, iParam0);
				func_170(joaat("mpply_crew_local_xp_4"), Global_1384138);
			}
		}
	}
}

void func_170(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x41410A69AD49AFCD(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1384129 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1384131 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1384131 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1384132 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1384133 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1384134 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1384135 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1384136 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1384137 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1384138 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1384139 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1384140 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1384141 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1384142 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1384143 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1384144 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1384145 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_171(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_172(int iParam0)
{
	if (iParam0 == Global_1384129)
	{
		return 0;
	}
	else if (iParam0 == Global_1384130)
	{
		return 1;
	}
	else if (iParam0 == Global_1384131)
	{
		return 2;
	}
	else if (iParam0 == Global_1384132)
	{
		return 3;
	}
	else if (iParam0 == Global_1384133)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_173(var uParam0)
{
	if (unk_0xFF6895C150414C31())
	{
		if (unk_0xF10E9BDC0C546560(uParam0))
		{
			return Global_2458924;
		}
	}
	return Global_2458924;
}

struct<13> func_174(int iParam0)
{
	struct<13> Var0;
	
	unk_0x229B5E28267D1B1F(iParam0, &Var0, 13);
	return Var0;
}

void func_175(int iParam0, int iParam1, int iParam2)
{
	if (func_193())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9603 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1384279[func_119(-1)])
				{
					unk_0x9DF8487FF4AABAFE(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1384279[func_119(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9602 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x9DF8487FF4AABAFE(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_9602 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x9DF8487FF4AABAFE(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_15(unk_0x7C7787D2D7139A85()))
		{
			Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_211.f_1 = iParam0;
			Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_211.f_6 = func_179(iParam0, 1);
		}
		func_115(639, iParam0, -1, 1);
		func_116(640, func_179(iParam0, 1), -1, 1, 0);
		Global_1384279[func_119(-1)] = iParam0;
		func_176(-1109644434, 7, 0);
	}
}

void func_176(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_178(iParam1, iParam2))
	{
		iVar0 = func_177();
		Global_2458876[iVar0] = iParam1;
		Global_2458887[iVar0] = iParam0;
	}
}

int func_177()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2458876[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_178(int iParam0, var uParam1)
{
	if (Global_1312861)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312873) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_179(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_180(iParam0, 0);
}

int func_180(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_290594[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_290594[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((unk_0xBBDA792448DB5A89(iVar1) - unk_0xBBDA792448DB5A89(iVar2)) / 2f) + unk_0xBBDA792448DB5A89(iVar2));
		iVar3 = unk_0xF2DB717A73826179(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_181(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_182(iParam0);
}

int func_182(int iParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x7C7787D2D7139A85())
			{
				return Global_1384279[func_119(-1)];
			}
			else if (func_15(iParam0))
			{
				return Global_1590446[iParam0 /*871*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1384279[func_119(-1)];
	}
	return 0;
}

void func_183(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_118(iParam0, func_119(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_117(iParam0))
	{
		func_116(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_115(iParam0, iVar0, iParam2, 1);
	}
}

void func_184(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0xC69A85EEB9CA3B95(unk_0x7C7787D2D7139A85());
	iVar0 = 0;
	while (iVar0 < unk_0xACF7D965CEBE5714())
	{
		iVar4 = unk_0x9DBE48BD26DE1888(iVar0);
		if (unk_0x2700CB8907086DF3(iVar4))
		{
			iVar5 = unk_0xD7EB9DC48246DA95(iVar4);
			if (unk_0xC69A85EEB9CA3B95(iVar5) != -1)
			{
				if (unk_0xC69A85EEB9CA3B95(iVar5) == iVar1 || func_69(unk_0xC69A85EEB9CA3B95(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x7C7787D2D7139A85())
					{
						if (func_186(unk_0x7C7787D2D7139A85(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = unk_0xF2DB717A73826179((func_185(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_185(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_185(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_186(int iParam0, int iParam1)
{
	if (unk_0xFF6895C150414C31())
	{
		Global_2507671 = { func_174(iParam0) };
		Global_2507684 = { func_174(iParam1) };
		if (unk_0xF10E9BDC0C546560(&Global_2507671))
		{
			if (unk_0xF10E9BDC0C546560(&Global_2507684))
			{
				unk_0x4065D3D900AB253F(&Global_2507601, 35, &Global_2507671);
				unk_0x4065D3D900AB253F(&Global_2507636, 35, &Global_2507684);
				if (Global_2507601 == Global_2507636)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_187(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < unk_0xACF7D965CEBE5714())
		{
			iVar3 = iVar0;
			if (unk_0x2700CB8907086DF3(iVar3))
			{
				iVar4 = unk_0xD7EB9DC48246DA95(iVar3);
				if (func_9(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x7C7787D2D7139A85())
					{
						iVar1++;
						if (func_186(unk_0x7C7787D2D7139A85(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_9(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x7C7787D2D7139A85())
				{
					if (func_188(unk_0x7C7787D2D7139A85(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_186(unk_0x7C7787D2D7139A85(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = unk_0xF2DB717A73826179((func_185(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_185(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_188(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_189(iParam0), func_189(iParam1));
	return 0f;
}

Vector3 func_189(int iParam0)
{
	return unk_0xACE5E491FC1B0D37(unk_0x23625FE58BACEBFD(iParam0), 0);
}

int func_190(int iParam0)
{
	int iVar0;
	
	if (unk_0x2909109C6CD2EDDA() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_185(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_191(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x25A1A0BF87F74E56(iParam0) > func_181(unk_0x7C7787D2D7139A85(), 1))
		{
			iParam0 = -func_181(unk_0x7C7787D2D7139A85(), 1);
		}
	}
	if (func_192(8000, 0, 0) > 0)
	{
		if (func_192(8000, 0, 0) < (iParam0 + func_181(unk_0x7C7787D2D7139A85(), 1)))
		{
			iParam0 = (func_192(8000, 0, 0) - func_181(unk_0x7C7787D2D7139A85(), 1));
		}
	}
	return iParam0;
}

int func_192(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_290594[iParam0];
}

int func_193()
{
	return 1;
}

int func_194(var uParam0)
{
	if (unk_0x79FCE4565761C974(uParam0))
	{
		return 1;
	}
	else if (unk_0x2553916E420E8EF0(uParam0, "") || unk_0x2553916E420E8EF0(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_195(int iParam0)
{
	return func_106(func_31(iParam0));
}

bool func_196()
{
	if (unk_0xA51CBC95AC3A4B14())
	{
		return func_83();
	}
	return func_197(Global_4456448.f_154360);
}

int func_197(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5008[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_198(int iParam0)
{
	return Global_2424073[iParam0 /*421*/].f_115 == 2;
}

bool func_199(int iParam0)
{
	return Global_2424073[iParam0 /*421*/].f_115 == 7;
}

void func_200()
{
	Global_2460540 = 1;
}

void func_201(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_206(7))
	{
		return;
	}
	iVar0 = func_204(iParam0);
	iVar1 = func_203(iParam0);
	iVar2 = unk_0x25A1A0BF87F74E56(unk_0x675EE3FED67AA436(Global_2531497.f_4898.f_263, unk_0x169A8AC9F93C2727()));
	if (func_202(iParam0) != -1)
	{
		if (iVar2 > func_202(iParam0))
		{
			iVar2 = func_202(iParam0);
		}
	}
	else if (iVar2 > Global_262145.f_12395)
	{
		iVar2 = Global_262145.f_12395;
	}
	iVar3 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_202(int iParam0)
{
	if (func_112(iParam0, 0) || func_113(iParam0))
	{
		return Global_262145.f_18475;
	}
	if (func_120(iParam0))
	{
		return Global_262145.f_18474;
	}
	switch (iParam0)
	{
		case 192:
			return Global_262145.f_18471;
		
		case 191:
			return Global_262145.f_18473;
		
		case 190:
			return Global_262145.f_18472;
		
		case 227:
			return Global_262145.f_21031;
		
		case 226:
			return Global_262145.f_21019;
		
		case 225:
			return Global_262145.f_21039;
		
		case 230:
			return Global_262145.f_22291;
		
		case 229:
			return Global_262145.f_22195;
		
		case 233:
			return Global_262145.f_22767;
		
		case 237:
			return Global_262145.f_23930;
		
		case 238:
			return Global_262145.f_24041;
		
		case 249:
			return Global_262145.f_24057;
		
		case 243:
			return Global_262145.f_26237;
		
		default:
	}
	return -1;
}

int func_203(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_12486;
		
		case 152:
			return Global_262145.f_12521;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_12509;
		
		case 157:
			return Global_262145.f_12476;
		
		case 159:
			return Global_262145.f_12459;
		
		case 164:
			return Global_262145.f_12499;
		
		case 160:
			return Global_262145.f_12549;
		
		case 162:
			return Global_262145.f_12569;
		
		case 163:
			return Global_262145.f_12534;
		
		case 154:
			return Global_262145.f_12604;
		
		case 155:
			return Global_262145.f_12594;
		
		case 153:
			return Global_262145.f_12558;
		
		case 170:
			return Global_262145.f_14983;
		
		case 171:
			return Global_262145.f_15042;
		
		case 172:
			return Global_262145.f_15060;
		
		case 173:
			return Global_262145.f_15001;
		
		case 166:
			return Global_262145.f_15016;
		
		case 167:
			return Global_262145.f_15107;
		
		case 169:
			return Global_262145.f_15079;
		
		case 168:
			return Global_262145.f_15072;
		
		case 179:
			return Global_262145.f_18354;
		
		case 180:
			return Global_262145.f_18132;
		
		case 182:
			return Global_262145.f_18132;
		
		case 183:
			return Global_262145.f_18132;
		
		case 185:
			return Global_262145.f_18132;
		
		case 186:
			return Global_262145.f_18132;
		
		case 189:
			return Global_262145.f_18354;
		
		case 190:
			return Global_262145.f_18008;
		
		case 191:
			return Global_262145.f_18099;
		
		case 192:
			return Global_262145.f_17893;
		
		case 193:
			return Global_262145.f_18354;
		
		case 194:
			return Global_262145.f_18354;
		
		case 195:
			return Global_262145.f_18132;
		
		case 197:
			return Global_262145.f_18132;
		
		case 198:
			return Global_262145.f_18132;
		
		case 199:
			return Global_262145.f_18354;
		
		case 200:
			return Global_262145.f_18354;
		
		case 201:
			return Global_262145.f_18354;
		
		case 205:
			return Global_262145.f_18354;
		
		case 207:
			return Global_262145.f_18132;
		
		case 208:
			return Global_262145.f_18132;
		
		case 209:
			return Global_262145.f_18132;
		
		case 210:
			return Global_262145.f_18354;
		
		case 211:
			return Global_262145.f_18354;
		
		case 214:
			return Global_262145.f_19204;
		
		case 215:
			return Global_262145.f_19206;
		
		case 216:
			return Global_262145.f_19208;
		
		case 217:
			return Global_262145.f_19210;
		
		case 218:
			return Global_262145.f_19212;
		
		case 219:
			return Global_262145.f_19214;
		
		case 220:
			return Global_262145.f_19216;
		
		case 221:
			return Global_262145.f_19218;
		
		case 225:
			if (!func_135())
			{
				return Global_262145.f_21041;
			}
			break;
		
		case 226:
			if (!func_135())
			{
				return Global_262145.f_21021;
			}
			break;
		
		case 227:
			if (!func_135())
			{
				return Global_262145.f_21033;
			}
			break;
		
		case 229:
			if (!func_135())
			{
				return Global_262145.f_22197;
			}
			break;
		
		case 230:
			if (!func_135())
			{
				return Global_262145.f_22293;
			}
			break;
		
		case 233:
			if (!func_135())
			{
				return Global_262145.f_22766;
			}
			break;
		
		case 241:
			return 100;
		
		case 242:
			return 100;
		
		case 244:
			return 100;
		
		case 248:
			return 100;
		
		case 239:
			return 100;
		
		case 240:
			return 100;
		
		case 250:
			return 100;
		
		case 237:
			if (!func_135())
			{
				return Global_262145.f_23932;
			}
			break;
		
		case 238:
			if (!func_135())
			{
				return Global_262145.f_24043;
			}
			break;
		
		case 249:
			if (!func_135())
			{
				return Global_262145.f_24059;
			}
			break;
		
		case 243:
			if (!func_135())
			{
				return Global_262145.f_26240;
			}
			break;
		
		case 158:
			if (!func_135())
			{
				return 100;
			}
			break;
	}
	return 0;
}

int func_204(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_12485;
		
		case 152:
			return Global_262145.f_12520;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_12508;
		
		case 157:
			return Global_262145.f_12475;
		
		case 159:
			return Global_262145.f_12458;
		
		case 164:
			return Global_262145.f_12498;
		
		case 160:
			return Global_262145.f_12548;
		
		case 162:
			return Global_262145.f_12568;
		
		case 163:
			return Global_262145.f_12533;
		
		case 154:
			return Global_262145.f_12603;
		
		case 155:
			return Global_262145.f_12593;
		
		case 153:
			return Global_262145.f_12557;
		
		case 170:
			return Global_262145.f_14982;
		
		case 171:
			return Global_262145.f_15041;
		
		case 172:
			return Global_262145.f_15059;
		
		case 173:
			return Global_262145.f_15000;
		
		case 166:
			return Global_262145.f_15015;
		
		case 179:
			return Global_262145.f_18353;
		
		case 180:
			return Global_262145.f_18131;
		
		case 182:
			return Global_262145.f_18131;
		
		case 183:
			return Global_262145.f_18131;
		
		case 185:
			return Global_262145.f_18131;
		
		case 186:
			return Global_262145.f_18131;
		
		case 189:
			return Global_262145.f_18353;
		
		case 193:
			return Global_262145.f_18353;
		
		case 194:
			return Global_262145.f_18353;
		
		case 195:
			return Global_262145.f_18131;
		
		case 197:
			return Global_262145.f_18131;
		
		case 198:
			return Global_262145.f_18131;
		
		case 199:
			return Global_262145.f_18353;
		
		case 200:
			return Global_262145.f_18353;
		
		case 201:
			return Global_262145.f_18353;
		
		case 205:
			return Global_262145.f_18353;
		
		case 207:
			return Global_262145.f_18131;
		
		case 208:
			return Global_262145.f_18131;
		
		case 209:
			return Global_262145.f_18131;
		
		case 210:
			return Global_262145.f_18353;
		
		case 211:
			return Global_262145.f_18353;
		
		case 190:
			if (func_205(0))
			{
				return Global_262145.f_18007;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (func_205(0))
			{
				return Global_262145.f_18098;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (func_205(0))
			{
				return Global_262145.f_17892;
			}
			else
			{
				return 0;
			}
			break;
		
		case 214:
			return Global_262145.f_19203;
		
		case 215:
			return Global_262145.f_19205;
		
		case 216:
			return Global_262145.f_19207;
		
		case 217:
			return Global_262145.f_19209;
		
		case 218:
			return Global_262145.f_19211;
		
		case 219:
			return Global_262145.f_19213;
		
		case 220:
			return Global_262145.f_19215;
		
		case 221:
			return Global_262145.f_19217;
		
		case 225:
			if (func_205(0))
			{
				return Global_262145.f_21040;
			}
			break;
		
		case 226:
			if (func_205(0))
			{
				return Global_262145.f_21020;
			}
			break;
		
		case 227:
			if (func_205(0))
			{
				return Global_262145.f_21032;
			}
			break;
		
		case 229:
			if (func_205(0))
			{
				return Global_262145.f_22196;
			}
			break;
		
		case 230:
			if (func_205(0))
			{
				return Global_262145.f_22292;
			}
			break;
		
		case 233:
			if (func_205(0))
			{
				return Global_262145.f_22768;
			}
			break;
		
		case 241:
			return 500;
		
		case 242:
			return 500;
		
		case 244:
			return 500;
		
		case 248:
			return 500;
		
		case 239:
			return 500;
		
		case 240:
			return 500;
		
		case 250:
			return 500;
		
		case 237:
			if (func_205(0))
			{
				return Global_262145.f_23931;
			}
			break;
		
		case 238:
			if (func_205(0))
			{
				return Global_262145.f_24042;
			}
			break;
		
		case 249:
			if (func_205(0))
			{
				return Global_262145.f_24058;
			}
			break;
		
		case 243:
			return Global_262145.f_26236;
		
		case 158:
			if (func_205(0))
			{
				return 500;
			}
			break;
	}
	return 0;
}

bool func_205(bool bParam0)
{
	return func_6(unk_0x7C7787D2D7139A85(), bParam0);
}

bool func_206(int iParam0)
{
	return unk_0xA2BC31158C8CEFD2(Global_2531497.f_4898.f_43, iParam0);
}

void func_207(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_135())
		{
			if (func_94(0))
			{
				if (!func_205(0))
				{
					if (unk_0xD56C8C2B75BF9665(func_11()))
					{
						if (func_220() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_220());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_218(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_211("GB_BCUT_TICK1", func_11(), iVar0, 0, 0, 1, 1);
						}
						func_92(20);
						func_208(func_11(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_208(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_9(iParam0, 0, 1))
	{
		Var0.f_0 = -1590759069;
		Var0.f_1 = unk_0x7C7787D2D7139A85();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_210(iParam0);
		func_209(&(Var0.f_6), &(Var0.f_7));
		unk_0x990C4E4B3665A4D6(1, &Var0, 8, func_45(iParam0));
	}
}

void func_209(var uParam0, var uParam1)
{
	*uParam0 = Global_1651198.f_9;
	*uParam1 = Global_1651198.f_10;
}

var func_210(int iParam0)
{
	return Global_1628955[iParam0 /*614*/].f_532;
}

int func_211(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0x645A04F62406C561(unk_0x7C7787D2D7139A85(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0xA09A99AC02B24954(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0xA09A99AC02B24954(iParam1), 64);
		}
		if (unk_0x9591DE0F00127F2A(&Var1))
		{
		}
		unk_0x6C607B5286DEE8D9(sParam0);
		unk_0xEB6F6B8EBD6B6648(func_62(iParam1, -2, 1, 0, 0));
		unk_0xA89C789CC9FEF523(func_216(&Var1));
		if (!iParam3 == 0)
		{
			unk_0xEB6F6B8EBD6B6648(iParam3);
		}
		unk_0x6A8B3CC08A759F44(iParam2);
		iVar0 = unk_0x6E617E0C74B3189D(0, 1);
		func_212(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_212(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_215() || !unk_0xA51CBC95AC3A4B14()) || !func_18(unk_0x7C7787D2D7139A85(), 0))
	{
		return;
	}
	iVar0 = func_213(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1671392.f_5[iVar0 /*53*/] = iParam0;
		Global_1671392.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1671392.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1671392.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1671392.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1671392.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1671392.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1671392.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1671392.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1671392.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1671392.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1671392.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_213(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1671392 - 1))
	{
		if (iParam0 > Global_1671392.f_5[iVar0 /*53*/].f_1)
		{
			func_214(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1671392++;
	if (Global_1671392 > 5)
	{
		Global_1671392 = 5;
		return Global_1671392;
	}
	return (Global_1671392 - 1);
}

void func_214(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1671392.f_5[iVar0 /*53*/] = { Global_1671392.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_215()
{
	return unk_0x9742C47C6EA02281(-1762644250);
}

var func_216(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_217(&cVar0);
}

var func_217(char[4] cParam0)
{
	return cParam0;
}

void func_218(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_219(1);
	}
	else
	{
		iVar1 = func_219(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_219(bool bParam0)
{
	if (bParam0)
	{
		return unk_0xF2DB717A73826179((0.05f * 100f));
	}
	return Global_262145.f_12390;
}

int func_220()
{
	return Global_262145.f_12389;
}

void func_221(int iParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	int iVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	
	bVar18 = func_205(1);
	bVar19 = false;
	if (iParam0 == 237)
	{
		if (func_135())
		{
			iVar17 = unk_0x7C7787D2D7139A85();
		}
		else
		{
			iVar17 = func_11();
		}
		iVar11 = iVar17;
		if (iVar11 != -1)
		{
			iVar0 = Global_1590446[iVar11 /*871*/].f_849.f_1;
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar19 = true;
			}
			else
			{
				fVar12 = unk_0xBBDA792448DB5A89(uParam1->f_10);
				fVar13 = unk_0xBBDA792448DB5A89(uParam1->f_11);
				fVar14 = ((fVar12 / fVar13) * 100f);
				fVar15 = ((IntToFloat(iVar0) / 100f) * fVar14);
				iVar1 = unk_0x11E019C8F43ACC8A(fVar15);
			}
			*uParam3 = iVar1;
			if (bVar19)
			{
				iVar2 = Global_1590446[iVar11 /*871*/].f_849.f_2;
			}
			else
			{
				iVar2 = func_237(Global_1590446[iVar11 /*871*/].f_849, *uParam3);
			}
			if (uParam1->f_17)
			{
				iVar20 = (iVar2 - unk_0x11E019C8F43ACC8A((IntToFloat(iVar2) * 0.9f)));
				if (iVar20 > 100000)
				{
					iVar20 = 100000;
				}
				iVar2 = (iVar2 - iVar20);
			}
			*iParam2 = (*iParam2 + iVar2);
			iVar10 = func_236(*iParam2);
			if (iVar10 > 0)
			{
				if (iVar17 == unk_0x7C7787D2D7139A85())
				{
					func_235("TICK_TCUT", iVar10, 1);
				}
				*iParam2 = (*iParam2 - iVar10);
			}
			Global_1675175.f_49 = *uParam3;
			if (iVar17 == unk_0x7C7787D2D7139A85())
			{
				if (iVar2 > 0)
				{
					func_234(iVar2);
				}
				if (*uParam3 > 0)
				{
					func_232(*uParam3);
				}
				iVar6 = func_231(&uVar5);
				iVar7 = Global_262145.f_23961;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar9 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar6) * Global_262145.f_23960));
				iVar8 = ((*iParam2 / 100) * iVar9);
				*iParam2 = (*iParam2 + iVar8);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_92(140);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar18)
					{
						iVar21 = 0;
						while (iVar21 < unk_0xACF7D965CEBE5714())
						{
							iVar22 = iVar21;
							if (unk_0x2700CB8907086DF3(iVar22))
							{
								iVar23 = unk_0xD7EB9DC48246DA95(iVar22);
								if (func_230(iVar23))
								{
									func_222(iVar23, 1, 198210293);
								}
							}
							iVar21++;
						}
					}
				}
				Global_2531497.f_4898.f_379 = *iParam2;
			}
			else if (bVar18)
			{
				fVar16 = Global_262145.f_23933;
				iVar3 = unk_0x11E019C8F43ACC8A((IntToFloat(*iParam2) * fVar16));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_23934;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1686916 = *iParam2;
					func_92(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_222(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_224(iParam0);
	func_223(iParam0, uVar0, iParam1, iParam2);
}

void func_223(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<8> Var0;
	
	Var0.f_0 = -1548391120;
	Var0.f_1 = unk_0x7C7787D2D7139A85();
	Var0.f_2 = uParam1;
	Var0.f_4 = uParam2;
	Var0.f_3 = uParam3;
	Var0.f_5 = func_210(iParam0);
	func_209(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_10())
	{
		if (unk_0xD56C8C2B75BF9665(iParam0))
		{
			unk_0x990C4E4B3665A4D6(1, &Var0, 8, func_45(iParam0));
		}
	}
}

int func_224(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_229();
	iVar0 = func_227(iParam0, iVar0);
	iVar1 = Global_1628955[func_11() /*614*/].f_11.f_449;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_14943));
	if (iVar0 < func_226())
	{
		iVar0 = func_226();
	}
	if (iVar0 > func_225())
	{
		iVar0 = func_225();
	}
	return iVar0;
}

int func_225()
{
	return Global_262145.f_14944;
}

int func_226()
{
	return Global_262145.f_16119;
}

int func_227(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (func_296(iParam0) * func_228());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_228()
{
	return Global_262145.f_16118;
}

var func_229()
{
	return Global_262145.f_12381;
}

int func_230(int iParam0)
{
	if (unk_0xD56C8C2B75BF9665(iParam0))
	{
		if (iParam0 != unk_0x7C7787D2D7139A85())
		{
			if (func_47(iParam0, unk_0x7C7787D2D7139A85(), 0))
			{
				if (!func_35(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_231(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0xD56C8C2B75BF9665(unk_0x0C98179F08C6DA4F(iVar0)))
		{
			iVar2 = unk_0x0C98179F08C6DA4F(iVar0);
			if (!func_18(iVar2, 0) && !func_47(iVar2, unk_0x7C7787D2D7139A85(), 1))
			{
				iVar1++;
			}
			else if (func_18(iVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_232(int iParam0)
{
	func_233(iParam0, 7236);
}

void func_233(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_118(iParam1, -1, 0);
	func_116(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

void func_234(int iParam0)
{
	func_233(iParam0, 7231);
}

int func_235(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x6C607B5286DEE8D9(sParam0);
	unk_0x6A8B3CC08A759F44(iParam1);
	iVar0 = unk_0x6E617E0C74B3189D(0, 1);
	func_212(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_236(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = (fVar0 * Global_262145.f_23962);
	if (fVar1 > 100000f)
	{
		fVar1 = 100000f;
	}
	return unk_0xF2DB717A73826179(fVar1);
}

int func_237(struct<5> Param0, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	if (iParam5 == Param0.f_1)
	{
		return Param0.f_2;
	}
	iVar0 = Param0.f_2;
	if ((Param0.f_4 == 1 || Param0.f_4 == 2) || Param0.f_4 == 3)
	{
		iVar0 = (iVar0 - Param0.f_3);
	}
	fVar1 = (unk_0xBBDA792448DB5A89(iParam5) / unk_0xBBDA792448DB5A89(Param0.f_1));
	fVar2 = unk_0xBBDA792448DB5A89(iVar0);
	return unk_0xF34EE736CF047844((fVar2 * fVar1));
}

void func_238(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	*uParam4 = 0;
	bVar16 = func_205(1);
	bVar17 = false;
	if (iParam0 == 229)
	{
	}
	else if (iParam0 == 230)
	{
		if (func_135())
		{
			iVar15 = unk_0x7C7787D2D7139A85();
		}
		else
		{
			iVar15 = func_11();
		}
		if (iVar15 != -1)
		{
			if (uParam1->f_16 == 8)
			{
				iVar0 = (func_250(iVar15) + uParam1->f_8);
			}
			else
			{
				iVar0 = (func_241(uParam1->f_16) + uParam1->f_8);
			}
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar17 = true;
			}
			else
			{
				fVar10 = unk_0xBBDA792448DB5A89(uParam1->f_10);
				fVar11 = unk_0xBBDA792448DB5A89(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = unk_0x11E019C8F43ACC8A(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_131(uParam1->f_16, *uParam3);
			*iParam2 = (*iParam2 + iVar2);
			if (bVar17)
			{
				iVar9 = func_130(uParam1->f_16, *uParam3);
				if (iVar9 > 0)
				{
					*iParam2 = (*iParam2 + iVar9);
				}
			}
			if (func_240(*iParam2) > 0)
			{
				if (iVar15 == unk_0x7C7787D2D7139A85())
				{
					func_235("SMTICK_RONCUT", func_240(*iParam2), 1);
				}
				*iParam2 = (*iParam2 - func_240(*iParam2));
			}
			if (iVar15 == unk_0x7C7787D2D7139A85())
			{
				func_239(iVar2, iVar9);
				iVar6 = func_231(&uVar5);
				iVar7 = Global_262145.f_22310;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar6) * Global_262145.f_22309));
				*uParam4 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + *uParam4);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_92(44);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar16)
					{
						iVar18 = 0;
						while (iVar18 < unk_0xACF7D965CEBE5714())
						{
							iVar19 = iVar18;
							if (unk_0x2700CB8907086DF3(iVar19))
							{
								iVar20 = unk_0xD7EB9DC48246DA95(iVar19);
								if (func_230(iVar20))
								{
									func_222(iVar20, 1, 1160415507);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2531497.f_4898.f_379 = *iParam2;
			}
			else if (bVar16)
			{
				fVar14 = Global_262145.f_22243;
				iVar3 = unk_0x11E019C8F43ACC8A((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_22244;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1686916 = *iParam2;
					func_92(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_239(int iParam0, int iParam1)
{
	if (iParam0 > 0)
	{
		func_233(iParam0, 6116);
	}
	if (iParam1 > 0)
	{
		func_233(iParam1, 6117);
	}
}

int func_240(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = (fVar0 * Global_262145.f_22277);
	if (fVar1 > unk_0xBBDA792448DB5A89(Global_262145.f_22278))
	{
		fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_22278);
	}
	return unk_0xF2DB717A73826179(fVar1);
}

int func_241(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_248())
	{
		return 0;
	}
	if (iParam0 == 8)
	{
		return func_250(unk_0x7C7787D2D7139A85());
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		iVar2 = func_243(func_244(func_247(iVar0), -1, -1));
		if (func_242(iVar2) == iParam0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_242(int iParam0)
{
	switch (iParam0)
	{
		case joaat("sm_prop_smug_crate_l_medical"):
			return 5;
		
		case joaat("sm_prop_smug_crate_m_medical"):
			return 5;
		
		case joaat("sm_prop_smug_crate_l_tobacco"):
			return 7;
		
		case joaat("sm_prop_smug_crate_m_tobacco"):
			return 7;
		
		case joaat("sm_prop_smug_crate_l_antiques"):
			return 1;
		
		case joaat("sm_prop_smug_crate_m_antiques"):
			return 1;
		
		case joaat("sm_prop_smug_crate_l_narc"):
			return 6;
		
		case joaat("sm_prop_smug_crate_m_narc"):
			return 6;
		
		case joaat("sm_prop_smug_crate_l_jewellery"):
			return 4;
		
		case joaat("sm_prop_smug_crate_m_jewellery"):
			return 4;
		
		case joaat("sm_prop_smug_crate_l_bones"):
			return 0;
		
		case joaat("sm_prop_smug_crate_m_bones"):
			return 0;
		
		case joaat("sm_prop_smug_crate_l_fake"):
			return 3;
		
		case joaat("sm_prop_smug_crate_m_fake"):
			return 3;
		
		case joaat("sm_prop_smug_crate_l_hazard"):
			return 2;
		
		case joaat("sm_prop_smug_crate_m_hazard"):
			return 2;
		
		default:
	}
	return -1;
}

int func_243(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("sm_prop_smug_crate_l_medical");
		
		case 2:
			return joaat("sm_prop_smug_crate_m_medical");
		
		case 3:
			return joaat("sm_prop_smug_crate_l_tobacco");
		
		case 4:
			return joaat("sm_prop_smug_crate_m_tobacco");
		
		case 5:
			return joaat("sm_prop_smug_crate_l_antiques");
		
		case 6:
			return joaat("sm_prop_smug_crate_m_antiques");
		
		case 7:
			return joaat("sm_prop_smug_crate_l_narc");
		
		case 8:
			return joaat("sm_prop_smug_crate_m_narc");
		
		case 9:
			return joaat("sm_prop_smug_crate_l_jewellery");
		
		case 10:
			return joaat("sm_prop_smug_crate_m_jewellery");
		
		case 11:
			return joaat("sm_prop_smug_crate_l_bones");
		
		case 12:
			return joaat("sm_prop_smug_crate_m_bones");
		
		case 13:
			return joaat("sm_prop_smug_crate_l_fake");
		
		case 14:
			return joaat("sm_prop_smug_crate_m_fake");
		
		case 15:
			return joaat("sm_prop_smug_crate_l_hazard");
		
		case 16:
			return joaat("sm_prop_smug_crate_m_hazard");
		
		default:
	}
	return 0;
}

int func_244(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_20();
	}
	iVar0 = 0;
	iVar1 = func_246(iParam0, iParam1);
	uVar2 = func_245(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0xDB563F2AD2722869(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_245(int iParam0)
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

int func_246(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_20();
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

int func_247(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 16011;
		
		case 1:
			return 16012;
		
		case 2:
			return 16013;
		
		case 3:
			return 16014;
		
		case 4:
			return 16015;
		
		case 5:
			return 16016;
		
		case 6:
			return 16017;
		
		case 7:
			return 16018;
		
		case 8:
			return 16019;
		
		case 9:
			return 16020;
		
		case 10:
			return 16021;
		
		case 11:
			return 16022;
		
		case 12:
			return 16023;
		
		case 13:
			return 16024;
		
		case 14:
			return 16025;
		
		case 15:
			return 16026;
		
		case 16:
			return 16027;
		
		case 17:
			return 16028;
		
		case 18:
			return 16029;
		
		case 19:
			return 16030;
		
		case 20:
			return 16031;
		
		case 21:
			return 16032;
		
		case 22:
			return 16033;
		
		case 23:
			return 16034;
		
		case 24:
			return 16035;
		
		case 25:
			return 16036;
		
		case 26:
			return 16037;
		
		case 27:
			return 16038;
		
		case 28:
			return 16039;
		
		case 29:
			return 16040;
		
		case 30:
			return 16041;
		
		case 31:
			return 16042;
		
		case 32:
			return 16043;
		
		case 33:
			return 16044;
		
		case 34:
			return 16045;
		
		case 35:
			return 16046;
		
		case 36:
			return 16047;
		
		case 37:
			return 16048;
		
		case 38:
			return 16049;
		
		case 39:
			return 16050;
		
		case 40:
			return 16051;
		
		case 41:
			return 16052;
		
		case 42:
			return 16053;
		
		case 43:
			return 16054;
		
		case 44:
			return 16055;
		
		case 45:
			return 16056;
		
		case 46:
			return 16057;
		
		case 47:
			return 16058;
		
		case 48:
			return 16059;
		
		case 49:
			return 16060;
		
		default:
	}
	return 16011;
}

bool func_248()
{
	return func_249() != 0;
}

int func_249()
{
	return Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_273.f_260;
}

int func_250(int iParam0)
{
	if (iParam0 != func_10() && func_251(iParam0))
	{
		return Global_1590446[iParam0 /*871*/].f_273.f_260.f_3;
	}
	return 0;
}

int func_251(int iParam0)
{
	if (iParam0 != func_10())
	{
		return Global_1590446[iParam0 /*871*/].f_273.f_260 != 0;
	}
	return 0;
}

void func_252(int iParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	bVar17 = func_205(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (func_135())
		{
			iVar15 = unk_0x7C7787D2D7139A85();
		}
		else
		{
			iVar15 = func_11();
		}
		if (iVar15 != -1)
		{
			iVar16 = func_134(iVar15);
			iVar0 = (func_274(iVar15, iVar16) + uParam1->f_8);
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
			}
			else
			{
				fVar10 = unk_0xBBDA792448DB5A89(uParam1->f_10);
				fVar11 = unk_0xBBDA792448DB5A89(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = unk_0x11E019C8F43ACC8A(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_270(iVar15, iVar16, iVar1);
			if (uParam1->f_14 == 0)
			{
				iVar2 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar2) * Global_262145.f_21023));
			}
			else
			{
				iVar2 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar2) * Global_262145.f_21022));
			}
			*iParam2 = (*iParam2 + iVar2);
			if (iVar15 == unk_0x7C7787D2D7139A85())
			{
				func_267(iVar16, iVar2);
				if (func_263(iVar16) >= Global_262145.f_20571 || iVar2 >= Global_262145.f_20571)
				{
					func_253(5);
				}
				iVar6 = func_231(&uVar5);
				iVar7 = unk_0xF2DB717A73826179(Global_262145.f_21025);
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar6) * Global_262145.f_21024));
				iVar9 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + iVar9);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_92(108);
					}
					else
					{
						func_92(110);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar17)
					{
						iVar18 = 0;
						while (iVar18 < unk_0xACF7D965CEBE5714())
						{
							iVar19 = iVar18;
							if (unk_0x2700CB8907086DF3(iVar19))
							{
								iVar20 = unk_0xD7EB9DC48246DA95(iVar19);
								if (func_230(iVar20))
								{
									func_222(iVar20, 1, -1905128202);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2531497.f_4898.f_379 = *iParam2;
			}
			else if (bVar17)
			{
				fVar14 = Global_262145.f_21026;
				iVar3 = unk_0x11E019C8F43ACC8A((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_21027;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1686916 = *iParam2;
					func_92(112);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
	else if (iParam0 == 227)
	{
	}
}

void func_253(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_20559)
			{
				if (func_255(Global_262145.f_20560))
				{
					func_254("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0, 1);
				}
			}
			break;
		
		case 1:
			if (Global_262145.f_20561)
			{
				if (func_255(Global_262145.f_20562))
				{
					func_254("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0, 1);
				}
			}
			break;
		
		case 2:
			if (Global_262145.f_20563)
			{
				if (func_255(Global_262145.f_20564))
				{
					func_254("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0, 1);
				}
			}
			break;
		
		case 3:
			if (Global_262145.f_20565)
			{
				if (func_255(Global_262145.f_20566))
				{
					func_254("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0, 1);
				}
			}
			break;
		
		case 4:
			if (Global_262145.f_20567)
			{
				if (func_255(Global_262145.f_20568))
				{
					func_254("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0, 1);
				}
			}
			break;
		
		case 5:
			if (Global_262145.f_20569)
			{
				if (func_255(Global_262145.f_20570))
				{
					func_235("CLOTHAWDSTRAP3", Global_262145.f_20571, 1);
				}
			}
			break;
		
		case 6:
			if (Global_262145.f_20572)
			{
				if (func_255(Global_262145.f_20573))
				{
					func_235("CLOTHAWDSTRAP5", Global_262145.f_20705, 1);
				}
			}
			break;
		
		case 7:
			if (Global_262145.f_20575)
			{
				if (func_255(Global_262145.f_20576))
				{
					func_254("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0, 1);
				}
			}
			break;
		
		case 8:
			if (Global_262145.f_20577)
			{
				if (func_255(Global_262145.f_20578))
				{
					func_254("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0, 1);
				}
			}
			break;
		
		case 9:
			if (Global_262145.f_20579)
			{
				if (func_255(Global_262145.f_20580))
				{
					func_254("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0, 1);
				}
			}
			break;
		
		case 10:
			if (Global_262145.f_20581)
			{
				if (func_255(Global_262145.f_20582))
				{
					func_254("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0, 1);
				}
			}
			break;
		
		case 11:
			if (Global_262145.f_20583)
			{
				if (func_255(Global_262145.f_20584))
				{
					func_254("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0, 1);
				}
			}
			break;
		
		case 12:
			if (Global_262145.f_20585)
			{
				if (func_255(Global_262145.f_20586))
				{
					func_254("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0, 1);
				}
			}
			break;
		
		case 13:
			if (Global_262145.f_20587)
			{
				if (func_255(Global_262145.f_20588))
				{
					func_254("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0, 1);
				}
			}
			break;
		
		case 14:
			if (Global_262145.f_20589)
			{
				if (func_255(Global_262145.f_20590))
				{
					func_254("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0, 1);
				}
			}
			break;
	}
}

int func_254(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	unk_0x6C607B5286DEE8D9(sParam0);
	if (!iParam2 == 0)
	{
		unk_0xEB6F6B8EBD6B6648(iParam2);
	}
	if (!iParam3 == 0)
	{
		unk_0xEB6F6B8EBD6B6648(iParam3);
	}
	unk_0x0AC9F8E1AFCEC860(sParam1);
	if (!bParam4)
	{
		iVar0 = unk_0x6E617E0C74B3189D(0, 1);
	}
	else
	{
		Global_2507671 = { func_174(unk_0x7C7787D2D7139A85()) };
		if (unk_0x4065D3D900AB253F(&Global_2507601, 35, &Global_2507671))
		{
			iVar1 = 0;
			if (unk_0x2553916E420E8EF0(&(Global_2507601.f_22), "Leader") && Global_2507601.f_30 == 0)
			{
				iVar1 = 1;
			}
			if (Global_2507601.f_21 > 0)
			{
				iVar2 = 0;
			}
			else
			{
				iVar2 = 1;
			}
			iVar0 = unk_0xE21FC82BE47E6523(iVar2, unk_0xEF4D2307E13798BF(&Global_2507601, 35), &(Global_2507601.f_17), Global_2507601.f_30, iVar1, 0, Global_2507601, unk_0xA09A99AC02B24954(unk_0x7C7787D2D7139A85()), Global_1314030, Global_1314031, Global_1314032);
		}
		else
		{
			iVar0 = unk_0x6E617E0C74B3189D(0, 1);
		}
	}
	func_212(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_255(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_JBIB_19_0"):
		case joaat("DLC_MP_GR_F_JBIB_25_0"):
		case -1191485992:
		case joaat("CLO_GRF_U_25_0"):
			if (!func_260(15417, -1, -1))
			{
				func_259(15417, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_JBIB_19_1"):
		case joaat("DLC_MP_GR_F_JBIB_25_1"):
		case -1407302654:
		case joaat("CLO_GRF_U_25_1"):
			if (!func_260(15418, -1, -1))
			{
				func_259(15418, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_JBIB_20_0"):
		case joaat("DLC_MP_GR_F_JBIB_26_0"):
		case joaat("CLO_GRM_U_20_0"):
		case -1850642937:
			if (!func_260(15425, -1, -1))
			{
				func_259(15425, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_DECL_5_0"):
		case joaat("DLC_MP_GR_F_DECL_5_0"):
		case -1307315235:
		case joaat("CLO_GRF_DECL_19"):
			if (!func_260(15405, -1, -1))
			{
				func_259(15405, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_1"):
		case joaat("DLC_MP_GR_F_DECL_5_1"):
		case joaat("CLO_GRM_DECL_20"):
		case 1374601256:
			if (!func_260(15393, -1, -1))
			{
				func_259(15393, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_2"):
		case joaat("DLC_MP_GR_F_DECL_5_2"):
		case joaat("CLO_GRM_DECL_21"):
		case -660288110:
			if (!func_260(15409, -1, -1))
			{
				func_259(15409, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_3"):
		case joaat("DLC_MP_GR_F_DECL_5_3"):
		case -1005186539:
		case joaat("CLO_GRF_DECL_22"):
			if (!func_260(15396, -1, -1))
			{
				func_259(15396, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_4"):
		case joaat("DLC_MP_GR_F_DECL_5_4"):
		case joaat("CLO_GRM_DECL_23"):
		case -1132522169:
			if (!func_260(15412, -1, -1))
			{
				func_259(15412, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_5"):
		case joaat("DLC_MP_GR_F_DECL_5_5"):
		case 1110085176:
		case joaat("CLO_GRF_DECL_24"):
			if (!func_258(209, -1))
			{
				func_256(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_6"):
		case joaat("DLC_MP_GR_F_DECL_5_6"):
		case joaat("CLO_GRM_DECL_25"):
		case -182614393:
			if (!func_260(15403, -1, -1))
			{
				func_259(15403, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_7"):
		case joaat("DLC_MP_GR_F_DECL_5_7"):
		case -1496983695:
		case joaat("CLO_GRF_DECL_26"):
			if (!func_258(209, -1))
			{
				func_256(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_8"):
		case joaat("DLC_MP_GR_F_DECL_5_8"):
		case joaat("CLO_GRM_DECL_27"):
		case -646852824:
			if (!func_260(15389, -1, -1))
			{
				func_259(15389, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_9"):
		case joaat("DLC_MP_GR_F_DECL_5_9"):
		case 420690954:
		case joaat("CLO_GRF_DECL_28"):
			if (!func_258(209, -1))
			{
				func_256(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_10"):
		case joaat("DLC_MP_GR_F_DECL_5_10"):
		case joaat("CLO_GRM_DECL_29"):
		case 1717168382:
			if (!func_260(15398, -1, -1))
			{
				func_259(15398, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_PHEAD_6_0"):
		case joaat("DLC_MP_GR_F_PHEAD_6_0"):
		case joaat("DLC_MP_GR_M_PHEAD_7_0"):
		case joaat("DLC_MP_GR_F_PHEAD_7_0"):
		case -1991379993:
		case joaat("CLO_GRF_PH_6_0"):
			if (!func_260(15400, -1, -1))
			{
				func_259(15400, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_1"):
		case joaat("DLC_MP_GR_F_PHEAD_6_1"):
		case joaat("DLC_MP_GR_M_PHEAD_7_1"):
		case joaat("DLC_MP_GR_F_PHEAD_7_1"):
		case 2065127290:
		case joaat("CLO_GRF_PH_6_1"):
			if (!func_258(209, -1))
			{
				func_256(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_2"):
		case joaat("DLC_MP_GR_F_PHEAD_6_2"):
		case joaat("DLC_MP_GR_M_PHEAD_7_2"):
		case joaat("DLC_MP_GR_F_PHEAD_7_2"):
		case -56403312:
		case joaat("CLO_GRF_PH_6_2"):
			if (!func_260(15408, -1, -1))
			{
				func_259(15408, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_3"):
		case joaat("DLC_MP_GR_F_PHEAD_6_3"):
		case joaat("DLC_MP_GR_M_PHEAD_7_3"):
		case joaat("DLC_MP_GR_F_PHEAD_7_3"):
		case -292700571:
		case joaat("CLO_GRF_PH_6_3"):
			if (!func_258(209, -1))
			{
				func_256(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_4"):
		case joaat("DLC_MP_GR_F_PHEAD_6_4"):
		case joaat("DLC_MP_GR_M_PHEAD_7_4"):
		case joaat("DLC_MP_GR_F_PHEAD_7_4"):
		case -648899601:
		case joaat("CLO_GRF_PH_6_4"):
			if (!func_260(15411, -1, -1))
			{
				func_259(15411, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_5"):
		case joaat("DLC_MP_GR_F_PHEAD_6_5"):
		case joaat("DLC_MP_GR_M_PHEAD_7_5"):
		case joaat("DLC_MP_GR_F_PHEAD_7_5"):
		case -889194678:
		case joaat("CLO_GRF_PH_6_5"):
			if (!func_260(15397, -1, -1))
			{
				func_259(15397, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_6"):
		case joaat("DLC_MP_GR_F_PHEAD_6_6"):
		case joaat("DLC_MP_GR_M_PHEAD_7_6"):
		case joaat("DLC_MP_GR_F_PHEAD_7_6"):
		case 867092646:
		case joaat("CLO_GRF_PH_6_6"):
			if (!func_260(15413, -1, -1))
			{
				func_259(15413, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_7"):
		case joaat("DLC_MP_GR_F_PHEAD_6_7"):
		case joaat("DLC_MP_GR_M_PHEAD_7_7"):
		case joaat("DLC_MP_GR_F_PHEAD_7_7"):
		case 627387411:
		case joaat("CLO_GRF_PH_6_7"):
			if (!func_260(15391, -1, -1))
			{
				func_259(15391, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_8"):
		case joaat("DLC_MP_GR_F_PHEAD_6_8"):
		case joaat("DLC_MP_GR_M_PHEAD_7_8"):
		case joaat("DLC_MP_GR_F_PHEAD_7_8"):
		case joaat("CLO_GRM_PH_6_8"):
		case 1682427144:
			if (!func_260(15388, -1, -1))
			{
				func_259(15388, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_9"):
		case joaat("DLC_MP_GR_F_PHEAD_6_9"):
		case joaat("DLC_MP_GR_M_PHEAD_7_9"):
		case joaat("DLC_MP_GR_F_PHEAD_7_9"):
		case 35480964:
		case joaat("CLO_GRF_PH_6_9"):
			if (!func_258(209, -1))
			{
				func_256(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_10"):
		case joaat("DLC_MP_GR_F_PHEAD_6_10"):
		case joaat("DLC_MP_GR_M_PHEAD_7_10"):
		case joaat("DLC_MP_GR_F_PHEAD_7_10"):
		case joaat("CLO_GRM_PH_6_10"):
		case 1377465778:
			if (!func_260(15401, -1, -1))
			{
				func_259(15401, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Gunrunning_Award_000_M"):
		case joaat("MP_Gunrunning_Award_000_F"):
		case -1604737223:
		case joaat("CLO_GRF_DECL_0"):
			if (!func_260(15394, -1, -1))
			{
				func_259(15394, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_001_M"):
		case joaat("MP_Gunrunning_Award_001_F"):
		case -1367129204:
		case joaat("CLO_GRF_DECL_1"):
			if (!func_258(209, -1))
			{
				func_256(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_002_M"):
		case joaat("MP_Gunrunning_Award_002_F"):
		case joaat("CLO_GRM_DECL_2"):
		case -1438775324:
			if (!func_260(15406, -1, -1))
			{
				func_259(15406, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_003_M"):
		case joaat("MP_Gunrunning_Award_003_F"):
		case -1686659723:
		case joaat("CLO_GRF_DECL_3"):
			if (!func_260(15395, -1, -1))
			{
				func_259(15395, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_004_M"):
		case joaat("MP_Gunrunning_Award_004_F"):
		case 1992217604:
		case joaat("CLO_GRF_DECL_4"):
			if (!func_258(209, -1))
			{
				func_256(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_005_M"):
		case joaat("MP_Gunrunning_Award_005_F"):
		case -1934557208:
		case joaat("CLO_GRF_DECL_5"):
			if (!func_260(15410, -1, -1))
			{
				func_259(15410, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_006_M"):
		case joaat("MP_Gunrunning_Award_006_F"):
		case -1034032319:
		case joaat("CLO_GRF_DECL_6"):
			if (!func_260(15407, -1, -1))
			{
				func_259(15407, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_007_M"):
		case joaat("MP_Gunrunning_Award_007_F"):
		case 1747334867:
		case joaat("CLO_GRF_DECL_7"):
			if (!func_258(209, -1))
			{
				func_256(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_008_M"):
		case joaat("MP_Gunrunning_Award_008_F"):
		case 236389050:
		case joaat("CLO_GRF_DECL_8"):
			if (!func_258(209, -1))
			{
				func_256(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_009_M"):
		case joaat("MP_Gunrunning_Award_009_F"):
		case joaat("CLO_GRM_DECL_9"):
		case 908992470:
			if (!func_260(15414, -1, -1))
			{
				func_259(15414, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_010_M"):
		case joaat("MP_Gunrunning_Award_010_F"):
		case joaat("CLO_GRM_DECL_10"):
		case -1021993708:
			if (!func_260(15415, -1, -1))
			{
				func_259(15415, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_011_M"):
		case joaat("MP_Gunrunning_Award_011_F"):
		case 479676642:
		case joaat("CLO_GRF_DECL_11"):
			if (!func_260(15399, -1, -1))
			{
				func_259(15399, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_012_M"):
		case joaat("MP_Gunrunning_Award_012_F"):
		case 242920617:
		case joaat("CLO_GRF_DECL_12"):
			if (!func_260(15404, -1, -1))
			{
				func_259(15404, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_013_M"):
		case joaat("MP_Gunrunning_Award_013_F"):
		case -1219723702:
		case joaat("CLO_GRF_DECL_13"):
			if (!func_258(209, -1))
			{
				func_256(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_014_M"):
		case joaat("MP_Gunrunning_Award_014_F"):
		case joaat("CLO_GRM_DECL_14"):
		case 2087194554:
			if (!func_260(15392, -1, -1))
			{
				func_259(15392, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_015_M"):
		case joaat("MP_Gunrunning_Award_015_F"):
		case joaat("CLO_GRM_DECL_15"):
		case 981732339:
			if (!func_260(15390, -1, -1))
			{
				func_259(15390, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_016_M"):
		case joaat("MP_Gunrunning_Award_016_F"):
		case joaat("CLO_GRM_DECL_16"):
		case 1271443068:
			if (!func_260(15402, -1, -1))
			{
				func_259(15402, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_017_M"):
		case joaat("MP_Gunrunning_Award_017_F"):
		case joaat("CLO_GRM_DECL_17"):
		case -1785118184:
			if (!func_260(15416, -1, -1))
			{
				func_259(15416, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_018_M"):
		case joaat("MP_Gunrunning_Award_018_F"):
		case 2029126042:
		case joaat("CLO_GRF_DECL_18"):
			if (!func_258(209, -1))
			{
				func_256(209, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Gunrunning_Award_019_M"):
		case joaat("MP_Gunrunning_Award_025_F"):
		case -14316613:
		case joaat("CLO_GRF_DECL_30"):
			if (!func_260(15426, -1, -1))
			{
				func_259(15426, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_020_M"):
		case joaat("MP_Gunrunning_Award_020_F"):
		case 1281631799:
		case joaat("CLO_GRF_DECL_31"):
			if (!func_260(15422, -1, -1))
			{
				func_259(15422, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_020_M_ALT"):
		case joaat("MP_Gunrunning_Award_020_F_ALT"):
		case 447234752:
		case joaat("CLO_GRF_DECL_32"):
			if (!func_260(15423, -1, -1))
			{
				func_259(15423, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_021_M"):
		case joaat("MP_Gunrunning_Award_021_F"):
		case 278933172:
		case joaat("CLO_GRF_DECL_33"):
			if (!func_260(15421, -1, -1))
			{
				func_259(15421, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_022_M"):
		case joaat("MP_Gunrunning_Award_026_F"):
		case -562607521:
		case joaat("CLO_GRF_DECL_34"):
			if (!func_260(15427, -1, -1))
			{
				func_259(15427, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_023_M"):
		case joaat("MP_Gunrunning_Award_023_F"):
		case 755492739:
		case joaat("CLO_GRF_DECL_35"):
			if (!func_260(15419, -1, -1))
			{
				func_259(15419, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_024_M"):
		case joaat("MP_Gunrunning_Award_024_F"):
		case -85982412:
		case joaat("CLO_GRF_DECL_36"):
			if (!func_260(15420, -1, -1))
			{
				func_259(15420, 1, -1, 1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_256(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_257())
	{
		iVar0 = Global_2576213[iParam0 /*3*/][func_119(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x0EC7EA43028EE330(iVar0, iParam1, iParam3);
		}
	}
}

int func_257()
{
	return 1;
	return 0;
}

int func_258(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2576213[iParam0 /*3*/][func_119(iParam1)];
	if (unk_0xF7B5584413D4EA03(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_259(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	var uVar18;
	var uVar19;
	var uVar20;
	var uVar21;
	var uVar22;
	
	if (iParam2 == -1)
	{
		iParam2 = func_20();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x0AF2E9D484CE7B77((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x368CD44C448A9997((iParam0 - 0)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x0AF2E9D484CE7B77((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x368CD44C448A9997((iParam0 - 192)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x0AF2E9D484CE7B77((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x368CD44C448A9997((iParam0 - 513)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x0AF2E9D484CE7B77((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x368CD44C448A9997((iParam0 - 705)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x01BC1C30C6CB2497((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x368CD44C448A9997((iParam0 - 3111)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x01BC1C30C6CB2497((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x368CD44C448A9997((iParam0 - 2919)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0xCD032CF93A7EDD1E((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x368CD44C448A9997((iParam0 - 4207)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0xCD032CF93A7EDD1E((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x368CD44C448A9997((iParam0 - 4335)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0xCD032CF93A7EDD1E((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x368CD44C448A9997((iParam0 - 6029)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0xCD032CF93A7EDD1E((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x368CD44C448A9997((iParam0 - 7385)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0xCD032CF93A7EDD1E((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x368CD44C448A9997((iParam0 - 7321)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0xCD032CF93A7EDD1E((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x368CD44C448A9997((iParam0 - 9361)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = unk_0xCD032CF93A7EDD1E((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x368CD44C448A9997((iParam0 - 15369)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = unk_0xCD032CF93A7EDD1E((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x368CD44C448A9997((iParam0 - 15562)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		uVar16 = unk_0xCD032CF93A7EDD1E((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x368CD44C448A9997((iParam0 - 15946)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		uVar17 = unk_0xCD032CF93A7EDD1E((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x368CD44C448A9997((iParam0 - 18098)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		uVar18 = unk_0xCD032CF93A7EDD1E((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x368CD44C448A9997((iParam0 - 22066)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		uVar19 = unk_0xCD032CF93A7EDD1E((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - unk_0x368CD44C448A9997((iParam0 - 24962)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar19, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		uVar20 = unk_0xCD032CF93A7EDD1E((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - unk_0x368CD44C448A9997((iParam0 - 26810)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar20, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		uVar21 = unk_0xCD032CF93A7EDD1E((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - unk_0x368CD44C448A9997((iParam0 - 28098)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar21, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		uVar22 = unk_0xCD032CF93A7EDD1E((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - unk_0x368CD44C448A9997((iParam0 - 28355)) * 64);
		iVar0 = unk_0xCDCD424692301321(uVar22, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_260(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_20();
	}
	iVar1 = func_262(iParam0, iParam1);
	uVar2 = func_261(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x0F1A9E0CCDF4F08D(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_261(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x368CD44C448A9997((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x368CD44C448A9997((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x368CD44C448A9997((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x368CD44C448A9997((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x368CD44C448A9997((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x368CD44C448A9997((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x368CD44C448A9997((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x368CD44C448A9997((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x368CD44C448A9997((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x368CD44C448A9997((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x368CD44C448A9997((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x368CD44C448A9997((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x368CD44C448A9997((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x368CD44C448A9997((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0x368CD44C448A9997((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0x368CD44C448A9997((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - unk_0x368CD44C448A9997((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - unk_0x368CD44C448A9997((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - unk_0x368CD44C448A9997((iParam0 - 26810)) * 64);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = ((iParam0 - 28098) - unk_0x368CD44C448A9997((iParam0 - 28098)) * 64);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = ((iParam0 - 28355) - unk_0x368CD44C448A9997((iParam0 - 28355)) * 64);
	}
	return iVar0;
}

int func_262(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_20();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x0AF2E9D484CE7B77((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x0AF2E9D484CE7B77((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x0AF2E9D484CE7B77((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x0AF2E9D484CE7B77((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x01BC1C30C6CB2497((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x01BC1C30C6CB2497((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 26810), 0, 1, iParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 28098), 0, 1, iParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 28355), 0, 1, iParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	return iVar0;
}

int func_263(int iParam0)
{
	int iVar0;
	
	iVar0 = func_265(iParam0);
	return func_118(func_264(iVar0), -1, 0);
}

int func_264(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3951;
		
		case 1:
			return 3952;
		
		case 2:
			return 3953;
		
		case 3:
			return 3954;
		
		case 4:
			return 3955;
		
		case 5:
			return 5456;
		
		default:
	}
	return 3951;
}

int func_265(int iParam0)
{
	int iVar0;
	
	if (func_266(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_273.f_179[iVar0 /*12*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_266(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

void func_267(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_265(iParam0);
	iVar1 = func_264(iVar0);
	iVar2 = (func_118(iVar1, -1, 0) + iParam1);
	func_116(iVar1, iVar2, -1, 1, 0);
	if (iVar0 == 5)
	{
		return;
	}
	if (func_244(9357, -1, -1) < 3)
	{
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_273.f_179[iVar0 /*12*/] != 0)
			{
				iVar1 = func_264(iVar0);
				iVar3 = (iVar3 + func_118(iVar1, -1, 0));
			}
			iVar0++;
		}
		iVar4 = 1;
		while (iVar4 <= 3)
		{
			if (iVar3 >= func_269(iVar4))
			{
				iVar5 = iVar4;
			}
			iVar4++;
		}
		func_268(9357, iVar5, -1, 1);
	}
}

var func_268(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_20();
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

int func_269(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 100000;
			break;
		
		case 2:
			return 300000;
			break;
		
		case 3:
			return 500000;
			break;
	}
	return 0;
}

int func_270(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_147(iParam1);
	if (func_266(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_16948;
				if (func_271(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16953);
				}
				if (func_271(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16958);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_262145.f_16947;
				if (func_271(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16952);
				}
				if (func_271(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16957);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_262145.f_16946;
				if (func_271(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16951);
				}
				if (func_271(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16956);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_262145.f_16944;
				if (func_271(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16949);
				}
				if (func_271(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16954);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_262145.f_16945;
				if (func_271(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16950);
				}
				if (func_271(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16955);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 5:
				iVar0 = Global_262145.f_21048;
				if (func_271(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_21050);
				}
				if (func_271(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_21049);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_271(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_273(iParam0, iParam1))
	{
		iVar0 = func_272(iParam0, iParam1);
		return unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/].f_5, iParam2);
	}
	return 0;
}

int func_272(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_266(iParam1) && iParam0 != func_10())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_273(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_266(iParam1) && iParam0 != func_10())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_274(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_10())
	{
		return 0;
	}
	if (func_266(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/] == iParam1)
			{
				return Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_275(int iParam0, var uParam1, int iParam2, var uParam3)
{
	struct<2> Var0;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	var uVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	struct<2> Var15;
	float fVar17;
	float fVar18;
	float fVar19;
	int iVar20;
	float fVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	int iVar25;
	
	if (iParam0 == 192)
	{
	}
	else if (iParam0 == 190)
	{
		if (uParam1->f_10 > 0)
		{
			if (func_121())
			{
				Var0 = { func_149() };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar2 = unk_0xBBDA792448DB5A89(uParam1->f_10);
					fVar3 = unk_0xBBDA792448DB5A89(uParam1->f_11);
					fVar4 = ((fVar2 / fVar3) * 100f);
					iVar5 = (uParam1->f_15 + uParam1->f_8);
					fVar6 = ((IntToFloat(iVar5) / 100f) * fVar4);
					*uParam3 = unk_0x11E019C8F43ACC8A(fVar6);
				}
				iVar7 = func_270(unk_0x7C7787D2D7139A85(), Var0.f_0, *uParam3);
				if (Var0.f_1 == 1)
				{
					fVar8 = (unk_0xBBDA792448DB5A89(iVar7) * Global_262145.f_18583);
					iVar7 = unk_0xF2DB717A73826179(fVar8);
				}
				else
				{
					fVar9 = (unk_0xBBDA792448DB5A89(iVar7) * Global_262145.f_18582);
					iVar7 = unk_0xF2DB717A73826179(fVar9);
				}
				*iParam2 = (*iParam2 + iVar7);
				iVar11 = func_231(&uVar10);
				iVar12 = unk_0xF2DB717A73826179(Global_262145.f_18573);
				if (iVar11 > iVar12)
				{
					iVar11 = iVar12;
				}
				iVar13 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar11) * Global_262145.f_18572));
				iVar14 = ((*iParam2 / 100) * iVar13);
				*iParam2 = (*iParam2 + iVar14);
				if (uParam1->f_6)
				{
					*iParam2 = (*iParam2 + *uParam1);
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
					else if (uParam1->f_12 == 9)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
				if (iVar11 > 0)
				{
					func_92(86);
				}
				Global_2531497.f_4898.f_379 = *iParam2;
			}
			else if (func_205(0))
			{
				Var15 = { func_276(func_11()) };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar17 = unk_0xBBDA792448DB5A89(uParam1->f_10);
					fVar18 = unk_0xBBDA792448DB5A89(uParam1->f_11);
					fVar19 = ((fVar17 / fVar18) * 100f);
					iVar20 = (uParam1->f_15 + uParam1->f_8);
					fVar21 = ((IntToFloat(iVar20) / 100f) * fVar19);
					*uParam3 = unk_0x11E019C8F43ACC8A(fVar21);
				}
				iVar22 = func_270(func_11(), Var15.f_0, *uParam3);
				if (Var15.f_1 == 1)
				{
					iVar22 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar22) * Global_262145.f_18583));
				}
				else if (Var15.f_1 == 0)
				{
					iVar22 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar22) * Global_262145.f_18582));
				}
				*iParam2 = (*iParam2 + iVar22);
				fVar23 = Global_262145.f_18622;
				iVar24 = unk_0x11E019C8F43ACC8A((IntToFloat(*iParam2) * fVar23));
				*iParam2 = iVar24;
				iVar25 = Global_262145.f_18623;
				if (*iParam2 > iVar25)
				{
					*iParam2 = iVar25;
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
			}
		}
	}
}

struct<2> func_276(int iParam0)
{
	return Global_1628955[iParam0 /*614*/].f_11.f_193;
}

void func_277(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (iParam0 == 167)
	{
		if (func_28(unk_0x7C7787D2D7139A85()))
		{
			if (bParam1)
			{
				func_292();
			}
			func_291();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_28(unk_0x7C7787D2D7139A85()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_283(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_182));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_282(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_231(&uVar2);
					iVar4 = Global_262145.f_16129;
					if (iVar3 > iVar4)
					{
						iVar3 = iVar4;
					}
					iVar5 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar3) * Global_262145.f_15338));
					iVar6 = ((*iParam3 / 100) * iVar5);
					*iParam3 = (*iParam3 + iVar6);
					if (uParam2->f_6)
					{
						*iParam3 = (*iParam3 + *uParam2);
					}
					if (iVar3 > 0 && uParam2->f_9 != 4)
					{
						func_92(44);
					}
				}
				func_280(*iParam3);
				func_279();
				Global_2531497.f_4898.f_379 = *iParam3;
				iVar7 = 0;
				while (iVar7 < unk_0xACF7D965CEBE5714())
				{
					iVar8 = iVar7;
					if (unk_0x2700CB8907086DF3(iVar8))
					{
						iVar9 = unk_0xD7EB9DC48246DA95(iVar8);
						if (func_230(iVar9))
						{
							func_222(iVar9, 1, -1292453789);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_28(unk_0x7C7787D2D7139A85()))
		{
			func_278();
		}
	}
}

void func_278()
{
	int iVar0;
	
	iVar0 = Global_2578770[func_20()];
	iVar0++;
	func_115(3667, iVar0, -1, 1);
}

void func_279()
{
	int iVar0;
	
	iVar0 = Global_2578776[func_20()];
	iVar0++;
	func_115(3666, iVar0, -1, 1);
}

void func_280(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2578779[func_20()];
	iVar0 = (iVar0 + iParam0);
	func_115(3668, iVar0, -1, 1);
	if (func_244(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_281(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_268(7666, iVar2, -1, 1);
	}
}

int func_281(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_16262;
			break;
		
		case 2:
			return Global_262145.f_16263;
			break;
		
		case 3:
			return Global_262145.f_16264;
			break;
		
		case 4:
			return Global_262145.f_16265;
			break;
		
		case 5:
			return Global_262145.f_16266;
			break;
		
		case 6:
			return Global_262145.f_16267;
			break;
		
		case 7:
			return Global_262145.f_16268;
			break;
		
		case 8:
			return Global_262145.f_16269;
			break;
		
		case 9:
			return Global_262145.f_16270;
			break;
		
		case 10:
			return Global_262145.f_16271;
			break;
		
		case 11:
			return Global_262145.f_16272;
			break;
		
		case 12:
			return Global_262145.f_16273;
			break;
		
		case 13:
			return Global_262145.f_16274;
			break;
		
		case 14:
			return Global_262145.f_16275;
			break;
		
		case 15:
			return Global_262145.f_16276;
			break;
		
		case 16:
			return Global_262145.f_16277;
			break;
		
		case 17:
			return Global_262145.f_16278;
			break;
		
		case 18:
			return Global_262145.f_16279;
			break;
		
		case 19:
			return Global_262145.f_16280;
			break;
		
		case 20:
			return Global_262145.f_16281;
			break;
		
		case 21:
			return Global_262145.f_16282;
			break;
		
		case 22:
			return Global_262145.f_16283;
			break;
		
		case 23:
			return Global_262145.f_16284;
			break;
		
		case 24:
			return Global_262145.f_16285;
			break;
	}
	return 0;
}

var func_282(int iParam0)
{
	if (iParam0 >= Global_262145.f_15316)
	{
		return Global_262145.f_15337;
	}
	else if (iParam0 >= Global_262145.f_15315)
	{
		return Global_262145.f_15336;
	}
	else if (iParam0 >= Global_262145.f_15314)
	{
		return Global_262145.f_15335;
	}
	else if (iParam0 >= Global_262145.f_15313)
	{
		return Global_262145.f_15334;
	}
	else if (iParam0 >= Global_262145.f_15312)
	{
		return Global_262145.f_15333;
	}
	else if (iParam0 >= Global_262145.f_15311)
	{
		return Global_262145.f_15332;
	}
	else if (iParam0 >= Global_262145.f_15310)
	{
		return Global_262145.f_15331;
	}
	else if (iParam0 >= Global_262145.f_15309)
	{
		return Global_262145.f_15330;
	}
	else if (iParam0 >= Global_262145.f_15308)
	{
		return Global_262145.f_15329;
	}
	else if (iParam0 >= Global_262145.f_15307)
	{
		return Global_262145.f_15328;
	}
	else if (iParam0 >= Global_262145.f_15306)
	{
		return Global_262145.f_15327;
	}
	else if (iParam0 >= Global_262145.f_15305)
	{
		return Global_262145.f_15326;
	}
	else if (iParam0 >= Global_262145.f_15304)
	{
		return Global_262145.f_15325;
	}
	else if (iParam0 >= Global_262145.f_15303)
	{
		return Global_262145.f_15324;
	}
	else if (iParam0 >= Global_262145.f_15302)
	{
		return Global_262145.f_15323;
	}
	else if (iParam0 >= Global_262145.f_15301)
	{
		return Global_262145.f_15322;
	}
	else if (iParam0 >= Global_262145.f_15300)
	{
		return Global_262145.f_15321;
	}
	else if (iParam0 >= Global_262145.f_15299)
	{
		return Global_262145.f_15320;
	}
	else if (iParam0 >= Global_262145.f_15298)
	{
		return Global_262145.f_15319;
	}
	else if (iParam0 >= Global_262145.f_15297)
	{
		return Global_262145.f_15318;
	}
	return Global_262145.f_15317;
}

int func_283(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_290(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_289(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_288(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_284(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_284(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_288(unk_0xBAC643F143880136(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_284(int iParam0)
{
	int iVar0;
	
	if (func_287(iParam0))
	{
		iVar0 = func_285(func_286(iParam0));
		return func_118(iVar0, -1, 0);
	}
	return 0;
}

int func_285(int iParam0)
{
	if (iParam0 == 0)
	{
		return 3646;
	}
	else if (iParam0 == 1)
	{
		return 3647;
	}
	else if (iParam0 == 2)
	{
		return 3648;
	}
	else if (iParam0 == 3)
	{
		return 3649;
	}
	else if (iParam0 == 4)
	{
		return 3650;
	}
	return 3646;
}

int func_286(int iParam0)
{
	int iVar0;
	
	if (func_287(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_273.f_102[iVar0 /*3*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_287(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_288(int iParam0)
{
	if (iParam0 == 1)
	{
		return Global_262145.f_15516;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_15514;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_15518;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_15512;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_15510;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_15520;
	}
	return 0;
}

int func_289(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_287(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_1676590[iVar0] == iParam1 && Global_1676597[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_290(int iParam0)
{
	int iVar0;
	
	if (func_287(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_273.f_102[iVar0 /*3*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_291()
{
	int iVar0;
	
	iVar0 = Global_2578767[func_20()];
	iVar0++;
	Global_2578767[func_20()] = iVar0;
	func_115(3665, iVar0, -1, 1);
}

void func_292()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2578764[func_20()];
	iVar1 = Global_2578773[func_20()];
	iVar0++;
	iVar1++;
	Global_2578764[func_20()] = iVar0;
	Global_2578773[func_20()] = iVar1;
	Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_273.f_124 = iVar1;
	func_115(3663, iVar0, -1, 1);
	func_115(3664, iVar1, -1, 1);
}

void func_293()
{
	if (func_135())
	{
		Global_2449755.f_3072.f_134 = 0;
		Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_449 = Global_2449755.f_3072.f_134;
	}
}

void func_294()
{
	if (func_135())
	{
		if (Global_2449755.f_3072.f_134 < 10)
		{
			Global_2449755.f_3072.f_134++;
			Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_449 = Global_2449755.f_3072.f_134;
		}
	}
}

void func_295()
{
	if (func_135())
	{
		if (Global_2449755.f_3072.f_134 > 0)
		{
			Global_2449755.f_3072.f_134 = (Global_2449755.f_3072.f_134 - 1);
			Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_449 = Global_2449755.f_3072.f_134;
		}
	}
}

int func_296(int iParam0)
{
	return Global_1628955[iParam0 /*614*/].f_11.f_28;
}

int func_297(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 168:
		case 178:
		case 188:
			return 1;
		
		case 225:
		case 226:
		case 229:
		case 230:
		case 233:
		case 237:
		case 158:
			if (func_94(1) && !func_205(1))
			{
				if (func_298(func_11()))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_298(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_24, 26);
}

int func_299(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return Global_262145.f_18269;
	}
	switch (iParam0)
	{
		case 142:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_12506) * Global_262145.f_12511));
		
		case 157:
			return 0;
		
		case 159:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_12456) * Global_262145.f_12461));
		
		case 151:
			return 0;
		
		case 148:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_12483) * Global_262145.f_12487));
		
		case 164:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_12496) * Global_262145.f_12500));
		
		case 152:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_12518) * Global_262145.f_12523));
		
		case 153:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_12680) * Global_262145.f_12681));
		
		case 154:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_12686) * Global_262145.f_12687));
		
		case 155:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_12684) * Global_262145.f_12685));
		
		case 160:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_12678) * Global_262145.f_12679));
		
		case 162:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_12682) * Global_262145.f_12683));
		
		case 163:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_12676) * Global_262145.f_12677));
		
		case 170:
			return 0;
		
		case 171:
			return Global_262145.f_15039;
		
		case 172:
			return Global_262145.f_15055;
		
		case 173:
			return Global_262145.f_14998;
		
		case 166:
			return 0;
		
		case 179:
			return Global_262145.f_18277;
		
		case 180:
			return Global_262145.f_18152;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_18160;
		
		case 185:
			return Global_262145.f_18169;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_18365;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_18382;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_18229;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_18413;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_18291;
		
		case 205:
			return Global_262145.f_18400;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_18258;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_18395;
		
		case 211:
			return Global_262145.f_18359;
		
		case 214:
			return Global_262145.f_18953;
		
		case 215:
			return Global_262145.f_18963;
		
		case 216:
			return Global_262145.f_18973;
		
		case 217:
			return Global_262145.f_18982;
		
		case 218:
			return Global_262145.f_18991;
		
		case 219:
			return Global_262145.f_19007;
		
		case 241:
			return Global_262145.f_24078;
		
		case 242:
			return Global_262145.f_24074;
		
		case 248:
			return Global_262145.f_24077;
		
		case 244:
			return Global_262145.f_24075;
		
		case 239:
			return Global_262145.f_24079;
		
		case 240:
			return Global_262145.f_24080;
		
		case 243:
			return Global_262145.f_26235;
		
		default:
	}
	return 0;
}

int func_300(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return Global_262145.f_18270;
	}
	switch (iParam0)
	{
		case 142:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_12507) * Global_262145.f_12512));
		
		case 157:
			return 0;
		
		case 159:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_12457) * Global_262145.f_12462));
		
		case 151:
			return 0;
		
		case 148:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_12484) * Global_262145.f_12488));
		
		case 164:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_12497) * Global_262145.f_12501));
		
		case 152:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_12519) * Global_262145.f_12524));
		
		case 153:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_12556) * Global_262145.f_12559));
		
		case 154:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_12602) * Global_262145.f_12605));
		
		case 155:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_12592) * Global_262145.f_12595));
		
		case 160:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_12547) * Global_262145.f_12550));
		
		case 162:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_12567) * Global_262145.f_12572));
		
		case 163:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_12532) * Global_262145.f_12535));
		
		case 170:
			return Global_262145.f_14981;
		
		case 171:
			return Global_262145.f_15040;
		
		case 172:
			return Global_262145.f_15056;
		
		case 173:
			return Global_262145.f_14999;
		
		case 166:
			return 0;
		
		case 167:
			return Global_262145.f_17078;
		
		case 168:
			return Global_262145.f_17077;
		
		case 179:
			return Global_262145.f_18278;
		
		case 180:
			return Global_262145.f_18153;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_18161;
		
		case 185:
			return Global_262145.f_18170;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_18366;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_18383;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_18230;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_18414;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_18292;
		
		case 205:
			return Global_262145.f_18401;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_18259;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_18396;
		
		case 211:
			return Global_262145.f_18360;
		
		case 214:
			return Global_262145.f_18954;
		
		case 215:
			return Global_262145.f_18964;
		
		case 216:
			return Global_262145.f_18974;
		
		case 217:
			return Global_262145.f_18983;
		
		case 218:
			return Global_262145.f_18992;
		
		case 219:
			return Global_262145.f_19008;
		
		case 178:
			if (func_135())
			{
				return Global_262145.f_18831;
			}
			else if (bParam1)
			{
				return Global_262145.f_18832;
			}
			break;
		
		case 188:
			if (func_135())
			{
				return Global_262145.f_18915;
			}
			else if (bParam1)
			{
				return Global_262145.f_18916;
			}
			break;
		
		case 225:
			if (func_135() && !func_121())
			{
				if (func_298(unk_0x7C7787D2D7139A85()))
				{
					return Global_262145.f_21036;
				}
				else
				{
					return Global_262145.f_21037;
				}
			}
			else if (func_121())
			{
				return Global_262145.f_21038;
			}
			break;
		
		case 226:
			if (func_135() && !func_121())
			{
				if (func_298(unk_0x7C7787D2D7139A85()))
				{
					return Global_262145.f_21016;
				}
				else
				{
					return Global_262145.f_21017;
				}
			}
			else if (func_121())
			{
				return Global_262145.f_21018;
			}
			break;
		
		case 227:
			if (func_135() && !func_121())
			{
				if (func_298(unk_0x7C7787D2D7139A85()))
				{
					return Global_262145.f_21028;
				}
				else
				{
					return Global_262145.f_21029;
				}
			}
			else if (func_121())
			{
				return Global_262145.f_21030;
			}
			break;
		
		case 229:
			if (func_135() && !func_121())
			{
				if (func_298(unk_0x7C7787D2D7139A85()))
				{
					return Global_262145.f_22192;
				}
				else
				{
					return Global_262145.f_22193;
				}
			}
			else if (func_121())
			{
				return Global_262145.f_22194;
			}
			break;
		
		case 230:
			if (func_135() && !func_121())
			{
				if (func_298(unk_0x7C7787D2D7139A85()))
				{
					return Global_262145.f_22288;
				}
				else
				{
					return Global_262145.f_22289;
				}
			}
			else if (func_121())
			{
				return Global_262145.f_22290;
			}
			break;
		
		case 233:
			if (func_135() && !func_121())
			{
				if (func_298(unk_0x7C7787D2D7139A85()))
				{
					return Global_262145.f_22764;
				}
				else
				{
					return Global_262145.f_22765;
				}
			}
			else if (func_121())
			{
				return Global_262145.f_22763;
			}
			break;
		
		case 241:
			return Global_262145.f_24085;
		
		case 242:
			return Global_262145.f_24081;
		
		case 244:
			return Global_262145.f_24082;
		
		case 248:
			return Global_262145.f_24084;
		
		case 239:
			return Global_262145.f_24086;
		
		case 240:
			return Global_262145.f_24087;
		
		case 237:
			if (func_135() && !func_121())
			{
				if (func_298(unk_0x7C7787D2D7139A85()))
				{
					return Global_262145.f_23927;
				}
				else
				{
					return Global_262145.f_23928;
				}
			}
			else if (func_121())
			{
				return Global_262145.f_23929;
			}
			break;
		
		case 238:
			if (func_135() && !func_121())
			{
				if (func_298(unk_0x7C7787D2D7139A85()))
				{
					return Global_262145.f_24038;
				}
				else
				{
					return Global_262145.f_24039;
				}
			}
			else if (func_121())
			{
				return Global_262145.f_24040;
			}
			break;
		
		case 249:
			if (func_135() && !func_121())
			{
				if (func_298(unk_0x7C7787D2D7139A85()))
				{
					return Global_262145.f_24054;
				}
				else
				{
					return Global_262145.f_24055;
				}
			}
			else if (func_121())
			{
				return Global_262145.f_24056;
			}
			break;
		
		case 243:
			if (func_135() && !func_121())
			{
				if (func_298(unk_0x7C7787D2D7139A85()))
				{
					return Global_262145.f_26238;
				}
				else
				{
					return Global_262145.f_26239;
				}
			}
			else if (func_121())
			{
				return Global_262145.f_26238;
			}
			break;
		
		case 158:
			if (func_135() && !func_121())
			{
				if (func_298(unk_0x7C7787D2D7139A85()))
				{
					return 1500;
				}
				else
				{
					return 1000;
				}
			}
			else if (func_121())
			{
				return 1500;
			}
			break;
	}
	return 0;
}

void func_301(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_302(iParam0))
	{
		if (!func_135())
		{
			*uParam1 = 1f;
			*uParam2 = Global_262145.f_12400;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	if (func_27(unk_0x7C7787D2D7139A85(), 1))
	{
		if (func_91(iParam0))
		{
			*uParam1 = (Global_262145.f_18129 / 100f);
			*uParam2 = (Global_262145.f_18129 / 100f);
		}
		else if (iParam0 == 242)
		{
			*uParam1 = Global_262145.f_24088;
			*uParam2 = Global_262145.f_24088;
		}
		else if (iParam0 == 244)
		{
			*uParam1 = Global_262145.f_24089;
			*uParam2 = Global_262145.f_24089;
		}
		else if (iParam0 == 248)
		{
			*uParam1 = Global_262145.f_24091;
			*uParam2 = Global_262145.f_24091;
		}
		else if (iParam0 == 241)
		{
			*uParam1 = Global_262145.f_24092;
			*uParam2 = Global_262145.f_24092;
		}
		else if (iParam0 == 239)
		{
			*uParam1 = Global_262145.f_24093;
			*uParam2 = Global_262145.f_24093;
		}
		else if (iParam0 == 240)
		{
			*uParam1 = Global_262145.f_24094;
			*uParam2 = Global_262145.f_24094;
		}
		else
		{
			*uParam1 = Global_262145.f_12397;
			*uParam2 = Global_262145.f_12396;
		}
	}
	else if (func_91(iParam0))
	{
		*uParam1 = (Global_262145.f_18130 / 100f);
		*uParam2 = (Global_262145.f_18130 / 100f);
	}
	else if (iParam0 == 242)
	{
		*uParam1 = Global_262145.f_24095;
		*uParam2 = Global_262145.f_24095;
	}
	else if (iParam0 == 244)
	{
		*uParam1 = Global_262145.f_24096;
		*uParam2 = Global_262145.f_24096;
	}
	else if (iParam0 == 248)
	{
		*uParam1 = Global_262145.f_24098;
		*uParam2 = Global_262145.f_24098;
	}
	else if (iParam0 == 241)
	{
		*uParam1 = Global_262145.f_24099;
		*uParam2 = Global_262145.f_24099;
	}
	else if (iParam0 == 239)
	{
		*uParam1 = Global_262145.f_24100;
		*uParam2 = Global_262145.f_24100;
	}
	else if (iParam0 == 240)
	{
		*uParam1 = Global_262145.f_24101;
		*uParam2 = Global_262145.f_24101;
	}
	else
	{
		*uParam1 = Global_262145.f_12399;
		*uParam2 = Global_262145.f_12398;
	}
	iVar0 = func_59();
	if (iVar0 != func_10())
	{
		if (func_47(unk_0x7C7787D2D7139A85(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_302(int iParam0)
{
	switch (iParam0)
	{
		case 160:
		case 162:
		case 153:
		case 154:
		case 155:
		case 163:
		case 171:
		case 172:
			return 1;
		
		default:
	}
	return 0;
}

int func_303()
{
	if ((func_35(unk_0x7C7787D2D7139A85(), 21) || func_35(unk_0x7C7787D2D7139A85(), 22)) || func_308())
	{
		return 1;
	}
	if (func_305())
	{
		func_304(22);
		return 1;
	}
	return 0;
}

void func_304(int iParam0)
{
	unk_0xA1E7A40E1F56E511(&(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_4), iParam0);
}

int func_305()
{
	if (func_32(unk_0x7C7787D2D7139A85(), 0))
	{
		if (((func_25() && !func_307()) || func_21(unk_0x7C7787D2D7139A85(), 21)) || func_21(unk_0x7C7787D2D7139A85(), 25))
		{
			return 1;
		}
		else
		{
			func_306(27);
		}
	}
	return 0;
}

void func_306(int iParam0)
{
	unk_0x3B76114EC84D5812(&(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_4), iParam0);
}

bool func_307()
{
	return Global_1312417.f_1;
}

bool func_308()
{
	return func_258(356, -1);
}

int func_309()
{
	return 0;
}

void func_310()
{
	char* sVar0;
	char* sVar1;
	struct<14> Var2;
	
	if (func_352())
	{
		return;
	}
	if (func_351())
	{
		func_344();
	}
	if (func_343())
	{
		func_342();
	}
	sVar0 = "GB_WORK_OVER";
	sVar1 = "GB_WORK_OVER";
	if (func_6(unk_0x7C7787D2D7139A85(), 1))
	{
		sVar0 = "BK_RUN_OVER";
	}
	if ((!unk_0xA2BC31158C8CEFD2(Local_114.f_1, 2) && !unk_0xA2BC31158C8CEFD2(Local_114.f_1, 4)) && !unk_0xA2BC31158C8CEFD2(Local_114.f_1, 3))
	{
		if (unk_0xA2BC31158C8CEFD2(Local_114.f_1, 7))
		{
			sVar1 = "GBTER_B_SSH";
			if (Local_114.f_10)
			{
				sVar1 = "GBTER_B_SSH_A";
			}
			if (Local_114.f_10)
			{
				func_334(101, sVar0, sVar1, func_336(), func_335(unk_0x7C7787D2D7139A85()), func_36(), func_10(), func_10(), 0, -1, -1, -1, 2, -1, 2);
			}
			else
			{
				func_333(87, func_36(), -1, sVar1, sVar0, 1, -1, 2, 0);
			}
		}
		else if (func_332() != unk_0x7C7787D2D7139A85())
		{
			sVar1 = "GBTER_BIG_COMS";
			if (func_6(unk_0x7C7787D2D7139A85(), 1))
			{
				sVar1 = "GBTER_B_SSO";
				if (Local_114.f_10)
				{
					sVar1 = "GBTER_B_SSO_A";
				}
			}
			if (Local_114.f_10)
			{
				func_334(101, sVar0, sVar1, func_336(), func_335(unk_0x7C7787D2D7139A85()), func_332(), func_36(), func_10(), 0, -1, -1, -1, 2, -1, 2);
			}
			else
			{
				func_331(91, func_332(), func_36(), -1, sVar1, sVar0, 1, -1, 2, 0, 0, 0);
			}
		}
		else
		{
			sVar1 = "GBTER_BIG_WINS";
			if (func_6(unk_0x7C7787D2D7139A85(), 1))
			{
				sVar1 = "GBTER_B_SSW";
				if (Local_114.f_10)
				{
					sVar1 = "GBTER_B_SSW_A";
				}
			}
			if (Local_114.f_10)
			{
				func_334(101, "GB_WINNER", sVar1, func_336(), func_335(unk_0x7C7787D2D7139A85()), func_36(), func_10(), func_10(), 0, -1, -1, -1, 2, -1, 2);
			}
			else
			{
				func_333(87, func_36(), -1, sVar1, "GB_WINNER", 1, -1, 2, 0);
			}
		}
	}
	else if (unk_0xA2BC31158C8CEFD2(Local_114.f_1, 3))
	{
	}
	else
	{
		sVar1 = "GBTER_BIG_FLEE";
		if (func_6(unk_0x7C7787D2D7139A85(), 1))
		{
			sVar1 = "GBTER_B_BFLEE";
		}
		func_312(88, sVar0, sVar1, 1, -1, 2, 1, 0);
		if (unk_0xA2BC31158C8CEFD2(Local_114.f_1, 4) || func_30(func_36(), 1, 0))
		{
			if (unk_0x7C7787D2D7139A85() == func_59())
			{
				Var2.f_10 = func_59();
				Var2.f_2 = 509431680;
				func_311(Var2, func_45(func_36()));
			}
		}
	}
}

void func_311(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 564131320;
	Param0.f_1 = unk_0x7C7787D2D7139A85();
	if (!iParam14 == 0)
	{
		unk_0x990C4E4B3665A4D6(1, &Param0, 14, iParam14);
	}
}

int func_312(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_330(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_328(&(Var0.f_69), iParam7);
	}
	return func_313(&Var0);
}

int func_313(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2437549.f_3030)
		{
			return 0;
		}
	}
	func_327(uParam0, uParam0->f_17);
	func_324(uParam0);
	if (func_83())
	{
		func_324(uParam0);
	}
	if (func_323(uParam0->f_1))
	{
		func_316();
		if (Global_2437549.f_2708[0 /*80*/].f_2 == 0)
		{
			Global_2437549.f_2708[0 /*80*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2437549.f_2708[0 /*80*/].f_1 == 13 || Global_2437549.f_2708[0 /*80*/].f_1 == 53) || Global_2437549.f_2708[0 /*80*/].f_1 == 54) || Global_2437549.f_2708[0 /*80*/].f_1 == 58)
		{
			Global_2437549.f_2708[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2437549.f_2708[iVar0 + 1 /*80*/] = { Global_2437549.f_2708[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2437549.f_2708[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2437549.f_2708[iVar0 /*80*/].f_2 == 0)
		{
			Global_2437549.f_2708[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_316();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_328(&(Global_2437549.f_2708[iVar0 /*80*/].f_69), 2);
				Global_2437549.f_2708[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_315(uParam0->f_69, 128))
			{
				if (func_314(Global_2437549.f_2708[iVar0 /*80*/].f_1))
				{
					Global_2437549.f_2708[iVar0 /*80*/].f_2 = 5;
					func_328(&(Global_2437549.f_2708[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_314(int iParam0)
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return 1;
		
		default:
	}
	return 0;
}

bool func_315(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_316()
{
	bool bVar0;
	
	if (Global_2437549.f_3031)
	{
		return;
	}
	if (!Global_76845)
	{
		Global_76845 = 1;
		bVar0 = true;
	}
	func_317();
	if (bVar0)
	{
		Global_76845 = 0;
	}
}

void func_317()
{
	Global_2437549.f_3032 = 0;
	Global_2437549.f_3032.f_578 = 0;
	func_321(&(Global_2437549.f_3032.f_1));
	Global_2437549.f_3032.f_1.f_1 = 0;
	func_318(&(Global_2437549.f_3032.f_1));
}

void func_318(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		unk_0x749CA887CB0AFEC9(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (unk_0xE434AB6E3DE89861())
		{
			unk_0xF1BC72CEC2746995(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0x282C78036676E0C2(0);
			unk_0xAC7C2DE2DDC7AF03();
		}
		unk_0x749CA887CB0AFEC9(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		unk_0x81394B4515AF31C3(0);
		uParam0->f_564 = 0;
	}
	if (!Global_76845)
	{
		if (!unk_0x87407D4AFED33A53(unk_0x7A8732CFB5113E77()))
		{
			if (!Global_76846)
			{
				if (unk_0x260395BA7F0C83CB() && !func_320(0))
				{
					unk_0xCF33E56642B34516(800);
				}
			}
		}
	}
	func_319(0);
}

void func_319(int iParam0)
{
	Global_76837 = iParam0;
	Global_76838 = iParam0;
}

bool func_320(bool bParam0)
{
	if (!bParam0 && unk_0x222F76006659B0EB(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xA2BC31158C8CEFD2(Global_76825, 0);
}

void func_321(var uParam0)
{
	func_322(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_322(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_568 = 0f;
	uParam0->f_558 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_559 = 0f;
	uParam0->f_560 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_563 = 0;
	uParam0->f_572 = 0;
	uParam0->f_564 = 0;
	uParam0->f_565 = 0;
	uParam0->f_566 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_574 = 0;
	uParam0->f_575 = 0;
	uParam0->f_573 = 1f;
}

int func_323(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
	{
		return 1;
	}
	return 0;
}

void func_324(var uParam0)
{
	if (func_326(uParam0->f_1))
	{
		uParam0->f_72 = func_325();
	}
}

int func_325()
{
	return 21;
}

int func_326(int iParam0)
{
	switch (iParam0)
	{
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
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
		case 81:
		case 82:
		case 83:
			return 1;
		
		default:
	}
	return 0;
}

void func_327(var uParam0, int iParam1)
{
	if (func_326(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_10() || !func_9(iParam1, 0, 1))
	{
		return;
	}
	if (func_314(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_62(iParam1, -2, 0, 0, 0);
		}
	}
}

void func_328(var uParam0, int iParam1)
{
	func_329(uParam0, iParam1);
}

void func_329(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_330(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_10();
	uParam1->f_18 = func_10();
	uParam1->f_19 = func_10();
	uParam1->f_20 = func_10();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_21), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_16 = 1;
	uParam1->f_3 = iParam2;
	uParam1->f_71 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 1;
	uParam1->f_76 = 0;
	uParam1->f_77 = 0;
	uParam1->f_73 = 0;
	StringCopy(&(uParam1->f_25), "", 64);
	StringCopy(&(uParam1->f_41), "", 64);
}

int func_331(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_330(iParam0, &Var0, iParam3, sParam4, sParam5);
	Var0.f_17 = iParam1;
	Var0.f_18 = iParam2;
	Var0.f_71 = iParam6;
	Var0.f_6 = iParam7;
	Var0.f_72 = iParam8;
	StringCopy(&(Var0.f_25), sParam9, 64);
	StringCopy(&(Var0.f_41), sParam10, 64);
	StringCopy(&(Var0.f_57), sParam11, 16);
	return func_313(&Var0);
}

int func_332()
{
	return Local_114.f_3;
}

int func_333(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_330(iParam0, &Var0, iParam2, sParam3, sParam4);
	Var0.f_17 = iParam1;
	Var0.f_71 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_72 = iParam7;
	if (iParam8 != 0)
	{
		func_328(&(Var0.f_69), iParam8);
	}
	return func_313(&Var0);
}

int func_334(int iParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_330(iParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = iParam10;
	Var0.f_5 = iParam11;
	Var0.f_17 = iParam5;
	Var0.f_18 = iParam6;
	Var0.f_19 = iParam7;
	StringCopy(&(Var0.f_25), sParam3, 64);
	StringCopy(&(Var0.f_57), sParam8, 16);
	Var0.f_73 = uParam4;
	Var0.f_71 = uParam4;
	Var0.f_6 = iParam13;
	Var0.f_72 = iParam12;
	if (iParam14 != 2)
	{
		Var0.f_71 = iParam14;
	}
	func_328(&(Var0.f_69), 4);
	return func_313(&Var0);
}

int func_335(int iParam0)
{
	int iVar0;
	
	iVar0 = func_80(iParam0);
	if (iVar0 != -1)
	{
		return func_78(iVar0);
	}
	return 1;
}

char* func_336()
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_26(unk_0x7C7787D2D7139A85());
	if (iVar0 != func_10())
	{
		if (iVar0 != unk_0x7C7787D2D7139A85())
		{
			if (((func_35(iVar0, 28) || func_35(unk_0x7C7787D2D7139A85(), 28)) || func_341(iVar0)) && !func_340(iVar0))
			{
				return func_338(iVar0, 0);
			}
			if (!unk_0x77BA37DB22C66465() && !unk_0x690CD141AD7C9F01(0, -1, 1))
			{
				return func_338(iVar0, 0);
			}
		}
		sVar1 = func_337(&(Global_1628955[iVar0 /*614*/].f_11.f_104));
		if (unk_0x9591DE0F00127F2A(sVar1))
		{
			return func_338(iVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

var func_337(var uParam0)
{
	return uParam0;
}

var func_338(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_6(iParam0, 1))
		{
			return func_339();
		}
	}
	return unk_0xD54FB72F71EFE6C4("GB_REST_ACC");
}

var func_339()
{
	return unk_0xD54FB72F71EFE6C4("GB_REST_ACCM");
}

int func_340(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_174(iParam0) };
	if (unk_0x77BA37DB22C66465())
	{
		if (unk_0x7B3E18C7DAC336C3(0))
		{
			if (unk_0xCA3736B46FE270BB(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_341(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_10())
	{
		Var0 = { func_174(iParam0) };
		if (unk_0x39FDED461BF385C3() || unk_0xE434AB6E3DE89861())
		{
			if (unk_0x7B3E18C7DAC336C3(0))
			{
				return 0;
			}
		}
		else if (unk_0x77BA37DB22C66465())
		{
			if (unk_0x7B3E18C7DAC336C3(0))
			{
				if (unk_0xCA3736B46FE270BB(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

void func_342()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2437549.f_2708[iVar0 /*80*/].f_2 != 0)
		{
			Global_2437549.f_2708[iVar0 /*80*/].f_2 = 5;
			func_328(&(Global_2437549.f_2708[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

bool func_343()
{
	return Global_2437549.f_2708[0 /*80*/].f_1 != 0;
}

void func_344()
{
	if (!func_350())
	{
		return;
	}
	if (!unk_0xA8C462EF7D9DC564(unk_0x0037AFCBDC61F351()) == Global_1312585.f_9)
	{
		return;
	}
	func_345();
}

void func_345()
{
	func_347();
	func_346(0);
}

void func_346(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x393E9918BC37548A();
	Global_1312585 = 20;
	StringCopy(&(Global_1312585.f_1), "", 32);
	Global_1312585.f_9 = 0;
	if (bVar0)
	{
		Global_1312585.f_10 = unk_0x169A8AC9F93C2727();
		Global_1312585.f_11 = unk_0x169A8AC9F93C2727();
	}
	StringCopy(&(Global_1312585.f_12), "", 16);
	StringCopy(&(Global_1312585.f_16), "", 64);
	StringCopy(&(Global_1312585.f_32), "", 64);
	Global_1312585.f_52 = 0;
	Global_1312585.f_53 = 0;
	Global_1312585.f_54 = 0;
	Global_1312585.f_55 = -1;
	Global_1312585.f_56 = 0;
	Global_1312585.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_347()
{
	if (!func_349())
	{
	}
	if (func_350())
	{
		unk_0x8C952E99D90780F7(&(Global_1312585.f_12));
		func_348();
		unk_0xCC56AD222DA9A8C1();
	}
}

void func_348()
{
	switch (Global_1312585)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x6A8B3CC08A759F44(Global_1312585.f_52);
			return;
		
		case 2:
			unk_0x6A8B3CC08A759F44(Global_1312585.f_52);
			unk_0x6A8B3CC08A759F44(Global_1312585.f_53);
			return;
		
		case 3:
			unk_0x0AC9F8E1AFCEC860(&(Global_1312585.f_16));
			return;
		
		case 4:
			unk_0x0AC9F8E1AFCEC860(&(Global_1312585.f_16));
			unk_0x0AC9F8E1AFCEC860(&(Global_1312585.f_32));
			return;
		
		case 5:
			unk_0xA89C789CC9FEF523(&(Global_1312585.f_16));
			return;
		
		case 6:
			unk_0xEB6F6B8EBD6B6648(Global_1312585.f_56);
			unk_0xA89C789CC9FEF523(&(Global_1312585.f_16));
			return;
		
		case 7:
			unk_0x0AC9F8E1AFCEC860(&(Global_1312585.f_16));
			return;
		
		case 8:
			unk_0xEB6F6B8EBD6B6648(Global_1312585.f_56);
			unk_0x0AC9F8E1AFCEC860(&(Global_1312585.f_16));
			return;
		
		case 9:
			unk_0x2F3DFF2E75DFEA9B(&(Global_1312585.f_16));
			return;
		
		case 10:
			unk_0xA89C789CC9FEF523(&(Global_1312585.f_16));
			unk_0xA89C789CC9FEF523(&(Global_1312585.f_32));
			return;
		
		case 12:
			unk_0xA89C789CC9FEF523(&(Global_1312585.f_16));
			unk_0x0AC9F8E1AFCEC860(&(Global_1312585.f_32));
			return;
		
		case 13:
			unk_0xEB6F6B8EBD6B6648(Global_1312585.f_56);
			unk_0x0AC9F8E1AFCEC860(&(Global_1312585.f_16));
			unk_0xEB6F6B8EBD6B6648(Global_1312585.f_57);
			unk_0x0AC9F8E1AFCEC860(&(Global_1312585.f_32));
			return;
		
		case 11:
			unk_0x2F3DFF2E75DFEA9B(&(Global_1312585.f_16));
			return;
		
		case 14:
			unk_0xEB6F6B8EBD6B6648(Global_1312585.f_56);
			unk_0xA89C789CC9FEF523(&(Global_1312585.f_16));
			unk_0xEB6F6B8EBD6B6648(Global_1312585.f_56);
			unk_0x0AC9F8E1AFCEC860(&(Global_1312585.f_32));
			return;
		
		case 15:
			unk_0xEB6F6B8EBD6B6648(Global_1312585.f_56);
			unk_0xA89C789CC9FEF523(&(Global_1312585.f_16));
			unk_0xEB6F6B8EBD6B6648(Global_1312585.f_57);
			unk_0x0AC9F8E1AFCEC860(&(Global_1312585.f_32));
			return;
		
		case 17:
			unk_0xA89C789CC9FEF523(&(Global_1312585.f_16));
			unk_0xA89C789CC9FEF523(&(Global_1312585.f_32));
			unk_0xEB6F6B8EBD6B6648(Global_1312585.f_56);
			unk_0x0AC9F8E1AFCEC860(&(Global_1312585.f_48));
			return;
		
		case 16:
			unk_0xEB6F6B8EBD6B6648(Global_1312585.f_56);
			unk_0xA89C789CC9FEF523(&(Global_1312585.f_16));
			return;
		
		case 19:
			unk_0xEB6F6B8EBD6B6648(Global_1312585.f_56);
			unk_0x0AC9F8E1AFCEC860(&(Global_1312585.f_16));
			return;
		
		case 18:
			unk_0xA89C789CC9FEF523(&(Global_1312585.f_16));
			unk_0xEB6F6B8EBD6B6648(Global_1312585.f_56);
			unk_0x0AC9F8E1AFCEC860(&(Global_1312585.f_48));
			unk_0xA89C789CC9FEF523(&(Global_1312585.f_32));
			return;
		
		default:
	}
}

int func_349()
{
	if (!func_350())
	{
		return 0;
	}
	unk_0xC1A9801A23F32F8F(&(Global_1312585.f_12));
	func_348();
	return unk_0xCDD0AB887E3F6532();
}

int func_350()
{
	if (Global_1312585 == 20)
	{
		return 0;
	}
	return 1;
}

bool func_351()
{
	return func_350();
}

int func_352()
{
	if (!func_353(1, 1, 1, 0) || func_628())
	{
		return 1;
	}
	return 0;
}

int func_353(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_46(unk_0x7C7787D2D7139A85(), 29))
	{
		return 0;
	}
	if (func_21(unk_0x7C7787D2D7139A85(), 21))
	{
		return 0;
	}
	if (func_21(unk_0x7C7787D2D7139A85(), 25))
	{
		return 0;
	}
	if (bParam2)
	{
		if (unk_0xEDC68E498B715C56())
		{
			return 0;
		}
	}
	if (!func_400(unk_0x7C7787D2D7139A85()))
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xED4D72D338501085())
		{
			return 0;
		}
	}
	if (func_398(unk_0x7C7787D2D7139A85()))
	{
		return 0;
	}
	if (func_397())
	{
		return 0;
	}
	if (func_396())
	{
		return 0;
	}
	if (func_395())
	{
		return 0;
	}
	if (func_394())
	{
		return 0;
	}
	if (unk_0xA51CBC95AC3A4B14())
	{
		return 0;
	}
	if (func_392(unk_0x7C7787D2D7139A85()))
	{
		return 0;
	}
	if (!func_390())
	{
		return 0;
	}
	if (func_21(unk_0x7C7787D2D7139A85(), 0) || func_21(unk_0x7C7787D2D7139A85(), 3))
	{
		return 0;
	}
	if ((func_21(unk_0x7C7787D2D7139A85(), 12) || func_21(unk_0x7C7787D2D7139A85(), 14)) || func_21(unk_0x7C7787D2D7139A85(), 13))
	{
		return 0;
	}
	if (func_383(unk_0x7C7787D2D7139A85(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
	{
		if (!func_362())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (func_361())
		{
			return 0;
		}
	}
	if (Global_1662552)
	{
		return 0;
	}
	if (func_360(unk_0x7C7787D2D7139A85()))
	{
		return 0;
	}
	if (func_359())
	{
		return 0;
	}
	if (func_358(unk_0x7C7787D2D7139A85()))
	{
		return 0;
	}
	if ((func_357(unk_0x7C7787D2D7139A85()) && func_55(unk_0x7C7787D2D7139A85()) == 123) && !bParam3)
	{
		return 0;
	}
	if (func_356())
	{
		return 0;
	}
	if (unk_0xA2BC31158C8CEFD2(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_273.f_24, 4))
	{
		return 0;
	}
	if (func_355(unk_0x7C7787D2D7139A85()))
	{
		return 0;
	}
	if (func_354(unk_0x7C7787D2D7139A85()))
	{
		return 0;
	}
	return 1;
}

int func_354(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (!unk_0x393E9918BC37548A())
	{
		return 0;
	}
	if (iParam0 == unk_0x7C7787D2D7139A85())
	{
		return Global_2508348;
	}
	else
	{
		uVar0 = unk_0x23625FE58BACEBFD(iParam0);
		if (unk_0xD4B321D9096B01FC(uVar0))
		{
			iVar1 = unk_0x7F375072508F738F(iVar0);
			if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_355(int iParam0)
{
	if (Global_2424073[iParam0 /*421*/].f_261.f_4 != 0 || Global_2424073[iParam0 /*421*/].f_261.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_356()
{
	return Global_1676879.f_4090 != -1;
}

int func_357(int iParam0)
{
	if (iParam0 != func_10() && func_9(iParam0, 1, 1))
	{
		return unk_0xA2BC31158C8CEFD2(Global_2424073[iParam0 /*421*/].f_309, 3);
	}
	return 0;
}

int func_358(int iParam0)
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

int func_359()
{
	if (Global_4254407.f_904 > -1)
	{
		return 1;
	}
	return 0;
}

int func_360(int iParam0)
{
	if (!func_9(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1590446[iParam0 /*871*/].f_35;
}

bool func_361()
{
	return Global_98721.f_346 > 0;
}

int func_362()
{
	int iVar0;
	
	iVar0 = func_31(unk_0x7C7787D2D7139A85());
	if (((func_382(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_273.f_26) || func_381(unk_0x7C7787D2D7139A85())) || func_380(unk_0x7C7787D2D7139A85())) || func_375(unk_0x7C7787D2D7139A85()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_373(unk_0x7C7787D2D7139A85()))
	{
		if (func_120(iVar0) || func_372(iVar0))
		{
			return 1;
		}
	}
	if (func_371(unk_0x7C7787D2D7139A85()))
	{
		if (func_372(iVar0))
		{
			return 1;
		}
	}
	if (func_370(unk_0x7C7787D2D7139A85()))
	{
		if (func_108(iVar0))
		{
			return 1;
		}
	}
	if (func_369(unk_0x7C7787D2D7139A85()))
	{
		if (func_107(iVar0))
		{
			return 1;
		}
	}
	if (func_368(unk_0x7C7787D2D7139A85()))
	{
		if (func_106(iVar0))
		{
			return 1;
		}
	}
	if (func_367(unk_0x7C7787D2D7139A85()))
	{
		if (func_366(iVar0))
		{
			return 1;
		}
	}
	if (func_365(unk_0x7C7787D2D7139A85(), 0))
	{
		if (func_364(iVar0))
		{
			if (func_57(unk_0x7C7787D2D7139A85()))
			{
				return 1;
			}
		}
	}
	if (func_363(unk_0x7C7787D2D7139A85()))
	{
		if (func_98(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_363(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_54(Global_2424073[iParam0 /*421*/].f_309.f_5) == 14;
			}
		}
	}
	return 0;
}

int func_364(int iParam0)
{
	switch (iParam0)
	{
		case 241:
		case 248:
		case 242:
		case 244:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return 0;
}

int func_365(int iParam0, bool bParam1)
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
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1 && Global_2424073[iParam0 /*421*/].f_309.f_8 != func_10())
			{
				return func_54(Global_2424073[iParam0 /*421*/].f_309.f_5) == 12;
			}
		}
	}
	return 0;
}

int func_366(int iParam0)
{
	switch (iParam0)
	{
		case 237:
		case 238:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_367(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_54(Global_2424073[iParam0 /*421*/].f_309.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_368(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_54(Global_2424073[iParam0 /*421*/].f_309.f_5) == 9;
			}
		}
	}
	return 0;
}

int func_369(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_54(Global_2424073[iParam0 /*421*/].f_309.f_5) == 7;
			}
		}
	}
	return 0;
}

int func_370(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_54(Global_2424073[iParam0 /*421*/].f_309.f_5) == 4;
			}
		}
	}
	return 0;
}

int func_371(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_54(Global_2424073[iParam0 /*421*/].f_309.f_5) == 2;
			}
		}
	}
	return 0;
}

int func_372(int iParam0)
{
	switch (iParam0)
	{
		case 190:
		case 191:
		case 192:
			return 1;
		
		default:
	}
	return 0;
}

int func_373(int iParam0)
{
	if (func_374(Global_1590446[iParam0 /*871*/].f_273.f_26, -1))
	{
		return 1;
	}
	return 0;
}

int func_374(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

int func_375(int iParam0)
{
	if (func_376(Global_1590446[iParam0 /*871*/].f_273.f_26, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_376(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_377(unk_0x7C7787D2D7139A85(), 0);
	}
	if (bParam1)
	{
		if (func_377(unk_0x7C7787D2D7139A85(), 0))
		{
			return 0;
		}
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return 1;
				break;
			}
	}
	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 1;
			break;
	}
	return 0;
}

bool func_377(int iParam0, bool bParam1)
{
	if (Global_1590284 != func_10())
	{
		if (!func_379(Global_1590284))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0x7C7787D2D7139A85() != Global_1590284)
			{
				if (unk_0xA2BC31158C8CEFD2(Global_2424073[Global_1590284 /*421*/].f_195, 24) || func_378(Global_1590284))
				{
					return 1;
				}
			}
		}
	}
	return unk_0xA2BC31158C8CEFD2(Global_2424073[iParam0 /*421*/].f_195, 24);
}

int func_378(int iParam0)
{
	if (iParam0 != func_10())
	{
		return unk_0xA2BC31158C8CEFD2(Global_2424073[iParam0 /*421*/].f_195, 9);
	}
	return 0;
}

int func_379(int iParam0)
{
	if (iParam0 != func_10())
	{
		return unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_347, 2);
	}
	return 0;
}

int func_380(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_54(Global_2424073[iParam0 /*421*/].f_309.f_5) == 1;
			}
		}
	}
	return 0;
}

int func_381(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_54(Global_2424073[iParam0 /*421*/].f_309.f_5) == 0;
			}
		}
	}
	return 0;
}

int func_382(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_383(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16)
{
	if (Global_1590446[iParam0 /*871*/].f_273.f_26 > 0)
	{
		if (bParam1)
		{
			if (unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_24, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (!bParam2)
	{
		if (func_381(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_371(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_380(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_370(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_369(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_368(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_389(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_367(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_388(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_365(iParam0, 0))
		{
			return 1;
		}
	}
	if (!bParam12)
	{
		if (func_387(iParam0))
		{
			return 1;
		}
	}
	if (!bParam13)
	{
		if (func_363(iParam0))
		{
			return 1;
		}
	}
	if (!bParam14)
	{
		if (func_386(iParam0))
		{
			return 1;
		}
	}
	if (!bParam15)
	{
		if (func_385(iParam0))
		{
			return 1;
		}
	}
	if (!bParam16)
	{
		if (func_384(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_384(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_54(Global_2424073[iParam0 /*421*/].f_309.f_5) == 17;
			}
		}
	}
	return 0;
}

int func_385(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_54(Global_2424073[iParam0 /*421*/].f_309.f_5) == 16;
			}
		}
	}
	return 0;
}

int func_386(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_54(Global_2424073[iParam0 /*421*/].f_309.f_5) == 15;
			}
		}
	}
	return 0;
}

int func_387(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_54(Global_2424073[iParam0 /*421*/].f_309.f_5) == 13;
			}
		}
	}
	return 0;
}

int func_388(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_54(Global_2424073[iParam0 /*421*/].f_309.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_389(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1 && Global_2424073[iParam0 /*421*/].f_309.f_8 != func_10())
			{
				return func_54(Global_2424073[iParam0 /*421*/].f_309.f_5) == 8;
			}
		}
	}
	return 0;
}

int func_390()
{
	if (func_391() == 0)
	{
		return 1;
	}
	return 0;
}

int func_391()
{
	return Global_1312467.f_18;
}

bool func_392(int iParam0)
{
	return func_393(iParam0);
}

bool func_393(int iParam0)
{
	return unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_13.f_1, 0);
}

bool func_394()
{
	return Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_196 != 0;
}

bool func_395()
{
	return Global_1312873;
}

bool func_396()
{
	return Global_1590446[unk_0x7C7787D2D7139A85() /*871*/] == 5;
}

bool func_397()
{
	return unk_0xA2BC31158C8CEFD2(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_39.f_18, 0);
}

int func_398(int iParam0)
{
	if (func_399(iParam0, 1, 0))
	{
		if (Global_1590446[iParam0 /*871*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_399(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_392(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590446[iParam0 /*871*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_400(int iParam0)
{
	return unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_142, 22);
}

void func_401(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 != func_10())
	{
		if (unk_0xD56C8C2B75BF9665(iParam1))
		{
			if (iParam1 == unk_0x7C7787D2D7139A85())
			{
				iVar0 = 1;
			}
			else if (func_402(iParam1, unk_0x7C7787D2D7139A85()))
			{
				iVar0 = 1;
			}
		}
	}
	if (iParam0 || iVar0)
	{
		if (func_9(unk_0x7C7787D2D7139A85(), 1, 1))
		{
			unk_0x31EBACD75CD1F9EC(unk_0x7C7787D2D7139A85(), 0, 0);
			unk_0xF1E958D9BB4D1EF6(unk_0x7C7787D2D7139A85(), 0);
			Global_2531497.f_4898.f_381 = unk_0x71EC776E812C6A0A();
		}
	}
}

int func_402(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != func_10() && iParam1 != func_10())
	{
		iVar0 = func_26(iParam0);
		if (iVar0 != func_10())
		{
			return iVar0 == func_26(iParam1);
		}
	}
	return 0;
}

void func_403(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1[32];
	bool bVar34;
	int iVar35;
	char* sVar36;
	int iVar37;
	struct<4> Var38;
	int iVar42;
	int iVar43;
	int iVar44;
	float fVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	struct<2> Var57;
	
	if (func_522(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_520() || iParam2 == 27)
	{
		if (func_475(uParam1, iParam2, uParam3, Global_1574182, 0, func_518(), iParam7))
		{
			func_474(1);
			if ((!func_473() && !func_472()) || unk_0xA2BC31158C8CEFD2(Global_2531497.f_4588, 1))
			{
				if (func_471())
				{
					func_470();
				}
				else
				{
					unk_0xE0EE6551C6D522E7(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_469(1);
						Global_1574182 = 0;
						iVar54 = -1;
						if (Global_1574403 != 1)
						{
							func_468(uParam1, 0, 0);
							if (unk_0xA2BC31158C8CEFD2(uParam3->f_33, 7))
							{
								unk_0x3B76114EC84D5812(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 27)
						{
							iVar52 = 0;
							while (iVar52 < 32)
							{
								iVar1[iVar52] = -1;
								iVar52++;
							}
							iVar52 = 0;
							while (iVar52 < 32)
							{
								if (func_9(unk_0x0C98179F08C6DA4F(iVar52), 0, 1))
								{
									iVar35 = unk_0x0C98179F08C6DA4F(iVar52);
									if (!func_18(iVar35, 0))
									{
										if ((func_467(iVar35) || Global_2424073[iVar35 /*421*/].f_236 != -1) || func_29(iVar35))
										{
											iVar44 = iVar35;
											if (func_28(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_466(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_464(unk_0x7C7787D2D7139A85(), 0) && func_31(unk_0x7C7787D2D7139A85()) != 188)
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_463())
							{
								if (func_9(unk_0x0C98179F08C6DA4F(iVar52), 0, 1))
								{
									iVar35 = unk_0x0C98179F08C6DA4F(iVar52);
								}
								else
								{
									iVar35 = func_10();
								}
							}
							else
							{
								iVar35 = (uParam0[iVar52 /*42*/])->f_1;
							}
							if ((func_462(iVar35) && func_458(iVar35, iParam2)) && func_9(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1590446[iVar44 /*871*/].f_211.f_6;
								Var38 = { func_453(iVar35) };
								if (iVar35 == unk_0x7C7787D2D7139A85())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), unk_0xA09A99AC02B24954(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_174(iVar35) };
								iVar37 = func_447(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = unk_0x5C3CC258CDC18660(iVar37);
								}
								Global_1574182++;
								if ((uParam0[iVar52 /*42*/])->f_22 != -1f)
								{
									fVar45 = (uParam0[iVar52 /*42*/])->f_22;
								}
								if ((uParam0[iVar52 /*42*/])->f_31 != -1)
								{
									iVar46 = (uParam0[iVar52 /*42*/])->f_31;
								}
								if ((uParam0[iVar52 /*42*/])->f_41 != -1)
								{
									iVar47 = (uParam0[iVar52 /*42*/])->f_41;
								}
								iVar43 = (uParam0[iVar52 /*42*/])->f_9;
								if (((uParam0[iVar52 /*42*/])->f_9 != -1 || (uParam0[iVar52 /*42*/])->f_22 != -1f) || (uParam0[iVar52 /*42*/])->f_31 != -1)
								{
									if (!func_463())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_442(&iVar43, &fVar45, (uParam0[iVar52 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_441(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar48 = (uParam0[iVar52 /*42*/])->f_2 + 1;
									if (iVar54 != iVar48)
									{
										iVar54 = iVar48;
									}
									else
									{
										iVar48 = -2;
									}
								}
								iVar51 = func_440(iVar35, 0);
								if (bVar34)
								{
									if (func_27(iVar35, 1) && iVar1[iVar44] != -1)
									{
										iVar53 = iVar1[iVar44];
									}
									else
									{
										iVar53 = (iVar0 + iVar56);
										iVar56++;
									}
								}
								uParam3->f_38[iVar44 /*2*/].f_1 = iVar53;
								if ((uParam0[iVar52 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var57, "UW_TM", 16);
									StringIntConCat(&Var57, (uParam0[iVar52 /*42*/])->f_39, 16);
								}
								if (func_439(iParam5))
								{
									func_438(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &Var57, (uParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								else
								{
									func_438(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &Var57, (uParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								unk_0xA1E7A40E1F56E511(&iVar49, iVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							iVar35 = unk_0x0C98179F08C6DA4F(iVar52);
							if (func_9(iVar35, 0, 1) && !unk_0xA2BC31158C8CEFD2(iVar49, iVar35))
							{
								iVar35 = unk_0x0C98179F08C6DA4F(iVar52);
							}
							else
							{
								iVar35 = func_10();
							}
							if (func_462(iVar35))
							{
								if (func_9(unk_0x0C98179F08C6DA4F(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1590446[iVar44 /*871*/].f_211.f_6;
									Var38 = { func_453(iVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_174(iVar35) };
									iVar37 = func_447(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = unk_0x5C3CC258CDC18660(iVar37);
									}
									Global_1574182++;
									iVar51 = func_440(iVar35, 1);
									if (bVar34)
									{
										if (func_27(iVar35, 1))
										{
											iVar53 = iVar1[iVar52];
										}
										else
										{
											iVar53 = (iVar0 + iVar56);
											iVar56++;
										}
									}
									uParam3->f_38[iVar44 /*2*/].f_1 = iVar53;
									func_418(iVar35, unk_0xA09A99AC02B24954(iVar35), uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (unk_0xA2BC31158C8CEFD2(uParam3->f_33, 11))
						{
							func_415(uParam3, uParam1);
						}
						func_414(&(uParam3->f_21));
						func_413();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0xA2BC31158C8CEFD2(uParam3->f_33, 7))
						{
							func_412(uParam3, uParam1);
							func_411(uParam1, 0, 1);
							unk_0xA1E7A40E1F56E511(&(uParam3->f_33), 7);
						}
						func_412(uParam3, uParam1);
						if (!unk_0xA2BC31158C8CEFD2(uParam3->f_33, 11))
						{
							unk_0xA1E7A40E1F56E511(&(uParam3->f_33), 11);
						}
						if (func_407(uParam3))
						{
							Global_1574403 = 1;
						}
						func_404(uParam3);
						if (Global_1574403 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574403 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0x08EA887200715AD9(*uParam1))
					{
						unk_0xF314976CA3E17AC7(7);
						unk_0x1C65AC18AFC2CA39(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0xF314976CA3E17AC7(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_413();
			func_469(0);
			if (unk_0xA2BC31158C8CEFD2(uParam3->f_33, 7))
			{
				unk_0x3B76114EC84D5812(&(uParam3->f_33), 7);
			}
			if (unk_0xA2BC31158C8CEFD2(uParam3->f_33, 10))
			{
				unk_0x3B76114EC84D5812(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0x01C11ACADC5D0A74();
}

void func_404(var uParam0)
{
	if (!func_406(&(uParam0->f_21)))
	{
		func_4(&(uParam0->f_21), 0, 0);
	}
	else if (func_3(&(uParam0->f_21), 250, 0))
	{
		func_414(&(uParam0->f_21));
		func_405(0);
	}
}

void func_405(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1574403 != 2)
		{
			Global_1574403 = 2;
		}
	}
	else
	{
		switch (Global_1574403)
		{
			case 0:
				Global_1574403 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

bool func_406(var uParam0)
{
	return uParam0->f_1;
}

int func_407(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = unk_0x0C98179F08C6DA4F(uParam0->f_37);
	if (iVar15 != func_10() && func_9(iVar15, 0, 1))
	{
		Var2 = { func_174(iVar15) };
		iVar1 = func_410(uParam0, uParam0->f_37);
		if (func_409(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0xAD7967B7C2B6B4CA(&Var2))
					{
						if (unk_0x4E0A7769ED6F98FD(&Var2))
						{
							iVar16 = 1;
							func_408(uParam0, iVar0, 2);
						}
					}
					else if (unk_0xCE08CBA13236EC65(&Var2))
					{
						iVar16 = 1;
						func_408(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0xAD7967B7C2B6B4CA(&Var2))
					{
						if (!unk_0x4E0A7769ED6F98FD(&Var2))
						{
							iVar16 = 1;
							func_408(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_408(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0xAD7967B7C2B6B4CA(&Var2))
					{
						if (!unk_0xCE08CBA13236EC65(&Var2))
						{
							iVar16 = 1;
							func_408(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0xCE08CBA13236EC65(&Var2))
					{
						iVar16 = 1;
						func_408(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_37++;
	if (uParam0->f_37 >= 32)
	{
		uParam0->f_37 = 0;
	}
	return iVar16;
}

void func_408(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_409(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x5D17AB84230A234B(&uParam0, 13);
}

var func_410(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_411(var uParam0, int iParam1, int iParam2)
{
	if (unk_0xF1BC72CEC2746995(*uParam0, "COLLAPSE"))
	{
		unk_0x282C78036676E0C2(iParam1);
		unk_0xAC7C2DE2DDC7AF03();
	}
	if (iParam2 == 1)
	{
		if (unk_0xF1BC72CEC2746995(*uParam0, "DISPLAY_VIEW"))
		{
			unk_0xAC7C2DE2DDC7AF03();
		}
	}
}

void func_412(var uParam0, var uParam1)
{
	if (!unk_0xA2BC31158C8CEFD2(uParam0->f_33, 10))
	{
		unk_0xF1BC72CEC2746995(*uParam1, "SET_HIGHLIGHT");
		unk_0xD02F24F3E2DB263A(uParam0->f_35);
		unk_0xAC7C2DE2DDC7AF03();
		unk_0xA1E7A40E1F56E511(&(uParam0->f_33), 10);
	}
}

void func_413()
{
	if (Global_1574403 != 0)
	{
		Global_1574403 = 0;
	}
}

void func_414(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_415(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x0C98179F08C6DA4F(iVar0);
		if (iVar2 != func_10())
		{
			if (func_9(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_417(uParam0->f_38[iVar0 /*2*/], 0);
					func_416(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1590446[iVar0 /*871*/].f_211.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_416(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x08EA887200715AD9(*uParam0))
	{
		if (unk_0xF1BC72CEC2746995(*uParam0, "SET_ICON"))
		{
			unk_0xD02F24F3E2DB263A(iParam1);
			unk_0xD02F24F3E2DB263A(iParam2);
			if (iParam2 == 65)
			{
				unk_0xD02F24F3E2DB263A(iParam3);
			}
			unk_0xAC7C2DE2DDC7AF03();
		}
	}
}

int func_417(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 65;
	if (bParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		
		case 1:
			return 49;
		
		default:
	}
	return iVar0;
}

void func_418(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_437() && iParam4 < func_436())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1574184)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574403 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0xF1BC72CEC2746995(*uParam2, sVar1))
		{
			unk_0xD02F24F3E2DB263A(iParam4);
			if (unk_0xA2BC31158C8CEFD2(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_435("");
			}
			else
			{
				unk_0xD02F24F3E2DB263A(iParam10);
			}
			func_435(sParam1);
			unk_0xD02F24F3E2DB263A(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_435("");
			}
			else
			{
				unk_0xD02F24F3E2DB263A(65);
			}
			unk_0xD02F24F3E2DB263A(-1);
			func_435("");
			if (uParam3->f_108 == 6)
			{
				func_435("");
			}
			else
			{
				func_435(&sParam5);
			}
			func_423(uParam3, iParam0);
			unk_0xE2603C088682FC07(sParam9);
			unk_0xE2603C088682FC07(sParam9);
			if (func_422(uParam3))
			{
				func_421("DPAD_FRIEND");
			}
			else if (func_420(uParam3))
			{
				func_421("DPAD_FRIEND");
			}
			else if (func_419(uParam3))
			{
				func_421("DPAD_CREW");
			}
			else
			{
				func_421("");
			}
			unk_0xAC7C2DE2DDC7AF03();
		}
	}
}

bool func_419(var uParam0)
{
	return unk_0xA2BC31158C8CEFD2(uParam0->f_33, 6);
}

bool func_420(var uParam0)
{
	return unk_0xA2BC31158C8CEFD2(uParam0->f_33, 5);
}

void func_421(char* sParam0)
{
	unk_0x759AC38FBC6CCA9E(sParam0);
	unk_0x81019766FF500CCA();
}

int func_422(var uParam0)
{
	if (func_420(uParam0) && func_419(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_423(var uParam0, int iParam1)
{
	if (func_434(iParam1))
	{
		unk_0xD02F24F3E2DB263A(121);
	}
	else if (func_427(iParam1))
	{
		unk_0xD02F24F3E2DB263A(122);
	}
	else if (((unk_0xA2BC31158C8CEFD2(Global_4456448.f_27, 15) && iParam1 > -1) && iParam1 < 32) && unk_0xA2BC31158C8CEFD2(Global_2424073[iParam1 /*421*/].f_411, 0))
	{
		unk_0xD02F24F3E2DB263A(123);
	}
	else
	{
		if (func_424())
		{
			uParam0->f_36 = 0;
		}
		unk_0x282C78036676E0C2(uParam0->f_36);
	}
}

int func_424()
{
	if (unk_0xA51CBC95AC3A4B14())
	{
		if (func_425() || func_85())
		{
			return 1;
		}
	}
	return 0;
}

int func_425()
{
	if (unk_0xA51CBC95AC3A4B14())
	{
		return func_85();
	}
	return func_426(Global_4456448.f_154360);
}

int func_426(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4990[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_427(int iParam0)
{
	if ((func_9(iParam0, 0, 1) && func_428()) && func_6(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_428()
{
	if (func_433(unk_0x7C7787D2D7139A85()) || func_432())
	{
		if (!func_429(unk_0x7C7787D2D7139A85(), 236))
		{
			return 0;
		}
	}
	return 1;
}

int func_429(int iParam0, int iParam1)
{
	if (func_431(iParam0) == iParam1)
	{
		return func_430(iParam0);
	}
	return 0;
}

int func_430(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xA2BC31158C8CEFD2(Global_1628955[iVar0 /*614*/].f_1, 7);
	}
	return 0;
}

int func_431(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628955[iVar0 /*614*/];
	}
	return -1;
}

int func_432()
{
	switch (func_31(unk_0x7C7787D2D7139A85()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_433(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628955[iVar0 /*614*/] != -1;
	}
	return 0;
}

int func_434(int iParam0)
{
	if (func_424())
	{
		if (func_9(iParam0, 0, 1))
		{
			return func_28(iParam0);
		}
	}
	if ((func_9(iParam0, 0, 1) && func_428()) && func_8(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_435(char* sParam0)
{
	unk_0x7151302E2AA285DC(sParam0);
}

int func_436()
{
	int iVar0;
	
	if (Global_1574184)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_437()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574184)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_438(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_437() && iParam3 < func_436())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1574184)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574403 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x08EA887200715AD9(*uParam1))
		{
			if (unk_0xF1BC72CEC2746995(*uParam1, sVar1))
			{
				unk_0xD02F24F3E2DB263A(iParam3);
				if (unk_0xA2BC31158C8CEFD2(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_435("");
				}
				else
				{
					unk_0xD02F24F3E2DB263A(iParam9);
				}
				if (uParam2->f_108 == 6 && !unk_0x9591DE0F00127F2A(sParam16))
				{
					func_421(sParam16);
				}
				else
				{
					func_435(&(uParam2->f_1));
				}
				unk_0xD02F24F3E2DB263A(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_435("");
				}
				else
				{
					unk_0xD02F24F3E2DB263A(65);
				}
				if (iParam12 == 1)
				{
					unk_0xD02F24F3E2DB263A(iVar0);
				}
				else
				{
					unk_0xD02F24F3E2DB263A(-1);
				}
				if (func_463())
				{
					func_435("");
				}
				else if (uParam2->f_108 == 6 && !unk_0x9591DE0F00127F2A(sParam16))
				{
					unk_0x759AC38FBC6CCA9E("FM_AE_ONE_INT");
					unk_0x0AC9F8E1AFCEC860(sParam16);
					unk_0x6A8B3CC08A759F44(iParam17);
					unk_0x81019766FF500CCA();
				}
				else if (uParam2->f_108 == 5 && !unk_0x9591DE0F00127F2A(sParam16))
				{
					unk_0x759AC38FBC6CCA9E("FM_AE_ONE_INT");
					unk_0x0AC9F8E1AFCEC860(sParam16);
					unk_0x6A8B3CC08A759F44(iParam17);
					unk_0x81019766FF500CCA();
				}
				else if (uParam2->f_108 == 7 && !unk_0x9591DE0F00127F2A(sParam16))
				{
					unk_0x759AC38FBC6CCA9E("FM_AE_TWO_INT");
					unk_0x0AC9F8E1AFCEC860(sParam16);
					unk_0x6A8B3CC08A759F44(iParam17);
					unk_0x81019766FF500CCA();
				}
				else if (uParam2->f_108 == 8 && !unk_0x9591DE0F00127F2A(&(uParam2->f_104)))
				{
					unk_0x759AC38FBC6CCA9E("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						unk_0x10D1E89D0C3D279B(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						unk_0x6A8B3CC08A759F44(iParam10);
					}
					unk_0x0AC9F8E1AFCEC860(&(uParam2->f_104));
					unk_0x81019766FF500CCA();
				}
				else if (uParam2->f_108 == 9)
				{
					unk_0x759AC38FBC6CCA9E("FM_AE_CASH");
					unk_0x4BDF2F68AA4EAA77(iParam10, 1);
					unk_0x81019766FF500CCA();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						unk_0x759AC38FBC6CCA9E("FM_AE_CASH");
						unk_0x4BDF2F68AA4EAA77(iParam10, 1);
						unk_0x81019766FF500CCA();
					}
					else
					{
						unk_0x759AC38FBC6CCA9E("FM_NG_CASH");
						unk_0x4BDF2F68AA4EAA77(iParam10, 1);
						unk_0x81019766FF500CCA();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !unk_0x9591DE0F00127F2A(&(uParam2->f_104)))
					{
						func_421(&(uParam2->f_104));
					}
					else
					{
						func_435("");
					}
				}
				else if (iParam14 != -1)
				{
					unk_0x759AC38FBC6CCA9E("STRING");
					unk_0xC5B1209EEC9E6603(iParam14, 6);
					unk_0x81019766FF500CCA();
				}
				else if (fParam13 != -1f)
				{
					unk_0x759AC38FBC6CCA9E("NUMBER");
					unk_0x10D1E89D0C3D279B(fParam13, 1);
					unk_0x81019766FF500CCA();
				}
				else if (iParam10 != -1)
				{
					unk_0xD02F24F3E2DB263A(iParam10);
				}
				else
				{
					func_435("");
				}
				if (uParam2->f_108 == 6)
				{
					func_435("");
				}
				else
				{
					func_435(&sParam4);
				}
				func_423(uParam2, iParam0);
				if (iParam12 == 1 || unk_0x9591DE0F00127F2A(sParam8))
				{
					func_435("");
					func_435("");
				}
				else
				{
					unk_0xE2603C088682FC07(sParam8);
					unk_0xE2603C088682FC07(sParam8);
				}
				if (func_422(uParam2))
				{
					func_421("DPAD_FRIEND");
				}
				else if (func_420(uParam2))
				{
					func_421("DPAD_FRIEND");
				}
				else if (func_419(uParam2))
				{
					func_421("DPAD_CREW");
				}
				else
				{
					func_421("");
				}
				unk_0xAC7C2DE2DDC7AF03();
			}
		}
	}
}

int func_439(int iParam0)
{
	return 0;
	switch (iParam0)
	{
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_440(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_433(iParam0)) && !func_123(iParam0))
	{
		iVar0 = func_325();
	}
	iVar1 = func_80(iParam0);
	if (!iVar1 == -1)
	{
		return func_78(iVar1);
	}
	return iVar0;
}

char* func_441(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0xB28FEB6F176CE84A())
			{
				if (bParam1)
				{
					return "AMCH_M_LB";
				}
				else if (bParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (bParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		
		case 2:
			if (unk_0xB28FEB6F176CE84A())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (bParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (bParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

int func_442(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_446(iParam3))
	{
		*fParam1 = (func_443(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_439(iParam3))
	{
		*fParam1 = (func_443(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_443(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (unk_0xB28FEB6F176CE84A())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_445(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
		
		case 2:
			if (unk_0xB28FEB6F176CE84A())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_444(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
	}
	return unk_0xBBDA792448DB5A89(iParam1);
}

float func_444(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_445(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_446(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_447(int iParam0)
{
	int iVar0;
	
	iVar0 = func_450(iParam0);
	if (iVar0 == -1)
	{
		func_448(iParam0, 1);
		return 0;
	}
	Global_1385294[iVar0 /*5*/].f_4 = 1;
	return Global_1385294[iVar0 /*5*/].f_2;
}

void func_448(int iParam0, bool bParam1)
{
	if (!func_9(iParam0, 0, 1))
	{
		return;
	}
	if (func_450(iParam0) != -1)
	{
		return;
	}
	if (Global_1385457)
	{
		if (iParam0 == Global_1385457.f_1)
		{
			return;
		}
	}
	if (func_449(iParam0))
	{
		return;
	}
	if (Global_1385495 >= 32)
	{
		return;
	}
	Global_1385462[Global_1385495] = iParam0;
	Global_1385495++;
	if (bParam1)
	{
	}
}

int func_449(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1385495)
	{
		if (Global_1385462[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_450(int iParam0)
{
	int iVar0;
	
	if (!func_9(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1385455 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1385455)
	{
		if (Global_1385294[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0xA78F5AF1E2C5FDAB(Global_1385294[iVar0 /*5*/].f_2) && unk_0x7E9D01EC258BE530(Global_1385294[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_451(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_451(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1385455)
	{
		return;
	}
	if (unk_0xA78F5AF1E2C5FDAB(Global_1385294[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1385294[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0x5C3CC258CDC18660(Global_1385294[iParam0 /*5*/].f_2), 64);
			unk_0x41E6991C564E55CD(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0xF0502EB385D5B3C4(Global_1385294[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1385455)
	{
		Global_1385294[iVar32 /*5*/] = { Global_1385294[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_452(&(Global_1385294[iVar32 /*5*/]));
	Global_1385455 = (Global_1385455 - 1);
}

void func_452(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_10();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x393E9918BC37548A())
	{
		uParam0->f_3 = unk_0x169A8AC9F93C2727();
	}
}

struct<4> func_453(int iParam0)
{
	struct<4> Var0;
	
	if (func_9(iParam0, 0, 1))
	{
		Global_2507671 = { func_174(iParam0) };
		if (unk_0x77BA37DB22C66465())
		{
			if (func_409(Global_2507671))
			{
				if (!unk_0xCA3736B46FE270BB(&Global_2507671))
				{
					return Var0;
				}
			}
		}
		else if (!unk_0x7B3E18C7DAC336C3(0))
		{
			return Var0;
		}
		if (func_457(&Global_2507671))
		{
			Global_2507601 = { func_455(iParam0) };
			func_454(&Global_2507601, &Var0);
		}
	}
	return Var0;
}

void func_454(var uParam0, var uParam1)
{
	unk_0x1E527CF40C25B139(uParam0, 35, uParam1);
}

struct<35> func_455(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_456(iParam0))
	{
		return Global_1312905[unk_0x7C7787D2D7139A85() /*35*/];
	}
	Var0 = { func_174(iParam0) };
	unk_0x4065D3D900AB253F(&Var13, 35, &Var0);
	return Var13;
}

int func_456(int iParam0)
{
	if (iParam0 == unk_0x7C7787D2D7139A85())
	{
		return 1;
	}
	return 0;
}

int func_457(var uParam0)
{
	if (unk_0xE7017554E7BCFB0E())
	{
		if (unk_0xFF6895C150414C31() && unk_0xF10E9BDC0C546560(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_458(int iParam0, int iParam1)
{
	if (iParam1 == 26)
	{
		if ((func_461(iParam0) || func_460(iParam0)) || func_459(iParam0))
		{
			return 0;
		}
	}
	if (!func_400(iParam0))
	{
		return 0;
	}
	if ((!func_467(iParam0) && Global_2424073[iParam0 /*421*/].f_236 == -1) && !func_29(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_459(int iParam0)
{
	if (func_461(iParam0))
	{
		return 1;
	}
	return unk_0xA2BC31158C8CEFD2(Global_1628955[iParam0 /*614*/].f_1, 8);
}

int func_460(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0xA2BC31158C8CEFD2(Global_1628955[iParam0 /*614*/].f_1, 10) || unk_0xA2BC31158C8CEFD2(Global_1628955[iParam0 /*614*/].f_1, 9));
	}
	return 0;
}

bool func_461(int iParam0)
{
	return unk_0xA2BC31158C8CEFD2(Global_1628955[iParam0 /*614*/].f_1, 2);
}

int func_462(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_10())
	{
		return 0;
	}
	if (func_18(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xA2BC31158C8CEFD2(Global_1590446[iVar0 /*871*/].f_142, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_463()
{
	switch (func_31(unk_0x7C7787D2D7139A85()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return 1;
		
		default:
	}
	switch (func_431(unk_0x7C7787D2D7139A85()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_123(unk_0x7C7787D2D7139A85()))
	{
		switch (func_31(unk_0x7C7787D2D7139A85()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return 1;
				break;
			}
	}
	if (func_429(unk_0x7C7787D2D7139A85(), 236))
	{
		return 1;
	}
	return 0;
}

int func_464(int iParam0, int iParam1)
{
	if (Global_1628955[iParam0 /*614*/].f_11.f_33 != -1 && func_465(Global_1628955[iParam0 /*614*/].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1628955[iParam0 /*614*/].f_11.f_32 != -1)
	{
		if (func_465(Global_1628955[iParam0 /*614*/].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_465(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return func_112(iParam0, 0);
	return 0;
}

void func_466(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_9(unk_0x0C98179F08C6DA4F(iVar0), 0, 1))
		{
			iVar1 = unk_0x0C98179F08C6DA4F(iVar0);
			if (!func_18(iVar1, 0))
			{
				if ((func_467(iVar1) || Global_2424073[iVar1 /*421*/].f_236 != -1) || func_29(iVar1))
				{
					if (func_47(iVar1, iParam1, 0))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_467(int iParam0)
{
	if (func_9(iParam0, 0, 1))
	{
		if (func_9(unk_0x7C7787D2D7139A85(), 0, 1))
		{
			if (unk_0x645A04F62406C561(iParam0, unk_0x7C7787D2D7139A85()) || func_31(iParam0) == 233)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_468(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x08EA887200715AD9(*uParam0))
	{
		unk_0xF1BC72CEC2746995(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0xD02F24F3E2DB263A(iParam1);
		unk_0xD02F24F3E2DB263A(iParam2);
		unk_0xAC7C2DE2DDC7AF03();
	}
}

void func_469(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1373497.f_2 == 0)
		{
			Global_1373497.f_2 = 1;
		}
	}
	else if (Global_1373497.f_2 == 1)
	{
		Global_1373497.f_2 = 0;
	}
}

void func_470()
{
	if (unk_0xA2BC31158C8CEFD2(Global_2531497.f_4588, 1))
	{
		if (func_343())
		{
			func_342();
		}
	}
}

int func_471()
{
	if (unk_0xA2BC31158C8CEFD2(Global_2531497.f_4588, 0) && func_343())
	{
		return 1;
	}
	if (unk_0xA2BC31158C8CEFD2(Global_2531497.f_4588, 1) && func_343())
	{
		return 1;
	}
	return 0;
}

int func_472()
{
	if (func_343())
	{
		if (func_314(Global_2437549.f_2708[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_473()
{
	if (func_343())
	{
		if (func_326(Global_2437549.f_2708[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_474(int iParam0)
{
	if (Global_1373497.f_1 != Global_1373497)
	{
		Global_1373497.f_1 = Global_1373497;
	}
	if (Global_1373497 != iParam0)
	{
		Global_1373497 = iParam0;
	}
}

int func_475(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)
{
	struct<4> Var0;
	var uVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	char* sVar9;
	
	StringCopy(&Var0, "", 16);
	bVar6 = func_517(iParam1);
	if (iParam1 == 20)
	{
		bVar5 = true;
	}
	fVar7 = func_516();
	iVar8 = -1;
	if (iParam1 == 26 || iParam1 == 27)
	{
		if (func_515())
		{
			if (func_514() > 0 && Global_1574184)
			{
				unk_0x1C0FEAA5C83F343B();
				unk_0xF3F61F23853206CB(fVar7);
				unk_0x0AF55029F939BA65(18);
				if (unk_0x0945988C02AF3025())
				{
					unk_0x3D0BC3CE4D5E1DD0();
				}
				unk_0x0AF55029F939BA65(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_504())
		{
			func_503(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0xA2BC31158C8CEFD2(Global_2531497.f_4591, 26))
	{
		func_503(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_406(&(uParam2->f_19)))
	{
		if (func_514() == 1)
		{
			func_502(bVar6, uParam0, 0);
			func_4(&(uParam2->f_19), 0, 0);
			func_503(uParam0, uParam2, 0);
			unk_0xA1E7A40E1F56E511(&(Global_2531497.f_4592), 5);
		}
	}
	if (func_406(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0x0945988C02AF3025())
		{
			unk_0x3D0BC3CE4D5E1DD0();
		}
		unk_0x0AF55029F939BA65(10);
		if (func_3(&(uParam2->f_19), 10000, 0) || (func_514() == 0 && !bParam5))
		{
			func_503(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_501();
				if (iParam1 == 26 || iParam1 == 27)
				{
					unk_0x1C0FEAA5C83F343B();
				}
				unk_0x0AF55029F939BA65(18);
			}
			if (!unk_0xA2BC31158C8CEFD2(uParam2->f_33, 0))
			{
				if (bVar5 == 0)
				{
					func_501();
					if (iParam1 == 26 || iParam1 == 27)
					{
						unk_0x1C0FEAA5C83F343B();
					}
					unk_0x0AF55029F939BA65(18);
				}
				unk_0xF3F61F23853206CB(fVar7);
				if (func_502(bVar6, uParam0, 0))
				{
					func_468(uParam0, 0, 0);
					uVar4 = func_499(iParam1, &(Global_4456448.f_154367), bParam4);
					Var0 = { func_497(iParam1) };
					if (bParam4)
					{
						func_494(uParam0, uVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 26)
					{
						func_487(uParam0, func_491(uParam2), func_488(uParam2), -1);
					}
					else if (iParam1 == 27)
					{
						sVar9 = func_483(uParam2);
						if (!unk_0x9591DE0F00127F2A(uParam6))
						{
							sVar9 = sParam6;
						}
						func_481(uParam0, sVar9, func_482(), -1);
					}
					else if (func_424())
					{
						uParam2->f_34 = Global_1574183;
						func_494(uParam0, uVar4, &Var0, 1, -1, Global_1574183, 1);
					}
					else if (bVar5)
					{
						iVar8 = func_476(iParam1);
						uParam2->f_34 = Global_1574183;
						func_494(uParam0, uVar4, "", 0, iVar8, Global_1574183, 1);
					}
					else
					{
						iVar8 = func_476(iParam1);
						func_494(uParam0, uVar4, &Var0, 1, iVar8, -1, 1);
					}
					unk_0xA1E7A40E1F56E511(&(uParam2->f_33), 0);
				}
			}
			if (unk_0xA2BC31158C8CEFD2(uParam2->f_33, 0))
			{
				Global_1574182 = uParam3;
				Global_1574181 = 1;
				unk_0xF3F61F23853206CB(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1574183)
					{
						unk_0x3B76114EC84D5812(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_476(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_480())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 39:
			iVar0 = 22;
			break;
		
		case 0:
		case 30:
		case 29:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 1:
			iVar0 = 6;
			break;
		
		case 3:
			iVar0 = 5;
			break;
		
		case 25:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
		case 11:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 12:
		case 13:
		case 14:
		case 17:
			iVar0 = 2;
			break;
		
		case 15:
			iVar0 = 17;
			break;
		
		case 16:
			iVar0 = 18;
			break;
		
		case 18:
			if (func_479(unk_0x7C7787D2D7139A85()))
			{
				iVar0 = 20;
			}
			if (func_478(unk_0x7C7787D2D7139A85()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_477(unk_0x7C7787D2D7139A85()))
	{
		iVar0 = 2;
	}
	if (func_196())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_477(int iParam0)
{
	return Global_2424073[iParam0 /*421*/].f_115 == 4;
}

bool func_478(int iParam0)
{
	return Global_2424073[iParam0 /*421*/].f_115 == 7;
}

bool func_479(int iParam0)
{
	return Global_2424073[iParam0 /*421*/].f_115 == 2;
}

bool func_480()
{
	return Global_4456448.f_1 == 0;
}

void func_481(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x08EA887200715AD9(*uParam0))
	{
		unk_0xF1BC72CEC2746995(*uParam0, "SET_TITLE");
		if (unk_0x9591DE0F00127F2A(sParam2))
		{
			func_421(sParam1);
		}
		else
		{
			unk_0x759AC38FBC6CCA9E("FM_AE_BRACKT");
			unk_0x0AC9F8E1AFCEC860(sParam1);
			unk_0x0AC9F8E1AFCEC860(sParam2);
			unk_0x81019766FF500CCA();
		}
		func_421("");
		if (iParam3 != -1)
		{
			unk_0xD02F24F3E2DB263A(iParam3);
		}
		unk_0xAC7C2DE2DDC7AF03();
	}
}

char* func_482()
{
	switch (func_31(unk_0x7C7787D2D7139A85()))
	{
		case 163:
			return "BD_SORT_1";
			break;
		
		case 160:
			return "BD_SORT_4";
			break;
		
		case 154:
			return "BD_SORT_3";
			break;
		
		case 155:
			return "BD_SORT_3";
			break;
	}
	return "";
}

char* func_483(var uParam0)
{
	switch (uParam0->f_112)
	{
		case 0:
			return "GR_DPD_E";
			break;
		
		case 1:
			return "GR_DPD_F";
			break;
		
		case 2:
			return "GR_DPD_S";
			break;
	}
	switch (uParam0->f_110)
	{
		case 0:
			return "GR_DPD_A";
			break;
		
		case 1:
			return "GR_DPD_B";
			break;
		
		case 2:
			return "GR_DPD_C";
			break;
		
		case 3:
			return "GR_DPD_D";
			break;
	}
	switch (func_31(unk_0x7C7787D2D7139A85()))
	{
		case 233:
			return "H2_DPAD_SET";
			break;
		
		case 180:
			return "GB_BIGUNLOAD_T";
			break;
		
		case 182:
			return "DEAL_DEALN";
			break;
		
		case 194:
			return "PI_BIK_13_0";
			break;
		
		case 189:
			return "PI_BIK_4_1";
			break;
		
		case 193:
			return "PI_BIK_13_1";
			break;
		
		case 205:
			return "PI_BIK_13_3";
			break;
		
		case 186:
			return "CELL_BIKER_CK";
			break;
		
		case 207:
			return "DV_SH_TITLE";
			break;
		
		case 208:
			return "BA_SH_TITLE";
			break;
		
		case 209:
			return "SHU_SH_TITLE";
			break;
		
		case 210:
			return "PI_BIK_13_4";
			break;
		
		case 183:
			return "CELL_BIKER_RESC";
			break;
		
		case 199:
			return "CELL_BIKER_SEAR";
			break;
		
		case 201:
			return "CELL_BIKER_STAN";
			break;
		
		case 142:
			return "PIM_MAGM210";
			break;
		
		case 163:
			return "PIM_MAGM608";
			break;
		
		case 160:
			return "PIM_MAGM604";
			break;
		
		case 154:
			return "PIM_MAGM602";
			break;
		
		case 155:
			return "PIM_MAGM603";
			break;
		
		case 148:
			if (func_485())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_205(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_205(1))
			{
				return "PI_BIK_3_2";
			}
			return "PIM_MAGM601";
			break;
		
		case 157:
			return "PIM_MAGM207";
			break;
		
		case 159:
			return "PIM_MAGM206";
			break;
		
		case 162:
			return "PIM_MAGM607";
			break;
		
		case 164:
			return "PIM_MAGM212";
			break;
		
		case 166:
			return "GB_DPAD_HEAD";
		
		case 167:
			return "GB_DPAD_BUY";
		
		case 168:
			return "GB_DPAD_SELL";
		
		case 169:
			return "GB_DPAD_DEF";
		
		case 170:
			return "GB_DPAD_AIR";
		
		case 171:
			return "GB_DPAD_CASH";
		
		case 172:
			return "GB_DPAD_SAL";
		
		case 173:
			return "GB_DPAD_FRA";
		
		case 178:
			return "VEX_TITLEa";
		
		case 188:
			return "VEX_TITLEb";
		
		case 218:
			return "FRT_MODE";
		
		case 217:
			return "FRT_TRNS";
		
		case 214:
			return "MODE_PLW";
		
		case 215:
			return "MODE_FUL";
		
		case 216:
			return "MODE_AA";
		
		case 219:
			return "MODE_VEL";
		
		case 220:
			return "MODE_RMP";
		
		case 221:
			return "MODE_STK";
		
		case 225:
			return "GR_TITLEL";
		
		case 226:
			return "GRS_TITLEL";
		
		case 227:
			return "GRD_TITLEL";
		
		case 195:
			return "GB_STEAL_T";
		
		case 198:
			return "SC_MENU_TITLE";
		
		case 190:
			return "GB_DPAD_BSEL";
		
		case 191:
			return "GB_DPAD_BDEF";
		
		case 185:
			return "GB_DPAD_GFH";
		
		case 197:
			return "GB_DPAD_JB";
		
		case 179:
			return "CELL_JOUST";
		
		case 200:
			return "CAG_BLIP";
		
		case 192:
			if (func_484(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_181))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_484(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

bool func_485()
{
	return (func_486() && func_61(func_59()));
}

bool func_486()
{
	return Global_1590446[unk_0x7C7787D2D7139A85() /*871*/] == 148;
}

void func_487(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x08EA887200715AD9(*uParam0))
	{
		unk_0xF1BC72CEC2746995(*uParam0, "SET_TITLE");
		if (unk_0x9591DE0F00127F2A(uParam2))
		{
			func_421(uParam1);
		}
		else if (func_431(unk_0x7C7787D2D7139A85()) == 133)
		{
			unk_0x759AC38FBC6CCA9E("FM_AE_BRACKT_C");
			unk_0x0AC9F8E1AFCEC860(uParam1);
			unk_0x0AC9F8E1AFCEC860(sParam2);
			unk_0x81019766FF500CCA();
		}
		else
		{
			unk_0x759AC38FBC6CCA9E("FM_AE_BRACKT");
			unk_0x0AC9F8E1AFCEC860(sParam1);
			unk_0x0AC9F8E1AFCEC860(sParam2);
			unk_0x81019766FF500CCA();
		}
		func_421("");
		if (iParam3 != -1)
		{
			unk_0xD02F24F3E2DB263A(iParam3);
		}
		unk_0xAC7C2DE2DDC7AF03();
	}
}

char* func_488(var uParam0)
{
	int iVar0;
	
	iVar0 = func_431(unk_0x7C7787D2D7139A85());
	if (func_490())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5";
		
		case 133:
			switch (func_489())
			{
				case 0:
					return "FM_AE_SORT_2";
				
				case 1:
					return "FM_AE_SORT_2";
				
				case 2:
					return "FM_AE_SORT_3";
				
				case 3:
					return "FM_AE_SORT_2";
				
				case 4:
					return "FM_AE_SORT_2";
				
				case 5:
					return "FM_AE_SORT_2";
				
				case 6:
					return "FM_AE_SORT_2";
				
				case 7:
					return "FM_AE_SORT_13";
				
				case 8:
					return "FM_AE_SORT_4";
				
				case 9:
					return "FM_AE_SORT_2";
				
				case 10:
					return "FM_AE_SORT_2";
				
				case 11:
					return "FM_AE_SORT_2";
				
				case 12:
					return "FM_AE_SORT_2";
				
				case 13:
					return "FM_AE_SORT_2";
				
				case 14:
					return "FM_AE_SORT_5";
				
				case 15:
					return "FM_AE_SORT_9";
				
				case 16:
					return "FM_AE_SORT_9";
				
				case 17:
					return "FM_AE_SORT_9";
				
				case 18:
					return "FM_AE_SORT_9";
				
				default:
			}
			break;
		
		case 136:
			return "";
		
		case 138:
			return "";
		
		case 139:
			return "FM_AE_SORT_10";
		
		case 140:
			return "";
		
		case 141:
			return "FM_AE_SORT_5";
		
		case 144:
			return "FM_AE_SORT_1";
		
		case 129:
			return "FM_AE_SORT_9";
	}
	return "";
}

int func_489()
{
	if (func_431(unk_0x7C7787D2D7139A85()) == 133)
	{
		return Global_2531497.f_4819;
	}
	return -1;
}

bool func_490()
{
	return Global_1590319;
}

char* func_491(var uParam0)
{
	int iVar0;
	
	iVar0 = func_431(unk_0x7C7787D2D7139A85());
	if (func_490())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		
		case 132:
			if (func_493() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_493() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_489())
			{
				case 0:
					return "AMCH_0SLC";
				
				case 1:
					return "AMCH_1SLC";
				
				case 2:
					return "AMCH_2SLC";
				
				case 3:
					return "AMCH_3SLC";
				
				case 4:
					return "AMCH_4SLC";
				
				case 5:
					return "AMCH_5SLC";
				
				case 6:
					return "AMCH_6SLC";
				
				case 7:
					return "AMCH_7SLC";
				
				case 8:
					return "AMCH_8SLC";
				
				case 9:
					return "AMCH_12SLC";
				
				case 10:
					return "AMCH_13SLC";
				
				case 11:
					return "AMCH_15SLC";
				
				case 12:
					return "AMCH_16SLC";
				
				case 13:
					return "AMCH_23SLC";
				
				case 14:
					return "AMCH_9SLC";
				
				case 15:
					return "AMCH_19SLC";
				
				case 16:
					return "AMCH_20SLC";
				
				case 17:
					return "AMCH_21SLC";
				
				case 18:
					return "AMCH_22SLC";
				
				default:
			}
			break;
		
		case 136:
			return "PIM_TA10";
		
		case 138:
			return "PIM_TA4";
		
		case 139:
			return "PIM_TA5";
		
		case 140:
			return "PIM_TA3";
		
		case 141:
			return "PIM_TA8";
		
		case 144:
			return "PIM_TA2";
		
		case 129:
			if (func_492() == 1)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		
		case 146:
			return "PIM_TA6";
	}
	return "";
}

int func_492()
{
	return Global_2531497.f_4822;
}

int func_493()
{
	if (func_431(unk_0x7C7787D2D7139A85()) == 132)
	{
		return Global_2531497.f_4817;
	}
	return -1;
}

void func_494(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x08EA887200715AD9(*uParam0))
	{
		unk_0xF1BC72CEC2746995(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_435(uParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x759AC38FBC6CCA9E(uParam1);
			unk_0x6A8B3CC08A759F44(iParam5);
			unk_0x81019766FF500CCA();
		}
		else
		{
			func_421(sParam1);
		}
		if (func_515() && iParam6)
		{
			if (func_496())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0x759AC38FBC6CCA9E("LBD_DPD_CNT");
			unk_0x6A8B3CC08A759F44(iVar0);
			unk_0x6A8B3CC08A759F44(iVar1);
			unk_0x81019766FF500CCA();
		}
		else
		{
			func_421(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0xD02F24F3E2DB263A(iParam4);
			if (func_495(unk_0x7C7787D2D7139A85()))
			{
				unk_0xD02F24F3E2DB263A(166);
			}
			else if (func_83())
			{
				unk_0xD02F24F3E2DB263A(220);
			}
		}
		unk_0xAC7C2DE2DDC7AF03();
	}
}

int func_495(int iParam0)
{
	if (func_479(iParam0) || func_478(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_496()
{
	return Global_1574184;
}

struct<4> func_497(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_498(unk_0x7C7787D2D7139A85()) || func_477(unk_0x7C7787D2D7139A85()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 12:
		case 13:
		case 14:
		case 17:
		case 15:
		case 16:
		case 18:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_4456448.f_40, 16);
			break;
	}
	if (func_424() && unk_0xA51CBC95AC3A4B14())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4456448.f_40, 16);
	}
	return Var0;
}

bool func_498(int iParam0)
{
	return Global_2424073[iParam0 /*421*/].f_115 == 5;
}

char* func_499(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_424() || unk_0x9591DE0F00127F2A(uParam1)))
	{
		uVar0 = func_500();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 24)
	{
		if (Global_1574422 == 0)
		{
			Global_1574422 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0x9591DE0F00127F2A(sParam1))
	{
		if (Global_1574422 == 1)
		{
			Global_1574422 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1574422 == 0)
		{
			Global_1574422 = 1;
		}
		switch (iParam0)
		{
			case 0:
			case 30:
				return "HUD_LBD_DM";
				break;
			
			case 1:
				return "HUD_LBD_TDM";
				break;
			
			case 5:
				return "HUD_LBD_GRCE";
				break;
			
			case 4:
			case 9:
			case 10:
			case 6:
			case 25:
			case 11:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 18:
			case 14:
			case 17:
			case 15:
			case 13:
			case 12:
			case 16:
			case 19:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 21:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_500()
{
	if (unk_0xB60C981253946EC0())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0x28B56AB7204D753B())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0x2D635A9E46DA733C())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0xF74FDCB441C8F4C2())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_501()
{
	Global_42316 = 1;
}

bool func_502(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = unk_0x1FAFE9BB9D8960C1("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0x1FAFE9BB9D8960C1("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0x1FAFE9BB9D8960C1("mp_matchmaking_card");
	}
	return unk_0x08EA887200715AD9(*uParam1);
}

void func_503(var uParam0, var uParam1, bool bParam2)
{
	unk_0x3B76114EC84D5812(&(uParam1->f_33), 7);
	Global_1574182 = 0;
	func_413();
	Global_1574181 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_406(&(uParam1->f_19)))
		{
			func_414(&(uParam1->f_19));
			unk_0x3B76114EC84D5812(&(Global_2531497.f_4592), 5);
		}
	}
	if (unk_0x08EA887200715AD9(*uParam0))
	{
		unk_0x749CA887CB0AFEC9(uParam0);
	}
	if (unk_0xA2BC31158C8CEFD2(uParam1->f_33, 0))
	{
		unk_0x3B76114EC84D5812(&(uParam1->f_33), 0);
	}
	unk_0xF3F61F23853206CB(0f);
}

int func_504()
{
	if (func_513())
	{
		return 0;
	}
	if (func_396())
	{
		return 0;
	}
	if (!func_511())
	{
		return 0;
	}
	if (!func_390())
	{
		return 0;
	}
	if (func_510(8, -1))
	{
		return 0;
	}
	if (func_514() == 2)
	{
		return 0;
	}
	if (Global_2531497.f_4543)
	{
		return 0;
	}
	if (func_394())
	{
		return 0;
	}
	else if (!func_399(unk_0x7C7787D2D7139A85(), 1, 0) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_509(1) || func_507(1)) || Global_22211.f_124) || Global_22211)
	{
		return 0;
	}
	if (unk_0xCD97B9861557C025())
	{
		return 0;
	}
	if (func_506() && Global_1695601 == 2)
	{
		return 0;
	}
	if (func_16(unk_0x7C7787D2D7139A85()) && !func_506())
	{
		return 0;
	}
	if (Global_1662552)
	{
		return 0;
	}
	if (Global_1662557)
	{
		return 0;
	}
	if (func_206(0))
	{
		return 0;
	}
	if (unk_0xA2BC31158C8CEFD2(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_273.f_24, 4))
	{
		return 0;
	}
	if (Global_1366560)
	{
		return 0;
	}
	if ((Global_1688874.f_705.f_5 || Global_1691685.f_705.f_5) || Global_1687917.f_705.f_5)
	{
		return 0;
	}
	if ((Global_1696566.f_711.f_5 || Global_1696566.f_731.f_711.f_5) || Global_1696566.f_1469.f_711.f_5)
	{
		return 0;
	}
	if (func_505(unk_0x7C7787D2D7139A85()))
	{
		return 0;
	}
	if ((Global_1366595 || Global_1366596) || Global_1366597)
	{
		return 0;
	}
	return 1;
}

bool func_505(int iParam0)
{
	if (iParam0 == func_10())
	{
		return 0;
	}
	return unk_0xA2BC31158C8CEFD2(Global_2424073[iParam0 /*421*/].f_309.f_4, 6);
}

bool func_506()
{
	return (unk_0xA2BC31158C8CEFD2(Global_4456448.f_30, 12) && unk_0xA2BC31158C8CEFD2(Global_1695602, 0));
}

int func_507(bool bParam0)
{
	if (unk_0x8F0856319BE615A3())
	{
		if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
		{
			if (func_508(unk_0x0FA8183DAD2B3203()))
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

int func_508(int iParam0)
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

bool func_509(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

bool func_510(int iParam0, int iParam1)
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

int func_511()
{
	if (func_512())
	{
		return 1;
	}
	if (unk_0x260395BA7F0C83CB())
	{
		return 0;
	}
	if (unk_0xA710300CD13D2877() || unk_0xC862E94A8ABC89B8())
	{
		return 0;
	}
	if (unk_0x75EBF5007DD359C9())
	{
		return 0;
	}
	return 1;
}

bool func_512()
{
	return Global_1312439;
}

bool func_513()
{
	return unk_0x9B35D07DCD0F0B43() <= Global_22350.f_5878 + 100;
}

int func_514()
{
	return Global_1373500.f_68;
}

int func_515()
{
	if (Global_1574183 > 16)
	{
		return 1;
	}
	return 0;
}

float func_516()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x7BC897FD6110BBB4()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_517(int iParam0)
{
	switch (iParam0)
	{
		case 20:
		case 26:
		case 27:
		case 39:
			return 1;
		
		default:
	}
	return 0;
}

int func_518()
{
	if (func_519(unk_0x7C7787D2D7139A85()))
	{
		return Global_1319097;
	}
	return 0;
}

int func_519(int iParam0)
{
	if (unk_0x393E9918BC37548A())
	{
		if (func_18(iParam0, 0))
		{
			return unk_0xC0E0C265EFDEC931(iParam0);
		}
	}
	return 0;
}

int func_520()
{
	if (func_518())
	{
		return 1;
	}
	if (func_459(unk_0x7C7787D2D7139A85()))
	{
		return 0;
	}
	if (func_490())
	{
		return 1;
	}
	if (func_433(unk_0x7C7787D2D7139A85()))
	{
		switch (func_431(unk_0x7C7787D2D7139A85()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return 1;
				break;
			
			case 140:
				if (!func_521(unk_0x7C7787D2D7139A85()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_521(unk_0x7C7787D2D7139A85()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_521(unk_0x7C7787D2D7139A85()))
				{
					return 1;
				}
				break;
			
			case 175:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_521(int iParam0)
{
	return unk_0xA2BC31158C8CEFD2(Global_1628955[iParam0 /*614*/].f_1, 4);
}

int func_522(int iParam0)
{
	if (iParam0 == 27)
	{
		if ((func_433(unk_0x7C7787D2D7139A85()) && !func_123(unk_0x7C7787D2D7139A85())) && !func_429(unk_0x7C7787D2D7139A85(), 236))
		{
			return 1;
		}
	}
	if (iParam0 == 26)
	{
		if (func_32(unk_0x7C7787D2D7139A85(), 0) && func_123(unk_0x7C7787D2D7139A85()))
		{
			return 1;
		}
		if (func_523(unk_0x7C7787D2D7139A85()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_523(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	bool bVar4;
	
	iVar0 = 2;
	bVar1 = ((func_433(iParam0) && !func_461(iParam0)) && !unk_0xA2BC31158C8CEFD2(Global_1628955[iParam0 /*614*/].f_1, 8));
	bVar2 = func_123(iParam0);
	uVar3 = func_25();
	bVar4 = func_303();
	if ((bVar1 && (func_430(iParam0) || func_525(iParam0))) || bVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_34(iParam0)) && !func_524(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2531497.f_4898.f_214 != iVar0)
	{
		Global_2531497.f_4898.f_214 = iVar0;
	}
	return iVar0;
}

bool func_524(int iParam0)
{
	return func_35(iParam0, 19);
}

int func_525(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xA2BC31158C8CEFD2(Global_1628955[iVar0 /*614*/].f_1, 0);
	}
	return 0;
}

void func_526()
{
	if (func_9(func_36(), 1, 1) && !unk_0xF4B969E0807E76C7(unk_0x23625FE58BACEBFD(func_36()), 0))
	{
		func_527(151, unk_0xACE5E491FC1B0D37(unk_0x23625FE58BACEBFD(func_36()), 1), &uLocal_113, 1140457472, 1144750080, 0);
	}
}

void func_527(int iParam0, struct<3> Param1, var uParam4, float fParam5, float fParam6, int iParam7)
{
	float fVar0;
	float fVar1;
	
	if ((((func_433(unk_0x7C7787D2D7139A85()) && !func_461(unk_0x7C7787D2D7139A85())) && !unk_0xA2BC31158C8CEFD2(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_1, 8)) && (func_430(unk_0x7C7787D2D7139A85()) || func_525(unk_0x7C7787D2D7139A85()))) || func_569(Param1))
	{
		return;
	}
	Global_1674852 = { Param1 };
	fVar0 = unk_0x2A488C176D52CCA5(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 0), Param1);
	func_565(iParam0, fVar0);
	if (unk_0xCD97B9861557C025() && unk_0x097FC2B62E383500() == 15)
	{
		if (func_34(unk_0x7C7787D2D7139A85()) || func_33(unk_0x7C7787D2D7139A85()))
		{
			if (!unk_0xCE5F730CE5D2B3B2(1344549371))
			{
				unk_0x339AECE514362B5F(1344549371);
			}
		}
		else if (unk_0xCE5F730CE5D2B3B2(1344549371))
		{
			unk_0x545AD6392BF558B6(1344549371);
		}
	}
	if (fVar0 < fParam5)
	{
		if (!(func_21(unk_0x7C7787D2D7139A85(), 21) || func_21(unk_0x7C7787D2D7139A85(), 25)))
		{
			func_564(Param1, 1, 0);
		}
		if (!*uParam4 && func_9(unk_0x7C7787D2D7139A85(), 1, 1))
		{
			*uParam4 = 1;
			if (func_563(iParam0))
			{
				unk_0xB7F4DA52DE3AAF24(func_562(iParam0));
				if (func_561(iParam0, -1))
				{
					unk_0x60F310C72311BCA8(0);
					if (unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()) > 0)
					{
						unk_0x31EBACD75CD1F9EC(unk_0x7C7787D2D7139A85(), 0, 1);
						unk_0xF1E958D9BB4D1EF6(unk_0x7C7787D2D7139A85(), 1);
					}
					unk_0xA1E7A40E1F56E511(&(Global_1674852.f_3), 0);
				}
			}
			if (func_560(iParam0))
			{
				fVar1 = func_559(iParam0);
				if (fVar1 != 1f)
				{
					func_555(fVar1);
					unk_0xA1E7A40E1F56E511(&(Global_1674852.f_3), 1);
				}
			}
			if (!Global_2391045)
			{
				if (func_554(iParam0) && func_34(unk_0x7C7787D2D7139A85()))
				{
					func_552(1);
					func_551(2);
				}
			}
			func_304(19);
		}
	}
	else
	{
		if (fVar0 > fParam6)
		{
			if (func_35(unk_0x7C7787D2D7139A85(), 19))
			{
				func_306(19);
			}
		}
		if (*uParam4 && func_9(unk_0x7C7787D2D7139A85(), 1, 1))
		{
			*uParam4 = 0;
			if (func_563(iParam0))
			{
				if (unk_0xA2BC31158C8CEFD2(Global_1674852.f_3, 0))
				{
					unk_0xB7F4DA52DE3AAF24(1f);
					unk_0x60F310C72311BCA8(5);
					unk_0x3B76114EC84D5812(&(Global_1674852.f_3), 0);
				}
			}
			if (func_560(iParam0))
			{
				func_550();
				unk_0x3B76114EC84D5812(&(Global_1674852.f_3), 1);
			}
			if (iParam7 && !func_433(unk_0x7C7787D2D7139A85()))
			{
				if (func_31(unk_0x7C7787D2D7139A85()) != 152)
				{
					func_529();
				}
			}
			if (func_206(2))
			{
				func_552(0);
				func_528(2);
			}
		}
	}
}

void func_528(int iParam0)
{
	unk_0x3B76114EC84D5812(&(Global_2531497.f_4898.f_43), iParam0);
}

void func_529()
{
	unk_0xD3DFD1F239A937DB(&(Global_2405071.f_24), &Global_2409324, 2);
	unk_0xD3DFD1F239A937DB(&(Global_2405071.f_26), &Global_2409326, 19);
	func_548();
	func_532(1, 1, 0);
	func_530();
}

void func_530()
{
	func_531(0, 0);
}

void func_531(int iParam0, int iParam1)
{
	Global_2405071.f_22 = iParam0;
	Global_2405071.f_23 = iParam1;
}

void func_532(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		unk_0xD3DFD1F239A937DB(&(Global_2405071.f_45), &Global_2409345, 318);
	}
	else
	{
		Global_2405071.f_45 = { Global_2409345 };
		Global_2405071.f_45.f_49 = { Global_2409345.f_49 };
		Global_2405071.f_45.f_52 = Global_2409345.f_52;
		Global_2405071.f_45.f_53 = Global_2409345.f_53;
	}
	if (bParam0)
	{
		func_547();
	}
	if (!bParam2)
	{
		func_535(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	func_534(0);
	func_533();
}

void func_533()
{
	struct<6> Var0;
	
	if (Global_2405071.f_485.f_1 == unk_0x429EE9FF15BB9033())
	{
		Global_2405071.f_485 = { Var0 };
	}
}

void func_534(bool bParam0)
{
	if (bParam0)
	{
		Global_2405071.f_703 = 0;
	}
	else
	{
		Global_2405071.f_703 = 1;
	}
}

void func_535(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (bParam0)
	{
		if (func_546())
		{
			func_545();
		}
		Global_2405071.f_704.f_518 = unk_0x429EE9FF15BB9033();
		Global_2405071.f_704.f_504 = iParam1;
		Global_2405071.f_704.f_505 = iParam2;
		Global_2405071.f_704.f_506 = iParam10;
		func_543();
		func_539(8, 0, 0, 0, 0);
		Global_2405071.f_704.f_507 = iParam11;
		Global_2405071.f_704.f_512 = iParam3;
		Global_2405071.f_704.f_513 = iParam4;
		Global_2405071.f_704.f_510 = iParam5;
		Global_2405071.f_704.f_511 = iParam6;
		Global_2405071.f_704.f_514 = iParam7;
		Global_2405071.f_704.f_515 = iParam8;
		Global_2405071.f_704.f_516 = iParam9;
		Global_2405071.f_704.f_517 = iParam14;
		Global_2405071.f_704.f_508 = iParam12;
		Global_2405071.f_704.f_509 = iParam13;
		Global_2405071.f_1743 = 1;
	}
	else
	{
		func_536();
	}
}

void func_536()
{
	if (func_546() && !func_538())
	{
		func_545();
	}
	if (func_538())
	{
		func_537();
	}
	else
	{
		func_543();
		func_539(0, 0, 0, 0, 0);
		Global_2405071.f_1743 = 0;
		Global_2405071.f_1742 = 0;
	}
}

void func_537()
{
	unk_0xD3DFD1F239A937DB(&(Global_2405071.f_704), &(Global_2405071.f_1223), 519);
	Global_2405071.f_485 = { Global_2405071.f_491 };
	if (unk_0x429EE9FF15BB9033() == Global_2405071.f_704.f_518)
	{
		Global_2405071.f_1742 = 0;
	}
}

int func_538()
{
	if ((Global_2405071.f_1742 && !unk_0x429EE9FF15BB9033() == Global_2405071.f_1223.f_518) && unk_0xAB2A82A2838B61B7(Global_2405071.f_1223.f_518))
	{
		return 1;
	}
	return 0;
}

void func_539(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2437549.f_1893.f_690.f_16 != func_10())
	{
		if (unk_0xA2BC31158C8CEFD2(Global_2424073[Global_2437549.f_1893.f_690.f_16 /*421*/].f_402, 0) && func_540())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2412637 = 0;
	}
	Global_2405071.f_485 = iParam0;
	Global_2405071.f_485.f_1 = unk_0x429EE9FF15BB9033();
	Global_2405071.f_485.f_2 = iParam1;
	Global_2405071.f_485.f_3 = iParam2;
	Global_2405071.f_485.f_4 = iParam3;
	Global_2405071.f_485.f_5 = iParam4;
}

int func_540()
{
	if (((((func_31(unk_0x7C7787D2D7139A85()) == 229 || func_31(unk_0x7C7787D2D7139A85()) == 191) || func_542()) || func_541()) || func_354(unk_0x7C7787D2D7139A85())) || Global_2508349.f_226 == 1)
	{
		return 0;
	}
	return 1;
}

var func_541()
{
	return Global_1574402;
}

int func_542()
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

void func_543()
{
	if (func_546() && !func_538())
	{
		func_545();
	}
	func_544();
	Global_2405071.f_704 = 0;
}

void func_544()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2405071.f_704.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_545()
{
	if (func_538())
	{
		if (Global_2405071.f_704.f_518 == Global_2405071.f_1223.f_518)
		{
			return;
		}
	}
	if (!unk_0x429EE9FF15BB9033() == Global_2405071.f_704.f_518)
	{
		unk_0xD3DFD1F239A937DB(&(Global_2405071.f_1223), &(Global_2405071.f_704), 519);
		Global_2405071.f_491 = { Global_2405071.f_485 };
		Global_2405071.f_1742 = 1;
	}
}

int func_546()
{
	if ((Global_2405071.f_1743 && !unk_0x429EE9FF15BB9033() == Global_2405071.f_704.f_518) && unk_0xAB2A82A2838B61B7(Global_2405071.f_704.f_518))
	{
		return 1;
	}
	return 0;
}

void func_547()
{
	unk_0xD3DFD1F239A937DB(&(Global_2405071.f_363), &Global_2409663, 121);
}

void func_548()
{
	func_549();
	Global_2405071.f_2252 = 0;
}

void func_549()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2405071.f_2253[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

void func_550()
{
	if (unk_0xAB2A82A2838B61B7(Global_2531497.f_4894))
	{
		if (!Global_2531497.f_4894 == unk_0x429EE9FF15BB9033() && Global_2531497.f_4893 < 1f)
		{
			return;
		}
	}
	Global_2531497.f_4894 = -1;
	Global_2531497.f_4893 = 1f;
}

void func_551(int iParam0)
{
	unk_0xA1E7A40E1F56E511(&(Global_2531497.f_4898.f_43), iParam0);
}

void func_552(int iParam0)
{
	if (func_553() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2391045)
	{
		return;
	}
	Global_2391045 = iParam0;
	Global_2391047 = 0;
	Global_2391048 = 0;
}

int func_553()
{
	if ((((Global_968397 != -1 && Global_968397 != 33) && Global_968397 != 35) && Global_968397 != 37) && Global_968397 != 21)
	{
		return 1;
	}
	return 0;
}

int func_554(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 159:
		case 148:
		case 157:
		case 166:
		case 179:
		case 189:
		case 193:
		case 198:
		case 205:
			return 1;
		
		default:
	}
	return 0;
}

void func_555(float fParam0)
{
	float fVar0;
	
	if (unk_0xA8C462EF7D9DC564(unk_0x0037AFCBDC61F351()) == func_556())
	{
		return;
	}
	fVar0 = (Global_2531497.f_4893 - fParam0);
	if (unk_0xAB2A82A2838B61B7(Global_2531497.f_4894))
	{
		if (!Global_2531497.f_4894 == unk_0x429EE9FF15BB9033() && unk_0x01CBD71E072E9F33(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2531497.f_4893 = fParam0;
	Global_2531497.f_4894 = unk_0x429EE9FF15BB9033();
}

int func_556()
{
	switch (func_558())
	{
		case 0:
			return func_557();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_557()
{
	switch (Global_2461343)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_558()
{
	return Global_30736;
}

float func_559(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 157:
		case 159:
		case 151:
		case 148:
		case 164:
		case 152:
		case 153:
		case 154:
		case 155:
		case 160:
		case 162:
		case 166:
		case 173:
		case 169:
		case 167:
		case 168:
		case 170:
		case 178:
		case 179:
		case 189:
		case 180:
		case 182:
		case 183:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 199:
		case 201:
		case 185:
		case 197:
		case 186:
		case 198:
		case 195:
		case 205:
		case 207:
		case 208:
		case 209:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
		case 243:
		case 158:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_560(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 164:
		case 151:
		case 170:
		case 169:
		case 201:
		case 191:
		case 198:
		case 180:
		case 200:
		case 208:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_561(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 148:
		case 164:
		case 152:
		case 153:
		case 160:
			return 1;
		
		case 168:
			if ((iParam1 != 2 && iParam1 != 10) && iParam1 != 7)
			{
				return 1;
			}
			break;
		
		case 170:
		case 166:
		case 173:
			return 1;
		
		case 179:
		case 183:
		case 189:
		case 191:
		case 192:
		case 193:
		case 194:
		case 186:
		case 199:
		case 185:
		case 201:
		case 198:
		case 195:
		case 180:
		case 207:
		case 208:
		case 209:
		case 210:
		case 214:
		case 217:
		case 218:
		case 215:
		case 216:
		case 219:
		case 220:
		case 221:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
		case 227:
			return 1;
		
		case 190:
			if (((iParam1 != 6 && iParam1 != 9) && iParam1 != 7) && iParam1 != 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

float func_562(int iParam0)
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 0f;
		
		case 144:
			return 0f;
		
		case 185:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_563(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 142:
		case 164:
		case 151:
		case 160:
		case 166:
		case 173:
		case 183:
		case 185:
		case 197:
		case 186:
		case 201:
		case 191:
		case 198:
		case 207:
		case 208:
		case 209:
		case 200:
		case 195:
		case 180:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

void func_564(struct<3> Param0, int iParam3, int iParam4)
{
	Global_2405071.f_45.f_49 = { Param0 };
	Global_2405071.f_45.f_52 = iParam3;
	Global_2405071.f_45.f_53 = iParam4;
}

void func_565(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = func_568(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_566();
	}
}

void func_566()
{
	if (!func_567(unk_0x7C7787D2D7139A85()))
	{
		func_304(25);
	}
}

bool func_567(int iParam0)
{
	return func_35(iParam0, 25);
}

int func_568(int iParam0)
{
	switch (iParam0)
	{
		case 152:
			return Global_262145.f_12522;
		
		case 142:
			return Global_262145.f_12510;
		
		case 157:
			return Global_262145.f_12477;
		
		case 159:
			return Global_262145.f_12460;
		
		case 162:
			return Global_262145.f_12571;
		
		case 173:
			return 100;
		
		case 170:
			return 100;
		
		default:
	}
	return -1;
}

int func_569(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_570()
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
				func_571(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_571(int iParam0)
{
	struct<4> Var0;
	
	if (unk_0x3C1EC42A2CC175C5(1, iParam0, &Var0, 11))
	{
		if ((unk_0xD4B321D9096B01FC(Var0.f_0) && unk_0x4625051E51BA911B(Var0.f_0)) && unk_0x3D464779B732760F(Var0.f_0) == unk_0x23625FE58BACEBFD(func_36()))
		{
			if (Var0.f_3)
			{
				if (unk_0xD4B321D9096B01FC(Var0.f_1) && unk_0x4625051E51BA911B(Var0.f_1))
				{
					if (unk_0x3D464779B732760F(Var0.f_1) == unk_0x0FA8183DAD2B3203())
					{
						unk_0xA1E7A40E1F56E511(&(Local_125[unk_0x2E40EEA43EF34BD6() /*4*/].f_1), 1);
					}
				}
			}
		}
	}
}

void func_572()
{
	if (!unk_0xA2BC31158C8CEFD2(iLocal_112, 3))
	{
		if (func_9(func_36(), 1, 1) && unk_0xD56C8C2B75BF9665(func_36()))
		{
			func_589(func_36(), func_590(6), 1, 0);
			func_587(func_36(), 432, 1, 0);
			func_585(func_36(), 1, 1, 0);
			func_584(func_36(), Global_262145.f_12355, 1, 0);
			func_581(func_36(), 1, 0);
			if (func_41() <= 1)
			{
				func_573(func_36(), 1, 7000);
			}
			unk_0xA1E7A40E1F56E511(&iLocal_112, 3);
		}
	}
}

void func_573(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_10())
	{
		return;
	}
	if (iParam2 > 200000)
	{
		iParam2 = 200000;
	}
	iVar0 = iParam0;
	if (bParam1)
	{
		if (iParam0 == Global_2437549)
		{
		}
		else if (unk_0x39A01A052D9B5FF0(Global_2416074[iVar0]))
		{
			unk_0xA1E7A40E1F56E511(&(Global_2416074.f_370), iVar0);
			unk_0x3B76114EC84D5812(&(Global_2416074.f_375), iVar0);
			unk_0x6B29681A8280DB75(Global_2416074[iVar0], 1);
			unk_0xE22C571D7E2EB838(Global_2416074[iVar0], 250);
			func_574(iParam0);
			if (iParam2 < 0)
			{
				unk_0xA1E7A40E1F56E511(&(Global_2416074.f_375), iVar0);
			}
			else
			{
				Global_2416074.f_201[iVar0] = unk_0x067A0219B2815DA1(unk_0x169A8AC9F93C2727(), iParam2);
			}
		}
		else
		{
			unk_0xA1E7A40E1F56E511(&(Global_2416074.f_370), iVar0);
			unk_0x3B76114EC84D5812(&(Global_2416074.f_375), iVar0);
			if (iParam2 < 0)
			{
				unk_0xA1E7A40E1F56E511(&(Global_2416074.f_375), iVar0);
			}
			else
			{
				Global_2416074.f_201[iVar0] = unk_0x067A0219B2815DA1(unk_0x169A8AC9F93C2727(), iParam2);
			}
		}
	}
	if (!bParam1)
	{
		unk_0x3B76114EC84D5812(&(Global_2416074.f_370), iVar0);
		unk_0x3B76114EC84D5812(&(Global_2416074.f_375), iVar0);
		if (unk_0x39A01A052D9B5FF0(Global_2416074[iVar0]))
		{
			func_574(iParam0);
			unk_0x6B29681A8280DB75(Global_2416074[iVar0], 0);
		}
	}
}

void func_574(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (func_9(iParam0, 0, 1))
	{
		if (unk_0x39A01A052D9B5FF0(Global_2416074[iVar0]))
		{
			Global_2416074.f_1402[iVar0] = func_575(iParam0);
			unk_0x6089156CDC87FE4B(Global_2416074[iVar0], Global_2416074.f_1402[iVar0]);
		}
	}
}

int func_575(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (func_9(iParam0, 0, 1))
	{
		if (unk_0x39A01A052D9B5FF0(Global_2416074[iVar0]))
		{
			iVar1 = unk_0xA00B598603DFF426(Global_2416074[iVar0]);
			if (unk_0xA2BC31158C8CEFD2(Global_2416074.f_386, iVar0) || unk_0xA2BC31158C8CEFD2(Global_2416074.f_385, iVar0))
			{
				return 1;
			}
			else if ((unk_0xA2BC31158C8CEFD2(Global_2416074.f_371, iVar0) || unk_0xA2BC31158C8CEFD2(Global_2416074.f_370, iVar0)) || unk_0xA2BC31158C8CEFD2(Global_2416074.f_388, iVar0))
			{
				return func_578(10);
			}
			else
			{
				switch (iVar1)
				{
					case 253:
					case 252:
					case 255:
						return func_578(7);
						break;
					
					case 257:
					case 258:
					case 259:
					case 260:
					case 261:
						return func_578(11);
						break;
					
					case 254:
						if (unk_0xC69A85EEB9CA3B95(iParam0) == unk_0xC69A85EEB9CA3B95(Global_2437549))
						{
							return func_578(6);
						}
						else
						{
							return func_578(5);
						}
						break;
					
					case 271:
						if (unk_0xC69A85EEB9CA3B95(iParam0) == unk_0xC69A85EEB9CA3B95(Global_2437549))
						{
							return func_578(6);
						}
						else
						{
							return func_578(5);
						}
						break;
					
					case 163:
					case 164:
						if (func_77(Global_2437549, iParam0, -2, 0))
						{
							return func_578(6);
						}
						else
						{
							return func_578(5);
						}
						break;
					
					case 303:
					case 418:
						return func_578(10);
						break;
					
					case 364:
						if (func_576(Global_2437549, iParam0, 1))
						{
							return func_578(10);
						}
						else
						{
							return func_578(5);
						}
						break;
					
					case 478:
					case 501:
					case 523:
					case 556:
						return func_578(10);
						break;
					
					case 417:
						if ((func_363(iParam0) || func_386(iParam0)) || func_385(iParam0))
						{
							if (func_576(Global_2437549, iParam0, 1))
							{
								return 3;
							}
							else
							{
								return 4;
							}
						}
						else if (func_576(Global_2437549, iParam0, 1))
						{
							return func_578(6);
						}
						else
						{
							return func_578(5);
						}
						break;
					
					case 256:
					case 268:
					default:
						if (func_576(Global_2437549, iParam0, 1))
						{
							return func_578(6);
						}
						else
						{
							return func_578(5);
						}
						break;
					}
				}
			}
	}
	return 1;
}

int func_576(int iParam0, int iParam1, bool bParam2)
{
	if (func_62(iParam0, -2, 0, 0, 0) == func_62(iParam1, -2, 0, 0, 0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (func_577(func_62(iParam0, -2, 0, 0, 0)) && func_577(func_62(iParam1, -2, 0, 0, 0)))
		{
			return 1;
		}
	}
	return 0;
}

int func_577(int iParam0)
{
	if (iParam0 == func_68(1) || iParam0 == func_68(0))
	{
		return 1;
	}
	return 0;
}

int func_578(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 6:
			if (func_580())
			{
				if (iParam0 == 5)
				{
					iParam0 = 6;
				}
				else
				{
					iParam0 = 5;
				}
			}
			break;
	}
	return func_579(iParam0);
}

int func_579(int iParam0)
{
	switch (iParam0)
	{
		case 10:
			return 9;
			break;
		
		case 5:
			return 8;
			break;
		
		case 6:
			return 7;
			break;
		
		case 8:
			return 6;
			break;
		
		case 7:
			return 4;
			break;
		
		case 4:
		case 11:
			return 2;
			break;
		
		case 0:
		case 2:
		case 3:
		case 9:
		case 1:
			return 1;
			break;
	}
	return 1;
}

int func_580()
{
	int iVar0;
	
	iVar0 = unk_0xC69A85EEB9CA3B95(Global_2437549);
	if (iVar0 > -1 && iVar0 < 4)
	{
		return unk_0xA2BC31158C8CEFD2(Global_4456448.f_106[iVar0 /*11610*/].f_6502, 4);
	}
	return 0;
}

void func_581(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (func_583(iParam0))
	{
		return;
	}
	func_582(&(Global_2416074.f_718[iParam0]), &(Global_2416074.f_1081[iParam0]), &(Global_2416074.f_393), bParam1, iParam0, bParam2, &uVar0);
}

int func_582(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4, bool bParam5, var uParam6)
{
	if (bParam5)
	{
		if (!unk_0xAB2A82A2838B61B7(*uParam1) || *uParam1 == unk_0x429EE9FF15BB9033())
		{
			*uParam1 = unk_0x429EE9FF15BB9033();
			*uParam0 = unk_0x429EE9FF15BB9033();
		}
	}
	if (!unk_0xAB2A82A2838B61B7(*uParam0) || *uParam0 == unk_0x429EE9FF15BB9033())
	{
		if (bParam3)
		{
			if (!unk_0xA2BC31158C8CEFD2(*uParam2, iParam4))
			{
				*uParam6 = 1;
				unk_0xA1E7A40E1F56E511(uParam2, iParam4);
			}
			*uParam0 = unk_0x429EE9FF15BB9033();
		}
		else
		{
			if (unk_0xA2BC31158C8CEFD2(*uParam2, iParam4))
			{
				*uParam6 = 1;
				unk_0x3B76114EC84D5812(uParam2, iParam4);
			}
			if (*uParam1 == unk_0x429EE9FF15BB9033())
			{
				*uParam1 = -1;
			}
			*uParam0 = -1;
		}
		return 1;
	}
	else if (unk_0xAB2A82A2838B61B7(*uParam1) && !*uParam1 == unk_0x429EE9FF15BB9033())
	{
	}
	return 0;
}

int func_583(int iParam0)
{
	if (iParam0 == func_10())
	{
		return 1;
	}
	if (unk_0xA8C462EF7D9DC564(unk_0x0037AFCBDC61F351()) == func_556())
	{
		return 1;
	}
	return 0;
}

void func_584(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_583(iParam0))
	{
		return;
	}
	if (func_582(&(Global_2416074.f_751[iParam0]), &(Global_2416074.f_1114[iParam0]), &(Global_2416074.f_392), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2416074.f_553[iParam0] = fParam1;
		}
	}
}

void func_585(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_583(iParam0))
	{
		return;
	}
	if (func_582(&(Global_2416074.f_817[iParam0]), &(Global_2416074.f_1180[iParam0]), &(Global_2416074.f_367), bParam1, iParam0, bParam3, &uVar0))
	{
		func_586(iParam0, bParam2);
	}
}

void func_586(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xA1E7A40E1F56E511(&(Global_2416074.f_368), iParam0);
	}
	else
	{
		unk_0x3B76114EC84D5812(&(Global_2416074.f_368), iParam0);
	}
	if (unk_0x39A01A052D9B5FF0(Global_2416074[iParam0]))
	{
		if (bParam1)
		{
			unk_0x7DC3DE7C6C190F99(Global_2416074[iParam0], 0);
		}
		else
		{
			unk_0x7DC3DE7C6C190F99(Global_2416074[iParam0], 1);
		}
	}
}

void func_587(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	
	if (func_583(iParam0))
	{
		return;
	}
	if (func_582(&(Global_2416074.f_586[iParam0]), &(Global_2416074.f_949[iParam0]), &(Global_2416074.f_388), bParam2, iParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_2416074.f_421[iParam0] = iParam1;
		}
		if (bVar0)
		{
			func_588();
		}
	}
}

void func_588()
{
	Global_2416074.f_1515 = 1;
}

void func_589(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_583(iParam0))
	{
		return;
	}
	if (func_582(&(Global_2416074.f_619[iParam0]), &(Global_2416074.f_982[iParam0]), &(Global_2416074.f_389), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2416074.f_454[iParam0] = uParam1;
		}
	}
}

int func_590(int iParam0)
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

void func_591()
{
	char* sVar0;
	
	if (func_352())
	{
		if (func_351())
		{
			func_344();
		}
		return;
	}
	sVar0 = "GBTER_KILL";
	if (func_6(unk_0x7C7787D2D7139A85(), 1))
	{
		sVar0 = "GBTER_B_KILL";
		if (Local_114.f_10)
		{
			sVar0 = "GBTER_AB_KILL";
		}
	}
	if (!func_598(sVar0))
	{
		func_592(sVar0, func_36(), 1, 0);
	}
}

void func_592(char* sParam0, int iParam1, int iParam2, bool bParam3)
{
	func_593(sParam0, unk_0xA09A99AC02B24954(iParam1), bParam3, 1);
}

int func_593(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	var uVar0;
	
	if (unk_0x9591DE0F00127F2A(sParam0))
	{
		return 0;
	}
	if (unk_0xB9A31E6892C3D2C2(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0x9591DE0F00127F2A(sParam1))
	{
		return 0;
	}
	if (unk_0xB9A31E6892C3D2C2(sParam1) > 63)
	{
		return 0;
	}
	if (func_597(sParam0, sParam1) && Global_1312585.f_56 == Global_1312585.f_58)
	{
		return 0;
	}
	uVar0 = Global_1312585.f_54;
	func_345();
	Global_1312585 = 9;
	StringCopy(&(Global_1312585.f_1), unk_0x0037AFCBDC61F351(), 32);
	Global_1312585.f_9 = unk_0xA8C462EF7D9DC564(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	StringCopy(&(Global_1312585.f_16), sParam1, 64);
	Global_1312585.f_58 = iParam3;
	Global_1312585.f_56 = iParam3;
	Global_1312585.f_54 = uVar0;
	func_596();
	func_595(bParam2);
	func_594();
	return 1;
}

void func_594()
{
	unk_0xA1E7A40E1F56E511(&(Global_1312585.f_59), 1);
}

void func_595(bool bParam0)
{
	if (bParam0)
	{
		unk_0xA1E7A40E1F56E511(&(Global_1312585.f_59), 0);
		return;
	}
	unk_0x3B76114EC84D5812(&(Global_1312585.f_59), 0);
}

void func_596()
{
	Global_1312585.f_10 = unk_0x067A0219B2815DA1(unk_0x169A8AC9F93C2727(), 86400000);
	Global_1312585.f_11 = unk_0x169A8AC9F93C2727();
}

bool func_597(char* sParam0, char* sParam1)
{
	if (!func_350())
	{
		return 0;
	}
	if (unk_0x9591DE0F00127F2A(uParam0))
	{
		return 0;
	}
	if (unk_0x9591DE0F00127F2A(uParam1))
	{
		return 0;
	}
	if (!unk_0xA8C462EF7D9DC564(sParam0) == unk_0xA8C462EF7D9DC564(&(Global_1312585.f_12)))
	{
		return 0;
	}
	return unk_0xA8C462EF7D9DC564(sParam1) == unk_0xA8C462EF7D9DC564(&(Global_1312585.f_16));
}

int func_598(char* sParam0)
{
	if (unk_0x9591DE0F00127F2A(sParam0))
	{
		return 0;
	}
	if (!func_350())
	{
		return 0;
	}
	if (Global_1312585 == 11)
	{
		if (unk_0xB9A31E6892C3D2C2(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (unk_0xB9A31E6892C3D2C2(sParam0) > 23)
	{
		return 0;
	}
	return func_599(sParam0);
}

bool func_599(char* sParam0)
{
	if (!func_350())
	{
		return 0;
	}
	if (Global_1312585 == 11)
	{
		return func_600(uParam0);
	}
	if (unk_0x9591DE0F00127F2A(uParam0))
	{
		return 0;
	}
	return unk_0xA8C462EF7D9DC564(sParam0) == unk_0xA8C462EF7D9DC564(&(Global_1312585.f_12));
}

bool func_600(char* sParam0)
{
	if (!func_350())
	{
		return 0;
	}
	if (unk_0x9591DE0F00127F2A(uParam0))
	{
		return 0;
	}
	return unk_0xA8C462EF7D9DC564(sParam0) == unk_0xA8C462EF7D9DC564(&(Global_1312585.f_16));
}

void func_601()
{
	int iVar0;
	int iVar1;
	char* sVar2;
	
	if (func_352())
	{
		return;
	}
	if (unk_0xA2BC31158C8CEFD2(Local_114.f_1, 0))
	{
		if (func_406(&(Local_114.f_4)))
		{
			iVar1 = (func_5() - func_606(&(Local_114.f_4), 0, 0));
			if (iVar1 > 30000)
			{
				iVar0 = 1;
			}
			else
			{
				iVar0 = 6;
			}
			iVar1 = func_605(iVar1, 0);
			sVar2 = "GB_WORK_END";
			if (func_6(unk_0x7C7787D2D7139A85(), 1))
			{
				sVar2 = "BK_TIME";
			}
			if (iVar1 > 0)
			{
				func_602(iVar1, sVar2, 0, 0, -1, 0, 3, 0, iVar0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
			else
			{
				func_602(0, sVar2, 0, 0, -1, 0, 3, 0, iVar0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
		}
	}
}

void func_602(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_604(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1375006.f_1 = 1;
		func_603(7, iVar0);
		Global_1375006.f_4453[iVar0] = iParam0;
		StringCopy(&(Global_1375006.f_4453.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1375006.f_4453.f_172[iVar0] = iParam2;
		Global_1375006.f_4453.f_216[iVar0] = iParam3;
		Global_1375006.f_4453.f_183[iVar0] = iParam4;
		Global_1375006.f_4453.f_194[iVar0] = iParam5;
		Global_1375006.f_4453.f_249[iVar0] = iParam6;
		Global_1375006.f_4453.f_260[iVar0] = iParam7;
		Global_1375006.f_4453.f_205[iVar0] = iParam8;
		Global_1375006.f_4453.f_314[iVar0] = iParam9;
		Global_1375006.f_4453.f_325[iVar0] = iParam10;
		Global_1375006.f_4453.f_357[iVar0] = iParam11;
		Global_1375006.f_4453.f_238[iVar0] = iParam12;
		Global_1375006.f_4453.f_271[iVar0] = iParam13;
		Global_1375006.f_4453.f_368[iVar0] = iParam14;
		Global_1375006.f_4453.f_379[iVar0] = iParam15;
		Global_1375006.f_4453.f_390[iVar0] = iParam16;
		Global_1375006.f_4453.f_227[iVar0] = iParam17;
	}
}

void func_603(int iParam0, int iParam1)
{
	unk_0xA1E7A40E1F56E511(&(Global_1375006.f_6184[iParam0]), iParam1);
}

bool func_604(int iParam0, int iParam1)
{
	return unk_0xA2BC31158C8CEFD2(Global_1375006.f_6184[iParam0], iParam1);
}

int func_605(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int func_606(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x393E9918BC37548A() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x675EE3FED67AA436(unk_0x169A8AC9F93C2727(), *uParam0);
		}
		else
		{
			return unk_0x675EE3FED67AA436(unk_0x50D85685589EFCBD(), *uParam0);
		}
	}
	return unk_0x675EE3FED67AA436(unk_0x9B35D07DCD0F0B43(), *uParam0);
}

void func_607()
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	
	if (func_352())
	{
		return;
	}
	if (unk_0x7C7787D2D7139A85() != func_59())
	{
		if (unk_0xA2BC31158C8CEFD2(iLocal_112, 0))
		{
			if (!func_343())
			{
				sVar0 = "GBTER_START";
				if (func_6(unk_0x7C7787D2D7139A85(), 1))
				{
					sVar0 = "GBTER_BSTART";
					if (Local_114.f_10)
					{
						sVar0 = "GBTER_AB_START";
					}
				}
				func_609(sVar0, unk_0xA09A99AC02B24954(func_36()), 0, -1);
				func_608(1);
				unk_0xA1E7A40E1F56E511(&iLocal_112, 2);
			}
		}
		else
		{
			sVar1 = "GBTER_BIG";
			sVar2 = "GBTER_BIG_GS";
			if (func_6(unk_0x7C7787D2D7139A85(), 1))
			{
				sVar1 = "GBTER_B_BIG";
				sVar2 = "GBTER_B_SS";
				if (Local_114.f_10)
				{
					sVar1 = "GBTER_B_BIG";
					sVar2 = "GBTER_AB_SS";
				}
			}
			func_342();
			func_333(86, func_36(), -1, sVar2, sVar1, 1, -1, 2, 0);
			unk_0xA1E7A40E1F56E511(&(Local_125[unk_0x2E40EEA43EF34BD6() /*4*/].f_1), 0);
		}
	}
	else if (unk_0xA2BC31158C8CEFD2(iLocal_112, 0))
	{
		if (!func_343())
		{
			sVar3 = "GBTER_BOSS";
			if (func_6(unk_0x7C7787D2D7139A85(), 1))
			{
				sVar3 = "GBTER_BBOSS";
				if (Local_114.f_10)
				{
					sVar3 = "GBTER_AB_BOSS";
				}
			}
			func_609(sVar3, unk_0xA09A99AC02B24954(func_36()), 0, -1);
			unk_0xA1E7A40E1F56E511(&iLocal_112, 2);
			func_608(1);
		}
	}
	else
	{
		sVar4 = "GBTER_BIG";
		sVar5 = "GBTER_BIG_GS";
		if (func_6(unk_0x7C7787D2D7139A85(), 1))
		{
			sVar4 = "GBTER_B_BIG";
			sVar5 = "GBTER_B_BSS";
			if (Local_114.f_10)
			{
				sVar4 = "GBTER_B_BIG";
				sVar5 = "GBTER_AB_SS";
			}
		}
		func_342();
		func_333(86, func_36(), -1, sVar5, sVar4, 1, -1, 2, 0);
		unk_0xA1E7A40E1F56E511(&(Local_125[unk_0x2E40EEA43EF34BD6() /*4*/].f_1), 0);
	}
	unk_0xA1E7A40E1F56E511(&iLocal_112, 0);
}

void func_608(int iParam0)
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_205(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_343())
	{
		unk_0x9964F5BBD9415AB7(-1, "Boss_Message_Orange", sVar0, 0);
	}
}

void func_609(char* sParam0, var uParam1, int iParam2, int iParam3)
{
	unk_0xD95C12E1062B7D5E(sParam0);
	if (!iParam2 == 0)
	{
		unk_0xEB6F6B8EBD6B6648(iParam2);
	}
	unk_0xA89C789CC9FEF523(uParam1);
	unk_0x40DC0B0D5BD91E06(0, 0, 0, iParam3);
}

void func_610(int iParam0)
{
	Local_125[unk_0x2E40EEA43EF34BD6() /*4*/].f_2 = iParam0;
}

void func_611(bool bParam0)
{
	if (bParam0)
	{
		if (!func_35(unk_0x7C7787D2D7139A85(), 9))
		{
			if (func_523(unk_0x7C7787D2D7139A85()) != 0)
			{
				func_304(9);
			}
		}
	}
	else if (func_35(unk_0x7C7787D2D7139A85(), 9))
	{
		func_306(9);
	}
}

void func_612(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	float fVar0;
	
	if (Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_33 != iParam0)
	{
		func_626(-1);
		Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_33 = iParam0;
		if (func_625() != -1)
		{
			func_624(-1);
		}
		if (func_623() != -1)
		{
			func_622(-1);
		}
		func_621(iParam2);
		func_619(iParam0);
		if (!func_560(iParam0))
		{
			fVar0 = func_559(iParam0);
			if (fVar0 != 1f)
			{
				func_555(fVar0);
				unk_0xA1E7A40E1F56E511(&(Global_1674852.f_3), 1);
			}
		}
		if (!func_563(iParam0) || iParam3)
		{
			if (func_561(iParam0, iParam2) && iParam3 == 1)
			{
				unk_0x60F310C72311BCA8(0);
				if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
				{
					unk_0x31EBACD75CD1F9EC(unk_0x7C7787D2D7139A85(), 0, 0);
					unk_0xF1E958D9BB4D1EF6(unk_0x7C7787D2D7139A85(), 0);
				}
				unk_0xA1E7A40E1F56E511(&(Global_1674852.f_3), 0);
			}
			else if (unk_0xD13C2E5A700836D1() < 5)
			{
				unk_0xB7F4DA52DE3AAF24(1f);
				unk_0x60F310C72311BCA8(5);
			}
		}
		if (func_25())
		{
			func_304(27);
		}
		if (bParam1)
		{
			if (!func_303())
			{
				func_552(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((unk_0xA2BC31158C8CEFD2(Global_2531497.f_4555, 1) || unk_0xA2BC31158C8CEFD2(Global_2531497.f_4555, 4)) || unk_0xA2BC31158C8CEFD2(Global_2531497.f_4555, 0))
			{
				func_92(6);
			}
			func_618();
		}
		if (((iParam0 == 164 || iParam0 == 208) || iParam0 == 250) || iParam0 == 237)
		{
			unk_0x31A175F9EC8E421C(3, 0);
			unk_0x31A175F9EC8E421C(5, 0);
		}
		if (func_433(unk_0x7C7787D2D7139A85()) && func_34(unk_0x7C7787D2D7139A85()))
		{
			unk_0xA1E7A40E1F56E511(&(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_1), 8);
		}
		func_614();
		if (func_613(iParam0))
		{
			unk_0x31A175F9EC8E421C(3, 0);
			unk_0x31A175F9EC8E421C(5, 0);
			unk_0xA1E7A40E1F56E511(&(Global_1674852.f_3), 6);
		}
		Global_2531497.f_6307 = 0;
	}
}

int func_613(int iParam0)
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
			return 1;
		
		default:
	}
	return 0;
}

void func_614()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	uVar3 = func_617();
	iVar2 = func_26(unk_0x7C7787D2D7139A85());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x0C98179F08C6DA4F(iVar0);
		if (unk_0xD56C8C2B75BF9665(iVar1))
		{
			if (func_47(iVar1, iVar2, 1) || func_615(iVar1, unk_0x7C7787D2D7139A85()))
			{
				unk_0xC732CE96035B57B9(unk_0x7C7787D2D7139A85(), iVar1, uVar3);
				unk_0xC732CE96035B57B9(iVar1, unk_0x7C7787D2D7139A85(), uVar3);
			}
		}
		iVar0++;
	}
}

int func_615(int iParam0, int iParam1)
{
	if (func_27(iParam0, 1) && func_27(iParam1, 1))
	{
		return (func_616(iParam0) == func_26(iParam1) || func_616(iParam1) == func_26(iParam0));
	}
	return 0;
}

int func_616(int iParam0)
{
	if (func_27(iParam0, 1))
	{
		return Global_1628955[func_26(iParam0) /*614*/].f_11.f_484;
	}
	return func_10();
}

int func_617()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_11();
	if (iVar0 != func_10())
	{
		if (func_9(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				return unk_0xA2BC31158C8CEFD2(Global_1628955[iVar1 /*614*/].f_1, 16);
			}
		}
	}
	return 0;
}

void func_618()
{
	if (unk_0xA2BC31158C8CEFD2(Global_2531497.f_4555, 1))
	{
		unk_0x3B76114EC84D5812(&(Global_2531497.f_4555), 1);
	}
	if (unk_0xA2BC31158C8CEFD2(Global_2531497.f_4555, 4))
	{
		unk_0x3B76114EC84D5812(&(Global_2531497.f_4555), 4);
	}
	if (unk_0xA2BC31158C8CEFD2(Global_2531497.f_4555, 6))
	{
		unk_0x3B76114EC84D5812(&(Global_2531497.f_4555), 6);
	}
	unk_0x3B76114EC84D5812(&(Global_2531497.f_4555), 0);
	unk_0x3B76114EC84D5812(&(Global_2531497.f_4555), 2);
	Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_746 = 0;
	if (Global_2531497.f_4557 > 0)
	{
		unk_0x60F310C72311BCA8(Global_2531497.f_4557);
	}
	Global_2531497.f_4556 = 0;
}

void func_619(int iParam0)
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_118(3791, -1, 0);
	iVar1 = func_620(iParam0);
	if (iVar1 != -1)
	{
		unk_0xA1E7A40E1F56E511(&uVar0, iVar1);
		func_116(3791, uVar0, -1, 1, 0);
	}
}

int func_620(int iParam0)
{
	switch (iParam0)
	{
		case 170:
			return 0;
		
		case 166:
			return 1;
		
		case 171:
			return 2;
		
		case 172:
			return 3;
		
		case 173:
			return 4;
		
		case 214:
			return 5;
		
		case 215:
			return 6;
		
		case 216:
			return 7;
		
		case 217:
			return 8;
		
		case 218:
			return 9;
		
		case 219:
			return 10;
		
		case 220:
			return 11;
		
		case 221:
			return 12;
		
		default:
	}
	return -1;
}

void func_621(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x7C7787D2D7139A85();
	if (Global_1628955[iVar0 /*614*/].f_11.f_181 != iParam0)
	{
		Global_1628955[iVar0 /*614*/].f_11.f_181 = iParam0;
	}
}

void func_622(int iParam0)
{
	if (Global_2531497.f_4898.f_338 != iParam0)
	{
		Global_2531497.f_4898.f_338 = iParam0;
	}
}

int func_623()
{
	return Global_2531497.f_4898.f_338;
}

void func_624(int iParam0)
{
	if (Global_2531497.f_4898.f_337 != iParam0)
	{
		Global_2531497.f_4898.f_337 = iParam0;
	}
}

int func_625()
{
	return Global_2531497.f_4898.f_337;
}

void func_626(int iParam0)
{
	Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_32 = iParam0;
}

int func_627()
{
	return Local_125[unk_0x2E40EEA43EF34BD6() /*4*/].f_2;
}

int func_628()
{
	if (func_629(151) || func_303())
	{
		return 1;
	}
	return 0;
}

int func_629(int iParam0)
{
	if (!func_135() && !func_27(unk_0x7C7787D2D7139A85(), 1))
	{
		if (!func_34(unk_0x7C7787D2D7139A85()))
		{
			if (func_303())
			{
				return 1;
			}
		}
	}
	switch (iParam0)
	{
		case 148:
			break;
		
		case 151:
			break;
		
		case 152:
			break;
	}
	return 0;
}

void func_630(int iParam0, int iParam1)
{
	Local_125[iParam0 /*4*/] = iParam1;
}

int func_631()
{
	return 1;
}

int func_632()
{
	return Local_114.f_0;
}

int func_633(int iParam0)
{
	return Local_125[iParam0 /*4*/];
}

int func_634()
{
	var uVar0;
	
	func_639(&uVar0);
	if (Global_1312850 == 0)
	{
		if (!unk_0x393E9918BC37548A())
		{
			return 1;
		}
	}
	if (func_638())
	{
		return 1;
	}
	if (Global_2461241)
	{
		return 1;
	}
	if (func_637())
	{
		return 1;
	}
	if (func_636(159))
	{
		if (!func_635())
		{
			return 1;
		}
	}
	if (func_636(157))
	{
		return 1;
	}
	if (!unk_0x2A983C9CF4EE0D5E())
	{
		return 1;
	}
	if (func_556() != 0)
	{
		if (unk_0x222F76006659B0EB(func_556()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_635()
{
	return Global_2448961.f_598;
}

int func_636(int iParam0)
{
	if (unk_0xD076BFB919B20653(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_637()
{
	return Global_2458999;
}

bool func_638()
{
	return Global_2448961.f_593;
}

void func_639(var uParam0)
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
					func_640(iVar0);
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

void func_640(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x3C1EC42A2CC175C5(1, iParam0, &Var0, 3))
	{
		if (func_9(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x23625FE58BACEBFD(Var0.f_1);
			if (unk_0xD4B321D9096B01FC(uVar3))
			{
				if (unk_0x5294582CE404D3F4(iVar3, 0))
				{
					uVar4 = unk_0x4D57D3E5ECE15A41(iVar3, 0);
					if (unk_0x3D65AB2C3D476E32(uVar4, Var0.f_2) && unk_0xF77CF4BC35906B30())
					{
						if (func_641(uVar4, &bVar5))
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

int func_641(int iParam0, var uParam1)
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

void func_642()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_643()
{
	func_344();
	if (func_9(func_36(), 0, 1))
	{
		func_584(func_36(), 1f, 1, 0);
		func_44(func_45(func_36()), 0);
	}
	Global_1682177 = func_10();
	func_644(1, 0);
	unk_0x9C9E32388A7886A2();
}

void func_644(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_1363235.f_1.f_108 != 0)
	{
		Global_1363235.f_1.f_108 = 0;
	}
	Global_1363235.f_1.f_109 = -1;
	Global_1363235.f_1.f_110 = -1;
	if (Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_33 == 167 || Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_33 == 168)
	{
		func_698();
		unk_0x3B76114EC84D5812(&(Global_1674852.f_3), 4);
	}
	if ((func_121() && iParam1 != 0) && Global_262145.f_16969)
	{
		if (Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_33 == 190 || Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_33 == 192)
		{
			func_678(unk_0x7C7787D2D7139A85(), iParam1, 1, 0);
		}
	}
	if (((Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_33 == 164 || Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_33 == 208) || Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_33 == 250) || Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_33 == 237)
	{
		unk_0x31A175F9EC8E421C(3, 1);
		unk_0x31A175F9EC8E421C(5, 1);
	}
	if (Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_33 != -1)
	{
		Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_33 = -1;
		if (!unk_0xA2BC31158C8CEFD2(Global_1574647.f_1, 14) && !func_433(unk_0x7C7787D2D7139A85()))
		{
			func_552(0);
		}
	}
	else if (func_676(unk_0x7C7787D2D7139A85()) != -1)
	{
		func_626(-1);
	}
	func_675(func_10());
	if (func_206(16))
	{
		func_528(16);
	}
	func_672(0);
	func_621(-1);
	func_671();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_670(iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_667(iVar1);
		iVar1++;
	}
	if (unk_0xA2BC31158C8CEFD2(Global_1674852.f_3, 0))
	{
		unk_0xB7F4DA52DE3AAF24(1f);
		unk_0x60F310C72311BCA8(5);
		unk_0x3B76114EC84D5812(&(Global_1674852.f_3), 0);
	}
	if (unk_0xA2BC31158C8CEFD2(Global_1674852.f_3, 5))
	{
		unk_0x3B76114EC84D5812(&(Global_1674852.f_3), 5);
	}
	iVar2 = func_666();
	if ((func_465(iVar2) || iVar2 == 205) || iVar2 == 210)
	{
		func_665(-1);
	}
	else if (((iVar2 == 201 || iVar2 == 200) || iVar2 == 179) || func_120(iVar2))
	{
		func_662(-1, 1);
	}
	else if (((((func_661(iVar2) || func_660(iVar2)) || func_659(iVar2)) || func_108(iVar2)) || func_107(iVar2)) || func_106(iVar2))
	{
	}
	else
	{
		func_662(-1, 1);
	}
	func_306(19);
	func_306(20);
	func_306(21);
	func_306(22);
	func_306(27);
	func_528(3);
	func_528(4);
	func_528(7);
	func_658();
	if (func_34(unk_0x7C7787D2D7139A85()))
	{
		func_611(0);
	}
	func_306(29);
	Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_57 = func_10();
	if (Global_2531497.f_4898.f_39 != 0)
	{
		Global_2531497.f_4898.f_39 = 0;
	}
	if (bParam0)
	{
		func_529();
	}
	if (!func_433(unk_0x7C7787D2D7139A85()))
	{
		func_550();
		unk_0x3B76114EC84D5812(&(Global_1674852.f_3), 1);
	}
	if (unk_0xA2BC31158C8CEFD2(Global_1674852.f_3, 6))
	{
		unk_0x31A175F9EC8E421C(3, 1);
		unk_0x31A175F9EC8E421C(5, 1);
		unk_0x3B76114EC84D5812(&(Global_1674852.f_3), 6);
	}
	if (unk_0xA2BC31158C8CEFD2(Global_1674852.f_3, 7))
	{
		unk_0x3B76114EC84D5812(&(Global_1674852.f_3), 7);
	}
	if (unk_0xA2BC31158C8CEFD2(Global_1674852.f_3, 8))
	{
		func_657("IMPEXP_SELFDES", 0);
		func_647("IMPEXP_SELFDES");
		unk_0x3B76114EC84D5812(&(Global_1674852.f_3), 8);
	}
	func_645(iVar2, 0);
}

void func_645(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xA2BC31158C8CEFD2(Global_1674852.f_3, 9))
		{
			unk_0x7D17F1A2E0EEDBB9(func_646(iParam0));
			unk_0xA1E7A40E1F56E511(&(Global_1674852.f_3), 9);
		}
	}
	else if (unk_0xA2BC31158C8CEFD2(Global_1674852.f_3, 9))
	{
		unk_0x8E3496DF5BF7F24D(func_646(iParam0));
		unk_0x3B76114EC84D5812(&(Global_1674852.f_3), 9);
	}
}

char* func_646(int iParam0)
{
	switch (iParam0)
	{
		case 219:
			return "DLC_IE_VIP_Velocity_Vehicle_Scene";
		
		case 221:
			return "DLC_IE_VIP_Stockpiling_Vehicle_Scene";
		
		case 220:
			return "DLC_IE_VIP_Ramped_Up_Vehicle_Scene";
		
		case 214:
			return "DLC_IE_VIP_Plowed_Vehicle_Scene";
		
		case 217:
			return "DLC_IE_VIP_Transporter_Vehicle_Scene";
		
		case 218:
			return "DLC_IE_VIP_Fortified_Vehicle_Scene";
		
		case 215:
			return "DLC_IE_VIP_Fully_Loaded_Vehicle_Scene";
		
		case 216:
			return "DLC_IE_VIP_Amphibious_Assault_Vehicle_Scene";
		
		default:
	}
	return "";
}

void func_647(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0x79FCE4565761C974(&(Global_111560.f_14136[iVar0 /*104*/])))
		{
			if (unk_0x2553916E420E8EF0(&(Global_111560.f_14136[iVar0 /*104*/]), sParam0))
			{
				if (Global_111560.f_14136[iVar0 /*104*/].f_24 == 2)
				{
				}
				else
				{
					func_649();
					Global_111560.f_14136[iVar0 /*104*/].f_99[Global_19486] = 0;
					if (func_648(iVar0))
					{
					}
					else
					{
						Global_111560.f_14136[iVar0 /*104*/].f_24 = 0;
						Global_111560.f_14136[iVar0 /*104*/].f_28 = 0;
						Global_111560.f_14136[iVar0 /*104*/].f_29 = 0;
					}
					unk_0x351DF03E8250173C(Global_111560.f_14136[iVar0 /*104*/].f_16);
				}
			}
		}
		iVar0++;
	}
}

int func_648(int iParam0)
{
	if ((Global_111560.f_14136[iParam0 /*104*/].f_99[0] == 1 || Global_111560.f_14136[iParam0 /*104*/].f_99[1] == 1) || Global_111560.f_14136[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_649()
{
	if (func_656(14))
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
		Global_19486 = func_650();
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

var func_650()
{
	func_651();
	return Global_111560.f_2358.f_539.f_4321;
}

void func_651()
{
	int iVar0;
	
	if (unk_0xD4B321D9096B01FC(unk_0x0FA8183DAD2B3203()))
	{
		if (func_654(Global_111560.f_2358.f_539.f_4321) != unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()))
		{
			iVar0 = func_653(unk_0x0FA8183DAD2B3203());
			if (func_652(iVar0) && (!func_656(14) || Global_110511))
			{
				if (Global_111560.f_2358.f_539.f_4321 != iVar0 && func_652(Global_111560.f_2358.f_539.f_4321))
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

bool func_652(int iParam0)
{
	return iParam0 < 3;
}

int func_653(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD4B321D9096B01FC(uParam0))
	{
		iVar1 = unk_0x7F375072508F738F(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_654(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_654(int iParam0)
{
	if (func_652(iParam0))
	{
		return func_655(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_655(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_656(int iParam0)
{
	return Global_41396 == iParam0;
}

void func_657(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0x79FCE4565761C974(&(Global_111560.f_14136[iVar0 /*104*/])))
		{
			if (unk_0x2553916E420E8EF0(&(Global_111560.f_14136[iVar0 /*104*/]), sParam0))
			{
				if (Global_111560.f_14136[iVar0 /*104*/].f_24 == 0)
				{
				}
				Global_111560.f_14136[iVar0 /*104*/].f_24 = 1;
				if (Global_111560.f_14136[iVar0 /*104*/].f_25 == 1)
				{
					if (Global_111560.f_14136[iVar0 /*104*/].f_99[0] == 1)
					{
						Global_111560.f_14046[0 /*20*/].f_17 = 0;
					}
					if (Global_111560.f_14136[iVar0 /*104*/].f_99[1] == 1)
					{
						Global_111560.f_14046[1 /*20*/].f_17 = 0;
					}
					if (Global_111560.f_14136[iVar0 /*104*/].f_99[2] == 1)
					{
						Global_111560.f_14046[2 /*20*/].f_17 = 0;
					}
					if (Global_111560.f_14136[iVar0 /*104*/].f_99[3] == 1)
					{
						Global_111560.f_14046[3 /*20*/].f_17 = 0;
					}
					Global_111560.f_14136[iVar0 /*104*/].f_25 = 0;
					if (iParam1 == 1)
					{
						Global_111560.f_14136[iVar0 /*104*/].f_27 = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_658()
{
	if (func_567(unk_0x7C7787D2D7139A85()))
	{
		func_306(25);
	}
}

int func_659(int iParam0)
{
	switch (iParam0)
	{
		case 178:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_660(int iParam0)
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

int func_661(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

void func_662(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_666();
	}
	if (iParam0 > 0)
	{
		if (func_11() != func_10())
		{
			if (func_58(unk_0x7C7787D2D7139A85()) == unk_0x7C7787D2D7139A85())
			{
				Global_2509053.f_93[func_664(iParam0)] = 1;
			}
		}
		iVar0 = func_664(159);
		if (func_663(iVar0, Global_262145.f_12606, bParam1))
		{
			func_414(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_664(157);
		if (func_663(iVar0, Global_262145.f_12606, bParam1))
		{
			func_414(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_664(148);
		if (func_663(iVar0, Global_262145.f_12606, bParam1))
		{
			func_414(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_664(164);
		if (func_663(iVar0, Global_262145.f_12606, bParam1))
		{
			func_414(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_664(142);
		if (func_663(iVar0, Global_262145.f_12606, bParam1))
		{
			func_414(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_664(152);
		if (func_663(iVar0, Global_262145.f_12606, bParam1))
		{
			func_414(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_664(166);
		if (func_663(iVar0, Global_262145.f_12606, bParam1))
		{
			func_414(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_664(170);
		if (func_663(iVar0, Global_262145.f_12606, bParam1))
		{
			func_414(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_664(173);
		if (func_663(iVar0, Global_262145.f_12606, bParam1))
		{
			func_414(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_664(179);
		if (func_663(iVar0, Global_262145.f_12606, bParam1))
		{
			func_414(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_664(200);
		if (func_663(iVar0, Global_262145.f_12606, bParam1))
		{
			func_414(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_664(201);
		if (func_663(iVar0, Global_262145.f_12606, bParam1))
		{
			func_414(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_664(182);
		if (func_663(iVar0, Global_262145.f_12607, 0))
		{
			func_414(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_664(183);
		if (func_663(iVar0, Global_262145.f_12607, 0))
		{
			func_414(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_664(185);
		if (func_663(iVar0, Global_262145.f_12607, 0))
		{
			func_414(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_664(186);
		if (func_663(iVar0, Global_262145.f_12607, 0))
		{
			func_414(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_664(180);
		if (func_663(iVar0, Global_262145.f_12607, 0))
		{
			func_414(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_664(195);
		if (func_663(iVar0, Global_262145.f_12607, 0))
		{
			func_414(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_664(197);
		if (func_663(iVar0, Global_262145.f_12607, 0))
		{
			func_414(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_664(198);
		if (func_663(iVar0, Global_262145.f_12607, 0))
		{
			func_414(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_664(207);
		if (func_663(iVar0, Global_262145.f_12607, 0))
		{
			func_414(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_664(208);
		if (func_663(iVar0, Global_262145.f_12607, 0))
		{
			func_414(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_664(209);
		if (func_663(iVar0, Global_262145.f_12607, 0))
		{
			func_414(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_664(214);
		if (func_663(iVar0, Global_262145.f_12607, 0))
		{
			func_414(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_664(215);
		if (func_663(iVar0, Global_262145.f_12607, 0))
		{
			func_414(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_664(216);
		if (func_663(iVar0, Global_262145.f_12607, 0))
		{
			func_414(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_664(217);
		if (func_663(iVar0, Global_262145.f_12607, 0))
		{
			func_414(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_664(218);
		if (func_663(iVar0, Global_262145.f_12607, 0))
		{
			func_414(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_664(219);
		if (func_663(iVar0, Global_262145.f_12607, 0))
		{
			func_414(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_664(220);
		if (func_663(iVar0, Global_262145.f_12607, 0))
		{
			func_414(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_664(221);
		if (func_663(iVar0, Global_262145.f_12607, 0))
		{
			func_414(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_663(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_35(unk_0x7C7787D2D7139A85(), 19) && !func_35(unk_0x7C7787D2D7139A85(), 20)) && !func_35(unk_0x7C7787D2D7139A85(), 9))
		{
			return 0;
		}
	}
	if (Global_2509053.f_93[iParam0] == 1 && func_406(&(Global_2509053[iParam0 /*2*/])))
	{
		if (func_606(&(Global_2509053[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2509053.f_93[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_664(int iParam0)
{
	switch (iParam0)
	{
		case 159:
			return 11;
		
		case 157:
			return 12;
		
		case 148:
			return 13;
		
		case 164:
			return 14;
		
		case 142:
			return 15;
		
		case 152:
			return 16;
		
		case 163:
			return 17;
		
		case 155:
			return 18;
		
		case 160:
			return 19;
		
		case 153:
			return 20;
		
		case 162:
			return 21;
		
		case 154:
			return 22;
		
		case 166:
			return 8;
		
		case 170:
			return 9;
		
		case 173:
			return 10;
		
		case 171:
			return 23;
		
		case 172:
			return 24;
		
		case 179:
			return 25;
		
		case 189:
			return 26;
		
		case 193:
			return 27;
		
		case 194:
			return 28;
		
		case 199:
			return 29;
		
		case 201:
			return 30;
		
		case 200:
			return 31;
		
		case 205:
			return 32;
		
		case 210:
			return 33;
		
		case 182:
			return 34;
		
		case 183:
			return 35;
		
		case 185:
			return 36;
		
		case 186:
			return 37;
		
		case 180:
			return 38;
		
		case 195:
			return 39;
		
		case 197:
			return 40;
		
		case 198:
			return 41;
		
		case 207:
			return 42;
		
		case 208:
			return 43;
		
		case 209:
			return 44;
		
		case 211:
			return 45;
		
		case 214:
			return 0;
		
		case 215:
			return 1;
		
		case 216:
			return 2;
		
		case 217:
			return 3;
		
		case 218:
			return 4;
		
		case 219:
			return 5;
		
		case 220:
			return 6;
		
		case 221:
			return 7;
		
		default:
	}
	return -1;
}

void func_665(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_666();
	}
	if (iParam0 > 0)
	{
		if (func_11() != func_10())
		{
			Global_2509053.f_93[func_664(iParam0)] = 1;
		}
		iVar0 = func_664(155);
		if (func_663(iVar0, Global_262145.f_12607, 0))
		{
			func_414(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_664(163);
		if (func_663(iVar0, Global_262145.f_12607, 0))
		{
			func_414(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_664(160);
		if (func_663(iVar0, Global_262145.f_12607, 0))
		{
			func_414(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_664(153);
		if (func_663(iVar0, Global_262145.f_12607, 0))
		{
			func_414(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_664(162);
		if (func_663(iVar0, Global_262145.f_12607, 0))
		{
			func_414(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_664(154);
		if (func_663(iVar0, Global_262145.f_12607, 0))
		{
			func_414(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_664(171);
		if (func_663(iVar0, Global_262145.f_12607, 0))
		{
			func_414(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_664(172);
		if (func_663(iVar0, Global_262145.f_12607, 0))
		{
			func_414(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_664(199);
		if (func_663(iVar0, Global_262145.f_12607, 0))
		{
			func_414(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_664(194);
		if (func_663(iVar0, Global_262145.f_12607, 0))
		{
			func_414(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_664(193);
		if (func_663(iVar0, Global_262145.f_12607, 0))
		{
			func_414(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_664(210);
		if (func_663(iVar0, Global_262145.f_12607, 0))
		{
			func_414(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_664(205);
		if (func_663(iVar0, Global_262145.f_12607, 0))
		{
			func_414(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_664(189);
		if (func_663(iVar0, Global_262145.f_12607, 0))
		{
			func_414(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_664(211);
		if (func_663(iVar0, Global_262145.f_12607, 0))
		{
			func_414(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_666()
{
	var uVar0;
	
	uVar0 = unk_0x0037AFCBDC61F351();
	if (unk_0x2553916E420E8EF0(uVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_VEHICLE_EXPORT"))
	{
		return 178;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_BIKER_JOUST"))
	{
		return 179;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
		return 180;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_BIKER_BAD_DEAL"))
	{
		return 182;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
		return 183;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_BIKER_LAST_RESPECTS"))
	{
		return 185;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
		return 186;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_BIKER_RACE_P2P"))
	{
		return 189;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
		return 190;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
		return 191;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
		return 193;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
		return 194;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_BIKER_FREE_PRISONER"))
	{
		return 197;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_BIKER_SAFECRACKER"))
	{
		return 198;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_BIKER_STEAL_BIKES"))
	{
		return 195;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
		return 199;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "AM_PENNED_IN"))
	{
		return 200;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
		return 201;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
		return 205;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_BIKER_DESTROY_VANS"))
	{
		return 207;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_BIKER_BURN_ASSETS"))
	{
		return 208;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_BIKER_SHUTTLE"))
	{
		return 209;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
		return 210;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_PLOUGHED"))
	{
		return 214;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_FULLY_LOADED"))
	{
		return 215;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_AMPHIBIOUS_ASSAULT"))
	{
		return 216;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_TRANSPORTER"))
	{
		return 217;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_FORTIFIED"))
	{
		return 218;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_VELOCITY"))
	{
		return 219;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_STOCKPILING"))
	{
		return 221;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_RAMPED_UP"))
	{
		return 220;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_GUNRUNNING"))
	{
		return 225;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_GUNRUNNING_DEFEND"))
	{
		return 227;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_SMUGGLER"))
	{
		return 229;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "GB_FM_GANGOPS"))
	{
		return 233;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "FMMC_TYPE_FMBB_SELL"))
	{
		return 237;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "FMMC_TYPE_FMBB_DEFEND"))
	{
		return 238;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "FMMC_TYPE_FMBB_SECURITY_VAN"))
	{
		return 239;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "FMMC_TYPE_FMBB_TARGET_PURSUIT"))
	{
		return 240;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "FMMC_TYPE_FMBB_JEWEL_STORE_GRAB"))
	{
		return 241;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "FMMC_TYPE_FMBB_BANK_JOB"))
	{
		return 242;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "FMMC_TYPE_FMBB_DATA_HACK"))
	{
		return 244;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "FMMC_TYPE_FMBB_INFILTRATION"))
	{
		return 248;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "FMMC_TYPE_FMBB_PHONECALL"))
	{
		return 249;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "FMMC_TYPE_FMBB_CLUB_MANAGEMENT"))
	{
		return 250;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "FMMC_TYPE_GB_CASINO"))
	{
		return 243;
	}
	else if (unk_0x2553916E420E8EF0(uVar0, "FMMC_TYPE_GB_CASINO_HEIST"))
	{
		return 158;
	}
	return 0;
}

void func_667(int iParam0)
{
	if (!func_668(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_337[iParam0 /*3*/], func_669(), 0))
	{
		Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_337[iParam0 /*3*/] = { func_669() };
	}
	if (!func_668(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_324[iParam0 /*3*/], func_669(), 0))
	{
		Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_324[iParam0 /*3*/] = { func_669() };
	}
}

bool func_668(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

Vector3 func_669()
{
	struct<3> Var0;
	
	return Var0;
}

void func_670(int iParam0)
{
	if (!func_668(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_150[iParam0 /*3*/], func_669(), 0))
	{
		Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_150[iParam0 /*3*/] = { func_669() };
	}
	if (!func_668(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_125[iParam0 /*3*/], func_669(), 0))
	{
		Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_125[iParam0 /*3*/] = { func_669() };
	}
}

void func_671()
{
	struct<20> Var0;
	
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Global_1573899 = { Var0 };
	Global_1573899.f_13 = func_10();
	if (unk_0xA2BC31158C8CEFD2(Global_1573343, 3))
	{
		unk_0x3B76114EC84D5812(&Global_1573343, 3);
	}
}

void func_672(bool bParam0)
{
	if (bParam0)
	{
		if (!func_46(unk_0x7C7787D2D7139A85(), 14))
		{
			func_674(14);
		}
	}
	else if (func_46(unk_0x7C7787D2D7139A85(), 14))
	{
		func_673(14);
	}
}

void func_673(int iParam0)
{
	unk_0x3B76114EC84D5812(&(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_5), iParam0);
}

void func_674(int iParam0)
{
	unk_0xA1E7A40E1F56E511(&(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_5), iParam0);
}

void func_675(int iParam0)
{
	if (func_28(unk_0x7C7787D2D7139A85()))
	{
		if (unk_0x7C7787D2D7139A85() != iParam0)
		{
			if (Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_484 != iParam0)
			{
				Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_484 = iParam0;
				if (iParam0 != func_10())
				{
				}
			}
		}
	}
}

int func_676(int iParam0)
{
	if (func_677(iParam0, 0))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_32;
	}
	return -1;
}

int func_677(int iParam0, int iParam1)
{
	if (Global_1628955[iParam0 /*614*/].f_11.f_32 != -1 || (iParam1 && Global_1628955[iParam0 /*614*/].f_11.f_33 != -1))
	{
		return 1;
	}
	return 0;
}

void func_678(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (func_273(iParam0, iParam1) && func_697(iParam0, iParam1))
	{
		iVar0 = func_272(iParam0, iParam1);
		func_682(iVar0, bParam2, bParam3);
		func_679(iVar0, 1);
	}
}

void func_679(int iParam0, int iParam1)
{
	if (!func_681(iParam0))
	{
		return;
	}
	func_259(func_680(iParam0), iParam1, -1, 1);
	Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_273.f_179[iParam0 /*12*/].f_6 = iParam1;
}

int func_680(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7628;
		
		case 1:
			return 7629;
		
		case 2:
			return 7630;
		
		case 3:
			return 7631;
		
		case 4:
			return 7632;
		
		case 5:
			return 15373;
		
		default:
	}
	return 7628;
}

bool func_681(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 6);
}

void func_682(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	bVar1 = false;
	iVar2 = func_696(unk_0x7C7787D2D7139A85(), iParam0);
	if (!bParam1)
	{
		func_695(iParam0, 0, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_2507929[iParam0];
		iVar0 = func_694(iParam0, bParam2);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (!bParam2)
		{
			Global_1676736 = -1;
		}
		func_693(iParam0, 0, bParam2);
	}
	else if (func_691(iParam0, bParam2))
	{
		iVar0 = func_690(iVar2, 0);
		iVar3 = func_689(unk_0x7C7787D2D7139A85(), iVar2);
		iVar4 = func_688(iVar2, bParam2);
		iVar5 = func_690(iVar2, bParam2);
		fVar6 = (unk_0xBBDA792448DB5A89(iVar5) / unk_0xBBDA792448DB5A89(iVar4));
		iVar0 = (iVar0 - unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar3) * fVar6)));
		if (iVar0 <= 0)
		{
			iVar0 = iVar5;
		}
		if (func_687(iVar2) && func_686(unk_0x7C7787D2D7139A85(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
		func_695(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_685(unk_0x7C7787D2D7139A85(), iVar2) > 0)
		{
			func_684(iParam0, (Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_273.f_179[iParam0 /*12*/].f_2 - (func_688(iVar2, bParam2) / 2)));
		}
		iVar0 = (func_690(iVar2, bParam2) / func_685(unk_0x7C7787D2D7139A85(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_687(iVar2) && func_686(unk_0x7C7787D2D7139A85(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
	}
	func_683(unk_0x7C7787D2D7139A85(), iVar2, iVar0, bParam2);
}

void func_683(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 == func_10())
	{
		return;
	}
	if (func_266(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/] == iParam1)
			{
				if (bParam3)
				{
					Global_1590446[iParam0 /*871*/].f_273.f_253 = iParam2;
				}
				else
				{
					Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/].f_9 = iParam2;
				}
			}
			iVar0++;
		}
	}
}

void func_684(int iParam0, int iParam1)
{
	if (iParam0 != -1 && iParam1 != Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_273.f_179[iParam0 /*12*/].f_2)
	{
		Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_273.f_179[iParam0 /*12*/].f_2 = iParam1;
	}
}

int func_685(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_10())
	{
		return 0;
	}
	if (func_266(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/] == iParam1)
			{
				return Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/].f_8;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_686(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_10())
	{
		return 0;
	}
	if (func_266(iParam1) && func_687(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/] == iParam1)
			{
				return Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/].f_11;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_687(int iParam0)
{
	return func_147(iParam0) == 5;
}

int func_688(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_147(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_262145.f_16938;
			if (func_271(unk_0x7C7787D2D7139A85(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16943;
			}
			break;
		
		case 3:
			uVar0 = Global_262145.f_16937;
			if (func_271(unk_0x7C7787D2D7139A85(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16942;
			}
			break;
		
		case 4:
			uVar0 = Global_262145.f_16936;
			if (func_271(unk_0x7C7787D2D7139A85(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16941;
			}
			break;
		
		case 0:
			uVar0 = Global_262145.f_16934;
			if (func_271(unk_0x7C7787D2D7139A85(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16939;
			}
			break;
		
		case 2:
			uVar0 = Global_262145.f_16935;
			if (func_271(unk_0x7C7787D2D7139A85(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16940;
			}
			break;
		
		case 5:
			if (bParam1)
			{
				uVar0 = Global_262145.f_21062;
				if (func_271(unk_0x7C7787D2D7139A85(), iParam0, 0))
				{
					uVar0 = Global_262145.f_21063;
				}
			}
			else
			{
				uVar0 = Global_262145.f_21046;
				if (func_271(unk_0x7C7787D2D7139A85(), iParam0, 0))
				{
					uVar0 = Global_262145.f_21047;
				}
			}
			break;
	}
	return uVar0;
}

int func_689(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_10())
	{
		return 0;
	}
	if (func_266(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/] == iParam1)
			{
				return Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_690(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_147(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_262145.f_16919;
			if (func_271(unk_0x7C7787D2D7139A85(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16928);
			}
			if (func_271(unk_0x7C7787D2D7139A85(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16933);
			}
			break;
		
		case 3:
			iVar0 = Global_262145.f_16920;
			if (func_271(unk_0x7C7787D2D7139A85(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16927);
			}
			if (func_271(unk_0x7C7787D2D7139A85(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16932);
			}
			break;
		
		case 4:
			iVar0 = Global_262145.f_16921;
			if (func_271(unk_0x7C7787D2D7139A85(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16926);
			}
			if (func_271(unk_0x7C7787D2D7139A85(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16931);
			}
			break;
		
		case 0:
			iVar0 = Global_262145.f_16922;
			if (func_271(unk_0x7C7787D2D7139A85(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16924);
			}
			if (func_271(unk_0x7C7787D2D7139A85(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16929);
			}
			break;
		
		case 2:
			iVar0 = Global_262145.f_16923;
			if (func_271(unk_0x7C7787D2D7139A85(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16925);
			}
			if (func_271(unk_0x7C7787D2D7139A85(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16930);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				iVar0 = Global_262145.f_21059;
			}
			else
			{
				iVar0 = Global_262145.f_21043;
			}
			if (func_271(unk_0x7C7787D2D7139A85(), iParam0, 0))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_21060);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_21044);
				}
			}
			if (func_271(unk_0x7C7787D2D7139A85(), iParam0, 1))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_21061);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_21045);
				}
			}
			if (func_686(unk_0x7C7787D2D7139A85(), iParam0) == 2)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

bool func_691(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_260(15384, -1, -1);
	}
	return func_260(func_692(iParam0), -1, -1);
}

int func_692(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9416;
		
		case 1:
			return 9417;
		
		case 2:
			return 9418;
		
		case 3:
			return 9419;
		
		case 4:
			return 9420;
		
		case 5:
			return 15372;
		
		default:
	}
	return 9416;
}

void func_693(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_259(15384, iParam1, -1, 1);
		return;
	}
	func_259(func_692(iParam0), iParam1, -1, 1);
}

int func_694(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2507929[iParam0];
	iVar1 = func_696(unk_0x7C7787D2D7139A85(), iParam0);
	if (bParam1)
	{
		iVar0 = Global_2507936;
	}
	if (func_687(iVar1))
	{
		if (func_686(unk_0x7C7787D2D7139A85(), iVar1) == 2)
		{
			iVar0 *= 2;
		}
	}
	return iVar0;
}

void func_695(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_2507936 = iParam1;
		return;
	}
	Global_2507929[iParam0] = iParam1;
}

int func_696(int iParam0, int iParam1)
{
	var uVar0;
	
	if (iParam0 == func_10())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_266(Global_1590446[iParam0 /*871*/].f_273.f_179[iParam1 /*12*/]))
	{
		uVar0 = Global_1590446[iParam0 /*871*/].f_273.f_179[iParam1 /*12*/];
	}
	return uVar0;
}

int func_697(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_273(iParam0, iParam1))
	{
		iVar0 = func_272(iParam0, iParam1);
		if (Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/].f_4 > 0 && Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_698()
{
	unk_0x3B76114EC84D5812(&(Global_2531497.f_1737), 28);
	unk_0x3B76114EC84D5812(&(Global_2531497.f_1737), 29);
	func_699(24);
}

void func_699(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x3B76114EC84D5812(&(Global_2531497.f_4898.f_7[iVar0]), iVar1);
}

int func_700(struct<21> Param0)
{
	func_749(func_750(Param0.f_0), Param0);
	unk_0x58B4DE842733F8D9(0);
	func_746(0, -1, 0);
	unk_0xCCD47D736BFD5DE3(&Local_114, 11);
	unk_0xFF584A1B7842F821(&Local_125, 129);
	unk_0x50E03C7D74E352C4(0);
	func_701(0, 0, 0);
	return 1;
}

void func_701(int iParam0, int iParam1, bool bParam2)
{
	func_745();
	if (func_57(unk_0x7C7787D2D7139A85()))
	{
		func_707(1);
	}
	if ((iParam0 != 0 && unk_0xD56C8C2B75BF9665(iParam1)) && func_706(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				unk_0xA1E7A40E1F56E511(&Global_1674847, 0);
				break;
			}
	}
	if (!func_135() && !func_27(unk_0x7C7787D2D7139A85(), 1))
	{
		if (func_308())
		{
			func_551(3);
		}
	}
	func_551(4);
	if (func_94(0))
	{
		Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_57 = func_11();
	}
	if (func_91(iParam0))
	{
		func_705();
		Global_1674879.f_18 = func_704(func_59());
	}
	else if (func_109(func_676(unk_0x7C7787D2D7139A85())))
	{
		func_703();
		Global_1674933.f_18 = func_704(func_59());
	}
	if (bParam2)
	{
		if (!func_303())
		{
			func_552(1);
		}
	}
	func_702();
}

void func_702()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1363235.f_534[iVar0 /*42*/].f_1 = func_10();
		Global_1363235.f_534[iVar0 /*42*/].f_9 = 0;
		iVar0++;
	}
}

void func_703()
{
	struct<63> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Var0.f_54 = -1;
	Var0.f_55 = -1;
	Var0.f_56 = -1;
	Var0.f_57 = -1;
	Var0.f_58 = -1;
	Var0.f_59 = -1;
	Var0.f_60 = -1;
	Var0.f_61 = -1;
	Var0.f_62 = -1;
	Global_1674933 = { Var0 };
	Global_1674933.f_24 = 0;
	Global_1674933.f_25 = 0;
	Global_1674933.f_17 = 0;
}

int func_704(int iParam0)
{
	if (func_27(iParam0, 1))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_451;
	}
	return -1;
}

void func_705()
{
	struct<54> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Global_1674879 = { Var0 };
	Global_1674879.f_29 = 0;
	Global_1674879.f_30 = 0;
	Global_1674879.f_17 = 0;
}

int func_706(int iParam0, bool bParam1)
{
	return func_47(unk_0x7C7787D2D7139A85(), iParam0, bParam1);
}

void func_707(bool bParam0)
{
	int iVar0;
	
	func_699(33);
	func_699(34);
	func_699(35);
	func_699(36);
	func_699(37);
	func_699(38);
	func_699(39);
	func_699(40);
	func_699(43);
	func_699(41);
	func_699(54);
	func_699(42);
	func_699(47);
	func_744(23);
	func_744(24);
	func_699(92);
	unk_0x3B76114EC84D5812(&(Global_2531497.f_1737), 2);
	func_743();
	func_738();
	func_733();
	func_728();
	func_717();
	func_713();
	func_709();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2531497.f_4898.f_14[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_708(3))
	{
		func_744(3);
	}
	else if (func_708(4))
	{
		func_744(4);
	}
	else if (func_708(5))
	{
		func_744(5);
	}
	else if (func_708(6))
	{
		func_744(6);
	}
	else if (func_708(7))
	{
		func_744(7);
	}
	else if (((((((((((((((((func_708(0) || func_708(1)) || func_708(2)) || func_708(8)) || func_708(9)) || func_708(10)) || func_708(11)) || func_708(12)) || func_708(13)) || func_708(14)) || func_708(15)) || func_708(16)) || func_708(17)) || func_708(18)) || func_708(19)) || func_708(20)) || func_708(21)) || func_708(22))
	{
		func_744(8);
		func_744(0);
		func_744(1);
		func_744(2);
		func_744(9);
		func_744(10);
		func_744(11);
		func_744(12);
		func_744(13);
		func_744(14);
		func_744(15);
		func_744(16);
		func_744(17);
		func_744(18);
		func_744(19);
		func_744(20);
		func_744(21);
		func_744(22);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2531497.f_4898.f_14[iVar0] = 0;
			iVar0++;
		}
	}
}

bool func_708(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xA2BC31158C8CEFD2(Global_2531497.f_4898.f_14[iVar0], iVar1);
}

void func_709()
{
	if (func_711())
	{
		func_710(0);
		func_710(1);
		func_710(2);
		func_710(3);
	}
}

void func_710(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x3B76114EC84D5812(&(Global_2531497.f_4898.f_33[iVar0]), iVar1);
}

int func_711()
{
	if (((func_712(0) || func_712(1)) || func_712(2)) || func_712(3))
	{
		return 1;
	}
	return 0;
}

bool func_712(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xA2BC31158C8CEFD2(Global_2531497.f_4898.f_33[iVar0], iVar1);
}

void func_713()
{
	if (func_715())
	{
		func_714(4);
		func_714(5);
		func_714(6);
		func_714(7);
	}
}

void func_714(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x3B76114EC84D5812(&(Global_2531497.f_4898.f_31[iVar0]), iVar1);
}

int func_715()
{
	if (((func_716(4) || func_716(5)) || func_716(6)) || func_716(7))
	{
		return 1;
	}
	return 0;
}

bool func_716(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xA2BC31158C8CEFD2(Global_2531497.f_4898.f_31[iVar0], iVar1);
}

void func_717()
{
	var uVar0;
	
	if (func_727())
	{
		func_726(8);
		func_726(9);
		func_726(10);
		func_726(12);
		func_726(13);
		func_726(14);
		func_726(19);
		func_726(20);
		func_726(21);
		func_726(22);
		func_726(23);
		func_726(24);
		func_726(25);
		func_726(26);
		func_726(15);
		func_726(16);
		func_726(17);
		func_726(18);
		func_726(35);
		func_726(45);
		func_726(46);
		if (func_725(11))
		{
			func_726(11);
			uVar0 = func_118(7226, -1, 0);
			unk_0xA1E7A40E1F56E511(&uVar0, 2);
			func_116(7226, uVar0, -1, 1, 0);
		}
	}
	if (func_725(48))
	{
		if (func_723(151, 3))
		{
			func_721(151, 3);
		}
		func_726(48);
	}
	if (func_725(49))
	{
		if (func_723(152, 3))
		{
			func_721(152, 3);
		}
		func_726(49);
	}
	if (func_725(50))
	{
		if (func_723(153, 3))
		{
			func_721(153, 3);
		}
		func_726(50);
	}
	if (func_725(51))
	{
		if (func_723(func_718(), 3))
		{
			func_721(func_718(), 3);
		}
		func_726(51);
	}
}

int func_718()
{
	if (func_720())
	{
		func_719(154, Global_19486, 1);
	}
	return 154;
}

void func_719(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1798[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111560.f_28045[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

int func_720()
{
	int iVar0;
	
	iVar0 = func_26(unk_0x7C7787D2D7139A85());
	if (((iVar0 != unk_0x7C7787D2D7139A85() && iVar0 != func_10()) && unk_0xD56C8C2B75BF9665(iVar0)) && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

void func_721(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_117[iParam0 /*10*/].f_8 != 150)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			iVar0 = iParam1;
			func_722(iParam0, iVar0, 0);
			func_719(iParam0, iVar0, 0);
		}
	}
}

void func_722(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1798[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111560.f_28045[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

int func_723(int iParam0, int iParam1)
{
	if (func_724(iParam0, iParam1) == 1)
	{
		return 1;
	}
	return 0;
}

int func_724(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0 /*29*/].f_12[iParam1];
}

bool func_725(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xA2BC31158C8CEFD2(Global_2531497.f_4898.f_26[iVar0], iVar1);
}

void func_726(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x3B76114EC84D5812(&(Global_2531497.f_4898.f_26[iVar0]), iVar1);
}

int func_727()
{
	if (((((((((((((((((((((func_725(8) || func_725(9)) || func_725(10)) || func_725(12)) || func_725(11)) || func_725(13)) || func_725(14)) || func_725(19)) || func_725(20)) || func_725(21)) || func_725(22)) || func_725(23)) || func_725(24)) || func_725(25)) || func_725(26)) || func_725(15)) || func_725(16)) || func_725(17)) || func_725(18)) || func_725(35)) || func_725(45)) || func_725(46))
	{
		return 1;
	}
	return 0;
}

void func_728()
{
	if (func_732())
	{
		func_731(0);
		func_731(1);
		func_731(2);
		func_731(3);
		func_731(4);
		func_731(5);
		if (func_730(32))
		{
			if (func_723(func_729(), 3))
			{
				func_721(func_729(), 3);
			}
			func_731(32);
		}
	}
}

int func_729()
{
	if (func_720())
	{
		func_719(12, Global_19486, 1);
	}
	return 12;
}

bool func_730(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xA2BC31158C8CEFD2(Global_2531497.f_4898.f_23[iVar0], iVar1);
}

void func_731(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x3B76114EC84D5812(&(Global_2531497.f_4898.f_23[iVar0]), iVar1);
}

int func_732()
{
	if ((((func_730(1) || func_730(0)) || func_730(2)) || func_730(4)) || func_730(5))
	{
		return 1;
	}
	return 0;
}

void func_733()
{
	if (func_737())
	{
		func_736(0);
		func_736(1);
		func_736(2);
		func_736(3);
		func_736(4);
		func_736(5);
		func_736(6);
		func_736(7);
		if (func_735(8))
		{
			func_736(8);
		}
		if (func_735(15))
		{
			if (func_723(func_734(), 3))
			{
				func_721(func_734(), 3);
			}
			func_736(15);
		}
	}
}

int func_734()
{
	if (func_720())
	{
		func_719(20, Global_19486, 1);
	}
	return 20;
}

bool func_735(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xA2BC31158C8CEFD2(Global_2531497.f_4898.f_21[iVar0], iVar1);
}

void func_736(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x3B76114EC84D5812(&(Global_2531497.f_4898.f_21[iVar0]), iVar1);
}

int func_737()
{
	if ((((((((func_735(0) || func_735(1)) || func_735(2)) || func_735(3)) || func_735(4)) || func_735(5)) || func_735(6)) || func_735(7)) || func_735(8))
	{
		return 1;
	}
	return 0;
}

void func_738()
{
	if (func_742())
	{
		func_741(0);
		func_741(1);
		func_741(2);
		func_741(3);
		func_741(4);
		func_741(5);
		func_741(6);
		func_741(7);
		func_741(8);
		func_741(9);
		func_741(10);
		func_741(11);
		func_741(12);
		if (func_740(13))
		{
			if (func_723(func_739(), 3))
			{
				func_721(func_739(), 3);
			}
			func_741(13);
		}
	}
}

int func_739()
{
	if (func_720())
	{
		func_719(76, Global_19486, 1);
	}
	return 76;
}

bool func_740(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xA2BC31158C8CEFD2(Global_2531497.f_4898.f_19[iVar0], iVar1);
}

void func_741(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x3B76114EC84D5812(&(Global_2531497.f_4898.f_19[iVar0]), iVar1);
}

int func_742()
{
	if ((((((((((((func_740(0) || func_740(1)) || func_740(2)) || func_740(3)) || func_740(4)) || func_740(5)) || func_740(6)) || func_740(7)) || func_740(8)) || func_740(9)) || func_740(10)) || func_740(11)) || func_740(12))
	{
		return 1;
	}
	return 0;
}

void func_743()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_2531497.f_4898.f_17[iVar0] = 0;
		iVar0++;
	}
}

void func_744(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x3B76114EC84D5812(&(Global_2531497.f_4898.f_14[iVar0]), iVar1);
}

void func_745()
{
	struct<14> Var0;
	
	Global_1674861 = { Var0 };
	Global_1674861.f_14 = 0;
	Global_1674861.f_15 = 0;
}

int func_746(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x306B26A377F9A5BE();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_748();
			}
			else
			{
				return 0;
			}
		}
		if (!func_747())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x393E9918BC37548A())
				{
					if (!bParam2)
					{
						func_748();
					}
					else
					{
						return 0;
					}
				}
				if (func_638())
				{
					if (!bParam2)
					{
						func_748();
					}
					else
					{
						return 0;
					}
				}
				if (func_636(157))
				{
					if (!bParam2)
					{
						func_748();
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
					func_748();
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
				func_748();
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
			func_748();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_747()
{
	return Global_1312850;
}

void func_748()
{
	unk_0x9C9E32388A7886A2();
}

void func_749(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0x393E9918BC37548A())
	{
		func_748();
	}
	unk_0x4CF6FBF2580A447D(uParam0, 0, Param1.f_16);
}

int func_750(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case joaat("mpsv_lp0_31"):
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 8;
		
		case 91:
			return 32;
		
		case 92:
			return 8;
		
		case 93:
			return 8;
		
		case 101:
			return 8;
		
		case 94:
			return 8;
		
		case 95:
			return 32;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 8;
		
		case 99:
			return 32;
		
		case 100:
			return 32;
		
		case 102:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 8;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 32;
		
		case 114:
			return 8;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 32;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 8;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 125:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 126:
			return 32;
		
		case 127:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 138:
			return 32;
		
		case 139:
			return 32;
		
		case 128:
			return 32;
		
		case 129:
			return 32;
		
		case 133:
			return 32;
		
		case 131:
			return 32;
		
		case 132:
			return 32;
		
		case 136:
			return 32;
		
		case 137:
			return 32;
		
		case 134:
			return 32;
		
		case 135:
			return 32;
		
		case 140:
			return 32;
		
		case 141:
			return 32;
		
		case 142:
			return 32;
		
		case 143:
			return 32;
		
		case 144:
			return 2;
		
		case 149:
			return 1;
		
		case 145:
			return 2;
		
		case 146:
			return 4;
		
		case 147:
			return 2;
		
		case 148:
			return 2;
		
		case 130:
			return 1;
		
		case 150:
			return 2;
		
		case 151:
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
			return 0;
		
		case 170:
			return 1;
		
		case 157:
			return 4;
		
		case 160:
			return 4;
		
		case 161:
			return 1;
		
		case 162:
			return 1;
		
		case 168:
			return 1;
		
		case 164:
			return 2;
		
		case 169:
			return 1;
		
		case 165:
			return 1;
		
		case 163:
			return 2;
		
		case 166:
			return 8;
		
		case 167:
			return 8;
		
		case 158:
			return 16;
		
		case 159:
			return 32;
		
		default:
	}
	return 0;
}

