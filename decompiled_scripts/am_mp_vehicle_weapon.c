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
	var uLocal_115 = 32;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	struct<150> Local_149 = { 4, 0, 0, 0, 0, 0, 0, 0, -1, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6 } ;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
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
		func_205(ScriptParam_0);
	}
	else
	{
		func_196(0);
	}
	while (true)
	{
		func_195();
		if (func_184())
		{
			func_196(0);
		}
		if (func_181())
		{
			func_196(0);
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
	func_178();
	if (func_177(0))
	{
		func_165();
	}
	else if (func_177(1))
	{
		if (func_164())
		{
			func_138();
		}
		else
		{
			func_130();
		}
	}
	else if (func_177(2))
	{
		if (func_113())
		{
			func_112(3);
		}
		func_103();
		if (func_99())
		{
			return;
		}
		func_90();
		func_89();
		func_60();
		func_49();
		func_47();
		func_3();
	}
	else if (func_177(3))
	{
		func_196(1);
	}
}

void func_3()
{
	func_46();
	func_39(0);
	func_24();
	func_6();
	func_5(1);
	func_4(2);
}

void func_4(int iParam0)
{
	Global_1315712 = iParam0;
}

void func_5(int iParam0)
{
	Global_1375006.f_1100 = iParam0;
}

void func_6()
{
	int iVar0;
	
	if (!unk_0xA2BC31158C8CEFD2(Local_149.f_5, 4))
	{
		if (func_22(0, -1, 0))
		{
			func_21(-1);
			func_20(21, "BLIP_184", -1);
			if (unk_0x59415A8719336539(0))
			{
				func_20(29, "CELL_284", -1);
			}
			else
			{
				func_20(20, "CELL_284", -1);
			}
			iVar0 = 208;
			if (unk_0x59415A8719336539(0))
			{
				iVar0 = 237;
			}
			func_19(iVar0, "BLIP_39", -1, 0);
			func_19(80, "MOVE_DRONE_RE", -1, 0);
			unk_0xA1E7A40E1F56E511(&(Local_149.f_5), 4);
		}
	}
	else
	{
		func_7(0, -1, 0, 1, 0, 0, 1, 1, 0);
	}
	if (unk_0x59415A8719336539(0))
	{
		if (!unk_0xA2BC31158C8CEFD2(Local_149.f_5, 6))
		{
			unk_0xA1E7A40E1F56E511(&(Local_149.f_5), 6);
			unk_0x3B76114EC84D5812(&(Local_149.f_5), 4);
		}
	}
	else if (unk_0xA2BC31158C8CEFD2(Local_149.f_5, 6))
	{
		unk_0x3B76114EC84D5812(&(Local_149.f_5), 6);
		unk_0x3B76114EC84D5812(&(Local_149.f_5), 4);
	}
}

void func_7(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_18(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_15(bParam4, bParam8))
	{
		return;
	}
	if (func_13())
	{
		return;
	}
	if (unk_0x4ABA84DE907E0474())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_10(unk_0x7C7787D2D7139A85(), 0))
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
					func_9(&(Global_22350.f_4771[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0xA8C462EF7D9DC564(&(Global_22350.f_4964[iVar2 /*4*/])) == unk_0xA8C462EF7D9DC564("PREV"))
					{
						func_9(&(Global_22350.f_4771[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_22350.f_5013[iVar1] == -1)
					{
						func_8(&(Global_22350.f_4964[iVar1 /*4*/]));
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
				func_9(&Global_4268271);
				if (Global_4268271.f_20 == -1)
				{
					func_8(&(Global_4268271.f_16));
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

void func_8(var uParam0)
{
	unk_0x759AC38FBC6CCA9E(uParam0);
	unk_0x81019766FF500CCA();
}

void func_9(var uParam0)
{
	unk_0x7151302E2AA285DC(uParam0);
}

bool func_10(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x7C7787D2D7139A85())
	{
		bVar0 = func_11(-1, 0) == 8;
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

int func_11(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_12();
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

int func_12()
{
	return Global_1312745;
}

int func_13()
{
	struct<3> Var0;
	
	if (Global_19486.f_1 > 3)
	{
		return 1;
	}
	if (func_14())
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

int func_14()
{
	if (unk_0x222F76006659B0EB(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_15(bool bParam0, bool bParam1)
{
	if (Global_2437549.f_1893.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0xBF28CCACDDFF5346() || (func_17(8, -1) && func_16() != 65)) || (unk_0x097FC2B62E383500() != 0 && !bParam1)) || (unk_0x16587C6F71675106() && !bParam0)) || unk_0xBEE209BD103A0339()) || Global_76837) || Global_22350.f_8384) || unk_0x8E01A12946ECF396()) || Global_98721.f_1417)
	{
		return 0;
	}
	return 1;
}

int func_16()
{
	return Global_1312808;
}

bool func_17(int iParam0, int iParam1)
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

int func_18(var uParam0, bool bParam1, int iParam2)
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

void func_19(int iParam0, char* sParam1, int iParam2, bool bParam3)
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

void func_20(int iParam0, char* sParam1, int iParam2)
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

void func_21(int iParam0)
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
		if (!func_18(&iVar1, 0, iParam0))
		{
			return;
		}
		unk_0xF1BC72CEC2746995(Global_22350.f_5660[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
		unk_0x282C78036676E0C2(0);
		unk_0xAC7C2DE2DDC7AF03();
	}
}

bool func_22(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_18(&iVar0, 1, iParam1))
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
	bVar2 = func_23(&(Global_22350.f_5660[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_23(var uParam0)
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

void func_24()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	struct<3> Var12;
	float fVar15;
	
	if (func_164())
	{
		if (!unk_0x08EA887200715AD9(Local_149.f_62))
		{
			Local_149.f_62 = unk_0x1FAFE9BB9D8960C1(func_38());
			return;
		}
		func_37("SET_SHOCK_METER_IS_VISIBLE", 0);
		func_37("SET_DETONATE_METER_IS_VISIBLE", 0);
		if (Local_149.f_8 > -1 || unk_0xA2BC31158C8CEFD2(Local_149.f_5, 3))
		{
			func_37("SET_RETICLE_IS_VISIBLE", 0);
		}
		else
		{
			func_37("SET_RETICLE_IS_VISIBLE", 1);
		}
		func_37("SET_HEADING_METER_IS_VISIBLE", 1);
		func_37("SET_ZOOM_METER_IS_VISIBLE", 1);
		func_37("SET_BOTTOM_LEFT_CORNER_IS_VISIBLE", 0);
		func_37("SET_MISSILE_METER_IS_VISIBLE", 1);
		func_37("SET_INFO_LIST_IS_VISIBLE", 0);
		func_37("SET_SHOCK_METER_IS_VISIBLE", 0);
		func_37("SET_DETONATE_METER_IS_VISIBLE", 0);
		func_37("SET_BOOST_METER_IS_VISIBLE", 0);
		func_37("SET_SOUND_WAVE_IS_VISIBLE", 0);
		func_37("SET_WARNING_IS_VISIBLE", 0);
		func_36(0);
		func_35(0);
		func_33();
		if (unk_0xD2652A8A890B29BA(Local_149.f_61))
		{
			Var0 = { unk_0x0D7387BC0D91B3C0(Local_149.f_61, 2) };
			func_32(unk_0xF2DB717A73826179(-Var0.f_2));
		}
		func_31(Local_149.f_33);
	}
	else if (unk_0xD2652A8A890B29BA(Local_149.f_61))
	{
		Var3 = { unk_0x0D7387BC0D91B3C0(Local_149.f_61, 2) };
		fVar6 = Var3.f_2;
		if (unk_0xD4B321D9096B01FC(func_30()))
		{
			if (!unk_0xF4B969E0807E76C7(func_30(), 0))
			{
				Var12 = { unk_0xACE5E491FC1B0D37(func_30(), 1) };
				fVar8 = unk_0xD2809C7F7FD79247(func_30());
			}
		}
		while (fVar6 < 0f)
		{
			fVar6 = (fVar6 + 360f);
		}
		while (fVar6 > 360f)
		{
			fVar6 = (fVar6 - 360f);
		}
		while (fVar8 < 0f)
		{
			fVar8 = (fVar8 + 360f);
		}
		while (fVar8 > 360f)
		{
			fVar8 = (fVar8 - 360f);
		}
		fVar11 = fVar6;
		func_25(&fVar15);
		fVar9 = (fVar8 - fVar15);
		fVar10 = (fVar8 + fVar15);
		if (fVar11 < fVar9 && (fVar11 + 360f) <= fVar10)
		{
			fVar11 = (fVar11 + 360f);
		}
		if (fVar11 > fVar10 && (fVar11 - 360f) >= fVar9)
		{
			fVar11 = (fVar11 - 360f);
		}
		fVar7 = ((fVar11 - fVar9) / (fVar10 - fVar9));
		if (fVar7 == 2f)
		{
			fVar7 = 0f;
		}
		else if (fVar7 == -1f)
		{
			fVar7 = 1f;
		}
		else if (fVar7 < 0f && fVar7 >= -0.5f)
		{
			fVar7 = 0f;
		}
		else if (fVar7 < 0f && fVar7 > -1f)
		{
			fVar7 = 1f;
		}
		else if (fVar7 > 1.5f && fVar7 < 2f)
		{
			fVar7 = 0f;
		}
		else if (fVar7 > 2f || fVar7 < -1f)
		{
			fVar7 = 0.5f;
		}
		unk_0xF1BC72CEC2746995(Local_149.f_62, "SET_ALT_FOV_HEADING");
		unk_0xD435957F6275B434(Var12.f_2);
		unk_0xD435957F6275B434(fVar7);
		unk_0xD435957F6275B434(fVar6);
		unk_0xAC7C2DE2DDC7AF03();
		unk_0xF1BC72CEC2746995(Local_149.f_62, "SET_CAM_LOGO");
		unk_0xD02F24F3E2DB263A(0);
		unk_0xAC7C2DE2DDC7AF03();
	}
	unk_0xF314976CA3E17AC7(1);
	unk_0x53F520B89860756C(Local_149.f_62, 255, 255, 255, 0, 0);
}

void func_25(var uParam0)
{
	if (func_26(unk_0x7C7787D2D7139A85(), 0))
	{
		*uParam0 = 360f;
	}
	else
	{
		*uParam0 = 180f;
	}
}

int func_26(int iParam0, bool bParam1)
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
	if (iParam0 != func_29())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1 && Global_2424073[iParam0 /*421*/].f_309.f_8 != func_29())
			{
				return func_27(Global_2424073[iParam0 /*421*/].f_309.f_5) == 12;
			}
		}
	}
	return 0;
}

int func_27(int iParam0)
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

int func_28(int iParam0, bool bParam1, bool bParam2)
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

int func_29()
{
	return -1;
}

int func_30()
{
	if (func_26(unk_0x7C7787D2D7139A85(), 0))
	{
		if (unk_0xD4B321D9096B01FC(Global_1366586))
		{
			return Global_1366586;
		}
		if (Global_1590293 != -1)
		{
			if (unk_0xD4B321D9096B01FC(Global_1694200[Global_1590293]))
			{
				return Global_1694200[Global_1590293];
			}
		}
	}
	if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
	{
		return unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
	}
	return -1;
}

void func_31(int iParam0)
{
	unk_0xF1BC72CEC2746995(Local_149.f_62, "SET_MISSILE_PERCENTAGE");
	unk_0xD02F24F3E2DB263A(uParam0);
	unk_0xAC7C2DE2DDC7AF03();
}

void func_32(int iParam0)
{
	unk_0xF1BC72CEC2746995(Local_149.f_62, "SET_HEADING");
	unk_0xD02F24F3E2DB263A(iParam0);
	unk_0xAC7C2DE2DDC7AF03();
}

void func_33()
{
	if (Local_149.f_59 <= 60f && Local_149.f_59 > 55f)
	{
		func_34(0);
	}
	else if (Local_149.f_59 <= 55f && Local_149.f_59 > 50f)
	{
		func_34(1);
	}
	else if (Local_149.f_59 <= 50f && Local_149.f_59 > 45f)
	{
		func_34(2);
	}
	else if (Local_149.f_59 <= 45f && Local_149.f_59 > 40f)
	{
		func_34(3);
	}
	else if (Local_149.f_59 <= 40f && Local_149.f_59 > 30f)
	{
		func_34(4);
	}
}

void func_34(int iParam0)
{
	unk_0xF1BC72CEC2746995(Local_149.f_62, "SET_ZOOM");
	unk_0xD02F24F3E2DB263A(iParam0);
	unk_0xAC7C2DE2DDC7AF03();
}

void func_35(int iParam0)
{
	unk_0xF1BC72CEC2746995(Local_149.f_62, "SET_RETICLE_STATE");
	unk_0xD02F24F3E2DB263A(iParam0);
	unk_0xAC7C2DE2DDC7AF03();
}

void func_36(int iParam0)
{
	unk_0xF1BC72CEC2746995(Local_149.f_62, "SET_RETICLE_ON_TARGET");
	unk_0x282C78036676E0C2(iParam0);
	unk_0xAC7C2DE2DDC7AF03();
}

void func_37(char* sParam0, int iParam1)
{
	unk_0xF1BC72CEC2746995(Local_149.f_62, sParam0);
	unk_0x282C78036676E0C2(iParam1);
	unk_0xAC7C2DE2DDC7AF03();
}

char* func_38()
{
	if (func_164())
	{
		return "DRONE_CAM";
	}
	else
	{
		return "heli_cam";
	}
	return "";
}

void func_39(int iParam0)
{
	if (func_45())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_44(0))
		{
			func_40(iParam0);
		}
		unk_0xA1E7A40E1F56E511(&Global_7357, 2);
	}
}

void func_40(int iParam0)
{
	if (func_45())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_43())
		{
			func_42(1, 1);
		}
		else
		{
			func_42(0, 0);
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
	if (!func_41())
	{
		Global_19486.f_1 = 3;
	}
}

int func_41()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_42(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_44(0))
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

bool func_43()
{
	return unk_0xA2BC31158C8CEFD2(Global_1687880, 5);
}

int func_44(int iParam0)
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

bool func_45()
{
	return unk_0xA2BC31158C8CEFD2(Global_1687880, 19);
}

void func_46()
{
	unk_0xA1E7A40E1F56E511(&Global_7357, 4);
}

void func_47()
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<3> Var5;
	int iVar8;
	int iVar9;
	struct<3> Var10;
	struct<3> Var13;
	
	if (!func_164())
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= 5)
	{
		if (((unk_0xD2652A8A890B29BA(Local_149.f_61) && unk_0xBE2A1549F5014A49(Local_149.f_61)) && func_48(Local_149.f_84[iVar1])) && func_48(func_30()))
		{
			Var10 = { unk_0x35E6C89769982E5F(Local_149.f_61) };
			Var13 = { unk_0xACE5E491FC1B0D37(Local_149.f_84[iVar1], 1) };
			switch (Local_149.f_10[iVar1])
			{
				case 0:
					Local_149.f_98[iVar1] = unk_0xE595A27685A9E166(Var10, Var13, 511, 0, 7);
					if (Local_149.f_98[iVar1] != 0)
					{
						Local_149.f_10[iVar1] = 1;
					}
					break;
				
				case 1:
					iVar9 = unk_0x19D3834206AE7960(Local_149.f_98[iVar1], &iVar0, &Var5, &uVar2, &iVar8);
					if (iVar9 == 2)
					{
						if (iVar0 == 0)
						{
							Local_149.f_17[iVar1] = 1;
							Var5 = { 0f, 0f, 0f };
							if (unk_0xA2BC31158C8CEFD2(Local_149.f_7, iVar1))
							{
								unk_0x3B76114EC84D5812(&(Local_149.f_7), iVar1);
							}
						}
						else
						{
							Local_149.f_17[iVar1] = 2;
							if (unk_0xA2BC31158C8CEFD2(Local_149.f_7, iVar1))
							{
								unk_0x3B76114EC84D5812(&(Local_149.f_7), iVar1);
							}
							if (unk_0xD4B321D9096B01FC(iVar8))
							{
								if (Local_149.f_84[iVar1] == iVar8)
								{
									if (!unk_0xA2BC31158C8CEFD2(Local_149.f_7, iVar1))
									{
										unk_0xA1E7A40E1F56E511(&(Local_149.f_7), iVar1);
									}
								}
							}
							Local_149.f_98[iVar1] = 0;
							Local_149.f_10[iVar1] = 0;
						}
					}
					else if (iVar9 == 0)
					{
						Local_149.f_10[iVar1] = 0;
					}
					break;
			}
		}
		else if (unk_0xA2BC31158C8CEFD2(Local_149.f_7, iVar1))
		{
			unk_0x3B76114EC84D5812(&(Local_149.f_7), iVar1);
		}
		iVar1++;
	}
}

int func_48(int iParam0)
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

void func_49()
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	struct<3> Var13;
	struct<3> Var16;
	int iVar19;
	struct<3> Var20;
	struct<3> Var23;
	struct<3> Var26;
	struct<3> Var29;
	struct<3> Var32;
	struct<3> Var35;
	
	if (!func_164())
	{
		return;
	}
	iVar0 = 208;
	if (unk_0x59415A8719336539(0))
	{
		iVar0 = 237;
	}
	if ((unk_0x3772881BFFE6C3F8(2, iVar0) || unk_0x0B6782DED1C4B3B1(2, iVar0)) || unk_0xA2BC31158C8CEFD2(Local_149.f_5, 5))
	{
		iVar1 = 250;
		uVar2 = func_59();
		if (Local_149.f_8 > -1)
		{
			if (!unk_0xA2BC31158C8CEFD2(Local_149.f_5, 3))
			{
				if (!func_58(&(Local_149.f_115)))
				{
					func_57(&(Local_149.f_115), 0, 0);
					Local_149.f_31 = 0;
					unk_0xA1E7A40E1F56E511(&(Local_149.f_5), 5);
				}
				else if (func_56(&(Local_149.f_115), 300, 0) || Local_149.f_31 == 0)
				{
					if (Local_149.f_31 < 0 || Local_149.f_31 >= 6)
					{
						Local_149.f_31 = 0;
					}
					if (unk_0xD4B321D9096B01FC(Local_149.f_84[Local_149.f_31]) && !unk_0xF4B969E0807E76C7(Local_149.f_84[Local_149.f_31], 0))
					{
						iVar3 = unk_0xCC77DF450B31521D(func_30(), func_55());
						if (iVar3 != -1)
						{
							Var4 = { unk_0x0DBA551C06A14723(func_30(), iVar3) + func_54(Local_149.f_31) };
							Var7 = { unk_0x765F48D6E8886201(2) };
							Var10 = { (-unk_0x0BADBFA3B172435F(Var7.f_2) * unk_0xD0FFB162F40A139C(Var7.f_0)), (unk_0xD0FFB162F40A139C(Var7.f_2) * unk_0xD0FFB162F40A139C(Var7.f_0)), unk_0x0BADBFA3B172435F(Var7.f_0) };
							Var13 = { 1f, 1f, 1f };
							Var16 = { Var4 + Var10 * Var13 };
							unk_0x4DE2720E6B5AFD8C(Var4, Var16, iVar1, 1, func_53(0), unk_0x0FA8183DAD2B3203(), 1, 1, -1082130432, uVar2, 0, 0, Local_149.f_84[Local_149.f_31], 1, 0, 1);
							unk_0x0A41046A9C717367(-1, "Fire", Var4, "DLC_BTL_Terrobyte_Turret_Sounds", 1, 120, 1);
							Local_149.f_32++;
							func_52(&(Local_149.f_115), 0, 0);
						}
					}
					if (Local_149.f_32 == Local_149.f_8)
					{
						Local_149.f_31 = 0;
						Local_149.f_33 = 0;
						Local_149.f_32 = -1;
						unk_0xA1E7A40E1F56E511(&(Local_149.f_5), 3);
						unk_0x3B76114EC84D5812(&(Local_149.f_5), 5);
						func_57(&(Local_149.f_119), 0, 0);
						func_51(&(Local_149.f_115));
					}
					Local_149.f_31++;
				}
			}
		}
		else if (!unk_0xA2BC31158C8CEFD2(Local_149.f_5, 1))
		{
			if (Local_149.f_31 < 0 || Local_149.f_31 >= 6)
			{
				Local_149.f_31 = 0;
			}
			iVar19 = unk_0xCC77DF450B31521D(func_30(), func_55());
			if (iVar19 != -1)
			{
				Var20 = { unk_0x0DBA551C06A14723(func_30(), iVar19) + func_54(Local_149.f_31) };
				Var23 = { unk_0x72DDC427E84EEBD1() };
				Var26 = { unk_0x765F48D6E8886201(2) };
				Var29 = { (-unk_0x0BADBFA3B172435F(Var26.f_2) * unk_0xD0FFB162F40A139C(Var26.f_0)), (unk_0xD0FFB162F40A139C(Var26.f_2) * unk_0xD0FFB162F40A139C(Var26.f_0)), unk_0x0BADBFA3B172435F(Var26.f_0) };
				Var32 = { 10f, 10f, 10f };
				if (!func_50(Local_149.f_56))
				{
					Var32.f_0 = unk_0xD34AF93E9BCF12F0(Local_149.f_56, Var23, 0);
					Var32.f_1 = unk_0xD34AF93E9BCF12F0(Local_149.f_56, Var23, 0);
					Var32.f_2 = unk_0xD34AF93E9BCF12F0(Local_149.f_56, Var23, 0);
				}
				Var35 = { Var23 + Var29 * Var32 };
				unk_0x4DE2720E6B5AFD8C(Var20, Var35, iVar1, 1, func_53(1), unk_0x0FA8183DAD2B3203(), 1, 1, -1082130432, uVar2, 0, 0, 0, 1, 0, 1);
				unk_0x0A41046A9C717367(-1, "Fire", Var20, "DLC_BTL_Terrobyte_Turret_Sounds", 1, 120, 1);
				unk_0xA1E7A40E1F56E511(&(Local_149.f_5), 1);
				Local_149.f_33 = 0;
				func_57(&(Local_149.f_134), 0, 0);
				Local_149.f_31++;
			}
		}
	}
}

