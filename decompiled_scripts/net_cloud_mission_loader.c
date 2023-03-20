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
	unk_0xB64A6F2B8046CEF8();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		bLocal_274 = false;
		bVar0 = func_237();
		Global_2394783.f_3 = 0;
		Global_2395231 = 0;
		if (func_236())
		{
			bLocal_274 = true;
			Var1 = { Global_2394783.f_4 };
			MemCopy(&cVar11, {Var1.f_3}, 8);
			iVar19 = func_235(Global_2394783.f_4);
			iVar20 = unk_0x0C1D3C552325765B();
			bVar21 = Global_2394783.f_14;
			if (bVar21)
			{
				cVar11 = { Global_2394783.f_15 };
			}
			if (Global_2394783.f_25)
			{
				func_234(&Local_92, 1, 1);
				unk_0x09C86C0C5CA26B1E(&(Global_1588660[iVar20 /*532*/].f_39.f_18), 2);
				unk_0x09C86C0C5CA26B1E(&(Global_1588660[iVar20 /*532*/].f_39.f_18), 1);
				unk_0x09C86C0C5CA26B1E(&(Global_1588660[iVar20 /*532*/].f_39.f_18), 3);
				func_233();
				func_232();
				Global_2394783.f_25 = 0;
			}
			if (!unk_0xA86CA03D9749EEB3())
			{
				func_231();
			}
			else if (!func_108(&Local_92, &cVar11, &(Global_1588660[iVar20 /*532*/].f_39.f_18), iVar19, 0, 0, 1, 0, 1, bVar21, 0, 1, 0, 1))
			{
				Global_2394783.f_23 = 0;
				Global_2394783.f_27 = -1;
				if (bVar0)
				{
					func_234(&Local_92, 1, 1);
					unk_0x78AFEDC00709B71B();
					func_107();
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
							func_231();
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
						func_231();
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
							func_231();
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
		if (func_106())
		{
			bLocal_274 = true;
			MemCopy(&cVar22, {Global_2394783.f_4.f_3}, 8);
			if (Global_2394783.f_23)
			{
				func_231();
			}
			else
			{
				if (Global_2394783.f_25)
				{
					func_234(&Local_92, 1, 1);
					Global_2394783.f_25 = 0;
				}
				if (!func_102(&Local_92, &cVar22, &Local_185))
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
		if (func_101())
		{
			bLocal_274 = true;
			if (Global_2394783.f_23)
			{
				func_231();
			}
			else
			{
				if (Global_2394783.f_25)
				{
					func_234(&Local_92, 1, 1);
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
							iLocal_273 = (unk_0xDF658EB6CA91DFBC() + 50000);
						}
					}
					bVar31 = false;
					if (Local_92.f_4 == 4)
					{
						if (unk_0xDF658EB6CA91DFBC() > iLocal_273)
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
			if (func_4(unk_0x0C1D3C552325765B()) || func_3(unk_0x0C1D3C552325765B()))
			{
				if (!func_1(unk_0x0C1D3C552325765B(), 1, 0))
				{
					unk_0x78C587487CD40B92();
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
	if (unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_256.f_9, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_256.f_9, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2421327[iParam0 /*353*/].f_308.f_1 != -1)
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
	return Global_2421327[iParam0 /*353*/].f_116 == 7;
}

bool func_4(int iParam0)
{
	return Global_2421327[iParam0 /*353*/].f_116 == 2;
}

int func_5(bool bParam0)
{
	if (!func_100())
	{
		if (func_97())
		{
			return 1;
		}
	}
	switch (bParam0->f_4)
	{
		case 0:
			if (func_96())
			{
				return 0;
			}
			if (func_95())
			{
				return 0;
			}
			func_94();
			func_93();
			func_92();
			if (func_100())
			{
				unk_0x8BA68DACE7B76AA1(1);
			}
			else
			{
				unk_0x8BA68DACE7B76AA1(0);
			}
			bParam0->f_13 = Global_2395230;
			bParam0->f_9 = 1100;
			if (bParam0->f_13 == 0)
			{
				return 1;
			}
			func_91(bParam0, 24);
			break;
		
		case 24:
			if (func_89(bParam0->f_13))
			{
				func_234(bParam0, 1, 1);
				*bParam0 = 1;
				return 1;
			}
			else
			{
				func_91(bParam0, 1);
			}
			break;
		
		case 1:
			if (unk_0x2633BC3DB8BCCB08(&Global_2394845, bParam0->f_13, 1, func_88(0)))
			{
				func_91(bParam0, 2);
			}
			break;
		
		case 2:
			if (unk_0x161DD964F13BF7F6())
			{
				if (unk_0xEA8C30A26FD38881())
				{
					*bParam0 = 0;
				}
				else
				{
					func_234(bParam0, 1, 1);
					bParam0->f_40 = unk_0xA776300BA6E5DD85();
					*bParam0 = 0;
					return 1;
				}
				if (unk_0xFC067E57AE592CE2() > 0)
				{
					func_91(bParam0, 4);
				}
				else
				{
					func_234(bParam0, 1, 1);
					*bParam0 = 0;
					return 1;
				}
			}
			break;
		
		case 4:
			if (unk_0x458489D68557DF0E())
			{
				func_93();
				*bParam0 = 0;
				return 1;
			}
			if (bParam0->f_9 >= (1100 + bParam0->f_13))
			{
				func_234(bParam0, 1, 1);
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
						if (unk_0x3B1556D715F2C85D() != 0)
						{
							unk_0x4177D875818DE411();
						}
						if (unk_0x56FC6A7D8D4BEE67(bParam0->f_7))
						{
							func_6(bParam0, 1);
						}
						else if (bParam0->f_8 > 200)
						{
							func_93();
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
	
	iVar0 = unk_0x3B1556D715F2C85D();
	iVar1 = unk_0x458C2A004F0678D0(iVar0, "mission");
	iVar2 = unk_0x458C2A004F0678D0(iVar1, "gen");
	if (func_100())
	{
		if (func_87(unk_0x9D31BF793B85169E(bParam0->f_7)))
		{
			if (unk_0x3B1556D715F2C85D() != 0)
			{
				unk_0x4177D875818DE411();
			}
			return;
		}
	}
	if ((unk_0x9C70ABDC70E0A0CF(iVar2, "type") == 0 && unk_0x9C70ABDC70E0A0CF(iVar2, "subtype") == 7) && bParam0->f_9 < 1100)
	{
		if (unk_0x3B1556D715F2C85D() != 0)
		{
			unk_0x4177D875818DE411();
		}
		return;
	}
	if (Global_262145.f_6535)
	{
		if (unk_0x9C70ABDC70E0A0CF(iVar2, "type") == 0)
		{
			if (unk_0x9C70ABDC70E0A0CF(iVar2, "subtype") == 1 || unk_0x9C70ABDC70E0A0CF(iVar2, "subtype") == 7)
			{
				if (unk_0x3B1556D715F2C85D() != 0)
				{
					unk_0x4177D875818DE411();
				}
				return;
			}
			iVar3 = unk_0x9C70ABDC70E0A0CF(iVar2, "optbs");
			if (unk_0x08BA6DD398CA197C(iVar3, 4) || unk_0x08BA6DD398CA197C(iVar3, 12))
			{
				if (unk_0x3B1556D715F2C85D() != 0)
				{
					unk_0x4177D875818DE411();
				}
				return;
			}
		}
	}
	if (bParam0->f_9 == 0 && bParam1 == 0)
	{
		func_86();
		Global_794608.f_2 = 0;
		Global_794608.f_111850 = 0;
		func_85();
		iVar4 = 0;
		while (iVar4 < 13)
		{
			Global_794608.f_111865[iVar4] = 0;
			Global_794608.f_111851[iVar4] = 0;
			iVar4++;
		}
		if (func_82())
		{
			func_81(1);
			func_81(0);
			func_79(1);
		}
	}
	Var5.f_65 = -1;
	Var5.f_66 = -1;
	Var5.f_67 = 2;
	Global_794608.f_4[bParam0->f_9 /*88*/] = { Var5 };
	if (!func_100())
	{
		Global_794608.f_98389[bParam0->f_9 /*12*/].f_4 = unk_0x3381AB4606CD8164(bParam0->f_7, 0);
		Global_794608.f_4[bParam0->f_9 /*88*/].f_67 = func_78(bParam0->f_7);
		Global_794608.f_4[bParam0->f_9 /*88*/].f_66 = unk_0x3381AB4606CD8164(bParam0->f_7, Global_794608.f_4[bParam0->f_9 /*88*/].f_67);
		Global_794608.f_98389[bParam0->f_9 /*12*/].f_5 = unk_0xB619CECF18FA6B00(bParam0->f_7);
	}
	Global_794608.f_4[bParam0->f_9 /*88*/].f_56 = { func_77(iVar2, "start") };
	if (unk_0xD44C5C9A5AB591EF(iVar2, "optbs") == 2)
	{
		Global_794608.f_4[bParam0->f_9 /*88*/].f_76 = unk_0x9C70ABDC70E0A0CF(iVar2, "optbs");
	}
	unk_0x09C86C0C5CA26B1E(&(Global_794608.f_4[bParam0->f_9 /*88*/].f_76), 15);
	unk_0x09C86C0C5CA26B1E(&(Global_794608.f_4[bParam0->f_9 /*88*/].f_76), 18);
	unk_0x09C86C0C5CA26B1E(&(Global_794608.f_4[bParam0->f_9 /*88*/].f_76), 19);
	unk_0x09C86C0C5CA26B1E(&(Global_794608.f_4[bParam0->f_9 /*88*/].f_76), 29);
	unk_0x09C86C0C5CA26B1E(&(Global_794608.f_4[bParam0->f_9 /*88*/].f_76), 28);
	Global_794608.f_4[bParam0->f_9 /*88*/].f_59 = { func_77(iVar2, "cam") };
	Global_794608.f_4[bParam0->f_9 /*88*/].f_62 = { func_76(iVar2) };
	if (!func_100())
	{
		if (unk_0x5F893A1517F11B23(unk_0xB619CECF18FA6B00(bParam0->f_7)))
		{
			Global_794608.f_4[bParam0->f_9 /*88*/].f_54 = unk_0xF6D1A660E8025778(bParam0->f_7);
		}
		else
		{
			Global_794608.f_4[bParam0->f_9 /*88*/].f_54 = -1;
		}
	}
	if (unk_0xD44C5C9A5AB591EF(iVar2, "mgrk") == 2)
	{
		Global_794608.f_98389[bParam0->f_9 /*12*/].f_7 = unk_0x9C70ABDC70E0A0CF(iVar2, "mgrk");
	}
	if (unk_0xD44C5C9A5AB591EF(iVar2, "mght") == 2)
	{
		Global_794608.f_98389[bParam0->f_9 /*12*/].f_8 = unk_0x9C70ABDC70E0A0CF(iVar2, "mght");
	}
	Global_794608.f_98389[bParam0->f_9 /*12*/].f_10 = unk_0x9C70ABDC70E0A0CF(iVar2, "cncmbs");
	Global_794608.f_4[bParam0->f_9 /*88*/].f_69 = unk_0x9C70ABDC70E0A0CF(iVar2, "min");
	Global_794608.f_4[bParam0->f_9 /*88*/].f_71 = unk_0x9C70ABDC70E0A0CF(iVar2, "num");
	if (Global_794608.f_4[bParam0->f_9 /*88*/].f_71 == -1)
	{
		Global_794608.f_4[bParam0->f_9 /*88*/].f_71 = 30;
	}
	StringCopy(&(Global_794608.f_4[bParam0->f_9 /*88*/].f_22), unk_0x36B72F8AF752C1F3(bParam0->f_7), 64);
	Global_794608.f_4[bParam0->f_9 /*88*/].f_65 = unk_0x9C70ABDC70E0A0CF(iVar2, "type");
	if (func_100())
	{
		StringCopy(&(Global_794608.f_4[bParam0->f_9 /*88*/].f_6), func_75(), 64);
	}
	else
	{
		StringCopy(&(Global_794608.f_4[bParam0->f_9 /*88*/].f_6), unk_0x3EA5DFB8CC193277(bParam0->f_7), 64);
	}
	Global_794608.f_4[bParam0->f_9 /*88*/].f_70 = unk_0x9C70ABDC70E0A0CF(iVar2, "rank");
	Global_794608.f_98389[bParam0->f_9 /*12*/] = unk_0x9C70ABDC70E0A0CF(iVar2, "tnum");
	if (!func_100())
	{
		Global_794608.f_4[bParam0->f_9 /*88*/].f_73 = func_74(unk_0xC09BFD51C1B64460(bParam0->f_7, 0), unk_0x019EBCC5545E343E(bParam0->f_7, 0));
		Global_794608.f_98389[bParam0->f_9 /*12*/].f_3 = unk_0x019EBCC5545E343E(bParam0->f_7, 0);
	}
	Global_794608.f_4[bParam0->f_9 /*88*/].f_75 = unk_0x9C70ABDC70E0A0CF(iVar2, "charcon");
	Global_794608.f_4[bParam0->f_9 /*88*/].f_78 = unk_0x9C70ABDC70E0A0CF(iVar2, "ltm");
	if (Global_794608.f_4[bParam0->f_9 /*88*/].f_65 == 6 && !bParam1)
	{
		if (Global_968722.f_598 < 85)
		{
			Global_794608.f_4[bParam0->f_9 /*88*/].f_68 = Global_968722.f_598;
			Global_968722[Global_794608.f_4[bParam0->f_9 /*88*/].f_68 /*3*/] = { func_77(iVar2, "area") };
			if (unk_0xD44C5C9A5AB591EF(iVar2, "rad") == 2)
			{
				Global_968722.f_512[Global_794608.f_4[bParam0->f_9 /*88*/].f_68] = unk_0xBBDA792448DB5A89(unk_0x9C70ABDC70E0A0CF(iVar2, "rad"));
			}
			else
			{
				Global_968722.f_512[Global_794608.f_4[bParam0->f_9 /*88*/].f_68] = unk_0xCB33F3C96453C329(iVar2, "rad");
			}
			Global_968722.f_256[Global_794608.f_4[bParam0->f_9 /*88*/].f_68 /*3*/] = { Global_794608.f_4[bParam0->f_9 /*88*/].f_56 };
			Global_794608.f_4[bParam0->f_9 /*88*/].f_56 = { Global_794608.f_4[bParam0->f_9 /*88*/].f_59 };
			Global_968722.f_598++;
		}
	}
	else
	{
		Global_794608.f_4[bParam0->f_9 /*88*/].f_68 = unk_0x9C70ABDC70E0A0CF(iVar2, "subtype");
		Global_794608.f_4[bParam0->f_9 /*88*/].f_80 = unk_0x9C70ABDC70E0A0CF(iVar2, "adverm");
	}
	StringCopy(&(Global_794608.f_4[bParam0->f_9 /*88*/]), unk_0x9D31BF793B85169E(bParam0->f_7), 24);
	iVar93 = unk_0x3BB8D1C5FAAB25B3(&(Global_794608.f_4[bParam0->f_9 /*88*/]));
	Global_794608.f_98389[bParam0->f_9 /*12*/].f_2 = iVar93;
	func_73(Global_794608.f_4[bParam0->f_9 /*88*/].f_65, &(Global_794608.f_4[bParam0->f_9 /*88*/].f_71), &(Global_794608.f_4[bParam0->f_9 /*88*/].f_69));
	if (func_100())
	{
		if (unk_0x28C1B9853548BD8E(unk_0x9D31BF793B85169E(bParam0->f_7), "lUo6JFfliE-ZQ_8gd90ZxQ"))
		{
			Global_794608.f_4[bParam0->f_9 /*88*/].f_56 = { 897.5109f, -2340.599f, 29.4461f };
		}
	}
	unk_0x88B0F0DC270164B7(&(Global_794608.f_4[bParam0->f_9 /*88*/].f_76), 13);
	if (!func_100())
	{
		Global_794608.f_98389[bParam0->f_9 /*12*/].f_1 = unk_0x3BB8D1C5FAAB25B3(unk_0x17E10681B09838B7(bParam0->f_7));
	}
	if ((Global_794608.f_4[bParam0->f_9 /*88*/].f_65 < 13 && !bParam1) && !func_72(Global_794608.f_98389[bParam0->f_9 /*12*/].f_1))
	{
		if (Global_794608.f_4[bParam0->f_9 /*88*/].f_70 <= 1000)
		{
			Global_794608.f_111851[Global_794608.f_4[bParam0->f_9 /*88*/].f_65]++;
			if (func_71(bParam0->f_9))
			{
				Global_794608.f_111851[7]++;
			}
			else if (func_70(bParam0->f_9))
			{
				Global_794608.f_111851[4]++;
			}
			else if (func_69(bParam0->f_9))
			{
				Global_794608.f_111851[10]++;
			}
			else if (func_68(bParam0->f_9))
			{
				Global_794608.f_111851[12]++;
			}
		}
	}
	if (unk_0x3B1556D715F2C85D() != 0)
	{
		unk_0x4177D875818DE411();
	}
	if (!func_100())
	{
		if (func_72(Global_794608.f_98389[bParam0->f_9 /*12*/].f_1))
		{
			Global_794608.f_4[bParam0->f_9 /*88*/].f_69 = Global_794608.f_4[bParam0->f_9 /*88*/].f_71;
		}
		if ((Global_794608.f_111850 < 5 && Global_794608.f_4[bParam0->f_9 /*88*/].f_65 == 0) && Global_794608.f_4[bParam0->f_9 /*88*/].f_68 == 1)
		{
			Global_794608.f_98389[bParam0->f_9 /*12*/].f_9 = Global_794608.f_111850;
			StringCopy(&(Global_794608.f_111819[Global_794608.f_111850 /*6*/]), unk_0x17E10681B09838B7(bParam0->f_7), 24);
			Global_794608.f_111850++;
		}
		func_56(Global_794608.f_98389[bParam0->f_9 /*12*/].f_1, &(Global_794608.f_4[bParam0->f_9 /*88*/].f_76), &(Global_794608.f_4[bParam0->f_9 /*88*/].f_77), Global_794608.f_4[bParam0->f_9 /*88*/].f_80);
		func_52(Global_794608.f_98389[bParam0->f_9 /*12*/].f_1, bParam0->f_9);
		if (bParam1)
		{
			if (unk_0x48D11B635E2B710D(bParam0->f_7))
			{
				unk_0x88B0F0DC270164B7(&(Global_794608.f_4[bParam0->f_9 /*88*/].f_76), 14);
			}
		}
		else if (!func_72(Global_794608.f_98389[bParam0->f_9 /*12*/].f_1))
		{
			if (func_32(Global_794608.f_98389[bParam0->f_9 /*12*/].f_1, Global_794608.f_4[bParam0->f_9 /*88*/].f_80))
			{
				Global_794608.f_111851[11]++;
			}
			if (unk_0x48D11B635E2B710D(bParam0->f_7))
			{
				unk_0x88B0F0DC270164B7(&(Global_794608.f_4[bParam0->f_9 /*88*/].f_76), 14);
				if (unk_0x08BA6DD398CA197C(Global_794608.f_4[bParam0->f_9 /*88*/].f_76, 1) || Global_794608.f_4[bParam0->f_9 /*88*/].f_68 == 2)
				{
					Global_794608.f_111851[9]++;
				}
				if (Global_794608.f_4[bParam0->f_9 /*88*/].f_70 <= 1000)
				{
					if (Global_794608.f_4[bParam0->f_9 /*88*/].f_65 < 13)
					{
						Global_794608.f_111865[Global_794608.f_4[bParam0->f_9 /*88*/].f_65]++;
					}
				}
				Global_794608.f_98389[bParam0->f_9 /*12*/].f_6 = unk_0x60336C3CEF6AD6FD(bParam0->f_7);
			}
		}
	}
	if (!bParam1 && !func_72(Global_794608.f_98389[bParam0->f_9 /*12*/].f_1))
	{
		if (func_82())
		{
			func_30(Global_794608.f_4[bParam0->f_9 /*88*/].f_65, Global_794608.f_4[bParam0->f_9 /*88*/].f_68, unk_0x08BA6DD398CA197C(Global_794608.f_4[bParam0->f_9 /*88*/].f_76, 14), Global_794608.f_4[bParam0->f_9 /*88*/].f_70, 0);
			func_28(Global_794608.f_4[bParam0->f_9 /*88*/].f_65, Global_794608.f_4[bParam0->f_9 /*88*/].f_68, Global_794608.f_4[bParam0->f_9 /*88*/].f_70, 0);
			func_26(Global_794608.f_4[bParam0->f_9 /*88*/].f_65, Global_794608.f_4[bParam0->f_9 /*88*/].f_68, Global_794608.f_4[bParam0->f_9 /*88*/].f_75, Global_794608.f_4[bParam0->f_9 /*88*/].f_70, unk_0x08BA6DD398CA197C(Global_794608.f_4[bParam0->f_9 /*88*/].f_76, 14));
			func_7(Global_794608.f_4[bParam0->f_9 /*88*/].f_65, Global_794608.f_4[bParam0->f_9 /*88*/].f_68, Global_794608.f_4[bParam0->f_9 /*88*/].f_75, Global_794608.f_4[bParam0->f_9 /*88*/].f_70);
		}
	}
	if (Global_794608.f_4[bParam0->f_9 /*88*/].f_65 == 6)
	{
		Global_969321[0 /*37*/]++;
	}
	bParam0->f_9++;
	Global_794608.f_2++;
	if (unk_0x3B1556D715F2C85D() != 0)
	{
		unk_0x4177D875818DE411();
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
		unk_0x10CE8769EE2626C7(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1352217 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1352219 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1352219 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1352220 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1352221 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1352222 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1352223 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1352224 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1352225 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1352226 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1352227 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1352228 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1352229 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1352230 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1352231 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1352232 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1352233 = iParam1;
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
		unk_0x10CE8769EE2626C7(iVar0, iParam1, 1);
	}
}

int func_11(int iParam0)
{
	if (Global_1352216)
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
	if (unk_0x8A3351ECF43DB941(uVar0, &uVar1, -1))
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
	if (func_20(unk_0x0C1D3C552325765B()) < iParam4)
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
	while (iVar0 < 8)
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
		if (Global_278713[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_278713[iVar3] < iParam0)
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
			if (iParam0 == unk_0x0C1D3C552325765B())
			{
				return Global_1352337[func_24(-1)];
			}
			else if (func_23(iParam0))
			{
				return Global_1588660[iParam0 /*532*/].f_201.f_1;
			}
		}
	}
	else
	{
		return Global_1352337[func_24(-1)];
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
		return unk_0x08BA6DD398CA197C(Global_2432628.f_1, iParam0);
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
			Global_2491182 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2491182 = 1;
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
	
	if (func_82())
	{
		if (iParam0 == 0)
		{
			if (((iParam1 != 6 && iParam1 != 5) && iParam1 != 4) && iParam1 != 9)
			{
				if (func_20(unk_0x0C1D3C552325765B()) < iParam2)
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
	
	if (!func_82())
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
			if (func_20(unk_0x0C1D3C552325765B()) < iParam3)
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
		if (iParam0 == Global_262145.f_7953[iVar0])
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
		if (iParam0 == Global_262145.f_7986[iVar0])
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
		if (iParam0 == Global_262145.f_7975[iVar0])
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
		if (iParam0 == Global_262145.f_7964[iVar0])
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
		if (iParam0 == Global_262145.f_7940[iVar0])
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
		if (iParam0 == Global_262145.f_7929[iVar0])
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
		if (iParam0 == Global_262145.f_7918[iVar0])
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
		if (iParam0 == Global_262145.f_7907[iVar0])
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
		if (iParam0 == Global_262145.f_7810[iVar0])
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
		if (iParam0 == Global_262145.f_7832[iVar0])
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
		if (iParam0 == Global_262145.f_7821[iVar0])
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
		if (iParam0 == Global_262145.f_7799[iVar0])
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
		if (iParam0 == Global_262145.f_7788[iVar0])
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
		if (iParam0 == Global_262145.f_7777[iVar0])
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
		if (iParam0 == Global_262145.f_7743[iVar0])
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
		if (iParam0 == Global_262145.f_7751[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_49(int iParam0)
{
	if ((((iParam0 == Global_262145.f_7738 || iParam0 == Global_262145.f_7739) || iParam0 == Global_262145.f_7740) || iParam0 == Global_262145.f_7741) || iParam0 == Global_262145.f_7742)
	{
		return 1;
	}
	return 0;
}

int func_50(int iParam0)
{
	if ((((iParam0 == Global_262145.f_7733 || iParam0 == Global_262145.f_7734) || iParam0 == Global_262145.f_7735) || iParam0 == Global_262145.f_7736) || iParam0 == Global_262145.f_7737)
	{
		return 1;
	}
	return 0;
}

int func_51(int iParam0)
{
	if ((((((iParam0 == Global_262145.f_7726 || iParam0 == Global_262145.f_7727) || iParam0 == Global_262145.f_7728) || iParam0 == Global_262145.f_7729) || iParam0 == Global_262145.f_7730) || iParam0 == Global_262145.f_7731) || iParam0 == Global_262145.f_7732)
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
		if (iParam0 == Global_262145.f_7759[iVar0])
		{
			Global_794608.f_111806[0 /*11*/][iVar0] = iParam1;
			Global_794608.f_4[iParam1 /*88*/].f_56 = { func_55(0, iVar0) };
			Global_794608.f_4[iParam1 /*88*/].f_59 = { func_54(0, iVar0) };
			Global_794608.f_4[iParam1 /*88*/].f_62 = { func_53(0, iVar0) };
			Global_794608.f_98389[iParam1 /*12*/].f_11 = 0;
			Global_794608.f_4[iParam1 /*88*/].f_68 = 8;
			Global_794608.f_4[iParam1 /*88*/].f_75 = 0;
			Global_794608.f_4[iParam1 /*88*/].f_78 = 16777215;
			Global_794608.f_4[iParam1 /*88*/].f_73 = -1;
			if (Global_794608.f_111806[0 /*11*/].f_9 <= iVar0)
			{
				Global_794608.f_111806[0 /*11*/].f_9 = iVar0 + 1;
			}
		}
		else if (iParam0 == Global_262145.f_7768[iVar0])
		{
			Global_794608.f_98389[iParam1 /*12*/].f_11 = 0;
			Global_794608.f_4[iParam1 /*88*/].f_68 = 8;
			Global_794608.f_4[iParam1 /*88*/].f_75 = 0;
			Global_794608.f_4[iParam1 /*88*/].f_78 = 16777215;
			Global_794608.f_4[iParam1 /*88*/].f_73 = -1;
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
		unk_0x88B0F0DC270164B7(uParam1, 15);
	}
	else if (func_50(iParam0))
	{
		unk_0x88B0F0DC270164B7(uParam1, 18);
	}
	else if (func_49(iParam0))
	{
		unk_0x88B0F0DC270164B7(uParam1, 19);
	}
	else if (func_47(iParam0))
	{
		unk_0x88B0F0DC270164B7(uParam1, 29);
	}
	else if (func_48(iParam0))
	{
		unk_0x88B0F0DC270164B7(uParam1, 28);
	}
	else if (func_46(iParam0))
	{
		unk_0x88B0F0DC270164B7(uParam2, 0);
	}
	else if (func_45(iParam0))
	{
		unk_0x88B0F0DC270164B7(uParam2, 1);
	}
	else if (func_44(iParam0))
	{
		unk_0x88B0F0DC270164B7(uParam2, 2);
	}
	else if (func_43(iParam0))
	{
		unk_0x88B0F0DC270164B7(uParam2, 3);
	}
	else if (func_42(iParam0))
	{
		unk_0x88B0F0DC270164B7(uParam2, 4);
	}
	else if (func_41(iParam0))
	{
		unk_0x88B0F0DC270164B7(uParam2, 5);
	}
	else if (func_40(iParam0))
	{
		unk_0x88B0F0DC270164B7(uParam2, 6);
	}
	else if (func_39(iParam0))
	{
		unk_0x88B0F0DC270164B7(uParam2, 7);
	}
	else if (func_38(iParam0))
	{
		unk_0x88B0F0DC270164B7(uParam2, 8);
	}
	else if (func_37(iParam0))
	{
		unk_0x88B0F0DC270164B7(uParam2, 9);
	}
	else if (func_33(iParam0))
	{
		unk_0x88B0F0DC270164B7(uParam2, 10);
	}
	else if (func_36(iParam0))
	{
		unk_0x88B0F0DC270164B7(uParam2, 11);
	}
	else if (func_35(iParam0))
	{
		unk_0x88B0F0DC270164B7(uParam2, 12);
	}
	else if (func_67(iParam3))
	{
		unk_0x88B0F0DC270164B7(uParam2, 13);
	}
	else if (func_34(iParam0))
	{
		unk_0x88B0F0DC270164B7(uParam2, 14);
	}
	else if (func_66(iParam0))
	{
		unk_0x88B0F0DC270164B7(uParam2, 22);
	}
	else if (func_65(iParam3))
	{
		unk_0x88B0F0DC270164B7(uParam2, 16);
	}
	else if (func_64(iParam3))
	{
		unk_0x88B0F0DC270164B7(uParam2, 17);
	}
	else if (func_63(iParam3))
	{
		unk_0x88B0F0DC270164B7(uParam2, 20);
	}
	else if (func_62(iParam3))
	{
		unk_0x88B0F0DC270164B7(uParam2, 21);
	}
	else if (func_66(iParam3))
	{
		unk_0x88B0F0DC270164B7(uParam2, 22);
	}
	else if (func_61(iParam3))
	{
		unk_0x88B0F0DC270164B7(uParam2, 23);
	}
	else if (func_60(iParam3))
	{
		unk_0x88B0F0DC270164B7(uParam2, 24);
	}
	else if (func_59(iParam3))
	{
		unk_0x88B0F0DC270164B7(uParam2, 25);
	}
	else if (func_58(iParam3))
	{
		unk_0x88B0F0DC270164B7(uParam2, 26);
	}
	else if (func_57(iParam3))
	{
		unk_0x88B0F0DC270164B7(uParam2, 27);
	}
}

bool func_57(int iParam0)
{
	return iParam0 == 14;
}

bool func_58(int iParam0)
{
	return iParam0 == 13;
}

bool func_59(int iParam0)
{
	return iParam0 == 12;
}

bool func_60(int iParam0)
{
	return iParam0 == 11;
}

bool func_61(int iParam0)
{
	return iParam0 == 9;
}

bool func_62(int iParam0)
{
	return iParam0 == 1;
}

bool func_63(int iParam0)
{
	return iParam0 == 6;
}

bool func_64(int iParam0)
{
	return iParam0 == 4;
}

bool func_65(int iParam0)
{
	return iParam0 == 2;
}

bool func_66(int iParam0)
{
	return iParam0 == 8;
}

bool func_67(int iParam0)
{
	return iParam0 == 3;
}

bool func_68(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_794608.f_4[iParam0 /*88*/].f_76, 24);
}

bool func_69(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_794608.f_4[iParam0 /*88*/].f_76, 3);
}

bool func_70(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_794608.f_4[iParam0 /*88*/].f_76, 10);
}

bool func_71(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_794608.f_4[iParam0 /*88*/].f_76, 7);
}

int func_72(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != 0)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (Global_262145.f_5290[iVar1] == 2)
			{
				iVar0 = 0;
				while (iVar0 < 20)
				{
					if (iParam0 == Global_262145.f_5047[iVar1 /*21*/][iVar0])
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

void func_73(int iParam0, var uParam1, var uParam2)
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

int func_74(float fParam0, int iParam1)
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

var func_75()
{
	return unk_0xFFC9DE7E93AEAE21("CREATOR_RSC");
}

Vector3 func_76(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0xD44C5C9A5AB591EF(iParam0, "camp") == 3)
	{
		Var0.f_0 = unk_0xCB33F3C96453C329(iParam0, "camp");
	}
	else if (unk_0xD44C5C9A5AB591EF(iParam0, "camp") == 2)
	{
		Var0.f_0 = unk_0xBBDA792448DB5A89(unk_0x9C70ABDC70E0A0CF(iParam0, "camp"));
	}
	if (unk_0xD44C5C9A5AB591EF(iParam0, "camh") == 3)
	{
		Var0.f_2 = unk_0xCB33F3C96453C329(iParam0, "camh");
	}
	else if (unk_0xD44C5C9A5AB591EF(iParam0, "camh") == 2)
	{
		Var0.f_2 = unk_0xBBDA792448DB5A89(unk_0x9C70ABDC70E0A0CF(iParam0, "camh"));
	}
	return Var0;
}

Vector3 func_77(int iParam0, char* sParam1)
{
	struct<3> Var0;
	int iVar3;
	
	if (unk_0xD44C5C9A5AB591EF(iParam0, sParam1) == 5)
	{
		Var0 = { unk_0x3D4621E99B9FFBE0(iParam0, sParam1) };
	}
	else if (unk_0xD44C5C9A5AB591EF(iParam0, sParam1) == 6)
	{
		iVar3 = unk_0x458C2A004F0678D0(iParam0, sParam1);
		if (unk_0xD44C5C9A5AB591EF(iVar3, "x") == 2)
		{
			Var0.f_0 = unk_0xBBDA792448DB5A89(unk_0x9C70ABDC70E0A0CF(iVar3, "x"));
		}
		else
		{
			Var0.f_0 = unk_0xCB33F3C96453C329(iVar3, "x");
		}
		if (unk_0xD44C5C9A5AB591EF(iVar3, "y") == 2)
		{
			Var0.f_1 = unk_0xBBDA792448DB5A89(unk_0x9C70ABDC70E0A0CF(iVar3, "y"));
		}
		else
		{
			Var0.f_1 = unk_0xCB33F3C96453C329(iVar3, "y");
		}
		if (unk_0xD44C5C9A5AB591EF(iVar3, "z") == 2)
		{
			Var0.f_2 = unk_0xBBDA792448DB5A89(unk_0x9C70ABDC70E0A0CF(iVar3, "z"));
		}
		else
		{
			Var0.f_2 = unk_0xCB33F3C96453C329(iVar3, "z");
		}
	}
	return Var0;
}

int func_78(int iParam0)
{
	if (unk_0x460A32A2E05C0209(iParam0))
	{
		return 2;
	}
	else if (unk_0x0FBB80E81582BC6B(iParam0))
	{
		return 1;
	}
	return 1;
}

void func_79(int iParam0)
{
	func_80(joaat("mpply_big_feed_init"), iParam0);
}

void func_80(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xA75D835C91B77269(iVar0, uParam1, 1);
	}
}

void func_81(bool bParam0)
{
	if (!func_82())
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

int func_82()
{
	if (func_84() && func_83(0))
	{
		return 1;
	}
	return 0;
}

var func_83(int iParam0)
{
	return Global_1312369[iParam0];
}

var func_84()
{
	return func_83(func_25() + 1);
}

void func_85()
{
	int iVar0;
	
	Global_968722.f_598 = 0;
	iVar0 = 0;
	while (iVar0 <= 84)
	{
		Global_968722[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_968722.f_256[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_968722.f_512[iVar0] = 0f;
		iVar0++;
	}
}

void func_86()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 1)
	{
		Global_794608.f_111806[iVar0 /*11*/].f_9 = 0;
		iVar0 = 0;
		while (iVar0 < 8)
		{
			Global_794608.f_111806[iVar1 /*11*/][iVar0] = 0;
			iVar0++;
		}
		iVar1++;
	}
}

int func_87(char* sParam0)
{
	if ((((((((((((((((unk_0x28C1B9853548BD8E(sParam0, "QwBYuaosIk-ZB9sAs4T6vQ") || unk_0x28C1B9853548BD8E(sParam0, "O8SUrTkPW0G7NVh-c95lPQ")) || unk_0x28C1B9853548BD8E(sParam0, "Cdgvsa-E8katW71P6VWhQg")) || unk_0x28C1B9853548BD8E(sParam0, "W3U0oyo5okGvED-f7CPzhg")) || unk_0x28C1B9853548BD8E(sParam0, "7CpnaZYqMEKxxbW2rbp33A")) || unk_0x28C1B9853548BD8E(sParam0, "d_cLbuKs0kyVu6VWc3tfQg")) || unk_0x28C1B9853548BD8E(sParam0, "hCC18F4SuU254v5vlgPRmA")) || unk_0x28C1B9853548BD8E(sParam0, "tSm64WIuK0yqti6Po8oQCg")) || unk_0x28C1B9853548BD8E(sParam0, "5mwusUtO5E6AVvnUrgFZcg")) || unk_0x28C1B9853548BD8E(sParam0, "_dFdLIICm0OaNP3ewdkmqA")) || unk_0x28C1B9853548BD8E(sParam0, "cfWCTF0bH0W0JmM3kP3TPg")) || unk_0x28C1B9853548BD8E(sParam0, "JVlkjgsbUk6pHcrN43FPgQ")) || unk_0x28C1B9853548BD8E(sParam0, "AdOvPsvI30yZ6h9HpjzcwA")) || unk_0x28C1B9853548BD8E(sParam0, "te4f3O-vVUOkF3YAbnzD2A")) || unk_0x28C1B9853548BD8E(sParam0, "8jRfzi-oHEGHiJEQLkbZ_w")) || unk_0x28C1B9853548BD8E(sParam0, "gYOgjaTS7EedRGFuBasioQ")) || unk_0x28C1B9853548BD8E(sParam0, "OGuQ53X7G0qx-jteU3gBkg"))
	{
		return 1;
	}
	return 0;
}

char* func_88(int iParam0)
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

int func_89(int iParam0)
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
					if (Global_786484.f_3082[iVar1 /*12*/].f_1 == unk_0x3BB8D1C5FAAB25B3(&(Global_2394845[iVar0 /*6*/])))
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
		Global_794608.f_4[(1100 + iVar0) /*88*/] = { Global_786484.f_1[iVar2[iVar0] /*88*/] };
		Global_794608.f_98389[(1100 + iVar0) /*12*/] = { Global_786484.f_3082[iVar2[iVar0] /*12*/] };
		iVar1 = 0;
		while (iVar1 < 8)
		{
			Global_1739043.f_111[iVar0 /*204*/].f_44[iVar1 /*16*/] = { Global_786484.f_3503[iVar2[iVar0] /*132*/][iVar1 /*16*/] };
			iVar1++;
		}
		iVar0++;
	}
	func_90(1);
	return 1;
}

void func_90(int iParam0)
{
	Global_1739043.f_1784 = iParam0;
}

void func_91(bool bParam0, int iParam1)
{
	bParam0->f_4 = iParam1;
}

void func_92()
{
	struct<88> Var0;
	int iVar88;
	
	Var0.f_65 = -1;
	Var0.f_66 = -1;
	Var0.f_67 = 2;
	iVar88 = 1100;
	while (iVar88 <= 1117)
	{
		Global_794608.f_4[iVar88 /*88*/] = { Var0 };
		iVar88++;
	}
}

void func_93()
{
	if (unk_0x3B1556D715F2C85D() != 0)
	{
		unk_0x4177D875818DE411();
	}
}

void func_94()
{
	if (func_100())
	{
		unk_0xBEFF7D83F94DDC49();
	}
	else
	{
		unk_0x656D1CB3A84ACE6B();
	}
}

bool func_95()
{
	return Global_2450148.f_4;
}

int func_96()
{
	if (unk_0x9B324019DACBD409())
	{
		return 1;
	}
	else if (unk_0x1FECB4AE5F7268BD())
	{
		return 1;
	}
	else if (unk_0x175E5729A8CFC2B0())
	{
		return 1;
	}
	return 0;
}

int func_97()
{
	if (!func_98())
	{
		return 1;
	}
	return 0;
}

int func_98()
{
	if (func_99())
	{
		return 0;
	}
	if (unk_0x187CC7D5F9B002AA() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_99()
{
	return Global_2452243;
}

bool func_100()
{
	return Global_1572867.f_4;
}

bool func_101()
{
	return Global_2394783.f_2;
}

int func_102(bool bParam0, char* sParam1, char* sParam2)
{
	switch (bParam0->f_4)
	{
		case 0:
			*bParam0 = 0;
			if (func_96())
			{
				return 0;
			}
			func_94();
			func_93();
			if (func_100())
			{
				*bParam0 = 0;
				return 1;
			}
			else
			{
				unk_0x8BA68DACE7B76AA1(0);
			}
			func_91(bParam0, 1);
			break;
		
		case 1:
			if (unk_0x3A3B8CD86B79B0ED(sParam1, func_88(0)))
			{
				func_91(bParam0, 3);
			}
			break;
		
		case 3:
			if (unk_0x161DD964F13BF7F6())
			{
				bParam0->f_40 = unk_0xA776300BA6E5DD85();
				if (unk_0xEA8C30A26FD38881())
				{
				}
				else
				{
					func_234(bParam0, 1, 1);
					bParam0->f_40 = unk_0xA776300BA6E5DD85();
					*bParam0 = 0;
					return 1;
				}
				if (unk_0xFC067E57AE592CE2() > 0)
				{
					if (unk_0x56FC6A7D8D4BEE67(0))
					{
						func_103(sParam2, 0);
						func_234(bParam0, 1, 1);
						*bParam0 = 1;
						return 1;
					}
				}
				else
				{
					func_234(bParam0, 1, 1);
					*bParam0 = 0;
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_103(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = unk_0x3B1556D715F2C85D();
	iVar1 = unk_0x458C2A004F0678D0(iVar0, "mission");
	iVar2 = unk_0x458C2A004F0678D0(iVar1, "gen");
	StringCopy(sParam0, unk_0x9D31BF793B85169E(iParam1), 24);
	StringCopy(&(sParam0->f_6), unk_0x3EA5DFB8CC193277(iParam1), 64);
	StringCopy(&(sParam0->f_22), unk_0x36B72F8AF752C1F3(iParam1), 64);
	sParam0->f_56 = { func_77(iVar2, "start") };
	sParam0->f_59 = { func_77(iVar2, "cam") };
	sParam0->f_62 = { func_76(iVar2) };
	sParam0->f_65 = unk_0x9C70ABDC70E0A0CF(iVar2, "type");
	sParam0->f_68 = unk_0x9C70ABDC70E0A0CF(iVar2, "subtype");
	sParam0->f_80 = unk_0x9C70ABDC70E0A0CF(iVar2, "adverm");
	sParam0->f_79 = unk_0x9C70ABDC70E0A0CF(iVar2, "testcomplete");
	sParam0->f_69 = unk_0x9C70ABDC70E0A0CF(iVar2, "min");
	sParam0->f_70 = unk_0x9C70ABDC70E0A0CF(iVar2, "rank");
	sParam0->f_71 = unk_0x9C70ABDC70E0A0CF(iVar2, "num");
	sParam0->f_73 = func_74(unk_0xC09BFD51C1B64460(iParam1, 0), unk_0x019EBCC5545E343E(iParam1, 0));
	sParam0->f_74 = 0;
	sParam0->f_75 = unk_0x9C70ABDC70E0A0CF(iVar2, "charcon");
	if (func_105(unk_0x3BB8D1C5FAAB25B3(unk_0x17E10681B09838B7(0))))
	{
		sParam0->f_68 = 8;
	}
	if (func_104() != 2)
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
	if (!func_100())
	{
		iVar3 = unk_0xB619CECF18FA6B00(iParam1);
		if (unk_0x5F893A1517F11B23(iVar3))
		{
			sParam0->f_54 = unk_0xF6D1A660E8025778(iParam1);
		}
		else
		{
			sParam0->f_54 = -1;
		}
	}
	if (unk_0xD44C5C9A5AB591EF(iVar2, "ltm") == 2)
	{
		sParam0->f_78 = unk_0x9C70ABDC70E0A0CF(iVar2, "ltm");
	}
	unk_0x88B0F0DC270164B7(&(sParam0->f_76), 13);
	func_93();
}

int func_104()
{
	return Global_25185;
}

int func_105(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iParam0 == Global_262145.f_7759[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_106()
{
	return Global_2394783.f_1;
}

void func_107()
{
	Global_2450148.f_8 = 0;
	Global_2450148.f_7 = 0;
}

int func_108(var uParam0, char* sParam1, var uParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	if ((iParam3 > 10 && iParam3 <= 15) || iParam3 == 122)
	{
		*uParam0 = 1;
		unk_0x88B0F0DC270164B7(uParam2, 3);
		if (!unk_0x08BA6DD398CA197C(*uParam2, 2))
		{
		}
		unk_0x88B0F0DC270164B7(uParam2, 2);
		return 1;
	}
	if ((func_230() && func_229()) || func_228())
	{
		if (!unk_0x08BA6DD398CA197C(*uParam2, 2))
		{
		}
		unk_0x88B0F0DC270164B7(uParam2, 2);
		unk_0x88B0F0DC270164B7(uParam2, 1);
		unk_0x88B0F0DC270164B7(uParam2, 3);
		*uParam0 = 1;
		return 1;
	}
	if (iParam7 == 1)
	{
		if (!unk_0x08BA6DD398CA197C(*uParam2, 3))
		{
			unk_0x88B0F0DC270164B7(uParam2, 3);
		}
		return 1;
	}
	if (bParam4)
	{
		if (!func_227())
		{
			return 0;
		}
	}
	uParam0->f_15 = 0;
	if (bParam8)
	{
		if (func_226())
		{
			if (unk_0x08BA6DD398CA197C(*uParam2, 2))
			{
				unk_0x88B0F0DC270164B7(uParam2, 3);
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
		if (func_95())
		{
			return 0;
		}
	}
	if (!unk_0x08BA6DD398CA197C(*uParam2, 2))
	{
		if (!unk_0x08BA6DD398CA197C(*uParam2, 1))
		{
			if (!bParam12)
			{
				func_215(1, 1, bParam11);
			}
			unk_0x88B0F0DC270164B7(uParam2, 1);
			func_234(uParam0, 1, 1);
			*uParam0 = 0;
		}
		if (func_122(uParam0, sParam1, 0, 1, 0, iParam5, 0, 0, 1, bParam9, bParam10, bParam11, 0, bParam12, bParam13))
		{
			if (((func_121() || Global_1626500 == 31) || Global_1626500 == 6) || Global_1626500 == 4)
			{
				if (Global_1626500.f_27 < 1)
				{
					Global_1626500.f_27 = 1;
				}
				if (Global_1626500.f_26 < 1)
				{
					Global_1626500.f_26 = 1;
				}
				if (!func_120())
				{
					func_119();
				}
			}
			else if (Global_1626500 == 1)
			{
				Global_1352406.f_4 = 99;
				Global_1352406.f_6 = Global_1626500.f_48;
				Global_1352406.f_7 = Global_1626500.f_51165;
				Global_1352406.f_9 = Global_1626500.f_39360;
				Global_1352406.f_11 = Global_1626500.f_49;
				Global_1352406.f_12 = Global_1626500.f_51;
				Global_1352406.f_13 = Global_1626500.f_53;
				Global_1352406.f_14 = Global_1626500.f_52;
				Global_1352406.f_16 = Global_1626500.f_24;
				Global_1352406.f_5 = Global_1626500.f_46;
				Global_1352406.f_10 = Global_1626500.f_59;
			}
			else if (func_118())
			{
				Global_2508265.f_7 = 9901;
				Global_2508265.f_8 = Global_1626500.f_38715 + 1;
				if (func_117(Global_1626500.f_32896))
				{
					Global_1626500.f_32896 = { Global_1626500.f_63 };
				}
			}
			unk_0x88B0F0DC270164B7(uParam2, 2);
			unk_0x09C86C0C5CA26B1E(uParam2, 1);
			unk_0x88B0F0DC270164B7(uParam2, 3);
			if (*uParam0)
			{
				func_116();
				func_115();
				if (func_114())
				{
					func_111(Global_1626500.f_22);
				}
				Global_1626500.f_84510 = 1;
			}
			else
			{
				func_232();
			}
			if (!func_110())
			{
				func_109();
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
		unk_0x88B0F0DC270164B7(uParam2, 3);
		if (Global_1626500.f_84510)
		{
			*uParam0 = 1;
		}
		return 1;
	}
	return 0;
}

void func_109()
{
	Global_2442442.f_28.f_49 = 1;
}

int func_110()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (!unk_0x509383441597090D(&(Global_1626500.f_84160[iVar1 /*6*/])))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

void func_111(int iParam0)
{
	if (!func_113())
	{
		unk_0x716943452443538B(2);
		unk_0xA547C51C569A6F12(1);
		if (iParam0 == 0)
		{
			iParam0 = 32;
		}
		unk_0x81A30BC4DE46EBCE((iParam0 / 2));
		func_112();
	}
}

void func_112()
{
	unk_0x88B0F0DC270164B7(&(Global_2442442.f_2), 3);
}

bool func_113()
{
	return unk_0x08BA6DD398CA197C(Global_2442442.f_2, 3);
}

bool func_114()
{
	return unk_0x08BA6DD398CA197C(Global_2443212.f_1.f_2808, 8);
}

void func_115()
{
	unk_0x88B0F0DC270164B7(&Global_2442442, 4);
}

void func_116()
{
	unk_0x88B0F0DC270164B7(&Global_2442442, 28);
}

int func_117(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_118()
{
	if (Global_1626500 == 2 || Global_1626500 == 8)
	{
		return 1;
	}
	return 0;
}

void func_119()
{
	Global_1729863.f_5 = 0;
	Global_1729863.f_11 = -1;
}

int func_120()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < Global_1626500.f_27)
	{
		iVar1 = 0;
		while (iVar1 < Global_1626500.f_27)
		{
			if (Global_1626500.f_34[iVar0] != Global_1626500.f_34[iVar1])
			{
				return 0;
			}
			else if (Global_1626500.f_29[iVar0] != Global_1626500.f_29[iVar1])
			{
				return 0;
			}
			iVar1++;
		}
		iVar0++;
	}
	return 1;
}

int func_121()
{
	if ((((((Global_1626500 == 0 || Global_1626500 == 4) || Global_1626500 == 6) || Global_1626500 == 3) || Global_1626500 == 31) || Global_1626500.f_2 == 6) || Global_1626500.f_2 == 5)
	{
		return 1;
	}
	return 0;
}

int func_122(var uParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4, var uParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
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
		if (func_95() && uParam0->f_4 == 0)
		{
			return 0;
		}
	}
	if (!func_100() || (iParam2 != 0 && iParam2 != 1))
	{
		if (func_97())
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
			uParam0->f_24 = func_214(1);
			uParam0->f_25 = func_212(1);
			if (func_96())
			{
				return 0;
			}
			func_94();
			func_93();
			if (func_100() || bParam9)
			{
				unk_0x8BA68DACE7B76AA1(1);
			}
			else
			{
				unk_0x8BA68DACE7B76AA1(0);
			}
			func_210();
			if (bParam4)
			{
				func_91(uParam0, 11);
			}
			else
			{
				func_91(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_100() || bParam9)
			{
				if (unk_0x40C8244ED0CAE8DE(sParam1))
				{
					if (iParam2 == 0)
					{
						Global_1626500.f_84517 = 1;
						if (!bParam9)
						{
							StringCopy(&(Global_1626500.f_84154), sParam1, 24);
						}
						func_158(-1, 1, 0, 0);
						uParam0->f_8 = 0;
						func_91(uParam0, 9);
						*uParam0 = 1;
						func_107();
						return 1;
					}
					else if (iParam2 == 1)
					{
						if (uParam0->f_16)
						{
							StringCopy(&(Global_970921.f_42), sParam1, 24);
							Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_19 = { Global_970921.f_12 };
							func_157(&iVar1, &uVar0, &Global_970921);
							if (Global_970921.f_65 == 0)
							{
								func_234(uParam0, 1, 1);
								*uParam0 = 0;
								uParam0->f_28 = 1;
								func_93();
								func_107();
								return 1;
							}
							uParam0->f_8 = 0;
						}
						else
						{
							StringCopy(&(Global_969359.f_42), sParam1, 24);
							Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_19 = { Global_969359.f_12 };
							func_157(&iVar1, &uVar0, &Global_969359);
							uParam0->f_8 = 0;
							if (Global_969359.f_65 == 0)
							{
								func_234(uParam0, 1, 1);
								*uParam0 = 0;
								uParam0->f_28 = 1;
								func_93();
								func_107();
								return 1;
							}
						}
						func_93();
						unk_0xBEFF7D83F94DDC49();
						unk_0x8BA68DACE7B76AA1(1);
						func_156(uParam0);
						func_91(uParam0, 13);
					}
					else
					{
						*uParam0 = 0;
						func_107();
						return 1;
					}
				}
				else
				{
					*uParam0 = 0;
					func_107();
					func_93();
					return 1;
				}
			}
			else if ((uParam0->f_21 != -1 && uParam0->f_22 != -1) && iParam2 == 0)
			{
				uParam0->f_5 = unk_0x7FD2990AF016795E(func_88(iParam2), sParam1, 0, uParam0->f_21, uParam0->f_22);
				unk_0x2DC0DF5A362EF86B(uParam0->f_5);
				func_91(uParam0, 4);
			}
			else if (bParam10)
			{
				if (unk_0x4320BB821F0F53C3(sParam1, 1, func_88(iParam2)))
				{
					func_91(uParam0, 3);
				}
			}
			else if (unk_0x3A3B8CD86B79B0ED(sParam1, func_88(iParam2)))
			{
				func_91(uParam0, 3);
			}
			break;
		
		case 3:
			if (unk_0x161DD964F13BF7F6())
			{
				uParam0->f_40 = unk_0xA776300BA6E5DD85();
				if (unk_0xEA8C30A26FD38881())
				{
				}
				else
				{
					func_234(uParam0, 1, 1);
					uParam0->f_40 = unk_0xA776300BA6E5DD85();
					*uParam0 = 0;
					func_107();
					return 1;
				}
				if (unk_0xFC067E57AE592CE2() > 0)
				{
					if (!bParam12 && !func_154(uParam0->f_24, uParam0->f_25, unk_0x3EA5DFB8CC193277(0), unk_0xE309CC7AB7625FA6(0)))
					{
						func_234(uParam0, 1, 1);
						*uParam0 = 0;
						uParam0->f_27 = 1;
						func_107();
						return 1;
					}
					if (iParam2 == 0)
					{
						uParam0->f_5 = unk_0x171DF6A0C07FB3DC(0, 0);
						unk_0x2DC0DF5A362EF86B(uParam0->f_5);
						func_91(uParam0, 4);
					}
					else if (iParam2 == 1)
					{
						if (unk_0x56FC6A7D8D4BEE67(0))
						{
							if (uParam0->f_16)
							{
								StringCopy(&(Global_970921.f_12), unk_0x36B72F8AF752C1F3(0), 64);
								StringCopy(&(Global_970921.f_36), unk_0x9D31BF793B85169E(0), 24);
								Global_970921.f_71 = unk_0xE309CC7AB7625FA6(0);
								StringCopy(&(Global_970921.f_42), sParam1, 24);
								Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_19 = { Global_970921.f_12 };
								func_157(&iVar1, &uVar0, &Global_970921);
								uParam0->f_8 = 0;
							}
							else
							{
								StringCopy(&(Global_969359.f_12), unk_0x36B72F8AF752C1F3(0), 64);
								StringCopy(&(Global_969359.f_36), unk_0x9D31BF793B85169E(0), 24);
								Global_969359.f_71 = unk_0xE309CC7AB7625FA6(0);
								StringCopy(&(Global_969359.f_42), sParam1, 24);
								Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_19 = { Global_969359.f_12 };
								func_157(&iVar1, &uVar0, &Global_969359);
								uParam0->f_8 = 0;
							}
							func_93();
							func_91(uParam0, 10);
						}
						else
						{
							func_234(uParam0, 1, 1);
							*uParam0 = 0;
							func_107();
							return 1;
						}
					}
					else if (iParam2 == 4)
					{
						if (unk_0x56FC6A7D8D4BEE67(0))
						{
							if (uParam0->f_16)
							{
								func_152(&iVar1, &uVar0, &Global_970921, iParam6);
								if (iParam6 == 1)
								{
									func_234(uParam0, 1, 1);
									*uParam0 = 1;
									func_107();
									return 1;
								}
								StringCopy(&(Global_970921.f_12), unk_0x36B72F8AF752C1F3(0), 64);
								StringCopy(&(Global_970921.f_36), unk_0x9D31BF793B85169E(0), 24);
								StringCopy(&(Global_970921.f_42), sParam1, 24);
								Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_19 = { Global_970921.f_12 };
								uParam0->f_8 = 0;
							}
							else
							{
								func_152(&iVar1, &uVar0, &Global_969359, iParam6);
								if (iParam6 == 1)
								{
									func_234(uParam0, 1, 1);
									*uParam0 = 1;
									func_107();
									return 1;
								}
								StringCopy(&(Global_969359.f_12), unk_0x36B72F8AF752C1F3(0), 64);
								StringCopy(&(Global_969359.f_36), unk_0x9D31BF793B85169E(0), 24);
								StringCopy(&(Global_969359.f_42), sParam1, 24);
								Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_19 = { Global_969359.f_12 };
								uParam0->f_8 = 0;
							}
							func_93();
							func_91(uParam0, 10);
						}
						else
						{
							func_234(uParam0, 1, 1);
							*uParam0 = 0;
							func_107();
							return 1;
						}
					}
				}
				else
				{
					func_234(uParam0, 1, 1);
					*uParam0 = 0;
					func_107();
					return 1;
				}
			}
			break;
		
		case 4:
			if (unk_0xCFD528EC9DC8FEF3(uParam0->f_5))
			{
				if (uParam0->f_2)
				{
					uParam0->f_2 = 0;
					unk_0x39C6D32CD560BA7C();
				}
				if (unk_0x0582CC04BF2C7DB2(uParam0->f_5))
				{
					func_91(uParam0, 6);
				}
				else if (uParam0->f_22 != 1)
				{
					uParam0->f_22 = 1;
					uParam0->f_3 = 1;
					func_91(uParam0, 0);
					return 0;
				}
				else
				{
					func_234(uParam0, 1, 1);
					*uParam0 = 0;
					func_107();
					return 1;
				}
			}
			else if (func_151() || func_150() == 4)
			{
				if (uParam0->f_2 == 0)
				{
					uParam0->f_2 = 1;
					unk_0xDC96797B53DF25D3("FMMC_DOWNLOAD");
					unk_0x6349285C2B22C0E9(5);
				}
			}
			break;
		
		case 6:
			if ((bParam13 && !func_149()) && !bParam14)
			{
				return 0;
			}
			if (unk_0xA01937EC1118BD06(uParam0->f_5))
			{
				if (unk_0x190D42D62F406949(uParam0->f_5))
				{
					if (bParam3)
					{
						if (bParam13)
						{
							func_215(1, 1, bParam11);
						}
						if ((uParam0->f_21 != -1 && uParam0->f_22 != -1) && iParam2 == 0)
						{
							Global_1626500.f_84517 = 1;
							Global_1626500.f_84506 = 1;
							StringCopy(&(Global_1626500.f_83843), "", 64);
							StringCopy(&(Global_1626500.f_83890), "", 24);
							StringCopy(&(Global_1626500.f_83868), "RockStar", 24);
							if (bParam10)
							{
								StringCopy(&(Global_1626500.f_84154), sParam1, 24);
							}
							uParam0->f_34 = uParam0->f_22;
						}
						else
						{
							Global_1626500.f_83867 = unk_0x3BB8D1C5FAAB25B3(unk_0x17E10681B09838B7(0));
							StringCopy(&(Global_1626500.f_83890), unk_0x3EA5DFB8CC193277(0), 24);
							Global_1626500.f_84517 = unk_0xE309CC7AB7625FA6(0);
							if (Global_1626500.f_84517 == 1 || Global_1626500.f_84517 == 2)
							{
								StringCopy(&(Global_1626500.f_83868), "RockStar", 24);
							}
							else
							{
								StringCopy(&(Global_1626500.f_83868), unk_0x3EA5DFB8CC193277(0), 24);
							}
							if ((Global_1626500.f_84517 == 0 || Global_1626500.f_84517 == 3) && unk_0xB26C2302EE729129(0))
							{
								StringCopy(&(Global_1626500.f_83843), unk_0xCF66111B26743875(unk_0x0C1D3C552325765B()), 64);
							}
							else if ((unk_0x15B0CAB107CFCDE1() && (Global_1626500.f_84517 == 0 || Global_1626500.f_84517 == 3)) && func_148(&iVar33, &(Global_1626500.f_83890)))
							{
								StringCopy(&(Global_1626500.f_83843), unk_0xCF66111B26743875(iVar33), 64);
							}
							else
							{
								StringCopy(&(Global_1626500.f_83843), unk_0x3A10831BB06988C2(0), 64);
							}
							Global_1626500.f_84174 = unk_0x019EBCC5545E343E(0, 0);
							Global_1626500.f_84508 = unk_0x90872B305F675E85(0);
							uParam0->f_23 = func_78(0);
							Global_1626500.f_97542 = uParam0->f_23;
							if (bParam10)
							{
								StringCopy(&(Global_1626500.f_84154), unk_0x9D31BF793B85169E(0), 24);
							}
							if (Global_1626500.f_84517 == 0 || Global_1626500.f_84517 == 3)
							{
								if ((unk_0x0C91F6E546095BE6(0, &uVar4) && unk_0xD478D67F6AAE84CA(&uVar4, 13)) && unk_0x74A87F4BE7FE0199(&uVar4))
								{
									Var17 = { Global_1626500.f_83843 };
									func_147(1, Var17);
								}
								else
								{
									func_147(0, Var17);
								}
							}
							else
							{
								func_147(0, Var17);
							}
							Global_1626500.f_8 = func_74(unk_0xC09BFD51C1B64460(0, 0), unk_0x019EBCC5545E343E(0, 0));
							if (unk_0x48D11B635E2B710D(uParam0->f_7))
							{
								Global_1626500.f_84507 = unk_0x60336C3CEF6AD6FD(0);
								Global_1626500.f_84509 = 1;
							}
							else
							{
								Global_1626500.f_84507 = 0;
								Global_1626500.f_84509 = 0;
							}
							Global_1626500.f_84506 = unk_0xFB8721978BAEE721(0);
							uParam0->f_34 = unk_0xB619CECF18FA6B00(0);
							if (!func_100())
							{
								if (unk_0x5F893A1517F11B23(uParam0->f_34))
								{
									uParam0->f_30 = unk_0xF6D1A660E8025778(0);
								}
								else
								{
									uParam0->f_30 = -1;
								}
							}
							Global_1626500.f_84173 = uParam0->f_30;
							Global_2443212.f_4166.f_3 = unk_0x564B5FE1D4129D47(0, 0);
							Global_2443212.f_4166.f_2 = unk_0xEB0A2EC9E0CF2246(0, 0);
							if (Global_1626500.f_84517 == 1 || Global_1626500.f_84517 == 2)
							{
								StringCopy(&(Global_1626500.f_83843), func_75(), 64);
							}
						}
						if (!bParam10)
						{
							StringCopy(&(Global_1626500.f_84154), sParam1, 24);
						}
						uParam0->f_31 = 0;
						if (!func_100())
						{
							func_158(uParam0->f_34, bParam11, (bParam13 || bParam14), uParam0->f_31);
							if (bParam13 || bParam14)
							{
								func_91(uParam0, 5);
								return 0;
							}
						}
						else
						{
							func_158(-1, bParam11, 0, 0);
						}
						if (func_144(uParam0, iParam2, bParam13, bParam9))
						{
							return 1;
						}
					}
					else
					{
						iVar1 = unk_0x3B1556D715F2C85D();
						iVar2 = unk_0x458C2A004F0678D0(iVar1, "mission");
						iVar3 = unk_0x458C2A004F0678D0(iVar2, "gen");
						StringCopy(&(Global_2432628.f_3205), unk_0x36B72F8AF752C1F3(0), 32);
						Global_2432628.f_3205.f_8 = unk_0x9C70ABDC70E0A0CF(iVar3, "type");
						uParam0->f_17 = unk_0x48D11B635E2B710D(0);
						*uParam0 = 1;
						func_107();
						unk_0x68A93B99DA27BA14(uParam0->f_5);
						func_93();
						return 1;
					}
					unk_0x68A93B99DA27BA14(uParam0->f_5);
					func_93();
				}
				else if (iParam2 == 0)
				{
					func_234(uParam0, 1, 1);
					uParam0->f_41.f_3 = 0;
					*uParam0 = 0;
					uParam0->f_1 = 1;
					func_107();
					return 1;
				}
				else
				{
					uParam0->f_8++;
					if (uParam0->f_8 > 1000)
					{
						func_234(uParam0, 1, 1);
						uParam0->f_41.f_3 = 0;
						*uParam0 = 0;
						func_107();
						return 1;
					}
				}
			}
			break;
		
		case 5:
			func_158(uParam0->f_34, bParam11, (bParam13 || bParam14), uParam0->f_31);
			if (uParam0->f_31 >= 6)
			{
				if (func_144(uParam0, iParam2, (bParam13 || bParam14), bParam9))
				{
					return 1;
				}
			}
			uParam0->f_31++;
			break;
		
		case 9:
			if (func_142(uParam0, 0, bParam3, 0))
			{
				func_91(uParam0, 0);
				func_93();
				if ((((func_136(Global_1626500.f_83867) && func_121()) && !bParam9) && !unk_0x509383441597090D(&(Global_1626500.f_84160[0 /*6*/]))) && (func_151() || (func_131() && !func_130())))
				{
					uParam0->f_8 = 0;
					func_91(uParam0, 19);
					return 0;
				}
				if ((uParam5 || bParam7) && !bParam13)
				{
					if (bParam7 || uParam5)
					{
						uParam0->f_23 = func_78(0);
						uParam0->f_21 = unk_0x3381AB4606CD8164(0, uParam0->f_23);
					}
					func_129(&(uParam0->f_41), 0);
					func_91(uParam0, 18);
				}
				else
				{
					uParam0->f_41.f_3 = 1;
					func_234(uParam0, 1, 0);
					func_107();
					return 1;
				}
			}
			break;
		
		case 19:
			if (unk_0x4320BB821F0F53C3(&(Global_1626500.f_84160[0 /*6*/]), 1, func_88(iParam2)))
			{
				func_91(uParam0, 21);
			}
			break;
		
		case 21:
			if (unk_0x161DD964F13BF7F6())
			{
				uParam0->f_40 = unk_0xA776300BA6E5DD85();
				if (unk_0xEA8C30A26FD38881())
				{
				}
				else
				{
					func_234(uParam0, 1, 1);
					uParam0->f_40 = unk_0xA776300BA6E5DD85();
					*uParam0 = 0;
					func_107();
					return 1;
				}
				if (unk_0xFC067E57AE592CE2() > 0)
				{
					uParam0->f_5 = unk_0x171DF6A0C07FB3DC(0, 0);
					unk_0x2DC0DF5A362EF86B(uParam0->f_5);
					func_91(uParam0, 22);
				}
				else
				{
					func_234(uParam0, 1, 1);
					*uParam0 = 0;
					func_107();
					return 1;
				}
			}
			break;
		
		case 22:
			if (unk_0xCFD528EC9DC8FEF3(uParam0->f_5))
			{
				if (unk_0x0582CC04BF2C7DB2(uParam0->f_5))
				{
					func_91(uParam0, 23);
				}
				else if (uParam0->f_22 != 1)
				{
					uParam0->f_22 = 1;
					uParam0->f_3 = 1;
					func_91(uParam0, 0);
					return 0;
				}
				else
				{
					func_234(uParam0, 1, 1);
					*uParam0 = 0;
					func_107();
					return 1;
				}
			}
			break;
		
		case 23:
			if (unk_0xA01937EC1118BD06(uParam0->f_5))
			{
				if (unk_0x190D42D62F406949(uParam0->f_5))
				{
					func_126();
					func_234(uParam0, 1, 0);
					Global_1625255 = 1;
					func_107();
					*uParam0 = 1;
					return 1;
				}
				else
				{
					func_234(uParam0, 1, 1);
					uParam0->f_41.f_3 = 0;
					*uParam0 = 0;
					uParam0->f_1 = 1;
					func_107();
					return 1;
				}
			}
			break;
		
		case 18:
			if (unk_0x08BA6DD398CA197C(Global_1626500.f_7, 0))
			{
				if (bParam7)
				{
					if (func_125(&(uParam0->f_41), sParam1, uParam0->f_21, uParam0->f_23))
					{
						func_234(uParam0, 1, 0);
						uParam0->f_41.f_3 = 1;
						uParam0->f_41.f_1 = 0;
						func_107();
						return 1;
					}
				}
				else
				{
					StringCopy(&(uParam0->f_41.f_4), sParam1, 64);
					uParam0->f_41.f_3 = 1;
					func_234(uParam0, 1, 0);
					func_107();
					return 1;
				}
			}
			else
			{
				uParam0->f_41.f_3 = 1;
				func_234(uParam0, 1, 1);
				func_107();
				return 1;
			}
			break;
		
		case 10:
			if (func_142(uParam0, 0, bParam3, iParam2))
			{
				func_93();
				func_91(uParam0, 11);
			}
			break;
		
		case 11:
			if (uParam0->f_16)
			{
				if (unk_0xE91C886B0A161DC7(&(Global_970921.f_1177), Global_970921.f_65, func_88(0)))
				{
					func_91(uParam0, 12);
				}
			}
			else if (unk_0xE91C886B0A161DC7(&(Global_969359.f_1177), Global_969359.f_65, func_88(0)))
			{
				func_91(uParam0, 12);
			}
			break;
		
		case 12:
			if (unk_0x161DD964F13BF7F6())
			{
				if (unk_0xEA8C30A26FD38881())
				{
				}
				else
				{
					func_234(uParam0, 1, 1);
					uParam0->f_40 = unk_0xA776300BA6E5DD85();
					*uParam0 = 0;
					func_107();
					return 1;
				}
				if (unk_0xFC067E57AE592CE2() > 0)
				{
					if (uParam0->f_16)
					{
						Global_970921.f_65 = unk_0xFC067E57AE592CE2();
					}
					else
					{
						Global_969359.f_65 = unk_0xFC067E57AE592CE2();
					}
					uParam0->f_8 = 0;
					func_234(uParam0, 0, bParam8);
					func_156(uParam0);
					func_91(uParam0, 13);
				}
				else
				{
					func_234(uParam0, 1, 1);
					*uParam0 = 0;
					func_107();
					return 1;
				}
			}
			break;
		
		case 13:
			if (func_100())
			{
				if (uParam0->f_16)
				{
					uParam0->f_9 = 0;
					while (uParam0->f_9 <= (Global_970921.f_65 - 1))
					{
						if (unk_0x40C8244ED0CAE8DE(&(Global_970921.f_1177[uParam0->f_9 /*6*/])))
						{
							func_124(uParam0, &Global_970921);
							unk_0xBEFF7D83F94DDC49();
						}
						uParam0->f_9++;
					}
					func_107();
					return 1;
				}
				else
				{
					uParam0->f_9 = 0;
					while (uParam0->f_9 <= (Global_969359.f_65 - 1))
					{
						if (unk_0x40C8244ED0CAE8DE(&(Global_969359.f_1177[uParam0->f_9 /*6*/])))
						{
							func_124(uParam0, &Global_969359);
							unk_0xBEFF7D83F94DDC49();
						}
						uParam0->f_9++;
					}
					func_107();
					return 1;
				}
			}
			else if (uParam0->f_16)
			{
				if (func_123(uParam0, &Global_970921))
				{
					if (uParam0->f_27)
					{
						func_234(uParam0, 1, bParam8);
						*uParam0 = 0;
						uParam0->f_27 = 1;
						func_107();
						return 1;
					}
					else
					{
						func_91(uParam0, 17);
						*uParam0 = 1;
					}
				}
			}
			else if (func_123(uParam0, &Global_969359))
			{
				if (uParam0->f_27)
				{
					func_234(uParam0, 1, 1);
					*uParam0 = 0;
					uParam0->f_27 = 1;
					func_107();
					return 1;
				}
				else
				{
					func_91(uParam0, 17);
					*uParam0 = 1;
				}
			}
			break;
		
		case 17:
			func_91(uParam0, 0);
			func_93();
			func_234(uParam0, 1, bParam8);
			*uParam0 = 1;
			func_107();
			return 1;
			break;
	}
	return 0;
}

int func_123(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (uParam1->f_65 - 1))
	{
		if (unk_0x56FC6A7D8D4BEE67(uParam0->f_7))
		{
			if (!func_154(uParam0->f_24, uParam0->f_25, unk_0x3EA5DFB8CC193277(0), unk_0xE309CC7AB7625FA6(0)))
			{
				uParam0->f_27 = 1;
				return 1;
			}
			func_124(uParam0, uParam1);
			uParam0->f_9++;
		}
		else
		{
			uParam0->f_8++;
		}
		if (uParam0->f_8 > 200)
		{
			func_93();
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

void func_124(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0x3B1556D715F2C85D();
	iVar1 = unk_0x458C2A004F0678D0(iVar0, "mission");
	iVar2 = unk_0x458C2A004F0678D0(iVar1, "gen");
	uParam1->f_72[uParam0->f_9 /*69*/].f_45 = { func_77(iVar2, "start") };
	if (func_100())
	{
		StringCopy(&(uParam1->f_72[uParam0->f_9 /*69*/].f_12), unk_0x2A1C48CBD532E1D8(iVar2, "nm"), 64);
	}
	else
	{
		StringCopy(&(uParam1->f_72[uParam0->f_9 /*69*/].f_12), unk_0x36B72F8AF752C1F3(uParam0->f_7), 64);
	}
	if (!func_100())
	{
		uParam1->f_72[uParam0->f_9 /*69*/].f_44 = unk_0xF6D1A660E8025778(uParam0->f_7);
	}
	uParam1->f_72[uParam0->f_9 /*69*/].f_68 = unk_0xE309CC7AB7625FA6(uParam0->f_7);
	uParam1->f_72[uParam0->f_9 /*69*/].f_56 = unk_0x9C70ABDC70E0A0CF(iVar2, "min");
	uParam1->f_72[uParam0->f_9 /*69*/].f_59 = unk_0x9C70ABDC70E0A0CF(iVar2, "tnum");
	uParam1->f_72[uParam0->f_9 /*69*/].f_60 = unk_0x9C70ABDC70E0A0CF(iVar2, "num");
	uParam1->f_72[uParam0->f_9 /*69*/].f_54 = unk_0x9C70ABDC70E0A0CF(iVar2, "type");
	uParam1->f_72[uParam0->f_9 /*69*/].f_55 = unk_0x9C70ABDC70E0A0CF(iVar2, "subtype");
	uParam1->f_72[uParam0->f_9 /*69*/].f_48 = { func_77(iVar2, "cam") };
	uParam1->f_72[uParam0->f_9 /*69*/].f_51 = { func_76(iVar2) };
	uParam1->f_72[uParam0->f_9 /*69*/].f_66 = unk_0x9C70ABDC70E0A0CF(iVar2, "adverm");
	uParam1->f_72[uParam0->f_9 /*69*/].f_57 = func_78(uParam0->f_7);
	StringCopy(&(uParam1->f_72[uParam0->f_9 /*69*/].f_6), unk_0x3A10831BB06988C2(uParam0->f_7), 24);
	if (!func_100())
	{
		uParam1->f_72[uParam0->f_9 /*69*/].f_61 = func_74(unk_0xC09BFD51C1B64460(uParam0->f_7, 0), unk_0x019EBCC5545E343E(uParam0->f_7, 0));
	}
	if (func_104() != 2)
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
	uParam1->f_72[uParam0->f_9 /*69*/].f_58 = unk_0x9C70ABDC70E0A0CF(iVar2, "rank");
	func_73(uParam1->f_72[uParam0->f_9 /*69*/].f_54, &(uParam1->f_72[uParam0->f_9 /*69*/].f_60), &(uParam1->f_72[uParam0->f_9 /*69*/].f_56));
	if (uParam1->f_6 < uParam1->f_72[uParam0->f_9 /*69*/].f_56)
	{
		uParam1->f_6 = uParam1->f_72[uParam0->f_9 /*69*/].f_56;
	}
	if (uParam1->f_7 > uParam1->f_72[uParam0->f_9 /*69*/].f_60 || uParam1->f_7 == 0)
	{
		uParam1->f_7 = uParam1->f_72[uParam0->f_9 /*69*/].f_60;
	}
	uParam1->f_72[uParam0->f_9 /*69*/].f_67 = 1;
	unk_0x88B0F0DC270164B7(&(uParam1->f_72[uParam0->f_9 /*69*/].f_64), 13);
	StringCopy(&(uParam1->f_72[uParam0->f_9 /*69*/]), unk_0x9D31BF793B85169E(uParam0->f_9), 24);
	uParam0->f_8 = 0;
	uParam0->f_7++;
	if (unk_0x3B1556D715F2C85D() != 0)
	{
		unk_0x4177D875818DE411();
	}
	if (!func_100())
	{
		StringCopy(&(uParam1->f_1177[uParam0->f_9 /*6*/]), unk_0x9D31BF793B85169E(uParam0->f_9), 24);
		if (unk_0x48D11B635E2B710D(uParam0->f_9))
		{
			unk_0x88B0F0DC270164B7(&(uParam1->f_72[uParam0->f_9 /*69*/].f_64), 14);
			if (unk_0x3B1556D715F2C85D() != 0)
			{
				unk_0x4177D875818DE411();
			}
		}
	}
}

int func_125(var uParam0, char* sParam1, var uParam2, var uParam3)
{
	switch (uParam0->f_1)
	{
		case 0:
			if (*uParam0 != 0)
			{
				unk_0xF7C48D68605AC38E(*uParam0);
			}
			unk_0x18835F827E1ACEEB();
			uParam0->f_1 = 1;
			break;
		
		case 1:
			if (unk_0xA92DDFD054CF59A7(sParam1, uParam3, uParam2, 0))
			{
				uParam0->f_1 = 2;
			}
			break;
		
		case 2:
			switch (unk_0xA0CE7C73914BF3E2(unk_0x8622F1C69F2AFFC2(0, uParam3)))
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
							unk_0xF7C48D68605AC38E(*uParam0);
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

void func_126()
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
	
	iVar0 = unk_0x3B1556D715F2C85D();
	iVar1 = unk_0x458C2A004F0678D0(iVar0, "mission");
	iVar2 = unk_0x458C2A004F0678D0(iVar1, "endcon");
	iVar3 = unk_0x458C2A004F0678D0(iVar1, "ene");
	iVar4 = unk_0x9C70ABDC70E0A0CF(iVar3, "no");
	iVar5 = unk_0x94A922605867FB40(iVar3, "loc");
	iVar6 = unk_0x458C2A004F0678D0(iVar1, "goto");
	iVar7 = unk_0x9C70ABDC70E0A0CF(iVar6, "no");
	iVar8 = unk_0x458C2A004F0678D0(iVar1, "veh");
	iVar9 = unk_0x9C70ABDC70E0A0CF(iVar8, "no");
	iVar10 = unk_0x94A922605867FB40(iVar8, "loc");
	iVar11 = unk_0x458C2A004F0678D0(iVar1, "obj");
	iVar12 = unk_0x9C70ABDC70E0A0CF(iVar11, "no");
	iVar13 = unk_0x94A922605867FB40(iVar11, "loc");
	iVar14 = 0;
	while (iVar14 <= (Global_1626500.f_27 - 1))
	{
		if (iVar14 < 4)
		{
			Global_1625255.f_1[iVar14] = unk_0x7A66412A2B47CF10(unk_0x94A922605867FB40(iVar2, "nrl"), iVar14);
			StringCopy(&cVar16, "txt", 16);
			StringIntConCat(&cVar16, iVar14, 16);
			uVar20[iVar14] = unk_0x94A922605867FB40(iVar2, &cVar16);
			StringCopy(&cVar16, "irbs", 16);
			StringIntConCat(&cVar16, iVar14, 16);
			uVar25[iVar14] = unk_0x94A922605867FB40(iVar2, &cVar16);
			StringCopy(&cVar16, "irbs2", 16);
			StringIntConCat(&cVar16, iVar14, 16);
			uVar30[iVar14] = unk_0x94A922605867FB40(iVar2, &cVar16);
			iVar15 = 0;
			while (iVar15 <= (Global_1625255.f_1[iVar14] - 1))
			{
				Global_1625255.f_6[iVar14 /*18*/][iVar15] = unk_0x7A66412A2B47CF10(uVar25[iVar14], iVar15);
				Global_1625255.f_79[iVar14 /*18*/][iVar15] = unk_0x7A66412A2B47CF10(uVar30[iVar14], iVar15);
				if (uVar20[iVar14] != 0)
				{
					StringCopy(&(Global_1625255.f_152[iVar14 /*273*/][iVar15 /*16*/]), unk_0xFC74DD7217B3E5DB(uVar20[iVar14], iVar15), 64);
				}
				else
				{
					StringCopy(&(Global_1625255.f_152[iVar14 /*273*/][iVar15 /*16*/]), "", 64);
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
	while (iVar80 <= (Global_1626500.f_27 - 1))
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
		while (iVar14 < Global_1625255.f_1[iVar80])
		{
			if ((!unk_0x08BA6DD398CA197C(Global_1625255.f_6[iVar80 /*18*/][iVar14], 11) && !unk_0x08BA6DD398CA197C(Global_1625255.f_79[iVar80 /*18*/][iVar14], 21)) && iVar81 < 8)
			{
				iVar92[iVar81] = iVar14;
				iVar81++;
			}
			iVar14++;
		}
		StringCopy(&cVar16, "rule", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar60[iVar80] = unk_0x94A922605867FB40(iVar8, &cVar16);
		StringCopy(&cVar16, "pri", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar65[iVar80] = unk_0x94A922605867FB40(iVar8, &cVar16);
		iVar14 = 0;
		while (iVar14 < iVar9)
		{
			iVar15 = unk_0x7A66412A2B47CF10(uVar60[iVar80], iVar14);
			iVar193 = unk_0x7A66412A2B47CF10(uVar65[iVar80], iVar14);
			if (((((iVar193 != -1 && iVar193 < 17) && iVar15 != 0) && iVar15 != 99999) && !unk_0x08BA6DD398CA197C(Global_1625255.f_6[iVar80 /*18*/][iVar193], 11)) && !unk_0x08BA6DD398CA197C(Global_1625255.f_79[iVar80 /*18*/][iVar193], 21))
			{
				iVar91 = func_128(&iVar92, iVar193, iVar81);
				if (iVar91 != -1 && iVar82[iVar91] < 10)
				{
					Global_1740976.f_407[iVar91 /*295*/].f_125[iVar80 /*31*/][iVar82[iVar91] /*3*/] = { unk_0x219E9678C4D55F3E(iVar10, iVar14) };
					Global_1740976.f_407[iVar91 /*295*/].f_250[iVar80 /*11*/][iVar82[iVar91]] = 1;
					Global_1740976.f_407[iVar91 /*295*/][iVar80 /*31*/][iVar82[iVar91] /*3*/] = { func_127(iVar15, 1) };
					iVar82[iVar91]++;
				}
			}
			iVar14++;
		}
		StringCopy(&cVar16, "rule", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar70[iVar80] = unk_0x94A922605867FB40(iVar11, &cVar16);
		StringCopy(&cVar16, "pri", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar75[iVar80] = unk_0x94A922605867FB40(iVar11, &cVar16);
		iVar14 = 0;
		while (iVar14 < iVar12)
		{
			iVar15 = unk_0x7A66412A2B47CF10(uVar70[iVar80], iVar14);
			iVar193 = unk_0x7A66412A2B47CF10(uVar75[iVar80], iVar14);
			if (((((iVar193 != -1 && iVar193 < 17) && iVar15 != 0) && iVar15 != 99999) && !unk_0x08BA6DD398CA197C(Global_1625255.f_6[iVar80 /*18*/][iVar193], 11)) && !unk_0x08BA6DD398CA197C(Global_1625255.f_79[iVar80 /*18*/][iVar193], 21))
			{
				iVar91 = func_128(&iVar92, iVar193, iVar81);
				if (iVar91 != -1 && iVar82[iVar91] < 10)
				{
					Global_1740976.f_407[iVar91 /*295*/].f_125[iVar80 /*31*/][iVar82[iVar91] /*3*/] = { unk_0x219E9678C4D55F3E(iVar13, iVar14) };
					Global_1740976.f_407[iVar91 /*295*/].f_250[iVar80 /*11*/][iVar82[iVar91]] = 1;
					Global_1740976.f_407[iVar91 /*295*/][iVar80 /*31*/][iVar82[iVar91] /*3*/] = { func_127(iVar15, 3) };
					iVar82[iVar91]++;
				}
			}
			iVar14++;
		}
		StringCopy(&cVar16, "rl", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar45[iVar80] = unk_0x94A922605867FB40(iVar6, &cVar16);
		StringCopy(&cVar16, "pri", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar50[iVar80] = unk_0x94A922605867FB40(iVar6, &cVar16);
		StringCopy(&cVar16, "loc", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar55[iVar80] = unk_0x94A922605867FB40(iVar6, &cVar16);
		iVar14 = 0;
		while (iVar14 < iVar7)
		{
			iVar193 = unk_0x7A66412A2B47CF10(uVar50[iVar80], iVar14);
			iVar15 = unk_0x7A66412A2B47CF10(uVar45[iVar80], iVar14);
			if (((((iVar193 != -1 && iVar193 < 17) && iVar15 != 0) && iVar15 != 99999) && !unk_0x08BA6DD398CA197C(Global_1625255.f_6[iVar80 /*18*/][iVar193], 11)) && !unk_0x08BA6DD398CA197C(Global_1625255.f_79[iVar80 /*18*/][iVar193], 21))
			{
				iVar91 = func_128(&iVar92, iVar193, iVar81);
				if (iVar91 != -1 && iVar82[iVar91] < 10)
				{
					Global_1740976.f_407[iVar91 /*295*/].f_125[iVar80 /*31*/][iVar82[iVar91] /*3*/] = { unk_0x219E9678C4D55F3E(uVar55[iVar80], iVar14) };
					Global_1740976.f_407[iVar91 /*295*/].f_250[iVar80 /*11*/][iVar82[iVar91]] = 1;
					Global_1740976.f_407[iVar91 /*295*/][iVar80 /*31*/][iVar82[iVar91] /*3*/] = { func_127(iVar15, 4) };
					iVar82[iVar91]++;
				}
			}
			iVar14++;
		}
		StringCopy(&cVar16, "rule", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar35[iVar80] = unk_0x94A922605867FB40(iVar3, &cVar16);
		StringCopy(&cVar16, "pri", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar40[iVar80] = unk_0x94A922605867FB40(iVar3, &cVar16);
		iVar14 = 0;
		while (iVar14 < iVar4)
		{
			iVar193 = unk_0x7A66412A2B47CF10(uVar40[iVar80], iVar14);
			iVar15 = unk_0x7A66412A2B47CF10(uVar35[iVar80], iVar14);
			if (((((iVar193 != -1 && iVar193 < 17) && iVar15 != 0) && iVar15 != 99999) && !unk_0x08BA6DD398CA197C(Global_1625255.f_6[iVar80 /*18*/][iVar193], 11)) && !unk_0x08BA6DD398CA197C(Global_1625255.f_79[iVar80 /*18*/][iVar193], 21))
			{
				iVar91 = func_128(&iVar92, iVar193, iVar81);
				if (iVar91 != -1 && iVar82[iVar91] < 10)
				{
					iVar190 = iVar82[iVar91];
					iVar192 = 0;
					iVar191 = 0;
					while (iVar191 < 10)
					{
						if (iVar192 == 0 && Global_1740976.f_407[iVar91 /*295*/].f_250[iVar80 /*11*/][iVar191] == 2)
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
					Var194 = { unk_0x219E9678C4D55F3E(iVar5, iVar14) };
					Global_1740976.f_407[iVar91 /*295*/].f_125[iVar80 /*31*/][iVar190 /*3*/] = Var194.f_0;
					Global_1740976.f_407[iVar91 /*295*/].f_125[iVar80 /*31*/][iVar190 /*3*/].f_1 = Var194.f_1;
					Var101[iVar91 /*11*/][iVar190]++;
					Global_1740976.f_407[iVar91 /*295*/].f_250[iVar80 /*11*/][iVar190] = 2;
					Global_1740976.f_407[iVar91 /*295*/][iVar80 /*31*/][iVar190 /*3*/] = { func_127(iVar15, 2) };
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
				if (Global_1740976.f_407[iVar14 /*295*/].f_250[iVar80 /*11*/][iVar191] == 2)
				{
					Global_1740976.f_407[iVar14 /*295*/].f_125[iVar80 /*31*/][iVar191 /*3*/] = (Global_1740976.f_407[iVar14 /*295*/].f_125[iVar80 /*31*/][iVar191 /*3*/] / IntToFloat(Var101[iVar14 /*11*/][iVar191]));
					Global_1740976.f_407[iVar14 /*295*/].f_125[iVar80 /*31*/][iVar191 /*3*/].f_1 = (Global_1740976.f_407[iVar14 /*295*/].f_125[iVar80 /*31*/][iVar191 /*3*/].f_1 / IntToFloat(Var101[iVar14 /*11*/][iVar191]));
				}
				iVar191++;
			}
			iVar14++;
		}
		iVar80++;
	}
	if (unk_0x3B1556D715F2C85D() != 0)
	{
		unk_0x4177D875818DE411();
	}
}

Vector3 func_127(int iParam0, int iParam1)
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

int func_128(int iParam0, int iParam1, int iParam2)
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

void func_129(var uParam0, bool bParam1)
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
		unk_0xF7C48D68605AC38E(*uParam0);
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

bool func_130()
{
	return Global_2442442.f_597;
}

int func_131()
{
	if (((func_135() || func_134()) || func_133()) || func_132())
	{
		return 1;
	}
	return 0;
}

bool func_132()
{
	return unk_0x08BA6DD398CA197C(Global_2442442, 1);
}

bool func_133()
{
	return unk_0x08BA6DD398CA197C(Global_2442442, 2);
}

bool func_134()
{
	return unk_0x08BA6DD398CA197C(Global_2442442, 20);
}

var func_135()
{
	return Global_2442442.f_576;
}

int func_136(int iParam0)
{
	if ((((func_141(iParam0) || func_140(iParam0)) || func_139(iParam0)) || func_138(iParam0)) || func_137(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_137(int iParam0)
{
	return iParam0 == Global_262145.f_7354;
}

bool func_138(int iParam0)
{
	return iParam0 == Global_262145.f_7348;
}

bool func_139(int iParam0)
{
	return iParam0 == Global_262145.f_7342;
}

bool func_140(int iParam0)
{
	return iParam0 == Global_262145.f_7335;
}

bool func_141(int iParam0)
{
	return iParam0 == Global_262145.f_7330;
}

int func_142(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	if (func_97())
	{
		uParam0->f_19 = 0;
		return 1;
	}
	if (func_100())
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
			func_93();
			func_143();
			Global_1729823.f_5 = 0;
			uParam0->f_8 = 0;
			if (iParam3 == 1)
			{
				Global_1729848.f_5 = 0;
				Global_1729848.f_4 = 0;
				Global_1729848.f_1 = 0;
				Global_1729848.f_2 = 0;
				return 1;
			}
			else if (iParam3 == 4)
			{
				Global_1729848.f_5 = 0;
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
			if (unk_0x35691E6BA48C66D6(iParam1, 1))
			{
				if (iParam3 == 4)
				{
					iVar0 = unk_0x3B1556D715F2C85D();
					Global_1729854 = unk_0x9C70ABDC70E0A0CF(iVar0, "pt");
					Global_1729854.f_1 = unk_0x9C70ABDC70E0A0CF(iVar0, "pu");
					Global_1729854.f_2 = unk_0x9C70ABDC70E0A0CF(iVar0, "ft");
					Global_1729854.f_3 = unk_0x9C70ABDC70E0A0CF(iVar0, "fu");
					Global_1729854.f_4 = unk_0x9C70ABDC70E0A0CF(iVar0, "qt");
					Global_1729854.f_5 = unk_0x9C70ABDC70E0A0CF(iVar0, "qu");
				}
				else
				{
					iVar0 = unk_0x3B1556D715F2C85D();
					Global_1729823.f_10 = unk_0xBBDA792448DB5A89(unk_0x9C70ABDC70E0A0CF(iVar0, "dt"));
					Global_1729823.f_11 = unk_0xBBDA792448DB5A89(unk_0x9C70ABDC70E0A0CF(iVar0, "du"));
					Global_1729823.f_9 = (Global_1729823.f_10 / Global_1729823.f_11);
					Global_1729823.f_13 = unk_0xBBDA792448DB5A89(unk_0x9C70ABDC70E0A0CF(iVar0, "pt"));
					Global_1729823.f_14 = unk_0xBBDA792448DB5A89(unk_0x9C70ABDC70E0A0CF(iVar0, "pu"));
					Global_977932 = unk_0xF2DB717A73826179(Global_1729823.f_14);
					Global_1729823.f_12 = (Global_1729823.f_13 / Global_1729823.f_14);
					Global_1729823.f_15 = unk_0xBBDA792448DB5A89(unk_0x9C70ABDC70E0A0CF(iVar0, "qt"));
					Global_1729823.f_17 = unk_0xBBDA792448DB5A89(unk_0x9C70ABDC70E0A0CF(iVar0, "qu"));
					Global_1729823.f_16 = (Global_1729823.f_15 / Global_1729823.f_17);
				}
				if (unk_0x3B1556D715F2C85D() != 0)
				{
					unk_0x4177D875818DE411();
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
			if (unk_0x48D11B635E2B710D(iParam1))
			{
				if (bParam2)
				{
					if (unk_0xBADE376DB96EF51E(iParam1))
					{
						iVar0 = unk_0x3B1556D715F2C85D();
						if (iParam3 == 0)
						{
							Global_1729823 = unk_0x9C70ABDC70E0A0CF(iVar0, "quit");
							Global_1729823.f_2 = unk_0x9C70ABDC70E0A0CF(iVar0, "ply");
							Global_1729823.f_8 = unk_0x9C70ABDC70E0A0CF(iVar0, "fl");
							if (Global_1729823.f_2 > 0)
							{
								Global_1729823.f_5 = 1;
							}
							unk_0x4177D875818DE411();
						}
						else if (iParam3 == 4)
						{
							Global_1729848.f_5 = unk_0x891D0AEE12B2452B(iVar0, "won");
							Global_1729848.f_4 = unk_0x9C70ABDC70E0A0CF(iVar0, "ply");
							Global_1729848.f_1 = unk_0x9C70ABDC70E0A0CF(iVar0, "quit");
							Global_1729848.f_2 = unk_0x9C70ABDC70E0A0CF(iVar0, "fl");
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

void func_143()
{
	Global_1729823 = 0;
	Global_1729823.f_2 = 0;
	Global_1729823.f_8 = 0;
	Global_1729823.f_3 = 0;
	Global_1729823.f_6 = 0;
}

int func_144(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_146() && !bParam2)
	{
		if (uParam0->f_21 == -1 || uParam0->f_22 == -1)
		{
			if ((!func_100() && iParam1 == 0) && !bParam3)
			{
				if (Global_1626500.f_84517 == 0)
				{
					if (Global_1626500 == 0)
					{
						if (((((Global_1626500.f_2 != 6 && !unk_0x08BA6DD398CA197C(Global_1626500.f_4, 20)) && !unk_0x08BA6DD398CA197C(Global_1626500.f_4, 21)) && !unk_0x08BA6DD398CA197C(Global_1626500.f_4, 22)) && !unk_0x08BA6DD398CA197C(Global_1626500.f_4, 23)) && Global_1626500.f_2 != 5)
						{
							func_234(uParam0, 1, 1);
							uParam0->f_41.f_3 = 0;
							*uParam0 = 0;
							func_107();
							unk_0x68A93B99DA27BA14(uParam0->f_5);
							func_93();
							return 1;
						}
					}
					else if (Global_1626500 != 2 && Global_1626500 != 1)
					{
						func_234(uParam0, 1, 1);
						uParam0->f_41.f_3 = 0;
						*uParam0 = 0;
						func_107();
						unk_0x68A93B99DA27BA14(uParam0->f_5);
						func_93();
						return 1;
					}
				}
			}
		}
	}
	if (Global_1626500 == 0 && Global_1626500.f_2 == 6)
	{
		if ((uParam0->f_21 == -1 && uParam0->f_22 == -1) && !func_100())
		{
			if (!unk_0x5F893A1517F11B23(unk_0xB619CECF18FA6B00(0)))
			{
				Global_1626500.f_84504 = 1;
			}
		}
	}
	uParam0->f_8 = 0;
	if (bParam2)
	{
		func_145();
	}
	func_91(uParam0, 9);
	*uParam0 = 1;
	return 0;
}

void func_145()
{
	unk_0x88B0F0DC270164B7(&(Global_2442442.f_28.f_3), 7);
}

bool func_146()
{
	return unk_0x6E373DDF41F95D44(-1762644250);
}

void func_147(int iParam0, struct<16> Param1)
{
	if (iParam0 == 0)
	{
		StringCopy(&Global_2454015, "", 64);
	}
	else
	{
		Global_2454015 = { Param1 };
	}
	Global_2454014 = iParam0;
}

int func_148(var uParam0, var uParam1)
{
	var uVar0;
	
	if (unk_0x509383441597090D(uParam1))
	{
		return 0;
	}
	unk_0x0A1C143212EFF423(uParam1, &uVar0, 13);
	if (unk_0xD478D67F6AAE84CA(&uVar0, 13) && unk_0x1B93DF2247DCC570(&uVar0))
	{
		*uParam0 = unk_0xB3B61CF8D3DF8EB9(&uVar0);
		if (unk_0xCB129F9A01D14082(*uParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_149()
{
	return Global_2442442.f_28.f_47;
}

int func_150()
{
	return Global_2452194;
}

bool func_151()
{
	return Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_186 != 0;
}

void func_152(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	struct<2> Var16;
	var uVar51[16];
	
	*uParam0 = unk_0x3B1556D715F2C85D();
	iVar1 = unk_0x458C2A004F0678D0(*uParam0, "data");
	iVar2 = unk_0x458C2A004F0678D0(iVar1, "trg");
	*uParam1 = unk_0x94A922605867FB40(iVar2, "list");
	if (iParam3 == 1)
	{
		if (unk_0xD44C5C9A5AB591EF(*uParam0, "open") == 1)
		{
			uParam2->f_11 = unk_0x891D0AEE12B2452B(iVar1, "open");
		}
		return;
	}
	uParam2->f_11 = unk_0x891D0AEE12B2452B(iVar1, "open");
	Var3 = { func_153(unk_0x3EA5DFB8CC193277(0)) };
	unk_0x0ADE2D0C6811DC70(&Var16, 35, &Var3);
	uParam2->f_48 = { Var16.f_1 };
	uParam2->f_64 = Var16.f_0;
	uParam2->f_4 = unk_0x9C70ABDC70E0A0CF(iVar2, "scr");
	uParam2->f_5 = unk_0x9C70ABDC70E0A0CF(iVar2, "time");
	uParam2->f_1 = unk_0x9C70ABDC70E0A0CF(iVar1, "cash");
	uParam2->f_65 = unk_0x697D8F5133F938AB(*uParam1);
	iVar0 = 0;
	while (iVar0 <= (uParam2->f_65 - 1))
	{
		uVar51[iVar0] = unk_0xAFD3CCDC2E7D3A37(*uParam1, iVar0);
		StringCopy(&(uParam2->f_1177[iVar0 /*6*/]), unk_0x2A1C48CBD532E1D8(uVar51[iVar0], "cid"), 24);
		uParam2->f_72[iVar0 /*69*/].f_62 = unk_0x9C70ABDC70E0A0CF(uVar51[iVar0], "scr");
		uParam2->f_72[iVar0 /*69*/].f_63 = unk_0x9C70ABDC70E0A0CF(uVar51[iVar0], "time");
		iVar0++;
	}
}

struct<13> func_153(var uParam0)
{
	struct<13> Var0;
	
	unk_0x4A4169A57E08C334(uParam0, &Var0, 13);
	return Var0;
}

int func_154(int iParam0, bool bParam1, char* sParam2, int iParam3)
{
	struct<13> Var0;
	struct<13> Var13;
	
	if (((iParam3 == 1 || iParam3 == 2) || iParam3 == 3) || iParam3 == 4)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		Var0 = { func_153(sParam2) };
		Var13 = { func_155(unk_0x0C1D3C552325765B()) };
		if (bParam1)
		{
			if (unk_0xC82CFAC71F470026(&Var13, &Var0))
			{
				return 1;
			}
			else if (!unk_0x74A87F4BE7FE0199(&Var0))
			{
				return 0;
			}
		}
		else if (unk_0x15B0CAB107CFCDE1())
		{
			if (unk_0xC82CFAC71F470026(&Var13, &Var0))
			{
				return 1;
			}
			else if (unk_0x81FBEC429CADB131(&Var0) && unk_0x6F4E1F8D329BC4EC(&Var0))
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
			Var13 = { func_155(unk_0x0C1D3C552325765B()) };
			if (!unk_0xC82CFAC71F470026(&Var13, &Var0))
			{
				return 0;
			}
		}
	}
	return 1;
}

struct<13> func_155(int iParam0)
{
	struct<13> Var0;
	
	unk_0xCA4A074601307AB8(iParam0, &Var0, 13);
	return Var0;
}

void func_156(var uParam0)
{
	if (uParam0->f_16)
	{
		Global_970921.f_6 = 0;
		Global_970921.f_7 = 32;
	}
	else
	{
		Global_969359.f_6 = 0;
		Global_969359.f_7 = 32;
	}
}

void func_157(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	var uVar1[16];
	
	*uParam0 = unk_0x3B1556D715F2C85D();
	if (*uParam0 == 0)
	{
	}
	*uParam1 = unk_0x94A922605867FB40(*uParam0, "list");
	uParam2->f_10 = 1;
	uParam2->f_65 = unk_0x697D8F5133F938AB(*uParam1);
	iVar0 = 0;
	while (iVar0 <= (uParam2->f_65 - 1))
	{
		uVar1[iVar0] = unk_0xAFD3CCDC2E7D3A37(*uParam1, iVar0);
		StringCopy(&(uParam2->f_1177[iVar0 /*6*/]), unk_0x2A1C48CBD532E1D8(uVar1[iVar0], "cid"), 24);
		iVar0++;
	}
	uParam2->f_10 = unk_0x891D0AEE12B2452B(*uParam0, "h2h");
	uParam2->f_9 = unk_0x891D0AEE12B2452B(*uParam0, "ch");
	if (func_100())
	{
		StringCopy(&(uParam2->f_12), unk_0x2A1C48CBD532E1D8(*uParam0, "name"), 64);
	}
}

void func_158(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = unk_0x3B1556D715F2C85D();
	iVar1 = unk_0x458C2A004F0678D0(iVar0, "mission");
	iVar2 = unk_0x458C2A004F0678D0(iVar1, "gen");
	Global_1626500.f_84477 = unk_0x9C70ABDC70E0A0CF(iVar0, "debugOnlyVersion");
	if (!bParam2 || iParam3 == 0)
	{
		func_202(iVar1, iParam0, bParam1);
		func_201(iVar1);
		func_200(&iVar1);
		func_199(&iVar1);
		func_198(&iVar1);
		func_197(&iVar1);
		if (bParam2)
		{
			return;
		}
	}
	if (func_121())
	{
		if (!bParam2 || iParam3 == 1)
		{
			func_196(iVar1);
			func_195(iVar1);
			func_194(iVar1);
			if (bParam2)
			{
				return;
			}
		}
		if (!bParam2 || iParam3 == 2)
		{
			func_193(iVar1);
			func_192(iVar2);
			func_191(iVar1);
			if (bParam2)
			{
				return;
			}
		}
		if (!bParam2 || iParam3 == 3)
		{
			func_190(iVar1);
			func_189(iVar1);
			func_188(iVar1);
			if (bParam2)
			{
				return;
			}
		}
	}
	else if (func_118())
	{
		func_186(iVar1);
		func_188(iVar1);
	}
	if (!bParam2 || iParam3 == 4)
	{
		func_184(iVar1);
		func_183(iVar1);
		func_182(iVar1);
		func_181(iVar1);
		func_180(iVar1);
		if (bParam2)
		{
			return;
		}
	}
	if (!bParam2 || iParam3 == 5)
	{
		func_178(iVar1);
		func_177(iVar1);
		func_175(iVar1);
		func_171(iVar1);
		if (bParam2)
		{
			return;
		}
	}
	if (Global_1626500 == 1)
	{
		func_195(iVar1);
		func_170(iVar1);
	}
	else
	{
		func_165(iVar1);
	}
	if (unk_0x08BA6DD398CA197C(Global_1626500.f_17, 19))
	{
		func_164(iVar1);
	}
	unk_0x09C86C0C5CA26B1E(&(Global_1626500.f_4), 15);
	unk_0x09C86C0C5CA26B1E(&(Global_1626500.f_4), 18);
	unk_0x09C86C0C5CA26B1E(&(Global_1626500.f_4), 19);
	unk_0x09C86C0C5CA26B1E(&(Global_1626500.f_4), 29);
	unk_0x09C86C0C5CA26B1E(&(Global_1626500.f_4), 28);
	if (func_72(Global_1626500.f_83867))
	{
		Global_1626500.f_23 = Global_1626500.f_22;
	}
	if (!func_162(unk_0x0C1D3C552325765B()) && !func_161())
	{
		iVar3 = func_160(Global_1626500.f_83867);
		if (iVar3 != -1)
		{
			if (Global_262145.f_5009[iVar3] != -1)
			{
				Global_1626500.f_23 = Global_262145.f_5009[iVar3];
			}
			if (Global_262145.f_4978[iVar3] != -1)
			{
				Global_1626500.f_22 = Global_262145.f_4978[iVar3];
			}
		}
	}
	if (func_51(Global_1626500.f_83867))
	{
		unk_0x88B0F0DC270164B7(&(Global_1626500.f_4), 15);
	}
	else if (func_50(Global_1626500.f_83867))
	{
		unk_0x88B0F0DC270164B7(&(Global_1626500.f_4), 18);
	}
	else if (func_49(Global_1626500.f_83867))
	{
		unk_0x88B0F0DC270164B7(&(Global_1626500.f_4), 19);
	}
	else if (func_47(Global_1626500.f_83867))
	{
		unk_0x88B0F0DC270164B7(&(Global_1626500.f_4), 29);
	}
	else if (func_48(Global_1626500.f_83867))
	{
		unk_0x88B0F0DC270164B7(&(Global_1626500.f_4), 28);
	}
	else if (func_46(Global_1626500.f_83867))
	{
		unk_0x88B0F0DC270164B7(&(Global_1626500.f_5), 0);
	}
	else if (func_45(Global_1626500.f_83867))
	{
		unk_0x88B0F0DC270164B7(&(Global_1626500.f_5), 1);
	}
	else if (func_44(Global_1626500.f_83867))
	{
		unk_0x88B0F0DC270164B7(&(Global_1626500.f_5), 2);
	}
	else if (func_40(Global_1626500.f_83867))
	{
		unk_0x88B0F0DC270164B7(&(Global_1626500.f_5), 6);
	}
	else if (func_39(Global_1626500.f_83867))
	{
		unk_0x88B0F0DC270164B7(&(Global_1626500.f_5), 7);
	}
	else if (func_38(Global_1626500.f_83867))
	{
		unk_0x88B0F0DC270164B7(&(Global_1626500.f_5), 8);
	}
	else if (func_37(Global_1626500.f_83867))
	{
		unk_0x88B0F0DC270164B7(&(Global_1626500.f_5), 9);
	}
	else if (func_33(Global_1626500.f_83867))
	{
		unk_0x88B0F0DC270164B7(&(Global_1626500.f_5), 10);
	}
	else if (func_36(Global_1626500.f_83867))
	{
		unk_0x88B0F0DC270164B7(&(Global_1626500.f_5), 11);
	}
	else if (func_35(Global_1626500.f_83867))
	{
		unk_0x88B0F0DC270164B7(&(Global_1626500.f_5), 12);
	}
	else if (func_67(Global_1626500.f_102390))
	{
		unk_0x88B0F0DC270164B7(&(Global_1626500.f_5), 13);
	}
	else if (func_66(Global_1626500.f_102390))
	{
		unk_0x88B0F0DC270164B7(&(Global_1626500.f_5), 22);
	}
	else if (func_34(Global_1626500.f_83867))
	{
		unk_0x88B0F0DC270164B7(&(Global_1626500.f_5), 14);
	}
	else if (func_43(Global_1626500.f_83867))
	{
		unk_0x88B0F0DC270164B7(&(Global_1626500.f_5), 3);
	}
	else if (func_42(Global_1626500.f_83867))
	{
		unk_0x88B0F0DC270164B7(&(Global_1626500.f_5), 4);
	}
	else if (func_65(Global_1626500.f_102390))
	{
		unk_0x88B0F0DC270164B7(&(Global_1626500.f_5), 16);
	}
	else if (func_64(Global_1626500.f_102390))
	{
		unk_0x88B0F0DC270164B7(&(Global_1626500.f_5), 17);
	}
	else if (func_63(Global_1626500.f_102390))
	{
		unk_0x88B0F0DC270164B7(&(Global_1626500.f_5), 20);
	}
	else if (func_62(Global_1626500.f_102390))
	{
		unk_0x88B0F0DC270164B7(&(Global_1626500.f_5), 21);
	}
	else if (func_66(Global_1626500.f_102390))
	{
		unk_0x88B0F0DC270164B7(&(Global_1626500.f_5), 22);
	}
	else if (func_41(Global_1626500.f_83867))
	{
		unk_0x88B0F0DC270164B7(&(Global_1626500.f_5), 5);
	}
	else if (func_61(Global_1626500.f_102390))
	{
		unk_0x88B0F0DC270164B7(&(Global_1626500.f_5), 23);
	}
	else if (func_57(Global_1626500.f_102390))
	{
		unk_0x88B0F0DC270164B7(&(Global_1626500.f_5), 27);
	}
	else if (func_60(Global_1626500.f_102390))
	{
		unk_0x88B0F0DC270164B7(&(Global_1626500.f_5), 24);
	}
	else if (func_58(Global_1626500.f_102390))
	{
		unk_0x88B0F0DC270164B7(&(Global_1626500.f_5), 26);
	}
	else if (func_59(Global_1626500.f_102390))
	{
		unk_0x88B0F0DC270164B7(&(Global_1626500.f_5), 25);
	}
	func_159(Global_1626500.f_83867);
}

void func_159(int iParam0)
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
		if (iParam0 == Global_262145.f_7759[iVar0] || iParam0 == Global_262145.f_7768[iVar0])
		{
			Global_1626500.f_63 = { func_55(0, iVar0) };
			Global_1626500.f_66 = { func_54(0, iVar0) };
			Var1 = { func_53(0, iVar0) };
			Global_1626500.f_85 = Var1.f_2;
			Global_1626500.f_1 = 0;
			Global_1626500.f_2 = 8;
			Global_1626500.f_84484 = 0;
			Global_1626500.f_84488 = 16777215;
		}
		iVar0++;
	}
}

int func_160(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != 0)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if ((Global_262145.f_5290[iVar1] == 202 || Global_262145.f_5290[iVar1] == 203) || Global_262145.f_5290[iVar1] == 204)
			{
				iVar0 = 0;
				while (iVar0 < 20)
				{
					if (iParam0 == Global_262145.f_5047[iVar1 /*21*/][iVar0])
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

bool func_161()
{
	return unk_0x08BA6DD398CA197C(Global_2443212.f_1.f_2808, 5);
}

bool func_162(int iParam0)
{
	return func_163(iParam0);
}

bool func_163(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_13.f_1, 0);
}

void func_164(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = unk_0x458C2A004F0678D0(iParam0, "fsp");
	iVar2 = unk_0x94A922605867FB40(iVar1, "loc");
	iVar3 = unk_0x94A922605867FB40(iVar1, "head");
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (unk_0x5F76836A544DA961(iVar2, iVar0) == 5)
		{
			Global_1626500.f_79978[iVar0 /*5*/] = { unk_0x219E9678C4D55F3E(iVar2, iVar0) };
			Global_1626500.f_79978[iVar0 /*5*/].f_3 = unk_0xE00906876D6244A2(iVar3, iVar0);
		}
		else
		{
			Global_1626500.f_79978[iVar0 /*5*/] = { 0f, 0f, 0f };
			Global_1626500.f_79978[iVar0 /*5*/].f_3 = 0f;
		}
		iVar0++;
	}
}

void func_165(int iParam0)
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
	var uVar160[5];
	var uVar166[5];
	var uVar172[5];
	var uVar178[5];
	var uVar184[5];
	var uVar190[5];
	var uVar196[5];
	var uVar202[5];
	int iVar208;
	int iVar209;
	int iVar210;
	int iVar211;
	int iVar212;
	int iVar213;
	int iVar214;
	int iVar215;
	int iVar216;
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
	var uVar238[2];
	var uVar241[2];
	
	iVar6 = unk_0x458C2A004F0678D0(iParam0, "ene");
	Global_1626500.f_57985 = unk_0x9C70ABDC70E0A0CF(iVar6, "no");
	if (unk_0xD44C5C9A5AB591EF(iVar6, "spcap") == 2 && unk_0x9C70ABDC70E0A0CF(iVar6, "spcap") != 0)
	{
		Global_1626500.f_57986 = unk_0x9C70ABDC70E0A0CF(iVar6, "spcap");
	}
	else
	{
		Global_1626500.f_57986 = 50;
	}
	Global_1626500.f_57988 = unk_0x9C70ABDC70E0A0CF(iVar6, "time");
	Global_1626500.f_57989 = unk_0x9C70ABDC70E0A0CF(iVar6, "pal");
	iVar7 = unk_0x94A922605867FB40(iVar6, "loc");
	iVar8 = unk_0x94A922605867FB40(iVar6, "head");
	iVar9 = unk_0x94A922605867FB40(iVar6, "rng");
	iVar10 = unk_0x94A922605867FB40(iVar6, "model");
	iVar11 = unk_0x94A922605867FB40(iVar6, "gun");
	iVar12 = unk_0x94A922605867FB40(iVar6, "skill");
	iVar13 = unk_0x94A922605867FB40(iVar6, "rsp");
	if (Global_1626500 == 1)
	{
		uVar14[0] = unk_0x94A922605867FB40(iVar6, "team");
	}
	iVar19 = unk_0x94A922605867FB40(iVar6, "wep");
	iVar20 = unk_0x94A922605867FB40(iVar6, "hlt");
	iVar21 = unk_0x94A922605867FB40(iVar6, "lghlt");
	iVar22 = unk_0x94A922605867FB40(iVar6, "veh");
	iVar23 = unk_0x94A922605867FB40(iVar6, "foll");
	iVar24 = unk_0x94A922605867FB40(iVar6, "iaim");
	iVar25 = unk_0x94A922605867FB40(iVar6, "iaimt");
	iVar26 = unk_0x94A922605867FB40(iVar6, "iaimr");
	iVar27 = unk_0x94A922605867FB40(iVar6, "sanim");
	iVar28 = unk_0x94A922605867FB40(iVar6, "sat");
	iVar29 = unk_0x94A922605867FB40(iVar6, "saru");
	iVar30 = unk_0x94A922605867FB40(iVar6, "sara");
	iVar31 = unk_0x94A922605867FB40(iVar6, "satt");
	iVar32 = unk_0x94A922605867FB40(iVar6, "whost");
	iVar33 = unk_0x94A922605867FB40(iVar6, "flee");
	iVar34 = unk_0x94A922605867FB40(iVar6, "frr");
	iVar35 = unk_0x94A922605867FB40(iVar6, "pfrmr");
	iVar36 = unk_0x94A922605867FB40(iVar6, "psnt");
	iVar37 = unk_0x94A922605867FB40(iVar6, "psnei");
	iVar38 = unk_0x94A922605867FB40(iVar6, "p2sp");
	iVar39 = unk_0x94A922605867FB40(iVar6, "p2sh");
	iVar40 = unk_0x94A922605867FB40(iVar6, "accu");
	iVar41 = unk_0x94A922605867FB40(iVar6, "lgacc");
	iVar42 = unk_0x94A922605867FB40(iVar6, "cmsty");
	iVar43 = unk_0x94A922605867FB40(iVar6, "pedbs");
	iVar44 = unk_0x94A922605867FB40(iVar6, "pbstwo");
	iVar45 = unk_0x94A922605867FB40(iVar6, "pbs3");
	iVar46 = unk_0x94A922605867FB40(iVar6, "pbs4");
	iVar47 = unk_0x94A922605867FB40(iVar6, "pbs5");
	iVar48 = unk_0x94A922605867FB40(iVar6, "pbs6");
	iVar49 = unk_0x94A922605867FB40(iVar6, "pbs7");
	iVar50 = unk_0x94A922605867FB40(iVar6, "pbs8");
	if (func_121())
	{
		iVar3 = 0;
		while (iVar3 <= (Global_1626500.f_27 - 1))
		{
			if (iVar3 < 4)
			{
				StringCopy(&cVar4, "group", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar14[iVar3] = unk_0x94A922605867FB40(iVar6, &cVar4);
				StringCopy(&cVar4, "rule", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar51[iVar3] = unk_0x94A922605867FB40(iVar6, &cVar4);
				StringCopy(&cVar4, "pri", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar56[iVar3] = unk_0x94A922605867FB40(iVar6, &cVar4);
				StringCopy(&cVar4, "agr", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar61[iVar3] = unk_0x94A922605867FB40(iVar6, &cVar4);
				StringCopy(&cVar4, "tmflw", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar66[iVar3] = unk_0x94A922605867FB40(iVar6, &cVar4);
				StringCopy(&cVar4, "jtop", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar71[iVar3] = unk_0x94A922605867FB40(iVar6, &cVar4);
				StringCopy(&cVar4, "jtof", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar76[iVar3] = unk_0x94A922605867FB40(iVar6, &cVar4);
				StringCopy(&cVar4, "cblfr", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar81[iVar3] = unk_0x94A922605867FB40(iVar6, &cVar4);
				StringCopy(&cVar4, "cblto", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar86[iVar3] = unk_0x94A922605867FB40(iVar6, &cVar4);
				StringCopy(&cVar4, "gtcpr", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar91[iVar3] = unk_0x94A922605867FB40(iVar6, &cVar4);
				StringCopy(&cVar4, "pcrr", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar96[iVar3] = unk_0x94A922605867FB40(iVar6, &cVar4);
			}
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 <= 4)
		{
			StringCopy(&cVar4, "awt", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar160[iVar3] = unk_0x94A922605867FB40(iVar6, &cVar4);
			StringCopy(&cVar4, "awr", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar166[iVar3] = unk_0x94A922605867FB40(iVar6, &cVar4);
			StringCopy(&cVar4, "awl", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar172[iVar3] = unk_0x94A922605867FB40(iVar6, &cVar4);
			StringCopy(&cVar4, "awlr", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar178[iVar3] = unk_0x94A922605867FB40(iVar6, &cVar4);
			StringCopy(&cVar4, "aht", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar190[iVar3] = unk_0x94A922605867FB40(iVar6, &cVar4);
			StringCopy(&cVar4, "ags", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar184[iVar3] = unk_0x94A922605867FB40(iVar6, &cVar4);
			StringCopy(&cVar4, "agrd", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar196[iVar3] = unk_0x94A922605867FB40(iVar6, &cVar4);
			StringCopy(&cVar4, "agvr", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar202[iVar3] = unk_0x94A922605867FB40(iVar6, &cVar4);
			iVar3++;
		}
		iVar101 = unk_0x94A922605867FB40(iVar6, "objt");
		iVar102 = unk_0x94A922605867FB40(iVar6, "team");
		iVar103 = unk_0x94A922605867FB40(iVar6, "spawn");
		iVar104 = unk_0x94A922605867FB40(iVar6, "acts");
		iVar105 = unk_0x94A922605867FB40(iVar6, "objt2");
		iVar106 = unk_0x94A922605867FB40(iVar6, "team2");
		iVar107 = unk_0x94A922605867FB40(iVar6, "spawn2");
		iVar108 = unk_0x94A922605867FB40(iVar6, "acts2");
		iVar109 = unk_0x94A922605867FB40(iVar6, "objt3");
		iVar110 = unk_0x94A922605867FB40(iVar6, "team3");
		iVar111 = unk_0x94A922605867FB40(iVar6, "spawn3");
		iVar112 = unk_0x94A922605867FB40(iVar6, "acts3");
		iVar113 = unk_0x94A922605867FB40(iVar6, "objt4");
		iVar114 = unk_0x94A922605867FB40(iVar6, "team4");
		iVar115 = unk_0x94A922605867FB40(iVar6, "spawn4");
		iVar116 = unk_0x94A922605867FB40(iVar6, "acts4");
		iVar117 = unk_0x94A922605867FB40(iVar6, "act");
		iVar118 = unk_0x94A922605867FB40(iVar6, "pper");
		iVar119 = unk_0x94A922605867FB40(iVar6, "infr");
		iVar120 = unk_0x94A922605867FB40(iVar6, "cca");
		iVar121 = unk_0x94A922605867FB40(iVar6, "ccid");
		iVar122 = unk_0x94A922605867FB40(iVar6, "gfr");
		iVar123 = unk_0x94A922605867FB40(iVar6, "msr");
		iVar124 = unk_0x94A922605867FB40(iVar6, "bnr");
		iVar125 = unk_0x94A922605867FB40(iVar6, "phor");
		iVar126 = unk_0x94A922605867FB40(iVar6, "folr");
		iVar128 = unk_0x94A922605867FB40(iVar6, "pcvl");
		iVar129 = unk_0x94A922605867FB40(iVar6, "pcvr");
		iVar127 = unk_0x94A922605867FB40(iVar6, "pdfw");
		iVar133 = unk_0x94A922605867FB40(iVar6, "pvdp1");
		iVar134 = unk_0x94A922605867FB40(iVar6, "pvdp2");
		iVar130 = unk_0x94A922605867FB40(iVar6, "paaw");
		iVar131 = unk_0x94A922605867FB40(iVar6, "paav1");
		iVar132 = unk_0x94A922605867FB40(iVar6, "paav2");
		iVar135 = unk_0x94A922605867FB40(iVar6, "dt");
		iVar136 = unk_0x94A922605867FB40(iVar6, "do");
		iVar137 = unk_0x94A922605867FB40(iVar6, "dtim");
		iVar138 = unk_0x94A922605867FB40(iVar6, "dln");
		iVar139 = unk_0x94A922605867FB40(iVar6, "pvsp");
		iVar145 = unk_0x94A922605867FB40(iVar6, "drge");
		iVar146 = unk_0x94A922605867FB40(iVar6, "agrot");
		iVar147 = unk_0x94A922605867FB40(iVar6, "gtds");
		iVar148 = unk_0x94A922605867FB40(iVar6, "pstat");
		iVar149 = unk_0x94A922605867FB40(iVar6, "pstar");
		iVar150 = unk_0x94A922605867FB40(iVar6, "dmv");
		iVar151 = unk_0x94A922605867FB40(iVar6, "blkr");
		iVar152 = unk_0x94A922605867FB40(iVar6, "let");
		iVar153 = unk_0x94A922605867FB40(iVar6, "escr");
		iVar154 = unk_0x94A922605867FB40(iVar6, "actr");
		iVar155 = unk_0x94A922605867FB40(iVar6, "actv");
		iVar156 = unk_0x94A922605867FB40(iVar6, "actv2");
		iVar157 = unk_0x94A922605867FB40(iVar6, "actv3");
		iVar158 = unk_0x94A922605867FB40(iVar6, "actv4");
		iVar159 = unk_0x94A922605867FB40(iVar6, "actv5");
		iVar208 = unk_0x94A922605867FB40(iVar6, "pedct");
		iVar210 = unk_0x94A922605867FB40(iVar6, "pdcra");
		iVar209 = unk_0x94A922605867FB40(iVar6, "pedcr");
		iVar211 = unk_0x94A922605867FB40(iVar6, "pedcv");
		iVar212 = unk_0x94A922605867FB40(iVar6, "pedbc");
		iVar213 = unk_0x94A922605867FB40(iVar6, "pdbps");
		iVar214 = unk_0x94A922605867FB40(iVar6, "avrad");
		iVar215 = unk_0x94A922605867FB40(iVar6, "pedst");
		iVar216 = unk_0x94A922605867FB40(iVar6, "gotor");
		iVar217 = unk_0x94A922605867FB40(iVar6, "invbs");
		iVar218 = unk_0x94A922605867FB40(iVar6, "gort");
		iVar219 = unk_0x94A922605867FB40(iVar6, "gorr");
		iVar220 = unk_0x94A922605867FB40(iVar6, "gorw");
		iVar221 = unk_0x94A922605867FB40(iVar6, "cstnm");
		iVar222 = unk_0x94A922605867FB40(iVar6, "pspdl");
		iVar223 = unk_0x94A922605867FB40(iVar6, "psgr");
		iVar224 = unk_0x94A922605867FB40(iVar6, "pssgr");
		iVar225 = unk_0x94A922605867FB40(iVar6, "psctt");
		iVar226 = unk_0x94A922605867FB40(iVar6, "pscto");
		iVar227 = unk_0x94A922605867FB40(iVar6, "pscta");
		iVar228 = unk_0x94A922605867FB40(iVar6, "psctac");
		iVar229 = unk_0x94A922605867FB40(iVar6, "psctv");
		iVar230 = unk_0x94A922605867FB40(iVar6, "pscth");
		iVar231 = unk_0x94A922605867FB40(iVar6, "psctot");
		iVar232 = unk_0x94A922605867FB40(iVar6, "psctoi");
		iVar233 = unk_0x94A922605867FB40(iVar6, "pscatd");
		iVar234 = unk_0x94A922605867FB40(iVar6, "cutsc");
		iVar235 = unk_0x94A922605867FB40(iVar6, "cutsh");
		iVar236 = unk_0x94A922605867FB40(iVar6, "nmpass");
		iVar237 = unk_0x94A922605867FB40(iVar6, "nmfail");
		iVar140 = unk_0x94A922605867FB40(iVar6, "pmcp");
		iVar141 = unk_0x94A922605867FB40(iVar6, "pmcf");
		iVar142 = unk_0x94A922605867FB40(iVar6, "pambv");
		iVar143 = unk_0x94A922605867FB40(iVar6, "pwrpt");
		iVar144 = unk_0x94A922605867FB40(iVar6, "pcash");
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			StringCopy(&cVar4, "prstp", 8);
			if (iVar1 > 0)
			{
				StringIntConCat(&cVar4, iVar1, 8);
			}
			uVar238[iVar1] = unk_0x94A922605867FB40(iVar6, &cVar4);
			StringCopy(&cVar4, "prsth", 8);
			if (iVar1 > 0)
			{
				StringIntConCat(&cVar4, iVar1, 8);
			}
			uVar241[iVar1] = unk_0x94A922605867FB40(iVar6, &cVar4);
			iVar1++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1626500.f_57985 - 1))
	{
		if (iVar0 < 59)
		{
			Global_1626500.f_57990[iVar0 /*286*/] = { unk_0x219E9678C4D55F3E(iVar7, iVar0) };
			Global_1626500.f_57990[iVar0 /*286*/].f_3 = unk_0xE00906876D6244A2(iVar8, iVar0);
			Global_1626500.f_57990[iVar0 /*286*/].f_4 = unk_0xE00906876D6244A2(iVar9, iVar0);
			if (Global_1626500.f_57990[iVar0 /*286*/].f_4 < 0.75f)
			{
				Global_1626500.f_57990[iVar0 /*286*/].f_4 = 0.75f;
			}
			iVar2 = unk_0x7A66412A2B47CF10(iVar10, iVar0);
			if (iVar2 == joaat("mp_m_fibsec_01"))
			{
				Global_1626500.f_57990[iVar0 /*286*/].f_14 = joaat("s_m_m_ciasec_01");
			}
			else if (iVar2 == joaat("ig_michelle"))
			{
				Global_1626500.f_57990[iVar0 /*286*/].f_14 = joaat("ig_karen_daniels");
			}
			else
			{
				Global_1626500.f_57990[iVar0 /*286*/].f_14 = iVar2;
			}
			if (!func_118() && !func_169())
			{
				if (!unk_0x81972CB541487AFD(Global_1626500.f_57990[iVar0 /*286*/].f_14))
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_14 = joaat("s_m_y_cop_01");
				}
			}
			iVar2 = unk_0x7A66412A2B47CF10(iVar11, iVar0);
			Global_1626500.f_57990[iVar0 /*286*/].f_15 = iVar2;
			iVar2 = unk_0x7A66412A2B47CF10(iVar12, iVar0);
			Global_1626500.f_57990[iVar0 /*286*/].f_16 = iVar2;
			if (Global_1626500 == 1)
			{
				Global_1626500.f_57990[iVar0 /*286*/].f_17[0] = unk_0x7A66412A2B47CF10(uVar14[0], iVar0);
			}
			Global_1626500.f_57990[iVar0 /*286*/].f_50 = unk_0x7A66412A2B47CF10(iVar23, iVar0);
			Global_1626500.f_57990[iVar0 /*286*/].f_36 = unk_0x7A66412A2B47CF10(iVar19, iVar0);
			Global_1626500.f_57990[iVar0 /*286*/].f_37 = unk_0x7A66412A2B47CF10(iVar20, iVar0);
			if (unk_0x5F76836A544DA961(iVar21, iVar0) == 2)
			{
				Global_1626500.f_57990[iVar0 /*286*/].f_38 = unk_0x7A66412A2B47CF10(iVar21, iVar0);
			}
			else
			{
				Global_1626500.f_57990[iVar0 /*286*/].f_38 = -1;
			}
			Global_1626500.f_57990[iVar0 /*286*/].f_56 = unk_0x7A66412A2B47CF10(iVar22, iVar0);
			Global_1626500.f_57990[iVar0 /*286*/].f_32 = unk_0x7A66412A2B47CF10(iVar13, iVar0);
			Global_1626500.f_57990[iVar0 /*286*/].f_39 = unk_0x7A66412A2B47CF10(iVar24, iVar0);
			Global_1626500.f_57990[iVar0 /*286*/].f_40 = unk_0x7A66412A2B47CF10(iVar25, iVar0);
			Global_1626500.f_57990[iVar0 /*286*/].f_41 = unk_0x7A66412A2B47CF10(iVar26, iVar0);
			Global_1626500.f_57990[iVar0 /*286*/].f_42 = unk_0x7A66412A2B47CF10(iVar27, iVar0);
			Global_1626500.f_57990[iVar0 /*286*/].f_43 = unk_0x7A66412A2B47CF10(iVar28, iVar0);
			Global_1626500.f_57990[iVar0 /*286*/].f_44 = unk_0x7A66412A2B47CF10(iVar29, iVar0);
			Global_1626500.f_57990[iVar0 /*286*/].f_45 = unk_0xE00906876D6244A2(iVar30, iVar0);
			Global_1626500.f_57990[iVar0 /*286*/].f_46 = unk_0x7A66412A2B47CF10(iVar31, iVar0);
			Global_1626500.f_57990[iVar0 /*286*/].f_49 = unk_0x7A66412A2B47CF10(iVar32, iVar0);
			Global_1626500.f_57990[iVar0 /*286*/].f_47 = unk_0x7A66412A2B47CF10(iVar33, iVar0);
			Global_1626500.f_57990[iVar0 /*286*/].f_5 = unk_0xE00906876D6244A2(iVar34, iVar0);
			if ((unk_0x5F76836A544DA961(iVar35, iVar0) == 3 && unk_0x5F76836A544DA961(iVar36, iVar0) == 2) && unk_0x5F76836A544DA961(iVar37, iVar0) == 2)
			{
				Global_1626500.f_57990[iVar0 /*286*/].f_6 = unk_0xE00906876D6244A2(iVar35, iVar0);
				Global_1626500.f_57990[iVar0 /*286*/].f_7 = unk_0x7A66412A2B47CF10(iVar36, iVar0);
				Global_1626500.f_57990[iVar0 /*286*/].f_8 = unk_0x7A66412A2B47CF10(iVar37, iVar0);
			}
			else
			{
				Global_1626500.f_57990[iVar0 /*286*/].f_6 = 0f;
				Global_1626500.f_57990[iVar0 /*286*/].f_7 = 0;
				Global_1626500.f_57990[iVar0 /*286*/].f_8 = -1;
			}
			if (unk_0x5F76836A544DA961(iVar38, iVar0) == 5 && unk_0x5F76836A544DA961(iVar39, iVar0) == 3)
			{
				Global_1626500.f_57990[iVar0 /*286*/].f_9 = { unk_0x219E9678C4D55F3E(iVar38, iVar0) };
				Global_1626500.f_57990[iVar0 /*286*/].f_12 = unk_0xE00906876D6244A2(iVar39, iVar0);
			}
			else
			{
				Global_1626500.f_57990[iVar0 /*286*/].f_9 = { 0f, 0f, 0f };
				Global_1626500.f_57990[iVar0 /*286*/].f_12 = 0f;
			}
			Global_1626500.f_57990[iVar0 /*286*/].f_34 = unk_0x7A66412A2B47CF10(iVar40, iVar0);
			if (unk_0x5F76836A544DA961(iVar41, iVar0) == 2)
			{
				Global_1626500.f_57990[iVar0 /*286*/].f_35 = unk_0x7A66412A2B47CF10(iVar41, iVar0);
			}
			else
			{
				Global_1626500.f_57990[iVar0 /*286*/].f_35 = -1;
			}
			Global_1626500.f_57990[iVar0 /*286*/].f_48 = unk_0x7A66412A2B47CF10(iVar42, iVar0);
			Global_1626500.f_57990[iVar0 /*286*/].f_188 = unk_0x7A66412A2B47CF10(iVar43, iVar0);
			if (unk_0x5F76836A544DA961(iVar44, iVar0) == 2)
			{
				Global_1626500.f_57990[iVar0 /*286*/].f_189 = unk_0x7A66412A2B47CF10(iVar44, iVar0);
			}
			else
			{
				Global_1626500.f_57990[iVar0 /*286*/].f_189 = 0;
			}
			if (unk_0x5F76836A544DA961(iVar45, iVar0) == 2)
			{
				Global_1626500.f_57990[iVar0 /*286*/].f_190 = unk_0x7A66412A2B47CF10(iVar45, iVar0);
			}
			else
			{
				Global_1626500.f_57990[iVar0 /*286*/].f_190 = 0;
			}
			if (unk_0x5F76836A544DA961(iVar46, iVar0) == 2)
			{
				Global_1626500.f_57990[iVar0 /*286*/].f_191 = unk_0x7A66412A2B47CF10(iVar46, iVar0);
			}
			else
			{
				Global_1626500.f_57990[iVar0 /*286*/].f_191 = 0;
			}
			if (unk_0x5F76836A544DA961(iVar47, iVar0) == 2)
			{
				Global_1626500.f_57990[iVar0 /*286*/].f_192 = unk_0x7A66412A2B47CF10(iVar47, iVar0);
			}
			else
			{
				Global_1626500.f_57990[iVar0 /*286*/].f_192 = 0;
			}
			if (unk_0x5F76836A544DA961(iVar48, iVar0) == 2)
			{
				Global_1626500.f_57990[iVar0 /*286*/].f_193 = unk_0x7A66412A2B47CF10(iVar48, iVar0);
			}
			else
			{
				Global_1626500.f_57990[iVar0 /*286*/].f_193 = 0;
			}
			if (unk_0x5F76836A544DA961(iVar49, iVar0) == 2)
			{
				Global_1626500.f_57990[iVar0 /*286*/].f_194 = unk_0x7A66412A2B47CF10(iVar49, iVar0);
			}
			else
			{
				Global_1626500.f_57990[iVar0 /*286*/].f_194 = 0;
			}
			if (unk_0x5F76836A544DA961(iVar50, iVar0) == 2)
			{
				Global_1626500.f_57990[iVar0 /*286*/].f_195 = unk_0x7A66412A2B47CF10(iVar50, iVar0);
			}
			else
			{
				Global_1626500.f_57990[iVar0 /*286*/].f_195 = 0;
			}
			if (func_121())
			{
				Global_1626500.f_57990[iVar0 /*286*/].f_57 = unk_0x7A66412A2B47CF10(iVar101, iVar0);
				Global_1626500.f_57990[iVar0 /*286*/].f_58 = unk_0x7A66412A2B47CF10(iVar102, iVar0);
				Global_1626500.f_57990[iVar0 /*286*/].f_59 = unk_0x7A66412A2B47CF10(iVar103, iVar0);
				Global_1626500.f_57990[iVar0 /*286*/].f_63 = unk_0x7A66412A2B47CF10(iVar104, iVar0);
				if (unk_0x5F76836A544DA961(iVar105, iVar0) == 2)
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_161 = unk_0x7A66412A2B47CF10(iVar105, iVar0);
					Global_1626500.f_57990[iVar0 /*286*/].f_158 = unk_0x7A66412A2B47CF10(iVar106, iVar0);
					Global_1626500.f_57990[iVar0 /*286*/].f_164 = unk_0x7A66412A2B47CF10(iVar107, iVar0);
					Global_1626500.f_57990[iVar0 /*286*/].f_167 = unk_0x7A66412A2B47CF10(iVar108, iVar0);
					Global_1626500.f_57990[iVar0 /*286*/].f_162 = unk_0x7A66412A2B47CF10(iVar109, iVar0);
					Global_1626500.f_57990[iVar0 /*286*/].f_159 = unk_0x7A66412A2B47CF10(iVar110, iVar0);
					Global_1626500.f_57990[iVar0 /*286*/].f_165 = unk_0x7A66412A2B47CF10(iVar111, iVar0);
					Global_1626500.f_57990[iVar0 /*286*/].f_168 = unk_0x7A66412A2B47CF10(iVar112, iVar0);
					Global_1626500.f_57990[iVar0 /*286*/].f_163 = unk_0x7A66412A2B47CF10(iVar113, iVar0);
					Global_1626500.f_57990[iVar0 /*286*/].f_160 = unk_0x7A66412A2B47CF10(iVar114, iVar0);
					Global_1626500.f_57990[iVar0 /*286*/].f_166 = unk_0x7A66412A2B47CF10(iVar115, iVar0);
					Global_1626500.f_57990[iVar0 /*286*/].f_169 = unk_0x7A66412A2B47CF10(iVar116, iVar0);
				}
				else
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_161 = -1;
					Global_1626500.f_57990[iVar0 /*286*/].f_158 = 0;
					Global_1626500.f_57990[iVar0 /*286*/].f_164 = 0;
					Global_1626500.f_57990[iVar0 /*286*/].f_167 = 0;
					Global_1626500.f_57990[iVar0 /*286*/].f_162 = -1;
					Global_1626500.f_57990[iVar0 /*286*/].f_159 = 0;
					Global_1626500.f_57990[iVar0 /*286*/].f_165 = 0;
					Global_1626500.f_57990[iVar0 /*286*/].f_168 = 0;
					Global_1626500.f_57990[iVar0 /*286*/].f_163 = -1;
					Global_1626500.f_57990[iVar0 /*286*/].f_160 = 0;
					Global_1626500.f_57990[iVar0 /*286*/].f_166 = 0;
					Global_1626500.f_57990[iVar0 /*286*/].f_169 = 0;
				}
				Global_1626500.f_57990[iVar0 /*286*/].f_62 = unk_0x7A66412A2B47CF10(iVar117, iVar0);
				if (unk_0x5F76836A544DA961(iVar118, iVar0) == 2)
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_201 = unk_0x7A66412A2B47CF10(iVar118, iVar0);
				}
				else
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_201 = 0;
				}
				if (unk_0x5F76836A544DA961(iVar119, iVar0) == 2)
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_202 = unk_0x7A66412A2B47CF10(iVar119, iVar0);
				}
				else
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_202 = 250;
				}
				if (unk_0x5F76836A544DA961(iVar120, iVar0) == 2)
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_205 = unk_0x7A66412A2B47CF10(iVar120, iVar0);
				}
				else
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_205 = 0;
				}
				if (unk_0x5F76836A544DA961(iVar121, iVar0) == 2)
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_206 = unk_0x7A66412A2B47CF10(iVar121, iVar0);
				}
				else
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_206 = -1;
				}
				if (unk_0x5F76836A544DA961(iVar122, iVar0) == 2)
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_207 = unk_0x7A66412A2B47CF10(iVar122, iVar0);
				}
				else
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_207 = 0;
				}
				if (unk_0x5F76836A544DA961(iVar123, iVar0) == 2)
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_203 = unk_0x7A66412A2B47CF10(iVar123, iVar0);
				}
				else
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_203 = 0;
				}
				if (unk_0x5F76836A544DA961(iVar124, iVar0) == 2)
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_204 = unk_0x7A66412A2B47CF10(iVar124, iVar0);
				}
				else
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_204 = -1;
				}
				if (unk_0x5F76836A544DA961(iVar125, iVar0) == 2)
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_266 = unk_0x7A66412A2B47CF10(iVar125, iVar0);
				}
				else
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_266 = -1;
				}
				if (unk_0x5F76836A544DA961(iVar126, iVar0) == 2)
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_267 = unk_0x7A66412A2B47CF10(iVar126, iVar0);
				}
				else
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_267 = -1;
				}
				if (unk_0x5F76836A544DA961(iVar128, iVar0) == 5)
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_208 = { unk_0x219E9678C4D55F3E(iVar128, iVar0) };
				}
				else
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_208 = { 0f, 0f, 0f };
				}
				if (unk_0x5F76836A544DA961(iVar129, iVar0) == 5)
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_211 = { unk_0x219E9678C4D55F3E(iVar129, iVar0) };
				}
				else
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_211 = { 0f, 0f, 0f };
				}
				if ((unk_0x5F76836A544DA961(iVar133, iVar0) == 5 && unk_0x5F76836A544DA961(iVar134, iVar0) == 5) && unk_0x5F76836A544DA961(iVar127, iVar0) == 3)
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_219 = { unk_0x219E9678C4D55F3E(iVar133, iVar0) };
					Global_1626500.f_57990[iVar0 /*286*/].f_222 = { unk_0x219E9678C4D55F3E(iVar134, iVar0) };
					Global_1626500.f_57990[iVar0 /*286*/].f_225 = unk_0xE00906876D6244A2(iVar127, iVar0);
				}
				else
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_219 = { 0f, 0f, 0f };
					Global_1626500.f_57990[iVar0 /*286*/].f_222 = { 0f, 0f, 0f };
					Global_1626500.f_57990[iVar0 /*286*/].f_225 = 1f;
				}
				if ((unk_0x5F76836A544DA961(iVar130, iVar0) == 3 && unk_0x5F76836A544DA961(iVar131, iVar0) == 5) && unk_0x5F76836A544DA961(iVar132, iVar0) == 5)
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_183 = unk_0xE00906876D6244A2(iVar130, iVar0);
					Global_1626500.f_57990[iVar0 /*286*/].f_177 = { unk_0x219E9678C4D55F3E(iVar131, iVar0) };
					Global_1626500.f_57990[iVar0 /*286*/].f_180 = { unk_0x219E9678C4D55F3E(iVar132, iVar0) };
				}
				else
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_183 = 0f;
					Global_1626500.f_57990[iVar0 /*286*/].f_177 = { 0f, 0f, 0f };
					Global_1626500.f_57990[iVar0 /*286*/].f_180 = { 0f, 0f, 0f };
				}
				if (unk_0x5F76836A544DA961(iVar139, iVar0) == 2)
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_237 = unk_0x7A66412A2B47CF10(iVar139, iVar0);
				}
				else
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_237 = 0;
				}
				Global_1626500.f_57990[iVar0 /*286*/].f_215 = unk_0x7A66412A2B47CF10(iVar135, iVar0);
				Global_1626500.f_57990[iVar0 /*286*/].f_214 = unk_0x7A66412A2B47CF10(iVar136, iVar0);
				Global_1626500.f_57990[iVar0 /*286*/].f_216 = unk_0x7A66412A2B47CF10(iVar137, iVar0);
				Global_1626500.f_57990[iVar0 /*286*/].f_217 = unk_0x7A66412A2B47CF10(iVar138, iVar0);
				Global_1626500.f_57990[iVar0 /*286*/].f_218 = unk_0x7A66412A2B47CF10(iVar145, iVar0);
				Global_1626500.f_57990[iVar0 /*286*/].f_226 = unk_0x7A66412A2B47CF10(iVar146, iVar0);
				Global_1626500.f_57990[iVar0 /*286*/].f_184 = unk_0x7A66412A2B47CF10(iVar147, iVar0);
				Global_1626500.f_57990[iVar0 /*286*/].f_33 = unk_0x7A66412A2B47CF10(iVar150, iVar0);
				Global_1626500.f_57990[iVar0 /*286*/].f_13 = unk_0xE00906876D6244A2(iVar151, iVar0);
				Global_1626500.f_57990[iVar0 /*286*/].f_175 = unk_0x7A66412A2B47CF10(iVar152, iVar0);
				Global_1626500.f_57990[iVar0 /*286*/].f_185 = unk_0x7A66412A2B47CF10(iVar153, iVar0);
				Global_1626500.f_57990[iVar0 /*286*/].f_176 = unk_0x7A66412A2B47CF10(iVar154, iVar0);
				Global_1626500.f_57990[iVar0 /*286*/].f_64 = { unk_0x219E9678C4D55F3E(iVar155, iVar0) };
				Global_1626500.f_57990[iVar0 /*286*/].f_64 = { unk_0x219E9678C4D55F3E(iVar155, iVar0) };
				if (unk_0x5F76836A544DA961(iVar156, iVar0) == 5)
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_67[0 /*3*/] = { unk_0x219E9678C4D55F3E(iVar156, iVar0) };
				}
				else
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_67[0 /*3*/] = { 0f, 0f, 0f };
				}
				if (unk_0x5F76836A544DA961(iVar157, iVar0) == 5)
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_67[1 /*3*/] = { unk_0x219E9678C4D55F3E(iVar157, iVar0) };
				}
				else
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_67[1 /*3*/] = { 0f, 0f, 0f };
				}
				if (unk_0x5F76836A544DA961(iVar158, iVar0) == 5)
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_67[2 /*3*/] = { unk_0x219E9678C4D55F3E(iVar158, iVar0) };
				}
				else
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_67[2 /*3*/] = { 0f, 0f, 0f };
				}
				if (unk_0x5F76836A544DA961(iVar159, iVar0) == 5)
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_67[3 /*3*/] = { unk_0x219E9678C4D55F3E(iVar159, iVar0) };
				}
				else
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_67[3 /*3*/] = { 0f, 0f, 0f };
				}
				if (unk_0x5F76836A544DA961(iVar148, iVar0) == 2 && unk_0x5F76836A544DA961(iVar149, iVar0) == 2)
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_186 = unk_0x7A66412A2B47CF10(iVar148, iVar0);
					Global_1626500.f_57990[iVar0 /*286*/].f_187 = unk_0x7A66412A2B47CF10(iVar149, iVar0);
				}
				else
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_186 = -1;
					Global_1626500.f_57990[iVar0 /*286*/].f_187 = -1;
				}
				iVar3 = 0;
				while (iVar3 <= 4)
				{
					if (unk_0x5F76836A544DA961(uVar160[iVar3], iVar0) == 2)
					{
						Global_1626500.f_57990[iVar0 /*286*/].f_81[iVar3] = unk_0x7A66412A2B47CF10(uVar160[iVar3], iVar0);
					}
					else
					{
						Global_1626500.f_57990[iVar0 /*286*/].f_81[iVar3] = 0;
					}
					if (unk_0x5F76836A544DA961(uVar166[iVar3], iVar0) == 2)
					{
						Global_1626500.f_57990[iVar0 /*286*/].f_87[iVar3] = unk_0x7A66412A2B47CF10(uVar166[iVar3], iVar0);
					}
					else
					{
						Global_1626500.f_57990[iVar0 /*286*/].f_87[iVar3] = 0;
					}
					if (unk_0x5F76836A544DA961(uVar172[iVar3], iVar0) == 5 && unk_0x5F76836A544DA961(uVar178[iVar3], iVar0) == 2)
					{
						Global_1626500.f_57990[iVar0 /*286*/].f_93[iVar3 /*3*/] = { unk_0x219E9678C4D55F3E(uVar172[iVar3], iVar0) };
						Global_1626500.f_57990[iVar0 /*286*/].f_109[iVar3] = unk_0x7A66412A2B47CF10(uVar178[iVar3], iVar0);
					}
					else
					{
						Global_1626500.f_57990[iVar0 /*286*/].f_93[iVar3 /*3*/] = { 0f, 0f, 0f };
						Global_1626500.f_57990[iVar0 /*286*/].f_109[iVar3] = 3;
					}
					if (unk_0x5F76836A544DA961(uVar184[iVar3], iVar0) == 2)
					{
						Global_1626500.f_57990[iVar0 /*286*/].f_127[iVar3] = unk_0x7A66412A2B47CF10(uVar184[iVar3], iVar0);
					}
					else
					{
						Global_1626500.f_57990[iVar0 /*286*/].f_127[iVar3] = -1;
					}
					if (unk_0x5F76836A544DA961(uVar190[iVar3], iVar0) == 3)
					{
						Global_1626500.f_57990[iVar0 /*286*/].f_115[iVar3] = unk_0xE00906876D6244A2(uVar190[iVar3], iVar0);
					}
					else
					{
						Global_1626500.f_57990[iVar0 /*286*/].f_115[iVar3] = 0f;
					}
					if (unk_0x5F76836A544DA961(uVar196[iVar3], iVar0) == 3)
					{
						Global_1626500.f_57990[iVar0 /*286*/].f_121[iVar3] = unk_0xE00906876D6244A2(uVar196[iVar3], iVar0);
					}
					else
					{
						Global_1626500.f_57990[iVar0 /*286*/].f_121[iVar3] = 0f;
					}
					if (unk_0x5F76836A544DA961(uVar202[iVar3], iVar0) == 3)
					{
						Global_1626500.f_57990[iVar0 /*286*/].f_133[iVar3] = unk_0xE00906876D6244A2(uVar202[iVar3], iVar0);
					}
					else
					{
						Global_1626500.f_57990[iVar0 /*286*/].f_133[iVar3] = 0f;
					}
					iVar3++;
				}
				if (unk_0x5F76836A544DA961(iVar209, iVar0) == 2)
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_227 = unk_0x7A66412A2B47CF10(iVar209, iVar0);
				}
				else
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_227 = -1;
				}
				if (unk_0x5F76836A544DA961(iVar208, iVar0) == 2)
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_228 = unk_0x7A66412A2B47CF10(iVar208, iVar0);
				}
				else
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_228 = -1;
				}
				if (unk_0x5F76836A544DA961(iVar211, iVar0) == 2)
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_230 = unk_0x7A66412A2B47CF10(iVar211, iVar0);
				}
				else
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_230 = -1;
				}
				if (unk_0x5F76836A544DA961(iVar210, iVar0) == 2)
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_229 = unk_0x7A66412A2B47CF10(iVar210, iVar0);
				}
				else
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_229 = -1;
				}
				if (unk_0x5F76836A544DA961(iVar215, iVar0) == 2)
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_236 = unk_0x7A66412A2B47CF10(iVar215, iVar0);
				}
				else
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_236 = -3;
				}
				if (unk_0x5F76836A544DA961(iVar212, iVar0) == 2)
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_252 = unk_0x7A66412A2B47CF10(iVar212, iVar0);
				}
				else
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_252 = 0;
				}
				if (unk_0x5F76836A544DA961(iVar213, iVar0) == 3)
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_263 = unk_0xE00906876D6244A2(iVar213, iVar0);
				}
				else
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_263 = 1f;
				}
				if (unk_0x5F76836A544DA961(iVar214, iVar0) == 2)
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_80 = unk_0x7A66412A2B47CF10(iVar214, iVar0);
				}
				else
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_80 = 0;
				}
				if (unk_0x5F76836A544DA961(iVar216, iVar0) == 2)
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_51 = unk_0x7A66412A2B47CF10(iVar216, iVar0);
				}
				else
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_51 = 0;
				}
				if (unk_0x5F76836A544DA961(iVar217, iVar0) == 2)
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_52 = unk_0x7A66412A2B47CF10(iVar217, iVar0);
				}
				else
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_52 = 0;
				}
				if (unk_0x5F76836A544DA961(iVar221, iVar0) == 2)
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_156 = unk_0x7A66412A2B47CF10(iVar221, iVar0);
				}
				else
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_156 = -1;
				}
				if (unk_0x5F76836A544DA961(iVar222, iVar0) == 2)
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_157 = unk_0x7A66412A2B47CF10(iVar222, iVar0);
				}
				else
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_157 = 0;
				}
				if (unk_0x5F76836A544DA961(iVar223, iVar0) == 2)
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_60 = unk_0x7A66412A2B47CF10(iVar223, iVar0);
				}
				else
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_60 = 0;
				}
				if (unk_0x5F76836A544DA961(iVar224, iVar0) == 2)
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_61 = unk_0x7A66412A2B47CF10(iVar224, iVar0);
				}
				else
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_61 = 0;
				}
				if (unk_0x5F76836A544DA961(iVar140, iVar0) == 2)
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_250 = unk_0x7A66412A2B47CF10(iVar140, iVar0);
				}
				else
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_250 = -1;
				}
				if (unk_0x5F76836A544DA961(iVar141, iVar0) == 2)
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_251 = unk_0x7A66412A2B47CF10(iVar141, iVar0);
				}
				else
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_251 = -1;
				}
				if (unk_0x5F76836A544DA961(iVar142, iVar0) == 2)
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_268 = unk_0x7A66412A2B47CF10(iVar142, iVar0);
				}
				else
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_268 = -1;
				}
				if (unk_0x5F76836A544DA961(iVar143, iVar0) == 2)
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_274 = unk_0x7A66412A2B47CF10(iVar143, iVar0);
				}
				else
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_274 = -1;
				}
				if (unk_0x5F76836A544DA961(iVar144, iVar0) == 2)
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_275 = unk_0x7A66412A2B47CF10(iVar144, iVar0);
				}
				else
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_275 = -1;
				}
				if ((unk_0x5F76836A544DA961(iVar225, iVar0) == 2 && unk_0x5F76836A544DA961(iVar226, iVar0) == 2) && unk_0x5F76836A544DA961(iVar227, iVar0) == 2)
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_145 = unk_0x7A66412A2B47CF10(iVar225, iVar0);
					Global_1626500.f_57990[iVar0 /*286*/].f_146 = unk_0x7A66412A2B47CF10(iVar226, iVar0);
					Global_1626500.f_57990[iVar0 /*286*/].f_148 = unk_0x7A66412A2B47CF10(iVar227, iVar0);
				}
				else
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_145 = -1;
					Global_1626500.f_57990[iVar0 /*286*/].f_146 = -1;
					Global_1626500.f_57990[iVar0 /*286*/].f_148 = 0;
				}
				if ((unk_0x5F76836A544DA961(iVar231, iVar0) == 2 && unk_0x5F76836A544DA961(iVar232, iVar0) == 2) && unk_0x5F76836A544DA961(iVar233, iVar0) == 2)
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_153 = unk_0x7A66412A2B47CF10(iVar231, iVar0);
					Global_1626500.f_57990[iVar0 /*286*/].f_154 = unk_0x7A66412A2B47CF10(iVar232, iVar0);
					Global_1626500.f_57990[iVar0 /*286*/].f_155 = unk_0x7A66412A2B47CF10(iVar233, iVar0);
				}
				else
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_153 = 0;
					Global_1626500.f_57990[iVar0 /*286*/].f_154 = -1;
					Global_1626500.f_57990[iVar0 /*286*/].f_155 = -1;
				}
				if (unk_0x5F76836A544DA961(iVar228, iVar0) == 2)
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_147 = unk_0x7A66412A2B47CF10(iVar228, iVar0);
				}
				else
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_147 = 0;
				}
				if (unk_0x5F76836A544DA961(iVar229, iVar0) == 5)
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_149 = { unk_0x219E9678C4D55F3E(iVar229, iVar0) };
				}
				else
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_149 = { 0f, 0f, 0f };
				}
				if (unk_0x5F76836A544DA961(iVar230, iVar0) == 3)
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_152 = unk_0xE00906876D6244A2(iVar230, iVar0);
				}
				else
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_152 = 0f;
				}
				if ((unk_0x5F76836A544DA961(iVar218, iVar0) == 2 && unk_0x5F76836A544DA961(iVar219, iVar0) == 2) && unk_0x5F76836A544DA961(iVar220, iVar0) == 2)
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_53 = unk_0x7A66412A2B47CF10(iVar218, iVar0);
					Global_1626500.f_57990[iVar0 /*286*/].f_54 = unk_0x7A66412A2B47CF10(iVar219, iVar0);
					Global_1626500.f_57990[iVar0 /*286*/].f_55 = unk_0x7A66412A2B47CF10(iVar220, iVar0);
				}
				else
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_53 = -1;
					Global_1626500.f_57990[iVar0 /*286*/].f_54 = -1;
					Global_1626500.f_57990[iVar0 /*286*/].f_55 = joaat("weapon_pistol");
				}
				if (Global_1626500.f_2 != 6 && unk_0x5F76836A544DA961(iVar234, iVar0) == 2)
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_264 = unk_0x7A66412A2B47CF10(iVar234, iVar0);
				}
				else
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_264 = -1;
				}
				if (unk_0x5F76836A544DA961(iVar236, iVar0) == 2)
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_248 = unk_0x7A66412A2B47CF10(iVar236, iVar0);
				}
				else
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_248 = -1;
				}
				if (unk_0x5F76836A544DA961(iVar237, iVar0) == 2)
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_249 = unk_0x7A66412A2B47CF10(iVar237, iVar0);
				}
				else
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_249 = -1;
				}
				if (Global_1626500.f_2 != 6 && unk_0x5F76836A544DA961(iVar235, iVar0) == 2)
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_265 = unk_0x7A66412A2B47CF10(iVar235, iVar0);
				}
				else
				{
					Global_1626500.f_57990[iVar0 /*286*/].f_265 = 0;
				}
				iVar1 = 0;
				while (iVar1 <= 1)
				{
					if (unk_0x5F76836A544DA961(uVar238[iVar1], iVar0) == 5)
					{
						Global_1626500.f_57990[iVar0 /*286*/].f_276[iVar1 /*3*/] = { unk_0x219E9678C4D55F3E(uVar238[iVar1], iVar0) };
					}
					else
					{
						Global_1626500.f_57990[iVar0 /*286*/].f_276[iVar1 /*3*/] = { 0f, 0f, 0f };
					}
					if (unk_0x5F76836A544DA961(uVar241[iVar1], iVar0) == 3)
					{
						Global_1626500.f_57990[iVar0 /*286*/].f_283[iVar1] = unk_0xE00906876D6244A2(uVar241[iVar1], iVar0);
					}
					else
					{
						Global_1626500.f_57990[iVar0 /*286*/].f_283[iVar1] = 0f;
					}
					iVar1++;
				}
				iVar3 = 0;
				while (iVar3 <= (Global_1626500.f_27 - 1))
				{
					if (iVar3 < 4)
					{
						Global_1626500.f_57990[iVar0 /*286*/].f_17[iVar3] = unk_0x7A66412A2B47CF10(uVar14[iVar3], iVar0);
						Global_1626500.f_57990[iVar0 /*286*/].f_22[iVar3] = unk_0x7A66412A2B47CF10(uVar51[iVar3], iVar0);
						Global_1626500.f_57990[iVar0 /*286*/].f_27[iVar3] = unk_0x7A66412A2B47CF10(uVar56[iVar3], iVar0);
						if (Global_1626500.f_57990[iVar0 /*286*/].f_27[iVar3] == -1)
						{
							Global_1626500.f_57990[iVar0 /*286*/].f_27[iVar3] = 99999;
						}
						if (unk_0x5F76836A544DA961(uVar61[iVar3], iVar0) == 2)
						{
							Global_1626500.f_57990[iVar0 /*286*/].f_196[iVar3] = unk_0x7A66412A2B47CF10(uVar61[iVar3], iVar0);
						}
						else
						{
							Global_1626500.f_57990[iVar0 /*286*/].f_196[iVar3] = -1;
						}
						if (unk_0x5F76836A544DA961(uVar66[iVar3], iVar0) == 2)
						{
							Global_1626500.f_57990[iVar0 /*286*/].f_170[iVar3] = unk_0x7A66412A2B47CF10(uVar66[iVar3], iVar0);
						}
						else
						{
							Global_1626500.f_57990[iVar0 /*286*/].f_170[iVar3] = 0;
						}
						if (unk_0x5F76836A544DA961(uVar71[iVar3], iVar0) == 2)
						{
							Global_1626500.f_57990[iVar0 /*286*/].f_238[iVar3] = unk_0x7A66412A2B47CF10(uVar71[iVar3], iVar0);
						}
						else
						{
							Global_1626500.f_57990[iVar0 /*286*/].f_238[iVar3] = 0;
						}
						if (unk_0x5F76836A544DA961(uVar76[iVar3], iVar0) == 2)
						{
							Global_1626500.f_57990[iVar0 /*286*/].f_243[iVar3] = unk_0x7A66412A2B47CF10(uVar76[iVar3], iVar0);
						}
						else
						{
							Global_1626500.f_57990[iVar0 /*286*/].f_243[iVar3] = 0;
						}
						if (unk_0x5F76836A544DA961(uVar81[iVar3], iVar0) == 2 && unk_0x5F76836A544DA961(uVar86[iVar3], iVar0) == 2)
						{
							Global_1626500.f_57990[iVar0 /*286*/].f_253[iVar3] = unk_0x7A66412A2B47CF10(uVar81[iVar3], iVar0);
							Global_1626500.f_57990[iVar0 /*286*/].f_258[iVar3] = unk_0x7A66412A2B47CF10(uVar86[iVar3], iVar0);
						}
						else
						{
							Global_1626500.f_57990[iVar0 /*286*/].f_253[iVar3] = -1;
							Global_1626500.f_57990[iVar0 /*286*/].f_258[iVar3] = -1;
						}
						if (unk_0x5F76836A544DA961(uVar91[iVar3], iVar0) == 2)
						{
							Global_1626500.f_57990[iVar0 /*286*/].f_269[iVar3] = unk_0x7A66412A2B47CF10(uVar91[iVar3], iVar0);
						}
						else if (unk_0x08BA6DD398CA197C(Global_1626500.f_31995[iVar3 /*3*/][func_168(iVar0)], func_167(iVar0)))
						{
							Global_1626500.f_57990[iVar0 /*286*/].f_269[iVar3] = -1;
						}
						else
						{
							Global_1626500.f_57990[iVar0 /*286*/].f_269[iVar3] = -2;
						}
						if (unk_0x5F76836A544DA961(uVar96[iVar3], iVar0) == 2)
						{
							Global_1626500.f_57990[iVar0 /*286*/].f_231[iVar3] = unk_0x7A66412A2B47CF10(uVar96[iVar3], iVar0);
						}
						else
						{
							Global_1626500.f_57990[iVar0 /*286*/].f_231[iVar3] = 0;
						}
					}
					iVar3++;
				}
			}
		}
		iVar0++;
	}
	func_166(&iVar6);
}

void func_166(int iParam0)
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
	
	Global_1626500.f_75422[0] = unk_0x9C70ABDC70E0A0CF(*iParam0, "no0");
	iVar1 = unk_0x94A922605867FB40(*iParam0, "loc0");
	iVar2 = unk_0x94A922605867FB40(*iParam0, "head0");
	iVar3 = unk_0x94A922605867FB40(*iParam0, "bit0");
	iVar4 = unk_0x94A922605867FB40(*iParam0, "veh0");
	iVar5 = unk_0x94A922605867FB40(*iParam0, "tars0");
	iVar6 = unk_0x94A922605867FB40(*iParam0, "ty0");
	iVar7 = unk_0x94A922605867FB40(*iParam0, "as0");
	iVar8 = unk_0x94A922605867FB40(*iParam0, "qu0");
	iVar9 = unk_0x94A922605867FB40(*iParam0, "gg0");
	iVar10 = unk_0x94A922605867FB40(*iParam0, "ar0");
	iVar0 = 0;
	while (iVar0 <= (Global_1626500.f_75422[0] - 1))
	{
		Global_1626500.f_76329[0 /*901*/][iVar0 /*15*/] = { unk_0x219E9678C4D55F3E(iVar1, iVar0) };
		Global_1626500.f_76329[0 /*901*/][iVar0 /*15*/].f_3 = unk_0xE00906876D6244A2(iVar2, iVar0);
		Global_1626500.f_76329[0 /*901*/][iVar0 /*15*/].f_5 = unk_0x7A66412A2B47CF10(iVar3, iVar0);
		if (unk_0x5F76836A544DA961(iVar4, iVar0) == 2)
		{
			Global_1626500.f_76329[0 /*901*/][iVar0 /*15*/].f_7 = unk_0x7A66412A2B47CF10(iVar4, iVar0);
		}
		else
		{
			Global_1626500.f_76329[0 /*901*/][iVar0 /*15*/].f_7 = -1;
		}
		Global_1626500.f_76329[0 /*901*/][iVar0 /*15*/].f_9 = unk_0x7A66412A2B47CF10(iVar5, iVar0);
		Global_1626500.f_76329[0 /*901*/][iVar0 /*15*/].f_10 = unk_0x7A66412A2B47CF10(iVar6, iVar0);
		Global_1626500.f_76329[0 /*901*/][iVar0 /*15*/].f_11 = unk_0x7A66412A2B47CF10(iVar7, iVar0);
		Global_1626500.f_76329[0 /*901*/][iVar0 /*15*/].f_12 = unk_0x7A66412A2B47CF10(iVar8, iVar0);
		Global_1626500.f_76329[0 /*901*/][iVar0 /*15*/].f_13 = unk_0x7A66412A2B47CF10(iVar9, iVar0);
		Global_1626500.f_76329[0 /*901*/][iVar0 /*15*/].f_14 = unk_0x7A66412A2B47CF10(iVar10, iVar0);
		iVar0++;
	}
	Global_1626500.f_75422[1] = unk_0x9C70ABDC70E0A0CF(*iParam0, "no1");
	iVar11 = unk_0x94A922605867FB40(*iParam0, "loc1");
	iVar12 = unk_0x94A922605867FB40(*iParam0, "head1");
	iVar13 = unk_0x94A922605867FB40(*iParam0, "bit1");
	iVar14 = unk_0x94A922605867FB40(*iParam0, "veh1");
	iVar15 = unk_0x94A922605867FB40(*iParam0, "tars1");
	iVar16 = unk_0x94A922605867FB40(*iParam0, "ty1");
	iVar17 = unk_0x94A922605867FB40(*iParam0, "as1");
	iVar18 = unk_0x94A922605867FB40(*iParam0, "qu1");
	iVar19 = unk_0x94A922605867FB40(*iParam0, "gg1");
	iVar20 = unk_0x94A922605867FB40(*iParam0, "ar1");
	iVar0 = 0;
	while (iVar0 <= (Global_1626500.f_75422[1] - 1))
	{
		Global_1626500.f_76329[1 /*901*/][iVar0 /*15*/] = { unk_0x219E9678C4D55F3E(iVar11, iVar0) };
		Global_1626500.f_76329[1 /*901*/][iVar0 /*15*/].f_3 = unk_0xE00906876D6244A2(iVar12, iVar0);
		Global_1626500.f_76329[1 /*901*/][iVar0 /*15*/].f_5 = unk_0x7A66412A2B47CF10(iVar13, iVar0);
		if (unk_0x5F76836A544DA961(iVar14, iVar0) == 2)
		{
			Global_1626500.f_76329[1 /*901*/][iVar0 /*15*/].f_7 = unk_0x7A66412A2B47CF10(iVar14, iVar0);
		}
		else
		{
			Global_1626500.f_76329[1 /*901*/][iVar0 /*15*/].f_7 = -1;
		}
		Global_1626500.f_76329[1 /*901*/][iVar0 /*15*/].f_9 = unk_0x7A66412A2B47CF10(iVar15, iVar0);
		Global_1626500.f_76329[1 /*901*/][iVar0 /*15*/].f_10 = unk_0x7A66412A2B47CF10(iVar16, iVar0);
		Global_1626500.f_76329[1 /*901*/][iVar0 /*15*/].f_11 = unk_0x7A66412A2B47CF10(iVar17, iVar0);
		Global_1626500.f_76329[1 /*901*/][iVar0 /*15*/].f_12 = unk_0x7A66412A2B47CF10(iVar18, iVar0);
		Global_1626500.f_76329[1 /*901*/][iVar0 /*15*/].f_13 = unk_0x7A66412A2B47CF10(iVar19, iVar0);
		Global_1626500.f_76329[1 /*901*/][iVar0 /*15*/].f_14 = unk_0x7A66412A2B47CF10(iVar20, iVar0);
		iVar0++;
	}
	Global_1626500.f_75422[2] = unk_0x9C70ABDC70E0A0CF(*iParam0, "no2");
	iVar21 = unk_0x94A922605867FB40(*iParam0, "loc2");
	iVar22 = unk_0x94A922605867FB40(*iParam0, "head2");
	iVar23 = unk_0x94A922605867FB40(*iParam0, "bit2");
	iVar24 = unk_0x94A922605867FB40(*iParam0, "veh2");
	iVar25 = unk_0x94A922605867FB40(*iParam0, "tars2");
	iVar26 = unk_0x94A922605867FB40(*iParam0, "ty2");
	iVar27 = unk_0x94A922605867FB40(*iParam0, "as2");
	iVar28 = unk_0x94A922605867FB40(*iParam0, "qu2");
	iVar29 = unk_0x94A922605867FB40(*iParam0, "gg2");
	iVar30 = unk_0x94A922605867FB40(*iParam0, "ar2");
	iVar0 = 0;
	while (iVar0 <= (Global_1626500.f_75422[2] - 1))
	{
		Global_1626500.f_76329[2 /*901*/][iVar0 /*15*/] = { unk_0x219E9678C4D55F3E(iVar21, iVar0) };
		Global_1626500.f_76329[2 /*901*/][iVar0 /*15*/].f_3 = unk_0xE00906876D6244A2(iVar22, iVar0);
		Global_1626500.f_76329[2 /*901*/][iVar0 /*15*/].f_5 = unk_0x7A66412A2B47CF10(iVar23, iVar0);
		if (unk_0x5F76836A544DA961(iVar24, iVar0) == 2)
		{
			Global_1626500.f_76329[2 /*901*/][iVar0 /*15*/].f_7 = unk_0x7A66412A2B47CF10(iVar24, iVar0);
		}
		else
		{
			Global_1626500.f_76329[2 /*901*/][iVar0 /*15*/].f_7 = -1;
		}
		Global_1626500.f_76329[2 /*901*/][iVar0 /*15*/].f_9 = unk_0x7A66412A2B47CF10(iVar25, iVar0);
		Global_1626500.f_76329[2 /*901*/][iVar0 /*15*/].f_10 = unk_0x7A66412A2B47CF10(iVar26, iVar0);
		Global_1626500.f_76329[2 /*901*/][iVar0 /*15*/].f_11 = unk_0x7A66412A2B47CF10(iVar27, iVar0);
		Global_1626500.f_76329[2 /*901*/][iVar0 /*15*/].f_12 = unk_0x7A66412A2B47CF10(iVar28, iVar0);
		Global_1626500.f_76329[2 /*901*/][iVar0 /*15*/].f_13 = unk_0x7A66412A2B47CF10(iVar29, iVar0);
		Global_1626500.f_76329[2 /*901*/][iVar0 /*15*/].f_14 = unk_0x7A66412A2B47CF10(iVar30, iVar0);
		iVar0++;
	}
	Global_1626500.f_75422[3] = unk_0x9C70ABDC70E0A0CF(*iParam0, "no3");
	iVar31 = unk_0x94A922605867FB40(*iParam0, "loc3");
	iVar32 = unk_0x94A922605867FB40(*iParam0, "head3");
	iVar33 = unk_0x94A922605867FB40(*iParam0, "bit3");
	iVar34 = unk_0x94A922605867FB40(*iParam0, "veh3");
	iVar35 = unk_0x94A922605867FB40(*iParam0, "tars3");
	iVar36 = unk_0x94A922605867FB40(*iParam0, "ty3");
	iVar37 = unk_0x94A922605867FB40(*iParam0, "as3");
	iVar38 = unk_0x94A922605867FB40(*iParam0, "qu3");
	iVar39 = unk_0x94A922605867FB40(*iParam0, "gg3");
	iVar40 = unk_0x94A922605867FB40(*iParam0, "ar3");
	iVar0 = 0;
	while (iVar0 <= (Global_1626500.f_75422[3] - 1))
	{
		Global_1626500.f_76329[3 /*901*/][iVar0 /*15*/] = { unk_0x219E9678C4D55F3E(iVar31, iVar0) };
		Global_1626500.f_76329[3 /*901*/][iVar0 /*15*/].f_3 = unk_0xE00906876D6244A2(iVar32, iVar0);
		Global_1626500.f_76329[3 /*901*/][iVar0 /*15*/].f_5 = unk_0x7A66412A2B47CF10(iVar33, iVar0);
		if (unk_0x5F76836A544DA961(iVar34, iVar0) == 2)
		{
			Global_1626500.f_76329[3 /*901*/][iVar0 /*15*/].f_7 = unk_0x7A66412A2B47CF10(iVar34, iVar0);
		}
		else
		{
			Global_1626500.f_76329[3 /*901*/][iVar0 /*15*/].f_7 = -1;
		}
		Global_1626500.f_76329[3 /*901*/][iVar0 /*15*/].f_9 = unk_0x7A66412A2B47CF10(iVar35, iVar0);
		Global_1626500.f_76329[3 /*901*/][iVar0 /*15*/].f_10 = unk_0x7A66412A2B47CF10(iVar36, iVar0);
		Global_1626500.f_76329[3 /*901*/][iVar0 /*15*/].f_11 = unk_0x7A66412A2B47CF10(iVar37, iVar0);
		Global_1626500.f_76329[3 /*901*/][iVar0 /*15*/].f_12 = unk_0x7A66412A2B47CF10(iVar38, iVar0);
		Global_1626500.f_76329[3 /*901*/][iVar0 /*15*/].f_13 = unk_0x7A66412A2B47CF10(iVar39, iVar0);
		Global_1626500.f_76329[3 /*901*/][iVar0 /*15*/].f_14 = unk_0x7A66412A2B47CF10(iVar40, iVar0);
		iVar0++;
	}
}

int func_167(int iParam0)
{
	if (iParam0 < 31)
	{
		return iParam0;
	}
	else if (iParam0 < 62)
	{
		return (iParam0 - 31);
	}
	return (iParam0 - func_168(iParam0) * 31);
}

int func_168(int iParam0)
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

int func_169()
{
	if (Global_1626500 == 6)
	{
		return 1;
	}
	return 0;
}

void func_170(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar1 = unk_0x458C2A004F0678D0(iParam0, "ene");
	Global_1626500.f_75421 = unk_0x9C70ABDC70E0A0CF(iVar1, "no");
	Global_1626500.f_39310 = unk_0x9C70ABDC70E0A0CF(iVar1, "veh");
	iVar2 = unk_0x94A922605867FB40(iVar1, "loc");
	iVar3 = unk_0x94A922605867FB40(iVar1, "head");
	iVar4 = unk_0x94A922605867FB40(iVar1, "team");
	if (Global_1626500.f_75421 > 60)
	{
		Global_1626500.f_75421 = 60;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1626500.f_75421 - 1))
	{
		if (iVar0 < 60)
		{
			Global_1626500.f_75428[iVar0 /*15*/] = { unk_0x219E9678C4D55F3E(iVar2, iVar0) };
			Global_1626500.f_75428[iVar0 /*15*/].f_3 = unk_0xE00906876D6244A2(iVar3, iVar0);
			Global_1626500.f_75428[iVar0 /*15*/].f_4 = unk_0x7A66412A2B47CF10(iVar4, iVar0);
		}
		iVar0++;
	}
	func_166(&iVar1);
}

void func_171(int iParam0)
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
	
	iVar2 = unk_0x458C2A004F0678D0(iParam0, "dprop");
	Global_1626500.f_50508 = func_174(unk_0x9C70ABDC70E0A0CF(iVar2, "no"), 0, 150);
	iVar3 = unk_0x94A922605867FB40(iVar2, "loc");
	iVar4 = unk_0x94A922605867FB40(iVar2, "vRot");
	iVar5 = unk_0x94A922605867FB40(iVar2, "head");
	iVar6 = unk_0x94A922605867FB40(iVar2, "model");
	iVar7 = unk_0x94A922605867FB40(iVar2, "asst");
	iVar8 = unk_0x94A922605867FB40(iVar2, "asso");
	iVar9 = unk_0x94A922605867FB40(iVar2, "asss");
	iVar10 = unk_0x94A922605867FB40(iVar2, "pasc");
	iVar11 = unk_0x94A922605867FB40(iVar2, "asst2");
	iVar12 = unk_0x94A922605867FB40(iVar2, "asso2");
	iVar13 = unk_0x94A922605867FB40(iVar2, "asss2");
	iVar14 = unk_0x94A922605867FB40(iVar2, "pasc2");
	iVar15 = unk_0x94A922605867FB40(iVar2, "asst3");
	iVar16 = unk_0x94A922605867FB40(iVar2, "asso3");
	iVar17 = unk_0x94A922605867FB40(iVar2, "asss3");
	iVar18 = unk_0x94A922605867FB40(iVar2, "pasc3");
	iVar19 = unk_0x94A922605867FB40(iVar2, "asst4");
	iVar20 = unk_0x94A922605867FB40(iVar2, "asso4");
	iVar21 = unk_0x94A922605867FB40(iVar2, "asss4");
	iVar22 = unk_0x94A922605867FB40(iVar2, "pasc4");
	iVar23 = unk_0x94A922605867FB40(iVar2, "prpct");
	iVar24 = unk_0x94A922605867FB40(iVar2, "prpcr");
	iVar25 = unk_0x94A922605867FB40(iVar2, "prcra");
	iVar26 = unk_0x94A922605867FB40(iVar2, "prpbs");
	iVar27 = unk_0x94A922605867FB40(iVar2, "prpkt");
	iVar28 = unk_0x94A922605867FB40(iVar2, "prpdclr");
	if (Global_1626500.f_50508 > 20)
	{
		Global_1626500.f_50508 = 20;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1626500.f_50508 - 1))
	{
		Global_1626500.f_50510[iVar0 /*31*/] = { unk_0x219E9678C4D55F3E(iVar3, iVar0) };
		Global_1626500.f_50510[iVar0 /*31*/].f_3 = { unk_0x219E9678C4D55F3E(iVar4, iVar0) };
		Global_1626500.f_50510[iVar0 /*31*/].f_6 = unk_0xE00906876D6244A2(iVar5, iVar0);
		Global_1626500.f_50510[iVar0 /*31*/].f_8 = -1;
		iVar1 = unk_0x7A66412A2B47CF10(iVar6, iVar0);
		Global_1626500.f_50510[iVar0 /*31*/].f_7 = func_173(iVar1);
		if (!unk_0x81972CB541487AFD(Global_1626500.f_50510[iVar0 /*31*/].f_7))
		{
			Global_1626500.f_50510[iVar0 /*31*/].f_7 = joaat("prop_barrel_exp_01a");
		}
		Global_1626500.f_50510[iVar0 /*31*/].f_12 = unk_0x7A66412A2B47CF10(iVar7, iVar0);
		Global_1626500.f_50510[iVar0 /*31*/].f_11 = unk_0x7A66412A2B47CF10(iVar8, iVar0);
		Global_1626500.f_50510[iVar0 /*31*/].f_13 = unk_0x7A66412A2B47CF10(iVar9, iVar0);
		if (Global_1626500.f_50510[iVar0 /*31*/].f_13 == -1)
		{
			Global_1626500.f_50510[iVar0 /*31*/].f_13 = 0;
		}
		if (unk_0x5F76836A544DA961(iVar11, iVar0) == 2)
		{
			Global_1626500.f_50510[iVar0 /*31*/].f_19 = unk_0x7A66412A2B47CF10(iVar11, iVar0);
			Global_1626500.f_50510[iVar0 /*31*/].f_22 = unk_0x7A66412A2B47CF10(iVar12, iVar0);
			Global_1626500.f_50510[iVar0 /*31*/].f_25 = unk_0x7A66412A2B47CF10(iVar13, iVar0);
			Global_1626500.f_50510[iVar0 /*31*/].f_20 = unk_0x7A66412A2B47CF10(iVar15, iVar0);
			Global_1626500.f_50510[iVar0 /*31*/].f_23 = unk_0x7A66412A2B47CF10(iVar16, iVar0);
			Global_1626500.f_50510[iVar0 /*31*/].f_26 = unk_0x7A66412A2B47CF10(iVar17, iVar0);
			Global_1626500.f_50510[iVar0 /*31*/].f_21 = unk_0x7A66412A2B47CF10(iVar19, iVar0);
			Global_1626500.f_50510[iVar0 /*31*/].f_24 = unk_0x7A66412A2B47CF10(iVar20, iVar0);
			Global_1626500.f_50510[iVar0 /*31*/].f_27 = unk_0x7A66412A2B47CF10(iVar21, iVar0);
		}
		else
		{
			Global_1626500.f_50510[iVar0 /*31*/].f_22 = -1;
			Global_1626500.f_50510[iVar0 /*31*/].f_19 = 0;
			Global_1626500.f_50510[iVar0 /*31*/].f_25 = 0;
			Global_1626500.f_50510[iVar0 /*31*/].f_23 = -1;
			Global_1626500.f_50510[iVar0 /*31*/].f_20 = 0;
			Global_1626500.f_50510[iVar0 /*31*/].f_26 = 0;
			Global_1626500.f_50510[iVar0 /*31*/].f_24 = -1;
			Global_1626500.f_50510[iVar0 /*31*/].f_21 = 0;
			Global_1626500.f_50510[iVar0 /*31*/].f_27 = 0;
		}
		if (unk_0x5F76836A544DA961(iVar10, iVar0) == 2)
		{
			Global_1626500.f_50510[iVar0 /*31*/].f_14 = unk_0x7A66412A2B47CF10(iVar10, iVar0);
			Global_1626500.f_50510[iVar0 /*31*/].f_28 = unk_0x7A66412A2B47CF10(iVar14, iVar0);
			Global_1626500.f_50510[iVar0 /*31*/].f_29 = unk_0x7A66412A2B47CF10(iVar18, iVar0);
			Global_1626500.f_50510[iVar0 /*31*/].f_30 = unk_0x7A66412A2B47CF10(iVar22, iVar0);
		}
		else
		{
			Global_1626500.f_50510[iVar0 /*31*/].f_14 = 0;
			Global_1626500.f_50510[iVar0 /*31*/].f_28 = 0;
			Global_1626500.f_50510[iVar0 /*31*/].f_29 = 0;
			Global_1626500.f_50510[iVar0 /*31*/].f_30 = 0;
		}
		if (unk_0x5F76836A544DA961(iVar24, iVar0) == 2)
		{
			Global_1626500.f_50510[iVar0 /*31*/].f_15 = unk_0x7A66412A2B47CF10(iVar24, iVar0);
		}
		else
		{
			Global_1626500.f_50510[iVar0 /*31*/].f_15 = -1;
		}
		if (unk_0x5F76836A544DA961(iVar23, iVar0) == 2)
		{
			Global_1626500.f_50510[iVar0 /*31*/].f_16 = unk_0x7A66412A2B47CF10(iVar23, iVar0);
		}
		else
		{
			Global_1626500.f_50510[iVar0 /*31*/].f_16 = -1;
		}
		if (unk_0x5F76836A544DA961(iVar25, iVar0) == 2)
		{
			Global_1626500.f_50510[iVar0 /*31*/].f_17 = unk_0x7A66412A2B47CF10(iVar25, iVar0);
		}
		else
		{
			Global_1626500.f_50510[iVar0 /*31*/].f_17 = -1;
		}
		if (unk_0x5F76836A544DA961(iVar26, iVar0) == 2)
		{
			Global_1626500.f_50510[iVar0 /*31*/].f_18 = unk_0x7A66412A2B47CF10(iVar26, iVar0);
		}
		else
		{
			Global_1626500.f_50510[iVar0 /*31*/].f_18 = 0;
		}
		if (unk_0x5F76836A544DA961(iVar27, iVar0) == 2)
		{
			Global_1626500.f_50510[iVar0 /*31*/].f_9 = unk_0x7A66412A2B47CF10(iVar27, iVar0);
		}
		else
		{
			Global_1626500.f_50510[iVar0 /*31*/].f_9 = 0;
		}
		if (unk_0x5F76836A544DA961(iVar28, iVar0) == 2)
		{
			Global_1626500.f_50510[iVar0 /*31*/].f_10 = unk_0x7A66412A2B47CF10(iVar28, iVar0);
		}
		else
		{
			Global_1626500.f_50510[iVar0 /*31*/].f_10 = 1;
		}
		iVar0++;
	}
	iVar29 = iVar0;
	if (func_172() || Global_1626500 == 1)
	{
		iVar0 = 0;
		while (iVar0 <= (Global_1626500.f_39362 - 1))
		{
			Global_1626500.f_50510[iVar29 /*31*/] = { Global_1626500.f_39365[iVar0 /*90*/] };
			Global_1626500.f_50510[iVar29 /*31*/].f_3 = { Global_1626500.f_39365[iVar0 /*90*/].f_4 };
			Global_1626500.f_50510[iVar29 /*31*/].f_6 = Global_1626500.f_39365[iVar0 /*90*/].f_3;
			Global_1626500.f_50510[iVar29 /*31*/].f_8 = iVar0;
			Global_1626500.f_50510[iVar29 /*31*/].f_7 = joaat("prop_container_ld_pu");
			iVar30 = 0;
			while (iVar30 <= 3)
			{
				Global_1626500.f_39365[iVar29 /*90*/].f_17[iVar30] = 0;
				Global_1626500.f_39365[iVar29 /*90*/].f_22[iVar30] = 99999;
				iVar30++;
			}
			Global_1626500.f_50509++;
			Global_1626500.f_50508++;
			iVar29++;
			iVar0++;
		}
	}
}

int func_172()
{
	if (Global_1626500 == 0 && Global_1626500.f_2 == 5)
	{
		return 1;
	}
	return 0;
}

int func_173(int iParam0)
{
	if (iParam0 == joaat("prop_offroad_tyres01"))
	{
		return joaat("lts_prop_lts_offroad_tyres01");
	}
	else if (iParam0 == joaat("prop_elecbox_24"))
	{
		return joaat("lts_prop_lts_elecbox_24");
	}
	else if (iParam0 == joaat("prop_elecbox_24b"))
	{
		return joaat("lts_prop_lts_elecbox_24b");
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
	if ((unk_0xD95D58B9AAC86D55() || unk_0x15B0CAB107CFCDE1()) || unk_0x955B8C8F89CC3AC0())
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
	else if (unk_0x65121BA303717C5B() || unk_0xBECAD780226FC009())
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

int func_174(int iParam0, int iParam1, int iParam2)
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

void func_175(int iParam0)
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
	
	iVar3 = unk_0x458C2A004F0678D0(iParam0, "prop");
	Global_1626500.f_41581 = unk_0x9C70ABDC70E0A0CF(iVar3, "no");
	iVar4 = unk_0x94A922605867FB40(iVar3, "loc");
	iVar5 = unk_0x94A922605867FB40(iVar3, "vRot");
	iVar6 = unk_0x94A922605867FB40(iVar3, "head");
	iVar7 = unk_0x94A922605867FB40(iVar3, "model");
	iVar8 = unk_0x94A922605867FB40(iVar3, "asst");
	iVar9 = unk_0x94A922605867FB40(iVar3, "asso");
	iVar10 = unk_0x94A922605867FB40(iVar3, "asss");
	iVar11 = unk_0x94A922605867FB40(iVar3, "pasc");
	iVar12 = unk_0x94A922605867FB40(iVar3, "asst2");
	iVar13 = unk_0x94A922605867FB40(iVar3, "asso2");
	iVar14 = unk_0x94A922605867FB40(iVar3, "asss2");
	iVar15 = unk_0x94A922605867FB40(iVar3, "pasc2");
	iVar16 = unk_0x94A922605867FB40(iVar3, "asst3");
	iVar17 = unk_0x94A922605867FB40(iVar3, "asso3");
	iVar18 = unk_0x94A922605867FB40(iVar3, "asss3");
	iVar19 = unk_0x94A922605867FB40(iVar3, "pasc3");
	iVar20 = unk_0x94A922605867FB40(iVar3, "asst4");
	iVar21 = unk_0x94A922605867FB40(iVar3, "asso4");
	iVar22 = unk_0x94A922605867FB40(iVar3, "asss4");
	iVar23 = unk_0x94A922605867FB40(iVar3, "pasc4");
	iVar24 = unk_0x94A922605867FB40(iVar3, "bpbid");
	iVar25 = unk_0x94A922605867FB40(iVar3, "bpbip");
	iVar26 = unk_0x94A922605867FB40(iVar3, "bpbpt");
	iVar27 = unk_0x94A922605867FB40(iVar3, "fcuat");
	iVar28 = unk_0x94A922605867FB40(iVar3, "aldel");
	iVar29 = unk_0x94A922605867FB40(iVar3, "alsnd");
	iVar30 = unk_0x94A922605867FB40(iVar3, "flvfx");
	iVar31 = unk_0x94A922605867FB40(iVar3, "prpcl");
	iVar32 = unk_0x94A922605867FB40(iVar3, "prplod");
	iVar33 = unk_0x94A922605867FB40(iVar3, "prpatn");
	iVar34 = unk_0x94A922605867FB40(iVar3, "prpasn");
	iVar35 = unk_0x94A922605867FB40(iVar3, "prpclr");
	iVar36 = unk_0x94A922605867FB40(iVar3, "prptsp");
	iVar37 = unk_0x94A922605867FB40(iVar3, "prptds");
	iVar38 = unk_0x94A922605867FB40(iVar3, "prpsba");
	iVar39 = unk_0x94A922605867FB40(iVar3, "sndid");
	iVar40 = unk_0x94A922605867FB40(iVar3, "sndtri");
	iVar41 = unk_0x94A922605867FB40(iVar3, "sndlmt");
	iVar42 = unk_0x94A922605867FB40(iVar3, "prpsnpp");
	iVar43 = unk_0x94A922605867FB40(iVar3, "prpct");
	iVar44 = unk_0x94A922605867FB40(iVar3, "prpcr");
	iVar45 = unk_0x94A922605867FB40(iVar3, "prcra");
	iVar46 = unk_0x94A922605867FB40(iVar3, "prpbs");
	iVar47 = unk_0x94A922605867FB40(iVar3, "prers");
	iVar48 = unk_0x94A922605867FB40(iVar3, "ptfxtr");
	iVar49 = unk_0x94A922605867FB40(iVar3, "ptfxst");
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		StringCopy(&cVar55, "prpsdp", 8);
		StringIntConCat(&cVar55, iVar2, 8);
		uVar50[iVar2] = unk_0x94A922605867FB40(iVar3, &cVar55);
		iVar2++;
	}
	iVar57 = unk_0x94A922605867FB40(iVar3, "pdip");
	if (Global_1626500.f_41581 > 150)
	{
		Global_1626500.f_41581 = 150;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1626500.f_41581 - 1))
	{
		Global_1626500.f_41582[iVar0 /*59*/] = { unk_0x219E9678C4D55F3E(iVar4, iVar0) };
		Global_1626500.f_41582[iVar0 /*59*/].f_3 = { unk_0x219E9678C4D55F3E(iVar5, iVar0) };
		Global_1626500.f_41582[iVar0 /*59*/].f_6 = unk_0xE00906876D6244A2(iVar6, iVar0);
		iVar1 = unk_0x7A66412A2B47CF10(iVar7, iVar0);
		Global_1626500.f_41582[iVar0 /*59*/].f_7 = func_173(iVar1);
		if (!unk_0x81972CB541487AFD(Global_1626500.f_41582[iVar0 /*59*/].f_7))
		{
			Global_1626500.f_41582[iVar0 /*59*/].f_7 = joaat("prop_const_fence02b");
		}
		Global_1626500.f_41582[iVar0 /*59*/].f_9 = unk_0x7A66412A2B47CF10(iVar8, iVar0);
		Global_1626500.f_41582[iVar0 /*59*/].f_8 = unk_0x7A66412A2B47CF10(iVar9, iVar0);
		Global_1626500.f_41582[iVar0 /*59*/].f_10 = unk_0x7A66412A2B47CF10(iVar10, iVar0);
		if (Global_1626500.f_41582[iVar0 /*59*/].f_10 == -1)
		{
			Global_1626500.f_41582[iVar0 /*59*/].f_10 = 0;
		}
		if (unk_0x5F76836A544DA961(iVar24, iVar0) == 1)
		{
			Global_1626500.f_41582[iVar0 /*59*/].f_49 = unk_0xEEF837380BC73B2C(iVar24, iVar0);
		}
		else
		{
			Global_1626500.f_41582[iVar0 /*59*/].f_49 = 0;
		}
		if (unk_0x5F76836A544DA961(iVar25, iVar0) == 1)
		{
			Global_1626500.f_41582[iVar0 /*59*/].f_50 = unk_0xEEF837380BC73B2C(iVar25, iVar0);
		}
		else
		{
			Global_1626500.f_41582[iVar0 /*59*/].f_50 = 0;
		}
		if (unk_0x5F76836A544DA961(iVar26, iVar0) == 2)
		{
			Global_1626500.f_41582[iVar0 /*59*/].f_51 = unk_0x7A66412A2B47CF10(iVar26, iVar0);
		}
		else
		{
			Global_1626500.f_41582[iVar0 /*59*/].f_51 = 0;
		}
		Global_1626500.f_41582[iVar0 /*59*/].f_52 = unk_0x7A66412A2B47CF10(iVar27, iVar0);
		if (unk_0x5F76836A544DA961(iVar12, iVar0) == 2)
		{
			Global_1626500.f_41582[iVar0 /*59*/].f_36 = unk_0x7A66412A2B47CF10(iVar12, iVar0);
			Global_1626500.f_41582[iVar0 /*59*/].f_39 = unk_0x7A66412A2B47CF10(iVar13, iVar0);
			Global_1626500.f_41582[iVar0 /*59*/].f_42 = unk_0x7A66412A2B47CF10(iVar14, iVar0);
			Global_1626500.f_41582[iVar0 /*59*/].f_37 = unk_0x7A66412A2B47CF10(iVar16, iVar0);
			Global_1626500.f_41582[iVar0 /*59*/].f_40 = unk_0x7A66412A2B47CF10(iVar17, iVar0);
			Global_1626500.f_41582[iVar0 /*59*/].f_43 = unk_0x7A66412A2B47CF10(iVar18, iVar0);
			Global_1626500.f_41582[iVar0 /*59*/].f_38 = unk_0x7A66412A2B47CF10(iVar20, iVar0);
			Global_1626500.f_41582[iVar0 /*59*/].f_41 = unk_0x7A66412A2B47CF10(iVar21, iVar0);
			Global_1626500.f_41582[iVar0 /*59*/].f_44 = unk_0x7A66412A2B47CF10(iVar22, iVar0);
		}
		else
		{
			Global_1626500.f_41582[iVar0 /*59*/].f_39 = -1;
			Global_1626500.f_41582[iVar0 /*59*/].f_36 = 0;
			Global_1626500.f_41582[iVar0 /*59*/].f_42 = 0;
			Global_1626500.f_41582[iVar0 /*59*/].f_40 = -1;
			Global_1626500.f_41582[iVar0 /*59*/].f_37 = 0;
			Global_1626500.f_41582[iVar0 /*59*/].f_43 = 0;
			Global_1626500.f_41582[iVar0 /*59*/].f_41 = -1;
			Global_1626500.f_41582[iVar0 /*59*/].f_38 = 0;
			Global_1626500.f_41582[iVar0 /*59*/].f_44 = 0;
		}
		if (unk_0x5F76836A544DA961(iVar11, iVar0) == 2)
		{
			Global_1626500.f_41582[iVar0 /*59*/].f_11 = unk_0x7A66412A2B47CF10(iVar11, iVar0);
			Global_1626500.f_41582[iVar0 /*59*/].f_45 = unk_0x7A66412A2B47CF10(iVar15, iVar0);
			Global_1626500.f_41582[iVar0 /*59*/].f_46 = unk_0x7A66412A2B47CF10(iVar19, iVar0);
			Global_1626500.f_41582[iVar0 /*59*/].f_47 = unk_0x7A66412A2B47CF10(iVar23, iVar0);
		}
		else
		{
			Global_1626500.f_41582[iVar0 /*59*/].f_11 = 0;
			Global_1626500.f_41582[iVar0 /*59*/].f_45 = 0;
			Global_1626500.f_41582[iVar0 /*59*/].f_46 = 0;
			Global_1626500.f_41582[iVar0 /*59*/].f_47 = 0;
		}
		Global_1626500.f_41582[iVar0 /*59*/].f_12 = unk_0x7A66412A2B47CF10(iVar28, iVar0);
		if (Global_1626500.f_41582[iVar0 /*59*/].f_12 > 0 && Global_1626500.f_41582[iVar0 /*59*/].f_12 < 1000)
		{
			Global_1626500.f_41582[iVar0 /*59*/].f_12 = func_176(Global_1626500.f_41582[iVar0 /*59*/].f_12);
		}
		Global_1626500.f_41582[iVar0 /*59*/].f_13 = unk_0x7A66412A2B47CF10(iVar29, iVar0);
		Global_1626500.f_41582[iVar0 /*59*/].f_14 = unk_0x7A66412A2B47CF10(iVar30, iVar0);
		Global_1626500.f_41582[iVar0 /*59*/].f_15 = unk_0x7A66412A2B47CF10(iVar31, iVar0);
		Global_1626500.f_41582[iVar0 /*59*/].f_31 = unk_0xE00906876D6244A2(iVar36, iVar0);
		Global_1626500.f_41582[iVar0 /*59*/].f_32 = unk_0xE00906876D6244A2(iVar37, iVar0);
		Global_1626500.f_41582[iVar0 /*59*/].f_33 = unk_0x7A66412A2B47CF10(iVar38, iVar0);
		Global_1626500.f_41582[iVar0 /*59*/].f_53 = unk_0x7A66412A2B47CF10(iVar39, iVar0);
		Global_1626500.f_41582[iVar0 /*59*/].f_54 = unk_0x7A66412A2B47CF10(iVar40, iVar0);
		Global_1626500.f_41582[iVar0 /*59*/].f_55 = unk_0x7A66412A2B47CF10(iVar41, iVar0);
		if (unk_0x5F76836A544DA961(iVar32, iVar0) == 2)
		{
			Global_1626500.f_41582[iVar0 /*59*/].f_21 = unk_0x7A66412A2B47CF10(iVar32, iVar0);
		}
		else
		{
			Global_1626500.f_41582[iVar0 /*59*/].f_21 = -1;
		}
		if (unk_0x5F76836A544DA961(iVar33, iVar0) == 2)
		{
			Global_1626500.f_41582[iVar0 /*59*/].f_22 = unk_0x7A66412A2B47CF10(iVar33, iVar0);
		}
		else
		{
			Global_1626500.f_41582[iVar0 /*59*/].f_22 = 0;
		}
		if (unk_0x5F76836A544DA961(iVar34, iVar0) == 2)
		{
			Global_1626500.f_41582[iVar0 /*59*/].f_23 = unk_0x7A66412A2B47CF10(iVar34, iVar0);
		}
		else
		{
			Global_1626500.f_41582[iVar0 /*59*/].f_23 = 0;
		}
		if (unk_0x5F76836A544DA961(iVar35, iVar0) == 2)
		{
			Global_1626500.f_41582[iVar0 /*59*/].f_24 = unk_0x7A66412A2B47CF10(iVar35, iVar0);
		}
		else
		{
			Global_1626500.f_41582[iVar0 /*59*/].f_24 = 1;
		}
		if (unk_0x5F76836A544DA961(iVar36, iVar0) == 3)
		{
			Global_1626500.f_41582[iVar0 /*59*/].f_31 = unk_0xE00906876D6244A2(iVar36, iVar0);
		}
		else
		{
			Global_1626500.f_41582[iVar0 /*59*/].f_31 = 0f;
		}
		if (unk_0x5F76836A544DA961(iVar37, iVar0) == 3)
		{
			Global_1626500.f_41582[iVar0 /*59*/].f_32 = unk_0xE00906876D6244A2(iVar37, iVar0);
		}
		else
		{
			Global_1626500.f_41582[iVar0 /*59*/].f_32 = 0.4f;
		}
		if (unk_0x7A66412A2B47CF10(iVar38, iVar0) > 5)
		{
			if (unk_0x7A66412A2B47CF10(iVar38, iVar0) == 15)
			{
				Global_1626500.f_41582[iVar0 /*59*/].f_33 = 1;
			}
			if (unk_0x7A66412A2B47CF10(iVar38, iVar0) == 25)
			{
				Global_1626500.f_41582[iVar0 /*59*/].f_33 = 2;
			}
			if (unk_0x7A66412A2B47CF10(iVar38, iVar0) == 35)
			{
				Global_1626500.f_41582[iVar0 /*59*/].f_33 = 3;
			}
			if (unk_0x7A66412A2B47CF10(iVar38, iVar0) == 45)
			{
				Global_1626500.f_41582[iVar0 /*59*/].f_33 = 4;
			}
			if (unk_0x7A66412A2B47CF10(iVar38, iVar0) == 55)
			{
				Global_1626500.f_41582[iVar0 /*59*/].f_33 = 5;
			}
			if (unk_0x7A66412A2B47CF10(iVar38, iVar0) == 16)
			{
				Global_1626500.f_41582[iVar0 /*59*/].f_33 = 3;
			}
			if (unk_0x7A66412A2B47CF10(iVar38, iVar0) == 30)
			{
				Global_1626500.f_41582[iVar0 /*59*/].f_33 = 2;
			}
			if (unk_0x7A66412A2B47CF10(iVar38, iVar0) == 44)
			{
				Global_1626500.f_41582[iVar0 /*59*/].f_33 = 1;
			}
		}
		else if (unk_0x5F76836A544DA961(iVar38, iVar0) == 2)
		{
			Global_1626500.f_41582[iVar0 /*59*/].f_33 = unk_0x7A66412A2B47CF10(iVar38, iVar0);
		}
		else
		{
			Global_1626500.f_41582[iVar0 /*59*/].f_33 = 2;
		}
		if (unk_0x5F76836A544DA961(iVar39, iVar0) == 2)
		{
			Global_1626500.f_41582[iVar0 /*59*/].f_53 = unk_0x7A66412A2B47CF10(iVar39, iVar0);
		}
		else
		{
			Global_1626500.f_41582[iVar0 /*59*/].f_53 = 0;
		}
		if (unk_0x5F76836A544DA961(iVar40, iVar0) == 2)
		{
			Global_1626500.f_41582[iVar0 /*59*/].f_54 = unk_0x7A66412A2B47CF10(iVar40, iVar0);
		}
		else
		{
			Global_1626500.f_41582[iVar0 /*59*/].f_54 = 0;
		}
		if (unk_0x5F76836A544DA961(iVar41, iVar0) == 2)
		{
			Global_1626500.f_41582[iVar0 /*59*/].f_55 = unk_0x7A66412A2B47CF10(iVar41, iVar0);
		}
		else
		{
			Global_1626500.f_41582[iVar0 /*59*/].f_55 = 0;
		}
		if (unk_0x5F76836A544DA961(iVar42, iVar0) == 2)
		{
			Global_1626500.f_41582[iVar0 /*59*/].f_25 = unk_0x7A66412A2B47CF10(iVar42, iVar0);
		}
		else
		{
			Global_1626500.f_41582[iVar0 /*59*/].f_25 = 0;
		}
		if (unk_0x5F76836A544DA961(iVar48, iVar0) == 3)
		{
			Global_1626500.f_41582[iVar0 /*59*/].f_34 = unk_0xE00906876D6244A2(iVar48, iVar0);
		}
		else
		{
			Global_1626500.f_41582[iVar0 /*59*/].f_34 = 0f;
		}
		if (unk_0x5F76836A544DA961(iVar44, iVar0) == 2)
		{
			Global_1626500.f_41582[iVar0 /*59*/].f_16 = unk_0x7A66412A2B47CF10(iVar44, iVar0);
		}
		else
		{
			Global_1626500.f_41582[iVar0 /*59*/].f_16 = -1;
		}
		if (unk_0x5F76836A544DA961(iVar43, iVar0) == 2)
		{
			Global_1626500.f_41582[iVar0 /*59*/].f_17 = unk_0x7A66412A2B47CF10(iVar43, iVar0);
		}
		else
		{
			Global_1626500.f_41582[iVar0 /*59*/].f_17 = -1;
		}
		if (unk_0x5F76836A544DA961(iVar45, iVar0) == 2)
		{
			Global_1626500.f_41582[iVar0 /*59*/].f_18 = unk_0x7A66412A2B47CF10(iVar45, iVar0);
		}
		else
		{
			Global_1626500.f_41582[iVar0 /*59*/].f_18 = -1;
		}
		Global_1626500.f_41582[iVar0 /*59*/].f_19 = unk_0x7A66412A2B47CF10(iVar46, iVar0);
		if (unk_0x5F76836A544DA961(iVar49, iVar0) == 2)
		{
			Global_1626500.f_41582[iVar0 /*59*/].f_35 = unk_0x7A66412A2B47CF10(iVar49, iVar0);
		}
		else
		{
			Global_1626500.f_41582[iVar0 /*59*/].f_35 = 0;
		}
		Global_1626500.f_41582[iVar0 /*59*/].f_20 = unk_0x7A66412A2B47CF10(iVar47, iVar0);
		iVar2 = 0;
		while (iVar2 <= 3)
		{
			if (unk_0x5F76836A544DA961(uVar50[iVar2], iVar0) == 2)
			{
				Global_1626500.f_41582[iVar0 /*59*/].f_26[iVar2] = unk_0x7A66412A2B47CF10(uVar50[iVar2], iVar0);
			}
			else
			{
				Global_1626500.f_41582[iVar0 /*59*/].f_26[iVar2] = -1;
			}
			iVar2++;
		}
		Global_1626500.f_41582[iVar0 /*59*/].f_58 = unk_0x7A66412A2B47CF10(iVar57, iVar0);
		iVar0++;
	}
}

int func_176(int iParam0)
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

void func_177(int iParam0)
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
	var uVar69[4];
	var uVar74[4];
	var uVar79[4];
	var uVar84[4];
	var uVar89[4];
	var uVar94[4];
	var uVar99[4];
	var uVar104[4];
	var uVar109[2];
	var uVar112[2];
	int iVar115;
	int iVar116;
	int iVar117;
	int iVar118;
	int iVar119;
	
	iVar6 = unk_0x458C2A004F0678D0(iParam0, "veh");
	Global_1626500.f_53608 = unk_0x9C70ABDC70E0A0CF(iVar6, "no");
	Global_1626500.f_53609 = unk_0x9C70ABDC70E0A0CF(iVar6, "time");
	Global_1626500.f_53610 = unk_0x9C70ABDC70E0A0CF(iVar6, "pal");
	iVar7 = unk_0x458C2A004F0678D0(iParam0, "vhrls");
	if (iVar7 != 0)
	{
		iVar3 = 0;
		while (iVar3 <= (Global_1626500.f_27 - 1))
		{
			iVar0 = 0;
			while (iVar0 <= (Global_1626500.f_89[iVar3 /*7777*/].f_57 - 1))
			{
				StringCopy(&cVar4, "vhr", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				Global_1626500.f_57837[iVar0 /*5*/][iVar3] = unk_0x9C70ABDC70E0A0CF(iVar7, &cVar4);
				StringCopy(&cVar4, "vrs", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				Global_1626500.f_31291[iVar0 /*5*/][iVar3] = unk_0x9C70ABDC70E0A0CF(iVar7, &cVar4);
				StringCopy(&cVar4, "rkt", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				if (unk_0xD44C5C9A5AB591EF(iVar7, &cVar4) == 2)
				{
					Global_1626500.f_31377[iVar0 /*5*/][iVar3] = unk_0x9C70ABDC70E0A0CF(iVar7, &cVar4);
				}
				else
				{
					Global_1626500.f_31377[iVar0 /*5*/][iVar3] = 0;
				}
				StringCopy(&cVar4, "bst", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				if (unk_0xD44C5C9A5AB591EF(iVar7, &cVar4) == 2)
				{
					Global_1626500.f_31463[iVar0 /*5*/][iVar3] = unk_0x9C70ABDC70E0A0CF(iVar7, &cVar4);
				}
				else
				{
					Global_1626500.f_31463[iVar0 /*5*/][iVar3] = 0;
				}
				StringCopy(&cVar4, "rpr", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				if (unk_0xD44C5C9A5AB591EF(iVar7, &cVar4) == 2)
				{
					Global_1626500.f_31549[iVar0 /*5*/][iVar3] = unk_0x9C70ABDC70E0A0CF(iVar7, &cVar4);
				}
				else
				{
					Global_1626500.f_31549[iVar0 /*5*/][iVar3] = 0;
				}
				StringCopy(&cVar4, "spk", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				if (unk_0xD44C5C9A5AB591EF(iVar7, &cVar4) == 2)
				{
					Global_1626500.f_31635[iVar0 /*5*/][iVar3] = unk_0x9C70ABDC70E0A0CF(iVar7, &cVar4);
				}
				else
				{
					Global_1626500.f_31635[iVar0 /*5*/][iVar3] = 0;
				}
				StringCopy(&cVar4, "tmr", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				if (unk_0xD44C5C9A5AB591EF(iVar7, &cVar4) == 2)
				{
					Global_1626500.f_31721[iVar0 /*5*/][iVar3] = unk_0x9C70ABDC70E0A0CF(iVar7, &cVar4);
				}
				else
				{
					Global_1626500.f_31721[iVar0 /*5*/][iVar3] = 1500;
				}
				StringCopy(&cVar4, "bsd", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				if (unk_0xD44C5C9A5AB591EF(iVar7, &cVar4) == 2)
				{
					Global_1626500.f_31807[iVar0 /*5*/][iVar3] = unk_0x9C70ABDC70E0A0CF(iVar7, &cVar4);
				}
				else
				{
					Global_1626500.f_31807[iVar0 /*5*/][iVar3] = 1400;
				}
				StringCopy(&cVar4, "bss", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				if (unk_0xD44C5C9A5AB591EF(iVar7, &cVar4) == 2)
				{
					Global_1626500.f_31893[iVar0 /*5*/][iVar3] = unk_0x9C70ABDC70E0A0CF(iVar7, &cVar4);
				}
				else
				{
					Global_1626500.f_31893[iVar0 /*5*/][iVar3] = 35;
				}
				iVar0++;
			}
			iVar3++;
		}
	}
	iVar8 = unk_0x94A922605867FB40(iVar6, "loc");
	iVar9 = unk_0x94A922605867FB40(iVar6, "head");
	iVar16 = unk_0x94A922605867FB40(iVar6, "model");
	iVar17 = unk_0x94A922605867FB40(iVar6, "col");
	iVar18 = unk_0x94A922605867FB40(iVar6, "rsp");
	if (func_121())
	{
		iVar10 = unk_0x94A922605867FB40(iVar6, "vrr");
		iVar11 = unk_0x94A922605867FB40(iVar6, "vrmr");
		iVar12 = unk_0x94A922605867FB40(iVar6, "vsnt");
		iVar13 = unk_0x94A922605867FB40(iVar6, "vsnei");
		iVar14 = unk_0x94A922605867FB40(iVar6, "v2sp");
		iVar15 = unk_0x94A922605867FB40(iVar6, "v2sh");
		iVar19 = unk_0x94A922605867FB40(iVar6, "objt");
		iVar20 = unk_0x94A922605867FB40(iVar6, "team");
		iVar21 = unk_0x94A922605867FB40(iVar6, "spwn");
		iVar22 = unk_0x94A922605867FB40(iVar6, "objt2");
		iVar23 = unk_0x94A922605867FB40(iVar6, "team2");
		iVar24 = unk_0x94A922605867FB40(iVar6, "spwn2");
		iVar25 = unk_0x94A922605867FB40(iVar6, "objt3");
		iVar26 = unk_0x94A922605867FB40(iVar6, "team3");
		iVar27 = unk_0x94A922605867FB40(iVar6, "spwn3");
		iVar28 = unk_0x94A922605867FB40(iVar6, "objt4");
		iVar29 = unk_0x94A922605867FB40(iVar6, "team4");
		iVar30 = unk_0x94A922605867FB40(iVar6, "spwn4");
		Global_1626500.f_41580 = unk_0x9C70ABDC70E0A0CF(iVar6, "nocr");
		iVar31 = unk_0x94A922605867FB40(iVar6, "crgdm");
		iVar32 = unk_0x94A922605867FB40(iVar6, "liv");
		iVar33 = unk_0x94A922605867FB40(iVar6, "modps");
		iVar34 = unk_0x94A922605867FB40(iVar6, "enveff");
		iVar35 = unk_0x94A922605867FB40(iVar6, "colc");
		iVar36 = unk_0x94A922605867FB40(iVar6, "col2");
		iVar37 = unk_0x94A922605867FB40(iVar6, "col3");
		Global_1626500.f_53611 = unk_0x9C70ABDC70E0A0CF(iVar6, "burst");
		iVar38 = unk_0x94A922605867FB40(iVar6, "hlth");
		iVar39 = unk_0x94A922605867FB40(iVar6, "enghp");
		iVar40 = unk_0x94A922605867FB40(iVar6, "ptrhp");
		iVar41 = unk_0x94A922605867FB40(iVar6, "bdyhp");
		iVar42 = unk_0x94A922605867FB40(iVar6, "drbs");
		iVar43 = unk_0x94A922605867FB40(iVar6, "vbs2");
		iVar44 = unk_0x94A922605867FB40(iVar6, "vbs3");
		iVar45 = unk_0x94A922605867FB40(iVar6, "vbs4");
		iVar46 = unk_0x94A922605867FB40(iVar6, "vebs");
		iVar47 = unk_0x94A922605867FB40(iVar6, "vehct");
		iVar50 = unk_0x94A922605867FB40(iVar6, "vhcra");
		iVar48 = unk_0x94A922605867FB40(iVar6, "vehcr");
		iVar49 = unk_0x94A922605867FB40(iVar6, "vehcv");
		iVar51 = unk_0x94A922605867FB40(iVar6, "vehbc");
		iVar52 = unk_0x94A922605867FB40(iVar6, "vehbr");
		iVar53 = unk_0x94A922605867FB40(iVar6, "vspdl");
		iVar54 = unk_0x94A922605867FB40(iVar6, "vsgr");
		iVar55 = unk_0x94A922605867FB40(iVar6, "vssgr");
		iVar56 = unk_0x94A922605867FB40(iVar6, "vcnm");
		iVar57 = unk_0x94A922605867FB40(iVar6, "vehap");
		iVar58 = unk_0x94A922605867FB40(iVar6, "vehat");
		iVar59 = unk_0x94A922605867FB40(iVar6, "vehdu");
		iVar60 = unk_0x94A922605867FB40(iVar6, "vldt");
		iVar61 = unk_0x94A922605867FB40(iVar6, "vldr");
		iVar62 = unk_0x94A922605867FB40(iVar6, "cutsc");
		iVar63 = unk_0x94A922605867FB40(iVar6, "cutsh");
		iVar67 = unk_0x94A922605867FB40(iVar6, "nmpass");
		iVar68 = unk_0x94A922605867FB40(iVar6, "nmfail");
		iVar64 = unk_0x94A922605867FB40(iVar6, "vmcp");
		iVar65 = unk_0x94A922605867FB40(iVar6, "vmcf");
		iVar66 = unk_0x94A922605867FB40(iVar6, "gotor");
		iVar116 = unk_0x94A922605867FB40(iVar6, "vphrang");
		iVar117 = unk_0x94A922605867FB40(iVar6, "vwpndmg");
		iVar118 = unk_0x94A922605867FB40(iVar6, "vtmhrn");
		iVar119 = unk_0x94A922605867FB40(iVar6, "vdrpovr");
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			StringCopy(&cVar4, "vrstp", 8);
			if (iVar1 > 0)
			{
				StringIntConCat(&cVar4, iVar1, 8);
			}
			uVar109[iVar1] = unk_0x94A922605867FB40(iVar6, &cVar4);
			StringCopy(&cVar4, "frsth", 8);
			if (iVar1 > 0)
			{
				StringIntConCat(&cVar4, iVar1, 8);
			}
			uVar112[iVar1] = unk_0x94A922605867FB40(iVar6, &cVar4);
			iVar1++;
		}
		iVar115 = unk_0x94A922605867FB40(iVar6, "ubrkdb");
		iVar3 = 0;
		while (iVar3 <= (Global_1626500.f_27 - 1))
		{
			if (iVar3 < 4)
			{
				StringCopy(&cVar4, "rule", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar69[iVar3] = unk_0x94A922605867FB40(iVar6, &cVar4);
				StringCopy(&cVar4, "pri", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar74[iVar3] = unk_0x94A922605867FB40(iVar6, &cVar4);
				StringCopy(&cVar4, "tsp", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar79[iVar3] = unk_0x94A922605867FB40(iVar6, &cVar4);
				StringCopy(&cVar4, "jtop", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar84[iVar3] = unk_0x94A922605867FB40(iVar6, &cVar4);
				StringCopy(&cVar4, "jtof", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar89[iVar3] = unk_0x94A922605867FB40(iVar6, &cVar4);
				StringCopy(&cVar4, "vcbf", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar94[iVar3] = unk_0x94A922605867FB40(iVar6, &cVar4);
				StringCopy(&cVar4, "vcbt", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar99[iVar3] = unk_0x94A922605867FB40(iVar6, &cVar4);
				StringCopy(&cVar4, "vcrr", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar104[iVar3] = unk_0x94A922605867FB40(iVar6, &cVar4);
			}
			iVar3++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1626500.f_53608 - 1))
	{
		if (iVar0 < 32)
		{
			Global_1626500.f_53612[iVar0 /*128*/] = { unk_0x219E9678C4D55F3E(iVar8, iVar0) };
			Global_1626500.f_53612[iVar0 /*128*/].f_3 = unk_0xE00906876D6244A2(iVar9, iVar0);
			iVar2 = unk_0x7A66412A2B47CF10(iVar16, iVar0);
			Global_1626500.f_53612[iVar0 /*128*/].f_12 = iVar2;
			if (!func_118())
			{
				if (!unk_0x81972CB541487AFD(Global_1626500.f_53612[iVar0 /*128*/].f_12))
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_12 = joaat("baller");
				}
			}
			if (Global_1626500.f_53612[iVar0 /*128*/].f_12 == joaat("sanctus") && !Global_262145.f_14874)
			{
				Global_1626500.f_53612[iVar0 /*128*/].f_12 = joaat("akuma");
			}
			Global_1626500.f_53612[iVar0 /*128*/].f_23 = unk_0x7A66412A2B47CF10(iVar17, iVar0);
			Global_1626500.f_53612[iVar0 /*128*/].f_30 = unk_0x7A66412A2B47CF10(iVar18, iVar0);
			if (func_121())
			{
				if (((unk_0x5F76836A544DA961(iVar10, iVar0) == 3 && unk_0x5F76836A544DA961(iVar11, iVar0) == 3) && unk_0x5F76836A544DA961(iVar12, iVar0) == 2) && unk_0x5F76836A544DA961(iVar13, iVar0) == 2)
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_4 = unk_0xE00906876D6244A2(iVar10, iVar0);
					Global_1626500.f_53612[iVar0 /*128*/].f_5 = unk_0xE00906876D6244A2(iVar11, iVar0);
					Global_1626500.f_53612[iVar0 /*128*/].f_6 = unk_0x7A66412A2B47CF10(iVar12, iVar0);
					Global_1626500.f_53612[iVar0 /*128*/].f_7 = unk_0x7A66412A2B47CF10(iVar13, iVar0);
				}
				else
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_4 = 100f;
					Global_1626500.f_53612[iVar0 /*128*/].f_5 = 0f;
					Global_1626500.f_53612[iVar0 /*128*/].f_6 = 0;
					Global_1626500.f_53612[iVar0 /*128*/].f_7 = -1;
				}
				if (unk_0x5F76836A544DA961(iVar14, iVar0) == 5 && unk_0x5F76836A544DA961(iVar15, iVar0) == 3)
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_8 = { unk_0x219E9678C4D55F3E(iVar14, iVar0) };
					Global_1626500.f_53612[iVar0 /*128*/].f_11 = unk_0xE00906876D6244A2(iVar15, iVar0);
				}
				else
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_8 = { 0f, 0f, 0f };
					Global_1626500.f_53612[iVar0 /*128*/].f_11 = 0f;
				}
				Global_1626500.f_53612[iVar0 /*128*/].f_37 = unk_0x7A66412A2B47CF10(iVar19, iVar0);
				Global_1626500.f_53612[iVar0 /*128*/].f_38 = unk_0x7A66412A2B47CF10(iVar20, iVar0);
				Global_1626500.f_53612[iVar0 /*128*/].f_39 = unk_0x7A66412A2B47CF10(iVar21, iVar0);
				if (unk_0x5F76836A544DA961(iVar22, iVar0) == 2)
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_72 = unk_0x7A66412A2B47CF10(iVar22, iVar0);
					Global_1626500.f_53612[iVar0 /*128*/].f_69 = unk_0x7A66412A2B47CF10(iVar23, iVar0);
					Global_1626500.f_53612[iVar0 /*128*/].f_75 = unk_0x7A66412A2B47CF10(iVar24, iVar0);
					Global_1626500.f_53612[iVar0 /*128*/].f_73 = unk_0x7A66412A2B47CF10(iVar25, iVar0);
					Global_1626500.f_53612[iVar0 /*128*/].f_70 = unk_0x7A66412A2B47CF10(iVar26, iVar0);
					Global_1626500.f_53612[iVar0 /*128*/].f_76 = unk_0x7A66412A2B47CF10(iVar27, iVar0);
					Global_1626500.f_53612[iVar0 /*128*/].f_74 = unk_0x7A66412A2B47CF10(iVar28, iVar0);
					Global_1626500.f_53612[iVar0 /*128*/].f_71 = unk_0x7A66412A2B47CF10(iVar29, iVar0);
					Global_1626500.f_53612[iVar0 /*128*/].f_77 = unk_0x7A66412A2B47CF10(iVar30, iVar0);
				}
				else
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_72 = -1;
					Global_1626500.f_53612[iVar0 /*128*/].f_69 = 0;
					Global_1626500.f_53612[iVar0 /*128*/].f_75 = 0;
					Global_1626500.f_53612[iVar0 /*128*/].f_73 = -1;
					Global_1626500.f_53612[iVar0 /*128*/].f_70 = 0;
					Global_1626500.f_53612[iVar0 /*128*/].f_76 = 0;
					Global_1626500.f_53612[iVar0 /*128*/].f_74 = -1;
					Global_1626500.f_53612[iVar0 /*128*/].f_71 = 0;
					Global_1626500.f_53612[iVar0 /*128*/].f_77 = 0;
				}
				Global_1626500.f_53612[iVar0 /*128*/].f_27 = unk_0x7A66412A2B47CF10(iVar32, iVar0);
				if (unk_0x5F76836A544DA961(iVar33, iVar0) == 2)
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_28 = unk_0x7A66412A2B47CF10(iVar33, iVar0);
				}
				else
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_28 = -1;
				}
				if (unk_0x5F76836A544DA961(iVar34, iVar0) == 3)
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_29 = unk_0xE00906876D6244A2(iVar34, iVar0);
				}
				else
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_29 = 0f;
				}
				Global_1626500.f_53612[iVar0 /*128*/].f_31 = unk_0x7A66412A2B47CF10(iVar38, iVar0);
				if (unk_0x5F76836A544DA961(iVar39, iVar0) == 3 && unk_0xE00906876D6244A2(iVar39, iVar0) > 0f)
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_32 = unk_0xE00906876D6244A2(iVar39, iVar0);
				}
				else
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_32 = 1001f;
				}
				if (unk_0x5F76836A544DA961(iVar31, iVar0) == 3 && unk_0xE00906876D6244A2(iVar31, iVar0) >= 0f)
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_35 = unk_0xE00906876D6244A2(iVar31, iVar0);
				}
				else
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_35 = 1.5f;
				}
				if (unk_0x5F76836A544DA961(iVar40, iVar0) == 3 && unk_0xE00906876D6244A2(iVar40, iVar0) > 0f)
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_33 = unk_0xE00906876D6244A2(iVar40, iVar0);
				}
				else
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_33 = 1001f;
				}
				if (unk_0x5F76836A544DA961(iVar41, iVar0) == 3 && unk_0xE00906876D6244A2(iVar41, iVar0) > 0f)
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_34 = unk_0xE00906876D6244A2(iVar41, iVar0);
				}
				else
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_34 = 1001f;
				}
				Global_1626500.f_53612[iVar0 /*128*/].f_42 = unk_0x7A66412A2B47CF10(iVar42, iVar0);
				Global_1626500.f_53612[iVar0 /*128*/].f_43 = unk_0x7A66412A2B47CF10(iVar43, iVar0);
				if (unk_0x5F76836A544DA961(iVar44, iVar0) == 2)
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_44 = unk_0x7A66412A2B47CF10(iVar44, iVar0);
				}
				else
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_44 = 0;
				}
				if (unk_0x5F76836A544DA961(iVar45, iVar0) == 2)
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_45 = unk_0x7A66412A2B47CF10(iVar45, iVar0);
				}
				else
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_45 = 0;
				}
				if (unk_0x5F76836A544DA961(iVar35, iVar0) == 2)
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_26 = unk_0x7A66412A2B47CF10(iVar35, iVar0);
				}
				else
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_26 = -1;
				}
				if (unk_0x5F76836A544DA961(iVar36, iVar0) == 2)
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_24 = unk_0x7A66412A2B47CF10(iVar36, iVar0);
				}
				else
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_24 = -1;
				}
				if (unk_0x5F76836A544DA961(iVar37, iVar0) == 2)
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_25 = unk_0x7A66412A2B47CF10(iVar37, iVar0);
				}
				else
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_25 = -1;
				}
				Global_1626500.f_53612[iVar0 /*128*/].f_106 = unk_0x7A66412A2B47CF10(iVar46, iVar0);
				if (unk_0x5F76836A544DA961(iVar48, iVar0) == 2)
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_59 = unk_0x7A66412A2B47CF10(iVar48, iVar0);
				}
				else
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_59 = -1;
				}
				if (unk_0x5F76836A544DA961(iVar47, iVar0) == 2)
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_60 = unk_0x7A66412A2B47CF10(iVar47, iVar0);
				}
				else
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_60 = -1;
				}
				if (unk_0x5F76836A544DA961(iVar50, iVar0) == 2)
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_61 = unk_0x7A66412A2B47CF10(iVar50, iVar0);
				}
				else
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_61 = -1;
				}
				if (unk_0x5F76836A544DA961(iVar49, iVar0) == 2)
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_62 = unk_0x7A66412A2B47CF10(iVar49, iVar0);
				}
				else
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_62 = -1;
				}
				if (unk_0x5F76836A544DA961(iVar53, iVar0) == 2)
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_68 = unk_0x7A66412A2B47CF10(iVar53, iVar0);
				}
				else
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_68 = 0;
				}
				if (unk_0x5F76836A544DA961(iVar54, iVar0) == 2)
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_40 = unk_0x7A66412A2B47CF10(iVar54, iVar0);
				}
				else
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_40 = 0;
				}
				if (unk_0x5F76836A544DA961(iVar55, iVar0) == 2)
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_41 = unk_0x7A66412A2B47CF10(iVar55, iVar0);
				}
				else
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_41 = 0;
				}
				if (unk_0x5F76836A544DA961(iVar56, iVar0) == 2)
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_78 = unk_0x7A66412A2B47CF10(iVar56, iVar0);
				}
				else
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_78 = -1;
				}
				if (unk_0x5F76836A544DA961(iVar64, iVar0) == 2)
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_96 = unk_0x7A66412A2B47CF10(iVar64, iVar0);
				}
				else
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_96 = -1;
				}
				if (unk_0x5F76836A544DA961(iVar65, iVar0) == 2)
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_97 = unk_0x7A66412A2B47CF10(iVar65, iVar0);
				}
				else
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_97 = -1;
				}
				if (unk_0x5F76836A544DA961(iVar57, iVar0) == 2)
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_79 = unk_0x7A66412A2B47CF10(iVar57, iVar0);
				}
				else
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_79 = -1;
				}
				if (unk_0x5F76836A544DA961(iVar58, iVar0) == 2)
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_80 = unk_0x7A66412A2B47CF10(iVar58, iVar0);
				}
				else
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_80 = 1;
				}
				if (unk_0x5F76836A544DA961(iVar59, iVar0) == 2)
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_93 = unk_0x7A66412A2B47CF10(iVar59, iVar0);
				}
				else
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_93 = -1;
				}
				if (unk_0x5F76836A544DA961(iVar60, iVar0) == 2)
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_94 = unk_0x7A66412A2B47CF10(iVar60, iVar0);
				}
				else
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_94 = -1;
				}
				if (unk_0x5F76836A544DA961(iVar61, iVar0) == 2)
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_95 = unk_0x7A66412A2B47CF10(iVar61, iVar0);
				}
				else
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_95 = -1;
				}
				if (unk_0x5F76836A544DA961(iVar51, iVar0) == 2)
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_47 = unk_0x7A66412A2B47CF10(iVar51, iVar0);
				}
				else
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_47 = 0;
				}
				if (unk_0x5F76836A544DA961(iVar52, iVar0) == 2)
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_48 = unk_0x7A66412A2B47CF10(iVar52, iVar0);
				}
				else
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_48 = 0;
				}
				if (unk_0x5F76836A544DA961(iVar66, iVar0) == 2)
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_36 = unk_0x7A66412A2B47CF10(iVar66, iVar0);
				}
				else
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_36 = 0;
				}
				if (Global_1626500.f_2 != 6 && unk_0x5F76836A544DA961(iVar62, iVar0) == 2)
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_104 = unk_0x7A66412A2B47CF10(iVar62, iVar0);
				}
				else
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_104 = -1;
				}
				if (Global_1626500.f_2 != 6 && unk_0x5F76836A544DA961(iVar63, iVar0) == 2)
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_105 = unk_0x7A66412A2B47CF10(iVar63, iVar0);
				}
				else
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_105 = -1;
				}
				if (unk_0x5F76836A544DA961(iVar67, iVar0) == 2)
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_91 = unk_0x7A66412A2B47CF10(iVar67, iVar0);
				}
				else
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_91 = -1;
				}
				if (unk_0x5F76836A544DA961(iVar68, iVar0) == 2)
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_92 = unk_0x7A66412A2B47CF10(iVar68, iVar0);
				}
				else
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_92 = -1;
				}
				iVar1 = 0;
				while (iVar1 <= 1)
				{
					if (unk_0x5F76836A544DA961(uVar109[iVar1], iVar0) == 5)
					{
						Global_1626500.f_53612[iVar0 /*128*/].f_108[iVar1 /*3*/] = { unk_0x219E9678C4D55F3E(uVar109[iVar1], iVar0) };
					}
					else
					{
						Global_1626500.f_53612[iVar0 /*128*/].f_108[iVar1 /*3*/] = { 0f, 0f, 0f };
					}
					if (unk_0x5F76836A544DA961(uVar112[iVar1], iVar0) == 3)
					{
						Global_1626500.f_53612[iVar0 /*128*/].f_115[iVar1] = unk_0xE00906876D6244A2(uVar112[iVar1], iVar0);
					}
					else
					{
						Global_1626500.f_53612[iVar0 /*128*/].f_115[iVar1] = 0f;
					}
					iVar1++;
				}
				if (unk_0x5F76836A544DA961(iVar115, iVar0) == 2)
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_107 = unk_0x7A66412A2B47CF10(iVar115, iVar0);
				}
				else
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_107 = 0;
				}
				if (unk_0x5F76836A544DA961(iVar116, iVar0) == 2)
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_118 = unk_0x7A66412A2B47CF10(iVar116, iVar0);
				}
				else
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_118 = -1;
				}
				if (unk_0x5F76836A544DA961(iVar117, iVar0) == 2)
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_123 = unk_0x7A66412A2B47CF10(iVar117, iVar0);
				}
				else
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_123 = -1;
				}
				if (unk_0x5F76836A544DA961(iVar118, iVar0) == 2)
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_119 = unk_0x7A66412A2B47CF10(iVar118, iVar0);
				}
				else
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_119 = -1;
				}
				if (unk_0x5F76836A544DA961(iVar119, iVar0) == 5)
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_120 = { unk_0x219E9678C4D55F3E(iVar119, iVar0) };
				}
				else
				{
					Global_1626500.f_53612[iVar0 /*128*/].f_120 = { 0f, 0f, 0f };
				}
				iVar3 = 0;
				while (iVar3 <= (Global_1626500.f_27 - 1))
				{
					if (iVar3 < 4)
					{
						Global_1626500.f_53612[iVar0 /*128*/].f_13[iVar3] = unk_0x7A66412A2B47CF10(uVar69[iVar3], iVar0);
						Global_1626500.f_53612[iVar0 /*128*/].f_18[iVar3] = unk_0x7A66412A2B47CF10(uVar74[iVar3], iVar0);
						if (Global_1626500.f_53612[iVar0 /*128*/].f_18[iVar3] == -1)
						{
							Global_1626500.f_53612[iVar0 /*128*/].f_18[iVar3] = 99999;
						}
						if (unk_0x5F76836A544DA961(uVar79[iVar3], iVar0) == 2)
						{
							Global_1626500.f_53612[iVar0 /*128*/].f_98[iVar3] = unk_0x7A66412A2B47CF10(uVar79[iVar3], iVar0);
						}
						else
						{
							Global_1626500.f_53612[iVar0 /*128*/].f_98[iVar3] = 0;
						}
						if (unk_0x5F76836A544DA961(uVar84[iVar3], iVar0) == 2)
						{
							Global_1626500.f_53612[iVar0 /*128*/].f_81[iVar3] = unk_0x7A66412A2B47CF10(uVar84[iVar3], iVar0);
						}
						else
						{
							Global_1626500.f_53612[iVar0 /*128*/].f_81[iVar3] = 0;
						}
						if (unk_0x5F76836A544DA961(uVar89[iVar3], iVar0) == 2)
						{
							Global_1626500.f_53612[iVar0 /*128*/].f_86[iVar3] = unk_0x7A66412A2B47CF10(uVar89[iVar3], iVar0);
						}
						else
						{
							Global_1626500.f_53612[iVar0 /*128*/].f_86[iVar3] = 0;
						}
						if (unk_0x5F76836A544DA961(uVar94[iVar3], iVar0) == 2)
						{
							Global_1626500.f_53612[iVar0 /*128*/].f_49[iVar3] = unk_0x7A66412A2B47CF10(uVar94[iVar3], iVar0);
						}
						else
						{
							Global_1626500.f_53612[iVar0 /*128*/].f_49[iVar3] = -1;
						}
						if (unk_0x5F76836A544DA961(uVar99[iVar3], iVar0) == 2)
						{
							Global_1626500.f_53612[iVar0 /*128*/].f_54[iVar3] = unk_0x7A66412A2B47CF10(uVar99[iVar3], iVar0);
						}
						else
						{
							Global_1626500.f_53612[iVar0 /*128*/].f_54[iVar3] = -1;
						}
						if (unk_0x5F76836A544DA961(uVar104[iVar3], iVar0) == 2)
						{
							Global_1626500.f_53612[iVar0 /*128*/].f_63[iVar3] = unk_0x7A66412A2B47CF10(uVar104[iVar3], iVar0);
						}
						else
						{
							Global_1626500.f_53612[iVar0 /*128*/].f_63[iVar3] = 0;
						}
					}
					iVar3++;
				}
			}
		}
		iVar0++;
	}
}

void func_178(int iParam0)
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
	
	iVar5 = unk_0x458C2A004F0678D0(iParam0, "weap");
	Global_1626500.f_51162 = unk_0x9C70ABDC70E0A0CF(iVar5, "no");
	if (Global_1626500 == 0)
	{
		if (Global_1626500.f_51162 > 60)
		{
			Global_1626500.f_51162 = 60;
		}
	}
	else if (Global_1626500.f_51162 > 60)
	{
		Global_1626500.f_51162 = 60;
	}
	Global_1626500.f_51164 = unk_0x9C70ABDC70E0A0CF(iVar5, "time");
	Global_1626500.f_51165 = unk_0x9C70ABDC70E0A0CF(iVar5, "pal");
	Global_1626500.f_50 = unk_0x9C70ABDC70E0A0CF(iVar5, "blip");
	iVar6 = unk_0x94A922605867FB40(iVar5, "loc");
	iVar7 = unk_0x94A922605867FB40(iVar5, "head");
	iVar8 = unk_0x94A922605867FB40(iVar5, "type");
	iVar9 = unk_0x94A922605867FB40(iVar5, "sub");
	iVar10 = unk_0x94A922605867FB40(iVar5, "bits");
	iVar11 = unk_0x94A922605867FB40(iVar5, "clip");
	iVar12 = unk_0x94A922605867FB40(iVar5, "brest1");
	iVar13 = unk_0x94A922605867FB40(iVar5, "brest2");
	iVar14 = unk_0x94A922605867FB40(iVar5, "brest3");
	iVar15 = unk_0x94A922605867FB40(iVar5, "brest4");
	iVar16 = unk_0x94A922605867FB40(iVar5, "dmgmult");
	iVar17 = unk_0x94A922605867FB40(iVar5, "rput");
	iVar18 = unk_0x94A922605867FB40(iVar5, "vput");
	iVar19 = unk_0x94A922605867FB40(iVar5, "vasst");
	iVar20 = unk_0x94A922605867FB40(iVar5, "vasso");
	iVar21 = unk_0x94A922605867FB40(iVar5, "vasss");
	iVar22 = unk_0x94A922605867FB40(iVar5, "vasst2");
	iVar23 = unk_0x94A922605867FB40(iVar5, "vasso2");
	iVar24 = unk_0x94A922605867FB40(iVar5, "vasss2");
	iVar25 = unk_0x94A922605867FB40(iVar5, "vasst3");
	iVar26 = unk_0x94A922605867FB40(iVar5, "vasso3");
	iVar27 = unk_0x94A922605867FB40(iVar5, "vasss3");
	iVar28 = unk_0x94A922605867FB40(iVar5, "vasst4");
	iVar29 = unk_0x94A922605867FB40(iVar5, "vasso4");
	iVar30 = unk_0x94A922605867FB40(iVar5, "vasss4");
	iVar31 = unk_0x94A922605867FB40(iVar5, "vclnr");
	iVar32 = unk_0x94A922605867FB40(iVar5, "vclnt");
	iVar33 = unk_0x94A922605867FB40(iVar5, "vclnrl");
	iVar34 = unk_0x94A922605867FB40(iVar5, "ipdi");
	Global_1626500.f_53607 = unk_0x891D0AEE12B2452B(iVar5, "randtyp");
	iVar0 = 0;
	while (iVar0 <= (Global_1626500.f_51162 - 1))
	{
		if (iVar0 < 60)
		{
			Global_1626500.f_51166[iVar0 /*40*/] = { unk_0x219E9678C4D55F3E(iVar6, iVar0) };
			Global_1626500.f_51166[iVar0 /*40*/].f_3 = unk_0xE00906876D6244A2(iVar7, iVar0);
			iVar1 = unk_0x7A66412A2B47CF10(iVar8, iVar0);
			Global_1626500.f_51166[iVar0 /*40*/].f_13 = iVar1;
			if (!func_179(Global_1626500.f_51166[iVar0 /*40*/].f_13))
			{
				if (Global_1626500.f_51166[iVar0 /*40*/].f_13 == joaat("pickup_weapon_marksmanrifle"))
				{
					Global_1626500.f_51166[iVar0 /*40*/].f_13 = joaat("pickup_weapon_sniperrifle");
				}
				else
				{
					Global_1626500.f_51166[iVar0 /*40*/].f_13 = joaat("pickup_weapon_pistol");
				}
			}
			Global_1626500.f_51166[iVar0 /*40*/].f_4 = unk_0x7A66412A2B47CF10(iVar9, iVar0);
			Global_1626500.f_51166[iVar0 /*40*/].f_6 = unk_0x7A66412A2B47CF10(iVar10, iVar0);
			Global_1626500.f_51166[iVar0 /*40*/].f_5 = unk_0x7A66412A2B47CF10(iVar11, iVar0);
			Global_1626500.f_51166[iVar0 /*40*/].f_21 = unk_0x7A66412A2B47CF10(iVar17, iVar0);
			Global_1626500.f_51166[iVar0 /*40*/].f_22 = unk_0x7A66412A2B47CF10(iVar18, iVar0);
			Global_1626500.f_51166[iVar0 /*40*/].f_39 = unk_0x7A66412A2B47CF10(iVar34, iVar0);
			if (unk_0x5F76836A544DA961(iVar12, iVar0) == 1)
			{
				Global_1626500.f_51166[iVar0 /*40*/].f_8[0] = unk_0xEEF837380BC73B2C(iVar12, iVar0);
			}
			else
			{
				Global_1626500.f_51166[iVar0 /*40*/].f_8[0] = 0;
			}
			if (unk_0x5F76836A544DA961(iVar13, iVar0) == 1)
			{
				Global_1626500.f_51166[iVar0 /*40*/].f_8[1] = unk_0xEEF837380BC73B2C(iVar13, iVar0);
			}
			else
			{
				Global_1626500.f_51166[iVar0 /*40*/].f_8[1] = 0;
			}
			if (unk_0x5F76836A544DA961(iVar14, iVar0) == 1)
			{
				Global_1626500.f_51166[iVar0 /*40*/].f_8[2] = unk_0xEEF837380BC73B2C(iVar14, iVar0);
			}
			else
			{
				Global_1626500.f_51166[iVar0 /*40*/].f_8[2] = 0;
			}
			if (unk_0x5F76836A544DA961(iVar15, iVar0) == 1)
			{
				Global_1626500.f_51166[iVar0 /*40*/].f_8[3] = unk_0xEEF837380BC73B2C(iVar15, iVar0);
			}
			else
			{
				Global_1626500.f_51166[iVar0 /*40*/].f_8[3] = 0;
			}
			if (unk_0x5F76836A544DA961(iVar16, iVar0) == 3)
			{
				Global_1626500.f_51166[iVar0 /*40*/].f_7 = unk_0xE00906876D6244A2(iVar16, iVar0);
			}
			else
			{
				Global_1626500.f_51166[iVar0 /*40*/].f_7 = 1f;
			}
			if (unk_0x5F76836A544DA961(iVar17, iVar0) == 2)
			{
				Global_1626500.f_51166[iVar0 /*40*/].f_21 = unk_0x7A66412A2B47CF10(iVar17, iVar0);
			}
			else
			{
				Global_1626500.f_51166[iVar0 /*40*/].f_21 = -1;
			}
			if (unk_0x5F76836A544DA961(iVar34, iVar0) == 2)
			{
				Global_1626500.f_51166[iVar0 /*40*/].f_39 = unk_0x7A66412A2B47CF10(iVar34, iVar0);
			}
			else
			{
				Global_1626500.f_51166[iVar0 /*40*/].f_39 = 0;
			}
			if (unk_0x5F76836A544DA961(iVar18, iVar0) == 2)
			{
				Global_1626500.f_51166[iVar0 /*40*/].f_22 = unk_0x7A66412A2B47CF10(iVar18, iVar0);
			}
			else
			{
				Global_1626500.f_51166[iVar0 /*40*/].f_22 = -1;
			}
			if (func_121())
			{
				if (unk_0x5F76836A544DA961(iVar33, iVar0) == 2)
				{
					Global_1626500.f_51166[iVar0 /*40*/].f_27 = unk_0x7A66412A2B47CF10(iVar33, iVar0);
				}
				else
				{
					Global_1626500.f_51166[iVar0 /*40*/].f_27 = -1;
				}
				if (unk_0x5F76836A544DA961(iVar32, iVar0) == 2)
				{
					Global_1626500.f_51166[iVar0 /*40*/].f_28 = unk_0x7A66412A2B47CF10(iVar32, iVar0);
				}
				else
				{
					Global_1626500.f_51166[iVar0 /*40*/].f_28 = -1;
				}
				if (unk_0x5F76836A544DA961(iVar31, iVar0) == 2)
				{
					Global_1626500.f_51166[iVar0 /*40*/].f_29 = unk_0x7A66412A2B47CF10(iVar31, iVar0);
				}
				else
				{
					Global_1626500.f_51166[iVar0 /*40*/].f_29 = 0;
				}
				Global_1626500.f_51166[iVar0 /*40*/].f_24 = unk_0x7A66412A2B47CF10(iVar19, iVar0);
				Global_1626500.f_51166[iVar0 /*40*/].f_25 = unk_0x7A66412A2B47CF10(iVar20, iVar0);
				Global_1626500.f_51166[iVar0 /*40*/].f_26 = unk_0x7A66412A2B47CF10(iVar21, iVar0);
				if (Global_1626500.f_51166[iVar0 /*40*/].f_26 == -1)
				{
					Global_1626500.f_51166[iVar0 /*40*/].f_26 = 0;
				}
				if (unk_0x5F76836A544DA961(iVar23, iVar0) == 2)
				{
					Global_1626500.f_51166[iVar0 /*40*/].f_33 = unk_0x7A66412A2B47CF10(iVar22, iVar0);
					Global_1626500.f_51166[iVar0 /*40*/].f_30 = unk_0x7A66412A2B47CF10(iVar23, iVar0);
					Global_1626500.f_51166[iVar0 /*40*/].f_36 = unk_0x7A66412A2B47CF10(iVar24, iVar0);
					Global_1626500.f_51166[iVar0 /*40*/].f_34 = unk_0x7A66412A2B47CF10(iVar25, iVar0);
					Global_1626500.f_51166[iVar0 /*40*/].f_31 = unk_0x7A66412A2B47CF10(iVar26, iVar0);
					Global_1626500.f_51166[iVar0 /*40*/].f_37 = unk_0x7A66412A2B47CF10(iVar27, iVar0);
					Global_1626500.f_51166[iVar0 /*40*/].f_35 = unk_0x7A66412A2B47CF10(iVar28, iVar0);
					Global_1626500.f_51166[iVar0 /*40*/].f_32 = unk_0x7A66412A2B47CF10(iVar29, iVar0);
					Global_1626500.f_51166[iVar0 /*40*/].f_38 = unk_0x7A66412A2B47CF10(iVar30, iVar0);
				}
				else
				{
					Global_1626500.f_51166[iVar0 /*40*/].f_33 = -1;
					Global_1626500.f_51166[iVar0 /*40*/].f_30 = 0;
					Global_1626500.f_51166[iVar0 /*40*/].f_36 = 0;
					Global_1626500.f_51166[iVar0 /*40*/].f_34 = -1;
					Global_1626500.f_51166[iVar0 /*40*/].f_31 = 0;
					Global_1626500.f_51166[iVar0 /*40*/].f_37 = 0;
					Global_1626500.f_51166[iVar0 /*40*/].f_35 = -1;
					Global_1626500.f_51166[iVar0 /*40*/].f_32 = 0;
					Global_1626500.f_51166[iVar0 /*40*/].f_38 = 0;
				}
			}
			StringCopy(&cVar3, "comps", 8);
			StringIntConCat(&cVar3, iVar0, 8);
			iVar35 = unk_0x94A922605867FB40(iVar5, &cVar3);
			iVar2 = 0;
			while (iVar2 <= 5)
			{
				if (unk_0x5F76836A544DA961(iVar35, iVar2) == 2)
				{
					Global_1626500.f_51166[iVar0 /*40*/].f_14[iVar2] = unk_0x7A66412A2B47CF10(iVar35, iVar2);
				}
				else
				{
					Global_1626500.f_51166[iVar0 /*40*/].f_14[iVar2] = 0;
				}
				iVar2++;
			}
		}
		iVar0++;
	}
}

int func_179(int iParam0)
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

void func_180(int iParam0)
{
	int iVar0;
	int iVar1;
	char[] cVar2[8];
	int iVar4;
	var uVar5[10];
	var uVar16[10];
	var uVar27[10];
	var uVar38[10];
	
	if (unk_0x458C2A004F0678D0(iParam0, "ptemp") == 0)
	{
		return;
	}
	iVar4 = unk_0x458C2A004F0678D0(iParam0, "ptemp");
	Global_1626500.f_102339 = unk_0x9C70ABDC70E0A0CF(iVar4, "no");
	iVar0 = 0;
	while (iVar0 <= (Global_1626500.f_102339 - 1))
	{
		StringCopy(&cVar2, "pto", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar5[iVar0] = unk_0x94A922605867FB40(iVar4, &cVar2);
		StringCopy(&cVar2, "ptr", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar16[iVar0] = unk_0x94A922605867FB40(iVar4, &cVar2);
		StringCopy(&cVar2, "ptm", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar27[iVar0] = unk_0x94A922605867FB40(iVar4, &cVar2);
		StringCopy(&cVar2, "ptc", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar38[iVar0] = unk_0x94A922605867FB40(iVar4, &cVar2);
		iVar1 = 0;
		while (iVar1 <= 29)
		{
			if (unk_0x5F76836A544DA961(uVar5[iVar0], iVar1) == 5)
			{
				Global_1626500.f_99898[iVar0 /*244*/][iVar1 /*3*/] = { unk_0x219E9678C4D55F3E(uVar5[iVar0], iVar1) };
			}
			else
			{
				Global_1626500.f_99898[iVar0 /*244*/][iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x5F76836A544DA961(uVar16[iVar0], iVar1) == 5)
			{
				Global_1626500.f_99898[iVar0 /*244*/].f_91[iVar1 /*3*/] = { unk_0x219E9678C4D55F3E(uVar16[iVar0], iVar1) };
			}
			else
			{
				Global_1626500.f_99898[iVar0 /*244*/].f_91[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x5F76836A544DA961(uVar27[iVar0], iVar1) == 2)
			{
				Global_1626500.f_99898[iVar0 /*244*/].f_182[iVar1] = unk_0x7A66412A2B47CF10(uVar27[iVar0], iVar1);
			}
			else
			{
				Global_1626500.f_99898[iVar0 /*244*/].f_182[iVar1] = 0;
			}
			if (unk_0x5F76836A544DA961(uVar38[iVar0], iVar1) == 2)
			{
				Global_1626500.f_99898[iVar0 /*244*/].f_213[iVar1] = unk_0x7A66412A2B47CF10(uVar38[iVar0], iVar1);
			}
			else
			{
				Global_1626500.f_99898[iVar0 /*244*/].f_213[iVar1] = 0;
			}
			iVar1++;
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
	var uVar63[4];
	var uVar68[4];
	var uVar73[4];
	var uVar78[4];
	
	iVar5 = unk_0x458C2A004F0678D0(iParam0, "obj");
	Global_1626500.f_39362 = unk_0x9C70ABDC70E0A0CF(iVar5, "no");
	Global_1626500.f_39363 = unk_0x9C70ABDC70E0A0CF(iVar5, "pal");
	Global_1626500.f_39364 = unk_0x9C70ABDC70E0A0CF(iVar5, "rtm");
	iVar6 = unk_0x94A922605867FB40(iVar5, "loc");
	iVar7 = unk_0x94A922605867FB40(iVar5, "head");
	iVar15 = unk_0x94A922605867FB40(iVar5, "model");
	iVar16 = unk_0x94A922605867FB40(iVar5, "ped");
	iVar17 = unk_0x94A922605867FB40(iVar5, "rsp");
	iVar18 = unk_0x94A922605867FB40(iVar5, "rot");
	iVar19 = unk_0x94A922605867FB40(iVar5, "cont");
	iVar20 = unk_0x94A922605867FB40(iVar5, "valu");
	iVar21 = unk_0x94A922605867FB40(iVar5, "ammoforwep");
	iVar22 = unk_0x94A922605867FB40(iVar5, "cpup");
	iVar23 = unk_0x94A922605867FB40(iVar5, "cpupr");
	iVar24 = unk_0x94A922605867FB40(iVar5, "cpupt");
	iVar25 = unk_0x94A922605867FB40(iVar5, "bits");
	iVar27 = unk_0x94A922605867FB40(iVar5, "oiet");
	if (func_121())
	{
		iVar8 = unk_0x94A922605867FB40(iVar5, "obrr");
		iVar9 = unk_0x94A922605867FB40(iVar5, "obrmr");
		iVar10 = unk_0x94A922605867FB40(iVar5, "osnt");
		iVar11 = unk_0x94A922605867FB40(iVar5, "osnei");
		iVar14 = unk_0x94A922605867FB40(iVar5, "objbr");
		iVar12 = unk_0x94A922605867FB40(iVar5, "o2sp");
		iVar13 = unk_0x94A922605867FB40(iVar5, "o2sh");
		iVar26 = unk_0x94A922605867FB40(iVar5, "mgbs");
		iVar28 = unk_0x94A922605867FB40(iVar5, "objct");
		iVar29 = unk_0x94A922605867FB40(iVar5, "team");
		iVar30 = unk_0x94A922605867FB40(iVar5, "spwn");
		iVar31 = unk_0x94A922605867FB40(iVar5, "objct2");
		iVar32 = unk_0x94A922605867FB40(iVar5, "team2");
		iVar33 = unk_0x94A922605867FB40(iVar5, "spwn2");
		iVar34 = unk_0x94A922605867FB40(iVar5, "objct3");
		iVar35 = unk_0x94A922605867FB40(iVar5, "team3");
		iVar36 = unk_0x94A922605867FB40(iVar5, "spwn3");
		iVar37 = unk_0x94A922605867FB40(iVar5, "objct4");
		iVar38 = unk_0x94A922605867FB40(iVar5, "team4");
		iVar39 = unk_0x94A922605867FB40(iVar5, "spwn4");
		iVar40 = unk_0x94A922605867FB40(iVar5, "hlt");
		iVar41 = unk_0x94A922605867FB40(iVar5, "obb");
		iVar42 = unk_0x94A922605867FB40(iVar5, "obbc");
		iVar43 = unk_0x94A922605867FB40(iVar5, "objclt");
		iVar44 = unk_0x94A922605867FB40(iVar5, "objcr");
		iVar45 = unk_0x94A922605867FB40(iVar5, "obcra");
		iVar46 = unk_0x94A922605867FB40(iVar5, "ospdl");
		iVar47 = unk_0x94A922605867FB40(iVar5, "osgr");
		iVar48 = unk_0x94A922605867FB40(iVar5, "ossgr");
		iVar49 = unk_0x94A922605867FB40(iVar5, "objcnm");
		iVar50 = unk_0x94A922605867FB40(iVar5, "objap");
		iVar51 = unk_0x94A922605867FB40(iVar5, "objapt");
		iVar52 = unk_0x94A922605867FB40(iVar5, "obint");
		iVar53 = unk_0x94A922605867FB40(iVar5, "obrom");
		iVar54 = unk_0x94A922605867FB40(iVar5, "inco");
		iVar55 = unk_0x94A922605867FB40(iVar5, "inhsh");
		iVar56 = unk_0x94A922605867FB40(iVar5, "vehpu");
		iVar57 = unk_0x94A922605867FB40(iVar5, "airpu");
		iVar60 = unk_0x94A922605867FB40(iVar5, "gotor");
		iVar61 = unk_0x94A922605867FB40(iVar5, "nmpass");
		iVar62 = unk_0x94A922605867FB40(iVar5, "nmfail");
		iVar58 = unk_0x94A922605867FB40(iVar5, "omcp");
		iVar59 = unk_0x94A922605867FB40(iVar5, "omcf");
		iVar2 = 0;
		while (iVar2 <= (Global_1626500.f_27 - 1))
		{
			if (iVar2 < 4)
			{
				StringCopy(&cVar3, "rule", 8);
				StringIntConCat(&cVar3, iVar2, 8);
				uVar63[iVar2] = unk_0x94A922605867FB40(iVar5, &cVar3);
				StringCopy(&cVar3, "pri", 8);
				StringIntConCat(&cVar3, iVar2, 8);
				uVar68[iVar2] = unk_0x94A922605867FB40(iVar5, &cVar3);
				StringCopy(&cVar3, "jtop", 8);
				StringIntConCat(&cVar3, iVar2, 8);
				uVar73[iVar2] = unk_0x94A922605867FB40(iVar5, &cVar3);
				StringCopy(&cVar3, "jtof", 8);
				StringIntConCat(&cVar3, iVar2, 8);
				uVar78[iVar2] = unk_0x94A922605867FB40(iVar5, &cVar3);
			}
			iVar2++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1626500.f_39362 - 1))
	{
		if (iVar0 < 20)
		{
			Global_1626500.f_39365[iVar0 /*90*/] = { unk_0x219E9678C4D55F3E(iVar6, iVar0) };
			Global_1626500.f_39365[iVar0 /*90*/].f_3 = unk_0xE00906876D6244A2(iVar7, iVar0);
			iVar1 = unk_0x7A66412A2B47CF10(iVar15, iVar0);
			Global_1626500.f_39365[iVar0 /*90*/].f_16 = iVar1;
			if (Global_1626500.f_39365[iVar0 /*90*/].f_16 == joaat("hei_prop_bank_cctv_02"))
			{
				Global_1626500.f_39365[iVar0 /*90*/].f_16 = joaat("hei_prop_bank_cctv_01");
			}
			if (!unk_0x81972CB541487AFD(Global_1626500.f_39365[iVar0 /*90*/].f_16))
			{
				Global_1626500.f_39365[iVar0 /*90*/].f_16 = joaat("prop_drug_package");
			}
			if (Global_1626500.f_39365[iVar0 /*90*/].f_16 == joaat("prop_cctv_cam_06a"))
			{
				Global_1626500.f_39365[iVar0 /*90*/].f_16 = joaat("hei_prop_bank_cctv_01");
			}
			if (Global_1626500.f_39365[iVar0 /*90*/].f_16 == joaat("prop_cctv_cam_07a"))
			{
				Global_1626500.f_39365[iVar0 /*90*/].f_16 = joaat("hei_prop_bank_cctv_02");
			}
			Global_1626500.f_39365[iVar0 /*90*/].f_27 = unk_0x7A66412A2B47CF10(iVar17, iVar0);
			Global_1626500.f_39365[iVar0 /*90*/].f_4 = { unk_0x219E9678C4D55F3E(iVar18, iVar0) };
			Global_1626500.f_39365[iVar0 /*90*/].f_31 = unk_0x7A66412A2B47CF10(iVar16, iVar0);
			Global_1626500.f_39365[iVar0 /*90*/].f_45 = unk_0x7A66412A2B47CF10(iVar19, iVar0);
			Global_1626500.f_39365[iVar0 /*90*/].f_46 = unk_0x7A66412A2B47CF10(iVar20, iVar0);
			Global_1626500.f_39365[iVar0 /*90*/].f_47 = unk_0x7A66412A2B47CF10(iVar21, iVar0);
			Global_1626500.f_39365[iVar0 /*90*/].f_48 = unk_0x7A66412A2B47CF10(iVar22, iVar0);
			Global_1626500.f_39365[iVar0 /*90*/].f_49 = unk_0x7A66412A2B47CF10(iVar24, iVar0);
			Global_1626500.f_39365[iVar0 /*90*/].f_50 = unk_0x7A66412A2B47CF10(iVar23, iVar0);
			Global_1626500.f_39365[iVar0 /*90*/].f_43 = unk_0x7A66412A2B47CF10(iVar25, iVar0);
			Global_1626500.f_39365[iVar0 /*90*/].f_89 = unk_0x7A66412A2B47CF10(iVar27, iVar0);
			if (unk_0x5F76836A544DA961(iVar57, iVar0) == 2)
			{
				if (unk_0x7A66412A2B47CF10(iVar57, iVar0) == 1)
				{
					if (!unk_0x08BA6DD398CA197C(Global_1626500.f_39365[iVar0 /*90*/].f_43, 4))
					{
						unk_0x88B0F0DC270164B7(&(Global_1626500.f_39365[iVar0 /*90*/].f_43), 4);
					}
				}
			}
			if (func_121())
			{
				if (((unk_0x5F76836A544DA961(iVar8, iVar0) == 3 && unk_0x5F76836A544DA961(iVar9, iVar0) == 3) && unk_0x5F76836A544DA961(iVar10, iVar0) == 2) && unk_0x5F76836A544DA961(iVar11, iVar0) == 2)
				{
					Global_1626500.f_39365[iVar0 /*90*/].f_7 = unk_0xE00906876D6244A2(iVar8, iVar0);
					Global_1626500.f_39365[iVar0 /*90*/].f_8 = unk_0xE00906876D6244A2(iVar9, iVar0);
					Global_1626500.f_39365[iVar0 /*90*/].f_9 = unk_0x7A66412A2B47CF10(iVar10, iVar0);
					Global_1626500.f_39365[iVar0 /*90*/].f_10 = unk_0x7A66412A2B47CF10(iVar11, iVar0);
				}
				else
				{
					Global_1626500.f_39365[iVar0 /*90*/].f_7 = 50f;
					Global_1626500.f_39365[iVar0 /*90*/].f_8 = 0f;
					Global_1626500.f_39365[iVar0 /*90*/].f_9 = 0;
					Global_1626500.f_39365[iVar0 /*90*/].f_10 = -1;
				}
				if (unk_0x5F76836A544DA961(iVar14, iVar0) == 2)
				{
					Global_1626500.f_39365[iVar0 /*90*/].f_15 = unk_0x7A66412A2B47CF10(iVar14, iVar0);
				}
				else
				{
					Global_1626500.f_39365[iVar0 /*90*/].f_15 = 0;
				}
				if (unk_0x5F76836A544DA961(iVar12, iVar0) == 5 && unk_0x5F76836A544DA961(iVar13, iVar0) == 3)
				{
					Global_1626500.f_39365[iVar0 /*90*/].f_11 = { unk_0x219E9678C4D55F3E(iVar12, iVar0) };
					Global_1626500.f_39365[iVar0 /*90*/].f_14 = unk_0xE00906876D6244A2(iVar13, iVar0);
				}
				else
				{
					Global_1626500.f_39365[iVar0 /*90*/].f_11 = { 0f, 0f, 0f };
					Global_1626500.f_39365[iVar0 /*90*/].f_14 = 0f;
				}
				Global_1626500.f_39365[iVar0 /*90*/].f_44 = unk_0x7A66412A2B47CF10(iVar26, iVar0);
				Global_1626500.f_39365[iVar0 /*90*/].f_32 = unk_0x7A66412A2B47CF10(iVar28, iVar0);
				Global_1626500.f_39365[iVar0 /*90*/].f_33 = unk_0x7A66412A2B47CF10(iVar29, iVar0);
				Global_1626500.f_39365[iVar0 /*90*/].f_34 = unk_0x7A66412A2B47CF10(iVar30, iVar0);
				if (unk_0x5F76836A544DA961(iVar31, iVar0) == 2)
				{
					Global_1626500.f_39365[iVar0 /*90*/].f_59 = unk_0x7A66412A2B47CF10(iVar31, iVar0);
					Global_1626500.f_39365[iVar0 /*90*/].f_56 = unk_0x7A66412A2B47CF10(iVar32, iVar0);
					Global_1626500.f_39365[iVar0 /*90*/].f_62 = unk_0x7A66412A2B47CF10(iVar33, iVar0);
					Global_1626500.f_39365[iVar0 /*90*/].f_60 = unk_0x7A66412A2B47CF10(iVar34, iVar0);
					Global_1626500.f_39365[iVar0 /*90*/].f_57 = unk_0x7A66412A2B47CF10(iVar35, iVar0);
					Global_1626500.f_39365[iVar0 /*90*/].f_63 = unk_0x7A66412A2B47CF10(iVar36, iVar0);
					Global_1626500.f_39365[iVar0 /*90*/].f_61 = unk_0x7A66412A2B47CF10(iVar37, iVar0);
					Global_1626500.f_39365[iVar0 /*90*/].f_58 = unk_0x7A66412A2B47CF10(iVar38, iVar0);
					Global_1626500.f_39365[iVar0 /*90*/].f_64 = unk_0x7A66412A2B47CF10(iVar39, iVar0);
				}
				Global_1626500.f_39365[iVar0 /*90*/].f_28 = unk_0x7A66412A2B47CF10(iVar40, iVar0);
				Global_1626500.f_39365[iVar0 /*90*/].f_29 = unk_0x7A66412A2B47CF10(iVar41, iVar0);
				Global_1626500.f_39365[iVar0 /*90*/].f_37 = unk_0x7A66412A2B47CF10(iVar56, iVar0);
				if (unk_0x5F76836A544DA961(iVar42, iVar0) == 2)
				{
					Global_1626500.f_39365[iVar0 /*90*/].f_30 = unk_0x7A66412A2B47CF10(iVar42, iVar0);
				}
				else
				{
					Global_1626500.f_39365[iVar0 /*90*/].f_30 = 0;
				}
				if (unk_0x5F76836A544DA961(iVar44, iVar0) == 2)
				{
					Global_1626500.f_39365[iVar0 /*90*/].f_51 = unk_0x7A66412A2B47CF10(iVar44, iVar0);
				}
				else
				{
					Global_1626500.f_39365[iVar0 /*90*/].f_51 = -1;
				}
				if (unk_0x5F76836A544DA961(iVar43, iVar0) == 2)
				{
					Global_1626500.f_39365[iVar0 /*90*/].f_52 = unk_0x7A66412A2B47CF10(iVar43, iVar0);
				}
				else
				{
					Global_1626500.f_39365[iVar0 /*90*/].f_52 = -1;
				}
				if (unk_0x5F76836A544DA961(iVar45, iVar0) == 2)
				{
					Global_1626500.f_39365[iVar0 /*90*/].f_53 = unk_0x7A66412A2B47CF10(iVar45, iVar0);
				}
				else
				{
					Global_1626500.f_39365[iVar0 /*90*/].f_53 = -1;
				}
				if (unk_0x5F76836A544DA961(iVar46, iVar0) == 2)
				{
					Global_1626500.f_39365[iVar0 /*90*/].f_55 = unk_0x7A66412A2B47CF10(iVar46, iVar0);
				}
				else
				{
					Global_1626500.f_39365[iVar0 /*90*/].f_55 = -1;
				}
				if (unk_0x5F76836A544DA961(iVar47, iVar0) == 2)
				{
					Global_1626500.f_39365[iVar0 /*90*/].f_35 = unk_0x7A66412A2B47CF10(iVar47, iVar0);
				}
				else
				{
					Global_1626500.f_39365[iVar0 /*90*/].f_35 = 0;
				}
				if (unk_0x5F76836A544DA961(iVar48, iVar0) == 2)
				{
					Global_1626500.f_39365[iVar0 /*90*/].f_36 = unk_0x7A66412A2B47CF10(iVar48, iVar0);
				}
				else
				{
					Global_1626500.f_39365[iVar0 /*90*/].f_36 = 0;
				}
				if (unk_0x5F76836A544DA961(iVar49, iVar0) == 2)
				{
					Global_1626500.f_39365[iVar0 /*90*/].f_80 = unk_0x7A66412A2B47CF10(iVar49, iVar0);
				}
				else
				{
					Global_1626500.f_39365[iVar0 /*90*/].f_80 = -1;
				}
				if (unk_0x5F76836A544DA961(iVar58, iVar0) == 2)
				{
					Global_1626500.f_39365[iVar0 /*90*/].f_77 = unk_0x7A66412A2B47CF10(iVar58, iVar0);
				}
				else
				{
					Global_1626500.f_39365[iVar0 /*90*/].f_77 = -1;
				}
				if (unk_0x5F76836A544DA961(iVar59, iVar0) == 2)
				{
					Global_1626500.f_39365[iVar0 /*90*/].f_78 = unk_0x7A66412A2B47CF10(iVar59, iVar0);
				}
				else
				{
					Global_1626500.f_39365[iVar0 /*90*/].f_78 = -1;
				}
				if (unk_0x5F76836A544DA961(iVar50, iVar0) == 2)
				{
					Global_1626500.f_39365[iVar0 /*90*/].f_81 = unk_0x7A66412A2B47CF10(iVar50, iVar0);
				}
				else
				{
					Global_1626500.f_39365[iVar0 /*90*/].f_81 = -1;
				}
				if (unk_0x5F76836A544DA961(iVar51, iVar0) == 2)
				{
					Global_1626500.f_39365[iVar0 /*90*/].f_82 = unk_0x7A66412A2B47CF10(iVar51, iVar0);
				}
				else
				{
					Global_1626500.f_39365[iVar0 /*90*/].f_82 = -1;
				}
				if (unk_0x5F76836A544DA961(iVar52, iVar0) == 2)
				{
					Global_1626500.f_39365[iVar0 /*90*/].f_83 = unk_0x7A66412A2B47CF10(iVar52, iVar0);
				}
				else
				{
					Global_1626500.f_39365[iVar0 /*90*/].f_83 = -1;
				}
				if (unk_0x5F76836A544DA961(iVar53, iVar0) == 2)
				{
					Global_1626500.f_39365[iVar0 /*90*/].f_84 = unk_0x7A66412A2B47CF10(iVar53, iVar0);
				}
				else
				{
					Global_1626500.f_39365[iVar0 /*90*/].f_84 = -1;
				}
				if (unk_0x5F76836A544DA961(iVar54, iVar0) == 5 && unk_0x5F76836A544DA961(iVar55, iVar0) == 2)
				{
					Global_1626500.f_39365[iVar0 /*90*/].f_85 = { unk_0x219E9678C4D55F3E(iVar54, iVar0) };
					Global_1626500.f_39365[iVar0 /*90*/].f_88 = unk_0x7A66412A2B47CF10(iVar55, iVar0);
				}
				else
				{
					Global_1626500.f_39365[iVar0 /*90*/].f_85 = { 0f, 0f, 0f };
					Global_1626500.f_39365[iVar0 /*90*/].f_88 = 0;
				}
				if (unk_0x5F76836A544DA961(iVar60, iVar0) == 2)
				{
					Global_1626500.f_39365[iVar0 /*90*/].f_54 = unk_0x7A66412A2B47CF10(iVar60, iVar0);
				}
				else
				{
					Global_1626500.f_39365[iVar0 /*90*/].f_54 = 0;
				}
				if (unk_0x5F76836A544DA961(iVar61, iVar0) == 2)
				{
					Global_1626500.f_39365[iVar0 /*90*/].f_75 = unk_0x7A66412A2B47CF10(iVar61, iVar0);
				}
				else
				{
					Global_1626500.f_39365[iVar0 /*90*/].f_75 = -1;
				}
				if (unk_0x5F76836A544DA961(iVar62, iVar0) == 2)
				{
					Global_1626500.f_39365[iVar0 /*90*/].f_76 = unk_0x7A66412A2B47CF10(iVar62, iVar0);
				}
				else
				{
					Global_1626500.f_39365[iVar0 /*90*/].f_76 = -1;
				}
				iVar2 = 0;
				while (iVar2 <= (Global_1626500.f_27 - 1))
				{
					if (iVar2 < 4)
					{
						Global_1626500.f_39365[iVar0 /*90*/].f_17[iVar2] = unk_0x7A66412A2B47CF10(uVar63[iVar2], iVar0);
						Global_1626500.f_39365[iVar0 /*90*/].f_22[iVar2] = unk_0x7A66412A2B47CF10(uVar68[iVar2], iVar0);
						if (Global_1626500.f_39365[iVar0 /*90*/].f_22[iVar2] == -1)
						{
							Global_1626500.f_39365[iVar0 /*90*/].f_22[iVar2] = 99999;
						}
						if (unk_0x5F76836A544DA961(uVar73[iVar2], iVar0) == 2)
						{
							Global_1626500.f_39365[iVar0 /*90*/].f_65[iVar2] = unk_0x7A66412A2B47CF10(uVar73[iVar2], iVar0);
						}
						else
						{
							Global_1626500.f_39365[iVar0 /*90*/].f_65[iVar2] = 0;
						}
						if (unk_0x5F76836A544DA961(uVar78[iVar2], iVar0) == 2)
						{
							Global_1626500.f_39365[iVar0 /*90*/].f_70[iVar2] = unk_0x7A66412A2B47CF10(uVar78[iVar2], iVar0);
						}
						else
						{
							Global_1626500.f_39365[iVar0 /*90*/].f_70[iVar2] = 0;
						}
					}
					iVar2++;
				}
			}
		}
		iVar0++;
	}
}

void func_182(int iParam0)
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
	
	iVar6 = unk_0x458C2A004F0678D0(iParam0, "zone");
	Global_1626500.f_84175 = unk_0x9C70ABDC70E0A0CF(iVar6, "no");
	iVar7 = unk_0x94A922605867FB40(iVar6, "vto");
	iVar8 = unk_0x94A922605867FB40(iVar6, "vld");
	iVar9 = unk_0x94A922605867FB40(iVar6, "zntp");
	iVar20 = unk_0x94A922605867FB40(iVar6, "znbs");
	iVar21 = unk_0x94A922605867FB40(iVar6, "znwd");
	iVar22 = unk_0x94A922605867FB40(iVar6, "znwvd");
	iVar23 = unk_0x94A922605867FB40(iVar6, "znatp");
	iVar24 = unk_0x94A922605867FB40(iVar6, "znwid");
	iVar25 = unk_0x94A922605867FB40(iVar6, "zndel");
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		StringCopy(&cVar2, "znpr", 16);
		StringIntConCat(&cVar2, iVar0, 16);
		uVar10[iVar0] = unk_0x94A922605867FB40(iVar6, &cVar2);
		StringCopy(&cVar2, "znepr", 16);
		StringIntConCat(&cVar2, iVar0, 16);
		uVar15[iVar0] = unk_0x94A922605867FB40(iVar6, &cVar2);
		iVar0++;
	}
	if (Global_1626500.f_84175 > 10)
	{
		Global_1626500.f_84175 = 10;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1626500.f_84175 - 1))
	{
		Global_1626500.f_84198[iVar0 /*26*/][0 /*3*/] = { unk_0x219E9678C4D55F3E(iVar7, iVar0) };
		Global_1626500.f_84198[iVar0 /*26*/][1 /*3*/] = { unk_0x219E9678C4D55F3E(iVar8, iVar0) };
		Global_1626500.f_84198[iVar0 /*26*/].f_9 = unk_0x7A66412A2B47CF10(iVar9, iVar0);
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			if (unk_0x5F76836A544DA961(uVar10[iVar1], iVar0) == 2)
			{
				Global_1626500.f_84198[iVar0 /*26*/].f_10[iVar1] = unk_0x7A66412A2B47CF10(uVar10[iVar1], iVar0);
			}
			else
			{
				Global_1626500.f_84198[iVar0 /*26*/].f_10[iVar1] = -1;
			}
			if (unk_0x5F76836A544DA961(uVar15[iVar1], iVar0) == 2)
			{
				Global_1626500.f_84198[iVar0 /*26*/].f_15[iVar1] = unk_0x7A66412A2B47CF10(uVar15[iVar1], iVar0);
			}
			else
			{
				Global_1626500.f_84198[iVar0 /*26*/].f_15[iVar1] = 99999;
			}
			iVar1++;
		}
		if (unk_0x5F76836A544DA961(iVar20, iVar0) == 2)
		{
			Global_1626500.f_84198[iVar0 /*26*/].f_20 = unk_0x7A66412A2B47CF10(iVar20, iVar0);
		}
		else
		{
			Global_1626500.f_84198[iVar0 /*26*/].f_20 = 0;
		}
		if (unk_0x5F76836A544DA961(iVar21, iVar0) == 3)
		{
			Global_1626500.f_84198[iVar0 /*26*/].f_22 = unk_0xE00906876D6244A2(iVar21, iVar0);
		}
		else
		{
			Global_1626500.f_84198[iVar0 /*26*/].f_22 = 0f;
		}
		if (unk_0x5F76836A544DA961(iVar22, iVar0) == 3)
		{
			Global_1626500.f_84198[iVar0 /*26*/].f_23 = unk_0xE00906876D6244A2(iVar22, iVar0);
		}
		else
		{
			Global_1626500.f_84198[iVar0 /*26*/].f_23 = 0f;
		}
		if (unk_0x5F76836A544DA961(iVar23, iVar0) == 2)
		{
			Global_1626500.f_84198[iVar0 /*26*/].f_8 = unk_0x7A66412A2B47CF10(iVar23, iVar0);
		}
		else
		{
			Global_1626500.f_84198[iVar0 /*26*/].f_8 = 0;
		}
		if (unk_0x5F76836A544DA961(iVar24, iVar0) == 3)
		{
			Global_1626500.f_84198[iVar0 /*26*/].f_7 = unk_0xE00906876D6244A2(iVar24, iVar0);
		}
		else
		{
			Global_1626500.f_84198[iVar0 /*26*/].f_7 = 0f;
		}
		if (unk_0x5F76836A544DA961(iVar25, iVar0) == 2)
		{
			Global_1626500.f_84198[iVar0 /*26*/].f_21 = unk_0x7A66412A2B47CF10(iVar25, iVar0);
		}
		else
		{
			Global_1626500.f_84198[iVar0 /*26*/].f_21 = 0;
		}
		iVar0++;
	}
}

void func_183(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar1 = unk_0x458C2A004F0678D0(iParam0, "usj");
	Global_1626500.f_83441 = unk_0x9C70ABDC70E0A0CF(iVar1, "no");
	iVar2 = unk_0x94A922605867FB40(iVar1, "vto");
	iVar3 = unk_0x94A922605867FB40(iVar1, "vld");
	iVar4 = unk_0x94A922605867FB40(iVar1, "vcm");
	if (Global_1626500.f_83441 > 10)
	{
		Global_1626500.f_83441 = 10;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1626500.f_83441 - 1))
	{
		Global_1626500.f_83442[iVar0 /*9*/] = { unk_0x219E9678C4D55F3E(iVar2, iVar0) };
		Global_1626500.f_83442[iVar0 /*9*/].f_3 = { unk_0x219E9678C4D55F3E(iVar3, iVar0) };
		Global_1626500.f_83442[iVar0 /*9*/].f_6 = { unk_0x219E9678C4D55F3E(iVar4, iVar0) };
		iVar0++;
	}
}

void func_184(int iParam0)
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
	var uVar30[4];
	int iVar35;
	
	if (unk_0x458C2A004F0678D0(iParam0, "ddtrig") == 0)
	{
		return;
	}
	iVar4 = unk_0x458C2A004F0678D0(iParam0, "ddtrig");
	Global_1626500.f_87850 = unk_0x9C70ABDC70E0A0CF(iVar4, "no");
	iVar5 = unk_0x94A922605867FB40(iVar4, "id");
	iVar6 = unk_0x94A922605867FB40(iVar4, "fid");
	iVar7 = unk_0x94A922605867FB40(iVar4, "rule");
	iVar8 = unk_0x94A922605867FB40(iVar4, "team");
	iVar9 = unk_0x94A922605867FB40(iVar4, "pos");
	iVar10 = unk_0x94A922605867FB40(iVar4, "rad");
	iVar11 = unk_0x94A922605867FB40(iVar4, "tdel");
	iVar12 = unk_0x94A922605867FB40(iVar4, "tpnt");
	iVar13 = unk_0x94A922605867FB40(iVar4, "crkls");
	iVar14 = unk_0x94A922605867FB40(iVar4, "spveh");
	iVar15 = unk_0x94A922605867FB40(iVar4, "skprs");
	iVar16 = unk_0x94A922605867FB40(iVar4, "fcsped");
	iVar17 = unk_0x94A922605867FB40(iVar4, "prty");
	iVar18 = unk_0x94A922605867FB40(iVar4, "dbs");
	iVar19 = unk_0x94A922605867FB40(iVar4, "dbs2");
	iVar20 = unk_0x94A922605867FB40(iVar4, "drole");
	iVar21 = unk_0x94A922605867FB40(iVar4, "dspk");
	iVar22 = unk_0x94A922605867FB40(iVar4, "dspk2");
	iVar23 = unk_0x94A922605867FB40(iVar4, "panim");
	iVar24 = unk_0x94A922605867FB40(iVar4, "blok");
	iVar25 = unk_0x94A922605867FB40(iVar4, "root");
	iVar26 = unk_0x94A922605867FB40(iVar4, "mgveh");
	iVar27 = unk_0x94A922605867FB40(iVar4, "vehtg");
	iVar28 = unk_0x94A922605867FB40(iVar4, "prerq");
	iVar29 = unk_0x94A922605867FB40(iVar4, "vehdm");
	iVar35 = unk_0x94A922605867FB40(iVar4, "dwsg");
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		StringCopy(&cVar2, "trl", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar30[iVar0] = unk_0x94A922605867FB40(iVar4, &cVar2);
		iVar0++;
	}
	if (Global_1626500.f_87850 > 69)
	{
		Global_1626500.f_87850 = 69;
	}
	if (unk_0x5F76836A544DA961(iVar8, 0) == 2)
	{
		iVar0 = 0;
		while (iVar0 <= (Global_1626500.f_87850 - 1))
		{
			if (unk_0x5F76836A544DA961(iVar8, iVar0) == 2)
			{
				func_185(&(Global_1626500.f_84520[iVar0 /*44*/]), iVar0);
				if (iVar6 != 0 && unk_0x5F76836A544DA961(iVar6, iVar0) == 2)
				{
					Global_1626500.f_84520[iVar0 /*44*/].f_1 = unk_0x7A66412A2B47CF10(iVar6, iVar0);
				}
				if (iVar5 != 0)
				{
					Global_1626500.f_84520[iVar0 /*44*/] = unk_0x7A66412A2B47CF10(iVar5, iVar0);
				}
				if (iVar7 != 0)
				{
					Global_1626500.f_84520[iVar0 /*44*/].f_2 = unk_0x7A66412A2B47CF10(iVar7, iVar0);
				}
				if (iVar8 != 0)
				{
					Global_1626500.f_84520[iVar0 /*44*/].f_3 = unk_0x7A66412A2B47CF10(iVar8, iVar0);
				}
				if (iVar9 != 0)
				{
					Global_1626500.f_84520[iVar0 /*44*/].f_6 = { unk_0x219E9678C4D55F3E(iVar9, iVar0) };
				}
				if (iVar10 != 0)
				{
					Global_1626500.f_84520[iVar0 /*44*/].f_9 = unk_0xE00906876D6244A2(iVar10, iVar0);
				}
				if (iVar11 != 0)
				{
					Global_1626500.f_84520[iVar0 /*44*/].f_5 = unk_0x7A66412A2B47CF10(iVar11, iVar0);
				}
				if (iVar12 != 0)
				{
					Global_1626500.f_84520[iVar0 /*44*/].f_12 = unk_0x7A66412A2B47CF10(iVar12, iVar0);
				}
				if (iVar17 != 0)
				{
					Global_1626500.f_84520[iVar0 /*44*/].f_13 = unk_0x7A66412A2B47CF10(iVar17, iVar0);
				}
				if (iVar18 != 0)
				{
					Global_1626500.f_84520[iVar0 /*44*/].f_10 = unk_0x7A66412A2B47CF10(iVar18, iVar0);
				}
				if (iVar19 != 0)
				{
					Global_1626500.f_84520[iVar0 /*44*/].f_11 = unk_0x7A66412A2B47CF10(iVar19, iVar0);
				}
				if (iVar20 != 0 && unk_0x5F76836A544DA961(iVar20, iVar0) == 2)
				{
					Global_1626500.f_84520[iVar0 /*44*/].f_4 = unk_0x7A66412A2B47CF10(iVar20, iVar0);
				}
				else
				{
					Global_1626500.f_84520[iVar0 /*44*/].f_4 = 0;
				}
				if (iVar26 != 0 && unk_0x5F76836A544DA961(iVar26, iVar0) == 2)
				{
					Global_1626500.f_84520[iVar0 /*44*/].f_17 = unk_0x7A66412A2B47CF10(iVar26, iVar0);
				}
				if (iVar13 != 0 && unk_0x5F76836A544DA961(iVar13, iVar0) == 2)
				{
					Global_1626500.f_84520[iVar0 /*44*/].f_21 = unk_0x7A66412A2B47CF10(iVar13, iVar0);
				}
				if (iVar14 != 0 && unk_0x5F76836A544DA961(iVar14, iVar0) == 2)
				{
					Global_1626500.f_84520[iVar0 /*44*/].f_28 = unk_0x7A66412A2B47CF10(iVar14, iVar0);
				}
				if (iVar15 != 0 && unk_0x5F76836A544DA961(iVar15, iVar0) == 2)
				{
					Global_1626500.f_84520[iVar0 /*44*/].f_29 = unk_0x7A66412A2B47CF10(iVar15, iVar0);
				}
				if (iVar16 != 0 && unk_0x5F76836A544DA961(iVar16, iVar0) == 2)
				{
					Global_1626500.f_84520[iVar0 /*44*/].f_22 = unk_0x7A66412A2B47CF10(iVar16, iVar0);
				}
				if (iVar21 != 0 && unk_0x5F76836A544DA961(iVar21, iVar0) == 2)
				{
					Global_1626500.f_84520[iVar0 /*44*/].f_14 = unk_0x7A66412A2B47CF10(iVar21, iVar0);
				}
				if (iVar22 != 0 && unk_0x5F76836A544DA961(iVar22, iVar0) == 2)
				{
					Global_1626500.f_84520[iVar0 /*44*/].f_15 = unk_0x7A66412A2B47CF10(iVar22, iVar0);
				}
				if (iVar23 != 0 && unk_0x5F76836A544DA961(iVar23, iVar0) == 2)
				{
					Global_1626500.f_84520[iVar0 /*44*/].f_16 = unk_0x7A66412A2B47CF10(iVar23, iVar0);
				}
				if (iVar27 != 0 && unk_0x5F76836A544DA961(iVar27, iVar0) == 2)
				{
					Global_1626500.f_84520[iVar0 /*44*/].f_18 = unk_0x7A66412A2B47CF10(iVar27, iVar0);
				}
				if (iVar28 != 0 && unk_0x5F76836A544DA961(iVar28, iVar0) == 2)
				{
					Global_1626500.f_84520[iVar0 /*44*/].f_19 = unk_0x7A66412A2B47CF10(iVar28, iVar0);
				}
				if (iVar29 != 0 && unk_0x5F76836A544DA961(iVar29, iVar0) == 2)
				{
					Global_1626500.f_84520[iVar0 /*44*/].f_20 = unk_0x7A66412A2B47CF10(iVar29, iVar0);
				}
				iVar1 = 0;
				while (iVar1 <= 3)
				{
					if (uVar30[iVar1] != 0 && unk_0x5F76836A544DA961(uVar30[iVar1], iVar0) == 2)
					{
						Global_1626500.f_84520[iVar0 /*44*/].f_23[iVar1] = unk_0x7A66412A2B47CF10(uVar30[iVar1], iVar0);
					}
					iVar1++;
				}
				if (iVar35 != 0 && unk_0x5F76836A544DA961(iVar35, iVar0) == 2)
				{
					Global_1626500.f_84520[iVar0 /*44*/].f_42 = unk_0x7A66412A2B47CF10(iVar35, iVar0);
				}
				else
				{
					Global_1626500.f_84520[iVar0 /*44*/].f_42 = 0;
				}
				if (iVar24 != 0)
				{
					StringCopy(&(Global_1626500.f_84520[iVar0 /*44*/].f_30), unk_0xFC74DD7217B3E5DB(iVar24, iVar0), 24);
				}
				if (iVar25 != 0)
				{
					StringCopy(&(Global_1626500.f_84520[iVar0 /*44*/].f_36), unk_0xFC74DD7217B3E5DB(iVar25, iVar0), 24);
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= (Global_1626500.f_87850 - 1))
		{
			Global_1626500.f_84520[iVar0 /*44*/] = 0;
			Global_1626500.f_84520[iVar0 /*44*/].f_2 = -1;
			Global_1626500.f_84520[iVar0 /*44*/].f_3 = -1;
			Global_1626500.f_84520[iVar0 /*44*/].f_6 = { 0f, 0f, 0f };
			Global_1626500.f_84520[iVar0 /*44*/].f_9 = 3f;
			Global_1626500.f_84520[iVar0 /*44*/].f_5 = 0;
			Global_1626500.f_84520[iVar0 /*44*/].f_12 = -1;
			Global_1626500.f_84520[iVar0 /*44*/].f_21 = 0;
			Global_1626500.f_84520[iVar0 /*44*/].f_28 = -1;
			Global_1626500.f_84520[iVar0 /*44*/].f_29 = 0;
			Global_1626500.f_84520[iVar0 /*44*/].f_13 = 0;
			Global_1626500.f_84520[iVar0 /*44*/].f_10 = 0;
			Global_1626500.f_84520[iVar0 /*44*/].f_11 = 0;
			Global_1626500.f_84520[iVar0 /*44*/].f_4 = 0;
			Global_1626500.f_84520[iVar0 /*44*/].f_14 = -1;
			Global_1626500.f_84520[iVar0 /*44*/].f_15 = -1;
			Global_1626500.f_84520[iVar0 /*44*/].f_16 = 0;
			StringCopy(&(Global_1626500.f_84520[iVar0 /*44*/].f_30), "", 24);
			StringCopy(&(Global_1626500.f_84520[iVar0 /*44*/].f_36), "", 24);
			Global_1626500.f_84520[iVar0 /*44*/].f_17 = -1;
			Global_1626500.f_84520[iVar0 /*44*/].f_18 = -1;
			Global_1626500.f_84520[iVar0 /*44*/].f_19 = -1;
			Global_1626500.f_84520[iVar0 /*44*/].f_20 = 0;
			Global_1626500.f_84520[iVar0 /*44*/].f_42 = 0;
			iVar0++;
		}
	}
	if (unk_0xD44C5C9A5AB591EF(iParam0, "dtmp") == 2)
	{
		Global_1626500.f_87846[0] = unk_0x9C70ABDC70E0A0CF(iParam0, "dtmp");
	}
	else
	{
		Global_1626500.f_87846[0] = 0;
	}
	if (unk_0xD44C5C9A5AB591EF(iParam0, "dtmp2") == 2)
	{
		Global_1626500.f_87846[1] = unk_0x9C70ABDC70E0A0CF(iParam0, "dtmp2");
	}
	else
	{
		Global_1626500.f_87846[1] = 0;
	}
	if (unk_0xD44C5C9A5AB591EF(iParam0, "dtmp3") == 2)
	{
		Global_1626500.f_87846[2] = unk_0x9C70ABDC70E0A0CF(iParam0, "dtmp3");
	}
	else
	{
		Global_1626500.f_87846[2] = 0;
	}
}

void func_185(var uParam0, int iParam1)
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
	uParam0->f_29 = 0;
	uParam0->f_22 = -1;
	StringCopy(&(uParam0->f_30), "", 24);
	StringCopy(&(uParam0->f_36), "", 24);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		uParam0->f_23[iVar0] = -1;
		iVar0++;
	}
	uParam0->f_42 = 0;
	if (iParam1 != -1)
	{
		unk_0x09C86C0C5CA26B1E(&(Global_1626500.f_87846[(iParam1 / 32)]), (iParam1 % 32));
	}
	if (unk_0x16833EFAA58E63DB(uParam0->f_43))
	{
		unk_0x0B57C567D698C373(&(uParam0->f_43));
	}
}

void func_186(int iParam0)
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
	
	iVar2 = unk_0x458C2A004F0678D0(iParam0, "race");
	Global_1626500.f_38714 = unk_0x9C70ABDC70E0A0CF(iVar2, "chp");
	iVar3 = (Global_1626500.f_38714 - 1);
	Global_1626500.f_38715 = unk_0x9C70ABDC70E0A0CF(iVar2, "lap");
	Global_1626500.f_38716 = unk_0x9C70ABDC70E0A0CF(iVar2, "type");
	if (func_104() == 2)
	{
		if (Global_1626500.f_38716 == 6)
		{
			Global_1626500.f_38716 = 0;
		}
		else if (Global_1626500.f_38716 == 7)
		{
			Global_1626500.f_38716 = 1;
		}
	}
	Global_1626500.f_38717 = unk_0x9C70ABDC70E0A0CF(iVar2, "gtar");
	Global_1626500.f_39303 = unk_0xCB33F3C96453C329(iVar2, "head");
	Global_1626500.f_39304 = unk_0xCB33F3C96453C329(iVar2, "lrgs");
	Global_1626500.f_39305 = unk_0xCB33F3C96453C329(iVar2, "udgs");
	Global_1626500.f_39306 = unk_0xCB33F3C96453C329(iVar2, "gw");
	Global_1626500.f_39307 = unk_0xCB33F3C96453C329(iVar2, "gl");
	Global_1626500.f_39308 = unk_0x9C70ABDC70E0A0CF(iVar2, "lanes");
	Global_1626500.f_32896 = { unk_0x3D4621E99B9FFBE0(iVar2, "grid") };
	Global_1626500.f_38719 = unk_0x9C70ABDC70E0A0CF(iVar2, "icv");
	Global_1626500.f_38721 = unk_0x9C70ABDC70E0A0CF(iVar2, "tri1");
	Global_1626500.f_38722 = unk_0x9C70ABDC70E0A0CF(iVar2, "tri2");
	Global_1626500.f_38723 = unk_0x9C70ABDC70E0A0CF(iVar2, "clbs");
	Global_1626500.f_39302 = unk_0x9C70ABDC70E0A0CF(iVar2, "ptp");
	Global_1626500.f_39300 = unk_0x9C70ABDC70E0A0CF(iVar2, "strtg");
	Global_1626500.f_39301 = unk_0x9C70ABDC70E0A0CF(iVar2, "rcdam");
	Global_1626500.f_36281 = unk_0xCB33F3C96453C329(iVar2, "rdis");
	Global_1626500.f_39297 = unk_0x9C70ABDC70E0A0CF(iVar2, "gridty");
	Global_1626500.f_102422 = unk_0x891D0AEE12B2452B(iVar2, "iprem");
	iVar4 = unk_0x94A922605867FB40(iVar2, "chh");
	iVar5 = unk_0x94A922605867FB40(iVar2, "chs");
	iVar6 = unk_0x94A922605867FB40(iVar2, "chl");
	uVar7 = unk_0x94A922605867FB40(iVar2, "rsp");
	iVar8 = unk_0x94A922605867FB40(iVar2, "sndchk");
	iVar9 = unk_0x94A922605867FB40(iVar2, "sndrsp");
	uVar10 = unk_0x94A922605867FB40(iVar2, "rndchk");
	uVar11 = unk_0x94A922605867FB40(iVar2, "cdsblcu");
	uVar12 = unk_0x94A922605867FB40(iVar2, "cpdss");
	iVar13 = unk_0x94A922605867FB40(iVar2, "cpgrav");
	iVar14 = unk_0x94A922605867FB40(iVar2, "cpgravdura");
	iVar15 = unk_0x94A922605867FB40(iVar2, "cpwwt");
	iVar16 = unk_0x94A922605867FB40(iVar2, "cppsst");
	uVar17 = unk_0x94A922605867FB40(iVar2, "cprst");
	uVar18 = unk_0x94A922605867FB40(iVar2, "rndchks");
	iVar19 = unk_0x94A922605867FB40(iVar2, "cpado");
	iVar20 = unk_0x94A922605867FB40(iVar2, "cpados");
	if (Global_1626500.f_38716 == 8)
	{
		Global_1626500.f_38714 = 0;
		iVar0 = 0;
		while (iVar0 <= 69)
		{
			if (!func_117(unk_0x219E9678C4D55F3E(iVar6, iVar0)))
			{
				Global_1626500.f_38714++;
			}
			iVar0++;
		}
		iVar3 = Global_1626500.f_38714;
	}
	iVar21 = 0;
	iVar0 = 0;
	while (iVar0 <= iVar3)
	{
		if (iVar0 < 70)
		{
			if (Global_1626500.f_38716 == 8)
			{
				iVar21 = func_187(iVar6, iVar21);
			}
			else
			{
				iVar21 = iVar0;
			}
			Global_1626500.f_33600[iVar0 /*3*/] = { unk_0x219E9678C4D55F3E(iVar6, iVar21) };
			Global_1626500.f_33811[iVar0] = unk_0xE00906876D6244A2(iVar4, iVar21);
			if (unk_0x5F76836A544DA961(iVar5, iVar21) == 3)
			{
				Global_1626500.f_36210[iVar0] = unk_0xE00906876D6244A2(iVar5, iVar21);
			}
			else
			{
				Global_1626500.f_36210[iVar0] = 1f;
			}
			if (Global_1626500.f_36210[iVar0] < 1f)
			{
				Global_1626500.f_36210[iVar0] = 1f;
			}
			Global_1626500.f_35007[iVar0] = unk_0xEEF837380BC73B2C(uVar7, iVar21);
			Global_1626500.f_33882[iVar0] = unk_0xEEF837380BC73B2C(uVar10, iVar21);
			Global_1626500.f_35078[iVar0] = unk_0xEEF837380BC73B2C(uVar11, iVar21);
			Global_1626500.f_35149[iVar0] = unk_0xEEF837380BC73B2C(uVar12, iVar21);
			Global_1626500.f_34654[iVar0 /*3*/] = { unk_0x219E9678C4D55F3E(iVar8, iVar21) };
			Global_1626500.f_34865[iVar0] = unk_0xE00906876D6244A2(iVar9, iVar21);
			Global_1626500.f_34936[iVar0] = unk_0xEEF837380BC73B2C(uVar18, iVar21);
			Global_1626500.f_35220[iVar0] = unk_0x7A66412A2B47CF10(iVar13, iVar21);
			Global_1626500.f_35362[iVar0] = unk_0x7A66412A2B47CF10(iVar14, iVar21);
			Global_1626500.f_35291[iVar0] = unk_0x7A66412A2B47CF10(iVar15, iVar21);
			Global_1626500.f_35433[iVar0] = unk_0x7A66412A2B47CF10(iVar16, iVar21);
			Global_1626500.f_36068[iVar0] = unk_0xEEF837380BC73B2C(uVar17, iVar21);
			Global_1626500.f_35504[iVar0 /*3*/] = { unk_0x219E9678C4D55F3E(iVar19, iVar21) };
			Global_1626500.f_35715[iVar0 /*3*/] = { unk_0x219E9678C4D55F3E(iVar20, iVar21) };
			iVar21++;
		}
		iVar0++;
	}
	iVar22 = unk_0x94A922605867FB40(iVar2, "vta");
	iVar0 = 0;
	while (iVar0 <= (Global_1626500.f_22 - 1))
	{
		if (iVar0 < 32)
		{
			iVar1 = unk_0x7A66412A2B47CF10(iVar22, iVar0);
			Global_1626500.f_39311[iVar0] = iVar1;
		}
		iVar0++;
	}
	iVar23 = unk_0x94A922605867FB40(iVar2, "aveh");
	iVar24 = unk_0x94A922605867FB40(iVar2, "adlc");
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		iVar1 = unk_0x7A66412A2B47CF10(iVar23, iVar0);
		Global_1626500.f_38724[iVar0] = iVar1;
		Global_1626500.f_38740[iVar0] = 0;
		Global_1626500.f_38740[iVar0] = unk_0x7A66412A2B47CF10(iVar24, iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		StringCopy(&cVar34, "vspn", 8);
		StringIntConCat(&cVar34, iVar0, 8);
		uVar25[iVar0] = unk_0x94A922605867FB40(iVar2, &cVar34);
		iVar33 = 0;
		while (iVar33 <= iVar3)
		{
			Global_1626500.f_32899[iVar33 /*10*/][iVar0 /*3*/] = { unk_0x219E9678C4D55F3E(uVar25[iVar0], iVar33) };
			iVar33++;
		}
		StringCopy(&cVar34, "vspns", 8);
		StringIntConCat(&cVar34, iVar0, 8);
		uVar29[iVar0] = unk_0x94A922605867FB40(iVar2, &cVar34);
		iVar33 = 0;
		while (iVar33 <= iVar3)
		{
			if (unk_0x5F76836A544DA961(uVar29[iVar0], iVar33) == 5)
			{
				Global_1626500.f_33953[iVar33 /*10*/][iVar0 /*3*/] = { unk_0x219E9678C4D55F3E(uVar29[iVar0], iVar33) };
			}
			else
			{
				Global_1626500.f_33953[iVar33 /*10*/][iVar0 /*3*/] = { 0f, 0f, 0f };
			}
			iVar33++;
		}
		iVar0++;
	}
}

int func_187(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	while (iVar0 <= 69)
	{
		if (!func_117(unk_0x219E9678C4D55F3E(iParam0, iVar0)))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_188(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0x458C2A004F0678D0(iParam0, "dhprop") == 0)
	{
		return;
	}
	iVar1 = unk_0x458C2A004F0678D0(iParam0, "dhprop");
	Global_1626500.f_97541 = unk_0x9C70ABDC70E0A0CF(iVar1, "no");
	iVar2 = unk_0x94A922605867FB40(iVar1, "pos");
	iVar3 = unk_0x94A922605867FB40(iVar1, "mn");
	if (Global_1626500.f_97541 > 25)
	{
		Global_1626500.f_97541 = 25;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1626500.f_97541 - 1))
	{
		if (unk_0x5F76836A544DA961(iVar2, iVar0) == 5)
		{
			Global_1626500.f_97440[iVar0 /*4*/] = { unk_0x219E9678C4D55F3E(iVar2, iVar0) };
			Global_1626500.f_97440[iVar0 /*4*/].f_3 = unk_0x7A66412A2B47CF10(iVar3, iVar0);
		}
		iVar0++;
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
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (unk_0x458C2A004F0678D0(iParam0, "ddblip") == 0)
	{
		return;
	}
	iVar1 = unk_0x458C2A004F0678D0(iParam0, "ddblip");
	Global_1626500.f_97439 = unk_0x9C70ABDC70E0A0CF(iVar1, "no");
	iVar2 = unk_0x94A922605867FB40(iVar1, "pos");
	iVar3 = unk_0x94A922605867FB40(iVar1, "rule");
	iVar4 = unk_0x94A922605867FB40(iVar1, "team");
	iVar5 = unk_0x94A922605867FB40(iVar1, "type");
	iVar6 = unk_0x94A922605867FB40(iVar1, "size");
	iVar7 = unk_0x94A922605867FB40(iVar1, "veh");
	iVar8 = unk_0x94A922605867FB40(iVar1, "clr");
	iVar9 = unk_0x94A922605867FB40(iVar1, "bits");
	if (Global_1626500.f_97439 > 10)
	{
		Global_1626500.f_97439 = 10;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1626500.f_97439 - 1))
	{
		if (unk_0x5F76836A544DA961(iVar2, iVar0) == 5)
		{
			Global_1626500.f_97338[iVar0 /*10*/] = { unk_0x219E9678C4D55F3E(iVar2, iVar0) };
			Global_1626500.f_97338[iVar0 /*10*/].f_3 = unk_0x7A66412A2B47CF10(iVar3, iVar0);
			Global_1626500.f_97338[iVar0 /*10*/].f_4 = unk_0x7A66412A2B47CF10(iVar4, iVar0);
			Global_1626500.f_97338[iVar0 /*10*/].f_8 = unk_0x7A66412A2B47CF10(iVar8, iVar0);
			Global_1626500.f_97338[iVar0 /*10*/].f_9 = unk_0x7A66412A2B47CF10(iVar9, iVar0);
		}
		if (unk_0x5F76836A544DA961(iVar5, iVar0) == 2)
		{
			Global_1626500.f_97338[iVar0 /*10*/].f_6 = unk_0x7A66412A2B47CF10(iVar5, iVar0);
		}
		else
		{
			Global_1626500.f_97338[iVar0 /*10*/].f_6 = 0;
		}
		if (unk_0x5F76836A544DA961(iVar6, iVar0) == 2)
		{
			Global_1626500.f_97338[iVar0 /*10*/].f_5 = unk_0x7A66412A2B47CF10(iVar6, iVar0);
		}
		else
		{
			Global_1626500.f_97338[iVar0 /*10*/].f_5 = 4;
		}
		if (unk_0x5F76836A544DA961(iVar7, iVar0) == 2)
		{
			Global_1626500.f_97338[iVar0 /*10*/].f_7 = unk_0x7A66412A2B47CF10(iVar7, iVar0);
		}
		else
		{
			Global_1626500.f_97338[iVar0 /*10*/].f_7 = -1;
		}
		iVar0++;
	}
}

void func_190(int iParam0)
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
	
	if (unk_0x458C2A004F0678D0(iParam0, "mocap") == 0)
	{
		return;
	}
	iVar5 = unk_0x458C2A004F0678D0(iParam0, "mocap");
	iVar6 = unk_0x94A922605867FB40(iVar5, "name");
	iVar7 = unk_0x94A922605867FB40(iVar5, "bits");
	iVar8 = unk_0x94A922605867FB40(iVar5, "bits2");
	iVar9 = unk_0x94A922605867FB40(iVar5, "timer");
	iVar10 = unk_0x94A922605867FB40(iVar5, "rng");
	iVar11 = unk_0x94A922605867FB40(iVar5, "ccp");
	iVar12 = unk_0x94A922605867FB40(iVar5, "ccr");
	iVar13 = unk_0x94A922605867FB40(iVar5, "ccs");
	iVar62 = unk_0x94A922605867FB40(iVar5, "pcvid");
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (unk_0x5F76836A544DA961(iVar6, iVar0) == 4)
		{
			StringCopy(&(Global_1626500.f_94358[iVar0 /*434*/]), unk_0xFC74DD7217B3E5DB(iVar6, iVar0), 64);
		}
		else
		{
			StringCopy(&(Global_1626500.f_94358[iVar0 /*434*/]), "", 64);
		}
		if (unk_0x5F76836A544DA961(iVar7, iVar0) == 2)
		{
			Global_1626500.f_94358[iVar0 /*434*/].f_16 = unk_0x7A66412A2B47CF10(iVar7, iVar0);
		}
		else
		{
			Global_1626500.f_94358[iVar0 /*434*/].f_16 = 0;
		}
		if (unk_0x5F76836A544DA961(iVar8, iVar0) == 2)
		{
			Global_1626500.f_94358[iVar0 /*434*/].f_17 = unk_0x7A66412A2B47CF10(iVar8, iVar0);
		}
		else
		{
			Global_1626500.f_94358[iVar0 /*434*/].f_17 = 0;
		}
		if (unk_0x5F76836A544DA961(iVar62, iVar0) == 2)
		{
			Global_1626500.f_94358[iVar0 /*434*/].f_424 = unk_0x7A66412A2B47CF10(iVar62, iVar0);
		}
		else
		{
			Global_1626500.f_94358[iVar0 /*434*/].f_424 = -1;
		}
		if (unk_0x5F76836A544DA961(iVar9, iVar0) == 2)
		{
			Global_1626500.f_94358[iVar0 /*434*/].f_61 = unk_0x7A66412A2B47CF10(iVar9, iVar0);
		}
		else
		{
			Global_1626500.f_94358[iVar0 /*434*/].f_61 = 0;
		}
		if (unk_0x5F76836A544DA961(iVar10, iVar0) == 2)
		{
			Global_1626500.f_94358[iVar0 /*434*/].f_62 = unk_0x7A66412A2B47CF10(iVar10, iVar0);
		}
		else
		{
			Global_1626500.f_94358[iVar0 /*434*/].f_62 = 0;
		}
		if (unk_0x5F76836A544DA961(iVar11, iVar0) == 5)
		{
			Global_1626500.f_94358[iVar0 /*434*/].f_54 = { unk_0x219E9678C4D55F3E(iVar11, iVar0) };
		}
		else
		{
			Global_1626500.f_94358[iVar0 /*434*/].f_54 = { 0f, 0f, 0f };
		}
		if (unk_0x5F76836A544DA961(iVar12, iVar0) == 3)
		{
			Global_1626500.f_94358[iVar0 /*434*/].f_60 = unk_0xE00906876D6244A2(iVar12, iVar0);
		}
		else
		{
			Global_1626500.f_94358[iVar0 /*434*/].f_60 = 0f;
		}
		if (unk_0x5F76836A544DA961(iVar13, iVar0) == 5)
		{
			Global_1626500.f_94358[iVar0 /*434*/].f_57 = { unk_0x219E9678C4D55F3E(iVar13, iVar0) };
		}
		else
		{
			Global_1626500.f_94358[iVar0 /*434*/].f_57 = { 0f, 0f, 0f };
		}
		StringCopy(&cVar3, "pstr", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar14[iVar0] = unk_0x94A922605867FB40(iVar5, &cVar3);
		StringCopy(&cVar3, "pend", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar20[iVar0] = unk_0x94A922605867FB40(iVar5, &cVar3);
		StringCopy(&cVar3, "strh", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar26[iVar0] = unk_0x94A922605867FB40(iVar5, &cVar3);
		StringCopy(&cVar3, "endh", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar32[iVar0] = unk_0x94A922605867FB40(iVar5, &cVar3);
		StringCopy(&cVar3, "mcei", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar38[iVar0] = unk_0x94A922605867FB40(iVar5, &cVar3);
		StringCopy(&cVar3, "mcet", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar44[iVar0] = unk_0x94A922605867FB40(iVar5, &cVar3);
		StringCopy(&cVar3, "mcebs", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar50[iVar0] = unk_0x94A922605867FB40(iVar5, &cVar3);
		StringCopy(&cVar3, "mceh", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar56[iVar0] = unk_0x94A922605867FB40(iVar5, &cVar3);
		StringCopy(&cVar3, "pvpls", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar63[iVar0] = unk_0x94A922605867FB40(iVar5, &cVar3);
		StringCopy(&cVar3, "pvpds", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar69[iVar0] = unk_0x94A922605867FB40(iVar5, &cVar3);
		StringCopy(&cVar3, "pvpdi", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar75[iVar0] = unk_0x94A922605867FB40(iVar5, &cVar3);
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			if (unk_0x5F76836A544DA961(uVar14[iVar0], iVar1) == 5)
			{
				Global_1626500.f_94358[iVar0 /*434*/].f_18[iVar1 /*3*/] = { unk_0x219E9678C4D55F3E(uVar14[iVar0], iVar1) };
			}
			else
			{
				Global_1626500.f_94358[iVar0 /*434*/].f_18[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x5F76836A544DA961(uVar20[iVar0], iVar1) == 5)
			{
				Global_1626500.f_94358[iVar0 /*434*/].f_31[iVar1 /*3*/] = { unk_0x219E9678C4D55F3E(uVar20[iVar0], iVar1) };
			}
			else
			{
				Global_1626500.f_94358[iVar0 /*434*/].f_31[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x5F76836A544DA961(uVar26[iVar0], iVar1) == 3)
			{
				Global_1626500.f_94358[iVar0 /*434*/].f_44[iVar1] = unk_0xE00906876D6244A2(uVar26[iVar0], iVar1);
			}
			else
			{
				Global_1626500.f_94358[iVar0 /*434*/].f_44[iVar1] = 0f;
			}
			if (unk_0x5F76836A544DA961(uVar32[iVar0], iVar1) == 3)
			{
				Global_1626500.f_94358[iVar0 /*434*/].f_49[iVar1] = unk_0xE00906876D6244A2(uVar32[iVar0], iVar1);
			}
			else
			{
				Global_1626500.f_94358[iVar0 /*434*/].f_49[iVar1] = 0f;
			}
			iVar1++;
		}
		iVar2 = 0;
		while (iVar2 <= 3)
		{
			if (unk_0x5F76836A544DA961(uVar63[iVar0], iVar2) == 2)
			{
				Global_1626500.f_94358[iVar0 /*434*/].f_425[iVar2] = unk_0x7A66412A2B47CF10(uVar63[iVar0], iVar2);
			}
			else
			{
				Global_1626500.f_94358[iVar0 /*434*/].f_425[iVar2] = 0;
			}
			iVar2++;
		}
		iVar2 = 0;
		while (iVar2 <= 0)
		{
			if (unk_0x5F76836A544DA961(uVar69[iVar0], iVar2) == 2)
			{
				Global_1626500.f_94358[iVar0 /*434*/].f_430[iVar2] = unk_0x7A66412A2B47CF10(uVar69[iVar0], iVar2);
			}
			else
			{
				Global_1626500.f_94358[iVar0 /*434*/].f_430[iVar2] = 0;
			}
			if (unk_0x5F76836A544DA961(uVar75[iVar0], iVar2) == 2)
			{
				Global_1626500.f_94358[iVar0 /*434*/].f_432[iVar2] = unk_0x7A66412A2B47CF10(uVar75[iVar0], iVar2);
			}
			else
			{
				Global_1626500.f_94358[iVar0 /*434*/].f_432[iVar2] = 0;
			}
			iVar2++;
		}
		iVar1 = 0;
		while (iVar1 <= 29)
		{
			if (unk_0x5F76836A544DA961(uVar38[iVar0], iVar1) == 2)
			{
				Global_1626500.f_94358[iVar0 /*434*/].f_63[iVar1 /*12*/].f_1 = unk_0x7A66412A2B47CF10(uVar38[iVar0], iVar1);
			}
			else
			{
				Global_1626500.f_94358[iVar0 /*434*/].f_63[iVar1 /*12*/].f_1 = -1;
			}
			if (unk_0x5F76836A544DA961(uVar44[iVar0], iVar1) == 2)
			{
				Global_1626500.f_94358[iVar0 /*434*/].f_63[iVar1 /*12*/] = unk_0x7A66412A2B47CF10(uVar44[iVar0], iVar1);
			}
			else
			{
				Global_1626500.f_94358[iVar0 /*434*/].f_63[iVar1 /*12*/] = -1;
			}
			if (unk_0x5F76836A544DA961(uVar50[iVar0], iVar1) == 2)
			{
				Global_1626500.f_94358[iVar0 /*434*/].f_63[iVar1 /*12*/].f_2 = unk_0x7A66412A2B47CF10(uVar44[iVar0], iVar1);
			}
			else
			{
				Global_1626500.f_94358[iVar0 /*434*/].f_63[iVar1 /*12*/].f_2 = 0;
			}
			if (unk_0x5F76836A544DA961(uVar56[iVar0], iVar1) == 4)
			{
				StringCopy(&(Global_1626500.f_94358[iVar0 /*434*/].f_63[iVar1 /*12*/].f_4), unk_0xFC74DD7217B3E5DB(uVar56[iVar0], iVar1), 32);
			}
			else
			{
				StringCopy(&(Global_1626500.f_94358[iVar0 /*434*/].f_63[iVar1 /*12*/].f_4), "", 32);
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_191(int iParam0)
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
	int iVar161;
	int iVar162;
	int iVar163;
	int iVar164;
	int iVar165;
	int iVar166;
	int iVar167;
	
	if (unk_0x458C2A004F0678D0(iParam0, "cuts") == 0)
	{
		return;
	}
	iVar4 = unk_0x458C2A004F0678D0(iParam0, "cuts");
	iVar5 = unk_0x94A922605867FB40(iVar4, "name");
	iVar6 = unk_0x94A922605867FB40(iVar4, "bits");
	iVar7 = unk_0x94A922605867FB40(iVar4, "shot");
	iVar8 = unk_0x94A922605867FB40(iVar4, "anim");
	iVar9 = unk_0x94A922605867FB40(iVar4, "midp");
	iVar10 = unk_0x94A922605867FB40(iVar4, "rng");
	iVar161 = unk_0x94A922605867FB40(iVar4, "train");
	iVar162 = unk_0x94A922605867FB40(iVar4, "trahl");
	iVar163 = unk_0x94A922605867FB40(iVar4, "traou");
	iVar164 = unk_0x94A922605867FB40(iVar4, "trapo");
	iVar165 = unk_0x94A922605867FB40(iVar4, "ccp");
	iVar166 = unk_0x94A922605867FB40(iVar4, "ccr");
	iVar167 = unk_0x94A922605867FB40(iVar4, "ccs");
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (unk_0x5F76836A544DA961(iVar5, iVar0) == 4)
		{
			StringCopy(&(Global_1626500.f_88012[iVar0 /*1269*/]), unk_0xFC74DD7217B3E5DB(iVar5, iVar0), 16);
		}
		else
		{
			StringCopy(&(Global_1626500.f_88012[iVar0 /*1269*/]), "", 16);
		}
		if (unk_0x5F76836A544DA961(iVar6, iVar0) == 2)
		{
			Global_1626500.f_88012[iVar0 /*1269*/].f_4 = unk_0x7A66412A2B47CF10(iVar6, iVar0);
		}
		else
		{
			Global_1626500.f_88012[iVar0 /*1269*/].f_4 = 0;
		}
		if (unk_0x5F76836A544DA961(iVar6, iVar0) == 2)
		{
			Global_1626500.f_88012[iVar0 /*1269*/].f_5 = unk_0x7A66412A2B47CF10(iVar6, iVar0);
		}
		else
		{
			Global_1626500.f_88012[iVar0 /*1269*/].f_5 = 0;
		}
		if (unk_0x5F76836A544DA961(iVar7, iVar0) == 2)
		{
			Global_1626500.f_88012[iVar0 /*1269*/].f_43 = unk_0x7A66412A2B47CF10(iVar7, iVar0);
		}
		else
		{
			Global_1626500.f_88012[iVar0 /*1269*/].f_43 = 0;
		}
		if (unk_0x5F76836A544DA961(iVar8, iVar0) == 2)
		{
			Global_1626500.f_88012[iVar0 /*1269*/].f_42 = unk_0x7A66412A2B47CF10(iVar8, iVar0);
		}
		else
		{
			Global_1626500.f_88012[iVar0 /*1269*/].f_42 = 0;
		}
		if (unk_0x5F76836A544DA961(iVar9, iVar0) == 2)
		{
			Global_1626500.f_88012[iVar0 /*1269*/].f_44 = unk_0x7A66412A2B47CF10(iVar9, iVar0);
		}
		else
		{
			Global_1626500.f_88012[iVar0 /*1269*/].f_44 = 0;
		}
		if (unk_0x5F76836A544DA961(iVar10, iVar0) == 2)
		{
			Global_1626500.f_88012[iVar0 /*1269*/].f_735 = unk_0x7A66412A2B47CF10(iVar10, iVar0);
		}
		else
		{
			Global_1626500.f_88012[iVar0 /*1269*/].f_735 = 0;
		}
		if (unk_0x5F76836A544DA961(iVar165, iVar0) == 5)
		{
			Global_1626500.f_88012[iVar0 /*1269*/].f_728 = { unk_0x219E9678C4D55F3E(iVar165, iVar0) };
		}
		else
		{
			Global_1626500.f_88012[iVar0 /*1269*/].f_728 = { 0f, 0f, 0f };
		}
		if (unk_0x5F76836A544DA961(iVar166, iVar0) == 3)
		{
			Global_1626500.f_88012[iVar0 /*1269*/].f_731 = unk_0xE00906876D6244A2(iVar166, iVar0);
		}
		else
		{
			Global_1626500.f_88012[iVar0 /*1269*/].f_731 = 0f;
		}
		if (unk_0x5F76836A544DA961(iVar167, iVar0) == 5)
		{
			Global_1626500.f_88012[iVar0 /*1269*/].f_732 = { unk_0x219E9678C4D55F3E(iVar167, iVar0) };
		}
		else
		{
			Global_1626500.f_88012[iVar0 /*1269*/].f_732 = { 0f, 0f, 0f };
		}
		if (unk_0x5F76836A544DA961(iVar161, iVar0) == 2)
		{
			Global_1626500.f_88012[iVar0 /*1269*/].f_436 = unk_0x7A66412A2B47CF10(iVar161, iVar0);
		}
		else
		{
			Global_1626500.f_88012[iVar0 /*1269*/].f_436 = 0;
		}
		if (unk_0x5F76836A544DA961(iVar162, iVar0) == 2)
		{
			Global_1626500.f_88012[iVar0 /*1269*/].f_438 = unk_0x7A66412A2B47CF10(iVar162, iVar0);
		}
		else
		{
			Global_1626500.f_88012[iVar0 /*1269*/].f_438 = 0;
		}
		if (unk_0x5F76836A544DA961(iVar163, iVar0) == 2)
		{
			Global_1626500.f_88012[iVar0 /*1269*/].f_437 = unk_0x7A66412A2B47CF10(iVar163, iVar0);
		}
		else
		{
			Global_1626500.f_88012[iVar0 /*1269*/].f_437 = 0;
		}
		if (unk_0x5F76836A544DA961(iVar164, iVar0) == 5)
		{
			Global_1626500.f_88012[iVar0 /*1269*/].f_439 = { unk_0x219E9678C4D55F3E(iVar164, iVar0) };
		}
		else
		{
			Global_1626500.f_88012[iVar0 /*1269*/].f_439 = { 0f, 0f, 0f };
		}
		StringCopy(&cVar2, "int", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar11[iVar0] = unk_0x94A922605867FB40(iVar4, &cVar2);
		StringCopy(&cVar2, "ctp", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar17[iVar0] = unk_0x94A922605867FB40(iVar4, &cVar2);
		StringCopy(&cVar2, "sps", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar23[iVar0] = unk_0x94A922605867FB40(iVar4, &cVar2);
		StringCopy(&cVar2, "eps", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar29[iVar0] = unk_0x94A922605867FB40(iVar4, &cVar2);
		StringCopy(&cVar2, "srt", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar35[iVar0] = unk_0x94A922605867FB40(iVar4, &cVar2);
		StringCopy(&cVar2, "ert", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar41[iVar0] = unk_0x94A922605867FB40(iVar4, &cVar2);
		StringCopy(&cVar2, "sfv", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar47[iVar0] = unk_0x94A922605867FB40(iVar4, &cVar2);
		StringCopy(&cVar2, "efv", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar53[iVar0] = unk_0x94A922605867FB40(iVar4, &cVar2);
		StringCopy(&cVar2, "ati", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar113[iVar0] = unk_0x94A922605867FB40(iVar4, &cVar2);
		StringCopy(&cVar2, "ato", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar119[iVar0] = unk_0x94A922605867FB40(iVar4, &cVar2);
		StringCopy(&cVar2, "atr", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar125[iVar0] = unk_0x94A922605867FB40(iVar4, &cVar2);
		StringCopy(&cVar2, "ala", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar131[iVar0] = unk_0x94A922605867FB40(iVar4, &cVar2);
		StringCopy(&cVar2, "csp", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar137[iVar0] = unk_0x94A922605867FB40(iVar4, &cVar2);
		StringCopy(&cVar2, "csr", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar143[iVar0] = unk_0x94A922605867FB40(iVar4, &cVar2);
		StringCopy(&cVar2, "cssbs", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar71[iVar0] = unk_0x94A922605867FB40(iVar4, &cVar2);
		StringCopy(&cVar2, "skt", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar77[iVar0] = unk_0x94A922605867FB40(iVar4, &cVar2);
		StringCopy(&cVar2, "skm", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar83[iVar0] = unk_0x94A922605867FB40(iVar4, &cVar2);
		StringCopy(&cVar2, "eind", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar59[iVar0] = unk_0x94A922605867FB40(iVar4, &cVar2);
		StringCopy(&cVar2, "etyp", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar65[iVar0] = unk_0x94A922605867FB40(iVar4, &cVar2);
		StringCopy(&cVar2, "pstr", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar2, iVar0, 8);
		}
		uVar95[iVar0] = unk_0x94A922605867FB40(iVar4, &cVar2);
		StringCopy(&cVar2, "pend", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar2, iVar0, 8);
		}
		uVar101[iVar0] = unk_0x94A922605867FB40(iVar4, &cVar2);
		StringCopy(&cVar2, "strh", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar2, iVar0, 8);
		}
		uVar89[iVar0] = unk_0x94A922605867FB40(iVar4, &cVar2);
		StringCopy(&cVar2, "endh", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar2, iVar0, 8);
		}
		uVar107[iVar0] = unk_0x94A922605867FB40(iVar4, &cVar2);
		StringCopy(&cVar2, "camnm", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar149[iVar0] = unk_0x94A922605867FB40(iVar4, &cVar2);
		StringCopy(&cVar2, "locnm", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar155[iVar0] = unk_0x94A922605867FB40(iVar4, &cVar2);
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			if (unk_0x5F76836A544DA961(uVar95[iVar0], iVar1) == 5)
			{
				Global_1626500.f_88012[iVar0 /*1269*/].f_6[iVar1 /*3*/] = { unk_0x219E9678C4D55F3E(uVar95[iVar0], iVar1) };
			}
			else
			{
				Global_1626500.f_88012[iVar0 /*1269*/].f_6[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x5F76836A544DA961(uVar101[iVar0], iVar1) == 5)
			{
				Global_1626500.f_88012[iVar0 /*1269*/].f_19[iVar1 /*3*/] = { unk_0x219E9678C4D55F3E(uVar101[iVar0], iVar1) };
			}
			else
			{
				Global_1626500.f_88012[iVar0 /*1269*/].f_19[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x5F76836A544DA961(uVar89[iVar0], iVar1) == 3)
			{
				Global_1626500.f_88012[iVar0 /*1269*/].f_32[iVar1] = unk_0xE00906876D6244A2(uVar89[iVar0], iVar1);
			}
			else
			{
				Global_1626500.f_88012[iVar0 /*1269*/].f_32[iVar1] = 0f;
			}
			if (unk_0x5F76836A544DA961(uVar107[iVar0], iVar1) == 3)
			{
				Global_1626500.f_88012[iVar0 /*1269*/].f_37[iVar1] = unk_0xE00906876D6244A2(uVar107[iVar0], iVar1);
			}
			else
			{
				Global_1626500.f_88012[iVar0 /*1269*/].f_37[iVar1] = 0f;
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 19)
		{
			if (unk_0x5F76836A544DA961(uVar11[iVar0], iVar1) == 2)
			{
				Global_1626500.f_88012[iVar0 /*1269*/].f_45[iVar1] = unk_0x7A66412A2B47CF10(uVar11[iVar0], iVar1);
			}
			else
			{
				Global_1626500.f_88012[iVar0 /*1269*/].f_45[iVar1] = 0;
			}
			if (unk_0x5F76836A544DA961(uVar17[iVar0], iVar1) == 2)
			{
				Global_1626500.f_88012[iVar0 /*1269*/].f_66[iVar1] = unk_0x7A66412A2B47CF10(uVar17[iVar0], iVar1);
			}
			else
			{
				Global_1626500.f_88012[iVar0 /*1269*/].f_66[iVar1] = 0;
			}
			if (unk_0x5F76836A544DA961(uVar23[iVar0], iVar1) == 5)
			{
				Global_1626500.f_88012[iVar0 /*1269*/].f_87[iVar1 /*3*/] = { unk_0x219E9678C4D55F3E(uVar23[iVar0], iVar1) };
			}
			else
			{
				Global_1626500.f_88012[iVar0 /*1269*/].f_87[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x5F76836A544DA961(uVar29[iVar0], iVar1) == 5)
			{
				Global_1626500.f_88012[iVar0 /*1269*/].f_148[iVar1 /*3*/] = { unk_0x219E9678C4D55F3E(uVar29[iVar0], iVar1) };
			}
			else
			{
				Global_1626500.f_88012[iVar0 /*1269*/].f_148[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x5F76836A544DA961(uVar35[iVar0], iVar1) == 5)
			{
				Global_1626500.f_88012[iVar0 /*1269*/].f_209[iVar1 /*3*/] = { unk_0x219E9678C4D55F3E(uVar35[iVar0], iVar1) };
			}
			else
			{
				Global_1626500.f_88012[iVar0 /*1269*/].f_209[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x5F76836A544DA961(uVar41[iVar0], iVar1) == 5)
			{
				Global_1626500.f_88012[iVar0 /*1269*/].f_270[iVar1 /*3*/] = { unk_0x219E9678C4D55F3E(uVar41[iVar0], iVar1) };
			}
			else
			{
				Global_1626500.f_88012[iVar0 /*1269*/].f_270[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x5F76836A544DA961(uVar47[iVar0], iVar1) == 3)
			{
				Global_1626500.f_88012[iVar0 /*1269*/].f_331[iVar1] = unk_0xE00906876D6244A2(uVar47[iVar0], iVar1);
			}
			else
			{
				Global_1626500.f_88012[iVar0 /*1269*/].f_331[iVar1] = 0f;
			}
			if (unk_0x5F76836A544DA961(uVar53[iVar0], iVar1) == 3)
			{
				Global_1626500.f_88012[iVar0 /*1269*/].f_352[iVar1] = unk_0xE00906876D6244A2(uVar53[iVar0], iVar1);
			}
			else
			{
				Global_1626500.f_88012[iVar0 /*1269*/].f_352[iVar1] = 0f;
			}
			if (unk_0x5F76836A544DA961(uVar71[iVar0], iVar1) == 2)
			{
				Global_1626500.f_88012[iVar0 /*1269*/].f_373[iVar1] = unk_0x7A66412A2B47CF10(uVar71[iVar0], iVar1);
			}
			else
			{
				Global_1626500.f_88012[iVar0 /*1269*/].f_373[iVar1] = 0;
			}
			if (unk_0x5F76836A544DA961(uVar77[iVar0], iVar1) == 2)
			{
				Global_1626500.f_88012[iVar0 /*1269*/].f_394[iVar1] = unk_0x7A66412A2B47CF10(uVar77[iVar0], iVar1);
			}
			else
			{
				Global_1626500.f_88012[iVar0 /*1269*/].f_394[iVar1] = 0;
			}
			if (unk_0x5F76836A544DA961(uVar83[iVar0], iVar1) == 3)
			{
				Global_1626500.f_88012[iVar0 /*1269*/].f_415[iVar1] = unk_0xE00906876D6244A2(uVar83[iVar0], iVar1);
			}
			else
			{
				Global_1626500.f_88012[iVar0 /*1269*/].f_415[iVar1] = 0f;
			}
			if (unk_0x5F76836A544DA961(uVar113[iVar0], iVar1) == 2)
			{
				Global_1626500.f_88012[iVar0 /*1269*/].f_524[iVar1] = unk_0x7A66412A2B47CF10(uVar113[iVar0], iVar1);
			}
			else
			{
				Global_1626500.f_88012[iVar0 /*1269*/].f_524[iVar1] = 0;
			}
			if (unk_0x5F76836A544DA961(uVar119[iVar0], iVar1) == 5)
			{
				Global_1626500.f_88012[iVar0 /*1269*/].f_545[iVar1 /*3*/] = { unk_0x219E9678C4D55F3E(uVar119[iVar0], iVar1) };
			}
			else
			{
				Global_1626500.f_88012[iVar0 /*1269*/].f_545[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x5F76836A544DA961(uVar125[iVar0], iVar1) == 5)
			{
				Global_1626500.f_88012[iVar0 /*1269*/].f_606[iVar1 /*3*/] = { unk_0x219E9678C4D55F3E(uVar125[iVar0], iVar1) };
			}
			else
			{
				Global_1626500.f_88012[iVar0 /*1269*/].f_606[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x5F76836A544DA961(uVar131[iVar0], iVar1) == 5)
			{
				Global_1626500.f_88012[iVar0 /*1269*/].f_667[iVar1 /*3*/] = { unk_0x219E9678C4D55F3E(uVar131[iVar0], iVar1) };
				Global_1626500.f_97585[iVar1] = Global_1626500.f_88012[iVar0 /*1269*/].f_667[iVar1 /*3*/];
				Global_1626500.f_97606[iVar1] = Global_1626500.f_88012[iVar0 /*1269*/].f_667[iVar1 /*3*/].f_1;
				Global_1626500.f_97627[iVar1] = Global_1626500.f_88012[iVar0 /*1269*/].f_667[iVar1 /*3*/].f_2;
			}
			else
			{
				Global_1626500.f_88012[iVar0 /*1269*/].f_667[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x5F76836A544DA961(uVar137[iVar0], iVar1) == 5)
			{
				Global_1626500.f_88012[iVar0 /*1269*/].f_442[iVar1 /*3*/] = { unk_0x219E9678C4D55F3E(uVar137[iVar0], iVar1) };
			}
			else
			{
				Global_1626500.f_88012[iVar0 /*1269*/].f_442[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x5F76836A544DA961(uVar143[iVar0], iVar1) == 3)
			{
				Global_1626500.f_88012[iVar0 /*1269*/].f_503[iVar1] = unk_0xE00906876D6244A2(uVar143[iVar0], iVar1);
			}
			else
			{
				Global_1626500.f_88012[iVar0 /*1269*/].f_503[iVar1] = 0f;
			}
			if (unk_0x5F76836A544DA961(uVar149[iVar0], iVar1) == 4)
			{
				StringCopy(&(Global_1626500.f_88012[iVar0 /*1269*/].f_1107[iVar1 /*4*/]), unk_0xFC74DD7217B3E5DB(uVar149[iVar0], iVar1), 16);
			}
			else
			{
				StringCopy(&(Global_1626500.f_88012[iVar0 /*1269*/].f_1107[iVar1 /*4*/]), "", 16);
			}
			if (unk_0x5F76836A544DA961(uVar155[iVar0], iVar1) == 4)
			{
				StringCopy(&(Global_1626500.f_88012[iVar0 /*1269*/].f_1188[iVar1 /*4*/]), unk_0xFC74DD7217B3E5DB(uVar155[iVar0], iVar1), 16);
			}
			else
			{
				StringCopy(&(Global_1626500.f_88012[iVar0 /*1269*/].f_1188[iVar1 /*4*/]), "", 16);
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 29)
		{
			if (unk_0x5F76836A544DA961(uVar59[iVar0], iVar1) == 2)
			{
				Global_1626500.f_88012[iVar0 /*1269*/].f_736[iVar1 /*12*/].f_1 = unk_0x7A66412A2B47CF10(uVar59[iVar0], iVar1);
			}
			else
			{
				Global_1626500.f_88012[iVar0 /*1269*/].f_736[iVar1 /*12*/].f_1 = -1;
			}
			if (unk_0x5F76836A544DA961(uVar65[iVar0], iVar1) == 2)
			{
				Global_1626500.f_88012[iVar0 /*1269*/].f_736[iVar1 /*12*/] = unk_0x7A66412A2B47CF10(uVar65[iVar0], iVar1);
			}
			else
			{
				Global_1626500.f_88012[iVar0 /*1269*/].f_736[iVar1 /*12*/] = -1;
			}
			iVar1++;
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
	char cVar4[16];
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	if (unk_0x458C2A004F0678D0(iParam0, "eoir") == 0 || unk_0x458C2A004F0678D0(iParam0, "eoep") == 0)
	{
		return;
	}
	iVar8 = unk_0x94A922605867FB40(iParam0, "eoid");
	iVar9 = unk_0x94A922605867FB40(iParam0, "eoet");
	iVar10 = unk_0x458C2A004F0678D0(iParam0, "eoir");
	iVar11 = unk_0x458C2A004F0678D0(iParam0, "eoep");
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		if (unk_0x5F76836A544DA961(iVar8, iVar0) == 2)
		{
			Global_1626500.f_80315[iVar0] = unk_0x7A66412A2B47CF10(iVar8, iVar0);
		}
		else
		{
			Global_1626500.f_80315[iVar0] = -1;
		}
		if (unk_0x5F76836A544DA961(iVar9, iVar0) == 2)
		{
			Global_1626500.f_80284[iVar0] = unk_0x7A66412A2B47CF10(iVar9, iVar0);
		}
		else
		{
			Global_1626500.f_80284[iVar0] = -1;
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
				if (unk_0xD44C5C9A5AB591EF(iVar10, &cVar4) == 2)
				{
					Global_1626500.f_80346[iVar0 /*51*/][iVar1 /*5*/][iVar2] = unk_0x9C70ABDC70E0A0CF(iVar10, &cVar4);
				}
				else
				{
					Global_1626500.f_80346[iVar0 /*51*/][iVar1 /*5*/][iVar2] = -1;
				}
				StringCopy(&cVar4, "eop", 16);
				StringIntConCat(&cVar4, iVar0, 16);
				StringIntConCat(&cVar4, iVar1, 16);
				StringIntConCat(&cVar4, iVar2, 16);
				if (unk_0xD44C5C9A5AB591EF(iVar11, &cVar4) == 2)
				{
					Global_1626500.f_81877[iVar0 /*51*/][iVar1 /*5*/][iVar2] = unk_0x9C70ABDC70E0A0CF(iVar11, &cVar4);
				}
				else
				{
					Global_1626500.f_80346[iVar0 /*51*/][iVar1 /*5*/][iVar2] = -1;
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
		iVar12 = Global_1626500.f_80315[iVar0];
		iVar13 = Global_1626500.f_80284[iVar0];
		if (iVar12 != -1 && iVar13 != -1)
		{
			iVar3 = 0;
			while (iVar3 <= 29)
			{
				if ((iVar3 != iVar0 && Global_1626500.f_80315[iVar3] == iVar12) && Global_1626500.f_80284[iVar3] == iVar13)
				{
					Global_1626500.f_80284[iVar3] = -1;
					Global_1626500.f_80315[iVar3] = -1;
					iVar1 = 0;
					while (iVar1 <= 9)
					{
						iVar2 = 0;
						while (iVar2 <= 3)
						{
							Global_1626500.f_80346[iVar3 /*51*/][iVar1 /*5*/][iVar2] = -1;
							Global_1626500.f_81877[iVar3 /*51*/][iVar1 /*5*/][iVar2] = -1;
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

void func_193(int iParam0)
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
	
	iVar4 = unk_0x458C2A004F0678D0(iParam0, "kill");
	iVar5 = unk_0x94A922605867FB40(iVar4, "no");
	iVar6 = unk_0x94A922605867FB40(iVar4, "mcp");
	iVar7 = unk_0x94A922605867FB40(iVar4, "mcf");
	iVar1 = 0;
	while (iVar1 <= (Global_1626500.f_27 - 1))
	{
		if (iVar1 < 4)
		{
			Global_1626500.f_38703[iVar1] = unk_0x7A66412A2B47CF10(iVar5, iVar1);
			StringCopy(&cVar2, "rul", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar8[iVar1] = unk_0x94A922605867FB40(iVar4, &cVar2);
			StringCopy(&cVar2, "pri", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar13[iVar1] = unk_0x94A922605867FB40(iVar4, &cVar2);
			StringCopy(&cVar2, "lim", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar18[iVar1] = unk_0x94A922605867FB40(iVar4, &cVar2);
			StringCopy(&cVar2, "jtop", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar23[iVar1] = unk_0x94A922605867FB40(iVar4, &cVar2);
			StringCopy(&cVar2, "jtof", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar28[iVar1] = unk_0x94A922605867FB40(iVar4, &cVar2);
			iVar0 = 0;
			while (iVar0 <= (Global_1626500.f_38703[iVar1] - 1))
			{
				if (iVar0 < 17)
				{
					Global_1626500.f_38209[iVar0 /*29*/][iVar1] = unk_0x7A66412A2B47CF10(uVar8[iVar1], iVar0);
					Global_1626500.f_38209[iVar0 /*29*/].f_5[iVar1] = unk_0x7A66412A2B47CF10(uVar13[iVar1], iVar0);
					if (Global_1626500.f_38209[iVar0 /*29*/].f_5[iVar1] == -1)
					{
						Global_1626500.f_38209[iVar0 /*29*/].f_5[iVar1] = 99999;
					}
					Global_1626500.f_38209[iVar0 /*29*/].f_10[iVar1] = unk_0x7A66412A2B47CF10(uVar18[iVar1], iVar0);
					if (unk_0x5F76836A544DA961(uVar23[iVar1], iVar0) == 2)
					{
						Global_1626500.f_38209[iVar0 /*29*/].f_15[iVar1] = unk_0x7A66412A2B47CF10(uVar23[iVar1], iVar0);
					}
					else
					{
						Global_1626500.f_38209[iVar0 /*29*/].f_15[iVar1] = 0;
					}
					if (unk_0x5F76836A544DA961(uVar28[iVar1], iVar0) == 2)
					{
						Global_1626500.f_38209[iVar0 /*29*/].f_20[iVar1] = unk_0x7A66412A2B47CF10(uVar28[iVar1], iVar0);
					}
					else
					{
						Global_1626500.f_38209[iVar0 /*29*/].f_20[iVar1] = 0;
					}
					if (unk_0x5F76836A544DA961(iVar6, iVar0) == 2)
					{
						Global_1626500.f_38209[iVar0 /*29*/].f_28 = unk_0x7A66412A2B47CF10(iVar6, iVar0);
					}
					else
					{
						Global_1626500.f_38209[iVar0 /*29*/].f_28 = -1;
					}
					if (unk_0x5F76836A544DA961(iVar7, iVar0) == 2)
					{
						Global_1626500.f_38209[iVar0 /*29*/].f_27 = unk_0x7A66412A2B47CF10(iVar7, iVar0);
					}
					else
					{
						Global_1626500.f_38209[iVar0 /*29*/].f_27 = -1;
					}
				}
				iVar0++;
			}
		}
		iVar1++;
	}
}

void func_194(int iParam0)
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
	
	iVar4 = unk_0x458C2A004F0678D0(iParam0, "goto");
	Global_1626500.f_38709[0] = unk_0x9C70ABDC70E0A0CF(iVar4, "no");
	Global_1626500.f_6 = unk_0x9C70ABDC70E0A0CF(iVar4, "atrig");
	iVar80 = unk_0x94A922605867FB40(iVar4, "lmcp");
	iVar81 = unk_0x94A922605867FB40(iVar4, "lmcf");
	iVar1 = 0;
	while (iVar1 <= (Global_1626500.f_27 - 1))
	{
		if (iVar1 < 4)
		{
			StringCopy(&cVar2, "loc", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar5[iVar1] = unk_0x94A922605867FB40(iVar4, &cVar2);
			StringCopy(&cVar2, "sz", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar10[iVar1] = unk_0x94A922605867FB40(iVar4, &cVar2);
			StringCopy(&cVar2, "rl", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar15[iVar1] = unk_0x94A922605867FB40(iVar4, &cVar2);
			StringCopy(&cVar2, "pri", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar20[iVar1] = unk_0x94A922605867FB40(iVar4, &cVar2);
			StringCopy(&cVar2, "wtm", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar25[iVar1] = unk_0x94A922605867FB40(iVar4, &cVar2);
			StringCopy(&cVar2, "gps", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar40[iVar1] = unk_0x94A922605867FB40(iVar4, &cVar2);
			StringCopy(&cVar2, "smc", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar45[iVar1] = unk_0x94A922605867FB40(iVar4, &cVar2);
			StringCopy(&cVar2, "lbs", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar50[iVar1] = unk_0x94A922605867FB40(iVar4, &cVar2);
			StringCopy(&cVar2, "rcptp", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar60[iVar1] = unk_0x94A922605867FB40(iVar4, &cVar2);
			StringCopy(&cVar2, "cmp", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar30[iVar1] = unk_0x94A922605867FB40(iVar4, &cVar2);
			StringCopy(&cVar2, "air", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar35[iVar1] = unk_0x94A922605867FB40(iVar4, &cVar2);
			StringCopy(&cVar2, "veh", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar65[iVar1] = unk_0x94A922605867FB40(iVar4, &cVar2);
			StringCopy(&cVar2, "dir", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar55[iVar1] = unk_0x94A922605867FB40(iVar4, &cVar2);
			StringCopy(&cVar2, "jtop", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar70[iVar1] = unk_0x94A922605867FB40(iVar4, &cVar2);
			StringCopy(&cVar2, "jtof", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar75[iVar1] = unk_0x94A922605867FB40(iVar4, &cVar2);
			iVar0 = 0;
			while (iVar0 <= (Global_1626500.f_38709[0] - 1))
			{
				Global_1626500.f_36282[iVar0 /*107*/].f_1[0 /*3*/] = { unk_0x219E9678C4D55F3E(uVar5[iVar1], iVar0) };
				Global_1626500.f_36282[iVar0 /*107*/].f_14[0] = unk_0xE00906876D6244A2(uVar10[iVar1], iVar0);
				Global_1626500.f_36282[iVar0 /*107*/].f_62[iVar1] = unk_0x7A66412A2B47CF10(uVar15[iVar1], iVar0);
				Global_1626500.f_36282[iVar0 /*107*/].f_67[iVar1] = unk_0x7A66412A2B47CF10(uVar20[iVar1], iVar0);
				if (Global_1626500.f_36282[iVar0 /*107*/].f_67[iVar1] == -1)
				{
					Global_1626500.f_36282[iVar0 /*107*/].f_67[iVar1] = 99999;
				}
				Global_1626500.f_36282[iVar0 /*107*/].f_72[iVar1] = unk_0x7A66412A2B47CF10(uVar25[iVar1], iVar0);
				Global_1626500.f_36282[iVar0 /*107*/].f_48[iVar1] = unk_0xE00906876D6244A2(uVar60[iVar1], iVar0);
				Global_1626500.f_36282[iVar0 /*107*/].f_77[iVar1] = unk_0x7A66412A2B47CF10(uVar30[iVar1], iVar0);
				Global_1626500.f_36282[iVar0 /*107*/].f_36[iVar1] = unk_0x7A66412A2B47CF10(uVar35[iVar1], iVar0);
				Global_1626500.f_36282[iVar0 /*107*/].f_53 = unk_0x7A66412A2B47CF10(uVar50[iVar1], iVar0);
				Global_1626500.f_36282[iVar0 /*107*/].f_31[0] = unk_0x7A66412A2B47CF10(uVar40[iVar1], iVar0);
				Global_1626500.f_36282[iVar0 /*107*/].f_41[0] = unk_0x7A66412A2B47CF10(uVar45[iVar1], iVar0);
				Global_1626500.f_36282[iVar0 /*107*/].f_98 = unk_0xE00906876D6244A2(uVar55[iVar1], iVar0);
				if (unk_0x5F76836A544DA961(iVar80, iVar0) == 2)
				{
					Global_1626500.f_36282[iVar0 /*107*/].f_94 = unk_0x7A66412A2B47CF10(iVar80, iVar0);
				}
				else
				{
					Global_1626500.f_36282[iVar0 /*107*/].f_94 = -1;
				}
				if (unk_0x5F76836A544DA961(iVar81, iVar0) == 2)
				{
					Global_1626500.f_36282[iVar0 /*107*/].f_95 = unk_0x7A66412A2B47CF10(iVar81, iVar0);
				}
				else
				{
					Global_1626500.f_36282[iVar0 /*107*/].f_95 = -1;
				}
				if (unk_0x5F76836A544DA961(uVar65[iVar1], iVar0) == 2)
				{
					Global_1626500.f_36282[iVar0 /*107*/].f_57[iVar1] = unk_0x7A66412A2B47CF10(uVar65[iVar1], iVar0);
				}
				else
				{
					Global_1626500.f_36282[iVar0 /*107*/].f_57[iVar1] = 0;
				}
				if (unk_0x5F76836A544DA961(uVar70[iVar1], iVar0) == 2)
				{
					Global_1626500.f_36282[iVar0 /*107*/].f_82[iVar1] = unk_0x7A66412A2B47CF10(uVar70[iVar1], iVar0);
				}
				else
				{
					Global_1626500.f_36282[iVar0 /*107*/].f_82[iVar1] = 0;
				}
				if (unk_0x5F76836A544DA961(uVar75[iVar1], iVar0) == 2)
				{
					Global_1626500.f_36282[iVar0 /*107*/].f_87[iVar1] = unk_0x7A66412A2B47CF10(uVar75[iVar1], iVar0);
				}
				else
				{
					Global_1626500.f_36282[iVar0 /*107*/].f_87[iVar1] = 0;
				}
				iVar0++;
			}
		}
		iVar1++;
	}
	iVar82 = unk_0x94A922605867FB40(iVar4, "locbc");
	iVar83 = unk_0x94A922605867FB40(iVar4, "loc2rd");
	iVar84 = unk_0x94A922605867FB40(iVar4, "loclbr");
	iVar85 = unk_0x94A922605867FB40(iVar4, "locdir");
	iVar86 = unk_0x94A922605867FB40(iVar4, "loctol");
	iVar87 = unk_0x94A922605867FB40(iVar4, "lochgt");
	iVar88 = unk_0x94A922605867FB40(iVar4, "locart");
	iVar89 = unk_0x94A922605867FB40(iVar4, "locaa1");
	iVar90 = unk_0x94A922605867FB40(iVar4, "locaa2");
	iVar91 = unk_0x94A922605867FB40(iVar4, "locaaw");
	iVar92 = unk_0x94A922605867FB40(iVar4, "nmpass");
	iVar93 = unk_0x94A922605867FB40(iVar4, "nmfail");
	iVar94 = unk_0x94A922605867FB40(iVar4, "locstd");
	iVar95 = unk_0x94A922605867FB40(iVar4, "locstm");
	iVar96 = unk_0x94A922605867FB40(iVar4, "lcbs2");
	iVar97 = unk_0x94A922605867FB40(iVar4, "locti");
	iVar98 = unk_0x94A922605867FB40(iVar4, "locgc");
	iVar99 = unk_0x94A922605867FB40(iVar4, "loclto");
	iVar100 = unk_0x94A922605867FB40(iVar4, "loctmw");
	iVar101 = unk_0x94A922605867FB40(iVar4, "loctmt");
	iVar102 = unk_0x94A922605867FB40(iVar4, "loctst");
	iVar103 = unk_0x94A922605867FB40(iVar4, "locloo");
	iVar104 = unk_0x94A922605867FB40(iVar4, "loccors");
	iVar105 = unk_0x94A922605867FB40(iVar4, "lochght");
	iVar106 = unk_0x94A922605867FB40(iVar4, "locdpth");
	iVar0 = 0;
	while (iVar0 <= (Global_1626500.f_38709[0] - 1))
	{
		if (unk_0x5F76836A544DA961(iVar82, iVar0) == 2)
		{
			Global_1626500.f_36282[iVar0 /*107*/].f_46 = unk_0x7A66412A2B47CF10(iVar82, iVar0);
		}
		else
		{
			Global_1626500.f_36282[iVar0 /*107*/].f_46 = 0;
		}
		if (unk_0x5F76836A544DA961(iVar83, iVar0) == 3)
		{
			Global_1626500.f_36282[iVar0 /*107*/].f_20 = unk_0xE00906876D6244A2(iVar83, iVar0);
		}
		else
		{
			Global_1626500.f_36282[iVar0 /*107*/].f_20 = 0f;
		}
		if (unk_0x5F76836A544DA961(iVar84, iVar0) == 3)
		{
			Global_1626500.f_36282[iVar0 /*107*/].f_19 = unk_0xE00906876D6244A2(iVar84, iVar0);
		}
		else
		{
			Global_1626500.f_36282[iVar0 /*107*/].f_19 = 1f;
		}
		if (unk_0x5F76836A544DA961(iVar85, iVar0) == 3)
		{
			Global_1626500.f_36282[iVar0 /*107*/].f_28 = unk_0xE00906876D6244A2(iVar85, iVar0);
		}
		else
		{
			Global_1626500.f_36282[iVar0 /*107*/].f_28 = 0f;
		}
		if (unk_0x5F76836A544DA961(iVar86, iVar0) == 3)
		{
			Global_1626500.f_36282[iVar0 /*107*/].f_29 = unk_0xE00906876D6244A2(iVar86, iVar0);
		}
		else
		{
			Global_1626500.f_36282[iVar0 /*107*/].f_29 = 0f;
		}
		if (unk_0x5F76836A544DA961(iVar87, iVar0) == 3)
		{
			Global_1626500.f_36282[iVar0 /*107*/].f_30 = unk_0xE00906876D6244A2(iVar87, iVar0);
		}
		else
		{
			Global_1626500.f_36282[iVar0 /*107*/].f_30 = 0f;
		}
		if (unk_0x5F76836A544DA961(iVar97, iVar0) == 3)
		{
			Global_1626500.f_36282[iVar0 /*107*/].f_55 = unk_0xE00906876D6244A2(iVar97, iVar0);
		}
		else
		{
			Global_1626500.f_36282[iVar0 /*107*/].f_55 = 0f;
		}
		if (unk_0x5F76836A544DA961(iVar98, iVar0) == 3)
		{
			Global_1626500.f_36282[iVar0 /*107*/].f_56 = unk_0xE00906876D6244A2(iVar98, iVar0);
		}
		else
		{
			Global_1626500.f_36282[iVar0 /*107*/].f_56 = 0f;
		}
		if (unk_0x5F76836A544DA961(iVar88, iVar0) == 2)
		{
			Global_1626500.f_36282[iVar0 /*107*/] = unk_0x7A66412A2B47CF10(iVar88, iVar0);
		}
		else
		{
			Global_1626500.f_36282[iVar0 /*107*/] = 0;
		}
		if (unk_0x5F76836A544DA961(iVar92, iVar0) == 2)
		{
			Global_1626500.f_36282[iVar0 /*107*/].f_92 = unk_0x7A66412A2B47CF10(iVar92, iVar0);
		}
		else
		{
			Global_1626500.f_36282[iVar0 /*107*/].f_92 = -1;
		}
		if (unk_0x5F76836A544DA961(iVar93, iVar0) == 2)
		{
			Global_1626500.f_36282[iVar0 /*107*/].f_93 = unk_0x7A66412A2B47CF10(iVar93, iVar0);
		}
		else
		{
			Global_1626500.f_36282[iVar0 /*107*/].f_93 = -1;
		}
		if (unk_0x5F76836A544DA961(iVar94, iVar0) == 3)
		{
			Global_1626500.f_36282[iVar0 /*107*/].f_97 = unk_0xE00906876D6244A2(iVar94, iVar0);
		}
		else
		{
			Global_1626500.f_36282[iVar0 /*107*/].f_97 = 10.5f;
		}
		if (unk_0x5F76836A544DA961(iVar105, iVar0) == 3)
		{
			Global_1626500.f_36282[iVar0 /*107*/].f_99 = unk_0xE00906876D6244A2(iVar105, iVar0);
		}
		else
		{
			Global_1626500.f_36282[iVar0 /*107*/].f_99 = 1f;
		}
		if (unk_0x5F76836A544DA961(iVar106, iVar0) == 3)
		{
			Global_1626500.f_36282[iVar0 /*107*/].f_100 = unk_0xE00906876D6244A2(iVar106, iVar0);
		}
		else
		{
			Global_1626500.f_36282[iVar0 /*107*/].f_100 = 0f;
		}
		if (unk_0x5F76836A544DA961(iVar95, iVar0) == 2)
		{
			Global_1626500.f_36282[iVar0 /*107*/].f_96 = unk_0x7A66412A2B47CF10(iVar95, iVar0);
		}
		else
		{
			Global_1626500.f_36282[iVar0 /*107*/].f_96 = 0;
		}
		if (unk_0x5F76836A544DA961(iVar96, iVar0) == 2)
		{
			Global_1626500.f_36282[iVar0 /*107*/].f_54 = unk_0x7A66412A2B47CF10(iVar96, iVar0);
		}
		else
		{
			Global_1626500.f_36282[iVar0 /*107*/].f_54 = 0;
		}
		if (unk_0x5F76836A544DA961(iVar103, iVar0) == 2)
		{
			Global_1626500.f_36282[iVar0 /*107*/].f_101 = unk_0x7A66412A2B47CF10(iVar103, iVar0);
		}
		else
		{
			Global_1626500.f_36282[iVar0 /*107*/].f_101 = 0;
		}
		if (unk_0x5F76836A544DA961(iVar104, iVar0) == 2)
		{
			Global_1626500.f_36282[iVar0 /*107*/].f_47 = unk_0x7A66412A2B47CF10(iVar104, iVar0);
		}
		else
		{
			Global_1626500.f_36282[iVar0 /*107*/].f_47 = 0;
		}
		if (unk_0x5F76836A544DA961(iVar99, iVar0) == 3)
		{
			Global_1626500.f_36282[iVar0 /*107*/].f_102 = unk_0xE00906876D6244A2(iVar99, iVar0);
		}
		else
		{
			Global_1626500.f_36282[iVar0 /*107*/].f_102 = 0f;
		}
		if (unk_0x5F76836A544DA961(iVar100, iVar0) == 3)
		{
			Global_1626500.f_36282[iVar0 /*107*/].f_103 = unk_0xE00906876D6244A2(iVar100, iVar0);
		}
		else
		{
			Global_1626500.f_36282[iVar0 /*107*/].f_103 = 0f;
		}
		if (unk_0x5F76836A544DA961(iVar101, iVar0) == 3)
		{
			Global_1626500.f_36282[iVar0 /*107*/].f_104 = unk_0xE00906876D6244A2(iVar101, iVar0);
		}
		else
		{
			Global_1626500.f_36282[iVar0 /*107*/].f_104 = 0f;
		}
		if (unk_0x5F76836A544DA961(iVar102, iVar0) == 2)
		{
			Global_1626500.f_36282[iVar0 /*107*/].f_105 = unk_0x7A66412A2B47CF10(iVar102, iVar0);
		}
		else
		{
			Global_1626500.f_36282[iVar0 /*107*/].f_105 = -1;
		}
		if ((unk_0x5F76836A544DA961(iVar89, iVar0) == 5 && unk_0x5F76836A544DA961(iVar90, iVar0) == 5) && unk_0x5F76836A544DA961(iVar91, iVar0) == 3)
		{
			Global_1626500.f_36282[iVar0 /*107*/].f_21 = { unk_0x219E9678C4D55F3E(iVar89, iVar0) };
			Global_1626500.f_36282[iVar0 /*107*/].f_24 = { unk_0x219E9678C4D55F3E(iVar90, iVar0) };
			Global_1626500.f_36282[iVar0 /*107*/].f_27 = unk_0xE00906876D6244A2(iVar91, iVar0);
		}
		else
		{
			Global_1626500.f_36282[iVar0 /*107*/].f_21 = { 0f, 0f, 0f };
			Global_1626500.f_36282[iVar0 /*107*/].f_24 = { 0f, 0f, 0f };
			Global_1626500.f_36282[iVar0 /*107*/].f_27 = 1f;
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
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (unk_0xD44C5C9A5AB591EF(iParam0, "cover") == 6)
	{
		iVar1 = unk_0x458C2A004F0678D0(iParam0, "cover");
		Global_1626500.f_41543 = unk_0x9C70ABDC70E0A0CF(iVar1, "no");
		iVar2 = unk_0x94A922605867FB40(iVar1, "loc");
		iVar3 = unk_0x94A922605867FB40(iVar1, "dir");
		iVar4 = unk_0x94A922605867FB40(iVar1, "use");
		iVar5 = unk_0x94A922605867FB40(iVar1, "high");
		iVar6 = unk_0x94A922605867FB40(iVar1, "arc");
		iVar0 = 0;
		while (iVar0 <= (Global_1626500.f_41543 - 1))
		{
			Global_1626500.f_41544[iVar0 /*7*/] = { unk_0x219E9678C4D55F3E(iVar2, iVar0) };
			Global_1626500.f_41544[iVar0 /*7*/].f_3 = unk_0xE00906876D6244A2(iVar3, iVar0);
			Global_1626500.f_41544[iVar0 /*7*/].f_4 = unk_0x7A66412A2B47CF10(iVar4, iVar0);
			Global_1626500.f_41544[iVar0 /*7*/].f_5 = unk_0x7A66412A2B47CF10(iVar5, iVar0);
			Global_1626500.f_41544[iVar0 /*7*/].f_6 = unk_0x7A66412A2B47CF10(iVar6, iVar0);
			iVar0++;
		}
	}
}

void func_196(int iParam0)
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
	
	iVar2 = unk_0x458C2A004F0678D0(iParam0, "door");
	Global_1626500.f_41256 = unk_0x9C70ABDC70E0A0CF(iVar2, "no");
	iVar3 = unk_0x94A922605867FB40(iVar2, "loc");
	iVar4 = unk_0x94A922605867FB40(iVar2, "fopen");
	iVar5 = unk_0x94A922605867FB40(iVar2, "model");
	uVar6 = unk_0x94A922605867FB40(iVar2, "lock");
	uVar7 = unk_0x94A922605867FB40(iVar2, "swing");
	iVar8 = unk_0x94A922605867FB40(iVar2, "udrle");
	iVar9 = unk_0x94A922605867FB40(iVar2, "udtem");
	iVar10 = unk_0x94A922605867FB40(iVar2, "udrat");
	uVar11 = unk_0x94A922605867FB40(iVar2, "swingu");
	iVar12 = unk_0x94A922605867FB40(iVar2, "audst");
	iVar13 = unk_0x94A922605867FB40(iVar2, "aurt");
	iVar14 = unk_0x94A922605867FB40(iVar2, "uaudst");
	iVar15 = unk_0x94A922605867FB40(iVar2, "uaurt");
	uVar16 = unk_0x94A922605867FB40(iVar2, "lfp");
	iVar17 = unk_0x94A922605867FB40(iVar2, "dtime");
	uVar18 = unk_0x94A922605867FB40(iVar2, "mid");
	iVar19 = unk_0x94A922605867FB40(iVar2, "dbs");
	iVar0 = 0;
	while (iVar0 <= (Global_1626500.f_41256 - 1))
	{
		if (iVar0 < 15)
		{
			Global_1626500.f_41257[iVar0 /*19*/] = { unk_0x219E9678C4D55F3E(iVar3, iVar0) };
			Global_1626500.f_41257[iVar0 /*19*/].f_3 = unk_0xE00906876D6244A2(iVar4, iVar0);
			Global_1626500.f_41257[iVar0 /*19*/].f_14 = unk_0xEEF837380BC73B2C(uVar6, iVar0);
			Global_1626500.f_41257[iVar0 /*19*/].f_15 = unk_0xEEF837380BC73B2C(uVar7, iVar0);
			Global_1626500.f_41257[iVar0 /*19*/].f_5 = unk_0x7A66412A2B47CF10(iVar8, iVar0);
			Global_1626500.f_41257[iVar0 /*19*/].f_6 = unk_0x7A66412A2B47CF10(iVar9, iVar0);
			Global_1626500.f_41257[iVar0 /*19*/].f_13 = unk_0xE00906876D6244A2(iVar10, iVar0);
			Global_1626500.f_41257[iVar0 /*19*/].f_16 = unk_0xEEF837380BC73B2C(uVar11, iVar0);
			Global_1626500.f_41257[iVar0 /*19*/].f_8 = unk_0xE00906876D6244A2(iVar13, iVar0);
			Global_1626500.f_41257[iVar0 /*19*/].f_9 = unk_0xE00906876D6244A2(iVar12, iVar0);
			Global_1626500.f_41257[iVar0 /*19*/].f_10 = unk_0xE00906876D6244A2(iVar15, iVar0);
			Global_1626500.f_41257[iVar0 /*19*/].f_11 = unk_0xE00906876D6244A2(iVar14, iVar0);
			Global_1626500.f_41257[iVar0 /*19*/].f_12 = unk_0xEEF837380BC73B2C(uVar16, iVar0);
			Global_1626500.f_41257[iVar0 /*19*/].f_18 = unk_0x7A66412A2B47CF10(iVar19, iVar0);
			iVar1 = unk_0x7A66412A2B47CF10(iVar5, iVar0);
			Global_1626500.f_41257[iVar0 /*19*/].f_4 = iVar1;
			if (unk_0x5F76836A544DA961(iVar17, iVar0) == 2)
			{
				Global_1626500.f_41257[iVar0 /*19*/].f_7 = unk_0x7A66412A2B47CF10(iVar17, iVar0);
			}
			else
			{
				Global_1626500.f_41257[iVar0 /*19*/].f_7 = 0;
			}
			Global_1626500.f_41257[iVar0 /*19*/].f_17 = unk_0xEEF837380BC73B2C(uVar18, iVar0);
		}
		iVar0++;
	}
}

void func_197(int iParam0)
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
	int iVar357;
	int iVar358;
	int iVar359;
	
	iVar0 = unk_0x458C2A004F0678D0(*iParam0, "endcon");
	iVar1 = 0;
	while (iVar1 <= (Global_1626500.f_27 - 1))
	{
		if (iVar1 < 4)
		{
			StringCopy(&cVar3, "sia", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar7[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "stiam", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar12[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "mmiam2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar17[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "sim", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar22[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "mmim", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar27[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "mmi2m", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar32[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "uacp1", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar37[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "uacp2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar42[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "fleer", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar52[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "fleev", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar47[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "rloft", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar57[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "minspd", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar62[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "mspdlp", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar67[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "pribt", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar72[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "bosth", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar77[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "bosti", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar82[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "mspdmx", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar87[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "prmg", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar92[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "traf", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar97[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "pden", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar102[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "dlor", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar107[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "mors", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar112[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "mdmr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar117[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "mwdmr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar122[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "shdtxt", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar127[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "hitsnd", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar132[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "rdel", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar137[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "diagwf", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar142[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "twpptd", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar147[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "mnvhhl", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar152[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "mnvhsi", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar157[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "mnvhsd", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar162[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "blolt", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar167[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "mxhth", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar172[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "cbmanr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar177[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "rgnd", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar182[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "rgnr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar187[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "rgnm", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar192[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "drnn", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar197[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "drnr1", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar202[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "drnr2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar207[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "drnr3", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar212[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "drnr4", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar217[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "drnpl", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar222[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "drnp", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar227[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "drnv", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar232[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "drno", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar237[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "drnRt", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar242[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "grtug", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar247[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "grwep", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar252[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "grclp", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar257[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "grkil", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar262[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "lbred", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar267[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "lbgre", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar272[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "lbblu", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar277[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "bmmxh", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar282[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "bmspm", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar287[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "bmhrgn", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar312[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "bmsjd", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar292[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "bmhok", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar297[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "bmstd", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar302[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "bmmph", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar307[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "itvsd", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar317[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "itved", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar322[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "todh", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar337[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "todm", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar342[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "tods", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar347[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "todsh", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar352[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "armr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar327[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			StringCopy(&cVar3, "bsthr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar332[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar3);
			iVar357 = 0;
			while (iVar357 <= 69)
			{
				if (unk_0x5F76836A544DA961(uVar7[iVar1], iVar357) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_62[iVar357] = unk_0x7A66412A2B47CF10(uVar7[iVar1], iVar357);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_62[iVar357] = 0;
				}
				if (unk_0x5F76836A544DA961(uVar12[iVar1], iVar357) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_210[iVar357] = unk_0x7A66412A2B47CF10(uVar12[iVar1], iVar357);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_210[iVar357] = 0;
				}
				if (unk_0x5F76836A544DA961(uVar17[iVar1], iVar357) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_357[iVar357] = unk_0x7A66412A2B47CF10(uVar17[iVar1], iVar357);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_357[iVar357] = 0;
				}
				if (unk_0x5F76836A544DA961(uVar22[iVar1], iVar357) == 3)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_133[iVar357] = unk_0xE00906876D6244A2(uVar22[iVar1], iVar357);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_133[iVar357] = 1f;
				}
				if (unk_0x5F76836A544DA961(uVar27[iVar1], iVar357) == 3)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_281[iVar357] = unk_0xE00906876D6244A2(uVar27[iVar1], iVar357);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_281[iVar357] = 1f;
				}
				if (unk_0x5F76836A544DA961(uVar32[iVar1], iVar357) == 3)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_428[iVar357] = unk_0xE00906876D6244A2(uVar32[iVar1], iVar357);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_428[iVar357] = 1f;
				}
				iVar357++;
			}
			iVar358 = 0;
			while (iVar358 <= 3)
			{
				if (unk_0x5F76836A544DA961(uVar37[iVar1], iVar358) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_501[iVar358] = unk_0x7A66412A2B47CF10(uVar37[iVar1], iVar358);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_501[iVar358] = -1;
				}
				if (unk_0x5F76836A544DA961(uVar42[iVar1], iVar358) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_506[iVar358] = unk_0x7A66412A2B47CF10(uVar42[iVar1], iVar358);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_506[iVar358] = -1;
				}
				iVar358++;
			}
			iVar2 = 0;
			while (iVar2 <= (Global_1626500.f_89[iVar1 /*7777*/].f_57 - 1))
			{
				if (uVar47[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_2380[iVar2 /*3*/] = { unk_0x219E9678C4D55F3E(uVar47[iVar1], iVar2) };
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_2380[iVar2 /*3*/] = { 0f, 0f, 0f };
				}
				if (uVar52[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_2432[iVar2] = unk_0xE00906876D6244A2(uVar52[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_2432[iVar2] = 0f;
				}
				if (uVar57[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_7507[iVar2] = unk_0x7A66412A2B47CF10(uVar57[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_7507[iVar2] = -1;
				}
				if (unk_0x5F76836A544DA961(uVar62[iVar1], iVar2) == 2 && Global_1626500.f_2 != 6)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_7525[iVar2] = unk_0x7A66412A2B47CF10(uVar62[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_7525[iVar2] = -1;
				}
				if (unk_0x5F76836A544DA961(uVar67[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_7543[iVar2] = unk_0x7A66412A2B47CF10(uVar67[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_7543[iVar2] = 0;
				}
				if (unk_0x5F76836A544DA961(uVar72[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_7723[iVar2] = unk_0x7A66412A2B47CF10(uVar72[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_7723[iVar2] = 0;
				}
				if (unk_0x5F76836A544DA961(uVar77[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_7741[iVar2] = unk_0x7A66412A2B47CF10(uVar77[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_7741[iVar2] = 0;
				}
				if (unk_0x5F76836A544DA961(uVar82[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_7759[iVar2] = unk_0x7A66412A2B47CF10(uVar82[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_7759[iVar2] = 0;
				}
				if (unk_0x5F76836A544DA961(uVar87[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_7561[iVar2] = unk_0x7A66412A2B47CF10(uVar87[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_7561[iVar2] = -1;
				}
				if (unk_0x5F76836A544DA961(uVar92[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_7579[iVar2] = unk_0x7A66412A2B47CF10(uVar92[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_7579[iVar2] = 0;
				}
				if (unk_0x5F76836A544DA961(uVar97[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_7633[iVar2] = unk_0x7A66412A2B47CF10(uVar97[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_7633[iVar2] = -1;
				}
				if (unk_0x5F76836A544DA961(uVar102[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_7651[iVar2] = unk_0x7A66412A2B47CF10(uVar102[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_7651[iVar2] = -1;
				}
				if (unk_0x5F76836A544DA961(uVar107[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3102[iVar2] = unk_0x7A66412A2B47CF10(uVar107[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3102[iVar2] = 0;
				}
				if (unk_0x5F76836A544DA961(uVar112[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3120[iVar2] = unk_0x7A66412A2B47CF10(uVar112[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3120[iVar2] = -1;
				}
				if (unk_0x5F76836A544DA961(uVar117[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3138[iVar2] = unk_0x7A66412A2B47CF10(uVar117[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3138[iVar2] = 10;
				}
				if (unk_0x5F76836A544DA961(uVar122[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3156[iVar2] = unk_0x7A66412A2B47CF10(uVar122[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3156[iVar2] = 10;
				}
				if (unk_0x5F76836A544DA961(uVar127[iVar1], iVar2) == 2)
				{
					iVar359 = unk_0x7A66412A2B47CF10(uVar127[iVar1], iVar2);
					if (iVar359 > 0)
					{
						Global_1626500.f_89[iVar1 /*7777*/].f_7597[iVar2] = iVar359;
					}
					else
					{
						Global_1626500.f_89[iVar1 /*7777*/].f_7597[iVar2] = 0;
					}
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_7597[iVar2] = 0;
				}
				if (uVar132[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_7615[iVar2] = unk_0x7A66412A2B47CF10(uVar132[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_7615[iVar2] = 0;
				}
				if (unk_0x5F76836A544DA961(uVar137[iVar1], iVar2) == 2)
				{
					if (unk_0x7A66412A2B47CF10(uVar137[iVar1], iVar2) > 1)
					{
						Global_1626500.f_89[iVar1 /*7777*/].f_3232[iVar2] = unk_0x7A66412A2B47CF10(uVar137[iVar1], iVar2);
					}
					else
					{
						Global_1626500.f_89[iVar1 /*7777*/].f_3232[iVar2] = 1;
					}
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3232[iVar2] = 1;
				}
				if (unk_0x5F76836A544DA961(uVar142[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_2958[iVar2] = unk_0x7A66412A2B47CF10(uVar142[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_2958[iVar2] = -1;
				}
				if (unk_0x5F76836A544DA961(uVar147[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3030[iVar2] = unk_0x7A66412A2B47CF10(uVar147[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3030[iVar2] = -1;
				}
				if (unk_0x5F76836A544DA961(uVar152[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_2976[iVar2] = unk_0x7A66412A2B47CF10(uVar152[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_2976[iVar2] = -1;
				}
				if (unk_0x5F76836A544DA961(uVar157[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_2994[iVar2] = unk_0x7A66412A2B47CF10(uVar157[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_2994[iVar2] = -1;
				}
				if (unk_0x5F76836A544DA961(uVar162[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3012[iVar2] = unk_0x7A66412A2B47CF10(uVar162[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3012[iVar2] = -1;
				}
				if (unk_0x5F76836A544DA961(uVar167[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3048[iVar2] = unk_0x7A66412A2B47CF10(uVar167[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3048[iVar2] = 4;
				}
				if (unk_0x5F76836A544DA961(uVar172[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3066[iVar2] = unk_0x7A66412A2B47CF10(uVar172[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3066[iVar2] = 0;
				}
				if (unk_0x5F76836A544DA961(uVar177[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3084[iVar2] = unk_0x7A66412A2B47CF10(uVar177[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3084[iVar2] = 0;
				}
				if (unk_0x5F76836A544DA961(uVar182[iVar1], iVar2) == 3)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_2775[iVar2 /*3*/] = unk_0xE00906876D6244A2(uVar182[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_2775[iVar2 /*3*/] = 0f;
				}
				if (unk_0x5F76836A544DA961(uVar187[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_2775[iVar2 /*3*/].f_1 = unk_0x7A66412A2B47CF10(uVar187[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_2775[iVar2 /*3*/].f_1 = 1;
				}
				if (unk_0x5F76836A544DA961(uVar192[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_2775[iVar2 /*3*/].f_2 = unk_0x7A66412A2B47CF10(uVar192[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_2775[iVar2 /*3*/].f_2 = 50;
				}
				if (unk_0x5F76836A544DA961(uVar197[iVar1], iVar2) == 3)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_2587[iVar2 /*11*/] = unk_0xE00906876D6244A2(uVar197[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_2587[iVar2 /*11*/] = 0f;
				}
				if (unk_0x5F76836A544DA961(uVar202[iVar1], iVar2) == 3)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_2587[iVar2 /*11*/].f_1[0] = unk_0xE00906876D6244A2(uVar202[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_2587[iVar2 /*11*/].f_1[0] = 0f;
				}
				if (unk_0x5F76836A544DA961(uVar207[iVar1], iVar2) == 3)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_2587[iVar2 /*11*/].f_1[1] = unk_0xE00906876D6244A2(uVar207[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_2587[iVar2 /*11*/].f_1[1] = 0f;
				}
				if (unk_0x5F76836A544DA961(uVar212[iVar1], iVar2) == 3)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_2587[iVar2 /*11*/].f_1[2] = unk_0xE00906876D6244A2(uVar212[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_2587[iVar2 /*11*/].f_1[2] = 0f;
				}
				if (unk_0x5F76836A544DA961(uVar217[iVar1], iVar2) == 3)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_2587[iVar2 /*11*/].f_1[3] = unk_0xE00906876D6244A2(uVar217[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_2587[iVar2 /*11*/].f_1[3] = 0f;
				}
				if (unk_0x5F76836A544DA961(uVar222[iVar1], iVar2) == 3)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_2587[iVar2 /*11*/].f_6 = unk_0xE00906876D6244A2(uVar222[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_2587[iVar2 /*11*/].f_6 = 0f;
				}
				if (unk_0x5F76836A544DA961(uVar227[iVar1], iVar2) == 3)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_2587[iVar2 /*11*/].f_7 = unk_0xE00906876D6244A2(uVar227[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_2587[iVar2 /*11*/].f_7 = 0f;
				}
				if (unk_0x5F76836A544DA961(uVar232[iVar1], iVar2) == 3)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_2587[iVar2 /*11*/].f_8 = unk_0xE00906876D6244A2(uVar232[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_2587[iVar2 /*11*/].f_8 = 0f;
				}
				if (unk_0x5F76836A544DA961(uVar237[iVar1], iVar2) == 3)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_2587[iVar2 /*11*/].f_9 = unk_0xE00906876D6244A2(uVar237[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_2587[iVar2 /*11*/].f_9 = 0f;
				}
				if (unk_0x5F76836A544DA961(uVar242[iVar1], iVar2) == 3)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_2587[iVar2 /*11*/].f_10 = unk_0xE00906876D6244A2(uVar242[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_2587[iVar2 /*11*/].f_10 = 0f;
				}
				if (unk_0x5F76836A544DA961(uVar247[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_2827[iVar2 /*4*/] = unk_0x7A66412A2B47CF10(uVar247[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_2827[iVar2 /*4*/] = -1;
				}
				if (unk_0x5F76836A544DA961(uVar252[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_2827[iVar2 /*4*/].f_1 = unk_0x7A66412A2B47CF10(uVar252[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_2827[iVar2 /*4*/].f_1 = -1;
				}
				if (unk_0x5F76836A544DA961(uVar257[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_2827[iVar2 /*4*/].f_2 = unk_0x7A66412A2B47CF10(uVar257[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_2827[iVar2 /*4*/].f_2 = 0;
				}
				if (unk_0x5F76836A544DA961(uVar262[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_2827[iVar2 /*4*/].f_3 = unk_0x7A66412A2B47CF10(uVar262[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_2827[iVar2 /*4*/].f_3 = 0;
				}
				if (unk_0x5F76836A544DA961(uVar267[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_2896[iVar2 /*3*/] = unk_0x7A66412A2B47CF10(uVar267[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_2896[iVar2 /*3*/] = 0;
				}
				if (unk_0x5F76836A544DA961(uVar277[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_2896[iVar2 /*3*/].f_2 = unk_0x7A66412A2B47CF10(uVar277[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_2896[iVar2 /*3*/].f_2 = 0;
				}
				if (unk_0x5F76836A544DA961(uVar272[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_2896[iVar2 /*3*/].f_1 = unk_0x7A66412A2B47CF10(uVar272[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_2896[iVar2 /*3*/].f_1 = 0;
				}
				if (unk_0x5F76836A544DA961(uVar337[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_675[iVar2] = unk_0x7A66412A2B47CF10(uVar337[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_675[iVar2] = 12;
				}
				if (unk_0x5F76836A544DA961(uVar342[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_693[iVar2] = unk_0x7A66412A2B47CF10(uVar342[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_693[iVar2] = 0;
				}
				if (unk_0x5F76836A544DA961(uVar347[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_711[iVar2] = unk_0x7A66412A2B47CF10(uVar347[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_711[iVar2] = 0;
				}
				if (unk_0x5F76836A544DA961(uVar352[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_729[iVar2] = unk_0x7A66412A2B47CF10(uVar352[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_729[iVar2] = 0;
				}
				if (unk_0x5F76836A544DA961(uVar282[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_2450[iVar2 /*8*/] = unk_0x7A66412A2B47CF10(uVar282[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_2450[iVar2 /*8*/] = 1000;
				}
				if (unk_0x5F76836A544DA961(uVar287[iVar1], iVar2) == 3)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_2450[iVar2 /*8*/].f_1 = unk_0xE00906876D6244A2(uVar287[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_2450[iVar2 /*8*/].f_1 = 1.15f;
				}
				if (unk_0x5F76836A544DA961(uVar312[iVar1], iVar2) == 3)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_2450[iVar2 /*8*/].f_6 = unk_0xE00906876D6244A2(uVar312[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_2450[iVar2 /*8*/].f_6 = 10f;
				}
				if (unk_0x5F76836A544DA961(uVar292[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_2450[iVar2 /*8*/].f_2 = unk_0x7A66412A2B47CF10(uVar292[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_2450[iVar2 /*8*/].f_2 = 25;
				}
				if (unk_0x5F76836A544DA961(uVar297[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_2450[iVar2 /*8*/].f_7 = unk_0x7A66412A2B47CF10(uVar297[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_2450[iVar2 /*8*/].f_7 = 0;
				}
				if (unk_0x5F76836A544DA961(uVar302[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_2450[iVar2 /*8*/].f_3 = unk_0x7A66412A2B47CF10(uVar302[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_2450[iVar2 /*8*/].f_3 = 1;
				}
				if (unk_0x5F76836A544DA961(uVar307[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_2450[iVar2 /*8*/].f_5 = unk_0x7A66412A2B47CF10(uVar307[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_2450[iVar2 /*8*/].f_5 = 25;
				}
				if (unk_0x5F76836A544DA961(uVar317[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_511[iVar2] = unk_0x7A66412A2B47CF10(uVar317[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_511[iVar2] = 5;
				}
				if (unk_0x5F76836A544DA961(uVar322[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_529[iVar2] = unk_0x7A66412A2B47CF10(uVar322[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_529[iVar2] = 20;
				}
				if (unk_0x5F76836A544DA961(uVar327[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_747[iVar2] = unk_0x7A66412A2B47CF10(uVar327[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_747[iVar2] = 0;
				}
				if (unk_0x5F76836A544DA961(uVar332[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_765[iVar2] = unk_0x7A66412A2B47CF10(uVar332[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_765[iVar2] = -1;
				}
				iVar2++;
			}
		}
		iVar1++;
	}
}

void func_198(int iParam0)
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
	struct<5> Var335;
	var uVar356[4];
	var uVar361[4];
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
	int iVar716;
	int iVar717;
	
	iVar0 = unk_0x458C2A004F0678D0(*iParam0, "endcon");
	Var335 = 4;
	Var335.f_1 = 4;
	Var335.f_1.f_5 = 4;
	Var335.f_1.f_5.f_5 = 4;
	Var335.f_1.f_5.f_5.f_5 = 4;
	iVar1 = 0;
	while (iVar1 <= (Global_1626500.f_27 - 1))
	{
		if (iVar1 < 4)
		{
			StringCopy(&cVar4, "tmt", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar15[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "sudtm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar20[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "tms", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar25[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "txt", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar30[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "tak", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar35[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "cap", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar40[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "lnkdr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar45[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "lnkdr2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar50[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "hscr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar55[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "rsiv", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar60[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "wprs", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar65[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "wfrc", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar75[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "wchg", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar70[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "fkwl", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar80[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "wdly", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar85[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "ttlc", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar90[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "swtod", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar95[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "swtok", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar100[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "fsdtmr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar300[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "mpftmr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar295[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "artlit", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar105[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "mrtl", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar110[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "bmbtm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar115[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "gpsdp", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar120[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "dcont", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar125[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "critw", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar130[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "diswp", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar135[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "frndf", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar140[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "dsosui", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar145[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "dpos", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar150[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "txt1", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar155[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "dpos2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar160[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "dpost", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar165[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "dotim", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar170[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "dov", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar175[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "dost", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar180[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "dops", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar185[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "pl2an", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar190[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "lvbs", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar195[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "ovwty", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar200[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "ovwid", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar205[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "wldbs", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar210[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "drpr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar215[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "gbtp", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar220[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "irbs", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar225[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "irbs2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar230[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "irbs3", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar235[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "irbs4", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar240[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "irbs5", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar245[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "irbs6", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar250[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "irbs7", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar255[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "irfbs", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar260[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "plvrl", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar265[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "bdprt", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar325[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "bdpst", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar330[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			bVar8 = false;
			bVar9 = false;
			bVar10 = false;
			bVar11 = false;
			bVar12 = false;
			bVar13 = false;
			bVar14 = false;
			StringCopy(&cVar4, "opl0", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar4) == 7)
			{
				bVar8 = true;
				uVar270[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			}
			StringCopy(&cVar4, "opl1", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar4) == 7)
			{
				bVar9 = true;
				uVar275[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			}
			StringCopy(&cVar4, "opl2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar4) == 7)
			{
				bVar10 = true;
				uVar280[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			}
			StringCopy(&cVar4, "opl3", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar4) == 7)
			{
				bVar11 = true;
				uVar285[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			}
			StringCopy(&cVar4, "oplbs", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar290[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "mpot0", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar4) == 7)
			{
				bVar12 = true;
				uVar305[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			}
			StringCopy(&cVar4, "mpot1", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar4) == 7)
			{
				bVar13 = true;
				uVar310[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			}
			StringCopy(&cVar4, "mpot2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar4) == 7)
			{
				bVar14 = true;
				uVar315[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			}
			StringCopy(&cVar4, "rnrbs", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar320[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "gbnum", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar366[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "gbngn", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar371[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "gblgn", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar376[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "gbcol", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar381[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "gbdel", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar386[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "mcstr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar391[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "mcsrm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar396[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "mcmp", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar411[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "aumx", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar401[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "mpaumx", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar406[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "filtlh", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar416[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "gbmax", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar421[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "gbngm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar426[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "gblgm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar431[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "gbvhl", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar436[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "gbaie", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar361[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "gacc", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar441[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "gfld", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar446[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "gbat", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar451[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "gbv1", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar456[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "gbv2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar461[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "gbaw", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar466[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "gbfnr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar471[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "txt2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar476[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "txt3", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar481[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "txt4", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar486[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "txt5", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar491[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "fail", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar496[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "bfm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar511[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "wwm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar501[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "vss", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar506[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "tsc", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar516[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "mcry", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar521[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "destv", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar526[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "destr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar531[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "destv1", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar536[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "destv2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar541[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "destw", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar546[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "bd2t", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar641[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "bd2v", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar646[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "bd2v1", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar651[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "bd2v2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar656[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "bd2r", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar661[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "bd2w", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar666[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "out2wg", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar676[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "out2iv", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar681[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "out2io", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar686[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "out2bs", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar691[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "out2mm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar696[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "out2fp", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar701[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "out2et", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar706[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "out2id", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar711[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "out2hv", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar671[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "outbt", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar551[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "outb", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar556[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "outr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar561[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "outhv", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar581[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "outb1v", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar566[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "outb2v", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar571[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "outw", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar576[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "outwtg", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar586[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "outiwv", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar591[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "outiwo", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar596[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "outbs", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar601[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "outclo", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar611[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "outclr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar616[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "outclp", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar621[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "outmm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar606[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "outfp", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar626[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "outety", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar631[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			StringCopy(&cVar4, "outeid", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar636[iVar1] = unk_0x94A922605867FB40(iVar0, &cVar4);
			iVar3 = 0;
			while (iVar3 <= 3)
			{
				StringCopy(&cVar4, "rlbs", 16);
				StringIntConCat(&cVar4, iVar1, 16);
				StringConCat(&cVar4, "-", 16);
				StringIntConCat(&cVar4, iVar3, 16);
				Var335[iVar1 /*5*/][iVar3] = unk_0x94A922605867FB40(iVar0, &cVar4);
				StringCopy(&cVar4, "rlnm", 16);
				StringIntConCat(&cVar4, iVar3, 16);
				uVar356[iVar3] = unk_0x94A922605867FB40(iVar0, &cVar4);
				iVar3++;
			}
			iVar716 = unk_0x94A922605867FB40(iVar0, "tlimt");
			iVar2 = 0;
			while (iVar2 <= (Global_1626500.f_89[iVar1 /*7777*/].f_57 - 1))
			{
				if (uVar15[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_603[iVar2] = unk_0x7A66412A2B47CF10(uVar15[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_603[iVar2] = 0;
				}
				if (unk_0x5F76836A544DA961(uVar20[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_621[iVar2] = unk_0x7A66412A2B47CF10(uVar20[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_621[iVar2] = 0;
				}
				if (uVar25[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3178[iVar2] = unk_0x7A66412A2B47CF10(uVar25[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3178[iVar2] = 0;
				}
				if (uVar35[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3250[iVar2] = unk_0x7A66412A2B47CF10(uVar35[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3250[iVar2] = 0;
				}
				if (uVar40[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3268[iVar2] = unk_0x7A66412A2B47CF10(uVar40[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3268[iVar2] = 0;
				}
				if (uVar30[iVar1] != 0)
				{
					StringCopy(&(Global_1626500.f_89[iVar1 /*7777*/].f_4499[iVar2 /*16*/]), unk_0xFC74DD7217B3E5DB(uVar30[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_1626500.f_89[iVar1 /*7777*/].f_4499[iVar2 /*16*/]), "", 64);
				}
				if (uVar45[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_547[iVar2] = unk_0x7A66412A2B47CF10(uVar45[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_547[iVar2] = 0;
				}
				if (uVar50[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_565[iVar2] = unk_0x7A66412A2B47CF10(uVar50[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_565[iVar2] = 0;
				}
				if (Global_1626500.f_89[iVar1 /*7777*/].f_565[iVar2] == 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_565[iVar2] = -1;
				}
				if (uVar55[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_585[iVar2] = unk_0x7A66412A2B47CF10(uVar55[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_585[iVar2] = 0;
				}
				if (uVar75[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3304[iVar2] = unk_0x7A66412A2B47CF10(uVar75[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3304[iVar2] = 0;
				}
				if (uVar70[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3286[iVar2] = unk_0x7A66412A2B47CF10(uVar70[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3286[iVar2] = 0;
				}
				if (uVar80[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3326[iVar2] = unk_0x7A66412A2B47CF10(uVar80[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3326[iVar2] = 0;
				}
				if (unk_0x5F76836A544DA961(uVar85[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3346[iVar2] = unk_0x7A66412A2B47CF10(uVar85[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3346[iVar2] = 10000;
				}
				if (unk_0x5F76836A544DA961(uVar90[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3382[iVar2] = unk_0x7A66412A2B47CF10(uVar90[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3382[iVar2] = -1;
				}
				if (uVar60[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_783[iVar2] = unk_0x7A66412A2B47CF10(uVar60[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_783[iVar2] = 0;
				}
				if (uVar65[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_801[iVar2] = unk_0x7A66412A2B47CF10(uVar65[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_801[iVar2] = 0;
				}
				if (uVar140[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_855[iVar2] = unk_0x7A66412A2B47CF10(uVar140[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_855[iVar2] = 0;
				}
				if (uVar145[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_873[iVar2] = unk_0x7A66412A2B47CF10(uVar145[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_873[iVar2] = 0;
				}
				if (uVar95[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_819[iVar2] = unk_0x7A66412A2B47CF10(uVar95[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_819[iVar2] = -1;
				}
				if (uVar100[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_837[iVar2] = unk_0x7A66412A2B47CF10(uVar100[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_837[iVar2] = -1;
				}
				if (unk_0x5F76836A544DA961(uVar110[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3364[iVar2] = unk_0x7A66412A2B47CF10(uVar110[iVar1], iVar2);
				}
				else if (unk_0x5F76836A544DA961(iVar716, iVar1) == 2 && iVar716 != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3364[iVar2] = unk_0x7A66412A2B47CF10(iVar716, iVar1);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3364[iVar2] = 0;
				}
				if (unk_0x5F76836A544DA961(uVar105[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_909[iVar2] = unk_0x7A66412A2B47CF10(uVar105[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_909[iVar2] = -1;
				}
				if (unk_0x5F76836A544DA961(uVar300[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_657[iVar2] = unk_0x7A66412A2B47CF10(uVar300[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_657[iVar2] = 0;
				}
				if (unk_0x5F76836A544DA961(uVar295[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_639[iVar2] = unk_0x7A66412A2B47CF10(uVar295[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_639[iVar2] = 0;
				}
				if (uVar115[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_891[iVar2] = unk_0x7A66412A2B47CF10(uVar115[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_891[iVar2] = 0;
				}
				if (uVar120[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_927[iVar2] = unk_0x7A66412A2B47CF10(uVar120[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_927[iVar2] = 0;
				}
				if (uVar125[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_7453[iVar2] = unk_0x7A66412A2B47CF10(uVar125[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_7453[iVar2] = 0;
				}
				if (uVar130[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_7471[iVar2] = unk_0x7A66412A2B47CF10(uVar130[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_7471[iVar2] = 0;
				}
				if (unk_0x5F76836A544DA961(uVar135[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_7489[iVar2] = unk_0x7A66412A2B47CF10(uVar135[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_7489[iVar2] = 0;
				}
				if (uVar150[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3793[iVar2 /*3*/] = { unk_0x219E9678C4D55F3E(uVar150[iVar1], iVar2) };
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3793[iVar2 /*3*/] = { 0f, 0f, 0f };
				}
				if (!func_172())
				{
					if (uVar155[iVar1] != 0)
					{
						StringCopy(&(Global_1626500.f_89[iVar1 /*7777*/].f_4772[iVar2 /*16*/]), unk_0xFC74DD7217B3E5DB(uVar155[iVar1], iVar2), 64);
					}
					else
					{
						StringCopy(&(Global_1626500.f_89[iVar1 /*7777*/].f_4772[iVar2 /*16*/]), "", 64);
					}
				}
				if (uVar160[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3845[iVar2 /*3*/] = { unk_0x219E9678C4D55F3E(uVar160[iVar1], iVar2) };
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3845[iVar2 /*3*/] = { 0f, 0f, 0f };
				}
				if (uVar165[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3915[iVar2] = unk_0x7A66412A2B47CF10(uVar165[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3915[iVar2] = 0;
				}
				if (unk_0x5F76836A544DA961(uVar170[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3951[iVar2] = unk_0x7A66412A2B47CF10(uVar170[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3951[iVar2] = 0;
				}
				if (uVar220[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3400[iVar2] = unk_0x7A66412A2B47CF10(uVar220[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3400[iVar2] = 0;
				}
				if (uVar215[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3897[iVar2] = unk_0xE00906876D6244A2(uVar215[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3897[iVar2] = 0f;
				}
				if (uVar225[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_4151[iVar2] = unk_0x7A66412A2B47CF10(uVar225[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_4151[iVar2] = 0;
				}
				if (uVar230[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_4169[iVar2] = unk_0x7A66412A2B47CF10(uVar230[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_4169[iVar2] = 0;
				}
				if (uVar235[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_4187[iVar2] = unk_0x7A66412A2B47CF10(uVar235[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_4187[iVar2] = 0;
				}
				if (unk_0x5F76836A544DA961(uVar240[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_4205[iVar2] = unk_0x7A66412A2B47CF10(uVar240[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_4205[iVar2] = 0;
				}
				if (unk_0x5F76836A544DA961(uVar245[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_4223[iVar2] = unk_0x7A66412A2B47CF10(uVar245[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_4223[iVar2] = 0;
				}
				if (unk_0x5F76836A544DA961(uVar250[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_4241[iVar2] = unk_0x7A66412A2B47CF10(uVar250[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_4241[iVar2] = 0;
				}
				if (unk_0x5F76836A544DA961(uVar255[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_4259[iVar2] = unk_0x7A66412A2B47CF10(uVar255[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_4259[iVar2] = 0;
				}
				if (unk_0x5F76836A544DA961(uVar260[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_4277[iVar2] = unk_0x7A66412A2B47CF10(uVar260[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_4277[iVar2] = 0;
				}
				if (unk_0x5F76836A544DA961(uVar265[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_37[iVar2] = unk_0x7A66412A2B47CF10(uVar265[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_37[iVar2] = -1;
				}
				iVar3 = 0;
				while (iVar3 <= 3)
				{
					if (unk_0x5F76836A544DA961(Var335[iVar1 /*5*/][iVar3], iVar2) == 2)
					{
						Global_1626500.f_89[iVar1 /*7777*/].f_4333[iVar2 /*5*/][iVar3] = unk_0x7A66412A2B47CF10(Var335[iVar1 /*5*/][iVar3], iVar2);
					}
					else
					{
						Global_1626500.f_89[iVar1 /*7777*/].f_4333[iVar2 /*5*/][iVar3] = 0;
					}
					if (unk_0x5F76836A544DA961(uVar356[iVar3], 0) == 4)
					{
						StringCopy(&(Global_1626500.f_89[iVar1 /*7777*/].f_4419[iVar3 /*16*/]), unk_0xFC74DD7217B3E5DB(uVar356[iVar3], 0), 64);
					}
					else
					{
						StringCopy(&(Global_1626500.f_89[iVar1 /*7777*/].f_4419[iVar3 /*16*/]), "", 64);
					}
					iVar3++;
				}
				if (unk_0x5F76836A544DA961(uVar325[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_4297[iVar2] = unk_0x7A66412A2B47CF10(uVar325[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_4297[iVar2] = Global_1626500.f_89[iVar1 /*7777*/].f_2950;
				}
				if (unk_0x5F76836A544DA961(uVar330[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_4315[iVar2] = unk_0x7A66412A2B47CF10(uVar330[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_4315[iVar2] = Global_1626500.f_89[iVar1 /*7777*/].f_3176;
				}
				if (bVar8)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_7262[iVar2 /*5*/][0] = unk_0x7A66412A2B47CF10(uVar270[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_7262[iVar2 /*5*/][0] = -1;
				}
				if (bVar9)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_7262[iVar2 /*5*/][1] = unk_0x7A66412A2B47CF10(uVar275[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_7262[iVar2 /*5*/][1] = -1;
				}
				if (bVar10)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_7262[iVar2 /*5*/][2] = unk_0x7A66412A2B47CF10(uVar280[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_7262[iVar2 /*5*/][2] = -1;
				}
				if (bVar11)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_7262[iVar2 /*5*/][3] = unk_0x7A66412A2B47CF10(uVar285[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_7262[iVar2 /*5*/][3] = -1;
				}
				if (bVar12)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_7366[iVar2 /*4*/][0] = unk_0x7A66412A2B47CF10(uVar305[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_7366[iVar2 /*4*/][0] = -1;
				}
				if (bVar13)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_7366[iVar2 /*4*/][1] = unk_0x7A66412A2B47CF10(uVar310[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_7366[iVar2 /*4*/][1] = -1;
				}
				if (bVar14)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_7366[iVar2 /*4*/][2] = unk_0x7A66412A2B47CF10(uVar315[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_7366[iVar2 /*4*/][2] = -1;
				}
				if (unk_0x5F76836A544DA961(uVar320[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_7435[iVar2] = unk_0x7A66412A2B47CF10(uVar320[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_7435[iVar2] = 0;
				}
				iVar717 = Global_1626500.f_89[iVar1 /*7777*/].f_57;
				while (iVar717 <= 31)
				{
					if (unk_0x08BA6DD398CA197C(Global_1626500.f_89[iVar1 /*7777*/].f_7435[iVar2], iVar717))
					{
						unk_0x09C86C0C5CA26B1E(&(Global_1626500.f_89[iVar1 /*7777*/].f_7435[iVar2]), iVar717);
					}
					iVar717++;
				}
				if (unk_0x5F76836A544DA961(uVar175[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3933[iVar2] = unk_0x7A66412A2B47CF10(uVar175[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3933[iVar2] = -1;
				}
				if (unk_0x5F76836A544DA961(uVar180[iVar1], iVar2) == 3)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3969[iVar2] = unk_0xE00906876D6244A2(uVar180[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3969[iVar2] = -1f;
				}
				if (unk_0x5F76836A544DA961(uVar185[iVar1], iVar2) == 3)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3987[iVar2] = unk_0xE00906876D6244A2(uVar185[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3987[iVar2] = -1f;
				}
				if (unk_0x5F76836A544DA961(uVar190[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_4025[iVar2] = unk_0x7A66412A2B47CF10(uVar190[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_4025[iVar2] = 0;
				}
				if (unk_0x5F76836A544DA961(uVar195[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_4007[iVar2] = unk_0x7A66412A2B47CF10(uVar195[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_4007[iVar2] = 0;
				}
				if (unk_0x5F76836A544DA961(uVar200[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_7669[iVar2] = unk_0x7A66412A2B47CF10(uVar200[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_7669[iVar2] = 0;
				}
				if (unk_0x5F76836A544DA961(uVar205[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_7687[iVar2] = unk_0x7A66412A2B47CF10(uVar205[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_7687[iVar2] = -1;
				}
				if (unk_0x5F76836A544DA961(uVar210[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_7705[iVar2] = unk_0x7A66412A2B47CF10(uVar210[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_7705[iVar2] = 0;
				}
				if (uVar290[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_7348[iVar2] = unk_0x7A66412A2B47CF10(uVar290[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_7348[iVar2] = 0;
				}
				if (uVar366[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3419[iVar2] = unk_0x7A66412A2B47CF10(uVar366[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3419[iVar2] = 0;
				}
				if (unk_0x5F76836A544DA961(uVar371[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3703[iVar2] = unk_0x7A66412A2B47CF10(uVar371[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3703[iVar2] = 0;
				}
				if (unk_0x5F76836A544DA961(uVar376[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3739[iVar2] = unk_0x7A66412A2B47CF10(uVar376[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3739[iVar2] = 0;
				}
				if (uVar381[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3455[iVar2] = unk_0x7A66412A2B47CF10(uVar381[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3455[iVar2] = 0;
				}
				if (uVar386[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3437[iVar2] = unk_0x7A66412A2B47CF10(uVar386[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3437[iVar2] = 0;
				}
				if (uVar391[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_4043[iVar2] = unk_0x7A66412A2B47CF10(uVar391[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_4043[iVar2] = 0;
				}
				if (uVar396[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_4115[iVar2] = unk_0x7A66412A2B47CF10(uVar396[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_4115[iVar2] = -1;
				}
				if (uVar401[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_4079[iVar2] = unk_0x7A66412A2B47CF10(uVar401[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_4079[iVar2] = 0;
				}
				if (uVar406[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_4097[iVar2] = unk_0x7A66412A2B47CF10(uVar406[iVar1], iVar2);
				}
				else if (Global_1626500.f_89[iVar1 /*7777*/].f_4079[iVar2] != 0 && unk_0x08BA6DD398CA197C(Global_1626500.f_89[iVar1 /*7777*/].f_4187[iVar2], 8))
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_4097[iVar2] = Global_1626500.f_89[iVar1 /*7777*/].f_4079[iVar2];
					Global_1626500.f_89[iVar1 /*7777*/].f_4079[iVar2] = 0;
					unk_0x09C86C0C5CA26B1E(&(Global_1626500.f_89[iVar1 /*7777*/].f_4187[iVar2]), 8);
				}
				if (uVar411[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_4061[iVar2] = unk_0x7A66412A2B47CF10(uVar411[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_4061[iVar2] = 0;
				}
				if (uVar416[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_4133[iVar2] = unk_0x7A66412A2B47CF10(uVar416[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_4133[iVar2] = 0;
				}
				if (uVar421[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3595[iVar2] = unk_0x7A66412A2B47CF10(uVar421[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3595[iVar2] = 0;
				}
				if (unk_0x5F76836A544DA961(uVar426[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3721[iVar2] = unk_0x7A66412A2B47CF10(uVar426[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3721[iVar2] = 0;
				}
				if (unk_0x5F76836A544DA961(uVar431[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3757[iVar2] = unk_0x7A66412A2B47CF10(uVar431[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3757[iVar2] = 0;
				}
				if (unk_0x5F76836A544DA961(uVar471[iVar1], iVar2) == 3)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3775[iVar2] = unk_0xE00906876D6244A2(uVar471[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3775[iVar2] = -1f;
				}
				if (uVar361[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3685[iVar2] = unk_0x7A66412A2B47CF10(uVar361[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3685[iVar2] = 0;
				}
				if (uVar436[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3613[iVar2] = unk_0x7A66412A2B47CF10(uVar436[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3613[iVar2] = 100;
				}
				if (uVar441[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3649[iVar2] = unk_0x7A66412A2B47CF10(uVar441[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3649[iVar2] = 0;
				}
				if (uVar446[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3667[iVar2] = unk_0x7A66412A2B47CF10(uVar446[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3667[iVar2] = 0;
				}
				if (uVar451[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3631[iVar2] = unk_0x7A66412A2B47CF10(uVar451[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3631[iVar2] = 0;
				}
				if (uVar456[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3473[iVar2 /*3*/] = { unk_0x219E9678C4D55F3E(uVar456[iVar1], iVar2) };
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3473[iVar2 /*3*/] = { 0f, 0f, 0f };
				}
				if (uVar461[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3525[iVar2 /*3*/] = { unk_0x219E9678C4D55F3E(uVar461[iVar1], iVar2) };
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3525[iVar2 /*3*/] = { 0f, 0f, 0f };
				}
				if (uVar466[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3577[iVar2] = unk_0xE00906876D6244A2(uVar466[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3577[iVar2] = 0f;
				}
				if (uVar476[iVar1] != 0)
				{
					StringCopy(&(Global_1626500.f_89[iVar1 /*7777*/].f_5045[iVar2 /*16*/]), unk_0xFC74DD7217B3E5DB(uVar476[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_1626500.f_89[iVar1 /*7777*/].f_5045[iVar2 /*16*/]), "", 64);
				}
				if (!func_172())
				{
					if (uVar481[iVar1] != 0)
					{
						StringCopy(&(Global_1626500.f_89[iVar1 /*7777*/].f_5864[iVar2 /*16*/]), unk_0xFC74DD7217B3E5DB(uVar481[iVar1], iVar2), 64);
					}
					else
					{
						StringCopy(&(Global_1626500.f_89[iVar1 /*7777*/].f_5864[iVar2 /*16*/]), "", 64);
					}
					if (uVar486[iVar1] != 0)
					{
						StringCopy(&(Global_1626500.f_89[iVar1 /*7777*/].f_5318[iVar2 /*16*/]), unk_0xFC74DD7217B3E5DB(uVar486[iVar1], iVar2), 64);
					}
					else
					{
						StringCopy(&(Global_1626500.f_89[iVar1 /*7777*/].f_5318[iVar2 /*16*/]), "", 64);
					}
					if (uVar491[iVar1] != 0)
					{
						StringCopy(&(Global_1626500.f_89[iVar1 /*7777*/].f_5591[iVar2 /*16*/]), unk_0xFC74DD7217B3E5DB(uVar491[iVar1], iVar2), 64);
					}
					else
					{
						StringCopy(&(Global_1626500.f_89[iVar1 /*7777*/].f_5591[iVar2 /*16*/]), "", 64);
					}
				}
				if (uVar496[iVar1] != 0)
				{
					StringCopy(&(Global_1626500.f_89[iVar1 /*7777*/].f_6137[iVar2 /*16*/]), unk_0xFC74DD7217B3E5DB(uVar496[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_1626500.f_89[iVar1 /*7777*/].f_6137[iVar2 /*16*/]), "", 64);
				}
				if (uVar511[iVar1] != 0)
				{
					StringCopy(&(Global_1626500.f_89[iVar1 /*7777*/].f_6410[iVar2 /*16*/]), unk_0xFC74DD7217B3E5DB(uVar511[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_1626500.f_89[iVar1 /*7777*/].f_6410[iVar2 /*16*/]), "", 64);
				}
				if (uVar501[iVar1] != 0)
				{
					StringCopy(&(Global_1626500.f_89[iVar1 /*7777*/].f_6683[iVar2 /*16*/]), unk_0xFC74DD7217B3E5DB(uVar501[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_1626500.f_89[iVar1 /*7777*/].f_6683[iVar2 /*16*/]), "", 64);
				}
				if (uVar506[iVar1] != 0)
				{
					StringCopy(&(Global_1626500.f_89[iVar1 /*7777*/].f_6956[iVar2 /*16*/]), unk_0xFC74DD7217B3E5DB(uVar506[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_1626500.f_89[iVar1 /*7777*/].f_6956[iVar2 /*16*/]), "", 64);
				}
				if (uVar516[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3196[iVar2] = unk_0x7A66412A2B47CF10(uVar516[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3196[iVar2] = 0;
				}
				if (uVar521[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3214[iVar2] = unk_0x7A66412A2B47CF10(uVar521[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_3214[iVar2] = 0;
				}
				if (uVar566[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_949[iVar2 /*28*/].f_3 = { unk_0x219E9678C4D55F3E(uVar566[iVar1], iVar2) };
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_949[iVar2 /*28*/].f_3 = { 0f, 0f, 0f };
				}
				if (uVar571[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_949[iVar2 /*28*/].f_6 = { unk_0x219E9678C4D55F3E(uVar571[iVar1], iVar2) };
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_949[iVar2 /*28*/].f_6 = { 0f, 0f, 0f };
				}
				if (uVar576[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_949[iVar2 /*28*/].f_10 = unk_0xE00906876D6244A2(uVar576[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_949[iVar2 /*28*/].f_10 = 0f;
				}
				if (uVar581[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_949[iVar2 /*28*/].f_13 = { unk_0x219E9678C4D55F3E(uVar581[iVar1], iVar2) };
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_949[iVar2 /*28*/].f_13 = { 0f, 0f, 0f };
				}
				if (uVar556[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_949[iVar2 /*28*/] = { unk_0x219E9678C4D55F3E(uVar556[iVar1], iVar2) };
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_949[iVar2 /*28*/] = { 0f, 0f, 0f };
				}
				if (unk_0x5F76836A544DA961(uVar561[iVar1], iVar2) == 3)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_949[iVar2 /*28*/].f_9 = unk_0xE00906876D6244A2(uVar561[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_949[iVar2 /*28*/].f_9 = 0f;
				}
				if (uVar551[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_949[iVar2 /*28*/].f_16 = unk_0x7A66412A2B47CF10(uVar551[iVar1], iVar2);
				}
				if (uVar671[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_1426[iVar2 /*28*/].f_13 = { unk_0x219E9678C4D55F3E(uVar671[iVar1], iVar2) };
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_1426[iVar2 /*28*/].f_13 = { 0f, 0f, 0f };
				}
				if (uVar646[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_1426[iVar2 /*28*/] = { unk_0x219E9678C4D55F3E(uVar646[iVar1], iVar2) };
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_1426[iVar2 /*28*/] = { 0f, 0f, 0f };
				}
				if (uVar656[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_1426[iVar2 /*28*/].f_3 = { unk_0x219E9678C4D55F3E(uVar656[iVar1], iVar2) };
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_1426[iVar2 /*28*/].f_3 = { 0f, 0f, 0f };
				}
				if (uVar651[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_1426[iVar2 /*28*/].f_6 = { unk_0x219E9678C4D55F3E(uVar651[iVar1], iVar2) };
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_1426[iVar2 /*28*/].f_6 = { 0f, 0f, 0f };
				}
				if (uVar666[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_1426[iVar2 /*28*/].f_10 = unk_0xE00906876D6244A2(uVar666[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_1426[iVar2 /*28*/].f_10 = 0f;
				}
				if (unk_0x5F76836A544DA961(uVar661[iVar1], iVar2) == 3)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_1426[iVar2 /*28*/].f_9 = unk_0xE00906876D6244A2(uVar661[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_1426[iVar2 /*28*/].f_9 = 0f;
				}
				if (uVar641[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_1426[iVar2 /*28*/].f_16 = unk_0x7A66412A2B47CF10(uVar641[iVar1], iVar2);
				}
				if (uVar536[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_1903[iVar2 /*28*/].f_3 = { unk_0x219E9678C4D55F3E(uVar536[iVar1], iVar2) };
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_1903[iVar2 /*28*/].f_3 = { 0f, 0f, 0f };
				}
				if (uVar541[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_1903[iVar2 /*28*/].f_6 = { unk_0x219E9678C4D55F3E(uVar541[iVar1], iVar2) };
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_1903[iVar2 /*28*/].f_6 = { 0f, 0f, 0f };
				}
				if (uVar546[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_1903[iVar2 /*28*/].f_10 = unk_0xE00906876D6244A2(uVar546[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_1903[iVar2 /*28*/].f_10 = 0f;
				}
				if (uVar526[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_1903[iVar2 /*28*/] = { unk_0x219E9678C4D55F3E(uVar526[iVar1], iVar2) };
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_1903[iVar2 /*28*/] = { 0f, 0f, 0f };
				}
				if (uVar531[iVar1] != 0)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_1903[iVar2 /*28*/].f_9 = unk_0xE00906876D6244A2(uVar531[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_1903[iVar2 /*28*/].f_9 = 0f;
				}
				if (unk_0x5F76836A544DA961(uVar586[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_949[iVar2 /*28*/].f_19 = unk_0x7A66412A2B47CF10(uVar586[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_949[iVar2 /*28*/].f_19 = -1;
				}
				if (unk_0x5F76836A544DA961(uVar591[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_949[iVar2 /*28*/].f_17 = unk_0x7A66412A2B47CF10(uVar591[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_949[iVar2 /*28*/].f_17 = 0;
				}
				if (unk_0x5F76836A544DA961(uVar596[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_949[iVar2 /*28*/].f_18 = unk_0x7A66412A2B47CF10(uVar596[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_949[iVar2 /*28*/].f_18 = -1;
				}
				if (unk_0x5F76836A544DA961(uVar601[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_949[iVar2 /*28*/].f_20 = unk_0x7A66412A2B47CF10(uVar601[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_949[iVar2 /*28*/].f_20 = 0;
				}
				if (unk_0x5F76836A544DA961(uVar606[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_949[iVar2 /*28*/].f_23 = unk_0x7A66412A2B47CF10(uVar606[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_949[iVar2 /*28*/].f_23 = 120;
				}
				if (unk_0x5F76836A544DA961(uVar611[iVar1], iVar2) == 3)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_949[iVar2 /*28*/].f_24 = unk_0xE00906876D6244A2(uVar611[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_949[iVar2 /*28*/].f_24 = 5f;
				}
				if (unk_0x5F76836A544DA961(uVar616[iVar1], iVar2) == 3)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_949[iVar2 /*28*/].f_25 = unk_0xE00906876D6244A2(uVar616[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_949[iVar2 /*28*/].f_25 = 10f;
				}
				if (unk_0x5F76836A544DA961(uVar621[iVar1], iVar2) == 3)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_949[iVar2 /*28*/].f_26 = unk_0xE00906876D6244A2(uVar621[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_949[iVar2 /*28*/].f_26 = 30f;
				}
				if (unk_0x5F76836A544DA961(uVar626[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_949[iVar2 /*28*/].f_27 = unk_0x7A66412A2B47CF10(uVar626[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_949[iVar2 /*28*/].f_27 = 0;
				}
				if (unk_0x5F76836A544DA961(uVar631[iVar1], iVar2) == 2 && unk_0x5F76836A544DA961(uVar636[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_949[iVar2 /*28*/].f_21 = unk_0x7A66412A2B47CF10(uVar631[iVar1], iVar2);
					Global_1626500.f_89[iVar1 /*7777*/].f_949[iVar2 /*28*/].f_22 = unk_0x7A66412A2B47CF10(uVar636[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_949[iVar2 /*28*/].f_21 = 0;
					Global_1626500.f_89[iVar1 /*7777*/].f_949[iVar2 /*28*/].f_22 = -1;
				}
				if (unk_0x5F76836A544DA961(uVar676[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_1426[iVar2 /*28*/].f_19 = unk_0x7A66412A2B47CF10(uVar676[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_1426[iVar2 /*28*/].f_19 = -1;
				}
				if (unk_0x5F76836A544DA961(uVar681[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_1426[iVar2 /*28*/].f_17 = unk_0x7A66412A2B47CF10(uVar681[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_1426[iVar2 /*28*/].f_17 = 0;
				}
				if (unk_0x5F76836A544DA961(uVar686[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_1426[iVar2 /*28*/].f_18 = unk_0x7A66412A2B47CF10(uVar686[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_1426[iVar2 /*28*/].f_18 = -1;
				}
				if (unk_0x5F76836A544DA961(uVar691[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_1426[iVar2 /*28*/].f_20 = unk_0x7A66412A2B47CF10(uVar691[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_1426[iVar2 /*28*/].f_20 = 0;
				}
				if (unk_0x5F76836A544DA961(uVar696[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_1426[iVar2 /*28*/].f_23 = unk_0x7A66412A2B47CF10(uVar696[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_1426[iVar2 /*28*/].f_23 = 120;
				}
				if (unk_0x5F76836A544DA961(uVar701[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_1426[iVar2 /*28*/].f_27 = unk_0x7A66412A2B47CF10(uVar701[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_1426[iVar2 /*28*/].f_27 = 0;
				}
				if (unk_0x5F76836A544DA961(uVar706[iVar1], iVar2) == 2 && unk_0x5F76836A544DA961(uVar711[iVar1], iVar2) == 2)
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_1426[iVar2 /*28*/].f_21 = unk_0x7A66412A2B47CF10(uVar706[iVar1], iVar2);
					Global_1626500.f_89[iVar1 /*7777*/].f_1426[iVar2 /*28*/].f_22 = unk_0x7A66412A2B47CF10(uVar711[iVar1], iVar2);
				}
				else
				{
					Global_1626500.f_89[iVar1 /*7777*/].f_1426[iVar2 /*28*/].f_21 = 0;
					Global_1626500.f_89[iVar1 /*7777*/].f_1426[iVar2 /*28*/].f_22 = -1;
				}
				iVar2++;
			}
		}
		iVar1++;
	}
}

void func_199(int iParam0)
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
	var uVar54[10];
	
	iVar0 = unk_0x458C2A004F0678D0(*iParam0, "endcon");
	iVar3 = unk_0x94A922605867FB40(iVar0, "numpt");
	iVar4 = unk_0x94A922605867FB40(iVar0, "ptint");
	iVar5 = unk_0x94A922605867FB40(iVar0, "pptint");
	bVar7 = true;
	if (unk_0xD44C5C9A5AB591EF(iVar0, "mnumpt") != 2)
	{
		bVar7 = false;
		iVar6 = unk_0x94A922605867FB40(iVar0, "mnumpt");
	}
	iVar8 = unk_0x94A922605867FB40(iVar0, "tcp");
	iVar9 = unk_0x94A922605867FB40(iVar0, "tcr");
	iVar10 = unk_0x94A922605867FB40(iVar0, "abits");
	iVar11 = unk_0x94A922605867FB40(iVar0, "sdobs");
	iVar12 = unk_0x94A922605867FB40(iVar0, "edobs");
	iVar13 = unk_0x94A922605867FB40(iVar0, "dogps");
	iVar14 = unk_0x94A922605867FB40(iVar0, "teamv");
	iVar15 = unk_0x94A922605867FB40(iVar0, "teamrvc");
	iVar16 = unk_0x94A922605867FB40(iVar0, "mcvbs");
	iVar17 = unk_0x94A922605867FB40(iVar0, "mcobs");
	iVar18 = unk_0x94A922605867FB40(iVar0, "mcpbs");
	iVar19 = unk_0x94A922605867FB40(iVar0, "mcgbs");
	iVar20 = unk_0x94A922605867FB40(iVar0, "rpgbs");
	iVar21 = unk_0x94A922605867FB40(iVar0, "mcpbs1");
	iVar22 = unk_0x94A922605867FB40(iVar0, "mcpbs2");
	iVar23 = unk_0x94A922605867FB40(iVar0, "mcgbs1");
	iVar24 = unk_0x94A922605867FB40(iVar0, "mcgbs2");
	iVar25 = unk_0x94A922605867FB40(iVar0, "rpgbs1");
	iVar26 = unk_0x94A922605867FB40(iVar0, "rpgbs2");
	iVar27 = unk_0x94A922605867FB40(iVar0, "inpts");
	iVar28 = unk_0x94A922605867FB40(iVar0, "ldsf1");
	iVar29 = unk_0x94A922605867FB40(iVar0, "ldsf2");
	iVar30 = 1;
	if (unk_0xD44C5C9A5AB591EF(iVar0, "tehlh") == 7)
	{
		iVar31 = unk_0x94A922605867FB40(iVar0, "tehlh");
		iVar30 = 1;
	}
	else
	{
		iVar30 = 0;
	}
	iVar32 = unk_0x94A922605867FB40(iVar0, "tehrn");
	iVar33 = unk_0x94A922605867FB40(iVar0, "spsy1");
	iVar34 = unk_0x94A922605867FB40(iVar0, "spsy2");
	iVar35 = unk_0x94A922605867FB40(iVar0, "tenms");
	iVar36 = unk_0x94A922605867FB40(iVar0, "csttn");
	iVar37 = unk_0x94A922605867FB40(iVar0, "cstrn");
	iVar38 = unk_0x94A922605867FB40(iVar0, "nrl");
	iVar39 = unk_0x94A922605867FB40(iVar0, "tstrt");
	iVar40 = unk_0x94A922605867FB40(iVar0, "tstop");
	uVar41 = unk_0x94A922605867FB40(iVar0, "sms");
	iVar42 = unk_0x94A922605867FB40(iVar0, "tblpv1");
	iVar43 = unk_0x94A922605867FB40(iVar0, "tblpv2");
	iVar44 = unk_0x94A922605867FB40(iVar0, "tblpv3");
	iVar45 = unk_0x94A922605867FB40(iVar0, "tblpv4");
	iVar46 = unk_0x94A922605867FB40(iVar0, "thudv1");
	iVar47 = unk_0x94A922605867FB40(iVar0, "thudv2");
	iVar48 = unk_0x94A922605867FB40(iVar0, "thudv3");
	iVar49 = unk_0x94A922605867FB40(iVar0, "thudv4");
	iVar50 = unk_0x94A922605867FB40(iVar0, "rcst1q");
	iVar51 = unk_0x94A922605867FB40(iVar0, "rcst2q");
	iVar52 = unk_0x94A922605867FB40(iVar0, "rcst3q");
	iVar53 = unk_0x94A922605867FB40(iVar0, "rcst4q");
	iVar1 = 0;
	while (iVar1 <= (unk_0x697D8F5133F938AB(uVar41) - 1))
	{
		uVar54[iVar1] = unk_0xAFD3CCDC2E7D3A37(uVar41, iVar1);
		Global_1626500.f_32044[iVar1 /*38*/] = unk_0x9C70ABDC70E0A0CF(uVar54[iVar1], "team");
		Global_1626500.f_32044[iVar1 /*38*/].f_1 = unk_0x9C70ABDC70E0A0CF(uVar54[iVar1], "rule");
		Global_1626500.f_32044[iVar1 /*38*/].f_2 = unk_0x9C70ABDC70E0A0CF(uVar54[iVar1], "time");
		StringCopy(&(Global_1626500.f_32044[iVar1 /*38*/].f_4[0 /*16*/]), unk_0x2A1C48CBD532E1D8(uVar54[iVar1], "txt0"), 64);
		StringCopy(&(Global_1626500.f_32044[iVar1 /*38*/].f_4[1 /*16*/]), unk_0x2A1C48CBD532E1D8(uVar54[iVar1], "txt1"), 64);
		Global_1626500.f_32044[iVar1 /*38*/].f_3 = unk_0x9C70ABDC70E0A0CF(uVar54[iVar1], "delay");
		Global_1626500.f_32044[iVar1 /*38*/].f_37 = unk_0x9C70ABDC70E0A0CF(uVar54[iVar1], "sndall");
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= (Global_1626500.f_27 - 1))
	{
		if (iVar1 < 4)
		{
			if (iVar14 != 0)
			{
				uVar2 = unk_0x7A66412A2B47CF10(iVar14, iVar1);
				Global_1626500.f_39311[iVar1] = uVar2;
			}
			else
			{
				Global_1626500.f_39311[iVar1] = 0;
			}
			if (iVar15 != 0)
			{
				Global_1626500.f_39349[iVar1] = unk_0x7A66412A2B47CF10(iVar15, iVar1);
			}
			else
			{
				Global_1626500.f_39349[iVar1] = -1;
			}
			if (iVar3 != 0)
			{
				Global_1626500.f_29[iVar1] = unk_0x7A66412A2B47CF10(iVar3, iVar1);
			}
			if (Global_1626500.f_29[iVar1] < 1)
			{
				Global_1626500.f_29[iVar1] = 1;
			}
			if (iVar4 != 0)
			{
				Global_1626500.f_32886[iVar1] = unk_0x7A66412A2B47CF10(iVar4, iVar1);
			}
			else
			{
				Global_1626500.f_32886[iVar1] = -1;
			}
			if (iVar5 != 0)
			{
				Global_1626500.f_32891[iVar1] = unk_0x7A66412A2B47CF10(iVar5, iVar1);
			}
			else
			{
				Global_1626500.f_32891[iVar1] = -1;
			}
			if (bVar7)
			{
				Global_1626500.f_34[iVar1] = 0;
			}
			else
			{
				if (iVar6 != 0)
				{
					Global_1626500.f_34[iVar1] = unk_0x7A66412A2B47CF10(iVar6, iVar1);
				}
				if (Global_1626500.f_34[iVar1] < 0)
				{
					Global_1626500.f_34[iVar1] = 0;
				}
			}
			if (iVar8 != 0)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_4 = { unk_0x219E9678C4D55F3E(iVar8, iVar1) };
			}
			if (iVar9 != 0)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_7 = { unk_0x219E9678C4D55F3E(iVar9, iVar1) };
			}
			if (iVar10 != 0)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_945 = unk_0x7A66412A2B47CF10(iVar10, iVar1);
			}
			if (iVar11 != 0)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_946 = unk_0x7A66412A2B47CF10(iVar11, iVar1);
			}
			if (iVar12 != 0)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_947 = unk_0x7A66412A2B47CF10(iVar12, iVar1);
			}
			if (iVar13 != 0)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_948 = unk_0x7A66412A2B47CF10(iVar13, iVar1);
			}
			if (unk_0x5F76836A544DA961(iVar28, iVar1) == 2 && iVar28 != 0)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_583 = unk_0x7A66412A2B47CF10(iVar28, iVar1);
			}
			else
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_583 = 0;
			}
			if (unk_0x5F76836A544DA961(iVar29, iVar1) == 2 && iVar29 != 0)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_584 = unk_0x7A66412A2B47CF10(iVar29, iVar1);
			}
			else
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_584 = 0;
			}
			if (iVar16 != 0)
			{
				Global_1626500.f_32034[iVar1] = unk_0x7A66412A2B47CF10(iVar16, iVar1);
			}
			if (unk_0x5F76836A544DA961(iVar17, iVar1) == 2)
			{
				Global_1626500.f_32039[iVar1] = unk_0x7A66412A2B47CF10(iVar17, iVar1);
			}
			else
			{
				Global_1626500.f_32039[iVar1] = 0;
			}
			if (iVar18 != 0)
			{
				Global_1626500.f_31990[iVar1] = unk_0x7A66412A2B47CF10(iVar18, iVar1);
			}
			if (iVar21 != 0)
			{
				Global_1626500.f_32021[iVar1 /*3*/][0] = unk_0x7A66412A2B47CF10(iVar21, iVar1);
			}
			if (iVar22 != 0)
			{
				Global_1626500.f_32021[iVar1 /*3*/][1] = unk_0x7A66412A2B47CF10(iVar22, iVar1);
			}
			if (Global_1626500.f_31990[iVar1] != 0 && Global_1626500.f_32021[iVar1 /*3*/][0] == 0)
			{
				Global_1626500.f_32021[iVar1 /*3*/][0] = Global_1626500.f_31990[iVar1];
			}
			if (iVar19 != 0)
			{
				Global_1626500.f_31985[iVar1] = unk_0x7A66412A2B47CF10(iVar19, iVar1);
			}
			if (iVar23 != 0)
			{
				Global_1626500.f_32008[iVar1 /*3*/][0] = unk_0x7A66412A2B47CF10(iVar23, iVar1);
			}
			if (iVar24 != 0)
			{
				Global_1626500.f_32008[iVar1 /*3*/][1] = unk_0x7A66412A2B47CF10(iVar24, iVar1);
			}
			if (Global_1626500.f_31985[iVar1] != 0 && Global_1626500.f_32008[iVar1 /*3*/][0] == 0)
			{
				Global_1626500.f_32008[iVar1 /*3*/][0] = Global_1626500.f_31985[iVar1];
			}
			if (iVar20 != 0)
			{
				Global_1626500.f_31980[iVar1] = unk_0x7A66412A2B47CF10(iVar20, iVar1);
			}
			if (iVar25 != 0)
			{
				Global_1626500.f_31995[iVar1 /*3*/][0] = unk_0x7A66412A2B47CF10(iVar25, iVar1);
			}
			if (iVar26 != 0)
			{
				Global_1626500.f_31995[iVar1 /*3*/][1] = unk_0x7A66412A2B47CF10(iVar26, iVar1);
			}
			if (Global_1626500.f_31980[iVar1] != 0 && Global_1626500.f_31995[iVar1 /*3*/][0] == 0)
			{
				Global_1626500.f_31995[iVar1 /*3*/][0] = Global_1626500.f_31980[iVar1];
			}
			if (iVar27 != 0)
			{
				Global_1626500.f_31249[iVar1] = unk_0x7A66412A2B47CF10(iVar27, iVar1);
			}
			if (iVar30 && iVar31 != 0)
			{
				Global_1626500.f_31281[iVar1] = unk_0x7A66412A2B47CF10(iVar31, iVar1);
			}
			else
			{
				Global_1626500.f_31281[iVar1] = 3;
			}
			if (unk_0x5F76836A544DA961(iVar32, iVar1) == 2)
			{
				Global_1626500.f_31286[iVar1] = unk_0x7A66412A2B47CF10(iVar32, iVar1);
			}
			if (iVar33 != 0)
			{
				StringCopy(&(Global_1626500.f_89[iVar1 /*7777*/].f_7229[0 /*16*/]), unk_0xFC74DD7217B3E5DB(iVar33, iVar1), 64);
			}
			if (iVar34 != 0)
			{
				StringCopy(&(Global_1626500.f_89[iVar1 /*7777*/].f_7229[1 /*16*/]), unk_0xFC74DD7217B3E5DB(iVar34, iVar1), 64);
			}
			if (iVar35 != 0)
			{
				Global_1626500.f_31254[iVar1] = unk_0x7A66412A2B47CF10(iVar35, iVar1);
			}
			if (iVar36 != 0)
			{
				StringCopy(&(Global_1626500.f_31259[iVar1 /*4*/]), unk_0xFC74DD7217B3E5DB(iVar36, iVar1), 16);
			}
			if (iVar37 != 0)
			{
				Global_1626500.f_31276[iVar1] = unk_0x7A66412A2B47CF10(iVar37, iVar1);
			}
			if (unk_0x5F76836A544DA961(iVar39, iVar1) == 2 && iVar39 != 0)
			{
				Global_1626500.f_87852[iVar1] = unk_0x7A66412A2B47CF10(iVar39, iVar1);
			}
			if (unk_0x5F76836A544DA961(iVar40, iVar1) == 2 && iVar40 != 0)
			{
				Global_1626500.f_87857[iVar1] = unk_0x7A66412A2B47CF10(iVar40, iVar1);
			}
			if (iVar38 != 0)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_57 = unk_0x7A66412A2B47CF10(iVar38, iVar1);
			}
			if (unk_0x5F76836A544DA961(iVar42, iVar1) == 2)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_4484 = unk_0x7A66412A2B47CF10(iVar42, iVar1);
			}
			else
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_4484 = 0;
			}
			if (unk_0x5F76836A544DA961(iVar43, iVar1) == 2)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_4485 = unk_0x7A66412A2B47CF10(iVar43, iVar1);
			}
			else
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_4485 = 0;
			}
			if (unk_0x5F76836A544DA961(iVar44, iVar1) == 2)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_4486 = unk_0x7A66412A2B47CF10(iVar44, iVar1);
			}
			else
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_4486 = 0;
			}
			if (unk_0x5F76836A544DA961(iVar45, iVar1) == 2)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_4487 = unk_0x7A66412A2B47CF10(iVar45, iVar1);
			}
			else
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_4487 = 0;
			}
			if (unk_0x5F76836A544DA961(iVar46, iVar1) == 2)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_4488 = unk_0x7A66412A2B47CF10(iVar46, iVar1);
			}
			else
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_4488 = 0;
			}
			if (unk_0x5F76836A544DA961(iVar47, iVar1) == 2)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_4489 = unk_0x7A66412A2B47CF10(iVar47, iVar1);
			}
			else
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_4489 = 0;
			}
			if (unk_0x5F76836A544DA961(iVar48, iVar1) == 2)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_4490 = unk_0x7A66412A2B47CF10(iVar48, iVar1);
			}
			else
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_4490 = 0;
			}
			if (unk_0x5F76836A544DA961(iVar49, iVar1) == 2)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_4491 = unk_0x7A66412A2B47CF10(iVar49, iVar1);
			}
			else
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_4491 = 0;
			}
			if (unk_0x5F76836A544DA961(iVar50, iVar1) == 2)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_4492 = unk_0x7A66412A2B47CF10(iVar50, iVar1);
			}
			else
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_4492 = 0;
			}
			if (unk_0x5F76836A544DA961(iVar51, iVar1) == 2)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_4493 = unk_0x7A66412A2B47CF10(iVar51, iVar1);
			}
			else
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_4493 = 0;
			}
			if (unk_0x5F76836A544DA961(iVar52, iVar1) == 2)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_4494 = unk_0x7A66412A2B47CF10(iVar52, iVar1);
			}
			else
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_4494 = 0;
			}
			if (unk_0x5F76836A544DA961(iVar53, iVar1) == 2)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_4495 = unk_0x7A66412A2B47CF10(iVar53, iVar1);
			}
			else
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_4495 = 0;
			}
		}
		iVar1++;
	}
}

void func_200(int iParam0)
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
	
	iVar0 = unk_0x458C2A004F0678D0(*iParam0, "endcon");
	iVar2 = unk_0x94A922605867FB40(iVar0, "stpos");
	iVar3 = unk_0x94A922605867FB40(iVar0, "delr");
	iVar4 = unk_0x94A922605867FB40(iVar0, "epos");
	iVar5 = unk_0x94A922605867FB40(iVar0, "endr");
	iVar6 = unk_0x94A922605867FB40(iVar0, "vareapos");
	iVar7 = unk_0x94A922605867FB40(iVar0, "arear");
	iVar8 = unk_0x94A922605867FB40(iVar0, "time");
	iVar9 = unk_0x94A922605867FB40(iVar0, "plkr");
	iVar10 = unk_0x94A922605867FB40(iVar0, "pekr");
	iVar11 = unk_0x94A922605867FB40(iVar0, "vhkr");
	iVar12 = unk_0x94A922605867FB40(iVar0, "obkr");
	iVar13 = unk_0x94A922605867FB40(iVar0, "dr");
	iVar14 = unk_0x94A922605867FB40(iVar0, "pedr");
	iVar15 = unk_0x94A922605867FB40(iVar0, "vedr");
	iVar16 = unk_0x94A922605867FB40(iVar0, "obdr");
	iVar17 = unk_0x94A922605867FB40(iVar0, "lwmbs");
	iVar18 = unk_0x94A922605867FB40(iVar0, "flmbs");
	iVar19 = unk_0x94A922605867FB40(iVar0, "vdoibs");
	iVar20 = unk_0x94A922605867FB40(iVar0, "vdohu");
	iVar21 = unk_0x94A922605867FB40(iVar0, "tmbts");
	iVar22 = unk_0x94A922605867FB40(iVar0, "tmbt2");
	iVar23 = unk_0x94A922605867FB40(iVar0, "swmbs");
	iVar24 = unk_0x94A922605867FB40(iVar0, "gbmbs");
	iVar25 = unk_0x94A922605867FB40(iVar0, "pcbd");
	iVar26 = unk_0x94A922605867FB40(iVar0, "lwbs");
	iVar27 = unk_0x94A922605867FB40(iVar0, "wodia");
	iVar28 = unk_0x94A922605867FB40(iVar0, "repcr");
	iVar29 = unk_0x94A922605867FB40(iVar0, "woabs");
	iVar30 = unk_0x94A922605867FB40(iVar0, "fwoabs");
	iVar31 = unk_0x94A922605867FB40(iVar0, "fail");
	iVar32 = unk_0x94A922605867FB40(iVar0, "vehrsp");
	iVar33 = unk_0x94A922605867FB40(iVar0, "mtlr");
	iVar34 = unk_0x94A922605867FB40(iVar0, "mslr");
	iVar35 = unk_0x94A922605867FB40(iVar0, "mlpl");
	iVar36 = unk_0x94A922605867FB40(iVar0, "plyl");
	iVar37 = unk_0x94A922605867FB40(iVar0, "shd");
	iVar38 = unk_0x94A922605867FB40(iVar0, "spar");
	iVar39 = unk_0x94A922605867FB40(iVar0, "2spar");
	iVar40 = unk_0x94A922605867FB40(iVar0, "boud");
	iVar41 = unk_0x94A922605867FB40(iVar0, "bla");
	iVar42 = unk_0x94A922605867FB40(iVar0, "wla");
	iVar43 = unk_0x94A922605867FB40(iVar0, "patm");
	iVar44 = unk_0x94A922605867FB40(iVar0, "bnd2");
	iVar45 = unk_0x94A922605867FB40(iVar0, "bla2");
	iVar46 = unk_0x94A922605867FB40(iVar0, "wla2");
	iVar47 = unk_0x94A922605867FB40(iVar0, "pat2");
	iVar48 = unk_0x94A922605867FB40(iVar0, "inv");
	iVar49 = unk_0x94A922605867FB40(iVar0, "inv2");
	iVar50 = unk_0x94A922605867FB40(iVar0, "inv3");
	iVar51 = unk_0x94A922605867FB40(iVar0, "invsw");
	iVar52 = unk_0x94A922605867FB40(iVar0, "invtm");
	iVar53 = unk_0x94A922605867FB40(iVar0, "invrl");
	iVar54 = unk_0x94A922605867FB40(iVar0, "inv2tm");
	iVar55 = unk_0x94A922605867FB40(iVar0, "inv2rl");
	iVar56 = unk_0x94A922605867FB40(iVar0, "sinv");
	iVar57 = unk_0x94A922605867FB40(iVar0, "sinv2");
	iVar58 = unk_0x94A922605867FB40(iVar0, "sinv3");
	iVar59 = unk_0x94A922605867FB40(iVar0, "minv");
	iVar60 = unk_0x94A922605867FB40(iVar0, "mmsw");
	iVar61 = unk_0x94A922605867FB40(iVar0, "mmsw2");
	iVar62 = unk_0x94A922605867FB40(iVar0, "minv2");
	iVar63 = unk_0x94A922605867FB40(iVar0, "minv3");
	iVar64 = unk_0x94A922605867FB40(iVar0, "ppk");
	iVar65 = unk_0x94A922605867FB40(iVar0, "mts");
	iVar66 = unk_0x94A922605867FB40(iVar0, "spwia");
	iVar67 = unk_0x94A922605867FB40(iVar0, "2spwia");
	iVar68 = unk_0x94A922605867FB40(iVar0, "pcl");
	iVar69 = unk_0x94A922605867FB40(iVar0, "ocl");
	iVar70 = unk_0x94A922605867FB40(iVar0, "arrt");
	iVar1 = 0;
	while (iVar1 <= (Global_1626500.f_27 - 1))
	{
		if (iVar1 < 4)
		{
			if (iVar2 != 0)
			{
				Global_1626500.f_89[iVar1 /*7777*/] = { unk_0x219E9678C4D55F3E(iVar2, iVar1) };
			}
			if (iVar17 != 0)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_3323 = unk_0x7A66412A2B47CF10(iVar17, iVar1);
			}
			if (iVar18 != 0)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_3344 = unk_0x7A66412A2B47CF10(iVar18, iVar1);
			}
			if (iVar19 != 0)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_4005 = unk_0x7A66412A2B47CF10(iVar19, iVar1);
			}
			if (unk_0x5F76836A544DA961(iVar20, iVar1) == 2)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_4006 = unk_0x7A66412A2B47CF10(iVar20, iVar1);
			}
			else
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_4006 = 0;
			}
			if (iVar21 != 0)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_4295 = unk_0x7A66412A2B47CF10(iVar21, iVar1);
			}
			if (iVar22 != 0)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_4296 = unk_0x7A66412A2B47CF10(iVar22, iVar1);
			}
			if (iVar23 != 0)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_3325 = unk_0x7A66412A2B47CF10(iVar23, iVar1);
			}
			if (iVar24 != 0)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_3418 = unk_0x7A66412A2B47CF10(iVar24, iVar1);
			}
			if (iVar25 != 0)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_4496 = unk_0x7A66412A2B47CF10(iVar25, iVar1);
			}
			if (iVar26 != 0)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_3322 = unk_0x7A66412A2B47CF10(iVar26, iVar1);
			}
			if (iVar29 != 0)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_3324 = unk_0x7A66412A2B47CF10(iVar29, iVar1);
			}
			if (iVar27 != 0)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_2956 = unk_0x7A66412A2B47CF10(iVar27, iVar1);
			}
			if (iVar28 != 0)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_2957 = unk_0x7A66412A2B47CF10(iVar28, iVar1);
			}
			if (iVar30 != 0)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_3345 = unk_0x7A66412A2B47CF10(iVar30, iVar1);
			}
			if (iVar31 != 0)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_4497 = unk_0x7A66412A2B47CF10(iVar31, iVar1);
			}
			if (iVar32 != 0)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_4498 = unk_0x7A66412A2B47CF10(iVar32, iVar1);
			}
			if (iVar33 != 0)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_32 = unk_0x7A66412A2B47CF10(iVar33, iVar1);
			}
			if (iVar34 != 0)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_33 = unk_0x7A66412A2B47CF10(iVar34, iVar1);
			}
			if (unk_0x5F76836A544DA961(iVar35, iVar1) == 2)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_34 = unk_0x7A66412A2B47CF10(iVar35, iVar1);
			}
			else
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_34 = 0;
			}
			if (iVar36 != 0)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_36 = unk_0x7A66412A2B47CF10(iVar36, iVar1);
			}
			if (iVar38 != 0)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_2951 = unk_0x7A66412A2B47CF10(iVar38, iVar1);
			}
			if (iVar39 != 0)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_2953 = unk_0x7A66412A2B47CF10(iVar39, iVar1);
			}
			if (iVar40 != 0)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_2949 = unk_0x7A66412A2B47CF10(iVar40, iVar1);
			}
			if (iVar41 != 0)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_2948 = unk_0x7A66412A2B47CF10(iVar41, iVar1);
			}
			if (unk_0x5F76836A544DA961(iVar43, iVar1) == 2 && iVar43 != 0)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_2950 = unk_0x7A66412A2B47CF10(iVar43, iVar1);
			}
			else
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_2950 = 60000;
			}
			if (unk_0x5F76836A544DA961(iVar44, iVar1) == 2)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_3175 = unk_0x7A66412A2B47CF10(iVar44, iVar1);
			}
			else
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_3175 = 0;
			}
			if (unk_0x5F76836A544DA961(iVar45, iVar1) == 2)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_3174 = unk_0x7A66412A2B47CF10(iVar45, iVar1);
			}
			else
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_3174 = 0;
			}
			if (unk_0x5F76836A544DA961(iVar47, iVar1) == 2)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_3176 = unk_0x7A66412A2B47CF10(iVar47, iVar1);
			}
			else
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_3176 = 60000;
			}
			if (unk_0x5F76836A544DA961(iVar46, iVar1) == 2)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_3177 = unk_0x7A66412A2B47CF10(iVar46, iVar1);
			}
			else
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_3177 = 0;
			}
			if (iVar48 != 0)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_59 = unk_0x7A66412A2B47CF10(iVar48, iVar1);
			}
			if (iVar49 != 0)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_60 = unk_0x7A66412A2B47CF10(iVar49, iVar1);
			}
			if (iVar50 != 0)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_61 = unk_0x7A66412A2B47CF10(iVar50, iVar1);
			}
			if (unk_0x5F76836A544DA961(iVar51, iVar1) == 2)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_204 = unk_0x7A66412A2B47CF10(iVar51, iVar1);
			}
			else
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_204 = -1;
			}
			if (unk_0x5F76836A544DA961(iVar60, iVar1) == 2)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_205 = unk_0x7A66412A2B47CF10(iVar60, iVar1);
			}
			else
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_205 = -1;
			}
			if (unk_0x5F76836A544DA961(iVar61, iVar1) == 2)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_206 = unk_0x7A66412A2B47CF10(iVar61, iVar1);
			}
			else
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_206 = -1;
			}
			if (unk_0x5F76836A544DA961(iVar52, iVar1) == 2 && unk_0x5F76836A544DA961(iVar53, iVar1) == 2)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_352 = unk_0x7A66412A2B47CF10(iVar52, iVar1);
				Global_1626500.f_89[iVar1 /*7777*/].f_353 = unk_0x7A66412A2B47CF10(iVar53, iVar1);
			}
			else
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_352 = -1;
				Global_1626500.f_89[iVar1 /*7777*/].f_353 = -1;
			}
			if (iVar56 != 0)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_207 = unk_0x7A66412A2B47CF10(iVar56, iVar1);
			}
			if (iVar57 != 0)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_208 = unk_0x7A66412A2B47CF10(iVar57, iVar1);
			}
			if (iVar58 != 0)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_209 = unk_0x7A66412A2B47CF10(iVar58, iVar1);
			}
			if (unk_0x5F76836A544DA961(iVar54, iVar1) == 2 && unk_0x5F76836A544DA961(iVar55, iVar1) == 2)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_499 = unk_0x7A66412A2B47CF10(iVar54, iVar1);
				Global_1626500.f_89[iVar1 /*7777*/].f_500 = unk_0x7A66412A2B47CF10(iVar55, iVar1);
			}
			else
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_499 = -1;
				Global_1626500.f_89[iVar1 /*7777*/].f_500 = -1;
			}
			if (iVar59 != 0)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_354 = unk_0x7A66412A2B47CF10(iVar59, iVar1);
			}
			if (iVar62 != 0)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_355 = unk_0x7A66412A2B47CF10(iVar62, iVar1);
			}
			if (iVar63 != 0)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_356 = unk_0x7A66412A2B47CF10(iVar63, iVar1);
			}
			if (iVar64 != 0)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_55 = unk_0x7A66412A2B47CF10(iVar64, iVar1);
			}
			if (iVar65 != 0)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_56 = unk_0x7A66412A2B47CF10(iVar65, iVar1);
			}
			if (iVar66 != 0)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_2952 = unk_0x7A66412A2B47CF10(iVar66, iVar1);
			}
			if (iVar67 != 0)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_2954 = unk_0x7A66412A2B47CF10(iVar67, iVar1);
			}
			if (iVar42 != 0)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_2955 = unk_0x7A66412A2B47CF10(iVar42, iVar1);
			}
			if (iVar37 != 0)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_3 = unk_0xE00906876D6244A2(iVar37, iVar1);
			}
			if (iVar68 != 0)
			{
				Global_1626500.f_31198[iVar1] = unk_0x7A66412A2B47CF10(iVar68, iVar1);
			}
			if (iVar69 != 0)
			{
				Global_1626500.f_31203[iVar1] = unk_0x7A66412A2B47CF10(iVar69, iVar1);
			}
			if (iVar70 != 0)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_35 = unk_0x7A66412A2B47CF10(iVar70, iVar1);
			}
			if (iVar3 != 0)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_14 = unk_0x7A66412A2B47CF10(iVar3, iVar1);
			}
			if (iVar4 != 0)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_15 = { unk_0x219E9678C4D55F3E(iVar4, iVar1) };
			}
			if (iVar5 != 0)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_18 = unk_0x7A66412A2B47CF10(iVar5, iVar1);
			}
			if (iVar6 != 0)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_19 = { unk_0x219E9678C4D55F3E(iVar6, iVar1) };
			}
			if (iVar7 != 0)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_22 = unk_0x7A66412A2B47CF10(iVar7, iVar1);
			}
			if (iVar8 != 0)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_23 = unk_0x7A66412A2B47CF10(iVar8, iVar1);
			}
			if (iVar9 != 0)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_24 = unk_0x7A66412A2B47CF10(iVar9, iVar1);
			}
			if (iVar10 != 0)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_25 = unk_0x7A66412A2B47CF10(iVar10, iVar1);
			}
			if (iVar11 != 0)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_26 = unk_0x7A66412A2B47CF10(iVar11, iVar1);
			}
			if (iVar12 != 0)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_27 = unk_0x7A66412A2B47CF10(iVar12, iVar1);
			}
			if (iVar13 != 0)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_28 = unk_0x7A66412A2B47CF10(iVar13, iVar1);
			}
			if (iVar14 != 0)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_29 = unk_0x7A66412A2B47CF10(iVar14, iVar1);
			}
			if (iVar15 != 0)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_30 = unk_0x7A66412A2B47CF10(iVar15, iVar1);
			}
			if (iVar16 != 0)
			{
				Global_1626500.f_89[iVar1 /*7777*/].f_31 = unk_0x7A66412A2B47CF10(iVar16, iVar1);
			}
		}
		iVar1++;
	}
}

void func_201(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x458C2A004F0678D0(iParam0, "rule");
	Global_1626500.f_46 = unk_0x9C70ABDC70E0A0CF(iVar0, "time");
	Global_1626500.f_48 = unk_0x9C70ABDC70E0A0CF(iVar0, "score");
	Global_1626500.f_59 = unk_0x9C70ABDC70E0A0CF(iVar0, "prule");
	Global_1626500.f_51163 = unk_0x9C70ABDC70E0A0CF(iVar0, "ptyp");
	Global_1626500.f_49 = unk_0x9C70ABDC70E0A0CF(iVar0, "blip");
	Global_1626500.f_51 = unk_0x9C70ABDC70E0A0CF(iVar0, "tag");
	Global_1626500.f_52 = unk_0x9C70ABDC70E0A0CF(iVar0, "voice");
	Global_1626500.f_53 = unk_0x9C70ABDC70E0A0CF(iVar0, "radio");
	Global_1626500.f_54 = unk_0x9C70ABDC70E0A0CF(iVar0, "aim");
	Global_1626500.f_39360 = unk_0x9C70ABDC70E0A0CF(iVar0, "pol");
	Global_1626500.f_42 = unk_0x9C70ABDC70E0A0CF(iVar0, "liv");
	Global_1626500.f_38718 = unk_0x9C70ABDC70E0A0CF(iVar0, "traf");
	Global_1626500.f_84480 = unk_0x9C70ABDC70E0A0CF(iVar0, "tod");
	Global_1626500.f_84465 = unk_0x9C70ABDC70E0A0CF(iVar0, "weth");
	Global_1626500.f_84482 = unk_0x9C70ABDC70E0A0CF(iVar0, "apeds");
	Global_1626500.f_84481 = unk_0x9C70ABDC70E0A0CF(iVar0, "vehd");
	Global_1626500.f_57 = unk_0x9C70ABDC70E0A0CF(iVar0, "vdm");
	Global_1626500.f_55 = unk_0x9C70ABDC70E0A0CF(iVar0, "tdm");
	Global_1626500.f_31198[0] = unk_0x9C70ABDC70E0A0CF(iVar0, "pcr");
	Global_1626500.f_31203[0] = unk_0x9C70ABDC70E0A0CF(iVar0, "ocr");
}

void func_202(int iParam0, int iParam1, bool bParam2)
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
	int iVar30;
	int iVar31;
	char cVar32[16];
	char cVar36[16];
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	
	iVar0 = unk_0x458C2A004F0678D0(iParam0, "gen");
	Global_1626500 = unk_0x9C70ABDC70E0A0CF(iVar0, "type");
	Global_1626500.f_9 = unk_0x891D0AEE12B2452B(iVar0, "ngjob");
	unk_0x08BA6DD398CA197C(Global_1626500.f_7, 0);
	bVar1 = unk_0x891D0AEE12B2452B(iVar0, "photo");
	if (bVar1)
	{
		unk_0x88B0F0DC270164B7(&(Global_1626500.f_7), 0);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&(Global_1626500.f_7), 0);
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "ivm") == 2)
	{
		Global_1626500.f_39310 = unk_0x9C70ABDC70E0A0CF(iVar0, "ivm");
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "fixcam") == 2)
	{
		Global_1626500.f_87865 = unk_0x9C70ABDC70E0A0CF(iVar0, "fixcam");
	}
	else
	{
		Global_1626500.f_87865 = 0;
	}
	Global_1626500.f_4 = unk_0x9C70ABDC70E0A0CF(iVar0, "optbs");
	Global_1626500.f_72 = { unk_0x3D4621E99B9FFBE0(iVar0, "camo") };
	Global_1626500.f_75 = { unk_0x3D4621E99B9FFBE0(iVar0, "camro") };
	Global_1626500.f_66 = { unk_0x3D4621E99B9FFBE0(iVar0, "cam") };
	Global_1626500.f_85 = unk_0xCB33F3C96453C329(iVar0, "camh");
	Global_1626500.f_78 = { unk_0x3D4621E99B9FFBE0(iVar0, "camf") };
	Global_1626500.f_81 = { unk_0x3D4621E99B9FFBE0(iVar0, "camfr") };
	Global_1626500.f_84 = unk_0xCB33F3C96453C329(iVar0, "camfv");
	Global_1626500.f_83842 = unk_0xCB33F3C96453C329(iVar0, "dmbds");
	Global_1626500.f_60 = { unk_0x3D4621E99B9FFBE0(iVar0, "phpo") };
	StringCopy(&(Global_1626500.f_84025[0 /*16*/]), unk_0x2A1C48CBD532E1D8(iVar0, "szTag"), 64);
	if (unk_0xD44C5C9A5AB591EF(iVar0, "chksfx") == 1)
	{
		Global_1626500.f_102431 = 1;
	}
	else
	{
		Global_1626500.f_102431 = 0;
	}
	StringCopy(&cVar4, "nrcid", 16);
	if (bParam2)
	{
		iVar2 = 0;
		while (iVar2 <= 1)
		{
			StringCopy(&cVar4, "nrcid", 16);
			StringIntConCat(&cVar4, iVar2, 16);
			StringCopy(&(Global_1626500.f_84160[iVar2 /*6*/]), unk_0x2A1C48CBD532E1D8(iVar0, &cVar4), 24);
			iVar2++;
		}
	}
	if (func_121())
	{
		Global_1626500.f_2 = unk_0x9C70ABDC70E0A0CF(iVar0, "subtype");
		Global_1626500.f_102390 = unk_0x9C70ABDC70E0A0CF(iVar0, "adverm");
		Global_1626500.f_87862 = unk_0x9C70ABDC70E0A0CF(iVar0, "testcomplete");
		if (((Global_1626500.f_2 == 6 || Global_1626500.f_2 == 5) || Global_1626500.f_2 == 4) || Global_1626500.f_2 == 9)
		{
			if (unk_0xD44C5C9A5AB591EF(iVar0, "teamBal") == 2)
			{
				Global_1626500.f_87864 = unk_0x9C70ABDC70E0A0CF(iVar0, "numRounds");
			}
			else
			{
				Global_1626500.f_87864 = 1;
			}
			if (Global_1626500.f_87864 < 1)
			{
				Global_1626500.f_87864 = 1;
			}
		}
		if (unk_0xD44C5C9A5AB591EF(iVar0, "teamBal") == 2)
		{
			Global_1626500.f_87866 = unk_0x9C70ABDC70E0A0CF(iVar0, "teamBal");
		}
		else
		{
			Global_1626500.f_87866 = 5;
		}
	}
	Global_1626500.f_87863 = unk_0x9C70ABDC70E0A0CF(iVar0, "testcomplete");
	Global_1626500.f_47 = unk_0x9C70ABDC70E0A0CF(iVar0, "endtype");
	Global_1626500.f_11 = unk_0x9C70ABDC70E0A0CF(iVar0, "menubs");
	if (unk_0xD44C5C9A5AB591EF(iVar0, "ovrpc") == 2)
	{
		Global_1626500.f_57987 = unk_0x9C70ABDC70E0A0CF(iVar0, "ovrpc");
	}
	else
	{
		Global_1626500.f_57987 = -1;
	}
	Global_1626500.f_12 = unk_0x9C70ABDC70E0A0CF(iVar0, "menubs2");
	if (unk_0xD44C5C9A5AB591EF(iVar0, "menubs3") == 2)
	{
		Global_1626500.f_13 = unk_0x9C70ABDC70E0A0CF(iVar0, "menubs3");
	}
	else
	{
		Global_1626500.f_13 = 0;
	}
	Global_1626500.f_14 = unk_0x9C70ABDC70E0A0CF(iVar0, "menubs4");
	Global_1626500.f_15 = unk_0x9C70ABDC70E0A0CF(iVar0, "menubs5");
	Global_1626500.f_16 = unk_0x9C70ABDC70E0A0CF(iVar0, "menubs6");
	Global_1626500.f_17 = unk_0x9C70ABDC70E0A0CF(iVar0, "menubs7");
	Global_1626500.f_18 = unk_0x9C70ABDC70E0A0CF(iVar0, "menubs8");
	Global_1626500.f_19 = unk_0x9C70ABDC70E0A0CF(iVar0, "menubs9");
	Global_1626500.f_20 = unk_0x9C70ABDC70E0A0CF(iVar0, "menubs10");
	if (unk_0x08BA6DD398CA197C(Global_1626500.f_15, 31))
	{
	}
	Global_1626500.f_16 = unk_0x9C70ABDC70E0A0CF(iVar0, "menubs6");
	if (unk_0x08BA6DD398CA197C(Global_1626500.f_16, 16))
	{
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "hptfb") == 2)
	{
		Global_1626500.f_88 = unk_0x9C70ABDC70E0A0CF(iVar0, "hptfb");
	}
	else
	{
		Global_1626500.f_88 = 0;
	}
	Global_1626500.f_39359 = unk_0x9C70ABDC70E0A0CF(iVar0, "teamvbs");
	Global_1626500.f_21 = unk_0x9C70ABDC70E0A0CF(iVar0, "cncmbs");
	Global_1626500.f_99352 = unk_0x9C70ABDC70E0A0CF(iVar0, "todhr");
	Global_1626500.f_99353 = unk_0x9C70ABDC70E0A0CF(iVar0, "todmn");
	Global_1626500.f_10 = unk_0x9C70ABDC70E0A0CF(iVar0, "cmpts");
	Global_1626500.f_45 = unk_0x9C70ABDC70E0A0CF(iVar0, "rank");
	Global_1626500.f_45 = unk_0x9C70ABDC70E0A0CF(iVar0, "rank");
	Global_1626500.f_84484 = unk_0x9C70ABDC70E0A0CF(iVar0, "charcon");
	Global_1626500.f_84484 = unk_0x9C70ABDC70E0A0CF(iVar0, "char");
	Global_1626500.f_84486 = unk_0x9C70ABDC70E0A0CF(iVar0, "xpr");
	Global_1626500.f_84487 = unk_0x9C70ABDC70E0A0CF(iVar0, "cshr");
	Global_1626500.f_84491 = unk_0x9C70ABDC70E0A0CF(iVar0, "ctsc");
	if (unk_0xD44C5C9A5AB591EF(iVar0, "ecsbs") == 2)
	{
		Global_1626500.f_96529.f_16 = unk_0x9C70ABDC70E0A0CF(iVar0, "ecsbs");
	}
	else
	{
		Global_1626500.f_96529.f_16 = 0;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "ecsbs2") == 2)
	{
		Global_1626500.f_96529.f_17 = unk_0x9C70ABDC70E0A0CF(iVar0, "ecsbs2");
	}
	else
	{
		Global_1626500.f_96529.f_17 = 0;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "ecsrng") == 2)
	{
		Global_1626500.f_96529.f_62 = unk_0x9C70ABDC70E0A0CF(iVar0, "ecsrng");
	}
	else
	{
		Global_1626500.f_96529.f_62 = 0;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "ecscp") == 5)
	{
		Global_1626500.f_96529.f_54 = { unk_0x3D4621E99B9FFBE0(iVar0, "ecscp") };
	}
	else
	{
		Global_1626500.f_96529.f_54 = { 0f, 0f, 0f };
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "ecscr") == 3)
	{
		Global_1626500.f_96529.f_60 = unk_0xCB33F3C96453C329(iVar0, "ecscr");
	}
	else
	{
		Global_1626500.f_96529.f_60 = 0f;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "ecscs") == 5)
	{
		Global_1626500.f_96529.f_57 = { unk_0x3D4621E99B9FFBE0(iVar0, "ecscs") };
	}
	else
	{
		Global_1626500.f_96529.f_57 = { 0f, 0f, 0f };
	}
	iVar8 = 0;
	while (iVar8 <= 29)
	{
		StringCopy(&cVar9, "ecein", 8);
		StringIntConCat(&cVar9, iVar8, 8);
		if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar9) == 2)
		{
			Global_1626500.f_96529.f_63[iVar8 /*12*/].f_1 = unk_0x9C70ABDC70E0A0CF(iVar0, &cVar9);
		}
		else
		{
			Global_1626500.f_96529.f_63[iVar8 /*12*/].f_1 = -1;
		}
		StringCopy(&cVar9, "ecetp", 8);
		StringIntConCat(&cVar9, iVar8, 8);
		if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar9) == 2)
		{
			Global_1626500.f_96529.f_63[iVar8 /*12*/] = unk_0x9C70ABDC70E0A0CF(iVar0, &cVar9);
		}
		else
		{
			Global_1626500.f_96529.f_63[iVar8 /*12*/] = -1;
		}
		StringCopy(&cVar9, "ecebs", 8);
		StringIntConCat(&cVar9, iVar8, 8);
		if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar9) == 2)
		{
			Global_1626500.f_96529.f_63[iVar8 /*12*/].f_2 = unk_0x9C70ABDC70E0A0CF(iVar0, &cVar9);
		}
		else
		{
			Global_1626500.f_96529.f_63[iVar8 /*12*/].f_2 = 0;
		}
		StringCopy(&cVar9, "ecehn", 8);
		StringIntConCat(&cVar9, iVar8, 8);
		if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1626500.f_96529.f_63[iVar8 /*12*/].f_4), unk_0x2A1C48CBD532E1D8(iVar0, &cVar9), 32);
		}
		else
		{
			StringCopy(&(Global_1626500.f_96529.f_63[iVar8 /*12*/].f_4), "", 32);
		}
		iVar8++;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "clbscr") == 2)
	{
		Global_1626500.f_97543 = unk_0x9C70ABDC70E0A0CF(iVar0, "clbscr");
	}
	else
	{
		Global_1626500.f_97543 = -1;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "disar") == 2)
	{
		Global_1626500.f_97544 = unk_0x9C70ABDC70E0A0CF(iVar0, "disar");
	}
	else
	{
		Global_1626500.f_97544 = 0;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "rlopt") == 2)
	{
		Global_1626500.f_97332 = unk_0x9C70ABDC70E0A0CF(iVar0, "rlopt");
	}
	else
	{
		Global_1626500.f_97332 = 0;
	}
	iVar15 = unk_0x9C70ABDC70E0A0CF(iVar0, "gpmn");
	Global_1626500.f_87 = iVar15;
	iVar16 = unk_0x9C70ABDC70E0A0CF(iVar0, "musx");
	if (iVar16 != -1)
	{
		Global_1626500.f_84479 = iVar16;
	}
	else
	{
		Global_1626500.f_84479 = -1;
	}
	Global_1626500.f_84478 = unk_0x9C70ABDC70E0A0CF(iVar0, "ausc");
	Global_1626500.f_23 = unk_0x9C70ABDC70E0A0CF(iVar0, "minNu");
	Global_1626500.f_22 = unk_0x9C70ABDC70E0A0CF(iVar0, "num");
	if (Global_1626500.f_22 == -1)
	{
		Global_1626500.f_22 = 30;
	}
	Global_1626500.f_24 = unk_0x9C70ABDC70E0A0CF(iVar0, "time");
	Global_1626500.f_63 = { unk_0x3D4621E99B9FFBE0(iVar0, "start") };
	StringCopy(&cVar17, "apart", 16);
	Global_1626500.f_96963 = { unk_0x3D4621E99B9FFBE0(iVar0, &cVar17) };
	Global_1626500.f_96977 = unk_0x9C70ABDC70E0A0CF(iVar0, "apwbs");
	Global_1626500.f_96966 = unk_0x9C70ABDC70E0A0CF(iVar0, "wrploc");
	Global_1626500.f_96980 = unk_0x9C70ABDC70E0A0CF(iVar0, "twrst");
	Global_1626500.f_96978 = unk_0x9C70ABDC70E0A0CF(iVar0, "iplop");
	Global_1626500.f_96979 = unk_0x9C70ABDC70E0A0CF(iVar0, "intop");
	if (unk_0xD44C5C9A5AB591EF(iVar0, "copteam") == 2)
	{
		Global_1626500.f_39361 = unk_0x9C70ABDC70E0A0CF(iVar0, "copteam");
	}
	else
	{
		Global_1626500.f_39361 = 0;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "pttl") == 4)
	{
		StringCopy(&(Global_1626500.f_84176), unk_0x2A1C48CBD532E1D8(iVar0, "pttl"), 64);
	}
	else
	{
		StringCopy(&(Global_1626500.f_84176), "", 64);
	}
	iVar21 = 0;
	while (iVar21 <= 21)
	{
		StringCopy(&cVar9, "dmvft", 8);
		StringIntConCat(&cVar9, iVar21, 8);
		if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar9) == 2)
		{
			Global_1626500.f_39274[iVar21] = unk_0x9C70ABDC70E0A0CF(iVar0, &cVar9);
		}
		else
		{
			Global_1626500.f_39274[iVar21] = 0;
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
			if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar9) == 4)
			{
				StringCopy(&(Global_1626500.f_99577[iVar15 /*33*/][iVar22 /*16*/]), unk_0x2A1C48CBD532E1D8(iVar0, &cVar9), 64);
			}
			else
			{
				StringCopy(&(Global_1626500.f_99577[iVar15 /*33*/][iVar22 /*16*/]), "", 64);
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
			if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar9) == 2)
			{
				Global_1626500.f_38756[iVar15 /*23*/][iVar22] = unk_0x9C70ABDC70E0A0CF(iVar0, &cVar9);
			}
			else
			{
				Global_1626500.f_38756[iVar15 /*23*/][iVar22] = 0;
			}
			iVar22++;
		}
		StringCopy(&cVar9, "t", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		StringConCat(&cVar9, "dvl", 8);
		if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar9) == 2)
		{
			Global_1626500.f_39222[iVar15] = unk_0x9C70ABDC70E0A0CF(iVar0, &cVar9);
		}
		else
		{
			Global_1626500.f_39222[iVar15] = 0;
		}
		StringCopy(&cVar9, "t", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		StringConCat(&cVar9, "dv", 8);
		if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar9) == 2)
		{
			Global_1626500.f_39227[iVar15] = unk_0x9C70ABDC70E0A0CF(iVar0, &cVar9);
		}
		else
		{
			Global_1626500.f_39227[iVar15] = 0;
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
				if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar9) == 2)
				{
					Global_1626500.f_38849[iVar15 /*93*/][iVar23 /*23*/][iVar22] = unk_0x9C70ABDC70E0A0CF(iVar0, &cVar9);
				}
				else
				{
					Global_1626500.f_38849[iVar15 /*93*/][iVar23 /*23*/][iVar22] = 0;
				}
				iVar22++;
			}
			StringCopy(&cVar9, "t", 8);
			StringIntConCat(&cVar9, iVar15, 8);
			StringIntConCat(&cVar9, iVar23, 8);
			StringConCat(&cVar9, "dvl", 8);
			if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar9) == 2)
			{
				Global_1626500.f_39232[iVar15 /*5*/][iVar23] = unk_0x9C70ABDC70E0A0CF(iVar0, &cVar9);
			}
			else
			{
				Global_1626500.f_39232[iVar15 /*5*/][iVar23] = 0;
			}
			StringCopy(&cVar9, "t", 8);
			StringIntConCat(&cVar9, iVar15, 8);
			StringIntConCat(&cVar9, iVar23, 8);
			StringConCat(&cVar9, "dv", 8);
			if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar9) == 2)
			{
				Global_1626500.f_39253[iVar15 /*5*/][iVar23] = unk_0x9C70ABDC70E0A0CF(iVar0, &cVar9);
			}
			else
			{
				Global_1626500.f_39253[iVar15 /*5*/][iVar23] = 0;
			}
			iVar23++;
		}
		StringCopy(&cVar9, "dmaskg", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar9) == 2)
		{
			Global_1626500.f_84470[iVar15] = unk_0x9C70ABDC70E0A0CF(iVar0, &cVar9);
		}
		else
		{
			Global_1626500.f_84470[iVar15] = 0;
		}
		StringCopy(&cVar9, "ofovr", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar9) == 2)
		{
			Global_1626500.f_88007[iVar15] = unk_0x9C70ABDC70E0A0CF(iVar0, &cVar9);
		}
		else
		{
			Global_1626500.f_88007[iVar15] = -1;
		}
		StringCopy(&cVar9, "tmrfs", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1626500.f_99512[iVar15 /*16*/]), unk_0x2A1C48CBD532E1D8(iVar0, &cVar9), 64);
		}
		else
		{
			StringCopy(&(Global_1626500.f_99512[iVar15 /*16*/]), "", 64);
		}
		StringCopy(&cVar9, "tmtss", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1626500.f_99710[iVar15 /*16*/]), unk_0x2A1C48CBD532E1D8(iVar0, &cVar9), 64);
		}
		else
		{
			StringCopy(&(Global_1626500.f_99710[iVar15 /*16*/]), "", 64);
		}
		StringCopy(&cVar9, "tmrph", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1626500.f_99775[iVar15 /*16*/]), unk_0x2A1C48CBD532E1D8(iVar0, &cVar9), 64);
		}
		else
		{
			StringCopy(&(Global_1626500.f_99775[iVar15 /*16*/]), "", 64);
		}
		StringCopy(&cVar9, "tmtsr", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar9) == 2)
		{
			Global_1626500.f_99840[iVar15] = unk_0x9C70ABDC70E0A0CF(iVar0, &cVar9);
		}
		else
		{
			Global_1626500.f_99840[iVar15] = 0;
		}
		StringCopy(&cVar9, "pmscid", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar9) == 2)
		{
			Global_1626500.f_97545[iVar15] = unk_0x9C70ABDC70E0A0CF(iVar0, &cVar9);
		}
		else
		{
			Global_1626500.f_97545[iVar15] = -1;
		}
		StringCopy(&cVar9, "qran", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar9) == 2)
		{
			Global_1626500.f_84492[iVar15] = unk_0x9C70ABDC70E0A0CF(iVar0, &cVar9);
		}
		else
		{
			Global_1626500.f_84492[iVar15] = -1;
		}
		StringCopy(&cVar9, "cwtit", 8);
		if (iVar15 > 0)
		{
			StringIntConCat(&cVar9, iVar15, 8);
		}
		if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1626500.f_102351[iVar15 /*4*/]), unk_0x2A1C48CBD532E1D8(iVar0, &cVar9), 16);
		}
		else
		{
			StringCopy(&(Global_1626500.f_102351[iVar15 /*4*/]), "", 16);
		}
		StringCopy(&cVar9, "cwstr", 8);
		if (iVar15 > 0)
		{
			StringIntConCat(&cVar9, iVar15, 8);
		}
		if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1626500.f_102368[iVar15 /*4*/]), unk_0x2A1C48CBD532E1D8(iVar0, &cVar9), 16);
		}
		else
		{
			StringCopy(&(Global_1626500.f_102368[iVar15 /*4*/]), "", 16);
		}
		StringCopy(&cVar9, "cwspre", 8);
		if (iVar15 > 0)
		{
			StringIntConCat(&cVar9, iVar15, 8);
		}
		if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar9) == 2)
		{
			Global_1626500.f_102385[iVar15] = unk_0x9C70ABDC70E0A0CF(iVar0, &cVar9);
		}
		else
		{
			Global_1626500.f_102385[iVar15] = -1;
		}
		StringCopy(&cVar9, "rtveft", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar9) == 2)
		{
			Global_1626500.f_102415[iVar15] = unk_0x9C70ABDC70E0A0CF(iVar0, &cVar9);
		}
		else
		{
			Global_1626500.f_102415[iVar15] = 0;
		}
		iVar15++;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "ctmrs") == 4)
	{
		StringCopy(&(Global_1626500.f_84192), unk_0x2A1C48CBD532E1D8(iVar0, "ctmrs"), 24);
	}
	else
	{
		StringCopy(&(Global_1626500.f_84192), "", 24);
	}
	iVar2 = 0;
	while (iVar2 < 6)
	{
		StringCopy(&cVar9, "avss", 8);
		StringIntConCat(&cVar9, iVar2, 8);
		Global_1626500.f_87953[iVar2] = unk_0x9C70ABDC70E0A0CF(iVar0, &cVar9);
		iVar3 = func_209(iVar2);
		while (iVar3 <= 31)
		{
			unk_0x09C86C0C5CA26B1E(&(Global_1626500.f_87953[iVar2]), iVar3);
			iVar3++;
		}
		iVar2++;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "vsclout") == 2)
	{
		Global_1626500.f_87960[0] = unk_0x9C70ABDC70E0A0CF(iVar0, "vsclout");
	}
	else
	{
		Global_1626500.f_87960[0] = -1;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "vsthout") == 2)
	{
		Global_1626500.f_87960[1] = unk_0x9C70ABDC70E0A0CF(iVar0, "vsthout");
	}
	else
	{
		Global_1626500.f_87960[1] = -1;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "vshwout") == 2)
	{
		Global_1626500.f_87960[3] = unk_0x9C70ABDC70E0A0CF(iVar0, "vshwout");
	}
	else
	{
		Global_1626500.f_87960[3] = -1;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "vsenout") == 2)
	{
		Global_1626500.f_87960[2] = unk_0x9C70ABDC70E0A0CF(iVar0, "vsenout");
	}
	else
	{
		Global_1626500.f_87960[2] = -1;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "vstgout") == 2)
	{
		Global_1626500.f_87960[4] = unk_0x9C70ABDC70E0A0CF(iVar0, "vstgout");
	}
	else
	{
		Global_1626500.f_87960[4] = -1;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "vsbsout") == 2)
	{
		Global_1626500.f_87960[5] = unk_0x9C70ABDC70E0A0CF(iVar0, "vsbsout");
	}
	else
	{
		Global_1626500.f_87960[5] = -1;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "alfutvs") == 2)
	{
		Global_1626500.f_87967 = unk_0x9C70ABDC70E0A0CF(iVar0, "alfutvs");
	}
	else
	{
		Global_1626500.f_87967 = 0;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "vsdfstc") == 2)
	{
		Global_1626500.f_87968 = unk_0x9C70ABDC70E0A0CF(iVar0, "vsdfstc");
	}
	else if (((!unk_0x08BA6DD398CA197C(Global_1626500.f_12, 23) && !unk_0x08BA6DD398CA197C(Global_1626500.f_12, 24)) && !unk_0x08BA6DD398CA197C(Global_1626500.f_13, 31)) && !unk_0x08BA6DD398CA197C(Global_1626500.f_14, 8))
	{
		Global_1626500.f_87968 = -1;
	}
	else if (((!unk_0x08BA6DD398CA197C(Global_1626500.f_12, 23) && unk_0x08BA6DD398CA197C(Global_1626500.f_12, 24)) && !unk_0x08BA6DD398CA197C(Global_1626500.f_13, 31)) && !unk_0x08BA6DD398CA197C(Global_1626500.f_14, 8))
	{
		Global_1626500.f_87968 = 0;
	}
	else if (((unk_0x08BA6DD398CA197C(Global_1626500.f_12, 23) && !unk_0x08BA6DD398CA197C(Global_1626500.f_12, 24)) && !unk_0x08BA6DD398CA197C(Global_1626500.f_13, 31)) && !unk_0x08BA6DD398CA197C(Global_1626500.f_14, 8))
	{
		Global_1626500.f_87968 = 1;
	}
	else if (((!unk_0x08BA6DD398CA197C(Global_1626500.f_12, 23) && !unk_0x08BA6DD398CA197C(Global_1626500.f_12, 24)) && unk_0x08BA6DD398CA197C(Global_1626500.f_13, 31)) && !unk_0x08BA6DD398CA197C(Global_1626500.f_14, 8))
	{
		Global_1626500.f_87968 = 2;
	}
	else if (((!unk_0x08BA6DD398CA197C(Global_1626500.f_12, 23) && !unk_0x08BA6DD398CA197C(Global_1626500.f_12, 24)) && !unk_0x08BA6DD398CA197C(Global_1626500.f_13, 31)) && unk_0x08BA6DD398CA197C(Global_1626500.f_14, 8))
	{
		Global_1626500.f_87968 = 3;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "dspteam") == 2)
	{
		Global_1626500.f_97568 = unk_0x9C70ABDC70E0A0CF(iVar0, "dspteam");
	}
	else
	{
		Global_1626500.f_97568 = -1;
	}
	if (!func_100() && !func_208())
	{
		if (unk_0x5F893A1517F11B23(iParam1))
		{
			StringCopy(&(Global_1626500.f_83874), unk_0x2A1C48CBD532E1D8(iVar0, "nm"), 64);
		}
		else
		{
			StringCopy(&(Global_1626500.f_83874), func_207(), 64);
		}
	}
	else
	{
		StringCopy(&(Global_1626500.f_83874), unk_0x2A1C48CBD532E1D8(iVar0, "nm"), 64);
	}
	Global_1626500.f_84518 = unk_0x9C70ABDC70E0A0CF(iVar0, "mgrk");
	Global_1626500.f_84519 = unk_0x9C70ABDC70E0A0CF(iVar0, "mght");
	StringCopy(&(Global_1626500.f_83896[0 /*16*/]), "", 64);
	StringCopy(&(Global_1626500.f_83896[1 /*16*/]), "", 64);
	StringCopy(&(Global_1626500.f_83896[2 /*16*/]), "", 64);
	StringCopy(&(Global_1626500.f_83896[3 /*16*/]), "", 64);
	StringCopy(&(Global_1626500.f_83896[4 /*16*/]), "", 64);
	StringCopy(&(Global_1626500.f_83896[5 /*16*/]), "", 64);
	StringCopy(&(Global_1626500.f_83896[6 /*16*/]), "", 64);
	StringCopy(&(Global_1626500.f_83896[7 /*16*/]), "", 64);
	uVar24 = unk_0x94A922605867FB40(iVar0, "dec");
	iVar25 = unk_0x8BC27E98D5626ED8(unk_0xFC74DD7217B3E5DB(uVar24, 0));
	if (iParam1 == -1 || unk_0x5F893A1517F11B23(iParam1))
	{
		if (iVar25 <= 63)
		{
			iVar2 = 0;
			while (iVar2 <= (unk_0x697D8F5133F938AB(iVar24) - 1))
			{
				StringCopy(&(Global_1626500.f_83896[iVar2 /*16*/]), unk_0xFC74DD7217B3E5DB(iVar24, iVar2), 64);
				iVar2++;
			}
		}
		else
		{
			sVar27 = unk_0xFC74DD7217B3E5DB(iVar24, 0);
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
					StringCopy(&(Global_1626500.f_83896[iVar2 /*16*/]), unk_0xE187E39B4E7355FC(sVar27, (63 * iVar2), iVar26), 64);
				}
				iVar2++;
			}
		}
	}
	else
	{
		StringCopy(&(Global_1626500.f_83896[0 /*16*/]), func_207(), 64);
	}
	Global_1626500.f_27 = unk_0x9C70ABDC70E0A0CF(iVar0, "tnum");
	Global_1626500.f_28 = unk_0x9C70ABDC70E0A0CF(iVar0, "mtnum");
	if (!func_206())
	{
		if (!unk_0x08BA6DD398CA197C(Global_1626500.f_15, 14))
		{
			Global_1626500.f_26 = Global_1626500.f_27;
		}
		else if (unk_0xD44C5C9A5AB591EF(iVar0, "dtn") == 2)
		{
			Global_1626500.f_26 = unk_0x9C70ABDC70E0A0CF(iVar0, "dtn");
		}
		else
		{
			Global_1626500.f_26 = Global_1626500.f_27;
		}
	}
	else
	{
		Global_1626500.f_26 = Global_1626500.f_27;
	}
	if ((Global_1626500 == 0 && Global_2442442.f_547.f_11 != 0) && Global_1626500.f_27 != Global_2442442.f_547.f_11)
	{
		if (!Global_262145.f_4863 && func_57(Global_1626500.f_102390))
		{
			iVar28 = func_204();
			if (Global_2442442.f_547.f_11 < iVar28)
			{
				Global_2442442.f_547.f_11 = iVar28;
				if (unk_0x0C1D3C552325765B() != -1)
				{
					Global_1613455[unk_0x0C1D3C552325765B() /*35*/] = Global_2442442.f_547.f_11;
				}
			}
		}
		Global_1626500.f_27 = Global_2442442.f_547.f_11;
		Global_1626500.f_26 = Global_1626500.f_27;
	}
	if (Global_1626500 == 1)
	{
		if (Global_1626500.f_27 > 4)
		{
			Global_1626500.f_27 = 4;
		}
	}
	else if (Global_1626500.f_27 > 4)
	{
		Global_1626500.f_27 = 4;
	}
	Global_1626500.f_75427 = unk_0x9C70ABDC70E0A0CF(iVar0, "atmdm");
	Global_1626500.f_41 = unk_0x9C70ABDC70E0A0CF(iVar0, "trel");
	Global_1626500.f_84488 = unk_0x9C70ABDC70E0A0CF(iVar0, "ltm");
	Global_1626500.f_69 = { unk_0x3D4621E99B9FFBE0(iVar0, "vcpr") };
	if (unk_0xD44C5C9A5AB591EF(iVar0, "hstat") == 2)
	{
		Global_1626500.f_84459 = unk_0x9C70ABDC70E0A0CF(iVar0, "hstat");
	}
	else
	{
		Global_1626500.f_84459 = 0;
	}
	iVar29 = 0;
	while (iVar29 <= 19)
	{
		StringCopy(&cVar9, "rzpos", 8);
		StringIntConCat(&cVar9, iVar29, 8);
		if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar9) == 5)
		{
			Global_1626500.f_57923[iVar29 /*3*/] = { unk_0x3D4621E99B9FFBE0(iVar0, &cVar9) };
		}
		else
		{
			Global_1626500.f_57923[iVar29 /*3*/] = { 0f, 0f, 0f };
		}
		iVar29++;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "numzr") == 2)
	{
		Global_1626500.f_57984 = unk_0x9C70ABDC70E0A0CF(iVar0, "numzr");
	}
	else
	{
		Global_1626500.f_57984 = 0;
	}
	iVar30 = unk_0x458C2A004F0678D0(iParam0, "ene");
	iVar31 = unk_0x9C70ABDC70E0A0CF(iVar30, "no");
	iVar2 = 0;
	while (iVar2 < 5)
	{
		StringCopy(&cVar9, "hpped", 8);
		if (iVar2 > 0)
		{
			StringIntConCat(&cVar9, iVar2 + 1, 8);
		}
		if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar9) == 2 && iVar31 > unk_0x9C70ABDC70E0A0CF(iVar0, &cVar9))
		{
			Global_1626500.f_75298[iVar2] = unk_0x9C70ABDC70E0A0CF(iVar0, &cVar9);
		}
		else
		{
			Global_1626500.f_75298[iVar2] = -1;
		}
		iVar2++;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "rsgmx") == 2 && unk_0xD44C5C9A5AB591EF(iVar0, "rsgnu") == 2)
	{
		Global_1626500.f_75304 = unk_0x9C70ABDC70E0A0CF(iVar0, "rsgmx");
		Global_1626500.f_75305 = unk_0x9C70ABDC70E0A0CF(iVar0, "rsgnu");
		Global_1626500.f_75306 = unk_0x9C70ABDC70E0A0CF(iVar0, "rsgbs");
		if (Global_1626500.f_75304 > 0 && Global_1626500.f_75305 != 0)
		{
			iVar2 = 0;
			while (iVar2 <= (Global_1626500.f_75304 - 1))
			{
				if (iVar2 < 10)
				{
					StringCopy(&cVar9, "rsg", 8);
					StringIntConCat(&cVar9, iVar2, 8);
					MemCopy(&cVar32, {cVar9}, 4);
					StringConCat(&cVar32, "mx", 16);
					MemCopy(&cVar36, {cVar9}, 4);
					StringConCat(&cVar36, "nu", 16);
					if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar32) == 2 && unk_0xD44C5C9A5AB591EF(iVar0, &cVar36) == 2)
					{
						Global_1626500.f_75307[iVar2] = unk_0x9C70ABDC70E0A0CF(iVar0, &cVar32);
						Global_1626500.f_75318[iVar2] = unk_0x9C70ABDC70E0A0CF(iVar0, &cVar36);
						MemCopy(&cVar32, {cVar9}, 4);
						StringConCat(&cVar32, "bs", 16);
						Global_1626500.f_75329[iVar2] = unk_0x9C70ABDC70E0A0CF(iVar0, &cVar32);
					}
				}
				iVar2++;
			}
		}
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "tshd") == 2)
	{
		Global_1626500.f_84511 = unk_0x9C70ABDC70E0A0CF(iVar0, "tshd");
	}
	else
	{
		Global_1626500.f_84511 = -1;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "mrd") == 2)
	{
		Global_1626500.f_84512 = unk_0x9C70ABDC70E0A0CF(iVar0, "mrd");
	}
	else
	{
		Global_1626500.f_84512 = 15;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "srct") == 2)
	{
		Global_1626500.f_84513 = unk_0x9C70ABDC70E0A0CF(iVar0, "srct");
	}
	else
	{
		Global_1626500.f_84513 = -1;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "tptbd") == 2)
	{
		Global_1626500.f_84514 = unk_0x9C70ABDC70E0A0CF(iVar0, "tptbd");
	}
	else
	{
		Global_1626500.f_84514 = -1;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "tptba") == 2)
	{
		Global_1626500.f_84515 = unk_0x9C70ABDC70E0A0CF(iVar0, "tptba");
	}
	else
	{
		Global_1626500.f_84515 = -1;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "atspos") == 5)
	{
		Global_1626500.f_99410 = { unk_0x3D4621E99B9FFBE0(iVar0, "atspos") };
	}
	else
	{
		Global_1626500.f_99410 = { 0f, 0f, 0f };
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "atscmp") == 5)
	{
		Global_1626500.f_99404 = { unk_0x3D4621E99B9FFBE0(iVar0, "atscmp") };
	}
	else
	{
		Global_1626500.f_99404 = { 0f, 0f, 0f };
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "atscmr") == 5)
	{
		Global_1626500.f_99407 = { unk_0x3D4621E99B9FFBE0(iVar0, "atscmr") };
	}
	else
	{
		Global_1626500.f_99407 = { 0f, 0f, 0f };
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "atsfov") == 3)
	{
		Global_1626500.f_99413 = unk_0xCB33F3C96453C329(iVar0, "atsfov");
	}
	else
	{
		Global_1626500.f_99413 = 45f;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "atshed") == 3)
	{
		Global_1626500.f_99414 = unk_0xCB33F3C96453C329(iVar0, "atshed");
	}
	else
	{
		Global_1626500.f_99414 = 0f;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "atsveh") == 2)
	{
		Global_1626500.f_99415 = unk_0x9C70ABDC70E0A0CF(iVar0, "atsveh");
	}
	else
	{
		Global_1626500.f_99415 = 0;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "hpdt1") == 2)
	{
		Global_1626500.f_84460[0] = unk_0x9C70ABDC70E0A0CF(iVar0, "hpdt1");
	}
	else
	{
		Global_1626500.f_84460[0] = 0;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "hpdt2") == 2)
	{
		Global_1626500.f_84460[1] = unk_0x9C70ABDC70E0A0CF(iVar0, "hpdt2");
	}
	else
	{
		Global_1626500.f_84460[1] = 0;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "vdt") == 2)
	{
		Global_1626500.f_84463 = unk_0x9C70ABDC70E0A0CF(iVar0, "vdt");
	}
	else
	{
		Global_1626500.f_84463 = 0;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "hbrbs") == 2)
	{
		Global_1626500.f_97550 = unk_0x9C70ABDC70E0A0CF(iVar0, "hbrbs");
	}
	else
	{
		Global_1626500.f_97550 = 0;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "hbrtt") == 2)
	{
		Global_1626500.f_97551 = unk_0x9C70ABDC70E0A0CF(iVar0, "hbrtt");
	}
	else
	{
		Global_1626500.f_97551 = 0;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "hbrttm") == 2)
	{
		Global_1626500.f_97552 = unk_0x9C70ABDC70E0A0CF(iVar0, "hbrttm");
	}
	else
	{
		Global_1626500.f_97552 = 0;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "hbrtrl") == 2)
	{
		Global_1626500.f_97553 = unk_0x9C70ABDC70E0A0CF(iVar0, "hbrtrl");
	}
	else
	{
		Global_1626500.f_97553 = -1;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "hbrpdt") == 2)
	{
		Global_1626500.f_97555 = unk_0x9C70ABDC70E0A0CF(iVar0, "hbrpdt");
	}
	else
	{
		Global_1626500.f_97555 = 0;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "hbrvdt") == 2)
	{
		Global_1626500.f_97557 = unk_0x9C70ABDC70E0A0CF(iVar0, "hbrvdt");
	}
	else
	{
		Global_1626500.f_97557 = 0;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "hbrkt") == 2)
	{
		Global_1626500.f_97559 = unk_0x9C70ABDC70E0A0CF(iVar0, "hbrkt");
	}
	else
	{
		Global_1626500.f_97559 = 0;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "hbrph") == 2)
	{
		Global_1626500.f_97562 = unk_0x9C70ABDC70E0A0CF(iVar0, "hbrph");
	}
	else
	{
		Global_1626500.f_97562 = 0;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "hecam") == 2)
	{
		Global_1626500.f_97563 = unk_0x9C70ABDC70E0A0CF(iVar0, "hecam");
	}
	else
	{
		Global_1626500.f_97563 = 0;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "sdrvm") == 2)
	{
		Global_1626500.f_99858 = unk_0x9C70ABDC70E0A0CF(iVar0, "sdrvm");
	}
	else
	{
		Global_1626500.f_99858 = 10000;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "inumbnc") == 2)
	{
		Global_1626500.f_99872 = unk_0x9C70ABDC70E0A0CF(iVar0, "inumbnc");
	}
	else
	{
		Global_1626500.f_99872 = 10000;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "mdmgm") == 3)
	{
		Global_1626500.f_99859 = unk_0xCB33F3C96453C329(iVar0, "mdmgm");
	}
	else
	{
		Global_1626500.f_99859 = 1f;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "itsms") == 2)
	{
		Global_1626500.f_102454 = unk_0x9C70ABDC70E0A0CF(iVar0, "itsms");
	}
	else
	{
		Global_1626500.f_102454 = 1;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "igls") == 2)
	{
		Global_1626500.f_102455 = unk_0x9C70ABDC70E0A0CF(iVar0, "igls");
	}
	else
	{
		Global_1626500.f_102455 = 0;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "twdas") == 3)
	{
		Global_1626500.f_99860 = unk_0xCB33F3C96453C329(iVar0, "twdas");
	}
	else
	{
		Global_1626500.f_99860 = 0f;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "vdt") == 2)
	{
		Global_1626500.f_102391 = unk_0x9C70ABDC70E0A0CF(iVar0, "sphft");
	}
	else
	{
		Global_1626500.f_102391 = 0;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "vdt") == 2)
	{
		Global_1626500.f_102413 = unk_0x9C70ABDC70E0A0CF(iVar0, "cmxdftms");
	}
	else
	{
		Global_1626500.f_102413 = 0;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "cmxtliv") == 2)
	{
		Global_1626500.f_102430 = unk_0x9C70ABDC70E0A0CF(iVar0, "cmxtliv");
	}
	else
	{
		Global_1626500.f_102430 = 0;
	}
	if (((unk_0xD44C5C9A5AB591EF(iVar0, "hmmtt") == 2 && unk_0xD44C5C9A5AB591EF(iVar0, "hmmts") == 2) && unk_0xD44C5C9A5AB591EF(iVar0, "hmmte") == 2) && unk_0xD44C5C9A5AB591EF(iVar0, "hmmth") == 2)
	{
		Global_1626500.f_97564 = unk_0x9C70ABDC70E0A0CF(iVar0, "hmmtt");
		Global_1626500.f_97565 = unk_0x9C70ABDC70E0A0CF(iVar0, "hmmts");
		Global_1626500.f_97566 = unk_0x9C70ABDC70E0A0CF(iVar0, "hmmte");
		Global_1626500.f_97567 = unk_0x9C70ABDC70E0A0CF(iVar0, "hmmth");
	}
	else
	{
		Global_1626500.f_97564 = 0;
		Global_1626500.f_97565 = 0;
		Global_1626500.f_97566 = 0;
		Global_1626500.f_97567 = 0;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "tstrm") == 2)
	{
		Global_1626500.f_99351 = unk_0x9C70ABDC70E0A0CF(iVar0, "tstrm");
	}
	else
	{
		Global_1626500.f_99351 = 0;
	}
	iVar2 = 0;
	while (iVar2 <= 35)
	{
		StringCopy(&cVar9, "dtspk", 8);
		StringIntConCat(&cVar9, iVar2, 8);
		if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1626500.f_87557[iVar2 /*8*/]), unk_0x2A1C48CBD532E1D8(iVar0, &cVar9), 32);
		}
		else
		{
			StringCopy(&(Global_1626500.f_87557[iVar2 /*8*/]), "", 32);
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 <= 2)
	{
		StringCopy(&cVar9, "cspnm", 8);
		StringIntConCat(&cVar9, iVar2, 8);
		if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1626500.f_75151[iVar2 /*16*/]), unk_0x2A1C48CBD532E1D8(iVar0, &cVar9), 64);
		}
		else
		{
			StringCopy(&(Global_1626500.f_75151[iVar2 /*16*/]), "", 64);
		}
		StringCopy(&cVar9, "csvnm", 8);
		StringIntConCat(&cVar9, iVar2, 8);
		if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1626500.f_75200[iVar2 /*16*/]), unk_0x2A1C48CBD532E1D8(iVar0, &cVar9), 64);
		}
		else
		{
			StringCopy(&(Global_1626500.f_75200[iVar2 /*16*/]), "", 64);
		}
		StringCopy(&cVar9, "csonm", 8);
		StringIntConCat(&cVar9, iVar2, 8);
		if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1626500.f_75249[iVar2 /*16*/]), unk_0x2A1C48CBD532E1D8(iVar0, &cVar9), 64);
		}
		else
		{
			StringCopy(&(Global_1626500.f_75249[iVar2 /*16*/]), "", 64);
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 <= 4)
	{
		StringCopy(&cVar9, "otxsgo", 8);
		StringIntConCat(&cVar9, iVar2, 8);
		if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1626500.f_75340[iVar2 /*16*/]), unk_0x2A1C48CBD532E1D8(iVar0, &cVar9), 64);
		}
		else
		{
			StringCopy(&(Global_1626500.f_75340[iVar2 /*16*/]), "", 64);
		}
		iVar2++;
	}
	iVar40 = 0;
	while (iVar40 <= 3)
	{
		iVar3 = 0;
		while (iVar3 <= 12)
		{
			StringCopy(&cVar9, "ofit", 8);
			StringIntConCat(&cVar9, iVar3 + 1, 8);
			StringIntConCat(&cVar9, iVar40, 8);
			if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar9) == 2)
			{
				Global_1626500.f_87891[iVar40 /*14*/][iVar3] = unk_0x9C70ABDC70E0A0CF(iVar0, &cVar9);
			}
			iVar3++;
		}
		StringCopy(&cVar9, "ofs1", 8);
		StringIntConCat(&cVar9, iVar40, 8);
		if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar9) == 2)
		{
			Global_1626500.f_87984[iVar40 /*2*/][0] = unk_0x9C70ABDC70E0A0CF(iVar0, &cVar9);
		}
		else
		{
			Global_1626500.f_87984[iVar40 /*2*/][0] = 0;
		}
		StringCopy(&cVar9, "mask1", 8);
		StringIntConCat(&cVar9, iVar40, 8);
		if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar9) == 2)
		{
			Global_1626500.f_87998[iVar40 /*2*/][0] = unk_0x9C70ABDC70E0A0CF(iVar0, &cVar9);
		}
		else
		{
			Global_1626500.f_87998[iVar40 /*2*/][0] = 0;
		}
		StringCopy(&cVar9, "gear", 8);
		StringIntConCat(&cVar9, iVar40, 8);
		if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar9) == 2)
		{
			Global_1626500.f_87969[iVar40] = unk_0x9C70ABDC70E0A0CF(iVar0, &cVar9);
		}
		else
		{
			Global_1626500.f_87969[iVar40] = 0;
		}
		StringCopy(&cVar9, "geard", 8);
		StringIntConCat(&cVar9, iVar40, 8);
		if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar9) == 2)
		{
			Global_1626500.f_87974[iVar40] = unk_0x9C70ABDC70E0A0CF(iVar0, &cVar9);
		}
		else
		{
			Global_1626500.f_87974[iVar40] = -1;
		}
		StringCopy(&cVar9, "apwfr", 8);
		StringIntConCat(&cVar9, iVar40, 8);
		if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar9) == 2)
		{
			Global_1626500.f_96967[iVar40] = unk_0x9C70ABDC70E0A0CF(iVar0, &cVar9);
		}
		else
		{
			Global_1626500.f_96967[iVar40] = -1;
		}
		StringCopy(&cVar9, "apwlr", 8);
		StringIntConCat(&cVar9, iVar40, 8);
		if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar9) == 2)
		{
			Global_1626500.f_96972[iVar40] = unk_0x9C70ABDC70E0A0CF(iVar0, &cVar9);
		}
		else
		{
			Global_1626500.f_96972[iVar40] = -1;
		}
		StringCopy(&cVar9, "tcmin", 8);
		StringIntConCat(&cVar9, iVar40, 8);
		if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar9) == 2 && !func_172())
		{
			Global_1626500.f_97306[iVar40] = unk_0x9C70ABDC70E0A0CF(iVar0, &cVar9);
		}
		else
		{
			Global_1626500.f_97306[iVar40] = 0;
		}
		iVar3 = 0;
		while (iVar3 <= 3)
		{
			StringCopy(&cVar9, "trcmn", 8);
			StringIntConCat(&cVar9, iVar3, 8);
			StringIntConCat(&cVar9, iVar40, 8);
			if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar9) == 2 && !func_172())
			{
				Global_1626500.f_97311[iVar40 /*5*/][iVar3] = unk_0x9C70ABDC70E0A0CF(iVar0, &cVar9);
			}
			else
			{
				Global_1626500.f_97311[iVar40 /*5*/][iVar3] = 0;
			}
			iVar3++;
		}
		StringCopy(&cVar9, "tmrsp", 8);
		StringIntConCat(&cVar9, iVar40, 8);
		if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar9) == 2)
		{
			Global_1626500.f_97333[iVar40] = unk_0x9C70ABDC70E0A0CF(iVar0, &cVar9);
		}
		else
		{
			Global_1626500.f_97333[iVar40] = 0;
		}
		StringCopy(&cVar9, "tmvhp", 8);
		StringIntConCat(&cVar9, iVar40, 8);
		if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar9) == 2)
		{
			Global_1626500.f_39344[iVar40] = unk_0x9C70ABDC70E0A0CF(iVar0, &cVar9);
		}
		else
		{
			Global_1626500.f_39344[iVar40] = 100;
		}
		StringCopy(&cVar9, "tblty", 8);
		StringIntConCat(&cVar9, iVar40, 8);
		if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar9) == 2)
		{
			Global_1626500.f_39354[iVar40] = unk_0x9C70ABDC70E0A0CF(iVar0, &cVar9);
		}
		else
		{
			Global_1626500.f_39354[iVar40] = 0;
		}
		StringCopy(&cVar9, "pmpos", 8);
		StringIntConCat(&cVar9, iVar40, 8);
		if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar9) == 5)
		{
			Global_1626500.f_83408[iVar40 /*3*/] = { unk_0x3D4621E99B9FFBE0(iVar0, &cVar9) };
		}
		else
		{
			Global_1626500.f_83408[iVar40 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar9, "pmpoi", 8);
		StringIntConCat(&cVar9, iVar40, 8);
		if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar9) == 5)
		{
			Global_1626500.f_83421[iVar40 /*3*/] = { unk_0x3D4621E99B9FFBE0(iVar0, &cVar9) };
		}
		else
		{
			Global_1626500.f_83421[iVar40 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar9, "pmrad", 8);
		StringIntConCat(&cVar9, iVar40, 8);
		if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar9) == 3)
		{
			Global_1626500.f_83434[iVar40] = unk_0xCB33F3C96453C329(iVar0, &cVar9);
		}
		else
		{
			Global_1626500.f_83434[iVar40] = 0f;
		}
		StringCopy(&cVar9, "dfofit", 8);
		StringIntConCat(&cVar9, iVar40, 8);
		if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar9) == 2)
		{
			Global_1626500.f_87948[iVar40] = unk_0x9C70ABDC70E0A0CF(iVar0, &cVar9);
		}
		else
		{
			Global_1626500.f_87948[iVar40] = -1;
		}
		StringCopy(&cVar9, "dfstyl", 8);
		StringIntConCat(&cVar9, iVar40, 8);
		if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar9) == 2)
		{
			Global_1626500.f_87993[iVar40] = unk_0x9C70ABDC70E0A0CF(iVar0, &cVar9);
		}
		else
		{
			Global_1626500.f_87993[iVar40] = -1;
		}
		StringCopy(&cVar9, "clrovr", 8);
		StringIntConCat(&cVar9, iVar40, 8);
		if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar9) == 2)
		{
			Global_1626500.f_80279[iVar40] = unk_0x9C70ABDC70E0A0CF(iVar0, &cVar9);
		}
		else
		{
			Global_1626500.f_80279[iVar40] = -1;
		}
		iVar41 = 0;
		while (iVar41 <= 1)
		{
			StringCopy(&cVar11, "trstp", 16);
			StringIntConCat(&cVar11, iVar40, 16);
			if (iVar41 > 0)
			{
				StringIntConCat(&cVar11, iVar41, 16);
			}
			if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar11) == 5)
			{
				Global_1626500.f_83533[iVar40 /*27*/][iVar41 /*13*/][0 /*3*/] = { unk_0x3D4621E99B9FFBE0(iVar0, &cVar11) };
			}
			else
			{
				Global_1626500.f_83533[iVar40 /*27*/][iVar41 /*13*/][0 /*3*/] = { 0f, 0f, 0f };
			}
			StringCopy(&cVar11, "trstf", 16);
			StringIntConCat(&cVar11, iVar40, 16);
			if (iVar41 > 0)
			{
				StringIntConCat(&cVar11, iVar41, 16);
			}
			if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar11) == 5)
			{
				Global_1626500.f_83687[iVar40 /*27*/][iVar41 /*13*/][0 /*3*/] = { unk_0x3D4621E99B9FFBE0(iVar0, &cVar11) };
			}
			else
			{
				Global_1626500.f_83687[iVar40 /*27*/][iVar41 /*13*/][0 /*3*/] = { 0f, 0f, 0f };
			}
			StringCopy(&cVar11, "trsth", 16);
			StringIntConCat(&cVar11, iVar40, 16);
			if (iVar41 > 0)
			{
				StringIntConCat(&cVar11, iVar41, 16);
			}
			if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar11) == 3)
			{
				Global_1626500.f_83642[iVar40 /*11*/][iVar41 /*5*/][0] = unk_0xCB33F3C96453C329(iVar0, &cVar11);
			}
			else
			{
				Global_1626500.f_83642[iVar40 /*11*/][iVar41 /*5*/][0] = 0f;
			}
			iVar42 = 0;
			while (iVar42 <= 3)
			{
				StringCopy(&cVar11, "trstp", 16);
				StringIntConCat(&cVar11, iVar40, 16);
				StringIntConCat(&cVar11, iVar41, 16);
				StringConCat(&cVar11, "n", 16);
				StringIntConCat(&cVar11, iVar42, 16);
				if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar11) == 5)
				{
					Global_1626500.f_83533[iVar40 /*27*/][iVar41 /*13*/][iVar42 /*3*/] = { unk_0x3D4621E99B9FFBE0(iVar0, &cVar11) };
				}
				else
				{
					Global_1626500.f_83533[iVar40 /*27*/][iVar41 /*13*/][iVar42 /*3*/] = { 0f, 0f, 0f };
				}
				StringCopy(&cVar11, "trsth", 16);
				StringIntConCat(&cVar11, iVar40, 16);
				StringIntConCat(&cVar11, iVar41, 16);
				StringConCat(&cVar11, "n", 16);
				StringIntConCat(&cVar11, iVar42, 16);
				if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar11) == 3)
				{
					Global_1626500.f_83642[iVar40 /*11*/][iVar41 /*5*/][iVar42] = unk_0xCB33F3C96453C329(iVar0, &cVar11);
				}
				else
				{
					Global_1626500.f_83642[iVar40 /*11*/][iVar41 /*5*/][iVar42] = 0f;
				}
				iVar42++;
			}
			StringCopy(&cVar9, "trsrl", 8);
			StringIntConCat(&cVar9, iVar40, 8);
			StringIntConCat(&cVar9, iVar41, 8);
			if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar9) == 2)
			{
				Global_1626500.f_99845[iVar40 /*3*/][iVar41] = unk_0x9C70ABDC70E0A0CF(iVar0, &cVar9);
			}
			else
			{
				Global_1626500.f_99845[iVar40 /*3*/][iVar41] = 0;
			}
			iVar41++;
		}
		iVar43 = 0;
		while (iVar43 <= 3)
		{
			StringCopy(&cVar11, "iltt", 16);
			StringIntConCat(&cVar11, iVar40, 16);
			StringIntConCat(&cVar11, iVar43, 16);
			if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar11) == 2)
			{
				Global_1626500.f_102392[iVar40 /*5*/][iVar43] = unk_0x9C70ABDC70E0A0CF(iVar0, &cVar11);
			}
			else
			{
				Global_1626500.f_102392[iVar40 /*5*/][iVar43] = 0;
			}
			iVar43++;
		}
		iVar41 = 0;
		while (iVar41 <= 3)
		{
			StringCopy(&cVar9, "pvp", 8);
			StringIntConCat(&cVar9, iVar40, 8);
			if (iVar41 > 0)
			{
				StringIntConCat(&cVar9, iVar41, 8);
			}
			if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar9) == 5)
			{
				Global_1626500.f_99417[iVar40 /*13*/][iVar41 /*3*/] = { unk_0x3D4621E99B9FFBE0(iVar0, &cVar9) };
			}
			else
			{
				Global_1626500.f_99417[iVar40 /*13*/][iVar41 /*3*/] = { 0f, 0f, 0f };
			}
			StringCopy(&cVar9, "pvh", 8);
			StringIntConCat(&cVar9, iVar40, 8);
			if (iVar41 > 0)
			{
				StringIntConCat(&cVar9, iVar41, 8);
			}
			if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar9) == 3)
			{
				Global_1626500.f_99470[iVar40 /*5*/][iVar41] = unk_0xCB33F3C96453C329(iVar0, &cVar9);
			}
			else
			{
				Global_1626500.f_99470[iVar40 /*5*/][iVar41] = -1f;
			}
			iVar41++;
		}
		StringCopy(&cVar9, "tscpos", 8);
		if (iVar40 > 0)
		{
			StringIntConCat(&cVar9, iVar40, 8);
		}
		if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar9) == 5)
		{
			Global_1626500.f_99355[iVar40 /*3*/] = { unk_0x3D4621E99B9FFBE0(iVar0, &cVar9) };
		}
		else
		{
			Global_1626500.f_99355[iVar40 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar9, "tscrot", 8);
		if (iVar40 > 0)
		{
			StringIntConCat(&cVar9, iVar40, 8);
		}
		if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar9) == 5)
		{
			Global_1626500.f_99368[iVar40 /*3*/] = { unk_0x3D4621E99B9FFBE0(iVar0, &cVar9) };
		}
		else
		{
			Global_1626500.f_99368[iVar40 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar9, "tspos", 8);
		if (iVar40 > 0)
		{
			StringIntConCat(&cVar9, iVar40, 8);
		}
		if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar9) == 5)
		{
			Global_1626500.f_99381[iVar40 /*3*/] = { unk_0x3D4621E99B9FFBE0(iVar0, &cVar9) };
		}
		else
		{
			Global_1626500.f_99381[iVar40 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar9, "tscfov", 8);
		if (iVar40 > 0)
		{
			StringIntConCat(&cVar9, iVar40, 8);
		}
		if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar9) == 3)
		{
			Global_1626500.f_99394[iVar40] = unk_0xCB33F3C96453C329(iVar0, &cVar9);
		}
		else
		{
			Global_1626500.f_99394[iVar40] = 45f;
		}
		StringCopy(&cVar9, "tshead", 8);
		if (iVar40 > 0)
		{
			StringIntConCat(&cVar9, iVar40, 8);
		}
		if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar9) == 3)
		{
			Global_1626500.f_99399[iVar40] = unk_0xCB33F3C96453C329(iVar0, &cVar9);
		}
		else
		{
			Global_1626500.f_99399[iVar40] = 0f;
		}
		iVar40++;
	}
	iVar2 = 0;
	while (iVar2 <= 17)
	{
		StringCopy(&cVar9, "pnid", 8);
		StringIntConCat(&cVar9, iVar2, 8);
		if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1626500.f_96981[iVar2 /*18*/]), unk_0x2A1C48CBD532E1D8(iVar0, &cVar9), 64);
		}
		else
		{
			StringCopy(&(Global_1626500.f_96981[iVar2 /*18*/]), "", 64);
		}
		StringCopy(&cVar9, "pnlv", 8);
		StringIntConCat(&cVar9, iVar2, 8);
		if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar9) == 2)
		{
			Global_1626500.f_96981[iVar2 /*18*/].f_16 = unk_0x9C70ABDC70E0A0CF(iVar0, &cVar9);
		}
		else
		{
			Global_1626500.f_96981[iVar2 /*18*/].f_16 = 0;
		}
		StringCopy(&cVar9, "pnvr", 8);
		StringIntConCat(&cVar9, iVar2, 8);
		if (unk_0xD44C5C9A5AB591EF(iVar0, &cVar9) == 2 && !unk_0x509383441597090D(&(Global_1626500.f_96981[iVar2 /*18*/])))
		{
			Global_1626500.f_96981[iVar2 /*18*/].f_17 = unk_0x9C70ABDC70E0A0CF(iVar0, &cVar9);
		}
		else
		{
			Global_1626500.f_96981[iVar2 /*18*/].f_17 = -1;
		}
		iVar2++;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "cposr") == 3)
	{
		Global_1626500.f_99873 = unk_0xCB33F3C96453C329(iVar0, "cposr");
	}
	else
	{
		Global_1626500.f_99873 = 60f;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "cporv") == 3)
	{
		Global_1626500.f_99876 = unk_0xCB33F3C96453C329(iVar0, "cporv");
	}
	else
	{
		Global_1626500.f_99876 = -1f;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "bmber") == 2)
	{
		Global_1626500.f_99863 = unk_0x9C70ABDC70E0A0CF(iVar0, "bmber");
	}
	else
	{
		Global_1626500.f_99863 = 2;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "bmbet") == 2)
	{
		Global_1626500.f_99864 = unk_0x9C70ABDC70E0A0CF(iVar0, "bmbet");
	}
	else
	{
		Global_1626500.f_99864 = 3000;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "bmbsi") == 2)
	{
		Global_1626500.f_99865 = unk_0x9C70ABDC70E0A0CF(iVar0, "bmbsi");
	}
	else
	{
		Global_1626500.f_99865 = 150;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "bmbdi") == 3)
	{
		Global_1626500.f_99866 = unk_0xCB33F3C96453C329(iVar0, "bmbdi");
	}
	else
	{
		Global_1626500.f_99866 = 3f;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "bmbio") == 3)
	{
		Global_1626500.f_99867 = unk_0xCB33F3C96453C329(iVar0, "bmbio");
	}
	else
	{
		Global_1626500.f_99867 = 1f;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "fvjhdt") == 2)
	{
		Global_1626500.f_99868 = unk_0x9C70ABDC70E0A0CF(iVar0, "fvjhdt");
	}
	else
	{
		Global_1626500.f_99868 = 25;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "fvjhmd") == 2)
	{
		Global_1626500.f_99869 = unk_0x9C70ABDC70E0A0CF(iVar0, "fvjhmd");
	}
	else
	{
		Global_1626500.f_99869 = 5;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "fvjfvd") == 2)
	{
		Global_1626500.f_99870 = unk_0x9C70ABDC70E0A0CF(iVar0, "fvjfvd");
	}
	else
	{
		Global_1626500.f_99870 = 5;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "fvjfvc") == 2)
	{
		Global_1626500.f_99871 = unk_0x9C70ABDC70E0A0CF(iVar0, "fvjfvc");
	}
	else
	{
		Global_1626500.f_99871 = 2;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "cpopr") == 3)
	{
		Global_1626500.f_99874 = unk_0xCB33F3C96453C329(iVar0, "cpopr");
	}
	else
	{
		Global_1626500.f_99874 = 5f;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "cpohr") == 3)
	{
		Global_1626500.f_99875 = unk_0xCB33F3C96453C329(iVar0, "cpohr");
	}
	else
	{
		Global_1626500.f_99875 = 60f;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "ratc0") == 2)
	{
		Global_1626500.f_99877 = unk_0x9C70ABDC70E0A0CF(iVar0, "ratc0");
	}
	else
	{
		Global_1626500.f_99877 = 0;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "ratc1") == 2)
	{
		Global_1626500.f_99878 = unk_0x9C70ABDC70E0A0CF(iVar0, "ratc1");
	}
	else
	{
		Global_1626500.f_99878 = 0;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "ratc2") == 2)
	{
		Global_1626500.f_99879 = unk_0x9C70ABDC70E0A0CF(iVar0, "ratc2");
	}
	else
	{
		Global_1626500.f_99879 = 0;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "ratc3") == 2)
	{
		Global_1626500.f_99880 = unk_0x9C70ABDC70E0A0CF(iVar0, "ratc3");
	}
	else
	{
		Global_1626500.f_99880 = 0;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "ratc4") == 2)
	{
		Global_1626500.f_99881 = unk_0x9C70ABDC70E0A0CF(iVar0, "ratc4");
	}
	else
	{
		Global_1626500.f_99881 = 0;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "ratc5") == 2)
	{
		Global_1626500.f_99882 = unk_0x9C70ABDC70E0A0CF(iVar0, "ratc5");
	}
	else
	{
		Global_1626500.f_99882 = 0;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "ratc6") == 2)
	{
		Global_1626500.f_99883 = unk_0x9C70ABDC70E0A0CF(iVar0, "ratc6");
	}
	else
	{
		Global_1626500.f_99883 = 0;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "ratc9") == 2)
	{
		Global_1626500.f_99887 = unk_0x9C70ABDC70E0A0CF(iVar0, "ratc9");
	}
	else
	{
		Global_1626500.f_99887 = 0;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "ratc7") == 2)
	{
		Global_1626500.f_99885 = unk_0x9C70ABDC70E0A0CF(iVar0, "ratc7");
	}
	else
	{
		Global_1626500.f_99885 = 0;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "ratc8") == 2)
	{
		Global_1626500.f_99886 = unk_0x9C70ABDC70E0A0CF(iVar0, "ratc8");
	}
	else
	{
		Global_1626500.f_99886 = 0;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "ratcm") == 3)
	{
		Global_1626500.f_99884 = unk_0xCB33F3C96453C329(iVar0, "ratcm");
	}
	else
	{
		Global_1626500.f_99884 = -1f;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "cdrt") == 3)
	{
		Global_1626500.f_99889 = unk_0xCB33F3C96453C329(iVar0, "cdrt");
	}
	else
	{
		Global_1626500.f_99889 = -1f;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "csttl") == 4)
	{
		StringCopy(&(Global_1626500.f_99890), unk_0x2A1C48CBD532E1D8(iVar0, "csttl"), 16);
	}
	else
	{
		StringCopy(&(Global_1626500.f_99890), "", 16);
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "csstl") == 4)
	{
		StringCopy(&(Global_1626500.f_99894), unk_0x2A1C48CBD532E1D8(iVar0, "csstl"), 16);
	}
	else
	{
		StringCopy(&(Global_1626500.f_99894), "", 16);
	}
	func_203();
	if (unk_0xD44C5C9A5AB591EF(iVar0, "ssdsp") == 5)
	{
		Global_1626500.f_102344 = { unk_0x3D4621E99B9FFBE0(iVar0, "ssdsp") };
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "ssdsr") == 3)
	{
		Global_1626500.f_102347 = unk_0xCB33F3C96453C329(iVar0, "ssdsr");
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "ssder") == 3)
	{
		Global_1626500.f_102348 = unk_0xCB33F3C96453C329(iVar0, "ssder");
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "ssdst") == 2)
	{
		Global_1626500.f_102349 = unk_0x9C70ABDC70E0A0CF(iVar0, "ssdst");
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "ssdtg") == 2)
	{
		Global_1626500.f_102350 = unk_0x9C70ABDC70E0A0CF(iVar0, "ssdtg");
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "vwp0") == 2)
	{
		Global_1626500.f_102456 = unk_0x9C70ABDC70E0A0CF(iVar0, "vwp0");
	}
	else
	{
		Global_1626500.f_102456 = 0;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "vwp1") == 2)
	{
		Global_1626500.f_102457 = unk_0x9C70ABDC70E0A0CF(iVar0, "vwp1");
	}
	else
	{
		Global_1626500.f_102457 = 0;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "vwp2") == 2)
	{
		Global_1626500.f_102458 = unk_0x9C70ABDC70E0A0CF(iVar0, "vwp2");
	}
	else
	{
		Global_1626500.f_102458 = 0;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "vwp3") == 2)
	{
		Global_1626500.f_102459 = unk_0x9C70ABDC70E0A0CF(iVar0, "vwp3");
	}
	else
	{
		Global_1626500.f_102459 = 0;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "vwp4") == 2)
	{
		Global_1626500.f_102460 = unk_0x9C70ABDC70E0A0CF(iVar0, "vwp4");
	}
	else
	{
		Global_1626500.f_102460 = 0;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "vwpbhd") == 2)
	{
		Global_1626500.f_102461 = unk_0x9C70ABDC70E0A0CF(iVar0, "vwp0");
	}
	else
	{
		Global_1626500.f_102461 = 0;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "tsc3") == 3)
	{
		Global_1626500.f_102462 = unk_0xCB33F3C96453C329(iVar0, "tsc3");
	}
	else
	{
		Global_1626500.f_102462 = 0f;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "tsc4") == 3)
	{
		Global_1626500.f_102463 = unk_0xCB33F3C96453C329(iVar0, "tsc4");
	}
	else
	{
		Global_1626500.f_102463 = 0f;
	}
	if (unk_0xD44C5C9A5AB591EF(iVar0, "csstd") == 2)
	{
		Global_1626500.f_102464 = unk_0x9C70ABDC70E0A0CF(iVar0, "csstd");
	}
	else
	{
		Global_1626500.f_102464 = -1;
	}
}

void func_203()
{
	Global_1626500.f_102344 = { 0f, 0f, 0f };
	Global_1626500.f_102347 = 30f;
	Global_1626500.f_102348 = 5f;
	Global_1626500.f_102349 = 30000;
	Global_1626500.f_102350 = 15000;
}

int func_204()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x81C85E54237F8A2E(iVar0);
		if ((((unk_0xCB129F9A01D14082(iVar2) && unk_0x3F3C7C3B52DD0ECA(iVar2)) && !func_205(iVar2)) && Global_1588660[iVar2 /*532*/].f_201 != 8) && !unk_0x08BA6DD398CA197C(Global_1588660[iVar2 /*532*/].f_39.f_18, 14))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_205(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_94.f_32, 5);
}

bool func_206()
{
	return unk_0x08BA6DD398CA197C(Global_2442442.f_547.f_1, 0);
}

var func_207()
{
	return unk_0xFFC9DE7E93AEAE21("CREATOR_NO_T");
}

bool func_208()
{
	return unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_137, 0);
}

int func_209(int iParam0)
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
			return 20;
		
		default:
	}
	return 0;
}

void func_210()
{
	if (func_211())
	{
		Global_2450148.f_8 = 1;
	}
	Global_2450148.f_7 = 1;
}

bool func_211()
{
	return unk_0x08BA6DD398CA197C(Global_2442442.f_2, 11);
}

int func_212(int iParam0)
{
	if (unk_0xBECAD780226FC009() || (unk_0xD95D58B9AAC86D55() && iParam0 == 0))
	{
		if (unk_0xED4DB0F2EFE02B37(1) == 0 || unk_0xBDDCB194366C769C(1, -1) == 0)
		{
			return 0;
		}
	}
	else if (unk_0xED4DB0F2EFE02B37(1) == 0)
	{
		return 0;
	}
	if (func_213() == 0)
	{
		return 0;
	}
	return 1;
}

int func_213()
{
	if (unk_0xBECAD780226FC009() && unk_0xF6AED1327F669066())
	{
		return 1;
	}
	if (unk_0x65121BA303717C5B() && unk_0xF6AED1327F669066())
	{
		return 1;
	}
	if ((unk_0xD95D58B9AAC86D55() && unk_0xA7F2473F08003D66() == 0) && unk_0xF6AED1327F669066())
	{
		return 1;
	}
	if (unk_0x15B0CAB107CFCDE1() && unk_0xF6AED1327F669066())
	{
		return 1;
	}
	if (unk_0x955B8C8F89CC3AC0() && unk_0xF6AED1327F669066())
	{
		return 1;
	}
	return 0;
}

int func_214(int iParam0)
{
	if (unk_0xBECAD780226FC009() || (unk_0xD95D58B9AAC86D55() && iParam0 == 0))
	{
		if (unk_0xED4DB0F2EFE02B37(0) == 0 || unk_0xBDDCB194366C769C(0, -1) == 0)
		{
			return 0;
		}
	}
	else if (unk_0xED4DB0F2EFE02B37(0) == 0)
	{
		return 0;
	}
	if (func_213() == 0)
	{
		return 0;
	}
	return 1;
}

void func_215(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	Global_1626500.f_84507 = 0;
	if (bParam0)
	{
		if (!func_151())
		{
			Global_1626500.f_83867 = 0;
		}
		Global_1626500.f_57987 = -1;
		Global_1626500.f_11 = 0;
		Global_1626500.f_12 = 0;
		Global_1626500.f_13 = 0;
		Global_1626500.f_14 = 0;
		Global_1626500.f_15 = 0;
		Global_1626500.f_16 = 0;
		Global_1626500.f_17 = 0;
		Global_1626500.f_18 = 0;
		Global_1626500.f_19 = 0;
		Global_1626500.f_20 = 0;
		Global_1626500.f_88 = 0;
		Global_1626500.f_97332 = 0;
		Global_1626500.f_10 = 0;
		Global_1626500.f_22 = 0;
		Global_1626500.f_47 = 0;
		Global_1626500.f_24 = 0;
		Global_1626500.f_46 = 0;
		Global_1626500.f_48 = 0;
		Global_1626500.f_49 = 0;
		Global_1626500.f_51 = 0;
		Global_1626500.f_52 = 0;
		Global_1626500.f_53 = 0;
		Global_1626500.f_54 = 0;
		Global_1626500.f_26 = 0;
		Global_1626500.f_27 = 1;
		Global_1626500.f_6 = 0;
		Global_1626500.f_42 = 0;
		Global_1626500.f_45 = 1;
		Global_1626500.f_23 = 0;
		Global_1626500.f_84484 = 0;
		Global_1626500.f_84487 = 0;
		Global_1626500.f_84486 = 0;
		Global_1626500.f_84483 = 0;
		Global_1626500.f_102431 = 0;
		if (bParam1)
		{
			Global_1626500.f_4 = 0;
			Global_1626500.f_5 = 0;
		}
		Global_1626500.f_3 = 0;
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			Global_1626500.f_32044[iVar0 /*38*/] = -1;
			Global_1626500.f_32044[iVar0 /*38*/].f_1 = -1;
			Global_1626500.f_32044[iVar0 /*38*/].f_2 = 0;
			Global_1626500.f_32044[iVar0 /*38*/].f_3 = 0;
			iVar0++;
		}
		Global_1626500.f_84488 = 0;
		Global_1626500.f_84489 = 0;
		Global_1626500.f_84490 = 0;
		Global_1626500.f_84479 = -1;
		Global_1626500.f_84478 = 0;
		Global_1626500.f_58 = 0;
		Global_1626500.f_66 = { 0f, 0f, 0f };
		Global_1626500.f_69 = { 0f, 0f, 0f };
		Global_1626500.f_72 = { 0f, 0f, 0f };
		Global_1626500.f_75 = { 0f, 0f, 0f };
		Global_1626500.f_78 = { 0f, 0f, 0f };
		Global_1626500.f_81 = { 0f, 0f, 0f };
		Global_1626500.f_84 = 0f;
		Global_1626500.f_85 = 0f;
		Global_1626500.f_83842 = 0f;
		Global_1626500.f_87 = 0;
		Global_1626500.f_84506 = 0;
		Global_1626500.f_102422 = 0;
		Global_1626500.f_97544 = 0;
		iVar0 = 0;
		while (iVar0 <= 13)
		{
			Global_1626500.f_38740[iVar0] = 0;
			Global_1626500.f_38724[iVar0] = 0;
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1626500.f_87953[iVar0] = 0;
		Global_1626500.f_87960[iVar0] = -1;
		iVar0++;
	}
	Global_1626500.f_87967 = 0;
	Global_1626500.f_87968 = -1;
	Global_1626500.f_1 = -1;
	StringCopy(&(Global_1626500.f_84192), "", 24);
	iVar0 = 0;
	while (iVar0 <= 35)
	{
		StringCopy(&(Global_1626500.f_87557[iVar0 /*8*/]), "", 32);
		iVar0++;
	}
	Global_1626500.f_99351 = 0;
	Global_1626500.f_41 = 0;
	Global_1626500.f_60 = { 0f, 0f, 0f };
	Global_1626500.f_97543 = -1;
	Global_1626500.f_84485 = 0f;
	StringCopy(&(Global_1626500.f_83874), "", 64);
	StringCopy(&(Global_1626500.f_84176), "", 64);
	if (bParam2)
	{
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			StringCopy(&(Global_1626500.f_84160[iVar0 /*6*/]), "", 24);
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		StringCopy(&(Global_1626500.f_83896[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	func_225();
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		StringCopy(&(Global_1626500.f_32044[0 /*38*/].f_4[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	func_224();
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1626500.f_34[iVar0] = 0;
		Global_1626500.f_97306[iVar0] = 0;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1626500.f_97311[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		Global_1626500.f_29[iVar0] = 1;
		Global_1626500.f_83408[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1626500.f_83421[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1626500.f_83434[iVar0] = 0f;
		Global_1626500.f_99355[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1626500.f_99368[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1626500.f_99381[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1626500.f_99394[iVar0] = 45f;
		Global_1626500.f_99399[iVar0] = 0f;
		Global_1626500.f_80279[iVar0] = -1;
		StringCopy(&(Global_1626500.f_99710[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_1626500.f_99775[iVar0 /*16*/]), "", 64);
		Global_1626500.f_99840[iVar0] = 0;
		StringCopy(&(Global_1626500.f_99512[iVar0 /*16*/]), "", 64);
		Global_1626500.f_88007[iVar0] = -1;
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			StringCopy(&(Global_1626500.f_99577[iVar0 /*33*/][iVar1 /*16*/]), "", 64);
			iVar1++;
		}
		Global_1626500.f_32886[iVar0] = -1;
		Global_1626500.f_32891[iVar0] = -1;
		StringCopy(&(Global_1626500.f_102351[iVar0 /*4*/]), "", 16);
		StringCopy(&(Global_1626500.f_102368[iVar0 /*4*/]), "", 16);
		Global_1626500.f_102385[iVar0] = 0;
		Global_1626500.f_102415[iVar0] = 0;
		iVar0++;
	}
	Global_1626500.f_99404 = { 0f, 0f, 0f };
	Global_1626500.f_99407 = { 0f, 0f, 0f };
	Global_1626500.f_99410 = { 0f, 0f, 0f };
	Global_1626500.f_99413 = 45f;
	Global_1626500.f_99414 = 0f;
	Global_1626500.f_99415 = 0;
	Global_1626500.f_99858 = 10000;
	Global_1626500.f_99872 = 1;
	Global_1626500.f_99859 = 1f;
	Global_1626500.f_102454 = 1;
	Global_1626500.f_102455 = 0;
	Global_1626500.f_99860 = 0f;
	Global_1626500.f_99873 = 60f;
	Global_1626500.f_99874 = 5f;
	Global_1626500.f_99875 = 60f;
	Global_1626500.f_99876 = -1f;
	Global_1626500.f_99862 = 2;
	Global_1626500.f_99863 = 2;
	Global_1626500.f_99864 = 3000;
	Global_1626500.f_99865 = 150;
	Global_1626500.f_99866 = 3f;
	Global_1626500.f_99867 = 1f;
	Global_1626500.f_99868 = 25;
	Global_1626500.f_99869 = 5;
	Global_1626500.f_99870 = 5;
	Global_1626500.f_99871 = 2000;
	Global_1626500.f_99889 = -1f;
	StringCopy(&(Global_1626500.f_99890), "", 16);
	StringCopy(&(Global_1626500.f_99894), "", 16);
	Global_1626500.f_99877 = 0;
	Global_1626500.f_99886 = 0;
	Global_1626500.f_99878 = 0;
	Global_1626500.f_99879 = 0;
	Global_1626500.f_99880 = 0;
	Global_1626500.f_99881 = 0;
	Global_1626500.f_99882 = 0;
	Global_1626500.f_99883 = 0;
	Global_1626500.f_99887 = 0;
	Global_1626500.f_99884 = -1f;
	Global_1626500.f_99885 = 0;
	Global_1626500.f_99888 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		StringCopy(&(Global_1626500.f_75151[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_1626500.f_75200[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_1626500.f_75249[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		StringCopy(&(Global_1626500.f_75340[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		func_222(&(Global_1626500.f_88012[iVar0 /*1269*/]));
		func_220(&(Global_1626500.f_94358[iVar0 /*434*/]));
		iVar0++;
	}
	func_220(&(Global_1626500.f_96529));
	iVar0 = 0;
	while (iVar0 <= 24)
	{
		Global_1626500.f_97440[iVar0 /*4*/].f_3 = 0;
		Global_1626500.f_97440[iVar0 /*4*/] = { 0f, 0f, 0f };
		iVar0++;
	}
	Global_1626500.f_97541 = 0;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_1626500.f_57923[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
	Global_1626500.f_57984 = 0;
	iVar0 = 0;
	while (iVar0 <= 68)
	{
		func_185(&(Global_1626500.f_84520[iVar0 /*44*/]), iVar0);
		iVar0++;
	}
	Global_1626500.f_87846[0] = 0;
	Global_1626500.f_87846[1] = 0;
	Global_1626500.f_87850 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		func_219(&(Global_1626500.f_97338[iVar0 /*10*/]));
		iVar0++;
	}
	Global_1626500.f_102390 = 0;
	Global_1626500.f_2 = 0;
	Global_1626500.f_84459 = 0;
	Global_1626500.f_97332 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1626500.f_84492[iVar0] = -1;
		Global_1626500.f_97545[iVar0] = -1;
		iVar0++;
	}
	Global_1626500.f_102391 = 0;
	Global_1626500.f_102413 = 0;
	Global_1626500.f_84518 = 0;
	Global_1626500.f_84519 = 0;
	Global_1626500.f_97584 = 0.5f;
	Global_1626500.f_87864 = 1;
	Global_1626500.f_87866 = 5;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_1626500.f_97585[iVar0] = 0f;
		Global_1626500.f_97606[iVar0] = 0f;
		Global_1626500.f_97627[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1626500.f_39311[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1626500.f_39349[iVar0] = -1;
		iVar0++;
	}
	Global_1625255 = 0;
	Global_1626500.f_7 = 0;
	Global_1626500.f_84465 = 0;
	Global_1626500.f_31248 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1626500.f_79978)
	{
		Global_1626500.f_79978[iVar0 /*5*/] = { 0f, 0f, 0f };
		Global_1626500.f_79978[iVar0 /*5*/].f_3 = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1626500.f_32008[iVar0 /*3*/][0] = 0;
		Global_1626500.f_32008[iVar0 /*3*/][1] = 0;
		Global_1626500.f_31995[iVar0 /*3*/][0] = 0;
		Global_1626500.f_31995[iVar0 /*3*/][1] = 0;
		Global_1626500.f_32021[iVar0 /*3*/][0] = 0;
		Global_1626500.f_32021[iVar0 /*3*/][1] = 0;
		Global_1626500.f_32034[iVar0] = 0;
		Global_1626500.f_32039[iVar0] = 0;
		iVar1 = 0;
		while (iVar1 <= 12)
		{
			Global_1626500.f_87891[iVar0 /*14*/][iVar1] = 0;
			iVar1++;
		}
		Global_1626500.f_87984[iVar0 /*2*/][0] = 0;
		Global_1626500.f_87998[iVar0 /*2*/][0] = 0;
		Global_1626500.f_89[iVar0 /*7777*/] = { 0f, 0f, 0f };
		Global_1626500.f_89[iVar0 /*7777*/].f_4 = { 0f, 0f, 0f };
		Global_1626500.f_89[iVar0 /*7777*/].f_7 = { 0f, 0f, 0f };
		Global_1626500.f_89[iVar0 /*7777*/].f_11 = { 0f, 0f, 0f };
		Global_1626500.f_89[iVar0 /*7777*/].f_14 = 0;
		Global_1626500.f_89[iVar0 /*7777*/].f_15 = { 0f, 0f, 0f };
		Global_1626500.f_89[iVar0 /*7777*/].f_18 = 0;
		Global_1626500.f_89[iVar0 /*7777*/].f_19 = { 0f, 0f, 0f };
		Global_1626500.f_89[iVar0 /*7777*/].f_22 = -1;
		Global_1626500.f_89[iVar0 /*7777*/].f_23 = 0;
		Global_1626500.f_89[iVar0 /*7777*/].f_36 = 0;
		Global_1626500.f_89[iVar0 /*7777*/].f_24 = -1;
		Global_1626500.f_89[iVar0 /*7777*/].f_25 = -1;
		Global_1626500.f_89[iVar0 /*7777*/].f_26 = -1;
		Global_1626500.f_89[iVar0 /*7777*/].f_27 = -1;
		Global_1626500.f_89[iVar0 /*7777*/].f_28 = -1;
		Global_1626500.f_89[iVar0 /*7777*/].f_29 = -1;
		Global_1626500.f_89[iVar0 /*7777*/].f_30 = -1;
		Global_1626500.f_89[iVar0 /*7777*/].f_31 = -1;
		Global_1626500.f_89[iVar0 /*7777*/].f_32 = -1;
		Global_1626500.f_89[iVar0 /*7777*/].f_33 = -1;
		Global_1626500.f_89[iVar0 /*7777*/].f_34 = 0;
		Global_1626500.f_89[iVar0 /*7777*/].f_57 = -1;
		Global_1626500.f_89[iVar0 /*7777*/].f_3322 = 0;
		Global_1626500.f_89[iVar0 /*7777*/].f_3324 = 0;
		Global_1626500.f_89[iVar0 /*7777*/].f_3345 = 0;
		Global_1626500.f_89[iVar0 /*7777*/].f_3418 = 0;
		Global_1626500.f_89[iVar0 /*7777*/].f_4496 = 0;
		Global_1626500.f_89[iVar0 /*7777*/].f_3323 = 0;
		Global_1626500.f_89[iVar0 /*7777*/].f_3325 = 0;
		Global_1626500.f_89[iVar0 /*7777*/].f_4497 = 0;
		Global_1626500.f_89[iVar0 /*7777*/].f_59 = 0;
		Global_1626500.f_89[iVar0 /*7777*/].f_60 = 0;
		Global_1626500.f_89[iVar0 /*7777*/].f_61 = 0;
		Global_1626500.f_89[iVar0 /*7777*/].f_207 = 0;
		Global_1626500.f_89[iVar0 /*7777*/].f_208 = 0;
		Global_1626500.f_89[iVar0 /*7777*/].f_209 = 0;
		Global_1626500.f_89[iVar0 /*7777*/].f_354 = 0;
		Global_1626500.f_89[iVar0 /*7777*/].f_355 = 0;
		Global_1626500.f_89[iVar0 /*7777*/].f_356 = 0;
		Global_1626500.f_89[iVar0 /*7777*/].f_4498 = 0;
		Global_1626500.f_89[iVar0 /*7777*/].f_55 = 0;
		Global_1626500.f_89[iVar0 /*7777*/].f_56 = 0;
		Global_1626500.f_89[iVar0 /*7777*/].f_2950 = 60000;
		Global_1626500.f_89[iVar0 /*7777*/].f_3176 = 60000;
		Global_1626500.f_89[iVar0 /*7777*/].f_4005 = 0;
		Global_1626500.f_89[iVar0 /*7777*/].f_583 = 0;
		Global_1626500.f_89[iVar0 /*7777*/].f_584 = 0;
		Global_1626500.f_89[iVar0 /*7777*/].f_2956 = 0;
		Global_1626500.f_89[iVar0 /*7777*/].f_2957 = 0;
		iVar1 = 0;
		while (iVar1 <= 16)
		{
			Global_1626500.f_89[iVar0 /*7777*/].f_2958[iVar1] = -1;
			Global_1626500.f_89[iVar0 /*7777*/].f_2976[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_2994[iVar1] = -1;
			Global_1626500.f_89[iVar0 /*7777*/].f_3012[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_3048[iVar1] = 4;
			Global_1626500.f_89[iVar0 /*7777*/].f_3066[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_3102[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_3120[iVar1] = -1;
			Global_1626500.f_89[iVar0 /*7777*/].f_3138[iVar1] = 10;
			Global_1626500.f_89[iVar0 /*7777*/].f_3156[iVar1] = 10;
			Global_1626500.f_89[iVar0 /*7777*/].f_3084[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_3030[iVar1] = -1;
			iVar1++;
		}
		Global_1626500.f_31198[iVar0] = 0;
		Global_1626500.f_31203[iVar0] = 0;
		Global_1626500.f_31208[iVar0] = -1;
		Global_1626500.f_31254[iVar0] = 0;
		StringCopy(&(Global_1626500.f_31259[iVar0 /*4*/]), "", 16);
		Global_1626500.f_31281[iVar0] = 3;
		Global_1626500.f_31286[iVar0] = -1;
		Global_1626500.f_31249[iVar0] = 0;
		Global_1626500.f_31276[iVar0] = 0;
		Global_1626500.f_87852[iVar0] = 0;
		Global_1626500.f_87857[iVar0] = 0;
		Global_1626500.f_39344[iVar0] = 100;
		Global_1626500.f_39354[iVar0] = 0;
		Global_1626500.f_89[iVar0 /*7777*/].f_4295 = 0;
		Global_1626500.f_89[iVar0 /*7777*/].f_4296 = 0;
		Global_1625255.f_1[iVar0] = 0;
		Global_1626500.f_87969[iVar0] = 0;
		Global_1626500.f_87974[iVar0] = -1;
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				Global_1626500.f_83533[iVar0 /*27*/][iVar1 /*13*/][iVar2 /*3*/] = { 0f, 0f, 0f };
				Global_1626500.f_83642[iVar0 /*11*/][iVar1 /*5*/][iVar2] = 0f;
				Global_1626500.f_83687[iVar0 /*27*/][iVar1 /*13*/][iVar2 /*3*/] = { 0f, 0f, 0f };
				iVar2++;
			}
			Global_1626500.f_99845[iVar0 /*3*/][iVar1] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 21)
		{
			Global_1626500.f_38756[iVar0 /*23*/][iVar1] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1626500.f_102392[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 21)
		{
			Global_1626500.f_38849[iVar0 /*93*/][0 /*23*/][iVar1] = 0;
			Global_1626500.f_38849[iVar0 /*93*/][1 /*23*/][iVar1] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1626500.f_99417[iVar0 /*13*/][iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1626500.f_99470[iVar0 /*5*/][iVar1] = 0f;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 69)
		{
			Global_1626500.f_89[iVar0 /*7777*/].f_62[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_210[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_357[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_133[iVar1] = 1f;
			Global_1626500.f_89[iVar0 /*7777*/].f_281[iVar1] = 1f;
			Global_1626500.f_89[iVar0 /*7777*/].f_428[iVar1] = 1f;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1626500.f_89[iVar0 /*7777*/].f_501[iVar1] = -1;
			Global_1626500.f_89[iVar0 /*7777*/].f_506[iVar1] = -1;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 16)
		{
			Global_1626500.f_32425[iVar1 /*27*/] = 0;
			Global_1626500.f_32425[iVar1 /*27*/].f_1 = { 0f, 0f, 0f };
			Global_1626500.f_32425[iVar1 /*27*/].f_4 = { 0f, 0f, 0f };
			Global_1626500.f_32425[iVar1 /*27*/].f_25 = 0f;
			Global_1626500.f_32425[iVar1 /*27*/].f_26 = 0;
			iVar2 = 0;
			while (iVar2 <= 4)
			{
				Global_1626500.f_32425[iVar1 /*27*/].f_7[iVar2] = 0;
				Global_1626500.f_32425[iVar1 /*27*/].f_13[iVar2] = 0;
				Global_1626500.f_32425[iVar1 /*27*/].f_19[iVar2] = 0;
				iVar2++;
			}
			Global_1626500.f_89[iVar0 /*7777*/].f_4151[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_4169[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_4187[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_4205[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_4223[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_4241[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_4259[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_4277[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_37[iVar1] = -1;
			Global_1626500.f_57837[iVar1 /*5*/][iVar0] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_4297[iVar1] = 60000;
			Global_1626500.f_89[iVar0 /*7777*/].f_4315[iVar1] = 60000;
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				StringCopy(&(Global_1626500.f_89[iVar0 /*7777*/].f_4419[iVar2 /*16*/]), "", 64);
				Global_1626500.f_89[iVar0 /*7777*/].f_4333[iVar1 /*5*/][iVar2] = 0;
				iVar2++;
			}
			Global_1626500.f_31291[iVar1 /*5*/][iVar0] = -1;
			Global_1626500.f_31377[iVar1 /*5*/][iVar0] = 0;
			Global_1626500.f_31463[iVar1 /*5*/][iVar0] = 0;
			Global_1626500.f_31549[iVar1 /*5*/][iVar0] = 0;
			Global_1626500.f_31635[iVar1 /*5*/][iVar0] = 0;
			Global_1626500.f_31721[iVar1 /*5*/][iVar0] = 1500;
			Global_1626500.f_31807[iVar1 /*5*/][iVar0] = 1400;
			Global_1626500.f_31893[iVar1 /*5*/][iVar0] = 35;
			StringCopy(&(Global_1625255.f_152[iVar0 /*273*/][iVar1 /*16*/]), "", 64);
			Global_1625255.f_6[iVar0 /*18*/][iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_603[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_621[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_3178[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_3196[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_3214[iVar1] = 1;
			Global_1626500.f_89[iVar0 /*7777*/].f_3286[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_3304[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_3346[iVar1] = 10000;
			Global_1626500.f_89[iVar0 /*7777*/].f_3326[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_3382[iVar1] = -1;
			Global_1626500.f_89[iVar0 /*7777*/].f_3232[iVar1] = 1;
			Global_1626500.f_89[iVar0 /*7777*/].f_3400[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_3419[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_3703[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_3739[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_3455[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_3437[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_3595[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_3721[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_3757[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_3649[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_3667[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_3613[iVar1] = 100;
			Global_1626500.f_89[iVar0 /*7777*/].f_3473[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1626500.f_89[iVar0 /*7777*/].f_3525[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1626500.f_89[iVar0 /*7777*/].f_3577[iVar1] = 0f;
			Global_1626500.f_89[iVar0 /*7777*/].f_3631[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_3685[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_3775[iVar1] = -1f;
			Global_1626500.f_89[iVar0 /*7777*/].f_819[iVar1] = -1;
			Global_1626500.f_89[iVar0 /*7777*/].f_837[iVar1] = -1;
			Global_1626500.f_89[iVar0 /*7777*/].f_855[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_873[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_909[iVar1] = -1;
			Global_1626500.f_89[iVar0 /*7777*/].f_639[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_657[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_891[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_927[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_7453[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_7471[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_7489[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_7507[iVar1] = -1;
			Global_1626500.f_89[iVar0 /*7777*/].f_7525[iVar1] = -1;
			Global_1626500.f_89[iVar0 /*7777*/].f_7543[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_7723[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_7561[iVar1] = -1;
			Global_1626500.f_89[iVar0 /*7777*/].f_7579[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_7597[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_7615[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_7633[iVar1] = -1;
			Global_1626500.f_89[iVar0 /*7777*/].f_7651[iVar1] = -1;
			Global_1626500.f_89[iVar0 /*7777*/].f_511[iVar1] = 5;
			Global_1626500.f_89[iVar0 /*7777*/].f_529[iVar1] = 20;
			Global_1626500.f_89[iVar0 /*7777*/].f_4043[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_4061[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_4079[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_4097[iVar1] = -1;
			Global_1626500.f_89[iVar0 /*7777*/].f_4115[iVar1] = -1;
			Global_1626500.f_89[iVar0 /*7777*/].f_783[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_801[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_3250[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_3268[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_547[iVar1] = -1;
			Global_1626500.f_89[iVar0 /*7777*/].f_565[iVar1] = -1;
			Global_1626500.f_89[iVar0 /*7777*/].f_585[iVar1] = 0;
			StringCopy(&(Global_1626500.f_89[iVar0 /*7777*/].f_4499[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1626500.f_89[iVar0 /*7777*/].f_4772[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1626500.f_89[iVar0 /*7777*/].f_5045[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1626500.f_89[iVar0 /*7777*/].f_5864[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1626500.f_89[iVar0 /*7777*/].f_5318[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1626500.f_89[iVar0 /*7777*/].f_5591[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1626500.f_89[iVar0 /*7777*/].f_7229[0 /*16*/]), "", 64);
			StringCopy(&(Global_1626500.f_89[iVar0 /*7777*/].f_7229[1 /*16*/]), "", 64);
			StringCopy(&(Global_1626500.f_89[iVar0 /*7777*/].f_6137[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1626500.f_89[iVar0 /*7777*/].f_6410[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1626500.f_89[iVar0 /*7777*/].f_6683[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1626500.f_89[iVar0 /*7777*/].f_6956[iVar1 /*16*/]), "", 64);
			Global_1626500.f_89[iVar0 /*7777*/].f_3915[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_3951[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_3933[iVar1] = -1;
			Global_1626500.f_89[iVar0 /*7777*/].f_3793[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1626500.f_89[iVar0 /*7777*/].f_3845[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1626500.f_89[iVar0 /*7777*/].f_949[iVar1 /*28*/].f_16 = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_949[iVar1 /*28*/] = { 0f, 0f, 0f };
			Global_1626500.f_89[iVar0 /*7777*/].f_949[iVar1 /*28*/].f_3 = { 0f, 0f, 0f };
			Global_1626500.f_89[iVar0 /*7777*/].f_949[iVar1 /*28*/].f_6 = { 0f, 0f, 0f };
			Global_1626500.f_89[iVar0 /*7777*/].f_949[iVar1 /*28*/].f_9 = 0f;
			Global_1626500.f_89[iVar0 /*7777*/].f_949[iVar1 /*28*/].f_10 = 0f;
			Global_1626500.f_89[iVar0 /*7777*/].f_949[iVar1 /*28*/].f_19 = -1;
			Global_1626500.f_89[iVar0 /*7777*/].f_949[iVar1 /*28*/].f_17 = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_949[iVar1 /*28*/].f_13 = { 0f, 0f, 0f };
			Global_1626500.f_89[iVar0 /*7777*/].f_949[iVar1 /*28*/].f_18 = -1;
			Global_1626500.f_89[iVar0 /*7777*/].f_949[iVar1 /*28*/].f_20 = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_949[iVar1 /*28*/].f_21 = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_949[iVar1 /*28*/].f_22 = -1;
			Global_1626500.f_89[iVar0 /*7777*/].f_949[iVar1 /*28*/].f_23 = 120;
			Global_1626500.f_89[iVar0 /*7777*/].f_1426[iVar1 /*28*/].f_16 = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_1426[iVar1 /*28*/] = { 0f, 0f, 0f };
			Global_1626500.f_89[iVar0 /*7777*/].f_1426[iVar1 /*28*/].f_3 = { 0f, 0f, 0f };
			Global_1626500.f_89[iVar0 /*7777*/].f_1426[iVar1 /*28*/].f_6 = { 0f, 0f, 0f };
			Global_1626500.f_89[iVar0 /*7777*/].f_1426[iVar1 /*28*/].f_9 = 0f;
			Global_1626500.f_89[iVar0 /*7777*/].f_1426[iVar1 /*28*/].f_10 = 0f;
			Global_1626500.f_89[iVar0 /*7777*/].f_1426[iVar1 /*28*/].f_19 = -1;
			Global_1626500.f_89[iVar0 /*7777*/].f_1426[iVar1 /*28*/].f_17 = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_1426[iVar1 /*28*/].f_13 = { 0f, 0f, 0f };
			Global_1626500.f_89[iVar0 /*7777*/].f_1426[iVar1 /*28*/].f_18 = -1;
			Global_1626500.f_89[iVar0 /*7777*/].f_1426[iVar1 /*28*/].f_20 = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_1426[iVar1 /*28*/].f_21 = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_1426[iVar1 /*28*/].f_22 = -1;
			Global_1626500.f_89[iVar0 /*7777*/].f_1426[iVar1 /*28*/].f_23 = 120;
			Global_1626500.f_89[iVar0 /*7777*/].f_3897[iVar1] = 3f;
			Global_1626500.f_89[iVar0 /*7777*/].f_3364[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_3969[iVar1] = 10.5f;
			Global_1626500.f_89[iVar0 /*7777*/].f_3987[iVar1] = 1f;
			Global_1626500.f_89[iVar0 /*7777*/].f_4133[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_675[iVar1] = 12;
			Global_1626500.f_89[iVar0 /*7777*/].f_693[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_711[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_729[iVar1] = 12;
			Global_1626500.f_89[iVar0 /*7777*/].f_747[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_765[iVar1] = -1;
			Global_1626500.f_89[iVar0 /*7777*/].f_2450[iVar1 /*8*/] = 1000;
			Global_1626500.f_89[iVar0 /*7777*/].f_2450[iVar1 /*8*/].f_1 = 1.15f;
			Global_1626500.f_89[iVar0 /*7777*/].f_2450[iVar1 /*8*/].f_2 = 25;
			Global_1626500.f_89[iVar0 /*7777*/].f_2450[iVar1 /*8*/].f_7 = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_2450[iVar1 /*8*/].f_3 = 1;
			Global_1626500.f_89[iVar0 /*7777*/].f_2450[iVar1 /*8*/].f_5 = 25;
			Global_1626500.f_89[iVar0 /*7777*/].f_2450[iVar1 /*8*/].f_6 = 10f;
			Global_1626500.f_89[iVar0 /*7777*/].f_2775[iVar1 /*3*/] = 0f;
			Global_1626500.f_89[iVar0 /*7777*/].f_2775[iVar1 /*3*/].f_1 = 1;
			Global_1626500.f_89[iVar0 /*7777*/].f_2775[iVar1 /*3*/].f_2 = 50;
			Global_1626500.f_89[iVar0 /*7777*/].f_2587[iVar1 /*11*/] = 0f;
			Global_1626500.f_89[iVar0 /*7777*/].f_2587[iVar1 /*11*/].f_1[0] = 0f;
			Global_1626500.f_89[iVar0 /*7777*/].f_2587[iVar1 /*11*/].f_1[1] = 0f;
			Global_1626500.f_89[iVar0 /*7777*/].f_2587[iVar1 /*11*/].f_1[2] = 0f;
			Global_1626500.f_89[iVar0 /*7777*/].f_2587[iVar1 /*11*/].f_1[3] = 0f;
			Global_1626500.f_89[iVar0 /*7777*/].f_2587[iVar1 /*11*/].f_6 = 0f;
			Global_1626500.f_89[iVar0 /*7777*/].f_2587[iVar1 /*11*/].f_7 = 0f;
			Global_1626500.f_89[iVar0 /*7777*/].f_2587[iVar1 /*11*/].f_8 = 0f;
			Global_1626500.f_89[iVar0 /*7777*/].f_2587[iVar1 /*11*/].f_9 = 0f;
			Global_1626500.f_89[iVar0 /*7777*/].f_2587[iVar1 /*11*/].f_10 = 0f;
			Global_1626500.f_89[iVar0 /*7777*/].f_2896[iVar1 /*3*/] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_2896[iVar1 /*3*/].f_1 = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_2896[iVar1 /*3*/].f_2 = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_7262[iVar1 /*5*/][0] = -1;
			Global_1626500.f_89[iVar0 /*7777*/].f_7262[iVar1 /*5*/][1] = -1;
			Global_1626500.f_89[iVar0 /*7777*/].f_7262[iVar1 /*5*/][2] = -1;
			Global_1626500.f_89[iVar0 /*7777*/].f_7262[iVar1 /*5*/][3] = -1;
			Global_1626500.f_89[iVar0 /*7777*/].f_7348[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_7366[iVar1 /*4*/][0] = -1;
			Global_1626500.f_89[iVar0 /*7777*/].f_7366[iVar1 /*4*/][1] = -1;
			Global_1626500.f_89[iVar0 /*7777*/].f_7366[iVar1 /*4*/][2] = -1;
			Global_1626500.f_89[iVar0 /*7777*/].f_7435[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_4007[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_7669[iVar1] = 0;
			Global_1626500.f_89[iVar0 /*7777*/].f_7687[iVar1] = -1;
			Global_1626500.f_89[iVar0 /*7777*/].f_7705[iVar1] = 0;
			func_218(&(Global_1626500.f_89[iVar0 /*7777*/].f_2827[iVar1 /*4*/]));
			iVar1++;
		}
		Global_1626500.f_89[iVar0 /*7777*/].f_2949 = 0;
		Global_1626500.f_89[iVar0 /*7777*/].f_3175 = 0;
		Global_1626500.f_89[iVar0 /*7777*/].f_2948 = 0;
		Global_1626500.f_89[iVar0 /*7777*/].f_3174 = 0;
		Global_1626500.f_89[iVar0 /*7777*/].f_2951 = 0;
		Global_1626500.f_89[iVar0 /*7777*/].f_2952 = 0;
		Global_1626500.f_89[iVar0 /*7777*/].f_2953 = 0;
		Global_1626500.f_89[iVar0 /*7777*/].f_2954 = 0;
		Global_1626500.f_89[iVar0 /*7777*/].f_2955 = 0;
		Global_1626500.f_89[iVar0 /*7777*/].f_3177 = 0;
		Global_1626500.f_89[iVar0 /*7777*/].f_945 = 0;
		Global_1626500.f_89[iVar0 /*7777*/].f_946 = 0;
		Global_1626500.f_89[iVar0 /*7777*/].f_352 = -1;
		Global_1626500.f_89[iVar0 /*7777*/].f_353 = -1;
		Global_1626500.f_89[iVar0 /*7777*/].f_499 = -1;
		Global_1626500.f_89[iVar0 /*7777*/].f_500 = -1;
		Global_1626500.f_89[iVar0 /*7777*/].f_4484 = 0;
		Global_1626500.f_89[iVar0 /*7777*/].f_4485 = 0;
		Global_1626500.f_89[iVar0 /*7777*/].f_4486 = 0;
		Global_1626500.f_89[iVar0 /*7777*/].f_4487 = 0;
		Global_1626500.f_89[iVar0 /*7777*/].f_4488 = 0;
		Global_1626500.f_89[iVar0 /*7777*/].f_4489 = 0;
		Global_1626500.f_89[iVar0 /*7777*/].f_4490 = 0;
		Global_1626500.f_89[iVar0 /*7777*/].f_4491 = 0;
		Global_1626500.f_89[iVar0 /*7777*/].f_4492 = 0;
		Global_1626500.f_89[iVar0 /*7777*/].f_4493 = 0;
		Global_1626500.f_89[iVar0 /*7777*/].f_4494 = 0;
		Global_1626500.f_89[iVar0 /*7777*/].f_4495 = 0;
		iVar0++;
	}
	Global_1626500.f_75304 = 0;
	Global_1626500.f_75305 = 0;
	Global_1626500.f_75306 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		Global_1626500.f_75307[iVar0] = 0;
		Global_1626500.f_75318[iVar0] = 0;
		Global_1626500.f_75329[iVar0] = 0;
		iVar0++;
	}
	Global_1626500.f_63 = { 0f, 0f, 0f };
	Global_1626500.f_32896 = { 0f, 0f, 0f };
	Global_1626500.f_86 = 0f;
	Global_1626500.f_96963 = { 0f, 0f, 0f };
	Global_1626500.f_102391 = 0;
	Global_1626500.f_102413 = 0;
	Global_1626500.f_84460[0] = 0;
	Global_1626500.f_84460[1] = 0;
	Global_1626500.f_84463 = 0;
	Global_1626500.f_84459 = 0;
	Global_1626500.f_97550 = 0;
	Global_1626500.f_97551 = 0;
	Global_1626500.f_97552 = 0;
	Global_1626500.f_97553 = 0;
	Global_1626500.f_97555 = 0;
	Global_1626500.f_97557 = 0;
	Global_1626500.f_97559 = 0;
	Global_1626500.f_97562 = 0;
	Global_1626500.f_97563 = 0;
	Global_1626500.f_97564 = 0;
	Global_1626500.f_97565 = 0;
	Global_1626500.f_97566 = 0;
	Global_1626500.f_97567 = 0;
	Global_1626500.f_97573 = -1;
	Global_1626500.f_97574 = -1;
	Global_1626500.f_97575 = -1;
	Global_1626500.f_97576 = -1;
	Global_1626500.f_97577 = -1;
	Global_1626500.f_97578 = -1;
	Global_1626500.f_97579 = -1;
	Global_1626500.f_97580 = -1;
	Global_1626500.f_97581 = -1;
	Global_1626500.f_97582 = -1;
	Global_1626500.f_97583 = 1.5f;
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		Global_1626500.f_33600[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1626500.f_34654[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1626500.f_32899[iVar0 /*10*/][0 /*3*/] = { 0f, 0f, 0f };
		Global_1626500.f_32899[iVar0 /*10*/][1 /*3*/] = { 0f, 0f, 0f };
		Global_1626500.f_32899[iVar0 /*10*/][2 /*3*/] = { 0f, 0f, 0f };
		Global_1626500.f_33953[iVar0 /*10*/][0 /*3*/] = { 0f, 0f, 0f };
		Global_1626500.f_33953[iVar0 /*10*/][1 /*3*/] = { 0f, 0f, 0f };
		Global_1626500.f_33953[iVar0 /*10*/][2 /*3*/] = { 0f, 0f, 0f };
		Global_1626500.f_33811[iVar0] = 0f;
		Global_1626500.f_33882[iVar0] = 0;
		Global_1626500.f_34936[iVar0] = 0;
		Global_1626500.f_34865[iVar0] = 0f;
		Global_1626500.f_35078[iVar0] = 0;
		Global_1626500.f_35149[iVar0] = 0;
		Global_1626500.f_36068[iVar0] = 0;
		Global_1626500.f_36210[iVar0] = 1f;
		Global_1626500.f_35220[iVar0] = 0;
		Global_1626500.f_35362[iVar0] = 0;
		Global_1626500.f_35291[iVar0] = -1;
		Global_1626500.f_35433[iVar0] = 0;
		Global_1626500.f_36139[iVar0] = 0f;
		Global_1626500.f_35504[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1626500.f_35715[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
	Global_1626500.f_38714 = 0;
	if (bParam0)
	{
		Global_1626500.f_38715 = 0;
		Global_1626500.f_38723 = 0;
	}
	Global_1626500.f_38721 = 0;
	Global_1626500.f_38722 = 0;
	Global_1626500.f_39303 = 0f;
	Global_1626500.f_41581 = 0;
	iVar0 = 0;
	while (iVar0 <= 149)
	{
		Global_1626500.f_41582[iVar0 /*59*/] = { 0f, 0f, 0f };
		Global_1626500.f_41582[iVar0 /*59*/].f_6 = 0f;
		Global_1626500.f_41582[iVar0 /*59*/].f_7 = 0;
		Global_1626500.f_41582[iVar0 /*59*/].f_9 = -1;
		Global_1626500.f_41582[iVar0 /*59*/].f_8 = -1;
		Global_1626500.f_41582[iVar0 /*59*/].f_10 = 1;
		Global_1626500.f_41582[iVar0 /*59*/].f_19 = 0;
		Global_1626500.f_41582[iVar0 /*59*/].f_12 = 0;
		Global_1626500.f_41582[iVar0 /*59*/].f_13 = 0;
		Global_1626500.f_41582[iVar0 /*59*/].f_14 = 0;
		Global_1626500.f_41582[iVar0 /*59*/].f_15 = -1;
		Global_1626500.f_41582[iVar0 /*59*/].f_11 = 0;
		Global_1626500.f_41582[iVar0 /*59*/].f_45 = 0;
		Global_1626500.f_41582[iVar0 /*59*/].f_46 = 0;
		Global_1626500.f_41582[iVar0 /*59*/].f_47 = 0;
		Global_1626500.f_41582[iVar0 /*59*/].f_16 = -1;
		Global_1626500.f_41582[iVar0 /*59*/].f_17 = -1;
		Global_1626500.f_41582[iVar0 /*59*/].f_18 = -1;
		Global_1626500.f_41582[iVar0 /*59*/].f_20 = -1;
		Global_1626500.f_41582[iVar0 /*59*/].f_48 = -1;
		Global_1626500.f_41582[iVar0 /*59*/].f_21 = -1;
		Global_1626500.f_41582[iVar0 /*59*/].f_22 = 0;
		Global_1626500.f_41582[iVar0 /*59*/].f_23 = 0;
		Global_1626500.f_41582[iVar0 /*59*/].f_24 = 1;
		Global_1626500.f_41582[iVar0 /*59*/].f_34 = 10f;
		Global_1626500.f_41582[iVar0 /*59*/].f_35 = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		func_217(&(Global_1626500.f_99898[iVar0 /*244*/]));
		iVar0++;
	}
	Global_1626500.f_102339 = 0;
	Global_1626500.f_50508 = 0;
	Global_1626500.f_50509 = 0;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_1626500.f_50510[iVar0 /*31*/] = { 0f, 0f, 0f };
		Global_1626500.f_50510[iVar0 /*31*/].f_6 = 0f;
		Global_1626500.f_50510[iVar0 /*31*/].f_7 = 0;
		Global_1626500.f_50510[iVar0 /*31*/].f_8 = -1;
		Global_1626500.f_50510[iVar0 /*31*/].f_12 = -1;
		Global_1626500.f_50510[iVar0 /*31*/].f_11 = -1;
		Global_1626500.f_50510[iVar0 /*31*/].f_13 = 1;
		Global_1626500.f_50510[iVar0 /*31*/].f_18 = 0;
		Global_1626500.f_50510[iVar0 /*31*/].f_14 = 0;
		Global_1626500.f_50510[iVar0 /*31*/].f_28 = 0;
		Global_1626500.f_50510[iVar0 /*31*/].f_29 = 0;
		Global_1626500.f_50510[iVar0 /*31*/].f_30 = 0;
		Global_1626500.f_50510[iVar0 /*31*/].f_15 = -1;
		Global_1626500.f_50510[iVar0 /*31*/].f_16 = -1;
		Global_1626500.f_50510[iVar0 /*31*/].f_17 = -1;
		Global_1626500.f_50510[iVar0 /*31*/].f_9 = 0;
		Global_1626500.f_50510[iVar0 /*31*/].f_10 = 1;
		iVar0++;
	}
	Global_1626500.f_41256 = 0;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Global_1626500.f_41257[iVar0 /*19*/] = { 0f, 0f, 0f };
		Global_1626500.f_41257[iVar0 /*19*/].f_3 = 0f;
		Global_1626500.f_41257[iVar0 /*19*/].f_4 = 0;
		Global_1626500.f_41257[iVar0 /*19*/].f_14 = 0;
		Global_1626500.f_41257[iVar0 /*19*/].f_12 = 0;
		Global_1626500.f_41257[iVar0 /*19*/].f_15 = 0;
		Global_1626500.f_41257[iVar0 /*19*/].f_16 = 0;
		Global_1626500.f_41257[iVar0 /*19*/].f_6 = -1;
		Global_1626500.f_41257[iVar0 /*19*/].f_5 = -1;
		Global_1626500.f_41257[iVar0 /*19*/].f_13 = 0f;
		Global_1626500.f_41257[iVar0 /*19*/].f_8 = 0f;
		Global_1626500.f_41257[iVar0 /*19*/].f_9 = 0f;
		Global_1626500.f_41257[iVar0 /*19*/].f_10 = 0f;
		Global_1626500.f_41257[iVar0 /*19*/].f_11 = 0f;
		Global_1626500.f_41257[iVar0 /*19*/].f_7 = 0;
		Global_1626500.f_41257[iVar0 /*19*/].f_17 = 0;
		Global_1626500.f_41257[iVar0 /*19*/].f_18 = 0;
		iVar0++;
	}
	Global_1626500.f_41543 = 0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		Global_1626500.f_41544[iVar0 /*7*/] = { 0f, 0f, 0f };
		Global_1626500.f_41544[iVar0 /*7*/].f_3 = 0f;
		Global_1626500.f_41544[iVar0 /*7*/].f_4 = 0;
		Global_1626500.f_41544[iVar0 /*7*/].f_5 = 0;
		Global_1626500.f_41544[iVar0 /*7*/].f_6 = 0;
		iVar0++;
	}
	if (bParam0)
	{
		Global_1626500.f_39304 = 3.5f;
		Global_1626500.f_39305 = 7f;
		Global_1626500.f_39306 = 0f;
		Global_1626500.f_39307 = 0f;
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			Global_1626500.f_39311[iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			Global_1626500.f_39349[iVar0] = -1;
			iVar0++;
		}
	}
	Global_1626500.f_84497 = -1;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1626500.f_38703[iVar0] = 0;
		Global_1626500.f_87948[iVar0] = -1;
		Global_1626500.f_87993[iVar0] = -1;
		iVar1 = 0;
		while (iVar1 <= 16)
		{
			Global_1626500.f_38209[iVar1 /*29*/][iVar0] = 0;
			Global_1626500.f_38209[iVar1 /*29*/].f_5[iVar0] = 99999;
			Global_1626500.f_38209[iVar1 /*29*/].f_10[iVar0] = 0;
			Global_1626500.f_38209[iVar1 /*29*/].f_15[iVar0] = 0;
			Global_1626500.f_38209[iVar1 /*29*/].f_20[iVar0] = 0;
			iVar1++;
		}
		Global_1626500.f_97333[iVar0] = 0;
		iVar0++;
	}
	if (bParam0)
	{
		Global_1626500.f_39360 = 1;
	}
	Global_1626500.f_39362 = 0;
	Global_1626500.f_39363 = 0;
	Global_1626500.f_39364 = 0;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_1626500.f_39365[iVar0 /*90*/] = { 0f, 0f, 0f };
		Global_1626500.f_39365[iVar0 /*90*/].f_4 = { 0f, 0f, 0f };
		Global_1626500.f_39365[iVar0 /*90*/].f_3 = 0f;
		Global_1626500.f_39365[iVar0 /*90*/].f_7 = 50f;
		Global_1626500.f_39365[iVar0 /*90*/].f_8 = 0f;
		Global_1626500.f_39365[iVar0 /*90*/].f_9 = 0;
		Global_1626500.f_39365[iVar0 /*90*/].f_10 = -1;
		Global_1626500.f_39365[iVar0 /*90*/].f_11 = { 0f, 0f, 0f };
		Global_1626500.f_39365[iVar0 /*90*/].f_14 = 0f;
		Global_1626500.f_39365[iVar0 /*90*/].f_15 = 0;
		Global_1626500.f_39365[iVar0 /*90*/].f_16 = 0;
		Global_1626500.f_39365[iVar0 /*90*/].f_27 = 0;
		Global_1626500.f_39365[iVar0 /*90*/].f_29 = 0;
		Global_1626500.f_39365[iVar0 /*90*/].f_30 = 0;
		Global_1626500.f_39365[iVar0 /*90*/].f_31 = -1;
		Global_1626500.f_39365[iVar0 /*90*/].f_44 = 0;
		Global_1626500.f_39365[iVar0 /*90*/].f_43 = 0;
		Global_1626500.f_39365[iVar0 /*90*/].f_45 = 0;
		Global_1626500.f_39365[iVar0 /*90*/].f_46 = 0;
		Global_1626500.f_39365[iVar0 /*90*/].f_47 = 0;
		Global_1626500.f_39365[iVar0 /*90*/].f_48 = 0;
		Global_1626500.f_39365[iVar0 /*90*/].f_49 = 60;
		Global_1626500.f_39365[iVar0 /*90*/].f_50 = 0;
		Global_1626500.f_39365[iVar0 /*90*/].f_37 = 0;
		Global_1626500.f_39365[iVar0 /*90*/].f_32 = -1;
		Global_1626500.f_39365[iVar0 /*90*/].f_33 = -1;
		Global_1626500.f_39365[iVar0 /*90*/].f_34 = 0;
		Global_1626500.f_39365[iVar0 /*90*/].f_55 = 0;
		Global_1626500.f_39365[iVar0 /*90*/].f_35 = 0;
		Global_1626500.f_39365[iVar0 /*90*/].f_51 = -1;
		Global_1626500.f_39365[iVar0 /*90*/].f_52 = -1;
		Global_1626500.f_39365[iVar0 /*90*/].f_53 = -1;
		Global_1626500.f_39365[iVar0 /*90*/].f_83 = -1;
		Global_1626500.f_39365[iVar0 /*90*/].f_84 = -1;
		Global_1626500.f_39365[iVar0 /*90*/].f_85 = { 0f, 0f, 0f };
		Global_1626500.f_39365[iVar0 /*90*/].f_88 = 0;
		Global_1626500.f_39365[iVar0 /*90*/].f_81 = -1;
		Global_1626500.f_39365[iVar0 /*90*/].f_82 = -1;
		Global_1626500.f_39365[iVar0 /*90*/].f_89 = -1;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1626500.f_39365[iVar0 /*90*/].f_17[iVar1] = 0;
			Global_1626500.f_39365[iVar0 /*90*/].f_22[iVar1] = 99999;
			Global_1626500.f_39365[iVar0 /*90*/].f_65[iVar1] = 0;
			Global_1626500.f_39365[iVar0 /*90*/].f_70[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		StringCopy(&(Global_1626500.f_96981[iVar0 /*18*/]), "", 64);
		Global_1626500.f_96981[iVar0 /*18*/].f_16 = 0;
		Global_1626500.f_96981[iVar0 /*18*/].f_17 = -1;
		iVar0++;
	}
	Global_1626500.f_51162 = 0;
	Global_1626500.f_51163 = 0;
	if (bParam0)
	{
		if (func_121() && !func_172())
		{
			Global_1626500.f_51164 = -1;
		}
		else
		{
			Global_1626500.f_51164 = 0;
		}
	}
	Global_1626500.f_51165 = 0;
	iVar0 = 0;
	while (iVar0 <= 59)
	{
		Global_1626500.f_51166[iVar0 /*40*/] = { 0f, 0f, 0f };
		Global_1626500.f_51166[iVar0 /*40*/].f_3 = 0f;
		Global_1626500.f_51166[iVar0 /*40*/].f_13 = 77;
		Global_1626500.f_51166[iVar0 /*40*/].f_4 = 0;
		Global_1626500.f_51166[iVar0 /*40*/].f_5 = 0;
		Global_1626500.f_51166[iVar0 /*40*/].f_21 = -1;
		Global_1626500.f_51166[iVar0 /*40*/].f_22 = -1;
		Global_1626500.f_51166[iVar0 /*40*/].f_7 = 1f;
		Global_1626500.f_51166[iVar0 /*40*/].f_24 = -1;
		Global_1626500.f_51166[iVar0 /*40*/].f_25 = -1;
		Global_1626500.f_51166[iVar0 /*40*/].f_26 = 0;
		Global_1626500.f_51166[iVar0 /*40*/].f_33 = -1;
		Global_1626500.f_51166[iVar0 /*40*/].f_30 = -1;
		Global_1626500.f_51166[iVar0 /*40*/].f_36 = 0;
		Global_1626500.f_51166[iVar0 /*40*/].f_34 = -1;
		Global_1626500.f_51166[iVar0 /*40*/].f_31 = -1;
		Global_1626500.f_51166[iVar0 /*40*/].f_37 = 0;
		Global_1626500.f_51166[iVar0 /*40*/].f_35 = -1;
		Global_1626500.f_51166[iVar0 /*40*/].f_32 = -1;
		Global_1626500.f_51166[iVar0 /*40*/].f_38 = 0;
		Global_1626500.f_51166[iVar0 /*40*/].f_27 = -1;
		Global_1626500.f_51166[iVar0 /*40*/].f_28 = -1;
		Global_1626500.f_51166[iVar0 /*40*/].f_29 = 0;
		Global_1626500.f_51166[iVar0 /*40*/].f_39 = 0;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1626500.f_51166[iVar0 /*40*/].f_8[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	func_216();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_1626500.f_75298[iVar0] = -1;
		iVar0++;
	}
	Global_1626500.f_84511 = -1;
	Global_1626500.f_84512 = 15;
	Global_1626500.f_84513 = -1;
	Global_1626500.f_84514 = -1;
	Global_1626500.f_84515 = 0;
	Global_1626500.f_53608 = 0;
	Global_1626500.f_41580 = 0;
	if (bParam0)
	{
		Global_1626500.f_39310 = -1;
		Global_1626500.f_38719 = -1;
	}
	Global_1626500.f_53609 = 0;
	Global_1626500.f_53610 = 0;
	Global_1626500.f_53611 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_1626500.f_53612[iVar0 /*128*/] = { 0f, 0f, 0f };
		Global_1626500.f_53612[iVar0 /*128*/].f_3 = 0f;
		Global_1626500.f_53612[iVar0 /*128*/].f_4 = 50f;
		Global_1626500.f_53612[iVar0 /*128*/].f_5 = 0f;
		Global_1626500.f_53612[iVar0 /*128*/].f_6 = 0;
		Global_1626500.f_53612[iVar0 /*128*/].f_7 = -1;
		Global_1626500.f_53612[iVar0 /*128*/].f_8 = { 0f, 0f, 0f };
		Global_1626500.f_53612[iVar0 /*128*/].f_11 = 0f;
		Global_1626500.f_53612[iVar0 /*128*/].f_12 = 0;
		Global_1626500.f_53612[iVar0 /*128*/].f_23 = -1;
		Global_1626500.f_53612[iVar0 /*128*/].f_24 = -1;
		Global_1626500.f_53612[iVar0 /*128*/].f_25 = -1;
		Global_1626500.f_53612[iVar0 /*128*/].f_26 = -1;
		Global_1626500.f_53612[iVar0 /*128*/].f_30 = 0;
		Global_1626500.f_53612[iVar0 /*128*/].f_31 = 100;
		Global_1626500.f_53612[iVar0 /*128*/].f_32 = 1001f;
		Global_1626500.f_53612[iVar0 /*128*/].f_33 = 1001f;
		Global_1626500.f_53612[iVar0 /*128*/].f_35 = 1.5f;
		Global_1626500.f_53612[iVar0 /*128*/].f_42 = 0;
		Global_1626500.f_53612[iVar0 /*128*/].f_107 = 0;
		Global_1626500.f_53612[iVar0 /*128*/].f_43 = 0;
		Global_1626500.f_53612[iVar0 /*128*/].f_44 = 0;
		Global_1626500.f_53612[iVar0 /*128*/].f_27 = -1;
		Global_1626500.f_53612[iVar0 /*128*/].f_28 = -1;
		Global_1626500.f_53612[iVar0 /*128*/].f_29 = 0f;
		Global_1626500.f_53612[iVar0 /*128*/].f_47 = 0;
		Global_1626500.f_53612[iVar0 /*128*/].f_37 = -1;
		Global_1626500.f_53612[iVar0 /*128*/].f_38 = -1;
		Global_1626500.f_53612[iVar0 /*128*/].f_39 = 0;
		Global_1626500.f_53612[iVar0 /*128*/].f_59 = -1;
		Global_1626500.f_53612[iVar0 /*128*/].f_60 = -1;
		Global_1626500.f_53612[iVar0 /*128*/].f_62 = -1;
		Global_1626500.f_53612[iVar0 /*128*/].f_105 = -1;
		Global_1626500.f_53612[iVar0 /*128*/].f_104 = -1;
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			Global_1626500.f_53612[iVar0 /*128*/].f_108[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1626500.f_53612[iVar0 /*128*/].f_115[iVar1] = 0f;
			iVar1++;
		}
		Global_1626500.f_53612[iVar0 /*128*/].f_61 = -1;
		Global_1626500.f_53612[iVar0 /*128*/].f_68 = 0;
		Global_1626500.f_53612[iVar0 /*128*/].f_40 = 0;
		Global_1626500.f_53612[iVar0 /*128*/].f_118 = 0;
		Global_1626500.f_53612[iVar0 /*128*/].f_119 = -1;
		Global_1626500.f_53612[iVar0 /*128*/].f_120 = { 0f, 0f, 0f };
		Global_1626500.f_53612[iVar0 /*128*/].f_123 = -1;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1626500.f_53612[iVar0 /*128*/].f_13[iVar1] = 0;
			Global_1626500.f_53612[iVar0 /*128*/].f_18[iVar1] = 99999;
			Global_1626500.f_53612[iVar0 /*128*/].f_98[iVar1] = 0;
			Global_1626500.f_53612[iVar0 /*128*/].f_81[iVar1] = 0;
			Global_1626500.f_53612[iVar0 /*128*/].f_86[iVar1] = 0;
			Global_1626500.f_53612[iVar0 /*128*/].f_49[iVar1] = -1;
			Global_1626500.f_53612[iVar0 /*128*/].f_54[iVar1] = -1;
			Global_1626500.f_53612[iVar0 /*128*/].f_63[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	Global_1626500.f_83441 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		Global_1626500.f_83442[iVar0 /*9*/] = { 0f, 0f, 0f };
		Global_1626500.f_83442[iVar0 /*9*/].f_3 = { 0f, 0f, 0f };
		Global_1626500.f_83442[iVar0 /*9*/].f_6 = { 0f, 0f, 0f };
		iVar0++;
	}
	Global_1626500.f_75421 = 0;
	iVar0 = 0;
	while (iVar0 <= 59)
	{
		Global_1626500.f_75428[iVar0 /*15*/] = { 0f, 0f, 0f };
		Global_1626500.f_75428[iVar0 /*15*/].f_3 = 0f;
		Global_1626500.f_75428[iVar0 /*15*/].f_4 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1626500.f_75422[iVar0] = 0;
		iVar1 = 0;
		while (iVar1 <= 59)
		{
			Global_1626500.f_76329[iVar0 /*901*/][iVar1 /*15*/] = { 0f, 0f, 0f };
			Global_1626500.f_76329[iVar0 /*901*/][iVar1 /*15*/].f_3 = 0f;
			Global_1626500.f_76329[iVar0 /*901*/][iVar1 /*15*/].f_4 = 0;
			Global_1626500.f_76329[iVar0 /*901*/][iVar1 /*15*/].f_5 = 0;
			Global_1626500.f_76329[iVar0 /*901*/][iVar1 /*15*/].f_7 = -1;
			Global_1626500.f_76329[iVar0 /*901*/][iVar1 /*15*/].f_8 = 0;
			Global_1626500.f_76329[iVar0 /*901*/][iVar1 /*15*/].f_9 = -1;
			Global_1626500.f_76329[iVar0 /*901*/][iVar1 /*15*/].f_10 = 0;
			Global_1626500.f_76329[iVar0 /*901*/][iVar1 /*15*/].f_11 = 0;
			Global_1626500.f_76329[iVar0 /*901*/][iVar1 /*15*/].f_12 = 0;
			Global_1626500.f_76329[iVar0 /*901*/][iVar1 /*15*/].f_13 = 0;
			Global_1626500.f_76329[iVar0 /*901*/][iVar1 /*15*/].f_14 = 0;
			iVar1++;
		}
		iVar0++;
	}
	Global_1626500.f_57985 = 0;
	Global_1626500.f_57988 = 0;
	Global_1626500.f_57989 = 0;
	Global_1626500.f_57986 = 50;
	iVar0 = 0;
	while (iVar0 <= 58)
	{
		Global_1626500.f_57990[iVar0 /*286*/].f_39 = 0;
		Global_1626500.f_57990[iVar0 /*286*/].f_49 = 0;
		Global_1626500.f_57990[iVar0 /*286*/] = { 0f, 0f, 0f };
		Global_1626500.f_57990[iVar0 /*286*/].f_3 = 0f;
		Global_1626500.f_57990[iVar0 /*286*/].f_4 = 0.75f;
		Global_1626500.f_57990[iVar0 /*286*/].f_14 = 0;
		Global_1626500.f_57990[iVar0 /*286*/].f_15 = 0;
		Global_1626500.f_57990[iVar0 /*286*/].f_16 = 0;
		Global_1626500.f_57990[iVar0 /*286*/].f_32 = 0;
		Global_1626500.f_57990[iVar0 /*286*/].f_36 = 0;
		Global_1626500.f_57990[iVar0 /*286*/].f_37 = 0;
		Global_1626500.f_57990[iVar0 /*286*/].f_38 = -1;
		Global_1626500.f_57990[iVar0 /*286*/].f_215 = -1;
		Global_1626500.f_57990[iVar0 /*286*/].f_214 = -1;
		Global_1626500.f_57990[iVar0 /*286*/].f_216 = 0;
		Global_1626500.f_57990[iVar0 /*286*/].f_217 = 0;
		Global_1626500.f_57990[iVar0 /*286*/].f_218 = 20;
		Global_1626500.f_57990[iVar0 /*286*/].f_226 = -1;
		Global_1626500.f_57990[iVar0 /*286*/].f_56 = -1;
		Global_1626500.f_57990[iVar0 /*286*/].f_47 = -1;
		Global_1626500.f_57990[iVar0 /*286*/].f_34 = 0;
		Global_1626500.f_57990[iVar0 /*286*/].f_35 = -1;
		Global_1626500.f_57990[iVar0 /*286*/].f_48 = 0;
		Global_1626500.f_57990[iVar0 /*286*/].f_188 = 0;
		Global_1626500.f_57990[iVar0 /*286*/].f_189 = 0;
		Global_1626500.f_57990[iVar0 /*286*/].f_190 = 0;
		Global_1626500.f_57990[iVar0 /*286*/].f_191 = 0;
		Global_1626500.f_57990[iVar0 /*286*/].f_192 = 0;
		Global_1626500.f_57990[iVar0 /*286*/].f_193 = 0;
		Global_1626500.f_57990[iVar0 /*286*/].f_194 = 0;
		Global_1626500.f_57990[iVar0 /*286*/].f_195 = 0;
		Global_1626500.f_57990[iVar0 /*286*/].f_33 = 0;
		Global_1626500.f_57990[iVar0 /*286*/].f_13 = 0f;
		Global_1626500.f_57990[iVar0 /*286*/].f_5 = 50f;
		Global_1626500.f_57990[iVar0 /*286*/].f_6 = 0f;
		Global_1626500.f_57990[iVar0 /*286*/].f_7 = 0;
		Global_1626500.f_57990[iVar0 /*286*/].f_8 = -1;
		Global_1626500.f_57990[iVar0 /*286*/].f_9 = { 0f, 0f, 0f };
		Global_1626500.f_57990[iVar0 /*286*/].f_12 = 0f;
		Global_1626500.f_57990[iVar0 /*286*/].f_175 = 0;
		Global_1626500.f_57990[iVar0 /*286*/].f_63 = 0;
		Global_1626500.f_57990[iVar0 /*286*/].f_167 = 0;
		Global_1626500.f_57990[iVar0 /*286*/].f_168 = 0;
		Global_1626500.f_57990[iVar0 /*286*/].f_169 = 0;
		Global_1626500.f_57990[iVar0 /*286*/].f_175 = 0;
		Global_1626500.f_57990[iVar0 /*286*/].f_185 = 0;
		Global_1626500.f_57990[iVar0 /*286*/].f_176 = 0;
		Global_1626500.f_57990[iVar0 /*286*/].f_184 = -1;
		Global_1626500.f_57990[iVar0 /*286*/].f_64 = { 0f, 0f, 0f };
		Global_1626500.f_57990[iVar0 /*286*/].f_57 = -1;
		Global_1626500.f_57990[iVar0 /*286*/].f_58 = -1;
		Global_1626500.f_57990[iVar0 /*286*/].f_62 = 0;
		Global_1626500.f_57990[iVar0 /*286*/].f_59 = 0;
		Global_1626500.f_57990[iVar0 /*286*/].f_252 = 0;
		Global_1626500.f_57990[iVar0 /*286*/].f_263 = 1f;
		Global_1626500.f_57990[iVar0 /*286*/].f_80 = 0;
		Global_1626500.f_57990[iVar0 /*286*/].f_201 = 0;
		Global_1626500.f_57990[iVar0 /*286*/].f_52 = 0;
		Global_1626500.f_57990[iVar0 /*286*/].f_202 = 250;
		Global_1626500.f_57990[iVar0 /*286*/].f_205 = 0;
		Global_1626500.f_57990[iVar0 /*286*/].f_206 = -1;
		Global_1626500.f_57990[iVar0 /*286*/].f_266 = -1;
		Global_1626500.f_57990[iVar0 /*286*/].f_207 = 0;
		Global_1626500.f_57990[iVar0 /*286*/].f_267 = 4;
		Global_1626500.f_57990[iVar0 /*286*/].f_237 = 0;
		Global_1626500.f_57990[iVar0 /*286*/].f_153 = 0;
		Global_1626500.f_57990[iVar0 /*286*/].f_154 = -1;
		Global_1626500.f_57990[iVar0 /*286*/].f_155 = -1;
		Global_1626500.f_57990[iVar0 /*286*/].f_227 = -1;
		Global_1626500.f_57990[iVar0 /*286*/].f_228 = -1;
		Global_1626500.f_57990[iVar0 /*286*/].f_229 = -1;
		Global_1626500.f_57990[iVar0 /*286*/].f_230 = -1;
		Global_1626500.f_57990[iVar0 /*286*/].f_265 = -1;
		Global_1626500.f_57990[iVar0 /*286*/].f_264 = -1;
		Global_1626500.f_57990[iVar0 /*286*/].f_156 = -1;
		Global_1626500.f_57990[iVar0 /*286*/].f_157 = 0;
		Global_1626500.f_57990[iVar0 /*286*/].f_60 = 0;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1626500.f_57990[iVar0 /*286*/].f_17[iVar1] = 0;
			Global_1626500.f_57990[iVar0 /*286*/].f_22[iVar1] = 2;
			Global_1626500.f_57990[iVar0 /*286*/].f_27[iVar1] = 99999;
			Global_1626500.f_57990[iVar0 /*286*/].f_196[iVar1] = -1;
			Global_1626500.f_57990[iVar0 /*286*/].f_238[iVar1] = 0;
			Global_1626500.f_57990[iVar0 /*286*/].f_243[iVar1] = 0;
			Global_1626500.f_57990[iVar0 /*286*/].f_253[iVar1] = -1;
			Global_1626500.f_57990[iVar0 /*286*/].f_258[iVar1] = -1;
			Global_1626500.f_57990[iVar0 /*286*/].f_269[iVar1] = -2;
			Global_1626500.f_57990[iVar0 /*286*/].f_170[iVar1] = 0;
			Global_1626500.f_57990[iVar0 /*286*/].f_231[iVar1] = 0;
			iVar1++;
		}
		Global_1626500.f_57990[iVar0 /*286*/].f_115[0] = 0f;
		Global_1626500.f_57990[iVar0 /*286*/].f_121[0] = 0f;
		Global_1626500.f_57990[iVar0 /*286*/].f_133[0] = 0f;
		Global_1626500.f_57990[iVar0 /*286*/].f_81[0] = 0;
		Global_1626500.f_57990[iVar0 /*286*/].f_87[0] = -1;
		Global_1626500.f_57990[iVar0 /*286*/].f_93[0 /*3*/] = { 0f, 0f, 0f };
		Global_1626500.f_57990[iVar0 /*286*/].f_109[0] = 3;
		Global_1626500.f_57990[iVar0 /*286*/].f_127[0] = -1;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1626500.f_57990[iVar0 /*286*/].f_67[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1626500.f_57990[iVar0 /*286*/].f_81[iVar1 + 1] = 0;
			Global_1626500.f_57990[iVar0 /*286*/].f_115[iVar1 + 1] = 0f;
			Global_1626500.f_57990[iVar0 /*286*/].f_121[iVar1 + 1] = 0f;
			Global_1626500.f_57990[iVar0 /*286*/].f_133[iVar1 + 1] = 0f;
			Global_1626500.f_57990[iVar0 /*286*/].f_87[iVar1 + 1] = -1;
			Global_1626500.f_57990[iVar0 /*286*/].f_93[iVar1 + 1 /*3*/] = { 0f, 0f, 0f };
			Global_1626500.f_57990[iVar0 /*286*/].f_109[iVar1 + 1] = 3;
			Global_1626500.f_57990[iVar0 /*286*/].f_127[iVar1 + 1] = -1;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			Global_1626500.f_57990[iVar0 /*286*/].f_139[iVar1] = 0f;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			Global_1626500.f_57990[iVar0 /*286*/].f_276[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1626500.f_57990[iVar0 /*286*/].f_283[iVar1] = 0f;
			iVar1++;
		}
		Global_1626500.f_57990[iVar0 /*286*/].f_186 = -1;
		Global_1626500.f_57990[iVar0 /*286*/].f_187 = -1;
		Global_1626500.f_57990[iVar0 /*286*/].f_268 = -1;
		Global_1626500.f_57990[iVar0 /*286*/].f_274 = -1;
		Global_1626500.f_57990[iVar0 /*286*/].f_275 = -1;
		iVar0++;
	}
	Global_1626500.f_75421 = 0;
	iVar0 = 0;
	while (iVar0 <= 59)
	{
		Global_1626500.f_75428[iVar0 /*15*/] = { 0f, 0f, 0f };
		Global_1626500.f_75428[iVar0 /*15*/].f_3 = 0f;
		Global_1626500.f_75428[iVar0 /*15*/].f_4 = 0;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		Global_1626500.f_38709[iVar1] = 0;
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Global_1626500.f_36282[iVar0 /*107*/].f_53 = 0;
		Global_1626500.f_36282[iVar0 /*107*/].f_46 = 0;
		Global_1626500.f_36282[iVar0 /*107*/].f_20 = 0f;
		Global_1626500.f_36282[iVar0 /*107*/].f_28 = 0f;
		Global_1626500.f_36282[iVar0 /*107*/].f_29 = 0f;
		Global_1626500.f_36282[iVar0 /*107*/].f_30 = 0f;
		Global_1626500.f_36282[iVar0 /*107*/].f_55 = 0f;
		Global_1626500.f_36282[iVar0 /*107*/].f_56 = 0f;
		Global_1626500.f_36282[iVar0 /*107*/] = 0;
		Global_1626500.f_36282[iVar0 /*107*/].f_21 = { 0f, 0f, 0f };
		Global_1626500.f_36282[iVar0 /*107*/].f_24 = { 0f, 0f, 0f };
		Global_1626500.f_36282[iVar0 /*107*/].f_27 = 1f;
		Global_1626500.f_36282[iVar0 /*107*/].f_97 = 10.5f;
		Global_1626500.f_36282[iVar0 /*107*/].f_99 = 1f;
		Global_1626500.f_36282[iVar0 /*107*/].f_100 = 0f;
		Global_1626500.f_36282[iVar0 /*107*/].f_96 = 0;
		Global_1626500.f_36282[iVar0 /*107*/].f_54 = 0;
		Global_1626500.f_36282[iVar0 /*107*/].f_19 = 1f;
		Global_1626500.f_36282[iVar0 /*107*/].f_101 = -1;
		Global_1626500.f_36282[iVar0 /*107*/].f_102 = -1f;
		Global_1626500.f_36282[iVar0 /*107*/].f_103 = 0f;
		Global_1626500.f_36282[iVar0 /*107*/].f_104 = 0f;
		Global_1626500.f_36282[iVar0 /*107*/].f_105 = -1;
		Global_1626500.f_36282[iVar0 /*107*/].f_47 = 0;
		if (Global_1626500.f_36282[iVar0 /*107*/].f_106 != 0)
		{
			unk_0x756D6F50061C0122(Global_1626500.f_36282[iVar0 /*107*/].f_106);
			Global_1626500.f_36282[iVar0 /*107*/].f_106 = 0;
		}
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1626500.f_36282[iVar0 /*107*/].f_1[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1626500.f_36282[iVar0 /*107*/].f_14[iVar1] = 0f;
			Global_1626500.f_36282[iVar0 /*107*/].f_36[iVar1] = 0;
			Global_1626500.f_36282[iVar0 /*107*/].f_41[iVar1] = 0;
			Global_1626500.f_36282[iVar0 /*107*/].f_31[iVar1] = 0;
			Global_1626500.f_36282[iVar0 /*107*/].f_62[iVar1] = 0;
			Global_1626500.f_36282[iVar0 /*107*/].f_67[iVar1] = 99999;
			Global_1626500.f_36282[iVar0 /*107*/].f_72[iVar1] = 0;
			Global_1626500.f_36282[iVar0 /*107*/].f_77[iVar1] = 0;
			Global_1626500.f_36282[iVar0 /*107*/].f_57[iVar1] = 0;
			Global_1626500.f_36282[iVar0 /*107*/].f_82[iVar1] = 0;
			Global_1626500.f_36282[iVar0 /*107*/].f_87[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	Global_1626500.f_83439 = 0;
	Global_1626500.f_40 = 0;
	Global_1626500.f_99352 = 12;
	Global_1626500.f_99353 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1626500.f_96967[iVar0] = -1;
		Global_1626500.f_96972[iVar0] = -1;
		iVar0++;
	}
	Global_1626500.f_39361 = 0;
	Global_1626500.f_97568 = -1;
	Global_1626500.f_96977 = 0;
	Global_1626500.f_96966 = 0;
	Global_1626500.f_96979 = 0;
	Global_1626500.f_96978 = 0;
	Global_1626500.f_96980 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Global_1626500.f_102425[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1626500.f_84470[iVar0] = 0;
		iVar0++;
	}
	iVar3 = 0;
	while (iVar3 <= 29)
	{
		Global_1626500.f_80315[iVar3] = -1;
		Global_1626500.f_80284[iVar3] = -1;
		iVar4 = 0;
		while (iVar4 <= 9)
		{
			iVar5 = 0;
			while (iVar5 <= 3)
			{
				Global_1626500.f_80346[iVar3 /*51*/][iVar4 /*5*/][iVar5] = -1;
				Global_1626500.f_81877[iVar3 /*51*/][iVar4 /*5*/][iVar5] = -1;
				iVar5++;
			}
			iVar4++;
		}
		iVar3++;
	}
	func_203();
}

void func_216()
{
	int iVar0;
	int iVar1;
	
	Global_1626500.f_84175 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		Global_1626500.f_84198[iVar0 /*26*/][0 /*3*/] = { 0f, 0f, 0f };
		Global_1626500.f_84198[iVar0 /*26*/][1 /*3*/] = { 0f, 0f, 0f };
		Global_1626500.f_84198[iVar0 /*26*/].f_9 = 0;
		Global_1626500.f_84198[iVar0 /*26*/].f_20 = 0;
		Global_1626500.f_84198[iVar0 /*26*/].f_22 = 0f;
		Global_1626500.f_84198[iVar0 /*26*/].f_23 = 0f;
		Global_1626500.f_84198[iVar0 /*26*/].f_21 = 0;
		Global_1626500.f_84198[iVar0 /*26*/].f_7 = 0f;
		Global_1626500.f_84198[iVar0 /*26*/].f_8 = 0;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1626500.f_84198[iVar0 /*26*/].f_10[iVar1] = -1;
			iVar1++;
		}
		iVar0++;
	}
}

void func_217(var uParam0)
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

void func_218(var uParam0)
{
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_219(var uParam0)
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

void func_220(char* sParam0)
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
		func_221(&(sParam0->f_63[iVar0 /*12*/]));
		iVar0++;
	}
}

void func_221(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	StringCopy(&(uParam0->f_4), "", 32);
}

void func_222(char* sParam0)
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
		iVar0++;
	}
	sParam0->f_1097 = -1;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		sParam0->f_1098[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		sParam0->f_1103[iVar0] = 0;
		sParam0->f_1105[iVar0] = 0;
		iVar0++;
	}
	sParam0->f_43 = 0;
	sParam0->f_42 = 0;
	sParam0->f_44 = 0;
	sParam0->f_735 = 0;
	sParam0->f_436 = 0;
	sParam0->f_437 = 0;
	sParam0->f_438 = 0;
	sParam0->f_439 = { 0f, 0f, 0f };
	sParam0->f_728 = { 0f, 0f, 0f };
	sParam0->f_731 = 0f;
	sParam0->f_732 = { 0f, 0f, 0f };
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		func_223(sParam0, iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		func_221(&(sParam0->f_736[iVar0 /*12*/]));
		iVar0++;
	}
}

void func_223(char* sParam0, int iParam1)
{
	if (iParam1 >= 0 && iParam1 < 20)
	{
		sParam0->f_45[iParam1] = 0;
		sParam0->f_66[iParam1] = 0;
		sParam0->f_87[iParam1 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_148[iParam1 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_209[iParam1 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_270[iParam1 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_331[iParam1] = 0f;
		sParam0->f_352[iParam1] = 0f;
		sParam0->f_373[iParam1] = 0;
		sParam0->f_394[iParam1] = -1;
		sParam0->f_415[iParam1] = 0f;
		sParam0->f_442[iParam1 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_503[iParam1] = 0f;
		StringCopy(&(sParam0->f_1107[iParam1 /*4*/]), "", 16);
		StringCopy(&(sParam0->f_1188[iParam1 /*4*/]), "", 16);
	}
}

void func_224()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 21)
	{
		Global_1626500.f_39274[iVar0] = 0;
		iVar0++;
	}
}

void func_225()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		StringCopy(&(Global_1626500.f_84025[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
}

int func_226()
{
	if (unk_0x84C71F36E7D97756())
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

bool func_227()
{
	return unk_0x08BA6DD398CA197C(Global_969359.f_8, 0);
}

bool func_228()
{
	return unk_0x08BA6DD398CA197C(Global_2442442, 4);
}

bool func_229()
{
	return unk_0x08BA6DD398CA197C(Global_2442442, 28);
}

var func_230()
{
	return Global_2442442.f_570;
}

void func_231()
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

void func_232()
{
	unk_0x09C86C0C5CA26B1E(&Global_2442442, 4);
}

void func_233()
{
	unk_0x09C86C0C5CA26B1E(&Global_2442442, 28);
}

void func_234(bool bParam0, bool bParam1, bool bParam2)
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
	Global_1572884[0] = 0;
	Global_1572884[1] = 0;
	bParam0->f_40 = 0;
	if (bParam2)
	{
		bParam0->f_41 = { Var0 };
	}
	if (bParam1)
	{
		func_91(bParam0, 0);
	}
}

int func_235(int iParam0)
{
	switch (iParam0)
	{
		case 114:
			return 15;
		
		case 121:
			return 8;
		
		case 115:
			return 14;
		
		case 119:
			return 122;
		
		case 122:
			return 1;
		
		case 120:
			return 5;
		
		case 123:
			return 6;
		
		case 116:
			return 11;
		
		case 124:
			return 0;
		
		case 125:
			return 2;
		
		case 117:
			return 13;
		
		case 126:
			return 3;
		
		case 118:
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
		
		case 74:
			return 179;
		
		case 73:
			return 189;
		
		case 75:
			return 180;
		
		case 76:
			return 182;
		
		case 77:
			return 183;
		
		case 78:
			return 185;
		
		case joaat("mpsv_lp0_31"):
			return 186;
		
		case 80:
			return 190;
		
		case 81:
			return 191;
		
		case 82:
			return 192;
		
		case 83:
			return 193;
		
		case 91:
			return 205;
		
		case 84:
			return 194;
		
		case 85:
			return 197;
		
		case 86:
			return 198;
		
		case 88:
			return 199;
		
		case 89:
			return 200;
		
		case 90:
			return 201;
		
		case 92:
			return 207;
		
		case 93:
			return 208;
		
		case 94:
			return 209;
		
		case 95:
			return 210;
		
		case 87:
			return 195;
		
		default:
	}
	return 214;
}

bool func_236()
{
	return Global_2394783;
}

var func_237()
{
	return Global_2394783.f_3;
}

