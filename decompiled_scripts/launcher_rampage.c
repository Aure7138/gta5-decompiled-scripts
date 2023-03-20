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
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	struct<4> Local_37[10];
	bool bLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	int iLocal_101 = 0;
	float fLocal_102 = 0f;
	float fLocal_103 = 0f;
	float fLocal_104 = 0f;
	float fLocal_105 = 0f;
	float fLocal_106 = 0f;
	var uLocal_107 = 0;
	struct<3> Local_108 = { 0, 0, 0 } ;
	struct<3> Local_111 = { 0, 0, 0 } ;
	var uLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	var uLocal_117[3] = { 0, 0, 0 };
	var uLocal_121 = 16;
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
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	int iLocal_286 = 0;
	var uLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	var uLocal_294 = 3;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	struct<3> Local_298 = { 0, 0, 0 } ;
	int iLocal_301 = 0;
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
	iLocal_35 = 3;
	iLocal_82 = 1;
	iLocal_83 = 65;
	iLocal_84 = 49;
	iLocal_85 = 64;
	uLocal_89 = unk_0xCFFCC3E6689F1F45();
	uLocal_90 = unk_0xA655262EB9B9A8C4();
	fLocal_102 = -0.05f;
	fLocal_103 = 0.92f;
	fLocal_104 = 1.94f;
	fLocal_105 = 2.99f;
	fLocal_106 = 3.7f;
	Local_108 = { 1180.969f, -402.381f, 67.2f };
	Local_111 = { 5f, 0f, 57.33f };
	iLocal_115 = -1;
	iLocal_288 = 77;
	iLocal_289 = -1;
	iLocal_290 = -1;
	iLocal_291 = 1;
	iLocal_292 = 1;
	iLocal_293 = 1;
	unk_0x038A1DC00F7AFAEF(1);
	func_336();
	Var0.f_17 = 2;
	Var0.f_28 = 6;
	Var0.f_35 = 5;
	Var0.f_41 = 6;
	Var61 = { ScriptParam_0.f_1[0 /*3*/] };
	Global_88711 = 1;
	func_335(&Var0);
	if (unk_0x24862A9CDC8F8874(83))
	{
		func_334(" Force cleanup [TERMINATING]");
		func_319(&Var0, 1);
	}
	if (!func_318(108))
	{
		func_208(&Var0, Var61);
	}
	else
	{
		func_1(&Var0, Var61);
	}
}

