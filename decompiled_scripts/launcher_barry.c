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
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	char* sLocal_19 = NULL;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	struct<4> Local_35[10];
	bool bLocal_76 = 0;
	int iLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	int iLocal_90 = 0;
	var uLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	struct<8> Local_96 = { 5, 0, 0, 0, 0, 0, 0, -1 } ;
	var uLocal_104 = 0;
	var uLocal_105 = 16;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
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
	var uLocal_198 = 0;
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
	var uLocal_216 = 0;
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
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	int iLocal_270 = 0;
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()
{
	struct<42> Var0;
	struct<3> Var61;
	int iVar64;
	
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
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_77 = 3;
	iLocal_81 = 1;
	iLocal_82 = 65;
	iLocal_83 = 49;
	iLocal_84 = 64;
	uLocal_88 = unk_0xADC39FDF03F9D8CA();
	uLocal_89 = unk_0x138F9DA1F3442BA3();
	uLocal_91 = func_290(49);
	iLocal_92 = -1;
	unk_0x100D1872BDC04276(1);
	func_289();
	Var0.f_17 = 2;
	Var0.f_28 = 6;
	Var0.f_35 = 5;
	Var0.f_41 = 6;
	Var61 = { 0f, 0f, 0f };
	func_288(&Var0);
	Var61 = { ScriptParam_0.f_1[0 /*3*/] };
	if (unk_0x7547D7CF93115D6D(83))
	{
		func_287("Force cleanup [TERMINATING]");
		if (Var0.f_0 != -1)
		{
			if (Global_96260[Var0.f_0 /*10*/].f_9 != -1)
			{
				func_287("Relinquishing candidate id...");
				func_286(&(Global_96260[Var0.f_0 /*10*/].f_9));
			}
		}
		func_269(&Var0, 1);
	}
	if (!func_266(&Var0, Var61, 1f))
	{
		func_265();
		func_287("SCRIPT TERMINATED");
		unk_0x883793591E631A3B();
	}
	if (!func_257(Var0.f_0))
	{
		func_265();
		func_287("SCRIPT TERMINATED");
		unk_0x883793591E631A3B();
	}
	if (func_256(Var0.f_0))
	{
		func_265();
		func_287("SCRIPT TERMINATED");
		unk_0x883793591E631A3B();
	}
	while (!func_234(&Var0))
	{
		unk_0x4EDE34FBADD967A6(0);
		if (!unk_0x3BCCCFB165E15A65())
		{
			func_287("Player out of range [TERMINATING]");
			func_269(&Var0, 1);
		}
	}
	if (Var0.f_0 == 6)
	{
		uLocal_94 = func_233();
	}
	unk_0x4BCBC9058A5CECE1(Var61, Var0.f_15, 1, 0, 0, 0);
	if (Var0.f_0 == 4)
	{
		func_232(&uLocal_105, 3, Var0.f_28[0], "BARRY", 0, 1);
		iLocal_270 = unk_0xF976C624234A4AA8();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (Var0.f_0 == 2 || Var0.f_0 == 3)
		{
			func_230(&Var0);
			func_228();
			if (unk_0xFC241F94E52E147B())
			{
				unk_0x22E9DDFB4FFC88B9("Barry", 1, 0, 0, 0);
			}
		}
		else if (Var0.f_0 == 4)
		{
			if (unk_0xFC241F94E52E147B())
			{
				unk_0x22E9DDFB4FFC88B9("BARRY", 1, 0, 0, 0);
			}
		}
		if (!func_190(&Var0, Var0.f_0 != 2))
		{
			func_269(&Var0, 1);
		}
		func_189(Var0.f_0);
		func_182(&iLocal_92, &(Var0.f_9), Var61);
		if (func_181(Var0.f_28[0]))
		{
			if (Var0.f_0 == 2)
			{
				if (func_179(&Var0, unk_0xBF1B13057E5119A4(Var0.f_28[0], 1), "BARY1AU", "BARY1_PRELEA", 5, "BARRY", 10000, 23f))
				{
					func_178(&Var0, Local_96, 1, 0);
				}
			}
			else if (Var0.f_0 == 3)
			{
				if (func_179(&Var0, unk_0xBF1B13057E5119A4(Var0.f_28[0], 1), "BARY2AU", "BARY2_AMB", 3, "BARRY", 10000, 23f))
				{
				}
			}
			else if (Var0.f_0 == 4)
			{
				func_168(&uLocal_104, unk_0xBF1B13057E5119A4(Var0.f_28[0], 1), "BARR3AU", "BARRY3_AMB");
			}
		}
		iVar64 = 0;
		if (func_167(Var0.f_0))
		{
			if ((unk_0xF976C624234A4AA8() - iLocal_93) > 5000)
			{
				iVar64 = 1;
				iLocal_93 = unk_0xF976C624234A4AA8();
			}
		}
		if (func_152(&Var0, iVar64))
		{
			if (func_151(Var0.f_0))
			{
				func_148(Var0.f_0, &uLocal_95);
			}
			if (!func_2(&Var0))
			{
				func_269(&Var0, 1);
			}
			if (func_1(&Var0))
			{
				func_269(&Var0, 0);
			}
		}
	}
}

int func_1(int iParam0)
{
	while (!Global_96260[*iParam0 /*10*/])
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	return 1;
}

