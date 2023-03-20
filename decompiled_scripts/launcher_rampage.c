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
	var uLocal_101 = 0;
	float fLocal_102 = 0f;
	float fLocal_103 = 0f;
	float fLocal_104 = 0f;
	float fLocal_105 = 0f;
	float fLocal_106 = 0f;
	struct<3> Local_107 = { 0, 0, 0 } ;
	struct<3> Local_110 = { 0, 0, 0 } ;
	var uLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	var uLocal_116[3] = { 0, 0, 0 };
	var uLocal_120 = 16;
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
	int iLocal_285 = 0;
	var uLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	var uLocal_293 = 3;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	struct<3> Local_297 = { 0, 0, 0 } ;
	int iLocal_300 = 0;
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
	uLocal_89 = unk_0x1DBB027CE7ACD07B();
	uLocal_90 = unk_0xEAEAFA9E24F1C4E1();
	fLocal_102 = -0.05f;
	fLocal_103 = 0.92f;
	fLocal_104 = 1.94f;
	fLocal_105 = 2.99f;
	fLocal_106 = 3.7f;
	Local_107 = { 1180.969f, -402.381f, 67.2f };
	Local_110 = { 5f, 0f, 57.33f };
	iLocal_114 = -1;
	iLocal_287 = 77;
	iLocal_288 = -1;
	iLocal_289 = -1;
	iLocal_290 = 1;
	iLocal_291 = 1;
	iLocal_292 = 1;
	unk_0x8BCDA02068806E38(1);
	func_297();
	Var0.f_17 = 2;
	Var0.f_28 = 6;
	Var0.f_35 = 5;
	Var0.f_41 = 6;
	Var61 = { ScriptParam_0.f_1[0 /*3*/] };
	Global_88711 = 1;
	func_296(&Var0);
	if (unk_0x4B4BD87E3D30C50D(83))
	{
		func_295(" Force cleanup [TERMINATING]");
		func_280(&Var0, 1);
	}
	if (!func_279(108))
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
		if (!unk_0xD8AD97AB31334199())
		{
			func_295("  Ambient - Player isn't within World Point Range");
			func_280(uParam0, 1);
		}
		if (func_207() != 2)
		{
			func_295("  Ambient - Player is not Trevor");
			func_280(uParam0, 1);
		}
		iLocal_289 = func_206(5f);
		if (iLocal_289 != -1)
		{
			if (!func_200())
			{
				*uParam0 = func_199(iLocal_289);
				StringCopy(&(uParam0->f_1), func_198(iLocal_289), 32);
				uParam0->f_16 = 3;
				uParam0->f_15 = 5f;
				if (*uParam0 == -1)
				{
					func_295("  -  Ambient Rampage Mission ID is invalid");
					func_280(uParam0, 1);
				}
				if (unk_0x0AAC2160036975D9(&(uParam0->f_1)))
				{
					func_295("  -  Ambient Rampage Mission ID is invalid");
					func_280(uParam0, 1);
				}
				unk_0x573691DB812DC8AA(&(Global_99250.f_17192[*uParam0 /*6*/]), 0);
				unk_0x573691DB812DC8AA(&(Global_99250.f_17192[*uParam0 /*6*/]), 2);
				unk_0xA5F70A8B83BDFA49(&(Global_99250.f_17192[*uParam0 /*6*/]), 3);
				Global_98337[*uParam0 /*10*/].f_1 = 0;
				if (!func_197(0))
				{
					Global_98337[*uParam0 /*10*/].f_3 = 0;
				}
				if (!func_189(*uParam0))
				{
					func_295(" RC Ambient Can't Launch - Can_RC_Launch Faled");
					func_280(uParam0, 1);
				}
				else if (!func_5(uParam0))
				{
					func_295(" RC Ambient Can't Launch - Launch_RC_Mission Failed");
					func_280(uParam0, 1);
				}
				else
				{
					func_4(500, 1);
					unk_0x0BA5964C07973FE9(Param1, uParam0->f_15, 1, 0, 0, 0);
					func_295(" RC Ambient Launcher Waiting To Terminate");
					Global_98337[*uParam0 /*10*/].f_1 = 0;
					if (func_3(uParam0))
					{
						func_295(" Ambient - Ready To Terminate");
						func_280(uParam0, 0);
					}
				}
			}
		}
		else
		{
			if (func_2("RAMP_HELP_TRIG"))
			{
				unk_0x4ACCE973F9C3CA3B(1);
			}
			iLocal_292 = 0;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

bool func_2(char* sParam0)
{
	unk_0xBA89110203C50939(sParam0);
	return unk_0x62881E3F5F311834(0);
}

int func_3(var* uParam0)
{
	while (!Global_98337[*uParam0 /*10*/])
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	return 1;
}

void func_4(int iParam0, bool bParam1)
{
	if (unk_0x398F615441F52A47())
	{
		if (!unk_0x8DD09BB8ACF9E623())
		{
			unk_0x16AA81661A0624FB(iParam0);
			if (bParam1)
			{
				while (!unk_0x2CC731F9E664299E())
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
				func_295("LAUNCH_RC_MISSION - NOT IS_RC_FINE_AND_IN_RANGE() [TERMINATING]");
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
		func_295("STEP_7_COMMON_LaunchMission - Trying to launch a null script string name");
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
	unk_0xA5F70A8B83BDFA49(&(Global_99250.f_17192[iParam0 /*6*/]), 5);
	if (unk_0xB1A77D5C890711F9(joaat("mission_stat_watcher")) > 0)
	{
		while (unk_0xB1A77D5C890711F9(joaat("mission_stat_watcher")) > 0)
		{
			func_22();
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	if (unk_0xB1A77D5C890711F9(joaat("mission_stat_watcher")) < 1)
	{
		Global_55660 = 0;
		unk_0x507887ECD0989471("mission_stat_watcher");
		while (!unk_0xF93DA38375EB3977("mission_stat_watcher"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xE81651AD79516E48("mission_stat_watcher", 1828);
		unk_0x2C85BCB989483284("mission_stat_watcher");
	}
	while (!unk_0xB56FEBC510E7E9DE(Global_99250.f_17192[iParam0 /*6*/], 5))
	{
		if (unk_0xB1A77D5C890711F9(joaat("mission_stat_watcher")) > 0)
		{
			unk_0x573691DB812DC8AA(&(Global_99250.f_17192[iParam0 /*6*/]), 5);
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
	Global_55687 = unk_0x3EAC9995EC220C5A();
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
	if (unk_0x0AAC2160036975D9(&cVar2))
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
	
	unk_0xBA16CA557222A92B(iParam0, &uVar0, -1);
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
	if (unk_0xB1A77D5C890711F9(joaat("mission_stat_watcher")) > 0)
	{
		if (func_23())
		{
			if (Global_55654 && !Global_55653)
			{
				Global_55654 = 0;
				unk_0x6F86F66DADFA5F86("mission_stat_watcher");
			}
		}
		else
		{
			unk_0x6F86F66DADFA5F86("mission_stat_watcher");
		}
	}
}

int func_23()
{
	if (unk_0xB1A77D5C890711F9(joaat("mission_stat_watcher")) < 1)
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
	if (unk_0x35D1CAD6ADAB6491(sParam0, sParam0))
	{
	}
}

void func_25(char[4] cParam0, int iParam1)
{
	unk_0xA5F70A8B83BDFA49(&(Global_91106.f_20), 17);
	func_26(cParam0, iParam1, 0);
}

void func_26(char[4] cParam0, int iParam1, int iParam2)
{
	if (Global_91106 != 10 && Global_91106 != 9)
	{
		StringCopy(&Global_92902, cParam0, 32);
		func_28(&Global_92910, cParam0, 0, "Start", iParam1, iParam2);
		func_27();
		Global_85617 = 0;
	}
}

void func_27()
{
	int iVar0;
	int iVar1;
	
	Global_95315 = Global_92910;
	Global_95315.f_1 = Global_92910.f_1;
	Global_95315.f_6 = Global_92910.f_6;
	Global_95315.f_7 = Global_92910.f_7;
	Global_95315.f_8 = Global_92910.f_8;
	Global_95315.f_2 = Global_92910.f_2;
	Global_95315.f_3 = Global_92910.f_3;
	Global_95315.f_4 = Global_92910.f_4;
	Global_95315.f_5 = Global_92910.f_5;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		Global_95315.f_9[iVar1] = Global_92910.f_9[iVar1];
		Global_95315.f_13[iVar1] = Global_92910.f_13[iVar1];
		Global_95315.f_17[iVar1] = Global_92910.f_17[iVar1];
		Global_95315.f_21[iVar1] = Global_92910.f_21[iVar1];
		Global_95315.f_25[0 /*295*/][iVar1 /*98*/] = { Global_92910.f_25[0 /*295*/][iVar1 /*98*/] };
		Global_95315.f_25[1 /*295*/][iVar1 /*98*/] = { Global_92910.f_25[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 < 12)
		{
			Global_95315.f_616[iVar1 /*65*/][iVar0] = Global_92910.f_616[iVar1 /*65*/][iVar0];
			Global_95315.f_616[iVar1 /*65*/].f_13[iVar0] = Global_92910.f_616[iVar1 /*65*/].f_13[iVar0];
			Global_95315.f_616[iVar1 /*65*/].f_26[iVar0] = Global_92910.f_616[iVar1 /*65*/].f_26[iVar0];
			iVar0++;
		}
		Global_95315.f_616[iVar1 /*65*/].f_59 = Global_92910.f_616[iVar1 /*65*/].f_59;
		Global_95315.f_616[iVar1 /*65*/].f_60 = Global_92910.f_616[iVar1 /*65*/].f_60;
		Global_95315.f_616[iVar1 /*65*/].f_61 = Global_92910.f_616[iVar1 /*65*/].f_61;
		Global_95315.f_616[iVar1 /*65*/].f_62 = Global_92910.f_616[iVar1 /*65*/].f_62;
		Global_95315.f_616[iVar1 /*65*/].f_63 = Global_92910.f_616[iVar1 /*65*/].f_63;
		Global_95315.f_616[iVar1 /*65*/].f_64 = Global_92910.f_616[iVar1 /*65*/].f_64;
		iVar0 = 0;
		while (iVar0 < 9)
		{
			Global_95315.f_616[iVar1 /*65*/].f_39[iVar0] = Global_92910.f_616[iVar1 /*65*/].f_39[iVar0];
			Global_95315.f_616[iVar1 /*65*/].f_49[iVar0] = Global_92910.f_616[iVar1 /*65*/].f_49[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			Global_95315.f_812[iVar1 /*284*/][iVar0 /*3*/] = { Global_92910.f_812[iVar1 /*284*/][iVar0 /*3*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			Global_95315.f_812[iVar1 /*284*/].f_133[iVar0 /*3*/] = { Global_92910.f_812[iVar1 /*284*/].f_133[iVar0 /*3*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			Global_95315.f_1665[iVar1 /*32*/][iVar0] = Global_92910.f_1665[iVar1 /*32*/][iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Global_95315.f_1665[iVar1 /*32*/].f_5[iVar0] = Global_92910.f_1665[iVar1 /*32*/].f_5[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 15)
		{
			Global_95315.f_1665[iVar1 /*32*/].f_16[iVar0] = Global_92910.f_1665[iVar1 /*32*/].f_16[iVar0];
			iVar0++;
		}
		Global_95315.f_1762[iVar1] = Global_92910.f_1762[iVar1];
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			Global_95315.f_2259[iVar1 /*15*/][iVar0] = Global_92910.f_2259[iVar1 /*15*/][iVar0];
			Global_95315.f_2259[iVar1 /*15*/].f_5[iVar0] = Global_92910.f_2259[iVar1 /*15*/].f_5[iVar0];
			Global_95315.f_2259[iVar1 /*15*/].f_10[iVar0] = Global_92910.f_2259[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			Global_95315.f_1766[iVar1 /*164*/][iVar0] = Global_92910.f_1766[iVar1 /*164*/][iVar0];
			Global_95315.f_1766[iVar1 /*164*/].f_4[iVar0] = Global_92910.f_1766[iVar1 /*164*/].f_4[iVar0];
			Global_95315.f_1766[iVar1 /*164*/].f_8[iVar0] = Global_92910.f_1766[iVar1 /*164*/].f_8[iVar0];
			Global_95315.f_1766[iVar1 /*164*/].f_12[iVar0] = Global_92910.f_1766[iVar1 /*164*/].f_12[iVar0];
			Global_95315.f_1766[iVar1 /*164*/].f_16[iVar0] = Global_92910.f_1766[iVar1 /*164*/].f_16[iVar0];
			Global_95315.f_1766[iVar1 /*164*/].f_20[iVar0] = Global_92910.f_1766[iVar1 /*164*/].f_20[iVar0];
			Global_95315.f_1766[iVar1 /*164*/].f_24[iVar0] = Global_92910.f_1766[iVar1 /*164*/].f_24[iVar0];
			Global_95315.f_1766[iVar1 /*164*/].f_28[iVar0] = Global_92910.f_1766[iVar1 /*164*/].f_28[iVar0];
			Global_95315.f_1766[iVar1 /*164*/].f_32[iVar0] = Global_92910.f_1766[iVar1 /*164*/].f_32[iVar0];
			Global_95315.f_1766[iVar1 /*164*/].f_36[iVar0] = Global_92910.f_1766[iVar1 /*164*/].f_36[iVar0];
			Global_95315.f_1766[iVar1 /*164*/].f_40[iVar0] = Global_92910.f_1766[iVar1 /*164*/].f_40[iVar0];
			Global_95315.f_1766[iVar1 /*164*/].f_44[iVar0] = Global_92910.f_1766[iVar1 /*164*/].f_44[iVar0];
			Global_95315.f_1766[iVar1 /*164*/].f_48[iVar0] = Global_92910.f_1766[iVar1 /*164*/].f_48[iVar0];
			Global_95315.f_1766[iVar1 /*164*/].f_52[iVar0] = Global_92910.f_1766[iVar1 /*164*/].f_52[iVar0];
			Global_95315.f_1766[iVar1 /*164*/].f_56[iVar0] = Global_92910.f_1766[iVar1 /*164*/].f_56[iVar0];
			Global_95315.f_1766[iVar1 /*164*/].f_60[iVar0] = Global_92910.f_1766[iVar1 /*164*/].f_60[iVar0];
			Global_95315.f_1766[iVar1 /*164*/].f_64[iVar0] = Global_92910.f_1766[iVar1 /*164*/].f_64[iVar0];
			Global_95315.f_1766[iVar1 /*164*/].f_68[iVar0] = Global_92910.f_1766[iVar1 /*164*/].f_68[iVar0];
			Global_95315.f_1766[iVar1 /*164*/].f_72[iVar0] = Global_92910.f_1766[iVar1 /*164*/].f_72[iVar0];
			Global_95315.f_1766[iVar1 /*164*/].f_76[iVar0] = Global_92910.f_1766[iVar1 /*164*/].f_76[iVar0];
			Global_95315.f_1766[iVar1 /*164*/].f_80[iVar0] = Global_92910.f_1766[iVar1 /*164*/].f_80[iVar0];
			Global_95315.f_1766[iVar1 /*164*/].f_84[iVar0] = Global_92910.f_1766[iVar1 /*164*/].f_84[iVar0];
			Global_95315.f_1766[iVar1 /*164*/].f_88[iVar0] = Global_92910.f_1766[iVar1 /*164*/].f_88[iVar0];
			Global_95315.f_1766[iVar1 /*164*/].f_92[iVar0] = Global_92910.f_1766[iVar1 /*164*/].f_92[iVar0];
			Global_95315.f_1766[iVar1 /*164*/].f_96[iVar0] = Global_92910.f_1766[iVar1 /*164*/].f_96[iVar0];
			Global_95315.f_1766[iVar1 /*164*/].f_100[iVar0] = Global_92910.f_1766[iVar1 /*164*/].f_100[iVar0];
			Global_95315.f_1766[iVar1 /*164*/].f_104[iVar0] = Global_92910.f_1766[iVar1 /*164*/].f_104[iVar0];
			Global_95315.f_1766[iVar1 /*164*/].f_108[iVar0] = Global_92910.f_1766[iVar1 /*164*/].f_108[iVar0];
			Global_95315.f_1766[iVar1 /*164*/].f_112[iVar0] = Global_92910.f_1766[iVar1 /*164*/].f_112[iVar0];
			Global_95315.f_1766[iVar1 /*164*/].f_116[iVar0] = Global_92910.f_1766[iVar1 /*164*/].f_116[iVar0];
			Global_95315.f_1766[iVar1 /*164*/].f_120[iVar0] = Global_92910.f_1766[iVar1 /*164*/].f_120[iVar0];
			Global_95315.f_1766[iVar1 /*164*/].f_124[iVar0] = Global_92910.f_1766[iVar1 /*164*/].f_124[iVar0];
			Global_95315.f_1766[iVar1 /*164*/].f_128[iVar0] = Global_92910.f_1766[iVar1 /*164*/].f_128[iVar0];
			Global_95315.f_1766[iVar1 /*164*/].f_132[iVar0] = Global_92910.f_1766[iVar1 /*164*/].f_132[iVar0];
			Global_95315.f_1766[iVar1 /*164*/].f_136[iVar0] = Global_92910.f_1766[iVar1 /*164*/].f_136[iVar0];
			Global_95315.f_1766[iVar1 /*164*/].f_140[iVar0] = Global_92910.f_1766[iVar1 /*164*/].f_140[iVar0];
			Global_95315.f_1766[iVar1 /*164*/].f_144[iVar0] = Global_92910.f_1766[iVar1 /*164*/].f_144[iVar0];
			Global_95315.f_1766[iVar1 /*164*/].f_148[iVar0] = Global_92910.f_1766[iVar1 /*164*/].f_148[iVar0];
			Global_95315.f_1766[iVar1 /*164*/].f_152[iVar0] = Global_92910.f_1766[iVar1 /*164*/].f_152[iVar0];
			Global_95315.f_1766[iVar1 /*164*/].f_156[iVar0] = Global_92910.f_1766[iVar1 /*164*/].f_156[iVar0];
			Global_95315.f_1766[iVar1 /*164*/].f_160[iVar0] = Global_92910.f_1766[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	Global_95315.f_2305 = { Global_92910.f_2305 };
	Global_95315.f_2305.f_3 = Global_92910.f_2305.f_3;
	Global_95315.f_2311 = { Global_92910.f_2311 };
	Global_95315.f_2311.f_3 = { Global_92910.f_2311.f_3 };
	Global_95315.f_2311.f_6 = Global_92910.f_2311.f_6;
	Global_95315.f_2311.f_8 = Global_95315.f_2311.f_8;
	Global_95315.f_2311.f_7 = Global_92910.f_2311.f_7;
	Global_95315.f_2311.f_9 = Global_92910.f_2311.f_9;
	Global_95315.f_2311.f_11 = Global_92910.f_2311.f_11;
	Global_95315.f_2311.f_10 = Global_92910.f_2311.f_10;
	Global_95315.f_2311.f_12 = Global_92910.f_2311.f_12;
	Global_95315.f_2311.f_12.f_1 = { Global_92910.f_2311.f_12.f_1 };
	Global_95315.f_2311.f_12.f_5 = Global_92910.f_2311.f_12.f_5;
	Global_95315.f_2311.f_12.f_6 = Global_92910.f_2311.f_12.f_6;
	Global_95315.f_2311.f_12.f_7 = Global_92910.f_2311.f_12.f_7;
	Global_95315.f_2311.f_12.f_8 = Global_92910.f_2311.f_12.f_8;
	Global_95315.f_2311.f_12.f_9 = { Global_92910.f_2311.f_12.f_9 };
	Global_95315.f_2311.f_12.f_59 = { Global_92910.f_2311.f_12.f_59 };
	Global_95315.f_2311.f_12.f_62 = Global_92910.f_2311.f_12.f_62;
	Global_95315.f_2311.f_12.f_63 = Global_92910.f_2311.f_12.f_63;
	Global_95315.f_2311.f_12.f_64 = Global_92910.f_2311.f_12.f_64;
	Global_95315.f_2311.f_12.f_65 = Global_92910.f_2311.f_12.f_65;
	Global_95315.f_2311.f_12.f_77 = Global_92910.f_2311.f_12.f_77;
	Global_95315.f_2311.f_12.f_66 = Global_92910.f_2311.f_12.f_66;
	Global_95315.f_2311.f_12.f_67 = Global_92910.f_2311.f_12.f_67;
	Global_95315.f_2311.f_12.f_68 = Global_92910.f_2311.f_12.f_68;
	Global_95315.f_2311.f_12.f_69 = Global_92910.f_2311.f_12.f_69;
	Global_95315.f_2311.f_12.f_71 = Global_92910.f_2311.f_12.f_71;
	Global_95315.f_2311.f_12.f_72 = Global_92910.f_2311.f_12.f_72;
	Global_95315.f_2311.f_12.f_73 = Global_92910.f_2311.f_12.f_73;
	Global_95315.f_2311.f_12.f_74 = Global_92910.f_2311.f_12.f_74;
	Global_95315.f_2311.f_12.f_75 = Global_92910.f_2311.f_12.f_75;
	Global_95315.f_2311.f_12.f_76 = Global_92910.f_2311.f_12.f_76;
	Global_95315.f_2401 = Global_92910.f_2401;
	Global_95315.f_2401.f_1 = Global_92910.f_2401.f_1;
	Global_95315.f_2401.f_2 = Global_92910.f_2401.f_2;
	Global_95315.f_2401.f_3 = Global_92910.f_2401.f_3;
}

void func_28(var uParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_207();
	uParam0->f_1 = func_81();
	unk_0xC894A44194E93B37(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
	{
		func_66(&(uParam0->f_2305), 0);
		func_65(unk_0x77F050A399DB77ED());
		func_59(unk_0x77F050A399DB77ED(), 0);
		unk_0x587BE7B13B3A93BF(unk_0x77F050A399DB77ED(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_99250.f_1754.f_539.f_294[iVar1];
		if (iVar1 == func_56())
		{
			func_49(unk_0x77F050A399DB77ED(), &(uParam0->f_616[iVar1 /*65*/]), 1);
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
			uParam0->f_812[iVar1 /*284*/][iVar0 /*3*/] = { Global_99250.f_1754.f_539.f_298[iVar1 /*284*/][iVar0 /*3*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			uParam0->f_812[iVar1 /*284*/].f_133[iVar0 /*3*/] = { Global_99250.f_1754.f_539.f_298[iVar1 /*284*/].f_133[iVar0 /*3*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				unk_0xBA16CA557222A92B(joaat("sp0_weap_purch_0"), &(uParam0->f_1665[iVar1 /*32*/][0]), -1);
				unk_0xBA16CA557222A92B(joaat("sp0_weap_purch_1"), &(uParam0->f_1665[iVar1 /*32*/][1]), -1);
				unk_0xBA16CA557222A92B(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_5[0]), -1);
				unk_0xBA16CA557222A92B(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_5[1]), -1);
				unk_0xBA16CA557222A92B(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_5[2]), -1);
				unk_0xBA16CA557222A92B(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_5[3]), -1);
				unk_0xBA16CA557222A92B(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_5[4]), -1);
				unk_0xBA16CA557222A92B(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_16[0]), -1);
				unk_0xBA16CA557222A92B(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_16[1]), -1);
				unk_0xBA16CA557222A92B(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_16[2]), -1);
				unk_0xBA16CA557222A92B(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_16[3]), -1);
				unk_0xBA16CA557222A92B(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_16[4]), -1);
				unk_0xBA16CA557222A92B(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_1665[iVar1 /*32*/].f_16[5]), -1);
				unk_0xBA16CA557222A92B(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_1665[iVar1 /*32*/].f_16[6]), -1);
				unk_0xBA16CA557222A92B(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_1665[iVar1 /*32*/].f_16[7]), -1);
				unk_0xBA16CA557222A92B(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_1665[iVar1 /*32*/].f_16[8]), -1);
				unk_0xBA16CA557222A92B(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_1665[iVar1 /*32*/].f_16[9]), -1);
				unk_0xBA16CA557222A92B(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_1665[iVar1 /*32*/].f_16[10]), -1);
				unk_0xBA16CA557222A92B(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_1665[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				unk_0xBA16CA557222A92B(joaat("sp1_weap_purch_0"), &(uParam0->f_1665[iVar1 /*32*/][0]), -1);
				unk_0xBA16CA557222A92B(joaat("sp1_weap_purch_1"), &(uParam0->f_1665[iVar1 /*32*/][1]), -1);
				unk_0xBA16CA557222A92B(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_5[0]), -1);
				unk_0xBA16CA557222A92B(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_5[1]), -1);
				unk_0xBA16CA557222A92B(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_5[2]), -1);
				unk_0xBA16CA557222A92B(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_5[3]), -1);
				unk_0xBA16CA557222A92B(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_5[4]), -1);
				unk_0xBA16CA557222A92B(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_16[0]), -1);
				unk_0xBA16CA557222A92B(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_16[1]), -1);
				unk_0xBA16CA557222A92B(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_16[2]), -1);
				unk_0xBA16CA557222A92B(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_16[3]), -1);
				unk_0xBA16CA557222A92B(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_16[4]), -1);
				unk_0xBA16CA557222A92B(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_1665[iVar1 /*32*/].f_16[5]), -1);
				unk_0xBA16CA557222A92B(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_1665[iVar1 /*32*/].f_16[6]), -1);
				unk_0xBA16CA557222A92B(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_1665[iVar1 /*32*/].f_16[7]), -1);
				unk_0xBA16CA557222A92B(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_1665[iVar1 /*32*/].f_16[8]), -1);
				unk_0xBA16CA557222A92B(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_1665[iVar1 /*32*/].f_16[9]), -1);
				unk_0xBA16CA557222A92B(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_1665[iVar1 /*32*/].f_16[10]), -1);
				unk_0xBA16CA557222A92B(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_1665[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				unk_0xBA16CA557222A92B(joaat("sp2_weap_purch_0"), &(uParam0->f_1665[iVar1 /*32*/][0]), -1);
				unk_0xBA16CA557222A92B(joaat("sp2_weap_purch_1"), &(uParam0->f_1665[iVar1 /*32*/][1]), -1);
				unk_0xBA16CA557222A92B(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_5[0]), -1);
				unk_0xBA16CA557222A92B(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_5[1]), -1);
				unk_0xBA16CA557222A92B(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_5[2]), -1);
				unk_0xBA16CA557222A92B(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_5[3]), -1);
				unk_0xBA16CA557222A92B(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_5[4]), -1);
				unk_0xBA16CA557222A92B(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_16[0]), -1);
				unk_0xBA16CA557222A92B(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_16[1]), -1);
				unk_0xBA16CA557222A92B(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_16[2]), -1);
				unk_0xBA16CA557222A92B(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_16[3]), -1);
				unk_0xBA16CA557222A92B(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_16[4]), -1);
				unk_0xBA16CA557222A92B(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_1665[iVar1 /*32*/].f_16[5]), -1);
				unk_0xBA16CA557222A92B(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_1665[iVar1 /*32*/].f_16[6]), -1);
				unk_0xBA16CA557222A92B(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_1665[iVar1 /*32*/].f_16[7]), -1);
				unk_0xBA16CA557222A92B(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_1665[iVar1 /*32*/].f_16[8]), -1);
				unk_0xBA16CA557222A92B(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_1665[iVar1 /*32*/].f_16[9]), -1);
				unk_0xBA16CA557222A92B(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_1665[iVar1 /*32*/].f_16[10]), -1);
				unk_0xBA16CA557222A92B(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_1665[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_99250.f_25017.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_52834[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_99250.f_1754.f_539.f_1635[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_99250.f_1754.f_539.f_1635[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2259[iVar1 /*15*/][iVar0] = Global_99250.f_1754.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2259[iVar1 /*15*/].f_5[iVar0] = Global_99250.f_1754.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2259[iVar1 /*15*/].f_10[iVar0] = Global_99250.f_1754.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_1766[iVar1 /*164*/][iVar0] = Global_99250.f_1754[iVar1 /*164*/][iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_4[iVar0] = Global_99250.f_1754[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_8[iVar0] = Global_99250.f_1754[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_12[iVar0] = Global_99250.f_1754[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_16[iVar0] = Global_99250.f_1754[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_20[iVar0] = Global_99250.f_1754[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_24[iVar0] = Global_99250.f_1754[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_28[iVar0] = Global_99250.f_1754[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_32[iVar0] = Global_99250.f_1754[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_36[iVar0] = Global_99250.f_1754[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_40[iVar0] = Global_99250.f_1754[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_44[iVar0] = Global_99250.f_1754[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_48[iVar0] = Global_99250.f_1754[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_52[iVar0] = Global_99250.f_1754[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_56[iVar0] = Global_99250.f_1754[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_60[iVar0] = Global_99250.f_1754[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_64[iVar0] = Global_99250.f_1754[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_68[iVar0] = Global_99250.f_1754[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_72[iVar0] = Global_99250.f_1754[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_76[iVar0] = Global_99250.f_1754[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_80[iVar0] = Global_99250.f_1754[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_84[iVar0] = Global_99250.f_1754[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_88[iVar0] = Global_99250.f_1754[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_92[iVar0] = Global_99250.f_1754[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_96[iVar0] = Global_99250.f_1754[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_100[iVar0] = Global_99250.f_1754[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_104[iVar0] = Global_99250.f_1754[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_108[iVar0] = Global_99250.f_1754[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_112[iVar0] = Global_99250.f_1754[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_116[iVar0] = Global_99250.f_1754[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_120[iVar0] = Global_99250.f_1754[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_124[iVar0] = Global_99250.f_1754[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_128[iVar0] = Global_99250.f_1754[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_132[iVar0] = Global_99250.f_1754[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_136[iVar0] = Global_99250.f_1754[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_140[iVar0] = Global_99250.f_1754[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_144[iVar0] = Global_99250.f_1754[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_148[iVar0] = Global_99250.f_1754[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_152[iVar0] = Global_99250.f_1754[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_156[iVar0] = Global_99250.f_1754[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_160[iVar0] = Global_99250.f_1754[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	unk_0xBA16CA557222A92B(joaat("sp0_special_ability"), &(uParam0->f_1762[0]), -1);
	unk_0xBA16CA557222A92B(joaat("sp1_special_ability"), &(uParam0->f_1762[1]), -1);
	unk_0xBA16CA557222A92B(joaat("sp2_special_ability"), &(uParam0->f_1762[2]), -1);
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
		iParam2 = unk_0x77F050A399DB77ED();
	}
	if (unk_0x1F2158D615BC4B25(iParam2))
	{
		uParam1->f_5 = func_47(iParam2);
	}
	if (func_44(iParam2, &iVar0, iParam3, iParam5))
	{
		func_31(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0x1F2158D615BC4B25(iVar0))
	{
		if (!unk_0x0B6E83A9A7ED3EBA(iVar0))
		{
			if (unk_0x3CE8DE6EBE766C15(iVar0, joaat("skylift")) && unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), iVar0, 0))
			{
				func_31(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_31(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (unk_0x968EA16107097324(iParam2, 0))
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
		*uParam0 = { unk_0xAF99169F0F5AE41D(iParam1, 1) };
		uParam0->f_6 = unk_0x7578EBD2DA3F8DD2(iParam1);
		uParam0->f_3 = { unk_0xC8AC706FAE314DA7(iParam1) };
		if (unk_0xCA55F1A0D9ADE3AD(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_69091 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
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
		if (unk_0x1F2158D615BC4B25(Global_68186.f_484[iVar0]))
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
	
	if (!unk_0x1F2158D615BC4B25(iParam0))
	{
		return 145;
	}
	if (!unk_0x968EA16107097324(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x1F2158D615BC4B25(Global_88770[iVar0]))
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
	
	if (!unk_0x1F2158D615BC4B25(iParam0))
	{
		return 0;
	}
	if (!unk_0x968EA16107097324(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x1F2158D615BC4B25(Global_88770[iVar0]))
		{
			if (Global_88770[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_88780[iVar0])
				{
					if (iParam2 == 0 || unk_0xDF1398076E26B0E4(iParam0) == func_37(iParam1, iParam2))
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
			if (Global_99250.f_7703.f_99.f_58[128] && !Global_99250.f_7703.f_99.f_58[131])
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
					if (Global_99250.f_7703.f_99.f_58[119])
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
			else if (Global_99250.f_7703.f_99.f_58[118])
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
	
	if (unk_0x968EA16107097324(iParam0, 0))
	{
		func_43(uParam1);
		uParam1->f_66 = unk_0xDF1398076E26B0E4(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x2FE7FA21D340AA95(iParam0), 16);
		*uParam1 = unk_0x21C7BB3FC7BDA875(iParam0);
		unk_0x7F28F78FC4A382A2(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x7A754CC677BF330F(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0xF782955E2B9CA2A2(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0xA586FD6870BD7171(iParam0);
		uParam1->f_67 = unk_0xF933C1D6868EE7D5(iParam0);
		uParam1->f_69 = unk_0x9489701175ECF585(iParam0);
		uParam1->f_70 = unk_0x9777E452CDE55809(iParam0);
		unk_0x56E6FA42E5717914(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x521FE229CF7A3A21(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0xCA6A17118B1E6E81(iParam0, 2))
		{
			unk_0x573691DB812DC8AA(&(uParam1->f_77), 28);
		}
		if (unk_0xCA6A17118B1E6E81(iParam0, 3))
		{
			unk_0x573691DB812DC8AA(&(uParam1->f_77), 29);
		}
		if (unk_0xCA6A17118B1E6E81(iParam0, 0))
		{
			unk_0x573691DB812DC8AA(&(uParam1->f_77), 30);
		}
		if (unk_0xCA6A17118B1E6E81(iParam0, 1))
		{
			unk_0x573691DB812DC8AA(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x5265771D79F24A99(iParam0, 0))
		{
			uParam1->f_68 = unk_0x362684AE59B8BD46(iParam0);
		}
		if (unk_0x4F32F86538FB8979(uParam1->f_66))
		{
			if (unk_0xA2822ECBE08BA15C(iParam0))
			{
				switch (unk_0x0AFB4FC1B0EEBCE1(iParam0))
				{
					case 2:
					case 0:
						unk_0xA5F70A8B83BDFA49(&(uParam1->f_77), 23);
						unk_0x573691DB812DC8AA(&(uParam1->f_77), 22);
						break;
					
					case 3:
					case 1:
						unk_0xA5F70A8B83BDFA49(&(uParam1->f_77), 23);
						unk_0xA5F70A8B83BDFA49(&(uParam1->f_77), 22);
						break;
					
					case 4:
						unk_0x573691DB812DC8AA(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0x573691DB812DC8AA(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0xF961EB70CA5E8895(iParam0))
		{
			unk_0x573691DB812DC8AA(&(uParam1->f_77), 9);
		}
		if (unk_0x8A147513C0F86C22(iParam0))
		{
			unk_0x573691DB812DC8AA(&(uParam1->f_77), 10);
		}
		if (unk_0xBA6E8DEFECA26A39(iParam0))
		{
			unk_0x573691DB812DC8AA(&(uParam1->f_77), 13);
			unk_0x221F450D7BC62614(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0xB01B059B334F67A5(iParam0))
		{
			unk_0x573691DB812DC8AA(&(uParam1->f_77), 12);
		}
		func_42(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x3F119D3637D9EFD9(iParam0, iVar0 + 1))
			{
				unk_0x573691DB812DC8AA(&(uParam1->f_77), func_41(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x2E5C1D84FCCF5CE1(iParam0, 0))
		{
			unk_0x573691DB812DC8AA(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0xA5F70A8B83BDFA49(&(uParam1->f_77), 11);
		}
		if (unk_0xB22BDF5B6DBD298B(iParam0, "IgnoredByQuickSave") && unk_0x51ABF0A53A19B212(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x573691DB812DC8AA(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0xA5F70A8B83BDFA49(&(uParam1->f_77), 27);
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
	
	if (!unk_0x968EA16107097324(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xB944775459039806(*iParam0) == 0)
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
			if (unk_0xE4A2AB18E282A5D6(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x412350E0E75BCEFD(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x329167DA18FC4DBD(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x329167DA18FC4DBD(*iParam0, iVar0);
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
	
	if (unk_0x1F2158D615BC4B25(iParam0))
	{
		if (!unk_0x1E80C02AC16B6622(iParam0))
		{
			if (iParam0 == unk_0x77F050A399DB77ED())
			{
				*uParam1 = unk_0xD8D1111EA0CFD1DB();
			}
			else
			{
				*uParam1 = unk_0xF8D66A34AF0C53A5(iParam0, 1);
			}
			if (unk_0x1F2158D615BC4B25(*uParam1))
			{
				if (unk_0x968EA16107097324(*uParam1, 0))
				{
					if (iParam2 == 0 || unk_0xA2490B3CE6382FBB(unk_0xAF99169F0F5AE41D(*uParam1, 1), unk_0xAF99169F0F5AE41D(iParam0, 1), 1) < 100f)
					{
						if (unk_0x3CE8DE6EBE766C15(*uParam1, joaat("taxi")))
						{
							if (unk_0x07A8845F7F106A38(*uParam1, -1) != iParam0 && unk_0x07A8845F7F106A38(*uParam1, -1) != 0)
							{
								return 0;
							}
						}
						if (func_45(*uParam1, func_207(), 1))
						{
							sVar0 = unk_0x664B47C58CE8A0A4();
							if (!unk_0x35D1CAD6ADAB6491(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!unk_0xB42592B9FFEB5EDE(iParam0, 1))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (unk_0xB22BDF5B6DBD298B(*uParam1, "IgnoredByQuickSave"))
							{
								if (unk_0x51ABF0A53A19B212(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (unk_0x3CE8DE6EBE766C15(*uParam1, joaat("blimp")))
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
	
	if (!unk_0x1F2158D615BC4B25(iParam0) || !unk_0x968EA16107097324(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_46(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0xB56FEBC510E7E9DE(Global_99250.f_5847[iVar9], 0))
		{
			if (unk_0x35420DF6FD85930A(&sVar1, iParam0))
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
	
	if (unk_0x1F2158D615BC4B25(iParam0))
	{
		iVar1 = unk_0xDF1398076E26B0E4(iParam0);
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
		return Global_99250.f_32503[iParam0 /*29*/];
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
	
	if (!unk_0x1E80C02AC16B6622(iParam0))
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
			uParam1->f_59 = Global_99250.f_1754.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_99250.f_1754.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_99250.f_1754.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_99250.f_1754.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_99250.f_1754.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_99250.f_1754.f_539[iVar0 /*65*/].f_64;
		}
		else if (unk_0x4C779B19E6DDCDA2() && unk_0xDF1398076E26B0E4(iParam0) == unk_0xDF1398076E26B0E4(unk_0x77F050A399DB77ED()))
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
		if (unk_0x4C779B19E6DDCDA2() && iParam0 == unk_0x77F050A399DB77ED())
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
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2466327[iParam0 /*5*/][func_51(iParam1)];
	if (unk_0xBA16CA557222A92B(uVar0, &uVar1, -1))
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
			Global_2466040 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2466040 = 1;
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
	
	uVar0 = Global_2486179[iParam0 /*5*/][func_51(iParam1)];
	if (unk_0x89E37638462C1F4C(uVar0, &uVar1, -1))
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
		*uParam2 = unk_0xB7A83E90E95B3E76(iParam0, iParam1);
		*uParam3 = unk_0x7739EACC3B2657EC(iParam0, iParam1);
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
				if (unk_0x243F40077E1356C1(iParam0) && unk_0xAB3A9FC88A71A76C(iParam0) != -1)
				{
					*uParam2 = unk_0xAB3A9FC88A71A76C(iParam0);
					*uParam3 = unk_0xF209C0DE8A3ADDF3(iParam0);
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
		*uParam2 = unk_0xB2833E96F49D3CDC(iParam0, iParam1);
		*uParam3 = unk_0xD01703B8B3FC785F(iParam0, iParam1);
		*uParam4 = unk_0x1B1CA05B66B2441C(iParam0, iParam1);
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
	return Global_99250.f_1754.f_539.f_3549;
}

void func_57()
{
	int iVar0;
	
	if (unk_0x1F2158D615BC4B25(unk_0x77F050A399DB77ED()))
	{
		if (func_48(Global_99250.f_1754.f_539.f_3549) != unk_0xDF1398076E26B0E4(unk_0x77F050A399DB77ED()))
		{
			iVar0 = func_47(unk_0x77F050A399DB77ED());
			if (func_39(iVar0) && (!func_58(14) || Global_98202))
			{
				if (Global_99250.f_1754.f_539.f_3549 != iVar0 && func_39(Global_99250.f_1754.f_539.f_3549))
				{
					Global_99250.f_1754.f_539.f_3550 = Global_99250.f_1754.f_539.f_3549;
				}
				Global_99250.f_1754.f_539.f_3551 = iVar0;
				Global_99250.f_1754.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_99250.f_1754.f_539.f_3549 != 145)
			{
				Global_99250.f_1754.f_539.f_3551 = Global_99250.f_1754.f_539.f_3549;
			}
			return;
		}
	}
	Global_99250.f_1754.f_539.f_3549 = 145;
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
	if (func_39(iVar0) && !unk_0x1E80C02AC16B6622(iParam0))
	{
		if (iParam0 == unk_0x77F050A399DB77ED())
		{
			func_60(iParam0, &(Global_99250.f_1754.f_539.f_298[iVar0 /*284*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_99250.f_1754.f_539.f_1151[iVar2 /*4*/][iVar0] = unk_0xA339DDE41738BBEA(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0xD3559B313C9EB283();
					if (Global_99250.f_1754.f_539.f_1151[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_99250.f_1754.f_539.f_1184 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0x0FE2196CBFBDA901(unk_0x8ACD527A7E574590(), &uVar3);
			if (iVar0 == 0)
			{
				unk_0x5716C8F12991E399(joaat("sp0_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 1)
			{
				unk_0x5716C8F12991E399(joaat("sp1_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 2)
			{
				unk_0x5716C8F12991E399(joaat("sp2_parachute_current_tint"), uVar3, 1);
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
	
	if (!unk_0x1E80C02AC16B6622(iParam0))
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
				Var4.f_0 = unk_0x5C878573BDD0D070(iParam0, func_64(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				if (Var4.f_0 != 0 && Var4.f_0 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = unk_0x092B61BA309C1C19(iParam0, Var4.f_0);
					if (Var4.f_0 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					unk_0x573691DB812DC8AA(&(Var4.f_2), (20 + unk_0x890D197157386718(iParam0, Var4.f_0)));
					if (Var4.f_1 == -1)
					{
						if (!unk_0x74F0C9C637E04E3B(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*3*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_62(Var4.f_0, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0x3A6A59529A45F21B(iParam0, Var4.f_0, iVar2))
						{
							unk_0x573691DB812DC8AA(&(Var4.f_2), iVar1);
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
		iVar8 = unk_0xB8A07F7693D2ACD0();
		iVar7 = 0;
		while (iVar7 < iVar8)
		{
			if ((unk_0x4D9EC363BAD16B5E(iVar7, &Var9) && !func_61(Var9.f_1)) && iVar70 < 50)
			{
				if (!unk_0xD5451DF6AA0E4BDB(Var9.f_0))
				{
					Var4.f_0 = Var9.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_1 = unk_0x092B61BA309C1C19(iParam0, Var4.f_0);
					if (unk_0xFB599990805DCA25(iParam0, Var4.f_0, 0))
					{
						unk_0x573691DB812DC8AA(&(Var4.f_2), (20 + unk_0x890D197157386718(iParam0, Var4.f_0)));
					}
					else
					{
						unk_0x573691DB812DC8AA(&(Var4.f_2), 20);
					}
					if (Var4.f_1 == -1)
					{
						if (!unk_0x74F0C9C637E04E3B(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_133[iVar70 /*3*/].f_1 = Var4.f_1;
					iVar1 = 0;
					while (iVar1 < unk_0x81213480F9B88988(iVar7))
					{
						if (unk_0x2A3D95401DAF2A5F(iVar7, iVar1, &Var48))
						{
							if (unk_0x3A6A59529A45F21B(iParam0, Var4.f_0, Var48.f_3))
							{
								unk_0x573691DB812DC8AA(&(Var4.f_2), iVar1);
							}
						}
						iVar1++;
					}
				}
				if (Var4.f_0 != 0)
				{
					if (!unk_0xFB599990805DCA25(iParam0, Var4.f_0, 0))
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
	if (unk_0x4C779B19E6DDCDA2())
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
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
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
					if (iParam1 < unk_0x81213480F9B88988(iVar1))
					{
						if (unk_0x2A3D95401DAF2A5F(iVar1, iParam1, &Var41))
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
	
	iVar1 = unk_0xB8A07F7693D2ACD0();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0x4D9EC363BAD16B5E(iVar0, uParam1))
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
	if (func_39(iVar0) && !unk_0x1E80C02AC16B6622(iParam0))
	{
		Global_99250.f_1754.f_539.f_294[iVar0] = unk_0xD3DBEFE99A4A1FA8(iParam0);
	}
}

void func_66(var uParam0, int iParam1)
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	int iVar5;
	
	*uParam0 = { unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1) };
	uParam0->f_3 = unk_0x7578EBD2DA3F8DD2(unk_0x77F050A399DB77ED());
	uParam0->f_5 = unk_0x76DF82AEAE07C2A4(unk_0x77F050A399DB77ED());
	if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
	{
		uParam0->f_4 = unk_0xAEE8018B8C539989(unk_0x8ACD527A7E574590());
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
	else if (unk_0xB1A77D5C890711F9(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (unk_0xB56FEBC510E7E9DE(Global_69565, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (unk_0xB56FEBC510E7E9DE(Global_69565, 5))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (unk_0xB56FEBC510E7E9DE(Global_69565, 6))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (unk_0xB56FEBC510E7E9DE(Global_69565, 7))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (unk_0xFC0420DC987053AC(unk_0x77F050A399DB77ED()) == unk_0x9794B606B17FAF25(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, 1, 0) || unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, 1, 0))
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
		else if (unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0))
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
		else if (unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, 1, 0))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, 1, 0))
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
	
	if (!unk_0x21DD8147BF79ACC6(Param0))
	{
		iVar0 = unk_0x9794B606B17FAF25(Param4, sParam3);
		if (!unk_0x5C31634D1DECF73C(iVar0))
		{
			return 0;
		}
		iVar1 = unk_0xDA054FB72A050581(Param0);
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
	if (!unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()) && !unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
	{
		if (func_80())
		{
			*uParam0 = func_76(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 0), 5, -1, 0, 1, -1);
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
		return unk_0xB56FEBC510E7E9DE(Global_91158.f_1300[iParam0], iParam1);
	}
	else if (unk_0x4C779B19E6DDCDA2())
	{
		if (func_74() == 0)
		{
			return unk_0xB56FEBC510E7E9DE(func_50(func_73(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xB56FEBC510E7E9DE(Global_99250.f_668[iParam0], iParam1);
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
			return 3664;
			break;
		
		default:
			break;
	}
	return 3741;
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
				fVar1 = unk_0xA2490B3CE6382FBB(Param0, func_77(iVar0, 0), 1);
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
	
	func_91(&uVar0, unk_0x624CC88A8815545E());
	func_90(&uVar0, unk_0xD3D98375D5CA69E4());
	func_89(&uVar0, unk_0x5C5157A539753532());
	func_84(&uVar0, unk_0xCB12BC5A618B995B());
	func_83(&uVar0, unk_0x9746D90F14C930B9());
	func_82(&uVar0, unk_0xD45B57A596913560());
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
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_87(unk_0xB56FEBC510E7E9DE(iParam0, 31), -1, 1)) + 2011;
}

int func_87(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_88(var uParam0)
{
	return uParam0 & 15;
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
	
	if (unk_0x48318B6DD4499562() || unk_0xBB3DCD23C363D187())
	{
		uVar0 = iParam0;
		unk_0x6AB8498FEFC03AD9(9, &uVar0, 1, 1);
	}
	else if (unk_0xF10A9EEADE6FD3EB() || unk_0xA24A81C5933F1B29())
	{
		StringCopy(&cVar1, "SPRC_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x28C4EBB8F031876D(9, &cVar1);
	}
}

void func_93(char* sParam0, var uParam1, int iParam2)
{
	if (!unk_0x0AAC2160036975D9(&Global_88509))
	{
		unk_0x168C4059D0E3A455(&Global_88509, 0, 0, 0, 1, 0);
		StringCopy(&Global_88509, "", 64);
	}
	StringCopy(&Global_88509, sParam0, 64);
	unk_0x40597C2B44D96D32(sParam0, uParam1, iParam2, func_197(0));
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
		if (!unk_0x0AAC2160036975D9(&(uParam0->f_9)))
		{
			func_118(1);
			func_116(uParam0, 1, func_117(*uParam0));
		}
		if (uParam0->f_27)
		{
			if (func_115(*uParam0))
			{
				while (!unk_0xA73F3A974E4E7D9D(unk_0x77F050A399DB77ED()))
				{
					func_174();
					unk_0x4EDE34FBADD967A6(0);
				}
			}
		}
		func_99(*uParam0);
		iVar0 = unk_0xB8BA7F44DF1575E1(&(uParam0->f_1), uParam0, 61, 17000);
		unk_0x2C85BCB989483284(&(uParam0->f_1));
		if (unk_0x575DA8209967217A())
		{
			func_295("Initial cutscene loaded and passing to RC mission.");
			unk_0x5B8614843A129E6C(iVar0);
		}
		else
		{
			func_295("Initial cutscene wasn't loaded in time to pass to RC mission.");
			unk_0xF5626435714EF511();
		}
		return 1;
	}
	return 0;
}

void func_99(int iParam0)
{
	struct<2> Var0;
	
	func_114();
	if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
	{
		unk_0x1706625EBCDDEBF9(unk_0x77F050A399DB77ED(), 32, 0);
		unk_0x1706625EBCDDEBF9(unk_0x77F050A399DB77ED(), 250, 0);
	}
	if (func_113(iParam0))
	{
		unk_0xC8313C2F09736831(unk_0x77F050A399DB77ED(), 0);
	}
	unk_0xDBCB209530188FF6(unk_0x8ACD527A7E574590(), 1);
	unk_0x9516B90C3EE9BEBE(0, 1);
	unk_0x9516B90C3EE9BEBE(3, 1);
	unk_0x9516B90C3EE9BEBE(2, 1);
	if (Global_36750 == 1)
	{
		if (func_111(unk_0x77F050A399DB77ED()))
		{
			func_102(unk_0x77F050A399DB77ED());
		}
	}
	if (!func_188())
	{
		if (iParam0 < 63)
		{
			func_100(iParam0);
			Var0 = { func_12(iParam0) };
			unk_0x275546117AF1F063(1, &Var0);
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
		unk_0x2CFB33EDB2933AD4(15);
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
	if (!unk_0x1F2158D615BC4B25(iParam0))
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
		if (Global_36527[iParam0 /*5*/].f_1 == unk_0x77F050A399DB77ED())
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
		if (!unk_0x1E80C02AC16B6622(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_112(int iParam0)
{
	if (unk_0x1F2158D615BC4B25(iParam0))
	{
		if (!unk_0x0B6E83A9A7ED3EBA(iParam0))
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
	unk_0xA5F70A8B83BDFA49(&Global_2283, 25);
	unk_0x573691DB812DC8AA(&Global_2284, 11);
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
			unk_0x498A6382FA0B8833(uParam0->f_28[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_112(uParam0->f_35[iVar0]))
		{
			unk_0x498A6382FA0B8833(uParam0->f_35[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_112(uParam0->f_41[iVar0]))
		{
			unk_0x498A6382FA0B8833(uParam0->f_41[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		}
		iVar0++;
	}
	if (!unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
	{
		unk_0x498A6382FA0B8833(unk_0x77F050A399DB77ED(), iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		unk_0x166904329EDD2A43(unk_0x77F050A399DB77ED(), iParam1);
		if (bParam2)
		{
			unk_0x9687CF9C13C1F6A1(unk_0x77F050A399DB77ED(), joaat("weapon_unarmed"), 1);
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
	
	uVar0 = unk_0x7F3E348C0892D8D2();
	if (!unk_0x28D605B18777DE18(uVar0))
	{
		if (bParam0)
		{
		}
		unk_0xC5FC9A0E5FD51B1A(uVar0, bParam0, 16);
		unk_0xC5FC9A0E5FD51B1A(uVar0, bParam0, 32);
	}
	func_119(1, 1, 0, 0);
}

void func_119(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0xCBF71C579F3C5665(unk_0x8ACD527A7E574590());
		unk_0xDBCB209530188FF6(unk_0x8ACD527A7E574590(), 1);
		unk_0x52E11301F48B67C9(unk_0x8ACD527A7E574590(), 1);
		func_126(1);
		unk_0xB2FE902971602DFF();
		unk_0x8AD31F9246CE7ADF();
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xEA9C2A206A86B744())
			{
				unk_0xC9AB825AA4821BDA(0);
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
		unk_0x7A72DD566E92DC37();
		Global_55665 = 0;
		if (bParam1)
		{
			unk_0x1F3478667D91BCDD();
		}
		unk_0xDBCB209530188FF6(unk_0x8ACD527A7E574590(), 0);
		unk_0x52E11301F48B67C9(unk_0x8ACD527A7E574590(), 0);
		func_124(0, iParam3, iParam2, 0);
		if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()) && !func_120(unk_0x8ACD527A7E574590()))
		{
			unk_0x166904329EDD2A43(unk_0x77F050A399DB77ED(), 0);
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
		if (iParam0 == unk_0x8ACD527A7E574590())
		{
			return 1;
		}
	}
	if (unk_0xB56FEBC510E7E9DE(Global_2416794[iParam0 /*303*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_121()
{
	return unk_0xB56FEBC510E7E9DE(Global_2359301, 3);
}

bool func_122(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x8ACD527A7E574590())
	{
		bVar0 = func_123(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1586488[iParam0 /*408*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x860CE5C791DC28F5(iParam0))
		{
			bVar0 = unk_0xE6C94A0E653BD3F1(iParam0) == 8;
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
	if (Global_1315888[iVar1] == 1)
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
	if (unk_0x2C063B4379F0C076())
	{
		if (unk_0x4967E3B78238C06C() != iParam0 && uParam2)
		{
			unk_0x5377CB2488C9CA95(iParam0, uParam1, 1, iParam3);
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
		unk_0x573691DB812DC8AA(&Global_2283, 13);
	}
	else
	{
		unk_0xA5F70A8B83BDFA49(&Global_2283, 13);
	}
}

int func_127(char* sParam0)
{
	if (!unk_0x0AAC2160036975D9(uParam0))
	{
		unk_0x507887ECD0989471(uParam0);
		while (!unk_0xF93DA38375EB3977(sParam0))
		{
			unk_0x507887ECD0989471(sParam0);
			unk_0x4EDE34FBADD967A6(0);
		}
		return 1;
	}
	func_295("Attempting to launch invalid script file [TERMINATING]");
	return 0;
}

void func_128()
{
	Global_14578 = 0;
	func_129();
}

void func_129()
{
	unk_0xCAAFCFEB9BD734FB();
	Global_16723 = 0;
	if ((unk_0xEA9C2A206A86B744() || Global_14413.f_1 == 9) || Global_14412 == 1)
	{
		unk_0xC9AB825AA4821BDA(0);
		Global_15712 = 6;
		Global_14413.f_1 = 3;
		return;
	}
	if (unk_0x1066B6347C40B301())
	{
		unk_0xC9AB825AA4821BDA(1);
		Global_15712 = 6;
		return;
	}
}

int func_130()
{
	if (Global_15712 != 0 || unk_0x1066B6347C40B301())
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
		func_295("IS_RC_FINE_AND_IN_RANGE(): The game is running Multiplayer [TERMINATING]");
		return 0;
	}
	func_95(*uParam0, &Var0);
	if ((func_173(*uParam0) || func_171(*uParam0)) || Global_69562 == 1)
	{
		return 1;
	}
	if (!unk_0xD8AD97AB31334199())
	{
		func_295("IS_RC_FINE_AND_IN_RANGE(): Player out of range [TERMINATING]");
		return 0;
	}
	if (func_163(*uParam0))
	{
		if (*uParam0 == 19)
		{
			func_162(uParam0->f_28[0]);
		}
		func_295("IS_RC_FINE_AND_IN_RANGE(): Script denied by RC Controller [TERMINATING]");
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
			if (!unk_0xA427F05DB896EEBE(uParam0->f_35[0], Var0.f_6, 8f, 8f, 8f, 0, 1, 0))
			{
				return 0;
			}
		}
	}
	if (*uParam0 == 10)
	{
		if (unk_0x40E29AA1A84292C9(-1, uParam0->f_17[0 /*3*/], 8f))
		{
			func_295("IS_RC_FINE_AND_IN_RANGE(): Explosion near mission trigger [TERMINATING]");
			return 0;
		}
	}
	if (Var0.f_4 != 17)
	{
		if (!unk_0xB56FEBC510E7E9DE(Var0.f_26, func_207()))
		{
			func_295("IS_RC_FINE_AND_IN_RANGE(): No longer a valid player character to launch mission");
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
					if (unk_0x5263DE3D9A17A86F(*uParam1))
					{
						unk_0xB28207B96952D994(iParam0);
						if (iParam2 != 21)
						{
							if (func_69(uParam1->f_5, 0f, 0f, 0f, 0))
							{
								unk_0x642DDF74A8A2B3BB(iParam0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
							}
							else
							{
								unk_0x2A6B9F9E71C479CF(&uVar0);
								if (func_134(uParam1))
								{
									unk_0x5218A76678A43A34(0, *uParam1, uParam1->f_2, uParam1->f_5, uParam1->f_8, 1000f, -8f, -1, 262152, 0, 2, 0);
								}
								else
								{
									unk_0x5218A76678A43A34(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 1000f, -8f, -1, 262152, 0, 2, 0);
								}
								unk_0x5218A76678A43A34(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 0);
								unk_0x44642CB08FA1637E(uVar0);
								unk_0xB8A8FA4B28E9F423(iParam0, uVar0);
								unk_0xAAD288E877AC833D(&uVar0);
							}
						}
						else
						{
							unk_0x5218A76678A43A34(iParam0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 3);
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
				if (!func_134(uParam1) || !unk_0x5EE0E9E5B7A50C2A(iParam0, *uParam1, uParam1->f_2, 3))
				{
					if (func_133(iParam2) && !unk_0x6867AF84AF12BEFC(iParam0, unk_0x77F050A399DB77ED(), 25f))
					{
						unk_0x9A42ADE14351A508(iParam0, unk_0x77F050A399DB77ED(), 0);
						uParam1->f_3 = 5;
					}
					else if ((func_134(uParam1) && uParam1->f_4 == 0) && unk_0xA2490B3CE6382FBB(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), unk_0xAF99169F0F5AE41D(iParam0, 1), 1) < 20f)
					{
						uParam1->f_3 = 3;
					}
				}
				break;
			
			case 3:
				unk_0x2A6B9F9E71C479CF(&uVar1);
				if (func_69(uParam1->f_5, 0f, 0f, 0f, 0))
				{
					unk_0x642DDF74A8A2B3BB(0, *uParam1, uParam1->f_2, 4f, -4f, -1, 262144, 0, 0, 0, 0);
					unk_0x642DDF74A8A2B3BB(0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
				}
				else
				{
					unk_0x5218A76678A43A34(0, *uParam1, uParam1->f_2, uParam1->f_5, uParam1->f_8, 4f, -4f, -1, 262152, 0, 2, 0);
					unk_0x5218A76678A43A34(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 0);
				}
				unk_0x44642CB08FA1637E(uVar1);
				unk_0xB8A8FA4B28E9F423(iParam0, uVar1);
				unk_0xAAD288E877AC833D(&uVar1);
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
				if (!func_133(iParam2) || unk_0x6867AF84AF12BEFC(iParam0, unk_0x77F050A399DB77ED(), 10f))
				{
					if (func_69(uParam1->f_5, 0f, 0f, 0f, 0))
					{
						unk_0x642DDF74A8A2B3BB(iParam0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
					}
					else
					{
						unk_0x5218A76678A43A34(iParam0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 0);
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
	if (unk_0x0AAC2160036975D9(uParam0->f_2))
	{
		return 0;
	}
	return 1;
}

int func_135(var uParam0)
{
	if (unk_0x0AAC2160036975D9(*uParam0) || unk_0x0AAC2160036975D9(uParam0->f_1))
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
	if (func_112(unk_0x77F050A399DB77ED()))
	{
		iVar0 = 0;
		while (iVar0 <= (uParam0->f_28 - 1))
		{
			if (func_111(uParam0->f_28[iVar0]))
			{
				if (!unk_0xB42592B9FFEB5EDE(uParam0->f_28[iVar0], 0))
				{
					unk_0x5817B24FA3E70BC6(uParam0->f_28[iVar0], 1, 0);
					unk_0xB92C428B448B51A4(uParam0->f_28[0], 0);
				}
				unk_0x112CD899A3BEE719(uParam0->f_28[iVar0], 1);
				if (*uParam0 == 34)
				{
					if (func_112(uParam0->f_41[0]))
					{
						unk_0x5817B24FA3E70BC6(uParam0->f_41[0], 1, 0);
						unk_0xB92C428B448B51A4(uParam0->f_41[0], 0);
					}
				}
				switch (*uParam0)
				{
					case 19:
						func_162(uParam0->f_28[iVar0]);
						break;
					
					case 8:
						unk_0x6E2E777C1AD81C36("rcmcollect_paperleadinout@");
						while (!unk_0x5263DE3D9A17A86F("rcmcollect_paperleadinout@"))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						unk_0x2A6B9F9E71C479CF(&uVar1);
						unk_0x642DDF74A8A2B3BB(0, "rcmcollect_paperleadinout@", "meditate_getup", 8f, -8f, -1, 8, 0, 0, 0, 0);
						unk_0x23E5F4496336DE4E(0, unk_0x77F050A399DB77ED(), 10000f, -1, 0, 0);
						unk_0x44642CB08FA1637E(uVar1);
						unk_0xB8A8FA4B28E9F423(uParam0->f_28[iVar0], uVar1);
						unk_0xAAD288E877AC833D(&uVar1);
						break;
					
					case 0:
					case 1:
						unk_0x6E2E777C1AD81C36("rcmabigail");
						while (!unk_0x5263DE3D9A17A86F("rcmabigail"))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						unk_0x2A6B9F9E71C479CF(&uVar1);
						unk_0x642DDF74A8A2B3BB(0, "rcmabigail", "breakout_base", 8f, -8f, -1, 8, 0, 0, 0, 0);
						unk_0x23E5F4496336DE4E(0, unk_0x77F050A399DB77ED(), 10000f, -1, 0, 0);
						unk_0x44642CB08FA1637E(uVar1);
						unk_0xB8A8FA4B28E9F423(uParam0->f_28[iVar0], uVar1);
						unk_0xAAD288E877AC833D(&uVar1);
						break;
					
					case 32:
						unk_0x6E2E777C1AD81C36("rcmminute1");
						while (!unk_0x5263DE3D9A17A86F("rcmminute1"))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						unk_0x2A6B9F9E71C479CF(&uVar1);
						if (iVar0 == 0)
						{
							unk_0x642DDF74A8A2B3BB(0, "rcmminute1", "base_to_idle_joe", 8f, -8f, -1, 32776, 0, 0, 0, 0);
						}
						else
						{
							unk_0x642DDF74A8A2B3BB(0, "rcmminute1", "base_to_idle_josef", 8f, -8f, -1, 32776, 0, 0, 0, 0);
						}
						unk_0x23E5F4496336DE4E(0, unk_0x77F050A399DB77ED(), 10000f, -1, 0, 0);
						unk_0x44642CB08FA1637E(uVar1);
						unk_0xB8A8FA4B28E9F423(uParam0->f_28[iVar0], uVar1);
						unk_0xAAD288E877AC833D(&uVar1);
						break;
					
					case 24:
						unk_0x6E2E777C1AD81C36("special_ped@hao@base");
						while (!unk_0x5263DE3D9A17A86F("special_ped@hao@base"))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						unk_0x2A6B9F9E71C479CF(&uVar1);
						unk_0x642DDF74A8A2B3BB(0, "special_ped@hao@base", "hao_exit", 8f, -8f, -1, 520, 0, 0, 0, 0);
						unk_0x23E5F4496336DE4E(0, unk_0x77F050A399DB77ED(), 10000f, -1, 0, 0);
						unk_0x44642CB08FA1637E(uVar1);
						unk_0xB8A8FA4B28E9F423(uParam0->f_28[iVar0], uVar1);
						unk_0xAAD288E877AC833D(&uVar1);
						break;
					
					default:
						unk_0x5A499E160A1878DC(uParam0->f_28[iVar0]);
						unk_0x23E5F4496336DE4E(uParam0->f_28[iVar0], unk_0x77F050A399DB77ED(), 10000f, -1, 0, 0);
						break;
					}
			}
			iVar0++;
		}
	}
}

void func_137(var uParam0)
{
	if (unk_0x1F2158D615BC4B25(*uParam0))
	{
		if (unk_0x85C2713D803F1A4A(*uParam0))
		{
			unk_0xE8EBCCA6A3BE542B(*uParam0, 1, 1);
		}
		unk_0x7D779528B7C61C13(uParam0);
	}
}

void func_138(var uParam0)
{
	int iVar0;
	
	if (func_112(unk_0x77F050A399DB77ED()))
	{
		iVar0 = 0;
		while (iVar0 <= (uParam0->f_28 - 1))
		{
			if (func_111(uParam0->f_28[iVar0]))
			{
				unk_0xB424F90D6E96BCF8(uParam0->f_28[iVar0], 1, 0);
				unk_0x9526D9575C237F2F(uParam0->f_28[iVar0], 0);
				unk_0x112CD899A3BEE719(uParam0->f_28[iVar0], 1);
				unk_0xFBE25F0677076CF9(uParam0->f_28[iVar0], unk_0x77F050A399DB77ED(), 0, 16);
				unk_0xA29D53AF339F4CD0(&(uParam0->f_28[iVar0]));
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
	if (func_111(unk_0x77F050A399DB77ED()))
	{
		iVar0 = 0;
		while (iVar0 <= iVar1)
		{
			if (unk_0x1F2158D615BC4B25(uParam0->f_35[iVar0]))
			{
				if (unk_0x0B6E83A9A7ED3EBA(uParam0->f_35[iVar0]))
				{
					func_295("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is dead [TERMINATING]");
					return 0;
				}
				if (!unk_0x968EA16107097324(uParam0->f_35[iVar0], 0))
				{
					func_295("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is not driveable [TERMINATING]");
					return 0;
				}
				if (unk_0xCC580427ED36D7F8(uParam0->f_35[iVar0], unk_0x77F050A399DB77ED(), 0))
				{
					func_295("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has been damaged by player [TERMINATING]");
					return 0;
				}
				if (unk_0x070BBD7287E8E744(uParam0->f_35[iVar0]) < 850)
				{
					func_295("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle health is less than 850 [TERMINATING]");
					return 0;
				}
				if (bParam2)
				{
					if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
					{
						if (unk_0x32F9EB04315127B4(uParam0->f_35[iVar0], unk_0x77F050A399DB77ED()) && unk_0x2AA05370067DC5AC(unk_0x77F050A399DB77ED()) > 5f)
						{
							func_295("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has collided with the player vehicle at speed [TERMINATING]");
							return 0;
						}
						uVar2 = unk_0xD8D1111EA0CFD1DB();
						if (func_141(uVar2))
						{
							if (unk_0xDF1398076E26B0E4(uVar2) == joaat("towtruck") || unk_0xDF1398076E26B0E4(iVar2) == joaat("towtruck2"))
							{
								if (func_141(uParam0->f_35[iVar0]))
								{
									if (unk_0xFF8B60AD533C7DBD(iVar2, uParam0->f_35[iVar0]))
									{
										func_295("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is being towed by player [TERMINATING]");
										return 0;
									}
								}
							}
						}
					}
					else
					{
						iVar3 = unk_0xD8D1111EA0CFD1DB();
						if (func_141(iVar3))
						{
							if (unk_0x32F9EB04315127B4(uParam0->f_35[iVar0], iVar3) && unk_0x2AA05370067DC5AC(iVar3) > 6f)
							{
								func_295("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has collided with the player's last known vehicle at speed (player bailed out?) [TERMINATING]");
								return 0;
							}
						}
						if (*uParam0 == 16)
						{
							if (func_140(unk_0x77F050A399DB77ED(), uParam0->f_35[iVar0]))
							{
								func_295("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Player attempting to jack Epsilon vehicle [TERMINATING]");
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
	
	if (!unk_0x1E80C02AC16B6622(iParam0))
	{
		if (unk_0x968EA16107097324(iParam1, 0))
		{
			iVar0 = unk_0x08CA1B7A7938D598(iParam0);
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
		if (unk_0x968EA16107097324(uParam0, 0))
		{
			if (!unk_0x01CB02EE3F3F9481(iParam0))
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
	if (func_111(unk_0x77F050A399DB77ED()))
	{
		iVar0 = 0;
		while (iVar0 <= iVar1)
		{
			if (unk_0x1F2158D615BC4B25(uParam0->f_28[iVar0]))
			{
				if (!unk_0x1E80C02AC16B6622(uParam0->f_28[iVar0]))
				{
					if (unk_0xB2D1758C032223EA(unk_0x77F050A399DB77ED()))
					{
						if (unk_0x32F9EB04315127B4(unk_0x77F050A399DB77ED(), uParam0->f_28[iVar0]))
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
							func_295("STEP_5_COMMON_RCfineAndInRange - Random character is being pushed by car [TERMINATING]");
							return 0;
						}
					}
					if ((unk_0x5A12CB727B35559D(uParam0->f_28[iVar0]) || unk_0x79AF38B040695E18(uParam0->f_28[iVar0])) || unk_0x7073FA9C2D0A60C3(uParam0->f_28[iVar0]))
					{
						if (iParam2 == 0)
						{
							func_136(uParam0);
						}
						else
						{
							func_138(uParam0);
						}
						func_295("STEP_5_COMMON_RCfineAndInRange - Random character has been damaged by something [TERMINATING]");
						return 0;
					}
					if (unk_0xCD7683F575A67B31(uParam0->f_28[iVar0]))
					{
						if (unk_0x0C8E94332AE582B1(uParam0->f_28[iVar0], unk_0x77F050A399DB77ED(), 3f, 3f, 3f, 0, 1, 0))
						{
							if (iParam2 == 0)
							{
								func_136(uParam0);
							}
							else
							{
								func_138(uParam0);
							}
							func_295("STEP_5_COMMON_RCfineAndInRange - Random character is in ragdoll [TERMINATING]");
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
								func_295("STEP_5_COMMON_RCfineAndInRange - Player is shooting near the Random Character [TERMINATING]");
								return 0;
							}
						}
						if (unk_0x40E29AA1A84292C9(-1, unk_0xAF99169F0F5AE41D(uParam0->f_28[iVar0], 1), 15f))
						{
							if (iParam2 == 0)
							{
								func_136(uParam0);
							}
							else
							{
								func_138(uParam0);
							}
							func_295("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
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
							func_295("STEP_5_COMMON_RCfineAndInRange - Random character is in combat [TERMINATING]");
							return 0;
						}
					}
					if (!func_143(*uParam0))
					{
						if (unk_0x40E29AA1A84292C9(-1, unk_0xAF99169F0F5AE41D(uParam0->f_28[iVar0], 1), 5f))
						{
							if (iParam2 == 0)
							{
								func_136(uParam0);
							}
							else
							{
								func_138(uParam0);
							}
							func_295("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
							return 0;
						}
						if (unk_0xAEE8018B8C539989(unk_0x8ACD527A7E574590()) > 0)
						{
							if (iParam2 == 0)
							{
								func_136(uParam0);
							}
							else
							{
								func_138(uParam0);
							}
							func_295("STEP_5_COMMON_RCfineAndInRange - Player has a wanted level [TERMINATING]");
							return 0;
						}
					}
				}
				else
				{
					func_295("STEP_5_COMMON_RCfineAndInRange - Random character injured / dead [TERMINATING]");
					if (*uParam0 == 34)
					{
						if (func_112(uParam0->f_41[0]))
						{
							unk_0x5817B24FA3E70BC6(uParam0->f_41[0], 1, 0);
							unk_0xB92C428B448B51A4(uParam0->f_41[0], 0);
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
	
	if (func_112(unk_0x77F050A399DB77ED()) && func_112(iParam0))
	{
		if (func_155(iParam0) || unk_0xE1E40FB2D6822ACE(unk_0x8ACD527A7E574590(), iParam0))
		{
			if (unk_0x521CC5B1D76CAD7D(unk_0x77F050A399DB77ED(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0x0C8E94332AE582B1(unk_0x77F050A399DB77ED(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
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
	return func_146(iParam0, unk_0x77F050A399DB77ED(), fParam1, 1, 250, 7);
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
	Var1 = { unk_0x5C9D7C3DA25581D1(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_147(&(Local_37[iVar4 /*4*/]), Var1, iParam1, &(Local_37[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0x3EAC9995EC220C5A() - Local_37[iVar4 /*4*/].f_3) < iParam4);
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
		*uParam0 = unk_0x317C1E3F94E69BE1(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam6, 7);
		return 0;
	}
	iVar8 = unk_0x8DF1E9C686542134(*uParam0, &uVar0, &Var1, &uVar4, &iVar7);
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
	if (unk_0x94195F7CA642F937(iVar7))
	{
		func_112(iVar7);
		if (unk_0xCBABEE38E5DAB356(iVar7) == iParam4)
		{
			if (bLocal_78)
			{
				unk_0x0A4EB3FDD9845EF8(Param1, unk_0xAF99169F0F5AE41D(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam5 = unk_0x3EAC9995EC220C5A();
			return 1;
		}
		return 0;
	}
	if (unk_0xDD21A3DB256904E7(iVar7))
	{
		func_112(iVar7);
		if (unk_0xB42592B9FFEB5EDE(iParam4, 0))
		{
			if (unk_0x2EF671D3645D271D(iVar7) == unk_0xF8D66A34AF0C53A5(iParam4, 0))
			{
				if (bLocal_78)
				{
					unk_0x0A4EB3FDD9845EF8(Param1, unk_0xAF99169F0F5AE41D(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam5 = unk_0x3EAC9995EC220C5A();
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
		iVar0 = unk_0xA3746E7F17F47DC2(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return unk_0xAF99169F0F5AE41D(iParam0, 1);
	}
	else if (iParam1 == 1)
	{
		return unk_0x5C9D7C3DA25581D1(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return unk_0x5C9D7C3DA25581D1(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return unk_0x5C9D7C3DA25581D1(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return unk_0x5C9D7C3DA25581D1(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return unk_0x5C9D7C3DA25581D1(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return unk_0x5C9D7C3DA25581D1(iParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0xAF99169F0F5AE41D(iParam0, 1);
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
	
	Var0 = { func_152(unk_0xAF99169F0F5AE41D(iParam1, 1) - unk_0xAF99169F0F5AE41D(iParam0, 1)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var3 = { unk_0x0417D4198AF0722D(iParam0) };
	}
	else
	{
		Var3 = { func_152(unk_0x5C9D7C3DA25581D1(iParam0, 31086, 0f, 5f, 0f) - unk_0x5C9D7C3DA25581D1(iParam0, 31086, 0f, 0f, 0f)) };
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
	if (unk_0x00FAD442A5FFA1A8(unk_0x8ACD527A7E574590(), uParam0) && unk_0x521CC5B1D76CAD7D(unk_0x77F050A399DB77ED(), 6))
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
	if (func_112(unk_0x77F050A399DB77ED()) && func_112(uParam0))
	{
		unk_0x587BE7B13B3A93BF(unk_0x77F050A399DB77ED(), &iVar2, 1);
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
			if (unk_0xE8A6EC34A210142F(unk_0x77F050A399DB77ED()))
			{
				if (unk_0x102639E2874F3AA1(unk_0x77F050A399DB77ED()))
				{
					if (unk_0x5E9F3856F26E26EC(unk_0xAF99169F0F5AE41D(uParam0, 1), fVar0, 1))
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
	
	Var0 = { unk_0xAF99169F0F5AE41D(uParam0, 1) };
	Var3 = { Var0 };
	Var0.f_0 = (Var0.f_0 - fParam1);
	Var0.f_1 = (Var0.f_1 - fParam1);
	Var0.f_2 = (Var0.f_2 - fParam1);
	Var3.f_0 = (Var3.f_0 + fParam1);
	Var3.f_1 = (Var3.f_1 + fParam1);
	Var3.f_2 = (Var3.f_2 + fParam1);
	if (bParam2)
	{
		if (((unk_0xE5B5E2C91309482F(unk_0xAF99169F0F5AE41D(iParam0, 1), joaat("weapon_grenade"), fParam1, 1) || unk_0xE5B5E2C91309482F(unk_0xAF99169F0F5AE41D(iParam0, 1), joaat("weapon_molotov"), fParam1, 1)) || unk_0xE5B5E2C91309482F(unk_0xAF99169F0F5AE41D(iParam0, 1), joaat("weapon_smokegrenade"), fParam1, 1)) || unk_0xE5B5E2C91309482F(unk_0xAF99169F0F5AE41D(iParam0, 1), joaat("weapon_stickybomb"), 5f, 1))
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
		if (unk_0x1B2F50A8C0266050(Var0, Var3, 1))
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
	
	if ((((unk_0xF938537BC2E75CEA(uParam0, joaat("weapon_grenade"), fParam1, &Var1, &uVar0, 0) || unk_0xF938537BC2E75CEA(uParam0, joaat("weapon_smokegrenade"), fParam1, &Var1, &uVar0, 0)) || unk_0xF938537BC2E75CEA(uParam0, joaat("weapon_bzgas"), fParam1, &Var1, &uVar0, 0)) || unk_0xF938537BC2E75CEA(uParam0, joaat("weapon_stickybomb"), fParam1, &Var1, &uVar0, 0)) || unk_0xF938537BC2E75CEA(uParam0, joaat("weapon_molotov"), fParam1, &Var1, &uVar0, 0))
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
	
	Var0 = { func_152(Param1 - unk_0xAF99169F0F5AE41D(uParam0, 1)) };
	if (fParam4 < 0.1f || fParam4 > 360f)
	{
		return 1;
	}
	if (iParam5 == 0)
	{
		Var3 = { unk_0x0417D4198AF0722D(iParam0) };
	}
	else
	{
		Var3 = { func_152(unk_0x5C9D7C3DA25581D1(iParam0, 31086, 0f, 5f, 0f) - unk_0x5C9D7C3DA25581D1(iParam0, 31086, 0f, 0f, 0f)) };
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
		if (unk_0x102639E2874F3AA1(unk_0x77F050A399DB77ED()))
		{
			if (unk_0x0C8E94332AE582B1(unk_0x77F050A399DB77ED(), uParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (unk_0x5E9F3856F26E26EC(unk_0xAF99169F0F5AE41D(iParam0, 1), fParam2, 1))
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
	
	if (func_112(unk_0x77F050A399DB77ED()) && func_112(uParam0))
	{
		unk_0x6E2E777C1AD81C36("rcmextreme3");
		while (!unk_0x5263DE3D9A17A86F("rcmextreme3"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x2A6B9F9E71C479CF(&uVar0);
		unk_0x642DDF74A8A2B3BB(0, "rcmextreme3", "jump_fall", 1000f, -8f, -1, 8, 0, 0, 0, 0);
		unk_0xCEAD0CD7E9A15284(0, 1);
		unk_0xA21D0AFD0C9ACDF4(0, 64.6f, -737.8f, 44.2f);
		unk_0x23E5F4496336DE4E(0, unk_0x77F050A399DB77ED(), 10000f, -1, 0, 0);
		unk_0x44642CB08FA1637E(uVar0);
		unk_0xB8A8FA4B28E9F423(uParam0, uVar0);
		unk_0xAAD288E877AC833D(&uVar0);
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
		if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
		{
			if (unk_0xAEE8018B8C539989(unk_0x8ACD527A7E574590()) != 0)
			{
				return 1;
			}
		}
	}
	if (!unk_0xB56FEBC510E7E9DE(Global_99250.f_17192[iParam0 /*6*/], 2))
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
	if (unk_0x2C063B4379F0C076())
	{
		if (unk_0x93920F49CB9AD85E() == 1f)
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
		return unk_0xB56FEBC510E7E9DE(Global_82227[Global_88361 /*34*/].f_15, 20);
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
	return func_170(unk_0x664B47C58CE8A0A4(), 0);
}

int func_170(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar33;
	int iVar34;
	
	iVar33 = unk_0x39BD4614CF899227(uParam0);
	iVar34 = 0;
	iVar34 = 0;
	while (iVar34 < 63)
	{
		iVar0 = iVar34;
		func_95(iVar0, &uVar1);
		if (unk_0x39BD4614CF899227(uVar1) == iVar33)
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
	if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
	{
		if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
		{
			if (func_176(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0), 10.5f, 1, 1056964608, 0, 1, 0))
			{
				if (unk_0x49C650267EDFEBC6(unk_0x77F050A399DB77ED(), -828834893) != 1)
				{
					unk_0x743E219F0C060EE5(unk_0x77F050A399DB77ED(), 0, 0);
				}
			}
		}
	}
}

int func_176(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x6E20845D23D3DFD4(0, 71, 1);
	unk_0x6E20845D23D3DFD4(0, 72, 1);
	unk_0x6E20845D23D3DFD4(0, 76, 1);
	unk_0x6E20845D23D3DFD4(0, 73, 1);
	unk_0x6E20845D23D3DFD4(0, 59, 1);
	unk_0x6E20845D23D3DFD4(0, 60, 1);
	if (bParam5)
	{
		unk_0x6E20845D23D3DFD4(0, 75, 1);
	}
	unk_0x6E20845D23D3DFD4(0, 80, 1);
	if (!bParam6)
	{
		unk_0x6E20845D23D3DFD4(0, 69, 1);
		unk_0x6E20845D23D3DFD4(0, 70, 1);
		unk_0x6E20845D23D3DFD4(0, 68, 1);
	}
	unk_0x6E20845D23D3DFD4(0, 74, 1);
	unk_0x6E20845D23D3DFD4(0, 86, 1);
	unk_0x6E20845D23D3DFD4(0, 81, 1);
	unk_0x6E20845D23D3DFD4(0, 82, 1);
	unk_0x6E20845D23D3DFD4(0, 138, 1);
	unk_0x6E20845D23D3DFD4(0, 136, 1);
	unk_0x6E20845D23D3DFD4(0, 114, 1);
	unk_0x6E20845D23D3DFD4(0, 107, 1);
	unk_0x6E20845D23D3DFD4(0, 110, 1);
	unk_0x6E20845D23D3DFD4(0, 89, 1);
	unk_0x6E20845D23D3DFD4(0, 89, 1);
	unk_0x6E20845D23D3DFD4(0, 87, 1);
	unk_0x6E20845D23D3DFD4(0, 88, 1);
	unk_0x6E20845D23D3DFD4(0, 113, 1);
	unk_0x6E20845D23D3DFD4(0, 115, 1);
	unk_0x6E20845D23D3DFD4(0, 116, 1);
	unk_0x6E20845D23D3DFD4(0, 117, 1);
	unk_0x6E20845D23D3DFD4(0, 118, 1);
	unk_0x6E20845D23D3DFD4(0, 119, 1);
	unk_0x6E20845D23D3DFD4(0, 131, 1);
	unk_0x6E20845D23D3DFD4(0, 132, 1);
	unk_0x6E20845D23D3DFD4(0, 123, 1);
	unk_0x6E20845D23D3DFD4(0, 126, 1);
	unk_0x6E20845D23D3DFD4(0, 129, 1);
	unk_0x6E20845D23D3DFD4(0, 130, 1);
	unk_0x6E20845D23D3DFD4(0, 133, 1);
	unk_0x6E20845D23D3DFD4(0, 134, 1);
	unk_0xC6CCD4555A546BC0();
	if ((unk_0x3EAC9995EC220C5A() - Global_29) > 500)
	{
		unk_0x29666BB73419DB0E(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x3EAC9995EC220C5A();
	if (!unk_0x0B6E83A9A7ED3EBA(iParam0))
	{
		if (unk_0x092B928D30C0282D(unk_0x2AA05370067DC5AC(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_177()
{
	unk_0x6E20845D23D3DFD4(0, 21, 1);
	unk_0x6E20845D23D3DFD4(0, 37, 1);
	unk_0x6E20845D23D3DFD4(0, 25, 1);
	unk_0x6E20845D23D3DFD4(0, 141, 1);
	unk_0x6E20845D23D3DFD4(0, 140, 1);
	unk_0x6E20845D23D3DFD4(0, 24, 1);
	unk_0x6E20845D23D3DFD4(0, 257, 1);
	unk_0x6E20845D23D3DFD4(0, 22, 1);
	unk_0x6E20845D23D3DFD4(0, 23, 1);
}

void func_178()
{
	if (!Global_14413.f_1 == 1)
	{
		if (func_181(0))
		{
			func_179(0);
		}
		unk_0x573691DB812DC8AA(&Global_2284, 2);
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
		unk_0x573691DB812DC8AA(&Global_2284, 16);
	}
	if (unk_0xEA9C2A206A86B744())
	{
		unk_0xC9AB825AA4821BDA(0);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		unk_0x573691DB812DC8AA(&Global_2283, 30);
	}
	else
	{
		unk_0xA5F70A8B83BDFA49(&Global_2283, 30);
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
				unk_0x3E337B53281459DC(&Global_14350);
			}
			Global_14341 = { Global_14359[Global_14358 /*3*/] };
			unk_0x4317F0DBC6457B31(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = { Global_14366[Global_14358 /*3*/] };
		if (bParam1)
		{
			unk_0x4317F0DBC6457B31(Global_14350);
		}
		else
		{
			unk_0x4317F0DBC6457B31(Global_14341);
		}
	}
}

int func_181(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xB56FEBC510E7E9DE(Global_2283, 14))
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
	if (unk_0xB1A77D5C890711F9(joaat("cellphone_flashhand")) > 0)
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
	iVar0 = func_185(&(Global_98337[iParam0 /*10*/].f_9), 1, 4, 0, 0);
	if (!iVar0 == 1)
	{
		return 0;
	}
	func_184(iParam0);
	return 1;
}

void func_184(int iParam0)
{
	Global_98337[iParam0 /*10*/].f_4 = 1;
	Global_98337[iParam0 /*10*/].f_5 = 0;
	Global_98337[iParam0 /*10*/].f_6 = 0;
	Global_98337[iParam0 /*10*/] = 0;
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
		unk_0xB0B3F015E2C68AA2(unk_0x7F3E348C0892D8D2(), 0);
		Global_17118.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x6F0D8BCEF1D3C17F(8);
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
		func_295("STEP_3_COMMON_CanRCLaunch - Script denied. Multiplayer is running [TERMINATING]");
		return 0;
	}
	if (!Global_99250.f_7703 && !func_197(1))
	{
		func_295("STEP_3_COMMON_CanRCLaunch - Script denied, game flow is not active");
		return 0;
	}
	if (!func_190(iParam0))
	{
		Global_98337[iParam0 /*10*/].f_1 = 1;
		func_295("STEP_3_COMMON_CanRCLaunch - Script denied by RC Controller [TERMINATING]");
		return 0;
	}
	if (Global_91106.f_11 == 6)
	{
		if (Global_91106 < 9)
		{
			func_95(iParam0, &sVar0);
			if (unk_0x35D1CAD6ADAB6491(&(Global_91106.f_3), sVar0))
			{
				func_295("STEP_3_COMMON_CanRCLaunch - Script denied as a replay for this RC is being configured. [TERMINATING]");
				return 0;
			}
		}
	}
	if (unk_0xB1A77D5C890711F9(joaat("candidate_controller")) == 0)
	{
		Global_98337[iParam0 /*10*/].f_1 = 1;
		func_295("STEP_3_COMMON_CanRCLaunch - Script denied as candidate_controller is not running. [TERMINATING]");
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
			Global_98337[iParam0 /*10*/].f_3 = 0;
		}
	}
	if (Global_98337[iParam0 /*10*/].f_3 == 1)
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
	else if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
	{
		func_192(iParam0, &sVar1);
		iVar9 = unk_0x9794B606B17FAF25(Global_86477[iParam0 /*10*/].f_3, &sVar1);
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
			if (unk_0x4DEBC98223AC90EF("TrevorsTrailer"))
			{
				StringCopy(sParam1, "v_trailer", 32);
			}
			else if (unk_0x4DEBC98223AC90EF("TrevorsTrailerTidy"))
			{
				StringCopy(sParam1, "V_TrailerTIDY", 32);
			}
			else if (unk_0x4DEBC98223AC90EF("TrevorsTrailerTrash"))
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
	return !unk_0x35D1CAD6ADAB6491(sParam1, "");
}

bool func_193(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return unk_0xB56FEBC510E7E9DE(Global_99250.f_17192[iParam0 /*6*/], 3);
}

bool func_194(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return unk_0xB56FEBC510E7E9DE(Global_99250.f_17192[iParam0 /*6*/], 2);
}

bool func_195(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return unk_0xB56FEBC510E7E9DE(Global_99250.f_17192[iParam0 /*6*/], 0);
}

int func_196(int iParam0)
{
	if (func_164(iParam0))
	{
		return 0;
	}
	else if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
	{
		if (unk_0xAEE8018B8C539989(unk_0x8ACD527A7E574590()) != 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_197(bool bParam0)
{
	if (!bParam0 && unk_0xB1A77D5C890711F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xB56FEBC510E7E9DE(Global_69565, 0);
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
	if (!func_205(unk_0x77F050A399DB77ED()))
	{
		return bVar0;
	}
	if (Global_98337[56 /*10*/].f_3)
	{
		return bVar0;
	}
	if (unk_0x9EE41011CAC5F6BD(unk_0x8ACD527A7E574590(), 0))
	{
		if (iLocal_291)
		{
			unk_0x4ACCE973F9C3CA3B(1);
			func_204("RAMP_HELP_CRIM", -1);
			iLocal_291 = 0;
		}
		bVar0 = true;
	}
	else if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
	{
		if (iLocal_290)
		{
			unk_0x4ACCE973F9C3CA3B(1);
			func_204("RAMP_HELP_FOOT", -1);
			iLocal_290 = 0;
		}
		bVar0 = true;
	}
	else if ((func_203(0) || unk_0xA153A26DF49EBCC0()) || func_202())
	{
		if (func_2("RAMP_HELP_TRIG"))
		{
			if (func_203(0))
			{
			}
			else if (unk_0xA153A26DF49EBCC0())
			{
			}
			else if (func_202())
			{
			}
			unk_0x4ACCE973F9C3CA3B(1);
			iLocal_292 = 0;
		}
		bVar0 = true;
	}
	else if (func_279(108))
	{
		if (!iLocal_292)
		{
			if (!func_2("RAMP_HELP_TRIG"))
			{
				unk_0x4ACCE973F9C3CA3B(1);
				func_201("RAMP_HELP_TRIG");
			}
			iLocal_292 = 1;
		}
		bVar0 = !unk_0xE721293454745300(2, 51);
	}
	return bVar0;
}

void func_201(char* sParam0)
{
	unk_0xE6F728F2901F2AEE(sParam0);
	unk_0xF34A1D3B3034CC8A(0, 1, 1, -1);
}

int func_202()
{
	if (!unk_0x4C779B19E6DDCDA2())
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
	unk_0xE6F728F2901F2AEE(sParam0);
	unk_0xF34A1D3B3034CC8A(0, 0, 1, iParam1);
}

bool func_205(int iParam0)
{
	if (!unk_0x1F2158D615BC4B25(iParam0))
	{
		return 0;
	}
	return !unk_0x0B6E83A9A7ED3EBA(iParam0);
}

int func_206(float fParam0)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	if (!func_205(unk_0x77F050A399DB77ED()))
	{
		return -1;
	}
	Var4 = { unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Var1 = { Global_25424[(iLocal_287 + iVar0) /*23*/][0 /*3*/] };
		if (unk_0xA2490B3CE6382FBB(Var4, Var1, 1) <= fParam0 && unk_0x092B928D30C0282D((Var4.f_2 - Var1.f_2)) < 1.5f)
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
	return Global_99250.f_1754.f_539.f_3549;
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
	if (!func_276(&iVar1, uParam0, Param1, 5f))
	{
		func_295(" Didn't know which RC To Launch");
		func_280(uParam0, 1);
	}
	if (!func_189(*uParam0))
	{
		func_295(" RC Can't Launch");
		func_280(uParam0, 1);
	}
	if (func_275(*uParam0))
	{
		while (true)
		{
			unk_0x4EDE34FBADD967A6(0);
			if (func_274(*uParam0))
			{
				func_280(uParam0, 1);
			}
		}
	}
	func_250(uParam0);
	unk_0x0BA5964C07973FE9(Param1, uParam0->f_15, 1, 0, 0, 0);
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (*uParam0 == 52 || *uParam0 == 53)
		{
			if (func_112(uParam0->f_28[0]))
			{
				if (unk_0x40E29AA1A84292C9(-1, unk_0xAF99169F0F5AE41D(uParam0->f_28[0], 1), 5.1f))
				{
					if (*uParam0 == 52)
					{
						iVar7 = 0;
						while (iVar7 < uParam0->f_41)
						{
							if (unk_0x1F2158D615BC4B25(uParam0->f_41[iVar7]))
							{
								if ((func_112(uParam0->f_28[0]) && unk_0xD8EEAAAE9301A49D(uParam0->f_41[iVar7], uParam0->f_28[0])) || (func_112(uParam0->f_28[1]) && unk_0xD8EEAAAE9301A49D(uParam0->f_41[iVar7], uParam0->f_28[1])))
								{
									unk_0x7D779528B7C61C13(&(uParam0->f_41[iVar7]));
								}
							}
							iVar7++;
						}
					}
					unk_0xC760816D9DBCB020(uParam0->f_28[0], 100, 500, 0, 1, 1, 0);
					unk_0x4D6D7C4E5971848E(uParam0->f_28[0], 1000, 1);
					if (func_112(uParam0->f_28[1]))
					{
						unk_0xC760816D9DBCB020(uParam0->f_28[1], 100, 500, 0, 1, 1, 0);
						unk_0x4D6D7C4E5971848E(uParam0->f_28[1], 1000, 1);
					}
					func_295("Sitting Rampage attacked with explosives, cleaning up");
					func_280(uParam0, 1);
				}
			}
			if (func_112(uParam0->f_28[1]))
			{
				if (unk_0x40E29AA1A84292C9(-1, unk_0xAF99169F0F5AE41D(uParam0->f_28[1], 1), 5.1f))
				{
					if (*uParam0 == 52)
					{
						iVar7 = 0;
						while (iVar7 < uParam0->f_41)
						{
							if (unk_0x1F2158D615BC4B25(uParam0->f_41[iVar7]))
							{
								if ((func_112(uParam0->f_28[0]) && unk_0xD8EEAAAE9301A49D(uParam0->f_41[iVar7], uParam0->f_28[0])) || (func_112(uParam0->f_28[1]) && unk_0xD8EEAAAE9301A49D(uParam0->f_41[iVar7], uParam0->f_28[1])))
								{
									unk_0x7D779528B7C61C13(&(uParam0->f_41[iVar7]));
								}
							}
							iVar7++;
						}
					}
					unk_0xC760816D9DBCB020(uParam0->f_28[1], 100, 500, 0, 1, 1, 0);
					unk_0x4D6D7C4E5971848E(uParam0->f_28[1], 1000, 1);
					if (func_112(uParam0->f_28[0]))
					{
						unk_0xC760816D9DBCB020(uParam0->f_28[0], 100, 500, 0, 1, 1, 0);
						unk_0x4D6D7C4E5971848E(uParam0->f_28[0], 1000, 1);
					}
					func_295("Sitting Rampage attacked with explosives, cleaning up");
					func_280(uParam0, 1);
				}
			}
		}
		if (func_249(uParam0))
		{
			func_248(uParam0);
			func_295(" RC combat happening in area, tell peds to flee");
			func_136(uParam0);
			func_280(uParam0, 1);
		}
		if (!func_131(uParam0, 1))
		{
			func_295(" RC Is Not Fine And In Range");
			func_280(uParam0, 1);
		}
		if (func_247(52))
		{
			if (unk_0x2559EB71C62A9E4B("Rampage1"))
			{
				func_295(" Turning Off Scenario Group For Rampage 1");
				unk_0x4EF69B4FDEEC776F("Rampage1", 0);
			}
		}
		func_246(*uParam0);
		func_238(&iLocal_288, &(uParam0->f_9), Param1);
		if (iVar0 == 0 && iLocal_288 != -1)
		{
			func_237(uParam0, &uLocal_293);
			if (unk_0x575DA8209967217A())
			{
				func_295(" Cutscene Loaded");
				iVar0 = 1;
			}
		}
		Local_297 = { unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1) };
		if ((!(*uParam0 == 52 && Local_297.f_2 > 34f) && !(*uParam0 == 53 && Local_297.f_2 > 71f)) && !(*uParam0 == 54 && Local_297.f_2 > 30f))
		{
			if (func_225(uParam0, 0))
			{
				if (*uParam0 == 53)
				{
					if (func_222(uParam0))
					{
						func_295(" Trigger Conditions Met");
						func_174();
						if (!func_5(uParam0))
						{
							func_295(" RC Can't Launch");
							func_280(uParam0, 1);
						}
						func_295(" RC Launcher Waiting To Terminate");
						if (func_3(uParam0))
						{
							func_295(" Ready To Terminate");
							func_280(uParam0, 0);
						}
					}
				}
				else if (func_221(uParam0))
				{
					func_295(" Trigger Conditions Met");
					func_174();
					if (!func_5(uParam0))
					{
						func_295(" RC Can't Launch");
						func_280(uParam0, 1);
					}
					func_295(" RC Launcher Waiting To Terminate");
					if (func_3(uParam0))
					{
						func_295(" Ready To Terminate");
						func_280(uParam0, 0);
					}
				}
			}
			else
			{
				if (*uParam0 == 53)
				{
					func_209(uParam0);
				}
				if (unk_0x95147FF3B74E25F0())
				{
					iLocal_114 = -1;
					unk_0x88890C87E37B149D(0);
					unk_0x8530DA8508D7A4B8(unk_0x77F050A399DB77ED());
				}
			}
		}
	}
}

void func_209(var* uParam0)
{
	char* sVar0;
	
	sVar0 = "misstrvram_2";
	switch (iLocal_115)
	{
		case 0:
			unk_0x6E2E777C1AD81C36(sVar0);
			if (unk_0x5263DE3D9A17A86F(sVar0))
			{
				iLocal_115++;
			}
			break;
		
		case 1:
			if (func_112(uParam0->f_28[0]))
			{
				if (func_220(uParam0->f_28[0], unk_0x77F050A399DB77ED(), 1) < 30f && unk_0xF74B69DFD85D7CCE(uParam0->f_28[0]))
				{
					func_219(&uLocal_120, 0, uParam0->f_28[0], "RAMPAGEHIPSTER", 0, 1);
					iLocal_115++;
				}
			}
			break;
		
		case 2:
			uLocal_116[0] = unk_0xFCF0CDCAF2761068(Local_107, Local_110, 2);
			if (func_112(uParam0->f_28[0]))
			{
				func_210(&uLocal_120, "RAMP2AU", "RAMP2_LEADIN", "RAMP2_LEADIN_1", 7, 0, 0);
				unk_0x3C6CCFC07FD12077(uParam0->f_28[0], uLocal_116[0], sVar0, "hipster_post_post_irony", 8f, -8f, 513, 0, 1148846080, 0);
			}
			unk_0x33AD23CCE6A61B0F(uLocal_116[0], 0);
			unk_0xEBA174204B3A690F(uLocal_116[0], 1);
			iLocal_115++;
			break;
		
		case 3:
			if (unk_0x671C6C3F21245221(uLocal_116[0]))
			{
				if (unk_0x19779E7427AA44FB(uLocal_116[0]) >= 0.95f)
				{
					iLocal_115++;
				}
			}
			break;
		
		case 4:
			uLocal_116[1] = unk_0xFCF0CDCAF2761068(Local_107, Local_110, 2);
			if (func_112(uParam0->f_28[0]))
			{
				func_210(&uLocal_120, "RAMP2AU", "RAMP2_LEADIN", "RAMP2_LEADIN_2", 7, 0, 0);
				unk_0x3C6CCFC07FD12077(uParam0->f_28[0], uLocal_116[1], sVar0, "hipster_self_hating_hipster", 8f, -8f, 513, 0, 1148846080, 0);
			}
			unk_0x33AD23CCE6A61B0F(uLocal_116[1], 0);
			unk_0xEBA174204B3A690F(uLocal_116[1], 1);
			iLocal_115++;
			break;
		
		case 5:
			if (unk_0x671C6C3F21245221(uLocal_116[1]))
			{
				if (unk_0x19779E7427AA44FB(uLocal_116[1]) >= 0.95f)
				{
					iLocal_115++;
				}
			}
			break;
		
		case 6:
			uLocal_116[2] = unk_0xFCF0CDCAF2761068(Local_107, Local_110, 2);
			if (func_112(uParam0->f_28[0]))
			{
				unk_0x3C6CCFC07FD12077(uParam0->f_28[0], uLocal_116[2], sVar0, "hipster_idle", 8f, -8f, 513, 0, 1148846080, 0);
			}
			unk_0x33AD23CCE6A61B0F(uLocal_116[2], 1);
			unk_0xEBA174204B3A690F(uLocal_116[2], 0);
			iLocal_115++;
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
					unk_0xC9AB825AA4821BDA(0);
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
		if (unk_0x1066B6347C40B301())
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
			unk_0xA5F70A8B83BDFA49(&Global_2283, 20);
			unk_0xA5F70A8B83BDFA49(&Global_2284, 17);
			unk_0xA5F70A8B83BDFA49(&Global_2285, 0);
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
			if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
			{
				if (unk_0x9FA30238987B8B6F(unk_0x77F050A399DB77ED()))
				{
					return 0;
				}
				if (func_214())
				{
					return 0;
				}
				if (unk_0x8408B4A4C23B6D99(unk_0x77F050A399DB77ED()))
				{
					return 0;
				}
				if (unk_0xCD7683F575A67B31(unk_0x77F050A399DB77ED()))
				{
					return 0;
				}
				if (unk_0x04CAC901929627FE(unk_0x77F050A399DB77ED()))
				{
					return 0;
				}
				if (unk_0xE89300623E310620(unk_0x77F050A399DB77ED(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69317)
				{
					if (unk_0xAB5BBCD9D3B6625D(unk_0x77F050A399DB77ED()))
					{
						return 0;
					}
					if (unk_0x1F23B510F2B55C10(unk_0x8ACD527A7E574590()))
					{
						return 0;
					}
					if (unk_0x7E0A8E0015B69AA4(unk_0x77F050A399DB77ED()))
					{
						return 0;
					}
					if (unk_0xB32A2CF30C462699(unk_0x8ACD527A7E574590()))
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
				if (unk_0xB56FEBC510E7E9DE(Global_2283, 9))
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
	unk_0xC9AB825AA4821BDA(0);
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
	unk_0xA5F70A8B83BDFA49(&Global_2284, 16);
}

int func_214()
{
	int iVar0;
	int iVar1;
	
	if (Global_69317)
	{
		iVar0 = 0;
		unk_0x587BE7B13B3A93BF(unk_0x77F050A399DB77ED(), &iVar1, 1);
		if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x294E2F2AFFA6421E() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
	{
		if (unk_0xEE92F60CC00FFBD6(unk_0x77F050A399DB77ED(), 78, 1))
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
		if (!unk_0x0B6E83A9A7ED3EBA(unk_0x77F050A399DB77ED()))
		{
			if (unk_0xDF1398076E26B0E4(unk_0x77F050A399DB77ED()) == Global_99250.f_32503[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (unk_0xDF1398076E26B0E4(unk_0x77F050A399DB77ED()) == Global_99250.f_32503[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (unk_0xDF1398076E26B0E4(unk_0x77F050A399DB77ED()) == Global_99250.f_32503[2 /*29*/])
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
				return Global_1338610.f_203[iParam1];
			}
			break;
	}
	return unk_0xB56FEBC510E7E9DE(Global_1338610.f_949, iParam0);
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
		if (!unk_0x1E80C02AC16B6622(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x5A0EAF1DC22647FF(iParam2, 0);
			}
			else
			{
				unk_0x5A0EAF1DC22647FF(iParam2, 1);
			}
		}
		if (!unk_0x1E80C02AC16B6622(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xFAF696F3B3892233(iParam2, 0);
			}
			else
			{
				unk_0xFAF696F3B3892233(iParam2, 1);
			}
		}
	}
}

float func_220(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x0B6E83A9A7ED3EBA(iParam0))
	{
		Var0 = { unk_0xAF99169F0F5AE41D(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xAF99169F0F5AE41D(iParam0, 0) };
	}
	if (!unk_0x0B6E83A9A7ED3EBA(iParam1))
	{
		Var3 = { unk_0xAF99169F0F5AE41D(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xAF99169F0F5AE41D(iParam1, 0) };
	}
	return unk_0xA2490B3CE6382FBB(Var0, Var3, iParam2);
}

int func_221(var* uParam0)
{
	func_174();
	if (iLocal_114 < 0)
	{
		if (unk_0xB7A628320EFF8E47(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), unk_0xAF99169F0F5AE41D(uParam0->f_28[1], 1)) < 25f)
		{
			return 1;
		}
		switch (*uParam0)
		{
			case 52:
				unk_0x1039A85F5DBF8803(uParam0->f_28[0], 0.1f, 0f, 0.9f, 1, -1, 2500, 2000, 0);
				unk_0xD0C8DD55C652567F(unk_0x77F050A399DB77ED(), uParam0->f_28[0], -1, 0, 2);
				unk_0x993D569CC7C7E044(1);
				unk_0xA9CF573B5C472A1F(-5f);
				unk_0xF5BDF7A7EF88BD2D(0.1f);
				unk_0xFB20571CF392873D(0f);
				unk_0xC0614B82B6FDF6F3(0.3f);
				unk_0x2267DF749878EB3D(40f);
				break;
			
			case 54:
				unk_0x1039A85F5DBF8803(uParam0->f_28[0], 0f, -0.1f, 0.9f, 1, -1, 2500, 2000, 0);
				unk_0xD0C8DD55C652567F(unk_0x77F050A399DB77ED(), uParam0->f_28[0], -1, 0, 2);
				unk_0x993D569CC7C7E044(1);
				unk_0xA9CF573B5C472A1F(-10f);
				unk_0xF5BDF7A7EF88BD2D(-0.9f);
				unk_0xFB20571CF392873D(0f);
				unk_0xC0614B82B6FDF6F3(0.35f);
				unk_0x2267DF749878EB3D(40f);
				break;
			
			case 55:
				unk_0x1039A85F5DBF8803(uParam0->f_28[1], 0f, 0f, 0.9f, 1, -1, 2500, 2000, 0);
				unk_0xD0C8DD55C652567F(unk_0x77F050A399DB77ED(), uParam0->f_28[1], -1, 0, 2);
				unk_0x993D569CC7C7E044(1);
				unk_0xA9CF573B5C472A1F(-8f);
				unk_0xF5BDF7A7EF88BD2D(-0.9f);
				unk_0xFB20571CF392873D(0.1f);
				unk_0xC0614B82B6FDF6F3(0.35f);
				unk_0x2267DF749878EB3D(40f);
				break;
			
			case 56:
				unk_0x1039A85F5DBF8803(uParam0->f_28[1], 0f, 0f, 0f, 1, -1, 2500, 2000, 0);
				unk_0xD0C8DD55C652567F(unk_0x77F050A399DB77ED(), uParam0->f_28[1], -1, 0, 2);
				unk_0x993D569CC7C7E044(1);
				unk_0xA9CF573B5C472A1F(-5f);
				unk_0xF5BDF7A7EF88BD2D(0.15f);
				unk_0xFB20571CF392873D(0f);
				unk_0xC0614B82B6FDF6F3(0.3f);
				unk_0x2267DF749878EB3D(40f);
				break;
		}
		iLocal_114 = unk_0x3EAC9995EC220C5A() + 2500;
	}
	else if (unk_0x3EAC9995EC220C5A() > iLocal_114)
	{
		iLocal_114 = -1;
		return 1;
	}
	return 0;
}

int func_222(var uParam0)
{
	func_174();
	switch (iLocal_285)
	{
		case 0:
			if (func_112(uParam0->f_28[0]))
			{
				func_223();
				iLocal_285++;
			}
			break;
		
		case 1:
			if (func_112(uParam0->f_28[0]))
			{
				if (!func_130())
				{
					if (func_210(&uLocal_120, "RAMP2AU", "RAMP2_LEADIN", "RAMP2_LEADIN_3", 8, 0, 0))
					{
						uLocal_286 = unk_0xFCF0CDCAF2761068(Local_107, Local_110, 2);
						unk_0x3C6CCFC07FD12077(uParam0->f_28[0], uLocal_286, "misstrvram_2", "hipster_cunts_in_america", 8f, -8f, 513, 0, 1148846080, 0);
						unk_0x1039A85F5DBF8803(uParam0->f_28[0], 0f, 0f, 0.5f, 1, -1, 2500, 2000, 0);
						unk_0xD0C8DD55C652567F(unk_0x77F050A399DB77ED(), uParam0->f_28[0], -1, 0, 2);
						unk_0x993D569CC7C7E044(1);
						unk_0xA9CF573B5C472A1F(0f);
						unk_0xF5BDF7A7EF88BD2D(0.1f);
						unk_0xFB20571CF392873D(0f);
						unk_0xC0614B82B6FDF6F3(0.35f);
						unk_0x2267DF749878EB3D(40f);
						iLocal_285++;
					}
				}
			}
			break;
		
		case 2:
			if (func_112(uParam0->f_28[0]))
			{
				if (!func_130())
				{
					iLocal_285++;
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
	unk_0xCAAFCFEB9BD734FB();
	Global_16723 = 0;
	if (unk_0x1066B6347C40B301())
	{
		unk_0xC9AB825AA4821BDA(0);
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
				if (unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), 1826.631f, 4699.115f, 35.38089f, 1812.878f, 4710.457f, 42.05354f, 23.75f, 0, 1, 0))
				{
					if (func_112(uParam0->f_28[0]))
					{
						if (unk_0xA2490B3CE6382FBB(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), unk_0xAF99169F0F5AE41D(uParam0->f_28[0], 1), 1) < 3f)
						{
							if (func_230(2))
							{
								if (func_229(uParam0->f_27))
								{
									func_228(uParam0->f_27, *uParam0);
									func_295("ARE_RC_TRIGGER_CONDITIONS_MET: RC_TRIG_CHAR - Used special case Eps 4 trigger.");
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
				if ((((!unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), -1895.788f, -434.0192f, 40.30126f, -1883.038f, -444.0811f, 50.24509f, 8.5f, 0, 1, 0) && !unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), -1883.576f, -443.6434f, 36.40581f, -1874.826f, -448.0797f, 49.15162f, 8.5f, 0, 1, 0)) && !unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), -1876.343f, -446.2214f, 35.64637f, -1866.952f, -456.5601f, 49.0442f, 8.5f, 0, 1, 0)) && !unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), -1882.997f, -438.9922f, 44.17246f, -1874.079f, -443.342f, 48.69179f, 0.75f, 0, 1, 0)) || unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), -1878.822f, -441.7655f, 44.9175f, -1877.941f, -439.9522f, 47.28982f, 1.25f, 0, 1, 0))
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
				if (!unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), 837.0731f, 1261.086f, 366.1592f, 780.8383f, 1260.829f, 351.405f, 17.75f, 0, 1, 0))
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
				if (unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), uParam0->f_35[0], 0))
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
			if (unk_0x1F2158D615BC4B25(uParam0->f_35[0]))
			{
				if (!unk_0x0B6E83A9A7ED3EBA(uParam0->f_35[0]))
				{
					if (unk_0xA2490B3CE6382FBB(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), unk_0xAF99169F0F5AE41D(uParam0->f_35[0], 1), 1) < uParam0->f_15)
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
			if (unk_0xA2490B3CE6382FBB(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), uParam0->f_17[0 /*3*/], 1) < uParam0->f_15)
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
			if (unk_0xA427F05DB896EEBE(unk_0x77F050A399DB77ED(), uParam0->f_17[0 /*3*/], uParam0->f_17[1 /*3*/], 0, 1, 0))
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
				if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
				{
					if (func_112(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0)))
					{
						if (unk_0x3CE8DE6EBE766C15(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0), joaat("towtruck")) || unk_0x3CE8DE6EBE766C15(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0), joaat("towtruck2")))
						{
							if (unk_0xFF8B60AD533C7DBD(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0), uParam0->f_35[0]))
							{
								if (func_230(3))
								{
									return 1;
								}
							}
						}
						else if ((unk_0x3CE8DE6EBE766C15(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0), joaat("cargobob")) || unk_0x3CE8DE6EBE766C15(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0), joaat("cargobob2"))) || unk_0x3CE8DE6EBE766C15(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0), joaat("cargobob3")))
						{
							if (unk_0xDC7078A48CFB0178(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0)) && unk_0x540DEF730009CA9B(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0), uParam0->f_35[0]))
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
				if (unk_0xF7DCD1AF3564112B(unk_0x77F050A399DB77ED()) >= 2f)
				{
					if (unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), 245.8885f, 371.9034f, 103.9884f, 241.5898f, 359.6458f, 107.3461f, 1.25f, 0, 1, 0))
					{
						if (func_230(2))
						{
							if (func_229(uParam0->f_27))
							{
								func_228(uParam0->f_27, *uParam0);
								func_295("RC5_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - Eps 2 special case trigger used");
								return 1;
							}
						}
					}
				}
			}
			else if (*uParam0 == 46)
			{
				if (unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), -164.2046f, 277.4866f, 91.55322f, -153.6f, 277.4061f, 97.33813f, 10f, 0, 1, 0))
				{
					return 0;
				}
			}
			else if (*uParam0 == 31)
			{
				if (unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), 2728.948f, 4143.44f, 42.29295f, 2722.213f, 4144.521f, 45.43182f, 10f, 0, 1, 0))
				{
					if (func_230(2))
					{
						if (func_229(1))
						{
							func_228(1, *uParam0);
							func_295("RC_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - RC_MAUDE_1 special case vehicle launch area");
							return 1;
						}
					}
				}
			}
			else if (*uParam0 == 39)
			{
				if (unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), -992.4995f, 358.7455f, 96.3735f, -1021.94f, 361.8888f, 65.36148f, 30f, 0, 1, 0))
				{
					if (!unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), -983.5426f, 369.1104f, 68.46017f, -1028.566f, 395.4613f, 94.57245f, 15f, 0, 1, 0))
					{
						if (!unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), -983.875f, 346.7556f, 68.02096f, -1021.451f, 336.3458f, 93.18714f, 14.5f, 0, 1, 0))
						{
							if (func_230(2))
							{
								if (func_229(uParam0->f_27))
								{
									func_228(uParam0->f_27, *uParam0);
									func_295("RC_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - RC_NIGEL_1B special case vehicle launch area");
									return 1;
								}
							}
						}
					}
				}
			}
			if (unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), uParam0->f_17[0 /*3*/], uParam0->f_17[1 /*3*/], uParam0->f_24, 0, 1, 0))
			{
				if (*uParam0 == 45)
				{
					if (unk_0xCA55F1A0D9ADE3AD(unk_0x77F050A399DB77ED(), 2338.697f, 2597.037f, 45.39052f, 2324.003f, 2597.185f, 47.74961f, 8.5f, 0, 1, 0))
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
	func_30(&(Global_92910.f_2311), &Global_92910, 0, 1, 1, 0);
}

int func_227(var uParam0)
{
	float fVar0;
	
	if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0) && uParam0->f_27)
	{
		if (*uParam0 == 27 || *uParam0 == 30)
		{
			fVar0 = 1f;
		}
		else
		{
			fVar0 = 5f;
		}
		if (unk_0xA2490B3CE6382FBB(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), unk_0xAF99169F0F5AE41D(uParam0->f_28[0], 1), 1) < (uParam0->f_15 + fVar0))
		{
			return 1;
		}
	}
	else if (unk_0xA2490B3CE6382FBB(unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 1), unk_0xAF99169F0F5AE41D(uParam0->f_28[0], 1), 1) < uParam0->f_15)
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
		if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
		{
			func_295("RC_STOP_PLAYER_VEHICLE_CHECK: Stopping player's vehicle.");
			if (unk_0x8CB60D610D84BCCE(unk_0x77F050A399DB77ED()) || unk_0xF5D83426C7C16DB1(unk_0x77F050A399DB77ED()))
			{
				func_295("RC_STOP_PLAYER_VEHICLE_CHECK: Turning off engine for plane or helicopter.");
				unk_0xB99FFA77B01C4714(unk_0xF8D66A34AF0C53A5(unk_0x77F050A399DB77ED(), 0), 0, 1, 0);
			}
			func_174();
		}
	}
}

int func_229(bool bParam0)
{
	int iVar0;
	
	if (unk_0x6DF20EAB8093DF19(unk_0x7F3E348C0892D8D2()))
	{
		if (unk_0xA73F3A974E4E7D9D(unk_0x77F050A399DB77ED()))
		{
			return 1;
		}
		else if (bParam0)
		{
			if (unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 0))
			{
				iVar0 = unk_0xD8D1111EA0CFD1DB();
				if (func_141(iVar0))
				{
					if (unk_0x8CB60D610D84BCCE(unk_0x77F050A399DB77ED()) || unk_0xF5D83426C7C16DB1(unk_0x77F050A399DB77ED()))
					{
						if ((!unk_0xA7C200C3B2989831(iVar0) && !unk_0x314654A7E186B6B2(iVar0)) && unk_0x2AA05370067DC5AC(iVar0) < 1f)
						{
							return 1;
						}
					}
					else if (!unk_0x314654A7E186B6B2(iVar0))
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
	
	if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
	{
		if (unk_0x1F2158D615BC4B25(unk_0x77F050A399DB77ED()))
		{
			if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
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
						if (((((((((((((((((!unk_0x9D63F8E150A93C77(unk_0x8ACD527A7E574590()) || unk_0x314654A7E186B6B2(unk_0x77F050A399DB77ED())) || unk_0xB2C4D90B868C2250(unk_0x77F050A399DB77ED())) || unk_0xCD7683F575A67B31(unk_0x77F050A399DB77ED())) || unk_0x0C3F372CDA660C9E(unk_0x77F050A399DB77ED())) || unk_0x57F90ABC20B2C976(unk_0x8ACD527A7E574590(), 1)) || unk_0x1F23B510F2B55C10(unk_0x8ACD527A7E574590())) || unk_0x1CC086F95707C553(unk_0x77F050A399DB77ED(), 0)) || func_202()) || Global_98297) || Global_25117) || func_236()) || func_217(8, -1)) || func_80()) || func_235()) || func_234()) || func_233()) || Global_99250.f_6306.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x57F90ABC20B2C976(unk_0x8ACD527A7E574590(), 1) || func_202()) || Global_25117) || func_236()) || func_217(8, -1)) || func_234()) || func_80()) || func_235()) || func_233()) || Global_99250.f_6306.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x9D63F8E150A93C77(unk_0x8ACD527A7E574590()) || unk_0x314654A7E186B6B2(unk_0x77F050A399DB77ED())) || unk_0xB2C4D90B868C2250(unk_0x77F050A399DB77ED())) || unk_0xCD7683F575A67B31(unk_0x77F050A399DB77ED())) || unk_0x0C3F372CDA660C9E(unk_0x77F050A399DB77ED())) || unk_0x57F90ABC20B2C976(unk_0x8ACD527A7E574590(), 1)) || unk_0x1F23B510F2B55C10(unk_0x8ACD527A7E574590())) || unk_0x1CC086F95707C553(unk_0x77F050A399DB77ED(), 0)) || func_202()) || Global_98297) || Global_25117) || func_236()) || func_217(8, -1)) || func_234()) || func_80()) || func_235()) || func_233()) || Global_99250.f_6306.f_919[iVar0] == 5) || Global_36247 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0xCD7683F575A67B31(unk_0x77F050A399DB77ED()) || unk_0x0C3F372CDA660C9E(unk_0x77F050A399DB77ED())) || unk_0x57F90ABC20B2C976(unk_0x8ACD527A7E574590(), 1)) || unk_0x1CC086F95707C553(unk_0x77F050A399DB77ED(), 0)) || func_202()) || Global_98297) || Global_25117) || func_236()) || func_217(8, -1)) || func_80()) || func_235()) || func_233()) || Global_99250.f_6306.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_202() || unk_0xAEE8018B8C539989(unk_0x8ACD527A7E574590()) > 0) || func_217(8, -1)) || func_233()) || func_232()) || Global_99250.f_6306.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_217(8, -1) || func_80()) || func_235()) || func_232()) || func_231())
						{
							return 0;
						}
						if ((unk_0xA153A26DF49EBCC0() && unk_0xD802C73A0EC92D7F() != 3) && unk_0x9F0EFBAAF424E79A() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x1F2158D615BC4B25(unk_0x77F050A399DB77ED()))
						{
							if ((((((((((((((unk_0x1CC086F95707C553(unk_0x77F050A399DB77ED(), 0) || unk_0xAEE8018B8C539989(unk_0x8ACD527A7E574590()) > 0) || unk_0x314654A7E186B6B2(unk_0x77F050A399DB77ED())) || unk_0xCD7683F575A67B31(unk_0x77F050A399DB77ED())) || unk_0x0C3F372CDA660C9E(unk_0x77F050A399DB77ED())) || unk_0x57F90ABC20B2C976(unk_0x8ACD527A7E574590(), 1)) || unk_0x1F23B510F2B55C10(unk_0x8ACD527A7E574590())) || func_202()) || Global_25117) || func_236()) || func_217(8, -1)) || func_235()) || func_234()) || func_233()) || Global_99250.f_6306.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x1CC086F95707C553(unk_0x77F050A399DB77ED(), 0) || !unk_0x116E9F29D23ADBBE(unk_0x8ACD527A7E574590())) || !unk_0x9D63F8E150A93C77(unk_0x8ACD527A7E574590())) || !unk_0x398F615441F52A47()) || unk_0x314654A7E186B6B2(unk_0x77F050A399DB77ED())) || unk_0xCD7683F575A67B31(unk_0x77F050A399DB77ED())) || unk_0x0C3F372CDA660C9E(unk_0x77F050A399DB77ED())) || unk_0x57F90ABC20B2C976(unk_0x8ACD527A7E574590(), 1)) || func_202()) || func_235()) || Global_98297) || Global_25117) || func_236()) || Global_36750) || func_217(8, -1)) || func_234()) || func_232()) || func_233()) || Global_99250.f_6306.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x1CC086F95707C553(unk_0x77F050A399DB77ED(), 0) || !unk_0x116E9F29D23ADBBE(unk_0x8ACD527A7E574590())) || !unk_0x9D63F8E150A93C77(unk_0x8ACD527A7E574590())) || !unk_0x398F615441F52A47()) || unk_0x9EE41011CAC5F6BD(unk_0x8ACD527A7E574590(), 0)) || unk_0x314654A7E186B6B2(unk_0x77F050A399DB77ED())) || unk_0xB42592B9FFEB5EDE(unk_0x77F050A399DB77ED(), 1)) || unk_0xCD7683F575A67B31(unk_0x77F050A399DB77ED())) || unk_0x0C3F372CDA660C9E(unk_0x77F050A399DB77ED())) || unk_0xCDC007CB03638977(unk_0x77F050A399DB77ED())) || unk_0x57F90ABC20B2C976(unk_0x8ACD527A7E574590(), 1)) || unk_0x1F23B510F2B55C10(unk_0x8ACD527A7E574590())) || func_202()) || Global_98297) || Global_25117) || func_236()) || func_217(8, -1)) || func_234()) || func_232()) || func_80()) || func_235()) || func_233())
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
		return unk_0xB56FEBC510E7E9DE(Global_82227[Global_88361 /*34*/].f_15, 13);
	}
	return 0;
}

int func_233()
{
	if (unk_0xB1A77D5C890711F9(joaat("player_timetable_scene")) > 0)
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
	return Global_1315910;
}

void func_237(var uParam0, var uParam1)
{
	if (unk_0x8B301CC099349249())
	{
		if (func_112(unk_0x77F050A399DB77ED()))
		{
			unk_0x3F8582AA8665B742("Trevor", unk_0x77F050A399DB77ED(), unk_0xDF1398076E26B0E4(unk_0x77F050A399DB77ED()));
		}
		switch (*uParam0)
		{
			case 52:
				if (func_112(uParam0->f_28[0]))
				{
					(*uParam1)[0] = "TriggerHappy_WhiteTrash";
					unk_0x3F8582AA8665B742((*uParam1)[0], uParam0->f_28[0], 0);
				}
				if (func_112(uParam0->f_28[1]))
				{
					(*uParam1)[1] = "Nervous_WhiteTrash";
					unk_0x3F8582AA8665B742((*uParam1)[1], uParam0->f_28[1], 0);
				}
				break;
			
			case 53:
				if (func_112(uParam0->f_28[0]))
				{
					(*uParam1)[0] = "Rampage_Hipster";
					unk_0x3F8582AA8665B742((*uParam1)[0], uParam0->f_28[0], 0);
				}
				break;
			
			case 54:
				if (func_112(uParam0->f_28[0]))
				{
					(*uParam1)[0] = "Armed_Mexican_Goon";
					unk_0x3F8582AA8665B742((*uParam1)[0], uParam0->f_28[0], 0);
					unk_0x3A7FAE2E325FDEEF((*uParam1)[0], 8, 1, 0, 0);
				}
				if (func_112(uParam0->f_28[1]))
				{
					(*uParam1)[1] = "Mexican_Goon";
					unk_0x3F8582AA8665B742((*uParam1)[1], uParam0->f_28[1], 0);
				}
				break;
			
			case 55:
				if (func_112(uParam0->f_28[0]))
				{
					(*uParam1)[0] = "Thug";
					unk_0x3F8582AA8665B742((*uParam1)[0], uParam0->f_28[0], 0);
					unk_0x3A7FAE2E325FDEEF((*uParam1)[0], 10, 0, 1, 0);
				}
				if (func_112(uParam0->f_28[1]))
				{
					(*uParam1)[1] = "Armed_Thug";
					unk_0x3F8582AA8665B742((*uParam1)[1], uParam0->f_28[1], 0);
					unk_0x3A7FAE2E325FDEEF((*uParam1)[1], 10, 1, 0, 0);
				}
				break;
			
			case 56:
				if (func_112(uParam0->f_28[0]))
				{
					(*uParam1)[0] = "Army_Guy_Right";
					unk_0x3F8582AA8665B742((*uParam1)[0], uParam0->f_28[0], 0);
				}
				if (func_112(uParam0->f_28[1]))
				{
					(*uParam1)[1] = "Army_Guy_Left";
					unk_0x3F8582AA8665B742((*uParam1)[1], uParam0->f_28[1], 0);
				}
				break;
			}
	}
}

void func_238(int iParam0, char* sParam1, struct<3> Param2)
{
	if (unk_0x6DF20EAB8093DF19(unk_0x8ACD527A7E574590()))
	{
		if (!unk_0x0AAC2160036975D9(sParam1))
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
				if (func_242(unk_0x77F050A399DB77ED(), Param2, 1) <= 100f)
				{
					func_241(iParam0, 1);
				}
			}
			else
			{
				switch (func_240(*iParam0))
				{
					case 1:
						if (unk_0x35D1CAD6ADAB6491(sParam1, "JOSH_1_INT_CONCAT"))
						{
							unk_0x1C4A0258E033922A(sParam1, 14, 8);
						}
						else
						{
							unk_0x3C0CECAD08F71003(sParam1, 8);
						}
						unk_0xDB72338C283A88B3(2);
						func_239(*iParam0, 1);
						break;
					
					case 2:
						unk_0xE7228403CEF8D654(0);
						unk_0xF5626435714EF511();
						unk_0xDB72338C283A88B3(0);
						func_239(*iParam0, 0);
						break;
				}
				if (func_242(unk_0x77F050A399DB77ED(), Param2, 1) > 120f)
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
			if (Global_69312 < unk_0x27A15A339F2F298B())
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
	
	if (!unk_0x0B6E83A9A7ED3EBA(iParam0))
	{
		Var0 = { unk_0xAF99169F0F5AE41D(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xAF99169F0F5AE41D(iParam0, 0) };
	}
	return unk_0xA2490B3CE6382FBB(Var0, Param1, iParam4);
}

bool func_243()
{
	return Global_88748;
}

void func_244(int iParam0)
{
	unk_0xE7228403CEF8D654(0);
	unk_0xF5626435714EF511();
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
	Global_69312 = unk_0x27A15A339F2F298B();
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
	Global_98337[iParam0 /*10*/].f_1 = 1;
}

bool func_247(int iParam0)
{
	return Global_98337[iParam0 /*10*/].f_1;
}

void func_248(var uParam0)
{
	if (*uParam0 == 52)
	{
		func_295(" RAMPAGE 1 - FORCE FREEZE CHAIRS AND PRE-RELEASE FOR B*2124538");
		if (unk_0x1F2158D615BC4B25(uParam0->f_41[3]))
		{
			unk_0xB92C428B448B51A4(uParam0->f_41[3], 1);
			unk_0xFF0E2D994E7D2E94(&(uParam0->f_41[3]));
			uParam0->f_41[3] = 0;
		}
		if (unk_0x1F2158D615BC4B25(uParam0->f_41[4]))
		{
			unk_0xB92C428B448B51A4(uParam0->f_41[4], 1);
			unk_0xFF0E2D994E7D2E94(&(uParam0->f_41[4]));
			uParam0->f_41[4] = 0;
		}
	}
}

int func_249(var uParam0)
{
	if ((*uParam0 == 54 || *uParam0 == 55) || *uParam0 == 56)
	{
		if (unk_0x15B943B129A1F2E7(unk_0x77F050A399DB77ED()) > 0)
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
			func_273(uParam0);
			iLocal_300 = func_272();
			break;
		
		case 53:
			func_266(uParam0);
			iLocal_300 = func_264();
			break;
		
		case 54:
			func_263(uParam0);
			break;
		
		case 55:
			func_262(uParam0);
			iLocal_300 = func_261();
			break;
		
		case 56:
			func_251(uParam0);
			break;
		
		default:
			break;
	}
	if (iLocal_300 != 0)
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
	unk_0xC60576ADD1AECA45(iVar1);
	unk_0xC60576ADD1AECA45(iVar2);
	unk_0x6E2E777C1AD81C36(sVar0);
	unk_0xB20A0A9D50FA9F96(joaat("weapon_grenadelauncher"), 31, 0);
	while ((!unk_0x4A4B6FD54C499B7D(iVar1) || !unk_0x4A4B6FD54C499B7D(iVar2)) || !unk_0x5263DE3D9A17A86F(sVar0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!func_259(&(uParam0->f_28[0]), iVar1, -1299.4f, 2506.24f, 21.07f, -122.79f, 0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_258(&(uParam0->f_28[0]));
	unk_0xAC39B7327DB5A9D0(uParam0->f_28[0], "RAMP:PED 0");
	unk_0x642DDF74A8A2B3BB(uParam0->f_28[0], sVar0, "marines_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
	unk_0x5F2AACB0122E1554(uParam0->f_28[0], 0, 0, 0, 0);
	unk_0x5F2AACB0122E1554(uParam0->f_28[0], 1, 0, 0, 0);
	unk_0x5F2AACB0122E1554(uParam0->f_28[0], 2, 0, 0, 0);
	unk_0x5F2AACB0122E1554(uParam0->f_28[0], 3, 0, 0, 0);
	unk_0x5F2AACB0122E1554(uParam0->f_28[0], 4, 0, 0, 0);
	unk_0x5F2AACB0122E1554(uParam0->f_28[0], 5, 0, 0, 0);
	unk_0x5F2AACB0122E1554(uParam0->f_28[0], 6, 0, 0, 0);
	unk_0x5F2AACB0122E1554(uParam0->f_28[0], 7, 0, 0, 0);
	unk_0x5F2AACB0122E1554(uParam0->f_28[0], 8, 0, 0, 0);
	unk_0x5F2AACB0122E1554(uParam0->f_28[0], 9, 0, 0, 0);
	unk_0x5F2AACB0122E1554(uParam0->f_28[0], 10, 0, 0, 0);
	unk_0x5F2AACB0122E1554(uParam0->f_28[0], 11, 0, 0, 0);
	unk_0xC978BB8A69877F89(uParam0->f_28[0], 0);
	unk_0xC978BB8A69877F89(uParam0->f_28[0], 1);
	unk_0xC978BB8A69877F89(uParam0->f_28[0], 2);
	unk_0xC978BB8A69877F89(uParam0->f_28[0], 3);
	unk_0xC978BB8A69877F89(uParam0->f_28[0], 4);
	unk_0xC978BB8A69877F89(uParam0->f_28[0], 5);
	unk_0xC978BB8A69877F89(uParam0->f_28[0], 6);
	unk_0xC978BB8A69877F89(uParam0->f_28[0], 7);
	unk_0xC978BB8A69877F89(uParam0->f_28[0], 8);
	while (!func_259(&(uParam0->f_28[1]), iVar1, -1299.49f, 2505.53f, 21.05f, -101.94f, 0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_258(&(uParam0->f_28[1]));
	unk_0x5F2AACB0122E1554(uParam0->f_28[1], 0, 1, 0, 0);
	unk_0x5F2AACB0122E1554(uParam0->f_28[1], 1, 0, 0, 0);
	unk_0x5F2AACB0122E1554(uParam0->f_28[1], 2, 0, 0, 0);
	unk_0x5F2AACB0122E1554(uParam0->f_28[1], 3, 0, 0, 0);
	unk_0x5F2AACB0122E1554(uParam0->f_28[1], 4, 0, 0, 0);
	unk_0x5F2AACB0122E1554(uParam0->f_28[1], 5, 0, 0, 0);
	unk_0x5F2AACB0122E1554(uParam0->f_28[1], 6, 0, 0, 0);
	unk_0x5F2AACB0122E1554(uParam0->f_28[1], 7, 0, 0, 0);
	unk_0x5F2AACB0122E1554(uParam0->f_28[1], 8, 0, 0, 0);
	unk_0x5F2AACB0122E1554(uParam0->f_28[1], 9, 0, 0, 0);
	unk_0x5F2AACB0122E1554(uParam0->f_28[1], 10, 0, 0, 0);
	unk_0x5F2AACB0122E1554(uParam0->f_28[1], 11, 0, 0, 0);
	unk_0xC978BB8A69877F89(uParam0->f_28[1], 0);
	unk_0xC978BB8A69877F89(uParam0->f_28[1], 1);
	unk_0xC978BB8A69877F89(uParam0->f_28[1], 2);
	unk_0xC978BB8A69877F89(uParam0->f_28[1], 3);
	unk_0xC978BB8A69877F89(uParam0->f_28[1], 4);
	unk_0xC978BB8A69877F89(uParam0->f_28[1], 5);
	unk_0xC978BB8A69877F89(uParam0->f_28[1], 6);
	unk_0xC978BB8A69877F89(uParam0->f_28[1], 7);
	unk_0xC978BB8A69877F89(uParam0->f_28[1], 8);
	unk_0xAC39B7327DB5A9D0(uParam0->f_28[1], "RAMP:PED 1");
	unk_0x642DDF74A8A2B3BB(uParam0->f_28[1], sVar0, "marines_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
	while (!func_257(&(uParam0->f_35[0]), iVar2, -1298.16f, 2504.153f, 21.062f, 165.48f))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0xC1D3820702043A43(uParam0->f_35[0]);
	func_256(&(uParam0->f_35[0]));
	unk_0x90908B101918C346(uParam0->f_35[0], 1, 0);
	unk_0x90908B101918C346(uParam0->f_35[0], 1, 1);
	unk_0xB92C428B448B51A4(uParam0->f_35[0], 1);
	if (!func_252(&(uParam0->f_41[0]), joaat("weapon_grenadelauncher"), -1297.84f, 2505.91f, 19.34f, func_255(-0.5f)))
	{
	}
	else
	{
		unk_0x5817B24FA3E70BC6(uParam0->f_41[0], 0, 0);
		unk_0x0B5F372F57E469AC(uParam0->f_41[0], -1297.84f, 2505.91f, 19.34f, 1, 0, 0, 1);
		unk_0x2DA164E80FDEE7F2(uParam0->f_41[0], func_255(-0.5f));
		unk_0xB92C428B448B51A4(uParam0->f_41[0], 1);
	}
	StringCopy(&(uParam0->f_9), "TRVRAM_5_CON", 24);
	uParam0->f_27 = 0;
	unk_0xFB4F6722A032A0F0(iVar1);
	unk_0xFB4F6722A032A0F0(iVar2);
}

int func_252(var uParam0, int iParam1, struct<3> Param2, float fParam5)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x1F2158D615BC4B25(*uParam0))
	{
		unk_0x7D779528B7C61C13(uParam0);
		*uParam0 = 0;
	}
	iVar0 = unk_0xB2AB568784BFB1F1(iParam1);
	unk_0xC60576ADD1AECA45(iVar0);
	iVar1 = unk_0x3EAC9995EC220C5A() + 10000;
	while (unk_0x3EAC9995EC220C5A() < iVar1)
	{
		if (unk_0x4A4B6FD54C499B7D(iVar0))
		{
			*uParam0 = unk_0x7E0D410C3318100E(iParam1, -1, Param2, 1, 1065353216, 0);
			unk_0xFB4F6722A032A0F0(iVar0);
			if (func_254(iParam1))
			{
				if (unk_0x25C79606F76495B1(*uParam0, func_253(iParam1, 0)))
				{
					unk_0x0DE8CA6BA7892CC4(*uParam0, func_253(iParam1, 0));
				}
				else if (unk_0x25C79606F76495B1(*uParam0, func_253(iParam1, 1)))
				{
					unk_0x0DE8CA6BA7892CC4(*uParam0, func_253(iParam1, 1));
				}
			}
			if (unk_0x1F2158D615BC4B25(*uParam0))
			{
				unk_0x0B5F372F57E469AC(*uParam0, Param2, 1, 0, 0, 1);
				unk_0x2DA164E80FDEE7F2(*uParam0, fParam5);
				return 1;
			}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0xFB4F6722A032A0F0(iVar0);
	return 0;
}

int func_253(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("weapon_assaultrifle"):
			return joaat("component_assaultrifle_varmod_luxe");
		
		case joaat("weapon_advancedrifle"):
			return joaat("component_advancedrifle_varmod_luxe");
		
		case joaat("weapon_carbinerifle"):
			return joaat("component_carbinerifle_varmod_luxe");
		
		case joaat("weapon_appistol"):
			return joaat("component_appistol_varmod_luxe");
		
		case joaat("weapon_pistol"):
			return joaat("component_pistol_varmod_luxe");
		
		case joaat("weapon_pistol50"):
			return joaat("component_pistol50_varmod_luxe");
		
		case joaat("weapon_heavypistol"):
			return joaat("component_heavypistol_varmod_luxe");
		
		case joaat("weapon_smg"):
			return joaat("component_smg_varmod_luxe");
		
		case joaat("weapon_microsmg"):
			return joaat("component_microsmg_varmod_luxe");
		
		case joaat("weapon_sawnoffshotgun"):
			return joaat("component_sawnoffshotgun_varmod_luxe");
		
		case joaat("weapon_sniperrifle"):
			return joaat("component_sniperrifle_varmod_luxe");
		
		case joaat("weapon_marksmanrifle"):
			return joaat("component_marksmanrifle_varmod_luxe");
		
		case joaat("weapon_assaultsmg"):
			return joaat("component_assaultsmg_varmod_lowrider");
		
		case joaat("weapon_bullpuprifle"):
			return joaat("component_bullpuprifle_varmod_low");
		
		case joaat("weapon_combatmg"):
			return joaat("component_combatmg_varmod_lowrider");
		
		case joaat("weapon_combatpistol"):
			return joaat("component_combatpistol_varmod_lowrider");
		
		case joaat("weapon_mg"):
			return joaat("component_mg_varmod_lowrider");
		
		case joaat("weapon_pumpshotgun"):
			return joaat("component_pumpshotgun_varmod_lowrider");
		
		case joaat("weapon_snspistol"):
			return joaat("component_snspistol_varmod_lowrider");
		
		case joaat("weapon_specialcarbine"):
			return joaat("component_specialcarbine_varmod_lowrider");
		
		case joaat("weapon_revolver"):
			switch (iParam1)
			{
				case 0:
					return joaat("component_revolver_varmod_boss");
				
				case 1:
					return joaat("component_revolver_varmod_goon");
				
				default:
			}
			break;
	}
	return 0;
}

int func_254(int iParam0)
{
	if ((((((((((((((((((((iParam0 == joaat("weapon_assaultrifle") || iParam0 == joaat("weapon_advancedrifle")) || iParam0 == joaat("weapon_carbinerifle")) || iParam0 == joaat("weapon_assaultsmg")) || iParam0 == joaat("weapon_bullpuprifle")) || iParam0 == joaat("weapon_specialcarbine")) || iParam0 == joaat("weapon_appistol")) || iParam0 == joaat("weapon_pistol")) || iParam0 == joaat("weapon_pistol50")) || iParam0 == joaat("weapon_heavypistol")) || iParam0 == joaat("weapon_combatpistol")) || iParam0 == joaat("weapon_snspistol")) || iParam0 == joaat("weapon_revolver")) || iParam0 == joaat("weapon_smg")) || iParam0 == joaat("weapon_microsmg")) || iParam0 == joaat("weapon_sawnoffshotgun")) || iParam0 == joaat("weapon_pumpshotgun")) || iParam0 == joaat("weapon_sniperrifle")) || iParam0 == joaat("weapon_marksmanrifle")) || iParam0 == joaat("weapon_combatmg")) || iParam0 == joaat("weapon_mg"))
	{
		return 1;
	}
	return 0;
}

float func_255(float fParam0)
{
	return (fParam0 * 57.29578f);
}

int func_256(var uParam0)
{
	if (!unk_0x1F2158D615BC4B25(*uParam0))
	{
		return 0;
	}
	unk_0x79FC96D30AEDF69A(*uParam0, 1);
	return 1;
}

int func_257(var uParam0, int iParam1, struct<3> Param2, float fParam5)
{
	if (unk_0x1F2158D615BC4B25(*uParam0))
	{
		unk_0x18D40A0CF27AD6D3(uParam0);
		*uParam0 = 0;
	}
	*uParam0 = unk_0x2EEA15C0C12C8CDE(iParam1, Param2, fParam5, 1, 1);
	if (!unk_0x1F2158D615BC4B25(*uParam0))
	{
		return 0;
	}
	return 1;
}

int func_258(var uParam0)
{
	if (!unk_0x1F2158D615BC4B25(*uParam0))
	{
		return 0;
	}
	unk_0x4FE5EDEAD55F44A3(*uParam0, 0);
	unk_0xAC39B7327DB5A9D0(*uParam0, "RAMP:SCENE PED");
	unk_0x26A7668D061F96E7(*uParam0, 0);
	unk_0x9526D9575C237F2F(*uParam0, 1);
	return 1;
}

int func_259(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6)
{
	if (unk_0x1F2158D615BC4B25(*uParam0))
	{
		unk_0xAB3098579170FA46(uParam0);
		*uParam0 = 0;
	}
	*uParam0 = unk_0x6665DCC708A346F3(26, iParam1, Param2, fParam5, 1, 1);
	if (!unk_0x1F2158D615BC4B25(*uParam0))
	{
		return 0;
	}
	if (bParam6)
	{
		func_260(*uParam0, Param2);
		unk_0x2DA164E80FDEE7F2(*uParam0, fParam5);
	}
	unk_0x4FE5EDEAD55F44A3(*uParam0, 0);
	unk_0xAC39B7327DB5A9D0(*uParam0, "RAMP:SCENE PED");
	unk_0x26A7668D061F96E7(*uParam0, 0);
	unk_0x9526D9575C237F2F(*uParam0, 1);
	return 1;
}

Vector3 func_260(var uParam0, struct<3> Param1)
{
	var uVar0;
	
	Param1.f_2 = (Param1.f_2 + 0.15f);
	if (unk_0x8BE5D4DC1A953832(Param1, &uVar0, 0))
	{
		Param1.f_2 = uVar0;
	}
	if (func_205(uParam0))
	{
		unk_0x0B5F372F57E469AC(uParam0, Param1, 1, 0, 0, 1);
	}
	return Param1;
}

int func_261()
{
	return unk_0x2277155D92E898D2(-177.0628f, -1679.715f, 33.16263f, -157.0628f, -1659.715f, 37.16263f, 0, 1, 1, 1);
}

void func_262(var uParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = joaat("ig_ramp_gang");
	sVar1 = "misstrvram_4";
	unk_0xC60576ADD1AECA45(iVar0);
	unk_0x6E2E777C1AD81C36(sVar1);
	unk_0xB20A0A9D50FA9F96(joaat("weapon_assaultrifle"), 31, 0);
	while (!unk_0x4A4B6FD54C499B7D(iVar0) || !unk_0x5263DE3D9A17A86F(sVar1))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!func_259(&(uParam0->f_28[0]), iVar0, -161.37f, -1669.63f, 33.1f, func_255(1.03f), 1))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_258(&(uParam0->f_28[0]));
	unk_0xAC39B7327DB5A9D0(uParam0->f_28[0], "RP0_NOGUN");
	unk_0x27972CC050118E69(uParam0->f_28[0]);
	unk_0x5F2AACB0122E1554(uParam0->f_28[0], 0, 1, 0, 0);
	unk_0x5F2AACB0122E1554(uParam0->f_28[0], 1, 0, 0, 0);
	unk_0x5F2AACB0122E1554(uParam0->f_28[0], 2, 0, 0, 0);
	unk_0x5F2AACB0122E1554(uParam0->f_28[0], 3, 0, 1, 0);
	unk_0x5F2AACB0122E1554(uParam0->f_28[0], 4, 0, 0, 0);
	unk_0x5F2AACB0122E1554(uParam0->f_28[0], 5, 0, 0, 0);
	unk_0x5F2AACB0122E1554(uParam0->f_28[0], 6, 0, 0, 0);
	unk_0x5F2AACB0122E1554(uParam0->f_28[0], 7, 0, 0, 0);
	unk_0x5F2AACB0122E1554(uParam0->f_28[0], 8, 0, 0, 0);
	unk_0x5F2AACB0122E1554(uParam0->f_28[0], 9, 0, 0, 0);
	unk_0x5F2AACB0122E1554(uParam0->f_28[0], 10, 0, 1, 0);
	unk_0x5F2AACB0122E1554(uParam0->f_28[0], 11, 0, 0, 0);
	unk_0x642DDF74A8A2B3BB(uParam0->f_28[0], sVar1, "thugs_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
	while (!func_259(&(uParam0->f_28[1]), iVar0, -161.93f, -1670.39f, 33.14f, func_255(0.2f), 1))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_258(&(uParam0->f_28[1]));
	unk_0xAC39B7327DB5A9D0(uParam0->f_28[1], "RP1_GUN");
	unk_0x27972CC050118E69(uParam0->f_28[1]);
	unk_0x5F2AACB0122E1554(uParam0->f_28[1], 0, 0, 0, 0);
	unk_0x5F2AACB0122E1554(uParam0->f_28[1], 1, 0, 0, 0);
	unk_0x5F2AACB0122E1554(uParam0->f_28[1], 2, 0, 0, 0);
	unk_0x5F2AACB0122E1554(uParam0->f_28[1], 3, 1, 1, 0);
	unk_0x5F2AACB0122E1554(uParam0->f_28[1], 4, 0, 0, 0);
	unk_0x5F2AACB0122E1554(uParam0->f_28[1], 5, 0, 0, 0);
	unk_0x5F2AACB0122E1554(uParam0->f_28[1], 6, 0, 0, 0);
	unk_0x5F2AACB0122E1554(uParam0->f_28[1], 7, 0, 0, 0);
	unk_0x5F2AACB0122E1554(uParam0->f_28[1], 8, 0, 0, 0);
	unk_0x5F2AACB0122E1554(uParam0->f_28[1], 9, 0, 0, 0);
	unk_0x5F2AACB0122E1554(uParam0->f_28[1], 10, 1, 0, 0);
	unk_0x5F2AACB0122E1554(uParam0->f_28[1], 11, 0, 0, 0);
	unk_0x1592B6D205958934(uParam0->f_28[1], joaat("weapon_assaultrifle"), 100, 1, 1);
	unk_0x642DDF74A8A2B3BB(uParam0->f_28[1], sVar1, "thugs_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
	StringCopy(&(uParam0->f_9), "TRVRAM_4", 24);
	uParam0->f_27 = 0;
	unk_0xFB4F6722A032A0F0(iVar0);
}

void func_263(var uParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = joaat("ig_ramp_mex");
	sVar1 = "misstrvram_3";
	unk_0xC60576ADD1AECA45(iVar0);
	unk_0x6E2E777C1AD81C36(sVar1);
	unk_0xB20A0A9D50FA9F96(joaat("weapon_microsmg"), 31, 10);
	while ((!unk_0x4A4B6FD54C499B7D(iVar0) || !unk_0x12BE006683564B78(joaat("weapon_microsmg"))) || !unk_0x5263DE3D9A17A86F(sVar1))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!func_259(&(uParam0->f_28[0]), iVar0, 464.6125f, -1848.767f, 27.816f, 177.39f, 1))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_258(&(uParam0->f_28[0]));
	unk_0x5F2AACB0122E1554(uParam0->f_28[0], 0, 0, 0, 0);
	unk_0x5F2AACB0122E1554(uParam0->f_28[0], 1, 0, 0, 0);
	unk_0x5F2AACB0122E1554(uParam0->f_28[0], 2, 0, 0, 0);
	unk_0x5F2AACB0122E1554(uParam0->f_28[0], 3, 0, 0, 0);
	unk_0x5F2AACB0122E1554(uParam0->f_28[0], 4, 0, 0, 0);
	unk_0x5F2AACB0122E1554(uParam0->f_28[0], 5, 0, 0, 0);
	unk_0x5F2AACB0122E1554(uParam0->f_28[0], 6, 0, 0, 0);
	unk_0x5F2AACB0122E1554(uParam0->f_28[0], 7, 0, 0, 0);
	unk_0x5F2AACB0122E1554(uParam0->f_28[0], 8, 0, 0, 0);
	unk_0x5F2AACB0122E1554(uParam0->f_28[0], 9, 1, 0, 0);
	unk_0x5F2AACB0122E1554(uParam0->f_28[0], 10, 0, 0, 0);
	unk_0x5F2AACB0122E1554(uParam0->f_28[0], 11, 0, 0, 0);
	unk_0xAC39B7327DB5A9D0(uParam0->f_28[0], "RAMP:PED 0");
	unk_0x642DDF74A8A2B3BB(uParam0->f_28[0], sVar1, "mexicans_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
	while (!func_259(&(uParam0->f_28[1]), iVar0, 465.782f, -1849.073f, 27.817f, 129.92f, 1))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_258(&(uParam0->f_28[1]));
	unk_0x5F2AACB0122E1554(uParam0->f_28[1], 0, 1, 0, 0);
	unk_0x5F2AACB0122E1554(uParam0->f_28[1], 1, 0, 0, 0);
	unk_0x5F2AACB0122E1554(uParam0->f_28[1], 2, 0, 0, 0);
	unk_0x5F2AACB0122E1554(uParam0->f_28[1], 3, 1, 0, 0);
	unk_0x5F2AACB0122E1554(uParam0->f_28[1], 4, 0, 1, 0);
	unk_0x5F2AACB0122E1554(uParam0->f_28[1], 5, 0, 0, 0);
	unk_0x5F2AACB0122E1554(uParam0->f_28[1], 6, 0, 0, 0);
	unk_0x5F2AACB0122E1554(uParam0->f_28[1], 7, 0, 0, 0);
	unk_0x5F2AACB0122E1554(uParam0->f_28[1], 8, 1, 0, 0);
	unk_0x5F2AACB0122E1554(uParam0->f_28[1], 9, 0, 0, 0);
	unk_0x5F2AACB0122E1554(uParam0->f_28[1], 10, 0, 0, 0);
	unk_0x5F2AACB0122E1554(uParam0->f_28[1], 11, 0, 0, 0);
	unk_0xAC39B7327DB5A9D0(uParam0->f_28[1], "RAMP:PED 1");
	unk_0x642DDF74A8A2B3BB(uParam0->f_28[1], sVar1, "mexicans_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
	if (func_252(&(uParam0->f_41[0]), joaat("weapon_microsmg"), 467f, -1855.4f, 32f, func_255(-0.85f)))
	{
		unk_0xF478B548FAA1ADB6(uParam0->f_41[0], joaat("component_at_scope_macro"));
		unk_0xF478B548FAA1ADB6(uParam0->f_41[0], joaat("component_microsmg_clip_02"));
	}
	StringCopy(&(uParam0->f_9), "TRVRAM_3", 24);
	uParam0->f_27 = 0;
	unk_0xFB4F6722A032A0F0(iVar0);
}

int func_264()
{
	return func_265(1182.137f, -400.4787f, 66.92414f, 8f);
}

var func_265(struct<3> Param0, float fParam3)
{
	struct<3> Var0;
	
	Var0 = { (fParam3 / 2f), (fParam3 / 2f), (fParam3 / 2f) };
	return unk_0x2277155D92E898D2(Param0 - Var0, Param0 + Var0, 0, 1, 1, 1);
}

void func_266(var uParam0)
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
	unk_0xB20A0A9D50FA9F96(joaat("weapon_sawnoffshotgun"), 31, 0);
	unk_0xC60576ADD1AECA45(iVar0);
	unk_0xC60576ADD1AECA45(iVar1);
	unk_0xC60576ADD1AECA45(iVar2);
	unk_0x6E2E777C1AD81C36(sVar3);
	func_270(&uLocal_113);
	while ((((!unk_0x4A4B6FD54C499B7D(iVar0) || !unk_0x4A4B6FD54C499B7D(iVar1)) || !unk_0x4A4B6FD54C499B7D(iVar2)) || !unk_0x5263DE3D9A17A86F(sVar3)) || !func_269(&uLocal_113))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0xDD10371A3DDE4593(1180.021f, -401.7374f, 66.8767f, 0.75f, 0);
	uParam0->f_41[2] = unk_0xAC531A3CCCC0ACC7(1179.778f, -401.7374f, 66.8697f, 1f, joaat("prop_chair_01a"), 1, 0, 1);
	if (unk_0x1F2158D615BC4B25(uParam0->f_41[2]))
	{
		unk_0x0B5F372F57E469AC(uParam0->f_41[2], 1180.05f, -401.83f, 66.88f, 1, 0, 0, 1);
		unk_0x188DB3CD3BF87211(uParam0->f_41[2], 0f, 0f, 50f, 2, 1);
		unk_0xB92C428B448B51A4(uParam0->f_41[2], 1);
	}
	uParam0->f_41[3] = unk_0xAC531A3CCCC0ACC7(1181.243f, -402.5309f, 67.2564f, 1f, joaat("prop_table_01"), 1, 0, 1);
	if (unk_0x1F2158D615BC4B25(uParam0->f_41[3]))
	{
		unk_0xB92C428B448B51A4(uParam0->f_41[3], 1);
	}
	while (!func_259(&(uParam0->f_28[0]), iVar0, 1181.547f, -400.0954f, 67.5757f, -124.2928f, 0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_258(&(uParam0->f_28[0]));
	unk_0xB92C428B448B51A4(uParam0->f_28[0], 1);
	unk_0x27972CC050118E69(uParam0->f_28[0]);
	unk_0x5F2AACB0122E1554(uParam0->f_28[0], 2, 0, 0, 0);
	func_268(&(uParam0->f_41[1]), iVar2, 1181.547f, -400.0954f, 65.5757f, 0f);
	unk_0xCA41E71A6AD186D8(uParam0->f_41[1], uParam0->f_28[0], unk_0x49E48BFB98D99FE3(uParam0->f_28[0], iVar4), Var8, Var5, 1, 0, 0, 0, 2, 1);
	func_267(&uLocal_113, 0, 3);
	if (!unk_0x671C6C3F21245221(uParam0->f_59))
	{
		uParam0->f_59 = unk_0xFCF0CDCAF2761068(Local_107, Local_110, 2);
		if (func_112(uParam0->f_28[0]))
		{
			unk_0x3C6CCFC07FD12077(uParam0->f_28[0], uParam0->f_59, sVar3, "hipster_idle", 8f, -8f, 513, 0, 1148846080, 0);
		}
		unk_0x33AD23CCE6A61B0F(uParam0->f_59, 1);
	}
	if (!func_252(&(uParam0->f_41[0]), joaat("weapon_sawnoffshotgun"), 1162.2f, -395.4f, 72.9f, func_255(-0.71f)))
	{
	}
	StringCopy(&(uParam0->f_9), "TRVRAM_2_CONCAT", 24);
	uParam0->f_27 = 0;
	unk_0xFB4F6722A032A0F0(iVar0);
	unk_0xFB4F6722A032A0F0(iVar1);
	unk_0xFB4F6722A032A0F0(iVar2);
}

void func_267(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	if (unk_0xEDE19C6ED6E2F478(*uParam0))
	{
		if (bParam1)
		{
			unk_0x396F4612799E27A5(&uVar0);
		}
		else
		{
			if (!unk_0x515142D7995EB0BD("npcphone"))
			{
				unk_0xB6C69B69C713C496("npcphone", 0);
				unk_0xE6D63FF01AB194AD(joaat("prop_npc_phone"));
			}
			uVar0 = unk_0x3CEC93147F49BDD4("npcphone");
		}
		unk_0x081248E2DE8DB6A4(uVar0);
		unk_0x758017413321C628(*uParam0, "DISPLAY_VIEW");
		unk_0x4D57F6B69CCB6D95(iParam2);
		unk_0x098CA28C04E62E55();
		unk_0x50137349427F6296(*uParam0, Global_14333, Global_14334, Global_14335, Global_14336, 255, 255, 255, 255, 0);
	}
}

void func_268(var uParam0, int iParam1, struct<3> Param2, float fParam5)
{
	func_137(uParam0);
	*uParam0 = unk_0x4A498A71A7B2E7A5(iParam1, Param2, 1, 1, 0);
	unk_0x2DA164E80FDEE7F2(*uParam0, fParam5);
}

int func_269(var uParam0)
{
	if (unk_0xEDE19C6ED6E2F478(*uParam0))
	{
		return 1;
	}
	return 0;
}

void func_270(var uParam0)
{
	*uParam0 = unk_0x2F14983962462691(func_271());
}

char* func_271()
{
	return "CELLPHONE_CUTSCENE";
}

int func_272()
{
	return func_265(911.5349f, 3642.111f, 31.64738f, 8f);
}

void func_273(var uParam0)
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
	unk_0xC60576ADD1AECA45(iVar11);
	unk_0xC60576ADD1AECA45(iVar12);
	unk_0xC60576ADD1AECA45(iVar13);
	unk_0x6E2E777C1AD81C36(sVar3);
	unk_0xB20A0A9D50FA9F96(joaat("weapon_assaultrifle"), 31, 0);
	while ((((!unk_0x4A4B6FD54C499B7D(iVar11) || !unk_0x4A4B6FD54C499B7D(iVar12)) || !unk_0x4A4B6FD54C499B7D(iVar13)) || !unk_0x5263DE3D9A17A86F(sVar3)) || !unk_0x12BE006683564B78(joaat("weapon_assaultrifle")))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!func_259(&(uParam0->f_28[0]), iVar11, 907.998f, 3643.826f, 32.29243f, -173.0453f, 0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (func_112(uParam0->f_28[0]))
	{
		unk_0x5F2AACB0122E1554(uParam0->f_28[0], 0, 0, 0, 0);
		unk_0x5F2AACB0122E1554(uParam0->f_28[0], 1, 0, 0, 0);
		unk_0x5F2AACB0122E1554(uParam0->f_28[0], 2, 0, 0, 0);
		unk_0x5F2AACB0122E1554(uParam0->f_28[0], 3, 0, 0, 0);
		unk_0x5F2AACB0122E1554(uParam0->f_28[0], 4, 0, 0, 0);
		unk_0x5F2AACB0122E1554(uParam0->f_28[0], 5, 0, 0, 0);
		unk_0x5F2AACB0122E1554(uParam0->f_28[0], 6, 0, 0, 0);
		unk_0x5F2AACB0122E1554(uParam0->f_28[0], 7, 0, 0, 0);
		unk_0x5F2AACB0122E1554(uParam0->f_28[0], 8, 0, 0, 0);
		unk_0x5F2AACB0122E1554(uParam0->f_28[0], 9, 0, 0, 0);
		unk_0x5F2AACB0122E1554(uParam0->f_28[0], 10, 0, 0, 0);
		unk_0x5F2AACB0122E1554(uParam0->f_28[0], 11, 0, 0, 0);
		Var0 = { unk_0x5C9D7C3DA25581D1(uParam0->f_28[0], iVar4, 0f, 0f, 0f) };
		unk_0xAC39B7327DB5A9D0(uParam0->f_28[0], "RAMP:PED 0");
		func_268(&(uParam0->f_41[1]), iVar13, Var0, 0f);
		unk_0xCA41E71A6AD186D8(uParam0->f_41[1], uParam0->f_28[0], unk_0x49E48BFB98D99FE3(uParam0->f_28[0], iVar4), Var8, Var5, 1, 1, 0, 0, 2, 1);
		unk_0x0EE52DB9FACBCD47(uParam0->f_41[1], 1);
		unk_0xB92C428B448B51A4(uParam0->f_28[0], 1);
		unk_0x1706625EBCDDEBF9(uParam0->f_28[0], 208, 1);
		unk_0x054E434B0AECBDA6(uParam0->f_28[0], joaat("player"));
	}
	while (!func_259(&(uParam0->f_28[1]), iVar11, 909.3126f, 3643.507f, 32.2952f, 153.0127f, 0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (func_112(uParam0->f_28[1]))
	{
		unk_0x5F2AACB0122E1554(uParam0->f_28[1], 0, 1, 0, 0);
		unk_0x5F2AACB0122E1554(uParam0->f_28[1], 1, 0, 0, 0);
		unk_0x5F2AACB0122E1554(uParam0->f_28[1], 2, 1, 0, 0);
		unk_0x5F2AACB0122E1554(uParam0->f_28[1], 3, 1, 0, 0);
		unk_0x5F2AACB0122E1554(uParam0->f_28[1], 4, 1, 0, 0);
		unk_0x5F2AACB0122E1554(uParam0->f_28[1], 5, 0, 0, 0);
		unk_0x5F2AACB0122E1554(uParam0->f_28[1], 6, 0, 0, 0);
		unk_0x5F2AACB0122E1554(uParam0->f_28[1], 7, 0, 0, 0);
		unk_0x5F2AACB0122E1554(uParam0->f_28[1], 8, 0, 0, 0);
		unk_0x5F2AACB0122E1554(uParam0->f_28[1], 9, 0, 0, 0);
		unk_0x5F2AACB0122E1554(uParam0->f_28[1], 10, 0, 0, 0);
		unk_0x5F2AACB0122E1554(uParam0->f_28[1], 11, 0, 0, 0);
		Var0 = { unk_0x5C9D7C3DA25581D1(uParam0->f_28[1], iVar4, 0f, 0f, 0f) };
		unk_0xAC39B7327DB5A9D0(uParam0->f_28[1], "RAMP:PED 1");
		func_268(&(uParam0->f_41[2]), iVar13, Var0, 0f);
		unk_0xCA41E71A6AD186D8(uParam0->f_41[2], uParam0->f_28[1], unk_0x49E48BFB98D99FE3(uParam0->f_28[1], iVar4), Var8, Var5, 1, 1, 0, 0, 2, 1);
		unk_0x0EE52DB9FACBCD47(uParam0->f_41[2], 1);
		unk_0xB92C428B448B51A4(uParam0->f_28[1], 1);
		unk_0x1706625EBCDDEBF9(uParam0->f_28[1], 208, 1);
		unk_0x054E434B0AECBDA6(uParam0->f_28[1], joaat("player"));
	}
	uParam0->f_41[3] = unk_0xAC531A3CCCC0ACC7(909.3884f, 3643.652f, 31.699f, 1f, joaat("prop_table_03b_chr"), 1, 0, 1);
	if (unk_0x1F2158D615BC4B25(uParam0->f_41[3]))
	{
		unk_0xB92C428B448B51A4(uParam0->f_41[3], 1);
	}
	uParam0->f_41[4] = unk_0xAC531A3CCCC0ACC7(908.0437f, 3643.682f, 31.7073f, 1f, joaat("prop_table_03b_chr"), 1, 0, 1);
	if (unk_0x1F2158D615BC4B25(uParam0->f_41[4]))
	{
		unk_0xB92C428B448B51A4(uParam0->f_41[4], 1);
	}
	if (!unk_0x671C6C3F21245221(uParam0->f_59))
	{
		uParam0->f_59 = unk_0xFCF0CDCAF2761068(910.13f, 3643.74f, 31.69f, 0f, 0f, func_255(-0.26f), 2);
		if (func_112(uParam0->f_28[0]))
		{
			unk_0x3C6CCFC07FD12077(uParam0->f_28[0], uParam0->f_59, sVar3, "redneck_idle_a", 8f, -8f, 513, 0, 1148846080, 0);
		}
		if (func_112(uParam0->f_28[1]))
		{
			unk_0x3C6CCFC07FD12077(uParam0->f_28[1], uParam0->f_59, sVar3, "redneck_idle_b", 8f, -8f, 513, 0, 1148846080, 0);
		}
		unk_0x33AD23CCE6A61B0F(uParam0->f_59, 1);
	}
	if (!func_252(&(uParam0->f_41[0]), joaat("weapon_assaultrifle"), 907.52f, 3644.32f, 31.86f, -164.89f))
	{
	}
	unk_0xFB4F6722A032A0F0(iVar11);
	unk_0xFB4F6722A032A0F0(iVar12);
	StringCopy(&(uParam0->f_9), "TRVRAM_1", 24);
	uParam0->f_27 = 0;
}

int func_274(int iParam0)
{
	if (!unk_0xD8AD97AB31334199())
	{
		return 1;
	}
	if (unk_0xA153A26DF49EBCC0())
	{
		return 1;
	}
	if (func_163(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_275(int iParam0)
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
	if (!unk_0xB56FEBC510E7E9DE(Var0.f_26, iVar32))
	{
		return 1;
	}
	return 0;
}

int func_276(int iParam0, var uParam1, struct<3> Param2, float fParam5)
{
	int iVar0;
	
	if (*iParam0 == 1)
	{
		if (func_277((*iParam0)[0], Param2, fParam5, uParam1))
		{
			return 1;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < *iParam0)
		{
			if (func_277((*iParam0)[iVar0], Param2, fParam5, uParam1))
			{
				iVar0 = *iParam0;
				return 1;
			}
			iVar0++;
		}
	}
	func_295("DETERMINE_RC_TO_LAUNCH - Unable to find mission to launch [TERMINATING]");
	return 0;
}

int func_277(int iParam0, struct<3> Param1, float fParam4, var uParam5)
{
	int iVar0;
	struct<7> Var1;
	
	iVar0 = 0;
	func_95(iParam0, &Var1);
	if (func_278(Var1.f_6, Param1, fParam4, 0))
	{
		if (unk_0xB56FEBC510E7E9DE(Global_99250.f_17192[iParam0 /*6*/], 0))
		{
			if (!unk_0xB56FEBC510E7E9DE(Global_99250.f_17192[iParam0 /*6*/], 3))
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

int func_278(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x092B928D30C0282D((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x092B928D30C0282D((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x092B928D30C0282D((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x092B928D30C0282D((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x092B928D30C0282D((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_279(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_99250.f_7703.f_99.f_58[iParam0];
}

void func_280(var* uParam0, bool bParam1)
{
	func_248(uParam0);
	if (bParam1)
	{
		func_295(" SCRIPT TERMINATING: Cleaning up entities in Launcher");
		func_283(uParam0, 0, 0, 0);
	}
	func_282(&(uParam0->f_48));
	if (iLocal_288 != -1)
	{
		func_295("SCRIPT TERMINATING: Ending off-mission cutscene request");
		func_245(&iLocal_288);
	}
	if (iLocal_300 != 0)
	{
		if (*uParam0 == 55 || *uParam0 == 53)
		{
			unk_0x54575489AE798654(iLocal_300, 0);
		}
	}
	if (unk_0x95147FF3B74E25F0())
	{
		unk_0x88890C87E37B149D(0);
	}
	if (iLocal_292)
	{
		if (func_2("RAMP_HELP_TRIG"))
		{
			unk_0x4ACCE973F9C3CA3B(1);
			iLocal_292 = 0;
		}
	}
	func_281();
	func_295("SCRIPT TERMINATED");
	Global_88711 = 0;
	unk_0x2F798BA2098FDADE();
}

void func_281()
{
	func_295("Running end routines.");
	Global_98968 = (Global_98968 - 1);
}

int func_282(var uParam0)
{
	if (func_135(uParam0))
	{
		if (unk_0x5263DE3D9A17A86F(*uParam0))
		{
			unk_0xD5A53B898943F331(*uParam0);
			*uParam0 = "";
			uParam0->f_1 = "";
			return 1;
		}
	}
	return 0;
}

void func_283(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_291(uParam0, iParam1);
	func_287(uParam0, bParam2);
	func_284(uParam0, bParam3);
}

void func_284(var uParam0, bool bParam1)
{
	func_285(&(uParam0->f_41), bParam1);
}

void func_285(var uParam0, bool bParam1)
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
			func_286(uParam0[iVar0], 0);
		}
		iVar0++;
	}
}

void func_286(var uParam0, bool bParam1)
{
	if (unk_0x1F2158D615BC4B25(*uParam0))
	{
		if (unk_0x85C2713D803F1A4A(*uParam0))
		{
			unk_0xE8EBCCA6A3BE542B(*uParam0, 1, 1);
		}
		if (!bParam1)
		{
			unk_0xFF0E2D994E7D2E94(uParam0);
		}
		else
		{
			unk_0x1AA3A9A73DFF392F(*uParam0);
		}
	}
}

void func_287(var uParam0, bool bParam1)
{
	func_288(&(uParam0->f_35), bParam1);
}

void func_288(var uParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (bParam1)
		{
			func_290(uParam0[iVar0]);
		}
		else
		{
			func_289(uParam0[iVar0]);
		}
		iVar0++;
	}
}

void func_289(var uParam0)
{
	if (unk_0x1F2158D615BC4B25(*uParam0))
	{
		unk_0x0B6E83A9A7ED3EBA(*uParam0);
		if (unk_0x335346A332B62CA2(*uParam0) && unk_0x95CBA891BCA778AA(*uParam0, 1))
		{
			unk_0xB84D4C251623B60C(uParam0);
		}
	}
}

void func_290(var uParam0)
{
	if (unk_0x1F2158D615BC4B25(*uParam0))
	{
		if (!unk_0x335346A332B62CA2(*uParam0))
		{
			unk_0x8D429A827A931AC9(*uParam0, 1, 0);
		}
		if (func_141(*uParam0))
		{
			if (unk_0x335346A332B62CA2(*uParam0) && unk_0x95CBA891BCA778AA(*uParam0, 1))
			{
				if (func_112(unk_0x77F050A399DB77ED()))
				{
					if (unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), *uParam0, 0))
					{
						unk_0xB84D4C251623B60C(uParam0);
						return;
					}
				}
				unk_0x18D40A0CF27AD6D3(uParam0);
			}
		}
		else
		{
			if (func_112(unk_0x77F050A399DB77ED()))
			{
				if (unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), *uParam0, 0))
				{
					unk_0xB84D4C251623B60C(uParam0);
					return;
				}
			}
			unk_0x18D40A0CF27AD6D3(uParam0);
		}
	}
}

void func_291(var uParam0, int iParam1)
{
	func_292(&(uParam0->f_28), iParam1);
}

void func_292(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (iParam1 == 1)
		{
			func_294(uParam0[iVar0]);
		}
		else
		{
			func_293(uParam0[iVar0], 0, 1, 0);
		}
		iVar0++;
	}
}

void func_293(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x1F2158D615BC4B25(*uParam0))
	{
		if (!unk_0x1E80C02AC16B6622(*uParam0))
		{
			unk_0xA09672E91FA74DCA(*uParam0, 0);
			if (iParam3 == 0)
			{
				unk_0x5A499E160A1878DC(*uParam0);
			}
			unk_0x112CD899A3BEE719(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0x9526D9575C237F2F(*uParam0, 0);
			}
		}
		unk_0xA29D53AF339F4CD0(uParam0);
	}
}

void func_294(var uParam0)
{
	if (unk_0x1F2158D615BC4B25(*uParam0))
	{
		if (!unk_0x0B6E83A9A7ED3EBA(*uParam0))
		{
			unk_0xA09672E91FA74DCA(*uParam0, 0);
		}
		if (!unk_0x335346A332B62CA2(*uParam0))
		{
			unk_0x8D429A827A931AC9(*uParam0, 1, 0);
		}
		unk_0xAB3098579170FA46(uParam0);
	}
}

void func_295(char* sParam0)
{
	if (!unk_0x0AAC2160036975D9(sParam0))
	{
	}
}

void func_296(var uParam0)
{
	*uParam0 = -1;
	StringCopy(&(uParam0->f_1), "", 32);
	uParam0->f_15 = 12f;
	uParam0->f_16 = 6;
	uParam0->f_25 = 0;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
}

void func_297()
{
	func_295("Running start routines.");
	Global_98968++;
}