int func_50(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_51(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_52(var uParam0, bool bParam1, bool bParam2)
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

int func_53(int iParam0)
{
	if (func_26(unk_0x7C7787D2D7139A85(), 0))
	{
		if (iParam0 == 0)
		{
			return joaat("vehicle_weapon_hacker_missile_homing");
		}
		else
		{
			return joaat("vehicle_weapon_hacker_missile");
		}
	}
	return 0;
}

Vector3 func_54(int iParam0)
{
	if (func_26(unk_0x7C7787D2D7139A85(), 0))
	{
		switch (iParam0)
		{
			case 0:
				return -0.6f, -0.6f, 0.9f;
			
			case 1:
				return -0.3f, -0.3f, 0.8f;
			
			case 2:
				return -0.1f, -0.1f, 0.8f;
			
			case 3:
				return 0.1f, 0.1f, 0.8f;
			
			case 4:
				return 0.3f, 0.3f, 0.8f;
			
			case 5:
				return 0.6f, 0.6f, 0.9f;
			
			case 6:
				return 0f, 0f, 0.8f;
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

char* func_55()
{
	if (func_26(unk_0x7C7787D2D7139A85(), 0))
	{
		return "misc_c";
	}
	return "";
}

int func_56(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_57(uParam0, bParam2, 0);
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

void func_57(var uParam0, bool bParam1, bool bParam2)
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

bool func_58(var uParam0)
{
	return uParam0->f_1;
}

int func_59()
{
	if (func_26(unk_0x7C7787D2D7139A85(), 0))
	{
		return Global_1366586;
	}
	return -1;
}

void func_60()
{
	int iVar0;
	int iVar1;
	
	if (!func_164())
	{
		return;
	}
	if (unk_0xA2BC31158C8CEFD2(Local_149.f_5, 3))
	{
		if (func_58(&(Local_149.f_119)))
		{
			if (!func_56(&(Local_149.f_119), 5000, 0))
			{
				iVar0 = (100 * unk_0x25A1A0BF87F74E56(unk_0x675EE3FED67AA436(unk_0x169A8AC9F93C2727(), Local_149.f_119)));
				Local_149.f_33 = (iVar0 / 5000);
				func_88();
				return;
			}
			else
			{
				func_51(&(Local_149.f_119));
				unk_0x3B76114EC84D5812(&(Local_149.f_5), 3);
				Local_149.f_32 = -1;
				Local_149.f_33 = 100;
			}
		}
	}
	if (unk_0xA2BC31158C8CEFD2(Local_149.f_5, 1))
	{
		if (func_58(&(Local_149.f_134)))
		{
			if (!func_56(&(Local_149.f_134), 1500, 0))
			{
				iVar1 = (100 * unk_0x25A1A0BF87F74E56(unk_0x675EE3FED67AA436(unk_0x169A8AC9F93C2727(), Local_149.f_134)));
				Local_149.f_33 = (iVar1 / 1500);
				func_88();
				return;
			}
			else
			{
				func_51(&(Local_149.f_134));
				unk_0x3B76114EC84D5812(&(Local_149.f_5), 1);
				Local_149.f_33 = 100;
			}
		}
	}
	if (!unk_0xA2BC31158C8CEFD2(Local_149.f_5, 1) && !unk_0xA2BC31158C8CEFD2(Local_149.f_5, 5))
	{
		switch (Local_149.f_111)
		{
			case 0:
				func_85();
				break;
			
			case 1:
				func_75();
				break;
		}
		func_68();
	}
	func_62();
	func_61();
}

void func_61()
{
	int iVar0;
	var uVar1;
	var uVar4;
	int iVar5;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	struct<3> Var18;
	struct<3> Var21;
	
	if ((unk_0xD2652A8A890B29BA(Local_149.f_61) && unk_0xBE2A1549F5014A49(Local_149.f_61)) && func_48(func_30()))
	{
		Var6 = { unk_0x72DDC427E84EEBD1() };
		Var9 = { unk_0x765F48D6E8886201(2) };
		Var12 = { (-unk_0x0BADBFA3B172435F(Var9.f_2) * unk_0xD0FFB162F40A139C(Var9.f_0)), (unk_0xD0FFB162F40A139C(Var9.f_2) * unk_0xD0FFB162F40A139C(Var9.f_0)), unk_0x0BADBFA3B172435F(Var9.f_0) };
		Var15 = { 300f, 300f, 300f };
		Var18 = { Var6 + Var12 * Var15 };
		Var21 = { Var6 + Var12 * Vector(1f, 1f, 1f) };
		switch (Local_149.f_27)
		{
			case 0:
				Local_149.f_106 = unk_0xE595A27685A9E166(Var21, Var18, 511, func_30(), 7);
				if (Local_149.f_106 != 0)
				{
					Local_149.f_27 = 1;
				}
				break;
			
			case 1:
				iVar5 = unk_0x19D3834206AE7960(Local_149.f_106, &iVar0, &(Local_149.f_56), &uVar1, &uVar4);
				if (iVar5 == 2)
				{
					if (iVar0 == 0)
					{
						Local_149.f_26 = 1;
						Local_149.f_56 = { 300f, 300f, 300f };
					}
					else
					{
						Local_149.f_26 = 2;
						Local_149.f_27 = 0;
					}
				}
				else if (iVar5 == 0)
				{
					Local_149.f_27 = 0;
				}
				break;
			}
	}
}

void func_62()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		func_63(Local_149.f_84[iVar0], 0, iVar0);
		iVar0++;
	}
}

void func_63(int iParam0, bool bParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	if (unk_0xF409FD92D37CDEEE("helicopterhud"))
	{
		unk_0xF314976CA3E17AC7(1);
		if (Local_149.f_8 > -1)
		{
			if (func_48(iParam0))
			{
				unk_0x580244B06B2E67C3(unk_0xACE5E491FC1B0D37(iParam0, 1), &fVar1, &fVar2);
				fVar0 = 0.03f;
				if (((fVar1 > 0.1f && fVar1 < 0.9f) && fVar2 > 0.1f) && fVar2 < 0.9f)
				{
					if (unk_0x4625051E51BA911B(iParam0))
					{
						iVar7 = unk_0x3D464779B732760F(iParam0);
						if (unk_0x7FA2061748BA645E(iVar7))
						{
							iVar8 = unk_0x74D4E16E179B8F53(iVar7);
							if (func_28(iVar8, 1, 1))
							{
								if (func_67(iVar8, -1))
								{
									unk_0xDD85015F7E183715(unk_0x4D57D3E5ECE15A41(iVar7, 0), 2);
								}
							}
						}
					}
					else if (unk_0x905FBA24E7FA8D23(iParam0))
					{
						iVar9 = unk_0x300C62F79A4441EB(unk_0xD05B0DA3866791D0(iParam0), -1, 0);
						if (unk_0xD4B321D9096B01FC(iVar9))
						{
							if (unk_0x7FA2061748BA645E(iVar9))
							{
								iVar10 = unk_0x74D4E16E179B8F53(iVar9);
								if (func_28(iVar10, 1, 1))
								{
									unk_0xDD85015F7E183715(unk_0xD05B0DA3866791D0(iParam0), 2);
								}
							}
						}
					}
					if (!unk_0xA2BC31158C8CEFD2(Local_149.f_48, iParam2))
					{
						if ((unk_0xDE3C2FB26058823A(Local_149.f_34[iParam2]) && Local_149.f_34[iParam2] == -1) && !func_66())
						{
							Local_149.f_34[iParam2] = unk_0x04B8CCFB93858A27();
							unk_0x9964F5BBD9415AB7(Local_149.f_34[iParam2], "VULKAN_LOCK_ON_AMBER", 0, 1);
							func_57(&(Local_149.f_136[iParam2 /*2*/]), 0, 0);
							unk_0xA1E7A40E1F56E511(&(Local_149.f_48), iParam2);
						}
					}
					else if (!unk_0xA2BC31158C8CEFD2(Local_149.f_48, iParam2 + 6))
					{
						if (func_58(&(Local_149.f_136[iParam2 /*2*/])))
						{
							if (func_56(&(Local_149.f_136[iParam2 /*2*/]), 1000, 0))
							{
								func_65(iParam2, 0);
								if (unk_0xDE3C2FB26058823A(Local_149.f_41[iParam2]) && Local_149.f_41[iParam2] == -1)
								{
									Local_149.f_41[iParam2] = unk_0x04B8CCFB93858A27();
									unk_0x9964F5BBD9415AB7(Local_149.f_41[iParam2], "VULKAN_LOCK_ON_RED", 0, 1);
									func_57(&(Local_149.f_149[iParam2 /*2*/]), 0, 0);
									unk_0xA1E7A40E1F56E511(&(Local_149.f_48), iParam2 + 6);
								}
							}
						}
					}
					else if (func_58(&(Local_149.f_149[iParam2 /*2*/])))
					{
						if (func_56(&(Local_149.f_149[iParam2 /*2*/]), 700, 0))
						{
							func_64(iParam2, 0);
						}
					}
					unk_0xBDCB4576E9261561(unk_0xACE5E491FC1B0D37(iParam0, 1), 0);
					if (!unk_0xA2BC31158C8CEFD2(Local_149.f_48, iParam2 + 6))
					{
						unk_0xE0A2E1F5E75D9DF8(15, &uVar3, &uVar4, &uVar5, &uVar6);
					}
					else
					{
						unk_0xE0A2E1F5E75D9DF8(6, &uVar3, &uVar4, &uVar5, &uVar6);
					}
					if (!bParam1)
					{
						unk_0x53017FFA0ED0CAF8("helicopterhud", "hud_corner", (-fVar0 * 0.6f), -fVar0, (fVar0 * 1.5f), (fVar0 * 1.5f), 0f, uVar3, uVar4, uVar5, uVar6, 1);
					}
					unk_0x53017FFA0ED0CAF8("helicopterhud", "hud_corner", (fVar0 * 0.6f), -fVar0, (fVar0 * 1.5f), (fVar0 * 1.5f), 90f, uVar3, uVar4, uVar5, uVar6, 1);
					unk_0x53017FFA0ED0CAF8("helicopterhud", "hud_corner", (-fVar0 * 0.6f), fVar0, (fVar0 * 1.5f), (fVar0 * 1.5f), 270f, uVar3, uVar4, uVar5, uVar6, 1);
					unk_0x53017FFA0ED0CAF8("helicopterhud", "hud_corner", (fVar0 * 0.6f), fVar0, (fVar0 * 1.5f), (fVar0 * 1.5f), 180f, uVar3, uVar4, uVar5, uVar6, 1);
					unk_0xBB9E6D391327E11E();
				}
				else
				{
					func_65(iParam2, 1);
					func_64(iParam2, 1);
				}
			}
			else
			{
				func_65(iParam2, 1);
				func_64(iParam2, 1);
			}
		}
		else
		{
			func_65(iParam2, 1);
			func_64(iParam2, 1);
		}
	}
}

void func_64(int iParam0, bool bParam1)
{
	if (unk_0xA2BC31158C8CEFD2(Local_149.f_48, iParam0 + 6))
	{
		if (!unk_0xDE3C2FB26058823A(Local_149.f_41[iParam0]))
		{
			unk_0xCFF6AB47B7B014FF(Local_149.f_41[iParam0]);
			unk_0x0972EA9E8102C153(Local_149.f_41[iParam0]);
		}
		Local_149.f_41[iParam0] = -1;
		if (bParam1)
		{
			unk_0x3B76114EC84D5812(&(Local_149.f_48), iParam0 + 6);
		}
		func_51(&(Local_149.f_149[iParam0 /*2*/]));
	}
}

void func_65(int iParam0, bool bParam1)
{
	if (unk_0xA2BC31158C8CEFD2(Local_149.f_48, iParam0))
	{
		if (!unk_0xDE3C2FB26058823A(Local_149.f_34[iParam0]))
		{
			unk_0xCFF6AB47B7B014FF(Local_149.f_34[iParam0]);
			unk_0x0972EA9E8102C153(Local_149.f_34[iParam0]);
		}
		Local_149.f_34[iParam0] = -1;
		if (bParam1)
		{
			unk_0x3B76114EC84D5812(&(Local_149.f_48), iParam0);
		}
		func_51(&(Local_149.f_136[iParam0 /*2*/]));
	}
}

int func_66()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (!unk_0xDE3C2FB26058823A(Local_149.f_34[iVar0]) || !unk_0xDE3C2FB26058823A(Local_149.f_41[iVar0]))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_67(int iParam0, int iParam1)
{
	var uVar0;
	
	if (func_28(iParam0, 1, 1))
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

void func_68()
{
	int iVar0;
	int iVar1;
	
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (unk_0xD4B321D9096B01FC(Local_149.f_84[iVar0]))
		{
			if (unk_0xD4B321D9096B01FC(Local_149.f_84[iVar0]))
			{
				if (!unk_0xA2BC31158C8CEFD2(Local_149.f_7, iVar0))
				{
					if (func_58(&(Local_149.f_121[iVar0 /*2*/])))
					{
						if (func_56(&(Local_149.f_121[iVar0 /*2*/]), 1000, 0))
						{
							Local_149.f_84[iVar0] = -1;
							if (Local_149.f_8 > -1)
							{
								Local_149.f_17[iVar0] = 0;
								func_51(&(Local_149.f_121[iVar0 /*2*/]));
								Local_149.f_8 = (Local_149.f_8 - 1);
							}
						}
					}
					else
					{
						func_57(&(Local_149.f_121[iVar0 /*2*/]), 0, 0);
					}
				}
				else
				{
					func_51(&(Local_149.f_121[iVar0 /*2*/]));
				}
				if ((!func_74(Local_149.f_84[iVar0]) || !unk_0xD4B321D9096B01FC(Local_149.f_84[iVar0])) || !func_69(Local_149.f_84[iVar0]))
				{
					if (!unk_0xD4B321D9096B01FC(Local_149.f_84[iVar0]))
					{
					}
					if (!func_74(Local_149.f_84[iVar0]))
					{
					}
					Local_149.f_84[iVar0] = -1;
					if (Local_149.f_8 > -1)
					{
						Local_149.f_17[iVar0] = 0;
						func_51(&(Local_149.f_121[iVar0 /*2*/]));
						Local_149.f_8 = (Local_149.f_8 - 1);
					}
				}
			}
		}
		if (unk_0xD4B321D9096B01FC(Local_149.f_84[iVar0]))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (Local_149.f_8 != iVar1)
	{
		Local_149.f_8 = iVar1;
	}
}

int func_69(int iParam0)
{
	int iVar0;
	
	if (unk_0xD4B321D9096B01FC(iParam0) && !unk_0xF4B969E0807E76C7(iParam0, 0))
	{
		if (unk_0x905FBA24E7FA8D23(iParam0))
		{
			if (func_73(unk_0xD05B0DA3866791D0(iParam0), 0, 0))
			{
				return 1;
			}
			if (func_72(unk_0x7F375072508F738F(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x4625051E51BA911B(iParam0))
		{
			iVar0 = unk_0x3D464779B732760F(iParam0);
			if (unk_0x7FA2061748BA645E(iVar0))
			{
				if (!func_70(unk_0x74D4E16E179B8F53(iVar0), unk_0x7C7787D2D7139A85()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_70(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_71(iParam0);
	if (!iVar0 == func_29())
	{
		if (iVar0 == func_71(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_71(int iParam0)
{
	if (iParam0 != func_29())
	{
		return Global_1628955[iParam0 /*614*/].f_11;
	}
	return func_29();
}

int func_72(int iParam0)
{
	if (((((((((((((((iParam0 == joaat("police") || iParam0 == joaat("policeold1")) || iParam0 == joaat("policeold2")) || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("polmav")) || iParam0 == joaat("policeb")) || iParam0 == joaat("policet")) || iParam0 == joaat("riot")) || iParam0 == joaat("sheriff")) || iParam0 == joaat("sheriff2")) || iParam0 == joaat("pranger")) || iParam0 == joaat("policet"))
	{
		return 1;
	}
	return 0;
}

int func_73(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = unk_0x78B310CB286001B8(iParam0) + 1;
	if (!unk_0xF4B969E0807E76C7(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!unk_0xBAA38708D7439CA7(iParam0, (iVar0 - 1), 0))
			{
				iVar2 = unk_0x300C62F79A4441EB(iParam0, (iVar0 - 1), 0);
				if (bParam1)
				{
					if (unk_0xD4B321D9096B01FC(iVar2))
					{
						if (unk_0x7FA2061748BA645E(iVar2))
						{
							if (!bParam2 && func_70(unk_0x74D4E16E179B8F53(iVar2), unk_0x7C7787D2D7139A85()))
							{
							}
							else
							{
								return 1;
							}
						}
					}
				}
				else if (!unk_0x2BF5E63466422C38(iVar2))
				{
					if (unk_0x7FA2061748BA645E(iVar2))
					{
						if (!bParam2 && func_70(unk_0x74D4E16E179B8F53(iVar2), unk_0x7C7787D2D7139A85()))
						{
						}
						else
						{
							return 1;
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_74(int iParam0)
{
	float fVar0;
	float fVar1;
	
	if (unk_0xD4B321D9096B01FC(iParam0) && !unk_0xF4B969E0807E76C7(iParam0, 0))
	{
		unk_0x580244B06B2E67C3(unk_0xACE5E491FC1B0D37(iParam0, 1), &fVar0, &fVar1);
		if (((fVar0 < 0.1f || fVar0 > 0.9f) || fVar1 < 0.1f) || fVar1 > 0.9f)
		{
			return 0;
		}
	}
	return 1;
}

void func_75()
{
	if (Local_149.f_28 < 0 || Local_149.f_28 >= 20)
	{
		Local_149.f_28 = 0;
	}
	else if (unk_0xD4B321D9096B01FC(Local_149.f_63[Local_149.f_28]) && !unk_0xF4B969E0807E76C7(Local_149.f_63[Local_149.f_28], 0))
	{
		func_83(Local_149.f_63[Local_149.f_28]);
		if (func_56(&(Local_149.f_117), 1000, 0))
		{
			if (Local_149.f_112 == 2)
			{
				if (unk_0xA2BC31158C8CEFD2(Local_149.f_5, 0))
				{
					if (Local_149.f_8 < 5)
					{
						if (func_82(Local_149.f_63[Local_149.f_28]))
						{
							Local_149.f_63[Local_149.f_28] = -1;
							unk_0x3B76114EC84D5812(&(Local_149.f_5), 0);
							func_51(&(Local_149.f_117));
							Local_149.f_28++;
						}
					}
					else
					{
						if (func_79(Local_149.f_63[Local_149.f_28]))
						{
							func_76(Local_149.f_63[Local_149.f_28]);
						}
						Local_149.f_63[Local_149.f_28] = -1;
						unk_0x3B76114EC84D5812(&(Local_149.f_5), 0);
						Local_149.f_25 = 0;
						func_51(&(Local_149.f_117));
						Local_149.f_28++;
					}
				}
				else
				{
					Local_149.f_25 = 0;
					Local_149.f_63[Local_149.f_28] = -1;
					unk_0x3B76114EC84D5812(&(Local_149.f_5), 0);
					func_52(&(Local_149.f_117), 0, 0);
					Local_149.f_28++;
				}
			}
		}
	}
	else
	{
		Local_149.f_63[Local_149.f_28] = -1;
		Local_149.f_25 = 0;
		func_51(&(Local_149.f_117));
		Local_149.f_28++;
	}
	if (Local_149.f_28 == 20)
	{
		Local_149.f_111 = 0;
		Local_149.f_25 = 0;
		func_51(&(Local_149.f_117));
		Local_149.f_28 = 0;
	}
}

void func_76(int iParam0)
{
	if (func_77() != -1 && func_77() < 6)
	{
		if (unk_0xD4B321D9096B01FC(Local_149.f_84[func_77()]) && unk_0xD4B321D9096B01FC(iParam0))
		{
			Local_149.f_84[func_77()] = iParam0;
		}
	}
}

int func_77()
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	int iVar5;
	struct<3> Var6;
	float fVar9;
	
	iVar0 = -1;
	fVar1 = 0f;
	if (unk_0xD2652A8A890B29BA(Local_149.f_61) && unk_0xBE2A1549F5014A49(Local_149.f_61))
	{
		Var2 = { unk_0x35E6C89769982E5F(Local_149.f_61) };
		iVar5 = 0;
		while (iVar5 <= 5)
		{
			if (unk_0xD4B321D9096B01FC(Local_149.f_84[iVar5]) && !unk_0xF4B969E0807E76C7(Local_149.f_84[iVar5], 0))
			{
				Var6 = { unk_0xACE5E491FC1B0D37(Local_149.f_84[iVar5], 1) - Var2 };
				fVar9 = func_78(Var6);
				if (fVar9 > fVar1)
				{
					fVar1 = fVar9;
					iVar0 = iVar5;
				}
			}
			iVar5++;
		}
	}
	Local_149.f_9 = iVar0;
	return iVar0;
}

float func_78(struct<3> Param0)
{
	return unk_0x71D93B57D07F9804((((Param0.f_0 * Param0.f_0) + (Param0.f_1 * Param0.f_1)) + (Param0.f_2 * Param0.f_2)));
}

int func_79(int iParam0)
{
	if (func_77() != -1)
	{
		if ((func_48(Local_149.f_84[func_77()]) && func_48(iParam0)) && func_48(func_81()))
		{
			if (func_80(func_81(), Local_149.f_84[func_77()], 1) > func_80(func_81(), iParam0, 1) && func_80(Local_149.f_84[func_77()], iParam0, 1) > 5f)
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_80(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xF4B969E0807E76C7(iParam0, 0))
	{
		Var0 = { unk_0xACE5E491FC1B0D37(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xACE5E491FC1B0D37(iParam0, 0) };
	}
	if (!unk_0xF4B969E0807E76C7(iParam1, 0))
	{
		Var3 = { unk_0xACE5E491FC1B0D37(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xACE5E491FC1B0D37(iParam1, 0) };
	}
	return unk_0xD34AF93E9BCF12F0(Var0, Var3, iParam2);
}

int func_81()
{
	if (func_26(unk_0x7C7787D2D7139A85(), 0))
	{
		if (unk_0x45F54089C0F6B392() != -1)
		{
			return Global_2437549.f_1122[unk_0x45F54089C0F6B392()];
		}
	}
	return -1;
}

int func_82(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (!unk_0xD4B321D9096B01FC(Local_149.f_84[iVar0]))
		{
			Local_149.f_84[iVar0] = uParam0;
			Local_149.f_8++;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_83(int iParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	int iVar6;
	var uVar7;
	struct<3> Var10;
	int iVar13;
	
	if (((unk_0xD2652A8A890B29BA(Local_149.f_61) && unk_0xBE2A1549F5014A49(Local_149.f_61)) && func_48(iParam0)) && func_48(func_30()))
	{
		Var0 = { unk_0x35E6C89769982E5F(Local_149.f_61) };
		Var3 = { unk_0xACE5E491FC1B0D37(iParam0, 1) };
		switch (Local_149.f_25)
		{
			case 0:
				Local_149.f_105 = unk_0xE595A27685A9E166(Var0, Var3, 511, 0, 7);
				if (Local_149.f_105 != 0)
				{
					Local_149.f_25 = 1;
				}
				break;
			
			case 1:
				Local_149.f_112 = unk_0x19D3834206AE7960(Local_149.f_105, &iVar6, &Var10, &uVar7, &iVar13);
				if (Local_149.f_112 == 2)
				{
					if (iVar6 == 0)
					{
						Local_149.f_24 = 1;
						Var10 = { 0f, 0f, 0f };
						if (unk_0xA2BC31158C8CEFD2(Local_149.f_5, 0))
						{
							unk_0x3B76114EC84D5812(&(Local_149.f_5), 0);
						}
					}
					else
					{
						Local_149.f_24 = 2;
						if (unk_0xD4B321D9096B01FC(iVar13))
						{
							if (unk_0x905FBA24E7FA8D23(iVar13) || (unk_0x4625051E51BA911B(iVar13) && unk_0x7FA2061748BA645E(unk_0x3D464779B732760F(iVar13))))
							{
								if (iVar13 == func_84(iParam0))
								{
									if (!unk_0xF4B969E0807E76C7(iParam0, 0))
									{
										if (!unk_0xA2BC31158C8CEFD2(Local_149.f_5, 0))
										{
											unk_0xA1E7A40E1F56E511(&(Local_149.f_5), 0);
										}
									}
								}
							}
							else if (unk_0xA2BC31158C8CEFD2(Local_149.f_5, 0))
							{
								unk_0x3B76114EC84D5812(&(Local_149.f_5), 0);
							}
						}
						Local_149.f_105 = 0;
						Local_149.f_25 = 0;
					}
				}
				else if (Local_149.f_112 == 0)
				{
					Local_149.f_25 = 0;
				}
				break;
		}
	}
	else if (unk_0xA2BC31158C8CEFD2(Local_149.f_5, 0))
	{
		unk_0x3B76114EC84D5812(&(Local_149.f_5), 0);
	}
}

int func_84(int iParam0)
{
	return iParam0;
}

void func_85()
{
	int iVar0;
	int iVar1;
	var uVar2[100];
	int iVar103;
	int iVar104;
	int iVar105;
	
	if (unk_0xD2652A8A890B29BA(Local_149.f_61) && unk_0xBE2A1549F5014A49(Local_149.f_61))
	{
		if (func_28(unk_0x7C7787D2D7139A85(), 1, 1))
		{
			if (func_48(func_81()))
			{
				iVar105 = unk_0x23C1D3312E22989E(&uVar2);
				if (iVar105 > 0)
				{
					iVar0 = 0;
					while (iVar0 < iVar105)
					{
						if (!unk_0xD4B321D9096B01FC(uVar2[iVar0]))
						{
						}
						else if ((!unk_0x905FBA24E7FA8D23(uVar2[iVar0]) || uVar2[iVar0] == func_30()) || !func_69(uVar2[iVar0]))
						{
							Jump @274; //curOff = 148
						}
						else if (func_87(uVar2[iVar0]) && !func_86(uVar2[iVar0]))
						{
							if (func_74(uVar2[iVar0]) && func_80(uVar2[iVar0], func_81(), 1) < 500f)
							{
								if (iVar1 > -1 && iVar1 < 19)
								{
									Local_149.f_63[iVar1] = uVar2[iVar0];
									iVar1++;
								}
								else
								{
									iVar1 = 0;
								}
							}
						else
						{
							}
						else
						{
							}
						}
						iVar0++;
					}
				}
				iVar0 = 0;
				while (iVar0 < 32)
				{
					if (unk_0xD56C8C2B75BF9665(unk_0x0C98179F08C6DA4F(iVar0)))
					{
						iVar103 = unk_0x0C98179F08C6DA4F(iVar0);
						iVar104 = unk_0x23625FE58BACEBFD(iVar103);
						if ((iVar103 == unk_0x7C7787D2D7139A85() || !func_69(iVar104)) || unk_0xF4B969E0807E76C7(iVar104, 0))
						{
						}
						else if (func_87(iVar104) && !func_86(iVar104))
						{
							if (func_80(iVar104, func_81(), 1) < 500f)
							{
								if (iVar1 > -1 && iVar1 < 19)
								{
									Local_149.f_63[iVar1] = iVar104;
									iVar1++;
								}
								else
								{
									iVar1 = 0;
								}
							}
						}
					}
					iVar0++;
				}
				Local_149.f_111 = 1;
			}
		}
	}
}

int func_86(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (((unk_0xD4B321D9096B01FC(Local_149.f_84[iVar0]) && !unk_0xF4B969E0807E76C7(Local_149.f_84[iVar0], 0)) && unk_0xD4B321D9096B01FC(iParam0)) && !unk_0xF4B969E0807E76C7(iParam0, 0))
		{
			if (iParam0 == Local_149.f_84[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_87(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		if (unk_0xD4B321D9096B01FC(iParam0) && !unk_0xF4B969E0807E76C7(iParam0, 0))
		{
			if (iParam0 == Local_149.f_63[iVar0])
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_88()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		func_65(iVar0, 1);
		func_64(iVar0, 1);
		iVar0++;
	}
}

void func_89()
{
	int iVar0;
	
	if ((func_48(func_30()) && unk_0xD2652A8A890B29BA(Local_149.f_61)) && unk_0xBE2A1549F5014A49(Local_149.f_61))
	{
		iVar0 = unk_0xCC77DF450B31521D(func_30(), func_55());
		if (iVar0 != -1)
		{
			if (!unk_0xA2BC31158C8CEFD2(Global_2424073[unk_0x7C7787D2D7139A85() /*421*/].f_380, 0))
			{
				unk_0xA1E7A40E1F56E511(&(Global_2424073[unk_0x7C7787D2D7139A85() /*421*/].f_380), 0);
			}
		}
	}
	else if (unk_0xA2BC31158C8CEFD2(Global_2424073[unk_0x7C7787D2D7139A85() /*421*/].f_380, 0))
	{
		unk_0x3B76114EC84D5812(&(Global_2424073[unk_0x7C7787D2D7139A85() /*421*/].f_380), 0);
	}
}

void func_90()
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	struct<3> Var15;
	int iVar18;
	struct<3> Var19;
	float fVar22;
	float fVar23;
	float fVar24;
	int iVar25;
	float fVar26;
	float fVar27;
	struct<3> Var28;
	float fVar31;
	float fVar32;
	float fVar33;
	int iVar34;
	struct<3> Var35;
	int iVar38;
	int iVar39;
	
	if (((unk_0xD2652A8A890B29BA(Local_149.f_61) && (unk_0xBE2A1549F5014A49(Local_149.f_61) || !unk_0xA2BC31158C8CEFD2(Local_149.f_5, 2))) && func_48(func_30())) && func_30() != -1)
	{
		fVar0 = 0.25f;
		fVar1 = 0f;
		func_98(&fVar1);
		if (unk_0x59415A8719336539(0))
		{
			fVar0 = (fVar0 * 6f);
		}
		fVar14 = 128f;
		func_97(&fVar8, &fVar7);
		func_96(&fVar10, &fVar9);
		func_95(&fVar12, &fVar11);
		func_25(&fVar13);
		unk_0x8D83A1F4B5106D47(2);
		unk_0x1F4FA01F906F33E5(0, 39);
		if (unk_0x59415A8719336539(0))
		{
			fVar14 = 15f;
			fVar5 = (unk_0x581F0AD9C3973F33(0, 291) * -fVar14);
			fVar6 = (unk_0x581F0AD9C3973F33(0, 290) * fVar14);
		}
		else
		{
			iVar4 = unk_0xF34EE736CF047844((unk_0x581F0AD9C3973F33(0, 291) * -fVar14));
			iVar3 = unk_0xF34EE736CF047844((unk_0x581F0AD9C3973F33(0, 290) * fVar14));
		}
		iVar2 = unk_0xF34EE736CF047844((unk_0xD920E9E8A05878E9(0, 39) * fVar14));
		if (!unk_0x59415A8719336539(0))
		{
			iVar18 = unk_0xF2DB717A73826179((IntToFloat(iVar18) * fVar14));
			if (unk_0x25A1A0BF87F74E56(iVar2) < iVar18)
			{
				iVar2 = 0;
			}
			Var19 = { IntToFloat(iVar4), IntToFloat(iVar3), 0f };
			if (unk_0x652D2EEEF1D3E62C(Var19) < IntToFloat(iVar18))
			{
				iVar4 = 0;
				iVar3 = 0;
			}
		}
		fVar22 = ((Var15.f_0 / fVar7) * 0.5f);
		if (fVar22 > 0f)
		{
			fVar22 = (fVar22 + 1f);
		}
		else
		{
			fVar22 = 1f;
		}
		if (unk_0x59415A8719336539(0))
		{
			Local_149[2] = ((fVar5 * Local_149.f_59) * fVar1);
			Local_149[3] = (((fVar6 * Local_149.f_59) * fVar1) * fVar22);
		}
		else
		{
			Local_149[2] = (((unk_0xBBDA792448DB5A89(iVar4) * Local_149.f_59) * fVar1) * unk_0x0000000050597EE2());
			Local_149[3] = ((((unk_0xBBDA792448DB5A89(iVar3) * Local_149.f_59) * fVar1) * fVar22) * unk_0x0000000050597EE2());
		}
		Local_149[3] = func_94(Local_149[3], fVar12, fVar11);
		if (iVar4 != 0 && iVar3 != 0)
		{
			Var15 = { unk_0x0D7387BC0D91B3C0(Local_149.f_61, 2) };
		}
		if (!func_93(unk_0x35E6C89769982E5F(Local_149.f_61), 0f, 0f, 0f, 0))
		{
			if (!unk_0xF4B969E0807E76C7(func_30(), 0))
			{
				fVar23 = unk_0xD2809C7F7FD79247(func_30());
				fVar24 = (fVar23 - Var15.f_2);
				while (unk_0x01CBD71E072E9F33(fVar24) >= 180f && iVar25 < 30)
				{
					if (fVar24 < 0f)
					{
						fVar24 = (fVar24 + 360f);
					}
					else
					{
						fVar24 = (fVar24 - 360f);
					}
					iVar25++;
					if (iVar25 == 30)
					{
					}
				}
				if (fVar24 >= fVar11)
				{
					if (fVar24 > 0f)
					{
						Var15.f_2 = (fVar23 - fVar11);
					}
					else
					{
						Var15.f_2 = (fVar23 + fVar11);
					}
				}
				if (fVar24 < fVar12)
				{
					if (fVar24 > 0f)
					{
						Var15.f_2 = (fVar23 - unk_0x01CBD71E072E9F33(fVar12));
					}
					else
					{
						Var15.f_2 = (fVar23 + unk_0x01CBD71E072E9F33(fVar12));
					}
				}
			}
			fVar26 = 0f;
			fVar27 = 0f;
			if (func_93(Local_149.f_50, 0f, 0f, 0f, 0))
			{
				Local_149.f_50 = { unk_0x762900E9B9F74FD4(func_30(), 2) };
			}
			else
			{
				Var28 = { unk_0x762900E9B9F74FD4(func_30(), 2) };
				fVar31 = ((unk_0x01CBD71E072E9F33(Local_149.f_53.f_2) - 90f) / -90f);
				fVar26 = (fVar26 + ((Var28.f_0 - Local_149.f_50) * fVar31));
				fVar27 = (fVar27 + (Var28.f_2 - Local_149.f_50.f_2));
				if (fVar27 > 180f)
				{
					fVar27 = (fVar27 - 360f);
				}
				if (fVar27 < -180f)
				{
					fVar27 = (fVar27 + 360f);
				}
				if (Var28.f_0 < -80f || Var28.f_0 > 80f)
				{
					fVar26 = 0f;
					fVar27 = 0f;
				}
				if (unk_0xF0B9188ED2464C51(func_30()))
				{
					fVar26 = 0f;
					fVar27 = 0f;
				}
				Local_149.f_50 = { Var28 };
			}
			if ((((Local_149[2] != 0f || Local_149[3] != 0f) || fVar26 != 0f) || fVar27 != 0f) || !unk_0xA2BC31158C8CEFD2(Local_149.f_5, 2))
			{
				fVar32 = (((Local_149.f_59 - (fVar10 - 1f)) / (fVar9 - (fVar10 - 1f))) * 6f);
				if (fVar32 < 3f)
				{
					fVar32 = 3f;
				}
				Local_149[2] = (Local_149[2] * fVar32);
				Local_149[3] = (Local_149[3] * fVar32);
				Local_149.f_53 = (Local_149.f_53 + Local_149[2]);
				Local_149.f_53.f_2 = (Local_149.f_53.f_2 - Local_149[3]);
				Local_149.f_53 = (Local_149.f_53 - fVar26);
				Local_149.f_53.f_2 = (Local_149.f_53.f_2 - fVar27);
				if (Local_149.f_53 < fVar8)
				{
					Local_149.f_53 = fVar8;
				}
				if (Local_149.f_53 > fVar7)
				{
					Local_149.f_53 = fVar7;
				}
				if (fVar13 >= 360f)
				{
					while (Local_149.f_53.f_2 > 180f)
					{
						Local_149.f_53.f_2 = (Local_149.f_53.f_2 - 360f);
					}
					while (Local_149.f_53.f_2 < -180f)
					{
						Local_149.f_53.f_2 = (Local_149.f_53.f_2 + 360f);
					}
				}
				else
				{
					if (Local_149.f_53.f_2 < (-fVar13 / 2f))
					{
						Local_149.f_53.f_2 = (-fVar13 / 2f);
					}
					if (Local_149.f_53.f_2 > (fVar13 / 2f))
					{
						Local_149.f_53.f_2 = (fVar13 / 2f);
					}
				}
			}
			if (!unk_0xA2BC31158C8CEFD2(Local_149.f_5, 2))
			{
				if (func_164())
				{
					Local_149.f_53 = { fVar8, 0f, 0f };
				}
				else
				{
					Local_149.f_53 = { fVar7, 0f, 0f };
				}
				unk_0xA1E7A40E1F56E511(&(Local_149.f_5), 2);
			}
			if (!func_92(Global_2424073[unk_0x7C7787D2D7139A85() /*421*/].f_381[0 /*3*/], Local_149.f_53, 0f, Local_149.f_53.f_2, 1056964608, 0))
			{
				Global_2424073[unk_0x7C7787D2D7139A85() /*421*/].f_381[0 /*3*/] = { Local_149.f_53, 0f, Local_149.f_53.f_2 };
			}
			if (func_164())
			{
				unk_0xFE7540CE53915A18(Local_149.f_61, func_30(), unk_0xCC77DF450B31521D(func_30(), "weapon_1d"), 1, Local_149.f_53, 0f, Local_149.f_53.f_2, func_91(), 1);
			}
			else
			{
				unk_0xFE7540CE53915A18(Local_149.f_61, func_30(), 0, 1, Local_149.f_53, 0f, Local_149.f_53.f_2, func_91(), 1);
			}
		}
		Local_149.f_59 = (Local_149.f_59 + (((unk_0xBBDA792448DB5A89(iVar2) / 5f) * unk_0x0000000050597EE2()) * fVar0));
		if (Local_149.f_59 > fVar9)
		{
			Local_149.f_59 = fVar9;
		}
		if (Local_149.f_59 < fVar10)
		{
			Local_149.f_59 = fVar10;
		}
		unk_0x20BFC1E1350B8732(1f);
		unk_0x494374BCB9580EA5(Local_149.f_61, Local_149.f_59);
		fVar33 = ((Local_149.f_59 - 5f) / 42f);
		unk_0x287FEE3835D48421(fVar33);
		if (unk_0x71464AEF5F97BED3("SCRIPT\POLICE_CHOPPER_CAM", 0, -1))
		{
			if ((unk_0x25A1A0BF87F74E56(iVar2) > 0 && Local_149.f_59 <= fVar9) && Local_149.f_59 >= fVar10)
			{
				iVar34 = Local_149.f_29;
				if (iVar34 != -1)
				{
					if (unk_0xDE3C2FB26058823A(iVar34))
					{
						unk_0x9964F5BBD9415AB7(iVar34, "COP_HELI_CAM_ZOOM", 0, 1);
					}
					unk_0xEC93A4D791E42F8E(iVar34, "Ctrl", unk_0xBBDA792448DB5A89(iVar2));
					if (iVar2 < 0)
					{
						unk_0xEC93A4D791E42F8E(iVar34, "Dir", -1f);
					}
					else
					{
						unk_0xEC93A4D791E42F8E(iVar34, "Dir", 1f);
					}
				}
			}
			else if (Local_149.f_29 != -1)
			{
				if (!unk_0xDE3C2FB26058823A(Local_149.f_29))
				{
					unk_0xCFF6AB47B7B014FF(Local_149.f_29);
				}
			}
			Var35 = { -Vector(unk_0x581F0AD9C3973F33(0, 290), 0f, unk_0x581F0AD9C3973F33(0, 291)) };
			if (unk_0x652D2EEEF1D3E62C(Var35) > 0f)
			{
				iVar38 = Local_149.f_30;
				if (iVar38 != -1)
				{
					if (unk_0xDE3C2FB26058823A(iVar38))
					{
						unk_0x9964F5BBD9415AB7(iVar38, "COP_HELI_CAM_TURN", 0, 1);
					}
					unk_0xEC93A4D791E42F8E(iVar38, "Ctrl", unk_0x652D2EEEF1D3E62C(Var35));
				}
			}
			else
			{
				iVar39 = Local_149.f_30;
				if (iVar39 != -1)
				{
					if (!unk_0xDE3C2FB26058823A(iVar39))
					{
						unk_0xCFF6AB47B7B014FF(iVar39);
					}
				}
			}
		}
	}
}

Vector3 func_91()
{
	if (func_26(unk_0x7C7787D2D7139A85(), 0))
	{
		return -0.25f, -1f, 1.1f;
	}
	if (unk_0xD4B321D9096B01FC(func_30()))
	{
		switch (unk_0x7F375072508F738F(func_30()))
		{
			case joaat("maverick"):
				return 0f, 2.75f, -1.25f;
				break;
			}
	}
	return 0f, 0f, 0f;
}

int func_92(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x01CBD71E072E9F33((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x01CBD71E072E9F33((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x01CBD71E072E9F33((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x01CBD71E072E9F33((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x01CBD71E072E9F33((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_93(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

float func_94(float fParam0, float fParam1, float fParam2)
{
	while (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + 360f);
	}
	while (fParam0 > fParam2)
	{
		fParam0 = (fParam0 - 360f);
	}
	return fParam0;
}

void func_95(var uParam0, var uParam1)
{
	if (func_26(unk_0x7C7787D2D7139A85(), 0))
	{
		*uParam0 = 0f;
		*uParam1 = 45f;
	}
	else
	{
		*uParam0 = 0f;
		*uParam1 = 180f;
	}
}

void func_96(var uParam0, var uParam1)
{
	if (func_26(unk_0x7C7787D2D7139A85(), 0))
	{
		*uParam0 = 30f;
		*uParam1 = 60f;
	}
	else
	{
		*uParam0 = 30f;
		*uParam1 = 60f;
	}
}

void func_97(var uParam0, var uParam1)
{
	if (func_26(unk_0x7C7787D2D7139A85(), 0))
	{
		*uParam0 = 5f;
		*uParam1 = 40f;
	}
	else
	{
		*uParam0 = -80f;
		*uParam1 = 0f;
	}
}

void func_98(float fParam0)
{
	*fParam0 = 0.0015f;
}

int func_99()
{
	if (unk_0xCD97B9861557C025() || unk_0xBEE209BD103A0339())
	{
		return 1;
	}
	if (func_102(1))
	{
		return 1;
	}
	if (func_100(unk_0x7C7787D2D7139A85()))
	{
		return 1;
	}
	return 0;
}

int func_100(int iParam0)
{
	if (func_10(iParam0, 0))
	{
		return 1;
	}
	if (func_101())
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

bool func_101()
{
	return unk_0xA2BC31158C8CEFD2(Global_2359302, 3);
}

bool func_102(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

void func_103()
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!func_111())
	{
		func_110(1);
	}
	unk_0x580A98D19EED420F(0, 1);
	if (func_164())
	{
		func_109();
	}
	else if (unk_0xD4B321D9096B01FC(Local_149.f_107))
	{
		unk_0x04BA7979B400909D(Local_149.f_107);
	}
	Var0 = { unk_0x72DDC427E84EEBD1() };
	if ((((unk_0xCD97B9861557C025() || func_108()) || unk_0x26BB91778477F482(2, 199)) || unk_0x3772881BFFE6C3F8(2, 199)) || unk_0x1EB14C6F68B8F915(2, 199))
	{
		unk_0x7427E1978A984A18(Var0.f_0, Var0.f_1);
		unk_0x7B8FF6DF250560CD(Var0.f_0, Var0.f_1, 0);
		if (unk_0xCD97B9861557C025() || func_108())
		{
			if (unk_0x39A01A052D9B5FF0(unk_0xFD483C98AEBF2162()))
			{
				unk_0x9C47809EE2CC69F5(unk_0xFD483C98AEBF2162(), 255);
			}
		}
	}
	else if (func_164())
	{
		if (unk_0x39A01A052D9B5FF0(unk_0xFD483C98AEBF2162()))
		{
			unk_0x9C47809EE2CC69F5(unk_0xFD483C98AEBF2162(), 0);
		}
	}
	unk_0xB3CE6AE66E254E18(Var0.f_0, Var0.f_1);
	unk_0x0E323A3D6F1B1916();
	unk_0x74D8EB6B6A85E352();
	if (unk_0xD2652A8A890B29BA(Local_149.f_61))
	{
		unk_0x0B38A1D88F1316A4(Local_149.f_61, 1);
	}
	unk_0x8D5A4C57FB25ED43(0);
	if (func_164())
	{
		Var3 = { unk_0x765F48D6E8886201(0) };
		Var3 = { func_107(Var3) };
		if (!unk_0x39A01A052D9B5FF0(Local_149.f_109))
		{
			Local_149.f_108 = func_105(Var0, 0);
			unk_0xD1773DD05FE2AB54(Local_149.f_108, 425);
			unk_0x73DF1B751952DA65(Local_149.f_108, 0);
			unk_0xB2FBFC8F00374981(Local_149.f_108, 4);
			unk_0x088577CF98F96D05(Local_149.f_108, func_104(2));
			unk_0xFE0DABC6929AF902(Local_149.f_108, 1);
			unk_0xBC0D06064C5B5413(Local_149.f_108, 0.54f);
			unk_0x6089156CDC87FE4B(Local_149.f_108, 13 + 1);
			Local_149.f_109 = func_105(Var0, 0);
			unk_0xD1773DD05FE2AB54(Local_149.f_109, 425);
			unk_0x73DF1B751952DA65(Local_149.f_109, 0);
			unk_0xB2FBFC8F00374981(Local_149.f_109, 4);
			unk_0x088577CF98F96D05(Local_149.f_109, func_104(18));
			unk_0xFE0DABC6929AF902(Local_149.f_109, 1);
			unk_0xBC0D06064C5B5413(Local_149.f_109, 0.44f);
			unk_0x6089156CDC87FE4B(Local_149.f_109, 13 + 1);
			unk_0xEF55A75C76679C9F(Local_149.f_109, 1);
			unk_0x34FC9C043469D18C(Local_149.f_109, unk_0xF2DB717A73826179(unk_0x3BA2E0B9E14A8025(Var3.f_0, Var3.f_1)));
			unk_0xEF55A75C76679C9F(Local_149.f_108, 1);
			unk_0x34FC9C043469D18C(Local_149.f_108, unk_0xF2DB717A73826179(unk_0x3BA2E0B9E14A8025(Var3.f_0, Var3.f_1)));
		}
		else
		{
			unk_0x58531110F2DD153B(Local_149.f_109, Var0);
			unk_0x34FC9C043469D18C(Local_149.f_109, unk_0xF2DB717A73826179(unk_0x3BA2E0B9E14A8025(Var3.f_0, Var3.f_1)));
			unk_0xB2FBFC8F00374981(Local_149.f_109, 5);
			unk_0x58531110F2DD153B(Local_149.f_108, Var0);
			unk_0x34FC9C043469D18C(Local_149.f_108, unk_0xF2DB717A73826179(unk_0x3BA2E0B9E14A8025(Var3.f_0, Var3.f_1)));
			unk_0xB2FBFC8F00374981(Local_149.f_108, 5);
		}
	}
}

int func_104(int iParam0)
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

var func_105(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0xACAD99314B51277E(Param0);
	unk_0xBC0D06064C5B5413(uVar0, func_106(unk_0x393E9918BC37548A(), 1f, 1f));
	unk_0x925BD1075D119B45(uVar0, iParam3);
	return uVar0;
}

float func_106(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

Vector3 func_107(struct<3> Param0)
{
	struct<3> Var0;
	
	Var0.f_0 = unk_0xD0FFB162F40A139C(Param0.f_0);
	Var0.f_1 = unk_0xD0FFB162F40A139C(Param0.f_2);
	Var0.f_2 = unk_0x0BADBFA3B172435F(Param0.f_0);
	Var0.f_1 = (Var0.f_1 * Var0.f_0);
	Var0.f_0 = (Var0.f_0 * -unk_0x0BADBFA3B172435F(Param0.f_2));
	return Var0;
}

bool func_108()
{
	return unk_0x097FC2B62E383500() != 0;
}

void func_109()
{
	Global_1312666 = 1;
}

void func_110(int iParam0)
{
	Global_2461278 = iParam0;
}

bool func_111()
{
	return Global_2461278;
}

void func_112(int iParam0)
{
	if (Local_149.f_110 != iParam0)
	{
		Local_149.f_110 = iParam0;
	}
}

int func_113()
{
	struct<3> Var0;
	float fVar3;
	
	if (func_129() && !func_99())
	{
		if ((func_127(0) || func_102(1)) || func_126())
		{
		}
		else
		{
			if (func_164())
			{
				if (unk_0x26BB91778477F482(2, 80) || unk_0x80E2BA2BD5AB1A3F(2, 80))
				{
					return 1;
				}
			}
			else
			{
				if (unk_0x26BB91778477F482(0, 51) || unk_0x80E2BA2BD5AB1A3F(0, 51))
				{
					if (unk_0x95ED3BD0F52D542A(unk_0x0FA8183DAD2B3203(), Local_149.f_107, 0))
					{
						unk_0x290D755251411126(Local_149.f_107, 1f);
						unk_0xC6612209077465DD(unk_0x0FA8183DAD2B3203());
					}
					return 1;
				}
				if (func_48(func_30()))
				{
					if (unk_0xD2652A8A890B29BA(Local_149.f_61))
					{
						Var0 = { unk_0x35E6C89769982E5F(Local_149.f_61) };
						if (unk_0xDF956C4106F1E9C5(Var0, &fVar3, 0, 0))
						{
							if (unk_0x2A488C176D52CCA5(Var0, Var0.f_0, Var0.f_1, fVar3) < 2f)
							{
								return 1;
							}
						}
					}
					if (unk_0xE294A1321110B3E9(func_30()))
					{
						return 1;
					}
					if (!unk_0x95ED3BD0F52D542A(unk_0x0FA8183DAD2B3203(), Local_149.f_107, 0))
					{
						unk_0x290D755251411126(Local_149.f_107, 1f);
						unk_0xC6612209077465DD(unk_0x0FA8183DAD2B3203());
					}
				}
				else
				{
					return 1;
				}
			}
			if (func_124())
			{
				return 1;
			}
		}
	}
	if (func_122(unk_0x7C7787D2D7139A85()))
	{
		return 1;
	}
	if (func_116())
	{
		return 1;
	}
	if (func_26(unk_0x7C7787D2D7139A85(), 0))
	{
		if (func_48(func_114()))
		{
			if ((unk_0xB3EE417AD9F0CAA2() % 30) == 0)
			{
				if (unk_0x42A24CB7B8A08E11(func_114(), -136.1614f, 4617.176f, 124.5134f, -490.3058f, 4924.749f, 159.0677f, 19.5f, 0, 1, 0))
				{
					return 1;
				}
			}
			if (unk_0xF0B9188ED2464C51(func_114()))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_114()
{
	if (Global_1590293 != func_29())
	{
		if (!func_115(Global_1590293))
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

int func_115(int iParam0)
{
	if (iParam0 != func_29())
	{
		return unk_0xA2BC31158C8CEFD2(Global_2424073[iParam0 /*421*/].f_309.f_3, 4);
	}
	return 0;
}

int func_116()
{
	if (func_26(unk_0x7C7787D2D7139A85(), 0))
	{
		if (Global_1590293 != func_29())
		{
			if (func_115(Global_1590293) || func_121(Global_1590293))
			{
				return 1;
			}
			if (func_120(Global_1590293))
			{
				if (func_27(func_119(Global_1590293)) == 11)
				{
					if (func_27(func_118(Global_1590293)) == 11)
					{
						if (func_117(Global_1590293) == 5)
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_117(int iParam0)
{
	return unk_0x2E938CC56931C5D4(Global_2424073[iParam0 /*421*/].f_309.f_3, 28, 31);
}

int func_118(int iParam0)
{
	if (iParam0 != func_29() && func_28(iParam0, 1, 1))
	{
		return Global_2424073[iParam0 /*421*/].f_309.f_15;
	}
	return -1;
}

int func_119(int iParam0)
{
	if (iParam0 != func_29() && func_28(iParam0, 1, 1))
	{
		return Global_2424073[iParam0 /*421*/].f_309.f_14;
	}
	return -1;
}

int func_120(int iParam0)
{
	if (iParam0 != func_29() && func_28(iParam0, 1, 1))
	{
		return unk_0xA2BC31158C8CEFD2(Global_2424073[iParam0 /*421*/].f_309, 4);
	}
	return 0;
}

int func_121(int iParam0)
{
	if (iParam0 != func_29())
	{
		return unk_0xA2BC31158C8CEFD2(Global_1590446[iParam0 /*871*/].f_273.f_330, 14);
	}
	return 0;
}

int func_122(int iParam0)
{
	if (iParam0 != func_29() && func_28(iParam0, 1, 1))
	{
		if (func_123(iParam0) && !func_120(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_123(int iParam0)
{
	if (iParam0 != func_29() && func_28(iParam0, 1, 1))
	{
		return unk_0xA2BC31158C8CEFD2(Global_2424073[iParam0 /*421*/].f_309, 3);
	}
	return 0;
}

int func_124()
{
	int iVar0;
	int iVar1;
	
	if (func_26(unk_0x7C7787D2D7139A85(), 0))
	{
		if (unk_0xD4B321D9096B01FC(func_30()))
		{
			iVar0 = unk_0x300C62F79A4441EB(func_30(), -1, 0);
			if (unk_0xD4B321D9096B01FC(iVar0))
			{
				if (unk_0x7FA2061748BA645E(iVar0))
				{
					iVar1 = unk_0x74D4E16E179B8F53(iVar0);
					if (func_28(iVar1, 1, 1))
					{
						if (func_125(iVar1))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_125(int iParam0)
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

var func_126()
{
	return Global_22211.f_135;
}

int func_127(bool bParam0)
{
	if (unk_0x8F0856319BE615A3())
	{
		if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
		{
			if (func_128(unk_0x0FA8183DAD2B3203()))
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

int func_128(int iParam0)
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

bool func_129()
{
	return unk_0xA2BC31158C8CEFD2(Global_1687879, 1);
}

void func_130()
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (func_137())
	{
		if (!unk_0xD2652A8A890B29BA(Local_149.f_61))
		{
			Local_149.f_61 = unk_0xBCB04DDDF3778A10(26379945, 1);
			unk_0x494374BCB9580EA5(Local_149.f_61, Local_149.f_59);
			Var0 = { unk_0x762900E9B9F74FD4(func_30(), 2) };
			unk_0x92B8564A1A66EF0A(Local_149.f_61, 0f, 0f, Var0.f_2, 2);
			unk_0x9F2F93BD843587E2(Local_149.f_61, func_30(), func_136(), 1);
			func_133(1);
			func_132(1);
			func_90();
			unk_0xBAA4E225DE364743();
		}
		else if (unk_0xA2BC31158C8CEFD2(Local_149.f_5, 2))
		{
			func_103();
			func_3();
			unk_0x0298C8010FD5A69E(1, 0, 0, 1, 1, 0);
			unk_0x6793D62D4C7127BB("eyeinthesky");
			if (Local_149.f_49 == -1)
			{
				Local_149.f_49 = unk_0x04B8CCFB93858A27();
				unk_0x9964F5BBD9415AB7(Local_149.f_49, "Turret_Camera_Hum_Loop", "DLC_BTL_Terrobyte_Turret_Sounds", 1);
			}
			if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
			{
				Local_149.f_107 = unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
				Var3 = { unk_0xACE5E491FC1B0D37(Local_149.f_107, 1) };
				unk_0xC6612209077465DD(unk_0x0FA8183DAD2B3203());
				unk_0x2042881C1FE6D05A(unk_0x0FA8183DAD2B3203(), Local_149.f_107, 0, 0, Var3, 4, 0f, -1f, -1f, -1, -1, -1082130432, 0);
				unk_0x290D755251411126(Local_149.f_107, 0f);
			}
			func_131("HUNTGUN_2b", -1);
			func_112(2);
		}
	}
	else
	{
		func_112(3);
	}
}

void func_131(char* sParam0, int iParam1)
{
	unk_0xD95C12E1062B7D5E(sParam0);
	unk_0x40DC0B0D5BD91E06(0, 0, 1, iParam1);
}

void func_132(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xA2BC31158C8CEFD2(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_273.f_330, 25))
		{
			unk_0xA1E7A40E1F56E511(&(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_273.f_330), 25);
		}
	}
	else if (unk_0xA2BC31158C8CEFD2(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_273.f_330, 25))
	{
		unk_0x3B76114EC84D5812(&(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_273.f_330), 25);
	}
}

void func_133(bool bParam0)
{
	if (bParam0)
	{
		if (!func_129())
		{
			unk_0xA1E7A40E1F56E511(&Global_1687879, 1);
		}
	}
	else
	{
		if (func_129())
		{
			unk_0x3B76114EC84D5812(&Global_1687879, 1);
		}
		func_134(0);
	}
}

void func_134(bool bParam0)
{
	if (bParam0)
	{
		if (!func_135())
		{
			unk_0xA1E7A40E1F56E511(&Global_1687879, 2);
		}
	}
	else if (func_135())
	{
		unk_0x3B76114EC84D5812(&Global_1687879, 2);
	}
}

bool func_135()
{
	return unk_0xA2BC31158C8CEFD2(Global_1687879, 2);
}

Vector3 func_136()
{
	if (func_26(unk_0x7C7787D2D7139A85(), 0))
	{
		return 0f, 0f, 3.3f;
	}
	if (unk_0xD4B321D9096B01FC(func_30()))
	{
		switch (unk_0x7F375072508F738F(func_30()))
		{
			case joaat("maverick"):
				return 0f, 2.75f, -1.25f;
				break;
			}
	}
	return 0f, 0f, 0f;
}

int func_137()
{
	if (!unk_0xD4B321D9096B01FC(func_30()))
	{
		return 0;
	}
	if (unk_0xD4B321D9096B01FC(func_30()) && unk_0xF4B969E0807E76C7(func_30(), 0))
	{
		return 0;
	}
	return 1;
}

void func_138()
{
	struct<3> Var0;
	
	if (func_137())
	{
		if (func_150())
		{
			if (unk_0xB3E4EBF4EFCF92BD(unk_0x7C7787D2D7139A85()))
			{
				func_139(unk_0x7C7787D2D7139A85(), 0, 32768, 0);
			}
			if (!func_58(&(Local_149.f_113)))
			{
				if (func_48(func_30()))
				{
					if (unk_0x155C3BED27FDCC1D(unk_0xACE5E491FC1B0D37(func_30(), 1), 100f, 1))
					{
						func_57(&(Local_149.f_113), 0, 0);
					}
				}
			}
			else if (func_56(&(Local_149.f_113), 2000, 0))
			{
				unk_0x939C9198FD11AD85(func_30());
			}
		}
		if (func_58(&(Local_149.f_113)))
		{
			if (func_56(&(Local_149.f_113), 5000, 0))
			{
				if (unk_0x235F15F5EE0D236B())
				{
					if (!unk_0xD2652A8A890B29BA(Local_149.f_61))
					{
						Local_149.f_61 = unk_0xBCB04DDDF3778A10(26379945, 1);
						unk_0x494374BCB9580EA5(Local_149.f_61, Local_149.f_59);
						Var0 = { unk_0x762900E9B9F74FD4(func_30(), 2) };
						unk_0x92B8564A1A66EF0A(Local_149.f_61, 0f, 0f, Var0.f_2, 2);
						unk_0x9F2F93BD843587E2(Local_149.f_61, func_30(), func_136(), 1);
						func_133(1);
						func_132(1);
						func_90();
						unk_0xBAA4E225DE364743();
						unk_0x7D17F1A2E0EEDBB9("DLC_GR_MOC_Turret_View_Scene");
					}
					else if (unk_0xA2BC31158C8CEFD2(Local_149.f_5, 2))
					{
						func_103();
						func_3();
						unk_0x7D4946564F5947D1();
						unk_0x0298C8010FD5A69E(1, 0, 0, 1, 1, 0);
						if (Local_149.f_49 == -1)
						{
							Local_149.f_49 = unk_0x04B8CCFB93858A27();
							unk_0x9964F5BBD9415AB7(Local_149.f_49, "Turret_Camera_Hum_Loop", "DLC_BTL_Terrobyte_Turret_Sounds", 1);
						}
						func_112(2);
					}
				}
			}
		}
	}
	else
	{
		func_112(3);
	}
}

void func_139(int iParam0, bool bParam1, int iParam2, int iParam3)
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
	if (func_149())
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
		if (!func_147())
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
				else if (bVar13 || (!func_10(unk_0x7C7787D2D7139A85(), 0) && !func_101()))
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
				func_144(0, 0, 0);
				if (bVar24)
				{
					unk_0x177A62AB5B680108();
				}
				if (!func_143(uVar26) && !unk_0xFAA29571D9280AC0(uVar26))
				{
					if (!bVar21)
					{
						unk_0x8C85E8C71AD74415(uVar26, true, 0);
					}
				}
				if (!unk_0xCA7317DE7E0F89E9(uVar26))
				{
					if (!bVar20)
					{
						unk_0x860A5CC30A0EF207(uVar26, false);
					}
					unk_0x9D3FE4786B8925D2(uVar26, 1);
				}
				else if (!bVar20)
				{
					unk_0x860A5CC30A0EF207(uVar26, false);
				}
				unk_0x6E712A176E3EEFA8(uVar26, true);
				unk_0x80DD2AE2084AED15(iParam0, 0);
				unk_0x39EC8D05FEE60520(iParam0, 0);
				if (unk_0x088441D41D80C5C5(uVar26) && unk_0xB9F75075D0B810BF(uVar26))
				{
					unk_0xF77E0D8A93ED5E86(uVar26);
				}
				unk_0x18CD1B73D89ABE21(uVar26, 1);
				if (unk_0xB3E4EBF4EFCF92BD(unk_0x7C7787D2D7139A85()) == 0)
				{
					func_142();
					func_141();
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
				if (!func_143(uVar26) && !unk_0xFAA29571D9280AC0(uVar26))
				{
					if (!bVar21)
					{
						unk_0x8C85E8C71AD74415(uVar26, !bVar14, 0);
					}
					if (!unk_0xCA7317DE7E0F89E9(uVar26))
					{
						if (!bVar20)
						{
							unk_0x860A5CC30A0EF207(uVar26, bVar15);
						}
						if (!bVar15)
						{
							unk_0x9D3FE4786B8925D2(uVar26, 1);
						}
					}
					if (func_140(Global_4456448.f_190930))
					{
						unk_0x860A5CC30A0EF207(uVar26, true);
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
				unk_0x6E712A176E3EEFA8(uVar26, bVar16);
				if (bVar2)
				{
					if (!unk_0x8597FB96A64B777C(uVar26) && !unk_0x5294582CE404D3F4(uVar26, 0))
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

bool func_140(int iParam0)
{
	return iParam0 == 17;
}

void func_141()
{
	struct<3> Var0;
	
	Global_2437549.f_1232 = 0;
	Global_2437549.f_1233 = 0;
	Global_2437549.f_1234 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2437549.f_1239 = -1;
	Global_2437549.f_1240 = 0;
	Global_2405071.f_2681 = { Var0 };
}

void func_142()
{
	Global_2405071.f_692 = 0;
	Global_2405071.f_2724 = 0;
	Global_2405071.f_510 = 0;
	Global_2405071.f_598 = 0;
	Global_2424073[unk_0x7C7787D2D7139A85() /*421*/].f_207 = 0;
	Global_2405071.f_2679 = 0;
}

int func_143(int iParam0)
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

void func_144(int iParam0, int iParam1, int iParam2)
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
				func_146();
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
		if (func_10(unk_0x7C7787D2D7139A85(), 0))
		{
			unk_0x1244983AF90581A1(iParam0, iParam1, 1);
		}
		else
		{
			unk_0x82383378B7F391D7(iParam0, iParam1);
		}
		unk_0x62F681DBBF12DD7F(iParam0, iParam1);
		func_145(joaat("mpply_is_char_spectating"), iParam0);
	}
}

void func_145(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x0EC7EA43028EE330(iVar0, iParam1, 1);
	}
}

void func_146()
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

int func_147()
{
	if (func_148() == 0)
	{
		return 1;
	}
	return 0;
}

int func_148()
{
	return Global_1312467.f_18;
}

int func_149()
{
	if (Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_35 && !Global_2449755.f_2846.f_214 == -1)
	{
		return 1;
	}
	return 0;
}

int func_150()
{
	if (Global_1319106 != -1 || Global_1319112 != -1)
	{
		if (((unk_0xF6FD8019402CF03B(unk_0x0FA8183DAD2B3203(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle", 3) || unk_0xF6FD8019402CF03B(unk_0x0FA8183DAD2B3203(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle_control", 3)) || unk_0xF6FD8019402CF03B(unk_0x0FA8183DAD2B3203(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter_control", 3)) || unk_0xF6FD8019402CF03B(unk_0x0FA8183DAD2B3203(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter", 3))
		{
			return 1;
		}
		if (func_151())
		{
			return 0;
		}
	}
	return 0;
}

int func_151()
{
	int iVar0;
	
	if (func_163(unk_0x7C7787D2D7139A85()))
	{
		iVar0 = func_162(unk_0x7C7787D2D7139A85());
		if (func_28(iVar0, 0, 1))
		{
			if ((((((func_123(iVar0) && func_27(func_119(iVar0)) == 4) && unk_0xD4B321D9096B01FC(unk_0x23625FE58BACEBFD(iVar0))) && !unk_0x2BF5E63466422C38(unk_0x23625FE58BACEBFD(iVar0))) && unk_0x5294582CE404D3F4(unk_0x23625FE58BACEBFD(iVar0), 0)) && unk_0xD4B321D9096B01FC(unk_0x4D57D3E5ECE15A41(unk_0x23625FE58BACEBFD(iVar0), 0))) && func_161(unk_0x4D57D3E5ECE15A41(unk_0x23625FE58BACEBFD(iVar0), 0)))
			{
				return 1;
			}
			if (!func_160(Global_4456448.f_154360))
			{
				if (func_163(iVar0))
				{
					if (func_159(iVar0))
					{
						return 1;
					}
					else if (func_123(unk_0x7C7787D2D7139A85()) || func_158())
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
	if (func_157(unk_0x7C7787D2D7139A85()))
	{
		iVar0 = func_156(unk_0x7C7787D2D7139A85());
		if (func_28(iVar0, 0, 1))
		{
			if ((((((func_123(iVar0) && func_27(func_119(iVar0)) == 9) && unk_0xD4B321D9096B01FC(unk_0x23625FE58BACEBFD(iVar0))) && !unk_0x2BF5E63466422C38(unk_0x23625FE58BACEBFD(iVar0))) && unk_0x5294582CE404D3F4(unk_0x23625FE58BACEBFD(iVar0), 0)) && unk_0xD4B321D9096B01FC(unk_0x4D57D3E5ECE15A41(unk_0x23625FE58BACEBFD(iVar0), 0))) && unk_0x7F375072508F738F(unk_0x4D57D3E5ECE15A41(unk_0x23625FE58BACEBFD(iVar0), 0)) == joaat("avenger"))
			{
				return 1;
			}
			if (func_155(iVar0))
			{
				return 1;
			}
			else if (func_123(unk_0x7C7787D2D7139A85()) || func_158())
			{
				return 1;
			}
		}
	}
	if (func_26(unk_0x7C7787D2D7139A85(), 0))
	{
		iVar0 = func_154(unk_0x7C7787D2D7139A85());
		if (func_28(iVar0, 0, 1))
		{
			if ((((Global_1590293 != func_29() && func_123(Global_1590293)) && func_27(func_119(Global_1590293)) == 11) && func_67(Global_1590293, -1)) && unk_0x759DEE4D113EC07E(unk_0x4D57D3E5ECE15A41(unk_0x23625FE58BACEBFD(Global_1590293), 0), joaat("terbyte")))
			{
				return 1;
			}
			else if (func_115(iVar0))
			{
				return 1;
			}
			else if (func_123(unk_0x7C7787D2D7139A85()) || func_158())
			{
				return 1;
			}
		}
	}
	if (func_157(unk_0x7C7787D2D7139A85()) || func_153(unk_0x7C7787D2D7139A85()))
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
	if (func_152(3))
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

bool func_152(int iParam0)
{
	return Global_262145.f_5008[iParam0] == Global_4456448.f_154360;
}

int func_153(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_27(Global_2424073[iParam0 /*421*/].f_309.f_5) == 10;
			}
		}
	}
	return 0;
}

int func_154(int iParam0)
{
	if (iParam0 == func_29())
	{
		return iParam0;
	}
	return Global_2424073[iParam0 /*421*/].f_309.f_8;
}

int func_155(int iParam0)
{
	if (iParam0 != func_29())
	{
		return unk_0xA2BC31158C8CEFD2(Global_2424073[iParam0 /*421*/].f_309.f_2, 6);
	}
	return 0;
}

int func_156(int iParam0)
{
	if (iParam0 == func_29())
	{
		return iParam0;
	}
	return Global_2424073[iParam0 /*421*/].f_309.f_8;
}

int func_157(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1 && Global_2424073[iParam0 /*421*/].f_309.f_8 != func_29())
			{
				return func_27(Global_2424073[iParam0 /*421*/].f_309.f_5) == 8;
			}
		}
	}
	return 0;
}

bool func_158()
{
	return unk_0xA2BC31158C8CEFD2(Global_1676879, 6);
}

int func_159(int iParam0)
{
	if (iParam0 != func_29())
	{
		return unk_0xA2BC31158C8CEFD2(Global_2424073[iParam0 /*421*/].f_309, 6);
	}
	return 0;
}

bool func_160(int iParam0)
{
	return Global_262145.f_4999[4] == iParam0;
}

int func_161(int iParam0)
{
	if (unk_0x7F375072508F738F(uParam0) == joaat("hauler2") || unk_0x7F375072508F738F(iParam0) == joaat("phantom3"))
	{
		return 1;
	}
	return 0;
}

int func_162(int iParam0)
{
	if (iParam0 == func_29())
	{
		return iParam0;
	}
	return Global_2424073[iParam0 /*421*/].f_309.f_8;
}

int func_163(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_28(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1 && Global_2424073[iParam0 /*421*/].f_309.f_8 != func_29())
			{
				return func_27(Global_2424073[iParam0 /*421*/].f_309.f_5) == 5;
			}
		}
	}
	return 0;
}

bool func_164()
{
	return unk_0xA2BC31158C8CEFD2(Local_149.f_5, 7);
}

void func_165()
{
	if (!func_99())
	{
		if (func_28(unk_0x7C7787D2D7139A85(), 1, 1))
		{
			if (!func_171())
			{
				if (func_164())
				{
					if ((func_167() && !func_150()) && func_166("MP_HTRUCK_T_2"))
					{
						if (unk_0x1EB14C6F68B8F915(2, 176) || unk_0x38CEC20C56D8586B(2, 176))
						{
							func_134(1);
							func_112(1);
							unk_0x0D23E3918F7AF11B(1);
						}
					}
				}
				else if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
				{
					if ((!unk_0x0945988C02AF3025() && !unk_0x8F4A1C79B0DAADA3()) && !func_166("HUNTGUN_1b"))
					{
						func_131("HUNTGUN_1b", -1);
					}
					else if (!func_166("HUNTGUN_1b"))
					{
						unk_0x0D23E3918F7AF11B(1);
					}
					else if (unk_0x26BB91778477F482(0, 51) || unk_0x80E2BA2BD5AB1A3F(0, 51))
					{
						func_134(1);
						func_112(1);
						unk_0x0D23E3918F7AF11B(1);
					}
				}
				else if (func_166("HUNTGUN_1b"))
				{
					unk_0x0D23E3918F7AF11B(1);
				}
			}
			else if (func_166("HUNTGUN_1b"))
			{
				unk_0x0D23E3918F7AF11B(1);
			}
		}
	}
}

bool func_166(char* sParam0)
{
	unk_0x1EF54B101C71E009(sParam0);
	return unk_0xFA637652FFB4E2E5(0);
}

int func_167()
{
	if ((func_26(unk_0x7C7787D2D7139A85(), 0) && Global_1319106 == 2) && func_168())
	{
		return 1;
	}
	return 0;
}

int func_168()
{
	if (Global_1319106 != -1 || Global_1319112 != -1)
	{
		if ((((unk_0xF6FD8019402CF03B(unk_0x0FA8183DAD2B3203(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter", 3) || unk_0xF6FD8019402CF03B(unk_0x0FA8183DAD2B3203(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter_left", 3)) || unk_0xF6FD8019402CF03B(unk_0x0FA8183DAD2B3203(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit", 3)) || unk_0xF6FD8019402CF03B(unk_0x0FA8183DAD2B3203(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit_left", 3)) || func_169(unk_0x0FA8183DAD2B3203(), 2106541073))
		{
			return 0;
		}
		if (((((!unk_0xF6FD8019402CF03B(unk_0x0FA8183DAD2B3203(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "base", 3) && !unk_0xF6FD8019402CF03B(unk_0x0FA8183DAD2B3203(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_enter", 3)) && !unk_0xF6FD8019402CF03B(unk_0x0FA8183DAD2B3203(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_exit", 3)) && !unk_0xF6FD8019402CF03B(unk_0x0FA8183DAD2B3203(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle", 3)) && !unk_0xF6FD8019402CF03B(unk_0x0FA8183DAD2B3203(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle_control", 3)) && !unk_0xF6FD8019402CF03B(unk_0x0FA8183DAD2B3203(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter_control", 3))
		{
			return 0;
		}
		if (func_151())
		{
			return 0;
		}
	}
	return 1;
}

int func_169(int iParam0, int iParam1)
{
	if (func_170(iParam0))
	{
		if (unk_0x411C065ADB822CD9(iParam0, iParam1) == 1 || unk_0x411C065ADB822CD9(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_170(int iParam0)
{
	if (func_48(uParam0))
	{
		if (!unk_0x2BF5E63466422C38(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_171()
{
	var uVar0;
	struct<3> Var1;
	float fVar4;
	
	if (func_26(unk_0x7C7787D2D7139A85(), 0))
	{
		if (Global_262145.f_24145)
		{
			return 1;
		}
	}
	if (func_176())
	{
		return 1;
	}
	if (func_175())
	{
		return 1;
	}
	if (unk_0xCD97B9861557C025())
	{
		return 1;
	}
	if (func_174())
	{
		return 1;
	}
	if (func_26(unk_0x7C7787D2D7139A85(), 0))
	{
		if (func_115(Global_1590293))
		{
			return 1;
		}
	}
	if (func_125(unk_0x7C7787D2D7139A85()))
	{
		return 1;
	}
	if (func_44(0))
	{
		return 1;
	}
	if (func_173())
	{
		return 1;
	}
	if (func_172())
	{
		return 1;
	}
	if (!func_137())
	{
		return 1;
	}
	if (func_116())
	{
		return 1;
	}
	if (Global_1319110)
	{
		return 1;
	}
	if (func_26(unk_0x7C7787D2D7139A85(), 0))
	{
		if (func_48(func_114()))
		{
			if (unk_0x42A24CB7B8A08E11(func_114(), -136.1614f, 4617.176f, 124.5134f, -490.3058f, 4924.749f, 159.0677f, 19.5f, 0, 1, 0))
			{
				return 1;
			}
			if (unk_0xF0B9188ED2464C51(func_114()))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (func_124())
	{
		return 1;
	}
	if (!func_164())
	{
		if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
		{
			uVar0 = unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
			if (func_48(uVar0))
			{
				Var1 = { unk_0xACE5E491FC1B0D37(uVar0, 1) };
				if (unk_0xDF956C4106F1E9C5(Var1, &fVar4, 0, 0))
				{
					if (unk_0x2A488C176D52CCA5(Var1, Var1.f_0, Var1.f_1, fVar4) < 3f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_172()
{
	return Global_96008;
}

int func_173()
{
	if (unk_0x222F76006659B0EB(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_174()
{
	return Global_1676879.f_443;
}

int func_175()
{
	if (Global_2437549.f_1155.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

bool func_176()
{
	return unk_0x9B35D07DCD0F0B43() <= Global_22350.f_5878 + 100;
}

bool func_177(int iParam0)
{
	return Local_149.f_110 == iParam0;
}

void func_178()
{
	struct<3> Var0;
	
	if (func_177(1) || func_177(2))
	{
		if (func_48(func_30()))
		{
			Var0 = { unk_0xACE5E491FC1B0D37(func_30(), 1) };
			unk_0xDA1AAECF106B6DA6(Var0, 100f, 200f);
			unk_0xA0E8C4E15B1FD908();
			if ((unk_0xB3EE417AD9F0CAA2() % 120) == 0)
			{
				unk_0x59FC503ECA4D6077(Var0, 300f, 30);
			}
		}
	}
	if (func_177(2))
	{
		if (!unk_0xB3E4EBF4EFCF92BD(unk_0x7C7787D2D7139A85()))
		{
			func_139(unk_0x7C7787D2D7139A85(), 1, 0, 0);
		}
		func_179();
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
		unk_0x583A42EE47B55D77(2, 80, 1);
		unk_0x583A42EE47B55D77(2, 51, 1);
		unk_0x583A42EE47B55D77(2, 190, 1);
		unk_0x583A42EE47B55D77(2, 199, 1);
		unk_0x583A42EE47B55D77(2, 200, 1);
		if (unk_0x59415A8719336539(0))
		{
			unk_0x583A42EE47B55D77(0, 238, 1);
			unk_0x583A42EE47B55D77(0, 237, 1);
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
		}
	}
}

void func_179()
{
	func_180();
}

void func_180()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 359)
	{
		unk_0x572062A62138FBA2(0, iVar0, 1);
		iVar0++;
	}
}

int func_181()
{
	if (!func_147())
	{
		return 1;
	}
	if (func_183())
	{
		return 1;
	}
	if (!func_164())
	{
		if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
		{
			if (!func_182(unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0)))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_182(int iParam0)
{
	if (unk_0xD4B321D9096B01FC(uParam0) && !unk_0xF4B969E0807E76C7(iParam0, 0))
	{
		if (unk_0x300C62F79A4441EB(iParam0, -1, 0) == unk_0x0FA8183DAD2B3203() && unk_0xBAA38708D7439CA7(iParam0, 0, 1))
		{
			switch (unk_0x7F375072508F738F(iParam0))
			{
				case joaat("maverick"):
					return 0;
					break;
				}
			}
	}
	return 0;
}

bool func_183()
{
	return unk_0xA2BC31158C8CEFD2(Global_1687879, 0);
}

int func_184()
{
	var uVar0;
	
	func_192(&uVar0);
	if (Global_1312850 == 0)
	{
		if (!unk_0x393E9918BC37548A())
		{
			return 1;
		}
	}
	if (func_191())
	{
		return 1;
	}
	if (Global_2461241)
	{
		return 1;
	}
	if (func_190())
	{
		return 1;
	}
	if (func_189(159))
	{
		if (!func_188())
		{
			return 1;
		}
	}
	if (func_189(157))
	{
		return 1;
	}
	if (!unk_0x2A983C9CF4EE0D5E())
	{
		return 1;
	}
	if (func_185() != 0)
	{
		if (unk_0x222F76006659B0EB(func_185()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_185()
{
	switch (func_187())
	{
		case 0:
			return func_186();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_186()
{
	switch (Global_2461343)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_187()
{
	return Global_30736;
}

bool func_188()
{
	return Global_2448961.f_598;
}

int func_189(int iParam0)
{
	if (unk_0xD076BFB919B20653(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_190()
{
	return Global_2458999;
}

bool func_191()
{
	return Global_2448961.f_593;
}

void func_192(var uParam0)
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
					func_193(iVar0);
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

void func_193(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x3C1EC42A2CC175C5(1, iParam0, &Var0, 3))
	{
		if (func_28(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x23625FE58BACEBFD(Var0.f_1);
			if (unk_0xD4B321D9096B01FC(uVar3))
			{
				if (unk_0x5294582CE404D3F4(iVar3, 0))
				{
					uVar4 = unk_0x4D57D3E5ECE15A41(iVar3, 0);
					if (unk_0x3D65AB2C3D476E32(uVar4, Var0.f_2) && unk_0xF77CF4BC35906B30())
					{
						if (func_194(uVar4, &bVar5))
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

int func_194(int iParam0, var uParam1)
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

void func_195()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_196(bool bParam0)
{
	int iVar0;
	
	if (!func_164())
	{
		if (func_166("HUNTGUN_1b"))
		{
			unk_0x0D23E3918F7AF11B(1);
		}
		unk_0xBAA4E225DE364743();
	}
	if (func_48(func_30()))
	{
		unk_0x177A62AB5B680108();
	}
	unk_0xD73CEE901CAB1716("helicopterhud");
	unk_0xD73CEE901CAB1716("droneHUD");
	unk_0x749CA887CB0AFEC9(&(Local_149.f_62));
	func_204();
	func_203();
	if (func_111())
	{
		func_110(0);
	}
	unk_0x3A91AF23B79A3E1A();
	unk_0xC3494B83BE64D7A4();
	if (func_147() && !func_123(unk_0x7C7787D2D7139A85()))
	{
		if (!unk_0x88284A9044C97C3A())
		{
			func_139(unk_0x7C7787D2D7139A85(), 1, 0, 0);
			unk_0x860A5CC30A0EF207(unk_0x0FA8183DAD2B3203(), false);
		}
	}
	func_51(&(Local_149.f_113));
	func_51(&(Local_149.f_115));
	func_51(&(Local_149.f_117));
	func_51(&(Local_149.f_119));
	func_133(0);
	func_132(0);
	Local_149.f_32 = -1;
	Local_149.f_31 = 0;
	Local_149.f_5 = 0;
	Local_149.f_24 = 0;
	Local_149.f_26 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		Local_149.f_17[iVar0] = 0;
		func_51(&(Local_149.f_121[iVar0 /*2*/]));
		iVar0++;
	}
	func_88();
	if (unk_0xA2BC31158C8CEFD2(Global_2424073[unk_0x7C7787D2D7139A85() /*421*/].f_380, 0))
	{
		unk_0x3B76114EC84D5812(&(Global_2424073[unk_0x7C7787D2D7139A85() /*421*/].f_380), 0);
	}
	Local_149.f_48 = 0;
	func_202();
	func_200(1, -1);
	if (unk_0x39A01A052D9B5FF0(Local_149.f_108))
	{
		unk_0xAA2276003B2ADF1B(&(Local_149.f_108));
	}
	if (unk_0x39A01A052D9B5FF0(Local_149.f_109))
	{
		unk_0xAA2276003B2ADF1B(&(Local_149.f_109));
	}
	if (!bParam0)
	{
		func_199(0);
		func_198();
	}
	else
	{
		func_197(0);
	}
}

void func_197(bool bParam0)
{
	int iVar0;
	
	Local_149.f_33 = 100;
	Local_149.f_59 = 50f;
	Local_149.f_62 = unk_0x1FAFE9BB9D8960C1(func_38());
	unk_0x71464AEF5F97BED3("SCRIPT\POLICE_CHOPPER_CAM", 0, -1);
	unk_0x4F7B74CE562E3EC6("helicopterhud", 0);
	unk_0x4F7B74CE562E3EC6("droneHUD", 0);
	Local_149.f_29 = unk_0x04B8CCFB93858A27();
	Local_149.f_30 = unk_0x04B8CCFB93858A27();
	func_112(0);
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		Local_149.f_34[iVar0] = -1;
		Local_149.f_41[iVar0] = -1;
		iVar0++;
	}
	if (bParam0)
	{
	}
}

void func_198()
{
	unk_0x9C9E32388A7886A2();
}

void func_199(bool bParam0)
{
	if (bParam0)
	{
		if (!func_183())
		{
			unk_0xA1E7A40E1F56E511(&Global_1687879, 0);
		}
	}
	else if (func_183())
	{
		unk_0x3B76114EC84D5812(&Global_1687879, 0);
	}
}

void func_200(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_18(&iVar0, 0, iParam1))
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
		func_201(&(Global_22350.f_5660[iVar0 /*10*/]));
		Global_22350.f_5721[iVar0] = 0;
	}
	else
	{
		Global_22350.f_5721[iVar0] = 0;
	}
}

void func_201(var uParam0)
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

void func_202()
{
	if (Local_149.f_30 != -1)
	{
		unk_0xCFF6AB47B7B014FF(Local_149.f_30);
		unk_0x0972EA9E8102C153(Local_149.f_30);
		Local_149.f_30 = -1;
	}
	if (Local_149.f_29 != -1)
	{
		unk_0xCFF6AB47B7B014FF(Local_149.f_29);
		unk_0x0972EA9E8102C153(Local_149.f_29);
		Local_149.f_29 = -1;
	}
	if (Local_149.f_49 != -1)
	{
		unk_0xCFF6AB47B7B014FF(Local_149.f_49);
		unk_0x0972EA9E8102C153(Local_149.f_49);
		Local_149.f_49 = -1;
	}
	unk_0x8E3496DF5BF7F24D("DLC_GR_MOC_Turret_View_Scene");
	unk_0x176D8BB131EB6ECB();
}

void func_203()
{
	if (Local_149.f_6 == -1)
	{
		unk_0xCFF6AB47B7B014FF(Local_149.f_6);
		unk_0x0972EA9E8102C153(Local_149.f_6);
		Local_149.f_6 = -1;
	}
}

void func_204()
{
	if (unk_0xD2652A8A890B29BA(Local_149.f_61))
	{
		unk_0xDC5BA18043353983(Local_149.f_61, 0);
		unk_0x0298C8010FD5A69E(0, 0, 3000, 1, 0, 0);
		unk_0xBAA4E225DE364743();
	}
}

void func_205(struct<19> Param0, var uParam19, var uParam20)
{
	unk_0x4CF6FBF2580A447D(32, 0, Param0.f_16);
	func_208(0, -1, 0);
	unk_0xCCD47D736BFD5DE3(&uLocal_148, 1);
	unk_0xFF584A1B7842F821(&uLocal_115, 33);
	if (!func_207())
	{
		func_196(0);
	}
	if (unk_0x393E9918BC37548A())
	{
	}
	else
	{
		func_196(0);
	}
	if (Param0.f_18 == 1)
	{
		func_206(1);
	}
	else
	{
		func_206(0);
	}
	func_197(1);
}

void func_206(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xA2BC31158C8CEFD2(Local_149.f_5, 7))
		{
			unk_0xA1E7A40E1F56E511(&(Local_149.f_5), 7);
		}
	}
	else if (unk_0xA2BC31158C8CEFD2(Local_149.f_5, 7))
	{
		unk_0x3B76114EC84D5812(&(Local_149.f_5), 7);
	}
}

int func_207()
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
		if (func_191())
		{
			return 0;
		}
		if (func_189(157))
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

int func_208(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x306B26A377F9A5BE();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_198();
			}
			else
			{
				return 0;
			}
		}
		if (!func_209())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x393E9918BC37548A())
				{
					if (!bParam2)
					{
						func_198();
					}
					else
					{
						return 0;
					}
				}
				if (func_191())
				{
					if (!bParam2)
					{
						func_198();
					}
					else
					{
						return 0;
					}
				}
				if (func_189(157))
				{
					if (!bParam2)
					{
						func_198();
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
					func_198();
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
				func_198();
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
			func_198();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_209()
{
	return Global_1312850;
}

