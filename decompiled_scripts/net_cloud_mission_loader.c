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
	var uLocal_57 = 10;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 2;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 8;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 8;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	float fLocal_90 = 0f;
	var uLocal_91 = 0;
	struct<5> Local_92 = { 0, 0, 0, 0, 0 } ;
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
	var uLocal_109 = 1;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = -1;
	var uLocal_114 = -1;
	var uLocal_115 = 2;
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
	var uLocal_127 = 2;
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
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	struct<88> Local_185 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_273 = 0;
	bool bLocal_274 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	struct<10> Var1;
	char cVar11[64];
	int iVar19;
	int iVar20;
	bool bVar21;
	char[] cVar22[8];
	int iVar30;
	bool bVar31;
	
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
	fLocal_90 = ((0.05f + 0.275f) - 0.01f);
	unk_0xE3074BC832716971();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		bLocal_274 = false;
		bVar0 = func_246();
		Global_2394783.f_3 = 0;
		Global_2395231 = 0;
		if (func_245())
		{
			bLocal_274 = true;
			Var1 = { Global_2394783.f_4 };
			MemCopy(&cVar11, {Var1.f_3}, 8);
			iVar19 = func_244(Global_2394783.f_4);
			iVar20 = unk_0xFB6B3EEFAB2DD12C();
			bVar21 = Global_2394783.f_14;
			if (bVar21)
			{
				cVar11 = { Global_2394783.f_15 };
			}
			if (Global_2394783.f_25)
			{
				func_243(&Local_92, 1, 1);
				unk_0x4EA098C870B73AB7(&(Global_1589933[iVar20 /*601*/].f_39.f_18), 2);
				unk_0x4EA098C870B73AB7(&(Global_1589933[iVar20 /*601*/].f_39.f_18), 1);
				unk_0x4EA098C870B73AB7(&(Global_1589933[iVar20 /*601*/].f_39.f_18), 3);
				func_242();
				func_241();
				Global_2394783.f_25 = 0;
			}
			if (!unk_0x1995B52453EF6537())
			{
				func_240();
			}
			else if (!func_112(&Local_92, &cVar11, &(Global_1589933[iVar20 /*601*/].f_39.f_18), iVar19, 0, 0, 1, 0, 1, bVar21, 0, 1, 0, 1))
			{
				Global_2394783.f_23 = 0;
				Global_2394783.f_27 = -1;
				if (bVar0)
				{
					func_243(&Local_92, 1, 1);
					unk_0xD04C5FB53F5BC7A8();
					func_111();
					Global_2394783.f_23 = 1;
					Global_2394783.f_24 = 0;
					if (Global_2394783.f_27 < 0)
					{
						Global_2394783.f_27 = 0;
					}
					else
					{
						Global_2394783.f_27++;
						if (Global_2394783.f_27 >= 10)
						{
							func_240();
							Global_2394783.f_25 = 1;
						}
					}
				}
			}
			else if (Local_92.f_0)
			{
				Global_2394783.f_23 = 1;
				Global_2394783.f_24 = 1;
				if (Global_2394783.f_27 < 0)
				{
					Global_2394783.f_27 = 0;
				}
				else
				{
					Global_2394783.f_27++;
					if (Global_2394783.f_27 >= 10)
					{
						func_240();
					}
				}
			}
			else
			{
				Global_2394783.f_26++;
				if (Global_2394783.f_26 >= 3)
				{
					Global_2394783.f_23 = 1;
					Global_2394783.f_24 = 0;
					if (Global_2394783.f_27 < 0)
					{
						Global_2394783.f_27 = 0;
					}
					else
					{
						Global_2394783.f_27++;
						if (Global_2394783.f_27 >= 10)
						{
							func_240();
							Global_2394783.f_25 = 1;
						}
					}
				}
				else
				{
					Global_2394783.f_25 = 1;
				}
			}
		}
		if (func_110())
		{
			bLocal_274 = true;
			MemCopy(&cVar22, {Global_2394783.f_4.f_3}, 8);
			if (Global_2394783.f_23)
			{
				func_240();
			}
			else
			{
				if (Global_2394783.f_25)
				{
					func_243(&Local_92, 1, 1);
					Global_2394783.f_25 = 0;
				}
				if (!func_106(&Local_92, &cVar22, &Local_185))
				{
					Global_2394783.f_23 = 0;
					Global_2394783.f_27 = -1;
				}
				else if (Local_92.f_0)
				{
					Global_2394783.f_23 = 1;
					Global_2394783.f_24 = 1;
					Global_2394783.f_28 = Local_185.f_65;
					Global_2394783.f_29 = Local_185.f_68;
					Global_2394783.f_30 = { Local_185.f_22 };
					Global_2394783.f_46 = { Local_185.f_38 };
					Global_2398730 = { Local_185 };
				}
				else
				{
					Global_2394783.f_23 = 1;
					Global_2394783.f_24 = 0;
				}
			}
		}
		if (func_105())
		{
			bLocal_274 = true;
			if (Global_2394783.f_23)
			{
				func_240();
			}
			else
			{
				if (Global_2394783.f_25)
				{
					func_243(&Local_92, 1, 1);
					Global_2394783.f_25 = 0;
				}
				iVar30 = Local_92.f_4;
				if (!func_5(&Local_92))
				{
					Global_2395231 = 1;
					if (iVar30 != Local_92.f_4)
					{
						if (Local_92.f_4 == 4)
						{
							iLocal_273 = (unk_0x84A97C70FFDEC0C8() + 50000);
						}
					}
					bVar31 = false;
					if (Local_92.f_4 == 4)
					{
						if (unk_0x84A97C70FFDEC0C8() > iLocal_273)
						{
							Global_2394783.f_23 = 1;
							Global_2394783.f_24 = 0;
							bVar31 = true;
						}
					}
					if (!bVar31)
					{
						Global_2394783.f_23 = 0;
						Global_2394783.f_27 = -1;
					}
				}
				else if (Local_92.f_0)
				{
					Global_2394783.f_23 = 1;
					Global_2394783.f_24 = 1;
				}
				else
				{
					Global_2394783.f_23 = 1;
					Global_2394783.f_24 = 0;
				}
			}
		}
		if (!bLocal_274)
		{
			if (func_4(unk_0xFB6B3EEFAB2DD12C()) || func_3(unk_0xFB6B3EEFAB2DD12C()))
			{
				if (!func_1(unk_0xFB6B3EEFAB2DD12C(), 1, 0))
				{
					unk_0x01DFCA3621B68C4A();
				}
			}
		}
	}
}

int func_1(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_2())
	{
		return 0;
	}
	if (unk_0xF44A5E894FE76438(Global_1589933[iParam0 /*601*/].f_257.f_13, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0xF44A5E894FE76438(Global_1589933[iParam0 /*601*/].f_257.f_13, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2421621[iParam0 /*358*/].f_312.f_1 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_2()
{
	return -1;
}

bool func_3(int iParam0)
{
	return Global_2421621[iParam0 /*358*/].f_118 == 7;
}

bool func_4(int iParam0)
{
	return Global_2421621[iParam0 /*358*/].f_118 == 2;
}

int func_5(bool bParam0)
{
	if (!func_104())
	{
		if (func_101())
		{
			return 1;
		}
	}
	switch (bParam0->f_4)
	{
		case 0:
			if (func_100())
			{
				return 0;
			}
			if (func_99())
			{
				return 0;
			}
			func_98();
			func_97();
			func_96();
			if (func_104())
			{
				unk_0x911742F2A1E4DBE7(1);
			}
			else
			{
				unk_0x911742F2A1E4DBE7(0);
			}
			bParam0->f_13 = Global_2395230;
			bParam0->f_9 = 1100;
			if (bParam0->f_13 == 0)
			{
				return 1;
			}
			func_95(bParam0, 24);
			break;
		
		case 24:
			if (func_93(bParam0->f_13))
			{
				func_243(bParam0, 1, 1);
				*bParam0 = 1;
				return 1;
			}
			else
			{
				func_95(bParam0, 1);
			}
			break;
		
		case 1:
			if (unk_0x6EBBDEA1ECC91F1D(&Global_2394845, bParam0->f_13, 1, func_92(0)))
			{
				func_95(bParam0, 2);
			}
			break;
		
		case 2:
			if (unk_0x6E7D49ED99D8B2D1())
			{
				if (unk_0xE59A3DEAF4D05EDE())
				{
					*bParam0 = 0;
				}
				else
				{
					func_243(bParam0, 1, 1);
					bParam0->f_40 = unk_0x7EB306499DB95039();
					*bParam0 = 0;
					return 1;
				}
				if (unk_0xB3838189D8C98447() > 0)
				{
					func_95(bParam0, 4);
				}
				else
				{
					func_243(bParam0, 1, 1);
					*bParam0 = 0;
					return 1;
				}
			}
			break;
		
		case 4:
			if (unk_0xAC26FC368ADC3DE5())
			{
				func_97();
				*bParam0 = 0;
				return 1;
			}
			if (bParam0->f_9 >= (1100 + bParam0->f_13))
			{
				func_243(bParam0, 1, 1);
				*bParam0 = 1;
				return 1;
			}
			else
			{
				bParam0->f_7 = 0;
				while (bParam0->f_7 < bParam0->f_13)
				{
					if (bParam0->f_9 < 1118)
					{
						if (unk_0xBD4D163DE2E96729() != 0)
						{
							unk_0xB97220169CDC1C4B();
						}
						if (unk_0x194BE26D9C2BA32A(bParam0->f_7))
						{
							func_6(bParam0, 1);
						}
						else if (bParam0->f_8 > 200)
						{
							func_97();
							bParam0->f_7++;
							bParam0->f_8 = 0;
						}
					}
					bParam0->f_7++;
				}
			}
			break;
	}
	return 0;
}

void func_6(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<88> Var5;
	int iVar93;
	
	iVar0 = unk_0xBD4D163DE2E96729();
	iVar1 = unk_0x4C4E1CA899A313BB(iVar0, "mission");
	iVar2 = unk_0x4C4E1CA899A313BB(iVar1, "gen");
	if (func_104())
	{
		if (func_91(unk_0x899DB4E43EFCE6C9(bParam0->f_7)))
		{
			if (unk_0xBD4D163DE2E96729() != 0)
			{
				unk_0xB97220169CDC1C4B();
			}
			return;
		}
	}
	if ((unk_0x4985D6D7F7AB891A(iVar2, "type") == 0 && unk_0x4985D6D7F7AB891A(iVar2, "subtype") == 7) && bParam0->f_9 < 1100)
	{
		if (unk_0xBD4D163DE2E96729() != 0)
		{
			unk_0xB97220169CDC1C4B();
		}
		return;
	}
	if (Global_262145.f_6551)
	{
		if (unk_0x4985D6D7F7AB891A(iVar2, "type") == 0)
		{
			if (unk_0x4985D6D7F7AB891A(iVar2, "subtype") == 1 || unk_0x4985D6D7F7AB891A(iVar2, "subtype") == 7)
			{
				if (unk_0xBD4D163DE2E96729() != 0)
				{
					unk_0xB97220169CDC1C4B();
				}
				return;
			}
			iVar3 = unk_0x4985D6D7F7AB891A(iVar2, "optbs");
			if (unk_0xF44A5E894FE76438(iVar3, 4) || unk_0xF44A5E894FE76438(iVar3, 12))
			{
				if (unk_0xBD4D163DE2E96729() != 0)
				{
					unk_0xB97220169CDC1C4B();
				}
				return;
			}
		}
	}
	if (bParam0->f_9 == 0 && bParam1 == 0)
	{
		func_90();
		Global_794643.f_2 = 0;
		Global_794643.f_112968 = 0;
		func_89();
		iVar4 = 0;
		while (iVar4 < 13)
		{
			Global_794643.f_112983[iVar4] = 0;
			Global_794643.f_112969[iVar4] = 0;
			iVar4++;
		}
		if (func_86())
		{
			func_85(1);
			func_85(0);
			func_83(1);
		}
	}
	Var5.f_65 = -1;
	Var5.f_66 = -1;
	Var5.f_67 = 2;
	Global_794643.f_4[bParam0->f_9 /*88*/] = { Var5 };
	if (!func_104())
	{
		Global_794643.f_98389[bParam0->f_9 /*13*/].f_5 = unk_0x5640710AB90BB7AE(bParam0->f_7, 0);
		Global_794643.f_4[bParam0->f_9 /*88*/].f_67 = func_82(bParam0->f_7);
		Global_794643.f_4[bParam0->f_9 /*88*/].f_66 = unk_0x5640710AB90BB7AE(bParam0->f_7, Global_794643.f_4[bParam0->f_9 /*88*/].f_67);
		Global_794643.f_98389[bParam0->f_9 /*13*/].f_6 = unk_0x4AC9C5FE2ADC6484(bParam0->f_7);
	}
	Global_794643.f_4[bParam0->f_9 /*88*/].f_56 = { func_81(iVar2, "start") };
	if (unk_0xF0E984A1CED01E3C(iVar2, "optbs") == 2)
	{
		Global_794643.f_4[bParam0->f_9 /*88*/].f_76 = unk_0x4985D6D7F7AB891A(iVar2, "optbs");
	}
	unk_0x4EA098C870B73AB7(&(Global_794643.f_4[bParam0->f_9 /*88*/].f_76), 15);
	unk_0x4EA098C870B73AB7(&(Global_794643.f_4[bParam0->f_9 /*88*/].f_76), 18);
	unk_0x4EA098C870B73AB7(&(Global_794643.f_4[bParam0->f_9 /*88*/].f_76), 19);
	unk_0x4EA098C870B73AB7(&(Global_794643.f_4[bParam0->f_9 /*88*/].f_76), 29);
	unk_0x4EA098C870B73AB7(&(Global_794643.f_4[bParam0->f_9 /*88*/].f_76), 28);
	Global_794643.f_4[bParam0->f_9 /*88*/].f_59 = { func_81(iVar2, "cam") };
	Global_794643.f_4[bParam0->f_9 /*88*/].f_62 = { func_80(iVar2) };
	if (!func_104())
	{
		if (unk_0x82F1E66C756CDECA(unk_0x4AC9C5FE2ADC6484(bParam0->f_7)))
		{
			Global_794643.f_4[bParam0->f_9 /*88*/].f_54 = unk_0x141D60A95907EF5D(bParam0->f_7);
		}
		else
		{
			Global_794643.f_4[bParam0->f_9 /*88*/].f_54 = -1;
		}
	}
	if (unk_0xF0E984A1CED01E3C(iVar2, "mgrk") == 2)
	{
		Global_794643.f_98389[bParam0->f_9 /*13*/].f_8 = unk_0x4985D6D7F7AB891A(iVar2, "mgrk");
	}
	if (unk_0xF0E984A1CED01E3C(iVar2, "mght") == 2)
	{
		Global_794643.f_98389[bParam0->f_9 /*13*/].f_9 = unk_0x4985D6D7F7AB891A(iVar2, "mght");
	}
	Global_794643.f_98389[bParam0->f_9 /*13*/].f_11 = unk_0x4985D6D7F7AB891A(iVar2, "cncmbs");
	Global_794643.f_4[bParam0->f_9 /*88*/].f_69 = unk_0x4985D6D7F7AB891A(iVar2, "min");
	Global_794643.f_4[bParam0->f_9 /*88*/].f_71 = unk_0x4985D6D7F7AB891A(iVar2, "num");
	if (Global_794643.f_4[bParam0->f_9 /*88*/].f_71 == -1)
	{
		Global_794643.f_4[bParam0->f_9 /*88*/].f_71 = 30;
	}
	StringCopy(&(Global_794643.f_4[bParam0->f_9 /*88*/].f_22), unk_0xC6F867A99F8F655E(bParam0->f_7), 64);
	Global_794643.f_4[bParam0->f_9 /*88*/].f_65 = unk_0x4985D6D7F7AB891A(iVar2, "type");
	if (func_104())
	{
		StringCopy(&(Global_794643.f_4[bParam0->f_9 /*88*/].f_6), func_79(), 64);
	}
	else
	{
		StringCopy(&(Global_794643.f_4[bParam0->f_9 /*88*/].f_6), unk_0x8DE41FE6C7E476A4(bParam0->f_7), 64);
	}
	Global_794643.f_4[bParam0->f_9 /*88*/].f_70 = unk_0x4985D6D7F7AB891A(iVar2, "rank");
	Global_794643.f_98389[bParam0->f_9 /*13*/] = unk_0x4985D6D7F7AB891A(iVar2, "tnum");
	if (!func_104())
	{
		Global_794643.f_4[bParam0->f_9 /*88*/].f_73 = func_78(unk_0xFEEE999D88E37E57(bParam0->f_7, 0), unk_0xF20E78AE771284D7(bParam0->f_7, 0));
		Global_794643.f_98389[bParam0->f_9 /*13*/].f_4 = unk_0xF20E78AE771284D7(bParam0->f_7, 0);
	}
	Global_794643.f_4[bParam0->f_9 /*88*/].f_75 = unk_0x4985D6D7F7AB891A(iVar2, "charcon");
	Global_794643.f_4[bParam0->f_9 /*88*/].f_78 = unk_0x4985D6D7F7AB891A(iVar2, "ltm");
	if (Global_794643.f_4[bParam0->f_9 /*88*/].f_65 == 6 && !bParam1)
	{
		if (Global_970275.f_598 < 85)
		{
			Global_794643.f_4[bParam0->f_9 /*88*/].f_68 = Global_970275.f_598;
			Global_970275[Global_794643.f_4[bParam0->f_9 /*88*/].f_68 /*3*/] = { func_81(iVar2, "area") };
			if (unk_0xF0E984A1CED01E3C(iVar2, "rad") == 2)
			{
				Global_970275.f_512[Global_794643.f_4[bParam0->f_9 /*88*/].f_68] = unk_0xBBDA792448DB5A89(unk_0x4985D6D7F7AB891A(iVar2, "rad"));
			}
			else
			{
				Global_970275.f_512[Global_794643.f_4[bParam0->f_9 /*88*/].f_68] = unk_0x1B52B6FA98557E78(iVar2, "rad");
			}
			Global_970275.f_256[Global_794643.f_4[bParam0->f_9 /*88*/].f_68 /*3*/] = { Global_794643.f_4[bParam0->f_9 /*88*/].f_56 };
			Global_794643.f_4[bParam0->f_9 /*88*/].f_56 = { Global_794643.f_4[bParam0->f_9 /*88*/].f_59 };
			Global_970275.f_598++;
		}
	}
	else
	{
		Global_794643.f_4[bParam0->f_9 /*88*/].f_68 = unk_0x4985D6D7F7AB891A(iVar2, "subtype");
		Global_794643.f_4[bParam0->f_9 /*88*/].f_80 = unk_0x4985D6D7F7AB891A(iVar2, "adverm");
	}
	StringCopy(&(Global_794643.f_4[bParam0->f_9 /*88*/]), unk_0x899DB4E43EFCE6C9(bParam0->f_7), 24);
	iVar93 = unk_0x6D9FF4C899CD785F(&(Global_794643.f_4[bParam0->f_9 /*88*/]));
	Global_794643.f_98389[bParam0->f_9 /*13*/].f_3 = iVar93;
	func_77(Global_794643.f_4[bParam0->f_9 /*88*/].f_65, &(Global_794643.f_4[bParam0->f_9 /*88*/].f_71), &(Global_794643.f_4[bParam0->f_9 /*88*/].f_69));
	if (func_104())
	{
		if (unk_0xCC257DA11A122B5F(unk_0x899DB4E43EFCE6C9(bParam0->f_7), "lUo6JFfliE-ZQ_8gd90ZxQ"))
		{
			Global_794643.f_4[bParam0->f_9 /*88*/].f_56 = { 897.5109f, -2340.599f, 29.4461f };
		}
	}
	unk_0xB8A73E7DA87B2968(&(Global_794643.f_4[bParam0->f_9 /*88*/].f_76), 13);
	if (!func_104())
	{
		Global_794643.f_98389[bParam0->f_9 /*13*/].f_1 = unk_0x6D9FF4C899CD785F(unk_0x2E64E44DB158AAD0(bParam0->f_7));
	}
	if (Global_794643.f_4[bParam0->f_9 /*88*/].f_65 == 0)
	{
		Global_794643.f_98389[bParam0->f_9 /*13*/].f_2 = func_76(Global_794643.f_98389[bParam0->f_9 /*13*/].f_1);
	}
	if ((Global_794643.f_4[bParam0->f_9 /*88*/].f_65 < 13 && !bParam1) && !func_75(Global_794643.f_98389[bParam0->f_9 /*13*/].f_1))
	{
		if (Global_794643.f_4[bParam0->f_9 /*88*/].f_70 <= 1000)
		{
			Global_794643.f_112969[Global_794643.f_4[bParam0->f_9 /*88*/].f_65]++;
			if (func_74(bParam0->f_9))
			{
				Global_794643.f_112969[7]++;
			}
			else if (func_73(bParam0->f_9))
			{
				Global_794643.f_112969[4]++;
			}
			else if (func_72(bParam0->f_9))
			{
				Global_794643.f_112969[10]++;
			}
			else if (func_71(bParam0->f_9))
			{
				Global_794643.f_112969[12]++;
			}
		}
	}
	if (unk_0xBD4D163DE2E96729() != 0)
	{
		unk_0xB97220169CDC1C4B();
	}
	if (!func_104())
	{
		if (func_75(Global_794643.f_98389[bParam0->f_9 /*13*/].f_1))
		{
			Global_794643.f_4[bParam0->f_9 /*88*/].f_69 = Global_794643.f_4[bParam0->f_9 /*88*/].f_71;
		}
		if ((Global_794643.f_112968 < 5 && Global_794643.f_4[bParam0->f_9 /*88*/].f_65 == 0) && Global_794643.f_4[bParam0->f_9 /*88*/].f_68 == 1)
		{
			Global_794643.f_98389[bParam0->f_9 /*13*/].f_10 = Global_794643.f_112968;
			StringCopy(&(Global_794643.f_112937[Global_794643.f_112968 /*6*/]), unk_0x2E64E44DB158AAD0(bParam0->f_7), 24);
			Global_794643.f_112968++;
		}
		func_56(Global_794643.f_98389[bParam0->f_9 /*13*/].f_1, &(Global_794643.f_4[bParam0->f_9 /*88*/].f_76), &(Global_794643.f_4[bParam0->f_9 /*88*/].f_77), Global_794643.f_4[bParam0->f_9 /*88*/].f_80);
		func_52(Global_794643.f_98389[bParam0->f_9 /*13*/].f_1, bParam0->f_9);
		if (bParam1)
		{
			if (unk_0xA5BA88B1E535CA78(bParam0->f_7))
			{
				unk_0xB8A73E7DA87B2968(&(Global_794643.f_4[bParam0->f_9 /*88*/].f_76), 14);
			}
		}
		else if (!func_75(Global_794643.f_98389[bParam0->f_9 /*13*/].f_1))
		{
			if (func_32(Global_794643.f_98389[bParam0->f_9 /*13*/].f_1, Global_794643.f_4[bParam0->f_9 /*88*/].f_80))
			{
				Global_794643.f_112969[11]++;
			}
			if (unk_0xA5BA88B1E535CA78(bParam0->f_7))
			{
				unk_0xB8A73E7DA87B2968(&(Global_794643.f_4[bParam0->f_9 /*88*/].f_76), 14);
				if (unk_0xF44A5E894FE76438(Global_794643.f_4[bParam0->f_9 /*88*/].f_76, 1) || Global_794643.f_4[bParam0->f_9 /*88*/].f_68 == 2)
				{
					Global_794643.f_112969[9]++;
				}
				if (Global_794643.f_4[bParam0->f_9 /*88*/].f_70 <= 1000)
				{
					if (Global_794643.f_4[bParam0->f_9 /*88*/].f_65 < 13)
					{
						Global_794643.f_112983[Global_794643.f_4[bParam0->f_9 /*88*/].f_65]++;
					}
				}
				Global_794643.f_98389[bParam0->f_9 /*13*/].f_7 = unk_0xB85101D69AA338A4(bParam0->f_7);
			}
		}
	}
	if (!bParam1 && !func_75(Global_794643.f_98389[bParam0->f_9 /*13*/].f_1))
	{
		if (func_86())
		{
			func_30(Global_794643.f_4[bParam0->f_9 /*88*/].f_65, Global_794643.f_4[bParam0->f_9 /*88*/].f_68, unk_0xF44A5E894FE76438(Global_794643.f_4[bParam0->f_9 /*88*/].f_76, 14), Global_794643.f_4[bParam0->f_9 /*88*/].f_70, 0);
			func_28(Global_794643.f_4[bParam0->f_9 /*88*/].f_65, Global_794643.f_4[bParam0->f_9 /*88*/].f_68, Global_794643.f_4[bParam0->f_9 /*88*/].f_70, 0);
			func_26(Global_794643.f_4[bParam0->f_9 /*88*/].f_65, Global_794643.f_4[bParam0->f_9 /*88*/].f_68, Global_794643.f_4[bParam0->f_9 /*88*/].f_75, Global_794643.f_4[bParam0->f_9 /*88*/].f_70, unk_0xF44A5E894FE76438(Global_794643.f_4[bParam0->f_9 /*88*/].f_76, 14));
			func_7(Global_794643.f_4[bParam0->f_9 /*88*/].f_65, Global_794643.f_4[bParam0->f_9 /*88*/].f_68, Global_794643.f_4[bParam0->f_9 /*88*/].f_75, Global_794643.f_4[bParam0->f_9 /*88*/].f_70);
		}
	}
	if (Global_794643.f_4[bParam0->f_9 /*88*/].f_65 == 6)
	{
		Global_970874[0 /*37*/]++;
	}
	bParam0->f_9++;
	Global_794643.f_2++;
	if (unk_0xBD4D163DE2E96729() != 0)
	{
		unk_0xB97220169CDC1C4B();
	}
}

void func_7(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (!func_14(iParam0, iParam1, iParam2, &iVar0, iParam3))
	{
		return;
	}
	iVar1 = func_13(iVar0);
	if (iVar1 == -1)
	{
		return;
	}
	func_8(iVar1, 1);
}

void func_8(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_12(iParam0);
	iVar0 = (iVar0 + iParam1);
	if (!func_11(iParam0))
	{
		func_10(iParam0, iVar0);
	}
	else
	{
		func_9(iParam0, iVar0);
	}
}

void func_9(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xB924315F0872835A(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1362329 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1362331 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1362331 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1362332 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1362333 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1362334 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1362335 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1362336 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1362337 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1362338 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1362339 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1362340 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1362341 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1362342 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1362343 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1362344 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1362345 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_10(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xB924315F0872835A(iVar0, iParam1, 1);
	}
}

int func_11(int iParam0)
{
	if (Global_1362328)
	{
		switch (iParam0)
		{
			case joaat("mpply_crew_0_id"):
			case joaat("mpply_crew_1_id"):
			case joaat("mpply_crew_2_id"):
			case joaat("mpply_crew_3_id"):
			case joaat("mpply_crew_4_id"):
			case joaat("mpply_crew_local_xp_0"):
			case joaat("mpply_crew_local_xp_1"):
			case joaat("mpply_crew_local_xp_2"):
			case joaat("mpply_crew_local_xp_3"):
			case joaat("mpply_crew_local_xp_4"):
			case joaat("mpply_became_cheater_num"):
			case joaat("mpply_friendly"):
			case joaat("mpply_offensive_language"):
			case joaat("mpply_griefing"):
			case joaat("mpply_helpful"):
			case joaat("mpply_offensive_tagplate"):
			case joaat("mpply_offensive_ugc"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_12(var uParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = uParam0;
	if (unk_0x5BC7B5709E38CBE0(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_13(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return joaat("mpply_total_contact_0");
		
		case 19:
			return joaat("mpply_total_contact_1");
		
		case 86:
			return joaat("mpply_total_contact_2");
		
		case 20:
			return joaat("mpply_total_contact_3");
		
		case 31:
			return joaat("mpply_total_contact_4");
		
		case 2:
			return joaat("mpply_total_contact_5");
		
		case 18:
			return joaat("mpply_total_contact_6");
		
		default:
	}
	return -1;
}

int func_14(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4)
{
	int iVar0;
	
	if (iParam0 != 0)
	{
		return 0;
	}
	if (iParam1 != 2)
	{
		return 0;
	}
	if (func_20(unk_0xFB6B3EEFAB2DD12C()) < iParam4)
	{
		return 0;
	}
	iVar0 = func_15(iParam2);
	*uParam3 = 145;
	if (iVar0 != 0)
	{
		*uParam3 = iVar0;
	}
	if (*uParam3 == 145)
	{
		return 0;
	}
	return 1;
}

int func_15(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam0 > 0 && iParam0 <= 200)
	{
		if (iParam0 > 90)
		{
			return 0;
		}
		switch (iParam0)
		{
			case 10:
				return 12;
			
			case 17:
				return 19;
			
			case 18:
				return 20;
			
			case 28:
				return 31;
			
			case 75:
				return 12;
			
			default:
		}
		return iParam0;
	}
	iVar0 = func_16(iParam0);
	if (iVar0 == 145)
	{
		return 0;
	}
	return iVar0;
}

int func_16(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 145;
	}
	iVar0 = 0;
	iVar1 = 145;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = func_18(iVar0);
		if (iParam0 == func_17(iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return 145;
}

int func_17(int iParam0)
{
	switch (iParam0)
	{
		case 86:
			return joaat("gerald");
		
		case 19:
			return joaat("LAMAR");
		
		case 12:
			return joaat("lester");
		
		case 31:
			return -328739832;
		
		case 20:
			return -1984782235;
		
		case 18:
			return joaat("simeon");
		
		case 2:
			return joaat("TREVOR");
		
		case 76:
			return joaat("AGENT14");
		
		case 22:
			return joaat("pa");
		
		case 145:
			return 0;
		
		default:
	}
	return 0;
}

int func_18(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	uVar1 = func_19(iVar0);
	return uVar1;
}

int func_19(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 86;
		
		case 1:
			return 19;
		
		case 2:
			return 12;
		
		case 3:
			return 31;
		
		case 4:
			return 20;
		
		case 5:
			return 18;
		
		case 6:
			return 2;
		
		case 7:
			return 76;
		
		case 8:
			return 22;
		
		default:
	}
	return 19;
}

int func_20(int iParam0)
{
	int iVar0;
	
	iVar0 = func_22(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_21(iVar0, 0);
}

int func_21(int iParam0, int iParam1)
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
		if (Global_279816[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_279816[iVar3] < iParam0)
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

int func_22(int iParam0)
{
	if (Global_1312462.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
			{
				return Global_1362449[func_24(-1)];
			}
			else if (func_23(iParam0))
			{
				return Global_1589933[iParam0 /*601*/].f_202.f_1;
			}
		}
	}
	else
	{
		return Global_1362449[func_24(-1)];
	}
	return 0;
}

int func_23(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xF44A5E894FE76438(Global_2433082.f_1, iParam0);
	}
	return 1;
}

int func_24(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_25();
		if (iVar1 > -1)
		{
			Global_2503486 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2503486 = 1;
		}
	}
	return iVar0;
}

int func_25()
{
	return Global_1312731;
}

void func_26(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!bParam4)
	{
		return;
	}
	if (!func_14(iParam0, iParam1, iParam2, &iVar0, iParam3))
	{
		return;
	}
	iVar1 = func_27(iVar0);
	if (iVar1 == -1)
	{
		return;
	}
	func_8(iVar1, 1);
}

int func_27(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return joaat("mpply_unique_contact_0");
		
		case 19:
			return joaat("mpply_unique_contact_1");
		
		case 86:
			return joaat("mpply_unique_contact_2");
		
		case 20:
			return joaat("mpply_unique_contact_3");
		
		case 31:
			return joaat("mpply_unique_contact_4");
		
		case 2:
			return joaat("mpply_unique_contact_5");
		
		case 18:
			return joaat("mpply_unique_contact_6");
		
		default:
	}
	return -1;
}

void func_28(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (func_86())
	{
		if (iParam0 == 0)
		{
			if (((iParam1 != 6 && iParam1 != 5) && iParam1 != 4) && iParam1 != 9)
			{
				if (func_20(unk_0xFB6B3EEFAB2DD12C()) < iParam2)
				{
					return;
				}
			}
		}
		iVar0 = func_29(iParam0, iParam1, bParam3);
		if (iVar0 == -1)
		{
			return;
		}
		func_8(iVar0, 1);
	}
}

int func_29(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 2:
			if (bParam2)
			{
				return joaat("mpply_available_races_v");
			}
			else
			{
				return joaat("mpply_available_races");
			}
			break;
		
		case 1:
			if (bParam2)
			{
				return joaat("mpply_available_dms_v");
			}
			else
			{
				return joaat("mpply_available_dms");
			}
			break;
		
		case 8:
			if (bParam2)
			{
				return joaat("mpply_available_paras_v");
			}
			else
			{
				return joaat("mpply_available_paras");
			}
			break;
		
		case 3:
			if (bParam2)
			{
				return joaat("mpply_available_survival_v");
			}
			else
			{
				return joaat("mpply_available_survival");
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 6:
					if (bParam2)
					{
						return joaat("mpply_available_ctf_v");
					}
					else
					{
						return joaat("mpply_available_ctf");
					}
					break;
				
				case 5:
					if (bParam2)
					{
						return joaat("mpply_available_lts_v");
					}
					else
					{
						return joaat("mpply_available_lts");
					}
					break;
				
				case 4:
					if (bParam2)
					{
						return joaat("mpply_available_versus_v");
					}
					else
					{
						return joaat("mpply_available_versus");
					}
					break;
				
				case 9:
					break;
				
				case 1:
					if (bParam2)
					{
						return joaat("mpply_available_heist_finale_v");
					}
					else
					{
						return joaat("mpply_available_heist_finale");
					}
					break;
				
				case 7:
					if (bParam2)
					{
						return joaat("mpply_available_heist_planv");
					}
					else
					{
						return joaat("mpply_available_heist_plan");
					}
					break;
			}
			if (bParam2)
			{
				return joaat("mpply_available_missions_v");
			}
			else
			{
				return joaat("mpply_available_missions");
			}
			break;
	}
	return -1;
}

void func_30(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_86())
	{
		return;
	}
	if (!bParam2)
	{
		return;
	}
	if (iParam0 == 0)
	{
		if (((iParam1 != 6 && iParam1 != 5) && iParam1 != 4) && iParam1 != 9)
		{
			if (func_20(unk_0xFB6B3EEFAB2DD12C()) < iParam3)
			{
				return;
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (iParam3 >= 9999)
		{
			return;
		}
	}
	iVar0 = func_31(iParam0, iParam1, bParam4);
	if (iVar0 == -1)
	{
		return;
	}
	func_8(iVar0, 1);
}

int func_31(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 2:
			if (bParam2)
			{
				return joaat("mpply_unique_races_v");
			}
			else
			{
				return joaat("mpply_unique_races");
			}
			break;
		
		case 1:
			if (bParam2)
			{
				return joaat("mpply_unique_dms_v");
			}
			else
			{
				return joaat("mpply_unique_dms");
			}
			break;
		
		case 8:
			if (bParam2)
			{
				return joaat("mpply_unique_paras_v");
			}
			else
			{
				return joaat("mpply_unique_paras");
			}
			break;
		
		case 3:
			if (bParam2)
			{
				return joaat("mpply_unique_survival_v");
			}
			else
			{
				return joaat("mpply_unique_survival");
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 6:
					if (bParam2)
					{
						return joaat("mpply_unique_ctf_v");
					}
					else
					{
						return joaat("mpply_unique_ctf");
					}
					break;
				
				case 5:
					if (bParam2)
					{
						return joaat("mpply_unique_lts_v");
					}
					else
					{
						return joaat("mpply_unique_lts");
					}
					break;
				
				case 4:
					if (bParam2)
					{
						return joaat("mpply_unique_versus_v");
					}
					else
					{
						return joaat("mpply_unique_versus");
					}
					break;
				
				case 9:
					break;
				
				case 1:
					if (bParam2)
					{
						return joaat("mpply_unique_heist_finale_v");
					}
					else
					{
						return joaat("mpply_unique_heist_finale");
					}
					break;
				
				case 7:
					if (bParam2)
					{
						return joaat("mpply_unique_heist_planning_v");
					}
					else
					{
						return joaat("mpply_unique_heist_planning");
					}
					break;
			}
			if (bParam2)
			{
				return joaat("mpply_unique_missions_v");
			}
			else
			{
				return joaat("mpply_unique_missions");
			}
			break;
	}
	return -1;
}

int func_32(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		return 1;
	}
	if ((((((((((((((((((func_51(iParam0) || func_50(iParam0)) || func_49(iParam0)) || func_48(iParam0)) || func_47(iParam0)) || func_46(iParam0)) || func_45(iParam0)) || func_44(iParam0)) || func_43(iParam0)) || func_42(iParam0)) || func_41(iParam0)) || func_40(iParam0)) || func_39(iParam0)) || func_38(iParam0)) || func_37(iParam0)) || func_36(iParam0)) || func_35(iParam0)) || func_34(iParam0)) || func_33(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_33(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_7972[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_34(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_8005[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_35(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_7994[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_36(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_7983[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_37(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (iParam0 == Global_262145.f_7959[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_38(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_7948[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_39(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_7937[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_40(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_7926[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_41(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_7829[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_42(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_7851[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_43(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_7840[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_44(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_7818[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_45(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_7807[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_46(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_7796[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_47(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_7762[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_48(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_7770[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_49(int iParam0)
{
	if ((((iParam0 == Global_262145.f_7757 || iParam0 == Global_262145.f_7758) || iParam0 == Global_262145.f_7759) || iParam0 == Global_262145.f_7760) || iParam0 == Global_262145.f_7761)
	{
		return 1;
	}
	return 0;
}

int func_50(int iParam0)
{
	if ((((iParam0 == Global_262145.f_7752 || iParam0 == Global_262145.f_7753) || iParam0 == Global_262145.f_7754) || iParam0 == Global_262145.f_7755) || iParam0 == Global_262145.f_7756)
	{
		return 1;
	}
	return 0;
}

int func_51(int iParam0)
{
	if ((((((iParam0 == Global_262145.f_7745 || iParam0 == Global_262145.f_7746) || iParam0 == Global_262145.f_7747) || iParam0 == Global_262145.f_7748) || iParam0 == Global_262145.f_7749) || iParam0 == Global_262145.f_7750) || iParam0 == Global_262145.f_7751)
	{
		return 1;
	}
	return 0;
}

void func_52(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 >= 1100)
	{
		return;
	}
	if (iParam0 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iParam0 == Global_262145.f_7778[iVar0])
		{
			Global_794643.f_112924[0 /*11*/][iVar0] = iParam1;
			Global_794643.f_4[iParam1 /*88*/].f_56 = { func_55(0, iVar0) };
			Global_794643.f_4[iParam1 /*88*/].f_59 = { func_54(0, iVar0) };
			Global_794643.f_4[iParam1 /*88*/].f_62 = { func_53(0, iVar0) };
			Global_794643.f_98389[iParam1 /*13*/].f_12 = 0;
			Global_794643.f_4[iParam1 /*88*/].f_68 = 8;
			Global_794643.f_4[iParam1 /*88*/].f_75 = 0;
			Global_794643.f_4[iParam1 /*88*/].f_78 = 16777215;
			Global_794643.f_4[iParam1 /*88*/].f_73 = -1;
			if (Global_794643.f_112924[0 /*11*/].f_9 <= iVar0)
			{
				Global_794643.f_112924[0 /*11*/].f_9 = iVar0 + 1;
			}
		}
		else if (iParam0 == Global_262145.f_7787[iVar0])
		{
			Global_794643.f_98389[iParam1 /*13*/].f_12 = 0;
			Global_794643.f_4[iParam1 /*88*/].f_68 = 8;
			Global_794643.f_4[iParam1 /*88*/].f_75 = 0;
			Global_794643.f_4[iParam1 /*88*/].f_78 = 16777215;
			Global_794643.f_4[iParam1 /*88*/].f_73 = -1;
		}
		iVar0++;
	}
}

Vector3 func_53(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -15.6168f, 0.1008f, -149.8604f;
				
				case 1:
					return 3.5927f, 0.1008f, 156.3615f;
				
				case 2:
					return 3.4157f, 0.112f, 16.4938f;
				
				case 3:
					return 5.3856f, 0f, 112.9827f;
				
				case 4:
					return 4.2705f, 0f, 19.1749f;
				
				case 5:
					return -5.2724f, 0f, 42.8827f;
				
				case 6:
					return 12.4243f, 0f, 57.4707f;
				
				case 7:
					return -15.6168f, 0.1008f, -149.8604f;
				
				default:
			}
			return 2.8273f, 0f, 0.0625f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_54(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -209.1766f, -1305.476f, 34.7404f;
				
				case 1:
					return -1601.532f, -1039.506f, 17.2286f;
				
				case 2:
					return -8.6889f, -1727.83f, 30.3896f;
				
				case 3:
					return 1997.496f, 3054.69f, 54.605f;
				
				case 4:
					return 967.5151f, -1735.46f, 32.0426f;
				
				case 5:
					return 779.6009f, -1424.604f, 32.9774f;
				
				case 6:
					return -331.129f, -1492.046f, 30.3228f;
				
				case 7:
					return -209.1766f, -1305.476f, 34.7404f;
				
				default:
			}
			return -61.784f, -1538.702f, 43.8935f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_55(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -210.4709f, -1306.318f, 30.336f;
				
				case 1:
					return -1598.327f, -1040.538f, 12.0183f;
				
				case 2:
					return -21.2711f, -1732.453f, 28.304f;
				
				case 3:
					return 1992.482f, 3058.078f, 46.0576f;
				
				case 4:
					return 960.3523f, -1745.844f, 30.2208f;
				
				case 5:
					return 775.7347f, -1367.343f, 25.5669f;
				
				case 6:
					return -321.3307f, -1495.598f, 29.6536f;
				
				case 7:
					return -210.4709f, -1306.318f, 30.336f;
				
				default:
			}
			return -210.4709f, -1306.318f, 30.336f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_56(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (func_51(iParam0))
	{
		unk_0xB8A73E7DA87B2968(uParam1, 15);
	}
	else if (func_50(iParam0))
	{
		unk_0xB8A73E7DA87B2968(uParam1, 18);
	}
	else if (func_49(iParam0))
	{
		unk_0xB8A73E7DA87B2968(uParam1, 19);
	}
	else if (func_47(iParam0))
	{
		unk_0xB8A73E7DA87B2968(uParam1, 29);
	}
	else if (func_48(iParam0))
	{
		unk_0xB8A73E7DA87B2968(uParam1, 28);
	}
	else if (func_46(iParam0))
	{
		unk_0xB8A73E7DA87B2968(uParam2, 0);
	}
	else if (func_45(iParam0))
	{
		unk_0xB8A73E7DA87B2968(uParam2, 1);
	}
	else if (func_44(iParam0))
	{
		unk_0xB8A73E7DA87B2968(uParam2, 2);
	}
	else if (func_43(iParam0))
	{
		unk_0xB8A73E7DA87B2968(uParam2, 3);
	}
	else if (func_42(iParam0))
	{
		unk_0xB8A73E7DA87B2968(uParam2, 4);
	}
	else if (func_41(iParam0))
	{
		unk_0xB8A73E7DA87B2968(uParam2, 5);
	}
	else if (func_40(iParam0))
	{
		unk_0xB8A73E7DA87B2968(uParam2, 6);
	}
	else if (func_39(iParam0))
	{
		unk_0xB8A73E7DA87B2968(uParam2, 7);
	}
	else if (func_38(iParam0))
	{
		unk_0xB8A73E7DA87B2968(uParam2, 8);
	}
	else if (func_37(iParam0))
	{
		unk_0xB8A73E7DA87B2968(uParam2, 9);
	}
	else if (func_33(iParam0))
	{
		unk_0xB8A73E7DA87B2968(uParam2, 10);
	}
	else if (func_36(iParam0))
	{
		unk_0xB8A73E7DA87B2968(uParam2, 11);
	}
	else if (func_35(iParam0))
	{
		unk_0xB8A73E7DA87B2968(uParam2, 12);
	}
	else if (func_70(iParam3))
	{
		unk_0xB8A73E7DA87B2968(uParam2, 13);
	}
	else if (func_34(iParam0))
	{
		unk_0xB8A73E7DA87B2968(uParam2, 14);
	}
	else if (func_69(iParam0))
	{
		unk_0xB8A73E7DA87B2968(uParam2, 22);
	}
	else if (func_68(iParam3))
	{
		unk_0xB8A73E7DA87B2968(uParam2, 16);
	}
	else if (func_67(iParam3))
	{
		unk_0xB8A73E7DA87B2968(uParam2, 17);
	}
	else if (func_66(iParam3))
	{
		unk_0xB8A73E7DA87B2968(uParam2, 20);
	}
	else if (func_65(iParam3))
	{
		unk_0xB8A73E7DA87B2968(uParam2, 21);
	}
	else if (func_69(iParam3))
	{
		unk_0xB8A73E7DA87B2968(uParam2, 22);
	}
	else if (func_64(iParam3))
	{
		unk_0xB8A73E7DA87B2968(uParam2, 23);
	}
	else if (func_63(iParam3))
	{
		unk_0xB8A73E7DA87B2968(uParam2, 24);
	}
	else if (func_62(iParam3))
	{
		unk_0xB8A73E7DA87B2968(uParam2, 25);
	}
	else if (func_61(iParam3))
	{
		unk_0xB8A73E7DA87B2968(uParam2, 26);
	}
	else if (func_60(iParam3))
	{
		unk_0xB8A73E7DA87B2968(uParam2, 27);
	}
	else if (func_59(iParam3))
	{
		unk_0xB8A73E7DA87B2968(uParam2, 28);
	}
	else if (func_58(iParam3))
	{
		unk_0xB8A73E7DA87B2968(uParam2, 29);
	}
	else if (func_57(iParam3))
	{
		unk_0xB8A73E7DA87B2968(uParam2, 30);
	}
}

bool func_57(int iParam0)
{
	return iParam0 == 17;
}

bool func_58(int iParam0)
{
	return iParam0 == 16;
}

bool func_59(int iParam0)
{
	return iParam0 == 15;
}

bool func_60(int iParam0)
{
	return iParam0 == 14;
}

bool func_61(int iParam0)
{
	return iParam0 == 13;
}

bool func_62(int iParam0)
{
	return iParam0 == 12;
}

bool func_63(int iParam0)
{
	return iParam0 == 11;
}

bool func_64(int iParam0)
{
	return iParam0 == 9;
}

bool func_65(int iParam0)
{
	return iParam0 == 1;
}

bool func_66(int iParam0)
{
	return iParam0 == 6;
}

bool func_67(int iParam0)
{
	return iParam0 == 4;
}

bool func_68(int iParam0)
{
	return iParam0 == 2;
}

bool func_69(int iParam0)
{
	return iParam0 == 8;
}

bool func_70(int iParam0)
{
	return iParam0 == 3;
}

bool func_71(int iParam0)
{
	return unk_0xF44A5E894FE76438(Global_794643.f_4[iParam0 /*88*/].f_76, 24);
}

bool func_72(int iParam0)
{
	return unk_0xF44A5E894FE76438(Global_794643.f_4[iParam0 /*88*/].f_76, 3);
}

bool func_73(int iParam0)
{
	return unk_0xF44A5E894FE76438(Global_794643.f_4[iParam0 /*88*/].f_76, 10);
}

bool func_74(int iParam0)
{
	return unk_0xF44A5E894FE76438(Global_794643.f_4[iParam0 /*88*/].f_76, 7);
}

int func_75(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != 0)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (Global_262145.f_5306[iVar1] == 2)
			{
				iVar0 = 0;
				while (iVar0 < 20)
				{
					if (iParam0 == Global_262145.f_5063[iVar1 /*21*/][iVar0])
					{
						return 1;
					}
					iVar0++;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_76(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != 0)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if ((Global_262145.f_5306[iVar1] == 202 || Global_262145.f_5306[iVar1] == 203) || Global_262145.f_5306[iVar1] == 204)
			{
				iVar0 = 0;
				while (iVar0 < 20)
				{
					if (iParam0 == Global_262145.f_5063[iVar1 /*21*/][iVar0])
					{
						return iVar1;
					}
					iVar0++;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

void func_77(int iParam0, var uParam1, var uParam2)
{
	if (iParam0 == 1)
	{
		if (*uParam2 < 2)
		{
			*uParam2 = 2;
		}
	}
	else if (*uParam2 < 1)
	{
		*uParam2 = 1;
	}
	if (*uParam1 < *uParam2)
	{
		*uParam1 = *uParam2;
	}
}

int func_78(float fParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 0)
	{
		return -1;
	}
	iVar0 = unk_0xF2DB717A73826179((fParam0 * 100f));
	if (iVar0 < 0)
	{
		iVar0 = -1;
	}
	return iVar0;
}

var func_79()
{
	return unk_0xBC2999B1C8F62EDD("CREATOR_RSC");
}

Vector3 func_80(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0xF0E984A1CED01E3C(iParam0, "camp") == 3)
	{
		Var0.f_0 = unk_0x1B52B6FA98557E78(iParam0, "camp");
	}
	else if (unk_0xF0E984A1CED01E3C(iParam0, "camp") == 2)
	{
		Var0.f_0 = unk_0xBBDA792448DB5A89(unk_0x4985D6D7F7AB891A(iParam0, "camp"));
	}
	if (unk_0xF0E984A1CED01E3C(iParam0, "camh") == 3)
	{
		Var0.f_2 = unk_0x1B52B6FA98557E78(iParam0, "camh");
	}
	else if (unk_0xF0E984A1CED01E3C(iParam0, "camh") == 2)
	{
		Var0.f_2 = unk_0xBBDA792448DB5A89(unk_0x4985D6D7F7AB891A(iParam0, "camh"));
	}
	return Var0;
}

Vector3 func_81(int iParam0, char* sParam1)
{
	struct<3> Var0;
	int iVar3;
	
	if (unk_0xF0E984A1CED01E3C(iParam0, sParam1) == 5)
	{
		Var0 = { unk_0x97AB8757C3B46AA0(iParam0, sParam1) };
	}
	else if (unk_0xF0E984A1CED01E3C(iParam0, sParam1) == 6)
	{
		iVar3 = unk_0x4C4E1CA899A313BB(iParam0, sParam1);
		if (unk_0xF0E984A1CED01E3C(iVar3, "x") == 2)
		{
			Var0.f_0 = unk_0xBBDA792448DB5A89(unk_0x4985D6D7F7AB891A(iVar3, "x"));
		}
		else
		{
			Var0.f_0 = unk_0x1B52B6FA98557E78(iVar3, "x");
		}
		if (unk_0xF0E984A1CED01E3C(iVar3, "y") == 2)
		{
			Var0.f_1 = unk_0xBBDA792448DB5A89(unk_0x4985D6D7F7AB891A(iVar3, "y"));
		}
		else
		{
			Var0.f_1 = unk_0x1B52B6FA98557E78(iVar3, "y");
		}
		if (unk_0xF0E984A1CED01E3C(iVar3, "z") == 2)
		{
			Var0.f_2 = unk_0xBBDA792448DB5A89(unk_0x4985D6D7F7AB891A(iVar3, "z"));
		}
		else
		{
			Var0.f_2 = unk_0x1B52B6FA98557E78(iVar3, "z");
		}
	}
	return Var0;
}

int func_82(int iParam0)
{
	if (unk_0x23C31C54A2E63DC4(iParam0))
	{
		return 2;
	}
	else if (unk_0x87BD93011437F4B2(iParam0))
	{
		return 1;
	}
	return 1;
}

void func_83(int iParam0)
{
	func_84(joaat("mpply_big_feed_init"), iParam0);
}

void func_84(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x193460E7BE4AC7F3(iVar0, uParam1, 1);
	}
}

void func_85(bool bParam0)
{
	if (!func_86())
	{
		return;
	}
	if (bParam0)
	{
		func_10(joaat("mpply_unique_races"), 0);
		func_10(joaat("mpply_unique_dms"), 0);
		func_10(joaat("mpply_unique_paras"), 0);
		func_10(joaat("mpply_unique_survival"), 0);
		func_10(joaat("mpply_unique_ctf"), 0);
		func_10(joaat("mpply_unique_lts"), 0);
		func_10(joaat("mpply_unique_versus"), 0);
		func_10(joaat("mpply_unique_missions"), 0);
		func_10(joaat("mpply_unique_heist_planning"), 0);
		func_10(joaat("mpply_unique_heist_finale"), 0);
		func_10(joaat("mpply_available_races"), 0);
		func_10(joaat("mpply_available_dms"), 0);
		func_10(joaat("mpply_available_paras"), 0);
		func_10(joaat("mpply_available_survival"), 0);
		func_10(joaat("mpply_available_lts"), 0);
		func_10(joaat("mpply_available_ctf"), 0);
		func_10(joaat("mpply_available_versus"), 0);
		func_10(joaat("mpply_available_missions"), 0);
		func_10(joaat("mpply_available_heist_plan"), 0);
		func_10(joaat("mpply_available_heist_finale"), 0);
		func_10(joaat("mpply_unique_contact_0"), 0);
		func_10(joaat("mpply_unique_contact_1"), 0);
		func_10(joaat("mpply_unique_contact_2"), 0);
		func_10(joaat("mpply_unique_contact_3"), 0);
		func_10(joaat("mpply_unique_contact_4"), 0);
		func_10(joaat("mpply_unique_contact_5"), 0);
		func_10(joaat("mpply_unique_contact_6"), 0);
		func_10(joaat("mpply_total_contact_0"), 0);
		func_10(joaat("mpply_total_contact_1"), 0);
		func_10(joaat("mpply_total_contact_2"), 0);
		func_10(joaat("mpply_total_contact_3"), 0);
		func_10(joaat("mpply_total_contact_4"), 0);
		func_10(joaat("mpply_total_contact_5"), 0);
		func_10(joaat("mpply_total_contact_6"), 0);
	}
	else
	{
		func_10(joaat("mpply_unique_races_v"), 0);
		func_10(joaat("mpply_unique_dms_v"), 0);
		func_10(joaat("mpply_unique_paras_v"), 0);
		func_10(joaat("mpply_unique_survival_v"), 0);
		func_10(joaat("mpply_unique_ctf_v"), 0);
		func_10(joaat("mpply_unique_lts_v"), 0);
		func_10(joaat("mpply_unique_versus_v"), 0);
		func_10(joaat("mpply_unique_missions_v"), 0);
		func_10(joaat("mpply_unique_heist_planning_v"), 0);
		func_10(joaat("mpply_unique_heist_finale_v"), 0);
		func_10(joaat("mpply_available_races_v"), 0);
		func_10(joaat("mpply_available_dms_v"), 0);
		func_10(joaat("mpply_available_paras_v"), 0);
		func_10(joaat("mpply_available_survival_v"), 0);
		func_10(joaat("mpply_available_lts_v"), 0);
		func_10(joaat("mpply_available_ctf_v"), 0);
		func_10(joaat("mpply_available_versus_v"), 0);
		func_10(joaat("mpply_available_missions_v"), 0);
		func_10(joaat("mpply_available_heist_planv"), 0);
		func_10(joaat("mpply_available_heist_finale_v"), 0);
	}
}

int func_86()
{
	if (func_88() && func_87(0))
	{
		return 1;
	}
	return 0;
}

var func_87(int iParam0)
{
	return Global_1312369[iParam0];
}

var func_88()
{
	return func_87(func_25() + 1);
}

void func_89()
{
	int iVar0;
	
	Global_970275.f_598 = 0;
	iVar0 = 0;
	while (iVar0 <= 84)
	{
		Global_970275[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_970275.f_256[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_970275.f_512[iVar0] = 0f;
		iVar0++;
	}
}

void func_90()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 1)
	{
		Global_794643.f_112924[iVar0 /*11*/].f_9 = 0;
		iVar0 = 0;
		while (iVar0 < 8)
		{
			Global_794643.f_112924[iVar1 /*11*/][iVar0] = 0;
			iVar0++;
		}
		iVar1++;
	}
}

int func_91(char* sParam0)
{
	if ((((((((((((((((unk_0xCC257DA11A122B5F(sParam0, "QwBYuaosIk-ZB9sAs4T6vQ") || unk_0xCC257DA11A122B5F(sParam0, "O8SUrTkPW0G7NVh-c95lPQ")) || unk_0xCC257DA11A122B5F(sParam0, "Cdgvsa-E8katW71P6VWhQg")) || unk_0xCC257DA11A122B5F(sParam0, "W3U0oyo5okGvED-f7CPzhg")) || unk_0xCC257DA11A122B5F(sParam0, "7CpnaZYqMEKxxbW2rbp33A")) || unk_0xCC257DA11A122B5F(sParam0, "d_cLbuKs0kyVu6VWc3tfQg")) || unk_0xCC257DA11A122B5F(sParam0, "hCC18F4SuU254v5vlgPRmA")) || unk_0xCC257DA11A122B5F(sParam0, "tSm64WIuK0yqti6Po8oQCg")) || unk_0xCC257DA11A122B5F(sParam0, "5mwusUtO5E6AVvnUrgFZcg")) || unk_0xCC257DA11A122B5F(sParam0, "_dFdLIICm0OaNP3ewdkmqA")) || unk_0xCC257DA11A122B5F(sParam0, "cfWCTF0bH0W0JmM3kP3TPg")) || unk_0xCC257DA11A122B5F(sParam0, "JVlkjgsbUk6pHcrN43FPgQ")) || unk_0xCC257DA11A122B5F(sParam0, "AdOvPsvI30yZ6h9HpjzcwA")) || unk_0xCC257DA11A122B5F(sParam0, "te4f3O-vVUOkF3YAbnzD2A")) || unk_0xCC257DA11A122B5F(sParam0, "8jRfzi-oHEGHiJEQLkbZ_w")) || unk_0xCC257DA11A122B5F(sParam0, "gYOgjaTS7EedRGFuBasioQ")) || unk_0xCC257DA11A122B5F(sParam0, "OGuQ53X7G0qx-jteU3gBkg"))
	{
		return 1;
	}
	return 0;
}

char* func_92(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "gta5mission";
		
		case 1:
			return "playlist";
		
		case 2:
			return "lifeinvaderpost";
		
		case 3:
			return "photo";
		
		case 4:
			return "challenge";
		
		default:
	}
	return "gta5mission";
}

int func_93(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2[64];
	int iVar67;
	
	if (Global_262145.f_3765 == 1)
	{
		return 0;
	}
	if (Global_786484 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < iParam0)
	{
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iParam0)
	{
		iVar67 = 0;
		iVar1 = 0;
		while (iVar1 < Global_786484)
		{
			if (iVar1 < 35)
			{
				if (iVar67 == 0)
				{
					if (Global_786484.f_3082[iVar1 /*13*/].f_1 == unk_0x6D9FF4C899CD785F(&(Global_2394845[iVar0 /*6*/])))
					{
						iVar67 = 1;
						iVar2[iVar0] = iVar1;
					}
				}
			}
			iVar1++;
		}
		if (iVar67 == 0)
		{
			return 0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iParam0)
	{
		Global_794643.f_4[(1100 + iVar0) /*88*/] = { Global_786484.f_1[iVar2[iVar0] /*88*/] };
		Global_794643.f_98389[(1100 + iVar0) /*13*/] = { Global_786484.f_3082[iVar2[iVar0] /*13*/] };
		iVar1 = 0;
		while (iVar1 < 8)
		{
			Global_1747652.f_111[iVar0 /*204*/].f_44[iVar1 /*16*/] = { Global_786484.f_3538[iVar2[iVar0] /*132*/][iVar1 /*16*/] };
			iVar1++;
		}
		iVar0++;
	}
	func_94(1);
	return 1;
}

void func_94(int iParam0)
{
	Global_1747652.f_1784 = iParam0;
}

void func_95(bool bParam0, int iParam1)
{
	bParam0->f_4 = iParam1;
}

void func_96()
{
	struct<88> Var0;
	int iVar88;
	
	Var0.f_65 = -1;
	Var0.f_66 = -1;
	Var0.f_67 = 2;
	iVar88 = 1100;
	while (iVar88 <= 1117)
	{
		Global_794643.f_4[iVar88 /*88*/] = { Var0 };
		iVar88++;
	}
}

void func_97()
{
	if (unk_0xBD4D163DE2E96729() != 0)
	{
		unk_0xB97220169CDC1C4B();
	}
}

void func_98()
{
	if (func_104())
	{
		unk_0x978121EE218A0AF9();
	}
	else
	{
		unk_0xACC75C2EB9E678C0();
	}
}

bool func_99()
{
	return Global_2450850.f_4;
}

int func_100()
{
	if (unk_0xBE53CF04AB76DE3F())
	{
		return 1;
	}
	else if (unk_0x71F5994E3810CBE2())
	{
		return 1;
	}
	else if (unk_0x96B75EE30AEB68CE())
	{
		return 1;
	}
	return 0;
}

int func_101()
{
	if (!func_102())
	{
		return 1;
	}
	return 0;
}

int func_102()
{
	if (func_103())
	{
		return 0;
	}
	if (unk_0x09F10A67721D6115() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_103()
{
	return Global_2452973;
}

bool func_104()
{
	return Global_1573272.f_4;
}

bool func_105()
{
	return Global_2394783.f_2;
}

int func_106(bool bParam0, char* sParam1, char* sParam2)
{
	switch (bParam0->f_4)
	{
		case 0:
			*bParam0 = 0;
			if (func_100())
			{
				return 0;
			}
			func_98();
			func_97();
			if (func_104())
			{
				*bParam0 = 0;
				return 1;
			}
			else
			{
				unk_0x911742F2A1E4DBE7(0);
			}
			func_95(bParam0, 1);
			break;
		
		case 1:
			if (unk_0x38141A0AFC2BBA54(sParam1, func_92(0)))
			{
				func_95(bParam0, 3);
			}
			break;
		
		case 3:
			if (unk_0x6E7D49ED99D8B2D1())
			{
				bParam0->f_40 = unk_0x7EB306499DB95039();
				if (unk_0xE59A3DEAF4D05EDE())
				{
				}
				else
				{
					func_243(bParam0, 1, 1);
					bParam0->f_40 = unk_0x7EB306499DB95039();
					*bParam0 = 0;
					return 1;
				}
				if (unk_0xB3838189D8C98447() > 0)
				{
					if (unk_0x194BE26D9C2BA32A(0))
					{
						func_107(sParam2, 0);
						func_243(bParam0, 1, 1);
						*bParam0 = 1;
						return 1;
					}
				}
				else
				{
					func_243(bParam0, 1, 1);
					*bParam0 = 0;
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_107(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = unk_0xBD4D163DE2E96729();
	iVar1 = unk_0x4C4E1CA899A313BB(iVar0, "mission");
	iVar2 = unk_0x4C4E1CA899A313BB(iVar1, "gen");
	StringCopy(sParam0, unk_0x899DB4E43EFCE6C9(iParam1), 24);
	StringCopy(&(sParam0->f_6), unk_0x8DE41FE6C7E476A4(iParam1), 64);
	StringCopy(&(sParam0->f_22), unk_0xC6F867A99F8F655E(iParam1), 64);
	sParam0->f_56 = { func_81(iVar2, "start") };
	sParam0->f_59 = { func_81(iVar2, "cam") };
	sParam0->f_62 = { func_80(iVar2) };
	sParam0->f_65 = unk_0x4985D6D7F7AB891A(iVar2, "type");
	sParam0->f_68 = unk_0x4985D6D7F7AB891A(iVar2, "subtype");
	sParam0->f_80 = unk_0x4985D6D7F7AB891A(iVar2, "adverm");
	sParam0->f_79 = unk_0x4985D6D7F7AB891A(iVar2, "testcomplete");
	sParam0->f_69 = unk_0x4985D6D7F7AB891A(iVar2, "min");
	sParam0->f_70 = unk_0x4985D6D7F7AB891A(iVar2, "rank");
	sParam0->f_71 = unk_0x4985D6D7F7AB891A(iVar2, "num");
	sParam0->f_73 = func_78(unk_0xFEEE999D88E37E57(iParam1, 0), unk_0xF20E78AE771284D7(iParam1, 0));
	sParam0->f_74 = 0;
	sParam0->f_75 = unk_0x4985D6D7F7AB891A(iVar2, "charcon");
	if (func_109(unk_0x6D9FF4C899CD785F(unk_0x2E64E44DB158AAD0(0))))
	{
		sParam0->f_68 = 8;
	}
	if (func_108() != 2)
	{
		if (sParam0->f_71 > Global_262145.f_4744)
		{
			sParam0->f_71 = Global_262145.f_4744;
		}
		if (sParam0->f_69 > Global_262145.f_4744)
		{
			sParam0->f_69 = Global_262145.f_4744;
		}
	}
	if (!func_104())
	{
		iVar3 = unk_0x4AC9C5FE2ADC6484(iParam1);
		if (unk_0x82F1E66C756CDECA(iVar3))
		{
			sParam0->f_54 = unk_0x141D60A95907EF5D(iParam1);
		}
		else
		{
			sParam0->f_54 = -1;
		}
	}
	if (unk_0xF0E984A1CED01E3C(iVar2, "ltm") == 2)
	{
		sParam0->f_78 = unk_0x4985D6D7F7AB891A(iVar2, "ltm");
	}
	unk_0xB8A73E7DA87B2968(&(sParam0->f_76), 13);
	func_97();
}

int func_108()
{
	return Global_25185;
}

int func_109(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iParam0 == Global_262145.f_7778[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_110()
{
	return Global_2394783.f_1;
}

void func_111()
{
	Global_2450850.f_8 = 0;
	Global_2450850.f_7 = 0;
}

int func_112(var uParam0, char* sParam1, var uParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	if ((iParam3 > 10 && iParam3 <= 15) || iParam3 == 122)
	{
		*uParam0 = 1;
		unk_0xB8A73E7DA87B2968(uParam2, 3);
		if (!unk_0xF44A5E894FE76438(*uParam2, 2))
		{
		}
		unk_0xB8A73E7DA87B2968(uParam2, 2);
		return 1;
	}
	if ((func_239() && func_238()) || func_237())
	{
		if (!unk_0xF44A5E894FE76438(*uParam2, 2))
		{
		}
		unk_0xB8A73E7DA87B2968(uParam2, 2);
		unk_0xB8A73E7DA87B2968(uParam2, 1);
		unk_0xB8A73E7DA87B2968(uParam2, 3);
		*uParam0 = 1;
		return 1;
	}
	if (iParam7 == 1)
	{
		if (!unk_0xF44A5E894FE76438(*uParam2, 3))
		{
			unk_0xB8A73E7DA87B2968(uParam2, 3);
		}
		return 1;
	}
	if (bParam4)
	{
		if (!func_236())
		{
			return 0;
		}
	}
	uParam0->f_15 = 0;
	if (bParam8)
	{
		if (func_235())
		{
			if (unk_0xF44A5E894FE76438(*uParam2, 2))
			{
				unk_0xB8A73E7DA87B2968(uParam2, 3);
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (bParam6)
	{
		if (func_99())
		{
			return 0;
		}
	}
	if (!unk_0xF44A5E894FE76438(*uParam2, 2))
	{
		if (!unk_0xF44A5E894FE76438(*uParam2, 1))
		{
			if (!bParam12)
			{
				func_223(1, 1, bParam11);
			}
			unk_0xB8A73E7DA87B2968(uParam2, 1);
			func_243(uParam0, 1, 1);
			*uParam0 = 0;
		}
		if (func_126(uParam0, sParam1, 0, 1, 0, iParam5, 0, 0, 1, bParam9, bParam10, bParam11, 0, bParam12, bParam13))
		{
			if (((func_125() || Global_1632166 == 31) || Global_1632166 == 6) || Global_1632166 == 4)
			{
				if (Global_1632166.f_29 < 1)
				{
					Global_1632166.f_29 = 1;
				}
				if (Global_1632166.f_28 < 1)
				{
					Global_1632166.f_28 = 1;
				}
				if (!func_124())
				{
					func_123();
				}
			}
			else if (Global_1632166 == 1)
			{
				Global_1362518.f_4 = 99;
				Global_1362518.f_6 = Global_1632166.f_50;
				Global_1362518.f_7 = Global_1632166.f_52631;
				Global_1362518.f_9 = Global_1632166.f_40784;
				Global_1362518.f_11 = Global_1632166.f_51;
				Global_1362518.f_12 = Global_1632166.f_53;
				Global_1362518.f_13 = Global_1632166.f_55;
				Global_1362518.f_14 = Global_1632166.f_54;
				Global_1362518.f_16 = Global_1632166.f_26;
				Global_1362518.f_5 = Global_1632166.f_48;
				Global_1362518.f_10 = Global_1632166.f_61;
			}
			else if (func_122())
			{
				Global_2524808.f_7 = 9901;
				Global_2524808.f_8 = Global_1632166.f_40139 + 1;
				if (func_121(Global_1632166.f_34302))
				{
					Global_1632166.f_34302 = { Global_1632166.f_65 };
				}
			}
			unk_0xB8A73E7DA87B2968(uParam2, 2);
			unk_0x4EA098C870B73AB7(uParam2, 1);
			unk_0xB8A73E7DA87B2968(uParam2, 3);
			if (*uParam0)
			{
				func_120();
				func_119();
				if (func_118())
				{
					func_115(Global_1632166.f_24);
				}
				Global_1632166.f_87003 = 1;
			}
			else
			{
				func_241();
			}
			if (!func_114())
			{
				func_113();
			}
			return 1;
		}
		else
		{
			uParam0->f_15 = 1;
		}
	}
	else
	{
		unk_0xB8A73E7DA87B2968(uParam2, 3);
		if (Global_1632166.f_87003)
		{
			*uParam0 = 1;
		}
		return 1;
	}
	return 0;
}

void func_113()
{
	Global_2443089.f_29.f_49 = 1;
}

int func_114()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (!unk_0xC55B9553B3EDADE9(&(Global_1632166.f_86653[iVar1 /*6*/])))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

void func_115(int iParam0)
{
	if (!func_117())
	{
		unk_0x80416FC71EFB7660(2);
		unk_0x254FB97111CEB286(1);
		if (iParam0 == 0)
		{
			iParam0 = 32;
		}
		unk_0x7DBC6512360DF133((iParam0 / 2));
		func_116();
	}
}

void func_116()
{
	unk_0xB8A73E7DA87B2968(&(Global_2443089.f_2), 3);
}

bool func_117()
{
	return unk_0xF44A5E894FE76438(Global_2443089.f_2, 3);
}

bool func_118()
{
	return unk_0xF44A5E894FE76438(Global_2443860.f_1.f_2808, 8);
}

void func_119()
{
	unk_0xB8A73E7DA87B2968(&Global_2443089, 4);
}

void func_120()
{
	unk_0xB8A73E7DA87B2968(&Global_2443089, 28);
}

int func_121(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_122()
{
	if (Global_1632166 == 2 || Global_1632166 == 8)
	{
		return 1;
	}
	return 0;
}

void func_123()
{
	Global_1738472.f_5 = 0;
	Global_1738472.f_11 = -1;
}

int func_124()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < Global_1632166.f_29)
	{
		iVar1 = 0;
		while (iVar1 < Global_1632166.f_29)
		{
			if (Global_1632166.f_36[iVar0] != Global_1632166.f_36[iVar1])
			{
				return 0;
			}
			else if (Global_1632166.f_31[iVar0] != Global_1632166.f_31[iVar1])
			{
				return 0;
			}
			iVar1++;
		}
		iVar0++;
	}
	return 1;
}

int func_125()
{
	if ((((((Global_1632166 == 0 || Global_1632166 == 4) || Global_1632166 == 6) || Global_1632166 == 3) || Global_1632166 == 31) || Global_1632166.f_2 == 6) || Global_1632166.f_2 == 5)
	{
		return 1;
	}
	return 0;
}

int func_126(var uParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4, var uParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<16> Var17;
	int iVar33;
	
	if (uParam0->f_26 == 0)
	{
		if (func_99() && uParam0->f_4 == 0)
		{
			return 0;
		}
	}
	if (!func_104() || (iParam2 != 0 && iParam2 != 1))
	{
		if (func_101())
		{
			*uParam0 = 0;
			return 1;
		}
	}
	switch (uParam0->f_4)
	{
		case 0:
			*uParam0 = 0;
			uParam0->f_1 = 0;
			uParam0->f_28 = 0;
			uParam0->f_24 = func_222(1);
			uParam0->f_25 = func_220(1);
			if (func_100())
			{
				return 0;
			}
			func_98();
			func_97();
			if (func_104() || bParam9)
			{
				unk_0x911742F2A1E4DBE7(1);
			}
			else
			{
				unk_0x911742F2A1E4DBE7(0);
			}
			func_218();
			if (bParam4)
			{
				func_95(uParam0, 11);
			}
			else
			{
				func_95(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_104() || bParam9)
			{
				if (unk_0xDB63F79FB7644F02(sParam1))
				{
					if (iParam2 == 0)
					{
						Global_1632166.f_87014 = 1;
						if (!bParam9)
						{
							StringCopy(&(Global_1632166.f_86647), sParam1, 24);
						}
						func_162(-1, 1, 0, 0);
						uParam0->f_8 = 0;
						func_95(uParam0, 9);
						*uParam0 = 1;
						func_111();
						return 1;
					}
					else if (iParam2 == 1)
					{
						if (uParam0->f_16)
						{
							StringCopy(&(Global_972474.f_42), sParam1, 24);
							Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_19 = { Global_972474.f_12 };
							func_161(&iVar1, &uVar0, &Global_972474);
							if (Global_972474.f_65 == 0)
							{
								func_243(uParam0, 1, 1);
								*uParam0 = 0;
								uParam0->f_28 = 1;
								func_97();
								func_111();
								return 1;
							}
							uParam0->f_8 = 0;
						}
						else
						{
							StringCopy(&(Global_970912.f_42), sParam1, 24);
							Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_19 = { Global_970912.f_12 };
							func_161(&iVar1, &uVar0, &Global_970912);
							uParam0->f_8 = 0;
							if (Global_970912.f_65 == 0)
							{
								func_243(uParam0, 1, 1);
								*uParam0 = 0;
								uParam0->f_28 = 1;
								func_97();
								func_111();
								return 1;
							}
						}
						func_97();
						unk_0x978121EE218A0AF9();
						unk_0x911742F2A1E4DBE7(1);
						func_160(uParam0);
						func_95(uParam0, 13);
					}
					else
					{
						*uParam0 = 0;
						func_111();
						return 1;
					}
				}
				else
				{
					*uParam0 = 0;
					func_111();
					func_97();
					return 1;
				}
			}
			else if ((uParam0->f_21 != -1 && uParam0->f_22 != -1) && iParam2 == 0)
			{
				uParam0->f_5 = unk_0x7FD2990AF016795E(func_92(iParam2), sParam1, 0, uParam0->f_21, uParam0->f_22);
				unk_0xD68E2AD0F9663A17(uParam0->f_5);
				func_95(uParam0, 4);
			}
			else if (bParam10)
			{
				if (unk_0xDCF1B362299C8215(sParam1, 1, func_92(iParam2)))
				{
					func_95(uParam0, 3);
				}
			}
			else if (unk_0x38141A0AFC2BBA54(sParam1, func_92(iParam2)))
			{
				func_95(uParam0, 3);
			}
			break;
		
		case 3:
			if (unk_0x6E7D49ED99D8B2D1())
			{
				uParam0->f_40 = unk_0x7EB306499DB95039();
				if (unk_0xE59A3DEAF4D05EDE())
				{
				}
				else
				{
					func_243(uParam0, 1, 1);
					uParam0->f_40 = unk_0x7EB306499DB95039();
					*uParam0 = 0;
					func_111();
					return 1;
				}
				if (unk_0xB3838189D8C98447() > 0)
				{
					if (!bParam12 && !func_158(uParam0->f_24, uParam0->f_25, unk_0x8DE41FE6C7E476A4(0), unk_0xBF177C366EDB4621(0)))
					{
						func_243(uParam0, 1, 1);
						*uParam0 = 0;
						uParam0->f_27 = 1;
						func_111();
						return 1;
					}
					if (iParam2 == 0)
					{
						uParam0->f_5 = unk_0x171DF6A0C07FB3DC(0, 0);
						unk_0xD68E2AD0F9663A17(uParam0->f_5);
						func_95(uParam0, 4);
					}
					else if (iParam2 == 1)
					{
						if (unk_0x194BE26D9C2BA32A(0))
						{
							if (uParam0->f_16)
							{
								StringCopy(&(Global_972474.f_12), unk_0xC6F867A99F8F655E(0), 64);
								StringCopy(&(Global_972474.f_36), unk_0x899DB4E43EFCE6C9(0), 24);
								Global_972474.f_71 = unk_0xBF177C366EDB4621(0);
								StringCopy(&(Global_972474.f_42), sParam1, 24);
								Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_19 = { Global_972474.f_12 };
								func_161(&iVar1, &uVar0, &Global_972474);
								uParam0->f_8 = 0;
							}
							else
							{
								StringCopy(&(Global_970912.f_12), unk_0xC6F867A99F8F655E(0), 64);
								StringCopy(&(Global_970912.f_36), unk_0x899DB4E43EFCE6C9(0), 24);
								Global_970912.f_71 = unk_0xBF177C366EDB4621(0);
								StringCopy(&(Global_970912.f_42), sParam1, 24);
								Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_19 = { Global_970912.f_12 };
								func_161(&iVar1, &uVar0, &Global_970912);
								uParam0->f_8 = 0;
							}
							func_97();
							func_95(uParam0, 10);
						}
						else
						{
							func_243(uParam0, 1, 1);
							*uParam0 = 0;
							func_111();
							return 1;
						}
					}
					else if (iParam2 == 4)
					{
						if (unk_0x194BE26D9C2BA32A(0))
						{
							if (uParam0->f_16)
							{
								func_156(&iVar1, &uVar0, &Global_972474, iParam6);
								if (iParam6 == 1)
								{
									func_243(uParam0, 1, 1);
									*uParam0 = 1;
									func_111();
									return 1;
								}
								StringCopy(&(Global_972474.f_12), unk_0xC6F867A99F8F655E(0), 64);
								StringCopy(&(Global_972474.f_36), unk_0x899DB4E43EFCE6C9(0), 24);
								StringCopy(&(Global_972474.f_42), sParam1, 24);
								Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_19 = { Global_972474.f_12 };
								uParam0->f_8 = 0;
							}
							else
							{
								func_156(&iVar1, &uVar0, &Global_970912, iParam6);
								if (iParam6 == 1)
								{
									func_243(uParam0, 1, 1);
									*uParam0 = 1;
									func_111();
									return 1;
								}
								StringCopy(&(Global_970912.f_12), unk_0xC6F867A99F8F655E(0), 64);
								StringCopy(&(Global_970912.f_36), unk_0x899DB4E43EFCE6C9(0), 24);
								StringCopy(&(Global_970912.f_42), sParam1, 24);
								Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_19 = { Global_970912.f_12 };
								uParam0->f_8 = 0;
							}
							func_97();
							func_95(uParam0, 10);
						}
						else
						{
							func_243(uParam0, 1, 1);
							*uParam0 = 0;
							func_111();
							return 1;
						}
					}
				}
				else
				{
					func_243(uParam0, 1, 1);
					*uParam0 = 0;
					func_111();
					return 1;
				}
			}
			break;
		
		case 4:
			if (unk_0xDA24E07EF4F2B3AF(uParam0->f_5))
			{
				if (uParam0->f_2)
				{
					uParam0->f_2 = 0;
					unk_0x2D877C8CD3C6852B();
				}
				if (unk_0x1F17C1A9075EA1C1(uParam0->f_5))
				{
					func_95(uParam0, 6);
				}
				else if (uParam0->f_22 != 1)
				{
					uParam0->f_22 = 1;
					uParam0->f_3 = 1;
					func_95(uParam0, 0);
					return 0;
				}
				else
				{
					func_243(uParam0, 1, 1);
					*uParam0 = 0;
					func_111();
					return 1;
				}
			}
			else if (func_155() || func_154() == 4)
			{
				if (uParam0->f_2 == 0)
				{
					uParam0->f_2 = 1;
					unk_0xD5DA9F3954EDDE75("FMMC_DOWNLOAD");
					unk_0x767DBFC1325F7F22(5);
				}
			}
			break;
		
		case 6:
			if ((bParam13 && !func_153()) && !bParam14)
			{
				return 0;
			}
			if (unk_0xA9E7A642EE9FD85C(uParam0->f_5))
			{
				if (unk_0x18B4EDA613FA5705(uParam0->f_5))
				{
					if (bParam3)
					{
						if (bParam13)
						{
							func_223(1, 1, bParam11);
						}
						if ((uParam0->f_21 != -1 && uParam0->f_22 != -1) && iParam2 == 0)
						{
							Global_1632166.f_87014 = 1;
							Global_1632166.f_86999 = 1;
							StringCopy(&(Global_1632166.f_86336), "", 64);
							StringCopy(&(Global_1632166.f_86383), "", 24);
							StringCopy(&(Global_1632166.f_86361), "RockStar", 24);
							if (bParam10)
							{
								StringCopy(&(Global_1632166.f_86647), sParam1, 24);
							}
							uParam0->f_34 = uParam0->f_22;
						}
						else
						{
							Global_1632166.f_86360 = unk_0x6D9FF4C899CD785F(unk_0x2E64E44DB158AAD0(0));
							StringCopy(&(Global_1632166.f_86383), unk_0x8DE41FE6C7E476A4(0), 24);
							Global_1632166.f_87014 = unk_0xBF177C366EDB4621(0);
							if (Global_1632166.f_87014 == 1 || Global_1632166.f_87014 == 2)
							{
								StringCopy(&(Global_1632166.f_86361), "RockStar", 24);
							}
							else
							{
								StringCopy(&(Global_1632166.f_86361), unk_0x8DE41FE6C7E476A4(0), 24);
							}
							if ((Global_1632166.f_87014 == 0 || Global_1632166.f_87014 == 3) && unk_0x9050F774C5BAA6F3(0))
							{
								StringCopy(&(Global_1632166.f_86336), unk_0x7746E8ACE891BFA4(unk_0xFB6B3EEFAB2DD12C()), 64);
							}
							else if ((unk_0xF1A016B51831B87B() && (Global_1632166.f_87014 == 0 || Global_1632166.f_87014 == 3)) && func_152(&iVar33, &(Global_1632166.f_86383)))
							{
								StringCopy(&(Global_1632166.f_86336), unk_0x7746E8ACE891BFA4(iVar33), 64);
							}
							else
							{
								StringCopy(&(Global_1632166.f_86336), unk_0x9C5BADE36CCA7739(0), 64);
							}
							Global_1632166.f_86667 = unk_0xF20E78AE771284D7(0, 0);
							Global_1632166.f_87001 = unk_0xFEA085C8995A16C2(0);
							uParam0->f_23 = func_82(0);
							Global_1632166.f_100409 = uParam0->f_23;
							if (bParam10)
							{
								StringCopy(&(Global_1632166.f_86647), unk_0x899DB4E43EFCE6C9(0), 24);
							}
							if (Global_1632166.f_87014 == 0 || Global_1632166.f_87014 == 3)
							{
								if ((unk_0xC44CD0BADCDE5199(0, &uVar4) && unk_0x5A7D76211B9373CD(&uVar4, 13)) && unk_0xBB38DDB2E1AE0498(&uVar4))
								{
									Var17 = { Global_1632166.f_86336 };
									func_151(1, Var17);
								}
								else
								{
									func_151(0, Var17);
								}
							}
							else
							{
								func_151(0, Var17);
							}
							Global_1632166.f_8 = func_78(unk_0xFEEE999D88E37E57(0, 0), unk_0xF20E78AE771284D7(0, 0));
							if (unk_0xA5BA88B1E535CA78(uParam0->f_7))
							{
								Global_1632166.f_87000 = unk_0xB85101D69AA338A4(0);
								Global_1632166.f_87002 = 1;
							}
							else
							{
								Global_1632166.f_87000 = 0;
								Global_1632166.f_87002 = 0;
							}
							Global_1632166.f_86999 = unk_0x2ACB9F5440E4BA94(0);
							uParam0->f_34 = unk_0x4AC9C5FE2ADC6484(0);
							if (!func_104())
							{
								if (unk_0x82F1E66C756CDECA(uParam0->f_34))
								{
									uParam0->f_30 = unk_0x141D60A95907EF5D(0);
								}
								else
								{
									uParam0->f_30 = -1;
								}
							}
							Global_1632166.f_86666 = uParam0->f_30;
							Global_2443860.f_4187.f_3 = unk_0x5326E804800DA15D(0, 0);
							Global_2443860.f_4187.f_2 = unk_0x79F70955A0FD21EF(0, 0);
							if (Global_1632166.f_87014 == 1 || Global_1632166.f_87014 == 2)
							{
								StringCopy(&(Global_1632166.f_86336), func_79(), 64);
							}
						}
						if (!bParam10)
						{
							StringCopy(&(Global_1632166.f_86647), sParam1, 24);
						}
						uParam0->f_31 = 0;
						if (!func_104())
						{
							func_162(uParam0->f_34, bParam11, (bParam13 || bParam14), uParam0->f_31);
							if (bParam13 || bParam14)
							{
								func_95(uParam0, 5);
								return 0;
							}
						}
						else
						{
							func_162(-1, bParam11, 0, 0);
						}
						if (func_148(uParam0, iParam2, bParam13, bParam9))
						{
							return 1;
						}
					}
					else
					{
						iVar1 = unk_0xBD4D163DE2E96729();
						iVar2 = unk_0x4C4E1CA899A313BB(iVar1, "mission");
						iVar3 = unk_0x4C4E1CA899A313BB(iVar2, "gen");
						StringCopy(&(Global_2433082.f_3214), unk_0xC6F867A99F8F655E(0), 32);
						Global_2433082.f_3214.f_8 = unk_0x4985D6D7F7AB891A(iVar3, "type");
						uParam0->f_17 = unk_0xA5BA88B1E535CA78(0);
						*uParam0 = 1;
						func_111();
						unk_0xB763265526688347(uParam0->f_5);
						func_97();
						return 1;
					}
					unk_0xB763265526688347(uParam0->f_5);
					func_97();
				}
				else if (iParam2 == 0)
				{
					func_243(uParam0, 1, 1);
					uParam0->f_41.f_3 = 0;
					*uParam0 = 0;
					uParam0->f_1 = 1;
					func_111();
					return 1;
				}
				else
				{
					uParam0->f_8++;
					if (uParam0->f_8 > 1000)
					{
						func_243(uParam0, 1, 1);
						uParam0->f_41.f_3 = 0;
						*uParam0 = 0;
						func_111();
						return 1;
					}
				}
			}
			break;
		
		case 5:
			func_162(uParam0->f_34, bParam11, (bParam13 || bParam14), uParam0->f_31);
			if (uParam0->f_31 >= 6)
			{
				if (func_148(uParam0, iParam2, (bParam13 || bParam14), bParam9))
				{
					return 1;
				}
			}
			uParam0->f_31++;
			break;
		
		case 9:
			if (func_146(uParam0, 0, bParam3, 0))
			{
				func_95(uParam0, 0);
				func_97();
				if ((((func_140(Global_1632166.f_86360) && func_125()) && !bParam9) && !unk_0xC55B9553B3EDADE9(&(Global_1632166.f_86653[0 /*6*/]))) && (func_155() || (func_135() && !func_134())))
				{
					uParam0->f_8 = 0;
					func_95(uParam0, 19);
					return 0;
				}
				if ((uParam5 || bParam7) && !bParam13)
				{
					if (bParam7 || uParam5)
					{
						uParam0->f_23 = func_82(0);
						uParam0->f_21 = unk_0x5640710AB90BB7AE(0, uParam0->f_23);
					}
					func_133(&(uParam0->f_41), 0);
					func_95(uParam0, 18);
				}
				else
				{
					uParam0->f_41.f_3 = 1;
					func_243(uParam0, 1, 0);
					func_111();
					return 1;
				}
			}
			break;
		
		case 19:
			if (unk_0xDCF1B362299C8215(&(Global_1632166.f_86653[0 /*6*/]), 1, func_92(iParam2)))
			{
				func_95(uParam0, 21);
			}
			break;
		
		case 21:
			if (unk_0x6E7D49ED99D8B2D1())
			{
				uParam0->f_40 = unk_0x7EB306499DB95039();
				if (unk_0xE59A3DEAF4D05EDE())
				{
				}
				else
				{
					func_243(uParam0, 1, 1);
					uParam0->f_40 = unk_0x7EB306499DB95039();
					*uParam0 = 0;
					func_111();
					return 1;
				}
				if (unk_0xB3838189D8C98447() > 0)
				{
					uParam0->f_5 = unk_0x171DF6A0C07FB3DC(0, 0);
					unk_0xD68E2AD0F9663A17(uParam0->f_5);
					func_95(uParam0, 22);
				}
				else
				{
					func_243(uParam0, 1, 1);
					*uParam0 = 0;
					func_111();
					return 1;
				}
			}
			break;
		
		case 22:
			if (unk_0xDA24E07EF4F2B3AF(uParam0->f_5))
			{
				if (unk_0x1F17C1A9075EA1C1(uParam0->f_5))
				{
					func_95(uParam0, 23);
				}
				else if (uParam0->f_22 != 1)
				{
					uParam0->f_22 = 1;
					uParam0->f_3 = 1;
					func_95(uParam0, 0);
					return 0;
				}
				else
				{
					func_243(uParam0, 1, 1);
					*uParam0 = 0;
					func_111();
					return 1;
				}
			}
			break;
		
		case 23:
			if (unk_0xA9E7A642EE9FD85C(uParam0->f_5))
			{
				if (unk_0x18B4EDA613FA5705(uParam0->f_5))
				{
					func_130();
					func_243(uParam0, 1, 0);
					Global_1630921 = 1;
					func_111();
					*uParam0 = 1;
					return 1;
				}
				else
				{
					func_243(uParam0, 1, 1);
					uParam0->f_41.f_3 = 0;
					*uParam0 = 0;
					uParam0->f_1 = 1;
					func_111();
					return 1;
				}
			}
			break;
		
		case 18:
			if (unk_0xF44A5E894FE76438(Global_1632166.f_7, 0))
			{
				if (bParam7)
				{
					if (func_129(&(uParam0->f_41), sParam1, uParam0->f_21, uParam0->f_23))
					{
						func_243(uParam0, 1, 0);
						uParam0->f_41.f_3 = 1;
						uParam0->f_41.f_1 = 0;
						func_111();
						return 1;
					}
				}
				else
				{
					StringCopy(&(uParam0->f_41.f_4), sParam1, 64);
					uParam0->f_41.f_3 = 1;
					func_243(uParam0, 1, 0);
					func_111();
					return 1;
				}
			}
			else
			{
				uParam0->f_41.f_3 = 1;
				func_243(uParam0, 1, 1);
				func_111();
				return 1;
			}
			break;
		
		case 10:
			if (func_146(uParam0, 0, bParam3, iParam2))
			{
				func_97();
				func_95(uParam0, 11);
			}
			break;
		
		case 11:
			if (uParam0->f_16)
			{
				if (unk_0x1607C1CC24908121(&(Global_972474.f_1177), Global_972474.f_65, func_92(0)))
				{
					func_95(uParam0, 12);
				}
			}
			else if (unk_0x1607C1CC24908121(&(Global_970912.f_1177), Global_970912.f_65, func_92(0)))
			{
				func_95(uParam0, 12);
			}
			break;
		
		case 12:
			if (unk_0x6E7D49ED99D8B2D1())
			{
				if (unk_0xE59A3DEAF4D05EDE())
				{
				}
				else
				{
					func_243(uParam0, 1, 1);
					uParam0->f_40 = unk_0x7EB306499DB95039();
					*uParam0 = 0;
					func_111();
					return 1;
				}
				if (unk_0xB3838189D8C98447() > 0)
				{
					if (uParam0->f_16)
					{
						Global_972474.f_65 = unk_0xB3838189D8C98447();
					}
					else
					{
						Global_970912.f_65 = unk_0xB3838189D8C98447();
					}
					uParam0->f_8 = 0;
					func_243(uParam0, 0, bParam8);
					func_160(uParam0);
					func_95(uParam0, 13);
				}
				else
				{
					func_243(uParam0, 1, 1);
					*uParam0 = 0;
					func_111();
					return 1;
				}
			}
			break;
		
		case 13:
			if (func_104())
			{
				if (uParam0->f_16)
				{
					uParam0->f_9 = 0;
					while (uParam0->f_9 <= (Global_972474.f_65 - 1))
					{
						if (unk_0xDB63F79FB7644F02(&(Global_972474.f_1177[uParam0->f_9 /*6*/])))
						{
							func_128(uParam0, &Global_972474);
							unk_0x978121EE218A0AF9();
						}
						uParam0->f_9++;
					}
					func_111();
					return 1;
				}
				else
				{
					uParam0->f_9 = 0;
					while (uParam0->f_9 <= (Global_970912.f_65 - 1))
					{
						if (unk_0xDB63F79FB7644F02(&(Global_970912.f_1177[uParam0->f_9 /*6*/])))
						{
							func_128(uParam0, &Global_970912);
							unk_0x978121EE218A0AF9();
						}
						uParam0->f_9++;
					}
					func_111();
					return 1;
				}
			}
			else if (uParam0->f_16)
			{
				if (func_127(uParam0, &Global_972474))
				{
					if (uParam0->f_27)
					{
						func_243(uParam0, 1, bParam8);
						*uParam0 = 0;
						uParam0->f_27 = 1;
						func_111();
						return 1;
					}
					else
					{
						func_95(uParam0, 17);
						*uParam0 = 1;
					}
				}
			}
			else if (func_127(uParam0, &Global_970912))
			{
				if (uParam0->f_27)
				{
					func_243(uParam0, 1, 1);
					*uParam0 = 0;
					uParam0->f_27 = 1;
					func_111();
					return 1;
				}
				else
				{
					func_95(uParam0, 17);
					*uParam0 = 1;
				}
			}
			break;
		
		case 17:
			func_95(uParam0, 0);
			func_97();
			func_243(uParam0, 1, bParam8);
			*uParam0 = 1;
			func_111();
			return 1;
			break;
	}
	return 0;
}

int func_127(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (uParam1->f_65 - 1))
	{
		if (unk_0x194BE26D9C2BA32A(uParam0->f_7))
		{
			if (!func_158(uParam0->f_24, uParam0->f_25, unk_0x8DE41FE6C7E476A4(0), unk_0xBF177C366EDB4621(0)))
			{
				uParam0->f_27 = 1;
				return 1;
			}
			func_128(uParam0, uParam1);
			uParam0->f_9++;
		}
		else
		{
			uParam0->f_8++;
		}
		if (uParam0->f_8 > 200)
		{
			func_97();
			uParam0->f_7++;
			uParam0->f_8 = 0;
		}
		if (uParam0->f_9 >= 31)
		{
			return 1;
		}
		if (uParam0->f_7 >= uParam1->f_65)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_128(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0xBD4D163DE2E96729();
	iVar1 = unk_0x4C4E1CA899A313BB(iVar0, "mission");
	iVar2 = unk_0x4C4E1CA899A313BB(iVar1, "gen");
	uParam1->f_72[uParam0->f_9 /*69*/].f_45 = { func_81(iVar2, "start") };
	if (func_104())
	{
		StringCopy(&(uParam1->f_72[uParam0->f_9 /*69*/].f_12), unk_0x928932A7D11B745D(iVar2, "nm"), 64);
	}
	else
	{
		StringCopy(&(uParam1->f_72[uParam0->f_9 /*69*/].f_12), unk_0xC6F867A99F8F655E(uParam0->f_7), 64);
	}
	if (!func_104())
	{
		uParam1->f_72[uParam0->f_9 /*69*/].f_44 = unk_0x141D60A95907EF5D(uParam0->f_7);
	}
	uParam1->f_72[uParam0->f_9 /*69*/].f_68 = unk_0xBF177C366EDB4621(uParam0->f_7);
	uParam1->f_72[uParam0->f_9 /*69*/].f_56 = unk_0x4985D6D7F7AB891A(iVar2, "min");
	uParam1->f_72[uParam0->f_9 /*69*/].f_59 = unk_0x4985D6D7F7AB891A(iVar2, "tnum");
	uParam1->f_72[uParam0->f_9 /*69*/].f_60 = unk_0x4985D6D7F7AB891A(iVar2, "num");
	uParam1->f_72[uParam0->f_9 /*69*/].f_54 = unk_0x4985D6D7F7AB891A(iVar2, "type");
	uParam1->f_72[uParam0->f_9 /*69*/].f_55 = unk_0x4985D6D7F7AB891A(iVar2, "subtype");
	uParam1->f_72[uParam0->f_9 /*69*/].f_48 = { func_81(iVar2, "cam") };
	uParam1->f_72[uParam0->f_9 /*69*/].f_51 = { func_80(iVar2) };
	uParam1->f_72[uParam0->f_9 /*69*/].f_66 = unk_0x4985D6D7F7AB891A(iVar2, "adverm");
	uParam1->f_72[uParam0->f_9 /*69*/].f_57 = func_82(uParam0->f_7);
	StringCopy(&(uParam1->f_72[uParam0->f_9 /*69*/].f_6), unk_0x9C5BADE36CCA7739(uParam0->f_7), 24);
	if (!func_104())
	{
		uParam1->f_72[uParam0->f_9 /*69*/].f_61 = func_78(unk_0xFEEE999D88E37E57(uParam0->f_7, 0), unk_0xF20E78AE771284D7(uParam0->f_7, 0));
	}
	if (func_108() != 2)
	{
		if (uParam1->f_72[uParam0->f_9 /*69*/].f_60 > Global_262145.f_4744)
		{
			uParam1->f_72[uParam0->f_9 /*69*/].f_60 = Global_262145.f_4744;
		}
		if (uParam1->f_72[uParam0->f_9 /*69*/].f_56 > Global_262145.f_4744)
		{
			uParam1->f_72[uParam0->f_9 /*69*/].f_56 = Global_262145.f_4744;
		}
	}
	uParam1->f_72[uParam0->f_9 /*69*/].f_58 = unk_0x4985D6D7F7AB891A(iVar2, "rank");
	func_77(uParam1->f_72[uParam0->f_9 /*69*/].f_54, &(uParam1->f_72[uParam0->f_9 /*69*/].f_60), &(uParam1->f_72[uParam0->f_9 /*69*/].f_56));
	if (uParam1->f_6 < uParam1->f_72[uParam0->f_9 /*69*/].f_56)
	{
		uParam1->f_6 = uParam1->f_72[uParam0->f_9 /*69*/].f_56;
	}
	if (uParam1->f_7 > uParam1->f_72[uParam0->f_9 /*69*/].f_60 || uParam1->f_7 == 0)
	{
		uParam1->f_7 = uParam1->f_72[uParam0->f_9 /*69*/].f_60;
	}
	uParam1->f_72[uParam0->f_9 /*69*/].f_67 = 1;
	unk_0xB8A73E7DA87B2968(&(uParam1->f_72[uParam0->f_9 /*69*/].f_64), 13);
	StringCopy(&(uParam1->f_72[uParam0->f_9 /*69*/]), unk_0x899DB4E43EFCE6C9(uParam0->f_9), 24);
	uParam0->f_8 = 0;
	uParam0->f_7++;
	if (unk_0xBD4D163DE2E96729() != 0)
	{
		unk_0xB97220169CDC1C4B();
	}
	if (!func_104())
	{
		StringCopy(&(uParam1->f_1177[uParam0->f_9 /*6*/]), unk_0x899DB4E43EFCE6C9(uParam0->f_9), 24);
		if (unk_0xA5BA88B1E535CA78(uParam0->f_9))
		{
			unk_0xB8A73E7DA87B2968(&(uParam1->f_72[uParam0->f_9 /*69*/].f_64), 14);
			if (unk_0xBD4D163DE2E96729() != 0)
			{
				unk_0xB97220169CDC1C4B();
			}
		}
	}
}

int func_129(var uParam0, char* sParam1, var uParam2, var uParam3)
{
	switch (uParam0->f_1)
	{
		case 0:
			if (*uParam0 != 0)
			{
				unk_0xB7E15DE8F5970188(*uParam0);
			}
			unk_0x3549CBECB70D02D8();
			uParam0->f_1 = 1;
			break;
		
		case 1:
			if (unk_0x643F9B46516CBA99(sParam1, uParam3, uParam2, 0))
			{
				uParam0->f_1 = 2;
			}
			break;
		
		case 2:
			switch (unk_0x537A70D07E318505(unk_0x6F2B6F2FDD4734E5(0, uParam3)))
			{
				case 1:
					return 0;
				
				case 0:
					uParam0->f_3 = 1;
					return 1;
				
				case 2:
					uParam0->f_2++;
					if (uParam0->f_2 > 200)
					{
						if (*uParam0 != 0)
						{
							unk_0xB7E15DE8F5970188(*uParam0);
							*uParam0 = 0;
						}
						uParam0->f_3 = 0;
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

void func_130()
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
	char cVar16[16];
	var uVar20[4];
	var uVar25[4];
	var uVar30[4];
	var uVar35[4];
	var uVar40[4];
	var uVar45[4];
	var uVar50[4];
	var uVar55[4];
	var uVar60[4];
	var uVar65[4];
	var uVar70[4];
	var uVar75[4];
	int iVar80;
	int iVar81;
	int iVar82[8];
	int iVar91;
	int iVar92[8];
	struct<11> Var101;
	int iVar190;
	int iVar191;
	int iVar192;
	int iVar193;
	struct<3> Var194;
	
	iVar0 = unk_0xBD4D163DE2E96729();
	iVar1 = unk_0x4C4E1CA899A313BB(iVar0, "mission");
	iVar2 = unk_0x4C4E1CA899A313BB(iVar1, "endcon");
	iVar3 = unk_0x4C4E1CA899A313BB(iVar1, "ene");
	iVar4 = unk_0x4985D6D7F7AB891A(iVar3, "no");
	iVar5 = unk_0x05989B8A830B4E1C(iVar3, "loc");
	iVar6 = unk_0x4C4E1CA899A313BB(iVar1, "goto");
	iVar7 = unk_0x4985D6D7F7AB891A(iVar6, "no");
	iVar8 = unk_0x4C4E1CA899A313BB(iVar1, "veh");
	iVar9 = unk_0x4985D6D7F7AB891A(iVar8, "no");
	iVar10 = unk_0x05989B8A830B4E1C(iVar8, "loc");
	iVar11 = unk_0x4C4E1CA899A313BB(iVar1, "obj");
	iVar12 = unk_0x4985D6D7F7AB891A(iVar11, "no");
	iVar13 = unk_0x05989B8A830B4E1C(iVar11, "loc");
	iVar14 = 0;
	while (iVar14 <= (Global_1632166.f_29 - 1))
	{
		if (iVar14 < 4)
		{
			Global_1630921.f_1[iVar14] = unk_0x6BAB52A8425E7B4B(unk_0x05989B8A830B4E1C(iVar2, "nrl"), iVar14);
			StringCopy(&cVar16, "txt", 16);
			StringIntConCat(&cVar16, iVar14, 16);
			uVar20[iVar14] = unk_0x05989B8A830B4E1C(iVar2, &cVar16);
			StringCopy(&cVar16, "irbs", 16);
			StringIntConCat(&cVar16, iVar14, 16);
			uVar25[iVar14] = unk_0x05989B8A830B4E1C(iVar2, &cVar16);
			StringCopy(&cVar16, "irbs2", 16);
			StringIntConCat(&cVar16, iVar14, 16);
			uVar30[iVar14] = unk_0x05989B8A830B4E1C(iVar2, &cVar16);
			iVar15 = 0;
			while (iVar15 <= (Global_1630921.f_1[iVar14] - 1))
			{
				Global_1630921.f_6[iVar14 /*18*/][iVar15] = unk_0x6BAB52A8425E7B4B(uVar25[iVar14], iVar15);
				Global_1630921.f_79[iVar14 /*18*/][iVar15] = unk_0x6BAB52A8425E7B4B(uVar30[iVar14], iVar15);
				if (uVar20[iVar14] != 0)
				{
					StringCopy(&(Global_1630921.f_152[iVar14 /*273*/][iVar15 /*16*/]), unk_0xE0DCCCE203DC2979(uVar20[iVar14], iVar15), 64);
				}
				else
				{
					StringCopy(&(Global_1630921.f_152[iVar14 /*273*/][iVar15 /*16*/]), "", 64);
				}
				iVar15++;
			}
		}
		iVar14++;
	}
	Var101 = 8;
	Var101.f_1 = 10;
	Var101.f_1.f_11 = 10;
	Var101.f_1.f_11.f_11 = 10;
	Var101.f_1.f_11.f_11.f_11 = 10;
	Var101.f_1.f_11.f_11.f_11.f_11 = 10;
	Var101.f_1.f_11.f_11.f_11.f_11.f_11 = 10;
	Var101.f_1.f_11.f_11.f_11.f_11.f_11.f_11 = 10;
	Var101.f_1.f_11.f_11.f_11.f_11.f_11.f_11.f_11 = 10;
	iVar80 = 0;
	while (iVar80 <= (Global_1632166.f_29 - 1))
	{
		iVar91 = 0;
		iVar81 = 0;
		iVar190 = 0;
		iVar192 = 0;
		iVar14 = 0;
		while (iVar14 < 8)
		{
			iVar92[iVar14] = -1;
			iVar82[iVar14] = 0;
			iVar191 = 0;
			while (iVar191 < 10)
			{
				Var101[iVar14 /*11*/][iVar191] = 0;
				iVar191++;
			}
			iVar14++;
		}
		iVar14 = 0;
		while (iVar14 < Global_1630921.f_1[iVar80])
		{
			if ((!unk_0xF44A5E894FE76438(Global_1630921.f_6[iVar80 /*18*/][iVar14], 11) && !unk_0xF44A5E894FE76438(Global_1630921.f_79[iVar80 /*18*/][iVar14], 21)) && iVar81 < 8)
			{
				iVar92[iVar81] = iVar14;
				iVar81++;
			}
			iVar14++;
		}
		StringCopy(&cVar16, "rule", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar60[iVar80] = unk_0x05989B8A830B4E1C(iVar8, &cVar16);
		StringCopy(&cVar16, "pri", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar65[iVar80] = unk_0x05989B8A830B4E1C(iVar8, &cVar16);
		iVar14 = 0;
		while (iVar14 < iVar9)
		{
			iVar15 = unk_0x6BAB52A8425E7B4B(uVar60[iVar80], iVar14);
			iVar193 = unk_0x6BAB52A8425E7B4B(uVar65[iVar80], iVar14);
			if (((((iVar193 != -1 && iVar193 < 17) && iVar15 != 0) && iVar15 != 99999) && !unk_0xF44A5E894FE76438(Global_1630921.f_6[iVar80 /*18*/][iVar193], 11)) && !unk_0xF44A5E894FE76438(Global_1630921.f_79[iVar80 /*18*/][iVar193], 21))
			{
				iVar91 = func_132(&iVar92, iVar193, iVar81);
				if (iVar91 != -1 && iVar82[iVar91] < 10)
				{
					Global_1749585.f_407[iVar91 /*295*/].f_125[iVar80 /*31*/][iVar82[iVar91] /*3*/] = { unk_0x866B2C4E49D29F3B(iVar10, iVar14) };
					Global_1749585.f_407[iVar91 /*295*/].f_250[iVar80 /*11*/][iVar82[iVar91]] = 1;
					Global_1749585.f_407[iVar91 /*295*/][iVar80 /*31*/][iVar82[iVar91] /*3*/] = { func_131(iVar15, 1) };
					iVar82[iVar91]++;
				}
			}
			iVar14++;
		}
		StringCopy(&cVar16, "rule", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar70[iVar80] = unk_0x05989B8A830B4E1C(iVar11, &cVar16);
		StringCopy(&cVar16, "pri", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar75[iVar80] = unk_0x05989B8A830B4E1C(iVar11, &cVar16);
		iVar14 = 0;
		while (iVar14 < iVar12)
		{
			iVar15 = unk_0x6BAB52A8425E7B4B(uVar70[iVar80], iVar14);
			iVar193 = unk_0x6BAB52A8425E7B4B(uVar75[iVar80], iVar14);
			if (((((iVar193 != -1 && iVar193 < 17) && iVar15 != 0) && iVar15 != 99999) && !unk_0xF44A5E894FE76438(Global_1630921.f_6[iVar80 /*18*/][iVar193], 11)) && !unk_0xF44A5E894FE76438(Global_1630921.f_79[iVar80 /*18*/][iVar193], 21))
			{
				iVar91 = func_132(&iVar92, iVar193, iVar81);
				if (iVar91 != -1 && iVar82[iVar91] < 10)
				{
					Global_1749585.f_407[iVar91 /*295*/].f_125[iVar80 /*31*/][iVar82[iVar91] /*3*/] = { unk_0x866B2C4E49D29F3B(iVar13, iVar14) };
					Global_1749585.f_407[iVar91 /*295*/].f_250[iVar80 /*11*/][iVar82[iVar91]] = 1;
					Global_1749585.f_407[iVar91 /*295*/][iVar80 /*31*/][iVar82[iVar91] /*3*/] = { func_131(iVar15, 3) };
					iVar82[iVar91]++;
				}
			}
			iVar14++;
		}
		StringCopy(&cVar16, "rl", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar45[iVar80] = unk_0x05989B8A830B4E1C(iVar6, &cVar16);
		StringCopy(&cVar16, "pri", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar50[iVar80] = unk_0x05989B8A830B4E1C(iVar6, &cVar16);
		StringCopy(&cVar16, "loc", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar55[iVar80] = unk_0x05989B8A830B4E1C(iVar6, &cVar16);
		iVar14 = 0;
		while (iVar14 < iVar7)
		{
			iVar193 = unk_0x6BAB52A8425E7B4B(uVar50[iVar80], iVar14);
			iVar15 = unk_0x6BAB52A8425E7B4B(uVar45[iVar80], iVar14);
			if (((((iVar193 != -1 && iVar193 < 17) && iVar15 != 0) && iVar15 != 99999) && !unk_0xF44A5E894FE76438(Global_1630921.f_6[iVar80 /*18*/][iVar193], 11)) && !unk_0xF44A5E894FE76438(Global_1630921.f_79[iVar80 /*18*/][iVar193], 21))
			{
				iVar91 = func_132(&iVar92, iVar193, iVar81);
				if (iVar91 != -1 && iVar82[iVar91] < 10)
				{
					Global_1749585.f_407[iVar91 /*295*/].f_125[iVar80 /*31*/][iVar82[iVar91] /*3*/] = { unk_0x866B2C4E49D29F3B(uVar55[iVar80], iVar14) };
					Global_1749585.f_407[iVar91 /*295*/].f_250[iVar80 /*11*/][iVar82[iVar91]] = 1;
					Global_1749585.f_407[iVar91 /*295*/][iVar80 /*31*/][iVar82[iVar91] /*3*/] = { func_131(iVar15, 4) };
					iVar82[iVar91]++;
				}
			}
			iVar14++;
		}
		StringCopy(&cVar16, "rule", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar35[iVar80] = unk_0x05989B8A830B4E1C(iVar3, &cVar16);
		StringCopy(&cVar16, "pri", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar40[iVar80] = unk_0x05989B8A830B4E1C(iVar3, &cVar16);
		iVar14 = 0;
		while (iVar14 < iVar4)
		{
			iVar193 = unk_0x6BAB52A8425E7B4B(uVar40[iVar80], iVar14);
			iVar15 = unk_0x6BAB52A8425E7B4B(uVar35[iVar80], iVar14);
			if (((((iVar193 != -1 && iVar193 < 17) && iVar15 != 0) && iVar15 != 99999) && !unk_0xF44A5E894FE76438(Global_1630921.f_6[iVar80 /*18*/][iVar193], 11)) && !unk_0xF44A5E894FE76438(Global_1630921.f_79[iVar80 /*18*/][iVar193], 21))
			{
				iVar91 = func_132(&iVar92, iVar193, iVar81);
				if (iVar91 != -1 && iVar82[iVar91] < 10)
				{
					iVar190 = iVar82[iVar91];
					iVar192 = 0;
					iVar191 = 0;
					while (iVar191 < 10)
					{
						if (iVar192 == 0 && Global_1749585.f_407[iVar91 /*295*/].f_250[iVar80 /*11*/][iVar191] == 2)
						{
							iVar190 = iVar191;
							iVar192 = 1;
						}
						iVar191++;
					}
					if (iVar192 == 0)
					{
						iVar82[iVar91]++;
					}
					Var194 = { unk_0x866B2C4E49D29F3B(iVar5, iVar14) };
					Global_1749585.f_407[iVar91 /*295*/].f_125[iVar80 /*31*/][iVar190 /*3*/] = Var194.f_0;
					Global_1749585.f_407[iVar91 /*295*/].f_125[iVar80 /*31*/][iVar190 /*3*/].f_1 = Var194.f_1;
					Var101[iVar91 /*11*/][iVar190]++;
					Global_1749585.f_407[iVar91 /*295*/].f_250[iVar80 /*11*/][iVar190] = 2;
					Global_1749585.f_407[iVar91 /*295*/][iVar80 /*31*/][iVar190 /*3*/] = { func_131(iVar15, 2) };
				}
			}
			iVar14++;
		}
		iVar14 = 0;
		while (iVar14 < 8)
		{
			iVar191 = 0;
			while (iVar191 < 10)
			{
				if (Global_1749585.f_407[iVar14 /*295*/].f_250[iVar80 /*11*/][iVar191] == 2)
				{
					Global_1749585.f_407[iVar14 /*295*/].f_125[iVar80 /*31*/][iVar191 /*3*/] = (Global_1749585.f_407[iVar14 /*295*/].f_125[iVar80 /*31*/][iVar191 /*3*/] / IntToFloat(Var101[iVar14 /*11*/][iVar191]));
					Global_1749585.f_407[iVar14 /*295*/].f_125[iVar80 /*31*/][iVar191 /*3*/].f_1 = (Global_1749585.f_407[iVar14 /*295*/].f_125[iVar80 /*31*/][iVar191 /*3*/].f_1 / IntToFloat(Var101[iVar14 /*11*/][iVar191]));
				}
				iVar191++;
			}
			iVar14++;
		}
		iVar80++;
	}
	if (unk_0xBD4D163DE2E96729() != 0)
	{
		unk_0xB97220169CDC1C4B();
	}
}

Vector3 func_131(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	switch (iParam0)
	{
		case 1:
			if (iParam1 == 1 || iParam1 == 2)
			{
				Var0.f_0 = 70;
				Var0.f_1 = 70;
				Var0.f_2 = 255;
			}
			else if (iParam1 == 3)
			{
				Var0.f_0 = 70;
				Var0.f_1 = 255;
				Var0.f_2 = 70;
			}
			break;
		
		case 2:
			Var0.f_0 = 255;
			Var0.f_1 = 70;
			Var0.f_2 = 70;
			break;
		
		case 3:
			if (iParam1 == 1 || iParam1 == 2)
			{
				Var0.f_0 = 70;
				Var0.f_1 = 70;
				Var0.f_2 = 255;
			}
			else if (iParam1 == 3)
			{
				Var0.f_0 = 70;
				Var0.f_1 = 255;
				Var0.f_2 = 70;
			}
			break;
		
		case 4:
			if (iParam1 == 1 || iParam1 == 2)
			{
				Var0.f_0 = 70;
				Var0.f_1 = 70;
				Var0.f_2 = 255;
			}
			else if (iParam1 == 3)
			{
				Var0.f_0 = 70;
				Var0.f_1 = 255;
				Var0.f_2 = 70;
			}
			else if (iParam1 == 4)
			{
				Var0.f_0 = 200;
				Var0.f_1 = 200;
				Var0.f_2 = 50;
			}
			break;
		
		case 5:
			Var0.f_0 = 200;
			Var0.f_1 = 200;
			Var0.f_2 = 50;
			break;
		
		case 11:
			if (iParam1 == 1 || iParam1 == 2)
			{
				Var0.f_0 = 70;
				Var0.f_1 = 70;
				Var0.f_2 = 255;
			}
			else if (iParam1 == 3)
			{
				Var0.f_0 = 70;
				Var0.f_1 = 255;
				Var0.f_2 = 70;
			}
			break;
		
		case 12:
			if (iParam1 == 1 || iParam1 == 2)
			{
				Var0.f_0 = 70;
				Var0.f_1 = 70;
				Var0.f_2 = 255;
			}
			else if (iParam1 == 3)
			{
				Var0.f_0 = 70;
				Var0.f_1 = 255;
				Var0.f_2 = 70;
			}
			break;
		
		case 13:
			Var0.f_0 = 70;
			Var0.f_1 = 255;
			Var0.f_2 = 70;
			break;
		
		default:
			Var0.f_0 = 255;
			Var0.f_1 = 255;
			Var0.f_2 = 255;
			break;
	}
	return Var0;
}

int func_132(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (iParam2 - 1))
	{
		if ((*iParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_133(var uParam0, bool bParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	struct<6> Var4;
	struct<8> Var10;
	struct<16> Var18;
	
	if (*uParam0 != 0)
	{
		unk_0xB7E15DE8F5970188(*uParam0);
		*uParam0 = 0;
	}
	*uParam0 = uVar0;
	uParam0->f_1 = uVar1;
	uParam0->f_2 = uVar2;
	uParam0->f_3 = uVar3;
	MemCopy(&(uParam0->f_4), {Var4}, 16);
	if (bParam1)
	{
		MemCopy(&(uParam0->f_20), {Var10}, 16);
		uParam0->f_36 = { Var18 };
	}
}

bool func_134()
{
	return Global_2443089.f_598;
}

int func_135()
{
	if (((func_139() || func_138()) || func_137()) || func_136())
	{
		return 1;
	}
	return 0;
}

bool func_136()
{
	return unk_0xF44A5E894FE76438(Global_2443089, 1);
}

bool func_137()
{
	return unk_0xF44A5E894FE76438(Global_2443089, 2);
}

bool func_138()
{
	return unk_0xF44A5E894FE76438(Global_2443089, 20);
}

var func_139()
{
	return Global_2443089.f_577;
}

int func_140(int iParam0)
{
	if ((((func_145(iParam0) || func_144(iParam0)) || func_143(iParam0)) || func_142(iParam0)) || func_141(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_141(int iParam0)
{
	return iParam0 == Global_262145.f_7373;
}

bool func_142(int iParam0)
{
	return iParam0 == Global_262145.f_7367;
}

bool func_143(int iParam0)
{
	return iParam0 == Global_262145.f_7361;
}

bool func_144(int iParam0)
{
	return iParam0 == Global_262145.f_7354;
}

bool func_145(int iParam0)
{
	return iParam0 == Global_262145.f_7349;
}

int func_146(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	if (func_101())
	{
		uParam0->f_19 = 0;
		return 1;
	}
	if (func_104())
	{
		return 1;
	}
	if ((uParam0->f_21 != -1 && uParam0->f_22 != -1) && iParam3 == 0)
	{
		return 1;
	}
	switch (uParam0->f_19)
	{
		case 0:
			func_97();
			func_147();
			Global_1738432.f_5 = 0;
			uParam0->f_8 = 0;
			if (iParam3 == 1)
			{
				Global_1738457.f_5 = 0;
				Global_1738457.f_4 = 0;
				Global_1738457.f_1 = 0;
				Global_1738457.f_2 = 0;
				return 1;
			}
			else if (iParam3 == 4)
			{
				Global_1738457.f_5 = 0;
				uParam0->f_19 = 1;
				return 0;
			}
			if (uParam0->f_18 == 0 || uParam0->f_18 == 1)
			{
				uParam0->f_19 = 1;
			}
			else if (uParam0->f_18 == 2)
			{
				uParam0->f_19 = 2;
			}
			break;
		
		case 1:
			if (unk_0x4B4EDD6C64456F27(iParam1, 1))
			{
				if (iParam3 == 4)
				{
					iVar0 = unk_0xBD4D163DE2E96729();
					Global_1738463 = unk_0x4985D6D7F7AB891A(iVar0, "pt");
					Global_1738463.f_1 = unk_0x4985D6D7F7AB891A(iVar0, "pu");
					Global_1738463.f_2 = unk_0x4985D6D7F7AB891A(iVar0, "ft");
					Global_1738463.f_3 = unk_0x4985D6D7F7AB891A(iVar0, "fu");
					Global_1738463.f_4 = unk_0x4985D6D7F7AB891A(iVar0, "qt");
					Global_1738463.f_5 = unk_0x4985D6D7F7AB891A(iVar0, "qu");
				}
				else
				{
					iVar0 = unk_0xBD4D163DE2E96729();
					Global_1738432.f_10 = unk_0xBBDA792448DB5A89(unk_0x4985D6D7F7AB891A(iVar0, "dt"));
					Global_1738432.f_11 = unk_0xBBDA792448DB5A89(unk_0x4985D6D7F7AB891A(iVar0, "du"));
					Global_1738432.f_9 = (Global_1738432.f_10 / Global_1738432.f_11);
					Global_1738432.f_13 = unk_0xBBDA792448DB5A89(unk_0x4985D6D7F7AB891A(iVar0, "pt"));
					Global_1738432.f_14 = unk_0xBBDA792448DB5A89(unk_0x4985D6D7F7AB891A(iVar0, "pu"));
					Global_979489 = unk_0xF2DB717A73826179(Global_1738432.f_14);
					Global_1738432.f_12 = (Global_1738432.f_13 / Global_1738432.f_14);
					Global_1738432.f_15 = unk_0xBBDA792448DB5A89(unk_0x4985D6D7F7AB891A(iVar0, "qt"));
					Global_1738432.f_17 = unk_0xBBDA792448DB5A89(unk_0x4985D6D7F7AB891A(iVar0, "qu"));
					Global_1738432.f_16 = (Global_1738432.f_15 / Global_1738432.f_17);
				}
				if (unk_0xBD4D163DE2E96729() != 0)
				{
					unk_0xB97220169CDC1C4B();
				}
				if (uParam0->f_18 == 0)
				{
					uParam0->f_19 = 2;
				}
				else
				{
					uParam0->f_19 = 0;
					return 1;
				}
			}
			else
			{
				uParam0->f_8++;
				if (uParam0->f_8 > 5)
				{
					uParam0->f_19 = 0;
					uParam0->f_8 = 0;
					return 1;
				}
			}
			break;
		
		case 2:
			if (unk_0xA5BA88B1E535CA78(iParam1))
			{
				if (bParam2)
				{
					if (unk_0xCE9DF772316A5853(iParam1))
					{
						iVar0 = unk_0xBD4D163DE2E96729();
						if (iParam3 == 0)
						{
							Global_1738432 = unk_0x4985D6D7F7AB891A(iVar0, "quit");
							Global_1738432.f_2 = unk_0x4985D6D7F7AB891A(iVar0, "ply");
							Global_1738432.f_8 = unk_0x4985D6D7F7AB891A(iVar0, "fl");
							if (Global_1738432.f_2 > 0)
							{
								Global_1738432.f_5 = 1;
							}
							unk_0xB97220169CDC1C4B();
						}
						else if (iParam3 == 4)
						{
							Global_1738457.f_5 = unk_0x1DCCD87216370AE6(iVar0, "won");
							Global_1738457.f_4 = unk_0x4985D6D7F7AB891A(iVar0, "ply");
							Global_1738457.f_1 = unk_0x4985D6D7F7AB891A(iVar0, "quit");
							Global_1738457.f_2 = unk_0x4985D6D7F7AB891A(iVar0, "fl");
						}
						uParam0->f_19 = 0;
						return 1;
					}
					else
					{
						uParam0->f_8++;
						if (uParam0->f_8 > 100)
						{
							uParam0->f_19 = 0;
							uParam0->f_8 = 0;
							return 1;
						}
					}
				}
				else
				{
					uParam0->f_17 = 1;
				}
			}
			else
			{
				uParam0->f_19 = 0;
				return 1;
			}
			break;
	}
	return 0;
}

void func_147()
{
	Global_1738432 = 0;
	Global_1738432.f_2 = 0;
	Global_1738432.f_8 = 0;
	Global_1738432.f_3 = 0;
	Global_1738432.f_6 = 0;
}

int func_148(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_150() && !bParam2)
	{
		if (uParam0->f_21 == -1 || uParam0->f_22 == -1)
		{
			if ((!func_104() && iParam1 == 0) && !bParam3)
			{
				if (Global_1632166.f_87014 == 0)
				{
					if (Global_1632166 == 0)
					{
						if (((((Global_1632166.f_2 != 6 && !unk_0xF44A5E894FE76438(Global_1632166.f_4, 20)) && !unk_0xF44A5E894FE76438(Global_1632166.f_4, 21)) && !unk_0xF44A5E894FE76438(Global_1632166.f_4, 22)) && !unk_0xF44A5E894FE76438(Global_1632166.f_4, 23)) && Global_1632166.f_2 != 5)
						{
							func_243(uParam0, 1, 1);
							uParam0->f_41.f_3 = 0;
							*uParam0 = 0;
							func_111();
							unk_0xB763265526688347(uParam0->f_5);
							func_97();
							return 1;
						}
					}
					else if (Global_1632166 != 2 && Global_1632166 != 1)
					{
						func_243(uParam0, 1, 1);
						uParam0->f_41.f_3 = 0;
						*uParam0 = 0;
						func_111();
						unk_0xB763265526688347(uParam0->f_5);
						func_97();
						return 1;
					}
				}
			}
		}
	}
	if (Global_1632166 == 0 && Global_1632166.f_2 == 6)
	{
		if ((uParam0->f_21 == -1 && uParam0->f_22 == -1) && !func_104())
		{
			if (!unk_0x82F1E66C756CDECA(unk_0x4AC9C5FE2ADC6484(0)))
			{
				Global_1632166.f_86997 = 1;
			}
		}
	}
	uParam0->f_8 = 0;
	if (bParam2)
	{
		func_149();
	}
	func_95(uParam0, 9);
	*uParam0 = 1;
	return 0;
}

void func_149()
{
	unk_0xB8A73E7DA87B2968(&(Global_2443089.f_29.f_3), 7);
}

bool func_150()
{
	return unk_0xF14C5BAFFF8F4CB7(-1762644250);
}

void func_151(int iParam0, struct<16> Param1)
{
	if (iParam0 == 0)
	{
		StringCopy(&Global_2454752, "", 64);
	}
	else
	{
		Global_2454752 = { Param1 };
	}
	Global_2454751 = iParam0;
}

int func_152(var uParam0, var uParam1)
{
	var uVar0;
	
	if (unk_0xC55B9553B3EDADE9(uParam1))
	{
		return 0;
	}
	unk_0xEC12E68852025EF3(uParam1, &uVar0, 13);
	if (unk_0x5A7D76211B9373CD(&uVar0, 13) && unk_0x1DEA7381535B0B19(&uVar0))
	{
		*uParam0 = unk_0x9F20BF1AC4B18747(&uVar0);
		if (unk_0x1E0256D6F1052B31(*uParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_153()
{
	return Global_2443089.f_29.f_47;
}

int func_154()
{
	return Global_2452924;
}

bool func_155()
{
	return Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_187 != 0;
}

void func_156(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	struct<2> Var16;
	var uVar51[16];
	
	*uParam0 = unk_0xBD4D163DE2E96729();
	iVar1 = unk_0x4C4E1CA899A313BB(*uParam0, "data");
	iVar2 = unk_0x4C4E1CA899A313BB(iVar1, "trg");
	*uParam1 = unk_0x05989B8A830B4E1C(iVar2, "list");
	if (iParam3 == 1)
	{
		if (unk_0xF0E984A1CED01E3C(*uParam0, "open") == 1)
		{
			uParam2->f_11 = unk_0x1DCCD87216370AE6(iVar1, "open");
		}
		return;
	}
	uParam2->f_11 = unk_0x1DCCD87216370AE6(iVar1, "open");
	Var3 = { func_157(unk_0x8DE41FE6C7E476A4(0)) };
	unk_0xF6955213DB8BD7D3(&Var16, 35, &Var3);
	uParam2->f_48 = { Var16.f_1 };
	uParam2->f_64 = Var16.f_0;
	uParam2->f_4 = unk_0x4985D6D7F7AB891A(iVar2, "scr");
	uParam2->f_5 = unk_0x4985D6D7F7AB891A(iVar2, "time");
	uParam2->f_1 = unk_0x4985D6D7F7AB891A(iVar1, "cash");
	uParam2->f_65 = unk_0x33374BC9487FCBE5(*uParam1);
	iVar0 = 0;
	while (iVar0 <= (uParam2->f_65 - 1))
	{
		uVar51[iVar0] = unk_0x9C241D830E66662E(*uParam1, iVar0);
		StringCopy(&(uParam2->f_1177[iVar0 /*6*/]), unk_0x928932A7D11B745D(uVar51[iVar0], "cid"), 24);
		uParam2->f_72[iVar0 /*69*/].f_62 = unk_0x4985D6D7F7AB891A(uVar51[iVar0], "scr");
		uParam2->f_72[iVar0 /*69*/].f_63 = unk_0x4985D6D7F7AB891A(uVar51[iVar0], "time");
		iVar0++;
	}
}

struct<13> func_157(var uParam0)
{
	struct<13> Var0;
	
	unk_0xD0BBAB3F4A0B1D61(uParam0, &Var0, 13);
	return Var0;
}

int func_158(int iParam0, bool bParam1, char* sParam2, int iParam3)
{
	struct<13> Var0;
	struct<13> Var13;
	
	if (((iParam3 == 1 || iParam3 == 2) || iParam3 == 3) || iParam3 == 4)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		Var0 = { func_157(sParam2) };
		Var13 = { func_159(unk_0xFB6B3EEFAB2DD12C()) };
		if (bParam1)
		{
			if (unk_0x933A1AE39EF50B58(&Var13, &Var0))
			{
				return 1;
			}
			else if (!unk_0xBB38DDB2E1AE0498(&Var0))
			{
				return 0;
			}
		}
		else if (unk_0xF1A016B51831B87B())
		{
			if (unk_0x933A1AE39EF50B58(&Var13, &Var0))
			{
				return 1;
			}
			else if (unk_0x747C56A5B20D4D4A(&Var0) && unk_0xD59699C2E1196EDA(&Var0))
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
			Var13 = { func_159(unk_0xFB6B3EEFAB2DD12C()) };
			if (!unk_0x933A1AE39EF50B58(&Var13, &Var0))
			{
				return 0;
			}
		}
	}
	return 1;
}

struct<13> func_159(int iParam0)
{
	struct<13> Var0;
	
	unk_0x81C63D2370ED33C5(iParam0, &Var0, 13);
	return Var0;
}

void func_160(var uParam0)
{
	if (uParam0->f_16)
	{
		Global_972474.f_6 = 0;
		Global_972474.f_7 = 32;
	}
	else
	{
		Global_970912.f_6 = 0;
		Global_970912.f_7 = 32;
	}
}

void func_161(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	var uVar1[16];
	
	*uParam0 = unk_0xBD4D163DE2E96729();
	if (*uParam0 == 0)
	{
	}
	*uParam1 = unk_0x05989B8A830B4E1C(*uParam0, "list");
	uParam2->f_10 = 1;
	uParam2->f_65 = unk_0x33374BC9487FCBE5(*uParam1);
	iVar0 = 0;
	while (iVar0 <= (uParam2->f_65 - 1))
	{
		uVar1[iVar0] = unk_0x9C241D830E66662E(*uParam1, iVar0);
		StringCopy(&(uParam2->f_1177[iVar0 /*6*/]), unk_0x928932A7D11B745D(uVar1[iVar0], "cid"), 24);
		iVar0++;
	}
	uParam2->f_10 = unk_0x1DCCD87216370AE6(*uParam0, "h2h");
	uParam2->f_9 = unk_0x1DCCD87216370AE6(*uParam0, "ch");
	if (func_104())
	{
		StringCopy(&(uParam2->f_12), unk_0x928932A7D11B745D(*uParam0, "name"), 64);
	}
}

void func_162(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = unk_0xBD4D163DE2E96729();
	iVar1 = unk_0x4C4E1CA899A313BB(iVar0, "mission");
	iVar2 = unk_0x4C4E1CA899A313BB(iVar1, "gen");
	Global_1632166.f_86970 = unk_0x4985D6D7F7AB891A(iVar0, "debugOnlyVersion");
	if (!bParam2 || iParam3 == 0)
	{
		func_205(iVar1, iParam0, bParam1);
		func_204(iVar1);
		func_203(&iVar1);
		func_202(&iVar1);
		func_201(&iVar1);
		func_200(&iVar1);
		if (bParam2)
		{
			return;
		}
	}
	if (func_125())
	{
		if (!bParam2 || iParam3 == 1)
		{
			func_199(iVar1);
			func_198(iVar1);
			func_197(iVar1);
			if (bParam2)
			{
				return;
			}
		}
		if (!bParam2 || iParam3 == 2)
		{
			func_196(iVar1);
			func_195(iVar2);
			func_194(iVar1);
			if (bParam2)
			{
				return;
			}
		}
		if (!bParam2 || iParam3 == 3)
		{
			func_193(iVar1);
			func_192(iVar1);
			func_191(iVar1);
			if (bParam2)
			{
				return;
			}
		}
	}
	else if (func_122())
	{
		func_189(iVar1);
		func_191(iVar1);
	}
	if (!bParam2 || iParam3 == 4)
	{
		func_187(iVar1);
		func_186(iVar1);
		func_185(iVar1);
		func_184(iVar1);
		func_183(iVar1);
		if (bParam2)
		{
			return;
		}
	}
	if (!bParam2 || iParam3 == 5)
	{
		func_181(iVar1);
		func_180(iVar1);
		func_178(iVar1);
		func_174(iVar1);
		if (bParam2)
		{
			return;
		}
	}
	if (Global_1632166 == 1)
	{
		func_198(iVar1);
		func_173(iVar1);
	}
	else
	{
		func_168(iVar1);
	}
	if (unk_0xF44A5E894FE76438(Global_1632166.f_17, 19))
	{
		func_167(iVar1);
	}
	unk_0x4EA098C870B73AB7(&(Global_1632166.f_4), 15);
	unk_0x4EA098C870B73AB7(&(Global_1632166.f_4), 18);
	unk_0x4EA098C870B73AB7(&(Global_1632166.f_4), 19);
	unk_0x4EA098C870B73AB7(&(Global_1632166.f_4), 29);
	unk_0x4EA098C870B73AB7(&(Global_1632166.f_4), 28);
	if (func_75(Global_1632166.f_86360))
	{
		Global_1632166.f_25 = Global_1632166.f_24;
	}
	if (!func_165(unk_0xFB6B3EEFAB2DD12C()) && !func_164())
	{
		iVar3 = func_76(Global_1632166.f_86360);
		if (iVar3 != -1)
		{
			if (Global_262145.f_5016[iVar3] != -1)
			{
				Global_1632166.f_25 = Global_262145.f_5016[iVar3];
			}
			if (Global_262145.f_4985[iVar3] != -1)
			{
				Global_1632166.f_24 = Global_262145.f_4985[iVar3];
			}
		}
	}
	if (func_51(Global_1632166.f_86360))
	{
		unk_0xB8A73E7DA87B2968(&(Global_1632166.f_4), 15);
	}
	else if (func_50(Global_1632166.f_86360))
	{
		unk_0xB8A73E7DA87B2968(&(Global_1632166.f_4), 18);
	}
	else if (func_49(Global_1632166.f_86360))
	{
		unk_0xB8A73E7DA87B2968(&(Global_1632166.f_4), 19);
	}
	else if (func_47(Global_1632166.f_86360))
	{
		unk_0xB8A73E7DA87B2968(&(Global_1632166.f_4), 29);
	}
	else if (func_48(Global_1632166.f_86360))
	{
		unk_0xB8A73E7DA87B2968(&(Global_1632166.f_4), 28);
	}
	else if (func_46(Global_1632166.f_86360))
	{
		unk_0xB8A73E7DA87B2968(&(Global_1632166.f_5), 0);
	}
	else if (func_45(Global_1632166.f_86360))
	{
		unk_0xB8A73E7DA87B2968(&(Global_1632166.f_5), 1);
	}
	else if (func_44(Global_1632166.f_86360))
	{
		unk_0xB8A73E7DA87B2968(&(Global_1632166.f_5), 2);
	}
	else if (func_40(Global_1632166.f_86360))
	{
		unk_0xB8A73E7DA87B2968(&(Global_1632166.f_5), 6);
	}
	else if (func_39(Global_1632166.f_86360))
	{
		unk_0xB8A73E7DA87B2968(&(Global_1632166.f_5), 7);
	}
	else if (func_38(Global_1632166.f_86360))
	{
		unk_0xB8A73E7DA87B2968(&(Global_1632166.f_5), 8);
	}
	else if (func_37(Global_1632166.f_86360))
	{
		unk_0xB8A73E7DA87B2968(&(Global_1632166.f_5), 9);
	}
	else if (func_33(Global_1632166.f_86360))
	{
		unk_0xB8A73E7DA87B2968(&(Global_1632166.f_5), 10);
	}
	else if (func_36(Global_1632166.f_86360))
	{
		unk_0xB8A73E7DA87B2968(&(Global_1632166.f_5), 11);
	}
	else if (func_35(Global_1632166.f_86360))
	{
		unk_0xB8A73E7DA87B2968(&(Global_1632166.f_5), 12);
	}
	else if (func_70(Global_1632166.f_105262))
	{
		unk_0xB8A73E7DA87B2968(&(Global_1632166.f_5), 13);
	}
	else if (func_69(Global_1632166.f_105262))
	{
		unk_0xB8A73E7DA87B2968(&(Global_1632166.f_5), 22);
	}
	else if (func_34(Global_1632166.f_86360))
	{
		unk_0xB8A73E7DA87B2968(&(Global_1632166.f_5), 14);
	}
	else if (func_43(Global_1632166.f_86360))
	{
		unk_0xB8A73E7DA87B2968(&(Global_1632166.f_5), 3);
	}
	else if (func_42(Global_1632166.f_86360))
	{
		unk_0xB8A73E7DA87B2968(&(Global_1632166.f_5), 4);
	}
	else if (func_68(Global_1632166.f_105262))
	{
		unk_0xB8A73E7DA87B2968(&(Global_1632166.f_5), 16);
	}
	else if (func_67(Global_1632166.f_105262))
	{
		unk_0xB8A73E7DA87B2968(&(Global_1632166.f_5), 17);
	}
	else if (func_66(Global_1632166.f_105262))
	{
		unk_0xB8A73E7DA87B2968(&(Global_1632166.f_5), 20);
	}
	else if (func_65(Global_1632166.f_105262))
	{
		unk_0xB8A73E7DA87B2968(&(Global_1632166.f_5), 21);
	}
	else if (func_69(Global_1632166.f_105262))
	{
		unk_0xB8A73E7DA87B2968(&(Global_1632166.f_5), 22);
	}
	else if (func_41(Global_1632166.f_86360))
	{
		unk_0xB8A73E7DA87B2968(&(Global_1632166.f_5), 5);
	}
	else if (func_64(Global_1632166.f_105262))
	{
		unk_0xB8A73E7DA87B2968(&(Global_1632166.f_5), 23);
	}
	else if (func_60(Global_1632166.f_105262))
	{
		unk_0xB8A73E7DA87B2968(&(Global_1632166.f_5), 27);
	}
	else if (func_63(Global_1632166.f_105262))
	{
		unk_0xB8A73E7DA87B2968(&(Global_1632166.f_5), 24);
	}
	else if (func_61(Global_1632166.f_105262))
	{
		unk_0xB8A73E7DA87B2968(&(Global_1632166.f_5), 26);
	}
	else if (func_62(Global_1632166.f_105262))
	{
		unk_0xB8A73E7DA87B2968(&(Global_1632166.f_5), 25);
	}
	else if (func_59(Global_1632166.f_105262))
	{
		unk_0xB8A73E7DA87B2968(&(Global_1632166.f_5), 28);
	}
	else if (func_58(Global_1632166.f_105262))
	{
		unk_0xB8A73E7DA87B2968(&(Global_1632166.f_5), 29);
	}
	else if (func_57(Global_1632166.f_105262))
	{
		unk_0xB8A73E7DA87B2968(&(Global_1632166.f_5), 30);
	}
	func_163(Global_1632166.f_86360);
}

void func_163(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	
	if (iParam0 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iParam0 == Global_262145.f_7778[iVar0] || iParam0 == Global_262145.f_7787[iVar0])
		{
			Global_1632166.f_65 = { func_55(0, iVar0) };
			Global_1632166.f_68 = { func_54(0, iVar0) };
			Var1 = { func_53(0, iVar0) };
			Global_1632166.f_87 = Var1.f_2;
			Global_1632166.f_1 = 0;
			Global_1632166.f_2 = 8;
			Global_1632166.f_86977 = 0;
			Global_1632166.f_86981 = 16777215;
		}
		iVar0++;
	}
}

bool func_164()
{
	return unk_0xF44A5E894FE76438(Global_2443860.f_1.f_2808, 5);
}

bool func_165(int iParam0)
{
	return func_166(iParam0);
}

bool func_166(int iParam0)
{
	return unk_0xF44A5E894FE76438(Global_1589933[iParam0 /*601*/].f_13.f_1, 0);
}

void func_167(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = unk_0x4C4E1CA899A313BB(iParam0, "fsp");
	iVar2 = unk_0x05989B8A830B4E1C(iVar1, "loc");
	iVar3 = unk_0x05989B8A830B4E1C(iVar1, "head");
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (unk_0x1C9BFBB46CC94A75(iVar2, iVar0) == 5)
		{
			Global_1632166.f_82471[iVar0 /*5*/] = { unk_0x866B2C4E49D29F3B(iVar2, iVar0) };
			Global_1632166.f_82471[iVar0 /*5*/].f_3 = unk_0x07F84E836DFFE814(iVar3, iVar0);
		}
		else
		{
			Global_1632166.f_82471[iVar0 /*5*/] = { 0f, 0f, 0f };
			Global_1632166.f_82471[iVar0 /*5*/].f_3 = 0f;
		}
		iVar0++;
	}
}

void func_168(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char[] cVar4[8];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	var uVar14[4];
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	var uVar51[4];
	var uVar56[4];
	var uVar61[4];
	var uVar66[4];
	var uVar71[4];
	var uVar76[4];
	var uVar81[4];
	var uVar86[4];
	var uVar91[4];
	var uVar96[4];
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	int iVar105;
	int iVar106;
	int iVar107;
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	int iVar112;
	int iVar113;
	int iVar114;
	int iVar115;
	int iVar116;
	int iVar117;
	int iVar118;
	int iVar119;
	int iVar120;
	int iVar121;
	int iVar122;
	int iVar123;
	int iVar124;
	int iVar125;
	int iVar126;
	int iVar127;
	int iVar128;
	int iVar129;
	int iVar130;
	int iVar131;
	int iVar132;
	int iVar133;
	int iVar134;
	int iVar135;
	int iVar136;
	int iVar137;
	int iVar138;
	int iVar139;
	int iVar140;
	int iVar141;
	int iVar142;
	int iVar143;
	int iVar144;
	int iVar145;
	int iVar146;
	int iVar147;
	int iVar148;
	int iVar149;
	int iVar150;
	int iVar151;
	int iVar152;
	int iVar153;
	int iVar154;
	int iVar155;
	int iVar156;
	int iVar157;
	int iVar158;
	int iVar159;
	int iVar160;
	int iVar161;
	int iVar162;
	int iVar163;
	int iVar164;
	int iVar165;
	int iVar166;
	int iVar167;
	int iVar168;
	var uVar169[5];
	var uVar175[5];
	var uVar181[5];
	var uVar187[5];
	var uVar193[5];
	var uVar199[5];
	var uVar205[5];
	var uVar211[5];
	int iVar217;
	int iVar218;
	int iVar219;
	int iVar220;
	int iVar221;
	int iVar222;
	int iVar223;
	int iVar224;
	int iVar225;
	int iVar226;
	int iVar227;
	int iVar228;
	int iVar229;
	int iVar230;
	int iVar231;
	int iVar232;
	int iVar233;
	int iVar234;
	int iVar235;
	int iVar236;
	int iVar237;
	int iVar238;
	int iVar239;
	int iVar240;
	int iVar241;
	int iVar242;
	int iVar243;
	int iVar244;
	int iVar245;
	int iVar246;
	int iVar247;
	int iVar248;
	int iVar249;
	var uVar250[2];
	var uVar253[2];
	
	iVar6 = unk_0x4C4E1CA899A313BB(iParam0, "ene");
	Global_1632166.f_59748 = unk_0x4985D6D7F7AB891A(iVar6, "no");
	if (unk_0xF0E984A1CED01E3C(iVar6, "spcap") == 2 && unk_0x4985D6D7F7AB891A(iVar6, "spcap") != 0)
	{
		Global_1632166.f_59749 = unk_0x4985D6D7F7AB891A(iVar6, "spcap");
	}
	else
	{
		Global_1632166.f_59749 = 50;
	}
	Global_1632166.f_59751 = unk_0x4985D6D7F7AB891A(iVar6, "time");
	Global_1632166.f_59752 = unk_0x4985D6D7F7AB891A(iVar6, "pal");
	iVar7 = unk_0x05989B8A830B4E1C(iVar6, "loc");
	iVar8 = unk_0x05989B8A830B4E1C(iVar6, "head");
	iVar9 = unk_0x05989B8A830B4E1C(iVar6, "rng");
	iVar10 = unk_0x05989B8A830B4E1C(iVar6, "model");
	iVar11 = unk_0x05989B8A830B4E1C(iVar6, "gun");
	iVar12 = unk_0x05989B8A830B4E1C(iVar6, "skill");
	iVar13 = unk_0x05989B8A830B4E1C(iVar6, "rsp");
	if (Global_1632166 == 1)
	{
		uVar14[0] = unk_0x05989B8A830B4E1C(iVar6, "team");
	}
	iVar19 = unk_0x05989B8A830B4E1C(iVar6, "wep");
	iVar20 = unk_0x05989B8A830B4E1C(iVar6, "hlt");
	iVar21 = unk_0x05989B8A830B4E1C(iVar6, "lghlt");
	iVar22 = unk_0x05989B8A830B4E1C(iVar6, "veh");
	iVar23 = unk_0x05989B8A830B4E1C(iVar6, "foll");
	iVar24 = unk_0x05989B8A830B4E1C(iVar6, "iaim");
	iVar25 = unk_0x05989B8A830B4E1C(iVar6, "iaimt");
	iVar26 = unk_0x05989B8A830B4E1C(iVar6, "iaimr");
	iVar27 = unk_0x05989B8A830B4E1C(iVar6, "sanim");
	iVar28 = unk_0x05989B8A830B4E1C(iVar6, "sat");
	iVar29 = unk_0x05989B8A830B4E1C(iVar6, "saru");
	iVar30 = unk_0x05989B8A830B4E1C(iVar6, "sara");
	iVar31 = unk_0x05989B8A830B4E1C(iVar6, "satt");
	iVar32 = unk_0x05989B8A830B4E1C(iVar6, "whost");
	iVar33 = unk_0x05989B8A830B4E1C(iVar6, "flee");
	iVar34 = unk_0x05989B8A830B4E1C(iVar6, "frr");
	iVar35 = unk_0x05989B8A830B4E1C(iVar6, "pfrmr");
	iVar36 = unk_0x05989B8A830B4E1C(iVar6, "psnt");
	iVar37 = unk_0x05989B8A830B4E1C(iVar6, "psnei");
	iVar38 = unk_0x05989B8A830B4E1C(iVar6, "p2sp");
	iVar39 = unk_0x05989B8A830B4E1C(iVar6, "p2sh");
	iVar40 = unk_0x05989B8A830B4E1C(iVar6, "accu");
	iVar41 = unk_0x05989B8A830B4E1C(iVar6, "lgacc");
	iVar42 = unk_0x05989B8A830B4E1C(iVar6, "cmsty");
	iVar43 = unk_0x05989B8A830B4E1C(iVar6, "pedbs");
	iVar44 = unk_0x05989B8A830B4E1C(iVar6, "pbstwo");
	iVar45 = unk_0x05989B8A830B4E1C(iVar6, "pbs3");
	iVar46 = unk_0x05989B8A830B4E1C(iVar6, "pbs4");
	iVar47 = unk_0x05989B8A830B4E1C(iVar6, "pbs5");
	iVar48 = unk_0x05989B8A830B4E1C(iVar6, "pbs6");
	iVar49 = unk_0x05989B8A830B4E1C(iVar6, "pbs7");
	iVar50 = unk_0x05989B8A830B4E1C(iVar6, "pbs8");
	if (func_125())
	{
		iVar3 = 0;
		while (iVar3 <= (Global_1632166.f_29 - 1))
		{
			if (iVar3 < 4)
			{
				StringCopy(&cVar4, "group", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar14[iVar3] = unk_0x05989B8A830B4E1C(iVar6, &cVar4);
				StringCopy(&cVar4, "rule", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar51[iVar3] = unk_0x05989B8A830B4E1C(iVar6, &cVar4);
				StringCopy(&cVar4, "pri", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar56[iVar3] = unk_0x05989B8A830B4E1C(iVar6, &cVar4);
				StringCopy(&cVar4, "agr", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar61[iVar3] = unk_0x05989B8A830B4E1C(iVar6, &cVar4);
				StringCopy(&cVar4, "tmflw", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar66[iVar3] = unk_0x05989B8A830B4E1C(iVar6, &cVar4);
				StringCopy(&cVar4, "jtop", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar71[iVar3] = unk_0x05989B8A830B4E1C(iVar6, &cVar4);
				StringCopy(&cVar4, "jtof", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar76[iVar3] = unk_0x05989B8A830B4E1C(iVar6, &cVar4);
				StringCopy(&cVar4, "cblfr", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar81[iVar3] = unk_0x05989B8A830B4E1C(iVar6, &cVar4);
				StringCopy(&cVar4, "cblto", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar86[iVar3] = unk_0x05989B8A830B4E1C(iVar6, &cVar4);
				StringCopy(&cVar4, "gtcpr", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar91[iVar3] = unk_0x05989B8A830B4E1C(iVar6, &cVar4);
				StringCopy(&cVar4, "pcrr", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar96[iVar3] = unk_0x05989B8A830B4E1C(iVar6, &cVar4);
			}
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 <= 4)
		{
			StringCopy(&cVar4, "awt", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar169[iVar3] = unk_0x05989B8A830B4E1C(iVar6, &cVar4);
			StringCopy(&cVar4, "awr", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar175[iVar3] = unk_0x05989B8A830B4E1C(iVar6, &cVar4);
			StringCopy(&cVar4, "awl", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar181[iVar3] = unk_0x05989B8A830B4E1C(iVar6, &cVar4);
			StringCopy(&cVar4, "awlr", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar187[iVar3] = unk_0x05989B8A830B4E1C(iVar6, &cVar4);
			StringCopy(&cVar4, "aht", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar199[iVar3] = unk_0x05989B8A830B4E1C(iVar6, &cVar4);
			StringCopy(&cVar4, "ags", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar193[iVar3] = unk_0x05989B8A830B4E1C(iVar6, &cVar4);
			StringCopy(&cVar4, "agrd", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar205[iVar3] = unk_0x05989B8A830B4E1C(iVar6, &cVar4);
			StringCopy(&cVar4, "agvr", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar211[iVar3] = unk_0x05989B8A830B4E1C(iVar6, &cVar4);
			iVar3++;
		}
		iVar101 = unk_0x05989B8A830B4E1C(iVar6, "objt");
		iVar102 = unk_0x05989B8A830B4E1C(iVar6, "team");
		iVar103 = unk_0x05989B8A830B4E1C(iVar6, "spawn");
		iVar104 = unk_0x05989B8A830B4E1C(iVar6, "acts");
		iVar105 = unk_0x05989B8A830B4E1C(iVar6, "objt2");
		iVar106 = unk_0x05989B8A830B4E1C(iVar6, "team2");
		iVar107 = unk_0x05989B8A830B4E1C(iVar6, "spawn2");
		iVar108 = unk_0x05989B8A830B4E1C(iVar6, "acts2");
		iVar109 = unk_0x05989B8A830B4E1C(iVar6, "objt3");
		iVar110 = unk_0x05989B8A830B4E1C(iVar6, "team3");
		iVar111 = unk_0x05989B8A830B4E1C(iVar6, "spawn3");
		iVar112 = unk_0x05989B8A830B4E1C(iVar6, "acts3");
		iVar113 = unk_0x05989B8A830B4E1C(iVar6, "objt4");
		iVar114 = unk_0x05989B8A830B4E1C(iVar6, "team4");
		iVar115 = unk_0x05989B8A830B4E1C(iVar6, "spawn4");
		iVar116 = unk_0x05989B8A830B4E1C(iVar6, "acts4");
		iVar117 = unk_0x05989B8A830B4E1C(iVar6, "act");
		iVar118 = unk_0x05989B8A830B4E1C(iVar6, "pper");
		iVar119 = unk_0x05989B8A830B4E1C(iVar6, "infr");
		iVar120 = unk_0x05989B8A830B4E1C(iVar6, "cca");
		iVar121 = unk_0x05989B8A830B4E1C(iVar6, "ccid");
		iVar122 = unk_0x05989B8A830B4E1C(iVar6, "gfr");
		iVar123 = unk_0x05989B8A830B4E1C(iVar6, "msr");
		iVar124 = unk_0x05989B8A830B4E1C(iVar6, "bnr");
		iVar125 = unk_0x05989B8A830B4E1C(iVar6, "phor");
		iVar126 = unk_0x05989B8A830B4E1C(iVar6, "folr");
		iVar128 = unk_0x05989B8A830B4E1C(iVar6, "pcvl");
		iVar129 = unk_0x05989B8A830B4E1C(iVar6, "pcvr");
		iVar127 = unk_0x05989B8A830B4E1C(iVar6, "pdfw");
		iVar133 = unk_0x05989B8A830B4E1C(iVar6, "pvdp1");
		iVar134 = unk_0x05989B8A830B4E1C(iVar6, "pvdp2");
		iVar130 = unk_0x05989B8A830B4E1C(iVar6, "paaw");
		iVar131 = unk_0x05989B8A830B4E1C(iVar6, "paav1");
		iVar132 = unk_0x05989B8A830B4E1C(iVar6, "paav2");
		iVar135 = unk_0x05989B8A830B4E1C(iVar6, "dt");
		iVar136 = unk_0x05989B8A830B4E1C(iVar6, "do");
		iVar153 = unk_0x05989B8A830B4E1C(iVar6, "dltd");
		iVar137 = unk_0x05989B8A830B4E1C(iVar6, "dtim");
		iVar138 = unk_0x05989B8A830B4E1C(iVar6, "dln");
		iVar139 = unk_0x05989B8A830B4E1C(iVar6, "pvsp");
		iVar154 = unk_0x05989B8A830B4E1C(iVar6, "drge");
		iVar155 = unk_0x05989B8A830B4E1C(iVar6, "agrot");
		iVar156 = unk_0x05989B8A830B4E1C(iVar6, "gtds");
		iVar157 = unk_0x05989B8A830B4E1C(iVar6, "pstat");
		iVar158 = unk_0x05989B8A830B4E1C(iVar6, "pstar");
		iVar159 = unk_0x05989B8A830B4E1C(iVar6, "dmv");
		iVar160 = unk_0x05989B8A830B4E1C(iVar6, "blkr");
		iVar161 = unk_0x05989B8A830B4E1C(iVar6, "let");
		iVar162 = unk_0x05989B8A830B4E1C(iVar6, "escr");
		iVar163 = unk_0x05989B8A830B4E1C(iVar6, "actr");
		iVar164 = unk_0x05989B8A830B4E1C(iVar6, "actv");
		iVar165 = unk_0x05989B8A830B4E1C(iVar6, "actv2");
		iVar166 = unk_0x05989B8A830B4E1C(iVar6, "actv3");
		iVar167 = unk_0x05989B8A830B4E1C(iVar6, "actv4");
		iVar168 = unk_0x05989B8A830B4E1C(iVar6, "actv5");
		iVar217 = unk_0x05989B8A830B4E1C(iVar6, "pedct");
		iVar219 = unk_0x05989B8A830B4E1C(iVar6, "pdcra");
		iVar218 = unk_0x05989B8A830B4E1C(iVar6, "pedcr");
		iVar220 = unk_0x05989B8A830B4E1C(iVar6, "pedcv");
		iVar221 = unk_0x05989B8A830B4E1C(iVar6, "pedbc");
		iVar222 = unk_0x05989B8A830B4E1C(iVar6, "pdbps");
		iVar223 = unk_0x05989B8A830B4E1C(iVar6, "pdbso");
		iVar224 = unk_0x05989B8A830B4E1C(iVar6, "avrad");
		iVar225 = unk_0x05989B8A830B4E1C(iVar6, "pedst");
		iVar226 = unk_0x05989B8A830B4E1C(iVar6, "gotor");
		iVar227 = unk_0x05989B8A830B4E1C(iVar6, "invbs");
		iVar228 = unk_0x05989B8A830B4E1C(iVar6, "gort");
		iVar229 = unk_0x05989B8A830B4E1C(iVar6, "gorr");
		iVar230 = unk_0x05989B8A830B4E1C(iVar6, "gorw");
		iVar231 = unk_0x05989B8A830B4E1C(iVar6, "cstnm");
		iVar232 = unk_0x05989B8A830B4E1C(iVar6, "pspdl");
		iVar233 = unk_0x05989B8A830B4E1C(iVar6, "psgr");
		iVar234 = unk_0x05989B8A830B4E1C(iVar6, "pssgr");
		iVar235 = unk_0x05989B8A830B4E1C(iVar6, "psctt");
		iVar236 = unk_0x05989B8A830B4E1C(iVar6, "pscto");
		iVar237 = unk_0x05989B8A830B4E1C(iVar6, "pscta");
		iVar238 = unk_0x05989B8A830B4E1C(iVar6, "psctac");
		iVar239 = unk_0x05989B8A830B4E1C(iVar6, "psctv");
		iVar240 = unk_0x05989B8A830B4E1C(iVar6, "pscth");
		iVar241 = unk_0x05989B8A830B4E1C(iVar6, "psctot");
		iVar242 = unk_0x05989B8A830B4E1C(iVar6, "psctoi");
		iVar243 = unk_0x05989B8A830B4E1C(iVar6, "pscatd");
		iVar244 = unk_0x05989B8A830B4E1C(iVar6, "cutsc");
		iVar245 = unk_0x05989B8A830B4E1C(iVar6, "cutsh");
		iVar246 = unk_0x05989B8A830B4E1C(iVar6, "cstsc");
		iVar247 = unk_0x05989B8A830B4E1C(iVar6, "cstsh");
		iVar248 = unk_0x05989B8A830B4E1C(iVar6, "nmpass");
		iVar249 = unk_0x05989B8A830B4E1C(iVar6, "nmfail");
		iVar140 = unk_0x05989B8A830B4E1C(iVar6, "pmcp");
		iVar141 = unk_0x05989B8A830B4E1C(iVar6, "pmcf");
		iVar142 = unk_0x05989B8A830B4E1C(iVar6, "pambv");
		iVar143 = unk_0x05989B8A830B4E1C(iVar6, "pwrpt");
		iVar144 = unk_0x05989B8A830B4E1C(iVar6, "pcash");
		iVar145 = unk_0x05989B8A830B4E1C(iVar6, "ptrdi");
		iVar146 = unk_0x05989B8A830B4E1C(iVar6, "pspov");
		iVar147 = unk_0x05989B8A830B4E1C(iVar6, "pslp");
		iVar148 = unk_0x05989B8A830B4E1C(iVar6, "psor");
		iVar149 = unk_0x05989B8A830B4E1C(iVar6, "psort");
		iVar150 = unk_0x05989B8A830B4E1C(iVar6, "pspovr");
		iVar152 = unk_0x05989B8A830B4E1C(iVar6, "pspln");
		iVar151 = unk_0x05989B8A830B4E1C(iVar6, "pcara");
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			StringCopy(&cVar4, "prstp", 8);
			if (iVar1 > 0)
			{
				StringIntConCat(&cVar4, iVar1, 8);
			}
			uVar250[iVar1] = unk_0x05989B8A830B4E1C(iVar6, &cVar4);
			StringCopy(&cVar4, "prsth", 8);
			if (iVar1 > 0)
			{
				StringIntConCat(&cVar4, iVar1, 8);
			}
			uVar253[iVar1] = unk_0x05989B8A830B4E1C(iVar6, &cVar4);
			iVar1++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1632166.f_59748 - 1))
	{
		if (iVar0 < 59)
		{
			Global_1632166.f_59753[iVar0 /*298*/] = { unk_0x866B2C4E49D29F3B(iVar7, iVar0) };
			Global_1632166.f_59753[iVar0 /*298*/].f_3 = unk_0x07F84E836DFFE814(iVar8, iVar0);
			Global_1632166.f_59753[iVar0 /*298*/].f_4 = unk_0x07F84E836DFFE814(iVar9, iVar0);
			if (Global_1632166.f_59753[iVar0 /*298*/].f_4 < 0.75f)
			{
				Global_1632166.f_59753[iVar0 /*298*/].f_4 = 0.75f;
			}
			iVar2 = unk_0x6BAB52A8425E7B4B(iVar10, iVar0);
			if (iVar2 == joaat("mp_m_fibsec_01"))
			{
				Global_1632166.f_59753[iVar0 /*298*/].f_14 = joaat("s_m_m_ciasec_01");
			}
			else if (iVar2 == joaat("ig_michelle"))
			{
				Global_1632166.f_59753[iVar0 /*298*/].f_14 = joaat("ig_karen_daniels");
			}
			else
			{
				Global_1632166.f_59753[iVar0 /*298*/].f_14 = iVar2;
			}
			if (!func_122() && !func_172())
			{
				if (!unk_0xA8DA2E2DC299ED17(Global_1632166.f_59753[iVar0 /*298*/].f_14))
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_14 = joaat("s_m_y_cop_01");
				}
			}
			iVar2 = unk_0x6BAB52A8425E7B4B(iVar11, iVar0);
			Global_1632166.f_59753[iVar0 /*298*/].f_15 = iVar2;
			iVar2 = unk_0x6BAB52A8425E7B4B(iVar12, iVar0);
			Global_1632166.f_59753[iVar0 /*298*/].f_16 = iVar2;
			if (Global_1632166 == 1)
			{
				Global_1632166.f_59753[iVar0 /*298*/].f_17[0] = unk_0x6BAB52A8425E7B4B(uVar14[0], iVar0);
			}
			Global_1632166.f_59753[iVar0 /*298*/].f_50 = unk_0x6BAB52A8425E7B4B(iVar23, iVar0);
			Global_1632166.f_59753[iVar0 /*298*/].f_36 = unk_0x6BAB52A8425E7B4B(iVar19, iVar0);
			Global_1632166.f_59753[iVar0 /*298*/].f_37 = unk_0x6BAB52A8425E7B4B(iVar20, iVar0);
			if (unk_0x1C9BFBB46CC94A75(iVar21, iVar0) == 2)
			{
				Global_1632166.f_59753[iVar0 /*298*/].f_38 = unk_0x6BAB52A8425E7B4B(iVar21, iVar0);
			}
			else
			{
				Global_1632166.f_59753[iVar0 /*298*/].f_38 = -1;
			}
			Global_1632166.f_59753[iVar0 /*298*/].f_56 = unk_0x6BAB52A8425E7B4B(iVar22, iVar0);
			Global_1632166.f_59753[iVar0 /*298*/].f_32 = unk_0x6BAB52A8425E7B4B(iVar13, iVar0);
			Global_1632166.f_59753[iVar0 /*298*/].f_39 = unk_0x6BAB52A8425E7B4B(iVar24, iVar0);
			Global_1632166.f_59753[iVar0 /*298*/].f_40 = unk_0x6BAB52A8425E7B4B(iVar25, iVar0);
			Global_1632166.f_59753[iVar0 /*298*/].f_41 = unk_0x6BAB52A8425E7B4B(iVar26, iVar0);
			Global_1632166.f_59753[iVar0 /*298*/].f_42 = unk_0x6BAB52A8425E7B4B(iVar27, iVar0);
			Global_1632166.f_59753[iVar0 /*298*/].f_43 = unk_0x6BAB52A8425E7B4B(iVar28, iVar0);
			Global_1632166.f_59753[iVar0 /*298*/].f_44 = unk_0x6BAB52A8425E7B4B(iVar29, iVar0);
			Global_1632166.f_59753[iVar0 /*298*/].f_45 = unk_0x07F84E836DFFE814(iVar30, iVar0);
			Global_1632166.f_59753[iVar0 /*298*/].f_46 = unk_0x6BAB52A8425E7B4B(iVar31, iVar0);
			Global_1632166.f_59753[iVar0 /*298*/].f_49 = unk_0x6BAB52A8425E7B4B(iVar32, iVar0);
			Global_1632166.f_59753[iVar0 /*298*/].f_47 = unk_0x6BAB52A8425E7B4B(iVar33, iVar0);
			Global_1632166.f_59753[iVar0 /*298*/].f_5 = unk_0x07F84E836DFFE814(iVar34, iVar0);
			if ((unk_0x1C9BFBB46CC94A75(iVar35, iVar0) == 3 && unk_0x1C9BFBB46CC94A75(iVar36, iVar0) == 2) && unk_0x1C9BFBB46CC94A75(iVar37, iVar0) == 2)
			{
				Global_1632166.f_59753[iVar0 /*298*/].f_6 = unk_0x07F84E836DFFE814(iVar35, iVar0);
				Global_1632166.f_59753[iVar0 /*298*/].f_7 = unk_0x6BAB52A8425E7B4B(iVar36, iVar0);
				Global_1632166.f_59753[iVar0 /*298*/].f_8 = unk_0x6BAB52A8425E7B4B(iVar37, iVar0);
			}
			else
			{
				Global_1632166.f_59753[iVar0 /*298*/].f_6 = 0f;
				Global_1632166.f_59753[iVar0 /*298*/].f_7 = 0;
				Global_1632166.f_59753[iVar0 /*298*/].f_8 = -1;
			}
			if (unk_0x1C9BFBB46CC94A75(iVar38, iVar0) == 5 && unk_0x1C9BFBB46CC94A75(iVar39, iVar0) == 3)
			{
				Global_1632166.f_59753[iVar0 /*298*/].f_9 = { unk_0x866B2C4E49D29F3B(iVar38, iVar0) };
				Global_1632166.f_59753[iVar0 /*298*/].f_12 = unk_0x07F84E836DFFE814(iVar39, iVar0);
			}
			else
			{
				Global_1632166.f_59753[iVar0 /*298*/].f_9 = { 0f, 0f, 0f };
				Global_1632166.f_59753[iVar0 /*298*/].f_12 = 0f;
			}
			Global_1632166.f_59753[iVar0 /*298*/].f_34 = unk_0x6BAB52A8425E7B4B(iVar40, iVar0);
			if (unk_0x1C9BFBB46CC94A75(iVar41, iVar0) == 2)
			{
				Global_1632166.f_59753[iVar0 /*298*/].f_35 = unk_0x6BAB52A8425E7B4B(iVar41, iVar0);
			}
			else
			{
				Global_1632166.f_59753[iVar0 /*298*/].f_35 = -1;
			}
			Global_1632166.f_59753[iVar0 /*298*/].f_48 = unk_0x6BAB52A8425E7B4B(iVar42, iVar0);
			Global_1632166.f_59753[iVar0 /*298*/].f_188 = unk_0x6BAB52A8425E7B4B(iVar43, iVar0);
			if (unk_0x1C9BFBB46CC94A75(iVar44, iVar0) == 2)
			{
				Global_1632166.f_59753[iVar0 /*298*/].f_189 = unk_0x6BAB52A8425E7B4B(iVar44, iVar0);
			}
			else
			{
				Global_1632166.f_59753[iVar0 /*298*/].f_189 = 0;
			}
			if (unk_0x1C9BFBB46CC94A75(iVar45, iVar0) == 2)
			{
				Global_1632166.f_59753[iVar0 /*298*/].f_190 = unk_0x6BAB52A8425E7B4B(iVar45, iVar0);
			}
			else
			{
				Global_1632166.f_59753[iVar0 /*298*/].f_190 = 0;
			}
			if (unk_0x1C9BFBB46CC94A75(iVar46, iVar0) == 2)
			{
				Global_1632166.f_59753[iVar0 /*298*/].f_191 = unk_0x6BAB52A8425E7B4B(iVar46, iVar0);
			}
			else
			{
				Global_1632166.f_59753[iVar0 /*298*/].f_191 = 0;
			}
			if (unk_0x1C9BFBB46CC94A75(iVar47, iVar0) == 2)
			{
				Global_1632166.f_59753[iVar0 /*298*/].f_192 = unk_0x6BAB52A8425E7B4B(iVar47, iVar0);
			}
			else
			{
				Global_1632166.f_59753[iVar0 /*298*/].f_192 = 0;
			}
			if (unk_0x1C9BFBB46CC94A75(iVar48, iVar0) == 2)
			{
				Global_1632166.f_59753[iVar0 /*298*/].f_193 = unk_0x6BAB52A8425E7B4B(iVar48, iVar0);
			}
			else
			{
				Global_1632166.f_59753[iVar0 /*298*/].f_193 = 0;
			}
			if (unk_0x1C9BFBB46CC94A75(iVar49, iVar0) == 2)
			{
				Global_1632166.f_59753[iVar0 /*298*/].f_194 = unk_0x6BAB52A8425E7B4B(iVar49, iVar0);
			}
			else
			{
				Global_1632166.f_59753[iVar0 /*298*/].f_194 = 0;
			}
			if (unk_0x1C9BFBB46CC94A75(iVar50, iVar0) == 2)
			{
				Global_1632166.f_59753[iVar0 /*298*/].f_195 = unk_0x6BAB52A8425E7B4B(iVar50, iVar0);
			}
			else
			{
				Global_1632166.f_59753[iVar0 /*298*/].f_195 = 0;
			}
			if (func_125())
			{
				Global_1632166.f_59753[iVar0 /*298*/].f_57 = unk_0x6BAB52A8425E7B4B(iVar101, iVar0);
				Global_1632166.f_59753[iVar0 /*298*/].f_58 = unk_0x6BAB52A8425E7B4B(iVar102, iVar0);
				Global_1632166.f_59753[iVar0 /*298*/].f_59 = unk_0x6BAB52A8425E7B4B(iVar103, iVar0);
				Global_1632166.f_59753[iVar0 /*298*/].f_63 = unk_0x6BAB52A8425E7B4B(iVar104, iVar0);
				if (unk_0x1C9BFBB46CC94A75(iVar105, iVar0) == 2)
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_161 = unk_0x6BAB52A8425E7B4B(iVar105, iVar0);
					Global_1632166.f_59753[iVar0 /*298*/].f_158 = unk_0x6BAB52A8425E7B4B(iVar106, iVar0);
					Global_1632166.f_59753[iVar0 /*298*/].f_164 = unk_0x6BAB52A8425E7B4B(iVar107, iVar0);
					Global_1632166.f_59753[iVar0 /*298*/].f_167 = unk_0x6BAB52A8425E7B4B(iVar108, iVar0);
					Global_1632166.f_59753[iVar0 /*298*/].f_162 = unk_0x6BAB52A8425E7B4B(iVar109, iVar0);
					Global_1632166.f_59753[iVar0 /*298*/].f_159 = unk_0x6BAB52A8425E7B4B(iVar110, iVar0);
					Global_1632166.f_59753[iVar0 /*298*/].f_165 = unk_0x6BAB52A8425E7B4B(iVar111, iVar0);
					Global_1632166.f_59753[iVar0 /*298*/].f_168 = unk_0x6BAB52A8425E7B4B(iVar112, iVar0);
					Global_1632166.f_59753[iVar0 /*298*/].f_163 = unk_0x6BAB52A8425E7B4B(iVar113, iVar0);
					Global_1632166.f_59753[iVar0 /*298*/].f_160 = unk_0x6BAB52A8425E7B4B(iVar114, iVar0);
					Global_1632166.f_59753[iVar0 /*298*/].f_166 = unk_0x6BAB52A8425E7B4B(iVar115, iVar0);
					Global_1632166.f_59753[iVar0 /*298*/].f_169 = unk_0x6BAB52A8425E7B4B(iVar116, iVar0);
				}
				else
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_161 = -1;
					Global_1632166.f_59753[iVar0 /*298*/].f_158 = 0;
					Global_1632166.f_59753[iVar0 /*298*/].f_164 = 0;
					Global_1632166.f_59753[iVar0 /*298*/].f_167 = 0;
					Global_1632166.f_59753[iVar0 /*298*/].f_162 = -1;
					Global_1632166.f_59753[iVar0 /*298*/].f_159 = 0;
					Global_1632166.f_59753[iVar0 /*298*/].f_165 = 0;
					Global_1632166.f_59753[iVar0 /*298*/].f_168 = 0;
					Global_1632166.f_59753[iVar0 /*298*/].f_163 = -1;
					Global_1632166.f_59753[iVar0 /*298*/].f_160 = 0;
					Global_1632166.f_59753[iVar0 /*298*/].f_166 = 0;
					Global_1632166.f_59753[iVar0 /*298*/].f_169 = 0;
				}
				Global_1632166.f_59753[iVar0 /*298*/].f_62 = unk_0x6BAB52A8425E7B4B(iVar117, iVar0);
				if (unk_0x1C9BFBB46CC94A75(iVar118, iVar0) == 2)
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_201 = unk_0x6BAB52A8425E7B4B(iVar118, iVar0);
				}
				else
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_201 = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar119, iVar0) == 2)
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_202 = unk_0x6BAB52A8425E7B4B(iVar119, iVar0);
				}
				else
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_202 = 250;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar120, iVar0) == 2)
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_205 = unk_0x6BAB52A8425E7B4B(iVar120, iVar0);
				}
				else
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_205 = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar121, iVar0) == 2)
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_206 = unk_0x6BAB52A8425E7B4B(iVar121, iVar0);
				}
				else
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_206 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar122, iVar0) == 2)
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_207 = unk_0x6BAB52A8425E7B4B(iVar122, iVar0);
				}
				else
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_207 = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar123, iVar0) == 2)
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_203 = unk_0x6BAB52A8425E7B4B(iVar123, iVar0);
				}
				else
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_203 = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar124, iVar0) == 2)
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_204 = unk_0x6BAB52A8425E7B4B(iVar124, iVar0);
				}
				else
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_204 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar125, iVar0) == 2)
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_269 = unk_0x6BAB52A8425E7B4B(iVar125, iVar0);
				}
				else
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_269 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar126, iVar0) == 2)
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_270 = unk_0x6BAB52A8425E7B4B(iVar126, iVar0);
				}
				else
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_270 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar128, iVar0) == 5)
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_208 = { unk_0x866B2C4E49D29F3B(iVar128, iVar0) };
				}
				else
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_208 = { 0f, 0f, 0f };
				}
				if (unk_0x1C9BFBB46CC94A75(iVar129, iVar0) == 5)
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_211 = { unk_0x866B2C4E49D29F3B(iVar129, iVar0) };
				}
				else
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_211 = { 0f, 0f, 0f };
				}
				if ((unk_0x1C9BFBB46CC94A75(iVar133, iVar0) == 5 && unk_0x1C9BFBB46CC94A75(iVar134, iVar0) == 5) && unk_0x1C9BFBB46CC94A75(iVar127, iVar0) == 3)
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_219 = { unk_0x866B2C4E49D29F3B(iVar133, iVar0) };
					Global_1632166.f_59753[iVar0 /*298*/].f_222 = { unk_0x866B2C4E49D29F3B(iVar134, iVar0) };
					Global_1632166.f_59753[iVar0 /*298*/].f_225 = unk_0x07F84E836DFFE814(iVar127, iVar0);
				}
				else
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_219 = { 0f, 0f, 0f };
					Global_1632166.f_59753[iVar0 /*298*/].f_222 = { 0f, 0f, 0f };
					Global_1632166.f_59753[iVar0 /*298*/].f_225 = 1f;
				}
				if ((unk_0x1C9BFBB46CC94A75(iVar130, iVar0) == 3 && unk_0x1C9BFBB46CC94A75(iVar131, iVar0) == 5) && unk_0x1C9BFBB46CC94A75(iVar132, iVar0) == 5)
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_183 = unk_0x07F84E836DFFE814(iVar130, iVar0);
					Global_1632166.f_59753[iVar0 /*298*/].f_177 = { unk_0x866B2C4E49D29F3B(iVar131, iVar0) };
					Global_1632166.f_59753[iVar0 /*298*/].f_180 = { unk_0x866B2C4E49D29F3B(iVar132, iVar0) };
				}
				else
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_183 = 0f;
					Global_1632166.f_59753[iVar0 /*298*/].f_177 = { 0f, 0f, 0f };
					Global_1632166.f_59753[iVar0 /*298*/].f_180 = { 0f, 0f, 0f };
				}
				if (unk_0x1C9BFBB46CC94A75(iVar139, iVar0) == 2)
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_237 = unk_0x6BAB52A8425E7B4B(iVar139, iVar0);
				}
				else
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_237 = 0;
				}
				Global_1632166.f_59753[iVar0 /*298*/].f_215 = unk_0x6BAB52A8425E7B4B(iVar135, iVar0);
				Global_1632166.f_59753[iVar0 /*298*/].f_214 = unk_0x6BAB52A8425E7B4B(iVar136, iVar0);
				Global_1632166.f_59753[iVar0 /*298*/].f_216 = unk_0x6BAB52A8425E7B4B(iVar137, iVar0);
				Global_1632166.f_59753[iVar0 /*298*/].f_217 = unk_0x6BAB52A8425E7B4B(iVar138, iVar0);
				Global_1632166.f_59753[iVar0 /*298*/].f_218 = unk_0x6BAB52A8425E7B4B(iVar154, iVar0);
				Global_1632166.f_59753[iVar0 /*298*/].f_297 = unk_0x6BAB52A8425E7B4B(iVar153, iVar0);
				Global_1632166.f_59753[iVar0 /*298*/].f_226 = unk_0x6BAB52A8425E7B4B(iVar155, iVar0);
				Global_1632166.f_59753[iVar0 /*298*/].f_184 = unk_0x6BAB52A8425E7B4B(iVar156, iVar0);
				Global_1632166.f_59753[iVar0 /*298*/].f_33 = unk_0x6BAB52A8425E7B4B(iVar159, iVar0);
				Global_1632166.f_59753[iVar0 /*298*/].f_13 = unk_0x07F84E836DFFE814(iVar160, iVar0);
				Global_1632166.f_59753[iVar0 /*298*/].f_175 = unk_0x6BAB52A8425E7B4B(iVar161, iVar0);
				Global_1632166.f_59753[iVar0 /*298*/].f_185 = unk_0x6BAB52A8425E7B4B(iVar162, iVar0);
				Global_1632166.f_59753[iVar0 /*298*/].f_176 = unk_0x6BAB52A8425E7B4B(iVar163, iVar0);
				Global_1632166.f_59753[iVar0 /*298*/].f_64 = { unk_0x866B2C4E49D29F3B(iVar164, iVar0) };
				Global_1632166.f_59753[iVar0 /*298*/].f_64 = { unk_0x866B2C4E49D29F3B(iVar164, iVar0) };
				if (unk_0x1C9BFBB46CC94A75(iVar165, iVar0) == 5)
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_67[0 /*3*/] = { unk_0x866B2C4E49D29F3B(iVar165, iVar0) };
				}
				else
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_67[0 /*3*/] = { 0f, 0f, 0f };
				}
				if (unk_0x1C9BFBB46CC94A75(iVar166, iVar0) == 5)
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_67[1 /*3*/] = { unk_0x866B2C4E49D29F3B(iVar166, iVar0) };
				}
				else
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_67[1 /*3*/] = { 0f, 0f, 0f };
				}
				if (unk_0x1C9BFBB46CC94A75(iVar167, iVar0) == 5)
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_67[2 /*3*/] = { unk_0x866B2C4E49D29F3B(iVar167, iVar0) };
				}
				else
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_67[2 /*3*/] = { 0f, 0f, 0f };
				}
				if (unk_0x1C9BFBB46CC94A75(iVar168, iVar0) == 5)
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_67[3 /*3*/] = { unk_0x866B2C4E49D29F3B(iVar168, iVar0) };
				}
				else
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_67[3 /*3*/] = { 0f, 0f, 0f };
				}
				if (unk_0x1C9BFBB46CC94A75(iVar157, iVar0) == 2 && unk_0x1C9BFBB46CC94A75(iVar158, iVar0) == 2)
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_186 = unk_0x6BAB52A8425E7B4B(iVar157, iVar0);
					Global_1632166.f_59753[iVar0 /*298*/].f_187 = unk_0x6BAB52A8425E7B4B(iVar158, iVar0);
				}
				else
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_186 = -1;
					Global_1632166.f_59753[iVar0 /*298*/].f_187 = -1;
				}
				iVar3 = 0;
				while (iVar3 <= 4)
				{
					if (unk_0x1C9BFBB46CC94A75(uVar169[iVar3], iVar0) == 2)
					{
						Global_1632166.f_59753[iVar0 /*298*/].f_81[iVar3] = unk_0x6BAB52A8425E7B4B(uVar169[iVar3], iVar0);
					}
					else
					{
						Global_1632166.f_59753[iVar0 /*298*/].f_81[iVar3] = 0;
					}
					if (unk_0x1C9BFBB46CC94A75(uVar175[iVar3], iVar0) == 2)
					{
						Global_1632166.f_59753[iVar0 /*298*/].f_87[iVar3] = unk_0x6BAB52A8425E7B4B(uVar175[iVar3], iVar0);
					}
					else
					{
						Global_1632166.f_59753[iVar0 /*298*/].f_87[iVar3] = 0;
					}
					if (unk_0x1C9BFBB46CC94A75(uVar181[iVar3], iVar0) == 5 && unk_0x1C9BFBB46CC94A75(uVar187[iVar3], iVar0) == 2)
					{
						Global_1632166.f_59753[iVar0 /*298*/].f_93[iVar3 /*3*/] = { unk_0x866B2C4E49D29F3B(uVar181[iVar3], iVar0) };
						Global_1632166.f_59753[iVar0 /*298*/].f_109[iVar3] = unk_0x6BAB52A8425E7B4B(uVar187[iVar3], iVar0);
					}
					else
					{
						Global_1632166.f_59753[iVar0 /*298*/].f_93[iVar3 /*3*/] = { 0f, 0f, 0f };
						Global_1632166.f_59753[iVar0 /*298*/].f_109[iVar3] = 3;
					}
					if (unk_0x1C9BFBB46CC94A75(uVar193[iVar3], iVar0) == 2)
					{
						Global_1632166.f_59753[iVar0 /*298*/].f_127[iVar3] = unk_0x6BAB52A8425E7B4B(uVar193[iVar3], iVar0);
					}
					else
					{
						Global_1632166.f_59753[iVar0 /*298*/].f_127[iVar3] = -1;
					}
					if (unk_0x1C9BFBB46CC94A75(uVar199[iVar3], iVar0) == 3)
					{
						Global_1632166.f_59753[iVar0 /*298*/].f_115[iVar3] = unk_0x07F84E836DFFE814(uVar199[iVar3], iVar0);
					}
					else
					{
						Global_1632166.f_59753[iVar0 /*298*/].f_115[iVar3] = 0f;
					}
					if (unk_0x1C9BFBB46CC94A75(uVar205[iVar3], iVar0) == 3)
					{
						Global_1632166.f_59753[iVar0 /*298*/].f_121[iVar3] = unk_0x07F84E836DFFE814(uVar205[iVar3], iVar0);
					}
					else
					{
						Global_1632166.f_59753[iVar0 /*298*/].f_121[iVar3] = 0f;
					}
					if (unk_0x1C9BFBB46CC94A75(uVar211[iVar3], iVar0) == 3)
					{
						Global_1632166.f_59753[iVar0 /*298*/].f_133[iVar3] = unk_0x07F84E836DFFE814(uVar211[iVar3], iVar0);
					}
					else
					{
						Global_1632166.f_59753[iVar0 /*298*/].f_133[iVar3] = 0f;
					}
					iVar3++;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar218, iVar0) == 2)
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_227 = unk_0x6BAB52A8425E7B4B(iVar218, iVar0);
				}
				else
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_227 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar217, iVar0) == 2)
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_228 = unk_0x6BAB52A8425E7B4B(iVar217, iVar0);
				}
				else
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_228 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar220, iVar0) == 2)
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_230 = unk_0x6BAB52A8425E7B4B(iVar220, iVar0);
				}
				else
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_230 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar219, iVar0) == 2)
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_229 = unk_0x6BAB52A8425E7B4B(iVar219, iVar0);
				}
				else
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_229 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar225, iVar0) == 2)
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_236 = unk_0x6BAB52A8425E7B4B(iVar225, iVar0);
				}
				else
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_236 = -3;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar221, iVar0) == 2)
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_252 = unk_0x6BAB52A8425E7B4B(iVar221, iVar0);
				}
				else
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_252 = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar222, iVar0) == 3)
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_263 = unk_0x07F84E836DFFE814(iVar222, iVar0);
				}
				else
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_263 = 1f;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar223, iVar0) == 2)
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_264 = unk_0x6BAB52A8425E7B4B(iVar223, iVar0);
				}
				else
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_264 = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar224, iVar0) == 2)
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_80 = unk_0x6BAB52A8425E7B4B(iVar224, iVar0);
				}
				else
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_80 = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar226, iVar0) == 2)
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_51 = unk_0x6BAB52A8425E7B4B(iVar226, iVar0);
				}
				else
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_51 = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar227, iVar0) == 2)
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_52 = unk_0x6BAB52A8425E7B4B(iVar227, iVar0);
				}
				else
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_52 = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar231, iVar0) == 2)
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_156 = unk_0x6BAB52A8425E7B4B(iVar231, iVar0);
				}
				else
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_156 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar232, iVar0) == 2)
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_157 = unk_0x6BAB52A8425E7B4B(iVar232, iVar0);
				}
				else
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_157 = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar233, iVar0) == 2)
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_60 = unk_0x6BAB52A8425E7B4B(iVar233, iVar0);
				}
				else
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_60 = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar234, iVar0) == 2)
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_61 = unk_0x6BAB52A8425E7B4B(iVar234, iVar0);
				}
				else
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_61 = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar140, iVar0) == 2)
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_250 = unk_0x6BAB52A8425E7B4B(iVar140, iVar0);
				}
				else
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_250 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar141, iVar0) == 2)
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_251 = unk_0x6BAB52A8425E7B4B(iVar141, iVar0);
				}
				else
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_251 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar142, iVar0) == 2)
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_271 = unk_0x6BAB52A8425E7B4B(iVar142, iVar0);
				}
				else
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_271 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar143, iVar0) == 2)
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_277 = unk_0x6BAB52A8425E7B4B(iVar143, iVar0);
				}
				else
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_277 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar144, iVar0) == 2)
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_278 = unk_0x6BAB52A8425E7B4B(iVar144, iVar0);
				}
				else
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_278 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar145, iVar0) == 2)
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_279 = unk_0x6BAB52A8425E7B4B(iVar145, iVar0);
				}
				else
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_279 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar146, iVar0) == 2)
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_283 = unk_0x6BAB52A8425E7B4B(iVar146, iVar0);
				}
				else
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_283 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar147, iVar0) == 2)
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_280 = unk_0x6BAB52A8425E7B4B(iVar147, iVar0);
				}
				else
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_280 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar148, iVar0) == 2)
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_281 = unk_0x6BAB52A8425E7B4B(iVar148, iVar0);
				}
				else
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_281 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar149, iVar0) == 2)
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_282 = unk_0x6BAB52A8425E7B4B(iVar149, iVar0);
				}
				else
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_282 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar150, iVar0) == 2)
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_284 = unk_0x6BAB52A8425E7B4B(iVar150, iVar0);
				}
				else
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_284 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar151, iVar0) == 2)
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_295 = unk_0x6BAB52A8425E7B4B(iVar151, iVar0);
				}
				else
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_295 = 10;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar152, iVar0) == 2)
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_296 = unk_0x6BAB52A8425E7B4B(iVar152, iVar0);
				}
				else
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_296 = 0;
				}
				if ((unk_0x1C9BFBB46CC94A75(iVar235, iVar0) == 2 && unk_0x1C9BFBB46CC94A75(iVar236, iVar0) == 2) && unk_0x1C9BFBB46CC94A75(iVar237, iVar0) == 2)
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_145 = unk_0x6BAB52A8425E7B4B(iVar235, iVar0);
					Global_1632166.f_59753[iVar0 /*298*/].f_146 = unk_0x6BAB52A8425E7B4B(iVar236, iVar0);
					Global_1632166.f_59753[iVar0 /*298*/].f_148 = unk_0x6BAB52A8425E7B4B(iVar237, iVar0);
				}
				else
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_145 = -1;
					Global_1632166.f_59753[iVar0 /*298*/].f_146 = -1;
					Global_1632166.f_59753[iVar0 /*298*/].f_148 = 0;
				}
				if ((unk_0x1C9BFBB46CC94A75(iVar241, iVar0) == 2 && unk_0x1C9BFBB46CC94A75(iVar242, iVar0) == 2) && unk_0x1C9BFBB46CC94A75(iVar243, iVar0) == 2)
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_153 = unk_0x6BAB52A8425E7B4B(iVar241, iVar0);
					Global_1632166.f_59753[iVar0 /*298*/].f_154 = unk_0x6BAB52A8425E7B4B(iVar242, iVar0);
					Global_1632166.f_59753[iVar0 /*298*/].f_155 = unk_0x6BAB52A8425E7B4B(iVar243, iVar0);
				}
				else
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_153 = 0;
					Global_1632166.f_59753[iVar0 /*298*/].f_154 = -1;
					Global_1632166.f_59753[iVar0 /*298*/].f_155 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar238, iVar0) == 2)
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_147 = unk_0x6BAB52A8425E7B4B(iVar238, iVar0);
				}
				else
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_147 = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar239, iVar0) == 5)
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_149 = { unk_0x866B2C4E49D29F3B(iVar239, iVar0) };
				}
				else
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_149 = { 0f, 0f, 0f };
				}
				if (unk_0x1C9BFBB46CC94A75(iVar240, iVar0) == 3)
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_152 = unk_0x07F84E836DFFE814(iVar240, iVar0);
				}
				else
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_152 = 0f;
				}
				if ((unk_0x1C9BFBB46CC94A75(iVar228, iVar0) == 2 && unk_0x1C9BFBB46CC94A75(iVar229, iVar0) == 2) && unk_0x1C9BFBB46CC94A75(iVar230, iVar0) == 2)
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_53 = unk_0x6BAB52A8425E7B4B(iVar228, iVar0);
					Global_1632166.f_59753[iVar0 /*298*/].f_54 = unk_0x6BAB52A8425E7B4B(iVar229, iVar0);
					Global_1632166.f_59753[iVar0 /*298*/].f_55 = unk_0x6BAB52A8425E7B4B(iVar230, iVar0);
				}
				else
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_53 = -1;
					Global_1632166.f_59753[iVar0 /*298*/].f_54 = -1;
					Global_1632166.f_59753[iVar0 /*298*/].f_55 = joaat("weapon_pistol");
				}
				if (Global_1632166.f_2 != 6 && unk_0x1C9BFBB46CC94A75(iVar244, iVar0) == 2)
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_265 = unk_0x6BAB52A8425E7B4B(iVar244, iVar0);
				}
				else
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_265 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar248, iVar0) == 2)
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_248 = unk_0x6BAB52A8425E7B4B(iVar248, iVar0);
				}
				else
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_248 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar249, iVar0) == 2)
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_249 = unk_0x6BAB52A8425E7B4B(iVar249, iVar0);
				}
				else
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_249 = -1;
				}
				if (Global_1632166.f_2 != 6 && unk_0x1C9BFBB46CC94A75(iVar245, iVar0) == 2)
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_266 = unk_0x6BAB52A8425E7B4B(iVar245, iVar0);
				}
				else
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_266 = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar246, iVar0) == 2)
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_267 = unk_0x6BAB52A8425E7B4B(iVar246, iVar0);
				}
				else
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_267 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar247, iVar0) == 2)
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_268 = unk_0x6BAB52A8425E7B4B(iVar247, iVar0);
				}
				else
				{
					Global_1632166.f_59753[iVar0 /*298*/].f_268 = -1;
				}
				iVar1 = 0;
				while (iVar1 <= 1)
				{
					if (unk_0x1C9BFBB46CC94A75(uVar250[iVar1], iVar0) == 5)
					{
						Global_1632166.f_59753[iVar0 /*298*/].f_285[iVar1 /*3*/] = { unk_0x866B2C4E49D29F3B(uVar250[iVar1], iVar0) };
					}
					else
					{
						Global_1632166.f_59753[iVar0 /*298*/].f_285[iVar1 /*3*/] = { 0f, 0f, 0f };
					}
					if (unk_0x1C9BFBB46CC94A75(uVar253[iVar1], iVar0) == 3)
					{
						Global_1632166.f_59753[iVar0 /*298*/].f_292[iVar1] = unk_0x07F84E836DFFE814(uVar253[iVar1], iVar0);
					}
					else
					{
						Global_1632166.f_59753[iVar0 /*298*/].f_292[iVar1] = 0f;
					}
					iVar1++;
				}
				iVar3 = 0;
				while (iVar3 <= (Global_1632166.f_29 - 1))
				{
					if (iVar3 < 4)
					{
						Global_1632166.f_59753[iVar0 /*298*/].f_17[iVar3] = unk_0x6BAB52A8425E7B4B(uVar14[iVar3], iVar0);
						Global_1632166.f_59753[iVar0 /*298*/].f_22[iVar3] = unk_0x6BAB52A8425E7B4B(uVar51[iVar3], iVar0);
						Global_1632166.f_59753[iVar0 /*298*/].f_27[iVar3] = unk_0x6BAB52A8425E7B4B(uVar56[iVar3], iVar0);
						if (Global_1632166.f_59753[iVar0 /*298*/].f_27[iVar3] == -1)
						{
							Global_1632166.f_59753[iVar0 /*298*/].f_27[iVar3] = 99999;
						}
						if (unk_0x1C9BFBB46CC94A75(uVar61[iVar3], iVar0) == 2)
						{
							Global_1632166.f_59753[iVar0 /*298*/].f_196[iVar3] = unk_0x6BAB52A8425E7B4B(uVar61[iVar3], iVar0);
						}
						else
						{
							Global_1632166.f_59753[iVar0 /*298*/].f_196[iVar3] = -1;
						}
						if (unk_0x1C9BFBB46CC94A75(uVar66[iVar3], iVar0) == 2)
						{
							Global_1632166.f_59753[iVar0 /*298*/].f_170[iVar3] = unk_0x6BAB52A8425E7B4B(uVar66[iVar3], iVar0);
						}
						else
						{
							Global_1632166.f_59753[iVar0 /*298*/].f_170[iVar3] = 0;
						}
						if (unk_0x1C9BFBB46CC94A75(uVar71[iVar3], iVar0) == 2)
						{
							Global_1632166.f_59753[iVar0 /*298*/].f_238[iVar3] = unk_0x6BAB52A8425E7B4B(uVar71[iVar3], iVar0);
						}
						else
						{
							Global_1632166.f_59753[iVar0 /*298*/].f_238[iVar3] = 0;
						}
						if (unk_0x1C9BFBB46CC94A75(uVar76[iVar3], iVar0) == 2)
						{
							Global_1632166.f_59753[iVar0 /*298*/].f_243[iVar3] = unk_0x6BAB52A8425E7B4B(uVar76[iVar3], iVar0);
						}
						else
						{
							Global_1632166.f_59753[iVar0 /*298*/].f_243[iVar3] = 0;
						}
						if (unk_0x1C9BFBB46CC94A75(uVar81[iVar3], iVar0) == 2 && unk_0x1C9BFBB46CC94A75(uVar86[iVar3], iVar0) == 2)
						{
							Global_1632166.f_59753[iVar0 /*298*/].f_253[iVar3] = unk_0x6BAB52A8425E7B4B(uVar81[iVar3], iVar0);
							Global_1632166.f_59753[iVar0 /*298*/].f_258[iVar3] = unk_0x6BAB52A8425E7B4B(uVar86[iVar3], iVar0);
						}
						else
						{
							Global_1632166.f_59753[iVar0 /*298*/].f_253[iVar3] = -1;
							Global_1632166.f_59753[iVar0 /*298*/].f_258[iVar3] = -1;
						}
						if (unk_0x1C9BFBB46CC94A75(uVar91[iVar3], iVar0) == 2)
						{
							Global_1632166.f_59753[iVar0 /*298*/].f_272[iVar3] = unk_0x6BAB52A8425E7B4B(uVar91[iVar3], iVar0);
						}
						else if (unk_0xF44A5E894FE76438(Global_1632166.f_33401[iVar3 /*3*/][func_171(iVar0)], func_170(iVar0)))
						{
							Global_1632166.f_59753[iVar0 /*298*/].f_272[iVar3] = -1;
						}
						else
						{
							Global_1632166.f_59753[iVar0 /*298*/].f_272[iVar3] = -2;
						}
						if (unk_0x1C9BFBB46CC94A75(uVar96[iVar3], iVar0) == 2)
						{
							Global_1632166.f_59753[iVar0 /*298*/].f_231[iVar3] = unk_0x6BAB52A8425E7B4B(uVar96[iVar3], iVar0);
						}
						else
						{
							Global_1632166.f_59753[iVar0 /*298*/].f_231[iVar3] = 0;
						}
					}
					iVar3++;
				}
			}
		}
		iVar0++;
	}
	func_169(&iVar6);
}

void func_169(int iParam0)
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
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	
	Global_1632166.f_77915[0] = unk_0x4985D6D7F7AB891A(*iParam0, "no0");
	iVar1 = unk_0x05989B8A830B4E1C(*iParam0, "loc0");
	iVar2 = unk_0x05989B8A830B4E1C(*iParam0, "head0");
	iVar3 = unk_0x05989B8A830B4E1C(*iParam0, "bit0");
	iVar4 = unk_0x05989B8A830B4E1C(*iParam0, "veh0");
	iVar5 = unk_0x05989B8A830B4E1C(*iParam0, "tars0");
	iVar6 = unk_0x05989B8A830B4E1C(*iParam0, "ty0");
	iVar7 = unk_0x05989B8A830B4E1C(*iParam0, "as0");
	iVar8 = unk_0x05989B8A830B4E1C(*iParam0, "qu0");
	iVar9 = unk_0x05989B8A830B4E1C(*iParam0, "gg0");
	iVar10 = unk_0x05989B8A830B4E1C(*iParam0, "ar0");
	iVar0 = 0;
	while (iVar0 <= (Global_1632166.f_77915[0] - 1))
	{
		Global_1632166.f_78822[0 /*901*/][iVar0 /*15*/] = { unk_0x866B2C4E49D29F3B(iVar1, iVar0) };
		Global_1632166.f_78822[0 /*901*/][iVar0 /*15*/].f_3 = unk_0x07F84E836DFFE814(iVar2, iVar0);
		Global_1632166.f_78822[0 /*901*/][iVar0 /*15*/].f_5 = unk_0x6BAB52A8425E7B4B(iVar3, iVar0);
		if (unk_0x1C9BFBB46CC94A75(iVar4, iVar0) == 2)
		{
			Global_1632166.f_78822[0 /*901*/][iVar0 /*15*/].f_7 = unk_0x6BAB52A8425E7B4B(iVar4, iVar0);
		}
		else
		{
			Global_1632166.f_78822[0 /*901*/][iVar0 /*15*/].f_7 = -1;
		}
		Global_1632166.f_78822[0 /*901*/][iVar0 /*15*/].f_9 = unk_0x6BAB52A8425E7B4B(iVar5, iVar0);
		Global_1632166.f_78822[0 /*901*/][iVar0 /*15*/].f_10 = unk_0x6BAB52A8425E7B4B(iVar6, iVar0);
		Global_1632166.f_78822[0 /*901*/][iVar0 /*15*/].f_11 = unk_0x6BAB52A8425E7B4B(iVar7, iVar0);
		Global_1632166.f_78822[0 /*901*/][iVar0 /*15*/].f_12 = unk_0x6BAB52A8425E7B4B(iVar8, iVar0);
		Global_1632166.f_78822[0 /*901*/][iVar0 /*15*/].f_13 = unk_0x6BAB52A8425E7B4B(iVar9, iVar0);
		Global_1632166.f_78822[0 /*901*/][iVar0 /*15*/].f_14 = unk_0x6BAB52A8425E7B4B(iVar10, iVar0);
		iVar0++;
	}
	Global_1632166.f_77915[1] = unk_0x4985D6D7F7AB891A(*iParam0, "no1");
	iVar11 = unk_0x05989B8A830B4E1C(*iParam0, "loc1");
	iVar12 = unk_0x05989B8A830B4E1C(*iParam0, "head1");
	iVar13 = unk_0x05989B8A830B4E1C(*iParam0, "bit1");
	iVar14 = unk_0x05989B8A830B4E1C(*iParam0, "veh1");
	iVar15 = unk_0x05989B8A830B4E1C(*iParam0, "tars1");
	iVar16 = unk_0x05989B8A830B4E1C(*iParam0, "ty1");
	iVar17 = unk_0x05989B8A830B4E1C(*iParam0, "as1");
	iVar18 = unk_0x05989B8A830B4E1C(*iParam0, "qu1");
	iVar19 = unk_0x05989B8A830B4E1C(*iParam0, "gg1");
	iVar20 = unk_0x05989B8A830B4E1C(*iParam0, "ar1");
	iVar0 = 0;
	while (iVar0 <= (Global_1632166.f_77915[1] - 1))
	{
		Global_1632166.f_78822[1 /*901*/][iVar0 /*15*/] = { unk_0x866B2C4E49D29F3B(iVar11, iVar0) };
		Global_1632166.f_78822[1 /*901*/][iVar0 /*15*/].f_3 = unk_0x07F84E836DFFE814(iVar12, iVar0);
		Global_1632166.f_78822[1 /*901*/][iVar0 /*15*/].f_5 = unk_0x6BAB52A8425E7B4B(iVar13, iVar0);
		if (unk_0x1C9BFBB46CC94A75(iVar14, iVar0) == 2)
		{
			Global_1632166.f_78822[1 /*901*/][iVar0 /*15*/].f_7 = unk_0x6BAB52A8425E7B4B(iVar14, iVar0);
		}
		else
		{
			Global_1632166.f_78822[1 /*901*/][iVar0 /*15*/].f_7 = -1;
		}
		Global_1632166.f_78822[1 /*901*/][iVar0 /*15*/].f_9 = unk_0x6BAB52A8425E7B4B(iVar15, iVar0);
		Global_1632166.f_78822[1 /*901*/][iVar0 /*15*/].f_10 = unk_0x6BAB52A8425E7B4B(iVar16, iVar0);
		Global_1632166.f_78822[1 /*901*/][iVar0 /*15*/].f_11 = unk_0x6BAB52A8425E7B4B(iVar17, iVar0);
		Global_1632166.f_78822[1 /*901*/][iVar0 /*15*/].f_12 = unk_0x6BAB52A8425E7B4B(iVar18, iVar0);
		Global_1632166.f_78822[1 /*901*/][iVar0 /*15*/].f_13 = unk_0x6BAB52A8425E7B4B(iVar19, iVar0);
		Global_1632166.f_78822[1 /*901*/][iVar0 /*15*/].f_14 = unk_0x6BAB52A8425E7B4B(iVar20, iVar0);
		iVar0++;
	}
	Global_1632166.f_77915[2] = unk_0x4985D6D7F7AB891A(*iParam0, "no2");
	iVar21 = unk_0x05989B8A830B4E1C(*iParam0, "loc2");
	iVar22 = unk_0x05989B8A830B4E1C(*iParam0, "head2");
	iVar23 = unk_0x05989B8A830B4E1C(*iParam0, "bit2");
	iVar24 = unk_0x05989B8A830B4E1C(*iParam0, "veh2");
	iVar25 = unk_0x05989B8A830B4E1C(*iParam0, "tars2");
	iVar26 = unk_0x05989B8A830B4E1C(*iParam0, "ty2");
	iVar27 = unk_0x05989B8A830B4E1C(*iParam0, "as2");
	iVar28 = unk_0x05989B8A830B4E1C(*iParam0, "qu2");
	iVar29 = unk_0x05989B8A830B4E1C(*iParam0, "gg2");
	iVar30 = unk_0x05989B8A830B4E1C(*iParam0, "ar2");
	iVar0 = 0;
	while (iVar0 <= (Global_1632166.f_77915[2] - 1))
	{
		Global_1632166.f_78822[2 /*901*/][iVar0 /*15*/] = { unk_0x866B2C4E49D29F3B(iVar21, iVar0) };
		Global_1632166.f_78822[2 /*901*/][iVar0 /*15*/].f_3 = unk_0x07F84E836DFFE814(iVar22, iVar0);
		Global_1632166.f_78822[2 /*901*/][iVar0 /*15*/].f_5 = unk_0x6BAB52A8425E7B4B(iVar23, iVar0);
		if (unk_0x1C9BFBB46CC94A75(iVar24, iVar0) == 2)
		{
			Global_1632166.f_78822[2 /*901*/][iVar0 /*15*/].f_7 = unk_0x6BAB52A8425E7B4B(iVar24, iVar0);
		}
		else
		{
			Global_1632166.f_78822[2 /*901*/][iVar0 /*15*/].f_7 = -1;
		}
		Global_1632166.f_78822[2 /*901*/][iVar0 /*15*/].f_9 = unk_0x6BAB52A8425E7B4B(iVar25, iVar0);
		Global_1632166.f_78822[2 /*901*/][iVar0 /*15*/].f_10 = unk_0x6BAB52A8425E7B4B(iVar26, iVar0);
		Global_1632166.f_78822[2 /*901*/][iVar0 /*15*/].f_11 = unk_0x6BAB52A8425E7B4B(iVar27, iVar0);
		Global_1632166.f_78822[2 /*901*/][iVar0 /*15*/].f_12 = unk_0x6BAB52A8425E7B4B(iVar28, iVar0);
		Global_1632166.f_78822[2 /*901*/][iVar0 /*15*/].f_13 = unk_0x6BAB52A8425E7B4B(iVar29, iVar0);
		Global_1632166.f_78822[2 /*901*/][iVar0 /*15*/].f_14 = unk_0x6BAB52A8425E7B4B(iVar30, iVar0);
		iVar0++;
	}
	Global_1632166.f_77915[3] = unk_0x4985D6D7F7AB891A(*iParam0, "no3");
	iVar31 = unk_0x05989B8A830B4E1C(*iParam0, "loc3");
	iVar32 = unk_0x05989B8A830B4E1C(*iParam0, "head3");
	iVar33 = unk_0x05989B8A830B4E1C(*iParam0, "bit3");
	iVar34 = unk_0x05989B8A830B4E1C(*iParam0, "veh3");
	iVar35 = unk_0x05989B8A830B4E1C(*iParam0, "tars3");
	iVar36 = unk_0x05989B8A830B4E1C(*iParam0, "ty3");
	iVar37 = unk_0x05989B8A830B4E1C(*iParam0, "as3");
	iVar38 = unk_0x05989B8A830B4E1C(*iParam0, "qu3");
	iVar39 = unk_0x05989B8A830B4E1C(*iParam0, "gg3");
	iVar40 = unk_0x05989B8A830B4E1C(*iParam0, "ar3");
	iVar0 = 0;
	while (iVar0 <= (Global_1632166.f_77915[3] - 1))
	{
		Global_1632166.f_78822[3 /*901*/][iVar0 /*15*/] = { unk_0x866B2C4E49D29F3B(iVar31, iVar0) };
		Global_1632166.f_78822[3 /*901*/][iVar0 /*15*/].f_3 = unk_0x07F84E836DFFE814(iVar32, iVar0);
		Global_1632166.f_78822[3 /*901*/][iVar0 /*15*/].f_5 = unk_0x6BAB52A8425E7B4B(iVar33, iVar0);
		if (unk_0x1C9BFBB46CC94A75(iVar34, iVar0) == 2)
		{
			Global_1632166.f_78822[3 /*901*/][iVar0 /*15*/].f_7 = unk_0x6BAB52A8425E7B4B(iVar34, iVar0);
		}
		else
		{
			Global_1632166.f_78822[3 /*901*/][iVar0 /*15*/].f_7 = -1;
		}
		Global_1632166.f_78822[3 /*901*/][iVar0 /*15*/].f_9 = unk_0x6BAB52A8425E7B4B(iVar35, iVar0);
		Global_1632166.f_78822[3 /*901*/][iVar0 /*15*/].f_10 = unk_0x6BAB52A8425E7B4B(iVar36, iVar0);
		Global_1632166.f_78822[3 /*901*/][iVar0 /*15*/].f_11 = unk_0x6BAB52A8425E7B4B(iVar37, iVar0);
		Global_1632166.f_78822[3 /*901*/][iVar0 /*15*/].f_12 = unk_0x6BAB52A8425E7B4B(iVar38, iVar0);
		Global_1632166.f_78822[3 /*901*/][iVar0 /*15*/].f_13 = unk_0x6BAB52A8425E7B4B(iVar39, iVar0);
		Global_1632166.f_78822[3 /*901*/][iVar0 /*15*/].f_14 = unk_0x6BAB52A8425E7B4B(iVar40, iVar0);
		iVar0++;
	}
}

int func_170(int iParam0)
{
	if (iParam0 < 31)
	{
		return iParam0;
	}
	else if (iParam0 < 62)
	{
		return (iParam0 - 31);
	}
	return (iParam0 - func_171(iParam0) * 31);
}

int func_171(int iParam0)
{
	if (iParam0 < 31)
	{
		return 0;
	}
	else if (iParam0 < 62)
	{
		return 1;
	}
	return (iParam0 / 31);
}

int func_172()
{
	if (Global_1632166 == 6)
	{
		return 1;
	}
	return 0;
}

void func_173(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar1 = unk_0x4C4E1CA899A313BB(iParam0, "ene");
	Global_1632166.f_77914 = unk_0x4985D6D7F7AB891A(iVar1, "no");
	Global_1632166.f_40734 = unk_0x4985D6D7F7AB891A(iVar1, "veh");
	iVar2 = unk_0x05989B8A830B4E1C(iVar1, "loc");
	iVar3 = unk_0x05989B8A830B4E1C(iVar1, "head");
	iVar4 = unk_0x05989B8A830B4E1C(iVar1, "team");
	if (Global_1632166.f_77914 > 60)
	{
		Global_1632166.f_77914 = 60;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1632166.f_77914 - 1))
	{
		if (iVar0 < 60)
		{
			Global_1632166.f_77921[iVar0 /*15*/] = { unk_0x866B2C4E49D29F3B(iVar2, iVar0) };
			Global_1632166.f_77921[iVar0 /*15*/].f_3 = unk_0x07F84E836DFFE814(iVar3, iVar0);
			Global_1632166.f_77921[iVar0 /*15*/].f_4 = unk_0x6BAB52A8425E7B4B(iVar4, iVar0);
		}
		iVar0++;
	}
	func_169(&iVar1);
}

void func_174(int iParam0)
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
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	
	iVar2 = unk_0x4C4E1CA899A313BB(iParam0, "dprop");
	Global_1632166.f_51974 = func_177(unk_0x4985D6D7F7AB891A(iVar2, "no"), 0, 150);
	iVar3 = unk_0x05989B8A830B4E1C(iVar2, "loc");
	iVar4 = unk_0x05989B8A830B4E1C(iVar2, "vRot");
	iVar5 = unk_0x05989B8A830B4E1C(iVar2, "head");
	iVar6 = unk_0x05989B8A830B4E1C(iVar2, "model");
	iVar7 = unk_0x05989B8A830B4E1C(iVar2, "asst");
	iVar8 = unk_0x05989B8A830B4E1C(iVar2, "asso");
	iVar9 = unk_0x05989B8A830B4E1C(iVar2, "asss");
	iVar10 = unk_0x05989B8A830B4E1C(iVar2, "pasc");
	iVar11 = unk_0x05989B8A830B4E1C(iVar2, "asst2");
	iVar12 = unk_0x05989B8A830B4E1C(iVar2, "asso2");
	iVar13 = unk_0x05989B8A830B4E1C(iVar2, "asss2");
	iVar14 = unk_0x05989B8A830B4E1C(iVar2, "pasc2");
	iVar15 = unk_0x05989B8A830B4E1C(iVar2, "asst3");
	iVar16 = unk_0x05989B8A830B4E1C(iVar2, "asso3");
	iVar17 = unk_0x05989B8A830B4E1C(iVar2, "asss3");
	iVar18 = unk_0x05989B8A830B4E1C(iVar2, "pasc3");
	iVar19 = unk_0x05989B8A830B4E1C(iVar2, "asst4");
	iVar20 = unk_0x05989B8A830B4E1C(iVar2, "asso4");
	iVar21 = unk_0x05989B8A830B4E1C(iVar2, "asss4");
	iVar22 = unk_0x05989B8A830B4E1C(iVar2, "pasc4");
	iVar23 = unk_0x05989B8A830B4E1C(iVar2, "prpct");
	iVar24 = unk_0x05989B8A830B4E1C(iVar2, "prpcr");
	iVar25 = unk_0x05989B8A830B4E1C(iVar2, "prcra");
	iVar26 = unk_0x05989B8A830B4E1C(iVar2, "prpbs");
	iVar27 = unk_0x05989B8A830B4E1C(iVar2, "prpkt");
	iVar28 = unk_0x05989B8A830B4E1C(iVar2, "prpdclr");
	if (Global_1632166.f_51974 > 20)
	{
		Global_1632166.f_51974 = 20;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1632166.f_51974 - 1))
	{
		Global_1632166.f_51976[iVar0 /*31*/] = { unk_0x866B2C4E49D29F3B(iVar3, iVar0) };
		Global_1632166.f_51976[iVar0 /*31*/].f_3 = { unk_0x866B2C4E49D29F3B(iVar4, iVar0) };
		Global_1632166.f_51976[iVar0 /*31*/].f_6 = unk_0x07F84E836DFFE814(iVar5, iVar0);
		Global_1632166.f_51976[iVar0 /*31*/].f_8 = -1;
		iVar1 = unk_0x6BAB52A8425E7B4B(iVar6, iVar0);
		Global_1632166.f_51976[iVar0 /*31*/].f_7 = func_176(iVar1);
		if (!unk_0xA8DA2E2DC299ED17(Global_1632166.f_51976[iVar0 /*31*/].f_7))
		{
			Global_1632166.f_51976[iVar0 /*31*/].f_7 = joaat("prop_barrel_exp_01a");
		}
		Global_1632166.f_51976[iVar0 /*31*/].f_12 = unk_0x6BAB52A8425E7B4B(iVar7, iVar0);
		Global_1632166.f_51976[iVar0 /*31*/].f_11 = unk_0x6BAB52A8425E7B4B(iVar8, iVar0);
		Global_1632166.f_51976[iVar0 /*31*/].f_13 = unk_0x6BAB52A8425E7B4B(iVar9, iVar0);
		if (Global_1632166.f_51976[iVar0 /*31*/].f_13 == -1)
		{
			Global_1632166.f_51976[iVar0 /*31*/].f_13 = 0;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar11, iVar0) == 2)
		{
			Global_1632166.f_51976[iVar0 /*31*/].f_19 = unk_0x6BAB52A8425E7B4B(iVar11, iVar0);
			Global_1632166.f_51976[iVar0 /*31*/].f_22 = unk_0x6BAB52A8425E7B4B(iVar12, iVar0);
			Global_1632166.f_51976[iVar0 /*31*/].f_25 = unk_0x6BAB52A8425E7B4B(iVar13, iVar0);
			Global_1632166.f_51976[iVar0 /*31*/].f_20 = unk_0x6BAB52A8425E7B4B(iVar15, iVar0);
			Global_1632166.f_51976[iVar0 /*31*/].f_23 = unk_0x6BAB52A8425E7B4B(iVar16, iVar0);
			Global_1632166.f_51976[iVar0 /*31*/].f_26 = unk_0x6BAB52A8425E7B4B(iVar17, iVar0);
			Global_1632166.f_51976[iVar0 /*31*/].f_21 = unk_0x6BAB52A8425E7B4B(iVar19, iVar0);
			Global_1632166.f_51976[iVar0 /*31*/].f_24 = unk_0x6BAB52A8425E7B4B(iVar20, iVar0);
			Global_1632166.f_51976[iVar0 /*31*/].f_27 = unk_0x6BAB52A8425E7B4B(iVar21, iVar0);
		}
		else
		{
			Global_1632166.f_51976[iVar0 /*31*/].f_22 = -1;
			Global_1632166.f_51976[iVar0 /*31*/].f_19 = 0;
			Global_1632166.f_51976[iVar0 /*31*/].f_25 = 0;
			Global_1632166.f_51976[iVar0 /*31*/].f_23 = -1;
			Global_1632166.f_51976[iVar0 /*31*/].f_20 = 0;
			Global_1632166.f_51976[iVar0 /*31*/].f_26 = 0;
			Global_1632166.f_51976[iVar0 /*31*/].f_24 = -1;
			Global_1632166.f_51976[iVar0 /*31*/].f_21 = 0;
			Global_1632166.f_51976[iVar0 /*31*/].f_27 = 0;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar10, iVar0) == 2)
		{
			Global_1632166.f_51976[iVar0 /*31*/].f_14 = unk_0x6BAB52A8425E7B4B(iVar10, iVar0);
			Global_1632166.f_51976[iVar0 /*31*/].f_28 = unk_0x6BAB52A8425E7B4B(iVar14, iVar0);
			Global_1632166.f_51976[iVar0 /*31*/].f_29 = unk_0x6BAB52A8425E7B4B(iVar18, iVar0);
			Global_1632166.f_51976[iVar0 /*31*/].f_30 = unk_0x6BAB52A8425E7B4B(iVar22, iVar0);
		}
		else
		{
			Global_1632166.f_51976[iVar0 /*31*/].f_14 = 0;
			Global_1632166.f_51976[iVar0 /*31*/].f_28 = 0;
			Global_1632166.f_51976[iVar0 /*31*/].f_29 = 0;
			Global_1632166.f_51976[iVar0 /*31*/].f_30 = 0;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar24, iVar0) == 2)
		{
			Global_1632166.f_51976[iVar0 /*31*/].f_15 = unk_0x6BAB52A8425E7B4B(iVar24, iVar0);
		}
		else
		{
			Global_1632166.f_51976[iVar0 /*31*/].f_15 = -1;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar23, iVar0) == 2)
		{
			Global_1632166.f_51976[iVar0 /*31*/].f_16 = unk_0x6BAB52A8425E7B4B(iVar23, iVar0);
		}
		else
		{
			Global_1632166.f_51976[iVar0 /*31*/].f_16 = -1;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar25, iVar0) == 2)
		{
			Global_1632166.f_51976[iVar0 /*31*/].f_17 = unk_0x6BAB52A8425E7B4B(iVar25, iVar0);
		}
		else
		{
			Global_1632166.f_51976[iVar0 /*31*/].f_17 = -1;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar26, iVar0) == 2)
		{
			Global_1632166.f_51976[iVar0 /*31*/].f_18 = unk_0x6BAB52A8425E7B4B(iVar26, iVar0);
		}
		else
		{
			Global_1632166.f_51976[iVar0 /*31*/].f_18 = 0;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar27, iVar0) == 2)
		{
			Global_1632166.f_51976[iVar0 /*31*/].f_9 = unk_0x6BAB52A8425E7B4B(iVar27, iVar0);
		}
		else
		{
			Global_1632166.f_51976[iVar0 /*31*/].f_9 = 0;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar28, iVar0) == 2)
		{
			Global_1632166.f_51976[iVar0 /*31*/].f_10 = unk_0x6BAB52A8425E7B4B(iVar28, iVar0);
		}
		else
		{
			Global_1632166.f_51976[iVar0 /*31*/].f_10 = 1;
		}
		iVar0++;
	}
	iVar29 = iVar0;
	if (func_175() || Global_1632166 == 1)
	{
		iVar0 = 0;
		while (iVar0 <= (Global_1632166.f_40786 - 1))
		{
			Global_1632166.f_51976[iVar29 /*31*/] = { Global_1632166.f_40789[iVar0 /*92*/] };
			Global_1632166.f_51976[iVar29 /*31*/].f_3 = { Global_1632166.f_40789[iVar0 /*92*/].f_4 };
			Global_1632166.f_51976[iVar29 /*31*/].f_6 = Global_1632166.f_40789[iVar0 /*92*/].f_3;
			Global_1632166.f_51976[iVar29 /*31*/].f_8 = iVar0;
			Global_1632166.f_51976[iVar29 /*31*/].f_7 = joaat("prop_container_ld_pu");
			iVar30 = 0;
			while (iVar30 <= 3)
			{
				Global_1632166.f_40789[iVar29 /*92*/].f_17[iVar30] = 0;
				Global_1632166.f_40789[iVar29 /*92*/].f_22[iVar30] = 99999;
				iVar30++;
			}
			Global_1632166.f_51975++;
			Global_1632166.f_51974++;
			iVar29++;
			iVar0++;
		}
	}
}

int func_175()
{
	if (Global_1632166 == 0 && Global_1632166.f_2 == 5)
	{
		return 1;
	}
	return 0;
}

int func_176(int iParam0)
{
	if (iParam0 == joaat("prop_offroad_tyres01"))
	{
		return joaat("lts_prop_lts_offroad_tyres01");
	}
	else if (iParam0 == joaat("prop_mp_ramp_01_tu"))
	{
		return joaat("lts_prop_lts_ramp_01");
	}
	else if (iParam0 == joaat("prop_mp_ramp_02_tu"))
	{
		return joaat("lts_prop_lts_ramp_02");
	}
	else if (iParam0 == joaat("prop_mp_ramp_03_tu"))
	{
		return joaat("lts_prop_lts_ramp_03");
	}
	else if (iParam0 == joaat("prop_bush_lrg_01e_cr"))
	{
		return joaat("prop_bush_lrg_01e_cr");
	}
	else if (iParam0 == joaat("prop_bush_med_03_cr"))
	{
		return joaat("prop_bush_med_03_cr");
	}
	if ((unk_0x603D621ED5E06CB0() || unk_0xF1A016B51831B87B()) || unk_0x2D337DD29A7ABD30())
	{
		if (iParam0 == -56302774)
		{
			return joaat("prop_tree_fallen_02");
		}
		if (iParam0 == -1924165356)
		{
			return joaat("prop_log_break_01");
		}
		if (iParam0 == 1837927001)
		{
			return joaat("prop_plant_group_04_cr");
		}
		if (iParam0 == -960602868)
		{
			return joaat("prop_bush_lrg_01c_cr");
		}
		if (iParam0 == -72825120)
		{
			return joaat("prop_bush_lrg_01e_cr2");
		}
		if (iParam0 == -713058190)
		{
			return joaat("prop_bush_med_03_cr2");
		}
	}
	else if (unk_0x59D60465DE87FE2F() || unk_0xC0915CC8FE05A943())
	{
		if (iParam0 == joaat("prop_tree_fallen_02"))
		{
			return -56302774;
		}
		if (iParam0 == joaat("prop_log_break_01"))
		{
			return -1924165356;
		}
		if (iParam0 == joaat("prop_plant_group_04_cr"))
		{
			return 1837927001;
		}
		if (iParam0 == joaat("prop_bush_lrg_01c_cr"))
		{
			return -960602868;
		}
		if (iParam0 == joaat("prop_bush_lrg_01e_cr2"))
		{
			return -72825120;
		}
		if (iParam0 == joaat("prop_bush_med_03_cr2"))
		{
			return -713058190;
		}
	}
	return iParam0;
}

int func_177(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_178(int iParam0)
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
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	var uVar50[4];
	char[] cVar55[8];
	int iVar57;
	
	iVar3 = unk_0x4C4E1CA899A313BB(iParam0, "prop");
	Global_1632166.f_43047 = unk_0x4985D6D7F7AB891A(iVar3, "no");
	iVar4 = unk_0x05989B8A830B4E1C(iVar3, "loc");
	iVar5 = unk_0x05989B8A830B4E1C(iVar3, "vRot");
	iVar6 = unk_0x05989B8A830B4E1C(iVar3, "head");
	iVar7 = unk_0x05989B8A830B4E1C(iVar3, "model");
	iVar8 = unk_0x05989B8A830B4E1C(iVar3, "asst");
	iVar9 = unk_0x05989B8A830B4E1C(iVar3, "asso");
	iVar10 = unk_0x05989B8A830B4E1C(iVar3, "asss");
	iVar11 = unk_0x05989B8A830B4E1C(iVar3, "pasc");
	iVar12 = unk_0x05989B8A830B4E1C(iVar3, "asst2");
	iVar13 = unk_0x05989B8A830B4E1C(iVar3, "asso2");
	iVar14 = unk_0x05989B8A830B4E1C(iVar3, "asss2");
	iVar15 = unk_0x05989B8A830B4E1C(iVar3, "pasc2");
	iVar16 = unk_0x05989B8A830B4E1C(iVar3, "asst3");
	iVar17 = unk_0x05989B8A830B4E1C(iVar3, "asso3");
	iVar18 = unk_0x05989B8A830B4E1C(iVar3, "asss3");
	iVar19 = unk_0x05989B8A830B4E1C(iVar3, "pasc3");
	iVar20 = unk_0x05989B8A830B4E1C(iVar3, "asst4");
	iVar21 = unk_0x05989B8A830B4E1C(iVar3, "asso4");
	iVar22 = unk_0x05989B8A830B4E1C(iVar3, "asss4");
	iVar23 = unk_0x05989B8A830B4E1C(iVar3, "pasc4");
	iVar24 = unk_0x05989B8A830B4E1C(iVar3, "bpbid");
	iVar25 = unk_0x05989B8A830B4E1C(iVar3, "bpbip");
	iVar26 = unk_0x05989B8A830B4E1C(iVar3, "bpbpt");
	iVar27 = unk_0x05989B8A830B4E1C(iVar3, "fcuat");
	iVar28 = unk_0x05989B8A830B4E1C(iVar3, "aldel");
	iVar29 = unk_0x05989B8A830B4E1C(iVar3, "alsnd");
	iVar30 = unk_0x05989B8A830B4E1C(iVar3, "flvfx");
	iVar31 = unk_0x05989B8A830B4E1C(iVar3, "prpcl");
	iVar32 = unk_0x05989B8A830B4E1C(iVar3, "prplod");
	iVar33 = unk_0x05989B8A830B4E1C(iVar3, "prpatn");
	iVar34 = unk_0x05989B8A830B4E1C(iVar3, "prpasn");
	iVar35 = unk_0x05989B8A830B4E1C(iVar3, "prpclr");
	iVar36 = unk_0x05989B8A830B4E1C(iVar3, "prptsp");
	iVar37 = unk_0x05989B8A830B4E1C(iVar3, "prptds");
	iVar38 = unk_0x05989B8A830B4E1C(iVar3, "prpsba");
	iVar39 = unk_0x05989B8A830B4E1C(iVar3, "sndid");
	iVar40 = unk_0x05989B8A830B4E1C(iVar3, "sndtri");
	iVar41 = unk_0x05989B8A830B4E1C(iVar3, "sndlmt");
	iVar42 = unk_0x05989B8A830B4E1C(iVar3, "prpsnpp");
	iVar43 = unk_0x05989B8A830B4E1C(iVar3, "prpct");
	iVar44 = unk_0x05989B8A830B4E1C(iVar3, "prpcr");
	iVar45 = unk_0x05989B8A830B4E1C(iVar3, "prcra");
	iVar46 = unk_0x05989B8A830B4E1C(iVar3, "prpbs");
	iVar47 = unk_0x05989B8A830B4E1C(iVar3, "prers");
	iVar48 = unk_0x05989B8A830B4E1C(iVar3, "ptfxtr");
	iVar49 = unk_0x05989B8A830B4E1C(iVar3, "ptfxst");
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		StringCopy(&cVar55, "prpsdp", 8);
		StringIntConCat(&cVar55, iVar2, 8);
		uVar50[iVar2] = unk_0x05989B8A830B4E1C(iVar3, &cVar55);
		iVar2++;
	}
	iVar57 = unk_0x05989B8A830B4E1C(iVar3, "pdip");
	if (Global_1632166.f_43047 > 150)
	{
		Global_1632166.f_43047 = 150;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1632166.f_43047 - 1))
	{
		Global_1632166.f_43048[iVar0 /*59*/] = { unk_0x866B2C4E49D29F3B(iVar4, iVar0) };
		Global_1632166.f_43048[iVar0 /*59*/].f_3 = { unk_0x866B2C4E49D29F3B(iVar5, iVar0) };
		Global_1632166.f_43048[iVar0 /*59*/].f_6 = unk_0x07F84E836DFFE814(iVar6, iVar0);
		iVar1 = unk_0x6BAB52A8425E7B4B(iVar7, iVar0);
		Global_1632166.f_43048[iVar0 /*59*/].f_7 = func_176(iVar1);
		if (!unk_0xA8DA2E2DC299ED17(Global_1632166.f_43048[iVar0 /*59*/].f_7))
		{
			Global_1632166.f_43048[iVar0 /*59*/].f_7 = joaat("prop_const_fence02b");
		}
		Global_1632166.f_43048[iVar0 /*59*/].f_9 = unk_0x6BAB52A8425E7B4B(iVar8, iVar0);
		Global_1632166.f_43048[iVar0 /*59*/].f_8 = unk_0x6BAB52A8425E7B4B(iVar9, iVar0);
		Global_1632166.f_43048[iVar0 /*59*/].f_10 = unk_0x6BAB52A8425E7B4B(iVar10, iVar0);
		if (Global_1632166.f_43048[iVar0 /*59*/].f_10 == -1)
		{
			Global_1632166.f_43048[iVar0 /*59*/].f_10 = 0;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar24, iVar0) == 1)
		{
			Global_1632166.f_43048[iVar0 /*59*/].f_49 = unk_0x1443290B580EC8DD(iVar24, iVar0);
		}
		else
		{
			Global_1632166.f_43048[iVar0 /*59*/].f_49 = 0;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar25, iVar0) == 1)
		{
			Global_1632166.f_43048[iVar0 /*59*/].f_50 = unk_0x1443290B580EC8DD(iVar25, iVar0);
		}
		else
		{
			Global_1632166.f_43048[iVar0 /*59*/].f_50 = 0;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar26, iVar0) == 2)
		{
			Global_1632166.f_43048[iVar0 /*59*/].f_51 = unk_0x6BAB52A8425E7B4B(iVar26, iVar0);
		}
		else
		{
			Global_1632166.f_43048[iVar0 /*59*/].f_51 = 0;
		}
		Global_1632166.f_43048[iVar0 /*59*/].f_52 = unk_0x6BAB52A8425E7B4B(iVar27, iVar0);
		if (unk_0x1C9BFBB46CC94A75(iVar12, iVar0) == 2)
		{
			Global_1632166.f_43048[iVar0 /*59*/].f_36 = unk_0x6BAB52A8425E7B4B(iVar12, iVar0);
			Global_1632166.f_43048[iVar0 /*59*/].f_39 = unk_0x6BAB52A8425E7B4B(iVar13, iVar0);
			Global_1632166.f_43048[iVar0 /*59*/].f_42 = unk_0x6BAB52A8425E7B4B(iVar14, iVar0);
			Global_1632166.f_43048[iVar0 /*59*/].f_37 = unk_0x6BAB52A8425E7B4B(iVar16, iVar0);
			Global_1632166.f_43048[iVar0 /*59*/].f_40 = unk_0x6BAB52A8425E7B4B(iVar17, iVar0);
			Global_1632166.f_43048[iVar0 /*59*/].f_43 = unk_0x6BAB52A8425E7B4B(iVar18, iVar0);
			Global_1632166.f_43048[iVar0 /*59*/].f_38 = unk_0x6BAB52A8425E7B4B(iVar20, iVar0);
			Global_1632166.f_43048[iVar0 /*59*/].f_41 = unk_0x6BAB52A8425E7B4B(iVar21, iVar0);
			Global_1632166.f_43048[iVar0 /*59*/].f_44 = unk_0x6BAB52A8425E7B4B(iVar22, iVar0);
		}
		else
		{
			Global_1632166.f_43048[iVar0 /*59*/].f_39 = -1;
			Global_1632166.f_43048[iVar0 /*59*/].f_36 = 0;
			Global_1632166.f_43048[iVar0 /*59*/].f_42 = 0;
			Global_1632166.f_43048[iVar0 /*59*/].f_40 = -1;
			Global_1632166.f_43048[iVar0 /*59*/].f_37 = 0;
			Global_1632166.f_43048[iVar0 /*59*/].f_43 = 0;
			Global_1632166.f_43048[iVar0 /*59*/].f_41 = -1;
			Global_1632166.f_43048[iVar0 /*59*/].f_38 = 0;
			Global_1632166.f_43048[iVar0 /*59*/].f_44 = 0;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar11, iVar0) == 2)
		{
			Global_1632166.f_43048[iVar0 /*59*/].f_11 = unk_0x6BAB52A8425E7B4B(iVar11, iVar0);
			Global_1632166.f_43048[iVar0 /*59*/].f_45 = unk_0x6BAB52A8425E7B4B(iVar15, iVar0);
			Global_1632166.f_43048[iVar0 /*59*/].f_46 = unk_0x6BAB52A8425E7B4B(iVar19, iVar0);
			Global_1632166.f_43048[iVar0 /*59*/].f_47 = unk_0x6BAB52A8425E7B4B(iVar23, iVar0);
		}
		else
		{
			Global_1632166.f_43048[iVar0 /*59*/].f_11 = 0;
			Global_1632166.f_43048[iVar0 /*59*/].f_45 = 0;
			Global_1632166.f_43048[iVar0 /*59*/].f_46 = 0;
			Global_1632166.f_43048[iVar0 /*59*/].f_47 = 0;
		}
		Global_1632166.f_43048[iVar0 /*59*/].f_12 = unk_0x6BAB52A8425E7B4B(iVar28, iVar0);
		if (Global_1632166.f_43048[iVar0 /*59*/].f_12 > 0 && Global_1632166.f_43048[iVar0 /*59*/].f_12 < 1000)
		{
			Global_1632166.f_43048[iVar0 /*59*/].f_12 = func_179(Global_1632166.f_43048[iVar0 /*59*/].f_12);
		}
		Global_1632166.f_43048[iVar0 /*59*/].f_13 = unk_0x6BAB52A8425E7B4B(iVar29, iVar0);
		Global_1632166.f_43048[iVar0 /*59*/].f_14 = unk_0x6BAB52A8425E7B4B(iVar30, iVar0);
		Global_1632166.f_43048[iVar0 /*59*/].f_15 = unk_0x6BAB52A8425E7B4B(iVar31, iVar0);
		Global_1632166.f_43048[iVar0 /*59*/].f_31 = unk_0x07F84E836DFFE814(iVar36, iVar0);
		Global_1632166.f_43048[iVar0 /*59*/].f_32 = unk_0x07F84E836DFFE814(iVar37, iVar0);
		Global_1632166.f_43048[iVar0 /*59*/].f_33 = unk_0x6BAB52A8425E7B4B(iVar38, iVar0);
		Global_1632166.f_43048[iVar0 /*59*/].f_53 = unk_0x6BAB52A8425E7B4B(iVar39, iVar0);
		Global_1632166.f_43048[iVar0 /*59*/].f_54 = unk_0x6BAB52A8425E7B4B(iVar40, iVar0);
		Global_1632166.f_43048[iVar0 /*59*/].f_55 = unk_0x6BAB52A8425E7B4B(iVar41, iVar0);
		if (unk_0x1C9BFBB46CC94A75(iVar32, iVar0) == 2)
		{
			Global_1632166.f_43048[iVar0 /*59*/].f_21 = unk_0x6BAB52A8425E7B4B(iVar32, iVar0);
		}
		else
		{
			Global_1632166.f_43048[iVar0 /*59*/].f_21 = -1;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar33, iVar0) == 2)
		{
			Global_1632166.f_43048[iVar0 /*59*/].f_22 = unk_0x6BAB52A8425E7B4B(iVar33, iVar0);
		}
		else
		{
			Global_1632166.f_43048[iVar0 /*59*/].f_22 = 0;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar34, iVar0) == 2)
		{
			Global_1632166.f_43048[iVar0 /*59*/].f_23 = unk_0x6BAB52A8425E7B4B(iVar34, iVar0);
		}
		else
		{
			Global_1632166.f_43048[iVar0 /*59*/].f_23 = 0;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar35, iVar0) == 2)
		{
			Global_1632166.f_43048[iVar0 /*59*/].f_24 = unk_0x6BAB52A8425E7B4B(iVar35, iVar0);
		}
		else
		{
			Global_1632166.f_43048[iVar0 /*59*/].f_24 = 1;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar36, iVar0) == 3)
		{
			Global_1632166.f_43048[iVar0 /*59*/].f_31 = unk_0x07F84E836DFFE814(iVar36, iVar0);
		}
		else
		{
			Global_1632166.f_43048[iVar0 /*59*/].f_31 = 0f;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar37, iVar0) == 3)
		{
			Global_1632166.f_43048[iVar0 /*59*/].f_32 = unk_0x07F84E836DFFE814(iVar37, iVar0);
		}
		else
		{
			Global_1632166.f_43048[iVar0 /*59*/].f_32 = 0.4f;
		}
		if (unk_0x6BAB52A8425E7B4B(iVar38, iVar0) > 5)
		{
			if (unk_0x6BAB52A8425E7B4B(iVar38, iVar0) == 15)
			{
				Global_1632166.f_43048[iVar0 /*59*/].f_33 = 1;
			}
			if (unk_0x6BAB52A8425E7B4B(iVar38, iVar0) == 25)
			{
				Global_1632166.f_43048[iVar0 /*59*/].f_33 = 2;
			}
			if (unk_0x6BAB52A8425E7B4B(iVar38, iVar0) == 35)
			{
				Global_1632166.f_43048[iVar0 /*59*/].f_33 = 3;
			}
			if (unk_0x6BAB52A8425E7B4B(iVar38, iVar0) == 45)
			{
				Global_1632166.f_43048[iVar0 /*59*/].f_33 = 4;
			}
			if (unk_0x6BAB52A8425E7B4B(iVar38, iVar0) == 55)
			{
				Global_1632166.f_43048[iVar0 /*59*/].f_33 = 5;
			}
			if (unk_0x6BAB52A8425E7B4B(iVar38, iVar0) == 16)
			{
				Global_1632166.f_43048[iVar0 /*59*/].f_33 = 3;
			}
			if (unk_0x6BAB52A8425E7B4B(iVar38, iVar0) == 30)
			{
				Global_1632166.f_43048[iVar0 /*59*/].f_33 = 2;
			}
			if (unk_0x6BAB52A8425E7B4B(iVar38, iVar0) == 44)
			{
				Global_1632166.f_43048[iVar0 /*59*/].f_33 = 1;
			}
		}
		else if (unk_0x1C9BFBB46CC94A75(iVar38, iVar0) == 2)
		{
			Global_1632166.f_43048[iVar0 /*59*/].f_33 = unk_0x6BAB52A8425E7B4B(iVar38, iVar0);
		}
		else
		{
			Global_1632166.f_43048[iVar0 /*59*/].f_33 = 2;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar39, iVar0) == 2)
		{
			Global_1632166.f_43048[iVar0 /*59*/].f_53 = unk_0x6BAB52A8425E7B4B(iVar39, iVar0);
		}
		else
		{
			Global_1632166.f_43048[iVar0 /*59*/].f_53 = 0;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar40, iVar0) == 2)
		{
			Global_1632166.f_43048[iVar0 /*59*/].f_54 = unk_0x6BAB52A8425E7B4B(iVar40, iVar0);
		}
		else
		{
			Global_1632166.f_43048[iVar0 /*59*/].f_54 = 0;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar41, iVar0) == 2)
		{
			Global_1632166.f_43048[iVar0 /*59*/].f_55 = unk_0x6BAB52A8425E7B4B(iVar41, iVar0);
		}
		else
		{
			Global_1632166.f_43048[iVar0 /*59*/].f_55 = 0;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar42, iVar0) == 2)
		{
			Global_1632166.f_43048[iVar0 /*59*/].f_25 = unk_0x6BAB52A8425E7B4B(iVar42, iVar0);
		}
		else
		{
			Global_1632166.f_43048[iVar0 /*59*/].f_25 = 0;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar48, iVar0) == 3)
		{
			Global_1632166.f_43048[iVar0 /*59*/].f_34 = unk_0x07F84E836DFFE814(iVar48, iVar0);
		}
		else
		{
			Global_1632166.f_43048[iVar0 /*59*/].f_34 = 0f;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar44, iVar0) == 2)
		{
			Global_1632166.f_43048[iVar0 /*59*/].f_16 = unk_0x6BAB52A8425E7B4B(iVar44, iVar0);
		}
		else
		{
			Global_1632166.f_43048[iVar0 /*59*/].f_16 = -1;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar43, iVar0) == 2)
		{
			Global_1632166.f_43048[iVar0 /*59*/].f_17 = unk_0x6BAB52A8425E7B4B(iVar43, iVar0);
		}
		else
		{
			Global_1632166.f_43048[iVar0 /*59*/].f_17 = -1;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar45, iVar0) == 2)
		{
			Global_1632166.f_43048[iVar0 /*59*/].f_18 = unk_0x6BAB52A8425E7B4B(iVar45, iVar0);
		}
		else
		{
			Global_1632166.f_43048[iVar0 /*59*/].f_18 = -1;
		}
		Global_1632166.f_43048[iVar0 /*59*/].f_19 = unk_0x6BAB52A8425E7B4B(iVar46, iVar0);
		if (unk_0x1C9BFBB46CC94A75(iVar49, iVar0) == 2)
		{
			Global_1632166.f_43048[iVar0 /*59*/].f_35 = unk_0x6BAB52A8425E7B4B(iVar49, iVar0);
		}
		else
		{
			Global_1632166.f_43048[iVar0 /*59*/].f_35 = 0;
		}
		Global_1632166.f_43048[iVar0 /*59*/].f_20 = unk_0x6BAB52A8425E7B4B(iVar47, iVar0);
		iVar2 = 0;
		while (iVar2 <= 3)
		{
			if (unk_0x1C9BFBB46CC94A75(uVar50[iVar2], iVar0) == 2)
			{
				Global_1632166.f_43048[iVar0 /*59*/].f_26[iVar2] = unk_0x6BAB52A8425E7B4B(uVar50[iVar2], iVar0);
			}
			else
			{
				Global_1632166.f_43048[iVar0 /*59*/].f_26[iVar2] = -1;
			}
			iVar2++;
		}
		Global_1632166.f_43048[iVar0 /*59*/].f_58 = unk_0x6BAB52A8425E7B4B(iVar57, iVar0);
		iVar0++;
	}
}

int func_179(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 5000;
		
		case 2:
			return 10000;
		
		case 3:
			return 20000;
		
		case 4:
			return 30000;
		
		case 5:
			return 45000;
		
		case 6:
			return 60000;
		
		default:
	}
	return 0;
}

void func_180(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char[] cVar4[8];
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
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
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
	int iVar57;
	int iVar58;
	int iVar59;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	int iVar65;
	int iVar66;
	int iVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	var uVar71[4];
	var uVar76[4];
	var uVar81[4];
	var uVar86[4];
	var uVar91[4];
	var uVar96[4];
	var uVar101[4];
	var uVar106[4];
	var uVar111[2];
	var uVar114[2];
	int iVar117;
	int iVar118;
	int iVar119;
	int iVar120;
	int iVar121;
	int iVar122;
	int iVar123;
	int iVar124;
	int iVar125;
	int iVar126;
	int iVar127;
	int iVar128;
	
	iVar6 = unk_0x4C4E1CA899A313BB(iParam0, "veh");
	Global_1632166.f_55074 = unk_0x4985D6D7F7AB891A(iVar6, "no");
	Global_1632166.f_55075 = unk_0x4985D6D7F7AB891A(iVar6, "time");
	Global_1632166.f_55076 = unk_0x4985D6D7F7AB891A(iVar6, "pal");
	iVar7 = unk_0x4C4E1CA899A313BB(iParam0, "vhrls");
	if (iVar7 != 0)
	{
		iVar3 = 0;
		while (iVar3 <= (Global_1632166.f_29 - 1))
		{
			iVar0 = 0;
			while (iVar0 <= (Global_1632166.f_91[iVar3 /*8128*/].f_57 - 1))
			{
				StringCopy(&cVar4, "vhr", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				Global_1632166.f_59600[iVar0 /*5*/][iVar3] = unk_0x4985D6D7F7AB891A(iVar7, &cVar4);
				StringCopy(&cVar4, "vrs", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				Global_1632166.f_32697[iVar0 /*5*/][iVar3] = unk_0x4985D6D7F7AB891A(iVar7, &cVar4);
				StringCopy(&cVar4, "rkt", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				if (unk_0xF0E984A1CED01E3C(iVar7, &cVar4) == 2)
				{
					Global_1632166.f_32783[iVar0 /*5*/][iVar3] = unk_0x4985D6D7F7AB891A(iVar7, &cVar4);
				}
				else
				{
					Global_1632166.f_32783[iVar0 /*5*/][iVar3] = 0;
				}
				StringCopy(&cVar4, "bst", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				if (unk_0xF0E984A1CED01E3C(iVar7, &cVar4) == 2)
				{
					Global_1632166.f_32869[iVar0 /*5*/][iVar3] = unk_0x4985D6D7F7AB891A(iVar7, &cVar4);
				}
				else
				{
					Global_1632166.f_32869[iVar0 /*5*/][iVar3] = 0;
				}
				StringCopy(&cVar4, "rpr", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				if (unk_0xF0E984A1CED01E3C(iVar7, &cVar4) == 2)
				{
					Global_1632166.f_32955[iVar0 /*5*/][iVar3] = unk_0x4985D6D7F7AB891A(iVar7, &cVar4);
				}
				else
				{
					Global_1632166.f_32955[iVar0 /*5*/][iVar3] = 0;
				}
				StringCopy(&cVar4, "spk", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				if (unk_0xF0E984A1CED01E3C(iVar7, &cVar4) == 2)
				{
					Global_1632166.f_33041[iVar0 /*5*/][iVar3] = unk_0x4985D6D7F7AB891A(iVar7, &cVar4);
				}
				else
				{
					Global_1632166.f_33041[iVar0 /*5*/][iVar3] = 0;
				}
				StringCopy(&cVar4, "tmr", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				if (unk_0xF0E984A1CED01E3C(iVar7, &cVar4) == 2)
				{
					Global_1632166.f_33127[iVar0 /*5*/][iVar3] = unk_0x4985D6D7F7AB891A(iVar7, &cVar4);
				}
				else
				{
					Global_1632166.f_33127[iVar0 /*5*/][iVar3] = 1500;
				}
				StringCopy(&cVar4, "bsd", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				if (unk_0xF0E984A1CED01E3C(iVar7, &cVar4) == 2)
				{
					Global_1632166.f_33213[iVar0 /*5*/][iVar3] = unk_0x4985D6D7F7AB891A(iVar7, &cVar4);
				}
				else
				{
					Global_1632166.f_33213[iVar0 /*5*/][iVar3] = 1400;
				}
				StringCopy(&cVar4, "bss", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				if (unk_0xF0E984A1CED01E3C(iVar7, &cVar4) == 2)
				{
					Global_1632166.f_33299[iVar0 /*5*/][iVar3] = unk_0x4985D6D7F7AB891A(iVar7, &cVar4);
				}
				else
				{
					Global_1632166.f_33299[iVar0 /*5*/][iVar3] = 35;
				}
				iVar0++;
			}
			iVar3++;
		}
	}
	iVar8 = unk_0x05989B8A830B4E1C(iVar6, "loc");
	iVar9 = unk_0x05989B8A830B4E1C(iVar6, "head");
	iVar16 = unk_0x05989B8A830B4E1C(iVar6, "model");
	iVar17 = unk_0x05989B8A830B4E1C(iVar6, "col");
	iVar18 = unk_0x05989B8A830B4E1C(iVar6, "rsp");
	if (func_125())
	{
		iVar10 = unk_0x05989B8A830B4E1C(iVar6, "vrr");
		iVar11 = unk_0x05989B8A830B4E1C(iVar6, "vrmr");
		iVar12 = unk_0x05989B8A830B4E1C(iVar6, "vsnt");
		iVar13 = unk_0x05989B8A830B4E1C(iVar6, "vsnei");
		iVar14 = unk_0x05989B8A830B4E1C(iVar6, "v2sp");
		iVar15 = unk_0x05989B8A830B4E1C(iVar6, "v2sh");
		iVar19 = unk_0x05989B8A830B4E1C(iVar6, "objt");
		iVar20 = unk_0x05989B8A830B4E1C(iVar6, "team");
		iVar21 = unk_0x05989B8A830B4E1C(iVar6, "spwn");
		iVar22 = unk_0x05989B8A830B4E1C(iVar6, "objt2");
		iVar23 = unk_0x05989B8A830B4E1C(iVar6, "team2");
		iVar24 = unk_0x05989B8A830B4E1C(iVar6, "spwn2");
		iVar25 = unk_0x05989B8A830B4E1C(iVar6, "objt3");
		iVar26 = unk_0x05989B8A830B4E1C(iVar6, "team3");
		iVar27 = unk_0x05989B8A830B4E1C(iVar6, "spwn3");
		iVar28 = unk_0x05989B8A830B4E1C(iVar6, "objt4");
		iVar29 = unk_0x05989B8A830B4E1C(iVar6, "team4");
		iVar30 = unk_0x05989B8A830B4E1C(iVar6, "spwn4");
		Global_1632166.f_43046 = unk_0x4985D6D7F7AB891A(iVar6, "nocr");
		iVar31 = unk_0x05989B8A830B4E1C(iVar6, "crgdm");
		iVar32 = unk_0x05989B8A830B4E1C(iVar6, "liv");
		iVar33 = unk_0x05989B8A830B4E1C(iVar6, "modps");
		iVar34 = unk_0x05989B8A830B4E1C(iVar6, "enveff");
		iVar35 = unk_0x05989B8A830B4E1C(iVar6, "colc");
		iVar36 = unk_0x05989B8A830B4E1C(iVar6, "col2");
		iVar37 = unk_0x05989B8A830B4E1C(iVar6, "col3");
		Global_1632166.f_55077 = unk_0x4985D6D7F7AB891A(iVar6, "burst");
		iVar38 = unk_0x05989B8A830B4E1C(iVar6, "hlth");
		iVar39 = unk_0x05989B8A830B4E1C(iVar6, "enghp");
		iVar40 = unk_0x05989B8A830B4E1C(iVar6, "ptrhp");
		iVar41 = unk_0x05989B8A830B4E1C(iVar6, "bdyhp");
		iVar42 = unk_0x05989B8A830B4E1C(iVar6, "drbs");
		iVar43 = unk_0x05989B8A830B4E1C(iVar6, "vbs2");
		iVar44 = unk_0x05989B8A830B4E1C(iVar6, "vbs3");
		iVar45 = unk_0x05989B8A830B4E1C(iVar6, "vbs4");
		iVar46 = unk_0x05989B8A830B4E1C(iVar6, "vbs5");
		iVar47 = unk_0x05989B8A830B4E1C(iVar6, "vebs");
		iVar48 = unk_0x05989B8A830B4E1C(iVar6, "vehct");
		iVar51 = unk_0x05989B8A830B4E1C(iVar6, "vhcra");
		iVar49 = unk_0x05989B8A830B4E1C(iVar6, "vehcr");
		iVar50 = unk_0x05989B8A830B4E1C(iVar6, "vehcv");
		iVar52 = unk_0x05989B8A830B4E1C(iVar6, "vehbc");
		iVar53 = unk_0x05989B8A830B4E1C(iVar6, "vehbr");
		iVar54 = unk_0x05989B8A830B4E1C(iVar6, "vehbso");
		iVar55 = unk_0x05989B8A830B4E1C(iVar6, "vspdl");
		iVar56 = unk_0x05989B8A830B4E1C(iVar6, "vsgr");
		iVar57 = unk_0x05989B8A830B4E1C(iVar6, "vssgr");
		iVar58 = unk_0x05989B8A830B4E1C(iVar6, "vcnm");
		iVar59 = unk_0x05989B8A830B4E1C(iVar6, "vehap");
		iVar60 = unk_0x05989B8A830B4E1C(iVar6, "vehat");
		iVar61 = unk_0x05989B8A830B4E1C(iVar6, "vehdu");
		iVar62 = unk_0x05989B8A830B4E1C(iVar6, "vldt");
		iVar63 = unk_0x05989B8A830B4E1C(iVar6, "vldr");
		iVar64 = unk_0x05989B8A830B4E1C(iVar6, "cutsc");
		iVar65 = unk_0x05989B8A830B4E1C(iVar6, "cutsh");
		iVar69 = unk_0x05989B8A830B4E1C(iVar6, "nmpass");
		iVar70 = unk_0x05989B8A830B4E1C(iVar6, "nmfail");
		iVar66 = unk_0x05989B8A830B4E1C(iVar6, "vmcp");
		iVar67 = unk_0x05989B8A830B4E1C(iVar6, "vmcf");
		iVar68 = unk_0x05989B8A830B4E1C(iVar6, "gotor");
		iVar118 = unk_0x05989B8A830B4E1C(iVar6, "vphrang");
		iVar119 = unk_0x05989B8A830B4E1C(iVar6, "vwpndmg");
		iVar120 = unk_0x05989B8A830B4E1C(iVar6, "vtmhrn");
		iVar121 = unk_0x05989B8A830B4E1C(iVar6, "vdrpovr");
		iVar122 = unk_0x05989B8A830B4E1C(iVar6, "vdvrfe");
		iVar123 = unk_0x05989B8A830B4E1C(iVar6, "vdeitc");
		iVar124 = unk_0x05989B8A830B4E1C(iVar6, "vdspn");
		iVar125 = unk_0x05989B8A830B4E1C(iVar6, "vdcbal");
		iVar126 = unk_0x05989B8A830B4E1C(iVar6, "vdcbdt");
		iVar127 = unk_0x05989B8A830B4E1C(iVar6, "vrhlor");
		iVar128 = unk_0x05989B8A830B4E1C(iVar6, "vddfs");
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			StringCopy(&cVar4, "vrstp", 8);
			if (iVar1 > 0)
			{
				StringIntConCat(&cVar4, iVar1, 8);
			}
			uVar111[iVar1] = unk_0x05989B8A830B4E1C(iVar6, &cVar4);
			StringCopy(&cVar4, "frsth", 8);
			if (iVar1 > 0)
			{
				StringIntConCat(&cVar4, iVar1, 8);
			}
			uVar114[iVar1] = unk_0x05989B8A830B4E1C(iVar6, &cVar4);
			iVar1++;
		}
		iVar117 = unk_0x05989B8A830B4E1C(iVar6, "ubrkdb");
		iVar3 = 0;
		while (iVar3 <= (Global_1632166.f_29 - 1))
		{
			if (iVar3 < 4)
			{
				StringCopy(&cVar4, "rule", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar71[iVar3] = unk_0x05989B8A830B4E1C(iVar6, &cVar4);
				StringCopy(&cVar4, "pri", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar76[iVar3] = unk_0x05989B8A830B4E1C(iVar6, &cVar4);
				StringCopy(&cVar4, "tsp", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar81[iVar3] = unk_0x05989B8A830B4E1C(iVar6, &cVar4);
				StringCopy(&cVar4, "jtop", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar86[iVar3] = unk_0x05989B8A830B4E1C(iVar6, &cVar4);
				StringCopy(&cVar4, "jtof", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar91[iVar3] = unk_0x05989B8A830B4E1C(iVar6, &cVar4);
				StringCopy(&cVar4, "vcbf", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar96[iVar3] = unk_0x05989B8A830B4E1C(iVar6, &cVar4);
				StringCopy(&cVar4, "vcbt", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar101[iVar3] = unk_0x05989B8A830B4E1C(iVar6, &cVar4);
				StringCopy(&cVar4, "vcrr", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar106[iVar3] = unk_0x05989B8A830B4E1C(iVar6, &cVar4);
			}
			iVar3++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1632166.f_55074 - 1))
	{
		if (iVar0 < 32)
		{
			Global_1632166.f_55078[iVar0 /*137*/] = { unk_0x866B2C4E49D29F3B(iVar8, iVar0) };
			Global_1632166.f_55078[iVar0 /*137*/].f_3 = unk_0x07F84E836DFFE814(iVar9, iVar0);
			iVar2 = unk_0x6BAB52A8425E7B4B(iVar16, iVar0);
			Global_1632166.f_55078[iVar0 /*137*/].f_12 = iVar2;
			if (!func_122())
			{
				if (!unk_0xA8DA2E2DC299ED17(Global_1632166.f_55078[iVar0 /*137*/].f_12))
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_12 = joaat("baller");
				}
			}
			if (Global_1632166.f_55078[iVar0 /*137*/].f_12 == joaat("sanctus") && !Global_262145.f_14991)
			{
				Global_1632166.f_55078[iVar0 /*137*/].f_12 = joaat("akuma");
			}
			Global_1632166.f_55078[iVar0 /*137*/].f_23 = unk_0x6BAB52A8425E7B4B(iVar17, iVar0);
			Global_1632166.f_55078[iVar0 /*137*/].f_30 = unk_0x6BAB52A8425E7B4B(iVar18, iVar0);
			if (func_125())
			{
				if (((unk_0x1C9BFBB46CC94A75(iVar10, iVar0) == 3 && unk_0x1C9BFBB46CC94A75(iVar11, iVar0) == 3) && unk_0x1C9BFBB46CC94A75(iVar12, iVar0) == 2) && unk_0x1C9BFBB46CC94A75(iVar13, iVar0) == 2)
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_4 = unk_0x07F84E836DFFE814(iVar10, iVar0);
					Global_1632166.f_55078[iVar0 /*137*/].f_5 = unk_0x07F84E836DFFE814(iVar11, iVar0);
					Global_1632166.f_55078[iVar0 /*137*/].f_6 = unk_0x6BAB52A8425E7B4B(iVar12, iVar0);
					Global_1632166.f_55078[iVar0 /*137*/].f_7 = unk_0x6BAB52A8425E7B4B(iVar13, iVar0);
				}
				else
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_4 = 100f;
					Global_1632166.f_55078[iVar0 /*137*/].f_5 = 0f;
					Global_1632166.f_55078[iVar0 /*137*/].f_6 = 0;
					Global_1632166.f_55078[iVar0 /*137*/].f_7 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar14, iVar0) == 5 && unk_0x1C9BFBB46CC94A75(iVar15, iVar0) == 3)
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_8 = { unk_0x866B2C4E49D29F3B(iVar14, iVar0) };
					Global_1632166.f_55078[iVar0 /*137*/].f_11 = unk_0x07F84E836DFFE814(iVar15, iVar0);
				}
				else
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_8 = { 0f, 0f, 0f };
					Global_1632166.f_55078[iVar0 /*137*/].f_11 = 0f;
				}
				Global_1632166.f_55078[iVar0 /*137*/].f_39 = unk_0x6BAB52A8425E7B4B(iVar19, iVar0);
				Global_1632166.f_55078[iVar0 /*137*/].f_40 = unk_0x6BAB52A8425E7B4B(iVar20, iVar0);
				Global_1632166.f_55078[iVar0 /*137*/].f_41 = unk_0x6BAB52A8425E7B4B(iVar21, iVar0);
				if (unk_0x1C9BFBB46CC94A75(iVar22, iVar0) == 2)
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_76 = unk_0x6BAB52A8425E7B4B(iVar22, iVar0);
					Global_1632166.f_55078[iVar0 /*137*/].f_73 = unk_0x6BAB52A8425E7B4B(iVar23, iVar0);
					Global_1632166.f_55078[iVar0 /*137*/].f_79 = unk_0x6BAB52A8425E7B4B(iVar24, iVar0);
					Global_1632166.f_55078[iVar0 /*137*/].f_77 = unk_0x6BAB52A8425E7B4B(iVar25, iVar0);
					Global_1632166.f_55078[iVar0 /*137*/].f_74 = unk_0x6BAB52A8425E7B4B(iVar26, iVar0);
					Global_1632166.f_55078[iVar0 /*137*/].f_80 = unk_0x6BAB52A8425E7B4B(iVar27, iVar0);
					Global_1632166.f_55078[iVar0 /*137*/].f_78 = unk_0x6BAB52A8425E7B4B(iVar28, iVar0);
					Global_1632166.f_55078[iVar0 /*137*/].f_75 = unk_0x6BAB52A8425E7B4B(iVar29, iVar0);
					Global_1632166.f_55078[iVar0 /*137*/].f_81 = unk_0x6BAB52A8425E7B4B(iVar30, iVar0);
				}
				else
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_76 = -1;
					Global_1632166.f_55078[iVar0 /*137*/].f_73 = 0;
					Global_1632166.f_55078[iVar0 /*137*/].f_79 = 0;
					Global_1632166.f_55078[iVar0 /*137*/].f_77 = -1;
					Global_1632166.f_55078[iVar0 /*137*/].f_74 = 0;
					Global_1632166.f_55078[iVar0 /*137*/].f_80 = 0;
					Global_1632166.f_55078[iVar0 /*137*/].f_78 = -1;
					Global_1632166.f_55078[iVar0 /*137*/].f_75 = 0;
					Global_1632166.f_55078[iVar0 /*137*/].f_81 = 0;
				}
				Global_1632166.f_55078[iVar0 /*137*/].f_27 = unk_0x6BAB52A8425E7B4B(iVar32, iVar0);
				if (unk_0x1C9BFBB46CC94A75(iVar33, iVar0) == 2)
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_28 = unk_0x6BAB52A8425E7B4B(iVar33, iVar0);
				}
				else
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_28 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar34, iVar0) == 3)
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_29 = unk_0x07F84E836DFFE814(iVar34, iVar0);
				}
				else
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_29 = 0f;
				}
				Global_1632166.f_55078[iVar0 /*137*/].f_31 = unk_0x6BAB52A8425E7B4B(iVar38, iVar0);
				if (unk_0x1C9BFBB46CC94A75(iVar39, iVar0) == 3 && unk_0x07F84E836DFFE814(iVar39, iVar0) > 0f)
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_32 = unk_0x07F84E836DFFE814(iVar39, iVar0);
				}
				else
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_32 = 1001f;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar31, iVar0) == 3 && unk_0x07F84E836DFFE814(iVar31, iVar0) >= 0f)
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_35 = unk_0x07F84E836DFFE814(iVar31, iVar0);
				}
				else
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_35 = 1.5f;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar40, iVar0) == 3 && unk_0x07F84E836DFFE814(iVar40, iVar0) > 0f)
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_33 = unk_0x07F84E836DFFE814(iVar40, iVar0);
				}
				else
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_33 = 1001f;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar41, iVar0) == 3 && unk_0x07F84E836DFFE814(iVar41, iVar0) > 0f)
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_34 = unk_0x07F84E836DFFE814(iVar41, iVar0);
				}
				else
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_34 = 1001f;
				}
				Global_1632166.f_55078[iVar0 /*137*/].f_44 = unk_0x6BAB52A8425E7B4B(iVar42, iVar0);
				Global_1632166.f_55078[iVar0 /*137*/].f_45 = unk_0x6BAB52A8425E7B4B(iVar43, iVar0);
				if (unk_0x1C9BFBB46CC94A75(iVar44, iVar0) == 2)
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_46 = unk_0x6BAB52A8425E7B4B(iVar44, iVar0);
				}
				else
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_46 = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar45, iVar0) == 2)
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_47 = unk_0x6BAB52A8425E7B4B(iVar45, iVar0);
				}
				else
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_47 = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar46, iVar0) == 2)
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_48 = unk_0x6BAB52A8425E7B4B(iVar46, iVar0);
				}
				else
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_48 = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar35, iVar0) == 2)
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_26 = unk_0x6BAB52A8425E7B4B(iVar35, iVar0);
				}
				else
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_26 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar36, iVar0) == 2)
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_24 = unk_0x6BAB52A8425E7B4B(iVar36, iVar0);
				}
				else
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_24 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar37, iVar0) == 2)
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_25 = unk_0x6BAB52A8425E7B4B(iVar37, iVar0);
				}
				else
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_25 = -1;
				}
				Global_1632166.f_55078[iVar0 /*137*/].f_110 = unk_0x6BAB52A8425E7B4B(iVar47, iVar0);
				if (unk_0x1C9BFBB46CC94A75(iVar49, iVar0) == 2)
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_63 = unk_0x6BAB52A8425E7B4B(iVar49, iVar0);
				}
				else
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_63 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar48, iVar0) == 2)
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_64 = unk_0x6BAB52A8425E7B4B(iVar48, iVar0);
				}
				else
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_64 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar51, iVar0) == 2)
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_65 = unk_0x6BAB52A8425E7B4B(iVar51, iVar0);
				}
				else
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_65 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar50, iVar0) == 2)
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_66 = unk_0x6BAB52A8425E7B4B(iVar50, iVar0);
				}
				else
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_66 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar55, iVar0) == 2)
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_72 = unk_0x6BAB52A8425E7B4B(iVar55, iVar0);
				}
				else
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_72 = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar56, iVar0) == 2)
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_42 = unk_0x6BAB52A8425E7B4B(iVar56, iVar0);
				}
				else
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_42 = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar57, iVar0) == 2)
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_43 = unk_0x6BAB52A8425E7B4B(iVar57, iVar0);
				}
				else
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_43 = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar58, iVar0) == 2)
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_82 = unk_0x6BAB52A8425E7B4B(iVar58, iVar0);
				}
				else
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_82 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar66, iVar0) == 2)
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_100 = unk_0x6BAB52A8425E7B4B(iVar66, iVar0);
				}
				else
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_100 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar67, iVar0) == 2)
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_101 = unk_0x6BAB52A8425E7B4B(iVar67, iVar0);
				}
				else
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_101 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar59, iVar0) == 2)
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_83 = unk_0x6BAB52A8425E7B4B(iVar59, iVar0);
				}
				else
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_83 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar60, iVar0) == 2)
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_84 = unk_0x6BAB52A8425E7B4B(iVar60, iVar0);
				}
				else
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_84 = 1;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar61, iVar0) == 2)
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_97 = unk_0x6BAB52A8425E7B4B(iVar61, iVar0);
				}
				else
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_97 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar62, iVar0) == 2)
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_98 = unk_0x6BAB52A8425E7B4B(iVar62, iVar0);
				}
				else
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_98 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar63, iVar0) == 2)
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_99 = unk_0x6BAB52A8425E7B4B(iVar63, iVar0);
				}
				else
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_99 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar52, iVar0) == 2)
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_50 = unk_0x6BAB52A8425E7B4B(iVar52, iVar0);
				}
				else
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_50 = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar53, iVar0) == 2)
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_51 = unk_0x6BAB52A8425E7B4B(iVar53, iVar0);
				}
				else
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_51 = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar54, iVar0) == 2)
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_52 = unk_0x6BAB52A8425E7B4B(iVar54, iVar0);
				}
				else
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_52 = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar68, iVar0) == 2)
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_38 = unk_0x6BAB52A8425E7B4B(iVar68, iVar0);
				}
				else
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_38 = 0;
				}
				if (Global_1632166.f_2 != 6 && unk_0x1C9BFBB46CC94A75(iVar64, iVar0) == 2)
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_108 = unk_0x6BAB52A8425E7B4B(iVar64, iVar0);
				}
				else
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_108 = -1;
				}
				if (Global_1632166.f_2 != 6 && unk_0x1C9BFBB46CC94A75(iVar65, iVar0) == 2)
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_109 = unk_0x6BAB52A8425E7B4B(iVar65, iVar0);
				}
				else
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_109 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar69, iVar0) == 2)
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_95 = unk_0x6BAB52A8425E7B4B(iVar69, iVar0);
				}
				else
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_95 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar70, iVar0) == 2)
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_96 = unk_0x6BAB52A8425E7B4B(iVar70, iVar0);
				}
				else
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_96 = -1;
				}
				iVar1 = 0;
				while (iVar1 <= 1)
				{
					if (unk_0x1C9BFBB46CC94A75(uVar111[iVar1], iVar0) == 5)
					{
						Global_1632166.f_55078[iVar0 /*137*/].f_112[iVar1 /*3*/] = { unk_0x866B2C4E49D29F3B(uVar111[iVar1], iVar0) };
					}
					else
					{
						Global_1632166.f_55078[iVar0 /*137*/].f_112[iVar1 /*3*/] = { 0f, 0f, 0f };
					}
					if (unk_0x1C9BFBB46CC94A75(uVar114[iVar1], iVar0) == 3)
					{
						Global_1632166.f_55078[iVar0 /*137*/].f_119[iVar1] = unk_0x07F84E836DFFE814(uVar114[iVar1], iVar0);
					}
					else
					{
						Global_1632166.f_55078[iVar0 /*137*/].f_119[iVar1] = 0f;
					}
					iVar1++;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar117, iVar0) == 2)
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_111 = unk_0x6BAB52A8425E7B4B(iVar117, iVar0);
				}
				else
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_111 = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar118, iVar0) == 2)
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_122 = unk_0x6BAB52A8425E7B4B(iVar118, iVar0);
				}
				else
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_122 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar119, iVar0) == 2)
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_131 = unk_0x6BAB52A8425E7B4B(iVar119, iVar0);
				}
				else
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_131 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar120, iVar0) == 2)
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_127 = unk_0x6BAB52A8425E7B4B(iVar120, iVar0);
				}
				else
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_127 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar121, iVar0) == 5)
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_128 = { unk_0x866B2C4E49D29F3B(iVar121, iVar0) };
				}
				else
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_128 = { 0f, 0f, 0f };
				}
				if (unk_0x1C9BFBB46CC94A75(iVar122, iVar0) == 3)
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_124 = unk_0x07F84E836DFFE814(iVar122, iVar0);
				}
				else
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_124 = -1f;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar128, iVar0) == 2)
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_125 = unk_0x6BAB52A8425E7B4B(iVar128, iVar0);
				}
				else
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_125 = 10;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar123, iVar0) == 2)
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_123 = unk_0x6BAB52A8425E7B4B(iVar123, iVar0);
				}
				else
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_123 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar124, iVar0) == 2)
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_126 = unk_0x6BAB52A8425E7B4B(iVar124, iVar0);
				}
				else
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_126 = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar125, iVar0) == 2)
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_36 = unk_0x6BAB52A8425E7B4B(iVar125, iVar0);
				}
				else
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_36 = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar126, iVar0) == 2)
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_37 = unk_0x6BAB52A8425E7B4B(iVar126, iVar0);
				}
				else
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_37 = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar127, iVar0) == 2)
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_136 = unk_0x6BAB52A8425E7B4B(iVar127, iVar0);
				}
				else
				{
					Global_1632166.f_55078[iVar0 /*137*/].f_136 = 0;
				}
				iVar3 = 0;
				while (iVar3 <= (Global_1632166.f_29 - 1))
				{
					if (iVar3 < 4)
					{
						Global_1632166.f_55078[iVar0 /*137*/].f_13[iVar3] = unk_0x6BAB52A8425E7B4B(uVar71[iVar3], iVar0);
						Global_1632166.f_55078[iVar0 /*137*/].f_18[iVar3] = unk_0x6BAB52A8425E7B4B(uVar76[iVar3], iVar0);
						if (Global_1632166.f_55078[iVar0 /*137*/].f_18[iVar3] == -1)
						{
							Global_1632166.f_55078[iVar0 /*137*/].f_18[iVar3] = 99999;
						}
						if (unk_0x1C9BFBB46CC94A75(uVar81[iVar3], iVar0) == 2)
						{
							Global_1632166.f_55078[iVar0 /*137*/].f_102[iVar3] = unk_0x6BAB52A8425E7B4B(uVar81[iVar3], iVar0);
						}
						else
						{
							Global_1632166.f_55078[iVar0 /*137*/].f_102[iVar3] = 0;
						}
						if (unk_0x1C9BFBB46CC94A75(uVar86[iVar3], iVar0) == 2)
						{
							Global_1632166.f_55078[iVar0 /*137*/].f_85[iVar3] = unk_0x6BAB52A8425E7B4B(uVar86[iVar3], iVar0);
						}
						else
						{
							Global_1632166.f_55078[iVar0 /*137*/].f_85[iVar3] = 0;
						}
						if (unk_0x1C9BFBB46CC94A75(uVar91[iVar3], iVar0) == 2)
						{
							Global_1632166.f_55078[iVar0 /*137*/].f_90[iVar3] = unk_0x6BAB52A8425E7B4B(uVar91[iVar3], iVar0);
						}
						else
						{
							Global_1632166.f_55078[iVar0 /*137*/].f_90[iVar3] = 0;
						}
						if (unk_0x1C9BFBB46CC94A75(uVar96[iVar3], iVar0) == 2)
						{
							Global_1632166.f_55078[iVar0 /*137*/].f_53[iVar3] = unk_0x6BAB52A8425E7B4B(uVar96[iVar3], iVar0);
						}
						else
						{
							Global_1632166.f_55078[iVar0 /*137*/].f_53[iVar3] = -1;
						}
						if (unk_0x1C9BFBB46CC94A75(uVar101[iVar3], iVar0) == 2)
						{
							Global_1632166.f_55078[iVar0 /*137*/].f_58[iVar3] = unk_0x6BAB52A8425E7B4B(uVar101[iVar3], iVar0);
						}
						else
						{
							Global_1632166.f_55078[iVar0 /*137*/].f_58[iVar3] = -1;
						}
						if (unk_0x1C9BFBB46CC94A75(uVar106[iVar3], iVar0) == 2)
						{
							Global_1632166.f_55078[iVar0 /*137*/].f_67[iVar3] = unk_0x6BAB52A8425E7B4B(uVar106[iVar3], iVar0);
						}
						else
						{
							Global_1632166.f_55078[iVar0 /*137*/].f_67[iVar3] = 0;
						}
					}
					iVar3++;
				}
			}
		}
		iVar0++;
	}
}

void func_181(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
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
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	
	iVar5 = unk_0x4C4E1CA899A313BB(iParam0, "weap");
	Global_1632166.f_52628 = unk_0x4985D6D7F7AB891A(iVar5, "no");
	if (Global_1632166 == 0)
	{
		if (Global_1632166.f_52628 > 60)
		{
			Global_1632166.f_52628 = 60;
		}
	}
	else if (Global_1632166.f_52628 > 60)
	{
		Global_1632166.f_52628 = 60;
	}
	Global_1632166.f_52630 = unk_0x4985D6D7F7AB891A(iVar5, "time");
	Global_1632166.f_52631 = unk_0x4985D6D7F7AB891A(iVar5, "pal");
	Global_1632166.f_52 = unk_0x4985D6D7F7AB891A(iVar5, "blip");
	iVar6 = unk_0x05989B8A830B4E1C(iVar5, "loc");
	iVar7 = unk_0x05989B8A830B4E1C(iVar5, "head");
	iVar8 = unk_0x05989B8A830B4E1C(iVar5, "type");
	iVar9 = unk_0x05989B8A830B4E1C(iVar5, "sub");
	iVar10 = unk_0x05989B8A830B4E1C(iVar5, "bits");
	iVar11 = unk_0x05989B8A830B4E1C(iVar5, "clip");
	iVar12 = unk_0x05989B8A830B4E1C(iVar5, "brest1");
	iVar13 = unk_0x05989B8A830B4E1C(iVar5, "brest2");
	iVar14 = unk_0x05989B8A830B4E1C(iVar5, "brest3");
	iVar15 = unk_0x05989B8A830B4E1C(iVar5, "brest4");
	iVar16 = unk_0x05989B8A830B4E1C(iVar5, "dmgmult");
	iVar17 = unk_0x05989B8A830B4E1C(iVar5, "rput");
	iVar18 = unk_0x05989B8A830B4E1C(iVar5, "vput");
	iVar19 = unk_0x05989B8A830B4E1C(iVar5, "vasst");
	iVar20 = unk_0x05989B8A830B4E1C(iVar5, "vasso");
	iVar21 = unk_0x05989B8A830B4E1C(iVar5, "vasss");
	iVar22 = unk_0x05989B8A830B4E1C(iVar5, "vasst2");
	iVar23 = unk_0x05989B8A830B4E1C(iVar5, "vasso2");
	iVar24 = unk_0x05989B8A830B4E1C(iVar5, "vasss2");
	iVar25 = unk_0x05989B8A830B4E1C(iVar5, "vasst3");
	iVar26 = unk_0x05989B8A830B4E1C(iVar5, "vasso3");
	iVar27 = unk_0x05989B8A830B4E1C(iVar5, "vasss3");
	iVar28 = unk_0x05989B8A830B4E1C(iVar5, "vasst4");
	iVar29 = unk_0x05989B8A830B4E1C(iVar5, "vasso4");
	iVar30 = unk_0x05989B8A830B4E1C(iVar5, "vasss4");
	iVar31 = unk_0x05989B8A830B4E1C(iVar5, "vclnr");
	iVar32 = unk_0x05989B8A830B4E1C(iVar5, "vclnt");
	iVar33 = unk_0x05989B8A830B4E1C(iVar5, "vclnrl");
	iVar34 = unk_0x05989B8A830B4E1C(iVar5, "ipdi");
	Global_1632166.f_55073 = unk_0x1DCCD87216370AE6(iVar5, "randtyp");
	iVar0 = 0;
	while (iVar0 <= (Global_1632166.f_52628 - 1))
	{
		if (iVar0 < 60)
		{
			Global_1632166.f_52632[iVar0 /*40*/] = { unk_0x866B2C4E49D29F3B(iVar6, iVar0) };
			Global_1632166.f_52632[iVar0 /*40*/].f_3 = unk_0x07F84E836DFFE814(iVar7, iVar0);
			iVar1 = unk_0x6BAB52A8425E7B4B(iVar8, iVar0);
			Global_1632166.f_52632[iVar0 /*40*/].f_13 = iVar1;
			if (!func_182(Global_1632166.f_52632[iVar0 /*40*/].f_13))
			{
				if (Global_1632166.f_52632[iVar0 /*40*/].f_13 == joaat("pickup_weapon_marksmanrifle"))
				{
					Global_1632166.f_52632[iVar0 /*40*/].f_13 = joaat("pickup_weapon_sniperrifle");
				}
				else
				{
					Global_1632166.f_52632[iVar0 /*40*/].f_13 = joaat("pickup_weapon_pistol");
				}
			}
			Global_1632166.f_52632[iVar0 /*40*/].f_4 = unk_0x6BAB52A8425E7B4B(iVar9, iVar0);
			Global_1632166.f_52632[iVar0 /*40*/].f_6 = unk_0x6BAB52A8425E7B4B(iVar10, iVar0);
			Global_1632166.f_52632[iVar0 /*40*/].f_5 = unk_0x6BAB52A8425E7B4B(iVar11, iVar0);
			Global_1632166.f_52632[iVar0 /*40*/].f_21 = unk_0x6BAB52A8425E7B4B(iVar17, iVar0);
			Global_1632166.f_52632[iVar0 /*40*/].f_22 = unk_0x6BAB52A8425E7B4B(iVar18, iVar0);
			Global_1632166.f_52632[iVar0 /*40*/].f_39 = unk_0x6BAB52A8425E7B4B(iVar34, iVar0);
			if (unk_0x1C9BFBB46CC94A75(iVar12, iVar0) == 1)
			{
				Global_1632166.f_52632[iVar0 /*40*/].f_8[0] = unk_0x1443290B580EC8DD(iVar12, iVar0);
			}
			else
			{
				Global_1632166.f_52632[iVar0 /*40*/].f_8[0] = 0;
			}
			if (unk_0x1C9BFBB46CC94A75(iVar13, iVar0) == 1)
			{
				Global_1632166.f_52632[iVar0 /*40*/].f_8[1] = unk_0x1443290B580EC8DD(iVar13, iVar0);
			}
			else
			{
				Global_1632166.f_52632[iVar0 /*40*/].f_8[1] = 0;
			}
			if (unk_0x1C9BFBB46CC94A75(iVar14, iVar0) == 1)
			{
				Global_1632166.f_52632[iVar0 /*40*/].f_8[2] = unk_0x1443290B580EC8DD(iVar14, iVar0);
			}
			else
			{
				Global_1632166.f_52632[iVar0 /*40*/].f_8[2] = 0;
			}
			if (unk_0x1C9BFBB46CC94A75(iVar15, iVar0) == 1)
			{
				Global_1632166.f_52632[iVar0 /*40*/].f_8[3] = unk_0x1443290B580EC8DD(iVar15, iVar0);
			}
			else
			{
				Global_1632166.f_52632[iVar0 /*40*/].f_8[3] = 0;
			}
			if (unk_0x1C9BFBB46CC94A75(iVar16, iVar0) == 3)
			{
				Global_1632166.f_52632[iVar0 /*40*/].f_7 = unk_0x07F84E836DFFE814(iVar16, iVar0);
			}
			else
			{
				Global_1632166.f_52632[iVar0 /*40*/].f_7 = 1f;
			}
			if (unk_0x1C9BFBB46CC94A75(iVar17, iVar0) == 2)
			{
				Global_1632166.f_52632[iVar0 /*40*/].f_21 = unk_0x6BAB52A8425E7B4B(iVar17, iVar0);
			}
			else
			{
				Global_1632166.f_52632[iVar0 /*40*/].f_21 = -1;
			}
			if (unk_0x1C9BFBB46CC94A75(iVar34, iVar0) == 2)
			{
				Global_1632166.f_52632[iVar0 /*40*/].f_39 = unk_0x6BAB52A8425E7B4B(iVar34, iVar0);
			}
			else
			{
				Global_1632166.f_52632[iVar0 /*40*/].f_39 = 0;
			}
			if (unk_0x1C9BFBB46CC94A75(iVar18, iVar0) == 2)
			{
				Global_1632166.f_52632[iVar0 /*40*/].f_22 = unk_0x6BAB52A8425E7B4B(iVar18, iVar0);
			}
			else
			{
				Global_1632166.f_52632[iVar0 /*40*/].f_22 = -1;
			}
			if (func_125())
			{
				if (unk_0x1C9BFBB46CC94A75(iVar33, iVar0) == 2)
				{
					Global_1632166.f_52632[iVar0 /*40*/].f_27 = unk_0x6BAB52A8425E7B4B(iVar33, iVar0);
				}
				else
				{
					Global_1632166.f_52632[iVar0 /*40*/].f_27 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar32, iVar0) == 2)
				{
					Global_1632166.f_52632[iVar0 /*40*/].f_28 = unk_0x6BAB52A8425E7B4B(iVar32, iVar0);
				}
				else
				{
					Global_1632166.f_52632[iVar0 /*40*/].f_28 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar31, iVar0) == 2)
				{
					Global_1632166.f_52632[iVar0 /*40*/].f_29 = unk_0x6BAB52A8425E7B4B(iVar31, iVar0);
				}
				else
				{
					Global_1632166.f_52632[iVar0 /*40*/].f_29 = 0;
				}
				Global_1632166.f_52632[iVar0 /*40*/].f_24 = unk_0x6BAB52A8425E7B4B(iVar19, iVar0);
				Global_1632166.f_52632[iVar0 /*40*/].f_25 = unk_0x6BAB52A8425E7B4B(iVar20, iVar0);
				Global_1632166.f_52632[iVar0 /*40*/].f_26 = unk_0x6BAB52A8425E7B4B(iVar21, iVar0);
				if (Global_1632166.f_52632[iVar0 /*40*/].f_26 == -1)
				{
					Global_1632166.f_52632[iVar0 /*40*/].f_26 = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar23, iVar0) == 2)
				{
					Global_1632166.f_52632[iVar0 /*40*/].f_33 = unk_0x6BAB52A8425E7B4B(iVar22, iVar0);
					Global_1632166.f_52632[iVar0 /*40*/].f_30 = unk_0x6BAB52A8425E7B4B(iVar23, iVar0);
					Global_1632166.f_52632[iVar0 /*40*/].f_36 = unk_0x6BAB52A8425E7B4B(iVar24, iVar0);
					Global_1632166.f_52632[iVar0 /*40*/].f_34 = unk_0x6BAB52A8425E7B4B(iVar25, iVar0);
					Global_1632166.f_52632[iVar0 /*40*/].f_31 = unk_0x6BAB52A8425E7B4B(iVar26, iVar0);
					Global_1632166.f_52632[iVar0 /*40*/].f_37 = unk_0x6BAB52A8425E7B4B(iVar27, iVar0);
					Global_1632166.f_52632[iVar0 /*40*/].f_35 = unk_0x6BAB52A8425E7B4B(iVar28, iVar0);
					Global_1632166.f_52632[iVar0 /*40*/].f_32 = unk_0x6BAB52A8425E7B4B(iVar29, iVar0);
					Global_1632166.f_52632[iVar0 /*40*/].f_38 = unk_0x6BAB52A8425E7B4B(iVar30, iVar0);
				}
				else
				{
					Global_1632166.f_52632[iVar0 /*40*/].f_33 = -1;
					Global_1632166.f_52632[iVar0 /*40*/].f_30 = 0;
					Global_1632166.f_52632[iVar0 /*40*/].f_36 = 0;
					Global_1632166.f_52632[iVar0 /*40*/].f_34 = -1;
					Global_1632166.f_52632[iVar0 /*40*/].f_31 = 0;
					Global_1632166.f_52632[iVar0 /*40*/].f_37 = 0;
					Global_1632166.f_52632[iVar0 /*40*/].f_35 = -1;
					Global_1632166.f_52632[iVar0 /*40*/].f_32 = 0;
					Global_1632166.f_52632[iVar0 /*40*/].f_38 = 0;
				}
			}
			StringCopy(&cVar3, "comps", 8);
			StringIntConCat(&cVar3, iVar0, 8);
			iVar35 = unk_0x05989B8A830B4E1C(iVar5, &cVar3);
			iVar2 = 0;
			while (iVar2 <= 5)
			{
				if (unk_0x1C9BFBB46CC94A75(iVar35, iVar2) == 2)
				{
					Global_1632166.f_52632[iVar0 /*40*/].f_14[iVar2] = unk_0x6BAB52A8425E7B4B(iVar35, iVar2);
				}
				else
				{
					Global_1632166.f_52632[iVar0 /*40*/].f_14[iVar2] = 0;
				}
				iVar2++;
			}
		}
		iVar0++;
	}
}

int func_182(int iParam0)
{
	switch (iParam0)
	{
		case joaat("pickup_health_standard"):
		case joaat("pickup_armour_standard"):
		case joaat("pickup_health_snack"):
		case joaat("pickup_money_variable"):
		case joaat("pickup_money_case"):
		case joaat("pickup_money_wallet"):
		case joaat("pickup_money_purse"):
		case joaat("pickup_money_dep_bag"):
		case joaat("pickup_money_med_bag"):
		case joaat("pickup_money_paper_bag"):
		case joaat("pickup_money_security_case"):
		case joaat("pickup_gang_attack_money"):
		case joaat("pickup_weapon_pistol"):
		case joaat("pickup_weapon_combatpistol"):
		case joaat("pickup_weapon_pistol50"):
		case joaat("pickup_weapon_appistol"):
		case joaat("pickup_weapon_microsmg"):
		case joaat("pickup_weapon_smg"):
		case joaat("pickup_weapon_assaultsmg"):
		case joaat("pickup_weapon_assaultrifle"):
		case joaat("pickup_weapon_carbinerifle"):
		case 1491498856:
		case joaat("pickup_weapon_advancedrifle"):
		case joaat("pickup_weapon_mg"):
		case joaat("pickup_weapon_combatmg"):
		case 975696266:
		case joaat("pickup_weapon_pumpshotgun"):
		case joaat("pickup_weapon_sawnoffshotgun"):
		case joaat("pickup_weapon_assaultshotgun"):
		case joaat("pickup_weapon_sniperrifle"):
		case 1061513000:
		case joaat("pickup_weapon_heavysniper"):
		case joaat("pickup_weapon_grenadelauncher"):
		case joaat("pickup_weapon_rpg"):
		case joaat("pickup_weapon_minigun"):
		case joaat("pickup_weapon_grenade"):
		case joaat("pickup_weapon_smokegrenade"):
		case joaat("pickup_weapon_stickybomb"):
		case joaat("pickup_weapon_molotov"):
		case joaat("pickup_weapon_stungun"):
		case -660082779:
		case -695202657:
		case joaat("pickup_weapon_fireextinguisher"):
		case joaat("pickup_weapon_petrolcan"):
		case joaat("pickup_weapon_loudhailer"):
		case joaat("pickup_weapon_knife"):
		case joaat("pickup_weapon_nightstick"):
		case joaat("pickup_weapon_hammer"):
		case joaat("pickup_weapon_bat"):
		case joaat("pickup_weapon_crowbar"):
		case joaat("pickup_weapon_golfclub"):
		case joaat("pickup_ammo_bullet_mp"):
		case joaat("pickup_ammo_missile_mp"):
		case joaat("pickup_ammo_grenadelauncher_mp"):
		case joaat("pickup_ammo_pistol"):
		case joaat("pickup_ammo_smg"):
		case joaat("pickup_ammo_rifle"):
		case joaat("pickup_ammo_mg"):
		case joaat("pickup_ammo_shotgun"):
			return 1;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("pickup_ammo_sniper"):
		case joaat("pickup_ammo_grenadelauncher"):
		case joaat("pickup_ammo_rpg"):
		case joaat("pickup_ammo_minigun"):
		case 610630637:
		case -1883407879:
		case joaat("pickup_ammo_flaregun"):
		case joaat("pickup_ammo_firework"):
		case -1892342586:
		case 2001257022:
		case joaat("pickup_vehicle_health_standard"):
		case joaat("pickup_vehicle_health_standard_low_glow"):
		case joaat("pickup_vehicle_armour_standard"):
		case joaat("pickup_vehicle_weapon_pistol"):
		case joaat("pickup_vehicle_weapon_combatpistol"):
		case joaat("pickup_vehicle_weapon_pistol50"):
		case joaat("pickup_vehicle_weapon_appistol"):
		case joaat("pickup_vehicle_weapon_microsmg"):
		case joaat("pickup_vehicle_weapon_smg"):
		case joaat("pickup_vehicle_weapon_sawnoff"):
		case joaat("pickup_vehicle_weapon_assaultsmg"):
		case joaat("pickup_vehicle_weapon_grenade"):
		case joaat("pickup_vehicle_weapon_smokegrenade"):
		case joaat("pickup_vehicle_weapon_stickybomb"):
		case joaat("pickup_vehicle_weapon_molotov"):
		case joaat("pickup_vehicle_custom_script"):
		case joaat("pickup_vehicle_custom_script_low_glow"):
		case joaat("pickup_vehicle_money_variable"):
		case joaat("pickup_portable_crate_unfixed"):
		case joaat("pickup_portable_crate_unfixed_low_glow"):
		case joaat("pickup_portable_package"):
		case joaat("pickup_portable_dlc_vehicle_package"):
		case joaat("pickup_submarine"):
		case joaat("pickup_parachute"):
		case joaat("pickup_custom_script"):
		case joaat("pickup_handcuff_key"):
		case joaat("pickup_camera"):
		case joaat("pickup_weapon_bottle"):
		case joaat("pickup_weapon_specialcarbine"):
		case joaat("pickup_weapon_snspistol"):
		case joaat("pickup_weapon_bullpuprifle"):
		case joaat("pickup_weapon_heavypistol"):
		case joaat("pickup_weapon_dagger"):
		case joaat("pickup_weapon_vintagepistol"):
		case joaat("pickup_weapon_gusenberg"):
		case joaat("pickup_weapon_firework"):
		case joaat("pickup_weapon_musket"):
		case joaat("pickup_weapon_hominglauncher"):
		case joaat("pickup_weapon_proxmine"):
		case joaat("pickup_weapon_hatchet"):
		case joaat("pickup_weapon_railgun"):
		case joaat("pickup_weapon_flaregun"):
		case joaat("pickup_weapon_bullpupshotgun"):
		case joaat("pickup_weapon_machinepistol"):
		case joaat("pickup_weapon_marksmanpistol"):
		case joaat("pickup_weapon_heavyshotgun"):
		case joaat("pickup_weapon_marksmanrifle"):
		case joaat("pickup_weapon_compactrifle"):
		case joaat("pickup_weapon_dbshotgun"):
		case joaat("pickup_weapon_machete"):
		case joaat("pickup_weapon_flashlight"):
		case joaat("pickup_weapon_knuckle"):
		case joaat("pickup_weapon_combatpdw"):
		case joaat("pickup_weapon_switchblade"):
		case joaat("pickup_weapon_revolver"):
		case joaat("pickup_weapon_autoshotgun"):
		case joaat("pickup_weapon_minismg"):
		case joaat("pickup_weapon_compactlauncher"):
		case joaat("pickup_weapon_pipebomb"):
		case joaat("pickup_weapon_poolcue"):
		case joaat("pickup_weapon_battleaxe"):
		case joaat("pickup_weapon_wrench"):
			return 1;
		
		default:
	}
	return 0;
}

void func_183(int iParam0)
{
	int iVar0;
	int iVar1;
	char[] cVar2[8];
	int iVar4;
	var uVar5[10];
	var uVar16[10];
	var uVar27[10];
	var uVar38[10];
	
	if (unk_0x4C4E1CA899A313BB(iParam0, "ptemp") == 0)
	{
		return;
	}
	iVar4 = unk_0x4C4E1CA899A313BB(iParam0, "ptemp");
	Global_1632166.f_105211 = unk_0x4985D6D7F7AB891A(iVar4, "no");
	iVar0 = 0;
	while (iVar0 <= (Global_1632166.f_105211 - 1))
	{
		StringCopy(&cVar2, "pto", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar5[iVar0] = unk_0x05989B8A830B4E1C(iVar4, &cVar2);
		StringCopy(&cVar2, "ptr", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar16[iVar0] = unk_0x05989B8A830B4E1C(iVar4, &cVar2);
		StringCopy(&cVar2, "ptm", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar27[iVar0] = unk_0x05989B8A830B4E1C(iVar4, &cVar2);
		StringCopy(&cVar2, "ptc", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar38[iVar0] = unk_0x05989B8A830B4E1C(iVar4, &cVar2);
		iVar1 = 0;
		while (iVar1 <= 29)
		{
			if (unk_0x1C9BFBB46CC94A75(uVar5[iVar0], iVar1) == 5)
			{
				Global_1632166.f_102770[iVar0 /*244*/][iVar1 /*3*/] = { unk_0x866B2C4E49D29F3B(uVar5[iVar0], iVar1) };
			}
			else
			{
				Global_1632166.f_102770[iVar0 /*244*/][iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x1C9BFBB46CC94A75(uVar16[iVar0], iVar1) == 5)
			{
				Global_1632166.f_102770[iVar0 /*244*/].f_91[iVar1 /*3*/] = { unk_0x866B2C4E49D29F3B(uVar16[iVar0], iVar1) };
			}
			else
			{
				Global_1632166.f_102770[iVar0 /*244*/].f_91[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x1C9BFBB46CC94A75(uVar27[iVar0], iVar1) == 2)
			{
				Global_1632166.f_102770[iVar0 /*244*/].f_182[iVar1] = unk_0x6BAB52A8425E7B4B(uVar27[iVar0], iVar1);
			}
			else
			{
				Global_1632166.f_102770[iVar0 /*244*/].f_182[iVar1] = 0;
			}
			if (unk_0x1C9BFBB46CC94A75(uVar38[iVar0], iVar1) == 2)
			{
				Global_1632166.f_102770[iVar0 /*244*/].f_213[iVar1] = unk_0x6BAB52A8425E7B4B(uVar38[iVar0], iVar1);
			}
			else
			{
				Global_1632166.f_102770[iVar0 /*244*/].f_213[iVar1] = 0;
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_184(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
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
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
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
	int iVar57;
	int iVar58;
	int iVar59;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	var uVar65[4];
	var uVar70[4];
	var uVar75[4];
	var uVar80[4];
	
	iVar5 = unk_0x4C4E1CA899A313BB(iParam0, "obj");
	Global_1632166.f_40786 = unk_0x4985D6D7F7AB891A(iVar5, "no");
	Global_1632166.f_40787 = unk_0x4985D6D7F7AB891A(iVar5, "pal");
	Global_1632166.f_40788 = unk_0x4985D6D7F7AB891A(iVar5, "rtm");
	iVar6 = unk_0x05989B8A830B4E1C(iVar5, "loc");
	iVar7 = unk_0x05989B8A830B4E1C(iVar5, "head");
	iVar15 = unk_0x05989B8A830B4E1C(iVar5, "model");
	iVar16 = unk_0x05989B8A830B4E1C(iVar5, "ped");
	iVar17 = unk_0x05989B8A830B4E1C(iVar5, "rsp");
	iVar18 = unk_0x05989B8A830B4E1C(iVar5, "rot");
	iVar19 = unk_0x05989B8A830B4E1C(iVar5, "cont");
	iVar20 = unk_0x05989B8A830B4E1C(iVar5, "valu");
	iVar21 = unk_0x05989B8A830B4E1C(iVar5, "ammoforwep");
	iVar22 = unk_0x05989B8A830B4E1C(iVar5, "cpup");
	iVar23 = unk_0x05989B8A830B4E1C(iVar5, "cpupr");
	iVar24 = unk_0x05989B8A830B4E1C(iVar5, "cpupt");
	iVar25 = unk_0x05989B8A830B4E1C(iVar5, "bits");
	iVar27 = unk_0x05989B8A830B4E1C(iVar5, "oiet");
	iVar28 = unk_0x05989B8A830B4E1C(iVar5, "ospl");
	iVar29 = unk_0x05989B8A830B4E1C(iVar5, "dspn");
	if (func_125())
	{
		iVar8 = unk_0x05989B8A830B4E1C(iVar5, "obrr");
		iVar9 = unk_0x05989B8A830B4E1C(iVar5, "obrmr");
		iVar10 = unk_0x05989B8A830B4E1C(iVar5, "osnt");
		iVar11 = unk_0x05989B8A830B4E1C(iVar5, "osnei");
		iVar14 = unk_0x05989B8A830B4E1C(iVar5, "objbr");
		iVar12 = unk_0x05989B8A830B4E1C(iVar5, "o2sp");
		iVar13 = unk_0x05989B8A830B4E1C(iVar5, "o2sh");
		iVar26 = unk_0x05989B8A830B4E1C(iVar5, "mgbs");
		iVar30 = unk_0x05989B8A830B4E1C(iVar5, "objct");
		iVar31 = unk_0x05989B8A830B4E1C(iVar5, "team");
		iVar32 = unk_0x05989B8A830B4E1C(iVar5, "spwn");
		iVar33 = unk_0x05989B8A830B4E1C(iVar5, "objct2");
		iVar34 = unk_0x05989B8A830B4E1C(iVar5, "team2");
		iVar35 = unk_0x05989B8A830B4E1C(iVar5, "spwn2");
		iVar36 = unk_0x05989B8A830B4E1C(iVar5, "objct3");
		iVar37 = unk_0x05989B8A830B4E1C(iVar5, "team3");
		iVar38 = unk_0x05989B8A830B4E1C(iVar5, "spwn3");
		iVar39 = unk_0x05989B8A830B4E1C(iVar5, "objct4");
		iVar40 = unk_0x05989B8A830B4E1C(iVar5, "team4");
		iVar41 = unk_0x05989B8A830B4E1C(iVar5, "spwn4");
		iVar42 = unk_0x05989B8A830B4E1C(iVar5, "hlt");
		iVar43 = unk_0x05989B8A830B4E1C(iVar5, "obb");
		iVar44 = unk_0x05989B8A830B4E1C(iVar5, "obbc");
		iVar45 = unk_0x05989B8A830B4E1C(iVar5, "objclt");
		iVar46 = unk_0x05989B8A830B4E1C(iVar5, "objcr");
		iVar47 = unk_0x05989B8A830B4E1C(iVar5, "obcra");
		iVar48 = unk_0x05989B8A830B4E1C(iVar5, "ospdl");
		iVar49 = unk_0x05989B8A830B4E1C(iVar5, "osgr");
		iVar50 = unk_0x05989B8A830B4E1C(iVar5, "ossgr");
		iVar51 = unk_0x05989B8A830B4E1C(iVar5, "objcnm");
		iVar52 = unk_0x05989B8A830B4E1C(iVar5, "objap");
		iVar53 = unk_0x05989B8A830B4E1C(iVar5, "objapt");
		iVar54 = unk_0x05989B8A830B4E1C(iVar5, "obint");
		iVar55 = unk_0x05989B8A830B4E1C(iVar5, "obrom");
		iVar56 = unk_0x05989B8A830B4E1C(iVar5, "inco");
		iVar57 = unk_0x05989B8A830B4E1C(iVar5, "inhsh");
		iVar58 = unk_0x05989B8A830B4E1C(iVar5, "vehpu");
		iVar59 = unk_0x05989B8A830B4E1C(iVar5, "airpu");
		iVar62 = unk_0x05989B8A830B4E1C(iVar5, "gotor");
		iVar63 = unk_0x05989B8A830B4E1C(iVar5, "nmpass");
		iVar64 = unk_0x05989B8A830B4E1C(iVar5, "nmfail");
		iVar60 = unk_0x05989B8A830B4E1C(iVar5, "omcp");
		iVar61 = unk_0x05989B8A830B4E1C(iVar5, "omcf");
		iVar2 = 0;
		while (iVar2 <= (Global_1632166.f_29 - 1))
		{
			if (iVar2 < 4)
			{
				StringCopy(&cVar3, "rule", 8);
				StringIntConCat(&cVar3, iVar2, 8);
				uVar65[iVar2] = unk_0x05989B8A830B4E1C(iVar5, &cVar3);
				StringCopy(&cVar3, "pri", 8);
				StringIntConCat(&cVar3, iVar2, 8);
				uVar70[iVar2] = unk_0x05989B8A830B4E1C(iVar5, &cVar3);
				StringCopy(&cVar3, "jtop", 8);
				StringIntConCat(&cVar3, iVar2, 8);
				uVar75[iVar2] = unk_0x05989B8A830B4E1C(iVar5, &cVar3);
				StringCopy(&cVar3, "jtof", 8);
				StringIntConCat(&cVar3, iVar2, 8);
				uVar80[iVar2] = unk_0x05989B8A830B4E1C(iVar5, &cVar3);
			}
			iVar2++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1632166.f_40786 - 1))
	{
		if (iVar0 < 20)
		{
			Global_1632166.f_40789[iVar0 /*92*/] = { unk_0x866B2C4E49D29F3B(iVar6, iVar0) };
			Global_1632166.f_40789[iVar0 /*92*/].f_3 = unk_0x07F84E836DFFE814(iVar7, iVar0);
			iVar1 = unk_0x6BAB52A8425E7B4B(iVar15, iVar0);
			Global_1632166.f_40789[iVar0 /*92*/].f_16 = iVar1;
			if (Global_1632166.f_40789[iVar0 /*92*/].f_16 == joaat("hei_prop_bank_cctv_02"))
			{
				Global_1632166.f_40789[iVar0 /*92*/].f_16 = joaat("hei_prop_bank_cctv_01");
			}
			if (!unk_0xA8DA2E2DC299ED17(Global_1632166.f_40789[iVar0 /*92*/].f_16))
			{
				Global_1632166.f_40789[iVar0 /*92*/].f_16 = joaat("prop_drug_package");
			}
			if (Global_1632166.f_40789[iVar0 /*92*/].f_16 == joaat("prop_cctv_cam_06a"))
			{
				Global_1632166.f_40789[iVar0 /*92*/].f_16 = joaat("hei_prop_bank_cctv_01");
			}
			if (Global_1632166.f_40789[iVar0 /*92*/].f_16 == joaat("prop_cctv_cam_07a"))
			{
				Global_1632166.f_40789[iVar0 /*92*/].f_16 = joaat("hei_prop_bank_cctv_02");
			}
			Global_1632166.f_40789[iVar0 /*92*/].f_27 = unk_0x6BAB52A8425E7B4B(iVar17, iVar0);
			Global_1632166.f_40789[iVar0 /*92*/].f_4 = { unk_0x866B2C4E49D29F3B(iVar18, iVar0) };
			Global_1632166.f_40789[iVar0 /*92*/].f_31 = unk_0x6BAB52A8425E7B4B(iVar16, iVar0);
			Global_1632166.f_40789[iVar0 /*92*/].f_45 = unk_0x6BAB52A8425E7B4B(iVar19, iVar0);
			Global_1632166.f_40789[iVar0 /*92*/].f_46 = unk_0x6BAB52A8425E7B4B(iVar20, iVar0);
			Global_1632166.f_40789[iVar0 /*92*/].f_47 = unk_0x6BAB52A8425E7B4B(iVar21, iVar0);
			Global_1632166.f_40789[iVar0 /*92*/].f_48 = unk_0x6BAB52A8425E7B4B(iVar22, iVar0);
			Global_1632166.f_40789[iVar0 /*92*/].f_49 = unk_0x6BAB52A8425E7B4B(iVar24, iVar0);
			Global_1632166.f_40789[iVar0 /*92*/].f_50 = unk_0x6BAB52A8425E7B4B(iVar23, iVar0);
			Global_1632166.f_40789[iVar0 /*92*/].f_43 = unk_0x6BAB52A8425E7B4B(iVar25, iVar0);
			Global_1632166.f_40789[iVar0 /*92*/].f_89 = unk_0x6BAB52A8425E7B4B(iVar27, iVar0);
			Global_1632166.f_40789[iVar0 /*92*/].f_90 = unk_0x6BAB52A8425E7B4B(iVar28, iVar0);
			Global_1632166.f_40789[iVar0 /*92*/].f_91 = unk_0x6BAB52A8425E7B4B(iVar29, iVar0);
			if (unk_0x1C9BFBB46CC94A75(iVar59, iVar0) == 2)
			{
				if (unk_0x6BAB52A8425E7B4B(iVar59, iVar0) == 1)
				{
					if (!unk_0xF44A5E894FE76438(Global_1632166.f_40789[iVar0 /*92*/].f_43, 4))
					{
						unk_0xB8A73E7DA87B2968(&(Global_1632166.f_40789[iVar0 /*92*/].f_43), 4);
					}
				}
			}
			if (func_125())
			{
				if (((unk_0x1C9BFBB46CC94A75(iVar8, iVar0) == 3 && unk_0x1C9BFBB46CC94A75(iVar9, iVar0) == 3) && unk_0x1C9BFBB46CC94A75(iVar10, iVar0) == 2) && unk_0x1C9BFBB46CC94A75(iVar11, iVar0) == 2)
				{
					Global_1632166.f_40789[iVar0 /*92*/].f_7 = unk_0x07F84E836DFFE814(iVar8, iVar0);
					Global_1632166.f_40789[iVar0 /*92*/].f_8 = unk_0x07F84E836DFFE814(iVar9, iVar0);
					Global_1632166.f_40789[iVar0 /*92*/].f_9 = unk_0x6BAB52A8425E7B4B(iVar10, iVar0);
					Global_1632166.f_40789[iVar0 /*92*/].f_10 = unk_0x6BAB52A8425E7B4B(iVar11, iVar0);
				}
				else
				{
					Global_1632166.f_40789[iVar0 /*92*/].f_7 = 50f;
					Global_1632166.f_40789[iVar0 /*92*/].f_8 = 0f;
					Global_1632166.f_40789[iVar0 /*92*/].f_9 = 0;
					Global_1632166.f_40789[iVar0 /*92*/].f_10 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar14, iVar0) == 2)
				{
					Global_1632166.f_40789[iVar0 /*92*/].f_15 = unk_0x6BAB52A8425E7B4B(iVar14, iVar0);
				}
				else
				{
					Global_1632166.f_40789[iVar0 /*92*/].f_15 = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar12, iVar0) == 5 && unk_0x1C9BFBB46CC94A75(iVar13, iVar0) == 3)
				{
					Global_1632166.f_40789[iVar0 /*92*/].f_11 = { unk_0x866B2C4E49D29F3B(iVar12, iVar0) };
					Global_1632166.f_40789[iVar0 /*92*/].f_14 = unk_0x07F84E836DFFE814(iVar13, iVar0);
				}
				else
				{
					Global_1632166.f_40789[iVar0 /*92*/].f_11 = { 0f, 0f, 0f };
					Global_1632166.f_40789[iVar0 /*92*/].f_14 = 0f;
				}
				Global_1632166.f_40789[iVar0 /*92*/].f_44 = unk_0x6BAB52A8425E7B4B(iVar26, iVar0);
				Global_1632166.f_40789[iVar0 /*92*/].f_32 = unk_0x6BAB52A8425E7B4B(iVar30, iVar0);
				Global_1632166.f_40789[iVar0 /*92*/].f_33 = unk_0x6BAB52A8425E7B4B(iVar31, iVar0);
				Global_1632166.f_40789[iVar0 /*92*/].f_34 = unk_0x6BAB52A8425E7B4B(iVar32, iVar0);
				if (unk_0x1C9BFBB46CC94A75(iVar33, iVar0) == 2)
				{
					Global_1632166.f_40789[iVar0 /*92*/].f_59 = unk_0x6BAB52A8425E7B4B(iVar33, iVar0);
					Global_1632166.f_40789[iVar0 /*92*/].f_56 = unk_0x6BAB52A8425E7B4B(iVar34, iVar0);
					Global_1632166.f_40789[iVar0 /*92*/].f_62 = unk_0x6BAB52A8425E7B4B(iVar35, iVar0);
					Global_1632166.f_40789[iVar0 /*92*/].f_60 = unk_0x6BAB52A8425E7B4B(iVar36, iVar0);
					Global_1632166.f_40789[iVar0 /*92*/].f_57 = unk_0x6BAB52A8425E7B4B(iVar37, iVar0);
					Global_1632166.f_40789[iVar0 /*92*/].f_63 = unk_0x6BAB52A8425E7B4B(iVar38, iVar0);
					Global_1632166.f_40789[iVar0 /*92*/].f_61 = unk_0x6BAB52A8425E7B4B(iVar39, iVar0);
					Global_1632166.f_40789[iVar0 /*92*/].f_58 = unk_0x6BAB52A8425E7B4B(iVar40, iVar0);
					Global_1632166.f_40789[iVar0 /*92*/].f_64 = unk_0x6BAB52A8425E7B4B(iVar41, iVar0);
				}
				Global_1632166.f_40789[iVar0 /*92*/].f_28 = unk_0x6BAB52A8425E7B4B(iVar42, iVar0);
				Global_1632166.f_40789[iVar0 /*92*/].f_29 = unk_0x6BAB52A8425E7B4B(iVar43, iVar0);
				Global_1632166.f_40789[iVar0 /*92*/].f_37 = unk_0x6BAB52A8425E7B4B(iVar58, iVar0);
				if (unk_0x1C9BFBB46CC94A75(iVar44, iVar0) == 2)
				{
					Global_1632166.f_40789[iVar0 /*92*/].f_30 = unk_0x6BAB52A8425E7B4B(iVar44, iVar0);
				}
				else
				{
					Global_1632166.f_40789[iVar0 /*92*/].f_30 = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar46, iVar0) == 2)
				{
					Global_1632166.f_40789[iVar0 /*92*/].f_51 = unk_0x6BAB52A8425E7B4B(iVar46, iVar0);
				}
				else
				{
					Global_1632166.f_40789[iVar0 /*92*/].f_51 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar45, iVar0) == 2)
				{
					Global_1632166.f_40789[iVar0 /*92*/].f_52 = unk_0x6BAB52A8425E7B4B(iVar45, iVar0);
				}
				else
				{
					Global_1632166.f_40789[iVar0 /*92*/].f_52 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar47, iVar0) == 2)
				{
					Global_1632166.f_40789[iVar0 /*92*/].f_53 = unk_0x6BAB52A8425E7B4B(iVar47, iVar0);
				}
				else
				{
					Global_1632166.f_40789[iVar0 /*92*/].f_53 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar48, iVar0) == 2)
				{
					Global_1632166.f_40789[iVar0 /*92*/].f_55 = unk_0x6BAB52A8425E7B4B(iVar48, iVar0);
				}
				else
				{
					Global_1632166.f_40789[iVar0 /*92*/].f_55 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar49, iVar0) == 2)
				{
					Global_1632166.f_40789[iVar0 /*92*/].f_35 = unk_0x6BAB52A8425E7B4B(iVar49, iVar0);
				}
				else
				{
					Global_1632166.f_40789[iVar0 /*92*/].f_35 = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar50, iVar0) == 2)
				{
					Global_1632166.f_40789[iVar0 /*92*/].f_36 = unk_0x6BAB52A8425E7B4B(iVar50, iVar0);
				}
				else
				{
					Global_1632166.f_40789[iVar0 /*92*/].f_36 = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar51, iVar0) == 2)
				{
					Global_1632166.f_40789[iVar0 /*92*/].f_80 = unk_0x6BAB52A8425E7B4B(iVar51, iVar0);
				}
				else
				{
					Global_1632166.f_40789[iVar0 /*92*/].f_80 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar60, iVar0) == 2)
				{
					Global_1632166.f_40789[iVar0 /*92*/].f_77 = unk_0x6BAB52A8425E7B4B(iVar60, iVar0);
				}
				else
				{
					Global_1632166.f_40789[iVar0 /*92*/].f_77 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar61, iVar0) == 2)
				{
					Global_1632166.f_40789[iVar0 /*92*/].f_78 = unk_0x6BAB52A8425E7B4B(iVar61, iVar0);
				}
				else
				{
					Global_1632166.f_40789[iVar0 /*92*/].f_78 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar52, iVar0) == 2)
				{
					Global_1632166.f_40789[iVar0 /*92*/].f_81 = unk_0x6BAB52A8425E7B4B(iVar52, iVar0);
				}
				else
				{
					Global_1632166.f_40789[iVar0 /*92*/].f_81 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar53, iVar0) == 2)
				{
					Global_1632166.f_40789[iVar0 /*92*/].f_82 = unk_0x6BAB52A8425E7B4B(iVar53, iVar0);
				}
				else
				{
					Global_1632166.f_40789[iVar0 /*92*/].f_82 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar54, iVar0) == 2)
				{
					Global_1632166.f_40789[iVar0 /*92*/].f_83 = unk_0x6BAB52A8425E7B4B(iVar54, iVar0);
				}
				else
				{
					Global_1632166.f_40789[iVar0 /*92*/].f_83 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar55, iVar0) == 2)
				{
					Global_1632166.f_40789[iVar0 /*92*/].f_84 = unk_0x6BAB52A8425E7B4B(iVar55, iVar0);
				}
				else
				{
					Global_1632166.f_40789[iVar0 /*92*/].f_84 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar56, iVar0) == 5 && unk_0x1C9BFBB46CC94A75(iVar57, iVar0) == 2)
				{
					Global_1632166.f_40789[iVar0 /*92*/].f_85 = { unk_0x866B2C4E49D29F3B(iVar56, iVar0) };
					Global_1632166.f_40789[iVar0 /*92*/].f_88 = unk_0x6BAB52A8425E7B4B(iVar57, iVar0);
				}
				else
				{
					Global_1632166.f_40789[iVar0 /*92*/].f_85 = { 0f, 0f, 0f };
					Global_1632166.f_40789[iVar0 /*92*/].f_88 = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar62, iVar0) == 2)
				{
					Global_1632166.f_40789[iVar0 /*92*/].f_54 = unk_0x6BAB52A8425E7B4B(iVar62, iVar0);
				}
				else
				{
					Global_1632166.f_40789[iVar0 /*92*/].f_54 = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar63, iVar0) == 2)
				{
					Global_1632166.f_40789[iVar0 /*92*/].f_75 = unk_0x6BAB52A8425E7B4B(iVar63, iVar0);
				}
				else
				{
					Global_1632166.f_40789[iVar0 /*92*/].f_75 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar64, iVar0) == 2)
				{
					Global_1632166.f_40789[iVar0 /*92*/].f_76 = unk_0x6BAB52A8425E7B4B(iVar64, iVar0);
				}
				else
				{
					Global_1632166.f_40789[iVar0 /*92*/].f_76 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar28, iVar0) == 2)
				{
					Global_1632166.f_40789[iVar0 /*92*/].f_90 = unk_0x6BAB52A8425E7B4B(iVar28, iVar0);
				}
				else
				{
					Global_1632166.f_40789[iVar0 /*92*/].f_90 = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar29, iVar0) == 2)
				{
					Global_1632166.f_40789[iVar0 /*92*/].f_91 = unk_0x6BAB52A8425E7B4B(iVar29, iVar0);
				}
				else
				{
					Global_1632166.f_40789[iVar0 /*92*/].f_91 = 0;
				}
				iVar2 = 0;
				while (iVar2 <= (Global_1632166.f_29 - 1))
				{
					if (iVar2 < 4)
					{
						Global_1632166.f_40789[iVar0 /*92*/].f_17[iVar2] = unk_0x6BAB52A8425E7B4B(uVar65[iVar2], iVar0);
						Global_1632166.f_40789[iVar0 /*92*/].f_22[iVar2] = unk_0x6BAB52A8425E7B4B(uVar70[iVar2], iVar0);
						if (Global_1632166.f_40789[iVar0 /*92*/].f_22[iVar2] == -1)
						{
							Global_1632166.f_40789[iVar0 /*92*/].f_22[iVar2] = 99999;
						}
						if (unk_0x1C9BFBB46CC94A75(uVar75[iVar2], iVar0) == 2)
						{
							Global_1632166.f_40789[iVar0 /*92*/].f_65[iVar2] = unk_0x6BAB52A8425E7B4B(uVar75[iVar2], iVar0);
						}
						else
						{
							Global_1632166.f_40789[iVar0 /*92*/].f_65[iVar2] = 0;
						}
						if (unk_0x1C9BFBB46CC94A75(uVar80[iVar2], iVar0) == 2)
						{
							Global_1632166.f_40789[iVar0 /*92*/].f_70[iVar2] = unk_0x6BAB52A8425E7B4B(uVar80[iVar2], iVar0);
						}
						else
						{
							Global_1632166.f_40789[iVar0 /*92*/].f_70[iVar2] = 0;
						}
					}
					iVar2++;
				}
			}
		}
		iVar0++;
	}
}

void func_185(int iParam0)
{
	int iVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10[4];
	var uVar15[4];
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	
	iVar6 = unk_0x4C4E1CA899A313BB(iParam0, "zone");
	Global_1632166.f_86668 = unk_0x4985D6D7F7AB891A(iVar6, "no");
	iVar7 = unk_0x05989B8A830B4E1C(iVar6, "vto");
	iVar8 = unk_0x05989B8A830B4E1C(iVar6, "vld");
	iVar9 = unk_0x05989B8A830B4E1C(iVar6, "zntp");
	iVar20 = unk_0x05989B8A830B4E1C(iVar6, "znbs");
	iVar21 = unk_0x05989B8A830B4E1C(iVar6, "znwd");
	iVar22 = unk_0x05989B8A830B4E1C(iVar6, "znwvd");
	iVar23 = unk_0x05989B8A830B4E1C(iVar6, "znatp");
	iVar24 = unk_0x05989B8A830B4E1C(iVar6, "znwid");
	iVar25 = unk_0x05989B8A830B4E1C(iVar6, "zndel");
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		StringCopy(&cVar2, "znpr", 16);
		StringIntConCat(&cVar2, iVar0, 16);
		uVar10[iVar0] = unk_0x05989B8A830B4E1C(iVar6, &cVar2);
		StringCopy(&cVar2, "znepr", 16);
		StringIntConCat(&cVar2, iVar0, 16);
		uVar15[iVar0] = unk_0x05989B8A830B4E1C(iVar6, &cVar2);
		iVar0++;
	}
	if (Global_1632166.f_86668 > 10)
	{
		Global_1632166.f_86668 = 10;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1632166.f_86668 - 1))
	{
		Global_1632166.f_86691[iVar0 /*26*/][0 /*3*/] = { unk_0x866B2C4E49D29F3B(iVar7, iVar0) };
		Global_1632166.f_86691[iVar0 /*26*/][1 /*3*/] = { unk_0x866B2C4E49D29F3B(iVar8, iVar0) };
		Global_1632166.f_86691[iVar0 /*26*/].f_9 = unk_0x6BAB52A8425E7B4B(iVar9, iVar0);
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			if (unk_0x1C9BFBB46CC94A75(uVar10[iVar1], iVar0) == 2)
			{
				Global_1632166.f_86691[iVar0 /*26*/].f_10[iVar1] = unk_0x6BAB52A8425E7B4B(uVar10[iVar1], iVar0);
			}
			else
			{
				Global_1632166.f_86691[iVar0 /*26*/].f_10[iVar1] = -1;
			}
			if (unk_0x1C9BFBB46CC94A75(uVar15[iVar1], iVar0) == 2)
			{
				Global_1632166.f_86691[iVar0 /*26*/].f_15[iVar1] = unk_0x6BAB52A8425E7B4B(uVar15[iVar1], iVar0);
			}
			else
			{
				Global_1632166.f_86691[iVar0 /*26*/].f_15[iVar1] = 99999;
			}
			iVar1++;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar20, iVar0) == 2)
		{
			Global_1632166.f_86691[iVar0 /*26*/].f_20 = unk_0x6BAB52A8425E7B4B(iVar20, iVar0);
		}
		else
		{
			Global_1632166.f_86691[iVar0 /*26*/].f_20 = 0;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar21, iVar0) == 3)
		{
			Global_1632166.f_86691[iVar0 /*26*/].f_22 = unk_0x07F84E836DFFE814(iVar21, iVar0);
		}
		else
		{
			Global_1632166.f_86691[iVar0 /*26*/].f_22 = 0f;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar22, iVar0) == 3)
		{
			Global_1632166.f_86691[iVar0 /*26*/].f_23 = unk_0x07F84E836DFFE814(iVar22, iVar0);
		}
		else
		{
			Global_1632166.f_86691[iVar0 /*26*/].f_23 = 0f;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar23, iVar0) == 2)
		{
			Global_1632166.f_86691[iVar0 /*26*/].f_8 = unk_0x6BAB52A8425E7B4B(iVar23, iVar0);
		}
		else
		{
			Global_1632166.f_86691[iVar0 /*26*/].f_8 = 0;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar24, iVar0) == 3)
		{
			Global_1632166.f_86691[iVar0 /*26*/].f_7 = unk_0x07F84E836DFFE814(iVar24, iVar0);
		}
		else
		{
			Global_1632166.f_86691[iVar0 /*26*/].f_7 = 0f;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar25, iVar0) == 2)
		{
			Global_1632166.f_86691[iVar0 /*26*/].f_21 = unk_0x6BAB52A8425E7B4B(iVar25, iVar0);
		}
		else
		{
			Global_1632166.f_86691[iVar0 /*26*/].f_21 = 0;
		}
		iVar0++;
	}
}

void func_186(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar1 = unk_0x4C4E1CA899A313BB(iParam0, "usj");
	Global_1632166.f_85934 = unk_0x4985D6D7F7AB891A(iVar1, "no");
	iVar2 = unk_0x05989B8A830B4E1C(iVar1, "vto");
	iVar3 = unk_0x05989B8A830B4E1C(iVar1, "vld");
	iVar4 = unk_0x05989B8A830B4E1C(iVar1, "vcm");
	if (Global_1632166.f_85934 > 10)
	{
		Global_1632166.f_85934 = 10;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1632166.f_85934 - 1))
	{
		Global_1632166.f_85935[iVar0 /*9*/] = { unk_0x866B2C4E49D29F3B(iVar2, iVar0) };
		Global_1632166.f_85935[iVar0 /*9*/].f_3 = { unk_0x866B2C4E49D29F3B(iVar3, iVar0) };
		Global_1632166.f_85935[iVar0 /*9*/].f_6 = { unk_0x866B2C4E49D29F3B(iVar4, iVar0) };
		iVar0++;
	}
}

void func_187(int iParam0)
{
	int iVar0;
	int iVar1;
	char[] cVar2[8];
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
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	var uVar35[4];
	int iVar40;
	
	if (unk_0x4C4E1CA899A313BB(iParam0, "ddtrig") == 0)
	{
		return;
	}
	iVar4 = unk_0x4C4E1CA899A313BB(iParam0, "ddtrig");
	Global_1632166.f_90692 = unk_0x4985D6D7F7AB891A(iVar4, "no");
	iVar5 = unk_0x05989B8A830B4E1C(iVar4, "id");
	iVar6 = unk_0x05989B8A830B4E1C(iVar4, "fid");
	iVar7 = unk_0x05989B8A830B4E1C(iVar4, "rule");
	iVar8 = unk_0x05989B8A830B4E1C(iVar4, "team");
	iVar9 = unk_0x05989B8A830B4E1C(iVar4, "pos");
	iVar10 = unk_0x05989B8A830B4E1C(iVar4, "rad");
	iVar11 = unk_0x05989B8A830B4E1C(iVar4, "tdel");
	iVar12 = unk_0x05989B8A830B4E1C(iVar4, "tpnt");
	iVar13 = unk_0x05989B8A830B4E1C(iVar4, "crkls");
	iVar14 = unk_0x05989B8A830B4E1C(iVar4, "spveh");
	iVar15 = unk_0x05989B8A830B4E1C(iVar4, "spveh2");
	iVar16 = unk_0x05989B8A830B4E1C(iVar4, "spveh3");
	iVar17 = unk_0x05989B8A830B4E1C(iVar4, "spveh4");
	iVar18 = unk_0x05989B8A830B4E1C(iVar4, "spveh5");
	iVar19 = unk_0x05989B8A830B4E1C(iVar4, "skprs");
	iVar20 = unk_0x05989B8A830B4E1C(iVar4, "fcsped");
	iVar21 = unk_0x05989B8A830B4E1C(iVar4, "prty");
	iVar22 = unk_0x05989B8A830B4E1C(iVar4, "dbs");
	iVar23 = unk_0x05989B8A830B4E1C(iVar4, "dbs2");
	iVar24 = unk_0x05989B8A830B4E1C(iVar4, "drole");
	iVar25 = unk_0x05989B8A830B4E1C(iVar4, "dspk");
	iVar26 = unk_0x05989B8A830B4E1C(iVar4, "dspk2");
	iVar27 = unk_0x05989B8A830B4E1C(iVar4, "dpcr");
	iVar28 = unk_0x05989B8A830B4E1C(iVar4, "panim");
	iVar29 = unk_0x05989B8A830B4E1C(iVar4, "blok");
	iVar30 = unk_0x05989B8A830B4E1C(iVar4, "root");
	iVar31 = unk_0x05989B8A830B4E1C(iVar4, "mgveh");
	iVar32 = unk_0x05989B8A830B4E1C(iVar4, "vehtg");
	iVar33 = unk_0x05989B8A830B4E1C(iVar4, "prerq");
	iVar34 = unk_0x05989B8A830B4E1C(iVar4, "vehdm");
	iVar40 = unk_0x05989B8A830B4E1C(iVar4, "dwsg");
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		StringCopy(&cVar2, "trl", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar35[iVar0] = unk_0x05989B8A830B4E1C(iVar4, &cVar2);
		iVar0++;
	}
	if (Global_1632166.f_90692 > 69)
	{
		Global_1632166.f_90692 = 69;
	}
	if (unk_0x1C9BFBB46CC94A75(iVar8, 0) == 2)
	{
		iVar0 = 0;
		while (iVar0 <= (Global_1632166.f_90692 - 1))
		{
			if (unk_0x1C9BFBB46CC94A75(iVar8, iVar0) == 2)
			{
				func_188(&(Global_1632166.f_87017[iVar0 /*49*/]), iVar0);
				if (iVar6 != 0 && unk_0x1C9BFBB46CC94A75(iVar6, iVar0) == 2)
				{
					Global_1632166.f_87017[iVar0 /*49*/].f_1 = unk_0x6BAB52A8425E7B4B(iVar6, iVar0);
				}
				if (iVar5 != 0)
				{
					Global_1632166.f_87017[iVar0 /*49*/] = unk_0x6BAB52A8425E7B4B(iVar5, iVar0);
				}
				if (iVar7 != 0)
				{
					Global_1632166.f_87017[iVar0 /*49*/].f_2 = unk_0x6BAB52A8425E7B4B(iVar7, iVar0);
				}
				if (iVar8 != 0)
				{
					Global_1632166.f_87017[iVar0 /*49*/].f_3 = unk_0x6BAB52A8425E7B4B(iVar8, iVar0);
				}
				if (iVar9 != 0)
				{
					Global_1632166.f_87017[iVar0 /*49*/].f_6 = { unk_0x866B2C4E49D29F3B(iVar9, iVar0) };
				}
				if (iVar10 != 0)
				{
					Global_1632166.f_87017[iVar0 /*49*/].f_9 = unk_0x07F84E836DFFE814(iVar10, iVar0);
				}
				if (iVar11 != 0)
				{
					Global_1632166.f_87017[iVar0 /*49*/].f_5 = unk_0x6BAB52A8425E7B4B(iVar11, iVar0);
				}
				if (iVar12 != 0)
				{
					Global_1632166.f_87017[iVar0 /*49*/].f_12 = unk_0x6BAB52A8425E7B4B(iVar12, iVar0);
				}
				if (iVar21 != 0)
				{
					Global_1632166.f_87017[iVar0 /*49*/].f_13 = unk_0x6BAB52A8425E7B4B(iVar21, iVar0);
				}
				if (iVar22 != 0)
				{
					Global_1632166.f_87017[iVar0 /*49*/].f_10 = unk_0x6BAB52A8425E7B4B(iVar22, iVar0);
				}
				if (iVar23 != 0)
				{
					Global_1632166.f_87017[iVar0 /*49*/].f_11 = unk_0x6BAB52A8425E7B4B(iVar23, iVar0);
				}
				if (iVar24 != 0 && unk_0x1C9BFBB46CC94A75(iVar24, iVar0) == 2)
				{
					Global_1632166.f_87017[iVar0 /*49*/].f_4 = unk_0x6BAB52A8425E7B4B(iVar24, iVar0);
				}
				else
				{
					Global_1632166.f_87017[iVar0 /*49*/].f_4 = 0;
				}
				if (iVar31 != 0 && unk_0x1C9BFBB46CC94A75(iVar31, iVar0) == 2)
				{
					Global_1632166.f_87017[iVar0 /*49*/].f_17 = unk_0x6BAB52A8425E7B4B(iVar31, iVar0);
				}
				if (iVar13 != 0 && unk_0x1C9BFBB46CC94A75(iVar13, iVar0) == 2)
				{
					Global_1632166.f_87017[iVar0 /*49*/].f_21 = unk_0x6BAB52A8425E7B4B(iVar13, iVar0);
				}
				if (iVar14 != 0 && unk_0x1C9BFBB46CC94A75(iVar14, iVar0) == 2)
				{
					Global_1632166.f_87017[iVar0 /*49*/].f_28 = unk_0x6BAB52A8425E7B4B(iVar14, iVar0);
				}
				if (iVar15 != 0 && unk_0x1C9BFBB46CC94A75(iVar15, iVar0) == 2)
				{
					Global_1632166.f_87017[iVar0 /*49*/].f_29 = unk_0x6BAB52A8425E7B4B(iVar15, iVar0);
				}
				if (iVar16 != 0 && unk_0x1C9BFBB46CC94A75(iVar16, iVar0) == 2)
				{
					Global_1632166.f_87017[iVar0 /*49*/].f_30 = unk_0x6BAB52A8425E7B4B(iVar16, iVar0);
				}
				if (iVar17 != 0 && unk_0x1C9BFBB46CC94A75(iVar17, iVar0) == 2)
				{
					Global_1632166.f_87017[iVar0 /*49*/].f_31 = unk_0x6BAB52A8425E7B4B(iVar17, iVar0);
				}
				if (iVar18 != 0 && unk_0x1C9BFBB46CC94A75(iVar18, iVar0) == 2)
				{
					Global_1632166.f_87017[iVar0 /*49*/].f_32 = unk_0x6BAB52A8425E7B4B(iVar18, iVar0);
				}
				if (iVar19 != 0 && unk_0x1C9BFBB46CC94A75(iVar19, iVar0) == 2)
				{
					Global_1632166.f_87017[iVar0 /*49*/].f_33 = unk_0x6BAB52A8425E7B4B(iVar19, iVar0);
				}
				if (iVar20 != 0 && unk_0x1C9BFBB46CC94A75(iVar20, iVar0) == 2)
				{
					Global_1632166.f_87017[iVar0 /*49*/].f_22 = unk_0x6BAB52A8425E7B4B(iVar20, iVar0);
				}
				if (iVar25 != 0 && unk_0x1C9BFBB46CC94A75(iVar25, iVar0) == 2)
				{
					Global_1632166.f_87017[iVar0 /*49*/].f_14 = unk_0x6BAB52A8425E7B4B(iVar25, iVar0);
				}
				if (iVar26 != 0 && unk_0x1C9BFBB46CC94A75(iVar26, iVar0) == 2)
				{
					Global_1632166.f_87017[iVar0 /*49*/].f_15 = unk_0x6BAB52A8425E7B4B(iVar26, iVar0);
				}
				if (iVar27 != 0 && unk_0x1C9BFBB46CC94A75(iVar27, iVar0) == 2)
				{
					Global_1632166.f_87017[iVar0 /*49*/].f_34 = unk_0x6BAB52A8425E7B4B(iVar27, iVar0);
				}
				if (iVar28 != 0 && unk_0x1C9BFBB46CC94A75(iVar28, iVar0) == 2)
				{
					Global_1632166.f_87017[iVar0 /*49*/].f_16 = unk_0x6BAB52A8425E7B4B(iVar28, iVar0);
				}
				if (iVar32 != 0 && unk_0x1C9BFBB46CC94A75(iVar32, iVar0) == 2)
				{
					Global_1632166.f_87017[iVar0 /*49*/].f_18 = unk_0x6BAB52A8425E7B4B(iVar32, iVar0);
				}
				if (iVar33 != 0 && unk_0x1C9BFBB46CC94A75(iVar33, iVar0) == 2)
				{
					Global_1632166.f_87017[iVar0 /*49*/].f_19 = unk_0x6BAB52A8425E7B4B(iVar33, iVar0);
				}
				if (iVar34 != 0 && unk_0x1C9BFBB46CC94A75(iVar34, iVar0) == 2)
				{
					Global_1632166.f_87017[iVar0 /*49*/].f_20 = unk_0x6BAB52A8425E7B4B(iVar34, iVar0);
				}
				iVar1 = 0;
				while (iVar1 <= 3)
				{
					if (uVar35[iVar1] != 0 && unk_0x1C9BFBB46CC94A75(uVar35[iVar1], iVar0) == 2)
					{
						Global_1632166.f_87017[iVar0 /*49*/].f_23[iVar1] = unk_0x6BAB52A8425E7B4B(uVar35[iVar1], iVar0);
					}
					iVar1++;
				}
				if (iVar40 != 0 && unk_0x1C9BFBB46CC94A75(iVar40, iVar0) == 2)
				{
					Global_1632166.f_87017[iVar0 /*49*/].f_47 = unk_0x6BAB52A8425E7B4B(iVar40, iVar0);
				}
				else
				{
					Global_1632166.f_87017[iVar0 /*49*/].f_47 = 0;
				}
				if (iVar29 != 0)
				{
					StringCopy(&(Global_1632166.f_87017[iVar0 /*49*/].f_35), unk_0xE0DCCCE203DC2979(iVar29, iVar0), 24);
				}
				if (iVar30 != 0)
				{
					StringCopy(&(Global_1632166.f_87017[iVar0 /*49*/].f_41), unk_0xE0DCCCE203DC2979(iVar30, iVar0), 24);
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= (Global_1632166.f_90692 - 1))
		{
			Global_1632166.f_87017[iVar0 /*49*/] = 0;
			Global_1632166.f_87017[iVar0 /*49*/].f_2 = -1;
			Global_1632166.f_87017[iVar0 /*49*/].f_3 = -1;
			Global_1632166.f_87017[iVar0 /*49*/].f_6 = { 0f, 0f, 0f };
			Global_1632166.f_87017[iVar0 /*49*/].f_9 = 3f;
			Global_1632166.f_87017[iVar0 /*49*/].f_5 = 0;
			Global_1632166.f_87017[iVar0 /*49*/].f_12 = -1;
			Global_1632166.f_87017[iVar0 /*49*/].f_21 = 0;
			Global_1632166.f_87017[iVar0 /*49*/].f_28 = -1;
			Global_1632166.f_87017[iVar0 /*49*/].f_29 = -1;
			Global_1632166.f_87017[iVar0 /*49*/].f_30 = -1;
			Global_1632166.f_87017[iVar0 /*49*/].f_31 = -1;
			Global_1632166.f_87017[iVar0 /*49*/].f_32 = -1;
			Global_1632166.f_87017[iVar0 /*49*/].f_33 = 0;
			Global_1632166.f_87017[iVar0 /*49*/].f_13 = 0;
			Global_1632166.f_87017[iVar0 /*49*/].f_10 = 0;
			Global_1632166.f_87017[iVar0 /*49*/].f_11 = 0;
			Global_1632166.f_87017[iVar0 /*49*/].f_4 = 0;
			Global_1632166.f_87017[iVar0 /*49*/].f_14 = -1;
			Global_1632166.f_87017[iVar0 /*49*/].f_15 = -1;
			Global_1632166.f_87017[iVar0 /*49*/].f_16 = 0;
			StringCopy(&(Global_1632166.f_87017[iVar0 /*49*/].f_35), "", 24);
			StringCopy(&(Global_1632166.f_87017[iVar0 /*49*/].f_41), "", 24);
			Global_1632166.f_87017[iVar0 /*49*/].f_17 = -1;
			Global_1632166.f_87017[iVar0 /*49*/].f_18 = -1;
			Global_1632166.f_87017[iVar0 /*49*/].f_19 = -1;
			Global_1632166.f_87017[iVar0 /*49*/].f_20 = 0;
			Global_1632166.f_87017[iVar0 /*49*/].f_47 = 0;
			Global_1632166.f_87017[iVar0 /*49*/].f_34 = 0;
			iVar0++;
		}
	}
	if (unk_0xF0E984A1CED01E3C(iParam0, "dtmp") == 2)
	{
		Global_1632166.f_90688[0] = unk_0x4985D6D7F7AB891A(iParam0, "dtmp");
	}
	else
	{
		Global_1632166.f_90688[0] = 0;
	}
	if (unk_0xF0E984A1CED01E3C(iParam0, "dtmp2") == 2)
	{
		Global_1632166.f_90688[1] = unk_0x4985D6D7F7AB891A(iParam0, "dtmp2");
	}
	else
	{
		Global_1632166.f_90688[1] = 0;
	}
	if (unk_0xF0E984A1CED01E3C(iParam0, "dtmp3") == 2)
	{
		Global_1632166.f_90688[2] = unk_0x4985D6D7F7AB891A(iParam0, "dtmp3");
	}
	else
	{
		Global_1632166.f_90688[2] = 0;
	}
}

void func_188(var uParam0, int iParam1)
{
	int iVar0;
	
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	uParam0->f_3 = -1;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = { 0f, 0f, 0f };
	uParam0->f_9 = 3f;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = -1;
	uParam0->f_13 = 0;
	uParam0->f_14 = -1;
	uParam0->f_15 = -1;
	uParam0->f_16 = 0;
	uParam0->f_17 = -1;
	uParam0->f_19 = -1;
	uParam0->f_18 = -1;
	uParam0->f_20 = 0;
	uParam0->f_21 = 0;
	uParam0->f_28 = -1;
	uParam0->f_29 = -1;
	uParam0->f_30 = -1;
	uParam0->f_31 = -1;
	uParam0->f_32 = -1;
	uParam0->f_33 = 0;
	uParam0->f_22 = -1;
	uParam0->f_34 = 0;
	StringCopy(&(uParam0->f_35), "", 24);
	StringCopy(&(uParam0->f_41), "", 24);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		uParam0->f_23[iVar0] = -1;
		iVar0++;
	}
	uParam0->f_47 = 0;
	if (iParam1 != -1)
	{
		unk_0x4EA098C870B73AB7(&(Global_1632166.f_90688[(iParam1 / 32)]), (iParam1 % 32));
	}
	if (unk_0x6901135DDCC4904D(uParam0->f_48))
	{
		unk_0x8A3D7569826A325D(&(uParam0->f_48));
	}
}

void func_189(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	var uVar17;
	var uVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	var uVar25[3];
	var uVar29[3];
	int iVar33;
	char[] cVar34[8];
	
	iVar2 = unk_0x4C4E1CA899A313BB(iParam0, "race");
	Global_1632166.f_40138 = unk_0x4985D6D7F7AB891A(iVar2, "chp");
	iVar3 = (Global_1632166.f_40138 - 1);
	Global_1632166.f_40139 = unk_0x4985D6D7F7AB891A(iVar2, "lap");
	Global_1632166.f_40140 = unk_0x4985D6D7F7AB891A(iVar2, "type");
	if (func_108() == 2)
	{
		if (Global_1632166.f_40140 == 6)
		{
			Global_1632166.f_40140 = 0;
		}
		else if (Global_1632166.f_40140 == 7)
		{
			Global_1632166.f_40140 = 1;
		}
	}
	Global_1632166.f_40141 = unk_0x4985D6D7F7AB891A(iVar2, "gtar");
	Global_1632166.f_40727 = unk_0x1B52B6FA98557E78(iVar2, "head");
	Global_1632166.f_40728 = unk_0x1B52B6FA98557E78(iVar2, "lrgs");
	Global_1632166.f_40729 = unk_0x1B52B6FA98557E78(iVar2, "udgs");
	Global_1632166.f_40730 = unk_0x1B52B6FA98557E78(iVar2, "gw");
	Global_1632166.f_40731 = unk_0x1B52B6FA98557E78(iVar2, "gl");
	Global_1632166.f_40732 = unk_0x4985D6D7F7AB891A(iVar2, "lanes");
	Global_1632166.f_34302 = { unk_0x97AB8757C3B46AA0(iVar2, "grid") };
	Global_1632166.f_40143 = unk_0x4985D6D7F7AB891A(iVar2, "icv");
	Global_1632166.f_40145 = unk_0x4985D6D7F7AB891A(iVar2, "tri1");
	Global_1632166.f_40146 = unk_0x4985D6D7F7AB891A(iVar2, "tri2");
	Global_1632166.f_40147 = unk_0x4985D6D7F7AB891A(iVar2, "clbs");
	Global_1632166.f_40726 = unk_0x4985D6D7F7AB891A(iVar2, "ptp");
	Global_1632166.f_40724 = unk_0x4985D6D7F7AB891A(iVar2, "strtg");
	Global_1632166.f_40725 = unk_0x4985D6D7F7AB891A(iVar2, "rcdam");
	Global_1632166.f_37687 = unk_0x1B52B6FA98557E78(iVar2, "rdis");
	Global_1632166.f_40721 = unk_0x4985D6D7F7AB891A(iVar2, "gridty");
	Global_1632166.f_105294 = unk_0x1DCCD87216370AE6(iVar2, "iprem");
	iVar4 = unk_0x05989B8A830B4E1C(iVar2, "chh");
	iVar5 = unk_0x05989B8A830B4E1C(iVar2, "chs");
	iVar6 = unk_0x05989B8A830B4E1C(iVar2, "chl");
	uVar7 = unk_0x05989B8A830B4E1C(iVar2, "rsp");
	iVar8 = unk_0x05989B8A830B4E1C(iVar2, "sndchk");
	iVar9 = unk_0x05989B8A830B4E1C(iVar2, "sndrsp");
	uVar10 = unk_0x05989B8A830B4E1C(iVar2, "rndchk");
	uVar11 = unk_0x05989B8A830B4E1C(iVar2, "cdsblcu");
	uVar12 = unk_0x05989B8A830B4E1C(iVar2, "cpdss");
	iVar13 = unk_0x05989B8A830B4E1C(iVar2, "cpgrav");
	iVar14 = unk_0x05989B8A830B4E1C(iVar2, "cpgravdura");
	iVar15 = unk_0x05989B8A830B4E1C(iVar2, "cpwwt");
	iVar16 = unk_0x05989B8A830B4E1C(iVar2, "cppsst");
	uVar17 = unk_0x05989B8A830B4E1C(iVar2, "cprst");
	uVar18 = unk_0x05989B8A830B4E1C(iVar2, "rndchks");
	iVar19 = unk_0x05989B8A830B4E1C(iVar2, "cpado");
	iVar20 = unk_0x05989B8A830B4E1C(iVar2, "cpados");
	if (Global_1632166.f_40140 == 8)
	{
		Global_1632166.f_40138 = 0;
		iVar0 = 0;
		while (iVar0 <= 69)
		{
			if (!func_121(unk_0x866B2C4E49D29F3B(iVar6, iVar0)))
			{
				Global_1632166.f_40138++;
			}
			iVar0++;
		}
		iVar3 = Global_1632166.f_40138;
	}
	iVar21 = 0;
	iVar0 = 0;
	while (iVar0 <= iVar3)
	{
		if (iVar0 < 70)
		{
			if (Global_1632166.f_40140 == 8)
			{
				iVar21 = func_190(iVar6, iVar21);
			}
			else
			{
				iVar21 = iVar0;
			}
			Global_1632166.f_35006[iVar0 /*3*/] = { unk_0x866B2C4E49D29F3B(iVar6, iVar21) };
			Global_1632166.f_35217[iVar0] = unk_0x07F84E836DFFE814(iVar4, iVar21);
			if (unk_0x1C9BFBB46CC94A75(iVar5, iVar21) == 3)
			{
				Global_1632166.f_37616[iVar0] = unk_0x07F84E836DFFE814(iVar5, iVar21);
			}
			else
			{
				Global_1632166.f_37616[iVar0] = 1f;
			}
			if (Global_1632166.f_37616[iVar0] < 1f)
			{
				Global_1632166.f_37616[iVar0] = 1f;
			}
			Global_1632166.f_36413[iVar0] = unk_0x1443290B580EC8DD(uVar7, iVar21);
			Global_1632166.f_35288[iVar0] = unk_0x1443290B580EC8DD(uVar10, iVar21);
			Global_1632166.f_36484[iVar0] = unk_0x1443290B580EC8DD(uVar11, iVar21);
			Global_1632166.f_36555[iVar0] = unk_0x1443290B580EC8DD(uVar12, iVar21);
			Global_1632166.f_36060[iVar0 /*3*/] = { unk_0x866B2C4E49D29F3B(iVar8, iVar21) };
			Global_1632166.f_36271[iVar0] = unk_0x07F84E836DFFE814(iVar9, iVar21);
			Global_1632166.f_36342[iVar0] = unk_0x1443290B580EC8DD(uVar18, iVar21);
			Global_1632166.f_36626[iVar0] = unk_0x6BAB52A8425E7B4B(iVar13, iVar21);
			Global_1632166.f_36768[iVar0] = unk_0x6BAB52A8425E7B4B(iVar14, iVar21);
			Global_1632166.f_36697[iVar0] = unk_0x6BAB52A8425E7B4B(iVar15, iVar21);
			Global_1632166.f_36839[iVar0] = unk_0x6BAB52A8425E7B4B(iVar16, iVar21);
			Global_1632166.f_37474[iVar0] = unk_0x1443290B580EC8DD(uVar17, iVar21);
			Global_1632166.f_36910[iVar0 /*3*/] = { unk_0x866B2C4E49D29F3B(iVar19, iVar21) };
			Global_1632166.f_37121[iVar0 /*3*/] = { unk_0x866B2C4E49D29F3B(iVar20, iVar21) };
			iVar21++;
		}
		iVar0++;
	}
	iVar22 = unk_0x05989B8A830B4E1C(iVar2, "vta");
	iVar0 = 0;
	while (iVar0 <= (Global_1632166.f_24 - 1))
	{
		if (iVar0 < 32)
		{
			iVar1 = unk_0x6BAB52A8425E7B4B(iVar22, iVar0);
			Global_1632166.f_40735[iVar0] = iVar1;
		}
		iVar0++;
	}
	iVar23 = unk_0x05989B8A830B4E1C(iVar2, "aveh");
	iVar24 = unk_0x05989B8A830B4E1C(iVar2, "adlc");
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		iVar1 = unk_0x6BAB52A8425E7B4B(iVar23, iVar0);
		Global_1632166.f_40148[iVar0] = iVar1;
		Global_1632166.f_40164[iVar0] = 0;
		Global_1632166.f_40164[iVar0] = unk_0x6BAB52A8425E7B4B(iVar24, iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		StringCopy(&cVar34, "vspn", 8);
		StringIntConCat(&cVar34, iVar0, 8);
		uVar25[iVar0] = unk_0x05989B8A830B4E1C(iVar2, &cVar34);
		iVar33 = 0;
		while (iVar33 <= iVar3)
		{
			Global_1632166.f_34305[iVar33 /*10*/][iVar0 /*3*/] = { unk_0x866B2C4E49D29F3B(uVar25[iVar0], iVar33) };
			iVar33++;
		}
		StringCopy(&cVar34, "vspns", 8);
		StringIntConCat(&cVar34, iVar0, 8);
		uVar29[iVar0] = unk_0x05989B8A830B4E1C(iVar2, &cVar34);
		iVar33 = 0;
		while (iVar33 <= iVar3)
		{
			if (unk_0x1C9BFBB46CC94A75(uVar29[iVar0], iVar33) == 5)
			{
				Global_1632166.f_35359[iVar33 /*10*/][iVar0 /*3*/] = { unk_0x866B2C4E49D29F3B(uVar29[iVar0], iVar33) };
			}
			else
			{
				Global_1632166.f_35359[iVar33 /*10*/][iVar0 /*3*/] = { 0f, 0f, 0f };
			}
			iVar33++;
		}
		iVar0++;
	}
}

int func_190(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	while (iVar0 <= 69)
	{
		if (!func_121(unk_0x866B2C4E49D29F3B(iParam0, iVar0)))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_191(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0x4C4E1CA899A313BB(iParam0, "dhprop") == 0)
	{
		return;
	}
	iVar1 = unk_0x4C4E1CA899A313BB(iParam0, "dhprop");
	Global_1632166.f_100408 = unk_0x4985D6D7F7AB891A(iVar1, "no");
	iVar2 = unk_0x05989B8A830B4E1C(iVar1, "pos");
	iVar3 = unk_0x05989B8A830B4E1C(iVar1, "mn");
	if (Global_1632166.f_100408 > 25)
	{
		Global_1632166.f_100408 = 25;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1632166.f_100408 - 1))
	{
		if (unk_0x1C9BFBB46CC94A75(iVar2, iVar0) == 5)
		{
			Global_1632166.f_100307[iVar0 /*4*/] = { unk_0x866B2C4E49D29F3B(iVar2, iVar0) };
			Global_1632166.f_100307[iVar0 /*4*/].f_3 = unk_0x6BAB52A8425E7B4B(iVar3, iVar0);
		}
		iVar0++;
	}
}

void func_192(int iParam0)
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
	
	if (unk_0x4C4E1CA899A313BB(iParam0, "ddblip") == 0)
	{
		return;
	}
	iVar1 = unk_0x4C4E1CA899A313BB(iParam0, "ddblip");
	Global_1632166.f_100306 = unk_0x4985D6D7F7AB891A(iVar1, "no");
	iVar2 = unk_0x05989B8A830B4E1C(iVar1, "pos");
	iVar3 = unk_0x05989B8A830B4E1C(iVar1, "rule");
	iVar4 = unk_0x05989B8A830B4E1C(iVar1, "team");
	iVar5 = unk_0x05989B8A830B4E1C(iVar1, "type");
	iVar6 = unk_0x05989B8A830B4E1C(iVar1, "size");
	iVar7 = unk_0x05989B8A830B4E1C(iVar1, "veh");
	iVar8 = unk_0x05989B8A830B4E1C(iVar1, "clr");
	iVar9 = unk_0x05989B8A830B4E1C(iVar1, "bits");
	if (Global_1632166.f_100306 > 10)
	{
		Global_1632166.f_100306 = 10;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1632166.f_100306 - 1))
	{
		if (unk_0x1C9BFBB46CC94A75(iVar2, iVar0) == 5)
		{
			Global_1632166.f_100205[iVar0 /*10*/] = { unk_0x866B2C4E49D29F3B(iVar2, iVar0) };
			Global_1632166.f_100205[iVar0 /*10*/].f_3 = unk_0x6BAB52A8425E7B4B(iVar3, iVar0);
			Global_1632166.f_100205[iVar0 /*10*/].f_4 = unk_0x6BAB52A8425E7B4B(iVar4, iVar0);
			Global_1632166.f_100205[iVar0 /*10*/].f_8 = unk_0x6BAB52A8425E7B4B(iVar8, iVar0);
			Global_1632166.f_100205[iVar0 /*10*/].f_9 = unk_0x6BAB52A8425E7B4B(iVar9, iVar0);
		}
		if (unk_0x1C9BFBB46CC94A75(iVar5, iVar0) == 2)
		{
			Global_1632166.f_100205[iVar0 /*10*/].f_6 = unk_0x6BAB52A8425E7B4B(iVar5, iVar0);
		}
		else
		{
			Global_1632166.f_100205[iVar0 /*10*/].f_6 = 0;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar6, iVar0) == 2)
		{
			Global_1632166.f_100205[iVar0 /*10*/].f_5 = unk_0x6BAB52A8425E7B4B(iVar6, iVar0);
		}
		else
		{
			Global_1632166.f_100205[iVar0 /*10*/].f_5 = 4;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar7, iVar0) == 2)
		{
			Global_1632166.f_100205[iVar0 /*10*/].f_7 = unk_0x6BAB52A8425E7B4B(iVar7, iVar0);
		}
		else
		{
			Global_1632166.f_100205[iVar0 /*10*/].f_7 = -1;
		}
		iVar0++;
	}
}

void func_193(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	var uVar14[5];
	var uVar20[5];
	var uVar26[5];
	var uVar32[5];
	var uVar38[5];
	var uVar44[5];
	var uVar50[5];
	var uVar56[5];
	int iVar62;
	var uVar63[5];
	var uVar69[5];
	var uVar75[5];
	
	if (unk_0x4C4E1CA899A313BB(iParam0, "mocap") == 0)
	{
		return;
	}
	iVar5 = unk_0x4C4E1CA899A313BB(iParam0, "mocap");
	iVar6 = unk_0x05989B8A830B4E1C(iVar5, "name");
	iVar7 = unk_0x05989B8A830B4E1C(iVar5, "bits");
	iVar8 = unk_0x05989B8A830B4E1C(iVar5, "bits2");
	iVar9 = unk_0x05989B8A830B4E1C(iVar5, "timer");
	iVar10 = unk_0x05989B8A830B4E1C(iVar5, "rng");
	iVar11 = unk_0x05989B8A830B4E1C(iVar5, "ccp");
	iVar12 = unk_0x05989B8A830B4E1C(iVar5, "ccr");
	iVar13 = unk_0x05989B8A830B4E1C(iVar5, "ccs");
	iVar62 = unk_0x05989B8A830B4E1C(iVar5, "pcvid");
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (unk_0x1C9BFBB46CC94A75(iVar6, iVar0) == 4)
		{
			StringCopy(&(Global_1632166.f_97225[iVar0 /*434*/]), unk_0xE0DCCCE203DC2979(iVar6, iVar0), 64);
		}
		else
		{
			StringCopy(&(Global_1632166.f_97225[iVar0 /*434*/]), "", 64);
		}
		if (unk_0x1C9BFBB46CC94A75(iVar7, iVar0) == 2)
		{
			Global_1632166.f_97225[iVar0 /*434*/].f_16 = unk_0x6BAB52A8425E7B4B(iVar7, iVar0);
		}
		else
		{
			Global_1632166.f_97225[iVar0 /*434*/].f_16 = 0;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar8, iVar0) == 2)
		{
			Global_1632166.f_97225[iVar0 /*434*/].f_17 = unk_0x6BAB52A8425E7B4B(iVar8, iVar0);
		}
		else
		{
			Global_1632166.f_97225[iVar0 /*434*/].f_17 = 0;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar62, iVar0) == 2)
		{
			Global_1632166.f_97225[iVar0 /*434*/].f_424 = unk_0x6BAB52A8425E7B4B(iVar62, iVar0);
		}
		else
		{
			Global_1632166.f_97225[iVar0 /*434*/].f_424 = -1;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar9, iVar0) == 2)
		{
			Global_1632166.f_97225[iVar0 /*434*/].f_61 = unk_0x6BAB52A8425E7B4B(iVar9, iVar0);
		}
		else
		{
			Global_1632166.f_97225[iVar0 /*434*/].f_61 = 0;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar10, iVar0) == 2)
		{
			Global_1632166.f_97225[iVar0 /*434*/].f_62 = unk_0x6BAB52A8425E7B4B(iVar10, iVar0);
		}
		else
		{
			Global_1632166.f_97225[iVar0 /*434*/].f_62 = 0;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar11, iVar0) == 5)
		{
			Global_1632166.f_97225[iVar0 /*434*/].f_54 = { unk_0x866B2C4E49D29F3B(iVar11, iVar0) };
		}
		else
		{
			Global_1632166.f_97225[iVar0 /*434*/].f_54 = { 0f, 0f, 0f };
		}
		if (unk_0x1C9BFBB46CC94A75(iVar12, iVar0) == 3)
		{
			Global_1632166.f_97225[iVar0 /*434*/].f_60 = unk_0x07F84E836DFFE814(iVar12, iVar0);
		}
		else
		{
			Global_1632166.f_97225[iVar0 /*434*/].f_60 = 0f;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar13, iVar0) == 5)
		{
			Global_1632166.f_97225[iVar0 /*434*/].f_57 = { unk_0x866B2C4E49D29F3B(iVar13, iVar0) };
		}
		else
		{
			Global_1632166.f_97225[iVar0 /*434*/].f_57 = { 0f, 0f, 0f };
		}
		StringCopy(&cVar3, "pstr", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar14[iVar0] = unk_0x05989B8A830B4E1C(iVar5, &cVar3);
		StringCopy(&cVar3, "pend", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar20[iVar0] = unk_0x05989B8A830B4E1C(iVar5, &cVar3);
		StringCopy(&cVar3, "strh", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar26[iVar0] = unk_0x05989B8A830B4E1C(iVar5, &cVar3);
		StringCopy(&cVar3, "endh", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar32[iVar0] = unk_0x05989B8A830B4E1C(iVar5, &cVar3);
		StringCopy(&cVar3, "mcei", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar38[iVar0] = unk_0x05989B8A830B4E1C(iVar5, &cVar3);
		StringCopy(&cVar3, "mcet", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar44[iVar0] = unk_0x05989B8A830B4E1C(iVar5, &cVar3);
		StringCopy(&cVar3, "mcebs", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar50[iVar0] = unk_0x05989B8A830B4E1C(iVar5, &cVar3);
		StringCopy(&cVar3, "mceh", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar56[iVar0] = unk_0x05989B8A830B4E1C(iVar5, &cVar3);
		StringCopy(&cVar3, "pvpls", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar63[iVar0] = unk_0x05989B8A830B4E1C(iVar5, &cVar3);
		StringCopy(&cVar3, "pvpds", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar69[iVar0] = unk_0x05989B8A830B4E1C(iVar5, &cVar3);
		StringCopy(&cVar3, "pvpdi", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar75[iVar0] = unk_0x05989B8A830B4E1C(iVar5, &cVar3);
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			if (unk_0x1C9BFBB46CC94A75(uVar14[iVar0], iVar1) == 5)
			{
				Global_1632166.f_97225[iVar0 /*434*/].f_18[iVar1 /*3*/] = { unk_0x866B2C4E49D29F3B(uVar14[iVar0], iVar1) };
			}
			else
			{
				Global_1632166.f_97225[iVar0 /*434*/].f_18[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x1C9BFBB46CC94A75(uVar20[iVar0], iVar1) == 5)
			{
				Global_1632166.f_97225[iVar0 /*434*/].f_31[iVar1 /*3*/] = { unk_0x866B2C4E49D29F3B(uVar20[iVar0], iVar1) };
			}
			else
			{
				Global_1632166.f_97225[iVar0 /*434*/].f_31[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x1C9BFBB46CC94A75(uVar26[iVar0], iVar1) == 3)
			{
				Global_1632166.f_97225[iVar0 /*434*/].f_44[iVar1] = unk_0x07F84E836DFFE814(uVar26[iVar0], iVar1);
			}
			else
			{
				Global_1632166.f_97225[iVar0 /*434*/].f_44[iVar1] = 0f;
			}
			if (unk_0x1C9BFBB46CC94A75(uVar32[iVar0], iVar1) == 3)
			{
				Global_1632166.f_97225[iVar0 /*434*/].f_49[iVar1] = unk_0x07F84E836DFFE814(uVar32[iVar0], iVar1);
			}
			else
			{
				Global_1632166.f_97225[iVar0 /*434*/].f_49[iVar1] = 0f;
			}
			iVar1++;
		}
		iVar2 = 0;
		while (iVar2 <= 3)
		{
			if (unk_0x1C9BFBB46CC94A75(uVar63[iVar0], iVar2) == 2)
			{
				Global_1632166.f_97225[iVar0 /*434*/].f_425[iVar2] = unk_0x6BAB52A8425E7B4B(uVar63[iVar0], iVar2);
			}
			else
			{
				Global_1632166.f_97225[iVar0 /*434*/].f_425[iVar2] = 0;
			}
			iVar2++;
		}
		iVar2 = 0;
		while (iVar2 <= 0)
		{
			if (unk_0x1C9BFBB46CC94A75(uVar69[iVar0], iVar2) == 2)
			{
				Global_1632166.f_97225[iVar0 /*434*/].f_430[iVar2] = unk_0x6BAB52A8425E7B4B(uVar69[iVar0], iVar2);
			}
			else
			{
				Global_1632166.f_97225[iVar0 /*434*/].f_430[iVar2] = 0;
			}
			if (unk_0x1C9BFBB46CC94A75(uVar75[iVar0], iVar2) == 2)
			{
				Global_1632166.f_97225[iVar0 /*434*/].f_432[iVar2] = unk_0x6BAB52A8425E7B4B(uVar75[iVar0], iVar2);
			}
			else
			{
				Global_1632166.f_97225[iVar0 /*434*/].f_432[iVar2] = 0;
			}
			iVar2++;
		}
		iVar1 = 0;
		while (iVar1 <= 29)
		{
			if (unk_0x1C9BFBB46CC94A75(uVar38[iVar0], iVar1) == 2)
			{
				Global_1632166.f_97225[iVar0 /*434*/].f_63[iVar1 /*12*/].f_1 = unk_0x6BAB52A8425E7B4B(uVar38[iVar0], iVar1);
			}
			else
			{
				Global_1632166.f_97225[iVar0 /*434*/].f_63[iVar1 /*12*/].f_1 = -1;
			}
			if (unk_0x1C9BFBB46CC94A75(uVar44[iVar0], iVar1) == 2)
			{
				Global_1632166.f_97225[iVar0 /*434*/].f_63[iVar1 /*12*/] = unk_0x6BAB52A8425E7B4B(uVar44[iVar0], iVar1);
			}
			else
			{
				Global_1632166.f_97225[iVar0 /*434*/].f_63[iVar1 /*12*/] = -1;
			}
			if (unk_0x1C9BFBB46CC94A75(uVar50[iVar0], iVar1) == 2)
			{
				Global_1632166.f_97225[iVar0 /*434*/].f_63[iVar1 /*12*/].f_2 = unk_0x6BAB52A8425E7B4B(uVar44[iVar0], iVar1);
			}
			else
			{
				Global_1632166.f_97225[iVar0 /*434*/].f_63[iVar1 /*12*/].f_2 = 0;
			}
			if (unk_0x1C9BFBB46CC94A75(uVar56[iVar0], iVar1) == 4)
			{
				StringCopy(&(Global_1632166.f_97225[iVar0 /*434*/].f_63[iVar1 /*12*/].f_4), unk_0xE0DCCCE203DC2979(uVar56[iVar0], iVar1), 32);
			}
			else
			{
				StringCopy(&(Global_1632166.f_97225[iVar0 /*434*/].f_63[iVar1 /*12*/].f_4), "", 32);
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_194(int iParam0)
{
	int iVar0;
	int iVar1;
	char[] cVar2[8];
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11[5];
	var uVar17[5];
	var uVar23[5];
	var uVar29[5];
	var uVar35[5];
	var uVar41[5];
	var uVar47[5];
	var uVar53[5];
	var uVar59[5];
	var uVar65[5];
	var uVar71[5];
	var uVar77[5];
	var uVar83[5];
	var uVar89[5];
	var uVar95[5];
	var uVar101[5];
	var uVar107[5];
	var uVar113[5];
	var uVar119[5];
	var uVar125[5];
	var uVar131[5];
	var uVar137[5];
	var uVar143[5];
	var uVar149[5];
	var uVar155[5];
	var uVar161[5];
	int iVar167;
	int iVar168;
	int iVar169;
	int iVar170;
	int iVar171;
	int iVar172;
	int iVar173;
	
	if (unk_0x4C4E1CA899A313BB(iParam0, "cuts") == 0)
	{
		return;
	}
	iVar4 = unk_0x4C4E1CA899A313BB(iParam0, "cuts");
	iVar5 = unk_0x05989B8A830B4E1C(iVar4, "name");
	iVar6 = unk_0x05989B8A830B4E1C(iVar4, "bits");
	iVar7 = unk_0x05989B8A830B4E1C(iVar4, "shot");
	iVar8 = unk_0x05989B8A830B4E1C(iVar4, "anim");
	iVar9 = unk_0x05989B8A830B4E1C(iVar4, "midp");
	iVar10 = unk_0x05989B8A830B4E1C(iVar4, "rng");
	iVar167 = unk_0x05989B8A830B4E1C(iVar4, "train");
	iVar168 = unk_0x05989B8A830B4E1C(iVar4, "trahl");
	iVar169 = unk_0x05989B8A830B4E1C(iVar4, "traou");
	iVar170 = unk_0x05989B8A830B4E1C(iVar4, "trapo");
	iVar171 = unk_0x05989B8A830B4E1C(iVar4, "ccp");
	iVar172 = unk_0x05989B8A830B4E1C(iVar4, "ccr");
	iVar173 = unk_0x05989B8A830B4E1C(iVar4, "ccs");
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (unk_0x1C9BFBB46CC94A75(iVar5, iVar0) == 4)
		{
			StringCopy(&(Global_1632166.f_90854[iVar0 /*1274*/]), unk_0xE0DCCCE203DC2979(iVar5, iVar0), 16);
		}
		else
		{
			StringCopy(&(Global_1632166.f_90854[iVar0 /*1274*/]), "", 16);
		}
		if (unk_0x1C9BFBB46CC94A75(iVar6, iVar0) == 2)
		{
			Global_1632166.f_90854[iVar0 /*1274*/].f_4 = unk_0x6BAB52A8425E7B4B(iVar6, iVar0);
		}
		else
		{
			Global_1632166.f_90854[iVar0 /*1274*/].f_4 = 0;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar6, iVar0) == 2)
		{
			Global_1632166.f_90854[iVar0 /*1274*/].f_5 = unk_0x6BAB52A8425E7B4B(iVar6, iVar0);
		}
		else
		{
			Global_1632166.f_90854[iVar0 /*1274*/].f_5 = 0;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar7, iVar0) == 2)
		{
			Global_1632166.f_90854[iVar0 /*1274*/].f_48 = unk_0x6BAB52A8425E7B4B(iVar7, iVar0);
		}
		else
		{
			Global_1632166.f_90854[iVar0 /*1274*/].f_48 = 0;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar8, iVar0) == 2)
		{
			Global_1632166.f_90854[iVar0 /*1274*/].f_47 = unk_0x6BAB52A8425E7B4B(iVar8, iVar0);
		}
		else
		{
			Global_1632166.f_90854[iVar0 /*1274*/].f_47 = 0;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar9, iVar0) == 2)
		{
			Global_1632166.f_90854[iVar0 /*1274*/].f_49 = unk_0x6BAB52A8425E7B4B(iVar9, iVar0);
		}
		else
		{
			Global_1632166.f_90854[iVar0 /*1274*/].f_49 = 0;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar10, iVar0) == 2)
		{
			Global_1632166.f_90854[iVar0 /*1274*/].f_740 = unk_0x6BAB52A8425E7B4B(iVar10, iVar0);
		}
		else
		{
			Global_1632166.f_90854[iVar0 /*1274*/].f_740 = 0;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar171, iVar0) == 5)
		{
			Global_1632166.f_90854[iVar0 /*1274*/].f_733 = { unk_0x866B2C4E49D29F3B(iVar171, iVar0) };
		}
		else
		{
			Global_1632166.f_90854[iVar0 /*1274*/].f_733 = { 0f, 0f, 0f };
		}
		if (unk_0x1C9BFBB46CC94A75(iVar172, iVar0) == 3)
		{
			Global_1632166.f_90854[iVar0 /*1274*/].f_736 = unk_0x07F84E836DFFE814(iVar172, iVar0);
		}
		else
		{
			Global_1632166.f_90854[iVar0 /*1274*/].f_736 = 0f;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar173, iVar0) == 5)
		{
			Global_1632166.f_90854[iVar0 /*1274*/].f_737 = { unk_0x866B2C4E49D29F3B(iVar173, iVar0) };
		}
		else
		{
			Global_1632166.f_90854[iVar0 /*1274*/].f_737 = { 0f, 0f, 0f };
		}
		if (unk_0x1C9BFBB46CC94A75(iVar167, iVar0) == 2)
		{
			Global_1632166.f_90854[iVar0 /*1274*/].f_441 = unk_0x6BAB52A8425E7B4B(iVar167, iVar0);
		}
		else
		{
			Global_1632166.f_90854[iVar0 /*1274*/].f_441 = 0;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar168, iVar0) == 2)
		{
			Global_1632166.f_90854[iVar0 /*1274*/].f_443 = unk_0x6BAB52A8425E7B4B(iVar168, iVar0);
		}
		else
		{
			Global_1632166.f_90854[iVar0 /*1274*/].f_443 = 0;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar169, iVar0) == 2)
		{
			Global_1632166.f_90854[iVar0 /*1274*/].f_442 = unk_0x6BAB52A8425E7B4B(iVar169, iVar0);
		}
		else
		{
			Global_1632166.f_90854[iVar0 /*1274*/].f_442 = 0;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar170, iVar0) == 5)
		{
			Global_1632166.f_90854[iVar0 /*1274*/].f_444 = { unk_0x866B2C4E49D29F3B(iVar170, iVar0) };
		}
		else
		{
			Global_1632166.f_90854[iVar0 /*1274*/].f_444 = { 0f, 0f, 0f };
		}
		StringCopy(&cVar2, "int", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar11[iVar0] = unk_0x05989B8A830B4E1C(iVar4, &cVar2);
		StringCopy(&cVar2, "ctp", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar17[iVar0] = unk_0x05989B8A830B4E1C(iVar4, &cVar2);
		StringCopy(&cVar2, "sps", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar23[iVar0] = unk_0x05989B8A830B4E1C(iVar4, &cVar2);
		StringCopy(&cVar2, "eps", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar29[iVar0] = unk_0x05989B8A830B4E1C(iVar4, &cVar2);
		StringCopy(&cVar2, "srt", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar35[iVar0] = unk_0x05989B8A830B4E1C(iVar4, &cVar2);
		StringCopy(&cVar2, "ert", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar41[iVar0] = unk_0x05989B8A830B4E1C(iVar4, &cVar2);
		StringCopy(&cVar2, "sfv", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar47[iVar0] = unk_0x05989B8A830B4E1C(iVar4, &cVar2);
		StringCopy(&cVar2, "efv", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar53[iVar0] = unk_0x05989B8A830B4E1C(iVar4, &cVar2);
		StringCopy(&cVar2, "ati", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar119[iVar0] = unk_0x05989B8A830B4E1C(iVar4, &cVar2);
		StringCopy(&cVar2, "ato", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar125[iVar0] = unk_0x05989B8A830B4E1C(iVar4, &cVar2);
		StringCopy(&cVar2, "atr", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar131[iVar0] = unk_0x05989B8A830B4E1C(iVar4, &cVar2);
		StringCopy(&cVar2, "ala", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar137[iVar0] = unk_0x05989B8A830B4E1C(iVar4, &cVar2);
		StringCopy(&cVar2, "csp", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar143[iVar0] = unk_0x05989B8A830B4E1C(iVar4, &cVar2);
		StringCopy(&cVar2, "csr", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar149[iVar0] = unk_0x05989B8A830B4E1C(iVar4, &cVar2);
		StringCopy(&cVar2, "cssbs", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar71[iVar0] = unk_0x05989B8A830B4E1C(iVar4, &cVar2);
		StringCopy(&cVar2, "skt", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar77[iVar0] = unk_0x05989B8A830B4E1C(iVar4, &cVar2);
		StringCopy(&cVar2, "skm", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar83[iVar0] = unk_0x05989B8A830B4E1C(iVar4, &cVar2);
		StringCopy(&cVar2, "eind", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar59[iVar0] = unk_0x05989B8A830B4E1C(iVar4, &cVar2);
		StringCopy(&cVar2, "etyp", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar65[iVar0] = unk_0x05989B8A830B4E1C(iVar4, &cVar2);
		StringCopy(&cVar2, "pstr", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar2, iVar0, 8);
		}
		uVar95[iVar0] = unk_0x05989B8A830B4E1C(iVar4, &cVar2);
		StringCopy(&cVar2, "pend", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar2, iVar0, 8);
		}
		uVar101[iVar0] = unk_0x05989B8A830B4E1C(iVar4, &cVar2);
		StringCopy(&cVar2, "strh", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar2, iVar0, 8);
		}
		uVar89[iVar0] = unk_0x05989B8A830B4E1C(iVar4, &cVar2);
		StringCopy(&cVar2, "endh", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar2, iVar0, 8);
		}
		uVar107[iVar0] = unk_0x05989B8A830B4E1C(iVar4, &cVar2);
		StringCopy(&cVar2, "svwi", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar113[iVar0] = unk_0x05989B8A830B4E1C(iVar4, &cVar2);
		StringCopy(&cVar2, "camnm", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar155[iVar0] = unk_0x05989B8A830B4E1C(iVar4, &cVar2);
		StringCopy(&cVar2, "locnm", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar161[iVar0] = unk_0x05989B8A830B4E1C(iVar4, &cVar2);
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			if (unk_0x1C9BFBB46CC94A75(uVar95[iVar0], iVar1) == 5)
			{
				Global_1632166.f_90854[iVar0 /*1274*/].f_6[iVar1 /*3*/] = { unk_0x866B2C4E49D29F3B(uVar95[iVar0], iVar1) };
			}
			else
			{
				Global_1632166.f_90854[iVar0 /*1274*/].f_6[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x1C9BFBB46CC94A75(uVar101[iVar0], iVar1) == 5)
			{
				Global_1632166.f_90854[iVar0 /*1274*/].f_19[iVar1 /*3*/] = { unk_0x866B2C4E49D29F3B(uVar101[iVar0], iVar1) };
			}
			else
			{
				Global_1632166.f_90854[iVar0 /*1274*/].f_19[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x1C9BFBB46CC94A75(uVar89[iVar0], iVar1) == 3)
			{
				Global_1632166.f_90854[iVar0 /*1274*/].f_32[iVar1] = unk_0x07F84E836DFFE814(uVar89[iVar0], iVar1);
			}
			else
			{
				Global_1632166.f_90854[iVar0 /*1274*/].f_32[iVar1] = 0f;
			}
			if (unk_0x1C9BFBB46CC94A75(uVar107[iVar0], iVar1) == 3)
			{
				Global_1632166.f_90854[iVar0 /*1274*/].f_37[iVar1] = unk_0x07F84E836DFFE814(uVar107[iVar0], iVar1);
			}
			else
			{
				Global_1632166.f_90854[iVar0 /*1274*/].f_37[iVar1] = 0f;
			}
			if (unk_0x1C9BFBB46CC94A75(uVar113[iVar0], iVar1) == 2)
			{
				Global_1632166.f_90854[iVar0 /*1274*/].f_42[iVar1] = unk_0x6BAB52A8425E7B4B(uVar113[iVar0], iVar1);
			}
			else
			{
				Global_1632166.f_90854[iVar0 /*1274*/].f_42[iVar1] = -1;
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 19)
		{
			if (unk_0x1C9BFBB46CC94A75(uVar11[iVar0], iVar1) == 2)
			{
				Global_1632166.f_90854[iVar0 /*1274*/].f_50[iVar1] = unk_0x6BAB52A8425E7B4B(uVar11[iVar0], iVar1);
			}
			else
			{
				Global_1632166.f_90854[iVar0 /*1274*/].f_50[iVar1] = 0;
			}
			if (unk_0x1C9BFBB46CC94A75(uVar17[iVar0], iVar1) == 2)
			{
				Global_1632166.f_90854[iVar0 /*1274*/].f_71[iVar1] = unk_0x6BAB52A8425E7B4B(uVar17[iVar0], iVar1);
			}
			else
			{
				Global_1632166.f_90854[iVar0 /*1274*/].f_71[iVar1] = 0;
			}
			if (unk_0x1C9BFBB46CC94A75(uVar23[iVar0], iVar1) == 5)
			{
				Global_1632166.f_90854[iVar0 /*1274*/].f_92[iVar1 /*3*/] = { unk_0x866B2C4E49D29F3B(uVar23[iVar0], iVar1) };
			}
			else
			{
				Global_1632166.f_90854[iVar0 /*1274*/].f_92[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x1C9BFBB46CC94A75(uVar29[iVar0], iVar1) == 5)
			{
				Global_1632166.f_90854[iVar0 /*1274*/].f_153[iVar1 /*3*/] = { unk_0x866B2C4E49D29F3B(uVar29[iVar0], iVar1) };
			}
			else
			{
				Global_1632166.f_90854[iVar0 /*1274*/].f_153[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x1C9BFBB46CC94A75(uVar35[iVar0], iVar1) == 5)
			{
				Global_1632166.f_90854[iVar0 /*1274*/].f_214[iVar1 /*3*/] = { unk_0x866B2C4E49D29F3B(uVar35[iVar0], iVar1) };
			}
			else
			{
				Global_1632166.f_90854[iVar0 /*1274*/].f_214[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x1C9BFBB46CC94A75(uVar41[iVar0], iVar1) == 5)
			{
				Global_1632166.f_90854[iVar0 /*1274*/].f_275[iVar1 /*3*/] = { unk_0x866B2C4E49D29F3B(uVar41[iVar0], iVar1) };
			}
			else
			{
				Global_1632166.f_90854[iVar0 /*1274*/].f_275[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x1C9BFBB46CC94A75(uVar47[iVar0], iVar1) == 3)
			{
				Global_1632166.f_90854[iVar0 /*1274*/].f_336[iVar1] = unk_0x07F84E836DFFE814(uVar47[iVar0], iVar1);
			}
			else
			{
				Global_1632166.f_90854[iVar0 /*1274*/].f_336[iVar1] = 0f;
			}
			if (unk_0x1C9BFBB46CC94A75(uVar53[iVar0], iVar1) == 3)
			{
				Global_1632166.f_90854[iVar0 /*1274*/].f_357[iVar1] = unk_0x07F84E836DFFE814(uVar53[iVar0], iVar1);
			}
			else
			{
				Global_1632166.f_90854[iVar0 /*1274*/].f_357[iVar1] = 0f;
			}
			if (unk_0x1C9BFBB46CC94A75(uVar71[iVar0], iVar1) == 2)
			{
				Global_1632166.f_90854[iVar0 /*1274*/].f_378[iVar1] = unk_0x6BAB52A8425E7B4B(uVar71[iVar0], iVar1);
			}
			else
			{
				Global_1632166.f_90854[iVar0 /*1274*/].f_378[iVar1] = 0;
			}
			if (unk_0x1C9BFBB46CC94A75(uVar77[iVar0], iVar1) == 2)
			{
				Global_1632166.f_90854[iVar0 /*1274*/].f_399[iVar1] = unk_0x6BAB52A8425E7B4B(uVar77[iVar0], iVar1);
			}
			else
			{
				Global_1632166.f_90854[iVar0 /*1274*/].f_399[iVar1] = 0;
			}
			if (unk_0x1C9BFBB46CC94A75(uVar83[iVar0], iVar1) == 3)
			{
				Global_1632166.f_90854[iVar0 /*1274*/].f_420[iVar1] = unk_0x07F84E836DFFE814(uVar83[iVar0], iVar1);
			}
			else
			{
				Global_1632166.f_90854[iVar0 /*1274*/].f_420[iVar1] = 0f;
			}
			if (unk_0x1C9BFBB46CC94A75(uVar119[iVar0], iVar1) == 2)
			{
				Global_1632166.f_90854[iVar0 /*1274*/].f_529[iVar1] = unk_0x6BAB52A8425E7B4B(uVar119[iVar0], iVar1);
			}
			else
			{
				Global_1632166.f_90854[iVar0 /*1274*/].f_529[iVar1] = 0;
			}
			if (unk_0x1C9BFBB46CC94A75(uVar125[iVar0], iVar1) == 5)
			{
				Global_1632166.f_90854[iVar0 /*1274*/].f_550[iVar1 /*3*/] = { unk_0x866B2C4E49D29F3B(uVar125[iVar0], iVar1) };
			}
			else
			{
				Global_1632166.f_90854[iVar0 /*1274*/].f_550[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x1C9BFBB46CC94A75(uVar131[iVar0], iVar1) == 5)
			{
				Global_1632166.f_90854[iVar0 /*1274*/].f_611[iVar1 /*3*/] = { unk_0x866B2C4E49D29F3B(uVar131[iVar0], iVar1) };
			}
			else
			{
				Global_1632166.f_90854[iVar0 /*1274*/].f_611[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x1C9BFBB46CC94A75(uVar137[iVar0], iVar1) == 5)
			{
				Global_1632166.f_90854[iVar0 /*1274*/].f_672[iVar1 /*3*/] = { unk_0x866B2C4E49D29F3B(uVar137[iVar0], iVar1) };
				Global_1632166.f_100452[iVar1] = Global_1632166.f_90854[iVar0 /*1274*/].f_672[iVar1 /*3*/];
				Global_1632166.f_100473[iVar1] = Global_1632166.f_90854[iVar0 /*1274*/].f_672[iVar1 /*3*/].f_1;
				Global_1632166.f_100494[iVar1] = Global_1632166.f_90854[iVar0 /*1274*/].f_672[iVar1 /*3*/].f_2;
			}
			else
			{
				Global_1632166.f_90854[iVar0 /*1274*/].f_672[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x1C9BFBB46CC94A75(uVar143[iVar0], iVar1) == 5)
			{
				Global_1632166.f_90854[iVar0 /*1274*/].f_447[iVar1 /*3*/] = { unk_0x866B2C4E49D29F3B(uVar143[iVar0], iVar1) };
			}
			else
			{
				Global_1632166.f_90854[iVar0 /*1274*/].f_447[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x1C9BFBB46CC94A75(uVar149[iVar0], iVar1) == 3)
			{
				Global_1632166.f_90854[iVar0 /*1274*/].f_508[iVar1] = unk_0x07F84E836DFFE814(uVar149[iVar0], iVar1);
			}
			else
			{
				Global_1632166.f_90854[iVar0 /*1274*/].f_508[iVar1] = 0f;
			}
			if (unk_0x1C9BFBB46CC94A75(uVar155[iVar0], iVar1) == 4)
			{
				StringCopy(&(Global_1632166.f_90854[iVar0 /*1274*/].f_1112[iVar1 /*4*/]), unk_0xE0DCCCE203DC2979(uVar155[iVar0], iVar1), 16);
			}
			else
			{
				StringCopy(&(Global_1632166.f_90854[iVar0 /*1274*/].f_1112[iVar1 /*4*/]), "", 16);
			}
			if (unk_0x1C9BFBB46CC94A75(uVar161[iVar0], iVar1) == 4)
			{
				StringCopy(&(Global_1632166.f_90854[iVar0 /*1274*/].f_1193[iVar1 /*4*/]), unk_0xE0DCCCE203DC2979(uVar161[iVar0], iVar1), 16);
			}
			else
			{
				StringCopy(&(Global_1632166.f_90854[iVar0 /*1274*/].f_1193[iVar1 /*4*/]), "", 16);
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 29)
		{
			if (unk_0x1C9BFBB46CC94A75(uVar59[iVar0], iVar1) == 2)
			{
				Global_1632166.f_90854[iVar0 /*1274*/].f_741[iVar1 /*12*/].f_1 = unk_0x6BAB52A8425E7B4B(uVar59[iVar0], iVar1);
			}
			else
			{
				Global_1632166.f_90854[iVar0 /*1274*/].f_741[iVar1 /*12*/].f_1 = -1;
			}
			if (unk_0x1C9BFBB46CC94A75(uVar65[iVar0], iVar1) == 2)
			{
				Global_1632166.f_90854[iVar0 /*1274*/].f_741[iVar1 /*12*/] = unk_0x6BAB52A8425E7B4B(uVar65[iVar0], iVar1);
			}
			else
			{
				Global_1632166.f_90854[iVar0 /*1274*/].f_741[iVar1 /*12*/] = -1;
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_195(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char cVar4[16];
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	if (unk_0x4C4E1CA899A313BB(iParam0, "eoir") == 0 || unk_0x4C4E1CA899A313BB(iParam0, "eoep") == 0)
	{
		return;
	}
	iVar8 = unk_0x05989B8A830B4E1C(iParam0, "eoid");
	iVar9 = unk_0x05989B8A830B4E1C(iParam0, "eoet");
	iVar10 = unk_0x4C4E1CA899A313BB(iParam0, "eoir");
	iVar11 = unk_0x4C4E1CA899A313BB(iParam0, "eoep");
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		if (unk_0x1C9BFBB46CC94A75(iVar8, iVar0) == 2)
		{
			Global_1632166.f_82808[iVar0] = unk_0x6BAB52A8425E7B4B(iVar8, iVar0);
		}
		else
		{
			Global_1632166.f_82808[iVar0] = -1;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar9, iVar0) == 2)
		{
			Global_1632166.f_82777[iVar0] = unk_0x6BAB52A8425E7B4B(iVar9, iVar0);
		}
		else
		{
			Global_1632166.f_82777[iVar0] = -1;
		}
		iVar1 = 0;
		while (iVar1 <= 9)
		{
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				StringCopy(&cVar4, "eor", 16);
				StringIntConCat(&cVar4, iVar0, 16);
				StringIntConCat(&cVar4, iVar1, 16);
				StringIntConCat(&cVar4, iVar2, 16);
				if (unk_0xF0E984A1CED01E3C(iVar10, &cVar4) == 2)
				{
					Global_1632166.f_82839[iVar0 /*51*/][iVar1 /*5*/][iVar2] = unk_0x4985D6D7F7AB891A(iVar10, &cVar4);
				}
				else
				{
					Global_1632166.f_82839[iVar0 /*51*/][iVar1 /*5*/][iVar2] = -1;
				}
				StringCopy(&cVar4, "eop", 16);
				StringIntConCat(&cVar4, iVar0, 16);
				StringIntConCat(&cVar4, iVar1, 16);
				StringIntConCat(&cVar4, iVar2, 16);
				if (unk_0xF0E984A1CED01E3C(iVar11, &cVar4) == 2)
				{
					Global_1632166.f_84370[iVar0 /*51*/][iVar1 /*5*/][iVar2] = unk_0x4985D6D7F7AB891A(iVar11, &cVar4);
				}
				else
				{
					Global_1632166.f_82839[iVar0 /*51*/][iVar1 /*5*/][iVar2] = -1;
				}
				iVar2++;
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		iVar12 = Global_1632166.f_82808[iVar0];
		iVar13 = Global_1632166.f_82777[iVar0];
		if (iVar12 != -1 && iVar13 != -1)
		{
			iVar3 = 0;
			while (iVar3 <= 29)
			{
				if ((iVar3 != iVar0 && Global_1632166.f_82808[iVar3] == iVar12) && Global_1632166.f_82777[iVar3] == iVar13)
				{
					Global_1632166.f_82777[iVar3] = -1;
					Global_1632166.f_82808[iVar3] = -1;
					iVar1 = 0;
					while (iVar1 <= 9)
					{
						iVar2 = 0;
						while (iVar2 <= 3)
						{
							Global_1632166.f_82839[iVar3 /*51*/][iVar1 /*5*/][iVar2] = -1;
							Global_1632166.f_84370[iVar3 /*51*/][iVar1 /*5*/][iVar2] = -1;
							iVar2++;
						}
						iVar1++;
					}
				}
				iVar3++;
			}
		}
		iVar0++;
	}
}

void func_196(int iParam0)
{
	int iVar0;
	int iVar1;
	char[] cVar2[8];
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8[4];
	var uVar13[4];
	var uVar18[4];
	var uVar23[4];
	var uVar28[4];
	
	iVar4 = unk_0x4C4E1CA899A313BB(iParam0, "kill");
	iVar5 = unk_0x05989B8A830B4E1C(iVar4, "no");
	iVar6 = unk_0x05989B8A830B4E1C(iVar4, "mcp");
	iVar7 = unk_0x05989B8A830B4E1C(iVar4, "mcf");
	iVar1 = 0;
	while (iVar1 <= (Global_1632166.f_29 - 1))
	{
		if (iVar1 < 4)
		{
			Global_1632166.f_40127[iVar1] = unk_0x6BAB52A8425E7B4B(iVar5, iVar1);
			StringCopy(&cVar2, "rul", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar8[iVar1] = unk_0x05989B8A830B4E1C(iVar4, &cVar2);
			StringCopy(&cVar2, "pri", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar13[iVar1] = unk_0x05989B8A830B4E1C(iVar4, &cVar2);
			StringCopy(&cVar2, "lim", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar18[iVar1] = unk_0x05989B8A830B4E1C(iVar4, &cVar2);
			StringCopy(&cVar2, "jtop", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar23[iVar1] = unk_0x05989B8A830B4E1C(iVar4, &cVar2);
			StringCopy(&cVar2, "jtof", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar28[iVar1] = unk_0x05989B8A830B4E1C(iVar4, &cVar2);
			iVar0 = 0;
			while (iVar0 <= (Global_1632166.f_40127[iVar1] - 1))
			{
				if (iVar0 < 17)
				{
					Global_1632166.f_39633[iVar0 /*29*/][iVar1] = unk_0x6BAB52A8425E7B4B(uVar8[iVar1], iVar0);
					Global_1632166.f_39633[iVar0 /*29*/].f_5[iVar1] = unk_0x6BAB52A8425E7B4B(uVar13[iVar1], iVar0);
					if (Global_1632166.f_39633[iVar0 /*29*/].f_5[iVar1] == -1)
					{
						Global_1632166.f_39633[iVar0 /*29*/].f_5[iVar1] = 99999;
					}
					Global_1632166.f_39633[iVar0 /*29*/].f_10[iVar1] = unk_0x6BAB52A8425E7B4B(uVar18[iVar1], iVar0);
					if (unk_0x1C9BFBB46CC94A75(uVar23[iVar1], iVar0) == 2)
					{
						Global_1632166.f_39633[iVar0 /*29*/].f_15[iVar1] = unk_0x6BAB52A8425E7B4B(uVar23[iVar1], iVar0);
					}
					else
					{
						Global_1632166.f_39633[iVar0 /*29*/].f_15[iVar1] = 0;
					}
					if (unk_0x1C9BFBB46CC94A75(uVar28[iVar1], iVar0) == 2)
					{
						Global_1632166.f_39633[iVar0 /*29*/].f_20[iVar1] = unk_0x6BAB52A8425E7B4B(uVar28[iVar1], iVar0);
					}
					else
					{
						Global_1632166.f_39633[iVar0 /*29*/].f_20[iVar1] = 0;
					}
					if (unk_0x1C9BFBB46CC94A75(iVar6, iVar0) == 2)
					{
						Global_1632166.f_39633[iVar0 /*29*/].f_28 = unk_0x6BAB52A8425E7B4B(iVar6, iVar0);
					}
					else
					{
						Global_1632166.f_39633[iVar0 /*29*/].f_28 = -1;
					}
					if (unk_0x1C9BFBB46CC94A75(iVar7, iVar0) == 2)
					{
						Global_1632166.f_39633[iVar0 /*29*/].f_27 = unk_0x6BAB52A8425E7B4B(iVar7, iVar0);
					}
					else
					{
						Global_1632166.f_39633[iVar0 /*29*/].f_27 = -1;
					}
				}
				iVar0++;
			}
		}
		iVar1++;
	}
}

void func_197(int iParam0)
{
	int iVar0;
	int iVar1;
	char[] cVar2[8];
	int iVar4;
	var uVar5[4];
	var uVar10[4];
	var uVar15[4];
	var uVar20[4];
	var uVar25[4];
	var uVar30[4];
	var uVar35[4];
	var uVar40[4];
	var uVar45[4];
	var uVar50[4];
	var uVar55[4];
	var uVar60[4];
	var uVar65[4];
	var uVar70[4];
	var uVar75[4];
	int iVar80;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	int iVar85;
	int iVar86;
	int iVar87;
	int iVar88;
	int iVar89;
	int iVar90;
	int iVar91;
	int iVar92;
	int iVar93;
	int iVar94;
	int iVar95;
	int iVar96;
	int iVar97;
	int iVar98;
	int iVar99;
	int iVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	int iVar105;
	int iVar106;
	int iVar107;
	
	iVar4 = unk_0x4C4E1CA899A313BB(iParam0, "goto");
	Global_1632166.f_40133[0] = unk_0x4985D6D7F7AB891A(iVar4, "no");
	Global_1632166.f_6 = unk_0x4985D6D7F7AB891A(iVar4, "atrig");
	iVar80 = unk_0x05989B8A830B4E1C(iVar4, "lmcp");
	iVar81 = unk_0x05989B8A830B4E1C(iVar4, "lmcf");
	iVar1 = 0;
	while (iVar1 <= (Global_1632166.f_29 - 1))
	{
		if (iVar1 < 4)
		{
			StringCopy(&cVar2, "loc", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar5[iVar1] = unk_0x05989B8A830B4E1C(iVar4, &cVar2);
			StringCopy(&cVar2, "sz", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar10[iVar1] = unk_0x05989B8A830B4E1C(iVar4, &cVar2);
			StringCopy(&cVar2, "rl", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar15[iVar1] = unk_0x05989B8A830B4E1C(iVar4, &cVar2);
			StringCopy(&cVar2, "pri", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar20[iVar1] = unk_0x05989B8A830B4E1C(iVar4, &cVar2);
			StringCopy(&cVar2, "wtm", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar25[iVar1] = unk_0x05989B8A830B4E1C(iVar4, &cVar2);
			StringCopy(&cVar2, "gps", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar40[iVar1] = unk_0x05989B8A830B4E1C(iVar4, &cVar2);
			StringCopy(&cVar2, "smc", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar45[iVar1] = unk_0x05989B8A830B4E1C(iVar4, &cVar2);
			StringCopy(&cVar2, "lbs", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar50[iVar1] = unk_0x05989B8A830B4E1C(iVar4, &cVar2);
			StringCopy(&cVar2, "rcptp", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar60[iVar1] = unk_0x05989B8A830B4E1C(iVar4, &cVar2);
			StringCopy(&cVar2, "cmp", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar30[iVar1] = unk_0x05989B8A830B4E1C(iVar4, &cVar2);
			StringCopy(&cVar2, "air", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar35[iVar1] = unk_0x05989B8A830B4E1C(iVar4, &cVar2);
			StringCopy(&cVar2, "veh", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar65[iVar1] = unk_0x05989B8A830B4E1C(iVar4, &cVar2);
			StringCopy(&cVar2, "dir", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar55[iVar1] = unk_0x05989B8A830B4E1C(iVar4, &cVar2);
			StringCopy(&cVar2, "jtop", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar70[iVar1] = unk_0x05989B8A830B4E1C(iVar4, &cVar2);
			StringCopy(&cVar2, "jtof", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar75[iVar1] = unk_0x05989B8A830B4E1C(iVar4, &cVar2);
			iVar0 = 0;
			while (iVar0 <= (Global_1632166.f_40133[0] - 1))
			{
				Global_1632166.f_37688[iVar0 /*108*/].f_1[0 /*3*/] = { unk_0x866B2C4E49D29F3B(uVar5[iVar1], iVar0) };
				Global_1632166.f_37688[iVar0 /*108*/].f_14[0] = unk_0x07F84E836DFFE814(uVar10[iVar1], iVar0);
				Global_1632166.f_37688[iVar0 /*108*/].f_62[iVar1] = unk_0x6BAB52A8425E7B4B(uVar15[iVar1], iVar0);
				Global_1632166.f_37688[iVar0 /*108*/].f_67[iVar1] = unk_0x6BAB52A8425E7B4B(uVar20[iVar1], iVar0);
				if (Global_1632166.f_37688[iVar0 /*108*/].f_67[iVar1] == -1)
				{
					Global_1632166.f_37688[iVar0 /*108*/].f_67[iVar1] = 99999;
				}
				Global_1632166.f_37688[iVar0 /*108*/].f_72[iVar1] = unk_0x6BAB52A8425E7B4B(uVar25[iVar1], iVar0);
				Global_1632166.f_37688[iVar0 /*108*/].f_48[iVar1] = unk_0x07F84E836DFFE814(uVar60[iVar1], iVar0);
				Global_1632166.f_37688[iVar0 /*108*/].f_77[iVar1] = unk_0x6BAB52A8425E7B4B(uVar30[iVar1], iVar0);
				Global_1632166.f_37688[iVar0 /*108*/].f_36[iVar1] = unk_0x6BAB52A8425E7B4B(uVar35[iVar1], iVar0);
				Global_1632166.f_37688[iVar0 /*108*/].f_53 = unk_0x6BAB52A8425E7B4B(uVar50[iVar1], iVar0);
				Global_1632166.f_37688[iVar0 /*108*/].f_31[0] = unk_0x6BAB52A8425E7B4B(uVar40[iVar1], iVar0);
				Global_1632166.f_37688[iVar0 /*108*/].f_41[0] = unk_0x6BAB52A8425E7B4B(uVar45[iVar1], iVar0);
				Global_1632166.f_37688[iVar0 /*108*/].f_98 = unk_0x07F84E836DFFE814(uVar55[iVar1], iVar0);
				if (unk_0x1C9BFBB46CC94A75(iVar80, iVar0) == 2)
				{
					Global_1632166.f_37688[iVar0 /*108*/].f_94 = unk_0x6BAB52A8425E7B4B(iVar80, iVar0);
				}
				else
				{
					Global_1632166.f_37688[iVar0 /*108*/].f_94 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(iVar81, iVar0) == 2)
				{
					Global_1632166.f_37688[iVar0 /*108*/].f_95 = unk_0x6BAB52A8425E7B4B(iVar81, iVar0);
				}
				else
				{
					Global_1632166.f_37688[iVar0 /*108*/].f_95 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar65[iVar1], iVar0) == 2)
				{
					Global_1632166.f_37688[iVar0 /*108*/].f_57[iVar1] = unk_0x6BAB52A8425E7B4B(uVar65[iVar1], iVar0);
				}
				else
				{
					Global_1632166.f_37688[iVar0 /*108*/].f_57[iVar1] = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar70[iVar1], iVar0) == 2)
				{
					Global_1632166.f_37688[iVar0 /*108*/].f_82[iVar1] = unk_0x6BAB52A8425E7B4B(uVar70[iVar1], iVar0);
				}
				else
				{
					Global_1632166.f_37688[iVar0 /*108*/].f_82[iVar1] = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar75[iVar1], iVar0) == 2)
				{
					Global_1632166.f_37688[iVar0 /*108*/].f_87[iVar1] = unk_0x6BAB52A8425E7B4B(uVar75[iVar1], iVar0);
				}
				else
				{
					Global_1632166.f_37688[iVar0 /*108*/].f_87[iVar1] = 0;
				}
				iVar0++;
			}
		}
		iVar1++;
	}
	iVar82 = unk_0x05989B8A830B4E1C(iVar4, "locbc");
	iVar83 = unk_0x05989B8A830B4E1C(iVar4, "loc2rd");
	iVar84 = unk_0x05989B8A830B4E1C(iVar4, "loclbr");
	iVar85 = unk_0x05989B8A830B4E1C(iVar4, "locdir");
	iVar86 = unk_0x05989B8A830B4E1C(iVar4, "loctol");
	iVar87 = unk_0x05989B8A830B4E1C(iVar4, "lochgt");
	iVar88 = unk_0x05989B8A830B4E1C(iVar4, "locart");
	iVar89 = unk_0x05989B8A830B4E1C(iVar4, "locaa1");
	iVar90 = unk_0x05989B8A830B4E1C(iVar4, "locaa2");
	iVar91 = unk_0x05989B8A830B4E1C(iVar4, "locaaw");
	iVar92 = unk_0x05989B8A830B4E1C(iVar4, "nmpass");
	iVar93 = unk_0x05989B8A830B4E1C(iVar4, "nmfail");
	iVar94 = unk_0x05989B8A830B4E1C(iVar4, "locstd");
	iVar95 = unk_0x05989B8A830B4E1C(iVar4, "locstm");
	iVar96 = unk_0x05989B8A830B4E1C(iVar4, "lcbs2");
	iVar97 = unk_0x05989B8A830B4E1C(iVar4, "locti");
	iVar98 = unk_0x05989B8A830B4E1C(iVar4, "locgc");
	iVar99 = unk_0x05989B8A830B4E1C(iVar4, "loclto");
	iVar100 = unk_0x05989B8A830B4E1C(iVar4, "loctmw");
	iVar101 = unk_0x05989B8A830B4E1C(iVar4, "loctmt");
	iVar102 = unk_0x05989B8A830B4E1C(iVar4, "loctst");
	iVar103 = unk_0x05989B8A830B4E1C(iVar4, "locloo");
	iVar104 = unk_0x05989B8A830B4E1C(iVar4, "loccors");
	iVar105 = unk_0x05989B8A830B4E1C(iVar4, "lochght");
	iVar106 = unk_0x05989B8A830B4E1C(iVar4, "locdpth");
	iVar107 = unk_0x05989B8A830B4E1C(iVar4, "locbso");
	iVar0 = 0;
	while (iVar0 <= (Global_1632166.f_40133[0] - 1))
	{
		if (unk_0x1C9BFBB46CC94A75(iVar82, iVar0) == 2)
		{
			Global_1632166.f_37688[iVar0 /*108*/].f_46 = unk_0x6BAB52A8425E7B4B(iVar82, iVar0);
		}
		else
		{
			Global_1632166.f_37688[iVar0 /*108*/].f_46 = 0;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar83, iVar0) == 3)
		{
			Global_1632166.f_37688[iVar0 /*108*/].f_20 = unk_0x07F84E836DFFE814(iVar83, iVar0);
		}
		else
		{
			Global_1632166.f_37688[iVar0 /*108*/].f_20 = 0f;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar84, iVar0) == 3)
		{
			Global_1632166.f_37688[iVar0 /*108*/].f_19 = unk_0x07F84E836DFFE814(iVar84, iVar0);
		}
		else
		{
			Global_1632166.f_37688[iVar0 /*108*/].f_19 = 1f;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar85, iVar0) == 3)
		{
			Global_1632166.f_37688[iVar0 /*108*/].f_28 = unk_0x07F84E836DFFE814(iVar85, iVar0);
		}
		else
		{
			Global_1632166.f_37688[iVar0 /*108*/].f_28 = 0f;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar86, iVar0) == 3)
		{
			Global_1632166.f_37688[iVar0 /*108*/].f_29 = unk_0x07F84E836DFFE814(iVar86, iVar0);
		}
		else
		{
			Global_1632166.f_37688[iVar0 /*108*/].f_29 = 0f;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar87, iVar0) == 3)
		{
			Global_1632166.f_37688[iVar0 /*108*/].f_30 = unk_0x07F84E836DFFE814(iVar87, iVar0);
		}
		else
		{
			Global_1632166.f_37688[iVar0 /*108*/].f_30 = 0f;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar97, iVar0) == 3)
		{
			Global_1632166.f_37688[iVar0 /*108*/].f_55 = unk_0x07F84E836DFFE814(iVar97, iVar0);
		}
		else
		{
			Global_1632166.f_37688[iVar0 /*108*/].f_55 = 0f;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar98, iVar0) == 3)
		{
			Global_1632166.f_37688[iVar0 /*108*/].f_56 = unk_0x07F84E836DFFE814(iVar98, iVar0);
		}
		else
		{
			Global_1632166.f_37688[iVar0 /*108*/].f_56 = 0f;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar88, iVar0) == 2)
		{
			Global_1632166.f_37688[iVar0 /*108*/] = unk_0x6BAB52A8425E7B4B(iVar88, iVar0);
		}
		else
		{
			Global_1632166.f_37688[iVar0 /*108*/] = 0;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar92, iVar0) == 2)
		{
			Global_1632166.f_37688[iVar0 /*108*/].f_92 = unk_0x6BAB52A8425E7B4B(iVar92, iVar0);
		}
		else
		{
			Global_1632166.f_37688[iVar0 /*108*/].f_92 = -1;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar93, iVar0) == 2)
		{
			Global_1632166.f_37688[iVar0 /*108*/].f_93 = unk_0x6BAB52A8425E7B4B(iVar93, iVar0);
		}
		else
		{
			Global_1632166.f_37688[iVar0 /*108*/].f_93 = -1;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar94, iVar0) == 3)
		{
			Global_1632166.f_37688[iVar0 /*108*/].f_97 = unk_0x07F84E836DFFE814(iVar94, iVar0);
		}
		else
		{
			Global_1632166.f_37688[iVar0 /*108*/].f_97 = 10.5f;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar105, iVar0) == 3)
		{
			Global_1632166.f_37688[iVar0 /*108*/].f_99 = unk_0x07F84E836DFFE814(iVar105, iVar0);
		}
		else
		{
			Global_1632166.f_37688[iVar0 /*108*/].f_99 = 1f;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar106, iVar0) == 3)
		{
			Global_1632166.f_37688[iVar0 /*108*/].f_100 = unk_0x07F84E836DFFE814(iVar106, iVar0);
		}
		else
		{
			Global_1632166.f_37688[iVar0 /*108*/].f_100 = 0f;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar95, iVar0) == 2)
		{
			Global_1632166.f_37688[iVar0 /*108*/].f_96 = unk_0x6BAB52A8425E7B4B(iVar95, iVar0);
		}
		else
		{
			Global_1632166.f_37688[iVar0 /*108*/].f_96 = 0;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar96, iVar0) == 2)
		{
			Global_1632166.f_37688[iVar0 /*108*/].f_54 = unk_0x6BAB52A8425E7B4B(iVar96, iVar0);
		}
		else
		{
			Global_1632166.f_37688[iVar0 /*108*/].f_54 = 0;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar103, iVar0) == 2)
		{
			Global_1632166.f_37688[iVar0 /*108*/].f_102 = unk_0x6BAB52A8425E7B4B(iVar103, iVar0);
		}
		else
		{
			Global_1632166.f_37688[iVar0 /*108*/].f_102 = 0;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar104, iVar0) == 2)
		{
			Global_1632166.f_37688[iVar0 /*108*/].f_47 = unk_0x6BAB52A8425E7B4B(iVar104, iVar0);
		}
		else
		{
			Global_1632166.f_37688[iVar0 /*108*/].f_47 = 0;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar99, iVar0) == 3)
		{
			Global_1632166.f_37688[iVar0 /*108*/].f_103 = unk_0x07F84E836DFFE814(iVar99, iVar0);
		}
		else
		{
			Global_1632166.f_37688[iVar0 /*108*/].f_103 = 0f;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar100, iVar0) == 3)
		{
			Global_1632166.f_37688[iVar0 /*108*/].f_104 = unk_0x07F84E836DFFE814(iVar100, iVar0);
		}
		else
		{
			Global_1632166.f_37688[iVar0 /*108*/].f_104 = 0f;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar101, iVar0) == 3)
		{
			Global_1632166.f_37688[iVar0 /*108*/].f_105 = unk_0x07F84E836DFFE814(iVar101, iVar0);
		}
		else
		{
			Global_1632166.f_37688[iVar0 /*108*/].f_105 = 0f;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar102, iVar0) == 2)
		{
			Global_1632166.f_37688[iVar0 /*108*/].f_106 = unk_0x6BAB52A8425E7B4B(iVar102, iVar0);
		}
		else
		{
			Global_1632166.f_37688[iVar0 /*108*/].f_106 = -1;
		}
		if (unk_0x1C9BFBB46CC94A75(iVar107, iVar0) == 2)
		{
			Global_1632166.f_37688[iVar0 /*108*/].f_101 = unk_0x6BAB52A8425E7B4B(iVar107, iVar0);
		}
		else
		{
			Global_1632166.f_37688[iVar0 /*108*/].f_101 = 0;
		}
		if ((unk_0x1C9BFBB46CC94A75(iVar89, iVar0) == 5 && unk_0x1C9BFBB46CC94A75(iVar90, iVar0) == 5) && unk_0x1C9BFBB46CC94A75(iVar91, iVar0) == 3)
		{
			Global_1632166.f_37688[iVar0 /*108*/].f_21 = { unk_0x866B2C4E49D29F3B(iVar89, iVar0) };
			Global_1632166.f_37688[iVar0 /*108*/].f_24 = { unk_0x866B2C4E49D29F3B(iVar90, iVar0) };
			Global_1632166.f_37688[iVar0 /*108*/].f_27 = unk_0x07F84E836DFFE814(iVar91, iVar0);
		}
		else
		{
			Global_1632166.f_37688[iVar0 /*108*/].f_21 = { 0f, 0f, 0f };
			Global_1632166.f_37688[iVar0 /*108*/].f_24 = { 0f, 0f, 0f };
			Global_1632166.f_37688[iVar0 /*108*/].f_27 = 1f;
		}
		iVar0++;
	}
}

void func_198(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (unk_0xF0E984A1CED01E3C(iParam0, "cover") == 6)
	{
		iVar1 = unk_0x4C4E1CA899A313BB(iParam0, "cover");
		Global_1632166.f_43009 = unk_0x4985D6D7F7AB891A(iVar1, "no");
		iVar2 = unk_0x05989B8A830B4E1C(iVar1, "loc");
		iVar3 = unk_0x05989B8A830B4E1C(iVar1, "dir");
		iVar4 = unk_0x05989B8A830B4E1C(iVar1, "use");
		iVar5 = unk_0x05989B8A830B4E1C(iVar1, "high");
		iVar6 = unk_0x05989B8A830B4E1C(iVar1, "arc");
		iVar0 = 0;
		while (iVar0 <= (Global_1632166.f_43009 - 1))
		{
			Global_1632166.f_43010[iVar0 /*7*/] = { unk_0x866B2C4E49D29F3B(iVar2, iVar0) };
			Global_1632166.f_43010[iVar0 /*7*/].f_3 = unk_0x07F84E836DFFE814(iVar3, iVar0);
			Global_1632166.f_43010[iVar0 /*7*/].f_4 = unk_0x6BAB52A8425E7B4B(iVar4, iVar0);
			Global_1632166.f_43010[iVar0 /*7*/].f_5 = unk_0x6BAB52A8425E7B4B(iVar5, iVar0);
			Global_1632166.f_43010[iVar0 /*7*/].f_6 = unk_0x6BAB52A8425E7B4B(iVar6, iVar0);
			iVar0++;
		}
	}
}

void func_199(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	var uVar16;
	int iVar17;
	var uVar18;
	int iVar19;
	
	iVar2 = unk_0x4C4E1CA899A313BB(iParam0, "door");
	Global_1632166.f_42722 = unk_0x4985D6D7F7AB891A(iVar2, "no");
	iVar3 = unk_0x05989B8A830B4E1C(iVar2, "loc");
	iVar4 = unk_0x05989B8A830B4E1C(iVar2, "fopen");
	iVar5 = unk_0x05989B8A830B4E1C(iVar2, "model");
	uVar6 = unk_0x05989B8A830B4E1C(iVar2, "lock");
	uVar7 = unk_0x05989B8A830B4E1C(iVar2, "swing");
	iVar8 = unk_0x05989B8A830B4E1C(iVar2, "udrle");
	iVar9 = unk_0x05989B8A830B4E1C(iVar2, "udtem");
	iVar10 = unk_0x05989B8A830B4E1C(iVar2, "udrat");
	uVar11 = unk_0x05989B8A830B4E1C(iVar2, "swingu");
	iVar12 = unk_0x05989B8A830B4E1C(iVar2, "audst");
	iVar13 = unk_0x05989B8A830B4E1C(iVar2, "aurt");
	iVar14 = unk_0x05989B8A830B4E1C(iVar2, "uaudst");
	iVar15 = unk_0x05989B8A830B4E1C(iVar2, "uaurt");
	uVar16 = unk_0x05989B8A830B4E1C(iVar2, "lfp");
	iVar17 = unk_0x05989B8A830B4E1C(iVar2, "dtime");
	uVar18 = unk_0x05989B8A830B4E1C(iVar2, "mid");
	iVar19 = unk_0x05989B8A830B4E1C(iVar2, "dbs");
	iVar0 = 0;
	while (iVar0 <= (Global_1632166.f_42722 - 1))
	{
		if (iVar0 < 15)
		{
			Global_1632166.f_42723[iVar0 /*19*/] = { unk_0x866B2C4E49D29F3B(iVar3, iVar0) };
			Global_1632166.f_42723[iVar0 /*19*/].f_3 = unk_0x07F84E836DFFE814(iVar4, iVar0);
			Global_1632166.f_42723[iVar0 /*19*/].f_14 = unk_0x1443290B580EC8DD(uVar6, iVar0);
			Global_1632166.f_42723[iVar0 /*19*/].f_15 = unk_0x1443290B580EC8DD(uVar7, iVar0);
			Global_1632166.f_42723[iVar0 /*19*/].f_5 = unk_0x6BAB52A8425E7B4B(iVar8, iVar0);
			Global_1632166.f_42723[iVar0 /*19*/].f_6 = unk_0x6BAB52A8425E7B4B(iVar9, iVar0);
			Global_1632166.f_42723[iVar0 /*19*/].f_13 = unk_0x07F84E836DFFE814(iVar10, iVar0);
			Global_1632166.f_42723[iVar0 /*19*/].f_16 = unk_0x1443290B580EC8DD(uVar11, iVar0);
			Global_1632166.f_42723[iVar0 /*19*/].f_8 = unk_0x07F84E836DFFE814(iVar13, iVar0);
			Global_1632166.f_42723[iVar0 /*19*/].f_9 = unk_0x07F84E836DFFE814(iVar12, iVar0);
			Global_1632166.f_42723[iVar0 /*19*/].f_10 = unk_0x07F84E836DFFE814(iVar15, iVar0);
			Global_1632166.f_42723[iVar0 /*19*/].f_11 = unk_0x07F84E836DFFE814(iVar14, iVar0);
			Global_1632166.f_42723[iVar0 /*19*/].f_12 = unk_0x1443290B580EC8DD(uVar16, iVar0);
			Global_1632166.f_42723[iVar0 /*19*/].f_18 = unk_0x6BAB52A8425E7B4B(iVar19, iVar0);
			iVar1 = unk_0x6BAB52A8425E7B4B(iVar5, iVar0);
			Global_1632166.f_42723[iVar0 /*19*/].f_4 = iVar1;
			if (unk_0x1C9BFBB46CC94A75(iVar17, iVar0) == 2)
			{
				Global_1632166.f_42723[iVar0 /*19*/].f_7 = unk_0x6BAB52A8425E7B4B(iVar17, iVar0);
			}
			else
			{
				Global_1632166.f_42723[iVar0 /*19*/].f_7 = 0;
			}
			Global_1632166.f_42723[iVar0 /*19*/].f_17 = unk_0x1443290B580EC8DD(uVar18, iVar0);
		}
		iVar0++;
	}
}

void func_200(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	var uVar7[4];
	var uVar12[4];
	var uVar17[4];
	var uVar22[4];
	var uVar27[4];
	var uVar32[4];
	var uVar37[4];
	var uVar42[4];
	var uVar47[4];
	var uVar52[4];
	var uVar57[4];
	var uVar62[4];
	var uVar67[4];
	var uVar72[4];
	var uVar77[4];
	var uVar82[4];
	var uVar87[4];
	var uVar92[4];
	var uVar97[4];
	var uVar102[4];
	var uVar107[4];
	var uVar112[4];
	var uVar117[4];
	var uVar122[4];
	var uVar127[4];
	var uVar132[4];
	var uVar137[4];
	var uVar142[4];
	var uVar147[4];
	var uVar152[4];
	var uVar157[4];
	var uVar162[4];
	var uVar167[4];
	var uVar172[4];
	var uVar177[4];
	var uVar182[4];
	var uVar187[4];
	var uVar192[4];
	var uVar197[4];
	var uVar202[4];
	var uVar207[4];
	var uVar212[4];
	var uVar217[4];
	var uVar222[4];
	var uVar227[4];
	var uVar232[4];
	var uVar237[4];
	var uVar242[4];
	var uVar247[4];
	var uVar252[4];
	var uVar257[4];
	var uVar262[4];
	var uVar267[4];
	var uVar272[4];
	var uVar277[4];
	var uVar282[4];
	var uVar287[4];
	var uVar292[4];
	var uVar297[4];
	var uVar302[4];
	var uVar307[4];
	var uVar312[4];
	var uVar317[4];
	var uVar322[4];
	var uVar327[4];
	var uVar332[4];
	var uVar337[4];
	var uVar342[4];
	var uVar347[4];
	var uVar352[4];
	var uVar357[4];
	var uVar362[4];
	int iVar367;
	int iVar368;
	int iVar369;
	
	iVar0 = unk_0x4C4E1CA899A313BB(*iParam0, "endcon");
	iVar1 = 0;
	while (iVar1 <= (Global_1632166.f_29 - 1))
	{
		if (iVar1 < 4)
		{
			StringCopy(&cVar3, "sia", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar7[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "stiam", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar12[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "mmiam2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar17[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "sim", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar22[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "mmim", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar27[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "mmi2m", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar32[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "uacp1", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar37[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "uacp2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar42[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "fleer", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar52[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "fleev", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar47[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "rloft", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar57[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "minspd", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar62[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "mspdlp", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar67[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "pribt", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar72[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "bosth", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar77[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "bosti", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar82[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "vdor", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar87[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "mspdmx", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar92[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "prmg", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar97[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "traf", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar102[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "pden", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar107[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "dlor", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar112[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "mors", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar117[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "mdmr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar122[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "mwdmr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar127[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "shdtxt", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar132[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "hitsnd", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar137[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "rdel", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar142[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "diagwf", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar147[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "twpptd", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar152[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "mnvhhl", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar157[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "mnvhsi", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar162[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "mnvhsd", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar167[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "blolt", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar172[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "mxhth", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar177[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "cbmanr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar182[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "rgnd", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar187[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "rgnr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar192[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "rgnm", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar197[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "drnn", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar202[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "drnr1", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar207[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "drnr2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar212[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "drnr3", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar217[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "drnr4", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar222[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "drnpl", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar227[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "drnp", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar232[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "drnv", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar237[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "drno", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar242[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "drnRt", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar247[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "grtug", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar252[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "grwep", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar257[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "grclp", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar262[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "grkil", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar267[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "lbred", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar272[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "lbgre", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar277[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "lbblu", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar282[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "bmmxh", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar287[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "bmspm", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar292[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "bmhrgn", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar317[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "bmsjd", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar297[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "bmhok", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar302[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "bmstd", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar307[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "bmmph", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar312[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "itvsd", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar322[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "itved", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar327[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "todh", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar347[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "todm", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar352[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "tods", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar357[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "todsh", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar362[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "armr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar332[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "bsthr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar337[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			StringCopy(&cVar3, "mgdm", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar342[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar3);
			iVar367 = 0;
			while (iVar367 <= 69)
			{
				if (unk_0x1C9BFBB46CC94A75(uVar7[iVar1], iVar367) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_62[iVar367] = unk_0x6BAB52A8425E7B4B(uVar7[iVar1], iVar367);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_62[iVar367] = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar12[iVar1], iVar367) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_210[iVar367] = unk_0x6BAB52A8425E7B4B(uVar12[iVar1], iVar367);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_210[iVar367] = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar17[iVar1], iVar367) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_357[iVar367] = unk_0x6BAB52A8425E7B4B(uVar17[iVar1], iVar367);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_357[iVar367] = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar22[iVar1], iVar367) == 3)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_133[iVar367] = unk_0x07F84E836DFFE814(uVar22[iVar1], iVar367);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_133[iVar367] = 1f;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar27[iVar1], iVar367) == 3)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_281[iVar367] = unk_0x07F84E836DFFE814(uVar27[iVar1], iVar367);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_281[iVar367] = 1f;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar32[iVar1], iVar367) == 3)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_428[iVar367] = unk_0x07F84E836DFFE814(uVar32[iVar1], iVar367);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_428[iVar367] = 1f;
				}
				iVar367++;
			}
			iVar368 = 0;
			while (iVar368 <= 3)
			{
				if (unk_0x1C9BFBB46CC94A75(uVar37[iVar1], iVar368) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_501[iVar368] = unk_0x6BAB52A8425E7B4B(uVar37[iVar1], iVar368);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_501[iVar368] = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar42[iVar1], iVar368) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_506[iVar368] = unk_0x6BAB52A8425E7B4B(uVar42[iVar1], iVar368);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_506[iVar368] = -1;
				}
				iVar368++;
			}
			iVar2 = 0;
			while (iVar2 <= (Global_1632166.f_91[iVar1 /*8128*/].f_57 - 1))
			{
				if (uVar47[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_2398[iVar2 /*3*/] = { unk_0x866B2C4E49D29F3B(uVar47[iVar1], iVar2) };
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_2398[iVar2 /*3*/] = { 0f, 0f, 0f };
				}
				if (uVar52[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_2450[iVar2] = unk_0x07F84E836DFFE814(uVar52[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_2450[iVar2] = 0f;
				}
				if (uVar57[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_7820[iVar2] = unk_0x6BAB52A8425E7B4B(uVar57[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_7820[iVar2] = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar62[iVar1], iVar2) == 2 && Global_1632166.f_2 != 6)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_7838[iVar2] = unk_0x6BAB52A8425E7B4B(uVar62[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_7838[iVar2] = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar67[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_7856[iVar2] = unk_0x6BAB52A8425E7B4B(uVar67[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_7856[iVar2] = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar72[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_8036[iVar2] = unk_0x6BAB52A8425E7B4B(uVar72[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_8036[iVar2] = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar77[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_8054[iVar2] = unk_0x6BAB52A8425E7B4B(uVar77[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_8054[iVar2] = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar82[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_8072[iVar2] = unk_0x6BAB52A8425E7B4B(uVar82[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_8072[iVar2] = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar87[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_8090[iVar2] = unk_0x6BAB52A8425E7B4B(uVar87[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_8090[iVar2] = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar92[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_7874[iVar2] = unk_0x6BAB52A8425E7B4B(uVar92[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_7874[iVar2] = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar97[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_7892[iVar2] = unk_0x6BAB52A8425E7B4B(uVar97[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_7892[iVar2] = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar102[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_7946[iVar2] = unk_0x6BAB52A8425E7B4B(uVar102[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_7946[iVar2] = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar107[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_7964[iVar2] = unk_0x6BAB52A8425E7B4B(uVar107[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_7964[iVar2] = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar112[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3120[iVar2] = unk_0x6BAB52A8425E7B4B(uVar112[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3120[iVar2] = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar117[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3138[iVar2] = unk_0x6BAB52A8425E7B4B(uVar117[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3138[iVar2] = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar122[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3156[iVar2] = unk_0x6BAB52A8425E7B4B(uVar122[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3156[iVar2] = 10;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar127[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3174[iVar2] = unk_0x6BAB52A8425E7B4B(uVar127[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3174[iVar2] = 10;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar132[iVar1], iVar2) == 2)
				{
					iVar369 = unk_0x6BAB52A8425E7B4B(uVar132[iVar1], iVar2);
					if (iVar369 > 0)
					{
						Global_1632166.f_91[iVar1 /*8128*/].f_7910[iVar2] = iVar369;
					}
					else
					{
						Global_1632166.f_91[iVar1 /*8128*/].f_7910[iVar2] = 0;
					}
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_7910[iVar2] = 0;
				}
				if (uVar137[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_7928[iVar2] = unk_0x6BAB52A8425E7B4B(uVar137[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_7928[iVar2] = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar142[iVar1], iVar2) == 2)
				{
					if (unk_0x6BAB52A8425E7B4B(uVar142[iVar1], iVar2) > 1)
					{
						Global_1632166.f_91[iVar1 /*8128*/].f_3250[iVar2] = unk_0x6BAB52A8425E7B4B(uVar142[iVar1], iVar2);
					}
					else
					{
						Global_1632166.f_91[iVar1 /*8128*/].f_3250[iVar2] = 1;
					}
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3250[iVar2] = 1;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar147[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_2976[iVar2] = unk_0x6BAB52A8425E7B4B(uVar147[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_2976[iVar2] = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar152[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3048[iVar2] = unk_0x6BAB52A8425E7B4B(uVar152[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3048[iVar2] = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar157[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_2994[iVar2] = unk_0x6BAB52A8425E7B4B(uVar157[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_2994[iVar2] = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar162[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3012[iVar2] = unk_0x6BAB52A8425E7B4B(uVar162[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3012[iVar2] = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar167[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3030[iVar2] = unk_0x6BAB52A8425E7B4B(uVar167[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3030[iVar2] = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar172[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3066[iVar2] = unk_0x6BAB52A8425E7B4B(uVar172[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3066[iVar2] = 4;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar177[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3084[iVar2] = unk_0x6BAB52A8425E7B4B(uVar177[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3084[iVar2] = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar182[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3102[iVar2] = unk_0x6BAB52A8425E7B4B(uVar182[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3102[iVar2] = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar187[iVar1], iVar2) == 3)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_2793[iVar2 /*3*/] = unk_0x07F84E836DFFE814(uVar187[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_2793[iVar2 /*3*/] = 0f;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar192[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_2793[iVar2 /*3*/].f_1 = unk_0x6BAB52A8425E7B4B(uVar192[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_2793[iVar2 /*3*/].f_1 = 1;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar197[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_2793[iVar2 /*3*/].f_2 = unk_0x6BAB52A8425E7B4B(uVar197[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_2793[iVar2 /*3*/].f_2 = 50;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar202[iVar1], iVar2) == 3)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_2605[iVar2 /*11*/] = unk_0x07F84E836DFFE814(uVar202[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_2605[iVar2 /*11*/] = 0f;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar207[iVar1], iVar2) == 3)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_2605[iVar2 /*11*/].f_1[0] = unk_0x07F84E836DFFE814(uVar207[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_2605[iVar2 /*11*/].f_1[0] = 0f;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar212[iVar1], iVar2) == 3)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_2605[iVar2 /*11*/].f_1[1] = unk_0x07F84E836DFFE814(uVar212[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_2605[iVar2 /*11*/].f_1[1] = 0f;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar217[iVar1], iVar2) == 3)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_2605[iVar2 /*11*/].f_1[2] = unk_0x07F84E836DFFE814(uVar217[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_2605[iVar2 /*11*/].f_1[2] = 0f;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar222[iVar1], iVar2) == 3)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_2605[iVar2 /*11*/].f_1[3] = unk_0x07F84E836DFFE814(uVar222[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_2605[iVar2 /*11*/].f_1[3] = 0f;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar227[iVar1], iVar2) == 3)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_2605[iVar2 /*11*/].f_6 = unk_0x07F84E836DFFE814(uVar227[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_2605[iVar2 /*11*/].f_6 = 0f;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar232[iVar1], iVar2) == 3)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_2605[iVar2 /*11*/].f_7 = unk_0x07F84E836DFFE814(uVar232[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_2605[iVar2 /*11*/].f_7 = 0f;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar237[iVar1], iVar2) == 3)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_2605[iVar2 /*11*/].f_8 = unk_0x07F84E836DFFE814(uVar237[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_2605[iVar2 /*11*/].f_8 = 0f;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar242[iVar1], iVar2) == 3)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_2605[iVar2 /*11*/].f_9 = unk_0x07F84E836DFFE814(uVar242[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_2605[iVar2 /*11*/].f_9 = 0f;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar247[iVar1], iVar2) == 3)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_2605[iVar2 /*11*/].f_10 = unk_0x07F84E836DFFE814(uVar247[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_2605[iVar2 /*11*/].f_10 = 0f;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar252[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_2845[iVar2 /*4*/] = unk_0x6BAB52A8425E7B4B(uVar252[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_2845[iVar2 /*4*/] = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar257[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_2845[iVar2 /*4*/].f_1 = unk_0x6BAB52A8425E7B4B(uVar257[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_2845[iVar2 /*4*/].f_1 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar262[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_2845[iVar2 /*4*/].f_2 = unk_0x6BAB52A8425E7B4B(uVar262[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_2845[iVar2 /*4*/].f_2 = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar267[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_2845[iVar2 /*4*/].f_3 = unk_0x6BAB52A8425E7B4B(uVar267[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_2845[iVar2 /*4*/].f_3 = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar272[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_2914[iVar2 /*3*/] = unk_0x6BAB52A8425E7B4B(uVar272[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_2914[iVar2 /*3*/] = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar282[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_2914[iVar2 /*3*/].f_2 = unk_0x6BAB52A8425E7B4B(uVar282[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_2914[iVar2 /*3*/].f_2 = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar277[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_2914[iVar2 /*3*/].f_1 = unk_0x6BAB52A8425E7B4B(uVar277[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_2914[iVar2 /*3*/].f_1 = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar347[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_675[iVar2] = unk_0x6BAB52A8425E7B4B(uVar347[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_675[iVar2] = 12;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar352[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_693[iVar2] = unk_0x6BAB52A8425E7B4B(uVar352[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_693[iVar2] = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar357[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_711[iVar2] = unk_0x6BAB52A8425E7B4B(uVar357[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_711[iVar2] = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar362[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_729[iVar2] = unk_0x6BAB52A8425E7B4B(uVar362[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_729[iVar2] = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar287[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_2468[iVar2 /*8*/] = unk_0x6BAB52A8425E7B4B(uVar287[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_2468[iVar2 /*8*/] = 1000;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar292[iVar1], iVar2) == 3)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_2468[iVar2 /*8*/].f_1 = unk_0x07F84E836DFFE814(uVar292[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_2468[iVar2 /*8*/].f_1 = 1.15f;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar317[iVar1], iVar2) == 3)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_2468[iVar2 /*8*/].f_6 = unk_0x07F84E836DFFE814(uVar317[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_2468[iVar2 /*8*/].f_6 = 10f;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar297[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_2468[iVar2 /*8*/].f_2 = unk_0x6BAB52A8425E7B4B(uVar297[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_2468[iVar2 /*8*/].f_2 = 25;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar302[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_2468[iVar2 /*8*/].f_7 = unk_0x6BAB52A8425E7B4B(uVar302[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_2468[iVar2 /*8*/].f_7 = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar307[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_2468[iVar2 /*8*/].f_3 = unk_0x6BAB52A8425E7B4B(uVar307[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_2468[iVar2 /*8*/].f_3 = 1;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar312[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_2468[iVar2 /*8*/].f_5 = unk_0x6BAB52A8425E7B4B(uVar312[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_2468[iVar2 /*8*/].f_5 = 25;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar322[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_511[iVar2] = unk_0x6BAB52A8425E7B4B(uVar322[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_511[iVar2] = 5;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar327[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_529[iVar2] = unk_0x6BAB52A8425E7B4B(uVar327[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_529[iVar2] = 20;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar332[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_747[iVar2] = unk_0x6BAB52A8425E7B4B(uVar332[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_747[iVar2] = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar337[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_765[iVar2] = unk_0x6BAB52A8425E7B4B(uVar337[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_765[iVar2] = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar342[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_783[iVar2] = unk_0x6BAB52A8425E7B4B(uVar342[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_783[iVar2] = 100;
				}
				iVar2++;
			}
		}
		iVar1++;
	}
}

void func_201(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char cVar4[16];
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	var uVar15[4];
	var uVar20[4];
	var uVar25[4];
	var uVar30[4];
	var uVar35[4];
	var uVar40[4];
	var uVar45[4];
	var uVar50[4];
	var uVar55[4];
	var uVar60[4];
	var uVar65[4];
	var uVar70[4];
	var uVar75[4];
	var uVar80[4];
	var uVar85[4];
	var uVar90[4];
	var uVar95[4];
	var uVar100[4];
	var uVar105[4];
	var uVar110[4];
	var uVar115[4];
	var uVar120[4];
	var uVar125[4];
	var uVar130[4];
	var uVar135[4];
	var uVar140[4];
	var uVar145[4];
	var uVar150[4];
	var uVar155[4];
	var uVar160[4];
	var uVar165[4];
	var uVar170[4];
	var uVar175[4];
	var uVar180[4];
	var uVar185[4];
	var uVar190[4];
	var uVar195[4];
	var uVar200[4];
	var uVar205[4];
	var uVar210[4];
	var uVar215[4];
	var uVar220[4];
	var uVar225[4];
	var uVar230[4];
	var uVar235[4];
	var uVar240[4];
	var uVar245[4];
	var uVar250[4];
	var uVar255[4];
	var uVar260[4];
	var uVar265[4];
	var uVar270[4];
	var uVar275[4];
	var uVar280[4];
	var uVar285[4];
	var uVar290[4];
	var uVar295[4];
	var uVar300[4];
	var uVar305[4];
	var uVar310[4];
	var uVar315[4];
	var uVar320[4];
	var uVar325[4];
	var uVar330[4];
	var uVar335[4];
	var uVar340[4];
	struct<5> Var345;
	var uVar366[4];
	var uVar371[4];
	var uVar376[4];
	var uVar381[4];
	var uVar386[4];
	var uVar391[4];
	var uVar396[4];
	var uVar401[4];
	var uVar406[4];
	var uVar411[4];
	var uVar416[4];
	var uVar421[4];
	var uVar426[4];
	var uVar431[4];
	var uVar436[4];
	var uVar441[4];
	var uVar446[4];
	var uVar451[4];
	var uVar456[4];
	var uVar461[4];
	var uVar466[4];
	var uVar471[4];
	var uVar476[4];
	var uVar481[4];
	var uVar486[4];
	var uVar491[4];
	var uVar496[4];
	var uVar501[4];
	var uVar506[4];
	var uVar511[4];
	var uVar516[4];
	var uVar521[4];
	var uVar526[4];
	var uVar531[4];
	var uVar536[4];
	var uVar541[4];
	var uVar546[4];
	var uVar551[4];
	var uVar556[4];
	var uVar561[4];
	var uVar566[4];
	var uVar571[4];
	var uVar576[4];
	var uVar581[4];
	var uVar586[4];
	var uVar591[4];
	var uVar596[4];
	var uVar601[4];
	var uVar606[4];
	var uVar611[4];
	var uVar616[4];
	var uVar621[4];
	var uVar626[4];
	var uVar631[4];
	var uVar636[4];
	var uVar641[4];
	var uVar646[4];
	var uVar651[4];
	var uVar656[4];
	var uVar661[4];
	var uVar666[4];
	var uVar671[4];
	var uVar676[4];
	var uVar681[4];
	var uVar686[4];
	var uVar691[4];
	var uVar696[4];
	var uVar701[4];
	var uVar706[4];
	var uVar711[4];
	var uVar716[4];
	var uVar721[4];
	var uVar726[4];
	int iVar731;
	int iVar732;
	
	iVar0 = unk_0x4C4E1CA899A313BB(*iParam0, "endcon");
	Var345 = 4;
	Var345.f_1 = 4;
	Var345.f_1.f_5 = 4;
	Var345.f_1.f_5.f_5 = 4;
	Var345.f_1.f_5.f_5.f_5 = 4;
	iVar1 = 0;
	while (iVar1 <= (Global_1632166.f_29 - 1))
	{
		if (iVar1 < 4)
		{
			StringCopy(&cVar4, "tmt", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar15[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "sudtm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar20[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "tms", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar25[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "txt", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar30[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "tak", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar35[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "cap", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar40[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "lnkdr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar45[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "lnkdr2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar50[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "hscr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar55[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "rsiv", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar60[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "wprs", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar65[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "wfrc", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar75[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "wchg", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar70[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "fkwl", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar80[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "wdly", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar85[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "ttlc", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar90[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "swtod", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar95[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "swtok", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar100[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "fsdtmr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar305[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "mpftmr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar300[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "artlit", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar105[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "mrtl", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar110[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "bmbtm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar115[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "gpsdp", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar120[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "dcont", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar125[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "critw", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar130[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "diswp", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar135[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "frndf", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar140[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "dsosui", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar145[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "dpos", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar150[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "txt1", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar155[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "dpos2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar160[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "dpost", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar165[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "dotim", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar170[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "dov", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar175[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "dost", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar180[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "dops", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar185[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "pl2an", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar190[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "lvbs", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar195[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "ovwty", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar200[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "ovwid", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar205[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "wldbs", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar210[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "drpr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar215[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "gbtp", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar220[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "irbs", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar225[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "irbs2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar230[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "irbs3", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar235[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "irbs4", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar240[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "irbs5", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar245[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "irbs6", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar250[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "irbs7", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar255[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "irbs8", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar260[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "irfbs", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar265[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "plvrl", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar270[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "bdprt", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar335[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "bdpst", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar340[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "hdmfp", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar310[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			bVar8 = false;
			bVar9 = false;
			bVar10 = false;
			bVar11 = false;
			bVar12 = false;
			bVar13 = false;
			bVar14 = false;
			StringCopy(&cVar4, "opl0", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			if (unk_0xF0E984A1CED01E3C(iVar0, &cVar4) == 7)
			{
				bVar8 = true;
				uVar275[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			}
			StringCopy(&cVar4, "opl1", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			if (unk_0xF0E984A1CED01E3C(iVar0, &cVar4) == 7)
			{
				bVar9 = true;
				uVar280[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			}
			StringCopy(&cVar4, "opl2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			if (unk_0xF0E984A1CED01E3C(iVar0, &cVar4) == 7)
			{
				bVar10 = true;
				uVar285[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			}
			StringCopy(&cVar4, "opl3", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			if (unk_0xF0E984A1CED01E3C(iVar0, &cVar4) == 7)
			{
				bVar11 = true;
				uVar290[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			}
			StringCopy(&cVar4, "oplbs", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar295[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "mpot0", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			if (unk_0xF0E984A1CED01E3C(iVar0, &cVar4) == 7)
			{
				bVar12 = true;
				uVar315[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			}
			StringCopy(&cVar4, "mpot1", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			if (unk_0xF0E984A1CED01E3C(iVar0, &cVar4) == 7)
			{
				bVar13 = true;
				uVar320[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			}
			StringCopy(&cVar4, "mpot2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			if (unk_0xF0E984A1CED01E3C(iVar0, &cVar4) == 7)
			{
				bVar14 = true;
				uVar325[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			}
			StringCopy(&cVar4, "rnrbs", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar330[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "gbnum", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar376[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "gbngn", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar381[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "gblgn", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar386[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "gbcol", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar391[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "gbdel", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar396[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "mcstr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar401[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "mcsrm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar406[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "mcmp", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar421[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "aumx", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar411[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "mpaumx", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar416[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "filtlh", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar426[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "gbmax", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar431[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "gbngm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar436[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "gblgm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar441[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "gbvhl", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar446[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "gbaie", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar371[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "gacc", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar451[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "gfld", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar456[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "gbat", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar461[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "gbv1", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar466[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "gbv2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar471[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "gbaw", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar476[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "gbfnr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar481[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "txt2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar486[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "txt3", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar491[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "txt4", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar496[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "txt5", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar501[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "fail", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar506[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "bfm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar526[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "wwm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar511[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "vss", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar516[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "cwt", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar521[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "tsc", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar531[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "mcry", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar536[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "destv", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar541[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "destr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar546[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "destv1", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar551[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "destv2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar556[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "destw", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar561[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "bd2t", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar656[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "bd2v", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar661[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "bd2v1", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar666[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "bd2v2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar671[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "bd2r", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar676[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "bd2w", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar681[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "out2wg", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar691[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "out2iv", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar696[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "out2io", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar701[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "out2bs", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar706[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "out2mm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar711[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "out2fp", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar716[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "out2et", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar721[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "out2id", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar726[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "out2hv", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar686[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "outbt", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar566[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "outb", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar571[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "outr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar576[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "outhv", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar596[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "outb1v", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar581[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "outb2v", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar586[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "outw", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar591[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "outwtg", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar601[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "outiwv", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar606[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "outiwo", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar611[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "outbs", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar616[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "outclo", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar626[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "outclr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar631[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "outclp", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar636[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "outmm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar621[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "outfp", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar641[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "outety", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar646[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			StringCopy(&cVar4, "outeid", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar651[iVar1] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
			iVar3 = 0;
			while (iVar3 <= 3)
			{
				StringCopy(&cVar4, "rlbs", 16);
				StringIntConCat(&cVar4, iVar1, 16);
				StringConCat(&cVar4, "-", 16);
				StringIntConCat(&cVar4, iVar3, 16);
				Var345[iVar1 /*5*/][iVar3] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
				StringCopy(&cVar4, "rlnm", 16);
				StringIntConCat(&cVar4, iVar3, 16);
				uVar366[iVar3] = unk_0x05989B8A830B4E1C(iVar0, &cVar4);
				iVar3++;
			}
			iVar731 = unk_0x05989B8A830B4E1C(iVar0, "tlimt");
			iVar2 = 0;
			while (iVar2 <= (Global_1632166.f_91[iVar1 /*8128*/].f_57 - 1))
			{
				if (uVar15[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_603[iVar2] = unk_0x6BAB52A8425E7B4B(uVar15[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_603[iVar2] = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar20[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_621[iVar2] = unk_0x6BAB52A8425E7B4B(uVar20[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_621[iVar2] = 0;
				}
				if (uVar25[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3196[iVar2] = unk_0x6BAB52A8425E7B4B(uVar25[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3196[iVar2] = 0;
				}
				if (uVar35[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3268[iVar2] = unk_0x6BAB52A8425E7B4B(uVar35[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3268[iVar2] = 0;
				}
				if (uVar40[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3286[iVar2] = unk_0x6BAB52A8425E7B4B(uVar40[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3286[iVar2] = 0;
				}
				if (uVar30[iVar1] != 0)
				{
					StringCopy(&(Global_1632166.f_91[iVar1 /*8128*/].f_4539[iVar2 /*16*/]), unk_0xE0DCCCE203DC2979(uVar30[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_1632166.f_91[iVar1 /*8128*/].f_4539[iVar2 /*16*/]), "", 64);
				}
				if (uVar45[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_547[iVar2] = unk_0x6BAB52A8425E7B4B(uVar45[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_547[iVar2] = 0;
				}
				if (uVar50[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_565[iVar2] = unk_0x6BAB52A8425E7B4B(uVar50[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_565[iVar2] = 0;
				}
				if (Global_1632166.f_91[iVar1 /*8128*/].f_565[iVar2] == 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_565[iVar2] = -1;
				}
				if (uVar55[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_585[iVar2] = unk_0x6BAB52A8425E7B4B(uVar55[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_585[iVar2] = 0;
				}
				if (uVar75[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3322[iVar2] = unk_0x6BAB52A8425E7B4B(uVar75[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3322[iVar2] = 0;
				}
				if (uVar70[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3304[iVar2] = unk_0x6BAB52A8425E7B4B(uVar70[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3304[iVar2] = 0;
				}
				if (uVar80[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3344[iVar2] = unk_0x6BAB52A8425E7B4B(uVar80[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3344[iVar2] = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar85[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3364[iVar2] = unk_0x6BAB52A8425E7B4B(uVar85[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3364[iVar2] = 10000;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar90[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3400[iVar2] = unk_0x6BAB52A8425E7B4B(uVar90[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3400[iVar2] = -1;
				}
				if (uVar60[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_801[iVar2] = unk_0x6BAB52A8425E7B4B(uVar60[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_801[iVar2] = 0;
				}
				if (uVar65[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_819[iVar2] = unk_0x6BAB52A8425E7B4B(uVar65[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_819[iVar2] = 0;
				}
				if (uVar140[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_873[iVar2] = unk_0x6BAB52A8425E7B4B(uVar140[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_873[iVar2] = 0;
				}
				if (uVar145[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_891[iVar2] = unk_0x6BAB52A8425E7B4B(uVar145[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_891[iVar2] = 0;
				}
				if (uVar95[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_837[iVar2] = unk_0x6BAB52A8425E7B4B(uVar95[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_837[iVar2] = -1;
				}
				if (uVar100[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_855[iVar2] = unk_0x6BAB52A8425E7B4B(uVar100[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_855[iVar2] = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar110[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3382[iVar2] = unk_0x6BAB52A8425E7B4B(uVar110[iVar1], iVar2);
				}
				else if (unk_0x1C9BFBB46CC94A75(iVar731, iVar1) == 2 && iVar731 != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3382[iVar2] = unk_0x6BAB52A8425E7B4B(iVar731, iVar1);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3382[iVar2] = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar105[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_927[iVar2] = unk_0x6BAB52A8425E7B4B(uVar105[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_927[iVar2] = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar305[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_657[iVar2] = unk_0x6BAB52A8425E7B4B(uVar305[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_657[iVar2] = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar300[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_639[iVar2] = unk_0x6BAB52A8425E7B4B(uVar300[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_639[iVar2] = 0;
				}
				if (uVar115[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_909[iVar2] = unk_0x6BAB52A8425E7B4B(uVar115[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_909[iVar2] = 0;
				}
				if (uVar120[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_945[iVar2] = unk_0x6BAB52A8425E7B4B(uVar120[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_945[iVar2] = 0;
				}
				if (uVar125[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_7766[iVar2] = unk_0x6BAB52A8425E7B4B(uVar125[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_7766[iVar2] = 0;
				}
				if (uVar130[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_7784[iVar2] = unk_0x6BAB52A8425E7B4B(uVar130[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_7784[iVar2] = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar135[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_7802[iVar2] = unk_0x6BAB52A8425E7B4B(uVar135[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_7802[iVar2] = 0;
				}
				if (uVar150[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3811[iVar2 /*3*/] = { unk_0x866B2C4E49D29F3B(uVar150[iVar1], iVar2) };
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3811[iVar2 /*3*/] = { 0f, 0f, 0f };
				}
				if (!func_175())
				{
					if (uVar155[iVar1] != 0)
					{
						StringCopy(&(Global_1632166.f_91[iVar1 /*8128*/].f_4812[iVar2 /*16*/]), unk_0xE0DCCCE203DC2979(uVar155[iVar1], iVar2), 64);
					}
					else
					{
						StringCopy(&(Global_1632166.f_91[iVar1 /*8128*/].f_4812[iVar2 /*16*/]), "", 64);
					}
				}
				if (uVar160[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3863[iVar2 /*3*/] = { unk_0x866B2C4E49D29F3B(uVar160[iVar1], iVar2) };
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3863[iVar2 /*3*/] = { 0f, 0f, 0f };
				}
				if (uVar165[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3933[iVar2] = unk_0x6BAB52A8425E7B4B(uVar165[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3933[iVar2] = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar170[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3969[iVar2] = unk_0x6BAB52A8425E7B4B(uVar170[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3969[iVar2] = 0;
				}
				if (uVar220[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3418[iVar2] = unk_0x6BAB52A8425E7B4B(uVar220[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3418[iVar2] = 0;
				}
				if (uVar215[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3915[iVar2] = unk_0x07F84E836DFFE814(uVar215[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3915[iVar2] = 0f;
				}
				if (uVar225[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_4169[iVar2] = unk_0x6BAB52A8425E7B4B(uVar225[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_4169[iVar2] = 0;
				}
				if (uVar230[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_4187[iVar2] = unk_0x6BAB52A8425E7B4B(uVar230[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_4187[iVar2] = 0;
				}
				if (uVar235[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_4205[iVar2] = unk_0x6BAB52A8425E7B4B(uVar235[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_4205[iVar2] = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar240[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_4223[iVar2] = unk_0x6BAB52A8425E7B4B(uVar240[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_4223[iVar2] = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar245[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_4241[iVar2] = unk_0x6BAB52A8425E7B4B(uVar245[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_4241[iVar2] = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar250[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_4259[iVar2] = unk_0x6BAB52A8425E7B4B(uVar250[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_4259[iVar2] = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar255[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_4277[iVar2] = unk_0x6BAB52A8425E7B4B(uVar255[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_4277[iVar2] = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar260[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_4295[iVar2] = unk_0x6BAB52A8425E7B4B(uVar260[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_4295[iVar2] = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar265[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_4313[iVar2] = unk_0x6BAB52A8425E7B4B(uVar265[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_4313[iVar2] = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar270[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_37[iVar2] = unk_0x6BAB52A8425E7B4B(uVar270[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_37[iVar2] = -1;
				}
				iVar3 = 0;
				while (iVar3 <= 3)
				{
					if (unk_0x1C9BFBB46CC94A75(Var345[iVar1 /*5*/][iVar3], iVar2) == 2)
					{
						Global_1632166.f_91[iVar1 /*8128*/].f_4369[iVar2 /*5*/][iVar3] = unk_0x6BAB52A8425E7B4B(Var345[iVar1 /*5*/][iVar3], iVar2);
					}
					else
					{
						Global_1632166.f_91[iVar1 /*8128*/].f_4369[iVar2 /*5*/][iVar3] = 0;
					}
					if (unk_0x1C9BFBB46CC94A75(uVar366[iVar3], 0) == 4)
					{
						StringCopy(&(Global_1632166.f_91[iVar1 /*8128*/].f_4455[iVar3 /*16*/]), unk_0xE0DCCCE203DC2979(uVar366[iVar3], 0), 64);
					}
					else
					{
						StringCopy(&(Global_1632166.f_91[iVar1 /*8128*/].f_4455[iVar3 /*16*/]), "", 64);
					}
					iVar3++;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar335[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_4333[iVar2] = unk_0x6BAB52A8425E7B4B(uVar335[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_4333[iVar2] = Global_1632166.f_91[iVar1 /*8128*/].f_2968;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar340[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_4351[iVar2] = unk_0x6BAB52A8425E7B4B(uVar340[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_4351[iVar2] = Global_1632166.f_91[iVar1 /*8128*/].f_3194;
				}
				if (bVar8)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_7575[iVar2 /*5*/][0] = unk_0x6BAB52A8425E7B4B(uVar275[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_7575[iVar2 /*5*/][0] = -1;
				}
				if (bVar9)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_7575[iVar2 /*5*/][1] = unk_0x6BAB52A8425E7B4B(uVar280[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_7575[iVar2 /*5*/][1] = -1;
				}
				if (bVar10)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_7575[iVar2 /*5*/][2] = unk_0x6BAB52A8425E7B4B(uVar285[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_7575[iVar2 /*5*/][2] = -1;
				}
				if (bVar11)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_7575[iVar2 /*5*/][3] = unk_0x6BAB52A8425E7B4B(uVar290[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_7575[iVar2 /*5*/][3] = -1;
				}
				if (bVar12)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_7679[iVar2 /*4*/][0] = unk_0x6BAB52A8425E7B4B(uVar315[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_7679[iVar2 /*4*/][0] = -1;
				}
				if (bVar13)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_7679[iVar2 /*4*/][1] = unk_0x6BAB52A8425E7B4B(uVar320[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_7679[iVar2 /*4*/][1] = -1;
				}
				if (bVar14)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_7679[iVar2 /*4*/][2] = unk_0x6BAB52A8425E7B4B(uVar325[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_7679[iVar2 /*4*/][2] = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar330[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_7748[iVar2] = unk_0x6BAB52A8425E7B4B(uVar330[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_7748[iVar2] = 0;
				}
				iVar732 = Global_1632166.f_91[iVar1 /*8128*/].f_57;
				while (iVar732 <= 31)
				{
					if (unk_0xF44A5E894FE76438(Global_1632166.f_91[iVar1 /*8128*/].f_7748[iVar2], iVar732))
					{
						unk_0x4EA098C870B73AB7(&(Global_1632166.f_91[iVar1 /*8128*/].f_7748[iVar2]), iVar732);
					}
					iVar732++;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar310[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_8110[iVar2] = unk_0x6BAB52A8425E7B4B(uVar310[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_8110[iVar2] = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar175[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3951[iVar2] = unk_0x6BAB52A8425E7B4B(uVar175[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3951[iVar2] = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar180[iVar1], iVar2) == 3)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3987[iVar2] = unk_0x07F84E836DFFE814(uVar180[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3987[iVar2] = -1f;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar185[iVar1], iVar2) == 3)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_4005[iVar2] = unk_0x07F84E836DFFE814(uVar185[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_4005[iVar2] = -1f;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar190[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_4043[iVar2] = unk_0x6BAB52A8425E7B4B(uVar190[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_4043[iVar2] = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar195[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_4025[iVar2] = unk_0x6BAB52A8425E7B4B(uVar195[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_4025[iVar2] = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar200[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_7982[iVar2] = unk_0x6BAB52A8425E7B4B(uVar200[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_7982[iVar2] = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar205[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_8000[iVar2] = unk_0x6BAB52A8425E7B4B(uVar205[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_8000[iVar2] = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar210[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_8018[iVar2] = unk_0x6BAB52A8425E7B4B(uVar210[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_8018[iVar2] = 0;
				}
				if (uVar295[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_7661[iVar2] = unk_0x6BAB52A8425E7B4B(uVar295[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_7661[iVar2] = 0;
				}
				if (uVar376[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3437[iVar2] = unk_0x6BAB52A8425E7B4B(uVar376[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3437[iVar2] = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar381[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3721[iVar2] = unk_0x6BAB52A8425E7B4B(uVar381[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3721[iVar2] = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar386[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3757[iVar2] = unk_0x6BAB52A8425E7B4B(uVar386[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3757[iVar2] = 0;
				}
				if (uVar391[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3473[iVar2] = unk_0x6BAB52A8425E7B4B(uVar391[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3473[iVar2] = 0;
				}
				if (uVar396[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3455[iVar2] = unk_0x6BAB52A8425E7B4B(uVar396[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3455[iVar2] = 0;
				}
				if (uVar401[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_4061[iVar2] = unk_0x6BAB52A8425E7B4B(uVar401[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_4061[iVar2] = 0;
				}
				if (uVar406[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_4133[iVar2] = unk_0x6BAB52A8425E7B4B(uVar406[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_4133[iVar2] = -1;
				}
				if (uVar411[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_4097[iVar2] = unk_0x6BAB52A8425E7B4B(uVar411[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_4097[iVar2] = 0;
				}
				if (uVar416[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_4115[iVar2] = unk_0x6BAB52A8425E7B4B(uVar416[iVar1], iVar2);
				}
				else if (Global_1632166.f_91[iVar1 /*8128*/].f_4097[iVar2] != 0 && unk_0xF44A5E894FE76438(Global_1632166.f_91[iVar1 /*8128*/].f_4205[iVar2], 8))
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_4115[iVar2] = Global_1632166.f_91[iVar1 /*8128*/].f_4097[iVar2];
					Global_1632166.f_91[iVar1 /*8128*/].f_4097[iVar2] = 0;
					unk_0x4EA098C870B73AB7(&(Global_1632166.f_91[iVar1 /*8128*/].f_4205[iVar2]), 8);
				}
				if (uVar421[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_4079[iVar2] = unk_0x6BAB52A8425E7B4B(uVar421[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_4079[iVar2] = 0;
				}
				if (uVar426[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_4151[iVar2] = unk_0x6BAB52A8425E7B4B(uVar426[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_4151[iVar2] = 0;
				}
				if (uVar431[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3613[iVar2] = unk_0x6BAB52A8425E7B4B(uVar431[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3613[iVar2] = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar436[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3739[iVar2] = unk_0x6BAB52A8425E7B4B(uVar436[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3739[iVar2] = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar441[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3775[iVar2] = unk_0x6BAB52A8425E7B4B(uVar441[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3775[iVar2] = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar481[iVar1], iVar2) == 3)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3793[iVar2] = unk_0x07F84E836DFFE814(uVar481[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3793[iVar2] = -1f;
				}
				if (uVar371[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3703[iVar2] = unk_0x6BAB52A8425E7B4B(uVar371[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3703[iVar2] = 0;
				}
				if (uVar446[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3631[iVar2] = unk_0x6BAB52A8425E7B4B(uVar446[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3631[iVar2] = 100;
				}
				if (uVar451[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3667[iVar2] = unk_0x6BAB52A8425E7B4B(uVar451[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3667[iVar2] = 0;
				}
				if (uVar456[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3685[iVar2] = unk_0x6BAB52A8425E7B4B(uVar456[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3685[iVar2] = 0;
				}
				if (uVar461[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3649[iVar2] = unk_0x6BAB52A8425E7B4B(uVar461[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3649[iVar2] = 0;
				}
				if (uVar466[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3491[iVar2 /*3*/] = { unk_0x866B2C4E49D29F3B(uVar466[iVar1], iVar2) };
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3491[iVar2 /*3*/] = { 0f, 0f, 0f };
				}
				if (uVar471[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3543[iVar2 /*3*/] = { unk_0x866B2C4E49D29F3B(uVar471[iVar1], iVar2) };
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3543[iVar2 /*3*/] = { 0f, 0f, 0f };
				}
				if (uVar476[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3595[iVar2] = unk_0x07F84E836DFFE814(uVar476[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3595[iVar2] = 0f;
				}
				if (uVar486[iVar1] != 0)
				{
					StringCopy(&(Global_1632166.f_91[iVar1 /*8128*/].f_5085[iVar2 /*16*/]), unk_0xE0DCCCE203DC2979(uVar486[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_1632166.f_91[iVar1 /*8128*/].f_5085[iVar2 /*16*/]), "", 64);
				}
				if (!func_175())
				{
					if (uVar491[iVar1] != 0)
					{
						StringCopy(&(Global_1632166.f_91[iVar1 /*8128*/].f_5904[iVar2 /*16*/]), unk_0xE0DCCCE203DC2979(uVar491[iVar1], iVar2), 64);
					}
					else
					{
						StringCopy(&(Global_1632166.f_91[iVar1 /*8128*/].f_5904[iVar2 /*16*/]), "", 64);
					}
					if (uVar496[iVar1] != 0)
					{
						StringCopy(&(Global_1632166.f_91[iVar1 /*8128*/].f_5358[iVar2 /*16*/]), unk_0xE0DCCCE203DC2979(uVar496[iVar1], iVar2), 64);
					}
					else
					{
						StringCopy(&(Global_1632166.f_91[iVar1 /*8128*/].f_5358[iVar2 /*16*/]), "", 64);
					}
					if (uVar501[iVar1] != 0)
					{
						StringCopy(&(Global_1632166.f_91[iVar1 /*8128*/].f_5631[iVar2 /*16*/]), unk_0xE0DCCCE203DC2979(uVar501[iVar1], iVar2), 64);
					}
					else
					{
						StringCopy(&(Global_1632166.f_91[iVar1 /*8128*/].f_5631[iVar2 /*16*/]), "", 64);
					}
				}
				if (uVar506[iVar1] != 0)
				{
					StringCopy(&(Global_1632166.f_91[iVar1 /*8128*/].f_6177[iVar2 /*16*/]), unk_0xE0DCCCE203DC2979(uVar506[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_1632166.f_91[iVar1 /*8128*/].f_6177[iVar2 /*16*/]), "", 64);
				}
				if (uVar526[iVar1] != 0)
				{
					StringCopy(&(Global_1632166.f_91[iVar1 /*8128*/].f_6450[iVar2 /*16*/]), unk_0xE0DCCCE203DC2979(uVar526[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_1632166.f_91[iVar1 /*8128*/].f_6450[iVar2 /*16*/]), "", 64);
				}
				if (uVar511[iVar1] != 0)
				{
					StringCopy(&(Global_1632166.f_91[iVar1 /*8128*/].f_6723[iVar2 /*16*/]), unk_0xE0DCCCE203DC2979(uVar511[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_1632166.f_91[iVar1 /*8128*/].f_6723[iVar2 /*16*/]), "", 64);
				}
				if (uVar516[iVar1] != 0)
				{
					StringCopy(&(Global_1632166.f_91[iVar1 /*8128*/].f_6996[iVar2 /*16*/]), unk_0xE0DCCCE203DC2979(uVar516[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_1632166.f_91[iVar1 /*8128*/].f_6996[iVar2 /*16*/]), "", 64);
				}
				if (uVar521[iVar1] != 0)
				{
					StringCopy(&(Global_1632166.f_91[iVar1 /*8128*/].f_7269[iVar2 /*16*/]), unk_0xE0DCCCE203DC2979(uVar521[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_1632166.f_91[iVar1 /*8128*/].f_7269[iVar2 /*16*/]), "", 64);
				}
				if (uVar531[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3214[iVar2] = unk_0x6BAB52A8425E7B4B(uVar531[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3214[iVar2] = 0;
				}
				if (uVar536[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3232[iVar2] = unk_0x6BAB52A8425E7B4B(uVar536[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_3232[iVar2] = 0;
				}
				if (uVar581[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_967[iVar2 /*28*/].f_3 = { unk_0x866B2C4E49D29F3B(uVar581[iVar1], iVar2) };
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_967[iVar2 /*28*/].f_3 = { 0f, 0f, 0f };
				}
				if (uVar586[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_967[iVar2 /*28*/].f_6 = { unk_0x866B2C4E49D29F3B(uVar586[iVar1], iVar2) };
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_967[iVar2 /*28*/].f_6 = { 0f, 0f, 0f };
				}
				if (uVar591[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_967[iVar2 /*28*/].f_10 = unk_0x07F84E836DFFE814(uVar591[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_967[iVar2 /*28*/].f_10 = 0f;
				}
				if (uVar596[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_967[iVar2 /*28*/].f_13 = { unk_0x866B2C4E49D29F3B(uVar596[iVar1], iVar2) };
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_967[iVar2 /*28*/].f_13 = { 0f, 0f, 0f };
				}
				if (uVar571[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_967[iVar2 /*28*/] = { unk_0x866B2C4E49D29F3B(uVar571[iVar1], iVar2) };
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_967[iVar2 /*28*/] = { 0f, 0f, 0f };
				}
				if (unk_0x1C9BFBB46CC94A75(uVar576[iVar1], iVar2) == 3)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_967[iVar2 /*28*/].f_9 = unk_0x07F84E836DFFE814(uVar576[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_967[iVar2 /*28*/].f_9 = 0f;
				}
				if (uVar566[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_967[iVar2 /*28*/].f_16 = unk_0x6BAB52A8425E7B4B(uVar566[iVar1], iVar2);
				}
				if (uVar686[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_1444[iVar2 /*28*/].f_13 = { unk_0x866B2C4E49D29F3B(uVar686[iVar1], iVar2) };
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_1444[iVar2 /*28*/].f_13 = { 0f, 0f, 0f };
				}
				if (uVar661[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_1444[iVar2 /*28*/] = { unk_0x866B2C4E49D29F3B(uVar661[iVar1], iVar2) };
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_1444[iVar2 /*28*/] = { 0f, 0f, 0f };
				}
				if (uVar671[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_1444[iVar2 /*28*/].f_3 = { unk_0x866B2C4E49D29F3B(uVar671[iVar1], iVar2) };
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_1444[iVar2 /*28*/].f_3 = { 0f, 0f, 0f };
				}
				if (uVar666[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_1444[iVar2 /*28*/].f_6 = { unk_0x866B2C4E49D29F3B(uVar666[iVar1], iVar2) };
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_1444[iVar2 /*28*/].f_6 = { 0f, 0f, 0f };
				}
				if (uVar681[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_1444[iVar2 /*28*/].f_10 = unk_0x07F84E836DFFE814(uVar681[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_1444[iVar2 /*28*/].f_10 = 0f;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar676[iVar1], iVar2) == 3)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_1444[iVar2 /*28*/].f_9 = unk_0x07F84E836DFFE814(uVar676[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_1444[iVar2 /*28*/].f_9 = 0f;
				}
				if (uVar656[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_1444[iVar2 /*28*/].f_16 = unk_0x6BAB52A8425E7B4B(uVar656[iVar1], iVar2);
				}
				if (uVar551[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_1921[iVar2 /*28*/].f_3 = { unk_0x866B2C4E49D29F3B(uVar551[iVar1], iVar2) };
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_1921[iVar2 /*28*/].f_3 = { 0f, 0f, 0f };
				}
				if (uVar556[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_1921[iVar2 /*28*/].f_6 = { unk_0x866B2C4E49D29F3B(uVar556[iVar1], iVar2) };
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_1921[iVar2 /*28*/].f_6 = { 0f, 0f, 0f };
				}
				if (uVar561[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_1921[iVar2 /*28*/].f_10 = unk_0x07F84E836DFFE814(uVar561[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_1921[iVar2 /*28*/].f_10 = 0f;
				}
				if (uVar541[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_1921[iVar2 /*28*/] = { unk_0x866B2C4E49D29F3B(uVar541[iVar1], iVar2) };
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_1921[iVar2 /*28*/] = { 0f, 0f, 0f };
				}
				if (uVar546[iVar1] != 0)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_1921[iVar2 /*28*/].f_9 = unk_0x07F84E836DFFE814(uVar546[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_1921[iVar2 /*28*/].f_9 = 0f;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar601[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_967[iVar2 /*28*/].f_19 = unk_0x6BAB52A8425E7B4B(uVar601[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_967[iVar2 /*28*/].f_19 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar606[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_967[iVar2 /*28*/].f_17 = unk_0x6BAB52A8425E7B4B(uVar606[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_967[iVar2 /*28*/].f_17 = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar611[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_967[iVar2 /*28*/].f_18 = unk_0x6BAB52A8425E7B4B(uVar611[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_967[iVar2 /*28*/].f_18 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar616[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_967[iVar2 /*28*/].f_20 = unk_0x6BAB52A8425E7B4B(uVar616[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_967[iVar2 /*28*/].f_20 = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar621[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_967[iVar2 /*28*/].f_23 = unk_0x6BAB52A8425E7B4B(uVar621[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_967[iVar2 /*28*/].f_23 = 120;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar626[iVar1], iVar2) == 3)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_967[iVar2 /*28*/].f_24 = unk_0x07F84E836DFFE814(uVar626[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_967[iVar2 /*28*/].f_24 = 5f;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar631[iVar1], iVar2) == 3)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_967[iVar2 /*28*/].f_25 = unk_0x07F84E836DFFE814(uVar631[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_967[iVar2 /*28*/].f_25 = 10f;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar636[iVar1], iVar2) == 3)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_967[iVar2 /*28*/].f_26 = unk_0x07F84E836DFFE814(uVar636[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_967[iVar2 /*28*/].f_26 = 30f;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar641[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_967[iVar2 /*28*/].f_27 = unk_0x6BAB52A8425E7B4B(uVar641[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_967[iVar2 /*28*/].f_27 = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar646[iVar1], iVar2) == 2 && unk_0x1C9BFBB46CC94A75(uVar651[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_967[iVar2 /*28*/].f_21 = unk_0x6BAB52A8425E7B4B(uVar646[iVar1], iVar2);
					Global_1632166.f_91[iVar1 /*8128*/].f_967[iVar2 /*28*/].f_22 = unk_0x6BAB52A8425E7B4B(uVar651[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_967[iVar2 /*28*/].f_21 = 0;
					Global_1632166.f_91[iVar1 /*8128*/].f_967[iVar2 /*28*/].f_22 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar691[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_1444[iVar2 /*28*/].f_19 = unk_0x6BAB52A8425E7B4B(uVar691[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_1444[iVar2 /*28*/].f_19 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar696[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_1444[iVar2 /*28*/].f_17 = unk_0x6BAB52A8425E7B4B(uVar696[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_1444[iVar2 /*28*/].f_17 = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar701[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_1444[iVar2 /*28*/].f_18 = unk_0x6BAB52A8425E7B4B(uVar701[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_1444[iVar2 /*28*/].f_18 = -1;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar706[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_1444[iVar2 /*28*/].f_20 = unk_0x6BAB52A8425E7B4B(uVar706[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_1444[iVar2 /*28*/].f_20 = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar711[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_1444[iVar2 /*28*/].f_23 = unk_0x6BAB52A8425E7B4B(uVar711[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_1444[iVar2 /*28*/].f_23 = 120;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar716[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_1444[iVar2 /*28*/].f_27 = unk_0x6BAB52A8425E7B4B(uVar716[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_1444[iVar2 /*28*/].f_27 = 0;
				}
				if (unk_0x1C9BFBB46CC94A75(uVar721[iVar1], iVar2) == 2 && unk_0x1C9BFBB46CC94A75(uVar726[iVar1], iVar2) == 2)
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_1444[iVar2 /*28*/].f_21 = unk_0x6BAB52A8425E7B4B(uVar721[iVar1], iVar2);
					Global_1632166.f_91[iVar1 /*8128*/].f_1444[iVar2 /*28*/].f_22 = unk_0x6BAB52A8425E7B4B(uVar726[iVar1], iVar2);
				}
				else
				{
					Global_1632166.f_91[iVar1 /*8128*/].f_1444[iVar2 /*28*/].f_21 = 0;
					Global_1632166.f_91[iVar1 /*8128*/].f_1444[iVar2 /*28*/].f_22 = -1;
				}
				iVar2++;
			}
		}
		iVar1++;
	}
}

void func_202(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
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
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	var uVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
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
	int iVar57;
	var uVar58[10];
	
	iVar0 = unk_0x4C4E1CA899A313BB(*iParam0, "endcon");
	iVar3 = unk_0x05989B8A830B4E1C(iVar0, "numpt");
	iVar4 = unk_0x05989B8A830B4E1C(iVar0, "ptint");
	iVar5 = unk_0x05989B8A830B4E1C(iVar0, "pptint");
	bVar7 = true;
	if (unk_0xF0E984A1CED01E3C(iVar0, "mnumpt") != 2)
	{
		bVar7 = false;
		iVar6 = unk_0x05989B8A830B4E1C(iVar0, "mnumpt");
	}
	iVar8 = unk_0x05989B8A830B4E1C(iVar0, "tcp");
	iVar9 = unk_0x05989B8A830B4E1C(iVar0, "tcr");
	iVar10 = unk_0x05989B8A830B4E1C(iVar0, "abits");
	iVar11 = unk_0x05989B8A830B4E1C(iVar0, "sdobs");
	iVar12 = unk_0x05989B8A830B4E1C(iVar0, "edobs");
	iVar13 = unk_0x05989B8A830B4E1C(iVar0, "dogps");
	iVar14 = unk_0x05989B8A830B4E1C(iVar0, "teamv");
	iVar15 = unk_0x05989B8A830B4E1C(iVar0, "teamrvc");
	iVar16 = unk_0x05989B8A830B4E1C(iVar0, "mcvbs");
	iVar17 = unk_0x05989B8A830B4E1C(iVar0, "mcobs");
	iVar18 = unk_0x05989B8A830B4E1C(iVar0, "mcpbs");
	iVar19 = unk_0x05989B8A830B4E1C(iVar0, "mcgbs");
	iVar20 = unk_0x05989B8A830B4E1C(iVar0, "rpgbs");
	iVar21 = unk_0x05989B8A830B4E1C(iVar0, "mcpbs1");
	iVar22 = unk_0x05989B8A830B4E1C(iVar0, "mcpbs2");
	iVar23 = unk_0x05989B8A830B4E1C(iVar0, "mcgbs1");
	iVar24 = unk_0x05989B8A830B4E1C(iVar0, "mcgbs2");
	iVar25 = unk_0x05989B8A830B4E1C(iVar0, "rpgbs1");
	iVar26 = unk_0x05989B8A830B4E1C(iVar0, "rpgbs2");
	iVar27 = unk_0x05989B8A830B4E1C(iVar0, "inpts");
	iVar28 = unk_0x05989B8A830B4E1C(iVar0, "ldsf1");
	iVar29 = unk_0x05989B8A830B4E1C(iVar0, "ldsf2");
	iVar30 = 1;
	if (unk_0xF0E984A1CED01E3C(iVar0, "tehlh") == 7)
	{
		iVar31 = unk_0x05989B8A830B4E1C(iVar0, "tehlh");
		iVar30 = 1;
	}
	else
	{
		iVar30 = 0;
	}
	iVar32 = unk_0x05989B8A830B4E1C(iVar0, "tehrn");
	iVar33 = unk_0x05989B8A830B4E1C(iVar0, "spsy1");
	iVar34 = unk_0x05989B8A830B4E1C(iVar0, "spsy2");
	iVar35 = unk_0x05989B8A830B4E1C(iVar0, "tenms");
	iVar36 = unk_0x05989B8A830B4E1C(iVar0, "csttn");
	iVar37 = unk_0x05989B8A830B4E1C(iVar0, "cstrn");
	iVar38 = unk_0x05989B8A830B4E1C(iVar0, "nrl");
	iVar39 = unk_0x05989B8A830B4E1C(iVar0, "tstrt");
	iVar40 = unk_0x05989B8A830B4E1C(iVar0, "tstop");
	uVar41 = unk_0x05989B8A830B4E1C(iVar0, "sms");
	iVar42 = unk_0x05989B8A830B4E1C(iVar0, "tblpv1");
	iVar43 = unk_0x05989B8A830B4E1C(iVar0, "tblpv2");
	iVar44 = unk_0x05989B8A830B4E1C(iVar0, "tblpv3");
	iVar45 = unk_0x05989B8A830B4E1C(iVar0, "tblpv4");
	iVar46 = unk_0x05989B8A830B4E1C(iVar0, "thudv1");
	iVar47 = unk_0x05989B8A830B4E1C(iVar0, "thudv2");
	iVar48 = unk_0x05989B8A830B4E1C(iVar0, "thudv3");
	iVar49 = unk_0x05989B8A830B4E1C(iVar0, "thudv4");
	iVar50 = unk_0x05989B8A830B4E1C(iVar0, "thlb1");
	iVar51 = unk_0x05989B8A830B4E1C(iVar0, "thlb2");
	iVar52 = unk_0x05989B8A830B4E1C(iVar0, "thlb3");
	iVar53 = unk_0x05989B8A830B4E1C(iVar0, "thlb4");
	iVar54 = unk_0x05989B8A830B4E1C(iVar0, "rcst1q");
	iVar55 = unk_0x05989B8A830B4E1C(iVar0, "rcst2q");
	iVar56 = unk_0x05989B8A830B4E1C(iVar0, "rcst3q");
	iVar57 = unk_0x05989B8A830B4E1C(iVar0, "rcst4q");
	iVar1 = 0;
	while (iVar1 <= (unk_0x33374BC9487FCBE5(uVar41) - 1))
	{
		uVar58[iVar1] = unk_0x9C241D830E66662E(uVar41, iVar1);
		Global_1632166.f_33450[iVar1 /*38*/] = unk_0x4985D6D7F7AB891A(uVar58[iVar1], "team");
		Global_1632166.f_33450[iVar1 /*38*/].f_1 = unk_0x4985D6D7F7AB891A(uVar58[iVar1], "rule");
		Global_1632166.f_33450[iVar1 /*38*/].f_2 = unk_0x4985D6D7F7AB891A(uVar58[iVar1], "time");
		StringCopy(&(Global_1632166.f_33450[iVar1 /*38*/].f_4[0 /*16*/]), unk_0x928932A7D11B745D(uVar58[iVar1], "txt0"), 64);
		StringCopy(&(Global_1632166.f_33450[iVar1 /*38*/].f_4[1 /*16*/]), unk_0x928932A7D11B745D(uVar58[iVar1], "txt1"), 64);
		Global_1632166.f_33450[iVar1 /*38*/].f_3 = unk_0x4985D6D7F7AB891A(uVar58[iVar1], "delay");
		Global_1632166.f_33450[iVar1 /*38*/].f_37 = unk_0x4985D6D7F7AB891A(uVar58[iVar1], "sndall");
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= (Global_1632166.f_29 - 1))
	{
		if (iVar1 < 4)
		{
			if (iVar14 != 0)
			{
				uVar2 = unk_0x6BAB52A8425E7B4B(iVar14, iVar1);
				Global_1632166.f_40735[iVar1] = uVar2;
			}
			else
			{
				Global_1632166.f_40735[iVar1] = 0;
			}
			if (iVar15 != 0)
			{
				Global_1632166.f_40773[iVar1] = unk_0x6BAB52A8425E7B4B(iVar15, iVar1);
			}
			else
			{
				Global_1632166.f_40773[iVar1] = -1;
			}
			if (iVar3 != 0)
			{
				Global_1632166.f_31[iVar1] = unk_0x6BAB52A8425E7B4B(iVar3, iVar1);
			}
			if (Global_1632166.f_31[iVar1] < 1)
			{
				Global_1632166.f_31[iVar1] = 1;
			}
			if (iVar4 != 0)
			{
				Global_1632166.f_34292[iVar1] = unk_0x6BAB52A8425E7B4B(iVar4, iVar1);
			}
			else
			{
				Global_1632166.f_34292[iVar1] = -1;
			}
			if (iVar5 != 0)
			{
				Global_1632166.f_34297[iVar1] = unk_0x6BAB52A8425E7B4B(iVar5, iVar1);
			}
			else
			{
				Global_1632166.f_34297[iVar1] = -1;
			}
			if (bVar7)
			{
				Global_1632166.f_36[iVar1] = 0;
			}
			else
			{
				if (iVar6 != 0)
				{
					Global_1632166.f_36[iVar1] = unk_0x6BAB52A8425E7B4B(iVar6, iVar1);
				}
				if (Global_1632166.f_36[iVar1] < 0)
				{
					Global_1632166.f_36[iVar1] = 0;
				}
			}
			if (iVar8 != 0)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_4 = { unk_0x866B2C4E49D29F3B(iVar8, iVar1) };
			}
			if (iVar9 != 0)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_7 = { unk_0x866B2C4E49D29F3B(iVar9, iVar1) };
			}
			if (iVar10 != 0)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_963 = unk_0x6BAB52A8425E7B4B(iVar10, iVar1);
			}
			if (iVar11 != 0)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_964 = unk_0x6BAB52A8425E7B4B(iVar11, iVar1);
			}
			if (iVar12 != 0)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_965 = unk_0x6BAB52A8425E7B4B(iVar12, iVar1);
			}
			if (iVar13 != 0)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_966 = unk_0x6BAB52A8425E7B4B(iVar13, iVar1);
			}
			if (unk_0x1C9BFBB46CC94A75(iVar28, iVar1) == 2 && iVar28 != 0)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_583 = unk_0x6BAB52A8425E7B4B(iVar28, iVar1);
			}
			else
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_583 = 0;
			}
			if (unk_0x1C9BFBB46CC94A75(iVar29, iVar1) == 2 && iVar29 != 0)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_584 = unk_0x6BAB52A8425E7B4B(iVar29, iVar1);
			}
			else
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_584 = 0;
			}
			if (iVar16 != 0)
			{
				Global_1632166.f_33440[iVar1] = unk_0x6BAB52A8425E7B4B(iVar16, iVar1);
			}
			if (unk_0x1C9BFBB46CC94A75(iVar17, iVar1) == 2)
			{
				Global_1632166.f_33445[iVar1] = unk_0x6BAB52A8425E7B4B(iVar17, iVar1);
			}
			else
			{
				Global_1632166.f_33445[iVar1] = 0;
			}
			if (iVar18 != 0)
			{
				Global_1632166.f_33396[iVar1] = unk_0x6BAB52A8425E7B4B(iVar18, iVar1);
			}
			if (iVar21 != 0)
			{
				Global_1632166.f_33427[iVar1 /*3*/][0] = unk_0x6BAB52A8425E7B4B(iVar21, iVar1);
			}
			if (iVar22 != 0)
			{
				Global_1632166.f_33427[iVar1 /*3*/][1] = unk_0x6BAB52A8425E7B4B(iVar22, iVar1);
			}
			if (Global_1632166.f_33396[iVar1] != 0 && Global_1632166.f_33427[iVar1 /*3*/][0] == 0)
			{
				Global_1632166.f_33427[iVar1 /*3*/][0] = Global_1632166.f_33396[iVar1];
			}
			if (iVar19 != 0)
			{
				Global_1632166.f_33391[iVar1] = unk_0x6BAB52A8425E7B4B(iVar19, iVar1);
			}
			if (iVar23 != 0)
			{
				Global_1632166.f_33414[iVar1 /*3*/][0] = unk_0x6BAB52A8425E7B4B(iVar23, iVar1);
			}
			if (iVar24 != 0)
			{
				Global_1632166.f_33414[iVar1 /*3*/][1] = unk_0x6BAB52A8425E7B4B(iVar24, iVar1);
			}
			if (Global_1632166.f_33391[iVar1] != 0 && Global_1632166.f_33414[iVar1 /*3*/][0] == 0)
			{
				Global_1632166.f_33414[iVar1 /*3*/][0] = Global_1632166.f_33391[iVar1];
			}
			if (iVar20 != 0)
			{
				Global_1632166.f_33386[iVar1] = unk_0x6BAB52A8425E7B4B(iVar20, iVar1);
			}
			if (iVar25 != 0)
			{
				Global_1632166.f_33401[iVar1 /*3*/][0] = unk_0x6BAB52A8425E7B4B(iVar25, iVar1);
			}
			if (iVar26 != 0)
			{
				Global_1632166.f_33401[iVar1 /*3*/][1] = unk_0x6BAB52A8425E7B4B(iVar26, iVar1);
			}
			if (Global_1632166.f_33386[iVar1] != 0 && Global_1632166.f_33401[iVar1 /*3*/][0] == 0)
			{
				Global_1632166.f_33401[iVar1 /*3*/][0] = Global_1632166.f_33386[iVar1];
			}
			if (iVar27 != 0)
			{
				Global_1632166.f_32655[iVar1] = unk_0x6BAB52A8425E7B4B(iVar27, iVar1);
			}
			if (iVar30 && iVar31 != 0)
			{
				Global_1632166.f_32687[iVar1] = unk_0x6BAB52A8425E7B4B(iVar31, iVar1);
			}
			else
			{
				Global_1632166.f_32687[iVar1] = 3;
			}
			if (unk_0x1C9BFBB46CC94A75(iVar32, iVar1) == 2)
			{
				Global_1632166.f_32692[iVar1] = unk_0x6BAB52A8425E7B4B(iVar32, iVar1);
			}
			if (iVar33 != 0)
			{
				StringCopy(&(Global_1632166.f_91[iVar1 /*8128*/].f_7542[0 /*16*/]), unk_0xE0DCCCE203DC2979(iVar33, iVar1), 64);
			}
			if (iVar34 != 0)
			{
				StringCopy(&(Global_1632166.f_91[iVar1 /*8128*/].f_7542[1 /*16*/]), unk_0xE0DCCCE203DC2979(iVar34, iVar1), 64);
			}
			if (iVar35 != 0)
			{
				Global_1632166.f_32660[iVar1] = unk_0x6BAB52A8425E7B4B(iVar35, iVar1);
			}
			if (iVar36 != 0)
			{
				StringCopy(&(Global_1632166.f_32665[iVar1 /*4*/]), unk_0xE0DCCCE203DC2979(iVar36, iVar1), 16);
			}
			if (iVar37 != 0)
			{
				Global_1632166.f_32682[iVar1] = unk_0x6BAB52A8425E7B4B(iVar37, iVar1);
			}
			if (unk_0x1C9BFBB46CC94A75(iVar39, iVar1) == 2 && iVar39 != 0)
			{
				Global_1632166.f_90694[iVar1] = unk_0x6BAB52A8425E7B4B(iVar39, iVar1);
			}
			if (unk_0x1C9BFBB46CC94A75(iVar40, iVar1) == 2 && iVar40 != 0)
			{
				Global_1632166.f_90699[iVar1] = unk_0x6BAB52A8425E7B4B(iVar40, iVar1);
			}
			if (iVar38 != 0)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_57 = unk_0x6BAB52A8425E7B4B(iVar38, iVar1);
			}
			if (unk_0x1C9BFBB46CC94A75(iVar42, iVar1) == 2)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_4520 = unk_0x6BAB52A8425E7B4B(iVar42, iVar1);
			}
			else
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_4520 = 0;
			}
			if (unk_0x1C9BFBB46CC94A75(iVar43, iVar1) == 2)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_4521 = unk_0x6BAB52A8425E7B4B(iVar43, iVar1);
			}
			else
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_4521 = 0;
			}
			if (unk_0x1C9BFBB46CC94A75(iVar44, iVar1) == 2)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_4522 = unk_0x6BAB52A8425E7B4B(iVar44, iVar1);
			}
			else
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_4522 = 0;
			}
			if (unk_0x1C9BFBB46CC94A75(iVar45, iVar1) == 2)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_4523 = unk_0x6BAB52A8425E7B4B(iVar45, iVar1);
			}
			else
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_4523 = 0;
			}
			if (unk_0x1C9BFBB46CC94A75(iVar46, iVar1) == 2)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_4524 = unk_0x6BAB52A8425E7B4B(iVar46, iVar1);
			}
			else
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_4524 = 0;
			}
			if (unk_0x1C9BFBB46CC94A75(iVar47, iVar1) == 2)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_4525 = unk_0x6BAB52A8425E7B4B(iVar47, iVar1);
			}
			else
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_4525 = 0;
			}
			if (unk_0x1C9BFBB46CC94A75(iVar48, iVar1) == 2)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_4526 = unk_0x6BAB52A8425E7B4B(iVar48, iVar1);
			}
			else
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_4526 = 0;
			}
			if (unk_0x1C9BFBB46CC94A75(iVar49, iVar1) == 2)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_4527 = unk_0x6BAB52A8425E7B4B(iVar49, iVar1);
			}
			else
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_4527 = 0;
			}
			if (unk_0x1C9BFBB46CC94A75(iVar50, iVar1) == 2)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_4528 = unk_0x6BAB52A8425E7B4B(iVar50, iVar1);
			}
			else
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_4528 = 0;
			}
			if (unk_0x1C9BFBB46CC94A75(iVar51, iVar1) == 2)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_4529 = unk_0x6BAB52A8425E7B4B(iVar51, iVar1);
			}
			else
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_4529 = 0;
			}
			if (unk_0x1C9BFBB46CC94A75(iVar52, iVar1) == 2)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_4530 = unk_0x6BAB52A8425E7B4B(iVar52, iVar1);
			}
			else
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_4530 = 0;
			}
			if (unk_0x1C9BFBB46CC94A75(iVar53, iVar1) == 2)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_4531 = unk_0x6BAB52A8425E7B4B(iVar53, iVar1);
			}
			else
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_4531 = 0;
			}
			if (unk_0x1C9BFBB46CC94A75(iVar54, iVar1) == 2)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_4532 = unk_0x6BAB52A8425E7B4B(iVar54, iVar1);
			}
			else
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_4532 = 0;
			}
			if (unk_0x1C9BFBB46CC94A75(iVar55, iVar1) == 2)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_4533 = unk_0x6BAB52A8425E7B4B(iVar55, iVar1);
			}
			else
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_4533 = 0;
			}
			if (unk_0x1C9BFBB46CC94A75(iVar56, iVar1) == 2)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_4534 = unk_0x6BAB52A8425E7B4B(iVar56, iVar1);
			}
			else
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_4534 = 0;
			}
			if (unk_0x1C9BFBB46CC94A75(iVar57, iVar1) == 2)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_4535 = unk_0x6BAB52A8425E7B4B(iVar57, iVar1);
			}
			else
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_4535 = 0;
			}
		}
		iVar1++;
	}
}

void func_203(int iParam0)
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
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
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
	int iVar57;
	int iVar58;
	int iVar59;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	int iVar65;
	int iVar66;
	int iVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	
	iVar0 = unk_0x4C4E1CA899A313BB(*iParam0, "endcon");
	iVar2 = unk_0x05989B8A830B4E1C(iVar0, "stpos");
	iVar3 = unk_0x05989B8A830B4E1C(iVar0, "delr");
	iVar4 = unk_0x05989B8A830B4E1C(iVar0, "epos");
	iVar5 = unk_0x05989B8A830B4E1C(iVar0, "endr");
	iVar6 = unk_0x05989B8A830B4E1C(iVar0, "vareapos");
	iVar7 = unk_0x05989B8A830B4E1C(iVar0, "arear");
	iVar8 = unk_0x05989B8A830B4E1C(iVar0, "time");
	iVar9 = unk_0x05989B8A830B4E1C(iVar0, "plkr");
	iVar10 = unk_0x05989B8A830B4E1C(iVar0, "pekr");
	iVar11 = unk_0x05989B8A830B4E1C(iVar0, "vhkr");
	iVar12 = unk_0x05989B8A830B4E1C(iVar0, "obkr");
	iVar13 = unk_0x05989B8A830B4E1C(iVar0, "dr");
	iVar14 = unk_0x05989B8A830B4E1C(iVar0, "pedr");
	iVar15 = unk_0x05989B8A830B4E1C(iVar0, "vedr");
	iVar16 = unk_0x05989B8A830B4E1C(iVar0, "obdr");
	iVar17 = unk_0x05989B8A830B4E1C(iVar0, "lwmbs");
	iVar18 = unk_0x05989B8A830B4E1C(iVar0, "flmbs");
	iVar19 = unk_0x05989B8A830B4E1C(iVar0, "vdoibs");
	iVar20 = unk_0x05989B8A830B4E1C(iVar0, "vdohu");
	iVar21 = unk_0x05989B8A830B4E1C(iVar0, "tmbts");
	iVar22 = unk_0x05989B8A830B4E1C(iVar0, "tmbt2");
	iVar23 = unk_0x05989B8A830B4E1C(iVar0, "swmbs");
	iVar24 = unk_0x05989B8A830B4E1C(iVar0, "gbmbs");
	iVar25 = unk_0x05989B8A830B4E1C(iVar0, "pcbd");
	iVar26 = unk_0x05989B8A830B4E1C(iVar0, "lwbs");
	iVar27 = unk_0x05989B8A830B4E1C(iVar0, "wodia");
	iVar28 = unk_0x05989B8A830B4E1C(iVar0, "repcr");
	iVar29 = unk_0x05989B8A830B4E1C(iVar0, "woabs");
	iVar30 = unk_0x05989B8A830B4E1C(iVar0, "fwoabs");
	iVar31 = unk_0x05989B8A830B4E1C(iVar0, "fail");
	iVar32 = unk_0x05989B8A830B4E1C(iVar0, "vehrsp");
	iVar33 = unk_0x05989B8A830B4E1C(iVar0, "spit");
	iVar34 = unk_0x05989B8A830B4E1C(iVar0, "pglr");
	iVar35 = unk_0x05989B8A830B4E1C(iVar0, "mtlr");
	iVar36 = unk_0x05989B8A830B4E1C(iVar0, "mslr");
	iVar37 = unk_0x05989B8A830B4E1C(iVar0, "mlpl");
	iVar38 = unk_0x05989B8A830B4E1C(iVar0, "plyl");
	iVar39 = unk_0x05989B8A830B4E1C(iVar0, "shd");
	iVar40 = unk_0x05989B8A830B4E1C(iVar0, "spar");
	iVar41 = unk_0x05989B8A830B4E1C(iVar0, "2spar");
	iVar42 = unk_0x05989B8A830B4E1C(iVar0, "boud");
	iVar43 = unk_0x05989B8A830B4E1C(iVar0, "bla");
	iVar44 = unk_0x05989B8A830B4E1C(iVar0, "wla");
	iVar45 = unk_0x05989B8A830B4E1C(iVar0, "patm");
	iVar46 = unk_0x05989B8A830B4E1C(iVar0, "bnd2");
	iVar47 = unk_0x05989B8A830B4E1C(iVar0, "bla2");
	iVar48 = unk_0x05989B8A830B4E1C(iVar0, "wla2");
	iVar49 = unk_0x05989B8A830B4E1C(iVar0, "pat2");
	iVar50 = unk_0x05989B8A830B4E1C(iVar0, "inv");
	iVar51 = unk_0x05989B8A830B4E1C(iVar0, "inv2");
	iVar52 = unk_0x05989B8A830B4E1C(iVar0, "inv3");
	iVar53 = unk_0x05989B8A830B4E1C(iVar0, "invsw");
	iVar54 = unk_0x05989B8A830B4E1C(iVar0, "invtm");
	iVar55 = unk_0x05989B8A830B4E1C(iVar0, "invrl");
	iVar56 = unk_0x05989B8A830B4E1C(iVar0, "inv2tm");
	iVar57 = unk_0x05989B8A830B4E1C(iVar0, "inv2rl");
	iVar58 = unk_0x05989B8A830B4E1C(iVar0, "sinv");
	iVar59 = unk_0x05989B8A830B4E1C(iVar0, "sinv2");
	iVar60 = unk_0x05989B8A830B4E1C(iVar0, "sinv3");
	iVar61 = unk_0x05989B8A830B4E1C(iVar0, "minv");
	iVar62 = unk_0x05989B8A830B4E1C(iVar0, "mmsw");
	iVar63 = unk_0x05989B8A830B4E1C(iVar0, "mmsw2");
	iVar64 = unk_0x05989B8A830B4E1C(iVar0, "minv2");
	iVar65 = unk_0x05989B8A830B4E1C(iVar0, "minv3");
	iVar66 = unk_0x05989B8A830B4E1C(iVar0, "ppk");
	iVar67 = unk_0x05989B8A830B4E1C(iVar0, "mts");
	iVar68 = unk_0x05989B8A830B4E1C(iVar0, "spwia");
	iVar69 = unk_0x05989B8A830B4E1C(iVar0, "2spwia");
	iVar70 = unk_0x05989B8A830B4E1C(iVar0, "pcl");
	iVar71 = unk_0x05989B8A830B4E1C(iVar0, "ocl");
	iVar72 = unk_0x05989B8A830B4E1C(iVar0, "arrt");
	iVar1 = 0;
	while (iVar1 <= (Global_1632166.f_29 - 1))
	{
		if (iVar1 < 4)
		{
			if (iVar2 != 0)
			{
				Global_1632166.f_91[iVar1 /*8128*/] = { unk_0x866B2C4E49D29F3B(iVar2, iVar1) };
			}
			if (iVar17 != 0)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_3341 = unk_0x6BAB52A8425E7B4B(iVar17, iVar1);
			}
			if (iVar18 != 0)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_3362 = unk_0x6BAB52A8425E7B4B(iVar18, iVar1);
			}
			if (iVar19 != 0)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_4023 = unk_0x6BAB52A8425E7B4B(iVar19, iVar1);
			}
			if (unk_0x1C9BFBB46CC94A75(iVar20, iVar1) == 2)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_4024 = unk_0x6BAB52A8425E7B4B(iVar20, iVar1);
			}
			else
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_4024 = 0;
			}
			if (iVar21 != 0)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_4331 = unk_0x6BAB52A8425E7B4B(iVar21, iVar1);
			}
			if (iVar22 != 0)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_4332 = unk_0x6BAB52A8425E7B4B(iVar22, iVar1);
			}
			if (iVar23 != 0)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_3343 = unk_0x6BAB52A8425E7B4B(iVar23, iVar1);
			}
			if (iVar24 != 0)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_3436 = unk_0x6BAB52A8425E7B4B(iVar24, iVar1);
			}
			if (iVar25 != 0)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_4536 = unk_0x6BAB52A8425E7B4B(iVar25, iVar1);
			}
			if (iVar26 != 0)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_3340 = unk_0x6BAB52A8425E7B4B(iVar26, iVar1);
			}
			if (iVar29 != 0)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_3342 = unk_0x6BAB52A8425E7B4B(iVar29, iVar1);
			}
			if (iVar27 != 0)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_2974 = unk_0x6BAB52A8425E7B4B(iVar27, iVar1);
			}
			if (iVar28 != 0)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_2975 = unk_0x6BAB52A8425E7B4B(iVar28, iVar1);
			}
			if (iVar30 != 0)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_3363 = unk_0x6BAB52A8425E7B4B(iVar30, iVar1);
			}
			if (iVar31 != 0)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_4537 = unk_0x6BAB52A8425E7B4B(iVar31, iVar1);
			}
			if (iVar32 != 0)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_4538 = unk_0x6BAB52A8425E7B4B(iVar32, iVar1);
			}
			if (iVar33 != 0)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_8108 = unk_0x6BAB52A8425E7B4B(iVar33, iVar1);
			}
			if (iVar34 != 0)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_8109 = unk_0x6BAB52A8425E7B4B(iVar34, iVar1);
			}
			if (iVar35 != 0)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_32 = unk_0x6BAB52A8425E7B4B(iVar35, iVar1);
			}
			if (iVar36 != 0)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_33 = unk_0x6BAB52A8425E7B4B(iVar36, iVar1);
			}
			if (unk_0x1C9BFBB46CC94A75(iVar37, iVar1) == 2)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_34 = unk_0x6BAB52A8425E7B4B(iVar37, iVar1);
			}
			else
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_34 = 0;
			}
			if (iVar38 != 0)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_36 = unk_0x6BAB52A8425E7B4B(iVar38, iVar1);
			}
			if (iVar40 != 0)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_2969 = unk_0x6BAB52A8425E7B4B(iVar40, iVar1);
			}
			if (iVar41 != 0)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_2971 = unk_0x6BAB52A8425E7B4B(iVar41, iVar1);
			}
			if (iVar42 != 0)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_2967 = unk_0x6BAB52A8425E7B4B(iVar42, iVar1);
			}
			if (iVar43 != 0)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_2966 = unk_0x6BAB52A8425E7B4B(iVar43, iVar1);
			}
			if (unk_0x1C9BFBB46CC94A75(iVar45, iVar1) == 2 && iVar45 != 0)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_2968 = unk_0x6BAB52A8425E7B4B(iVar45, iVar1);
			}
			else
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_2968 = 60000;
			}
			if (unk_0x1C9BFBB46CC94A75(iVar46, iVar1) == 2)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_3193 = unk_0x6BAB52A8425E7B4B(iVar46, iVar1);
			}
			else
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_3193 = 0;
			}
			if (unk_0x1C9BFBB46CC94A75(iVar47, iVar1) == 2)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_3192 = unk_0x6BAB52A8425E7B4B(iVar47, iVar1);
			}
			else
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_3192 = 0;
			}
			if (unk_0x1C9BFBB46CC94A75(iVar49, iVar1) == 2)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_3194 = unk_0x6BAB52A8425E7B4B(iVar49, iVar1);
			}
			else
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_3194 = 60000;
			}
			if (unk_0x1C9BFBB46CC94A75(iVar48, iVar1) == 2)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_3195 = unk_0x6BAB52A8425E7B4B(iVar48, iVar1);
			}
			else
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_3195 = 0;
			}
			if (iVar50 != 0)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_59 = unk_0x6BAB52A8425E7B4B(iVar50, iVar1);
			}
			if (iVar51 != 0)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_60 = unk_0x6BAB52A8425E7B4B(iVar51, iVar1);
			}
			if (iVar52 != 0)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_61 = unk_0x6BAB52A8425E7B4B(iVar52, iVar1);
			}
			if (unk_0x1C9BFBB46CC94A75(iVar53, iVar1) == 2)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_204 = unk_0x6BAB52A8425E7B4B(iVar53, iVar1);
			}
			else
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_204 = -1;
			}
			if (unk_0x1C9BFBB46CC94A75(iVar62, iVar1) == 2)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_205 = unk_0x6BAB52A8425E7B4B(iVar62, iVar1);
			}
			else
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_205 = -1;
			}
			if (unk_0x1C9BFBB46CC94A75(iVar63, iVar1) == 2)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_206 = unk_0x6BAB52A8425E7B4B(iVar63, iVar1);
			}
			else
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_206 = -1;
			}
			if (unk_0x1C9BFBB46CC94A75(iVar54, iVar1) == 2 && unk_0x1C9BFBB46CC94A75(iVar55, iVar1) == 2)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_352 = unk_0x6BAB52A8425E7B4B(iVar54, iVar1);
				Global_1632166.f_91[iVar1 /*8128*/].f_353 = unk_0x6BAB52A8425E7B4B(iVar55, iVar1);
			}
			else
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_352 = -1;
				Global_1632166.f_91[iVar1 /*8128*/].f_353 = -1;
			}
			if (iVar58 != 0)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_207 = unk_0x6BAB52A8425E7B4B(iVar58, iVar1);
			}
			if (iVar59 != 0)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_208 = unk_0x6BAB52A8425E7B4B(iVar59, iVar1);
			}
			if (iVar60 != 0)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_209 = unk_0x6BAB52A8425E7B4B(iVar60, iVar1);
			}
			if (unk_0x1C9BFBB46CC94A75(iVar56, iVar1) == 2 && unk_0x1C9BFBB46CC94A75(iVar57, iVar1) == 2)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_499 = unk_0x6BAB52A8425E7B4B(iVar56, iVar1);
				Global_1632166.f_91[iVar1 /*8128*/].f_500 = unk_0x6BAB52A8425E7B4B(iVar57, iVar1);
			}
			else
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_499 = -1;
				Global_1632166.f_91[iVar1 /*8128*/].f_500 = -1;
			}
			if (iVar61 != 0)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_354 = unk_0x6BAB52A8425E7B4B(iVar61, iVar1);
			}
			if (iVar64 != 0)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_355 = unk_0x6BAB52A8425E7B4B(iVar64, iVar1);
			}
			if (iVar65 != 0)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_356 = unk_0x6BAB52A8425E7B4B(iVar65, iVar1);
			}
			if (iVar66 != 0)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_55 = unk_0x6BAB52A8425E7B4B(iVar66, iVar1);
			}
			if (iVar67 != 0)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_56 = unk_0x6BAB52A8425E7B4B(iVar67, iVar1);
			}
			if (iVar68 != 0)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_2970 = unk_0x6BAB52A8425E7B4B(iVar68, iVar1);
			}
			if (iVar69 != 0)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_2972 = unk_0x6BAB52A8425E7B4B(iVar69, iVar1);
			}
			if (iVar44 != 0)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_2973 = unk_0x6BAB52A8425E7B4B(iVar44, iVar1);
			}
			if (iVar39 != 0)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_3 = unk_0x07F84E836DFFE814(iVar39, iVar1);
			}
			if (iVar70 != 0)
			{
				Global_1632166.f_32604[iVar1] = unk_0x6BAB52A8425E7B4B(iVar70, iVar1);
			}
			if (iVar71 != 0)
			{
				Global_1632166.f_32609[iVar1] = unk_0x6BAB52A8425E7B4B(iVar71, iVar1);
			}
			if (iVar72 != 0)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_35 = unk_0x6BAB52A8425E7B4B(iVar72, iVar1);
			}
			if (iVar3 != 0)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_14 = unk_0x6BAB52A8425E7B4B(iVar3, iVar1);
			}
			if (iVar4 != 0)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_15 = { unk_0x866B2C4E49D29F3B(iVar4, iVar1) };
			}
			if (iVar5 != 0)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_18 = unk_0x6BAB52A8425E7B4B(iVar5, iVar1);
			}
			if (iVar6 != 0)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_19 = { unk_0x866B2C4E49D29F3B(iVar6, iVar1) };
			}
			if (iVar7 != 0)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_22 = unk_0x6BAB52A8425E7B4B(iVar7, iVar1);
			}
			if (iVar8 != 0)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_23 = unk_0x6BAB52A8425E7B4B(iVar8, iVar1);
			}
			if (iVar9 != 0)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_24 = unk_0x6BAB52A8425E7B4B(iVar9, iVar1);
			}
			if (iVar10 != 0)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_25 = unk_0x6BAB52A8425E7B4B(iVar10, iVar1);
			}
			if (iVar11 != 0)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_26 = unk_0x6BAB52A8425E7B4B(iVar11, iVar1);
			}
			if (iVar12 != 0)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_27 = unk_0x6BAB52A8425E7B4B(iVar12, iVar1);
			}
			if (iVar13 != 0)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_28 = unk_0x6BAB52A8425E7B4B(iVar13, iVar1);
			}
			if (iVar14 != 0)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_29 = unk_0x6BAB52A8425E7B4B(iVar14, iVar1);
			}
			if (iVar15 != 0)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_30 = unk_0x6BAB52A8425E7B4B(iVar15, iVar1);
			}
			if (iVar16 != 0)
			{
				Global_1632166.f_91[iVar1 /*8128*/].f_31 = unk_0x6BAB52A8425E7B4B(iVar16, iVar1);
			}
		}
		iVar1++;
	}
}

void func_204(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x4C4E1CA899A313BB(iParam0, "rule");
	Global_1632166.f_48 = unk_0x4985D6D7F7AB891A(iVar0, "time");
	Global_1632166.f_50 = unk_0x4985D6D7F7AB891A(iVar0, "score");
	Global_1632166.f_61 = unk_0x4985D6D7F7AB891A(iVar0, "prule");
	Global_1632166.f_52629 = unk_0x4985D6D7F7AB891A(iVar0, "ptyp");
	Global_1632166.f_51 = unk_0x4985D6D7F7AB891A(iVar0, "blip");
	Global_1632166.f_53 = unk_0x4985D6D7F7AB891A(iVar0, "tag");
	Global_1632166.f_54 = unk_0x4985D6D7F7AB891A(iVar0, "voice");
	Global_1632166.f_55 = unk_0x4985D6D7F7AB891A(iVar0, "radio");
	Global_1632166.f_56 = unk_0x4985D6D7F7AB891A(iVar0, "aim");
	Global_1632166.f_40784 = unk_0x4985D6D7F7AB891A(iVar0, "pol");
	Global_1632166.f_44 = unk_0x4985D6D7F7AB891A(iVar0, "liv");
	Global_1632166.f_40142 = unk_0x4985D6D7F7AB891A(iVar0, "traf");
	Global_1632166.f_86973 = unk_0x4985D6D7F7AB891A(iVar0, "tod");
	Global_1632166.f_86958 = unk_0x4985D6D7F7AB891A(iVar0, "weth");
	Global_1632166.f_86975 = unk_0x4985D6D7F7AB891A(iVar0, "apeds");
	Global_1632166.f_86974 = unk_0x4985D6D7F7AB891A(iVar0, "vehd");
	Global_1632166.f_59 = unk_0x4985D6D7F7AB891A(iVar0, "vdm");
	Global_1632166.f_57 = unk_0x4985D6D7F7AB891A(iVar0, "tdm");
	Global_1632166.f_32604[0] = unk_0x4985D6D7F7AB891A(iVar0, "pcr");
	Global_1632166.f_32609[0] = unk_0x4985D6D7F7AB891A(iVar0, "ocr");
}

void func_205(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	char cVar4[16];
	int iVar8;
	char[] cVar9[8];
	char cVar11[16];
	int iVar15;
	int iVar16;
	char cVar17[16];
	int iVar21;
	int iVar22;
	int iVar23;
	var uVar24;
	int iVar25;
	int iVar26;
	char* sVar27;
	int iVar28;
	int iVar29;
	float fVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	char cVar35[16];
	char cVar39[16];
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	
	iVar0 = unk_0x4C4E1CA899A313BB(iParam0, "gen");
	Global_1632166 = unk_0x4985D6D7F7AB891A(iVar0, "type");
	Global_1632166.f_9 = unk_0x1DCCD87216370AE6(iVar0, "ngjob");
	unk_0xF44A5E894FE76438(Global_1632166.f_7, 0);
	bVar1 = unk_0x1DCCD87216370AE6(iVar0, "photo");
	if (bVar1)
	{
		unk_0xB8A73E7DA87B2968(&(Global_1632166.f_7), 0);
	}
	else
	{
		unk_0x4EA098C870B73AB7(&(Global_1632166.f_7), 0);
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "ivm") == 2)
	{
		Global_1632166.f_40734 = unk_0x4985D6D7F7AB891A(iVar0, "ivm");
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "fixcam") == 2)
	{
		Global_1632166.f_90707 = unk_0x4985D6D7F7AB891A(iVar0, "fixcam");
	}
	else
	{
		Global_1632166.f_90707 = 0;
	}
	Global_1632166.f_4 = unk_0x4985D6D7F7AB891A(iVar0, "optbs");
	Global_1632166.f_74 = { unk_0x97AB8757C3B46AA0(iVar0, "camo") };
	Global_1632166.f_77 = { unk_0x97AB8757C3B46AA0(iVar0, "camro") };
	Global_1632166.f_68 = { unk_0x97AB8757C3B46AA0(iVar0, "cam") };
	Global_1632166.f_87 = unk_0x1B52B6FA98557E78(iVar0, "camh");
	Global_1632166.f_80 = { unk_0x97AB8757C3B46AA0(iVar0, "camf") };
	Global_1632166.f_83 = { unk_0x97AB8757C3B46AA0(iVar0, "camfr") };
	Global_1632166.f_86 = unk_0x1B52B6FA98557E78(iVar0, "camfv");
	Global_1632166.f_86335 = unk_0x1B52B6FA98557E78(iVar0, "dmbds");
	Global_1632166.f_62 = { unk_0x97AB8757C3B46AA0(iVar0, "phpo") };
	StringCopy(&(Global_1632166.f_86518[0 /*16*/]), unk_0x928932A7D11B745D(iVar0, "szTag"), 64);
	if (unk_0xF0E984A1CED01E3C(iVar0, "chksfx") == 1)
	{
		Global_1632166.f_105305 = 1;
	}
	else
	{
		Global_1632166.f_105305 = 0;
	}
	StringCopy(&cVar4, "nrcid", 16);
	if (bParam2)
	{
		iVar2 = 0;
		while (iVar2 <= 1)
		{
			StringCopy(&cVar4, "nrcid", 16);
			StringIntConCat(&cVar4, iVar2, 16);
			StringCopy(&(Global_1632166.f_86653[iVar2 /*6*/]), unk_0x928932A7D11B745D(iVar0, &cVar4), 24);
			iVar2++;
		}
	}
	if (func_125())
	{
		Global_1632166.f_2 = unk_0x4985D6D7F7AB891A(iVar0, "subtype");
		Global_1632166.f_105262 = unk_0x4985D6D7F7AB891A(iVar0, "adverm");
		Global_1632166.f_90704 = unk_0x4985D6D7F7AB891A(iVar0, "testcomplete");
		if (((Global_1632166.f_2 == 6 || Global_1632166.f_2 == 5) || Global_1632166.f_2 == 4) || Global_1632166.f_2 == 9)
		{
			if (unk_0xF0E984A1CED01E3C(iVar0, "teamBal") == 2)
			{
				Global_1632166.f_90706 = unk_0x4985D6D7F7AB891A(iVar0, "numRounds");
			}
			else
			{
				Global_1632166.f_90706 = 1;
			}
			if (Global_1632166.f_90706 < 1)
			{
				Global_1632166.f_90706 = 1;
			}
		}
		if (unk_0xF0E984A1CED01E3C(iVar0, "teamBal") == 2)
		{
			Global_1632166.f_90708 = unk_0x4985D6D7F7AB891A(iVar0, "teamBal");
		}
		else
		{
			Global_1632166.f_90708 = 5;
		}
	}
	Global_1632166.f_90705 = unk_0x4985D6D7F7AB891A(iVar0, "testcomplete");
	Global_1632166.f_49 = unk_0x4985D6D7F7AB891A(iVar0, "endtype");
	Global_1632166.f_11 = unk_0x4985D6D7F7AB891A(iVar0, "menubs");
	if (unk_0xF0E984A1CED01E3C(iVar0, "ovrpc") == 2)
	{
		Global_1632166.f_59750 = unk_0x4985D6D7F7AB891A(iVar0, "ovrpc");
	}
	else
	{
		Global_1632166.f_59750 = -1;
	}
	Global_1632166.f_12 = unk_0x4985D6D7F7AB891A(iVar0, "menubs2");
	if (unk_0xF0E984A1CED01E3C(iVar0, "menubs3") == 2)
	{
		Global_1632166.f_13 = unk_0x4985D6D7F7AB891A(iVar0, "menubs3");
	}
	else
	{
		Global_1632166.f_13 = 0;
	}
	Global_1632166.f_14 = unk_0x4985D6D7F7AB891A(iVar0, "menubs4");
	Global_1632166.f_15 = unk_0x4985D6D7F7AB891A(iVar0, "menubs5");
	Global_1632166.f_16 = unk_0x4985D6D7F7AB891A(iVar0, "menubs6");
	Global_1632166.f_17 = unk_0x4985D6D7F7AB891A(iVar0, "menubs7");
	Global_1632166.f_18 = unk_0x4985D6D7F7AB891A(iVar0, "menubs8");
	Global_1632166.f_19 = unk_0x4985D6D7F7AB891A(iVar0, "menubs9");
	Global_1632166.f_20 = unk_0x4985D6D7F7AB891A(iVar0, "menubs10");
	Global_1632166.f_21 = unk_0x4985D6D7F7AB891A(iVar0, "menubs11");
	Global_1632166.f_22 = unk_0x4985D6D7F7AB891A(iVar0, "menubs12");
	if (unk_0xF44A5E894FE76438(Global_1632166.f_15, 31))
	{
	}
	Global_1632166.f_16 = unk_0x4985D6D7F7AB891A(iVar0, "menubs6");
	if (unk_0xF44A5E894FE76438(Global_1632166.f_16, 16))
	{
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "hptfb") == 2)
	{
		Global_1632166.f_90 = unk_0x4985D6D7F7AB891A(iVar0, "hptfb");
	}
	else
	{
		Global_1632166.f_90 = 0;
	}
	Global_1632166.f_40783 = unk_0x4985D6D7F7AB891A(iVar0, "teamvbs");
	Global_1632166.f_23 = unk_0x4985D6D7F7AB891A(iVar0, "cncmbs");
	Global_1632166.f_102224 = unk_0x4985D6D7F7AB891A(iVar0, "todhr");
	Global_1632166.f_102225 = unk_0x4985D6D7F7AB891A(iVar0, "todmn");
	Global_1632166.f_10 = unk_0x4985D6D7F7AB891A(iVar0, "cmpts");
	Global_1632166.f_47 = unk_0x4985D6D7F7AB891A(iVar0, "rank");
	Global_1632166.f_47 = unk_0x4985D6D7F7AB891A(iVar0, "rank");
	Global_1632166.f_86977 = unk_0x4985D6D7F7AB891A(iVar0, "charcon");
	Global_1632166.f_86977 = unk_0x4985D6D7F7AB891A(iVar0, "char");
	Global_1632166.f_86979 = unk_0x4985D6D7F7AB891A(iVar0, "xpr");
	Global_1632166.f_86980 = unk_0x4985D6D7F7AB891A(iVar0, "cshr");
	Global_1632166.f_86984 = unk_0x4985D6D7F7AB891A(iVar0, "ctsc");
	if (unk_0xF0E984A1CED01E3C(iVar0, "ecsbs") == 2)
	{
		Global_1632166.f_99396.f_16 = unk_0x4985D6D7F7AB891A(iVar0, "ecsbs");
	}
	else
	{
		Global_1632166.f_99396.f_16 = 0;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "ecsbs2") == 2)
	{
		Global_1632166.f_99396.f_17 = unk_0x4985D6D7F7AB891A(iVar0, "ecsbs2");
	}
	else
	{
		Global_1632166.f_99396.f_17 = 0;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "ecsrng") == 2)
	{
		Global_1632166.f_99396.f_62 = unk_0x4985D6D7F7AB891A(iVar0, "ecsrng");
	}
	else
	{
		Global_1632166.f_99396.f_62 = 0;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "ecscp") == 5)
	{
		Global_1632166.f_99396.f_54 = { unk_0x97AB8757C3B46AA0(iVar0, "ecscp") };
	}
	else
	{
		Global_1632166.f_99396.f_54 = { 0f, 0f, 0f };
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "ecscr") == 3)
	{
		Global_1632166.f_99396.f_60 = unk_0x1B52B6FA98557E78(iVar0, "ecscr");
	}
	else
	{
		Global_1632166.f_99396.f_60 = 0f;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "ecscs") == 5)
	{
		Global_1632166.f_99396.f_57 = { unk_0x97AB8757C3B46AA0(iVar0, "ecscs") };
	}
	else
	{
		Global_1632166.f_99396.f_57 = { 0f, 0f, 0f };
	}
	iVar8 = 0;
	while (iVar8 <= 29)
	{
		StringCopy(&cVar9, "ecein", 8);
		StringIntConCat(&cVar9, iVar8, 8);
		if (unk_0xF0E984A1CED01E3C(iVar0, &cVar9) == 2)
		{
			Global_1632166.f_99396.f_63[iVar8 /*12*/].f_1 = unk_0x4985D6D7F7AB891A(iVar0, &cVar9);
		}
		else
		{
			Global_1632166.f_99396.f_63[iVar8 /*12*/].f_1 = -1;
		}
		StringCopy(&cVar9, "ecetp", 8);
		StringIntConCat(&cVar9, iVar8, 8);
		if (unk_0xF0E984A1CED01E3C(iVar0, &cVar9) == 2)
		{
			Global_1632166.f_99396.f_63[iVar8 /*12*/] = unk_0x4985D6D7F7AB891A(iVar0, &cVar9);
		}
		else
		{
			Global_1632166.f_99396.f_63[iVar8 /*12*/] = -1;
		}
		StringCopy(&cVar9, "ecebs", 8);
		StringIntConCat(&cVar9, iVar8, 8);
		if (unk_0xF0E984A1CED01E3C(iVar0, &cVar9) == 2)
		{
			Global_1632166.f_99396.f_63[iVar8 /*12*/].f_2 = unk_0x4985D6D7F7AB891A(iVar0, &cVar9);
		}
		else
		{
			Global_1632166.f_99396.f_63[iVar8 /*12*/].f_2 = 0;
		}
		StringCopy(&cVar9, "ecehn", 8);
		StringIntConCat(&cVar9, iVar8, 8);
		if (unk_0xF0E984A1CED01E3C(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1632166.f_99396.f_63[iVar8 /*12*/].f_4), unk_0x928932A7D11B745D(iVar0, &cVar9), 32);
		}
		else
		{
			StringCopy(&(Global_1632166.f_99396.f_63[iVar8 /*12*/].f_4), "", 32);
		}
		iVar8++;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "clbscr") == 2)
	{
		Global_1632166.f_100410 = unk_0x4985D6D7F7AB891A(iVar0, "clbscr");
	}
	else
	{
		Global_1632166.f_100410 = -1;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "disar") == 2)
	{
		Global_1632166.f_100411 = unk_0x4985D6D7F7AB891A(iVar0, "disar");
	}
	else
	{
		Global_1632166.f_100411 = 0;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "rlopt") == 2)
	{
		Global_1632166.f_100199 = unk_0x4985D6D7F7AB891A(iVar0, "rlopt");
	}
	else
	{
		Global_1632166.f_100199 = 0;
	}
	iVar15 = unk_0x4985D6D7F7AB891A(iVar0, "gpmn");
	Global_1632166.f_89 = iVar15;
	iVar16 = unk_0x4985D6D7F7AB891A(iVar0, "musx");
	if (iVar16 != -1)
	{
		Global_1632166.f_86972 = iVar16;
	}
	else
	{
		Global_1632166.f_86972 = -1;
	}
	Global_1632166.f_86971 = unk_0x4985D6D7F7AB891A(iVar0, "ausc");
	Global_1632166.f_25 = unk_0x4985D6D7F7AB891A(iVar0, "minNu");
	Global_1632166.f_24 = unk_0x4985D6D7F7AB891A(iVar0, "num");
	if (Global_1632166.f_24 == -1)
	{
		Global_1632166.f_24 = 30;
	}
	Global_1632166.f_26 = unk_0x4985D6D7F7AB891A(iVar0, "time");
	Global_1632166.f_65 = { unk_0x97AB8757C3B46AA0(iVar0, "start") };
	StringCopy(&cVar17, "apart", 16);
	Global_1632166.f_99830 = { unk_0x97AB8757C3B46AA0(iVar0, &cVar17) };
	Global_1632166.f_99844 = unk_0x4985D6D7F7AB891A(iVar0, "apwbs");
	Global_1632166.f_99833 = unk_0x4985D6D7F7AB891A(iVar0, "wrploc");
	Global_1632166.f_99847 = unk_0x4985D6D7F7AB891A(iVar0, "twrst");
	Global_1632166.f_99845 = unk_0x4985D6D7F7AB891A(iVar0, "iplop");
	Global_1632166.f_99846 = unk_0x4985D6D7F7AB891A(iVar0, "intop");
	if (unk_0xF0E984A1CED01E3C(iVar0, "copteam") == 2)
	{
		Global_1632166.f_40785 = unk_0x4985D6D7F7AB891A(iVar0, "copteam");
	}
	else
	{
		Global_1632166.f_40785 = 0;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "pttl") == 4)
	{
		StringCopy(&(Global_1632166.f_86669), unk_0x928932A7D11B745D(iVar0, "pttl"), 64);
	}
	else
	{
		StringCopy(&(Global_1632166.f_86669), "", 64);
	}
	iVar21 = 0;
	while (iVar21 <= 21)
	{
		StringCopy(&cVar9, "dmvft", 8);
		StringIntConCat(&cVar9, iVar21, 8);
		if (unk_0xF0E984A1CED01E3C(iVar0, &cVar9) == 2)
		{
			Global_1632166.f_40698[iVar21] = unk_0x4985D6D7F7AB891A(iVar0, &cVar9);
		}
		else
		{
			Global_1632166.f_40698[iVar21] = 0;
		}
		iVar21++;
	}
	iVar15 = 0;
	while (iVar15 <= 3)
	{
		iVar22 = 0;
		while (iVar22 <= 1)
		{
			StringCopy(&cVar9, "t", 8);
			StringIntConCat(&cVar9, iVar15, 8);
			StringConCat(&cVar9, "fs", 8);
			StringIntConCat(&cVar9, iVar22, 8);
			if (unk_0xF0E984A1CED01E3C(iVar0, &cVar9) == 4)
			{
				StringCopy(&(Global_1632166.f_102449[iVar15 /*33*/][iVar22 /*16*/]), unk_0x928932A7D11B745D(iVar0, &cVar9), 64);
			}
			else
			{
				StringCopy(&(Global_1632166.f_102449[iVar15 /*33*/][iVar22 /*16*/]), "", 64);
			}
			iVar22++;
		}
		iVar22 = 0;
		while (iVar22 <= 21)
		{
			StringCopy(&cVar9, "t", 8);
			StringIntConCat(&cVar9, iVar15, 8);
			StringConCat(&cVar9, "vl", 8);
			StringIntConCat(&cVar9, iVar22, 8);
			if (unk_0xF0E984A1CED01E3C(iVar0, &cVar9) == 2)
			{
				Global_1632166.f_40180[iVar15 /*23*/][iVar22] = unk_0x4985D6D7F7AB891A(iVar0, &cVar9);
			}
			else
			{
				Global_1632166.f_40180[iVar15 /*23*/][iVar22] = 0;
			}
			iVar22++;
		}
		StringCopy(&cVar9, "t", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		StringConCat(&cVar9, "dvl", 8);
		if (unk_0xF0E984A1CED01E3C(iVar0, &cVar9) == 2)
		{
			Global_1632166.f_40646[iVar15] = unk_0x4985D6D7F7AB891A(iVar0, &cVar9);
		}
		else
		{
			Global_1632166.f_40646[iVar15] = 0;
		}
		StringCopy(&cVar9, "t", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		StringConCat(&cVar9, "dv", 8);
		if (unk_0xF0E984A1CED01E3C(iVar0, &cVar9) == 2)
		{
			Global_1632166.f_40651[iVar15] = unk_0x4985D6D7F7AB891A(iVar0, &cVar9);
		}
		else
		{
			Global_1632166.f_40651[iVar15] = 0;
		}
		iVar23 = 0;
		while (iVar23 <= 3)
		{
			iVar22 = 0;
			while (iVar22 <= 21)
			{
				StringCopy(&cVar9, "t", 8);
				StringIntConCat(&cVar9, iVar15, 8);
				StringIntConCat(&cVar9, iVar23, 8);
				StringConCat(&cVar9, "rv", 8);
				StringIntConCat(&cVar9, iVar22, 8);
				if (unk_0xF0E984A1CED01E3C(iVar0, &cVar9) == 2)
				{
					Global_1632166.f_40273[iVar15 /*93*/][iVar23 /*23*/][iVar22] = unk_0x4985D6D7F7AB891A(iVar0, &cVar9);
				}
				else
				{
					Global_1632166.f_40273[iVar15 /*93*/][iVar23 /*23*/][iVar22] = 0;
				}
				iVar22++;
			}
			StringCopy(&cVar9, "t", 8);
			StringIntConCat(&cVar9, iVar15, 8);
			StringIntConCat(&cVar9, iVar23, 8);
			StringConCat(&cVar9, "dvl", 8);
			if (unk_0xF0E984A1CED01E3C(iVar0, &cVar9) == 2)
			{
				Global_1632166.f_40656[iVar15 /*5*/][iVar23] = unk_0x4985D6D7F7AB891A(iVar0, &cVar9);
			}
			else
			{
				Global_1632166.f_40656[iVar15 /*5*/][iVar23] = 0;
			}
			StringCopy(&cVar9, "t", 8);
			StringIntConCat(&cVar9, iVar15, 8);
			StringIntConCat(&cVar9, iVar23, 8);
			StringConCat(&cVar9, "dv", 8);
			if (unk_0xF0E984A1CED01E3C(iVar0, &cVar9) == 2)
			{
				Global_1632166.f_40677[iVar15 /*5*/][iVar23] = unk_0x4985D6D7F7AB891A(iVar0, &cVar9);
			}
			else
			{
				Global_1632166.f_40677[iVar15 /*5*/][iVar23] = 0;
			}
			iVar23++;
		}
		StringCopy(&cVar9, "dmaskg", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		if (unk_0xF0E984A1CED01E3C(iVar0, &cVar9) == 2)
		{
			Global_1632166.f_86963[iVar15] = unk_0x4985D6D7F7AB891A(iVar0, &cVar9);
		}
		else
		{
			Global_1632166.f_86963[iVar15] = 0;
		}
		StringCopy(&cVar9, "ofovr", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		if (unk_0xF0E984A1CED01E3C(iVar0, &cVar9) == 2)
		{
			Global_1632166.f_90849[iVar15] = unk_0x4985D6D7F7AB891A(iVar0, &cVar9);
		}
		else
		{
			Global_1632166.f_90849[iVar15] = -1;
		}
		StringCopy(&cVar9, "tmrfs", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		if (unk_0xF0E984A1CED01E3C(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1632166.f_102384[iVar15 /*16*/]), unk_0x928932A7D11B745D(iVar0, &cVar9), 64);
		}
		else
		{
			StringCopy(&(Global_1632166.f_102384[iVar15 /*16*/]), "", 64);
		}
		StringCopy(&cVar9, "tmtss", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		if (unk_0xF0E984A1CED01E3C(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1632166.f_102582[iVar15 /*16*/]), unk_0x928932A7D11B745D(iVar0, &cVar9), 64);
		}
		else
		{
			StringCopy(&(Global_1632166.f_102582[iVar15 /*16*/]), "", 64);
		}
		StringCopy(&cVar9, "tmrph", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		if (unk_0xF0E984A1CED01E3C(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1632166.f_102647[iVar15 /*16*/]), unk_0x928932A7D11B745D(iVar0, &cVar9), 64);
		}
		else
		{
			StringCopy(&(Global_1632166.f_102647[iVar15 /*16*/]), "", 64);
		}
		StringCopy(&cVar9, "tmtsr", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		if (unk_0xF0E984A1CED01E3C(iVar0, &cVar9) == 2)
		{
			Global_1632166.f_102712[iVar15] = unk_0x4985D6D7F7AB891A(iVar0, &cVar9);
		}
		else
		{
			Global_1632166.f_102712[iVar15] = 0;
		}
		StringCopy(&cVar9, "pmscid", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		if (unk_0xF0E984A1CED01E3C(iVar0, &cVar9) == 2)
		{
			Global_1632166.f_100412[iVar15] = unk_0x4985D6D7F7AB891A(iVar0, &cVar9);
		}
		else
		{
			Global_1632166.f_100412[iVar15] = -1;
		}
		StringCopy(&cVar9, "qran", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		if (unk_0xF0E984A1CED01E3C(iVar0, &cVar9) == 2)
		{
			Global_1632166.f_86985[iVar15] = unk_0x4985D6D7F7AB891A(iVar0, &cVar9);
		}
		else
		{
			Global_1632166.f_86985[iVar15] = -1;
		}
		StringCopy(&cVar9, "cwtit", 8);
		if (iVar15 > 0)
		{
			StringIntConCat(&cVar9, iVar15, 8);
		}
		if (unk_0xF0E984A1CED01E3C(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1632166.f_105223[iVar15 /*4*/]), unk_0x928932A7D11B745D(iVar0, &cVar9), 16);
		}
		else
		{
			StringCopy(&(Global_1632166.f_105223[iVar15 /*4*/]), "", 16);
		}
		StringCopy(&cVar9, "cwstr", 8);
		if (iVar15 > 0)
		{
			StringIntConCat(&cVar9, iVar15, 8);
		}
		if (unk_0xF0E984A1CED01E3C(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1632166.f_105240[iVar15 /*4*/]), unk_0x928932A7D11B745D(iVar0, &cVar9), 16);
		}
		else
		{
			StringCopy(&(Global_1632166.f_105240[iVar15 /*4*/]), "", 16);
		}
		StringCopy(&cVar9, "cwspre", 8);
		if (iVar15 > 0)
		{
			StringIntConCat(&cVar9, iVar15, 8);
		}
		if (unk_0xF0E984A1CED01E3C(iVar0, &cVar9) == 2)
		{
			Global_1632166.f_105257[iVar15] = unk_0x4985D6D7F7AB891A(iVar0, &cVar9);
		}
		else
		{
			Global_1632166.f_105257[iVar15] = -1;
		}
		if (unk_0xF0E984A1CED01E3C(iVar0, &cVar9) == 2)
		{
			Global_1632166.f_105329 = unk_0x4985D6D7F7AB891A(iVar0, "twti");
		}
		else
		{
			Global_1632166.f_105329 = 0;
		}
		if (unk_0xF0E984A1CED01E3C(iVar0, &cVar9) == 2)
		{
			Global_1632166.f_105328 = unk_0x4985D6D7F7AB891A(iVar0, "twpta");
		}
		else
		{
			Global_1632166.f_105328 = 0;
		}
		Global_1632166.f_105330 = unk_0x4985D6D7F7AB891A(iVar0, "twct1");
		Global_1632166.f_105331 = unk_0x4985D6D7F7AB891A(iVar0, "twct2");
		Global_1632166.f_105332 = unk_0x4985D6D7F7AB891A(iVar0, "twct3");
		Global_1632166.f_105333 = unk_0x4985D6D7F7AB891A(iVar0, "twct4");
		Global_1632166.f_105334 = unk_0x4985D6D7F7AB891A(iVar0, "twcon");
		Global_1632166.f_105335 = unk_0x4985D6D7F7AB891A(iVar0, "twcto");
		Global_1632166.f_105336 = unk_0x4985D6D7F7AB891A(iVar0, "twcun");
		Global_1632166.f_105337 = unk_0x4985D6D7F7AB891A(iVar0, "twcdi");
		Global_1632166.f_105338 = unk_0x4985D6D7F7AB891A(iVar0, "svmrcvbr");
		iVar2 = 0;
		while (iVar2 <= 3)
		{
			StringCopy(&cVar9, "kspt", 8);
			StringIntConCat(&cVar9, iVar2, 8);
			Global_1632166.f_105387[iVar2] = unk_0x4985D6D7F7AB891A(iVar0, &cVar9);
			StringCopy(&cVar9, "kspr", 8);
			StringIntConCat(&cVar9, iVar2, 8);
			Global_1632166.f_105392[iVar2] = unk_0x4985D6D7F7AB891A(iVar0, &cVar9);
			iVar2++;
		}
		if (unk_0xF0E984A1CED01E3C(iVar0, &cVar9) == 2)
		{
			Global_1632166.f_105340 = unk_0x4985D6D7F7AB891A(iVar0, "pptl");
		}
		else
		{
			Global_1632166.f_105340 = 5;
		}
		if (unk_0xF0E984A1CED01E3C(iVar0, &cVar9) == 2)
		{
			Global_1632166.f_105339 = unk_0x4985D6D7F7AB891A(iVar0, "ptltl");
		}
		else
		{
			Global_1632166.f_105339 = 0;
		}
		if (unk_0xF0E984A1CED01E3C(iVar0, &cVar9) == 2)
		{
			Global_1632166.f_105407 = unk_0x4985D6D7F7AB891A(iVar0, "ptlem");
		}
		else
		{
			Global_1632166.f_105407 = -1;
		}
		StringCopy(&cVar9, "rtveft", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		if (unk_0xF0E984A1CED01E3C(iVar0, &cVar9) == 2)
		{
			Global_1632166.f_105287[iVar15] = unk_0x4985D6D7F7AB891A(iVar0, &cVar9);
		}
		else
		{
			Global_1632166.f_105287[iVar15] = 0;
		}
		iVar15++;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "ctmrs") == 4)
	{
		StringCopy(&(Global_1632166.f_86685), unk_0x928932A7D11B745D(iVar0, "ctmrs"), 24);
	}
	else
	{
		StringCopy(&(Global_1632166.f_86685), "", 24);
	}
	iVar2 = 0;
	while (iVar2 < 6)
	{
		StringCopy(&cVar9, "avss", 8);
		StringIntConCat(&cVar9, iVar2, 8);
		Global_1632166.f_90795[iVar2] = unk_0x4985D6D7F7AB891A(iVar0, &cVar9);
		iVar3 = func_217(iVar2);
		while (iVar3 <= 31)
		{
			unk_0x4EA098C870B73AB7(&(Global_1632166.f_90795[iVar2]), iVar3);
			iVar3++;
		}
		iVar2++;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "vsclout") == 2)
	{
		Global_1632166.f_90802[0] = unk_0x4985D6D7F7AB891A(iVar0, "vsclout");
	}
	else
	{
		Global_1632166.f_90802[0] = -1;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "vsthout") == 2)
	{
		Global_1632166.f_90802[1] = unk_0x4985D6D7F7AB891A(iVar0, "vsthout");
	}
	else
	{
		Global_1632166.f_90802[1] = -1;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "vshwout") == 2)
	{
		Global_1632166.f_90802[3] = unk_0x4985D6D7F7AB891A(iVar0, "vshwout");
	}
	else
	{
		Global_1632166.f_90802[3] = -1;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "vsenout") == 2)
	{
		Global_1632166.f_90802[2] = unk_0x4985D6D7F7AB891A(iVar0, "vsenout");
	}
	else
	{
		Global_1632166.f_90802[2] = -1;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "vstgout") == 2)
	{
		Global_1632166.f_90802[4] = unk_0x4985D6D7F7AB891A(iVar0, "vstgout");
	}
	else
	{
		Global_1632166.f_90802[4] = -1;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "vsbsout") == 2)
	{
		Global_1632166.f_90802[5] = unk_0x4985D6D7F7AB891A(iVar0, "vsbsout");
	}
	else
	{
		Global_1632166.f_90802[5] = -1;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "alfutvs") == 2)
	{
		Global_1632166.f_90809 = unk_0x4985D6D7F7AB891A(iVar0, "alfutvs");
	}
	else
	{
		Global_1632166.f_90809 = 0;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "vsdfstc") == 2)
	{
		Global_1632166.f_90810 = unk_0x4985D6D7F7AB891A(iVar0, "vsdfstc");
	}
	else if (((!unk_0xF44A5E894FE76438(Global_1632166.f_12, 23) && !unk_0xF44A5E894FE76438(Global_1632166.f_12, 24)) && !unk_0xF44A5E894FE76438(Global_1632166.f_13, 31)) && !unk_0xF44A5E894FE76438(Global_1632166.f_14, 8))
	{
		Global_1632166.f_90810 = -1;
	}
	else if (((!unk_0xF44A5E894FE76438(Global_1632166.f_12, 23) && unk_0xF44A5E894FE76438(Global_1632166.f_12, 24)) && !unk_0xF44A5E894FE76438(Global_1632166.f_13, 31)) && !unk_0xF44A5E894FE76438(Global_1632166.f_14, 8))
	{
		Global_1632166.f_90810 = 0;
	}
	else if (((unk_0xF44A5E894FE76438(Global_1632166.f_12, 23) && !unk_0xF44A5E894FE76438(Global_1632166.f_12, 24)) && !unk_0xF44A5E894FE76438(Global_1632166.f_13, 31)) && !unk_0xF44A5E894FE76438(Global_1632166.f_14, 8))
	{
		Global_1632166.f_90810 = 1;
	}
	else if (((!unk_0xF44A5E894FE76438(Global_1632166.f_12, 23) && !unk_0xF44A5E894FE76438(Global_1632166.f_12, 24)) && unk_0xF44A5E894FE76438(Global_1632166.f_13, 31)) && !unk_0xF44A5E894FE76438(Global_1632166.f_14, 8))
	{
		Global_1632166.f_90810 = 2;
	}
	else if (((!unk_0xF44A5E894FE76438(Global_1632166.f_12, 23) && !unk_0xF44A5E894FE76438(Global_1632166.f_12, 24)) && !unk_0xF44A5E894FE76438(Global_1632166.f_13, 31)) && unk_0xF44A5E894FE76438(Global_1632166.f_14, 8))
	{
		Global_1632166.f_90810 = 3;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "dspteam") == 2)
	{
		Global_1632166.f_100435 = unk_0x4985D6D7F7AB891A(iVar0, "dspteam");
	}
	else
	{
		Global_1632166.f_100435 = -1;
	}
	if (!func_104() && !func_216())
	{
		if (unk_0x82F1E66C756CDECA(iParam1))
		{
			StringCopy(&(Global_1632166.f_86367), unk_0x928932A7D11B745D(iVar0, "nm"), 64);
		}
		else
		{
			StringCopy(&(Global_1632166.f_86367), func_215(), 64);
		}
	}
	else
	{
		StringCopy(&(Global_1632166.f_86367), unk_0x928932A7D11B745D(iVar0, "nm"), 64);
	}
	Global_1632166.f_87015 = unk_0x4985D6D7F7AB891A(iVar0, "mgrk");
	Global_1632166.f_87016 = unk_0x4985D6D7F7AB891A(iVar0, "mght");
	StringCopy(&(Global_1632166.f_86389[0 /*16*/]), "", 64);
	StringCopy(&(Global_1632166.f_86389[1 /*16*/]), "", 64);
	StringCopy(&(Global_1632166.f_86389[2 /*16*/]), "", 64);
	StringCopy(&(Global_1632166.f_86389[3 /*16*/]), "", 64);
	StringCopy(&(Global_1632166.f_86389[4 /*16*/]), "", 64);
	StringCopy(&(Global_1632166.f_86389[5 /*16*/]), "", 64);
	StringCopy(&(Global_1632166.f_86389[6 /*16*/]), "", 64);
	StringCopy(&(Global_1632166.f_86389[7 /*16*/]), "", 64);
	uVar24 = unk_0x05989B8A830B4E1C(iVar0, "dec");
	iVar25 = unk_0x502AC248EEE98C95(unk_0xE0DCCCE203DC2979(uVar24, 0));
	if (iParam1 == -1 || unk_0x82F1E66C756CDECA(iParam1))
	{
		if (iVar25 <= 63)
		{
			iVar2 = 0;
			while (iVar2 <= (unk_0x33374BC9487FCBE5(iVar24) - 1))
			{
				StringCopy(&(Global_1632166.f_86389[iVar2 /*16*/]), unk_0xE0DCCCE203DC2979(iVar24, iVar2), 64);
				iVar2++;
			}
		}
		else
		{
			sVar27 = unk_0xE0DCCCE203DC2979(iVar24, 0);
			iVar2 = 0;
			while (iVar2 <= 7)
			{
				if (iVar25 > (63 * iVar2))
				{
					if (iVar25 > (63 * iVar2) + 63)
					{
						iVar26 = (63 * iVar2) + 63;
					}
					else
					{
						iVar26 = iVar25;
					}
					StringCopy(&(Global_1632166.f_86389[iVar2 /*16*/]), unk_0xDB8ABA2229D6A639(sVar27, (63 * iVar2), iVar26), 64);
				}
				iVar2++;
			}
		}
	}
	else
	{
		StringCopy(&(Global_1632166.f_86389[0 /*16*/]), func_215(), 64);
	}
	Global_1632166.f_29 = unk_0x4985D6D7F7AB891A(iVar0, "tnum");
	Global_1632166.f_30 = unk_0x4985D6D7F7AB891A(iVar0, "mtnum");
	if (!func_214())
	{
		if (!unk_0xF44A5E894FE76438(Global_1632166.f_15, 14))
		{
			Global_1632166.f_28 = Global_1632166.f_29;
		}
		else if (unk_0xF0E984A1CED01E3C(iVar0, "dtn") == 2)
		{
			Global_1632166.f_28 = unk_0x4985D6D7F7AB891A(iVar0, "dtn");
		}
		else
		{
			Global_1632166.f_28 = Global_1632166.f_29;
		}
	}
	else
	{
		Global_1632166.f_28 = Global_1632166.f_29;
	}
	if (Global_1632166 == 0)
	{
		if (Global_2443089.f_548.f_11 != 0 && Global_1632166.f_29 != Global_2443089.f_548.f_11)
		{
			if (!Global_262145.f_4869 && func_60(Global_1632166.f_105262))
			{
				iVar28 = func_213();
				if (Global_2443089.f_548.f_11 < iVar28)
				{
					Global_2443089.f_548.f_11 = iVar28;
					if (unk_0xFB6B3EEFAB2DD12C() != -1)
					{
						Global_1616968[unk_0xFB6B3EEFAB2DD12C() /*35*/] = Global_2443089.f_548.f_11;
					}
				}
			}
			Global_1632166.f_29 = Global_2443089.f_548.f_11;
			Global_1632166.f_28 = Global_1632166.f_29;
		}
		else if (func_210() && func_209())
		{
			iVar29 = func_213();
			fVar30 = (unk_0xBBDA792448DB5A89(iVar29) / unk_0xBBDA792448DB5A89(Global_1632166.f_24));
			iVar31 = 0;
			if (Global_1632166.f_29 == 3)
			{
				if (fVar30 <= 0.66f)
				{
					Global_1632166.f_29 = 2;
					iVar31 = 1;
				}
			}
			else if (Global_1632166.f_29 == 4)
			{
				if (fVar30 <= 0.5f)
				{
					Global_1632166.f_29 = 2;
					iVar31 = 1;
				}
				else if (fVar30 <= 0.75f)
				{
					Global_1632166.f_29 = 3;
					iVar31 = 1;
				}
			}
			if (iVar31 && Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_95.f_28 >= Global_1632166.f_29)
			{
				Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_95.f_28 = func_207(Global_1632166.f_29);
			}
			if (Global_1632166.f_28 > Global_1632166.f_29)
			{
				Global_1632166.f_28 = Global_1632166.f_29;
			}
		}
	}
	if (Global_1632166 == 1)
	{
		if (Global_1632166.f_29 > 4)
		{
			Global_1632166.f_29 = 4;
		}
	}
	else if (Global_1632166.f_29 > 4)
	{
		Global_1632166.f_29 = 4;
	}
	Global_1632166.f_77920 = unk_0x4985D6D7F7AB891A(iVar0, "atmdm");
	Global_1632166.f_43 = unk_0x4985D6D7F7AB891A(iVar0, "trel");
	Global_1632166.f_86981 = unk_0x4985D6D7F7AB891A(iVar0, "ltm");
	Global_1632166.f_71 = { unk_0x97AB8757C3B46AA0(iVar0, "vcpr") };
	if (unk_0xF0E984A1CED01E3C(iVar0, "hstat") == 2)
	{
		Global_1632166.f_86952 = unk_0x4985D6D7F7AB891A(iVar0, "hstat");
	}
	else
	{
		Global_1632166.f_86952 = 0;
	}
	iVar32 = 0;
	while (iVar32 <= 19)
	{
		StringCopy(&cVar9, "rzpos", 8);
		StringIntConCat(&cVar9, iVar32, 8);
		if (unk_0xF0E984A1CED01E3C(iVar0, &cVar9) == 5)
		{
			Global_1632166.f_59686[iVar32 /*3*/] = { unk_0x97AB8757C3B46AA0(iVar0, &cVar9) };
		}
		else
		{
			Global_1632166.f_59686[iVar32 /*3*/] = { 0f, 0f, 0f };
		}
		iVar32++;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "numzr") == 2)
	{
		Global_1632166.f_59747 = unk_0x4985D6D7F7AB891A(iVar0, "numzr");
	}
	else
	{
		Global_1632166.f_59747 = 0;
	}
	iVar33 = unk_0x4C4E1CA899A313BB(iParam0, "ene");
	iVar34 = unk_0x4985D6D7F7AB891A(iVar33, "no");
	iVar2 = 0;
	while (iVar2 < 5)
	{
		StringCopy(&cVar9, "hpped", 8);
		if (iVar2 > 0)
		{
			StringIntConCat(&cVar9, iVar2 + 1, 8);
		}
		if (unk_0xF0E984A1CED01E3C(iVar0, &cVar9) == 2 && iVar34 > unk_0x4985D6D7F7AB891A(iVar0, &cVar9))
		{
			Global_1632166.f_77791[iVar2] = unk_0x4985D6D7F7AB891A(iVar0, &cVar9);
		}
		else
		{
			Global_1632166.f_77791[iVar2] = -1;
		}
		iVar2++;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "rsgmx") == 2 && unk_0xF0E984A1CED01E3C(iVar0, "rsgnu") == 2)
	{
		Global_1632166.f_77797 = unk_0x4985D6D7F7AB891A(iVar0, "rsgmx");
		Global_1632166.f_77798 = unk_0x4985D6D7F7AB891A(iVar0, "rsgnu");
		Global_1632166.f_77799 = unk_0x4985D6D7F7AB891A(iVar0, "rsgbs");
		if (Global_1632166.f_77797 > 0 && Global_1632166.f_77798 != 0)
		{
			iVar2 = 0;
			while (iVar2 <= (Global_1632166.f_77797 - 1))
			{
				if (iVar2 < 10)
				{
					StringCopy(&cVar9, "rsg", 8);
					StringIntConCat(&cVar9, iVar2, 8);
					MemCopy(&cVar35, {cVar9}, 4);
					StringConCat(&cVar35, "mx", 16);
					MemCopy(&cVar39, {cVar9}, 4);
					StringConCat(&cVar39, "nu", 16);
					if (unk_0xF0E984A1CED01E3C(iVar0, &cVar35) == 2 && unk_0xF0E984A1CED01E3C(iVar0, &cVar39) == 2)
					{
						Global_1632166.f_77800[iVar2] = unk_0x4985D6D7F7AB891A(iVar0, &cVar35);
						Global_1632166.f_77811[iVar2] = unk_0x4985D6D7F7AB891A(iVar0, &cVar39);
						MemCopy(&cVar35, {cVar9}, 4);
						StringConCat(&cVar35, "bs", 16);
						Global_1632166.f_77822[iVar2] = unk_0x4985D6D7F7AB891A(iVar0, &cVar35);
					}
				}
				iVar2++;
			}
		}
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "tshd") == 2)
	{
		Global_1632166.f_87004 = unk_0x4985D6D7F7AB891A(iVar0, "tshd");
	}
	else
	{
		Global_1632166.f_87004 = -1;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "mrd") == 2)
	{
		Global_1632166.f_87005 = unk_0x4985D6D7F7AB891A(iVar0, "mrd");
	}
	else
	{
		Global_1632166.f_87005 = 15;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "etim") == 3)
	{
		Global_1632166.f_87007 = unk_0x1B52B6FA98557E78(iVar0, "etim");
	}
	else
	{
		Global_1632166.f_87007 = 2.5f;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "evel") == 3)
	{
		Global_1632166.f_87008 = unk_0x1B52B6FA98557E78(iVar0, "evel");
	}
	else
	{
		Global_1632166.f_87008 = 8f;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "etimb") == 3)
	{
		Global_1632166.f_87009 = unk_0x1B52B6FA98557E78(iVar0, "etimb");
	}
	else
	{
		Global_1632166.f_87009 = 2.5f;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "evelb") == 3)
	{
		Global_1632166.f_87010 = unk_0x1B52B6FA98557E78(iVar0, "evelb");
	}
	else
	{
		Global_1632166.f_87010 = 8f;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "srct") == 2)
	{
		Global_1632166.f_87006 = unk_0x4985D6D7F7AB891A(iVar0, "srct");
	}
	else
	{
		Global_1632166.f_87006 = -1;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "tptbd") == 2)
	{
		Global_1632166.f_87011 = unk_0x4985D6D7F7AB891A(iVar0, "tptbd");
	}
	else
	{
		Global_1632166.f_87011 = -1;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "tptba") == 2)
	{
		Global_1632166.f_87012 = unk_0x4985D6D7F7AB891A(iVar0, "tptba");
	}
	else
	{
		Global_1632166.f_87012 = -1;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "atspos") == 5)
	{
		Global_1632166.f_102282 = { unk_0x97AB8757C3B46AA0(iVar0, "atspos") };
	}
	else
	{
		Global_1632166.f_102282 = { 0f, 0f, 0f };
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "atscmp") == 5)
	{
		Global_1632166.f_102276 = { unk_0x97AB8757C3B46AA0(iVar0, "atscmp") };
	}
	else
	{
		Global_1632166.f_102276 = { 0f, 0f, 0f };
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "atscmr") == 5)
	{
		Global_1632166.f_102279 = { unk_0x97AB8757C3B46AA0(iVar0, "atscmr") };
	}
	else
	{
		Global_1632166.f_102279 = { 0f, 0f, 0f };
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "atsfov") == 3)
	{
		Global_1632166.f_102285 = unk_0x1B52B6FA98557E78(iVar0, "atsfov");
	}
	else
	{
		Global_1632166.f_102285 = 45f;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "atshed") == 3)
	{
		Global_1632166.f_102286 = unk_0x1B52B6FA98557E78(iVar0, "atshed");
	}
	else
	{
		Global_1632166.f_102286 = 0f;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "atsveh") == 2)
	{
		Global_1632166.f_102287 = unk_0x4985D6D7F7AB891A(iVar0, "atsveh");
	}
	else
	{
		Global_1632166.f_102287 = 0;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "hpdt1") == 2)
	{
		Global_1632166.f_86953[0] = unk_0x4985D6D7F7AB891A(iVar0, "hpdt1");
	}
	else
	{
		Global_1632166.f_86953[0] = 0;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "hpdt2") == 2)
	{
		Global_1632166.f_86953[1] = unk_0x4985D6D7F7AB891A(iVar0, "hpdt2");
	}
	else
	{
		Global_1632166.f_86953[1] = 0;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "vdt") == 2)
	{
		Global_1632166.f_86956 = unk_0x4985D6D7F7AB891A(iVar0, "vdt");
	}
	else
	{
		Global_1632166.f_86956 = 0;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "hbrbs") == 2)
	{
		Global_1632166.f_100417 = unk_0x4985D6D7F7AB891A(iVar0, "hbrbs");
	}
	else
	{
		Global_1632166.f_100417 = 0;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "hbrtt") == 2)
	{
		Global_1632166.f_100418 = unk_0x4985D6D7F7AB891A(iVar0, "hbrtt");
	}
	else
	{
		Global_1632166.f_100418 = 0;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "hbrttm") == 2)
	{
		Global_1632166.f_100419 = unk_0x4985D6D7F7AB891A(iVar0, "hbrttm");
	}
	else
	{
		Global_1632166.f_100419 = 0;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "hbrtrl") == 2)
	{
		Global_1632166.f_100420 = unk_0x4985D6D7F7AB891A(iVar0, "hbrtrl");
	}
	else
	{
		Global_1632166.f_100420 = -1;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "hbrpdt") == 2)
	{
		Global_1632166.f_100422 = unk_0x4985D6D7F7AB891A(iVar0, "hbrpdt");
	}
	else
	{
		Global_1632166.f_100422 = 0;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "hbrvdt") == 2)
	{
		Global_1632166.f_100424 = unk_0x4985D6D7F7AB891A(iVar0, "hbrvdt");
	}
	else
	{
		Global_1632166.f_100424 = 0;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "hbrkt") == 2)
	{
		Global_1632166.f_100426 = unk_0x4985D6D7F7AB891A(iVar0, "hbrkt");
	}
	else
	{
		Global_1632166.f_100426 = 0;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "hbrph") == 2)
	{
		Global_1632166.f_100429 = unk_0x4985D6D7F7AB891A(iVar0, "hbrph");
	}
	else
	{
		Global_1632166.f_100429 = 0;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "hecam") == 2)
	{
		Global_1632166.f_100430 = unk_0x4985D6D7F7AB891A(iVar0, "hecam");
	}
	else
	{
		Global_1632166.f_100430 = 0;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "sdrvm") == 2)
	{
		Global_1632166.f_102730 = unk_0x4985D6D7F7AB891A(iVar0, "sdrvm");
	}
	else
	{
		Global_1632166.f_102730 = 10000;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "inumbnc") == 2)
	{
		Global_1632166.f_102744 = unk_0x4985D6D7F7AB891A(iVar0, "inumbnc");
	}
	else
	{
		Global_1632166.f_102744 = 10000;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "mdmgm") == 3)
	{
		Global_1632166.f_102731 = unk_0x1B52B6FA98557E78(iVar0, "mdmgm");
	}
	else
	{
		Global_1632166.f_102731 = 1f;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "itsms") == 2)
	{
		Global_1632166.f_105374 = unk_0x4985D6D7F7AB891A(iVar0, "itsms");
	}
	else
	{
		Global_1632166.f_105374 = 1;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "igls") == 2)
	{
		Global_1632166.f_105375 = unk_0x4985D6D7F7AB891A(iVar0, "igls");
	}
	else
	{
		Global_1632166.f_105375 = 0;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "twdas") == 3)
	{
		Global_1632166.f_102732 = unk_0x1B52B6FA98557E78(iVar0, "twdas");
	}
	else
	{
		Global_1632166.f_102732 = 0f;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "vdt") == 2)
	{
		Global_1632166.f_105263 = unk_0x4985D6D7F7AB891A(iVar0, "sphft");
	}
	else
	{
		Global_1632166.f_105263 = 0;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "vdt") == 2)
	{
		Global_1632166.f_105285 = unk_0x4985D6D7F7AB891A(iVar0, "cmxdftms");
	}
	else
	{
		Global_1632166.f_105285 = 0;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "cmxtliv") == 2)
	{
		Global_1632166.f_105302 = unk_0x4985D6D7F7AB891A(iVar0, "cmxtliv");
	}
	else
	{
		Global_1632166.f_105302 = 0;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "cmxdctl") == 2)
	{
		Global_1632166.f_105303 = unk_0x4985D6D7F7AB891A(iVar0, "cmxdctl");
	}
	else
	{
		Global_1632166.f_105303 = 0;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "cmxmctl") == 2)
	{
		Global_1632166.f_105304 = unk_0x4985D6D7F7AB891A(iVar0, "cmxmctl");
	}
	else
	{
		Global_1632166.f_105304 = 0;
	}
	if (((unk_0xF0E984A1CED01E3C(iVar0, "hmmtt") == 2 && unk_0xF0E984A1CED01E3C(iVar0, "hmmts") == 2) && unk_0xF0E984A1CED01E3C(iVar0, "hmmte") == 2) && unk_0xF0E984A1CED01E3C(iVar0, "hmmth") == 2)
	{
		Global_1632166.f_100431 = unk_0x4985D6D7F7AB891A(iVar0, "hmmtt");
		Global_1632166.f_100432 = unk_0x4985D6D7F7AB891A(iVar0, "hmmts");
		Global_1632166.f_100433 = unk_0x4985D6D7F7AB891A(iVar0, "hmmte");
		Global_1632166.f_100434 = unk_0x4985D6D7F7AB891A(iVar0, "hmmth");
	}
	else
	{
		Global_1632166.f_100431 = 0;
		Global_1632166.f_100432 = 0;
		Global_1632166.f_100433 = 0;
		Global_1632166.f_100434 = 0;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "tstrm") == 2)
	{
		Global_1632166.f_102223 = unk_0x4985D6D7F7AB891A(iVar0, "tstrm");
	}
	else
	{
		Global_1632166.f_102223 = 0;
	}
	iVar2 = 0;
	while (iVar2 <= 35)
	{
		StringCopy(&cVar9, "dtspk", 8);
		StringIntConCat(&cVar9, iVar2, 8);
		if (unk_0xF0E984A1CED01E3C(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1632166.f_90399[iVar2 /*8*/]), unk_0x928932A7D11B745D(iVar0, &cVar9), 32);
		}
		else
		{
			StringCopy(&(Global_1632166.f_90399[iVar2 /*8*/]), "", 32);
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 <= 2)
	{
		StringCopy(&cVar9, "cspnm", 8);
		StringIntConCat(&cVar9, iVar2, 8);
		if (unk_0xF0E984A1CED01E3C(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1632166.f_77634[iVar2 /*16*/]), unk_0x928932A7D11B745D(iVar0, &cVar9), 64);
		}
		else
		{
			StringCopy(&(Global_1632166.f_77634[iVar2 /*16*/]), "", 64);
		}
		StringCopy(&cVar9, "csvnm", 8);
		StringIntConCat(&cVar9, iVar2, 8);
		if (unk_0xF0E984A1CED01E3C(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1632166.f_77683[iVar2 /*16*/]), unk_0x928932A7D11B745D(iVar0, &cVar9), 64);
		}
		else
		{
			StringCopy(&(Global_1632166.f_77683[iVar2 /*16*/]), "", 64);
		}
		StringCopy(&cVar9, "csonm", 8);
		StringIntConCat(&cVar9, iVar2, 8);
		if (unk_0xF0E984A1CED01E3C(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1632166.f_77732[iVar2 /*16*/]), unk_0x928932A7D11B745D(iVar0, &cVar9), 64);
		}
		else
		{
			StringCopy(&(Global_1632166.f_77732[iVar2 /*16*/]), "", 64);
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 <= 4)
	{
		StringCopy(&cVar9, "otxsgo", 8);
		StringIntConCat(&cVar9, iVar2, 8);
		if (unk_0xF0E984A1CED01E3C(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1632166.f_77833[iVar2 /*16*/]), unk_0x928932A7D11B745D(iVar0, &cVar9), 64);
		}
		else
		{
			StringCopy(&(Global_1632166.f_77833[iVar2 /*16*/]), "", 64);
		}
		iVar2++;
	}
	iVar43 = 0;
	while (iVar43 <= 3)
	{
		iVar3 = 0;
		while (iVar3 <= 12)
		{
			StringCopy(&cVar9, "ofit", 8);
			StringIntConCat(&cVar9, iVar3 + 1, 8);
			StringIntConCat(&cVar9, iVar43, 8);
			if (unk_0xF0E984A1CED01E3C(iVar0, &cVar9) == 2)
			{
				Global_1632166.f_90733[iVar43 /*14*/][iVar3] = unk_0x4985D6D7F7AB891A(iVar0, &cVar9);
			}
			iVar3++;
		}
		StringCopy(&cVar9, "ofs1", 8);
		StringIntConCat(&cVar9, iVar43, 8);
		if (unk_0xF0E984A1CED01E3C(iVar0, &cVar9) == 2)
		{
			Global_1632166.f_90826[iVar43 /*2*/][0] = unk_0x4985D6D7F7AB891A(iVar0, &cVar9);
		}
		else
		{
			Global_1632166.f_90826[iVar43 /*2*/][0] = 0;
		}
		StringCopy(&cVar9, "mask1", 8);
		StringIntConCat(&cVar9, iVar43, 8);
		if (unk_0xF0E984A1CED01E3C(iVar0, &cVar9) == 2)
		{
			Global_1632166.f_90840[iVar43 /*2*/][0] = unk_0x4985D6D7F7AB891A(iVar0, &cVar9);
		}
		else
		{
			Global_1632166.f_90840[iVar43 /*2*/][0] = 0;
		}
		StringCopy(&cVar9, "gear", 8);
		StringIntConCat(&cVar9, iVar43, 8);
		if (unk_0xF0E984A1CED01E3C(iVar0, &cVar9) == 2)
		{
			Global_1632166.f_90811[iVar43] = unk_0x4985D6D7F7AB891A(iVar0, &cVar9);
		}
		else
		{
			Global_1632166.f_90811[iVar43] = 0;
		}
		StringCopy(&cVar9, "geard", 8);
		StringIntConCat(&cVar9, iVar43, 8);
		if (unk_0xF0E984A1CED01E3C(iVar0, &cVar9) == 2)
		{
			Global_1632166.f_90816[iVar43] = unk_0x4985D6D7F7AB891A(iVar0, &cVar9);
		}
		else
		{
			Global_1632166.f_90816[iVar43] = -1;
		}
		StringCopy(&cVar9, "apwfr", 8);
		StringIntConCat(&cVar9, iVar43, 8);
		if (unk_0xF0E984A1CED01E3C(iVar0, &cVar9) == 2)
		{
			Global_1632166.f_99834[iVar43] = unk_0x4985D6D7F7AB891A(iVar0, &cVar9);
		}
		else
		{
			Global_1632166.f_99834[iVar43] = -1;
		}
		StringCopy(&cVar9, "apwlr", 8);
		StringIntConCat(&cVar9, iVar43, 8);
		if (unk_0xF0E984A1CED01E3C(iVar0, &cVar9) == 2)
		{
			Global_1632166.f_99839[iVar43] = unk_0x4985D6D7F7AB891A(iVar0, &cVar9);
		}
		else
		{
			Global_1632166.f_99839[iVar43] = -1;
		}
		StringCopy(&cVar9, "tcmin", 8);
		StringIntConCat(&cVar9, iVar43, 8);
		if (unk_0xF0E984A1CED01E3C(iVar0, &cVar9) == 2 && !func_175())
		{
			Global_1632166.f_100173[iVar43] = unk_0x4985D6D7F7AB891A(iVar0, &cVar9);
		}
		else
		{
			Global_1632166.f_100173[iVar43] = 0;
		}
		iVar3 = 0;
		while (iVar3 <= 3)
		{
			StringCopy(&cVar9, "trcmn", 8);
			StringIntConCat(&cVar9, iVar3, 8);
			StringIntConCat(&cVar9, iVar43, 8);
			if (unk_0xF0E984A1CED01E3C(iVar0, &cVar9) == 2 && !func_175())
			{
				Global_1632166.f_100178[iVar43 /*5*/][iVar3] = unk_0x4985D6D7F7AB891A(iVar0, &cVar9);
			}
			else
			{
				Global_1632166.f_100178[iVar43 /*5*/][iVar3] = 0;
			}
			iVar3++;
		}
		StringCopy(&cVar9, "tmrsp", 8);
		StringIntConCat(&cVar9, iVar43, 8);
		if (unk_0xF0E984A1CED01E3C(iVar0, &cVar9) == 2)
		{
			Global_1632166.f_100200[iVar43] = unk_0x4985D6D7F7AB891A(iVar0, &cVar9);
		}
		else
		{
			Global_1632166.f_100200[iVar43] = 0;
		}
		StringCopy(&cVar9, "tmvhp", 8);
		StringIntConCat(&cVar9, iVar43, 8);
		if (unk_0xF0E984A1CED01E3C(iVar0, &cVar9) == 2)
		{
			Global_1632166.f_40768[iVar43] = unk_0x4985D6D7F7AB891A(iVar0, &cVar9);
		}
		else
		{
			Global_1632166.f_40768[iVar43] = 100;
		}
		StringCopy(&cVar9, "tblty", 8);
		StringIntConCat(&cVar9, iVar43, 8);
		if (unk_0xF0E984A1CED01E3C(iVar0, &cVar9) == 2)
		{
			Global_1632166.f_40778[iVar43] = unk_0x4985D6D7F7AB891A(iVar0, &cVar9);
		}
		else
		{
			Global_1632166.f_40778[iVar43] = 0;
		}
		StringCopy(&cVar9, "pmpos", 8);
		StringIntConCat(&cVar9, iVar43, 8);
		if (unk_0xF0E984A1CED01E3C(iVar0, &cVar9) == 5)
		{
			Global_1632166.f_85901[iVar43 /*3*/] = { unk_0x97AB8757C3B46AA0(iVar0, &cVar9) };
		}
		else
		{
			Global_1632166.f_85901[iVar43 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar9, "pmpoi", 8);
		StringIntConCat(&cVar9, iVar43, 8);
		if (unk_0xF0E984A1CED01E3C(iVar0, &cVar9) == 5)
		{
			Global_1632166.f_85914[iVar43 /*3*/] = { unk_0x97AB8757C3B46AA0(iVar0, &cVar9) };
		}
		else
		{
			Global_1632166.f_85914[iVar43 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar9, "pmrad", 8);
		StringIntConCat(&cVar9, iVar43, 8);
		if (unk_0xF0E984A1CED01E3C(iVar0, &cVar9) == 3)
		{
			Global_1632166.f_85927[iVar43] = unk_0x1B52B6FA98557E78(iVar0, &cVar9);
		}
		else
		{
			Global_1632166.f_85927[iVar43] = 0f;
		}
		StringCopy(&cVar9, "dfofit", 8);
		StringIntConCat(&cVar9, iVar43, 8);
		if (unk_0xF0E984A1CED01E3C(iVar0, &cVar9) == 2)
		{
			Global_1632166.f_90790[iVar43] = unk_0x4985D6D7F7AB891A(iVar0, &cVar9);
		}
		else
		{
			Global_1632166.f_90790[iVar43] = -1;
		}
		StringCopy(&cVar9, "dfstyl", 8);
		StringIntConCat(&cVar9, iVar43, 8);
		if (unk_0xF0E984A1CED01E3C(iVar0, &cVar9) == 2)
		{
			Global_1632166.f_90835[iVar43] = unk_0x4985D6D7F7AB891A(iVar0, &cVar9);
		}
		else
		{
			Global_1632166.f_90835[iVar43] = -1;
		}
		StringCopy(&cVar9, "clrovr", 8);
		StringIntConCat(&cVar9, iVar43, 8);
		if (unk_0xF0E984A1CED01E3C(iVar0, &cVar9) == 2)
		{
			Global_1632166.f_82772[iVar43] = unk_0x4985D6D7F7AB891A(iVar0, &cVar9);
		}
		else
		{
			Global_1632166.f_82772[iVar43] = -1;
		}
		iVar44 = 0;
		while (iVar44 <= 1)
		{
			StringCopy(&cVar11, "trstp", 16);
			StringIntConCat(&cVar11, iVar43, 16);
			if (iVar44 > 0)
			{
				StringIntConCat(&cVar11, iVar44, 16);
			}
			if (unk_0xF0E984A1CED01E3C(iVar0, &cVar11) == 5)
			{
				Global_1632166.f_86026[iVar43 /*27*/][iVar44 /*13*/][0 /*3*/] = { unk_0x97AB8757C3B46AA0(iVar0, &cVar11) };
			}
			else
			{
				Global_1632166.f_86026[iVar43 /*27*/][iVar44 /*13*/][0 /*3*/] = { 0f, 0f, 0f };
			}
			StringCopy(&cVar11, "trstf", 16);
			StringIntConCat(&cVar11, iVar43, 16);
			if (iVar44 > 0)
			{
				StringIntConCat(&cVar11, iVar44, 16);
			}
			if (unk_0xF0E984A1CED01E3C(iVar0, &cVar11) == 5)
			{
				Global_1632166.f_86180[iVar43 /*27*/][iVar44 /*13*/][0 /*3*/] = { unk_0x97AB8757C3B46AA0(iVar0, &cVar11) };
			}
			else
			{
				Global_1632166.f_86180[iVar43 /*27*/][iVar44 /*13*/][0 /*3*/] = { 0f, 0f, 0f };
			}
			StringCopy(&cVar11, "trsth", 16);
			StringIntConCat(&cVar11, iVar43, 16);
			if (iVar44 > 0)
			{
				StringIntConCat(&cVar11, iVar44, 16);
			}
			if (unk_0xF0E984A1CED01E3C(iVar0, &cVar11) == 3)
			{
				Global_1632166.f_86135[iVar43 /*11*/][iVar44 /*5*/][0] = unk_0x1B52B6FA98557E78(iVar0, &cVar11);
			}
			else
			{
				Global_1632166.f_86135[iVar43 /*11*/][iVar44 /*5*/][0] = 0f;
			}
			iVar45 = 0;
			while (iVar45 <= 3)
			{
				StringCopy(&cVar11, "trstp", 16);
				StringIntConCat(&cVar11, iVar43, 16);
				StringIntConCat(&cVar11, iVar44, 16);
				StringConCat(&cVar11, "n", 16);
				StringIntConCat(&cVar11, iVar45, 16);
				if (unk_0xF0E984A1CED01E3C(iVar0, &cVar11) == 5)
				{
					Global_1632166.f_86026[iVar43 /*27*/][iVar44 /*13*/][iVar45 /*3*/] = { unk_0x97AB8757C3B46AA0(iVar0, &cVar11) };
				}
				else
				{
					Global_1632166.f_86026[iVar43 /*27*/][iVar44 /*13*/][iVar45 /*3*/] = { 0f, 0f, 0f };
				}
				StringCopy(&cVar11, "trsth", 16);
				StringIntConCat(&cVar11, iVar43, 16);
				StringIntConCat(&cVar11, iVar44, 16);
				StringConCat(&cVar11, "n", 16);
				StringIntConCat(&cVar11, iVar45, 16);
				if (unk_0xF0E984A1CED01E3C(iVar0, &cVar11) == 3)
				{
					Global_1632166.f_86135[iVar43 /*11*/][iVar44 /*5*/][iVar45] = unk_0x1B52B6FA98557E78(iVar0, &cVar11);
				}
				else
				{
					Global_1632166.f_86135[iVar43 /*11*/][iVar44 /*5*/][iVar45] = 0f;
				}
				iVar45++;
			}
			StringCopy(&cVar9, "trsrl", 8);
			StringIntConCat(&cVar9, iVar43, 8);
			StringIntConCat(&cVar9, iVar44, 8);
			if (unk_0xF0E984A1CED01E3C(iVar0, &cVar9) == 2)
			{
				Global_1632166.f_102717[iVar43 /*3*/][iVar44] = unk_0x4985D6D7F7AB891A(iVar0, &cVar9);
			}
			else
			{
				Global_1632166.f_102717[iVar43 /*3*/][iVar44] = 0;
			}
			iVar44++;
		}
		iVar46 = 0;
		while (iVar46 <= 3)
		{
			StringCopy(&cVar11, "iltt", 16);
			StringIntConCat(&cVar11, iVar43, 16);
			StringIntConCat(&cVar11, iVar46, 16);
			if (unk_0xF0E984A1CED01E3C(iVar0, &cVar11) == 2)
			{
				Global_1632166.f_105264[iVar43 /*5*/][iVar46] = unk_0x4985D6D7F7AB891A(iVar0, &cVar11);
			}
			else
			{
				Global_1632166.f_105264[iVar43 /*5*/][iVar46] = 0;
			}
			iVar46++;
		}
		iVar44 = 0;
		while (iVar44 <= 3)
		{
			StringCopy(&cVar9, "pvp", 8);
			StringIntConCat(&cVar9, iVar43, 8);
			if (iVar44 > 0)
			{
				StringIntConCat(&cVar9, iVar44, 8);
			}
			if (unk_0xF0E984A1CED01E3C(iVar0, &cVar9) == 5)
			{
				Global_1632166.f_102289[iVar43 /*13*/][iVar44 /*3*/] = { unk_0x97AB8757C3B46AA0(iVar0, &cVar9) };
			}
			else
			{
				Global_1632166.f_102289[iVar43 /*13*/][iVar44 /*3*/] = { 0f, 0f, 0f };
			}
			StringCopy(&cVar9, "pvh", 8);
			StringIntConCat(&cVar9, iVar43, 8);
			if (iVar44 > 0)
			{
				StringIntConCat(&cVar9, iVar44, 8);
			}
			if (unk_0xF0E984A1CED01E3C(iVar0, &cVar9) == 3)
			{
				Global_1632166.f_102342[iVar43 /*5*/][iVar44] = unk_0x1B52B6FA98557E78(iVar0, &cVar9);
			}
			else
			{
				Global_1632166.f_102342[iVar43 /*5*/][iVar44] = -1f;
			}
			iVar44++;
		}
		StringCopy(&cVar9, "tscpos", 8);
		if (iVar43 > 0)
		{
			StringIntConCat(&cVar9, iVar43, 8);
		}
		if (unk_0xF0E984A1CED01E3C(iVar0, &cVar9) == 5)
		{
			Global_1632166.f_102227[iVar43 /*3*/] = { unk_0x97AB8757C3B46AA0(iVar0, &cVar9) };
		}
		else
		{
			Global_1632166.f_102227[iVar43 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar9, "tscrot", 8);
		if (iVar43 > 0)
		{
			StringIntConCat(&cVar9, iVar43, 8);
		}
		if (unk_0xF0E984A1CED01E3C(iVar0, &cVar9) == 5)
		{
			Global_1632166.f_102240[iVar43 /*3*/] = { unk_0x97AB8757C3B46AA0(iVar0, &cVar9) };
		}
		else
		{
			Global_1632166.f_102240[iVar43 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar9, "tspos", 8);
		if (iVar43 > 0)
		{
			StringIntConCat(&cVar9, iVar43, 8);
		}
		if (unk_0xF0E984A1CED01E3C(iVar0, &cVar9) == 5)
		{
			Global_1632166.f_102253[iVar43 /*3*/] = { unk_0x97AB8757C3B46AA0(iVar0, &cVar9) };
		}
		else
		{
			Global_1632166.f_102253[iVar43 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar9, "tscfov", 8);
		if (iVar43 > 0)
		{
			StringIntConCat(&cVar9, iVar43, 8);
		}
		if (unk_0xF0E984A1CED01E3C(iVar0, &cVar9) == 3)
		{
			Global_1632166.f_102266[iVar43] = unk_0x1B52B6FA98557E78(iVar0, &cVar9);
		}
		else
		{
			Global_1632166.f_102266[iVar43] = 45f;
		}
		StringCopy(&cVar9, "tshead", 8);
		if (iVar43 > 0)
		{
			StringIntConCat(&cVar9, iVar43, 8);
		}
		if (unk_0xF0E984A1CED01E3C(iVar0, &cVar9) == 3)
		{
			Global_1632166.f_102271[iVar43] = unk_0x1B52B6FA98557E78(iVar0, &cVar9);
		}
		else
		{
			Global_1632166.f_102271[iVar43] = 0f;
		}
		iVar43++;
	}
	iVar2 = 0;
	while (iVar2 <= 17)
	{
		StringCopy(&cVar9, "pnid", 8);
		StringIntConCat(&cVar9, iVar2, 8);
		if (unk_0xF0E984A1CED01E3C(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1632166.f_99848[iVar2 /*18*/]), unk_0x928932A7D11B745D(iVar0, &cVar9), 64);
		}
		else
		{
			StringCopy(&(Global_1632166.f_99848[iVar2 /*18*/]), "", 64);
		}
		StringCopy(&cVar9, "pnlv", 8);
		StringIntConCat(&cVar9, iVar2, 8);
		if (unk_0xF0E984A1CED01E3C(iVar0, &cVar9) == 2)
		{
			Global_1632166.f_99848[iVar2 /*18*/].f_16 = unk_0x4985D6D7F7AB891A(iVar0, &cVar9);
		}
		else
		{
			Global_1632166.f_99848[iVar2 /*18*/].f_16 = 0;
		}
		StringCopy(&cVar9, "pnvr", 8);
		StringIntConCat(&cVar9, iVar2, 8);
		if (unk_0xF0E984A1CED01E3C(iVar0, &cVar9) == 2 && !unk_0xC55B9553B3EDADE9(&(Global_1632166.f_99848[iVar2 /*18*/])))
		{
			Global_1632166.f_99848[iVar2 /*18*/].f_17 = unk_0x4985D6D7F7AB891A(iVar0, &cVar9);
		}
		else
		{
			Global_1632166.f_99848[iVar2 /*18*/].f_17 = -1;
		}
		iVar2++;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "cposr") == 3)
	{
		Global_1632166.f_102745 = unk_0x1B52B6FA98557E78(iVar0, "cposr");
	}
	else
	{
		Global_1632166.f_102745 = 60f;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "cporv") == 3)
	{
		Global_1632166.f_102748 = unk_0x1B52B6FA98557E78(iVar0, "cporv");
	}
	else
	{
		Global_1632166.f_102748 = -1f;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "bmber") == 2)
	{
		Global_1632166.f_102735 = unk_0x4985D6D7F7AB891A(iVar0, "bmber");
	}
	else
	{
		Global_1632166.f_102735 = 2;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "bmbet") == 2)
	{
		Global_1632166.f_102736 = unk_0x4985D6D7F7AB891A(iVar0, "bmbet");
	}
	else
	{
		Global_1632166.f_102736 = 3000;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "bmbsi") == 2)
	{
		Global_1632166.f_102737 = unk_0x4985D6D7F7AB891A(iVar0, "bmbsi");
	}
	else
	{
		Global_1632166.f_102737 = 150;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "bmbdi") == 3)
	{
		Global_1632166.f_102738 = unk_0x1B52B6FA98557E78(iVar0, "bmbdi");
	}
	else
	{
		Global_1632166.f_102738 = 3f;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "bmbio") == 3)
	{
		Global_1632166.f_102739 = unk_0x1B52B6FA98557E78(iVar0, "bmbio");
	}
	else
	{
		Global_1632166.f_102739 = 1f;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "fvjhdt") == 2)
	{
		Global_1632166.f_102740 = unk_0x4985D6D7F7AB891A(iVar0, "fvjhdt");
	}
	else
	{
		Global_1632166.f_102740 = 25;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "fvjhmd") == 2)
	{
		Global_1632166.f_102741 = unk_0x4985D6D7F7AB891A(iVar0, "fvjhmd");
	}
	else
	{
		Global_1632166.f_102741 = 5;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "fvjfvd") == 2)
	{
		Global_1632166.f_102742 = unk_0x4985D6D7F7AB891A(iVar0, "fvjfvd");
	}
	else
	{
		Global_1632166.f_102742 = 5;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "fvjfvc") == 2)
	{
		Global_1632166.f_102743 = unk_0x4985D6D7F7AB891A(iVar0, "fvjfvc");
	}
	else
	{
		Global_1632166.f_102743 = 2;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "cpopr") == 3)
	{
		Global_1632166.f_102746 = unk_0x1B52B6FA98557E78(iVar0, "cpopr");
	}
	else
	{
		Global_1632166.f_102746 = 5f;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "cpohr") == 3)
	{
		Global_1632166.f_102747 = unk_0x1B52B6FA98557E78(iVar0, "cpohr");
	}
	else
	{
		Global_1632166.f_102747 = 60f;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "ratc0") == 2)
	{
		Global_1632166.f_102749 = unk_0x4985D6D7F7AB891A(iVar0, "ratc0");
	}
	else
	{
		Global_1632166.f_102749 = 0;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "ratc1") == 2)
	{
		Global_1632166.f_102750 = unk_0x4985D6D7F7AB891A(iVar0, "ratc1");
	}
	else
	{
		Global_1632166.f_102750 = 0;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "ratc2") == 2)
	{
		Global_1632166.f_102751 = unk_0x4985D6D7F7AB891A(iVar0, "ratc2");
	}
	else
	{
		Global_1632166.f_102751 = 0;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "ratc3") == 2)
	{
		Global_1632166.f_102752 = unk_0x4985D6D7F7AB891A(iVar0, "ratc3");
	}
	else
	{
		Global_1632166.f_102752 = 0;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "ratc4") == 2)
	{
		Global_1632166.f_102753 = unk_0x4985D6D7F7AB891A(iVar0, "ratc4");
	}
	else
	{
		Global_1632166.f_102753 = 0;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "ratc5") == 2)
	{
		Global_1632166.f_102754 = unk_0x4985D6D7F7AB891A(iVar0, "ratc5");
	}
	else
	{
		Global_1632166.f_102754 = 0;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "ratc6") == 2)
	{
		Global_1632166.f_102755 = unk_0x4985D6D7F7AB891A(iVar0, "ratc6");
	}
	else
	{
		Global_1632166.f_102755 = 0;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "ratc9") == 2)
	{
		Global_1632166.f_102759 = unk_0x4985D6D7F7AB891A(iVar0, "ratc9");
	}
	else
	{
		Global_1632166.f_102759 = 0;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "ratc7") == 2)
	{
		Global_1632166.f_102757 = unk_0x4985D6D7F7AB891A(iVar0, "ratc7");
	}
	else
	{
		Global_1632166.f_102757 = 0;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "ratc8") == 2)
	{
		Global_1632166.f_102758 = unk_0x4985D6D7F7AB891A(iVar0, "ratc8");
	}
	else
	{
		Global_1632166.f_102758 = 0;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "ratcm") == 3)
	{
		Global_1632166.f_102756 = unk_0x1B52B6FA98557E78(iVar0, "ratcm");
	}
	else
	{
		Global_1632166.f_102756 = -1f;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "cdrt") == 3)
	{
		Global_1632166.f_102761 = unk_0x1B52B6FA98557E78(iVar0, "cdrt");
	}
	else
	{
		Global_1632166.f_102761 = -1f;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "csttl") == 4)
	{
		StringCopy(&(Global_1632166.f_102762), unk_0x928932A7D11B745D(iVar0, "csttl"), 16);
	}
	else
	{
		StringCopy(&(Global_1632166.f_102762), "", 16);
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "csstl") == 4)
	{
		StringCopy(&(Global_1632166.f_102766), unk_0x928932A7D11B745D(iVar0, "csstl"), 16);
	}
	else
	{
		StringCopy(&(Global_1632166.f_102766), "", 16);
	}
	func_206();
	if (unk_0xF0E984A1CED01E3C(iVar0, "ssdsp") == 5)
	{
		Global_1632166.f_105216 = { unk_0x97AB8757C3B46AA0(iVar0, "ssdsp") };
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "ssdsr") == 3)
	{
		Global_1632166.f_105219 = unk_0x1B52B6FA98557E78(iVar0, "ssdsr");
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "ssder") == 3)
	{
		Global_1632166.f_105220 = unk_0x1B52B6FA98557E78(iVar0, "ssder");
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "ssdst") == 2)
	{
		Global_1632166.f_105221 = unk_0x4985D6D7F7AB891A(iVar0, "ssdst");
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "ssdtg") == 2)
	{
		Global_1632166.f_105222 = unk_0x4985D6D7F7AB891A(iVar0, "ssdtg");
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "vwp0") == 2)
	{
		Global_1632166.f_105376 = unk_0x4985D6D7F7AB891A(iVar0, "vwp0");
	}
	else
	{
		Global_1632166.f_105376 = 0;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "vwp1") == 2)
	{
		Global_1632166.f_105377 = unk_0x4985D6D7F7AB891A(iVar0, "vwp1");
	}
	else
	{
		Global_1632166.f_105377 = 0;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "vwp2") == 2)
	{
		Global_1632166.f_105379 = unk_0x4985D6D7F7AB891A(iVar0, "vwp2");
	}
	else
	{
		Global_1632166.f_105379 = 0;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "vwp3") == 2)
	{
		Global_1632166.f_105380 = unk_0x4985D6D7F7AB891A(iVar0, "vwp3");
	}
	else
	{
		Global_1632166.f_105380 = 0;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "vwp4") == 2)
	{
		Global_1632166.f_105381 = unk_0x4985D6D7F7AB891A(iVar0, "vwp4");
	}
	else
	{
		Global_1632166.f_105381 = 0;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "vwp5") == 2)
	{
		Global_1632166.f_105378 = unk_0x4985D6D7F7AB891A(iVar0, "vwp5");
	}
	else
	{
		Global_1632166.f_105378 = 0;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "vwpbhd") == 2)
	{
		Global_1632166.f_105382 = unk_0x4985D6D7F7AB891A(iVar0, "vwpbhd");
	}
	else
	{
		Global_1632166.f_105382 = 0;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "vwprbs") == 2)
	{
		Global_1632166.f_105386 = unk_0x4985D6D7F7AB891A(iVar0, "vwprbs");
	}
	else
	{
		Global_1632166.f_105386 = 0;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "vwmgfr") == 2)
	{
		Global_1632166.f_105404 = unk_0x4985D6D7F7AB891A(iVar0, "vwmgfr");
	}
	else
	{
		Global_1632166.f_105404 = 5;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "vwmgda") == 2)
	{
		Global_1632166.f_105405 = unk_0x4985D6D7F7AB891A(iVar0, "vwmgda");
	}
	else
	{
		Global_1632166.f_105405 = 350;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "crttn") == 2)
	{
		Global_1632166.f_105406 = unk_0x4985D6D7F7AB891A(iVar0, "crttn");
	}
	else
	{
		Global_1632166.f_105406 = 0;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "vwprbs") == 2)
	{
		Global_1632166.f_105386 = unk_0x4985D6D7F7AB891A(iVar0, "vwprbs");
	}
	else
	{
		Global_1632166.f_105386 = 0;
	}
	Global_1632166.f_105397 = { unk_0x97AB8757C3B46AA0(iVar0, "vtwsp") };
	Global_1632166.f_105400 = { unk_0x97AB8757C3B46AA0(iVar0, "vtwsr") };
	if (unk_0xF0E984A1CED01E3C(iVar0, "tsc3") == 3)
	{
		Global_1632166.f_105383 = unk_0x1B52B6FA98557E78(iVar0, "tsc3");
	}
	else
	{
		Global_1632166.f_105383 = 0f;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "tsc4") == 3)
	{
		Global_1632166.f_105384 = unk_0x1B52B6FA98557E78(iVar0, "tsc4");
	}
	else
	{
		Global_1632166.f_105384 = 0f;
	}
	if (unk_0xF0E984A1CED01E3C(iVar0, "csstd") == 2)
	{
		Global_1632166.f_105385 = unk_0x4985D6D7F7AB891A(iVar0, "csstd");
	}
	else
	{
		Global_1632166.f_105385 = -1;
	}
}

void func_206()
{
	Global_1632166.f_105216 = { 0f, 0f, 0f };
	Global_1632166.f_105219 = 30f;
	Global_1632166.f_105220 = 5f;
	Global_1632166.f_105221 = 30000;
	Global_1632166.f_105222 = 15000;
}

int func_207(int iParam0)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar5 = unk_0x7A4693BB354F3CD3(iVar0);
		if ((unk_0x1E0256D6F1052B31(iVar5) && unk_0xBF474853319C6A20(iVar5)) && iVar5 != unk_0xFB6B3EEFAB2DD12C())
		{
			iVar2 = iVar5;
			if ((!func_208(iVar5) && Global_1589933[iVar2 /*601*/].f_202 != 8) && !unk_0xF44A5E894FE76438(Global_1589933[iVar2 /*601*/].f_39.f_18, 14))
			{
				if (Global_1589933[iVar2 /*601*/].f_95.f_28 != -1)
				{
					unk_0xB8A73E7DA87B2968(&uVar1, Global_1589933[iVar2 /*601*/].f_95.f_28);
					if (Global_1589933[iVar2 /*601*/].f_95.f_28 >= iParam0 && iVar2 < unk_0xFB6B3EEFAB2DD12C())
					{
						bVar4 = true;
					}
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iParam0)
	{
		if (!unk_0xF44A5E894FE76438(uVar1, iVar0))
		{
			if (bVar4)
			{
				bVar4 = false;
			}
			else
			{
				iVar3 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar3;
}

bool func_208(int iParam0)
{
	return unk_0xF44A5E894FE76438(Global_1589933[iParam0 /*601*/].f_95.f_32, 5);
}

var func_209()
{
	return Global_1738472.f_3;
}

int func_210()
{
	if (unk_0x8676DE83D4396C39())
	{
		return func_212();
	}
	return func_211(Global_1632166.f_86360);
}

int func_211(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_5054[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_212()
{
	return Global_2443089.f_12;
}

int func_213()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x7A4693BB354F3CD3(iVar0);
		if ((((unk_0x1E0256D6F1052B31(iVar2) && unk_0xBF474853319C6A20(iVar2)) && !func_208(iVar2)) && Global_1589933[iVar2 /*601*/].f_202 != 8) && !unk_0xF44A5E894FE76438(Global_1589933[iVar2 /*601*/].f_39.f_18, 14))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_214()
{
	return unk_0xF44A5E894FE76438(Global_2443089.f_548.f_1, 0);
}

var func_215()
{
	return unk_0xBC2999B1C8F62EDD("CREATOR_NO_T");
}

bool func_216()
{
	return unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_138, 0);
}

int func_217(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 13;
		
		case 1:
			return 13;
		
		case 3:
			return 6;
		
		case 2:
			return 2;
		
		case 4:
			return 12;
		
		case 5:
			return 23;
		
		default:
	}
	return 0;
}

void func_218()
{
	if (func_219())
	{
		Global_2450850.f_8 = 1;
	}
	Global_2450850.f_7 = 1;
}

bool func_219()
{
	return unk_0xF44A5E894FE76438(Global_2443089.f_2, 11);
}

int func_220(int iParam0)
{
	if (unk_0xC0915CC8FE05A943() || (unk_0x603D621ED5E06CB0() && iParam0 == 0))
	{
		if (unk_0xDE49089F060E6818(1) == 0 || unk_0x430A2E9C5209BC91(1, -1) == 0)
		{
			return 0;
		}
	}
	else if (unk_0xDE49089F060E6818(1) == 0)
	{
		return 0;
	}
	if (func_221() == 0)
	{
		return 0;
	}
	return 1;
}

int func_221()
{
	if (unk_0xC0915CC8FE05A943() && unk_0x45ACD48FE706DF5A())
	{
		return 1;
	}
	if (unk_0x59D60465DE87FE2F() && unk_0x45ACD48FE706DF5A())
	{
		return 1;
	}
	if ((unk_0x603D621ED5E06CB0() && unk_0x08CA6E0CF57442EC() == 0) && unk_0x45ACD48FE706DF5A())
	{
		return 1;
	}
	if (unk_0xF1A016B51831B87B() && unk_0x45ACD48FE706DF5A())
	{
		return 1;
	}
	if (unk_0x2D337DD29A7ABD30() && unk_0x45ACD48FE706DF5A())
	{
		return 1;
	}
	return 0;
}

int func_222(int iParam0)
{
	if (unk_0xC0915CC8FE05A943() || (unk_0x603D621ED5E06CB0() && iParam0 == 0))
	{
		if (unk_0xDE49089F060E6818(0) == 0 || unk_0x430A2E9C5209BC91(0, -1) == 0)
		{
			return 0;
		}
	}
	else if (unk_0xDE49089F060E6818(0) == 0)
	{
		return 0;
	}
	if (func_221() == 0)
	{
		return 0;
	}
	return 1;
}

void func_223(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	Global_1632166.f_87000 = 0;
	if (bParam0)
	{
		if (((!func_155() || func_234() == 36) || func_234() == 39) || func_234() == 34)
		{
			Global_1632166.f_86360 = 0;
		}
		Global_1632166.f_59750 = -1;
		Global_1632166.f_11 = 0;
		Global_1632166.f_12 = 0;
		Global_1632166.f_13 = 0;
		Global_1632166.f_14 = 0;
		Global_1632166.f_15 = 0;
		Global_1632166.f_16 = 0;
		Global_1632166.f_17 = 0;
		Global_1632166.f_18 = 0;
		Global_1632166.f_19 = 0;
		Global_1632166.f_20 = 0;
		Global_1632166.f_21 = 0;
		Global_1632166.f_90 = 0;
		Global_1632166.f_100199 = 0;
		Global_1632166.f_10 = 0;
		Global_1632166.f_24 = 0;
		Global_1632166.f_49 = 0;
		Global_1632166.f_26 = 0;
		Global_1632166.f_48 = 0;
		Global_1632166.f_50 = 0;
		Global_1632166.f_51 = 0;
		Global_1632166.f_53 = 0;
		Global_1632166.f_54 = 0;
		Global_1632166.f_55 = 0;
		Global_1632166.f_56 = 0;
		Global_1632166.f_28 = 0;
		Global_1632166.f_29 = 1;
		Global_1632166.f_6 = 0;
		Global_1632166.f_44 = 0;
		Global_1632166.f_47 = 1;
		Global_1632166.f_25 = 0;
		Global_1632166.f_86977 = 0;
		Global_1632166.f_86980 = 0;
		Global_1632166.f_86979 = 0;
		Global_1632166.f_86976 = 0;
		Global_1632166.f_105305 = 0;
		if (bParam1)
		{
			Global_1632166.f_4 = 0;
			Global_1632166.f_5 = 0;
		}
		Global_1632166.f_3 = 0;
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			Global_1632166.f_33450[iVar0 /*38*/] = -1;
			Global_1632166.f_33450[iVar0 /*38*/].f_1 = -1;
			Global_1632166.f_33450[iVar0 /*38*/].f_2 = 0;
			Global_1632166.f_33450[iVar0 /*38*/].f_3 = 0;
			iVar0++;
		}
		Global_1632166.f_86981 = 0;
		Global_1632166.f_86982 = 0;
		Global_1632166.f_86983 = 0;
		Global_1632166.f_86972 = -1;
		Global_1632166.f_86971 = 0;
		Global_1632166.f_60 = 0;
		Global_1632166.f_68 = { 0f, 0f, 0f };
		Global_1632166.f_71 = { 0f, 0f, 0f };
		Global_1632166.f_74 = { 0f, 0f, 0f };
		Global_1632166.f_77 = { 0f, 0f, 0f };
		Global_1632166.f_80 = { 0f, 0f, 0f };
		Global_1632166.f_83 = { 0f, 0f, 0f };
		Global_1632166.f_86 = 0f;
		Global_1632166.f_87 = 0f;
		Global_1632166.f_86335 = 0f;
		Global_1632166.f_89 = 0;
		Global_1632166.f_86999 = 0;
		Global_1632166.f_105294 = 0;
		Global_1632166.f_100411 = 0;
		iVar0 = 0;
		while (iVar0 <= 13)
		{
			Global_1632166.f_40164[iVar0] = 0;
			Global_1632166.f_40148[iVar0] = 0;
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1632166.f_90795[iVar0] = 0;
		Global_1632166.f_90802[iVar0] = -1;
		iVar0++;
	}
	Global_1632166.f_90809 = 0;
	Global_1632166.f_90810 = -1;
	Global_1632166.f_1 = -1;
	StringCopy(&(Global_1632166.f_86685), "", 24);
	iVar0 = 0;
	while (iVar0 <= 35)
	{
		StringCopy(&(Global_1632166.f_90399[iVar0 /*8*/]), "", 32);
		iVar0++;
	}
	Global_1632166.f_102223 = 0;
	Global_1632166.f_43 = 0;
	Global_1632166.f_62 = { 0f, 0f, 0f };
	Global_1632166.f_100410 = -1;
	Global_1632166.f_86978 = 0f;
	StringCopy(&(Global_1632166.f_86367), "", 64);
	StringCopy(&(Global_1632166.f_86669), "", 64);
	if (bParam2)
	{
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			StringCopy(&(Global_1632166.f_86653[iVar0 /*6*/]), "", 24);
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		StringCopy(&(Global_1632166.f_86389[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	func_233();
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		StringCopy(&(Global_1632166.f_33450[0 /*38*/].f_4[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	func_232();
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1632166.f_36[iVar0] = 0;
		Global_1632166.f_100173[iVar0] = 0;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1632166.f_100178[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		Global_1632166.f_31[iVar0] = 1;
		Global_1632166.f_85901[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1632166.f_85914[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1632166.f_85927[iVar0] = 0f;
		Global_1632166.f_102227[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1632166.f_102240[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1632166.f_102253[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1632166.f_102266[iVar0] = 45f;
		Global_1632166.f_102271[iVar0] = 0f;
		Global_1632166.f_82772[iVar0] = -1;
		StringCopy(&(Global_1632166.f_102582[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_1632166.f_102647[iVar0 /*16*/]), "", 64);
		Global_1632166.f_102712[iVar0] = 0;
		StringCopy(&(Global_1632166.f_102384[iVar0 /*16*/]), "", 64);
		Global_1632166.f_90849[iVar0] = -1;
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			StringCopy(&(Global_1632166.f_102449[iVar0 /*33*/][iVar1 /*16*/]), "", 64);
			iVar1++;
		}
		Global_1632166.f_34292[iVar0] = -1;
		Global_1632166.f_34297[iVar0] = -1;
		StringCopy(&(Global_1632166.f_105223[iVar0 /*4*/]), "", 16);
		StringCopy(&(Global_1632166.f_105240[iVar0 /*4*/]), "", 16);
		Global_1632166.f_105257[iVar0] = 0;
		Global_1632166.f_105287[iVar0] = 0;
		iVar0++;
	}
	Global_1632166.f_105329 = 0;
	Global_1632166.f_105328 = 0;
	Global_1632166.f_105330 = 0;
	Global_1632166.f_105331 = 1;
	Global_1632166.f_105332 = 2;
	Global_1632166.f_105333 = 3;
	Global_1632166.f_105334 = 4;
	Global_1632166.f_105335 = 6;
	Global_1632166.f_105336 = 7;
	Global_1632166.f_105337 = 9;
	Global_1632166.f_105338 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1632166.f_105387[iVar0] = 0;
		Global_1632166.f_105392[iVar0] = 0;
		iVar0++;
	}
	Global_1632166.f_105340 = 5;
	Global_1632166.f_105339 = 0;
	Global_1632166.f_102276 = { 0f, 0f, 0f };
	Global_1632166.f_102279 = { 0f, 0f, 0f };
	Global_1632166.f_102282 = { 0f, 0f, 0f };
	Global_1632166.f_102285 = 45f;
	Global_1632166.f_102286 = 0f;
	Global_1632166.f_102287 = 0;
	Global_1632166.f_102730 = 10000;
	Global_1632166.f_102744 = 1;
	Global_1632166.f_102731 = 1f;
	Global_1632166.f_105374 = 1;
	Global_1632166.f_105375 = 0;
	Global_1632166.f_102732 = 0f;
	Global_1632166.f_102745 = 60f;
	Global_1632166.f_102746 = 5f;
	Global_1632166.f_102747 = 60f;
	Global_1632166.f_102748 = -1f;
	Global_1632166.f_102734 = 2;
	Global_1632166.f_102735 = 2;
	Global_1632166.f_102736 = 3000;
	Global_1632166.f_102737 = 150;
	Global_1632166.f_102738 = 3f;
	Global_1632166.f_102739 = 1f;
	Global_1632166.f_102740 = 25;
	Global_1632166.f_102741 = 5;
	Global_1632166.f_102742 = 5;
	Global_1632166.f_102743 = 2000;
	Global_1632166.f_102761 = -1f;
	StringCopy(&(Global_1632166.f_102762), "", 16);
	StringCopy(&(Global_1632166.f_102766), "", 16);
	Global_1632166.f_102749 = 0;
	Global_1632166.f_102758 = 0;
	Global_1632166.f_102750 = 0;
	Global_1632166.f_102751 = 0;
	Global_1632166.f_102752 = 0;
	Global_1632166.f_102753 = 0;
	Global_1632166.f_102754 = 0;
	Global_1632166.f_102755 = 0;
	Global_1632166.f_102759 = 0;
	Global_1632166.f_102756 = -1f;
	Global_1632166.f_102757 = 0;
	Global_1632166.f_102760 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		StringCopy(&(Global_1632166.f_77634[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_1632166.f_77683[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_1632166.f_77732[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		StringCopy(&(Global_1632166.f_77833[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		func_230(&(Global_1632166.f_90854[iVar0 /*1274*/]));
		func_228(&(Global_1632166.f_97225[iVar0 /*434*/]));
		iVar0++;
	}
	func_228(&(Global_1632166.f_99396));
	iVar0 = 0;
	while (iVar0 <= 24)
	{
		Global_1632166.f_100307[iVar0 /*4*/].f_3 = 0;
		Global_1632166.f_100307[iVar0 /*4*/] = { 0f, 0f, 0f };
		iVar0++;
	}
	Global_1632166.f_100408 = 0;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_1632166.f_59686[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
	Global_1632166.f_59747 = 0;
	iVar0 = 0;
	while (iVar0 <= 68)
	{
		func_188(&(Global_1632166.f_87017[iVar0 /*49*/]), iVar0);
		iVar0++;
	}
	Global_1632166.f_90688[0] = 0;
	Global_1632166.f_90688[1] = 0;
	Global_1632166.f_90692 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		func_227(&(Global_1632166.f_100205[iVar0 /*10*/]));
		iVar0++;
	}
	Global_1632166.f_105262 = 0;
	Global_1632166.f_2 = 0;
	Global_1632166.f_86952 = 0;
	Global_1632166.f_100199 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1632166.f_86985[iVar0] = -1;
		Global_1632166.f_100412[iVar0] = -1;
		iVar0++;
	}
	Global_1632166.f_105263 = 0;
	Global_1632166.f_105285 = 0;
	Global_1632166.f_87015 = 0;
	Global_1632166.f_87016 = 0;
	Global_1632166.f_100451 = 0.5f;
	Global_1632166.f_90706 = 1;
	Global_1632166.f_90708 = 5;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_1632166.f_100452[iVar0] = 0f;
		Global_1632166.f_100473[iVar0] = 0f;
		Global_1632166.f_100494[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1632166.f_40735[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1632166.f_40773[iVar0] = -1;
		iVar0++;
	}
	Global_1630921 = 0;
	Global_1632166.f_7 = 0;
	Global_1632166.f_86958 = 0;
	Global_1632166.f_32654 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1632166.f_82471)
	{
		Global_1632166.f_82471[iVar0 /*5*/] = { 0f, 0f, 0f };
		Global_1632166.f_82471[iVar0 /*5*/].f_3 = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1632166.f_33414[iVar0 /*3*/][0] = 0;
		Global_1632166.f_33414[iVar0 /*3*/][1] = 0;
		Global_1632166.f_33401[iVar0 /*3*/][0] = 0;
		Global_1632166.f_33401[iVar0 /*3*/][1] = 0;
		Global_1632166.f_33427[iVar0 /*3*/][0] = 0;
		Global_1632166.f_33427[iVar0 /*3*/][1] = 0;
		Global_1632166.f_33440[iVar0] = 0;
		Global_1632166.f_33445[iVar0] = 0;
		iVar1 = 0;
		while (iVar1 <= 12)
		{
			Global_1632166.f_90733[iVar0 /*14*/][iVar1] = 0;
			iVar1++;
		}
		Global_1632166.f_90826[iVar0 /*2*/][0] = 0;
		Global_1632166.f_90840[iVar0 /*2*/][0] = 0;
		Global_1632166.f_91[iVar0 /*8128*/] = { 0f, 0f, 0f };
		Global_1632166.f_91[iVar0 /*8128*/].f_4 = { 0f, 0f, 0f };
		Global_1632166.f_91[iVar0 /*8128*/].f_7 = { 0f, 0f, 0f };
		Global_1632166.f_91[iVar0 /*8128*/].f_11 = { 0f, 0f, 0f };
		Global_1632166.f_91[iVar0 /*8128*/].f_14 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_15 = { 0f, 0f, 0f };
		Global_1632166.f_91[iVar0 /*8128*/].f_18 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_19 = { 0f, 0f, 0f };
		Global_1632166.f_91[iVar0 /*8128*/].f_22 = -1;
		Global_1632166.f_91[iVar0 /*8128*/].f_23 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_36 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_24 = -1;
		Global_1632166.f_91[iVar0 /*8128*/].f_25 = -1;
		Global_1632166.f_91[iVar0 /*8128*/].f_26 = -1;
		Global_1632166.f_91[iVar0 /*8128*/].f_27 = -1;
		Global_1632166.f_91[iVar0 /*8128*/].f_28 = -1;
		Global_1632166.f_91[iVar0 /*8128*/].f_29 = -1;
		Global_1632166.f_91[iVar0 /*8128*/].f_30 = -1;
		Global_1632166.f_91[iVar0 /*8128*/].f_31 = -1;
		Global_1632166.f_91[iVar0 /*8128*/].f_32 = -1;
		Global_1632166.f_91[iVar0 /*8128*/].f_33 = -1;
		Global_1632166.f_91[iVar0 /*8128*/].f_34 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_57 = -1;
		Global_1632166.f_91[iVar0 /*8128*/].f_3340 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_3342 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_3363 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_3436 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_4536 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_3341 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_3343 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_4537 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_59 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_60 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_61 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_207 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_208 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_209 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_354 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_355 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_356 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_4538 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_55 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_56 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_2968 = 60000;
		Global_1632166.f_91[iVar0 /*8128*/].f_3194 = 60000;
		Global_1632166.f_91[iVar0 /*8128*/].f_4023 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_583 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_584 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_8108 = -1;
		Global_1632166.f_91[iVar0 /*8128*/].f_8109 = -1;
		Global_1632166.f_91[iVar0 /*8128*/].f_2974 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_2975 = 0;
		iVar1 = 0;
		while (iVar1 <= 16)
		{
			Global_1632166.f_91[iVar0 /*8128*/].f_2976[iVar1] = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_2994[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_3012[iVar1] = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_3030[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_3066[iVar1] = 4;
			Global_1632166.f_91[iVar0 /*8128*/].f_3084[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_3120[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_3138[iVar1] = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_3156[iVar1] = 10;
			Global_1632166.f_91[iVar0 /*8128*/].f_3174[iVar1] = 10;
			Global_1632166.f_91[iVar0 /*8128*/].f_3102[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_3048[iVar1] = -1;
			iVar1++;
		}
		Global_1632166.f_32604[iVar0] = 0;
		Global_1632166.f_32609[iVar0] = 0;
		Global_1632166.f_32614[iVar0] = -1;
		Global_1632166.f_32660[iVar0] = 0;
		StringCopy(&(Global_1632166.f_32665[iVar0 /*4*/]), "", 16);
		Global_1632166.f_32687[iVar0] = 3;
		Global_1632166.f_32692[iVar0] = -1;
		Global_1632166.f_32655[iVar0] = 0;
		Global_1632166.f_32682[iVar0] = 0;
		Global_1632166.f_90694[iVar0] = 0;
		Global_1632166.f_90699[iVar0] = 0;
		Global_1632166.f_40768[iVar0] = 100;
		Global_1632166.f_40778[iVar0] = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_4331 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_4332 = 0;
		Global_1630921.f_1[iVar0] = 0;
		Global_1632166.f_90811[iVar0] = 0;
		Global_1632166.f_90816[iVar0] = -1;
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				Global_1632166.f_86026[iVar0 /*27*/][iVar1 /*13*/][iVar2 /*3*/] = { 0f, 0f, 0f };
				Global_1632166.f_86135[iVar0 /*11*/][iVar1 /*5*/][iVar2] = 0f;
				Global_1632166.f_86180[iVar0 /*27*/][iVar1 /*13*/][iVar2 /*3*/] = { 0f, 0f, 0f };
				iVar2++;
			}
			Global_1632166.f_102717[iVar0 /*3*/][iVar1] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 21)
		{
			Global_1632166.f_40180[iVar0 /*23*/][iVar1] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1632166.f_105264[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 21)
		{
			Global_1632166.f_40273[iVar0 /*93*/][0 /*23*/][iVar1] = 0;
			Global_1632166.f_40273[iVar0 /*93*/][1 /*23*/][iVar1] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1632166.f_102289[iVar0 /*13*/][iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1632166.f_102342[iVar0 /*5*/][iVar1] = 0f;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 69)
		{
			Global_1632166.f_91[iVar0 /*8128*/].f_62[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_210[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_357[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_133[iVar1] = 1f;
			Global_1632166.f_91[iVar0 /*8128*/].f_281[iVar1] = 1f;
			Global_1632166.f_91[iVar0 /*8128*/].f_428[iVar1] = 1f;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1632166.f_91[iVar0 /*8128*/].f_501[iVar1] = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_506[iVar1] = -1;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 16)
		{
			Global_1632166.f_33831[iVar1 /*27*/] = 0;
			Global_1632166.f_33831[iVar1 /*27*/].f_1 = { 0f, 0f, 0f };
			Global_1632166.f_33831[iVar1 /*27*/].f_4 = { 0f, 0f, 0f };
			Global_1632166.f_33831[iVar1 /*27*/].f_25 = 0f;
			Global_1632166.f_33831[iVar1 /*27*/].f_26 = 0;
			iVar2 = 0;
			while (iVar2 <= 4)
			{
				Global_1632166.f_33831[iVar1 /*27*/].f_7[iVar2] = 0;
				Global_1632166.f_33831[iVar1 /*27*/].f_13[iVar2] = 0;
				Global_1632166.f_33831[iVar1 /*27*/].f_19[iVar2] = 0;
				iVar2++;
			}
			Global_1632166.f_91[iVar0 /*8128*/].f_4169[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_4187[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_4205[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_4223[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_4241[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_4259[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_4277[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_4295[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_4313[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_37[iVar1] = -1;
			Global_1632166.f_59600[iVar1 /*5*/][iVar0] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_4333[iVar1] = 60000;
			Global_1632166.f_91[iVar0 /*8128*/].f_4351[iVar1] = 60000;
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				StringCopy(&(Global_1632166.f_91[iVar0 /*8128*/].f_4455[iVar2 /*16*/]), "", 64);
				Global_1632166.f_91[iVar0 /*8128*/].f_4369[iVar1 /*5*/][iVar2] = 0;
				iVar2++;
			}
			Global_1632166.f_32697[iVar1 /*5*/][iVar0] = -1;
			Global_1632166.f_32783[iVar1 /*5*/][iVar0] = 0;
			Global_1632166.f_32869[iVar1 /*5*/][iVar0] = 0;
			Global_1632166.f_32955[iVar1 /*5*/][iVar0] = 0;
			Global_1632166.f_33041[iVar1 /*5*/][iVar0] = 0;
			Global_1632166.f_33127[iVar1 /*5*/][iVar0] = 1500;
			Global_1632166.f_33213[iVar1 /*5*/][iVar0] = 1400;
			Global_1632166.f_33299[iVar1 /*5*/][iVar0] = 35;
			StringCopy(&(Global_1630921.f_152[iVar0 /*273*/][iVar1 /*16*/]), "", 64);
			Global_1630921.f_6[iVar0 /*18*/][iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_603[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_621[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_3196[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_3214[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_3232[iVar1] = 1;
			Global_1632166.f_91[iVar0 /*8128*/].f_3304[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_3322[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_3364[iVar1] = 10000;
			Global_1632166.f_91[iVar0 /*8128*/].f_3344[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_3400[iVar1] = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_3250[iVar1] = 1;
			Global_1632166.f_91[iVar0 /*8128*/].f_3418[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_3437[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_3721[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_3757[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_3473[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_3455[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_3613[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_3739[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_3775[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_3667[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_3685[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_3631[iVar1] = 100;
			Global_1632166.f_91[iVar0 /*8128*/].f_3491[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1632166.f_91[iVar0 /*8128*/].f_3543[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1632166.f_91[iVar0 /*8128*/].f_3595[iVar1] = 0f;
			Global_1632166.f_91[iVar0 /*8128*/].f_3649[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_3703[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_3793[iVar1] = -1f;
			Global_1632166.f_91[iVar0 /*8128*/].f_837[iVar1] = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_855[iVar1] = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_873[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_891[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_927[iVar1] = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_639[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_657[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_909[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_945[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_7766[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_7784[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_7802[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_7820[iVar1] = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_7838[iVar1] = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_7856[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_8036[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_7874[iVar1] = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_7892[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_7910[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_7928[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_7946[iVar1] = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_7964[iVar1] = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_511[iVar1] = 5;
			Global_1632166.f_91[iVar0 /*8128*/].f_529[iVar1] = 20;
			Global_1632166.f_91[iVar0 /*8128*/].f_4061[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_4079[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_4097[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_4115[iVar1] = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_4133[iVar1] = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_801[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_819[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_3268[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_3286[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_547[iVar1] = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_565[iVar1] = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_585[iVar1] = 0;
			StringCopy(&(Global_1632166.f_91[iVar0 /*8128*/].f_4539[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1632166.f_91[iVar0 /*8128*/].f_4812[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1632166.f_91[iVar0 /*8128*/].f_5085[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1632166.f_91[iVar0 /*8128*/].f_5904[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1632166.f_91[iVar0 /*8128*/].f_5358[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1632166.f_91[iVar0 /*8128*/].f_5631[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1632166.f_91[iVar0 /*8128*/].f_7542[0 /*16*/]), "", 64);
			StringCopy(&(Global_1632166.f_91[iVar0 /*8128*/].f_7542[1 /*16*/]), "", 64);
			StringCopy(&(Global_1632166.f_91[iVar0 /*8128*/].f_6177[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1632166.f_91[iVar0 /*8128*/].f_6450[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1632166.f_91[iVar0 /*8128*/].f_6723[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1632166.f_91[iVar0 /*8128*/].f_6996[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1632166.f_91[iVar0 /*8128*/].f_7269[iVar1 /*16*/]), "", 64);
			Global_1632166.f_91[iVar0 /*8128*/].f_3933[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_3969[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_3951[iVar1] = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_3811[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1632166.f_91[iVar0 /*8128*/].f_3863[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1632166.f_91[iVar0 /*8128*/].f_967[iVar1 /*28*/].f_16 = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_967[iVar1 /*28*/] = { 0f, 0f, 0f };
			Global_1632166.f_91[iVar0 /*8128*/].f_967[iVar1 /*28*/].f_3 = { 0f, 0f, 0f };
			Global_1632166.f_91[iVar0 /*8128*/].f_967[iVar1 /*28*/].f_6 = { 0f, 0f, 0f };
			Global_1632166.f_91[iVar0 /*8128*/].f_967[iVar1 /*28*/].f_9 = 0f;
			Global_1632166.f_91[iVar0 /*8128*/].f_967[iVar1 /*28*/].f_10 = 0f;
			Global_1632166.f_91[iVar0 /*8128*/].f_967[iVar1 /*28*/].f_19 = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_967[iVar1 /*28*/].f_17 = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_967[iVar1 /*28*/].f_13 = { 0f, 0f, 0f };
			Global_1632166.f_91[iVar0 /*8128*/].f_967[iVar1 /*28*/].f_18 = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_967[iVar1 /*28*/].f_20 = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_967[iVar1 /*28*/].f_21 = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_967[iVar1 /*28*/].f_22 = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_967[iVar1 /*28*/].f_23 = 120;
			Global_1632166.f_91[iVar0 /*8128*/].f_1444[iVar1 /*28*/].f_16 = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_1444[iVar1 /*28*/] = { 0f, 0f, 0f };
			Global_1632166.f_91[iVar0 /*8128*/].f_1444[iVar1 /*28*/].f_3 = { 0f, 0f, 0f };
			Global_1632166.f_91[iVar0 /*8128*/].f_1444[iVar1 /*28*/].f_6 = { 0f, 0f, 0f };
			Global_1632166.f_91[iVar0 /*8128*/].f_1444[iVar1 /*28*/].f_9 = 0f;
			Global_1632166.f_91[iVar0 /*8128*/].f_1444[iVar1 /*28*/].f_10 = 0f;
			Global_1632166.f_91[iVar0 /*8128*/].f_1444[iVar1 /*28*/].f_19 = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_1444[iVar1 /*28*/].f_17 = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_1444[iVar1 /*28*/].f_13 = { 0f, 0f, 0f };
			Global_1632166.f_91[iVar0 /*8128*/].f_1444[iVar1 /*28*/].f_18 = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_1444[iVar1 /*28*/].f_20 = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_1444[iVar1 /*28*/].f_21 = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_1444[iVar1 /*28*/].f_22 = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_1444[iVar1 /*28*/].f_23 = 120;
			Global_1632166.f_91[iVar0 /*8128*/].f_3915[iVar1] = 3f;
			Global_1632166.f_91[iVar0 /*8128*/].f_3382[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_3987[iVar1] = 10.5f;
			Global_1632166.f_91[iVar0 /*8128*/].f_4005[iVar1] = 1f;
			Global_1632166.f_91[iVar0 /*8128*/].f_4151[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_675[iVar1] = 12;
			Global_1632166.f_91[iVar0 /*8128*/].f_693[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_711[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_729[iVar1] = 12;
			Global_1632166.f_91[iVar0 /*8128*/].f_747[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_765[iVar1] = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_783[iVar1] = 100;
			Global_1632166.f_91[iVar0 /*8128*/].f_8090[iVar1] = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_2468[iVar1 /*8*/] = 1000;
			Global_1632166.f_91[iVar0 /*8128*/].f_2468[iVar1 /*8*/].f_1 = 1.15f;
			Global_1632166.f_91[iVar0 /*8128*/].f_2468[iVar1 /*8*/].f_2 = 25;
			Global_1632166.f_91[iVar0 /*8128*/].f_2468[iVar1 /*8*/].f_7 = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_2468[iVar1 /*8*/].f_3 = 1;
			Global_1632166.f_91[iVar0 /*8128*/].f_2468[iVar1 /*8*/].f_5 = 25;
			Global_1632166.f_91[iVar0 /*8128*/].f_2468[iVar1 /*8*/].f_6 = 10f;
			Global_1632166.f_91[iVar0 /*8128*/].f_2793[iVar1 /*3*/] = 0f;
			Global_1632166.f_91[iVar0 /*8128*/].f_2793[iVar1 /*3*/].f_1 = 1;
			Global_1632166.f_91[iVar0 /*8128*/].f_2793[iVar1 /*3*/].f_2 = 50;
			Global_1632166.f_91[iVar0 /*8128*/].f_2605[iVar1 /*11*/] = 0f;
			Global_1632166.f_91[iVar0 /*8128*/].f_2605[iVar1 /*11*/].f_1[0] = 0f;
			Global_1632166.f_91[iVar0 /*8128*/].f_2605[iVar1 /*11*/].f_1[1] = 0f;
			Global_1632166.f_91[iVar0 /*8128*/].f_2605[iVar1 /*11*/].f_1[2] = 0f;
			Global_1632166.f_91[iVar0 /*8128*/].f_2605[iVar1 /*11*/].f_1[3] = 0f;
			Global_1632166.f_91[iVar0 /*8128*/].f_2605[iVar1 /*11*/].f_6 = 0f;
			Global_1632166.f_91[iVar0 /*8128*/].f_2605[iVar1 /*11*/].f_7 = 0f;
			Global_1632166.f_91[iVar0 /*8128*/].f_2605[iVar1 /*11*/].f_8 = 0f;
			Global_1632166.f_91[iVar0 /*8128*/].f_2605[iVar1 /*11*/].f_9 = 0f;
			Global_1632166.f_91[iVar0 /*8128*/].f_2605[iVar1 /*11*/].f_10 = 0f;
			Global_1632166.f_91[iVar0 /*8128*/].f_2914[iVar1 /*3*/] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_2914[iVar1 /*3*/].f_1 = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_2914[iVar1 /*3*/].f_2 = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_7575[iVar1 /*5*/][0] = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_7575[iVar1 /*5*/][1] = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_7575[iVar1 /*5*/][2] = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_7575[iVar1 /*5*/][3] = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_7661[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_7679[iVar1 /*4*/][0] = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_7679[iVar1 /*4*/][1] = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_7679[iVar1 /*4*/][2] = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_7748[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_4025[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_7982[iVar1] = 0;
			Global_1632166.f_91[iVar0 /*8128*/].f_8000[iVar1] = -1;
			Global_1632166.f_91[iVar0 /*8128*/].f_8018[iVar1] = 0;
			func_226(&(Global_1632166.f_91[iVar0 /*8128*/].f_2845[iVar1 /*4*/]));
			iVar1++;
		}
		Global_1632166.f_91[iVar0 /*8128*/].f_2967 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_3193 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_2966 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_3192 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_2969 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_2970 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_2971 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_2972 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_2973 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_3195 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_963 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_964 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_352 = -1;
		Global_1632166.f_91[iVar0 /*8128*/].f_353 = -1;
		Global_1632166.f_91[iVar0 /*8128*/].f_499 = -1;
		Global_1632166.f_91[iVar0 /*8128*/].f_500 = -1;
		Global_1632166.f_91[iVar0 /*8128*/].f_4520 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_4521 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_4522 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_4523 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_4524 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_4525 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_4526 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_4527 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_4528 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_4529 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_4530 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_4531 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_4532 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_4533 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_4534 = 0;
		Global_1632166.f_91[iVar0 /*8128*/].f_4535 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1632166.f_77781[iVar0] = 0;
		Global_1632166.f_77786[iVar0] = 0;
		iVar0++;
	}
	Global_1632166.f_77797 = 0;
	Global_1632166.f_77798 = 0;
	Global_1632166.f_77799 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		Global_1632166.f_77800[iVar0] = 0;
		Global_1632166.f_77811[iVar0] = 0;
		Global_1632166.f_77822[iVar0] = 0;
		iVar0++;
	}
	Global_1632166.f_65 = { 0f, 0f, 0f };
	Global_1632166.f_34302 = { 0f, 0f, 0f };
	Global_1632166.f_88 = 0f;
	Global_1632166.f_99830 = { 0f, 0f, 0f };
	Global_1632166.f_105263 = 0;
	Global_1632166.f_105285 = 0;
	Global_1632166.f_86953[0] = 0;
	Global_1632166.f_86953[1] = 0;
	Global_1632166.f_86956 = 0;
	Global_1632166.f_86952 = 0;
	Global_1632166.f_100417 = 0;
	Global_1632166.f_100418 = 0;
	Global_1632166.f_100419 = 0;
	Global_1632166.f_100420 = 0;
	Global_1632166.f_100422 = 0;
	Global_1632166.f_100424 = 0;
	Global_1632166.f_100426 = 0;
	Global_1632166.f_100429 = 0;
	Global_1632166.f_100430 = 0;
	Global_1632166.f_100431 = 0;
	Global_1632166.f_100432 = 0;
	Global_1632166.f_100433 = 0;
	Global_1632166.f_100434 = 0;
	Global_1632166.f_100440 = -1;
	Global_1632166.f_100441 = -1;
	Global_1632166.f_100442 = -1;
	Global_1632166.f_100443 = -1;
	Global_1632166.f_100444 = -1;
	Global_1632166.f_100445 = -1;
	Global_1632166.f_100446 = -1;
	Global_1632166.f_100447 = -1;
	Global_1632166.f_100448 = -1;
	Global_1632166.f_100449 = -1;
	Global_1632166.f_100450 = 1.5f;
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		Global_1632166.f_35006[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1632166.f_36060[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1632166.f_34305[iVar0 /*10*/][0 /*3*/] = { 0f, 0f, 0f };
		Global_1632166.f_34305[iVar0 /*10*/][1 /*3*/] = { 0f, 0f, 0f };
		Global_1632166.f_34305[iVar0 /*10*/][2 /*3*/] = { 0f, 0f, 0f };
		Global_1632166.f_35359[iVar0 /*10*/][0 /*3*/] = { 0f, 0f, 0f };
		Global_1632166.f_35359[iVar0 /*10*/][1 /*3*/] = { 0f, 0f, 0f };
		Global_1632166.f_35359[iVar0 /*10*/][2 /*3*/] = { 0f, 0f, 0f };
		Global_1632166.f_35217[iVar0] = 0f;
		Global_1632166.f_35288[iVar0] = 0;
		Global_1632166.f_36342[iVar0] = 0;
		Global_1632166.f_36271[iVar0] = 0f;
		Global_1632166.f_36484[iVar0] = 0;
		Global_1632166.f_36555[iVar0] = 0;
		Global_1632166.f_37474[iVar0] = 0;
		Global_1632166.f_37616[iVar0] = 1f;
		Global_1632166.f_36626[iVar0] = 0;
		Global_1632166.f_36768[iVar0] = 0;
		Global_1632166.f_36697[iVar0] = -1;
		Global_1632166.f_36839[iVar0] = 0;
		Global_1632166.f_37545[iVar0] = 0f;
		Global_1632166.f_36910[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1632166.f_37121[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
	Global_1632166.f_40138 = 0;
	if (bParam0)
	{
		Global_1632166.f_40139 = 0;
		Global_1632166.f_40147 = 0;
	}
	Global_1632166.f_40145 = 0;
	Global_1632166.f_40146 = 0;
	Global_1632166.f_40727 = 0f;
	Global_1632166.f_43047 = 0;
	iVar0 = 0;
	while (iVar0 <= 149)
	{
		Global_1632166.f_43048[iVar0 /*59*/] = { 0f, 0f, 0f };
		Global_1632166.f_43048[iVar0 /*59*/].f_6 = 0f;
		Global_1632166.f_43048[iVar0 /*59*/].f_7 = 0;
		Global_1632166.f_43048[iVar0 /*59*/].f_9 = -1;
		Global_1632166.f_43048[iVar0 /*59*/].f_8 = -1;
		Global_1632166.f_43048[iVar0 /*59*/].f_10 = 1;
		Global_1632166.f_43048[iVar0 /*59*/].f_19 = 0;
		Global_1632166.f_43048[iVar0 /*59*/].f_12 = 0;
		Global_1632166.f_43048[iVar0 /*59*/].f_13 = 0;
		Global_1632166.f_43048[iVar0 /*59*/].f_14 = 0;
		Global_1632166.f_43048[iVar0 /*59*/].f_15 = -1;
		Global_1632166.f_43048[iVar0 /*59*/].f_11 = 0;
		Global_1632166.f_43048[iVar0 /*59*/].f_45 = 0;
		Global_1632166.f_43048[iVar0 /*59*/].f_46 = 0;
		Global_1632166.f_43048[iVar0 /*59*/].f_47 = 0;
		Global_1632166.f_43048[iVar0 /*59*/].f_16 = -1;
		Global_1632166.f_43048[iVar0 /*59*/].f_17 = -1;
		Global_1632166.f_43048[iVar0 /*59*/].f_18 = -1;
		Global_1632166.f_43048[iVar0 /*59*/].f_20 = -1;
		Global_1632166.f_43048[iVar0 /*59*/].f_48 = -1;
		Global_1632166.f_43048[iVar0 /*59*/].f_21 = -1;
		Global_1632166.f_43048[iVar0 /*59*/].f_22 = 0;
		Global_1632166.f_43048[iVar0 /*59*/].f_23 = 0;
		Global_1632166.f_43048[iVar0 /*59*/].f_24 = 1;
		Global_1632166.f_43048[iVar0 /*59*/].f_34 = 10f;
		Global_1632166.f_43048[iVar0 /*59*/].f_35 = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		func_225(&(Global_1632166.f_102770[iVar0 /*244*/]));
		iVar0++;
	}
	Global_1632166.f_105211 = 0;
	Global_1632166.f_51974 = 0;
	Global_1632166.f_51975 = 0;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_1632166.f_51976[iVar0 /*31*/] = { 0f, 0f, 0f };
		Global_1632166.f_51976[iVar0 /*31*/].f_6 = 0f;
		Global_1632166.f_51976[iVar0 /*31*/].f_7 = 0;
		Global_1632166.f_51976[iVar0 /*31*/].f_8 = -1;
		Global_1632166.f_51976[iVar0 /*31*/].f_12 = -1;
		Global_1632166.f_51976[iVar0 /*31*/].f_11 = -1;
		Global_1632166.f_51976[iVar0 /*31*/].f_13 = 1;
		Global_1632166.f_51976[iVar0 /*31*/].f_18 = 0;
		Global_1632166.f_51976[iVar0 /*31*/].f_14 = 0;
		Global_1632166.f_51976[iVar0 /*31*/].f_28 = 0;
		Global_1632166.f_51976[iVar0 /*31*/].f_29 = 0;
		Global_1632166.f_51976[iVar0 /*31*/].f_30 = 0;
		Global_1632166.f_51976[iVar0 /*31*/].f_15 = -1;
		Global_1632166.f_51976[iVar0 /*31*/].f_16 = -1;
		Global_1632166.f_51976[iVar0 /*31*/].f_17 = -1;
		Global_1632166.f_51976[iVar0 /*31*/].f_9 = 0;
		Global_1632166.f_51976[iVar0 /*31*/].f_10 = 1;
		iVar0++;
	}
	Global_1632166.f_42722 = 0;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Global_1632166.f_42723[iVar0 /*19*/] = { 0f, 0f, 0f };
		Global_1632166.f_42723[iVar0 /*19*/].f_3 = 0f;
		Global_1632166.f_42723[iVar0 /*19*/].f_4 = 0;
		Global_1632166.f_42723[iVar0 /*19*/].f_14 = 0;
		Global_1632166.f_42723[iVar0 /*19*/].f_12 = 0;
		Global_1632166.f_42723[iVar0 /*19*/].f_15 = 0;
		Global_1632166.f_42723[iVar0 /*19*/].f_16 = 0;
		Global_1632166.f_42723[iVar0 /*19*/].f_6 = -1;
		Global_1632166.f_42723[iVar0 /*19*/].f_5 = -1;
		Global_1632166.f_42723[iVar0 /*19*/].f_13 = 0f;
		Global_1632166.f_42723[iVar0 /*19*/].f_8 = 0f;
		Global_1632166.f_42723[iVar0 /*19*/].f_9 = 0f;
		Global_1632166.f_42723[iVar0 /*19*/].f_10 = 0f;
		Global_1632166.f_42723[iVar0 /*19*/].f_11 = 0f;
		Global_1632166.f_42723[iVar0 /*19*/].f_7 = 0;
		Global_1632166.f_42723[iVar0 /*19*/].f_17 = 0;
		Global_1632166.f_42723[iVar0 /*19*/].f_18 = 0;
		iVar0++;
	}
	Global_1632166.f_43009 = 0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		Global_1632166.f_43010[iVar0 /*7*/] = { 0f, 0f, 0f };
		Global_1632166.f_43010[iVar0 /*7*/].f_3 = 0f;
		Global_1632166.f_43010[iVar0 /*7*/].f_4 = 0;
		Global_1632166.f_43010[iVar0 /*7*/].f_5 = 0;
		Global_1632166.f_43010[iVar0 /*7*/].f_6 = 0;
		iVar0++;
	}
	if (bParam0)
	{
		Global_1632166.f_40728 = 3.5f;
		Global_1632166.f_40729 = 7f;
		Global_1632166.f_40730 = 0f;
		Global_1632166.f_40731 = 0f;
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			Global_1632166.f_40735[iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			Global_1632166.f_40773[iVar0] = -1;
			iVar0++;
		}
	}
	Global_1632166.f_86990 = -1;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1632166.f_40127[iVar0] = 0;
		Global_1632166.f_90790[iVar0] = -1;
		Global_1632166.f_90835[iVar0] = -1;
		iVar1 = 0;
		while (iVar1 <= 16)
		{
			Global_1632166.f_39633[iVar1 /*29*/][iVar0] = 0;
			Global_1632166.f_39633[iVar1 /*29*/].f_5[iVar0] = 99999;
			Global_1632166.f_39633[iVar1 /*29*/].f_10[iVar0] = 0;
			Global_1632166.f_39633[iVar1 /*29*/].f_15[iVar0] = 0;
			Global_1632166.f_39633[iVar1 /*29*/].f_20[iVar0] = 0;
			iVar1++;
		}
		Global_1632166.f_100200[iVar0] = 0;
		iVar0++;
	}
	if (bParam0)
	{
		Global_1632166.f_40784 = 1;
	}
	Global_1632166.f_40786 = 0;
	Global_1632166.f_40787 = 0;
	Global_1632166.f_40788 = 0;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_1632166.f_40789[iVar0 /*92*/] = { 0f, 0f, 0f };
		Global_1632166.f_40789[iVar0 /*92*/].f_4 = { 0f, 0f, 0f };
		Global_1632166.f_40789[iVar0 /*92*/].f_3 = 0f;
		Global_1632166.f_40789[iVar0 /*92*/].f_7 = 50f;
		Global_1632166.f_40789[iVar0 /*92*/].f_8 = 0f;
		Global_1632166.f_40789[iVar0 /*92*/].f_9 = 0;
		Global_1632166.f_40789[iVar0 /*92*/].f_10 = -1;
		Global_1632166.f_40789[iVar0 /*92*/].f_11 = { 0f, 0f, 0f };
		Global_1632166.f_40789[iVar0 /*92*/].f_14 = 0f;
		Global_1632166.f_40789[iVar0 /*92*/].f_15 = 0;
		Global_1632166.f_40789[iVar0 /*92*/].f_16 = 0;
		Global_1632166.f_40789[iVar0 /*92*/].f_27 = 0;
		Global_1632166.f_40789[iVar0 /*92*/].f_29 = 0;
		Global_1632166.f_40789[iVar0 /*92*/].f_30 = 0;
		Global_1632166.f_40789[iVar0 /*92*/].f_31 = -1;
		Global_1632166.f_40789[iVar0 /*92*/].f_44 = 0;
		Global_1632166.f_40789[iVar0 /*92*/].f_43 = 0;
		Global_1632166.f_40789[iVar0 /*92*/].f_45 = 0;
		Global_1632166.f_40789[iVar0 /*92*/].f_46 = 0;
		Global_1632166.f_40789[iVar0 /*92*/].f_47 = 0;
		Global_1632166.f_40789[iVar0 /*92*/].f_48 = 0;
		Global_1632166.f_40789[iVar0 /*92*/].f_49 = 60;
		Global_1632166.f_40789[iVar0 /*92*/].f_50 = 0;
		Global_1632166.f_40789[iVar0 /*92*/].f_37 = 0;
		Global_1632166.f_40789[iVar0 /*92*/].f_32 = -1;
		Global_1632166.f_40789[iVar0 /*92*/].f_33 = -1;
		Global_1632166.f_40789[iVar0 /*92*/].f_34 = 0;
		Global_1632166.f_40789[iVar0 /*92*/].f_55 = 0;
		Global_1632166.f_40789[iVar0 /*92*/].f_35 = 0;
		Global_1632166.f_40789[iVar0 /*92*/].f_51 = -1;
		Global_1632166.f_40789[iVar0 /*92*/].f_52 = -1;
		Global_1632166.f_40789[iVar0 /*92*/].f_53 = -1;
		Global_1632166.f_40789[iVar0 /*92*/].f_83 = -1;
		Global_1632166.f_40789[iVar0 /*92*/].f_84 = -1;
		Global_1632166.f_40789[iVar0 /*92*/].f_85 = { 0f, 0f, 0f };
		Global_1632166.f_40789[iVar0 /*92*/].f_88 = 0;
		Global_1632166.f_40789[iVar0 /*92*/].f_81 = -1;
		Global_1632166.f_40789[iVar0 /*92*/].f_82 = -1;
		Global_1632166.f_40789[iVar0 /*92*/].f_89 = -1;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1632166.f_40789[iVar0 /*92*/].f_17[iVar1] = 0;
			Global_1632166.f_40789[iVar0 /*92*/].f_22[iVar1] = 99999;
			Global_1632166.f_40789[iVar0 /*92*/].f_65[iVar1] = 0;
			Global_1632166.f_40789[iVar0 /*92*/].f_70[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		StringCopy(&(Global_1632166.f_99848[iVar0 /*18*/]), "", 64);
		Global_1632166.f_99848[iVar0 /*18*/].f_16 = 0;
		Global_1632166.f_99848[iVar0 /*18*/].f_17 = -1;
		iVar0++;
	}
	Global_1632166.f_52628 = 0;
	Global_1632166.f_52629 = 0;
	if (bParam0)
	{
		if (func_125() && !func_175())
		{
			Global_1632166.f_52630 = -1;
		}
		else
		{
			Global_1632166.f_52630 = 0;
		}
	}
	Global_1632166.f_52631 = 0;
	iVar0 = 0;
	while (iVar0 <= 59)
	{
		Global_1632166.f_52632[iVar0 /*40*/] = { 0f, 0f, 0f };
		Global_1632166.f_52632[iVar0 /*40*/].f_3 = 0f;
		Global_1632166.f_52632[iVar0 /*40*/].f_13 = 77;
		Global_1632166.f_52632[iVar0 /*40*/].f_4 = 0;
		Global_1632166.f_52632[iVar0 /*40*/].f_5 = 0;
		Global_1632166.f_52632[iVar0 /*40*/].f_21 = -1;
		Global_1632166.f_52632[iVar0 /*40*/].f_22 = -1;
		Global_1632166.f_52632[iVar0 /*40*/].f_7 = 1f;
		Global_1632166.f_52632[iVar0 /*40*/].f_24 = -1;
		Global_1632166.f_52632[iVar0 /*40*/].f_25 = -1;
		Global_1632166.f_52632[iVar0 /*40*/].f_26 = 0;
		Global_1632166.f_52632[iVar0 /*40*/].f_33 = -1;
		Global_1632166.f_52632[iVar0 /*40*/].f_30 = -1;
		Global_1632166.f_52632[iVar0 /*40*/].f_36 = 0;
		Global_1632166.f_52632[iVar0 /*40*/].f_34 = -1;
		Global_1632166.f_52632[iVar0 /*40*/].f_31 = -1;
		Global_1632166.f_52632[iVar0 /*40*/].f_37 = 0;
		Global_1632166.f_52632[iVar0 /*40*/].f_35 = -1;
		Global_1632166.f_52632[iVar0 /*40*/].f_32 = -1;
		Global_1632166.f_52632[iVar0 /*40*/].f_38 = 0;
		Global_1632166.f_52632[iVar0 /*40*/].f_27 = -1;
		Global_1632166.f_52632[iVar0 /*40*/].f_28 = -1;
		Global_1632166.f_52632[iVar0 /*40*/].f_29 = 0;
		Global_1632166.f_52632[iVar0 /*40*/].f_39 = 0;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1632166.f_52632[iVar0 /*40*/].f_8[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	func_224();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_1632166.f_77791[iVar0] = -1;
		iVar0++;
	}
	Global_1632166.f_87004 = -1;
	Global_1632166.f_87005 = 15;
	Global_1632166.f_87006 = -1;
	Global_1632166.f_87011 = -1;
	Global_1632166.f_87012 = 0;
	Global_1632166.f_87007 = 2.5f;
	Global_1632166.f_87008 = 8f;
	Global_1632166.f_87009 = 2.5f;
	Global_1632166.f_87010 = 8f;
	Global_1632166.f_55074 = 0;
	Global_1632166.f_43046 = 0;
	if (bParam0)
	{
		Global_1632166.f_40734 = -1;
		Global_1632166.f_40143 = -1;
	}
	Global_1632166.f_55075 = 0;
	Global_1632166.f_55076 = 0;
	Global_1632166.f_55077 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_1632166.f_55078[iVar0 /*137*/] = { 0f, 0f, 0f };
		Global_1632166.f_55078[iVar0 /*137*/].f_3 = 0f;
		Global_1632166.f_55078[iVar0 /*137*/].f_4 = 50f;
		Global_1632166.f_55078[iVar0 /*137*/].f_5 = 0f;
		Global_1632166.f_55078[iVar0 /*137*/].f_6 = 0;
		Global_1632166.f_55078[iVar0 /*137*/].f_7 = -1;
		Global_1632166.f_55078[iVar0 /*137*/].f_8 = { 0f, 0f, 0f };
		Global_1632166.f_55078[iVar0 /*137*/].f_11 = 0f;
		Global_1632166.f_55078[iVar0 /*137*/].f_12 = 0;
		Global_1632166.f_55078[iVar0 /*137*/].f_23 = -1;
		Global_1632166.f_55078[iVar0 /*137*/].f_24 = -1;
		Global_1632166.f_55078[iVar0 /*137*/].f_25 = -1;
		Global_1632166.f_55078[iVar0 /*137*/].f_26 = -1;
		Global_1632166.f_55078[iVar0 /*137*/].f_30 = 0;
		Global_1632166.f_55078[iVar0 /*137*/].f_31 = 100;
		Global_1632166.f_55078[iVar0 /*137*/].f_32 = 1001f;
		Global_1632166.f_55078[iVar0 /*137*/].f_33 = 1001f;
		Global_1632166.f_55078[iVar0 /*137*/].f_35 = 1.5f;
		Global_1632166.f_55078[iVar0 /*137*/].f_44 = 0;
		Global_1632166.f_55078[iVar0 /*137*/].f_111 = 0;
		Global_1632166.f_55078[iVar0 /*137*/].f_45 = 0;
		Global_1632166.f_55078[iVar0 /*137*/].f_46 = 0;
		Global_1632166.f_55078[iVar0 /*137*/].f_27 = -1;
		Global_1632166.f_55078[iVar0 /*137*/].f_28 = -1;
		Global_1632166.f_55078[iVar0 /*137*/].f_29 = 0f;
		Global_1632166.f_55078[iVar0 /*137*/].f_50 = 0;
		Global_1632166.f_55078[iVar0 /*137*/].f_39 = -1;
		Global_1632166.f_55078[iVar0 /*137*/].f_40 = -1;
		Global_1632166.f_55078[iVar0 /*137*/].f_41 = 0;
		Global_1632166.f_55078[iVar0 /*137*/].f_63 = -1;
		Global_1632166.f_55078[iVar0 /*137*/].f_64 = -1;
		Global_1632166.f_55078[iVar0 /*137*/].f_66 = -1;
		Global_1632166.f_55078[iVar0 /*137*/].f_109 = -1;
		Global_1632166.f_55078[iVar0 /*137*/].f_108 = -1;
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			Global_1632166.f_55078[iVar0 /*137*/].f_112[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1632166.f_55078[iVar0 /*137*/].f_119[iVar1] = 0f;
			iVar1++;
		}
		Global_1632166.f_55078[iVar0 /*137*/].f_65 = -1;
		Global_1632166.f_55078[iVar0 /*137*/].f_72 = 0;
		Global_1632166.f_55078[iVar0 /*137*/].f_42 = 0;
		Global_1632166.f_55078[iVar0 /*137*/].f_122 = 0;
		Global_1632166.f_55078[iVar0 /*137*/].f_127 = -1;
		Global_1632166.f_55078[iVar0 /*137*/].f_128 = { 0f, 0f, 0f };
		Global_1632166.f_55078[iVar0 /*137*/].f_131 = -1;
		Global_1632166.f_55078[iVar0 /*137*/].f_124 = -1f;
		Global_1632166.f_55078[iVar0 /*137*/].f_123 = -1;
		Global_1632166.f_55078[iVar0 /*137*/].f_126 = 0;
		Global_1632166.f_55078[iVar0 /*137*/].f_36 = 0;
		Global_1632166.f_55078[iVar0 /*137*/].f_37 = 5;
		Global_1632166.f_55078[iVar0 /*137*/].f_136 = -1;
		Global_1632166.f_55078[iVar0 /*137*/].f_125 = 10;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1632166.f_55078[iVar0 /*137*/].f_13[iVar1] = 0;
			Global_1632166.f_55078[iVar0 /*137*/].f_18[iVar1] = 99999;
			Global_1632166.f_55078[iVar0 /*137*/].f_102[iVar1] = 0;
			Global_1632166.f_55078[iVar0 /*137*/].f_85[iVar1] = 0;
			Global_1632166.f_55078[iVar0 /*137*/].f_90[iVar1] = 0;
			Global_1632166.f_55078[iVar0 /*137*/].f_53[iVar1] = -1;
			Global_1632166.f_55078[iVar0 /*137*/].f_58[iVar1] = -1;
			Global_1632166.f_55078[iVar0 /*137*/].f_67[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	Global_1632166.f_85934 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		Global_1632166.f_85935[iVar0 /*9*/] = { 0f, 0f, 0f };
		Global_1632166.f_85935[iVar0 /*9*/].f_3 = { 0f, 0f, 0f };
		Global_1632166.f_85935[iVar0 /*9*/].f_6 = { 0f, 0f, 0f };
		iVar0++;
	}
	Global_1632166.f_77914 = 0;
	iVar0 = 0;
	while (iVar0 <= 59)
	{
		Global_1632166.f_77921[iVar0 /*15*/] = { 0f, 0f, 0f };
		Global_1632166.f_77921[iVar0 /*15*/].f_3 = 0f;
		Global_1632166.f_77921[iVar0 /*15*/].f_4 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1632166.f_77915[iVar0] = 0;
		iVar1 = 0;
		while (iVar1 <= 59)
		{
			Global_1632166.f_78822[iVar0 /*901*/][iVar1 /*15*/] = { 0f, 0f, 0f };
			Global_1632166.f_78822[iVar0 /*901*/][iVar1 /*15*/].f_3 = 0f;
			Global_1632166.f_78822[iVar0 /*901*/][iVar1 /*15*/].f_4 = 0;
			Global_1632166.f_78822[iVar0 /*901*/][iVar1 /*15*/].f_5 = 0;
			Global_1632166.f_78822[iVar0 /*901*/][iVar1 /*15*/].f_7 = -1;
			Global_1632166.f_78822[iVar0 /*901*/][iVar1 /*15*/].f_8 = 0;
			Global_1632166.f_78822[iVar0 /*901*/][iVar1 /*15*/].f_9 = -1;
			Global_1632166.f_78822[iVar0 /*901*/][iVar1 /*15*/].f_10 = 0;
			Global_1632166.f_78822[iVar0 /*901*/][iVar1 /*15*/].f_11 = 0;
			Global_1632166.f_78822[iVar0 /*901*/][iVar1 /*15*/].f_12 = 0;
			Global_1632166.f_78822[iVar0 /*901*/][iVar1 /*15*/].f_13 = 0;
			Global_1632166.f_78822[iVar0 /*901*/][iVar1 /*15*/].f_14 = 0;
			iVar1++;
		}
		iVar0++;
	}
	Global_1632166.f_59748 = 0;
	Global_1632166.f_59751 = 0;
	Global_1632166.f_59752 = 0;
	Global_1632166.f_59749 = 50;
	iVar0 = 0;
	while (iVar0 <= 58)
	{
		Global_1632166.f_59753[iVar0 /*298*/].f_39 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_49 = 0;
		Global_1632166.f_59753[iVar0 /*298*/] = { 0f, 0f, 0f };
		Global_1632166.f_59753[iVar0 /*298*/].f_3 = 0f;
		Global_1632166.f_59753[iVar0 /*298*/].f_4 = 0.75f;
		Global_1632166.f_59753[iVar0 /*298*/].f_14 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_15 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_16 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_32 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_36 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_37 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_38 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_215 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_214 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_216 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_217 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_218 = 20;
		Global_1632166.f_59753[iVar0 /*298*/].f_226 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_56 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_47 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_34 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_35 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_48 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_188 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_189 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_190 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_191 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_192 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_193 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_194 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_195 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_33 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_13 = 0f;
		Global_1632166.f_59753[iVar0 /*298*/].f_5 = 50f;
		Global_1632166.f_59753[iVar0 /*298*/].f_6 = 0f;
		Global_1632166.f_59753[iVar0 /*298*/].f_7 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_8 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_9 = { 0f, 0f, 0f };
		Global_1632166.f_59753[iVar0 /*298*/].f_12 = 0f;
		Global_1632166.f_59753[iVar0 /*298*/].f_175 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_63 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_167 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_168 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_169 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_175 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_185 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_176 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_184 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_64 = { 0f, 0f, 0f };
		Global_1632166.f_59753[iVar0 /*298*/].f_57 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_58 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_62 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_59 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_252 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_263 = 1f;
		Global_1632166.f_59753[iVar0 /*298*/].f_264 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_80 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_201 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_52 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_202 = 250;
		Global_1632166.f_59753[iVar0 /*298*/].f_205 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_206 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_269 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_207 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_270 = 4;
		Global_1632166.f_59753[iVar0 /*298*/].f_237 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_153 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_154 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_155 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_227 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_228 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_229 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_266 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_265 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_267 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_268 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_156 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_157 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_60 = 0;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1632166.f_59753[iVar0 /*298*/].f_17[iVar1] = 0;
			Global_1632166.f_59753[iVar0 /*298*/].f_22[iVar1] = 2;
			Global_1632166.f_59753[iVar0 /*298*/].f_27[iVar1] = 99999;
			Global_1632166.f_59753[iVar0 /*298*/].f_196[iVar1] = -1;
			Global_1632166.f_59753[iVar0 /*298*/].f_238[iVar1] = 0;
			Global_1632166.f_59753[iVar0 /*298*/].f_243[iVar1] = 0;
			Global_1632166.f_59753[iVar0 /*298*/].f_253[iVar1] = -1;
			Global_1632166.f_59753[iVar0 /*298*/].f_258[iVar1] = -1;
			Global_1632166.f_59753[iVar0 /*298*/].f_272[iVar1] = -2;
			Global_1632166.f_59753[iVar0 /*298*/].f_170[iVar1] = 0;
			Global_1632166.f_59753[iVar0 /*298*/].f_231[iVar1] = 0;
			iVar1++;
		}
		Global_1632166.f_59753[iVar0 /*298*/].f_115[0] = 0f;
		Global_1632166.f_59753[iVar0 /*298*/].f_121[0] = 0f;
		Global_1632166.f_59753[iVar0 /*298*/].f_133[0] = 0f;
		Global_1632166.f_59753[iVar0 /*298*/].f_81[0] = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_87[0] = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_93[0 /*3*/] = { 0f, 0f, 0f };
		Global_1632166.f_59753[iVar0 /*298*/].f_109[0] = 3;
		Global_1632166.f_59753[iVar0 /*298*/].f_127[0] = -1;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1632166.f_59753[iVar0 /*298*/].f_67[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1632166.f_59753[iVar0 /*298*/].f_81[iVar1 + 1] = 0;
			Global_1632166.f_59753[iVar0 /*298*/].f_115[iVar1 + 1] = 0f;
			Global_1632166.f_59753[iVar0 /*298*/].f_121[iVar1 + 1] = 0f;
			Global_1632166.f_59753[iVar0 /*298*/].f_133[iVar1 + 1] = 0f;
			Global_1632166.f_59753[iVar0 /*298*/].f_87[iVar1 + 1] = -1;
			Global_1632166.f_59753[iVar0 /*298*/].f_93[iVar1 + 1 /*3*/] = { 0f, 0f, 0f };
			Global_1632166.f_59753[iVar0 /*298*/].f_109[iVar1 + 1] = 3;
			Global_1632166.f_59753[iVar0 /*298*/].f_127[iVar1 + 1] = -1;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			Global_1632166.f_59753[iVar0 /*298*/].f_139[iVar1] = 0f;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			Global_1632166.f_59753[iVar0 /*298*/].f_285[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1632166.f_59753[iVar0 /*298*/].f_292[iVar1] = 0f;
			iVar1++;
		}
		Global_1632166.f_59753[iVar0 /*298*/].f_186 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_187 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_271 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_277 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_278 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_279 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_283 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_280 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_281 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_282 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_284 = -1;
		Global_1632166.f_59753[iVar0 /*298*/].f_296 = 0;
		Global_1632166.f_59753[iVar0 /*298*/].f_297 = 0;
		iVar0++;
	}
	Global_1632166.f_77914 = 0;
	iVar0 = 0;
	while (iVar0 <= 59)
	{
		Global_1632166.f_77921[iVar0 /*15*/] = { 0f, 0f, 0f };
		Global_1632166.f_77921[iVar0 /*15*/].f_3 = 0f;
		Global_1632166.f_77921[iVar0 /*15*/].f_4 = 0;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		Global_1632166.f_40133[iVar1] = 0;
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Global_1632166.f_37688[iVar0 /*108*/].f_53 = 0;
		Global_1632166.f_37688[iVar0 /*108*/].f_46 = 0;
		Global_1632166.f_37688[iVar0 /*108*/].f_20 = 0f;
		Global_1632166.f_37688[iVar0 /*108*/].f_28 = 0f;
		Global_1632166.f_37688[iVar0 /*108*/].f_29 = 0f;
		Global_1632166.f_37688[iVar0 /*108*/].f_30 = 0f;
		Global_1632166.f_37688[iVar0 /*108*/].f_55 = 0f;
		Global_1632166.f_37688[iVar0 /*108*/].f_56 = 0f;
		Global_1632166.f_37688[iVar0 /*108*/] = 0;
		Global_1632166.f_37688[iVar0 /*108*/].f_21 = { 0f, 0f, 0f };
		Global_1632166.f_37688[iVar0 /*108*/].f_24 = { 0f, 0f, 0f };
		Global_1632166.f_37688[iVar0 /*108*/].f_27 = 1f;
		Global_1632166.f_37688[iVar0 /*108*/].f_97 = 10.5f;
		Global_1632166.f_37688[iVar0 /*108*/].f_99 = 1f;
		Global_1632166.f_37688[iVar0 /*108*/].f_100 = 0f;
		Global_1632166.f_37688[iVar0 /*108*/].f_101 = 0;
		Global_1632166.f_37688[iVar0 /*108*/].f_96 = 0;
		Global_1632166.f_37688[iVar0 /*108*/].f_54 = 0;
		Global_1632166.f_37688[iVar0 /*108*/].f_19 = 1f;
		Global_1632166.f_37688[iVar0 /*108*/].f_102 = -1;
		Global_1632166.f_37688[iVar0 /*108*/].f_103 = -1f;
		Global_1632166.f_37688[iVar0 /*108*/].f_104 = 0f;
		Global_1632166.f_37688[iVar0 /*108*/].f_105 = 0f;
		Global_1632166.f_37688[iVar0 /*108*/].f_106 = -1;
		Global_1632166.f_37688[iVar0 /*108*/].f_47 = 0;
		if (Global_1632166.f_37688[iVar0 /*108*/].f_107 != 0)
		{
			unk_0x0EA596DC5E9AC3D5(Global_1632166.f_37688[iVar0 /*108*/].f_107);
			Global_1632166.f_37688[iVar0 /*108*/].f_107 = 0;
		}
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1632166.f_37688[iVar0 /*108*/].f_1[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1632166.f_37688[iVar0 /*108*/].f_14[iVar1] = 0f;
			Global_1632166.f_37688[iVar0 /*108*/].f_36[iVar1] = 0;
			Global_1632166.f_37688[iVar0 /*108*/].f_41[iVar1] = 0;
			Global_1632166.f_37688[iVar0 /*108*/].f_31[iVar1] = 0;
			Global_1632166.f_37688[iVar0 /*108*/].f_62[iVar1] = 0;
			Global_1632166.f_37688[iVar0 /*108*/].f_67[iVar1] = 99999;
			Global_1632166.f_37688[iVar0 /*108*/].f_72[iVar1] = 0;
			Global_1632166.f_37688[iVar0 /*108*/].f_77[iVar1] = 0;
			Global_1632166.f_37688[iVar0 /*108*/].f_57[iVar1] = 0;
			Global_1632166.f_37688[iVar0 /*108*/].f_82[iVar1] = 0;
			Global_1632166.f_37688[iVar0 /*108*/].f_87[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	Global_1632166.f_85932 = 0;
	Global_1632166.f_42 = 0;
	Global_1632166.f_102224 = 12;
	Global_1632166.f_102225 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1632166.f_99834[iVar0] = -1;
		Global_1632166.f_99839[iVar0] = -1;
		iVar0++;
	}
	Global_1632166.f_40785 = 0;
	Global_1632166.f_100435 = -1;
	Global_1632166.f_99844 = 0;
	Global_1632166.f_99833 = 0;
	Global_1632166.f_99846 = 0;
	Global_1632166.f_99845 = 0;
	Global_1632166.f_99847 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Global_1632166.f_105297[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1632166.f_86963[iVar0] = 0;
		iVar0++;
	}
	iVar3 = 0;
	while (iVar3 <= 29)
	{
		Global_1632166.f_82808[iVar3] = -1;
		Global_1632166.f_82777[iVar3] = -1;
		iVar4 = 0;
		while (iVar4 <= 9)
		{
			iVar5 = 0;
			while (iVar5 <= 3)
			{
				Global_1632166.f_82839[iVar3 /*51*/][iVar4 /*5*/][iVar5] = -1;
				Global_1632166.f_84370[iVar3 /*51*/][iVar4 /*5*/][iVar5] = -1;
				iVar5++;
			}
			iVar4++;
		}
		iVar3++;
	}
	Global_1632166.f_105386 = 0;
	Global_1632166.f_105397 = { 0f, 0f, 0f };
	Global_1632166.f_105400 = { 0f, 0f, 0f };
	func_206();
}

void func_224()
{
	int iVar0;
	int iVar1;
	
	Global_1632166.f_86668 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		Global_1632166.f_86691[iVar0 /*26*/][0 /*3*/] = { 0f, 0f, 0f };
		Global_1632166.f_86691[iVar0 /*26*/][1 /*3*/] = { 0f, 0f, 0f };
		Global_1632166.f_86691[iVar0 /*26*/].f_9 = 0;
		Global_1632166.f_86691[iVar0 /*26*/].f_20 = 0;
		Global_1632166.f_86691[iVar0 /*26*/].f_22 = 0f;
		Global_1632166.f_86691[iVar0 /*26*/].f_23 = 0f;
		Global_1632166.f_86691[iVar0 /*26*/].f_21 = 0;
		Global_1632166.f_86691[iVar0 /*26*/].f_7 = 0f;
		Global_1632166.f_86691[iVar0 /*26*/].f_8 = 0;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1632166.f_86691[iVar0 /*26*/].f_10[iVar1] = -1;
			iVar1++;
		}
		iVar0++;
	}
}

void func_225(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		*(uParam0[iVar0 /*3*/]) = { 0f, 0f, 0f };
		uParam0->f_91[iVar0 /*3*/] = { 0f, 0f, 0f };
		uParam0->f_182[iVar0] = 0;
		iVar0++;
	}
}

void func_226(var uParam0)
{
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_227(var uParam0)
{
	uParam0->f_4 = -1;
	uParam0->f_3 = -1;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
	uParam0->f_7 = -1;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	*uParam0 = { 0f, 0f, 0f };
}

void func_228(char* sParam0)
{
	int iVar0;
	
	StringCopy(sParam0, "", 64);
	sParam0->f_16 = 0;
	sParam0->f_17 = 0;
	sParam0->f_54 = { 0f, 0f, 0f };
	sParam0->f_60 = 0f;
	sParam0->f_57 = { 0f, 0f, 0f };
	sParam0->f_61 = 0;
	sParam0->f_62 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		sParam0->f_18[iVar0 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_31[iVar0 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_44[iVar0] = 0f;
		sParam0->f_49[iVar0] = 0f;
		iVar0++;
	}
	sParam0->f_424 = -1;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		sParam0->f_425[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		sParam0->f_430[iVar0] = 0;
		sParam0->f_432[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		func_229(&(sParam0->f_63[iVar0 /*12*/]));
		iVar0++;
	}
}

void func_229(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	StringCopy(&(uParam0->f_4), "", 32);
}

void func_230(char* sParam0)
{
	int iVar0;
	
	StringCopy(sParam0, "", 16);
	sParam0->f_4 = 0;
	sParam0->f_5 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		sParam0->f_6[iVar0 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_19[iVar0 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_32[iVar0] = 0f;
		sParam0->f_37[iVar0] = 0f;
		sParam0->f_42[iVar0] = -1;
		iVar0++;
	}
	sParam0->f_1102 = -1;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		sParam0->f_1103[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		sParam0->f_1108[iVar0] = 0;
		sParam0->f_1110[iVar0] = 0;
		iVar0++;
	}
	sParam0->f_48 = 0;
	sParam0->f_47 = 0;
	sParam0->f_49 = 0;
	sParam0->f_740 = 0;
	sParam0->f_441 = 0;
	sParam0->f_442 = 0;
	sParam0->f_443 = 0;
	sParam0->f_444 = { 0f, 0f, 0f };
	sParam0->f_733 = { 0f, 0f, 0f };
	sParam0->f_736 = 0f;
	sParam0->f_737 = { 0f, 0f, 0f };
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		func_231(sParam0, iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		func_229(&(sParam0->f_741[iVar0 /*12*/]));
		iVar0++;
	}
}

void func_231(char* sParam0, int iParam1)
{
	if (iParam1 >= 0 && iParam1 < 20)
	{
		sParam0->f_50[iParam1] = 0;
		sParam0->f_71[iParam1] = 0;
		sParam0->f_92[iParam1 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_153[iParam1 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_214[iParam1 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_275[iParam1 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_336[iParam1] = 0f;
		sParam0->f_357[iParam1] = 0f;
		sParam0->f_378[iParam1] = 0;
		sParam0->f_399[iParam1] = -1;
		sParam0->f_420[iParam1] = 0f;
		sParam0->f_447[iParam1 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_508[iParam1] = 0f;
		StringCopy(&(sParam0->f_1112[iParam1 /*4*/]), "", 16);
		StringCopy(&(sParam0->f_1193[iParam1 /*4*/]), "", 16);
	}
}

void func_232()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 21)
	{
		Global_1632166.f_40698[iVar0] = 0;
		iVar0++;
	}
}

void func_233()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		StringCopy(&(Global_1632166.f_86518[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
}

int func_234()
{
	return Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_187;
}

int func_235()
{
	if (unk_0x6AAF285DC78E0304())
	{
		if (Global_1312428)
		{
			return 1;
		}
	}
	else if (Global_1312428)
	{
		Global_1312428 = 0;
	}
	return 0;
}

bool func_236()
{
	return unk_0xF44A5E894FE76438(Global_970912.f_8, 0);
}

bool func_237()
{
	return unk_0xF44A5E894FE76438(Global_2443089, 4);
}

bool func_238()
{
	return unk_0xF44A5E894FE76438(Global_2443089, 28);
}

var func_239()
{
	return Global_2443089.f_571;
}

void func_240()
{
	struct<62> Var0;
	
	Var0.f_4.f_1 = -1;
	Var0.f_4.f_2 = -1;
	Var0.f_4.f_9 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Global_2394783 = { Var0 };
	StringCopy(&(Global_2394783.f_30), "", 64);
	StringCopy(&(Global_2394783.f_46), "", 64);
	StringCopy(&(Global_2394783.f_15), "", 32);
}

void func_241()
{
	unk_0x4EA098C870B73AB7(&Global_2443089, 4);
}

void func_242()
{
	unk_0x4EA098C870B73AB7(&Global_2443089, 28);
}

void func_243(bool bParam0, bool bParam1, bool bParam2)
{
	struct<52> Var0;
	
	bParam0->f_5 = 0;
	bParam0->f_6 = 0;
	bParam0->f_7 = 0;
	bParam0->f_8 = 0;
	bParam0->f_9 = 0;
	bParam0->f_12 = 0;
	bParam0->f_31 = 0;
	bParam0->f_13 = 0;
	bParam0->f_14 = 0;
	bParam0->f_15 = 0;
	bParam0->f_17 = 1;
	bParam0->f_17 = 1;
	bParam0->f_18 = 0;
	bParam0->f_19 = 0;
	bParam0->f_20 = 0;
	bParam0->f_21 = -1;
	bParam0->f_3 = 0;
	bParam0->f_28 = 0;
	bParam0->f_29 = 0;
	Global_1573289[0] = 0;
	Global_1573289[1] = 0;
	bParam0->f_40 = 0;
	if (bParam2)
	{
		bParam0->f_41 = { Var0 };
	}
	if (bParam1)
	{
		func_95(bParam0, 0);
	}
}

int func_244(int iParam0)
{
	switch (iParam0)
	{
		case 124:
			return 15;
		
		case 131:
			return 8;
		
		case 125:
			return 14;
		
		case 129:
			return 122;
		
		case 132:
			return 1;
		
		case 130:
			return 5;
		
		case 133:
			return 6;
		
		case 126:
			return 11;
		
		case 134:
			return 0;
		
		case 135:
			return 2;
		
		case 127:
			return 13;
		
		case 136:
			return 3;
		
		case 128:
			return 12;
		
		case 49:
			return 148;
		
		case 52:
			return 151;
		
		case 53:
			return 152;
		
		case 54:
			return 157;
		
		case 55:
			return 153;
		
		case 56:
			return 154;
		
		case 57:
			return 155;
		
		case 58:
			return 159;
		
		case 51:
			return 162;
		
		case 60:
			return 142;
		
		case 62:
			return 160;
		
		case 63:
			return 164;
		
		case 64:
			return 163;
		
		case 65:
			return 166;
		
		case 66:
			return 167;
		
		case 67:
			return 168;
		
		case 68:
			return 169;
		
		case 69:
			return 170;
		
		case 70:
			return 171;
		
		case 71:
			return 172;
		
		case 72:
			return 173;
		
		case 73:
			return 178;
		
		case 74:
			return 188;
		
		case 75:
			return 214;
		
		case 76:
			return 215;
		
		case 77:
			return 216;
		
		case 78:
			return 217;
		
		case joaat("mpsv_lp0_31"):
			return 218;
		
		case 80:
			return 219;
		
		case 81:
			return 220;
		
		case 82:
			return 221;
		
		case 84:
			return 179;
		
		case 83:
			return 189;
		
		case 85:
			return 180;
		
		case 86:
			return 182;
		
		case 87:
			return 183;
		
		case 88:
			return 185;
		
		case 89:
			return 186;
		
		case 90:
			return 190;
		
		case 91:
			return 191;
		
		case 92:
			return 192;
		
		case 93:
			return 193;
		
		case 101:
			return 205;
		
		case 94:
			return 194;
		
		case 95:
			return 197;
		
		case 96:
			return 198;
		
		case 98:
			return 199;
		
		case 99:
			return 200;
		
		case 100:
			return 201;
		
		case 102:
			return 207;
		
		case 103:
			return 208;
		
		case 104:
			return 209;
		
		case 105:
			return 210;
		
		case 97:
			return 195;
		
		default:
	}
	return 223;
}

bool func_245()
{
	return Global_2394783;
}

var func_246()
{
	return Global_2394783.f_3;
}