void func_1(var* uParam0, struct<3> Param1)
{
	while (true)
	{
		if (!unk_0xCAA967E16BBE69CE())
		{
			func_334("  Ambient - Player isn't within World Point Range");
			func_319(uParam0, 1);
		}
		if (func_207() != 2)
		{
			func_334("  Ambient - Player is not Trevor");
			func_319(uParam0, 1);
		}
		iLocal_290 = func_206(5f);
		if (iLocal_290 != -1)
		{
			if (!func_200())
			{
				*uParam0 = func_199(iLocal_290);
				StringCopy(&(uParam0->f_1), func_198(iLocal_290), 32);
				uParam0->f_16 = 3;
				uParam0->f_15 = 5f;
				if (*uParam0 == -1)
				{
					func_334("  -  Ambient Rampage Mission ID is invalid");
					func_319(uParam0, 1);
				}
				if (unk_0xB8A06E7E729EED0A(&(uParam0->f_1)))
				{
					func_334("  -  Ambient Rampage Mission ID is invalid");
					func_319(uParam0, 1);
				}
				unk_0x59A0729D503ED758(&(Global_100976.f_17208[*uParam0 /*6*/]), 0);
				unk_0x59A0729D503ED758(&(Global_100976.f_17208[*uParam0 /*6*/]), 2);
				unk_0x77621132305B133B(&(Global_100976.f_17208[*uParam0 /*6*/]), 3);
				Global_100063[*uParam0 /*10*/].f_1 = 0;
				if (!func_197(0))
				{
					Global_100063[*uParam0 /*10*/].f_3 = 0;
				}
				if (!func_189(*uParam0))
				{
					func_334(" RC Ambient Can't Launch - Can_RC_Launch Faled");
					func_319(uParam0, 1);
				}
				else if (!func_5(uParam0))
				{
					func_334(" RC Ambient Can't Launch - Launch_RC_Mission Failed");
					func_319(uParam0, 1);
				}
				else
				{
					func_4(500, 1);
					unk_0x98371F41D43CDFA9(Param1, uParam0->f_15, 1, 0, 0, 0);
					func_334(" RC Ambient Launcher Waiting To Terminate");
					Global_100063[*uParam0 /*10*/].f_1 = 0;
					if (func_3(uParam0))
					{
						func_334(" Ambient - Ready To Terminate");
						func_319(uParam0, 0);
					}
				}
			}
		}
		else
		{
			if (func_2("RAMP_HELP_TRIG"))
			{
				unk_0x9F4AA6F234E8A860(1);
			}
			iLocal_293 = 0;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

bool func_2(char* sParam0)
{
	unk_0xD90D7D16FDE685B6(sParam0);
	return unk_0x699790DC9A5E5D9A(0);
}

int func_3(var* uParam0)
{
	while (!Global_100063[*uParam0 /*10*/])
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	return 1;
}

void func_4(int iParam0, bool bParam1)
{
	if (unk_0xB66DD474AA9E764E())
	{
		if (!unk_0xE71FCE10773CF7B0())
		{
			unk_0x00F9843B9C06C2E9(iParam0);
			if (bParam1)
			{
				while (!unk_0xD5DFCA69ACAA20E3())
				{
					unk_0x4EDE34FBADD967A6(0);
				}
			}
		}
	}
}

int func_5(var* uParam0)
{
	struct<4> Var0;
	char* sVar32;
	
	if (!func_188())
	{
		while (!func_183(*uParam0))
		{
			if (func_182(*uParam0))
			{
				func_174();
			}
			if (!func_131(uParam0, *uParam0 != 2))
			{
				func_334("LAUNCH_RC_MISSION - NOT IS_RC_FINE_AND_IN_RANGE() [TERMINATING]");
				return 0;
			}
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	if (func_130())
	{
		func_128();
	}
	if (!func_98(uParam0))
	{
		func_334("STEP_7_COMMON_LaunchMission - Trying to launch a null script string name");
		return 0;
	}
	func_95(*uParam0, &Var0);
	MemCopy(&sVar32, {func_94(*uParam0)}, 4);
	func_93(&sVar32, Var0.f_3, 0);
	func_92(*uParam0);
	if (!func_188())
	{
		if (uParam0->f_16 == 2)
		{
			func_25(&(uParam0->f_1), 0);
		}
		else
		{
			func_25(&(uParam0->f_1), 1);
		}
	}
	func_6(*uParam0, Var0.f_0);
	return 1;
}

void func_6(int iParam0, char* sParam1)
{
	func_24(sParam1);
	unk_0x77621132305B133B(&(Global_100976.f_17208[iParam0 /*6*/]), 5);
	if (unk_0xCBC8FFE55DC722B5(joaat("mission_stat_watcher")) > 0)
	{
		while (unk_0xCBC8FFE55DC722B5(joaat("mission_stat_watcher")) > 0)
		{
			func_22();
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	if (unk_0xCBC8FFE55DC722B5(joaat("mission_stat_watcher")) < 1)
	{
		Global_55660 = 0;
		unk_0xE3B4E8C914195E94("mission_stat_watcher");
		while (!unk_0xD838CD843F6FE18B("mission_stat_watcher"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xE81651AD79516E48("mission_stat_watcher", 1828);
		unk_0x996557D48454AE40("mission_stat_watcher");
	}
	while (!unk_0xDCC86F723E82125E(Global_100976.f_17208[iParam0 /*6*/], 5))
	{
		if (unk_0xCBC8FFE55DC722B5(joaat("mission_stat_watcher")) > 0)
		{
			unk_0x59A0729D503ED758(&(Global_100976.f_17208[iParam0 /*6*/]), 5);
		}
	}
	func_7(iParam0);
}

void func_7(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_55657 == 1)
	{
		func_21();
		Global_55657 = 0;
		if (Global_55652)
		{
			return;
		}
	}
	if (Global_3)
	{
		Global_55660 = 1;
		func_13();
		return;
	}
	MemCopy(&Global_55674, {func_12(iParam0)}, 4);
	Global_55662 = 0;
	Global_55661 = 0;
	switch (iParam0)
	{
		case 1:
		case 9:
			Global_55649 = 1;
			Global_55652 = 1;
			Global_55655 = 1;
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
			Global_55660 = 1;
			Global_55661 = 1;
			func_13();
			func_22();
			return;
			break;
	}
	iVar0 = Global_67904;
	Global_67904 = 1;
	iVar1 = Global_67905;
	Global_67905 = iParam0;
	if (!Global_55649)
	{
		if ((Global_67905 != iVar1 || Global_67754 == 0) || iVar0 != Global_67904)
		{
			Global_25364 = 0;
			func_13();
			func_9(iParam0);
		}
		else
		{
			Global_55652 = 1;
		}
	}
	Global_55687 = unk_0x693EBB4F13506457();
	func_8();
	Global_55659 = 0;
}

void func_8()
{
	int iVar0;
	
	if (!Global_55656)
	{
		return;
	}
	if (Global_67754 == 0)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67754)
	{
		switch (Global_55884[Global_67755[iVar0 /*9*/] /*13*/])
		{
			case 1:
			case 9:
				Global_67755[iVar0 /*9*/].f_3 = 1;
				break;
			
			case 4:
				if (Global_55667)
				{
					Global_67755[iVar0 /*9*/].f_3 = 1;
				}
				break;
			
			case 6:
				if (Global_55884[Global_67755[iVar0 /*9*/] /*13*/].f_3)
				{
					if (Global_67755[iVar0 /*9*/].f_1 != 0)
					{
						Global_67755[iVar0 /*9*/].f_3 = 1;
					}
				}
				break;
		}
		iVar0++;
	}
	Global_55656 = 0;
}

void func_9(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			func_10(741);
			func_10(742);
			return;
		
		case 3:
			func_10(743);
			func_10(744);
			return;
		
		case 5:
			func_10(745);
			func_10(746);
			return;
		
		case 6:
			func_10(747);
			func_10(748);
			return;
		
		case 8:
			func_10(749);
			return;
		
		case 12:
			func_10(750);
			return;
		
		case 14:
			func_10(751);
			func_10(752);
			return;
		
		case 16:
			func_10(753);
			func_10(754);
			return;
		
		case 17:
			func_10(755);
			func_10(756);
			func_10(757);
			return;
		
		case 18:
			func_10(758);
			func_10(759);
			return;
		
		case 19:
			func_10(760);
			func_10(761);
			return;
		
		case 20:
			func_10(762);
			return;
		
		case 21:
			func_10(763);
			return;
		
		case 22:
			func_10(764);
			func_10(765);
			return;
		
		case 23:
			func_10(766);
			return;
		
		case 25:
			func_10(767);
			func_10(768);
			func_10(769);
			return;
		
		case 26:
			func_10(770);
			func_10(771);
			return;
		
		case 28:
			func_10(772);
			func_10(773);
			return;
		
		case 29:
			func_10(774);
			func_10(775);
			return;
		
		case 30:
			func_10(776);
			func_10(777);
			return;
		
		case 32:
			func_10(778);
			func_10(779);
			return;
		
		case 33:
			func_10(780);
			func_10(781);
			func_10(782);
			return;
		
		case 34:
			func_10(783);
			func_10(784);
			return;
		
		case 38:
			func_10(785);
			func_10(786);
			return;
		
		case 39:
			func_10(787);
			func_10(788);
			return;
		
		case 40:
			func_10(789);
			return;
		
		case 41:
			func_10(790);
			func_10(791);
			func_10(792);
			return;
		
		case 42:
			func_10(793);
			func_10(794);
			func_10(795);
			return;
		
		case 43:
			func_10(796);
			func_10(797);
			return;
		
		case 46:
			func_10(798);
			func_10(799);
			return;
		
		default:
	}
	switch (iParam0)
	{
		case 47:
			func_10(800);
			func_10(801);
			return;
		
		case 49:
			func_10(802);
			func_10(803);
			return;
		
		case 50:
			func_10(804);
			func_10(805);
			return;
		
		case 51:
			func_10(806);
			return;
		
		case 57:
			func_10(807);
			func_10(808);
			func_10(809);
			return;
		
		case 58:
			func_10(828);
			func_10(829);
			func_10(830);
			return;
		
		case 59:
			func_10(831);
			func_10(832);
			func_10(833);
			return;
		
		case 60:
			func_10(834);
			func_10(835);
			func_10(836);
			return;
		
		case 61:
			func_10(837);
			func_10(838);
			func_10(839);
			return;
		
		case 62:
			func_10(840);
			func_10(841);
			func_10(842);
			return;
		
		case 24:
			func_10(843);
			func_10(844);
			func_10(845);
			return;
		
		default:
	}
}

void func_10(int iParam0)
{
	Global_55652 = 1;
	Global_55655 = 1;
	if (Global_67754 > 15)
	{
		return;
	}
	func_11(Global_67754);
	Global_67755[Global_67754 /*9*/] = iParam0;
	Global_67754++;
	if (Global_55884[iParam0 /*13*/] == 16)
	{
		Global_67906 = 1;
	}
}

void func_11(int iParam0)
{
	Global_67755[iParam0 /*9*/].f_1 = 0;
	Global_67755[iParam0 /*9*/].f_2 = 0f;
	Global_67755[iParam0 /*9*/].f_3 = 0;
	Global_67755[iParam0 /*9*/].f_4 = 0;
}

struct<2> func_12(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_94(iParam0) };
	if (unk_0xB8A06E7E729EED0A(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

void func_13()
{
	if (Global_55659)
	{
		return;
	}
	Global_55668 = 0;
	Global_67754 = 0;
	Global_55670 = 0;
	if (Global_55667)
	{
	}
	Global_55667 = 0;
	func_20(0);
	func_19();
	Global_67906 = 0;
	Global_55658 = 1;
	func_17();
	func_16();
	func_15();
	func_14();
	Global_55649 = 0;
	Global_55679 = 0;
	Global_55687 = -1;
}

void func_14()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_67941[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	Global_67950 = 0;
}

void func_15()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		Global_67907[iVar0 /*2*/] = 0;
		Global_67907[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	Global_67940 = 0;
}

void func_16()
{
	Global_55818 = 0;
}

void func_17()
{
	Global_55678 = 0;
	Global_55682 = func_18(joaat("sp0_shots"));
	Global_55681 = func_18(joaat("sp0_hits"));
	Global_55684 = func_18(joaat("sp1_shots"));
	Global_55683 = func_18(joaat("sp1_hits"));
	Global_55686 = func_18(joaat("sp2_shots"));
	Global_55685 = func_18(joaat("sp2_hits"));
}

var func_18(int iParam0)
{
	var uVar0;
	
	unk_0x5F0618A5FDAD55C4(iParam0, &uVar0, -1);
	return uVar0;
}

void func_19()
{
	int iVar0;
	
	Global_55688 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		Global_55689[iVar0 /*2*/] = 0;
		iVar0++;
	}
}

void func_20(int iParam0)
{
	Global_69577 = iParam0;
	Global_69578 = iParam0;
}

void func_21()
{
	int iVar0;
	
	Global_55657 = 1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67754)
	{
		Global_67755[iVar0 /*9*/].f_3 = 2;
		iVar0++;
	}
	if (Global_55667)
	{
	}
	Global_55667 = 0;
}

void func_22()
{
	if (unk_0xCBC8FFE55DC722B5(joaat("mission_stat_watcher")) > 0)
	{
		if (func_23())
		{
			if (Global_55654 && !Global_55653)
			{
				Global_55654 = 0;
				unk_0x64E6498F388E05B5("mission_stat_watcher");
			}
		}
		else
		{
			unk_0x64E6498F388E05B5("mission_stat_watcher");
		}
	}
}

int func_23()
{
	if (unk_0xCBC8FFE55DC722B5(joaat("mission_stat_watcher")) < 1)
	{
		return 0;
	}
	if (!Global_55652)
	{
		return 0;
	}
	return Global_55664;
}

void func_24(char* sParam0)
{
	if (unk_0xF8D041B05C3D1FD4(sParam0, sParam0))
	{
	}
}

void func_25(char[4] cParam0, int iParam1)
{
	unk_0x77621132305B133B(&(Global_91106.f_20), 17);
	func_26(cParam0, iParam1, 0);
}

void func_26(char[4] cParam0, int iParam1, int iParam2)
{
	if (Global_91106 != 10 && Global_91106 != 9)
	{
		StringCopy(&Global_92910, cParam0, 32);
		func_28(&Global_92918, cParam0, 0, "Start", iParam1, iParam2);
		func_27();
		Global_85617 = 0;
	}
}

void func_27()
{
	int iVar0;
	int iVar1;
	
	Global_95323 = Global_92918;
	Global_95323.f_1 = Global_92918.f_1;
	Global_95323.f_6 = Global_92918.f_6;
	Global_95323.f_7 = Global_92918.f_7;
	Global_95323.f_8 = Global_92918.f_8;
	Global_95323.f_2 = Global_92918.f_2;
	Global_95323.f_3 = Global_92918.f_3;
	Global_95323.f_4 = Global_92918.f_4;
	Global_95323.f_5 = Global_92918.f_5;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		Global_95323.f_9[iVar1] = Global_92918.f_9[iVar1];
		Global_95323.f_13[iVar1] = Global_92918.f_13[iVar1];
		Global_95323.f_17[iVar1] = Global_92918.f_17[iVar1];
		Global_95323.f_21[iVar1] = Global_92918.f_21[iVar1];
		Global_95323.f_25[0 /*295*/][iVar1 /*98*/] = { Global_92918.f_25[0 /*295*/][iVar1 /*98*/] };
		Global_95323.f_25[1 /*295*/][iVar1 /*98*/] = { Global_92918.f_25[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 < 12)
		{
			Global_95323.f_616[iVar1 /*65*/][iVar0] = Global_92918.f_616[iVar1 /*65*/][iVar0];
			Global_95323.f_616[iVar1 /*65*/].f_13[iVar0] = Global_92918.f_616[iVar1 /*65*/].f_13[iVar0];
			Global_95323.f_616[iVar1 /*65*/].f_26[iVar0] = Global_92918.f_616[iVar1 /*65*/].f_26[iVar0];
			iVar0++;
		}
		Global_95323.f_616[iVar1 /*65*/].f_59 = Global_92918.f_616[iVar1 /*65*/].f_59;
		Global_95323.f_616[iVar1 /*65*/].f_60 = Global_92918.f_616[iVar1 /*65*/].f_60;
		Global_95323.f_616[iVar1 /*65*/].f_61 = Global_92918.f_616[iVar1 /*65*/].f_61;
		Global_95323.f_616[iVar1 /*65*/].f_62 = Global_92918.f_616[iVar1 /*65*/].f_62;
		Global_95323.f_616[iVar1 /*65*/].f_63 = Global_92918.f_616[iVar1 /*65*/].f_63;
		Global_95323.f_616[iVar1 /*65*/].f_64 = Global_92918.f_616[iVar1 /*65*/].f_64;
		iVar0 = 0;
		while (iVar0 < 9)
		{
			Global_95323.f_616[iVar1 /*65*/].f_39[iVar0] = Global_92918.f_616[iVar1 /*65*/].f_39[iVar0];
			Global_95323.f_616[iVar1 /*65*/].f_49[iVar0] = Global_92918.f_616[iVar1 /*65*/].f_49[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			Global_95323.f_812[iVar1 /*284*/][iVar0 /*3*/] = { Global_92918.f_812[iVar1 /*284*/][iVar0 /*3*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			Global_95323.f_812[iVar1 /*284*/].f_133[iVar0 /*3*/] = { Global_92918.f_812[iVar1 /*284*/].f_133[iVar0 /*3*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			Global_95323.f_1665[iVar1 /*32*/][iVar0] = Global_92918.f_1665[iVar1 /*32*/][iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Global_95323.f_1665[iVar1 /*32*/].f_5[iVar0] = Global_92918.f_1665[iVar1 /*32*/].f_5[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 15)
		{
			Global_95323.f_1665[iVar1 /*32*/].f_16[iVar0] = Global_92918.f_1665[iVar1 /*32*/].f_16[iVar0];
			iVar0++;
		}
		Global_95323.f_1762[iVar1] = Global_92918.f_1762[iVar1];
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			Global_95323.f_2259[iVar1 /*15*/][iVar0] = Global_92918.f_2259[iVar1 /*15*/][iVar0];
			Global_95323.f_2259[iVar1 /*15*/].f_5[iVar0] = Global_92918.f_2259[iVar1 /*15*/].f_5[iVar0];
			Global_95323.f_2259[iVar1 /*15*/].f_10[iVar0] = Global_92918.f_2259[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			Global_95323.f_1766[iVar1 /*164*/][iVar0] = Global_92918.f_1766[iVar1 /*164*/][iVar0];
			Global_95323.f_1766[iVar1 /*164*/].f_4[iVar0] = Global_92918.f_1766[iVar1 /*164*/].f_4[iVar0];
			Global_95323.f_1766[iVar1 /*164*/].f_8[iVar0] = Global_92918.f_1766[iVar1 /*164*/].f_8[iVar0];
			Global_95323.f_1766[iVar1 /*164*/].f_12[iVar0] = Global_92918.f_1766[iVar1 /*164*/].f_12[iVar0];
			Global_95323.f_1766[iVar1 /*164*/].f_16[iVar0] = Global_92918.f_1766[iVar1 /*164*/].f_16[iVar0];
			Global_95323.f_1766[iVar1 /*164*/].f_20[iVar0] = Global_92918.f_1766[iVar1 /*164*/].f_20[iVar0];
			Global_95323.f_1766[iVar1 /*164*/].f_24[iVar0] = Global_92918.f_1766[iVar1 /*164*/].f_24[iVar0];
			Global_95323.f_1766[iVar1 /*164*/].f_28[iVar0] = Global_92918.f_1766[iVar1 /*164*/].f_28[iVar0];
			Global_95323.f_1766[iVar1 /*164*/].f_32[iVar0] = Global_92918.f_1766[iVar1 /*164*/].f_32[iVar0];
			Global_95323.f_1766[iVar1 /*164*/].f_36[iVar0] = Global_92918.f_1766[iVar1 /*164*/].f_36[iVar0];
			Global_95323.f_1766[iVar1 /*164*/].f_40[iVar0] = Global_92918.f_1766[iVar1 /*164*/].f_40[iVar0];
			Global_95323.f_1766[iVar1 /*164*/].f_44[iVar0] = Global_92918.f_1766[iVar1 /*164*/].f_44[iVar0];
			Global_95323.f_1766[iVar1 /*164*/].f_48[iVar0] = Global_92918.f_1766[iVar1 /*164*/].f_48[iVar0];
			Global_95323.f_1766[iVar1 /*164*/].f_52[iVar0] = Global_92918.f_1766[iVar1 /*164*/].f_52[iVar0];
			Global_95323.f_1766[iVar1 /*164*/].f_56[iVar0] = Global_92918.f_1766[iVar1 /*164*/].f_56[iVar0];
			Global_95323.f_1766[iVar1 /*164*/].f_60[iVar0] = Global_92918.f_1766[iVar1 /*164*/].f_60[iVar0];
			Global_95323.f_1766[iVar1 /*164*/].f_64[iVar0] = Global_92918.f_1766[iVar1 /*164*/].f_64[iVar0];
			Global_95323.f_1766[iVar1 /*164*/].f_68[iVar0] = Global_92918.f_1766[iVar1 /*164*/].f_68[iVar0];
			Global_95323.f_1766[iVar1 /*164*/].f_72[iVar0] = Global_92918.f_1766[iVar1 /*164*/].f_72[iVar0];
			Global_95323.f_1766[iVar1 /*164*/].f_76[iVar0] = Global_92918.f_1766[iVar1 /*164*/].f_76[iVar0];
			Global_95323.f_1766[iVar1 /*164*/].f_80[iVar0] = Global_92918.f_1766[iVar1 /*164*/].f_80[iVar0];
			Global_95323.f_1766[iVar1 /*164*/].f_84[iVar0] = Global_92918.f_1766[iVar1 /*164*/].f_84[iVar0];
			Global_95323.f_1766[iVar1 /*164*/].f_88[iVar0] = Global_92918.f_1766[iVar1 /*164*/].f_88[iVar0];
			Global_95323.f_1766[iVar1 /*164*/].f_92[iVar0] = Global_92918.f_1766[iVar1 /*164*/].f_92[iVar0];
			Global_95323.f_1766[iVar1 /*164*/].f_96[iVar0] = Global_92918.f_1766[iVar1 /*164*/].f_96[iVar0];
			Global_95323.f_1766[iVar1 /*164*/].f_100[iVar0] = Global_92918.f_1766[iVar1 /*164*/].f_100[iVar0];
			Global_95323.f_1766[iVar1 /*164*/].f_104[iVar0] = Global_92918.f_1766[iVar1 /*164*/].f_104[iVar0];
			Global_95323.f_1766[iVar1 /*164*/].f_108[iVar0] = Global_92918.f_1766[iVar1 /*164*/].f_108[iVar0];
			Global_95323.f_1766[iVar1 /*164*/].f_112[iVar0] = Global_92918.f_1766[iVar1 /*164*/].f_112[iVar0];
			Global_95323.f_1766[iVar1 /*164*/].f_116[iVar0] = Global_92918.f_1766[iVar1 /*164*/].f_116[iVar0];
			Global_95323.f_1766[iVar1 /*164*/].f_120[iVar0] = Global_92918.f_1766[iVar1 /*164*/].f_120[iVar0];
			Global_95323.f_1766[iVar1 /*164*/].f_124[iVar0] = Global_92918.f_1766[iVar1 /*164*/].f_124[iVar0];
			Global_95323.f_1766[iVar1 /*164*/].f_128[iVar0] = Global_92918.f_1766[iVar1 /*164*/].f_128[iVar0];
			Global_95323.f_1766[iVar1 /*164*/].f_132[iVar0] = Global_92918.f_1766[iVar1 /*164*/].f_132[iVar0];
			Global_95323.f_1766[iVar1 /*164*/].f_136[iVar0] = Global_92918.f_1766[iVar1 /*164*/].f_136[iVar0];
			Global_95323.f_1766[iVar1 /*164*/].f_140[iVar0] = Global_92918.f_1766[iVar1 /*164*/].f_140[iVar0];
			Global_95323.f_1766[iVar1 /*164*/].f_144[iVar0] = Global_92918.f_1766[iVar1 /*164*/].f_144[iVar0];
			Global_95323.f_1766[iVar1 /*164*/].f_148[iVar0] = Global_92918.f_1766[iVar1 /*164*/].f_148[iVar0];
			Global_95323.f_1766[iVar1 /*164*/].f_152[iVar0] = Global_92918.f_1766[iVar1 /*164*/].f_152[iVar0];
			Global_95323.f_1766[iVar1 /*164*/].f_156[iVar0] = Global_92918.f_1766[iVar1 /*164*/].f_156[iVar0];
			Global_95323.f_1766[iVar1 /*164*/].f_160[iVar0] = Global_92918.f_1766[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	Global_95323.f_2305 = { Global_92918.f_2305 };
	Global_95323.f_2305.f_3 = Global_92918.f_2305.f_3;
	Global_95323.f_2311 = { Global_92918.f_2311 };
	Global_95323.f_2311.f_3 = { Global_92918.f_2311.f_3 };
	Global_95323.f_2311.f_6 = Global_92918.f_2311.f_6;
	Global_95323.f_2311.f_8 = Global_95323.f_2311.f_8;
	Global_95323.f_2311.f_7 = Global_92918.f_2311.f_7;
	Global_95323.f_2311.f_9 = Global_92918.f_2311.f_9;
	Global_95323.f_2311.f_11 = Global_92918.f_2311.f_11;
	Global_95323.f_2311.f_10 = Global_92918.f_2311.f_10;
	Global_95323.f_2311.f_12 = Global_92918.f_2311.f_12;
	Global_95323.f_2311.f_12.f_1 = { Global_92918.f_2311.f_12.f_1 };
	Global_95323.f_2311.f_12.f_5 = Global_92918.f_2311.f_12.f_5;
	Global_95323.f_2311.f_12.f_6 = Global_92918.f_2311.f_12.f_6;
	Global_95323.f_2311.f_12.f_7 = Global_92918.f_2311.f_12.f_7;
	Global_95323.f_2311.f_12.f_8 = Global_92918.f_2311.f_12.f_8;
	Global_95323.f_2311.f_12.f_9 = { Global_92918.f_2311.f_12.f_9 };
	Global_95323.f_2311.f_12.f_59 = { Global_92918.f_2311.f_12.f_59 };
	Global_95323.f_2311.f_12.f_62 = Global_92918.f_2311.f_12.f_62;
	Global_95323.f_2311.f_12.f_63 = Global_92918.f_2311.f_12.f_63;
	Global_95323.f_2311.f_12.f_64 = Global_92918.f_2311.f_12.f_64;
	Global_95323.f_2311.f_12.f_65 = Global_92918.f_2311.f_12.f_65;
	Global_95323.f_2311.f_12.f_77 = Global_92918.f_2311.f_12.f_77;
	Global_95323.f_2311.f_12.f_66 = Global_92918.f_2311.f_12.f_66;
	Global_95323.f_2311.f_12.f_67 = Global_92918.f_2311.f_12.f_67;
	Global_95323.f_2311.f_12.f_68 = Global_92918.f_2311.f_12.f_68;
	Global_95323.f_2311.f_12.f_69 = Global_92918.f_2311.f_12.f_69;
	Global_95323.f_2311.f_12.f_71 = Global_92918.f_2311.f_12.f_71;
	Global_95323.f_2311.f_12.f_72 = Global_92918.f_2311.f_12.f_72;
	Global_95323.f_2311.f_12.f_73 = Global_92918.f_2311.f_12.f_73;
	Global_95323.f_2311.f_12.f_74 = Global_92918.f_2311.f_12.f_74;
	Global_95323.f_2311.f_12.f_75 = Global_92918.f_2311.f_12.f_75;
	Global_95323.f_2311.f_12.f_76 = Global_92918.f_2311.f_12.f_76;
	Global_95323.f_2401 = Global_92918.f_2401;
	Global_95323.f_2401.f_1 = Global_92918.f_2401.f_1;
	Global_95323.f_2401.f_2 = Global_92918.f_2401.f_2;
	Global_95323.f_2401.f_3 = Global_92918.f_2401.f_3;
}

void func_28(var uParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_207();
	uParam0->f_1 = func_81();
	unk_0xAEDF42A60D36F56B(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		func_66(&(uParam0->f_2305), 0);
		func_65(unk_0xC8B93D94F8954288());
		func_59(unk_0xC8B93D94F8954288(), 0);
		unk_0xA51F11E1DC7307BB(unk_0xC8B93D94F8954288(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_100976.f_1770.f_539.f_294[iVar1];
		if (iVar1 == func_56())
		{
			func_49(unk_0xC8B93D94F8954288(), &(uParam0->f_616[iVar1 /*65*/]), 1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_90896[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_90896[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_90896[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_90896[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_90896[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_90896[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_90896[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_90896[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_90896[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_90896[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*284*/][iVar0 /*3*/] = { Global_100976.f_1770.f_539.f_298[iVar1 /*284*/][iVar0 /*3*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			uParam0->f_812[iVar1 /*284*/].f_133[iVar0 /*3*/] = { Global_100976.f_1770.f_539.f_298[iVar1 /*284*/].f_133[iVar0 /*3*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				unk_0x5F0618A5FDAD55C4(joaat("sp0_weap_purch_0"), &(uParam0->f_1665[iVar1 /*32*/][0]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp0_weap_purch_1"), &(uParam0->f_1665[iVar1 /*32*/][1]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_5[0]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_5[1]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_5[2]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_5[3]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_5[4]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_16[0]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_16[1]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_16[2]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_16[3]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_16[4]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_1665[iVar1 /*32*/].f_16[5]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_1665[iVar1 /*32*/].f_16[6]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_1665[iVar1 /*32*/].f_16[7]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_1665[iVar1 /*32*/].f_16[8]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_1665[iVar1 /*32*/].f_16[9]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_1665[iVar1 /*32*/].f_16[10]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_1665[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				unk_0x5F0618A5FDAD55C4(joaat("sp1_weap_purch_0"), &(uParam0->f_1665[iVar1 /*32*/][0]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp1_weap_purch_1"), &(uParam0->f_1665[iVar1 /*32*/][1]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_5[0]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_5[1]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_5[2]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_5[3]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_5[4]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_16[0]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_16[1]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_16[2]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_16[3]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_16[4]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_1665[iVar1 /*32*/].f_16[5]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_1665[iVar1 /*32*/].f_16[6]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_1665[iVar1 /*32*/].f_16[7]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_1665[iVar1 /*32*/].f_16[8]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_1665[iVar1 /*32*/].f_16[9]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_1665[iVar1 /*32*/].f_16[10]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_1665[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				unk_0x5F0618A5FDAD55C4(joaat("sp2_weap_purch_0"), &(uParam0->f_1665[iVar1 /*32*/][0]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp2_weap_purch_1"), &(uParam0->f_1665[iVar1 /*32*/][1]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_5[0]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_5[1]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_5[2]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_5[3]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_5[4]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_16[0]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_16[1]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_16[2]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_16[3]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_16[4]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_1665[iVar1 /*32*/].f_16[5]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_1665[iVar1 /*32*/].f_16[6]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_1665[iVar1 /*32*/].f_16[7]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_1665[iVar1 /*32*/].f_16[8]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_1665[iVar1 /*32*/].f_16[9]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_1665[iVar1 /*32*/].f_16[10]), -1);
				unk_0x5F0618A5FDAD55C4(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_1665[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_100976.f_25033.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_52834[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_100976.f_1770.f_539.f_1635[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_100976.f_1770.f_539.f_1635[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2259[iVar1 /*15*/][iVar0] = Global_100976.f_1770.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2259[iVar1 /*15*/].f_5[iVar0] = Global_100976.f_1770.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2259[iVar1 /*15*/].f_10[iVar0] = Global_100976.f_1770.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_1766[iVar1 /*164*/][iVar0] = Global_100976.f_1770[iVar1 /*164*/][iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_4[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_8[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_12[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_16[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_20[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_24[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_28[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_32[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_36[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_40[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_44[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_48[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_52[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_56[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_60[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_64[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_68[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_72[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_76[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_80[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_84[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_88[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_92[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_96[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_100[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_104[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_108[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_112[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_116[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_120[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_124[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_128[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_132[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_136[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_140[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_144[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_148[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_152[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_156[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_160[iVar0] = Global_100976.f_1770[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	unk_0x5F0618A5FDAD55C4(joaat("sp0_special_ability"), &(uParam0->f_1762[0]), -1);
	unk_0x5F0618A5FDAD55C4(joaat("sp1_special_ability"), &(uParam0->f_1762[1]), -1);
	unk_0x5F0618A5FDAD55C4(joaat("sp2_special_ability"), &(uParam0->f_1762[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_30(&(uParam0->f_2311), uParam0, iParam5, 1, 1, 0);
	}
	func_29(&(uParam0->f_2401));
	sParam3 = sParam3;
	iParam2 = iParam2;
}

int func_29(var uParam0)
{
	*uParam0 = Global_87288;
	uParam0->f_1 = Global_87289;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_30(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = unk_0xC8B93D94F8954288();
	}
	if (unk_0x95CCECA3948CFE7B(iParam2))
	{
		uParam1->f_5 = func_47(iParam2);
	}
	if (func_44(iParam2, &iVar0, iParam3, iParam5))
	{
		func_31(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0x95CCECA3948CFE7B(iVar0))
	{
		if (!unk_0xB6900B8CB0ABBD2B(iVar0))
		{
			if (unk_0x6B89D299CB2A726F(iVar0, joaat("skylift")) && unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), iVar0, 0))
			{
				func_31(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_31(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (unk_0x5D42322C7DB888D0(iParam2, 0))
	{
		func_33(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_32(iParam2))
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

int func_32(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_91106.f_22[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_33(var uParam0, int iParam1, int iParam2)
{
	func_40(iParam1, &(uParam0->f_12));
	uParam0->f_7 = func_36(iParam1, 145, 0);
	uParam0->f_11 = func_35(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_34(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { unk_0x44C17CCB85A88A1F(iParam1, 1) };
		uParam0->f_6 = unk_0x59DD203239FBDCAD(iParam1);
		uParam0->f_3 = { unk_0x3A5C3B481EEBA95F(iParam1) };
		if (unk_0x8DF850DA069BF37C(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_69091 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_34(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x95CCECA3948CFE7B(Global_68186.f_484[iVar0]))
		{
			if (iParam0 == Global_68186.f_484[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_35(int iParam0)
{
	int iVar0;
	
	if (!unk_0x95CCECA3948CFE7B(iParam0))
	{
		return 145;
	}
	if (!unk_0x5D42322C7DB888D0(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x95CCECA3948CFE7B(Global_88770[iVar0]))
		{
			if (Global_88770[iVar0] == iParam0)
			{
				return Global_88780[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_36(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0x95CCECA3948CFE7B(iParam0))
	{
		return 0;
	}
	if (!unk_0x5D42322C7DB888D0(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x95CCECA3948CFE7B(Global_88770[iVar0]))
		{
			if (Global_88770[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_88780[iVar0])
				{
					if (iParam2 == 0 || unk_0x6D5BB810CC209E15(iParam0) == func_37(iParam1, iParam2))
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

int func_37(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_39(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_38(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_38(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_100976.f_7719.f_99.f_58[128] && !Global_100976.f_7719.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_100976.f_7719.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
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
			else if (Global_100976.f_7719.f_99.f_58[118])
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
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

bool func_39(int iParam0)
{
	return iParam0 < 3;
}

void func_40(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x5D42322C7DB888D0(iParam0, 0))
	{
		func_43(uParam1);
		uParam1->f_66 = unk_0x6D5BB810CC209E15(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xC51A0D06D98180EB(iParam0), 16);
		*uParam1 = unk_0x65979062393E9301(iParam0);
		unk_0xDDA7228DE9EEDB37(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0xA968D095B4F299B6(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0xD4344DD9CA88E065(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0x9D206597121A7CCB(iParam0);
		uParam1->f_67 = unk_0x847A8FEE19DF1C6D(iParam0);
		uParam1->f_69 = unk_0xA57BDD31F092CE61(iParam0);
		uParam1->f_70 = unk_0xA6BAF129343F464F(iParam0);
		unk_0x06FD411B0A723EC9(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x3B7BDBECE2C4BB25(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x890D2A0FC3456199(iParam0, 2))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 28);
		}
		if (unk_0x890D2A0FC3456199(iParam0, 3))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 29);
		}
		if (unk_0x890D2A0FC3456199(iParam0, 0))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 30);
		}
		if (unk_0x890D2A0FC3456199(iParam0, 1))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0xDFCA441625BB8A67(iParam0, 0))
		{
			uParam1->f_68 = unk_0x0033BC594211C96E(iParam0);
		}
		if (unk_0xE924C2C283992918(uParam1->f_66))
		{
			if (unk_0x3D62C266C7E526AD(iParam0))
			{
				switch (unk_0xFF4BF4EFFE3F002D(iParam0))
				{
					case 2:
					case 0:
						unk_0x77621132305B133B(&(uParam1->f_77), 23);
						unk_0x59A0729D503ED758(&(uParam1->f_77), 22);
						break;
					
					case 3:
					case 1:
						unk_0x77621132305B133B(&(uParam1->f_77), 23);
						unk_0x77621132305B133B(&(uParam1->f_77), 22);
						break;
					
					case 4:
						unk_0x59A0729D503ED758(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0x59A0729D503ED758(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x675A13D93AEAE680(iParam0))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 9);
		}
		if (unk_0x4B05424C051859E9(iParam0))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 10);
		}
		if (unk_0xEAF6FD6E4D109266(iParam0))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 13);
			unk_0xE089902DB3FDA244(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0xF518898EF441871E(iParam0))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 12);
		}
		func_42(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xDB066BBA59B7D1EC(iParam0, iVar0 + 1))
			{
				unk_0x59A0729D503ED758(&(uParam1->f_77), func_41(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x40132F2ACE5F8B93(iParam0, 0))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x77621132305B133B(&(uParam1->f_77), 11);
		}
		if (unk_0x3D32B80EFC48A92D(iParam0, "IgnoredByQuickSave") && unk_0xD903CC680ECAC86A(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x77621132305B133B(&(uParam1->f_77), 27);
		}
	}
}

int func_41(int iParam0)
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

int func_42(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x5D42322C7DB888D0(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x35C1534E81F87E96(*iParam0) == 0)
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
			if (unk_0x1AF9344BCD6B878A(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x342B167253E636DE(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xCABE66358519B3C4(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xCABE66358519B3C4(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_43(var uParam0)
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

int func_44(int iParam0, var uParam1, int iParam2, int iParam3)
{
	char* sVar0;
	
	if (unk_0x95CCECA3948CFE7B(iParam0))
	{
		if (!unk_0x2DC9BA2299B45EA6(iParam0))
		{
			if (iParam0 == unk_0xC8B93D94F8954288())
			{
				*uParam1 = unk_0x974516F979AD07BC();
			}
			else
			{
				*uParam1 = unk_0x275BEBE583A163B5(iParam0, 1);
			}
			if (unk_0x95CCECA3948CFE7B(*uParam1))
			{
				if (unk_0x5D42322C7DB888D0(*uParam1, 0))
				{
					if (iParam2 == 0 || unk_0x4F982ED5336EA899(unk_0x44C17CCB85A88A1F(*uParam1, 1), unk_0x44C17CCB85A88A1F(iParam0, 1), 1) < 100f)
					{
						if (unk_0x6B89D299CB2A726F(*uParam1, joaat("taxi")))
						{
							if (unk_0xC0ADAF0814175B68(*uParam1, -1) != iParam0 && unk_0xC0ADAF0814175B68(*uParam1, -1) != 0)
							{
								return 0;
							}
						}
						if (func_45(*uParam1, func_207(), 1))
						{
							sVar0 = unk_0xC4E68AF0B559FAC4();
							if (!unk_0xF8D041B05C3D1FD4(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!unk_0x277ECDA23D8CCEB4(iParam0, 1))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (unk_0x3D32B80EFC48A92D(*uParam1, "IgnoredByQuickSave"))
							{
								if (unk_0xD903CC680ECAC86A(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (unk_0x6B89D299CB2A726F(*uParam1, joaat("blimp")))
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

int func_45(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0x95CCECA3948CFE7B(iParam0) || !unk_0x5D42322C7DB888D0(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_46(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0xDCC86F723E82125E(Global_100976.f_5863[iVar9], 0))
		{
			if (unk_0x86C606C3A2B31739(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_46(int iParam0, int iParam1, char* sParam2, var uParam3)
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

int func_47(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x95CCECA3948CFE7B(iParam0))
	{
		iVar1 = unk_0x6D5BB810CC209E15(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_48(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_48(int iParam0)
{
	if (func_39(iParam0))
	{
		return Global_100976.f_32519[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_49(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x2DC9BA2299B45EA6(iParam0))
	{
		iVar0 = func_47(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_55(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_54(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_39(iVar0))
		{
			uParam1->f_59 = Global_100976.f_1770.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_100976.f_1770.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_100976.f_1770.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_100976.f_1770.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_100976.f_1770.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_100976.f_1770.f_539[iVar0 /*65*/].f_64;
		}
		else if (unk_0xBBAE3E0C60A8AD4B() && unk_0x6D5BB810CC209E15(iParam0) == unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()))
		{
			if (func_53(161, -1))
			{
				uParam1->f_59 = func_50(2040, Global_69176, 0);
			}
			else
			{
				uParam1->f_59 = func_50(742, Global_69176, 0);
			}
			uParam1->f_60 = func_50(743, Global_69176, 0);
			uParam1->f_61 = func_50(744, Global_69176, 0);
		}
		if (unk_0xBBAE3E0C60A8AD4B() && iParam0 == unk_0xC8B93D94F8954288())
		{
			if (func_53(161, -1))
			{
				uParam1->f_59 = func_50(2040, Global_69176, 0);
			}
			else
			{
				uParam1->f_59 = func_50(742, Global_69176, 0);
			}
		}
	}
}

int func_50(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2466774[iParam0 /*5*/][func_51(iParam1)];
	if (unk_0x5F0618A5FDAD55C4(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_51(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_52();
		if (iVar1 > -1)
		{
			Global_2466487 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2466487 = 1;
		}
	}
	return iVar0;
}

int func_52()
{
	return Global_1312746;
}

int func_53(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2486871[iParam0 /*5*/][func_51(iParam1)];
	if (unk_0xC7E465DF93CF8F2C(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_54(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_47(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0xFEBA5661B4F1602A(iParam0, iParam1);
		*uParam3 = unk_0x92A7B7367F7CD521(iParam0, iParam1);
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
				if (unk_0x01857CD66B677E58(iParam0) && unk_0x717460B5CC97C071(iParam0) != -1)
				{
					*uParam2 = unk_0x717460B5CC97C071(iParam0);
					*uParam3 = unk_0x8C6B46522DE9188B(iParam0);
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

void func_55(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_47(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x3A59BCC40A12FD28(iParam0, iParam1);
		*uParam3 = unk_0x268F3DC177BF5D38(iParam0, iParam1);
		*uParam4 = unk_0x8005AF704B3AAC41(iParam0, iParam1);
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

int func_56()
{
	func_57();
	return Global_100976.f_1770.f_539.f_3549;
}

void func_57()
{
	int iVar0;
	
	if (unk_0x95CCECA3948CFE7B(unk_0xC8B93D94F8954288()))
	{
		if (func_48(Global_100976.f_1770.f_539.f_3549) != unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()))
		{
			iVar0 = func_47(unk_0xC8B93D94F8954288());
			if (func_39(iVar0) && (!func_58(14) || Global_99928))
			{
				if (Global_100976.f_1770.f_539.f_3549 != iVar0 && func_39(Global_100976.f_1770.f_539.f_3549))
				{
					Global_100976.f_1770.f_539.f_3550 = Global_100976.f_1770.f_539.f_3549;
				}
				Global_100976.f_1770.f_539.f_3551 = iVar0;
				Global_100976.f_1770.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_100976.f_1770.f_539.f_3549 != 145)
			{
				Global_100976.f_1770.f_539.f_3551 = Global_100976.f_1770.f_539.f_3549;
			}
			return;
		}
	}
	Global_100976.f_1770.f_539.f_3549 = 145;
}

bool func_58(int iParam0)
{
	return Global_35700 == iParam0;
}

void func_59(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = func_47(iParam0);
	if (func_39(iVar0) && !unk_0x2DC9BA2299B45EA6(iParam0))
	{
		if (iParam0 == unk_0xC8B93D94F8954288())
		{
			func_60(iParam0, &(Global_100976.f_1770.f_539.f_298[iVar0 /*284*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_100976.f_1770.f_539.f_1151[iVar2 /*4*/][iVar0] = unk_0x68979DA3F0A45AD3(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0xCF1225B677633282();
					if (Global_100976.f_1770.f_539.f_1151[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_100976.f_1770.f_539.f_1184 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0xF47D44C23C049FFF(unk_0xA34E7C2A5118D638(), &uVar3);
			if (iVar0 == 0)
			{
				unk_0x071958EFED9481F5(joaat("sp0_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 1)
			{
				unk_0x071958EFED9481F5(joaat("sp1_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 2)
			{
				unk_0x071958EFED9481F5(joaat("sp2_parachute_current_tint"), uVar3, 1);
			}
		}
	}
}

void func_60(int iParam0, var uParam1)
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
	
	if (!unk_0x2DC9BA2299B45EA6(iParam0))
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
			iVar3 = func_64(iVar0);
			if (iVar3 != 0)
			{
				Var4.f_0 = unk_0x84C891BE623471ED(iParam0, func_64(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				if (Var4.f_0 != 0 && Var4.f_0 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = unk_0xCE69853977E75052(iParam0, Var4.f_0);
					if (Var4.f_0 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					unk_0x59A0729D503ED758(&(Var4.f_2), (20 + unk_0x6C2E2852D6DF0F8F(iParam0, Var4.f_0)));
					if (Var4.f_1 == -1)
					{
						if (!unk_0x7063369AF8640406(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*3*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_62(Var4.f_0, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0x961525D327D920F6(iParam0, Var4.f_0, iVar2))
						{
							unk_0x59A0729D503ED758(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_62(Var4.f_0, iVar1);
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
		iVar8 = unk_0xBF63A843F5FFBEF2();
		iVar7 = 0;
		while (iVar7 < iVar8)
		{
			if ((unk_0xE8067788A3D17AD6(iVar7, &Var9) && !func_61(Var9.f_1)) && iVar70 < 50)
			{
				if (!unk_0x06C32703437E5BC3(Var9.f_0))
				{
					Var4.f_0 = Var9.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_1 = unk_0xCE69853977E75052(iParam0, Var4.f_0);
					if (unk_0xD6B965E92DB098CE(iParam0, Var4.f_0, 0))
					{
						unk_0x59A0729D503ED758(&(Var4.f_2), (20 + unk_0x6C2E2852D6DF0F8F(iParam0, Var4.f_0)));
					}
					else
					{
						unk_0x59A0729D503ED758(&(Var4.f_2), 20);
					}
					if (Var4.f_1 == -1)
					{
						if (!unk_0x7063369AF8640406(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_133[iVar70 /*3*/].f_1 = Var4.f_1;
					iVar1 = 0;
					while (iVar1 < unk_0x54B3723DF8B16C85(iVar7))
					{
						if (unk_0x81718480430D1749(iVar7, iVar1, &Var48))
						{
							if (unk_0x961525D327D920F6(iParam0, Var4.f_0, Var48.f_3))
							{
								unk_0x59A0729D503ED758(&(Var4.f_2), iVar1);
							}
						}
						iVar1++;
					}
				}
				if (Var4.f_0 != 0)
				{
					if (!unk_0xD6B965E92DB098CE(iParam0, Var4.f_0, 0))
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

int func_61(int iParam0)
{
	if (unk_0xBBAE3E0C60A8AD4B())
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
			
			case joaat("weapon_combatpdw"):
			case joaat("weapon_knuckle"):
			case joaat("weapon_marksmanpistol"):
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
			case joaat("weapon_flashlight"):
			case joaat("weapon_switchblade"):
			case joaat("weapon_revolver"):
			case joaat("weapon_dbshotgun"):
			case joaat("weapon_compactrifle"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_62(int iParam0, int iParam1)
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
				
				case 4:
					iVar0 = joaat("component_pistol_varmod_luxe");
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
				
				case 4:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
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
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
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
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
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
				
				case 6:
					iVar0 = joaat("component_smg_varmod_luxe");
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
				
				case 6:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
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
				
				case 7:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
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
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
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
				
				case 4:
					iVar0 = joaat("component_mg_varmod_lowrider");
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
				
				case 4:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
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
				
				case 2:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
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
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
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
				
				case 5:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
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
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_bullpuprifle_clip_02");
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
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 1:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 2:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_63(iParam0, &uVar2);
				if (iVar1 != -1)
				{
					if (iParam1 < unk_0x54B3723DF8B16C85(iVar1))
					{
						if (unk_0x81718480430D1749(iVar1, iParam1, &Var41))
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

int func_63(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0xBF63A843F5FFBEF2();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0xE8067788A3D17AD6(iVar0, uParam1))
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

int func_64(int iParam0)
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

void func_65(int iParam0)
{
	int iVar0;
	
	iVar0 = func_47(iParam0);
	if (func_39(iVar0) && !unk_0x2DC9BA2299B45EA6(iParam0))
	{
		Global_100976.f_1770.f_539.f_294[iVar0] = unk_0x590AD2E91FB5951F(iParam0);
	}
}

void func_66(var uParam0, int iParam1)
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	int iVar5;
	
	*uParam0 = { unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1) };
	uParam0->f_3 = unk_0x59DD203239FBDCAD(unk_0xC8B93D94F8954288());
	uParam0->f_5 = unk_0x2D8DDFACF37FA95F(unk_0xC8B93D94F8954288());
	if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
	{
		uParam0->f_4 = unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638());
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
	else if (unk_0xCBC8FFE55DC722B5(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (unk_0xDCC86F723E82125E(Global_69565, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (unk_0xDCC86F723E82125E(Global_69565, 5))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (unk_0xDCC86F723E82125E(Global_69565, 6))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (unk_0xDCC86F723E82125E(Global_69565, 7))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (unk_0x6907EB47FC00DB19(unk_0xC8B93D94F8954288()) == unk_0x4C910D0CCCE65059(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, 1, 0) || unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, 1, 0))
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
		if (func_70(&iVar0))
		{
			if (func_68(iVar0, &Var1, &uVar4))
			{
				Var1.f_2 = (Var1.f_2 + 1f);
				*uParam0 = { Var1 };
				uParam0->f_3 = uVar4;
			}
		}
		else if (unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0))
		{
			iVar5 = func_207();
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
		else if (unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, 1, 0))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, 1, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_67(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_67(struct<3> Param0, char* sParam3, struct<3> Param4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xE836A83D85A0F1C3(Param0))
	{
		iVar0 = unk_0x4C910D0CCCE65059(Param4, sParam3);
		if (!unk_0x8F89BA1339F45476(iVar0))
		{
			return 0;
		}
		iVar1 = unk_0x69E41FB7F39924FA(Param0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_68(int iParam0, var uParam1, var uParam2)
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
		
		case 44:
			*uParam1 = { -200.1521f, -1297.502f, 30.296f };
			*uParam2 = 269.0687f;
			break;
	}
	return !func_69(*uParam1, 0f, 0f, 0f, 0);
}

bool func_69(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_70(var uParam0)
{
	if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()) && !unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		if (func_80())
		{
			*uParam0 = func_76(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 0), 5, -1, 0, 1, -1);
			if (func_75(*uParam0) && !func_71(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_71(int iParam0)
{
	return func_72(iParam0, 0, 1);
}

int func_72(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0xDCC86F723E82125E(Global_91158.f_1300[iParam0], iParam1);
	}
	else if (unk_0xBBAE3E0C60A8AD4B())
	{
		if (func_74() == 0)
		{
			return unk_0xDCC86F723E82125E(func_50(func_73(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xDCC86F723E82125E(Global_100976.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_73(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 817;
			break;
		
		case 1:
			return 818;
			break;
		
		case 2:
			return 819;
			break;
		
		case 3:
			return 820;
			break;
		
		case 4:
			return 821;
			break;
		
		case 5:
			return 822;
			break;
		
		case 6:
			return 823;
			break;
		
		case 7:
			return 824;
			break;
		
		case 8:
			return 825;
			break;
		
		case 9:
			return 826;
			break;
		
		case 10:
			return 827;
			break;
		
		case 11:
			return 828;
			break;
		
		case 12:
			return 829;
			break;
		
		case 13:
			return 830;
			break;
		
		case 14:
			return 831;
			break;
		
		case 15:
			return 833;
			break;
		
		case 16:
			return 834;
			break;
		
		case 17:
			return 835;
			break;
		
		case 18:
			return 836;
			break;
		
		case 19:
			return 837;
			break;
		
		case 20:
			return 838;
			break;
		
		case 21:
			return 839;
			break;
		
		case 22:
			return 840;
			break;
		
		case 23:
			return 841;
			break;
		
		case 24:
			return 842;
			break;
		
		case 25:
			return 843;
			break;
		
		case 26:
			return 844;
			break;
		
		case 27:
			return 845;
			break;
		
		case 28:
			return 846;
			break;
		
		case 29:
			return 847;
			break;
		
		case 30:
			return 848;
			break;
		
		case 31:
			return 849;
			break;
		
		case 32:
			return 850;
			break;
		
		case 33:
			return 851;
			break;
		
		case 34:
			return 852;
			break;
		
		case 35:
			return 853;
			break;
		
		case 36:
			return 854;
			break;
		
		case 37:
			return 855;
			break;
		
		case 38:
			return 856;
			break;
		
		case 39:
			return 857;
			break;
		
		case 40:
			return 861;
			break;
		
		case 41:
			return 862;
			break;
		
		case 42:
			return 863;
			break;
		
		case 43:
			return 864;
			break;
		
		case 44:
			return 3693;
			break;
		
		default:
			break;
	}
	return 3790;
}

int func_74()
{
	return Global_25115;
}

int func_75(int iParam0)
{
	return func_72(iParam0, 5, 1);
}

int func_76(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 44)
	{
		if (iParam3 == 5 || iParam3 == func_79(iVar0))
		{
			if (!bParam5 || func_78(iVar0))
			{
				fVar1 = unk_0x4F982ED5336EA899(Param0, func_77(iVar0, 0), 1);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam4) || iParam4 == -1)) && (iParam6 || iVar0 != 21)) && iVar0 != iParam7)
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

Vector3 func_77(int iParam0, bool bParam1)
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
		
		case 44:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_78(int iParam0)
{
	return func_72(iParam0, 0, 0);
}

int func_79(int iParam0)
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
		
		case 44:
			return 4;
			break;
	}
	return 5;
}

bool func_80()
{
	return Global_91158.f_296 > 0;
}

var func_81()
{
	var uVar0;
	
	func_91(&uVar0, unk_0x4C374828FD653ECC());
	func_90(&uVar0, unk_0x44AD07D9D178F321());
	func_89(&uVar0, unk_0x342FDFC48311CCCE());
	func_84(&uVar0, unk_0x818078CDB71D3E9C());
	func_83(&uVar0, unk_0x49D01BEA8D03E892());
	func_82(&uVar0, unk_0x90D477BB666B03DB());
	return uVar0;
}

void func_82(var uParam0, int iParam1)
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

void func_83(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_84(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_88(*uParam0);
	iVar1 = func_86(*uParam0);
	if (iParam1 < 1 || iParam1 > func_85(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_85(int iParam0, int iParam1)
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

var func_86(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_87(unk_0xDCC86F723E82125E(iParam0, 31), -1, 1)) + 2011;
}

int func_87(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_88(int iParam0)
{
	return iParam0 & 15;
}

void func_89(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_90(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_91(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

void func_92(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (unk_0xC07DCB0D0C199EDF() || unk_0xF7FE713C9F786F8C())
	{
		uVar0 = iParam0;
		unk_0x86E205844247EC8D(9, &uVar0, 1, 1);
	}
	else if (unk_0x5769873E00C06500() || unk_0x62F8BA7ED89768FB())
	{
		StringCopy(&cVar1, "SPRC_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0xFA993E4AA4647AA6(9, &cVar1);
	}
}

void func_93(char* sParam0, var uParam1, int iParam2)
{
	if (!unk_0xB8A06E7E729EED0A(&Global_88509))
	{
		unk_0x70872DF55836328E(&Global_88509, 0, 0, 0, 1, 0);
		StringCopy(&Global_88509, "", 64);
	}
	StringCopy(&Global_88509, sParam0, 64);
	unk_0x8AE482AD020DA4E2(sParam0, uParam1, iParam2, func_197(0));
}

struct<2> func_94(int iParam0)
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

void func_95(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_96(uParam1, "Abigail1", func_12(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 1:
			func_96(uParam1, "Abigail2", func_12(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 2:
			func_96(uParam1, "Barry1", func_12(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 3:
			func_96(uParam1, "Barry2", func_12(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_97(iParam0), 1, 1);
			break;
		
		case 4:
			func_96(uParam1, "Barry3", func_12(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 5:
			func_96(uParam1, "Barry3A", func_12(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 6:
			func_96(uParam1, "Barry3C", func_12(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 7:
			func_96(uParam1, "Barry4", func_12(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_97(iParam0), 0, 0);
			break;
		
		case 8:
			func_96(uParam1, "Dreyfuss1", func_12(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 9:
			func_96(uParam1, "Epsilon1", func_12(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 10:
			func_96(uParam1, "Epsilon2", func_12(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 11:
			func_96(uParam1, "Epsilon3", func_12(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 12:
			func_96(uParam1, "Epsilon4", func_12(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 13:
			func_96(uParam1, "Epsilon5", func_12(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 14:
			func_96(uParam1, "Epsilon6", func_12(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 15:
			func_96(uParam1, "Epsilon7", func_12(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 16:
			func_96(uParam1, "Epsilon8", func_12(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 17:
			func_96(uParam1, "Extreme1", func_12(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 18:
			func_96(uParam1, "Extreme2", func_12(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 19:
			func_96(uParam1, "Extreme3", func_12(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 20:
			func_96(uParam1, "Extreme4", func_12(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 21:
			func_96(uParam1, "Fanatic1", func_12(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_97(iParam0), 1, 0);
			break;
		
		case 22:
			func_96(uParam1, "Fanatic2", func_12(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_97(iParam0), 1, 0);
			break;
		
		case 23:
			func_96(uParam1, "Fanatic3", func_12(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_97(iParam0), 0, 1);
			break;
		
		case 24:
			func_96(uParam1, "Hao1", func_12(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_97(iParam0), 0, 1);
			break;
		
		case 25:
			func_96(uParam1, "Hunting1", func_12(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 26:
			func_96(uParam1, "Hunting2", func_12(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 27:
			func_96(uParam1, "Josh1", func_12(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 28:
			func_96(uParam1, "Josh2", func_12(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_97(iParam0), 1, 1);
			break;
		
		case 29:
			func_96(uParam1, "Josh3", func_12(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_97(iParam0), 1, 1);
			break;
		
		case 30:
			func_96(uParam1, "Josh4", func_12(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 31:
			func_96(uParam1, "Maude1", func_12(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 32:
			func_96(uParam1, "Minute1", func_12(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 33:
			func_96(uParam1, "Minute2", func_12(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 34:
			func_96(uParam1, "Minute3", func_12(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 35:
			func_96(uParam1, "MrsPhilips1", func_12(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 36:
			func_96(uParam1, "MrsPhilips2", func_12(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 37:
			func_96(uParam1, "Nigel1", func_12(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 38:
			func_96(uParam1, "Nigel1A", func_12(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_97(iParam0), 1, 1);
			break;
		
		case 39:
			func_96(uParam1, "Nigel1B", func_12(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_97(iParam0), 1, 1);
			break;
		
		case 40:
			func_96(uParam1, "Nigel1C", func_12(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_97(iParam0), 1, 1);
			break;
		
		case 41:
			func_96(uParam1, "Nigel1D", func_12(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_97(iParam0), 1, 1);
			break;
		
		case 42:
			func_96(uParam1, "Nigel2", func_12(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_97(iParam0), 1, 1);
			break;
		
		case 43:
			func_96(uParam1, "Nigel3", func_12(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_97(iParam0), 1, 1);
			break;
		
		case 44:
			func_96(uParam1, "Omega1", func_12(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 45:
			func_96(uParam1, "Omega2", func_12(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 46:
			func_96(uParam1, "Paparazzo1", func_12(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 47:
			func_96(uParam1, "Paparazzo2", func_12(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 48:
			func_96(uParam1, "Paparazzo3", func_12(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 49:
			func_96(uParam1, "Paparazzo3A", func_12(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 50:
			func_96(uParam1, "Paparazzo3B", func_12(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 51:
			func_96(uParam1, "Paparazzo4", func_12(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 52:
			func_96(uParam1, "Rampage1", func_12(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 54:
			func_96(uParam1, "Rampage3", func_12(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 55:
			func_96(uParam1, "Rampage4", func_12(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 56:
			func_96(uParam1, "Rampage5", func_12(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 53:
			func_96(uParam1, "Rampage2", func_12(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 57:
			func_96(uParam1, "TheLastOne", func_12(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 58:
			func_96(uParam1, "Tonya1", func_12(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 59:
			func_96(uParam1, "Tonya2", func_12(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 60:
			func_96(uParam1, "Tonya3", func_12(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 61:
			func_96(uParam1, "Tonya4", func_12(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 62:
			func_96(uParam1, "Tonya5", func_12(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_96(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_97(int iParam0)
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

int func_98(var* uParam0)
{
	int iVar0;
	
	if (func_127(&(uParam0->f_1)))
	{
		if (!unk_0xB8A06E7E729EED0A(&(uParam0->f_9)))
		{
			func_118(1);
			func_116(uParam0, 1, func_117(*uParam0));
		}
		if (uParam0->f_27)
		{
			if (func_115(*uParam0))
			{
				while (!unk_0xCD8A4525A9B5A276(unk_0xC8B93D94F8954288()))
				{
					func_174();
					unk_0x4EDE34FBADD967A6(0);
				}
			}
		}
		func_99(*uParam0);
		iVar0 = unk_0xB8BA7F44DF1575E1(&(uParam0->f_1), uParam0, 61, 18000);
		unk_0x996557D48454AE40(&(uParam0->f_1));
		if (unk_0xA65C064741F2CA67())
		{
			func_334("Initial cutscene loaded and passing to RC mission.");
			unk_0xA8EC7DCF082B1B48(iVar0);
		}
		else
		{
			func_334("Initial cutscene wasn't loaded in time to pass to RC mission.");
			unk_0xCDBEE0F3B4A74754();
		}
		return 1;
	}
	return 0;
}

void func_99(int iParam0)
{
	struct<2> Var0;
	
	func_114();
	if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		unk_0xC778754E36F3FFD6(unk_0xC8B93D94F8954288(), 32, 0);
		unk_0xC778754E36F3FFD6(unk_0xC8B93D94F8954288(), 250, 0);
	}
	if (func_113(iParam0))
	{
		unk_0x1775E0DE78304CB9(unk_0xC8B93D94F8954288(), 0);
	}
	unk_0xBFDE8C755DF4A1ED(unk_0xA34E7C2A5118D638(), 1);
	unk_0x48591CDE727D1F6A(0, 1);
	unk_0x48591CDE727D1F6A(3, 1);
	unk_0x48591CDE727D1F6A(2, 1);
	if (Global_36750 == 1)
	{
		if (func_111(unk_0xC8B93D94F8954288()))
		{
			func_102(unk_0xC8B93D94F8954288());
		}
	}
	if (!func_188())
	{
		if (iParam0 < 63)
		{
			func_100(iParam0);
			Var0 = { func_12(iParam0) };
			unk_0x4968FFFAEFDFD625(1, &Var0);
		}
	}
}

void func_100(int iParam0)
{
	if (iParam0 < 63)
	{
		func_101();
		Global_69572 = iParam0;
		Global_69571 = 0;
		Global_69574 = 7;
	}
}

void func_101()
{
	if (Global_69571 != 6)
	{
	}
	if (Global_69576)
	{
		unk_0x19479CF94A711302(15);
		Global_69576 = 0;
		Global_17257.f_7857 = 0;
	}
	Global_69571 = 6;
	Global_69573 = -1;
	Global_69572 = -1;
}

void func_102(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!unk_0x95CCECA3948CFE7B(iParam0))
	{
		return;
	}
	iVar0 = func_110(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_36553[iVar0 /*5*/];
		func_105(1, iVar1, 1);
		return;
	}
	iVar2 = func_104(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_103(iVar2);
}

void func_103(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_36527[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_36527[iParam0 /*5*/].f_1 == unk_0xC8B93D94F8954288())
		{
			Global_36748 = 0;
		}
	}
	Global_36527[iParam0 /*5*/] = 13;
	Global_36527[iParam0 /*5*/].f_1 = 0;
	Global_36527[iParam0 /*5*/].f_2 = 0;
	Global_36527[iParam0 /*5*/].f_3 = 0;
	Global_36527[iParam0 /*5*/].f_4 = 0;
	Global_36526 = (Global_36526 - 1);
	if (Global_36526 < 0)
	{
		Global_36526 = 0;
	}
}

int func_104(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_36527[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_105(int iParam0, int iParam1, int iParam2)
{
	func_106(iParam0, iParam1, iParam2, 0, 0);
}

void func_106(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
	if (func_108(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_107();
	if (iVar0 == -1)
	{
		return;
	}
	Global_36634[iVar0 /*5*/] = iParam0;
	Global_36634[iVar0 /*5*/].f_1 = iParam1;
	Global_36634[iVar0 /*5*/].f_2 = iParam2;
	Global_36634[iVar0 /*5*/].f_3 = iParam3;
	Global_36634[iVar0 /*5*/].f_4 = iParam4;
}

int func_107()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36634[iVar0 /*5*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_108(int iParam0, int iParam1, int iParam2)
{
	if (func_109(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_109(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_36634[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_36634[iVar0 /*5*/])
			{
				if (iParam1 == Global_36634[iVar0 /*5*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_110(int iParam0)
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
		if (!Global_36553[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_36553[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_111(int iParam0)
{
	if (func_112(iParam0))
	{
		if (!unk_0x2DC9BA2299B45EA6(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_112(int iParam0)
{
	if (unk_0x95CCECA3948CFE7B(iParam0))
	{
		if (!unk_0xB6900B8CB0ABBD2B(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_113(int iParam0)
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

void func_114()
{
	if (Global_3088[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3088[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3088[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3088[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3088[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3088[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	unk_0x77621132305B133B(&Global_2283, 25);
	unk_0x59A0729D503ED758(&Global_2284, 11);
}

int func_115(int iParam0)
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

void func_116(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_112(uParam0->f_28[iVar0]))
		{
			unk_0x916DBBB1A4A313B5(uParam0->f_28[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_112(uParam0->f_35[iVar0]))
		{
			unk_0x916DBBB1A4A313B5(uParam0->f_35[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_112(uParam0->f_41[iVar0]))
		{
			unk_0x916DBBB1A4A313B5(uParam0->f_41[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		}
		iVar0++;
	}
	if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
	{
		unk_0x916DBBB1A4A313B5(unk_0xC8B93D94F8954288(), iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		unk_0xEE6504C7ECC425AB(unk_0xC8B93D94F8954288(), iParam1);
		if (bParam2)
		{
			unk_0x80423B6A45BF05DA(unk_0xC8B93D94F8954288(), joaat("weapon_unarmed"), 1);
		}
	}
}

int func_117(int iParam0)
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

void func_118(bool bParam0)
{
	var uVar0;
	
	uVar0 = unk_0x1A96BAEAC664567A();
	if (!unk_0x22583795917573A4(uVar0))
	{
		if (bParam0)
		{
		}
		unk_0x6C1CBBF18B93CB8E(uVar0, bParam0, 16);
		unk_0x6C1CBBF18B93CB8E(uVar0, bParam0, 32);
	}
	func_119(1, 1, 0, 0);
}

void func_119(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0xD693CD4BF91071EA(unk_0xA34E7C2A5118D638());
		unk_0xBFDE8C755DF4A1ED(unk_0xA34E7C2A5118D638(), 1);
		unk_0x8F9941C14FA3BF97(unk_0xA34E7C2A5118D638(), 1);
		func_126(1);
		unk_0xC0E7FF19962AE47A();
		unk_0x31592941AC9991FE();
		if (Global_14413.f_1 > 3)
		{
			if (unk_0x44E93B894936152F())
			{
				unk_0xB518E9C8553B1D2B(0);
			}
			if (!func_125())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_124(1, iParam3, iParam2, 0);
		Global_55665 = 1;
		Global_67971 = 1;
		Global_69315 = 1;
	}
	else
	{
		func_126(0);
		unk_0x11D0AD0D13C88D1A();
		Global_55665 = 0;
		if (bParam1)
		{
			unk_0x48D86334348F315A();
		}
		unk_0xBFDE8C755DF4A1ED(unk_0xA34E7C2A5118D638(), 0);
		unk_0x8F9941C14FA3BF97(unk_0xA34E7C2A5118D638(), 0);
		func_124(0, iParam3, iParam2, 0);
		if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()) && !func_120(unk_0xA34E7C2A5118D638()))
		{
			unk_0xEE6504C7ECC425AB(unk_0xC8B93D94F8954288(), 0);
		}
		Global_69315 = 0;
	}
}

int func_120(int iParam0)
{
	if (func_122(iParam0, 0))
	{
		return 1;
	}
	if (func_121())
	{
		if (iParam0 == unk_0xA34E7C2A5118D638())
		{
			return 1;
		}
	}
	if (unk_0xDCC86F723E82125E(Global_2417071[iParam0 /*306*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_121()
{
	return unk_0xDCC86F723E82125E(Global_2359301, 3);
}

bool func_122(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xA34E7C2A5118D638())
	{
		bVar0 = func_123(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1587175[iParam0 /*410*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xDF73DA5E2287C499(iParam0))
		{
			bVar0 = unk_0x07CBE0ED3114C7D8(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_123(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_52();
	}
	if (Global_1315889[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312740[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_124(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x68B0A67658F2D9C2())
	{
		if (unk_0x751EF148528839D5() != iParam0 && uParam2)
		{
			unk_0xE3A1C9182C52F4F2(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_125()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_126(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x59A0729D503ED758(&Global_2283, 13);
	}
	else
	{
		unk_0x77621132305B133B(&Global_2283, 13);
	}
}

int func_127(char* sParam0)
{
	if (!unk_0xB8A06E7E729EED0A(uParam0))
	{
		unk_0xE3B4E8C914195E94(uParam0);
		while (!unk_0xD838CD843F6FE18B(sParam0))
		{
			unk_0xE3B4E8C914195E94(sParam0);
			unk_0x4EDE34FBADD967A6(0);
		}
		return 1;
	}
	func_334("Attempting to launch invalid script file [TERMINATING]");
	return 0;
}

void func_128()
{
	Global_14578 = 0;
	func_129();
}

void func_129()
{
	unk_0xE9A2B98CC2F095D6();
	Global_16723 = 0;
	if ((unk_0x44E93B894936152F() || Global_14413.f_1 == 9) || Global_14412 == 1)
	{
		unk_0xB518E9C8553B1D2B(0);
		Global_15712 = 6;
		Global_14413.f_1 = 3;
		return;
	}
	if (unk_0x2964A62922189B93())
	{
		unk_0xB518E9C8553B1D2B(1);
		Global_15712 = 6;
		return;
	}
}

int func_130()
{
	if (Global_15712 != 0 || unk_0x2964A62922189B93())
	{
		return 1;
	}
	return 0;
}

int func_131(var uParam0, bool bParam1)
{
	struct<27> Var0;
	
	if (Global_69317)
	{
		func_334("IS_RC_FINE_AND_IN_RANGE(): The game is running Multiplayer [TERMINATING]");
		return 0;
	}
	func_95(*uParam0, &Var0);
	if ((func_173(*uParam0) || func_171(*uParam0)) || Global_69562 == 1)
	{
		return 1;
	}
	if (!unk_0xCAA967E16BBE69CE())
	{
		func_334("IS_RC_FINE_AND_IN_RANGE(): Player out of range [TERMINATING]");
		return 0;
	}
	if (func_163(*uParam0))
	{
		if (*uParam0 == 19)
		{
			func_162(uParam0->f_28[0]);
		}
		func_334("IS_RC_FINE_AND_IN_RANGE(): Script denied by RC Controller [TERMINATING]");
		return 0;
	}
	if (uParam0->f_25 == 1)
	{
		if (!func_142(uParam0, 1, 0))
		{
			return 0;
		}
	}
	else if (uParam0->f_16 == 0)
	{
		if (!func_142(uParam0, 0, 0))
		{
			return 0;
		}
	}
	if (((((*uParam0 == 16 || *uParam0 == 9) || *uParam0 == 18) || *uParam0 == 22) || *uParam0 == 32) || *uParam0 == 51)
	{
		if (!func_139(uParam0, 1, 1))
		{
			if (*uParam0 == 16)
			{
				func_138(uParam0);
			}
			else
			{
				func_136(uParam0);
			}
			return 0;
		}
	}
	else if (*uParam0 == 24)
	{
		if (!func_139(uParam0, 0, 1))
		{
			func_136(uParam0);
			return 0;
		}
	}
	else if (*uParam0 == 6)
	{
		if (!func_139(uParam0, 0, 1))
		{
			return 0;
		}
	}
	else if (uParam0->f_26 == 1)
	{
		if (!func_139(uParam0, 1, 0))
		{
			func_136(uParam0);
			return 0;
		}
	}
	else if (uParam0->f_16 == 2 || uParam0->f_16 == 1)
	{
		if (!func_139(uParam0, 0, 0))
		{
			func_136(uParam0);
			return 0;
		}
	}
	if (uParam0->f_16 == 2 || uParam0->f_16 == 1)
	{
		if (func_112(uParam0->f_35[0]))
		{
			if (!unk_0xA0C23498D8E0BB93(uParam0->f_35[0], Var0.f_6, 8f, 8f, 8f, 0, 1, 0))
			{
				return 0;
			}
		}
	}
	if (*uParam0 == 10)
	{
		if (unk_0xDF87568D121A99AC(-1, uParam0->f_17[0 /*3*/], 8f))
		{
			func_334("IS_RC_FINE_AND_IN_RANGE(): Explosion near mission trigger [TERMINATING]");
			return 0;
		}
	}
	if (Var0.f_4 != 17)
	{
		if (!unk_0xDCC86F723E82125E(Var0.f_26, func_207()))
		{
			func_334("IS_RC_FINE_AND_IN_RANGE(): No longer a valid player character to launch mission");
			return 0;
		}
	}
	if (func_135(&(uParam0->f_48)) && bParam1)
	{
		func_132(uParam0->f_28[0], &(uParam0->f_48), *uParam0);
	}
	return 1;
}

void func_132(int iParam0, var uParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (func_112(iParam0))
	{
		switch (uParam1->f_3)
		{
			case 1:
				if (func_135(uParam1))
				{
					if (unk_0xF9B86DC1728F1339(*uParam1))
					{
						unk_0xBA73099E237C7E5E(iParam0);
						if (iParam2 != 21)
						{
							if (func_69(uParam1->f_5, 0f, 0f, 0f, 0))
							{
								unk_0x5323F488E6A1B660(iParam0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
							}
							else
							{
								unk_0x3E2E609450787FFE(&uVar0);
								if (func_134(uParam1))
								{
									unk_0x4D498C117F9987CB(0, *uParam1, uParam1->f_2, uParam1->f_5, uParam1->f_8, 1000f, -8f, -1, 262152, 0, 2, 0);
								}
								else
								{
									unk_0x4D498C117F9987CB(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 1000f, -8f, -1, 262152, 0, 2, 0);
								}
								unk_0x4D498C117F9987CB(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 0);
								unk_0x939BC11172AA1303(uVar0);
								unk_0xBFE865E3B513451B(iParam0, uVar0);
								unk_0xA9351C9309E03069(&uVar0);
							}
						}
						else
						{
							unk_0x4D498C117F9987CB(iParam0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 3);
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
				if (!func_134(uParam1) || !unk_0xCD61E9D5CABC7E35(iParam0, *uParam1, uParam1->f_2, 3))
				{
					if (func_133(iParam2) && !unk_0xAF9BF2C76079B4BF(iParam0, unk_0xC8B93D94F8954288(), 25f))
					{
						unk_0xC518AECFA9CF7722(iParam0, unk_0xC8B93D94F8954288(), 0);
						uParam1->f_3 = 5;
					}
					else if ((func_134(uParam1) && uParam1->f_4 == 0) && unk_0x4F982ED5336EA899(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), unk_0x44C17CCB85A88A1F(iParam0, 1), 1) < 20f)
					{
						uParam1->f_3 = 3;
					}
				}
				break;
			
			case 3:
				unk_0x3E2E609450787FFE(&uVar1);
				if (func_69(uParam1->f_5, 0f, 0f, 0f, 0))
				{
					unk_0x5323F488E6A1B660(0, *uParam1, uParam1->f_2, 4f, -4f, -1, 262144, 0, 0, 0, 0);
					unk_0x5323F488E6A1B660(0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
				}
				else
				{
					unk_0x4D498C117F9987CB(0, *uParam1, uParam1->f_2, uParam1->f_5, uParam1->f_8, 4f, -4f, -1, 262152, 0, 2, 0);
					unk_0x4D498C117F9987CB(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 0);
				}
				unk_0x939BC11172AA1303(uVar1);
				unk_0xBFE865E3B513451B(iParam0, uVar1);
				unk_0xA9351C9309E03069(&uVar1);
				uParam1->f_4 = 1;
				if (func_133(iParam2))
				{
					uParam1->f_3 = 2;
				}
				else
				{
					uParam1->f_3 = 0;
				}
				break;
			
			case 5:
				if (!func_133(iParam2) || unk_0xAF9BF2C76079B4BF(iParam0, unk_0xC8B93D94F8954288(), 10f))
				{
					if (func_69(uParam1->f_5, 0f, 0f, 0f, 0))
					{
						unk_0x5323F488E6A1B660(iParam0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
					}
					else
					{
						unk_0x4D498C117F9987CB(iParam0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 0);
					}
					uParam1->f_3 = 2;
				}
				break;
			}
	}
}

int func_133(int iParam0)
{
	if (iParam0 == 17 || iParam0 == 20)
	{
		return 1;
	}
	return 0;
}

int func_134(var uParam0)
{
	if (unk_0xB8A06E7E729EED0A(uParam0->f_2))
	{
		return 0;
	}
	return 1;
}

int func_135(var uParam0)
{
	if (unk_0xB8A06E7E729EED0A(*uParam0) || unk_0xB8A06E7E729EED0A(uParam0->f_1))
	{
		return 0;
	}
	return 1;
}

void func_136(var uParam0)
{
	int iVar0;
	var uVar1;
	
	if (*uParam0 == 52)
	{
		func_137(&(uParam0->f_41[1]));
		func_137(&(uParam0->f_41[2]));
	}
	if (func_112(unk_0xC8B93D94F8954288()))
	{
		iVar0 = 0;
		while (iVar0 <= (uParam0->f_28 - 1))
		{
			if (func_111(uParam0->f_28[iVar0]))
			{
				if (!unk_0x277ECDA23D8CCEB4(uParam0->f_28[iVar0], 0))
				{
					unk_0x8FB4254399424391(uParam0->f_28[iVar0], 1, 0);
					unk_0xB7A2078CD1C9A82F(uParam0->f_28[0], 0);
				}
				unk_0xF1A02DDEC7E15D6E(uParam0->f_28[iVar0], 1);
				if (*uParam0 == 34)
				{
					if (func_112(uParam0->f_41[0]))
					{
						unk_0x8FB4254399424391(uParam0->f_41[0], 1, 0);
						unk_0xB7A2078CD1C9A82F(uParam0->f_41[0], 0);
					}
				}
				switch (*uParam0)
				{
					case 19:
						func_162(uParam0->f_28[iVar0]);
						break;
					
					case 8:
						unk_0xC0E8B67A4385D37D("rcmcollect_paperleadinout@");
						while (!unk_0xF9B86DC1728F1339("rcmcollect_paperleadinout@"))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						unk_0x3E2E609450787FFE(&uVar1);
						unk_0x5323F488E6A1B660(0, "rcmcollect_paperleadinout@", "meditate_getup", 8f, -8f, -1, 8, 0, 0, 0, 0);
						unk_0x622E764F80DBF8B7(0, unk_0xC8B93D94F8954288(), 10000f, -1, 0, 0);
						unk_0x939BC11172AA1303(uVar1);
						unk_0xBFE865E3B513451B(uParam0->f_28[iVar0], uVar1);
						unk_0xA9351C9309E03069(&uVar1);
						break;
					
					case 0:
					case 1:
						unk_0xC0E8B67A4385D37D("rcmabigail");
						while (!unk_0xF9B86DC1728F1339("rcmabigail"))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						unk_0x3E2E609450787FFE(&uVar1);
						unk_0x5323F488E6A1B660(0, "rcmabigail", "breakout_base", 8f, -8f, -1, 8, 0, 0, 0, 0);
						unk_0x622E764F80DBF8B7(0, unk_0xC8B93D94F8954288(), 10000f, -1, 0, 0);
						unk_0x939BC11172AA1303(uVar1);
						unk_0xBFE865E3B513451B(uParam0->f_28[iVar0], uVar1);
						unk_0xA9351C9309E03069(&uVar1);
						break;
					
					case 32:
						unk_0xC0E8B67A4385D37D("rcmminute1");
						while (!unk_0xF9B86DC1728F1339("rcmminute1"))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						unk_0x3E2E609450787FFE(&uVar1);
						if (iVar0 == 0)
						{
							unk_0x5323F488E6A1B660(0, "rcmminute1", "base_to_idle_joe", 8f, -8f, -1, 32776, 0, 0, 0, 0);
						}
						else
						{
							unk_0x5323F488E6A1B660(0, "rcmminute1", "base_to_idle_josef", 8f, -8f, -1, 32776, 0, 0, 0, 0);
						}
						unk_0x622E764F80DBF8B7(0, unk_0xC8B93D94F8954288(), 10000f, -1, 0, 0);
						unk_0x939BC11172AA1303(uVar1);
						unk_0xBFE865E3B513451B(uParam0->f_28[iVar0], uVar1);
						unk_0xA9351C9309E03069(&uVar1);
						break;
					
					case 24:
						unk_0xC0E8B67A4385D37D("special_ped@hao@base");
						while (!unk_0xF9B86DC1728F1339("special_ped@hao@base"))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						unk_0x3E2E609450787FFE(&uVar1);
						unk_0x5323F488E6A1B660(0, "special_ped@hao@base", "hao_exit", 8f, -8f, -1, 520, 0, 0, 0, 0);
						unk_0x622E764F80DBF8B7(0, unk_0xC8B93D94F8954288(), 10000f, -1, 0, 0);
						unk_0x939BC11172AA1303(uVar1);
						unk_0xBFE865E3B513451B(uParam0->f_28[iVar0], uVar1);
						unk_0xA9351C9309E03069(&uVar1);
						break;
					
					default:
						unk_0xEC466B3D55749458(uParam0->f_28[iVar0]);
						unk_0x622E764F80DBF8B7(uParam0->f_28[iVar0], unk_0xC8B93D94F8954288(), 10000f, -1, 0, 0);
						break;
					}
			}
			iVar0++;
		}
	}
}

void func_137(var uParam0)
{
	if (unk_0x95CCECA3948CFE7B(*uParam0))
	{
		if (unk_0xE33A9405F8300B78(*uParam0))
		{
			unk_0xB81176DFD2611E8B(*uParam0, 1, 1);
		}
		unk_0xA278ECBE30D8AE4F(uParam0);
	}
}

void func_138(var uParam0)
{
	int iVar0;
	
	if (func_112(unk_0xC8B93D94F8954288()))
	{
		iVar0 = 0;
		while (iVar0 <= (uParam0->f_28 - 1))
		{
			if (func_111(uParam0->f_28[iVar0]))
			{
				unk_0x1296D571B761D748(uParam0->f_28[iVar0], 1, 0);
				unk_0xAAD662D7E0D59F4C(uParam0->f_28[iVar0], 0);
				unk_0xF1A02DDEC7E15D6E(uParam0->f_28[iVar0], 1);
				unk_0x45EF2026AF681474(uParam0->f_28[iVar0], unk_0xC8B93D94F8954288(), 0, 16);
				unk_0x459A6F82E024C891(&(uParam0->f_28[iVar0]));
			}
			iVar0++;
		}
	}
}

int func_139(var uParam0, bool bParam1, bool bParam2)
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
	if (func_111(unk_0xC8B93D94F8954288()))
	{
		iVar0 = 0;
		while (iVar0 <= iVar1)
		{
			if (unk_0x95CCECA3948CFE7B(uParam0->f_35[iVar0]))
			{
				if (unk_0xB6900B8CB0ABBD2B(uParam0->f_35[iVar0]))
				{
					func_334("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is dead [TERMINATING]");
					return 0;
				}
				if (!unk_0x5D42322C7DB888D0(uParam0->f_35[iVar0], 0))
				{
					func_334("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is not driveable [TERMINATING]");
					return 0;
				}
				if (unk_0x87D4C731B013290A(uParam0->f_35[iVar0], unk_0xC8B93D94F8954288(), 0))
				{
					func_334("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has been damaged by player [TERMINATING]");
					return 0;
				}
				if (unk_0xD3A4099D2845F152(uParam0->f_35[iVar0]) < 850)
				{
					func_334("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle health is less than 850 [TERMINATING]");
					return 0;
				}
				if (bParam2)
				{
					if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
					{
						if (unk_0xA499226F64D3A26A(uParam0->f_35[iVar0], unk_0xC8B93D94F8954288()) && unk_0x9BA9222C7124CA04(unk_0xC8B93D94F8954288()) > 5f)
						{
							func_334("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has collided with the player vehicle at speed [TERMINATING]");
							return 0;
						}
						uVar2 = unk_0x974516F979AD07BC();
						if (func_141(uVar2))
						{
							if (unk_0x6D5BB810CC209E15(uVar2) == joaat("towtruck") || unk_0x6D5BB810CC209E15(iVar2) == joaat("towtruck2"))
							{
								if (func_141(uParam0->f_35[iVar0]))
								{
									if (unk_0x416EAF6600782EDD(iVar2, uParam0->f_35[iVar0]))
									{
										func_334("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is being towed by player [TERMINATING]");
										return 0;
									}
								}
							}
						}
					}
					else
					{
						iVar3 = unk_0x974516F979AD07BC();
						if (func_141(iVar3))
						{
							if (unk_0xA499226F64D3A26A(uParam0->f_35[iVar0], iVar3) && unk_0x9BA9222C7124CA04(iVar3) > 6f)
							{
								func_334("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has collided with the player's last known vehicle at speed (player bailed out?) [TERMINATING]");
								return 0;
							}
						}
						if (*uParam0 == 16)
						{
							if (func_140(unk_0xC8B93D94F8954288(), uParam0->f_35[iVar0]))
							{
								func_334("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Player attempting to jack Epsilon vehicle [TERMINATING]");
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

int func_140(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x2DC9BA2299B45EA6(iParam0))
	{
		if (unk_0x5D42322C7DB888D0(iParam1, 0))
		{
			iVar0 = unk_0xBCEA8C5A6B3F7D71(iParam0);
			if (iVar0 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_141(int iParam0)
{
	if (func_112(uParam0))
	{
		if (unk_0x5D42322C7DB888D0(uParam0, 0))
		{
			if (!unk_0x79E944054F6C9DCD(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_142(var uParam0, bool bParam1, int iParam2)
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
	if (func_111(unk_0xC8B93D94F8954288()))
	{
		iVar0 = 0;
		while (iVar0 <= iVar1)
		{
			if (unk_0x95CCECA3948CFE7B(uParam0->f_28[iVar0]))
			{
				if (!unk_0x2DC9BA2299B45EA6(uParam0->f_28[iVar0]))
				{
					if (unk_0x7F13E3D2383CF15F(unk_0xC8B93D94F8954288()))
					{
						if (unk_0xA499226F64D3A26A(unk_0xC8B93D94F8954288(), uParam0->f_28[iVar0]))
						{
							if (iParam2 == 0)
							{
								func_136(uParam0);
							}
							else
							{
								func_138(uParam0);
							}
							if (func_130())
							{
								func_128();
							}
							func_334("STEP_5_COMMON_RCfineAndInRange - Random character is being pushed by car [TERMINATING]");
							return 0;
						}
					}
					if ((unk_0x53FACDFDDEA6B021(uParam0->f_28[iVar0]) || unk_0xAF8A64E258A159A4(uParam0->f_28[iVar0])) || unk_0x53AB60BDDAE5AE2F(uParam0->f_28[iVar0]))
					{
						if (iParam2 == 0)
						{
							func_136(uParam0);
						}
						else
						{
							func_138(uParam0);
						}
						func_334("STEP_5_COMMON_RCfineAndInRange - Random character has been damaged by something [TERMINATING]");
						return 0;
					}
					if (unk_0x770AAB67BDD9C729(uParam0->f_28[iVar0]))
					{
						if (unk_0x5534579797ACFD77(uParam0->f_28[iVar0], unk_0xC8B93D94F8954288(), 3f, 3f, 3f, 0, 1, 0))
						{
							if (iParam2 == 0)
							{
								func_136(uParam0);
							}
							else
							{
								func_138(uParam0);
							}
							func_334("STEP_5_COMMON_RCfineAndInRange - Random character is in ragdoll [TERMINATING]");
							return 0;
						}
					}
					if (func_161(*uParam0))
					{
						if (!func_182(*uParam0))
						{
							if (func_156(uParam0->f_28[iVar0], 1, 0, 0, 0))
							{
								if (iParam2 == 0)
								{
									func_136(uParam0);
								}
								else
								{
									func_138(uParam0);
								}
								func_334("STEP_5_COMMON_RCfineAndInRange - Player is shooting near the Random Character [TERMINATING]");
								return 0;
							}
						}
						if (unk_0xDF87568D121A99AC(-1, unk_0x44C17CCB85A88A1F(uParam0->f_28[iVar0], 1), 15f))
						{
							if (iParam2 == 0)
							{
								func_136(uParam0);
							}
							else
							{
								func_138(uParam0);
							}
							func_334("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
							return 0;
						}
						if (func_144(uParam0->f_28[iVar0], 1126825984))
						{
							if (iParam2 == 0)
							{
								func_136(uParam0);
							}
							else
							{
								func_138(uParam0);
							}
							func_334("STEP_5_COMMON_RCfineAndInRange - Random character is in combat [TERMINATING]");
							return 0;
						}
					}
					if (!func_143(*uParam0))
					{
						if (unk_0xDF87568D121A99AC(-1, unk_0x44C17CCB85A88A1F(uParam0->f_28[iVar0], 1), 5f))
						{
							if (iParam2 == 0)
							{
								func_136(uParam0);
							}
							else
							{
								func_138(uParam0);
							}
							func_334("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
							return 0;
						}
						if (unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) > 0)
						{
							if (iParam2 == 0)
							{
								func_136(uParam0);
							}
							else
							{
								func_138(uParam0);
							}
							func_334("STEP_5_COMMON_RCfineAndInRange - Player has a wanted level [TERMINATING]");
							return 0;
						}
					}
				}
				else
				{
					func_334("STEP_5_COMMON_RCfineAndInRange - Random character injured / dead [TERMINATING]");
					if (*uParam0 == 34)
					{
						if (func_112(uParam0->f_41[0]))
						{
							unk_0x8FB4254399424391(uParam0->f_41[0], 1, 0);
							unk_0xB7A2078CD1C9A82F(uParam0->f_41[0], 0);
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

int func_143(int iParam0)
{
	if (((iParam0 == 2 || iParam0 == 3) || iParam0 == 52) || iParam0 == 53)
	{
		return 1;
	}
	return 0;
}

int func_144(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_112(unk_0xC8B93D94F8954288()) && func_112(iParam0))
	{
		if (func_155(iParam0) || unk_0x0BBFEAC55291063A(unk_0xA34E7C2A5118D638(), iParam0))
		{
			if (unk_0x74BBB84E37C71AAC(unk_0xC8B93D94F8954288(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0x5534579797ACFD77(unk_0xC8B93D94F8954288(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_145(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_145(int iParam0, float fParam1)
{
	return func_146(iParam0, unk_0xC8B93D94F8954288(), fParam1, 1, 250, 7);
}

bool func_146(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_154(iParam0, iParam1);
	if (!func_112(iParam0) || !func_112(iParam1))
	{
		if (iVar4 != -1)
		{
			func_153(&(Local_37[iVar4 /*4*/]));
		}
		return 0;
	}
	if (!func_150(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_149();
		if (iVar4 == -1)
		{
			return 0;
		}
		Local_37[iVar4 /*4*/].f_1 = iParam0;
		Local_37[iVar4 /*4*/].f_2 = iParam1;
	}
	Var1 = { unk_0xB867FC7DBA46C0F1(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_147(&(Local_37[iVar4 /*4*/]), Var1, iParam1, &(Local_37[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0x693EBB4F13506457() - Local_37[iVar4 /*4*/].f_3) < iParam4);
}

int func_147(var uParam0, struct<3> Param1, int iParam4, var uParam5, int iParam6, int iParam7)
{
	var uVar0;
	struct<3> Var1;
	var uVar4;
	int iVar7;
	int iVar8;
	
	iVar7 = 0;
	if (!func_112(iParam4))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		Var1 = { func_148(iParam4, iParam7) };
		*uParam0 = unk_0xC4DBC378170CB508(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam6, 7);
		return 0;
	}
	iVar8 = unk_0x1728AE8531450BFE(*uParam0, &uVar0, &Var1, &uVar4, &iVar7);
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
	if (unk_0x96209AADF56E8FE8(iVar7))
	{
		func_112(iVar7);
		if (unk_0x4D3C2AC8339BFB4F(iVar7) == iParam4)
		{
			if (bLocal_78)
			{
				unk_0x69409589C72E60FD(Param1, unk_0x44C17CCB85A88A1F(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam5 = unk_0x693EBB4F13506457();
			return 1;
		}
		return 0;
	}
	if (unk_0x18BDAFC0B20C2C9E(iVar7))
	{
		func_112(iVar7);
		if (unk_0x277ECDA23D8CCEB4(iParam4, 0))
		{
			if (unk_0xE6E6D9800E15A76C(iVar7) == unk_0x275BEBE583A163B5(iParam4, 0))
			{
				if (bLocal_78)
				{
					unk_0x69409589C72E60FD(Param1, unk_0x44C17CCB85A88A1F(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam5 = unk_0x693EBB4F13506457();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_148(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = unk_0x531444754C426278(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return unk_0x44C17CCB85A88A1F(iParam0, 1);
	}
	else if (iParam1 == 1)
	{
		return unk_0xB867FC7DBA46C0F1(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return unk_0xB867FC7DBA46C0F1(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return unk_0xB867FC7DBA46C0F1(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return unk_0xB867FC7DBA46C0F1(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return unk_0xB867FC7DBA46C0F1(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return unk_0xB867FC7DBA46C0F1(iParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0x44C17CCB85A88A1F(iParam0, 1);
}

int func_149()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_37.f_0)
	{
		if ((Local_37[iVar0 /*4*/] == 0 && Local_37[iVar0 /*4*/].f_1 == 0) && Local_37[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_150(int iParam0, int iParam1, float fParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_152(unk_0x44C17CCB85A88A1F(iParam1, 1) - unk_0x44C17CCB85A88A1F(iParam0, 1)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var3 = { unk_0x2CDF65DEC17DF0F9(iParam0) };
	}
	else
	{
		Var3 = { func_152(unk_0xB867FC7DBA46C0F1(iParam0, 31086, 0f, 5f, 0f) - unk_0xB867FC7DBA46C0F1(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_151(Var3, Var0);
	if (fVar6 <= unk_0xD0FFB162F40A139C((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_151(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_152(struct<3> Param0)
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

void func_153(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_154(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_37.f_0)
	{
		if (Local_37[iVar0 /*4*/].f_1 == iParam0 && Local_37[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_155(var uParam0)
{
	if (unk_0xFEDC9F0F78A56158(unk_0xA34E7C2A5118D638(), uParam0) && unk_0x74BBB84E37C71AAC(unk_0xC8B93D94F8954288(), 6))
	{
		return 1;
	}
	return 0;
}

int func_156(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
	if (func_112(unk_0xC8B93D94F8954288()) && func_112(uParam0))
	{
		unk_0xA51F11E1DC7307BB(unk_0xC8B93D94F8954288(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_160(uParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_157(uParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (unk_0xBCB541CE877969BE(unk_0xC8B93D94F8954288()))
			{
				if (unk_0x1E8D3FA42E89ED72(unk_0xC8B93D94F8954288()))
				{
					if (unk_0x0592F98C32AC22CA(unk_0x44C17CCB85A88A1F(uParam0, 1), fVar0, 1))
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
				if (func_160(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_157(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_157(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0x44C17CCB85A88A1F(uParam0, 1) };
	Var3 = { Var0 };
	Var0.f_0 = (Var0.f_0 - fParam1);
	Var0.f_1 = (Var0.f_1 - fParam1);
	Var0.f_2 = (Var0.f_2 - fParam1);
	Var3.f_0 = (Var3.f_0 + fParam1);
	Var3.f_1 = (Var3.f_1 + fParam1);
	Var3.f_2 = (Var3.f_2 + fParam1);
	if (bParam2)
	{
		if (((unk_0xE9917E76DC9B84DC(unk_0x44C17CCB85A88A1F(iParam0, 1), joaat("weapon_grenade"), fParam1, 1) || unk_0xE9917E76DC9B84DC(unk_0x44C17CCB85A88A1F(iParam0, 1), joaat("weapon_molotov"), fParam1, 1)) || unk_0xE9917E76DC9B84DC(unk_0x44C17CCB85A88A1F(iParam0, 1), joaat("weapon_smokegrenade"), fParam1, 1)) || unk_0xE9917E76DC9B84DC(unk_0x44C17CCB85A88A1F(iParam0, 1), joaat("weapon_stickybomb"), 5f, 1))
		{
			if (bParam3)
			{
				if (func_158(iParam0, fParam1))
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
			if (func_158(iParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xEC54737A42D57DA5(Var0, Var3, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_158(var uParam0, float fParam1)
{
	var uVar0;
	struct<3> Var1;
	
	if ((((unk_0x193ED0143AC10C42(uParam0, joaat("weapon_grenade"), fParam1, &Var1, &uVar0, 0) || unk_0x193ED0143AC10C42(uParam0, joaat("weapon_smokegrenade"), fParam1, &Var1, &uVar0, 0)) || unk_0x193ED0143AC10C42(uParam0, joaat("weapon_bzgas"), fParam1, &Var1, &uVar0, 0)) || unk_0x193ED0143AC10C42(uParam0, joaat("weapon_stickybomb"), fParam1, &Var1, &uVar0, 0)) || unk_0x193ED0143AC10C42(uParam0, joaat("weapon_molotov"), fParam1, &Var1, &uVar0, 0))
	{
		if (func_159(uParam0, Var1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_159(int iParam0, struct<3> Param1, float fParam4, int iParam5)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_152(Param1 - unk_0x44C17CCB85A88A1F(uParam0, 1)) };
	if (fParam4 < 0.1f || fParam4 > 360f)
	{
		return 1;
	}
	if (iParam5 == 0)
	{
		Var3 = { unk_0x2CDF65DEC17DF0F9(iParam0) };
	}
	else
	{
		Var3 = { func_152(unk_0xB867FC7DBA46C0F1(iParam0, 31086, 0f, 5f, 0f) - unk_0xB867FC7DBA46C0F1(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_151(Var3, Var0);
	if (fVar6 <= unk_0xD0FFB162F40A139C((fParam4 / 2f)))
	{
		return 0;
	}
	return 1;
}

int func_160(int iParam0, bool bParam1, float fParam2, float fParam3)
{
	if (bParam1)
	{
		if (unk_0x1E8D3FA42E89ED72(unk_0xC8B93D94F8954288()))
		{
			if (unk_0x5534579797ACFD77(unk_0xC8B93D94F8954288(), uParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (unk_0x0592F98C32AC22CA(unk_0x44C17CCB85A88A1F(iParam0, 1), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

int func_161(int iParam0)
{
	if (((((iParam0 == 2 || iParam0 == 3) || iParam0 == 34) || iParam0 == 11) || iParam0 == 52) || iParam0 == 53)
	{
		return 0;
	}
	return 1;
}

void func_162(int iParam0)
{
	var uVar0;
	
	if (func_112(unk_0xC8B93D94F8954288()) && func_112(uParam0))
	{
		unk_0xC0E8B67A4385D37D("rcmextreme3");
		while (!unk_0xF9B86DC1728F1339("rcmextreme3"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x3E2E609450787FFE(&uVar0);
		unk_0x5323F488E6A1B660(0, "rcmextreme3", "jump_fall", 1000f, -8f, -1, 8, 0, 0, 0, 0);
		unk_0x2A262C5D2DAD436D(0, 1);
		unk_0x4CD39E103513BD2E(0, 64.6f, -737.8f, 44.2f);
		unk_0x622E764F80DBF8B7(0, unk_0xC8B93D94F8954288(), 10000f, -1, 0, 0);
		unk_0x939BC11172AA1303(uVar0);
		unk_0xBFE865E3B513451B(uParam0, uVar0);
		unk_0xA9351C9309E03069(&uVar0);
	}
}

int func_163(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_169();
	}
	if (iParam0 == -1)
	{
		return 1;
	}
	if (func_173(iParam0))
	{
		return 0;
	}
	if (!func_167(4))
	{
		if (func_171(iParam0))
		{
		}
		else
		{
			return 1;
		}
	}
	if (func_166() && !func_165())
	{
		return 1;
	}
	if (!func_164(iParam0))
	{
		if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
		{
			if (unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) != 0)
			{
				return 1;
			}
		}
	}
	if (!unk_0xDCC86F723E82125E(Global_100976.f_17208[iParam0 /*6*/], 2))
	{
		return 1;
	}
	return 0;
}

int func_164(int iParam0)
{
	if ((((iParam0 == 5 || iParam0 == 6) || iParam0 == 41) || iParam0 == 60) || iParam0 == 61)
	{
		return 1;
	}
	return 0;
}

int func_165()
{
	if (unk_0x68B0A67658F2D9C2())
	{
		if (unk_0x9EAC4A2F633474B9() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_166()
{
	if (Global_88361 != -1)
	{
		return unk_0xDCC86F723E82125E(Global_82227[Global_88361 /*34*/].f_15, 20);
	}
	return 0;
}

bool func_167(int iParam0)
{
	return func_168(iParam0, Global_35700);
}

int func_168(int iParam0, int iParam1)
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

int func_169()
{
	return func_170(unk_0xC4E68AF0B559FAC4(), 0);
}

int func_170(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar33;
	int iVar34;
	
	iVar33 = unk_0x7CBED6EFED40E7EB(uParam0);
	iVar34 = 0;
	iVar34 = 0;
	while (iVar34 < 63)
	{
		iVar0 = iVar34;
		func_95(iVar0, &uVar1);
		if (unk_0x7CBED6EFED40E7EB(uVar1) == iVar33)
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

int func_171(int iParam0)
{
	if ((func_172() && Global_91106.f_11 == 6) && iParam0 == func_170(&(Global_91106.f_3), 0))
	{
		return 1;
	}
	return 0;
}

int func_172()
{
	if (((Global_91106 == 13 || Global_91106 == 10) || Global_91106 == 11) || Global_91106 == 12)
	{
		return 0;
	}
	return 1;
}

int func_173(int iParam0)
{
	if (func_197(0))
	{
		if (Global_69563.f_1 == 7)
		{
			if (Global_69563 == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_174()
{
	func_178();
	func_177();
	func_175();
}

void func_175()
{
	if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
	{
		if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
		{
			if (func_176(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0), 10.5f, 1, 1056964608, 0, 1, 0))
			{
				if (unk_0x090C65D5190A249D(unk_0xC8B93D94F8954288(), -828834893) != 1)
				{
					unk_0xE5F6BE3F8E937ACE(unk_0xC8B93D94F8954288(), 0, 0);
				}
			}
		}
	}
}

int func_176(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x2BE3C7FA4FCCA784(0, 71, 1);
	unk_0x2BE3C7FA4FCCA784(0, 72, 1);
	unk_0x2BE3C7FA4FCCA784(0, 76, 1);
	unk_0x2BE3C7FA4FCCA784(0, 73, 1);
	unk_0x2BE3C7FA4FCCA784(0, 59, 1);
	unk_0x2BE3C7FA4FCCA784(0, 60, 1);
	if (bParam5)
	{
		unk_0x2BE3C7FA4FCCA784(0, 75, 1);
	}
	unk_0x2BE3C7FA4FCCA784(0, 80, 1);
	if (!bParam6)
	{
		unk_0x2BE3C7FA4FCCA784(0, 69, 1);
		unk_0x2BE3C7FA4FCCA784(0, 70, 1);
		unk_0x2BE3C7FA4FCCA784(0, 68, 1);
	}
	unk_0x2BE3C7FA4FCCA784(0, 74, 1);
	unk_0x2BE3C7FA4FCCA784(0, 86, 1);
	unk_0x2BE3C7FA4FCCA784(0, 81, 1);
	unk_0x2BE3C7FA4FCCA784(0, 82, 1);
	unk_0x2BE3C7FA4FCCA784(0, 138, 1);
	unk_0x2BE3C7FA4FCCA784(0, 136, 1);
	unk_0x2BE3C7FA4FCCA784(0, 114, 1);
	unk_0x2BE3C7FA4FCCA784(0, 107, 1);
	unk_0x2BE3C7FA4FCCA784(0, 110, 1);
	unk_0x2BE3C7FA4FCCA784(0, 89, 1);
	unk_0x2BE3C7FA4FCCA784(0, 89, 1);
	unk_0x2BE3C7FA4FCCA784(0, 87, 1);
	unk_0x2BE3C7FA4FCCA784(0, 88, 1);
	unk_0x2BE3C7FA4FCCA784(0, 113, 1);
	unk_0x2BE3C7FA4FCCA784(0, 115, 1);
	unk_0x2BE3C7FA4FCCA784(0, 116, 1);
	unk_0x2BE3C7FA4FCCA784(0, 117, 1);
	unk_0x2BE3C7FA4FCCA784(0, 118, 1);
	unk_0x2BE3C7FA4FCCA784(0, 119, 1);
	unk_0x2BE3C7FA4FCCA784(0, 131, 1);
	unk_0x2BE3C7FA4FCCA784(0, 132, 1);
	unk_0x2BE3C7FA4FCCA784(0, 123, 1);
	unk_0x2BE3C7FA4FCCA784(0, 126, 1);
	unk_0x2BE3C7FA4FCCA784(0, 129, 1);
	unk_0x2BE3C7FA4FCCA784(0, 130, 1);
	unk_0x2BE3C7FA4FCCA784(0, 133, 1);
	unk_0x2BE3C7FA4FCCA784(0, 134, 1);
	unk_0xFDE2F5F10CE86C82();
	if ((unk_0x693EBB4F13506457() - Global_29) > 500)
	{
		unk_0x5C384485B80ABDBC(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x693EBB4F13506457();
	if (!unk_0xB6900B8CB0ABBD2B(iParam0))
	{
		if (unk_0xA3C5926D6E5619AE(unk_0x9BA9222C7124CA04(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_177()
{
	unk_0x2BE3C7FA4FCCA784(0, 21, 1);
	unk_0x2BE3C7FA4FCCA784(0, 37, 1);
	unk_0x2BE3C7FA4FCCA784(0, 25, 1);
	unk_0x2BE3C7FA4FCCA784(0, 141, 1);
	unk_0x2BE3C7FA4FCCA784(0, 140, 1);
	unk_0x2BE3C7FA4FCCA784(0, 24, 1);
	unk_0x2BE3C7FA4FCCA784(0, 257, 1);
	unk_0x2BE3C7FA4FCCA784(0, 22, 1);
	unk_0x2BE3C7FA4FCCA784(0, 23, 1);
}

void func_178()
{
	if (!Global_14413.f_1 == 1)
	{
		if (func_181(0))
		{
			func_179(0);
		}
		unk_0x59A0729D503ED758(&Global_2284, 2);
	}
}

void func_179(int iParam0)
{
	if (Global_14571)
	{
		func_180(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		unk_0x59A0729D503ED758(&Global_2284, 16);
	}
	if (unk_0x44E93B894936152F())
	{
		unk_0xB518E9C8553B1D2B(0);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		unk_0x59A0729D503ED758(&Global_2283, 30);
	}
	else
	{
		unk_0x77621132305B133B(&Global_2283, 30);
	}
	if (!func_125())
	{
		Global_14413.f_1 = 3;
	}
}

void func_180(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_181(0))
		{
			Global_14571 = 1;
			if (bParam1)
			{
				unk_0xCE4D902766AE0E55(&Global_14350);
			}
			Global_14341 = { Global_14359[Global_14358 /*3*/] };
			unk_0xDA89C6AF8C0D7C39(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = { Global_14366[Global_14358 /*3*/] };
		if (bParam1)
		{
			unk_0xDA89C6AF8C0D7C39(Global_14350);
		}
		else
		{
			unk_0xDA89C6AF8C0D7C39(Global_14341);
		}
	}
}

int func_181(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xDCC86F723E82125E(Global_2283, 14))
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
	if (unk_0xCBC8FFE55DC722B5(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14413.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_182(int iParam0)
{
	if ((((iParam0 == 52 || iParam0 == 53) || iParam0 == 54) || iParam0 == 55) || iParam0 == 56)
	{
		return 1;
	}
	return 0;
}

int func_183(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_169();
	}
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_185(&(Global_100063[iParam0 /*10*/].f_9), 1, 4, 0, 0);
	if (!iVar0 == 1)
	{
		return 0;
	}
	func_184(iParam0);
	return 1;
}

void func_184(int iParam0)
{
	Global_100063[iParam0 /*10*/].f_4 = 1;
	Global_100063[iParam0 /*10*/].f_5 = 0;
	Global_100063[iParam0 /*10*/].f_6 = 0;
	Global_100063[iParam0 /*10*/] = 0;
}

int func_185(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_88917.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_187(0))
		{
			return 0;
		}
		Global_35664++;
		*uParam0 = Global_35664;
		unk_0x9B5503F5CD2CEB12(unk_0x1A96BAEAC664567A(), 0);
		Global_17118.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xBD11A7205F364E1A(8);
		}
		Global_35700 = iParam2;
		Global_35662 = *uParam0;
		Global_35663 = iParam4;
		Global_35661 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35661 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35661)
			{
				if (Global_35667[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35662 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_167(iParam2))
		{
			return 0;
		}
		if (Global_35661 == 8)
		{
			return 0;
		}
		Global_35664++;
		*uParam0 = Global_35664;
		Global_35667[Global_35661 /*4*/] = Global_35664;
		Global_35667[Global_35661 /*4*/].f_1 = iParam1;
		Global_35667[Global_35661 /*4*/].f_2 = iParam2;
		Global_35667[Global_35661 /*4*/].f_3 = 0;
		Global_35661++;
		if (iParam4 != 0)
		{
			func_186(uParam0, iParam4);
		}
	}
	return 2;
}

void func_186(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_35661 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35661)
	{
		if (Global_35667[iVar0 /*4*/] == *uParam0)
		{
			Global_35667[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

int func_187(int iParam0)
{
	if (Global_35700 == 15)
	{
		return 0;
	}
	if (func_167(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_188()
{
	if (Global_91106 == 10 || Global_91106 == 9)
	{
		return 1;
	}
	return 0;
}

int func_189(int iParam0)
{
	char* sVar0;
	
	if (Global_69317)
	{
		func_334("STEP_3_COMMON_CanRCLaunch - Script denied. Multiplayer is running [TERMINATING]");
		return 0;
	}
	if (!Global_100976.f_7719 && !func_197(1))
	{
		func_334("STEP_3_COMMON_CanRCLaunch - Script denied, game flow is not active");
		return 0;
	}
	if (!func_190(iParam0))
	{
		Global_100063[iParam0 /*10*/].f_1 = 1;
		func_334("STEP_3_COMMON_CanRCLaunch - Script denied by RC Controller [TERMINATING]");
		return 0;
	}
	if (Global_91106.f_11 == 6)
	{
		if (Global_91106 < 9)
		{
			func_95(iParam0, &sVar0);
			if (unk_0xF8D041B05C3D1FD4(&(Global_91106.f_3), sVar0))
			{
				func_334("STEP_3_COMMON_CanRCLaunch - Script denied as a replay for this RC is being configured. [TERMINATING]");
				return 0;
			}
		}
	}
	if (unk_0xCBC8FFE55DC722B5(joaat("candidate_controller")) == 0)
	{
		Global_100063[iParam0 /*10*/].f_1 = 1;
		func_334("STEP_3_COMMON_CanRCLaunch - Script denied as candidate_controller is not running. [TERMINATING]");
		return 0;
	}
	return 1;
}

int func_190(int iParam0)
{
	var uVar0;
	
	func_95(iParam0, &uVar0);
	if (!func_167(4))
	{
		if (func_171(iParam0))
		{
		}
		else
		{
			return 0;
		}
	}
	if (func_166() && !func_165())
	{
		return 0;
	}
	if (func_196(iParam0))
	{
		return 0;
	}
	if (iParam0 == -1)
	{
		iParam0 = func_169();
	}
	if (iParam0 == -1)
	{
		return 0;
	}
	if (!func_173(iParam0))
	{
		if (!func_195(iParam0))
		{
			return 0;
		}
		if (!func_194(iParam0))
		{
			return 0;
		}
		if (func_193(iParam0))
		{
			return 0;
		}
	}
	if (iParam0 == 58)
	{
		if (func_191(5))
		{
			Global_100063[iParam0 /*10*/].f_3 = 0;
		}
	}
	if (Global_100063[iParam0 /*10*/].f_3 == 1)
	{
		return 0;
	}
	return 1;
}

int func_191(int iParam0)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (Global_91158.f_294 == 0)
	{
		return 0;
	}
	if (iParam0 == 10)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (func_191(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	else if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		func_192(iParam0, &sVar1);
		iVar9 = unk_0x4C910D0CCCE65059(Global_86477[iParam0 /*10*/].f_3, &sVar1);
		if (iVar9 != 0 && Global_91158.f_294 == iVar9)
		{
			return 1;
		}
	}
	return 0;
}

bool func_192(int iParam0, char* sParam1)
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
			if (unk_0x748CA8A0F3783C60("TrevorsTrailer"))
			{
				StringCopy(sParam1, "v_trailer", 32);
			}
			else if (unk_0x748CA8A0F3783C60("TrevorsTrailerTidy"))
			{
				StringCopy(sParam1, "V_TrailerTIDY", 32);
			}
			else if (unk_0x748CA8A0F3783C60("TrevorsTrailerTrash"))
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
	return !unk_0xF8D041B05C3D1FD4(sParam1, "");
}

bool func_193(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return unk_0xDCC86F723E82125E(Global_100976.f_17208[iParam0 /*6*/], 3);
}

bool func_194(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return unk_0xDCC86F723E82125E(Global_100976.f_17208[iParam0 /*6*/], 2);
}

bool func_195(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return unk_0xDCC86F723E82125E(Global_100976.f_17208[iParam0 /*6*/], 0);
}

int func_196(int iParam0)
{
	if (func_164(iParam0))
	{
		return 0;
	}
	else if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		if (unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) != 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_197(bool bParam0)
{
	if (!bParam0 && unk_0xCBC8FFE55DC722B5(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xDCC86F723E82125E(Global_69565, 0);
}

char* func_198(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Rampage1";
		
		case 1:
			return "Rampage3";
		
		case 2:
			return "Rampage4";
		
		case 3:
			return "Rampage5";
		
		case 4:
			return "Rampage2";
		
		default:
	}
	return "";
}

int func_199(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 52;
		
		case 1:
			return 54;
		
		case 2:
			return 55;
		
		case 3:
			return 56;
		
		case 4:
			return 53;
		
		default:
	}
	return -1;
}

bool func_200()
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_205(unk_0xC8B93D94F8954288()))
	{
		return bVar0;
	}
	if (Global_100063[56 /*10*/].f_3)
	{
		return bVar0;
	}
	if (unk_0x719D80C8C2BB7B0A(unk_0xA34E7C2A5118D638(), 0))
	{
		if (iLocal_292)
		{
			unk_0x9F4AA6F234E8A860(1);
			func_204("RAMP_HELP_CRIM", -1);
			iLocal_292 = 0;
		}
		bVar0 = true;
	}
	else if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
	{
		if (iLocal_291)
		{
			unk_0x9F4AA6F234E8A860(1);
			func_204("RAMP_HELP_FOOT", -1);
			iLocal_291 = 0;
		}
		bVar0 = true;
	}
	else if ((func_203(0) || unk_0xA8D4B6BDCF6DE72B()) || func_202())
	{
		if (func_2("RAMP_HELP_TRIG"))
		{
			if (func_203(0))
			{
			}
			else if (unk_0xA8D4B6BDCF6DE72B())
			{
			}
			else if (func_202())
			{
			}
			unk_0x9F4AA6F234E8A860(1);
			iLocal_293 = 0;
		}
		bVar0 = true;
	}
	else if (func_318(108))
	{
		if (!iLocal_293)
		{
			if (!func_2("RAMP_HELP_TRIG"))
			{
				unk_0x9F4AA6F234E8A860(1);
				func_201("RAMP_HELP_TRIG");
			}
			iLocal_293 = 1;
		}
		bVar0 = !unk_0x0139E142C27412BC(2, 51);
	}
	return bVar0;
}

void func_201(char* sParam0)
{
	unk_0xF4A7F7324E8C92A2(sParam0);
	unk_0x31D76F87C39FB8DD(0, 1, 1, -1);
}

int func_202()
{
	if (!unk_0xBBAE3E0C60A8AD4B())
	{
		return Global_88917.f_44 == 1;
	}
	return 0;
}

bool func_203(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17118.f_4 && Global_17118.f_104 == 4);
	}
	return Global_17118.f_4;
}

void func_204(char* sParam0, int iParam1)
{
	unk_0xF4A7F7324E8C92A2(sParam0);
	unk_0x31D76F87C39FB8DD(0, 0, 1, iParam1);
}

bool func_205(int iParam0)
{
	if (!unk_0x95CCECA3948CFE7B(iParam0))
	{
		return 0;
	}
	return !unk_0xB6900B8CB0ABBD2B(iParam0);
}

int func_206(float fParam0)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	if (!func_205(unk_0xC8B93D94F8954288()))
	{
		return -1;
	}
	Var4 = { unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Var1 = { Global_25424[(iLocal_288 + iVar0) /*23*/][0 /*3*/] };
		if (unk_0x4F982ED5336EA899(Var4, Var1, 1) <= fParam0 && unk_0xA3C5926D6E5619AE((Var4.f_2 - Var1.f_2)) < 1.5f)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_207()
{
	func_57();
	return Global_100976.f_1770.f_539.f_3549;
}

void func_208(var* uParam0, struct<3> Param1)
{
	int iVar0;
	int iVar1[5];
	int iVar7;
	
	iVar0 = 0;
	iVar1[0] = 52;
	iVar1[1] = 53;
	iVar1[2] = 54;
	iVar1[3] = 55;
	iVar1[4] = 56;
	if (!func_315(&iVar1, uParam0, Param1, 5f))
	{
		func_334(" Didn't know which RC To Launch");
		func_319(uParam0, 1);
	}
	if (!func_189(*uParam0))
	{
		func_334(" RC Can't Launch");
		func_319(uParam0, 1);
	}
	if (func_314(*uParam0))
	{
		while (true)
		{
			unk_0x4EDE34FBADD967A6(0);
			if (func_313(*uParam0))
			{
				func_319(uParam0, 1);
			}
		}
	}
	func_250(uParam0);
	unk_0x98371F41D43CDFA9(Param1, uParam0->f_15, 1, 0, 0, 0);
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (*uParam0 == 52 || *uParam0 == 53)
		{
			if (func_112(uParam0->f_28[0]))
			{
				if (unk_0xDF87568D121A99AC(-1, unk_0x44C17CCB85A88A1F(uParam0->f_28[0], 1), 5.1f))
				{
					if (*uParam0 == 52)
					{
						iVar7 = 0;
						while (iVar7 < uParam0->f_41)
						{
							if (unk_0x95CCECA3948CFE7B(uParam0->f_41[iVar7]))
							{
								if ((func_112(uParam0->f_28[0]) && unk_0x57BA797A9A91EF93(uParam0->f_41[iVar7], uParam0->f_28[0])) || (func_112(uParam0->f_28[1]) && unk_0x57BA797A9A91EF93(uParam0->f_41[iVar7], uParam0->f_28[1])))
								{
									unk_0xA278ECBE30D8AE4F(&(uParam0->f_41[iVar7]));
								}
							}
							iVar7++;
						}
					}
					unk_0xE76A2B916A59E1A8(uParam0->f_28[0], 100, 500, 0, 1, 1, 0);
					unk_0xB5AD834B3AF18B5D(uParam0->f_28[0], 1000, 1);
					if (func_112(uParam0->f_28[1]))
					{
						unk_0xE76A2B916A59E1A8(uParam0->f_28[1], 100, 500, 0, 1, 1, 0);
						unk_0xB5AD834B3AF18B5D(uParam0->f_28[1], 1000, 1);
					}
					func_334("Sitting Rampage attacked with explosives, cleaning up");
					func_319(uParam0, 1);
				}
			}
			if (func_112(uParam0->f_28[1]))
			{
				if (unk_0xDF87568D121A99AC(-1, unk_0x44C17CCB85A88A1F(uParam0->f_28[1], 1), 5.1f))
				{
					if (*uParam0 == 52)
					{
						iVar7 = 0;
						while (iVar7 < uParam0->f_41)
						{
							if (unk_0x95CCECA3948CFE7B(uParam0->f_41[iVar7]))
							{
								if ((func_112(uParam0->f_28[0]) && unk_0x57BA797A9A91EF93(uParam0->f_41[iVar7], uParam0->f_28[0])) || (func_112(uParam0->f_28[1]) && unk_0x57BA797A9A91EF93(uParam0->f_41[iVar7], uParam0->f_28[1])))
								{
									unk_0xA278ECBE30D8AE4F(&(uParam0->f_41[iVar7]));
								}
							}
							iVar7++;
						}
					}
					unk_0xE76A2B916A59E1A8(uParam0->f_28[1], 100, 500, 0, 1, 1, 0);
					unk_0xB5AD834B3AF18B5D(uParam0->f_28[1], 1000, 1);
					if (func_112(uParam0->f_28[0]))
					{
						unk_0xE76A2B916A59E1A8(uParam0->f_28[0], 100, 500, 0, 1, 1, 0);
						unk_0xB5AD834B3AF18B5D(uParam0->f_28[0], 1000, 1);
					}
					func_334("Sitting Rampage attacked with explosives, cleaning up");
					func_319(uParam0, 1);
				}
			}
		}
		if (func_249(uParam0))
		{
			func_248(uParam0);
			func_334(" RC combat happening in area, tell peds to flee");
			func_136(uParam0);
			func_319(uParam0, 1);
		}
		if (!func_131(uParam0, 1))
		{
			func_334(" RC Is Not Fine And In Range");
			func_319(uParam0, 1);
		}
		if (func_247(52))
		{
			if (unk_0xE9583E80BF9231C4("Rampage1"))
			{
				func_334(" Turning Off Scenario Group For Rampage 1");
				unk_0x5B9B55E417A44413("Rampage1", 0);
			}
		}
		func_246(*uParam0);
		func_238(&iLocal_289, &(uParam0->f_9), Param1);
		if (iVar0 == 0 && iLocal_289 != -1)
		{
			func_237(uParam0, &uLocal_294);
			if (unk_0xA65C064741F2CA67())
			{
				func_334(" Cutscene Loaded");
				iVar0 = 1;
			}
		}
		Local_298 = { unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1) };
		if ((!(*uParam0 == 52 && Local_298.f_2 > 34f) && !(*uParam0 == 53 && Local_298.f_2 > 71f)) && !(*uParam0 == 54 && Local_298.f_2 > 30f))
		{
			if (func_225(uParam0, 0))
			{
				if (*uParam0 == 53)
				{
					if (func_222(uParam0))
					{
						func_334(" Trigger Conditions Met");
						func_174();
						if (!func_5(uParam0))
						{
							func_334(" RC Can't Launch");
							func_319(uParam0, 1);
						}
						func_334(" RC Launcher Waiting To Terminate");
						if (func_3(uParam0))
						{
							func_334(" Ready To Terminate");
							func_319(uParam0, 0);
						}
					}
				}
				else if (func_221(uParam0))
				{
					func_334(" Trigger Conditions Met");
					func_174();
					if (!func_5(uParam0))
					{
						func_334(" RC Can't Launch");
						func_319(uParam0, 1);
					}
					func_334(" RC Launcher Waiting To Terminate");
					if (func_3(uParam0))
					{
						func_334(" Ready To Terminate");
						func_319(uParam0, 0);
					}
				}
			}
			else
			{
				if (*uParam0 == 53)
				{
					func_209(uParam0);
				}
				if (unk_0x000CF7FDBE12A995())
				{
					iLocal_115 = -1;
					unk_0x2F309AF34613F2FA(0);
					unk_0xD1FE26E80A6E2C00(unk_0xC8B93D94F8954288());
				}
			}
		}
	}
}

void func_209(var* uParam0)
{
	char* sVar0;
	
	sVar0 = "misstrvram_2";
	switch (iLocal_116)
	{
		case 0:
			unk_0xC0E8B67A4385D37D(sVar0);
			if (unk_0xF9B86DC1728F1339(sVar0))
			{
				iLocal_116++;
			}
			break;
		
		case 1:
			if (func_112(uParam0->f_28[0]))
			{
				if (func_220(uParam0->f_28[0], unk_0xC8B93D94F8954288(), 1) < 30f && unk_0xE77F5DDBC2E96204(uParam0->f_28[0]))
				{
					func_219(&uLocal_121, 0, uParam0->f_28[0], "RAMPAGEHIPSTER", 0, 1);
					iLocal_116++;
				}
			}
			break;
		
		case 2:
			uLocal_117[0] = unk_0x0B15BB6DFB729046(Local_108, Local_111, 2);
			if (func_112(uParam0->f_28[0]))
			{
				func_210(&uLocal_121, "RAMP2AU", "RAMP2_LEADIN", "RAMP2_LEADIN_1", 7, 0, 0);
				unk_0xA5666A46C1079EFE(uParam0->f_28[0], uLocal_117[0], sVar0, "hipster_post_post_irony", 8f, -8f, 513, 0, 1148846080, 0);
			}
			unk_0x53DDB73894A6597A(uLocal_117[0], 0);
			unk_0x4528D7AA6C2BEF06(uLocal_117[0], 1);
			iLocal_116++;
			break;
		
		case 3:
			if (unk_0xBC6B93737FCDC466(uLocal_117[0]))
			{
				if (unk_0x2091E42376999826(uLocal_117[0]) >= 0.95f)
				{
					iLocal_116++;
				}
			}
			break;
		
		case 4:
			uLocal_117[1] = unk_0x0B15BB6DFB729046(Local_108, Local_111, 2);
			if (func_112(uParam0->f_28[0]))
			{
				func_210(&uLocal_121, "RAMP2AU", "RAMP2_LEADIN", "RAMP2_LEADIN_2", 7, 0, 0);
				unk_0xA5666A46C1079EFE(uParam0->f_28[0], uLocal_117[1], sVar0, "hipster_self_hating_hipster", 8f, -8f, 513, 0, 1148846080, 0);
			}
			unk_0x53DDB73894A6597A(uLocal_117[1], 0);
			unk_0x4528D7AA6C2BEF06(uLocal_117[1], 1);
			iLocal_116++;
			break;
		
		case 5:
			if (unk_0xBC6B93737FCDC466(uLocal_117[1]))
			{
				if (unk_0x2091E42376999826(uLocal_117[1]) >= 0.95f)
				{
					iLocal_116++;
				}
			}
			break;
		
		case 6:
			uLocal_117[2] = unk_0x0B15BB6DFB729046(Local_108, Local_111, 2);
			if (func_112(uParam0->f_28[0]))
			{
				unk_0xA5666A46C1079EFE(uParam0->f_28[0], uLocal_117[2], sVar0, "hipster_idle", 8f, -8f, 513, 0, 1148846080, 0);
			}
			unk_0x53DDB73894A6597A(uLocal_117[2], 1);
			unk_0x4528D7AA6C2BEF06(uLocal_117[2], 0);
			iLocal_116++;
			break;
		
		case 7:
			break;
	}
}

bool func_210(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_218(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15719 = 0;
	Global_15726 = 0;
	Global_15721 = 0;
	Global_16703 = 1;
	Global_16705 = 0;
	Global_16709 = 0;
	StringCopy(&Global_16716, sParam3, 24);
	Global_2621441 = 0;
	return func_211(sParam2, iParam4, 0);
}

int func_211(char* sParam0, int iParam1, bool bParam2)
{
	Global_15713 = 0;
	if (Global_15712 == 0 || Global_15714 == 2)
	{
		if (Global_15712 != 0)
		{
			if (iParam1 > Global_15714)
			{
				if (Global_15719 == 0)
				{
					unk_0xB518E9C8553B1D2B(0);
					Global_14413.f_1 = 3;
					Global_15712 = 0;
					Global_15713 = 1;
					Global_15765 = 0;
					Global_15708 = 0;
					Global_15709 = 0;
					Global_15723 = 0;
					Global_15722 = 0;
					Global_14412 = 0;
				}
				else
				{
					func_129();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x2964A62922189B93())
		{
			return 0;
		}
		if (func_217(8, -1))
		{
			return 0;
		}
		Global_15788 = { Global_15782 };
		func_216();
		Global_15001 = { Global_15166 };
		Global_15718 = Global_15719;
		Global_15725 = Global_15726;
		Global_2621442 = Global_2621441;
		Global_15727 = { Global_15743 };
		Global_15720 = Global_15721;
		Global_16702 = Global_16703;
		Global_16710 = { Global_16716 };
		Global_16704 = Global_16705;
		Global_16706 = Global_16707;
		Global_16708 = Global_16709;
		Global_15331.f_370 = Global_16701;
		Global_15331.f_368 = Global_16699;
		Global_15331.f_369 = Global_16700;
		Global_15708 = Global_15709;
		if (Global_15718)
		{
			unk_0x77621132305B133B(&Global_2283, 20);
			unk_0x77621132305B133B(&Global_2284, 17);
			unk_0x77621132305B133B(&Global_2285, 0);
			if (bParam2)
			{
				func_215();
				if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14413.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14379 == 1)
			{
				return 0;
			}
			if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
			{
				if (unk_0x7E515EEFC038658D(unk_0xC8B93D94F8954288()))
				{
					return 0;
				}
				if (func_214())
				{
					return 0;
				}
				if (unk_0x50CB4D478D09ED89(unk_0xC8B93D94F8954288()))
				{
					return 0;
				}
				if (unk_0x770AAB67BDD9C729(unk_0xC8B93D94F8954288()))
				{
					return 0;
				}
				if (unk_0x5E161494BC10595F(unk_0xC8B93D94F8954288()))
				{
					return 0;
				}
				if (unk_0x68A7CE67BDF5E83C(unk_0xC8B93D94F8954288(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69317)
				{
					if (unk_0xEE473B4B88D6F842(unk_0xC8B93D94F8954288()))
					{
						return 0;
					}
					if (unk_0x629B1FD22BE568E4(unk_0xA34E7C2A5118D638()))
					{
						return 0;
					}
					if (unk_0x3A2AAB26205C2C37(unk_0xC8B93D94F8954288()))
					{
						return 0;
					}
					if (unk_0x4887094DDBD415E7(unk_0xA34E7C2A5118D638()))
					{
						return 0;
					}
				}
			}
			if (func_125())
			{
				return 0;
			}
			else
			{
				switch (Global_14413.f_1)
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
				if (unk_0xDCC86F723E82125E(Global_2283, 9))
				{
					return 0;
				}
			}
			func_213();
			Global_15722 = bParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_212();
		return 1;
	}
	if (Global_15712 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15714 || iParam1 == Global_15714)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_129();
	}
	return 0;
}

void func_212()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14580[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xB518E9C8553B1D2B(0);
	Global_15712 = 1;
}

void func_213()
{
	Global_15765 = Global_15764;
	Global_15759 = Global_15760;
	Global_15806 = { Global_15794 };
	Global_15812 = { Global_15800 };
	Global_15767 = Global_15766;
	Global_15836 = { Global_15818 };
	Global_15842 = { Global_15824 };
	Global_15848 = { Global_15830 };
	Global_15854 = { Global_15860 };
	Global_1598 = Global_1599;
	Global_1600 = Global_1601;
	Global_15723 = Global_15724;
	Global_15725 = Global_15726;
	Global_15727 = { Global_15743 };
	Global_15716 = Global_15717;
	Global_16728 = 0;
	Global_15761 = 0;
	Global_15762 = 0;
	unk_0x77621132305B133B(&Global_2284, 16);
}

int func_214()
{
	int iVar0;
	int iVar1;
	
	if (Global_69317)
	{
		iVar0 = 0;
		unk_0xA51F11E1DC7307BB(unk_0xC8B93D94F8954288(), &iVar1, 1);
		if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xA4860063B4E6B963() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
	{
		if (unk_0x0917C1C640BB7484(unk_0xC8B93D94F8954288(), 78, 1))
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

void func_215()
{
	if (func_58(14))
	{
		if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
		{
			if (unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()) == Global_100976.f_32519[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()) == Global_100976.f_32519[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()) == Global_100976.f_32519[2 /*29*/])
			{
				Global_14413 = 2;
			}
			else
			{
				Global_14413 = 0;
			}
		}
	}
	else
	{
		Global_14413 = func_207();
		if (Global_14413 == 145)
		{
			Global_14413 = 3;
		}
		if (Global_69317)
		{
			Global_14413 = 3;
		}
		if (Global_14413 > 3)
		{
			Global_14413 = 3;
		}
	}
}

void func_216()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15001[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15001[iVar0 /*10*/].f_1), "", 24);
		Global_15001[iVar0 /*10*/].f_7 = 0;
		Global_15001[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15001.f_161 = -99;
	Global_15001.f_162 = { 0f, 0f, 0f };
}

bool func_217(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1338611.f_203[iParam1];
			}
			break;
	}
	return unk_0xDCC86F723E82125E(Global_1338611.f_949, iParam0);
}

void func_218(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15166 = { *uParam0 };
	Global_1599 = iParam1;
	StringCopy(&Global_15782, sParam2, 24);
	Global_16701 = iParam5;
	if (iParam3 == 0)
	{
		Global_16699 = 1;
		Global_16697 = 0;
	}
	else
	{
		Global_16699 = 0;
		Global_16697 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16700 = 1;
		Global_16698 = 0;
	}
	else
	{
		Global_16700 = 0;
		Global_16698 = 1;
	}
}

void func_219(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69317)
	{
		if (!unk_0x2DC9BA2299B45EA6(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x8EB9A60FB4C37A34(iParam2, 0);
			}
			else
			{
				unk_0x8EB9A60FB4C37A34(iParam2, 1);
			}
		}
		if (!unk_0x2DC9BA2299B45EA6(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x7EAD9630176BD15E(iParam2, 0);
			}
			else
			{
				unk_0x7EAD9630176BD15E(iParam2, 1);
			}
		}
	}
}

float func_220(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xB6900B8CB0ABBD2B(iParam0))
	{
		Var0 = { unk_0x44C17CCB85A88A1F(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x44C17CCB85A88A1F(iParam0, 0) };
	}
	if (!unk_0xB6900B8CB0ABBD2B(iParam1))
	{
		Var3 = { unk_0x44C17CCB85A88A1F(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x44C17CCB85A88A1F(iParam1, 0) };
	}
	return unk_0x4F982ED5336EA899(Var0, Var3, iParam2);
}

int func_221(var* uParam0)
{
	func_174();
	if (iLocal_115 < 0)
	{
		if (unk_0xB7A628320EFF8E47(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), unk_0x44C17CCB85A88A1F(uParam0->f_28[1], 1)) < 25f)
		{
			return 1;
		}
		switch (*uParam0)
		{
			case 52:
				unk_0x4E0A15B03F32C5E5(uParam0->f_28[0], 0.1f, 0f, 0.9f, 1, -1, 2500, 2000, 0);
				unk_0xE48D9147BC1F4CD7(unk_0xC8B93D94F8954288(), uParam0->f_28[0], -1, 0, 2);
				unk_0x3CC0EB07DC1F5A44(1);
				unk_0x738D81A70EEB6E1B(-5f);
				unk_0xDDD2941088121FB4(0.1f);
				unk_0xFE001801F24E5665(0f);
				unk_0xBD464480C6D92A9B(0.3f);
				unk_0x6F54F772EE466016(40f);
				break;
			
			case 54:
				unk_0x4E0A15B03F32C5E5(uParam0->f_28[0], 0f, -0.1f, 0.9f, 1, -1, 2500, 2000, 0);
				unk_0xE48D9147BC1F4CD7(unk_0xC8B93D94F8954288(), uParam0->f_28[0], -1, 0, 2);
				unk_0x3CC0EB07DC1F5A44(1);
				unk_0x738D81A70EEB6E1B(-10f);
				unk_0xDDD2941088121FB4(-0.9f);
				unk_0xFE001801F24E5665(0f);
				unk_0xBD464480C6D92A9B(0.35f);
				unk_0x6F54F772EE466016(40f);
				break;
			
			case 55:
				unk_0x4E0A15B03F32C5E5(uParam0->f_28[1], 0f, 0f, 0.9f, 1, -1, 2500, 2000, 0);
				unk_0xE48D9147BC1F4CD7(unk_0xC8B93D94F8954288(), uParam0->f_28[1], -1, 0, 2);
				unk_0x3CC0EB07DC1F5A44(1);
				unk_0x738D81A70EEB6E1B(-8f);
				unk_0xDDD2941088121FB4(-0.9f);
				unk_0xFE001801F24E5665(0.1f);
				unk_0xBD464480C6D92A9B(0.35f);
				unk_0x6F54F772EE466016(40f);
				break;
			
			case 56:
				unk_0x4E0A15B03F32C5E5(uParam0->f_28[1], 0f, 0f, 0f, 1, -1, 2500, 2000, 0);
				unk_0xE48D9147BC1F4CD7(unk_0xC8B93D94F8954288(), uParam0->f_28[1], -1, 0, 2);
				unk_0x3CC0EB07DC1F5A44(1);
				unk_0x738D81A70EEB6E1B(-5f);
				unk_0xDDD2941088121FB4(0.15f);
				unk_0xFE001801F24E5665(0f);
				unk_0xBD464480C6D92A9B(0.3f);
				unk_0x6F54F772EE466016(40f);
				break;
		}
		iLocal_115 = unk_0x693EBB4F13506457() + 2500;
	}
	else if (unk_0x693EBB4F13506457() > iLocal_115)
	{
		iLocal_115 = -1;
		return 1;
	}
	return 0;
}

int func_222(var uParam0)
{
	func_174();
	switch (iLocal_286)
	{
		case 0:
			if (func_112(uParam0->f_28[0]))
			{
				func_223();
				iLocal_286++;
			}
			break;
		
		case 1:
			if (func_112(uParam0->f_28[0]))
			{
				if (!func_130())
				{
					if (func_210(&uLocal_121, "RAMP2AU", "RAMP2_LEADIN", "RAMP2_LEADIN_3", 8, 0, 0))
					{
						uLocal_287 = unk_0x0B15BB6DFB729046(Local_108, Local_111, 2);
						unk_0xA5666A46C1079EFE(uParam0->f_28[0], uLocal_287, "misstrvram_2", "hipster_cunts_in_america", 8f, -8f, 513, 0, 1148846080, 0);
						unk_0x4E0A15B03F32C5E5(uParam0->f_28[0], 0f, 0f, 0.5f, 1, -1, 2500, 2000, 0);
						unk_0xE48D9147BC1F4CD7(unk_0xC8B93D94F8954288(), uParam0->f_28[0], -1, 0, 2);
						unk_0x3CC0EB07DC1F5A44(1);
						unk_0x738D81A70EEB6E1B(0f);
						unk_0xDDD2941088121FB4(0.1f);
						unk_0xFE001801F24E5665(0f);
						unk_0xBD464480C6D92A9B(0.35f);
						unk_0x6F54F772EE466016(40f);
						iLocal_286++;
					}
				}
			}
			break;
		
		case 2:
			if (func_112(uParam0->f_28[0]))
			{
				if (!func_130())
				{
					iLocal_286++;
				}
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_223()
{
	Global_14578 = 0;
	func_224();
}

void func_224()
{
	unk_0xE9A2B98CC2F095D6();
	Global_16723 = 0;
	if (unk_0x2964A62922189B93())
	{
		unk_0xB518E9C8553B1D2B(0);
		Global_15712 = 6;
	}
}

int func_225(var uParam0, int iParam1)
{
	switch (uParam0->f_16)
	{
		case 0:
			if (*uParam0 == 12)
			{
				if (unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 1826.631f, 4699.115f, 35.38089f, 1812.878f, 4710.457f, 42.05354f, 23.75f, 0, 1, 0))
				{
					if (func_112(uParam0->f_28[0]))
					{
						if (unk_0x4F982ED5336EA899(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), unk_0x44C17CCB85A88A1F(uParam0->f_28[0], 1), 1) < 3f)
						{
							if (func_230(2))
							{
								if (func_229(uParam0->f_27))
								{
									func_228(uParam0->f_27, *uParam0);
									func_334("ARE_RC_TRIGGER_CONDITIONS_MET: RC_TRIG_CHAR - Used special case Eps 4 trigger.");
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
				else if (func_112(uParam0->f_28[0]))
				{
					if (func_227(uParam0))
					{
						if (func_230(2))
						{
							if (func_229(uParam0->f_27))
							{
								func_228(uParam0->f_27, *uParam0);
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
			else if (*uParam0 == 21)
			{
				if ((((!unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), -1895.788f, -434.0192f, 40.30126f, -1883.038f, -444.0811f, 50.24509f, 8.5f, 0, 1, 0) && !unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), -1883.576f, -443.6434f, 36.40581f, -1874.826f, -448.0797f, 49.15162f, 8.5f, 0, 1, 0)) && !unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), -1876.343f, -446.2214f, 35.64637f, -1866.952f, -456.5601f, 49.0442f, 8.5f, 0, 1, 0)) && !unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), -1882.997f, -438.9922f, 44.17246f, -1874.079f, -443.342f, 48.69179f, 0.75f, 0, 1, 0)) || unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), -1878.822f, -441.7655f, 44.9175f, -1877.941f, -439.9522f, 47.28982f, 1.25f, 0, 1, 0))
				{
					if (func_112(uParam0->f_28[0]))
					{
						if (func_227(uParam0))
						{
							if (func_230(2))
							{
								if (func_229(uParam0->f_27))
								{
									func_228(uParam0->f_27, *uParam0);
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
			else if (*uParam0 == 22)
			{
				if (!unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 837.0731f, 1261.086f, 366.1592f, 780.8383f, 1260.829f, 351.405f, 17.75f, 0, 1, 0))
				{
					if (func_112(uParam0->f_28[0]))
					{
						if (func_227(uParam0))
						{
							if (func_230(2))
							{
								if (func_229(uParam0->f_27))
								{
									func_228(uParam0->f_27, *uParam0);
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
			else if (func_112(uParam0->f_28[0]))
			{
				if (func_227(uParam0))
				{
					if (func_230(2))
					{
						if (func_229(uParam0->f_27))
						{
							func_228(uParam0->f_27, *uParam0);
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
			if (func_112(uParam0->f_35[0]))
			{
				if (unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), uParam0->f_35[0], 0))
				{
					if (func_230(3))
					{
						func_228(uParam0->f_27, *uParam0);
						return 1;
					}
				}
				else if (iParam1 == 1)
				{
					func_226();
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 1:
			if (unk_0x95CCECA3948CFE7B(uParam0->f_35[0]))
			{
				if (!unk_0xB6900B8CB0ABBD2B(uParam0->f_35[0]))
				{
					if (unk_0x4F982ED5336EA899(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), unk_0x44C17CCB85A88A1F(uParam0->f_35[0], 1), 1) < uParam0->f_15)
					{
						if (func_230(2))
						{
							if (func_229(uParam0->f_27))
							{
								func_228(uParam0->f_27, *uParam0);
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
			if (unk_0x4F982ED5336EA899(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), uParam0->f_17[0 /*3*/], 1) < uParam0->f_15)
			{
				if (func_230(2))
				{
					if (func_229(uParam0->f_27))
					{
						func_228(uParam0->f_27, *uParam0);
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
			if (unk_0xA0C23498D8E0BB93(unk_0xC8B93D94F8954288(), uParam0->f_17[0 /*3*/], uParam0->f_17[1 /*3*/], 0, 1, 0))
			{
				if (func_230(2))
				{
					if (func_229(uParam0->f_27))
					{
						func_228(uParam0->f_27, *uParam0);
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
			if (*uParam0 == 6)
			{
				if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
				{
					if (func_112(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0)))
					{
						if (unk_0x6B89D299CB2A726F(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0), joaat("towtruck")) || unk_0x6B89D299CB2A726F(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0), joaat("towtruck2")))
						{
							if (unk_0x416EAF6600782EDD(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0), uParam0->f_35[0]))
							{
								if (func_230(3))
								{
									return 1;
								}
							}
						}
						else if ((unk_0x6B89D299CB2A726F(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0), joaat("cargobob")) || unk_0x6B89D299CB2A726F(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0), joaat("cargobob2"))) || unk_0x6B89D299CB2A726F(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0), joaat("cargobob3")))
						{
							if (unk_0xF256E000368EF3D9(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0)) && unk_0xB25729A0F1686474(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0), uParam0->f_35[0]))
							{
								if (func_230(3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
			else if (*uParam0 == 10)
			{
				if (unk_0x96DE6BF92C7FDBAE(unk_0xC8B93D94F8954288()) >= 2f)
				{
					if (unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 245.8885f, 371.9034f, 103.9884f, 241.5898f, 359.6458f, 107.3461f, 1.25f, 0, 1, 0))
					{
						if (func_230(2))
						{
							if (func_229(uParam0->f_27))
							{
								func_228(uParam0->f_27, *uParam0);
								func_334("RC5_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - Eps 2 special case trigger used");
								return 1;
							}
						}
					}
				}
			}
			else if (*uParam0 == 46)
			{
				if (unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), -164.2046f, 277.4866f, 91.55322f, -153.6f, 277.4061f, 97.33813f, 10f, 0, 1, 0))
				{
					return 0;
				}
			}
			else if (*uParam0 == 31)
			{
				if (unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 2728.948f, 4143.44f, 42.29295f, 2722.213f, 4144.521f, 45.43182f, 10f, 0, 1, 0))
				{
					if (func_230(2))
					{
						if (func_229(1))
						{
							func_228(1, *uParam0);
							func_334("RC_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - RC_MAUDE_1 special case vehicle launch area");
							return 1;
						}
					}
				}
			}
			else if (*uParam0 == 39)
			{
				if (unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), -992.4995f, 358.7455f, 96.3735f, -1021.94f, 361.8888f, 65.36148f, 30f, 0, 1, 0))
				{
					if (!unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), -983.5426f, 369.1104f, 68.46017f, -1028.566f, 395.4613f, 94.57245f, 15f, 0, 1, 0))
					{
						if (!unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), -983.875f, 346.7556f, 68.02096f, -1021.451f, 336.3458f, 93.18714f, 14.5f, 0, 1, 0))
						{
							if (func_230(2))
							{
								if (func_229(uParam0->f_27))
								{
									func_228(uParam0->f_27, *uParam0);
									func_334("RC_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - RC_NIGEL_1B special case vehicle launch area");
									return 1;
								}
							}
						}
					}
				}
			}
			if (unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), uParam0->f_17[0 /*3*/], uParam0->f_17[1 /*3*/], uParam0->f_24, 0, 1, 0))
			{
				if (*uParam0 == 45)
				{
					if (unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), 2338.697f, 2597.037f, 45.39052f, 2324.003f, 2597.185f, 47.74961f, 8.5f, 0, 1, 0))
					{
						return 0;
					}
				}
				if (func_230(2))
				{
					if (func_229(uParam0->f_27))
					{
						func_228(uParam0->f_27, *uParam0);
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

void func_226()
{
	func_30(&(Global_92918.f_2311), &Global_92918, 0, 1, 1, 0);
}

int func_227(var uParam0)
{
	float fVar0;
	
	if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0) && uParam0->f_27)
	{
		if (*uParam0 == 27 || *uParam0 == 30)
		{
			fVar0 = 1f;
		}
		else
		{
			fVar0 = 5f;
		}
		if (unk_0x4F982ED5336EA899(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), unk_0x44C17CCB85A88A1F(uParam0->f_28[0], 1), 1) < (uParam0->f_15 + fVar0))
		{
			return 1;
		}
	}
	else if (unk_0x4F982ED5336EA899(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), unk_0x44C17CCB85A88A1F(uParam0->f_28[0], 1), 1) < uParam0->f_15)
	{
		return 1;
	}
	return 0;
}

void func_228(int iParam0, int iParam1)
{
	if (iParam0 == 1)
	{
		if (!func_115(iParam1))
		{
			return;
		}
		if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
		{
			func_334("RC_STOP_PLAYER_VEHICLE_CHECK: Stopping player's vehicle.");
			if (unk_0x0AE990D4D01D6BFE(unk_0xC8B93D94F8954288()) || unk_0xBAD11A89BAC646B5(unk_0xC8B93D94F8954288()))
			{
				func_334("RC_STOP_PLAYER_VEHICLE_CHECK: Turning off engine for plane or helicopter.");
				unk_0x57892FEA93664769(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0), 0, 1, 0);
			}
			func_174();
		}
	}
}

int func_229(bool bParam0)
{
	int iVar0;
	
	if (unk_0x06972B20E75CBE06(unk_0x1A96BAEAC664567A()))
	{
		if (unk_0xCD8A4525A9B5A276(unk_0xC8B93D94F8954288()))
		{
			return 1;
		}
		else if (bParam0)
		{
			if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
			{
				iVar0 = unk_0x974516F979AD07BC();
				if (func_141(iVar0))
				{
					if (unk_0x0AE990D4D01D6BFE(unk_0xC8B93D94F8954288()) || unk_0xBAD11A89BAC646B5(unk_0xC8B93D94F8954288()))
					{
						if ((!unk_0x955A04DD5208F4B7(iVar0) && !unk_0x25011B7D08ACD328(iVar0)) && unk_0x9BA9222C7124CA04(iVar0) < 1f)
						{
							return 1;
						}
					}
					else if (!unk_0x25011B7D08ACD328(iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_230(int iParam0)
{
	int iVar0;
	
	if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
	{
		if (unk_0x95CCECA3948CFE7B(unk_0xC8B93D94F8954288()))
		{
			if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
			{
				iVar0 = func_207();
				if (!func_39(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x56546FAE2D5E944B(unk_0xA34E7C2A5118D638()) || unk_0x25011B7D08ACD328(unk_0xC8B93D94F8954288())) || unk_0xC0AE63CA97F3FF6A(unk_0xC8B93D94F8954288())) || unk_0x770AAB67BDD9C729(unk_0xC8B93D94F8954288())) || unk_0xC1D9AF0588D03376(unk_0xC8B93D94F8954288())) || unk_0x01928D5922397075(unk_0xA34E7C2A5118D638(), 1)) || unk_0x629B1FD22BE568E4(unk_0xA34E7C2A5118D638())) || unk_0xA81F17D63315B662(unk_0xC8B93D94F8954288(), 0)) || func_202()) || Global_100023) || Global_25117) || func_236()) || func_217(8, -1)) || func_80()) || func_235()) || func_234()) || func_233()) || Global_100976.f_6322.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x01928D5922397075(unk_0xA34E7C2A5118D638(), 1) || func_202()) || Global_25117) || func_236()) || func_217(8, -1)) || func_234()) || func_80()) || func_235()) || func_233()) || Global_100976.f_6322.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x56546FAE2D5E944B(unk_0xA34E7C2A5118D638()) || unk_0x25011B7D08ACD328(unk_0xC8B93D94F8954288())) || unk_0xC0AE63CA97F3FF6A(unk_0xC8B93D94F8954288())) || unk_0x770AAB67BDD9C729(unk_0xC8B93D94F8954288())) || unk_0xC1D9AF0588D03376(unk_0xC8B93D94F8954288())) || unk_0x01928D5922397075(unk_0xA34E7C2A5118D638(), 1)) || unk_0x629B1FD22BE568E4(unk_0xA34E7C2A5118D638())) || unk_0xA81F17D63315B662(unk_0xC8B93D94F8954288(), 0)) || func_202()) || Global_100023) || Global_25117) || func_236()) || func_217(8, -1)) || func_234()) || func_80()) || func_235()) || func_233()) || Global_100976.f_6322.f_919[iVar0] == 5) || Global_36247 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x770AAB67BDD9C729(unk_0xC8B93D94F8954288()) || unk_0xC1D9AF0588D03376(unk_0xC8B93D94F8954288())) || unk_0x01928D5922397075(unk_0xA34E7C2A5118D638(), 1)) || unk_0xA81F17D63315B662(unk_0xC8B93D94F8954288(), 0)) || func_202()) || Global_100023) || Global_25117) || func_236()) || func_217(8, -1)) || func_80()) || func_235()) || func_233()) || Global_100976.f_6322.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_202() || unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) > 0) || func_217(8, -1)) || func_233()) || func_232()) || Global_100976.f_6322.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_217(8, -1) || func_80()) || func_235()) || func_232()) || func_231())
						{
							return 0;
						}
						if ((unk_0xA8D4B6BDCF6DE72B() && unk_0xF7531C8E64EC584A() != 3) && unk_0xC8DAE7AE33B529B0() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x95CCECA3948CFE7B(unk_0xC8B93D94F8954288()))
						{
							if ((((((((((((((unk_0xA81F17D63315B662(unk_0xC8B93D94F8954288(), 0) || unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) > 0) || unk_0x25011B7D08ACD328(unk_0xC8B93D94F8954288())) || unk_0x770AAB67BDD9C729(unk_0xC8B93D94F8954288())) || unk_0xC1D9AF0588D03376(unk_0xC8B93D94F8954288())) || unk_0x01928D5922397075(unk_0xA34E7C2A5118D638(), 1)) || unk_0x629B1FD22BE568E4(unk_0xA34E7C2A5118D638())) || func_202()) || Global_25117) || func_236()) || func_217(8, -1)) || func_235()) || func_234()) || func_233()) || Global_100976.f_6322.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xA81F17D63315B662(unk_0xC8B93D94F8954288(), 0) || !unk_0x0332C5816E3E66D5(unk_0xA34E7C2A5118D638())) || !unk_0x56546FAE2D5E944B(unk_0xA34E7C2A5118D638())) || !unk_0xB66DD474AA9E764E()) || unk_0x25011B7D08ACD328(unk_0xC8B93D94F8954288())) || unk_0x770AAB67BDD9C729(unk_0xC8B93D94F8954288())) || unk_0xC1D9AF0588D03376(unk_0xC8B93D94F8954288())) || unk_0x01928D5922397075(unk_0xA34E7C2A5118D638(), 1)) || func_202()) || func_235()) || Global_100023) || Global_25117) || func_236()) || Global_36750) || func_217(8, -1)) || func_234()) || func_232()) || func_233()) || Global_100976.f_6322.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xA81F17D63315B662(unk_0xC8B93D94F8954288(), 0) || !unk_0x0332C5816E3E66D5(unk_0xA34E7C2A5118D638())) || !unk_0x56546FAE2D5E944B(unk_0xA34E7C2A5118D638())) || !unk_0xB66DD474AA9E764E()) || unk_0x719D80C8C2BB7B0A(unk_0xA34E7C2A5118D638(), 0)) || unk_0x25011B7D08ACD328(unk_0xC8B93D94F8954288())) || unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 1)) || unk_0x770AAB67BDD9C729(unk_0xC8B93D94F8954288())) || unk_0xC1D9AF0588D03376(unk_0xC8B93D94F8954288())) || unk_0xF334DA4D1F348F5D(unk_0xC8B93D94F8954288())) || unk_0x01928D5922397075(unk_0xA34E7C2A5118D638(), 1)) || unk_0x629B1FD22BE568E4(unk_0xA34E7C2A5118D638())) || func_202()) || Global_100023) || Global_25117) || func_236()) || func_217(8, -1)) || func_234()) || func_232()) || func_80()) || func_235()) || func_233())
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

var func_231()
{
	return Global_91145.f_1;
}

int func_232()
{
	if (Global_88361 != -1)
	{
		return unk_0xDCC86F723E82125E(Global_82227[Global_88361 /*34*/].f_15, 13);
	}
	return 0;
}

int func_233()
{
	if (unk_0xCBC8FFE55DC722B5(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_234()
{
	if (Global_69577)
	{
		return 1;
	}
	else if (Global_55653 && !Global_55659)
	{
		return 1;
	}
	return 0;
}

bool func_235()
{
	return Global_91158.f_297 > 0;
}

var func_236()
{
	return Global_1315911;
}

void func_237(var uParam0, var uParam1)
{
	if (unk_0x35081E98CA82CBB4())
	{
		if (func_112(unk_0xC8B93D94F8954288()))
		{
			unk_0xF7B15A5F0A17B0E6("Trevor", unk_0xC8B93D94F8954288(), unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()));
		}
		switch (*uParam0)
		{
			case 52:
				if (func_112(uParam0->f_28[0]))
				{
					(*uParam1)[0] = "TriggerHappy_WhiteTrash";
					unk_0xF7B15A5F0A17B0E6((*uParam1)[0], uParam0->f_28[0], 0);
				}
				if (func_112(uParam0->f_28[1]))
				{
					(*uParam1)[1] = "Nervous_WhiteTrash";
					unk_0xF7B15A5F0A17B0E6((*uParam1)[1], uParam0->f_28[1], 0);
				}
				break;
			
			case 53:
				if (func_112(uParam0->f_28[0]))
				{
					(*uParam1)[0] = "Rampage_Hipster";
					unk_0xF7B15A5F0A17B0E6((*uParam1)[0], uParam0->f_28[0], 0);
				}
				break;
			
			case 54:
				if (func_112(uParam0->f_28[0]))
				{
					(*uParam1)[0] = "Armed_Mexican_Goon";
					unk_0xF7B15A5F0A17B0E6((*uParam1)[0], uParam0->f_28[0], 0);
					unk_0x4C385591266379A9((*uParam1)[0], 8, 1, 0, 0);
				}
				if (func_112(uParam0->f_28[1]))
				{
					(*uParam1)[1] = "Mexican_Goon";
					unk_0xF7B15A5F0A17B0E6((*uParam1)[1], uParam0->f_28[1], 0);
				}
				break;
			
			case 55:
				if (func_112(uParam0->f_28[0]))
				{
					(*uParam1)[0] = "Thug";
					unk_0xF7B15A5F0A17B0E6((*uParam1)[0], uParam0->f_28[0], 0);
					unk_0x4C385591266379A9((*uParam1)[0], 10, 0, 1, 0);
				}
				if (func_112(uParam0->f_28[1]))
				{
					(*uParam1)[1] = "Armed_Thug";
					unk_0xF7B15A5F0A17B0E6((*uParam1)[1], uParam0->f_28[1], 0);
					unk_0x4C385591266379A9((*uParam1)[1], 10, 1, 0, 0);
				}
				break;
			
			case 56:
				if (func_112(uParam0->f_28[0]))
				{
					(*uParam1)[0] = "Army_Guy_Right";
					unk_0xF7B15A5F0A17B0E6((*uParam1)[0], uParam0->f_28[0], 0);
				}
				if (func_112(uParam0->f_28[1]))
				{
					(*uParam1)[1] = "Army_Guy_Left";
					unk_0xF7B15A5F0A17B0E6((*uParam1)[1], uParam0->f_28[1], 0);
				}
				break;
			}
	}
}

void func_238(int iParam0, char* sParam1, struct<3> Param2)
{
	if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
	{
		if (!unk_0xB8A06E7E729EED0A(sParam1))
		{
			if (Global_35700 == 17)
			{
				if (*iParam0 != -1)
				{
					func_244(iParam0);
				}
			}
			else if (func_243())
			{
				if (*iParam0 != -1)
				{
					func_244(iParam0);
				}
			}
			else if (*iParam0 == -1)
			{
				if (func_242(unk_0xC8B93D94F8954288(), Param2, 1) <= 100f)
				{
					func_241(iParam0, 1);
				}
			}
			else
			{
				switch (func_240(*iParam0))
				{
					case 1:
						if (unk_0xF8D041B05C3D1FD4(sParam1, "JOSH_1_INT_CONCAT"))
						{
							unk_0x4767D2EEF03042F6(sParam1, 14, 8);
						}
						else
						{
							unk_0x0B3F3AB0A340D234(sParam1, 8);
						}
						unk_0x1096C0FBCC707F59(2);
						func_239(*iParam0, 1);
						break;
					
					case 2:
						unk_0x4BD8CF1B85740417(0);
						unk_0xCDBEE0F3B4A74754();
						unk_0x1096C0FBCC707F59(0);
						func_239(*iParam0, 0);
						break;
				}
				if (func_242(unk_0xC8B93D94F8954288(), Param2, 1) > 120f)
				{
					func_244(iParam0);
				}
			}
		}
	}
}

void func_239(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (Global_69313 == iParam0)
		{
			Global_69314 = iParam0;
		}
	}
	else if (Global_69314 == iParam0)
	{
		Global_69314 = -1;
	}
}

int func_240(int iParam0)
{
	if (Global_69313 == iParam0)
	{
		if (Global_69314 == -1)
		{
			if (Global_69312 < unk_0xB36863F9C6D42649())
			{
				return 1;
			}
		}
	}
	else if (Global_69314 == iParam0)
	{
		return 2;
	}
	return 0;
}

void func_241(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	
	if (Global_69310 < 5)
	{
		Global_69299[Global_69310 /*2*/] = 0;
		Global_69299[Global_69310 /*2*/].f_1 = iParam1;
		bVar0 = false;
		while (!bVar0)
		{
			bVar0 = true;
			iVar1 = 0;
			while (iVar1 < Global_69310)
			{
				if (Global_69299[iVar1 /*2*/] == Global_69299[Global_69310 /*2*/])
				{
					Global_69299[Global_69310 /*2*/]++;
					bVar0 = false;
				}
				iVar1++;
			}
		}
		*iParam0 = Global_69299[Global_69310 /*2*/];
		Global_69310++;
		Global_69311 = 1;
	}
	else
	{
		*iParam0 = -1;
	}
}

float func_242(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0xB6900B8CB0ABBD2B(iParam0))
	{
		Var0 = { unk_0x44C17CCB85A88A1F(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x44C17CCB85A88A1F(iParam0, 0) };
	}
	return unk_0x4F982ED5336EA899(Var0, Param1, iParam4);
}

bool func_243()
{
	return Global_88748;
}

void func_244(int iParam0)
{
	unk_0x4BD8CF1B85740417(0);
	unk_0xCDBEE0F3B4A74754();
	func_245(iParam0);
}

void func_245(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (*iParam0 == -1)
	{
		return;
	}
	if (Global_69314 == *iParam0)
	{
		func_239(*iParam0, 0);
	}
	if (Global_69313 == *iParam0)
	{
		Global_69313 = -1;
	}
	bVar0 = false;
	iVar1 = 0;
	while (!bVar0 && iVar1 < Global_69310)
	{
		if (Global_69299[iVar1 /*2*/] == *iParam0)
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
	while (iVar2 <= (Global_69310 - 2))
	{
		Global_69299[iVar2 /*2*/] = Global_69299[iVar2 + 1 /*2*/];
		Global_69299[iVar2 /*2*/].f_1 = Global_69299[iVar2 + 1 /*2*/].f_1;
		iVar2++;
	}
	Global_69299[(Global_69310 - 1) /*2*/] = -1;
	Global_69299[(Global_69310 - 1) /*2*/].f_1 = 3;
	Global_69310 = (Global_69310 - 1);
	Global_69311 = 1;
	Global_69312 = unk_0xB36863F9C6D42649();
	*iParam0 = -1;
}

void func_246(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_169();
	}
	if (iParam0 == -1)
	{
		return;
	}
	Global_100063[iParam0 /*10*/].f_1 = 1;
}

bool func_247(int iParam0)
{
	return Global_100063[iParam0 /*10*/].f_1;
}

void func_248(var uParam0)
{
	if (*uParam0 == 52)
	{
		func_334(" RAMPAGE 1 - FORCE FREEZE CHAIRS AND PRE-RELEASE FOR B*2124538");
		if (unk_0x95CCECA3948CFE7B(uParam0->f_41[3]))
		{
			unk_0xB7A2078CD1C9A82F(uParam0->f_41[3], 1);
			unk_0xC2BB205CCEB68102(&(uParam0->f_41[3]));
			uParam0->f_41[3] = 0;
		}
		if (unk_0x95CCECA3948CFE7B(uParam0->f_41[4]))
		{
			unk_0xB7A2078CD1C9A82F(uParam0->f_41[4], 1);
			unk_0xC2BB205CCEB68102(&(uParam0->f_41[4]));
			uParam0->f_41[4] = 0;
		}
	}
}

int func_249(var uParam0)
{
	if ((*uParam0 == 54 || *uParam0 == 55) || *uParam0 == 56)
	{
		if (unk_0xF350D43723296AF9(unk_0xC8B93D94F8954288()) > 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_250(var uParam0)
{
	switch (*uParam0)
	{
		case 52:
			func_312(uParam0);
			iLocal_301 = func_311();
			break;
		
		case 53:
			func_305(uParam0);
			iLocal_301 = func_303();
			break;
		
		case 54:
			func_302(uParam0);
			break;
		
		case 55:
			func_301(uParam0);
			iLocal_301 = func_300();
			break;
		
		case 56:
			func_251(uParam0);
			break;
		
		default:
			break;
	}
	if (iLocal_301 != 0)
	{
	}
	uParam0->f_16 = 0;
	if (*uParam0 == 53)
	{
		uParam0->f_15 = 15f;
	}
	else
	{
		uParam0->f_15 = 12f;
	}
	uParam0->f_25 = 1;
}

void func_251(var uParam0)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	sVar0 = "misstvrram_5";
	iVar1 = joaat("s_m_y_marine_03");
	iVar2 = joaat("crusader");
	unk_0x7567CEA8E6B5340B(iVar1);
	unk_0x7567CEA8E6B5340B(iVar2);
	unk_0xC0E8B67A4385D37D(sVar0);
	unk_0xFDFD811E5C1B97AA(joaat("weapon_grenadelauncher"), 31, 0);
	while ((!unk_0x0845149A26DABBA5(iVar1) || !unk_0x0845149A26DABBA5(iVar2)) || !unk_0xF9B86DC1728F1339(sVar0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!func_298(&(uParam0->f_28[0]), iVar1, -1299.4f, 2506.24f, 21.07f, -122.79f, 0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_297(&(uParam0->f_28[0]));
	unk_0x64B2BC184771BDA3(uParam0->f_28[0], "RAMP:PED 0");
	unk_0x5323F488E6A1B660(uParam0->f_28[0], sVar0, "marines_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
	unk_0x8C245572EDB27776(uParam0->f_28[0], 0, 0, 0, 0);
	unk_0x8C245572EDB27776(uParam0->f_28[0], 1, 0, 0, 0);
	unk_0x8C245572EDB27776(uParam0->f_28[0], 2, 0, 0, 0);
	unk_0x8C245572EDB27776(uParam0->f_28[0], 3, 0, 0, 0);
	unk_0x8C245572EDB27776(uParam0->f_28[0], 4, 0, 0, 0);
	unk_0x8C245572EDB27776(uParam0->f_28[0], 5, 0, 0, 0);
	unk_0x8C245572EDB27776(uParam0->f_28[0], 6, 0, 0, 0);
	unk_0x8C245572EDB27776(uParam0->f_28[0], 7, 0, 0, 0);
	unk_0x8C245572EDB27776(uParam0->f_28[0], 8, 0, 0, 0);
	unk_0x8C245572EDB27776(uParam0->f_28[0], 9, 0, 0, 0);
	unk_0x8C245572EDB27776(uParam0->f_28[0], 10, 0, 0, 0);
	unk_0x8C245572EDB27776(uParam0->f_28[0], 11, 0, 0, 0);
	unk_0x37D5496B3B31995F(uParam0->f_28[0], 0);
	unk_0x37D5496B3B31995F(uParam0->f_28[0], 1);
	unk_0x37D5496B3B31995F(uParam0->f_28[0], 2);
	unk_0x37D5496B3B31995F(uParam0->f_28[0], 3);
	unk_0x37D5496B3B31995F(uParam0->f_28[0], 4);
	unk_0x37D5496B3B31995F(uParam0->f_28[0], 5);
	unk_0x37D5496B3B31995F(uParam0->f_28[0], 6);
	unk_0x37D5496B3B31995F(uParam0->f_28[0], 7);
	unk_0x37D5496B3B31995F(uParam0->f_28[0], 8);
	while (!func_298(&(uParam0->f_28[1]), iVar1, -1299.49f, 2505.53f, 21.05f, -101.94f, 0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_297(&(uParam0->f_28[1]));
	unk_0x8C245572EDB27776(uParam0->f_28[1], 0, 1, 0, 0);
	unk_0x8C245572EDB27776(uParam0->f_28[1], 1, 0, 0, 0);
	unk_0x8C245572EDB27776(uParam0->f_28[1], 2, 0, 0, 0);
	unk_0x8C245572EDB27776(uParam0->f_28[1], 3, 0, 0, 0);
	unk_0x8C245572EDB27776(uParam0->f_28[1], 4, 0, 0, 0);
	unk_0x8C245572EDB27776(uParam0->f_28[1], 5, 0, 0, 0);
	unk_0x8C245572EDB27776(uParam0->f_28[1], 6, 0, 0, 0);
	unk_0x8C245572EDB27776(uParam0->f_28[1], 7, 0, 0, 0);
	unk_0x8C245572EDB27776(uParam0->f_28[1], 8, 0, 0, 0);
	unk_0x8C245572EDB27776(uParam0->f_28[1], 9, 0, 0, 0);
	unk_0x8C245572EDB27776(uParam0->f_28[1], 10, 0, 0, 0);
	unk_0x8C245572EDB27776(uParam0->f_28[1], 11, 0, 0, 0);
	unk_0x37D5496B3B31995F(uParam0->f_28[1], 0);
	unk_0x37D5496B3B31995F(uParam0->f_28[1], 1);
	unk_0x37D5496B3B31995F(uParam0->f_28[1], 2);
	unk_0x37D5496B3B31995F(uParam0->f_28[1], 3);
	unk_0x37D5496B3B31995F(uParam0->f_28[1], 4);
	unk_0x37D5496B3B31995F(uParam0->f_28[1], 5);
	unk_0x37D5496B3B31995F(uParam0->f_28[1], 6);
	unk_0x37D5496B3B31995F(uParam0->f_28[1], 7);
	unk_0x37D5496B3B31995F(uParam0->f_28[1], 8);
	unk_0x64B2BC184771BDA3(uParam0->f_28[1], "RAMP:PED 1");
	unk_0x5323F488E6A1B660(uParam0->f_28[1], sVar0, "marines_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
	while (!func_296(&(uParam0->f_35[0]), iVar2, -1298.16f, 2504.153f, 21.062f, 165.48f))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0xF18809B65D87E197(uParam0->f_35[0]);
	func_295(&(uParam0->f_35[0]));
	unk_0xD69CBD64600FE923(uParam0->f_35[0], 1, 0);
	unk_0xD69CBD64600FE923(uParam0->f_35[0], 1, 1);
	unk_0xB7A2078CD1C9A82F(uParam0->f_35[0], 1);
	if (!func_252(&(uParam0->f_41[0]), joaat("weapon_grenadelauncher"), -1297.84f, 2505.91f, 19.34f, func_294(-0.5f)))
	{
	}
	else
	{
		unk_0x8FB4254399424391(uParam0->f_41[0], 0, 0);
		unk_0xC76B5C68AB6DC7DF(uParam0->f_41[0], -1297.84f, 2505.91f, 19.34f, 1, 0, 0, 1);
		unk_0x765E3FA65D011F03(uParam0->f_41[0], func_294(-0.5f));
		unk_0xB7A2078CD1C9A82F(uParam0->f_41[0], 1);
	}
	StringCopy(&(uParam0->f_9), "TRVRAM_5_CON", 24);
	uParam0->f_27 = 0;
	unk_0x4BBD72565A0AF033(iVar1);
	unk_0x4BBD72565A0AF033(iVar2);
}

int func_252(var uParam0, int iParam1, struct<3> Param2, float fParam5)
{
	int iVar0;
	var uVar1;
	int iVar7;
	
	if (unk_0x95CCECA3948CFE7B(*uParam0))
	{
		unk_0xA278ECBE30D8AE4F(uParam0);
		*uParam0 = 0;
	}
	iVar0 = unk_0x06C0DD6C22493B3F(iParam1);
	unk_0x7567CEA8E6B5340B(iVar0);
	iVar7 = unk_0x693EBB4F13506457() + 10000;
	while (unk_0x693EBB4F13506457() < iVar7)
	{
		if (unk_0x0845149A26DABBA5(iVar0))
		{
			*uParam0 = unk_0x528C51384A93BF09(iParam1, -1, Param2, 1, 1065353216, 0);
			unk_0x4BBD72565A0AF033(iVar0);
			if (func_293(&uVar1, iParam1, joaat("gun_root")))
			{
				if (unk_0xD5ADCB6BF801B7D8(*uParam0, func_253(&uVar1, iParam1, joaat("gun_root"), 0)))
				{
					unk_0x6304804DE5C41BFF(*uParam0, func_253(&uVar1, iParam1, joaat("gun_root"), 0));
				}
				else if (unk_0xD5ADCB6BF801B7D8(*uParam0, func_253(&uVar1, iParam1, joaat("gun_root"), 1)))
				{
					unk_0x6304804DE5C41BFF(*uParam0, func_253(&uVar1, iParam1, joaat("gun_root"), 1));
				}
			}
			if (unk_0x95CCECA3948CFE7B(*uParam0))
			{
				unk_0xC76B5C68AB6DC7DF(*uParam0, Param2, 1, 0, 0, 1);
				unk_0x765E3FA65D011F03(*uParam0, fParam5);
				return 1;
			}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x4BBD72565A0AF033(iVar0);
	return 0;
}

int func_253(var uParam0, int iParam1, int iParam2, int iParam3)
{
	struct<5> Var0;
	int iVar6;
	int iVar7;
	
	func_292(&Var0, *uParam0, uParam0->f_4, uParam0->f_5, uParam0->f_1);
	iVar7 = 0;
	while (func_254(&Var0, iParam1, iVar6, 0))
	{
		if (Var0.f_4 == iParam2)
		{
			if (iParam3 == iVar7)
			{
				return Var0.f_0;
			}
			iVar7++;
		}
		iVar6++;
	}
	return 0;
}

bool func_254(var uParam0, int iParam1, int iParam2, bool bParam3)
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
	var uVar12;
	struct<4> Var51;
	
	func_292(uParam0, 0, 989182658, 0, 0);
	switch (iParam1)
	{
		case joaat("weapon_pistol"):
			switch (iParam2)
			{
				case 0:
					func_292(uParam0, joaat("component_pistol_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_292(uParam0, joaat("component_pistol_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_292(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 3:
					func_292(uParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 4:
					func_292(uParam0, joaat("component_pistol_varmod_luxe"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam2)
			{
				case 0:
					func_292(uParam0, joaat("component_combatpistol_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_292(uParam0, joaat("component_combatpistol_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_292(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 3:
					func_292(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 4:
					func_292(uParam0, joaat("component_combatpistol_varmod_lowrider"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam2)
			{
				case 0:
					func_292(uParam0, joaat("component_appistol_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_292(uParam0, joaat("component_appistol_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_292(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 3:
					func_292(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 4:
					func_292(uParam0, joaat("component_appistol_varmod_luxe"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam2)
			{
				case 0:
					func_292(uParam0, joaat("component_microsmg_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_292(uParam0, joaat("component_microsmg_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_292(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 3:
					func_292(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
					break;
				
				case 4:
					func_292(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 5:
					func_292(uParam0, joaat("component_microsmg_varmod_luxe"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam2)
			{
				case 0:
					func_292(uParam0, joaat("component_smg_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_292(uParam0, joaat("component_smg_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_292(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 3:
					func_292(uParam0, joaat("component_at_scope_macro_02"), joaat("WAPScop"), 1, 0);
					break;
				
				case 4:
					func_292(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 5:
					func_292(uParam0, joaat("component_smg_varmod_luxe"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam2)
			{
				case 0:
					func_292(uParam0, joaat("component_assaultrifle_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_292(uParam0, joaat("component_assaultrifle_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_292(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 3:
					func_292(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 4:
					func_292(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
					break;
				
				case 5:
					func_292(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 6:
					func_292(uParam0, joaat("component_assaultrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam2)
			{
				case 0:
					func_292(uParam0, joaat("component_carbinerifle_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_292(uParam0, joaat("component_carbinerifle_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_292(uParam0, joaat("component_at_railcover_01"), joaat("WAPRail"), 1, 0);
					break;
				
				case 3:
					func_292(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 4:
					func_292(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 5:
					func_292(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
					break;
				
				case 6:
					func_292(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 7:
					func_292(uParam0, joaat("component_carbinerifle_varmod_luxe"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam2)
			{
				case 0:
					func_292(uParam0, joaat("component_advancedrifle_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_292(uParam0, joaat("component_advancedrifle_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_292(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 3:
					func_292(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
					break;
				
				case 4:
					func_292(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 5:
					func_292(uParam0, joaat("component_advancedrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam2)
			{
				case 0:
					func_292(uParam0, joaat("component_mg_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_292(uParam0, joaat("component_mg_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_292(uParam0, joaat("component_at_scope_small_02"), joaat("WAPScop"), 1, 0);
					break;
				
				case 3:
					func_292(uParam0, joaat("component_mg_varmod_lowrider"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam2)
			{
				case 0:
					func_292(uParam0, joaat("component_combatmg_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_292(uParam0, joaat("component_combatmg_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_292(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 3:
					func_292(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
					break;
				
				case 4:
					func_292(uParam0, joaat("component_combatmg_varmod_lowrider"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam2)
			{
				case 0:
					func_292(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 1:
					func_292(uParam0, joaat("component_at_sr_supp"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 2:
					func_292(uParam0, joaat("component_pumpshotgun_varmod_lowrider"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam2)
			{
				case 0:
					func_292(uParam0, joaat("component_assaultshotgun_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_292(uParam0, joaat("component_assaultshotgun_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_292(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 3:
					func_292(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 4:
					func_292(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam2)
			{
				case 0:
					func_292(uParam0, joaat("component_sniperrifle_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_292(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 2:
					func_292(uParam0, joaat("component_at_scope_large"), joaat("WAPScop"), 1, 1);
					break;
				
				case 3:
					func_292(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 0);
					break;
				
				case 4:
					func_292(uParam0, joaat("component_sniperrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam2)
			{
				case 0:
					func_292(uParam0, joaat("component_heavysniper_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_292(uParam0, joaat("component_at_scope_large"), joaat("WAPScop"), 1, 1);
					break;
				
				case 2:
					func_292(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 0);
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam2)
			{
				case 0:
					func_292(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 1:
					func_292(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 2:
					func_292(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam2)
			{
				case 0:
					func_292(uParam0, joaat("component_minigun_clip_01"), joaat("WAPClip"), 1, 1);
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam2)
			{
				case 0:
					func_292(uParam0, joaat("component_assaultsmg_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_292(uParam0, joaat("component_assaultsmg_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_292(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 3:
					func_292(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
					break;
				
				case 4:
					func_292(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 5:
					func_292(uParam0, joaat("component_assaultsmg_varmod_lowrider"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam2)
			{
				case 0:
					func_292(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 1:
					func_292(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 2:
					func_292(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam2)
			{
				case 0:
					func_292(uParam0, joaat("component_pistol50_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_292(uParam0, joaat("component_pistol50_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_292(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 3:
					func_292(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 4:
					func_292(uParam0, joaat("component_pistol50_varmod_luxe"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam2)
			{
				case 0:
					func_292(uParam0, joaat("component_sawnoffshotgun_varmod_luxe"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		default:
			iVar10 = func_63(iParam1, &uVar12);
			if (iVar10 != -1)
			{
				iVar11 = 0;
				while (iVar11 < unk_0x54B3723DF8B16C85(iVar10))
				{
					if (unk_0x81718480430D1749(iVar10, iVar11, &Var51))
					{
						if (Var51.f_0 == joaat("WAPClip") || Var51.f_0 == joaat("WAPClip_2"))
						{
							iVar1++;
						}
						else if (Var51.f_0 == joaat("WAPFlshLasr") || Var51.f_0 == joaat("WAPFlshLasr_2"))
						{
							iVar2++;
						}
						else if (Var51.f_0 == joaat("WAPScop") || Var51.f_0 == joaat("WAPScop_2"))
						{
							iVar3++;
						}
						else if (Var51.f_0 == joaat("WAPRail") || Var51.f_0 == joaat("WAPRail_2"))
						{
							iVar4++;
						}
						else if (Var51.f_0 == joaat("WAPGrip") || Var51.f_0 == joaat("WAPGrip_2"))
						{
							iVar5++;
						}
						else if (Var51.f_0 == joaat("WAPSupp") || Var51.f_0 == joaat("WAPSupp_2"))
						{
							iVar6++;
						}
						else if (Var51.f_0 == 1731751835)
						{
							iVar7++;
						}
						else if (Var51.f_0 == joaat("gun_root"))
						{
							iVar8++;
						}
						else
						{
							iVar9++;
						}
						if (iVar11 == iParam2)
						{
							if (Var51.f_0 == joaat("WAPClip") || Var51.f_0 == joaat("WAPClip_2"))
							{
								iVar0 = iVar1;
							}
							else if (Var51.f_0 == joaat("WAPFlshLasr") || Var51.f_0 == joaat("WAPFlshLasr_2"))
							{
								iVar0 = iVar2;
							}
							else if (Var51.f_0 == joaat("WAPScop") || Var51.f_0 == joaat("WAPScop_2"))
							{
								iVar0 = iVar3;
							}
							else if (Var51.f_0 == joaat("WAPRail") || Var51.f_0 == joaat("WAPRail_2"))
							{
								iVar0 = iVar4;
							}
							else if (Var51.f_0 == joaat("WAPGrip") || Var51.f_0 == joaat("WAPGrip_2"))
							{
								iVar0 = iVar5;
							}
							else if (Var51.f_0 == joaat("WAPSupp") || Var51.f_0 == joaat("WAPSupp_2"))
							{
								iVar0 = iVar6;
							}
							else if (Var51.f_0 == 1731751835)
							{
								iVar0 = iVar7;
							}
							else if (Var51.f_0 == joaat("gun_root"))
							{
								iVar0 = iVar8;
							}
							else
							{
								iVar0 = iVar9;
							}
							func_292(uParam0, Var51.f_3, Var51.f_0, iVar0, Var51.f_1);
						}
					}
					iVar11++;
				}
			}
			break;
	}
	if (bParam3)
	{
		uParam0->f_2 = func_255(iParam1, *uParam0);
	}
	return uParam0->f_4 != 989182658;
}

int func_255(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<6> Var43;
	int iVar65;
	int iVar66;
	var uVar67;
	struct<6> Var106;
	char* sVar128;
	struct<4> Var144;
	float fVar148;
	
	iVar0 = 0;
	fVar1 = 2.5f;
	if (!unk_0xBBAE3E0C60A8AD4B())
	{
		fVar1 = 2.5f;
		switch (iParam0)
		{
			case joaat("weapon_pistol"):
				switch (iParam1)
				{
					case joaat("component_pistol_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_pistol_clip_02"):
						iVar0 = 155;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 189;
						break;
					
					case joaat("component_at_pi_supp_02"):
						iVar0 = 729;
						break;
					
					case joaat("component_pistol_varmod_luxe"):
						iVar0 = 18600;
						break;
				}
				break;
			
			case joaat("weapon_combatpistol"):
				switch (iParam1)
				{
					case joaat("component_combatpistol_clip_01"):
						iVar0 = 136;
						break;
					
					case joaat("component_combatpistol_clip_02"):
						iVar0 = 159;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 189;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 735;
						break;
					
					case joaat("component_combatpistol_varmod_lowrider"):
						iVar0 = 14500;
						break;
				}
				break;
			
			case joaat("weapon_appistol"):
				switch (iParam1)
				{
					case joaat("component_appistol_clip_01"):
						iVar0 = 145;
						break;
					
					case joaat("component_appistol_clip_02"):
						iVar0 = 165;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 185;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 730;
						break;
					
					case joaat("component_appistol_varmod_luxe"):
						iVar0 = 15800;
						break;
				}
				break;
			
			case joaat("weapon_microsmg"):
				switch (iParam1)
				{
					case joaat("component_microsmg_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_microsmg_clip_02"):
						iVar0 = 137;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 190;
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 549;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 775;
						break;
					
					case joaat("component_microsmg_varmod_luxe"):
						iVar0 = 15100;
						break;
				}
				break;
			
			case joaat("weapon_smg"):
				switch (iParam1)
				{
					case joaat("component_smg_clip_01"):
						iVar0 = 119;
						break;
					
					case joaat("component_smg_clip_02"):
						iVar0 = 134;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 210;
						break;
					
					case joaat("component_at_scope_macro_02"):
						iVar0 = 549;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 815;
						break;
					
					case joaat("component_smg_varmod_luxe"):
						iVar0 = 19300;
						break;
				}
				break;
			
			case joaat("weapon_assaultrifle"):
				switch (iParam1)
				{
					case joaat("component_assaultrifle_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_assaultrifle_clip_02"):
						iVar0 = 129;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 159;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 189;
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 565;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 810;
						break;
					
					case joaat("component_assaultrifle_varmod_luxe"):
						iVar0 = 14400;
						break;
				}
				break;
			
			case joaat("weapon_carbinerifle"):
				switch (iParam1)
				{
					case joaat("component_carbinerifle_clip_01"):
						iVar0 = 99;
						break;
					
					case joaat("component_carbinerifle_clip_02"):
						iVar0 = 105;
						break;
					
					case joaat("component_at_railcover_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 132;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 150;
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 450;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 815;
						break;
					
					case joaat("component_carbinerifle_varmod_luxe"):
						iVar0 = 17900;
						break;
				}
				break;
			
			case joaat("weapon_advancedrifle"):
				switch (iParam1)
				{
					case joaat("component_advancedrifle_clip_01"):
						iVar0 = 110;
						break;
					
					case joaat("component_advancedrifle_clip_02"):
						iVar0 = 124;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 159;
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 450;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 812;
						break;
					
					case joaat("component_advancedrifle_varmod_luxe"):
						iVar0 = 16500;
						break;
				}
				break;
			
			case joaat("weapon_mg"):
				switch (iParam1)
				{
					case joaat("component_mg_clip_01"):
						iVar0 = 135;
						break;
					
					case joaat("component_mg_clip_02"):
						iVar0 = 145;
						break;
					
					case joaat("component_at_scope_small_02"):
						iVar0 = 450;
						break;
					
					case joaat("component_mg_varmod_lowrider"):
						iVar0 = 15600;
						break;
				}
				break;
			
			case joaat("weapon_combatmg"):
				switch (iParam1)
				{
					case joaat("component_combatmg_clip_01"):
						iVar0 = 119;
						break;
					
					case joaat("component_combatmg_clip_02"):
						iVar0 = 126;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 129;
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 559;
						break;
					
					case joaat("component_combatmg_varmod_lowrider"):
						iVar0 = 14000;
						break;
				}
				break;
			
			case joaat("weapon_pumpshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_flsh"):
						iVar0 = 189;
						break;
					
					case joaat("component_at_sr_supp"):
						iVar0 = 975;
						break;
					
					case joaat("component_pumpshotgun_varmod_lowrider"):
						iVar0 = 16900;
						break;
				}
				break;
			
			case joaat("weapon_assaultshotgun"):
				switch (iParam1)
				{
					case joaat("component_assaultshotgun_clip_01"):
						iVar0 = 129;
						break;
					
					case joaat("component_assaultshotgun_clip_02"):
						iVar0 = 139;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 150;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 225;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 899;
						break;
				}
				break;
			
			case joaat("weapon_sniperrifle"):
				switch (iParam1)
				{
					case joaat("component_sniperrifle_clip_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = 559;
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 975;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 920;
						break;
					
					case joaat("component_sniperrifle_varmod_luxe"):
						iVar0 = 13000;
						break;
				}
				break;
			
			case joaat("weapon_heavysniper"):
				switch (iParam1)
				{
					case joaat("component_heavysniper_clip_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = 575;
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 999;
						break;
				}
				break;
			
			case joaat("weapon_grenadelauncher"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						iVar0 = 128;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 185;
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 525;
						break;
				}
				break;
			
			case joaat("weapon_minigun"):
				switch (iParam1)
				{
					case joaat("component_minigun_clip_01"):
						iVar0 = -1;
						break;
				}
				break;
			
			case joaat("weapon_assaultsmg"):
				switch (iParam1)
				{
					case joaat("component_assaultsmg_clip_01"):
						iVar0 = 110;
						break;
					
					case joaat("component_assaultsmg_clip_02"):
						iVar0 = 9700;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2275;
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 10875;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12400;
						break;
					
					case joaat("component_assaultsmg_varmod_lowrider"):
						iVar0 = 17600;
						break;
				}
				if (func_291() && (func_290() || func_289()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("weapon_bullpupshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4100;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2300;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12450;
						break;
				}
				if (func_291() && (func_290() || func_289()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("weapon_pistol50"):
				switch (iParam1)
				{
					case joaat("component_pistol50_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_pistol50_clip_02"):
						iVar0 = 9500;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 2000;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12250;
						break;
					
					case joaat("component_pistol50_varmod_luxe"):
						iVar0 = 20000;
						break;
				}
				if (func_291() && (func_290() || func_289()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("weapon_sawnoffshotgun"):
				switch (iParam1)
				{
					case joaat("component_sawnoffshotgun_varmod_luxe"):
						iVar0 = 13700;
						break;
				}
				break;
			
			case joaat("weapon_marksmanrifle"):
				switch (iParam1)
				{
					case joaat("component_marksmanrifle_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_marksmanrifle_clip_02"):
						iVar0 = 3612;
						break;
					
					case joaat("component_at_scope_large_fixed_zoom"):
						iVar0 = 0;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 1020;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 5000;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 1760;
						break;
					
					case joaat("component_marksmanrifle_varmod_luxe"):
						iVar0 = 17200;
						break;
				}
				break;
			
			case joaat("weapon_heavypistol"):
				switch (iParam1)
				{
					case joaat("component_heavypistol_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_heavypistol_clip_02"):
						iVar0 = 3680;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 710;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 4800;
						break;
					
					case joaat("component_heavypistol_varmod_luxe"):
						iVar0 = 12000;
						break;
				}
				break;
			
			case joaat("weapon_knuckle"):
				switch (iParam1)
				{
					case joaat("component_knuckle_varmod_pimp"):
						iVar0 = 4900;
						break;
					
					case joaat("component_knuckle_varmod_ballas"):
						iVar0 = 5600;
						break;
					
					case joaat("component_knuckle_varmod_dollar"):
						iVar0 = 5500;
						break;
					
					case joaat("component_knuckle_varmod_diamond"):
						iVar0 = 5200;
						break;
					
					case joaat("component_knuckle_varmod_hate"):
						iVar0 = 4600;
						break;
					
					case joaat("component_knuckle_varmod_love"):
						iVar0 = 4700;
						break;
					
					case joaat("component_knuckle_varmod_player"):
						iVar0 = 4800;
						break;
					
					case joaat("component_knuckle_varmod_king"):
						iVar0 = 4300;
						break;
					
					case joaat("component_knuckle_varmod_vagos"):
						iVar0 = 4000;
						break;
				}
				break;
			
			case joaat("weapon_bullpuprifle"):
				switch (iParam1)
				{
					case joaat("component_bullpuprifle_clip_01"):
						iVar0 = 108;
						break;
					
					case joaat("component_bullpuprifle_clip_02"):
						iVar0 = 9950;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2575;
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 11350;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12500;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4275;
						break;
					
					case joaat("component_bullpuprifle_varmod_low"):
						iVar0 = 16600;
						break;
				}
				break;
			
			case joaat("weapon_snspistol"):
				switch (iParam1)
				{
					case joaat("component_snspistol_clip_01"):
						iVar0 = 29;
						break;
					
					case joaat("component_snspistol_clip_02"):
						iVar0 = 9150;
						break;
					
					case joaat("component_snspistol_varmod_lowrider"):
						iVar0 = 13900;
						break;
				}
				break;
			
			case joaat("weapon_specialcarbine"):
				switch (iParam1)
				{
					case joaat("component_specialcarbine_clip_01"):
						iVar0 = 108;
						break;
					
					case joaat("component_specialcarbine_clip_02"):
						iVar0 = 9975;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2525;
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 11550;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12500;
						break;
					
					case joaat("component_specialcarbine_varmod_lowrider"):
						iVar0 = 18000;
						break;
				}
				break;
			
			case joaat("weapon_machinepistol"):
				switch (iParam1)
				{
					case joaat("component_machinepistol_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_machinepistol_clip_02"):
						iVar0 = 3680;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 4840;
						break;
				}
				break;
			
			default:
				iVar2 = func_63(iParam0, &uVar4);
				if (iVar2 != -1)
				{
					iVar3 = 0;
					while (iVar3 < unk_0x54B3723DF8B16C85(iVar2))
					{
						if (unk_0x81718480430D1749(iVar2, iVar3, &Var43))
						{
							if (Var43.f_3 == iParam1)
							{
								fVar1 = 1f;
								if (Var43.f_5 == -1)
								{
									iVar0 = -1;
								}
								else
								{
									iVar0 = Var43.f_5;
								}
								if (iParam0 == joaat("weapon_hammer"))
								{
									if (func_291() && (func_290() || func_289()))
									{
										iVar0 = 0;
									}
								}
							}
						}
						iVar3++;
					}
				}
				break;
		}
	}
	else
	{
		fVar1 = 2.5f;
		switch (iParam0)
		{
			case joaat("weapon_pistol"):
				switch (iParam1)
				{
					case joaat("component_pistol_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_pistol_clip_02"):
						iVar0 = 9175;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_2878));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 1675;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4328));
						break;
					
					case joaat("component_at_pi_supp_02"):
						iVar0 = 12050;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4329));
						break;
					
					case joaat("component_pistol_varmod_luxe"):
						iVar0 = Global_262145.f_8487;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4406));
						break;
				}
				break;
			
			case joaat("weapon_combatpistol"):
				switch (iParam1)
				{
					case joaat("component_combatpistol_clip_01"):
						iVar0 = 136;
						break;
					
					case joaat("component_combatpistol_clip_02"):
						iVar0 = 9250;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_2879));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 1825;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4330));
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 12100;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4331));
						break;
					
					case joaat("component_combatpistol_varmod_lowrider"):
						iVar0 = Global_262145.f_9854;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4401));
						break;
				}
				break;
			
			case joaat("weapon_appistol"):
				switch (iParam1)
				{
					case joaat("component_appistol_clip_01"):
						iVar0 = 145;
						break;
					
					case joaat("component_appistol_clip_02"):
						iVar0 = 9400;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_2881));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 1975;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4332));
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 12200;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4333));
						break;
					
					case joaat("component_appistol_varmod_luxe"):
						iVar0 = Global_262145.f_8486;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4395));
						break;
				}
				break;
			
			case joaat("weapon_microsmg"):
				switch (iParam1)
				{
					case joaat("component_microsmg_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_microsmg_clip_02"):
						iVar0 = 9325;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_2882));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 1900;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4336));
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 10800;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4338));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12150;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4337));
						break;
					
					case joaat("component_microsmg_varmod_luxe"):
						iVar0 = Global_262145.f_8490;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4405));
						break;
				}
				break;
			
			case joaat("weapon_smg"):
				switch (iParam1)
				{
					case joaat("component_smg_clip_01"):
						iVar0 = 119;
						break;
					
					case joaat("component_smg_clip_02"):
						iVar0 = 9475;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_2883));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2050;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4339));
						break;
					
					case joaat("component_at_scope_macro_02"):
						iVar0 = 10825;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4341));
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 12250;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4340));
						break;
					
					case joaat("component_smg_varmod_luxe"):
						iVar0 = Global_262145.f_8489;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4410));
						break;
				}
				break;
			
			case joaat("weapon_assaultrifle"):
				switch (iParam1)
				{
					case joaat("component_assaultrifle_clip_01"):
						iVar0 = 120;
						break;
					
					case joaat("component_assaultrifle_clip_02"):
						iVar0 = 9550;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_2885));
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4200;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4349));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2125;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4346));
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 10850;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4348));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12300;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4347));
						break;
					
					case joaat("component_assaultrifle_varmod_luxe"):
						iVar0 = Global_262145.f_8483;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4396));
						break;
				}
				break;
			
			case joaat("weapon_carbinerifle"):
				switch (iParam1)
				{
					case joaat("component_carbinerifle_clip_01"):
						iVar0 = 99;
						break;
					
					case joaat("component_carbinerifle_clip_02"):
						iVar0 = 9775;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_2886));
						break;
					
					case joaat("component_at_railcover_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4350;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4357));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2350;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4354));
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 10900;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4356));
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 12450;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4355));
						break;
					
					case joaat("component_carbinerifle_varmod_luxe"):
						iVar0 = Global_262145.f_8485;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4399));
						break;
				}
				break;
			
			case joaat("weapon_advancedrifle"):
				switch (iParam1)
				{
					case joaat("component_advancedrifle_clip_01"):
						iVar0 = 110;
						break;
					
					case joaat("component_advancedrifle_clip_02"):
						iVar0 = 9925;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_2888));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2425;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4359));
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 10950;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4361));
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 12500;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4360));
						break;
					
					case joaat("component_advancedrifle_varmod_luxe"):
						iVar0 = Global_262145.f_8484;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4394));
						break;
				}
				break;
			
			case joaat("weapon_mg"):
				switch (iParam1)
				{
					case joaat("component_mg_clip_01"):
						iVar0 = 135;
						break;
					
					case joaat("component_mg_clip_02"):
						iVar0 = 9850;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_2889));
						break;
					
					case joaat("component_at_scope_small_02"):
						iVar0 = 10925;
						break;
					
					case joaat("component_mg_varmod_lowrider"):
						iVar0 = Global_262145.f_9855;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4404));
						break;
				}
				break;
			
			case joaat("weapon_combatmg"):
				switch (iParam1)
				{
					case joaat("component_combatmg_clip_01"):
						iVar0 = 119;
						break;
					
					case joaat("component_combatmg_clip_02"):
						iVar0 = 10000;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_2890));
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4425;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4384));
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 10975;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4385));
						break;
					
					case joaat("component_combatmg_varmod_lowrider"):
						iVar0 = Global_262145.f_9856;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4400));
						break;
				}
				break;
			
			case joaat("weapon_pumpshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_flsh"):
						iVar0 = 1750;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4366));
						break;
					
					case joaat("component_at_sr_supp"):
						iVar0 = 12350;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4367));
						break;
					
					case joaat("component_pumpshotgun_varmod_lowrider"):
						iVar0 = Global_262145.f_9851;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4408));
						break;
				}
				break;
			
			case joaat("weapon_assaultshotgun"):
				switch (iParam1)
				{
					case joaat("component_assaultshotgun_clip_01"):
						iVar0 = 129;
						break;
					
					case joaat("component_assaultshotgun_clip_02"):
						iVar0 = 9625;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_2892));
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4275;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4370));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2200;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4371));
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 12350;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4372));
						break;
				}
				break;
			
			case joaat("weapon_sniperrifle"):
				switch (iParam1)
				{
					case joaat("component_sniperrifle_clip_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = 12400;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4373));
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 12500;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4374));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12050;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4375));
						break;
					
					case joaat("component_sniperrifle_varmod_luxe"):
						iVar0 = Global_262145.f_8492;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4411));
						break;
				}
				break;
			
			case joaat("weapon_heavysniper"):
				switch (iParam1)
				{
					case joaat("component_heavysniper_clip_01"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_scope_large"):
						iVar0 = 99;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4376));
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 12500;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4377));
						break;
				}
				break;
			
			case joaat("weapon_grenadelauncher"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4500;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4386));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2500;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4382));
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 11000;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4383));
						break;
				}
				break;
			
			case joaat("weapon_minigun"):
				switch (iParam1)
				{
					case joaat("component_minigun_clip_01"):
						iVar0 = -1;
						break;
				}
				break;
			
			case joaat("weapon_assaultsmg"):
				switch (iParam1)
				{
					case joaat("component_assaultsmg_clip_01"):
						iVar0 = 110;
						break;
					
					case joaat("component_assaultsmg_clip_02"):
						iVar0 = 9700;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_2884));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2275;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4342));
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 10875;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4345));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12400;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4343));
						break;
					
					case joaat("component_assaultsmg_varmod_lowrider"):
						iVar0 = Global_262145.f_9852;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4344));
						break;
				}
				break;
			
			case joaat("weapon_gusenberg"):
				switch (iParam1)
				{
					case joaat("component_gusenberg_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_gusenberg_clip_02"):
						iVar0 = Global_262145.f_5000;
						break;
				}
				break;
			
			case joaat("weapon_snspistol"):
				switch (iParam1)
				{
					case joaat("component_snspistol_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_snspistol_clip_02"):
						iVar0 = Global_262145.f_5577;
						break;
					
					case joaat("component_snspistol_varmod_lowrider"):
						iVar0 = Global_262145.f_9853;
						break;
				}
				break;
			
			case joaat("weapon_specialcarbine"):
				switch (iParam1)
				{
					case joaat("component_specialcarbine_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_specialcarbine_clip_02"):
						iVar0 = Global_262145.f_5582;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_5585;
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = Global_262145.f_5581;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = Global_262145.f_5579;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_262145.f_5584;
						break;
					
					case joaat("component_specialcarbine_varmod_lowrider"):
						iVar0 = Global_262145.f_9857;
						break;
				}
				break;
			
			case joaat("weapon_heavypistol"):
				switch (iParam1)
				{
					case joaat("component_heavypistol_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_heavypistol_clip_02"):
						iVar0 = Global_262145.f_5583;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = Global_262145.f_5587;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = Global_262145.f_5580;
						break;
					
					case joaat("component_heavypistol_varmod_luxe"):
						iVar0 = Global_262145.f_5607;
						break;
				}
				break;
			
			case joaat("weapon_bullpuprifle"):
				switch (iParam1)
				{
					case joaat("component_bullpuprifle_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_bullpuprifle_clip_02"):
						iVar0 = Global_262145.f_5590;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_5593;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_262145.f_5588;
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = Global_262145.f_5589;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_262145.f_5591;
						break;
					
					case joaat("component_bullpuprifle_varmod_low"):
						iVar0 = Global_262145.f_9858;
						break;
				}
				break;
			
			case joaat("weapon_vintagepistol"):
				switch (iParam1)
				{
					case joaat("component_vintagepistol_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_vintagepistol_clip_02"):
						iVar0 = Global_262145.f_6063;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = Global_262145.f_6064;
						break;
				}
				break;
			
			case joaat("weapon_heavyshotgun"):
				switch (iParam1)
				{
					case joaat("component_heavyshotgun_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_heavyshotgun_clip_02"):
						iVar0 = Global_262145.f_6717;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_6718;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = Global_262145.f_6719;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_262145.f_6720;
						break;
				}
				break;
			
			case joaat("weapon_marksmanrifle"):
				switch (iParam1)
				{
					case joaat("component_marksmanrifle_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_marksmanrifle_clip_02"):
						iVar0 = Global_262145.f_6723;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_6724;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_262145.f_6726;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_262145.f_6727;
						break;
					
					case joaat("component_marksmanrifle_varmod_luxe"):
						iVar0 = Global_262145.f_6728;
						break;
				}
				break;
			
			case joaat("weapon_bullpupshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4100;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2300;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4368));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12450;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4369));
						break;
				}
				if (func_291() && (func_290() || func_289()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("weapon_pistol50"):
				switch (iParam1)
				{
					case joaat("component_pistol50_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_pistol50_clip_02"):
						iVar0 = 9500;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_2880));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 2000;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4334));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12250;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4335));
						break;
					
					case joaat("component_pistol50_varmod_luxe"):
						iVar0 = Global_262145.f_8488;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4407));
						break;
				}
				if (func_291() && (func_290() || func_289()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("weapon_sawnoffshotgun"):
				switch (iParam1)
				{
					case joaat("component_sawnoffshotgun_varmod_luxe"):
						iVar0 = Global_262145.f_8491;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4409));
						break;
				}
				break;
			
			case joaat("weapon_knuckle"):
				switch (iParam1)
				{
					case joaat("component_knuckle_varmod_pimp"):
						iVar0 = Global_262145.f_8803;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4414));
						break;
					
					case joaat("component_knuckle_varmod_ballas"):
						iVar0 = Global_262145.f_8804;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4415));
						break;
					
					case joaat("component_knuckle_varmod_dollar"):
						iVar0 = Global_262145.f_8805;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4416));
						break;
					
					case joaat("component_knuckle_varmod_diamond"):
						iVar0 = Global_262145.f_8806;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4417));
						break;
					
					case joaat("component_knuckle_varmod_hate"):
						iVar0 = Global_262145.f_8807;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4418));
						break;
					
					case joaat("component_knuckle_varmod_love"):
						iVar0 = Global_262145.f_8808;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4419));
						break;
					
					case joaat("component_knuckle_varmod_player"):
						iVar0 = Global_262145.f_8809;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4420));
						break;
					
					case joaat("component_knuckle_varmod_king"):
						iVar0 = Global_262145.f_8810;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4421));
						break;
					
					case joaat("component_knuckle_varmod_vagos"):
						iVar0 = Global_262145.f_8811;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4422));
						break;
				}
				break;
			
			case joaat("weapon_machinepistol"):
				switch (iParam1)
				{
					case joaat("component_machinepistol_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_machinepistol_clip_02"):
						iVar0 = Global_262145.f_8828;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4424));
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = Global_262145.f_8829;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4425));
						break;
				}
				break;
			
			case joaat("weapon_switchblade"):
				switch (iParam1)
				{
					case joaat("component_switchblade_varmod_base"):
						iVar0 = 0;
						break;
					
					case joaat("component_switchblade_varmod_var1"):
						iVar0 = Global_262145.f_10699;
						break;
					
					case joaat("component_switchblade_varmod_var2"):
						iVar0 = Global_262145.f_10700;
						break;
				}
				break;
			
			case joaat("weapon_revolver"):
				switch (iParam1)
				{
					case joaat("component_revolver_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_revolver_varmod_boss"):
						iVar0 = Global_262145.f_10757;
						break;
					
					case joaat("component_revolver_varmod_goon"):
						iVar0 = Global_262145.f_10698;
						break;
				}
				break;
			
			case joaat("weapon_compactrifle"):
				switch (iParam1)
				{
					case joaat("component_compactrifle_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_compactrifle_clip_02"):
						iVar0 = Global_262145.f_11684;
						break;
				}
				break;
			
			case joaat("weapon_dbshotgun"):
				switch (iParam1)
				{
					case joaat("component_dbshotgun_clip_01"):
						iVar0 = 0;
						break;
				}
				break;
			
			default:
				iVar65 = func_63(iParam0, &uVar67);
				if (iVar65 != -1)
				{
					iVar66 = 0;
					while (iVar66 < unk_0x54B3723DF8B16C85(iVar65))
					{
						if (unk_0x81718480430D1749(iVar65, iVar66, &Var106))
						{
							if (Var106.f_3 == iParam1)
							{
								fVar1 = 1f;
								if (Var106.f_5 == -1)
								{
									iVar0 = -1;
								}
								else
								{
									iVar0 = Var106.f_5;
								}
							}
						}
						iVar66++;
					}
				}
				break;
			}
	}
	if (unk_0xBBAE3E0C60A8AD4B() && func_287())
	{
		StringCopy(&Var144, func_285(iParam1, iParam0), 16);
		func_282(&sVar128, Var144, unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()), 3, 1, func_283(iParam0), -1, -1);
		if (unk_0x32234DF31822CF4D(&sVar128))
		{
			iVar0 = unk_0xA17D8B5C383E0799(unk_0x7CBED6EFED40E7EB(&sVar128), 1671640801, 1);
		}
	}
	if (iVar0 > 0)
	{
		fVar148 = func_256(iParam0, &iVar0, fVar1);
		if (fVar148 != 1f)
		{
		}
	}
	return iVar0;
}

float func_256(int iParam0, int iParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = 0f;
	if (unk_0xBBAE3E0C60A8AD4B() && func_287())
	{
		return 1f;
	}
	if (!unk_0xBBAE3E0C60A8AD4B())
	{
		*iParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*iParam1) * fParam2));
	}
	if (!Global_69317)
	{
		if (*iParam1 != 0)
		{
			iVar2 = func_279(iParam0);
			if (iVar2 == 3)
			{
				fVar1 = 0.1f;
			}
			else if (iVar2 == 2)
			{
				fVar1 = 0.15f;
			}
			else if (iVar2 == 1)
			{
				fVar1 = 0.25f;
			}
		}
	}
	if (iLocal_101 == 1)
	{
		if (unk_0xBBAE3E0C60A8AD4B())
		{
			*iParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*iParam1) * Global_262145.f_76));
			fVar1 = (fVar1 + (unk_0xBBDA792448DB5A89(Global_262145.f_118) / 100f));
		}
	}
	if (iLocal_101 == 0)
	{
		if (unk_0xBBAE3E0C60A8AD4B())
		{
			*iParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*iParam1) * Global_262145.f_76));
			if (func_257())
			{
				fVar1 = (fVar1 + (unk_0xBBDA792448DB5A89(Global_262145.f_118) / 100f));
				iLocal_101 = 1;
			}
			else
			{
				iLocal_101 = -1;
			}
		}
	}
	fVar0 = (1f - fVar1);
	*iParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*iParam1) * fVar0));
	return fVar0;
}

int func_257()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (unk_0x68B0A67658F2D9C2())
	{
		return 0;
	}
	if (func_276())
	{
		if (func_261())
		{
			iVar0 = func_259();
			iVar1 = func_258();
			fVar2 = ((unk_0xBBDA792448DB5A89(iVar1) / unk_0xBBDA792448DB5A89(iVar0)) * 100f);
			if (fVar2 > IntToFloat(Global_262145.f_117) && iVar0 >= 8)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_258()
{
	int iVar0;
	
	iVar0 = (iVar0 + Global_1347504);
	iVar0 = (iVar0 + Global_1347507);
	return iVar0;
}

int func_259()
{
	int iVar0;
	
	iVar0 = (iVar0 + Global_1347505);
	iVar0 = (iVar0 + Global_1347506);
	iVar0 = (iVar0 + Global_1347504);
	iVar0 = (iVar0 + Global_1347507);
	iVar0 = (iVar0 + Global_1347509);
	iVar0 = (iVar0 + Global_1347508);
	iVar0 = (iVar0 + func_260(joaat("mpply_exploits")));
	iVar0 = (iVar0 + func_260(joaat("mpply_vc_annoyingme")));
	iVar0 = (iVar0 + func_260(joaat("mpply_vc_hate")));
	iVar0 = (iVar0 + func_260(joaat("mpply_bad_crew_name")));
	iVar0 = (iVar0 + func_260(joaat("mpply_bad_crew_motto")));
	iVar0 = (iVar0 + func_260(joaat("mpply_bad_crew_status")));
	iVar0 = (iVar0 + func_260(joaat("mpply_bad_crew_emblem")));
	iVar0 = (iVar0 + func_260(joaat("mpply_playermade_title")));
	iVar0 = (iVar0 + func_260(joaat("mpply_playermade_desc")));
	return iVar0;
}

int func_260(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (unk_0x5F0618A5FDAD55C4(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_261()
{
	struct<7> Var0;
	struct<7> Var7;
	
	unk_0x17A954DE4B7F1D50(&Var0, &(Var0.f_1), &(Var0.f_2), &(Var0.f_3), &(Var0.f_4), &(Var0.f_5));
	Var7 = { func_275(joaat("mpply_started_mp")) };
	if (func_262(Var7, Var0, 7))
	{
		return 1;
	}
	return 0;
}

int func_262(struct<7> Param0, struct<7> Param7, int iParam14)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_273(Param7);
	iVar1 = func_269(Param0, iParam14);
	if (iVar1 == -15)
	{
		return 0;
	}
	if (func_263(iVar0, iVar1) == 1)
	{
		return 1;
	}
	return 0;
}

int func_263(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_268(iParam1) || !func_268(iParam0))
	{
		return 1;
	}
	iVar0 = func_86(iParam0);
	iVar1 = func_86(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_88(iParam0);
	iVar1 = func_88(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_267(iParam0);
	iVar1 = func_267(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_266(iParam0);
	iVar1 = func_266(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_265(iParam0);
	iVar1 = func_265(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_264(iParam0);
	iVar1 = func_264(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_264(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_265(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_266(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_267(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_268(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_264(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_265(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_266(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_86(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_88(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_267(iParam0);
	if (iVar5 < 1 || iVar5 > func_85(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

var func_269(struct<7> Param0, int iParam7)
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	if (func_272(Param0) == 0)
	{
		uVar0 = func_273(Param0);
		uVar1 = uVar0;
		func_270(&uVar1, 0, 0, 0, iParam7, 0, 0);
		if (iParam7 == 0)
		{
			uVar1 = uVar0;
		}
		return uVar1;
	}
	return uVar2;
}

void func_270(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_86(*uParam0);
	iVar1 = func_88(*uParam0);
	iVar2 = func_267(*uParam0);
	iVar3 = func_266(*uParam0);
	iVar4 = func_265(*uParam0);
	iVar5 = func_264(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_85(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_85(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_271(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_271(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_91(uParam0, iParam1);
	func_90(uParam0, iParam2);
	func_89(uParam0, iParam3);
	func_83(uParam0, iParam5);
	func_84(uParam0, iParam4);
	func_82(uParam0, iParam6);
}

int func_272(struct<7> Param0)
{
	if ((((((Param0.f_0 == 0 && Param0.f_1 == 0) && Param0.f_2 == 0) && Param0.f_3 == 0) && Param0.f_4 == 0) && Param0.f_5 == 0) && Param0.f_6 == 0)
	{
		return 1;
	}
	return 0;
}

var func_273(struct<6> Param0, var uParam6)
{
	var uVar0;
	
	if (Param0.f_0 > 0)
	{
		func_82(&uVar0, Param0.f_0);
	}
	if (Param0.f_1 > 0)
	{
		func_83(&uVar0, func_274(Param0.f_1));
	}
	if (Param0.f_2 > 0)
	{
		func_84(&uVar0, Param0.f_2);
	}
	if (Param0.f_3 > 0)
	{
		func_89(&uVar0, Param0.f_3);
	}
	if (Param0.f_4 > 0)
	{
		func_90(&uVar0, Param0.f_4);
	}
	if (Param0.f_5 > 0)
	{
		func_91(&uVar0, Param0.f_5);
	}
	return uVar0;
}

int func_274(int iParam0)
{
	if (iParam0 < 1)
	{
		return 0;
	}
	if (iParam0 > 12)
	{
		return 0;
	}
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
			return 9;
			break;
		
		case 11:
			return 10;
			break;
		
		case 12:
			return 11;
			break;
	}
	return 0;
}

struct<7> func_275(int iParam0)
{
	var uVar0;
	struct<7> Var1;
	struct<7> Var8;
	
	uVar0 = iParam0;
	if (unk_0x38D4415E6F31F916(uVar0, &Var8, 7, -1))
	{
		return Var8;
	}
	return Var1;
}

int func_276()
{
	if (func_278() && func_277(0))
	{
		return 1;
	}
	return 0;
}

var func_277(int iParam0)
{
	return Global_1312369[iParam0];
}

var func_278()
{
	return func_277(func_52() + 1);
}

int func_279(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3[6];
	bool bVar10;
	
	iVar0 = func_207();
	if (iParam0 == 0 || !func_39(iVar0))
	{
		return -1;
	}
	iVar1 = 7;
	switch (iParam0)
	{
		case joaat("weapon_unarmed"):
			break;
		
		case joaat("gadget_parachute"):
			break;
		
		case joaat("weapon_microsmg"):
			iVar1 = 1;
			break;
		
		case joaat("weapon_smg"):
			iVar1 = 1;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			iVar1 = 3;
			break;
		
		case joaat("weapon_pumpshotgun"):
			iVar1 = 3;
			break;
		
		case joaat("weapon_assaultshotgun"):
			iVar1 = 3;
			break;
		
		case joaat("weapon_assaultrifle"):
			iVar1 = 2;
			break;
		
		case joaat("weapon_carbinerifle"):
			iVar1 = 2;
			break;
		
		case joaat("weapon_advancedrifle"):
			iVar1 = 2;
			break;
		
		case joaat("weapon_sniperrifle"):
			break;
		
		case joaat("weapon_heavysniper"):
			break;
		
		case joaat("weapon_mg"):
			iVar1 = 4;
			break;
		
		case joaat("weapon_combatmg"):
			iVar1 = 4;
			break;
		
		case joaat("weapon_rpg"):
			break;
		
		case joaat("weapon_grenadelauncher"):
			break;
		
		case joaat("weapon_minigun"):
			iVar1 = 5;
			break;
		
		case joaat("weapon_knife"):
			break;
		
		case joaat("weapon_nightstick"):
			break;
		
		case joaat("weapon_petrolcan"):
			break;
		
		case joaat("weapon_stungun"):
			break;
		
		case joaat("weapon_appistol"):
			iVar1 = 0;
			break;
		
		case joaat("weapon_combatpistol"):
			iVar1 = 0;
			break;
		
		case joaat("weapon_pistol"):
			iVar1 = 0;
			break;
		
		case joaat("weapon_smokegrenade"):
			break;
		
		case joaat("weapon_grenade"):
			break;
		
		case joaat("weapon_stickybomb"):
			break;
	}
	if (iVar1 != 7)
	{
		switch (func_280(iVar1, iVar0))
		{
			case 1:
				return 3;
				break;
			
			case 2:
				return 2;
				break;
			
			case 3:
				return 1;
				break;
		}
	}
	else
	{
		iVar3[0] = func_280(1, iVar0);
		iVar3[1] = func_280(3, iVar0);
		iVar3[2] = func_280(2, iVar0);
		iVar3[3] = func_280(4, iVar0);
		iVar3[4] = func_280(5, iVar0);
		iVar3[5] = func_280(0, iVar0);
		bVar10 = false;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (iVar3[iVar2] < 3)
			{
				bVar10 = true;
			}
			iVar2++;
		}
		if (!bVar10)
		{
			return 1;
		}
		bVar10 = false;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (iVar3[iVar2] < 2)
			{
				bVar10 = true;
			}
			iVar2++;
		}
		if (!bVar10)
		{
			return 2;
		}
		bVar10 = false;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			if (iVar3[iVar2] < 1)
			{
				bVar10 = true;
			}
			iVar2++;
		}
		if (!bVar10)
		{
			return 3;
		}
	}
	return -1;
}

int func_280(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam0 == 0)
	{
		iVar0 = 0;
		iVar1 = 1;
		iVar2 = 2;
		iVar3 = -1;
	}
	else if (iParam0 == 1)
	{
		iVar0 = 3;
		iVar1 = 4;
		iVar2 = 5;
		iVar3 = -1;
	}
	else if (iParam0 == 2)
	{
		iVar0 = 9;
		iVar1 = 10;
		iVar2 = 11;
		iVar3 = -1;
	}
	else if (iParam0 == 3)
	{
		iVar0 = 6;
		iVar1 = 7;
		iVar2 = 8;
		iVar3 = -1;
	}
	else if (iParam0 == 4)
	{
		iVar0 = 12;
		iVar1 = 13;
		iVar2 = 14;
		iVar3 = -1;
	}
	else if (iParam0 == 5)
	{
		iVar0 = 15;
		iVar1 = 16;
		iVar2 = 17;
		iVar3 = -1;
	}
	else if (iParam0 == 6)
	{
		iVar0 = 18;
		iVar1 = 19;
		iVar2 = 20;
		iVar3 = 21;
	}
	else
	{
		return 0;
	}
	iVar4 = func_281(iVar0, iParam1);
	if (func_281(iVar1, iParam1) < iVar4)
	{
		iVar4 = func_281(iVar1, iParam1);
	}
	if (func_281(iVar2, iParam1) < iVar4)
	{
		iVar4 = func_281(iVar2, iParam1);
	}
	if (iVar3 != -1)
	{
		if (func_281(iVar3, iParam1) < iVar4)
		{
			iVar4 = func_281(iVar3, iParam1);
		}
	}
	return iVar4;
}

int func_281(int iParam0, int iParam1)
{
	return Global_100976.f_17781[iParam1 /*271*/].f_3[iParam0 /*12*/].f_3;
}

void func_282(char* sParam0, char[8] cParam1, char[4] cParam3, char[4] cParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	switch (unk_0x7CBED6EFED40E7EB(&cParam1))
	{
		case 64715401:
		case joaat("GSA_TYPE_R"):
			StringCopy(&cParam1, "GSA_TYPE_R", 16);
			break;
		
		case -414529079:
		case joaat("GSA_TYPE_C"):
			StringCopy(&cParam1, "GSA_TYPE_C", 16);
			break;
		
		case 336264847:
		case joaat("GSA_TYPE_RO"):
			StringCopy(&cParam1, "GSA_TYPE_RO", 16);
			break;
		
		case 531395379:
		case joaat("GSA_TYPE_CH"):
			StringCopy(&cParam1, "GSA_TYPE_CH", 16);
			break;
		
		case 1034118160:
		case joaat("GSA_TYPE_G"):
			StringCopy(&cParam1, "GSA_TYPE_G", 16);
			break;
		
		case -218834291:
		case joaat("GSA_TYPE_B"):
			StringCopy(&cParam1, "GSA_TYPE_B", 16);
			break;
		
		case 1779531303:
		case joaat("GSA_TYPE_FW"):
			StringCopy(&cParam1, "GSA_TYPE_FW", 16);
			break;
	}
	StringCopy(sParam0, "", 64);
	switch (iParam6)
	{
		case 0:
			if (iParam5 == joaat("mp_m_freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam5 == joaat("mp_f_freemode_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_HA_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam7, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam8, 64);
			break;
		
		case 1:
			if (iParam5 == joaat("mp_m_freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam5 == joaat("mp_f_freemode_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_CL_", 64);
			if (iParam7 == 12)
			{
				StringConCat(sParam0, "OUTFIT_", 64);
			}
			StringConCat(sParam0, &cParam1, 64);
			if (iParam9 != -1)
			{
				StringConCat(sParam0, "_n", 64);
				StringIntConCat(sParam0, iParam9, 64);
			}
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam7, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam8, 64);
			break;
		
		case 2:
			if (iParam5 == joaat("mp_m_freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam5 == joaat("mp_f_freemode_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_TA_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam7, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam8, 64);
			break;
		
		case 3:
			StringConCat(sParam0, "WP_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam7, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam8, 64);
			break;
		
		case 4:
			if (iParam5 == Global_67951)
			{
				StringCopy(sParam0, "VE_BIG_YACHT_t0_v0", 64);
			}
			else if (iParam5 == 0)
			{
				StringConCat(sParam0, "VEM_", 64);
				if (iParam7 == 24 || iParam7 == 25)
				{
					if (iParam9 == 1)
					{
						StringConCat(sParam0, "COLOUR_1_", 64);
					}
					else if (iParam9 == 2)
					{
						StringConCat(sParam0, "COLOUR_2_", 64);
					}
					else if (iParam9 == 3)
					{
						StringConCat(sParam0, "COLOUR_EXTRA_1_", 64);
					}
					if (iParam10 == 5)
					{
						StringConCat(sParam0, "MCT_CHROME_", 64);
					}
					else if (iParam10 == 1)
					{
						StringConCat(sParam0, "MCT_CLASSIC_", 64);
					}
					else if (iParam10 == 0)
					{
						StringConCat(sParam0, "MCT_METALLIC_", 64);
					}
					else if (iParam10 == 4)
					{
						StringConCat(sParam0, "MCT_METALS_", 64);
					}
					else if (iParam10 == 3)
					{
						StringConCat(sParam0, "MCT_MATTE_", 64);
					}
					else if (iParam10 == 2)
					{
						StringConCat(sParam0, "MCT_PEARLESCENT_", 64);
					}
					else if (iParam10 == 6)
					{
						StringConCat(sParam0, "MCT_NONE_", 64);
					}
					iParam9 = -1;
				}
				else if (iParam7 == 38)
				{
					StringConCat(sParam0, "COLOUR_5_", 64);
				}
				else if (iParam7 == 65)
				{
					StringConCat(sParam0, "COLOUR_6_", 64);
				}
				StringConCat(sParam0, &cParam1, 64);
				if (iParam9 != -1)
				{
					StringConCat(sParam0, "_n", 64);
					StringIntConCat(sParam0, iParam9, 64);
				}
				StringConCat(sParam0, "_t", 64);
				StringIntConCat(sParam0, iParam7, 64);
				StringConCat(sParam0, "_v", 64);
				StringIntConCat(sParam0, iParam8, 64);
			}
			else if (iParam7 == 22)
			{
				StringCopy(&cParam1, unk_0x4C35C75D2CE82630(iParam5), 16);
				if (unk_0xB8A06E7E729EED0A(&cParam1) || unk_0x7CBED6EFED40E7EB(&cParam1) == -515263000)
				{
					return;
				}
				StringConCat(sParam0, "VEM_INSURANCE_", 64);
				StringConCat(sParam0, &cParam1, 64);
				switch (iParam5)
				{
					case joaat("dubsta2"):
					case joaat("cavalcade2"):
					case joaat("mesa2"):
					case joaat("rapidgt2"):
					case joaat("emperor2"):
						StringConCat(sParam0, "2", 64);
						break;
					
					case joaat("mesa3"):
					case joaat("emperor3"):
					case joaat("burrito3"):
						StringConCat(sParam0, "3", 64);
						break;
					
					case joaat("tornado4"):
						StringConCat(sParam0, "4", 64);
						break;
				}
			}
			else if (iParam7 == 40)
			{
				StringCopy(&cParam1, unk_0x4C35C75D2CE82630(iParam5), 16);
				if (unk_0xB8A06E7E729EED0A(&cParam1))
				{
					return;
				}
				StringConCat(sParam0, "VEU_", 64);
				StringConCat(sParam0, &cParam1, 64);
				StringConCat(sParam0, "_t0_v", 64);
				StringIntConCat(sParam0, iParam8, 64);
			}
			else
			{
				StringConCat(sParam0, "VE_", 64);
				StringConCat(sParam0, &cParam1, 64);
				switch (iParam5)
				{
					case joaat("dubsta2"):
					case joaat("cavalcade2"):
					case joaat("mesa2"):
					case joaat("rapidgt2"):
					case joaat("emperor2"):
						StringConCat(sParam0, "2", 64);
						break;
					
					case joaat("mesa3"):
					case joaat("emperor3"):
					case joaat("burrito3"):
						StringConCat(sParam0, "3", 64);
						break;
					
					case joaat("tornado4"):
						StringConCat(sParam0, "4", 64);
						break;
				}
				StringConCat(sParam0, "_t", 64);
				StringIntConCat(sParam0, iParam7, 64);
				StringConCat(sParam0, "_v", 64);
				StringIntConCat(sParam0, iParam8, 64);
			}
			break;
	}
}

int func_283(int iParam0)
{
	return func_284(iParam0);
}

int func_284(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_unarmed"):
			return 0;
			break;
		
		case joaat("weapon_pistol"):
			return 1;
			break;
		
		case joaat("weapon_combatpistol"):
			return 2;
			break;
		
		case joaat("weapon_appistol"):
			return 3;
			break;
		
		case joaat("weapon_pistol50"):
			return 4;
			break;
		
		case joaat("weapon_smg"):
			return 5;
			break;
		
		case joaat("weapon_assaultsmg"):
			return 6;
			break;
		
		case joaat("weapon_microsmg"):
			return 7;
			break;
		
		case joaat("weapon_assaultrifle"):
			return 8;
			break;
		
		case joaat("weapon_carbinerifle"):
			return 9;
			break;
		
		case joaat("weapon_heavyrifle"):
			return 10;
			break;
		
		case joaat("weapon_advancedrifle"):
			return 11;
			break;
		
		case joaat("weapon_mg"):
			return 12;
			break;
		
		case joaat("weapon_combatmg"):
			return 13;
			break;
		
		case -572349828:
			return 14;
			break;
		
		case joaat("weapon_stickybomb"):
			return 15;
			break;
		
		case joaat("weapon_grenade"):
			return 16;
			break;
		
		case joaat("weapon_smokegrenade"):
			return 17;
			break;
		
		case joaat("weapon_remotesniper"):
			return 18;
			break;
		
		case 392730790:
			return 19;
			break;
		
		case joaat("weapon_sniperrifle"):
			return 20;
			break;
		
		case joaat("weapon_heavysniper"):
			return 21;
			break;
		
		case joaat("weapon_pumpshotgun"):
			return 22;
			break;
		
		case joaat("weapon_bullpupshotgun"):
			return 23;
			break;
		
		case joaat("weapon_assaultshotgun"):
			return 24;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return 25;
			break;
		
		case joaat("weapon_grenadelauncher"):
			return 26;
			break;
		
		case joaat("weapon_rpg"):
			return 27;
			break;
		
		case joaat("weapon_minigun"):
			return 28;
			break;
		
		case -344484024:
			return 29;
			break;
		
		case -1887867191:
			return 30;
			break;
		
		case joaat("weapon_stungun"):
			return 31;
			break;
		
		case -837150131:
			return 32;
			break;
		
		case joaat("gadget_parachute"):
			return 33;
			break;
		
		case joaat("weapon_knife"):
			return 34;
			break;
		
		case joaat("weapon_nightstick"):
			return 35;
			break;
		
		case joaat("weapon_hammer"):
			return 36;
			break;
		
		case joaat("weapon_bat"):
			return 37;
			break;
		
		case joaat("weapon_crowbar"):
			return 38;
			break;
		
		case joaat("weapon_golfclub"):
			return 39;
			break;
		
		case joaat("weapon_grenadelauncher_smoke"):
			return 40;
			break;
		
		case joaat("weapon_molotov"):
			return 41;
			break;
		
		case joaat("weapon_fireextinguisher"):
			return 42;
			break;
		
		case joaat("weapon_petrolcan"):
			return 43;
			break;
		
		case joaat("weapon_digiscanner"):
			return 44;
			break;
		
		case joaat("weapon_bottle"):
			return 45;
			break;
		
		case joaat("weapon_specialcarbine"):
			return 46;
			break;
		
		case joaat("weapon_snspistol"):
			return 47;
			break;
		
		case joaat("weapon_heavypistol"):
			return 49;
			break;
		
		case joaat("weapon_bullpuprifle"):
			return 48;
			break;
		
		case joaat("weapon_gusenberg"):
			return 50;
			break;
		
		case joaat("weapon_dagger"):
			return 51;
			break;
		
		case joaat("weapon_vintagepistol"):
			return 52;
			break;
		
		case joaat("weapon_flaregun"):
			return 57;
			break;
		
		case joaat("weapon_musket"):
			return 53;
			break;
		
		case joaat("weapon_firework"):
			return 54;
			break;
		
		case joaat("weapon_marksmanrifle"):
			return 56;
			break;
		
		case joaat("weapon_heavyshotgun"):
			return 55;
			break;
		
		case joaat("weapon_proxmine"):
			return 60;
			break;
		
		case joaat("weapon_hominglauncher"):
			return 61;
			break;
		
		case joaat("weapon_hatchet"):
			return 58;
			break;
		
		case joaat("weapon_railgun"):
			return 59;
			break;
		
		case joaat("weapon_combatpdw"):
			return 64;
			break;
		
		case joaat("weapon_knuckle"):
			return 62;
			break;
		
		case joaat("weapon_marksmanpistol"):
			return 63;
			break;
		
		case joaat("weapon_machete"):
			return 65;
			break;
		
		case joaat("weapon_machinepistol"):
			return 68;
			break;
		
		case joaat("weapon_dbshotgun"):
			return 66;
			break;
		
		case joaat("weapon_compactrifle"):
			return 67;
			break;
		
		case joaat("weapon_flashlight"):
			return 69;
			break;
		
		case joaat("weapon_revolver"):
			return 70;
			break;
		
		case joaat("weapon_switchblade"):
			return 71;
			break;
	}
	return 0;
}

char* func_285(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<7> Var41;
	
	if (iParam1 == joaat("weapon_knuckle"))
	{
		switch (iParam0)
		{
			case joaat("component_knuckle_varmod_base"):
				return "WT_KNUCKLE";
				break;
			
			case joaat("component_knuckle_varmod_pimp"):
				return "WCT_KNUCK_02";
				break;
			
			case joaat("component_knuckle_varmod_ballas"):
				return "WCT_KNUCK_BG";
				break;
			
			case joaat("component_knuckle_varmod_dollar"):
				return "WCT_KNUCK_DLR";
				break;
			
			case joaat("component_knuckle_varmod_diamond"):
				return "WCT_KNUCK_DMD";
				break;
			
			case joaat("component_knuckle_varmod_hate"):
				return "WCT_KNUCK_HT";
				break;
			
			case joaat("component_knuckle_varmod_love"):
				return "WCT_KNUCK_LV";
				break;
			
			case joaat("component_knuckle_varmod_player"):
				return "WCT_KNUCK_PC";
				break;
			
			case joaat("component_knuckle_varmod_king"):
				return "WCT_KNUCK_SLG";
				break;
			
			case joaat("component_knuckle_varmod_vagos"):
				return "WCT_KNUCK_VG";
				break;
			}
	}
	switch (iParam0)
	{
		case 0:
			return "WCT_INVALID";
			break;
		
		case joaat("component_at_railcover_01"):
			return "WCT_RAIL";
			break;
		
		case joaat("component_at_ar_afgrip"):
			return "WCT_GRIP";
			break;
		
		case joaat("component_at_pi_flsh"):
			return "WCT_FLASH";
			break;
		
		case joaat("component_at_ar_flsh"):
			return "WCT_FLASH";
			break;
		
		case joaat("component_at_scope_macro"):
			return "WCT_SCOPE_MAC";
			break;
		
		case joaat("component_at_scope_macro_02"):
			return "WCT_SCOPE_MAC";
			break;
		
		case joaat("component_at_scope_small"):
			return "WCT_SCOPE_SML";
			break;
		
		case joaat("component_at_scope_small_02"):
			return "WCT_SCOPE_SML";
			break;
		
		case joaat("component_at_scope_medium"):
			return "WCT_SCOPE_MED";
			break;
		
		case joaat("component_at_scope_large"):
			return "WCT_SCOPE_LRG";
			break;
		
		case joaat("component_at_scope_max"):
			return "WCT_SCOPE_MAX";
			break;
		
		case joaat("component_at_pi_supp"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_at_ar_supp"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_at_ar_supp_02"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_at_sr_supp"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_pistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_pistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_combatpistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_combatpistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_appistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_appistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_microsmg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_microsmg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_smg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_smg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_assaultrifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_carbinerifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_carbinerifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_advancedrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_advancedrifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_mg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_mg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_combatmg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_combatmg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultshotgun_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_assaultshotgun_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_sniperrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_heavysniper_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_minigun_clip_01"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultsmg_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_assaultsmg_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_pistol50_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_pistol50_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case 195735895:
			return "WCT_CLIP1";
			break;
		
		case joaat("component_heavyrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_heavyrifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case -890514874:
			return "WCT_CLIP1";
			break;
		
		case -507117574:
			return "WCT_CLIP2";
			break;
		
		case -124428919:
			return "WCT_CLIP1";
			break;
		
		case 1048471894:
			return "WCT_CLIP2";
			break;
		
		case joaat("component_snspistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_snspistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_vintagepistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_vintagepistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_heavyshotgun_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_marksmanrifle_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_heavyshotgun_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_marksmanrifle_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_at_scope_large_fixed_zoom"):
			return "WCT_SCOPE_LRG";
			break;
		
		case joaat("component_at_pi_supp_02"):
			return "WCT_SUPP";
			break;
		
		case joaat("component_combatpdw_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_combatpdw_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_marksmanpistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_machinepistol_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_machinepistol_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_assaultrifle_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_advancedrifle_varmod_luxe"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("component_carbinerifle_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_appistol_varmod_luxe"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("component_pistol_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_pistol50_varmod_luxe"):
			return "WCT_VAR_SIL";
			break;
		
		case joaat("component_heavypistol_varmod_luxe"):
			return "WCT_VAR_WOOD";
			break;
		
		case joaat("component_smg_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_microsmg_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_sawnoffshotgun_varmod_luxe"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("component_sniperrifle_varmod_luxe"):
			return "WCT_VAR_WOOD";
			break;
		
		case joaat("component_marksmanrifle_varmod_luxe"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_assaultsmg_varmod_lowrider"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_bullpuprifle_varmod_low"):
			return "WCT_VAR_METAL";
			break;
		
		case joaat("component_combatmg_varmod_lowrider"):
			return "WCT_VAR_ETCHM";
			break;
		
		case joaat("component_combatpistol_varmod_lowrider"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_mg_varmod_lowrider"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_pumpshotgun_varmod_lowrider"):
			return "WCT_VAR_GOLD";
			break;
		
		case joaat("component_snspistol_varmod_lowrider"):
			return "WCT_VAR_WOOD";
			break;
		
		case joaat("component_specialcarbine_varmod_lowrider"):
			return "WCT_VAR_ETCHM";
			break;
		
		case joaat("component_switchblade_varmod_base"):
			return "WCT_SB_BASE";
			break;
		
		case joaat("component_switchblade_varmod_var1"):
			return "WCT_SB_VAR1";
			break;
		
		case joaat("component_switchblade_varmod_var2"):
			return "WCT_SB_VAR2";
			break;
		
		case joaat("component_revolver_clip_01"):
			return "WCT_CLIP1";
			break;
		
		case joaat("component_revolver_varmod_boss"):
			return "WCT_REV_VARB";
			break;
		
		case joaat("component_revolver_varmod_goon"):
			return "WCT_REV_VARG";
			break;
		
		default:
			if (iParam1 != 0)
			{
				iVar0 = func_63(iParam1, &uVar2);
				if (iVar0 != -1)
				{
					iVar1 = 0;
					while (iVar1 < unk_0x54B3723DF8B16C85(iVar0))
					{
						if (unk_0x81718480430D1749(iVar0, iVar1, &Var41))
						{
							if (Var41.f_3 == iParam0)
							{
								return func_286(&(Var41.f_6));
							}
						}
						iVar1++;
					}
				}
			}
			break;
	}
	return "WCT_INVALID";
}

var func_286(var uParam0)
{
	return uParam0;
}

int func_287()
{
	if (unk_0xBBAE3E0C60A8AD4B() && func_288())
	{
		return 1;
	}
	return 0;
}

int func_288()
{
	if (unk_0x68B0A67658F2D9C2())
	{
		return 1;
	}
	return 0;
}

int func_289()
{
	var uVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	
	if (unk_0xDCC86F723E82125E(Global_25, 6))
	{
		if (unk_0xDCC86F723E82125E(Global_25, 2) || unk_0xDCC86F723E82125E(Global_25, 4))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x5F0618A5FDAD55C4(joaat("sp_unlock_exclus_content"), &uVar0, -1))
	{
		if (unk_0xDCC86F723E82125E(uVar0, 6))
		{
			if (unk_0xDCC86F723E82125E(iVar0, 2) || unk_0xDCC86F723E82125E(iVar0, 4))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (unk_0xD2B9A826BD9EDF3E(0))
	{
		if (Global_138041.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (unk_0x5F0618A5FDAD55C4(iVar2, &uVar1, -1))
			{
				if (unk_0xDCC86F723E82125E(uVar1, 8))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0xD205A6ACC9C010D3())
	{
		uVar3 = unk_0x11BD984A2A4EF9A7(866);
		if (unk_0xDCC86F723E82125E(uVar3, 2) || unk_0xDCC86F723E82125E(iVar3, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_290()
{
	var uVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	
	if (unk_0xDCC86F723E82125E(Global_25, 5))
	{
		if (unk_0xDCC86F723E82125E(Global_25, 1) || unk_0xDCC86F723E82125E(Global_25, 3))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x5F0618A5FDAD55C4(joaat("sp_unlock_exclus_content"), &uVar0, -1))
	{
		if (unk_0xDCC86F723E82125E(uVar0, 5))
		{
			if (unk_0xDCC86F723E82125E(iVar0, 1) || unk_0xDCC86F723E82125E(iVar0, 3))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (unk_0xD2B9A826BD9EDF3E(0))
	{
		if (Global_138041.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (unk_0x5F0618A5FDAD55C4(iVar2, &uVar1, -1))
			{
				if (unk_0xDCC86F723E82125E(uVar1, 5))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0xD205A6ACC9C010D3())
	{
		uVar3 = unk_0x11BD984A2A4EF9A7(866);
		if (unk_0xDCC86F723E82125E(uVar3, 1) || unk_0xDCC86F723E82125E(iVar3, 3))
		{
			return 1;
		}
	}
	if (unk_0x964FE4B401FC8514())
	{
		if (unk_0x04A97E271BED9566())
		{
			if (unk_0x7897609594472C66())
			{
				unk_0x5F0618A5FDAD55C4(joaat("sp_unlock_exclus_content"), &uVar4, -1);
				unk_0x59A0729D503ED758(&uVar4, 1);
				unk_0x59A0729D503ED758(&uVar4, 3);
				unk_0x59A0729D503ED758(&uVar4, 5);
				unk_0x59A0729D503ED758(&Global_25, 1);
				unk_0x59A0729D503ED758(&Global_25, 3);
				unk_0x59A0729D503ED758(&Global_25, 5);
				unk_0x071958EFED9481F5(joaat("sp_unlock_exclus_content"), uVar4, 1);
				if (unk_0xD205A6ACC9C010D3())
				{
					uVar4 = unk_0x11BD984A2A4EF9A7(866);
					unk_0x59A0729D503ED758(&uVar4, 1);
					unk_0x59A0729D503ED758(&uVar4, 3);
					unk_0x1F071A4E400AAE0A(uVar4);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_291()
{
	var uVar0;
	
	if (unk_0x964FE4B401FC8514())
	{
		if (unk_0x04A97E271BED9566())
		{
			if (unk_0x76C144FFABF149C3())
			{
				unk_0x5F0618A5FDAD55C4(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0x59A0729D503ED758(&uVar0, 2);
				unk_0x59A0729D503ED758(&uVar0, 4);
				unk_0x59A0729D503ED758(&uVar0, 6);
				unk_0x59A0729D503ED758(&Global_25, 2);
				unk_0x59A0729D503ED758(&Global_25, 4);
				unk_0x59A0729D503ED758(&Global_25, 6);
				unk_0x071958EFED9481F5(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0xD205A6ACC9C010D3())
				{
					uVar0 = unk_0x11BD984A2A4EF9A7(866);
					unk_0x59A0729D503ED758(&uVar0, 0);
					unk_0x1F071A4E400AAE0A(uVar0);
				}
				return 1;
			}
		}
	}
	if (Global_138040 == 2)
	{
		return 1;
	}
	else if (Global_138040 == 3)
	{
		return 0;
	}
	if (unk_0xD205A6ACC9C010D3())
	{
		if (unk_0xDCC86F723E82125E(unk_0x11BD984A2A4EF9A7(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_292(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	*uParam0 = iParam1;
	uParam0->f_4 = iParam2;
	uParam0->f_5 = iParam3;
	uParam0->f_1 = iParam4;
}

int func_293(var uParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar6;
	
	func_292(&Var0, *uParam0, uParam0->f_4, uParam0->f_5, uParam0->f_1);
	while (func_254(&Var0, iParam1, iVar6, 0))
	{
		if (Var0.f_4 == iParam2)
		{
			return 1;
		}
		iVar6++;
	}
	return 0;
}

float func_294(float fParam0)
{
	return (fParam0 * 57.29578f);
}

int func_295(var uParam0)
{
	if (!unk_0x95CCECA3948CFE7B(*uParam0))
	{
		return 0;
	}
	unk_0xCDBFAADCD2D0674F(*uParam0, 1);
	return 1;
}

int func_296(var uParam0, int iParam1, struct<3> Param2, float fParam5)
{
	if (unk_0x95CCECA3948CFE7B(*uParam0))
	{
		unk_0x95F5F15D238A7F1C(uParam0);
		*uParam0 = 0;
	}
	*uParam0 = unk_0xD53B4DCC7B2C8551(iParam1, Param2, fParam5, 1, 1);
	if (!unk_0x95CCECA3948CFE7B(*uParam0))
	{
		return 0;
	}
	return 1;
}

int func_297(var uParam0)
{
	if (!unk_0x95CCECA3948CFE7B(*uParam0))
	{
		return 0;
	}
	unk_0x90115CB23FA58DD6(*uParam0, 0);
	unk_0x64B2BC184771BDA3(*uParam0, "RAMP:SCENE PED");
	unk_0x58F516BB5E324590(*uParam0, 0);
	unk_0xAAD662D7E0D59F4C(*uParam0, 1);
	return 1;
}

int func_298(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6)
{
	if (unk_0x95CCECA3948CFE7B(*uParam0))
	{
		unk_0x26B3B761603F5232(uParam0);
		*uParam0 = 0;
	}
	*uParam0 = unk_0x71DD988C1B903F5D(26, iParam1, Param2, fParam5, 1, 1);
	if (!unk_0x95CCECA3948CFE7B(*uParam0))
	{
		return 0;
	}
	if (bParam6)
	{
		func_299(*uParam0, Param2);
		unk_0x765E3FA65D011F03(*uParam0, fParam5);
	}
	unk_0x90115CB23FA58DD6(*uParam0, 0);
	unk_0x64B2BC184771BDA3(*uParam0, "RAMP:SCENE PED");
	unk_0x58F516BB5E324590(*uParam0, 0);
	unk_0xAAD662D7E0D59F4C(*uParam0, 1);
	return 1;
}

Vector3 func_299(var uParam0, struct<3> Param1)
{
	var uVar0;
	
	Param1.f_2 = (Param1.f_2 + 0.15f);
	if (unk_0x32B7B9548CC32D81(Param1, &uVar0, 0))
	{
		Param1.f_2 = uVar0;
	}
	if (func_205(uParam0))
	{
		unk_0xC76B5C68AB6DC7DF(uParam0, Param1, 1, 0, 0, 1);
	}
	return Param1;
}

int func_300()
{
	return unk_0x8738B068D97CDC64(-177.0628f, -1679.715f, 33.16263f, -157.0628f, -1659.715f, 37.16263f, 0, 1, 1, 1);
}

void func_301(var uParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = joaat("ig_ramp_gang");
	sVar1 = "misstrvram_4";
	unk_0x7567CEA8E6B5340B(iVar0);
	unk_0xC0E8B67A4385D37D(sVar1);
	unk_0xFDFD811E5C1B97AA(joaat("weapon_assaultrifle"), 31, 0);
	while (!unk_0x0845149A26DABBA5(iVar0) || !unk_0xF9B86DC1728F1339(sVar1))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!func_298(&(uParam0->f_28[0]), iVar0, -161.37f, -1669.63f, 33.1f, func_294(1.03f), 1))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_297(&(uParam0->f_28[0]));
	unk_0x64B2BC184771BDA3(uParam0->f_28[0], "RP0_NOGUN");
	unk_0x9AA5A07C66C84468(uParam0->f_28[0]);
	unk_0x8C245572EDB27776(uParam0->f_28[0], 0, 1, 0, 0);
	unk_0x8C245572EDB27776(uParam0->f_28[0], 1, 0, 0, 0);
	unk_0x8C245572EDB27776(uParam0->f_28[0], 2, 0, 0, 0);
	unk_0x8C245572EDB27776(uParam0->f_28[0], 3, 0, 1, 0);
	unk_0x8C245572EDB27776(uParam0->f_28[0], 4, 0, 0, 0);
	unk_0x8C245572EDB27776(uParam0->f_28[0], 5, 0, 0, 0);
	unk_0x8C245572EDB27776(uParam0->f_28[0], 6, 0, 0, 0);
	unk_0x8C245572EDB27776(uParam0->f_28[0], 7, 0, 0, 0);
	unk_0x8C245572EDB27776(uParam0->f_28[0], 8, 0, 0, 0);
	unk_0x8C245572EDB27776(uParam0->f_28[0], 9, 0, 0, 0);
	unk_0x8C245572EDB27776(uParam0->f_28[0], 10, 0, 1, 0);
	unk_0x8C245572EDB27776(uParam0->f_28[0], 11, 0, 0, 0);
	unk_0x5323F488E6A1B660(uParam0->f_28[0], sVar1, "thugs_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
	while (!func_298(&(uParam0->f_28[1]), iVar0, -161.93f, -1670.39f, 33.14f, func_294(0.2f), 1))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_297(&(uParam0->f_28[1]));
	unk_0x64B2BC184771BDA3(uParam0->f_28[1], "RP1_GUN");
	unk_0x9AA5A07C66C84468(uParam0->f_28[1]);
	unk_0x8C245572EDB27776(uParam0->f_28[1], 0, 0, 0, 0);
	unk_0x8C245572EDB27776(uParam0->f_28[1], 1, 0, 0, 0);
	unk_0x8C245572EDB27776(uParam0->f_28[1], 2, 0, 0, 0);
	unk_0x8C245572EDB27776(uParam0->f_28[1], 3, 1, 1, 0);
	unk_0x8C245572EDB27776(uParam0->f_28[1], 4, 0, 0, 0);
	unk_0x8C245572EDB27776(uParam0->f_28[1], 5, 0, 0, 0);
	unk_0x8C245572EDB27776(uParam0->f_28[1], 6, 0, 0, 0);
	unk_0x8C245572EDB27776(uParam0->f_28[1], 7, 0, 0, 0);
	unk_0x8C245572EDB27776(uParam0->f_28[1], 8, 0, 0, 0);
	unk_0x8C245572EDB27776(uParam0->f_28[1], 9, 0, 0, 0);
	unk_0x8C245572EDB27776(uParam0->f_28[1], 10, 1, 0, 0);
	unk_0x8C245572EDB27776(uParam0->f_28[1], 11, 0, 0, 0);
	unk_0x640290651A86938B(uParam0->f_28[1], joaat("weapon_assaultrifle"), 100, 1, 1);
	unk_0x5323F488E6A1B660(uParam0->f_28[1], sVar1, "thugs_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
	StringCopy(&(uParam0->f_9), "TRVRAM_4", 24);
	uParam0->f_27 = 0;
	unk_0x4BBD72565A0AF033(iVar0);
}

void func_302(var uParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = joaat("ig_ramp_mex");
	sVar1 = "misstrvram_3";
	unk_0x7567CEA8E6B5340B(iVar0);
	unk_0xC0E8B67A4385D37D(sVar1);
	unk_0xFDFD811E5C1B97AA(joaat("weapon_microsmg"), 31, 10);
	while ((!unk_0x0845149A26DABBA5(iVar0) || !unk_0xC0212C3CDA6939B3(joaat("weapon_microsmg"))) || !unk_0xF9B86DC1728F1339(sVar1))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!func_298(&(uParam0->f_28[0]), iVar0, 464.6125f, -1848.767f, 27.816f, 177.39f, 1))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_297(&(uParam0->f_28[0]));
	unk_0x8C245572EDB27776(uParam0->f_28[0], 0, 0, 0, 0);
	unk_0x8C245572EDB27776(uParam0->f_28[0], 1, 0, 0, 0);
	unk_0x8C245572EDB27776(uParam0->f_28[0], 2, 0, 0, 0);
	unk_0x8C245572EDB27776(uParam0->f_28[0], 3, 0, 0, 0);
	unk_0x8C245572EDB27776(uParam0->f_28[0], 4, 0, 0, 0);
	unk_0x8C245572EDB27776(uParam0->f_28[0], 5, 0, 0, 0);
	unk_0x8C245572EDB27776(uParam0->f_28[0], 6, 0, 0, 0);
	unk_0x8C245572EDB27776(uParam0->f_28[0], 7, 0, 0, 0);
	unk_0x8C245572EDB27776(uParam0->f_28[0], 8, 0, 0, 0);
	unk_0x8C245572EDB27776(uParam0->f_28[0], 9, 1, 0, 0);
	unk_0x8C245572EDB27776(uParam0->f_28[0], 10, 0, 0, 0);
	unk_0x8C245572EDB27776(uParam0->f_28[0], 11, 0, 0, 0);
	unk_0x64B2BC184771BDA3(uParam0->f_28[0], "RAMP:PED 0");
	unk_0x5323F488E6A1B660(uParam0->f_28[0], sVar1, "mexicans_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
	while (!func_298(&(uParam0->f_28[1]), iVar0, 465.782f, -1849.073f, 27.817f, 129.92f, 1))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_297(&(uParam0->f_28[1]));
	unk_0x8C245572EDB27776(uParam0->f_28[1], 0, 1, 0, 0);
	unk_0x8C245572EDB27776(uParam0->f_28[1], 1, 0, 0, 0);
	unk_0x8C245572EDB27776(uParam0->f_28[1], 2, 0, 0, 0);
	unk_0x8C245572EDB27776(uParam0->f_28[1], 3, 1, 0, 0);
	unk_0x8C245572EDB27776(uParam0->f_28[1], 4, 0, 1, 0);
	unk_0x8C245572EDB27776(uParam0->f_28[1], 5, 0, 0, 0);
	unk_0x8C245572EDB27776(uParam0->f_28[1], 6, 0, 0, 0);
	unk_0x8C245572EDB27776(uParam0->f_28[1], 7, 0, 0, 0);
	unk_0x8C245572EDB27776(uParam0->f_28[1], 8, 1, 0, 0);
	unk_0x8C245572EDB27776(uParam0->f_28[1], 9, 0, 0, 0);
	unk_0x8C245572EDB27776(uParam0->f_28[1], 10, 0, 0, 0);
	unk_0x8C245572EDB27776(uParam0->f_28[1], 11, 0, 0, 0);
	unk_0x64B2BC184771BDA3(uParam0->f_28[1], "RAMP:PED 1");
	unk_0x5323F488E6A1B660(uParam0->f_28[1], sVar1, "mexicans_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
	if (func_252(&(uParam0->f_41[0]), joaat("weapon_microsmg"), 467f, -1855.4f, 32f, func_294(-0.85f)))
	{
		unk_0x39F6EF6D6BEFF107(uParam0->f_41[0], joaat("component_at_scope_macro"));
		unk_0x39F6EF6D6BEFF107(uParam0->f_41[0], joaat("component_microsmg_clip_02"));
	}
	StringCopy(&(uParam0->f_9), "TRVRAM_3", 24);
	uParam0->f_27 = 0;
	unk_0x4BBD72565A0AF033(iVar0);
}

int func_303()
{
	return func_304(1182.137f, -400.4787f, 66.92414f, 8f);
}

var func_304(struct<3> Param0, float fParam3)
{
	struct<3> Var0;
	
	Var0 = { (fParam3 / 2f), (fParam3 / 2f), (fParam3 / 2f) };
	return unk_0x8738B068D97CDC64(Param0 - Var0, Param0 + Var0, 0, 1, 1, 1);
}

void func_305(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	struct<3> Var5;
	struct<3> Var8;
	
	iVar0 = joaat("ig_ramp_hipster");
	iVar1 = joaat("prop_chair_01a");
	iVar2 = joaat("prop_npc_phone");
	sVar3 = "misstrvram_2";
	iVar4 = 60309;
	Var5 = { 0f, 0f, 0f };
	Var8 = { 0f, 0f, 0f };
	unk_0xFDFD811E5C1B97AA(joaat("weapon_sawnoffshotgun"), 31, 0);
	unk_0x7567CEA8E6B5340B(iVar0);
	unk_0x7567CEA8E6B5340B(iVar1);
	unk_0x7567CEA8E6B5340B(iVar2);
	unk_0xC0E8B67A4385D37D(sVar3);
	func_309(&uLocal_114);
	while ((((!unk_0x0845149A26DABBA5(iVar0) || !unk_0x0845149A26DABBA5(iVar1)) || !unk_0x0845149A26DABBA5(iVar2)) || !unk_0xF9B86DC1728F1339(sVar3)) || !func_308(&uLocal_114))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x83BD643811DA0EA8(1180.021f, -401.7374f, 66.8767f, 0.75f, 0);
	uParam0->f_41[2] = unk_0xB999434FB1CECA11(1179.778f, -401.7374f, 66.8697f, 1f, joaat("prop_chair_01a"), 1, 0, 1);
	if (unk_0x95CCECA3948CFE7B(uParam0->f_41[2]))
	{
		unk_0xC76B5C68AB6DC7DF(uParam0->f_41[2], 1180.05f, -401.83f, 66.88f, 1, 0, 0, 1);
		unk_0x68931E8B45B3CA92(uParam0->f_41[2], 0f, 0f, 50f, 2, 1);
		unk_0xB7A2078CD1C9A82F(uParam0->f_41[2], 1);
	}
	uParam0->f_41[3] = unk_0xB999434FB1CECA11(1181.243f, -402.5309f, 67.2564f, 1f, joaat("prop_table_01"), 1, 0, 1);
	if (unk_0x95CCECA3948CFE7B(uParam0->f_41[3]))
	{
		unk_0xB7A2078CD1C9A82F(uParam0->f_41[3], 1);
	}
	while (!func_298(&(uParam0->f_28[0]), iVar0, 1181.547f, -400.0954f, 67.5757f, -124.2928f, 0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_297(&(uParam0->f_28[0]));
	unk_0xB7A2078CD1C9A82F(uParam0->f_28[0], 1);
	unk_0x9AA5A07C66C84468(uParam0->f_28[0]);
	unk_0x8C245572EDB27776(uParam0->f_28[0], 2, 0, 0, 0);
	func_307(&(uParam0->f_41[1]), iVar2, 1181.547f, -400.0954f, 65.5757f, 0f);
	unk_0xAD318582A32CA5D2(uParam0->f_41[1], uParam0->f_28[0], unk_0xF2122440C667309F(uParam0->f_28[0], iVar4), Var8, Var5, 1, 0, 0, 0, 2, 1);
	func_306(&uLocal_114, 0, 3);
	if (!unk_0xBC6B93737FCDC466(uParam0->f_59))
	{
		uParam0->f_59 = unk_0x0B15BB6DFB729046(Local_108, Local_111, 2);
		if (func_112(uParam0->f_28[0]))
		{
			unk_0xA5666A46C1079EFE(uParam0->f_28[0], uParam0->f_59, sVar3, "hipster_idle", 8f, -8f, 513, 0, 1148846080, 0);
		}
		unk_0x53DDB73894A6597A(uParam0->f_59, 1);
	}
	if (!func_252(&(uParam0->f_41[0]), joaat("weapon_sawnoffshotgun"), 1162.2f, -395.4f, 72.9f, func_294(-0.71f)))
	{
	}
	StringCopy(&(uParam0->f_9), "TRVRAM_2_CONCAT", 24);
	uParam0->f_27 = 0;
	unk_0x4BBD72565A0AF033(iVar0);
	unk_0x4BBD72565A0AF033(iVar1);
	unk_0x4BBD72565A0AF033(iVar2);
}

void func_306(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	if (unk_0xF518F3C7FACD43B7(*uParam0))
	{
		if (bParam1)
		{
			unk_0x35A0A81236E056F6(&uVar0);
		}
		else
		{
			if (!unk_0x4C4B08464D56970E("npcphone"))
			{
				unk_0x55C5397453BE04EB("npcphone", 0);
				unk_0x8D3EF96B70C29C06(joaat("prop_npc_phone"));
			}
			uVar0 = unk_0xEA2A23EE27BAE0D5("npcphone");
		}
		unk_0x052F8F69DC6157DE(uVar0);
		unk_0x7C38F93AF52620B1(*uParam0, "DISPLAY_VIEW");
		unk_0x65960B4E2ADC9F6D(iParam2);
		unk_0xD013AC29829DDC02();
		unk_0x06D856499865F31F(*uParam0, Global_14333, Global_14334, Global_14335, Global_14336, 255, 255, 255, 255, 0);
	}
}

void func_307(var uParam0, int iParam1, struct<3> Param2, float fParam5)
{
	func_137(uParam0);
	*uParam0 = unk_0x7C62BC1EB194D985(iParam1, Param2, 1, 1, 0);
	unk_0x765E3FA65D011F03(*uParam0, fParam5);
}

int func_308(var uParam0)
{
	if (unk_0xF518F3C7FACD43B7(*uParam0))
	{
		return 1;
	}
	return 0;
}

void func_309(var uParam0)
{
	*uParam0 = unk_0x31DC2CEFEF13C96D(func_310());
}

char* func_310()
{
	return "CELLPHONE_CUTSCENE";
}

int func_311()
{
	return func_304(911.5349f, 3642.111f, 31.64738f, 8f);
}

void func_312(var uParam0)
{
	struct<3> Var0;
	char* sVar3;
	int iVar4;
	struct<3> Var5;
	struct<3> Var8;
	int iVar11;
	int iVar12;
	int iVar13;
	
	sVar3 = "misstrvram_1";
	iVar4 = 28422;
	Var5 = { 0f, 0f, 0f };
	Var8 = { 0f, 0f, -0.1f };
	iVar11 = joaat("ig_ramp_hic");
	iVar12 = joaat("prop_table_03b_chr");
	iVar13 = joaat("prop_beer_bottle");
	unk_0x7567CEA8E6B5340B(iVar11);
	unk_0x7567CEA8E6B5340B(iVar12);
	unk_0x7567CEA8E6B5340B(iVar13);
	unk_0xC0E8B67A4385D37D(sVar3);
	unk_0xFDFD811E5C1B97AA(joaat("weapon_assaultrifle"), 31, 0);
	while ((((!unk_0x0845149A26DABBA5(iVar11) || !unk_0x0845149A26DABBA5(iVar12)) || !unk_0x0845149A26DABBA5(iVar13)) || !unk_0xF9B86DC1728F1339(sVar3)) || !unk_0xC0212C3CDA6939B3(joaat("weapon_assaultrifle")))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!func_298(&(uParam0->f_28[0]), iVar11, 907.998f, 3643.826f, 32.29243f, -173.0453f, 0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (func_112(uParam0->f_28[0]))
	{
		unk_0x8C245572EDB27776(uParam0->f_28[0], 0, 0, 0, 0);
		unk_0x8C245572EDB27776(uParam0->f_28[0], 1, 0, 0, 0);
		unk_0x8C245572EDB27776(uParam0->f_28[0], 2, 0, 0, 0);
		unk_0x8C245572EDB27776(uParam0->f_28[0], 3, 0, 0, 0);
		unk_0x8C245572EDB27776(uParam0->f_28[0], 4, 0, 0, 0);
		unk_0x8C245572EDB27776(uParam0->f_28[0], 5, 0, 0, 0);
		unk_0x8C245572EDB27776(uParam0->f_28[0], 6, 0, 0, 0);
		unk_0x8C245572EDB27776(uParam0->f_28[0], 7, 0, 0, 0);
		unk_0x8C245572EDB27776(uParam0->f_28[0], 8, 0, 0, 0);
		unk_0x8C245572EDB27776(uParam0->f_28[0], 9, 0, 0, 0);
		unk_0x8C245572EDB27776(uParam0->f_28[0], 10, 0, 0, 0);
		unk_0x8C245572EDB27776(uParam0->f_28[0], 11, 0, 0, 0);
		Var0 = { unk_0xB867FC7DBA46C0F1(uParam0->f_28[0], iVar4, 0f, 0f, 0f) };
		unk_0x64B2BC184771BDA3(uParam0->f_28[0], "RAMP:PED 0");
		func_307(&(uParam0->f_41[1]), iVar13, Var0, 0f);
		unk_0xAD318582A32CA5D2(uParam0->f_41[1], uParam0->f_28[0], unk_0xF2122440C667309F(uParam0->f_28[0], iVar4), Var8, Var5, 1, 1, 0, 0, 2, 1);
		unk_0xBA56A0D247C4848D(uParam0->f_41[1], 1);
		unk_0xB7A2078CD1C9A82F(uParam0->f_28[0], 1);
		unk_0xC778754E36F3FFD6(uParam0->f_28[0], 208, 1);
		unk_0xCBD60E398042F554(uParam0->f_28[0], joaat("player"));
	}
	while (!func_298(&(uParam0->f_28[1]), iVar11, 909.3126f, 3643.507f, 32.2952f, 153.0127f, 0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (func_112(uParam0->f_28[1]))
	{
		unk_0x8C245572EDB27776(uParam0->f_28[1], 0, 1, 0, 0);
		unk_0x8C245572EDB27776(uParam0->f_28[1], 1, 0, 0, 0);
		unk_0x8C245572EDB27776(uParam0->f_28[1], 2, 1, 0, 0);
		unk_0x8C245572EDB27776(uParam0->f_28[1], 3, 1, 0, 0);
		unk_0x8C245572EDB27776(uParam0->f_28[1], 4, 1, 0, 0);
		unk_0x8C245572EDB27776(uParam0->f_28[1], 5, 0, 0, 0);
		unk_0x8C245572EDB27776(uParam0->f_28[1], 6, 0, 0, 0);
		unk_0x8C245572EDB27776(uParam0->f_28[1], 7, 0, 0, 0);
		unk_0x8C245572EDB27776(uParam0->f_28[1], 8, 0, 0, 0);
		unk_0x8C245572EDB27776(uParam0->f_28[1], 9, 0, 0, 0);
		unk_0x8C245572EDB27776(uParam0->f_28[1], 10, 0, 0, 0);
		unk_0x8C245572EDB27776(uParam0->f_28[1], 11, 0, 0, 0);
		Var0 = { unk_0xB867FC7DBA46C0F1(uParam0->f_28[1], iVar4, 0f, 0f, 0f) };
		unk_0x64B2BC184771BDA3(uParam0->f_28[1], "RAMP:PED 1");
		func_307(&(uParam0->f_41[2]), iVar13, Var0, 0f);
		unk_0xAD318582A32CA5D2(uParam0->f_41[2], uParam0->f_28[1], unk_0xF2122440C667309F(uParam0->f_28[1], iVar4), Var8, Var5, 1, 1, 0, 0, 2, 1);
		unk_0xBA56A0D247C4848D(uParam0->f_41[2], 1);
		unk_0xB7A2078CD1C9A82F(uParam0->f_28[1], 1);
		unk_0xC778754E36F3FFD6(uParam0->f_28[1], 208, 1);
		unk_0xCBD60E398042F554(uParam0->f_28[1], joaat("player"));
	}
	uParam0->f_41[3] = unk_0xB999434FB1CECA11(909.3884f, 3643.652f, 31.699f, 1f, joaat("prop_table_03b_chr"), 1, 0, 1);
	if (unk_0x95CCECA3948CFE7B(uParam0->f_41[3]))
	{
		unk_0xB7A2078CD1C9A82F(uParam0->f_41[3], 1);
	}
	uParam0->f_41[4] = unk_0xB999434FB1CECA11(908.0437f, 3643.682f, 31.7073f, 1f, joaat("prop_table_03b_chr"), 1, 0, 1);
	if (unk_0x95CCECA3948CFE7B(uParam0->f_41[4]))
	{
		unk_0xB7A2078CD1C9A82F(uParam0->f_41[4], 1);
	}
	if (!unk_0xBC6B93737FCDC466(uParam0->f_59))
	{
		uParam0->f_59 = unk_0x0B15BB6DFB729046(910.13f, 3643.74f, 31.69f, 0f, 0f, func_294(-0.26f), 2);
		if (func_112(uParam0->f_28[0]))
		{
			unk_0xA5666A46C1079EFE(uParam0->f_28[0], uParam0->f_59, sVar3, "redneck_idle_a", 8f, -8f, 513, 0, 1148846080, 0);
		}
		if (func_112(uParam0->f_28[1]))
		{
			unk_0xA5666A46C1079EFE(uParam0->f_28[1], uParam0->f_59, sVar3, "redneck_idle_b", 8f, -8f, 513, 0, 1148846080, 0);
		}
		unk_0x53DDB73894A6597A(uParam0->f_59, 1);
	}
	if (!func_252(&(uParam0->f_41[0]), joaat("weapon_assaultrifle"), 907.52f, 3644.32f, 31.86f, -164.89f))
	{
	}
	unk_0x4BBD72565A0AF033(iVar11);
	unk_0x4BBD72565A0AF033(iVar12);
	StringCopy(&(uParam0->f_9), "TRVRAM_1", 24);
	uParam0->f_27 = 0;
}

int func_313(int iParam0)
{
	if (!unk_0xCAA967E16BBE69CE())
	{
		return 1;
	}
	if (unk_0xA8D4B6BDCF6DE72B())
	{
		return 1;
	}
	if (func_163(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_314(int iParam0)
{
	struct<27> Var0;
	int iVar32;
	
	func_95(iParam0, &Var0);
	iVar32 = func_207();
	if (iVar32 == 145)
	{
		return 1;
	}
	else if ((iVar32 != 1 && iVar32 != 0) && iVar32 != 2)
	{
		return 1;
	}
	if (!unk_0xDCC86F723E82125E(Var0.f_26, iVar32))
	{
		return 1;
	}
	return 0;
}

int func_315(int iParam0, var uParam1, struct<3> Param2, float fParam5)
{
	int iVar0;
	
	if (*iParam0 == 1)
	{
		if (func_316((*iParam0)[0], Param2, fParam5, uParam1))
		{
			return 1;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < *iParam0)
		{
			if (func_316((*iParam0)[iVar0], Param2, fParam5, uParam1))
			{
				iVar0 = *iParam0;
				return 1;
			}
			iVar0++;
		}
	}
	func_334("DETERMINE_RC_TO_LAUNCH - Unable to find mission to launch [TERMINATING]");
	return 0;
}

int func_316(int iParam0, struct<3> Param1, float fParam4, var uParam5)
{
	int iVar0;
	struct<7> Var1;
	
	iVar0 = 0;
	func_95(iParam0, &Var1);
	if (func_317(Var1.f_6, Param1, fParam4, 0))
	{
		if (unk_0xDCC86F723E82125E(Global_100976.f_17208[iParam0 /*6*/], 0))
		{
			if (!unk_0xDCC86F723E82125E(Global_100976.f_17208[iParam0 /*6*/], 3))
			{
				iVar0 = 1;
			}
		}
		if (func_173(iParam0))
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

int func_317(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0xA3C5926D6E5619AE((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0xA3C5926D6E5619AE((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0xA3C5926D6E5619AE((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xA3C5926D6E5619AE((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0xA3C5926D6E5619AE((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_318(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_100976.f_7719.f_99.f_58[iParam0];
}

void func_319(var* uParam0, bool bParam1)
{
	func_248(uParam0);
	if (bParam1)
	{
		func_334(" SCRIPT TERMINATING: Cleaning up entities in Launcher");
		func_322(uParam0, 0, 0, 0);
	}
	func_321(&(uParam0->f_48));
	if (iLocal_289 != -1)
	{
		func_334("SCRIPT TERMINATING: Ending off-mission cutscene request");
		func_245(&iLocal_289);
	}
	if (iLocal_301 != 0)
	{
		if (*uParam0 == 55 || *uParam0 == 53)
		{
			unk_0x9DBF08025225340D(iLocal_301, 0);
		}
	}
	if (unk_0x000CF7FDBE12A995())
	{
		unk_0x2F309AF34613F2FA(0);
	}
	if (iLocal_293)
	{
		if (func_2("RAMP_HELP_TRIG"))
		{
			unk_0x9F4AA6F234E8A860(1);
			iLocal_293 = 0;
		}
	}
	func_320();
	func_334("SCRIPT TERMINATED");
	Global_88711 = 0;
	unk_0xA4E0D8FD51F2A6F7();
}

void func_320()
{
	func_334("Running end routines.");
	Global_100694 = (Global_100694 - 1);
}

int func_321(var uParam0)
{
	if (func_135(uParam0))
	{
		if (unk_0xF9B86DC1728F1339(*uParam0))
		{
			unk_0x3ECF1E41E6ED71D8(*uParam0);
			*uParam0 = "";
			uParam0->f_1 = "";
			return 1;
		}
	}
	return 0;
}

void func_322(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_330(uParam0, iParam1);
	func_326(uParam0, bParam2);
	func_323(uParam0, bParam3);
}

void func_323(var uParam0, bool bParam1)
{
	func_324(&(uParam0->f_41), bParam1);
}

void func_324(var uParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (bParam1)
		{
			func_137(uParam0[iVar0]);
		}
		else
		{
			func_325(uParam0[iVar0], 0);
		}
		iVar0++;
	}
}

void func_325(var uParam0, bool bParam1)
{
	if (unk_0x95CCECA3948CFE7B(*uParam0))
	{
		if (unk_0xE33A9405F8300B78(*uParam0))
		{
			unk_0xB81176DFD2611E8B(*uParam0, 1, 1);
		}
		if (!bParam1)
		{
			unk_0xC2BB205CCEB68102(uParam0);
		}
		else
		{
			unk_0xFA8BA151FBE4A15B(*uParam0);
		}
	}
}

void func_326(var uParam0, bool bParam1)
{
	func_327(&(uParam0->f_35), bParam1);
}

void func_327(var uParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (bParam1)
		{
			func_329(uParam0[iVar0]);
		}
		else
		{
			func_328(uParam0[iVar0]);
		}
		iVar0++;
	}
}

void func_328(var uParam0)
{
	if (unk_0x95CCECA3948CFE7B(*uParam0))
	{
		unk_0xB6900B8CB0ABBD2B(*uParam0);
		if (unk_0xD28A89C669EAD2E4(*uParam0) && unk_0x1F59F772AA90087D(*uParam0, 1))
		{
			unk_0xEF84021B2AB5E334(uParam0);
		}
	}
}

void func_329(var uParam0)
{
	if (unk_0x95CCECA3948CFE7B(*uParam0))
	{
		if (!unk_0xD28A89C669EAD2E4(*uParam0))
		{
			unk_0xFD816D0E738EB817(*uParam0, 1, 0);
		}
		if (func_141(*uParam0))
		{
			if (unk_0xD28A89C669EAD2E4(*uParam0) && unk_0x1F59F772AA90087D(*uParam0, 1))
			{
				if (func_112(unk_0xC8B93D94F8954288()))
				{
					if (unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), *uParam0, 0))
					{
						unk_0xEF84021B2AB5E334(uParam0);
						return;
					}
				}
				unk_0x95F5F15D238A7F1C(uParam0);
			}
		}
		else
		{
			if (func_112(unk_0xC8B93D94F8954288()))
			{
				if (unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), *uParam0, 0))
				{
					unk_0xEF84021B2AB5E334(uParam0);
					return;
				}
			}
			unk_0x95F5F15D238A7F1C(uParam0);
		}
	}
}

void func_330(var uParam0, int iParam1)
{
	func_331(&(uParam0->f_28), iParam1);
}

void func_331(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (iParam1 == 1)
		{
			func_333(uParam0[iVar0]);
		}
		else
		{
			func_332(uParam0[iVar0], 0, 1, 0);
		}
		iVar0++;
	}
}

void func_332(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x95CCECA3948CFE7B(*uParam0))
	{
		if (!unk_0x2DC9BA2299B45EA6(*uParam0))
		{
			unk_0x05BE583DF8C6A617(*uParam0, 0);
			if (iParam3 == 0)
			{
				unk_0xEC466B3D55749458(*uParam0);
			}
			unk_0xF1A02DDEC7E15D6E(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0xAAD662D7E0D59F4C(*uParam0, 0);
			}
		}
		unk_0x459A6F82E024C891(uParam0);
	}
}

void func_333(var uParam0)
{
	if (unk_0x95CCECA3948CFE7B(*uParam0))
	{
		if (!unk_0xB6900B8CB0ABBD2B(*uParam0))
		{
			unk_0x05BE583DF8C6A617(*uParam0, 0);
		}
		if (!unk_0xD28A89C669EAD2E4(*uParam0))
		{
			unk_0xFD816D0E738EB817(*uParam0, 1, 0);
		}
		unk_0x26B3B761603F5232(uParam0);
	}
}

void func_334(char* sParam0)
{
	if (!unk_0xB8A06E7E729EED0A(sParam0))
	{
	}
}

void func_335(var uParam0)
{
	*uParam0 = -1;
	StringCopy(&(uParam0->f_1), "", 32);
	uParam0->f_15 = 12f;
	uParam0->f_16 = 6;
	uParam0->f_25 = 0;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
}

void func_336()
{
	func_334("Running start routines.");
	Global_100694++;
}

