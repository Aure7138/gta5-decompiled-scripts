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
	float fLocal_93 = 0f;
	var uLocal_94 = 0;
	struct<5> Local_95 = { 0, 0, 0, 0, 0 } ;
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
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 1;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = -1;
	var uLocal_117 = -1;
	var uLocal_118 = 2;
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
	var uLocal_130 = 2;
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
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	struct<88> Local_188 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_276 = 0;
	bool bLocal_277 = 0;
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
	fLocal_93 = ((0.05f + 0.275f) - 0.01f);
	unk_0x945226432ACF160F();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		bLocal_277 = false;
		bVar0 = func_253();
		Global_2394785.f_3 = 0;
		Global_2395233 = 0;
		if (func_252())
		{
			bLocal_277 = true;
			Var1 = { Global_2394785.f_4 };
			MemCopy(&cVar11, {Var1.f_3}, 8);
			iVar19 = func_251(Global_2394785.f_4);
			iVar20 = unk_0x0FFED3E94261A832();
			bVar21 = Global_2394785.f_14;
			if (bVar21)
			{
				cVar11 = { Global_2394785.f_15 };
			}
			if (Global_2394785.f_25)
			{
				func_250(&Local_95, 1, 1);
				unk_0x507FE690B1271947(&(Global_1592456[iVar20 /*635*/].f_39.f_18), 2);
				unk_0x507FE690B1271947(&(Global_1592456[iVar20 /*635*/].f_39.f_18), 1);
				unk_0x507FE690B1271947(&(Global_1592456[iVar20 /*635*/].f_39.f_18), 3);
				func_249();
				func_248();
				Global_2394785.f_25 = 0;
			}
			if (!unk_0x591AF4C50B46E014())
			{
				func_247();
			}
			else if (!func_111(&Local_95, &cVar11, &(Global_1592456[iVar20 /*635*/].f_39.f_18), iVar19, 0, 0, 1, 0, 1, bVar21, 0, 1, 0, 1))
			{
				Global_2394785.f_23 = 0;
				Global_2394785.f_27 = -1;
				if (bVar0)
				{
					func_250(&Local_95, 1, 1);
					unk_0x64CF4A4A56645614();
					func_110();
					Global_2394785.f_23 = 1;
					Global_2394785.f_24 = 0;
					if (Global_2394785.f_27 < 0)
					{
						Global_2394785.f_27 = 0;
					}
					else
					{
						Global_2394785.f_27++;
						if (Global_2394785.f_27 >= 10)
						{
							func_247();
							Global_2394785.f_25 = 1;
						}
					}
				}
			}
			else if (Local_95.f_0)
			{
				Global_2394785.f_23 = 1;
				Global_2394785.f_24 = 1;
				if (Global_2394785.f_27 < 0)
				{
					Global_2394785.f_27 = 0;
				}
				else
				{
					Global_2394785.f_27++;
					if (Global_2394785.f_27 >= 10)
					{
						func_247();
					}
				}
			}
			else
			{
				Global_2394785.f_26++;
				if (Global_2394785.f_26 >= 3)
				{
					Global_2394785.f_23 = 1;
					Global_2394785.f_24 = 0;
					if (Global_2394785.f_27 < 0)
					{
						Global_2394785.f_27 = 0;
					}
					else
					{
						Global_2394785.f_27++;
						if (Global_2394785.f_27 >= 10)
						{
							func_247();
							Global_2394785.f_25 = 1;
						}
					}
				}
				else
				{
					Global_2394785.f_25 = 1;
				}
			}
		}
		if (func_109())
		{
			bLocal_277 = true;
			MemCopy(&cVar22, {Global_2394785.f_4.f_3}, 8);
			if (Global_2394785.f_23)
			{
				func_247();
			}
			else
			{
				if (Global_2394785.f_25)
				{
					func_250(&Local_95, 1, 1);
					Global_2394785.f_25 = 0;
				}
				if (!func_105(&Local_95, &cVar22, &Local_188))
				{
					Global_2394785.f_23 = 0;
					Global_2394785.f_27 = -1;
				}
				else if (Local_95.f_0)
				{
					Global_2394785.f_23 = 1;
					Global_2394785.f_24 = 1;
					Global_2394785.f_28 = Local_188.f_65;
					Global_2394785.f_29 = Local_188.f_68;
					Global_2394785.f_30 = { Local_188.f_22 };
					Global_2394785.f_46 = { Local_188.f_38 };
					Global_2398732 = { Local_188 };
				}
				else
				{
					Global_2394785.f_23 = 1;
					Global_2394785.f_24 = 0;
				}
			}
		}
		if (func_104())
		{
			bLocal_277 = true;
			if (Global_2394785.f_23)
			{
				func_247();
			}
			else
			{
				if (Global_2394785.f_25)
				{
					func_250(&Local_95, 1, 1);
					Global_2394785.f_25 = 0;
				}
				iVar30 = Local_95.f_4;
				if (!func_5(&Local_95))
				{
					Global_2395233 = 1;
					if (iVar30 != Local_95.f_4)
					{
						if (Local_95.f_4 == 4)
						{
							iLocal_276 = (unk_0x3732B96D7A1859B4() + 50000);
						}
					}
					bVar31 = false;
					if (Local_95.f_4 == 4)
					{
						if (unk_0x3732B96D7A1859B4() > iLocal_276)
						{
							Global_2394785.f_23 = 1;
							Global_2394785.f_24 = 0;
							bVar31 = true;
						}
					}
					if (!bVar31)
					{
						Global_2394785.f_23 = 0;
						Global_2394785.f_27 = -1;
					}
				}
				else if (Local_95.f_0)
				{
					Global_2394785.f_23 = 1;
					Global_2394785.f_24 = 1;
				}
				else
				{
					Global_2394785.f_23 = 1;
					Global_2394785.f_24 = 0;
				}
			}
		}
		if (!bLocal_277)
		{
			if (func_4(unk_0x0FFED3E94261A832()) || func_3(unk_0x0FFED3E94261A832()))
			{
				if (!func_1(unk_0x0FFED3E94261A832(), 1, 0))
				{
					unk_0xA232817B0B36F2E5();
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
	if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_13, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_259.f_13, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2422215[iParam0 /*387*/].f_318.f_1 != -1)
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
	return Global_2422215[iParam0 /*387*/].f_124 == 7;
}

bool func_4(int iParam0)
{
	return Global_2422215[iParam0 /*387*/].f_124 == 2;
}

int func_5(bool bParam0)
{
	if (!func_103())
	{
		if (func_100())
		{
			return 1;
		}
	}
	switch (bParam0->f_4)
	{
		case 0:
			if (func_99())
			{
				return 0;
			}
			if (func_98())
			{
				return 0;
			}
			func_97();
			func_96();
			func_95();
			if (func_103())
			{
				unk_0xA60DF04C7AAB3B07(1);
			}
			else
			{
				unk_0xA60DF04C7AAB3B07(0);
			}
			bParam0->f_13 = Global_2395232;
			bParam0->f_9 = 1100;
			if (bParam0->f_13 == 0)
			{
				return 1;
			}
			func_94(bParam0, 24);
			break;
		
		case 24:
			if (func_92(bParam0->f_13))
			{
				func_250(bParam0, 1, 1);
				*bParam0 = 1;
				return 1;
			}
			else
			{
				func_94(bParam0, 1);
			}
			break;
		
		case 1:
			if (unk_0xCA3D28A0B39B2037(&Global_2394847, bParam0->f_13, 1, func_91(0)))
			{
				func_94(bParam0, 2);
			}
			break;
		
		case 2:
			if (unk_0x4CD1033957B05B6F())
			{
				if (unk_0x4FE746CF3A3D9B0A())
				{
					*bParam0 = 0;
				}
				else
				{
					func_250(bParam0, 1, 1);
					bParam0->f_40 = unk_0x42D015647CC79FFA();
					*bParam0 = 0;
					return 1;
				}
				if (unk_0x778CA81AB2E699D8() > 0)
				{
					func_94(bParam0, 4);
				}
				else
				{
					func_250(bParam0, 1, 1);
					*bParam0 = 0;
					return 1;
				}
			}
			break;
		
		case 4:
			if (unk_0x1D1191C5C2982B23())
			{
				func_96();
				*bParam0 = 0;
				return 1;
			}
			if (bParam0->f_9 >= (1100 + bParam0->f_13))
			{
				func_250(bParam0, 1, 1);
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
						if (unk_0xBEA29F6CAC4ECD19() != 0)
						{
							unk_0x97003200DCC6C27A();
						}
						if (unk_0xE01031A34532288D(bParam0->f_7))
						{
							func_6(bParam0, 1);
						}
						else if (bParam0->f_8 > 200)
						{
							func_96();
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
	
	iVar0 = unk_0xBEA29F6CAC4ECD19();
	iVar1 = unk_0xD41282265B0A744C(iVar0, "mission");
	iVar2 = unk_0xD41282265B0A744C(iVar1, "gen");
	if (func_103())
	{
		if (func_90(unk_0xD04F95C148BB3FAA(bParam0->f_7)))
		{
			if (unk_0xBEA29F6CAC4ECD19() != 0)
			{
				unk_0x97003200DCC6C27A();
			}
			return;
		}
	}
	if ((unk_0xE33C601C19270822(iVar2, "type") == 0 && unk_0xE33C601C19270822(iVar2, "subtype") == 7) && bParam0->f_9 < 1100)
	{
		if (unk_0xBEA29F6CAC4ECD19() != 0)
		{
			unk_0x97003200DCC6C27A();
		}
		return;
	}
	if (Global_262145.f_6635)
	{
		if (unk_0xE33C601C19270822(iVar2, "type") == 0)
		{
			if (unk_0xE33C601C19270822(iVar2, "subtype") == 1 || unk_0xE33C601C19270822(iVar2, "subtype") == 7)
			{
				if (unk_0xBEA29F6CAC4ECD19() != 0)
				{
					unk_0x97003200DCC6C27A();
				}
				return;
			}
			iVar3 = unk_0xE33C601C19270822(iVar2, "optbs");
			if (unk_0xAA4F14DA15DB0B51(iVar3, 4) || unk_0xAA4F14DA15DB0B51(iVar3, 12))
			{
				if (unk_0xBEA29F6CAC4ECD19() != 0)
				{
					unk_0x97003200DCC6C27A();
				}
				return;
			}
		}
	}
	if (bParam0->f_9 == 0 && bParam1 == 0)
	{
		func_89();
		Global_794643.f_2 = 0;
		Global_794643.f_112968 = 0;
		func_88();
		iVar4 = 0;
		while (iVar4 < 13)
		{
			Global_794643.f_112983[iVar4] = 0;
			Global_794643.f_112969[iVar4] = 0;
			iVar4++;
		}
		if (func_85())
		{
			func_84(1);
			func_84(0);
			func_82(1);
		}
	}
	Var5.f_65 = -1;
	Var5.f_66 = -1;
	Var5.f_67 = 2;
	Global_794643.f_4[bParam0->f_9 /*88*/] = { Var5 };
	if (!func_103())
	{
		Global_794643.f_98389[bParam0->f_9 /*13*/].f_5 = unk_0xD7760E714FB82E25(bParam0->f_7, 0);
		Global_794643.f_4[bParam0->f_9 /*88*/].f_67 = func_81(bParam0->f_7);
		Global_794643.f_4[bParam0->f_9 /*88*/].f_66 = unk_0xD7760E714FB82E25(bParam0->f_7, Global_794643.f_4[bParam0->f_9 /*88*/].f_67);
		Global_794643.f_98389[bParam0->f_9 /*13*/].f_6 = unk_0x452F045938CD1887(bParam0->f_7);
	}
	Global_794643.f_4[bParam0->f_9 /*88*/].f_56 = { func_80(iVar2, "start") };
	if (unk_0x7ADD5F9CC9AA2359(iVar2, "optbs") == 2)
	{
		Global_794643.f_4[bParam0->f_9 /*88*/].f_76 = unk_0xE33C601C19270822(iVar2, "optbs");
	}
	unk_0x507FE690B1271947(&(Global_794643.f_4[bParam0->f_9 /*88*/].f_76), 15);
	unk_0x507FE690B1271947(&(Global_794643.f_4[bParam0->f_9 /*88*/].f_76), 18);
	unk_0x507FE690B1271947(&(Global_794643.f_4[bParam0->f_9 /*88*/].f_76), 19);
	unk_0x507FE690B1271947(&(Global_794643.f_4[bParam0->f_9 /*88*/].f_76), 29);
	unk_0x507FE690B1271947(&(Global_794643.f_4[bParam0->f_9 /*88*/].f_76), 28);
	Global_794643.f_4[bParam0->f_9 /*88*/].f_59 = { func_80(iVar2, "cam") };
	Global_794643.f_4[bParam0->f_9 /*88*/].f_62 = { func_79(iVar2) };
	if (!func_103())
	{
		if (unk_0xD176F39E49081808(unk_0x452F045938CD1887(bParam0->f_7)))
		{
			Global_794643.f_4[bParam0->f_9 /*88*/].f_54 = unk_0x0FB2A837FE9E58D2(bParam0->f_7);
		}
		else
		{
			Global_794643.f_4[bParam0->f_9 /*88*/].f_54 = -1;
		}
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar2, "mgrk") == 2)
	{
		Global_794643.f_98389[bParam0->f_9 /*13*/].f_8 = unk_0xE33C601C19270822(iVar2, "mgrk");
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar2, "mght") == 2)
	{
		Global_794643.f_98389[bParam0->f_9 /*13*/].f_9 = unk_0xE33C601C19270822(iVar2, "mght");
	}
	Global_794643.f_98389[bParam0->f_9 /*13*/].f_11 = unk_0xE33C601C19270822(iVar2, "cncmbs");
	Global_794643.f_4[bParam0->f_9 /*88*/].f_69 = unk_0xE33C601C19270822(iVar2, "min");
	Global_794643.f_4[bParam0->f_9 /*88*/].f_71 = unk_0xE33C601C19270822(iVar2, "num");
	if (Global_794643.f_4[bParam0->f_9 /*88*/].f_71 == -1)
	{
		Global_794643.f_4[bParam0->f_9 /*88*/].f_71 = 30;
	}
	StringCopy(&(Global_794643.f_4[bParam0->f_9 /*88*/].f_22), unk_0x499C0C5729C7F943(bParam0->f_7), 64);
	Global_794643.f_4[bParam0->f_9 /*88*/].f_65 = unk_0xE33C601C19270822(iVar2, "type");
	if (func_103())
	{
		StringCopy(&(Global_794643.f_4[bParam0->f_9 /*88*/].f_6), func_78(), 64);
	}
	else
	{
		StringCopy(&(Global_794643.f_4[bParam0->f_9 /*88*/].f_6), unk_0x1A0A17CCD5A27AD3(bParam0->f_7), 64);
	}
	Global_794643.f_4[bParam0->f_9 /*88*/].f_70 = unk_0xE33C601C19270822(iVar2, "rank");
	Global_794643.f_98389[bParam0->f_9 /*13*/] = unk_0xE33C601C19270822(iVar2, "tnum");
	if (!func_103())
	{
		Global_794643.f_4[bParam0->f_9 /*88*/].f_73 = func_77(unk_0x8DBC83A590E25E2F(bParam0->f_7, 0), unk_0x9C90954401250AA1(bParam0->f_7, 0));
		Global_794643.f_98389[bParam0->f_9 /*13*/].f_4 = unk_0x9C90954401250AA1(bParam0->f_7, 0);
	}
	Global_794643.f_4[bParam0->f_9 /*88*/].f_75 = unk_0xE33C601C19270822(iVar2, "charcon");
	Global_794643.f_4[bParam0->f_9 /*88*/].f_78 = unk_0xE33C601C19270822(iVar2, "ltm");
	StringCopy(&(Global_794643.f_4[bParam0->f_9 /*88*/]), unk_0xD04F95C148BB3FAA(bParam0->f_7), 24);
	iVar93 = unk_0xCAEDBF30E3EA14FC(&(Global_794643.f_4[bParam0->f_9 /*88*/]));
	Global_794643.f_98389[bParam0->f_9 /*13*/].f_3 = iVar93;
	if (Global_794643.f_4[bParam0->f_9 /*88*/].f_65 == 6 && !bParam1)
	{
		if (Global_970275.f_684 < 85)
		{
			Global_794643.f_4[bParam0->f_9 /*88*/].f_68 = Global_970275.f_684;
			Global_970275[Global_970275.f_684 /*3*/] = { func_80(iVar2, "area") };
			if (unk_0x7ADD5F9CC9AA2359(iVar2, "rad") == 2)
			{
				Global_970275.f_512[Global_970275.f_684] = unk_0xBBDA792448DB5A89(unk_0xE33C601C19270822(iVar2, "rad"));
			}
			else
			{
				Global_970275.f_512[Global_970275.f_684] = unk_0x22B34D863B5EB347(iVar2, "rad");
			}
			Global_970275.f_256[Global_970275.f_684 /*3*/] = { Global_794643.f_4[bParam0->f_9 /*88*/].f_56 };
			Global_970275.f_598[Global_970275.f_684] = iVar93;
			Global_794643.f_4[bParam0->f_9 /*88*/].f_56 = { Global_794643.f_4[bParam0->f_9 /*88*/].f_59 };
			Global_970275.f_684++;
		}
	}
	else
	{
		Global_794643.f_4[bParam0->f_9 /*88*/].f_68 = unk_0xE33C601C19270822(iVar2, "subtype");
		Global_794643.f_4[bParam0->f_9 /*88*/].f_80 = unk_0xE33C601C19270822(iVar2, "adverm");
	}
	func_76(Global_794643.f_4[bParam0->f_9 /*88*/].f_65, &(Global_794643.f_4[bParam0->f_9 /*88*/].f_71), &(Global_794643.f_4[bParam0->f_9 /*88*/].f_69));
	if (func_103())
	{
		if (unk_0x35302CD5A5D37EED(unk_0xD04F95C148BB3FAA(bParam0->f_7), "lUo6JFfliE-ZQ_8gd90ZxQ"))
		{
			Global_794643.f_4[bParam0->f_9 /*88*/].f_56 = { 897.5109f, -2340.599f, 29.4461f };
		}
	}
	unk_0xF6082E2ADA1C795B(&(Global_794643.f_4[bParam0->f_9 /*88*/].f_76), 13);
	if (!func_103())
	{
		Global_794643.f_98389[bParam0->f_9 /*13*/].f_1 = unk_0xCAEDBF30E3EA14FC(unk_0x6F6878A962A56F20(bParam0->f_7));
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
	if (unk_0xBEA29F6CAC4ECD19() != 0)
	{
		unk_0x97003200DCC6C27A();
	}
	if (!func_103())
	{
		if (func_75(Global_794643.f_98389[bParam0->f_9 /*13*/].f_1))
		{
			Global_794643.f_4[bParam0->f_9 /*88*/].f_69 = Global_794643.f_4[bParam0->f_9 /*88*/].f_71;
		}
		if ((Global_794643.f_112968 < 5 && Global_794643.f_4[bParam0->f_9 /*88*/].f_65 == 0) && Global_794643.f_4[bParam0->f_9 /*88*/].f_68 == 1)
		{
			Global_794643.f_98389[bParam0->f_9 /*13*/].f_10 = Global_794643.f_112968;
			StringCopy(&(Global_794643.f_112937[Global_794643.f_112968 /*6*/]), unk_0x6F6878A962A56F20(bParam0->f_7), 24);
			Global_794643.f_112968++;
		}
		func_56(Global_794643.f_98389[bParam0->f_9 /*13*/].f_1, &(Global_794643.f_4[bParam0->f_9 /*88*/].f_76), &(Global_794643.f_4[bParam0->f_9 /*88*/].f_77), Global_794643.f_4[bParam0->f_9 /*88*/].f_80);
		func_52(Global_794643.f_98389[bParam0->f_9 /*13*/].f_1, bParam0->f_9);
		if (bParam1)
		{
			if (unk_0x2067E93A86B3AA21(bParam0->f_7))
			{
				unk_0xF6082E2ADA1C795B(&(Global_794643.f_4[bParam0->f_9 /*88*/].f_76), 14);
			}
		}
		else if (!func_75(Global_794643.f_98389[bParam0->f_9 /*13*/].f_1))
		{
			if (func_32(Global_794643.f_98389[bParam0->f_9 /*13*/].f_1, Global_794643.f_4[bParam0->f_9 /*88*/].f_80))
			{
				Global_794643.f_112969[11]++;
			}
			if (unk_0x2067E93A86B3AA21(bParam0->f_7))
			{
				unk_0xF6082E2ADA1C795B(&(Global_794643.f_4[bParam0->f_9 /*88*/].f_76), 14);
				if (unk_0xAA4F14DA15DB0B51(Global_794643.f_4[bParam0->f_9 /*88*/].f_76, 1) || Global_794643.f_4[bParam0->f_9 /*88*/].f_68 == 2)
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
				Global_794643.f_98389[bParam0->f_9 /*13*/].f_7 = unk_0xD185AF2F1C5A823B(bParam0->f_7);
			}
		}
	}
	if (!bParam1 && !func_75(Global_794643.f_98389[bParam0->f_9 /*13*/].f_1))
	{
		if (func_85())
		{
			func_30(Global_794643.f_4[bParam0->f_9 /*88*/].f_65, Global_794643.f_4[bParam0->f_9 /*88*/].f_68, unk_0xAA4F14DA15DB0B51(Global_794643.f_4[bParam0->f_9 /*88*/].f_76, 14), Global_794643.f_4[bParam0->f_9 /*88*/].f_70, 0);
			func_28(Global_794643.f_4[bParam0->f_9 /*88*/].f_65, Global_794643.f_4[bParam0->f_9 /*88*/].f_68, Global_794643.f_4[bParam0->f_9 /*88*/].f_70, 0);
			func_26(Global_794643.f_4[bParam0->f_9 /*88*/].f_65, Global_794643.f_4[bParam0->f_9 /*88*/].f_68, Global_794643.f_4[bParam0->f_9 /*88*/].f_75, Global_794643.f_4[bParam0->f_9 /*88*/].f_70, unk_0xAA4F14DA15DB0B51(Global_794643.f_4[bParam0->f_9 /*88*/].f_76, 14));
			func_7(Global_794643.f_4[bParam0->f_9 /*88*/].f_65, Global_794643.f_4[bParam0->f_9 /*88*/].f_68, Global_794643.f_4[bParam0->f_9 /*88*/].f_75, Global_794643.f_4[bParam0->f_9 /*88*/].f_70);
		}
	}
	if (Global_794643.f_4[bParam0->f_9 /*88*/].f_65 == 6)
	{
		Global_970960[0 /*37*/]++;
	}
	bParam0->f_9++;
	Global_794643.f_2++;
	if (unk_0xBEA29F6CAC4ECD19() != 0)
	{
		unk_0x97003200DCC6C27A();
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
		unk_0xC94674712BED1A82(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1361882 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1361884 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1361884 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1361885 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1361886 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1361887 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1361888 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1361889 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1361890 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1361891 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1361892 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1361893 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1361894 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1361895 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1361896 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1361897 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1361898 = iParam1;
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
		unk_0xC94674712BED1A82(iVar0, iParam1, 1);
	}
}

int func_11(int iParam0)
{
	if (Global_1361881)
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
	if (unk_0xC225A90A8DE0D96B(uVar0, &uVar1, -1))
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
	if (func_20(unk_0x0FFED3E94261A832()) < iParam4)
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
		if (Global_282038[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_282038[iVar3] < iParam0)
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
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x0FFED3E94261A832())
			{
				return Global_1362002[func_24(-1)];
			}
			else if (func_23(iParam0))
			{
				return Global_1592456[iParam0 /*635*/].f_204.f_1;
			}
		}
	}
	else
	{
		return Global_1362002[func_24(-1)];
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
		return unk_0xAA4F14DA15DB0B51(Global_2434604.f_1, iParam0);
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
			Global_2507091 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2507091 = 1;
		}
	}
	return iVar0;
}

int func_25()
{
	return Global_1312735;
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
	
	if (func_85())
	{
		if (iParam0 == 0)
		{
			if (((iParam1 != 6 && iParam1 != 5) && iParam1 != 4) && iParam1 != 9)
			{
				if (func_20(unk_0x0FFED3E94261A832()) < iParam2)
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
	
	if (!func_85())
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
			if (func_20(unk_0x0FFED3E94261A832()) < iParam3)
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
		if (iParam0 == Global_262145.f_8056[iVar0])
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
		if (iParam0 == Global_262145.f_8089[iVar0])
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
		if (iParam0 == Global_262145.f_8078[iVar0])
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
		if (iParam0 == Global_262145.f_8067[iVar0])
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
		if (iParam0 == Global_262145.f_8043[iVar0])
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
		if (iParam0 == Global_262145.f_8032[iVar0])
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
		if (iParam0 == Global_262145.f_8021[iVar0])
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
		if (iParam0 == Global_262145.f_8010[iVar0])
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
		if (iParam0 == Global_262145.f_7913[iVar0])
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
		if (iParam0 == Global_262145.f_7935[iVar0])
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
		if (iParam0 == Global_262145.f_7924[iVar0])
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
		if (iParam0 == Global_262145.f_7902[iVar0])
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
		if (iParam0 == Global_262145.f_7891[iVar0])
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
		if (iParam0 == Global_262145.f_7880[iVar0])
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
		if (iParam0 == Global_262145.f_7846[iVar0])
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
		if (iParam0 == Global_262145.f_7854[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_49(int iParam0)
{
	if ((((iParam0 == Global_262145.f_7841 || iParam0 == Global_262145.f_7842) || iParam0 == Global_262145.f_7843) || iParam0 == Global_262145.f_7844) || iParam0 == Global_262145.f_7845)
	{
		return 1;
	}
	return 0;
}

int func_50(int iParam0)
{
	if ((((iParam0 == Global_262145.f_7836 || iParam0 == Global_262145.f_7837) || iParam0 == Global_262145.f_7838) || iParam0 == Global_262145.f_7839) || iParam0 == Global_262145.f_7840)
	{
		return 1;
	}
	return 0;
}

int func_51(int iParam0)
{
	if ((((((iParam0 == Global_262145.f_7829 || iParam0 == Global_262145.f_7830) || iParam0 == Global_262145.f_7831) || iParam0 == Global_262145.f_7832) || iParam0 == Global_262145.f_7833) || iParam0 == Global_262145.f_7834) || iParam0 == Global_262145.f_7835)
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
		if (iParam0 == Global_262145.f_7862[iVar0])
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
		else if (iParam0 == Global_262145.f_7871[iVar0])
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
		unk_0xF6082E2ADA1C795B(uParam1, 15);
	}
	else if (func_50(iParam0))
	{
		unk_0xF6082E2ADA1C795B(uParam1, 18);
	}
	else if (func_49(iParam0))
	{
		unk_0xF6082E2ADA1C795B(uParam1, 19);
	}
	else if (func_47(iParam0))
	{
		unk_0xF6082E2ADA1C795B(uParam1, 29);
	}
	else if (func_48(iParam0))
	{
		unk_0xF6082E2ADA1C795B(uParam1, 28);
	}
	else if (func_46(iParam0))
	{
		unk_0xF6082E2ADA1C795B(uParam2, 0);
	}
	else if (func_45(iParam0))
	{
		unk_0xF6082E2ADA1C795B(uParam2, 1);
	}
	else if (func_44(iParam0))
	{
		unk_0xF6082E2ADA1C795B(uParam2, 2);
	}
	else if (func_43(iParam0))
	{
		unk_0xF6082E2ADA1C795B(uParam2, 3);
	}
	else if (func_42(iParam0))
	{
		unk_0xF6082E2ADA1C795B(uParam2, 4);
	}
	else if (func_41(iParam0))
	{
		unk_0xF6082E2ADA1C795B(uParam2, 5);
	}
	else if (func_40(iParam0))
	{
		unk_0xF6082E2ADA1C795B(uParam2, 6);
	}
	else if (func_39(iParam0))
	{
		unk_0xF6082E2ADA1C795B(uParam2, 7);
	}
	else if (func_38(iParam0))
	{
		unk_0xF6082E2ADA1C795B(uParam2, 8);
	}
	else if (func_37(iParam0))
	{
		unk_0xF6082E2ADA1C795B(uParam2, 9);
	}
	else if (func_33(iParam0))
	{
		unk_0xF6082E2ADA1C795B(uParam2, 10);
	}
	else if (func_36(iParam0))
	{
		unk_0xF6082E2ADA1C795B(uParam2, 11);
	}
	else if (func_35(iParam0))
	{
		unk_0xF6082E2ADA1C795B(uParam2, 12);
	}
	else if (func_70(iParam3))
	{
		unk_0xF6082E2ADA1C795B(uParam2, 13);
	}
	else if (func_34(iParam0))
	{
		unk_0xF6082E2ADA1C795B(uParam2, 14);
	}
	else if (func_69(iParam0))
	{
		unk_0xF6082E2ADA1C795B(uParam2, 22);
	}
	else if (func_68(iParam3))
	{
		unk_0xF6082E2ADA1C795B(uParam2, 16);
	}
	else if (func_67(iParam3))
	{
		unk_0xF6082E2ADA1C795B(uParam2, 17);
	}
	else if (func_66(iParam3))
	{
		unk_0xF6082E2ADA1C795B(uParam2, 20);
	}
	else if (func_65(iParam3))
	{
		unk_0xF6082E2ADA1C795B(uParam2, 21);
	}
	else if (func_69(iParam3))
	{
		unk_0xF6082E2ADA1C795B(uParam2, 22);
	}
	else if (func_64(iParam3))
	{
		unk_0xF6082E2ADA1C795B(uParam2, 23);
	}
	else if (func_63(iParam3))
	{
		unk_0xF6082E2ADA1C795B(uParam2, 24);
	}
	else if (func_62(iParam3))
	{
		unk_0xF6082E2ADA1C795B(uParam2, 25);
	}
	else if (func_61(iParam3))
	{
		unk_0xF6082E2ADA1C795B(uParam2, 26);
	}
	else if (func_60(iParam3))
	{
		unk_0xF6082E2ADA1C795B(uParam2, 27);
	}
	else if (func_59(iParam3))
	{
		unk_0xF6082E2ADA1C795B(uParam2, 28);
	}
	else if (func_58(iParam3))
	{
		unk_0xF6082E2ADA1C795B(uParam2, 29);
	}
	else if (func_57(iParam3))
	{
		unk_0xF6082E2ADA1C795B(uParam2, 30);
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
	return unk_0xAA4F14DA15DB0B51(Global_794643.f_4[iParam0 /*88*/].f_76, 24);
}

bool func_72(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_794643.f_4[iParam0 /*88*/].f_76, 3);
}

bool func_73(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_794643.f_4[iParam0 /*88*/].f_76, 10);
}

bool func_74(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_794643.f_4[iParam0 /*88*/].f_76, 7);
}

int func_75(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != 0)
	{
		iVar1 = 0;
		while (iVar1 < 7)
		{
			if (Global_262145.f_5384[iVar1] == 2)
			{
				iVar0 = 0;
				while (iVar0 < 20)
				{
					if (iParam0 == Global_262145.f_5077[iVar1 /*21*/][iVar0])
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

void func_76(int iParam0, var uParam1, var uParam2)
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

int func_77(float fParam0, int iParam1)
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

var func_78()
{
	return unk_0x91D2F083AE17E209("CREATOR_RSC");
}

Vector3 func_79(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0x7ADD5F9CC9AA2359(iParam0, "camp") == 3)
	{
		Var0.f_0 = unk_0x22B34D863B5EB347(iParam0, "camp");
	}
	else if (unk_0x7ADD5F9CC9AA2359(iParam0, "camp") == 2)
	{
		Var0.f_0 = unk_0xBBDA792448DB5A89(unk_0xE33C601C19270822(iParam0, "camp"));
	}
	if (unk_0x7ADD5F9CC9AA2359(iParam0, "camh") == 3)
	{
		Var0.f_2 = unk_0x22B34D863B5EB347(iParam0, "camh");
	}
	else if (unk_0x7ADD5F9CC9AA2359(iParam0, "camh") == 2)
	{
		Var0.f_2 = unk_0xBBDA792448DB5A89(unk_0xE33C601C19270822(iParam0, "camh"));
	}
	return Var0;
}

Vector3 func_80(int iParam0, char* sParam1)
{
	struct<3> Var0;
	int iVar3;
	
	if (unk_0x7ADD5F9CC9AA2359(iParam0, sParam1) == 5)
	{
		Var0 = { unk_0xAB08124000EEAE30(iParam0, sParam1) };
	}
	else if (unk_0x7ADD5F9CC9AA2359(iParam0, sParam1) == 6)
	{
		iVar3 = unk_0xD41282265B0A744C(iParam0, sParam1);
		if (unk_0x7ADD5F9CC9AA2359(iVar3, "x") == 2)
		{
			Var0.f_0 = unk_0xBBDA792448DB5A89(unk_0xE33C601C19270822(iVar3, "x"));
		}
		else
		{
			Var0.f_0 = unk_0x22B34D863B5EB347(iVar3, "x");
		}
		if (unk_0x7ADD5F9CC9AA2359(iVar3, "y") == 2)
		{
			Var0.f_1 = unk_0xBBDA792448DB5A89(unk_0xE33C601C19270822(iVar3, "y"));
		}
		else
		{
			Var0.f_1 = unk_0x22B34D863B5EB347(iVar3, "y");
		}
		if (unk_0x7ADD5F9CC9AA2359(iVar3, "z") == 2)
		{
			Var0.f_2 = unk_0xBBDA792448DB5A89(unk_0xE33C601C19270822(iVar3, "z"));
		}
		else
		{
			Var0.f_2 = unk_0x22B34D863B5EB347(iVar3, "z");
		}
	}
	return Var0;
}

int func_81(int iParam0)
{
	if (unk_0xA51EA37220A20821(iParam0))
	{
		return 2;
	}
	else if (unk_0x99C1E118B00604F3(iParam0))
	{
		return 1;
	}
	return 1;
}

void func_82(int iParam0)
{
	func_83(joaat("mpply_big_feed_init"), iParam0);
}

void func_83(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x0D7634B211BCB8B0(iVar0, uParam1, 1);
	}
}

void func_84(bool bParam0)
{
	if (!func_85())
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

int func_85()
{
	if (func_87() && func_86(0))
	{
		return 1;
	}
	return 0;
}

var func_86(int iParam0)
{
	return Global_1312373[iParam0];
}

var func_87()
{
	return func_86(func_25() + 1);
}

void func_88()
{
	int iVar0;
	
	Global_970275.f_684 = 0;
	iVar0 = 0;
	while (iVar0 <= 84)
	{
		Global_970275[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_970275.f_256[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_970275.f_512[iVar0] = 0f;
		iVar0++;
	}
}

void func_89()
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

int func_90(char* sParam0)
{
	if ((((((((((((((((unk_0x35302CD5A5D37EED(sParam0, "QwBYuaosIk-ZB9sAs4T6vQ") || unk_0x35302CD5A5D37EED(sParam0, "O8SUrTkPW0G7NVh-c95lPQ")) || unk_0x35302CD5A5D37EED(sParam0, "Cdgvsa-E8katW71P6VWhQg")) || unk_0x35302CD5A5D37EED(sParam0, "W3U0oyo5okGvED-f7CPzhg")) || unk_0x35302CD5A5D37EED(sParam0, "7CpnaZYqMEKxxbW2rbp33A")) || unk_0x35302CD5A5D37EED(sParam0, "d_cLbuKs0kyVu6VWc3tfQg")) || unk_0x35302CD5A5D37EED(sParam0, "hCC18F4SuU254v5vlgPRmA")) || unk_0x35302CD5A5D37EED(sParam0, "tSm64WIuK0yqti6Po8oQCg")) || unk_0x35302CD5A5D37EED(sParam0, "5mwusUtO5E6AVvnUrgFZcg")) || unk_0x35302CD5A5D37EED(sParam0, "_dFdLIICm0OaNP3ewdkmqA")) || unk_0x35302CD5A5D37EED(sParam0, "cfWCTF0bH0W0JmM3kP3TPg")) || unk_0x35302CD5A5D37EED(sParam0, "JVlkjgsbUk6pHcrN43FPgQ")) || unk_0x35302CD5A5D37EED(sParam0, "AdOvPsvI30yZ6h9HpjzcwA")) || unk_0x35302CD5A5D37EED(sParam0, "te4f3O-vVUOkF3YAbnzD2A")) || unk_0x35302CD5A5D37EED(sParam0, "8jRfzi-oHEGHiJEQLkbZ_w")) || unk_0x35302CD5A5D37EED(sParam0, "gYOgjaTS7EedRGFuBasioQ")) || unk_0x35302CD5A5D37EED(sParam0, "OGuQ53X7G0qx-jteU3gBkg"))
	{
		return 1;
	}
	return 0;
}

char* func_91(int iParam0)
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

int func_92(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2[64];
	int iVar67;
	
	if (Global_262145.f_3767 == 1)
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
					if (Global_786484.f_3082[iVar1 /*13*/].f_1 == unk_0xCAEDBF30E3EA14FC(&(Global_2394847[iVar0 /*6*/])))
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
			Global_1761600.f_111[iVar0 /*204*/].f_44[iVar1 /*16*/] = { Global_786484.f_3538[iVar2[iVar0] /*132*/][iVar1 /*16*/] };
			iVar1++;
		}
		iVar0++;
	}
	func_93(1);
	return 1;
}

void func_93(int iParam0)
{
	Global_1761600.f_1784 = iParam0;
}

void func_94(bool bParam0, int iParam1)
{
	bParam0->f_4 = iParam1;
}

void func_95()
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

void func_96()
{
	if (unk_0xBEA29F6CAC4ECD19() != 0)
	{
		unk_0x97003200DCC6C27A();
	}
}

void func_97()
{
	if (func_103())
	{
		unk_0x2E19AEB09B74585B();
	}
	else
	{
		unk_0x95CD1B419D90E4A8();
	}
}

bool func_98()
{
	return Global_2453064.f_4;
}

int func_99()
{
	if (unk_0x3B6919E718EE555D())
	{
		return 1;
	}
	else if (unk_0xA0534D593C0FD34C())
	{
		return 1;
	}
	else if (unk_0xEF5A95F12D88CBC0())
	{
		return 1;
	}
	return 0;
}

int func_100()
{
	if (!func_101())
	{
		return 1;
	}
	return 0;
}

int func_101()
{
	if (func_102())
	{
		return 0;
	}
	if (unk_0xD49DD4AB66A964B2() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_102()
{
	return Global_2455203;
}

bool func_103()
{
	return Global_1573274.f_4;
}

bool func_104()
{
	return Global_2394785.f_2;
}

int func_105(bool bParam0, char* sParam1, char* sParam2)
{
	switch (bParam0->f_4)
	{
		case 0:
			*bParam0 = 0;
			if (func_99())
			{
				return 0;
			}
			func_97();
			func_96();
			if (func_103())
			{
				*bParam0 = 0;
				return 1;
			}
			else
			{
				unk_0xA60DF04C7AAB3B07(0);
			}
			func_94(bParam0, 1);
			break;
		
		case 1:
			if (unk_0x637ADD817E072423(sParam1, func_91(0)))
			{
				func_94(bParam0, 3);
			}
			break;
		
		case 3:
			if (unk_0x4CD1033957B05B6F())
			{
				bParam0->f_40 = unk_0x42D015647CC79FFA();
				if (unk_0x4FE746CF3A3D9B0A())
				{
				}
				else
				{
					func_250(bParam0, 1, 1);
					bParam0->f_40 = unk_0x42D015647CC79FFA();
					*bParam0 = 0;
					return 1;
				}
				if (unk_0x778CA81AB2E699D8() > 0)
				{
					if (unk_0xE01031A34532288D(0))
					{
						func_106(sParam2, 0);
						func_250(bParam0, 1, 1);
						*bParam0 = 1;
						return 1;
					}
				}
				else
				{
					func_250(bParam0, 1, 1);
					*bParam0 = 0;
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_106(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = unk_0xBEA29F6CAC4ECD19();
	iVar1 = unk_0xD41282265B0A744C(iVar0, "mission");
	iVar2 = unk_0xD41282265B0A744C(iVar1, "gen");
	StringCopy(sParam0, unk_0xD04F95C148BB3FAA(iParam1), 24);
	StringCopy(&(sParam0->f_6), unk_0x1A0A17CCD5A27AD3(iParam1), 64);
	StringCopy(&(sParam0->f_22), unk_0x499C0C5729C7F943(iParam1), 64);
	sParam0->f_56 = { func_80(iVar2, "start") };
	sParam0->f_59 = { func_80(iVar2, "cam") };
	sParam0->f_62 = { func_79(iVar2) };
	sParam0->f_65 = unk_0xE33C601C19270822(iVar2, "type");
	sParam0->f_68 = unk_0xE33C601C19270822(iVar2, "subtype");
	sParam0->f_80 = unk_0xE33C601C19270822(iVar2, "adverm");
	sParam0->f_79 = unk_0xE33C601C19270822(iVar2, "testcomplete");
	sParam0->f_69 = unk_0xE33C601C19270822(iVar2, "min");
	sParam0->f_70 = unk_0xE33C601C19270822(iVar2, "rank");
	sParam0->f_71 = unk_0xE33C601C19270822(iVar2, "num");
	sParam0->f_73 = func_77(unk_0x8DBC83A590E25E2F(iParam1, 0), unk_0x9C90954401250AA1(iParam1, 0));
	sParam0->f_74 = 0;
	sParam0->f_75 = unk_0xE33C601C19270822(iVar2, "charcon");
	if (func_108(unk_0xCAEDBF30E3EA14FC(unk_0x6F6878A962A56F20(0))))
	{
		sParam0->f_68 = 8;
	}
	if (func_107() != 2)
	{
		if (sParam0->f_71 > Global_262145.f_4746)
		{
			sParam0->f_71 = Global_262145.f_4746;
		}
		if (sParam0->f_69 > Global_262145.f_4746)
		{
			sParam0->f_69 = Global_262145.f_4746;
		}
	}
	if (!func_103())
	{
		iVar3 = unk_0x452F045938CD1887(iParam1);
		if (unk_0xD176F39E49081808(iVar3))
		{
			sParam0->f_54 = unk_0x0FB2A837FE9E58D2(iParam1);
		}
		else
		{
			sParam0->f_54 = -1;
		}
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar2, "ltm") == 2)
	{
		sParam0->f_78 = unk_0xE33C601C19270822(iVar2, "ltm");
	}
	unk_0xF6082E2ADA1C795B(&(sParam0->f_76), 13);
	func_96();
}

int func_107()
{
	return Global_25222;
}

int func_108(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iParam0 == Global_262145.f_7862[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_109()
{
	return Global_2394785.f_1;
}

void func_110()
{
	Global_2453064.f_8 = 0;
	Global_2453064.f_7 = 0;
}

int func_111(var uParam0, char* sParam1, var uParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	if ((iParam3 > 10 && iParam3 <= 15) || iParam3 == 122)
	{
		*uParam0 = 1;
		unk_0xF6082E2ADA1C795B(uParam2, 3);
		if (!unk_0xAA4F14DA15DB0B51(*uParam2, 2))
		{
		}
		unk_0xF6082E2ADA1C795B(uParam2, 2);
		return 1;
	}
	if ((func_246() && func_245()) || func_244())
	{
		if (!unk_0xAA4F14DA15DB0B51(*uParam2, 2))
		{
		}
		unk_0xF6082E2ADA1C795B(uParam2, 2);
		unk_0xF6082E2ADA1C795B(uParam2, 1);
		unk_0xF6082E2ADA1C795B(uParam2, 3);
		*uParam0 = 1;
		return 1;
	}
	if (iParam7 == 1)
	{
		if (!unk_0xAA4F14DA15DB0B51(*uParam2, 3))
		{
			unk_0xF6082E2ADA1C795B(uParam2, 3);
		}
		return 1;
	}
	if (bParam4)
	{
		if (!func_243())
		{
			return 0;
		}
	}
	uParam0->f_15 = 0;
	if (bParam8)
	{
		if (func_242())
		{
			if (unk_0xAA4F14DA15DB0B51(*uParam2, 2))
			{
				unk_0xF6082E2ADA1C795B(uParam2, 3);
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
		if (func_98())
		{
			return 0;
		}
	}
	if (!unk_0xAA4F14DA15DB0B51(*uParam2, 2))
	{
		if (!unk_0xAA4F14DA15DB0B51(*uParam2, 1))
		{
			if (!bParam12)
			{
				func_229(1, 1, bParam11);
			}
			unk_0xF6082E2ADA1C795B(uParam2, 1);
			func_250(uParam0, 1, 1);
			*uParam0 = 0;
		}
		if (func_125(uParam0, sParam1, 0, 1, 0, iParam5, 0, 0, 1, bParam9, bParam10, bParam11, 0, bParam12, bParam13))
		{
			if (((func_124() || Global_1638223 == 31) || Global_1638223 == 6) || Global_1638223 == 4)
			{
				if (Global_1638223.f_32 < 1)
				{
					Global_1638223.f_32 = 1;
				}
				if (Global_1638223.f_31 < 1)
				{
					Global_1638223.f_31 = 1;
				}
				if (!func_123())
				{
					func_122();
				}
			}
			else if (Global_1638223 == 1)
			{
				Global_1362071.f_4 = 99;
				Global_1362071.f_6 = Global_1638223.f_53;
				Global_1362071.f_7 = Global_1638223.f_57265;
				Global_1362071.f_9 = Global_1638223.f_44969;
				Global_1362071.f_11 = Global_1638223.f_54;
				Global_1362071.f_12 = Global_1638223.f_56;
				Global_1362071.f_13 = Global_1638223.f_58;
				Global_1362071.f_14 = Global_1638223.f_57;
				Global_1362071.f_16 = Global_1638223.f_29;
				Global_1362071.f_5 = Global_1638223.f_51;
				Global_1362071.f_10 = Global_1638223.f_64;
			}
			else if (func_121())
			{
				Global_2529294.f_7 = 9901;
				Global_2529294.f_8 = Global_1638223.f_44247 + 1;
				if (func_120(Global_1638223.f_38622))
				{
					Global_1638223.f_38622 = { Global_1638223.f_68 };
				}
			}
			unk_0xF6082E2ADA1C795B(uParam2, 2);
			unk_0x507FE690B1271947(uParam2, 1);
			unk_0xF6082E2ADA1C795B(uParam2, 3);
			if (*uParam0)
			{
				func_119();
				func_118();
				if (func_117())
				{
					func_114(Global_1638223.f_27);
				}
				Global_1638223.f_94175 = 1;
			}
			else
			{
				func_248();
			}
			if (!func_113())
			{
				func_112();
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
		unk_0xF6082E2ADA1C795B(uParam2, 3);
		if (Global_1638223.f_94175)
		{
			*uParam0 = 1;
		}
		return 1;
	}
	return 0;
}

void func_112()
{
	Global_2445217.f_30.f_49 = 1;
}

int func_113()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (!unk_0x58478145CAF8429C(&(Global_1638223.f_93825[iVar1 /*6*/])))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

void func_114(int iParam0)
{
	if (!func_116())
	{
		unk_0x2CA63E0CEE41F7FC(2);
		unk_0xB6393A6DFB650684(1);
		if (iParam0 == 0)
		{
			iParam0 = 32;
		}
		unk_0x77446E4981739ECE((iParam0 / 2));
		func_115();
	}
}

void func_115()
{
	unk_0xF6082E2ADA1C795B(&(Global_2445217.f_2), 3);
}

bool func_116()
{
	return unk_0xAA4F14DA15DB0B51(Global_2445217.f_2, 3);
}

bool func_117()
{
	return unk_0xAA4F14DA15DB0B51(Global_2445989.f_1.f_2809, 8);
}

void func_118()
{
	unk_0xF6082E2ADA1C795B(&Global_2445217, 4);
}

void func_119()
{
	unk_0xF6082E2ADA1C795B(&Global_2445217, 28);
}

int func_120(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_121()
{
	if (Global_1638223 == 2 || Global_1638223 == 8)
	{
		return 1;
	}
	return 0;
}

void func_122()
{
	Global_1752418.f_5 = 0;
	Global_1752418.f_11 = -1;
}

int func_123()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < Global_1638223.f_32)
	{
		iVar1 = 0;
		while (iVar1 < Global_1638223.f_32)
		{
			if (Global_1638223.f_39[iVar0] != Global_1638223.f_39[iVar1])
			{
				return 0;
			}
			else if (Global_1638223.f_34[iVar0] != Global_1638223.f_34[iVar1])
			{
				return 0;
			}
			iVar1++;
		}
		iVar0++;
	}
	return 1;
}

int func_124()
{
	if ((((((Global_1638223 == 0 || Global_1638223 == 4) || Global_1638223 == 6) || Global_1638223 == 3) || Global_1638223 == 31) || Global_1638223.f_2 == 6) || Global_1638223.f_2 == 5)
	{
		return 1;
	}
	return 0;
}

int func_125(var uParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4, var uParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
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
		if (func_98() && uParam0->f_4 == 0)
		{
			return 0;
		}
	}
	if (!func_103() || (iParam2 != 0 && iParam2 != 1))
	{
		if (func_100())
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
			uParam0->f_24 = func_228(1);
			uParam0->f_25 = func_226(1);
			if (func_99())
			{
				return 0;
			}
			func_97();
			func_96();
			if (func_103() || bParam9)
			{
				unk_0xA60DF04C7AAB3B07(1);
			}
			else
			{
				unk_0xA60DF04C7AAB3B07(0);
			}
			func_224();
			if (bParam4)
			{
				func_94(uParam0, 11);
			}
			else
			{
				func_94(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_103() || bParam9)
			{
				if (unk_0x56C2E0D8C1E0582B(sParam1))
				{
					if (iParam2 == 0)
					{
						Global_1638223.f_94186 = 1;
						if (!bParam9)
						{
							StringCopy(&(Global_1638223.f_93819), sParam1, 24);
						}
						func_165(-1, 1, 0, 0);
						uParam0->f_8 = 0;
						func_94(uParam0, 9);
						*uParam0 = 1;
						func_110();
						return 1;
					}
					else if (iParam2 == 1)
					{
						if (uParam0->f_16)
						{
							StringCopy(&(Global_972560.f_42), sParam1, 24);
							Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_19 = { Global_972560.f_12 };
							func_164(&iVar1, &uVar0, &Global_972560);
							if (Global_972560.f_65 == 0)
							{
								func_250(uParam0, 1, 1);
								*uParam0 = 0;
								uParam0->f_28 = 1;
								func_96();
								func_110();
								return 1;
							}
							uParam0->f_8 = 0;
						}
						else
						{
							StringCopy(&(Global_970998.f_42), sParam1, 24);
							Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_19 = { Global_970998.f_12 };
							func_164(&iVar1, &uVar0, &Global_970998);
							uParam0->f_8 = 0;
							if (Global_970998.f_65 == 0)
							{
								func_250(uParam0, 1, 1);
								*uParam0 = 0;
								uParam0->f_28 = 1;
								func_96();
								func_110();
								return 1;
							}
						}
						func_96();
						unk_0x2E19AEB09B74585B();
						unk_0xA60DF04C7AAB3B07(1);
						func_163(uParam0);
						func_94(uParam0, 13);
					}
					else
					{
						*uParam0 = 0;
						func_110();
						return 1;
					}
				}
				else
				{
					*uParam0 = 0;
					func_110();
					func_96();
					return 1;
				}
			}
			else if ((uParam0->f_21 != -1 && uParam0->f_22 != -1) && iParam2 == 0)
			{
				uParam0->f_5 = unk_0x7FD2990AF016795E(func_91(iParam2), sParam1, 0, uParam0->f_21, uParam0->f_22);
				unk_0x1DE9094E7DE16141(uParam0->f_5);
				func_94(uParam0, 4);
			}
			else if (bParam10)
			{
				if (unk_0x1B0586A75D11FEF2(sParam1, 1, func_91(iParam2)))
				{
					func_94(uParam0, 3);
				}
			}
			else if (unk_0x637ADD817E072423(sParam1, func_91(iParam2)))
			{
				func_94(uParam0, 3);
			}
			break;
		
		case 3:
			if (unk_0x4CD1033957B05B6F())
			{
				uParam0->f_40 = unk_0x42D015647CC79FFA();
				if (unk_0x4FE746CF3A3D9B0A())
				{
				}
				else
				{
					func_250(uParam0, 1, 1);
					uParam0->f_40 = unk_0x42D015647CC79FFA();
					*uParam0 = 0;
					func_110();
					return 1;
				}
				if (unk_0x778CA81AB2E699D8() > 0)
				{
					if (!bParam12 && !func_161(uParam0->f_24, uParam0->f_25, unk_0x1A0A17CCD5A27AD3(0), unk_0x15EF815E7AE5DDAC(0)))
					{
						func_250(uParam0, 1, 1);
						*uParam0 = 0;
						uParam0->f_27 = 1;
						func_110();
						return 1;
					}
					if (iParam2 == 0)
					{
						uParam0->f_5 = unk_0x171DF6A0C07FB3DC(0, 0);
						unk_0x1DE9094E7DE16141(uParam0->f_5);
						func_94(uParam0, 4);
					}
					else if (iParam2 == 1)
					{
						if (unk_0xE01031A34532288D(0))
						{
							if (uParam0->f_16)
							{
								StringCopy(&(Global_972560.f_12), unk_0x499C0C5729C7F943(0), 64);
								StringCopy(&(Global_972560.f_36), unk_0xD04F95C148BB3FAA(0), 24);
								Global_972560.f_71 = unk_0x15EF815E7AE5DDAC(0);
								StringCopy(&(Global_972560.f_42), sParam1, 24);
								Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_19 = { Global_972560.f_12 };
								func_164(&iVar1, &uVar0, &Global_972560);
								uParam0->f_8 = 0;
							}
							else
							{
								StringCopy(&(Global_970998.f_12), unk_0x499C0C5729C7F943(0), 64);
								StringCopy(&(Global_970998.f_36), unk_0xD04F95C148BB3FAA(0), 24);
								Global_970998.f_71 = unk_0x15EF815E7AE5DDAC(0);
								StringCopy(&(Global_970998.f_42), sParam1, 24);
								Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_19 = { Global_970998.f_12 };
								func_164(&iVar1, &uVar0, &Global_970998);
								uParam0->f_8 = 0;
							}
							func_96();
							func_94(uParam0, 10);
						}
						else
						{
							func_250(uParam0, 1, 1);
							*uParam0 = 0;
							func_110();
							return 1;
						}
					}
					else if (iParam2 == 4)
					{
						if (unk_0xE01031A34532288D(0))
						{
							if (uParam0->f_16)
							{
								func_159(&iVar1, &uVar0, &Global_972560, iParam6);
								if (iParam6 == 1)
								{
									func_250(uParam0, 1, 1);
									*uParam0 = 1;
									func_110();
									return 1;
								}
								StringCopy(&(Global_972560.f_12), unk_0x499C0C5729C7F943(0), 64);
								StringCopy(&(Global_972560.f_36), unk_0xD04F95C148BB3FAA(0), 24);
								StringCopy(&(Global_972560.f_42), sParam1, 24);
								Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_19 = { Global_972560.f_12 };
								uParam0->f_8 = 0;
							}
							else
							{
								func_159(&iVar1, &uVar0, &Global_970998, iParam6);
								if (iParam6 == 1)
								{
									func_250(uParam0, 1, 1);
									*uParam0 = 1;
									func_110();
									return 1;
								}
								StringCopy(&(Global_970998.f_12), unk_0x499C0C5729C7F943(0), 64);
								StringCopy(&(Global_970998.f_36), unk_0xD04F95C148BB3FAA(0), 24);
								StringCopy(&(Global_970998.f_42), sParam1, 24);
								Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_19 = { Global_970998.f_12 };
								uParam0->f_8 = 0;
							}
							func_96();
							func_94(uParam0, 10);
						}
						else
						{
							func_250(uParam0, 1, 1);
							*uParam0 = 0;
							func_110();
							return 1;
						}
					}
				}
				else
				{
					func_250(uParam0, 1, 1);
					*uParam0 = 0;
					func_110();
					return 1;
				}
			}
			break;
		
		case 4:
			if (unk_0x281AE6D01791EE42(uParam0->f_5))
			{
				if (uParam0->f_2)
				{
					uParam0->f_2 = 0;
					unk_0xF07571B6B1209821();
				}
				if (unk_0xE1728DB2AE4C711E(uParam0->f_5))
				{
					func_94(uParam0, 6);
				}
				else if (uParam0->f_22 != 1)
				{
					uParam0->f_22 = 1;
					uParam0->f_3 = 1;
					func_94(uParam0, 0);
					return 0;
				}
				else
				{
					func_250(uParam0, 1, 1);
					*uParam0 = 0;
					func_110();
					return 1;
				}
			}
			else if (func_158() || func_157() == 4)
			{
				if (uParam0->f_2 == 0)
				{
					uParam0->f_2 = 1;
					unk_0x4A1154920DC947F7("FMMC_DOWNLOAD");
					unk_0x6B60B2318195A182(5);
				}
			}
			break;
		
		case 6:
			if ((bParam13 && !func_156()) && !bParam14)
			{
				return 0;
			}
			if (unk_0x658FCEDF2FC2CA72(uParam0->f_5))
			{
				if (unk_0xE5E7622DD9AFE83B(uParam0->f_5))
				{
					if (bParam3)
					{
						if (bParam13)
						{
							func_229(1, 1, bParam11);
						}
						if ((uParam0->f_21 != -1 && uParam0->f_22 != -1) && iParam2 == 0)
						{
							Global_1638223.f_94186 = 1;
							Global_1638223.f_94171 = 1;
							StringCopy(&(Global_1638223.f_93508), "", 64);
							StringCopy(&(Global_1638223.f_93555), "", 24);
							StringCopy(&(Global_1638223.f_93533), "RockStar", 24);
							if (bParam10)
							{
								StringCopy(&(Global_1638223.f_93819), sParam1, 24);
							}
							uParam0->f_34 = uParam0->f_22;
						}
						else
						{
							Global_1638223.f_93532 = unk_0xCAEDBF30E3EA14FC(unk_0x6F6878A962A56F20(0));
							StringCopy(&(Global_1638223.f_93555), unk_0x1A0A17CCD5A27AD3(0), 24);
							Global_1638223.f_94186 = unk_0x15EF815E7AE5DDAC(0);
							if (Global_1638223.f_94186 == 1 || Global_1638223.f_94186 == 2)
							{
								StringCopy(&(Global_1638223.f_93533), "RockStar", 24);
							}
							else
							{
								StringCopy(&(Global_1638223.f_93533), unk_0x1A0A17CCD5A27AD3(0), 24);
							}
							if ((Global_1638223.f_94186 == 0 || Global_1638223.f_94186 == 3) && unk_0x9E09714E189DEFBA(0))
							{
								StringCopy(&(Global_1638223.f_93508), unk_0x4325D353D7D27B34(unk_0x0FFED3E94261A832()), 64);
							}
							else if ((unk_0x97FFE0491AC179A2() && (Global_1638223.f_94186 == 0 || Global_1638223.f_94186 == 3)) && func_155(&iVar33, &(Global_1638223.f_93555)))
							{
								StringCopy(&(Global_1638223.f_93508), unk_0x4325D353D7D27B34(iVar33), 64);
							}
							else
							{
								StringCopy(&(Global_1638223.f_93508), unk_0xA2E2C19EAAC6000A(0), 64);
							}
							Global_1638223.f_93839 = unk_0x9C90954401250AA1(0, 0);
							Global_1638223.f_94173 = unk_0xEFD0423CF6FB86FE(0);
							uParam0->f_23 = func_81(0);
							Global_1638223.f_107860 = uParam0->f_23;
							if (bParam10)
							{
								StringCopy(&(Global_1638223.f_93819), unk_0xD04F95C148BB3FAA(0), 24);
							}
							if (Global_1638223.f_94186 == 0 || Global_1638223.f_94186 == 3)
							{
								if ((unk_0x09DBF737A2411EEA(0, &uVar4) && unk_0x6A68E91B1AC64FBD(&uVar4, 13)) && unk_0xC869A9FE1FE47589(&uVar4))
								{
									Var17 = { Global_1638223.f_93508 };
									func_154(1, Var17);
								}
								else
								{
									func_154(0, Var17);
								}
							}
							else
							{
								func_154(0, Var17);
							}
							Global_1638223.f_8 = func_77(unk_0x8DBC83A590E25E2F(0, 0), unk_0x9C90954401250AA1(0, 0));
							if (unk_0x2067E93A86B3AA21(uParam0->f_7))
							{
								Global_1638223.f_94172 = unk_0xD185AF2F1C5A823B(0);
								Global_1638223.f_94174 = 1;
							}
							else
							{
								Global_1638223.f_94172 = 0;
								Global_1638223.f_94174 = 0;
							}
							Global_1638223.f_94171 = unk_0xAFFA5B1CEA7C9A3A(0);
							uParam0->f_34 = unk_0x452F045938CD1887(0);
							if (!func_103())
							{
								if (unk_0xD176F39E49081808(uParam0->f_34))
								{
									uParam0->f_30 = unk_0x0FB2A837FE9E58D2(0);
								}
								else
								{
									uParam0->f_30 = -1;
								}
							}
							Global_1638223.f_93838 = uParam0->f_30;
							Global_2445989.f_4206.f_3 = unk_0xF5A56315036ABED7(0, 0);
							Global_2445989.f_4206.f_2 = unk_0x45DF17CF7D6D16DE(0, 0);
							if (Global_1638223.f_94186 == 1 || Global_1638223.f_94186 == 2)
							{
								StringCopy(&(Global_1638223.f_93508), func_78(), 64);
							}
						}
						if (!bParam10)
						{
							StringCopy(&(Global_1638223.f_93819), sParam1, 24);
						}
						uParam0->f_31 = 0;
						if (!func_103())
						{
							func_165(uParam0->f_34, bParam11, (bParam13 || bParam14), uParam0->f_31);
							if (Global_1638223.f_94186 == 0 && (func_152() || func_150()))
							{
								func_250(uParam0, 1, 1);
								uParam0->f_41.f_3 = 0;
								*uParam0 = 0;
								uParam0->f_1 = 1;
								func_110();
								return 1;
							}
							else if (bParam13 || bParam14)
							{
								func_94(uParam0, 5);
								return 0;
							}
						}
						else
						{
							func_165(-1, bParam11, 0, 0);
						}
						if (func_147(uParam0, iParam2, bParam13, bParam9))
						{
							return 1;
						}
					}
					else
					{
						iVar1 = unk_0xBEA29F6CAC4ECD19();
						iVar2 = unk_0xD41282265B0A744C(iVar1, "mission");
						iVar3 = unk_0xD41282265B0A744C(iVar2, "gen");
						StringCopy(&(Global_2434604.f_3500), unk_0x499C0C5729C7F943(0), 32);
						Global_2434604.f_3500.f_8 = unk_0xE33C601C19270822(iVar3, "type");
						uParam0->f_17 = unk_0x2067E93A86B3AA21(0);
						*uParam0 = 1;
						func_110();
						unk_0x90E8C9C692D5C5BC(uParam0->f_5);
						func_96();
						return 1;
					}
					unk_0x90E8C9C692D5C5BC(uParam0->f_5);
					func_96();
				}
				else if (iParam2 == 0)
				{
					func_250(uParam0, 1, 1);
					uParam0->f_41.f_3 = 0;
					*uParam0 = 0;
					uParam0->f_1 = 1;
					func_110();
					return 1;
				}
				else
				{
					uParam0->f_8++;
					if (uParam0->f_8 > 1000)
					{
						func_250(uParam0, 1, 1);
						uParam0->f_41.f_3 = 0;
						*uParam0 = 0;
						func_110();
						return 1;
					}
				}
			}
			break;
		
		case 5:
			func_165(uParam0->f_34, bParam11, (bParam13 || bParam14), uParam0->f_31);
			if (uParam0->f_31 >= 6)
			{
				if (func_147(uParam0, iParam2, (bParam13 || bParam14), bParam9))
				{
					return 1;
				}
			}
			uParam0->f_31++;
			break;
		
		case 9:
			if (func_145(uParam0, 0, bParam3, 0))
			{
				func_94(uParam0, 0);
				func_96();
				if ((((func_139(Global_1638223.f_93532) && func_124()) && !bParam9) && !unk_0x58478145CAF8429C(&(Global_1638223.f_93825[0 /*6*/]))) && (func_158() || (func_134() && !func_133())))
				{
					uParam0->f_8 = 0;
					func_94(uParam0, 19);
					return 0;
				}
				if ((uParam5 || bParam7) && !bParam13)
				{
					if (bParam7 || uParam5)
					{
						uParam0->f_23 = func_81(0);
						uParam0->f_21 = unk_0xD7760E714FB82E25(0, uParam0->f_23);
					}
					func_132(&(uParam0->f_41), 0);
					func_94(uParam0, 18);
				}
				else
				{
					uParam0->f_41.f_3 = 1;
					func_250(uParam0, 1, 0);
					func_110();
					return 1;
				}
			}
			break;
		
		case 19:
			if (unk_0x1B0586A75D11FEF2(&(Global_1638223.f_93825[0 /*6*/]), 1, func_91(iParam2)))
			{
				func_94(uParam0, 21);
			}
			break;
		
		case 21:
			if (unk_0x4CD1033957B05B6F())
			{
				uParam0->f_40 = unk_0x42D015647CC79FFA();
				if (unk_0x4FE746CF3A3D9B0A())
				{
				}
				else
				{
					func_250(uParam0, 1, 1);
					uParam0->f_40 = unk_0x42D015647CC79FFA();
					*uParam0 = 0;
					func_110();
					return 1;
				}
				if (unk_0x778CA81AB2E699D8() > 0)
				{
					uParam0->f_5 = unk_0x171DF6A0C07FB3DC(0, 0);
					unk_0x1DE9094E7DE16141(uParam0->f_5);
					func_94(uParam0, 22);
				}
				else
				{
					func_250(uParam0, 1, 1);
					*uParam0 = 0;
					func_110();
					return 1;
				}
			}
			break;
		
		case 22:
			if (unk_0x281AE6D01791EE42(uParam0->f_5))
			{
				if (unk_0xE1728DB2AE4C711E(uParam0->f_5))
				{
					func_94(uParam0, 23);
				}
				else if (uParam0->f_22 != 1)
				{
					uParam0->f_22 = 1;
					uParam0->f_3 = 1;
					func_94(uParam0, 0);
					return 0;
				}
				else
				{
					func_250(uParam0, 1, 1);
					*uParam0 = 0;
					func_110();
					return 1;
				}
			}
			break;
		
		case 23:
			if (unk_0x658FCEDF2FC2CA72(uParam0->f_5))
			{
				if (unk_0xE5E7622DD9AFE83B(uParam0->f_5))
				{
					func_129();
					func_250(uParam0, 1, 0);
					Global_1636978 = 1;
					func_110();
					*uParam0 = 1;
					return 1;
				}
				else
				{
					func_250(uParam0, 1, 1);
					uParam0->f_41.f_3 = 0;
					*uParam0 = 0;
					uParam0->f_1 = 1;
					func_110();
					return 1;
				}
			}
			break;
		
		case 18:
			if (unk_0xAA4F14DA15DB0B51(Global_1638223.f_7, 0))
			{
				if (bParam7)
				{
					if (func_128(&(uParam0->f_41), sParam1, uParam0->f_21, uParam0->f_23))
					{
						func_250(uParam0, 1, 0);
						uParam0->f_41.f_3 = 1;
						uParam0->f_41.f_1 = 0;
						func_110();
						return 1;
					}
				}
				else
				{
					StringCopy(&(uParam0->f_41.f_4), sParam1, 64);
					uParam0->f_41.f_3 = 1;
					func_250(uParam0, 1, 0);
					func_110();
					return 1;
				}
			}
			else
			{
				uParam0->f_41.f_3 = 1;
				func_250(uParam0, 1, 1);
				func_110();
				return 1;
			}
			break;
		
		case 10:
			if (func_145(uParam0, 0, bParam3, iParam2))
			{
				func_96();
				func_94(uParam0, 11);
			}
			break;
		
		case 11:
			if (uParam0->f_16)
			{
				if (unk_0x02A20BBCB4D2CFD8(&(Global_972560.f_1177), Global_972560.f_65, func_91(0)))
				{
					func_94(uParam0, 12);
				}
			}
			else if (unk_0x02A20BBCB4D2CFD8(&(Global_970998.f_1177), Global_970998.f_65, func_91(0)))
			{
				func_94(uParam0, 12);
			}
			break;
		
		case 12:
			if (unk_0x4CD1033957B05B6F())
			{
				if (unk_0x4FE746CF3A3D9B0A())
				{
				}
				else
				{
					func_250(uParam0, 1, 1);
					uParam0->f_40 = unk_0x42D015647CC79FFA();
					*uParam0 = 0;
					func_110();
					return 1;
				}
				if (unk_0x778CA81AB2E699D8() > 0)
				{
					if (uParam0->f_16)
					{
						Global_972560.f_65 = unk_0x778CA81AB2E699D8();
					}
					else
					{
						Global_970998.f_65 = unk_0x778CA81AB2E699D8();
					}
					uParam0->f_8 = 0;
					func_250(uParam0, 0, bParam8);
					func_163(uParam0);
					func_94(uParam0, 13);
				}
				else
				{
					func_250(uParam0, 1, 1);
					*uParam0 = 0;
					func_110();
					return 1;
				}
			}
			break;
		
		case 13:
			if (func_103())
			{
				if (uParam0->f_16)
				{
					uParam0->f_9 = 0;
					while (uParam0->f_9 <= (Global_972560.f_65 - 1))
					{
						if (unk_0x56C2E0D8C1E0582B(&(Global_972560.f_1177[uParam0->f_9 /*6*/])))
						{
							func_127(uParam0, &Global_972560);
							unk_0x2E19AEB09B74585B();
						}
						uParam0->f_9++;
					}
					func_110();
					return 1;
				}
				else
				{
					uParam0->f_9 = 0;
					while (uParam0->f_9 <= (Global_970998.f_65 - 1))
					{
						if (unk_0x56C2E0D8C1E0582B(&(Global_970998.f_1177[uParam0->f_9 /*6*/])))
						{
							func_127(uParam0, &Global_970998);
							unk_0x2E19AEB09B74585B();
						}
						uParam0->f_9++;
					}
					func_110();
					return 1;
				}
			}
			else if (uParam0->f_16)
			{
				if (func_126(uParam0, &Global_972560))
				{
					if (uParam0->f_27)
					{
						func_250(uParam0, 1, bParam8);
						*uParam0 = 0;
						uParam0->f_27 = 1;
						func_110();
						return 1;
					}
					else
					{
						func_94(uParam0, 17);
						*uParam0 = 1;
					}
				}
			}
			else if (func_126(uParam0, &Global_970998))
			{
				if (uParam0->f_27)
				{
					func_250(uParam0, 1, 1);
					*uParam0 = 0;
					uParam0->f_27 = 1;
					func_110();
					return 1;
				}
				else
				{
					func_94(uParam0, 17);
					*uParam0 = 1;
				}
			}
			break;
		
		case 17:
			func_94(uParam0, 0);
			func_96();
			func_250(uParam0, 1, bParam8);
			*uParam0 = 1;
			func_110();
			return 1;
			break;
	}
	return 0;
}

int func_126(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (uParam1->f_65 - 1))
	{
		if (unk_0xE01031A34532288D(uParam0->f_7))
		{
			if (!func_161(uParam0->f_24, uParam0->f_25, unk_0x1A0A17CCD5A27AD3(0), unk_0x15EF815E7AE5DDAC(0)))
			{
				uParam0->f_27 = 1;
				return 1;
			}
			func_127(uParam0, uParam1);
			uParam0->f_9++;
		}
		else
		{
			uParam0->f_8++;
		}
		if (uParam0->f_8 > 200)
		{
			func_96();
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

void func_127(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0xBEA29F6CAC4ECD19();
	iVar1 = unk_0xD41282265B0A744C(iVar0, "mission");
	iVar2 = unk_0xD41282265B0A744C(iVar1, "gen");
	uParam1->f_72[uParam0->f_9 /*69*/].f_45 = { func_80(iVar2, "start") };
	if (func_103())
	{
		StringCopy(&(uParam1->f_72[uParam0->f_9 /*69*/].f_12), unk_0xD5EE6B924304F24C(iVar2, "nm"), 64);
	}
	else
	{
		StringCopy(&(uParam1->f_72[uParam0->f_9 /*69*/].f_12), unk_0x499C0C5729C7F943(uParam0->f_7), 64);
	}
	if (!func_103())
	{
		uParam1->f_72[uParam0->f_9 /*69*/].f_44 = unk_0x0FB2A837FE9E58D2(uParam0->f_7);
	}
	uParam1->f_72[uParam0->f_9 /*69*/].f_68 = unk_0x15EF815E7AE5DDAC(uParam0->f_7);
	uParam1->f_72[uParam0->f_9 /*69*/].f_56 = unk_0xE33C601C19270822(iVar2, "min");
	uParam1->f_72[uParam0->f_9 /*69*/].f_59 = unk_0xE33C601C19270822(iVar2, "tnum");
	uParam1->f_72[uParam0->f_9 /*69*/].f_60 = unk_0xE33C601C19270822(iVar2, "num");
	uParam1->f_72[uParam0->f_9 /*69*/].f_54 = unk_0xE33C601C19270822(iVar2, "type");
	uParam1->f_72[uParam0->f_9 /*69*/].f_55 = unk_0xE33C601C19270822(iVar2, "subtype");
	uParam1->f_72[uParam0->f_9 /*69*/].f_48 = { func_80(iVar2, "cam") };
	uParam1->f_72[uParam0->f_9 /*69*/].f_51 = { func_79(iVar2) };
	uParam1->f_72[uParam0->f_9 /*69*/].f_66 = unk_0xE33C601C19270822(iVar2, "adverm");
	uParam1->f_72[uParam0->f_9 /*69*/].f_57 = func_81(uParam0->f_7);
	StringCopy(&(uParam1->f_72[uParam0->f_9 /*69*/].f_6), unk_0xA2E2C19EAAC6000A(uParam0->f_7), 24);
	if (!func_103())
	{
		uParam1->f_72[uParam0->f_9 /*69*/].f_61 = func_77(unk_0x8DBC83A590E25E2F(uParam0->f_7, 0), unk_0x9C90954401250AA1(uParam0->f_7, 0));
	}
	if (func_107() != 2)
	{
		if (uParam1->f_72[uParam0->f_9 /*69*/].f_60 > Global_262145.f_4746)
		{
			uParam1->f_72[uParam0->f_9 /*69*/].f_60 = Global_262145.f_4746;
		}
		if (uParam1->f_72[uParam0->f_9 /*69*/].f_56 > Global_262145.f_4746)
		{
			uParam1->f_72[uParam0->f_9 /*69*/].f_56 = Global_262145.f_4746;
		}
	}
	uParam1->f_72[uParam0->f_9 /*69*/].f_58 = unk_0xE33C601C19270822(iVar2, "rank");
	func_76(uParam1->f_72[uParam0->f_9 /*69*/].f_54, &(uParam1->f_72[uParam0->f_9 /*69*/].f_60), &(uParam1->f_72[uParam0->f_9 /*69*/].f_56));
	if (uParam1->f_6 < uParam1->f_72[uParam0->f_9 /*69*/].f_56)
	{
		uParam1->f_6 = uParam1->f_72[uParam0->f_9 /*69*/].f_56;
	}
	if (uParam1->f_7 > uParam1->f_72[uParam0->f_9 /*69*/].f_60 || uParam1->f_7 == 0)
	{
		uParam1->f_7 = uParam1->f_72[uParam0->f_9 /*69*/].f_60;
	}
	uParam1->f_72[uParam0->f_9 /*69*/].f_67 = 1;
	unk_0xF6082E2ADA1C795B(&(uParam1->f_72[uParam0->f_9 /*69*/].f_64), 13);
	StringCopy(&(uParam1->f_72[uParam0->f_9 /*69*/]), unk_0xD04F95C148BB3FAA(uParam0->f_9), 24);
	uParam0->f_8 = 0;
	uParam0->f_7++;
	if (unk_0xBEA29F6CAC4ECD19() != 0)
	{
		unk_0x97003200DCC6C27A();
	}
	if (!func_103())
	{
		StringCopy(&(uParam1->f_1177[uParam0->f_9 /*6*/]), unk_0xD04F95C148BB3FAA(uParam0->f_9), 24);
		if (unk_0x2067E93A86B3AA21(uParam0->f_9))
		{
			unk_0xF6082E2ADA1C795B(&(uParam1->f_72[uParam0->f_9 /*69*/].f_64), 14);
			if (unk_0xBEA29F6CAC4ECD19() != 0)
			{
				unk_0x97003200DCC6C27A();
			}
		}
	}
}

int func_128(var uParam0, char* sParam1, var uParam2, var uParam3)
{
	switch (uParam0->f_1)
	{
		case 0:
			if (*uParam0 != 0)
			{
				unk_0xA91D9280599D92E4(*uParam0);
			}
			unk_0x93782F20E7660DF8();
			uParam0->f_1 = 1;
			break;
		
		case 1:
			if (unk_0x18F68918D65A5A09(sParam1, uParam3, uParam2, 0))
			{
				uParam0->f_1 = 2;
			}
			break;
		
		case 2:
			switch (unk_0x1BBAFAF296B2AC59(unk_0x30C9AB30EA8D8688(0, uParam3)))
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
							unk_0xA91D9280599D92E4(*uParam0);
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

void func_129()
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
	
	iVar0 = unk_0xBEA29F6CAC4ECD19();
	iVar1 = unk_0xD41282265B0A744C(iVar0, "mission");
	iVar2 = unk_0xD41282265B0A744C(iVar1, "endcon");
	iVar3 = unk_0xD41282265B0A744C(iVar1, "ene");
	iVar4 = unk_0xE33C601C19270822(iVar3, "no");
	iVar5 = unk_0x560A2E3DA92FA8F8(iVar3, "loc");
	iVar6 = unk_0xD41282265B0A744C(iVar1, "goto");
	iVar7 = unk_0xE33C601C19270822(iVar6, "no");
	iVar8 = unk_0xD41282265B0A744C(iVar1, "veh");
	iVar9 = unk_0xE33C601C19270822(iVar8, "no");
	iVar10 = unk_0x560A2E3DA92FA8F8(iVar8, "loc");
	iVar11 = unk_0xD41282265B0A744C(iVar1, "obj");
	iVar12 = unk_0xE33C601C19270822(iVar11, "no");
	iVar13 = unk_0x560A2E3DA92FA8F8(iVar11, "loc");
	iVar14 = 0;
	while (iVar14 <= (Global_1638223.f_32 - 1))
	{
		if (iVar14 < 4)
		{
			Global_1636978.f_1[iVar14] = unk_0x27CDB7B0660BDAB1(unk_0x560A2E3DA92FA8F8(iVar2, "nrl"), iVar14);
			StringCopy(&cVar16, "txt", 16);
			StringIntConCat(&cVar16, iVar14, 16);
			uVar20[iVar14] = unk_0x560A2E3DA92FA8F8(iVar2, &cVar16);
			StringCopy(&cVar16, "irbs", 16);
			StringIntConCat(&cVar16, iVar14, 16);
			uVar25[iVar14] = unk_0x560A2E3DA92FA8F8(iVar2, &cVar16);
			StringCopy(&cVar16, "irbs2", 16);
			StringIntConCat(&cVar16, iVar14, 16);
			uVar30[iVar14] = unk_0x560A2E3DA92FA8F8(iVar2, &cVar16);
			iVar15 = 0;
			while (iVar15 <= (Global_1636978.f_1[iVar14] - 1))
			{
				Global_1636978.f_6[iVar14 /*18*/][iVar15] = unk_0x27CDB7B0660BDAB1(uVar25[iVar14], iVar15);
				Global_1636978.f_79[iVar14 /*18*/][iVar15] = unk_0x27CDB7B0660BDAB1(uVar30[iVar14], iVar15);
				if (uVar20[iVar14] != 0)
				{
					StringCopy(&(Global_1636978.f_152[iVar14 /*273*/][iVar15 /*16*/]), unk_0x71104AC03D1921C0(uVar20[iVar14], iVar15), 64);
				}
				else
				{
					StringCopy(&(Global_1636978.f_152[iVar14 /*273*/][iVar15 /*16*/]), "", 64);
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
	while (iVar80 <= (Global_1638223.f_32 - 1))
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
		while (iVar14 < Global_1636978.f_1[iVar80])
		{
			if ((!unk_0xAA4F14DA15DB0B51(Global_1636978.f_6[iVar80 /*18*/][iVar14], 11) && !unk_0xAA4F14DA15DB0B51(Global_1636978.f_79[iVar80 /*18*/][iVar14], 21)) && iVar81 < 8)
			{
				iVar92[iVar81] = iVar14;
				iVar81++;
			}
			iVar14++;
		}
		StringCopy(&cVar16, "rule", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar60[iVar80] = unk_0x560A2E3DA92FA8F8(iVar8, &cVar16);
		StringCopy(&cVar16, "pri", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar65[iVar80] = unk_0x560A2E3DA92FA8F8(iVar8, &cVar16);
		iVar14 = 0;
		while (iVar14 < iVar9)
		{
			iVar15 = unk_0x27CDB7B0660BDAB1(uVar60[iVar80], iVar14);
			iVar193 = unk_0x27CDB7B0660BDAB1(uVar65[iVar80], iVar14);
			if (((((iVar193 != -1 && iVar193 < 17) && iVar15 != 0) && iVar15 != 99999) && !unk_0xAA4F14DA15DB0B51(Global_1636978.f_6[iVar80 /*18*/][iVar193], 11)) && !unk_0xAA4F14DA15DB0B51(Global_1636978.f_79[iVar80 /*18*/][iVar193], 21))
			{
				iVar91 = func_131(&iVar92, iVar193, iVar81);
				if (iVar91 != -1 && iVar82[iVar91] < 10)
				{
					Global_1763533.f_407[iVar91 /*295*/].f_125[iVar80 /*31*/][iVar82[iVar91] /*3*/] = { unk_0xD458CBD2DA2C775D(iVar10, iVar14) };
					Global_1763533.f_407[iVar91 /*295*/].f_250[iVar80 /*11*/][iVar82[iVar91]] = 1;
					Global_1763533.f_407[iVar91 /*295*/][iVar80 /*31*/][iVar82[iVar91] /*3*/] = { func_130(iVar15, 1) };
					iVar82[iVar91]++;
				}
			}
			iVar14++;
		}
		StringCopy(&cVar16, "rule", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar70[iVar80] = unk_0x560A2E3DA92FA8F8(iVar11, &cVar16);
		StringCopy(&cVar16, "pri", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar75[iVar80] = unk_0x560A2E3DA92FA8F8(iVar11, &cVar16);
		iVar14 = 0;
		while (iVar14 < iVar12)
		{
			iVar15 = unk_0x27CDB7B0660BDAB1(uVar70[iVar80], iVar14);
			iVar193 = unk_0x27CDB7B0660BDAB1(uVar75[iVar80], iVar14);
			if (((((iVar193 != -1 && iVar193 < 17) && iVar15 != 0) && iVar15 != 99999) && !unk_0xAA4F14DA15DB0B51(Global_1636978.f_6[iVar80 /*18*/][iVar193], 11)) && !unk_0xAA4F14DA15DB0B51(Global_1636978.f_79[iVar80 /*18*/][iVar193], 21))
			{
				iVar91 = func_131(&iVar92, iVar193, iVar81);
				if (iVar91 != -1 && iVar82[iVar91] < 10)
				{
					Global_1763533.f_407[iVar91 /*295*/].f_125[iVar80 /*31*/][iVar82[iVar91] /*3*/] = { unk_0xD458CBD2DA2C775D(iVar13, iVar14) };
					Global_1763533.f_407[iVar91 /*295*/].f_250[iVar80 /*11*/][iVar82[iVar91]] = 1;
					Global_1763533.f_407[iVar91 /*295*/][iVar80 /*31*/][iVar82[iVar91] /*3*/] = { func_130(iVar15, 3) };
					iVar82[iVar91]++;
				}
			}
			iVar14++;
		}
		StringCopy(&cVar16, "rl", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar45[iVar80] = unk_0x560A2E3DA92FA8F8(iVar6, &cVar16);
		StringCopy(&cVar16, "pri", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar50[iVar80] = unk_0x560A2E3DA92FA8F8(iVar6, &cVar16);
		StringCopy(&cVar16, "loc", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar55[iVar80] = unk_0x560A2E3DA92FA8F8(iVar6, &cVar16);
		iVar14 = 0;
		while (iVar14 < iVar7)
		{
			iVar193 = unk_0x27CDB7B0660BDAB1(uVar50[iVar80], iVar14);
			iVar15 = unk_0x27CDB7B0660BDAB1(uVar45[iVar80], iVar14);
			if (((((iVar193 != -1 && iVar193 < 17) && iVar15 != 0) && iVar15 != 99999) && !unk_0xAA4F14DA15DB0B51(Global_1636978.f_6[iVar80 /*18*/][iVar193], 11)) && !unk_0xAA4F14DA15DB0B51(Global_1636978.f_79[iVar80 /*18*/][iVar193], 21))
			{
				iVar91 = func_131(&iVar92, iVar193, iVar81);
				if (iVar91 != -1 && iVar82[iVar91] < 10)
				{
					Global_1763533.f_407[iVar91 /*295*/].f_125[iVar80 /*31*/][iVar82[iVar91] /*3*/] = { unk_0xD458CBD2DA2C775D(uVar55[iVar80], iVar14) };
					Global_1763533.f_407[iVar91 /*295*/].f_250[iVar80 /*11*/][iVar82[iVar91]] = 1;
					Global_1763533.f_407[iVar91 /*295*/][iVar80 /*31*/][iVar82[iVar91] /*3*/] = { func_130(iVar15, 4) };
					iVar82[iVar91]++;
				}
			}
			iVar14++;
		}
		StringCopy(&cVar16, "rule", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar35[iVar80] = unk_0x560A2E3DA92FA8F8(iVar3, &cVar16);
		StringCopy(&cVar16, "pri", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar40[iVar80] = unk_0x560A2E3DA92FA8F8(iVar3, &cVar16);
		iVar14 = 0;
		while (iVar14 < iVar4)
		{
			iVar193 = unk_0x27CDB7B0660BDAB1(uVar40[iVar80], iVar14);
			iVar15 = unk_0x27CDB7B0660BDAB1(uVar35[iVar80], iVar14);
			if (((((iVar193 != -1 && iVar193 < 17) && iVar15 != 0) && iVar15 != 99999) && !unk_0xAA4F14DA15DB0B51(Global_1636978.f_6[iVar80 /*18*/][iVar193], 11)) && !unk_0xAA4F14DA15DB0B51(Global_1636978.f_79[iVar80 /*18*/][iVar193], 21))
			{
				iVar91 = func_131(&iVar92, iVar193, iVar81);
				if (iVar91 != -1 && iVar82[iVar91] < 10)
				{
					iVar190 = iVar82[iVar91];
					iVar192 = 0;
					iVar191 = 0;
					while (iVar191 < 10)
					{
						if (iVar192 == 0 && Global_1763533.f_407[iVar91 /*295*/].f_250[iVar80 /*11*/][iVar191] == 2)
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
					Var194 = { unk_0xD458CBD2DA2C775D(iVar5, iVar14) };
					Global_1763533.f_407[iVar91 /*295*/].f_125[iVar80 /*31*/][iVar190 /*3*/] = Var194.f_0;
					Global_1763533.f_407[iVar91 /*295*/].f_125[iVar80 /*31*/][iVar190 /*3*/].f_1 = Var194.f_1;
					Var101[iVar91 /*11*/][iVar190]++;
					Global_1763533.f_407[iVar91 /*295*/].f_250[iVar80 /*11*/][iVar190] = 2;
					Global_1763533.f_407[iVar91 /*295*/][iVar80 /*31*/][iVar190 /*3*/] = { func_130(iVar15, 2) };
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
				if (Global_1763533.f_407[iVar14 /*295*/].f_250[iVar80 /*11*/][iVar191] == 2)
				{
					Global_1763533.f_407[iVar14 /*295*/].f_125[iVar80 /*31*/][iVar191 /*3*/] = (Global_1763533.f_407[iVar14 /*295*/].f_125[iVar80 /*31*/][iVar191 /*3*/] / IntToFloat(Var101[iVar14 /*11*/][iVar191]));
					Global_1763533.f_407[iVar14 /*295*/].f_125[iVar80 /*31*/][iVar191 /*3*/].f_1 = (Global_1763533.f_407[iVar14 /*295*/].f_125[iVar80 /*31*/][iVar191 /*3*/].f_1 / IntToFloat(Var101[iVar14 /*11*/][iVar191]));
				}
				iVar191++;
			}
			iVar14++;
		}
		iVar80++;
	}
	if (unk_0xBEA29F6CAC4ECD19() != 0)
	{
		unk_0x97003200DCC6C27A();
	}
}

Vector3 func_130(int iParam0, int iParam1)
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

int func_131(int iParam0, int iParam1, int iParam2)
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

void func_132(var uParam0, bool bParam1)
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
		unk_0xA91D9280599D92E4(*uParam0);
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

bool func_133()
{
	return Global_2445217.f_599;
}

int func_134()
{
	if (((func_138() || func_137()) || func_136()) || func_135())
	{
		return 1;
	}
	return 0;
}

bool func_135()
{
	return unk_0xAA4F14DA15DB0B51(Global_2445217, 1);
}

bool func_136()
{
	return unk_0xAA4F14DA15DB0B51(Global_2445217, 2);
}

bool func_137()
{
	return unk_0xAA4F14DA15DB0B51(Global_2445217, 20);
}

var func_138()
{
	return Global_2445217.f_578;
}

int func_139(int iParam0)
{
	if ((((func_144(iParam0) || func_143(iParam0)) || func_142(iParam0)) || func_141(iParam0)) || func_140(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_140(int iParam0)
{
	return iParam0 == Global_262145.f_7457;
}

bool func_141(int iParam0)
{
	return iParam0 == Global_262145.f_7451;
}

bool func_142(int iParam0)
{
	return iParam0 == Global_262145.f_7445;
}

bool func_143(int iParam0)
{
	return iParam0 == Global_262145.f_7438;
}

bool func_144(int iParam0)
{
	return iParam0 == Global_262145.f_7433;
}

int func_145(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	if (func_100())
	{
		uParam0->f_19 = 0;
		return 1;
	}
	if (func_103())
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
			func_96();
			func_146();
			Global_1752378.f_5 = 0;
			uParam0->f_8 = 0;
			if (iParam3 == 1)
			{
				Global_1752403.f_5 = 0;
				Global_1752403.f_4 = 0;
				Global_1752403.f_1 = 0;
				Global_1752403.f_2 = 0;
				return 1;
			}
			else if (iParam3 == 4)
			{
				Global_1752403.f_5 = 0;
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
			if (unk_0x2793700EDCE3DB7E(iParam1, 1))
			{
				if (iParam3 == 4)
				{
					iVar0 = unk_0xBEA29F6CAC4ECD19();
					Global_1752409 = unk_0xE33C601C19270822(iVar0, "pt");
					Global_1752409.f_1 = unk_0xE33C601C19270822(iVar0, "pu");
					Global_1752409.f_2 = unk_0xE33C601C19270822(iVar0, "ft");
					Global_1752409.f_3 = unk_0xE33C601C19270822(iVar0, "fu");
					Global_1752409.f_4 = unk_0xE33C601C19270822(iVar0, "qt");
					Global_1752409.f_5 = unk_0xE33C601C19270822(iVar0, "qu");
				}
				else
				{
					iVar0 = unk_0xBEA29F6CAC4ECD19();
					Global_1752378.f_10 = unk_0xBBDA792448DB5A89(unk_0xE33C601C19270822(iVar0, "dt"));
					Global_1752378.f_11 = unk_0xBBDA792448DB5A89(unk_0xE33C601C19270822(iVar0, "du"));
					Global_1752378.f_9 = (Global_1752378.f_10 / Global_1752378.f_11);
					Global_1752378.f_13 = unk_0xBBDA792448DB5A89(unk_0xE33C601C19270822(iVar0, "pt"));
					Global_1752378.f_14 = unk_0xBBDA792448DB5A89(unk_0xE33C601C19270822(iVar0, "pu"));
					Global_979575 = unk_0xF2DB717A73826179(Global_1752378.f_14);
					Global_1752378.f_12 = (Global_1752378.f_13 / Global_1752378.f_14);
					Global_1752378.f_15 = unk_0xBBDA792448DB5A89(unk_0xE33C601C19270822(iVar0, "qt"));
					Global_1752378.f_17 = unk_0xBBDA792448DB5A89(unk_0xE33C601C19270822(iVar0, "qu"));
					Global_1752378.f_16 = (Global_1752378.f_15 / Global_1752378.f_17);
				}
				if (unk_0xBEA29F6CAC4ECD19() != 0)
				{
					unk_0x97003200DCC6C27A();
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
			if (unk_0x2067E93A86B3AA21(iParam1))
			{
				if (bParam2)
				{
					if (unk_0x511A36AF2D356394(iParam1))
					{
						iVar0 = unk_0xBEA29F6CAC4ECD19();
						if (iParam3 == 0)
						{
							Global_1752378 = unk_0xE33C601C19270822(iVar0, "quit");
							Global_1752378.f_2 = unk_0xE33C601C19270822(iVar0, "ply");
							Global_1752378.f_8 = unk_0xE33C601C19270822(iVar0, "fl");
							if (Global_1752378.f_2 > 0)
							{
								Global_1752378.f_5 = 1;
							}
							unk_0x97003200DCC6C27A();
						}
						else if (iParam3 == 4)
						{
							Global_1752403.f_5 = unk_0x07BD029EFF536ADD(iVar0, "won");
							Global_1752403.f_4 = unk_0xE33C601C19270822(iVar0, "ply");
							Global_1752403.f_1 = unk_0xE33C601C19270822(iVar0, "quit");
							Global_1752403.f_2 = unk_0xE33C601C19270822(iVar0, "fl");
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

void func_146()
{
	Global_1752378 = 0;
	Global_1752378.f_2 = 0;
	Global_1752378.f_8 = 0;
	Global_1752378.f_3 = 0;
	Global_1752378.f_6 = 0;
}

int func_147(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_149() && !bParam2)
	{
		if (uParam0->f_21 == -1 || uParam0->f_22 == -1)
		{
			if ((!func_103() && iParam1 == 0) && !bParam3)
			{
				if (Global_1638223.f_94186 == 0)
				{
					if (Global_1638223 == 0)
					{
						if (((((Global_1638223.f_2 != 6 && !unk_0xAA4F14DA15DB0B51(Global_1638223.f_4, 20)) && !unk_0xAA4F14DA15DB0B51(Global_1638223.f_4, 21)) && !unk_0xAA4F14DA15DB0B51(Global_1638223.f_4, 22)) && !unk_0xAA4F14DA15DB0B51(Global_1638223.f_4, 23)) && Global_1638223.f_2 != 5)
						{
							func_250(uParam0, 1, 1);
							uParam0->f_41.f_3 = 0;
							*uParam0 = 0;
							func_110();
							unk_0x90E8C9C692D5C5BC(uParam0->f_5);
							func_96();
							return 1;
						}
					}
					else if (Global_1638223 != 2 && Global_1638223 != 1)
					{
						func_250(uParam0, 1, 1);
						uParam0->f_41.f_3 = 0;
						*uParam0 = 0;
						func_110();
						unk_0x90E8C9C692D5C5BC(uParam0->f_5);
						func_96();
						return 1;
					}
				}
			}
		}
	}
	if (Global_1638223 == 0 && Global_1638223.f_2 == 6)
	{
		if ((uParam0->f_21 == -1 && uParam0->f_22 == -1) && !func_103())
		{
			if (!unk_0xD176F39E49081808(unk_0x452F045938CD1887(0)))
			{
				Global_1638223.f_94169 = 1;
			}
		}
	}
	uParam0->f_8 = 0;
	if (bParam2)
	{
		func_148();
	}
	func_94(uParam0, 9);
	*uParam0 = 1;
	return 0;
}

void func_148()
{
	unk_0xF6082E2ADA1C795B(&(Global_2445217.f_30.f_3), 7);
}

bool func_149()
{
	return unk_0xA438D14FADC1185B(-1762644250);
}

int func_150()
{
	if (Global_1638223.f_38150 || func_151())
	{
		return 1;
	}
	return 0;
}

int func_151()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if ((((((((((((Global_1638223.f_44910[iVar0] == joaat("prop_rail_boxcar") || Global_1638223.f_44910[iVar0] == joaat("prop_rail_boxcar2")) || Global_1638223.f_44910[iVar0] == -1894510521) || Global_1638223.f_44910[iVar0] == joaat("prop_rail_boxcar3")) || Global_1638223.f_44910[iVar0] == -1562909828) || Global_1638223.f_44910[iVar0] == joaat("prop_rail_boxcar4")) || Global_1638223.f_44910[iVar0] == 338623111) || Global_1638223.f_44910[iVar0] == joaat("prop_rail_boxcar5")) || Global_1638223.f_44910[iVar0] == joaat("prop_rail_boxcar5_d")) || Global_1638223.f_44910[iVar0] == -1529940538) || Global_1638223.f_44910[iVar0] == 1152304222) || Global_1638223.f_44910[iVar0] == joaat("freight")) || Global_1638223.f_44910[iVar0] == joaat("metrotrain"))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_152()
{
	if ((Global_1638223.f_68.f_2 < 0f || func_153(Global_1638223.f_68, 999, 2f)) || Global_1638223.f_39326[0 /*3*/].f_2 < 0f)
	{
		return 1;
	}
	return 0;
}

int func_153(struct<3> Param0, int iParam3, float fParam4)
{
	int iVar0;
	struct<3> Var1[3];
	struct<3> Var11[3];
	int iVar21;
	
	if (iParam3 != 999)
	{
		iVar21 = 0;
		while (iVar21 < 3)
		{
			if (Global_1049460[iParam3 /*1943*/].f_146.f_57[iVar21 /*8*/].f_2 > Global_1049460[iParam3 /*1943*/].f_146.f_57[iVar21 /*8*/].f_3.f_2)
			{
				Var1[iVar21 /*3*/] = { Global_1049460[iParam3 /*1943*/].f_146.f_57[iVar21 /*8*/] };
				Var11[iVar21 /*3*/] = { Global_1049460[iParam3 /*1943*/].f_146.f_57[iVar21 /*8*/].f_3 };
			}
			else
			{
				Var1[iVar21 /*3*/] = { Global_1049460[iParam3 /*1943*/].f_146.f_57[iVar21 /*8*/].f_3 };
				Var11[iVar21 /*3*/] = { Global_1049460[iParam3 /*1943*/].f_146.f_57[iVar21 /*8*/] };
			}
			Var1[iVar21 /*3*/].f_2 = (Var1[iVar21 /*3*/].f_2 + fParam4);
			Var11[iVar21 /*3*/].f_2 = (Var11[iVar21 /*3*/].f_2 - fParam4);
			iVar21++;
		}
		if ((unk_0x19007189599EBBF5(Param0, Var11[0 /*3*/], Var1[0 /*3*/], Global_1049460[iParam3 /*1943*/].f_146.f_57[0 /*8*/].f_6, 0, 1) || (Global_1049460[iParam3 /*1943*/].f_146.f_57[1 /*8*/].f_6 != 0f && unk_0x19007189599EBBF5(Param0, Var11[1 /*3*/], Var1[1 /*3*/], Global_1049460[iParam3 /*1943*/].f_146.f_57[1 /*8*/].f_6, 0, 1))) || (Global_1049460[iParam3 /*1943*/].f_146.f_57[2 /*8*/].f_6 != 0f && unk_0x19007189599EBBF5(Param0, Var11[2 /*3*/], Var1[2 /*3*/], Global_1049460[iParam3 /*1943*/].f_146.f_57[2 /*8*/].f_6, 0, 1)))
		{
			return 1;
		}
	}
	else
	{
		iVar0 = 1;
		while (iVar0 <= 7)
		{
			if (func_153(Param0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 34;
		while (iVar0 <= 43)
		{
			if (func_153(Param0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 61;
		while (iVar0 <= 65)
		{
			if (func_153(Param0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 73;
		while (iVar0 <= 76)
		{
			if (func_153(Param0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 77;
		while (iVar0 <= 82)
		{
			if (func_153(Param0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 83;
		while (iVar0 <= 85)
		{
			if (func_153(Param0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 87;
		while (iVar0 <= 90)
		{
			if (func_153(Param0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 91;
		while (iVar0 <= 102)
		{
			if (func_153(Param0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 103;
		while (iVar0 <= 113)
		{
			if (func_153(Param0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		if (func_153(Param0, 8, fParam4))
		{
			return 1;
		}
		if (func_153(Param0, 17, fParam4))
		{
			return 1;
		}
	}
	return 0;
}

void func_154(int iParam0, struct<16> Param1)
{
	if (iParam0 == 0)
	{
		StringCopy(&Global_2456986, "", 64);
	}
	else
	{
		Global_2456986 = { Param1 };
	}
	Global_2456985 = iParam0;
}

int func_155(var uParam0, var uParam1)
{
	var uVar0;
	
	if (unk_0x58478145CAF8429C(uParam1))
	{
		return 0;
	}
	unk_0xACBC583A6A251BE0(uParam1, &uVar0, 13);
	if (unk_0x6A68E91B1AC64FBD(&uVar0, 13) && unk_0xB8CB95DC79AC0689(&uVar0))
	{
		*uParam0 = unk_0xC6D53C3DB8415FF9(&uVar0);
		if (unk_0x885F483F34E47503(*uParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_156()
{
	return Global_2445217.f_30.f_47;
}

int func_157()
{
	return Global_2455154;
}

bool func_158()
{
	return Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_189 != 0;
}

void func_159(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	struct<2> Var16;
	var uVar51[16];
	
	*uParam0 = unk_0xBEA29F6CAC4ECD19();
	iVar1 = unk_0xD41282265B0A744C(*uParam0, "data");
	iVar2 = unk_0xD41282265B0A744C(iVar1, "trg");
	*uParam1 = unk_0x560A2E3DA92FA8F8(iVar2, "list");
	if (iParam3 == 1)
	{
		if (unk_0x7ADD5F9CC9AA2359(*uParam0, "open") == 1)
		{
			uParam2->f_11 = unk_0x07BD029EFF536ADD(iVar1, "open");
		}
		return;
	}
	uParam2->f_11 = unk_0x07BD029EFF536ADD(iVar1, "open");
	Var3 = { func_160(unk_0x1A0A17CCD5A27AD3(0)) };
	unk_0x78823C36BAC4791B(&Var16, 35, &Var3);
	uParam2->f_48 = { Var16.f_1 };
	uParam2->f_64 = Var16.f_0;
	uParam2->f_4 = unk_0xE33C601C19270822(iVar2, "scr");
	uParam2->f_5 = unk_0xE33C601C19270822(iVar2, "time");
	uParam2->f_1 = unk_0xE33C601C19270822(iVar1, "cash");
	uParam2->f_65 = unk_0x4BFD05F6E18EB439(*uParam1);
	iVar0 = 0;
	while (iVar0 <= (uParam2->f_65 - 1))
	{
		uVar51[iVar0] = unk_0x29E82A6CEF2148AF(*uParam1, iVar0);
		StringCopy(&(uParam2->f_1177[iVar0 /*6*/]), unk_0xD5EE6B924304F24C(uVar51[iVar0], "cid"), 24);
		uParam2->f_72[iVar0 /*69*/].f_62 = unk_0xE33C601C19270822(uVar51[iVar0], "scr");
		uParam2->f_72[iVar0 /*69*/].f_63 = unk_0xE33C601C19270822(uVar51[iVar0], "time");
		iVar0++;
	}
}

struct<13> func_160(var uParam0)
{
	struct<13> Var0;
	
	unk_0xEBE2E35D7A3F79AF(uParam0, &Var0, 13);
	return Var0;
}

int func_161(int iParam0, bool bParam1, char* sParam2, int iParam3)
{
	struct<13> Var0;
	struct<13> Var13;
	
	if (((iParam3 == 1 || iParam3 == 2) || iParam3 == 3) || iParam3 == 4)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		Var0 = { func_160(sParam2) };
		Var13 = { func_162(unk_0x0FFED3E94261A832()) };
		if (bParam1)
		{
			if (unk_0x6AF3C75A2E120D75(&Var13, &Var0))
			{
				return 1;
			}
			else if (!unk_0xC869A9FE1FE47589(&Var0))
			{
				return 0;
			}
		}
		else if (unk_0x97FFE0491AC179A2())
		{
			if (unk_0x6AF3C75A2E120D75(&Var13, &Var0))
			{
				return 1;
			}
			else if (unk_0x41879FA7CD134DCD(&Var0) && unk_0xE1BD9BCF6A9D6793(&Var0))
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
			Var13 = { func_162(unk_0x0FFED3E94261A832()) };
			if (!unk_0x6AF3C75A2E120D75(&Var13, &Var0))
			{
				return 0;
			}
		}
	}
	return 1;
}

struct<13> func_162(int iParam0)
{
	struct<13> Var0;
	
	unk_0x3CE329346978C3A6(iParam0, &Var0, 13);
	return Var0;
}

void func_163(var uParam0)
{
	if (uParam0->f_16)
	{
		Global_972560.f_6 = 0;
		Global_972560.f_7 = 32;
	}
	else
	{
		Global_970998.f_6 = 0;
		Global_970998.f_7 = 32;
	}
}

void func_164(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	var uVar1[16];
	
	*uParam0 = unk_0xBEA29F6CAC4ECD19();
	if (*uParam0 == 0)
	{
	}
	*uParam1 = unk_0x560A2E3DA92FA8F8(*uParam0, "list");
	uParam2->f_10 = 1;
	uParam2->f_65 = unk_0x4BFD05F6E18EB439(*uParam1);
	iVar0 = 0;
	while (iVar0 <= (uParam2->f_65 - 1))
	{
		uVar1[iVar0] = unk_0x29E82A6CEF2148AF(*uParam1, iVar0);
		StringCopy(&(uParam2->f_1177[iVar0 /*6*/]), unk_0xD5EE6B924304F24C(uVar1[iVar0], "cid"), 24);
		iVar0++;
	}
	uParam2->f_10 = unk_0x07BD029EFF536ADD(*uParam0, "h2h");
	uParam2->f_9 = unk_0x07BD029EFF536ADD(*uParam0, "ch");
	if (func_103())
	{
		StringCopy(&(uParam2->f_12), unk_0xD5EE6B924304F24C(*uParam0, "name"), 64);
	}
}

void func_165(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = unk_0xBEA29F6CAC4ECD19();
	iVar1 = unk_0xD41282265B0A744C(iVar0, "mission");
	iVar2 = unk_0xD41282265B0A744C(iVar1, "gen");
	Global_1638223.f_94142 = unk_0xE33C601C19270822(iVar0, "debugOnlyVersion");
	if (!bParam2 || iParam3 == 0)
	{
		func_211(iVar1, iParam0, bParam1);
		func_210(iVar1);
		func_209(&iVar1);
		func_208(&iVar1);
		func_207(&iVar1);
		func_206(&iVar1);
		if (bParam2)
		{
			return;
		}
	}
	if (func_124())
	{
		if (!bParam2 || iParam3 == 1)
		{
			func_205(iVar1);
			func_204(iVar1);
			func_203(iVar1);
			if (bParam2)
			{
				return;
			}
		}
		if (!bParam2 || iParam3 == 2)
		{
			func_202(iVar1);
			func_201(iVar2);
			func_200(iVar1);
			if (bParam2)
			{
				return;
			}
		}
		if (!bParam2 || iParam3 == 3)
		{
			func_199(iVar1);
			func_198(iVar1);
			func_197(iVar1);
			func_196(iVar1);
			if (bParam2)
			{
				return;
			}
		}
	}
	else if (func_121())
	{
		func_193(iVar1);
		func_197(iVar1);
	}
	if (!bParam2 || iParam3 == 4)
	{
		func_191(iVar1);
		func_190(iVar1);
		func_189(iVar1);
		func_188(iVar1);
		func_187(iVar1);
		if (bParam2)
		{
			return;
		}
	}
	if (!bParam2 || iParam3 == 5)
	{
		func_185(iVar1);
		func_184(iVar1);
		func_182(iVar1);
		func_178(iVar1);
		if (bParam2)
		{
			return;
		}
	}
	if (Global_1638223 == 1)
	{
		func_204(iVar1);
		func_177(iVar1);
	}
	else
	{
		func_172(iVar1);
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1638223.f_17, 19))
	{
		func_171(iVar1);
	}
	unk_0x507FE690B1271947(&(Global_1638223.f_4), 15);
	unk_0x507FE690B1271947(&(Global_1638223.f_4), 18);
	unk_0x507FE690B1271947(&(Global_1638223.f_4), 19);
	unk_0x507FE690B1271947(&(Global_1638223.f_4), 29);
	unk_0x507FE690B1271947(&(Global_1638223.f_4), 28);
	if (func_75(Global_1638223.f_93532))
	{
		Global_1638223.f_28 = Global_1638223.f_27;
	}
	if ((!func_169(unk_0x0FFED3E94261A832()) && !func_168()) && !Global_1751535)
	{
		iVar3 = func_167(Global_1638223.f_93532, 1);
		if (iVar3 != -1)
		{
			if (Global_262145.f_5019[iVar3] != -1)
			{
				Global_1638223.f_28 = Global_262145.f_5019[iVar3];
			}
			if (Global_262145.f_4988[iVar3] != -1)
			{
				Global_1638223.f_27 = Global_262145.f_4988[iVar3];
			}
		}
	}
	if (func_51(Global_1638223.f_93532))
	{
		unk_0xF6082E2ADA1C795B(&(Global_1638223.f_4), 15);
	}
	else if (func_50(Global_1638223.f_93532))
	{
		unk_0xF6082E2ADA1C795B(&(Global_1638223.f_4), 18);
	}
	else if (func_49(Global_1638223.f_93532))
	{
		unk_0xF6082E2ADA1C795B(&(Global_1638223.f_4), 19);
	}
	else if (func_47(Global_1638223.f_93532))
	{
		unk_0xF6082E2ADA1C795B(&(Global_1638223.f_4), 29);
	}
	else if (func_48(Global_1638223.f_93532))
	{
		unk_0xF6082E2ADA1C795B(&(Global_1638223.f_4), 28);
	}
	else if (func_46(Global_1638223.f_93532))
	{
		unk_0xF6082E2ADA1C795B(&(Global_1638223.f_5), 0);
	}
	else if (func_45(Global_1638223.f_93532))
	{
		unk_0xF6082E2ADA1C795B(&(Global_1638223.f_5), 1);
	}
	else if (func_44(Global_1638223.f_93532))
	{
		unk_0xF6082E2ADA1C795B(&(Global_1638223.f_5), 2);
	}
	else if (func_40(Global_1638223.f_93532))
	{
		unk_0xF6082E2ADA1C795B(&(Global_1638223.f_5), 6);
	}
	else if (func_39(Global_1638223.f_93532))
	{
		unk_0xF6082E2ADA1C795B(&(Global_1638223.f_5), 7);
	}
	else if (func_38(Global_1638223.f_93532))
	{
		unk_0xF6082E2ADA1C795B(&(Global_1638223.f_5), 8);
	}
	else if (func_37(Global_1638223.f_93532))
	{
		unk_0xF6082E2ADA1C795B(&(Global_1638223.f_5), 9);
	}
	else if (func_33(Global_1638223.f_93532))
	{
		unk_0xF6082E2ADA1C795B(&(Global_1638223.f_5), 10);
	}
	else if (func_36(Global_1638223.f_93532))
	{
		unk_0xF6082E2ADA1C795B(&(Global_1638223.f_5), 11);
	}
	else if (func_35(Global_1638223.f_93532))
	{
		unk_0xF6082E2ADA1C795B(&(Global_1638223.f_5), 12);
	}
	else if (func_70(Global_1638223.f_112772))
	{
		unk_0xF6082E2ADA1C795B(&(Global_1638223.f_5), 13);
	}
	else if (func_69(Global_1638223.f_112772))
	{
		unk_0xF6082E2ADA1C795B(&(Global_1638223.f_5), 22);
	}
	else if (func_34(Global_1638223.f_93532))
	{
		unk_0xF6082E2ADA1C795B(&(Global_1638223.f_5), 14);
	}
	else if (func_43(Global_1638223.f_93532))
	{
		unk_0xF6082E2ADA1C795B(&(Global_1638223.f_5), 3);
	}
	else if (func_42(Global_1638223.f_93532))
	{
		unk_0xF6082E2ADA1C795B(&(Global_1638223.f_5), 4);
	}
	else if (func_68(Global_1638223.f_112772))
	{
		unk_0xF6082E2ADA1C795B(&(Global_1638223.f_5), 16);
	}
	else if (func_67(Global_1638223.f_112772))
	{
		unk_0xF6082E2ADA1C795B(&(Global_1638223.f_5), 17);
	}
	else if (func_66(Global_1638223.f_112772))
	{
		unk_0xF6082E2ADA1C795B(&(Global_1638223.f_5), 20);
	}
	else if (func_65(Global_1638223.f_112772))
	{
		unk_0xF6082E2ADA1C795B(&(Global_1638223.f_5), 21);
	}
	else if (func_69(Global_1638223.f_112772))
	{
		unk_0xF6082E2ADA1C795B(&(Global_1638223.f_5), 22);
	}
	else if (func_41(Global_1638223.f_93532))
	{
		unk_0xF6082E2ADA1C795B(&(Global_1638223.f_5), 5);
	}
	else if (func_64(Global_1638223.f_112772))
	{
		unk_0xF6082E2ADA1C795B(&(Global_1638223.f_5), 23);
	}
	else if (func_60(Global_1638223.f_112772))
	{
		unk_0xF6082E2ADA1C795B(&(Global_1638223.f_5), 27);
	}
	else if (func_63(Global_1638223.f_112772))
	{
		unk_0xF6082E2ADA1C795B(&(Global_1638223.f_5), 24);
	}
	else if (func_61(Global_1638223.f_112772))
	{
		unk_0xF6082E2ADA1C795B(&(Global_1638223.f_5), 26);
	}
	else if (func_62(Global_1638223.f_112772))
	{
		unk_0xF6082E2ADA1C795B(&(Global_1638223.f_5), 25);
	}
	else if (func_59(Global_1638223.f_112772))
	{
		unk_0xF6082E2ADA1C795B(&(Global_1638223.f_5), 28);
	}
	else if (func_58(Global_1638223.f_112772))
	{
		unk_0xF6082E2ADA1C795B(&(Global_1638223.f_5), 29);
	}
	else if (func_57(Global_1638223.f_112772))
	{
		unk_0xF6082E2ADA1C795B(&(Global_1638223.f_5), 30);
	}
	func_166(Global_1638223.f_93532);
}

void func_166(int iParam0)
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
		if (iParam0 == Global_262145.f_7862[iVar0] || iParam0 == Global_262145.f_7871[iVar0])
		{
			Global_1638223.f_68 = { func_55(0, iVar0) };
			Global_1638223.f_71 = { func_54(0, iVar0) };
			Var1 = { func_53(0, iVar0) };
			Global_1638223.f_90 = Var1.f_2;
			Global_1638223.f_1 = 0;
			Global_1638223.f_2 = 8;
			Global_1638223.f_94149 = 0;
			Global_1638223.f_94153 = 16777215;
		}
		iVar0++;
	}
}

int func_167(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != 0)
	{
		iVar1 = 0;
		while (iVar1 < 7)
		{
			if (((Global_262145.f_5384[iVar1] == 202 || Global_262145.f_5384[iVar1] == 203) || Global_262145.f_5384[iVar1] == 204) || (iParam1 && (Global_262145.f_5384[iVar1] == 224 || Global_262145.f_5384[iVar1] == 223)))
			{
				iVar0 = 0;
				while (iVar0 < 20)
				{
					if (iParam0 == Global_262145.f_5077[iVar1 /*21*/][iVar0])
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

bool func_168()
{
	return unk_0xAA4F14DA15DB0B51(Global_2445989.f_1.f_2809, 5);
}

bool func_169(int iParam0)
{
	return func_170(iParam0);
}

bool func_170(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_13.f_1, 0);
}

void func_171(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = unk_0xD41282265B0A744C(iParam0, "fsp");
	iVar2 = unk_0x560A2E3DA92FA8F8(iVar1, "loc");
	iVar3 = unk_0x560A2E3DA92FA8F8(iVar1, "head");
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (unk_0x6E1D01265BDA6BEA(iVar2, iVar0) == 5)
		{
			Global_1638223.f_88743[iVar0 /*5*/] = { unk_0xD458CBD2DA2C775D(iVar2, iVar0) };
			Global_1638223.f_88743[iVar0 /*5*/].f_3 = unk_0xDFB5A5508080E518(iVar3, iVar0);
		}
		else
		{
			Global_1638223.f_88743[iVar0 /*5*/] = { 0f, 0f, 0f };
			Global_1638223.f_88743[iVar0 /*5*/].f_3 = 0f;
		}
		iVar0++;
	}
}

void func_172(int iParam0)
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
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	var uVar56[4];
	var uVar61[4];
	var uVar66[4];
	var uVar71[4];
	var uVar76[4];
	var uVar81[4];
	var uVar86[4];
	var uVar91[4];
	var uVar96[4];
	var uVar101[4];
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
	int iVar169;
	int iVar170;
	int iVar171;
	int iVar172;
	int iVar173;
	int iVar174;
	int iVar175;
	int iVar176;
	int iVar177;
	int iVar178;
	int iVar179;
	var uVar180[5];
	var uVar186[5];
	var uVar192[5];
	var uVar198[5];
	var uVar204[5];
	var uVar210[5];
	var uVar216[5];
	var uVar222[5];
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
	int iVar250;
	int iVar251;
	int iVar252;
	int iVar253;
	int iVar254;
	int iVar255;
	int iVar256;
	int iVar257;
	int iVar258;
	int iVar259;
	int iVar260;
	var uVar261[2];
	var uVar264[2];
	
	iVar6 = unk_0xD41282265B0A744C(iParam0, "ene");
	Global_1638223.f_65263 = unk_0xE33C601C19270822(iVar6, "no");
	if (unk_0x7ADD5F9CC9AA2359(iVar6, "spcap") == 2 && unk_0xE33C601C19270822(iVar6, "spcap") != 0)
	{
		Global_1638223.f_65264 = unk_0xE33C601C19270822(iVar6, "spcap");
	}
	else
	{
		Global_1638223.f_65264 = 50;
	}
	Global_1638223.f_65266 = unk_0xE33C601C19270822(iVar6, "time");
	Global_1638223.f_65267 = unk_0xE33C601C19270822(iVar6, "pal");
	iVar7 = unk_0x560A2E3DA92FA8F8(iVar6, "loc");
	iVar8 = unk_0x560A2E3DA92FA8F8(iVar6, "head");
	iVar9 = unk_0x560A2E3DA92FA8F8(iVar6, "rng");
	iVar10 = unk_0x560A2E3DA92FA8F8(iVar6, "model");
	iVar11 = unk_0x560A2E3DA92FA8F8(iVar6, "gun");
	iVar12 = unk_0x560A2E3DA92FA8F8(iVar6, "skill");
	iVar13 = unk_0x560A2E3DA92FA8F8(iVar6, "rsp");
	if (Global_1638223 == 1)
	{
		uVar14[0] = unk_0x560A2E3DA92FA8F8(iVar6, "team");
	}
	iVar19 = unk_0x560A2E3DA92FA8F8(iVar6, "wep");
	iVar20 = unk_0x560A2E3DA92FA8F8(iVar6, "hlt");
	iVar21 = unk_0x560A2E3DA92FA8F8(iVar6, "lghlt");
	iVar22 = unk_0x560A2E3DA92FA8F8(iVar6, "veh");
	iVar23 = unk_0x560A2E3DA92FA8F8(iVar6, "foll");
	iVar24 = unk_0x560A2E3DA92FA8F8(iVar6, "iaim");
	iVar25 = unk_0x560A2E3DA92FA8F8(iVar6, "iaimt");
	iVar26 = unk_0x560A2E3DA92FA8F8(iVar6, "iaimr");
	iVar27 = unk_0x560A2E3DA92FA8F8(iVar6, "sanim");
	iVar28 = unk_0x560A2E3DA92FA8F8(iVar6, "sat");
	iVar29 = unk_0x560A2E3DA92FA8F8(iVar6, "saru");
	iVar30 = unk_0x560A2E3DA92FA8F8(iVar6, "sara");
	iVar31 = unk_0x560A2E3DA92FA8F8(iVar6, "satt");
	iVar32 = unk_0x560A2E3DA92FA8F8(iVar6, "whost");
	iVar33 = unk_0x560A2E3DA92FA8F8(iVar6, "flee");
	iVar34 = unk_0x560A2E3DA92FA8F8(iVar6, "frr");
	iVar35 = unk_0x560A2E3DA92FA8F8(iVar6, "pfrmr");
	iVar36 = unk_0x560A2E3DA92FA8F8(iVar6, "psnt");
	iVar37 = unk_0x560A2E3DA92FA8F8(iVar6, "psnei");
	iVar38 = unk_0x560A2E3DA92FA8F8(iVar6, "prorbs");
	iVar39 = unk_0x560A2E3DA92FA8F8(iVar6, "p2sp");
	iVar40 = unk_0x560A2E3DA92FA8F8(iVar6, "p2sh");
	iVar41 = unk_0x560A2E3DA92FA8F8(iVar6, "accu");
	iVar42 = unk_0x560A2E3DA92FA8F8(iVar6, "lgacc");
	iVar43 = unk_0x560A2E3DA92FA8F8(iVar6, "cmsty");
	iVar44 = unk_0x560A2E3DA92FA8F8(iVar6, "pedbs");
	iVar45 = unk_0x560A2E3DA92FA8F8(iVar6, "pbstwo");
	iVar46 = unk_0x560A2E3DA92FA8F8(iVar6, "pbs3");
	iVar47 = unk_0x560A2E3DA92FA8F8(iVar6, "pbs4");
	iVar48 = unk_0x560A2E3DA92FA8F8(iVar6, "pbs5");
	iVar49 = unk_0x560A2E3DA92FA8F8(iVar6, "pbs6");
	iVar50 = unk_0x560A2E3DA92FA8F8(iVar6, "pbs7");
	iVar51 = unk_0x560A2E3DA92FA8F8(iVar6, "pbs8");
	iVar52 = unk_0x560A2E3DA92FA8F8(iVar6, "pbs9");
	iVar53 = unk_0x560A2E3DA92FA8F8(iVar6, "paot");
	iVar54 = unk_0x560A2E3DA92FA8F8(iVar6, "pfh");
	iVar55 = unk_0x560A2E3DA92FA8F8(iVar6, "pmfhat");
	if (func_124())
	{
		iVar3 = 0;
		while (iVar3 <= (Global_1638223.f_32 - 1))
		{
			if (iVar3 < 4)
			{
				StringCopy(&cVar4, "group", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar14[iVar3] = unk_0x560A2E3DA92FA8F8(iVar6, &cVar4);
				StringCopy(&cVar4, "rule", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar56[iVar3] = unk_0x560A2E3DA92FA8F8(iVar6, &cVar4);
				StringCopy(&cVar4, "pri", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar61[iVar3] = unk_0x560A2E3DA92FA8F8(iVar6, &cVar4);
				StringCopy(&cVar4, "agr", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar66[iVar3] = unk_0x560A2E3DA92FA8F8(iVar6, &cVar4);
				StringCopy(&cVar4, "tmflw", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar71[iVar3] = unk_0x560A2E3DA92FA8F8(iVar6, &cVar4);
				StringCopy(&cVar4, "jtop", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar76[iVar3] = unk_0x560A2E3DA92FA8F8(iVar6, &cVar4);
				StringCopy(&cVar4, "jtof", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar81[iVar3] = unk_0x560A2E3DA92FA8F8(iVar6, &cVar4);
				StringCopy(&cVar4, "cblfr", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar86[iVar3] = unk_0x560A2E3DA92FA8F8(iVar6, &cVar4);
				StringCopy(&cVar4, "cblto", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar91[iVar3] = unk_0x560A2E3DA92FA8F8(iVar6, &cVar4);
				StringCopy(&cVar4, "gtcpr", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar96[iVar3] = unk_0x560A2E3DA92FA8F8(iVar6, &cVar4);
				StringCopy(&cVar4, "pcrr", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar101[iVar3] = unk_0x560A2E3DA92FA8F8(iVar6, &cVar4);
			}
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 <= 4)
		{
			StringCopy(&cVar4, "awt", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar180[iVar3] = unk_0x560A2E3DA92FA8F8(iVar6, &cVar4);
			StringCopy(&cVar4, "awr", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar186[iVar3] = unk_0x560A2E3DA92FA8F8(iVar6, &cVar4);
			StringCopy(&cVar4, "awl", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar192[iVar3] = unk_0x560A2E3DA92FA8F8(iVar6, &cVar4);
			StringCopy(&cVar4, "awlr", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar198[iVar3] = unk_0x560A2E3DA92FA8F8(iVar6, &cVar4);
			StringCopy(&cVar4, "aht", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar210[iVar3] = unk_0x560A2E3DA92FA8F8(iVar6, &cVar4);
			StringCopy(&cVar4, "ags", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar204[iVar3] = unk_0x560A2E3DA92FA8F8(iVar6, &cVar4);
			StringCopy(&cVar4, "agrd", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar216[iVar3] = unk_0x560A2E3DA92FA8F8(iVar6, &cVar4);
			StringCopy(&cVar4, "agvr", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar222[iVar3] = unk_0x560A2E3DA92FA8F8(iVar6, &cVar4);
			iVar3++;
		}
		iVar106 = unk_0x560A2E3DA92FA8F8(iVar6, "objt");
		iVar107 = unk_0x560A2E3DA92FA8F8(iVar6, "team");
		iVar108 = unk_0x560A2E3DA92FA8F8(iVar6, "spawn");
		iVar109 = unk_0x560A2E3DA92FA8F8(iVar6, "acts");
		iVar110 = unk_0x560A2E3DA92FA8F8(iVar6, "objt2");
		iVar111 = unk_0x560A2E3DA92FA8F8(iVar6, "team2");
		iVar112 = unk_0x560A2E3DA92FA8F8(iVar6, "spawn2");
		iVar113 = unk_0x560A2E3DA92FA8F8(iVar6, "acts2");
		iVar114 = unk_0x560A2E3DA92FA8F8(iVar6, "objt3");
		iVar115 = unk_0x560A2E3DA92FA8F8(iVar6, "team3");
		iVar116 = unk_0x560A2E3DA92FA8F8(iVar6, "spawn3");
		iVar117 = unk_0x560A2E3DA92FA8F8(iVar6, "acts3");
		iVar118 = unk_0x560A2E3DA92FA8F8(iVar6, "objt4");
		iVar119 = unk_0x560A2E3DA92FA8F8(iVar6, "team4");
		iVar120 = unk_0x560A2E3DA92FA8F8(iVar6, "spawn4");
		iVar121 = unk_0x560A2E3DA92FA8F8(iVar6, "acts4");
		iVar122 = unk_0x560A2E3DA92FA8F8(iVar6, "act");
		iVar123 = unk_0x560A2E3DA92FA8F8(iVar6, "pper");
		iVar124 = unk_0x560A2E3DA92FA8F8(iVar6, "infr");
		iVar125 = unk_0x560A2E3DA92FA8F8(iVar6, "cca");
		iVar126 = unk_0x560A2E3DA92FA8F8(iVar6, "ccid");
		iVar127 = unk_0x560A2E3DA92FA8F8(iVar6, "gfr");
		iVar128 = unk_0x560A2E3DA92FA8F8(iVar6, "msr");
		iVar129 = unk_0x560A2E3DA92FA8F8(iVar6, "bnr");
		iVar130 = unk_0x560A2E3DA92FA8F8(iVar6, "phor");
		iVar131 = unk_0x560A2E3DA92FA8F8(iVar6, "folr");
		iVar133 = unk_0x560A2E3DA92FA8F8(iVar6, "pcvl");
		iVar134 = unk_0x560A2E3DA92FA8F8(iVar6, "pcvr");
		iVar132 = unk_0x560A2E3DA92FA8F8(iVar6, "pdfw");
		iVar138 = unk_0x560A2E3DA92FA8F8(iVar6, "pvdp1");
		iVar139 = unk_0x560A2E3DA92FA8F8(iVar6, "pvdp2");
		iVar135 = unk_0x560A2E3DA92FA8F8(iVar6, "paaw");
		iVar136 = unk_0x560A2E3DA92FA8F8(iVar6, "paav1");
		iVar137 = unk_0x560A2E3DA92FA8F8(iVar6, "paav2");
		iVar140 = unk_0x560A2E3DA92FA8F8(iVar6, "dt");
		iVar141 = unk_0x560A2E3DA92FA8F8(iVar6, "do");
		iVar164 = unk_0x560A2E3DA92FA8F8(iVar6, "dltd");
		iVar142 = unk_0x560A2E3DA92FA8F8(iVar6, "dtim");
		iVar143 = unk_0x560A2E3DA92FA8F8(iVar6, "dln");
		iVar144 = unk_0x560A2E3DA92FA8F8(iVar6, "pvsp");
		iVar165 = unk_0x560A2E3DA92FA8F8(iVar6, "drge");
		iVar166 = unk_0x560A2E3DA92FA8F8(iVar6, "agrot");
		iVar167 = unk_0x560A2E3DA92FA8F8(iVar6, "gtds");
		iVar168 = unk_0x560A2E3DA92FA8F8(iVar6, "pstat");
		iVar169 = unk_0x560A2E3DA92FA8F8(iVar6, "pstar");
		iVar170 = unk_0x560A2E3DA92FA8F8(iVar6, "dmv");
		iVar171 = unk_0x560A2E3DA92FA8F8(iVar6, "blkr");
		iVar172 = unk_0x560A2E3DA92FA8F8(iVar6, "let");
		iVar173 = unk_0x560A2E3DA92FA8F8(iVar6, "escr");
		iVar174 = unk_0x560A2E3DA92FA8F8(iVar6, "actr");
		iVar175 = unk_0x560A2E3DA92FA8F8(iVar6, "actv");
		iVar176 = unk_0x560A2E3DA92FA8F8(iVar6, "actv2");
		iVar177 = unk_0x560A2E3DA92FA8F8(iVar6, "actv3");
		iVar178 = unk_0x560A2E3DA92FA8F8(iVar6, "actv4");
		iVar179 = unk_0x560A2E3DA92FA8F8(iVar6, "actv5");
		iVar228 = unk_0x560A2E3DA92FA8F8(iVar6, "pedct");
		iVar230 = unk_0x560A2E3DA92FA8F8(iVar6, "pdcra");
		iVar229 = unk_0x560A2E3DA92FA8F8(iVar6, "pedcr");
		iVar231 = unk_0x560A2E3DA92FA8F8(iVar6, "pedcv");
		iVar232 = unk_0x560A2E3DA92FA8F8(iVar6, "pedbc");
		iVar233 = unk_0x560A2E3DA92FA8F8(iVar6, "pdbps");
		iVar234 = unk_0x560A2E3DA92FA8F8(iVar6, "pdbso");
		iVar235 = unk_0x560A2E3DA92FA8F8(iVar6, "avrad");
		iVar236 = unk_0x560A2E3DA92FA8F8(iVar6, "pedst");
		iVar237 = unk_0x560A2E3DA92FA8F8(iVar6, "gotor");
		iVar238 = unk_0x560A2E3DA92FA8F8(iVar6, "invbs");
		iVar239 = unk_0x560A2E3DA92FA8F8(iVar6, "gort");
		iVar240 = unk_0x560A2E3DA92FA8F8(iVar6, "gorr");
		iVar241 = unk_0x560A2E3DA92FA8F8(iVar6, "gorw");
		iVar242 = unk_0x560A2E3DA92FA8F8(iVar6, "cstnm");
		iVar243 = unk_0x560A2E3DA92FA8F8(iVar6, "pspdl");
		iVar244 = unk_0x560A2E3DA92FA8F8(iVar6, "psgr");
		iVar245 = unk_0x560A2E3DA92FA8F8(iVar6, "pssgr");
		iVar246 = unk_0x560A2E3DA92FA8F8(iVar6, "psctt");
		iVar247 = unk_0x560A2E3DA92FA8F8(iVar6, "pscto");
		iVar248 = unk_0x560A2E3DA92FA8F8(iVar6, "pscta");
		iVar249 = unk_0x560A2E3DA92FA8F8(iVar6, "psctac");
		iVar250 = unk_0x560A2E3DA92FA8F8(iVar6, "psctv");
		iVar251 = unk_0x560A2E3DA92FA8F8(iVar6, "pscth");
		iVar252 = unk_0x560A2E3DA92FA8F8(iVar6, "psctot");
		iVar253 = unk_0x560A2E3DA92FA8F8(iVar6, "psctoi");
		iVar254 = unk_0x560A2E3DA92FA8F8(iVar6, "pscatd");
		iVar255 = unk_0x560A2E3DA92FA8F8(iVar6, "cutsc");
		iVar256 = unk_0x560A2E3DA92FA8F8(iVar6, "cutsh");
		iVar257 = unk_0x560A2E3DA92FA8F8(iVar6, "cstsc");
		iVar258 = unk_0x560A2E3DA92FA8F8(iVar6, "cstsh");
		iVar259 = unk_0x560A2E3DA92FA8F8(iVar6, "nmpass");
		iVar260 = unk_0x560A2E3DA92FA8F8(iVar6, "nmfail");
		iVar145 = unk_0x560A2E3DA92FA8F8(iVar6, "pmcp");
		iVar146 = unk_0x560A2E3DA92FA8F8(iVar6, "pmcf");
		iVar147 = unk_0x560A2E3DA92FA8F8(iVar6, "pambv");
		iVar148 = unk_0x560A2E3DA92FA8F8(iVar6, "pwrpt");
		iVar149 = unk_0x560A2E3DA92FA8F8(iVar6, "pcash");
		iVar150 = unk_0x560A2E3DA92FA8F8(iVar6, "ptrdi");
		iVar151 = unk_0x560A2E3DA92FA8F8(iVar6, "pspov");
		iVar152 = unk_0x560A2E3DA92FA8F8(iVar6, "paccc");
		iVar153 = unk_0x560A2E3DA92FA8F8(iVar6, "pslp");
		iVar154 = unk_0x560A2E3DA92FA8F8(iVar6, "psor");
		iVar155 = unk_0x560A2E3DA92FA8F8(iVar6, "psort");
		iVar156 = unk_0x560A2E3DA92FA8F8(iVar6, "pspovr");
		iVar161 = unk_0x560A2E3DA92FA8F8(iVar6, "pspln");
		iVar160 = unk_0x560A2E3DA92FA8F8(iVar6, "pcara");
		iVar162 = unk_0x560A2E3DA92FA8F8(iVar6, "pior");
		iVar157 = unk_0x560A2E3DA92FA8F8(iVar6, "paagzn");
		iVar163 = unk_0x560A2E3DA92FA8F8(iVar6, "piort");
		iVar158 = unk_0x560A2E3DA92FA8F8(iVar6, "pfbr");
		iVar159 = unk_0x560A2E3DA92FA8F8(iVar6, "pfbd");
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			StringCopy(&cVar4, "prstp", 8);
			if (iVar1 > 0)
			{
				StringIntConCat(&cVar4, iVar1, 8);
			}
			uVar261[iVar1] = unk_0x560A2E3DA92FA8F8(iVar6, &cVar4);
			StringCopy(&cVar4, "prsth", 8);
			if (iVar1 > 0)
			{
				StringIntConCat(&cVar4, iVar1, 8);
			}
			uVar264[iVar1] = unk_0x560A2E3DA92FA8F8(iVar6, &cVar4);
			iVar1++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1638223.f_65263 - 1))
	{
		if (iVar0 < 59)
		{
			Global_1638223.f_65268[iVar0 /*309*/] = { unk_0xD458CBD2DA2C775D(iVar7, iVar0) };
			Global_1638223.f_65268[iVar0 /*309*/].f_3 = unk_0xDFB5A5508080E518(iVar8, iVar0);
			Global_1638223.f_65268[iVar0 /*309*/].f_4 = unk_0xDFB5A5508080E518(iVar9, iVar0);
			if (Global_1638223.f_65268[iVar0 /*309*/].f_4 < 0.75f)
			{
				Global_1638223.f_65268[iVar0 /*309*/].f_4 = 0.75f;
			}
			iVar2 = unk_0x27CDB7B0660BDAB1(iVar10, iVar0);
			if (iVar2 == joaat("mp_m_fibsec_01"))
			{
				Global_1638223.f_65268[iVar0 /*309*/].f_15 = joaat("s_m_m_ciasec_01");
			}
			else if (iVar2 == joaat("ig_michelle"))
			{
				Global_1638223.f_65268[iVar0 /*309*/].f_15 = joaat("ig_karen_daniels");
			}
			else
			{
				Global_1638223.f_65268[iVar0 /*309*/].f_15 = iVar2;
			}
			if (!func_121() && !func_176())
			{
				if (!unk_0x88516260CF32A1A0(Global_1638223.f_65268[iVar0 /*309*/].f_15))
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_15 = joaat("s_m_y_cop_01");
				}
			}
			iVar2 = unk_0x27CDB7B0660BDAB1(iVar11, iVar0);
			Global_1638223.f_65268[iVar0 /*309*/].f_16 = iVar2;
			iVar2 = unk_0x27CDB7B0660BDAB1(iVar12, iVar0);
			Global_1638223.f_65268[iVar0 /*309*/].f_17 = iVar2;
			if (Global_1638223 == 1)
			{
				Global_1638223.f_65268[iVar0 /*309*/].f_18[0] = unk_0x27CDB7B0660BDAB1(uVar14[0], iVar0);
			}
			Global_1638223.f_65268[iVar0 /*309*/].f_51 = unk_0x27CDB7B0660BDAB1(iVar23, iVar0);
			Global_1638223.f_65268[iVar0 /*309*/].f_37 = unk_0x27CDB7B0660BDAB1(iVar19, iVar0);
			Global_1638223.f_65268[iVar0 /*309*/].f_38 = unk_0x27CDB7B0660BDAB1(iVar20, iVar0);
			if (unk_0x6E1D01265BDA6BEA(iVar21, iVar0) == 2)
			{
				Global_1638223.f_65268[iVar0 /*309*/].f_39 = unk_0x27CDB7B0660BDAB1(iVar21, iVar0);
			}
			else
			{
				Global_1638223.f_65268[iVar0 /*309*/].f_39 = -1;
			}
			Global_1638223.f_65268[iVar0 /*309*/].f_57 = unk_0x27CDB7B0660BDAB1(iVar22, iVar0);
			Global_1638223.f_65268[iVar0 /*309*/].f_33 = unk_0x27CDB7B0660BDAB1(iVar13, iVar0);
			Global_1638223.f_65268[iVar0 /*309*/].f_40 = unk_0x27CDB7B0660BDAB1(iVar24, iVar0);
			Global_1638223.f_65268[iVar0 /*309*/].f_41 = unk_0x27CDB7B0660BDAB1(iVar25, iVar0);
			Global_1638223.f_65268[iVar0 /*309*/].f_42 = unk_0x27CDB7B0660BDAB1(iVar26, iVar0);
			Global_1638223.f_65268[iVar0 /*309*/].f_43 = unk_0x27CDB7B0660BDAB1(iVar27, iVar0);
			Global_1638223.f_65268[iVar0 /*309*/].f_44 = unk_0x27CDB7B0660BDAB1(iVar28, iVar0);
			Global_1638223.f_65268[iVar0 /*309*/].f_45 = unk_0x27CDB7B0660BDAB1(iVar29, iVar0);
			Global_1638223.f_65268[iVar0 /*309*/].f_46 = unk_0xDFB5A5508080E518(iVar30, iVar0);
			Global_1638223.f_65268[iVar0 /*309*/].f_47 = unk_0x27CDB7B0660BDAB1(iVar31, iVar0);
			Global_1638223.f_65268[iVar0 /*309*/].f_50 = unk_0x27CDB7B0660BDAB1(iVar32, iVar0);
			Global_1638223.f_65268[iVar0 /*309*/].f_48 = unk_0x27CDB7B0660BDAB1(iVar33, iVar0);
			Global_1638223.f_65268[iVar0 /*309*/].f_5 = unk_0xDFB5A5508080E518(iVar34, iVar0);
			if ((unk_0x6E1D01265BDA6BEA(iVar35, iVar0) == 3 && unk_0x6E1D01265BDA6BEA(iVar36, iVar0) == 2) && unk_0x6E1D01265BDA6BEA(iVar37, iVar0) == 2)
			{
				Global_1638223.f_65268[iVar0 /*309*/].f_6 = unk_0xDFB5A5508080E518(iVar35, iVar0);
				Global_1638223.f_65268[iVar0 /*309*/].f_7 = unk_0x27CDB7B0660BDAB1(iVar36, iVar0);
				Global_1638223.f_65268[iVar0 /*309*/].f_8 = unk_0x27CDB7B0660BDAB1(iVar37, iVar0);
			}
			else
			{
				Global_1638223.f_65268[iVar0 /*309*/].f_6 = 0f;
				Global_1638223.f_65268[iVar0 /*309*/].f_7 = 0;
				Global_1638223.f_65268[iVar0 /*309*/].f_8 = -1;
			}
			if (unk_0x6E1D01265BDA6BEA(iVar38, iVar0) == 2)
			{
				Global_1638223.f_65268[iVar0 /*309*/].f_14 = unk_0x27CDB7B0660BDAB1(iVar38, iVar0);
			}
			else
			{
				Global_1638223.f_65268[iVar0 /*309*/].f_14 = 0;
			}
			if (unk_0x6E1D01265BDA6BEA(iVar39, iVar0) == 5 && unk_0x6E1D01265BDA6BEA(iVar40, iVar0) == 3)
			{
				Global_1638223.f_65268[iVar0 /*309*/].f_9 = { unk_0xD458CBD2DA2C775D(iVar39, iVar0) };
				Global_1638223.f_65268[iVar0 /*309*/].f_12 = unk_0xDFB5A5508080E518(iVar40, iVar0);
			}
			else
			{
				Global_1638223.f_65268[iVar0 /*309*/].f_9 = { 0f, 0f, 0f };
				Global_1638223.f_65268[iVar0 /*309*/].f_12 = 0f;
			}
			Global_1638223.f_65268[iVar0 /*309*/].f_35 = unk_0x27CDB7B0660BDAB1(iVar41, iVar0);
			if (unk_0x6E1D01265BDA6BEA(iVar42, iVar0) == 2)
			{
				Global_1638223.f_65268[iVar0 /*309*/].f_36 = unk_0x27CDB7B0660BDAB1(iVar42, iVar0);
			}
			else
			{
				Global_1638223.f_65268[iVar0 /*309*/].f_36 = -1;
			}
			Global_1638223.f_65268[iVar0 /*309*/].f_49 = unk_0x27CDB7B0660BDAB1(iVar43, iVar0);
			Global_1638223.f_65268[iVar0 /*309*/].f_189 = unk_0x27CDB7B0660BDAB1(iVar44, iVar0);
			if (unk_0x6E1D01265BDA6BEA(iVar45, iVar0) == 2)
			{
				Global_1638223.f_65268[iVar0 /*309*/].f_190 = unk_0x27CDB7B0660BDAB1(iVar45, iVar0);
			}
			else
			{
				Global_1638223.f_65268[iVar0 /*309*/].f_190 = 0;
			}
			if (unk_0x6E1D01265BDA6BEA(iVar46, iVar0) == 2)
			{
				Global_1638223.f_65268[iVar0 /*309*/].f_191 = unk_0x27CDB7B0660BDAB1(iVar46, iVar0);
			}
			else
			{
				Global_1638223.f_65268[iVar0 /*309*/].f_191 = 0;
			}
			if (unk_0x6E1D01265BDA6BEA(iVar47, iVar0) == 2)
			{
				Global_1638223.f_65268[iVar0 /*309*/].f_192 = unk_0x27CDB7B0660BDAB1(iVar47, iVar0);
			}
			else
			{
				Global_1638223.f_65268[iVar0 /*309*/].f_192 = 0;
			}
			if (unk_0x6E1D01265BDA6BEA(iVar48, iVar0) == 2)
			{
				Global_1638223.f_65268[iVar0 /*309*/].f_193 = unk_0x27CDB7B0660BDAB1(iVar48, iVar0);
			}
			else
			{
				Global_1638223.f_65268[iVar0 /*309*/].f_193 = 0;
			}
			if (unk_0x6E1D01265BDA6BEA(iVar49, iVar0) == 2)
			{
				Global_1638223.f_65268[iVar0 /*309*/].f_194 = unk_0x27CDB7B0660BDAB1(iVar49, iVar0);
			}
			else
			{
				Global_1638223.f_65268[iVar0 /*309*/].f_194 = 0;
			}
			if (unk_0x6E1D01265BDA6BEA(iVar50, iVar0) == 2)
			{
				Global_1638223.f_65268[iVar0 /*309*/].f_195 = unk_0x27CDB7B0660BDAB1(iVar50, iVar0);
			}
			else
			{
				Global_1638223.f_65268[iVar0 /*309*/].f_195 = 0;
			}
			if (unk_0x6E1D01265BDA6BEA(iVar51, iVar0) == 2)
			{
				Global_1638223.f_65268[iVar0 /*309*/].f_196 = unk_0x27CDB7B0660BDAB1(iVar51, iVar0);
			}
			else
			{
				Global_1638223.f_65268[iVar0 /*309*/].f_196 = 0;
			}
			if (unk_0x6E1D01265BDA6BEA(iVar52, iVar0) == 2)
			{
				Global_1638223.f_65268[iVar0 /*309*/].f_197 = unk_0x27CDB7B0660BDAB1(iVar52, iVar0);
			}
			else
			{
				Global_1638223.f_65268[iVar0 /*309*/].f_197 = 0;
			}
			if (unk_0x6E1D01265BDA6BEA(iVar53, iVar0) == 2)
			{
				Global_1638223.f_65268[iVar0 /*309*/].f_198 = unk_0x27CDB7B0660BDAB1(iVar53, iVar0);
			}
			else
			{
				Global_1638223.f_65268[iVar0 /*309*/].f_198 = -1;
			}
			if (unk_0x6E1D01265BDA6BEA(iVar54, iVar0) == 2)
			{
				Global_1638223.f_65268[iVar0 /*309*/].f_199 = unk_0x27CDB7B0660BDAB1(iVar54, iVar0);
			}
			else
			{
				Global_1638223.f_65268[iVar0 /*309*/].f_199 = 0;
			}
			if (unk_0x6E1D01265BDA6BEA(iVar55, iVar0) == 2)
			{
				Global_1638223.f_65268[iVar0 /*309*/].f_200 = unk_0x27CDB7B0660BDAB1(iVar55, iVar0);
			}
			else
			{
				Global_1638223.f_65268[iVar0 /*309*/].f_200 = -1;
			}
			if (func_124())
			{
				Global_1638223.f_65268[iVar0 /*309*/].f_58 = unk_0x27CDB7B0660BDAB1(iVar106, iVar0);
				Global_1638223.f_65268[iVar0 /*309*/].f_59 = unk_0x27CDB7B0660BDAB1(iVar107, iVar0);
				Global_1638223.f_65268[iVar0 /*309*/].f_60 = unk_0x27CDB7B0660BDAB1(iVar108, iVar0);
				Global_1638223.f_65268[iVar0 /*309*/].f_64 = unk_0x27CDB7B0660BDAB1(iVar109, iVar0);
				if (unk_0x6E1D01265BDA6BEA(iVar110, iVar0) == 2)
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_162 = unk_0x27CDB7B0660BDAB1(iVar110, iVar0);
					Global_1638223.f_65268[iVar0 /*309*/].f_159 = unk_0x27CDB7B0660BDAB1(iVar111, iVar0);
					Global_1638223.f_65268[iVar0 /*309*/].f_165 = unk_0x27CDB7B0660BDAB1(iVar112, iVar0);
					Global_1638223.f_65268[iVar0 /*309*/].f_168 = unk_0x27CDB7B0660BDAB1(iVar113, iVar0);
					Global_1638223.f_65268[iVar0 /*309*/].f_163 = unk_0x27CDB7B0660BDAB1(iVar114, iVar0);
					Global_1638223.f_65268[iVar0 /*309*/].f_160 = unk_0x27CDB7B0660BDAB1(iVar115, iVar0);
					Global_1638223.f_65268[iVar0 /*309*/].f_166 = unk_0x27CDB7B0660BDAB1(iVar116, iVar0);
					Global_1638223.f_65268[iVar0 /*309*/].f_169 = unk_0x27CDB7B0660BDAB1(iVar117, iVar0);
					Global_1638223.f_65268[iVar0 /*309*/].f_164 = unk_0x27CDB7B0660BDAB1(iVar118, iVar0);
					Global_1638223.f_65268[iVar0 /*309*/].f_161 = unk_0x27CDB7B0660BDAB1(iVar119, iVar0);
					Global_1638223.f_65268[iVar0 /*309*/].f_167 = unk_0x27CDB7B0660BDAB1(iVar120, iVar0);
					Global_1638223.f_65268[iVar0 /*309*/].f_170 = unk_0x27CDB7B0660BDAB1(iVar121, iVar0);
				}
				else
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_162 = -1;
					Global_1638223.f_65268[iVar0 /*309*/].f_159 = 0;
					Global_1638223.f_65268[iVar0 /*309*/].f_165 = 0;
					Global_1638223.f_65268[iVar0 /*309*/].f_168 = 0;
					Global_1638223.f_65268[iVar0 /*309*/].f_163 = -1;
					Global_1638223.f_65268[iVar0 /*309*/].f_160 = 0;
					Global_1638223.f_65268[iVar0 /*309*/].f_166 = 0;
					Global_1638223.f_65268[iVar0 /*309*/].f_169 = 0;
					Global_1638223.f_65268[iVar0 /*309*/].f_164 = -1;
					Global_1638223.f_65268[iVar0 /*309*/].f_161 = 0;
					Global_1638223.f_65268[iVar0 /*309*/].f_167 = 0;
					Global_1638223.f_65268[iVar0 /*309*/].f_170 = 0;
				}
				Global_1638223.f_65268[iVar0 /*309*/].f_63 = unk_0x27CDB7B0660BDAB1(iVar122, iVar0);
				if (unk_0x6E1D01265BDA6BEA(iVar123, iVar0) == 2)
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_206 = unk_0x27CDB7B0660BDAB1(iVar123, iVar0);
				}
				else
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_206 = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar124, iVar0) == 2)
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_207 = unk_0x27CDB7B0660BDAB1(iVar124, iVar0);
				}
				else
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_207 = 250;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar125, iVar0) == 2)
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_210 = unk_0x27CDB7B0660BDAB1(iVar125, iVar0);
				}
				else
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_210 = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar126, iVar0) == 2)
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_211 = unk_0x27CDB7B0660BDAB1(iVar126, iVar0);
				}
				else
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_211 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar127, iVar0) == 2)
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_212 = unk_0x27CDB7B0660BDAB1(iVar127, iVar0);
				}
				else
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_212 = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar128, iVar0) == 2)
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_208 = unk_0x27CDB7B0660BDAB1(iVar128, iVar0);
				}
				else
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_208 = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar129, iVar0) == 2)
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_209 = unk_0x27CDB7B0660BDAB1(iVar129, iVar0);
				}
				else
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_209 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar130, iVar0) == 2)
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_274 = unk_0x27CDB7B0660BDAB1(iVar130, iVar0);
				}
				else
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_274 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar131, iVar0) == 2)
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_275 = unk_0x27CDB7B0660BDAB1(iVar131, iVar0);
				}
				else
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_275 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar133, iVar0) == 5)
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_213 = { unk_0xD458CBD2DA2C775D(iVar133, iVar0) };
				}
				else
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_213 = { 0f, 0f, 0f };
				}
				if (unk_0x6E1D01265BDA6BEA(iVar134, iVar0) == 5)
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_216 = { unk_0xD458CBD2DA2C775D(iVar134, iVar0) };
				}
				else
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_216 = { 0f, 0f, 0f };
				}
				if ((unk_0x6E1D01265BDA6BEA(iVar138, iVar0) == 5 && unk_0x6E1D01265BDA6BEA(iVar139, iVar0) == 5) && unk_0x6E1D01265BDA6BEA(iVar132, iVar0) == 3)
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_224 = { unk_0xD458CBD2DA2C775D(iVar138, iVar0) };
					Global_1638223.f_65268[iVar0 /*309*/].f_227 = { unk_0xD458CBD2DA2C775D(iVar139, iVar0) };
					Global_1638223.f_65268[iVar0 /*309*/].f_230 = unk_0xDFB5A5508080E518(iVar132, iVar0);
				}
				else
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_224 = { 0f, 0f, 0f };
					Global_1638223.f_65268[iVar0 /*309*/].f_227 = { 0f, 0f, 0f };
					Global_1638223.f_65268[iVar0 /*309*/].f_230 = 1f;
				}
				if ((unk_0x6E1D01265BDA6BEA(iVar135, iVar0) == 3 && unk_0x6E1D01265BDA6BEA(iVar136, iVar0) == 5) && unk_0x6E1D01265BDA6BEA(iVar137, iVar0) == 5)
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_184 = unk_0xDFB5A5508080E518(iVar135, iVar0);
					Global_1638223.f_65268[iVar0 /*309*/].f_178 = { unk_0xD458CBD2DA2C775D(iVar136, iVar0) };
					Global_1638223.f_65268[iVar0 /*309*/].f_181 = { unk_0xD458CBD2DA2C775D(iVar137, iVar0) };
				}
				else
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_184 = 0f;
					Global_1638223.f_65268[iVar0 /*309*/].f_178 = { 0f, 0f, 0f };
					Global_1638223.f_65268[iVar0 /*309*/].f_181 = { 0f, 0f, 0f };
				}
				if (unk_0x6E1D01265BDA6BEA(iVar144, iVar0) == 2)
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_242 = unk_0x27CDB7B0660BDAB1(iVar144, iVar0);
				}
				else
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_242 = 0;
				}
				Global_1638223.f_65268[iVar0 /*309*/].f_220 = unk_0x27CDB7B0660BDAB1(iVar140, iVar0);
				Global_1638223.f_65268[iVar0 /*309*/].f_219 = unk_0x27CDB7B0660BDAB1(iVar141, iVar0);
				Global_1638223.f_65268[iVar0 /*309*/].f_221 = unk_0x27CDB7B0660BDAB1(iVar142, iVar0);
				Global_1638223.f_65268[iVar0 /*309*/].f_222 = unk_0x27CDB7B0660BDAB1(iVar143, iVar0);
				Global_1638223.f_65268[iVar0 /*309*/].f_223 = unk_0x27CDB7B0660BDAB1(iVar165, iVar0);
				Global_1638223.f_65268[iVar0 /*309*/].f_305 = unk_0x27CDB7B0660BDAB1(iVar164, iVar0);
				Global_1638223.f_65268[iVar0 /*309*/].f_231 = unk_0x27CDB7B0660BDAB1(iVar166, iVar0);
				Global_1638223.f_65268[iVar0 /*309*/].f_185 = unk_0x27CDB7B0660BDAB1(iVar167, iVar0);
				Global_1638223.f_65268[iVar0 /*309*/].f_34 = unk_0x27CDB7B0660BDAB1(iVar170, iVar0);
				Global_1638223.f_65268[iVar0 /*309*/].f_13 = unk_0xDFB5A5508080E518(iVar171, iVar0);
				Global_1638223.f_65268[iVar0 /*309*/].f_176 = unk_0x27CDB7B0660BDAB1(iVar172, iVar0);
				Global_1638223.f_65268[iVar0 /*309*/].f_186 = unk_0x27CDB7B0660BDAB1(iVar173, iVar0);
				Global_1638223.f_65268[iVar0 /*309*/].f_177 = unk_0x27CDB7B0660BDAB1(iVar174, iVar0);
				Global_1638223.f_65268[iVar0 /*309*/].f_65 = { unk_0xD458CBD2DA2C775D(iVar175, iVar0) };
				Global_1638223.f_65268[iVar0 /*309*/].f_65 = { unk_0xD458CBD2DA2C775D(iVar175, iVar0) };
				if (unk_0x6E1D01265BDA6BEA(iVar176, iVar0) == 5)
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_68[0 /*3*/] = { unk_0xD458CBD2DA2C775D(iVar176, iVar0) };
				}
				else
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_68[0 /*3*/] = { 0f, 0f, 0f };
				}
				if (unk_0x6E1D01265BDA6BEA(iVar177, iVar0) == 5)
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_68[1 /*3*/] = { unk_0xD458CBD2DA2C775D(iVar177, iVar0) };
				}
				else
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_68[1 /*3*/] = { 0f, 0f, 0f };
				}
				if (unk_0x6E1D01265BDA6BEA(iVar178, iVar0) == 5)
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_68[2 /*3*/] = { unk_0xD458CBD2DA2C775D(iVar178, iVar0) };
				}
				else
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_68[2 /*3*/] = { 0f, 0f, 0f };
				}
				if (unk_0x6E1D01265BDA6BEA(iVar179, iVar0) == 5)
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_68[3 /*3*/] = { unk_0xD458CBD2DA2C775D(iVar179, iVar0) };
				}
				else
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_68[3 /*3*/] = { 0f, 0f, 0f };
				}
				if (unk_0x6E1D01265BDA6BEA(iVar168, iVar0) == 2 && unk_0x6E1D01265BDA6BEA(iVar169, iVar0) == 2)
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_187 = unk_0x27CDB7B0660BDAB1(iVar168, iVar0);
					Global_1638223.f_65268[iVar0 /*309*/].f_188 = unk_0x27CDB7B0660BDAB1(iVar169, iVar0);
				}
				else
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_187 = -1;
					Global_1638223.f_65268[iVar0 /*309*/].f_188 = -1;
				}
				iVar3 = 0;
				while (iVar3 <= 4)
				{
					if (unk_0x6E1D01265BDA6BEA(uVar180[iVar3], iVar0) == 2)
					{
						Global_1638223.f_65268[iVar0 /*309*/].f_82[iVar3] = unk_0x27CDB7B0660BDAB1(uVar180[iVar3], iVar0);
					}
					else
					{
						Global_1638223.f_65268[iVar0 /*309*/].f_82[iVar3] = 0;
					}
					if (unk_0x6E1D01265BDA6BEA(uVar186[iVar3], iVar0) == 2)
					{
						Global_1638223.f_65268[iVar0 /*309*/].f_88[iVar3] = unk_0x27CDB7B0660BDAB1(uVar186[iVar3], iVar0);
					}
					else
					{
						Global_1638223.f_65268[iVar0 /*309*/].f_88[iVar3] = 0;
					}
					if (unk_0x6E1D01265BDA6BEA(uVar192[iVar3], iVar0) == 5 && unk_0x6E1D01265BDA6BEA(uVar198[iVar3], iVar0) == 2)
					{
						Global_1638223.f_65268[iVar0 /*309*/].f_94[iVar3 /*3*/] = { unk_0xD458CBD2DA2C775D(uVar192[iVar3], iVar0) };
						Global_1638223.f_65268[iVar0 /*309*/].f_110[iVar3] = unk_0x27CDB7B0660BDAB1(uVar198[iVar3], iVar0);
					}
					else
					{
						Global_1638223.f_65268[iVar0 /*309*/].f_94[iVar3 /*3*/] = { 0f, 0f, 0f };
						Global_1638223.f_65268[iVar0 /*309*/].f_110[iVar3] = 3;
					}
					if (unk_0x6E1D01265BDA6BEA(uVar204[iVar3], iVar0) == 2)
					{
						Global_1638223.f_65268[iVar0 /*309*/].f_128[iVar3] = unk_0x27CDB7B0660BDAB1(uVar204[iVar3], iVar0);
					}
					else
					{
						Global_1638223.f_65268[iVar0 /*309*/].f_128[iVar3] = -1;
					}
					if (unk_0x6E1D01265BDA6BEA(uVar210[iVar3], iVar0) == 3)
					{
						Global_1638223.f_65268[iVar0 /*309*/].f_116[iVar3] = unk_0xDFB5A5508080E518(uVar210[iVar3], iVar0);
					}
					else
					{
						Global_1638223.f_65268[iVar0 /*309*/].f_116[iVar3] = 0f;
					}
					if (unk_0x6E1D01265BDA6BEA(uVar216[iVar3], iVar0) == 3)
					{
						Global_1638223.f_65268[iVar0 /*309*/].f_122[iVar3] = unk_0xDFB5A5508080E518(uVar216[iVar3], iVar0);
					}
					else
					{
						Global_1638223.f_65268[iVar0 /*309*/].f_122[iVar3] = 0f;
					}
					if (unk_0x6E1D01265BDA6BEA(uVar222[iVar3], iVar0) == 3)
					{
						Global_1638223.f_65268[iVar0 /*309*/].f_134[iVar3] = unk_0xDFB5A5508080E518(uVar222[iVar3], iVar0);
					}
					else
					{
						Global_1638223.f_65268[iVar0 /*309*/].f_134[iVar3] = 0f;
					}
					iVar3++;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar229, iVar0) == 2)
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_232 = unk_0x27CDB7B0660BDAB1(iVar229, iVar0);
				}
				else
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_232 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar228, iVar0) == 2)
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_233 = unk_0x27CDB7B0660BDAB1(iVar228, iVar0);
				}
				else
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_233 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar231, iVar0) == 2)
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_235 = unk_0x27CDB7B0660BDAB1(iVar231, iVar0);
				}
				else
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_235 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar230, iVar0) == 2)
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_234 = unk_0x27CDB7B0660BDAB1(iVar230, iVar0);
				}
				else
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_234 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar236, iVar0) == 2)
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_241 = unk_0x27CDB7B0660BDAB1(iVar236, iVar0);
				}
				else
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_241 = -3;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar232, iVar0) == 2)
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_257 = unk_0x27CDB7B0660BDAB1(iVar232, iVar0);
				}
				else
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_257 = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar233, iVar0) == 3)
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_268 = unk_0xDFB5A5508080E518(iVar233, iVar0);
				}
				else
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_268 = 1f;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar234, iVar0) == 2)
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_269 = unk_0x27CDB7B0660BDAB1(iVar234, iVar0);
				}
				else
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_269 = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar235, iVar0) == 2)
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_81 = unk_0x27CDB7B0660BDAB1(iVar235, iVar0);
				}
				else
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_81 = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar237, iVar0) == 2)
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_52 = unk_0x27CDB7B0660BDAB1(iVar237, iVar0);
				}
				else
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_52 = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar238, iVar0) == 2)
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_53 = unk_0x27CDB7B0660BDAB1(iVar238, iVar0);
				}
				else
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_53 = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar242, iVar0) == 2)
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_157 = unk_0x27CDB7B0660BDAB1(iVar242, iVar0);
				}
				else
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_157 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar243, iVar0) == 2)
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_158 = unk_0x27CDB7B0660BDAB1(iVar243, iVar0);
				}
				else
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_158 = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar244, iVar0) == 2)
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_61 = unk_0x27CDB7B0660BDAB1(iVar244, iVar0);
				}
				else
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_61 = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar245, iVar0) == 2)
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_62 = unk_0x27CDB7B0660BDAB1(iVar245, iVar0);
				}
				else
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_62 = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar145, iVar0) == 2)
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_255 = unk_0x27CDB7B0660BDAB1(iVar145, iVar0);
				}
				else
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_255 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar146, iVar0) == 2)
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_256 = unk_0x27CDB7B0660BDAB1(iVar146, iVar0);
				}
				else
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_256 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar147, iVar0) == 2)
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_276 = unk_0x27CDB7B0660BDAB1(iVar147, iVar0);
				}
				else
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_276 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar148, iVar0) == 2)
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_282 = unk_0x27CDB7B0660BDAB1(iVar148, iVar0);
				}
				else
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_282 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar149, iVar0) == 2)
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_283 = unk_0x27CDB7B0660BDAB1(iVar149, iVar0);
				}
				else
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_283 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar150, iVar0) == 2)
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_284 = unk_0x27CDB7B0660BDAB1(iVar150, iVar0);
				}
				else
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_284 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar151, iVar0) == 2)
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_288 = unk_0x27CDB7B0660BDAB1(iVar151, iVar0);
				}
				else
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_288 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar152, iVar0) == 3)
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_289 = unk_0xDFB5A5508080E518(iVar152, iVar0);
				}
				else
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_289 = 0f;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar153, iVar0) == 2)
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_285 = unk_0x27CDB7B0660BDAB1(iVar153, iVar0);
				}
				else
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_285 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar154, iVar0) == 2)
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_286 = unk_0x27CDB7B0660BDAB1(iVar154, iVar0);
				}
				else
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_286 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar155, iVar0) == 2)
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_287 = unk_0x27CDB7B0660BDAB1(iVar155, iVar0);
				}
				else
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_287 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar157, iVar0) == 2)
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_306 = unk_0x27CDB7B0660BDAB1(iVar157, iVar0);
				}
				else
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_306 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar158, iVar0) == 2)
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_307 = unk_0x27CDB7B0660BDAB1(iVar158, iVar0);
				}
				else
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_307 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar159, iVar0) == 2)
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_308 = unk_0x27CDB7B0660BDAB1(iVar159, iVar0);
				}
				else
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_308 = 10;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar156, iVar0) == 2)
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_290 = unk_0x27CDB7B0660BDAB1(iVar156, iVar0);
				}
				else
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_290 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar160, iVar0) == 2)
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_301 = unk_0x27CDB7B0660BDAB1(iVar160, iVar0);
				}
				else
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_301 = 10;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar162, iVar0) == 2)
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_303 = unk_0x27CDB7B0660BDAB1(iVar162, iVar0);
				}
				else
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_303 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar163, iVar0) == 2)
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_302 = unk_0x27CDB7B0660BDAB1(iVar163, iVar0);
				}
				else
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_302 = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar161, iVar0) == 2)
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_304 = unk_0x27CDB7B0660BDAB1(iVar161, iVar0);
				}
				else
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_304 = 0;
				}
				if ((unk_0x6E1D01265BDA6BEA(iVar246, iVar0) == 2 && unk_0x6E1D01265BDA6BEA(iVar247, iVar0) == 2) && unk_0x6E1D01265BDA6BEA(iVar248, iVar0) == 2)
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_146 = unk_0x27CDB7B0660BDAB1(iVar246, iVar0);
					Global_1638223.f_65268[iVar0 /*309*/].f_147 = unk_0x27CDB7B0660BDAB1(iVar247, iVar0);
					Global_1638223.f_65268[iVar0 /*309*/].f_149 = unk_0x27CDB7B0660BDAB1(iVar248, iVar0);
				}
				else
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_146 = -1;
					Global_1638223.f_65268[iVar0 /*309*/].f_147 = -1;
					Global_1638223.f_65268[iVar0 /*309*/].f_149 = 0;
				}
				if ((unk_0x6E1D01265BDA6BEA(iVar252, iVar0) == 2 && unk_0x6E1D01265BDA6BEA(iVar253, iVar0) == 2) && unk_0x6E1D01265BDA6BEA(iVar254, iVar0) == 2)
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_154 = unk_0x27CDB7B0660BDAB1(iVar252, iVar0);
					Global_1638223.f_65268[iVar0 /*309*/].f_155 = unk_0x27CDB7B0660BDAB1(iVar253, iVar0);
					Global_1638223.f_65268[iVar0 /*309*/].f_156 = unk_0x27CDB7B0660BDAB1(iVar254, iVar0);
				}
				else
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_154 = 0;
					Global_1638223.f_65268[iVar0 /*309*/].f_155 = -1;
					Global_1638223.f_65268[iVar0 /*309*/].f_156 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar249, iVar0) == 2)
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_148 = unk_0x27CDB7B0660BDAB1(iVar249, iVar0);
				}
				else
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_148 = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar250, iVar0) == 5)
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_150 = { unk_0xD458CBD2DA2C775D(iVar250, iVar0) };
				}
				else
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_150 = { 0f, 0f, 0f };
				}
				if (unk_0x6E1D01265BDA6BEA(iVar251, iVar0) == 3)
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_153 = unk_0xDFB5A5508080E518(iVar251, iVar0);
				}
				else
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_153 = 0f;
				}
				if ((unk_0x6E1D01265BDA6BEA(iVar239, iVar0) == 2 && unk_0x6E1D01265BDA6BEA(iVar240, iVar0) == 2) && unk_0x6E1D01265BDA6BEA(iVar241, iVar0) == 2)
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_54 = unk_0x27CDB7B0660BDAB1(iVar239, iVar0);
					Global_1638223.f_65268[iVar0 /*309*/].f_55 = unk_0x27CDB7B0660BDAB1(iVar240, iVar0);
					Global_1638223.f_65268[iVar0 /*309*/].f_56 = unk_0x27CDB7B0660BDAB1(iVar241, iVar0);
				}
				else
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_54 = -1;
					Global_1638223.f_65268[iVar0 /*309*/].f_55 = -1;
					Global_1638223.f_65268[iVar0 /*309*/].f_56 = joaat("weapon_pistol");
				}
				if (Global_1638223.f_2 != 6 && unk_0x6E1D01265BDA6BEA(iVar255, iVar0) == 2)
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_270 = unk_0x27CDB7B0660BDAB1(iVar255, iVar0);
				}
				else
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_270 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar259, iVar0) == 2)
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_253 = unk_0x27CDB7B0660BDAB1(iVar259, iVar0);
				}
				else
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_253 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar260, iVar0) == 2)
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_254 = unk_0x27CDB7B0660BDAB1(iVar260, iVar0);
				}
				else
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_254 = -1;
				}
				if (Global_1638223.f_2 != 6 && unk_0x6E1D01265BDA6BEA(iVar256, iVar0) == 2)
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_271 = unk_0x27CDB7B0660BDAB1(iVar256, iVar0);
				}
				else
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_271 = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar257, iVar0) == 2)
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_272 = unk_0x27CDB7B0660BDAB1(iVar257, iVar0);
				}
				else
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_272 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar258, iVar0) == 2)
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_273 = unk_0x27CDB7B0660BDAB1(iVar258, iVar0);
				}
				else
				{
					Global_1638223.f_65268[iVar0 /*309*/].f_273 = -1;
				}
				iVar1 = 0;
				while (iVar1 <= 1)
				{
					if (unk_0x6E1D01265BDA6BEA(uVar261[iVar1], iVar0) == 5)
					{
						Global_1638223.f_65268[iVar0 /*309*/].f_291[iVar1 /*3*/] = { unk_0xD458CBD2DA2C775D(uVar261[iVar1], iVar0) };
					}
					else
					{
						Global_1638223.f_65268[iVar0 /*309*/].f_291[iVar1 /*3*/] = { 0f, 0f, 0f };
					}
					if (unk_0x6E1D01265BDA6BEA(uVar264[iVar1], iVar0) == 3)
					{
						Global_1638223.f_65268[iVar0 /*309*/].f_298[iVar1] = unk_0xDFB5A5508080E518(uVar264[iVar1], iVar0);
					}
					else
					{
						Global_1638223.f_65268[iVar0 /*309*/].f_298[iVar1] = 0f;
					}
					iVar1++;
				}
				iVar3 = 0;
				while (iVar3 <= (Global_1638223.f_32 - 1))
				{
					if (iVar3 < 4)
					{
						Global_1638223.f_65268[iVar0 /*309*/].f_18[iVar3] = unk_0x27CDB7B0660BDAB1(uVar14[iVar3], iVar0);
						Global_1638223.f_65268[iVar0 /*309*/].f_23[iVar3] = unk_0x27CDB7B0660BDAB1(uVar56[iVar3], iVar0);
						Global_1638223.f_65268[iVar0 /*309*/].f_28[iVar3] = unk_0x27CDB7B0660BDAB1(uVar61[iVar3], iVar0);
						if (Global_1638223.f_65268[iVar0 /*309*/].f_28[iVar3] == -1)
						{
							Global_1638223.f_65268[iVar0 /*309*/].f_28[iVar3] = 99999;
						}
						if (unk_0x6E1D01265BDA6BEA(uVar66[iVar3], iVar0) == 2)
						{
							Global_1638223.f_65268[iVar0 /*309*/].f_201[iVar3] = unk_0x27CDB7B0660BDAB1(uVar66[iVar3], iVar0);
						}
						else
						{
							Global_1638223.f_65268[iVar0 /*309*/].f_201[iVar3] = -1;
						}
						if (unk_0x6E1D01265BDA6BEA(uVar71[iVar3], iVar0) == 2)
						{
							Global_1638223.f_65268[iVar0 /*309*/].f_171[iVar3] = unk_0x27CDB7B0660BDAB1(uVar71[iVar3], iVar0);
						}
						else
						{
							Global_1638223.f_65268[iVar0 /*309*/].f_171[iVar3] = 0;
						}
						if (unk_0x6E1D01265BDA6BEA(uVar76[iVar3], iVar0) == 2)
						{
							Global_1638223.f_65268[iVar0 /*309*/].f_243[iVar3] = unk_0x27CDB7B0660BDAB1(uVar76[iVar3], iVar0);
						}
						else
						{
							Global_1638223.f_65268[iVar0 /*309*/].f_243[iVar3] = 0;
						}
						if (unk_0x6E1D01265BDA6BEA(uVar81[iVar3], iVar0) == 2)
						{
							Global_1638223.f_65268[iVar0 /*309*/].f_248[iVar3] = unk_0x27CDB7B0660BDAB1(uVar81[iVar3], iVar0);
						}
						else
						{
							Global_1638223.f_65268[iVar0 /*309*/].f_248[iVar3] = 0;
						}
						if (unk_0x6E1D01265BDA6BEA(uVar86[iVar3], iVar0) == 2 && unk_0x6E1D01265BDA6BEA(uVar91[iVar3], iVar0) == 2)
						{
							Global_1638223.f_65268[iVar0 /*309*/].f_258[iVar3] = unk_0x27CDB7B0660BDAB1(uVar86[iVar3], iVar0);
							Global_1638223.f_65268[iVar0 /*309*/].f_263[iVar3] = unk_0x27CDB7B0660BDAB1(uVar91[iVar3], iVar0);
						}
						else
						{
							Global_1638223.f_65268[iVar0 /*309*/].f_258[iVar3] = -1;
							Global_1638223.f_65268[iVar0 /*309*/].f_263[iVar3] = -1;
						}
						if (unk_0x6E1D01265BDA6BEA(uVar96[iVar3], iVar0) == 2)
						{
							Global_1638223.f_65268[iVar0 /*309*/].f_277[iVar3] = unk_0x27CDB7B0660BDAB1(uVar96[iVar3], iVar0);
						}
						else if (unk_0xAA4F14DA15DB0B51(Global_1638223.f_37720[iVar3 /*3*/][func_175(iVar0)], func_174(iVar0)))
						{
							Global_1638223.f_65268[iVar0 /*309*/].f_277[iVar3] = -1;
						}
						else
						{
							Global_1638223.f_65268[iVar0 /*309*/].f_277[iVar3] = -2;
						}
						if (unk_0x6E1D01265BDA6BEA(uVar101[iVar3], iVar0) == 2)
						{
							Global_1638223.f_65268[iVar0 /*309*/].f_236[iVar3] = unk_0x27CDB7B0660BDAB1(uVar101[iVar3], iVar0);
						}
						else
						{
							Global_1638223.f_65268[iVar0 /*309*/].f_236[iVar3] = 0;
						}
					}
					iVar3++;
				}
			}
		}
		iVar0++;
	}
	func_173(&iVar6);
}

void func_173(int iParam0)
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
	
	Global_1638223.f_84187[0] = unk_0xE33C601C19270822(*iParam0, "no0");
	iVar1 = unk_0x560A2E3DA92FA8F8(*iParam0, "loc0");
	iVar2 = unk_0x560A2E3DA92FA8F8(*iParam0, "head0");
	iVar3 = unk_0x560A2E3DA92FA8F8(*iParam0, "bit0");
	iVar4 = unk_0x560A2E3DA92FA8F8(*iParam0, "veh0");
	iVar5 = unk_0x560A2E3DA92FA8F8(*iParam0, "tars0");
	iVar6 = unk_0x560A2E3DA92FA8F8(*iParam0, "ty0");
	iVar7 = unk_0x560A2E3DA92FA8F8(*iParam0, "as0");
	iVar8 = unk_0x560A2E3DA92FA8F8(*iParam0, "qu0");
	iVar9 = unk_0x560A2E3DA92FA8F8(*iParam0, "gg0");
	iVar10 = unk_0x560A2E3DA92FA8F8(*iParam0, "ar0");
	iVar0 = 0;
	while (iVar0 <= (Global_1638223.f_84187[0] - 1))
	{
		Global_1638223.f_85094[0 /*901*/][iVar0 /*15*/] = { unk_0xD458CBD2DA2C775D(iVar1, iVar0) };
		Global_1638223.f_85094[0 /*901*/][iVar0 /*15*/].f_3 = unk_0xDFB5A5508080E518(iVar2, iVar0);
		Global_1638223.f_85094[0 /*901*/][iVar0 /*15*/].f_5 = unk_0x27CDB7B0660BDAB1(iVar3, iVar0);
		if (unk_0x6E1D01265BDA6BEA(iVar4, iVar0) == 2)
		{
			Global_1638223.f_85094[0 /*901*/][iVar0 /*15*/].f_7 = unk_0x27CDB7B0660BDAB1(iVar4, iVar0);
		}
		else
		{
			Global_1638223.f_85094[0 /*901*/][iVar0 /*15*/].f_7 = -1;
		}
		Global_1638223.f_85094[0 /*901*/][iVar0 /*15*/].f_9 = unk_0x27CDB7B0660BDAB1(iVar5, iVar0);
		Global_1638223.f_85094[0 /*901*/][iVar0 /*15*/].f_10 = unk_0x27CDB7B0660BDAB1(iVar6, iVar0);
		Global_1638223.f_85094[0 /*901*/][iVar0 /*15*/].f_11 = unk_0x27CDB7B0660BDAB1(iVar7, iVar0);
		Global_1638223.f_85094[0 /*901*/][iVar0 /*15*/].f_12 = unk_0x27CDB7B0660BDAB1(iVar8, iVar0);
		Global_1638223.f_85094[0 /*901*/][iVar0 /*15*/].f_13 = unk_0x27CDB7B0660BDAB1(iVar9, iVar0);
		Global_1638223.f_85094[0 /*901*/][iVar0 /*15*/].f_14 = unk_0x27CDB7B0660BDAB1(iVar10, iVar0);
		iVar0++;
	}
	Global_1638223.f_84187[1] = unk_0xE33C601C19270822(*iParam0, "no1");
	iVar11 = unk_0x560A2E3DA92FA8F8(*iParam0, "loc1");
	iVar12 = unk_0x560A2E3DA92FA8F8(*iParam0, "head1");
	iVar13 = unk_0x560A2E3DA92FA8F8(*iParam0, "bit1");
	iVar14 = unk_0x560A2E3DA92FA8F8(*iParam0, "veh1");
	iVar15 = unk_0x560A2E3DA92FA8F8(*iParam0, "tars1");
	iVar16 = unk_0x560A2E3DA92FA8F8(*iParam0, "ty1");
	iVar17 = unk_0x560A2E3DA92FA8F8(*iParam0, "as1");
	iVar18 = unk_0x560A2E3DA92FA8F8(*iParam0, "qu1");
	iVar19 = unk_0x560A2E3DA92FA8F8(*iParam0, "gg1");
	iVar20 = unk_0x560A2E3DA92FA8F8(*iParam0, "ar1");
	iVar0 = 0;
	while (iVar0 <= (Global_1638223.f_84187[1] - 1))
	{
		Global_1638223.f_85094[1 /*901*/][iVar0 /*15*/] = { unk_0xD458CBD2DA2C775D(iVar11, iVar0) };
		Global_1638223.f_85094[1 /*901*/][iVar0 /*15*/].f_3 = unk_0xDFB5A5508080E518(iVar12, iVar0);
		Global_1638223.f_85094[1 /*901*/][iVar0 /*15*/].f_5 = unk_0x27CDB7B0660BDAB1(iVar13, iVar0);
		if (unk_0x6E1D01265BDA6BEA(iVar14, iVar0) == 2)
		{
			Global_1638223.f_85094[1 /*901*/][iVar0 /*15*/].f_7 = unk_0x27CDB7B0660BDAB1(iVar14, iVar0);
		}
		else
		{
			Global_1638223.f_85094[1 /*901*/][iVar0 /*15*/].f_7 = -1;
		}
		Global_1638223.f_85094[1 /*901*/][iVar0 /*15*/].f_9 = unk_0x27CDB7B0660BDAB1(iVar15, iVar0);
		Global_1638223.f_85094[1 /*901*/][iVar0 /*15*/].f_10 = unk_0x27CDB7B0660BDAB1(iVar16, iVar0);
		Global_1638223.f_85094[1 /*901*/][iVar0 /*15*/].f_11 = unk_0x27CDB7B0660BDAB1(iVar17, iVar0);
		Global_1638223.f_85094[1 /*901*/][iVar0 /*15*/].f_12 = unk_0x27CDB7B0660BDAB1(iVar18, iVar0);
		Global_1638223.f_85094[1 /*901*/][iVar0 /*15*/].f_13 = unk_0x27CDB7B0660BDAB1(iVar19, iVar0);
		Global_1638223.f_85094[1 /*901*/][iVar0 /*15*/].f_14 = unk_0x27CDB7B0660BDAB1(iVar20, iVar0);
		iVar0++;
	}
	Global_1638223.f_84187[2] = unk_0xE33C601C19270822(*iParam0, "no2");
	iVar21 = unk_0x560A2E3DA92FA8F8(*iParam0, "loc2");
	iVar22 = unk_0x560A2E3DA92FA8F8(*iParam0, "head2");
	iVar23 = unk_0x560A2E3DA92FA8F8(*iParam0, "bit2");
	iVar24 = unk_0x560A2E3DA92FA8F8(*iParam0, "veh2");
	iVar25 = unk_0x560A2E3DA92FA8F8(*iParam0, "tars2");
	iVar26 = unk_0x560A2E3DA92FA8F8(*iParam0, "ty2");
	iVar27 = unk_0x560A2E3DA92FA8F8(*iParam0, "as2");
	iVar28 = unk_0x560A2E3DA92FA8F8(*iParam0, "qu2");
	iVar29 = unk_0x560A2E3DA92FA8F8(*iParam0, "gg2");
	iVar30 = unk_0x560A2E3DA92FA8F8(*iParam0, "ar2");
	iVar0 = 0;
	while (iVar0 <= (Global_1638223.f_84187[2] - 1))
	{
		Global_1638223.f_85094[2 /*901*/][iVar0 /*15*/] = { unk_0xD458CBD2DA2C775D(iVar21, iVar0) };
		Global_1638223.f_85094[2 /*901*/][iVar0 /*15*/].f_3 = unk_0xDFB5A5508080E518(iVar22, iVar0);
		Global_1638223.f_85094[2 /*901*/][iVar0 /*15*/].f_5 = unk_0x27CDB7B0660BDAB1(iVar23, iVar0);
		if (unk_0x6E1D01265BDA6BEA(iVar24, iVar0) == 2)
		{
			Global_1638223.f_85094[2 /*901*/][iVar0 /*15*/].f_7 = unk_0x27CDB7B0660BDAB1(iVar24, iVar0);
		}
		else
		{
			Global_1638223.f_85094[2 /*901*/][iVar0 /*15*/].f_7 = -1;
		}
		Global_1638223.f_85094[2 /*901*/][iVar0 /*15*/].f_9 = unk_0x27CDB7B0660BDAB1(iVar25, iVar0);
		Global_1638223.f_85094[2 /*901*/][iVar0 /*15*/].f_10 = unk_0x27CDB7B0660BDAB1(iVar26, iVar0);
		Global_1638223.f_85094[2 /*901*/][iVar0 /*15*/].f_11 = unk_0x27CDB7B0660BDAB1(iVar27, iVar0);
		Global_1638223.f_85094[2 /*901*/][iVar0 /*15*/].f_12 = unk_0x27CDB7B0660BDAB1(iVar28, iVar0);
		Global_1638223.f_85094[2 /*901*/][iVar0 /*15*/].f_13 = unk_0x27CDB7B0660BDAB1(iVar29, iVar0);
		Global_1638223.f_85094[2 /*901*/][iVar0 /*15*/].f_14 = unk_0x27CDB7B0660BDAB1(iVar30, iVar0);
		iVar0++;
	}
	Global_1638223.f_84187[3] = unk_0xE33C601C19270822(*iParam0, "no3");
	iVar31 = unk_0x560A2E3DA92FA8F8(*iParam0, "loc3");
	iVar32 = unk_0x560A2E3DA92FA8F8(*iParam0, "head3");
	iVar33 = unk_0x560A2E3DA92FA8F8(*iParam0, "bit3");
	iVar34 = unk_0x560A2E3DA92FA8F8(*iParam0, "veh3");
	iVar35 = unk_0x560A2E3DA92FA8F8(*iParam0, "tars3");
	iVar36 = unk_0x560A2E3DA92FA8F8(*iParam0, "ty3");
	iVar37 = unk_0x560A2E3DA92FA8F8(*iParam0, "as3");
	iVar38 = unk_0x560A2E3DA92FA8F8(*iParam0, "qu3");
	iVar39 = unk_0x560A2E3DA92FA8F8(*iParam0, "gg3");
	iVar40 = unk_0x560A2E3DA92FA8F8(*iParam0, "ar3");
	iVar0 = 0;
	while (iVar0 <= (Global_1638223.f_84187[3] - 1))
	{
		Global_1638223.f_85094[3 /*901*/][iVar0 /*15*/] = { unk_0xD458CBD2DA2C775D(iVar31, iVar0) };
		Global_1638223.f_85094[3 /*901*/][iVar0 /*15*/].f_3 = unk_0xDFB5A5508080E518(iVar32, iVar0);
		Global_1638223.f_85094[3 /*901*/][iVar0 /*15*/].f_5 = unk_0x27CDB7B0660BDAB1(iVar33, iVar0);
		if (unk_0x6E1D01265BDA6BEA(iVar34, iVar0) == 2)
		{
			Global_1638223.f_85094[3 /*901*/][iVar0 /*15*/].f_7 = unk_0x27CDB7B0660BDAB1(iVar34, iVar0);
		}
		else
		{
			Global_1638223.f_85094[3 /*901*/][iVar0 /*15*/].f_7 = -1;
		}
		Global_1638223.f_85094[3 /*901*/][iVar0 /*15*/].f_9 = unk_0x27CDB7B0660BDAB1(iVar35, iVar0);
		Global_1638223.f_85094[3 /*901*/][iVar0 /*15*/].f_10 = unk_0x27CDB7B0660BDAB1(iVar36, iVar0);
		Global_1638223.f_85094[3 /*901*/][iVar0 /*15*/].f_11 = unk_0x27CDB7B0660BDAB1(iVar37, iVar0);
		Global_1638223.f_85094[3 /*901*/][iVar0 /*15*/].f_12 = unk_0x27CDB7B0660BDAB1(iVar38, iVar0);
		Global_1638223.f_85094[3 /*901*/][iVar0 /*15*/].f_13 = unk_0x27CDB7B0660BDAB1(iVar39, iVar0);
		Global_1638223.f_85094[3 /*901*/][iVar0 /*15*/].f_14 = unk_0x27CDB7B0660BDAB1(iVar40, iVar0);
		iVar0++;
	}
}

int func_174(int iParam0)
{
	if (iParam0 < 31)
	{
		return iParam0;
	}
	else if (iParam0 < 62)
	{
		return (iParam0 - 31);
	}
	return (iParam0 - func_175(iParam0) * 31);
}

int func_175(int iParam0)
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

int func_176()
{
	if (Global_1638223 == 6)
	{
		return 1;
	}
	return 0;
}

void func_177(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar1 = unk_0xD41282265B0A744C(iParam0, "ene");
	Global_1638223.f_84186 = unk_0xE33C601C19270822(iVar1, "no");
	Global_1638223.f_44909 = unk_0xE33C601C19270822(iVar1, "veh");
	iVar2 = unk_0x560A2E3DA92FA8F8(iVar1, "loc");
	iVar3 = unk_0x560A2E3DA92FA8F8(iVar1, "head");
	iVar4 = unk_0x560A2E3DA92FA8F8(iVar1, "team");
	if (Global_1638223.f_84186 > 60)
	{
		Global_1638223.f_84186 = 60;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1638223.f_84186 - 1))
	{
		if (iVar0 < 60)
		{
			Global_1638223.f_84193[iVar0 /*15*/] = { unk_0xD458CBD2DA2C775D(iVar2, iVar0) };
			Global_1638223.f_84193[iVar0 /*15*/].f_3 = unk_0xDFB5A5508080E518(iVar3, iVar0);
			Global_1638223.f_84193[iVar0 /*15*/].f_4 = unk_0x27CDB7B0660BDAB1(iVar4, iVar0);
		}
		iVar0++;
	}
	func_173(&iVar1);
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
	
	iVar2 = unk_0xD41282265B0A744C(iParam0, "dprop");
	Global_1638223.f_56587 = func_181(unk_0xE33C601C19270822(iVar2, "no"), 0, 150);
	iVar3 = unk_0x560A2E3DA92FA8F8(iVar2, "loc");
	iVar4 = unk_0x560A2E3DA92FA8F8(iVar2, "vRot");
	iVar5 = unk_0x560A2E3DA92FA8F8(iVar2, "head");
	iVar6 = unk_0x560A2E3DA92FA8F8(iVar2, "model");
	iVar7 = unk_0x560A2E3DA92FA8F8(iVar2, "asst");
	iVar8 = unk_0x560A2E3DA92FA8F8(iVar2, "asso");
	iVar9 = unk_0x560A2E3DA92FA8F8(iVar2, "asss");
	iVar10 = unk_0x560A2E3DA92FA8F8(iVar2, "pasc");
	iVar11 = unk_0x560A2E3DA92FA8F8(iVar2, "asst2");
	iVar12 = unk_0x560A2E3DA92FA8F8(iVar2, "asso2");
	iVar13 = unk_0x560A2E3DA92FA8F8(iVar2, "asss2");
	iVar14 = unk_0x560A2E3DA92FA8F8(iVar2, "pasc2");
	iVar15 = unk_0x560A2E3DA92FA8F8(iVar2, "asst3");
	iVar16 = unk_0x560A2E3DA92FA8F8(iVar2, "asso3");
	iVar17 = unk_0x560A2E3DA92FA8F8(iVar2, "asss3");
	iVar18 = unk_0x560A2E3DA92FA8F8(iVar2, "pasc3");
	iVar19 = unk_0x560A2E3DA92FA8F8(iVar2, "asst4");
	iVar20 = unk_0x560A2E3DA92FA8F8(iVar2, "asso4");
	iVar21 = unk_0x560A2E3DA92FA8F8(iVar2, "asss4");
	iVar22 = unk_0x560A2E3DA92FA8F8(iVar2, "pasc4");
	iVar23 = unk_0x560A2E3DA92FA8F8(iVar2, "prpct");
	iVar24 = unk_0x560A2E3DA92FA8F8(iVar2, "prpcr");
	iVar25 = unk_0x560A2E3DA92FA8F8(iVar2, "prcra");
	iVar26 = unk_0x560A2E3DA92FA8F8(iVar2, "prpbs");
	iVar27 = unk_0x560A2E3DA92FA8F8(iVar2, "prpkt");
	iVar28 = unk_0x560A2E3DA92FA8F8(iVar2, "dprorc");
	iVar29 = unk_0x560A2E3DA92FA8F8(iVar2, "prpdclr");
	if (Global_1638223.f_56587 > 20)
	{
		Global_1638223.f_56587 = 20;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1638223.f_56587 - 1))
	{
		Global_1638223.f_56589[iVar0 /*32*/] = { unk_0xD458CBD2DA2C775D(iVar3, iVar0) };
		Global_1638223.f_56589[iVar0 /*32*/].f_3 = { unk_0xD458CBD2DA2C775D(iVar4, iVar0) };
		Global_1638223.f_56589[iVar0 /*32*/].f_6 = unk_0xDFB5A5508080E518(iVar5, iVar0);
		Global_1638223.f_56589[iVar0 /*32*/].f_8 = -1;
		iVar1 = unk_0x27CDB7B0660BDAB1(iVar6, iVar0);
		Global_1638223.f_56589[iVar0 /*32*/].f_7 = func_180(iVar1);
		if (!unk_0x88516260CF32A1A0(Global_1638223.f_56589[iVar0 /*32*/].f_7))
		{
			Global_1638223.f_56589[iVar0 /*32*/].f_7 = joaat("prop_barrel_exp_01a");
		}
		Global_1638223.f_56589[iVar0 /*32*/].f_12 = unk_0x27CDB7B0660BDAB1(iVar7, iVar0);
		Global_1638223.f_56589[iVar0 /*32*/].f_11 = unk_0x27CDB7B0660BDAB1(iVar8, iVar0);
		Global_1638223.f_56589[iVar0 /*32*/].f_13 = unk_0x27CDB7B0660BDAB1(iVar9, iVar0);
		if (Global_1638223.f_56589[iVar0 /*32*/].f_13 == -1)
		{
			Global_1638223.f_56589[iVar0 /*32*/].f_13 = 0;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar11, iVar0) == 2)
		{
			Global_1638223.f_56589[iVar0 /*32*/].f_19 = unk_0x27CDB7B0660BDAB1(iVar11, iVar0);
			Global_1638223.f_56589[iVar0 /*32*/].f_22 = unk_0x27CDB7B0660BDAB1(iVar12, iVar0);
			Global_1638223.f_56589[iVar0 /*32*/].f_25 = unk_0x27CDB7B0660BDAB1(iVar13, iVar0);
			Global_1638223.f_56589[iVar0 /*32*/].f_20 = unk_0x27CDB7B0660BDAB1(iVar15, iVar0);
			Global_1638223.f_56589[iVar0 /*32*/].f_23 = unk_0x27CDB7B0660BDAB1(iVar16, iVar0);
			Global_1638223.f_56589[iVar0 /*32*/].f_26 = unk_0x27CDB7B0660BDAB1(iVar17, iVar0);
			Global_1638223.f_56589[iVar0 /*32*/].f_21 = unk_0x27CDB7B0660BDAB1(iVar19, iVar0);
			Global_1638223.f_56589[iVar0 /*32*/].f_24 = unk_0x27CDB7B0660BDAB1(iVar20, iVar0);
			Global_1638223.f_56589[iVar0 /*32*/].f_27 = unk_0x27CDB7B0660BDAB1(iVar21, iVar0);
		}
		else
		{
			Global_1638223.f_56589[iVar0 /*32*/].f_22 = -1;
			Global_1638223.f_56589[iVar0 /*32*/].f_19 = 0;
			Global_1638223.f_56589[iVar0 /*32*/].f_25 = 0;
			Global_1638223.f_56589[iVar0 /*32*/].f_23 = -1;
			Global_1638223.f_56589[iVar0 /*32*/].f_20 = 0;
			Global_1638223.f_56589[iVar0 /*32*/].f_26 = 0;
			Global_1638223.f_56589[iVar0 /*32*/].f_24 = -1;
			Global_1638223.f_56589[iVar0 /*32*/].f_21 = 0;
			Global_1638223.f_56589[iVar0 /*32*/].f_27 = 0;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar10, iVar0) == 2)
		{
			Global_1638223.f_56589[iVar0 /*32*/].f_14 = unk_0x27CDB7B0660BDAB1(iVar10, iVar0);
			Global_1638223.f_56589[iVar0 /*32*/].f_28 = unk_0x27CDB7B0660BDAB1(iVar14, iVar0);
			Global_1638223.f_56589[iVar0 /*32*/].f_29 = unk_0x27CDB7B0660BDAB1(iVar18, iVar0);
			Global_1638223.f_56589[iVar0 /*32*/].f_30 = unk_0x27CDB7B0660BDAB1(iVar22, iVar0);
		}
		else
		{
			Global_1638223.f_56589[iVar0 /*32*/].f_14 = 0;
			Global_1638223.f_56589[iVar0 /*32*/].f_28 = 0;
			Global_1638223.f_56589[iVar0 /*32*/].f_29 = 0;
			Global_1638223.f_56589[iVar0 /*32*/].f_30 = 0;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar24, iVar0) == 2)
		{
			Global_1638223.f_56589[iVar0 /*32*/].f_15 = unk_0x27CDB7B0660BDAB1(iVar24, iVar0);
		}
		else
		{
			Global_1638223.f_56589[iVar0 /*32*/].f_15 = -1;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar23, iVar0) == 2)
		{
			Global_1638223.f_56589[iVar0 /*32*/].f_16 = unk_0x27CDB7B0660BDAB1(iVar23, iVar0);
		}
		else
		{
			Global_1638223.f_56589[iVar0 /*32*/].f_16 = -1;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar25, iVar0) == 2)
		{
			Global_1638223.f_56589[iVar0 /*32*/].f_17 = unk_0x27CDB7B0660BDAB1(iVar25, iVar0);
		}
		else
		{
			Global_1638223.f_56589[iVar0 /*32*/].f_17 = -1;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar26, iVar0) == 2)
		{
			Global_1638223.f_56589[iVar0 /*32*/].f_18 = unk_0x27CDB7B0660BDAB1(iVar26, iVar0);
		}
		else
		{
			Global_1638223.f_56589[iVar0 /*32*/].f_18 = 0;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar28, iVar0) == 2)
		{
			Global_1638223.f_56589[iVar0 /*32*/].f_31 = unk_0x27CDB7B0660BDAB1(iVar28, iVar0);
		}
		else
		{
			Global_1638223.f_56589[iVar0 /*32*/].f_31 = 0;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar27, iVar0) == 2)
		{
			Global_1638223.f_56589[iVar0 /*32*/].f_9 = unk_0x27CDB7B0660BDAB1(iVar27, iVar0);
		}
		else
		{
			Global_1638223.f_56589[iVar0 /*32*/].f_9 = 0;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar29, iVar0) == 2)
		{
			Global_1638223.f_56589[iVar0 /*32*/].f_10 = unk_0x27CDB7B0660BDAB1(iVar29, iVar0);
		}
		else
		{
			Global_1638223.f_56589[iVar0 /*32*/].f_10 = 1;
		}
		iVar0++;
	}
	iVar30 = iVar0;
	if (func_179() || Global_1638223 == 1)
	{
		iVar0 = 0;
		while (iVar0 <= (Global_1638223.f_44971 - 1))
		{
			Global_1638223.f_56589[iVar30 /*32*/] = { Global_1638223.f_44974[iVar0 /*98*/] };
			Global_1638223.f_56589[iVar30 /*32*/].f_3 = { Global_1638223.f_44974[iVar0 /*98*/].f_4 };
			Global_1638223.f_56589[iVar30 /*32*/].f_6 = Global_1638223.f_44974[iVar0 /*98*/].f_3;
			Global_1638223.f_56589[iVar30 /*32*/].f_8 = iVar0;
			Global_1638223.f_56589[iVar30 /*32*/].f_7 = joaat("prop_container_ld_pu");
			iVar31 = 0;
			while (iVar31 <= 3)
			{
				Global_1638223.f_44974[iVar30 /*98*/].f_17[iVar31] = 0;
				Global_1638223.f_44974[iVar30 /*98*/].f_22[iVar31] = 99999;
				iVar31++;
			}
			Global_1638223.f_56588++;
			Global_1638223.f_56587++;
			iVar30++;
			iVar0++;
		}
	}
}

int func_179()
{
	if (Global_1638223 == 0 && Global_1638223.f_2 == 5)
	{
		return 1;
	}
	return 0;
}

int func_180(int iParam0)
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
	if ((unk_0x429A1F8C699BEE23() || unk_0x97FFE0491AC179A2()) || unk_0x5018862FF5D9F844())
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
	else if (unk_0xC1A8588DDF7A118E() || unk_0xCF690C88B391CFA3())
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

int func_181(int iParam0, int iParam1, int iParam2)
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

void func_182(int iParam0)
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
	var uVar52[4];
	char[] cVar57[8];
	int iVar59;
	
	iVar3 = unk_0xD41282265B0A744C(iParam0, "prop");
	Global_1638223.f_47358 = unk_0xE33C601C19270822(iVar3, "no");
	iVar4 = unk_0x560A2E3DA92FA8F8(iVar3, "loc");
	iVar5 = unk_0x560A2E3DA92FA8F8(iVar3, "vRot");
	iVar6 = unk_0x560A2E3DA92FA8F8(iVar3, "head");
	iVar7 = unk_0x560A2E3DA92FA8F8(iVar3, "model");
	iVar8 = unk_0x560A2E3DA92FA8F8(iVar3, "asst");
	iVar9 = unk_0x560A2E3DA92FA8F8(iVar3, "asso");
	iVar10 = unk_0x560A2E3DA92FA8F8(iVar3, "asss");
	iVar11 = unk_0x560A2E3DA92FA8F8(iVar3, "pasc");
	iVar12 = unk_0x560A2E3DA92FA8F8(iVar3, "asst2");
	iVar13 = unk_0x560A2E3DA92FA8F8(iVar3, "asso2");
	iVar14 = unk_0x560A2E3DA92FA8F8(iVar3, "asss2");
	iVar15 = unk_0x560A2E3DA92FA8F8(iVar3, "pasc2");
	iVar16 = unk_0x560A2E3DA92FA8F8(iVar3, "asst3");
	iVar17 = unk_0x560A2E3DA92FA8F8(iVar3, "asso3");
	iVar18 = unk_0x560A2E3DA92FA8F8(iVar3, "asss3");
	iVar19 = unk_0x560A2E3DA92FA8F8(iVar3, "pasc3");
	iVar20 = unk_0x560A2E3DA92FA8F8(iVar3, "asst4");
	iVar21 = unk_0x560A2E3DA92FA8F8(iVar3, "asso4");
	iVar22 = unk_0x560A2E3DA92FA8F8(iVar3, "asss4");
	iVar23 = unk_0x560A2E3DA92FA8F8(iVar3, "pasc4");
	iVar24 = unk_0x560A2E3DA92FA8F8(iVar3, "bpbid");
	iVar25 = unk_0x560A2E3DA92FA8F8(iVar3, "bpbip");
	iVar26 = unk_0x560A2E3DA92FA8F8(iVar3, "bpbpt");
	iVar27 = unk_0x560A2E3DA92FA8F8(iVar3, "fcuat");
	iVar28 = unk_0x560A2E3DA92FA8F8(iVar3, "aldel");
	iVar29 = unk_0x560A2E3DA92FA8F8(iVar3, "alsnd");
	iVar30 = unk_0x560A2E3DA92FA8F8(iVar3, "flvfx");
	iVar31 = unk_0x560A2E3DA92FA8F8(iVar3, "prpcl");
	iVar32 = unk_0x560A2E3DA92FA8F8(iVar3, "prplod");
	iVar33 = unk_0x560A2E3DA92FA8F8(iVar3, "prpatn");
	iVar34 = unk_0x560A2E3DA92FA8F8(iVar3, "prpasn");
	iVar35 = unk_0x560A2E3DA92FA8F8(iVar3, "prpclr");
	iVar36 = unk_0x560A2E3DA92FA8F8(iVar3, "prptsp");
	iVar37 = unk_0x560A2E3DA92FA8F8(iVar3, "prptds");
	iVar38 = unk_0x560A2E3DA92FA8F8(iVar3, "prpsba");
	iVar39 = unk_0x560A2E3DA92FA8F8(iVar3, "sndid");
	iVar40 = unk_0x560A2E3DA92FA8F8(iVar3, "sndtri");
	iVar41 = unk_0x560A2E3DA92FA8F8(iVar3, "sndlmt");
	iVar42 = unk_0x560A2E3DA92FA8F8(iVar3, "prpsnpp");
	iVar43 = unk_0x560A2E3DA92FA8F8(iVar3, "prpct");
	iVar44 = unk_0x560A2E3DA92FA8F8(iVar3, "prpcr");
	iVar45 = unk_0x560A2E3DA92FA8F8(iVar3, "prpbs2");
	iVar46 = unk_0x560A2E3DA92FA8F8(iVar3, "prcra");
	iVar47 = unk_0x560A2E3DA92FA8F8(iVar3, "prpbs");
	iVar48 = unk_0x560A2E3DA92FA8F8(iVar3, "prers");
	iVar49 = unk_0x560A2E3DA92FA8F8(iVar3, "ptfxtr");
	iVar50 = unk_0x560A2E3DA92FA8F8(iVar3, "ptfxst");
	iVar51 = unk_0x560A2E3DA92FA8F8(iVar3, "prrorc");
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		StringCopy(&cVar57, "prpsdp", 8);
		StringIntConCat(&cVar57, iVar2, 8);
		uVar52[iVar2] = unk_0x560A2E3DA92FA8F8(iVar3, &cVar57);
		iVar2++;
	}
	iVar59 = unk_0x560A2E3DA92FA8F8(iVar3, "pdip");
	if (Global_1638223.f_47358 > 150)
	{
		Global_1638223.f_47358 = 150;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1638223.f_47358 - 1))
	{
		Global_1638223.f_47359[iVar0 /*61*/] = { unk_0xD458CBD2DA2C775D(iVar4, iVar0) };
		Global_1638223.f_47359[iVar0 /*61*/].f_3 = { unk_0xD458CBD2DA2C775D(iVar5, iVar0) };
		Global_1638223.f_47359[iVar0 /*61*/].f_6 = unk_0xDFB5A5508080E518(iVar6, iVar0);
		iVar1 = unk_0x27CDB7B0660BDAB1(iVar7, iVar0);
		Global_1638223.f_47359[iVar0 /*61*/].f_7 = func_180(iVar1);
		if (!unk_0x88516260CF32A1A0(Global_1638223.f_47359[iVar0 /*61*/].f_7))
		{
			Global_1638223.f_47359[iVar0 /*61*/].f_7 = joaat("prop_const_fence02b");
		}
		Global_1638223.f_47359[iVar0 /*61*/].f_9 = unk_0x27CDB7B0660BDAB1(iVar8, iVar0);
		Global_1638223.f_47359[iVar0 /*61*/].f_8 = unk_0x27CDB7B0660BDAB1(iVar9, iVar0);
		Global_1638223.f_47359[iVar0 /*61*/].f_10 = unk_0x27CDB7B0660BDAB1(iVar10, iVar0);
		if (Global_1638223.f_47359[iVar0 /*61*/].f_10 == -1)
		{
			Global_1638223.f_47359[iVar0 /*61*/].f_10 = 0;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar24, iVar0) == 1)
		{
			Global_1638223.f_47359[iVar0 /*61*/].f_50 = unk_0x2D6F95A16E2F0D25(iVar24, iVar0);
		}
		else
		{
			Global_1638223.f_47359[iVar0 /*61*/].f_50 = 0;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar25, iVar0) == 1)
		{
			Global_1638223.f_47359[iVar0 /*61*/].f_51 = unk_0x2D6F95A16E2F0D25(iVar25, iVar0);
		}
		else
		{
			Global_1638223.f_47359[iVar0 /*61*/].f_51 = 0;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar26, iVar0) == 2)
		{
			Global_1638223.f_47359[iVar0 /*61*/].f_52 = unk_0x27CDB7B0660BDAB1(iVar26, iVar0);
		}
		else
		{
			Global_1638223.f_47359[iVar0 /*61*/].f_52 = 0;
		}
		Global_1638223.f_47359[iVar0 /*61*/].f_53 = unk_0x27CDB7B0660BDAB1(iVar27, iVar0);
		if (unk_0x6E1D01265BDA6BEA(iVar12, iVar0) == 2)
		{
			Global_1638223.f_47359[iVar0 /*61*/].f_37 = unk_0x27CDB7B0660BDAB1(iVar12, iVar0);
			Global_1638223.f_47359[iVar0 /*61*/].f_40 = unk_0x27CDB7B0660BDAB1(iVar13, iVar0);
			Global_1638223.f_47359[iVar0 /*61*/].f_43 = unk_0x27CDB7B0660BDAB1(iVar14, iVar0);
			Global_1638223.f_47359[iVar0 /*61*/].f_38 = unk_0x27CDB7B0660BDAB1(iVar16, iVar0);
			Global_1638223.f_47359[iVar0 /*61*/].f_41 = unk_0x27CDB7B0660BDAB1(iVar17, iVar0);
			Global_1638223.f_47359[iVar0 /*61*/].f_44 = unk_0x27CDB7B0660BDAB1(iVar18, iVar0);
			Global_1638223.f_47359[iVar0 /*61*/].f_39 = unk_0x27CDB7B0660BDAB1(iVar20, iVar0);
			Global_1638223.f_47359[iVar0 /*61*/].f_42 = unk_0x27CDB7B0660BDAB1(iVar21, iVar0);
			Global_1638223.f_47359[iVar0 /*61*/].f_45 = unk_0x27CDB7B0660BDAB1(iVar22, iVar0);
		}
		else
		{
			Global_1638223.f_47359[iVar0 /*61*/].f_40 = -1;
			Global_1638223.f_47359[iVar0 /*61*/].f_37 = 0;
			Global_1638223.f_47359[iVar0 /*61*/].f_43 = 0;
			Global_1638223.f_47359[iVar0 /*61*/].f_41 = -1;
			Global_1638223.f_47359[iVar0 /*61*/].f_38 = 0;
			Global_1638223.f_47359[iVar0 /*61*/].f_44 = 0;
			Global_1638223.f_47359[iVar0 /*61*/].f_42 = -1;
			Global_1638223.f_47359[iVar0 /*61*/].f_39 = 0;
			Global_1638223.f_47359[iVar0 /*61*/].f_45 = 0;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar11, iVar0) == 2)
		{
			Global_1638223.f_47359[iVar0 /*61*/].f_11 = unk_0x27CDB7B0660BDAB1(iVar11, iVar0);
			Global_1638223.f_47359[iVar0 /*61*/].f_46 = unk_0x27CDB7B0660BDAB1(iVar15, iVar0);
			Global_1638223.f_47359[iVar0 /*61*/].f_47 = unk_0x27CDB7B0660BDAB1(iVar19, iVar0);
			Global_1638223.f_47359[iVar0 /*61*/].f_48 = unk_0x27CDB7B0660BDAB1(iVar23, iVar0);
		}
		else
		{
			Global_1638223.f_47359[iVar0 /*61*/].f_11 = 0;
			Global_1638223.f_47359[iVar0 /*61*/].f_46 = 0;
			Global_1638223.f_47359[iVar0 /*61*/].f_47 = 0;
			Global_1638223.f_47359[iVar0 /*61*/].f_48 = 0;
		}
		Global_1638223.f_47359[iVar0 /*61*/].f_12 = unk_0x27CDB7B0660BDAB1(iVar28, iVar0);
		if (Global_1638223.f_47359[iVar0 /*61*/].f_12 > 0 && Global_1638223.f_47359[iVar0 /*61*/].f_12 < 1000)
		{
			Global_1638223.f_47359[iVar0 /*61*/].f_12 = func_183(Global_1638223.f_47359[iVar0 /*61*/].f_12);
		}
		Global_1638223.f_47359[iVar0 /*61*/].f_13 = unk_0x27CDB7B0660BDAB1(iVar29, iVar0);
		Global_1638223.f_47359[iVar0 /*61*/].f_14 = unk_0x27CDB7B0660BDAB1(iVar30, iVar0);
		Global_1638223.f_47359[iVar0 /*61*/].f_15 = unk_0x27CDB7B0660BDAB1(iVar31, iVar0);
		Global_1638223.f_47359[iVar0 /*61*/].f_32 = unk_0xDFB5A5508080E518(iVar36, iVar0);
		Global_1638223.f_47359[iVar0 /*61*/].f_33 = unk_0xDFB5A5508080E518(iVar37, iVar0);
		Global_1638223.f_47359[iVar0 /*61*/].f_34 = unk_0x27CDB7B0660BDAB1(iVar38, iVar0);
		Global_1638223.f_47359[iVar0 /*61*/].f_54 = unk_0x27CDB7B0660BDAB1(iVar39, iVar0);
		Global_1638223.f_47359[iVar0 /*61*/].f_55 = unk_0x27CDB7B0660BDAB1(iVar40, iVar0);
		Global_1638223.f_47359[iVar0 /*61*/].f_56 = unk_0x27CDB7B0660BDAB1(iVar41, iVar0);
		if (unk_0x6E1D01265BDA6BEA(iVar32, iVar0) == 2)
		{
			Global_1638223.f_47359[iVar0 /*61*/].f_22 = unk_0x27CDB7B0660BDAB1(iVar32, iVar0);
		}
		else
		{
			Global_1638223.f_47359[iVar0 /*61*/].f_22 = -1;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar33, iVar0) == 2)
		{
			Global_1638223.f_47359[iVar0 /*61*/].f_23 = unk_0x27CDB7B0660BDAB1(iVar33, iVar0);
		}
		else
		{
			Global_1638223.f_47359[iVar0 /*61*/].f_23 = 0;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar34, iVar0) == 2)
		{
			Global_1638223.f_47359[iVar0 /*61*/].f_24 = unk_0x27CDB7B0660BDAB1(iVar34, iVar0);
		}
		else
		{
			Global_1638223.f_47359[iVar0 /*61*/].f_24 = 0;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar35, iVar0) == 2)
		{
			Global_1638223.f_47359[iVar0 /*61*/].f_25 = unk_0x27CDB7B0660BDAB1(iVar35, iVar0);
		}
		else
		{
			Global_1638223.f_47359[iVar0 /*61*/].f_25 = 1;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar36, iVar0) == 3)
		{
			Global_1638223.f_47359[iVar0 /*61*/].f_32 = unk_0xDFB5A5508080E518(iVar36, iVar0);
		}
		else
		{
			Global_1638223.f_47359[iVar0 /*61*/].f_32 = 0f;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar37, iVar0) == 3)
		{
			Global_1638223.f_47359[iVar0 /*61*/].f_33 = unk_0xDFB5A5508080E518(iVar37, iVar0);
		}
		else
		{
			Global_1638223.f_47359[iVar0 /*61*/].f_33 = 0.4f;
		}
		if (unk_0x27CDB7B0660BDAB1(iVar38, iVar0) > 5)
		{
			if (unk_0x27CDB7B0660BDAB1(iVar38, iVar0) == 15)
			{
				Global_1638223.f_47359[iVar0 /*61*/].f_34 = 1;
			}
			if (unk_0x27CDB7B0660BDAB1(iVar38, iVar0) == 25)
			{
				Global_1638223.f_47359[iVar0 /*61*/].f_34 = 2;
			}
			if (unk_0x27CDB7B0660BDAB1(iVar38, iVar0) == 35)
			{
				Global_1638223.f_47359[iVar0 /*61*/].f_34 = 3;
			}
			if (unk_0x27CDB7B0660BDAB1(iVar38, iVar0) == 45)
			{
				Global_1638223.f_47359[iVar0 /*61*/].f_34 = 4;
			}
			if (unk_0x27CDB7B0660BDAB1(iVar38, iVar0) == 55)
			{
				Global_1638223.f_47359[iVar0 /*61*/].f_34 = 5;
			}
			if (unk_0x27CDB7B0660BDAB1(iVar38, iVar0) == 16)
			{
				Global_1638223.f_47359[iVar0 /*61*/].f_34 = 3;
			}
			if (unk_0x27CDB7B0660BDAB1(iVar38, iVar0) == 30)
			{
				Global_1638223.f_47359[iVar0 /*61*/].f_34 = 2;
			}
			if (unk_0x27CDB7B0660BDAB1(iVar38, iVar0) == 44)
			{
				Global_1638223.f_47359[iVar0 /*61*/].f_34 = 1;
			}
		}
		else if (unk_0x6E1D01265BDA6BEA(iVar38, iVar0) == 2)
		{
			Global_1638223.f_47359[iVar0 /*61*/].f_34 = unk_0x27CDB7B0660BDAB1(iVar38, iVar0);
		}
		else
		{
			Global_1638223.f_47359[iVar0 /*61*/].f_34 = 2;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar39, iVar0) == 2)
		{
			Global_1638223.f_47359[iVar0 /*61*/].f_54 = unk_0x27CDB7B0660BDAB1(iVar39, iVar0);
		}
		else
		{
			Global_1638223.f_47359[iVar0 /*61*/].f_54 = 0;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar40, iVar0) == 2)
		{
			Global_1638223.f_47359[iVar0 /*61*/].f_55 = unk_0x27CDB7B0660BDAB1(iVar40, iVar0);
		}
		else
		{
			Global_1638223.f_47359[iVar0 /*61*/].f_55 = 0;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar41, iVar0) == 2)
		{
			Global_1638223.f_47359[iVar0 /*61*/].f_56 = unk_0x27CDB7B0660BDAB1(iVar41, iVar0);
		}
		else
		{
			Global_1638223.f_47359[iVar0 /*61*/].f_56 = 0;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar42, iVar0) == 2)
		{
			Global_1638223.f_47359[iVar0 /*61*/].f_26 = unk_0x27CDB7B0660BDAB1(iVar42, iVar0);
		}
		else
		{
			Global_1638223.f_47359[iVar0 /*61*/].f_26 = 0;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar49, iVar0) == 3)
		{
			Global_1638223.f_47359[iVar0 /*61*/].f_35 = unk_0xDFB5A5508080E518(iVar49, iVar0);
		}
		else
		{
			Global_1638223.f_47359[iVar0 /*61*/].f_35 = 0f;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar44, iVar0) == 2)
		{
			Global_1638223.f_47359[iVar0 /*61*/].f_16 = unk_0x27CDB7B0660BDAB1(iVar44, iVar0);
		}
		else
		{
			Global_1638223.f_47359[iVar0 /*61*/].f_16 = -1;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar43, iVar0) == 2)
		{
			Global_1638223.f_47359[iVar0 /*61*/].f_17 = unk_0x27CDB7B0660BDAB1(iVar43, iVar0);
		}
		else
		{
			Global_1638223.f_47359[iVar0 /*61*/].f_17 = -1;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar46, iVar0) == 2)
		{
			Global_1638223.f_47359[iVar0 /*61*/].f_18 = unk_0x27CDB7B0660BDAB1(iVar46, iVar0);
		}
		else
		{
			Global_1638223.f_47359[iVar0 /*61*/].f_18 = -1;
		}
		Global_1638223.f_47359[iVar0 /*61*/].f_19 = unk_0x27CDB7B0660BDAB1(iVar47, iVar0);
		Global_1638223.f_47359[iVar0 /*61*/].f_20 = unk_0x27CDB7B0660BDAB1(iVar45, iVar0);
		if (unk_0x6E1D01265BDA6BEA(iVar50, iVar0) == 2)
		{
			Global_1638223.f_47359[iVar0 /*61*/].f_36 = unk_0x27CDB7B0660BDAB1(iVar50, iVar0);
		}
		else
		{
			Global_1638223.f_47359[iVar0 /*61*/].f_36 = 0;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar51, iVar0) == 2)
		{
			Global_1638223.f_47359[iVar0 /*61*/].f_60 = unk_0x27CDB7B0660BDAB1(iVar51, iVar0);
		}
		else
		{
			Global_1638223.f_47359[iVar0 /*61*/].f_60 = 0;
		}
		Global_1638223.f_47359[iVar0 /*61*/].f_21 = unk_0x27CDB7B0660BDAB1(iVar48, iVar0);
		iVar2 = 0;
		while (iVar2 <= 3)
		{
			if (unk_0x6E1D01265BDA6BEA(uVar52[iVar2], iVar0) == 2)
			{
				Global_1638223.f_47359[iVar0 /*61*/].f_27[iVar2] = unk_0x27CDB7B0660BDAB1(uVar52[iVar2], iVar0);
			}
			else
			{
				Global_1638223.f_47359[iVar0 /*61*/].f_27[iVar2] = -1;
			}
			iVar2++;
		}
		Global_1638223.f_47359[iVar0 /*61*/].f_59 = unk_0x27CDB7B0660BDAB1(iVar59, iVar0);
		iVar0++;
	}
}

int func_183(int iParam0)
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

void func_184(int iParam0)
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
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	int iVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	int iVar85;
	int iVar86;
	var uVar87[4];
	var uVar92[4];
	var uVar97[4];
	var uVar102[4];
	var uVar107[4];
	var uVar112[4];
	var uVar117[4];
	var uVar122[4];
	var uVar127[2];
	var uVar130[2];
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
	
	iVar6 = unk_0xD41282265B0A744C(iParam0, "veh");
	Global_1638223.f_59830 = unk_0xE33C601C19270822(iVar6, "no");
	Global_1638223.f_59831 = unk_0xE33C601C19270822(iVar6, "time");
	Global_1638223.f_59832 = unk_0xE33C601C19270822(iVar6, "pal");
	iVar7 = unk_0xD41282265B0A744C(iParam0, "vhrls");
	if (iVar7 != 0)
	{
		iVar3 = 0;
		while (iVar3 <= (Global_1638223.f_32 - 1))
		{
			iVar0 = 0;
			while (iVar0 <= (Global_1638223.f_94[iVar3 /*9207*/].f_59 - 1))
			{
				StringCopy(&cVar4, "vhr", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				Global_1638223.f_65115[iVar0 /*5*/][iVar3] = unk_0xE33C601C19270822(iVar7, &cVar4);
				StringCopy(&cVar4, "vrs", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				Global_1638223.f_37016[iVar0 /*5*/][iVar3] = unk_0xE33C601C19270822(iVar7, &cVar4);
				StringCopy(&cVar4, "rkt", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				if (unk_0x7ADD5F9CC9AA2359(iVar7, &cVar4) == 2)
				{
					Global_1638223.f_37102[iVar0 /*5*/][iVar3] = unk_0xE33C601C19270822(iVar7, &cVar4);
				}
				else
				{
					Global_1638223.f_37102[iVar0 /*5*/][iVar3] = 0;
				}
				StringCopy(&cVar4, "bst", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				if (unk_0x7ADD5F9CC9AA2359(iVar7, &cVar4) == 2)
				{
					Global_1638223.f_37188[iVar0 /*5*/][iVar3] = unk_0xE33C601C19270822(iVar7, &cVar4);
				}
				else
				{
					Global_1638223.f_37188[iVar0 /*5*/][iVar3] = 0;
				}
				StringCopy(&cVar4, "rpr", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				if (unk_0x7ADD5F9CC9AA2359(iVar7, &cVar4) == 2)
				{
					Global_1638223.f_37274[iVar0 /*5*/][iVar3] = unk_0xE33C601C19270822(iVar7, &cVar4);
				}
				else
				{
					Global_1638223.f_37274[iVar0 /*5*/][iVar3] = 0;
				}
				StringCopy(&cVar4, "spk", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				if (unk_0x7ADD5F9CC9AA2359(iVar7, &cVar4) == 2)
				{
					Global_1638223.f_37360[iVar0 /*5*/][iVar3] = unk_0xE33C601C19270822(iVar7, &cVar4);
				}
				else
				{
					Global_1638223.f_37360[iVar0 /*5*/][iVar3] = 0;
				}
				StringCopy(&cVar4, "tmr", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				if (unk_0x7ADD5F9CC9AA2359(iVar7, &cVar4) == 2)
				{
					Global_1638223.f_37446[iVar0 /*5*/][iVar3] = unk_0xE33C601C19270822(iVar7, &cVar4);
				}
				else
				{
					Global_1638223.f_37446[iVar0 /*5*/][iVar3] = 1500;
				}
				StringCopy(&cVar4, "bsd", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				if (unk_0x7ADD5F9CC9AA2359(iVar7, &cVar4) == 2)
				{
					Global_1638223.f_37532[iVar0 /*5*/][iVar3] = unk_0xE33C601C19270822(iVar7, &cVar4);
				}
				else
				{
					Global_1638223.f_37532[iVar0 /*5*/][iVar3] = 1400;
				}
				StringCopy(&cVar4, "bss", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				if (unk_0x7ADD5F9CC9AA2359(iVar7, &cVar4) == 2)
				{
					Global_1638223.f_37618[iVar0 /*5*/][iVar3] = unk_0xE33C601C19270822(iVar7, &cVar4);
				}
				else
				{
					Global_1638223.f_37618[iVar0 /*5*/][iVar3] = 35;
				}
				iVar0++;
			}
			iVar3++;
		}
	}
	iVar8 = unk_0x560A2E3DA92FA8F8(iVar6, "loc");
	iVar9 = unk_0x560A2E3DA92FA8F8(iVar6, "head");
	iVar16 = unk_0x560A2E3DA92FA8F8(iVar6, "model");
	iVar17 = unk_0x560A2E3DA92FA8F8(iVar6, "col");
	iVar18 = unk_0x560A2E3DA92FA8F8(iVar6, "rsp");
	if (func_124())
	{
		iVar10 = unk_0x560A2E3DA92FA8F8(iVar6, "vrr");
		iVar11 = unk_0x560A2E3DA92FA8F8(iVar6, "vrmr");
		iVar12 = unk_0x560A2E3DA92FA8F8(iVar6, "vsnt");
		iVar13 = unk_0x560A2E3DA92FA8F8(iVar6, "vsnei");
		iVar14 = unk_0x560A2E3DA92FA8F8(iVar6, "v2sp");
		iVar15 = unk_0x560A2E3DA92FA8F8(iVar6, "v2sh");
		iVar19 = unk_0x560A2E3DA92FA8F8(iVar6, "objt");
		iVar20 = unk_0x560A2E3DA92FA8F8(iVar6, "team");
		iVar21 = unk_0x560A2E3DA92FA8F8(iVar6, "spwn");
		iVar22 = unk_0x560A2E3DA92FA8F8(iVar6, "objt2");
		iVar23 = unk_0x560A2E3DA92FA8F8(iVar6, "team2");
		iVar24 = unk_0x560A2E3DA92FA8F8(iVar6, "spwn2");
		iVar25 = unk_0x560A2E3DA92FA8F8(iVar6, "objt3");
		iVar26 = unk_0x560A2E3DA92FA8F8(iVar6, "team3");
		iVar27 = unk_0x560A2E3DA92FA8F8(iVar6, "spwn3");
		iVar28 = unk_0x560A2E3DA92FA8F8(iVar6, "objt4");
		iVar29 = unk_0x560A2E3DA92FA8F8(iVar6, "team4");
		iVar30 = unk_0x560A2E3DA92FA8F8(iVar6, "spwn4");
		Global_1638223.f_47357 = unk_0xE33C601C19270822(iVar6, "nocr");
		iVar31 = unk_0x560A2E3DA92FA8F8(iVar6, "crgdm");
		iVar32 = unk_0x560A2E3DA92FA8F8(iVar6, "liv");
		iVar33 = unk_0x560A2E3DA92FA8F8(iVar6, "modps");
		iVar34 = unk_0x560A2E3DA92FA8F8(iVar6, "enveff");
		iVar35 = unk_0x560A2E3DA92FA8F8(iVar6, "colc");
		iVar36 = unk_0x560A2E3DA92FA8F8(iVar6, "col2");
		iVar37 = unk_0x560A2E3DA92FA8F8(iVar6, "col3");
		iVar38 = unk_0x560A2E3DA92FA8F8(iVar6, "vmodtur");
		iVar39 = unk_0x560A2E3DA92FA8F8(iVar6, "vmodarm");
		Global_1638223.f_59833 = unk_0xE33C601C19270822(iVar6, "burst");
		iVar40 = unk_0x560A2E3DA92FA8F8(iVar6, "hlth");
		iVar41 = unk_0x560A2E3DA92FA8F8(iVar6, "enghp");
		iVar42 = unk_0x560A2E3DA92FA8F8(iVar6, "hbir");
		iVar43 = unk_0x560A2E3DA92FA8F8(iVar6, "hbor");
		iVar44 = unk_0x560A2E3DA92FA8F8(iVar6, "ptrhp");
		iVar45 = unk_0x560A2E3DA92FA8F8(iVar6, "bdyhp");
		iVar46 = unk_0x560A2E3DA92FA8F8(iVar6, "hmrh");
		iVar47 = unk_0x560A2E3DA92FA8F8(iVar6, "htrh");
		iVar48 = unk_0x560A2E3DA92FA8F8(iVar6, "ior");
		iVar49 = unk_0x560A2E3DA92FA8F8(iVar6, "iort");
		iVar50 = unk_0x560A2E3DA92FA8F8(iVar6, "vddra");
		iVar51 = unk_0x560A2E3DA92FA8F8(iVar6, "vddta");
		iVar52 = unk_0x560A2E3DA92FA8F8(iVar6, "vddrl");
		iVar53 = unk_0x560A2E3DA92FA8F8(iVar6, "vddwda");
		iVar54 = unk_0x560A2E3DA92FA8F8(iVar6, "drbs");
		iVar55 = unk_0x560A2E3DA92FA8F8(iVar6, "vbs2");
		iVar56 = unk_0x560A2E3DA92FA8F8(iVar6, "vbs3");
		iVar57 = unk_0x560A2E3DA92FA8F8(iVar6, "vbs4");
		iVar58 = unk_0x560A2E3DA92FA8F8(iVar6, "vbs5");
		iVar59 = unk_0x560A2E3DA92FA8F8(iVar6, "vbs6");
		iVar60 = unk_0x560A2E3DA92FA8F8(iVar6, "vebs");
		iVar61 = unk_0x560A2E3DA92FA8F8(iVar6, "vehct");
		iVar64 = unk_0x560A2E3DA92FA8F8(iVar6, "vhcra");
		iVar62 = unk_0x560A2E3DA92FA8F8(iVar6, "vehcr");
		iVar63 = unk_0x560A2E3DA92FA8F8(iVar6, "vehcv");
		iVar65 = unk_0x560A2E3DA92FA8F8(iVar6, "vehbc");
		iVar66 = unk_0x560A2E3DA92FA8F8(iVar6, "vehbr");
		iVar67 = unk_0x560A2E3DA92FA8F8(iVar6, "vehbso");
		iVar68 = unk_0x560A2E3DA92FA8F8(iVar6, "vehbs");
		iVar69 = unk_0x560A2E3DA92FA8F8(iVar6, "vehfbr");
		iVar70 = unk_0x560A2E3DA92FA8F8(iVar6, "vehfbd");
		iVar71 = unk_0x560A2E3DA92FA8F8(iVar6, "vspdl");
		iVar72 = unk_0x560A2E3DA92FA8F8(iVar6, "vsgr");
		iVar73 = unk_0x560A2E3DA92FA8F8(iVar6, "vssgr");
		iVar74 = unk_0x560A2E3DA92FA8F8(iVar6, "vcnm");
		iVar75 = unk_0x560A2E3DA92FA8F8(iVar6, "vehap");
		iVar76 = unk_0x560A2E3DA92FA8F8(iVar6, "vehat");
		iVar77 = unk_0x560A2E3DA92FA8F8(iVar6, "vehdu");
		iVar78 = unk_0x560A2E3DA92FA8F8(iVar6, "vldt");
		iVar79 = unk_0x560A2E3DA92FA8F8(iVar6, "vldr");
		iVar80 = unk_0x560A2E3DA92FA8F8(iVar6, "cutsc");
		iVar81 = unk_0x560A2E3DA92FA8F8(iVar6, "cutsh");
		iVar85 = unk_0x560A2E3DA92FA8F8(iVar6, "nmpass");
		iVar86 = unk_0x560A2E3DA92FA8F8(iVar6, "nmfail");
		iVar82 = unk_0x560A2E3DA92FA8F8(iVar6, "vmcp");
		iVar83 = unk_0x560A2E3DA92FA8F8(iVar6, "vmcf");
		iVar84 = unk_0x560A2E3DA92FA8F8(iVar6, "gotor");
		iVar134 = unk_0x560A2E3DA92FA8F8(iVar6, "vphrang");
		iVar135 = unk_0x560A2E3DA92FA8F8(iVar6, "vwpndmg");
		iVar136 = unk_0x560A2E3DA92FA8F8(iVar6, "vldv");
		iVar137 = unk_0x560A2E3DA92FA8F8(iVar6, "vtmhrn");
		iVar138 = unk_0x560A2E3DA92FA8F8(iVar6, "vdrpovr");
		iVar139 = unk_0x560A2E3DA92FA8F8(iVar6, "vdvrfe");
		iVar140 = unk_0x560A2E3DA92FA8F8(iVar6, "vdeitc");
		iVar141 = unk_0x560A2E3DA92FA8F8(iVar6, "vdspn");
		iVar142 = unk_0x560A2E3DA92FA8F8(iVar6, "vdcbal");
		iVar143 = unk_0x560A2E3DA92FA8F8(iVar6, "vdcbdt");
		iVar144 = unk_0x560A2E3DA92FA8F8(iVar6, "vrhlor");
		iVar145 = unk_0x560A2E3DA92FA8F8(iVar6, "vddfs");
		iVar146 = unk_0x560A2E3DA92FA8F8(iVar6, "vrorc");
		iVar147 = unk_0x560A2E3DA92FA8F8(iVar6, "cbvest");
		iVar148 = unk_0x560A2E3DA92FA8F8(iVar6, "cbves");
		iVar149 = unk_0x560A2E3DA92FA8F8(iVar6, "hvcr");
		iVar150 = unk_0x560A2E3DA92FA8F8(iVar6, "cdtor");
		iVar151 = unk_0x560A2E3DA92FA8F8(iVar6, "cvd");
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			StringCopy(&cVar4, "vrstp", 8);
			if (iVar1 > 0)
			{
				StringIntConCat(&cVar4, iVar1, 8);
			}
			uVar127[iVar1] = unk_0x560A2E3DA92FA8F8(iVar6, &cVar4);
			StringCopy(&cVar4, "frsth", 8);
			if (iVar1 > 0)
			{
				StringIntConCat(&cVar4, iVar1, 8);
			}
			uVar130[iVar1] = unk_0x560A2E3DA92FA8F8(iVar6, &cVar4);
			iVar1++;
		}
		iVar133 = unk_0x560A2E3DA92FA8F8(iVar6, "ubrkdb");
		iVar3 = 0;
		while (iVar3 <= (Global_1638223.f_32 - 1))
		{
			if (iVar3 < 4)
			{
				StringCopy(&cVar4, "rule", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar87[iVar3] = unk_0x560A2E3DA92FA8F8(iVar6, &cVar4);
				StringCopy(&cVar4, "pri", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar92[iVar3] = unk_0x560A2E3DA92FA8F8(iVar6, &cVar4);
				StringCopy(&cVar4, "tsp", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar97[iVar3] = unk_0x560A2E3DA92FA8F8(iVar6, &cVar4);
				StringCopy(&cVar4, "jtop", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar102[iVar3] = unk_0x560A2E3DA92FA8F8(iVar6, &cVar4);
				StringCopy(&cVar4, "jtof", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar107[iVar3] = unk_0x560A2E3DA92FA8F8(iVar6, &cVar4);
				StringCopy(&cVar4, "vcbf", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar112[iVar3] = unk_0x560A2E3DA92FA8F8(iVar6, &cVar4);
				StringCopy(&cVar4, "vcbt", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar117[iVar3] = unk_0x560A2E3DA92FA8F8(iVar6, &cVar4);
				StringCopy(&cVar4, "vcrr", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar122[iVar3] = unk_0x560A2E3DA92FA8F8(iVar6, &cVar4);
			}
			iVar3++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1638223.f_59830 - 1))
	{
		if (iVar0 < 32)
		{
			Global_1638223.f_59834[iVar0 /*160*/] = { unk_0xD458CBD2DA2C775D(iVar8, iVar0) };
			Global_1638223.f_59834[iVar0 /*160*/].f_3 = unk_0xDFB5A5508080E518(iVar9, iVar0);
			iVar2 = unk_0x27CDB7B0660BDAB1(iVar16, iVar0);
			Global_1638223.f_59834[iVar0 /*160*/].f_12 = iVar2;
			if (!func_121())
			{
				if (!unk_0x88516260CF32A1A0(Global_1638223.f_59834[iVar0 /*160*/].f_12))
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_12 = joaat("baller");
				}
			}
			if (Global_1638223.f_59834[iVar0 /*160*/].f_12 == joaat("sanctus") && !Global_262145.f_15548)
			{
				Global_1638223.f_59834[iVar0 /*160*/].f_12 = joaat("akuma");
			}
			Global_1638223.f_59834[iVar0 /*160*/].f_23 = unk_0x27CDB7B0660BDAB1(iVar17, iVar0);
			Global_1638223.f_59834[iVar0 /*160*/].f_30 = unk_0x27CDB7B0660BDAB1(iVar18, iVar0);
			if (func_124())
			{
				if (((unk_0x6E1D01265BDA6BEA(iVar10, iVar0) == 3 && unk_0x6E1D01265BDA6BEA(iVar11, iVar0) == 3) && unk_0x6E1D01265BDA6BEA(iVar12, iVar0) == 2) && unk_0x6E1D01265BDA6BEA(iVar13, iVar0) == 2)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_4 = unk_0xDFB5A5508080E518(iVar10, iVar0);
					Global_1638223.f_59834[iVar0 /*160*/].f_5 = unk_0xDFB5A5508080E518(iVar11, iVar0);
					Global_1638223.f_59834[iVar0 /*160*/].f_6 = unk_0x27CDB7B0660BDAB1(iVar12, iVar0);
					Global_1638223.f_59834[iVar0 /*160*/].f_7 = unk_0x27CDB7B0660BDAB1(iVar13, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_4 = 100f;
					Global_1638223.f_59834[iVar0 /*160*/].f_5 = 0f;
					Global_1638223.f_59834[iVar0 /*160*/].f_6 = 0;
					Global_1638223.f_59834[iVar0 /*160*/].f_7 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar14, iVar0) == 5 && unk_0x6E1D01265BDA6BEA(iVar15, iVar0) == 3)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_8 = { unk_0xD458CBD2DA2C775D(iVar14, iVar0) };
					Global_1638223.f_59834[iVar0 /*160*/].f_11 = unk_0xDFB5A5508080E518(iVar15, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_8 = { 0f, 0f, 0f };
					Global_1638223.f_59834[iVar0 /*160*/].f_11 = 0f;
				}
				Global_1638223.f_59834[iVar0 /*160*/].f_43 = unk_0x27CDB7B0660BDAB1(iVar19, iVar0);
				Global_1638223.f_59834[iVar0 /*160*/].f_44 = unk_0x27CDB7B0660BDAB1(iVar20, iVar0);
				Global_1638223.f_59834[iVar0 /*160*/].f_45 = unk_0x27CDB7B0660BDAB1(iVar21, iVar0);
				if (unk_0x6E1D01265BDA6BEA(iVar22, iVar0) == 2)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_82 = unk_0x27CDB7B0660BDAB1(iVar22, iVar0);
					Global_1638223.f_59834[iVar0 /*160*/].f_79 = unk_0x27CDB7B0660BDAB1(iVar23, iVar0);
					Global_1638223.f_59834[iVar0 /*160*/].f_85 = unk_0x27CDB7B0660BDAB1(iVar24, iVar0);
					Global_1638223.f_59834[iVar0 /*160*/].f_83 = unk_0x27CDB7B0660BDAB1(iVar25, iVar0);
					Global_1638223.f_59834[iVar0 /*160*/].f_80 = unk_0x27CDB7B0660BDAB1(iVar26, iVar0);
					Global_1638223.f_59834[iVar0 /*160*/].f_86 = unk_0x27CDB7B0660BDAB1(iVar27, iVar0);
					Global_1638223.f_59834[iVar0 /*160*/].f_84 = unk_0x27CDB7B0660BDAB1(iVar28, iVar0);
					Global_1638223.f_59834[iVar0 /*160*/].f_81 = unk_0x27CDB7B0660BDAB1(iVar29, iVar0);
					Global_1638223.f_59834[iVar0 /*160*/].f_87 = unk_0x27CDB7B0660BDAB1(iVar30, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_82 = -1;
					Global_1638223.f_59834[iVar0 /*160*/].f_79 = 0;
					Global_1638223.f_59834[iVar0 /*160*/].f_85 = 0;
					Global_1638223.f_59834[iVar0 /*160*/].f_83 = -1;
					Global_1638223.f_59834[iVar0 /*160*/].f_80 = 0;
					Global_1638223.f_59834[iVar0 /*160*/].f_86 = 0;
					Global_1638223.f_59834[iVar0 /*160*/].f_84 = -1;
					Global_1638223.f_59834[iVar0 /*160*/].f_81 = 0;
					Global_1638223.f_59834[iVar0 /*160*/].f_87 = 0;
				}
				Global_1638223.f_59834[iVar0 /*160*/].f_27 = unk_0x27CDB7B0660BDAB1(iVar32, iVar0);
				if (unk_0x6E1D01265BDA6BEA(iVar33, iVar0) == 2)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_28 = unk_0x27CDB7B0660BDAB1(iVar33, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_28 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar34, iVar0) == 3)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_29 = unk_0xDFB5A5508080E518(iVar34, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_29 = -1f;
				}
				Global_1638223.f_59834[iVar0 /*160*/].f_31 = unk_0x27CDB7B0660BDAB1(iVar40, iVar0);
				if (unk_0x6E1D01265BDA6BEA(iVar41, iVar0) == 3 && unk_0xDFB5A5508080E518(iVar41, iVar0) > 0f)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_32 = unk_0xDFB5A5508080E518(iVar41, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_32 = 1001f;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar42, iVar0) == 2 && unk_0x27CDB7B0660BDAB1(iVar42, iVar0) > 0)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_33 = unk_0x27CDB7B0660BDAB1(iVar42, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_33 = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar43, iVar0) == 2 && unk_0x27CDB7B0660BDAB1(iVar43, iVar0) > -1)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_34 = unk_0x27CDB7B0660BDAB1(iVar43, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_34 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar31, iVar0) == 3 && unk_0xDFB5A5508080E518(iVar31, iVar0) >= 0f)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_39 = unk_0xDFB5A5508080E518(iVar31, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_39 = 1.5f;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar50, iVar0) == 3)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_151 = unk_0xDFB5A5508080E518(iVar50, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_151 = -1f;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar51, iVar0) == 2)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_152 = unk_0x27CDB7B0660BDAB1(iVar51, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_152 = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar52, iVar0) == 2)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_153 = unk_0x27CDB7B0660BDAB1(iVar52, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_153 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar53, iVar0) == 2)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_154 = unk_0x27CDB7B0660BDAB1(iVar53, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_154 = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar44, iVar0) == 3 && unk_0xDFB5A5508080E518(iVar44, iVar0) > 0f)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_35 = unk_0xDFB5A5508080E518(iVar44, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_35 = 1001f;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar45, iVar0) == 3 && unk_0xDFB5A5508080E518(iVar45, iVar0) > 0f)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_36 = unk_0xDFB5A5508080E518(iVar45, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_36 = 1001f;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar46, iVar0) == 3 && unk_0xDFB5A5508080E518(iVar46, iVar0) > 0f)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_37 = unk_0xDFB5A5508080E518(iVar46, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_37 = 1001f;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar47, iVar0) == 3 && unk_0xDFB5A5508080E518(iVar47, iVar0) > 0f)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_38 = unk_0xDFB5A5508080E518(iVar47, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_38 = 1001f;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar48, iVar0) == 2)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_149 = unk_0x27CDB7B0660BDAB1(iVar48, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_149 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar49, iVar0) == 2)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_150 = unk_0x27CDB7B0660BDAB1(iVar49, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_150 = 0;
				}
				Global_1638223.f_59834[iVar0 /*160*/].f_48 = unk_0x27CDB7B0660BDAB1(iVar54, iVar0);
				Global_1638223.f_59834[iVar0 /*160*/].f_49 = unk_0x27CDB7B0660BDAB1(iVar55, iVar0);
				if (unk_0x6E1D01265BDA6BEA(iVar56, iVar0) == 2)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_50 = unk_0x27CDB7B0660BDAB1(iVar56, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_50 = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar57, iVar0) == 2)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_51 = unk_0x27CDB7B0660BDAB1(iVar57, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_51 = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar58, iVar0) == 2)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_52 = unk_0x27CDB7B0660BDAB1(iVar58, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_52 = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar59, iVar0) == 2)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_53 = unk_0x27CDB7B0660BDAB1(iVar59, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_53 = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar35, iVar0) == 2)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_26 = unk_0x27CDB7B0660BDAB1(iVar35, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_26 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar38, iVar0) == 2)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_147 = unk_0x27CDB7B0660BDAB1(iVar38, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_147 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar39, iVar0) == 2)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_148 = unk_0x27CDB7B0660BDAB1(iVar39, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_148 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar36, iVar0) == 2)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_24 = unk_0x27CDB7B0660BDAB1(iVar36, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_24 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar37, iVar0) == 2)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_25 = unk_0x27CDB7B0660BDAB1(iVar37, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_25 = -1;
				}
				Global_1638223.f_59834[iVar0 /*160*/].f_116 = unk_0x27CDB7B0660BDAB1(iVar60, iVar0);
				if (unk_0x6E1D01265BDA6BEA(iVar62, iVar0) == 2)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_69 = unk_0x27CDB7B0660BDAB1(iVar62, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_69 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar61, iVar0) == 2)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_70 = unk_0x27CDB7B0660BDAB1(iVar61, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_70 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar64, iVar0) == 2)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_71 = unk_0x27CDB7B0660BDAB1(iVar64, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_71 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar63, iVar0) == 2)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_72 = unk_0x27CDB7B0660BDAB1(iVar63, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_72 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar71, iVar0) == 2)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_78 = unk_0x27CDB7B0660BDAB1(iVar71, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_78 = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar72, iVar0) == 2)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_46 = unk_0x27CDB7B0660BDAB1(iVar72, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_46 = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar73, iVar0) == 2)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_47 = unk_0x27CDB7B0660BDAB1(iVar73, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_47 = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar74, iVar0) == 2)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_88 = unk_0x27CDB7B0660BDAB1(iVar74, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_88 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar82, iVar0) == 2)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_106 = unk_0x27CDB7B0660BDAB1(iVar82, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_106 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar83, iVar0) == 2)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_107 = unk_0x27CDB7B0660BDAB1(iVar83, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_107 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar75, iVar0) == 2)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_89 = unk_0x27CDB7B0660BDAB1(iVar75, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_89 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar76, iVar0) == 2)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_90 = unk_0x27CDB7B0660BDAB1(iVar76, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_90 = 1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar77, iVar0) == 2)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_103 = unk_0x27CDB7B0660BDAB1(iVar77, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_103 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar78, iVar0) == 2)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_104 = unk_0x27CDB7B0660BDAB1(iVar78, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_104 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar79, iVar0) == 2)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_105 = unk_0x27CDB7B0660BDAB1(iVar79, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_105 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar65, iVar0) == 2)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_55 = unk_0x27CDB7B0660BDAB1(iVar65, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_55 = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar66, iVar0) == 2)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_56 = unk_0x27CDB7B0660BDAB1(iVar66, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_56 = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar67, iVar0) == 2)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_57 = unk_0x27CDB7B0660BDAB1(iVar67, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_57 = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar68, iVar0) == 3)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_58 = unk_0xDFB5A5508080E518(iVar68, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_58 = 1.2f;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar69, iVar0) == 2)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_158 = unk_0x27CDB7B0660BDAB1(iVar69, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_158 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar70, iVar0) == 2)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_159 = unk_0x27CDB7B0660BDAB1(iVar70, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_159 = 10;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar84, iVar0) == 2)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_42 = unk_0x27CDB7B0660BDAB1(iVar84, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_42 = 0;
				}
				if (Global_1638223.f_2 != 6 && unk_0x6E1D01265BDA6BEA(iVar80, iVar0) == 2)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_114 = unk_0x27CDB7B0660BDAB1(iVar80, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_114 = -1;
				}
				if (Global_1638223.f_2 != 6 && unk_0x6E1D01265BDA6BEA(iVar81, iVar0) == 2)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_115 = unk_0x27CDB7B0660BDAB1(iVar81, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_115 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar85, iVar0) == 2)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_101 = unk_0x27CDB7B0660BDAB1(iVar85, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_101 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar86, iVar0) == 2)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_102 = unk_0x27CDB7B0660BDAB1(iVar86, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_102 = -1;
				}
				iVar1 = 0;
				while (iVar1 <= 1)
				{
					if (unk_0x6E1D01265BDA6BEA(uVar127[iVar1], iVar0) == 5)
					{
						Global_1638223.f_59834[iVar0 /*160*/].f_118[iVar1 /*3*/] = { unk_0xD458CBD2DA2C775D(uVar127[iVar1], iVar0) };
					}
					else
					{
						Global_1638223.f_59834[iVar0 /*160*/].f_118[iVar1 /*3*/] = { 0f, 0f, 0f };
					}
					if (unk_0x6E1D01265BDA6BEA(uVar130[iVar1], iVar0) == 3)
					{
						Global_1638223.f_59834[iVar0 /*160*/].f_125[iVar1] = unk_0xDFB5A5508080E518(uVar130[iVar1], iVar0);
					}
					else
					{
						Global_1638223.f_59834[iVar0 /*160*/].f_125[iVar1] = 0f;
					}
					iVar1++;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar133, iVar0) == 2)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_117 = unk_0x27CDB7B0660BDAB1(iVar133, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_117 = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar134, iVar0) == 2)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_128 = unk_0x27CDB7B0660BDAB1(iVar134, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_128 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar135, iVar0) == 2)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_137 = unk_0x27CDB7B0660BDAB1(iVar135, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_137 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar136, iVar0) == 2)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_138 = unk_0x27CDB7B0660BDAB1(iVar136, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_138 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar137, iVar0) == 2)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_133 = unk_0x27CDB7B0660BDAB1(iVar137, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_133 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar138, iVar0) == 5)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_134 = { unk_0xD458CBD2DA2C775D(iVar138, iVar0) };
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_134 = { 0f, 0f, 0f };
				}
				if (unk_0x6E1D01265BDA6BEA(iVar139, iVar0) == 3)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_130 = unk_0xDFB5A5508080E518(iVar139, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_130 = -1f;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar145, iVar0) == 2)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_131 = unk_0x27CDB7B0660BDAB1(iVar145, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_131 = 10;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar147, iVar0) == 2)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_145 = unk_0x27CDB7B0660BDAB1(iVar147, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_145 = 2;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar148, iVar0) == 2)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_146 = unk_0x27CDB7B0660BDAB1(iVar148, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_146 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar149, iVar0) == 2)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_155 = unk_0x27CDB7B0660BDAB1(iVar149, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_155 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar140, iVar0) == 2)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_129 = unk_0x27CDB7B0660BDAB1(iVar140, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_129 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar141, iVar0) == 2)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_132 = unk_0x27CDB7B0660BDAB1(iVar141, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_132 = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar142, iVar0) == 2)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_40 = unk_0x27CDB7B0660BDAB1(iVar142, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_40 = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar143, iVar0) == 2)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_41 = unk_0x27CDB7B0660BDAB1(iVar143, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_41 = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar144, iVar0) == 2)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_143 = unk_0x27CDB7B0660BDAB1(iVar144, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_143 = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar146, iVar0) == 2)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_144 = unk_0x27CDB7B0660BDAB1(iVar146, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_144 = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar150, iVar0) == 2)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_156 = unk_0x27CDB7B0660BDAB1(iVar150, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_156 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar151, iVar0) == 2)
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_157 = unk_0x27CDB7B0660BDAB1(iVar151, iVar0);
				}
				else
				{
					Global_1638223.f_59834[iVar0 /*160*/].f_157 = 0;
				}
				iVar3 = 0;
				while (iVar3 <= (Global_1638223.f_32 - 1))
				{
					if (iVar3 < 4)
					{
						Global_1638223.f_59834[iVar0 /*160*/].f_13[iVar3] = unk_0x27CDB7B0660BDAB1(uVar87[iVar3], iVar0);
						Global_1638223.f_59834[iVar0 /*160*/].f_18[iVar3] = unk_0x27CDB7B0660BDAB1(uVar92[iVar3], iVar0);
						if (Global_1638223.f_59834[iVar0 /*160*/].f_18[iVar3] == -1)
						{
							Global_1638223.f_59834[iVar0 /*160*/].f_18[iVar3] = 99999;
						}
						if (unk_0x6E1D01265BDA6BEA(uVar97[iVar3], iVar0) == 2)
						{
							Global_1638223.f_59834[iVar0 /*160*/].f_108[iVar3] = unk_0x27CDB7B0660BDAB1(uVar97[iVar3], iVar0);
						}
						else
						{
							Global_1638223.f_59834[iVar0 /*160*/].f_108[iVar3] = 0;
						}
						if (unk_0x6E1D01265BDA6BEA(uVar102[iVar3], iVar0) == 2)
						{
							Global_1638223.f_59834[iVar0 /*160*/].f_91[iVar3] = unk_0x27CDB7B0660BDAB1(uVar102[iVar3], iVar0);
						}
						else
						{
							Global_1638223.f_59834[iVar0 /*160*/].f_91[iVar3] = 0;
						}
						if (unk_0x6E1D01265BDA6BEA(uVar107[iVar3], iVar0) == 2)
						{
							Global_1638223.f_59834[iVar0 /*160*/].f_96[iVar3] = unk_0x27CDB7B0660BDAB1(uVar107[iVar3], iVar0);
						}
						else
						{
							Global_1638223.f_59834[iVar0 /*160*/].f_96[iVar3] = 0;
						}
						if (unk_0x6E1D01265BDA6BEA(uVar112[iVar3], iVar0) == 2)
						{
							Global_1638223.f_59834[iVar0 /*160*/].f_59[iVar3] = unk_0x27CDB7B0660BDAB1(uVar112[iVar3], iVar0);
						}
						else
						{
							Global_1638223.f_59834[iVar0 /*160*/].f_59[iVar3] = -1;
						}
						if (unk_0x6E1D01265BDA6BEA(uVar117[iVar3], iVar0) == 2)
						{
							Global_1638223.f_59834[iVar0 /*160*/].f_64[iVar3] = unk_0x27CDB7B0660BDAB1(uVar117[iVar3], iVar0);
						}
						else
						{
							Global_1638223.f_59834[iVar0 /*160*/].f_64[iVar3] = -1;
						}
						if (unk_0x6E1D01265BDA6BEA(uVar122[iVar3], iVar0) == 2)
						{
							Global_1638223.f_59834[iVar0 /*160*/].f_73[iVar3] = unk_0x27CDB7B0660BDAB1(uVar122[iVar3], iVar0);
						}
						else
						{
							Global_1638223.f_59834[iVar0 /*160*/].f_73[iVar3] = 0;
						}
					}
					iVar3++;
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
	
	iVar5 = unk_0xD41282265B0A744C(iParam0, "weap");
	Global_1638223.f_57262 = unk_0xE33C601C19270822(iVar5, "no");
	if (Global_1638223 == 0)
	{
		if (Global_1638223.f_57262 > 60)
		{
			Global_1638223.f_57262 = 60;
		}
	}
	else if (Global_1638223.f_57262 > 60)
	{
		Global_1638223.f_57262 = 60;
	}
	Global_1638223.f_57264 = unk_0xE33C601C19270822(iVar5, "time");
	Global_1638223.f_57265 = unk_0xE33C601C19270822(iVar5, "pal");
	Global_1638223.f_55 = unk_0xE33C601C19270822(iVar5, "blip");
	iVar6 = unk_0x560A2E3DA92FA8F8(iVar5, "loc");
	iVar7 = unk_0x560A2E3DA92FA8F8(iVar5, "head");
	iVar8 = unk_0x560A2E3DA92FA8F8(iVar5, "rotx");
	iVar9 = unk_0x560A2E3DA92FA8F8(iVar5, "roty");
	iVar10 = unk_0x560A2E3DA92FA8F8(iVar5, "type");
	iVar11 = unk_0x560A2E3DA92FA8F8(iVar5, "sub");
	iVar12 = unk_0x560A2E3DA92FA8F8(iVar5, "bits");
	iVar13 = unk_0x560A2E3DA92FA8F8(iVar5, "clip");
	iVar14 = unk_0x560A2E3DA92FA8F8(iVar5, "brest1");
	iVar15 = unk_0x560A2E3DA92FA8F8(iVar5, "brest2");
	iVar16 = unk_0x560A2E3DA92FA8F8(iVar5, "brest3");
	iVar17 = unk_0x560A2E3DA92FA8F8(iVar5, "brest4");
	iVar18 = unk_0x560A2E3DA92FA8F8(iVar5, "dmgmult");
	iVar19 = unk_0x560A2E3DA92FA8F8(iVar5, "rput");
	iVar20 = unk_0x560A2E3DA92FA8F8(iVar5, "vput");
	iVar21 = unk_0x560A2E3DA92FA8F8(iVar5, "vasst");
	iVar22 = unk_0x560A2E3DA92FA8F8(iVar5, "vasso");
	iVar23 = unk_0x560A2E3DA92FA8F8(iVar5, "vasss");
	iVar24 = unk_0x560A2E3DA92FA8F8(iVar5, "vasst2");
	iVar25 = unk_0x560A2E3DA92FA8F8(iVar5, "vasso2");
	iVar26 = unk_0x560A2E3DA92FA8F8(iVar5, "vasss2");
	iVar27 = unk_0x560A2E3DA92FA8F8(iVar5, "vasst3");
	iVar28 = unk_0x560A2E3DA92FA8F8(iVar5, "vasso3");
	iVar29 = unk_0x560A2E3DA92FA8F8(iVar5, "vasss3");
	iVar30 = unk_0x560A2E3DA92FA8F8(iVar5, "vasst4");
	iVar31 = unk_0x560A2E3DA92FA8F8(iVar5, "vasso4");
	iVar32 = unk_0x560A2E3DA92FA8F8(iVar5, "vasss4");
	iVar33 = unk_0x560A2E3DA92FA8F8(iVar5, "vclnr");
	iVar34 = unk_0x560A2E3DA92FA8F8(iVar5, "vclnt");
	iVar35 = unk_0x560A2E3DA92FA8F8(iVar5, "vclnrl");
	iVar36 = unk_0x560A2E3DA92FA8F8(iVar5, "ipdi");
	Global_1638223.f_59829 = unk_0x07BD029EFF536ADD(iVar5, "randtyp");
	iVar0 = 0;
	while (iVar0 <= (Global_1638223.f_57262 - 1))
	{
		if (iVar0 < 60)
		{
			Global_1638223.f_57266[iVar0 /*42*/] = { unk_0xD458CBD2DA2C775D(iVar6, iVar0) };
			Global_1638223.f_57266[iVar0 /*42*/].f_3.f_2 = unk_0xDFB5A5508080E518(iVar7, iVar0);
			Global_1638223.f_57266[iVar0 /*42*/].f_3 = unk_0xDFB5A5508080E518(iVar8, iVar0);
			Global_1638223.f_57266[iVar0 /*42*/].f_3.f_1 = unk_0xDFB5A5508080E518(iVar9, iVar0);
			iVar1 = unk_0x27CDB7B0660BDAB1(iVar10, iVar0);
			Global_1638223.f_57266[iVar0 /*42*/].f_15 = iVar1;
			if (!func_186(Global_1638223.f_57266[iVar0 /*42*/].f_15))
			{
				if (Global_1638223.f_57266[iVar0 /*42*/].f_15 == joaat("pickup_weapon_marksmanrifle"))
				{
					Global_1638223.f_57266[iVar0 /*42*/].f_15 = joaat("pickup_weapon_sniperrifle");
				}
				else
				{
					Global_1638223.f_57266[iVar0 /*42*/].f_15 = joaat("pickup_weapon_pistol");
				}
			}
			Global_1638223.f_57266[iVar0 /*42*/].f_6 = unk_0x27CDB7B0660BDAB1(iVar11, iVar0);
			Global_1638223.f_57266[iVar0 /*42*/].f_8 = unk_0x27CDB7B0660BDAB1(iVar12, iVar0);
			Global_1638223.f_57266[iVar0 /*42*/].f_7 = unk_0x27CDB7B0660BDAB1(iVar13, iVar0);
			Global_1638223.f_57266[iVar0 /*42*/].f_23 = unk_0x27CDB7B0660BDAB1(iVar19, iVar0);
			Global_1638223.f_57266[iVar0 /*42*/].f_24 = unk_0x27CDB7B0660BDAB1(iVar20, iVar0);
			Global_1638223.f_57266[iVar0 /*42*/].f_41 = unk_0x27CDB7B0660BDAB1(iVar36, iVar0);
			if (unk_0x6E1D01265BDA6BEA(iVar14, iVar0) == 1)
			{
				Global_1638223.f_57266[iVar0 /*42*/].f_10[0] = unk_0x2D6F95A16E2F0D25(iVar14, iVar0);
			}
			else
			{
				Global_1638223.f_57266[iVar0 /*42*/].f_10[0] = 0;
			}
			if (unk_0x6E1D01265BDA6BEA(iVar15, iVar0) == 1)
			{
				Global_1638223.f_57266[iVar0 /*42*/].f_10[1] = unk_0x2D6F95A16E2F0D25(iVar15, iVar0);
			}
			else
			{
				Global_1638223.f_57266[iVar0 /*42*/].f_10[1] = 0;
			}
			if (unk_0x6E1D01265BDA6BEA(iVar16, iVar0) == 1)
			{
				Global_1638223.f_57266[iVar0 /*42*/].f_10[2] = unk_0x2D6F95A16E2F0D25(iVar16, iVar0);
			}
			else
			{
				Global_1638223.f_57266[iVar0 /*42*/].f_10[2] = 0;
			}
			if (unk_0x6E1D01265BDA6BEA(iVar17, iVar0) == 1)
			{
				Global_1638223.f_57266[iVar0 /*42*/].f_10[3] = unk_0x2D6F95A16E2F0D25(iVar17, iVar0);
			}
			else
			{
				Global_1638223.f_57266[iVar0 /*42*/].f_10[3] = 0;
			}
			if (unk_0x6E1D01265BDA6BEA(iVar18, iVar0) == 3)
			{
				Global_1638223.f_57266[iVar0 /*42*/].f_9 = unk_0xDFB5A5508080E518(iVar18, iVar0);
			}
			else
			{
				Global_1638223.f_57266[iVar0 /*42*/].f_9 = 1f;
			}
			if (unk_0x6E1D01265BDA6BEA(iVar19, iVar0) == 2)
			{
				Global_1638223.f_57266[iVar0 /*42*/].f_23 = unk_0x27CDB7B0660BDAB1(iVar19, iVar0);
			}
			else
			{
				Global_1638223.f_57266[iVar0 /*42*/].f_23 = -1;
			}
			if (unk_0x6E1D01265BDA6BEA(iVar36, iVar0) == 2)
			{
				Global_1638223.f_57266[iVar0 /*42*/].f_41 = unk_0x27CDB7B0660BDAB1(iVar36, iVar0);
			}
			else
			{
				Global_1638223.f_57266[iVar0 /*42*/].f_41 = 0;
			}
			if (unk_0x6E1D01265BDA6BEA(iVar20, iVar0) == 2)
			{
				Global_1638223.f_57266[iVar0 /*42*/].f_24 = unk_0x27CDB7B0660BDAB1(iVar20, iVar0);
			}
			else
			{
				Global_1638223.f_57266[iVar0 /*42*/].f_24 = -1;
			}
			if (func_124())
			{
				if (unk_0x6E1D01265BDA6BEA(iVar35, iVar0) == 2)
				{
					Global_1638223.f_57266[iVar0 /*42*/].f_29 = unk_0x27CDB7B0660BDAB1(iVar35, iVar0);
				}
				else
				{
					Global_1638223.f_57266[iVar0 /*42*/].f_29 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar34, iVar0) == 2)
				{
					Global_1638223.f_57266[iVar0 /*42*/].f_30 = unk_0x27CDB7B0660BDAB1(iVar34, iVar0);
				}
				else
				{
					Global_1638223.f_57266[iVar0 /*42*/].f_30 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar33, iVar0) == 2)
				{
					Global_1638223.f_57266[iVar0 /*42*/].f_31 = unk_0x27CDB7B0660BDAB1(iVar33, iVar0);
				}
				else
				{
					Global_1638223.f_57266[iVar0 /*42*/].f_31 = 0;
				}
				Global_1638223.f_57266[iVar0 /*42*/].f_26 = unk_0x27CDB7B0660BDAB1(iVar21, iVar0);
				Global_1638223.f_57266[iVar0 /*42*/].f_27 = unk_0x27CDB7B0660BDAB1(iVar22, iVar0);
				Global_1638223.f_57266[iVar0 /*42*/].f_28 = unk_0x27CDB7B0660BDAB1(iVar23, iVar0);
				if (Global_1638223.f_57266[iVar0 /*42*/].f_28 == -1)
				{
					Global_1638223.f_57266[iVar0 /*42*/].f_28 = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar25, iVar0) == 2)
				{
					Global_1638223.f_57266[iVar0 /*42*/].f_35 = unk_0x27CDB7B0660BDAB1(iVar24, iVar0);
					Global_1638223.f_57266[iVar0 /*42*/].f_32 = unk_0x27CDB7B0660BDAB1(iVar25, iVar0);
					Global_1638223.f_57266[iVar0 /*42*/].f_38 = unk_0x27CDB7B0660BDAB1(iVar26, iVar0);
					Global_1638223.f_57266[iVar0 /*42*/].f_36 = unk_0x27CDB7B0660BDAB1(iVar27, iVar0);
					Global_1638223.f_57266[iVar0 /*42*/].f_33 = unk_0x27CDB7B0660BDAB1(iVar28, iVar0);
					Global_1638223.f_57266[iVar0 /*42*/].f_39 = unk_0x27CDB7B0660BDAB1(iVar29, iVar0);
					Global_1638223.f_57266[iVar0 /*42*/].f_37 = unk_0x27CDB7B0660BDAB1(iVar30, iVar0);
					Global_1638223.f_57266[iVar0 /*42*/].f_34 = unk_0x27CDB7B0660BDAB1(iVar31, iVar0);
					Global_1638223.f_57266[iVar0 /*42*/].f_40 = unk_0x27CDB7B0660BDAB1(iVar32, iVar0);
				}
				else
				{
					Global_1638223.f_57266[iVar0 /*42*/].f_35 = -1;
					Global_1638223.f_57266[iVar0 /*42*/].f_32 = 0;
					Global_1638223.f_57266[iVar0 /*42*/].f_38 = 0;
					Global_1638223.f_57266[iVar0 /*42*/].f_36 = -1;
					Global_1638223.f_57266[iVar0 /*42*/].f_33 = 0;
					Global_1638223.f_57266[iVar0 /*42*/].f_39 = 0;
					Global_1638223.f_57266[iVar0 /*42*/].f_37 = -1;
					Global_1638223.f_57266[iVar0 /*42*/].f_34 = 0;
					Global_1638223.f_57266[iVar0 /*42*/].f_40 = 0;
				}
			}
			StringCopy(&cVar3, "comps", 8);
			StringIntConCat(&cVar3, iVar0, 8);
			iVar37 = unk_0x560A2E3DA92FA8F8(iVar5, &cVar3);
			iVar2 = 0;
			while (iVar2 <= 5)
			{
				if (unk_0x6E1D01265BDA6BEA(iVar37, iVar2) == 2)
				{
					Global_1638223.f_57266[iVar0 /*42*/].f_16[iVar2] = unk_0x27CDB7B0660BDAB1(iVar37, iVar2);
				}
				else
				{
					Global_1638223.f_57266[iVar0 /*42*/].f_16[iVar2] = 0;
				}
				iVar2++;
			}
		}
		iVar0++;
	}
}

int func_186(int iParam0)
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

void func_187(int iParam0)
{
	int iVar0;
	int iVar1;
	char[] cVar2[8];
	int iVar4;
	var uVar5[10];
	var uVar16[10];
	var uVar27[10];
	var uVar38[10];
	
	if (unk_0xD41282265B0A744C(iParam0, "ptemp") == 0)
	{
		return;
	}
	iVar4 = unk_0xD41282265B0A744C(iParam0, "ptemp");
	Global_1638223.f_112720 = unk_0xE33C601C19270822(iVar4, "no");
	iVar0 = 0;
	while (iVar0 <= (Global_1638223.f_112720 - 1))
	{
		StringCopy(&cVar2, "pto", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar5[iVar0] = unk_0x560A2E3DA92FA8F8(iVar4, &cVar2);
		StringCopy(&cVar2, "ptr", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar16[iVar0] = unk_0x560A2E3DA92FA8F8(iVar4, &cVar2);
		StringCopy(&cVar2, "ptm", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar27[iVar0] = unk_0x560A2E3DA92FA8F8(iVar4, &cVar2);
		StringCopy(&cVar2, "ptc", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar38[iVar0] = unk_0x560A2E3DA92FA8F8(iVar4, &cVar2);
		iVar1 = 0;
		while (iVar1 <= 29)
		{
			if (unk_0x6E1D01265BDA6BEA(uVar5[iVar0], iVar1) == 5)
			{
				Global_1638223.f_110279[iVar0 /*244*/][iVar1 /*3*/] = { unk_0xD458CBD2DA2C775D(uVar5[iVar0], iVar1) };
			}
			else
			{
				Global_1638223.f_110279[iVar0 /*244*/][iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x6E1D01265BDA6BEA(uVar16[iVar0], iVar1) == 5)
			{
				Global_1638223.f_110279[iVar0 /*244*/].f_91[iVar1 /*3*/] = { unk_0xD458CBD2DA2C775D(uVar16[iVar0], iVar1) };
			}
			else
			{
				Global_1638223.f_110279[iVar0 /*244*/].f_91[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x6E1D01265BDA6BEA(uVar27[iVar0], iVar1) == 2)
			{
				Global_1638223.f_110279[iVar0 /*244*/].f_182[iVar1] = unk_0x27CDB7B0660BDAB1(uVar27[iVar0], iVar1);
			}
			else
			{
				Global_1638223.f_110279[iVar0 /*244*/].f_182[iVar1] = 0;
			}
			if (unk_0x6E1D01265BDA6BEA(uVar38[iVar0], iVar1) == 2)
			{
				Global_1638223.f_110279[iVar0 /*244*/].f_213[iVar1] = unk_0x27CDB7B0660BDAB1(uVar38[iVar0], iVar1);
			}
			else
			{
				Global_1638223.f_110279[iVar0 /*244*/].f_213[iVar1] = 0;
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_188(int iParam0)
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
	
	iVar5 = unk_0xD41282265B0A744C(iParam0, "obj");
	Global_1638223.f_44971 = unk_0xE33C601C19270822(iVar5, "no");
	Global_1638223.f_44972 = unk_0xE33C601C19270822(iVar5, "pal");
	Global_1638223.f_44973 = unk_0xE33C601C19270822(iVar5, "rtm");
	iVar6 = unk_0x560A2E3DA92FA8F8(iVar5, "loc");
	iVar7 = unk_0x560A2E3DA92FA8F8(iVar5, "head");
	iVar15 = unk_0x560A2E3DA92FA8F8(iVar5, "model");
	iVar16 = unk_0x560A2E3DA92FA8F8(iVar5, "ped");
	iVar17 = unk_0x560A2E3DA92FA8F8(iVar5, "rsp");
	iVar18 = unk_0x560A2E3DA92FA8F8(iVar5, "rot");
	iVar19 = unk_0x560A2E3DA92FA8F8(iVar5, "cont");
	iVar20 = unk_0x560A2E3DA92FA8F8(iVar5, "valu");
	iVar21 = unk_0x560A2E3DA92FA8F8(iVar5, "ammoforwep");
	iVar22 = unk_0x560A2E3DA92FA8F8(iVar5, "cpup");
	iVar23 = unk_0x560A2E3DA92FA8F8(iVar5, "cpupr");
	iVar24 = unk_0x560A2E3DA92FA8F8(iVar5, "cpupt");
	iVar25 = unk_0x560A2E3DA92FA8F8(iVar5, "bits");
	iVar26 = unk_0x560A2E3DA92FA8F8(iVar5, "bits2");
	iVar28 = unk_0x560A2E3DA92FA8F8(iVar5, "oijh");
	iVar29 = unk_0x560A2E3DA92FA8F8(iVar5, "oiet");
	iVar30 = unk_0x560A2E3DA92FA8F8(iVar5, "ospl");
	iVar31 = unk_0x560A2E3DA92FA8F8(iVar5, "dspn");
	iVar32 = unk_0x560A2E3DA92FA8F8(iVar5, "objcps");
	iVar33 = unk_0x560A2E3DA92FA8F8(iVar5, "objinv");
	iVar34 = unk_0x560A2E3DA92FA8F8(iVar5, "objaro");
	if (func_124())
	{
		iVar8 = unk_0x560A2E3DA92FA8F8(iVar5, "obrr");
		iVar9 = unk_0x560A2E3DA92FA8F8(iVar5, "obrmr");
		iVar10 = unk_0x560A2E3DA92FA8F8(iVar5, "osnt");
		iVar11 = unk_0x560A2E3DA92FA8F8(iVar5, "osnei");
		iVar14 = unk_0x560A2E3DA92FA8F8(iVar5, "objbr");
		iVar12 = unk_0x560A2E3DA92FA8F8(iVar5, "o2sp");
		iVar13 = unk_0x560A2E3DA92FA8F8(iVar5, "o2sh");
		iVar27 = unk_0x560A2E3DA92FA8F8(iVar5, "mgbs");
		iVar35 = unk_0x560A2E3DA92FA8F8(iVar5, "objct");
		iVar36 = unk_0x560A2E3DA92FA8F8(iVar5, "team");
		iVar37 = unk_0x560A2E3DA92FA8F8(iVar5, "spwn");
		iVar38 = unk_0x560A2E3DA92FA8F8(iVar5, "objct2");
		iVar39 = unk_0x560A2E3DA92FA8F8(iVar5, "team2");
		iVar40 = unk_0x560A2E3DA92FA8F8(iVar5, "spwn2");
		iVar41 = unk_0x560A2E3DA92FA8F8(iVar5, "objct3");
		iVar42 = unk_0x560A2E3DA92FA8F8(iVar5, "team3");
		iVar43 = unk_0x560A2E3DA92FA8F8(iVar5, "spwn3");
		iVar44 = unk_0x560A2E3DA92FA8F8(iVar5, "objct4");
		iVar45 = unk_0x560A2E3DA92FA8F8(iVar5, "team4");
		iVar46 = unk_0x560A2E3DA92FA8F8(iVar5, "spwn4");
		iVar47 = unk_0x560A2E3DA92FA8F8(iVar5, "hlt");
		iVar48 = unk_0x560A2E3DA92FA8F8(iVar5, "obb");
		iVar49 = unk_0x560A2E3DA92FA8F8(iVar5, "obbc");
		iVar50 = unk_0x560A2E3DA92FA8F8(iVar5, "objclt");
		iVar51 = unk_0x560A2E3DA92FA8F8(iVar5, "objcr");
		iVar52 = unk_0x560A2E3DA92FA8F8(iVar5, "obcra");
		iVar53 = unk_0x560A2E3DA92FA8F8(iVar5, "ospdl");
		iVar54 = unk_0x560A2E3DA92FA8F8(iVar5, "osgr");
		iVar55 = unk_0x560A2E3DA92FA8F8(iVar5, "ossgr");
		iVar56 = unk_0x560A2E3DA92FA8F8(iVar5, "objcnm");
		iVar57 = unk_0x560A2E3DA92FA8F8(iVar5, "ororc");
		iVar58 = unk_0x560A2E3DA92FA8F8(iVar5, "objap");
		iVar59 = unk_0x560A2E3DA92FA8F8(iVar5, "objapt");
		iVar60 = unk_0x560A2E3DA92FA8F8(iVar5, "obint");
		iVar61 = unk_0x560A2E3DA92FA8F8(iVar5, "obrom");
		iVar62 = unk_0x560A2E3DA92FA8F8(iVar5, "inco");
		iVar63 = unk_0x560A2E3DA92FA8F8(iVar5, "inhsh");
		iVar64 = unk_0x560A2E3DA92FA8F8(iVar5, "vehpu");
		iVar65 = unk_0x560A2E3DA92FA8F8(iVar5, "airpu");
		iVar68 = unk_0x560A2E3DA92FA8F8(iVar5, "gotor");
		iVar69 = unk_0x560A2E3DA92FA8F8(iVar5, "nmpass");
		iVar70 = unk_0x560A2E3DA92FA8F8(iVar5, "nmfail");
		iVar66 = unk_0x560A2E3DA92FA8F8(iVar5, "omcp");
		iVar67 = unk_0x560A2E3DA92FA8F8(iVar5, "omcf");
		iVar2 = 0;
		while (iVar2 <= (Global_1638223.f_32 - 1))
		{
			if (iVar2 < 4)
			{
				StringCopy(&cVar3, "rule", 8);
				StringIntConCat(&cVar3, iVar2, 8);
				uVar71[iVar2] = unk_0x560A2E3DA92FA8F8(iVar5, &cVar3);
				StringCopy(&cVar3, "pri", 8);
				StringIntConCat(&cVar3, iVar2, 8);
				uVar76[iVar2] = unk_0x560A2E3DA92FA8F8(iVar5, &cVar3);
				StringCopy(&cVar3, "jtop", 8);
				StringIntConCat(&cVar3, iVar2, 8);
				uVar81[iVar2] = unk_0x560A2E3DA92FA8F8(iVar5, &cVar3);
				StringCopy(&cVar3, "jtof", 8);
				StringIntConCat(&cVar3, iVar2, 8);
				uVar86[iVar2] = unk_0x560A2E3DA92FA8F8(iVar5, &cVar3);
			}
			iVar2++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1638223.f_44971 - 1))
	{
		if (iVar0 < 20)
		{
			Global_1638223.f_44974[iVar0 /*98*/] = { unk_0xD458CBD2DA2C775D(iVar6, iVar0) };
			Global_1638223.f_44974[iVar0 /*98*/].f_3 = unk_0xDFB5A5508080E518(iVar7, iVar0);
			iVar1 = unk_0x27CDB7B0660BDAB1(iVar15, iVar0);
			Global_1638223.f_44974[iVar0 /*98*/].f_16 = iVar1;
			if (Global_1638223.f_44974[iVar0 /*98*/].f_16 == joaat("hei_prop_bank_cctv_02"))
			{
				Global_1638223.f_44974[iVar0 /*98*/].f_16 = joaat("hei_prop_bank_cctv_01");
			}
			if (!unk_0x88516260CF32A1A0(Global_1638223.f_44974[iVar0 /*98*/].f_16))
			{
				Global_1638223.f_44974[iVar0 /*98*/].f_16 = joaat("prop_drug_package");
			}
			if (Global_1638223.f_44974[iVar0 /*98*/].f_16 == joaat("prop_cctv_cam_06a"))
			{
				Global_1638223.f_44974[iVar0 /*98*/].f_16 = joaat("hei_prop_bank_cctv_01");
			}
			if (Global_1638223.f_44974[iVar0 /*98*/].f_16 == joaat("prop_cctv_cam_07a"))
			{
				Global_1638223.f_44974[iVar0 /*98*/].f_16 = joaat("hei_prop_bank_cctv_02");
			}
			if (Global_1638223.f_44974[iVar0 /*98*/].f_16 == joaat("ex_prop_adv_case"))
			{
				Global_1638223.f_44974[iVar0 /*98*/].f_16 = joaat("gr_prop_gr_adv_case");
			}
			Global_1638223.f_44974[iVar0 /*98*/].f_27 = unk_0x27CDB7B0660BDAB1(iVar17, iVar0);
			Global_1638223.f_44974[iVar0 /*98*/].f_4 = { unk_0xD458CBD2DA2C775D(iVar18, iVar0) };
			Global_1638223.f_44974[iVar0 /*98*/].f_31 = unk_0x27CDB7B0660BDAB1(iVar16, iVar0);
			Global_1638223.f_44974[iVar0 /*98*/].f_46 = unk_0x27CDB7B0660BDAB1(iVar19, iVar0);
			Global_1638223.f_44974[iVar0 /*98*/].f_47 = unk_0x27CDB7B0660BDAB1(iVar20, iVar0);
			Global_1638223.f_44974[iVar0 /*98*/].f_48 = unk_0x27CDB7B0660BDAB1(iVar21, iVar0);
			Global_1638223.f_44974[iVar0 /*98*/].f_49 = unk_0x27CDB7B0660BDAB1(iVar22, iVar0);
			Global_1638223.f_44974[iVar0 /*98*/].f_50 = unk_0x27CDB7B0660BDAB1(iVar24, iVar0);
			Global_1638223.f_44974[iVar0 /*98*/].f_51 = unk_0x27CDB7B0660BDAB1(iVar23, iVar0);
			Global_1638223.f_44974[iVar0 /*98*/].f_43 = unk_0x27CDB7B0660BDAB1(iVar25, iVar0);
			Global_1638223.f_44974[iVar0 /*98*/].f_44 = unk_0x27CDB7B0660BDAB1(iVar26, iVar0);
			Global_1638223.f_44974[iVar0 /*98*/].f_90 = unk_0x27CDB7B0660BDAB1(iVar29, iVar0);
			Global_1638223.f_44974[iVar0 /*98*/].f_96 = unk_0x27CDB7B0660BDAB1(iVar28, iVar0);
			Global_1638223.f_44974[iVar0 /*98*/].f_91 = unk_0x27CDB7B0660BDAB1(iVar30, iVar0);
			Global_1638223.f_44974[iVar0 /*98*/].f_92 = unk_0x27CDB7B0660BDAB1(iVar31, iVar0);
			Global_1638223.f_44974[iVar0 /*98*/].f_93 = unk_0x27CDB7B0660BDAB1(iVar32, iVar0);
			Global_1638223.f_44974[iVar0 /*98*/].f_94 = unk_0x27CDB7B0660BDAB1(iVar33, iVar0);
			Global_1638223.f_44974[iVar0 /*98*/].f_97 = unk_0xDFB5A5508080E518(iVar34, iVar0);
			if (unk_0x6E1D01265BDA6BEA(iVar65, iVar0) == 2)
			{
				if (unk_0x27CDB7B0660BDAB1(iVar65, iVar0) == 1)
				{
					if (!unk_0xAA4F14DA15DB0B51(Global_1638223.f_44974[iVar0 /*98*/].f_43, 4))
					{
						unk_0xF6082E2ADA1C795B(&(Global_1638223.f_44974[iVar0 /*98*/].f_43), 4);
					}
				}
			}
			if (func_124())
			{
				if (((unk_0x6E1D01265BDA6BEA(iVar8, iVar0) == 3 && unk_0x6E1D01265BDA6BEA(iVar9, iVar0) == 3) && unk_0x6E1D01265BDA6BEA(iVar10, iVar0) == 2) && unk_0x6E1D01265BDA6BEA(iVar11, iVar0) == 2)
				{
					Global_1638223.f_44974[iVar0 /*98*/].f_7 = unk_0xDFB5A5508080E518(iVar8, iVar0);
					Global_1638223.f_44974[iVar0 /*98*/].f_8 = unk_0xDFB5A5508080E518(iVar9, iVar0);
					Global_1638223.f_44974[iVar0 /*98*/].f_9 = unk_0x27CDB7B0660BDAB1(iVar10, iVar0);
					Global_1638223.f_44974[iVar0 /*98*/].f_10 = unk_0x27CDB7B0660BDAB1(iVar11, iVar0);
				}
				else
				{
					Global_1638223.f_44974[iVar0 /*98*/].f_7 = 50f;
					Global_1638223.f_44974[iVar0 /*98*/].f_8 = 0f;
					Global_1638223.f_44974[iVar0 /*98*/].f_9 = 0;
					Global_1638223.f_44974[iVar0 /*98*/].f_10 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar14, iVar0) == 2)
				{
					Global_1638223.f_44974[iVar0 /*98*/].f_15 = unk_0x27CDB7B0660BDAB1(iVar14, iVar0);
				}
				else
				{
					Global_1638223.f_44974[iVar0 /*98*/].f_15 = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar12, iVar0) == 5 && unk_0x6E1D01265BDA6BEA(iVar13, iVar0) == 3)
				{
					Global_1638223.f_44974[iVar0 /*98*/].f_11 = { unk_0xD458CBD2DA2C775D(iVar12, iVar0) };
					Global_1638223.f_44974[iVar0 /*98*/].f_14 = unk_0xDFB5A5508080E518(iVar13, iVar0);
				}
				else
				{
					Global_1638223.f_44974[iVar0 /*98*/].f_11 = { 0f, 0f, 0f };
					Global_1638223.f_44974[iVar0 /*98*/].f_14 = 0f;
				}
				Global_1638223.f_44974[iVar0 /*98*/].f_45 = unk_0x27CDB7B0660BDAB1(iVar27, iVar0);
				Global_1638223.f_44974[iVar0 /*98*/].f_32 = unk_0x27CDB7B0660BDAB1(iVar35, iVar0);
				Global_1638223.f_44974[iVar0 /*98*/].f_33 = unk_0x27CDB7B0660BDAB1(iVar36, iVar0);
				Global_1638223.f_44974[iVar0 /*98*/].f_34 = unk_0x27CDB7B0660BDAB1(iVar37, iVar0);
				if (unk_0x6E1D01265BDA6BEA(iVar38, iVar0) == 2)
				{
					Global_1638223.f_44974[iVar0 /*98*/].f_60 = unk_0x27CDB7B0660BDAB1(iVar38, iVar0);
					Global_1638223.f_44974[iVar0 /*98*/].f_57 = unk_0x27CDB7B0660BDAB1(iVar39, iVar0);
					Global_1638223.f_44974[iVar0 /*98*/].f_63 = unk_0x27CDB7B0660BDAB1(iVar40, iVar0);
					Global_1638223.f_44974[iVar0 /*98*/].f_61 = unk_0x27CDB7B0660BDAB1(iVar41, iVar0);
					Global_1638223.f_44974[iVar0 /*98*/].f_58 = unk_0x27CDB7B0660BDAB1(iVar42, iVar0);
					Global_1638223.f_44974[iVar0 /*98*/].f_64 = unk_0x27CDB7B0660BDAB1(iVar43, iVar0);
					Global_1638223.f_44974[iVar0 /*98*/].f_62 = unk_0x27CDB7B0660BDAB1(iVar44, iVar0);
					Global_1638223.f_44974[iVar0 /*98*/].f_59 = unk_0x27CDB7B0660BDAB1(iVar45, iVar0);
					Global_1638223.f_44974[iVar0 /*98*/].f_65 = unk_0x27CDB7B0660BDAB1(iVar46, iVar0);
				}
				Global_1638223.f_44974[iVar0 /*98*/].f_28 = unk_0x27CDB7B0660BDAB1(iVar47, iVar0);
				Global_1638223.f_44974[iVar0 /*98*/].f_29 = unk_0x27CDB7B0660BDAB1(iVar48, iVar0);
				Global_1638223.f_44974[iVar0 /*98*/].f_37 = unk_0x27CDB7B0660BDAB1(iVar64, iVar0);
				if (unk_0x6E1D01265BDA6BEA(iVar49, iVar0) == 2)
				{
					Global_1638223.f_44974[iVar0 /*98*/].f_30 = unk_0x27CDB7B0660BDAB1(iVar49, iVar0);
				}
				else
				{
					Global_1638223.f_44974[iVar0 /*98*/].f_30 = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar51, iVar0) == 2)
				{
					Global_1638223.f_44974[iVar0 /*98*/].f_52 = unk_0x27CDB7B0660BDAB1(iVar51, iVar0);
				}
				else
				{
					Global_1638223.f_44974[iVar0 /*98*/].f_52 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar50, iVar0) == 2)
				{
					Global_1638223.f_44974[iVar0 /*98*/].f_53 = unk_0x27CDB7B0660BDAB1(iVar50, iVar0);
				}
				else
				{
					Global_1638223.f_44974[iVar0 /*98*/].f_53 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar52, iVar0) == 2)
				{
					Global_1638223.f_44974[iVar0 /*98*/].f_54 = unk_0x27CDB7B0660BDAB1(iVar52, iVar0);
				}
				else
				{
					Global_1638223.f_44974[iVar0 /*98*/].f_54 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar53, iVar0) == 2)
				{
					Global_1638223.f_44974[iVar0 /*98*/].f_56 = unk_0x27CDB7B0660BDAB1(iVar53, iVar0);
				}
				else
				{
					Global_1638223.f_44974[iVar0 /*98*/].f_56 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar54, iVar0) == 2)
				{
					Global_1638223.f_44974[iVar0 /*98*/].f_35 = unk_0x27CDB7B0660BDAB1(iVar54, iVar0);
				}
				else
				{
					Global_1638223.f_44974[iVar0 /*98*/].f_35 = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar55, iVar0) == 2)
				{
					Global_1638223.f_44974[iVar0 /*98*/].f_36 = unk_0x27CDB7B0660BDAB1(iVar55, iVar0);
				}
				else
				{
					Global_1638223.f_44974[iVar0 /*98*/].f_36 = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar56, iVar0) == 2)
				{
					Global_1638223.f_44974[iVar0 /*98*/].f_81 = unk_0x27CDB7B0660BDAB1(iVar56, iVar0);
				}
				else
				{
					Global_1638223.f_44974[iVar0 /*98*/].f_81 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar57, iVar0) == 2)
				{
					Global_1638223.f_44974[iVar0 /*98*/].f_95 = unk_0x27CDB7B0660BDAB1(iVar57, iVar0);
				}
				else
				{
					Global_1638223.f_44974[iVar0 /*98*/].f_95 = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar66, iVar0) == 2)
				{
					Global_1638223.f_44974[iVar0 /*98*/].f_78 = unk_0x27CDB7B0660BDAB1(iVar66, iVar0);
				}
				else
				{
					Global_1638223.f_44974[iVar0 /*98*/].f_78 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar67, iVar0) == 2)
				{
					Global_1638223.f_44974[iVar0 /*98*/].f_79 = unk_0x27CDB7B0660BDAB1(iVar67, iVar0);
				}
				else
				{
					Global_1638223.f_44974[iVar0 /*98*/].f_79 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar58, iVar0) == 2)
				{
					Global_1638223.f_44974[iVar0 /*98*/].f_82 = unk_0x27CDB7B0660BDAB1(iVar58, iVar0);
				}
				else
				{
					Global_1638223.f_44974[iVar0 /*98*/].f_82 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar59, iVar0) == 2)
				{
					Global_1638223.f_44974[iVar0 /*98*/].f_83 = unk_0x27CDB7B0660BDAB1(iVar59, iVar0);
				}
				else
				{
					Global_1638223.f_44974[iVar0 /*98*/].f_83 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar60, iVar0) == 2)
				{
					Global_1638223.f_44974[iVar0 /*98*/].f_84 = unk_0x27CDB7B0660BDAB1(iVar60, iVar0);
				}
				else
				{
					Global_1638223.f_44974[iVar0 /*98*/].f_84 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar61, iVar0) == 2)
				{
					Global_1638223.f_44974[iVar0 /*98*/].f_85 = unk_0x27CDB7B0660BDAB1(iVar61, iVar0);
				}
				else
				{
					Global_1638223.f_44974[iVar0 /*98*/].f_85 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar62, iVar0) == 5 && unk_0x6E1D01265BDA6BEA(iVar63, iVar0) == 2)
				{
					Global_1638223.f_44974[iVar0 /*98*/].f_86 = { unk_0xD458CBD2DA2C775D(iVar62, iVar0) };
					Global_1638223.f_44974[iVar0 /*98*/].f_89 = unk_0x27CDB7B0660BDAB1(iVar63, iVar0);
				}
				else
				{
					Global_1638223.f_44974[iVar0 /*98*/].f_86 = { 0f, 0f, 0f };
					Global_1638223.f_44974[iVar0 /*98*/].f_89 = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar68, iVar0) == 2)
				{
					Global_1638223.f_44974[iVar0 /*98*/].f_55 = unk_0x27CDB7B0660BDAB1(iVar68, iVar0);
				}
				else
				{
					Global_1638223.f_44974[iVar0 /*98*/].f_55 = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar69, iVar0) == 2)
				{
					Global_1638223.f_44974[iVar0 /*98*/].f_76 = unk_0x27CDB7B0660BDAB1(iVar69, iVar0);
				}
				else
				{
					Global_1638223.f_44974[iVar0 /*98*/].f_76 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar70, iVar0) == 2)
				{
					Global_1638223.f_44974[iVar0 /*98*/].f_77 = unk_0x27CDB7B0660BDAB1(iVar70, iVar0);
				}
				else
				{
					Global_1638223.f_44974[iVar0 /*98*/].f_77 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar30, iVar0) == 2)
				{
					Global_1638223.f_44974[iVar0 /*98*/].f_91 = unk_0x27CDB7B0660BDAB1(iVar30, iVar0);
				}
				else
				{
					Global_1638223.f_44974[iVar0 /*98*/].f_91 = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar31, iVar0) == 2)
				{
					Global_1638223.f_44974[iVar0 /*98*/].f_92 = unk_0x27CDB7B0660BDAB1(iVar31, iVar0);
				}
				else
				{
					Global_1638223.f_44974[iVar0 /*98*/].f_92 = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar32, iVar0) == 2)
				{
					Global_1638223.f_44974[iVar0 /*98*/].f_93 = unk_0x27CDB7B0660BDAB1(iVar32, iVar0);
				}
				else
				{
					Global_1638223.f_44974[iVar0 /*98*/].f_93 = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar33, iVar0) == 2)
				{
					Global_1638223.f_44974[iVar0 /*98*/].f_94 = unk_0x27CDB7B0660BDAB1(iVar33, iVar0);
				}
				else
				{
					Global_1638223.f_44974[iVar0 /*98*/].f_94 = 0;
				}
				iVar2 = 0;
				while (iVar2 <= (Global_1638223.f_32 - 1))
				{
					if (iVar2 < 4)
					{
						Global_1638223.f_44974[iVar0 /*98*/].f_17[iVar2] = unk_0x27CDB7B0660BDAB1(uVar71[iVar2], iVar0);
						Global_1638223.f_44974[iVar0 /*98*/].f_22[iVar2] = unk_0x27CDB7B0660BDAB1(uVar76[iVar2], iVar0);
						if (Global_1638223.f_44974[iVar0 /*98*/].f_22[iVar2] == -1)
						{
							Global_1638223.f_44974[iVar0 /*98*/].f_22[iVar2] = 99999;
						}
						if (unk_0x6E1D01265BDA6BEA(uVar81[iVar2], iVar0) == 2)
						{
							Global_1638223.f_44974[iVar0 /*98*/].f_66[iVar2] = unk_0x27CDB7B0660BDAB1(uVar81[iVar2], iVar0);
						}
						else
						{
							Global_1638223.f_44974[iVar0 /*98*/].f_66[iVar2] = 0;
						}
						if (unk_0x6E1D01265BDA6BEA(uVar86[iVar2], iVar0) == 2)
						{
							Global_1638223.f_44974[iVar0 /*98*/].f_71[iVar2] = unk_0x27CDB7B0660BDAB1(uVar86[iVar2], iVar0);
						}
						else
						{
							Global_1638223.f_44974[iVar0 /*98*/].f_71[iVar2] = 0;
						}
					}
					iVar2++;
				}
			}
		}
		iVar0++;
	}
}

void func_189(int iParam0)
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
	
	iVar6 = unk_0xD41282265B0A744C(iParam0, "zone");
	Global_1638223.f_93840 = unk_0xE33C601C19270822(iVar6, "no");
	iVar7 = unk_0x560A2E3DA92FA8F8(iVar6, "vto");
	iVar8 = unk_0x560A2E3DA92FA8F8(iVar6, "vld");
	iVar9 = unk_0x560A2E3DA92FA8F8(iVar6, "zntp");
	iVar20 = unk_0x560A2E3DA92FA8F8(iVar6, "znbs");
	iVar21 = unk_0x560A2E3DA92FA8F8(iVar6, "znwd");
	iVar22 = unk_0x560A2E3DA92FA8F8(iVar6, "znwvd");
	iVar23 = unk_0x560A2E3DA92FA8F8(iVar6, "znatp");
	iVar24 = unk_0x560A2E3DA92FA8F8(iVar6, "znwid");
	iVar25 = unk_0x560A2E3DA92FA8F8(iVar6, "zndel");
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		StringCopy(&cVar2, "znpr", 16);
		StringIntConCat(&cVar2, iVar0, 16);
		uVar10[iVar0] = unk_0x560A2E3DA92FA8F8(iVar6, &cVar2);
		StringCopy(&cVar2, "znepr", 16);
		StringIntConCat(&cVar2, iVar0, 16);
		uVar15[iVar0] = unk_0x560A2E3DA92FA8F8(iVar6, &cVar2);
		iVar0++;
	}
	if (Global_1638223.f_93840 > 10)
	{
		Global_1638223.f_93840 = 10;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1638223.f_93840 - 1))
	{
		Global_1638223.f_93863[iVar0 /*26*/][0 /*3*/] = { unk_0xD458CBD2DA2C775D(iVar7, iVar0) };
		Global_1638223.f_93863[iVar0 /*26*/][1 /*3*/] = { unk_0xD458CBD2DA2C775D(iVar8, iVar0) };
		Global_1638223.f_93863[iVar0 /*26*/].f_9 = unk_0x27CDB7B0660BDAB1(iVar9, iVar0);
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			if (unk_0x6E1D01265BDA6BEA(uVar10[iVar1], iVar0) == 2)
			{
				Global_1638223.f_93863[iVar0 /*26*/].f_10[iVar1] = unk_0x27CDB7B0660BDAB1(uVar10[iVar1], iVar0);
			}
			else
			{
				Global_1638223.f_93863[iVar0 /*26*/].f_10[iVar1] = -1;
			}
			if (unk_0x6E1D01265BDA6BEA(uVar15[iVar1], iVar0) == 2)
			{
				Global_1638223.f_93863[iVar0 /*26*/].f_15[iVar1] = unk_0x27CDB7B0660BDAB1(uVar15[iVar1], iVar0);
			}
			else
			{
				Global_1638223.f_93863[iVar0 /*26*/].f_15[iVar1] = 99999;
			}
			iVar1++;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar20, iVar0) == 2)
		{
			Global_1638223.f_93863[iVar0 /*26*/].f_20 = unk_0x27CDB7B0660BDAB1(iVar20, iVar0);
		}
		else
		{
			Global_1638223.f_93863[iVar0 /*26*/].f_20 = 0;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar21, iVar0) == 3)
		{
			Global_1638223.f_93863[iVar0 /*26*/].f_22 = unk_0xDFB5A5508080E518(iVar21, iVar0);
		}
		else
		{
			Global_1638223.f_93863[iVar0 /*26*/].f_22 = 0f;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar22, iVar0) == 3)
		{
			Global_1638223.f_93863[iVar0 /*26*/].f_23 = unk_0xDFB5A5508080E518(iVar22, iVar0);
		}
		else
		{
			Global_1638223.f_93863[iVar0 /*26*/].f_23 = 0f;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar23, iVar0) == 2)
		{
			Global_1638223.f_93863[iVar0 /*26*/].f_8 = unk_0x27CDB7B0660BDAB1(iVar23, iVar0);
		}
		else
		{
			Global_1638223.f_93863[iVar0 /*26*/].f_8 = 0;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar24, iVar0) == 3)
		{
			Global_1638223.f_93863[iVar0 /*26*/].f_7 = unk_0xDFB5A5508080E518(iVar24, iVar0);
		}
		else
		{
			Global_1638223.f_93863[iVar0 /*26*/].f_7 = 0f;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar25, iVar0) == 2)
		{
			Global_1638223.f_93863[iVar0 /*26*/].f_21 = unk_0x27CDB7B0660BDAB1(iVar25, iVar0);
		}
		else
		{
			Global_1638223.f_93863[iVar0 /*26*/].f_21 = 0;
		}
		iVar0++;
	}
}

void func_190(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar1 = unk_0xD41282265B0A744C(iParam0, "usj");
	Global_1638223.f_93106 = unk_0xE33C601C19270822(iVar1, "no");
	iVar2 = unk_0x560A2E3DA92FA8F8(iVar1, "vto");
	iVar3 = unk_0x560A2E3DA92FA8F8(iVar1, "vld");
	iVar4 = unk_0x560A2E3DA92FA8F8(iVar1, "vcm");
	if (Global_1638223.f_93106 > 10)
	{
		Global_1638223.f_93106 = 10;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1638223.f_93106 - 1))
	{
		Global_1638223.f_93107[iVar0 /*9*/] = { unk_0xD458CBD2DA2C775D(iVar2, iVar0) };
		Global_1638223.f_93107[iVar0 /*9*/].f_3 = { unk_0xD458CBD2DA2C775D(iVar3, iVar0) };
		Global_1638223.f_93107[iVar0 /*9*/].f_6 = { unk_0xD458CBD2DA2C775D(iVar4, iVar0) };
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
	var uVar36[4];
	int iVar41;
	
	if (unk_0xD41282265B0A744C(iParam0, "ddtrig") == 0)
	{
		return;
	}
	iVar4 = unk_0xD41282265B0A744C(iParam0, "ddtrig");
	Global_1638223.f_97933 = unk_0xE33C601C19270822(iVar4, "no");
	iVar5 = unk_0x560A2E3DA92FA8F8(iVar4, "id");
	iVar6 = unk_0x560A2E3DA92FA8F8(iVar4, "fid");
	iVar7 = unk_0x560A2E3DA92FA8F8(iVar4, "rule");
	iVar8 = unk_0x560A2E3DA92FA8F8(iVar4, "team");
	iVar9 = unk_0x560A2E3DA92FA8F8(iVar4, "pos");
	iVar10 = unk_0x560A2E3DA92FA8F8(iVar4, "rad");
	iVar11 = unk_0x560A2E3DA92FA8F8(iVar4, "tdel");
	iVar12 = unk_0x560A2E3DA92FA8F8(iVar4, "tpnt");
	iVar13 = unk_0x560A2E3DA92FA8F8(iVar4, "crkls");
	iVar14 = unk_0x560A2E3DA92FA8F8(iVar4, "spveh");
	iVar15 = unk_0x560A2E3DA92FA8F8(iVar4, "spveh2");
	iVar16 = unk_0x560A2E3DA92FA8F8(iVar4, "spveh3");
	iVar17 = unk_0x560A2E3DA92FA8F8(iVar4, "spveh4");
	iVar18 = unk_0x560A2E3DA92FA8F8(iVar4, "spveh5");
	iVar19 = unk_0x560A2E3DA92FA8F8(iVar4, "skprs");
	iVar20 = unk_0x560A2E3DA92FA8F8(iVar4, "fcsped");
	iVar21 = unk_0x560A2E3DA92FA8F8(iVar4, "prty");
	iVar22 = unk_0x560A2E3DA92FA8F8(iVar4, "dbs");
	iVar23 = unk_0x560A2E3DA92FA8F8(iVar4, "dbs2");
	iVar24 = unk_0x560A2E3DA92FA8F8(iVar4, "drole");
	iVar25 = unk_0x560A2E3DA92FA8F8(iVar4, "dspk");
	iVar26 = unk_0x560A2E3DA92FA8F8(iVar4, "dspk2");
	iVar27 = unk_0x560A2E3DA92FA8F8(iVar4, "dpcr");
	iVar28 = unk_0x560A2E3DA92FA8F8(iVar4, "panim");
	iVar29 = unk_0x560A2E3DA92FA8F8(iVar4, "blok");
	iVar30 = unk_0x560A2E3DA92FA8F8(iVar4, "root");
	iVar31 = unk_0x560A2E3DA92FA8F8(iVar4, "mgveh");
	iVar32 = unk_0x560A2E3DA92FA8F8(iVar4, "vehtg");
	iVar33 = unk_0x560A2E3DA92FA8F8(iVar4, "prerq");
	iVar34 = unk_0x560A2E3DA92FA8F8(iVar4, "vehdm");
	iVar35 = unk_0x560A2E3DA92FA8F8(iVar4, "vehpir");
	iVar41 = unk_0x560A2E3DA92FA8F8(iVar4, "dwsg");
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		StringCopy(&cVar2, "trl", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar36[iVar0] = unk_0x560A2E3DA92FA8F8(iVar4, &cVar2);
		iVar0++;
	}
	if (Global_1638223.f_97933 > 69)
	{
		Global_1638223.f_97933 = 69;
	}
	if (unk_0x6E1D01265BDA6BEA(iVar8, 0) == 2)
	{
		iVar0 = 0;
		while (iVar0 <= (Global_1638223.f_97933 - 1))
		{
			if (unk_0x6E1D01265BDA6BEA(iVar8, iVar0) == 2)
			{
				func_192(&(Global_1638223.f_94189[iVar0 /*50*/]), iVar0);
				if (iVar6 != 0 && unk_0x6E1D01265BDA6BEA(iVar6, iVar0) == 2)
				{
					Global_1638223.f_94189[iVar0 /*50*/].f_1 = unk_0x27CDB7B0660BDAB1(iVar6, iVar0);
				}
				if (iVar5 != 0)
				{
					Global_1638223.f_94189[iVar0 /*50*/] = unk_0x27CDB7B0660BDAB1(iVar5, iVar0);
				}
				if (iVar7 != 0)
				{
					Global_1638223.f_94189[iVar0 /*50*/].f_2 = unk_0x27CDB7B0660BDAB1(iVar7, iVar0);
				}
				if (iVar8 != 0)
				{
					Global_1638223.f_94189[iVar0 /*50*/].f_3 = unk_0x27CDB7B0660BDAB1(iVar8, iVar0);
				}
				if (iVar9 != 0)
				{
					Global_1638223.f_94189[iVar0 /*50*/].f_6 = { unk_0xD458CBD2DA2C775D(iVar9, iVar0) };
				}
				if (iVar10 != 0)
				{
					Global_1638223.f_94189[iVar0 /*50*/].f_9 = unk_0xDFB5A5508080E518(iVar10, iVar0);
				}
				if (iVar11 != 0)
				{
					Global_1638223.f_94189[iVar0 /*50*/].f_5 = unk_0x27CDB7B0660BDAB1(iVar11, iVar0);
				}
				if (iVar12 != 0)
				{
					Global_1638223.f_94189[iVar0 /*50*/].f_12 = unk_0x27CDB7B0660BDAB1(iVar12, iVar0);
				}
				if (iVar21 != 0)
				{
					Global_1638223.f_94189[iVar0 /*50*/].f_13 = unk_0x27CDB7B0660BDAB1(iVar21, iVar0);
				}
				if (iVar22 != 0)
				{
					Global_1638223.f_94189[iVar0 /*50*/].f_10 = unk_0x27CDB7B0660BDAB1(iVar22, iVar0);
				}
				if (iVar23 != 0)
				{
					Global_1638223.f_94189[iVar0 /*50*/].f_11 = unk_0x27CDB7B0660BDAB1(iVar23, iVar0);
				}
				if (iVar24 != 0 && unk_0x6E1D01265BDA6BEA(iVar24, iVar0) == 2)
				{
					Global_1638223.f_94189[iVar0 /*50*/].f_4 = unk_0x27CDB7B0660BDAB1(iVar24, iVar0);
				}
				else
				{
					Global_1638223.f_94189[iVar0 /*50*/].f_4 = 0;
				}
				if (iVar31 != 0 && unk_0x6E1D01265BDA6BEA(iVar31, iVar0) == 2)
				{
					Global_1638223.f_94189[iVar0 /*50*/].f_17 = unk_0x27CDB7B0660BDAB1(iVar31, iVar0);
				}
				if (iVar13 != 0 && unk_0x6E1D01265BDA6BEA(iVar13, iVar0) == 2)
				{
					Global_1638223.f_94189[iVar0 /*50*/].f_22 = unk_0x27CDB7B0660BDAB1(iVar13, iVar0);
				}
				if (iVar14 != 0 && unk_0x6E1D01265BDA6BEA(iVar14, iVar0) == 2)
				{
					Global_1638223.f_94189[iVar0 /*50*/].f_29 = unk_0x27CDB7B0660BDAB1(iVar14, iVar0);
				}
				if (iVar15 != 0 && unk_0x6E1D01265BDA6BEA(iVar15, iVar0) == 2)
				{
					Global_1638223.f_94189[iVar0 /*50*/].f_30 = unk_0x27CDB7B0660BDAB1(iVar15, iVar0);
				}
				if (iVar16 != 0 && unk_0x6E1D01265BDA6BEA(iVar16, iVar0) == 2)
				{
					Global_1638223.f_94189[iVar0 /*50*/].f_31 = unk_0x27CDB7B0660BDAB1(iVar16, iVar0);
				}
				if (iVar17 != 0 && unk_0x6E1D01265BDA6BEA(iVar17, iVar0) == 2)
				{
					Global_1638223.f_94189[iVar0 /*50*/].f_32 = unk_0x27CDB7B0660BDAB1(iVar17, iVar0);
				}
				if (iVar18 != 0 && unk_0x6E1D01265BDA6BEA(iVar18, iVar0) == 2)
				{
					Global_1638223.f_94189[iVar0 /*50*/].f_33 = unk_0x27CDB7B0660BDAB1(iVar18, iVar0);
				}
				if (iVar19 != 0 && unk_0x6E1D01265BDA6BEA(iVar19, iVar0) == 2)
				{
					Global_1638223.f_94189[iVar0 /*50*/].f_34 = unk_0x27CDB7B0660BDAB1(iVar19, iVar0);
				}
				if (iVar20 != 0 && unk_0x6E1D01265BDA6BEA(iVar20, iVar0) == 2)
				{
					Global_1638223.f_94189[iVar0 /*50*/].f_23 = unk_0x27CDB7B0660BDAB1(iVar20, iVar0);
				}
				if (iVar25 != 0 && unk_0x6E1D01265BDA6BEA(iVar25, iVar0) == 2)
				{
					Global_1638223.f_94189[iVar0 /*50*/].f_14 = unk_0x27CDB7B0660BDAB1(iVar25, iVar0);
				}
				if (iVar26 != 0 && unk_0x6E1D01265BDA6BEA(iVar26, iVar0) == 2)
				{
					Global_1638223.f_94189[iVar0 /*50*/].f_15 = unk_0x27CDB7B0660BDAB1(iVar26, iVar0);
				}
				if (iVar27 != 0 && unk_0x6E1D01265BDA6BEA(iVar27, iVar0) == 2)
				{
					Global_1638223.f_94189[iVar0 /*50*/].f_35 = unk_0x27CDB7B0660BDAB1(iVar27, iVar0);
				}
				if (iVar28 != 0 && unk_0x6E1D01265BDA6BEA(iVar28, iVar0) == 2)
				{
					Global_1638223.f_94189[iVar0 /*50*/].f_16 = unk_0x27CDB7B0660BDAB1(iVar28, iVar0);
				}
				if (iVar32 != 0 && unk_0x6E1D01265BDA6BEA(iVar32, iVar0) == 2)
				{
					Global_1638223.f_94189[iVar0 /*50*/].f_18 = unk_0x27CDB7B0660BDAB1(iVar32, iVar0);
				}
				if (iVar35 != 0 && unk_0x6E1D01265BDA6BEA(iVar35, iVar0) == 2)
				{
					Global_1638223.f_94189[iVar0 /*50*/].f_19 = unk_0x27CDB7B0660BDAB1(iVar35, iVar0);
				}
				if (iVar33 != 0 && unk_0x6E1D01265BDA6BEA(iVar33, iVar0) == 2)
				{
					Global_1638223.f_94189[iVar0 /*50*/].f_20 = unk_0x27CDB7B0660BDAB1(iVar33, iVar0);
				}
				if (iVar34 != 0 && unk_0x6E1D01265BDA6BEA(iVar34, iVar0) == 2)
				{
					Global_1638223.f_94189[iVar0 /*50*/].f_21 = unk_0x27CDB7B0660BDAB1(iVar34, iVar0);
				}
				iVar1 = 0;
				while (iVar1 <= 3)
				{
					if (uVar36[iVar1] != 0 && unk_0x6E1D01265BDA6BEA(uVar36[iVar1], iVar0) == 2)
					{
						Global_1638223.f_94189[iVar0 /*50*/].f_24[iVar1] = unk_0x27CDB7B0660BDAB1(uVar36[iVar1], iVar0);
					}
					iVar1++;
				}
				if (iVar41 != 0 && unk_0x6E1D01265BDA6BEA(iVar41, iVar0) == 2)
				{
					Global_1638223.f_94189[iVar0 /*50*/].f_48 = unk_0x27CDB7B0660BDAB1(iVar41, iVar0);
				}
				else
				{
					Global_1638223.f_94189[iVar0 /*50*/].f_48 = 0;
				}
				if (iVar29 != 0)
				{
					StringCopy(&(Global_1638223.f_94189[iVar0 /*50*/].f_36), unk_0x71104AC03D1921C0(iVar29, iVar0), 24);
				}
				if (iVar30 != 0)
				{
					StringCopy(&(Global_1638223.f_94189[iVar0 /*50*/].f_42), unk_0x71104AC03D1921C0(iVar30, iVar0), 24);
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= (Global_1638223.f_97933 - 1))
		{
			Global_1638223.f_94189[iVar0 /*50*/] = 0;
			Global_1638223.f_94189[iVar0 /*50*/].f_2 = -1;
			Global_1638223.f_94189[iVar0 /*50*/].f_3 = -1;
			Global_1638223.f_94189[iVar0 /*50*/].f_6 = { 0f, 0f, 0f };
			Global_1638223.f_94189[iVar0 /*50*/].f_9 = 3f;
			Global_1638223.f_94189[iVar0 /*50*/].f_5 = 0;
			Global_1638223.f_94189[iVar0 /*50*/].f_12 = -1;
			Global_1638223.f_94189[iVar0 /*50*/].f_22 = 0;
			Global_1638223.f_94189[iVar0 /*50*/].f_29 = -1;
			Global_1638223.f_94189[iVar0 /*50*/].f_30 = -1;
			Global_1638223.f_94189[iVar0 /*50*/].f_31 = -1;
			Global_1638223.f_94189[iVar0 /*50*/].f_32 = -1;
			Global_1638223.f_94189[iVar0 /*50*/].f_33 = -1;
			Global_1638223.f_94189[iVar0 /*50*/].f_34 = 0;
			Global_1638223.f_94189[iVar0 /*50*/].f_13 = 0;
			Global_1638223.f_94189[iVar0 /*50*/].f_10 = 0;
			Global_1638223.f_94189[iVar0 /*50*/].f_11 = 0;
			Global_1638223.f_94189[iVar0 /*50*/].f_4 = 0;
			Global_1638223.f_94189[iVar0 /*50*/].f_14 = -1;
			Global_1638223.f_94189[iVar0 /*50*/].f_15 = -1;
			Global_1638223.f_94189[iVar0 /*50*/].f_16 = 0;
			StringCopy(&(Global_1638223.f_94189[iVar0 /*50*/].f_36), "", 24);
			StringCopy(&(Global_1638223.f_94189[iVar0 /*50*/].f_42), "", 24);
			Global_1638223.f_94189[iVar0 /*50*/].f_17 = -1;
			Global_1638223.f_94189[iVar0 /*50*/].f_18 = -1;
			Global_1638223.f_94189[iVar0 /*50*/].f_20 = -1;
			Global_1638223.f_94189[iVar0 /*50*/].f_21 = 0;
			Global_1638223.f_94189[iVar0 /*50*/].f_19 = -1;
			Global_1638223.f_94189[iVar0 /*50*/].f_48 = 0;
			Global_1638223.f_94189[iVar0 /*50*/].f_35 = 0;
			iVar0++;
		}
	}
	if (unk_0x7ADD5F9CC9AA2359(iParam0, "dtmp") == 2)
	{
		Global_1638223.f_97929[0] = unk_0xE33C601C19270822(iParam0, "dtmp");
	}
	else
	{
		Global_1638223.f_97929[0] = 0;
	}
	if (unk_0x7ADD5F9CC9AA2359(iParam0, "dtmp2") == 2)
	{
		Global_1638223.f_97929[1] = unk_0xE33C601C19270822(iParam0, "dtmp2");
	}
	else
	{
		Global_1638223.f_97929[1] = 0;
	}
	if (unk_0x7ADD5F9CC9AA2359(iParam0, "dtmp3") == 2)
	{
		Global_1638223.f_97929[2] = unk_0xE33C601C19270822(iParam0, "dtmp3");
	}
	else
	{
		Global_1638223.f_97929[2] = 0;
	}
}

void func_192(var uParam0, int iParam1)
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
	uParam0->f_20 = -1;
	uParam0->f_18 = -1;
	uParam0->f_21 = 0;
	uParam0->f_19 = -1;
	uParam0->f_22 = 0;
	uParam0->f_29 = -1;
	uParam0->f_30 = -1;
	uParam0->f_31 = -1;
	uParam0->f_32 = -1;
	uParam0->f_33 = -1;
	uParam0->f_34 = 0;
	uParam0->f_23 = -1;
	uParam0->f_35 = 0;
	StringCopy(&(uParam0->f_36), "", 24);
	StringCopy(&(uParam0->f_42), "", 24);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		uParam0->f_24[iVar0] = -1;
		iVar0++;
	}
	uParam0->f_48 = 0;
	if (iParam1 != -1)
	{
		unk_0x507FE690B1271947(&(Global_1638223.f_97929[(iParam1 / 32)]), (iParam1 % 32));
	}
	if (unk_0xBDD3EABACAB97D09(uParam0->f_49))
	{
		unk_0x789C84F1B8496AD0(&(uParam0->f_49));
	}
}

void func_193(int iParam0)
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
	var uVar34[3];
	var uVar38[3];
	int iVar42;
	char[] cVar43[8];
	
	iVar2 = unk_0xD41282265B0A744C(iParam0, "race");
	Global_1638223.f_44246 = unk_0xE33C601C19270822(iVar2, "chp");
	iVar3 = (Global_1638223.f_44246 - 1);
	Global_1638223.f_44247 = unk_0xE33C601C19270822(iVar2, "lap");
	Global_1638223.f_44248 = unk_0xE33C601C19270822(iVar2, "type");
	if (func_107() == 2)
	{
		if (Global_1638223.f_44248 == 6)
		{
			Global_1638223.f_44248 = 0;
		}
		else if (Global_1638223.f_44248 == 7)
		{
			Global_1638223.f_44248 = 1;
		}
	}
	Global_1638223.f_44249 = unk_0xE33C601C19270822(iVar2, "gtar");
	Global_1638223.f_44902 = unk_0x22B34D863B5EB347(iVar2, "head");
	Global_1638223.f_44903 = unk_0x22B34D863B5EB347(iVar2, "lrgs");
	Global_1638223.f_44904 = unk_0x22B34D863B5EB347(iVar2, "udgs");
	Global_1638223.f_44905 = unk_0x22B34D863B5EB347(iVar2, "gw");
	Global_1638223.f_44906 = unk_0x22B34D863B5EB347(iVar2, "gl");
	Global_1638223.f_44907 = unk_0xE33C601C19270822(iVar2, "lanes");
	Global_1638223.f_38622 = { unk_0xAB08124000EEAE30(iVar2, "grid") };
	Global_1638223.f_44251 = unk_0xE33C601C19270822(iVar2, "icv");
	Global_1638223.f_44253 = unk_0xE33C601C19270822(iVar2, "tri1");
	Global_1638223.f_44254 = unk_0xE33C601C19270822(iVar2, "tri2");
	Global_1638223.f_44255 = unk_0xE33C601C19270822(iVar2, "clbs");
	Global_1638223.f_44901 = unk_0xE33C601C19270822(iVar2, "ptp");
	Global_1638223.f_44899 = unk_0xE33C601C19270822(iVar2, "strtg");
	Global_1638223.f_44900 = unk_0xE33C601C19270822(iVar2, "rcdam");
	Global_1638223.f_41723 = unk_0x22B34D863B5EB347(iVar2, "rdis");
	Global_1638223.f_44896 = unk_0xE33C601C19270822(iVar2, "gridty");
	Global_1638223.f_112805 = unk_0x07BD029EFF536ADD(iVar2, "iprem");
	Global_1638223.f_112930 = unk_0xE33C601C19270822(iVar2, "bsted");
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		StringCopy(&cVar4, "icpht", 16);
		StringIntConCat(&cVar4, iVar0, 16);
		StringCopy(&(Global_1638223.f_112932[iVar0 /*6*/]), unk_0xD5EE6B924304F24C(iVar2, &cVar4), 24);
		iVar0++;
	}
	iVar8 = unk_0x560A2E3DA92FA8F8(iVar2, "chh");
	iVar9 = unk_0x560A2E3DA92FA8F8(iVar2, "chs");
	iVar10 = unk_0x560A2E3DA92FA8F8(iVar2, "chl");
	iVar11 = unk_0x560A2E3DA92FA8F8(iVar2, "sndchk");
	iVar12 = unk_0x560A2E3DA92FA8F8(iVar2, "sndrsp");
	iVar13 = unk_0x560A2E3DA92FA8F8(iVar2, "cpgrav");
	iVar14 = unk_0x560A2E3DA92FA8F8(iVar2, "cpgravdura");
	iVar15 = unk_0x560A2E3DA92FA8F8(iVar2, "cpwwt");
	iVar16 = unk_0x560A2E3DA92FA8F8(iVar2, "cppsst");
	iVar17 = unk_0x560A2E3DA92FA8F8(iVar2, "cpado");
	iVar18 = unk_0x560A2E3DA92FA8F8(iVar2, "cpados");
	iVar19 = unk_0x560A2E3DA92FA8F8(iVar2, "chttu");
	iVar20 = unk_0x560A2E3DA92FA8F8(iVar2, "chttr");
	iVar21 = unk_0x560A2E3DA92FA8F8(iVar2, "cpbs1");
	iVar22 = unk_0x560A2E3DA92FA8F8(iVar2, "rsp");
	iVar23 = unk_0x560A2E3DA92FA8F8(iVar2, "cdsblcu");
	iVar24 = unk_0x560A2E3DA92FA8F8(iVar2, "cpdss");
	iVar25 = unk_0x560A2E3DA92FA8F8(iVar2, "rndchk");
	iVar26 = unk_0x560A2E3DA92FA8F8(iVar2, "rndchks");
	iVar27 = unk_0x560A2E3DA92FA8F8(iVar2, "cpwtr");
	iVar28 = unk_0x560A2E3DA92FA8F8(iVar2, "cpwtrs");
	iVar29 = unk_0x560A2E3DA92FA8F8(iVar2, "cpair");
	if (Global_1638223.f_44248 == 8)
	{
		Global_1638223.f_44246 = 0;
		iVar0 = 0;
		while (iVar0 <= 69)
		{
			if (!func_120(unk_0xD458CBD2DA2C775D(iVar10, iVar0)))
			{
				Global_1638223.f_44246++;
			}
			iVar0++;
		}
		iVar3 = Global_1638223.f_44246;
	}
	iVar30 = 0;
	iVar0 = 0;
	while (iVar0 <= iVar3)
	{
		if (iVar0 < 70)
		{
			if (Global_1638223.f_44248 == 8)
			{
				iVar30 = func_195(iVar10, iVar30);
			}
			else
			{
				iVar30 = iVar0;
			}
			Global_1638223.f_39326[iVar0 /*3*/] = { unk_0xD458CBD2DA2C775D(iVar10, iVar30) };
			Global_1638223.f_39537[iVar0] = unk_0xDFB5A5508080E518(iVar8, iVar30);
			if (unk_0x6E1D01265BDA6BEA(iVar9, iVar30) == 3)
			{
				Global_1638223.f_41652[iVar0] = unk_0xDFB5A5508080E518(iVar9, iVar30);
			}
			else
			{
				Global_1638223.f_41652[iVar0] = 1f;
			}
			if (Global_1638223.f_41652[iVar0] < 1f)
			{
				Global_1638223.f_41652[iVar0] = 1f;
			}
			Global_1638223.f_40380[iVar0 /*3*/] = { unk_0xD458CBD2DA2C775D(iVar11, iVar30) };
			Global_1638223.f_40591[iVar0] = unk_0xDFB5A5508080E518(iVar12, iVar30);
			Global_1638223.f_40662[iVar0] = unk_0x27CDB7B0660BDAB1(iVar13, iVar30);
			Global_1638223.f_40804[iVar0] = unk_0x27CDB7B0660BDAB1(iVar14, iVar30);
			Global_1638223.f_40733[iVar0] = unk_0x27CDB7B0660BDAB1(iVar15, iVar30);
			Global_1638223.f_40875[iVar0] = unk_0x27CDB7B0660BDAB1(iVar16, iVar30);
			Global_1638223.f_40946[iVar0 /*3*/] = { unk_0xD458CBD2DA2C775D(iVar17, iVar30) };
			Global_1638223.f_41157[iVar0 /*3*/] = { unk_0xD458CBD2DA2C775D(iVar18, iVar30) };
			Global_1638223.f_41368[iVar0] = unk_0x27CDB7B0660BDAB1(iVar19, iVar30);
			Global_1638223.f_41439[iVar0] = unk_0x27CDB7B0660BDAB1(iVar20, iVar30);
			Global_1638223.f_39608[iVar0] = unk_0x27CDB7B0660BDAB1(iVar21, iVar30);
			if (!unk_0xAA4F14DA15DB0B51(Global_1638223.f_39608[iVar0], 0))
			{
				if (unk_0x6E1D01265BDA6BEA(iVar22, iVar30) == 1)
				{
					func_194(&(Global_1638223.f_39608[iVar0]), 5, unk_0x2D6F95A16E2F0D25(iVar22, iVar30));
				}
				if (unk_0x6E1D01265BDA6BEA(iVar23, iVar30) == 1)
				{
					func_194(&(Global_1638223.f_39608[iVar0]), 3, unk_0x2D6F95A16E2F0D25(iVar23, iVar30));
				}
				if (unk_0x6E1D01265BDA6BEA(iVar24, iVar30) == 1)
				{
					func_194(&(Global_1638223.f_39608[iVar0]), 6, unk_0x2D6F95A16E2F0D25(iVar24, iVar30));
				}
				if (unk_0x6E1D01265BDA6BEA(iVar25, iVar30) == 1)
				{
					func_194(&(Global_1638223.f_39608[iVar0]), 1, unk_0x2D6F95A16E2F0D25(iVar25, iVar30));
				}
				if (unk_0x6E1D01265BDA6BEA(iVar26, iVar30) == 1)
				{
					func_194(&(Global_1638223.f_39608[iVar0]), 2, unk_0x2D6F95A16E2F0D25(iVar26, iVar30));
				}
				if (unk_0x6E1D01265BDA6BEA(iVar27, iVar30) == 1)
				{
					func_194(&(Global_1638223.f_39608[iVar0]), 7, unk_0x2D6F95A16E2F0D25(iVar27, iVar30));
				}
				if (unk_0x6E1D01265BDA6BEA(iVar28, iVar30) == 1)
				{
					func_194(&(Global_1638223.f_39608[iVar0]), 8, unk_0x2D6F95A16E2F0D25(iVar28, iVar30));
				}
				if (unk_0x6E1D01265BDA6BEA(iVar29, iVar30) == 1)
				{
					func_194(&(Global_1638223.f_39608[iVar0]), 9, unk_0x2D6F95A16E2F0D25(iVar29, iVar30));
				}
				unk_0xF6082E2ADA1C795B(&(Global_1638223.f_39608[iVar0]), 0);
			}
			iVar30++;
		}
		iVar0++;
	}
	iVar31 = unk_0x560A2E3DA92FA8F8(iVar2, "vta");
	iVar0 = 0;
	while (iVar0 <= (Global_1638223.f_27 - 1))
	{
		if (iVar0 < 32)
		{
			iVar1 = unk_0x27CDB7B0660BDAB1(iVar31, iVar0);
			Global_1638223.f_44910[iVar0] = iVar1;
		}
		iVar0++;
	}
	iVar32 = unk_0x560A2E3DA92FA8F8(iVar2, "aveh");
	iVar33 = unk_0x560A2E3DA92FA8F8(iVar2, "adlc");
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		iVar1 = unk_0x27CDB7B0660BDAB1(iVar32, iVar0);
		Global_1638223.f_44256[iVar0] = iVar1;
		Global_1638223.f_44273[iVar0] = 0;
		Global_1638223.f_44273[iVar0] = unk_0x27CDB7B0660BDAB1(iVar33, iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		StringCopy(&cVar43, "vspn", 8);
		StringIntConCat(&cVar43, iVar0, 8);
		uVar34[iVar0] = unk_0x560A2E3DA92FA8F8(iVar2, &cVar43);
		iVar42 = 0;
		while (iVar42 <= iVar3)
		{
			Global_1638223.f_38625[iVar42 /*10*/][iVar0 /*3*/] = { unk_0xD458CBD2DA2C775D(uVar34[iVar0], iVar42) };
			iVar42++;
		}
		StringCopy(&cVar43, "vspns", 8);
		StringIntConCat(&cVar43, iVar0, 8);
		uVar38[iVar0] = unk_0x560A2E3DA92FA8F8(iVar2, &cVar43);
		iVar42 = 0;
		while (iVar42 <= iVar3)
		{
			if (unk_0x6E1D01265BDA6BEA(uVar38[iVar0], iVar42) == 5)
			{
				Global_1638223.f_39679[iVar42 /*10*/][iVar0 /*3*/] = { unk_0xD458CBD2DA2C775D(uVar38[iVar0], iVar42) };
			}
			else
			{
				Global_1638223.f_39679[iVar42 /*10*/][iVar0 /*3*/] = { 0f, 0f, 0f };
			}
			iVar42++;
		}
		iVar0++;
	}
}

void func_194(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		unk_0xF6082E2ADA1C795B(uParam0, iParam1);
	}
	else
	{
		unk_0x507FE690B1271947(uParam0, iParam1);
	}
}

int func_195(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	while (iVar0 <= 69)
	{
		if (!func_120(unk_0xD458CBD2DA2C775D(iParam0, iVar0)))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_196(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (unk_0xD41282265B0A744C(iParam0, "otzone") == 0)
	{
		return;
	}
	iVar1 = unk_0xD41282265B0A744C(iParam0, "otzone");
	iVar2 = unk_0x560A2E3DA92FA8F8(iVar1, "otvo");
	iVar3 = unk_0x560A2E3DA92FA8F8(iVar1, "otvt");
	iVar4 = unk_0x560A2E3DA92FA8F8(iVar1, "otbs");
	iVar5 = unk_0x560A2E3DA92FA8F8(iVar1, "otpg");
	iVar6 = unk_0x560A2E3DA92FA8F8(iVar1, "otrw");
	iVar7 = unk_0x560A2E3DA92FA8F8(iVar1, "otpl");
	if (unk_0x7ADD5F9CC9AA2359(iVar1, "otz") == 2)
	{
		Global_1638223.f_112951 = unk_0xE33C601C19270822(iVar1, "otz");
	}
	else
	{
		Global_1638223.f_112951 = 0;
	}
	if (Global_1638223.f_112951 > 30)
	{
		Global_1638223.f_112951 = 30;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1638223.f_112951 - 1))
	{
		Global_1638223.f_112952[iVar0 /*11*/][0 /*3*/] = { unk_0xD458CBD2DA2C775D(iVar2, iVar0) };
		Global_1638223.f_112952[iVar0 /*11*/][1 /*3*/] = { unk_0xD458CBD2DA2C775D(iVar3, iVar0) };
		if (unk_0x6E1D01265BDA6BEA(iVar4, iVar0) == 2)
		{
			Global_1638223.f_112952[iVar0 /*11*/].f_7 = unk_0x27CDB7B0660BDAB1(iVar4, iVar0);
		}
		else
		{
			Global_1638223.f_112952[iVar0 /*11*/].f_7 = 0;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar5, iVar0) == 2)
		{
			Global_1638223.f_112952[iVar0 /*11*/].f_8 = unk_0x27CDB7B0660BDAB1(iVar5, iVar0);
		}
		else
		{
			Global_1638223.f_112952[iVar0 /*11*/].f_8 = 0;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar6, iVar0) == 3)
		{
			Global_1638223.f_112952[iVar0 /*11*/].f_10 = unk_0xDFB5A5508080E518(iVar6, iVar0);
		}
		else if (unk_0x6E1D01265BDA6BEA(iVar6, iVar0) == 2)
		{
			Global_1638223.f_112952[iVar0 /*11*/].f_10 = unk_0xBBDA792448DB5A89(unk_0x27CDB7B0660BDAB1(iVar6, iVar0));
		}
		else
		{
			Global_1638223.f_112952[iVar0 /*11*/].f_10 = 0f;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar7, iVar0) == 2)
		{
			Global_1638223.f_112952[iVar0 /*11*/].f_9 = unk_0x27CDB7B0660BDAB1(iVar7, iVar0);
		}
		else
		{
			Global_1638223.f_112952[iVar0 /*11*/].f_9 = 0;
		}
		iVar0++;
	}
}

void func_197(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0xD41282265B0A744C(iParam0, "dhprop") == 0)
	{
		return;
	}
	iVar1 = unk_0xD41282265B0A744C(iParam0, "dhprop");
	Global_1638223.f_107859 = unk_0xE33C601C19270822(iVar1, "no");
	iVar2 = unk_0x560A2E3DA92FA8F8(iVar1, "pos");
	iVar3 = unk_0x560A2E3DA92FA8F8(iVar1, "mn");
	if (Global_1638223.f_107859 > 25)
	{
		Global_1638223.f_107859 = 25;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1638223.f_107859 - 1))
	{
		if (unk_0x6E1D01265BDA6BEA(iVar2, iVar0) == 5)
		{
			Global_1638223.f_107758[iVar0 /*4*/] = { unk_0xD458CBD2DA2C775D(iVar2, iVar0) };
			Global_1638223.f_107758[iVar0 /*4*/].f_3 = unk_0x27CDB7B0660BDAB1(iVar3, iVar0);
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
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (unk_0xD41282265B0A744C(iParam0, "ddblip") == 0)
	{
		return;
	}
	iVar1 = unk_0xD41282265B0A744C(iParam0, "ddblip");
	Global_1638223.f_107757 = unk_0xE33C601C19270822(iVar1, "no");
	iVar2 = unk_0x560A2E3DA92FA8F8(iVar1, "pos");
	iVar3 = unk_0x560A2E3DA92FA8F8(iVar1, "rule");
	iVar4 = unk_0x560A2E3DA92FA8F8(iVar1, "team");
	iVar5 = unk_0x560A2E3DA92FA8F8(iVar1, "type");
	iVar6 = unk_0x560A2E3DA92FA8F8(iVar1, "size");
	iVar7 = unk_0x560A2E3DA92FA8F8(iVar1, "veh");
	iVar8 = unk_0x560A2E3DA92FA8F8(iVar1, "clr");
	iVar9 = unk_0x560A2E3DA92FA8F8(iVar1, "bits");
	if (Global_1638223.f_107757 > 10)
	{
		Global_1638223.f_107757 = 10;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1638223.f_107757 - 1))
	{
		if (unk_0x6E1D01265BDA6BEA(iVar2, iVar0) == 5)
		{
			Global_1638223.f_107656[iVar0 /*10*/] = { unk_0xD458CBD2DA2C775D(iVar2, iVar0) };
			Global_1638223.f_107656[iVar0 /*10*/].f_3 = unk_0x27CDB7B0660BDAB1(iVar3, iVar0);
			Global_1638223.f_107656[iVar0 /*10*/].f_4 = unk_0x27CDB7B0660BDAB1(iVar4, iVar0);
			Global_1638223.f_107656[iVar0 /*10*/].f_8 = unk_0x27CDB7B0660BDAB1(iVar8, iVar0);
			Global_1638223.f_107656[iVar0 /*10*/].f_9 = unk_0x27CDB7B0660BDAB1(iVar9, iVar0);
		}
		if (unk_0x6E1D01265BDA6BEA(iVar5, iVar0) == 2)
		{
			Global_1638223.f_107656[iVar0 /*10*/].f_6 = unk_0x27CDB7B0660BDAB1(iVar5, iVar0);
		}
		else
		{
			Global_1638223.f_107656[iVar0 /*10*/].f_6 = 0;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar6, iVar0) == 2)
		{
			Global_1638223.f_107656[iVar0 /*10*/].f_5 = unk_0x27CDB7B0660BDAB1(iVar6, iVar0);
		}
		else
		{
			Global_1638223.f_107656[iVar0 /*10*/].f_5 = 4;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar7, iVar0) == 2)
		{
			Global_1638223.f_107656[iVar0 /*10*/].f_7 = unk_0x27CDB7B0660BDAB1(iVar7, iVar0);
		}
		else
		{
			Global_1638223.f_107656[iVar0 /*10*/].f_7 = -1;
		}
		iVar0++;
	}
}

void func_199(int iParam0)
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
	
	if (unk_0xD41282265B0A744C(iParam0, "mocap") == 0)
	{
		return;
	}
	iVar5 = unk_0xD41282265B0A744C(iParam0, "mocap");
	iVar6 = unk_0x560A2E3DA92FA8F8(iVar5, "name");
	iVar7 = unk_0x560A2E3DA92FA8F8(iVar5, "bits");
	iVar8 = unk_0x560A2E3DA92FA8F8(iVar5, "bits2");
	iVar9 = unk_0x560A2E3DA92FA8F8(iVar5, "timer");
	iVar10 = unk_0x560A2E3DA92FA8F8(iVar5, "rng");
	iVar11 = unk_0x560A2E3DA92FA8F8(iVar5, "ccp");
	iVar12 = unk_0x560A2E3DA92FA8F8(iVar5, "ccr");
	iVar13 = unk_0x560A2E3DA92FA8F8(iVar5, "ccs");
	iVar62 = unk_0x560A2E3DA92FA8F8(iVar5, "pcvid");
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (unk_0x6E1D01265BDA6BEA(iVar6, iVar0) == 4)
		{
			StringCopy(&(Global_1638223.f_104676[iVar0 /*434*/]), unk_0x71104AC03D1921C0(iVar6, iVar0), 64);
		}
		else
		{
			StringCopy(&(Global_1638223.f_104676[iVar0 /*434*/]), "", 64);
		}
		if (unk_0x6E1D01265BDA6BEA(iVar7, iVar0) == 2)
		{
			Global_1638223.f_104676[iVar0 /*434*/].f_16 = unk_0x27CDB7B0660BDAB1(iVar7, iVar0);
		}
		else
		{
			Global_1638223.f_104676[iVar0 /*434*/].f_16 = 0;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar8, iVar0) == 2)
		{
			Global_1638223.f_104676[iVar0 /*434*/].f_17 = unk_0x27CDB7B0660BDAB1(iVar8, iVar0);
		}
		else
		{
			Global_1638223.f_104676[iVar0 /*434*/].f_17 = 0;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar62, iVar0) == 2)
		{
			Global_1638223.f_104676[iVar0 /*434*/].f_424 = unk_0x27CDB7B0660BDAB1(iVar62, iVar0);
		}
		else
		{
			Global_1638223.f_104676[iVar0 /*434*/].f_424 = -1;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar9, iVar0) == 2)
		{
			Global_1638223.f_104676[iVar0 /*434*/].f_61 = unk_0x27CDB7B0660BDAB1(iVar9, iVar0);
		}
		else
		{
			Global_1638223.f_104676[iVar0 /*434*/].f_61 = 0;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar10, iVar0) == 2)
		{
			Global_1638223.f_104676[iVar0 /*434*/].f_62 = unk_0x27CDB7B0660BDAB1(iVar10, iVar0);
		}
		else
		{
			Global_1638223.f_104676[iVar0 /*434*/].f_62 = 0;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar11, iVar0) == 5)
		{
			Global_1638223.f_104676[iVar0 /*434*/].f_54 = { unk_0xD458CBD2DA2C775D(iVar11, iVar0) };
		}
		else
		{
			Global_1638223.f_104676[iVar0 /*434*/].f_54 = { 0f, 0f, 0f };
		}
		if (unk_0x6E1D01265BDA6BEA(iVar12, iVar0) == 3)
		{
			Global_1638223.f_104676[iVar0 /*434*/].f_60 = unk_0xDFB5A5508080E518(iVar12, iVar0);
		}
		else
		{
			Global_1638223.f_104676[iVar0 /*434*/].f_60 = 0f;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar13, iVar0) == 5)
		{
			Global_1638223.f_104676[iVar0 /*434*/].f_57 = { unk_0xD458CBD2DA2C775D(iVar13, iVar0) };
		}
		else
		{
			Global_1638223.f_104676[iVar0 /*434*/].f_57 = { 0f, 0f, 0f };
		}
		StringCopy(&cVar3, "pstr", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar14[iVar0] = unk_0x560A2E3DA92FA8F8(iVar5, &cVar3);
		StringCopy(&cVar3, "pend", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar20[iVar0] = unk_0x560A2E3DA92FA8F8(iVar5, &cVar3);
		StringCopy(&cVar3, "strh", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar26[iVar0] = unk_0x560A2E3DA92FA8F8(iVar5, &cVar3);
		StringCopy(&cVar3, "endh", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar32[iVar0] = unk_0x560A2E3DA92FA8F8(iVar5, &cVar3);
		StringCopy(&cVar3, "mcei", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar38[iVar0] = unk_0x560A2E3DA92FA8F8(iVar5, &cVar3);
		StringCopy(&cVar3, "mcet", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar44[iVar0] = unk_0x560A2E3DA92FA8F8(iVar5, &cVar3);
		StringCopy(&cVar3, "mcebs", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar50[iVar0] = unk_0x560A2E3DA92FA8F8(iVar5, &cVar3);
		StringCopy(&cVar3, "mceh", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar56[iVar0] = unk_0x560A2E3DA92FA8F8(iVar5, &cVar3);
		StringCopy(&cVar3, "pvpls", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar63[iVar0] = unk_0x560A2E3DA92FA8F8(iVar5, &cVar3);
		StringCopy(&cVar3, "pvpds", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar69[iVar0] = unk_0x560A2E3DA92FA8F8(iVar5, &cVar3);
		StringCopy(&cVar3, "pvpdi", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar75[iVar0] = unk_0x560A2E3DA92FA8F8(iVar5, &cVar3);
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			if (unk_0x6E1D01265BDA6BEA(uVar14[iVar0], iVar1) == 5)
			{
				Global_1638223.f_104676[iVar0 /*434*/].f_18[iVar1 /*3*/] = { unk_0xD458CBD2DA2C775D(uVar14[iVar0], iVar1) };
			}
			else
			{
				Global_1638223.f_104676[iVar0 /*434*/].f_18[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x6E1D01265BDA6BEA(uVar20[iVar0], iVar1) == 5)
			{
				Global_1638223.f_104676[iVar0 /*434*/].f_31[iVar1 /*3*/] = { unk_0xD458CBD2DA2C775D(uVar20[iVar0], iVar1) };
			}
			else
			{
				Global_1638223.f_104676[iVar0 /*434*/].f_31[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x6E1D01265BDA6BEA(uVar26[iVar0], iVar1) == 3)
			{
				Global_1638223.f_104676[iVar0 /*434*/].f_44[iVar1] = unk_0xDFB5A5508080E518(uVar26[iVar0], iVar1);
			}
			else
			{
				Global_1638223.f_104676[iVar0 /*434*/].f_44[iVar1] = 0f;
			}
			if (unk_0x6E1D01265BDA6BEA(uVar32[iVar0], iVar1) == 3)
			{
				Global_1638223.f_104676[iVar0 /*434*/].f_49[iVar1] = unk_0xDFB5A5508080E518(uVar32[iVar0], iVar1);
			}
			else
			{
				Global_1638223.f_104676[iVar0 /*434*/].f_49[iVar1] = 0f;
			}
			iVar1++;
		}
		iVar2 = 0;
		while (iVar2 <= 3)
		{
			if (unk_0x6E1D01265BDA6BEA(uVar63[iVar0], iVar2) == 2)
			{
				Global_1638223.f_104676[iVar0 /*434*/].f_425[iVar2] = unk_0x27CDB7B0660BDAB1(uVar63[iVar0], iVar2);
			}
			else
			{
				Global_1638223.f_104676[iVar0 /*434*/].f_425[iVar2] = 0;
			}
			iVar2++;
		}
		iVar2 = 0;
		while (iVar2 <= 0)
		{
			if (unk_0x6E1D01265BDA6BEA(uVar69[iVar0], iVar2) == 2)
			{
				Global_1638223.f_104676[iVar0 /*434*/].f_430[iVar2] = unk_0x27CDB7B0660BDAB1(uVar69[iVar0], iVar2);
			}
			else
			{
				Global_1638223.f_104676[iVar0 /*434*/].f_430[iVar2] = 0;
			}
			if (unk_0x6E1D01265BDA6BEA(uVar75[iVar0], iVar2) == 2)
			{
				Global_1638223.f_104676[iVar0 /*434*/].f_432[iVar2] = unk_0x27CDB7B0660BDAB1(uVar75[iVar0], iVar2);
			}
			else
			{
				Global_1638223.f_104676[iVar0 /*434*/].f_432[iVar2] = 0;
			}
			iVar2++;
		}
		iVar1 = 0;
		while (iVar1 <= 29)
		{
			if (unk_0x6E1D01265BDA6BEA(uVar38[iVar0], iVar1) == 2)
			{
				Global_1638223.f_104676[iVar0 /*434*/].f_63[iVar1 /*12*/].f_1 = unk_0x27CDB7B0660BDAB1(uVar38[iVar0], iVar1);
			}
			else
			{
				Global_1638223.f_104676[iVar0 /*434*/].f_63[iVar1 /*12*/].f_1 = -1;
			}
			if (unk_0x6E1D01265BDA6BEA(uVar44[iVar0], iVar1) == 2)
			{
				Global_1638223.f_104676[iVar0 /*434*/].f_63[iVar1 /*12*/] = unk_0x27CDB7B0660BDAB1(uVar44[iVar0], iVar1);
			}
			else
			{
				Global_1638223.f_104676[iVar0 /*434*/].f_63[iVar1 /*12*/] = -1;
			}
			if (unk_0x6E1D01265BDA6BEA(uVar50[iVar0], iVar1) == 2)
			{
				Global_1638223.f_104676[iVar0 /*434*/].f_63[iVar1 /*12*/].f_2 = unk_0x27CDB7B0660BDAB1(uVar44[iVar0], iVar1);
			}
			else
			{
				Global_1638223.f_104676[iVar0 /*434*/].f_63[iVar1 /*12*/].f_2 = 0;
			}
			if (unk_0x6E1D01265BDA6BEA(uVar56[iVar0], iVar1) == 4)
			{
				StringCopy(&(Global_1638223.f_104676[iVar0 /*434*/].f_63[iVar1 /*12*/].f_4), unk_0x71104AC03D1921C0(uVar56[iVar0], iVar1), 32);
			}
			else
			{
				StringCopy(&(Global_1638223.f_104676[iVar0 /*434*/].f_63[iVar1 /*12*/].f_4), "", 32);
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_200(int iParam0)
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
	var uVar167[5];
	var uVar173[5];
	int iVar179;
	int iVar180;
	int iVar181;
	int iVar182;
	int iVar183;
	int iVar184;
	int iVar185;
	
	if (unk_0xD41282265B0A744C(iParam0, "cuts") == 0)
	{
		return;
	}
	iVar4 = unk_0xD41282265B0A744C(iParam0, "cuts");
	iVar5 = unk_0x560A2E3DA92FA8F8(iVar4, "name");
	iVar6 = unk_0x560A2E3DA92FA8F8(iVar4, "bits");
	iVar7 = unk_0x560A2E3DA92FA8F8(iVar4, "shot");
	iVar8 = unk_0x560A2E3DA92FA8F8(iVar4, "anim");
	iVar9 = unk_0x560A2E3DA92FA8F8(iVar4, "midp");
	iVar10 = unk_0x560A2E3DA92FA8F8(iVar4, "rng");
	iVar179 = unk_0x560A2E3DA92FA8F8(iVar4, "train");
	iVar180 = unk_0x560A2E3DA92FA8F8(iVar4, "trahl");
	iVar181 = unk_0x560A2E3DA92FA8F8(iVar4, "traou");
	iVar182 = unk_0x560A2E3DA92FA8F8(iVar4, "trapo");
	iVar183 = unk_0x560A2E3DA92FA8F8(iVar4, "ccp");
	iVar184 = unk_0x560A2E3DA92FA8F8(iVar4, "ccr");
	iVar185 = unk_0x560A2E3DA92FA8F8(iVar4, "ccs");
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (unk_0x6E1D01265BDA6BEA(iVar5, iVar0) == 4)
		{
			StringCopy(&(Global_1638223.f_98095[iVar0 /*1316*/]), unk_0x71104AC03D1921C0(iVar5, iVar0), 16);
		}
		else
		{
			StringCopy(&(Global_1638223.f_98095[iVar0 /*1316*/]), "", 16);
		}
		if (unk_0x6E1D01265BDA6BEA(iVar6, iVar0) == 2)
		{
			Global_1638223.f_98095[iVar0 /*1316*/].f_4 = unk_0x27CDB7B0660BDAB1(iVar6, iVar0);
		}
		else
		{
			Global_1638223.f_98095[iVar0 /*1316*/].f_4 = 0;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar6, iVar0) == 2)
		{
			Global_1638223.f_98095[iVar0 /*1316*/].f_5 = unk_0x27CDB7B0660BDAB1(iVar6, iVar0);
		}
		else
		{
			Global_1638223.f_98095[iVar0 /*1316*/].f_5 = 0;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar7, iVar0) == 2)
		{
			Global_1638223.f_98095[iVar0 /*1316*/].f_90 = unk_0x27CDB7B0660BDAB1(iVar7, iVar0);
		}
		else
		{
			Global_1638223.f_98095[iVar0 /*1316*/].f_90 = 0;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar8, iVar0) == 2)
		{
			Global_1638223.f_98095[iVar0 /*1316*/].f_89 = unk_0x27CDB7B0660BDAB1(iVar8, iVar0);
		}
		else
		{
			Global_1638223.f_98095[iVar0 /*1316*/].f_89 = 0;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar9, iVar0) == 2)
		{
			Global_1638223.f_98095[iVar0 /*1316*/].f_91 = unk_0x27CDB7B0660BDAB1(iVar9, iVar0);
		}
		else
		{
			Global_1638223.f_98095[iVar0 /*1316*/].f_91 = 0;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar10, iVar0) == 2)
		{
			Global_1638223.f_98095[iVar0 /*1316*/].f_782 = unk_0x27CDB7B0660BDAB1(iVar10, iVar0);
		}
		else
		{
			Global_1638223.f_98095[iVar0 /*1316*/].f_782 = 0;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar183, iVar0) == 5)
		{
			Global_1638223.f_98095[iVar0 /*1316*/].f_775 = { unk_0xD458CBD2DA2C775D(iVar183, iVar0) };
		}
		else
		{
			Global_1638223.f_98095[iVar0 /*1316*/].f_775 = { 0f, 0f, 0f };
		}
		if (unk_0x6E1D01265BDA6BEA(iVar184, iVar0) == 3)
		{
			Global_1638223.f_98095[iVar0 /*1316*/].f_778 = unk_0xDFB5A5508080E518(iVar184, iVar0);
		}
		else
		{
			Global_1638223.f_98095[iVar0 /*1316*/].f_778 = 0f;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar185, iVar0) == 5)
		{
			Global_1638223.f_98095[iVar0 /*1316*/].f_779 = { unk_0xD458CBD2DA2C775D(iVar185, iVar0) };
		}
		else
		{
			Global_1638223.f_98095[iVar0 /*1316*/].f_779 = { 0f, 0f, 0f };
		}
		if (unk_0x6E1D01265BDA6BEA(iVar179, iVar0) == 2)
		{
			Global_1638223.f_98095[iVar0 /*1316*/].f_483 = unk_0x27CDB7B0660BDAB1(iVar179, iVar0);
		}
		else
		{
			Global_1638223.f_98095[iVar0 /*1316*/].f_483 = 0;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar180, iVar0) == 2)
		{
			Global_1638223.f_98095[iVar0 /*1316*/].f_485 = unk_0x27CDB7B0660BDAB1(iVar180, iVar0);
		}
		else
		{
			Global_1638223.f_98095[iVar0 /*1316*/].f_485 = 0;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar181, iVar0) == 2)
		{
			Global_1638223.f_98095[iVar0 /*1316*/].f_484 = unk_0x27CDB7B0660BDAB1(iVar181, iVar0);
		}
		else
		{
			Global_1638223.f_98095[iVar0 /*1316*/].f_484 = 0;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar182, iVar0) == 5)
		{
			Global_1638223.f_98095[iVar0 /*1316*/].f_486 = { unk_0xD458CBD2DA2C775D(iVar182, iVar0) };
		}
		else
		{
			Global_1638223.f_98095[iVar0 /*1316*/].f_486 = { 0f, 0f, 0f };
		}
		StringCopy(&cVar2, "int", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar11[iVar0] = unk_0x560A2E3DA92FA8F8(iVar4, &cVar2);
		StringCopy(&cVar2, "rmin", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar17[iVar0] = unk_0x560A2E3DA92FA8F8(iVar4, &cVar2);
		StringCopy(&cVar2, "rmax", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar23[iVar0] = unk_0x560A2E3DA92FA8F8(iVar4, &cVar2);
		StringCopy(&cVar2, "ctp", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar29[iVar0] = unk_0x560A2E3DA92FA8F8(iVar4, &cVar2);
		StringCopy(&cVar2, "sps", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar35[iVar0] = unk_0x560A2E3DA92FA8F8(iVar4, &cVar2);
		StringCopy(&cVar2, "eps", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar41[iVar0] = unk_0x560A2E3DA92FA8F8(iVar4, &cVar2);
		StringCopy(&cVar2, "srt", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar47[iVar0] = unk_0x560A2E3DA92FA8F8(iVar4, &cVar2);
		StringCopy(&cVar2, "ert", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar53[iVar0] = unk_0x560A2E3DA92FA8F8(iVar4, &cVar2);
		StringCopy(&cVar2, "sfv", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar59[iVar0] = unk_0x560A2E3DA92FA8F8(iVar4, &cVar2);
		StringCopy(&cVar2, "efv", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar65[iVar0] = unk_0x560A2E3DA92FA8F8(iVar4, &cVar2);
		StringCopy(&cVar2, "ati", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar131[iVar0] = unk_0x560A2E3DA92FA8F8(iVar4, &cVar2);
		StringCopy(&cVar2, "ato", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar137[iVar0] = unk_0x560A2E3DA92FA8F8(iVar4, &cVar2);
		StringCopy(&cVar2, "atr", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar143[iVar0] = unk_0x560A2E3DA92FA8F8(iVar4, &cVar2);
		StringCopy(&cVar2, "ala", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar149[iVar0] = unk_0x560A2E3DA92FA8F8(iVar4, &cVar2);
		StringCopy(&cVar2, "csp", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar155[iVar0] = unk_0x560A2E3DA92FA8F8(iVar4, &cVar2);
		StringCopy(&cVar2, "csr", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar161[iVar0] = unk_0x560A2E3DA92FA8F8(iVar4, &cVar2);
		StringCopy(&cVar2, "cssbs", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar83[iVar0] = unk_0x560A2E3DA92FA8F8(iVar4, &cVar2);
		StringCopy(&cVar2, "skt", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar89[iVar0] = unk_0x560A2E3DA92FA8F8(iVar4, &cVar2);
		StringCopy(&cVar2, "skm", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar95[iVar0] = unk_0x560A2E3DA92FA8F8(iVar4, &cVar2);
		StringCopy(&cVar2, "eind", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar71[iVar0] = unk_0x560A2E3DA92FA8F8(iVar4, &cVar2);
		StringCopy(&cVar2, "etyp", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar77[iVar0] = unk_0x560A2E3DA92FA8F8(iVar4, &cVar2);
		StringCopy(&cVar2, "pstr", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar2, iVar0, 8);
		}
		uVar107[iVar0] = unk_0x560A2E3DA92FA8F8(iVar4, &cVar2);
		StringCopy(&cVar2, "pend", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar2, iVar0, 8);
		}
		uVar113[iVar0] = unk_0x560A2E3DA92FA8F8(iVar4, &cVar2);
		StringCopy(&cVar2, "strh", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar2, iVar0, 8);
		}
		uVar101[iVar0] = unk_0x560A2E3DA92FA8F8(iVar4, &cVar2);
		StringCopy(&cVar2, "endh", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar2, iVar0, 8);
		}
		uVar119[iVar0] = unk_0x560A2E3DA92FA8F8(iVar4, &cVar2);
		StringCopy(&cVar2, "svwi", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar125[iVar0] = unk_0x560A2E3DA92FA8F8(iVar4, &cVar2);
		StringCopy(&cVar2, "camnm", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar167[iVar0] = unk_0x560A2E3DA92FA8F8(iVar4, &cVar2);
		StringCopy(&cVar2, "locnm", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar173[iVar0] = unk_0x560A2E3DA92FA8F8(iVar4, &cVar2);
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			if (unk_0x6E1D01265BDA6BEA(uVar107[iVar0], iVar1) == 5)
			{
				Global_1638223.f_98095[iVar0 /*1316*/].f_6[iVar1 /*3*/] = { unk_0xD458CBD2DA2C775D(uVar107[iVar0], iVar1) };
			}
			else
			{
				Global_1638223.f_98095[iVar0 /*1316*/].f_6[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x6E1D01265BDA6BEA(uVar113[iVar0], iVar1) == 5)
			{
				Global_1638223.f_98095[iVar0 /*1316*/].f_19[iVar1 /*3*/] = { unk_0xD458CBD2DA2C775D(uVar113[iVar0], iVar1) };
			}
			else
			{
				Global_1638223.f_98095[iVar0 /*1316*/].f_19[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x6E1D01265BDA6BEA(uVar101[iVar0], iVar1) == 3)
			{
				Global_1638223.f_98095[iVar0 /*1316*/].f_32[iVar1] = unk_0xDFB5A5508080E518(uVar101[iVar0], iVar1);
			}
			else
			{
				Global_1638223.f_98095[iVar0 /*1316*/].f_32[iVar1] = 0f;
			}
			if (unk_0x6E1D01265BDA6BEA(uVar119[iVar0], iVar1) == 3)
			{
				Global_1638223.f_98095[iVar0 /*1316*/].f_37[iVar1] = unk_0xDFB5A5508080E518(uVar119[iVar0], iVar1);
			}
			else
			{
				Global_1638223.f_98095[iVar0 /*1316*/].f_37[iVar1] = 0f;
			}
			if (unk_0x6E1D01265BDA6BEA(uVar125[iVar0], iVar1) == 2)
			{
				Global_1638223.f_98095[iVar0 /*1316*/].f_42[iVar1] = unk_0x27CDB7B0660BDAB1(uVar125[iVar0], iVar1);
			}
			else
			{
				Global_1638223.f_98095[iVar0 /*1316*/].f_42[iVar1] = -1;
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 19)
		{
			if (unk_0x6E1D01265BDA6BEA(uVar11[iVar0], iVar1) == 2)
			{
				Global_1638223.f_98095[iVar0 /*1316*/].f_92[iVar1] = unk_0x27CDB7B0660BDAB1(uVar11[iVar0], iVar1);
			}
			else
			{
				Global_1638223.f_98095[iVar0 /*1316*/].f_92[iVar1] = 0;
			}
			if (unk_0x6E1D01265BDA6BEA(uVar17[iVar0], iVar1) == 3)
			{
				Global_1638223.f_98095[iVar0 /*1316*/].f_47[iVar1] = unk_0xDFB5A5508080E518(uVar17[iVar0], iVar1);
			}
			else
			{
				Global_1638223.f_98095[iVar0 /*1316*/].f_47[iVar1] = 0f;
			}
			if (unk_0x6E1D01265BDA6BEA(uVar23[iVar0], iVar1) == 3)
			{
				Global_1638223.f_98095[iVar0 /*1316*/].f_68[iVar1] = unk_0xDFB5A5508080E518(uVar23[iVar0], iVar1);
			}
			else
			{
				Global_1638223.f_98095[iVar0 /*1316*/].f_68[iVar1] = 0f;
			}
			if (unk_0x6E1D01265BDA6BEA(uVar29[iVar0], iVar1) == 2)
			{
				Global_1638223.f_98095[iVar0 /*1316*/].f_113[iVar1] = unk_0x27CDB7B0660BDAB1(uVar29[iVar0], iVar1);
			}
			else
			{
				Global_1638223.f_98095[iVar0 /*1316*/].f_113[iVar1] = 0;
			}
			if (unk_0x6E1D01265BDA6BEA(uVar35[iVar0], iVar1) == 5)
			{
				Global_1638223.f_98095[iVar0 /*1316*/].f_134[iVar1 /*3*/] = { unk_0xD458CBD2DA2C775D(uVar35[iVar0], iVar1) };
			}
			else
			{
				Global_1638223.f_98095[iVar0 /*1316*/].f_134[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x6E1D01265BDA6BEA(uVar41[iVar0], iVar1) == 5)
			{
				Global_1638223.f_98095[iVar0 /*1316*/].f_195[iVar1 /*3*/] = { unk_0xD458CBD2DA2C775D(uVar41[iVar0], iVar1) };
			}
			else
			{
				Global_1638223.f_98095[iVar0 /*1316*/].f_195[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x6E1D01265BDA6BEA(uVar47[iVar0], iVar1) == 5)
			{
				Global_1638223.f_98095[iVar0 /*1316*/].f_256[iVar1 /*3*/] = { unk_0xD458CBD2DA2C775D(uVar47[iVar0], iVar1) };
			}
			else
			{
				Global_1638223.f_98095[iVar0 /*1316*/].f_256[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x6E1D01265BDA6BEA(uVar53[iVar0], iVar1) == 5)
			{
				Global_1638223.f_98095[iVar0 /*1316*/].f_317[iVar1 /*3*/] = { unk_0xD458CBD2DA2C775D(uVar53[iVar0], iVar1) };
			}
			else
			{
				Global_1638223.f_98095[iVar0 /*1316*/].f_317[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x6E1D01265BDA6BEA(uVar59[iVar0], iVar1) == 3)
			{
				Global_1638223.f_98095[iVar0 /*1316*/].f_378[iVar1] = unk_0xDFB5A5508080E518(uVar59[iVar0], iVar1);
			}
			else
			{
				Global_1638223.f_98095[iVar0 /*1316*/].f_378[iVar1] = 0f;
			}
			if (unk_0x6E1D01265BDA6BEA(uVar65[iVar0], iVar1) == 3)
			{
				Global_1638223.f_98095[iVar0 /*1316*/].f_399[iVar1] = unk_0xDFB5A5508080E518(uVar65[iVar0], iVar1);
			}
			else
			{
				Global_1638223.f_98095[iVar0 /*1316*/].f_399[iVar1] = 0f;
			}
			if (unk_0x6E1D01265BDA6BEA(uVar83[iVar0], iVar1) == 2)
			{
				Global_1638223.f_98095[iVar0 /*1316*/].f_420[iVar1] = unk_0x27CDB7B0660BDAB1(uVar83[iVar0], iVar1);
			}
			else
			{
				Global_1638223.f_98095[iVar0 /*1316*/].f_420[iVar1] = 0;
			}
			if (unk_0x6E1D01265BDA6BEA(uVar89[iVar0], iVar1) == 2)
			{
				Global_1638223.f_98095[iVar0 /*1316*/].f_441[iVar1] = unk_0x27CDB7B0660BDAB1(uVar89[iVar0], iVar1);
			}
			else
			{
				Global_1638223.f_98095[iVar0 /*1316*/].f_441[iVar1] = 0;
			}
			if (unk_0x6E1D01265BDA6BEA(uVar95[iVar0], iVar1) == 3)
			{
				Global_1638223.f_98095[iVar0 /*1316*/].f_462[iVar1] = unk_0xDFB5A5508080E518(uVar95[iVar0], iVar1);
			}
			else
			{
				Global_1638223.f_98095[iVar0 /*1316*/].f_462[iVar1] = 0f;
			}
			if (unk_0x6E1D01265BDA6BEA(uVar131[iVar0], iVar1) == 2)
			{
				Global_1638223.f_98095[iVar0 /*1316*/].f_571[iVar1] = unk_0x27CDB7B0660BDAB1(uVar131[iVar0], iVar1);
			}
			else
			{
				Global_1638223.f_98095[iVar0 /*1316*/].f_571[iVar1] = 0;
			}
			if (unk_0x6E1D01265BDA6BEA(uVar137[iVar0], iVar1) == 5)
			{
				Global_1638223.f_98095[iVar0 /*1316*/].f_592[iVar1 /*3*/] = { unk_0xD458CBD2DA2C775D(uVar137[iVar0], iVar1) };
			}
			else
			{
				Global_1638223.f_98095[iVar0 /*1316*/].f_592[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x6E1D01265BDA6BEA(uVar143[iVar0], iVar1) == 5)
			{
				Global_1638223.f_98095[iVar0 /*1316*/].f_653[iVar1 /*3*/] = { unk_0xD458CBD2DA2C775D(uVar143[iVar0], iVar1) };
			}
			else
			{
				Global_1638223.f_98095[iVar0 /*1316*/].f_653[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x6E1D01265BDA6BEA(uVar149[iVar0], iVar1) == 5)
			{
				Global_1638223.f_98095[iVar0 /*1316*/].f_714[iVar1 /*3*/] = { unk_0xD458CBD2DA2C775D(uVar149[iVar0], iVar1) };
				Global_1638223.f_107903[iVar1] = Global_1638223.f_98095[iVar0 /*1316*/].f_714[iVar1 /*3*/];
				Global_1638223.f_107924[iVar1] = Global_1638223.f_98095[iVar0 /*1316*/].f_714[iVar1 /*3*/].f_1;
				Global_1638223.f_107945[iVar1] = Global_1638223.f_98095[iVar0 /*1316*/].f_714[iVar1 /*3*/].f_2;
			}
			else
			{
				Global_1638223.f_98095[iVar0 /*1316*/].f_714[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x6E1D01265BDA6BEA(uVar155[iVar0], iVar1) == 5)
			{
				Global_1638223.f_98095[iVar0 /*1316*/].f_489[iVar1 /*3*/] = { unk_0xD458CBD2DA2C775D(uVar155[iVar0], iVar1) };
			}
			else
			{
				Global_1638223.f_98095[iVar0 /*1316*/].f_489[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (unk_0x6E1D01265BDA6BEA(uVar161[iVar0], iVar1) == 3)
			{
				Global_1638223.f_98095[iVar0 /*1316*/].f_550[iVar1] = unk_0xDFB5A5508080E518(uVar161[iVar0], iVar1);
			}
			else
			{
				Global_1638223.f_98095[iVar0 /*1316*/].f_550[iVar1] = 0f;
			}
			if (unk_0x6E1D01265BDA6BEA(uVar167[iVar0], iVar1) == 4)
			{
				StringCopy(&(Global_1638223.f_98095[iVar0 /*1316*/].f_1154[iVar1 /*4*/]), unk_0x71104AC03D1921C0(uVar167[iVar0], iVar1), 16);
			}
			else
			{
				StringCopy(&(Global_1638223.f_98095[iVar0 /*1316*/].f_1154[iVar1 /*4*/]), "", 16);
			}
			if (unk_0x6E1D01265BDA6BEA(uVar173[iVar0], iVar1) == 4)
			{
				StringCopy(&(Global_1638223.f_98095[iVar0 /*1316*/].f_1235[iVar1 /*4*/]), unk_0x71104AC03D1921C0(uVar173[iVar0], iVar1), 16);
			}
			else
			{
				StringCopy(&(Global_1638223.f_98095[iVar0 /*1316*/].f_1235[iVar1 /*4*/]), "", 16);
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 29)
		{
			if (unk_0x6E1D01265BDA6BEA(uVar71[iVar0], iVar1) == 2)
			{
				Global_1638223.f_98095[iVar0 /*1316*/].f_783[iVar1 /*12*/].f_1 = unk_0x27CDB7B0660BDAB1(uVar71[iVar0], iVar1);
			}
			else
			{
				Global_1638223.f_98095[iVar0 /*1316*/].f_783[iVar1 /*12*/].f_1 = -1;
			}
			if (unk_0x6E1D01265BDA6BEA(uVar77[iVar0], iVar1) == 2)
			{
				Global_1638223.f_98095[iVar0 /*1316*/].f_783[iVar1 /*12*/] = unk_0x27CDB7B0660BDAB1(uVar77[iVar0], iVar1);
			}
			else
			{
				Global_1638223.f_98095[iVar0 /*1316*/].f_783[iVar1 /*12*/] = -1;
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_201(int iParam0)
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
	
	if (unk_0xD41282265B0A744C(iParam0, "eoir") == 0 || unk_0xD41282265B0A744C(iParam0, "eoep") == 0)
	{
		return;
	}
	iVar8 = unk_0x560A2E3DA92FA8F8(iParam0, "eoid");
	iVar9 = unk_0x560A2E3DA92FA8F8(iParam0, "eoet");
	iVar10 = unk_0xD41282265B0A744C(iParam0, "eoir");
	iVar11 = unk_0xD41282265B0A744C(iParam0, "eoep");
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		if (unk_0x6E1D01265BDA6BEA(iVar8, iVar0) == 2)
		{
			Global_1638223.f_89080[iVar0] = unk_0x27CDB7B0660BDAB1(iVar8, iVar0);
		}
		else
		{
			Global_1638223.f_89080[iVar0] = -1;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar9, iVar0) == 2)
		{
			Global_1638223.f_89049[iVar0] = unk_0x27CDB7B0660BDAB1(iVar9, iVar0);
		}
		else
		{
			Global_1638223.f_89049[iVar0] = -1;
		}
		iVar1 = 0;
		while (iVar1 <= 12)
		{
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				StringCopy(&cVar4, "eor", 16);
				StringIntConCat(&cVar4, iVar0, 16);
				StringIntConCat(&cVar4, iVar1, 16);
				StringIntConCat(&cVar4, iVar2, 16);
				if (unk_0x7ADD5F9CC9AA2359(iVar10, &cVar4) == 2)
				{
					Global_1638223.f_89111[iVar0 /*66*/][iVar1 /*5*/][iVar2] = unk_0xE33C601C19270822(iVar10, &cVar4);
				}
				else
				{
					Global_1638223.f_89111[iVar0 /*66*/][iVar1 /*5*/][iVar2] = -1;
				}
				StringCopy(&cVar4, "eop", 16);
				StringIntConCat(&cVar4, iVar0, 16);
				StringIntConCat(&cVar4, iVar1, 16);
				StringIntConCat(&cVar4, iVar2, 16);
				if (unk_0x7ADD5F9CC9AA2359(iVar11, &cVar4) == 2)
				{
					Global_1638223.f_91092[iVar0 /*66*/][iVar1 /*5*/][iVar2] = unk_0xE33C601C19270822(iVar11, &cVar4);
				}
				else
				{
					Global_1638223.f_89111[iVar0 /*66*/][iVar1 /*5*/][iVar2] = -1;
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
		iVar12 = Global_1638223.f_89080[iVar0];
		iVar13 = Global_1638223.f_89049[iVar0];
		if (iVar12 != -1 && iVar13 != -1)
		{
			iVar3 = 0;
			while (iVar3 <= 29)
			{
				if ((iVar3 != iVar0 && Global_1638223.f_89080[iVar3] == iVar12) && Global_1638223.f_89049[iVar3] == iVar13)
				{
					Global_1638223.f_89049[iVar3] = -1;
					Global_1638223.f_89080[iVar3] = -1;
					iVar1 = 0;
					while (iVar1 <= 12)
					{
						iVar2 = 0;
						while (iVar2 <= 3)
						{
							Global_1638223.f_89111[iVar3 /*66*/][iVar1 /*5*/][iVar2] = -1;
							Global_1638223.f_91092[iVar3 /*66*/][iVar1 /*5*/][iVar2] = -1;
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

void func_202(int iParam0)
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
	
	iVar4 = unk_0xD41282265B0A744C(iParam0, "kill");
	iVar5 = unk_0x560A2E3DA92FA8F8(iVar4, "no");
	iVar6 = unk_0x560A2E3DA92FA8F8(iVar4, "mcp");
	iVar7 = unk_0x560A2E3DA92FA8F8(iVar4, "mcf");
	iVar1 = 0;
	while (iVar1 <= (Global_1638223.f_32 - 1))
	{
		if (iVar1 < 4)
		{
			Global_1638223.f_44235[iVar1] = unk_0x27CDB7B0660BDAB1(iVar5, iVar1);
			StringCopy(&cVar2, "rul", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar8[iVar1] = unk_0x560A2E3DA92FA8F8(iVar4, &cVar2);
			StringCopy(&cVar2, "pri", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar13[iVar1] = unk_0x560A2E3DA92FA8F8(iVar4, &cVar2);
			StringCopy(&cVar2, "lim", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar18[iVar1] = unk_0x560A2E3DA92FA8F8(iVar4, &cVar2);
			StringCopy(&cVar2, "jtop", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar23[iVar1] = unk_0x560A2E3DA92FA8F8(iVar4, &cVar2);
			StringCopy(&cVar2, "jtof", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar28[iVar1] = unk_0x560A2E3DA92FA8F8(iVar4, &cVar2);
			iVar0 = 0;
			while (iVar0 <= (Global_1638223.f_44235[iVar1] - 1))
			{
				if (iVar0 < 17)
				{
					Global_1638223.f_43741[iVar0 /*29*/][iVar1] = unk_0x27CDB7B0660BDAB1(uVar8[iVar1], iVar0);
					Global_1638223.f_43741[iVar0 /*29*/].f_5[iVar1] = unk_0x27CDB7B0660BDAB1(uVar13[iVar1], iVar0);
					if (Global_1638223.f_43741[iVar0 /*29*/].f_5[iVar1] == -1)
					{
						Global_1638223.f_43741[iVar0 /*29*/].f_5[iVar1] = 99999;
					}
					Global_1638223.f_43741[iVar0 /*29*/].f_10[iVar1] = unk_0x27CDB7B0660BDAB1(uVar18[iVar1], iVar0);
					if (unk_0x6E1D01265BDA6BEA(uVar23[iVar1], iVar0) == 2)
					{
						Global_1638223.f_43741[iVar0 /*29*/].f_15[iVar1] = unk_0x27CDB7B0660BDAB1(uVar23[iVar1], iVar0);
					}
					else
					{
						Global_1638223.f_43741[iVar0 /*29*/].f_15[iVar1] = 0;
					}
					if (unk_0x6E1D01265BDA6BEA(uVar28[iVar1], iVar0) == 2)
					{
						Global_1638223.f_43741[iVar0 /*29*/].f_20[iVar1] = unk_0x27CDB7B0660BDAB1(uVar28[iVar1], iVar0);
					}
					else
					{
						Global_1638223.f_43741[iVar0 /*29*/].f_20[iVar1] = 0;
					}
					if (unk_0x6E1D01265BDA6BEA(iVar6, iVar0) == 2)
					{
						Global_1638223.f_43741[iVar0 /*29*/].f_28 = unk_0x27CDB7B0660BDAB1(iVar6, iVar0);
					}
					else
					{
						Global_1638223.f_43741[iVar0 /*29*/].f_28 = -1;
					}
					if (unk_0x6E1D01265BDA6BEA(iVar7, iVar0) == 2)
					{
						Global_1638223.f_43741[iVar0 /*29*/].f_27 = unk_0x27CDB7B0660BDAB1(iVar7, iVar0);
					}
					else
					{
						Global_1638223.f_43741[iVar0 /*29*/].f_27 = -1;
					}
				}
				iVar0++;
			}
		}
		iVar1++;
	}
}

void func_203(int iParam0)
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
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	
	iVar4 = unk_0xD41282265B0A744C(iParam0, "goto");
	Global_1638223.f_44241[0] = unk_0xE33C601C19270822(iVar4, "no");
	Global_1638223.f_6 = unk_0xE33C601C19270822(iVar4, "atrig");
	iVar80 = unk_0x560A2E3DA92FA8F8(iVar4, "lmcp");
	iVar81 = unk_0x560A2E3DA92FA8F8(iVar4, "lmcf");
	iVar1 = 0;
	while (iVar1 <= (Global_1638223.f_32 - 1))
	{
		if (iVar1 < 4)
		{
			StringCopy(&cVar2, "loc", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar5[iVar1] = unk_0x560A2E3DA92FA8F8(iVar4, &cVar2);
			StringCopy(&cVar2, "sz", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar10[iVar1] = unk_0x560A2E3DA92FA8F8(iVar4, &cVar2);
			StringCopy(&cVar2, "rl", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar15[iVar1] = unk_0x560A2E3DA92FA8F8(iVar4, &cVar2);
			StringCopy(&cVar2, "pri", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar20[iVar1] = unk_0x560A2E3DA92FA8F8(iVar4, &cVar2);
			StringCopy(&cVar2, "wtm", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar25[iVar1] = unk_0x560A2E3DA92FA8F8(iVar4, &cVar2);
			StringCopy(&cVar2, "gps", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar40[iVar1] = unk_0x560A2E3DA92FA8F8(iVar4, &cVar2);
			StringCopy(&cVar2, "smc", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar45[iVar1] = unk_0x560A2E3DA92FA8F8(iVar4, &cVar2);
			StringCopy(&cVar2, "lbs", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar50[iVar1] = unk_0x560A2E3DA92FA8F8(iVar4, &cVar2);
			StringCopy(&cVar2, "rcptp", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar60[iVar1] = unk_0x560A2E3DA92FA8F8(iVar4, &cVar2);
			StringCopy(&cVar2, "cmp", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar30[iVar1] = unk_0x560A2E3DA92FA8F8(iVar4, &cVar2);
			StringCopy(&cVar2, "air", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar35[iVar1] = unk_0x560A2E3DA92FA8F8(iVar4, &cVar2);
			StringCopy(&cVar2, "veh", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar65[iVar1] = unk_0x560A2E3DA92FA8F8(iVar4, &cVar2);
			StringCopy(&cVar2, "dir", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar55[iVar1] = unk_0x560A2E3DA92FA8F8(iVar4, &cVar2);
			StringCopy(&cVar2, "jtop", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar70[iVar1] = unk_0x560A2E3DA92FA8F8(iVar4, &cVar2);
			StringCopy(&cVar2, "jtof", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar75[iVar1] = unk_0x560A2E3DA92FA8F8(iVar4, &cVar2);
			iVar0 = 0;
			while (iVar0 <= (Global_1638223.f_44241[0] - 1))
			{
				Global_1638223.f_41724[iVar0 /*112*/].f_1[0 /*3*/] = { unk_0xD458CBD2DA2C775D(uVar5[iVar1], iVar0) };
				Global_1638223.f_41724[iVar0 /*112*/].f_14[0] = unk_0xDFB5A5508080E518(uVar10[iVar1], iVar0);
				Global_1638223.f_41724[iVar0 /*112*/].f_62[iVar1] = unk_0x27CDB7B0660BDAB1(uVar15[iVar1], iVar0);
				Global_1638223.f_41724[iVar0 /*112*/].f_67[iVar1] = unk_0x27CDB7B0660BDAB1(uVar20[iVar1], iVar0);
				if (Global_1638223.f_41724[iVar0 /*112*/].f_67[iVar1] == -1)
				{
					Global_1638223.f_41724[iVar0 /*112*/].f_67[iVar1] = 99999;
				}
				Global_1638223.f_41724[iVar0 /*112*/].f_72[iVar1] = unk_0x27CDB7B0660BDAB1(uVar25[iVar1], iVar0);
				Global_1638223.f_41724[iVar0 /*112*/].f_48[iVar1] = unk_0xDFB5A5508080E518(uVar60[iVar1], iVar0);
				Global_1638223.f_41724[iVar0 /*112*/].f_77[iVar1] = unk_0x27CDB7B0660BDAB1(uVar30[iVar1], iVar0);
				Global_1638223.f_41724[iVar0 /*112*/].f_36[iVar1] = unk_0x27CDB7B0660BDAB1(uVar35[iVar1], iVar0);
				Global_1638223.f_41724[iVar0 /*112*/].f_53 = unk_0x27CDB7B0660BDAB1(uVar50[iVar1], iVar0);
				Global_1638223.f_41724[iVar0 /*112*/].f_31[0] = unk_0x27CDB7B0660BDAB1(uVar40[iVar1], iVar0);
				Global_1638223.f_41724[iVar0 /*112*/].f_41[0] = unk_0x27CDB7B0660BDAB1(uVar45[iVar1], iVar0);
				Global_1638223.f_41724[iVar0 /*112*/].f_98 = unk_0xDFB5A5508080E518(uVar55[iVar1], iVar0);
				if (unk_0x6E1D01265BDA6BEA(iVar80, iVar0) == 2)
				{
					Global_1638223.f_41724[iVar0 /*112*/].f_94 = unk_0x27CDB7B0660BDAB1(iVar80, iVar0);
				}
				else
				{
					Global_1638223.f_41724[iVar0 /*112*/].f_94 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(iVar81, iVar0) == 2)
				{
					Global_1638223.f_41724[iVar0 /*112*/].f_95 = unk_0x27CDB7B0660BDAB1(iVar81, iVar0);
				}
				else
				{
					Global_1638223.f_41724[iVar0 /*112*/].f_95 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar65[iVar1], iVar0) == 2)
				{
					Global_1638223.f_41724[iVar0 /*112*/].f_57[iVar1] = unk_0x27CDB7B0660BDAB1(uVar65[iVar1], iVar0);
				}
				else
				{
					Global_1638223.f_41724[iVar0 /*112*/].f_57[iVar1] = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar70[iVar1], iVar0) == 2)
				{
					Global_1638223.f_41724[iVar0 /*112*/].f_82[iVar1] = unk_0x27CDB7B0660BDAB1(uVar70[iVar1], iVar0);
				}
				else
				{
					Global_1638223.f_41724[iVar0 /*112*/].f_82[iVar1] = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar75[iVar1], iVar0) == 2)
				{
					Global_1638223.f_41724[iVar0 /*112*/].f_87[iVar1] = unk_0x27CDB7B0660BDAB1(uVar75[iVar1], iVar0);
				}
				else
				{
					Global_1638223.f_41724[iVar0 /*112*/].f_87[iVar1] = 0;
				}
				iVar0++;
			}
		}
		iVar1++;
	}
	iVar82 = unk_0x560A2E3DA92FA8F8(iVar4, "locbc");
	iVar83 = unk_0x560A2E3DA92FA8F8(iVar4, "loc2rd");
	iVar84 = unk_0x560A2E3DA92FA8F8(iVar4, "loclbr");
	iVar85 = unk_0x560A2E3DA92FA8F8(iVar4, "locdir");
	iVar86 = unk_0x560A2E3DA92FA8F8(iVar4, "loctol");
	iVar87 = unk_0x560A2E3DA92FA8F8(iVar4, "lochgt");
	iVar88 = unk_0x560A2E3DA92FA8F8(iVar4, "locart");
	iVar89 = unk_0x560A2E3DA92FA8F8(iVar4, "locaa1");
	iVar90 = unk_0x560A2E3DA92FA8F8(iVar4, "locaa2");
	iVar91 = unk_0x560A2E3DA92FA8F8(iVar4, "locaaw");
	iVar92 = unk_0x560A2E3DA92FA8F8(iVar4, "nmpass");
	iVar93 = unk_0x560A2E3DA92FA8F8(iVar4, "nmfail");
	iVar94 = unk_0x560A2E3DA92FA8F8(iVar4, "locstd");
	iVar95 = unk_0x560A2E3DA92FA8F8(iVar4, "locstm");
	iVar96 = unk_0x560A2E3DA92FA8F8(iVar4, "lcbs2");
	iVar97 = unk_0x560A2E3DA92FA8F8(iVar4, "locti");
	iVar98 = unk_0x560A2E3DA92FA8F8(iVar4, "locgc");
	iVar99 = unk_0x560A2E3DA92FA8F8(iVar4, "loclto");
	iVar100 = unk_0x560A2E3DA92FA8F8(iVar4, "loctmw");
	iVar101 = unk_0x560A2E3DA92FA8F8(iVar4, "loctmt");
	iVar102 = unk_0x560A2E3DA92FA8F8(iVar4, "loctst");
	iVar103 = unk_0x560A2E3DA92FA8F8(iVar4, "locpro");
	iVar104 = unk_0x560A2E3DA92FA8F8(iVar4, "locpros");
	iVar105 = unk_0x560A2E3DA92FA8F8(iVar4, "locprot");
	iVar106 = unk_0x560A2E3DA92FA8F8(iVar4, "locdisa");
	iVar107 = unk_0x560A2E3DA92FA8F8(iVar4, "locloo");
	iVar108 = unk_0x560A2E3DA92FA8F8(iVar4, "loccors");
	iVar109 = unk_0x560A2E3DA92FA8F8(iVar4, "lochght");
	iVar110 = unk_0x560A2E3DA92FA8F8(iVar4, "locdpth");
	iVar111 = unk_0x560A2E3DA92FA8F8(iVar4, "locbso");
	iVar0 = 0;
	while (iVar0 <= (Global_1638223.f_44241[0] - 1))
	{
		if (unk_0x6E1D01265BDA6BEA(iVar82, iVar0) == 2)
		{
			Global_1638223.f_41724[iVar0 /*112*/].f_46 = unk_0x27CDB7B0660BDAB1(iVar82, iVar0);
		}
		else
		{
			Global_1638223.f_41724[iVar0 /*112*/].f_46 = 0;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar83, iVar0) == 3)
		{
			Global_1638223.f_41724[iVar0 /*112*/].f_20 = unk_0xDFB5A5508080E518(iVar83, iVar0);
		}
		else
		{
			Global_1638223.f_41724[iVar0 /*112*/].f_20 = 0f;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar84, iVar0) == 3)
		{
			Global_1638223.f_41724[iVar0 /*112*/].f_19 = unk_0xDFB5A5508080E518(iVar84, iVar0);
		}
		else
		{
			Global_1638223.f_41724[iVar0 /*112*/].f_19 = 1f;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar85, iVar0) == 3)
		{
			Global_1638223.f_41724[iVar0 /*112*/].f_28 = unk_0xDFB5A5508080E518(iVar85, iVar0);
		}
		else
		{
			Global_1638223.f_41724[iVar0 /*112*/].f_28 = 0f;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar86, iVar0) == 3)
		{
			Global_1638223.f_41724[iVar0 /*112*/].f_29 = unk_0xDFB5A5508080E518(iVar86, iVar0);
		}
		else
		{
			Global_1638223.f_41724[iVar0 /*112*/].f_29 = 0f;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar87, iVar0) == 3)
		{
			Global_1638223.f_41724[iVar0 /*112*/].f_30 = unk_0xDFB5A5508080E518(iVar87, iVar0);
		}
		else
		{
			Global_1638223.f_41724[iVar0 /*112*/].f_30 = 0f;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar97, iVar0) == 3)
		{
			Global_1638223.f_41724[iVar0 /*112*/].f_55 = unk_0xDFB5A5508080E518(iVar97, iVar0);
		}
		else
		{
			Global_1638223.f_41724[iVar0 /*112*/].f_55 = 0f;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar98, iVar0) == 3)
		{
			Global_1638223.f_41724[iVar0 /*112*/].f_56 = unk_0xDFB5A5508080E518(iVar98, iVar0);
		}
		else
		{
			Global_1638223.f_41724[iVar0 /*112*/].f_56 = 0f;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar88, iVar0) == 2)
		{
			Global_1638223.f_41724[iVar0 /*112*/] = unk_0x27CDB7B0660BDAB1(iVar88, iVar0);
		}
		else
		{
			Global_1638223.f_41724[iVar0 /*112*/] = 0;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar92, iVar0) == 2)
		{
			Global_1638223.f_41724[iVar0 /*112*/].f_92 = unk_0x27CDB7B0660BDAB1(iVar92, iVar0);
		}
		else
		{
			Global_1638223.f_41724[iVar0 /*112*/].f_92 = -1;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar93, iVar0) == 2)
		{
			Global_1638223.f_41724[iVar0 /*112*/].f_93 = unk_0x27CDB7B0660BDAB1(iVar93, iVar0);
		}
		else
		{
			Global_1638223.f_41724[iVar0 /*112*/].f_93 = -1;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar94, iVar0) == 3)
		{
			Global_1638223.f_41724[iVar0 /*112*/].f_97 = unk_0xDFB5A5508080E518(iVar94, iVar0);
		}
		else
		{
			Global_1638223.f_41724[iVar0 /*112*/].f_97 = 10.5f;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar109, iVar0) == 3)
		{
			Global_1638223.f_41724[iVar0 /*112*/].f_99 = unk_0xDFB5A5508080E518(iVar109, iVar0);
		}
		else
		{
			Global_1638223.f_41724[iVar0 /*112*/].f_99 = 1f;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar110, iVar0) == 3)
		{
			Global_1638223.f_41724[iVar0 /*112*/].f_100 = unk_0xDFB5A5508080E518(iVar110, iVar0);
		}
		else
		{
			Global_1638223.f_41724[iVar0 /*112*/].f_100 = 0f;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar95, iVar0) == 2)
		{
			Global_1638223.f_41724[iVar0 /*112*/].f_96 = unk_0x27CDB7B0660BDAB1(iVar95, iVar0);
		}
		else
		{
			Global_1638223.f_41724[iVar0 /*112*/].f_96 = 0;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar96, iVar0) == 2)
		{
			Global_1638223.f_41724[iVar0 /*112*/].f_54 = unk_0x27CDB7B0660BDAB1(iVar96, iVar0);
		}
		else
		{
			Global_1638223.f_41724[iVar0 /*112*/].f_54 = 0;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar107, iVar0) == 2)
		{
			Global_1638223.f_41724[iVar0 /*112*/].f_102 = unk_0x27CDB7B0660BDAB1(iVar107, iVar0);
		}
		else
		{
			Global_1638223.f_41724[iVar0 /*112*/].f_102 = 0;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar108, iVar0) == 2)
		{
			Global_1638223.f_41724[iVar0 /*112*/].f_47 = unk_0x27CDB7B0660BDAB1(iVar108, iVar0);
		}
		else
		{
			Global_1638223.f_41724[iVar0 /*112*/].f_47 = 0;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar99, iVar0) == 3)
		{
			Global_1638223.f_41724[iVar0 /*112*/].f_103 = unk_0xDFB5A5508080E518(iVar99, iVar0);
		}
		else
		{
			Global_1638223.f_41724[iVar0 /*112*/].f_103 = 0f;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar100, iVar0) == 3)
		{
			Global_1638223.f_41724[iVar0 /*112*/].f_104 = unk_0xDFB5A5508080E518(iVar100, iVar0);
		}
		else
		{
			Global_1638223.f_41724[iVar0 /*112*/].f_104 = 0f;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar101, iVar0) == 3)
		{
			Global_1638223.f_41724[iVar0 /*112*/].f_105 = unk_0xDFB5A5508080E518(iVar101, iVar0);
		}
		else
		{
			Global_1638223.f_41724[iVar0 /*112*/].f_105 = 0f;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar102, iVar0) == 2)
		{
			Global_1638223.f_41724[iVar0 /*112*/].f_106 = unk_0x27CDB7B0660BDAB1(iVar102, iVar0);
		}
		else
		{
			Global_1638223.f_41724[iVar0 /*112*/].f_106 = -1;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar103, iVar0) == 2)
		{
			Global_1638223.f_41724[iVar0 /*112*/].f_108 = unk_0x27CDB7B0660BDAB1(iVar103, iVar0);
		}
		else
		{
			Global_1638223.f_41724[iVar0 /*112*/].f_108 = -1;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar104, iVar0) == 2)
		{
			Global_1638223.f_41724[iVar0 /*112*/].f_109 = unk_0x27CDB7B0660BDAB1(iVar104, iVar0);
		}
		else
		{
			Global_1638223.f_41724[iVar0 /*112*/].f_109 = -1;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar105, iVar0) == 2)
		{
			Global_1638223.f_41724[iVar0 /*112*/].f_110 = unk_0x27CDB7B0660BDAB1(iVar105, iVar0);
		}
		else
		{
			Global_1638223.f_41724[iVar0 /*112*/].f_110 = -1;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar106, iVar0) == 2)
		{
			Global_1638223.f_41724[iVar0 /*112*/].f_111 = unk_0x27CDB7B0660BDAB1(iVar106, iVar0);
		}
		else
		{
			Global_1638223.f_41724[iVar0 /*112*/].f_111 = 0;
		}
		if (unk_0x6E1D01265BDA6BEA(iVar111, iVar0) == 2)
		{
			Global_1638223.f_41724[iVar0 /*112*/].f_101 = unk_0x27CDB7B0660BDAB1(iVar111, iVar0);
		}
		else
		{
			Global_1638223.f_41724[iVar0 /*112*/].f_101 = 0;
		}
		if ((unk_0x6E1D01265BDA6BEA(iVar89, iVar0) == 5 && unk_0x6E1D01265BDA6BEA(iVar90, iVar0) == 5) && unk_0x6E1D01265BDA6BEA(iVar91, iVar0) == 3)
		{
			Global_1638223.f_41724[iVar0 /*112*/].f_21 = { unk_0xD458CBD2DA2C775D(iVar89, iVar0) };
			Global_1638223.f_41724[iVar0 /*112*/].f_24 = { unk_0xD458CBD2DA2C775D(iVar90, iVar0) };
			Global_1638223.f_41724[iVar0 /*112*/].f_27 = unk_0xDFB5A5508080E518(iVar91, iVar0);
		}
		else
		{
			Global_1638223.f_41724[iVar0 /*112*/].f_21 = { 0f, 0f, 0f };
			Global_1638223.f_41724[iVar0 /*112*/].f_24 = { 0f, 0f, 0f };
			Global_1638223.f_41724[iVar0 /*112*/].f_27 = 1f;
		}
		iVar0++;
	}
}

void func_204(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (unk_0x7ADD5F9CC9AA2359(iParam0, "cover") == 6)
	{
		iVar1 = unk_0xD41282265B0A744C(iParam0, "cover");
		Global_1638223.f_47320 = unk_0xE33C601C19270822(iVar1, "no");
		iVar2 = unk_0x560A2E3DA92FA8F8(iVar1, "loc");
		iVar3 = unk_0x560A2E3DA92FA8F8(iVar1, "dir");
		iVar4 = unk_0x560A2E3DA92FA8F8(iVar1, "use");
		iVar5 = unk_0x560A2E3DA92FA8F8(iVar1, "high");
		iVar6 = unk_0x560A2E3DA92FA8F8(iVar1, "arc");
		iVar0 = 0;
		while (iVar0 <= (Global_1638223.f_47320 - 1))
		{
			Global_1638223.f_47321[iVar0 /*7*/] = { unk_0xD458CBD2DA2C775D(iVar2, iVar0) };
			Global_1638223.f_47321[iVar0 /*7*/].f_3 = unk_0xDFB5A5508080E518(iVar3, iVar0);
			Global_1638223.f_47321[iVar0 /*7*/].f_4 = unk_0x27CDB7B0660BDAB1(iVar4, iVar0);
			Global_1638223.f_47321[iVar0 /*7*/].f_5 = unk_0x27CDB7B0660BDAB1(iVar5, iVar0);
			Global_1638223.f_47321[iVar0 /*7*/].f_6 = unk_0x27CDB7B0660BDAB1(iVar6, iVar0);
			iVar0++;
		}
	}
}

void func_205(int iParam0)
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
	
	iVar2 = unk_0xD41282265B0A744C(iParam0, "door");
	Global_1638223.f_47033 = unk_0xE33C601C19270822(iVar2, "no");
	iVar3 = unk_0x560A2E3DA92FA8F8(iVar2, "loc");
	iVar4 = unk_0x560A2E3DA92FA8F8(iVar2, "fopen");
	iVar5 = unk_0x560A2E3DA92FA8F8(iVar2, "model");
	uVar6 = unk_0x560A2E3DA92FA8F8(iVar2, "lock");
	uVar7 = unk_0x560A2E3DA92FA8F8(iVar2, "swing");
	iVar8 = unk_0x560A2E3DA92FA8F8(iVar2, "udrle");
	iVar9 = unk_0x560A2E3DA92FA8F8(iVar2, "udtem");
	iVar10 = unk_0x560A2E3DA92FA8F8(iVar2, "udrat");
	uVar11 = unk_0x560A2E3DA92FA8F8(iVar2, "swingu");
	iVar12 = unk_0x560A2E3DA92FA8F8(iVar2, "audst");
	iVar13 = unk_0x560A2E3DA92FA8F8(iVar2, "aurt");
	iVar14 = unk_0x560A2E3DA92FA8F8(iVar2, "uaudst");
	iVar15 = unk_0x560A2E3DA92FA8F8(iVar2, "uaurt");
	uVar16 = unk_0x560A2E3DA92FA8F8(iVar2, "lfp");
	iVar17 = unk_0x560A2E3DA92FA8F8(iVar2, "dtime");
	uVar18 = unk_0x560A2E3DA92FA8F8(iVar2, "mid");
	iVar19 = unk_0x560A2E3DA92FA8F8(iVar2, "dbs");
	iVar0 = 0;
	while (iVar0 <= (Global_1638223.f_47033 - 1))
	{
		if (iVar0 < 15)
		{
			Global_1638223.f_47034[iVar0 /*19*/] = { unk_0xD458CBD2DA2C775D(iVar3, iVar0) };
			Global_1638223.f_47034[iVar0 /*19*/].f_3 = unk_0xDFB5A5508080E518(iVar4, iVar0);
			Global_1638223.f_47034[iVar0 /*19*/].f_14 = unk_0x2D6F95A16E2F0D25(uVar6, iVar0);
			Global_1638223.f_47034[iVar0 /*19*/].f_15 = unk_0x2D6F95A16E2F0D25(uVar7, iVar0);
			Global_1638223.f_47034[iVar0 /*19*/].f_5 = unk_0x27CDB7B0660BDAB1(iVar8, iVar0);
			Global_1638223.f_47034[iVar0 /*19*/].f_6 = unk_0x27CDB7B0660BDAB1(iVar9, iVar0);
			Global_1638223.f_47034[iVar0 /*19*/].f_13 = unk_0xDFB5A5508080E518(iVar10, iVar0);
			Global_1638223.f_47034[iVar0 /*19*/].f_16 = unk_0x2D6F95A16E2F0D25(uVar11, iVar0);
			Global_1638223.f_47034[iVar0 /*19*/].f_8 = unk_0xDFB5A5508080E518(iVar13, iVar0);
			Global_1638223.f_47034[iVar0 /*19*/].f_9 = unk_0xDFB5A5508080E518(iVar12, iVar0);
			Global_1638223.f_47034[iVar0 /*19*/].f_10 = unk_0xDFB5A5508080E518(iVar15, iVar0);
			Global_1638223.f_47034[iVar0 /*19*/].f_11 = unk_0xDFB5A5508080E518(iVar14, iVar0);
			Global_1638223.f_47034[iVar0 /*19*/].f_12 = unk_0x2D6F95A16E2F0D25(uVar16, iVar0);
			Global_1638223.f_47034[iVar0 /*19*/].f_18 = unk_0x27CDB7B0660BDAB1(iVar19, iVar0);
			iVar1 = unk_0x27CDB7B0660BDAB1(iVar5, iVar0);
			Global_1638223.f_47034[iVar0 /*19*/].f_4 = iVar1;
			if (unk_0x6E1D01265BDA6BEA(iVar17, iVar0) == 2)
			{
				Global_1638223.f_47034[iVar0 /*19*/].f_7 = unk_0x27CDB7B0660BDAB1(iVar17, iVar0);
			}
			else
			{
				Global_1638223.f_47034[iVar0 /*19*/].f_7 = 0;
			}
			Global_1638223.f_47034[iVar0 /*19*/].f_17 = unk_0x2D6F95A16E2F0D25(uVar18, iVar0);
		}
		iVar0++;
	}
}

void func_206(int iParam0)
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
	struct<16> Var302;
	var uVar367[4];
	var uVar372[4];
	var uVar377[4];
	var uVar382[4];
	var uVar387[4];
	var uVar392[4];
	var uVar397[4];
	var uVar402[4];
	var uVar407[4];
	var uVar412[4];
	var uVar417[4];
	var uVar422[4];
	var uVar427[4];
	var uVar432[4];
	var uVar437[4];
	var uVar442[4];
	var uVar447[4];
	var uVar452[4];
	var uVar457[4];
	var uVar462[4];
	var uVar467[4];
	var uVar472[4];
	var uVar477[4];
	int iVar482;
	int iVar483;
	int iVar484;
	int iVar485;
	int iVar486;
	
	iVar0 = unk_0xD41282265B0A744C(*iParam0, "endcon");
	Var302 = 4;
	Var302.f_1 = 15;
	Var302.f_1.f_16 = 15;
	Var302.f_1.f_16.f_16 = 15;
	Var302.f_1.f_16.f_16.f_16 = 15;
	iVar1 = 0;
	while (iVar1 <= (Global_1638223.f_32 - 1))
	{
		if (iVar1 < 4)
		{
			StringCopy(&cVar3, "sia", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar7[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "stiam", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar12[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "mmiam2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar17[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "sim", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar22[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "mmim", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar27[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "mmi2m", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar32[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "uacp1", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar37[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "uacp2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar42[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "fleer", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar52[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "fleev", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar47[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "rloft", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar57[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "minspd", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar62[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "mspdlp", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar67[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "mspdsv", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar72[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "pribt", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar77[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "bosth", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar82[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "bosti", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar87[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "vdor", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar92[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "mspdmx", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar97[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "prmg", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar102[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "traf", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar107[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "pden", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar112[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "dlor", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar117[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "mors", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar122[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "mdmr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar127[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "mwdmr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar132[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "vehdmro", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar152[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "vehdmri", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar157[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "shdtxt", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar137[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "hitsnd", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar142[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "rdel", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar147[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "diagwf", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar162[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "twpptd", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar167[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "mnvhhl", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar172[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "mnvhsi", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar177[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "mnvhsd", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar182[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "blolt", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar187[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "mxhth", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar192[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "cbmanr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar197[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "rgnd", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar202[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "rgnr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar207[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "rgnm", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar212[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "drnn", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar217[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "drnr1", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar222[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "drnr2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar227[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "drnr3", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar232[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "drnr4", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar237[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "drnpl", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar242[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "drnp", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar247[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "drnv", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar252[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "drno", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar257[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "drnRt", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar262[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "grtug", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar267[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "grwep", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar272[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "grclp", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar277[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "grkil", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar282[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "lbred", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar287[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "lbgre", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar292[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "lbblu", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar297[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			iVar482 = 0;
			while (iVar482 <= 14)
			{
				StringCopy(&cVar3, "hlm", 16);
				StringIntConCat(&cVar3, iVar1, 16);
				StringIntConCat(&cVar3, iVar482, 16);
				Var302[iVar1 /*16*/][iVar482] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
				iVar482++;
			}
			StringCopy(&cVar3, "bmmxh", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar367[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "bmspm", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar372[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "bmhrgn", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar397[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "bmsjd", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar377[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "bmhok", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar382[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "bmstd", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar387[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "bmmph", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar392[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "itvsd", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar402[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "itved", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar407[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "todh", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar462[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "todm", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar467[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "tods", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar472[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "todsh", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar477[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "armr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar412[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "bsthr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar417[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "mgdm", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar422[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "rorcp", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar427[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "rocok", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar432[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "rodp", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar437[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "rodpt", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar442[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "rotes", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar447[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "rolsw", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar452[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			StringCopy(&cVar3, "roapa", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar457[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar3);
			iVar483 = 0;
			while (iVar483 <= 69)
			{
				if (unk_0x6E1D01265BDA6BEA(uVar7[iVar1], iVar483) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_64[iVar483] = unk_0x27CDB7B0660BDAB1(uVar7[iVar1], iVar483);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_64[iVar483] = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar12[iVar1], iVar483) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_212[iVar483] = unk_0x27CDB7B0660BDAB1(uVar12[iVar1], iVar483);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_212[iVar483] = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar17[iVar1], iVar483) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_359[iVar483] = unk_0x27CDB7B0660BDAB1(uVar17[iVar1], iVar483);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_359[iVar483] = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar22[iVar1], iVar483) == 3)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_135[iVar483] = unk_0xDFB5A5508080E518(uVar22[iVar1], iVar483);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_135[iVar483] = 1f;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar27[iVar1], iVar483) == 3)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_283[iVar483] = unk_0xDFB5A5508080E518(uVar27[iVar1], iVar483);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_283[iVar483] = 1f;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar32[iVar1], iVar483) == 3)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_430[iVar483] = unk_0xDFB5A5508080E518(uVar32[iVar1], iVar483);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_430[iVar483] = 1f;
				}
				iVar483++;
			}
			iVar484 = 0;
			while (iVar484 <= 3)
			{
				if (unk_0x6E1D01265BDA6BEA(uVar37[iVar1], iVar484) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_503[iVar484] = unk_0x27CDB7B0660BDAB1(uVar37[iVar1], iVar484);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_503[iVar484] = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar42[iVar1], iVar484) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_508[iVar484] = unk_0x27CDB7B0660BDAB1(uVar42[iVar1], iVar484);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_508[iVar484] = -1;
				}
				iVar484++;
			}
			iVar2 = 0;
			while (iVar2 <= (Global_1638223.f_94[iVar1 /*9207*/].f_59 - 1))
			{
				if (uVar47[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_2490[iVar2 /*3*/] = { unk_0xD458CBD2DA2C775D(uVar47[iVar1], iVar2) };
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_2490[iVar2 /*3*/] = { 0f, 0f, 0f };
				}
				if (uVar52[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_2542[iVar2] = unk_0xDFB5A5508080E518(uVar52[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_2542[iVar2] = 0f;
				}
				if (uVar57[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8495[iVar2] = unk_0x27CDB7B0660BDAB1(uVar57[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8495[iVar2] = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar62[iVar1], iVar2) == 2 && Global_1638223.f_2 != 6)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8513[iVar2] = unk_0x27CDB7B0660BDAB1(uVar62[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8513[iVar2] = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar67[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8531[iVar2] = unk_0x27CDB7B0660BDAB1(uVar67[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8531[iVar2] = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar72[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8567[iVar2] = unk_0x27CDB7B0660BDAB1(uVar72[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8567[iVar2] = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar77[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8729[iVar2] = unk_0x27CDB7B0660BDAB1(uVar77[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8729[iVar2] = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar82[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8747[iVar2] = unk_0x27CDB7B0660BDAB1(uVar82[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8747[iVar2] = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar87[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8765[iVar2] = unk_0x27CDB7B0660BDAB1(uVar87[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8765[iVar2] = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar92[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8783[iVar2] = unk_0x27CDB7B0660BDAB1(uVar92[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8783[iVar2] = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar97[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8549[iVar2] = unk_0x27CDB7B0660BDAB1(uVar97[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8549[iVar2] = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar102[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8585[iVar2] = unk_0x27CDB7B0660BDAB1(uVar102[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8585[iVar2] = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar107[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8639[iVar2] = unk_0x27CDB7B0660BDAB1(uVar107[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8639[iVar2] = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar112[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8657[iVar2] = unk_0x27CDB7B0660BDAB1(uVar112[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8657[iVar2] = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar117[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3485[iVar2] = unk_0x27CDB7B0660BDAB1(uVar117[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3485[iVar2] = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar122[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3503[iVar2] = unk_0x27CDB7B0660BDAB1(uVar122[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3503[iVar2] = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar127[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3521[iVar2] = unk_0x27CDB7B0660BDAB1(uVar127[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3521[iVar2] = 10;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar132[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3539[iVar2] = unk_0x27CDB7B0660BDAB1(uVar132[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3539[iVar2] = 10;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar152[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8948[iVar2] = unk_0x27CDB7B0660BDAB1(uVar152[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8948[iVar2] = 10;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar157[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8966[iVar2] = unk_0x27CDB7B0660BDAB1(uVar157[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8966[iVar2] = 10;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar137[iVar1], iVar2) == 2)
				{
					iVar485 = unk_0x27CDB7B0660BDAB1(uVar137[iVar1], iVar2);
					if (iVar485 > 0)
					{
						Global_1638223.f_94[iVar1 /*9207*/].f_8603[iVar2] = iVar485;
					}
					else
					{
						Global_1638223.f_94[iVar1 /*9207*/].f_8603[iVar2] = 0;
					}
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8603[iVar2] = 0;
				}
				if (uVar142[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8621[iVar2] = unk_0x27CDB7B0660BDAB1(uVar142[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8621[iVar2] = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar147[iVar1], iVar2) == 2)
				{
					if (unk_0x27CDB7B0660BDAB1(uVar147[iVar1], iVar2) > 1)
					{
						Global_1638223.f_94[iVar1 /*9207*/].f_3615[iVar2] = unk_0x27CDB7B0660BDAB1(uVar147[iVar1], iVar2);
					}
					else
					{
						Global_1638223.f_94[iVar1 /*9207*/].f_3615[iVar2] = 1;
					}
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3615[iVar2] = 1;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar162[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3341[iVar2] = unk_0x27CDB7B0660BDAB1(uVar162[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3341[iVar2] = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar167[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3413[iVar2] = unk_0x27CDB7B0660BDAB1(uVar167[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3413[iVar2] = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar172[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3359[iVar2] = unk_0x27CDB7B0660BDAB1(uVar172[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3359[iVar2] = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar177[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3377[iVar2] = unk_0x27CDB7B0660BDAB1(uVar177[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3377[iVar2] = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar182[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3395[iVar2] = unk_0x27CDB7B0660BDAB1(uVar182[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3395[iVar2] = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar187[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3431[iVar2] = unk_0x27CDB7B0660BDAB1(uVar187[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3431[iVar2] = 4;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar192[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3449[iVar2] = unk_0x27CDB7B0660BDAB1(uVar192[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3449[iVar2] = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar197[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3467[iVar2] = unk_0x27CDB7B0660BDAB1(uVar197[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3467[iVar2] = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar202[iVar1], iVar2) == 3)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_2885[iVar2 /*3*/] = unk_0xDFB5A5508080E518(uVar202[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_2885[iVar2 /*3*/] = 0f;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar207[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_2885[iVar2 /*3*/].f_1 = unk_0x27CDB7B0660BDAB1(uVar207[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_2885[iVar2 /*3*/].f_1 = 1;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar212[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_2885[iVar2 /*3*/].f_2 = unk_0x27CDB7B0660BDAB1(uVar212[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_2885[iVar2 /*3*/].f_2 = 50;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar217[iVar1], iVar2) == 3)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_2697[iVar2 /*11*/] = unk_0xDFB5A5508080E518(uVar217[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_2697[iVar2 /*11*/] = 0f;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar222[iVar1], iVar2) == 3)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_2697[iVar2 /*11*/].f_1[0] = unk_0xDFB5A5508080E518(uVar222[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_2697[iVar2 /*11*/].f_1[0] = 0f;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar227[iVar1], iVar2) == 3)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_2697[iVar2 /*11*/].f_1[1] = unk_0xDFB5A5508080E518(uVar227[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_2697[iVar2 /*11*/].f_1[1] = 0f;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar232[iVar1], iVar2) == 3)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_2697[iVar2 /*11*/].f_1[2] = unk_0xDFB5A5508080E518(uVar232[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_2697[iVar2 /*11*/].f_1[2] = 0f;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar237[iVar1], iVar2) == 3)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_2697[iVar2 /*11*/].f_1[3] = unk_0xDFB5A5508080E518(uVar237[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_2697[iVar2 /*11*/].f_1[3] = 0f;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar242[iVar1], iVar2) == 3)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_2697[iVar2 /*11*/].f_6 = unk_0xDFB5A5508080E518(uVar242[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_2697[iVar2 /*11*/].f_6 = 0f;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar247[iVar1], iVar2) == 3)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_2697[iVar2 /*11*/].f_7 = unk_0xDFB5A5508080E518(uVar247[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_2697[iVar2 /*11*/].f_7 = 0f;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar252[iVar1], iVar2) == 3)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_2697[iVar2 /*11*/].f_8 = unk_0xDFB5A5508080E518(uVar252[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_2697[iVar2 /*11*/].f_8 = 0f;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar257[iVar1], iVar2) == 3)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_2697[iVar2 /*11*/].f_9 = unk_0xDFB5A5508080E518(uVar257[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_2697[iVar2 /*11*/].f_9 = 0f;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar262[iVar1], iVar2) == 3)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_2697[iVar2 /*11*/].f_10 = unk_0xDFB5A5508080E518(uVar262[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_2697[iVar2 /*11*/].f_10 = 0f;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar267[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_2937[iVar2 /*4*/] = unk_0x27CDB7B0660BDAB1(uVar267[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_2937[iVar2 /*4*/] = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar272[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_2937[iVar2 /*4*/].f_1 = unk_0x27CDB7B0660BDAB1(uVar272[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_2937[iVar2 /*4*/].f_1 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar277[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_2937[iVar2 /*4*/].f_2 = unk_0x27CDB7B0660BDAB1(uVar277[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_2937[iVar2 /*4*/].f_2 = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar282[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_2937[iVar2 /*4*/].f_3 = unk_0x27CDB7B0660BDAB1(uVar282[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_2937[iVar2 /*4*/].f_3 = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar287[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3006[iVar2 /*3*/] = unk_0x27CDB7B0660BDAB1(uVar287[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3006[iVar2 /*3*/] = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar297[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3006[iVar2 /*3*/].f_2 = unk_0x27CDB7B0660BDAB1(uVar297[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3006[iVar2 /*3*/].f_2 = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar292[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3006[iVar2 /*3*/].f_1 = unk_0x27CDB7B0660BDAB1(uVar292[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3006[iVar2 /*3*/].f_1 = 0;
				}
				iVar486 = 0;
				iVar486 = 0;
				while (iVar486 <= 14)
				{
					if (unk_0x6E1D01265BDA6BEA(Var302[iVar1 /*16*/][iVar486], iVar2) == 2)
					{
						Global_1638223.f_94[iVar1 /*9207*/].f_3058[iVar2 /*16*/][iVar486] = unk_0x27CDB7B0660BDAB1(Var302[iVar1 /*16*/][iVar486], iVar2);
					}
					else
					{
						Global_1638223.f_94[iVar1 /*9207*/].f_3058[iVar2 /*16*/][iVar486] = 0;
					}
					iVar486++;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar462[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_677[iVar2] = unk_0x27CDB7B0660BDAB1(uVar462[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_677[iVar2] = 12;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar467[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_695[iVar2] = unk_0x27CDB7B0660BDAB1(uVar467[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_695[iVar2] = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar472[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_713[iVar2] = unk_0x27CDB7B0660BDAB1(uVar472[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_713[iVar2] = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar477[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_731[iVar2] = unk_0x27CDB7B0660BDAB1(uVar477[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_731[iVar2] = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar367[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_2560[iVar2 /*8*/] = unk_0x27CDB7B0660BDAB1(uVar367[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_2560[iVar2 /*8*/] = 1000;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar372[iVar1], iVar2) == 3)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_2560[iVar2 /*8*/].f_1 = unk_0xDFB5A5508080E518(uVar372[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_2560[iVar2 /*8*/].f_1 = 1.15f;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar397[iVar1], iVar2) == 3)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_2560[iVar2 /*8*/].f_6 = unk_0xDFB5A5508080E518(uVar397[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_2560[iVar2 /*8*/].f_6 = 10f;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar377[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_2560[iVar2 /*8*/].f_2 = unk_0x27CDB7B0660BDAB1(uVar377[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_2560[iVar2 /*8*/].f_2 = 25;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar382[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_2560[iVar2 /*8*/].f_7 = unk_0x27CDB7B0660BDAB1(uVar382[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_2560[iVar2 /*8*/].f_7 = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar387[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_2560[iVar2 /*8*/].f_3 = unk_0x27CDB7B0660BDAB1(uVar387[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_2560[iVar2 /*8*/].f_3 = 1;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar392[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_2560[iVar2 /*8*/].f_5 = unk_0x27CDB7B0660BDAB1(uVar392[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_2560[iVar2 /*8*/].f_5 = 25;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar402[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_513[iVar2] = unk_0x27CDB7B0660BDAB1(uVar402[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_513[iVar2] = 5;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar407[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_531[iVar2] = unk_0x27CDB7B0660BDAB1(uVar407[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_531[iVar2] = 20;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar412[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_749[iVar2] = unk_0x27CDB7B0660BDAB1(uVar412[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_749[iVar2] = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar417[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_767[iVar2] = unk_0x27CDB7B0660BDAB1(uVar417[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_767[iVar2] = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar422[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_785[iVar2] = unk_0x27CDB7B0660BDAB1(uVar422[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_785[iVar2] = 100;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar427[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8822[iVar2] = unk_0x27CDB7B0660BDAB1(uVar427[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8822[iVar2] = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar432[iVar1], iVar2) == 3)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8984[iVar2] = unk_0xDFB5A5508080E518(uVar432[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8984[iVar2] = 0f;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar437[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_803[iVar2] = unk_0x27CDB7B0660BDAB1(uVar437[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_803[iVar2] = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar442[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_821[iVar2] = unk_0x27CDB7B0660BDAB1(uVar442[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_821[iVar2] = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar447[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_839[iVar2] = unk_0x27CDB7B0660BDAB1(uVar447[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_839[iVar2] = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar452[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_857[iVar2] = unk_0x27CDB7B0660BDAB1(uVar452[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_857[iVar2] = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar457[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_875[iVar2] = unk_0x27CDB7B0660BDAB1(uVar457[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_875[iVar2] = -1;
				}
				iVar2++;
			}
		}
		iVar1++;
	}
}

void func_207(int iParam0)
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
	var uVar345[4];
	var uVar350[4];
	var uVar355[4];
	var uVar360[4];
	var uVar365[4];
	var uVar370[4];
	var uVar375[4];
	var uVar380[4];
	struct<5> Var385;
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
	var uVar731[4];
	var uVar736[4];
	var uVar741[4];
	var uVar746[4];
	var uVar751[4];
	var uVar756[4];
	var uVar761[4];
	var uVar766[4];
	var uVar771[4];
	var uVar776[4];
	var uVar781[4];
	var uVar786[4];
	var uVar791[4];
	var uVar796[4];
	var uVar801[4];
	var uVar806[4];
	var uVar811[4];
	var uVar816[4];
	var uVar821[4];
	int iVar826;
	int iVar827;
	
	iVar0 = unk_0xD41282265B0A744C(*iParam0, "endcon");
	Var385 = 4;
	Var385.f_1 = 4;
	Var385.f_1.f_5 = 4;
	Var385.f_1.f_5.f_5 = 4;
	Var385.f_1.f_5.f_5.f_5 = 4;
	iVar1 = 0;
	while (iVar1 <= (Global_1638223.f_32 - 1))
	{
		if (iVar1 < 4)
		{
			StringCopy(&cVar4, "tmt", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar15[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "sudtm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar20[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "tms", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar25[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "txt", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar30[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "tak", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar35[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "cap", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar40[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "lnkdr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar45[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "lnkdr2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar50[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "hscr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar55[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "rsiv", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar60[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "wprs", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar65[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "wfrc", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar75[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "wchg", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar70[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "fkwl", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar80[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "wdly", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar90[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "ttlc", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar95[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "swtod", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar100[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "swtok", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar105[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "fsdtmr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar315[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "mpftmr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar310[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "artlit", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar110[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "mrtl", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar115[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "bmbtm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar120[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "gpsdp", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar125[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "dcont", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar130[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "critw", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar135[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "diswp", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar140[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "frndf", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar145[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "dsosui", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar150[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "dpos", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar155[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "txt1", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar160[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "dpos2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar165[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "dpost", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar170[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "dotim", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar175[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "dov", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar180[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "dost", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar185[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "dops", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar190[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "pl2an", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar195[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "lvbs", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar200[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "ovwty", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar205[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "ovwid", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar210[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "wldbs", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar215[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "drpr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar220[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "gbtp", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar225[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "irbs", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar230[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "irbs2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar235[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "irbs3", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar240[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "irbs4", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar245[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "irbs5", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar250[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "irbs6", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar255[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "irbs7", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar260[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "irbs8", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar265[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "irbs9", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar270[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "mnvms", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar320[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "ivms", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar325[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "ivmsh", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar330[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "isvmg", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar335[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "isvro", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar340[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "isvhr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar345[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "irfbs", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar275[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "plvrl", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar280[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "bdprt", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar375[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "bdpst", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar380[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "hdmfp", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar350[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			bVar8 = false;
			bVar9 = false;
			bVar10 = false;
			bVar11 = false;
			bVar12 = false;
			bVar13 = false;
			bVar14 = false;
			StringCopy(&cVar4, "opl0", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar4) == 7)
			{
				bVar8 = true;
				uVar285[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			}
			StringCopy(&cVar4, "opl1", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar4) == 7)
			{
				bVar9 = true;
				uVar290[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			}
			StringCopy(&cVar4, "opl2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar4) == 7)
			{
				bVar10 = true;
				uVar295[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			}
			StringCopy(&cVar4, "opl3", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar4) == 7)
			{
				bVar11 = true;
				uVar300[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			}
			StringCopy(&cVar4, "oplbs", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar305[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "mpot0", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar4) == 7)
			{
				bVar12 = true;
				uVar355[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			}
			StringCopy(&cVar4, "mpot1", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar4) == 7)
			{
				bVar13 = true;
				uVar360[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			}
			StringCopy(&cVar4, "mpot2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar4) == 7)
			{
				bVar14 = true;
				uVar365[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			}
			StringCopy(&cVar4, "rnrbs", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar370[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "gbnum", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar416[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "gbngn", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar421[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "gblgn", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar426[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "gbcol", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar431[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "gbdel", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar436[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "mcstr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar441[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "mcsrm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar446[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "mcmp", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar461[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "aumx", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar451[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "mpaumx", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar456[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "filtlh", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar466[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "gbmax", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar471[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "gbngm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar476[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "gblgm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar481[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "gbvhl", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar486[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "gbaie", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar411[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "gacc", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar491[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "gfld", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar496[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "gbat", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar501[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "gbv1", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar506[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "gbv2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar511[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "gbaw", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar516[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "gbfnr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar521[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "txt2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar526[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "txt3", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar531[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "txt4", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar536[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "txt5", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar541[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "fail", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar546[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "bfm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar571[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "wwm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar551[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "vss", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar556[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "cwt", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar561[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "vhm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar566[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "tsc", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar576[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "mcry", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar581[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "destv", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar586[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "destr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar591[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "destv1", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar596[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "destv2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar601[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "destw", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar606[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "bd2t", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar701[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "bd2v", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar706[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "bd2v1", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar711[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "bd2v2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar716[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "bd2r", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar721[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "bd2w", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar726[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "out2wg", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar736[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "out2iv", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar741[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "out2io", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar746[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "out2bs", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar751[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "out2mm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar756[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "out2fp", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar761[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "out2et", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar766[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "out2id", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar771[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "airset", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar776[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "airsid", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar781[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "airstv", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar786[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "airsod", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar791[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "airsodx", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar796[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "airssp", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar801[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "airola", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar806[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "airoha", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar811[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "airsr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar816[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "airsft", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar821[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "out2hv", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar731[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "outbt", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar611[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "outb", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar616[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "outr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar621[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "outhv", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar641[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "outb1v", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar626[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "outb2v", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar631[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "outw", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar636[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "outwtg", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar646[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "outiwv", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar651[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "outiwo", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar656[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "outbs", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar661[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "outclo", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar671[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "outclr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar676[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "outclp", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar681[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "outmm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar666[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "outfp", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar686[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "outety", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar691[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			StringCopy(&cVar4, "outeid", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar696[iVar1] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
			iVar3 = 0;
			while (iVar3 <= 3)
			{
				StringCopy(&cVar4, "rlbs", 16);
				StringIntConCat(&cVar4, iVar1, 16);
				StringConCat(&cVar4, "-", 16);
				StringIntConCat(&cVar4, iVar3, 16);
				Var385[iVar1 /*5*/][iVar3] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
				StringCopy(&cVar4, "rlnm", 16);
				StringIntConCat(&cVar4, iVar3, 16);
				uVar406[iVar3] = unk_0x560A2E3DA92FA8F8(iVar0, &cVar4);
				iVar3++;
			}
			iVar826 = unk_0x560A2E3DA92FA8F8(iVar0, "tlimt");
			iVar2 = 0;
			while (iVar2 <= (Global_1638223.f_94[iVar1 /*9207*/].f_59 - 1))
			{
				if (uVar15[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_605[iVar2] = unk_0x27CDB7B0660BDAB1(uVar15[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_605[iVar2] = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar20[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_623[iVar2] = unk_0x27CDB7B0660BDAB1(uVar20[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_623[iVar2] = 0;
				}
				if (uVar25[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3561[iVar2] = unk_0x27CDB7B0660BDAB1(uVar25[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3561[iVar2] = 0;
				}
				if (uVar35[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3633[iVar2] = unk_0x27CDB7B0660BDAB1(uVar35[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3633[iVar2] = 0;
				}
				if (uVar40[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3651[iVar2] = unk_0x27CDB7B0660BDAB1(uVar40[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3651[iVar2] = 0;
				}
				if (uVar30[iVar1] != 0)
				{
					StringCopy(&(Global_1638223.f_94[iVar1 /*9207*/].f_4941[iVar2 /*16*/]), unk_0x71104AC03D1921C0(uVar30[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_1638223.f_94[iVar1 /*9207*/].f_4941[iVar2 /*16*/]), "", 64);
				}
				if (uVar45[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_549[iVar2] = unk_0x27CDB7B0660BDAB1(uVar45[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_549[iVar2] = 0;
				}
				if (uVar50[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_567[iVar2] = unk_0x27CDB7B0660BDAB1(uVar50[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_567[iVar2] = 0;
				}
				if (Global_1638223.f_94[iVar1 /*9207*/].f_567[iVar2] == 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_567[iVar2] = -1;
				}
				if (uVar55[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_587[iVar2] = unk_0x27CDB7B0660BDAB1(uVar55[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_587[iVar2] = 0;
				}
				if (uVar75[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3687[iVar2] = unk_0x27CDB7B0660BDAB1(uVar75[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3687[iVar2] = 0;
				}
				if (uVar70[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3669[iVar2] = unk_0x27CDB7B0660BDAB1(uVar70[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3669[iVar2] = 0;
				}
				if (uVar80[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3709[iVar2] = unk_0x27CDB7B0660BDAB1(uVar80[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3709[iVar2] = 0;
				}
				if (uVar85[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3727[iVar2] = unk_0x27CDB7B0660BDAB1(uVar85[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3727[iVar2] = 1;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar90[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3747[iVar2] = unk_0x27CDB7B0660BDAB1(uVar90[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3747[iVar2] = 10000;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar95[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3783[iVar2] = unk_0x27CDB7B0660BDAB1(uVar95[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3783[iVar2] = -1;
				}
				if (uVar60[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_893[iVar2] = unk_0x27CDB7B0660BDAB1(uVar60[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_893[iVar2] = 0;
				}
				if (uVar65[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_911[iVar2] = unk_0x27CDB7B0660BDAB1(uVar65[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_911[iVar2] = 0;
				}
				if (uVar145[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_965[iVar2] = unk_0x27CDB7B0660BDAB1(uVar145[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_965[iVar2] = 0;
				}
				if (uVar150[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_983[iVar2] = unk_0x27CDB7B0660BDAB1(uVar150[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_983[iVar2] = 0;
				}
				if (uVar100[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_929[iVar2] = unk_0x27CDB7B0660BDAB1(uVar100[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_929[iVar2] = -1;
				}
				if (uVar105[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_947[iVar2] = unk_0x27CDB7B0660BDAB1(uVar105[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_947[iVar2] = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar115[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3765[iVar2] = unk_0x27CDB7B0660BDAB1(uVar115[iVar1], iVar2);
				}
				else if (unk_0x6E1D01265BDA6BEA(iVar826, iVar1) == 2 && iVar826 != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3765[iVar2] = unk_0x27CDB7B0660BDAB1(iVar826, iVar1);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3765[iVar2] = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar110[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_1019[iVar2] = unk_0x27CDB7B0660BDAB1(uVar110[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_1019[iVar2] = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar315[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_659[iVar2] = unk_0x27CDB7B0660BDAB1(uVar315[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_659[iVar2] = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar310[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_641[iVar2] = unk_0x27CDB7B0660BDAB1(uVar310[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_641[iVar2] = 0;
				}
				if (uVar120[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_1001[iVar2] = unk_0x27CDB7B0660BDAB1(uVar120[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_1001[iVar2] = 0;
				}
				if (uVar125[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_1037[iVar2] = unk_0x27CDB7B0660BDAB1(uVar125[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_1037[iVar2] = 0;
				}
				if (uVar130[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8441[iVar2] = unk_0x27CDB7B0660BDAB1(uVar130[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8441[iVar2] = 0;
				}
				if (uVar135[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8459[iVar2] = unk_0x27CDB7B0660BDAB1(uVar135[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8459[iVar2] = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar140[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8477[iVar2] = unk_0x27CDB7B0660BDAB1(uVar140[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8477[iVar2] = 0;
				}
				if (uVar155[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4194[iVar2 /*3*/] = { unk_0xD458CBD2DA2C775D(uVar155[iVar1], iVar2) };
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4194[iVar2 /*3*/] = { 0f, 0f, 0f };
				}
				if (!func_179())
				{
					if (uVar160[iVar1] != 0)
					{
						StringCopy(&(Global_1638223.f_94[iVar1 /*9207*/].f_5214[iVar2 /*16*/]), unk_0x71104AC03D1921C0(uVar160[iVar1], iVar2), 64);
					}
					else
					{
						StringCopy(&(Global_1638223.f_94[iVar1 /*9207*/].f_5214[iVar2 /*16*/]), "", 64);
					}
				}
				if (uVar165[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4246[iVar2 /*3*/] = { unk_0xD458CBD2DA2C775D(uVar165[iVar1], iVar2) };
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4246[iVar2 /*3*/] = { 0f, 0f, 0f };
				}
				if (uVar170[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4316[iVar2] = unk_0x27CDB7B0660BDAB1(uVar170[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4316[iVar2] = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar175[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4352[iVar2] = unk_0x27CDB7B0660BDAB1(uVar175[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4352[iVar2] = 0;
				}
				if (uVar225[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3801[iVar2] = unk_0x27CDB7B0660BDAB1(uVar225[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3801[iVar2] = 0;
				}
				if (uVar220[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4298[iVar2] = unk_0xDFB5A5508080E518(uVar220[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4298[iVar2] = 0f;
				}
				if (uVar230[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4552[iVar2] = unk_0x27CDB7B0660BDAB1(uVar230[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4552[iVar2] = 0;
				}
				if (uVar235[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4570[iVar2] = unk_0x27CDB7B0660BDAB1(uVar235[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4570[iVar2] = 0;
				}
				if (uVar240[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4588[iVar2] = unk_0x27CDB7B0660BDAB1(uVar240[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4588[iVar2] = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar245[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4606[iVar2] = unk_0x27CDB7B0660BDAB1(uVar245[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4606[iVar2] = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar250[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4624[iVar2] = unk_0x27CDB7B0660BDAB1(uVar250[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4624[iVar2] = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar255[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4642[iVar2] = unk_0x27CDB7B0660BDAB1(uVar255[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4642[iVar2] = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar260[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4660[iVar2] = unk_0x27CDB7B0660BDAB1(uVar260[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4660[iVar2] = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar265[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4678[iVar2] = unk_0x27CDB7B0660BDAB1(uVar265[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4678[iVar2] = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar270[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4696[iVar2] = unk_0x27CDB7B0660BDAB1(uVar270[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4696[iVar2] = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar320[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8840[iVar2] = unk_0x27CDB7B0660BDAB1(uVar320[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8840[iVar2] = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar325[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8858[iVar2] = unk_0x27CDB7B0660BDAB1(uVar325[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8858[iVar2] = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar330[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8876[iVar2] = unk_0x27CDB7B0660BDAB1(uVar330[iVar1], iVar2);
					if (Global_1638223.f_94[iVar1 /*9207*/].f_8876[iVar2] == 0)
					{
						Global_1638223.f_94[iVar1 /*9207*/].f_8876[iVar2] = -1;
					}
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8876[iVar2] = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar335[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8894[iVar2] = unk_0x27CDB7B0660BDAB1(uVar335[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8894[iVar2] = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar340[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8912[iVar2] = unk_0x27CDB7B0660BDAB1(uVar340[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8912[iVar2] = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar345[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8930[iVar2] = unk_0x27CDB7B0660BDAB1(uVar345[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8930[iVar2] = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar275[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4714[iVar2] = unk_0x27CDB7B0660BDAB1(uVar275[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4714[iVar2] = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar280[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_39[iVar2] = unk_0x27CDB7B0660BDAB1(uVar280[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_39[iVar2] = -1;
				}
				iVar3 = 0;
				while (iVar3 <= 3)
				{
					if (unk_0x6E1D01265BDA6BEA(Var385[iVar1 /*5*/][iVar3], iVar2) == 2)
					{
						Global_1638223.f_94[iVar1 /*9207*/].f_4771[iVar2 /*5*/][iVar3] = unk_0x27CDB7B0660BDAB1(Var385[iVar1 /*5*/][iVar3], iVar2);
					}
					else
					{
						Global_1638223.f_94[iVar1 /*9207*/].f_4771[iVar2 /*5*/][iVar3] = 0;
					}
					if (unk_0x6E1D01265BDA6BEA(uVar406[iVar3], 0) == 4)
					{
						StringCopy(&(Global_1638223.f_94[iVar1 /*9207*/].f_4857[iVar3 /*16*/]), unk_0x71104AC03D1921C0(uVar406[iVar3], 0), 64);
					}
					else
					{
						StringCopy(&(Global_1638223.f_94[iVar1 /*9207*/].f_4857[iVar3 /*16*/]), "", 64);
					}
					iVar3++;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar375[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4735[iVar2] = unk_0x27CDB7B0660BDAB1(uVar375[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4735[iVar2] = Global_1638223.f_94[iVar1 /*9207*/].f_3333;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar380[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4753[iVar2] = unk_0x27CDB7B0660BDAB1(uVar380[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4753[iVar2] = Global_1638223.f_94[iVar1 /*9207*/].f_3559;
				}
				if (bVar8)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8250[iVar2 /*5*/][0] = unk_0x27CDB7B0660BDAB1(uVar285[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8250[iVar2 /*5*/][0] = -1;
				}
				if (bVar9)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8250[iVar2 /*5*/][1] = unk_0x27CDB7B0660BDAB1(uVar290[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8250[iVar2 /*5*/][1] = -1;
				}
				if (bVar10)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8250[iVar2 /*5*/][2] = unk_0x27CDB7B0660BDAB1(uVar295[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8250[iVar2 /*5*/][2] = -1;
				}
				if (bVar11)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8250[iVar2 /*5*/][3] = unk_0x27CDB7B0660BDAB1(uVar300[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8250[iVar2 /*5*/][3] = -1;
				}
				if (bVar12)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8354[iVar2 /*4*/][0] = unk_0x27CDB7B0660BDAB1(uVar355[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8354[iVar2 /*4*/][0] = -1;
				}
				if (bVar13)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8354[iVar2 /*4*/][1] = unk_0x27CDB7B0660BDAB1(uVar360[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8354[iVar2 /*4*/][1] = -1;
				}
				if (bVar14)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8354[iVar2 /*4*/][2] = unk_0x27CDB7B0660BDAB1(uVar365[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8354[iVar2 /*4*/][2] = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar370[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8423[iVar2] = unk_0x27CDB7B0660BDAB1(uVar370[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8423[iVar2] = 0;
				}
				iVar827 = Global_1638223.f_94[iVar1 /*9207*/].f_59;
				while (iVar827 <= 31)
				{
					if (unk_0xAA4F14DA15DB0B51(Global_1638223.f_94[iVar1 /*9207*/].f_8423[iVar2], iVar827))
					{
						unk_0x507FE690B1271947(&(Global_1638223.f_94[iVar1 /*9207*/].f_8423[iVar2]), iVar827);
					}
					iVar827++;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar350[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8804[iVar2] = unk_0x27CDB7B0660BDAB1(uVar350[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8804[iVar2] = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar180[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4334[iVar2] = unk_0x27CDB7B0660BDAB1(uVar180[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4334[iVar2] = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar185[iVar1], iVar2) == 3)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4370[iVar2] = unk_0xDFB5A5508080E518(uVar185[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4370[iVar2] = -1f;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar190[iVar1], iVar2) == 3)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4388[iVar2] = unk_0xDFB5A5508080E518(uVar190[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4388[iVar2] = -1f;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar195[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4426[iVar2] = unk_0x27CDB7B0660BDAB1(uVar195[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4426[iVar2] = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar200[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4408[iVar2] = unk_0x27CDB7B0660BDAB1(uVar200[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4408[iVar2] = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar205[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8675[iVar2] = unk_0x27CDB7B0660BDAB1(uVar205[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8675[iVar2] = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar210[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8693[iVar2] = unk_0x27CDB7B0660BDAB1(uVar210[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8693[iVar2] = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar215[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8711[iVar2] = unk_0x27CDB7B0660BDAB1(uVar215[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8711[iVar2] = 0;
				}
				if (uVar305[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8336[iVar2] = unk_0x27CDB7B0660BDAB1(uVar305[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_8336[iVar2] = 0;
				}
				if (uVar416[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3820[iVar2] = unk_0x27CDB7B0660BDAB1(uVar416[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3820[iVar2] = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar421[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4104[iVar2] = unk_0x27CDB7B0660BDAB1(uVar421[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4104[iVar2] = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar426[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4140[iVar2] = unk_0x27CDB7B0660BDAB1(uVar426[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4140[iVar2] = 0;
				}
				if (uVar431[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3856[iVar2] = unk_0x27CDB7B0660BDAB1(uVar431[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3856[iVar2] = 0;
				}
				if (uVar436[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3838[iVar2] = unk_0x27CDB7B0660BDAB1(uVar436[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3838[iVar2] = 0;
				}
				if (uVar441[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4444[iVar2] = unk_0x27CDB7B0660BDAB1(uVar441[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4444[iVar2] = 0;
				}
				if (uVar446[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4516[iVar2] = unk_0x27CDB7B0660BDAB1(uVar446[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4516[iVar2] = -1;
				}
				if (uVar451[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4480[iVar2] = unk_0x27CDB7B0660BDAB1(uVar451[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4480[iVar2] = 0;
				}
				if (uVar456[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4498[iVar2] = unk_0x27CDB7B0660BDAB1(uVar456[iVar1], iVar2);
				}
				else if (Global_1638223.f_94[iVar1 /*9207*/].f_4480[iVar2] != 0 && unk_0xAA4F14DA15DB0B51(Global_1638223.f_94[iVar1 /*9207*/].f_4588[iVar2], 8))
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4498[iVar2] = Global_1638223.f_94[iVar1 /*9207*/].f_4480[iVar2];
					Global_1638223.f_94[iVar1 /*9207*/].f_4480[iVar2] = 0;
					unk_0x507FE690B1271947(&(Global_1638223.f_94[iVar1 /*9207*/].f_4588[iVar2]), 8);
				}
				if (uVar461[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4462[iVar2] = unk_0x27CDB7B0660BDAB1(uVar461[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4462[iVar2] = 0;
				}
				if (uVar466[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4534[iVar2] = unk_0x27CDB7B0660BDAB1(uVar466[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4534[iVar2] = 0;
				}
				if (uVar471[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3996[iVar2] = unk_0x27CDB7B0660BDAB1(uVar471[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3996[iVar2] = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar476[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4122[iVar2] = unk_0x27CDB7B0660BDAB1(uVar476[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4122[iVar2] = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar481[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4158[iVar2] = unk_0x27CDB7B0660BDAB1(uVar481[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4158[iVar2] = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar521[iVar1], iVar2) == 3)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4176[iVar2] = unk_0xDFB5A5508080E518(uVar521[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4176[iVar2] = -1f;
				}
				if (uVar411[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4086[iVar2] = unk_0x27CDB7B0660BDAB1(uVar411[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4086[iVar2] = 0;
				}
				if (uVar486[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4014[iVar2] = unk_0x27CDB7B0660BDAB1(uVar486[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4014[iVar2] = 100;
				}
				if (uVar491[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4050[iVar2] = unk_0x27CDB7B0660BDAB1(uVar491[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4050[iVar2] = 0;
				}
				if (uVar496[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4068[iVar2] = unk_0x27CDB7B0660BDAB1(uVar496[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4068[iVar2] = 0;
				}
				if (uVar501[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4032[iVar2] = unk_0x27CDB7B0660BDAB1(uVar501[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_4032[iVar2] = 0;
				}
				if (uVar506[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3874[iVar2 /*3*/] = { unk_0xD458CBD2DA2C775D(uVar506[iVar1], iVar2) };
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3874[iVar2 /*3*/] = { 0f, 0f, 0f };
				}
				if (uVar511[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3926[iVar2 /*3*/] = { unk_0xD458CBD2DA2C775D(uVar511[iVar1], iVar2) };
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3926[iVar2 /*3*/] = { 0f, 0f, 0f };
				}
				if (uVar516[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3978[iVar2] = unk_0xDFB5A5508080E518(uVar516[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3978[iVar2] = 0f;
				}
				if (uVar526[iVar1] != 0)
				{
					StringCopy(&(Global_1638223.f_94[iVar1 /*9207*/].f_5487[iVar2 /*16*/]), unk_0x71104AC03D1921C0(uVar526[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_1638223.f_94[iVar1 /*9207*/].f_5487[iVar2 /*16*/]), "", 64);
				}
				if (!func_179())
				{
					if (uVar531[iVar1] != 0)
					{
						StringCopy(&(Global_1638223.f_94[iVar1 /*9207*/].f_6306[iVar2 /*16*/]), unk_0x71104AC03D1921C0(uVar531[iVar1], iVar2), 64);
					}
					else
					{
						StringCopy(&(Global_1638223.f_94[iVar1 /*9207*/].f_6306[iVar2 /*16*/]), "", 64);
					}
					if (uVar536[iVar1] != 0)
					{
						StringCopy(&(Global_1638223.f_94[iVar1 /*9207*/].f_5760[iVar2 /*16*/]), unk_0x71104AC03D1921C0(uVar536[iVar1], iVar2), 64);
					}
					else
					{
						StringCopy(&(Global_1638223.f_94[iVar1 /*9207*/].f_5760[iVar2 /*16*/]), "", 64);
					}
					if (uVar541[iVar1] != 0)
					{
						StringCopy(&(Global_1638223.f_94[iVar1 /*9207*/].f_6033[iVar2 /*16*/]), unk_0x71104AC03D1921C0(uVar541[iVar1], iVar2), 64);
					}
					else
					{
						StringCopy(&(Global_1638223.f_94[iVar1 /*9207*/].f_6033[iVar2 /*16*/]), "", 64);
					}
				}
				if (uVar546[iVar1] != 0)
				{
					StringCopy(&(Global_1638223.f_94[iVar1 /*9207*/].f_6579[iVar2 /*16*/]), unk_0x71104AC03D1921C0(uVar546[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_1638223.f_94[iVar1 /*9207*/].f_6579[iVar2 /*16*/]), "", 64);
				}
				if (uVar571[iVar1] != 0)
				{
					StringCopy(&(Global_1638223.f_94[iVar1 /*9207*/].f_6852[iVar2 /*16*/]), unk_0x71104AC03D1921C0(uVar571[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_1638223.f_94[iVar1 /*9207*/].f_6852[iVar2 /*16*/]), "", 64);
				}
				if (uVar551[iVar1] != 0)
				{
					StringCopy(&(Global_1638223.f_94[iVar1 /*9207*/].f_7125[iVar2 /*16*/]), unk_0x71104AC03D1921C0(uVar551[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_1638223.f_94[iVar1 /*9207*/].f_7125[iVar2 /*16*/]), "", 64);
				}
				if (uVar556[iVar1] != 0)
				{
					StringCopy(&(Global_1638223.f_94[iVar1 /*9207*/].f_7398[iVar2 /*16*/]), unk_0x71104AC03D1921C0(uVar556[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_1638223.f_94[iVar1 /*9207*/].f_7398[iVar2 /*16*/]), "", 64);
				}
				if (uVar561[iVar1] != 0)
				{
					StringCopy(&(Global_1638223.f_94[iVar1 /*9207*/].f_7671[iVar2 /*16*/]), unk_0x71104AC03D1921C0(uVar561[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_1638223.f_94[iVar1 /*9207*/].f_7671[iVar2 /*16*/]), "", 64);
				}
				if (uVar566[iVar1] != 0)
				{
					StringCopy(&(Global_1638223.f_94[iVar1 /*9207*/].f_7944[iVar2 /*16*/]), unk_0x71104AC03D1921C0(uVar566[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_1638223.f_94[iVar1 /*9207*/].f_7944[iVar2 /*16*/]), "", 64);
				}
				if (uVar576[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3579[iVar2] = unk_0x27CDB7B0660BDAB1(uVar576[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3579[iVar2] = 0;
				}
				if (uVar581[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3597[iVar2] = unk_0x27CDB7B0660BDAB1(uVar581[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_3597[iVar2] = 0;
				}
				if (uVar626[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_1059[iVar2 /*28*/].f_3 = { unk_0xD458CBD2DA2C775D(uVar626[iVar1], iVar2) };
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_1059[iVar2 /*28*/].f_3 = { 0f, 0f, 0f };
				}
				if (uVar631[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_1059[iVar2 /*28*/].f_6 = { unk_0xD458CBD2DA2C775D(uVar631[iVar1], iVar2) };
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_1059[iVar2 /*28*/].f_6 = { 0f, 0f, 0f };
				}
				if (uVar636[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_1059[iVar2 /*28*/].f_10 = unk_0xDFB5A5508080E518(uVar636[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_1059[iVar2 /*28*/].f_10 = 0f;
				}
				if (uVar641[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_1059[iVar2 /*28*/].f_13 = { unk_0xD458CBD2DA2C775D(uVar641[iVar1], iVar2) };
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_1059[iVar2 /*28*/].f_13 = { 0f, 0f, 0f };
				}
				if (uVar616[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_1059[iVar2 /*28*/] = { unk_0xD458CBD2DA2C775D(uVar616[iVar1], iVar2) };
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_1059[iVar2 /*28*/] = { 0f, 0f, 0f };
				}
				if (unk_0x6E1D01265BDA6BEA(uVar621[iVar1], iVar2) == 3)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_1059[iVar2 /*28*/].f_9 = unk_0xDFB5A5508080E518(uVar621[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_1059[iVar2 /*28*/].f_9 = 0f;
				}
				if (uVar611[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_1059[iVar2 /*28*/].f_16 = unk_0x27CDB7B0660BDAB1(uVar611[iVar1], iVar2);
				}
				if (uVar731[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_1536[iVar2 /*28*/].f_13 = { unk_0xD458CBD2DA2C775D(uVar731[iVar1], iVar2) };
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_1536[iVar2 /*28*/].f_13 = { 0f, 0f, 0f };
				}
				if (uVar706[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_1536[iVar2 /*28*/] = { unk_0xD458CBD2DA2C775D(uVar706[iVar1], iVar2) };
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_1536[iVar2 /*28*/] = { 0f, 0f, 0f };
				}
				if (uVar716[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_1536[iVar2 /*28*/].f_3 = { unk_0xD458CBD2DA2C775D(uVar716[iVar1], iVar2) };
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_1536[iVar2 /*28*/].f_3 = { 0f, 0f, 0f };
				}
				if (uVar711[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_1536[iVar2 /*28*/].f_6 = { unk_0xD458CBD2DA2C775D(uVar711[iVar1], iVar2) };
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_1536[iVar2 /*28*/].f_6 = { 0f, 0f, 0f };
				}
				if (uVar726[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_1536[iVar2 /*28*/].f_10 = unk_0xDFB5A5508080E518(uVar726[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_1536[iVar2 /*28*/].f_10 = 0f;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar721[iVar1], iVar2) == 3)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_1536[iVar2 /*28*/].f_9 = unk_0xDFB5A5508080E518(uVar721[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_1536[iVar2 /*28*/].f_9 = 0f;
				}
				if (uVar701[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_1536[iVar2 /*28*/].f_16 = unk_0x27CDB7B0660BDAB1(uVar701[iVar1], iVar2);
				}
				if (uVar596[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_2013[iVar2 /*28*/].f_3 = { unk_0xD458CBD2DA2C775D(uVar596[iVar1], iVar2) };
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_2013[iVar2 /*28*/].f_3 = { 0f, 0f, 0f };
				}
				if (uVar601[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_2013[iVar2 /*28*/].f_6 = { unk_0xD458CBD2DA2C775D(uVar601[iVar1], iVar2) };
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_2013[iVar2 /*28*/].f_6 = { 0f, 0f, 0f };
				}
				if (uVar606[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_2013[iVar2 /*28*/].f_10 = unk_0xDFB5A5508080E518(uVar606[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_2013[iVar2 /*28*/].f_10 = 0f;
				}
				if (uVar586[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_2013[iVar2 /*28*/] = { unk_0xD458CBD2DA2C775D(uVar586[iVar1], iVar2) };
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_2013[iVar2 /*28*/] = { 0f, 0f, 0f };
				}
				if (uVar591[iVar1] != 0)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_2013[iVar2 /*28*/].f_9 = unk_0xDFB5A5508080E518(uVar591[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_2013[iVar2 /*28*/].f_9 = 0f;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar646[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_1059[iVar2 /*28*/].f_19 = unk_0x27CDB7B0660BDAB1(uVar646[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_1059[iVar2 /*28*/].f_19 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar651[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_1059[iVar2 /*28*/].f_17 = unk_0x27CDB7B0660BDAB1(uVar651[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_1059[iVar2 /*28*/].f_17 = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar656[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_1059[iVar2 /*28*/].f_18 = unk_0x27CDB7B0660BDAB1(uVar656[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_1059[iVar2 /*28*/].f_18 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar661[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_1059[iVar2 /*28*/].f_20 = unk_0x27CDB7B0660BDAB1(uVar661[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_1059[iVar2 /*28*/].f_20 = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar666[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_1059[iVar2 /*28*/].f_23 = unk_0x27CDB7B0660BDAB1(uVar666[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_1059[iVar2 /*28*/].f_23 = 120;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar671[iVar1], iVar2) == 3)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_1059[iVar2 /*28*/].f_24 = unk_0xDFB5A5508080E518(uVar671[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_1059[iVar2 /*28*/].f_24 = 5f;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar676[iVar1], iVar2) == 3)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_1059[iVar2 /*28*/].f_25 = unk_0xDFB5A5508080E518(uVar676[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_1059[iVar2 /*28*/].f_25 = 10f;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar681[iVar1], iVar2) == 3)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_1059[iVar2 /*28*/].f_26 = unk_0xDFB5A5508080E518(uVar681[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_1059[iVar2 /*28*/].f_26 = 30f;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar686[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_1059[iVar2 /*28*/].f_27 = unk_0x27CDB7B0660BDAB1(uVar686[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_1059[iVar2 /*28*/].f_27 = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar691[iVar1], iVar2) == 2 && unk_0x6E1D01265BDA6BEA(uVar696[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_1059[iVar2 /*28*/].f_21 = unk_0x27CDB7B0660BDAB1(uVar691[iVar1], iVar2);
					Global_1638223.f_94[iVar1 /*9207*/].f_1059[iVar2 /*28*/].f_22 = unk_0x27CDB7B0660BDAB1(uVar696[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_1059[iVar2 /*28*/].f_21 = 0;
					Global_1638223.f_94[iVar1 /*9207*/].f_1059[iVar2 /*28*/].f_22 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar736[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_1536[iVar2 /*28*/].f_19 = unk_0x27CDB7B0660BDAB1(uVar736[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_1536[iVar2 /*28*/].f_19 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar741[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_1536[iVar2 /*28*/].f_17 = unk_0x27CDB7B0660BDAB1(uVar741[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_1536[iVar2 /*28*/].f_17 = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar746[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_1536[iVar2 /*28*/].f_18 = unk_0x27CDB7B0660BDAB1(uVar746[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_1536[iVar2 /*28*/].f_18 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar751[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_1536[iVar2 /*28*/].f_20 = unk_0x27CDB7B0660BDAB1(uVar751[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_1536[iVar2 /*28*/].f_20 = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar756[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_1536[iVar2 /*28*/].f_23 = unk_0x27CDB7B0660BDAB1(uVar756[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_1536[iVar2 /*28*/].f_23 = 120;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar761[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_1536[iVar2 /*28*/].f_27 = unk_0x27CDB7B0660BDAB1(uVar761[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_1536[iVar2 /*28*/].f_27 = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar766[iVar1], iVar2) == 2 && unk_0x6E1D01265BDA6BEA(uVar771[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_1536[iVar2 /*28*/].f_21 = unk_0x27CDB7B0660BDAB1(uVar766[iVar1], iVar2);
					Global_1638223.f_94[iVar1 /*9207*/].f_1536[iVar2 /*28*/].f_22 = unk_0x27CDB7B0660BDAB1(uVar771[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_1536[iVar2 /*28*/].f_21 = 0;
					Global_1638223.f_94[iVar1 /*9207*/].f_1536[iVar2 /*28*/].f_22 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar776[iVar1], iVar2) == 2 && unk_0x6E1D01265BDA6BEA(uVar781[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_9002[iVar2 /*12*/] = unk_0x27CDB7B0660BDAB1(uVar776[iVar1], iVar2);
					Global_1638223.f_94[iVar1 /*9207*/].f_9002[iVar2 /*12*/].f_1 = unk_0x27CDB7B0660BDAB1(uVar781[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_9002[iVar2 /*12*/] = 0;
					Global_1638223.f_94[iVar1 /*9207*/].f_9002[iVar2 /*12*/].f_1 = -1;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar786[iVar1], iVar2) == 5)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_9002[iVar2 /*12*/].f_2 = { unk_0xD458CBD2DA2C775D(uVar786[iVar1], iVar2) };
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_9002[iVar2 /*12*/].f_2 = { 0f, 0f, 0f };
				}
				if (unk_0x6E1D01265BDA6BEA(uVar801[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_9002[iVar2 /*12*/].f_7 = unk_0x27CDB7B0660BDAB1(uVar801[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_9002[iVar2 /*12*/].f_7 = 25;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar791[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_9002[iVar2 /*12*/].f_5 = unk_0x27CDB7B0660BDAB1(uVar791[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_9002[iVar2 /*12*/].f_5 = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar796[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_9002[iVar2 /*12*/].f_6 = unk_0x27CDB7B0660BDAB1(uVar796[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_9002[iVar2 /*12*/].f_6 = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar806[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_9002[iVar2 /*12*/].f_8 = unk_0x27CDB7B0660BDAB1(uVar806[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_9002[iVar2 /*12*/].f_8 = 25;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar811[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_9002[iVar2 /*12*/].f_9 = unk_0x27CDB7B0660BDAB1(uVar811[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_9002[iVar2 /*12*/].f_9 = 45;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar816[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_9002[iVar2 /*12*/].f_10 = unk_0x27CDB7B0660BDAB1(uVar816[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_9002[iVar2 /*12*/].f_10 = 0;
				}
				if (unk_0x6E1D01265BDA6BEA(uVar821[iVar1], iVar2) == 2)
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_9002[iVar2 /*12*/].f_11 = unk_0x27CDB7B0660BDAB1(uVar821[iVar1], iVar2);
				}
				else
				{
					Global_1638223.f_94[iVar1 /*9207*/].f_9002[iVar2 /*12*/].f_11 = 3500;
				}
				iVar2++;
			}
		}
		iVar1++;
	}
}

void func_208(int iParam0)
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
	int iVar41;
	int iVar42;
	var uVar43;
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
	var uVar60[10];
	int iVar71;
	char[] cVar72[8];
	
	iVar0 = unk_0xD41282265B0A744C(*iParam0, "endcon");
	iVar3 = unk_0x560A2E3DA92FA8F8(iVar0, "numpt");
	iVar4 = unk_0x560A2E3DA92FA8F8(iVar0, "ptint");
	iVar5 = unk_0x560A2E3DA92FA8F8(iVar0, "pptint");
	bVar7 = true;
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "mnumpt") != 2)
	{
		bVar7 = false;
		iVar6 = unk_0x560A2E3DA92FA8F8(iVar0, "mnumpt");
	}
	iVar8 = unk_0x560A2E3DA92FA8F8(iVar0, "tcp");
	iVar9 = unk_0x560A2E3DA92FA8F8(iVar0, "tcr");
	iVar10 = unk_0x560A2E3DA92FA8F8(iVar0, "abits");
	iVar11 = unk_0x560A2E3DA92FA8F8(iVar0, "sdobs");
	iVar12 = unk_0x560A2E3DA92FA8F8(iVar0, "edobs");
	iVar13 = unk_0x560A2E3DA92FA8F8(iVar0, "dogps");
	iVar14 = unk_0x560A2E3DA92FA8F8(iVar0, "teamv");
	iVar15 = unk_0x560A2E3DA92FA8F8(iVar0, "ireveh");
	iVar16 = unk_0x560A2E3DA92FA8F8(iVar0, "teamrvc");
	iVar17 = unk_0x560A2E3DA92FA8F8(iVar0, "teamrvp");
	iVar18 = unk_0x560A2E3DA92FA8F8(iVar0, "mcvbs");
	iVar19 = unk_0x560A2E3DA92FA8F8(iVar0, "mcobs");
	iVar20 = unk_0x560A2E3DA92FA8F8(iVar0, "mcpbs");
	iVar21 = unk_0x560A2E3DA92FA8F8(iVar0, "mcgbs");
	iVar22 = unk_0x560A2E3DA92FA8F8(iVar0, "rpgbs");
	iVar23 = unk_0x560A2E3DA92FA8F8(iVar0, "mcpbs1");
	iVar24 = unk_0x560A2E3DA92FA8F8(iVar0, "mcpbs2");
	iVar25 = unk_0x560A2E3DA92FA8F8(iVar0, "mcgbs1");
	iVar26 = unk_0x560A2E3DA92FA8F8(iVar0, "mcgbs2");
	iVar27 = unk_0x560A2E3DA92FA8F8(iVar0, "rpgbs1");
	iVar28 = unk_0x560A2E3DA92FA8F8(iVar0, "rpgbs2");
	iVar29 = unk_0x560A2E3DA92FA8F8(iVar0, "inpts");
	iVar30 = unk_0x560A2E3DA92FA8F8(iVar0, "ldsf1");
	iVar31 = unk_0x560A2E3DA92FA8F8(iVar0, "ldsf2");
	iVar32 = 1;
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "tehlh") == 7)
	{
		iVar33 = unk_0x560A2E3DA92FA8F8(iVar0, "tehlh");
		iVar32 = 1;
	}
	else
	{
		iVar32 = 0;
	}
	iVar34 = unk_0x560A2E3DA92FA8F8(iVar0, "tehrn");
	iVar35 = unk_0x560A2E3DA92FA8F8(iVar0, "spsy1");
	iVar36 = unk_0x560A2E3DA92FA8F8(iVar0, "spsy2");
	iVar37 = unk_0x560A2E3DA92FA8F8(iVar0, "tenms");
	iVar38 = unk_0x560A2E3DA92FA8F8(iVar0, "csttn");
	iVar39 = unk_0x560A2E3DA92FA8F8(iVar0, "cstrn");
	iVar40 = unk_0x560A2E3DA92FA8F8(iVar0, "nrl");
	iVar41 = unk_0x560A2E3DA92FA8F8(iVar0, "tstrt");
	iVar42 = unk_0x560A2E3DA92FA8F8(iVar0, "tstop");
	uVar43 = unk_0x560A2E3DA92FA8F8(iVar0, "sms");
	iVar44 = unk_0x560A2E3DA92FA8F8(iVar0, "tblpv1");
	iVar45 = unk_0x560A2E3DA92FA8F8(iVar0, "tblpv2");
	iVar46 = unk_0x560A2E3DA92FA8F8(iVar0, "tblpv3");
	iVar47 = unk_0x560A2E3DA92FA8F8(iVar0, "tblpv4");
	iVar48 = unk_0x560A2E3DA92FA8F8(iVar0, "thudv1");
	iVar49 = unk_0x560A2E3DA92FA8F8(iVar0, "thudv2");
	iVar50 = unk_0x560A2E3DA92FA8F8(iVar0, "thudv3");
	iVar51 = unk_0x560A2E3DA92FA8F8(iVar0, "thudv4");
	iVar52 = unk_0x560A2E3DA92FA8F8(iVar0, "thlb1");
	iVar53 = unk_0x560A2E3DA92FA8F8(iVar0, "thlb2");
	iVar54 = unk_0x560A2E3DA92FA8F8(iVar0, "thlb3");
	iVar55 = unk_0x560A2E3DA92FA8F8(iVar0, "thlb4");
	iVar56 = unk_0x560A2E3DA92FA8F8(iVar0, "rcst1q");
	iVar57 = unk_0x560A2E3DA92FA8F8(iVar0, "rcst2q");
	iVar58 = unk_0x560A2E3DA92FA8F8(iVar0, "rcst3q");
	iVar59 = unk_0x560A2E3DA92FA8F8(iVar0, "rcst4q");
	iVar1 = 0;
	while (iVar1 <= (unk_0x4BFD05F6E18EB439(uVar43) - 1))
	{
		uVar60[iVar1] = unk_0x29E82A6CEF2148AF(uVar43, iVar1);
		Global_1638223.f_37769[iVar1 /*38*/] = unk_0xE33C601C19270822(uVar60[iVar1], "team");
		Global_1638223.f_37769[iVar1 /*38*/].f_1 = unk_0xE33C601C19270822(uVar60[iVar1], "rule");
		Global_1638223.f_37769[iVar1 /*38*/].f_2 = unk_0xE33C601C19270822(uVar60[iVar1], "time");
		iVar71 = 0;
		while (iVar71 <= 1)
		{
			StringCopy(&cVar72, "txt", 8);
			StringIntConCat(&cVar72, iVar71, 8);
			if (unk_0x7ADD5F9CC9AA2359(uVar60[iVar1], &cVar72) == 4)
			{
				StringCopy(&(Global_1638223.f_37769[iVar1 /*38*/].f_4[iVar71 /*16*/]), unk_0xD5EE6B924304F24C(uVar60[iVar1], &cVar72), 64);
			}
			iVar71++;
		}
		Global_1638223.f_37769[iVar1 /*38*/].f_3 = unk_0xE33C601C19270822(uVar60[iVar1], "delay");
		Global_1638223.f_37769[iVar1 /*38*/].f_37 = unk_0xE33C601C19270822(uVar60[iVar1], "sndall");
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= (Global_1638223.f_32 - 1))
	{
		if (iVar1 < 4)
		{
			if (iVar14 != 0)
			{
				uVar2 = unk_0x27CDB7B0660BDAB1(iVar14, iVar1);
				Global_1638223.f_44910[iVar1] = uVar2;
			}
			else
			{
				Global_1638223.f_44910[iVar1] = 0;
			}
			if (iVar15 != 0)
			{
				Global_1638223.f_36933[iVar1] = unk_0x27CDB7B0660BDAB1(iVar15, iVar1);
			}
			else
			{
				Global_1638223.f_36933[iVar1] = -1;
			}
			if (iVar16 != 0)
			{
				Global_1638223.f_44958[iVar1] = unk_0x27CDB7B0660BDAB1(iVar16, iVar1);
			}
			else
			{
				Global_1638223.f_44958[iVar1] = -1;
			}
			if (iVar17 != 0)
			{
				Global_1638223.f_44953[iVar1] = unk_0x27CDB7B0660BDAB1(iVar17, iVar1);
			}
			else
			{
				Global_1638223.f_44953[iVar1] = 0;
			}
			if (iVar3 != 0)
			{
				Global_1638223.f_34[iVar1] = unk_0x27CDB7B0660BDAB1(iVar3, iVar1);
			}
			if (Global_1638223.f_34[iVar1] < 1)
			{
				Global_1638223.f_34[iVar1] = 1;
			}
			if (iVar4 != 0)
			{
				if ((func_68(Global_1638223.f_112772) && Global_262145.f_19165) && !Global_1751535)
				{
					Global_1638223.f_38612[iVar1] = 4;
				}
				else
				{
					Global_1638223.f_38612[iVar1] = unk_0x27CDB7B0660BDAB1(iVar4, iVar1);
				}
			}
			else
			{
				Global_1638223.f_38612[iVar1] = -1;
			}
			if (iVar5 != 0)
			{
				if ((func_68(Global_1638223.f_112772) && Global_262145.f_19165) && !Global_1751535)
				{
					Global_1638223.f_38617[iVar1] = 1;
				}
				else
				{
					Global_1638223.f_38617[iVar1] = unk_0x27CDB7B0660BDAB1(iVar5, iVar1);
				}
			}
			else
			{
				Global_1638223.f_38617[iVar1] = -1;
			}
			if (bVar7)
			{
				Global_1638223.f_39[iVar1] = 0;
			}
			else
			{
				if (iVar6 != 0)
				{
					Global_1638223.f_39[iVar1] = unk_0x27CDB7B0660BDAB1(iVar6, iVar1);
				}
				if (Global_1638223.f_39[iVar1] < 0)
				{
					Global_1638223.f_39[iVar1] = 0;
				}
			}
			if (iVar8 != 0)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_4 = { unk_0xD458CBD2DA2C775D(iVar8, iVar1) };
			}
			if (iVar9 != 0)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_7 = { unk_0xD458CBD2DA2C775D(iVar9, iVar1) };
			}
			if (iVar10 != 0)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_1055 = unk_0x27CDB7B0660BDAB1(iVar10, iVar1);
			}
			if (iVar11 != 0)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_1056 = unk_0x27CDB7B0660BDAB1(iVar11, iVar1);
			}
			if (iVar12 != 0)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_1057 = unk_0x27CDB7B0660BDAB1(iVar12, iVar1);
			}
			if (iVar13 != 0)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_1058 = unk_0x27CDB7B0660BDAB1(iVar13, iVar1);
			}
			if (unk_0x6E1D01265BDA6BEA(iVar30, iVar1) == 2 && iVar30 != 0)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_585 = unk_0x27CDB7B0660BDAB1(iVar30, iVar1);
			}
			else
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_585 = 0;
			}
			if (unk_0x6E1D01265BDA6BEA(iVar31, iVar1) == 2 && iVar31 != 0)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_586 = unk_0x27CDB7B0660BDAB1(iVar31, iVar1);
			}
			else
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_586 = 0;
			}
			if (iVar18 != 0)
			{
				Global_1638223.f_37759[iVar1] = unk_0x27CDB7B0660BDAB1(iVar18, iVar1);
			}
			if (unk_0x6E1D01265BDA6BEA(iVar19, iVar1) == 2)
			{
				Global_1638223.f_37764[iVar1] = unk_0x27CDB7B0660BDAB1(iVar19, iVar1);
			}
			else
			{
				Global_1638223.f_37764[iVar1] = 0;
			}
			if (iVar20 != 0)
			{
				Global_1638223.f_37715[iVar1] = unk_0x27CDB7B0660BDAB1(iVar20, iVar1);
			}
			if (iVar23 != 0)
			{
				Global_1638223.f_37746[iVar1 /*3*/][0] = unk_0x27CDB7B0660BDAB1(iVar23, iVar1);
			}
			if (iVar24 != 0)
			{
				Global_1638223.f_37746[iVar1 /*3*/][1] = unk_0x27CDB7B0660BDAB1(iVar24, iVar1);
			}
			if (Global_1638223.f_37715[iVar1] != 0 && Global_1638223.f_37746[iVar1 /*3*/][0] == 0)
			{
				Global_1638223.f_37746[iVar1 /*3*/][0] = Global_1638223.f_37715[iVar1];
			}
			if (iVar21 != 0)
			{
				Global_1638223.f_37710[iVar1] = unk_0x27CDB7B0660BDAB1(iVar21, iVar1);
			}
			if (iVar25 != 0)
			{
				Global_1638223.f_37733[iVar1 /*3*/][0] = unk_0x27CDB7B0660BDAB1(iVar25, iVar1);
			}
			if (iVar26 != 0)
			{
				Global_1638223.f_37733[iVar1 /*3*/][1] = unk_0x27CDB7B0660BDAB1(iVar26, iVar1);
			}
			if (Global_1638223.f_37710[iVar1] != 0 && Global_1638223.f_37733[iVar1 /*3*/][0] == 0)
			{
				Global_1638223.f_37733[iVar1 /*3*/][0] = Global_1638223.f_37710[iVar1];
			}
			if (iVar22 != 0)
			{
				Global_1638223.f_37705[iVar1] = unk_0x27CDB7B0660BDAB1(iVar22, iVar1);
			}
			if (iVar27 != 0)
			{
				Global_1638223.f_37720[iVar1 /*3*/][0] = unk_0x27CDB7B0660BDAB1(iVar27, iVar1);
			}
			if (iVar28 != 0)
			{
				Global_1638223.f_37720[iVar1 /*3*/][1] = unk_0x27CDB7B0660BDAB1(iVar28, iVar1);
			}
			if (Global_1638223.f_37705[iVar1] != 0 && Global_1638223.f_37720[iVar1 /*3*/][0] == 0)
			{
				Global_1638223.f_37720[iVar1 /*3*/][0] = Global_1638223.f_37705[iVar1];
			}
			if (iVar29 != 0)
			{
				Global_1638223.f_36974[iVar1] = unk_0x27CDB7B0660BDAB1(iVar29, iVar1);
			}
			if (iVar32 && iVar33 != 0)
			{
				Global_1638223.f_37006[iVar1] = unk_0x27CDB7B0660BDAB1(iVar33, iVar1);
			}
			else
			{
				Global_1638223.f_37006[iVar1] = 3;
			}
			if (unk_0x6E1D01265BDA6BEA(iVar34, iVar1) == 2)
			{
				Global_1638223.f_37011[iVar1] = unk_0x27CDB7B0660BDAB1(iVar34, iVar1);
			}
			if (iVar35 != 0)
			{
				StringCopy(&(Global_1638223.f_94[iVar1 /*9207*/].f_8217[0 /*16*/]), unk_0x71104AC03D1921C0(iVar35, iVar1), 64);
			}
			if (iVar36 != 0)
			{
				StringCopy(&(Global_1638223.f_94[iVar1 /*9207*/].f_8217[1 /*16*/]), unk_0x71104AC03D1921C0(iVar36, iVar1), 64);
			}
			if (iVar37 != 0)
			{
				Global_1638223.f_36979[iVar1] = unk_0x27CDB7B0660BDAB1(iVar37, iVar1);
			}
			if (iVar38 != 0)
			{
				StringCopy(&(Global_1638223.f_36984[iVar1 /*4*/]), unk_0x71104AC03D1921C0(iVar38, iVar1), 16);
			}
			if (iVar39 != 0)
			{
				Global_1638223.f_37001[iVar1] = unk_0x27CDB7B0660BDAB1(iVar39, iVar1);
			}
			if (unk_0x6E1D01265BDA6BEA(iVar41, iVar1) == 2 && iVar41 != 0)
			{
				Global_1638223.f_97935[iVar1] = unk_0x27CDB7B0660BDAB1(iVar41, iVar1);
			}
			if (unk_0x6E1D01265BDA6BEA(iVar42, iVar1) == 2 && iVar42 != 0)
			{
				Global_1638223.f_97940[iVar1] = unk_0x27CDB7B0660BDAB1(iVar42, iVar1);
			}
			if (iVar40 != 0)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_59 = unk_0x27CDB7B0660BDAB1(iVar40, iVar1);
			}
			if (unk_0x6E1D01265BDA6BEA(iVar44, iVar1) == 2)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_4922 = unk_0x27CDB7B0660BDAB1(iVar44, iVar1);
			}
			else
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_4922 = 0;
			}
			if (unk_0x6E1D01265BDA6BEA(iVar45, iVar1) == 2)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_4923 = unk_0x27CDB7B0660BDAB1(iVar45, iVar1);
			}
			else
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_4923 = 0;
			}
			if (unk_0x6E1D01265BDA6BEA(iVar46, iVar1) == 2)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_4924 = unk_0x27CDB7B0660BDAB1(iVar46, iVar1);
			}
			else
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_4924 = 0;
			}
			if (unk_0x6E1D01265BDA6BEA(iVar47, iVar1) == 2)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_4925 = unk_0x27CDB7B0660BDAB1(iVar47, iVar1);
			}
			else
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_4925 = 0;
			}
			if (unk_0x6E1D01265BDA6BEA(iVar48, iVar1) == 2)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_4926 = unk_0x27CDB7B0660BDAB1(iVar48, iVar1);
			}
			else
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_4926 = 0;
			}
			if (unk_0x6E1D01265BDA6BEA(iVar49, iVar1) == 2)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_4927 = unk_0x27CDB7B0660BDAB1(iVar49, iVar1);
			}
			else
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_4927 = 0;
			}
			if (unk_0x6E1D01265BDA6BEA(iVar50, iVar1) == 2)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_4928 = unk_0x27CDB7B0660BDAB1(iVar50, iVar1);
			}
			else
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_4928 = 0;
			}
			if (unk_0x6E1D01265BDA6BEA(iVar51, iVar1) == 2)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_4929 = unk_0x27CDB7B0660BDAB1(iVar51, iVar1);
			}
			else
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_4929 = 0;
			}
			if (unk_0x6E1D01265BDA6BEA(iVar52, iVar1) == 2)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_4930 = unk_0x27CDB7B0660BDAB1(iVar52, iVar1);
			}
			else
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_4930 = 0;
			}
			if (unk_0x6E1D01265BDA6BEA(iVar53, iVar1) == 2)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_4931 = unk_0x27CDB7B0660BDAB1(iVar53, iVar1);
			}
			else
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_4931 = 0;
			}
			if (unk_0x6E1D01265BDA6BEA(iVar54, iVar1) == 2)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_4932 = unk_0x27CDB7B0660BDAB1(iVar54, iVar1);
			}
			else
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_4932 = 0;
			}
			if (unk_0x6E1D01265BDA6BEA(iVar55, iVar1) == 2)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_4933 = unk_0x27CDB7B0660BDAB1(iVar55, iVar1);
			}
			else
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_4933 = 0;
			}
			if (unk_0x6E1D01265BDA6BEA(iVar56, iVar1) == 2)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_4934 = unk_0x27CDB7B0660BDAB1(iVar56, iVar1);
			}
			else
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_4934 = 0;
			}
			if (unk_0x6E1D01265BDA6BEA(iVar57, iVar1) == 2)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_4935 = unk_0x27CDB7B0660BDAB1(iVar57, iVar1);
			}
			else
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_4935 = 0;
			}
			if (unk_0x6E1D01265BDA6BEA(iVar58, iVar1) == 2)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_4936 = unk_0x27CDB7B0660BDAB1(iVar58, iVar1);
			}
			else
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_4936 = 0;
			}
			if (unk_0x6E1D01265BDA6BEA(iVar59, iVar1) == 2)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_4937 = unk_0x27CDB7B0660BDAB1(iVar59, iVar1);
			}
			else
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_4937 = 0;
			}
		}
		iVar1++;
	}
}

void func_209(int iParam0)
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
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	
	iVar0 = unk_0xD41282265B0A744C(*iParam0, "endcon");
	iVar2 = unk_0x560A2E3DA92FA8F8(iVar0, "stpos");
	iVar3 = unk_0x560A2E3DA92FA8F8(iVar0, "delr");
	iVar4 = unk_0x560A2E3DA92FA8F8(iVar0, "epos");
	iVar5 = unk_0x560A2E3DA92FA8F8(iVar0, "endr");
	iVar6 = unk_0x560A2E3DA92FA8F8(iVar0, "vareapos");
	iVar7 = unk_0x560A2E3DA92FA8F8(iVar0, "arear");
	iVar8 = unk_0x560A2E3DA92FA8F8(iVar0, "time");
	iVar9 = unk_0x560A2E3DA92FA8F8(iVar0, "plkr");
	iVar10 = unk_0x560A2E3DA92FA8F8(iVar0, "pekr");
	iVar11 = unk_0x560A2E3DA92FA8F8(iVar0, "vhkr");
	iVar12 = unk_0x560A2E3DA92FA8F8(iVar0, "obkr");
	iVar13 = unk_0x560A2E3DA92FA8F8(iVar0, "dr");
	iVar14 = unk_0x560A2E3DA92FA8F8(iVar0, "pedr");
	iVar15 = unk_0x560A2E3DA92FA8F8(iVar0, "vedr");
	iVar16 = unk_0x560A2E3DA92FA8F8(iVar0, "obdr");
	iVar17 = unk_0x560A2E3DA92FA8F8(iVar0, "lwmbs");
	iVar18 = unk_0x560A2E3DA92FA8F8(iVar0, "flmbs");
	iVar19 = unk_0x560A2E3DA92FA8F8(iVar0, "vdoibs");
	iVar20 = unk_0x560A2E3DA92FA8F8(iVar0, "vdohu");
	iVar21 = unk_0x560A2E3DA92FA8F8(iVar0, "tmbts");
	iVar22 = unk_0x560A2E3DA92FA8F8(iVar0, "tmbt2");
	iVar23 = unk_0x560A2E3DA92FA8F8(iVar0, "tmbt3");
	iVar24 = unk_0x560A2E3DA92FA8F8(iVar0, "swmbs");
	iVar25 = unk_0x560A2E3DA92FA8F8(iVar0, "gbmbs");
	iVar26 = unk_0x560A2E3DA92FA8F8(iVar0, "pcbd");
	iVar27 = unk_0x560A2E3DA92FA8F8(iVar0, "lwbs");
	iVar28 = unk_0x560A2E3DA92FA8F8(iVar0, "wodia");
	iVar29 = unk_0x560A2E3DA92FA8F8(iVar0, "repcr");
	iVar30 = unk_0x560A2E3DA92FA8F8(iVar0, "woabs");
	iVar31 = unk_0x560A2E3DA92FA8F8(iVar0, "fwoabs");
	iVar32 = unk_0x560A2E3DA92FA8F8(iVar0, "fail");
	iVar33 = unk_0x560A2E3DA92FA8F8(iVar0, "vehrsp");
	iVar34 = unk_0x560A2E3DA92FA8F8(iVar0, "spit");
	iVar35 = unk_0x560A2E3DA92FA8F8(iVar0, "pglr");
	iVar36 = unk_0x560A2E3DA92FA8F8(iVar0, "nora");
	iVar37 = unk_0x560A2E3DA92FA8F8(iVar0, "mtlr");
	iVar38 = unk_0x560A2E3DA92FA8F8(iVar0, "mslr");
	iVar39 = unk_0x560A2E3DA92FA8F8(iVar0, "mlpl");
	iVar40 = unk_0x560A2E3DA92FA8F8(iVar0, "mlpd");
	iVar41 = unk_0x560A2E3DA92FA8F8(iVar0, "mlpm");
	iVar42 = unk_0x560A2E3DA92FA8F8(iVar0, "plyl");
	iVar43 = unk_0x560A2E3DA92FA8F8(iVar0, "shd");
	iVar44 = unk_0x560A2E3DA92FA8F8(iVar0, "spar");
	iVar45 = unk_0x560A2E3DA92FA8F8(iVar0, "2spar");
	iVar46 = unk_0x560A2E3DA92FA8F8(iVar0, "boud");
	iVar47 = unk_0x560A2E3DA92FA8F8(iVar0, "bla");
	iVar48 = unk_0x560A2E3DA92FA8F8(iVar0, "wla");
	iVar49 = unk_0x560A2E3DA92FA8F8(iVar0, "patm");
	iVar50 = unk_0x560A2E3DA92FA8F8(iVar0, "bnd2");
	iVar51 = unk_0x560A2E3DA92FA8F8(iVar0, "bla2");
	iVar52 = unk_0x560A2E3DA92FA8F8(iVar0, "wla2");
	iVar53 = unk_0x560A2E3DA92FA8F8(iVar0, "pat2");
	iVar54 = unk_0x560A2E3DA92FA8F8(iVar0, "inv");
	iVar55 = unk_0x560A2E3DA92FA8F8(iVar0, "inv2");
	iVar56 = unk_0x560A2E3DA92FA8F8(iVar0, "inv3");
	iVar57 = unk_0x560A2E3DA92FA8F8(iVar0, "invsw");
	iVar58 = unk_0x560A2E3DA92FA8F8(iVar0, "invtm");
	iVar59 = unk_0x560A2E3DA92FA8F8(iVar0, "invrl");
	iVar60 = unk_0x560A2E3DA92FA8F8(iVar0, "inv2tm");
	iVar61 = unk_0x560A2E3DA92FA8F8(iVar0, "inv2rl");
	iVar62 = unk_0x560A2E3DA92FA8F8(iVar0, "sinv");
	iVar63 = unk_0x560A2E3DA92FA8F8(iVar0, "sinv2");
	iVar64 = unk_0x560A2E3DA92FA8F8(iVar0, "sinv3");
	iVar65 = unk_0x560A2E3DA92FA8F8(iVar0, "minv");
	iVar66 = unk_0x560A2E3DA92FA8F8(iVar0, "mmsw");
	iVar67 = unk_0x560A2E3DA92FA8F8(iVar0, "mmsw2");
	iVar68 = unk_0x560A2E3DA92FA8F8(iVar0, "minv2");
	iVar69 = unk_0x560A2E3DA92FA8F8(iVar0, "minv3");
	iVar70 = unk_0x560A2E3DA92FA8F8(iVar0, "ppk");
	iVar71 = unk_0x560A2E3DA92FA8F8(iVar0, "mts");
	iVar72 = unk_0x560A2E3DA92FA8F8(iVar0, "spwia");
	iVar73 = unk_0x560A2E3DA92FA8F8(iVar0, "2spwia");
	iVar74 = unk_0x560A2E3DA92FA8F8(iVar0, "pcl");
	iVar75 = unk_0x560A2E3DA92FA8F8(iVar0, "ocl");
	iVar76 = unk_0x560A2E3DA92FA8F8(iVar0, "arrt");
	iVar1 = 0;
	while (iVar1 <= (Global_1638223.f_32 - 1))
	{
		if (iVar1 < 4)
		{
			if (iVar2 != 0)
			{
				Global_1638223.f_94[iVar1 /*9207*/] = { unk_0xD458CBD2DA2C775D(iVar2, iVar1) };
			}
			if (iVar17 != 0)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_3706 = unk_0x27CDB7B0660BDAB1(iVar17, iVar1);
			}
			if (iVar18 != 0)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_3745 = unk_0x27CDB7B0660BDAB1(iVar18, iVar1);
			}
			if (iVar19 != 0)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_4406 = unk_0x27CDB7B0660BDAB1(iVar19, iVar1);
			}
			if (unk_0x6E1D01265BDA6BEA(iVar20, iVar1) == 2)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_4407 = unk_0x27CDB7B0660BDAB1(iVar20, iVar1);
			}
			else
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_4407 = 0;
			}
			if (iVar21 != 0)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_4732 = unk_0x27CDB7B0660BDAB1(iVar21, iVar1);
			}
			if (iVar22 != 0)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_4733 = unk_0x27CDB7B0660BDAB1(iVar22, iVar1);
			}
			if (iVar23 != 0)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_4734 = unk_0x27CDB7B0660BDAB1(iVar23, iVar1);
			}
			if (iVar24 != 0)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_3708 = unk_0x27CDB7B0660BDAB1(iVar24, iVar1);
			}
			if (iVar25 != 0)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_3819 = unk_0x27CDB7B0660BDAB1(iVar25, iVar1);
			}
			if (iVar26 != 0)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_4938 = unk_0x27CDB7B0660BDAB1(iVar26, iVar1);
			}
			if (iVar27 != 0)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_3705 = unk_0x27CDB7B0660BDAB1(iVar27, iVar1);
			}
			if (iVar30 != 0)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_3707 = unk_0x27CDB7B0660BDAB1(iVar30, iVar1);
			}
			if (iVar28 != 0)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_3339 = unk_0x27CDB7B0660BDAB1(iVar28, iVar1);
			}
			if (iVar29 != 0)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_3340 = unk_0x27CDB7B0660BDAB1(iVar29, iVar1);
			}
			if (iVar31 != 0)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_3746 = unk_0x27CDB7B0660BDAB1(iVar31, iVar1);
			}
			if (iVar32 != 0)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_4939 = unk_0x27CDB7B0660BDAB1(iVar32, iVar1);
			}
			if (iVar33 != 0)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_4940 = unk_0x27CDB7B0660BDAB1(iVar33, iVar1);
			}
			if (iVar34 != 0)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_8801 = unk_0x27CDB7B0660BDAB1(iVar34, iVar1);
			}
			if (iVar35 != 0)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_8802 = unk_0x27CDB7B0660BDAB1(iVar35, iVar1);
			}
			if (iVar36 != 0)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_8803 = unk_0x27CDB7B0660BDAB1(iVar36, iVar1);
			}
			if (iVar37 != 0)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_32 = unk_0x27CDB7B0660BDAB1(iVar37, iVar1);
			}
			if (iVar38 != 0)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_33 = unk_0x27CDB7B0660BDAB1(iVar38, iVar1);
			}
			if (unk_0x6E1D01265BDA6BEA(iVar39, iVar1) == 2)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_34 = unk_0x27CDB7B0660BDAB1(iVar39, iVar1);
			}
			else
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_34 = 0;
			}
			if (unk_0x6E1D01265BDA6BEA(iVar40, iVar1) == 2)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_35 = unk_0x27CDB7B0660BDAB1(iVar40, iVar1);
			}
			else
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_35 = 0;
			}
			if (unk_0x6E1D01265BDA6BEA(iVar41, iVar1) == 2)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_36 = unk_0x27CDB7B0660BDAB1(iVar41, iVar1);
			}
			else
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_36 = 0;
			}
			if (iVar42 != 0)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_38 = unk_0x27CDB7B0660BDAB1(iVar42, iVar1);
			}
			if (iVar44 != 0)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_3334 = unk_0x27CDB7B0660BDAB1(iVar44, iVar1);
			}
			if (iVar45 != 0)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_3336 = unk_0x27CDB7B0660BDAB1(iVar45, iVar1);
			}
			if (iVar46 != 0)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_3332 = unk_0x27CDB7B0660BDAB1(iVar46, iVar1);
			}
			if (iVar47 != 0)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_3331 = unk_0x27CDB7B0660BDAB1(iVar47, iVar1);
			}
			if (unk_0x6E1D01265BDA6BEA(iVar49, iVar1) == 2 && iVar49 != 0)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_3333 = unk_0x27CDB7B0660BDAB1(iVar49, iVar1);
			}
			else
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_3333 = 60000;
			}
			if (unk_0x6E1D01265BDA6BEA(iVar50, iVar1) == 2)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_3558 = unk_0x27CDB7B0660BDAB1(iVar50, iVar1);
			}
			else
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_3558 = 0;
			}
			if (unk_0x6E1D01265BDA6BEA(iVar51, iVar1) == 2)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_3557 = unk_0x27CDB7B0660BDAB1(iVar51, iVar1);
			}
			else
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_3557 = 0;
			}
			if (unk_0x6E1D01265BDA6BEA(iVar53, iVar1) == 2)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_3559 = unk_0x27CDB7B0660BDAB1(iVar53, iVar1);
			}
			else
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_3559 = 60000;
			}
			if (unk_0x6E1D01265BDA6BEA(iVar52, iVar1) == 2)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_3560 = unk_0x27CDB7B0660BDAB1(iVar52, iVar1);
			}
			else
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_3560 = 0;
			}
			if (iVar54 != 0)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_61 = unk_0x27CDB7B0660BDAB1(iVar54, iVar1);
			}
			if (iVar55 != 0)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_62 = unk_0x27CDB7B0660BDAB1(iVar55, iVar1);
			}
			if (iVar56 != 0)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_63 = unk_0x27CDB7B0660BDAB1(iVar56, iVar1);
			}
			if (unk_0x6E1D01265BDA6BEA(iVar57, iVar1) == 2)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_206 = unk_0x27CDB7B0660BDAB1(iVar57, iVar1);
			}
			else
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_206 = -1;
			}
			if (unk_0x6E1D01265BDA6BEA(iVar66, iVar1) == 2)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_207 = unk_0x27CDB7B0660BDAB1(iVar66, iVar1);
			}
			else
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_207 = -1;
			}
			if (unk_0x6E1D01265BDA6BEA(iVar67, iVar1) == 2)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_208 = unk_0x27CDB7B0660BDAB1(iVar67, iVar1);
			}
			else
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_208 = -1;
			}
			if (unk_0x6E1D01265BDA6BEA(iVar58, iVar1) == 2 && unk_0x6E1D01265BDA6BEA(iVar59, iVar1) == 2)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_354 = unk_0x27CDB7B0660BDAB1(iVar58, iVar1);
				Global_1638223.f_94[iVar1 /*9207*/].f_355 = unk_0x27CDB7B0660BDAB1(iVar59, iVar1);
			}
			else
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_354 = -1;
				Global_1638223.f_94[iVar1 /*9207*/].f_355 = -1;
			}
			if (iVar62 != 0)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_209 = unk_0x27CDB7B0660BDAB1(iVar62, iVar1);
			}
			if (iVar63 != 0)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_210 = unk_0x27CDB7B0660BDAB1(iVar63, iVar1);
			}
			if (iVar64 != 0)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_211 = unk_0x27CDB7B0660BDAB1(iVar64, iVar1);
			}
			if (unk_0x6E1D01265BDA6BEA(iVar60, iVar1) == 2 && unk_0x6E1D01265BDA6BEA(iVar61, iVar1) == 2)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_501 = unk_0x27CDB7B0660BDAB1(iVar60, iVar1);
				Global_1638223.f_94[iVar1 /*9207*/].f_502 = unk_0x27CDB7B0660BDAB1(iVar61, iVar1);
			}
			else
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_501 = -1;
				Global_1638223.f_94[iVar1 /*9207*/].f_502 = -1;
			}
			if (iVar65 != 0)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_356 = unk_0x27CDB7B0660BDAB1(iVar65, iVar1);
			}
			if (iVar68 != 0)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_357 = unk_0x27CDB7B0660BDAB1(iVar68, iVar1);
			}
			if (iVar69 != 0)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_358 = unk_0x27CDB7B0660BDAB1(iVar69, iVar1);
			}
			if (iVar70 != 0)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_57 = unk_0x27CDB7B0660BDAB1(iVar70, iVar1);
			}
			if (iVar71 != 0)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_58 = unk_0x27CDB7B0660BDAB1(iVar71, iVar1);
			}
			if (iVar72 != 0)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_3335 = unk_0x27CDB7B0660BDAB1(iVar72, iVar1);
			}
			if (iVar73 != 0)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_3337 = unk_0x27CDB7B0660BDAB1(iVar73, iVar1);
			}
			if (iVar48 != 0)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_3338 = unk_0x27CDB7B0660BDAB1(iVar48, iVar1);
			}
			if (iVar43 != 0)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_3 = unk_0xDFB5A5508080E518(iVar43, iVar1);
			}
			if (iVar74 != 0)
			{
				Global_1638223.f_36923[iVar1] = unk_0x27CDB7B0660BDAB1(iVar74, iVar1);
			}
			if (iVar75 != 0)
			{
				Global_1638223.f_36928[iVar1] = unk_0x27CDB7B0660BDAB1(iVar75, iVar1);
			}
			if (iVar76 != 0)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_37 = unk_0x27CDB7B0660BDAB1(iVar76, iVar1);
			}
			if (iVar3 != 0)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_14 = unk_0x27CDB7B0660BDAB1(iVar3, iVar1);
			}
			if (iVar4 != 0)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_15 = { unk_0xD458CBD2DA2C775D(iVar4, iVar1) };
			}
			if (iVar5 != 0)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_18 = unk_0x27CDB7B0660BDAB1(iVar5, iVar1);
			}
			if (iVar6 != 0)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_19 = { unk_0xD458CBD2DA2C775D(iVar6, iVar1) };
			}
			if (iVar7 != 0)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_22 = unk_0x27CDB7B0660BDAB1(iVar7, iVar1);
			}
			if (iVar8 != 0)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_23 = unk_0x27CDB7B0660BDAB1(iVar8, iVar1);
			}
			if (iVar9 != 0)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_24 = unk_0x27CDB7B0660BDAB1(iVar9, iVar1);
			}
			if (iVar10 != 0)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_25 = unk_0x27CDB7B0660BDAB1(iVar10, iVar1);
			}
			if (iVar11 != 0)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_26 = unk_0x27CDB7B0660BDAB1(iVar11, iVar1);
			}
			if (iVar12 != 0)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_27 = unk_0x27CDB7B0660BDAB1(iVar12, iVar1);
			}
			if (iVar13 != 0)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_28 = unk_0x27CDB7B0660BDAB1(iVar13, iVar1);
			}
			if (iVar14 != 0)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_29 = unk_0x27CDB7B0660BDAB1(iVar14, iVar1);
			}
			if (iVar15 != 0)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_30 = unk_0x27CDB7B0660BDAB1(iVar15, iVar1);
			}
			if (iVar16 != 0)
			{
				Global_1638223.f_94[iVar1 /*9207*/].f_31 = unk_0x27CDB7B0660BDAB1(iVar16, iVar1);
			}
		}
		iVar1++;
	}
}

void func_210(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0xD41282265B0A744C(iParam0, "rule");
	Global_1638223.f_51 = unk_0xE33C601C19270822(iVar0, "time");
	Global_1638223.f_53 = unk_0xE33C601C19270822(iVar0, "score");
	Global_1638223.f_64 = unk_0xE33C601C19270822(iVar0, "prule");
	Global_1638223.f_57263 = unk_0xE33C601C19270822(iVar0, "ptyp");
	Global_1638223.f_54 = unk_0xE33C601C19270822(iVar0, "blip");
	Global_1638223.f_56 = unk_0xE33C601C19270822(iVar0, "tag");
	Global_1638223.f_57 = unk_0xE33C601C19270822(iVar0, "voice");
	Global_1638223.f_58 = unk_0xE33C601C19270822(iVar0, "radio");
	Global_1638223.f_59 = unk_0xE33C601C19270822(iVar0, "aim");
	Global_1638223.f_44969 = unk_0xE33C601C19270822(iVar0, "pol");
	Global_1638223.f_47 = unk_0xE33C601C19270822(iVar0, "liv");
	Global_1638223.f_44250 = unk_0xE33C601C19270822(iVar0, "traf");
	Global_1638223.f_94145 = unk_0xE33C601C19270822(iVar0, "tod");
	Global_1638223.f_94130 = unk_0xE33C601C19270822(iVar0, "weth");
	Global_1638223.f_94147 = unk_0xE33C601C19270822(iVar0, "apeds");
	Global_1638223.f_94146 = unk_0xE33C601C19270822(iVar0, "vehd");
	Global_1638223.f_62 = unk_0xE33C601C19270822(iVar0, "vdm");
	Global_1638223.f_60 = unk_0xE33C601C19270822(iVar0, "tdm");
	Global_1638223.f_36923[0] = unk_0xE33C601C19270822(iVar0, "pcr");
	Global_1638223.f_36928[0] = unk_0xE33C601C19270822(iVar0, "ocr");
}

void func_211(int iParam0, int iParam1, bool bParam2)
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
	
	iVar0 = unk_0xD41282265B0A744C(iParam0, "gen");
	Global_1638223 = unk_0xE33C601C19270822(iVar0, "type");
	Global_1638223.f_9 = unk_0x07BD029EFF536ADD(iVar0, "ngjob");
	unk_0xAA4F14DA15DB0B51(Global_1638223.f_7, 0);
	bVar1 = unk_0x07BD029EFF536ADD(iVar0, "photo");
	if (bVar1)
	{
		unk_0xF6082E2ADA1C795B(&(Global_1638223.f_7), 0);
	}
	else
	{
		unk_0x507FE690B1271947(&(Global_1638223.f_7), 0);
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "ivm") == 2)
	{
		Global_1638223.f_44909 = unk_0xE33C601C19270822(iVar0, "ivm");
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "fixcam") == 2)
	{
		Global_1638223.f_97948 = unk_0xE33C601C19270822(iVar0, "fixcam");
	}
	else
	{
		Global_1638223.f_97948 = 0;
	}
	Global_1638223.f_4 = unk_0xE33C601C19270822(iVar0, "optbs");
	Global_1638223.f_77 = { unk_0xAB08124000EEAE30(iVar0, "camo") };
	Global_1638223.f_80 = { unk_0xAB08124000EEAE30(iVar0, "camro") };
	Global_1638223.f_71 = { unk_0xAB08124000EEAE30(iVar0, "cam") };
	Global_1638223.f_90 = unk_0x22B34D863B5EB347(iVar0, "camh");
	Global_1638223.f_83 = { unk_0xAB08124000EEAE30(iVar0, "camf") };
	Global_1638223.f_86 = { unk_0xAB08124000EEAE30(iVar0, "camfr") };
	Global_1638223.f_89 = unk_0x22B34D863B5EB347(iVar0, "camfv");
	Global_1638223.f_93507 = unk_0x22B34D863B5EB347(iVar0, "dmbds");
	Global_1638223.f_65 = { unk_0xAB08124000EEAE30(iVar0, "phpo") };
	StringCopy(&(Global_1638223.f_93690[0 /*16*/]), unk_0xD5EE6B924304F24C(iVar0, "szTag"), 64);
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "chksfx") == 1)
	{
		Global_1638223.f_112816 = 1;
	}
	else
	{
		Global_1638223.f_112816 = 0;
	}
	StringCopy(&cVar4, "nrcid", 16);
	if (bParam2)
	{
		iVar2 = 0;
		while (iVar2 <= 1)
		{
			StringCopy(&cVar4, "nrcid", 16);
			StringIntConCat(&cVar4, iVar2, 16);
			StringCopy(&(Global_1638223.f_93825[iVar2 /*6*/]), unk_0xD5EE6B924304F24C(iVar0, &cVar4), 24);
			iVar2++;
		}
	}
	if (func_124())
	{
		Global_1638223.f_2 = unk_0xE33C601C19270822(iVar0, "subtype");
		Global_1638223.f_112772 = unk_0xE33C601C19270822(iVar0, "adverm");
		Global_1638223.f_97945 = unk_0xE33C601C19270822(iVar0, "testcomplete");
		if (((Global_1638223.f_2 == 6 || Global_1638223.f_2 == 5) || Global_1638223.f_2 == 4) || Global_1638223.f_2 == 9)
		{
			if (unk_0x7ADD5F9CC9AA2359(iVar0, "teamBal") == 2)
			{
				Global_1638223.f_97947 = unk_0xE33C601C19270822(iVar0, "numRounds");
			}
			else
			{
				Global_1638223.f_97947 = 1;
			}
			if (Global_1638223.f_97947 < 1)
			{
				Global_1638223.f_97947 = 1;
			}
		}
		if (unk_0x7ADD5F9CC9AA2359(iVar0, "teamBal") == 2)
		{
			Global_1638223.f_97949 = unk_0xE33C601C19270822(iVar0, "teamBal");
		}
		else
		{
			Global_1638223.f_97949 = 5;
		}
	}
	Global_1638223.f_97946 = unk_0xE33C601C19270822(iVar0, "testcomplete");
	Global_1638223.f_52 = unk_0xE33C601C19270822(iVar0, "endtype");
	Global_1638223.f_11 = unk_0xE33C601C19270822(iVar0, "menubs");
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "ovrpc") == 2)
	{
		Global_1638223.f_65265 = unk_0xE33C601C19270822(iVar0, "ovrpc");
	}
	else
	{
		Global_1638223.f_65265 = -1;
	}
	Global_1638223.f_12 = unk_0xE33C601C19270822(iVar0, "menubs2");
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "menubs3") == 2)
	{
		Global_1638223.f_13 = unk_0xE33C601C19270822(iVar0, "menubs3");
	}
	else
	{
		Global_1638223.f_13 = 0;
	}
	Global_1638223.f_14 = unk_0xE33C601C19270822(iVar0, "menubs4");
	Global_1638223.f_15 = unk_0xE33C601C19270822(iVar0, "menubs5");
	Global_1638223.f_16 = unk_0xE33C601C19270822(iVar0, "menubs6");
	Global_1638223.f_17 = unk_0xE33C601C19270822(iVar0, "menubs7");
	Global_1638223.f_18 = unk_0xE33C601C19270822(iVar0, "menubs8");
	Global_1638223.f_19 = unk_0xE33C601C19270822(iVar0, "menubs9");
	Global_1638223.f_20 = unk_0xE33C601C19270822(iVar0, "menubs10");
	Global_1638223.f_21 = unk_0xE33C601C19270822(iVar0, "menubs11");
	Global_1638223.f_22 = unk_0xE33C601C19270822(iVar0, "menubs12");
	Global_1638223.f_23 = unk_0xE33C601C19270822(iVar0, "menubs13");
	Global_1638223.f_24 = unk_0xE33C601C19270822(iVar0, "menubs14");
	Global_1638223.f_25 = unk_0xE33C601C19270822(iVar0, "menubs15");
	if (unk_0xAA4F14DA15DB0B51(Global_1638223.f_22, 13))
	{
		if (unk_0x7ADD5F9CC9AA2359(iVar0, "trstim") == 2)
		{
			Global_1638223.f_112852 = unk_0xE33C601C19270822(iVar0, "trstim");
		}
		else
		{
			Global_1638223.f_112852 = 10;
		}
		if (unk_0x7ADD5F9CC9AA2359(iVar0, "trerad") == 3)
		{
			Global_1638223.f_112853 = unk_0x22B34D863B5EB347(iVar0, "trerad");
		}
		else
		{
			Global_1638223.f_112853 = 5f;
		}
		if (unk_0x7ADD5F9CC9AA2359(iVar0, "trsstim") == 2)
		{
			Global_1638223.f_112854 = unk_0xE33C601C19270822(iVar0, "trsstim");
		}
		else
		{
			Global_1638223.f_112854 = 10;
		}
	}
	if (unk_0xAA4F14DA15DB0B51(Global_1638223.f_15, 31))
	{
	}
	Global_1638223.f_16 = unk_0xE33C601C19270822(iVar0, "menubs6");
	if (unk_0xAA4F14DA15DB0B51(Global_1638223.f_16, 16))
	{
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "hptfb") == 2)
	{
		Global_1638223.f_93 = unk_0xE33C601C19270822(iVar0, "hptfb");
	}
	else
	{
		Global_1638223.f_93 = 0;
	}
	Global_1638223.f_44968 = unk_0xE33C601C19270822(iVar0, "teamvbs");
	Global_1638223.f_26 = unk_0xE33C601C19270822(iVar0, "cncmbs");
	Global_1638223.f_109717 = unk_0xE33C601C19270822(iVar0, "todhr");
	Global_1638223.f_109718 = unk_0xE33C601C19270822(iVar0, "todmn");
	Global_1638223.f_10 = unk_0xE33C601C19270822(iVar0, "cmpts");
	Global_1638223.f_50 = unk_0xE33C601C19270822(iVar0, "rank");
	Global_1638223.f_50 = unk_0xE33C601C19270822(iVar0, "rank");
	Global_1638223.f_94149 = unk_0xE33C601C19270822(iVar0, "charcon");
	Global_1638223.f_94149 = unk_0xE33C601C19270822(iVar0, "char");
	Global_1638223.f_94151 = unk_0xE33C601C19270822(iVar0, "xpr");
	Global_1638223.f_94152 = unk_0xE33C601C19270822(iVar0, "cshr");
	Global_1638223.f_94156 = unk_0xE33C601C19270822(iVar0, "ctsc");
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "ecsbs") == 2)
	{
		Global_1638223.f_106847.f_16 = unk_0xE33C601C19270822(iVar0, "ecsbs");
	}
	else
	{
		Global_1638223.f_106847.f_16 = 0;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "ecsbs2") == 2)
	{
		Global_1638223.f_106847.f_17 = unk_0xE33C601C19270822(iVar0, "ecsbs2");
	}
	else
	{
		Global_1638223.f_106847.f_17 = 0;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "ecsrng") == 2)
	{
		Global_1638223.f_106847.f_62 = unk_0xE33C601C19270822(iVar0, "ecsrng");
	}
	else
	{
		Global_1638223.f_106847.f_62 = 0;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "ecscp") == 5)
	{
		Global_1638223.f_106847.f_54 = { unk_0xAB08124000EEAE30(iVar0, "ecscp") };
	}
	else
	{
		Global_1638223.f_106847.f_54 = { 0f, 0f, 0f };
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "ecscr") == 3)
	{
		Global_1638223.f_106847.f_60 = unk_0x22B34D863B5EB347(iVar0, "ecscr");
	}
	else
	{
		Global_1638223.f_106847.f_60 = 0f;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "ecscs") == 5)
	{
		Global_1638223.f_106847.f_57 = { unk_0xAB08124000EEAE30(iVar0, "ecscs") };
	}
	else
	{
		Global_1638223.f_106847.f_57 = { 0f, 0f, 0f };
	}
	iVar8 = 0;
	while (iVar8 <= 29)
	{
		StringCopy(&cVar9, "ecein", 8);
		StringIntConCat(&cVar9, iVar8, 8);
		if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 2)
		{
			Global_1638223.f_106847.f_63[iVar8 /*12*/].f_1 = unk_0xE33C601C19270822(iVar0, &cVar9);
		}
		else
		{
			Global_1638223.f_106847.f_63[iVar8 /*12*/].f_1 = -1;
		}
		StringCopy(&cVar9, "ecetp", 8);
		StringIntConCat(&cVar9, iVar8, 8);
		if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 2)
		{
			Global_1638223.f_106847.f_63[iVar8 /*12*/] = unk_0xE33C601C19270822(iVar0, &cVar9);
		}
		else
		{
			Global_1638223.f_106847.f_63[iVar8 /*12*/] = -1;
		}
		StringCopy(&cVar9, "ecebs", 8);
		StringIntConCat(&cVar9, iVar8, 8);
		if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 2)
		{
			Global_1638223.f_106847.f_63[iVar8 /*12*/].f_2 = unk_0xE33C601C19270822(iVar0, &cVar9);
		}
		else
		{
			Global_1638223.f_106847.f_63[iVar8 /*12*/].f_2 = 0;
		}
		StringCopy(&cVar9, "ecehn", 8);
		StringIntConCat(&cVar9, iVar8, 8);
		if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1638223.f_106847.f_63[iVar8 /*12*/].f_4), unk_0xD5EE6B924304F24C(iVar0, &cVar9), 32);
		}
		else
		{
			StringCopy(&(Global_1638223.f_106847.f_63[iVar8 /*12*/].f_4), "", 32);
		}
		iVar8++;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "clbscr") == 2)
	{
		Global_1638223.f_107861 = unk_0xE33C601C19270822(iVar0, "clbscr");
	}
	else
	{
		Global_1638223.f_107861 = -1;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "disar") == 2)
	{
		Global_1638223.f_107862 = unk_0xE33C601C19270822(iVar0, "disar");
	}
	else
	{
		Global_1638223.f_107862 = 0;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "rlopt") == 2)
	{
		Global_1638223.f_107650 = unk_0xE33C601C19270822(iVar0, "rlopt");
	}
	else
	{
		Global_1638223.f_107650 = 0;
	}
	iVar15 = unk_0xE33C601C19270822(iVar0, "gpmn");
	Global_1638223.f_92 = iVar15;
	iVar16 = unk_0xE33C601C19270822(iVar0, "musx");
	if (iVar16 != -1)
	{
		Global_1638223.f_94144 = iVar16;
	}
	else
	{
		Global_1638223.f_94144 = -1;
	}
	Global_1638223.f_94143 = unk_0xE33C601C19270822(iVar0, "ausc");
	Global_1638223.f_28 = unk_0xE33C601C19270822(iVar0, "minNu");
	Global_1638223.f_27 = unk_0xE33C601C19270822(iVar0, "num");
	if (Global_1638223.f_27 == -1)
	{
		Global_1638223.f_27 = 30;
	}
	Global_1638223.f_29 = unk_0xE33C601C19270822(iVar0, "time");
	Global_1638223.f_68 = { unk_0xAB08124000EEAE30(iVar0, "start") };
	StringCopy(&cVar17, "apart", 16);
	Global_1638223.f_107281 = { unk_0xAB08124000EEAE30(iVar0, &cVar17) };
	Global_1638223.f_107295 = unk_0xE33C601C19270822(iVar0, "apwbs");
	Global_1638223.f_107284 = unk_0xE33C601C19270822(iVar0, "wrploc");
	Global_1638223.f_107298 = unk_0xE33C601C19270822(iVar0, "twrst");
	Global_1638223.f_107296 = unk_0xE33C601C19270822(iVar0, "iplop");
	Global_1638223.f_107297 = unk_0xE33C601C19270822(iVar0, "intop");
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "copteam") == 2)
	{
		Global_1638223.f_44970 = unk_0xE33C601C19270822(iVar0, "copteam");
	}
	else
	{
		Global_1638223.f_44970 = 0;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "pttl") == 4)
	{
		StringCopy(&(Global_1638223.f_93841), unk_0xD5EE6B924304F24C(iVar0, "pttl"), 64);
	}
	else
	{
		StringCopy(&(Global_1638223.f_93841), "", 64);
	}
	iVar21 = 0;
	while (iVar21 <= 21)
	{
		StringCopy(&cVar9, "dmvft", 8);
		StringIntConCat(&cVar9, iVar21, 8);
		if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 2)
		{
			Global_1638223.f_44808[iVar21] = unk_0xE33C601C19270822(iVar0, &cVar9);
		}
		else
		{
			Global_1638223.f_44808[iVar21] = 0;
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
			if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 4)
			{
				StringCopy(&(Global_1638223.f_109942[iVar15 /*33*/][iVar22 /*16*/]), unk_0xD5EE6B924304F24C(iVar0, &cVar9), 64);
			}
			else
			{
				StringCopy(&(Global_1638223.f_109942[iVar15 /*33*/][iVar22 /*16*/]), "", 64);
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
			if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 2)
			{
				Global_1638223.f_44290[iVar15 /*23*/][iVar22] = unk_0xE33C601C19270822(iVar0, &cVar9);
			}
			else
			{
				Global_1638223.f_44290[iVar15 /*23*/][iVar22] = 0;
			}
			iVar22++;
		}
		StringCopy(&cVar9, "t", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		StringConCat(&cVar9, "dvl", 8);
		if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 2)
		{
			Global_1638223.f_44756[iVar15] = unk_0xE33C601C19270822(iVar0, &cVar9);
		}
		else
		{
			Global_1638223.f_44756[iVar15] = 0;
		}
		StringCopy(&cVar9, "t", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		StringConCat(&cVar9, "dv", 8);
		if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 2)
		{
			Global_1638223.f_44761[iVar15] = unk_0xE33C601C19270822(iVar0, &cVar9);
		}
		else
		{
			Global_1638223.f_44761[iVar15] = 0;
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
				if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 2)
				{
					Global_1638223.f_44383[iVar15 /*93*/][iVar23 /*23*/][iVar22] = unk_0xE33C601C19270822(iVar0, &cVar9);
				}
				else
				{
					Global_1638223.f_44383[iVar15 /*93*/][iVar23 /*23*/][iVar22] = 0;
				}
				iVar22++;
			}
			StringCopy(&cVar9, "t", 8);
			StringIntConCat(&cVar9, iVar15, 8);
			StringIntConCat(&cVar9, iVar23, 8);
			StringConCat(&cVar9, "dvl", 8);
			if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 2)
			{
				Global_1638223.f_44766[iVar15 /*5*/][iVar23] = unk_0xE33C601C19270822(iVar0, &cVar9);
			}
			else
			{
				Global_1638223.f_44766[iVar15 /*5*/][iVar23] = 0;
			}
			StringCopy(&cVar9, "t", 8);
			StringIntConCat(&cVar9, iVar15, 8);
			StringIntConCat(&cVar9, iVar23, 8);
			StringConCat(&cVar9, "dv", 8);
			if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 2)
			{
				Global_1638223.f_44787[iVar15 /*5*/][iVar23] = unk_0xE33C601C19270822(iVar0, &cVar9);
			}
			else
			{
				Global_1638223.f_44787[iVar15 /*5*/][iVar23] = 0;
			}
			iVar23++;
		}
		StringCopy(&cVar9, "dmaskg", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 2)
		{
			Global_1638223.f_94135[iVar15] = unk_0xE33C601C19270822(iVar0, &cVar9);
		}
		else
		{
			Global_1638223.f_94135[iVar15] = 0;
		}
		StringCopy(&cVar9, "ofovr", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 2)
		{
			Global_1638223.f_98090[iVar15] = unk_0xE33C601C19270822(iVar0, &cVar9);
		}
		else
		{
			Global_1638223.f_98090[iVar15] = -1;
		}
		StringCopy(&cVar9, "tmrfs", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1638223.f_109877[iVar15 /*16*/]), unk_0xD5EE6B924304F24C(iVar0, &cVar9), 64);
		}
		else
		{
			StringCopy(&(Global_1638223.f_109877[iVar15 /*16*/]), "", 64);
		}
		StringCopy(&cVar9, "tmtss", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1638223.f_110075[iVar15 /*16*/]), unk_0xD5EE6B924304F24C(iVar0, &cVar9), 64);
		}
		else
		{
			StringCopy(&(Global_1638223.f_110075[iVar15 /*16*/]), "", 64);
		}
		StringCopy(&cVar9, "tmrph", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1638223.f_110140[iVar15 /*16*/]), unk_0xD5EE6B924304F24C(iVar0, &cVar9), 64);
		}
		else
		{
			StringCopy(&(Global_1638223.f_110140[iVar15 /*16*/]), "", 64);
		}
		StringCopy(&cVar9, "tmtsr", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 2)
		{
			Global_1638223.f_110205[iVar15] = unk_0xE33C601C19270822(iVar0, &cVar9);
		}
		else
		{
			Global_1638223.f_110205[iVar15] = 0;
		}
		StringCopy(&cVar9, "pmscid", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 2)
		{
			Global_1638223.f_107863[iVar15] = unk_0xE33C601C19270822(iVar0, &cVar9);
		}
		else
		{
			Global_1638223.f_107863[iVar15] = -1;
		}
		StringCopy(&cVar9, "qran", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 2)
		{
			Global_1638223.f_94157[iVar15] = unk_0xE33C601C19270822(iVar0, &cVar9);
		}
		else
		{
			Global_1638223.f_94157[iVar15] = -1;
		}
		StringCopy(&cVar9, "cwtit", 8);
		if (iVar15 > 0)
		{
			StringIntConCat(&cVar9, iVar15, 8);
		}
		if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1638223.f_112733[iVar15 /*4*/]), unk_0xD5EE6B924304F24C(iVar0, &cVar9), 16);
		}
		else
		{
			StringCopy(&(Global_1638223.f_112733[iVar15 /*4*/]), "", 16);
		}
		StringCopy(&cVar9, "cwstr", 8);
		if (iVar15 > 0)
		{
			StringIntConCat(&cVar9, iVar15, 8);
		}
		if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1638223.f_112750[iVar15 /*4*/]), unk_0xD5EE6B924304F24C(iVar0, &cVar9), 16);
		}
		else
		{
			StringCopy(&(Global_1638223.f_112750[iVar15 /*4*/]), "", 16);
		}
		StringCopy(&cVar9, "cwspre", 8);
		if (iVar15 > 0)
		{
			StringIntConCat(&cVar9, iVar15, 8);
		}
		if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 2)
		{
			Global_1638223.f_112767[iVar15] = unk_0xE33C601C19270822(iVar0, &cVar9);
		}
		else
		{
			Global_1638223.f_112767[iVar15] = -1;
		}
		if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 2)
		{
			Global_1638223.f_112840 = unk_0xE33C601C19270822(iVar0, "twti");
		}
		else
		{
			Global_1638223.f_112840 = 0;
		}
		if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 2)
		{
			Global_1638223.f_112839 = unk_0xE33C601C19270822(iVar0, "twpta");
		}
		else
		{
			Global_1638223.f_112839 = 0;
		}
		Global_1638223.f_112841 = unk_0xE33C601C19270822(iVar0, "twct1");
		Global_1638223.f_112842 = unk_0xE33C601C19270822(iVar0, "twct2");
		Global_1638223.f_112843 = unk_0xE33C601C19270822(iVar0, "twct3");
		Global_1638223.f_112844 = unk_0xE33C601C19270822(iVar0, "twct4");
		Global_1638223.f_112845 = unk_0xE33C601C19270822(iVar0, "twcon");
		Global_1638223.f_112846 = unk_0xE33C601C19270822(iVar0, "twcto");
		Global_1638223.f_112847 = unk_0xE33C601C19270822(iVar0, "twcun");
		Global_1638223.f_112848 = unk_0xE33C601C19270822(iVar0, "twcdi");
		Global_1638223.f_112849 = unk_0xE33C601C19270822(iVar0, "svmrcvbr");
		Global_1638223.f_112850 = unk_0xE33C601C19270822(iVar0, "wvmarc");
		Global_1638223.f_113287 = unk_0xE33C601C19270822(iVar0, "wvmsbet");
		Global_1638223.f_113288 = unk_0xE33C601C19270822(iVar0, "wvmsber");
		if (unk_0x7ADD5F9CC9AA2359(iVar0, "wvmdsr") == 2)
		{
			Global_1638223.f_113295 = unk_0xE33C601C19270822(iVar0, "wvmdsr");
		}
		else
		{
			Global_1638223.f_113295 = -1;
		}
		iVar2 = 0;
		while (iVar2 <= 3)
		{
			StringCopy(&cVar9, "kspt", 8);
			StringIntConCat(&cVar9, iVar2, 8);
			Global_1638223.f_112905[iVar2] = unk_0xE33C601C19270822(iVar0, &cVar9);
			StringCopy(&cVar9, "kspr", 8);
			StringIntConCat(&cVar9, iVar2, 8);
			Global_1638223.f_112910[iVar2] = unk_0xE33C601C19270822(iVar0, &cVar9);
			iVar2++;
		}
		if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 2)
		{
			Global_1638223.f_112856 = unk_0xE33C601C19270822(iVar0, "pptl");
		}
		else
		{
			Global_1638223.f_112856 = 5;
		}
		if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 2)
		{
			Global_1638223.f_112855 = unk_0xE33C601C19270822(iVar0, "ptltl");
		}
		else
		{
			Global_1638223.f_112855 = 0;
		}
		if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 2)
		{
			Global_1638223.f_112926 = unk_0xE33C601C19270822(iVar0, "ptlem");
		}
		else
		{
			Global_1638223.f_112926 = -1;
		}
		if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 2)
		{
			Global_1638223.f_112851 = unk_0xE33C601C19270822(iVar0, "trrt");
		}
		else
		{
			Global_1638223.f_112851 = 3;
		}
		if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 2)
		{
			Global_1638223.f_112927 = unk_0xE33C601C19270822(iVar0, "tptb");
		}
		else
		{
			Global_1638223.f_112927 = 5000;
		}
		if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 2)
		{
			Global_1638223.f_112928 = unk_0xE33C601C19270822(iVar0, "tprt");
		}
		else
		{
			Global_1638223.f_112928 = 2500;
		}
		if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 2)
		{
			Global_1638223.f_112929 = unk_0xE33C601C19270822(iVar0, "ldpucd");
		}
		else
		{
			Global_1638223.f_112929 = 3000;
		}
		StringCopy(&cVar9, "rtveft", 8);
		StringIntConCat(&cVar9, iVar15, 8);
		if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 2)
		{
			Global_1638223.f_112798[iVar15] = unk_0xE33C601C19270822(iVar0, &cVar9);
		}
		else
		{
			Global_1638223.f_112798[iVar15] = 0;
		}
		iVar15++;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "ctmrs") == 4)
	{
		StringCopy(&(Global_1638223.f_93857), unk_0xD5EE6B924304F24C(iVar0, "ctmrs"), 24);
	}
	else
	{
		StringCopy(&(Global_1638223.f_93857), "", 24);
	}
	iVar2 = 0;
	while (iVar2 < 6)
	{
		StringCopy(&cVar9, "avss", 8);
		StringIntConCat(&cVar9, iVar2, 8);
		Global_1638223.f_98036[iVar2] = unk_0xE33C601C19270822(iVar0, &cVar9);
		iVar3 = func_223(iVar2);
		while (iVar3 <= 31)
		{
			unk_0x507FE690B1271947(&(Global_1638223.f_98036[iVar2]), iVar3);
			iVar3++;
		}
		iVar2++;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "vsclout") == 2)
	{
		Global_1638223.f_98043[0] = unk_0xE33C601C19270822(iVar0, "vsclout");
	}
	else
	{
		Global_1638223.f_98043[0] = -1;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "vsthout") == 2)
	{
		Global_1638223.f_98043[1] = unk_0xE33C601C19270822(iVar0, "vsthout");
	}
	else
	{
		Global_1638223.f_98043[1] = -1;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "vshwout") == 2)
	{
		Global_1638223.f_98043[3] = unk_0xE33C601C19270822(iVar0, "vshwout");
	}
	else
	{
		Global_1638223.f_98043[3] = -1;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "vsenout") == 2)
	{
		Global_1638223.f_98043[2] = unk_0xE33C601C19270822(iVar0, "vsenout");
	}
	else
	{
		Global_1638223.f_98043[2] = -1;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "vstgout") == 2)
	{
		Global_1638223.f_98043[4] = unk_0xE33C601C19270822(iVar0, "vstgout");
	}
	else
	{
		Global_1638223.f_98043[4] = -1;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "vsbsout") == 2)
	{
		Global_1638223.f_98043[5] = unk_0xE33C601C19270822(iVar0, "vsbsout");
	}
	else
	{
		Global_1638223.f_98043[5] = -1;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "alfutvs") == 2)
	{
		Global_1638223.f_98050 = unk_0xE33C601C19270822(iVar0, "alfutvs");
	}
	else
	{
		Global_1638223.f_98050 = 0;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "vsdfstc") == 2)
	{
		Global_1638223.f_98051 = unk_0xE33C601C19270822(iVar0, "vsdfstc");
	}
	else if (((!unk_0xAA4F14DA15DB0B51(Global_1638223.f_12, 23) && !unk_0xAA4F14DA15DB0B51(Global_1638223.f_12, 24)) && !unk_0xAA4F14DA15DB0B51(Global_1638223.f_13, 31)) && !unk_0xAA4F14DA15DB0B51(Global_1638223.f_14, 8))
	{
		Global_1638223.f_98051 = -1;
	}
	else if (((!unk_0xAA4F14DA15DB0B51(Global_1638223.f_12, 23) && unk_0xAA4F14DA15DB0B51(Global_1638223.f_12, 24)) && !unk_0xAA4F14DA15DB0B51(Global_1638223.f_13, 31)) && !unk_0xAA4F14DA15DB0B51(Global_1638223.f_14, 8))
	{
		Global_1638223.f_98051 = 0;
	}
	else if (((unk_0xAA4F14DA15DB0B51(Global_1638223.f_12, 23) && !unk_0xAA4F14DA15DB0B51(Global_1638223.f_12, 24)) && !unk_0xAA4F14DA15DB0B51(Global_1638223.f_13, 31)) && !unk_0xAA4F14DA15DB0B51(Global_1638223.f_14, 8))
	{
		Global_1638223.f_98051 = 1;
	}
	else if (((!unk_0xAA4F14DA15DB0B51(Global_1638223.f_12, 23) && !unk_0xAA4F14DA15DB0B51(Global_1638223.f_12, 24)) && unk_0xAA4F14DA15DB0B51(Global_1638223.f_13, 31)) && !unk_0xAA4F14DA15DB0B51(Global_1638223.f_14, 8))
	{
		Global_1638223.f_98051 = 2;
	}
	else if (((!unk_0xAA4F14DA15DB0B51(Global_1638223.f_12, 23) && !unk_0xAA4F14DA15DB0B51(Global_1638223.f_12, 24)) && !unk_0xAA4F14DA15DB0B51(Global_1638223.f_13, 31)) && unk_0xAA4F14DA15DB0B51(Global_1638223.f_14, 8))
	{
		Global_1638223.f_98051 = 3;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "dspteam") == 2)
	{
		Global_1638223.f_107886 = unk_0xE33C601C19270822(iVar0, "dspteam");
	}
	else
	{
		Global_1638223.f_107886 = -1;
	}
	if (!func_103() && !func_222())
	{
		if (unk_0xD176F39E49081808(iParam1))
		{
			StringCopy(&(Global_1638223.f_93539), unk_0xD5EE6B924304F24C(iVar0, "nm"), 64);
		}
		else
		{
			StringCopy(&(Global_1638223.f_93539), func_221(), 64);
		}
	}
	else
	{
		StringCopy(&(Global_1638223.f_93539), unk_0xD5EE6B924304F24C(iVar0, "nm"), 64);
	}
	Global_1638223.f_94187 = unk_0xE33C601C19270822(iVar0, "mgrk");
	Global_1638223.f_94188 = unk_0xE33C601C19270822(iVar0, "mght");
	StringCopy(&(Global_1638223.f_93561[0 /*16*/]), "", 64);
	StringCopy(&(Global_1638223.f_93561[1 /*16*/]), "", 64);
	StringCopy(&(Global_1638223.f_93561[2 /*16*/]), "", 64);
	StringCopy(&(Global_1638223.f_93561[3 /*16*/]), "", 64);
	StringCopy(&(Global_1638223.f_93561[4 /*16*/]), "", 64);
	StringCopy(&(Global_1638223.f_93561[5 /*16*/]), "", 64);
	StringCopy(&(Global_1638223.f_93561[6 /*16*/]), "", 64);
	StringCopy(&(Global_1638223.f_93561[7 /*16*/]), "", 64);
	uVar24 = unk_0x560A2E3DA92FA8F8(iVar0, "dec");
	iVar25 = unk_0x8A3FBC299F47ED6B(unk_0x71104AC03D1921C0(uVar24, 0));
	if (iParam1 == -1 || unk_0xD176F39E49081808(iParam1))
	{
		if (iVar25 <= 63)
		{
			iVar2 = 0;
			while (iVar2 <= (unk_0x4BFD05F6E18EB439(iVar24) - 1))
			{
				StringCopy(&(Global_1638223.f_93561[iVar2 /*16*/]), unk_0x71104AC03D1921C0(iVar24, iVar2), 64);
				iVar2++;
			}
		}
		else
		{
			sVar27 = unk_0x71104AC03D1921C0(iVar24, 0);
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
					StringCopy(&(Global_1638223.f_93561[iVar2 /*16*/]), unk_0xF08FFF843910D160(sVar27, (63 * iVar2), iVar26), 64);
				}
				iVar2++;
			}
		}
	}
	else
	{
		StringCopy(&(Global_1638223.f_93561[0 /*16*/]), func_221(), 64);
	}
	Global_1638223.f_32 = unk_0xE33C601C19270822(iVar0, "tnum");
	Global_1638223.f_33 = unk_0xE33C601C19270822(iVar0, "mtnum");
	if (!func_220())
	{
		if (!unk_0xAA4F14DA15DB0B51(Global_1638223.f_15, 14))
		{
			Global_1638223.f_31 = Global_1638223.f_32;
		}
		else if (unk_0x7ADD5F9CC9AA2359(iVar0, "dtn") == 2)
		{
			Global_1638223.f_31 = unk_0xE33C601C19270822(iVar0, "dtn");
		}
		else
		{
			Global_1638223.f_31 = Global_1638223.f_32;
		}
	}
	else
	{
		Global_1638223.f_31 = Global_1638223.f_32;
	}
	if (Global_1638223 == 0)
	{
		if (Global_2445217.f_549.f_11 != 0 && Global_1638223.f_32 != Global_2445217.f_549.f_11)
		{
			if (!Global_262145.f_4871 && func_60(Global_1638223.f_112772))
			{
				iVar28 = func_219();
				if (Global_2445217.f_549.f_11 < iVar28)
				{
					Global_2445217.f_549.f_11 = iVar28;
					if (unk_0x0FFED3E94261A832() != -1)
					{
						Global_1621674[unk_0x0FFED3E94261A832() /*35*/] = Global_2445217.f_549.f_11;
					}
				}
			}
			Global_1638223.f_32 = Global_2445217.f_549.f_11;
			Global_1638223.f_31 = Global_1638223.f_32;
		}
		else if (func_216() && func_215())
		{
			iVar29 = func_219();
			fVar30 = (unk_0xBBDA792448DB5A89(iVar29) / unk_0xBBDA792448DB5A89(Global_1638223.f_27));
			iVar31 = 0;
			if (Global_1638223.f_32 == 3)
			{
				if (fVar30 <= 0.66f)
				{
					Global_1638223.f_32 = 2;
					iVar31 = 1;
				}
			}
			else if (Global_1638223.f_32 == 4)
			{
				if (fVar30 <= 0.5f)
				{
					Global_1638223.f_32 = 2;
					iVar31 = 1;
				}
				else if (fVar30 <= 0.75f)
				{
					Global_1638223.f_32 = 3;
					iVar31 = 1;
				}
			}
			if (iVar31 && Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_97.f_28 >= Global_1638223.f_32)
			{
				Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_97.f_28 = func_213(Global_1638223.f_32);
			}
			if (Global_1638223.f_31 > Global_1638223.f_32)
			{
				Global_1638223.f_31 = Global_1638223.f_32;
			}
		}
	}
	if (Global_1638223 == 1)
	{
		if (Global_1638223.f_32 > 4)
		{
			Global_1638223.f_32 = 4;
		}
	}
	else if (Global_1638223.f_32 > 4)
	{
		Global_1638223.f_32 = 4;
	}
	Global_1638223.f_84192 = unk_0xE33C601C19270822(iVar0, "atmdm");
	Global_1638223.f_46 = unk_0xE33C601C19270822(iVar0, "trel");
	Global_1638223.f_94153 = unk_0xE33C601C19270822(iVar0, "ltm");
	Global_1638223.f_74 = { unk_0xAB08124000EEAE30(iVar0, "vcpr") };
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "hstat") == 2)
	{
		Global_1638223.f_94124 = unk_0xE33C601C19270822(iVar0, "hstat");
	}
	else
	{
		Global_1638223.f_94124 = 0;
	}
	iVar32 = 0;
	while (iVar32 <= 19)
	{
		StringCopy(&cVar9, "rzpos", 8);
		StringIntConCat(&cVar9, iVar32, 8);
		if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 5)
		{
			Global_1638223.f_65201[iVar32 /*3*/] = { unk_0xAB08124000EEAE30(iVar0, &cVar9) };
		}
		else
		{
			Global_1638223.f_65201[iVar32 /*3*/] = { 0f, 0f, 0f };
		}
		iVar32++;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "numzr") == 2)
	{
		Global_1638223.f_65262 = unk_0xE33C601C19270822(iVar0, "numzr");
	}
	else
	{
		Global_1638223.f_65262 = 0;
	}
	iVar33 = unk_0xD41282265B0A744C(iParam0, "ene");
	iVar34 = unk_0xE33C601C19270822(iVar33, "no");
	iVar2 = 0;
	while (iVar2 < 6)
	{
		StringCopy(&cVar9, "hpped", 8);
		if (iVar2 > 0)
		{
			StringIntConCat(&cVar9, iVar2 + 1, 8);
		}
		if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 2 && iVar34 > unk_0xE33C601C19270822(iVar0, &cVar9))
		{
			Global_1638223.f_84062[iVar2] = unk_0xE33C601C19270822(iVar0, &cVar9);
		}
		else
		{
			Global_1638223.f_84062[iVar2] = -1;
		}
		iVar2++;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "rsgmx") == 2 && unk_0x7ADD5F9CC9AA2359(iVar0, "rsgnu") == 2)
	{
		Global_1638223.f_84069 = unk_0xE33C601C19270822(iVar0, "rsgmx");
		Global_1638223.f_84070 = unk_0xE33C601C19270822(iVar0, "rsgnu");
		Global_1638223.f_84071 = unk_0xE33C601C19270822(iVar0, "rsgbs");
		if (Global_1638223.f_84069 > 0 && Global_1638223.f_84070 != 0)
		{
			iVar2 = 0;
			while (iVar2 <= (Global_1638223.f_84069 - 1))
			{
				if (iVar2 < 10)
				{
					StringCopy(&cVar9, "rsg", 8);
					StringIntConCat(&cVar9, iVar2, 8);
					MemCopy(&cVar35, {cVar9}, 4);
					StringConCat(&cVar35, "mx", 16);
					MemCopy(&cVar39, {cVar9}, 4);
					StringConCat(&cVar39, "nu", 16);
					if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar35) == 2 && unk_0x7ADD5F9CC9AA2359(iVar0, &cVar39) == 2)
					{
						Global_1638223.f_84072[iVar2] = unk_0xE33C601C19270822(iVar0, &cVar35);
						Global_1638223.f_84083[iVar2] = unk_0xE33C601C19270822(iVar0, &cVar39);
						MemCopy(&cVar35, {cVar9}, 4);
						StringConCat(&cVar35, "bs", 16);
						Global_1638223.f_84094[iVar2] = unk_0xE33C601C19270822(iVar0, &cVar35);
					}
				}
				iVar2++;
			}
		}
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "tshd") == 2)
	{
		Global_1638223.f_94176 = unk_0xE33C601C19270822(iVar0, "tshd");
	}
	else
	{
		Global_1638223.f_94176 = -1;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "mrd") == 2)
	{
		Global_1638223.f_94177 = unk_0xE33C601C19270822(iVar0, "mrd");
	}
	else
	{
		Global_1638223.f_94177 = 15;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "etim") == 3)
	{
		Global_1638223.f_94179 = unk_0x22B34D863B5EB347(iVar0, "etim");
	}
	else
	{
		Global_1638223.f_94179 = 2.5f;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "evel") == 3)
	{
		Global_1638223.f_94180 = unk_0x22B34D863B5EB347(iVar0, "evel");
	}
	else
	{
		Global_1638223.f_94180 = 8f;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "etimb") == 3)
	{
		Global_1638223.f_94181 = unk_0x22B34D863B5EB347(iVar0, "etimb");
	}
	else
	{
		Global_1638223.f_94181 = 2.5f;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "evelb") == 3)
	{
		Global_1638223.f_94182 = unk_0x22B34D863B5EB347(iVar0, "evelb");
	}
	else
	{
		Global_1638223.f_94182 = 8f;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "srct") == 2)
	{
		Global_1638223.f_94178 = unk_0xE33C601C19270822(iVar0, "srct");
	}
	else
	{
		Global_1638223.f_94178 = -1;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "tptbd") == 2)
	{
		Global_1638223.f_94183 = unk_0xE33C601C19270822(iVar0, "tptbd");
	}
	else
	{
		Global_1638223.f_94183 = -1;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "tptba") == 2)
	{
		Global_1638223.f_94184 = unk_0xE33C601C19270822(iVar0, "tptba");
	}
	else
	{
		Global_1638223.f_94184 = -1;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "atspos") == 5)
	{
		Global_1638223.f_109775 = { unk_0xAB08124000EEAE30(iVar0, "atspos") };
	}
	else
	{
		Global_1638223.f_109775 = { 0f, 0f, 0f };
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "atscmp") == 5)
	{
		Global_1638223.f_109769 = { unk_0xAB08124000EEAE30(iVar0, "atscmp") };
	}
	else
	{
		Global_1638223.f_109769 = { 0f, 0f, 0f };
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "atscmr") == 5)
	{
		Global_1638223.f_109772 = { unk_0xAB08124000EEAE30(iVar0, "atscmr") };
	}
	else
	{
		Global_1638223.f_109772 = { 0f, 0f, 0f };
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "atsfov") == 3)
	{
		Global_1638223.f_109778 = unk_0x22B34D863B5EB347(iVar0, "atsfov");
	}
	else
	{
		Global_1638223.f_109778 = 45f;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "atshed") == 3)
	{
		Global_1638223.f_109779 = unk_0x22B34D863B5EB347(iVar0, "atshed");
	}
	else
	{
		Global_1638223.f_109779 = 0f;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "atsveh") == 2)
	{
		Global_1638223.f_109780 = unk_0xE33C601C19270822(iVar0, "atsveh");
	}
	else
	{
		Global_1638223.f_109780 = 0;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "hpdt1") == 2)
	{
		Global_1638223.f_94125[0] = unk_0xE33C601C19270822(iVar0, "hpdt1");
	}
	else
	{
		Global_1638223.f_94125[0] = 0;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "hpdt2") == 2)
	{
		Global_1638223.f_94125[1] = unk_0xE33C601C19270822(iVar0, "hpdt2");
	}
	else
	{
		Global_1638223.f_94125[1] = 0;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "vdt") == 2)
	{
		Global_1638223.f_94128 = unk_0xE33C601C19270822(iVar0, "vdt");
	}
	else
	{
		Global_1638223.f_94128 = 0;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "hbrbs") == 2)
	{
		Global_1638223.f_107868 = unk_0xE33C601C19270822(iVar0, "hbrbs");
	}
	else
	{
		Global_1638223.f_107868 = 0;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "hbrtt") == 2)
	{
		Global_1638223.f_107869 = unk_0xE33C601C19270822(iVar0, "hbrtt");
	}
	else
	{
		Global_1638223.f_107869 = 0;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "hbrttm") == 2)
	{
		Global_1638223.f_107870 = unk_0xE33C601C19270822(iVar0, "hbrttm");
	}
	else
	{
		Global_1638223.f_107870 = 0;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "hbrtrl") == 2)
	{
		Global_1638223.f_107871 = unk_0xE33C601C19270822(iVar0, "hbrtrl");
	}
	else
	{
		Global_1638223.f_107871 = -1;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "hbrpdt") == 2)
	{
		Global_1638223.f_107873 = unk_0xE33C601C19270822(iVar0, "hbrpdt");
	}
	else
	{
		Global_1638223.f_107873 = 0;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "hbrvdt") == 2)
	{
		Global_1638223.f_107875 = unk_0xE33C601C19270822(iVar0, "hbrvdt");
	}
	else
	{
		Global_1638223.f_107875 = 0;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "hbrkt") == 2)
	{
		Global_1638223.f_107877 = unk_0xE33C601C19270822(iVar0, "hbrkt");
	}
	else
	{
		Global_1638223.f_107877 = 0;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "hbrph") == 2)
	{
		Global_1638223.f_107880 = unk_0xE33C601C19270822(iVar0, "hbrph");
	}
	else
	{
		Global_1638223.f_107880 = 0;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "hecam") == 2)
	{
		Global_1638223.f_107881 = unk_0xE33C601C19270822(iVar0, "hecam");
	}
	else
	{
		Global_1638223.f_107881 = 0;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "sdrvm") == 2)
	{
		Global_1638223.f_110223 = unk_0xE33C601C19270822(iVar0, "sdrvm");
	}
	else
	{
		Global_1638223.f_110223 = 10000;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "inumbnc") == 2)
	{
		Global_1638223.f_110237 = unk_0xE33C601C19270822(iVar0, "inumbnc");
	}
	else
	{
		Global_1638223.f_110237 = 10000;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "mdmgm") == 3)
	{
		Global_1638223.f_110224 = unk_0x22B34D863B5EB347(iVar0, "mdmgm");
	}
	else
	{
		Global_1638223.f_110224 = 1f;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "itsms") == 2)
	{
		Global_1638223.f_112890 = unk_0xE33C601C19270822(iVar0, "itsms");
	}
	else
	{
		Global_1638223.f_112890 = 1;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "igls") == 2)
	{
		Global_1638223.f_112891 = unk_0xE33C601C19270822(iVar0, "igls");
	}
	else
	{
		Global_1638223.f_112891 = 0;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "twdas") == 3)
	{
		Global_1638223.f_110225 = unk_0x22B34D863B5EB347(iVar0, "twdas");
	}
	else
	{
		Global_1638223.f_110225 = 0f;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "vdt") == 2)
	{
		Global_1638223.f_112773 = unk_0xE33C601C19270822(iVar0, "sphft");
	}
	else
	{
		Global_1638223.f_112773 = 0;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "sdsr") == 2)
	{
		Global_1638223.f_112732 = unk_0xE33C601C19270822(iVar0, "sdsr");
	}
	else
	{
		Global_1638223.f_112732 = -1;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "vdt") == 2)
	{
		Global_1638223.f_112795 = unk_0xE33C601C19270822(iVar0, "cmxdftms");
	}
	else
	{
		Global_1638223.f_112795 = 0;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "crlaa") == 2)
	{
		Global_1638223.f_112797 = unk_0xE33C601C19270822(iVar0, "crlaa");
	}
	else
	{
		Global_1638223.f_112797 = 0;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "cmxtliv") == 2)
	{
		Global_1638223.f_112813 = unk_0xE33C601C19270822(iVar0, "cmxtliv");
	}
	else
	{
		Global_1638223.f_112813 = 0;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "cmxdctl") == 2)
	{
		Global_1638223.f_112814 = unk_0xE33C601C19270822(iVar0, "cmxdctl");
	}
	else
	{
		Global_1638223.f_112814 = 0;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "cmxmctl") == 2)
	{
		Global_1638223.f_112815 = unk_0xE33C601C19270822(iVar0, "cmxmctl");
	}
	else
	{
		Global_1638223.f_112815 = 0;
	}
	if (((unk_0x7ADD5F9CC9AA2359(iVar0, "hmmtt") == 2 && unk_0x7ADD5F9CC9AA2359(iVar0, "hmmts") == 2) && unk_0x7ADD5F9CC9AA2359(iVar0, "hmmte") == 2) && unk_0x7ADD5F9CC9AA2359(iVar0, "hmmth") == 2)
	{
		Global_1638223.f_107882 = unk_0xE33C601C19270822(iVar0, "hmmtt");
		Global_1638223.f_107883 = unk_0xE33C601C19270822(iVar0, "hmmts");
		Global_1638223.f_107884 = unk_0xE33C601C19270822(iVar0, "hmmte");
		Global_1638223.f_107885 = unk_0xE33C601C19270822(iVar0, "hmmth");
	}
	else
	{
		Global_1638223.f_107882 = 0;
		Global_1638223.f_107883 = 0;
		Global_1638223.f_107884 = 0;
		Global_1638223.f_107885 = 0;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "tstrm") == 2)
	{
		Global_1638223.f_109716 = unk_0xE33C601C19270822(iVar0, "tstrm");
	}
	else
	{
		Global_1638223.f_109716 = 0;
	}
	iVar2 = 0;
	while (iVar2 <= 35)
	{
		StringCopy(&cVar9, "dtspk", 8);
		StringIntConCat(&cVar9, iVar2, 8);
		if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1638223.f_97640[iVar2 /*8*/]), unk_0xD5EE6B924304F24C(iVar0, &cVar9), 32);
		}
		else
		{
			StringCopy(&(Global_1638223.f_97640[iVar2 /*8*/]), "", 32);
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 <= 4)
	{
		StringCopy(&cVar9, "cspnm", 8);
		StringIntConCat(&cVar9, iVar2, 8);
		if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1638223.f_83809[iVar2 /*16*/]), unk_0xD5EE6B924304F24C(iVar0, &cVar9), 64);
		}
		else
		{
			StringCopy(&(Global_1638223.f_83809[iVar2 /*16*/]), "", 64);
		}
		StringCopy(&cVar9, "csvnm", 8);
		StringIntConCat(&cVar9, iVar2, 8);
		if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1638223.f_83890[iVar2 /*16*/]), unk_0xD5EE6B924304F24C(iVar0, &cVar9), 64);
		}
		else
		{
			StringCopy(&(Global_1638223.f_83890[iVar2 /*16*/]), "", 64);
		}
		StringCopy(&cVar9, "csonm", 8);
		StringIntConCat(&cVar9, iVar2, 8);
		if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1638223.f_83971[iVar2 /*16*/]), unk_0xD5EE6B924304F24C(iVar0, &cVar9), 64);
		}
		else
		{
			StringCopy(&(Global_1638223.f_83971[iVar2 /*16*/]), "", 64);
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 <= 4)
	{
		StringCopy(&cVar9, "otxsgo", 8);
		StringIntConCat(&cVar9, iVar2, 8);
		if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1638223.f_84105[iVar2 /*16*/]), unk_0xD5EE6B924304F24C(iVar0, &cVar9), 64);
		}
		else
		{
			StringCopy(&(Global_1638223.f_84105[iVar2 /*16*/]), "", 64);
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
			if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 2)
			{
				Global_1638223.f_97974[iVar43 /*14*/][iVar3] = unk_0xE33C601C19270822(iVar0, &cVar9);
			}
			iVar3++;
		}
		StringCopy(&cVar9, "ofs1", 8);
		StringIntConCat(&cVar9, iVar43, 8);
		if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 2)
		{
			Global_1638223.f_98067[iVar43 /*2*/][0] = unk_0xE33C601C19270822(iVar0, &cVar9);
		}
		else
		{
			Global_1638223.f_98067[iVar43 /*2*/][0] = 0;
		}
		StringCopy(&cVar9, "mask1", 8);
		StringIntConCat(&cVar9, iVar43, 8);
		if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 2)
		{
			Global_1638223.f_98081[iVar43 /*2*/][0] = unk_0xE33C601C19270822(iVar0, &cVar9);
		}
		else
		{
			Global_1638223.f_98081[iVar43 /*2*/][0] = 0;
		}
		StringCopy(&cVar9, "gear", 8);
		StringIntConCat(&cVar9, iVar43, 8);
		if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 2)
		{
			Global_1638223.f_98052[iVar43] = unk_0xE33C601C19270822(iVar0, &cVar9);
		}
		else
		{
			Global_1638223.f_98052[iVar43] = 0;
		}
		StringCopy(&cVar9, "geard", 8);
		StringIntConCat(&cVar9, iVar43, 8);
		if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 2)
		{
			Global_1638223.f_98057[iVar43] = unk_0xE33C601C19270822(iVar0, &cVar9);
		}
		else
		{
			Global_1638223.f_98057[iVar43] = -1;
		}
		StringCopy(&cVar9, "apwfr", 8);
		StringIntConCat(&cVar9, iVar43, 8);
		if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 2)
		{
			Global_1638223.f_107285[iVar43] = unk_0xE33C601C19270822(iVar0, &cVar9);
		}
		else
		{
			Global_1638223.f_107285[iVar43] = -1;
		}
		StringCopy(&cVar9, "apwlr", 8);
		StringIntConCat(&cVar9, iVar43, 8);
		if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 2)
		{
			Global_1638223.f_107290[iVar43] = unk_0xE33C601C19270822(iVar0, &cVar9);
		}
		else
		{
			Global_1638223.f_107290[iVar43] = -1;
		}
		StringCopy(&cVar9, "tcmin", 8);
		StringIntConCat(&cVar9, iVar43, 8);
		if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 2 && !func_179())
		{
			Global_1638223.f_107624[iVar43] = unk_0xE33C601C19270822(iVar0, &cVar9);
		}
		else
		{
			Global_1638223.f_107624[iVar43] = 0;
		}
		iVar3 = 0;
		while (iVar3 <= 3)
		{
			StringCopy(&cVar9, "trcmn", 8);
			StringIntConCat(&cVar9, iVar3, 8);
			StringIntConCat(&cVar9, iVar43, 8);
			if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 2 && !func_179())
			{
				Global_1638223.f_107629[iVar43 /*5*/][iVar3] = unk_0xE33C601C19270822(iVar0, &cVar9);
			}
			else
			{
				Global_1638223.f_107629[iVar43 /*5*/][iVar3] = 0;
			}
			iVar3++;
		}
		StringCopy(&cVar9, "tmrsp", 8);
		StringIntConCat(&cVar9, iVar43, 8);
		if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 2)
		{
			Global_1638223.f_107651[iVar43] = unk_0xE33C601C19270822(iVar0, &cVar9);
		}
		else
		{
			Global_1638223.f_107651[iVar43] = 0;
		}
		StringCopy(&cVar9, "tmvhp", 8);
		StringIntConCat(&cVar9, iVar43, 8);
		if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 2)
		{
			Global_1638223.f_44943[iVar43] = unk_0xE33C601C19270822(iVar0, &cVar9);
		}
		else
		{
			Global_1638223.f_44943[iVar43] = 100;
		}
		StringCopy(&cVar9, "tmvds", 8);
		StringIntConCat(&cVar9, iVar43, 8);
		if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 3)
		{
			Global_1638223.f_44948[iVar43] = unk_0x22B34D863B5EB347(iVar0, &cVar9);
		}
		else
		{
			Global_1638223.f_44948[iVar43] = 1f;
		}
		StringCopy(&cVar9, "tblty", 8);
		StringIntConCat(&cVar9, iVar43, 8);
		if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 2)
		{
			Global_1638223.f_44963[iVar43] = unk_0xE33C601C19270822(iVar0, &cVar9);
		}
		else
		{
			Global_1638223.f_44963[iVar43] = 0;
		}
		StringCopy(&cVar9, "pmpos", 8);
		StringIntConCat(&cVar9, iVar43, 8);
		if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 5)
		{
			Global_1638223.f_93073[iVar43 /*3*/] = { unk_0xAB08124000EEAE30(iVar0, &cVar9) };
		}
		else
		{
			Global_1638223.f_93073[iVar43 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar9, "pmpoi", 8);
		StringIntConCat(&cVar9, iVar43, 8);
		if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 5)
		{
			Global_1638223.f_93086[iVar43 /*3*/] = { unk_0xAB08124000EEAE30(iVar0, &cVar9) };
		}
		else
		{
			Global_1638223.f_93086[iVar43 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar9, "pmrad", 8);
		StringIntConCat(&cVar9, iVar43, 8);
		if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 3)
		{
			Global_1638223.f_93099[iVar43] = unk_0x22B34D863B5EB347(iVar0, &cVar9);
		}
		else
		{
			Global_1638223.f_93099[iVar43] = 0f;
		}
		StringCopy(&cVar9, "dfofit", 8);
		StringIntConCat(&cVar9, iVar43, 8);
		if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 2)
		{
			Global_1638223.f_98031[iVar43] = unk_0xE33C601C19270822(iVar0, &cVar9);
		}
		else
		{
			Global_1638223.f_98031[iVar43] = -1;
		}
		StringCopy(&cVar9, "dfstyl", 8);
		StringIntConCat(&cVar9, iVar43, 8);
		if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 2)
		{
			Global_1638223.f_98076[iVar43] = unk_0xE33C601C19270822(iVar0, &cVar9);
		}
		else
		{
			Global_1638223.f_98076[iVar43] = -1;
		}
		StringCopy(&cVar9, "clrovr", 8);
		StringIntConCat(&cVar9, iVar43, 8);
		if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 2)
		{
			Global_1638223.f_89044[iVar43] = unk_0xE33C601C19270822(iVar0, &cVar9);
		}
		else
		{
			Global_1638223.f_89044[iVar43] = -1;
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
			if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar11) == 5)
			{
				Global_1638223.f_93198[iVar43 /*27*/][iVar44 /*13*/][0 /*3*/] = { unk_0xAB08124000EEAE30(iVar0, &cVar11) };
			}
			else
			{
				Global_1638223.f_93198[iVar43 /*27*/][iVar44 /*13*/][0 /*3*/] = { 0f, 0f, 0f };
			}
			StringCopy(&cVar11, "trstf", 16);
			StringIntConCat(&cVar11, iVar43, 16);
			if (iVar44 > 0)
			{
				StringIntConCat(&cVar11, iVar44, 16);
			}
			if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar11) == 5)
			{
				Global_1638223.f_93352[iVar43 /*27*/][iVar44 /*13*/][0 /*3*/] = { unk_0xAB08124000EEAE30(iVar0, &cVar11) };
			}
			else
			{
				Global_1638223.f_93352[iVar43 /*27*/][iVar44 /*13*/][0 /*3*/] = { 0f, 0f, 0f };
			}
			StringCopy(&cVar11, "trsth", 16);
			StringIntConCat(&cVar11, iVar43, 16);
			if (iVar44 > 0)
			{
				StringIntConCat(&cVar11, iVar44, 16);
			}
			if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar11) == 3)
			{
				Global_1638223.f_93307[iVar43 /*11*/][iVar44 /*5*/][0] = unk_0x22B34D863B5EB347(iVar0, &cVar11);
			}
			else
			{
				Global_1638223.f_93307[iVar43 /*11*/][iVar44 /*5*/][0] = 0f;
			}
			iVar45 = 0;
			while (iVar45 <= 3)
			{
				StringCopy(&cVar11, "trstp", 16);
				StringIntConCat(&cVar11, iVar43, 16);
				StringIntConCat(&cVar11, iVar44, 16);
				StringConCat(&cVar11, "n", 16);
				StringIntConCat(&cVar11, iVar45, 16);
				if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar11) == 5)
				{
					Global_1638223.f_93198[iVar43 /*27*/][iVar44 /*13*/][iVar45 /*3*/] = { unk_0xAB08124000EEAE30(iVar0, &cVar11) };
				}
				else
				{
					Global_1638223.f_93198[iVar43 /*27*/][iVar44 /*13*/][iVar45 /*3*/] = { 0f, 0f, 0f };
				}
				StringCopy(&cVar11, "trsth", 16);
				StringIntConCat(&cVar11, iVar43, 16);
				StringIntConCat(&cVar11, iVar44, 16);
				StringConCat(&cVar11, "n", 16);
				StringIntConCat(&cVar11, iVar45, 16);
				if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar11) == 3)
				{
					Global_1638223.f_93307[iVar43 /*11*/][iVar44 /*5*/][iVar45] = unk_0x22B34D863B5EB347(iVar0, &cVar11);
				}
				else
				{
					Global_1638223.f_93307[iVar43 /*11*/][iVar44 /*5*/][iVar45] = 0f;
				}
				iVar45++;
			}
			StringCopy(&cVar9, "trsrl", 8);
			StringIntConCat(&cVar9, iVar43, 8);
			StringIntConCat(&cVar9, iVar44, 8);
			if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 2)
			{
				Global_1638223.f_110210[iVar43 /*3*/][iVar44] = unk_0xE33C601C19270822(iVar0, &cVar9);
			}
			else
			{
				Global_1638223.f_110210[iVar43 /*3*/][iVar44] = 0;
			}
			iVar44++;
		}
		iVar46 = 0;
		while (iVar46 <= 3)
		{
			StringCopy(&cVar11, "iltt", 16);
			StringIntConCat(&cVar11, iVar43, 16);
			StringIntConCat(&cVar11, iVar46, 16);
			if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar11) == 2)
			{
				Global_1638223.f_112774[iVar43 /*5*/][iVar46] = unk_0xE33C601C19270822(iVar0, &cVar11);
			}
			else
			{
				Global_1638223.f_112774[iVar43 /*5*/][iVar46] = 0;
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
			if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 5)
			{
				Global_1638223.f_109782[iVar43 /*13*/][iVar44 /*3*/] = { unk_0xAB08124000EEAE30(iVar0, &cVar9) };
			}
			else
			{
				Global_1638223.f_109782[iVar43 /*13*/][iVar44 /*3*/] = { 0f, 0f, 0f };
			}
			StringCopy(&cVar9, "pvh", 8);
			StringIntConCat(&cVar9, iVar43, 8);
			if (iVar44 > 0)
			{
				StringIntConCat(&cVar9, iVar44, 8);
			}
			if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 3)
			{
				Global_1638223.f_109835[iVar43 /*5*/][iVar44] = unk_0x22B34D863B5EB347(iVar0, &cVar9);
			}
			else
			{
				Global_1638223.f_109835[iVar43 /*5*/][iVar44] = -1f;
			}
			iVar44++;
		}
		StringCopy(&cVar9, "tscpos", 8);
		if (iVar43 > 0)
		{
			StringIntConCat(&cVar9, iVar43, 8);
		}
		if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 5)
		{
			Global_1638223.f_109720[iVar43 /*3*/] = { unk_0xAB08124000EEAE30(iVar0, &cVar9) };
		}
		else
		{
			Global_1638223.f_109720[iVar43 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar9, "tscrot", 8);
		if (iVar43 > 0)
		{
			StringIntConCat(&cVar9, iVar43, 8);
		}
		if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 5)
		{
			Global_1638223.f_109733[iVar43 /*3*/] = { unk_0xAB08124000EEAE30(iVar0, &cVar9) };
		}
		else
		{
			Global_1638223.f_109733[iVar43 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar9, "tspos", 8);
		if (iVar43 > 0)
		{
			StringIntConCat(&cVar9, iVar43, 8);
		}
		if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 5)
		{
			Global_1638223.f_109746[iVar43 /*3*/] = { unk_0xAB08124000EEAE30(iVar0, &cVar9) };
		}
		else
		{
			Global_1638223.f_109746[iVar43 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar9, "tscfov", 8);
		if (iVar43 > 0)
		{
			StringIntConCat(&cVar9, iVar43, 8);
		}
		if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 3)
		{
			Global_1638223.f_109759[iVar43] = unk_0x22B34D863B5EB347(iVar0, &cVar9);
		}
		else
		{
			Global_1638223.f_109759[iVar43] = 45f;
		}
		StringCopy(&cVar9, "tshead", 8);
		if (iVar43 > 0)
		{
			StringIntConCat(&cVar9, iVar43, 8);
		}
		if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 3)
		{
			Global_1638223.f_109764[iVar43] = unk_0x22B34D863B5EB347(iVar0, &cVar9);
		}
		else
		{
			Global_1638223.f_109764[iVar43] = 0f;
		}
		iVar43++;
	}
	iVar2 = 0;
	while (iVar2 <= 17)
	{
		StringCopy(&cVar9, "pnid", 8);
		StringIntConCat(&cVar9, iVar2, 8);
		if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_1638223.f_107299[iVar2 /*18*/]), unk_0xD5EE6B924304F24C(iVar0, &cVar9), 64);
		}
		else
		{
			StringCopy(&(Global_1638223.f_107299[iVar2 /*18*/]), "", 64);
		}
		StringCopy(&cVar9, "pnlv", 8);
		StringIntConCat(&cVar9, iVar2, 8);
		if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 2)
		{
			Global_1638223.f_107299[iVar2 /*18*/].f_16 = unk_0xE33C601C19270822(iVar0, &cVar9);
		}
		else
		{
			Global_1638223.f_107299[iVar2 /*18*/].f_16 = 0;
		}
		StringCopy(&cVar9, "pnvr", 8);
		StringIntConCat(&cVar9, iVar2, 8);
		if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar9) == 2 && !unk_0x58478145CAF8429C(&(Global_1638223.f_107299[iVar2 /*18*/])))
		{
			Global_1638223.f_107299[iVar2 /*18*/].f_17 = unk_0xE33C601C19270822(iVar0, &cVar9);
		}
		else
		{
			Global_1638223.f_107299[iVar2 /*18*/].f_17 = -1;
		}
		iVar2++;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "cposr") == 3)
	{
		Global_1638223.f_110238 = unk_0x22B34D863B5EB347(iVar0, "cposr");
	}
	else
	{
		Global_1638223.f_110238 = 60f;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "cporv") == 3)
	{
		Global_1638223.f_110241 = unk_0x22B34D863B5EB347(iVar0, "cporv");
	}
	else
	{
		Global_1638223.f_110241 = -1f;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "bmbbp") == 2)
	{
		Global_1638223.f_110227 = unk_0xE33C601C19270822(iVar0, "bmbbp");
	}
	else
	{
		Global_1638223.f_110227 = 2;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "bmber") == 2)
	{
		Global_1638223.f_110228 = unk_0xE33C601C19270822(iVar0, "bmber");
	}
	else
	{
		Global_1638223.f_110228 = 2;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "bmbet") == 2)
	{
		Global_1638223.f_110229 = unk_0xE33C601C19270822(iVar0, "bmbet");
	}
	else
	{
		Global_1638223.f_110229 = 3000;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "bmbsi") == 2)
	{
		Global_1638223.f_110230 = unk_0xE33C601C19270822(iVar0, "bmbsi");
	}
	else
	{
		Global_1638223.f_110230 = 150;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "bmbdi") == 3)
	{
		Global_1638223.f_110231 = unk_0x22B34D863B5EB347(iVar0, "bmbdi");
	}
	else
	{
		Global_1638223.f_110231 = 3f;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "bmbio") == 3)
	{
		Global_1638223.f_110232 = unk_0x22B34D863B5EB347(iVar0, "bmbio");
	}
	else
	{
		Global_1638223.f_110232 = 1f;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "fvjhdt") == 2)
	{
		Global_1638223.f_110233 = unk_0xE33C601C19270822(iVar0, "fvjhdt");
	}
	else
	{
		Global_1638223.f_110233 = 25;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "fvjhmd") == 2)
	{
		Global_1638223.f_110234 = unk_0xE33C601C19270822(iVar0, "fvjhmd");
	}
	else
	{
		Global_1638223.f_110234 = 5;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "fvjfvd") == 2)
	{
		Global_1638223.f_110235 = unk_0xE33C601C19270822(iVar0, "fvjfvd");
	}
	else
	{
		Global_1638223.f_110235 = 5;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "fvjfvc") == 2)
	{
		Global_1638223.f_110236 = unk_0xE33C601C19270822(iVar0, "fvjfvc");
	}
	else
	{
		Global_1638223.f_110236 = 2;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "cpopr") == 3)
	{
		Global_1638223.f_110239 = unk_0x22B34D863B5EB347(iVar0, "cpopr");
	}
	else
	{
		Global_1638223.f_110239 = 5f;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "cpohr") == 3)
	{
		Global_1638223.f_110240 = unk_0x22B34D863B5EB347(iVar0, "cpohr");
	}
	else
	{
		Global_1638223.f_110240 = 60f;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "bevhtd") == 3)
	{
		Global_1638223.f_44831 = unk_0x22B34D863B5EB347(iVar0, "bevhtd");
	}
	else
	{
		Global_1638223.f_44831 = 0.075f;
	}
	iVar2 = 0;
	while (iVar2 <= 9)
	{
		StringCopy(&cVar11, "fsclv", 16);
		StringIntConCat(&cVar11, iVar2, 16);
		if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar11) == 5)
		{
			Global_1638223.f_44834[iVar2 /*3*/] = { unk_0xAB08124000EEAE30(iVar0, &cVar11) };
		}
		else
		{
			Global_1638223.f_44834[iVar2 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar11, "fsclr", 16);
		StringIntConCat(&cVar11, iVar2, 16);
		if (unk_0x7ADD5F9CC9AA2359(iVar0, &cVar11) == 5)
		{
			Global_1638223.f_44865[iVar2 /*3*/] = { unk_0xAB08124000EEAE30(iVar0, &cVar11) };
		}
		else
		{
			Global_1638223.f_44865[iVar2 /*3*/] = { 0f, 0f, 0f };
		}
		iVar2++;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "bevhdd") == 3)
	{
		Global_1638223.f_110240 = unk_0x22B34D863B5EB347(iVar0, "bevhdd");
	}
	else
	{
		Global_1638223.f_110240 = 0.075f;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "ratc0") == 2)
	{
		Global_1638223.f_110242 = unk_0xE33C601C19270822(iVar0, "ratc0");
	}
	else
	{
		Global_1638223.f_110242 = 0;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "ratc1") == 2)
	{
		Global_1638223.f_110243 = unk_0xE33C601C19270822(iVar0, "ratc1");
	}
	else
	{
		Global_1638223.f_110243 = 0;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "ratc2") == 2)
	{
		Global_1638223.f_110244 = unk_0xE33C601C19270822(iVar0, "ratc2");
	}
	else
	{
		Global_1638223.f_110244 = 0;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "ratc3") == 2)
	{
		Global_1638223.f_110245 = unk_0xE33C601C19270822(iVar0, "ratc3");
	}
	else
	{
		Global_1638223.f_110245 = 0;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "ratc4") == 2)
	{
		Global_1638223.f_110246 = unk_0xE33C601C19270822(iVar0, "ratc4");
	}
	else
	{
		Global_1638223.f_110246 = 0;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "ratc5") == 2)
	{
		Global_1638223.f_110247 = unk_0xE33C601C19270822(iVar0, "ratc5");
	}
	else
	{
		Global_1638223.f_110247 = 0;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "ratc6") == 2)
	{
		Global_1638223.f_110248 = unk_0xE33C601C19270822(iVar0, "ratc6");
	}
	else
	{
		Global_1638223.f_110248 = 0;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "ratc9") == 2)
	{
		Global_1638223.f_110252 = unk_0xE33C601C19270822(iVar0, "ratc9");
	}
	else
	{
		Global_1638223.f_110252 = 0;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "ratc7") == 2)
	{
		Global_1638223.f_110250 = unk_0xE33C601C19270822(iVar0, "ratc7");
	}
	else
	{
		Global_1638223.f_110250 = 0;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "ratc8") == 2)
	{
		Global_1638223.f_110251 = unk_0xE33C601C19270822(iVar0, "ratc8");
	}
	else
	{
		Global_1638223.f_110251 = 0;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "ratcm") == 3)
	{
		Global_1638223.f_110249 = unk_0x22B34D863B5EB347(iVar0, "ratcm");
	}
	else
	{
		Global_1638223.f_110249 = -1f;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "cdrt") == 3)
	{
		Global_1638223.f_110254 = unk_0x22B34D863B5EB347(iVar0, "cdrt");
	}
	else
	{
		Global_1638223.f_110254 = -1f;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "csttl") == 4)
	{
		StringCopy(&(Global_1638223.f_110255), unk_0xD5EE6B924304F24C(iVar0, "csttl"), 16);
	}
	else
	{
		StringCopy(&(Global_1638223.f_110255), "", 16);
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "csstl") == 4)
	{
		StringCopy(&(Global_1638223.f_110259), unk_0xD5EE6B924304F24C(iVar0, "csstl"), 16);
	}
	else
	{
		StringCopy(&(Global_1638223.f_110259), "", 16);
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "csttl2") == 4)
	{
		StringCopy(&(Global_1638223.f_110263), unk_0xD5EE6B924304F24C(iVar0, "csttl2"), 16);
	}
	else
	{
		StringCopy(&(Global_1638223.f_110263), "", 16);
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "csstl2") == 4)
	{
		StringCopy(&(Global_1638223.f_110267), unk_0xD5EE6B924304F24C(iVar0, "csstl2"), 16);
	}
	else
	{
		StringCopy(&(Global_1638223.f_110267), "", 16);
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "csttl3") == 4)
	{
		StringCopy(&(Global_1638223.f_110271), unk_0xD5EE6B924304F24C(iVar0, "csttl3"), 16);
	}
	else
	{
		StringCopy(&(Global_1638223.f_110271), "", 16);
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "csstl3") == 4)
	{
		StringCopy(&(Global_1638223.f_110275), unk_0xD5EE6B924304F24C(iVar0, "csstl3"), 16);
	}
	else
	{
		StringCopy(&(Global_1638223.f_110275), "", 16);
	}
	func_212();
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "ssdsp") == 5)
	{
		Global_1638223.f_112725 = { unk_0xAB08124000EEAE30(iVar0, "ssdsp") };
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "ssdsr") == 3)
	{
		Global_1638223.f_112728 = unk_0x22B34D863B5EB347(iVar0, "ssdsr");
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "ssder") == 3)
	{
		Global_1638223.f_112729 = unk_0x22B34D863B5EB347(iVar0, "ssder");
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "ssdst") == 2)
	{
		Global_1638223.f_112730 = unk_0xE33C601C19270822(iVar0, "ssdst");
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "ssdtg") == 2)
	{
		Global_1638223.f_112731 = unk_0xE33C601C19270822(iVar0, "ssdtg");
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "vwp0") == 2)
	{
		Global_1638223.f_112892 = unk_0xE33C601C19270822(iVar0, "vwp0");
	}
	else
	{
		Global_1638223.f_112892 = 0;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "vwp1") == 2)
	{
		Global_1638223.f_112893 = unk_0xE33C601C19270822(iVar0, "vwp1");
	}
	else
	{
		Global_1638223.f_112893 = 0;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "vwp2") == 2)
	{
		Global_1638223.f_112895 = unk_0xE33C601C19270822(iVar0, "vwp2");
	}
	else
	{
		Global_1638223.f_112895 = 0;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "vwp3") == 2)
	{
		Global_1638223.f_112896 = unk_0xE33C601C19270822(iVar0, "vwp3");
	}
	else
	{
		Global_1638223.f_112896 = 0;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "vwp4") == 2)
	{
		Global_1638223.f_112897 = unk_0xE33C601C19270822(iVar0, "vwp4");
	}
	else
	{
		Global_1638223.f_112897 = 0;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "vwp5") == 2)
	{
		Global_1638223.f_112894 = unk_0xE33C601C19270822(iVar0, "vwp5");
	}
	else
	{
		Global_1638223.f_112894 = 0;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "vwp15") == 2)
	{
		Global_1638223.f_112899 = unk_0xE33C601C19270822(iVar0, "vwp15");
	}
	else
	{
		Global_1638223.f_112899 = 0;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "vwp16") == 2)
	{
		Global_1638223.f_112900 = unk_0xE33C601C19270822(iVar0, "vwp16");
	}
	else
	{
		Global_1638223.f_112900 = 0;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "vwpbhd") == 2)
	{
		Global_1638223.f_112898 = unk_0xE33C601C19270822(iVar0, "vwpbhd");
	}
	else
	{
		Global_1638223.f_112898 = 0;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "vwprbs") == 2)
	{
		Global_1638223.f_112904 = unk_0xE33C601C19270822(iVar0, "vwprbs");
	}
	else
	{
		Global_1638223.f_112904 = 0;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "vwmgfr") == 2)
	{
		Global_1638223.f_112922 = unk_0xE33C601C19270822(iVar0, "vwmgfr");
	}
	else
	{
		Global_1638223.f_112922 = 5;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "vwmgda") == 2)
	{
		Global_1638223.f_112923 = unk_0xE33C601C19270822(iVar0, "vwmgda");
	}
	else
	{
		Global_1638223.f_112923 = 350;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "vwmgnb") == 2)
	{
		Global_1638223.f_112924 = unk_0xE33C601C19270822(iVar0, "vwmgnb");
	}
	else
	{
		Global_1638223.f_112924 = 100;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "crttn") == 2)
	{
		Global_1638223.f_112925 = unk_0xE33C601C19270822(iVar0, "crttn");
	}
	else
	{
		Global_1638223.f_112925 = 0;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "smoc") == 2)
	{
		Global_1638223.f_44833 = unk_0xE33C601C19270822(iVar0, "smoc");
	}
	else
	{
		Global_1638223.f_44833 = -1;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "vrsp") == 2)
	{
		Global_1638223.f_113294 = unk_0xE33C601C19270822(iVar0, "vrsp");
	}
	else
	{
		Global_1638223.f_113294 = -1;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "otrds") == 2)
	{
		Global_1638223.f_113283 = unk_0xE33C601C19270822(iVar0, "otrds");
	}
	else
	{
		Global_1638223.f_113283 = -1;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "otsdr") == 2)
	{
		Global_1638223.f_113285 = unk_0xE33C601C19270822(iVar0, "otsdr");
	}
	else
	{
		Global_1638223.f_113285 = -1;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "otrsc") == 2)
	{
		Global_1638223.f_113286 = unk_0xE33C601C19270822(iVar0, "otrsc");
	}
	else
	{
		Global_1638223.f_113286 = 0;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "otrpc") == 2)
	{
		Global_1638223.f_113284 = unk_0xE33C601C19270822(iVar0, "otrpc");
	}
	else
	{
		Global_1638223.f_113284 = 0;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "mocb1") == 2)
	{
		Global_1638223.f_113289 = unk_0xE33C601C19270822(iVar0, "mocb1");
	}
	else
	{
		Global_1638223.f_113289 = 0;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "mocb2") == 2)
	{
		Global_1638223.f_113289.f_1 = unk_0xE33C601C19270822(iVar0, "mocb2");
	}
	else
	{
		Global_1638223.f_113289.f_1 = 0;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "mocb3") == 2)
	{
		Global_1638223.f_113289.f_2 = unk_0xE33C601C19270822(iVar0, "mocb3");
	}
	else
	{
		Global_1638223.f_113289.f_2 = 0;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "moccc") == 2)
	{
		Global_1638223.f_113289.f_3 = unk_0xE33C601C19270822(iVar0, "moccc");
	}
	else
	{
		Global_1638223.f_113289.f_3 = 0;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "mocbs") == 2)
	{
		Global_1638223.f_113289.f_4 = unk_0xE33C601C19270822(iVar0, "mocbs");
	}
	else
	{
		Global_1638223.f_113289.f_4 = 0;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "vwprbs") == 2)
	{
		Global_1638223.f_112904 = unk_0xE33C601C19270822(iVar0, "vwprbs");
	}
	else
	{
		Global_1638223.f_112904 = 0;
	}
	Global_1638223.f_112915 = { unk_0xAB08124000EEAE30(iVar0, "vtwsp") };
	Global_1638223.f_112918 = { unk_0xAB08124000EEAE30(iVar0, "vtwsr") };
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "tsc3") == 3)
	{
		Global_1638223.f_112901 = unk_0x22B34D863B5EB347(iVar0, "tsc3");
	}
	else
	{
		Global_1638223.f_112901 = 0f;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "tsc4") == 3)
	{
		Global_1638223.f_112902 = unk_0x22B34D863B5EB347(iVar0, "tsc4");
	}
	else
	{
		Global_1638223.f_112902 = 0f;
	}
	if (unk_0x7ADD5F9CC9AA2359(iVar0, "csstd") == 2)
	{
		Global_1638223.f_112903 = unk_0xE33C601C19270822(iVar0, "csstd");
	}
	else
	{
		Global_1638223.f_112903 = -1;
	}
}

void func_212()
{
	Global_1638223.f_112725 = { 0f, 0f, 0f };
	Global_1638223.f_112728 = 30f;
	Global_1638223.f_112729 = 5f;
	Global_1638223.f_112730 = 30000;
	Global_1638223.f_112731 = 15000;
}

int func_213(int iParam0)
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
		iVar5 = unk_0x7C214DA899F05536(iVar0);
		if ((unk_0x885F483F34E47503(iVar5) && unk_0x76BCE6C7B20502DA(iVar5)) && iVar5 != unk_0x0FFED3E94261A832())
		{
			iVar2 = iVar5;
			if ((!func_214(iVar5) && Global_1592456[iVar2 /*635*/].f_204 != 8) && !unk_0xAA4F14DA15DB0B51(Global_1592456[iVar2 /*635*/].f_39.f_18, 14))
			{
				if (Global_1592456[iVar2 /*635*/].f_97.f_28 != -1)
				{
					unk_0xF6082E2ADA1C795B(&uVar1, Global_1592456[iVar2 /*635*/].f_97.f_28);
					if (Global_1592456[iVar2 /*635*/].f_97.f_28 >= iParam0 && iVar2 < unk_0x0FFED3E94261A832())
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
		if (!unk_0xAA4F14DA15DB0B51(uVar1, iVar0))
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

bool func_214(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[iParam0 /*635*/].f_97.f_32, 5);
}

var func_215()
{
	return Global_1752418.f_3;
}

int func_216()
{
	if (unk_0x1B154DE2D4606530())
	{
		return func_218();
	}
	return func_217(Global_1638223.f_93532);
}

int func_217(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_5059[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_218()
{
	return Global_2445217.f_12;
}

int func_219()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x7C214DA899F05536(iVar0);
		if ((((unk_0x885F483F34E47503(iVar2) && unk_0x76BCE6C7B20502DA(iVar2)) && !func_214(iVar2)) && Global_1592456[iVar2 /*635*/].f_204 != 8) && !unk_0xAA4F14DA15DB0B51(Global_1592456[iVar2 /*635*/].f_39.f_18, 14))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_220()
{
	return unk_0xAA4F14DA15DB0B51(Global_2445217.f_549.f_1, 0);
}

var func_221()
{
	return unk_0x91D2F083AE17E209("CREATOR_NO_T");
}

bool func_222()
{
	return unk_0xAA4F14DA15DB0B51(Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_140, 0);
}

int func_223(int iParam0)
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
			return 29;
		
		default:
	}
	return 0;
}

void func_224()
{
	if (func_225())
	{
		Global_2453064.f_8 = 1;
	}
	Global_2453064.f_7 = 1;
}

bool func_225()
{
	return unk_0xAA4F14DA15DB0B51(Global_2445217.f_2, 11);
}

int func_226(int iParam0)
{
	if (unk_0xCF690C88B391CFA3() || (unk_0x429A1F8C699BEE23() && iParam0 == 0))
	{
		if (unk_0xE061CABF3B012AFB(1) == 0 || unk_0x8419EC950557907F(1, -1) == 0)
		{
			return 0;
		}
	}
	else if (unk_0xE061CABF3B012AFB(1) == 0)
	{
		return 0;
	}
	if (func_227() == 0)
	{
		return 0;
	}
	return 1;
}

int func_227()
{
	if (unk_0xCF690C88B391CFA3() && unk_0x891AE2B743A4DAE9())
	{
		return 1;
	}
	if (unk_0xC1A8588DDF7A118E() && unk_0x891AE2B743A4DAE9())
	{
		return 1;
	}
	if ((unk_0x429A1F8C699BEE23() && unk_0x292CEA5DDB79B80A() == 0) && unk_0x891AE2B743A4DAE9())
	{
		return 1;
	}
	if (unk_0x97FFE0491AC179A2() && unk_0x891AE2B743A4DAE9())
	{
		return 1;
	}
	if (unk_0x5018862FF5D9F844() && unk_0x891AE2B743A4DAE9())
	{
		return 1;
	}
	return 0;
}

int func_228(int iParam0)
{
	if (unk_0xCF690C88B391CFA3() || (unk_0x429A1F8C699BEE23() && iParam0 == 0))
	{
		if (unk_0xE061CABF3B012AFB(0) == 0 || unk_0x8419EC950557907F(0, -1) == 0)
		{
			return 0;
		}
	}
	else if (unk_0xE061CABF3B012AFB(0) == 0)
	{
		return 0;
	}
	if (func_227() == 0)
	{
		return 0;
	}
	return 1;
}

void func_229(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	Global_1638223.f_94172 = 0;
	if (bParam0)
	{
		if (((!func_158() || func_241() == 36) || func_241() == 39) || func_241() == 34)
		{
			Global_1638223.f_93532 = 0;
			Global_1638223.f_107860 = 2;
		}
		Global_1638223.f_65265 = -1;
		Global_1638223.f_11 = 0;
		Global_1638223.f_12 = 0;
		Global_1638223.f_13 = 0;
		Global_1638223.f_14 = 0;
		Global_1638223.f_15 = 0;
		Global_1638223.f_16 = 0;
		Global_1638223.f_17 = 0;
		Global_1638223.f_18 = 0;
		Global_1638223.f_19 = 0;
		Global_1638223.f_20 = 0;
		Global_1638223.f_21 = 0;
		Global_1638223.f_22 = 0;
		Global_1638223.f_23 = 0;
		Global_1638223.f_24 = 0;
		Global_1638223.f_25 = 0;
		Global_1638223.f_93 = 0;
		Global_1638223.f_107650 = 0;
		Global_1638223.f_10 = 0;
		Global_1638223.f_27 = 0;
		Global_1638223.f_52 = 0;
		Global_1638223.f_29 = 0;
		Global_1638223.f_51 = 0;
		Global_1638223.f_53 = 0;
		Global_1638223.f_54 = 0;
		Global_1638223.f_56 = 0;
		Global_1638223.f_57 = 0;
		Global_1638223.f_58 = 0;
		Global_1638223.f_59 = 0;
		Global_1638223.f_31 = 0;
		Global_1638223.f_32 = 1;
		Global_1638223.f_6 = 0;
		Global_1638223.f_47 = 0;
		Global_1638223.f_112852 = 10;
		Global_1638223.f_112853 = 5f;
		Global_1638223.f_112854 = 10;
		Global_1638223.f_50 = 1;
		Global_1638223.f_28 = 0;
		Global_1638223.f_94149 = 0;
		Global_1638223.f_94152 = 0;
		Global_1638223.f_94151 = 0;
		Global_1638223.f_94148 = 0;
		Global_1638223.f_112816 = 0;
		if (bParam1)
		{
			Global_1638223.f_4 = 0;
			Global_1638223.f_5 = 0;
		}
		Global_1638223.f_3 = 0;
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			Global_1638223.f_37769[iVar0 /*38*/] = -1;
			Global_1638223.f_37769[iVar0 /*38*/].f_1 = -1;
			Global_1638223.f_37769[iVar0 /*38*/].f_2 = 0;
			Global_1638223.f_37769[iVar0 /*38*/].f_3 = 0;
			iVar3 = 0;
			while (iVar3 <= 1)
			{
				StringCopy(&(Global_1638223.f_37769[iVar0 /*38*/].f_4[iVar3 /*16*/]), "", 64);
				iVar3++;
			}
			Global_1638223.f_37769[iVar0 /*38*/].f_37 = 0;
			iVar0++;
		}
		Global_1638223.f_94153 = 0;
		Global_1638223.f_94154 = 0;
		Global_1638223.f_94155 = 0;
		Global_1638223.f_94144 = -1;
		Global_1638223.f_94143 = 0;
		Global_1638223.f_63 = 0;
		Global_1638223.f_71 = { 0f, 0f, 0f };
		Global_1638223.f_74 = { 0f, 0f, 0f };
		Global_1638223.f_77 = { 0f, 0f, 0f };
		Global_1638223.f_80 = { 0f, 0f, 0f };
		Global_1638223.f_83 = { 0f, 0f, 0f };
		Global_1638223.f_86 = { 0f, 0f, 0f };
		Global_1638223.f_89 = 0f;
		Global_1638223.f_90 = 0f;
		Global_1638223.f_93507 = 0f;
		Global_1638223.f_92 = 0;
		Global_1638223.f_94171 = 0;
		Global_1638223.f_112805 = 0;
		Global_1638223.f_107862 = 0;
		iVar0 = 0;
		while (iVar0 <= 15)
		{
			Global_1638223.f_44273[iVar0] = 0;
			Global_1638223.f_44256[iVar0] = 0;
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		StringCopy(&(Global_1638223.f_112932[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1638223.f_98036[iVar0] = 0;
		Global_1638223.f_98043[iVar0] = -1;
		iVar0++;
	}
	Global_1638223.f_98050 = 0;
	Global_1638223.f_98051 = -1;
	Global_1638223.f_1 = -1;
	StringCopy(&(Global_1638223.f_93857), "", 24);
	iVar0 = 0;
	while (iVar0 <= 35)
	{
		StringCopy(&(Global_1638223.f_97640[iVar0 /*8*/]), "", 32);
		iVar0++;
	}
	Global_1638223.f_109716 = 0;
	Global_1638223.f_46 = 0;
	Global_1638223.f_65 = { 0f, 0f, 0f };
	Global_1638223.f_107861 = -1;
	Global_1638223.f_94150 = 0f;
	StringCopy(&(Global_1638223.f_93539), "", 64);
	StringCopy(&(Global_1638223.f_93841), "", 64);
	if (bParam2)
	{
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			StringCopy(&(Global_1638223.f_93825[iVar0 /*6*/]), "", 24);
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		StringCopy(&(Global_1638223.f_93561[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	func_240();
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		StringCopy(&(Global_1638223.f_37769[0 /*38*/].f_4[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	func_239();
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1638223.f_39[iVar0] = 0;
		Global_1638223.f_107624[iVar0] = 0;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1638223.f_107629[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		Global_1638223.f_34[iVar0] = 1;
		Global_1638223.f_93073[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1638223.f_93086[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1638223.f_93099[iVar0] = 0f;
		Global_1638223.f_109720[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1638223.f_109733[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1638223.f_109746[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1638223.f_109759[iVar0] = 45f;
		Global_1638223.f_109764[iVar0] = 0f;
		Global_1638223.f_89044[iVar0] = -1;
		StringCopy(&(Global_1638223.f_110075[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_1638223.f_110140[iVar0 /*16*/]), "", 64);
		Global_1638223.f_110205[iVar0] = 0;
		StringCopy(&(Global_1638223.f_109877[iVar0 /*16*/]), "", 64);
		Global_1638223.f_98090[iVar0] = -1;
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			StringCopy(&(Global_1638223.f_109942[iVar0 /*33*/][iVar1 /*16*/]), "", 64);
			iVar1++;
		}
		Global_1638223.f_38612[iVar0] = -1;
		Global_1638223.f_38617[iVar0] = -1;
		StringCopy(&(Global_1638223.f_112733[iVar0 /*4*/]), "", 16);
		StringCopy(&(Global_1638223.f_112750[iVar0 /*4*/]), "", 16);
		Global_1638223.f_112767[iVar0] = 0;
		Global_1638223.f_112798[iVar0] = 0;
		iVar0++;
	}
	Global_1638223.f_112840 = 0;
	Global_1638223.f_112839 = 0;
	Global_1638223.f_112841 = 0;
	Global_1638223.f_112842 = 1;
	Global_1638223.f_112843 = 2;
	Global_1638223.f_112844 = 3;
	Global_1638223.f_112845 = 4;
	Global_1638223.f_112846 = 6;
	Global_1638223.f_112847 = 7;
	Global_1638223.f_112848 = 9;
	Global_1638223.f_112849 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1638223.f_112905[iVar0] = 0;
		Global_1638223.f_112910[iVar0] = 0;
		iVar0++;
	}
	Global_1638223.f_112856 = 5;
	Global_1638223.f_112855 = 0;
	Global_1638223.f_112851 = 3;
	Global_1638223.f_112927 = 5000;
	Global_1638223.f_112928 = 2500;
	Global_1638223.f_112929 = 3000;
	Global_1638223.f_109769 = { 0f, 0f, 0f };
	Global_1638223.f_109772 = { 0f, 0f, 0f };
	Global_1638223.f_109775 = { 0f, 0f, 0f };
	Global_1638223.f_109778 = 45f;
	Global_1638223.f_109779 = 0f;
	Global_1638223.f_109780 = 0;
	Global_1638223.f_110223 = 10000;
	Global_1638223.f_110237 = 1;
	Global_1638223.f_110224 = 1f;
	Global_1638223.f_112890 = 1;
	Global_1638223.f_112891 = 0;
	Global_1638223.f_110225 = 0f;
	Global_1638223.f_110238 = 60f;
	Global_1638223.f_110239 = 5f;
	Global_1638223.f_110240 = 60f;
	Global_1638223.f_110241 = -1f;
	Global_1638223.f_110227 = 2;
	Global_1638223.f_110228 = 2;
	Global_1638223.f_110229 = 3000;
	Global_1638223.f_110230 = 150;
	Global_1638223.f_110231 = 3f;
	Global_1638223.f_110232 = 1f;
	Global_1638223.f_110233 = 25;
	Global_1638223.f_110234 = 5;
	Global_1638223.f_110235 = 5;
	Global_1638223.f_110236 = 2000;
	Global_1638223.f_110254 = -1f;
	StringCopy(&(Global_1638223.f_110255), "", 16);
	StringCopy(&(Global_1638223.f_110259), "", 16);
	StringCopy(&(Global_1638223.f_110263), "", 16);
	StringCopy(&(Global_1638223.f_110267), "", 16);
	StringCopy(&(Global_1638223.f_110271), "", 16);
	StringCopy(&(Global_1638223.f_110275), "", 16);
	Global_1638223.f_44831 = 0.075f;
	Global_1638223.f_44832 = 0.075f;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		Global_1638223.f_44834[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1638223.f_44865[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
	Global_1638223.f_110242 = 0;
	Global_1638223.f_110251 = 0;
	Global_1638223.f_110243 = 0;
	Global_1638223.f_110244 = 0;
	Global_1638223.f_110245 = 0;
	Global_1638223.f_110246 = 0;
	Global_1638223.f_110247 = 0;
	Global_1638223.f_110248 = 0;
	Global_1638223.f_110252 = 0;
	Global_1638223.f_110249 = -1f;
	Global_1638223.f_110250 = 0;
	Global_1638223.f_110253 = 0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		StringCopy(&(Global_1638223.f_83809[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_1638223.f_83890[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_1638223.f_83971[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		StringCopy(&(Global_1638223.f_84105[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		func_237(&(Global_1638223.f_98095[iVar0 /*1316*/]));
		func_235(&(Global_1638223.f_104676[iVar0 /*434*/]));
		iVar0++;
	}
	func_235(&(Global_1638223.f_106847));
	iVar0 = 0;
	while (iVar0 <= 24)
	{
		Global_1638223.f_107758[iVar0 /*4*/].f_3 = 0;
		Global_1638223.f_107758[iVar0 /*4*/] = { 0f, 0f, 0f };
		iVar0++;
	}
	Global_1638223.f_107859 = 0;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_1638223.f_65201[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
	Global_1638223.f_65262 = 0;
	iVar0 = 0;
	while (iVar0 <= 68)
	{
		func_192(&(Global_1638223.f_94189[iVar0 /*50*/]), iVar0);
		iVar0++;
	}
	Global_1638223.f_97929[0] = 0;
	Global_1638223.f_97929[1] = 0;
	Global_1638223.f_97933 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		func_234(&(Global_1638223.f_107656[iVar0 /*10*/]));
		iVar0++;
	}
	Global_1638223.f_112772 = 0;
	Global_1638223.f_2 = 0;
	Global_1638223.f_94124 = 0;
	Global_1638223.f_107650 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1638223.f_94157[iVar0] = -1;
		Global_1638223.f_107863[iVar0] = -1;
		iVar0++;
	}
	Global_1638223.f_112773 = 0;
	Global_1638223.f_112732 = 0;
	Global_1638223.f_112795 = 0;
	Global_1638223.f_112797 = 0;
	Global_1638223.f_94187 = 0;
	Global_1638223.f_94188 = 0;
	Global_1638223.f_107902 = 0.5f;
	Global_1638223.f_97947 = 1;
	Global_1638223.f_97949 = 5;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_1638223.f_107903[iVar0] = 0f;
		Global_1638223.f_107924[iVar0] = 0f;
		Global_1638223.f_107945[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1638223.f_44910[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1638223.f_44958[iVar0] = -1;
		iVar0++;
	}
	Global_1636978 = 0;
	Global_1638223.f_7 = 0;
	Global_1638223.f_94130 = 0;
	Global_1638223.f_36973 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1638223.f_88743)
	{
		Global_1638223.f_88743[iVar0 /*5*/] = { 0f, 0f, 0f };
		Global_1638223.f_88743[iVar0 /*5*/].f_3 = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1638223.f_37733[iVar0 /*3*/][0] = 0;
		Global_1638223.f_37733[iVar0 /*3*/][1] = 0;
		Global_1638223.f_37720[iVar0 /*3*/][0] = 0;
		Global_1638223.f_37720[iVar0 /*3*/][1] = 0;
		Global_1638223.f_37746[iVar0 /*3*/][0] = 0;
		Global_1638223.f_37746[iVar0 /*3*/][1] = 0;
		Global_1638223.f_37759[iVar0] = 0;
		Global_1638223.f_37764[iVar0] = 0;
		iVar1 = 0;
		while (iVar1 <= 12)
		{
			Global_1638223.f_97974[iVar0 /*14*/][iVar1] = 0;
			iVar1++;
		}
		Global_1638223.f_98067[iVar0 /*2*/][0] = 0;
		Global_1638223.f_98081[iVar0 /*2*/][0] = 0;
		Global_1638223.f_94[iVar0 /*9207*/] = { 0f, 0f, 0f };
		Global_1638223.f_94[iVar0 /*9207*/].f_4 = { 0f, 0f, 0f };
		Global_1638223.f_94[iVar0 /*9207*/].f_7 = { 0f, 0f, 0f };
		Global_1638223.f_94[iVar0 /*9207*/].f_11 = { 0f, 0f, 0f };
		Global_1638223.f_94[iVar0 /*9207*/].f_14 = 0;
		Global_1638223.f_94[iVar0 /*9207*/].f_15 = { 0f, 0f, 0f };
		Global_1638223.f_94[iVar0 /*9207*/].f_18 = 0;
		Global_1638223.f_94[iVar0 /*9207*/].f_19 = { 0f, 0f, 0f };
		Global_1638223.f_94[iVar0 /*9207*/].f_22 = -1;
		Global_1638223.f_94[iVar0 /*9207*/].f_23 = 0;
		Global_1638223.f_94[iVar0 /*9207*/].f_38 = 0;
		Global_1638223.f_94[iVar0 /*9207*/].f_24 = -1;
		Global_1638223.f_94[iVar0 /*9207*/].f_25 = -1;
		Global_1638223.f_94[iVar0 /*9207*/].f_26 = -1;
		Global_1638223.f_94[iVar0 /*9207*/].f_27 = -1;
		Global_1638223.f_94[iVar0 /*9207*/].f_28 = -1;
		Global_1638223.f_94[iVar0 /*9207*/].f_29 = -1;
		Global_1638223.f_94[iVar0 /*9207*/].f_30 = -1;
		Global_1638223.f_94[iVar0 /*9207*/].f_31 = -1;
		Global_1638223.f_94[iVar0 /*9207*/].f_32 = -1;
		Global_1638223.f_94[iVar0 /*9207*/].f_33 = -1;
		Global_1638223.f_94[iVar0 /*9207*/].f_34 = 0;
		Global_1638223.f_94[iVar0 /*9207*/].f_35 = 0;
		Global_1638223.f_94[iVar0 /*9207*/].f_36 = 0;
		Global_1638223.f_94[iVar0 /*9207*/].f_59 = -1;
		Global_1638223.f_94[iVar0 /*9207*/].f_3705 = 0;
		Global_1638223.f_94[iVar0 /*9207*/].f_3707 = 0;
		Global_1638223.f_94[iVar0 /*9207*/].f_3746 = 0;
		Global_1638223.f_94[iVar0 /*9207*/].f_3819 = 0;
		Global_1638223.f_94[iVar0 /*9207*/].f_4938 = 0;
		Global_1638223.f_94[iVar0 /*9207*/].f_3706 = 0;
		Global_1638223.f_94[iVar0 /*9207*/].f_3708 = 0;
		Global_1638223.f_94[iVar0 /*9207*/].f_4939 = 0;
		Global_1638223.f_94[iVar0 /*9207*/].f_61 = 0;
		Global_1638223.f_94[iVar0 /*9207*/].f_62 = 0;
		Global_1638223.f_94[iVar0 /*9207*/].f_63 = 0;
		Global_1638223.f_94[iVar0 /*9207*/].f_209 = 0;
		Global_1638223.f_94[iVar0 /*9207*/].f_210 = 0;
		Global_1638223.f_94[iVar0 /*9207*/].f_211 = 0;
		Global_1638223.f_94[iVar0 /*9207*/].f_356 = 0;
		Global_1638223.f_94[iVar0 /*9207*/].f_357 = 0;
		Global_1638223.f_94[iVar0 /*9207*/].f_358 = 0;
		Global_1638223.f_94[iVar0 /*9207*/].f_4940 = 0;
		Global_1638223.f_94[iVar0 /*9207*/].f_57 = 0;
		Global_1638223.f_94[iVar0 /*9207*/].f_58 = 0;
		Global_1638223.f_94[iVar0 /*9207*/].f_3333 = 60000;
		Global_1638223.f_94[iVar0 /*9207*/].f_3559 = 60000;
		Global_1638223.f_94[iVar0 /*9207*/].f_4406 = 0;
		Global_1638223.f_94[iVar0 /*9207*/].f_585 = 0;
		Global_1638223.f_94[iVar0 /*9207*/].f_586 = 0;
		Global_1638223.f_94[iVar0 /*9207*/].f_8801 = -1;
		Global_1638223.f_94[iVar0 /*9207*/].f_8802 = -1;
		Global_1638223.f_94[iVar0 /*9207*/].f_8803 = 1;
		Global_1638223.f_94[iVar0 /*9207*/].f_3339 = 0;
		Global_1638223.f_94[iVar0 /*9207*/].f_3340 = 0;
		iVar1 = 0;
		while (iVar1 <= 16)
		{
			Global_1638223.f_94[iVar0 /*9207*/].f_3341[iVar1] = -1;
			Global_1638223.f_94[iVar0 /*9207*/].f_3359[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_3377[iVar1] = -1;
			Global_1638223.f_94[iVar0 /*9207*/].f_3395[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_3431[iVar1] = 4;
			Global_1638223.f_94[iVar0 /*9207*/].f_3449[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_3485[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_3503[iVar1] = -1;
			Global_1638223.f_94[iVar0 /*9207*/].f_3521[iVar1] = 10;
			Global_1638223.f_94[iVar0 /*9207*/].f_3539[iVar1] = 10;
			Global_1638223.f_94[iVar0 /*9207*/].f_3467[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_3413[iVar1] = -1;
			Global_1638223.f_94[iVar0 /*9207*/].f_8948[iVar1] = 10;
			Global_1638223.f_94[iVar0 /*9207*/].f_8966[iVar1] = 10;
			iVar1++;
		}
		Global_1638223.f_36923[iVar0] = 0;
		Global_1638223.f_36928[iVar0] = 0;
		Global_1638223.f_36933[iVar0] = -1;
		Global_1638223.f_36979[iVar0] = 0;
		StringCopy(&(Global_1638223.f_36984[iVar0 /*4*/]), "", 16);
		Global_1638223.f_37006[iVar0] = 3;
		Global_1638223.f_37011[iVar0] = -1;
		Global_1638223.f_36974[iVar0] = 0;
		Global_1638223.f_37001[iVar0] = 0;
		Global_1638223.f_97935[iVar0] = 0;
		Global_1638223.f_97940[iVar0] = 0;
		Global_1638223.f_44943[iVar0] = 100;
		Global_1638223.f_44948[iVar0] = 1f;
		Global_1638223.f_44953[iVar0] = 0;
		Global_1638223.f_44963[iVar0] = 0;
		Global_1638223.f_94[iVar0 /*9207*/].f_4732 = 0;
		Global_1638223.f_94[iVar0 /*9207*/].f_4733 = 0;
		Global_1638223.f_94[iVar0 /*9207*/].f_4734 = 0;
		Global_1636978.f_1[iVar0] = 0;
		Global_1638223.f_98052[iVar0] = 0;
		Global_1638223.f_98057[iVar0] = -1;
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				Global_1638223.f_93198[iVar0 /*27*/][iVar1 /*13*/][iVar2 /*3*/] = { 0f, 0f, 0f };
				Global_1638223.f_93307[iVar0 /*11*/][iVar1 /*5*/][iVar2] = 0f;
				Global_1638223.f_93352[iVar0 /*27*/][iVar1 /*13*/][iVar2 /*3*/] = { 0f, 0f, 0f };
				iVar2++;
			}
			Global_1638223.f_110210[iVar0 /*3*/][iVar1] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 21)
		{
			Global_1638223.f_44290[iVar0 /*23*/][iVar1] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1638223.f_112774[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 21)
		{
			Global_1638223.f_44383[iVar0 /*93*/][0 /*23*/][iVar1] = 0;
			Global_1638223.f_44383[iVar0 /*93*/][1 /*23*/][iVar1] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1638223.f_109782[iVar0 /*13*/][iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1638223.f_109835[iVar0 /*5*/][iVar1] = 0f;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 69)
		{
			Global_1638223.f_94[iVar0 /*9207*/].f_64[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_212[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_359[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_135[iVar1] = 1f;
			Global_1638223.f_94[iVar0 /*9207*/].f_283[iVar1] = 1f;
			Global_1638223.f_94[iVar0 /*9207*/].f_430[iVar1] = 1f;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1638223.f_94[iVar0 /*9207*/].f_503[iVar1] = -1;
			Global_1638223.f_94[iVar0 /*9207*/].f_508[iVar1] = -1;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 16)
		{
			Global_1638223.f_38151[iVar1 /*27*/] = 0;
			Global_1638223.f_38151[iVar1 /*27*/].f_1 = { 0f, 0f, 0f };
			Global_1638223.f_38151[iVar1 /*27*/].f_4 = { 0f, 0f, 0f };
			Global_1638223.f_38151[iVar1 /*27*/].f_25 = 0f;
			Global_1638223.f_38151[iVar1 /*27*/].f_26 = 0;
			iVar2 = 0;
			while (iVar2 <= 4)
			{
				Global_1638223.f_38151[iVar1 /*27*/].f_7[iVar2] = 0;
				Global_1638223.f_38151[iVar1 /*27*/].f_13[iVar2] = 0;
				Global_1638223.f_38151[iVar1 /*27*/].f_19[iVar2] = 0;
				iVar2++;
			}
			Global_1638223.f_94[iVar0 /*9207*/].f_4552[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_4570[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_4588[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_4606[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_4624[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_4642[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_4660[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_4678[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_4696[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_4714[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_39[iVar1] = -1;
			Global_1638223.f_65115[iVar1 /*5*/][iVar0] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_4735[iVar1] = 60000;
			Global_1638223.f_94[iVar0 /*9207*/].f_4753[iVar1] = 60000;
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				StringCopy(&(Global_1638223.f_94[iVar0 /*9207*/].f_4857[iVar2 /*16*/]), "", 64);
				Global_1638223.f_94[iVar0 /*9207*/].f_4771[iVar1 /*5*/][iVar2] = 0;
				iVar2++;
			}
			Global_1638223.f_37016[iVar1 /*5*/][iVar0] = -1;
			Global_1638223.f_37102[iVar1 /*5*/][iVar0] = 0;
			Global_1638223.f_37188[iVar1 /*5*/][iVar0] = 0;
			Global_1638223.f_37274[iVar1 /*5*/][iVar0] = 0;
			Global_1638223.f_37360[iVar1 /*5*/][iVar0] = 0;
			Global_1638223.f_37446[iVar1 /*5*/][iVar0] = 1500;
			Global_1638223.f_37532[iVar1 /*5*/][iVar0] = 1400;
			Global_1638223.f_37618[iVar1 /*5*/][iVar0] = 35;
			StringCopy(&(Global_1636978.f_152[iVar0 /*273*/][iVar1 /*16*/]), "", 64);
			Global_1636978.f_6[iVar0 /*18*/][iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_605[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_623[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_3561[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_3579[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_3597[iVar1] = 1;
			Global_1638223.f_94[iVar0 /*9207*/].f_3669[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_3687[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_3747[iVar1] = 10000;
			Global_1638223.f_94[iVar0 /*9207*/].f_3709[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_3727[iVar1] = 1;
			Global_1638223.f_94[iVar0 /*9207*/].f_3783[iVar1] = -1;
			Global_1638223.f_94[iVar0 /*9207*/].f_3615[iVar1] = 1;
			Global_1638223.f_94[iVar0 /*9207*/].f_3801[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_3820[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_4104[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_4140[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_3856[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_3838[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_3996[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_4122[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_4158[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_4050[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_4068[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_4014[iVar1] = 100;
			Global_1638223.f_94[iVar0 /*9207*/].f_3874[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1638223.f_94[iVar0 /*9207*/].f_3926[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1638223.f_94[iVar0 /*9207*/].f_3978[iVar1] = 0f;
			Global_1638223.f_94[iVar0 /*9207*/].f_4032[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_4086[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_4176[iVar1] = -1f;
			Global_1638223.f_94[iVar0 /*9207*/].f_929[iVar1] = -1;
			Global_1638223.f_94[iVar0 /*9207*/].f_947[iVar1] = -1;
			Global_1638223.f_94[iVar0 /*9207*/].f_965[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_983[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_1019[iVar1] = -1;
			Global_1638223.f_94[iVar0 /*9207*/].f_641[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_659[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_1001[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_1037[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_8441[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_8459[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_8477[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_8495[iVar1] = -1;
			Global_1638223.f_94[iVar0 /*9207*/].f_8513[iVar1] = -1;
			Global_1638223.f_94[iVar0 /*9207*/].f_8531[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_8567[iVar1] = -1;
			Global_1638223.f_94[iVar0 /*9207*/].f_8729[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_8549[iVar1] = -1;
			Global_1638223.f_94[iVar0 /*9207*/].f_8585[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_8603[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_8621[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_8639[iVar1] = -1;
			Global_1638223.f_94[iVar0 /*9207*/].f_8657[iVar1] = -1;
			Global_1638223.f_94[iVar0 /*9207*/].f_513[iVar1] = 5;
			Global_1638223.f_94[iVar0 /*9207*/].f_531[iVar1] = 20;
			Global_1638223.f_94[iVar0 /*9207*/].f_4444[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_4462[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_4480[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_4498[iVar1] = -1;
			Global_1638223.f_94[iVar0 /*9207*/].f_4516[iVar1] = -1;
			Global_1638223.f_94[iVar0 /*9207*/].f_893[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_911[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_3633[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_3651[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_549[iVar1] = -1;
			Global_1638223.f_94[iVar0 /*9207*/].f_567[iVar1] = -1;
			Global_1638223.f_94[iVar0 /*9207*/].f_587[iVar1] = 0;
			StringCopy(&(Global_1638223.f_94[iVar0 /*9207*/].f_4941[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1638223.f_94[iVar0 /*9207*/].f_5214[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1638223.f_94[iVar0 /*9207*/].f_5487[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1638223.f_94[iVar0 /*9207*/].f_6306[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1638223.f_94[iVar0 /*9207*/].f_5760[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1638223.f_94[iVar0 /*9207*/].f_6033[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1638223.f_94[iVar0 /*9207*/].f_8217[0 /*16*/]), "", 64);
			StringCopy(&(Global_1638223.f_94[iVar0 /*9207*/].f_8217[1 /*16*/]), "", 64);
			StringCopy(&(Global_1638223.f_94[iVar0 /*9207*/].f_6579[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1638223.f_94[iVar0 /*9207*/].f_6852[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1638223.f_94[iVar0 /*9207*/].f_7125[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1638223.f_94[iVar0 /*9207*/].f_7398[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1638223.f_94[iVar0 /*9207*/].f_7671[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_1638223.f_94[iVar0 /*9207*/].f_7944[iVar1 /*16*/]), "", 64);
			Global_1638223.f_94[iVar0 /*9207*/].f_4316[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_4352[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_4334[iVar1] = -1;
			Global_1638223.f_94[iVar0 /*9207*/].f_4194[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1638223.f_94[iVar0 /*9207*/].f_4246[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1638223.f_94[iVar0 /*9207*/].f_1059[iVar1 /*28*/].f_16 = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_1059[iVar1 /*28*/] = { 0f, 0f, 0f };
			Global_1638223.f_94[iVar0 /*9207*/].f_1059[iVar1 /*28*/].f_3 = { 0f, 0f, 0f };
			Global_1638223.f_94[iVar0 /*9207*/].f_1059[iVar1 /*28*/].f_6 = { 0f, 0f, 0f };
			Global_1638223.f_94[iVar0 /*9207*/].f_1059[iVar1 /*28*/].f_9 = 0f;
			Global_1638223.f_94[iVar0 /*9207*/].f_1059[iVar1 /*28*/].f_10 = 0f;
			Global_1638223.f_94[iVar0 /*9207*/].f_1059[iVar1 /*28*/].f_19 = -1;
			Global_1638223.f_94[iVar0 /*9207*/].f_1059[iVar1 /*28*/].f_17 = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_1059[iVar1 /*28*/].f_13 = { 0f, 0f, 0f };
			Global_1638223.f_94[iVar0 /*9207*/].f_1059[iVar1 /*28*/].f_18 = -1;
			Global_1638223.f_94[iVar0 /*9207*/].f_1059[iVar1 /*28*/].f_20 = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_1059[iVar1 /*28*/].f_21 = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_1059[iVar1 /*28*/].f_22 = -1;
			Global_1638223.f_94[iVar0 /*9207*/].f_1059[iVar1 /*28*/].f_23 = 120;
			Global_1638223.f_94[iVar0 /*9207*/].f_1536[iVar1 /*28*/].f_16 = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_1536[iVar1 /*28*/] = { 0f, 0f, 0f };
			Global_1638223.f_94[iVar0 /*9207*/].f_1536[iVar1 /*28*/].f_3 = { 0f, 0f, 0f };
			Global_1638223.f_94[iVar0 /*9207*/].f_1536[iVar1 /*28*/].f_6 = { 0f, 0f, 0f };
			Global_1638223.f_94[iVar0 /*9207*/].f_1536[iVar1 /*28*/].f_9 = 0f;
			Global_1638223.f_94[iVar0 /*9207*/].f_1536[iVar1 /*28*/].f_10 = 0f;
			Global_1638223.f_94[iVar0 /*9207*/].f_1536[iVar1 /*28*/].f_19 = -1;
			Global_1638223.f_94[iVar0 /*9207*/].f_1536[iVar1 /*28*/].f_17 = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_1536[iVar1 /*28*/].f_13 = { 0f, 0f, 0f };
			Global_1638223.f_94[iVar0 /*9207*/].f_1536[iVar1 /*28*/].f_18 = -1;
			Global_1638223.f_94[iVar0 /*9207*/].f_1536[iVar1 /*28*/].f_20 = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_1536[iVar1 /*28*/].f_21 = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_1536[iVar1 /*28*/].f_22 = -1;
			Global_1638223.f_94[iVar0 /*9207*/].f_1536[iVar1 /*28*/].f_23 = 120;
			Global_1638223.f_94[iVar0 /*9207*/].f_4298[iVar1] = 3f;
			Global_1638223.f_94[iVar0 /*9207*/].f_3765[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_4370[iVar1] = 10.5f;
			Global_1638223.f_94[iVar0 /*9207*/].f_4388[iVar1] = 1f;
			Global_1638223.f_94[iVar0 /*9207*/].f_4534[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_9002[iVar1 /*12*/] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_9002[iVar1 /*12*/].f_1 = -1;
			Global_1638223.f_94[iVar0 /*9207*/].f_9002[iVar1 /*12*/].f_2 = { 0f, 0f, 0f };
			Global_1638223.f_94[iVar0 /*9207*/].f_677[iVar1] = 12;
			Global_1638223.f_94[iVar0 /*9207*/].f_695[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_713[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_731[iVar1] = 12;
			Global_1638223.f_94[iVar0 /*9207*/].f_749[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_767[iVar1] = -1;
			Global_1638223.f_94[iVar0 /*9207*/].f_785[iVar1] = 100;
			Global_1638223.f_94[iVar0 /*9207*/].f_8822[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_8984[iVar1] = 0f;
			Global_1638223.f_94[iVar0 /*9207*/].f_803[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_821[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_839[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_857[iVar1] = -1;
			Global_1638223.f_94[iVar0 /*9207*/].f_875[iVar1] = -1;
			Global_1638223.f_94[iVar0 /*9207*/].f_8783[iVar1] = -1;
			Global_1638223.f_94[iVar0 /*9207*/].f_2560[iVar1 /*8*/] = 1000;
			Global_1638223.f_94[iVar0 /*9207*/].f_2560[iVar1 /*8*/].f_1 = 1.15f;
			Global_1638223.f_94[iVar0 /*9207*/].f_2560[iVar1 /*8*/].f_2 = 25;
			Global_1638223.f_94[iVar0 /*9207*/].f_2560[iVar1 /*8*/].f_7 = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_2560[iVar1 /*8*/].f_3 = 1;
			Global_1638223.f_94[iVar0 /*9207*/].f_2560[iVar1 /*8*/].f_5 = 25;
			Global_1638223.f_94[iVar0 /*9207*/].f_2560[iVar1 /*8*/].f_6 = 10f;
			Global_1638223.f_94[iVar0 /*9207*/].f_2885[iVar1 /*3*/] = 0f;
			Global_1638223.f_94[iVar0 /*9207*/].f_2885[iVar1 /*3*/].f_1 = 1;
			Global_1638223.f_94[iVar0 /*9207*/].f_2885[iVar1 /*3*/].f_2 = 50;
			Global_1638223.f_94[iVar0 /*9207*/].f_2697[iVar1 /*11*/] = 0f;
			Global_1638223.f_94[iVar0 /*9207*/].f_2697[iVar1 /*11*/].f_1[0] = 0f;
			Global_1638223.f_94[iVar0 /*9207*/].f_2697[iVar1 /*11*/].f_1[1] = 0f;
			Global_1638223.f_94[iVar0 /*9207*/].f_2697[iVar1 /*11*/].f_1[2] = 0f;
			Global_1638223.f_94[iVar0 /*9207*/].f_2697[iVar1 /*11*/].f_1[3] = 0f;
			Global_1638223.f_94[iVar0 /*9207*/].f_2697[iVar1 /*11*/].f_6 = 0f;
			Global_1638223.f_94[iVar0 /*9207*/].f_2697[iVar1 /*11*/].f_7 = 0f;
			Global_1638223.f_94[iVar0 /*9207*/].f_2697[iVar1 /*11*/].f_8 = 0f;
			Global_1638223.f_94[iVar0 /*9207*/].f_2697[iVar1 /*11*/].f_9 = 0f;
			Global_1638223.f_94[iVar0 /*9207*/].f_2697[iVar1 /*11*/].f_10 = 0f;
			Global_1638223.f_94[iVar0 /*9207*/].f_3006[iVar1 /*3*/] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_3006[iVar1 /*3*/].f_1 = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_3006[iVar1 /*3*/].f_2 = 0;
			iVar4 = 0;
			iVar4 = 0;
			while (iVar4 <= 14)
			{
				Global_1638223.f_94[iVar0 /*9207*/].f_3058[iVar1 /*16*/][iVar4] = 0;
				iVar4++;
			}
			Global_1638223.f_94[iVar0 /*9207*/].f_8840[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_8858[iVar1] = -1;
			Global_1638223.f_94[iVar0 /*9207*/].f_8876[iVar1] = -1;
			Global_1638223.f_94[iVar0 /*9207*/].f_8894[iVar1] = -1;
			Global_1638223.f_94[iVar0 /*9207*/].f_8912[iVar1] = -1;
			Global_1638223.f_94[iVar0 /*9207*/].f_8930[iVar1] = -1;
			Global_1638223.f_94[iVar0 /*9207*/].f_8250[iVar1 /*5*/][0] = -1;
			Global_1638223.f_94[iVar0 /*9207*/].f_8250[iVar1 /*5*/][1] = -1;
			Global_1638223.f_94[iVar0 /*9207*/].f_8250[iVar1 /*5*/][2] = -1;
			Global_1638223.f_94[iVar0 /*9207*/].f_8250[iVar1 /*5*/][3] = -1;
			Global_1638223.f_94[iVar0 /*9207*/].f_8336[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_8354[iVar1 /*4*/][0] = -1;
			Global_1638223.f_94[iVar0 /*9207*/].f_8354[iVar1 /*4*/][1] = -1;
			Global_1638223.f_94[iVar0 /*9207*/].f_8354[iVar1 /*4*/][2] = -1;
			Global_1638223.f_94[iVar0 /*9207*/].f_8423[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_4408[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_8675[iVar1] = 0;
			Global_1638223.f_94[iVar0 /*9207*/].f_8693[iVar1] = -1;
			Global_1638223.f_94[iVar0 /*9207*/].f_8711[iVar1] = 0;
			func_233(&(Global_1638223.f_94[iVar0 /*9207*/].f_2937[iVar1 /*4*/]));
			iVar1++;
		}
		Global_1638223.f_94[iVar0 /*9207*/].f_3332 = 0;
		Global_1638223.f_94[iVar0 /*9207*/].f_3558 = 0;
		Global_1638223.f_94[iVar0 /*9207*/].f_3331 = 0;
		Global_1638223.f_94[iVar0 /*9207*/].f_3557 = 0;
		Global_1638223.f_94[iVar0 /*9207*/].f_3334 = 0;
		Global_1638223.f_94[iVar0 /*9207*/].f_3335 = 0;
		Global_1638223.f_94[iVar0 /*9207*/].f_3336 = 0;
		Global_1638223.f_94[iVar0 /*9207*/].f_3337 = 0;
		Global_1638223.f_94[iVar0 /*9207*/].f_3338 = 0;
		Global_1638223.f_94[iVar0 /*9207*/].f_3560 = 0;
		Global_1638223.f_94[iVar0 /*9207*/].f_1055 = 0;
		Global_1638223.f_94[iVar0 /*9207*/].f_1056 = 0;
		Global_1638223.f_94[iVar0 /*9207*/].f_354 = -1;
		Global_1638223.f_94[iVar0 /*9207*/].f_355 = -1;
		Global_1638223.f_94[iVar0 /*9207*/].f_501 = -1;
		Global_1638223.f_94[iVar0 /*9207*/].f_502 = -1;
		Global_1638223.f_94[iVar0 /*9207*/].f_4922 = 0;
		Global_1638223.f_94[iVar0 /*9207*/].f_4923 = 0;
		Global_1638223.f_94[iVar0 /*9207*/].f_4924 = 0;
		Global_1638223.f_94[iVar0 /*9207*/].f_4925 = 0;
		Global_1638223.f_94[iVar0 /*9207*/].f_4926 = 0;
		Global_1638223.f_94[iVar0 /*9207*/].f_4927 = 0;
		Global_1638223.f_94[iVar0 /*9207*/].f_4928 = 0;
		Global_1638223.f_94[iVar0 /*9207*/].f_4929 = 0;
		Global_1638223.f_94[iVar0 /*9207*/].f_4930 = 0;
		Global_1638223.f_94[iVar0 /*9207*/].f_4931 = 0;
		Global_1638223.f_94[iVar0 /*9207*/].f_4932 = 0;
		Global_1638223.f_94[iVar0 /*9207*/].f_4933 = 0;
		Global_1638223.f_94[iVar0 /*9207*/].f_4934 = 0;
		Global_1638223.f_94[iVar0 /*9207*/].f_4935 = 0;
		Global_1638223.f_94[iVar0 /*9207*/].f_4936 = 0;
		Global_1638223.f_94[iVar0 /*9207*/].f_4937 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1638223.f_84052[iVar0] = 0;
		Global_1638223.f_84057[iVar0] = 0;
		iVar0++;
	}
	Global_1638223.f_84069 = 0;
	Global_1638223.f_84070 = 0;
	Global_1638223.f_84071 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		Global_1638223.f_84072[iVar0] = 0;
		Global_1638223.f_84083[iVar0] = 0;
		Global_1638223.f_84094[iVar0] = 0;
		iVar0++;
	}
	Global_1638223.f_68 = { 0f, 0f, 0f };
	Global_1638223.f_38622 = { 0f, 0f, 0f };
	Global_1638223.f_91 = 0f;
	Global_1638223.f_107281 = { 0f, 0f, 0f };
	Global_1638223.f_112773 = 0;
	Global_1638223.f_112795 = 0;
	Global_1638223.f_94125[0] = 0;
	Global_1638223.f_94125[1] = 0;
	Global_1638223.f_94128 = 0;
	Global_1638223.f_94124 = 0;
	Global_1638223.f_107868 = 0;
	Global_1638223.f_107869 = 0;
	Global_1638223.f_107870 = 0;
	Global_1638223.f_107871 = 0;
	Global_1638223.f_107873 = 0;
	Global_1638223.f_107875 = 0;
	Global_1638223.f_107877 = 0;
	Global_1638223.f_107880 = 0;
	Global_1638223.f_107881 = 0;
	Global_1638223.f_107882 = 0;
	Global_1638223.f_107883 = 0;
	Global_1638223.f_107884 = 0;
	Global_1638223.f_107885 = 0;
	Global_1638223.f_107891 = -1;
	Global_1638223.f_107892 = -1;
	Global_1638223.f_107893 = -1;
	Global_1638223.f_107894 = -1;
	Global_1638223.f_107895 = -1;
	Global_1638223.f_107896 = -1;
	Global_1638223.f_107897 = -1;
	Global_1638223.f_107898 = -1;
	Global_1638223.f_107899 = -1;
	Global_1638223.f_107900 = -1;
	Global_1638223.f_107901 = 1.5f;
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		Global_1638223.f_39326[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1638223.f_40380[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1638223.f_38625[iVar0 /*10*/][0 /*3*/] = { 0f, 0f, 0f };
		Global_1638223.f_38625[iVar0 /*10*/][1 /*3*/] = { 0f, 0f, 0f };
		Global_1638223.f_38625[iVar0 /*10*/][2 /*3*/] = { 0f, 0f, 0f };
		Global_1638223.f_39679[iVar0 /*10*/][0 /*3*/] = { 0f, 0f, 0f };
		Global_1638223.f_39679[iVar0 /*10*/][1 /*3*/] = { 0f, 0f, 0f };
		Global_1638223.f_39679[iVar0 /*10*/][2 /*3*/] = { 0f, 0f, 0f };
		Global_1638223.f_39537[iVar0] = 0f;
		Global_1638223.f_40591[iVar0] = 0f;
		Global_1638223.f_41652[iVar0] = 1f;
		Global_1638223.f_40662[iVar0] = 0;
		Global_1638223.f_40804[iVar0] = 0;
		Global_1638223.f_40733[iVar0] = -1;
		Global_1638223.f_40875[iVar0] = 0;
		Global_1638223.f_41581[iVar0] = 0f;
		Global_1638223.f_40946[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1638223.f_41157[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_1638223.f_41368[iVar0] = -1;
		Global_1638223.f_41439[iVar0] = 0;
		Global_1638223.f_39608[iVar0] = 0;
		iVar0++;
	}
	Global_1638223.f_44246 = 0;
	if (bParam0)
	{
		Global_1638223.f_44247 = 0;
		Global_1638223.f_44255 = 0;
	}
	Global_1638223.f_44253 = 0;
	Global_1638223.f_44254 = 0;
	Global_1638223.f_44902 = 0f;
	Global_1638223.f_47358 = 0;
	iVar0 = 0;
	while (iVar0 <= 149)
	{
		Global_1638223.f_47359[iVar0 /*61*/] = { 0f, 0f, 0f };
		Global_1638223.f_47359[iVar0 /*61*/].f_6 = 0f;
		Global_1638223.f_47359[iVar0 /*61*/].f_7 = 0;
		Global_1638223.f_47359[iVar0 /*61*/].f_9 = -1;
		Global_1638223.f_47359[iVar0 /*61*/].f_8 = -1;
		Global_1638223.f_47359[iVar0 /*61*/].f_10 = 1;
		Global_1638223.f_47359[iVar0 /*61*/].f_19 = 0;
		Global_1638223.f_47359[iVar0 /*61*/].f_20 = 0;
		Global_1638223.f_47359[iVar0 /*61*/].f_12 = 0;
		Global_1638223.f_47359[iVar0 /*61*/].f_13 = 0;
		Global_1638223.f_47359[iVar0 /*61*/].f_14 = 0;
		Global_1638223.f_47359[iVar0 /*61*/].f_15 = -1;
		Global_1638223.f_47359[iVar0 /*61*/].f_11 = 0;
		Global_1638223.f_47359[iVar0 /*61*/].f_46 = 0;
		Global_1638223.f_47359[iVar0 /*61*/].f_47 = 0;
		Global_1638223.f_47359[iVar0 /*61*/].f_48 = 0;
		Global_1638223.f_47359[iVar0 /*61*/].f_16 = -1;
		Global_1638223.f_47359[iVar0 /*61*/].f_17 = -1;
		Global_1638223.f_47359[iVar0 /*61*/].f_18 = -1;
		Global_1638223.f_47359[iVar0 /*61*/].f_21 = -1;
		Global_1638223.f_47359[iVar0 /*61*/].f_49 = -1;
		Global_1638223.f_47359[iVar0 /*61*/].f_22 = -1;
		Global_1638223.f_47359[iVar0 /*61*/].f_23 = 0;
		Global_1638223.f_47359[iVar0 /*61*/].f_24 = 0;
		Global_1638223.f_47359[iVar0 /*61*/].f_25 = 1;
		Global_1638223.f_47359[iVar0 /*61*/].f_35 = 10f;
		Global_1638223.f_47359[iVar0 /*61*/].f_36 = -1;
		Global_1638223.f_47359[iVar0 /*61*/].f_60 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		func_232(&(Global_1638223.f_110279[iVar0 /*244*/]));
		iVar0++;
	}
	Global_1638223.f_112720 = 0;
	Global_1638223.f_56587 = 0;
	Global_1638223.f_56588 = 0;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_1638223.f_56589[iVar0 /*32*/] = { 0f, 0f, 0f };
		Global_1638223.f_56589[iVar0 /*32*/].f_6 = 0f;
		Global_1638223.f_56589[iVar0 /*32*/].f_7 = 0;
		Global_1638223.f_56589[iVar0 /*32*/].f_8 = -1;
		Global_1638223.f_56589[iVar0 /*32*/].f_12 = -1;
		Global_1638223.f_56589[iVar0 /*32*/].f_11 = -1;
		Global_1638223.f_56589[iVar0 /*32*/].f_13 = 1;
		Global_1638223.f_56589[iVar0 /*32*/].f_18 = 0;
		Global_1638223.f_56589[iVar0 /*32*/].f_31 = 0;
		Global_1638223.f_56589[iVar0 /*32*/].f_14 = 0;
		Global_1638223.f_56589[iVar0 /*32*/].f_28 = 0;
		Global_1638223.f_56589[iVar0 /*32*/].f_29 = 0;
		Global_1638223.f_56589[iVar0 /*32*/].f_30 = 0;
		Global_1638223.f_56589[iVar0 /*32*/].f_15 = -1;
		Global_1638223.f_56589[iVar0 /*32*/].f_16 = -1;
		Global_1638223.f_56589[iVar0 /*32*/].f_17 = -1;
		Global_1638223.f_56589[iVar0 /*32*/].f_9 = 0;
		Global_1638223.f_56589[iVar0 /*32*/].f_10 = 1;
		iVar0++;
	}
	Global_1638223.f_47033 = 0;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Global_1638223.f_47034[iVar0 /*19*/] = { 0f, 0f, 0f };
		Global_1638223.f_47034[iVar0 /*19*/].f_3 = 0f;
		Global_1638223.f_47034[iVar0 /*19*/].f_4 = 0;
		Global_1638223.f_47034[iVar0 /*19*/].f_14 = 0;
		Global_1638223.f_47034[iVar0 /*19*/].f_12 = 0;
		Global_1638223.f_47034[iVar0 /*19*/].f_15 = 0;
		Global_1638223.f_47034[iVar0 /*19*/].f_16 = 0;
		Global_1638223.f_47034[iVar0 /*19*/].f_6 = -1;
		Global_1638223.f_47034[iVar0 /*19*/].f_5 = -1;
		Global_1638223.f_47034[iVar0 /*19*/].f_13 = 0f;
		Global_1638223.f_47034[iVar0 /*19*/].f_8 = 0f;
		Global_1638223.f_47034[iVar0 /*19*/].f_9 = 0f;
		Global_1638223.f_47034[iVar0 /*19*/].f_10 = 0f;
		Global_1638223.f_47034[iVar0 /*19*/].f_11 = 0f;
		Global_1638223.f_47034[iVar0 /*19*/].f_7 = 0;
		Global_1638223.f_47034[iVar0 /*19*/].f_17 = 0;
		Global_1638223.f_47034[iVar0 /*19*/].f_18 = 0;
		iVar0++;
	}
	Global_1638223.f_47320 = 0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		Global_1638223.f_47321[iVar0 /*7*/] = { 0f, 0f, 0f };
		Global_1638223.f_47321[iVar0 /*7*/].f_3 = 0f;
		Global_1638223.f_47321[iVar0 /*7*/].f_4 = 0;
		Global_1638223.f_47321[iVar0 /*7*/].f_5 = 0;
		Global_1638223.f_47321[iVar0 /*7*/].f_6 = 0;
		iVar0++;
	}
	if (bParam0)
	{
		Global_1638223.f_44903 = 3.5f;
		Global_1638223.f_44904 = 7f;
		Global_1638223.f_44905 = 0f;
		Global_1638223.f_44906 = 0f;
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			Global_1638223.f_44910[iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			Global_1638223.f_44958[iVar0] = -1;
			iVar0++;
		}
	}
	Global_1638223.f_94162 = -1;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1638223.f_44235[iVar0] = 0;
		Global_1638223.f_98031[iVar0] = -1;
		Global_1638223.f_98076[iVar0] = -1;
		iVar1 = 0;
		while (iVar1 <= 16)
		{
			Global_1638223.f_43741[iVar1 /*29*/][iVar0] = 0;
			Global_1638223.f_43741[iVar1 /*29*/].f_5[iVar0] = 99999;
			Global_1638223.f_43741[iVar1 /*29*/].f_10[iVar0] = 0;
			Global_1638223.f_43741[iVar1 /*29*/].f_15[iVar0] = 0;
			Global_1638223.f_43741[iVar1 /*29*/].f_20[iVar0] = 0;
			iVar1++;
		}
		Global_1638223.f_107651[iVar0] = 0;
		iVar0++;
	}
	if (bParam0)
	{
		Global_1638223.f_44969 = 1;
	}
	Global_1638223.f_44971 = 0;
	Global_1638223.f_44972 = 0;
	Global_1638223.f_44973 = 0;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_1638223.f_44974[iVar0 /*98*/] = { 0f, 0f, 0f };
		Global_1638223.f_44974[iVar0 /*98*/].f_4 = { 0f, 0f, 0f };
		Global_1638223.f_44974[iVar0 /*98*/].f_3 = 0f;
		Global_1638223.f_44974[iVar0 /*98*/].f_7 = 50f;
		Global_1638223.f_44974[iVar0 /*98*/].f_8 = 0f;
		Global_1638223.f_44974[iVar0 /*98*/].f_9 = 0;
		Global_1638223.f_44974[iVar0 /*98*/].f_10 = -1;
		Global_1638223.f_44974[iVar0 /*98*/].f_11 = { 0f, 0f, 0f };
		Global_1638223.f_44974[iVar0 /*98*/].f_14 = 0f;
		Global_1638223.f_44974[iVar0 /*98*/].f_15 = 0;
		Global_1638223.f_44974[iVar0 /*98*/].f_16 = 0;
		Global_1638223.f_44974[iVar0 /*98*/].f_27 = 0;
		Global_1638223.f_44974[iVar0 /*98*/].f_29 = 0;
		Global_1638223.f_44974[iVar0 /*98*/].f_30 = 0;
		Global_1638223.f_44974[iVar0 /*98*/].f_31 = -1;
		Global_1638223.f_44974[iVar0 /*98*/].f_45 = 0;
		Global_1638223.f_44974[iVar0 /*98*/].f_43 = 0;
		Global_1638223.f_44974[iVar0 /*98*/].f_44 = 0;
		Global_1638223.f_44974[iVar0 /*98*/].f_46 = 0;
		Global_1638223.f_44974[iVar0 /*98*/].f_47 = 0;
		Global_1638223.f_44974[iVar0 /*98*/].f_48 = 0;
		Global_1638223.f_44974[iVar0 /*98*/].f_49 = 0;
		Global_1638223.f_44974[iVar0 /*98*/].f_50 = 60;
		Global_1638223.f_44974[iVar0 /*98*/].f_51 = 0;
		Global_1638223.f_44974[iVar0 /*98*/].f_37 = 0;
		Global_1638223.f_44974[iVar0 /*98*/].f_95 = 0;
		Global_1638223.f_44974[iVar0 /*98*/].f_32 = -1;
		Global_1638223.f_44974[iVar0 /*98*/].f_33 = -1;
		Global_1638223.f_44974[iVar0 /*98*/].f_34 = 0;
		Global_1638223.f_44974[iVar0 /*98*/].f_56 = 0;
		Global_1638223.f_44974[iVar0 /*98*/].f_35 = 0;
		Global_1638223.f_44974[iVar0 /*98*/].f_52 = -1;
		Global_1638223.f_44974[iVar0 /*98*/].f_53 = -1;
		Global_1638223.f_44974[iVar0 /*98*/].f_54 = -1;
		Global_1638223.f_44974[iVar0 /*98*/].f_84 = -1;
		Global_1638223.f_44974[iVar0 /*98*/].f_85 = -1;
		Global_1638223.f_44974[iVar0 /*98*/].f_86 = { 0f, 0f, 0f };
		Global_1638223.f_44974[iVar0 /*98*/].f_89 = 0;
		Global_1638223.f_44974[iVar0 /*98*/].f_82 = -1;
		Global_1638223.f_44974[iVar0 /*98*/].f_83 = -1;
		Global_1638223.f_44974[iVar0 /*98*/].f_90 = -1;
		Global_1638223.f_44974[iVar0 /*98*/].f_96 = 1000;
		Global_1638223.f_44974[iVar0 /*98*/].f_97 = 0f;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1638223.f_44974[iVar0 /*98*/].f_17[iVar1] = 0;
			Global_1638223.f_44974[iVar0 /*98*/].f_22[iVar1] = 99999;
			Global_1638223.f_44974[iVar0 /*98*/].f_66[iVar1] = 0;
			Global_1638223.f_44974[iVar0 /*98*/].f_71[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		StringCopy(&(Global_1638223.f_107299[iVar0 /*18*/]), "", 64);
		Global_1638223.f_107299[iVar0 /*18*/].f_16 = 0;
		Global_1638223.f_107299[iVar0 /*18*/].f_17 = -1;
		iVar0++;
	}
	Global_1638223.f_57262 = 0;
	Global_1638223.f_57263 = 0;
	if (bParam0)
	{
		if (func_124() && !func_179())
		{
			Global_1638223.f_57264 = -1;
		}
		else
		{
			Global_1638223.f_57264 = 0;
		}
	}
	Global_1638223.f_57265 = 0;
	iVar0 = 0;
	while (iVar0 <= 59)
	{
		Global_1638223.f_57266[iVar0 /*42*/] = { 0f, 0f, 0f };
		Global_1638223.f_57266[iVar0 /*42*/].f_3 = { 0f, 0f, 0f };
		Global_1638223.f_57266[iVar0 /*42*/].f_15 = 77;
		Global_1638223.f_57266[iVar0 /*42*/].f_6 = 0;
		Global_1638223.f_57266[iVar0 /*42*/].f_7 = 0;
		Global_1638223.f_57266[iVar0 /*42*/].f_23 = -1;
		Global_1638223.f_57266[iVar0 /*42*/].f_24 = -1;
		Global_1638223.f_57266[iVar0 /*42*/].f_9 = 1f;
		Global_1638223.f_57266[iVar0 /*42*/].f_26 = -1;
		Global_1638223.f_57266[iVar0 /*42*/].f_27 = -1;
		Global_1638223.f_57266[iVar0 /*42*/].f_28 = 0;
		Global_1638223.f_57266[iVar0 /*42*/].f_35 = -1;
		Global_1638223.f_57266[iVar0 /*42*/].f_32 = -1;
		Global_1638223.f_57266[iVar0 /*42*/].f_38 = 0;
		Global_1638223.f_57266[iVar0 /*42*/].f_36 = -1;
		Global_1638223.f_57266[iVar0 /*42*/].f_33 = -1;
		Global_1638223.f_57266[iVar0 /*42*/].f_39 = 0;
		Global_1638223.f_57266[iVar0 /*42*/].f_37 = -1;
		Global_1638223.f_57266[iVar0 /*42*/].f_34 = -1;
		Global_1638223.f_57266[iVar0 /*42*/].f_40 = 0;
		Global_1638223.f_57266[iVar0 /*42*/].f_29 = -1;
		Global_1638223.f_57266[iVar0 /*42*/].f_30 = -1;
		Global_1638223.f_57266[iVar0 /*42*/].f_31 = 0;
		Global_1638223.f_57266[iVar0 /*42*/].f_41 = 0;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1638223.f_57266[iVar0 /*42*/].f_10[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	func_231();
	Global_1638223.f_113289 = 0;
	Global_1638223.f_113289.f_1 = 0;
	Global_1638223.f_113289.f_2 = 0;
	Global_1638223.f_113289.f_3 = 0;
	Global_1638223.f_113289.f_4 = 0;
	func_230();
	Global_1638223.f_113283 = -1;
	Global_1638223.f_113284 = 0;
	Global_1638223.f_113286 = 0;
	Global_1638223.f_113285 = -1;
	Global_1638223.f_113294 = -1;
	Global_1638223.f_44833 = -1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1638223.f_84062[iVar0] = -1;
		iVar0++;
	}
	Global_1638223.f_94176 = -1;
	Global_1638223.f_94177 = 15;
	Global_1638223.f_94178 = -1;
	Global_1638223.f_94183 = -1;
	Global_1638223.f_94184 = 0;
	Global_1638223.f_94179 = 2.5f;
	Global_1638223.f_94180 = 8f;
	Global_1638223.f_94181 = 2.5f;
	Global_1638223.f_94182 = 8f;
	Global_1638223.f_59830 = 0;
	Global_1638223.f_47357 = 0;
	if (bParam0)
	{
		Global_1638223.f_44909 = -1;
		Global_1638223.f_44251 = -1;
	}
	Global_1638223.f_59831 = 0;
	Global_1638223.f_59832 = 0;
	Global_1638223.f_59833 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_1638223.f_59834[iVar0 /*160*/] = { 0f, 0f, 0f };
		Global_1638223.f_59834[iVar0 /*160*/].f_3 = 0f;
		Global_1638223.f_59834[iVar0 /*160*/].f_4 = 50f;
		Global_1638223.f_59834[iVar0 /*160*/].f_5 = 0f;
		Global_1638223.f_59834[iVar0 /*160*/].f_6 = 0;
		Global_1638223.f_59834[iVar0 /*160*/].f_7 = -1;
		Global_1638223.f_59834[iVar0 /*160*/].f_8 = { 0f, 0f, 0f };
		Global_1638223.f_59834[iVar0 /*160*/].f_11 = 0f;
		Global_1638223.f_59834[iVar0 /*160*/].f_12 = 0;
		Global_1638223.f_59834[iVar0 /*160*/].f_23 = -1;
		Global_1638223.f_59834[iVar0 /*160*/].f_24 = -1;
		Global_1638223.f_59834[iVar0 /*160*/].f_25 = -1;
		Global_1638223.f_59834[iVar0 /*160*/].f_26 = -1;
		Global_1638223.f_59834[iVar0 /*160*/].f_30 = 0;
		Global_1638223.f_59834[iVar0 /*160*/].f_31 = 100;
		Global_1638223.f_59834[iVar0 /*160*/].f_32 = 1001f;
		Global_1638223.f_59834[iVar0 /*160*/].f_33 = 0;
		Global_1638223.f_59834[iVar0 /*160*/].f_34 = -1;
		Global_1638223.f_59834[iVar0 /*160*/].f_35 = 1001f;
		Global_1638223.f_59834[iVar0 /*160*/].f_39 = 1.5f;
		Global_1638223.f_59834[iVar0 /*160*/].f_48 = 0;
		Global_1638223.f_59834[iVar0 /*160*/].f_117 = 0;
		Global_1638223.f_59834[iVar0 /*160*/].f_49 = 0;
		Global_1638223.f_59834[iVar0 /*160*/].f_50 = 0;
		Global_1638223.f_59834[iVar0 /*160*/].f_27 = -1;
		Global_1638223.f_59834[iVar0 /*160*/].f_28 = -1;
		Global_1638223.f_59834[iVar0 /*160*/].f_29 = -1f;
		Global_1638223.f_59834[iVar0 /*160*/].f_55 = 0;
		Global_1638223.f_59834[iVar0 /*160*/].f_58 = 1.2f;
		Global_1638223.f_59834[iVar0 /*160*/].f_57 = 0;
		Global_1638223.f_59834[iVar0 /*160*/].f_158 = -1;
		Global_1638223.f_59834[iVar0 /*160*/].f_159 = 10;
		Global_1638223.f_59834[iVar0 /*160*/].f_147 = -1;
		Global_1638223.f_59834[iVar0 /*160*/].f_148 = -1;
		Global_1638223.f_59834[iVar0 /*160*/].f_43 = -1;
		Global_1638223.f_59834[iVar0 /*160*/].f_44 = -1;
		Global_1638223.f_59834[iVar0 /*160*/].f_45 = 0;
		Global_1638223.f_59834[iVar0 /*160*/].f_69 = -1;
		Global_1638223.f_59834[iVar0 /*160*/].f_70 = -1;
		Global_1638223.f_59834[iVar0 /*160*/].f_72 = -1;
		Global_1638223.f_59834[iVar0 /*160*/].f_115 = -1;
		Global_1638223.f_59834[iVar0 /*160*/].f_114 = -1;
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			Global_1638223.f_59834[iVar0 /*160*/].f_118[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1638223.f_59834[iVar0 /*160*/].f_125[iVar1] = 0f;
			iVar1++;
		}
		Global_1638223.f_59834[iVar0 /*160*/].f_71 = -1;
		Global_1638223.f_59834[iVar0 /*160*/].f_78 = 0;
		Global_1638223.f_59834[iVar0 /*160*/].f_46 = 0;
		Global_1638223.f_59834[iVar0 /*160*/].f_128 = 0;
		Global_1638223.f_59834[iVar0 /*160*/].f_133 = -1;
		Global_1638223.f_59834[iVar0 /*160*/].f_134 = { 0f, 0f, 0f };
		Global_1638223.f_59834[iVar0 /*160*/].f_137 = -1;
		Global_1638223.f_59834[iVar0 /*160*/].f_138 = -1;
		Global_1638223.f_59834[iVar0 /*160*/].f_130 = -1f;
		Global_1638223.f_59834[iVar0 /*160*/].f_129 = -1;
		Global_1638223.f_59834[iVar0 /*160*/].f_132 = 0;
		Global_1638223.f_59834[iVar0 /*160*/].f_40 = 0;
		Global_1638223.f_59834[iVar0 /*160*/].f_41 = 5;
		Global_1638223.f_59834[iVar0 /*160*/].f_143 = -1;
		Global_1638223.f_59834[iVar0 /*160*/].f_131 = 10;
		Global_1638223.f_59834[iVar0 /*160*/].f_144 = 0;
		Global_1638223.f_59834[iVar0 /*160*/].f_145 = 2;
		Global_1638223.f_59834[iVar0 /*160*/].f_146 = -1;
		Global_1638223.f_59834[iVar0 /*160*/].f_151 = -1f;
		Global_1638223.f_59834[iVar0 /*160*/].f_152 = 0;
		Global_1638223.f_59834[iVar0 /*160*/].f_153 = -1;
		Global_1638223.f_59834[iVar0 /*160*/].f_154 = 0;
		Global_1638223.f_59834[iVar0 /*160*/].f_155 = 10;
		Global_1638223.f_59834[iVar0 /*160*/].f_156 = -1;
		Global_1638223.f_59834[iVar0 /*160*/].f_157 = 0;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1638223.f_59834[iVar0 /*160*/].f_13[iVar1] = 0;
			Global_1638223.f_59834[iVar0 /*160*/].f_18[iVar1] = 99999;
			Global_1638223.f_59834[iVar0 /*160*/].f_108[iVar1] = 0;
			Global_1638223.f_59834[iVar0 /*160*/].f_91[iVar1] = 0;
			Global_1638223.f_59834[iVar0 /*160*/].f_96[iVar1] = 0;
			Global_1638223.f_59834[iVar0 /*160*/].f_59[iVar1] = -1;
			Global_1638223.f_59834[iVar0 /*160*/].f_64[iVar1] = -1;
			Global_1638223.f_59834[iVar0 /*160*/].f_73[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	Global_1638223.f_93106 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		Global_1638223.f_93107[iVar0 /*9*/] = { 0f, 0f, 0f };
		Global_1638223.f_93107[iVar0 /*9*/].f_3 = { 0f, 0f, 0f };
		Global_1638223.f_93107[iVar0 /*9*/].f_6 = { 0f, 0f, 0f };
		iVar0++;
	}
	Global_1638223.f_84186 = 0;
	iVar0 = 0;
	while (iVar0 <= 59)
	{
		Global_1638223.f_84193[iVar0 /*15*/] = { 0f, 0f, 0f };
		Global_1638223.f_84193[iVar0 /*15*/].f_3 = 0f;
		Global_1638223.f_84193[iVar0 /*15*/].f_4 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1638223.f_84187[iVar0] = 0;
		iVar1 = 0;
		while (iVar1 <= 59)
		{
			Global_1638223.f_85094[iVar0 /*901*/][iVar1 /*15*/] = { 0f, 0f, 0f };
			Global_1638223.f_85094[iVar0 /*901*/][iVar1 /*15*/].f_3 = 0f;
			Global_1638223.f_85094[iVar0 /*901*/][iVar1 /*15*/].f_4 = 0;
			Global_1638223.f_85094[iVar0 /*901*/][iVar1 /*15*/].f_5 = 0;
			Global_1638223.f_85094[iVar0 /*901*/][iVar1 /*15*/].f_7 = -1;
			Global_1638223.f_85094[iVar0 /*901*/][iVar1 /*15*/].f_8 = 0;
			Global_1638223.f_85094[iVar0 /*901*/][iVar1 /*15*/].f_9 = -1;
			Global_1638223.f_85094[iVar0 /*901*/][iVar1 /*15*/].f_10 = 0;
			Global_1638223.f_85094[iVar0 /*901*/][iVar1 /*15*/].f_11 = 0;
			Global_1638223.f_85094[iVar0 /*901*/][iVar1 /*15*/].f_12 = 0;
			Global_1638223.f_85094[iVar0 /*901*/][iVar1 /*15*/].f_13 = 0;
			Global_1638223.f_85094[iVar0 /*901*/][iVar1 /*15*/].f_14 = 0;
			iVar1++;
		}
		iVar0++;
	}
	Global_1638223.f_65263 = 0;
	Global_1638223.f_65266 = 0;
	Global_1638223.f_65267 = 0;
	Global_1638223.f_65264 = 50;
	iVar0 = 0;
	while (iVar0 <= 58)
	{
		Global_1638223.f_65268[iVar0 /*309*/].f_40 = 0;
		Global_1638223.f_65268[iVar0 /*309*/].f_50 = 0;
		Global_1638223.f_65268[iVar0 /*309*/] = { 0f, 0f, 0f };
		Global_1638223.f_65268[iVar0 /*309*/].f_3 = 0f;
		Global_1638223.f_65268[iVar0 /*309*/].f_4 = 0.75f;
		Global_1638223.f_65268[iVar0 /*309*/].f_15 = 0;
		Global_1638223.f_65268[iVar0 /*309*/].f_16 = 0;
		Global_1638223.f_65268[iVar0 /*309*/].f_17 = 0;
		Global_1638223.f_65268[iVar0 /*309*/].f_33 = 0;
		Global_1638223.f_65268[iVar0 /*309*/].f_37 = 0;
		Global_1638223.f_65268[iVar0 /*309*/].f_38 = 0;
		Global_1638223.f_65268[iVar0 /*309*/].f_39 = -1;
		Global_1638223.f_65268[iVar0 /*309*/].f_220 = -1;
		Global_1638223.f_65268[iVar0 /*309*/].f_219 = -1;
		Global_1638223.f_65268[iVar0 /*309*/].f_221 = 0;
		Global_1638223.f_65268[iVar0 /*309*/].f_222 = 0;
		Global_1638223.f_65268[iVar0 /*309*/].f_223 = 20;
		Global_1638223.f_65268[iVar0 /*309*/].f_231 = -1;
		Global_1638223.f_65268[iVar0 /*309*/].f_57 = -1;
		Global_1638223.f_65268[iVar0 /*309*/].f_48 = -1;
		Global_1638223.f_65268[iVar0 /*309*/].f_35 = 0;
		Global_1638223.f_65268[iVar0 /*309*/].f_36 = -1;
		Global_1638223.f_65268[iVar0 /*309*/].f_49 = 0;
		Global_1638223.f_65268[iVar0 /*309*/].f_189 = 0;
		Global_1638223.f_65268[iVar0 /*309*/].f_190 = 0;
		Global_1638223.f_65268[iVar0 /*309*/].f_191 = 0;
		Global_1638223.f_65268[iVar0 /*309*/].f_192 = 0;
		Global_1638223.f_65268[iVar0 /*309*/].f_193 = 0;
		Global_1638223.f_65268[iVar0 /*309*/].f_194 = 0;
		Global_1638223.f_65268[iVar0 /*309*/].f_195 = 0;
		Global_1638223.f_65268[iVar0 /*309*/].f_196 = 0;
		Global_1638223.f_65268[iVar0 /*309*/].f_197 = 0;
		Global_1638223.f_65268[iVar0 /*309*/].f_198 = -1;
		Global_1638223.f_65268[iVar0 /*309*/].f_199 = 0;
		Global_1638223.f_65268[iVar0 /*309*/].f_200 = -1;
		Global_1638223.f_65268[iVar0 /*309*/].f_34 = 0;
		Global_1638223.f_65268[iVar0 /*309*/].f_13 = 0f;
		Global_1638223.f_65268[iVar0 /*309*/].f_5 = 50f;
		Global_1638223.f_65268[iVar0 /*309*/].f_6 = 0f;
		Global_1638223.f_65268[iVar0 /*309*/].f_7 = 0;
		Global_1638223.f_65268[iVar0 /*309*/].f_14 = 0;
		Global_1638223.f_65268[iVar0 /*309*/].f_8 = -1;
		Global_1638223.f_65268[iVar0 /*309*/].f_9 = { 0f, 0f, 0f };
		Global_1638223.f_65268[iVar0 /*309*/].f_12 = 0f;
		Global_1638223.f_65268[iVar0 /*309*/].f_176 = 0;
		Global_1638223.f_65268[iVar0 /*309*/].f_64 = 0;
		Global_1638223.f_65268[iVar0 /*309*/].f_168 = 0;
		Global_1638223.f_65268[iVar0 /*309*/].f_169 = 0;
		Global_1638223.f_65268[iVar0 /*309*/].f_170 = 0;
		Global_1638223.f_65268[iVar0 /*309*/].f_176 = 0;
		Global_1638223.f_65268[iVar0 /*309*/].f_186 = 0;
		Global_1638223.f_65268[iVar0 /*309*/].f_177 = 0;
		Global_1638223.f_65268[iVar0 /*309*/].f_185 = -1;
		Global_1638223.f_65268[iVar0 /*309*/].f_65 = { 0f, 0f, 0f };
		Global_1638223.f_65268[iVar0 /*309*/].f_58 = -1;
		Global_1638223.f_65268[iVar0 /*309*/].f_59 = -1;
		Global_1638223.f_65268[iVar0 /*309*/].f_63 = 0;
		Global_1638223.f_65268[iVar0 /*309*/].f_60 = 0;
		Global_1638223.f_65268[iVar0 /*309*/].f_257 = 0;
		Global_1638223.f_65268[iVar0 /*309*/].f_268 = 1f;
		Global_1638223.f_65268[iVar0 /*309*/].f_269 = 0;
		Global_1638223.f_65268[iVar0 /*309*/].f_81 = 0;
		Global_1638223.f_65268[iVar0 /*309*/].f_206 = 0;
		Global_1638223.f_65268[iVar0 /*309*/].f_53 = 0;
		Global_1638223.f_65268[iVar0 /*309*/].f_207 = 250;
		Global_1638223.f_65268[iVar0 /*309*/].f_210 = 0;
		Global_1638223.f_65268[iVar0 /*309*/].f_211 = -1;
		Global_1638223.f_65268[iVar0 /*309*/].f_274 = -1;
		Global_1638223.f_65268[iVar0 /*309*/].f_212 = 0;
		Global_1638223.f_65268[iVar0 /*309*/].f_275 = 4;
		Global_1638223.f_65268[iVar0 /*309*/].f_242 = 0;
		Global_1638223.f_65268[iVar0 /*309*/].f_154 = 0;
		Global_1638223.f_65268[iVar0 /*309*/].f_155 = -1;
		Global_1638223.f_65268[iVar0 /*309*/].f_156 = -1;
		Global_1638223.f_65268[iVar0 /*309*/].f_232 = -1;
		Global_1638223.f_65268[iVar0 /*309*/].f_233 = -1;
		Global_1638223.f_65268[iVar0 /*309*/].f_234 = -1;
		Global_1638223.f_65268[iVar0 /*309*/].f_271 = -1;
		Global_1638223.f_65268[iVar0 /*309*/].f_270 = -1;
		Global_1638223.f_65268[iVar0 /*309*/].f_272 = -1;
		Global_1638223.f_65268[iVar0 /*309*/].f_273 = -1;
		Global_1638223.f_65268[iVar0 /*309*/].f_157 = -1;
		Global_1638223.f_65268[iVar0 /*309*/].f_158 = 0;
		Global_1638223.f_65268[iVar0 /*309*/].f_61 = 0;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1638223.f_65268[iVar0 /*309*/].f_18[iVar1] = 0;
			Global_1638223.f_65268[iVar0 /*309*/].f_23[iVar1] = 2;
			Global_1638223.f_65268[iVar0 /*309*/].f_28[iVar1] = 99999;
			Global_1638223.f_65268[iVar0 /*309*/].f_201[iVar1] = -1;
			Global_1638223.f_65268[iVar0 /*309*/].f_243[iVar1] = 0;
			Global_1638223.f_65268[iVar0 /*309*/].f_248[iVar1] = 0;
			Global_1638223.f_65268[iVar0 /*309*/].f_258[iVar1] = -1;
			Global_1638223.f_65268[iVar0 /*309*/].f_263[iVar1] = -1;
			Global_1638223.f_65268[iVar0 /*309*/].f_277[iVar1] = -2;
			Global_1638223.f_65268[iVar0 /*309*/].f_171[iVar1] = 0;
			Global_1638223.f_65268[iVar0 /*309*/].f_236[iVar1] = 0;
			iVar1++;
		}
		Global_1638223.f_65268[iVar0 /*309*/].f_116[0] = 0f;
		Global_1638223.f_65268[iVar0 /*309*/].f_122[0] = 0f;
		Global_1638223.f_65268[iVar0 /*309*/].f_134[0] = 0f;
		Global_1638223.f_65268[iVar0 /*309*/].f_82[0] = 0;
		Global_1638223.f_65268[iVar0 /*309*/].f_88[0] = -1;
		Global_1638223.f_65268[iVar0 /*309*/].f_94[0 /*3*/] = { 0f, 0f, 0f };
		Global_1638223.f_65268[iVar0 /*309*/].f_110[0] = 3;
		Global_1638223.f_65268[iVar0 /*309*/].f_128[0] = -1;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1638223.f_65268[iVar0 /*309*/].f_68[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1638223.f_65268[iVar0 /*309*/].f_82[iVar1 + 1] = 0;
			Global_1638223.f_65268[iVar0 /*309*/].f_116[iVar1 + 1] = 0f;
			Global_1638223.f_65268[iVar0 /*309*/].f_122[iVar1 + 1] = 0f;
			Global_1638223.f_65268[iVar0 /*309*/].f_134[iVar1 + 1] = 0f;
			Global_1638223.f_65268[iVar0 /*309*/].f_88[iVar1 + 1] = -1;
			Global_1638223.f_65268[iVar0 /*309*/].f_94[iVar1 + 1 /*3*/] = { 0f, 0f, 0f };
			Global_1638223.f_65268[iVar0 /*309*/].f_110[iVar1 + 1] = 3;
			Global_1638223.f_65268[iVar0 /*309*/].f_128[iVar1 + 1] = -1;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			Global_1638223.f_65268[iVar0 /*309*/].f_140[iVar1] = 0f;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			Global_1638223.f_65268[iVar0 /*309*/].f_291[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1638223.f_65268[iVar0 /*309*/].f_298[iVar1] = 0f;
			iVar1++;
		}
		Global_1638223.f_65268[iVar0 /*309*/].f_187 = -1;
		Global_1638223.f_65268[iVar0 /*309*/].f_188 = -1;
		Global_1638223.f_65268[iVar0 /*309*/].f_276 = -1;
		Global_1638223.f_65268[iVar0 /*309*/].f_282 = -1;
		Global_1638223.f_65268[iVar0 /*309*/].f_283 = -1;
		Global_1638223.f_65268[iVar0 /*309*/].f_284 = -1;
		Global_1638223.f_65268[iVar0 /*309*/].f_288 = -1;
		Global_1638223.f_65268[iVar0 /*309*/].f_289 = 0f;
		Global_1638223.f_65268[iVar0 /*309*/].f_285 = -1;
		Global_1638223.f_65268[iVar0 /*309*/].f_286 = -1;
		Global_1638223.f_65268[iVar0 /*309*/].f_287 = -1;
		Global_1638223.f_65268[iVar0 /*309*/].f_290 = -1;
		Global_1638223.f_65268[iVar0 /*309*/].f_306 = -1;
		Global_1638223.f_65268[iVar0 /*309*/].f_304 = 0;
		Global_1638223.f_65268[iVar0 /*309*/].f_305 = 0;
		iVar0++;
	}
	Global_1638223.f_84186 = 0;
	iVar0 = 0;
	while (iVar0 <= 59)
	{
		Global_1638223.f_84193[iVar0 /*15*/] = { 0f, 0f, 0f };
		Global_1638223.f_84193[iVar0 /*15*/].f_3 = 0f;
		Global_1638223.f_84193[iVar0 /*15*/].f_4 = 0;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		Global_1638223.f_44241[iVar1] = 0;
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Global_1638223.f_41724[iVar0 /*112*/].f_53 = 0;
		Global_1638223.f_41724[iVar0 /*112*/].f_46 = 0;
		Global_1638223.f_41724[iVar0 /*112*/].f_20 = 0f;
		Global_1638223.f_41724[iVar0 /*112*/].f_28 = 0f;
		Global_1638223.f_41724[iVar0 /*112*/].f_29 = 0f;
		Global_1638223.f_41724[iVar0 /*112*/].f_30 = 0f;
		Global_1638223.f_41724[iVar0 /*112*/].f_55 = 0f;
		Global_1638223.f_41724[iVar0 /*112*/].f_56 = 0f;
		Global_1638223.f_41724[iVar0 /*112*/] = 0;
		Global_1638223.f_41724[iVar0 /*112*/].f_21 = { 0f, 0f, 0f };
		Global_1638223.f_41724[iVar0 /*112*/].f_24 = { 0f, 0f, 0f };
		Global_1638223.f_41724[iVar0 /*112*/].f_27 = 1f;
		Global_1638223.f_41724[iVar0 /*112*/].f_97 = 10.5f;
		Global_1638223.f_41724[iVar0 /*112*/].f_99 = 1f;
		Global_1638223.f_41724[iVar0 /*112*/].f_100 = 0f;
		Global_1638223.f_41724[iVar0 /*112*/].f_101 = 0;
		Global_1638223.f_41724[iVar0 /*112*/].f_96 = 0;
		Global_1638223.f_41724[iVar0 /*112*/].f_54 = 0;
		Global_1638223.f_41724[iVar0 /*112*/].f_19 = 1f;
		Global_1638223.f_41724[iVar0 /*112*/].f_102 = -1;
		Global_1638223.f_41724[iVar0 /*112*/].f_103 = -1f;
		Global_1638223.f_41724[iVar0 /*112*/].f_104 = 0f;
		Global_1638223.f_41724[iVar0 /*112*/].f_105 = 0f;
		Global_1638223.f_41724[iVar0 /*112*/].f_106 = -1;
		Global_1638223.f_41724[iVar0 /*112*/].f_108 = -1;
		Global_1638223.f_41724[iVar0 /*112*/].f_109 = -1;
		Global_1638223.f_41724[iVar0 /*112*/].f_110 = -1;
		Global_1638223.f_41724[iVar0 /*112*/].f_111 = 0;
		Global_1638223.f_41724[iVar0 /*112*/].f_47 = 0;
		if (Global_1638223.f_41724[iVar0 /*112*/].f_107 != 0)
		{
			unk_0x4CB805C7B13F608C(Global_1638223.f_41724[iVar0 /*112*/].f_107);
			Global_1638223.f_41724[iVar0 /*112*/].f_107 = 0;
		}
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1638223.f_41724[iVar0 /*112*/].f_1[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_1638223.f_41724[iVar0 /*112*/].f_14[iVar1] = 0f;
			Global_1638223.f_41724[iVar0 /*112*/].f_36[iVar1] = 0;
			Global_1638223.f_41724[iVar0 /*112*/].f_41[iVar1] = 0;
			Global_1638223.f_41724[iVar0 /*112*/].f_31[iVar1] = 0;
			Global_1638223.f_41724[iVar0 /*112*/].f_62[iVar1] = 0;
			Global_1638223.f_41724[iVar0 /*112*/].f_67[iVar1] = 99999;
			Global_1638223.f_41724[iVar0 /*112*/].f_72[iVar1] = 0;
			Global_1638223.f_41724[iVar0 /*112*/].f_77[iVar1] = 0;
			Global_1638223.f_41724[iVar0 /*112*/].f_57[iVar1] = 0;
			Global_1638223.f_41724[iVar0 /*112*/].f_82[iVar1] = 0;
			Global_1638223.f_41724[iVar0 /*112*/].f_87[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	Global_1638223.f_93104 = 0;
	Global_1638223.f_45 = 0;
	Global_1638223.f_109717 = 12;
	Global_1638223.f_109718 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1638223.f_107285[iVar0] = -1;
		Global_1638223.f_107290[iVar0] = -1;
		iVar0++;
	}
	Global_1638223.f_44970 = 0;
	Global_1638223.f_107886 = -1;
	Global_1638223.f_107295 = 0;
	Global_1638223.f_107284 = 0;
	Global_1638223.f_107297 = 0;
	Global_1638223.f_107296 = 0;
	Global_1638223.f_107298 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Global_1638223.f_112808[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_1638223.f_94135[iVar0] = 0;
		iVar0++;
	}
	iVar5 = 0;
	while (iVar5 <= 29)
	{
		Global_1638223.f_89080[iVar5] = -1;
		Global_1638223.f_89049[iVar5] = -1;
		iVar6 = 0;
		while (iVar6 <= 12)
		{
			iVar7 = 0;
			while (iVar7 <= 3)
			{
				Global_1638223.f_89111[iVar5 /*66*/][iVar6 /*5*/][iVar7] = -1;
				Global_1638223.f_91092[iVar5 /*66*/][iVar6 /*5*/][iVar7] = -1;
				iVar7++;
			}
			iVar6++;
		}
		iVar5++;
	}
	Global_1638223.f_112904 = 0;
	Global_1638223.f_112915 = { 0f, 0f, 0f };
	Global_1638223.f_112918 = { 0f, 0f, 0f };
	func_212();
}

void func_230()
{
	int iVar0;
	
	Global_1638223.f_112951 = 0;
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		Global_1638223.f_112952[iVar0 /*11*/][0 /*3*/] = { 0f, 0f, 0f };
		Global_1638223.f_112952[iVar0 /*11*/][1 /*3*/] = { 0f, 0f, 0f };
		Global_1638223.f_112952[iVar0 /*11*/].f_7 = 0;
		Global_1638223.f_112952[iVar0 /*11*/].f_8 = 0;
		Global_1638223.f_112952[iVar0 /*11*/].f_10 = 0f;
		Global_1638223.f_112952[iVar0 /*11*/].f_9 = 0;
		iVar0++;
	}
}

void func_231()
{
	int iVar0;
	int iVar1;
	
	Global_1638223.f_93840 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		Global_1638223.f_93863[iVar0 /*26*/][0 /*3*/] = { 0f, 0f, 0f };
		Global_1638223.f_93863[iVar0 /*26*/][1 /*3*/] = { 0f, 0f, 0f };
		Global_1638223.f_93863[iVar0 /*26*/].f_9 = 0;
		Global_1638223.f_93863[iVar0 /*26*/].f_20 = 0;
		Global_1638223.f_93863[iVar0 /*26*/].f_22 = 0f;
		Global_1638223.f_93863[iVar0 /*26*/].f_23 = 0f;
		Global_1638223.f_93863[iVar0 /*26*/].f_21 = 0;
		Global_1638223.f_93863[iVar0 /*26*/].f_7 = 0f;
		Global_1638223.f_93863[iVar0 /*26*/].f_8 = 0;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_1638223.f_93863[iVar0 /*26*/].f_10[iVar1] = -1;
			iVar1++;
		}
		iVar0++;
	}
}

void func_232(var uParam0)
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

void func_233(var uParam0)
{
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_234(var uParam0)
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

void func_235(char* sParam0)
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
		func_236(&(sParam0->f_63[iVar0 /*12*/]));
		iVar0++;
	}
}

void func_236(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	StringCopy(&(uParam0->f_4), "", 32);
}

void func_237(char* sParam0)
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
	sParam0->f_1144 = -1;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		sParam0->f_1145[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		sParam0->f_1150[iVar0] = 0;
		sParam0->f_1152[iVar0] = 0;
		iVar0++;
	}
	sParam0->f_90 = 0;
	sParam0->f_89 = 0;
	sParam0->f_91 = 0;
	sParam0->f_782 = 0;
	sParam0->f_483 = 0;
	sParam0->f_484 = 0;
	sParam0->f_485 = 0;
	sParam0->f_486 = { 0f, 0f, 0f };
	sParam0->f_775 = { 0f, 0f, 0f };
	sParam0->f_778 = 0f;
	sParam0->f_779 = { 0f, 0f, 0f };
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		func_238(sParam0, iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		func_236(&(sParam0->f_783[iVar0 /*12*/]));
		iVar0++;
	}
}

void func_238(char* sParam0, int iParam1)
{
	if (iParam1 >= 0 && iParam1 < 20)
	{
		sParam0->f_92[iParam1] = 0;
		sParam0->f_47[iParam1] = 0f;
		sParam0->f_68[iParam1] = 0f;
		sParam0->f_113[iParam1] = 0;
		sParam0->f_134[iParam1 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_195[iParam1 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_256[iParam1 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_317[iParam1 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_378[iParam1] = 0f;
		sParam0->f_399[iParam1] = 0f;
		sParam0->f_420[iParam1] = 0;
		sParam0->f_441[iParam1] = -1;
		sParam0->f_462[iParam1] = 0f;
		sParam0->f_489[iParam1 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_550[iParam1] = 0f;
		StringCopy(&(sParam0->f_1154[iParam1 /*4*/]), "", 16);
		StringCopy(&(sParam0->f_1235[iParam1 /*4*/]), "", 16);
	}
}

void func_239()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 21)
	{
		Global_1638223.f_44808[iVar0] = 0;
		iVar0++;
	}
}

void func_240()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		StringCopy(&(Global_1638223.f_93690[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
}

int func_241()
{
	return Global_1592456[unk_0x0FFED3E94261A832() /*635*/].f_189;
}

int func_242()
{
	if (unk_0x9E5289F5D782437C())
	{
		if (Global_1312432)
		{
			return 1;
		}
	}
	else if (Global_1312432)
	{
		Global_1312432 = 0;
	}
	return 0;
}

bool func_243()
{
	return unk_0xAA4F14DA15DB0B51(Global_970998.f_8, 0);
}

bool func_244()
{
	return unk_0xAA4F14DA15DB0B51(Global_2445217, 4);
}

bool func_245()
{
	return unk_0xAA4F14DA15DB0B51(Global_2445217, 28);
}

var func_246()
{
	return Global_2445217.f_572;
}

void func_247()
{
	struct<62> Var0;
	
	Var0.f_4.f_1 = -1;
	Var0.f_4.f_2 = -1;
	Var0.f_4.f_9 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Global_2394785 = { Var0 };
	StringCopy(&(Global_2394785.f_30), "", 64);
	StringCopy(&(Global_2394785.f_46), "", 64);
	StringCopy(&(Global_2394785.f_15), "", 32);
}

void func_248()
{
	unk_0x507FE690B1271947(&Global_2445217, 4);
}

void func_249()
{
	unk_0x507FE690B1271947(&Global_2445217, 28);
}

void func_250(bool bParam0, bool bParam1, bool bParam2)
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
	Global_1573291[0] = 0;
	Global_1573291[1] = 0;
	bParam0->f_40 = 0;
	if (bParam2)
	{
		bParam0->f_41 = { Var0 };
	}
	if (bParam1)
	{
		func_94(bParam0, 0);
	}
}

int func_251(int iParam0)
{
	switch (iParam0)
	{
		case 127:
			return 15;
		
		case 134:
			return 8;
		
		case 128:
			return 14;
		
		case 132:
			return 122;
		
		case 135:
			return 1;
		
		case 133:
			return 5;
		
		case 136:
			return 6;
		
		case 129:
			return 11;
		
		case 137:
			return 0;
		
		case 138:
			return 2;
		
		case 130:
			return 13;
		
		case 139:
			return 3;
		
		case 131:
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
		
		case 106:
			return 225;
		
		case 107:
			return 226;
		
		case 108:
			return 227;
		
		default:
	}
	return 229;
}

bool func_252()
{
	return Global_2394785;
}

var func_253()
{
	return Global_2394785.f_3;
}

