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
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	struct<3> Local_106 = { 0, 0, 0 } ;
	struct<3> Local_109 = { 0, 0, 0 } ;
	var uLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	var uLocal_115[3] = { 0, 0, 0 };
	var uLocal_119 = 16;
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
	int iLocal_284 = 0;
	var uLocal_285 = 0;
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	var uLocal_292 = 3;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	struct<3> Local_296 = { 0, 0, 0 } ;
	int iLocal_299 = 0;
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
	uLocal_89 = unk_0x8FB19B229BCF8953();
	uLocal_90 = unk_0x355073A98A8FF72A();
	Local_106 = { 1180.969f, -402.381f, 67.2f };
	Local_109 = { 5f, 0f, 57.33f };
	iLocal_113 = -1;
	iLocal_286 = 77;
	iLocal_287 = -1;
	iLocal_288 = -1;
	iLocal_289 = 1;
	iLocal_290 = 1;
	iLocal_291 = 1;
	unk_0x3AFF990CF9565D40(1);
	func_363();
	Var0.f_17 = 2;
	Var0.f_28 = 6;
	Var0.f_35 = 5;
	Var0.f_41 = 6;
	Var61 = { ScriptParam_0.f_1[0 /*3*/] };
	Global_90246 = 1;
	func_362(&Var0);
	if (unk_0x76BF814AB8D4CAB8(83))
	{
		func_361(" Force cleanup [TERMINATING]");
		func_346(&Var0, 1);
	}
	if (!func_345(108))
	{
		func_222(&Var0, Var61);
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
		if (!unk_0x6E65FD9B611945AD())
		{
			func_361("  Ambient - Player isn't within World Point Range");
			func_346(uParam0, 1);
		}
		if (func_221() != 2)
		{
			func_361("  Ambient - Player is not Trevor");
			func_346(uParam0, 1);
		}
		iLocal_288 = func_220(5f);
		if (iLocal_288 != -1)
		{
			if (!func_214())
			{
				*uParam0 = func_213(iLocal_288);
				StringCopy(&(uParam0->f_1), func_212(iLocal_288), 32);
				uParam0->f_16 = 3;
				uParam0->f_15 = 5f;
				if (*uParam0 == -1)
				{
					func_361("  -  Ambient Rampage Mission ID is invalid");
					func_346(uParam0, 1);
				}
				if (unk_0xFAFFA408239A026B(&(uParam0->f_1)))
				{
					func_361("  -  Ambient Rampage Mission ID is invalid");
					func_346(uParam0, 1);
				}
				unk_0xD2A9C3F486236CC5(&(Global_104551.f_18544[*uParam0 /*6*/]), 0);
				unk_0xD2A9C3F486236CC5(&(Global_104551.f_18544[*uParam0 /*6*/]), 2);
				unk_0x62148293B793073B(&(Global_104551.f_18544[*uParam0 /*6*/]), 3);
				Global_103638[*uParam0 /*10*/].f_1 = 0;
				if (!func_211(0))
				{
					Global_103638[*uParam0 /*10*/].f_3 = 0;
				}
				if (!func_203(*uParam0))
				{
					func_361(" RC Ambient Can't Launch - Can_RC_Launch Faled");
					func_346(uParam0, 1);
				}
				else if (!func_5(uParam0))
				{
					func_361(" RC Ambient Can't Launch - Launch_RC_Mission Failed");
					func_346(uParam0, 1);
				}
				else
				{
					func_4(500, 1);
					unk_0x7EE425AE3317BA69(Param1, uParam0->f_15, 1, 0, 0, 0);
					func_361(" RC Ambient Launcher Waiting To Terminate");
					Global_103638[*uParam0 /*10*/].f_1 = 0;
					if (func_3(uParam0))
					{
						func_361(" Ambient - Ready To Terminate");
						func_346(uParam0, 0);
					}
				}
			}
		}
		else
		{
			if (func_2("RAMP_HELP_TRIG"))
			{
				unk_0xEFF1F12403847394(1);
			}
			iLocal_291 = 0;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

bool func_2(char* sParam0)
{
	unk_0x24BB6189982CE7D6(sParam0);
	return unk_0xF2850FB50EE28440(0);
}

int func_3(var* uParam0)
{
	while (!Global_103638[*uParam0 /*10*/])
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	return 1;
}

void func_4(int iParam0, bool bParam1)
{
	if (unk_0xC8AB6A5E6C1E6613())
	{
		if (!unk_0xBC13F084F3B1B544())
		{
			unk_0xFF91FEC6E57575E4(iParam0);
			if (bParam1)
			{
				while (!unk_0xEC0ECEF2AF3FDA8D())
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
	
	if (!func_202())
	{
		while (!func_197(*uParam0))
		{
			if (func_196(*uParam0))
			{
				func_187();
			}
			if (!func_144(uParam0, *uParam0 != 2))
			{
				func_361("LAUNCH_RC_MISSION - NOT IS_RC_FINE_AND_IN_RANGE() [TERMINATING]");
				return 0;
			}
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	if (func_143())
	{
		func_141();
	}
	if (!func_110(uParam0))
	{
		func_361("STEP_7_COMMON_LaunchMission - Trying to launch a null script string name");
		return 0;
	}
	func_107(*uParam0, &Var0);
	MemCopy(&sVar32, {func_106(*uParam0)}, 4);
	func_105(&sVar32, Var0.f_3, 0);
	func_104(*uParam0);
	if (!func_202())
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
	unk_0x62148293B793073B(&(Global_104551.f_18544[iParam0 /*6*/]), 5);
	if (unk_0xE7FAF8E78F7D3A73(joaat("mission_stat_watcher")) > 0)
	{
		while (unk_0xE7FAF8E78F7D3A73(joaat("mission_stat_watcher")) > 0)
		{
			func_22();
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	if (unk_0xE7FAF8E78F7D3A73(joaat("mission_stat_watcher")) < 1)
	{
		Global_55902 = 0;
		unk_0xC8A5933869E73673("mission_stat_watcher");
		while (!unk_0xC040FCA5F6E73B3E("mission_stat_watcher"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xE81651AD79516E48("mission_stat_watcher", 1828);
		unk_0x2130D1396EE39C8E("mission_stat_watcher");
	}
	while (!unk_0xB03A1684359C50A1(Global_104551.f_18544[iParam0 /*6*/], 5))
	{
		if (unk_0xE7FAF8E78F7D3A73(joaat("mission_stat_watcher")) > 0)
		{
			unk_0xD2A9C3F486236CC5(&(Global_104551.f_18544[iParam0 /*6*/]), 5);
		}
	}
	func_7(iParam0);
}

void func_7(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_55899 == 1)
	{
		func_21();
		Global_55899 = 0;
		if (Global_55894)
		{
			return;
		}
	}
	if (Global_3)
	{
		Global_55902 = 1;
		func_13();
		return;
	}
	MemCopy(&Global_55916, {func_12(iParam0)}, 4);
	Global_55904 = 0;
	Global_55903 = 0;
	switch (iParam0)
	{
		case 1:
		case 9:
			Global_55891 = 1;
			Global_55894 = 1;
			Global_55897 = 1;
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
			Global_55902 = 1;
			Global_55903 = 1;
			func_13();
			func_22();
			return;
			break;
	}
	iVar0 = Global_68146;
	Global_68146 = 1;
	iVar1 = Global_68147;
	Global_68147 = iParam0;
	if (!Global_55891)
	{
		if ((Global_68147 != iVar1 || Global_67996 == 0) || iVar0 != Global_68146)
		{
			Global_25482 = 0;
			func_13();
			func_9(iParam0);
		}
		else
		{
			Global_55894 = 1;
		}
	}
	Global_55929 = unk_0x5AFB8ED811F05E4D();
	func_8();
	Global_55901 = 0;
}

void func_8()
{
	int iVar0;
	
	if (!Global_55898)
	{
		return;
	}
	if (Global_67996 == 0)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67996)
	{
		switch (Global_56126[Global_67997[iVar0 /*9*/] /*13*/])
		{
			case 1:
			case 9:
				Global_67997[iVar0 /*9*/].f_3 = 1;
				break;
			
			case 4:
				if (Global_55909)
				{
					Global_67997[iVar0 /*9*/].f_3 = 1;
				}
				break;
			
			case 6:
				if (Global_56126[Global_67997[iVar0 /*9*/] /*13*/].f_3)
				{
					if (Global_67997[iVar0 /*9*/].f_1 != 0)
					{
						Global_67997[iVar0 /*9*/].f_3 = 1;
					}
				}
				break;
		}
		iVar0++;
	}
	Global_55898 = 0;
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
	Global_55894 = 1;
	Global_55897 = 1;
	if (Global_67996 > 15)
	{
		return;
	}
	func_11(Global_67996);
	Global_67997[Global_67996 /*9*/] = iParam0;
	Global_67996++;
	if (Global_56126[iParam0 /*13*/] == 16)
	{
		Global_68148 = 1;
	}
}

void func_11(int iParam0)
{
	Global_67997[iParam0 /*9*/].f_1 = 0;
	Global_67997[iParam0 /*9*/].f_2 = 0f;
	Global_67997[iParam0 /*9*/].f_3 = 0;
	Global_67997[iParam0 /*9*/].f_4 = 0;
}

struct<2> func_12(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_106(iParam0) };
	if (unk_0xFAFFA408239A026B(&cVar2))
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
	if (Global_55901)
	{
		return;
	}
	Global_55910 = 0;
	Global_67996 = 0;
	Global_55912 = 0;
	if (Global_55909)
	{
	}
	Global_55909 = 0;
	func_20(0);
	func_19();
	Global_68148 = 0;
	Global_55900 = 1;
	func_17();
	func_16();
	func_15();
	func_14();
	Global_55891 = 0;
	Global_55921 = 0;
	Global_55929 = -1;
}

void func_14()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_68183[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	Global_68192 = 0;
}

void func_15()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		Global_68149[iVar0 /*2*/] = 0;
		Global_68149[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	Global_68182 = 0;
}

void func_16()
{
	Global_56060 = 0;
}

void func_17()
{
	Global_55920 = 0;
	Global_55924 = func_18(joaat("sp0_shots"));
	Global_55923 = func_18(joaat("sp0_hits"));
	Global_55926 = func_18(joaat("sp1_shots"));
	Global_55925 = func_18(joaat("sp1_hits"));
	Global_55928 = func_18(joaat("sp2_shots"));
	Global_55927 = func_18(joaat("sp2_hits"));
}

var func_18(int iParam0)
{
	var uVar0;
	
	unk_0xD194C635833AC189(iParam0, &uVar0, -1);
	return uVar0;
}

void func_19()
{
	int iVar0;
	
	Global_55930 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		Global_55931[iVar0 /*2*/] = 0;
		iVar0++;
	}
}

void func_20(int iParam0)
{
	Global_71112 = iParam0;
	Global_71113 = iParam0;
}

void func_21()
{
	int iVar0;
	
	Global_55899 = 1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67996)
	{
		Global_67997[iVar0 /*9*/].f_3 = 2;
		iVar0++;
	}
	if (Global_55909)
	{
	}
	Global_55909 = 0;
}

void func_22()
{
	if (unk_0xE7FAF8E78F7D3A73(joaat("mission_stat_watcher")) > 0)
	{
		if (func_23())
		{
			if (Global_55896 && !Global_55895)
			{
				Global_55896 = 0;
				unk_0x983D86B7F4F283B8("mission_stat_watcher");
			}
		}
		else
		{
			unk_0x983D86B7F4F283B8("mission_stat_watcher");
		}
	}
}

int func_23()
{
	if (unk_0xE7FAF8E78F7D3A73(joaat("mission_stat_watcher")) < 1)
	{
		return 0;
	}
	if (!Global_55894)
	{
		return 0;
	}
	return Global_55906;
}

void func_24(char* sParam0)
{
	if (unk_0x9D39145AD645E383(sParam0, sParam0))
	{
	}
}

void func_25(char[4] cParam0, int iParam1)
{
	unk_0x62148293B793073B(&(Global_92829.f_20), 17);
	func_26(cParam0, iParam1, 0);
}

void func_26(char[4] cParam0, int iParam1, int iParam2)
{
	if (Global_92829 != 10 && Global_92829 != 9)
	{
		StringCopy(&Global_95137, cParam0, 32);
		func_28(&Global_95145, cParam0, 0, "Start", iParam1, iParam2);
		func_27();
		Global_87152 = 0;
	}
}

void func_27()
{
	int iVar0;
	int iVar1;
	
	Global_98114 = Global_95145;
	Global_98114.f_1 = Global_95145.f_1;
	Global_98114.f_6 = Global_95145.f_6;
	Global_98114.f_7 = Global_95145.f_7;
	Global_98114.f_8 = Global_95145.f_8;
	Global_98114.f_2 = Global_95145.f_2;
	Global_98114.f_3 = Global_95145.f_3;
	Global_98114.f_4 = Global_95145.f_4;
	Global_98114.f_5 = Global_95145.f_5;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		Global_98114.f_9[iVar1] = Global_95145.f_9[iVar1];
		Global_98114.f_13[iVar1] = Global_95145.f_13[iVar1];
		Global_98114.f_17[iVar1] = Global_95145.f_17[iVar1];
		Global_98114.f_21[iVar1] = Global_95145.f_21[iVar1];
		Global_98114.f_25[0 /*295*/][iVar1 /*98*/] = { Global_95145.f_25[0 /*295*/][iVar1 /*98*/] };
		Global_98114.f_25[1 /*295*/][iVar1 /*98*/] = { Global_95145.f_25[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 < 12)
		{
			Global_98114.f_616[iVar1 /*65*/][iVar0] = Global_95145.f_616[iVar1 /*65*/][iVar0];
			Global_98114.f_616[iVar1 /*65*/].f_13[iVar0] = Global_95145.f_616[iVar1 /*65*/].f_13[iVar0];
			Global_98114.f_616[iVar1 /*65*/].f_26[iVar0] = Global_95145.f_616[iVar1 /*65*/].f_26[iVar0];
			iVar0++;
		}
		Global_98114.f_616[iVar1 /*65*/].f_59 = Global_95145.f_616[iVar1 /*65*/].f_59;
		Global_98114.f_616[iVar1 /*65*/].f_60 = Global_95145.f_616[iVar1 /*65*/].f_60;
		Global_98114.f_616[iVar1 /*65*/].f_61 = Global_95145.f_616[iVar1 /*65*/].f_61;
		Global_98114.f_616[iVar1 /*65*/].f_62 = Global_95145.f_616[iVar1 /*65*/].f_62;
		Global_98114.f_616[iVar1 /*65*/].f_63 = Global_95145.f_616[iVar1 /*65*/].f_63;
		Global_98114.f_616[iVar1 /*65*/].f_64 = Global_95145.f_616[iVar1 /*65*/].f_64;
		iVar0 = 0;
		while (iVar0 < 9)
		{
			Global_98114.f_616[iVar1 /*65*/].f_39[iVar0] = Global_95145.f_616[iVar1 /*65*/].f_39[iVar0];
			Global_98114.f_616[iVar1 /*65*/].f_49[iVar0] = Global_95145.f_616[iVar1 /*65*/].f_49[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			Global_98114.f_812[iVar1 /*472*/][iVar0 /*5*/] = { Global_95145.f_812[iVar1 /*472*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			Global_98114.f_812[iVar1 /*472*/].f_221[iVar0 /*5*/] = { Global_95145.f_812[iVar1 /*472*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			Global_98114.f_2229[iVar1 /*32*/][iVar0] = Global_95145.f_2229[iVar1 /*32*/][iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Global_98114.f_2229[iVar1 /*32*/].f_5[iVar0] = Global_95145.f_2229[iVar1 /*32*/].f_5[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 15)
		{
			Global_98114.f_2229[iVar1 /*32*/].f_16[iVar0] = Global_95145.f_2229[iVar1 /*32*/].f_16[iVar0];
			iVar0++;
		}
		Global_98114.f_2326[iVar1] = Global_95145.f_2326[iVar1];
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			Global_98114.f_2823[iVar1 /*15*/][iVar0] = Global_95145.f_2823[iVar1 /*15*/][iVar0];
			Global_98114.f_2823[iVar1 /*15*/].f_5[iVar0] = Global_95145.f_2823[iVar1 /*15*/].f_5[iVar0];
			Global_98114.f_2823[iVar1 /*15*/].f_10[iVar0] = Global_95145.f_2823[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			Global_98114.f_2330[iVar1 /*164*/][iVar0] = Global_95145.f_2330[iVar1 /*164*/][iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_4[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_4[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_8[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_8[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_12[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_12[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_16[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_16[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_20[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_20[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_24[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_24[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_28[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_28[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_32[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_32[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_36[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_36[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_40[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_40[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_44[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_44[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_48[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_48[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_52[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_52[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_56[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_56[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_60[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_60[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_64[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_64[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_68[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_68[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_72[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_72[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_76[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_76[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_80[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_80[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_84[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_84[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_88[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_88[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_92[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_92[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_96[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_96[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_100[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_100[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_104[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_104[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_108[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_108[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_112[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_112[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_116[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_116[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_120[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_120[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_124[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_124[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_128[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_128[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_132[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_132[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_136[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_136[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_140[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_140[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_144[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_144[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_148[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_148[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_152[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_152[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_156[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_156[iVar0];
			Global_98114.f_2330[iVar1 /*164*/].f_160[iVar0] = Global_95145.f_2330[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	Global_98114.f_2869 = { Global_95145.f_2869 };
	Global_98114.f_2869.f_3 = Global_95145.f_2869.f_3;
	Global_98114.f_2875 = { Global_95145.f_2875 };
	Global_98114.f_2875.f_3 = { Global_95145.f_2875.f_3 };
	Global_98114.f_2875.f_6 = Global_95145.f_2875.f_6;
	Global_98114.f_2875.f_8 = Global_98114.f_2875.f_8;
	Global_98114.f_2875.f_7 = Global_95145.f_2875.f_7;
	Global_98114.f_2875.f_9 = Global_95145.f_2875.f_9;
	Global_98114.f_2875.f_11 = Global_95145.f_2875.f_11;
	Global_98114.f_2875.f_10 = Global_95145.f_2875.f_10;
	Global_98114.f_2875.f_12 = Global_95145.f_2875.f_12;
	Global_98114.f_2875.f_12.f_1 = { Global_95145.f_2875.f_12.f_1 };
	Global_98114.f_2875.f_12.f_5 = Global_95145.f_2875.f_12.f_5;
	Global_98114.f_2875.f_12.f_6 = Global_95145.f_2875.f_12.f_6;
	Global_98114.f_2875.f_12.f_7 = Global_95145.f_2875.f_12.f_7;
	Global_98114.f_2875.f_12.f_8 = Global_95145.f_2875.f_12.f_8;
	Global_98114.f_2875.f_12.f_9 = { Global_95145.f_2875.f_12.f_9 };
	Global_98114.f_2875.f_12.f_59 = { Global_95145.f_2875.f_12.f_59 };
	Global_98114.f_2875.f_12.f_62 = Global_95145.f_2875.f_12.f_62;
	Global_98114.f_2875.f_12.f_63 = Global_95145.f_2875.f_12.f_63;
	Global_98114.f_2875.f_12.f_64 = Global_95145.f_2875.f_12.f_64;
	Global_98114.f_2875.f_12.f_65 = Global_95145.f_2875.f_12.f_65;
	Global_98114.f_2875.f_12.f_77 = Global_95145.f_2875.f_12.f_77;
	Global_98114.f_2875.f_12.f_66 = Global_95145.f_2875.f_12.f_66;
	Global_98114.f_2875.f_12.f_67 = Global_95145.f_2875.f_12.f_67;
	Global_98114.f_2875.f_12.f_68 = Global_95145.f_2875.f_12.f_68;
	Global_98114.f_2875.f_12.f_69 = Global_95145.f_2875.f_12.f_69;
	Global_98114.f_2875.f_12.f_71 = Global_95145.f_2875.f_12.f_71;
	Global_98114.f_2875.f_12.f_72 = Global_95145.f_2875.f_12.f_72;
	Global_98114.f_2875.f_12.f_73 = Global_95145.f_2875.f_12.f_73;
	Global_98114.f_2875.f_12.f_74 = Global_95145.f_2875.f_12.f_74;
	Global_98114.f_2875.f_12.f_75 = Global_95145.f_2875.f_12.f_75;
	Global_98114.f_2875.f_12.f_76 = Global_95145.f_2875.f_12.f_76;
	Global_98114.f_2965 = Global_95145.f_2965;
	Global_98114.f_2965.f_1 = Global_95145.f_2965.f_1;
	Global_98114.f_2965.f_2 = Global_95145.f_2965.f_2;
	Global_98114.f_2965.f_3 = Global_95145.f_2965.f_3;
}

void func_28(var uParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_221();
	uParam0->f_1 = func_93();
	unk_0x4B7C093DEAAF2CAD(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		func_67(&(uParam0->f_2869), 0);
		func_66(unk_0x18F7BE9ACB7D08F4());
		func_59(unk_0x18F7BE9ACB7D08F4(), 0);
		unk_0x75CE6F8BEC2654E3(unk_0x18F7BE9ACB7D08F4(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_104551.f_2353.f_539.f_294[iVar1];
		if (iVar1 == func_56())
		{
			func_49(unk_0x18F7BE9ACB7D08F4(), &(uParam0->f_616[iVar1 /*65*/]), 1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_92619[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_92619[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_92619[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_92619[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_92619[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_92619[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_92619[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_92619[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_92619[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_92619[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*472*/][iVar0 /*5*/] = { Global_104551.f_2353.f_539.f_298[iVar1 /*472*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			uParam0->f_812[iVar1 /*472*/].f_221[iVar0 /*5*/] = { Global_104551.f_2353.f_539.f_298[iVar1 /*472*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				unk_0xD194C635833AC189(joaat("sp0_weap_purch_0"), &(uParam0->f_2229[iVar1 /*32*/][0]), -1);
				unk_0xD194C635833AC189(joaat("sp0_weap_purch_1"), &(uParam0->f_2229[iVar1 /*32*/][1]), -1);
				unk_0xD194C635833AC189(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_5[0]), -1);
				unk_0xD194C635833AC189(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_5[1]), -1);
				unk_0xD194C635833AC189(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_5[2]), -1);
				unk_0xD194C635833AC189(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_5[3]), -1);
				unk_0xD194C635833AC189(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_5[4]), -1);
				unk_0xD194C635833AC189(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_16[0]), -1);
				unk_0xD194C635833AC189(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_16[1]), -1);
				unk_0xD194C635833AC189(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_16[2]), -1);
				unk_0xD194C635833AC189(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_16[3]), -1);
				unk_0xD194C635833AC189(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_16[4]), -1);
				unk_0xD194C635833AC189(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_2229[iVar1 /*32*/].f_16[5]), -1);
				unk_0xD194C635833AC189(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_2229[iVar1 /*32*/].f_16[6]), -1);
				unk_0xD194C635833AC189(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_2229[iVar1 /*32*/].f_16[7]), -1);
				unk_0xD194C635833AC189(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_2229[iVar1 /*32*/].f_16[8]), -1);
				unk_0xD194C635833AC189(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_2229[iVar1 /*32*/].f_16[9]), -1);
				unk_0xD194C635833AC189(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_2229[iVar1 /*32*/].f_16[10]), -1);
				unk_0xD194C635833AC189(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_2229[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				unk_0xD194C635833AC189(joaat("sp1_weap_purch_0"), &(uParam0->f_2229[iVar1 /*32*/][0]), -1);
				unk_0xD194C635833AC189(joaat("sp1_weap_purch_1"), &(uParam0->f_2229[iVar1 /*32*/][1]), -1);
				unk_0xD194C635833AC189(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_5[0]), -1);
				unk_0xD194C635833AC189(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_5[1]), -1);
				unk_0xD194C635833AC189(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_5[2]), -1);
				unk_0xD194C635833AC189(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_5[3]), -1);
				unk_0xD194C635833AC189(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_5[4]), -1);
				unk_0xD194C635833AC189(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_16[0]), -1);
				unk_0xD194C635833AC189(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_16[1]), -1);
				unk_0xD194C635833AC189(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_16[2]), -1);
				unk_0xD194C635833AC189(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_16[3]), -1);
				unk_0xD194C635833AC189(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_16[4]), -1);
				unk_0xD194C635833AC189(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_2229[iVar1 /*32*/].f_16[5]), -1);
				unk_0xD194C635833AC189(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_2229[iVar1 /*32*/].f_16[6]), -1);
				unk_0xD194C635833AC189(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_2229[iVar1 /*32*/].f_16[7]), -1);
				unk_0xD194C635833AC189(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_2229[iVar1 /*32*/].f_16[8]), -1);
				unk_0xD194C635833AC189(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_2229[iVar1 /*32*/].f_16[9]), -1);
				unk_0xD194C635833AC189(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_2229[iVar1 /*32*/].f_16[10]), -1);
				unk_0xD194C635833AC189(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_2229[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				unk_0xD194C635833AC189(joaat("sp2_weap_purch_0"), &(uParam0->f_2229[iVar1 /*32*/][0]), -1);
				unk_0xD194C635833AC189(joaat("sp2_weap_purch_1"), &(uParam0->f_2229[iVar1 /*32*/][1]), -1);
				unk_0xD194C635833AC189(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_5[0]), -1);
				unk_0xD194C635833AC189(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_5[1]), -1);
				unk_0xD194C635833AC189(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_5[2]), -1);
				unk_0xD194C635833AC189(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_5[3]), -1);
				unk_0xD194C635833AC189(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_5[4]), -1);
				unk_0xD194C635833AC189(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_16[0]), -1);
				unk_0xD194C635833AC189(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_16[1]), -1);
				unk_0xD194C635833AC189(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_16[2]), -1);
				unk_0xD194C635833AC189(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_16[3]), -1);
				unk_0xD194C635833AC189(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_16[4]), -1);
				unk_0xD194C635833AC189(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_2229[iVar1 /*32*/].f_16[5]), -1);
				unk_0xD194C635833AC189(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_2229[iVar1 /*32*/].f_16[6]), -1);
				unk_0xD194C635833AC189(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_2229[iVar1 /*32*/].f_16[7]), -1);
				unk_0xD194C635833AC189(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_2229[iVar1 /*32*/].f_16[8]), -1);
				unk_0xD194C635833AC189(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_2229[iVar1 /*32*/].f_16[9]), -1);
				unk_0xD194C635833AC189(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_2229[iVar1 /*32*/].f_16[10]), -1);
				unk_0xD194C635833AC189(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_2229[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_104551.f_20534.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_53075[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_104551.f_2353.f_539.f_2387[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_104551.f_2353.f_539.f_2387[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2823[iVar1 /*15*/][iVar0] = Global_104551.f_2353.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2823[iVar1 /*15*/].f_5[iVar0] = Global_104551.f_2353.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2823[iVar1 /*15*/].f_10[iVar0] = Global_104551.f_2353.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_2330[iVar1 /*164*/][iVar0] = Global_104551.f_2353[iVar1 /*164*/][iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_4[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_8[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_12[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_16[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_20[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_24[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_28[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_32[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_36[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_40[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_44[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_48[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_52[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_56[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_60[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_64[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_68[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_72[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_76[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_80[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_84[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_88[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_92[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_96[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_100[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_104[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_108[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_112[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_116[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_120[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_124[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_128[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_132[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_136[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_140[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_144[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_148[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_152[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_156[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_160[iVar0] = Global_104551.f_2353[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	unk_0xD194C635833AC189(joaat("sp0_special_ability"), &(uParam0->f_2326[0]), -1);
	unk_0xD194C635833AC189(joaat("sp1_special_ability"), &(uParam0->f_2326[1]), -1);
	unk_0xD194C635833AC189(joaat("sp2_special_ability"), &(uParam0->f_2326[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_30(&(uParam0->f_2875), uParam0, iParam5, 1, 1, 0);
	}
	func_29(&(uParam0->f_2965));
	sParam3 = sParam3;
	iParam2 = iParam2;
}

int func_29(var uParam0)
{
	*uParam0 = Global_88823;
	uParam0->f_1 = Global_88824;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_30(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = unk_0x18F7BE9ACB7D08F4();
	}
	if (unk_0x31F12808DC47A9E5(iParam2))
	{
		uParam1->f_5 = func_47(iParam2);
	}
	if (func_44(iParam2, &iVar0, iParam3, iParam5))
	{
		func_31(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0x31F12808DC47A9E5(iVar0))
	{
		if (!unk_0x74C2FE037DFC8B4A(iVar0, 0))
		{
			if (unk_0x0665EB554F07889E(iVar0, joaat("skylift")) && unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), iVar0, 0))
			{
				func_31(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_31(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (unk_0xC4B84EB67F78C1F0(iParam2, 0))
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
		if (Global_92829.f_22[iVar0] == iParam0)
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
		*uParam0 = { unk_0x761660F5CE986DC4(iParam1, 1) };
		uParam0->f_6 = unk_0x93FDA3BF59E7B77F(iParam1);
		uParam0->f_3 = { unk_0xEF288D764F53C90C(iParam1) };
		if (unk_0x11BBEE2752B9D0C8(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_70579 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
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
		if (unk_0x31F12808DC47A9E5(Global_69674.f_484[iVar0]))
		{
			if (iParam0 == Global_69674.f_484[iVar0])
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
	
	if (!unk_0x31F12808DC47A9E5(iParam0))
	{
		return 145;
	}
	if (!unk_0xC4B84EB67F78C1F0(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x31F12808DC47A9E5(Global_90305[iVar0]))
		{
			if (Global_90305[iVar0] == iParam0)
			{
				return Global_90315[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_36(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0x31F12808DC47A9E5(iParam0))
	{
		return 0;
	}
	if (!unk_0xC4B84EB67F78C1F0(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x31F12808DC47A9E5(Global_90305[iVar0]))
		{
			if (Global_90305[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_90315[iVar0])
				{
					if (iParam2 == 0 || unk_0x4F69FBD64CDF125B(iParam0) == func_37(iParam1, iParam2))
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
			if (Global_104551.f_9055.f_99.f_58[128] && !Global_104551.f_9055.f_99.f_58[131])
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
					if (Global_104551.f_9055.f_99.f_58[119])
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
			else if (Global_104551.f_9055.f_99.f_58[118])
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
	
	if (unk_0xC4B84EB67F78C1F0(iParam0, 0))
	{
		func_43(uParam1);
		uParam1->f_66 = unk_0x4F69FBD64CDF125B(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xE6A2C60E19ABFD84(iParam0), 16);
		*uParam1 = unk_0x2B07F86D9BC57D14(iParam0);
		unk_0xC2CED850D0B7AE40(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x939E5110724C9FF5(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x5DEE36C41FD07639(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0x5B416ECA8172648C(iParam0);
		uParam1->f_67 = unk_0x178913209B5C278C(iParam0);
		uParam1->f_69 = unk_0x459703DBCA7E4F90(iParam0);
		uParam1->f_70 = unk_0xA15463616D2BE67B(iParam0);
		unk_0x868FCC1ABD0392E2(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0xC501B2A5F74552E1(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x6BF5E4054292013A(iParam0, 2))
		{
			unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 28);
		}
		if (unk_0x6BF5E4054292013A(iParam0, 3))
		{
			unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 29);
		}
		if (unk_0x6BF5E4054292013A(iParam0, 0))
		{
			unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 30);
		}
		if (unk_0x6BF5E4054292013A(iParam0, 1))
		{
			unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x7C094ED2B27D253F(iParam0, 0))
		{
			uParam1->f_68 = unk_0xB5305F9F7739856F(iParam0);
		}
		if (unk_0xD8BB60C76D29E4BB(uParam1->f_66))
		{
			if (unk_0xAD1AE6AEE26C1B5B(iParam0))
			{
				switch (unk_0xF0623119822BFA16(iParam0))
				{
					case 2:
					case 0:
						unk_0x62148293B793073B(&(uParam1->f_77), 23);
						unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 22);
						break;
					
					case 3:
					case 1:
						unk_0x62148293B793073B(&(uParam1->f_77), 23);
						unk_0x62148293B793073B(&(uParam1->f_77), 22);
						break;
					
					case 4:
						unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0xDCACEB538A650DBE(iParam0))
		{
			unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 9);
		}
		if (unk_0x43AB555BD9D432EA(iParam0))
		{
			unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 10);
		}
		if (unk_0x598942D690303B92(iParam0))
		{
			unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 13);
			unk_0x9F7E6674DE4C23B5(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0xFD2F81E6B2E852DA(iParam0))
		{
			unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 12);
		}
		func_42(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x6276BF0E9518E43A(iParam0, iVar0 + 1))
			{
				unk_0xD2A9C3F486236CC5(&(uParam1->f_77), func_41(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x6D111CD3D2767A08(iParam0, 0))
		{
			unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x62148293B793073B(&(uParam1->f_77), 11);
		}
		if (unk_0x788C6B35BB3FCF53(iParam0, "IgnoredByQuickSave") && unk_0x3C32210A85B95B19(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x62148293B793073B(&(uParam1->f_77), 27);
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
	
	if (!unk_0xC4B84EB67F78C1F0(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x8A27C3C945C9E921(*iParam0) == 0)
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
			if (unk_0xFA82454B8C070DBB(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x2FA7EA3CA1AD2BF9(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x8730A3E327DA8627(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x8730A3E327DA8627(*iParam0, iVar0);
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
	
	if (unk_0x31F12808DC47A9E5(iParam0))
	{
		if (!unk_0x0FAE113CE72ED842(iParam0))
		{
			if (iParam0 == unk_0x18F7BE9ACB7D08F4())
			{
				*uParam1 = unk_0x952F33F151D40D1A();
			}
			else
			{
				*uParam1 = unk_0x5AD687C3474F04B4(iParam0, 1);
			}
			if (unk_0x31F12808DC47A9E5(*uParam1))
			{
				if (unk_0xC4B84EB67F78C1F0(*uParam1, 0))
				{
					if (iParam2 == 0 || unk_0x15EE504466B7BBD3(unk_0x761660F5CE986DC4(*uParam1, 1), unk_0x761660F5CE986DC4(iParam0, 1), 1) < 100f)
					{
						if (unk_0x0665EB554F07889E(*uParam1, joaat("taxi")))
						{
							if (unk_0x4983F8C51A0C0AF3(*uParam1, -1, 0) != iParam0 && unk_0x4983F8C51A0C0AF3(*uParam1, -1, 0) != 0)
							{
								return 0;
							}
						}
						if (func_45(*uParam1, func_221(), 1))
						{
							sVar0 = unk_0xFCA64981FEF7C913();
							if (!unk_0x9D39145AD645E383(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!unk_0x657B649BA2AD3582(iParam0, 1))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (unk_0x788C6B35BB3FCF53(*uParam1, "IgnoredByQuickSave"))
							{
								if (unk_0x3C32210A85B95B19(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (unk_0x0665EB554F07889E(*uParam1, joaat("blimp")))
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
	
	if (!unk_0x31F12808DC47A9E5(iParam0) || !unk_0xC4B84EB67F78C1F0(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_46(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0xB03A1684359C50A1(Global_104551.f_7199[iVar9], 0))
		{
			if (unk_0x31AAECA8242E34AD(&sVar1, iParam0))
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
	
	if (unk_0x31F12808DC47A9E5(iParam0))
	{
		iVar1 = unk_0x4F69FBD64CDF125B(iParam0);
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
		return Global_104551.f_28020[iParam0 /*29*/];
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
	
	if (!unk_0x0FAE113CE72ED842(iParam0))
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
			uParam1->f_59 = Global_104551.f_2353.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_104551.f_2353.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_104551.f_2353.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_104551.f_2353.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_104551.f_2353.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_104551.f_2353.f_539[iVar0 /*65*/].f_64;
		}
		else if (unk_0x44243F2E2F58B8E3() && unk_0x4F69FBD64CDF125B(iParam0) == unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()))
		{
			if (func_53(161, -1))
			{
				uParam1->f_59 = func_50(2048, Global_70664, 0);
			}
			else
			{
				uParam1->f_59 = func_50(749, Global_70664, 0);
			}
			uParam1->f_60 = func_50(750, Global_70664, 0);
			uParam1->f_61 = func_50(751, Global_70664, 0);
		}
		if (unk_0x44243F2E2F58B8E3() && iParam0 == unk_0x18F7BE9ACB7D08F4())
		{
			if (func_53(161, -1))
			{
				uParam1->f_59 = func_50(2048, Global_70664, 0);
			}
			else
			{
				uParam1->f_59 = func_50(749, Global_70664, 0);
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
	uVar0 = Global_2522855[iParam0 /*3*/][func_51(iParam1)];
	if (unk_0xD194C635833AC189(uVar0, &uVar1, -1))
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
			Global_2522568 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2522568 = 1;
		}
	}
	return iVar0;
}

int func_52()
{
	return Global_1312736;
}

int func_53(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2547154[iParam0 /*3*/][func_51(iParam1)];
	if (unk_0xA17AF9F044C9C70E(uVar0, &uVar1, -1))
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
		*uParam2 = unk_0x62B4434F66D8AEB5(iParam0, iParam1);
		*uParam3 = unk_0x15FEE8AC415BEF7E(iParam0, iParam1);
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
				if (unk_0x2E64174C91365575(iParam0) && unk_0x425D437D4CBBC6E3(iParam0) != -1)
				{
					*uParam2 = unk_0x425D437D4CBBC6E3(iParam0);
					*uParam3 = unk_0x5D4A99501B804292(iParam0);
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
		*uParam2 = unk_0x6363507A3F1C0EFE(iParam0, iParam1);
		*uParam3 = unk_0xFCE96424181023AC(iParam0, iParam1);
		*uParam4 = unk_0x635F829197D5C265(iParam0, iParam1);
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
	return Global_104551.f_2353.f_539.f_4301;
}

void func_57()
{
	int iVar0;
	
	if (unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4()))
	{
		if (func_48(Global_104551.f_2353.f_539.f_4301) != unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()))
		{
			iVar0 = func_47(unk_0x18F7BE9ACB7D08F4());
			if (func_39(iVar0) && (!func_58(14) || Global_103502))
			{
				if (Global_104551.f_2353.f_539.f_4301 != iVar0 && func_39(Global_104551.f_2353.f_539.f_4301))
				{
					Global_104551.f_2353.f_539.f_4302 = Global_104551.f_2353.f_539.f_4301;
				}
				Global_104551.f_2353.f_539.f_4303 = iVar0;
				Global_104551.f_2353.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_104551.f_2353.f_539.f_4301 != 145)
			{
				Global_104551.f_2353.f_539.f_4303 = Global_104551.f_2353.f_539.f_4301;
			}
			return;
		}
	}
	Global_104551.f_2353.f_539.f_4301 = 145;
}

bool func_58(int iParam0)
{
	return Global_35859 == iParam0;
}

void func_59(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = func_47(iParam0);
	if (func_39(iVar0) && !unk_0x0FAE113CE72ED842(iParam0))
	{
		if (iParam0 == unk_0x18F7BE9ACB7D08F4())
		{
			func_60(iParam0, &(Global_104551.f_2353.f_539.f_298[iVar0 /*472*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_104551.f_2353.f_539.f_1715[iVar2 /*4*/][iVar0] = unk_0x7717AD244E17BCED(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0x9670CE10A454F1BB();
					if (Global_104551.f_2353.f_539.f_1715[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_104551.f_2353.f_539.f_1748 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0x8740AF1177AF8A6D(unk_0x8CFC7D6E1DA5D304(), &uVar3);
			if (iVar0 == 0)
			{
				unk_0xD92C8D8AF3C67820(joaat("sp0_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 1)
			{
				unk_0xD92C8D8AF3C67820(joaat("sp1_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 2)
			{
				unk_0xD92C8D8AF3C67820(joaat("sp2_parachute_current_tint"), uVar3, 1);
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
	struct<5> Var4;
	int iVar9;
	int iVar10;
	struct<2> Var11;
	struct<4> Var50;
	int iVar72;
	int iVar73;
	
	if (!unk_0x0FAE113CE72ED842(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*5*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_65(iVar0);
			if (iVar3 != 0)
			{
				Var4.f_0 = unk_0xBBDDEBFD9564D52C(iParam0, func_65(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				Var4.f_3 = 0;
				Var4.f_4 = 0;
				if (Var4.f_0 != 0 && Var4.f_0 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = unk_0x2406A9C8DA99D3F4(iParam0, Var4.f_0);
					if (Var4.f_0 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					Var4.f_3 = unk_0x3A369A0A4E1FD5B7(iParam0, Var4.f_0);
					Var4.f_4 = unk_0x61AF6C49F51AFFB4(iParam0, Var4.f_0);
					if (Var4.f_1 == -1)
					{
						if (!unk_0xE6AB5C185BE01BC6(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*5*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_63(Var4.f_0, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0x149CE5A9BC10146A(iParam0, Var4.f_0, iVar2))
						{
							unk_0xD2A9C3F486236CC5(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_63(Var4.f_0, iVar1);
					}
				}
				*(uParam1[iVar0 /*5*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (50 - 1))
		{
			uParam1->f_221[iVar0 /*5*/].f_1 = 0;
			iVar0++;
		}
		iVar10 = unk_0xA3657E0D395F8A0F();
		iVar9 = 0;
		while (iVar9 < iVar10)
		{
			if ((unk_0x5C134543285617E0(iVar9, &Var11) && !func_62(Var11.f_1)) && iVar72 < 50)
			{
				if (!unk_0x0663FFD85FC79E8F(Var11.f_0))
				{
					Var4.f_0 = Var11.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_3 = 0;
					Var4.f_4 = 0;
					Var4.f_1 = unk_0x2406A9C8DA99D3F4(iParam0, Var4.f_0);
					if (unk_0xBEF481E5CF03DC93(iParam0, Var4.f_0, 0))
					{
						Var4.f_3 = unk_0x3A369A0A4E1FD5B7(iParam0, Var4.f_0);
						Var4.f_4 = unk_0x61AF6C49F51AFFB4(iParam0, Var4.f_0);
					}
					if (Var4.f_1 == -1)
					{
						if (!unk_0xE6AB5C185BE01BC6(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_221[iVar72 /*5*/].f_1 = Var4.f_1;
					iVar73 = 0;
					iVar1 = 0;
					while (iVar1 < unk_0x184BE178B47BBA96(iVar9))
					{
						if (unk_0xFBDC30E38B541C22(iVar9, iVar1, &Var50))
						{
							if (!func_61(Var50.f_3))
							{
								if (unk_0x149CE5A9BC10146A(iParam0, Var4.f_0, Var50.f_3))
								{
									unk_0xD2A9C3F486236CC5(&(Var4.f_2), iVar73);
								}
								iVar73++;
							}
						}
						iVar1++;
					}
				}
				if (Var4.f_0 != 0)
				{
					if (!unk_0xBEF481E5CF03DC93(iParam0, Var4.f_0, 0))
					{
						Var4.f_0 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_221[iVar72 /*5*/] = { Var4 };
				iVar72++;
			}
			iVar9++;
		}
	}
}

int func_61(int iParam0)
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01_SLIDE"):
			return 1;
			break;
	}
	return 0;
}

int func_62(int iParam0)
{
	if (unk_0x44243F2E2F58B8E3())
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
			case joaat("weapon_autoshotgun"):
			case joaat("weapon_minismg"):
			case joaat("weapon_compactlauncher"):
			case joaat("weapon_battleaxe"):
			case joaat("weapon_pipebomb"):
			case joaat("weapon_poolcue"):
			case joaat("weapon_wrench"):
			case joaat("weapon_doubleaction"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_63(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<4> Var43;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 5:
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
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 8:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 8:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 7:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 8:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 9:
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
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
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
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 3:
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
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 5:
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
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
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
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 3:
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
		
		case joaat("weapon_minismg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minismg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_minismg_clip_02");
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_64(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < unk_0x184BE178B47BBA96(iVar1))
					{
						if (unk_0xFBDC30E38B541C22(iVar1, iVar2, &Var43))
						{
							if (!func_61(Var43.f_3))
							{
								if (iVar3 == iParam1)
								{
									return Var43.f_3;
								}
								iVar3++;
							}
						}
						iVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_64(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0xA3657E0D395F8A0F();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0x5C134543285617E0(iVar0, uParam1))
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

int func_65(int iParam0)
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

void func_66(int iParam0)
{
	int iVar0;
	
	iVar0 = func_47(iParam0);
	if (func_39(iVar0) && !unk_0x0FAE113CE72ED842(iParam0))
	{
		Global_104551.f_2353.f_539.f_294[iVar0] = unk_0x061F295089D77639(iParam0);
	}
}

void func_67(var uParam0, int iParam1)
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	int iVar5;
	
	*uParam0 = { unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1) };
	uParam0->f_3 = unk_0x93FDA3BF59E7B77F(unk_0x18F7BE9ACB7D08F4());
	uParam0->f_5 = unk_0xA0F074EA9E24102C(unk_0x18F7BE9ACB7D08F4());
	if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
	{
		uParam0->f_4 = unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304());
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
	else if (unk_0xE7FAF8E78F7D3A73(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (unk_0xB03A1684359C50A1(Global_71100, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (unk_0xB03A1684359C50A1(Global_71100, 5))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (unk_0xB03A1684359C50A1(Global_71100, 6))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (unk_0xB03A1684359C50A1(Global_71100, 7))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (unk_0x338C4427806FEB6D(unk_0x18F7BE9ACB7D08F4()) == unk_0x0E40E816537BFB87(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, 1, 0) || unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, 1, 0))
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
		if (func_71(&iVar0))
		{
			if (func_69(iVar0, &Var1, &uVar4))
			{
				Var1.f_2 = (Var1.f_2 + 1f);
				*uParam0 = { Var1 };
				uParam0->f_3 = uVar4;
			}
		}
		else if (unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0))
		{
			iVar5 = func_221();
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
		else if (unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, 1, 0))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, 1, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_68(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_68(struct<3> Param0, char* sParam3, struct<3> Param4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x311945498D684788(Param0))
	{
		iVar0 = unk_0x0E40E816537BFB87(Param4, sParam3);
		if (!unk_0xB79050CDE709F080(iVar0))
		{
			return 0;
		}
		iVar1 = unk_0x1FD2682AAB3A901A(Param0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_69(int iParam0, var uParam1, var uParam2)
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
		
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !func_70(*uParam1, 0f, 0f, 0f, 0);
}

bool func_70(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_71(var uParam0)
{
	if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0) && !unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		if (func_92())
		{
			*uParam0 = func_77(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 0), 6, -1, 0, 1, -1);
			if (func_76(*uParam0) && !func_72(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_72(int iParam0)
{
	return func_73(iParam0, 0, 1);
}

int func_73(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0xB03A1684359C50A1(Global_92881.f_1322[iParam0], iParam1);
	}
	else if (unk_0x44243F2E2F58B8E3())
	{
		if (func_75() == 0)
		{
			return unk_0xB03A1684359C50A1(func_50(func_74(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xB03A1684359C50A1(Global_104551.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_74(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 824;
			break;
		
		case 1:
			return 825;
			break;
		
		case 2:
			return 826;
			break;
		
		case 3:
			return 827;
			break;
		
		case 4:
			return 828;
			break;
		
		case 5:
			return 829;
			break;
		
		case 6:
			return 830;
			break;
		
		case 7:
			return 831;
			break;
		
		case 8:
			return 832;
			break;
		
		case 9:
			return 833;
			break;
		
		case 10:
			return 834;
			break;
		
		case 11:
			return 835;
			break;
		
		case 12:
			return 836;
			break;
		
		case 13:
			return 837;
			break;
		
		case 14:
			return 838;
			break;
		
		case 15:
			return 840;
			break;
		
		case 16:
			return 841;
			break;
		
		case 17:
			return 842;
			break;
		
		case 18:
			return 843;
			break;
		
		case 19:
			return 844;
			break;
		
		case 20:
			return 845;
			break;
		
		case 21:
			return 846;
			break;
		
		case 22:
			return 847;
			break;
		
		case 23:
			return 848;
			break;
		
		case 24:
			return 849;
			break;
		
		case 25:
			return 850;
			break;
		
		case 26:
			return 851;
			break;
		
		case 27:
			return 852;
			break;
		
		case 28:
			return 853;
			break;
		
		case 29:
			return 854;
			break;
		
		case 30:
			return 855;
			break;
		
		case 31:
			return 856;
			break;
		
		case 32:
			return 857;
			break;
		
		case 33:
			return 858;
			break;
		
		case 34:
			return 859;
			break;
		
		case 35:
			return 860;
			break;
		
		case 36:
			return 861;
			break;
		
		case 37:
			return 862;
			break;
		
		case 38:
			return 863;
			break;
		
		case 39:
			return 864;
			break;
		
		case 40:
			return 868;
			break;
		
		case 41:
			return 869;
			break;
		
		case 42:
			return 870;
			break;
		
		case 43:
			return 871;
			break;
		
		case 44:
			return 7011;
			break;
		
		case 45:
			return 3791;
			break;
		
		case 46:
			return 5366;
			break;
		
		case 47:
			return 6138;
			break;
		
		default:
			break;
	}
	return 7870;
}

int func_75()
{
	return Global_25233;
}

int func_76(int iParam0)
{
	return func_73(iParam0, 5, 1);
}

int func_77(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 47)
	{
		if (iParam3 == 6 || iParam3 == func_91(iVar0))
		{
			if (!bParam5 || func_90(iVar0))
			{
				fVar1 = unk_0x15EE504466B7BBD3(Param0, func_78(iVar0, 0), 1);
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

Vector3 func_78(int iParam0, bool bParam1)
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
		
		case 45:
			return func_89(Global_94370);
			break;
		
		case 46:
			if (Global_1595526 != func_88())
			{
				if (func_87(Global_1595526))
				{
					return func_80(2, 2);
				}
				else if (func_79(Global_1595526))
				{
					return func_80(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		
		case 47:
			return 510.1f, 4749.5f, -69f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_79(int iParam0)
{
	if (iParam0 != func_88())
	{
		if ((unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_236, 0) || unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_236, 1)) || unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_236, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_80(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var6;
	
	Var6 = { 1000000f, 1000000f, 1000000f };
	if (Global_1595526 != func_88())
	{
		if (iParam1 == 3)
		{
			if (func_81(iParam0, 1, &Var0, 0, 0))
			{
				Var6 = { Var0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (unk_0xB03A1684359C50A1(Global_1595681[Global_1595526 /*678*/].f_266.f_236, 4))
			{
				if (func_81(iParam0, 1, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[Global_1595526 /*678*/].f_266.f_236, 5))
			{
				if (func_81(iParam0, 2, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
		}
	}
	return Var6;
}

int func_81(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	struct<3> Var6;
	struct<4> Var12;
	struct<3> Var18;
	
	if (!func_86(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_86(iParam1, &Var6))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var12 = { func_84(iParam0) };
	}
	else
	{
		Var12 = { func_83(iParam0) };
	}
	Var18 = { Var12 - Var0 };
	Var18 = { func_82(Var18, -Var0.f_3.f_2) };
	Var18 = { func_82(Var18, Var6.f_3.f_2) };
	*uParam2 = { unk_0xA89DC5E1C1F12DBF(Var6, 0f, Var18) };
	uParam2->f_3 = { Var12.f_3 };
	return 1;
}

Vector3 func_82(struct<3> Param0, float fParam3)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	
	fVar3 = unk_0x0BADBFA3B172435F(fParam3);
	fVar4 = unk_0xD0FFB162F40A139C(fParam3);
	Var0.f_0 = ((Param0.f_0 * fVar4) - (Param0.f_1 * fVar3));
	Var0.f_1 = ((Param0.f_0 * fVar3) + (Param0.f_1 * fVar4));
	Var0.f_2 = Param0.f_2;
	return Var0;
}

struct<6> func_83(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 1:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 2:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 3:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 4:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 5:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 6:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 7:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 8:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
	}
	return Var0;
}

struct<6> func_84(int iParam0)
{
	return func_85(iParam0);
}

struct<6> func_85(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1105.22f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 1:
			Var0 = { 1104.105f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 19:
			Var0 = { 1105.22f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 20:
			Var0 = { 1104.105f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 2:
			Var0 = { 1102f, -3011.925f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { 1103f, -3010f, -38.125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { 1103.213f, -3013.483f, -39.03f };
			Var0.f_3 = { 0f, 0f, 31.32f };
			break;
		
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101.408f, -3012.32f, -38.45339f };
			break;
		
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103.037f, -3012.318f, -39.99874f };
			break;
		
		case 7:
			Var0 = { 1105.645f, -3012.04f, -39.542f };
			Var0.f_3 = { 0f, 0f, -86.04f };
			break;
		
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104.063f, -3012.368f, -39.99875f };
			break;
		
		case 9:
			Var0 = { 1105.665f, -3012.334f, -38.50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 10:
			Var0 = { 1102.504f, -3012.35f, -39.341f };
			Var0.f_3 = { 0f, 0f, -96.48f };
			break;
		
		case 11:
			Var0 = { 1102.928f, -3012.693f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 12:
			Var0 = { 1102.942f, -3011.315f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 61:
			Var0 = { 1101.994f, -3012.878f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 62:
			Var0 = { 1103.152f, -3013.032f, -38.24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 13:
			Var0 = { 1102.465f, -3009.515f, -39.341f };
			Var0.f_3 = { 0f, 0f, -12.96f };
			break;
		
		case 14:
			Var0 = { 1102.917f, -3009.525f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 15:
			Var0 = { 1102.922f, -3010.887f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 63:
			Var0 = { 1101.682f, -3009.227f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { 1102.453f, -3008.51f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 16:
			Var0 = { 1104.684f, -3009.561f, -39.341f };
			Var0.f_3 = { 0f, 0f, 169.56f };
			break;
		
		case 17:
			Var0 = { 1104.34f, -3008.698f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 18:
			Var0 = { 1104.344f, -3009.618f, -37.98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 65:
			Var0 = { 1105.459f, -3009.793f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 66:
			Var0 = { 1104.783f, -3010.433f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 44:
			Var0 = { 1104.025f, -3007.316f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 21:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 22:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 23:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 24:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 25:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 26:
			Var0 = { 1102.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 27:
			Var0 = { 1102.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 28:
			Var0 = { 1105.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 29:
			Var0 = { 1105.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 30:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 31:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 32:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 33:
			Var0 = { 1102.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 34:
			Var0 = { 1102.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 35:
			Var0 = { 1105.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 36:
			Var0 = { 1105.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 37:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 38:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 39:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
		
		case 40:
			Var0 = { 1102.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 41:
			Var0 = { 1102.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 42:
			Var0 = { 1105.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 43:
			Var0 = { 1105.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 45:
			Var0 = { 1101f, -3011.9f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 46:
			Var0 = { 1102f, -3010f, -38.115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 47:
			Var0 = { 1105.174f, -3004.16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 48:
			Var0 = { 1105.175f, -3005.818f, -37.91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 49:
			Var0 = { 1106.6f, -3000.847f, -39.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 50:
			Var0 = { 1106.601f, -3002.171f, -37.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 51:
			Var0 = { 1101.95f, -3011.9f, -39.2f };
			Var0.f_3 = { 0f, 0f, 49.5f };
			break;
		
		case 52:
			Var0 = { 1101.95f, -3010f, -39.2f };
			Var0.f_3 = { 0f, 0f, 130.32f };
			break;
		
		case 53:
			Var0 = { 1105.16f, -3009.06f, -39.2f };
			Var0.f_3 = { 0f, 0f, -44.64f };
			break;
		
		case 54:
			Var0 = { 1102.476f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 55:
			Var0 = { 1099f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 56:
			Var0 = { 1103.593f, -3008.27f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 57:
			Var0 = { 1103.565f, -3014f, -39.988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 58:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 59:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 60:
			Var0 = { 1103.55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 67:
			Var0 = { 1103.55f, -3013.762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 68:
			Var0 = { 1103.55f, -3006.186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103.6f, -3013.933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_86(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

int func_87(int iParam0)
{
	if (iParam0 != func_88())
	{
		if ((unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_236, 3) || unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_236, 4)) || unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_236, 5))
		{
			return 1;
		}
	}
	return 0;
}

int func_88()
{
	return -1;
}

Vector3 func_89(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
			break;
		
		case 2:
			return 1060f, -2990f, -35f;
			break;
		
		case 3:
			return 974.9542f, -3000.091f, -35f;
			break;
		
		case 6:
			return -1586.36f, -566.6f, 106.17f;
			break;
		
		case 7:
			return -1389.87f, -465.17f, 82.68f;
			break;
		
		case 8:
			return -145.81f, -590.2f, 171.13f;
			break;
		
		case 9:
			return -62.49f, -823.55f, 288.74f;
			break;
		
		case 4:
			return 1102.515f, -3158.888f, -38.5186f;
			break;
		
		case 5:
			return 1005.861f, -3156.162f, -39.907f;
			break;
		
		case 10:
			return 1103.562f, -3000f, -40f;
			break;
		
		case 11:
			return 938.3077f, -3196.112f, -100f;
			break;
		
		case 12:
			return -1266.802f, -3014.836f, -49.4895f;
			break;
		
		case 13:
			return 520.0001f, 4750f, -70f;
			break;
		
		case 14:
			return 345.0041f, 4842.001f, -59.9997f;
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_90(int iParam0)
{
	return func_73(iParam0, 0, 0);
}

int func_91(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
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
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
	}
	return 6;
}

bool func_92()
{
	return Global_92881.f_315 > 0;
}

var func_93()
{
	var uVar0;
	
	func_103(&uVar0, unk_0xB093145A4ED05C87());
	func_102(&uVar0, unk_0x4BF279EB036481A0());
	func_101(&uVar0, unk_0xF0B96EE16BA9FBE8());
	func_96(&uVar0, unk_0x518720E0DE404FFC());
	func_95(&uVar0, unk_0x5E3E9A684A609866());
	func_94(&uVar0, unk_0xFBE778F13510E585());
	return uVar0;
}

void func_94(var uParam0, int iParam1)
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

void func_95(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_96(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_100(*uParam0);
	iVar1 = func_98(*uParam0);
	if (iParam1 < 1 || iParam1 > func_97(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_97(int iParam0, int iParam1)
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

var func_98(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_99(unk_0xB03A1684359C50A1(iParam0, 31), -1, 1)) + 2011;
}

int func_99(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_100(int iParam0)
{
	return iParam0 & 15;
}

void func_101(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_102(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_103(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

void func_104(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (unk_0x35D499EE14C3D367() || unk_0x929A0C5D6A986B4F())
	{
		uVar0 = iParam0;
		unk_0x7B7CECD66CFA2F8F(9, &uVar0, 1, 1);
	}
	else if (unk_0xC57A05B38A912073() || unk_0x0A8A596EB9C068FA())
	{
		StringCopy(&cVar1, "SPRC_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x096B0E6C117BD7BF(9, &cVar1);
	}
}

void func_105(char* sParam0, var uParam1, int iParam2)
{
	if (!unk_0xFAFFA408239A026B(&Global_90044))
	{
		unk_0x4F1472C5C6D453BB(&Global_90044, 0, 0, 0, 1, 0);
		StringCopy(&Global_90044, "", 64);
	}
	StringCopy(&Global_90044, sParam0, 64);
	unk_0x77E88B6C1513A778(sParam0, uParam1, iParam2, func_211(0));
}

struct<2> func_106(int iParam0)
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

void func_107(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_108(uParam1, "Abigail1", func_12(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_109(iParam0), 1, 0);
			break;
		
		case 1:
			func_108(uParam1, "Abigail2", func_12(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_109(iParam0), 1, 0);
			break;
		
		case 2:
			func_108(uParam1, "Barry1", func_12(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_109(iParam0), 1, 0);
			break;
		
		case 3:
			func_108(uParam1, "Barry2", func_12(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_109(iParam0), 1, 1);
			break;
		
		case 4:
			func_108(uParam1, "Barry3", func_12(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_109(iParam0), 0, 0);
			break;
		
		case 5:
			func_108(uParam1, "Barry3A", func_12(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_109(iParam0), 0, 1);
			break;
		
		case 6:
			func_108(uParam1, "Barry3C", func_12(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_109(iParam0), 0, 1);
			break;
		
		case 7:
			func_108(uParam1, "Barry4", func_12(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_109(iParam0), 0, 0);
			break;
		
		case 8:
			func_108(uParam1, "Dreyfuss1", func_12(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_109(iParam0), 0, 0);
			break;
		
		case 9:
			func_108(uParam1, "Epsilon1", func_12(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_109(iParam0), 0, 0);
			break;
		
		case 10:
			func_108(uParam1, "Epsilon2", func_12(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_109(iParam0), 1, 0);
			break;
		
		case 11:
			func_108(uParam1, "Epsilon3", func_12(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_109(iParam0), 0, 0);
			break;
		
		case 12:
			func_108(uParam1, "Epsilon4", func_12(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_109(iParam0), 0, 0);
			break;
		
		case 13:
			func_108(uParam1, "Epsilon5", func_12(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_109(iParam0), 1, 0);
			break;
		
		case 14:
			func_108(uParam1, "Epsilon6", func_12(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_109(iParam0), 0, 1);
			break;
		
		case 15:
			func_108(uParam1, "Epsilon7", func_12(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_109(iParam0), 0, 0);
			break;
		
		case 16:
			func_108(uParam1, "Epsilon8", func_12(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_109(iParam0), 1, 0);
			break;
		
		case 17:
			func_108(uParam1, "Extreme1", func_12(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_109(iParam0), 0, 1);
			break;
		
		case 18:
			func_108(uParam1, "Extreme2", func_12(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_109(iParam0), 0, 1);
			break;
		
		case 19:
			func_108(uParam1, "Extreme3", func_12(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_109(iParam0), 0, 1);
			break;
		
		case 20:
			func_108(uParam1, "Extreme4", func_12(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_109(iParam0), 0, 0);
			break;
		
		case 21:
			func_108(uParam1, "Fanatic1", func_12(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_109(iParam0), 1, 0);
			break;
		
		case 22:
			func_108(uParam1, "Fanatic2", func_12(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_109(iParam0), 1, 0);
			break;
		
		case 23:
			func_108(uParam1, "Fanatic3", func_12(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_109(iParam0), 0, 1);
			break;
		
		case 24:
			func_108(uParam1, "Hao1", func_12(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_109(iParam0), 0, 1);
			break;
		
		case 25:
			func_108(uParam1, "Hunting1", func_12(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_109(iParam0), 0, 1);
			break;
		
		case 26:
			func_108(uParam1, "Hunting2", func_12(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_109(iParam0), 0, 1);
			break;
		
		case 27:
			func_108(uParam1, "Josh1", func_12(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_109(iParam0), 1, 0);
			break;
		
		case 28:
			func_108(uParam1, "Josh2", func_12(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_109(iParam0), 1, 1);
			break;
		
		case 29:
			func_108(uParam1, "Josh3", func_12(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_109(iParam0), 1, 1);
			break;
		
		case 30:
			func_108(uParam1, "Josh4", func_12(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_109(iParam0), 1, 0);
			break;
		
		case 31:
			func_108(uParam1, "Maude1", func_12(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_109(iParam0), 0, 1);
			break;
		
		case 32:
			func_108(uParam1, "Minute1", func_12(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_109(iParam0), 0, 1);
			break;
		
		case 33:
			func_108(uParam1, "Minute2", func_12(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_109(iParam0), 0, 1);
			break;
		
		case 34:
			func_108(uParam1, "Minute3", func_12(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_109(iParam0), 0, 1);
			break;
		
		case 35:
			func_108(uParam1, "MrsPhilips1", func_12(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_109(iParam0), 0, 0);
			break;
		
		case 36:
			func_108(uParam1, "MrsPhilips2", func_12(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_109(iParam0), 0, 0);
			break;
		
		case 37:
			func_108(uParam1, "Nigel1", func_12(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_109(iParam0), 1, 0);
			break;
		
		case 38:
			func_108(uParam1, "Nigel1A", func_12(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_109(iParam0), 1, 1);
			break;
		
		case 39:
			func_108(uParam1, "Nigel1B", func_12(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_109(iParam0), 1, 1);
			break;
		
		case 40:
			func_108(uParam1, "Nigel1C", func_12(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_109(iParam0), 1, 1);
			break;
		
		case 41:
			func_108(uParam1, "Nigel1D", func_12(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_109(iParam0), 1, 1);
			break;
		
		case 42:
			func_108(uParam1, "Nigel2", func_12(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_109(iParam0), 1, 1);
			break;
		
		case 43:
			func_108(uParam1, "Nigel3", func_12(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_109(iParam0), 1, 1);
			break;
		
		case 44:
			func_108(uParam1, "Omega1", func_12(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_109(iParam0), 0, 0);
			break;
		
		case 45:
			func_108(uParam1, "Omega2", func_12(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_109(iParam0), 0, 0);
			break;
		
		case 46:
			func_108(uParam1, "Paparazzo1", func_12(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_109(iParam0), 0, 1);
			break;
		
		case 47:
			func_108(uParam1, "Paparazzo2", func_12(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_109(iParam0), 0, 1);
			break;
		
		case 48:
			func_108(uParam1, "Paparazzo3", func_12(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_109(iParam0), 0, 0);
			break;
		
		case 49:
			func_108(uParam1, "Paparazzo3A", func_12(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_109(iParam0), 0, 1);
			break;
		
		case 50:
			func_108(uParam1, "Paparazzo3B", func_12(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_109(iParam0), 0, 1);
			break;
		
		case 51:
			func_108(uParam1, "Paparazzo4", func_12(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_109(iParam0), 0, 0);
			break;
		
		case 52:
			func_108(uParam1, "Rampage1", func_12(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_109(iParam0), 0, 0);
			break;
		
		case 54:
			func_108(uParam1, "Rampage3", func_12(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_109(iParam0), 1, 0);
			break;
		
		case 55:
			func_108(uParam1, "Rampage4", func_12(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_109(iParam0), 1, 0);
			break;
		
		case 56:
			func_108(uParam1, "Rampage5", func_12(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_109(iParam0), 0, 0);
			break;
		
		case 53:
			func_108(uParam1, "Rampage2", func_12(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_109(iParam0), 1, 0);
			break;
		
		case 57:
			func_108(uParam1, "TheLastOne", func_12(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_109(iParam0), 0, 1);
			break;
		
		case 58:
			func_108(uParam1, "Tonya1", func_12(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_109(iParam0), 0, 1);
			break;
		
		case 59:
			func_108(uParam1, "Tonya2", func_12(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_109(iParam0), 0, 1);
			break;
		
		case 60:
			func_108(uParam1, "Tonya3", func_12(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_109(iParam0), 0, 1);
			break;
		
		case 61:
			func_108(uParam1, "Tonya4", func_12(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_109(iParam0), 0, 1);
			break;
		
		case 62:
			func_108(uParam1, "Tonya5", func_12(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_109(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_108(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_109(int iParam0)
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

int func_110(var* uParam0)
{
	int iVar0;
	
	if (func_140(&(uParam0->f_1)))
	{
		if (!unk_0xFAFFA408239A026B(&(uParam0->f_9)))
		{
			func_130(1);
			func_128(uParam0, 1, func_129(*uParam0));
		}
		if (uParam0->f_27)
		{
			if (func_127(*uParam0))
			{
				while (!unk_0xB4FD6D3F49C8B3B4(unk_0x18F7BE9ACB7D08F4()))
				{
					func_187();
					unk_0x4EDE34FBADD967A6(0);
				}
			}
		}
		func_111(*uParam0);
		iVar0 = unk_0xB8BA7F44DF1575E1(&(uParam0->f_1), uParam0, 61, 22000);
		unk_0x2130D1396EE39C8E(&(uParam0->f_1));
		if (unk_0xF76283B558B032AE())
		{
			func_361("Initial cutscene loaded and passing to RC mission.");
			unk_0x2B843F566FEA0930(iVar0);
		}
		else
		{
			func_361("Initial cutscene wasn't loaded in time to pass to RC mission.");
			unk_0x183705334A83083E();
		}
		return 1;
	}
	return 0;
}

void func_111(int iParam0)
{
	struct<2> Var0;
	
	func_126();
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		unk_0x764AFC5A3A16C2B0(unk_0x18F7BE9ACB7D08F4(), 32, 0);
		unk_0x764AFC5A3A16C2B0(unk_0x18F7BE9ACB7D08F4(), 250, 0);
	}
	if (func_125(iParam0))
	{
		unk_0xE8144E7C72E963DC(unk_0x18F7BE9ACB7D08F4(), 0);
	}
	unk_0x9A63F1CF5AD1028E(unk_0x8CFC7D6E1DA5D304(), 1);
	unk_0x000ED7BEBF44F5EA(0, 1);
	unk_0x000ED7BEBF44F5EA(3, 1);
	unk_0x000ED7BEBF44F5EA(2, 1);
	if (Global_36991 == 1)
	{
		if (func_123(unk_0x18F7BE9ACB7D08F4()))
		{
			func_114(unk_0x18F7BE9ACB7D08F4());
		}
	}
	if (!func_202())
	{
		if (iParam0 < 63)
		{
			func_112(iParam0);
			Var0 = { func_12(iParam0) };
			unk_0xC5FD44365E5AB875(1, &Var0);
		}
	}
}

void func_112(int iParam0)
{
	if (iParam0 < 63)
	{
		func_113();
		Global_71107 = iParam0;
		Global_71106 = 0;
		Global_71109 = 7;
	}
}

void func_113()
{
	if (Global_71106 != 6)
	{
	}
	if (Global_71111)
	{
		unk_0xB9C0BA93B50CE575(15);
		Global_71111 = 0;
		Global_17301.f_7931 = 0;
	}
	Global_71106 = 6;
	Global_71108 = -1;
	Global_71107 = -1;
}

void func_114(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!unk_0x31F12808DC47A9E5(iParam0))
	{
		return;
	}
	iVar0 = func_122(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_36794[iVar0 /*5*/];
		func_117(1, iVar1, 1);
		return;
	}
	iVar2 = func_116(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_115(iVar2);
}

void func_115(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_36768[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_36768[iParam0 /*5*/].f_1 == unk_0x18F7BE9ACB7D08F4())
		{
			Global_36989 = 0;
		}
	}
	Global_36768[iParam0 /*5*/] = 13;
	Global_36768[iParam0 /*5*/].f_1 = 0;
	Global_36768[iParam0 /*5*/].f_2 = 0;
	Global_36768[iParam0 /*5*/].f_3 = 0;
	Global_36768[iParam0 /*5*/].f_4 = 0;
	Global_36767 = (Global_36767 - 1);
	if (Global_36767 < 0)
	{
		Global_36767 = 0;
	}
}

int func_116(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_36768[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_117(int iParam0, int iParam1, int iParam2)
{
	func_118(iParam0, iParam1, iParam2, 0, 0);
}

void func_118(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
	if (func_120(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_119();
	if (iVar0 == -1)
	{
		return;
	}
	Global_36875[iVar0 /*5*/] = iParam0;
	Global_36875[iVar0 /*5*/].f_1 = iParam1;
	Global_36875[iVar0 /*5*/].f_2 = iParam2;
	Global_36875[iVar0 /*5*/].f_3 = iParam3;
	Global_36875[iVar0 /*5*/].f_4 = iParam4;
}

int func_119()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36875[iVar0 /*5*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_120(int iParam0, int iParam1, int iParam2)
{
	if (func_121(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_121(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_36875[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_36875[iVar0 /*5*/])
			{
				if (iParam1 == Global_36875[iVar0 /*5*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_122(int iParam0)
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
		if (!Global_36794[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_36794[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_123(int iParam0)
{
	if (func_124(iParam0))
	{
		if (!unk_0x0FAE113CE72ED842(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_124(int iParam0)
{
	if (unk_0x31F12808DC47A9E5(iParam0))
	{
		if (!unk_0x74C2FE037DFC8B4A(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_125(int iParam0)
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

void func_126()
{
	if (Global_3128[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3128[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3128[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3128[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3128[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3128[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	unk_0x62148293B793073B(&Global_2323, 25);
	unk_0xD2A9C3F486236CC5(&Global_2324, 11);
}

int func_127(int iParam0)
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

void func_128(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_124(uParam0->f_28[iVar0]))
		{
			unk_0x8BA533846256EA8E(uParam0->f_28[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_124(uParam0->f_35[iVar0]))
		{
			unk_0x8BA533846256EA8E(uParam0->f_35[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_124(uParam0->f_41[iVar0]))
		{
			unk_0x8BA533846256EA8E(uParam0->f_41[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		}
		iVar0++;
	}
	if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		unk_0x8BA533846256EA8E(unk_0x18F7BE9ACB7D08F4(), iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		unk_0xF74B493CCF90C997(unk_0x18F7BE9ACB7D08F4(), iParam1);
		if (bParam2)
		{
			unk_0x5C7D86C4752CBC68(unk_0x18F7BE9ACB7D08F4(), joaat("weapon_unarmed"), 1);
		}
	}
}

int func_129(int iParam0)
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

void func_130(bool bParam0)
{
	var uVar0;
	
	uVar0 = unk_0x0A91D180DDC7A1B8();
	if (!unk_0xA43E30AC0AF7BE76(uVar0))
	{
		if (bParam0)
		{
		}
		unk_0xF70DE7344EBF0825(uVar0, bParam0, 16);
		unk_0xF70DE7344EBF0825(uVar0, bParam0, 32);
	}
	func_131(1, 1, 0, 0);
}

void func_131(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x23E72737746790F6(unk_0x8CFC7D6E1DA5D304());
		unk_0x9A63F1CF5AD1028E(unk_0x8CFC7D6E1DA5D304(), 1);
		unk_0x10196728B08EFD0D(unk_0x8CFC7D6E1DA5D304(), 1);
		func_139(1);
		unk_0x11E17A11B13AC43A();
		unk_0x6F202559EF4E43CE();
		if (Global_14453.f_1 > 3)
		{
			if (unk_0x36328FCBA2944E1F())
			{
				unk_0xBE97F4E2B659331B(0);
			}
			if (!func_138())
			{
				Global_14453.f_1 = 3;
			}
			Global_15756 = 5;
		}
		func_137(1, iParam3, iParam2, 0);
		Global_55907 = 1;
		Global_68216 = 1;
		Global_70850 = 1;
	}
	else
	{
		func_139(0);
		unk_0x100AF4FA3B247263();
		Global_55907 = 0;
		if (bParam1)
		{
			unk_0x5D7F2DFCC7EFF8A1();
		}
		unk_0x9A63F1CF5AD1028E(unk_0x8CFC7D6E1DA5D304(), 0);
		unk_0x10196728B08EFD0D(unk_0x8CFC7D6E1DA5D304(), 0);
		func_137(0, iParam3, iParam2, 0);
		if (unk_0x44243F2E2F58B8E3())
		{
			if (((!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()) && !func_135(unk_0x8CFC7D6E1DA5D304())) && !func_133(unk_0x8CFC7D6E1DA5D304(), 0)) && !func_132())
			{
				unk_0xF74B493CCF90C997(unk_0x18F7BE9ACB7D08F4(), 0);
			}
		}
		else if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()) && !func_135(unk_0x8CFC7D6E1DA5D304()))
		{
			unk_0xF74B493CCF90C997(unk_0x18F7BE9ACB7D08F4(), 0);
		}
		Global_70850 = 0;
	}
}

bool func_132()
{
	return unk_0xB03A1684359C50A1(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_39.f_18, 14);
}

bool func_133(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x8CFC7D6E1DA5D304())
	{
		bVar0 = func_134(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1595681[iParam0 /*678*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x4AF13BCD120BCDBC(iParam0))
		{
			bVar0 = unk_0x1BE7B010C9B9841E(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_134(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_52();
	}
	if (Global_1312834[iVar1] == 1)
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

int func_135(int iParam0)
{
	if (func_133(iParam0, 0))
	{
		return 1;
	}
	if (func_136())
	{
		if (iParam0 == unk_0x8CFC7D6E1DA5D304())
		{
			return 1;
		}
	}
	if (unk_0xB03A1684359C50A1(Global_2422724[iParam0 /*420*/].f_210, 2))
	{
		return 1;
	}
	return 0;
}

bool func_136()
{
	return unk_0xB03A1684359C50A1(Global_2359302, 3);
}

int func_137(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xC339C5C5B5E8BC5B())
	{
		if (unk_0x511092EDBCB2F66B() != iParam0 && uParam2)
		{
			unk_0x0602616B0914EF8A(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_138()
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_139(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xD2A9C3F486236CC5(&Global_2323, 13);
	}
	else
	{
		unk_0x62148293B793073B(&Global_2323, 13);
	}
}

int func_140(char* sParam0)
{
	if (!unk_0xFAFFA408239A026B(uParam0))
	{
		unk_0xC8A5933869E73673(uParam0);
		while (!unk_0xC040FCA5F6E73B3E(sParam0))
		{
			unk_0xC8A5933869E73673(sParam0);
			unk_0x4EDE34FBADD967A6(0);
		}
		return 1;
	}
	func_361("Attempting to launch invalid script file [TERMINATING]");
	return 0;
}

void func_141()
{
	Global_14622 = 0;
	func_142();
}

void func_142()
{
	unk_0x815093B4702C59D8();
	Global_16767 = 0;
	if ((unk_0x36328FCBA2944E1F() || Global_14453.f_1 == 9) || Global_14452 == 1)
	{
		unk_0xBE97F4E2B659331B(0);
		Global_15756 = 6;
		Global_14453.f_1 = 3;
		return;
	}
	if (unk_0x85FDEF76CDBAD589())
	{
		unk_0xBE97F4E2B659331B(1);
		Global_15756 = 6;
		return;
	}
}

int func_143()
{
	if (Global_15756 != 0 || unk_0x85FDEF76CDBAD589())
	{
		return 1;
	}
	return 0;
}

int func_144(var uParam0, bool bParam1)
{
	struct<27> Var0;
	
	if (Global_70852)
	{
		func_361("IS_RC_FINE_AND_IN_RANGE(): The game is running Multiplayer [TERMINATING]");
		return 0;
	}
	func_107(*uParam0, &Var0);
	if ((func_186(*uParam0) || func_184(*uParam0)) || Global_71097 == 1)
	{
		return 1;
	}
	if (!unk_0x6E65FD9B611945AD())
	{
		func_361("IS_RC_FINE_AND_IN_RANGE(): Player out of range [TERMINATING]");
		return 0;
	}
	if (func_176(*uParam0))
	{
		if (*uParam0 == 19)
		{
			func_175(uParam0->f_28[0]);
		}
		func_361("IS_RC_FINE_AND_IN_RANGE(): Script denied by RC Controller [TERMINATING]");
		return 0;
	}
	if (uParam0->f_25 == 1)
	{
		if (!func_155(uParam0, 1, 0))
		{
			return 0;
		}
	}
	else if (uParam0->f_16 == 0)
	{
		if (!func_155(uParam0, 0, 0))
		{
			return 0;
		}
	}
	if (((((*uParam0 == 16 || *uParam0 == 9) || *uParam0 == 18) || *uParam0 == 22) || *uParam0 == 32) || *uParam0 == 51)
	{
		if (!func_152(uParam0, 1, 1))
		{
			if (*uParam0 == 16)
			{
				func_151(uParam0);
			}
			else
			{
				func_149(uParam0);
			}
			return 0;
		}
	}
	else if (*uParam0 == 24)
	{
		if (!func_152(uParam0, 0, 1))
		{
			func_149(uParam0);
			return 0;
		}
	}
	else if (*uParam0 == 6)
	{
		if (!func_152(uParam0, 0, 1))
		{
			return 0;
		}
	}
	else if (uParam0->f_26 == 1)
	{
		if (!func_152(uParam0, 1, 0))
		{
			func_149(uParam0);
			return 0;
		}
	}
	else if (uParam0->f_16 == 2 || uParam0->f_16 == 1)
	{
		if (!func_152(uParam0, 0, 0))
		{
			func_149(uParam0);
			return 0;
		}
	}
	if (uParam0->f_16 == 2 || uParam0->f_16 == 1)
	{
		if (func_124(uParam0->f_35[0]))
		{
			if (!unk_0x8673F2F1802ADEF7(uParam0->f_35[0], Var0.f_6, 8f, 8f, 8f, 0, 1, 0))
			{
				return 0;
			}
		}
	}
	if (*uParam0 == 10)
	{
		if (unk_0x7824A0A217B1F7A8(-1, uParam0->f_17[0 /*3*/], 8f))
		{
			func_361("IS_RC_FINE_AND_IN_RANGE(): Explosion near mission trigger [TERMINATING]");
			return 0;
		}
	}
	if (Var0.f_4 != 17)
	{
		if (!unk_0xB03A1684359C50A1(Var0.f_26, func_221()))
		{
			func_361("IS_RC_FINE_AND_IN_RANGE(): No longer a valid player character to launch mission");
			return 0;
		}
	}
	if (func_148(&(uParam0->f_48)) && bParam1)
	{
		func_145(uParam0->f_28[0], &(uParam0->f_48), *uParam0);
	}
	return 1;
}

void func_145(int iParam0, var uParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (func_124(iParam0))
	{
		switch (uParam1->f_3)
		{
			case 1:
				if (func_148(uParam1))
				{
					if (unk_0x028356968FDD2DF2(*uParam1))
					{
						unk_0xD9FCA20C1C5553F7(iParam0);
						if (iParam2 != 21)
						{
							if (func_70(uParam1->f_5, 0f, 0f, 0f, 0))
							{
								unk_0xB5746603774C4C9D(iParam0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
							}
							else
							{
								unk_0xC8BEB049F3BFC0AB(&uVar0);
								if (func_147(uParam1))
								{
									unk_0x981A584B2E775D45(0, *uParam1, uParam1->f_2, uParam1->f_5, uParam1->f_8, 1000f, -8f, -1, 262152, 0, 2, 0);
								}
								else
								{
									unk_0x981A584B2E775D45(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 1000f, -8f, -1, 262152, 0, 2, 0);
								}
								unk_0x981A584B2E775D45(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 0);
								unk_0xAFDA7B8F83B2CA58(uVar0);
								unk_0x73F69DD57B7E92A9(iParam0, uVar0);
								unk_0x56C7B20E11B37066(&uVar0);
							}
						}
						else
						{
							unk_0x981A584B2E775D45(iParam0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 3);
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
				if (!func_147(uParam1) || !unk_0xDFEB6D8BCE2B43F6(iParam0, *uParam1, uParam1->f_2, 3))
				{
					if (func_146(iParam2) && !unk_0x3821A75ECC8A0D5B(iParam0, unk_0x18F7BE9ACB7D08F4(), 25f))
					{
						unk_0x8F467CFC5FBBCE77(iParam0, unk_0x18F7BE9ACB7D08F4(), 0);
						uParam1->f_3 = 5;
					}
					else if ((func_147(uParam1) && uParam1->f_4 == 0) && unk_0x15EE504466B7BBD3(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), unk_0x761660F5CE986DC4(iParam0, 1), 1) < 20f)
					{
						uParam1->f_3 = 3;
					}
				}
				break;
			
			case 3:
				unk_0xC8BEB049F3BFC0AB(&uVar1);
				if (func_70(uParam1->f_5, 0f, 0f, 0f, 0))
				{
					unk_0xB5746603774C4C9D(0, *uParam1, uParam1->f_2, 4f, -4f, -1, 262144, 0, 0, 0, 0);
					unk_0xB5746603774C4C9D(0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
				}
				else
				{
					unk_0x981A584B2E775D45(0, *uParam1, uParam1->f_2, uParam1->f_5, uParam1->f_8, 4f, -4f, -1, 262152, 0, 2, 0);
					unk_0x981A584B2E775D45(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 0);
				}
				unk_0xAFDA7B8F83B2CA58(uVar1);
				unk_0x73F69DD57B7E92A9(iParam0, uVar1);
				unk_0x56C7B20E11B37066(&uVar1);
				uParam1->f_4 = 1;
				if (func_146(iParam2))
				{
					uParam1->f_3 = 2;
				}
				else
				{
					uParam1->f_3 = 0;
				}
				break;
			
			case 5:
				if (!func_146(iParam2) || unk_0x3821A75ECC8A0D5B(iParam0, unk_0x18F7BE9ACB7D08F4(), 10f))
				{
					if (func_70(uParam1->f_5, 0f, 0f, 0f, 0))
					{
						unk_0xB5746603774C4C9D(iParam0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
					}
					else
					{
						unk_0x981A584B2E775D45(iParam0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 0);
					}
					uParam1->f_3 = 2;
				}
				break;
			}
	}
}

int func_146(int iParam0)
{
	if (iParam0 == 17 || iParam0 == 20)
	{
		return 1;
	}
	return 0;
}

int func_147(var uParam0)
{
	if (unk_0xFAFFA408239A026B(uParam0->f_2))
	{
		return 0;
	}
	return 1;
}

int func_148(var uParam0)
{
	if (unk_0xFAFFA408239A026B(*uParam0) || unk_0xFAFFA408239A026B(uParam0->f_1))
	{
		return 0;
	}
	return 1;
}

void func_149(var uParam0)
{
	int iVar0;
	var uVar1;
	
	if (*uParam0 == 52)
	{
		func_150(&(uParam0->f_41[1]));
		func_150(&(uParam0->f_41[2]));
	}
	if (func_124(unk_0x18F7BE9ACB7D08F4()))
	{
		iVar0 = 0;
		while (iVar0 <= (uParam0->f_28 - 1))
		{
			if (func_123(uParam0->f_28[iVar0]))
			{
				if (!unk_0x657B649BA2AD3582(uParam0->f_28[iVar0], 0))
				{
					unk_0xF342BF6A7A4C7A8F(uParam0->f_28[iVar0], 1, 0);
					unk_0x73D7E57BF0ED7FEB(uParam0->f_28[0], 0);
				}
				unk_0x10F31830C95ED2E5(uParam0->f_28[iVar0], 1);
				if (*uParam0 == 34)
				{
					if (func_124(uParam0->f_41[0]))
					{
						unk_0xF342BF6A7A4C7A8F(uParam0->f_41[0], 1, 0);
						unk_0x73D7E57BF0ED7FEB(uParam0->f_41[0], 0);
					}
				}
				switch (*uParam0)
				{
					case 19:
						func_175(uParam0->f_28[iVar0]);
						break;
					
					case 8:
						unk_0x831CD0FBFB26EC7E("rcmcollect_paperleadinout@");
						while (!unk_0x028356968FDD2DF2("rcmcollect_paperleadinout@"))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						unk_0xC8BEB049F3BFC0AB(&uVar1);
						unk_0xB5746603774C4C9D(0, "rcmcollect_paperleadinout@", "meditate_getup", 8f, -8f, -1, 8, 0, 0, 0, 0);
						unk_0x9603FB72C3126396(0, unk_0x18F7BE9ACB7D08F4(), 10000f, -1, 0, 0);
						unk_0xAFDA7B8F83B2CA58(uVar1);
						unk_0x73F69DD57B7E92A9(uParam0->f_28[iVar0], uVar1);
						unk_0x56C7B20E11B37066(&uVar1);
						break;
					
					case 0:
					case 1:
						unk_0x831CD0FBFB26EC7E("rcmabigail");
						while (!unk_0x028356968FDD2DF2("rcmabigail"))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						unk_0xC8BEB049F3BFC0AB(&uVar1);
						unk_0xB5746603774C4C9D(0, "rcmabigail", "breakout_base", 8f, -8f, -1, 8, 0, 0, 0, 0);
						unk_0x9603FB72C3126396(0, unk_0x18F7BE9ACB7D08F4(), 10000f, -1, 0, 0);
						unk_0xAFDA7B8F83B2CA58(uVar1);
						unk_0x73F69DD57B7E92A9(uParam0->f_28[iVar0], uVar1);
						unk_0x56C7B20E11B37066(&uVar1);
						break;
					
					case 32:
						unk_0x831CD0FBFB26EC7E("rcmminute1");
						while (!unk_0x028356968FDD2DF2("rcmminute1"))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						unk_0xC8BEB049F3BFC0AB(&uVar1);
						if (iVar0 == 0)
						{
							unk_0xB5746603774C4C9D(0, "rcmminute1", "base_to_idle_joe", 8f, -8f, -1, 32776, 0, 0, 0, 0);
						}
						else
						{
							unk_0xB5746603774C4C9D(0, "rcmminute1", "base_to_idle_josef", 8f, -8f, -1, 32776, 0, 0, 0, 0);
						}
						unk_0x9603FB72C3126396(0, unk_0x18F7BE9ACB7D08F4(), 10000f, -1, 0, 0);
						unk_0xAFDA7B8F83B2CA58(uVar1);
						unk_0x73F69DD57B7E92A9(uParam0->f_28[iVar0], uVar1);
						unk_0x56C7B20E11B37066(&uVar1);
						break;
					
					case 24:
						unk_0x831CD0FBFB26EC7E("special_ped@hao@base");
						while (!unk_0x028356968FDD2DF2("special_ped@hao@base"))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						unk_0xC8BEB049F3BFC0AB(&uVar1);
						unk_0xB5746603774C4C9D(0, "special_ped@hao@base", "hao_exit", 8f, -8f, -1, 520, 0, 0, 0, 0);
						unk_0x9603FB72C3126396(0, unk_0x18F7BE9ACB7D08F4(), 10000f, -1, 0, 0);
						unk_0xAFDA7B8F83B2CA58(uVar1);
						unk_0x73F69DD57B7E92A9(uParam0->f_28[iVar0], uVar1);
						unk_0x56C7B20E11B37066(&uVar1);
						break;
					
					default:
						unk_0x1436BC29BF45FBAE(uParam0->f_28[iVar0]);
						unk_0x9603FB72C3126396(uParam0->f_28[iVar0], unk_0x18F7BE9ACB7D08F4(), 10000f, -1, 0, 0);
						break;
					}
			}
			iVar0++;
		}
	}
}

void func_150(var uParam0)
{
	if (unk_0x31F12808DC47A9E5(*uParam0))
	{
		if (unk_0xA3D5B4AC814DFA69(*uParam0))
		{
			unk_0x964B3F361C3DBDF4(*uParam0, 1, 1);
		}
		unk_0x5BE35A26B9097351(uParam0);
	}
}

void func_151(var uParam0)
{
	int iVar0;
	
	if (func_124(unk_0x18F7BE9ACB7D08F4()))
	{
		iVar0 = 0;
		while (iVar0 <= (uParam0->f_28 - 1))
		{
			if (func_123(uParam0->f_28[iVar0]))
			{
				unk_0x273FE09AE985A00A(uParam0->f_28[iVar0], 1, 0);
				unk_0x40E2910BAF39B1C7(uParam0->f_28[iVar0], 0);
				unk_0x10F31830C95ED2E5(uParam0->f_28[iVar0], 1);
				unk_0x48B25C02FAB9DC81(uParam0->f_28[iVar0], unk_0x18F7BE9ACB7D08F4(), 0, 16);
				unk_0xDBE64C5761554FBF(&(uParam0->f_28[iVar0]));
			}
			iVar0++;
		}
	}
}

int func_152(var uParam0, bool bParam1, bool bParam2)
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
	if (func_123(unk_0x18F7BE9ACB7D08F4()))
	{
		iVar0 = 0;
		while (iVar0 <= iVar1)
		{
			if (unk_0x31F12808DC47A9E5(uParam0->f_35[iVar0]))
			{
				if (unk_0x74C2FE037DFC8B4A(uParam0->f_35[iVar0], 0))
				{
					func_361("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is dead [TERMINATING]");
					return 0;
				}
				if (!unk_0xC4B84EB67F78C1F0(uParam0->f_35[iVar0], 0))
				{
					func_361("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is not driveable [TERMINATING]");
					return 0;
				}
				if (unk_0x1B843A60307EECA4(uParam0->f_35[iVar0], unk_0x18F7BE9ACB7D08F4(), 0))
				{
					func_361("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has been damaged by player [TERMINATING]");
					return 0;
				}
				if (unk_0x0A088F357EF627CA(uParam0->f_35[iVar0]) < 850)
				{
					func_361("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle health is less than 850 [TERMINATING]");
					return 0;
				}
				if (bParam2)
				{
					if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
					{
						if (unk_0x8D11942CD2B49BB5(uParam0->f_35[iVar0], unk_0x18F7BE9ACB7D08F4()) && unk_0x2A72627520A107B5(unk_0x18F7BE9ACB7D08F4()) > 5f)
						{
							func_361("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has collided with the player vehicle at speed [TERMINATING]");
							return 0;
						}
						uVar2 = unk_0x952F33F151D40D1A();
						if (func_154(uVar2))
						{
							if (unk_0x4F69FBD64CDF125B(uVar2) == joaat("towtruck") || unk_0x4F69FBD64CDF125B(iVar2) == joaat("towtruck2"))
							{
								if (func_154(uParam0->f_35[iVar0]))
								{
									if (unk_0x3C87303CA056FB80(iVar2, uParam0->f_35[iVar0]))
									{
										func_361("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is being towed by player [TERMINATING]");
										return 0;
									}
								}
							}
						}
					}
					else
					{
						iVar3 = unk_0x952F33F151D40D1A();
						if (func_154(iVar3))
						{
							if (unk_0x8D11942CD2B49BB5(uParam0->f_35[iVar0], iVar3) && unk_0x2A72627520A107B5(iVar3) > 6f)
							{
								func_361("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has collided with the player's last known vehicle at speed (player bailed out?) [TERMINATING]");
								return 0;
							}
						}
						if (*uParam0 == 16)
						{
							if (func_153(unk_0x18F7BE9ACB7D08F4(), uParam0->f_35[iVar0]))
							{
								func_361("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Player attempting to jack Epsilon vehicle [TERMINATING]");
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

int func_153(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x0FAE113CE72ED842(iParam0))
	{
		if (unk_0xC4B84EB67F78C1F0(iParam1, 0))
		{
			iVar0 = unk_0x0B495402BD092DEB(iParam0);
			if (iVar0 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_154(int iParam0)
{
	if (func_124(uParam0))
	{
		if (unk_0xC4B84EB67F78C1F0(uParam0, 0))
		{
			if (!unk_0x25A40FAC128F45B0(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_155(var uParam0, bool bParam1, int iParam2)
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
	if (func_123(unk_0x18F7BE9ACB7D08F4()))
	{
		iVar0 = 0;
		while (iVar0 <= iVar1)
		{
			if (unk_0x31F12808DC47A9E5(uParam0->f_28[iVar0]))
			{
				if (!unk_0x0FAE113CE72ED842(uParam0->f_28[iVar0]))
				{
					if (unk_0x1A7B277A2CBA7ADF(unk_0x18F7BE9ACB7D08F4()))
					{
						if (unk_0x8D11942CD2B49BB5(unk_0x18F7BE9ACB7D08F4(), uParam0->f_28[iVar0]))
						{
							if (iParam2 == 0)
							{
								func_149(uParam0);
							}
							else
							{
								func_151(uParam0);
							}
							if (func_143())
							{
								func_141();
							}
							func_361("STEP_5_COMMON_RCfineAndInRange - Random character is being pushed by car [TERMINATING]");
							return 0;
						}
					}
					if ((unk_0x20BE2EAD83953A78(uParam0->f_28[iVar0]) || unk_0x7F3463BA18B53A3D(uParam0->f_28[iVar0])) || unk_0x2B9DD94F17265ECD(uParam0->f_28[iVar0]))
					{
						if (iParam2 == 0)
						{
							func_149(uParam0);
						}
						else
						{
							func_151(uParam0);
						}
						func_361("STEP_5_COMMON_RCfineAndInRange - Random character has been damaged by something [TERMINATING]");
						return 0;
					}
					if (unk_0x0B90D19A63676F41(uParam0->f_28[iVar0]))
					{
						if (unk_0xEA07F07380ABC460(uParam0->f_28[iVar0], unk_0x18F7BE9ACB7D08F4(), 3f, 3f, 3f, 0, 1, 0))
						{
							if (iParam2 == 0)
							{
								func_149(uParam0);
							}
							else
							{
								func_151(uParam0);
							}
							func_361("STEP_5_COMMON_RCfineAndInRange - Random character is in ragdoll [TERMINATING]");
							return 0;
						}
					}
					if (func_174(*uParam0))
					{
						if (!func_196(*uParam0))
						{
							if (func_169(uParam0->f_28[iVar0], 1, 0, 0, 0))
							{
								if (iParam2 == 0)
								{
									func_149(uParam0);
								}
								else
								{
									func_151(uParam0);
								}
								func_361("STEP_5_COMMON_RCfineAndInRange - Player is shooting near the Random Character [TERMINATING]");
								return 0;
							}
						}
						if (unk_0x7824A0A217B1F7A8(-1, unk_0x761660F5CE986DC4(uParam0->f_28[iVar0], 1), 15f))
						{
							if (iParam2 == 0)
							{
								func_149(uParam0);
							}
							else
							{
								func_151(uParam0);
							}
							func_361("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
							return 0;
						}
						if (func_157(uParam0->f_28[iVar0], 1126825984))
						{
							if (iParam2 == 0)
							{
								func_149(uParam0);
							}
							else
							{
								func_151(uParam0);
							}
							func_361("STEP_5_COMMON_RCfineAndInRange - Random character is in combat [TERMINATING]");
							return 0;
						}
					}
					if (!func_156(*uParam0))
					{
						if (unk_0x7824A0A217B1F7A8(-1, unk_0x761660F5CE986DC4(uParam0->f_28[iVar0], 1), 5f))
						{
							if (iParam2 == 0)
							{
								func_149(uParam0);
							}
							else
							{
								func_151(uParam0);
							}
							func_361("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
							return 0;
						}
						if (unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) > 0)
						{
							if (iParam2 == 0)
							{
								func_149(uParam0);
							}
							else
							{
								func_151(uParam0);
							}
							func_361("STEP_5_COMMON_RCfineAndInRange - Player has a wanted level [TERMINATING]");
							return 0;
						}
					}
				}
				else
				{
					func_361("STEP_5_COMMON_RCfineAndInRange - Random character injured / dead [TERMINATING]");
					if (*uParam0 == 34)
					{
						if (func_124(uParam0->f_41[0]))
						{
							unk_0xF342BF6A7A4C7A8F(uParam0->f_41[0], 1, 0);
							unk_0x73D7E57BF0ED7FEB(uParam0->f_41[0], 0);
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

int func_156(int iParam0)
{
	if (((iParam0 == 2 || iParam0 == 3) || iParam0 == 52) || iParam0 == 53)
	{
		return 1;
	}
	return 0;
}

int func_157(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_124(unk_0x18F7BE9ACB7D08F4()) && func_124(iParam0))
	{
		if (func_168(iParam0) || unk_0xF905401F186A9803(unk_0x8CFC7D6E1DA5D304(), iParam0))
		{
			if (unk_0x9381BBF272130ED6(unk_0x18F7BE9ACB7D08F4(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0xEA07F07380ABC460(unk_0x18F7BE9ACB7D08F4(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_158(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_158(int iParam0, float fParam1)
{
	return func_159(iParam0, unk_0x18F7BE9ACB7D08F4(), fParam1, 1, 250, 7);
}

bool func_159(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_167(iParam0, iParam1);
	if (!func_124(iParam0) || !func_124(iParam1))
	{
		if (iVar4 != -1)
		{
			func_166(&(Local_37[iVar4 /*4*/]));
		}
		return 0;
	}
	if (!func_163(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_162();
		if (iVar4 == -1)
		{
			return 0;
		}
		Local_37[iVar4 /*4*/].f_1 = iParam0;
		Local_37[iVar4 /*4*/].f_2 = iParam1;
	}
	Var1 = { unk_0x433176BD83D09D7E(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_160(&(Local_37[iVar4 /*4*/]), Var1, iParam1, &(Local_37[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0x5AFB8ED811F05E4D() - Local_37[iVar4 /*4*/].f_3) < iParam4);
}

int func_160(var uParam0, struct<3> Param1, int iParam4, var uParam5, int iParam6, int iParam7)
{
	var uVar0;
	struct<3> Var1;
	var uVar4;
	int iVar7;
	int iVar8;
	
	iVar7 = 0;
	if (!func_124(iParam4))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		Var1 = { func_161(iParam4, iParam7) };
		*uParam0 = unk_0x96011BB04BED3CD0(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam6, 7);
		return 0;
	}
	iVar8 = unk_0xA3F56DCC3ACBDEC5(*uParam0, &uVar0, &Var1, &uVar4, &iVar7);
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
	if (unk_0xB6C2454233C8F532(iVar7))
	{
		func_124(iVar7);
		if (unk_0x6DE4035D8BAB73B4(iVar7) == iParam4)
		{
			if (bLocal_78)
			{
				unk_0xD2F8DE21E0732141(Param1, unk_0x761660F5CE986DC4(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam5 = unk_0x5AFB8ED811F05E4D();
			return 1;
		}
		return 0;
	}
	if (unk_0x978B4E1292EBBE41(iVar7))
	{
		func_124(iVar7);
		if (unk_0x657B649BA2AD3582(iParam4, 0))
		{
			if (unk_0x00ABCA0241A97143(iVar7) == unk_0x5AD687C3474F04B4(iParam4, 0))
			{
				if (bLocal_78)
				{
					unk_0xD2F8DE21E0732141(Param1, unk_0x761660F5CE986DC4(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam5 = unk_0x5AFB8ED811F05E4D();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_161(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = unk_0x61E9B3BFA06B017B(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return unk_0x761660F5CE986DC4(iParam0, 1);
	}
	else if (iParam1 == 1)
	{
		return unk_0x433176BD83D09D7E(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return unk_0x433176BD83D09D7E(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return unk_0x433176BD83D09D7E(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return unk_0x433176BD83D09D7E(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return unk_0x433176BD83D09D7E(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return unk_0x433176BD83D09D7E(iParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0x761660F5CE986DC4(iParam0, 1);
}

int func_162()
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

int func_163(int iParam0, int iParam1, float fParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_165(unk_0x761660F5CE986DC4(iParam1, 1) - unk_0x761660F5CE986DC4(iParam0, 1)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var3 = { unk_0x9B40AD9E8738972C(iParam0) };
	}
	else
	{
		Var3 = { func_165(unk_0x433176BD83D09D7E(iParam0, 31086, 0f, 5f, 0f) - unk_0x433176BD83D09D7E(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_164(Var3, Var0);
	if (fVar6 <= unk_0xD0FFB162F40A139C((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_164(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_165(struct<3> Param0)
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

void func_166(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_167(int iParam0, int iParam1)
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

int func_168(var uParam0)
{
	if (unk_0x6703CD13741C39C5(unk_0x8CFC7D6E1DA5D304(), uParam0) && unk_0x9381BBF272130ED6(unk_0x18F7BE9ACB7D08F4(), 6))
	{
		return 1;
	}
	return 0;
}

int func_169(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
	if (func_124(unk_0x18F7BE9ACB7D08F4()) && func_124(uParam0))
	{
		unk_0x75CE6F8BEC2654E3(unk_0x18F7BE9ACB7D08F4(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_173(uParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_170(uParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (unk_0x11879DABC3CC8D46(unk_0x18F7BE9ACB7D08F4()))
			{
				if (unk_0xAADA5865C8BFAE94(unk_0x18F7BE9ACB7D08F4()))
				{
					if (unk_0x70832328F090DD95(unk_0x761660F5CE986DC4(uParam0, 1), fVar0, 1))
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
				if (func_173(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_170(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_170(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0x761660F5CE986DC4(uParam0, 1) };
	Var3 = { Var0 };
	Var0.f_0 = (Var0.f_0 - fParam1);
	Var0.f_1 = (Var0.f_1 - fParam1);
	Var0.f_2 = (Var0.f_2 - fParam1);
	Var3.f_0 = (Var3.f_0 + fParam1);
	Var3.f_1 = (Var3.f_1 + fParam1);
	Var3.f_2 = (Var3.f_2 + fParam1);
	if (bParam2)
	{
		if (((unk_0xC803706E49FF7A7F(unk_0x761660F5CE986DC4(iParam0, 1), joaat("weapon_grenade"), fParam1, 1) || unk_0xC803706E49FF7A7F(unk_0x761660F5CE986DC4(iParam0, 1), joaat("weapon_molotov"), fParam1, 1)) || unk_0xC803706E49FF7A7F(unk_0x761660F5CE986DC4(iParam0, 1), joaat("weapon_smokegrenade"), fParam1, 1)) || unk_0xC803706E49FF7A7F(unk_0x761660F5CE986DC4(iParam0, 1), joaat("weapon_stickybomb"), 5f, 1))
		{
			if (bParam3)
			{
				if (func_171(iParam0, fParam1))
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
			if (func_171(iParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xAB3BDB14DC75494C(Var0, Var3, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_171(var uParam0, float fParam1)
{
	var uVar0;
	struct<3> Var1;
	
	if ((((unk_0x7110E50212169A23(uParam0, joaat("weapon_grenade"), fParam1, &Var1, &uVar0, 0) || unk_0x7110E50212169A23(uParam0, joaat("weapon_smokegrenade"), fParam1, &Var1, &uVar0, 0)) || unk_0x7110E50212169A23(uParam0, joaat("weapon_bzgas"), fParam1, &Var1, &uVar0, 0)) || unk_0x7110E50212169A23(uParam0, joaat("weapon_stickybomb"), fParam1, &Var1, &uVar0, 0)) || unk_0x7110E50212169A23(uParam0, joaat("weapon_molotov"), fParam1, &Var1, &uVar0, 0))
	{
		if (func_172(uParam0, Var1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_172(int iParam0, struct<3> Param1, float fParam4, int iParam5)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_165(Param1 - unk_0x761660F5CE986DC4(uParam0, 1)) };
	if (fParam4 < 0.1f || fParam4 > 360f)
	{
		return 1;
	}
	if (iParam5 == 0)
	{
		Var3 = { unk_0x9B40AD9E8738972C(iParam0) };
	}
	else
	{
		Var3 = { func_165(unk_0x433176BD83D09D7E(iParam0, 31086, 0f, 5f, 0f) - unk_0x433176BD83D09D7E(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_164(Var3, Var0);
	if (fVar6 <= unk_0xD0FFB162F40A139C((fParam4 / 2f)))
	{
		return 0;
	}
	return 1;
}

int func_173(int iParam0, bool bParam1, float fParam2, float fParam3)
{
	if (bParam1)
	{
		if (unk_0xAADA5865C8BFAE94(unk_0x18F7BE9ACB7D08F4()))
		{
			if (unk_0xEA07F07380ABC460(unk_0x18F7BE9ACB7D08F4(), uParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (unk_0x70832328F090DD95(unk_0x761660F5CE986DC4(iParam0, 1), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

int func_174(int iParam0)
{
	if (((((iParam0 == 2 || iParam0 == 3) || iParam0 == 34) || iParam0 == 11) || iParam0 == 52) || iParam0 == 53)
	{
		return 0;
	}
	return 1;
}

void func_175(int iParam0)
{
	var uVar0;
	
	if (func_124(unk_0x18F7BE9ACB7D08F4()) && func_124(uParam0))
	{
		unk_0x831CD0FBFB26EC7E("rcmextreme3");
		while (!unk_0x028356968FDD2DF2("rcmextreme3"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xC8BEB049F3BFC0AB(&uVar0);
		unk_0xB5746603774C4C9D(0, "rcmextreme3", "jump_fall", 1000f, -8f, -1, 8, 0, 0, 0, 0);
		unk_0x4C7506FBB6FFDFC8(0, 1);
		unk_0x589CAFF490F034E2(0, 64.6f, -737.8f, 44.2f);
		unk_0x9603FB72C3126396(0, unk_0x18F7BE9ACB7D08F4(), 10000f, -1, 0, 0);
		unk_0xAFDA7B8F83B2CA58(uVar0);
		unk_0x73F69DD57B7E92A9(uParam0, uVar0);
		unk_0x56C7B20E11B37066(&uVar0);
	}
}

int func_176(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_182();
	}
	if (iParam0 == -1)
	{
		return 1;
	}
	if (func_186(iParam0))
	{
		return 0;
	}
	if (!func_180(4))
	{
		if (func_184(iParam0))
		{
		}
		else
		{
			return 1;
		}
	}
	if (func_179() && !func_178())
	{
		return 1;
	}
	if (!func_177(iParam0))
	{
		if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
		{
			if (unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) != 0)
			{
				return 1;
			}
		}
	}
	if (!unk_0xB03A1684359C50A1(Global_104551.f_18544[iParam0 /*6*/], 2))
	{
		return 1;
	}
	return 0;
}

int func_177(int iParam0)
{
	if ((((iParam0 == 5 || iParam0 == 6) || iParam0 == 41) || iParam0 == 60) || iParam0 == 61)
	{
		return 1;
	}
	return 0;
}

int func_178()
{
	if (unk_0xC339C5C5B5E8BC5B())
	{
		if (unk_0x05C1AD623B6C5E86() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_179()
{
	if (Global_89896 != -1)
	{
		return unk_0xB03A1684359C50A1(Global_83762[Global_89896 /*34*/].f_15, 20);
	}
	return 0;
}

bool func_180(int iParam0)
{
	return func_181(iParam0, Global_35859);
}

int func_181(int iParam0, int iParam1)
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

int func_182()
{
	return func_183(unk_0xFCA64981FEF7C913(), 0);
}

int func_183(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar33;
	int iVar34;
	
	iVar33 = unk_0x6E987D62C8535B6E(uParam0);
	iVar34 = 0;
	iVar34 = 0;
	while (iVar34 < 63)
	{
		iVar0 = iVar34;
		func_107(iVar0, &uVar1);
		if (unk_0x6E987D62C8535B6E(uVar1) == iVar33)
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

int func_184(int iParam0)
{
	if ((func_185() && Global_92829.f_11 == 6) && iParam0 == func_183(&(Global_92829.f_3), 0))
	{
		return 1;
	}
	return 0;
}

int func_185()
{
	if (((Global_92829 == 13 || Global_92829 == 10) || Global_92829 == 11) || Global_92829 == 12)
	{
		return 0;
	}
	return 1;
}

int func_186(int iParam0)
{
	if (func_211(0))
	{
		if (Global_71098.f_1 == 7)
		{
			if (Global_71098 == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_187()
{
	func_192(0);
	func_191();
	func_188();
}

void func_188()
{
	if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
	{
		if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			if (func_189(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0), 10.5f, 1, 1056964608, 0, 1, 0))
			{
				if (unk_0x2BBAA45ECDE3DAE2(unk_0x18F7BE9ACB7D08F4(), -828834893) != 1)
				{
					unk_0x5941F8B2A813BBA8(unk_0x18F7BE9ACB7D08F4(), 0, 0);
				}
			}
		}
	}
}

int func_189(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x9C7EE7DE7041A3F4(0, 71, 1);
	unk_0x9C7EE7DE7041A3F4(0, 72, 1);
	unk_0x9C7EE7DE7041A3F4(0, 76, 1);
	unk_0x9C7EE7DE7041A3F4(0, 73, 1);
	unk_0x9C7EE7DE7041A3F4(0, 59, 1);
	unk_0x9C7EE7DE7041A3F4(0, 60, 1);
	if (bParam5)
	{
		unk_0x9C7EE7DE7041A3F4(0, 75, 1);
	}
	unk_0x9C7EE7DE7041A3F4(0, 80, 1);
	if (!bParam6)
	{
		unk_0x9C7EE7DE7041A3F4(0, 69, 1);
		unk_0x9C7EE7DE7041A3F4(0, 70, 1);
		unk_0x9C7EE7DE7041A3F4(0, 68, 1);
	}
	unk_0x9C7EE7DE7041A3F4(0, 74, 1);
	unk_0x9C7EE7DE7041A3F4(0, 86, 1);
	unk_0x9C7EE7DE7041A3F4(0, 81, 1);
	unk_0x9C7EE7DE7041A3F4(0, 82, 1);
	unk_0x9C7EE7DE7041A3F4(0, 138, 1);
	unk_0x9C7EE7DE7041A3F4(0, 136, 1);
	unk_0x9C7EE7DE7041A3F4(0, 114, 1);
	unk_0x9C7EE7DE7041A3F4(0, 107, 1);
	unk_0x9C7EE7DE7041A3F4(0, 110, 1);
	unk_0x9C7EE7DE7041A3F4(0, 89, 1);
	unk_0x9C7EE7DE7041A3F4(0, 89, 1);
	unk_0x9C7EE7DE7041A3F4(0, 87, 1);
	unk_0x9C7EE7DE7041A3F4(0, 88, 1);
	unk_0x9C7EE7DE7041A3F4(0, 113, 1);
	unk_0x9C7EE7DE7041A3F4(0, 115, 1);
	unk_0x9C7EE7DE7041A3F4(0, 116, 1);
	unk_0x9C7EE7DE7041A3F4(0, 117, 1);
	unk_0x9C7EE7DE7041A3F4(0, 118, 1);
	unk_0x9C7EE7DE7041A3F4(0, 119, 1);
	unk_0x9C7EE7DE7041A3F4(0, 131, 1);
	unk_0x9C7EE7DE7041A3F4(0, 132, 1);
	unk_0x9C7EE7DE7041A3F4(0, 123, 1);
	unk_0x9C7EE7DE7041A3F4(0, 126, 1);
	unk_0x9C7EE7DE7041A3F4(0, 129, 1);
	unk_0x9C7EE7DE7041A3F4(0, 130, 1);
	unk_0x9C7EE7DE7041A3F4(0, 133, 1);
	unk_0x9C7EE7DE7041A3F4(0, 134, 1);
	unk_0x95C6D943AF847EEC();
	func_190(iParam0);
	if ((unk_0x5AFB8ED811F05E4D() - Global_29) > 500)
	{
		unk_0x7F8DAED41E5794FC(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x5AFB8ED811F05E4D();
	if (!unk_0x74C2FE037DFC8B4A(iParam0, 0))
	{
		if (unk_0x36E1A96E1D63ED91(unk_0x2A72627520A107B5(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_190(int iParam0)
{
	if (!unk_0x74C2FE037DFC8B4A(uParam0, 0))
	{
		if (unk_0x15E3947C9B9DDEC8(iParam0))
		{
			if (unk_0x1F8B50D0C3034AAE(iParam0))
			{
				unk_0xFE5D726DE23CEFF5(iParam0, 0);
			}
		}
	}
}

void func_191()
{
	unk_0x9C7EE7DE7041A3F4(0, 21, 1);
	unk_0x9C7EE7DE7041A3F4(0, 37, 1);
	unk_0x9C7EE7DE7041A3F4(0, 25, 1);
	unk_0x9C7EE7DE7041A3F4(0, 141, 1);
	unk_0x9C7EE7DE7041A3F4(0, 140, 1);
	unk_0x9C7EE7DE7041A3F4(0, 24, 1);
	unk_0x9C7EE7DE7041A3F4(0, 257, 1);
	unk_0x9C7EE7DE7041A3F4(0, 22, 1);
	unk_0x9C7EE7DE7041A3F4(0, 23, 1);
}

void func_192(int iParam0)
{
	if (!Global_14453.f_1 == 1)
	{
		if (func_195(0))
		{
			func_193(iParam0);
		}
		unk_0xD2A9C3F486236CC5(&Global_2324, 2);
	}
}

void func_193(int iParam0)
{
	if (Global_14615)
	{
		func_194(0, 0);
	}
	if (Global_14453.f_1 == 10 || Global_14453.f_1 == 9)
	{
		unk_0xD2A9C3F486236CC5(&Global_2324, 16);
	}
	if (unk_0x36328FCBA2944E1F())
	{
		unk_0xBE97F4E2B659331B(0);
	}
	Global_15756 = 5;
	if (iParam0 == 1)
	{
		unk_0xD2A9C3F486236CC5(&Global_2323, 30);
	}
	else
	{
		unk_0x62148293B793073B(&Global_2323, 30);
	}
	if (!func_138())
	{
		Global_14453.f_1 = 3;
	}
}

void func_194(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_195(0))
		{
			Global_14615 = 1;
			if (bParam1)
			{
				unk_0xE0F240E99D061E79(&Global_14390);
			}
			Global_14381 = { Global_14399[Global_14398 /*3*/] };
			unk_0x1F7EA74AE820583A(Global_14381);
		}
	}
	else if (Global_14615 == 1)
	{
		Global_14615 = 0;
		Global_14381 = { Global_14406[Global_14398 /*3*/] };
		if (bParam1)
		{
			unk_0x1F7EA74AE820583A(Global_14390);
		}
		else
		{
			unk_0x1F7EA74AE820583A(Global_14381);
		}
	}
}

int func_195(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14453.f_1 > 3)
		{
			if (unk_0xB03A1684359C50A1(Global_2323, 14))
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
	if (unk_0xE7FAF8E78F7D3A73(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14453.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_196(int iParam0)
{
	if ((((iParam0 == 52 || iParam0 == 53) || iParam0 == 54) || iParam0 == 55) || iParam0 == 56)
	{
		return 1;
	}
	return 0;
}

int func_197(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_182();
	}
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_199(&(Global_103638[iParam0 /*10*/].f_9), 1, 4, 0, 0);
	if (!iVar0 == 1)
	{
		return 0;
	}
	func_198(iParam0);
	return 1;
}

void func_198(int iParam0)
{
	Global_103638[iParam0 /*10*/].f_4 = 1;
	Global_103638[iParam0 /*10*/].f_5 = 0;
	Global_103638[iParam0 /*10*/].f_6 = 0;
	Global_103638[iParam0 /*10*/] = 0;
}

int func_199(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_90452.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_201(0))
		{
			return 0;
		}
		Global_35823++;
		*uParam0 = Global_35823;
		unk_0x36643EAE6212D16F(unk_0x0A91D180DDC7A1B8(), 0);
		Global_17162.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x9BEC17E13AB1F07F(8);
		}
		Global_35859 = iParam2;
		Global_35821 = *uParam0;
		Global_35822 = iParam4;
		Global_35820 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35820 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35820)
			{
				if (Global_35826[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35821 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_180(iParam2))
		{
			return 0;
		}
		if (Global_35820 == 8)
		{
			return 0;
		}
		Global_35823++;
		*uParam0 = Global_35823;
		Global_35826[Global_35820 /*4*/] = Global_35823;
		Global_35826[Global_35820 /*4*/].f_1 = iParam1;
		Global_35826[Global_35820 /*4*/].f_2 = iParam2;
		Global_35826[Global_35820 /*4*/].f_3 = 0;
		Global_35820++;
		if (iParam4 != 0)
		{
			func_200(uParam0, iParam4);
		}
	}
	return 2;
}

void func_200(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_35820 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35820)
	{
		if (Global_35826[iVar0 /*4*/] == *uParam0)
		{
			Global_35826[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

int func_201(int iParam0)
{
	if (Global_35859 == 15)
	{
		return 0;
	}
	if (func_180(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_202()
{
	if (Global_92829 == 10 || Global_92829 == 9)
	{
		return 1;
	}
	return 0;
}

int func_203(int iParam0)
{
	char* sVar0;
	
	if (Global_70852)
	{
		func_361("STEP_3_COMMON_CanRCLaunch - Script denied. Multiplayer is running [TERMINATING]");
		return 0;
	}
	if (!Global_104551.f_9055 && !func_211(1))
	{
		func_361("STEP_3_COMMON_CanRCLaunch - Script denied, game flow is not active");
		return 0;
	}
	if (!func_204(iParam0))
	{
		Global_103638[iParam0 /*10*/].f_1 = 1;
		func_361("STEP_3_COMMON_CanRCLaunch - Script denied by RC Controller [TERMINATING]");
		return 0;
	}
	if (Global_92829.f_11 == 6)
	{
		if (Global_92829 < 9)
		{
			func_107(iParam0, &sVar0);
			if (unk_0x9D39145AD645E383(&(Global_92829.f_3), sVar0))
			{
				func_361("STEP_3_COMMON_CanRCLaunch - Script denied as a replay for this RC is being configured. [TERMINATING]");
				return 0;
			}
		}
	}
	if (unk_0xE7FAF8E78F7D3A73(joaat("candidate_controller")) == 0)
	{
		Global_103638[iParam0 /*10*/].f_1 = 1;
		func_361("STEP_3_COMMON_CanRCLaunch - Script denied as candidate_controller is not running. [TERMINATING]");
		return 0;
	}
	return 1;
}

int func_204(int iParam0)
{
	var uVar0;
	
	func_107(iParam0, &uVar0);
	if (!func_180(4))
	{
		if (func_184(iParam0))
		{
		}
		else
		{
			return 0;
		}
	}
	if (func_179() && !func_178())
	{
		return 0;
	}
	if (func_210(iParam0))
	{
		return 0;
	}
	if (iParam0 == -1)
	{
		iParam0 = func_182();
	}
	if (iParam0 == -1)
	{
		return 0;
	}
	if (!func_186(iParam0))
	{
		if (!func_209(iParam0))
		{
			return 0;
		}
		if (!func_208(iParam0))
		{
			return 0;
		}
		if (func_207(iParam0))
		{
			return 0;
		}
	}
	if (iParam0 == 58)
	{
		if (func_205(5))
		{
			Global_103638[iParam0 /*10*/].f_3 = 0;
		}
	}
	if (Global_103638[iParam0 /*10*/].f_3 == 1)
	{
		return 0;
	}
	return 1;
}

int func_205(int iParam0)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (Global_92881.f_313 == 0)
	{
		return 0;
	}
	if (iParam0 == 10)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (func_205(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	else if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		func_206(iParam0, &sVar1);
		iVar9 = unk_0x0E40E816537BFB87(Global_88012[iParam0 /*10*/].f_3, &sVar1);
		if (iVar9 != 0 && Global_92881.f_313 == iVar9)
		{
			return 1;
		}
	}
	return 0;
}

bool func_206(int iParam0, char* sParam1)
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
			if (unk_0x055A9BA923455525("TrevorsTrailer"))
			{
				StringCopy(sParam1, "v_trailer", 32);
			}
			else if (unk_0x055A9BA923455525("TrevorsTrailerTidy"))
			{
				StringCopy(sParam1, "V_TrailerTIDY", 32);
			}
			else if (unk_0x055A9BA923455525("TrevorsTrailerTrash"))
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
	return !unk_0x9D39145AD645E383(sParam1, "");
}

bool func_207(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return unk_0xB03A1684359C50A1(Global_104551.f_18544[iParam0 /*6*/], 3);
}

bool func_208(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return unk_0xB03A1684359C50A1(Global_104551.f_18544[iParam0 /*6*/], 2);
}

bool func_209(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return unk_0xB03A1684359C50A1(Global_104551.f_18544[iParam0 /*6*/], 0);
}

int func_210(int iParam0)
{
	if (func_177(iParam0))
	{
		return 0;
	}
	else if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		if (unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) != 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_211(bool bParam0)
{
	if (!bParam0 && unk_0xE7FAF8E78F7D3A73(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xB03A1684359C50A1(Global_71100, 0);
}

char* func_212(int iParam0)
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

int func_213(int iParam0)
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

bool func_214()
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_219(unk_0x18F7BE9ACB7D08F4()))
	{
		return bVar0;
	}
	if (Global_103638[56 /*10*/].f_3)
	{
		return bVar0;
	}
	if (unk_0xAAC7941A7E0EE97A(unk_0x8CFC7D6E1DA5D304(), 0))
	{
		if (iLocal_290)
		{
			unk_0xEFF1F12403847394(1);
			func_218("RAMP_HELP_CRIM", -1);
			iLocal_290 = 0;
		}
		bVar0 = true;
	}
	else if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		if (iLocal_289)
		{
			unk_0xEFF1F12403847394(1);
			func_218("RAMP_HELP_FOOT", -1);
			iLocal_289 = 0;
		}
		bVar0 = true;
	}
	else if ((func_217(0) || unk_0x51CFE20A158947F4()) || func_216())
	{
		if (func_2("RAMP_HELP_TRIG"))
		{
			if (func_217(0))
			{
			}
			else if (unk_0x51CFE20A158947F4())
			{
			}
			else if (func_216())
			{
			}
			unk_0xEFF1F12403847394(1);
			iLocal_291 = 0;
		}
		bVar0 = true;
	}
	else if (func_345(108))
	{
		if (!iLocal_291)
		{
			if (!func_2("RAMP_HELP_TRIG"))
			{
				unk_0xEFF1F12403847394(1);
				func_215("RAMP_HELP_TRIG");
			}
			iLocal_291 = 1;
		}
		bVar0 = !unk_0x02EA7C5633421A0F(2, 51);
	}
	return bVar0;
}

void func_215(char* sParam0)
{
	unk_0x2202872EA73499C3(sParam0);
	unk_0xF764171B43EBA5E4(0, 1, 1, -1);
}

int func_216()
{
	if (!unk_0x44243F2E2F58B8E3())
	{
		return Global_90452.f_44 == 1;
	}
	return 0;
}

bool func_217(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17162.f_4 && Global_17162.f_104 == 4);
	}
	return Global_17162.f_4;
}

void func_218(char* sParam0, int iParam1)
{
	unk_0x2202872EA73499C3(sParam0);
	unk_0xF764171B43EBA5E4(0, 0, 1, iParam1);
}

bool func_219(int iParam0)
{
	if (!unk_0x31F12808DC47A9E5(iParam0))
	{
		return 0;
	}
	return !unk_0x74C2FE037DFC8B4A(iParam0, 0);
}

int func_220(float fParam0)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	if (!func_219(unk_0x18F7BE9ACB7D08F4()))
	{
		return -1;
	}
	Var4 = { unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Var1 = { Global_25576[(iLocal_286 + iVar0) /*23*/][0 /*3*/] };
		if (unk_0x15EE504466B7BBD3(Var4, Var1, 1) <= fParam0 && unk_0x36E1A96E1D63ED91((Var4.f_2 - Var1.f_2)) < 1.5f)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_221()
{
	func_57();
	return Global_104551.f_2353.f_539.f_4301;
}

void func_222(var* uParam0, struct<3> Param1)
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
	if (!func_342(&iVar1, uParam0, Param1, 5f))
	{
		func_361(" Didn't know which RC To Launch");
		func_346(uParam0, 1);
	}
	if (!func_203(*uParam0))
	{
		func_361(" RC Can't Launch");
		func_346(uParam0, 1);
	}
	if (func_341(*uParam0))
	{
		while (true)
		{
			unk_0x4EDE34FBADD967A6(0);
			if (func_340(*uParam0))
			{
				func_346(uParam0, 1);
			}
		}
	}
	func_264(uParam0);
	unk_0x7EE425AE3317BA69(Param1, uParam0->f_15, 1, 0, 0, 0);
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (*uParam0 == 52 || *uParam0 == 53)
		{
			if (func_124(uParam0->f_28[0]))
			{
				if (unk_0x7824A0A217B1F7A8(-1, unk_0x761660F5CE986DC4(uParam0->f_28[0], 1), 5.1f))
				{
					if (*uParam0 == 52)
					{
						iVar7 = 0;
						while (iVar7 < uParam0->f_41)
						{
							if (unk_0x31F12808DC47A9E5(uParam0->f_41[iVar7]))
							{
								if ((func_124(uParam0->f_28[0]) && unk_0x9EE4192FE475677C(uParam0->f_41[iVar7], uParam0->f_28[0])) || (func_124(uParam0->f_28[1]) && unk_0x9EE4192FE475677C(uParam0->f_41[iVar7], uParam0->f_28[1])))
								{
									unk_0x5BE35A26B9097351(&(uParam0->f_41[iVar7]));
								}
							}
							iVar7++;
						}
					}
					unk_0x5D83BE67375A88E5(uParam0->f_28[0], 100, 500, 0, 1, 1, 0);
					unk_0x276E12CD8AF23A06(uParam0->f_28[0], 1000, 1);
					if (func_124(uParam0->f_28[1]))
					{
						unk_0x5D83BE67375A88E5(uParam0->f_28[1], 100, 500, 0, 1, 1, 0);
						unk_0x276E12CD8AF23A06(uParam0->f_28[1], 1000, 1);
					}
					func_361("Sitting Rampage attacked with explosives, cleaning up");
					func_346(uParam0, 1);
				}
			}
			if (func_124(uParam0->f_28[1]))
			{
				if (unk_0x7824A0A217B1F7A8(-1, unk_0x761660F5CE986DC4(uParam0->f_28[1], 1), 5.1f))
				{
					if (*uParam0 == 52)
					{
						iVar7 = 0;
						while (iVar7 < uParam0->f_41)
						{
							if (unk_0x31F12808DC47A9E5(uParam0->f_41[iVar7]))
							{
								if ((func_124(uParam0->f_28[0]) && unk_0x9EE4192FE475677C(uParam0->f_41[iVar7], uParam0->f_28[0])) || (func_124(uParam0->f_28[1]) && unk_0x9EE4192FE475677C(uParam0->f_41[iVar7], uParam0->f_28[1])))
								{
									unk_0x5BE35A26B9097351(&(uParam0->f_41[iVar7]));
								}
							}
							iVar7++;
						}
					}
					unk_0x5D83BE67375A88E5(uParam0->f_28[1], 100, 500, 0, 1, 1, 0);
					unk_0x276E12CD8AF23A06(uParam0->f_28[1], 1000, 1);
					if (func_124(uParam0->f_28[0]))
					{
						unk_0x5D83BE67375A88E5(uParam0->f_28[0], 100, 500, 0, 1, 1, 0);
						unk_0x276E12CD8AF23A06(uParam0->f_28[0], 1000, 1);
					}
					func_361("Sitting Rampage attacked with explosives, cleaning up");
					func_346(uParam0, 1);
				}
			}
		}
		if (func_263(uParam0))
		{
			func_262(uParam0);
			func_361(" RC combat happening in area, tell peds to flee");
			func_149(uParam0);
			func_346(uParam0, 1);
		}
		if (!func_144(uParam0, 1))
		{
			func_361(" RC Is Not Fine And In Range");
			func_346(uParam0, 1);
		}
		if (func_261(52))
		{
			if (unk_0x33A2D945049A54A7("Rampage1"))
			{
				func_361(" Turning Off Scenario Group For Rampage 1");
				unk_0x524D5209C3686CCC("Rampage1", 0);
			}
		}
		func_260(*uParam0);
		func_252(&iLocal_287, &(uParam0->f_9), Param1);
		if (iVar0 == 0 && iLocal_287 != -1)
		{
			func_251(uParam0, &uLocal_292);
			if (unk_0xF76283B558B032AE())
			{
				func_361(" Cutscene Loaded");
				iVar0 = 1;
			}
		}
		Local_296 = { unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1) };
		if ((!(*uParam0 == 52 && Local_296.f_2 > 34f) && !(*uParam0 == 53 && Local_296.f_2 > 71f)) && !(*uParam0 == 54 && Local_296.f_2 > 30f))
		{
			if (func_239(uParam0, 0))
			{
				if (*uParam0 == 53)
				{
					if (func_236(uParam0))
					{
						func_361(" Trigger Conditions Met");
						func_187();
						if (!func_5(uParam0))
						{
							func_361(" RC Can't Launch");
							func_346(uParam0, 1);
						}
						func_361(" RC Launcher Waiting To Terminate");
						if (func_3(uParam0))
						{
							func_361(" Ready To Terminate");
							func_346(uParam0, 0);
						}
					}
				}
				else if (func_235(uParam0))
				{
					func_361(" Trigger Conditions Met");
					func_187();
					if (!func_5(uParam0))
					{
						func_361(" RC Can't Launch");
						func_346(uParam0, 1);
					}
					func_361(" RC Launcher Waiting To Terminate");
					if (func_3(uParam0))
					{
						func_361(" Ready To Terminate");
						func_346(uParam0, 0);
					}
				}
			}
			else
			{
				if (*uParam0 == 53)
				{
					func_223(uParam0);
				}
				if (unk_0x76AF8AC551A53D4C())
				{
					iLocal_113 = -1;
					unk_0xBC3C2A3068412290(0);
					unk_0x81D9C52E2A8DA464(unk_0x18F7BE9ACB7D08F4());
				}
			}
		}
	}
}

void func_223(var* uParam0)
{
	char* sVar0;
	
	sVar0 = "misstrvram_2";
	switch (iLocal_114)
	{
		case 0:
			unk_0x831CD0FBFB26EC7E(sVar0);
			if (unk_0x028356968FDD2DF2(sVar0))
			{
				iLocal_114++;
			}
			break;
		
		case 1:
			if (func_124(uParam0->f_28[0]))
			{
				if (func_234(uParam0->f_28[0], unk_0x18F7BE9ACB7D08F4(), 1) < 30f && unk_0x3AAE8FF7FB37F69E(uParam0->f_28[0]))
				{
					func_233(&uLocal_119, 0, uParam0->f_28[0], "RAMPAGEHIPSTER", 0, 1);
					iLocal_114++;
				}
			}
			break;
		
		case 2:
			uLocal_115[0] = unk_0x3C3438327FFEB224(Local_106, Local_109, 2);
			if (func_124(uParam0->f_28[0]))
			{
				func_224(&uLocal_119, "RAMP2AU", "RAMP2_LEADIN", "RAMP2_LEADIN_1", 7, 0, 0);
				unk_0x4DD2EB945B4192FD(uParam0->f_28[0], uLocal_115[0], sVar0, "hipster_post_post_irony", 8f, -8f, 513, 0, 1148846080, 0);
			}
			unk_0xAB888668498FCC04(uLocal_115[0], 0);
			unk_0x07BA5921A1FAAFFF(uLocal_115[0], 1);
			iLocal_114++;
			break;
		
		case 3:
			if (unk_0xCF0FA6AB02EA68F7(uLocal_115[0]))
			{
				if (unk_0x74CE979B042A1253(uLocal_115[0]) >= 0.95f)
				{
					iLocal_114++;
				}
			}
			break;
		
		case 4:
			uLocal_115[1] = unk_0x3C3438327FFEB224(Local_106, Local_109, 2);
			if (func_124(uParam0->f_28[0]))
			{
				func_224(&uLocal_119, "RAMP2AU", "RAMP2_LEADIN", "RAMP2_LEADIN_2", 7, 0, 0);
				unk_0x4DD2EB945B4192FD(uParam0->f_28[0], uLocal_115[1], sVar0, "hipster_self_hating_hipster", 8f, -8f, 513, 0, 1148846080, 0);
			}
			unk_0xAB888668498FCC04(uLocal_115[1], 0);
			unk_0x07BA5921A1FAAFFF(uLocal_115[1], 1);
			iLocal_114++;
			break;
		
		case 5:
			if (unk_0xCF0FA6AB02EA68F7(uLocal_115[1]))
			{
				if (unk_0x74CE979B042A1253(uLocal_115[1]) >= 0.95f)
				{
					iLocal_114++;
				}
			}
			break;
		
		case 6:
			uLocal_115[2] = unk_0x3C3438327FFEB224(Local_106, Local_109, 2);
			if (func_124(uParam0->f_28[0]))
			{
				unk_0x4DD2EB945B4192FD(uParam0->f_28[0], uLocal_115[2], sVar0, "hipster_idle", 8f, -8f, 513, 0, 1148846080, 0);
			}
			unk_0xAB888668498FCC04(uLocal_115[2], 1);
			unk_0x07BA5921A1FAAFFF(uLocal_115[2], 0);
			iLocal_114++;
			break;
		
		case 7:
			break;
	}
}

bool func_224(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_232(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15763 = 0;
	Global_15770 = 0;
	Global_15765 = 0;
	Global_16747 = 1;
	Global_16749 = 0;
	Global_16753 = 0;
	StringCopy(&Global_16760, sParam3, 24);
	Global_2621441 = 0;
	return func_225(sParam2, iParam4, 0);
}

int func_225(char* sParam0, int iParam1, bool bParam2)
{
	Global_15757 = 0;
	if (Global_15756 == 0 || Global_15758 == 2)
	{
		if (Global_15756 != 0)
		{
			if (iParam1 > Global_15758)
			{
				if (Global_15763 == 0)
				{
					unk_0xBE97F4E2B659331B(0);
					Global_14453.f_1 = 3;
					Global_15756 = 0;
					Global_15757 = 1;
					Global_15809 = 0;
					Global_15752 = 0;
					Global_15753 = 0;
					Global_15767 = 0;
					Global_15766 = 0;
					Global_14452 = 0;
				}
				else
				{
					func_142();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x85FDEF76CDBAD589())
		{
			return 0;
		}
		if (func_231(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_230();
		Global_15045 = { Global_15210 };
		Global_15762 = Global_15763;
		Global_15769 = Global_15770;
		Global_2621442 = Global_2621441;
		Global_15771 = { Global_15787 };
		Global_15764 = Global_15765;
		Global_16746 = Global_16747;
		Global_16754 = { Global_16760 };
		Global_16748 = Global_16749;
		Global_16750 = Global_16751;
		Global_16752 = Global_16753;
		Global_15375.f_370 = Global_16745;
		Global_15375.f_368 = Global_16743;
		Global_15375.f_369 = Global_16744;
		Global_15752 = Global_15753;
		if (Global_15762)
		{
			unk_0x62148293B793073B(&Global_2323, 20);
			unk_0x62148293B793073B(&Global_2324, 17);
			unk_0x62148293B793073B(&Global_2325, 0);
			if (bParam2)
			{
				func_229();
				if (Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14453.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14419 == 1)
			{
				return 0;
			}
			if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
			{
				if (unk_0x38000067CDE001D0(unk_0x18F7BE9ACB7D08F4()))
				{
					return 0;
				}
				if (func_228())
				{
					return 0;
				}
				if (unk_0xAE8B7AC0DA6122BC(unk_0x18F7BE9ACB7D08F4()))
				{
					return 0;
				}
				if (unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4()))
				{
					return 0;
				}
				if (unk_0xDDA45FDD097F5240(unk_0x18F7BE9ACB7D08F4()))
				{
					return 0;
				}
				if (unk_0x34F40618CEEAB490(unk_0x18F7BE9ACB7D08F4(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_70852)
				{
					if (unk_0xE1F715CDDC50FD7F(unk_0x18F7BE9ACB7D08F4()))
					{
						return 0;
					}
					if (unk_0x869BE9FEE7F5316B(unk_0x8CFC7D6E1DA5D304()))
					{
						return 0;
					}
					if (unk_0xEEDFFBA2DC1CCDB0(unk_0x18F7BE9ACB7D08F4()))
					{
						return 0;
					}
					if (unk_0xAC991FD3AAB0DC56(unk_0x8CFC7D6E1DA5D304()))
					{
						return 0;
					}
				}
			}
			if (func_138())
			{
				return 0;
			}
			else
			{
				switch (Global_14453.f_1)
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
				if (unk_0xB03A1684359C50A1(Global_2323, 9))
				{
					return 0;
				}
			}
			func_227();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_226();
		return 1;
	}
	if (Global_15756 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15758 || iParam1 == Global_15758)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_142();
	}
	return 0;
}

void func_226()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14624[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xBE97F4E2B659331B(0);
	Global_15756 = 1;
}

void func_227()
{
	Global_15809 = Global_15808;
	Global_15803 = Global_15804;
	Global_15850 = { Global_15838 };
	Global_15856 = { Global_15844 };
	Global_15811 = Global_15810;
	Global_15880 = { Global_15862 };
	Global_15886 = { Global_15868 };
	Global_15892 = { Global_15874 };
	Global_15898 = { Global_15904 };
	Global_1638 = Global_1639;
	Global_1640 = Global_1641;
	Global_15767 = Global_15768;
	Global_15769 = Global_15770;
	Global_15771 = { Global_15787 };
	Global_15760 = Global_15761;
	Global_16772 = 0;
	Global_15805 = 0;
	Global_15806 = 0;
	unk_0x62148293B793073B(&Global_2324, 16);
}

int func_228()
{
	int iVar0;
	int iVar1;
	
	if (Global_70852)
	{
		iVar0 = 0;
		unk_0x75CE6F8BEC2654E3(unk_0x18F7BE9ACB7D08F4(), &iVar1, 1);
		if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x4D73A339AD1764B4() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
	{
		if (unk_0x637828192EF718F7(unk_0x18F7BE9ACB7D08F4(), 78, 1))
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

void func_229()
{
	if (func_58(14))
	{
		if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			if (unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()) == Global_104551.f_28020[0 /*29*/])
			{
				Global_14453 = 0;
			}
			else if (unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()) == Global_104551.f_28020[1 /*29*/])
			{
				Global_14453 = 1;
			}
			else if (unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()) == Global_104551.f_28020[2 /*29*/])
			{
				Global_14453 = 2;
			}
			else
			{
				Global_14453 = 0;
			}
		}
	}
	else
	{
		Global_14453 = func_221();
		if (Global_14453 == 145)
		{
			Global_14453 = 3;
		}
		if (Global_70852)
		{
			Global_14453 = 3;
		}
		if (Global_14453 > 3)
		{
			Global_14453 = 3;
		}
	}
}

void func_230()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15045[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15045[iVar0 /*10*/].f_1), "", 24);
		Global_15045[iVar0 /*10*/].f_7 = 0;
		Global_15045[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15045.f_161 = -99;
	Global_15045.f_162 = { 0f, 0f, 0f };
}

bool func_231(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1357213.f_203[iParam1];
			}
			break;
	}
	return unk_0xB03A1684359C50A1(Global_1357213.f_1048, iParam0);
}

void func_232(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15210 = { *uParam0 };
	Global_1639 = iParam1;
	StringCopy(&Global_15826, sParam2, 24);
	Global_16745 = iParam5;
	if (iParam3 == 0)
	{
		Global_16743 = 1;
		Global_16741 = 0;
	}
	else
	{
		Global_16743 = 0;
		Global_16741 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16744 = 1;
		Global_16742 = 0;
	}
	else
	{
		Global_16744 = 0;
		Global_16742 = 1;
	}
}

void func_233(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_70852)
	{
		if (!unk_0x0FAE113CE72ED842(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x38ADC0C5F4F08C6D(iParam2, 0);
			}
			else
			{
				unk_0x38ADC0C5F4F08C6D(iParam2, 1);
			}
		}
		if (!unk_0x0FAE113CE72ED842(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x971E3DC2097859E3(iParam2, 0);
			}
			else
			{
				unk_0x971E3DC2097859E3(iParam2, 1);
			}
		}
	}
}

float func_234(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x74C2FE037DFC8B4A(iParam0, 0))
	{
		Var0 = { unk_0x761660F5CE986DC4(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x761660F5CE986DC4(iParam0, 0) };
	}
	if (!unk_0x74C2FE037DFC8B4A(iParam1, 0))
	{
		Var3 = { unk_0x761660F5CE986DC4(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x761660F5CE986DC4(iParam1, 0) };
	}
	return unk_0x15EE504466B7BBD3(Var0, Var3, iParam2);
}

int func_235(var* uParam0)
{
	func_187();
	if (iLocal_113 < 0)
	{
		if (unk_0xB7A628320EFF8E47(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), unk_0x761660F5CE986DC4(uParam0->f_28[1], 1)) < 25f)
		{
			return 1;
		}
		switch (*uParam0)
		{
			case 52:
				unk_0x211B8384E5838644(uParam0->f_28[0], 0.1f, 0f, 0.9f, 1, -1, 2500, 2000, 0);
				unk_0x6016A20BFEAEFE11(unk_0x18F7BE9ACB7D08F4(), uParam0->f_28[0], -1, 0, 2);
				unk_0x33A9F3CD35CB0655(1);
				unk_0xE70AD31C98116EDB(-5f);
				unk_0xB0AF33801D767F98(0.1f);
				unk_0xD20A8016E96CF139(0f);
				unk_0x089F94E871B1FD43(0.3f);
				unk_0x1A653E20651F0FD4(40f);
				break;
			
			case 54:
				unk_0x211B8384E5838644(uParam0->f_28[0], 0f, -0.1f, 0.9f, 1, -1, 2500, 2000, 0);
				unk_0x6016A20BFEAEFE11(unk_0x18F7BE9ACB7D08F4(), uParam0->f_28[0], -1, 0, 2);
				unk_0x33A9F3CD35CB0655(1);
				unk_0xE70AD31C98116EDB(-10f);
				unk_0xB0AF33801D767F98(-0.9f);
				unk_0xD20A8016E96CF139(0f);
				unk_0x089F94E871B1FD43(0.35f);
				unk_0x1A653E20651F0FD4(40f);
				break;
			
			case 55:
				unk_0x211B8384E5838644(uParam0->f_28[1], 0f, 0f, 0.9f, 1, -1, 2500, 2000, 0);
				unk_0x6016A20BFEAEFE11(unk_0x18F7BE9ACB7D08F4(), uParam0->f_28[1], -1, 0, 2);
				unk_0x33A9F3CD35CB0655(1);
				unk_0xE70AD31C98116EDB(-8f);
				unk_0xB0AF33801D767F98(-0.9f);
				unk_0xD20A8016E96CF139(0.1f);
				unk_0x089F94E871B1FD43(0.35f);
				unk_0x1A653E20651F0FD4(40f);
				break;
			
			case 56:
				unk_0x211B8384E5838644(uParam0->f_28[1], 0f, 0f, 0f, 1, -1, 2500, 2000, 0);
				unk_0x6016A20BFEAEFE11(unk_0x18F7BE9ACB7D08F4(), uParam0->f_28[1], -1, 0, 2);
				unk_0x33A9F3CD35CB0655(1);
				unk_0xE70AD31C98116EDB(-5f);
				unk_0xB0AF33801D767F98(0.15f);
				unk_0xD20A8016E96CF139(0f);
				unk_0x089F94E871B1FD43(0.3f);
				unk_0x1A653E20651F0FD4(40f);
				break;
		}
		iLocal_113 = unk_0x5AFB8ED811F05E4D() + 2500;
	}
	else if (unk_0x5AFB8ED811F05E4D() > iLocal_113)
	{
		iLocal_113 = -1;
		return 1;
	}
	return 0;
}

int func_236(var uParam0)
{
	func_187();
	switch (iLocal_284)
	{
		case 0:
			if (func_124(uParam0->f_28[0]))
			{
				func_237();
				iLocal_284++;
			}
			break;
		
		case 1:
			if (func_124(uParam0->f_28[0]))
			{
				if (!func_143())
				{
					if (func_224(&uLocal_119, "RAMP2AU", "RAMP2_LEADIN", "RAMP2_LEADIN_3", 8, 0, 0))
					{
						uLocal_285 = unk_0x3C3438327FFEB224(Local_106, Local_109, 2);
						unk_0x4DD2EB945B4192FD(uParam0->f_28[0], uLocal_285, "misstrvram_2", "hipster_cunts_in_america", 8f, -8f, 513, 0, 1148846080, 0);
						unk_0x211B8384E5838644(uParam0->f_28[0], 0f, 0f, 0.5f, 1, -1, 2500, 2000, 0);
						unk_0x6016A20BFEAEFE11(unk_0x18F7BE9ACB7D08F4(), uParam0->f_28[0], -1, 0, 2);
						unk_0x33A9F3CD35CB0655(1);
						unk_0xE70AD31C98116EDB(0f);
						unk_0xB0AF33801D767F98(0.1f);
						unk_0xD20A8016E96CF139(0f);
						unk_0x089F94E871B1FD43(0.35f);
						unk_0x1A653E20651F0FD4(40f);
						iLocal_284++;
					}
				}
			}
			break;
		
		case 2:
			if (func_124(uParam0->f_28[0]))
			{
				if (!func_143())
				{
					iLocal_284++;
				}
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_237()
{
	Global_14622 = 0;
	func_238();
}

void func_238()
{
	unk_0x815093B4702C59D8();
	Global_16767 = 0;
	if (unk_0x85FDEF76CDBAD589())
	{
		unk_0xBE97F4E2B659331B(0);
		Global_15756 = 6;
	}
}

int func_239(var uParam0, int iParam1)
{
	switch (uParam0->f_16)
	{
		case 0:
			if (*uParam0 == 12)
			{
				if (unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 1826.631f, 4699.115f, 35.38089f, 1812.878f, 4710.457f, 42.05354f, 23.75f, 0, 1, 0))
				{
					if (func_124(uParam0->f_28[0]))
					{
						if (unk_0x15EE504466B7BBD3(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), unk_0x761660F5CE986DC4(uParam0->f_28[0], 1), 1) < 3f)
						{
							if (func_244(2))
							{
								if (func_243(uParam0->f_27))
								{
									func_242(uParam0->f_27, *uParam0);
									func_361("ARE_RC_TRIGGER_CONDITIONS_MET: RC_TRIG_CHAR - Used special case Eps 4 trigger.");
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
				else if (func_124(uParam0->f_28[0]))
				{
					if (func_241(uParam0))
					{
						if (func_244(2))
						{
							if (func_243(uParam0->f_27))
							{
								func_242(uParam0->f_27, *uParam0);
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
				if ((((!unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), -1895.788f, -434.0192f, 40.30126f, -1883.038f, -444.0811f, 50.24509f, 8.5f, 0, 1, 0) && !unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), -1883.576f, -443.6434f, 36.40581f, -1874.826f, -448.0797f, 49.15162f, 8.5f, 0, 1, 0)) && !unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), -1876.343f, -446.2214f, 35.64637f, -1866.952f, -456.5601f, 49.0442f, 8.5f, 0, 1, 0)) && !unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), -1882.997f, -438.9922f, 44.17246f, -1874.079f, -443.342f, 48.69179f, 0.75f, 0, 1, 0)) || unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), -1878.822f, -441.7655f, 44.9175f, -1877.941f, -439.9522f, 47.28982f, 1.25f, 0, 1, 0))
				{
					if (func_124(uParam0->f_28[0]))
					{
						if (func_241(uParam0))
						{
							if (func_244(2))
							{
								if (func_243(uParam0->f_27))
								{
									func_242(uParam0->f_27, *uParam0);
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
				if (!unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 837.0731f, 1261.086f, 366.1592f, 780.8383f, 1260.829f, 351.405f, 17.75f, 0, 1, 0))
				{
					if (func_124(uParam0->f_28[0]))
					{
						if (func_241(uParam0))
						{
							if (func_244(2))
							{
								if (func_243(uParam0->f_27))
								{
									func_242(uParam0->f_27, *uParam0);
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
			else if (func_124(uParam0->f_28[0]))
			{
				if (func_241(uParam0))
				{
					if (func_244(2))
					{
						if (func_243(uParam0->f_27))
						{
							func_242(uParam0->f_27, *uParam0);
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
			if (func_124(uParam0->f_35[0]))
			{
				if (unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), uParam0->f_35[0], 0))
				{
					if (func_244(3))
					{
						func_242(uParam0->f_27, *uParam0);
						return 1;
					}
				}
				else if (iParam1 == 1)
				{
					func_240();
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 1:
			if (unk_0x31F12808DC47A9E5(uParam0->f_35[0]))
			{
				if (!unk_0x74C2FE037DFC8B4A(uParam0->f_35[0], 0))
				{
					if (unk_0x15EE504466B7BBD3(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), unk_0x761660F5CE986DC4(uParam0->f_35[0], 1), 1) < uParam0->f_15)
					{
						if (func_244(2))
						{
							if (func_243(uParam0->f_27))
							{
								func_242(uParam0->f_27, *uParam0);
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
			if (unk_0x15EE504466B7BBD3(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), uParam0->f_17[0 /*3*/], 1) < uParam0->f_15)
			{
				if (func_244(2))
				{
					if (func_243(uParam0->f_27))
					{
						func_242(uParam0->f_27, *uParam0);
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
			if (unk_0x8673F2F1802ADEF7(unk_0x18F7BE9ACB7D08F4(), uParam0->f_17[0 /*3*/], uParam0->f_17[1 /*3*/], 0, 1, 0))
			{
				if (func_244(2))
				{
					if (func_243(uParam0->f_27))
					{
						func_242(uParam0->f_27, *uParam0);
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
				if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
				{
					if (func_124(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0)))
					{
						if (unk_0x0665EB554F07889E(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0), joaat("towtruck")) || unk_0x0665EB554F07889E(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0), joaat("towtruck2")))
						{
							if (unk_0x3C87303CA056FB80(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0), uParam0->f_35[0]))
							{
								if (func_244(3))
								{
									return 1;
								}
							}
						}
						else if ((unk_0x0665EB554F07889E(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0), joaat("cargobob")) || unk_0x0665EB554F07889E(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0), joaat("cargobob2"))) || unk_0x0665EB554F07889E(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0), joaat("cargobob3")))
						{
							if (unk_0xA33B7AEA0022927C(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0)) && unk_0xB851C5B01462C0D0(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0), uParam0->f_35[0]))
							{
								if (func_244(3))
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
				if (unk_0xC3B6FA61D67F5BDD(unk_0x18F7BE9ACB7D08F4()) >= 2f)
				{
					if (unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 245.8885f, 371.9034f, 103.9884f, 241.5898f, 359.6458f, 107.3461f, 1.25f, 0, 1, 0))
					{
						if (func_244(2))
						{
							if (func_243(uParam0->f_27))
							{
								func_242(uParam0->f_27, *uParam0);
								func_361("RC5_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - Eps 2 special case trigger used");
								return 1;
							}
						}
					}
				}
			}
			else if (*uParam0 == 46)
			{
				if (unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), -164.2046f, 277.4866f, 91.55322f, -153.6f, 277.4061f, 97.33813f, 10f, 0, 1, 0))
				{
					return 0;
				}
			}
			else if (*uParam0 == 31)
			{
				if (unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 2728.948f, 4143.44f, 42.29295f, 2722.213f, 4144.521f, 45.43182f, 10f, 0, 1, 0))
				{
					if (func_244(2))
					{
						if (func_243(1))
						{
							func_242(1, *uParam0);
							func_361("RC_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - RC_MAUDE_1 special case vehicle launch area");
							return 1;
						}
					}
				}
			}
			else if (*uParam0 == 39)
			{
				if (unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), -992.4995f, 358.7455f, 96.3735f, -1021.94f, 361.8888f, 65.36148f, 30f, 0, 1, 0))
				{
					if (!unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), -983.5426f, 369.1104f, 68.46017f, -1028.566f, 395.4613f, 94.57245f, 15f, 0, 1, 0))
					{
						if (!unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), -983.875f, 346.7556f, 68.02096f, -1021.451f, 336.3458f, 93.18714f, 14.5f, 0, 1, 0))
						{
							if (func_244(2))
							{
								if (func_243(uParam0->f_27))
								{
									func_242(uParam0->f_27, *uParam0);
									func_361("RC_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - RC_NIGEL_1B special case vehicle launch area");
									return 1;
								}
							}
						}
					}
				}
			}
			if (unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), uParam0->f_17[0 /*3*/], uParam0->f_17[1 /*3*/], uParam0->f_24, 0, 1, 0))
			{
				if (*uParam0 == 45)
				{
					if (unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 2338.697f, 2597.037f, 45.39052f, 2324.003f, 2597.185f, 47.74961f, 8.5f, 0, 1, 0))
					{
						return 0;
					}
				}
				if (func_244(2))
				{
					if (func_243(uParam0->f_27))
					{
						func_242(uParam0->f_27, *uParam0);
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

void func_240()
{
	func_30(&(Global_95145.f_2875), &Global_95145, 0, 1, 1, 0);
}

int func_241(var uParam0)
{
	float fVar0;
	
	if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0) && uParam0->f_27)
	{
		if (*uParam0 == 27 || *uParam0 == 30)
		{
			fVar0 = 1f;
		}
		else
		{
			fVar0 = 5f;
		}
		if (unk_0x15EE504466B7BBD3(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), unk_0x761660F5CE986DC4(uParam0->f_28[0], 1), 1) < (uParam0->f_15 + fVar0))
		{
			return 1;
		}
	}
	else if (unk_0x15EE504466B7BBD3(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), unk_0x761660F5CE986DC4(uParam0->f_28[0], 1), 1) < uParam0->f_15)
	{
		return 1;
	}
	return 0;
}

void func_242(int iParam0, int iParam1)
{
	if (iParam0 == 1)
	{
		if (!func_127(iParam1))
		{
			return;
		}
		if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			func_361("RC_STOP_PLAYER_VEHICLE_CHECK: Stopping player's vehicle.");
			if (unk_0x8E8D5D5EC87F35D7(unk_0x18F7BE9ACB7D08F4()) || unk_0x3C08111698DB7162(unk_0x18F7BE9ACB7D08F4()))
			{
				func_361("RC_STOP_PLAYER_VEHICLE_CHECK: Turning off engine for plane or helicopter.");
				unk_0x0F3F86C855582784(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0), 0, 1, 0);
			}
			func_187();
		}
	}
}

int func_243(bool bParam0)
{
	int iVar0;
	
	if (unk_0x557001354138B7FB(unk_0x0A91D180DDC7A1B8()))
	{
		if (unk_0xB4FD6D3F49C8B3B4(unk_0x18F7BE9ACB7D08F4()))
		{
			return 1;
		}
		else if (bParam0)
		{
			if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
			{
				iVar0 = unk_0x952F33F151D40D1A();
				if (func_154(iVar0))
				{
					if (unk_0x8E8D5D5EC87F35D7(unk_0x18F7BE9ACB7D08F4()) || unk_0x3C08111698DB7162(unk_0x18F7BE9ACB7D08F4()))
					{
						if ((!unk_0x5BEDB1779AE301BA(iVar0) && !unk_0x2409C4B1759B2661(iVar0)) && unk_0x2A72627520A107B5(iVar0) < 1f)
						{
							return 1;
						}
					}
					else if (!unk_0x2409C4B1759B2661(iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_244(int iParam0)
{
	int iVar0;
	
	if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
	{
		if (unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4()))
		{
			if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
			{
				iVar0 = func_221();
				if (!func_39(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x16034CA8E32730C9(unk_0x8CFC7D6E1DA5D304()) || unk_0x2409C4B1759B2661(unk_0x18F7BE9ACB7D08F4())) || unk_0xDB5E52F2078862CA(unk_0x18F7BE9ACB7D08F4())) || unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4())) || unk_0x5D063CF6A2578E13(unk_0x18F7BE9ACB7D08F4())) || unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1)) || unk_0x869BE9FEE7F5316B(unk_0x8CFC7D6E1DA5D304())) || unk_0x8E6B1A41766B5731(unk_0x18F7BE9ACB7D08F4(), 0)) || func_216()) || Global_103598) || Global_25235) || func_250()) || func_231(8, -1)) || func_92()) || func_249()) || func_248()) || func_247()) || Global_104551.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1) || func_216()) || Global_25235) || func_250()) || func_231(8, -1)) || func_248()) || func_92()) || func_249()) || func_247()) || Global_104551.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x16034CA8E32730C9(unk_0x8CFC7D6E1DA5D304()) || unk_0x2409C4B1759B2661(unk_0x18F7BE9ACB7D08F4())) || unk_0xDB5E52F2078862CA(unk_0x18F7BE9ACB7D08F4())) || unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4())) || unk_0x5D063CF6A2578E13(unk_0x18F7BE9ACB7D08F4())) || unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1)) || unk_0x869BE9FEE7F5316B(unk_0x8CFC7D6E1DA5D304())) || unk_0x8E6B1A41766B5731(unk_0x18F7BE9ACB7D08F4(), 0)) || func_216()) || Global_103598) || Global_25235) || func_250()) || func_231(8, -1)) || func_248()) || func_92()) || func_249()) || func_247()) || Global_104551.f_7658.f_919[iVar0] == 5) || Global_36406 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4()) || unk_0x5D063CF6A2578E13(unk_0x18F7BE9ACB7D08F4())) || unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1)) || unk_0x8E6B1A41766B5731(unk_0x18F7BE9ACB7D08F4(), 0)) || func_216()) || Global_103598) || Global_25235) || func_250()) || func_231(8, -1)) || func_92()) || func_249()) || func_247()) || Global_104551.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_216() || unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) > 0) || func_231(8, -1)) || func_247()) || func_246()) || Global_104551.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_231(8, -1) || func_92()) || func_249()) || func_246()) || func_245())
						{
							return 0;
						}
						if ((unk_0x51CFE20A158947F4() && unk_0x32C5C8379484CA74() != 3) && unk_0xCAC20ED19D675C6E() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4()))
						{
							if ((((((((((((((unk_0x8E6B1A41766B5731(unk_0x18F7BE9ACB7D08F4(), 0) || unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) > 0) || unk_0x2409C4B1759B2661(unk_0x18F7BE9ACB7D08F4())) || unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4())) || unk_0x5D063CF6A2578E13(unk_0x18F7BE9ACB7D08F4())) || unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1)) || unk_0x869BE9FEE7F5316B(unk_0x8CFC7D6E1DA5D304())) || func_216()) || Global_25235) || func_250()) || func_231(8, -1)) || func_249()) || func_248()) || func_247()) || Global_104551.f_7658.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x8E6B1A41766B5731(unk_0x18F7BE9ACB7D08F4(), 0) || !unk_0xA126D857D0E10968(unk_0x8CFC7D6E1DA5D304())) || !unk_0x16034CA8E32730C9(unk_0x8CFC7D6E1DA5D304())) || !unk_0xC8AB6A5E6C1E6613()) || unk_0x2409C4B1759B2661(unk_0x18F7BE9ACB7D08F4())) || unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4())) || unk_0x5D063CF6A2578E13(unk_0x18F7BE9ACB7D08F4())) || unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1)) || func_216()) || func_249()) || Global_103598) || Global_25235) || func_250()) || Global_36991) || func_231(8, -1)) || func_248()) || func_246()) || func_247()) || Global_104551.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x8E6B1A41766B5731(unk_0x18F7BE9ACB7D08F4(), 0) || !unk_0xA126D857D0E10968(unk_0x8CFC7D6E1DA5D304())) || !unk_0x16034CA8E32730C9(unk_0x8CFC7D6E1DA5D304())) || !unk_0xC8AB6A5E6C1E6613()) || unk_0xAAC7941A7E0EE97A(unk_0x8CFC7D6E1DA5D304(), 0)) || unk_0x2409C4B1759B2661(unk_0x18F7BE9ACB7D08F4())) || unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1)) || unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4())) || unk_0x5D063CF6A2578E13(unk_0x18F7BE9ACB7D08F4())) || unk_0x00C9F17EF169BFC9(unk_0x18F7BE9ACB7D08F4())) || unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1)) || unk_0x869BE9FEE7F5316B(unk_0x8CFC7D6E1DA5D304())) || func_216()) || Global_103598) || Global_25235) || func_250()) || func_231(8, -1)) || func_248()) || func_246()) || func_92()) || func_249()) || func_247())
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

var func_245()
{
	return Global_92868.f_1;
}

int func_246()
{
	if (Global_89896 != -1)
	{
		return unk_0xB03A1684359C50A1(Global_83762[Global_89896 /*34*/].f_15, 13);
	}
	return 0;
}

int func_247()
{
	if (unk_0xE7FAF8E78F7D3A73(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_248()
{
	if (Global_71112)
	{
		return 1;
	}
	else if (Global_55895 && !Global_55901)
	{
		return 1;
	}
	return 0;
}

bool func_249()
{
	return Global_92881.f_316 > 0;
}

var func_250()
{
	return Global_1312854;
}

void func_251(var uParam0, var uParam1)
{
	if (unk_0x42AFCF847E4360A0())
	{
		if (func_124(unk_0x18F7BE9ACB7D08F4()))
		{
			unk_0x2E7733B22DA0B523("Trevor", unk_0x18F7BE9ACB7D08F4(), unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()));
		}
		switch (*uParam0)
		{
			case 52:
				if (func_124(uParam0->f_28[0]))
				{
					(*uParam1)[0] = "TriggerHappy_WhiteTrash";
					unk_0x2E7733B22DA0B523((*uParam1)[0], uParam0->f_28[0], 0);
				}
				if (func_124(uParam0->f_28[1]))
				{
					(*uParam1)[1] = "Nervous_WhiteTrash";
					unk_0x2E7733B22DA0B523((*uParam1)[1], uParam0->f_28[1], 0);
				}
				break;
			
			case 53:
				if (func_124(uParam0->f_28[0]))
				{
					(*uParam1)[0] = "Rampage_Hipster";
					unk_0x2E7733B22DA0B523((*uParam1)[0], uParam0->f_28[0], 0);
				}
				break;
			
			case 54:
				if (func_124(uParam0->f_28[0]))
				{
					(*uParam1)[0] = "Armed_Mexican_Goon";
					unk_0x2E7733B22DA0B523((*uParam1)[0], uParam0->f_28[0], 0);
					unk_0x58DE45421C2560C5((*uParam1)[0], 8, 1, 0, 0);
				}
				if (func_124(uParam0->f_28[1]))
				{
					(*uParam1)[1] = "Mexican_Goon";
					unk_0x2E7733B22DA0B523((*uParam1)[1], uParam0->f_28[1], 0);
				}
				break;
			
			case 55:
				if (func_124(uParam0->f_28[0]))
				{
					(*uParam1)[0] = "Thug";
					unk_0x2E7733B22DA0B523((*uParam1)[0], uParam0->f_28[0], 0);
					unk_0x58DE45421C2560C5((*uParam1)[0], 10, 0, 1, 0);
				}
				if (func_124(uParam0->f_28[1]))
				{
					(*uParam1)[1] = "Armed_Thug";
					unk_0x2E7733B22DA0B523((*uParam1)[1], uParam0->f_28[1], 0);
					unk_0x58DE45421C2560C5((*uParam1)[1], 10, 1, 0, 0);
				}
				break;
			
			case 56:
				if (func_124(uParam0->f_28[0]))
				{
					(*uParam1)[0] = "Army_Guy_Right";
					unk_0x2E7733B22DA0B523((*uParam1)[0], uParam0->f_28[0], 0);
				}
				if (func_124(uParam0->f_28[1]))
				{
					(*uParam1)[1] = "Army_Guy_Left";
					unk_0x2E7733B22DA0B523((*uParam1)[1], uParam0->f_28[1], 0);
				}
				break;
			}
	}
}

void func_252(int iParam0, char* sParam1, struct<3> Param2)
{
	if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
	{
		if (!unk_0xFAFFA408239A026B(sParam1))
		{
			if (Global_35859 == 17)
			{
				if (*iParam0 != -1)
				{
					func_258(iParam0);
				}
			}
			else if (func_257())
			{
				if (*iParam0 != -1)
				{
					func_258(iParam0);
				}
			}
			else if (*iParam0 == -1)
			{
				if (func_256(unk_0x18F7BE9ACB7D08F4(), Param2, 1) <= 100f)
				{
					func_255(iParam0, 1);
				}
			}
			else
			{
				switch (func_254(*iParam0))
				{
					case 1:
						if (unk_0x9D39145AD645E383(sParam1, "JOSH_1_INT_CONCAT"))
						{
							unk_0x2638484EFB343584(sParam1, 14, 8);
						}
						else
						{
							unk_0xFC829E6465CFFAC1(sParam1, 8);
						}
						unk_0xA4F0831C61D8389E(2);
						func_253(*iParam0, 1);
						break;
					
					case 2:
						unk_0xFF0F9807F8F0062F(0);
						unk_0x183705334A83083E();
						unk_0xA4F0831C61D8389E(0);
						func_253(*iParam0, 0);
						break;
				}
				if (func_256(unk_0x18F7BE9ACB7D08F4(), Param2, 1) > 120f)
				{
					func_258(iParam0);
				}
			}
		}
	}
}

void func_253(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (Global_70848 == iParam0)
		{
			Global_70849 = iParam0;
		}
	}
	else if (Global_70849 == iParam0)
	{
		Global_70849 = -1;
	}
}

int func_254(int iParam0)
{
	if (Global_70848 == iParam0)
	{
		if (Global_70849 == -1)
		{
			if (Global_70847 < unk_0x756DE011CEDBBD7E())
			{
				return 1;
			}
		}
	}
	else if (Global_70849 == iParam0)
	{
		return 2;
	}
	return 0;
}

void func_255(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	
	if (Global_70845 < 5)
	{
		Global_70834[Global_70845 /*2*/] = 0;
		Global_70834[Global_70845 /*2*/].f_1 = iParam1;
		bVar0 = false;
		while (!bVar0)
		{
			bVar0 = true;
			iVar1 = 0;
			while (iVar1 < Global_70845)
			{
				if (Global_70834[iVar1 /*2*/] == Global_70834[Global_70845 /*2*/])
				{
					Global_70834[Global_70845 /*2*/]++;
					bVar0 = false;
				}
				iVar1++;
			}
		}
		*iParam0 = Global_70834[Global_70845 /*2*/];
		Global_70845++;
		Global_70846 = 1;
	}
	else
	{
		*iParam0 = -1;
	}
}

float func_256(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x74C2FE037DFC8B4A(iParam0, 0))
	{
		Var0 = { unk_0x761660F5CE986DC4(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x761660F5CE986DC4(iParam0, 0) };
	}
	return unk_0x15EE504466B7BBD3(Var0, Param1, iParam4);
}

bool func_257()
{
	return Global_90283;
}

void func_258(int iParam0)
{
	unk_0xFF0F9807F8F0062F(0);
	unk_0x183705334A83083E();
	func_259(iParam0);
}

void func_259(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (*iParam0 == -1)
	{
		return;
	}
	if (Global_70849 == *iParam0)
	{
		func_253(*iParam0, 0);
	}
	if (Global_70848 == *iParam0)
	{
		Global_70848 = -1;
	}
	bVar0 = false;
	iVar1 = 0;
	while (!bVar0 && iVar1 < Global_70845)
	{
		if (Global_70834[iVar1 /*2*/] == *iParam0)
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
	while (iVar2 <= (Global_70845 - 2))
	{
		Global_70834[iVar2 /*2*/] = Global_70834[iVar2 + 1 /*2*/];
		Global_70834[iVar2 /*2*/].f_1 = Global_70834[iVar2 + 1 /*2*/].f_1;
		iVar2++;
	}
	Global_70834[(Global_70845 - 1) /*2*/] = -1;
	Global_70834[(Global_70845 - 1) /*2*/].f_1 = 3;
	Global_70845 = (Global_70845 - 1);
	Global_70846 = 1;
	Global_70847 = unk_0x756DE011CEDBBD7E();
	*iParam0 = -1;
}

void func_260(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_182();
	}
	if (iParam0 == -1)
	{
		return;
	}
	Global_103638[iParam0 /*10*/].f_1 = 1;
}

bool func_261(int iParam0)
{
	return Global_103638[iParam0 /*10*/].f_1;
}

void func_262(var uParam0)
{
	if (*uParam0 == 52)
	{
		func_361(" RAMPAGE 1 - FORCE FREEZE CHAIRS AND PRE-RELEASE FOR B*2124538");
		if (unk_0x31F12808DC47A9E5(uParam0->f_41[3]))
		{
			unk_0x73D7E57BF0ED7FEB(uParam0->f_41[3], 1);
			unk_0xF0862FA354B164C4(&(uParam0->f_41[3]));
			uParam0->f_41[3] = 0;
		}
		if (unk_0x31F12808DC47A9E5(uParam0->f_41[4]))
		{
			unk_0x73D7E57BF0ED7FEB(uParam0->f_41[4], 1);
			unk_0xF0862FA354B164C4(&(uParam0->f_41[4]));
			uParam0->f_41[4] = 0;
		}
	}
}

int func_263(var uParam0)
{
	if ((*uParam0 == 54 || *uParam0 == 55) || *uParam0 == 56)
	{
		if (unk_0xC37BC4D4141B3EC0(unk_0x18F7BE9ACB7D08F4()) > 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_264(var uParam0)
{
	switch (*uParam0)
	{
		case 52:
			func_339(uParam0);
			iLocal_299 = func_338();
			break;
		
		case 53:
			func_332(uParam0);
			iLocal_299 = func_330();
			break;
		
		case 54:
			func_329(uParam0);
			break;
		
		case 55:
			func_328(uParam0);
			iLocal_299 = func_327();
			break;
		
		case 56:
			func_265(uParam0);
			break;
		
		default:
			break;
	}
	if (iLocal_299 != 0)
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

void func_265(var uParam0)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	sVar0 = "misstvrram_5";
	iVar1 = joaat("s_m_y_marine_03");
	iVar2 = joaat("crusader");
	unk_0x9016574B77A748EE(iVar1);
	unk_0x9016574B77A748EE(iVar2);
	unk_0x831CD0FBFB26EC7E(sVar0);
	unk_0xAEC679281346B372(joaat("weapon_grenadelauncher"), 31, 0);
	while ((!unk_0xEDFE27D1AEA0EA7F(iVar1) || !unk_0xEDFE27D1AEA0EA7F(iVar2)) || !unk_0x028356968FDD2DF2(sVar0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!func_325(&(uParam0->f_28[0]), iVar1, -1299.4f, 2506.24f, 21.07f, -122.79f, 0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_324(&(uParam0->f_28[0]));
	unk_0x97236214E312A8E7(uParam0->f_28[0], "RAMP:PED 0");
	unk_0xB5746603774C4C9D(uParam0->f_28[0], sVar0, "marines_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
	unk_0xDEA702F2138E0B35(uParam0->f_28[0], 0, 0, 0, 0);
	unk_0xDEA702F2138E0B35(uParam0->f_28[0], 1, 0, 0, 0);
	unk_0xDEA702F2138E0B35(uParam0->f_28[0], 2, 0, 0, 0);
	unk_0xDEA702F2138E0B35(uParam0->f_28[0], 3, 0, 0, 0);
	unk_0xDEA702F2138E0B35(uParam0->f_28[0], 4, 0, 0, 0);
	unk_0xDEA702F2138E0B35(uParam0->f_28[0], 5, 0, 0, 0);
	unk_0xDEA702F2138E0B35(uParam0->f_28[0], 6, 0, 0, 0);
	unk_0xDEA702F2138E0B35(uParam0->f_28[0], 7, 0, 0, 0);
	unk_0xDEA702F2138E0B35(uParam0->f_28[0], 8, 0, 0, 0);
	unk_0xDEA702F2138E0B35(uParam0->f_28[0], 9, 0, 0, 0);
	unk_0xDEA702F2138E0B35(uParam0->f_28[0], 10, 0, 0, 0);
	unk_0xDEA702F2138E0B35(uParam0->f_28[0], 11, 0, 0, 0);
	unk_0xB4B486C789609375(uParam0->f_28[0], 0);
	unk_0xB4B486C789609375(uParam0->f_28[0], 1);
	unk_0xB4B486C789609375(uParam0->f_28[0], 2);
	unk_0xB4B486C789609375(uParam0->f_28[0], 3);
	unk_0xB4B486C789609375(uParam0->f_28[0], 4);
	unk_0xB4B486C789609375(uParam0->f_28[0], 5);
	unk_0xB4B486C789609375(uParam0->f_28[0], 6);
	unk_0xB4B486C789609375(uParam0->f_28[0], 7);
	unk_0xB4B486C789609375(uParam0->f_28[0], 8);
	while (!func_325(&(uParam0->f_28[1]), iVar1, -1299.49f, 2505.53f, 21.05f, -101.94f, 0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_324(&(uParam0->f_28[1]));
	unk_0xDEA702F2138E0B35(uParam0->f_28[1], 0, 1, 0, 0);
	unk_0xDEA702F2138E0B35(uParam0->f_28[1], 1, 0, 0, 0);
	unk_0xDEA702F2138E0B35(uParam0->f_28[1], 2, 0, 0, 0);
	unk_0xDEA702F2138E0B35(uParam0->f_28[1], 3, 0, 0, 0);
	unk_0xDEA702F2138E0B35(uParam0->f_28[1], 4, 0, 0, 0);
	unk_0xDEA702F2138E0B35(uParam0->f_28[1], 5, 0, 0, 0);
	unk_0xDEA702F2138E0B35(uParam0->f_28[1], 6, 0, 0, 0);
	unk_0xDEA702F2138E0B35(uParam0->f_28[1], 7, 0, 0, 0);
	unk_0xDEA702F2138E0B35(uParam0->f_28[1], 8, 0, 0, 0);
	unk_0xDEA702F2138E0B35(uParam0->f_28[1], 9, 0, 0, 0);
	unk_0xDEA702F2138E0B35(uParam0->f_28[1], 10, 0, 0, 0);
	unk_0xDEA702F2138E0B35(uParam0->f_28[1], 11, 0, 0, 0);
	unk_0xB4B486C789609375(uParam0->f_28[1], 0);
	unk_0xB4B486C789609375(uParam0->f_28[1], 1);
	unk_0xB4B486C789609375(uParam0->f_28[1], 2);
	unk_0xB4B486C789609375(uParam0->f_28[1], 3);
	unk_0xB4B486C789609375(uParam0->f_28[1], 4);
	unk_0xB4B486C789609375(uParam0->f_28[1], 5);
	unk_0xB4B486C789609375(uParam0->f_28[1], 6);
	unk_0xB4B486C789609375(uParam0->f_28[1], 7);
	unk_0xB4B486C789609375(uParam0->f_28[1], 8);
	unk_0x97236214E312A8E7(uParam0->f_28[1], "RAMP:PED 1");
	unk_0xB5746603774C4C9D(uParam0->f_28[1], sVar0, "marines_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
	while (!func_323(&(uParam0->f_35[0]), iVar2, -1298.16f, 2504.153f, 21.062f, 165.48f))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x9B53B2691E2B1F79(uParam0->f_35[0], 1084227584);
	func_322(&(uParam0->f_35[0]));
	unk_0xDE2241F5D2C60ED8(uParam0->f_35[0], 1, 0);
	unk_0xDE2241F5D2C60ED8(uParam0->f_35[0], 1, 1);
	unk_0x73D7E57BF0ED7FEB(uParam0->f_35[0], 1);
	if (!func_266(&(uParam0->f_41[0]), joaat("weapon_grenadelauncher"), -1297.84f, 2505.91f, 19.34f, func_321(-0.5f)))
	{
	}
	else
	{
		unk_0xF342BF6A7A4C7A8F(uParam0->f_41[0], 0, 0);
		unk_0x990FFD4FB6ADD630(uParam0->f_41[0], -1297.84f, 2505.91f, 19.34f, 1, 0, 0, 1);
		unk_0xB88121FF8A34A66F(uParam0->f_41[0], func_321(-0.5f));
		unk_0x73D7E57BF0ED7FEB(uParam0->f_41[0], 1);
	}
	StringCopy(&(uParam0->f_9), "TRVRAM_5_CON", 24);
	uParam0->f_27 = 0;
	unk_0x419C9117019F2E5A(iVar1);
	unk_0x419C9117019F2E5A(iVar2);
}

int func_266(var uParam0, int iParam1, struct<3> Param2, float fParam5)
{
	int iVar0;
	var uVar1;
	int iVar8;
	
	if (unk_0x31F12808DC47A9E5(*uParam0))
	{
		unk_0x5BE35A26B9097351(uParam0);
		*uParam0 = 0;
	}
	iVar0 = unk_0x00AA11D4077A2C43(iParam1);
	unk_0x9016574B77A748EE(iVar0);
	iVar8 = unk_0x5AFB8ED811F05E4D() + 10000;
	while (unk_0x5AFB8ED811F05E4D() < iVar8)
	{
		if (unk_0xEDFE27D1AEA0EA7F(iVar0))
		{
			*uParam0 = unk_0x454172E873382F45(iParam1, -1, Param2, 1, 1065353216, 0, 0, 1);
			unk_0x419C9117019F2E5A(iVar0);
			if (func_320(&uVar1, iParam1, joaat("gun_root")))
			{
				if (unk_0x042CDFF943D1AFC1(*uParam0, func_267(&uVar1, iParam1, joaat("gun_root"), 0)))
				{
					unk_0x7D867389A6091BEA(*uParam0, func_267(&uVar1, iParam1, joaat("gun_root"), 0));
				}
				else if (unk_0x042CDFF943D1AFC1(*uParam0, func_267(&uVar1, iParam1, joaat("gun_root"), 1)))
				{
					unk_0x7D867389A6091BEA(*uParam0, func_267(&uVar1, iParam1, joaat("gun_root"), 1));
				}
			}
			if (unk_0x31F12808DC47A9E5(*uParam0))
			{
				unk_0x990FFD4FB6ADD630(*uParam0, Param2, 1, 0, 0, 1);
				unk_0xB88121FF8A34A66F(*uParam0, fParam5);
				return 1;
			}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x419C9117019F2E5A(iVar0);
	return 0;
}

int func_267(var uParam0, int iParam1, int iParam2, int iParam3)
{
	struct<5> Var0;
	int iVar7;
	int iVar8;
	
	func_319(&Var0, *uParam0, uParam0->f_4, uParam0->f_6, uParam0->f_1);
	iVar8 = 0;
	while (func_268(&Var0, iParam1, iVar7, 0))
	{
		if (Var0.f_4 == iParam2)
		{
			if (iParam3 == iVar8)
			{
				return Var0.f_0;
			}
			iVar8++;
		}
		iVar7++;
	}
	return 0;
}

bool func_268(var uParam0, int iParam1, int iParam2, bool bParam3)
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
	var uVar15;
	struct<4> Var54;
	
	func_319(uParam0, 0, 989182658, 0, 0);
	switch (iParam1)
	{
		case joaat("weapon_pistol"):
			if (func_318(iLocal_105))
			{
				if (!func_309(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_pistol"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_319(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						
						case 1:
							func_319(uParam0, joaat("component_pistol_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_319(uParam0, joaat("component_pistol_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_319(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 4:
							func_319(uParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 5:
							func_319(uParam0, joaat("component_pistol_varmod_luxe"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_319(uParam0, joaat("component_pistol_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_319(uParam0, joaat("component_pistol_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_319(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 3:
							func_319(uParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 4:
							func_319(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_319(uParam0, joaat("component_pistol_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_319(uParam0, joaat("component_pistol_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_319(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 3:
						func_319(uParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 4:
						func_319(uParam0, joaat("component_pistol_varmod_luxe"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam2)
			{
				case 0:
					func_319(uParam0, joaat("component_combatpistol_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_319(uParam0, joaat("component_combatpistol_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_319(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 3:
					func_319(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 4:
					func_319(uParam0, joaat("component_combatpistol_varmod_lowrider"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam2)
			{
				case 0:
					func_319(uParam0, joaat("component_appistol_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_319(uParam0, joaat("component_appistol_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_319(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 3:
					func_319(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 4:
					func_319(uParam0, joaat("component_appistol_varmod_luxe"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam2)
			{
				case 0:
					func_319(uParam0, joaat("component_microsmg_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_319(uParam0, joaat("component_microsmg_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_319(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 3:
					func_319(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
					break;
				
				case 4:
					func_319(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 5:
					func_319(uParam0, joaat("component_microsmg_varmod_luxe"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			if (func_318(iLocal_105))
			{
				if (!func_309(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_smg"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_319(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						
						case 1:
							func_319(uParam0, joaat("component_smg_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_319(uParam0, joaat("component_smg_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_319(uParam0, joaat("component_smg_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 4:
							func_319(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 5:
							func_319(uParam0, joaat("component_at_scope_macro_02"), joaat("WAPScop"), 1, 0);
							break;
						
						case 6:
							func_319(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 7:
							func_319(uParam0, joaat("component_smg_varmod_luxe"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_319(uParam0, joaat("component_smg_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_319(uParam0, joaat("component_smg_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_319(uParam0, joaat("component_smg_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 3:
							func_319(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 4:
							func_319(uParam0, joaat("component_at_scope_macro_02"), joaat("WAPScop"), 1, 0);
							break;
						
						case 5:
							func_319(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 6:
							func_319(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_319(uParam0, joaat("component_smg_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_319(uParam0, joaat("component_smg_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_319(uParam0, joaat("component_smg_clip_03"), joaat("WAPClip"), 3, 0);
						break;
					
					case 3:
						func_319(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 4:
						func_319(uParam0, joaat("component_at_scope_macro_02"), joaat("WAPScop"), 1, 0);
						break;
					
					case 5:
						func_319(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 6:
						func_319(uParam0, joaat("component_smg_varmod_luxe"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			if (func_318(iLocal_105))
			{
				if (!func_309(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_assaultrifle"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_319(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						
						case 1:
							func_319(uParam0, joaat("component_assaultrifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_319(uParam0, joaat("component_assaultrifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_319(uParam0, joaat("component_assaultrifle_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 4:
							func_319(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 5:
							func_319(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 6:
							func_319(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
							break;
						
						case 7:
							func_319(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 8:
							func_319(uParam0, joaat("component_assaultrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_319(uParam0, joaat("component_assaultrifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_319(uParam0, joaat("component_assaultrifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_319(uParam0, joaat("component_assaultrifle_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 3:
							func_319(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 4:
							func_319(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 5:
							func_319(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
							break;
						
						case 6:
							func_319(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 7:
							func_319(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_319(uParam0, joaat("component_assaultrifle_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_319(uParam0, joaat("component_assaultrifle_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_319(uParam0, joaat("component_assaultrifle_clip_03"), joaat("WAPClip"), 3, 0);
						break;
					
					case 3:
						func_319(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 4:
						func_319(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 5:
						func_319(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
						break;
					
					case 6:
						func_319(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 7:
						func_319(uParam0, joaat("component_assaultrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			if (func_318(iLocal_105))
			{
				if (!func_309(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_carbinerifle"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_319(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						
						case 1:
							func_319(uParam0, joaat("component_carbinerifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_319(uParam0, joaat("component_carbinerifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_319(uParam0, joaat("component_carbinerifle_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 4:
							func_319(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 5:
							func_319(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 6:
							func_319(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
							break;
						
						case 7:
							func_319(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 8:
							func_319(uParam0, joaat("component_carbinerifle_varmod_luxe"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_319(uParam0, joaat("component_carbinerifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_319(uParam0, joaat("component_carbinerifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_319(uParam0, joaat("component_carbinerifle_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 3:
							func_319(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 4:
							func_319(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 5:
							func_319(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
							break;
						
						case 6:
							func_319(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 7:
							func_319(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_319(uParam0, joaat("component_carbinerifle_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_319(uParam0, joaat("component_carbinerifle_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_319(uParam0, joaat("component_carbinerifle_clip_03"), joaat("WAPClip"), 3, 0);
						break;
					
					case 3:
						func_319(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 4:
						func_319(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 5:
						func_319(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
						break;
					
					case 6:
						func_319(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 7:
						func_319(uParam0, joaat("component_carbinerifle_varmod_luxe"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam2)
			{
				case 0:
					func_319(uParam0, joaat("component_advancedrifle_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_319(uParam0, joaat("component_advancedrifle_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_319(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 3:
					func_319(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
					break;
				
				case 4:
					func_319(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 5:
					func_319(uParam0, joaat("component_advancedrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam2)
			{
				case 0:
					func_319(uParam0, joaat("component_mg_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_319(uParam0, joaat("component_mg_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_319(uParam0, joaat("component_at_scope_small_02"), joaat("WAPScop"), 1, 0);
					break;
				
				case 3:
					func_319(uParam0, joaat("component_mg_varmod_lowrider"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			if (func_318(iLocal_105))
			{
				if (!func_309(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_combatmg"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_319(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						
						case 1:
							func_319(uParam0, joaat("component_combatmg_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_319(uParam0, joaat("component_combatmg_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_319(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 4:
							func_319(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
							break;
						
						case 5:
							func_319(uParam0, joaat("component_combatmg_varmod_lowrider"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_319(uParam0, joaat("component_combatmg_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_319(uParam0, joaat("component_combatmg_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_319(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 3:
							func_319(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
							break;
						
						case 4:
							func_319(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_319(uParam0, joaat("component_combatmg_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_319(uParam0, joaat("component_combatmg_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_319(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 3:
						func_319(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
						break;
					
					case 4:
						func_319(uParam0, joaat("component_combatmg_varmod_lowrider"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam2)
			{
				case 0:
					func_319(uParam0, joaat("component_assaultshotgun_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_319(uParam0, joaat("component_assaultshotgun_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_319(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 3:
					func_319(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 4:
					func_319(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam2)
			{
				case 0:
					func_319(uParam0, joaat("component_sniperrifle_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_319(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 2:
					func_319(uParam0, joaat("component_at_scope_large"), joaat("WAPScop"), 1, 1);
					break;
				
				case 3:
					func_319(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 0);
					break;
				
				case 4:
					func_319(uParam0, joaat("component_sniperrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			if (func_318(iLocal_105))
			{
				if (!func_309(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_heavysniper"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_319(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						
						case 1:
							func_319(uParam0, joaat("component_heavysniper_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_319(uParam0, joaat("component_at_scope_large"), joaat("WAPScop"), 1, 1);
							break;
						
						case 3:
							func_319(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_319(uParam0, joaat("component_heavysniper_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_319(uParam0, joaat("component_at_scope_large"), joaat("WAPScop"), 1, 1);
							break;
						
						case 2:
							func_319(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 0);
							break;
						
						case 3:
							func_319(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_319(uParam0, joaat("component_heavysniper_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_319(uParam0, joaat("component_at_scope_large"), joaat("WAPScop"), 1, 1);
						break;
					
					case 2:
						func_319(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam2)
			{
				case 0:
					func_319(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 1:
					func_319(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 2:
					func_319(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam2)
			{
				case 0:
					func_319(uParam0, joaat("component_minigun_clip_01"), joaat("WAPClip"), 1, 1);
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam2)
			{
				case 0:
					func_319(uParam0, joaat("component_assaultsmg_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_319(uParam0, joaat("component_assaultsmg_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_319(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 3:
					func_319(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
					break;
				
				case 4:
					func_319(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 5:
					func_319(uParam0, joaat("component_assaultsmg_varmod_lowrider"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam2)
			{
				case 0:
					func_319(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
					break;
				
				case 1:
					func_319(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 2:
					func_319(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam2)
			{
				case 0:
					func_319(uParam0, joaat("component_pistol50_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_319(uParam0, joaat("component_pistol50_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_319(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
					break;
				
				case 3:
					func_319(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
					break;
				
				case 4:
					func_319(uParam0, joaat("component_pistol50_varmod_luxe"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam2)
			{
				case 0:
					func_319(uParam0, joaat("component_sawnoffshotgun_varmod_luxe"), joaat("gun_root"), 1, 0);
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle_mk2"):
			switch (iParam2)
			{
				case 0:
					func_319(uParam0, joaat("component_assaultrifle_mk2_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_319(uParam0, joaat("component_assaultrifle_mk2_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_319(uParam0, joaat("component_assaultrifle_mk2_clip_tracer"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_319(uParam0, joaat("component_assaultrifle_mk2_clip_incendiary"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_319(uParam0, joaat("component_assaultrifle_mk2_clip_armorpiercing"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_319(uParam0, joaat("component_assaultrifle_mk2_clip_fmj"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_319(uParam0, 0, joaat("WAPGrip"), 1, 1);
					break;
				
				case 7:
					func_319(uParam0, joaat("component_at_ar_afgrip_02"), joaat("WAPGrip"), 2, 0);
					break;
				
				case 8:
					func_319(uParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
					break;
				
				case 9:
					func_319(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr_2"), 2, 0);
					break;
				
				case 10:
					func_319(uParam0, 0, joaat("WAPScop_2"), 1, 1);
					break;
				
				case 11:
					func_319(uParam0, joaat("component_at_sights"), joaat("WAPScop_2"), 2, 0);
					break;
				
				case 12:
					func_319(uParam0, joaat("component_at_scope_macro_mk2"), joaat("WAPScop_2"), 3, 0);
					break;
				
				case 13:
					func_319(uParam0, joaat("component_at_scope_medium_mk2"), joaat("WAPScop_2"), 4, 0);
					break;
				
				case 14:
					func_319(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
				
				case 15:
					func_319(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp_2"), 2, 0);
					break;
				
				case 16:
					func_319(uParam0, joaat("component_at_muzzle_01"), joaat("WAPSupp_2"), 3, 0);
					break;
				
				case 17:
					func_319(uParam0, joaat("component_at_muzzle_02"), joaat("WAPSupp_2"), 4, 0);
					break;
				
				case 18:
					func_319(uParam0, joaat("component_at_muzzle_03"), joaat("WAPSupp_2"), 5, 0);
					break;
				
				case 19:
					func_319(uParam0, joaat("component_at_muzzle_04"), joaat("WAPSupp_2"), 6, 0);
					break;
				
				case 20:
					func_319(uParam0, joaat("component_at_muzzle_05"), joaat("WAPSupp_2"), 7, 0);
					break;
				
				case 21:
					func_319(uParam0, joaat("component_at_muzzle_06"), joaat("WAPSupp_2"), 8, 0);
					break;
				
				case 22:
					func_319(uParam0, joaat("component_at_muzzle_07"), joaat("WAPSupp_2"), 9, 0);
					break;
				
				case 23:
					func_319(uParam0, joaat("component_at_ar_barrel_01"), -1312077031, 1, 1);
					break;
				
				case 24:
					func_319(uParam0, joaat("component_at_ar_barrel_02"), -1312077031, 2, 0);
					break;
				
				case 25:
					func_319(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 26:
					func_319(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				
				case 27:
					func_319(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 28:
					func_319(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 29:
					func_319(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 30:
					func_319(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 31:
					func_319(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 32:
					func_319(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 33:
					func_319(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 34:
					func_319(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 35:
					func_319(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 36:
					func_319(uParam0, joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle_mk2"):
			switch (iParam2)
			{
				case 0:
					func_319(uParam0, joaat("component_carbinerifle_mk2_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_319(uParam0, joaat("component_carbinerifle_mk2_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_319(uParam0, joaat("component_carbinerifle_mk2_clip_tracer"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_319(uParam0, joaat("component_carbinerifle_mk2_clip_incendiary"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_319(uParam0, joaat("component_carbinerifle_mk2_clip_armorpiercing"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_319(uParam0, joaat("component_carbinerifle_mk2_clip_fmj"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_319(uParam0, 0, joaat("WAPGrip_2"), 1, 1);
					break;
				
				case 7:
					func_319(uParam0, joaat("component_at_ar_afgrip_02"), joaat("WAPGrip_2"), 2, 0);
					break;
				
				case 8:
					func_319(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				
				case 9:
					func_319(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 2, 0);
					break;
				
				case 10:
					func_319(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 11:
					func_319(uParam0, joaat("component_at_sights"), joaat("WAPScop"), 2, 0);
					break;
				
				case 12:
					func_319(uParam0, joaat("component_at_scope_macro_mk2"), joaat("WAPScop"), 3, 0);
					break;
				
				case 13:
					func_319(uParam0, joaat("component_at_scope_medium_mk2"), joaat("WAPScop"), 4, 0);
					break;
				
				case 14:
					func_319(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
				
				case 15:
					func_319(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp_2"), 2, 0);
					break;
				
				case 16:
					func_319(uParam0, joaat("component_at_muzzle_01"), joaat("WAPSupp_2"), 3, 0);
					break;
				
				case 17:
					func_319(uParam0, joaat("component_at_muzzle_02"), joaat("WAPSupp_2"), 4, 0);
					break;
				
				case 18:
					func_319(uParam0, joaat("component_at_muzzle_03"), joaat("WAPSupp_2"), 5, 0);
					break;
				
				case 19:
					func_319(uParam0, joaat("component_at_muzzle_04"), joaat("WAPSupp_2"), 6, 0);
					break;
				
				case 20:
					func_319(uParam0, joaat("component_at_muzzle_05"), joaat("WAPSupp_2"), 7, 0);
					break;
				
				case 21:
					func_319(uParam0, joaat("component_at_muzzle_06"), joaat("WAPSupp_2"), 8, 0);
					break;
				
				case 22:
					func_319(uParam0, joaat("component_at_muzzle_07"), joaat("WAPSupp_2"), 9, 0);
					break;
				
				case 23:
					func_319(uParam0, joaat("component_at_cr_barrel_01"), -1312077031, 1, 1);
					break;
				
				case 24:
					func_319(uParam0, joaat("component_at_cr_barrel_02"), -1312077031, 2, 0);
					break;
				
				case 25:
					func_319(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 26:
					func_319(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				
				case 27:
					func_319(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 28:
					func_319(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 29:
					func_319(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 30:
					func_319(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 31:
					func_319(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 32:
					func_319(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 33:
					func_319(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 34:
					func_319(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 35:
					func_319(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 36:
					func_319(uParam0, joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("weapon_combatmg_mk2"):
			switch (iParam2)
			{
				case 0:
					func_319(uParam0, joaat("component_combatmg_mk2_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_319(uParam0, joaat("component_combatmg_mk2_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_319(uParam0, joaat("component_combatmg_mk2_clip_tracer"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_319(uParam0, joaat("component_combatmg_mk2_clip_incendiary"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_319(uParam0, joaat("component_combatmg_mk2_clip_armorpiercing"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_319(uParam0, joaat("component_combatmg_mk2_clip_fmj"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_319(uParam0, 0, joaat("WAPGrip_2"), 1, 1);
					break;
				
				case 7:
					func_319(uParam0, joaat("component_at_ar_afgrip_02"), joaat("WAPGrip_2"), 2, 0);
					break;
				
				case 8:
					func_319(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 9:
					func_319(uParam0, joaat("component_at_sights"), joaat("WAPScop"), 2, 0);
					break;
				
				case 10:
					func_319(uParam0, joaat("component_at_scope_small_mk2"), joaat("WAPScop"), 3, 0);
					break;
				
				case 11:
					func_319(uParam0, joaat("component_at_scope_medium_mk2"), joaat("WAPScop"), 4, 0);
					break;
				
				case 12:
					func_319(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 13:
					func_319(uParam0, joaat("component_at_muzzle_01"), joaat("WAPSupp"), 2, 0);
					break;
				
				case 14:
					func_319(uParam0, joaat("component_at_muzzle_02"), joaat("WAPSupp"), 3, 0);
					break;
				
				case 15:
					func_319(uParam0, joaat("component_at_muzzle_03"), joaat("WAPSupp"), 4, 0);
					break;
				
				case 16:
					func_319(uParam0, joaat("component_at_muzzle_04"), joaat("WAPSupp"), 5, 0);
					break;
				
				case 17:
					func_319(uParam0, joaat("component_at_muzzle_05"), joaat("WAPSupp"), 6, 0);
					break;
				
				case 18:
					func_319(uParam0, joaat("component_at_muzzle_06"), joaat("WAPSupp"), 7, 0);
					break;
				
				case 19:
					func_319(uParam0, joaat("component_at_muzzle_07"), joaat("WAPSupp"), 8, 0);
					break;
				
				case 20:
					func_319(uParam0, joaat("component_at_mg_barrel_01"), -1312077031, 1, 1);
					break;
				
				case 21:
					func_319(uParam0, joaat("component_at_mg_barrel_02"), -1312077031, 2, 0);
					break;
				
				case 22:
					func_319(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 23:
					func_319(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				
				case 24:
					func_319(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 25:
					func_319(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 26:
					func_319(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 27:
					func_319(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 28:
					func_319(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 29:
					func_319(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 30:
					func_319(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 31:
					func_319(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 32:
					func_319(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 33:
					func_319(uParam0, joaat("COMPONENT_COMBATMG_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("weapon_heavysniper_mk2"):
			switch (iParam2)
			{
				case 0:
					func_319(uParam0, joaat("component_heavysniper_mk2_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_319(uParam0, joaat("component_heavysniper_mk2_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_319(uParam0, joaat("component_heavysniper_mk2_clip_incendiary"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_319(uParam0, joaat("component_heavysniper_mk2_clip_armorpiercing"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_319(uParam0, joaat("component_heavysniper_mk2_clip_fmj"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_319(uParam0, joaat("component_heavysniper_mk2_clip_explosive"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_319(uParam0, joaat("component_at_scope_large_mk2"), joaat("WAPScop"), 1, 0);
					break;
				
				case 7:
					func_319(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 1);
					break;
				
				case 8:
					func_319(uParam0, joaat("component_at_scope_nv"), joaat("WAPScop"), 3, 0);
					break;
				
				case 9:
					func_319(uParam0, joaat("component_at_scope_thermal"), joaat("WAPScop"), 4, 0);
					break;
				
				case 10:
					func_319(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 11:
					func_319(uParam0, joaat("component_at_sr_supp_03"), joaat("WAPSupp"), 2, 0);
					break;
				
				case 12:
					func_319(uParam0, joaat("component_at_muzzle_08"), joaat("WAPSupp"), 3, 0);
					break;
				
				case 13:
					func_319(uParam0, joaat("component_at_muzzle_09"), joaat("WAPSupp"), 4, 0);
					break;
				
				case 14:
					func_319(uParam0, joaat("component_at_sr_barrel_01"), -1312077031, 1, 1);
					break;
				
				case 15:
					func_319(uParam0, joaat("component_at_sr_barrel_02"), -1312077031, 2, 0);
					break;
				
				case 16:
					func_319(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 17:
					func_319(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				
				case 18:
					func_319(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 19:
					func_319(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 20:
					func_319(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 21:
					func_319(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 22:
					func_319(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 23:
					func_319(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 24:
					func_319(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 25:
					func_319(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 26:
					func_319(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 27:
					func_319(uParam0, joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("weapon_pistol_mk2"):
			switch (iParam2)
			{
				case 0:
					func_319(uParam0, joaat("component_pistol_mk2_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_319(uParam0, joaat("component_pistol_mk2_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_319(uParam0, joaat("component_pistol_mk2_clip_tracer"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_319(uParam0, joaat("component_pistol_mk2_clip_incendiary"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_319(uParam0, joaat("component_pistol_mk2_clip_hollowpoint"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_319(uParam0, joaat("component_pistol_mk2_clip_fmj"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_319(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 7:
					func_319(uParam0, joaat("component_at_pi_rail"), joaat("WAPScop"), 2, 0);
					break;
				
				case 8:
					func_319(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				
				case 9:
					func_319(uParam0, joaat("component_at_pi_flsh_02"), joaat("WAPFlshLasr"), 2, 0);
					break;
				
				case 10:
					func_319(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 11:
					func_319(uParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp"), 2, 0);
					break;
				
				case 12:
					func_319(uParam0, joaat("component_at_pi_comp"), joaat("WAPSupp"), 3, 0);
					break;
				
				case 13:
					func_319(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 14:
					func_319(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				
				case 15:
					func_319(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 16:
					func_319(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 17:
					func_319(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 18:
					func_319(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 19:
					func_319(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 20:
					func_319(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 21:
					func_319(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 22:
					func_319(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 23:
					func_319(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 24:
					func_319(uParam0, joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("weapon_smg_mk2"):
			switch (iParam2)
			{
				case 0:
					func_319(uParam0, joaat("component_smg_mk2_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_319(uParam0, joaat("component_smg_mk2_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_319(uParam0, joaat("component_smg_mk2_clip_tracer"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_319(uParam0, joaat("component_smg_mk2_clip_incendiary"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_319(uParam0, joaat("component_smg_mk2_clip_hollowpoint"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_319(uParam0, joaat("component_smg_mk2_clip_fmj"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_319(uParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
					break;
				
				case 7:
					func_319(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr_2"), 2, 0);
					break;
				
				case 8:
					func_319(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 9:
					func_319(uParam0, joaat("component_at_sights_smg"), joaat("WAPScop"), 2, 0);
					break;
				
				case 10:
					func_319(uParam0, joaat("component_at_scope_macro_02_smg_mk2"), joaat("WAPScop"), 3, 0);
					break;
				
				case 11:
					func_319(uParam0, joaat("component_at_scope_small_smg_mk2"), joaat("WAPScop"), 4, 0);
					break;
				
				case 12:
					func_319(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
				
				case 13:
					func_319(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp_2"), 1, 0);
					break;
				
				case 14:
					func_319(uParam0, joaat("component_at_muzzle_01"), joaat("WAPSupp_2"), 2, 0);
					break;
				
				case 15:
					func_319(uParam0, joaat("component_at_muzzle_02"), joaat("WAPSupp_2"), 3, 0);
					break;
				
				case 16:
					func_319(uParam0, joaat("component_at_muzzle_03"), joaat("WAPSupp_2"), 4, 0);
					break;
				
				case 17:
					func_319(uParam0, joaat("component_at_muzzle_04"), joaat("WAPSupp_2"), 5, 0);
					break;
				
				case 18:
					func_319(uParam0, joaat("component_at_muzzle_05"), joaat("WAPSupp_2"), 6, 0);
					break;
				
				case 19:
					func_319(uParam0, joaat("component_at_muzzle_06"), joaat("WAPSupp_2"), 7, 0);
					break;
				
				case 20:
					func_319(uParam0, joaat("component_at_muzzle_07"), joaat("WAPSupp_2"), 8, 0);
					break;
				
				case 21:
					func_319(uParam0, joaat("component_at_sb_barrel_01"), -1312077031, 1, 1);
					break;
				
				case 22:
					func_319(uParam0, joaat("component_at_sb_barrel_02"), -1312077031, 2, 0);
					break;
				
				case 23:
					func_319(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 24:
					func_319(uParam0, joaat("COMPONENT_SMG_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				
				case 25:
					func_319(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 26:
					func_319(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 27:
					func_319(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 28:
					func_319(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 29:
					func_319(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 30:
					func_319(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 31:
					func_319(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 32:
					func_319(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 33:
					func_319(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 34:
					func_319(uParam0, joaat("COMPONENT_SMG_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			if (func_318(iLocal_105))
			{
				if (!func_309(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_pumpshotgun"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_319(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						
						case 1:
							func_319(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 2:
							func_319(uParam0, joaat("component_at_sr_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 3:
							func_319(uParam0, joaat("component_pumpshotgun_varmod_lowrider"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_319(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
							break;
						
						case 1:
							func_319(uParam0, joaat("component_at_sr_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 2:
							func_319(uParam0, joaat("component_pumpshotgun_varmod_lowrider"), joaat("gun_root"), 1, 0);
							break;
						
						case 3:
							func_319(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_319(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
						break;
					
					case 1:
						func_319(uParam0, joaat("component_at_sr_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 2:
						func_319(uParam0, joaat("component_pumpshotgun_varmod_lowrider"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			if (func_318(iLocal_105))
			{
				if (!func_309(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_specialcarbine"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_319(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						
						case 1:
							func_319(uParam0, joaat("component_specialcarbine_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_319(uParam0, joaat("component_specialcarbine_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_319(uParam0, joaat("component_specialcarbine_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 4:
							func_319(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
							break;
						
						case 5:
							func_319(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
							break;
						
						case 6:
							func_319(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 7:
							func_319(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 8:
							func_319(uParam0, joaat("component_specialcarbine_varmod_lowrider"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_319(uParam0, joaat("component_specialcarbine_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_319(uParam0, joaat("component_specialcarbine_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_319(uParam0, joaat("component_specialcarbine_clip_03"), joaat("WAPClip"), 3, 0);
							break;
						
						case 3:
							func_319(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
							break;
						
						case 4:
							func_319(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
							break;
						
						case 5:
							func_319(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 6:
							func_319(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 7:
							func_319(uParam0, joaat("component_specialcarbine_varmod_lowrider"), joaat("gun_root"), 1, 0);
							break;
						
						case 8:
							func_319(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_319(uParam0, joaat("component_specialcarbine_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_319(uParam0, joaat("component_specialcarbine_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_319(uParam0, joaat("component_specialcarbine_clip_03"), joaat("WAPClip"), 3, 0);
						break;
					
					case 3:
						func_319(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
						break;
					
					case 4:
						func_319(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
						break;
					
					case 5:
						func_319(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 6:
						func_319(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 7:
						func_319(uParam0, joaat("component_specialcarbine_varmod_lowrider"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_snspistol"):
			if (func_318(iLocal_105))
			{
				if (!func_309(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_snspistol"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_319(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						
						case 1:
							func_319(uParam0, joaat("component_snspistol_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_319(uParam0, joaat("component_snspistol_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_319(uParam0, joaat("component_snspistol_varmod_lowrider"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_319(uParam0, joaat("component_snspistol_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_319(uParam0, joaat("component_snspistol_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_319(uParam0, joaat("component_snspistol_varmod_lowrider"), joaat("gun_root"), 1, 0);
							break;
						
						case 3:
							func_319(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_319(uParam0, joaat("component_snspistol_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_319(uParam0, joaat("component_snspistol_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_319(uParam0, joaat("component_snspistol_varmod_lowrider"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			if (func_318(iLocal_105))
			{
				if (!func_309(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_marksmanrifle"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_319(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						
						case 1:
							func_319(uParam0, joaat("component_marksmanrifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_319(uParam0, joaat("component_marksmanrifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_319(uParam0, joaat("component_at_scope_large_fixed_zoom"), joaat("WAPScop"), 1, 1);
							break;
						
						case 4:
							func_319(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
							break;
						
						case 5:
							func_319(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 6:
							func_319(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 7:
							func_319(uParam0, joaat("component_marksmanrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_319(uParam0, joaat("component_marksmanrifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_319(uParam0, joaat("component_marksmanrifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_319(uParam0, joaat("component_at_scope_large_fixed_zoom"), joaat("WAPScop"), 1, 1);
							break;
						
						case 3:
							func_319(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
							break;
						
						case 4:
							func_319(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 5:
							func_319(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 6:
							func_319(uParam0, joaat("component_marksmanrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
							break;
						
						case 7:
							func_319(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_319(uParam0, joaat("component_marksmanrifle_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_319(uParam0, joaat("component_marksmanrifle_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_319(uParam0, joaat("component_at_scope_large_fixed_zoom"), joaat("WAPScop"), 1, 1);
						break;
					
					case 3:
						func_319(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
						break;
					
					case 4:
						func_319(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 5:
						func_319(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 6:
						func_319(uParam0, joaat("component_marksmanrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_revolver"):
			if (func_318(iLocal_105))
			{
				if (!func_309(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_revolver"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_319(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						
						case 1:
							func_319(uParam0, joaat("component_revolver_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_319(uParam0, joaat("component_revolver_varmod_boss"), joaat("gun_root"), 1, 0);
							break;
						
						case 3:
							func_319(uParam0, joaat("component_revolver_varmod_goon"), joaat("gun_root"), 2, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_319(uParam0, joaat("component_revolver_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_319(uParam0, joaat("component_revolver_varmod_boss"), joaat("gun_root"), 1, 0);
							break;
						
						case 2:
							func_319(uParam0, joaat("component_revolver_varmod_goon"), joaat("gun_root"), 2, 0);
							break;
						
						case 3:
							func_319(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_319(uParam0, joaat("component_revolver_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_319(uParam0, joaat("component_revolver_varmod_boss"), joaat("gun_root"), 1, 0);
						break;
					
					case 2:
						func_319(uParam0, joaat("component_revolver_varmod_goon"), joaat("gun_root"), 2, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			if (func_318(iLocal_105))
			{
				if (!func_309(joaat("component_gunrun_mk2_upgrade"), joaat("weapon_bullpuprifle"), -1))
				{
					switch (iParam2)
					{
						case 0:
							func_319(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						
						case 1:
							func_319(uParam0, joaat("component_bullpuprifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 2:
							func_319(uParam0, joaat("component_bullpuprifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 3:
							func_319(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
							break;
						
						case 4:
							func_319(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
							break;
						
						case 5:
							func_319(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 6:
							func_319(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 7:
							func_319(uParam0, joaat("component_bullpuprifle_varmod_low"), joaat("gun_root"), 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_319(uParam0, joaat("component_bullpuprifle_clip_01"), joaat("WAPClip"), 1, 1);
							break;
						
						case 1:
							func_319(uParam0, joaat("component_bullpuprifle_clip_02"), joaat("WAPClip"), 2, 0);
							break;
						
						case 2:
							func_319(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
							break;
						
						case 3:
							func_319(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
							break;
						
						case 4:
							func_319(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
							break;
						
						case 5:
							func_319(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
							break;
						
						case 6:
							func_319(uParam0, joaat("component_bullpuprifle_varmod_low"), joaat("gun_root"), 1, 0);
							break;
						
						case 7:
							func_319(uParam0, joaat("component_gunrun_mk2_upgrade"), -31573710, 1, 0);
							break;
						}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_319(uParam0, joaat("component_bullpuprifle_clip_01"), joaat("WAPClip"), 1, 1);
						break;
					
					case 1:
						func_319(uParam0, joaat("component_bullpuprifle_clip_02"), joaat("WAPClip"), 2, 0);
						break;
					
					case 2:
						func_319(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
						break;
					
					case 3:
						func_319(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
						break;
					
					case 4:
						func_319(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
						break;
					
					case 5:
						func_319(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
						break;
					
					case 6:
						func_319(uParam0, joaat("component_bullpuprifle_varmod_low"), joaat("gun_root"), 1, 0);
						break;
					}
			}
			break;
		
		case joaat("weapon_pumpshotgun_mk2"):
			switch (iParam2)
			{
				case 0:
					func_319(uParam0, joaat("component_pumpshotgun_mk2_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_319(uParam0, joaat("component_pumpshotgun_mk2_clip_incendiary"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_319(uParam0, joaat("component_pumpshotgun_mk2_clip_hollowpoint"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_319(uParam0, joaat("component_pumpshotgun_mk2_clip_armorpiercing"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_319(uParam0, joaat("component_pumpshotgun_mk2_clip_explosive"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_319(uParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
					break;
				
				case 6:
					func_319(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr_2"), 2, 0);
					break;
				
				case 7:
					func_319(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 8:
					func_319(uParam0, joaat("component_at_sights"), joaat("WAPScop"), 2, 0);
					break;
				
				case 9:
					func_319(uParam0, joaat("component_at_scope_macro_mk2"), joaat("WAPScop"), 3, 0);
					break;
				
				case 10:
					func_319(uParam0, joaat("component_at_scope_small_mk2"), joaat("WAPScop"), 4, 0);
					break;
				
				case 11:
					func_319(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 12:
					func_319(uParam0, joaat("component_at_sr_supp_03"), joaat("WAPSupp"), 2, 0);
					break;
				
				case 13:
					func_319(uParam0, joaat("component_at_muzzle_08"), joaat("WAPSupp"), 3, 0);
					break;
				
				case 14:
					func_319(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 15:
					func_319(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				
				case 16:
					func_319(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 17:
					func_319(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 18:
					func_319(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 19:
					func_319(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 20:
					func_319(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 21:
					func_319(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 22:
					func_319(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 23:
					func_319(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 24:
					func_319(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 25:
					func_319(uParam0, joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine_mk2"):
			switch (iParam2)
			{
				case 0:
					func_319(uParam0, joaat("component_specialcarbine_mk2_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_319(uParam0, joaat("component_specialcarbine_mk2_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_319(uParam0, joaat("component_specialcarbine_mk2_clip_tracer"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_319(uParam0, joaat("component_specialcarbine_mk2_clip_incendiary"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_319(uParam0, joaat("component_specialcarbine_mk2_clip_armorpiercing"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_319(uParam0, joaat("component_specialcarbine_mk2_clip_fmj"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_319(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				
				case 7:
					func_319(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 2, 0);
					break;
				
				case 8:
					func_319(uParam0, 0, joaat("WAPScop_2"), 1, 1);
					break;
				
				case 9:
					func_319(uParam0, joaat("component_at_sights"), joaat("WAPScop_2"), 2, 0);
					break;
				
				case 10:
					func_319(uParam0, joaat("component_at_scope_macro_mk2"), joaat("WAPScop_2"), 3, 0);
					break;
				
				case 11:
					func_319(uParam0, joaat("component_at_scope_medium_mk2"), joaat("WAPScop_2"), 4, 0);
					break;
				
				case 12:
					func_319(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 13:
					func_319(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 2, 0);
					break;
				
				case 14:
					func_319(uParam0, joaat("component_at_muzzle_01"), joaat("WAPSupp"), 3, 0);
					break;
				
				case 15:
					func_319(uParam0, joaat("component_at_muzzle_02"), joaat("WAPSupp"), 4, 0);
					break;
				
				case 16:
					func_319(uParam0, joaat("component_at_muzzle_03"), joaat("WAPSupp"), 5, 0);
					break;
				
				case 17:
					func_319(uParam0, joaat("component_at_muzzle_04"), joaat("WAPSupp"), 6, 0);
					break;
				
				case 18:
					func_319(uParam0, joaat("component_at_muzzle_05"), joaat("WAPSupp"), 7, 0);
					break;
				
				case 19:
					func_319(uParam0, joaat("component_at_muzzle_06"), joaat("WAPSupp"), 8, 0);
					break;
				
				case 20:
					func_319(uParam0, joaat("component_at_muzzle_07"), joaat("WAPSupp"), 9, 0);
					break;
				
				case 21:
					func_319(uParam0, 0, joaat("WAPGrip"), 1, 1);
					break;
				
				case 22:
					func_319(uParam0, joaat("component_at_ar_afgrip_02"), joaat("WAPGrip"), 2, 0);
					break;
				
				case 23:
					func_319(uParam0, joaat("component_at_sc_barrel_01"), -1312077031, 1, 1);
					break;
				
				case 24:
					func_319(uParam0, joaat("component_at_sc_barrel_02"), -1312077031, 2, 0);
					break;
				
				case 25:
					func_319(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 26:
					func_319(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				
				case 27:
					func_319(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 28:
					func_319(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 29:
					func_319(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 30:
					func_319(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 31:
					func_319(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 32:
					func_319(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 33:
					func_319(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 34:
					func_319(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 35:
					func_319(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 36:
					func_319(uParam0, joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("weapon_snspistol_mk2"):
			switch (iParam2)
			{
				case 0:
					func_319(uParam0, joaat("component_snspistol_mk2_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_319(uParam0, joaat("component_snspistol_mk2_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_319(uParam0, joaat("component_snspistol_mk2_clip_tracer"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_319(uParam0, joaat("component_snspistol_mk2_clip_incendiary"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_319(uParam0, joaat("component_snspistol_mk2_clip_hollowpoint"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_319(uParam0, joaat("component_snspistol_mk2_clip_fmj"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_319(uParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
					break;
				
				case 7:
					func_319(uParam0, joaat("component_at_pi_flsh_03"), joaat("WAPFlshLasr_2"), 2, 0);
					break;
				
				case 8:
					func_319(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 9:
					func_319(uParam0, joaat("component_at_pi_rail_02"), joaat("WAPScop"), 2, 0);
					break;
				
				case 10:
					func_319(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
				
				case 11:
					func_319(uParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp_2"), 2, 0);
					break;
				
				case 12:
					func_319(uParam0, joaat("component_at_pi_comp_02"), joaat("WAPSupp_2"), 3, 0);
					break;
				
				case 13:
					func_319(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 14:
					func_319(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				
				case 15:
					func_319(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 16:
					func_319(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 17:
					func_319(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 18:
					func_319(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 19:
					func_319(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 20:
					func_319(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 21:
					func_319(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 22:
					func_319(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 23:
					func_319(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 24:
					func_319(uParam0, joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("weapon_marksmanrifle_mk2"):
			switch (iParam2)
			{
				case 0:
					func_319(uParam0, joaat("component_marksmanrifle_mk2_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_319(uParam0, joaat("component_marksmanrifle_mk2_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_319(uParam0, joaat("component_marksmanrifle_mk2_clip_tracer"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_319(uParam0, joaat("component_marksmanrifle_mk2_clip_incendiary"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_319(uParam0, joaat("component_marksmanrifle_mk2_clip_armorpiercing"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_319(uParam0, joaat("component_marksmanrifle_mk2_clip_fmj"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_319(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				
				case 7:
					func_319(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 2, 0);
					break;
				
				case 8:
					func_319(uParam0, joaat("component_at_sights"), joaat("WAPScop_2"), 2, 0);
					break;
				
				case 9:
					func_319(uParam0, joaat("component_at_scope_medium_mk2"), joaat("WAPScop_2"), 3, 0);
					break;
				
				case 10:
					func_319(uParam0, joaat("component_at_scope_large_fixed_zoom_mk2"), joaat("WAPScop_2"), 4, 1);
					break;
				
				case 11:
					func_319(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
					break;
				
				case 12:
					func_319(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp_2"), 2, 0);
					break;
				
				case 13:
					func_319(uParam0, joaat("component_at_muzzle_01"), joaat("WAPSupp_2"), 3, 0);
					break;
				
				case 14:
					func_319(uParam0, joaat("component_at_muzzle_02"), joaat("WAPSupp_2"), 4, 0);
					break;
				
				case 15:
					func_319(uParam0, joaat("component_at_muzzle_03"), joaat("WAPSupp_2"), 5, 0);
					break;
				
				case 16:
					func_319(uParam0, joaat("component_at_muzzle_04"), joaat("WAPSupp_2"), 6, 0);
					break;
				
				case 17:
					func_319(uParam0, joaat("component_at_muzzle_05"), joaat("WAPSupp_2"), 7, 0);
					break;
				
				case 18:
					func_319(uParam0, joaat("component_at_muzzle_06"), joaat("WAPSupp_2"), 8, 0);
					break;
				
				case 19:
					func_319(uParam0, joaat("component_at_muzzle_07"), joaat("WAPSupp_2"), 9, 0);
					break;
				
				case 20:
					func_319(uParam0, 0, joaat("WAPGrip_2"), 1, 1);
					break;
				
				case 21:
					func_319(uParam0, joaat("component_at_ar_afgrip_02"), joaat("WAPGrip_2"), 2, 0);
					break;
				
				case 22:
					func_319(uParam0, joaat("component_at_mrfl_barrel_01"), -1312077031, 1, 1);
					break;
				
				case 23:
					func_319(uParam0, joaat("component_at_mrfl_barrel_02"), -1312077031, 2, 0);
					break;
				
				case 24:
					func_319(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 25:
					func_319(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				
				case 26:
					func_319(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 27:
					func_319(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 28:
					func_319(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 29:
					func_319(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 30:
					func_319(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 31:
					func_319(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 32:
					func_319(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 33:
					func_319(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 34:
					func_319(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 35:
					func_319(uParam0, joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("weapon_revolver_mk2"):
			switch (iParam2)
			{
				case 0:
					func_319(uParam0, joaat("component_revolver_mk2_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_319(uParam0, joaat("component_revolver_mk2_clip_tracer"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_319(uParam0, joaat("component_revolver_mk2_clip_incendiary"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_319(uParam0, joaat("component_revolver_mk2_clip_hollowpoint"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_319(uParam0, joaat("component_revolver_mk2_clip_fmj"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_319(uParam0, 0, joaat("WAPScop"), 1, 1);
					break;
				
				case 6:
					func_319(uParam0, joaat("component_at_sights"), joaat("WAPScop"), 2, 0);
					break;
				
				case 7:
					func_319(uParam0, joaat("component_at_scope_macro_mk2"), joaat("WAPScop"), 3, 0);
					break;
				
				case 8:
					func_319(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				
				case 9:
					func_319(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 2, 0);
					break;
				
				case 10:
					func_319(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 11:
					func_319(uParam0, joaat("component_at_pi_comp_03"), joaat("WAPSupp"), 2, 0);
					break;
				
				case 12:
					func_319(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 13:
					func_319(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				
				case 14:
					func_319(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 15:
					func_319(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 16:
					func_319(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 17:
					func_319(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 18:
					func_319(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 19:
					func_319(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 20:
					func_319(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 21:
					func_319(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 22:
					func_319(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 23:
					func_319(uParam0, joaat("COMPONENT_REVOLVER_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle_mk2"):
			switch (iParam2)
			{
				case 0:
					func_319(uParam0, joaat("component_bullpuprifle_mk2_clip_01"), joaat("WAPClip"), 1, 1);
					break;
				
				case 1:
					func_319(uParam0, joaat("component_bullpuprifle_mk2_clip_02"), joaat("WAPClip"), 2, 0);
					break;
				
				case 2:
					func_319(uParam0, joaat("component_bullpuprifle_mk2_clip_tracer"), joaat("WAPClip"), 3, 0);
					break;
				
				case 3:
					func_319(uParam0, joaat("component_bullpuprifle_mk2_clip_incendiary"), joaat("WAPClip"), 4, 0);
					break;
				
				case 4:
					func_319(uParam0, joaat("component_bullpuprifle_mk2_clip_armorpiercing"), joaat("WAPClip"), 5, 0);
					break;
				
				case 5:
					func_319(uParam0, joaat("component_bullpuprifle_mk2_clip_fmj"), joaat("WAPClip"), 6, 0);
					break;
				
				case 6:
					func_319(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
					break;
				
				case 7:
					func_319(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 2, 0);
					break;
				
				case 8:
					func_319(uParam0, 0, joaat("WAPScop_2"), 1, 1);
					break;
				
				case 9:
					func_319(uParam0, joaat("component_at_sights"), joaat("WAPScop_2"), 2, 0);
					break;
				
				case 10:
					func_319(uParam0, joaat("component_at_scope_macro_02_mk2"), joaat("WAPScop_2"), 3, 0);
					break;
				
				case 11:
					func_319(uParam0, joaat("component_at_scope_small_mk2"), joaat("WAPScop_2"), 4, 0);
					break;
				
				case 12:
					func_319(uParam0, joaat("component_at_bp_barrel_01"), -1312077031, 1, 1);
					break;
				
				case 13:
					func_319(uParam0, joaat("component_at_bp_barrel_02"), -1312077031, 2, 0);
					break;
				
				case 14:
					func_319(uParam0, 0, joaat("WAPSupp"), 1, 1);
					break;
				
				case 15:
					func_319(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 2, 0);
					break;
				
				case 16:
					func_319(uParam0, joaat("component_at_muzzle_01"), joaat("WAPSupp"), 3, 0);
					break;
				
				case 17:
					func_319(uParam0, joaat("component_at_muzzle_02"), joaat("WAPSupp"), 4, 0);
					break;
				
				case 18:
					func_319(uParam0, joaat("component_at_muzzle_03"), joaat("WAPSupp"), 5, 0);
					break;
				
				case 19:
					func_319(uParam0, joaat("component_at_muzzle_04"), joaat("WAPSupp"), 6, 0);
					break;
				
				case 20:
					func_319(uParam0, joaat("component_at_muzzle_05"), joaat("WAPSupp"), 7, 0);
					break;
				
				case 21:
					func_319(uParam0, joaat("component_at_muzzle_06"), joaat("WAPSupp"), 8, 0);
					break;
				
				case 22:
					func_319(uParam0, joaat("component_at_muzzle_07"), joaat("WAPSupp"), 9, 0);
					break;
				
				case 23:
					func_319(uParam0, 0, joaat("WAPGrip"), 1, 1);
					break;
				
				case 24:
					func_319(uParam0, joaat("component_at_ar_afgrip_02"), joaat("WAPGrip"), 2, 0);
					break;
				
				case 25:
					func_319(uParam0, 0, joaat("gun_root"), 1, 1);
					break;
				
				case 26:
					func_319(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO"), joaat("gun_root"), 2, 0);
					break;
				
				case 27:
					func_319(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_02"), joaat("gun_root"), 3, 0);
					break;
				
				case 28:
					func_319(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_03"), joaat("gun_root"), 4, 0);
					break;
				
				case 29:
					func_319(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_04"), joaat("gun_root"), 5, 0);
					break;
				
				case 30:
					func_319(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_05"), joaat("gun_root"), 6, 0);
					break;
				
				case 31:
					func_319(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_06"), joaat("gun_root"), 7, 0);
					break;
				
				case 32:
					func_319(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_07"), joaat("gun_root"), 8, 0);
					break;
				
				case 33:
					func_319(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_08"), joaat("gun_root"), 9, 0);
					break;
				
				case 34:
					func_319(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_09"), joaat("gun_root"), 10, 0);
					break;
				
				case 35:
					func_319(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_10"), joaat("gun_root"), 11, 0);
					break;
				
				case 36:
					func_319(uParam0, joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_IND_01"), joaat("gun_root"), 12, 0);
					break;
			}
			break;
		
		default:
			iVar12 = func_64(iParam1, &uVar15);
			if (iVar12 != -1)
			{
				iVar13 = 0;
				while (iVar13 < unk_0x184BE178B47BBA96(iVar12))
				{
					if (unk_0xFBDC30E38B541C22(iVar12, iVar13, &Var54))
					{
						if (!func_61(Var54.f_3))
						{
							if (Var54.f_0 == joaat("WAPClip") || Var54.f_0 == joaat("WAPClip_2"))
							{
								iVar1++;
							}
							else if (Var54.f_0 == joaat("WAPFlshLasr") || Var54.f_0 == joaat("WAPFlshLasr_2"))
							{
								iVar2++;
							}
							else if (Var54.f_0 == joaat("WAPScop") || Var54.f_0 == joaat("WAPScop_2"))
							{
								iVar3++;
							}
							else if (Var54.f_0 == joaat("WAPRail") || Var54.f_0 == joaat("WAPRail_2"))
							{
								iVar4++;
							}
							else if (Var54.f_0 == joaat("WAPGrip") || Var54.f_0 == joaat("WAPGrip_2"))
							{
								iVar5++;
							}
							else if (Var54.f_0 == joaat("WAPSupp") || Var54.f_0 == joaat("WAPSupp_2"))
							{
								iVar6++;
							}
							else if (Var54.f_0 == 1731751835)
							{
								iVar7++;
							}
							else if (Var54.f_0 == joaat("gun_root"))
							{
								iVar8++;
							}
							else if (Var54.f_0 == -31573710)
							{
								iVar9++;
							}
							else if (Var54.f_0 == -1312077031)
							{
								iVar10++;
							}
							else
							{
								iVar11++;
							}
							if (iVar14 == iParam2)
							{
								if (Var54.f_0 == joaat("WAPClip") || Var54.f_0 == joaat("WAPClip_2"))
								{
									iVar0 = iVar1;
								}
								else if (Var54.f_0 == joaat("WAPFlshLasr") || Var54.f_0 == joaat("WAPFlshLasr_2"))
								{
									iVar0 = iVar2;
								}
								else if (Var54.f_0 == joaat("WAPScop") || Var54.f_0 == joaat("WAPScop_2"))
								{
									iVar0 = iVar3;
								}
								else if (Var54.f_0 == joaat("WAPRail") || Var54.f_0 == joaat("WAPRail_2"))
								{
									iVar0 = iVar4;
								}
								else if (Var54.f_0 == joaat("WAPGrip") || Var54.f_0 == joaat("WAPGrip_2"))
								{
									iVar0 = iVar5;
								}
								else if (Var54.f_0 == joaat("WAPSupp") || Var54.f_0 == joaat("WAPSupp_2"))
								{
									iVar0 = iVar6;
								}
								else if (Var54.f_0 == 1731751835)
								{
									iVar0 = iVar7;
								}
								else if (Var54.f_0 == joaat("gun_root"))
								{
									iVar0 = iVar8;
								}
								else if (Var54.f_0 == -31573710)
								{
									iVar0 = iVar9;
								}
								else if (Var54.f_0 == -1312077031)
								{
									iVar0 = iVar10;
								}
								else
								{
									iVar0 = iVar11;
								}
								func_319(uParam0, Var54.f_3, Var54.f_0, iVar0, Var54.f_1);
							}
							iVar14++;
						}
					}
					iVar13++;
				}
			}
			break;
	}
	if (bParam3)
	{
		uParam0->f_2 = func_269(iParam1, *uParam0);
	}
	return uParam0->f_4 != 989182658;
}

int func_269(int iParam0, int iParam1)
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
	if (!unk_0x44243F2E2F58B8E3())
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
					
					case joaat("component_smg_clip_03"):
						iVar0 = -1;
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
					
					case joaat("component_assaultrifle_clip_03"):
						iVar0 = -1;
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
					
					case joaat("component_carbinerifle_clip_03"):
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
				if (func_308() && (func_307() || func_306()))
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
				if (func_308() && (func_307() || func_306()))
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
				if (func_308() && (func_307() || func_306()))
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
					
					case joaat("component_specialcarbine_clip_03"):
						iVar0 = -1;
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
					
					case joaat("component_machinepistol_clip_03"):
						iVar0 = -1;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 4840;
						break;
				}
				break;
			
			default:
				iVar2 = func_64(iParam0, &uVar4);
				if (iVar2 != -1)
				{
					iVar3 = 0;
					while (iVar3 < unk_0x184BE178B47BBA96(iVar2))
					{
						if (unk_0xFBDC30E38B541C22(iVar2, iVar3, &Var43))
						{
							if (!func_61(Var43.f_3))
							{
								if (Var43.f_3 == iParam1)
								{
									fVar1 = 1f;
									if (!func_304(iParam1))
									{
										Var43.f_5 = -1;
									}
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
										if (func_308() && (func_307() || func_306()))
										{
											iVar0 = 0;
										}
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
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_2884));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 1675;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4336));
						break;
					
					case joaat("component_at_pi_supp_02"):
						iVar0 = 12050;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4337));
						break;
					
					case joaat("component_pistol_varmod_luxe"):
						iVar0 = Global_262145.f_9740;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4414));
						break;
					
					case joaat("component_gunrun_mk2_upgrade"):
						iVar0 = Global_262145.f_19787;
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
						iVar0 = Global_262145.f_19676;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_2885));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 1825;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4338));
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = Global_262145.f_19677;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4339));
						break;
					
					case joaat("component_combatpistol_varmod_lowrider"):
						iVar0 = Global_262145.f_11115;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4409));
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
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_2887));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 1975;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4340));
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 12200;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4341));
						break;
					
					case joaat("component_appistol_varmod_luxe"):
						iVar0 = Global_262145.f_9739;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4403));
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
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_2888));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 1900;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4344));
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 10800;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4346));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12150;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4345));
						break;
					
					case joaat("component_microsmg_varmod_luxe"):
						iVar0 = Global_262145.f_9743;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4413));
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
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_2889));
						break;
					
					case joaat("component_smg_clip_03"):
						iVar0 = Global_262145.f_15272;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2050;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4347));
						break;
					
					case joaat("component_at_scope_macro_02"):
						iVar0 = 10825;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4349));
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = 12250;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4348));
						break;
					
					case joaat("component_smg_varmod_luxe"):
						iVar0 = Global_262145.f_9742;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4418));
						break;
					
					case joaat("component_gunrun_mk2_upgrade"):
						iVar0 = Global_262145.f_19788;
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
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_2891));
						break;
					
					case joaat("component_assaultrifle_clip_03"):
						iVar0 = Global_262145.f_15267;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4200;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4357));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2125;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4354));
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 10850;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4356));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12300;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4355));
						break;
					
					case joaat("component_assaultrifle_varmod_luxe"):
						iVar0 = Global_262145.f_9736;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4404));
						break;
					
					case joaat("component_gunrun_mk2_upgrade"):
						iVar0 = Global_262145.f_19790;
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
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_2892));
						break;
					
					case joaat("component_carbinerifle_clip_03"):
						iVar0 = Global_262145.f_15266;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4350;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4365));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2350;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4362));
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 10900;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4364));
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 12450;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4363));
						break;
					
					case joaat("component_carbinerifle_varmod_luxe"):
						iVar0 = Global_262145.f_9738;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4407));
						break;
					
					case joaat("component_gunrun_mk2_upgrade"):
						iVar0 = Global_262145.f_19791;
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
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_2894));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2425;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4367));
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 10950;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4369));
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 12500;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4368));
						break;
					
					case joaat("component_advancedrifle_varmod_luxe"):
						iVar0 = Global_262145.f_9737;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4402));
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
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_2895));
						break;
					
					case joaat("component_at_scope_small_02"):
						iVar0 = 10925;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4370));
						break;
					
					case joaat("component_mg_varmod_lowrider"):
						iVar0 = Global_262145.f_11116;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4412));
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
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_2896));
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4425;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4392));
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = 10975;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4393));
						break;
					
					case joaat("component_combatmg_varmod_lowrider"):
						iVar0 = Global_262145.f_11117;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4408));
						break;
					
					case joaat("component_gunrun_mk2_upgrade"):
						iVar0 = Global_262145.f_19789;
						break;
				}
				break;
			
			case joaat("weapon_pumpshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_flsh"):
						iVar0 = 1750;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4374));
						break;
					
					case joaat("component_at_sr_supp"):
						iVar0 = 12350;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4375));
						break;
					
					case joaat("component_pumpshotgun_varmod_lowrider"):
						iVar0 = Global_262145.f_11112;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4416));
						break;
					
					case joaat("component_gunrun_mk2_upgrade"):
						iVar0 = Global_262145.f_21488;
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
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_2898));
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4275;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4378));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2200;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4379));
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = 12350;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4380));
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
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4381));
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 12500;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4382));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12050;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4383));
						break;
					
					case joaat("component_sniperrifle_varmod_luxe"):
						iVar0 = Global_262145.f_9745;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4419));
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
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4384));
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 12500;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4385));
						break;
					
					case joaat("component_gunrun_mk2_upgrade"):
						iVar0 = Global_262145.f_19792;
						break;
				}
				break;
			
			case joaat("weapon_grenadelauncher"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4500;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4394));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2500;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4390));
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = 11000;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4391));
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
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_2890));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2275;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4350));
						break;
					
					case joaat("component_at_scope_macro"):
						iVar0 = 10875;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4353));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12400;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4351));
						break;
					
					case joaat("component_assaultsmg_varmod_lowrider"):
						iVar0 = Global_262145.f_11113;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4352));
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
						iVar0 = Global_262145.f_5838;
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
						iVar0 = Global_262145.f_6417;
						break;
					
					case joaat("component_snspistol_varmod_lowrider"):
						iVar0 = Global_262145.f_11114;
						break;
					
					case joaat("component_gunrun_mk2_upgrade"):
						iVar0 = Global_262145.f_21493;
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
						iVar0 = Global_262145.f_6422;
						break;
					
					case joaat("component_specialcarbine_clip_03"):
						iVar0 = Global_262145.f_15269;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_6425;
						break;
					
					case joaat("component_at_scope_medium"):
						iVar0 = Global_262145.f_6421;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = Global_262145.f_6419;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_262145.f_6424;
						break;
					
					case joaat("component_specialcarbine_varmod_lowrider"):
						iVar0 = Global_262145.f_11118;
						break;
					
					case joaat("component_gunrun_mk2_upgrade"):
						iVar0 = Global_262145.f_21489;
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
						iVar0 = Global_262145.f_6423;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = Global_262145.f_6427;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = Global_262145.f_6420;
						break;
					
					case joaat("component_heavypistol_varmod_luxe"):
						iVar0 = Global_262145.f_6447;
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
						iVar0 = Global_262145.f_6430;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_6433;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_262145.f_6428;
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = Global_262145.f_6429;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_262145.f_6431;
						break;
					
					case joaat("component_bullpuprifle_varmod_low"):
						iVar0 = Global_262145.f_11119;
						break;
					
					case joaat("component_gunrun_mk2_upgrade"):
						iVar0 = Global_262145.f_21492;
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
						iVar0 = Global_262145.f_6903;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = Global_262145.f_6904;
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
						iVar0 = Global_262145.f_7627;
						break;
					
					case joaat("component_heavyshotgun_clip_03"):
						iVar0 = Global_262145.f_15273;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_7628;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = Global_262145.f_7629;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_262145.f_7630;
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
						iVar0 = Global_262145.f_7633;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_7634;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_262145.f_7636;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_262145.f_7637;
						break;
					
					case joaat("component_marksmanrifle_varmod_luxe"):
						iVar0 = Global_262145.f_7638;
						break;
					
					case joaat("component_gunrun_mk2_upgrade"):
						iVar0 = Global_262145.f_21490;
						break;
				}
				break;
			
			case joaat("weapon_bullpupshotgun"):
				switch (iParam1)
				{
					case joaat("component_at_ar_afgrip"):
						iVar0 = 4100;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_13767));
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = 2300;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4376));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12450;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4377));
						break;
				}
				if (func_308() && (func_307() || func_306()))
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
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_2886));
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = 2000;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4342));
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = 12250;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4343));
						break;
					
					case joaat("component_pistol50_varmod_luxe"):
						iVar0 = Global_262145.f_9741;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4415));
						break;
				}
				if (func_308() && (func_307() || func_306()))
				{
					iVar0 = 0;
				}
				break;
			
			case joaat("weapon_sawnoffshotgun"):
				switch (iParam1)
				{
					case joaat("component_sawnoffshotgun_varmod_luxe"):
						iVar0 = Global_262145.f_9744;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4417));
						break;
				}
				break;
			
			case joaat("weapon_knuckle"):
				switch (iParam1)
				{
					case joaat("component_knuckle_varmod_pimp"):
						iVar0 = Global_262145.f_10058;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4422));
						break;
					
					case joaat("component_knuckle_varmod_ballas"):
						iVar0 = Global_262145.f_10059;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4423));
						break;
					
					case joaat("component_knuckle_varmod_dollar"):
						iVar0 = Global_262145.f_10060;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4424));
						break;
					
					case joaat("component_knuckle_varmod_diamond"):
						iVar0 = Global_262145.f_10061;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4425));
						break;
					
					case joaat("component_knuckle_varmod_hate"):
						iVar0 = Global_262145.f_10062;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4426));
						break;
					
					case joaat("component_knuckle_varmod_love"):
						iVar0 = Global_262145.f_10063;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4427));
						break;
					
					case joaat("component_knuckle_varmod_player"):
						iVar0 = Global_262145.f_10064;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4428));
						break;
					
					case joaat("component_knuckle_varmod_king"):
						iVar0 = Global_262145.f_10065;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4429));
						break;
					
					case joaat("component_knuckle_varmod_vagos"):
						iVar0 = Global_262145.f_10066;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4430));
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
						iVar0 = Global_262145.f_10083;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4432));
						break;
					
					case joaat("component_machinepistol_clip_03"):
						iVar0 = Global_262145.f_15271;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = Global_262145.f_10084;
						iVar0 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) * Global_262145.f_4433));
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
						iVar0 = Global_262145.f_11960;
						break;
					
					case joaat("component_switchblade_varmod_var2"):
						iVar0 = Global_262145.f_11961;
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
						iVar0 = Global_262145.f_12018;
						break;
					
					case joaat("component_revolver_varmod_goon"):
						iVar0 = Global_262145.f_11959;
						break;
					
					case joaat("component_gunrun_mk2_upgrade"):
						iVar0 = Global_262145.f_21491;
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
						iVar0 = Global_262145.f_13697;
						break;
					
					case joaat("component_compactrifle_clip_03"):
						iVar0 = Global_262145.f_15268;
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
			
			case joaat("weapon_minismg"):
				switch (iParam1)
				{
					case joaat("component_minismg_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_minismg_clip_02"):
						iVar0 = Global_262145.f_17710;
						break;
				}
				break;
			
			case joaat("weapon_combatpdw"):
				switch (iParam1)
				{
					case joaat("component_combatpdw_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_combatpdw_clip_02"):
						iVar0 = Global_262145.f_19672;
						break;
					
					case joaat("component_combatpdw_clip_03"):
						iVar0 = Global_262145.f_15270;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_19673;
						break;
					
					case joaat("component_at_scope_small"):
						iVar0 = Global_262145.f_19675;
						break;
					
					case joaat("component_at_ar_afgrip"):
						iVar0 = Global_262145.f_19674;
						break;
				}
				break;
			
			case joaat("weapon_assaultrifle_mk2"):
				switch (iParam1)
				{
					case joaat("component_assaultrifle_mk2_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_assaultrifle_mk2_clip_02"):
						iVar0 = Global_262145.f_19793;
						break;
					
					case joaat("component_assaultrifle_mk2_clip_armorpiercing"):
						iVar0 = Global_262145.f_19794;
						break;
					
					case joaat("component_assaultrifle_mk2_clip_fmj"):
						iVar0 = Global_262145.f_19795;
						break;
					
					case joaat("component_assaultrifle_mk2_clip_incendiary"):
						iVar0 = Global_262145.f_19796;
						break;
					
					case joaat("component_assaultrifle_mk2_clip_tracer"):
						iVar0 = Global_262145.f_19797;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_19798;
						break;
					
					case joaat("component_at_sights"):
						iVar0 = Global_262145.f_19799;
						break;
					
					case joaat("component_at_scope_macro_mk2"):
						iVar0 = Global_262145.f_19800;
						break;
					
					case joaat("component_at_scope_small_mk2"):
						iVar0 = Global_262145.f_19801;
						break;
					
					case joaat("component_at_scope_medium_mk2"):
						iVar0 = Global_262145.f_19802;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = Global_262145.f_19803;
						break;
					
					case joaat("component_at_muzzle_01"):
						iVar0 = Global_262145.f_19804;
						break;
					
					case joaat("component_at_muzzle_02"):
						iVar0 = Global_262145.f_19805;
						break;
					
					case joaat("component_at_muzzle_03"):
						iVar0 = Global_262145.f_19806;
						break;
					
					case joaat("component_at_muzzle_04"):
						iVar0 = Global_262145.f_19807;
						break;
					
					case joaat("component_at_muzzle_05"):
						iVar0 = Global_262145.f_19808;
						break;
					
					case joaat("component_at_muzzle_06"):
						iVar0 = Global_262145.f_19809;
						break;
					
					case joaat("component_at_muzzle_07"):
						iVar0 = Global_262145.f_19810;
						break;
					
					case joaat("component_at_ar_afgrip_02"):
						iVar0 = Global_262145.f_19811;
						break;
					
					case joaat("component_at_ar_barrel_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_at_ar_barrel_02"):
						iVar0 = Global_262145.f_19812;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO"):
						iVar0 = Global_262145.f_19921;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_02"):
						iVar0 = Global_262145.f_19922;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_03"):
						iVar0 = Global_262145.f_19923;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_04"):
						iVar0 = Global_262145.f_19924;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_05"):
						iVar0 = Global_262145.f_19925;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_06"):
						iVar0 = Global_262145.f_19926;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_07"):
						iVar0 = Global_262145.f_19927;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_08"):
						iVar0 = Global_262145.f_19928;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_09"):
						iVar0 = Global_262145.f_19929;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_10"):
						iVar0 = Global_262145.f_19930;
						break;
					
					case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_19931;
						break;
				}
				break;
			
			case joaat("weapon_carbinerifle_mk2"):
				switch (iParam1)
				{
					case joaat("component_carbinerifle_mk2_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_carbinerifle_mk2_clip_02"):
						iVar0 = Global_262145.f_19813;
						break;
					
					case joaat("component_carbinerifle_mk2_clip_armorpiercing"):
						iVar0 = Global_262145.f_19814;
						break;
					
					case joaat("component_carbinerifle_mk2_clip_fmj"):
						iVar0 = Global_262145.f_19815;
						break;
					
					case joaat("component_carbinerifle_mk2_clip_incendiary"):
						iVar0 = Global_262145.f_19816;
						break;
					
					case joaat("component_carbinerifle_mk2_clip_tracer"):
						iVar0 = Global_262145.f_19817;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_19818;
						break;
					
					case joaat("component_at_sights"):
						iVar0 = Global_262145.f_19819;
						break;
					
					case joaat("component_at_scope_macro_mk2"):
						iVar0 = Global_262145.f_19820;
						break;
					
					case joaat("component_at_scope_small_mk2"):
						iVar0 = Global_262145.f_19821;
						break;
					
					case joaat("component_at_scope_medium_mk2"):
						iVar0 = Global_262145.f_19822;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_262145.f_19823;
						break;
					
					case joaat("component_at_muzzle_01"):
						iVar0 = Global_262145.f_19824;
						break;
					
					case joaat("component_at_muzzle_02"):
						iVar0 = Global_262145.f_19825;
						break;
					
					case joaat("component_at_muzzle_03"):
						iVar0 = Global_262145.f_19826;
						break;
					
					case joaat("component_at_muzzle_04"):
						iVar0 = Global_262145.f_19827;
						break;
					
					case joaat("component_at_muzzle_05"):
						iVar0 = Global_262145.f_19828;
						break;
					
					case joaat("component_at_muzzle_06"):
						iVar0 = Global_262145.f_19829;
						break;
					
					case joaat("component_at_muzzle_07"):
						iVar0 = Global_262145.f_19830;
						break;
					
					case joaat("component_at_ar_afgrip_02"):
						iVar0 = Global_262145.f_19831;
						break;
					
					case joaat("component_at_cr_barrel_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_at_cr_barrel_02"):
						iVar0 = Global_262145.f_19832;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO"):
						iVar0 = Global_262145.f_19921;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_02"):
						iVar0 = Global_262145.f_19922;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_03"):
						iVar0 = Global_262145.f_19923;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_04"):
						iVar0 = Global_262145.f_19924;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_05"):
						iVar0 = Global_262145.f_19925;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_06"):
						iVar0 = Global_262145.f_19926;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_07"):
						iVar0 = Global_262145.f_19927;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_08"):
						iVar0 = Global_262145.f_19928;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_09"):
						iVar0 = Global_262145.f_19929;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_10"):
						iVar0 = Global_262145.f_19930;
						break;
					
					case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_19931;
						break;
				}
				break;
			
			case joaat("weapon_combatmg_mk2"):
				switch (iParam1)
				{
					case joaat("component_combatmg_mk2_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_combatmg_mk2_clip_02"):
						iVar0 = Global_262145.f_19833;
						break;
					
					case joaat("component_combatmg_mk2_clip_armorpiercing"):
						iVar0 = Global_262145.f_19834;
						break;
					
					case joaat("component_combatmg_mk2_clip_fmj"):
						iVar0 = Global_262145.f_19835;
						break;
					
					case joaat("component_combatmg_mk2_clip_incendiary"):
						iVar0 = Global_262145.f_19836;
						break;
					
					case joaat("component_combatmg_mk2_clip_tracer"):
						iVar0 = Global_262145.f_19837;
						break;
					
					case joaat("component_at_sights"):
						iVar0 = Global_262145.f_19838;
						break;
					
					case joaat("component_at_scope_macro_mk2"):
						iVar0 = Global_262145.f_19839;
						break;
					
					case joaat("component_at_scope_small_mk2"):
						iVar0 = Global_262145.f_19840;
						break;
					
					case joaat("component_at_scope_medium_mk2"):
						iVar0 = Global_262145.f_19841;
						break;
					
					case joaat("component_at_muzzle_01"):
						iVar0 = Global_262145.f_19842;
						break;
					
					case joaat("component_at_muzzle_02"):
						iVar0 = Global_262145.f_19843;
						break;
					
					case joaat("component_at_muzzle_03"):
						iVar0 = Global_262145.f_19844;
						break;
					
					case joaat("component_at_muzzle_04"):
						iVar0 = Global_262145.f_19845;
						break;
					
					case joaat("component_at_muzzle_05"):
						iVar0 = Global_262145.f_19846;
						break;
					
					case joaat("component_at_muzzle_06"):
						iVar0 = Global_262145.f_19847;
						break;
					
					case joaat("component_at_muzzle_07"):
						iVar0 = Global_262145.f_19848;
						break;
					
					case joaat("component_at_ar_afgrip_02"):
						iVar0 = Global_262145.f_19849;
						break;
					
					case joaat("component_at_mg_barrel_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_at_mg_barrel_02"):
						iVar0 = Global_262145.f_19850;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CAMO"):
						iVar0 = Global_262145.f_19921;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_02"):
						iVar0 = Global_262145.f_19922;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_03"):
						iVar0 = Global_262145.f_19923;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_04"):
						iVar0 = Global_262145.f_19924;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_05"):
						iVar0 = Global_262145.f_19925;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_06"):
						iVar0 = Global_262145.f_19926;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_07"):
						iVar0 = Global_262145.f_19927;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_08"):
						iVar0 = Global_262145.f_19928;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_09"):
						iVar0 = Global_262145.f_19929;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_10"):
						iVar0 = Global_262145.f_19930;
						break;
					
					case joaat("COMPONENT_COMBATMG_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_19931;
						break;
				}
				break;
			
			case joaat("weapon_heavysniper_mk2"):
				switch (iParam1)
				{
					case joaat("component_heavysniper_mk2_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_heavysniper_mk2_clip_02"):
						iVar0 = Global_262145.f_19851;
						break;
					
					case joaat("component_heavysniper_mk2_clip_armorpiercing"):
						iVar0 = Global_262145.f_19852;
						break;
					
					case joaat("component_heavysniper_mk2_clip_fmj"):
						iVar0 = Global_262145.f_19854;
						break;
					
					case joaat("component_heavysniper_mk2_clip_incendiary"):
						iVar0 = Global_262145.f_19855;
						break;
					
					case joaat("component_heavysniper_mk2_clip_explosive"):
						iVar0 = Global_262145.f_19853;
						break;
					
					case joaat("component_at_scope_large_mk2"):
						iVar0 = Global_262145.f_19856;
						break;
					
					case joaat("component_at_scope_max"):
						iVar0 = 0;
						break;
					
					case joaat("component_at_scope_nv"):
						iVar0 = Global_262145.f_19857;
						break;
					
					case joaat("component_at_scope_thermal"):
						iVar0 = Global_262145.f_19858;
						break;
					
					case joaat("component_at_sr_supp_03"):
						iVar0 = Global_262145.f_19859;
						break;
					
					case joaat("component_at_muzzle_08"):
						iVar0 = Global_262145.f_19860;
						break;
					
					case joaat("component_at_muzzle_09"):
						iVar0 = Global_262145.f_19861;
						break;
					
					case joaat("component_at_sr_barrel_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_at_sr_barrel_02"):
						iVar0 = Global_262145.f_19862;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO"):
						iVar0 = Global_262145.f_19921;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_02"):
						iVar0 = Global_262145.f_19922;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_03"):
						iVar0 = Global_262145.f_19923;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_04"):
						iVar0 = Global_262145.f_19924;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_05"):
						iVar0 = Global_262145.f_19925;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_06"):
						iVar0 = Global_262145.f_19926;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_07"):
						iVar0 = Global_262145.f_19927;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_08"):
						iVar0 = Global_262145.f_19928;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_09"):
						iVar0 = Global_262145.f_19929;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_10"):
						iVar0 = Global_262145.f_19930;
						break;
					
					case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_19931;
						break;
				}
				break;
			
			case joaat("weapon_pistol_mk2"):
				switch (iParam1)
				{
					case joaat("component_pistol_mk2_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_pistol_mk2_clip_02"):
						iVar0 = Global_262145.f_19863;
						break;
					
					case joaat("component_pistol_mk2_clip_hollowpoint"):
						iVar0 = Global_262145.f_19865;
						break;
					
					case joaat("component_pistol_mk2_clip_fmj"):
						iVar0 = Global_262145.f_19864;
						break;
					
					case joaat("component_pistol_mk2_clip_incendiary"):
						iVar0 = Global_262145.f_19866;
						break;
					
					case joaat("component_pistol_mk2_clip_tracer"):
						iVar0 = Global_262145.f_19867;
						break;
					
					case joaat("component_at_pi_flsh_02"):
						iVar0 = Global_262145.f_19868;
						break;
					
					case joaat("component_at_pi_rail"):
						iVar0 = Global_262145.f_19869;
						break;
					
					case joaat("component_at_pi_supp_02"):
						iVar0 = Global_262145.f_19870;
						break;
					
					case joaat("component_at_pi_comp"):
						iVar0 = Global_262145.f_19871;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CAMO"):
						iVar0 = Global_262145.f_19921;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CAMO_02"):
						iVar0 = Global_262145.f_19922;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CAMO_03"):
						iVar0 = Global_262145.f_19923;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CAMO_04"):
						iVar0 = Global_262145.f_19924;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CAMO_05"):
						iVar0 = Global_262145.f_19925;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CAMO_06"):
						iVar0 = Global_262145.f_19926;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CAMO_07"):
						iVar0 = Global_262145.f_19927;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CAMO_08"):
						iVar0 = Global_262145.f_19928;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CAMO_09"):
						iVar0 = Global_262145.f_19929;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CAMO_10"):
						iVar0 = Global_262145.f_19930;
						break;
					
					case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_19931;
						break;
				}
				break;
			
			case joaat("weapon_smg_mk2"):
				switch (iParam1)
				{
					case joaat("component_smg_mk2_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_smg_mk2_clip_02"):
						iVar0 = Global_262145.f_19872;
						break;
					
					case joaat("component_smg_mk2_clip_hollowpoint"):
						iVar0 = Global_262145.f_19874;
						break;
					
					case joaat("component_smg_mk2_clip_fmj"):
						iVar0 = Global_262145.f_19873;
						break;
					
					case joaat("component_smg_mk2_clip_incendiary"):
						iVar0 = Global_262145.f_19875;
						break;
					
					case joaat("component_smg_mk2_clip_tracer"):
						iVar0 = Global_262145.f_19876;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_19877;
						break;
					
					case joaat("component_at_sights_smg"):
						iVar0 = Global_262145.f_19878;
						break;
					
					case joaat("component_at_scope_macro_02_smg_mk2"):
						iVar0 = Global_262145.f_19879;
						break;
					
					case joaat("component_at_scope_small_smg_mk2"):
						iVar0 = Global_262145.f_19880;
						break;
					
					case joaat("component_at_pi_supp"):
						iVar0 = Global_262145.f_19881;
						break;
					
					case joaat("component_at_muzzle_01"):
						iVar0 = Global_262145.f_19882;
						break;
					
					case joaat("component_at_muzzle_02"):
						iVar0 = Global_262145.f_19883;
						break;
					
					case joaat("component_at_muzzle_03"):
						iVar0 = Global_262145.f_19884;
						break;
					
					case joaat("component_at_muzzle_04"):
						iVar0 = Global_262145.f_19885;
						break;
					
					case joaat("component_at_muzzle_05"):
						iVar0 = Global_262145.f_19886;
						break;
					
					case joaat("component_at_muzzle_06"):
						iVar0 = Global_262145.f_19887;
						break;
					
					case joaat("component_at_muzzle_07"):
						iVar0 = Global_262145.f_19888;
						break;
					
					case joaat("component_at_sb_barrel_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_at_sb_barrel_02"):
						iVar0 = Global_262145.f_19889;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CAMO"):
						iVar0 = Global_262145.f_19921;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CAMO_02"):
						iVar0 = Global_262145.f_19922;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CAMO_03"):
						iVar0 = Global_262145.f_19923;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CAMO_04"):
						iVar0 = Global_262145.f_19924;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CAMO_05"):
						iVar0 = Global_262145.f_19925;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CAMO_06"):
						iVar0 = Global_262145.f_19926;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CAMO_07"):
						iVar0 = Global_262145.f_19927;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CAMO_08"):
						iVar0 = Global_262145.f_19928;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CAMO_09"):
						iVar0 = Global_262145.f_19929;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CAMO_10"):
						iVar0 = Global_262145.f_19930;
						break;
					
					case joaat("COMPONENT_SMG_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_19931;
						break;
				}
				break;
			
			case joaat("weapon_pumpshotgun_mk2"):
				switch (iParam1)
				{
					case joaat("component_pumpshotgun_mk2_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_pumpshotgun_mk2_clip_armorpiercing"):
						iVar0 = Global_262145.f_21520;
						break;
					
					case joaat("component_pumpshotgun_mk2_clip_explosive"):
						iVar0 = Global_262145.f_21521;
						break;
					
					case joaat("component_pumpshotgun_mk2_clip_hollowpoint"):
						iVar0 = Global_262145.f_21519;
						break;
					
					case joaat("component_pumpshotgun_mk2_clip_incendiary"):
						iVar0 = Global_262145.f_21518;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_21547;
						break;
					
					case joaat("component_at_sights"):
						iVar0 = Global_262145.f_21548;
						break;
					
					case joaat("component_at_scope_macro_mk2"):
						iVar0 = Global_262145.f_21549;
						break;
					
					case joaat("component_at_scope_small_mk2"):
						iVar0 = Global_262145.f_21550;
						break;
					
					case joaat("component_at_sr_supp_03"):
						iVar0 = Global_262145.f_21551;
						break;
					
					case joaat("component_at_muzzle_08"):
						iVar0 = Global_262145.f_21552;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO"):
						iVar0 = Global_262145.f_19921;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_02"):
						iVar0 = Global_262145.f_19922;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_03"):
						iVar0 = Global_262145.f_19923;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_04"):
						iVar0 = Global_262145.f_19924;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_05"):
						iVar0 = Global_262145.f_19925;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_06"):
						iVar0 = Global_262145.f_19926;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_07"):
						iVar0 = Global_262145.f_19927;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_08"):
						iVar0 = Global_262145.f_19928;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_09"):
						iVar0 = Global_262145.f_19929;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_10"):
						iVar0 = Global_262145.f_19930;
						break;
					
					case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_19931;
						break;
				}
				break;
			
			case joaat("weapon_specialcarbine_mk2"):
				switch (iParam1)
				{
					case joaat("component_specialcarbine_mk2_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_specialcarbine_mk2_clip_02"):
						iVar0 = Global_262145.f_21522;
						break;
					
					case joaat("component_specialcarbine_mk2_clip_armorpiercing"):
						iVar0 = Global_262145.f_21526;
						break;
					
					case joaat("component_specialcarbine_mk2_clip_fmj"):
						iVar0 = Global_262145.f_21524;
						break;
					
					case joaat("component_specialcarbine_mk2_clip_incendiary"):
						iVar0 = Global_262145.f_21525;
						break;
					
					case joaat("component_specialcarbine_mk2_clip_tracer"):
						iVar0 = Global_262145.f_21523;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_21553;
						break;
					
					case joaat("component_at_sights"):
						iVar0 = Global_262145.f_21554;
						break;
					
					case joaat("component_at_scope_macro_mk2"):
						iVar0 = Global_262145.f_21555;
						break;
					
					case joaat("component_at_scope_medium_mk2"):
						iVar0 = Global_262145.f_21556;
						break;
					
					case joaat("component_at_ar_supp_02"):
						iVar0 = Global_262145.f_21557;
						break;
					
					case joaat("component_at_muzzle_01"):
						iVar0 = Global_262145.f_21558;
						break;
					
					case joaat("component_at_muzzle_02"):
						iVar0 = Global_262145.f_21559;
						break;
					
					case joaat("component_at_muzzle_03"):
						iVar0 = Global_262145.f_21560;
						break;
					
					case joaat("component_at_muzzle_04"):
						iVar0 = Global_262145.f_21561;
						break;
					
					case joaat("component_at_muzzle_05"):
						iVar0 = Global_262145.f_21562;
						break;
					
					case joaat("component_at_muzzle_06"):
						iVar0 = Global_262145.f_21563;
						break;
					
					case joaat("component_at_muzzle_07"):
						iVar0 = Global_262145.f_21564;
						break;
					
					case joaat("component_at_ar_afgrip_02"):
						iVar0 = Global_262145.f_21565;
						break;
					
					case joaat("component_at_sc_barrel_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_at_sc_barrel_02"):
						iVar0 = Global_262145.f_21566;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO"):
						iVar0 = Global_262145.f_19921;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_02"):
						iVar0 = Global_262145.f_19922;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_03"):
						iVar0 = Global_262145.f_19923;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_04"):
						iVar0 = Global_262145.f_19924;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_05"):
						iVar0 = Global_262145.f_19925;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_06"):
						iVar0 = Global_262145.f_19926;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_07"):
						iVar0 = Global_262145.f_19927;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_08"):
						iVar0 = Global_262145.f_19928;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_09"):
						iVar0 = Global_262145.f_19929;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_10"):
						iVar0 = Global_262145.f_19930;
						break;
					
					case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_19931;
						break;
				}
				break;
			
			case joaat("weapon_snspistol_mk2"):
				switch (iParam1)
				{
					case joaat("component_snspistol_mk2_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_snspistol_mk2_clip_02"):
						iVar0 = Global_262145.f_22412;
						break;
					
					case joaat("component_snspistol_mk2_clip_fmj"):
						iVar0 = Global_262145.f_21542;
						break;
					
					case joaat("component_snspistol_mk2_clip_hollowpoint"):
						iVar0 = Global_262145.f_21544;
						break;
					
					case joaat("component_snspistol_mk2_clip_incendiary"):
						iVar0 = Global_262145.f_21543;
						break;
					
					case joaat("component_snspistol_mk2_clip_tracer"):
						iVar0 = Global_262145.f_21541;
						break;
					
					case joaat("component_at_pi_flsh_03"):
						iVar0 = Global_262145.f_21598;
						break;
					
					case joaat("component_at_pi_rail_02"):
						iVar0 = Global_262145.f_21599;
						break;
					
					case joaat("component_at_pi_supp_02"):
						iVar0 = Global_262145.f_21600;
						break;
					
					case joaat("component_at_pi_comp_02"):
						iVar0 = Global_262145.f_21601;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO"):
						iVar0 = Global_262145.f_19921;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02"):
						iVar0 = Global_262145.f_19922;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03"):
						iVar0 = Global_262145.f_19923;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04"):
						iVar0 = Global_262145.f_19924;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05"):
						iVar0 = Global_262145.f_19925;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06"):
						iVar0 = Global_262145.f_19926;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07"):
						iVar0 = Global_262145.f_19927;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08"):
						iVar0 = Global_262145.f_19928;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09"):
						iVar0 = Global_262145.f_19929;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10"):
						iVar0 = Global_262145.f_19930;
						break;
					
					case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_19931;
						break;
				}
				break;
			
			case joaat("weapon_marksmanrifle_mk2"):
				switch (iParam1)
				{
					case joaat("component_marksmanrifle_mk2_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_marksmanrifle_mk2_clip_02"):
						iVar0 = Global_262145.f_21527;
						break;
					
					case joaat("component_marksmanrifle_mk2_clip_armorpiercing"):
						iVar0 = Global_262145.f_21531;
						break;
					
					case joaat("component_marksmanrifle_mk2_clip_fmj"):
						iVar0 = Global_262145.f_21529;
						break;
					
					case joaat("component_marksmanrifle_mk2_clip_incendiary"):
						iVar0 = Global_262145.f_21530;
						break;
					
					case joaat("component_marksmanrifle_mk2_clip_tracer"):
						iVar0 = Global_262145.f_21528;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_21567;
						break;
					
					case joaat("component_at_sights"):
						iVar0 = Global_262145.f_21568;
						break;
					
					case joaat("component_at_scope_medium_mk2"):
						iVar0 = Global_262145.f_21569;
						break;
					
					case joaat("component_at_scope_large_fixed_zoom_mk2"):
						iVar0 = 0;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_262145.f_21570;
						break;
					
					case joaat("component_at_muzzle_01"):
						iVar0 = Global_262145.f_21571;
						break;
					
					case joaat("component_at_muzzle_02"):
						iVar0 = Global_262145.f_21572;
						break;
					
					case joaat("component_at_muzzle_03"):
						iVar0 = Global_262145.f_21573;
						break;
					
					case joaat("component_at_muzzle_04"):
						iVar0 = Global_262145.f_21574;
						break;
					
					case joaat("component_at_muzzle_05"):
						iVar0 = Global_262145.f_21575;
						break;
					
					case joaat("component_at_muzzle_06"):
						iVar0 = Global_262145.f_21576;
						break;
					
					case joaat("component_at_muzzle_07"):
						iVar0 = Global_262145.f_21577;
						break;
					
					case joaat("component_at_ar_afgrip_02"):
						iVar0 = Global_262145.f_21578;
						break;
					
					case joaat("component_at_mrfl_barrel_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_at_mrfl_barrel_02"):
						iVar0 = Global_262145.f_21579;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO"):
						iVar0 = Global_262145.f_19921;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_02"):
						iVar0 = Global_262145.f_19922;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_03"):
						iVar0 = Global_262145.f_19923;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_04"):
						iVar0 = Global_262145.f_19924;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_05"):
						iVar0 = Global_262145.f_19925;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_06"):
						iVar0 = Global_262145.f_19926;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_07"):
						iVar0 = Global_262145.f_19927;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_08"):
						iVar0 = Global_262145.f_19928;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_09"):
						iVar0 = Global_262145.f_19929;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_10"):
						iVar0 = Global_262145.f_19930;
						break;
					
					case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_19931;
						break;
				}
				break;
			
			case joaat("weapon_revolver_mk2"):
				switch (iParam1)
				{
					case joaat("component_revolver_mk2_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_revolver_mk2_clip_tracer"):
						iVar0 = Global_262145.f_21532;
						break;
					
					case joaat("component_revolver_mk2_clip_fmj"):
						iVar0 = Global_262145.f_21533;
						break;
					
					case joaat("component_revolver_mk2_clip_hollowpoint"):
						iVar0 = Global_262145.f_21535;
						break;
					
					case joaat("component_revolver_mk2_clip_incendiary"):
						iVar0 = Global_262145.f_21534;
						break;
					
					case joaat("component_at_sights"):
						iVar0 = Global_262145.f_21580;
						break;
					
					case joaat("component_at_scope_macro_mk2"):
						iVar0 = Global_262145.f_21581;
						break;
					
					case joaat("component_at_pi_flsh"):
						iVar0 = Global_262145.f_21582;
						break;
					
					case joaat("component_at_pi_comp_03"):
						iVar0 = Global_262145.f_21583;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CAMO"):
						iVar0 = Global_262145.f_19921;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_02"):
						iVar0 = Global_262145.f_19922;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_03"):
						iVar0 = Global_262145.f_19923;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_04"):
						iVar0 = Global_262145.f_19924;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_05"):
						iVar0 = Global_262145.f_19925;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_06"):
						iVar0 = Global_262145.f_19926;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_07"):
						iVar0 = Global_262145.f_19927;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_08"):
						iVar0 = Global_262145.f_19928;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_09"):
						iVar0 = Global_262145.f_19929;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_10"):
						iVar0 = Global_262145.f_19930;
						break;
					
					case joaat("COMPONENT_REVOLVER_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_19931;
						break;
				}
				break;
			
			case joaat("weapon_bullpuprifle_mk2"):
				switch (iParam1)
				{
					case joaat("component_bullpuprifle_mk2_clip_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_bullpuprifle_mk2_clip_02"):
						iVar0 = Global_262145.f_21536;
						break;
					
					case joaat("component_bullpuprifle_mk2_clip_armorpiercing"):
						iVar0 = Global_262145.f_21540;
						break;
					
					case joaat("component_bullpuprifle_mk2_clip_fmj"):
						iVar0 = Global_262145.f_21538;
						break;
					
					case joaat("component_bullpuprifle_mk2_clip_incendiary"):
						iVar0 = Global_262145.f_21539;
						break;
					
					case joaat("component_bullpuprifle_mk2_clip_tracer"):
						iVar0 = Global_262145.f_21537;
						break;
					
					case joaat("component_at_ar_flsh"):
						iVar0 = Global_262145.f_21584;
						break;
					
					case joaat("component_at_sights"):
						iVar0 = Global_262145.f_21585;
						break;
					
					case joaat("component_at_scope_macro_02_mk2"):
						iVar0 = Global_262145.f_21586;
						break;
					
					case joaat("component_at_scope_small_mk2"):
						iVar0 = Global_262145.f_21587;
						break;
					
					case joaat("component_at_bp_barrel_01"):
						iVar0 = 0;
						break;
					
					case joaat("component_at_bp_barrel_02"):
						iVar0 = Global_262145.f_21597;
						break;
					
					case joaat("component_at_ar_supp"):
						iVar0 = Global_262145.f_21588;
						break;
					
					case joaat("component_at_muzzle_01"):
						iVar0 = Global_262145.f_21589;
						break;
					
					case joaat("component_at_muzzle_02"):
						iVar0 = Global_262145.f_21590;
						break;
					
					case joaat("component_at_muzzle_03"):
						iVar0 = Global_262145.f_21591;
						break;
					
					case joaat("component_at_muzzle_04"):
						iVar0 = Global_262145.f_21592;
						break;
					
					case joaat("component_at_muzzle_05"):
						iVar0 = Global_262145.f_21593;
						break;
					
					case joaat("component_at_muzzle_06"):
						iVar0 = Global_262145.f_21594;
						break;
					
					case joaat("component_at_muzzle_07"):
						iVar0 = Global_262145.f_21595;
						break;
					
					case joaat("component_at_ar_afgrip_02"):
						iVar0 = Global_262145.f_21596;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO"):
						iVar0 = Global_262145.f_19921;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_02"):
						iVar0 = Global_262145.f_19922;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_03"):
						iVar0 = Global_262145.f_19923;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_04"):
						iVar0 = Global_262145.f_19924;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_05"):
						iVar0 = Global_262145.f_19925;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_06"):
						iVar0 = Global_262145.f_19926;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_07"):
						iVar0 = Global_262145.f_19927;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_08"):
						iVar0 = Global_262145.f_19928;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_09"):
						iVar0 = Global_262145.f_19929;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_10"):
						iVar0 = Global_262145.f_19930;
						break;
					
					case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_IND_01"):
						iVar0 = Global_262145.f_19931;
						break;
				}
				break;
			
			default:
				iVar65 = func_64(iParam0, &uVar67);
				if (iVar65 != -1)
				{
					iVar66 = 0;
					while (iVar66 < unk_0x184BE178B47BBA96(iVar65))
					{
						if (unk_0xFBDC30E38B541C22(iVar65, iVar66, &Var106))
						{
							if (!func_61(Var106.f_3))
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
						}
						iVar66++;
					}
				}
				break;
			}
	}
	if (unk_0x44243F2E2F58B8E3() && func_302())
	{
		StringCopy(&Var144, func_300(iParam1, iParam0), 16);
		func_296(&sVar128, Var144, unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()), 3, 1, func_298(iParam0), func_297(iParam0), -1, 0, 0);
		if (unk_0x393CD2FA300F18B3(&sVar128))
		{
			iVar0 = unk_0xF3106E57A8698995(unk_0x6E987D62C8535B6E(&sVar128), 1671640801, 1);
		}
	}
	if (iVar0 > 0)
	{
		fVar148 = func_270(iParam0, &iVar0, fVar1);
		if (fVar148 != 1f)
		{
		}
	}
	return iVar0;
}

float func_270(int iParam0, int iParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = 0f;
	if (unk_0x44243F2E2F58B8E3() && func_302())
	{
		return 1f;
	}
	if (!unk_0x44243F2E2F58B8E3())
	{
		*iParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*iParam1) * fParam2));
	}
	if (!Global_70852)
	{
		if (*iParam1 != 0)
		{
			iVar2 = func_293(iParam0);
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
	if (iLocal_104 == 1)
	{
		if (unk_0x44243F2E2F58B8E3())
		{
			*iParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*iParam1) * Global_262145.f_76));
			fVar1 = (fVar1 + (unk_0xBBDA792448DB5A89(Global_262145.f_121) / 100f));
		}
	}
	if (iLocal_104 == 0)
	{
		if (unk_0x44243F2E2F58B8E3())
		{
			*iParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*iParam1) * Global_262145.f_76));
			if (func_271())
			{
				fVar1 = (fVar1 + (unk_0xBBDA792448DB5A89(Global_262145.f_121) / 100f));
				iLocal_104 = 1;
			}
			else
			{
				iLocal_104 = -1;
			}
		}
	}
	fVar0 = (1f - fVar1);
	*iParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*iParam1) * fVar0));
	return fVar0;
}

int func_271()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (unk_0xC339C5C5B5E8BC5B())
	{
		return 0;
	}
	if (func_290())
	{
		if (func_275())
		{
			iVar0 = func_273();
			iVar1 = func_272();
			fVar2 = ((unk_0xBBDA792448DB5A89(iVar1) / unk_0xBBDA792448DB5A89(iVar0)) * 100f);
			if (fVar2 > IntToFloat(Global_262145.f_120) && iVar0 >= 8)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_272()
{
	int iVar0;
	
	iVar0 = (iVar0 + Global_1367765);
	iVar0 = (iVar0 + Global_1367768);
	return iVar0;
}

int func_273()
{
	int iVar0;
	
	iVar0 = (iVar0 + Global_1367766);
	iVar0 = (iVar0 + Global_1367767);
	iVar0 = (iVar0 + Global_1367765);
	iVar0 = (iVar0 + Global_1367768);
	iVar0 = (iVar0 + Global_1367770);
	iVar0 = (iVar0 + Global_1367769);
	iVar0 = (iVar0 + func_274(joaat("mpply_exploits")));
	iVar0 = (iVar0 + func_274(joaat("mpply_vc_annoyingme")));
	iVar0 = (iVar0 + func_274(joaat("mpply_vc_hate")));
	iVar0 = (iVar0 + func_274(joaat("mpply_bad_crew_name")));
	iVar0 = (iVar0 + func_274(joaat("mpply_bad_crew_motto")));
	iVar0 = (iVar0 + func_274(joaat("mpply_bad_crew_status")));
	iVar0 = (iVar0 + func_274(joaat("mpply_bad_crew_emblem")));
	iVar0 = (iVar0 + func_274(joaat("mpply_playermade_title")));
	iVar0 = (iVar0 + func_274(joaat("mpply_playermade_desc")));
	return iVar0;
}

int func_274(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (unk_0xD194C635833AC189(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_275()
{
	struct<7> Var0;
	struct<7> Var7;
	
	unk_0x6FAA3F4DDED5643E(&Var0, &(Var0.f_1), &(Var0.f_2), &(Var0.f_3), &(Var0.f_4), &(Var0.f_5));
	Var7 = { func_289(joaat("mpply_started_mp")) };
	if (func_276(Var7, Var0, 7))
	{
		return 1;
	}
	return 0;
}

int func_276(struct<7> Param0, struct<7> Param7, int iParam14)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_287(Param7);
	iVar1 = func_283(Param0, iParam14);
	if (iVar1 == -15)
	{
		return 0;
	}
	if (func_277(iVar0, iVar1) == 1)
	{
		return 1;
	}
	return 0;
}

int func_277(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_282(iParam1) || !func_282(iParam0))
	{
		return 1;
	}
	iVar0 = func_98(iParam0);
	iVar1 = func_98(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_100(iParam0);
	iVar1 = func_100(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_281(iParam0);
	iVar1 = func_281(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_280(iParam0);
	iVar1 = func_280(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_279(iParam0);
	iVar1 = func_279(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_278(iParam0);
	iVar1 = func_278(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_278(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_279(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_280(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_281(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_282(int iParam0)
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
	iVar0 = func_278(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_279(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_280(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_98(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_100(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_281(iParam0);
	if (iVar5 < 1 || iVar5 > func_97(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

var func_283(struct<7> Param0, int iParam7)
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	if (func_286(Param0) == 0)
	{
		uVar0 = func_287(Param0);
		uVar1 = uVar0;
		func_284(&uVar1, 0, 0, 0, iParam7, 0, 0);
		if (iParam7 == 0)
		{
			uVar1 = uVar0;
		}
		return uVar1;
	}
	return uVar2;
}

void func_284(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_98(*uParam0);
	iVar1 = func_100(*uParam0);
	iVar2 = func_281(*uParam0);
	iVar3 = func_280(*uParam0);
	iVar4 = func_279(*uParam0);
	iVar5 = func_278(*uParam0);
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
	iVar6 = func_97(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_97(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_285(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_285(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_103(uParam0, iParam1);
	func_102(uParam0, iParam2);
	func_101(uParam0, iParam3);
	func_95(uParam0, iParam5);
	func_96(uParam0, iParam4);
	func_94(uParam0, iParam6);
}

int func_286(struct<7> Param0)
{
	if ((((((Param0.f_0 == 0 && Param0.f_1 == 0) && Param0.f_2 == 0) && Param0.f_3 == 0) && Param0.f_4 == 0) && Param0.f_5 == 0) && Param0.f_6 == 0)
	{
		return 1;
	}
	return 0;
}

var func_287(struct<6> Param0, var uParam6)
{
	var uVar0;
	
	if (Param0.f_0 > 0)
	{
		func_94(&uVar0, Param0.f_0);
	}
	if (Param0.f_1 > 0)
	{
		func_95(&uVar0, func_288(Param0.f_1));
	}
	if (Param0.f_2 > 0)
	{
		func_96(&uVar0, Param0.f_2);
	}
	if (Param0.f_3 > 0)
	{
		func_101(&uVar0, Param0.f_3);
	}
	if (Param0.f_4 > 0)
	{
		func_102(&uVar0, Param0.f_4);
	}
	if (Param0.f_5 > 0)
	{
		func_103(&uVar0, Param0.f_5);
	}
	return uVar0;
}

int func_288(int iParam0)
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

struct<7> func_289(int iParam0)
{
	var uVar0;
	struct<7> Var1;
	struct<7> Var8;
	
	uVar0 = iParam0;
	if (unk_0xE07B86AEF35EB8AD(uVar0, &Var8, 7, -1))
	{
		return Var8;
	}
	return Var1;
}

int func_290()
{
	if (func_292() && func_291(0))
	{
		return 1;
	}
	return 0;
}

var func_291(int iParam0)
{
	return Global_1312373[iParam0];
}

var func_292()
{
	return func_291(func_52() + 1);
}

int func_293(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3[6];
	bool bVar10;
	
	iVar0 = func_221();
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
		switch (func_294(iVar1, iVar0))
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
		iVar3[0] = func_294(1, iVar0);
		iVar3[1] = func_294(3, iVar0);
		iVar3[2] = func_294(2, iVar0);
		iVar3[3] = func_294(4, iVar0);
		iVar3[4] = func_294(5, iVar0);
		iVar3[5] = func_294(0, iVar0);
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

int func_294(int iParam0, int iParam1)
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
	iVar4 = func_295(iVar0, iParam1);
	if (func_295(iVar1, iParam1) < iVar4)
	{
		iVar4 = func_295(iVar1, iParam1);
	}
	if (func_295(iVar2, iParam1) < iVar4)
	{
		iVar4 = func_295(iVar2, iParam1);
	}
	if (iVar3 != -1)
	{
		if (func_295(iVar3, iParam1) < iVar4)
		{
			iVar4 = func_295(iVar3, iParam1);
		}
	}
	return iVar4;
}

int func_295(int iParam0, int iParam1)
{
	return Global_104551.f_19117[iParam1 /*271*/].f_3[iParam0 /*12*/].f_3;
}

void func_296(char* sParam0, char[8] cParam1, char[4] cParam3, char[4] cParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12)
{
	switch (unk_0x6E987D62C8535B6E(&cParam1))
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
			if (iParam10 != -1)
			{
				StringConCat(sParam0, "_p", 64);
				StringIntConCat(sParam0, iParam10, 64);
			}
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
			if (iParam9 != -1)
			{
				StringConCat(sParam0, "_n", 64);
				StringIntConCat(sParam0, iParam9, 64);
			}
			break;
		
		case 4:
			if (iParam5 == Global_68193)
			{
				StringCopy(sParam0, "VE_BIG_YACHT_t0_v0", 64);
			}
			else if (iParam5 == Global_68194)
			{
				StringCopy(sParam0, "VE_BIG_TRUCK_t0_v0", 64);
			}
			else if (iParam5 == Global_68195)
			{
				StringCopy(sParam0, "VE_BALLISTIC_EQUIPMENT_t0_v0", 64);
			}
			else if (iParam5 == Global_68196)
			{
				StringCopy(sParam0, "VE_BIG_PLANE_t0_v0", 64);
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
				StringCopy(&cParam1, unk_0x89CCD0AB60278D90(iParam5), 16);
				if (unk_0xFAFFA408239A026B(&cParam1) || unk_0x6E987D62C8535B6E(&cParam1) == -515263000)
				{
					return;
				}
				StringConCat(sParam0, "VEM_INSURANCE_", 64);
				StringConCat(sParam0, &cParam1, 64);
				if (!bParam11)
				{
					switch (iParam5)
					{
						case joaat("dubsta2"):
						case joaat("cavalcade2"):
						case joaat("mesa2"):
						case joaat("rapidgt2"):
						case joaat("emperor2"):
						case joaat("cargobob2"):
							StringConCat(sParam0, "2", 64);
							break;
						
						case joaat("mesa3"):
						case joaat("emperor3"):
						case joaat("burrito3"):
						case joaat("mule3"):
							StringConCat(sParam0, "3", 64);
							break;
						
						case joaat("tornado4"):
							StringConCat(sParam0, "4", 64);
							break;
						}
				}
			}
			else if (iParam7 == 40)
			{
				if (iParam5 == joaat("fcr2"))
				{
					StringCopy(&cParam1, "FCR2", 16);
				}
				else if (iParam5 == joaat("diablous2"))
				{
					StringCopy(&cParam1, "DIABLOUS2", 16);
				}
				else if (iParam5 == joaat("comet3"))
				{
					StringCopy(&cParam1, "COMET3", 16);
				}
				else
				{
					StringCopy(&cParam1, unk_0x89CCD0AB60278D90(iParam5), 16);
					if (unk_0xFAFFA408239A026B(&cParam1))
					{
						return;
					}
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
				if (!bParam11)
				{
					switch (iParam5)
					{
						case joaat("dubsta2"):
						case joaat("cavalcade2"):
						case joaat("mesa2"):
						case joaat("rapidgt2"):
						case joaat("emperor2"):
						case joaat("cargobob2"):
							StringConCat(sParam0, "2", 64);
							break;
						
						case joaat("mesa3"):
						case joaat("emperor3"):
						case joaat("burrito3"):
						case joaat("mule3"):
							StringConCat(sParam0, "3", 64);
							break;
						
						case joaat("tornado4"):
							StringConCat(sParam0, "4", 64);
							break;
						}
				}
				if (iParam9 != -1)
				{
					StringConCat(sParam0, "_n", 64);
					StringIntConCat(sParam0, iParam9, 64);
				}
				StringConCat(sParam0, "_t", 64);
				StringIntConCat(sParam0, iParam7, 64);
				StringConCat(sParam0, "_v", 64);
				StringIntConCat(sParam0, iParam8, 64);
				if (iParam10 != -1)
				{
					StringConCat(sParam0, "_p", 64);
					StringIntConCat(sParam0, iParam10, 64);
				}
			}
			break;
	}
	if (bParam12)
	{
		StringConCat(sParam0, "_CESP", 64);
	}
}

int func_297(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_pistol_mk2"):
		case joaat("weapon_smg_mk2"):
		case joaat("weapon_assaultrifle_mk2"):
		case joaat("weapon_carbinerifle_mk2"):
		case joaat("weapon_combatmg_mk2"):
		case joaat("weapon_heavysniper_mk2"):
		case joaat("weapon_pumpshotgun_mk2"):
		case joaat("weapon_specialcarbine_mk2"):
		case joaat("weapon_snspistol_mk2"):
		case joaat("weapon_marksmanrifle_mk2"):
		case joaat("weapon_revolver_mk2"):
		case joaat("weapon_bullpuprifle_mk2"):
			return 2;
			break;
	}
	return -1;
}

int func_298(int iParam0)
{
	return func_299(iParam0);
}

int func_299(int iParam0)
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
		
		case joaat("weapon_autoshotgun"):
			return 72;
			break;
		
		case joaat("weapon_minismg"):
			return 73;
			break;
		
		case joaat("weapon_compactlauncher"):
			return 74;
			break;
		
		case joaat("weapon_battleaxe"):
			return 75;
			break;
		
		case joaat("weapon_pipebomb"):
			return 76;
			break;
		
		case joaat("weapon_poolcue"):
			return 77;
			break;
		
		case joaat("weapon_wrench"):
			return 78;
			break;
		
		case joaat("weapon_assaultrifle_mk2"):
			return 8;
			break;
		
		case joaat("weapon_carbinerifle_mk2"):
			return 9;
			break;
		
		case joaat("weapon_combatmg_mk2"):
			return 13;
			break;
		
		case joaat("weapon_heavysniper_mk2"):
			return 21;
			break;
		
		case joaat("weapon_pistol_mk2"):
			return 1;
			break;
		
		case joaat("weapon_smg_mk2"):
			return 5;
			break;
		
		case joaat("weapon_pumpshotgun_mk2"):
			return 22;
			break;
		
		case joaat("weapon_specialcarbine_mk2"):
			return 46;
			break;
		
		case joaat("weapon_snspistol_mk2"):
			return 47;
			break;
		
		case joaat("weapon_marksmanrifle_mk2"):
			return 56;
			break;
		
		case joaat("weapon_revolver_mk2"):
			return 70;
			break;
		
		case joaat("weapon_bullpuprifle_mk2"):
			return 48;
			break;
		
		case joaat("weapon_doubleaction"):
			return 79;
			break;
	}
	return 0;
}

char* func_300(int iParam0, int iParam1)
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
			return "WCT_NONE";
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
		
		case joaat("component_smg_clip_03"):
			return "WCT_CLIP_DRM";
			break;
		
		case joaat("component_carbinerifle_clip_03"):
			return "WCT_CLIP_BOX";
			break;
		
		case joaat("component_assaultrifle_clip_03"):
			return "WCT_CLIP_DRM";
			break;
		
		case joaat("component_heavyshotgun_clip_03"):
			return "WCT_CLIP_DRM";
			break;
		
		case joaat("component_gunrun_mk2_upgrade"):
			return "WCT_VAR_GUN";
			break;
		
		case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"):
			return "WCT_CAMO_IND";
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
			return "WCT_CAMO_IND";
			break;
		
		case joaat("component_snspistol_mk2_clip_02"):
			return "WCT_CLIP2";
			break;
		
		case joaat("component_at_scope_macro_02_mk2"):
			return "WCT_SCOPE_MAC2";
			break;
		
		case joaat("component_at_scope_small_mk2"):
			return "WCT_SCOPE_SML2";
			break;
		
		default:
			if (iParam1 != 0)
			{
				iVar0 = func_64(iParam1, &uVar2);
				if (iVar0 != -1)
				{
					iVar1 = 0;
					while (iVar1 < unk_0x184BE178B47BBA96(iVar0))
					{
						if (unk_0xFBDC30E38B541C22(iVar0, iVar1, &Var41))
						{
							if (Var41.f_3 == iParam0)
							{
								return func_301(&(Var41.f_6));
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

var func_301(var uParam0)
{
	return uParam0;
}

int func_302()
{
	if (unk_0x44243F2E2F58B8E3() && func_303())
	{
		return 1;
	}
	return 0;
}

int func_303()
{
	if (unk_0xC339C5C5B5E8BC5B())
	{
		return unk_0x7D2708796355B20B();
	}
	return 0;
}

int func_304(int iParam0)
{
	if (!unk_0x44243F2E2F58B8E3())
	{
		switch (iParam0)
		{
			case joaat("component_assaultrifle_clip_03"):
			case joaat("component_carbinerifle_clip_03"):
			case joaat("component_combatpdw_clip_03"):
			case joaat("component_compactrifle_clip_03"):
			case joaat("component_heavyshotgun_clip_03"):
			case joaat("component_machinepistol_clip_03"):
			case joaat("component_smg_clip_03"):
			case joaat("component_specialcarbine_clip_03"):
				return 0;
			
			default:
		}
	}
	else if (func_305(iParam0))
	{
		return Global_262145.f_19782;
	}
	return 1;
}

int func_305(int iParam0)
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_SMG_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_COMBATMG_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_REVOLVER_MK2_CAMO_IND_01"):
		case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_IND_01"):
			return 1;
			break;
	}
	return 0;
}

int func_306()
{
	var uVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	
	if (unk_0xB03A1684359C50A1(Global_25, 6))
	{
		if (unk_0xB03A1684359C50A1(Global_25, 2) || unk_0xB03A1684359C50A1(Global_25, 4))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xD194C635833AC189(joaat("sp_unlock_exclus_content"), &uVar0, -1))
	{
		if (unk_0xB03A1684359C50A1(uVar0, 6))
		{
			if (unk_0xB03A1684359C50A1(iVar0, 2) || unk_0xB03A1684359C50A1(iVar0, 4))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (unk_0xB653347679CE8520(0))
	{
		if (Global_143071.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (unk_0xD194C635833AC189(iVar2, &uVar1, -1))
			{
				if (unk_0xB03A1684359C50A1(uVar1, 8))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x16DC46A28107A94A())
	{
		uVar3 = unk_0x3A75EA627A024B7A(866);
		if (unk_0xB03A1684359C50A1(uVar3, 2) || unk_0xB03A1684359C50A1(iVar3, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_307()
{
	var uVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	
	if (unk_0xB03A1684359C50A1(Global_25, 5))
	{
		if (unk_0xB03A1684359C50A1(Global_25, 1) || unk_0xB03A1684359C50A1(Global_25, 3))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xD194C635833AC189(joaat("sp_unlock_exclus_content"), &uVar0, -1))
	{
		if (unk_0xB03A1684359C50A1(uVar0, 5))
		{
			if (unk_0xB03A1684359C50A1(iVar0, 1) || unk_0xB03A1684359C50A1(iVar0, 3))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (unk_0xB653347679CE8520(0))
	{
		if (Global_143071.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (unk_0xD194C635833AC189(iVar2, &uVar1, -1))
			{
				if (unk_0xB03A1684359C50A1(uVar1, 5))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0x16DC46A28107A94A())
	{
		uVar3 = unk_0x3A75EA627A024B7A(866);
		if (unk_0xB03A1684359C50A1(uVar3, 1) || unk_0xB03A1684359C50A1(iVar3, 3))
		{
			return 1;
		}
	}
	if (unk_0x1F30842E4146CE70())
	{
		if (unk_0xABC550EBCFE96BBC())
		{
			if (unk_0x73408477E157DD0C())
			{
				unk_0xD194C635833AC189(joaat("sp_unlock_exclus_content"), &uVar4, -1);
				unk_0xD2A9C3F486236CC5(&uVar4, 1);
				unk_0xD2A9C3F486236CC5(&uVar4, 3);
				unk_0xD2A9C3F486236CC5(&uVar4, 5);
				unk_0xD2A9C3F486236CC5(&Global_25, 1);
				unk_0xD2A9C3F486236CC5(&Global_25, 3);
				unk_0xD2A9C3F486236CC5(&Global_25, 5);
				unk_0xD92C8D8AF3C67820(joaat("sp_unlock_exclus_content"), uVar4, 1);
				if (unk_0x16DC46A28107A94A())
				{
					uVar4 = unk_0x3A75EA627A024B7A(866);
					unk_0xD2A9C3F486236CC5(&uVar4, 1);
					unk_0xD2A9C3F486236CC5(&uVar4, 3);
					unk_0x167AC4B8CEEB1F11(uVar4);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_308()
{
	var uVar0;
	
	if (unk_0x1F30842E4146CE70())
	{
		if (unk_0xABC550EBCFE96BBC())
		{
			if (unk_0xD51AEB3E72C71D1B())
			{
				unk_0xD194C635833AC189(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xD2A9C3F486236CC5(&uVar0, 2);
				unk_0xD2A9C3F486236CC5(&uVar0, 4);
				unk_0xD2A9C3F486236CC5(&uVar0, 6);
				unk_0xD2A9C3F486236CC5(&Global_25, 2);
				unk_0xD2A9C3F486236CC5(&Global_25, 4);
				unk_0xD2A9C3F486236CC5(&Global_25, 6);
				unk_0xD92C8D8AF3C67820(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x16DC46A28107A94A())
				{
					uVar0 = unk_0x3A75EA627A024B7A(866);
					unk_0xD2A9C3F486236CC5(&uVar0, 0);
					unk_0x167AC4B8CEEB1F11(uVar0);
				}
				return 1;
			}
		}
	}
	if (Global_143070 == 2)
	{
		return 1;
	}
	else if (Global_143070 == 3)
	{
		return 0;
	}
	if (unk_0x16DC46A28107A94A())
	{
		if (unk_0xB03A1684359C50A1(unk_0x3A75EA627A024B7A(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_309(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	int iVar1;
	
	if (func_317())
	{
		return 0;
	}
	uVar0 = func_313(iParam0, iParam1, iParam2);
	iVar1 = func_311(iParam0, iParam1);
	return unk_0xB03A1684359C50A1(uVar0, func_310(iVar1));
}

int func_310(int iParam0)
{
	return (iParam0 % 32);
}

int func_311(int iParam0, int iParam1)
{
	return func_312(iParam0, iParam1);
}

int func_312(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("weapon_pistol"):
			switch (iParam0)
			{
				case joaat("component_pistol_clip_01"):
					return 1;
					break;
				
				case joaat("component_pistol_clip_02"):
					return 2;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 3;
					break;
				
				case joaat("component_at_pi_supp_02"):
					return 4;
					break;
				
				case joaat("component_pistol_varmod_luxe"):
					return 175;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 211;
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam0)
			{
				case joaat("component_combatpistol_clip_01"):
					return 5;
					break;
				
				case joaat("component_combatpistol_clip_02"):
					return 6;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 7;
					break;
				
				case joaat("component_at_pi_supp"):
					return 8;
					break;
				
				case joaat("component_combatpistol_varmod_lowrider"):
					return 186;
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam0)
			{
				case joaat("component_appistol_clip_01"):
					return 11;
					break;
				
				case joaat("component_appistol_clip_02"):
					return 12;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 13;
					break;
				
				case joaat("component_at_pi_supp"):
					return 14;
					break;
				
				case joaat("component_appistol_varmod_luxe"):
					return 164;
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam0)
			{
				case joaat("component_microsmg_clip_01"):
					return 15;
					break;
				
				case joaat("component_microsmg_clip_02"):
					return 16;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 17;
					break;
				
				case joaat("component_at_scope_macro"):
					return 18;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 19;
					break;
				
				case joaat("component_microsmg_varmod_luxe"):
					return 174;
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam0)
			{
				case joaat("component_smg_clip_01"):
					return 22;
					break;
				
				case joaat("component_smg_clip_02"):
					return 23;
					break;
				
				case joaat("component_smg_clip_03"):
					return 207;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 24;
					break;
				
				case joaat("component_at_scope_macro_02"):
					return 25;
					break;
				
				case joaat("component_at_pi_supp"):
					return 26;
					break;
				
				case joaat("component_smg_varmod_luxe"):
					return 179;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 212;
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam0)
			{
				case joaat("component_assaultrifle_clip_01"):
					return 27;
					break;
				
				case joaat("component_assaultrifle_clip_02"):
					return 28;
					break;
				
				case joaat("component_assaultrifle_clip_03"):
					return 201;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 29;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 30;
					break;
				
				case joaat("component_at_scope_macro"):
					return 31;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 32;
					break;
				
				case joaat("component_assaultrifle_varmod_luxe"):
					return 165;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 213;
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam0)
			{
				case joaat("component_carbinerifle_clip_01"):
					return 33;
					break;
				
				case joaat("component_carbinerifle_clip_02"):
					return 34;
					break;
				
				case joaat("component_carbinerifle_clip_03"):
					return 202;
					break;
				
				case joaat("component_at_railcover_01"):
					return 35;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 36;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 37;
					break;
				
				case joaat("component_at_scope_medium"):
					return 38;
					break;
				
				case joaat("component_at_ar_supp"):
					return 39;
					break;
				
				case joaat("component_carbinerifle_varmod_luxe"):
					return 168;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 214;
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam0)
			{
				case joaat("component_advancedrifle_clip_01"):
					return 44;
					break;
				
				case joaat("component_advancedrifle_clip_02"):
					return 45;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 47;
					break;
				
				case joaat("component_at_scope_small"):
					return 48;
					break;
				
				case joaat("component_at_ar_supp"):
					return 49;
					break;
				
				case joaat("component_advancedrifle_varmod_luxe"):
					return 163;
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam0)
			{
				case joaat("component_mg_clip_01"):
					return 50;
					break;
				
				case joaat("component_mg_clip_02"):
					return 51;
					break;
				
				case joaat("component_at_scope_small_02"):
					return 52;
					break;
				
				case joaat("component_mg_varmod_lowrider"):
					return 187;
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam0)
			{
				case joaat("component_combatmg_clip_01"):
					return 53;
					break;
				
				case joaat("component_combatmg_clip_02"):
					return 54;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 55;
					break;
				
				case joaat("component_at_scope_medium"):
					return 56;
					break;
				
				case joaat("component_combatmg_varmod_lowrider"):
					return 188;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 215;
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam0)
			{
				case joaat("component_at_sr_supp"):
					return 59;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 60;
					break;
				
				case joaat("component_pumpshotgun_varmod_lowrider"):
					return 193;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 389;
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam0)
			{
				case joaat("component_assaultshotgun_clip_01"):
					return 64;
					break;
				
				case joaat("component_assaultshotgun_clip_02"):
					return 65;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 66;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 67;
					break;
				
				case joaat("component_at_ar_supp"):
					return 68;
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam0)
			{
				case joaat("component_sniperrifle_clip_01"):
					return 69;
					break;
				
				case joaat("component_at_scope_large"):
					return 70;
					break;
				
				case joaat("component_at_scope_max"):
					return 71;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 72;
					break;
				
				case joaat("component_sniperrifle_varmod_luxe"):
					return 180;
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam0)
			{
				case joaat("component_heavysniper_clip_01"):
					return 76;
					break;
				
				case joaat("component_at_scope_max"):
					return 77;
					break;
				
				case joaat("component_at_scope_large"):
					return 82;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 216;
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam0)
			{
				case joaat("component_at_ar_afgrip"):
					return 78;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 79;
					break;
				
				case joaat("component_at_scope_small"):
					return 80;
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam0)
			{
				case joaat("component_minigun_clip_01"):
					return 81;
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam0)
			{
				case joaat("component_assaultsmg_clip_01"):
					return 83;
					break;
				
				case joaat("component_assaultsmg_clip_02"):
					return 84;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 85;
					break;
				
				case joaat("component_at_scope_macro"):
					return 86;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 87;
					break;
				
				case joaat("component_assaultsmg_varmod_lowrider"):
					return 189;
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam0)
			{
				case joaat("component_at_ar_afgrip"):
					return 88;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 89;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 90;
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam0)
			{
				case joaat("component_pistol50_clip_01"):
					return 91;
					break;
				
				case joaat("component_pistol50_clip_02"):
					return 92;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 93;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 94;
					break;
				
				case joaat("component_pistol50_varmod_luxe"):
					return 176;
					break;
			}
			break;
		
		case 392730790:
			switch (iParam0)
			{
				case 195735895:
					return 95;
					break;
				
				case joaat("component_at_scope_large"):
					return 96;
					break;
				
				case joaat("component_at_scope_max"):
					return 97;
					break;
				
				case joaat("component_at_ar_supp"):
					return 98;
					break;
			}
			break;
		
		case joaat("weapon_heavyrifle"):
			switch (iParam0)
			{
				case joaat("component_heavyrifle_clip_01"):
					return 99;
					break;
				
				case joaat("component_heavyrifle_clip_02"):
					return 100;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 101;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 102;
					break;
				
				case joaat("component_at_scope_medium"):
					return 103;
					break;
				
				case joaat("component_at_ar_supp"):
					return 104;
					break;
			}
			break;
		
		case -572349828:
			switch (iParam0)
			{
				case -890514874:
					return 105;
					break;
				
				case -507117574:
					return 106;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 107;
					break;
				
				case joaat("component_at_scope_medium"):
					return 108;
					break;
			}
			break;
		
		case -1887867191:
			switch (iParam0)
			{
				case -124428919:
					return 109;
					break;
				
				case 1048471894:
					return 110;
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam0)
			{
				case joaat("component_specialcarbine_clip_01"):
					return 111;
					break;
				
				case joaat("component_specialcarbine_clip_02"):
					return 112;
					break;
				
				case joaat("component_specialcarbine_clip_03"):
					return 208;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 113;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 114;
					break;
				
				case joaat("component_at_scope_medium"):
					return 115;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 116;
					break;
				
				case joaat("component_specialcarbine_varmod_lowrider"):
					return 190;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 390;
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam0)
			{
				case joaat("component_snspistol_clip_01"):
					return 117;
					break;
				
				case joaat("component_snspistol_clip_02"):
					return 118;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 119;
					break;
				
				case joaat("component_at_pi_supp"):
					return 120;
					break;
				
				case joaat("component_snspistol_varmod_lowrider"):
					return 191;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 391;
					break;
			}
			break;
		
		case joaat("weapon_heavypistol"):
			switch (iParam0)
			{
				case joaat("component_heavypistol_clip_01"):
					return 121;
					break;
				
				case joaat("component_heavypistol_clip_02"):
					return 122;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 123;
					break;
				
				case joaat("component_at_pi_supp"):
					return 124;
					break;
				
				case joaat("component_heavypistol_varmod_luxe"):
					return 171;
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam0)
			{
				case joaat("component_bullpuprifle_clip_01"):
					return 131;
					break;
				
				case joaat("component_bullpuprifle_clip_02"):
					return 132;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 127;
					break;
				
				case joaat("component_at_ar_supp"):
					return 128;
					break;
				
				case joaat("component_at_scope_small"):
					return 129;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 130;
					break;
				
				case joaat("component_bullpuprifle_varmod_low"):
					return 192;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 394;
					break;
			}
			break;
		
		case joaat("weapon_gusenberg"):
			switch (iParam0)
			{
				case joaat("component_gusenberg_clip_01"):
					return 125;
					break;
				
				case joaat("component_gusenberg_clip_02"):
					return 126;
					break;
			}
			break;
		
		case joaat("weapon_vintagepistol"):
			switch (iParam0)
			{
				case joaat("component_vintagepistol_clip_01"):
					return 133;
					break;
				
				case joaat("component_vintagepistol_clip_02"):
					return 134;
					break;
				
				case joaat("component_at_pi_supp"):
					return 136;
					break;
			}
			break;
		
		case joaat("weapon_heavyshotgun"):
			switch (iParam0)
			{
				case joaat("component_heavyshotgun_clip_01"):
					return 137;
					break;
				
				case joaat("component_heavyshotgun_clip_02"):
					return 140;
					break;
				
				case joaat("component_heavyshotgun_clip_03"):
					return 205;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 145;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 146;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 147;
					break;
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			switch (iParam0)
			{
				case joaat("component_marksmanrifle_clip_01"):
					return 138;
					break;
				
				case joaat("component_marksmanrifle_clip_02"):
					return 139;
					break;
				
				case joaat("component_at_scope_large_fixed_zoom"):
					return 141;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 142;
					break;
				
				case joaat("component_at_ar_supp"):
					return 143;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 144;
					break;
				
				case joaat("component_marksmanrifle_varmod_luxe"):
					return 172;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 392;
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam0)
			{
				case joaat("component_combatpdw_clip_01"):
					return 149;
					break;
				
				case joaat("component_combatpdw_clip_02"):
					return 150;
					break;
				
				case joaat("component_combatpdw_clip_03"):
					return 203;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 151;
					break;
				
				case joaat("component_at_scope_small"):
					return 152;
					break;
				
				case joaat("component_at_ar_afgrip"):
					return 153;
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam0)
			{
				case joaat("component_sawnoffshotgun_varmod_luxe"):
					return 178;
					break;
			}
			break;
		
		case joaat("weapon_marksmanpistol"):
			switch (iParam0)
			{
				case joaat("component_marksmanpistol_clip_01"):
					return 148;
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam0)
			{
				case joaat("component_knuckle_varmod_pimp"):
					return 154;
					break;
				
				case joaat("component_knuckle_varmod_ballas"):
					return 155;
					break;
				
				case joaat("component_knuckle_varmod_dollar"):
					return 156;
					break;
				
				case joaat("component_knuckle_varmod_diamond"):
					return 157;
					break;
				
				case joaat("component_knuckle_varmod_hate"):
					return 158;
					break;
				
				case joaat("component_knuckle_varmod_love"):
					return 159;
					break;
				
				case joaat("component_knuckle_varmod_player"):
					return 160;
					break;
				
				case joaat("component_knuckle_varmod_king"):
					return 161;
					break;
				
				case joaat("component_knuckle_varmod_vagos"):
					return 162;
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam0)
			{
				case joaat("component_machinepistol_clip_01"):
					return 184;
					break;
				
				case joaat("component_machinepistol_clip_02"):
					return 185;
					break;
				
				case joaat("component_machinepistol_clip_03"):
					return 206;
					break;
				
				case joaat("component_at_pi_supp"):
					return 183;
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam0)
			{
				case joaat("component_switchblade_varmod_var1"):
					return 194;
					break;
				
				case joaat("component_switchblade_varmod_var2"):
					return 195;
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam0)
			{
				case joaat("component_revolver_clip_01"):
					return 196;
					break;
				
				case joaat("component_revolver_varmod_boss"):
					return 197;
					break;
				
				case joaat("component_revolver_varmod_goon"):
					return 198;
					break;
				
				case joaat("component_gunrun_mk2_upgrade"):
					return 393;
					break;
			}
			break;
		
		case joaat("weapon_compactrifle"):
			switch (iParam0)
			{
				case joaat("component_compactrifle_clip_01"):
					return 199;
					break;
				
				case joaat("component_compactrifle_clip_02"):
					return 200;
					break;
				
				case joaat("component_compactrifle_clip_03"):
					return 204;
					break;
			}
			break;
		
		case joaat("weapon_minismg"):
			switch (iParam0)
			{
				case joaat("component_minismg_clip_01"):
					return 209;
					break;
				
				case joaat("component_minismg_clip_02"):
					return 210;
					break;
			}
			break;
		
		case joaat("weapon_pistol_mk2"):
			switch (iParam0)
			{
				case joaat("component_pistol_mk2_clip_01"):
					return 217;
					break;
				
				case joaat("component_pistol_mk2_clip_02"):
					return 218;
					break;
				
				case joaat("component_pistol_mk2_clip_fmj"):
					return 219;
					break;
				
				case joaat("component_pistol_mk2_clip_hollowpoint"):
					return 220;
					break;
				
				case joaat("component_pistol_mk2_clip_incendiary"):
					return 221;
					break;
				
				case joaat("component_pistol_mk2_clip_tracer"):
					return 222;
					break;
				
				case joaat("component_at_pi_flsh_02"):
					return 223;
					break;
				
				case joaat("component_at_pi_rail"):
					return 224;
					break;
				
				case joaat("component_at_pi_supp_02"):
					return 225;
					break;
				
				case joaat("component_at_pi_comp"):
					return 226;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO"):
					return 367;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_02"):
					return 368;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_03"):
					return 369;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_04"):
					return 370;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_05"):
					return 371;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_06"):
					return 372;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_07"):
					return 373;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_08"):
					return 374;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_09"):
					return 375;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_10"):
					return 376;
					break;
				
				case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"):
					return 377;
					break;
			}
			break;
		
		case joaat("weapon_smg_mk2"):
			switch (iParam0)
			{
				case joaat("component_smg_mk2_clip_01"):
					return 227;
					break;
				
				case joaat("component_smg_mk2_clip_02"):
					return 228;
					break;
				
				case joaat("component_smg_mk2_clip_fmj"):
					return 229;
					break;
				
				case joaat("component_smg_mk2_clip_hollowpoint"):
					return 230;
					break;
				
				case joaat("component_smg_mk2_clip_incendiary"):
					return 231;
					break;
				
				case joaat("component_smg_mk2_clip_tracer"):
					return 232;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 233;
					break;
				
				case joaat("component_at_sights_smg"):
					return 234;
					break;
				
				case joaat("component_at_scope_macro_02_smg_mk2"):
					return 235;
					break;
				
				case joaat("component_at_scope_small_smg_mk2"):
					return 236;
					break;
				
				case joaat("component_at_pi_supp"):
					return 237;
					break;
				
				case joaat("component_at_muzzle_01"):
					return 238;
					break;
				
				case joaat("component_at_muzzle_02"):
					return 239;
					break;
				
				case joaat("component_at_muzzle_03"):
					return 240;
					break;
				
				case joaat("component_at_muzzle_04"):
					return 241;
					break;
				
				case joaat("component_at_muzzle_05"):
					return 242;
					break;
				
				case joaat("component_at_muzzle_06"):
					return 243;
					break;
				
				case joaat("component_at_muzzle_07"):
					return 244;
					break;
				
				case joaat("component_at_sb_barrel_01"):
					return 245;
					break;
				
				case joaat("component_at_sb_barrel_02"):
					return 246;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO"):
					return 378;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_02"):
					return 379;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_03"):
					return 380;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_04"):
					return 381;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_05"):
					return 382;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_06"):
					return 383;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_07"):
					return 384;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_08"):
					return 385;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_09"):
					return 386;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_10"):
					return 387;
					break;
				
				case joaat("COMPONENT_SMG_MK2_CAMO_IND_01"):
					return 388;
					break;
			}
			break;
		
		case joaat("weapon_heavysniper_mk2"):
			switch (iParam0)
			{
				case joaat("component_heavysniper_mk2_clip_01"):
					return 247;
					break;
				
				case joaat("component_heavysniper_mk2_clip_02"):
					return 248;
					break;
				
				case joaat("component_heavysniper_mk2_clip_armorpiercing"):
					return 249;
					break;
				
				case joaat("component_heavysniper_mk2_clip_explosive"):
					return 250;
					break;
				
				case joaat("component_heavysniper_mk2_clip_fmj"):
					return 251;
					break;
				
				case joaat("component_heavysniper_mk2_clip_incendiary"):
					return 252;
					break;
				
				case joaat("component_at_scope_large_mk2"):
					return 253;
					break;
				
				case joaat("component_at_scope_max"):
					return 254;
					break;
				
				case joaat("component_at_scope_nv"):
					return 255;
					break;
				
				case joaat("component_at_scope_thermal"):
					return 256;
					break;
				
				case joaat("component_at_sr_supp_03"):
					return 257;
					break;
				
				case joaat("component_at_muzzle_08"):
					return 258;
					break;
				
				case joaat("component_at_muzzle_09"):
					return 259;
					break;
				
				case joaat("component_at_sr_barrel_01"):
					return 260;
					break;
				
				case joaat("component_at_sr_barrel_02"):
					return 261;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO"):
					return 356;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_02"):
					return 357;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_03"):
					return 358;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_04"):
					return 359;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_05"):
					return 360;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_06"):
					return 361;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_07"):
					return 362;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_08"):
					return 363;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_09"):
					return 364;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_10"):
					return 365;
					break;
				
				case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_IND_01"):
					return 366;
					break;
			}
			break;
		
		case joaat("weapon_combatmg_mk2"):
			switch (iParam0)
			{
				case joaat("component_combatmg_mk2_clip_01"):
					return 262;
					break;
				
				case joaat("component_combatmg_mk2_clip_02"):
					return 263;
					break;
				
				case joaat("component_combatmg_mk2_clip_armorpiercing"):
					return 264;
					break;
				
				case joaat("component_combatmg_mk2_clip_fmj"):
					return 265;
					break;
				
				case joaat("component_combatmg_mk2_clip_incendiary"):
					return 266;
					break;
				
				case joaat("component_combatmg_mk2_clip_tracer"):
					return 267;
					break;
				
				case joaat("component_at_ar_afgrip_02"):
					return 268;
					break;
				
				case joaat("component_at_sights"):
					return 269;
					break;
				
				case joaat("component_at_scope_small_mk2"):
					return 270;
					break;
				
				case joaat("component_at_scope_medium_mk2"):
					return 271;
					break;
				
				case joaat("component_at_muzzle_01"):
					return 272;
					break;
				
				case joaat("component_at_muzzle_02"):
					return 273;
					break;
				
				case joaat("component_at_muzzle_03"):
					return 274;
					break;
				
				case joaat("component_at_muzzle_04"):
					return 275;
					break;
				
				case joaat("component_at_muzzle_05"):
					return 276;
					break;
				
				case joaat("component_at_muzzle_06"):
					return 277;
					break;
				
				case joaat("component_at_muzzle_07"):
					return 278;
					break;
				
				case joaat("component_at_mg_barrel_01"):
					return 279;
					break;
				
				case joaat("component_at_mg_barrel_02"):
					return 280;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO"):
					return 345;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_02"):
					return 346;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_03"):
					return 347;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_04"):
					return 348;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_05"):
					return 349;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_06"):
					return 350;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_07"):
					return 351;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_08"):
					return 352;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_09"):
					return 353;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_10"):
					return 354;
					break;
				
				case joaat("COMPONENT_COMBATMG_MK2_CAMO_IND_01"):
					return 355;
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle_mk2"):
			switch (iParam0)
			{
				case joaat("component_assaultrifle_mk2_clip_01"):
					return 281;
					break;
				
				case joaat("component_assaultrifle_mk2_clip_02"):
					return 282;
					break;
				
				case joaat("component_assaultrifle_mk2_clip_armorpiercing"):
					return 283;
					break;
				
				case joaat("component_assaultrifle_mk2_clip_fmj"):
					return 284;
					break;
				
				case joaat("component_assaultrifle_mk2_clip_incendiary"):
					return 285;
					break;
				
				case joaat("component_assaultrifle_mk2_clip_tracer"):
					return 286;
					break;
				
				case joaat("component_at_ar_afgrip_02"):
					return 287;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 288;
					break;
				
				case joaat("component_at_sights"):
					return 289;
					break;
				
				case joaat("component_at_scope_macro_mk2"):
					return 290;
					break;
				
				case joaat("component_at_scope_medium_mk2"):
					return 291;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 292;
					break;
				
				case joaat("component_at_muzzle_01"):
					return 293;
					break;
				
				case joaat("component_at_muzzle_02"):
					return 294;
					break;
				
				case joaat("component_at_muzzle_03"):
					return 295;
					break;
				
				case joaat("component_at_muzzle_04"):
					return 296;
					break;
				
				case joaat("component_at_muzzle_05"):
					return 297;
					break;
				
				case joaat("component_at_muzzle_06"):
					return 298;
					break;
				
				case joaat("component_at_muzzle_07"):
					return 299;
					break;
				
				case joaat("component_at_ar_barrel_01"):
					return 300;
					break;
				
				case joaat("component_at_ar_barrel_02"):
					return 301;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO"):
					return 323;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_02"):
					return 324;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_03"):
					return 325;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_04"):
					return 326;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_05"):
					return 327;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_06"):
					return 328;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_07"):
					return 329;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_08"):
					return 330;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_09"):
					return 331;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_10"):
					return 332;
					break;
				
				case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_IND_01"):
					return 333;
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle_mk2"):
			switch (iParam0)
			{
				case joaat("component_carbinerifle_mk2_clip_01"):
					return 302;
					break;
				
				case joaat("component_carbinerifle_mk2_clip_02"):
					return 303;
					break;
				
				case joaat("component_carbinerifle_mk2_clip_armorpiercing"):
					return 304;
					break;
				
				case joaat("component_carbinerifle_mk2_clip_fmj"):
					return 305;
					break;
				
				case joaat("component_carbinerifle_mk2_clip_incendiary"):
					return 306;
					break;
				
				case joaat("component_carbinerifle_mk2_clip_tracer"):
					return 307;
					break;
				
				case joaat("component_at_ar_afgrip_02"):
					return 308;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 309;
					break;
				
				case joaat("component_at_sights"):
					return 310;
					break;
				
				case joaat("component_at_scope_macro_mk2"):
					return 311;
					break;
				
				case joaat("component_at_scope_medium_mk2"):
					return 312;
					break;
				
				case joaat("component_at_ar_supp"):
					return 313;
					break;
				
				case joaat("component_at_muzzle_01"):
					return 314;
					break;
				
				case joaat("component_at_muzzle_02"):
					return 315;
					break;
				
				case joaat("component_at_muzzle_03"):
					return 316;
					break;
				
				case joaat("component_at_muzzle_04"):
					return 317;
					break;
				
				case joaat("component_at_muzzle_05"):
					return 318;
					break;
				
				case joaat("component_at_muzzle_06"):
					return 319;
					break;
				
				case joaat("component_at_muzzle_07"):
					return 320;
					break;
				
				case joaat("component_at_cr_barrel_01"):
					return 321;
					break;
				
				case joaat("component_at_cr_barrel_02"):
					return 322;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO"):
					return 334;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_02"):
					return 335;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_03"):
					return 336;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_04"):
					return 337;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_05"):
					return 338;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_06"):
					return 339;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_07"):
					return 340;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_08"):
					return 341;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_09"):
					return 342;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_10"):
					return 343;
					break;
				
				case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_IND_01"):
					return 344;
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun_mk2"):
			switch (iParam0)
			{
				case joaat("component_pumpshotgun_mk2_clip_01"):
					return 395;
					break;
				
				case joaat("component_pumpshotgun_mk2_clip_armorpiercing"):
					return 396;
					break;
				
				case joaat("component_pumpshotgun_mk2_clip_explosive"):
					return 397;
					break;
				
				case joaat("component_pumpshotgun_mk2_clip_hollowpoint"):
					return 398;
					break;
				
				case joaat("component_pumpshotgun_mk2_clip_incendiary"):
					return 399;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 400;
					break;
				
				case joaat("component_at_sights"):
					return 401;
					break;
				
				case joaat("component_at_scope_macro_mk2"):
					return 402;
					break;
				
				case joaat("component_at_scope_small_mk2"):
					return 403;
					break;
				
				case joaat("component_at_sr_supp_03"):
					return 404;
					break;
				
				case joaat("component_at_muzzle_08"):
					return 405;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO"):
					return 488;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_02"):
					return 489;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_03"):
					return 490;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_04"):
					return 491;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_05"):
					return 492;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_06"):
					return 493;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_07"):
					return 494;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_08"):
					return 495;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_09"):
					return 496;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_10"):
					return 497;
					break;
				
				case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_IND_01"):
					return 498;
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine_mk2"):
			switch (iParam0)
			{
				case joaat("component_specialcarbine_mk2_clip_01"):
					return 406;
					break;
				
				case joaat("component_specialcarbine_mk2_clip_02"):
					return 407;
					break;
				
				case joaat("component_specialcarbine_mk2_clip_armorpiercing"):
					return 408;
					break;
				
				case joaat("component_specialcarbine_mk2_clip_fmj"):
					return 409;
					break;
				
				case joaat("component_specialcarbine_mk2_clip_incendiary"):
					return 410;
					break;
				
				case joaat("component_specialcarbine_mk2_clip_tracer"):
					return 411;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 412;
					break;
				
				case joaat("component_at_sights"):
					return 413;
					break;
				
				case joaat("component_at_scope_macro_mk2"):
					return 414;
					break;
				
				case joaat("component_at_scope_medium_mk2"):
					return 415;
					break;
				
				case joaat("component_at_ar_supp_02"):
					return 416;
					break;
				
				case joaat("component_at_muzzle_01"):
					return 417;
					break;
				
				case joaat("component_at_muzzle_02"):
					return 418;
					break;
				
				case joaat("component_at_muzzle_03"):
					return 419;
					break;
				
				case joaat("component_at_muzzle_04"):
					return 420;
					break;
				
				case joaat("component_at_muzzle_05"):
					return 421;
					break;
				
				case joaat("component_at_muzzle_06"):
					return 422;
					break;
				
				case joaat("component_at_muzzle_07"):
					return 423;
					break;
				
				case joaat("component_at_ar_afgrip_02"):
					return 424;
					break;
				
				case joaat("component_at_sc_barrel_01"):
					return 425;
					break;
				
				case joaat("component_at_sc_barrel_02"):
					return 426;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO"):
					return 532;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_02"):
					return 533;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_03"):
					return 534;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_04"):
					return 535;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_05"):
					return 536;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_06"):
					return 537;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_07"):
					return 538;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_08"):
					return 539;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_09"):
					return 540;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_10"):
					return 541;
					break;
				
				case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_IND_01"):
					return 542;
					break;
			}
			break;
		
		case joaat("weapon_snspistol_mk2"):
			switch (iParam0)
			{
				case joaat("component_snspistol_mk2_clip_01"):
					return 427;
					break;
				
				case joaat("component_snspistol_mk2_clip_02"):
					return 428;
					break;
				
				case joaat("component_snspistol_mk2_clip_fmj"):
					return 429;
					break;
				
				case joaat("component_snspistol_mk2_clip_hollowpoint"):
					return 430;
					break;
				
				case joaat("component_snspistol_mk2_clip_incendiary"):
					return 431;
					break;
				
				case joaat("component_snspistol_mk2_clip_tracer"):
					return 432;
					break;
				
				case joaat("component_at_pi_flsh_03"):
					return 433;
					break;
				
				case joaat("component_at_pi_rail_02"):
					return 434;
					break;
				
				case joaat("component_at_pi_supp_02"):
					return 435;
					break;
				
				case joaat("component_at_pi_comp_02"):
					return 436;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO"):
					return 510;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02"):
					return 511;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03"):
					return 512;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04"):
					return 513;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05"):
					return 514;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06"):
					return 515;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07"):
					return 516;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08"):
					return 517;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09"):
					return 518;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10"):
					return 519;
					break;
				
				case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
					return 520;
					break;
			}
			break;
		
		case joaat("weapon_marksmanrifle_mk2"):
			switch (iParam0)
			{
				case joaat("component_marksmanrifle_mk2_clip_01"):
					return 437;
					break;
				
				case joaat("component_marksmanrifle_mk2_clip_02"):
					return 438;
					break;
				
				case joaat("component_marksmanrifle_mk2_clip_armorpiercing"):
					return 439;
					break;
				
				case joaat("component_marksmanrifle_mk2_clip_fmj"):
					return 440;
					break;
				
				case joaat("component_marksmanrifle_mk2_clip_incendiary"):
					return 441;
					break;
				
				case joaat("component_marksmanrifle_mk2_clip_tracer"):
					return 442;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 443;
					break;
				
				case joaat("component_at_sights"):
					return 444;
					break;
				
				case joaat("component_at_scope_medium_mk2"):
					return 445;
					break;
				
				case joaat("component_at_scope_large_fixed_zoom_mk2"):
					return 446;
					break;
				
				case joaat("component_at_ar_supp"):
					return 447;
					break;
				
				case joaat("component_at_muzzle_01"):
					return 448;
					break;
				
				case joaat("component_at_muzzle_02"):
					return 449;
					break;
				
				case joaat("component_at_muzzle_03"):
					return 450;
					break;
				
				case joaat("component_at_muzzle_04"):
					return 451;
					break;
				
				case joaat("component_at_muzzle_05"):
					return 452;
					break;
				
				case joaat("component_at_muzzle_06"):
					return 453;
					break;
				
				case joaat("component_at_muzzle_07"):
					return 454;
					break;
				
				case joaat("component_at_ar_afgrip_02"):
					return 455;
					break;
				
				case joaat("component_at_mrfl_barrel_01"):
					return 456;
					break;
				
				case joaat("component_at_mrfl_barrel_02"):
					return 457;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO"):
					return 521;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_02"):
					return 522;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_03"):
					return 523;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_04"):
					return 524;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_05"):
					return 525;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_06"):
					return 526;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_07"):
					return 527;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_08"):
					return 528;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_09"):
					return 529;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_10"):
					return 530;
					break;
				
				case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"):
					return 531;
					break;
			}
			break;
		
		case joaat("weapon_revolver_mk2"):
			switch (iParam0)
			{
				case joaat("component_revolver_mk2_clip_01"):
					return 458;
					break;
				
				case joaat("component_revolver_mk2_clip_fmj"):
					return 459;
					break;
				
				case joaat("component_revolver_mk2_clip_hollowpoint"):
					return 460;
					break;
				
				case joaat("component_revolver_mk2_clip_incendiary"):
					return 461;
					break;
				
				case joaat("component_revolver_mk2_clip_tracer"):
					return 462;
					break;
				
				case joaat("component_at_sights"):
					return 463;
					break;
				
				case joaat("component_at_scope_macro_mk2"):
					return 464;
					break;
				
				case joaat("component_at_pi_flsh"):
					return 465;
					break;
				
				case joaat("component_at_pi_comp_03"):
					return 466;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO"):
					return 499;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_02"):
					return 500;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_03"):
					return 501;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_04"):
					return 502;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_05"):
					return 503;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_06"):
					return 504;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_07"):
					return 505;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_08"):
					return 506;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_09"):
					return 507;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_10"):
					return 508;
					break;
				
				case joaat("COMPONENT_REVOLVER_MK2_CAMO_IND_01"):
					return 509;
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle_mk2"):
			switch (iParam0)
			{
				case joaat("component_bullpuprifle_mk2_clip_01"):
					return 467;
					break;
				
				case joaat("component_bullpuprifle_mk2_clip_02"):
					return 468;
					break;
				
				case joaat("component_bullpuprifle_mk2_clip_armorpiercing"):
					return 469;
					break;
				
				case joaat("component_bullpuprifle_mk2_clip_fmj"):
					return 470;
					break;
				
				case joaat("component_bullpuprifle_mk2_clip_incendiary"):
					return 471;
					break;
				
				case joaat("component_bullpuprifle_mk2_clip_tracer"):
					return 472;
					break;
				
				case joaat("component_at_ar_flsh"):
					return 473;
					break;
				
				case joaat("component_at_sights"):
					return 474;
					break;
				
				case joaat("component_at_scope_macro_02_mk2"):
					return 475;
					break;
				
				case joaat("component_at_scope_small_mk2"):
					return 476;
					break;
				
				case joaat("component_at_bp_barrel_01"):
					return 477;
					break;
				
				case joaat("component_at_bp_barrel_02"):
					return 478;
					break;
				
				case joaat("component_at_ar_supp"):
					return 479;
					break;
				
				case joaat("component_at_muzzle_01"):
					return 480;
					break;
				
				case joaat("component_at_muzzle_02"):
					return 481;
					break;
				
				case joaat("component_at_muzzle_03"):
					return 482;
					break;
				
				case joaat("component_at_muzzle_04"):
					return 483;
					break;
				
				case joaat("component_at_muzzle_05"):
					return 484;
					break;
				
				case joaat("component_at_muzzle_06"):
					return 485;
					break;
				
				case joaat("component_at_muzzle_07"):
					return 486;
					break;
				
				case joaat("component_at_ar_afgrip_02"):
					return 487;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO"):
					return 543;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_02"):
					return 544;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_03"):
					return 545;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_04"):
					return 546;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_05"):
					return 547;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_06"):
					return 548;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_07"):
					return 549;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_08"):
					return 550;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_09"):
					return 551;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_10"):
					return 552;
					break;
				
				case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_IND_01"):
					return 553;
					break;
			}
			break;
	}
	return 0;
}

var func_313(int iParam0, int iParam1, var uParam2)
{
	var uVar0;
	
	uVar0 = func_50(func_314(iParam0, iParam1), uParam2, 0);
	return uVar0;
}

int func_314(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_311(iParam0, iParam1);
	iVar1 = func_316(iVar0);
	if ((func_75() == 0 || func_315() == 0) || (func_75() == 999 && func_315() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 684;
				break;
			
			case 1:
				return 685;
				break;
			
			case 2:
				return 686;
				break;
			
			case 3:
				return 687;
				break;
			
			case 4:
				return 1750;
				break;
			
			case 5:
				return 2424;
				break;
			
			case 6:
				return 2816;
				break;
			
			case 7:
				return 5484;
				break;
			
			case 8:
				return 5488;
				break;
			
			case 9:
				return 5492;
				break;
			
			case 10:
				return 5605;
				break;
			
			case 11:
				return 5609;
				break;
			
			case 12:
				return 5613;
				break;
			
			case 13:
				return 5617;
				break;
			
			case 14:
				return 6356;
				break;
			
			case 15:
				return 6479;
				break;
			
			case 16:
				return 6499;
				break;
			
			case 17:
				return 6505;
				break;
			}
	}
	return 1750;
}

int func_315()
{
	return Global_25234;
}

int func_316(int iParam0)
{
	return (iParam0 / 32);
}

bool func_317()
{
	return Global_1312833;
}

int func_318(int iParam0)
{
	if (iParam0 != -1)
	{
		if (iParam0 == 46)
		{
			return 1;
		}
		if (iParam0 == 47)
		{
			return 1;
		}
	}
	return 0;
}

void func_319(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	*uParam0 = iParam1;
	uParam0->f_4 = iParam2;
	uParam0->f_6 = iParam3;
	uParam0->f_1 = iParam4;
}

int func_320(var uParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar7;
	
	func_319(&Var0, *uParam0, uParam0->f_4, uParam0->f_6, uParam0->f_1);
	while (func_268(&Var0, iParam1, iVar7, 0))
	{
		if (Var0.f_4 == iParam2)
		{
			return 1;
		}
		iVar7++;
	}
	return 0;
}

float func_321(float fParam0)
{
	return (fParam0 * 57.29578f);
}

int func_322(var uParam0)
{
	if (!unk_0x31F12808DC47A9E5(*uParam0))
	{
		return 0;
	}
	unk_0xDC633118188196B0(*uParam0, 1);
	return 1;
}

int func_323(var uParam0, int iParam1, struct<3> Param2, float fParam5)
{
	if (unk_0x31F12808DC47A9E5(*uParam0))
	{
		unk_0xBECECD970F645217(uParam0);
		*uParam0 = 0;
	}
	*uParam0 = unk_0x3064CCF56C6C32BC(iParam1, Param2, fParam5, 1, 1, 0);
	if (!unk_0x31F12808DC47A9E5(*uParam0))
	{
		return 0;
	}
	return 1;
}

int func_324(var uParam0)
{
	if (!unk_0x31F12808DC47A9E5(*uParam0))
	{
		return 0;
	}
	unk_0xD592E5486B0119A2(*uParam0, 0);
	unk_0x97236214E312A8E7(*uParam0, "RAMP:SCENE PED");
	unk_0x44EB7E24C5D75087(*uParam0, 0);
	unk_0x40E2910BAF39B1C7(*uParam0, 1);
	return 1;
}

int func_325(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6)
{
	if (unk_0x31F12808DC47A9E5(*uParam0))
	{
		unk_0x63C116C2153FAA3C(uParam0);
		*uParam0 = 0;
	}
	*uParam0 = unk_0x364B87C5C64BD100(26, iParam1, Param2, fParam5, 1, 1);
	if (!unk_0x31F12808DC47A9E5(*uParam0))
	{
		return 0;
	}
	if (bParam6)
	{
		func_326(*uParam0, Param2);
		unk_0xB88121FF8A34A66F(*uParam0, fParam5);
	}
	unk_0xD592E5486B0119A2(*uParam0, 0);
	unk_0x97236214E312A8E7(*uParam0, "RAMP:SCENE PED");
	unk_0x44EB7E24C5D75087(*uParam0, 0);
	unk_0x40E2910BAF39B1C7(*uParam0, 1);
	return 1;
}

Vector3 func_326(var uParam0, struct<3> Param1)
{
	var uVar0;
	
	Param1.f_2 = (Param1.f_2 + 0.15f);
	if (unk_0xB5E0B10B5D88A8F5(Param1, &uVar0, 0, 0))
	{
		Param1.f_2 = uVar0;
	}
	if (func_219(uParam0))
	{
		unk_0x990FFD4FB6ADD630(uParam0, Param1, 1, 0, 0, 1);
	}
	return Param1;
}

int func_327()
{
	return unk_0x1701E0E6A11D6B65(-177.0628f, -1679.715f, 33.16263f, -157.0628f, -1659.715f, 37.16263f, 0, 1, 1, 1);
}

void func_328(var uParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = joaat("ig_ramp_gang");
	sVar1 = "misstrvram_4";
	unk_0x9016574B77A748EE(iVar0);
	unk_0x831CD0FBFB26EC7E(sVar1);
	unk_0xAEC679281346B372(joaat("weapon_assaultrifle"), 31, 0);
	while (!unk_0xEDFE27D1AEA0EA7F(iVar0) || !unk_0x028356968FDD2DF2(sVar1))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!func_325(&(uParam0->f_28[0]), iVar0, -161.37f, -1669.63f, 33.1f, func_321(1.03f), 1))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_324(&(uParam0->f_28[0]));
	unk_0x97236214E312A8E7(uParam0->f_28[0], "RP0_NOGUN");
	unk_0xFB644935627FBD9A(uParam0->f_28[0]);
	unk_0xDEA702F2138E0B35(uParam0->f_28[0], 0, 1, 0, 0);
	unk_0xDEA702F2138E0B35(uParam0->f_28[0], 1, 0, 0, 0);
	unk_0xDEA702F2138E0B35(uParam0->f_28[0], 2, 0, 0, 0);
	unk_0xDEA702F2138E0B35(uParam0->f_28[0], 3, 0, 1, 0);
	unk_0xDEA702F2138E0B35(uParam0->f_28[0], 4, 0, 0, 0);
	unk_0xDEA702F2138E0B35(uParam0->f_28[0], 5, 0, 0, 0);
	unk_0xDEA702F2138E0B35(uParam0->f_28[0], 6, 0, 0, 0);
	unk_0xDEA702F2138E0B35(uParam0->f_28[0], 7, 0, 0, 0);
	unk_0xDEA702F2138E0B35(uParam0->f_28[0], 8, 0, 0, 0);
	unk_0xDEA702F2138E0B35(uParam0->f_28[0], 9, 0, 0, 0);
	unk_0xDEA702F2138E0B35(uParam0->f_28[0], 10, 0, 1, 0);
	unk_0xDEA702F2138E0B35(uParam0->f_28[0], 11, 0, 0, 0);
	unk_0xB5746603774C4C9D(uParam0->f_28[0], sVar1, "thugs_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
	while (!func_325(&(uParam0->f_28[1]), iVar0, -161.93f, -1670.39f, 33.14f, func_321(0.2f), 1))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_324(&(uParam0->f_28[1]));
	unk_0x97236214E312A8E7(uParam0->f_28[1], "RP1_GUN");
	unk_0xFB644935627FBD9A(uParam0->f_28[1]);
	unk_0xDEA702F2138E0B35(uParam0->f_28[1], 0, 0, 0, 0);
	unk_0xDEA702F2138E0B35(uParam0->f_28[1], 1, 0, 0, 0);
	unk_0xDEA702F2138E0B35(uParam0->f_28[1], 2, 0, 0, 0);
	unk_0xDEA702F2138E0B35(uParam0->f_28[1], 3, 1, 1, 0);
	unk_0xDEA702F2138E0B35(uParam0->f_28[1], 4, 0, 0, 0);
	unk_0xDEA702F2138E0B35(uParam0->f_28[1], 5, 0, 0, 0);
	unk_0xDEA702F2138E0B35(uParam0->f_28[1], 6, 0, 0, 0);
	unk_0xDEA702F2138E0B35(uParam0->f_28[1], 7, 0, 0, 0);
	unk_0xDEA702F2138E0B35(uParam0->f_28[1], 8, 0, 0, 0);
	unk_0xDEA702F2138E0B35(uParam0->f_28[1], 9, 0, 0, 0);
	unk_0xDEA702F2138E0B35(uParam0->f_28[1], 10, 1, 0, 0);
	unk_0xDEA702F2138E0B35(uParam0->f_28[1], 11, 0, 0, 0);
	unk_0x7D154B840BD03D00(uParam0->f_28[1], joaat("weapon_assaultrifle"), 100, 1, 1);
	unk_0xB5746603774C4C9D(uParam0->f_28[1], sVar1, "thugs_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
	StringCopy(&(uParam0->f_9), "TRVRAM_4", 24);
	uParam0->f_27 = 0;
	unk_0x419C9117019F2E5A(iVar0);
}

void func_329(var uParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = joaat("ig_ramp_mex");
	sVar1 = "misstrvram_3";
	unk_0x9016574B77A748EE(iVar0);
	unk_0x831CD0FBFB26EC7E(sVar1);
	unk_0xAEC679281346B372(joaat("weapon_microsmg"), 31, 10);
	while ((!unk_0xEDFE27D1AEA0EA7F(iVar0) || !unk_0xA1A1ED32111D2031(joaat("weapon_microsmg"))) || !unk_0x028356968FDD2DF2(sVar1))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!func_325(&(uParam0->f_28[0]), iVar0, 464.6125f, -1848.767f, 27.816f, 177.39f, 1))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_324(&(uParam0->f_28[0]));
	unk_0xDEA702F2138E0B35(uParam0->f_28[0], 0, 0, 0, 0);
	unk_0xDEA702F2138E0B35(uParam0->f_28[0], 1, 0, 0, 0);
	unk_0xDEA702F2138E0B35(uParam0->f_28[0], 2, 0, 0, 0);
	unk_0xDEA702F2138E0B35(uParam0->f_28[0], 3, 0, 0, 0);
	unk_0xDEA702F2138E0B35(uParam0->f_28[0], 4, 0, 0, 0);
	unk_0xDEA702F2138E0B35(uParam0->f_28[0], 5, 0, 0, 0);
	unk_0xDEA702F2138E0B35(uParam0->f_28[0], 6, 0, 0, 0);
	unk_0xDEA702F2138E0B35(uParam0->f_28[0], 7, 0, 0, 0);
	unk_0xDEA702F2138E0B35(uParam0->f_28[0], 8, 0, 0, 0);
	unk_0xDEA702F2138E0B35(uParam0->f_28[0], 9, 1, 0, 0);
	unk_0xDEA702F2138E0B35(uParam0->f_28[0], 10, 0, 0, 0);
	unk_0xDEA702F2138E0B35(uParam0->f_28[0], 11, 0, 0, 0);
	unk_0x97236214E312A8E7(uParam0->f_28[0], "RAMP:PED 0");
	unk_0xB5746603774C4C9D(uParam0->f_28[0], sVar1, "mexicans_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
	while (!func_325(&(uParam0->f_28[1]), iVar0, 465.782f, -1849.073f, 27.817f, 129.92f, 1))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_324(&(uParam0->f_28[1]));
	unk_0xDEA702F2138E0B35(uParam0->f_28[1], 0, 1, 0, 0);
	unk_0xDEA702F2138E0B35(uParam0->f_28[1], 1, 0, 0, 0);
	unk_0xDEA702F2138E0B35(uParam0->f_28[1], 2, 0, 0, 0);
	unk_0xDEA702F2138E0B35(uParam0->f_28[1], 3, 1, 0, 0);
	unk_0xDEA702F2138E0B35(uParam0->f_28[1], 4, 0, 1, 0);
	unk_0xDEA702F2138E0B35(uParam0->f_28[1], 5, 0, 0, 0);
	unk_0xDEA702F2138E0B35(uParam0->f_28[1], 6, 0, 0, 0);
	unk_0xDEA702F2138E0B35(uParam0->f_28[1], 7, 0, 0, 0);
	unk_0xDEA702F2138E0B35(uParam0->f_28[1], 8, 1, 0, 0);
	unk_0xDEA702F2138E0B35(uParam0->f_28[1], 9, 0, 0, 0);
	unk_0xDEA702F2138E0B35(uParam0->f_28[1], 10, 0, 0, 0);
	unk_0xDEA702F2138E0B35(uParam0->f_28[1], 11, 0, 0, 0);
	unk_0x97236214E312A8E7(uParam0->f_28[1], "RAMP:PED 1");
	unk_0xB5746603774C4C9D(uParam0->f_28[1], sVar1, "mexicans_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
	if (func_266(&(uParam0->f_41[0]), joaat("weapon_microsmg"), 467f, -1855.4f, 32f, func_321(-0.85f)))
	{
		unk_0xE51C0F1430C74646(uParam0->f_41[0], joaat("component_at_scope_macro"));
		unk_0xE51C0F1430C74646(uParam0->f_41[0], joaat("component_microsmg_clip_02"));
	}
	StringCopy(&(uParam0->f_9), "TRVRAM_3", 24);
	uParam0->f_27 = 0;
	unk_0x419C9117019F2E5A(iVar0);
}

int func_330()
{
	return func_331(1182.137f, -400.4787f, 66.92414f, 8f);
}

var func_331(struct<3> Param0, float fParam3)
{
	struct<3> Var0;
	
	Var0 = { (fParam3 / 2f), (fParam3 / 2f), (fParam3 / 2f) };
	return unk_0x1701E0E6A11D6B65(Param0 - Var0, Param0 + Var0, 0, 1, 1, 1);
}

void func_332(var uParam0)
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
	unk_0xAEC679281346B372(joaat("weapon_sawnoffshotgun"), 31, 0);
	unk_0x9016574B77A748EE(iVar0);
	unk_0x9016574B77A748EE(iVar1);
	unk_0x9016574B77A748EE(iVar2);
	unk_0x831CD0FBFB26EC7E(sVar3);
	func_336(&uLocal_112);
	while ((((!unk_0xEDFE27D1AEA0EA7F(iVar0) || !unk_0xEDFE27D1AEA0EA7F(iVar1)) || !unk_0xEDFE27D1AEA0EA7F(iVar2)) || !unk_0x028356968FDD2DF2(sVar3)) || !func_335(&uLocal_112))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x5E791DD328BCDC42(1180.021f, -401.7374f, 66.8767f, 0.75f, 0);
	uParam0->f_41[2] = unk_0x7F058F004EA8664C(1179.778f, -401.7374f, 66.8697f, 1f, joaat("prop_chair_01a"), 1, 0, 1);
	if (unk_0x31F12808DC47A9E5(uParam0->f_41[2]))
	{
		unk_0x990FFD4FB6ADD630(uParam0->f_41[2], 1180.05f, -401.83f, 66.88f, 1, 0, 0, 1);
		unk_0x58F6B49606932378(uParam0->f_41[2], 0f, 0f, 50f, 2, 1);
		unk_0x73D7E57BF0ED7FEB(uParam0->f_41[2], 1);
	}
	uParam0->f_41[3] = unk_0x7F058F004EA8664C(1181.243f, -402.5309f, 67.2564f, 1f, joaat("prop_table_01"), 1, 0, 1);
	if (unk_0x31F12808DC47A9E5(uParam0->f_41[3]))
	{
		unk_0x73D7E57BF0ED7FEB(uParam0->f_41[3], 1);
	}
	while (!func_325(&(uParam0->f_28[0]), iVar0, 1181.547f, -400.0954f, 67.5757f, -124.2928f, 0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_324(&(uParam0->f_28[0]));
	unk_0x73D7E57BF0ED7FEB(uParam0->f_28[0], 1);
	unk_0xFB644935627FBD9A(uParam0->f_28[0]);
	unk_0xDEA702F2138E0B35(uParam0->f_28[0], 2, 0, 0, 0);
	func_334(&(uParam0->f_41[1]), iVar2, 1181.547f, -400.0954f, 65.5757f, 0f);
	unk_0x947CE5CCDDBA0651(uParam0->f_41[1], uParam0->f_28[0], unk_0xCA57A734FF47CDF5(uParam0->f_28[0], iVar4), Var8, Var5, 1, 0, 0, 0, 2, 1);
	func_333(&uLocal_112, 0, 3);
	if (!unk_0xCF0FA6AB02EA68F7(uParam0->f_59))
	{
		uParam0->f_59 = unk_0x3C3438327FFEB224(Local_106, Local_109, 2);
		if (func_124(uParam0->f_28[0]))
		{
			unk_0x4DD2EB945B4192FD(uParam0->f_28[0], uParam0->f_59, sVar3, "hipster_idle", 8f, -8f, 513, 0, 1148846080, 0);
		}
		unk_0xAB888668498FCC04(uParam0->f_59, 1);
	}
	if (!func_266(&(uParam0->f_41[0]), joaat("weapon_sawnoffshotgun"), 1162.2f, -395.4f, 72.9f, func_321(-0.71f)))
	{
	}
	StringCopy(&(uParam0->f_9), "TRVRAM_2_CONCAT", 24);
	uParam0->f_27 = 0;
	unk_0x419C9117019F2E5A(iVar0);
	unk_0x419C9117019F2E5A(iVar1);
	unk_0x419C9117019F2E5A(iVar2);
}

void func_333(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	if (unk_0x5C716BBF766E1C70(*uParam0))
	{
		if (bParam1)
		{
			unk_0xD94B086FF448C11B(&uVar0);
		}
		else
		{
			if (!unk_0xC4C5E5A7D6CF16CC("npcphone"))
			{
				unk_0x04E46F978DBA89A5("npcphone", 0);
				unk_0xE4D6B173230EC834(joaat("prop_npc_phone"));
			}
			uVar0 = unk_0x342E43BC5418FEA4("npcphone");
		}
		unk_0xC1B98DE2C95E1EE2(uVar0);
		unk_0x76F4FB5EFF5BDED5(*uParam0, "DISPLAY_VIEW");
		unk_0x22DD5585E00B80C3(iParam2);
		unk_0xE2B30EB9B14EEAB2();
		unk_0xC1C40A3B8772D9BA(*uParam0, Global_14373, Global_14374, Global_14375, Global_14376, 255, 255, 255, 255, 0);
	}
}

void func_334(var uParam0, int iParam1, struct<3> Param2, float fParam5)
{
	func_150(uParam0);
	*uParam0 = unk_0x7082ECB3731CD86C(iParam1, Param2, 1, 1, 0);
	unk_0xB88121FF8A34A66F(*uParam0, fParam5);
}

int func_335(var uParam0)
{
	if (unk_0x5C716BBF766E1C70(*uParam0))
	{
		return 1;
	}
	return 0;
}

void func_336(var uParam0)
{
	*uParam0 = unk_0xBD7D7877C82BE42F(func_337());
}

char* func_337()
{
	return "CELLPHONE_CUTSCENE";
}

int func_338()
{
	return func_331(911.5349f, 3642.111f, 31.64738f, 8f);
}

void func_339(var uParam0)
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
	unk_0x9016574B77A748EE(iVar11);
	unk_0x9016574B77A748EE(iVar12);
	unk_0x9016574B77A748EE(iVar13);
	unk_0x831CD0FBFB26EC7E(sVar3);
	unk_0xAEC679281346B372(joaat("weapon_assaultrifle"), 31, 0);
	while ((((!unk_0xEDFE27D1AEA0EA7F(iVar11) || !unk_0xEDFE27D1AEA0EA7F(iVar12)) || !unk_0xEDFE27D1AEA0EA7F(iVar13)) || !unk_0x028356968FDD2DF2(sVar3)) || !unk_0xA1A1ED32111D2031(joaat("weapon_assaultrifle")))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!func_325(&(uParam0->f_28[0]), iVar11, 907.998f, 3643.826f, 32.29243f, -173.0453f, 0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (func_124(uParam0->f_28[0]))
	{
		unk_0xDEA702F2138E0B35(uParam0->f_28[0], 0, 0, 0, 0);
		unk_0xDEA702F2138E0B35(uParam0->f_28[0], 1, 0, 0, 0);
		unk_0xDEA702F2138E0B35(uParam0->f_28[0], 2, 0, 0, 0);
		unk_0xDEA702F2138E0B35(uParam0->f_28[0], 3, 0, 0, 0);
		unk_0xDEA702F2138E0B35(uParam0->f_28[0], 4, 0, 0, 0);
		unk_0xDEA702F2138E0B35(uParam0->f_28[0], 5, 0, 0, 0);
		unk_0xDEA702F2138E0B35(uParam0->f_28[0], 6, 0, 0, 0);
		unk_0xDEA702F2138E0B35(uParam0->f_28[0], 7, 0, 0, 0);
		unk_0xDEA702F2138E0B35(uParam0->f_28[0], 8, 0, 0, 0);
		unk_0xDEA702F2138E0B35(uParam0->f_28[0], 9, 0, 0, 0);
		unk_0xDEA702F2138E0B35(uParam0->f_28[0], 10, 0, 0, 0);
		unk_0xDEA702F2138E0B35(uParam0->f_28[0], 11, 0, 0, 0);
		Var0 = { unk_0x433176BD83D09D7E(uParam0->f_28[0], iVar4, 0f, 0f, 0f) };
		unk_0x97236214E312A8E7(uParam0->f_28[0], "RAMP:PED 0");
		func_334(&(uParam0->f_41[1]), iVar13, Var0, 0f);
		unk_0x947CE5CCDDBA0651(uParam0->f_41[1], uParam0->f_28[0], unk_0xCA57A734FF47CDF5(uParam0->f_28[0], iVar4), Var8, Var5, 1, 1, 0, 0, 2, 1);
		unk_0xC4E1F2B378137853(uParam0->f_41[1], 1);
		unk_0x73D7E57BF0ED7FEB(uParam0->f_28[0], 1);
		unk_0x764AFC5A3A16C2B0(uParam0->f_28[0], 208, 1);
		unk_0x641E77554763EF06(uParam0->f_28[0], joaat("player"));
	}
	while (!func_325(&(uParam0->f_28[1]), iVar11, 909.3126f, 3643.507f, 32.2952f, 153.0127f, 0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (func_124(uParam0->f_28[1]))
	{
		unk_0xDEA702F2138E0B35(uParam0->f_28[1], 0, 1, 0, 0);
		unk_0xDEA702F2138E0B35(uParam0->f_28[1], 1, 0, 0, 0);
		unk_0xDEA702F2138E0B35(uParam0->f_28[1], 2, 1, 0, 0);
		unk_0xDEA702F2138E0B35(uParam0->f_28[1], 3, 1, 0, 0);
		unk_0xDEA702F2138E0B35(uParam0->f_28[1], 4, 1, 0, 0);
		unk_0xDEA702F2138E0B35(uParam0->f_28[1], 5, 0, 0, 0);
		unk_0xDEA702F2138E0B35(uParam0->f_28[1], 6, 0, 0, 0);
		unk_0xDEA702F2138E0B35(uParam0->f_28[1], 7, 0, 0, 0);
		unk_0xDEA702F2138E0B35(uParam0->f_28[1], 8, 0, 0, 0);
		unk_0xDEA702F2138E0B35(uParam0->f_28[1], 9, 0, 0, 0);
		unk_0xDEA702F2138E0B35(uParam0->f_28[1], 10, 0, 0, 0);
		unk_0xDEA702F2138E0B35(uParam0->f_28[1], 11, 0, 0, 0);
		Var0 = { unk_0x433176BD83D09D7E(uParam0->f_28[1], iVar4, 0f, 0f, 0f) };
		unk_0x97236214E312A8E7(uParam0->f_28[1], "RAMP:PED 1");
		func_334(&(uParam0->f_41[2]), iVar13, Var0, 0f);
		unk_0x947CE5CCDDBA0651(uParam0->f_41[2], uParam0->f_28[1], unk_0xCA57A734FF47CDF5(uParam0->f_28[1], iVar4), Var8, Var5, 1, 1, 0, 0, 2, 1);
		unk_0xC4E1F2B378137853(uParam0->f_41[2], 1);
		unk_0x73D7E57BF0ED7FEB(uParam0->f_28[1], 1);
		unk_0x764AFC5A3A16C2B0(uParam0->f_28[1], 208, 1);
		unk_0x641E77554763EF06(uParam0->f_28[1], joaat("player"));
	}
	uParam0->f_41[3] = unk_0x7F058F004EA8664C(909.3884f, 3643.652f, 31.699f, 1f, joaat("prop_table_03b_chr"), 1, 0, 1);
	if (unk_0x31F12808DC47A9E5(uParam0->f_41[3]))
	{
		unk_0x73D7E57BF0ED7FEB(uParam0->f_41[3], 1);
	}
	uParam0->f_41[4] = unk_0x7F058F004EA8664C(908.0437f, 3643.682f, 31.7073f, 1f, joaat("prop_table_03b_chr"), 1, 0, 1);
	if (unk_0x31F12808DC47A9E5(uParam0->f_41[4]))
	{
		unk_0x73D7E57BF0ED7FEB(uParam0->f_41[4], 1);
	}
	if (!unk_0xCF0FA6AB02EA68F7(uParam0->f_59))
	{
		uParam0->f_59 = unk_0x3C3438327FFEB224(910.13f, 3643.74f, 31.69f, 0f, 0f, func_321(-0.26f), 2);
		if (func_124(uParam0->f_28[0]))
		{
			unk_0x4DD2EB945B4192FD(uParam0->f_28[0], uParam0->f_59, sVar3, "redneck_idle_a", 8f, -8f, 513, 0, 1148846080, 0);
		}
		if (func_124(uParam0->f_28[1]))
		{
			unk_0x4DD2EB945B4192FD(uParam0->f_28[1], uParam0->f_59, sVar3, "redneck_idle_b", 8f, -8f, 513, 0, 1148846080, 0);
		}
		unk_0xAB888668498FCC04(uParam0->f_59, 1);
	}
	if (!func_266(&(uParam0->f_41[0]), joaat("weapon_assaultrifle"), 907.52f, 3644.32f, 31.86f, -164.89f))
	{
	}
	unk_0x419C9117019F2E5A(iVar11);
	unk_0x419C9117019F2E5A(iVar12);
	StringCopy(&(uParam0->f_9), "TRVRAM_1", 24);
	uParam0->f_27 = 0;
}

int func_340(int iParam0)
{
	if (!unk_0x6E65FD9B611945AD())
	{
		return 1;
	}
	if (unk_0x51CFE20A158947F4())
	{
		return 1;
	}
	if (func_176(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_341(int iParam0)
{
	struct<27> Var0;
	int iVar32;
	
	func_107(iParam0, &Var0);
	iVar32 = func_221();
	if (iVar32 == 145)
	{
		return 1;
	}
	else if ((iVar32 != 1 && iVar32 != 0) && iVar32 != 2)
	{
		return 1;
	}
	if (!unk_0xB03A1684359C50A1(Var0.f_26, iVar32))
	{
		return 1;
	}
	return 0;
}

int func_342(int iParam0, var uParam1, struct<3> Param2, float fParam5)
{
	int iVar0;
	
	if (*iParam0 == 1)
	{
		if (func_343((*iParam0)[0], Param2, fParam5, uParam1))
		{
			return 1;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < *iParam0)
		{
			if (func_343((*iParam0)[iVar0], Param2, fParam5, uParam1))
			{
				iVar0 = *iParam0;
				return 1;
			}
			iVar0++;
		}
	}
	func_361("DETERMINE_RC_TO_LAUNCH - Unable to find mission to launch [TERMINATING]");
	return 0;
}

int func_343(int iParam0, struct<3> Param1, float fParam4, var uParam5)
{
	int iVar0;
	struct<7> Var1;
	
	iVar0 = 0;
	func_107(iParam0, &Var1);
	if (func_344(Var1.f_6, Param1, fParam4, 0))
	{
		if (unk_0xB03A1684359C50A1(Global_104551.f_18544[iParam0 /*6*/], 0))
		{
			if (!unk_0xB03A1684359C50A1(Global_104551.f_18544[iParam0 /*6*/], 3))
			{
				iVar0 = 1;
			}
		}
		if (func_186(iParam0))
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

int func_344(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x36E1A96E1D63ED91((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x36E1A96E1D63ED91((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x36E1A96E1D63ED91((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x36E1A96E1D63ED91((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x36E1A96E1D63ED91((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_345(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_104551.f_9055.f_99.f_58[iParam0];
}

void func_346(var* uParam0, bool bParam1)
{
	func_262(uParam0);
	if (bParam1)
	{
		func_361(" SCRIPT TERMINATING: Cleaning up entities in Launcher");
		func_349(uParam0, 0, 0, 0);
	}
	func_348(&(uParam0->f_48));
	if (iLocal_287 != -1)
	{
		func_361("SCRIPT TERMINATING: Ending off-mission cutscene request");
		func_259(&iLocal_287);
	}
	if (iLocal_299 != 0)
	{
		if (*uParam0 == 55 || *uParam0 == 53)
		{
			unk_0x7E1D02126DA8A751(iLocal_299, 0);
		}
	}
	if (unk_0x76AF8AC551A53D4C())
	{
		unk_0xBC3C2A3068412290(0);
	}
	if (iLocal_291)
	{
		if (func_2("RAMP_HELP_TRIG"))
		{
			unk_0xEFF1F12403847394(1);
			iLocal_291 = 0;
		}
	}
	func_347();
	func_361("SCRIPT TERMINATED");
	Global_90246 = 0;
	unk_0x810C5D6462DD69E6();
}

void func_347()
{
	func_361("Running end routines.");
	Global_104269 = (Global_104269 - 1);
}

int func_348(var uParam0)
{
	if (func_148(uParam0))
	{
		if (unk_0x028356968FDD2DF2(*uParam0))
		{
			unk_0x334F1DD67B2EC86A(*uParam0);
			*uParam0 = "";
			uParam0->f_1 = "";
			return 1;
		}
	}
	return 0;
}

void func_349(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_357(uParam0, iParam1);
	func_353(uParam0, bParam2);
	func_350(uParam0, bParam3);
}

void func_350(var uParam0, bool bParam1)
{
	func_351(&(uParam0->f_41), bParam1);
}

void func_351(var uParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (bParam1)
		{
			func_150(uParam0[iVar0]);
		}
		else
		{
			func_352(uParam0[iVar0], 0);
		}
		iVar0++;
	}
}

void func_352(var uParam0, bool bParam1)
{
	if (unk_0x31F12808DC47A9E5(*uParam0))
	{
		if (unk_0xA3D5B4AC814DFA69(*uParam0))
		{
			unk_0x964B3F361C3DBDF4(*uParam0, 1, 1);
		}
		if (!bParam1)
		{
			unk_0xF0862FA354B164C4(uParam0);
		}
		else
		{
			unk_0xFC528B61F5E1D89B(*uParam0);
		}
	}
}

void func_353(var uParam0, bool bParam1)
{
	func_354(&(uParam0->f_35), bParam1);
}

void func_354(var uParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (bParam1)
		{
			func_356(uParam0[iVar0]);
		}
		else
		{
			func_355(uParam0[iVar0]);
		}
		iVar0++;
	}
}

void func_355(var uParam0)
{
	if (unk_0x31F12808DC47A9E5(*uParam0))
	{
		unk_0x74C2FE037DFC8B4A(*uParam0, 0);
		if (unk_0x90D1FDC9D31B7BE1(*uParam0) && unk_0xE54DCC6B21FDC95A(*uParam0, 1))
		{
			unk_0x4F5FF3F3FDCAB15D(uParam0);
		}
	}
}

void func_356(var uParam0)
{
	if (unk_0x31F12808DC47A9E5(*uParam0))
	{
		if (!unk_0x90D1FDC9D31B7BE1(*uParam0))
		{
			unk_0x337F2213526139E0(*uParam0, 1, 0);
		}
		if (func_154(*uParam0))
		{
			if (unk_0x90D1FDC9D31B7BE1(*uParam0) && unk_0xE54DCC6B21FDC95A(*uParam0, 1))
			{
				if (func_124(unk_0x18F7BE9ACB7D08F4()))
				{
					if (unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), *uParam0, 0))
					{
						unk_0x4F5FF3F3FDCAB15D(uParam0);
						return;
					}
				}
				unk_0xBECECD970F645217(uParam0);
			}
		}
		else
		{
			if (func_124(unk_0x18F7BE9ACB7D08F4()))
			{
				if (unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), *uParam0, 0))
				{
					unk_0x4F5FF3F3FDCAB15D(uParam0);
					return;
				}
			}
			unk_0xBECECD970F645217(uParam0);
		}
	}
}

void func_357(var uParam0, int iParam1)
{
	func_358(&(uParam0->f_28), iParam1);
}

void func_358(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (iParam1 == 1)
		{
			func_360(uParam0[iVar0]);
		}
		else
		{
			func_359(uParam0[iVar0], 0, 1, 0);
		}
		iVar0++;
	}
}

void func_359(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x31F12808DC47A9E5(*uParam0))
	{
		if (!unk_0x0FAE113CE72ED842(*uParam0))
		{
			unk_0x503DF1366BC3493D(*uParam0, 0, 1);
			if (iParam3 == 0)
			{
				unk_0x1436BC29BF45FBAE(*uParam0);
			}
			unk_0x10F31830C95ED2E5(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0x40E2910BAF39B1C7(*uParam0, 0);
			}
		}
		unk_0xDBE64C5761554FBF(uParam0);
	}
}

void func_360(var uParam0)
{
	if (unk_0x31F12808DC47A9E5(*uParam0))
	{
		if (!unk_0x74C2FE037DFC8B4A(*uParam0, 0))
		{
			unk_0x503DF1366BC3493D(*uParam0, 0, 1);
		}
		if (!unk_0x90D1FDC9D31B7BE1(*uParam0))
		{
			unk_0x337F2213526139E0(*uParam0, 1, 0);
		}
		unk_0x63C116C2153FAA3C(uParam0);
	}
}

void func_361(char* sParam0)
{
	if (!unk_0xFAFFA408239A026B(sParam0))
	{
	}
}

void func_362(var uParam0)
{
	*uParam0 = -1;
	StringCopy(&(uParam0->f_1), "", 32);
	uParam0->f_15 = 12f;
	uParam0->f_16 = 6;
	uParam0->f_25 = 0;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
}

void func_363()
{
	func_361("Running start routines.");
	Global_104269++;
}

