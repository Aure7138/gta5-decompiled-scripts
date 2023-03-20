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
	var uLocal_92 = 0;
	float fLocal_93 = 0f;
	float fLocal_94 = 0f;
	float fLocal_95 = 0f;
	float fLocal_96 = 0f;
	float fLocal_97 = 0f;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	float fLocal_101 = 0f;
	float fLocal_102 = 0f;
	float fLocal_103 = 0f;
	float fLocal_104 = 0f;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	float fLocal_114 = 0f;
	var uLocal_115 = 0;
	struct<6> Local_116 = { 0, 0, 0, 0, 0, -1 } ;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 3;
	var uLocal_125 = 17;
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
	var uLocal_143 = 17;
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
	var uLocal_161 = 17;
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
	var uLocal_179 = 3;
	var uLocal_180 = 17;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 17;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 17;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	int iLocal_234 = 0;
	var uLocal_235 = 0;
	int iLocal_236 = 0;
	int iLocal_237 = 0;
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
	fLocal_93 = -0.05f;
	fLocal_94 = 0.92f;
	fLocal_95 = 1.94f;
	fLocal_96 = 2.99f;
	fLocal_97 = 3.7f;
	fLocal_101 = 3f;
	fLocal_102 = 0f;
	fLocal_103 = 2f;
	fLocal_104 = 100f;
	fLocal_114 = 0.5f;
	if (unk_0x2EC83C7ACA23E8A4(2))
	{
		func_31();
	}
	unk_0x7BCE93123FE81E45("FMMC", 2);
	unk_0xFDEC0B505BCB00C0(unk_0x0C1D3C552325765B(), 0, 0);
	iLocal_237 = Global_1626500.f_2;
	func_16(1, iLocal_237 != 6, 1);
	Global_1312435 = 0;
	Local_116.f_5 = Global_1626500;
	Global_1312366 = 0;
	Global_1312436 = 0;
	iLocal_236 = Global_1626500;
	if (Global_1626500 == 0)
	{
		Global_1626500.f_2 = iLocal_237;
	}
	Global_1729811 = 0;
	while (true)
	{
		if (iLocal_236 != Global_1626500)
		{
			func_15(&Local_116);
			iLocal_236 = Global_1626500;
			unk_0x09C86C0C5CA26B1E(&(Local_116.f_4), 0);
		}
		if (func_14() == 3)
		{
			func_31();
		}
		if (func_13())
		{
			func_31();
		}
		unk_0x4EDE34FBADD967A6(0);
		switch (iLocal_234)
		{
			case 0:
				unk_0x7BCE93123FE81E45("FMMC", 2);
				if (unk_0x15CD8FB3CF6BE10D("FMMC", 2))
				{
					iLocal_234 = 1;
				}
				break;
			
			case 1:
				if (Local_116.f_5 != Global_1626500)
				{
					Local_116.f_5 = Global_1626500;
					func_16(1, 1, 1);
					func_15(&Local_116);
				}
				unk_0x9873DF493A2EBB18();
				func_12(&Local_116);
				Global_1729812 = 0;
				Global_1729811 = 0;
				iLocal_234 = 4;
				if (!func_11())
				{
					func_10();
				}
				break;
			
			case 4:
				if (func_9())
				{
					if ((Global_1626500.f_2 != 6 && Global_1626500 != 4) && Global_1626500.f_2 != 5)
					{
						if (func_8(&uLocal_235))
						{
							iLocal_234 = 2;
						}
					}
					else if (Global_1626500.f_2 == 5)
					{
						if (func_7(&uLocal_235))
						{
							iLocal_234 = 2;
						}
					}
					else if (func_6(&uLocal_235))
					{
						iLocal_234 = 2;
					}
				}
				else if (Global_1626500 == 1)
				{
					if (func_5(&uLocal_235))
					{
						iLocal_234 = 2;
					}
				}
				else if (func_4())
				{
					if (func_2(&uLocal_235))
					{
						iLocal_234 = 2;
					}
				}
				if (Global_1729811 == 1)
				{
					iLocal_234 = 3;
					Global_1729811 = 0;
				}
				break;
			
			case 3:
				if (unk_0x2A57AED61E15C7C7(2, 217))
				{
					iLocal_234 = 1;
				}
				break;
			
			case 2:
				iLocal_234 = 1;
				break;
			
			case 5:
				func_12(&Local_116);
				break;
			
			case 8:
				func_31();
				break;
		}
		if (Global_1312436)
		{
			Global_1312436 = 0;
			func_31();
		}
		if (func_1())
		{
			Global_1312436 = 0;
			func_31();
		}
		if (Global_1626500.f_83439)
		{
			func_31();
		}
		if (Global_1312437)
		{
			func_31();
		}
	}
}

bool func_1()
{
	return Global_1312366;
}