int func_2(int iParam0)
{
	struct<4> Var0;
	char* sVar32;
	
	if (!func_147())
	{
		while (!func_138(*iParam0))
		{
			if (func_137(*iParam0))
			{
				func_129();
			}
			if (!func_190(iParam0, *iParam0 != 2))
			{
				func_287("LAUNCH_RC_MISSION - NOT IS_RC_FINE_AND_IN_RANGE() [TERMINATING]");
				return 0;
			}
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	if (func_128())
	{
		func_126();
	}
	if (!func_97(iParam0))
	{
		func_287("STEP_7_COMMON_LaunchMission - Trying to launch a null script string name");
		return 0;
	}
	func_94(*iParam0, &Var0);
	MemCopy(&sVar32, {func_93(*iParam0)}, 4);
	func_91(&sVar32, Var0.f_3, 0);
	func_90(*iParam0);
	if (!func_147())
	{
		if (iParam0->f_16 == 2)
		{
			func_22(&(iParam0->f_1), 0);
		}
		else
		{
			func_22(&(iParam0->f_1), 1);
		}
	}
	func_3(*iParam0, Var0.f_0);
	return 1;
}

void func_3(int iParam0, char* sParam1)
{
	func_21(sParam1);
	unk_0xCD27BF29FB9012E2(&(Global_97173.f_16795[iParam0 /*6*/]), 5);
	if (unk_0x25531002BCF0D968(joaat("mission_stat_watcher")) > 0)
	{
		while (unk_0x25531002BCF0D968(joaat("mission_stat_watcher")) > 0)
		{
			func_19();
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	if (unk_0x25531002BCF0D968(joaat("mission_stat_watcher")) < 1)
	{
		Global_54573 = 0;
		unk_0x38797C3918FDD596("mission_stat_watcher");
		while (!unk_0x4C903C3B660A5023("mission_stat_watcher"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xE81651AD79516E48("mission_stat_watcher", 1828);
		unk_0xDD83BEFDE8CC91AD("mission_stat_watcher");
	}
	while (!unk_0x61D8FEAF64881CDA(Global_97173.f_16795[iParam0 /*6*/], 5))
	{
		if (unk_0x25531002BCF0D968(joaat("mission_stat_watcher")) > 0)
		{
			unk_0x3DBE2A7AF9E71C82(&(Global_97173.f_16795[iParam0 /*6*/]), 5);
		}
	}
	func_4(iParam0);
}

void func_4(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_54570 == 1)
	{
		func_18();
		Global_54570 = 0;
		if (Global_54565)
		{
			return;
		}
	}
	if (Global_3)
	{
		Global_54573 = 1;
		func_10();
		return;
	}
	MemCopy(&Global_54587, {func_9(iParam0)}, 4);
	Global_54575 = 0;
	Global_54574 = 0;
	switch (iParam0)
	{
		case 1:
		case 9:
			Global_54562 = 1;
			Global_54565 = 1;
			Global_54568 = 1;
			break;
		
		case 0:
		case 4:
		case 7:
		case 10:
		case 11:
		case 13:
		case 15:
		case 27:
		case 31:
		case 35:
		case 36:
		case 37:
		case 48:
		case 44:
		case 45:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
			Global_54573 = 1;
			Global_54574 = 1;
			func_10();
			func_19();
			return;
			break;
	}
	iVar0 = Global_66817;
	Global_66817 = 1;
	iVar1 = Global_66818;
	Global_66818 = iParam0;
	if (!Global_54562)
	{
		if ((Global_66818 != iVar1 || Global_66667 == 0) || iVar0 != Global_66817)
		{
			Global_24693 = 0;
			func_10();
			func_6(iParam0);
		}
		else
		{
			Global_54565 = 1;
		}
	}
	Global_54600 = unk_0xF976C624234A4AA8();
	func_5();
	Global_54572 = 0;
}

void func_5()
{
	int iVar0;
	
	if (!Global_54569)
	{
		return;
	}
	if (Global_66667 == 0)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_66667)
	{
		switch (Global_54797[Global_66668[iVar0 /*9*/] /*13*/])
		{
			case 1:
			case 9:
				Global_66668[iVar0 /*9*/].f_3 = 1;
				break;
			
			case 4:
				if (Global_54580)
				{
					Global_66668[iVar0 /*9*/].f_3 = 1;
				}
				break;
			
			case 6:
				if (Global_54797[Global_66668[iVar0 /*9*/] /*13*/].f_3)
				{
					if (Global_66668[iVar0 /*9*/].f_1 != 0)
					{
						Global_66668[iVar0 /*9*/].f_3 = 1;
					}
				}
				break;
		}
		iVar0++;
	}
	Global_54569 = 0;
}

void func_6(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			func_7(741);
			func_7(742);
			return;
		
		case 3:
			func_7(743);
			func_7(744);
			return;
		
		case 5:
			func_7(745);
			func_7(746);
			return;
		
		case 6:
			func_7(747);
			func_7(748);
			return;
		
		case 8:
			func_7(749);
			return;
		
		case 12:
			func_7(750);
			return;
		
		case 14:
			func_7(751);
			func_7(752);
			return;
		
		case 16:
			func_7(753);
			func_7(754);
			return;
		
		case 17:
			func_7(755);
			func_7(756);
			func_7(757);
			return;
		
		case 18:
			func_7(758);
			func_7(759);
			return;
		
		case 19:
			func_7(760);
			func_7(761);
			return;
		
		case 20:
			func_7(762);
			return;
		
		case 21:
			func_7(763);
			return;
		
		case 22:
			func_7(764);
			func_7(765);
			return;
		
		case 23:
			func_7(766);
			return;
		
		case 25:
			func_7(767);
			func_7(768);
			func_7(769);
			return;
		
		case 26:
			func_7(770);
			func_7(771);
			return;
		
		case 28:
			func_7(772);
			func_7(773);
			return;
		
		case 29:
			func_7(774);
			func_7(775);
			return;
		
		case 30:
			func_7(776);
			func_7(777);
			return;
		
		case 32:
			func_7(778);
			func_7(779);
			return;
		
		case 33:
			func_7(780);
			func_7(781);
			func_7(782);
			return;
		
		case 34:
			func_7(783);
			func_7(784);
			return;
		
		case 38:
			func_7(785);
			func_7(786);
			return;
		
		case 39:
			func_7(787);
			func_7(788);
			return;
		
		case 40:
			func_7(789);
			return;
		
		case 41:
			func_7(790);
			func_7(791);
			func_7(792);
			return;
		
		case 42:
			func_7(793);
			func_7(794);
			func_7(795);
			return;
		
		case 43:
			func_7(796);
			func_7(797);
			return;
		
		case 46:
			func_7(798);
			func_7(799);
			return;
		
		default:
	}
	switch (iParam0)
	{
		case 47:
			func_7(800);
			func_7(801);
			return;
		
		case 49:
			func_7(802);
			func_7(803);
			return;
		
		case 50:
			func_7(804);
			func_7(805);
			return;
		
		case 51:
			func_7(806);
			return;
		
		case 57:
			func_7(807);
			func_7(808);
			func_7(809);
			return;
		
		case 58:
			func_7(828);
			func_7(829);
			func_7(830);
			return;
		
		case 59:
			func_7(831);
			func_7(832);
			func_7(833);
			return;
		
		case 60:
			func_7(834);
			func_7(835);
			func_7(836);
			return;
		
		case 61:
			func_7(837);
			func_7(838);
			func_7(839);
			return;
		
		case 62:
			func_7(840);
			func_7(841);
			func_7(842);
			return;
		
		case 24:
			func_7(843);
			func_7(844);
			func_7(845);
			return;
		
		default:
	}
}

void func_7(int iParam0)
{
	Global_54565 = 1;
	Global_54568 = 1;
	if (Global_66667 > 15)
	{
		return;
	}
	func_8(Global_66667);
	Global_66668[Global_66667 /*9*/] = iParam0;
	Global_66667++;
	if (Global_54797[iParam0 /*13*/] == 16)
	{
		Global_66819 = 1;
	}
}

void func_8(int iParam0)
{
	Global_66668[iParam0 /*9*/].f_1 = 0;
	Global_66668[iParam0 /*9*/].f_2 = 0f;
	Global_66668[iParam0 /*9*/].f_3 = 0;
	Global_66668[iParam0 /*9*/].f_4 = 0;
}

struct<2> func_9(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_93(iParam0) };
	if (unk_0x8FA72E132AAFA62F(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

void func_10()
{
	if (Global_54572)
	{
		return;
	}
	Global_54581 = 0;
	Global_66667 = 0;
	Global_54583 = 0;
	if (Global_54580)
	{
	}
	Global_54580 = 0;
	func_17(0);
	func_16();
	Global_66819 = 0;
	Global_54571 = 1;
	func_14();
	func_13();
	func_12();
	func_11();
	Global_54562 = 0;
	Global_54592 = 0;
	Global_54600 = -1;
}

void func_11()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_66854[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	Global_66863 = 0;
}

void func_12()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		Global_66820[iVar0 /*2*/] = 0;
		Global_66820[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	Global_66853 = 0;
}

void func_13()
{
	Global_54731 = 0;
}

void func_14()
{
	Global_54591 = 0;
	Global_54595 = func_15(joaat("sp0_shots"));
	Global_54594 = func_15(joaat("sp0_hits"));
	Global_54597 = func_15(joaat("sp1_shots"));
	Global_54596 = func_15(joaat("sp1_hits"));
	Global_54599 = func_15(joaat("sp2_shots"));
	Global_54598 = func_15(joaat("sp2_hits"));
}

var func_15(int iParam0)
{
	var uVar0;
	
	unk_0x55FFE396AA3CA77A(iParam0, &uVar0, -1);
	return uVar0;
}

void func_16()
{
	int iVar0;
	
	Global_54601 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		Global_54602[iVar0 /*2*/] = 0;
		iVar0++;
	}
}

void func_17(int iParam0)
{
	Global_68327 = iParam0;
	Global_68328 = iParam0;
}

void func_18()
{
	int iVar0;
	
	Global_54570 = 1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_66667)
	{
		Global_66668[iVar0 /*9*/].f_3 = 2;
		iVar0++;
	}
	if (Global_54580)
	{
	}
	Global_54580 = 0;
}

void func_19()
{
	if (unk_0x25531002BCF0D968(joaat("mission_stat_watcher")) > 0)
	{
		if (func_20())
		{
			if (Global_54567 && !Global_54566)
			{
				Global_54567 = 0;
				unk_0xD530A1AEC901B9D1("mission_stat_watcher");
			}
		}
		else
		{
			unk_0xD530A1AEC901B9D1("mission_stat_watcher");
		}
	}
}

int func_20()
{
	if (unk_0x25531002BCF0D968(joaat("mission_stat_watcher")) < 1)
	{
		return 0;
	}
	if (!Global_54565)
	{
		return 0;
	}
	return Global_54577;
}

void func_21(char* sParam0)
{
	if (unk_0xA858564DC37EED5E(sParam0, sParam0))
	{
	}
}

void func_22(char[4] cParam0, int iParam1)
{
	unk_0xCD27BF29FB9012E2(&(Global_89784.f_20), 17);
	func_23(cParam0, iParam1, 0);
}

void func_23(char[4] cParam0, int iParam1, int iParam2)
{
	if (Global_89784 != 10 && Global_89784 != 9)
	{
		StringCopy(&Global_91164, cParam0, 32);
		func_25(&Global_91172, cParam0, 0, "Start", iParam1, iParam2);
		func_24();
		Global_84367 = 0;
	}
}

void func_24()
{
	int iVar0;
	int iVar1;
	
	Global_93409 = Global_91172;
	Global_93409.f_1 = Global_91172.f_1;
	Global_93409.f_6 = Global_91172.f_6;
	Global_93409.f_7 = Global_91172.f_7;
	Global_93409.f_8 = Global_91172.f_8;
	Global_93409.f_2 = Global_91172.f_2;
	Global_93409.f_3 = Global_91172.f_3;
	Global_93409.f_4 = Global_91172.f_4;
	Global_93409.f_5 = Global_91172.f_5;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		Global_93409.f_9[iVar1] = Global_91172.f_9[iVar1];
		Global_93409.f_13[iVar1] = Global_91172.f_13[iVar1];
		Global_93409.f_17[iVar1] = Global_91172.f_17[iVar1];
		Global_93409.f_21[iVar1] = Global_91172.f_21[iVar1];
		Global_93409.f_25[0 /*223*/][iVar1 /*74*/] = { Global_91172.f_25[0 /*223*/][iVar1 /*74*/] };
		Global_93409.f_25[1 /*223*/][iVar1 /*74*/] = { Global_91172.f_25[1 /*223*/][iVar1 /*74*/] };
		iVar0 = 0;
		while (iVar0 < 12)
		{
			Global_93409.f_472[iVar1 /*65*/][iVar0] = Global_91172.f_472[iVar1 /*65*/][iVar0];
			Global_93409.f_472[iVar1 /*65*/].f_13[iVar0] = Global_91172.f_472[iVar1 /*65*/].f_13[iVar0];
			Global_93409.f_472[iVar1 /*65*/].f_26[iVar0] = Global_91172.f_472[iVar1 /*65*/].f_26[iVar0];
			iVar0++;
		}
		Global_93409.f_472[iVar1 /*65*/].f_59 = Global_91172.f_472[iVar1 /*65*/].f_59;
		Global_93409.f_472[iVar1 /*65*/].f_60 = Global_91172.f_472[iVar1 /*65*/].f_60;
		Global_93409.f_472[iVar1 /*65*/].f_61 = Global_91172.f_472[iVar1 /*65*/].f_61;
		Global_93409.f_472[iVar1 /*65*/].f_62 = Global_91172.f_472[iVar1 /*65*/].f_62;
		Global_93409.f_472[iVar1 /*65*/].f_63 = Global_91172.f_472[iVar1 /*65*/].f_63;
		Global_93409.f_472[iVar1 /*65*/].f_64 = Global_91172.f_472[iVar1 /*65*/].f_64;
		iVar0 = 0;
		while (iVar0 < 9)
		{
			Global_93409.f_472[iVar1 /*65*/].f_39[iVar0] = Global_91172.f_472[iVar1 /*65*/].f_39[iVar0];
			Global_93409.f_472[iVar1 /*65*/].f_49[iVar0] = Global_91172.f_472[iVar1 /*65*/].f_49[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			Global_93409.f_668[iVar1 /*284*/][iVar0 /*3*/] = { Global_91172.f_668[iVar1 /*284*/][iVar0 /*3*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			Global_93409.f_668[iVar1 /*284*/].f_133[iVar0 /*3*/] = { Global_91172.f_668[iVar1 /*284*/].f_133[iVar0 /*3*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			Global_93409.f_1521[iVar1 /*32*/][iVar0] = Global_91172.f_1521[iVar1 /*32*/][iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Global_93409.f_1521[iVar1 /*32*/].f_5[iVar0] = Global_91172.f_1521[iVar1 /*32*/].f_5[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 15)
		{
			Global_93409.f_1521[iVar1 /*32*/].f_16[iVar0] = Global_91172.f_1521[iVar1 /*32*/].f_16[iVar0];
			iVar0++;
		}
		Global_93409.f_1618[iVar1] = Global_91172.f_1618[iVar1];
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			Global_93409.f_2115[iVar1 /*15*/][iVar0] = Global_91172.f_2115[iVar1 /*15*/][iVar0];
			Global_93409.f_2115[iVar1 /*15*/].f_5[iVar0] = Global_91172.f_2115[iVar1 /*15*/].f_5[iVar0];
			Global_93409.f_2115[iVar1 /*15*/].f_10[iVar0] = Global_91172.f_2115[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			Global_93409.f_1622[iVar1 /*164*/][iVar0] = Global_91172.f_1622[iVar1 /*164*/][iVar0];
			Global_93409.f_1622[iVar1 /*164*/].f_4[iVar0] = Global_91172.f_1622[iVar1 /*164*/].f_4[iVar0];
			Global_93409.f_1622[iVar1 /*164*/].f_8[iVar0] = Global_91172.f_1622[iVar1 /*164*/].f_8[iVar0];
			Global_93409.f_1622[iVar1 /*164*/].f_12[iVar0] = Global_91172.f_1622[iVar1 /*164*/].f_12[iVar0];
			Global_93409.f_1622[iVar1 /*164*/].f_16[iVar0] = Global_91172.f_1622[iVar1 /*164*/].f_16[iVar0];
			Global_93409.f_1622[iVar1 /*164*/].f_20[iVar0] = Global_91172.f_1622[iVar1 /*164*/].f_20[iVar0];
			Global_93409.f_1622[iVar1 /*164*/].f_24[iVar0] = Global_91172.f_1622[iVar1 /*164*/].f_24[iVar0];
			Global_93409.f_1622[iVar1 /*164*/].f_28[iVar0] = Global_91172.f_1622[iVar1 /*164*/].f_28[iVar0];
			Global_93409.f_1622[iVar1 /*164*/].f_32[iVar0] = Global_91172.f_1622[iVar1 /*164*/].f_32[iVar0];
			Global_93409.f_1622[iVar1 /*164*/].f_36[iVar0] = Global_91172.f_1622[iVar1 /*164*/].f_36[iVar0];
			Global_93409.f_1622[iVar1 /*164*/].f_40[iVar0] = Global_91172.f_1622[iVar1 /*164*/].f_40[iVar0];
			Global_93409.f_1622[iVar1 /*164*/].f_44[iVar0] = Global_91172.f_1622[iVar1 /*164*/].f_44[iVar0];
			Global_93409.f_1622[iVar1 /*164*/].f_48[iVar0] = Global_91172.f_1622[iVar1 /*164*/].f_48[iVar0];
			Global_93409.f_1622[iVar1 /*164*/].f_52[iVar0] = Global_91172.f_1622[iVar1 /*164*/].f_52[iVar0];
			Global_93409.f_1622[iVar1 /*164*/].f_56[iVar0] = Global_91172.f_1622[iVar1 /*164*/].f_56[iVar0];
			Global_93409.f_1622[iVar1 /*164*/].f_60[iVar0] = Global_91172.f_1622[iVar1 /*164*/].f_60[iVar0];
			Global_93409.f_1622[iVar1 /*164*/].f_64[iVar0] = Global_91172.f_1622[iVar1 /*164*/].f_64[iVar0];
			Global_93409.f_1622[iVar1 /*164*/].f_68[iVar0] = Global_91172.f_1622[iVar1 /*164*/].f_68[iVar0];
			Global_93409.f_1622[iVar1 /*164*/].f_72[iVar0] = Global_91172.f_1622[iVar1 /*164*/].f_72[iVar0];
			Global_93409.f_1622[iVar1 /*164*/].f_76[iVar0] = Global_91172.f_1622[iVar1 /*164*/].f_76[iVar0];
			Global_93409.f_1622[iVar1 /*164*/].f_80[iVar0] = Global_91172.f_1622[iVar1 /*164*/].f_80[iVar0];
			Global_93409.f_1622[iVar1 /*164*/].f_84[iVar0] = Global_91172.f_1622[iVar1 /*164*/].f_84[iVar0];
			Global_93409.f_1622[iVar1 /*164*/].f_88[iVar0] = Global_91172.f_1622[iVar1 /*164*/].f_88[iVar0];
			Global_93409.f_1622[iVar1 /*164*/].f_92[iVar0] = Global_91172.f_1622[iVar1 /*164*/].f_92[iVar0];
			Global_93409.f_1622[iVar1 /*164*/].f_96[iVar0] = Global_91172.f_1622[iVar1 /*164*/].f_96[iVar0];
			Global_93409.f_1622[iVar1 /*164*/].f_100[iVar0] = Global_91172.f_1622[iVar1 /*164*/].f_100[iVar0];
			Global_93409.f_1622[iVar1 /*164*/].f_104[iVar0] = Global_91172.f_1622[iVar1 /*164*/].f_104[iVar0];
			Global_93409.f_1622[iVar1 /*164*/].f_108[iVar0] = Global_91172.f_1622[iVar1 /*164*/].f_108[iVar0];
			Global_93409.f_1622[iVar1 /*164*/].f_112[iVar0] = Global_91172.f_1622[iVar1 /*164*/].f_112[iVar0];
			Global_93409.f_1622[iVar1 /*164*/].f_116[iVar0] = Global_91172.f_1622[iVar1 /*164*/].f_116[iVar0];
			Global_93409.f_1622[iVar1 /*164*/].f_120[iVar0] = Global_91172.f_1622[iVar1 /*164*/].f_120[iVar0];
			Global_93409.f_1622[iVar1 /*164*/].f_124[iVar0] = Global_91172.f_1622[iVar1 /*164*/].f_124[iVar0];
			Global_93409.f_1622[iVar1 /*164*/].f_128[iVar0] = Global_91172.f_1622[iVar1 /*164*/].f_128[iVar0];
			Global_93409.f_1622[iVar1 /*164*/].f_132[iVar0] = Global_91172.f_1622[iVar1 /*164*/].f_132[iVar0];
			Global_93409.f_1622[iVar1 /*164*/].f_136[iVar0] = Global_91172.f_1622[iVar1 /*164*/].f_136[iVar0];
			Global_93409.f_1622[iVar1 /*164*/].f_140[iVar0] = Global_91172.f_1622[iVar1 /*164*/].f_140[iVar0];
			Global_93409.f_1622[iVar1 /*164*/].f_144[iVar0] = Global_91172.f_1622[iVar1 /*164*/].f_144[iVar0];
			Global_93409.f_1622[iVar1 /*164*/].f_148[iVar0] = Global_91172.f_1622[iVar1 /*164*/].f_148[iVar0];
			Global_93409.f_1622[iVar1 /*164*/].f_152[iVar0] = Global_91172.f_1622[iVar1 /*164*/].f_152[iVar0];
			Global_93409.f_1622[iVar1 /*164*/].f_156[iVar0] = Global_91172.f_1622[iVar1 /*164*/].f_156[iVar0];
			Global_93409.f_1622[iVar1 /*164*/].f_160[iVar0] = Global_91172.f_1622[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	Global_93409.f_2161 = { Global_91172.f_2161 };
	Global_93409.f_2161.f_3 = Global_91172.f_2161.f_3;
	Global_93409.f_2167 = { Global_91172.f_2167 };
	Global_93409.f_2167.f_3 = { Global_91172.f_2167.f_3 };
	Global_93409.f_2167.f_6 = Global_91172.f_2167.f_6;
	Global_93409.f_2167.f_8 = Global_93409.f_2167.f_8;
	Global_93409.f_2167.f_7 = Global_91172.f_2167.f_7;
	Global_93409.f_2167.f_9 = Global_91172.f_2167.f_9;
	Global_93409.f_2167.f_11 = Global_91172.f_2167.f_11;
	Global_93409.f_2167.f_10 = Global_91172.f_2167.f_10;
	Global_93409.f_2167.f_12 = Global_91172.f_2167.f_12;
	Global_93409.f_2167.f_12.f_1 = { Global_91172.f_2167.f_12.f_1 };
	Global_93409.f_2167.f_12.f_5 = Global_91172.f_2167.f_12.f_5;
	Global_93409.f_2167.f_12.f_6 = Global_91172.f_2167.f_12.f_6;
	Global_93409.f_2167.f_12.f_7 = Global_91172.f_2167.f_12.f_7;
	Global_93409.f_2167.f_12.f_8 = Global_91172.f_2167.f_12.f_8;
	Global_93409.f_2167.f_12.f_9 = { Global_91172.f_2167.f_12.f_9 };
	Global_93409.f_2167.f_12.f_35 = { Global_91172.f_2167.f_12.f_35 };
	Global_93409.f_2167.f_12.f_38 = Global_91172.f_2167.f_12.f_38;
	Global_93409.f_2167.f_12.f_39 = Global_91172.f_2167.f_12.f_39;
	Global_93409.f_2167.f_12.f_40 = Global_91172.f_2167.f_12.f_40;
	Global_93409.f_2167.f_12.f_41 = Global_91172.f_2167.f_12.f_41;
	Global_93409.f_2167.f_12.f_53 = Global_91172.f_2167.f_12.f_53;
	Global_93409.f_2167.f_12.f_42 = Global_91172.f_2167.f_12.f_42;
	Global_93409.f_2167.f_12.f_43 = Global_91172.f_2167.f_12.f_43;
	Global_93409.f_2167.f_12.f_44 = Global_91172.f_2167.f_12.f_44;
	Global_93409.f_2167.f_12.f_45 = Global_91172.f_2167.f_12.f_45;
	Global_93409.f_2167.f_12.f_47 = Global_91172.f_2167.f_12.f_47;
	Global_93409.f_2167.f_12.f_48 = Global_91172.f_2167.f_12.f_48;
	Global_93409.f_2167.f_12.f_49 = Global_91172.f_2167.f_12.f_49;
	Global_93409.f_2167.f_12.f_50 = Global_91172.f_2167.f_12.f_50;
	Global_93409.f_2167.f_12.f_51 = Global_91172.f_2167.f_12.f_51;
	Global_93409.f_2167.f_12.f_52 = Global_91172.f_2167.f_12.f_52;
	Global_93409.f_2233 = Global_91172.f_2233;
	Global_93409.f_2233.f_1 = Global_91172.f_2233.f_1;
	Global_93409.f_2233.f_2 = Global_91172.f_2233.f_2;
	Global_93409.f_2233.f_3 = Global_91172.f_2233.f_3;
}

void func_25(var uParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_89();
	uParam0->f_1 = func_78();
	unk_0x4E8FE0C85EF3559F(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
	{
		func_63(&(uParam0->f_2161), 0);
		func_62(unk_0x507DA4994C3D8EBD());
		func_56(unk_0x507DA4994C3D8EBD(), 0);
		unk_0xAE0CD3052D6ED1ED(unk_0x507DA4994C3D8EBD(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_97173.f_1729.f_539.f_294[iVar1];
		if (iVar1 == func_53())
		{
			func_46(unk_0x507DA4994C3D8EBD(), &(uParam0->f_472[iVar1 /*65*/]), 1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_472[iVar1 /*65*/][iVar0] = Global_89574[iVar1 /*65*/][iVar0];
				uParam0->f_472[iVar1 /*65*/].f_13[iVar0] = Global_89574[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_472[iVar1 /*65*/].f_59 = Global_89574[iVar1 /*65*/].f_59;
			uParam0->f_472[iVar1 /*65*/].f_60 = Global_89574[iVar1 /*65*/].f_60;
			uParam0->f_472[iVar1 /*65*/].f_61 = Global_89574[iVar1 /*65*/].f_61;
			uParam0->f_472[iVar1 /*65*/].f_62 = Global_89574[iVar1 /*65*/].f_62;
			uParam0->f_472[iVar1 /*65*/].f_63 = Global_89574[iVar1 /*65*/].f_63;
			uParam0->f_472[iVar1 /*65*/].f_64 = Global_89574[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_472[iVar1 /*65*/].f_39[iVar0] = Global_89574[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_472[iVar1 /*65*/].f_49[iVar0] = Global_89574[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_668[iVar1 /*284*/][iVar0 /*3*/] = { Global_97173.f_1729.f_539.f_298[iVar1 /*284*/][iVar0 /*3*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			uParam0->f_668[iVar1 /*284*/].f_133[iVar0 /*3*/] = { Global_97173.f_1729.f_539.f_298[iVar1 /*284*/].f_133[iVar0 /*3*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				unk_0x55FFE396AA3CA77A(joaat("sp0_weap_purch_0"), &(uParam0->f_1521[iVar1 /*32*/][0]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp0_weap_purch_1"), &(uParam0->f_1521[iVar1 /*32*/][1]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_5[0]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_5[1]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_5[2]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_5[3]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_5[4]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_16[0]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_16[1]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_16[2]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_16[3]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_16[4]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_1521[iVar1 /*32*/].f_16[5]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_1521[iVar1 /*32*/].f_16[6]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_1521[iVar1 /*32*/].f_16[7]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_1521[iVar1 /*32*/].f_16[8]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_1521[iVar1 /*32*/].f_16[9]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_1521[iVar1 /*32*/].f_16[10]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_1521[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				unk_0x55FFE396AA3CA77A(joaat("sp1_weap_purch_0"), &(uParam0->f_1521[iVar1 /*32*/][0]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp1_weap_purch_1"), &(uParam0->f_1521[iVar1 /*32*/][1]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_5[0]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_5[1]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_5[2]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_5[3]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_5[4]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_16[0]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_16[1]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_16[2]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_16[3]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_16[4]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_1521[iVar1 /*32*/].f_16[5]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_1521[iVar1 /*32*/].f_16[6]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_1521[iVar1 /*32*/].f_16[7]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_1521[iVar1 /*32*/].f_16[8]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_1521[iVar1 /*32*/].f_16[9]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_1521[iVar1 /*32*/].f_16[10]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_1521[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				unk_0x55FFE396AA3CA77A(joaat("sp2_weap_purch_0"), &(uParam0->f_1521[iVar1 /*32*/][0]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp2_weap_purch_1"), &(uParam0->f_1521[iVar1 /*32*/][1]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_5[0]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_5[1]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_5[2]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_5[3]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_5[4]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_16[0]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_16[1]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_16[2]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_16[3]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_16[4]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_1521[iVar1 /*32*/].f_16[5]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_1521[iVar1 /*32*/].f_16[6]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_1521[iVar1 /*32*/].f_16[7]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_1521[iVar1 /*32*/].f_16[8]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_1521[iVar1 /*32*/].f_16[9]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_1521[iVar1 /*32*/].f_16[10]), -1);
				unk_0x55FFE396AA3CA77A(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_1521[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_97173.f_23756.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_51747[iVar1];
		uParam0->f_25[0 /*223*/][iVar1 /*74*/] = { Global_97173.f_1729.f_539.f_1635[0 /*223*/][iVar1 /*74*/] };
		uParam0->f_25[1 /*223*/][iVar1 /*74*/] = { Global_97173.f_1729.f_539.f_1635[1 /*223*/][iVar1 /*74*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2115[iVar1 /*15*/][iVar0] = Global_97173.f_1729.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2115[iVar1 /*15*/].f_5[iVar0] = Global_97173.f_1729.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2115[iVar1 /*15*/].f_10[iVar0] = Global_97173.f_1729.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_1622[iVar1 /*164*/][iVar0] = Global_97173.f_1729[iVar1 /*164*/][iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_4[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_8[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_12[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_16[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_20[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_24[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_28[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_32[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_36[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_40[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_44[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_48[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_52[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_56[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_60[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_64[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_68[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_72[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_76[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_80[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_84[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_88[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_92[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_96[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_100[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_104[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_108[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_112[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_116[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_120[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_124[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_128[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_132[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_136[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_140[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_144[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_148[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_152[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_156[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_160[iVar0] = Global_97173.f_1729[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	unk_0x55FFE396AA3CA77A(joaat("sp0_special_ability"), &(uParam0->f_1618[0]), -1);
	unk_0x55FFE396AA3CA77A(joaat("sp1_special_ability"), &(uParam0->f_1618[1]), -1);
	unk_0x55FFE396AA3CA77A(joaat("sp2_special_ability"), &(uParam0->f_1618[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_27(&(uParam0->f_2167), uParam0, iParam5, 1, 1, 0);
	}
	func_26(&(uParam0->f_2233));
	sParam3 = sParam3;
	iParam2 = iParam2;
}

int func_26(var uParam0)
{
	*uParam0 = Global_86038;
	uParam0->f_1 = Global_86039;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_27(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = unk_0x507DA4994C3D8EBD();
	}
	if (unk_0xFD68187442384158(iParam2))
	{
		uParam1->f_5 = func_44(iParam2);
	}
	if (func_41(iParam2, &iVar0, iParam3, iParam5))
	{
		func_28(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0xFD68187442384158(iVar0))
	{
		if (!unk_0xE5D56342B0FF1D0D(iVar0))
		{
			if (unk_0x40923C25A763E8E8(iVar0, joaat("skylift")) && unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), iVar0, 0))
			{
				func_28(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_28(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (unk_0xCA8794CE207FC6D5(iParam2, 0))
	{
		func_30(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_29(iParam2))
		{
			uParam1->f_3 = 1;
		}
		else
		{
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

int func_29(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_89784.f_22[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_30(var uParam0, int iParam1, int iParam2)
{
	func_37(iParam1, &(uParam0->f_12));
	uParam0->f_7 = func_33(iParam1, 145, 0);
	uParam0->f_11 = func_32(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_31(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { unk_0xBF1B13057E5119A4(iParam1, 1) };
		uParam0->f_6 = unk_0xA9D6B28E708753B6(iParam1);
		uParam0->f_3 = { unk_0x903468970F24CA24(iParam1) };
		if (unk_0x9EC075F0DABF6298(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_67865 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_31(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xFD68187442384158(Global_66960.f_484[iVar0]))
		{
			if (iParam0 == Global_66960.f_484[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_32(int iParam0)
{
	int iVar0;
	
	if (!unk_0xFD68187442384158(iParam0))
	{
		return 145;
	}
	if (!unk_0xCA8794CE207FC6D5(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xFD68187442384158(Global_87520[iVar0]))
		{
			if (Global_87520[iVar0] == iParam0)
			{
				return Global_87530[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_33(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0xFD68187442384158(iParam0))
	{
		return 0;
	}
	if (!unk_0xCA8794CE207FC6D5(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xFD68187442384158(Global_87520[iVar0]))
		{
			if (Global_87520[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_87530[iVar0])
				{
					if (iParam2 == 0 || unk_0x26EA758C2A691D06(iParam0) == func_34(iParam1, iParam2))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_34(int iParam0, int iParam1)
{
	struct<58> Var0;
	
	if (func_36(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 25;
		Var0.f_57 = 2;
		func_35(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_35(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	struct<74> Var1;
	
	Var1.f_11 = 12;
	Var1.f_31 = 25;
	Var1.f_57 = 2;
	Var1.f_64 = 1;
	Var1.f_60 = 255;
	Var1.f_61 = 255;
	Var1.f_62 = 255;
	Var1.f_73 = 1;
	Var1.f_3 = 1000;
	Var1.f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_97173.f_7311.f_99.f_58[128] && !Global_97173.f_7311.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 3f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					Var1.f_11[0] = 1;
					StringCopy(&(Var1.f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 14.9f;
					Var1.f_5 = 43;
					Var1.f_6 = 43;
					Var1.f_7 = 0;
					Var1.f_8 = 156;
					Var1.f_9 = 0;
					StringCopy(&(Var1.f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 14f;
					Var1.f_5 = 32;
					Var1.f_6 = 0;
					Var1.f_7 = 0;
					Var1.f_8 = 156;
					StringCopy(&(Var1.f_27), "BETTY 32", 16);
					if (Global_97173.f_7311.f_99.f_58[119])
					{
						Var1.f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_97173.f_7311.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 6f;
					Var1.f_5 = 53;
					Var1.f_6 = 0;
					Var1.f_7 = 59;
					Var1.f_8 = 156;
					StringCopy(&(Var1.f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_5 = 111;
					Var1.f_6 = 111;
					Var1.f_7 = 0;
					Var1.f_8 = 156;
					Var1.f_10 = 1;
					StringCopy(&(Var1.f_27), "FC1988", 16);
					Var1.f_11[0] = 1;
					Var1.f_11[1] = 1;
					Var1.f_11[2] = 1;
					Var1.f_11[3] = 1;
					Var1.f_11[4] = 1;
					Var1.f_11[5] = 1;
					Var1.f_11[6] = 1;
					Var1.f_11[7] = 1;
					Var1.f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
	*uParam1 = { Var1 };
}

bool func_36(int iParam0)
{
	return iParam0 < 3;
}

void func_37(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xCA8794CE207FC6D5(iParam0, 0))
	{
		func_40(uParam1);
		uParam1->f_42 = unk_0x26EA758C2A691D06(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x3907ED4361C53248(iParam0), 16);
		*uParam1 = unk_0x19BB097358BFF0AF(iParam0);
		unk_0x1603516D6065B48F(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0xA350E44A87923312(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x8239CD0D53DFB0BC(iParam0, &(uParam1->f_38), &(uParam1->f_39), &(uParam1->f_40));
		uParam1->f_41 = unk_0x0612606EF85B26EA(iParam0);
		uParam1->f_43 = unk_0x4CA0AD498EF66914(iParam0);
		uParam1->f_45 = unk_0x7650202B3E229E02(iParam0);
		uParam1->f_46 = unk_0x407FC6F2E81C15C7(iParam0);
		unk_0x5A28251CF7DB43BF(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		unk_0xF5E00BA0DEA3A55A(iParam0, &(uParam1->f_50), &(uParam1->f_51), &(uParam1->f_52));
		if (unk_0xD9DD35FE09967D1F(iParam0, 2))
		{
			unk_0x3DBE2A7AF9E71C82(&(uParam1->f_53), 28);
		}
		if (unk_0xD9DD35FE09967D1F(iParam0, 3))
		{
			unk_0x3DBE2A7AF9E71C82(&(uParam1->f_53), 29);
		}
		if (unk_0xD9DD35FE09967D1F(iParam0, 0))
		{
			unk_0x3DBE2A7AF9E71C82(&(uParam1->f_53), 30);
		}
		if (unk_0xD9DD35FE09967D1F(iParam0, 1))
		{
			unk_0x3DBE2A7AF9E71C82(&(uParam1->f_53), 31);
		}
		if (uParam1->f_41 == -1 && uParam1->f_42 != joaat("granger"))
		{
			uParam1->f_41 = 0;
		}
		if (unk_0x850813D10502D655(iParam0, 0))
		{
			uParam1->f_44 = unk_0x92632E4A1274BB2C(iParam0);
		}
		if (unk_0x9652AA5F22572EA4(uParam1->f_42))
		{
			if (unk_0xE72A4DAD5B1689BE(iParam0))
			{
				switch (unk_0x91068745EF3E0ADA(iParam0))
				{
					case 2:
					case 0:
						unk_0xCD27BF29FB9012E2(&(uParam1->f_53), 23);
						unk_0x3DBE2A7AF9E71C82(&(uParam1->f_53), 22);
						break;
					
					case 3:
					case 1:
						unk_0xCD27BF29FB9012E2(&(uParam1->f_53), 23);
						unk_0xCD27BF29FB9012E2(&(uParam1->f_53), 22);
						break;
					
					case 4:
						unk_0x3DBE2A7AF9E71C82(&(uParam1->f_53), 23);
						break;
				}
			}
			else
			{
				unk_0x3DBE2A7AF9E71C82(&(uParam1->f_53), 23);
			}
		}
		if (!unk_0x4FA9345A8F43BDAC(iParam0))
		{
			unk_0x3DBE2A7AF9E71C82(&(uParam1->f_53), 9);
		}
		if (unk_0xFE579AAF18C374AC(iParam0))
		{
			unk_0x3DBE2A7AF9E71C82(&(uParam1->f_53), 10);
		}
		if (unk_0xEC9139D75F13D0D3(iParam0))
		{
			unk_0x3DBE2A7AF9E71C82(&(uParam1->f_53), 13);
			unk_0x036299CCFE91E283(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		}
		if (unk_0x4FD71373746F04E1(iParam0))
		{
			unk_0x3DBE2A7AF9E71C82(&(uParam1->f_53), 12);
		}
		func_39(&iParam0, &(uParam1->f_9), &(uParam1->f_35));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x64D04C2170ADD5A9(iParam0, iVar0 + 1))
			{
				unk_0x3DBE2A7AF9E71C82(&(uParam1->f_53), func_38(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0xC0D8A6AB4509755B(iParam0, 0))
		{
			unk_0x3DBE2A7AF9E71C82(&(uParam1->f_53), 11);
		}
		else
		{
			unk_0xCD27BF29FB9012E2(&(uParam1->f_53), 11);
		}
		if (unk_0xD665B29FEC987319(iParam0, "IgnoredByQuickSave") && unk_0x44A72A39C7AE7EDD(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x3DBE2A7AF9E71C82(&(uParam1->f_53), 27);
		}
		else
		{
			unk_0xCD27BF29FB9012E2(&(uParam1->f_53), 27);
		}
	}
}

int func_38(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_39(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xCA8794CE207FC6D5(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xFE85A2A6EE40ADA0(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0x44C699E5DC7A51EA(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x892B3EDA66236D64(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x194DFCDAD36ABECC(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x194DFCDAD36ABECC(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_40(var uParam0)
{
	int iVar0;
	
	uParam0->f_42 = 0;
	uParam0->f_53 = 0;
	uParam0->f_41 = 0;
	uParam0->f_38 = 0;
	uParam0->f_39 = 0;
	uParam0->f_40 = 0;
	uParam0->f_50 = 0;
	uParam0->f_51 = 0;
	uParam0->f_52 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 25)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_35[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_43 = 0;
	uParam0->f_44 = 0;
	uParam0->f_45 = 0;
	uParam0->f_46 = 1;
	uParam0->f_47 = 0;
	uParam0->f_48 = 0;
	uParam0->f_49 = 0;
}

int func_41(int iParam0, var uParam1, int iParam2, int iParam3)
{
	char* sVar0;
	
	if (unk_0xFD68187442384158(iParam0))
	{
		if (!unk_0x9F94F2CFDCA78C55(iParam0))
		{
			if (iParam0 == unk_0x507DA4994C3D8EBD())
			{
				*uParam1 = unk_0xF6EA6ED8FFB5B505();
			}
			else
			{
				*uParam1 = unk_0x78AB10B64129B3D5(iParam0, 1);
			}
			if (unk_0xFD68187442384158(*uParam1))
			{
				if (unk_0xCA8794CE207FC6D5(*uParam1, 0))
				{
					if (iParam2 == 0 || unk_0x8FE221761D524CFE(unk_0xBF1B13057E5119A4(*uParam1, 1), unk_0xBF1B13057E5119A4(iParam0, 1), 1) < 100f)
					{
						if (unk_0x40923C25A763E8E8(*uParam1, joaat("taxi")))
						{
							if (unk_0xE634CB9EE7094537(*uParam1, -1) != iParam0 && unk_0xE634CB9EE7094537(*uParam1, -1) != 0)
							{
								return 0;
							}
						}
						if (func_42(*uParam1, func_89(), 1))
						{
							sVar0 = unk_0x3ED5FA3F61EC9E68();
							if (!unk_0xA858564DC37EED5E(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!unk_0x2A24448FF232F834(iParam0, 1))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (unk_0xD665B29FEC987319(*uParam1, "IgnoredByQuickSave"))
							{
								if (unk_0x44A72A39C7AE7EDD(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (unk_0x40923C25A763E8E8(*uParam1, joaat("blimp")))
						{
							return 0;
						}
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_42(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0xFD68187442384158(iParam0) || !unk_0xCA8794CE207FC6D5(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_43(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0x61D8FEAF64881CDA(Global_97173.f_5486[iVar9], 0))
		{
			if (unk_0xA5A6C7F14D300E6C(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_43(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

int func_44(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFD68187442384158(iParam0))
	{
		iVar1 = unk_0x26EA758C2A691D06(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_45(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_45(int iParam0)
{
	if (func_36(iParam0))
	{
		return Global_97173.f_29699[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_46(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x9F94F2CFDCA78C55(iParam0))
	{
		iVar0 = func_44(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_52(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_51(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_36(iVar0))
		{
			uParam1->f_59 = Global_97173.f_1729.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_97173.f_1729.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_97173.f_1729.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_97173.f_1729.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_97173.f_1729.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_97173.f_1729.f_539[iVar0 /*65*/].f_64;
		}
		else if (unk_0xD95428C8AA1DBBF2() && unk_0x26EA758C2A691D06(iParam0) == unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()))
		{
			if (func_50(161, -1))
			{
				uParam1->f_59 = func_47(2034, Global_67926, 0);
			}
			else
			{
				uParam1->f_59 = func_47(739, Global_67926, 0);
			}
			uParam1->f_60 = func_47(740, Global_67926, 0);
			uParam1->f_61 = func_47(741, Global_67926, 0);
		}
		if (unk_0xD95428C8AA1DBBF2() && iParam0 == unk_0x507DA4994C3D8EBD())
		{
			if (func_50(161, -1))
			{
				uParam1->f_59 = func_47(2034, Global_67926, 0);
			}
			else
			{
				uParam1->f_59 = func_47(739, Global_67926, 0);
			}
		}
	}
}

int func_47(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2454190[iParam0 /*6*/][func_48(iParam1)];
	if (unk_0x55FFE396AA3CA77A(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_48(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_49();
		if (iVar1 > -1)
		{
			Global_2453903 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2453903 = 1;
		}
	}
	return iVar0;
}

int func_49()
{
	return Global_1312736;
}

int func_50(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2472534[iParam0 /*6*/][func_48(iParam1)];
	if (unk_0xED5C4CADD81A8853(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_51(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_44(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x7974CEFA1BFEA57F(iParam0, iParam1);
		*uParam3 = unk_0xC822E015E8309254(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (unk_0xB2AFAFC648C71A2A(iParam0) && unk_0x8174C54E61FC0EB1(iParam0) != -1)
				{
					*uParam2 = unk_0x8174C54E61FC0EB1(iParam0);
					*uParam3 = unk_0x7E9D7621887FA9EE(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_52(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_44(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0xFEAB4D7F75916F7C(iParam0, iParam1);
		*uParam3 = unk_0xB1803498CF77A15A(iParam0, iParam1);
		*uParam4 = unk_0x1B556A31096DEA5F(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

int func_53()
{
	func_54();
	return Global_97173.f_1729.f_539.f_3213;
}

void func_54()
{
	int iVar0;
	
	if (unk_0xFD68187442384158(unk_0x507DA4994C3D8EBD()))
	{
		if (func_45(Global_97173.f_1729.f_539.f_3213) != unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()))
		{
			iVar0 = func_44(unk_0x507DA4994C3D8EBD());
			if (func_36(iVar0) && (!func_55(14) || Global_96126))
			{
				if (Global_97173.f_1729.f_539.f_3213 != iVar0 && func_36(Global_97173.f_1729.f_539.f_3213))
				{
					Global_97173.f_1729.f_539.f_3214 = Global_97173.f_1729.f_539.f_3213;
				}
				Global_97173.f_1729.f_539.f_3215 = iVar0;
				Global_97173.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97173.f_1729.f_539.f_3213 != 145)
			{
				Global_97173.f_1729.f_539.f_3215 = Global_97173.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97173.f_1729.f_539.f_3213 = 145;
}

bool func_55(int iParam0)
{
	return Global_34909 == iParam0;
}

void func_56(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = func_44(iParam0);
	if (func_36(iVar0) && !unk_0x9F94F2CFDCA78C55(iParam0))
	{
		if (iParam0 == unk_0x507DA4994C3D8EBD())
		{
			func_57(iParam0, &(Global_97173.f_1729.f_539.f_298[iVar0 /*284*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_97173.f_1729.f_539.f_1151[iVar2 /*4*/][iVar0] = unk_0x67CA6386FD4A3F3A(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0x8DA04BE2123D1FA8();
					if (Global_97173.f_1729.f_539.f_1151[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_97173.f_1729.f_539.f_1184 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0xCC87B2694189E7CF(unk_0xAF65E5A58BE87D95(), &uVar3);
			if (iVar0 == 0)
			{
				unk_0x96B68C67633472DC(joaat("sp0_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 1)
			{
				unk_0x96B68C67633472DC(joaat("sp1_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 2)
			{
				unk_0x96B68C67633472DC(joaat("sp2_parachute_current_tint"), uVar3, 1);
			}
		}
	}
}

void func_57(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	int iVar7;
	int iVar8;
	struct<2> Var9;
	struct<4> Var48;
	int iVar70;
	
	if (!unk_0x9F94F2CFDCA78C55(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*3*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_61(iVar0);
			if (iVar3 != 0)
			{
				Var4.f_0 = unk_0x844EDB06A8B25065(iParam0, func_61(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				if (Var4.f_0 != 0 && Var4.f_0 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = unk_0x05B6F0BD6BBB2050(iParam0, Var4.f_0);
					if (Var4.f_0 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					unk_0x3DBE2A7AF9E71C82(&(Var4.f_2), (20 + unk_0x539EF466D1E3CB3E(iParam0, Var4.f_0)));
					if (Var4.f_1 == -1)
					{
						if (!unk_0x2A292A04D839BF3D(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*3*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_59(Var4.f_0, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0xC2AA32EA0F5ABE8C(iParam0, Var4.f_0, iVar2))
						{
							unk_0x3DBE2A7AF9E71C82(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_59(Var4.f_0, iVar1);
					}
				}
				*(uParam1[iVar0 /*3*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (50 - 1))
		{
			uParam1->f_133[iVar0 /*3*/].f_1 = 0;
			iVar0++;
		}
		iVar8 = unk_0x2611EF4947AA943C();
		iVar7 = 0;
		while (iVar7 < iVar8)
		{
			if ((unk_0x82A3D8743B8B79C0(iVar7, &Var9) && !func_58(Var9.f_1)) && iVar70 < 50)
			{
				if (!unk_0x33C8EAC2E4509403(Var9.f_0))
				{
					Var4.f_0 = Var9.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_1 = unk_0x05B6F0BD6BBB2050(iParam0, Var4.f_0);
					if (unk_0x99A28335809E4B6C(iParam0, Var4.f_0, 0))
					{
						unk_0x3DBE2A7AF9E71C82(&(Var4.f_2), (20 + unk_0x539EF466D1E3CB3E(iParam0, Var4.f_0)));
					}
					else
					{
						unk_0x3DBE2A7AF9E71C82(&(Var4.f_2), 20);
					}
					if (Var4.f_1 == -1)
					{
						if (!unk_0x2A292A04D839BF3D(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_133[iVar70 /*3*/].f_1 = Var4.f_1;
					iVar1 = 0;
					while (iVar1 < unk_0x0B2C0362098CB97C(iVar7))
					{
						if (unk_0x47BF2221B5382C2A(iVar7, iVar1, &Var48))
						{
							if (unk_0xC2AA32EA0F5ABE8C(iParam0, Var4.f_0, Var48.f_3))
							{
								unk_0x3DBE2A7AF9E71C82(&(Var4.f_2), iVar1);
							}
						}
						iVar1++;
					}
				}
				if (Var4.f_0 != 0)
				{
					if (!unk_0x99A28335809E4B6C(iParam0, Var4.f_0, 0))
					{
						Var4.f_0 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_133[iVar70 /*3*/] = { Var4 };
				iVar70++;
			}
			iVar7++;
		}
	}
}

int func_58(int iParam0)
{
	if (unk_0xD95428C8AA1DBBF2())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol50"):
			case joaat("weapon_bullpupshotgun"):
			case joaat("weapon_assaultsmg"):
				return 0;
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_snspistol"):
			case joaat("weapon_gusenberg"):
				return 0;
				break;
			
			case joaat("weapon_heavypistol"):
			case joaat("weapon_specialcarbine"):
				return 0;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return 0;
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				return 0;
				break;
			
			case joaat("weapon_firework"):
			case joaat("weapon_musket"):
				return 0;
				break;
			
			case joaat("weapon_heavyshotgun"):
			case joaat("weapon_marksmanrifle"):
				return 0;
				break;
			
			case joaat("weapon_hominglauncher"):
			case joaat("weapon_proxmine"):
				return 0;
				break;
			
			case joaat("weapon_heavyrifle"):
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case joaat("weapon_flaregun"):
			case joaat("weapon_handcuffs"):
			case joaat("weapon_snowball"):
			case joaat("weapon_garbagebag"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_59(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<4> Var41;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_medium");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_60(iParam0, &uVar2);
				if (iVar1 != -1)
				{
					if (iParam1 < unk_0x0B2C0362098CB97C(iVar1))
					{
						if (unk_0x47BF2221B5382C2A(iVar1, iParam1, &Var41))
						{
							return Var41.f_3;
						}
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_60(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x2611EF4947AA943C();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0x82A3D8743B8B79C0(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_61(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1993361168;
			break;
		
		case 1:
			iVar0 = 1277010230;
			break;
		
		case 2:
			iVar0 = 932043479;
			break;
		
		case 3:
			iVar0 = -690654591;
			break;
		
		case 4:
			iVar0 = -1459198205;
			break;
		
		case 5:
			iVar0 = 195782970;
			break;
		
		case 6:
			iVar0 = -438797331;
			break;
		
		case 7:
			iVar0 = 896793492;
			break;
		
		case 8:
			iVar0 = 495159329;
			break;
		
		case 9:
			iVar0 = -1155528315;
			break;
		
		case 10:
			iVar0 = -515636489;
			break;
		
		case 11:
			iVar0 = -871913299;
			break;
		
		case 12:
			iVar0 = -1352759032;
			break;
		
		case 13:
			iVar0 = -542958961;
			break;
		
		case 14:
			iVar0 = 1682645887;
			break;
		
		case 15:
			iVar0 = -859470162;
			break;
		
		case 16:
			iVar0 = -2125426402;
			break;
		
		case 17:
			iVar0 = 2067210266;
			break;
		
		case 18:
			iVar0 = -538172856;
			break;
		
		case 19:
			iVar0 = 1783244476;
			break;
		
		case 20:
			iVar0 = 439844898;
			break;
		
		case 21:
			iVar0 = -24829327;
			break;
		
		case 22:
			iVar0 = 1949306232;
			break;
		
		case 23:
			iVar0 = -1941230881;
			break;
		
		case 24:
			iVar0 = -1033554448;
			break;
		
		case 25:
			iVar0 = 320513715;
			break;
		
		case 26:
			iVar0 = -695165975;
			break;
		
		case 27:
			iVar0 = -281028447;
			break;
		
		case 28:
			iVar0 = -686713772;
			break;
		
		case 29:
			iVar0 = 347509793;
			break;
		
		case 30:
			iVar0 = 1769089473;
			break;
		
		case 31:
			iVar0 = 189935548;
			break;
		
		case 33:
			iVar0 = 248801358;
			break;
		
		case 34:
			iVar0 = 386596758;
			break;
		
		case 35:
			iVar0 = -157212362;
			break;
		
		case 36:
			iVar0 = 436985596;
			break;
		
		case 37:
			iVar0 = -47957369;
			break;
		
		case 38:
			iVar0 = 575938238;
			break;
	}
	return iVar0;
}

void func_62(int iParam0)
{
	int iVar0;
	
	iVar0 = func_44(iParam0);
	if (func_36(iVar0) && !unk_0x9F94F2CFDCA78C55(iParam0))
	{
		Global_97173.f_1729.f_539.f_294[iVar0] = unk_0xCB5E3AD3FD81074F(iParam0);
	}
}

void func_63(var uParam0, int iParam1)
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	int iVar5;
	
	*uParam0 = { unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1) };
	uParam0->f_3 = unk_0xA9D6B28E708753B6(unk_0x507DA4994C3D8EBD());
	uParam0->f_5 = unk_0x5D1F13DB150DEEBE(unk_0x507DA4994C3D8EBD());
	if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
	{
		uParam0->f_4 = unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95());
	}
	if (unk_0x2A488C176D52CCA5(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.472f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (unk_0x25531002BCF0D968(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (unk_0x61D8FEAF64881CDA(Global_68315, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (unk_0x61D8FEAF64881CDA(Global_68315, 5))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (unk_0x61D8FEAF64881CDA(Global_68315, 6))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (unk_0x61D8FEAF64881CDA(Global_68315, 7))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (unk_0xB9F7014CB27D77C7(unk_0x507DA4994C3D8EBD()) == unk_0x9C3273B36FEFD46F(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, 1, 0) || unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, 1, 0))
	{
		*uParam0 = { -601.59f, 2099.197f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.376f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.932f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.93f, 2594.153f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}
	if (iParam1 == 1)
	{
		if (func_67(&iVar0))
		{
			if (func_65(iVar0, &Var1, &uVar4))
			{
				Var1.f_2 = (Var1.f_2 + 1f);
				*uParam0 = { Var1 };
				uParam0->f_3 = uVar4;
			}
		}
		else if (unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0))
		{
			iVar5 = func_89();
			if (iVar5 == 0)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (iVar5 == 1)
			{
				*uParam0 = { -68.5531f, -1824.377f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (iVar5 == 2)
			{
				*uParam0 = { -220.8189f, -1162.302f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, 1, 0))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, 1, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_64(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_64(struct<3> Param0, char* sParam3, struct<3> Param4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xCA97BCE0621BFD25(Param0))
	{
		iVar0 = unk_0x9C3273B36FEFD46F(Param4, sParam3);
		if (!unk_0x93AF5BB44F9A2E1B(iVar0))
		{
			return 0;
		}
		iVar1 = unk_0xDD8967DDC05E1C1B(Param0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_65(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829.842f, -191.7454f, 36.4386f };
			*uParam2 = 29.5061f;
			break;
		
		case 1:
			*uParam1 = { 129.8484f, -1716.528f, 28.0702f };
			*uParam2 = 50.3483f;
			break;
		
		case 2:
			*uParam1 = { -1296.913f, -1120.999f, 5.3951f };
			*uParam2 = 0.9933f;
			break;
		
		case 3:
			*uParam1 = { 1938.028f, 3718.736f, 31.3154f };
			*uParam2 = 118.2305f;
			break;
		
		case 4:
			*uParam1 = { 1197.866f, -469.3809f, 65.0885f };
			*uParam2 = 346.4477f;
			break;
		
		case 5:
			*uParam1 = { -32.2161f, -135.8212f, 56.0532f };
			*uParam2 = 186.0052f;
			break;
		
		case 6:
			*uParam1 = { -287.7696f, 6238.081f, 30.2902f };
			*uParam2 = 316.1349f;
			break;
		
		case 7:
			*uParam1 = { 99.2876f, -1395.16f, 28.2759f };
			*uParam2 = 320.2739f;
			break;
		
		case 8:
			*uParam1 = { 1679.445f, 4819.056f, 41.0035f };
			*uParam2 = 4.6192f;
			break;
		
		case 9:
			*uParam1 = { 411.3063f, -809.1863f, 28.1554f };
			*uParam2 = 1.8972f;
			break;
		
		case 10:
			*uParam1 = { -1088.054f, 2699.167f, 19.2748f };
			*uParam2 = 129.7382f;
			break;
		
		case 11:
			*uParam1 = { 1194.163f, 2695.644f, 36.9225f };
			*uParam2 = 1.1454f;
			break;
		
		case 12:
			*uParam1 = { -821.2829f, -1088.027f, 10.0499f };
			*uParam2 = 120.5883f;
			break;
		
		case 13:
			*uParam1 = { -3.3416f, 6521.303f, 30.2961f };
			*uParam2 = 316.4451f;
			break;
		
		case 14:
			*uParam1 = { -1208.417f, -785.9635f, 16.0139f };
			*uParam2 = 36.3181f;
			break;
		
		case 15:
			*uParam1 = { 623.1845f, 2739.191f, 40.9588f };
			*uParam2 = 3.5411f;
			break;
		
		case 16:
			*uParam1 = { 130.9555f, -198.2084f, 53.41f };
			*uParam2 = 251.3506f;
			break;
		
		case 17:
			*uParam1 = { -3164.065f, 1067.317f, 19.6778f };
			*uParam2 = 101.2229f;
			break;
		
		case 18:
			*uParam1 = { -713.2797f, -174.2767f, 35.8962f };
			*uParam2 = 29.8138f;
			break;
		
		case 19:
			*uParam1 = { -147.0616f, -306.4322f, 37.7912f };
			*uParam2 = 160.4526f;
			break;
		
		case 20:
			*uParam1 = { -1461.355f, -230.6092f, 48.3064f };
			*uParam2 = 318.7851f;
			break;
		
		case 21:
			*uParam1 = { -1347.739f, -1278.573f, 3.8952f };
			*uParam2 = 17.9365f;
			break;
		
		case 22:
			*uParam1 = { 325.6833f, 164.3263f, 102.4425f };
			*uParam2 = 68.6407f;
			break;
		
		case 23:
			*uParam1 = { 1858.774f, 3742.393f, 32.0779f };
			*uParam2 = 301.2329f;
			break;
		
		case 24:
			*uParam1 = { -286.3272f, 6202.802f, 30.3323f };
			*uParam2 = 225.1334f;
			break;
		
		case 25:
			*uParam1 = { -1161.596f, -1417.7f, 3.712f };
			*uParam2 = 246.9161f;
			break;
		
		case 26:
			*uParam1 = { 1308.952f, -1660.611f, 50.2362f };
			*uParam2 = 163.5456f;
			break;
		
		case 27:
			*uParam1 = { -3161.585f, 1074.214f, 19.6847f };
			*uParam2 = 98.6092f;
			break;
		
		case 28:
			*uParam1 = { 28.423f, -1110.814f, 28.2848f };
			*uParam2 = 85.2495f;
			break;
		
		case 29:
			*uParam1 = { 1704.966f, 3749.709f, 33.0188f };
			*uParam2 = 45.6778f;
			break;
		
		case 30:
			*uParam1 = { 223.949f, -38.7894f, 68.6483f };
			*uParam2 = 159.4265f;
			break;
		
		case 31:
			*uParam1 = { 837.7854f, -1017.963f, 26.3045f };
			*uParam2 = 181.0445f;
			break;
		
		case 32:
			*uParam1 = { -313.1914f, 6093.351f, 30.4625f };
			*uParam2 = 315.8405f;
			break;
		
		case 33:
			*uParam1 = { -663.4631f, -952.8069f, 20.3143f };
			*uParam2 = 92.6796f;
			break;
		
		case 34:
			*uParam1 = { -1323.06f, -392.8577f, 35.4596f };
			*uParam2 = 210.7398f;
			break;
		
		case 35:
			*uParam1 = { -1106.102f, 2684.35f, 18.0953f };
			*uParam2 = 127.0383f;
			break;
		
		case 36:
			*uParam1 = { -3157.932f, 1081.309f, 19.6953f };
			*uParam2 = 100.2942f;
			break;
		
		case 37:
			*uParam1 = { 2562.882f, 312.8641f, 107.4612f };
			*uParam2 = 179.205f;
			break;
		
		case 38:
			*uParam1 = { 822.48f, -2142.875f, 27.8496f };
			*uParam2 = 355.0598f;
			break;
		
		case 39:
			*uParam1 = { -1137.053f, -1993.916f, 12.1677f };
			*uParam2 = 43.1213f;
			break;
		
		case 40:
			*uParam1 = { 717.8107f, -1084.081f, 21.3094f };
			*uParam2 = 93.2649f;
			break;
		
		case 41:
			*uParam1 = { -387.6789f, -128.2568f, 37.6796f };
			*uParam2 = 119.1085f;
			break;
		
		case 42:
			*uParam1 = { 117.8835f, 6599.415f, 31.0134f };
			*uParam2 = 90.7225f;
			break;
		
		case 43:
			*uParam1 = { 1201.709f, 2664.813f, 36.8102f };
			*uParam2 = 133.9002f;
			break;
	}
	return !func_66(*uParam1, 0f, 0f, 0f);
}

bool func_66(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_67(var uParam0)
{
	if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()) && !unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
	{
		if (func_77())
		{
			*uParam0 = func_73(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 0), 5, -1, 0, 1);
			if (func_72(*uParam0) && !func_68(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_68(int iParam0)
{
	return func_69(iParam0, 0, 1);
}

int func_69(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0x61D8FEAF64881CDA(Global_89836.f_1267[iParam0], iParam1);
	}
	else if (unk_0xD95428C8AA1DBBF2())
	{
		if (func_71() == 0)
		{
			return unk_0x61D8FEAF64881CDA(func_47(func_70(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x61D8FEAF64881CDA(Global_97173.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_70(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 814;
			break;
		
		case 1:
			return 815;
			break;
		
		case 2:
			return 816;
			break;
		
		case 3:
			return 817;
			break;
		
		case 4:
			return 818;
			break;
		
		case 5:
			return 819;
			break;
		
		case 6:
			return 820;
			break;
		
		case 7:
			return 821;
			break;
		
		case 8:
			return 822;
			break;
		
		case 9:
			return 823;
			break;
		
		case 10:
			return 824;
			break;
		
		case 11:
			return 825;
			break;
		
		case 12:
			return 826;
			break;
		
		case 13:
			return 827;
			break;
		
		case 14:
			return 828;
			break;
		
		case 15:
			return 830;
			break;
		
		case 16:
			return 831;
			break;
		
		case 17:
			return 832;
			break;
		
		case 18:
			return 833;
			break;
		
		case 19:
			return 834;
			break;
		
		case 20:
			return 835;
			break;
		
		case 21:
			return 836;
			break;
		
		case 22:
			return 837;
			break;
		
		case 23:
			return 838;
			break;
		
		case 24:
			return 839;
			break;
		
		case 25:
			return 840;
			break;
		
		case 26:
			return 841;
			break;
		
		case 27:
			return 842;
			break;
		
		case 28:
			return 843;
			break;
		
		case 29:
			return 844;
			break;
		
		case 30:
			return 845;
			break;
		
		case 31:
			return 846;
			break;
		
		case 32:
			return 847;
			break;
		
		case 33:
			return 848;
			break;
		
		case 34:
			return 849;
			break;
		
		case 35:
			return 850;
			break;
		
		case 36:
			return 851;
			break;
		
		case 37:
			return 852;
			break;
		
		case 38:
			return 853;
			break;
		
		case 39:
			return 854;
			break;
		
		case 40:
			return 858;
			break;
		
		case 41:
			return 859;
			break;
		
		case 42:
			return 860;
			break;
		
		case 43:
			return 861;
			break;
		
		default:
			break;
	}
	return 2829;
}

int func_71()
{
	return Global_24444;
}

int func_72(int iParam0)
{
	return func_69(iParam0, 5, 1);
}

int func_73(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 43)
	{
		if (iParam3 == 5 || iParam3 == func_76(iVar0))
		{
			if (!bParam5 || func_75(iVar0))
			{
				fVar1 = unk_0x8FE221761D524CFE(Param0, func_74(iVar0), 1);
				if ((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam4) || iParam4 == -1)) && (iParam6 || iVar0 != 21))
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_74(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
			break;
		
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
			break;
		
		case 4:
			return 1208.333f, -470.917f, 65.208f;
			break;
		
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
			break;
		
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
			break;
		
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
			break;
		
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
			break;
		
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
			break;
		
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
			break;
		
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
			break;
		
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
			break;
		
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
			break;
		
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
			break;
		
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
			break;
		
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
			break;
		
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
			break;
		
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
			break;
		
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
			break;
		
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
			break;
		
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
			break;
		
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
			break;
		
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
			break;
		
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
			break;
		
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
			break;
		
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
			break;
		
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
			break;
		
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
			break;
		
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
			break;
		
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
			break;
		
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_75(int iParam0)
{
	return func_69(iParam0, 0, 0);
}

int func_76(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 5;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
	}
	return 5;
}

bool func_77()
{
	return Global_89836.f_290 > 0;
}

var func_78()
{
	var uVar0;
	
	func_88(&uVar0, unk_0x2784A8234E9B4202());
	func_87(&uVar0, unk_0x06F66CEDC24218A4());
	func_86(&uVar0, unk_0xE76C684D1C903A71());
	func_81(&uVar0, unk_0xA277D6C04B4B44C8());
	func_80(&uVar0, unk_0x1285C2DD1E4945FF());
	func_79(&uVar0, unk_0xCFC08A7C99F98C5B());
	return uVar0;
}

void func_79(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_80(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_81(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_85(*uParam0);
	iVar1 = func_83(*uParam0);
	if (iParam1 < 1 || iParam1 > func_82(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_82(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

var func_83(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_84(unk_0x61D8FEAF64881CDA(iParam0, 31), -1, 1)) + 2011;
}

int func_84(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_85(var uParam0)
{
	return uParam0 & 15;
}

void func_86(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_87(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_88(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_89()
{
	func_54();
	return Global_97173.f_1729.f_539.f_3213;
}

void func_90(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (unk_0x2F4E1FF400251C08() || unk_0x5D64B4BDB6FCA4F0())
	{
		uVar0 = iParam0;
		unk_0x25A20EA9824CF18A(9, &uVar0, 1, 1);
	}
	else if (unk_0x9763C0E44A644CB2() || unk_0xA09FDB4B3C001CAB())
	{
		StringCopy(&cVar1, "SPRC_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0xE910527B20D11CBB(9, &cVar1);
	}
}

void func_91(char* sParam0, var uParam1, int iParam2)
{
	if (!unk_0x8FA72E132AAFA62F(&Global_87259))
	{
		unk_0xA5DD6D136099F892(&Global_87259, 0, 0, 0, 1, 0);
		StringCopy(&Global_87259, "", 64);
	}
	StringCopy(&Global_87259, sParam0, 64);
	unk_0x45BDED4C92C7BED2(sParam0, uParam1, iParam2, func_92(0));
}

bool func_92(bool bParam0)
{
	if (!bParam0 && unk_0x25531002BCF0D968(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x61D8FEAF64881CDA(Global_68315, 0);
}

struct<2> func_93(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

void func_94(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_95(uParam1, "Abigail1", func_9(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 1:
			func_95(uParam1, "Abigail2", func_9(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 2:
			func_95(uParam1, "Barry1", func_9(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 3:
			func_95(uParam1, "Barry2", func_9(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_96(iParam0), 1, 1);
			break;
		
		case 4:
			func_95(uParam1, "Barry3", func_9(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 5:
			func_95(uParam1, "Barry3A", func_9(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 6:
			func_95(uParam1, "Barry3C", func_9(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 7:
			func_95(uParam1, "Barry4", func_9(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_96(iParam0), 0, 0);
			break;
		
		case 8:
			func_95(uParam1, "Dreyfuss1", func_9(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 9:
			func_95(uParam1, "Epsilon1", func_9(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 10:
			func_95(uParam1, "Epsilon2", func_9(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 11:
			func_95(uParam1, "Epsilon3", func_9(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 12:
			func_95(uParam1, "Epsilon4", func_9(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 13:
			func_95(uParam1, "Epsilon5", func_9(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 14:
			func_95(uParam1, "Epsilon6", func_9(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 15:
			func_95(uParam1, "Epsilon7", func_9(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 16:
			func_95(uParam1, "Epsilon8", func_9(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 17:
			func_95(uParam1, "Extreme1", func_9(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 18:
			func_95(uParam1, "Extreme2", func_9(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 19:
			func_95(uParam1, "Extreme3", func_9(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 20:
			func_95(uParam1, "Extreme4", func_9(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 21:
			func_95(uParam1, "Fanatic1", func_9(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_96(iParam0), 1, 0);
			break;
		
		case 22:
			func_95(uParam1, "Fanatic2", func_9(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_96(iParam0), 1, 0);
			break;
		
		case 23:
			func_95(uParam1, "Fanatic3", func_9(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_96(iParam0), 0, 1);
			break;
		
		case 24:
			func_95(uParam1, "Hao1", func_9(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_96(iParam0), 0, 1);
			break;
		
		case 25:
			func_95(uParam1, "Hunting1", func_9(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 26:
			func_95(uParam1, "Hunting2", func_9(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 27:
			func_95(uParam1, "Josh1", func_9(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 28:
			func_95(uParam1, "Josh2", func_9(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_96(iParam0), 1, 1);
			break;
		
		case 29:
			func_95(uParam1, "Josh3", func_9(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_96(iParam0), 1, 1);
			break;
		
		case 30:
			func_95(uParam1, "Josh4", func_9(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 31:
			func_95(uParam1, "Maude1", func_9(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 32:
			func_95(uParam1, "Minute1", func_9(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 33:
			func_95(uParam1, "Minute2", func_9(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 34:
			func_95(uParam1, "Minute3", func_9(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 35:
			func_95(uParam1, "MrsPhilips1", func_9(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 36:
			func_95(uParam1, "MrsPhilips2", func_9(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 37:
			func_95(uParam1, "Nigel1", func_9(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 38:
			func_95(uParam1, "Nigel1A", func_9(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_96(iParam0), 1, 1);
			break;
		
		case 39:
			func_95(uParam1, "Nigel1B", func_9(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_96(iParam0), 1, 1);
			break;
		
		case 40:
			func_95(uParam1, "Nigel1C", func_9(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_96(iParam0), 1, 1);
			break;
		
		case 41:
			func_95(uParam1, "Nigel1D", func_9(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_96(iParam0), 1, 1);
			break;
		
		case 42:
			func_95(uParam1, "Nigel2", func_9(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_96(iParam0), 1, 1);
			break;
		
		case 43:
			func_95(uParam1, "Nigel3", func_9(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_96(iParam0), 1, 1);
			break;
		
		case 44:
			func_95(uParam1, "Omega1", func_9(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 45:
			func_95(uParam1, "Omega2", func_9(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 46:
			func_95(uParam1, "Paparazzo1", func_9(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 47:
			func_95(uParam1, "Paparazzo2", func_9(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 48:
			func_95(uParam1, "Paparazzo3", func_9(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 49:
			func_95(uParam1, "Paparazzo3A", func_9(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 50:
			func_95(uParam1, "Paparazzo3B", func_9(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 51:
			func_95(uParam1, "Paparazzo4", func_9(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 52:
			func_95(uParam1, "Rampage1", func_9(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 54:
			func_95(uParam1, "Rampage3", func_9(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 55:
			func_95(uParam1, "Rampage4", func_9(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 56:
			func_95(uParam1, "Rampage5", func_9(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 53:
			func_95(uParam1, "Rampage2", func_9(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 57:
			func_95(uParam1, "TheLastOne", func_9(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 58:
			func_95(uParam1, "Tonya1", func_9(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 59:
			func_95(uParam1, "Tonya2", func_9(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 60:
			func_95(uParam1, "Tonya3", func_9(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 61:
			func_95(uParam1, "Tonya4", func_9(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 62:
			func_95(uParam1, "Tonya5", func_9(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_95(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { Param7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_96(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

int func_97(int iParam0)
{
	int iVar0;
	
	if (func_125(&(iParam0->f_1)))
	{
		if (!unk_0x8FA72E132AAFA62F(&(iParam0->f_9)))
		{
			func_116(1);
			func_114(iParam0, 1, func_115(*iParam0));
		}
		if (iParam0->f_27)
		{
			if (func_113(*iParam0))
			{
				while (!unk_0x73B082A8BFC119BA(unk_0x507DA4994C3D8EBD()))
				{
					func_129();
					unk_0x4EDE34FBADD967A6(0);
				}
			}
		}
		func_98(*iParam0);
		iVar0 = unk_0xB8BA7F44DF1575E1(&(iParam0->f_1), iParam0, 61, 17000);
		unk_0xDD83BEFDE8CC91AD(&(iParam0->f_1));
		if (unk_0x6715FA5BFE2185EB())
		{
			func_287("Initial cutscene loaded and passing to RC mission.");
			unk_0x4275D92AAF73C757(iVar0);
		}
		else
		{
			func_287("Initial cutscene wasn't loaded in time to pass to RC mission.");
			unk_0xCB0201F0BA3841A2();
		}
		return 1;
	}
	return 0;
}

void func_98(int iParam0)
{
	struct<2> Var0;
	
	func_112();
	if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
	{
		unk_0x7FEDD088E489CE41(unk_0x507DA4994C3D8EBD(), 32, 0);
		unk_0x7FEDD088E489CE41(unk_0x507DA4994C3D8EBD(), 250, 0);
	}
	if (func_111(iParam0))
	{
		unk_0x150D92C99E954111(unk_0x507DA4994C3D8EBD(), 0);
	}
	unk_0x85561C2D9ACBDF0D(unk_0xAF65E5A58BE87D95(), 1);
	unk_0x0474B54D6F301DDF(0, 1);
	unk_0x0474B54D6F301DDF(3, 1);
	unk_0x0474B54D6F301DDF(2, 1);
	if (Global_35953 == 1)
	{
		if (func_110(unk_0x507DA4994C3D8EBD()))
		{
			func_101(unk_0x507DA4994C3D8EBD());
		}
	}
	if (!func_147())
	{
		if (iParam0 < 63)
		{
			func_99(iParam0);
			Var0 = { func_9(iParam0) };
			unk_0xAABDA3B6E57B068A(1, &Var0);
		}
	}
}

void func_99(int iParam0)
{
	if (iParam0 < 63)
	{
		func_100();
		Global_68322 = iParam0;
		Global_68321 = 0;
		Global_68324 = 7;
	}
}

void func_100()
{
	if (Global_68321 != 6)
	{
	}
	if (Global_68326)
	{
		unk_0x7DD2AC90262DCE82(15);
		Global_68326 = 0;
		Global_17236.f_7207 = 0;
	}
	Global_68321 = 6;
	Global_68323 = -1;
	Global_68322 = -1;
}

void func_101(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!unk_0xFD68187442384158(iParam0))
	{
		return;
	}
	iVar0 = func_109(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_35756[iVar0 /*5*/];
		func_104(1, iVar1, 1);
		return;
	}
	iVar2 = func_103(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_102(iVar2);
}

void func_102(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_35730[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_35730[iParam0 /*5*/].f_1 == unk_0x507DA4994C3D8EBD())
		{
			Global_35951 = 0;
		}
	}
	Global_35730[iParam0 /*5*/] = 13;
	Global_35730[iParam0 /*5*/].f_1 = 0;
	Global_35730[iParam0 /*5*/].f_2 = 0;
	Global_35730[iParam0 /*5*/].f_3 = 0;
	Global_35730[iParam0 /*5*/].f_4 = 0;
	Global_35729 = (Global_35729 - 1);
	if (Global_35729 < 0)
	{
		Global_35729 = 0;
	}
}

int func_103(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_35730[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_104(int iParam0, int iParam1, int iParam2)
{
	func_105(iParam0, iParam1, iParam2, 0, 0);
}

void func_105(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_107(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_106();
	if (iVar0 == -1)
	{
		return;
	}
	Global_35837[iVar0 /*5*/] = iParam0;
	Global_35837[iVar0 /*5*/].f_1 = iParam1;
	Global_35837[iVar0 /*5*/].f_2 = iParam2;
	Global_35837[iVar0 /*5*/].f_3 = iParam3;
	Global_35837[iVar0 /*5*/].f_4 = iParam4;
}

int func_106()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_35837[iVar0 /*5*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_107(int iParam0, int iParam1, int iParam2)
{
	if (func_108(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_108(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_35837[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_35837[iVar0 /*5*/])
			{
				if (iParam1 == Global_35837[iVar0 /*5*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_109(int iParam0)
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
		if (!Global_35756[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_35756[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_110(int iParam0)
{
	if (func_181(iParam0))
	{
		if (!unk_0x9F94F2CFDCA78C55(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_111(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 38:
		case 39:
		case 40:
		case 41:
		case 49:
		case 50:
		case 60:
		case 61:
			return 0;
			break;
	}
	return 1;
}

void func_112()
{
	if (Global_3068[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3068[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3068[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3068[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3068[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3068[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	unk_0xCD27BF29FB9012E2(&Global_2263, 25);
	unk_0x3DBE2A7AF9E71C82(&Global_2264, 11);
}

int func_113(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 14:
		case 16:
		case 38:
		case 39:
		case 40:
		case 41:
		case 49:
		case 50:
			return 0;
			break;
	}
	return 1;
}

void func_114(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_181(uParam0->f_28[iVar0]))
		{
			unk_0x9FD46396C2DAB482(uParam0->f_28[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_181(uParam0->f_35[iVar0]))
		{
			unk_0x9FD46396C2DAB482(uParam0->f_35[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_181(uParam0->f_41[iVar0]))
		{
			unk_0x9FD46396C2DAB482(uParam0->f_41[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		}
		iVar0++;
	}
	if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
	{
		unk_0x9FD46396C2DAB482(unk_0x507DA4994C3D8EBD(), iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		unk_0xF732465E1FF70CE4(unk_0x507DA4994C3D8EBD(), iParam1);
		if (bParam2)
		{
			unk_0x0A000D03DB5B545F(unk_0x507DA4994C3D8EBD(), joaat("weapon_unarmed"), 1);
		}
	}
}

int func_115(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 14:
		case 38:
		case 39:
		case 40:
		case 41:
		case 49:
		case 50:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
			return 0;
			break;
	}
	return 1;
}

void func_116(bool bParam0)
{
	var uVar0;
	
	uVar0 = unk_0x4D82797EF5035A9F();
	if (!unk_0x3082186EA3CBA463(uVar0))
	{
		if (bParam0)
		{
		}
		unk_0xFAAA53BBE1EEF174(uVar0, bParam0, 16);
		unk_0xFAAA53BBE1EEF174(uVar0, bParam0, 32);
	}
	func_117(1, 1, 0, 0);
}

void func_117(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x62F999FAD28AC182(unk_0xAF65E5A58BE87D95());
		unk_0x85561C2D9ACBDF0D(unk_0xAF65E5A58BE87D95(), 1);
		unk_0xDD748F877B6C00B7(unk_0xAF65E5A58BE87D95(), 1);
		func_124(1);
		unk_0x3CD3516D9FBE0424();
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x49BDC46D7CAD9C63())
			{
				unk_0xD858EC6FECDB4B3F(0);
			}
			if (!func_123())
			{
				Global_14393.f_1 = 3;
			}
			Global_15692 = 5;
		}
		func_122(1, iParam3, iParam2);
		Global_54578 = 1;
		Global_66883 = 1;
		Global_68065 = 1;
	}
	else
	{
		func_124(0);
		unk_0x5DC2C7ED9A68FCEF();
		Global_54578 = 0;
		if (bParam1)
		{
			unk_0x56D29F96CA2CFAC2();
		}
		unk_0x85561C2D9ACBDF0D(unk_0xAF65E5A58BE87D95(), 0);
		unk_0xDD748F877B6C00B7(unk_0xAF65E5A58BE87D95(), 0);
		func_122(0, iParam3, iParam2);
		if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()) && !func_118(unk_0xAF65E5A58BE87D95()))
		{
			unk_0xF732465E1FF70CE4(unk_0x507DA4994C3D8EBD(), 0);
		}
		Global_68065 = 0;
	}
}

int func_118(int iParam0)
{
	if (func_120(iParam0, 0))
	{
		return 1;
	}
	if (func_119())
	{
		if (iParam0 == unk_0xAF65E5A58BE87D95())
		{
			return 1;
		}
	}
	if (unk_0x61D8FEAF64881CDA(Global_2413868[iParam0 /*253*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_119()
{
	return unk_0x61D8FEAF64881CDA(Global_2359301, 3);
}

bool func_120(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xAF65E5A58BE87D95())
	{
		bVar0 = func_121(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582048[iParam0 /*324*/].f_180 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xB832D52B86777A35(iParam0))
		{
			bVar0 = unk_0x5805EAF13FC54BE6(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_121(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_49();
	}
	if (Global_1315875[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312730[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_122(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x80AD636AD4184F2B())
	{
		if (unk_0x9FD74BBA3650C4CD() != iParam0 && uParam2)
		{
			unk_0x889006E2EE739868(iParam0, uParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_123()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_124(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x3DBE2A7AF9E71C82(&Global_2263, 13);
	}
	else
	{
		unk_0xCD27BF29FB9012E2(&Global_2263, 13);
	}
}

int func_125(char* sParam0)
{
	if (!unk_0x8FA72E132AAFA62F(uParam0))
	{
		unk_0x38797C3918FDD596(uParam0);
		while (!unk_0x4C903C3B660A5023(sParam0))
		{
			unk_0x38797C3918FDD596(sParam0);
			unk_0x4EDE34FBADD967A6(0);
		}
		return 1;
	}
	func_287("Attempting to launch invalid script file [TERMINATING]");
	return 0;
}

void func_126()
{
	Global_14558 = 0;
	func_127();
}

void func_127()
{
	unk_0xA2A4AD85BA2F7ADD();
	Global_16703 = 0;
	if ((unk_0x49BDC46D7CAD9C63() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		unk_0xD858EC6FECDB4B3F(0);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (unk_0xF611D1BB58990143())
	{
		unk_0xD858EC6FECDB4B3F(1);
		Global_15692 = 6;
		return;
	}
}

int func_128()
{
	if (Global_15692 != 0 || unk_0xF611D1BB58990143())
	{
		return 1;
	}
	return 0;
}

void func_129()
{
	func_133();
	func_132();
	func_130();
}

void func_130()
{
	if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
	{
		if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
		{
			if (func_131(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0), 10.5f, 1, 1056964608, 0, 1))
			{
				if (unk_0xEC043AB2FEE0E94F(unk_0x507DA4994C3D8EBD(), -828834893) != 1)
				{
					unk_0x48367A1F7C9A1041(unk_0x507DA4994C3D8EBD(), 0, 0);
				}
			}
		}
	}
}

int func_131(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5)
{
	unk_0x500F4CA776CEBD0A(0, 71, 1);
	unk_0x500F4CA776CEBD0A(0, 72, 1);
	unk_0x500F4CA776CEBD0A(0, 76, 1);
	unk_0x500F4CA776CEBD0A(0, 73, 1);
	unk_0x500F4CA776CEBD0A(0, 59, 1);
	unk_0x500F4CA776CEBD0A(0, 60, 1);
	if (bParam5)
	{
		unk_0x500F4CA776CEBD0A(0, 75, 1);
	}
	unk_0x500F4CA776CEBD0A(0, 80, 1);
	unk_0x500F4CA776CEBD0A(0, 69, 1);
	unk_0x500F4CA776CEBD0A(0, 70, 1);
	unk_0x500F4CA776CEBD0A(0, 68, 1);
	unk_0x500F4CA776CEBD0A(0, 74, 1);
	unk_0x500F4CA776CEBD0A(0, 86, 1);
	unk_0x500F4CA776CEBD0A(0, 81, 1);
	unk_0x500F4CA776CEBD0A(0, 82, 1);
	unk_0x500F4CA776CEBD0A(0, 138, 1);
	unk_0x500F4CA776CEBD0A(0, 136, 1);
	unk_0x500F4CA776CEBD0A(0, 114, 1);
	unk_0x500F4CA776CEBD0A(0, 107, 1);
	unk_0x500F4CA776CEBD0A(0, 110, 1);
	unk_0x500F4CA776CEBD0A(0, 89, 1);
	unk_0x500F4CA776CEBD0A(0, 89, 1);
	unk_0x500F4CA776CEBD0A(0, 87, 1);
	unk_0x500F4CA776CEBD0A(0, 88, 1);
	unk_0x500F4CA776CEBD0A(0, 113, 1);
	unk_0x500F4CA776CEBD0A(0, 115, 1);
	unk_0x500F4CA776CEBD0A(0, 116, 1);
	unk_0x500F4CA776CEBD0A(0, 117, 1);
	unk_0x500F4CA776CEBD0A(0, 118, 1);
	unk_0x500F4CA776CEBD0A(0, 119, 1);
	unk_0x500F4CA776CEBD0A(0, 131, 1);
	unk_0x500F4CA776CEBD0A(0, 132, 1);
	unk_0x500F4CA776CEBD0A(0, 123, 1);
	unk_0x500F4CA776CEBD0A(0, 126, 1);
	unk_0x500F4CA776CEBD0A(0, 129, 1);
	unk_0x500F4CA776CEBD0A(0, 130, 1);
	unk_0x500F4CA776CEBD0A(0, 133, 1);
	unk_0x500F4CA776CEBD0A(0, 134, 1);
	unk_0x65C671B5F3251D24();
	if ((unk_0xF976C624234A4AA8() - Global_28) > 500)
	{
		unk_0x7674FE6F22323056(iParam0, fParam1, iParam2, iParam4);
	}
	Global_28 = unk_0xF976C624234A4AA8();
	if (!unk_0xE5D56342B0FF1D0D(iParam0))
	{
		if (unk_0x75E01E8585722F89(unk_0x11F6A4A45943670E(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_132()
{
	unk_0x500F4CA776CEBD0A(0, 21, 1);
	unk_0x500F4CA776CEBD0A(0, 37, 1);
	unk_0x500F4CA776CEBD0A(0, 25, 1);
	unk_0x500F4CA776CEBD0A(0, 141, 1);
	unk_0x500F4CA776CEBD0A(0, 140, 1);
	unk_0x500F4CA776CEBD0A(0, 24, 1);
	unk_0x500F4CA776CEBD0A(0, 257, 1);
	unk_0x500F4CA776CEBD0A(0, 22, 1);
	unk_0x500F4CA776CEBD0A(0, 23, 1);
}

void func_133()
{
	if (!Global_14393.f_1 == 1)
	{
		if (func_136(0))
		{
			func_134(0);
		}
		unk_0x3DBE2A7AF9E71C82(&Global_2264, 2);
	}
}

void func_134(int iParam0)
{
	if (Global_14551)
	{
		func_135(0, 0);
	}
	if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
	{
		unk_0x3DBE2A7AF9E71C82(&Global_2264, 16);
	}
	if (unk_0x49BDC46D7CAD9C63())
	{
		unk_0xD858EC6FECDB4B3F(0);
	}
	Global_15692 = 5;
	if (iParam0 == 1)
	{
		unk_0x3DBE2A7AF9E71C82(&Global_2263, 30);
	}
	else
	{
		unk_0xCD27BF29FB9012E2(&Global_2263, 30);
	}
	if (!func_123())
	{
		Global_14393.f_1 = 3;
	}
}

void func_135(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_136(0))
		{
			Global_14551 = 1;
			if (bParam1)
			{
				unk_0x483F49444BC10CD1(&Global_14330);
			}
			Global_14321 = { Global_14339[Global_14338 /*3*/] };
			unk_0x22FDA9F8AE4DE11C(Global_14321);
		}
	}
	else if (Global_14551 == 1)
	{
		Global_14551 = 0;
		Global_14321 = { Global_14346[Global_14338 /*3*/] };
		if (bParam1)
		{
			unk_0x22FDA9F8AE4DE11C(Global_14330);
		}
		else
		{
			unk_0x22FDA9F8AE4DE11C(Global_14321);
		}
	}
}

int func_136(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x61D8FEAF64881CDA(Global_2263, 14))
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
	if (unk_0x25531002BCF0D968(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_137(int iParam0)
{
	if ((((iParam0 == 52 || iParam0 == 53) || iParam0 == 54) || iParam0 == 55) || iParam0 == 56)
	{
		return 1;
	}
	return 0;
}

int func_138(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_145();
	}
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_140(&(Global_96260[iParam0 /*10*/].f_9), 1, 4, 0, 0);
	if (!iVar0 == 1)
	{
		return 0;
	}
	func_139(iParam0);
	return 1;
}

void func_139(int iParam0)
{
	Global_96260[iParam0 /*10*/].f_4 = 1;
	Global_96260[iParam0 /*10*/].f_5 = 0;
	Global_96260[iParam0 /*10*/].f_6 = 0;
	Global_96260[iParam0 /*10*/] = 0;
}

int func_140(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_87667.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_144(0))
		{
			return 0;
		}
		Global_34873++;
		*uParam0 = Global_34873;
		unk_0x60D71C675384BFB1(unk_0x4D82797EF5035A9F(), 0);
		Global_17098.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xA6C786E2F6583AF3(8);
		}
		Global_34909 = iParam2;
		Global_34871 = *uParam0;
		Global_34872 = iParam4;
		Global_34870 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_34870 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_34870)
			{
				if (Global_34876[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_34871 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_142(iParam2))
		{
			return 0;
		}
		if (Global_34870 == 8)
		{
			return 0;
		}
		Global_34873++;
		*uParam0 = Global_34873;
		Global_34876[Global_34870 /*4*/] = Global_34873;
		Global_34876[Global_34870 /*4*/].f_1 = iParam1;
		Global_34876[Global_34870 /*4*/].f_2 = iParam2;
		Global_34876[Global_34870 /*4*/].f_3 = 0;
		Global_34870++;
		if (iParam4 != 0)
		{
			func_141(uParam0, iParam4);
		}
	}
	return 2;
}

void func_141(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_34870 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_34870)
	{
		if (Global_34876[iVar0 /*4*/] == *uParam0)
		{
			Global_34876[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_142(int iParam0)
{
	return func_143(iParam0, Global_34909);
}

int func_143(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_144(int iParam0)
{
	if (Global_34909 == 15)
	{
		return 0;
	}
	if (func_142(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_145()
{
	return func_146(unk_0x3ED5FA3F61EC9E68(), 0);
}

int func_146(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar33;
	int iVar34;
	
	iVar33 = unk_0x3BA42EA02A10243D(uParam0);
	iVar34 = 0;
	iVar34 = 0;
	while (iVar34 < 63)
	{
		iVar0 = iVar34;
		func_94(iVar0, &uVar1);
		if (unk_0x3BA42EA02A10243D(uVar1) == iVar33)
		{
			return iVar0;
		}
		iVar34++;
	}
	if (iParam1 == 0)
	{
	}
	return -1;
}

int func_147()
{
	if (Global_89784 == 10 || Global_89784 == 9)
	{
		return 1;
	}
	return 0;
}

void func_148(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = func_149(-1604.668f, 5239.1f, 3.01f, 0);
			unk_0x01DF6D56C47E7482(*uParam1, 66);
			unk_0xEDB3DD98D55452E4(*uParam1, 42);
			break;
		
		case 1:
			*uParam1 = func_149(-1592.84f, 5214.04f, 3.01f, 0);
			unk_0x01DF6D56C47E7482(*uParam1, 400);
			unk_0xEDB3DD98D55452E4(*uParam1, 42);
			break;
		
		case 2:
		case 3:
			*uParam1 = func_149(190.26f, -956.35f, 29.63f, 0);
			if ((unk_0x61D8FEAF64881CDA(Global_97173.f_16795[2 /*6*/], 3) || unk_0x61D8FEAF64881CDA(Global_97173.f_16795[4 /*6*/], 3)) || unk_0x61D8FEAF64881CDA(Global_97173.f_16795[4 /*6*/], 3))
			{
				unk_0x01DF6D56C47E7482(*uParam1, 381);
			}
			else
			{
				unk_0x01DF6D56C47E7482(*uParam1, 66);
			}
			if (iParam0 == 2)
			{
				unk_0xEDB3DD98D55452E4(*uParam1, 42);
			}
			else
			{
				unk_0xEDB3DD98D55452E4(*uParam1, 44);
			}
			break;
		
		case 4:
			*uParam1 = func_149(414f, -761f, 29f, 0);
			if (unk_0x61D8FEAF64881CDA(Global_97173.f_16795[2 /*6*/], 3) || unk_0x61D8FEAF64881CDA(Global_97173.f_16795[3 /*6*/], 3))
			{
				unk_0x01DF6D56C47E7482(*uParam1, 381);
			}
			else
			{
				unk_0x01DF6D56C47E7482(*uParam1, 66);
			}
			unk_0xEDB3DD98D55452E4(*uParam1, 43);
			break;
		
		case 9:
			*uParam1 = func_149(-1622.89f, 4204.87f, 83.3f, 0);
			unk_0x01DF6D56C47E7482(*uParam1, 66);
			unk_0xEDB3DD98D55452E4(*uParam1, 42);
			break;
		
		case 11:
		case 12:
		case 13:
			if (iParam0 == 11)
			{
				*uParam1 = func_149(1835.53f, 4705.86f, 38.1f, 0);
			}
			else if (iParam0 == 12)
			{
				*uParam1 = func_149(1826.13f, 4698.88f, 38.92f, 0);
			}
			else
			{
				*uParam1 = func_149(637.02f, 119.7093f, 89.5f, 0);
			}
			unk_0x01DF6D56C47E7482(*uParam1, 206);
			unk_0xEDB3DD98D55452E4(*uParam1, 42);
			break;
		
		case 18:
		case 19:
			if (iParam0 == 18)
			{
				*uParam1 = func_149(-954.19f, -2760.05f, 14.64f, 0);
			}
			else
			{
				*uParam1 = func_149(-63.8f, -809.5f, 321.8f, 0);
			}
			unk_0x01DF6D56C47E7482(*uParam1, 382);
			unk_0xEDB3DD98D55452E4(*uParam1, 43);
			break;
		
		case 21:
		case 23:
			if (iParam0 == 21)
			{
				*uParam1 = func_149(-1877.82f, -440.649f, 45.05f, 0);
			}
			else
			{
				*uParam1 = func_149(-915.6f, 6139.2f, 5.5f, 0);
			}
			if ((unk_0x61D8FEAF64881CDA(Global_97173.f_16795[21 /*6*/], 3) || unk_0x61D8FEAF64881CDA(Global_97173.f_16795[22 /*6*/], 3)) || unk_0x61D8FEAF64881CDA(Global_97173.f_16795[23 /*6*/], 3))
			{
				unk_0x01DF6D56C47E7482(*uParam1, 405);
			}
			else
			{
				unk_0x01DF6D56C47E7482(*uParam1, 66);
			}
			if (iParam0 == 21)
			{
				unk_0xEDB3DD98D55452E4(*uParam1, 42);
			}
			else
			{
				unk_0xEDB3DD98D55452E4(*uParam1, 43);
			}
			break;
		
		case 27:
			*uParam1 = func_149(-1104.93f, 291.25f, 64.3f, 0);
			unk_0x01DF6D56C47E7482(*uParam1, 66);
			unk_0xEDB3DD98D55452E4(*uParam1, 44);
			break;
		
		case 30:
			*uParam1 = func_149(-1104.93f, 291.25f, 64.3f, 0);
			unk_0x01DF6D56C47E7482(*uParam1, 385);
			unk_0xEDB3DD98D55452E4(*uParam1, 44);
			break;
		
		case 34:
			*uParam1 = func_149(-303.82f, 6211.29f, 31.05f, 0);
			unk_0x01DF6D56C47E7482(*uParam1, 386);
			unk_0xEDB3DD98D55452E4(*uParam1, 44);
			break;
		
		case 43:
			*uParam1 = func_149(-44.75f, -1288.67f, 28.21f, 0);
			unk_0x01DF6D56C47E7482(*uParam1, 149);
			unk_0xEDB3DD98D55452E4(*uParam1, 44);
			break;
		
		case 46:
			*uParam1 = func_149(-149.75f, 285.81f, 93.67f, 0);
			unk_0x01DF6D56C47E7482(*uParam1, 66);
			unk_0xEDB3DD98D55452E4(*uParam1, 43);
			break;
		
		case 47:
		case 48:
			if (iParam0 == 47)
			{
				*uParam1 = func_149(-70.71f, 301.43f, 106.79f, 0);
			}
			else
			{
				*uParam1 = func_149(-257.22f, 292.85f, 90.63f, 0);
			}
			unk_0x01DF6D56C47E7482(*uParam1, 389);
			unk_0xEDB3DD98D55452E4(*uParam1, 43);
			break;
	}
}

var func_149(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x7BFA7BEBF46363DE(Param0);
	unk_0x1D8833C0F155BFE7(uVar0, func_150(unk_0xD95428C8AA1DBBF2(), 1f, 1f));
	unk_0x43F7D508C655CBA3(uVar0, iParam3);
	return uVar0;
}

float func_150(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_151(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 9:
		case 11:
		case 12:
		case 13:
		case 18:
		case 19:
		case 21:
		case 23:
		case 27:
		case 30:
		case 34:
		case 43:
		case 46:
		case 47:
		case 48:
			return 1;
			break;
	}
	return 0;
}

int func_152(int iParam0, int iParam1)
{
	switch (iParam0->f_16)
	{
		case 0:
			if (*iParam0 == 12)
			{
				if (unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), 1826.631f, 4699.115f, 35.38089f, 1812.878f, 4710.457f, 42.05354f, 23.75f, 0, 1, 0))
				{
					if (func_181(iParam0->f_28[0]))
					{
						if (unk_0x8FE221761D524CFE(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), unk_0xBF1B13057E5119A4(iParam0->f_28[0], 1), 1) < 3f)
						{
							if (func_158(2))
							{
								if (func_156(iParam0->f_27))
								{
									func_155(iParam0->f_27, *iParam0);
									func_287("ARE_RC_TRIGGER_CONDITIONS_MET: RC_TRIG_CHAR - Used special case Eps 4 trigger.");
									return 1;
								}
							}
						}
					}
					else
					{
						return 0;
					}
				}
				else if (func_181(iParam0->f_28[0]))
				{
					if (func_154(iParam0))
					{
						if (func_158(2))
						{
							if (func_156(iParam0->f_27))
							{
								func_155(iParam0->f_27, *iParam0);
								return 1;
							}
						}
					}
				}
				else
				{
					return 0;
				}
			}
			else if (*iParam0 == 21)
			{
				if ((((!unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), -1895.788f, -434.0192f, 40.30126f, -1883.038f, -444.0811f, 50.24509f, 8.5f, 0, 1, 0) && !unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), -1883.576f, -443.6434f, 36.40581f, -1874.826f, -448.0797f, 49.15162f, 8.5f, 0, 1, 0)) && !unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), -1876.343f, -446.2214f, 35.64637f, -1866.952f, -456.5601f, 49.0442f, 8.5f, 0, 1, 0)) && !unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), -1882.997f, -438.9922f, 44.17246f, -1874.079f, -443.342f, 48.69179f, 0.75f, 0, 1, 0)) || unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), -1878.822f, -441.7655f, 44.9175f, -1877.941f, -439.9522f, 47.28982f, 1.25f, 0, 1, 0))
				{
					if (func_181(iParam0->f_28[0]))
					{
						if (func_154(iParam0))
						{
							if (func_158(2))
							{
								if (func_156(iParam0->f_27))
								{
									func_155(iParam0->f_27, *iParam0);
									return 1;
								}
							}
						}
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
			else if (*iParam0 == 22)
			{
				if (!unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), 837.0731f, 1261.086f, 366.1592f, 780.8383f, 1260.829f, 351.405f, 17.75f, 0, 1, 0))
				{
					if (func_181(iParam0->f_28[0]))
					{
						if (func_154(iParam0))
						{
							if (func_158(2))
							{
								if (func_156(iParam0->f_27))
								{
									func_155(iParam0->f_27, *iParam0);
									return 1;
								}
							}
						}
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
			else if (func_181(iParam0->f_28[0]))
			{
				if (func_154(iParam0))
				{
					if (func_158(2))
					{
						if (func_156(iParam0->f_27))
						{
							func_155(iParam0->f_27, *iParam0);
							return 1;
						}
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			if (func_181(iParam0->f_35[0]))
			{
				if (unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), iParam0->f_35[0], 0))
				{
					if (func_158(3))
					{
						func_155(iParam0->f_27, *iParam0);
						return 1;
					}
				}
				else if (iParam1 == 1)
				{
					func_153();
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 1:
			if (unk_0xFD68187442384158(iParam0->f_35[0]))
			{
				if (!unk_0xE5D56342B0FF1D0D(iParam0->f_35[0]))
				{
					if (unk_0x8FE221761D524CFE(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), unk_0xBF1B13057E5119A4(iParam0->f_35[0], 1), 1) < iParam0->f_15)
					{
						if (func_158(2))
						{
							if (func_156(iParam0->f_27))
							{
								func_155(iParam0->f_27, *iParam0);
								return 1;
							}
						}
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 3:
			if (unk_0x8FE221761D524CFE(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), iParam0->f_17[0 /*3*/], 1) < iParam0->f_15)
			{
				if (func_158(2))
				{
					if (func_156(iParam0->f_27))
					{
						func_155(iParam0->f_27, *iParam0);
						return 1;
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 4:
			if (unk_0x594EB70937EC1486(unk_0x507DA4994C3D8EBD(), iParam0->f_17[0 /*3*/], iParam0->f_17[1 /*3*/], 0, 1, 0))
			{
				if (func_158(2))
				{
					if (func_156(iParam0->f_27))
					{
						func_155(iParam0->f_27, *iParam0);
						return 1;
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 5:
			if (*iParam0 == 6)
			{
				if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
				{
					if (func_181(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0)))
					{
						if (unk_0x40923C25A763E8E8(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0), joaat("towtruck")) || unk_0x40923C25A763E8E8(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0), joaat("towtruck2")))
						{
							if (unk_0x7FA9B9EC1CAEE692(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0), iParam0->f_35[0]))
							{
								if (func_158(3))
								{
									return 1;
								}
							}
						}
						else if ((unk_0x40923C25A763E8E8(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0), joaat("cargobob")) || unk_0x40923C25A763E8E8(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0), joaat("cargobob2"))) || unk_0x40923C25A763E8E8(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0), joaat("cargobob3")))
						{
							if (unk_0x29753C26F80C767B(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0)) && unk_0xA89E36906A28895D(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0), iParam0->f_35[0]))
							{
								if (func_158(3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
			else if (*iParam0 == 10)
			{
				if (unk_0x6D643C3F9C6475A0(unk_0x507DA4994C3D8EBD()) >= 2f)
				{
					if (unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), 245.8885f, 371.9034f, 103.9884f, 241.5898f, 359.6458f, 107.3461f, 1.25f, 0, 1, 0))
					{
						if (func_158(2))
						{
							if (func_156(iParam0->f_27))
							{
								func_155(iParam0->f_27, *iParam0);
								func_287("RC5_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - Eps 2 special case trigger used");
								return 1;
							}
						}
					}
				}
			}
			else if (*iParam0 == 46)
			{
				if (unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), -164.2046f, 277.4866f, 91.55322f, -153.6f, 277.4061f, 97.33813f, 10f, 0, 1, 0))
				{
					return 0;
				}
			}
			else if (*iParam0 == 31)
			{
				if (unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), 2728.948f, 4143.44f, 42.29295f, 2722.213f, 4144.521f, 45.43182f, 10f, 0, 1, 0))
				{
					if (func_158(2))
					{
						if (func_156(1))
						{
							func_155(1, *iParam0);
							func_287("RC_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - RC_MAUDE_1 special case vehicle launch area");
							return 1;
						}
					}
				}
			}
			else if (*iParam0 == 39)
			{
				if (unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), -992.4995f, 358.7455f, 96.3735f, -1021.94f, 361.8888f, 65.36148f, 30f, 0, 1, 0))
				{
					if (!unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), -983.5426f, 369.1104f, 68.46017f, -1028.566f, 395.4613f, 94.57245f, 15f, 0, 1, 0))
					{
						if (!unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), -983.875f, 346.7556f, 68.02096f, -1021.451f, 336.3458f, 93.18714f, 14.5f, 0, 1, 0))
						{
							if (func_158(2))
							{
								if (func_156(iParam0->f_27))
								{
									func_155(iParam0->f_27, *iParam0);
									func_287("RC_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - RC_NIGEL_1B special case vehicle launch area");
									return 1;
								}
							}
						}
					}
				}
			}
			if (unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), iParam0->f_17[0 /*3*/], iParam0->f_17[1 /*3*/], iParam0->f_24, 0, 1, 0))
			{
				if (*iParam0 == 45)
				{
					if (unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), 2338.697f, 2597.037f, 45.39052f, 2324.003f, 2597.185f, 47.74961f, 8.5f, 0, 1, 0))
					{
						return 0;
					}
				}
				if (func_158(2))
				{
					if (func_156(iParam0->f_27))
					{
						func_155(iParam0->f_27, *iParam0);
						return 1;
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 6:
			break;
	}
	return 0;
}

void func_153()
{
	func_27(&(Global_91172.f_2167), &Global_91172, 0, 1, 1, 0);
}

int func_154(var uParam0)
{
	float fVar0;
	
	if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0) && uParam0->f_27)
	{
		if (*uParam0 == 27 || *uParam0 == 30)
		{
			fVar0 = 1f;
		}
		else
		{
			fVar0 = 5f;
		}
		if (unk_0x8FE221761D524CFE(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), unk_0xBF1B13057E5119A4(uParam0->f_28[0], 1), 1) < (uParam0->f_15 + fVar0))
		{
			return 1;
		}
	}
	else if (unk_0x8FE221761D524CFE(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), unk_0xBF1B13057E5119A4(uParam0->f_28[0], 1), 1) < uParam0->f_15)
	{
		return 1;
	}
	return 0;
}

void func_155(int iParam0, int iParam1)
{
	if (iParam0 == 1)
	{
		if (!func_113(iParam1))
		{
			return;
		}
		if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
		{
			func_287("RC_STOP_PLAYER_VEHICLE_CHECK: Stopping player's vehicle.");
			if (unk_0xD7475AE87197B442(unk_0x507DA4994C3D8EBD()) || unk_0x2910F2A2D77BD576(unk_0x507DA4994C3D8EBD()))
			{
				func_287("RC_STOP_PLAYER_VEHICLE_CHECK: Turning off engine for plane or helicopter.");
				unk_0xE0E038A4E5C7727B(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0), 0, 1);
			}
			func_129();
		}
	}
}

int func_156(bool bParam0)
{
	int iVar0;
	
	if (unk_0x52A84D9C3A400EA8(unk_0x4D82797EF5035A9F()))
	{
		if (unk_0x73B082A8BFC119BA(unk_0x507DA4994C3D8EBD()))
		{
			return 1;
		}
		else if (bParam0)
		{
			if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
			{
				iVar0 = unk_0xF6EA6ED8FFB5B505();
				if (func_157(iVar0))
				{
					if (unk_0xD7475AE87197B442(unk_0x507DA4994C3D8EBD()) || unk_0x2910F2A2D77BD576(unk_0x507DA4994C3D8EBD()))
					{
						if ((!unk_0x5800F5EE75107519(iVar0) && !unk_0xF97DDB74A78F6500(iVar0)) && unk_0x11F6A4A45943670E(iVar0) < 1f)
						{
							return 1;
						}
					}
					else if (!unk_0xF97DDB74A78F6500(iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_157(int iParam0)
{
	if (func_181(uParam0))
	{
		if (unk_0xCA8794CE207FC6D5(uParam0, 0))
		{
			if (!unk_0xEF57771119A32DB2(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_158(int iParam0)
{
	int iVar0;
	
	if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
	{
		if (unk_0xFD68187442384158(unk_0x507DA4994C3D8EBD()))
		{
			if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
			{
				iVar0 = func_89();
				if (!func_36(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x78E049AAE10556D5(unk_0xAF65E5A58BE87D95()) || unk_0xF97DDB74A78F6500(unk_0x507DA4994C3D8EBD())) || unk_0xADFF42956B1E6E0F(unk_0x507DA4994C3D8EBD())) || unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD())) || unk_0xC9A89245EC1B2DDF(unk_0x507DA4994C3D8EBD())) || unk_0xAC33D6DDFB2C92EC(unk_0xAF65E5A58BE87D95(), 1)) || unk_0x3AA78AB1897C2B94(unk_0xAF65E5A58BE87D95())) || unk_0xC20B334EFA64243F(unk_0x507DA4994C3D8EBD(), 0)) || func_166()) || Global_96220) || Global_24446) || func_165()) || func_164(8, -1)) || func_77()) || func_163()) || func_162()) || func_161()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xAC33D6DDFB2C92EC(unk_0xAF65E5A58BE87D95(), 1) || func_166()) || Global_24446) || func_165()) || func_164(8, -1)) || func_162()) || func_77()) || func_163()) || func_161()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x78E049AAE10556D5(unk_0xAF65E5A58BE87D95()) || unk_0xF97DDB74A78F6500(unk_0x507DA4994C3D8EBD())) || unk_0xADFF42956B1E6E0F(unk_0x507DA4994C3D8EBD())) || unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD())) || unk_0xC9A89245EC1B2DDF(unk_0x507DA4994C3D8EBD())) || unk_0xAC33D6DDFB2C92EC(unk_0xAF65E5A58BE87D95(), 1)) || unk_0x3AA78AB1897C2B94(unk_0xAF65E5A58BE87D95())) || unk_0xC20B334EFA64243F(unk_0x507DA4994C3D8EBD(), 0)) || func_166()) || Global_96220) || Global_24446) || func_165()) || func_164(8, -1)) || func_162()) || func_77()) || func_163()) || func_161()) || Global_97173.f_5944.f_889[iVar0] == 5) || Global_35456 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD()) || unk_0xC9A89245EC1B2DDF(unk_0x507DA4994C3D8EBD())) || unk_0xAC33D6DDFB2C92EC(unk_0xAF65E5A58BE87D95(), 1)) || unk_0xC20B334EFA64243F(unk_0x507DA4994C3D8EBD(), 0)) || func_166()) || Global_96220) || Global_24446) || func_165()) || func_164(8, -1)) || func_77()) || func_163()) || func_161()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_166() || unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) > 0) || func_164(8, -1)) || func_161()) || func_160()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_164(8, -1) || func_77()) || func_163()) || func_160()) || func_159())
						{
							return 0;
						}
						if ((unk_0xA4ADA92842355D33() && unk_0x4B08838D3C4A40AA() != 3) && unk_0x34F66A7928F4DB93() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0xFD68187442384158(unk_0x507DA4994C3D8EBD()))
						{
							if ((((((((((((((unk_0xC20B334EFA64243F(unk_0x507DA4994C3D8EBD(), 0) || unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) > 0) || unk_0xF97DDB74A78F6500(unk_0x507DA4994C3D8EBD())) || unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD())) || unk_0xC9A89245EC1B2DDF(unk_0x507DA4994C3D8EBD())) || unk_0xAC33D6DDFB2C92EC(unk_0xAF65E5A58BE87D95(), 1)) || unk_0x3AA78AB1897C2B94(unk_0xAF65E5A58BE87D95())) || func_166()) || Global_24446) || func_165()) || func_164(8, -1)) || func_163()) || func_162()) || func_161()) || Global_97173.f_5944.f_889[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xC20B334EFA64243F(unk_0x507DA4994C3D8EBD(), 0) || !unk_0xA54B09EB6B49FA94(unk_0xAF65E5A58BE87D95())) || !unk_0x78E049AAE10556D5(unk_0xAF65E5A58BE87D95())) || !unk_0x8D4100BAA46EE198()) || unk_0xF97DDB74A78F6500(unk_0x507DA4994C3D8EBD())) || unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD())) || unk_0xC9A89245EC1B2DDF(unk_0x507DA4994C3D8EBD())) || unk_0xAC33D6DDFB2C92EC(unk_0xAF65E5A58BE87D95(), 1)) || func_166()) || func_163()) || Global_96220) || Global_24446) || func_165()) || Global_35953) || func_164(8, -1)) || func_162()) || func_160()) || func_161()) || Global_97173.f_5944.f_889[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xC20B334EFA64243F(unk_0x507DA4994C3D8EBD(), 0) || !unk_0xA54B09EB6B49FA94(unk_0xAF65E5A58BE87D95())) || !unk_0x78E049AAE10556D5(unk_0xAF65E5A58BE87D95())) || !unk_0x8D4100BAA46EE198()) || unk_0xF0428CCE35084401(unk_0xAF65E5A58BE87D95(), 0)) || unk_0xF97DDB74A78F6500(unk_0x507DA4994C3D8EBD())) || unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 1)) || unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD())) || unk_0xC9A89245EC1B2DDF(unk_0x507DA4994C3D8EBD())) || unk_0x43C1CCFF3C61F7D7(unk_0x507DA4994C3D8EBD())) || unk_0xAC33D6DDFB2C92EC(unk_0xAF65E5A58BE87D95(), 1)) || unk_0x3AA78AB1897C2B94(unk_0xAF65E5A58BE87D95())) || func_166()) || Global_96220) || Global_24446) || func_165()) || func_164(8, -1)) || func_162()) || func_160()) || func_77()) || func_163()) || func_161())
						{
							return 0;
						}
						break;
				}
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
	else
	{
		return 0;
	}
	return 1;
}

var func_159()
{
	return Global_89823.f_1;
}

int func_160()
{
	if (Global_87111 != -1)
	{
		return unk_0x61D8FEAF64881CDA(Global_80977[Global_87111 /*34*/].f_15, 13);
	}
	return 0;
}

int func_161()
{
	if (unk_0x25531002BCF0D968(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_162()
{
	if (Global_68327)
	{
		return 1;
	}
	else if (Global_54566 && !Global_54572)
	{
		return 1;
	}
	return 0;
}

bool func_163()
{
	return Global_89836.f_291 > 0;
}

bool func_164(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327591.f_203[iParam1];
			}
			break;
	}
	return unk_0x61D8FEAF64881CDA(Global_1327591.f_949, iParam0);
}

var func_165()
{
	return Global_1315898;
}

int func_166()
{
	if (!unk_0xD95428C8AA1DBBF2())
	{
		return Global_87667.f_44 == 1;
	}
	return 0;
}

int func_167(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 6:
			return 1;
			break;
	}
	return 0;
}

void func_168(var uParam0, struct<3> Param1, char[4] cParam4, char* sParam5)
{
	switch (*uParam0)
	{
		case 0:
			if ((unk_0xF976C624234A4AA8() - iLocal_270) > 5000)
			{
				*uParam0 = 1;
			}
			break;
		
		case 1:
			if (func_177(unk_0x507DA4994C3D8EBD(), Param1, 1) <= 20f)
			{
				if (func_169(&uLocal_105, cParam4, sParam5, 8, 0, 0, 0))
				{
					*uParam0 = 2;
				}
			}
			break;
		
		case 2:
			if (!func_128())
			{
				iLocal_270 = unk_0xF976C624234A4AA8();
				*uParam0 = 0;
			}
			else if (func_177(unk_0x507DA4994C3D8EBD(), Param1, 1) >= 25f)
			{
				func_126();
				*uParam0 = 0;
			}
			break;
	}
}

bool func_169(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_176(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15699 = 0;
	Global_15701 = 0;
	Global_15706 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 0;
	Global_2621441 = 0;
	return func_170(sParam2, iParam3, 0);
}

int func_170(char* sParam0, int iParam1, bool bParam2)
{
	Global_15693 = 0;
	if (Global_15692 == 0 || Global_15694 == 2)
	{
		if (Global_15692 != 0)
		{
			if (iParam1 > Global_15694)
			{
				if (Global_15699 == 0)
				{
					unk_0xD858EC6FECDB4B3F(0);
					Global_14393.f_1 = 3;
					Global_15692 = 0;
					Global_15693 = 1;
					Global_15745 = 0;
					Global_15688 = 0;
					Global_15689 = 0;
					Global_15703 = 0;
					Global_15702 = 0;
					Global_14392 = 0;
				}
				else
				{
					func_127();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xF611D1BB58990143())
		{
			return 0;
		}
		if (func_164(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_175();
		Global_14981 = { Global_15146 };
		Global_15698 = Global_15699;
		Global_15705 = Global_15706;
		Global_2621442 = Global_2621441;
		Global_15707 = { Global_15723 };
		Global_15700 = Global_15701;
		Global_16682 = Global_16683;
		Global_16690 = { Global_16696 };
		Global_16684 = Global_16685;
		Global_16686 = Global_16687;
		Global_16688 = Global_16689;
		Global_15311.f_370 = Global_16681;
		Global_15311.f_368 = Global_16679;
		Global_15311.f_369 = Global_16680;
		Global_15688 = Global_15689;
		if (Global_15698)
		{
			unk_0xCD27BF29FB9012E2(&Global_2263, 20);
			unk_0xCD27BF29FB9012E2(&Global_2264, 17);
			unk_0xCD27BF29FB9012E2(&Global_2265, 0);
			if (bParam2)
			{
				func_174();
				if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14393.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14359 == 1)
			{
				return 0;
			}
			if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
			{
				if (unk_0x6A5400407F3E1292(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
				if (func_173())
				{
					return 0;
				}
				if (unk_0x485BBA43A75711BE(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
				if (unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
				if (unk_0xB42AA529845BA2A3(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
				if (unk_0xCB79AB67F7DF0E8F(unk_0x507DA4994C3D8EBD(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68067)
				{
					if (unk_0x26FE3F0A2045AA7E(unk_0x507DA4994C3D8EBD()))
					{
						return 0;
					}
					if (unk_0x3AA78AB1897C2B94(unk_0xAF65E5A58BE87D95()))
					{
						return 0;
					}
					if (unk_0xA43F7819FA056045(unk_0x507DA4994C3D8EBD()))
					{
						return 0;
					}
					if (unk_0x5636DF02874259EA(unk_0xAF65E5A58BE87D95()))
					{
						return 0;
					}
				}
			}
			if (func_123())
			{
				return 0;
			}
			else
			{
				switch (Global_14393.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (unk_0x61D8FEAF64881CDA(Global_2263, 9))
				{
					return 0;
				}
			}
			func_172();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_171();
		return 1;
	}
	if (Global_15692 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15694 || iParam1 == Global_15694)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_127();
	}
	return 0;
}

void func_171()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14560[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xD858EC6FECDB4B3F(0);
	Global_15692 = 1;
}

void func_172()
{
	Global_15745 = Global_15744;
	Global_15739 = Global_15740;
	Global_15786 = { Global_15774 };
	Global_15792 = { Global_15780 };
	Global_15747 = Global_15746;
	Global_15816 = { Global_15798 };
	Global_15822 = { Global_15804 };
	Global_15828 = { Global_15810 };
	Global_15834 = { Global_15840 };
	Global_1578 = Global_1579;
	Global_1580 = Global_1581;
	Global_15703 = Global_15704;
	Global_15705 = Global_15706;
	Global_15707 = { Global_15723 };
	Global_15696 = Global_15697;
	Global_16708 = 0;
	Global_15741 = 0;
	Global_15742 = 0;
	unk_0xCD27BF29FB9012E2(&Global_2264, 16);
}

int func_173()
{
	int iVar0;
	int iVar1;
	
	if (Global_68067)
	{
		iVar0 = 0;
		unk_0xAE0CD3052D6ED1ED(unk_0x507DA4994C3D8EBD(), &iVar1, 1);
		if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xC0C709777CCE070F() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
	{
		if (unk_0xA7C37587D6D77CA4(unk_0x507DA4994C3D8EBD(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_174()
{
	if (func_55(14))
	{
		if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
		{
			if (unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()) == Global_97173.f_29699[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()) == Global_97173.f_29699[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()) == Global_97173.f_29699[2 /*29*/])
			{
				Global_14393 = 2;
			}
			else
			{
				Global_14393 = 0;
			}
		}
	}
	else
	{
		Global_14393 = func_89();
		if (Global_14393 == 145)
		{
			Global_14393 = 3;
		}
		if (Global_68067)
		{
			Global_14393 = 3;
		}
		if (Global_14393 > 3)
		{
			Global_14393 = 3;
		}
	}
}

void func_175()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_14981[iVar0 /*10*/] = 0;
		StringCopy(&(Global_14981[iVar0 /*10*/].f_1), "", 24);
		Global_14981[iVar0 /*10*/].f_7 = 0;
		Global_14981[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_14981.f_161 = -99;
	Global_14981.f_162 = { 0f, 0f, 0f };
}

void func_176(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15146 = { *uParam0 };
	Global_1579 = iParam1;
	StringCopy(&Global_15762, sParam2, 24);
	Global_16681 = iParam5;
	if (iParam3 == 0)
	{
		Global_16679 = 1;
		Global_16677 = 0;
	}
	else
	{
		Global_16679 = 0;
		Global_16677 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
	}
}

float func_177(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0xE5D56342B0FF1D0D(iParam0))
	{
		Var0 = { unk_0xBF1B13057E5119A4(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xBF1B13057E5119A4(iParam0, 0) };
	}
	return unk_0x8FE221761D524CFE(Var0, Param1, iParam4);
}

void func_178(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, bool bParam9, int iParam10)
{
	var uVar0;
	int iVar1;
	
	iVar1 = 32768;
	if (!func_181(iParam0->f_28[iParam10]))
	{
		return;
	}
	if (bParam9)
	{
		iVar1 |= 512;
	}
	uParam1.f_7 = unk_0x4D3E68F73B727E49(0, uParam1.f_6);
	unk_0xB5DC017AFD430D1B(&uVar0);
	unk_0xEC0A546609840086(0, iParam0->f_48, uParam1[uParam1.f_7], 4f, -4f, -1, 0 | iVar1, 0, 0, 0, 0);
	unk_0xEC0A546609840086(0, iParam0->f_48, iParam0->f_48.f_1, 8f, -8f, -1, 1 | iVar1, 0, 0, 0, 0);
	unk_0x6EE8A5CF9AC75F12(uVar0);
	unk_0x8229311A391A4EC6(iParam0->f_28[iParam10], uVar0);
	unk_0x9F77DFFC61FCB68C(&uVar0);
}

int func_179(int iParam0, struct<3> Param1, char[4] cParam4, char* sParam5, int iParam6, char* sParam7, int iParam8, float fParam9)
{
	var uVar0;
	
	if ((((func_181(unk_0x507DA4994C3D8EBD()) && func_181(iParam0->f_28[0])) && !func_128()) && (unk_0xF976C624234A4AA8() - iParam0->f_60) > iParam8) && func_177(unk_0x507DA4994C3D8EBD(), Param1, 1) < fParam9)
	{
		uVar0 = 16;
		func_232(&uVar0, iParam6, iParam0->f_28[0], sParam7, 0, 1);
		func_180(&uVar0, cParam4, sParam5, 7, 0, 0);
		iParam0->f_60 = unk_0xF976C624234A4AA8();
		return 1;
	}
	return 0;
}

void func_180(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	func_176(uParam0, 145, sParam1, iParam4, iParam5, 0);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	unk_0x3DBE2A7AF9E71C82(&Global_14558, 0);
	Global_15695 = iParam3;
	StringCopy(&Global_15682, sParam2, 24);
}

int func_181(int iParam0)
{
	if (unk_0xFD68187442384158(iParam0))
	{
		if (!unk_0xE5D56342B0FF1D0D(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_182(int iParam0, char* sParam1, struct<3> Param2)
{
	if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
	{
		if (!unk_0x8FA72E132AAFA62F(sParam1))
		{
			if (Global_34909 == 17)
			{
				if (*iParam0 != -1)
				{
					func_187(iParam0);
				}
			}
			else if (func_186())
			{
				if (*iParam0 != -1)
				{
					func_187(iParam0);
				}
			}
			else if (*iParam0 == -1)
			{
				if (func_177(unk_0x507DA4994C3D8EBD(), Param2, 1) <= 100f)
				{
					func_185(iParam0, 1);
				}
			}
			else
			{
				switch (func_184(*iParam0))
				{
					case 1:
						if (unk_0xA858564DC37EED5E(sParam1, "JOSH_1_INT_CONCAT"))
						{
							unk_0xC25755924A02755B(sParam1, 14, 8);
						}
						else
						{
							unk_0xFF5665416E4C22D1(sParam1, 8);
						}
						unk_0x82ED31759BCD6119(2);
						func_183(*iParam0, 1);
						break;
					
					case 2:
						unk_0x1C47B5C2A22D6BEA(0);
						unk_0xCB0201F0BA3841A2();
						unk_0x82ED31759BCD6119(0);
						func_183(*iParam0, 0);
						break;
				}
				if (func_177(unk_0x507DA4994C3D8EBD(), Param2, 1) > 120f)
				{
					func_187(iParam0);
				}
			}
		}
	}
}

void func_183(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (Global_68063 == iParam0)
		{
			Global_68064 = iParam0;
		}
	}
	else if (Global_68064 == iParam0)
	{
		Global_68064 = -1;
	}
}

int func_184(int iParam0)
{
	if (Global_68063 == iParam0)
	{
		if (Global_68064 == -1)
		{
			if (Global_68062 < unk_0xE3B6F359045B979E())
			{
				return 1;
			}
		}
	}
	else if (Global_68064 == iParam0)
	{
		return 2;
	}
	return 0;
}

void func_185(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	
	if (Global_68060 < 5)
	{
		Global_68049[Global_68060 /*2*/] = 0;
		Global_68049[Global_68060 /*2*/].f_1 = iParam1;
		bVar0 = false;
		while (!bVar0)
		{
			bVar0 = true;
			iVar1 = 0;
			while (iVar1 < Global_68060)
			{
				if (Global_68049[iVar1 /*2*/] == Global_68049[Global_68060 /*2*/])
				{
					Global_68049[Global_68060 /*2*/]++;
					bVar0 = false;
				}
				iVar1++;
			}
		}
		*iParam0 = Global_68049[Global_68060 /*2*/];
		Global_68060++;
		Global_68061 = 1;
	}
	else
	{
		*iParam0 = -1;
	}
}

bool func_186()
{
	return Global_87498;
}

void func_187(int iParam0)
{
	unk_0x1C47B5C2A22D6BEA(0);
	unk_0xCB0201F0BA3841A2();
	func_188(iParam0);
}

void func_188(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (*iParam0 == -1)
	{
		return;
	}
	if (Global_68064 == *iParam0)
	{
		func_183(*iParam0, 0);
	}
	if (Global_68063 == *iParam0)
	{
		Global_68063 = -1;
	}
	bVar0 = false;
	iVar1 = 0;
	while (!bVar0 && iVar1 < Global_68060)
	{
		if (Global_68049[iVar1 /*2*/] == *iParam0)
		{
			bVar0 = true;
		}
		else
		{
			iVar1++;
		}
	}
	if (!bVar0)
	{
		return;
	}
	iVar2 = iVar1;
	while (iVar2 <= (Global_68060 - 2))
	{
		Global_68049[iVar2 /*2*/] = Global_68049[iVar2 + 1 /*2*/];
		Global_68049[iVar2 /*2*/].f_1 = Global_68049[iVar2 + 1 /*2*/].f_1;
		iVar2++;
	}
	Global_68049[(Global_68060 - 1) /*2*/] = -1;
	Global_68049[(Global_68060 - 1) /*2*/].f_1 = 3;
	Global_68060 = (Global_68060 - 1);
	Global_68061 = 1;
	Global_68062 = unk_0xE3B6F359045B979E();
	*iParam0 = -1;
}

void func_189(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_145();
	}
	if (iParam0 == -1)
	{
		return;
	}
	Global_96260[iParam0 /*10*/].f_1 = 1;
}

int func_190(int iParam0, bool bParam1)
{
	struct<27> Var0;
	
	if (Global_68067)
	{
		func_287("IS_RC_FINE_AND_IN_RANGE(): The game is running Multiplayer [TERMINATING]");
		return 0;
	}
	func_94(*iParam0, &Var0);
	if ((func_227(*iParam0) || func_225(*iParam0)) || Global_68312 == 1)
	{
		return 1;
	}
	if (!unk_0x3BCCCFB165E15A65())
	{
		func_287("IS_RC_FINE_AND_IN_RANGE(): Player out of range [TERMINATING]");
		return 0;
	}
	if (func_221(*iParam0))
	{
		if (*iParam0 == 19)
		{
			func_220(iParam0->f_28[0]);
		}
		func_287("IS_RC_FINE_AND_IN_RANGE(): Script denied by RC Controller [TERMINATING]");
		return 0;
	}
	if (iParam0->f_25 == 1)
	{
		if (!func_200(iParam0, 1, 0))
		{
			return 0;
		}
	}
	else if (iParam0->f_16 == 0)
	{
		if (!func_200(iParam0, 0, 0))
		{
			return 0;
		}
	}
	if (((((*iParam0 == 16 || *iParam0 == 9) || *iParam0 == 18) || *iParam0 == 22) || *iParam0 == 32) || *iParam0 == 51)
	{
		if (!func_198(iParam0, 1, 1))
		{
			if (*iParam0 == 16)
			{
				func_197(iParam0);
			}
			else
			{
				func_195(iParam0);
			}
			return 0;
		}
	}
	else if (*iParam0 == 24)
	{
		if (!func_198(iParam0, 0, 1))
		{
			func_195(iParam0);
			return 0;
		}
	}
	else if (*iParam0 == 6)
	{
		if (!func_198(iParam0, 0, 1))
		{
			return 0;
		}
	}
	else if (iParam0->f_26 == 1)
	{
		if (!func_198(iParam0, 1, 0))
		{
			func_195(iParam0);
			return 0;
		}
	}
	else if (iParam0->f_16 == 2 || iParam0->f_16 == 1)
	{
		if (!func_198(iParam0, 0, 0))
		{
			func_195(iParam0);
			return 0;
		}
	}
	if (iParam0->f_16 == 2 || iParam0->f_16 == 1)
	{
		if (func_181(iParam0->f_35[0]))
		{
			if (!unk_0x594EB70937EC1486(iParam0->f_35[0], Var0.f_6, 8f, 8f, 8f, 0, 1, 0))
			{
				return 0;
			}
		}
	}
	if (*iParam0 == 10)
	{
		if (unk_0x6588804F7BCB1101(-1, iParam0->f_17[0 /*3*/], 8f))
		{
			func_287("IS_RC_FINE_AND_IN_RANGE(): Explosion near mission trigger [TERMINATING]");
			return 0;
		}
	}
	if (Var0.f_4 != 17)
	{
		if (!unk_0x61D8FEAF64881CDA(Var0.f_26, func_89()))
		{
			func_287("IS_RC_FINE_AND_IN_RANGE(): No longer a valid player character to launch mission");
			return 0;
		}
	}
	if (func_194(&(iParam0->f_48)) && bParam1)
	{
		func_191(iParam0->f_28[0], &(iParam0->f_48), *iParam0);
	}
	return 1;
}

void func_191(int iParam0, var uParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (func_181(iParam0))
	{
		switch (uParam1->f_3)
		{
			case 1:
				if (func_194(uParam1))
				{
					if (unk_0xCE40391AB65FE305(*uParam1))
					{
						unk_0xCEBD1B99CF343672(iParam0);
						if (iParam2 != 21)
						{
							if (func_66(uParam1->f_5, 0f, 0f, 0f))
							{
								unk_0xEC0A546609840086(iParam0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
							}
							else
							{
								unk_0xB5DC017AFD430D1B(&uVar0);
								if (func_193(uParam1))
								{
									unk_0xCC9E4F7F91DCEEA8(0, *uParam1, uParam1->f_2, uParam1->f_5, uParam1->f_8, 1000f, -8f, -1, 262152, 0, 2, 0);
								}
								else
								{
									unk_0xCC9E4F7F91DCEEA8(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 1000f, -8f, -1, 262152, 0, 2, 0);
								}
								unk_0xCC9E4F7F91DCEEA8(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 0);
								unk_0x6EE8A5CF9AC75F12(uVar0);
								unk_0x8229311A391A4EC6(iParam0, uVar0);
								unk_0x9F77DFFC61FCB68C(&uVar0);
							}
						}
						else
						{
							unk_0xCC9E4F7F91DCEEA8(iParam0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 3);
						}
						uParam1->f_3 = 2;
					}
					else
					{
						uParam1->f_3 = 0;
					}
				}
				else
				{
					uParam1->f_3 = 0;
				}
				break;
			
			case 2:
				if (!func_193(uParam1) || !unk_0x22605DE2E6933CF2(iParam0, *uParam1, uParam1->f_2, 3))
				{
					if (func_192(iParam2) && !unk_0x849DBD2D635C99D5(iParam0, unk_0x507DA4994C3D8EBD(), 25f))
					{
						unk_0xDE75E9DE5B6221E1(iParam0, unk_0x507DA4994C3D8EBD(), 0);
						uParam1->f_3 = 5;
					}
					else if ((func_193(uParam1) && uParam1->f_4 == 0) && unk_0x8FE221761D524CFE(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), unk_0xBF1B13057E5119A4(iParam0, 1), 1) < 20f)
					{
						uParam1->f_3 = 3;
					}
				}
				break;
			
			case 3:
				unk_0xB5DC017AFD430D1B(&uVar1);
				if (func_66(uParam1->f_5, 0f, 0f, 0f))
				{
					unk_0xEC0A546609840086(0, *uParam1, uParam1->f_2, 4f, -4f, -1, 262144, 0, 0, 0, 0);
					unk_0xEC0A546609840086(0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
				}
				else
				{
					unk_0xCC9E4F7F91DCEEA8(0, *uParam1, uParam1->f_2, uParam1->f_5, uParam1->f_8, 4f, -4f, -1, 262152, 0, 2, 0);
					unk_0xCC9E4F7F91DCEEA8(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 0);
				}
				unk_0x6EE8A5CF9AC75F12(uVar1);
				unk_0x8229311A391A4EC6(iParam0, uVar1);
				unk_0x9F77DFFC61FCB68C(&uVar1);
				uParam1->f_4 = 1;
				if (func_192(iParam2))
				{
					uParam1->f_3 = 2;
				}
				else
				{
					uParam1->f_3 = 0;
				}
				break;
			
			case 5:
				if (!func_192(iParam2) || unk_0x849DBD2D635C99D5(iParam0, unk_0x507DA4994C3D8EBD(), 10f))
				{
					if (func_66(uParam1->f_5, 0f, 0f, 0f))
					{
						unk_0xEC0A546609840086(iParam0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
					}
					else
					{
						unk_0xCC9E4F7F91DCEEA8(iParam0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 0);
					}
					uParam1->f_3 = 2;
				}
				break;
			}
	}
}

int func_192(int iParam0)
{
	if (iParam0 == 17 || iParam0 == 20)
	{
		return 1;
	}
	return 0;
}

int func_193(var uParam0)
{
	if (unk_0x8FA72E132AAFA62F(uParam0->f_2))
	{
		return 0;
	}
	return 1;
}

int func_194(var uParam0)
{
	if (unk_0x8FA72E132AAFA62F(*uParam0) || unk_0x8FA72E132AAFA62F(uParam0->f_1))
	{
		return 0;
	}
	return 1;
}

void func_195(var uParam0)
{
	int iVar0;
	var uVar1;
	
	if (*uParam0 == 52)
	{
		func_196(&(uParam0->f_41[1]));
		func_196(&(uParam0->f_41[2]));
	}
	if (func_181(unk_0x507DA4994C3D8EBD()))
	{
		iVar0 = 0;
		while (iVar0 <= (uParam0->f_28 - 1))
		{
			if (func_110(uParam0->f_28[iVar0]))
			{
				if (!unk_0x2A24448FF232F834(uParam0->f_28[iVar0], 0))
				{
					unk_0xCC8C6873CFB069A4(uParam0->f_28[iVar0], 1, 0);
					unk_0x479E7EEEBDEE245D(uParam0->f_28[0], 0);
				}
				unk_0xA1E4BA3B17C6D931(uParam0->f_28[iVar0], 1);
				if (*uParam0 == 34)
				{
					if (func_181(uParam0->f_41[0]))
					{
						unk_0xCC8C6873CFB069A4(uParam0->f_41[0], 1, 0);
						unk_0x479E7EEEBDEE245D(uParam0->f_41[0], 0);
					}
				}
				switch (*uParam0)
				{
					case 19:
						func_220(uParam0->f_28[iVar0]);
						break;
					
					case 8:
						unk_0x395C5D98343F0040("rcmcollect_paperleadinout@");
						while (!unk_0xCE40391AB65FE305("rcmcollect_paperleadinout@"))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						unk_0xB5DC017AFD430D1B(&uVar1);
						unk_0xEC0A546609840086(0, "rcmcollect_paperleadinout@", "meditate_getup", 8f, -8f, -1, 8, 0, 0, 0, 0);
						unk_0xA859D289EEB2D72A(0, unk_0x507DA4994C3D8EBD(), 10000f, -1, 0, 0);
						unk_0x6EE8A5CF9AC75F12(uVar1);
						unk_0x8229311A391A4EC6(uParam0->f_28[iVar0], uVar1);
						unk_0x9F77DFFC61FCB68C(&uVar1);
						break;
					
					case 0:
					case 1:
						unk_0x395C5D98343F0040("rcmabigail");
						while (!unk_0xCE40391AB65FE305("rcmabigail"))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						unk_0xB5DC017AFD430D1B(&uVar1);
						unk_0xEC0A546609840086(0, "rcmabigail", "breakout_base", 8f, -8f, -1, 8, 0, 0, 0, 0);
						unk_0xA859D289EEB2D72A(0, unk_0x507DA4994C3D8EBD(), 10000f, -1, 0, 0);
						unk_0x6EE8A5CF9AC75F12(uVar1);
						unk_0x8229311A391A4EC6(uParam0->f_28[iVar0], uVar1);
						unk_0x9F77DFFC61FCB68C(&uVar1);
						break;
					
					case 32:
						unk_0x395C5D98343F0040("rcmminute1");
						while (!unk_0xCE40391AB65FE305("rcmminute1"))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						unk_0xB5DC017AFD430D1B(&uVar1);
						if (iVar0 == 0)
						{
							unk_0xEC0A546609840086(0, "rcmminute1", "base_to_idle_joe", 8f, -8f, -1, 32776, 0, 0, 0, 0);
						}
						else
						{
							unk_0xEC0A546609840086(0, "rcmminute1", "base_to_idle_josef", 8f, -8f, -1, 32776, 0, 0, 0, 0);
						}
						unk_0xA859D289EEB2D72A(0, unk_0x507DA4994C3D8EBD(), 10000f, -1, 0, 0);
						unk_0x6EE8A5CF9AC75F12(uVar1);
						unk_0x8229311A391A4EC6(uParam0->f_28[iVar0], uVar1);
						unk_0x9F77DFFC61FCB68C(&uVar1);
						break;
					
					case 24:
						unk_0x395C5D98343F0040("special_ped@hao@base");
						while (!unk_0xCE40391AB65FE305("special_ped@hao@base"))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						unk_0xB5DC017AFD430D1B(&uVar1);
						unk_0xEC0A546609840086(0, "special_ped@hao@base", "hao_exit", 8f, -8f, -1, 520, 0, 0, 0, 0);
						unk_0xA859D289EEB2D72A(0, unk_0x507DA4994C3D8EBD(), 10000f, -1, 0, 0);
						unk_0x6EE8A5CF9AC75F12(uVar1);
						unk_0x8229311A391A4EC6(uParam0->f_28[iVar0], uVar1);
						unk_0x9F77DFFC61FCB68C(&uVar1);
						break;
					
					default:
						unk_0x1E61DAA6A0EEC652(uParam0->f_28[iVar0]);
						unk_0xA859D289EEB2D72A(uParam0->f_28[iVar0], unk_0x507DA4994C3D8EBD(), 10000f, -1, 0, 0);
						break;
					}
			}
			iVar0++;
		}
	}
}

void func_196(var uParam0)
{
	if (unk_0xFD68187442384158(*uParam0))
	{
		if (unk_0x42B70344077B22B9(*uParam0))
		{
			unk_0x5B97F41A7BE54877(*uParam0, 1, 1);
		}
		unk_0x4095FD029041DD48(uParam0);
	}
}

void func_197(var uParam0)
{
	int iVar0;
	
	if (func_181(unk_0x507DA4994C3D8EBD()))
	{
		iVar0 = 0;
		while (iVar0 <= (uParam0->f_28 - 1))
		{
			if (func_110(uParam0->f_28[iVar0]))
			{
				unk_0x3A1E687904400847(uParam0->f_28[iVar0], 1, 0);
				unk_0x2DC5B31EBB810396(uParam0->f_28[iVar0], 0);
				unk_0xA1E4BA3B17C6D931(uParam0->f_28[iVar0], 1);
				unk_0x247B2966C6C2A4C1(uParam0->f_28[iVar0], unk_0x507DA4994C3D8EBD(), 0, 16);
				unk_0xCA4DD92F1F2931F3(&(uParam0->f_28[iVar0]));
			}
			iVar0++;
		}
	}
}

int func_198(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	
	if (bParam1)
	{
		iVar1 = (uParam0->f_35 - 1);
	}
	else
	{
		iVar1 = 0;
	}
	if (func_110(unk_0x507DA4994C3D8EBD()))
	{
		iVar0 = 0;
		while (iVar0 <= iVar1)
		{
			if (unk_0xFD68187442384158(uParam0->f_35[iVar0]))
			{
				if (unk_0xE5D56342B0FF1D0D(uParam0->f_35[iVar0]))
				{
					func_287("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is dead [TERMINATING]");
					return 0;
				}
				if (!unk_0xCA8794CE207FC6D5(uParam0->f_35[iVar0], 0))
				{
					func_287("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is not driveable [TERMINATING]");
					return 0;
				}
				if (unk_0x6255AE2591FE7603(uParam0->f_35[iVar0], unk_0x507DA4994C3D8EBD(), 0))
				{
					func_287("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has been damaged by player [TERMINATING]");
					return 0;
				}
				if (unk_0x5D422B4764FA2ACA(uParam0->f_35[iVar0]) < 850)
				{
					func_287("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle health is less than 850 [TERMINATING]");
					return 0;
				}
				if (bParam2)
				{
					if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
					{
						if (unk_0x5D0DED2275F131C9(uParam0->f_35[iVar0], unk_0x507DA4994C3D8EBD()) && unk_0x11F6A4A45943670E(unk_0x507DA4994C3D8EBD()) > 5f)
						{
							func_287("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has collided with the player vehicle at speed [TERMINATING]");
							return 0;
						}
						uVar2 = unk_0xF6EA6ED8FFB5B505();
						if (func_157(uVar2))
						{
							if (unk_0x26EA758C2A691D06(uVar2) == joaat("towtruck") || unk_0x26EA758C2A691D06(iVar2) == joaat("towtruck2"))
							{
								if (func_157(uParam0->f_35[iVar0]))
								{
									if (unk_0x7FA9B9EC1CAEE692(iVar2, uParam0->f_35[iVar0]))
									{
										func_287("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is being towed by player [TERMINATING]");
										return 0;
									}
								}
							}
						}
					}
					else
					{
						iVar3 = unk_0xF6EA6ED8FFB5B505();
						if (func_157(iVar3))
						{
							if (unk_0x5D0DED2275F131C9(uParam0->f_35[iVar0], iVar3) && unk_0x11F6A4A45943670E(iVar3) > 6f)
							{
								func_287("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has collided with the player's last known vehicle at speed (player bailed out?) [TERMINATING]");
								return 0;
							}
						}
						if (*uParam0 == 16)
						{
							if (func_199(unk_0x507DA4994C3D8EBD(), uParam0->f_35[iVar0]))
							{
								func_287("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Player attempting to jack Epsilon vehicle [TERMINATING]");
								return 0;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_199(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x9F94F2CFDCA78C55(iParam0))
	{
		if (unk_0xCA8794CE207FC6D5(iParam1, 0))
		{
			iVar0 = unk_0x527D4CB4E8181391(iParam0);
			if (iVar0 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_200(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = (uParam0->f_28 - 1);
	}
	else
	{
		iVar1 = 0;
	}
	if (*uParam0 == 16)
	{
		iParam2 = 1;
	}
	if (*uParam0 == 30)
	{
		iParam2 = 1;
	}
	if (func_110(unk_0x507DA4994C3D8EBD()))
	{
		iVar0 = 0;
		while (iVar0 <= iVar1)
		{
			if (unk_0xFD68187442384158(uParam0->f_28[iVar0]))
			{
				if (!unk_0x9F94F2CFDCA78C55(uParam0->f_28[iVar0]))
				{
					if (unk_0x2E177F2B797A4A34(unk_0x507DA4994C3D8EBD()))
					{
						if (unk_0x5D0DED2275F131C9(unk_0x507DA4994C3D8EBD(), uParam0->f_28[iVar0]))
						{
							if (iParam2 == 0)
							{
								func_195(uParam0);
							}
							else
							{
								func_197(uParam0);
							}
							if (func_128())
							{
								func_126();
							}
							func_287("STEP_5_COMMON_RCfineAndInRange - Random character is being pushed by car [TERMINATING]");
							return 0;
						}
					}
					if ((unk_0x06B91ED8EB0DE484(uParam0->f_28[iVar0]) || unk_0x087F7B968CB47182(uParam0->f_28[iVar0])) || unk_0x43827D6447B61FA0(uParam0->f_28[iVar0]))
					{
						if (iParam2 == 0)
						{
							func_195(uParam0);
						}
						else
						{
							func_197(uParam0);
						}
						func_287("STEP_5_COMMON_RCfineAndInRange - Random character has been damaged by something [TERMINATING]");
						return 0;
					}
					if (unk_0x1983DA3C921BB046(uParam0->f_28[iVar0]))
					{
						if (unk_0x2F406E91B59DB558(uParam0->f_28[iVar0], unk_0x507DA4994C3D8EBD(), 3f, 3f, 3f, 0, 1, 0))
						{
							if (iParam2 == 0)
							{
								func_195(uParam0);
							}
							else
							{
								func_197(uParam0);
							}
							func_287("STEP_5_COMMON_RCfineAndInRange - Random character is in ragdoll [TERMINATING]");
							return 0;
						}
					}
					if (func_219(*uParam0))
					{
						if (!func_137(*uParam0))
						{
							if (func_214(uParam0->f_28[iVar0], 1, 0, 0, 0))
							{
								if (iParam2 == 0)
								{
									func_195(uParam0);
								}
								else
								{
									func_197(uParam0);
								}
								func_287("STEP_5_COMMON_RCfineAndInRange - Player is shooting near the Random Character [TERMINATING]");
								return 0;
							}
						}
						if (unk_0x6588804F7BCB1101(-1, unk_0xBF1B13057E5119A4(uParam0->f_28[iVar0], 1), 15f))
						{
							if (iParam2 == 0)
							{
								func_195(uParam0);
							}
							else
							{
								func_197(uParam0);
							}
							func_287("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
							return 0;
						}
						if (func_202(uParam0->f_28[iVar0], 1126825984))
						{
							if (iParam2 == 0)
							{
								func_195(uParam0);
							}
							else
							{
								func_197(uParam0);
							}
							func_287("STEP_5_COMMON_RCfineAndInRange - Random character is in combat [TERMINATING]");
							return 0;
						}
					}
					if (!func_201(*uParam0))
					{
						if (unk_0x6588804F7BCB1101(-1, unk_0xBF1B13057E5119A4(uParam0->f_28[iVar0], 1), 5f))
						{
							if (iParam2 == 0)
							{
								func_195(uParam0);
							}
							else
							{
								func_197(uParam0);
							}
							func_287("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
							return 0;
						}
						if (unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) > 0)
						{
							if (iParam2 == 0)
							{
								func_195(uParam0);
							}
							else
							{
								func_197(uParam0);
							}
							func_287("STEP_5_COMMON_RCfineAndInRange - Player has a wanted level [TERMINATING]");
							return 0;
						}
					}
				}
				else
				{
					func_287("STEP_5_COMMON_RCfineAndInRange - Random character injured / dead [TERMINATING]");
					if (*uParam0 == 34)
					{
						if (func_181(uParam0->f_41[0]))
						{
							unk_0xCC8C6873CFB069A4(uParam0->f_41[0], 1, 0);
							unk_0x479E7EEEBDEE245D(uParam0->f_41[0], 0);
						}
					}
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_201(int iParam0)
{
	if (((iParam0 == 2 || iParam0 == 3) || iParam0 == 52) || iParam0 == 53)
	{
		return 1;
	}
	return 0;
}

int func_202(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_181(unk_0x507DA4994C3D8EBD()) && func_181(iParam0))
	{
		if (func_213(iParam0) || unk_0x8DEF14B60C4A9D01(unk_0xAF65E5A58BE87D95(), iParam0))
		{
			if (unk_0x73741D3DABB81B29(unk_0x507DA4994C3D8EBD(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0x2F406E91B59DB558(unk_0x507DA4994C3D8EBD(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_203(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_203(int iParam0, float fParam1)
{
	return func_204(iParam0, unk_0x507DA4994C3D8EBD(), fParam1, 1, 250, 7);
}

bool func_204(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_212(iParam0, iParam1);
	if (!func_181(iParam0) || !func_181(iParam1))
	{
		if (iVar4 != -1)
		{
			func_211(&(Local_35[iVar4 /*4*/]));
		}
		return 0;
	}
	if (!func_208(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_207();
		if (iVar4 == -1)
		{
			return 0;
		}
		Local_35[iVar4 /*4*/].f_1 = iParam0;
		Local_35[iVar4 /*4*/].f_2 = iParam1;
	}
	Var1 = { unk_0xC5B1818639240D24(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_205(&(Local_35[iVar4 /*4*/]), Var1, iParam1, &(Local_35[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0xF976C624234A4AA8() - Local_35[iVar4 /*4*/].f_3) < iParam4);
}

int func_205(var uParam0, struct<3> Param1, int iParam4, var uParam5, int iParam6, int iParam7)
{
	var uVar0;
	struct<3> Var1;
	var uVar4;
	int iVar7;
	int iVar8;
	
	iVar7 = 0;
	if (!func_181(iParam4))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		Var1 = { func_206(iParam4, iParam7) };
		*uParam0 = unk_0x9400A3EC34709233(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam6, 7);
		return 0;
	}
	iVar8 = unk_0xBFABF77FCEA8BA3F(*uParam0, &uVar0, &Var1, &uVar4, &iVar7);
	if (iVar8 == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (iVar8 == 1)
	{
		return 0;
	}
	*uParam0 = 0;
	if (unk_0x91F594068DF4424F(iVar7))
	{
		func_181(iVar7);
		if (unk_0x274BAC44978F9161(iVar7) == iParam4)
		{
			if (bLocal_76)
			{
				unk_0x05F8C0F598573E93(Param1, unk_0xBF1B13057E5119A4(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam5 = unk_0xF976C624234A4AA8();
			return 1;
		}
		return 0;
	}
	if (unk_0x1BA544973A67E699(iVar7))
	{
		func_181(iVar7);
		if (unk_0x2A24448FF232F834(iParam4, 0))
		{
			if (unk_0x379620F9B34A512B(iVar7) == unk_0x78AB10B64129B3D5(iParam4, 0))
			{
				if (bLocal_76)
				{
					unk_0x05F8C0F598573E93(Param1, unk_0xBF1B13057E5119A4(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam5 = unk_0xF976C624234A4AA8();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_206(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = unk_0x4D3E68F73B727E49(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return unk_0xBF1B13057E5119A4(iParam0, 1);
	}
	else if (iParam1 == 1)
	{
		return unk_0xC5B1818639240D24(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return unk_0xC5B1818639240D24(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return unk_0xC5B1818639240D24(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return unk_0xC5B1818639240D24(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return unk_0xC5B1818639240D24(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return unk_0xC5B1818639240D24(iParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0xBF1B13057E5119A4(iParam0, 1);
}

int func_207()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_35.f_0)
	{
		if ((Local_35[iVar0 /*4*/] == 0 && Local_35[iVar0 /*4*/].f_1 == 0) && Local_35[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_208(int iParam0, int iParam1, float fParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_210(unk_0xBF1B13057E5119A4(iParam1, 1) - unk_0xBF1B13057E5119A4(iParam0, 1)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var3 = { unk_0xF260FCBA09D07146(iParam0) };
	}
	else
	{
		Var3 = { func_210(unk_0xC5B1818639240D24(iParam0, 31086, 0f, 5f, 0f) - unk_0xC5B1818639240D24(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_209(Var3, Var0);
	if (fVar6 <= unk_0xD0FFB162F40A139C((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_209(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_210(struct<3> Param0)
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

void func_211(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_212(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_35.f_0)
	{
		if (Local_35[iVar0 /*4*/].f_1 == iParam0 && Local_35[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_213(var uParam0)
{
	if (unk_0xB89DCD342FB7AC95(unk_0xAF65E5A58BE87D95(), uParam0) && unk_0x73741D3DABB81B29(unk_0x507DA4994C3D8EBD(), 6))
	{
		return 1;
	}
	return 0;
}

int func_214(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 8f;
	fVar1 = 15f;
	if (bParam1 == 0)
	{
		fVar0 = 1.86f;
		fVar1 = 1.86f;
	}
	if (bParam2)
	{
		fVar0 = 2f;
	}
	if (func_181(unk_0x507DA4994C3D8EBD()) && func_181(uParam0))
	{
		unk_0xAE0CD3052D6ED1ED(unk_0x507DA4994C3D8EBD(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_218(uParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_215(uParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (unk_0xB6CDBC1E2904184A(unk_0x507DA4994C3D8EBD()))
			{
				if (unk_0xEB4AE93098956715(unk_0x507DA4994C3D8EBD()))
				{
					if (unk_0x0982F2F40B035E77(unk_0xBF1B13057E5119A4(uParam0, 1), fVar0, 1))
					{
						return 1;
					}
				}
			}
			else
			{
				if (bParam1)
				{
					fVar0 = 1.86f;
					fVar1 = 1.86f;
				}
				if (func_218(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_215(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_215(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0xBF1B13057E5119A4(uParam0, 1) };
	Var3 = { Var0 };
	Var0.f_0 = (Var0.f_0 - fParam1);
	Var0.f_1 = (Var0.f_1 - fParam1);
	Var0.f_2 = (Var0.f_2 - fParam1);
	Var3.f_0 = (Var3.f_0 + fParam1);
	Var3.f_1 = (Var3.f_1 + fParam1);
	Var3.f_2 = (Var3.f_2 + fParam1);
	if (bParam2)
	{
		if (((unk_0x7EA638DAA99BFE28(unk_0xBF1B13057E5119A4(iParam0, 1), joaat("weapon_grenade"), fParam1, 1) || unk_0x7EA638DAA99BFE28(unk_0xBF1B13057E5119A4(iParam0, 1), joaat("weapon_molotov"), fParam1, 1)) || unk_0x7EA638DAA99BFE28(unk_0xBF1B13057E5119A4(iParam0, 1), joaat("weapon_smokegrenade"), fParam1, 1)) || unk_0x7EA638DAA99BFE28(unk_0xBF1B13057E5119A4(iParam0, 1), joaat("weapon_stickybomb"), 5f, 1))
		{
			if (bParam3)
			{
				if (func_216(iParam0, fParam1))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			return 1;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_216(iParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xEE93FF4158B54B09(Var0, Var3, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_216(var uParam0, float fParam1)
{
	var uVar0;
	struct<3> Var1;
	
	if ((((unk_0x2409FBDFB6F61EB8(uParam0, joaat("weapon_grenade"), fParam1, &Var1, &uVar0, 0) || unk_0x2409FBDFB6F61EB8(uParam0, joaat("weapon_smokegrenade"), fParam1, &Var1, &uVar0, 0)) || unk_0x2409FBDFB6F61EB8(uParam0, joaat("weapon_bzgas"), fParam1, &Var1, &uVar0, 0)) || unk_0x2409FBDFB6F61EB8(uParam0, joaat("weapon_stickybomb"), fParam1, &Var1, &uVar0, 0)) || unk_0x2409FBDFB6F61EB8(uParam0, joaat("weapon_molotov"), fParam1, &Var1, &uVar0, 0))
	{
		if (func_217(uParam0, Var1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_217(int iParam0, struct<3> Param1, float fParam4, int iParam5)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_210(Param1 - unk_0xBF1B13057E5119A4(uParam0, 1)) };
	if (fParam4 < 0.1f || fParam4 > 360f)
	{
		return 1;
	}
	if (iParam5 == 0)
	{
		Var3 = { unk_0xF260FCBA09D07146(iParam0) };
	}
	else
	{
		Var3 = { func_210(unk_0xC5B1818639240D24(iParam0, 31086, 0f, 5f, 0f) - unk_0xC5B1818639240D24(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_209(Var3, Var0);
	if (fVar6 <= unk_0xD0FFB162F40A139C((fParam4 / 2f)))
	{
		return 0;
	}
	return 1;
}

int func_218(int iParam0, bool bParam1, float fParam2, float fParam3)
{
	if (bParam1)
	{
		if (unk_0xEB4AE93098956715(unk_0x507DA4994C3D8EBD()))
		{
			if (unk_0x2F406E91B59DB558(unk_0x507DA4994C3D8EBD(), uParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (unk_0x0982F2F40B035E77(unk_0xBF1B13057E5119A4(iParam0, 1), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

int func_219(int iParam0)
{
	if (((((iParam0 == 2 || iParam0 == 3) || iParam0 == 34) || iParam0 == 11) || iParam0 == 52) || iParam0 == 53)
	{
		return 0;
	}
	return 1;
}

void func_220(int iParam0)
{
	var uVar0;
	
	if (func_181(unk_0x507DA4994C3D8EBD()) && func_181(uParam0))
	{
		unk_0x395C5D98343F0040("rcmextreme3");
		while (!unk_0xCE40391AB65FE305("rcmextreme3"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xB5DC017AFD430D1B(&uVar0);
		unk_0xEC0A546609840086(0, "rcmextreme3", "jump_fall", 1000f, -8f, -1, 8, 0, 0, 0, 0);
		unk_0x9621E1F79C388756(0, 1);
		unk_0x7C745FEDC575E3E6(0, 64.6f, -737.8f, 44.2f);
		unk_0xA859D289EEB2D72A(0, unk_0x507DA4994C3D8EBD(), 10000f, -1, 0, 0);
		unk_0x6EE8A5CF9AC75F12(uVar0);
		unk_0x8229311A391A4EC6(uParam0, uVar0);
		unk_0x9F77DFFC61FCB68C(&uVar0);
	}
}

int func_221(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_145();
	}
	if (iParam0 == -1)
	{
		return 1;
	}
	if (func_227(iParam0))
	{
		return 0;
	}
	if (!func_142(4))
	{
		if (func_225(iParam0))
		{
		}
		else
		{
			return 1;
		}
	}
	if (func_224() && !func_223())
	{
		return 1;
	}
	if (!func_222(iParam0))
	{
		if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
		{
			if (unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) != 0)
			{
				return 1;
			}
		}
	}
	if (!unk_0x61D8FEAF64881CDA(Global_97173.f_16795[iParam0 /*6*/], 2))
	{
		return 1;
	}
	return 0;
}

int func_222(int iParam0)
{
	if ((((iParam0 == 5 || iParam0 == 6) || iParam0 == 41) || iParam0 == 60) || iParam0 == 61)
	{
		return 1;
	}
	return 0;
}

int func_223()
{
	if (unk_0x80AD636AD4184F2B())
	{
		if (unk_0xE6BC404A1178AB93() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_224()
{
	if (Global_87111 != -1)
	{
		return unk_0x61D8FEAF64881CDA(Global_80977[Global_87111 /*34*/].f_15, 20);
	}
	return 0;
}

int func_225(int iParam0)
{
	if ((func_226() && Global_89784.f_11 == 6) && iParam0 == func_146(&(Global_89784.f_3), 0))
	{
		return 1;
	}
	return 0;
}

int func_226()
{
	if (((Global_89784 == 13 || Global_89784 == 10) || Global_89784 == 11) || Global_89784 == 12)
	{
		return 0;
	}
	return 1;
}

int func_227(int iParam0)
{
	if (func_92(0))
	{
		if (Global_68313.f_1 == 7)
		{
			if (Global_68313 == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_228()
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { 190.2424f, -956.479f, 29.08f };
	fVar3 = 12f;
	if (func_181(unk_0x507DA4994C3D8EBD()))
	{
		if (func_229(unk_0x507DA4994C3D8EBD(), Var0, fVar3))
		{
			func_132();
		}
	}
}

bool func_229(int iParam0, struct<3> Param1, float fParam4)
{
	return unk_0xB7A628320EFF8E47(unk_0xBF1B13057E5119A4(uParam0, 1), Param1) <= (fParam4 * fParam4);
}

void func_230(int iParam0)
{
	if (func_181(iParam0->f_28[0]))
	{
		unk_0xE131FC34DA8AD63F(iParam0->f_28[0], 64, 1);
		unk_0xE131FC34DA8AD63F(iParam0->f_28[0], 249, 1);
		if (unk_0x6588804F7BCB1101(-1, unk_0xBF1B13057E5119A4(iParam0->f_28[0], 1), 5.1f))
		{
			func_231(iParam0);
			if (func_181(iParam0->f_28[0]))
			{
				unk_0x638CD54DC5CC8A3F(iParam0->f_28[0], 1000, 1);
			}
		}
	}
}

void func_231(var uParam0)
{
	int iVar0;
	
	if (*uParam0 == 2 || *uParam0 == 3)
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (func_181(uParam0->f_41[iVar0]))
			{
				unk_0x479E7EEEBDEE245D(uParam0->f_41[iVar0], 0);
			}
			iVar0++;
		}
		if (func_181(uParam0->f_28[0]))
		{
			unk_0x479E7EEEBDEE245D(uParam0->f_28[0], 0);
			unk_0xFFA7CDD296D07129(uParam0->f_28[0], 100, 500, 0, 1, 1, 0);
			unk_0xA859D289EEB2D72A(uParam0->f_28[0], unk_0x507DA4994C3D8EBD(), 10000f, -1, 0, 0);
		}
		func_196(&(uParam0->f_41[2]));
	}
}

void func_232(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68067)
	{
		if (!unk_0x9F94F2CFDCA78C55(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xC9CD9F3D2675F791(iParam2, 0);
			}
			else
			{
				unk_0xC9CD9F3D2675F791(iParam2, 1);
			}
		}
		if (!unk_0x9F94F2CFDCA78C55(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xABDE52C59BE3C61A(iParam2, 0);
			}
			else
			{
				unk_0xABDE52C59BE3C61A(iParam2, 1);
			}
		}
	}
}

var func_233()
{
	return unk_0x92832F671263F8E0(-564f, -1758.1f, 16.5f, -419.31f, -1649f, 23f, 0, 1, 1, 1);
}

int func_234(int iParam0)
{
	switch (*iParam0)
	{
		case 2:
			if (!func_255(iParam0))
			{
				return 0;
			}
			break;
		
		case 3:
			if (!func_252(iParam0))
			{
				return 0;
			}
			break;
		
		case 4:
			if (!func_246(iParam0))
			{
				return 0;
			}
			break;
		
		case 5:
			if (!func_243(iParam0))
			{
				return 0;
			}
			break;
		
		case 6:
			if (!func_238(iParam0))
			{
				return 0;
			}
			break;
		
		case 7:
			if (!func_237(iParam0))
			{
				return 0;
			}
			break;
	}
	if (*iParam0 == 2)
	{
		func_236(&Local_96);
		func_235(&Local_96, "democ_only_works");
		func_235(&Local_96, "gift_from_god");
		func_235(&Local_96, "rigged_vote");
		func_235(&Local_96, "suck_my");
		func_235(&Local_96, "tyranny");
	}
	func_287("Created initial scene");
	return 1;
}

void func_235(var uParam0, char* sParam1)
{
	if (uParam0->f_6 >= *uParam0)
	{
		return;
	}
	(*uParam0)[uParam0->f_6] = sParam1;
	uParam0->f_6++;
}

void func_236(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_6 = 0;
	uParam0->f_7 = -1;
}

int func_237(var uParam0)
{
	uParam0->f_16 = 3;
	uParam0->f_17[0 /*3*/] = { 237.65f, -385.41f, 44.4f };
	uParam0->f_27 = 1;
	return 1;
}

int func_238(var uParam0)
{
	int iVar0[3];
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	struct<3> Var13;
	float fVar16;
	float fVar17;
	int iVar18;
	bool bVar19;
	
	Var4 = { -468.9f, -1713.06f, 18.21f };
	Var7 = { -426.56f, -1717.89f, 18.2f };
	Var10 = { -0.1f, -0.85f, 0.23f };
	Var13 = { 8f, 0.5f, 0f };
	fVar16 = -76.2f;
	fVar17 = 43.5f;
	iVar0[0] = joaat("emperor2");
	iVar0[1] = joaat("prop_weed_tub_01");
	iVar0[2] = joaat("towtruck");
	switch (iLocal_90)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { -480.9929f, -1712.65f, 17.4524f };
			uParam0->f_17[1 /*3*/] = { -443.6129f, -1705.886f, 27.62214f };
			uParam0->f_24 = 31f;
			uParam0->f_27 = 1;
			uParam0->f_26 = 1;
			iVar18 = 0;
			while (iVar18 <= (iVar0 - 1))
			{
				unk_0xCBE6AC5010E5CE5C(iVar0[iVar18]);
				iVar18++;
			}
			iLocal_90 = 1;
			break;
		
		case 1:
			if (!func_242(&iVar0))
			{
				return 0;
			}
			iLocal_90 = 2;
			break;
		
		case 2:
			bVar19 = true;
			if (!unk_0xFD68187442384158(uParam0->f_35[0]))
			{
				func_240(&(uParam0->f_35[0]), iVar0[0], Var4, fVar16);
				if (unk_0xFD68187442384158(uParam0->f_35[0]))
				{
					unk_0xAD78B089450094CB(uParam0->f_35[0], 0);
					unk_0x941F924D5E9C2140(iVar0[0], 1);
					unk_0xE8243C7B1ED62E02(uParam0->f_35[0], "WEED STASH VEHICLE");
					unk_0x74032F41B7AB0FBB(uParam0->f_35[0], 0);
					unk_0x798A38BABF030708(uParam0->f_35[0], 0);
					unk_0x29CE15040B0080CB(uParam0->f_35[0], 1);
					unk_0xB96DBAE0EA8F23C7(uParam0->f_35[0], 1);
				}
				else
				{
					bVar19 = false;
				}
			}
			if (!unk_0xFD68187442384158(uParam0->f_41[0]))
			{
				func_239(&(uParam0->f_41[0]), iVar0[1], Var4 + Var10, 0f);
				if (unk_0xFD68187442384158(uParam0->f_41[0]) && unk_0xFD68187442384158(uParam0->f_35[0]))
				{
					unk_0x26030664C7D28388(uParam0->f_41[0], uParam0->f_35[0], 0, Var10, Var13, 0, 0, 0, 0, 2, 1);
				}
				else
				{
					bVar19 = false;
				}
			}
			if (!unk_0xFD68187442384158(uParam0->f_35[1]))
			{
				func_240(&(uParam0->f_35[1]), iVar0[2], Var7, fVar17);
				unk_0x2972E055244638AD(uParam0->f_35[1], 39, 43);
			}
			if (bVar19)
			{
				iLocal_90 = 3;
			}
			break;
		
		case 3:
			iVar18 = 0;
			while (iVar18 <= (iVar0 - 1))
			{
				unk_0xFF467904A8A12BBE(iVar0[iVar18]);
				iVar18++;
			}
			return 1;
			break;
	}
	return 0;
}

void func_239(var uParam0, var uParam1, struct<3> Param2, float fParam5)
{
	func_196(uParam0);
	*uParam0 = unk_0xCEC985247737A30E(uParam1, Param2, 1, 1, 0);
	unk_0x248DC16118AE5035(*uParam0, fParam5);
}

void func_240(var uParam0, var uParam1, struct<3> Param2, float fParam5)
{
	func_241(uParam0);
	*uParam0 = unk_0x546974B676313326(uParam1, Param2, fParam5, 1, 1);
	if (unk_0xFD68187442384158(*uParam0))
	{
		unk_0xD90C30D269B19096(*uParam0);
		unk_0x3E16CE93BAE616EE(*uParam0, 1000);
	}
}

void func_241(var uParam0)
{
	if (unk_0xFD68187442384158(*uParam0))
	{
		if (!unk_0x73E2404DC70203CD(*uParam0))
		{
			unk_0xBAE5DF507EEC53C8(*uParam0, 1, 0);
		}
		if (func_157(*uParam0))
		{
			if (unk_0x73E2404DC70203CD(*uParam0) && unk_0x51BC2FF711F8CF71(*uParam0, 1))
			{
				if (func_181(unk_0x507DA4994C3D8EBD()))
				{
					if (unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), *uParam0, 0))
					{
						unk_0xB67623A401171555(uParam0);
						return;
					}
				}
				unk_0x10EA498723DC5A09(uParam0);
			}
		}
		else
		{
			if (func_181(unk_0x507DA4994C3D8EBD()))
			{
				if (unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), *uParam0, 0))
				{
					unk_0xB67623A401171555(uParam0);
					return;
				}
			}
			unk_0x10EA498723DC5A09(uParam0);
		}
	}
}

int func_242(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (!unk_0xD291857D0C9C7FEC((*iParam0)[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_243(var uParam0)
{
	int iVar0[4];
	struct<3> Var5;
	struct<3> Var8;
	struct<3> Var11;
	float fVar14;
	float fVar15;
	int iVar16;
	bool bVar17;
	
	Var5 = { 1199.8f, -1259.22f, 34.23f };
	Var8 = { 0f, -1f, 0.64f };
	Var11 = { 1195.3f, -1312.74f, 34.75f };
	fVar14 = 174.7f;
	fVar15 = 282.4f;
	iVar0[0] = joaat("dloader");
	iVar0[1] = joaat("prop_weed_tub_01b");
	iVar0[2] = joaat("police4");
	iVar0[3] = joaat("a_m_y_business_01");
	switch (iLocal_90)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { 1198.367f, -1326.095f, 33.9683f };
			uParam0->f_17[1 /*3*/] = { 1202.237f, -1235.374f, 43.97641f };
			uParam0->f_24 = 31f;
			uParam0->f_27 = 1;
			uParam0->f_26 = 1;
			iVar16 = 0;
			while (iVar16 <= (iVar0 - 1))
			{
				unk_0xCBE6AC5010E5CE5C(iVar0[iVar16]);
				iVar16++;
			}
			iLocal_90 = 1;
			break;
		
		case 1:
			if (!func_242(&iVar0))
			{
				return 0;
			}
			iLocal_90 = 2;
			break;
		
		case 2:
			bVar17 = true;
			func_240(&(uParam0->f_35[0]), iVar0[0], Var5, fVar14);
			if (unk_0xFD68187442384158(uParam0->f_35[0]))
			{
				unk_0x29CE15040B0080CB(uParam0->f_35[0], 1);
				unk_0xAD78B089450094CB(uParam0->f_35[0], 0);
				unk_0x941F924D5E9C2140(iVar0[0], 1);
				unk_0xE8243C7B1ED62E02(uParam0->f_35[0], "WEED STASH VEHICLE");
				unk_0x74032F41B7AB0FBB(uParam0->f_35[0], 0);
				unk_0x798A38BABF030708(uParam0->f_35[0], 0);
				unk_0x25A5C91E8079E04E(uParam0->f_35[0], 1, 1);
				unk_0x25A5C91E8079E04E(uParam0->f_35[0], 2, 1);
				unk_0x25A5C91E8079E04E(uParam0->f_35[0], 3, 1);
			}
			else
			{
				bVar17 = false;
			}
			if (!unk_0xFD68187442384158(uParam0->f_41[0]))
			{
				func_239(&(uParam0->f_41[0]), iVar0[1], Var5 + Var8, 0f);
				if (unk_0xFD68187442384158(uParam0->f_41[0]) && unk_0xFD68187442384158(uParam0->f_35[0]))
				{
					unk_0x26030664C7D28388(uParam0->f_41[0], uParam0->f_35[0], 0, Var8, 0f, 0f, 0f, 0, 0, 1, 0, 2, 1);
				}
				else
				{
					bVar17 = false;
				}
			}
			if (!unk_0xFD68187442384158(uParam0->f_35[1]))
			{
				func_240(&(uParam0->f_35[1]), iVar0[2], Var11, fVar15);
			}
			if (!unk_0xFD68187442384158(uParam0->f_28[0]))
			{
				func_244(&(uParam0->f_28[0]), iVar0[3], Var11, fVar15, 6);
			}
			if (!unk_0xFD68187442384158(uParam0->f_28[1]))
			{
				func_244(&(uParam0->f_28[1]), iVar0[3], Var11, fVar15, 6);
			}
			if (bVar17)
			{
				iLocal_90 = 3;
			}
			break;
		
		case 3:
			if (func_181(uParam0->f_35[1]))
			{
				if (func_181(uParam0->f_28[0]))
				{
					unk_0x3D070287E585BD99(uParam0->f_28[0], 1);
					unk_0x11460EBE0487B44F(uParam0->f_28[0], uParam0->f_35[1], -1);
					unk_0x22E3FB128E67BC05(uParam0->f_28[0], joaat("weapon_pistol"), 100, 1);
				}
				if (func_181(uParam0->f_28[1]))
				{
					unk_0x3D070287E585BD99(uParam0->f_28[1], 1);
					unk_0x11460EBE0487B44F(uParam0->f_28[1], uParam0->f_35[1], 0);
					unk_0x22E3FB128E67BC05(uParam0->f_28[1], joaat("weapon_pistol"), 100, 1);
				}
			}
			iVar16 = 0;
			while (iVar16 <= (iVar0 - 1))
			{
				unk_0xFF467904A8A12BBE(iVar0[iVar16]);
				iVar16++;
			}
			return 1;
			break;
	}
	return 0;
}

void func_244(var uParam0, var uParam1, struct<3> Param2, float fParam5, int iParam6)
{
	func_245(uParam0);
	*uParam0 = unk_0x7B88529CAE3B7F15(iParam6, uParam1, Param2, fParam5, 0, 0);
}

void func_245(var uParam0)
{
	if (unk_0xFD68187442384158(*uParam0))
	{
		if (!unk_0xE5D56342B0FF1D0D(*uParam0))
		{
			unk_0x3C2614E45AB2F499(*uParam0, 0);
		}
		if (!unk_0x73E2404DC70203CD(*uParam0))
		{
			unk_0xBAE5DF507EEC53C8(*uParam0, 1, 0);
		}
		unk_0x8019BB3BA236A900(uParam0);
	}
}

int func_246(var uParam0)
{
	int iVar0[2];
	struct<3> Var3;
	float fVar6;
	int iVar7;
	bool bVar8;
	
	Var3 = { 417.78f, -765.71f, 29.39f };
	fVar6 = 87.3f;
	iVar0[0] = uLocal_91;
	iVar0[1] = joaat("p_cs_clipboard");
	switch (iLocal_90)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_27 = 0;
			uParam0->f_17[0 /*3*/] = { 415.4587f, -773.3615f, 27.8549f };
			uParam0->f_17[1 /*3*/] = { 415.5205f, -758.5715f, 31.34455f };
			uParam0->f_24 = 14.5f;
			StringCopy(&(uParam0->f_9), "BAR_5_RCM_P2", 24);
			uParam0->f_25 = 1;
			iVar7 = 0;
			while (iVar7 <= (iVar0 - 1))
			{
				unk_0xCBE6AC5010E5CE5C(iVar0[iVar7]);
				iVar7++;
			}
			func_251(&(uParam0->f_48), "rcm_barry3", "bar_3_rcm_barry_standing_on_street_base", "bar_3_rcm_barry_standing_on_street_fidget");
			iLocal_90 = 1;
			break;
		
		case 1:
			if (!func_242(&iVar0) || !func_250(&(uParam0->f_48)))
			{
				return 0;
			}
			iLocal_90 = 2;
			break;
		
		case 2:
			bVar8 = true;
			if (!unk_0xFD68187442384158(uParam0->f_28[0]))
			{
				if (func_247(&(uParam0->f_28[0]), 49, Var3, fVar6, "RC LAUNCHER: BARRY 3", 1))
				{
					unk_0x06543DA07CCCC7F5(uParam0->f_28[0], 1, 0, 0, 0);
				}
				else
				{
					bVar8 = false;
				}
			}
			if (!unk_0xFD68187442384158(uParam0->f_41[0]))
			{
				func_239(&(uParam0->f_41[0]), iVar0[1], Var3 + Vector(0f, 0f, 5f), -115.18f);
				if (func_181(uParam0->f_41[0]) && func_181(uParam0->f_28[0]))
				{
					unk_0x26030664C7D28388(uParam0->f_41[0], uParam0->f_28[0], unk_0xA8918EDB277FC51C(uParam0->f_28[0], 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				}
				else
				{
					bVar8 = false;
				}
			}
			if (bVar8)
			{
				iLocal_90 = 3;
			}
			break;
		
		case 3:
			iVar7 = 0;
			while (iVar7 <= (iVar0 - 1))
			{
				unk_0xFF467904A8A12BBE(iVar0[iVar7]);
				iVar7++;
			}
			return 1;
			break;
	}
	return 0;
}

int func_247(var uParam0, int iParam1, struct<3> Param2, float fParam5, char* sParam6, int iParam7)
{
	if (func_248(uParam0, iParam1, Param2, fParam5, 1))
	{
		if (unk_0xFD68187442384158(*uParam0))
		{
			if (!unk_0xE5D56342B0FF1D0D(*uParam0))
			{
				unk_0x2DC5B31EBB810396(*uParam0, 1);
				unk_0xFBF796BC19E6FC23(*uParam0, 0);
				if (iParam7 == 1)
				{
					unk_0x6A750A31D18DA81A(*uParam0, 0);
				}
			}
			unk_0x3F671607BC1804B5(*uParam0, sParam6);
		}
		return 1;
	}
	return 0;
}

int func_248(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6)
{
	int iVar0;
	
	if (!func_36(iParam1))
	{
		iVar0 = func_290(iParam1);
		unk_0xCBE6AC5010E5CE5C(iVar0);
		if (unk_0xD291857D0C9C7FEC(iVar0))
		{
			if (unk_0xFD68187442384158(*uParam0))
			{
				unk_0x8019BB3BA236A900(uParam0);
			}
			*uParam0 = unk_0x7B88529CAE3B7F15(26, iVar0, Param2, uParam5, 0, 0);
			unk_0x4376624421FB329B(*uParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (unk_0xFEAB4D7F75916F7C(*uParam0, 3) == 0)
				{
					unk_0xF2685765B7BEBCB0(*uParam0, 5, 2, 0, 0);
				}
			}
			func_249(*uParam0, iParam1);
			if (bParam6)
			{
				unk_0xFF467904A8A12BBE(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_249(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 7;
	if (iParam1 == 19)
	{
		iVar0 = 3;
	}
	else if (iParam1 == 14)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 17)
	{
		iVar0 = 5;
	}
	else
	{
		iVar0 = 7;
		return 0;
	}
	Global_86023[(iVar0 - 3)] = uParam0;
	return 1;
}

int func_250(var uParam0)
{
	if (func_194(uParam0))
	{
		unk_0x395C5D98343F0040(*uParam0);
		if (unk_0xCE40391AB65FE305(*uParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_251(var uParam0, char* sParam1, char* sParam2, char* sParam3)
{
	*uParam0 = sParam1;
	uParam0->f_1 = sParam2;
	uParam0->f_2 = sParam3;
	unk_0x395C5D98343F0040(*uParam0);
	uParam0->f_5 = { 0f, 0f, 0f };
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_3 = 1;
	uParam0->f_4 = 0;
}

int func_252(var uParam0)
{
	int iVar0[5];
	struct<3> Var6;
	float fVar9;
	int iVar10;
	bool bVar11;
	
	Var6 = { 190.2424f, -956.479f, 29.08f };
	fVar9 = 69.171f;
	iVar0[0] = uLocal_91;
	iVar0[1] = joaat("prop_protest_table_01");
	iVar0[2] = joaat("prop_chair_08");
	iVar0[3] = joaat("p_a4_sheets_s");
	iVar0[4] = joaat("prop_protest_sign_01");
	switch (iLocal_90)
	{
		case 0:
			uParam0->f_16 = 5;
			StringCopy(&(uParam0->f_9), "BAR_3_RCM", 24);
			uParam0->f_25 = 1;
			uParam0->f_27 = 0;
			uParam0->f_17[0 /*3*/] = { 190.0315f, -956.3355f, 29.09192f };
			uParam0->f_17[1 /*3*/] = { 178.0458f, -950.6594f, 31.09358f };
			uParam0->f_24 = 23f;
			iVar10 = 0;
			while (iVar10 <= (iVar0 - 1))
			{
				unk_0xCBE6AC5010E5CE5C(iVar0[iVar10]);
				iVar10++;
			}
			func_251(&(uParam0->f_48), "rcm_barry2", "lead_in_loop", "lead_in_loop");
			iLocal_90 = 1;
			break;
		
		case 1:
			if (!func_242(&iVar0) || !func_250(&(uParam0->f_48)))
			{
				return 0;
			}
			iLocal_90 = 2;
			break;
		
		case 2:
			bVar11 = true;
			if (!unk_0xFD68187442384158(uParam0->f_28[0]))
			{
				if (func_247(&(uParam0->f_28[0]), 49, Var6, fVar9, "RC LAUNCHER: BARRY 2", 1))
				{
					unk_0x06543DA07CCCC7F5(uParam0->f_28[0], 1, 0, 0, 0);
				}
				else
				{
					bVar11 = false;
				}
			}
			if (!unk_0xFD68187442384158(uParam0->f_41[0]))
			{
				unk_0x2F36A13C15BE17D7(189.5964f, -956.0344f, 29.09179f, 2f, 0);
				func_239(&(uParam0->f_41[0]), iVar0[1], 189.5964f, -956.0344f, 29.09179f, func_254(-2.01f));
				if (func_181(uParam0->f_41[0]))
				{
					unk_0x479E7EEEBDEE245D(uParam0->f_41[0], 1);
					func_239(&(uParam0->f_41[2]), iVar0[3], 189.7901f, -956.1675f, 29.8229f, func_254(-2.01f));
					if (func_181(uParam0->f_41[2]))
					{
						unk_0x479E7EEEBDEE245D(uParam0->f_41[2], 1);
					}
				}
				else
				{
					bVar11 = false;
				}
			}
			if (!unk_0xFD68187442384158(uParam0->f_41[1]))
			{
				func_239(&(uParam0->f_41[1]), iVar0[2], 190.417f, -956.511f, 29.09179f, -99.157f);
				if (func_181(uParam0->f_41[1]))
				{
					unk_0x479E7EEEBDEE245D(uParam0->f_41[1], 1);
					unk_0xCC8C6873CFB069A4(uParam0->f_41[1], 0, 0);
				}
				else
				{
					bVar11 = false;
				}
			}
			if (bVar11)
			{
				iLocal_90 = 3;
			}
			break;
		
		case 3:
			if (func_181(uParam0->f_28[0]))
			{
				unk_0x2DC5B31EBB810396(uParam0->f_28[0], 1);
				unk_0x6A750A31D18DA81A(uParam0->f_28[0], 0);
				unk_0x7FEDD088E489CE41(uParam0->f_28[0], 208, 1);
				unk_0xE440546F94B26235(uParam0->f_28[0], joaat("player"));
				unk_0xF85858E5CBF4D9F0(uParam0->f_28[0], Var6, 1, 0, 0, 1);
				unk_0x248DC16118AE5035(uParam0->f_28[0], fVar9);
				unk_0x479E7EEEBDEE245D(uParam0->f_28[0], 1);
				unk_0xEC0A546609840086(uParam0->f_28[0], uParam0->f_48, uParam0->f_48.f_1, 8f, -8f, -1, 9, 0, 0, 0, 0);
				unk_0x8E759206778E571F(uParam0->f_28[0], unk_0x507DA4994C3D8EBD(), -1, 0, 2);
			}
			if (func_181(uParam0->f_41[0]))
			{
				unk_0x479E7EEEBDEE245D(uParam0->f_41[0], 1);
			}
			if (func_181(uParam0->f_41[1]))
			{
				unk_0x479E7EEEBDEE245D(uParam0->f_41[1], 1);
				unk_0xCC8C6873CFB069A4(uParam0->f_41[1], 1, 0);
			}
			func_253(&(uParam0->f_41[3]), iVar0[4]);
			iVar10 = 0;
			while (iVar10 <= (iVar0 - 1))
			{
				unk_0xFF467904A8A12BBE(iVar0[iVar10]);
				iVar10++;
			}
			return 1;
			break;
	}
	return 0;
}

void func_253(var uParam0, var uParam1)
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { 192.4462f, -953.5946f, 29.0919f };
	fVar3 = 23.45f;
	func_239(uParam0, uParam1, Var0, fVar3);
}

float func_254(float fParam0)
{
	return (fParam0 * 57.29578f);
}

int func_255(var uParam0)
{
	int iVar0[7];
	struct<3> Var8;
	var uVar11;
	int iVar12;
	bool bVar13;
	
	Var8 = { 190.2424f, -956.379f, 28.63f };
	uVar11 = func_254(1.12f);
	iVar0[0] = uLocal_91;
	iVar0[1] = joaat("prop_protest_table_01");
	iVar0[2] = joaat("prop_chair_08");
	iVar0[3] = joaat("p_a4_sheets_s");
	iVar0[4] = joaat("p_cs_lighter_01");
	iVar0[5] = joaat("p_cs_joint_01");
	iVar0[6] = joaat("prop_protest_sign_01");
	switch (iLocal_90)
	{
		case 0:
			uParam0->f_16 = 5;
			StringCopy(&(uParam0->f_9), "BAR_1_RCM_P2", 24);
			uParam0->f_25 = 1;
			uParam0->f_27 = 0;
			uParam0->f_17[0 /*3*/] = { 190.0315f, -956.3355f, 29.09192f };
			uParam0->f_17[1 /*3*/] = { 178.0458f, -950.6594f, 31.09358f };
			uParam0->f_24 = 23f;
			iVar12 = 0;
			while (iVar12 <= (iVar0 - 1))
			{
				unk_0xCBE6AC5010E5CE5C(iVar0[iVar12]);
				iVar12++;
			}
			func_251(&(uParam0->f_48), "RCMBarryLeadInOut", "idle", "fidget");
			iLocal_90 = 1;
			break;
		
		case 1:
			if (!func_242(&iVar0) || !func_250(&(uParam0->f_48)))
			{
				return 0;
			}
			iLocal_90 = 2;
			break;
		
		case 2:
			bVar13 = true;
			if (!unk_0xFD68187442384158(uParam0->f_28[0]))
			{
				if (func_247(&(uParam0->f_28[0]), 49, Var8, uVar11, "RC LAUNCHER: BARRY 1", 1))
				{
					unk_0x06543DA07CCCC7F5(uParam0->f_28[0], 1, 0, 0, 0);
				}
				else
				{
					bVar13 = false;
				}
			}
			if (!unk_0xFD68187442384158(uParam0->f_41[0]))
			{
				unk_0x2F36A13C15BE17D7(189.5964f, -956.0344f, 29.09179f, 5f, 0);
				func_239(&(uParam0->f_41[0]), iVar0[1], 189.5964f, -956.0344f, 29.09179f, func_254(-2.01f));
				if (func_181(uParam0->f_41[0]))
				{
					unk_0x479E7EEEBDEE245D(uParam0->f_41[0], 1);
					func_239(&(uParam0->f_41[2]), iVar0[3], 189.7901f, -956.1675f, 29.8229f, func_254(-2.01f));
					if (func_181(uParam0->f_41[2]))
					{
						unk_0x479E7EEEBDEE245D(uParam0->f_41[2], 1);
					}
				}
				else
				{
					bVar13 = false;
				}
			}
			if (!unk_0xFD68187442384158(uParam0->f_41[1]))
			{
				func_239(&(uParam0->f_41[1]), iVar0[2], 190.2574f, -956.3513f, 29.09179f, func_254(-1.68f));
				if (func_181(uParam0->f_41[1]))
				{
					unk_0x479E7EEEBDEE245D(uParam0->f_41[1], 1);
					unk_0xCC8C6873CFB069A4(uParam0->f_41[1], 0, 0);
				}
				else
				{
					bVar13 = false;
				}
			}
			if (bVar13)
			{
				iLocal_90 = 3;
			}
			break;
		
		case 3:
			if (func_181(uParam0->f_28[0]))
			{
				unk_0x2DC5B31EBB810396(uParam0->f_28[0], 1);
				unk_0x6A750A31D18DA81A(uParam0->f_28[0], 0);
				unk_0x7FEDD088E489CE41(uParam0->f_28[0], 208, 1);
				unk_0xE440546F94B26235(uParam0->f_28[0], joaat("player"));
				unk_0xF85858E5CBF4D9F0(uParam0->f_28[0], Var8, 1, 0, 0, 1);
				unk_0x248DC16118AE5035(uParam0->f_28[0], uVar11);
				unk_0x479E7EEEBDEE245D(uParam0->f_28[0], 1);
				unk_0xEC0A546609840086(uParam0->f_28[0], uParam0->f_48, uParam0->f_48.f_1, 8f, -8f, -1, 9, 0, 0, 0, 0);
				unk_0x8E759206778E571F(uParam0->f_28[0], unk_0x507DA4994C3D8EBD(), -1, 0, 2);
			}
			if (func_181(uParam0->f_41[0]))
			{
				unk_0x479E7EEEBDEE245D(uParam0->f_41[0], 1);
			}
			if (func_181(uParam0->f_41[1]))
			{
				unk_0x479E7EEEBDEE245D(uParam0->f_41[1], 1);
				unk_0xCC8C6873CFB069A4(uParam0->f_41[1], 1, 0);
			}
			func_239(&(uParam0->f_41[4]), iVar0[5], 189.895f, -955.945f, 29.818f, 0f);
			if (func_181(uParam0->f_41[4]))
			{
				unk_0xC1619F9F00BCB470(uParam0->f_41[4], -90f, 0f, -30.8f, 2, 1);
				unk_0x479E7EEEBDEE245D(uParam0->f_41[4], 1);
			}
			func_239(&(uParam0->f_41[3]), iVar0[4], 189.783f, -956.015f, 29.79f, 0f);
			if (func_181(uParam0->f_41[3]))
			{
				unk_0xC1619F9F00BCB470(uParam0->f_41[3], -90f, 0f, 75f, 2, 1);
				unk_0x479E7EEEBDEE245D(uParam0->f_41[3], 1);
			}
			func_253(&(uParam0->f_41[5]), iVar0[6]);
			iVar12 = 0;
			while (iVar12 <= (iVar0 - 1))
			{
				unk_0xFF467904A8A12BBE(iVar0[iVar12]);
				iVar12++;
			}
			return 1;
			break;
	}
	return 0;
}

int func_256(int iParam0)
{
	struct<27> Var0;
	int iVar32;
	
	func_94(iParam0, &Var0);
	iVar32 = func_89();
	if (iVar32 == 145)
	{
		return 1;
	}
	else if ((iVar32 != 1 && iVar32 != 0) && iVar32 != 2)
	{
		return 1;
	}
	if (!unk_0x61D8FEAF64881CDA(Var0.f_26, iVar32))
	{
		return 1;
	}
	return 0;
}

int func_257(int iParam0)
{
	char* sVar0;
	
	if (Global_68067)
	{
		func_287("STEP_3_COMMON_CanRCLaunch - Script denied. Multiplayer is running [TERMINATING]");
		return 0;
	}
	if (!func_258(iParam0))
	{
		Global_96260[iParam0 /*10*/].f_1 = 1;
		func_287("STEP_3_COMMON_CanRCLaunch - Script denied by RC Controller [TERMINATING]");
		return 0;
	}
	if (Global_89784.f_11 == 6)
	{
		if (Global_89784 < 9)
		{
			func_94(iParam0, &sVar0);
			if (unk_0xA858564DC37EED5E(&(Global_89784.f_3), sVar0))
			{
				func_287("STEP_3_COMMON_CanRCLaunch - Script denied as a replay for this RC is being configured. [TERMINATING]");
				return 0;
			}
		}
	}
	if (unk_0x25531002BCF0D968(joaat("candidate_controller")) == 0)
	{
		Global_96260[iParam0 /*10*/].f_1 = 1;
		func_287("STEP_3_COMMON_CanRCLaunch - Script denied as candidate_controller is not running. [TERMINATING]");
		return 0;
	}
	return 1;
}

int func_258(int iParam0)
{
	var uVar0;
	
	func_94(iParam0, &uVar0);
	if (!func_142(4))
	{
		if (func_225(iParam0))
		{
		}
		else
		{
			return 0;
		}
	}
	if (func_224() && !func_223())
	{
		return 0;
	}
	if (func_264(iParam0))
	{
		return 0;
	}
	if (iParam0 == -1)
	{
		iParam0 = func_145();
	}
	if (iParam0 == -1)
	{
		return 0;
	}
	if (!func_227(iParam0))
	{
		if (!func_263(iParam0))
		{
			return 0;
		}
		if (!func_262(iParam0))
		{
			return 0;
		}
		if (func_261(iParam0))
		{
			return 0;
		}
	}
	if (iParam0 == 58)
	{
		if (func_259(5))
		{
			Global_96260[iParam0 /*10*/].f_3 = 0;
		}
	}
	if (Global_96260[iParam0 /*10*/].f_3 == 1)
	{
		return 0;
	}
	return 1;
}

int func_259(int iParam0)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (Global_89836.f_288 == 0)
	{
		return 0;
	}
	if (iParam0 == 10)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (func_259(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	else if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
	{
		func_260(iParam0, &sVar1);
		iVar9 = unk_0x9C3273B36FEFD46F(Global_85227[iParam0 /*10*/].f_3, &sVar1);
		if (iVar9 != 0 && Global_89836.f_288 == iVar9)
		{
			return 1;
		}
	}
	return 0;
}

bool func_260(int iParam0, char* sParam1)
{
	StringCopy(sParam1, "", 32);
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "v_michael", 32);
			break;
		
		case 5:
			StringCopy(sParam1, "v_franklins", 32);
			break;
		
		case 6:
			StringCopy(sParam1, "v_franklinshouse", 32);
			break;
		
		case 2:
		case 1:
			if (unk_0x70AE5EB0F832620B("TrevorsTrailer"))
			{
				StringCopy(sParam1, "v_trailer", 32);
			}
			else if (unk_0x70AE5EB0F832620B("TrevorsTrailerTidy"))
			{
				StringCopy(sParam1, "V_TrailerTIDY", 32);
			}
			else if (unk_0x70AE5EB0F832620B("TrevorsTrailerTrash"))
			{
				StringCopy(sParam1, "V_TrailerTRASH", 32);
			}
			break;
		
		case 3:
			StringCopy(sParam1, "v_trevors", 32);
			break;
		
		case 4:
			StringCopy(sParam1, "v_strip3", 32);
			break;
		
		case 8:
		case 7:
		case 9:
			StringCopy(sParam1, "v_psycheoffice", 32);
			break;
	}
	return !unk_0xA858564DC37EED5E(sParam1, "");
}

bool func_261(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return unk_0x61D8FEAF64881CDA(Global_97173.f_16795[iParam0 /*6*/], 3);
}

bool func_262(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return unk_0x61D8FEAF64881CDA(Global_97173.f_16795[iParam0 /*6*/], 2);
}

bool func_263(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return unk_0x61D8FEAF64881CDA(Global_97173.f_16795[iParam0 /*6*/], 0);
}

int func_264(int iParam0)
{
	if (func_222(iParam0))
	{
		return 0;
	}
	else if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
	{
		if (unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) != 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_265()
{
	func_287("Running end routines.");
	Global_96891 = (Global_96891 - 1);
}

int func_266(int iParam0, struct<3> Param1, float fParam4)
{
	int iVar0[4];
	int iVar5;
	
	if (func_89() == 0)
	{
		if (func_267(2, Param1, fParam4, iParam0))
		{
			return 1;
		}
	}
	else if (func_89() == 2)
	{
		if (func_267(3, Param1, fParam4, iParam0))
		{
			return 1;
		}
	}
	iVar0[0] = 4;
	iVar0[1] = 5;
	iVar0[2] = 6;
	iVar0[3] = 7;
	iVar5 = 0;
	while (iVar5 < iVar0)
	{
		if (func_267(iVar0[iVar5], Param1, fParam4, iParam0))
		{
			iVar5 = iVar0;
			return 1;
		}
		iVar5++;
	}
	return 0;
}

int func_267(int iParam0, struct<3> Param1, float fParam4, var uParam5)
{
	int iVar0;
	struct<7> Var1;
	
	iVar0 = 0;
	func_94(iParam0, &Var1);
	if (func_268(Var1.f_6, Param1, fParam4))
	{
		if (unk_0x61D8FEAF64881CDA(Global_97173.f_16795[iParam0 /*6*/], 0))
		{
			if (!unk_0x61D8FEAF64881CDA(Global_97173.f_16795[iParam0 /*6*/], 3))
			{
				iVar0 = 1;
			}
		}
		if (func_227(iParam0))
		{
			iVar0 = 1;
		}
	}
	if (iVar0 == 1)
	{
		*uParam5 = iParam0;
		StringCopy(&(uParam5->f_1), Var1.f_0, 32);
		return 1;
	}
	return 0;
}

int func_268(struct<3> Param0, struct<3> Param3, float fParam6)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (unk_0x75E01E8585722F89((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x75E01E8585722F89((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			if (unk_0x75E01E8585722F89((Param0.f_2 - Param3.f_2)) <= fParam6)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_269(int iParam0, bool bParam1)
{
	char* sVar0;
	
	if (bParam1)
	{
		func_287("SCRIPT TERMINATING: Cleaning up entities in Launcher");
		func_231(iParam0);
		func_276(iParam0, 0, 0, 0);
	}
	if (unk_0xD361727124133DF3(uLocal_95))
	{
		unk_0xA0A65B537B1F11EC(&uLocal_95);
	}
	if (iLocal_92 != -1)
	{
		func_287("SCRIPT TERMINATING: Ending off-mission cutscene request");
		func_188(&iLocal_92);
	}
	if (*iParam0 == 6)
	{
		unk_0x1D6153ECFEB26B2A(uLocal_94, 0);
	}
	func_275(&(iParam0->f_48));
	switch (*iParam0)
	{
		case 4:
			sVar0 = "BARRY3_AMB";
			break;
	}
	func_270(sVar0);
	if (bParam1)
	{
		func_189(*iParam0);
	}
	func_265();
	func_287("SCRIPT TERMINATED");
	unk_0x883793591E631A3B();
}

void func_270(char* sParam0)
{
	if (!unk_0x8FA72E132AAFA62F(sParam0))
	{
		if (func_273(sParam0))
		{
			func_271();
		}
	}
}

void func_271()
{
	Global_14558 = 0;
	func_272();
}

void func_272()
{
	unk_0xA2A4AD85BA2F7ADD();
	Global_16703 = 0;
	if (unk_0xF611D1BB58990143())
	{
		unk_0xD858EC6FECDB4B3F(0);
		Global_15692 = 6;
	}
}

int func_273(char* sParam0)
{
	struct<6> Var0;
	
	Var0 = { func_274() };
	if (unk_0xA858564DC37EED5E(&Var0, uParam0))
	{
		return 1;
	}
	return 0;
}

struct<6> func_274()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15692 == 4)
	{
		return Global_15311;
	}
	return Var0;
}

int func_275(var uParam0)
{
	if (func_194(uParam0))
	{
		if (unk_0xCE40391AB65FE305(*uParam0))
		{
			unk_0xA878656BC39BBC51(*uParam0);
			*uParam0 = "";
			uParam0->f_1 = "";
			return 1;
		}
	}
	return 0;
}

void func_276(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_283(uParam0, iParam1);
	func_280(uParam0, bParam2);
	func_277(uParam0, bParam3);
}

void func_277(var uParam0, bool bParam1)
{
	func_278(&(uParam0->f_41), bParam1);
}

void func_278(var uParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (bParam1)
		{
			func_196(uParam0[iVar0]);
		}
		else
		{
			func_279(uParam0[iVar0], 0);
		}
		iVar0++;
	}
}

void func_279(var uParam0, bool bParam1)
{
	if (unk_0xFD68187442384158(*uParam0))
	{
		if (unk_0x42B70344077B22B9(*uParam0))
		{
			unk_0x5B97F41A7BE54877(*uParam0, 1, 1);
		}
		if (!bParam1)
		{
			unk_0x05DADA1340CBB893(uParam0);
		}
		else
		{
			unk_0x0D693FF0257B8CE4(*uParam0);
		}
	}
}

void func_280(var uParam0, bool bParam1)
{
	func_281(&(uParam0->f_35), bParam1);
}

void func_281(var uParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (bParam1)
		{
			func_241(uParam0[iVar0]);
		}
		else
		{
			func_282(uParam0[iVar0]);
		}
		iVar0++;
	}
}

void func_282(var uParam0)
{
	if (unk_0xFD68187442384158(*uParam0))
	{
		unk_0xE5D56342B0FF1D0D(*uParam0);
		if (unk_0x73E2404DC70203CD(*uParam0) && unk_0x51BC2FF711F8CF71(*uParam0, 1))
		{
			unk_0xB67623A401171555(uParam0);
		}
	}
}

void func_283(var uParam0, int iParam1)
{
	func_284(&(uParam0->f_28), iParam1);
}

void func_284(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (iParam1 == 1)
		{
			func_245(uParam0[iVar0]);
		}
		else
		{
			func_285(uParam0[iVar0], 0, 1, 0);
		}
		iVar0++;
	}
}

void func_285(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xFD68187442384158(*uParam0))
	{
		if (!unk_0x9F94F2CFDCA78C55(*uParam0))
		{
			unk_0x3C2614E45AB2F499(*uParam0, 0);
			if (iParam3 == 0)
			{
				unk_0x1E61DAA6A0EEC652(*uParam0);
			}
			unk_0xA1E4BA3B17C6D931(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0x2DC5B31EBB810396(*uParam0, 0);
			}
		}
		unk_0xCA4DD92F1F2931F3(uParam0);
	}
}

void func_286(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_34871)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_34870 = 0;
	Global_34872 = 0;
	Global_34909 = 15;
	Global_54569 = 0;
	Global_54570 = 0;
}

void func_287(char* sParam0)
{
	if (!unk_0x8FA72E132AAFA62F(sParam0))
	{
	}
}

void func_288(var uParam0)
{
	*uParam0 = -1;
	StringCopy(&(uParam0->f_1), "", 32);
	uParam0->f_15 = 12f;
	uParam0->f_16 = 6;
	uParam0->f_25 = 0;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
}

void func_289()
{
	func_287("Running start routines.");
	Global_96891++;
}

int func_290(int iParam0)
{
	if (!func_36(iParam0))
	{
		return Global_97173.f_29699[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