int func_2(var uParam0)
{
	if (!unk_0x08BA6DD398CA197C(*uParam0, 2))
	{
		unk_0xE568CE38FF8C1318("FM_Race_Creator");
		if (unk_0x71DF55A4DE7565D5("FM_Race_Creator"))
		{
			if (!func_3())
			{
				unk_0xE81651AD79516E48("FM_Race_Creator", 19000);
				unk_0x3CFCF109465A1DA6("FM_Race_Creator");
				unk_0x88B0F0DC270164B7(uParam0, 2);
			}
		}
	}
	else if (unk_0xA96867DD0A63C62C(joaat("fm_race_creator")) == 0)
	{
		unk_0x09C86C0C5CA26B1E(uParam0, 2);
		return 1;
	}
	return 0;
}

int func_3()
{
	if ((((unk_0xA96867DD0A63C62C(joaat("fm_mission_creator")) > 0 || unk_0xA96867DD0A63C62C(joaat("fm_deathmatch_creator")) > 0) || unk_0xA96867DD0A63C62C(joaat("fm_race_creator")) > 0) || unk_0xA96867DD0A63C62C(joaat("fm_capture_creator")) > 0) || unk_0xA96867DD0A63C62C(joaat("fm_lts_creator")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_4()
{
	if (Global_1626500 == 2 || Global_1626500 == 8)
	{
		return 1;
	}
	return 0;
}

int func_5(var uParam0)
{
	if (!unk_0x08BA6DD398CA197C(*uParam0, 2))
	{
		unk_0xE568CE38FF8C1318("FM_Deathmatch_Creator");
		if (unk_0x71DF55A4DE7565D5("FM_Deathmatch_Creator"))
		{
			if (!func_3())
			{
				unk_0xE81651AD79516E48("FM_Deathmatch_Creator", 19000);
				unk_0x3CFCF109465A1DA6("FM_Deathmatch_Creator");
				unk_0x88B0F0DC270164B7(uParam0, 2);
			}
		}
	}
	else if (unk_0xA96867DD0A63C62C(joaat("fm_deathmatch_creator")) == 0)
	{
		unk_0x09C86C0C5CA26B1E(uParam0, 2);
		return 1;
	}
	return 0;
}

int func_6(var uParam0)
{
	if (!unk_0x08BA6DD398CA197C(*uParam0, 2))
	{
		unk_0xE568CE38FF8C1318("FM_Capture_Creator");
		if (unk_0x71DF55A4DE7565D5("FM_Capture_Creator"))
		{
			if (!func_3())
			{
				unk_0xE81651AD79516E48("FM_Capture_Creator", 19000);
				unk_0x3CFCF109465A1DA6("FM_Capture_Creator");
				unk_0x88B0F0DC270164B7(uParam0, 2);
			}
		}
	}
	else if (unk_0xA96867DD0A63C62C(joaat("fm_capture_creator")) == 0)
	{
		unk_0x09C86C0C5CA26B1E(uParam0, 2);
		return 1;
	}
	return 0;
}

int func_7(var uParam0)
{
	if (!unk_0x08BA6DD398CA197C(*uParam0, 2))
	{
		unk_0xE568CE38FF8C1318("FM_LTS_Creator");
		if (unk_0x71DF55A4DE7565D5("FM_LTS_Creator"))
		{
			if (!func_3())
			{
				unk_0xE81651AD79516E48("FM_LTS_Creator", 19000);
				unk_0x3CFCF109465A1DA6("FM_LTS_Creator");
				unk_0x88B0F0DC270164B7(uParam0, 2);
			}
		}
	}
	else if (unk_0xA96867DD0A63C62C(joaat("fm_lts_creator")) == 0)
	{
		unk_0x09C86C0C5CA26B1E(uParam0, 2);
		return 1;
	}
	return 0;
}

int func_8(var uParam0)
{
	if (!unk_0x08BA6DD398CA197C(*uParam0, 2))
	{
		unk_0xE568CE38FF8C1318("FM_Mission_Creator");
		if (unk_0x71DF55A4DE7565D5("FM_Mission_Creator"))
		{
			if (!func_3())
			{
				unk_0xE81651AD79516E48("FM_Mission_Creator", 19000);
				unk_0x3CFCF109465A1DA6("FM_Mission_Creator");
				unk_0x88B0F0DC270164B7(uParam0, 2);
			}
		}
	}
	else if (unk_0xA96867DD0A63C62C(joaat("fm_mission_creator")) == 0)
	{
		unk_0x09C86C0C5CA26B1E(uParam0, 2);
		return 1;
	}
	return 0;
}

int func_9()
{
	if ((((((Global_1626500 == 0 || Global_1626500 == 4) || Global_1626500 == 6) || Global_1626500 == 3) || Global_1626500 == 31) || Global_1626500.f_2 == 6) || Global_1626500.f_2 == 5)
	{
		return 1;
	}
	return 0;
}

void func_10()
{
	Global_17151.f_5 = 1;
}

bool func_11()
{
	return (Global_17151.f_5 || Global_17151.f_6);
}

void func_12(var uParam0)
{
	if (Global_1626500 == 0)
	{
		Global_1626500.f_22 = uParam0->f_8[0 /*18*/][5];
		Global_1626500.f_23 = uParam0->f_8[0 /*18*/][5];
		Global_1626500.f_27 = uParam0->f_8[0 /*18*/][7] + 1;
	}
	else if (Global_1626500 == 1)
	{
		Global_1626500.f_22 = uParam0->f_8[1 /*18*/][0];
		Global_1626500.f_46 = uParam0->f_8[1 /*18*/][2];
		Global_1626500.f_48 = uParam0->f_8[1 /*18*/][3];
		Global_1626500.f_24 = uParam0->f_8[1 /*18*/][4];
		Global_1626500.f_51165 = uParam0->f_8[1 /*18*/][5];
		Global_1626500.f_51164 = uParam0->f_8[1 /*18*/][6];
		Global_1626500.f_54 = uParam0->f_8[1 /*18*/][7];
		Global_1626500.f_39360 = uParam0->f_8[1 /*18*/][8];
		Global_1626500.f_59 = uParam0->f_8[1 /*18*/][9];
		Global_1626500.f_49 = uParam0->f_8[1 /*18*/][10];
		Global_1626500.f_51 = uParam0->f_8[1 /*18*/][11];
		Global_1626500.f_53 = uParam0->f_8[1 /*18*/][12];
		Global_1626500.f_52 = uParam0->f_8[1 /*18*/][13];
		Global_1626500.f_53610 = uParam0->f_8[1 /*18*/][14];
	}
	else if (Global_1626500 == 2)
	{
		Global_1626500.f_22 = uParam0->f_8[2 /*18*/][4];
		Global_1626500.f_38718 = uParam0->f_8[2 /*18*/][14];
		Global_1626500.f_38715 = uParam0->f_8[2 /*18*/][7];
	}
}

bool func_13()
{
	return Global_1312364;
}

int func_14()
{
	if (unk_0x08BA6DD398CA197C(Global_1342783.f_102, 1))
	{
		return 1;
	}
	if (unk_0x08BA6DD398CA197C(Global_1342783.f_102, 2))
	{
		unk_0x09C86C0C5CA26B1E(&(Global_1342783.f_102), 2);
		return 2;
	}
	if (unk_0x08BA6DD398CA197C(Global_1342783.f_102, 3))
	{
		unk_0x09C86C0C5CA26B1E(&(Global_1342783.f_102), 3);
		return 3;
	}
	return 0;
}

void func_15(var uParam0)
{
}

void func_16(bool bParam0, bool bParam1, bool bParam2)
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
		if (!func_30())
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
	func_29();
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		StringCopy(&(Global_1626500.f_32044[0 /*38*/].f_4[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	func_28();
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
		func_26(&(Global_1626500.f_88012[iVar0 /*1269*/]));
		func_24(&(Global_1626500.f_94358[iVar0 /*434*/]));
		iVar0++;
	}
	func_24(&(Global_1626500.f_96529));
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
		func_23(&(Global_1626500.f_84520[iVar0 /*44*/]), iVar0);
		iVar0++;
	}
	Global_1626500.f_87846[0] = 0;
	Global_1626500.f_87846[1] = 0;
	Global_1626500.f_87850 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		func_22(&(Global_1626500.f_97338[iVar0 /*10*/]));
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
			func_21(&(Global_1626500.f_89[iVar0 /*7777*/].f_2827[iVar1 /*4*/]));
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
		func_20(&(Global_1626500.f_99898[iVar0 /*244*/]));
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
		if (func_9() && !func_19())
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
	func_18();
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
	func_17();
}

void func_17()
{
	Global_1626500.f_102344 = { 0f, 0f, 0f };
	Global_1626500.f_102347 = 30f;
	Global_1626500.f_102348 = 5f;
	Global_1626500.f_102349 = 30000;
	Global_1626500.f_102350 = 15000;
}

void func_18()
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

int func_19()
{
	if (Global_1626500 == 0 && Global_1626500.f_2 == 5)
	{
		return 1;
	}
	return 0;
}

void func_20(var uParam0)
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

void func_21(var uParam0)
{
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_22(var uParam0)
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

void func_23(var uParam0, int iParam1)
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

void func_24(char* sParam0)
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
		func_25(&(sParam0->f_63[iVar0 /*12*/]));
		iVar0++;
	}
}

void func_25(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	StringCopy(&(uParam0->f_4), "", 32);
}

void func_26(char* sParam0)
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
		func_27(sParam0, iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		func_25(&(sParam0->f_736[iVar0 /*12*/]));
		iVar0++;
	}
}

void func_27(char* sParam0, int iParam1)
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

void func_28()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 21)
	{
		Global_1626500.f_39274[iVar0] = 0;
		iVar0++;
	}
}

void func_29()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		StringCopy(&(Global_1626500.f_84025[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
}

bool func_30()
{
	return Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_186 != 0;
}

void func_31()
{
	func_32();
	Global_1626500.f_83439 = 0;
	Global_1312435 = 1;
	Global_1312436 = 0;
	unk_0x78C587487CD40B92();
}

void func_32()
{
	Global_17151.f_5 = 0;
}

