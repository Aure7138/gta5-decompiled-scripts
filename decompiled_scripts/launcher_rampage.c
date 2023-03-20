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
	uLocal_89 = unk_0x41A93ECFFBBAC499();
	uLocal_90 = unk_0xEF74E92BF5AB1FC4();
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
	unk_0x21B58370C1A6C16E(1);
	func_297();
	Var0.f_17 = 2;
	Var0.f_28 = 6;
	Var0.f_35 = 5;
	Var0.f_41 = 6;
	Var61 = { ScriptParam_0.f_1[0 /*3*/] };
	Global_88630 = 1;
	func_296(&Var0);
	if (unk_0x89522B8E487D4EF9(83))
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
		if (!unk_0x18544C93469391DA())
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
				if (unk_0xF6917DE0E003509D(&(uParam0->f_1)))
				{
					func_295("  -  Ambient Rampage Mission ID is invalid");
					func_280(uParam0, 1);
				}
				unk_0x9956FB0E4B50ECB8(&(Global_99155.f_17188[*uParam0 /*6*/]), 0);
				unk_0x9956FB0E4B50ECB8(&(Global_99155.f_17188[*uParam0 /*6*/]), 2);
				unk_0x73817D396768E4C6(&(Global_99155.f_17188[*uParam0 /*6*/]), 3);
				Global_98242[*uParam0 /*10*/].f_1 = 0;
				if (!func_197(0))
				{
					Global_98242[*uParam0 /*10*/].f_3 = 0;
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
					unk_0xB86B1248EA9B87EA(Param1, uParam0->f_15, 1, 0, 0, 0);
					func_295(" RC Ambient Launcher Waiting To Terminate");
					Global_98242[*uParam0 /*10*/].f_1 = 0;
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
				unk_0x1D208E4A4E1D4FFE(1);
			}
			iLocal_292 = 0;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

bool func_2(char* sParam0)
{
	unk_0xAA8D087D7A86072A(sParam0);
	return unk_0x360D41DC76A83E6A(0);
}

int func_3(var* uParam0)
{
	while (!Global_98242[*uParam0 /*10*/])
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	return 1;
}

void func_4(int iParam0, bool bParam1)
{
	if (unk_0xDE185266FE919B68())
	{
		if (!unk_0xA864A37DA392324A())
		{
			unk_0x6A6E764D1DB633C7(iParam0);
			if (bParam1)
			{
				while (!unk_0xAEF17BDE274A1247())
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
	unk_0x73817D396768E4C6(&(Global_99155.f_17188[iParam0 /*6*/]), 5);
	if (unk_0xFF6891E21E7FC193(joaat("mission_stat_watcher")) > 0)
	{
		while (unk_0xFF6891E21E7FC193(joaat("mission_stat_watcher")) > 0)
		{
			func_22();
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	if (unk_0xFF6891E21E7FC193(joaat("mission_stat_watcher")) < 1)
	{
		Global_55579 = 0;
		unk_0x5BA7CCA84A74BEA3("mission_stat_watcher");
		while (!unk_0xD51489677E1B0844("mission_stat_watcher"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xE81651AD79516E48("mission_stat_watcher", 1828);
		unk_0x307B32C17692E50D("mission_stat_watcher");
	}
	while (!unk_0xB519E5386FBF69E5(Global_99155.f_17188[iParam0 /*6*/], 5))
	{
		if (unk_0xFF6891E21E7FC193(joaat("mission_stat_watcher")) > 0)
		{
			unk_0x9956FB0E4B50ECB8(&(Global_99155.f_17188[iParam0 /*6*/]), 5);
		}
	}
	func_7(iParam0);
}

void func_7(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_55576 == 1)
	{
		func_21();
		Global_55576 = 0;
		if (Global_55571)
		{
			return;
		}
	}
	if (Global_3)
	{
		Global_55579 = 1;
		func_13();
		return;
	}
	MemCopy(&Global_55593, {func_12(iParam0)}, 4);
	Global_55581 = 0;
	Global_55580 = 0;
	switch (iParam0)
	{
		case 1:
		case 9:
			Global_55568 = 1;
			Global_55571 = 1;
			Global_55574 = 1;
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
			Global_55579 = 1;
			Global_55580 = 1;
			func_13();
			func_22();
			return;
			break;
	}
	iVar0 = Global_67823;
	Global_67823 = 1;
	iVar1 = Global_67824;
	Global_67824 = iParam0;
	if (!Global_55568)
	{
		if ((Global_67824 != iVar1 || Global_67673 == 0) || iVar0 != Global_67823)
		{
			Global_25283 = 0;
			func_13();
			func_9(iParam0);
		}
		else
		{
			Global_55571 = 1;
		}
	}
	Global_55606 = unk_0x9D40BBF80D8F5E8A();
	func_8();
	Global_55578 = 0;
}

void func_8()
{
	int iVar0;
	
	if (!Global_55575)
	{
		return;
	}
	if (Global_67673 == 0)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67673)
	{
		switch (Global_55803[Global_67674[iVar0 /*9*/] /*13*/])
		{
			case 1:
			case 9:
				Global_67674[iVar0 /*9*/].f_3 = 1;
				break;
			
			case 4:
				if (Global_55586)
				{
					Global_67674[iVar0 /*9*/].f_3 = 1;
				}
				break;
			
			case 6:
				if (Global_55803[Global_67674[iVar0 /*9*/] /*13*/].f_3)
				{
					if (Global_67674[iVar0 /*9*/].f_1 != 0)
					{
						Global_67674[iVar0 /*9*/].f_3 = 1;
					}
				}
				break;
		}
		iVar0++;
	}
	Global_55575 = 0;
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
	Global_55571 = 1;
	Global_55574 = 1;
	if (Global_67673 > 15)
	{
		return;
	}
	func_11(Global_67673);
	Global_67674[Global_67673 /*9*/] = iParam0;
	Global_67673++;
	if (Global_55803[iParam0 /*13*/] == 16)
	{
		Global_67825 = 1;
	}
}

void func_11(int iParam0)
{
	Global_67674[iParam0 /*9*/].f_1 = 0;
	Global_67674[iParam0 /*9*/].f_2 = 0f;
	Global_67674[iParam0 /*9*/].f_3 = 0;
	Global_67674[iParam0 /*9*/].f_4 = 0;
}

struct<2> func_12(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_94(iParam0) };
	if (unk_0xF6917DE0E003509D(&cVar2))
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
	if (Global_55578)
	{
		return;
	}
	Global_55587 = 0;
	Global_67673 = 0;
	Global_55589 = 0;
	if (Global_55586)
	{
	}
	Global_55586 = 0;
	func_20(0);
	func_19();
	Global_67825 = 0;
	Global_55577 = 1;
	func_17();
	func_16();
	func_15();
	func_14();
	Global_55568 = 0;
	Global_55598 = 0;
	Global_55606 = -1;
}

void func_14()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_67860[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	Global_67869 = 0;
}

void func_15()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		Global_67826[iVar0 /*2*/] = 0;
		Global_67826[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	Global_67859 = 0;
}

void func_16()
{
	Global_55737 = 0;
}

void func_17()
{
	Global_55597 = 0;
	Global_55601 = func_18(joaat("sp0_shots"));
	Global_55600 = func_18(joaat("sp0_hits"));
	Global_55603 = func_18(joaat("sp1_shots"));
	Global_55602 = func_18(joaat("sp1_hits"));
	Global_55605 = func_18(joaat("sp2_shots"));
	Global_55604 = func_18(joaat("sp2_hits"));
}

var func_18(int iParam0)
{
	var uVar0;
	
	unk_0x56DCF5665F92F9BD(iParam0, &uVar0, -1);
	return uVar0;
}

void func_19()
{
	int iVar0;
	
	Global_55607 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		Global_55608[iVar0 /*2*/] = 0;
		iVar0++;
	}
}

void func_20(int iParam0)
{
	Global_69496 = iParam0;
	Global_69497 = iParam0;
}

void func_21()
{
	int iVar0;
	
	Global_55576 = 1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67673)
	{
		Global_67674[iVar0 /*9*/].f_3 = 2;
		iVar0++;
	}
	if (Global_55586)
	{
	}
	Global_55586 = 0;
}

void func_22()
{
	if (unk_0xFF6891E21E7FC193(joaat("mission_stat_watcher")) > 0)
	{
		if (func_23())
		{
			if (Global_55573 && !Global_55572)
			{
				Global_55573 = 0;
				unk_0xCA3345CE8849CB88("mission_stat_watcher");
			}
		}
		else
		{
			unk_0xCA3345CE8849CB88("mission_stat_watcher");
		}
	}
}

int func_23()
{
	if (unk_0xFF6891E21E7FC193(joaat("mission_stat_watcher")) < 1)
	{
		return 0;
	}
	if (!Global_55571)
	{
		return 0;
	}
	return Global_55583;
}

void func_24(char* sParam0)
{
	if (unk_0x04E7E853E31F41A3(sParam0, sParam0))
	{
	}
}

void func_25(char[4] cParam0, int iParam1)
{
	unk_0x73817D396768E4C6(&(Global_91025.f_20), 17);
	func_26(cParam0, iParam1, 0);
}

void func_26(char[4] cParam0, int iParam1, int iParam2)
{
	if (Global_91025 != 10 && Global_91025 != 9)
	{
		StringCopy(&Global_92807, cParam0, 32);
		func_28(&Global_92815, cParam0, 0, "Start", iParam1, iParam2);
		func_27();
		Global_85536 = 0;
	}
}

void func_27()
{
	int iVar0;
	int iVar1;
	
	Global_95220 = Global_92815;
	Global_95220.f_1 = Global_92815.f_1;
	Global_95220.f_6 = Global_92815.f_6;
	Global_95220.f_7 = Global_92815.f_7;
	Global_95220.f_8 = Global_92815.f_8;
	Global_95220.f_2 = Global_92815.f_2;
	Global_95220.f_3 = Global_92815.f_3;
	Global_95220.f_4 = Global_92815.f_4;
	Global_95220.f_5 = Global_92815.f_5;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		Global_95220.f_9[iVar1] = Global_92815.f_9[iVar1];
		Global_95220.f_13[iVar1] = Global_92815.f_13[iVar1];
		Global_95220.f_17[iVar1] = Global_92815.f_17[iVar1];
		Global_95220.f_21[iVar1] = Global_92815.f_21[iVar1];
		Global_95220.f_25[0 /*295*/][iVar1 /*98*/] = { Global_92815.f_25[0 /*295*/][iVar1 /*98*/] };
		Global_95220.f_25[1 /*295*/][iVar1 /*98*/] = { Global_92815.f_25[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 < 12)
		{
			Global_95220.f_616[iVar1 /*65*/][iVar0] = Global_92815.f_616[iVar1 /*65*/][iVar0];
			Global_95220.f_616[iVar1 /*65*/].f_13[iVar0] = Global_92815.f_616[iVar1 /*65*/].f_13[iVar0];
			Global_95220.f_616[iVar1 /*65*/].f_26[iVar0] = Global_92815.f_616[iVar1 /*65*/].f_26[iVar0];
			iVar0++;
		}
		Global_95220.f_616[iVar1 /*65*/].f_59 = Global_92815.f_616[iVar1 /*65*/].f_59;
		Global_95220.f_616[iVar1 /*65*/].f_60 = Global_92815.f_616[iVar1 /*65*/].f_60;
		Global_95220.f_616[iVar1 /*65*/].f_61 = Global_92815.f_616[iVar1 /*65*/].f_61;
		Global_95220.f_616[iVar1 /*65*/].f_62 = Global_92815.f_616[iVar1 /*65*/].f_62;
		Global_95220.f_616[iVar1 /*65*/].f_63 = Global_92815.f_616[iVar1 /*65*/].f_63;
		Global_95220.f_616[iVar1 /*65*/].f_64 = Global_92815.f_616[iVar1 /*65*/].f_64;
		iVar0 = 0;
		while (iVar0 < 9)
		{
			Global_95220.f_616[iVar1 /*65*/].f_39[iVar0] = Global_92815.f_616[iVar1 /*65*/].f_39[iVar0];
			Global_95220.f_616[iVar1 /*65*/].f_49[iVar0] = Global_92815.f_616[iVar1 /*65*/].f_49[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			Global_95220.f_812[iVar1 /*284*/][iVar0 /*3*/] = { Global_92815.f_812[iVar1 /*284*/][iVar0 /*3*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			Global_95220.f_812[iVar1 /*284*/].f_133[iVar0 /*3*/] = { Global_92815.f_812[iVar1 /*284*/].f_133[iVar0 /*3*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			Global_95220.f_1665[iVar1 /*32*/][iVar0] = Global_92815.f_1665[iVar1 /*32*/][iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Global_95220.f_1665[iVar1 /*32*/].f_5[iVar0] = Global_92815.f_1665[iVar1 /*32*/].f_5[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 15)
		{
			Global_95220.f_1665[iVar1 /*32*/].f_16[iVar0] = Global_92815.f_1665[iVar1 /*32*/].f_16[iVar0];
			iVar0++;
		}
		Global_95220.f_1762[iVar1] = Global_92815.f_1762[iVar1];
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			Global_95220.f_2259[iVar1 /*15*/][iVar0] = Global_92815.f_2259[iVar1 /*15*/][iVar0];
			Global_95220.f_2259[iVar1 /*15*/].f_5[iVar0] = Global_92815.f_2259[iVar1 /*15*/].f_5[iVar0];
			Global_95220.f_2259[iVar1 /*15*/].f_10[iVar0] = Global_92815.f_2259[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			Global_95220.f_1766[iVar1 /*164*/][iVar0] = Global_92815.f_1766[iVar1 /*164*/][iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_4[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_4[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_8[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_8[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_12[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_12[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_16[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_16[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_20[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_20[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_24[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_24[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_28[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_28[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_32[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_32[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_36[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_36[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_40[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_40[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_44[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_44[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_48[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_48[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_52[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_52[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_56[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_56[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_60[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_60[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_64[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_64[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_68[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_68[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_72[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_72[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_76[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_76[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_80[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_80[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_84[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_84[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_88[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_88[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_92[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_92[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_96[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_96[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_100[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_100[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_104[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_104[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_108[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_108[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_112[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_112[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_116[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_116[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_120[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_120[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_124[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_124[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_128[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_128[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_132[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_132[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_136[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_136[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_140[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_140[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_144[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_144[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_148[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_148[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_152[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_152[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_156[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_156[iVar0];
			Global_95220.f_1766[iVar1 /*164*/].f_160[iVar0] = Global_92815.f_1766[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	Global_95220.f_2305 = { Global_92815.f_2305 };
	Global_95220.f_2305.f_3 = Global_92815.f_2305.f_3;
	Global_95220.f_2311 = { Global_92815.f_2311 };
	Global_95220.f_2311.f_3 = { Global_92815.f_2311.f_3 };
	Global_95220.f_2311.f_6 = Global_92815.f_2311.f_6;
	Global_95220.f_2311.f_8 = Global_95220.f_2311.f_8;
	Global_95220.f_2311.f_7 = Global_92815.f_2311.f_7;
	Global_95220.f_2311.f_9 = Global_92815.f_2311.f_9;
	Global_95220.f_2311.f_11 = Global_92815.f_2311.f_11;
	Global_95220.f_2311.f_10 = Global_92815.f_2311.f_10;
	Global_95220.f_2311.f_12 = Global_92815.f_2311.f_12;
	Global_95220.f_2311.f_12.f_1 = { Global_92815.f_2311.f_12.f_1 };
	Global_95220.f_2311.f_12.f_5 = Global_92815.f_2311.f_12.f_5;
	Global_95220.f_2311.f_12.f_6 = Global_92815.f_2311.f_12.f_6;
	Global_95220.f_2311.f_12.f_7 = Global_92815.f_2311.f_12.f_7;
	Global_95220.f_2311.f_12.f_8 = Global_92815.f_2311.f_12.f_8;
	Global_95220.f_2311.f_12.f_9 = { Global_92815.f_2311.f_12.f_9 };
	Global_95220.f_2311.f_12.f_59 = { Global_92815.f_2311.f_12.f_59 };
	Global_95220.f_2311.f_12.f_62 = Global_92815.f_2311.f_12.f_62;
	Global_95220.f_2311.f_12.f_63 = Global_92815.f_2311.f_12.f_63;
	Global_95220.f_2311.f_12.f_64 = Global_92815.f_2311.f_12.f_64;
	Global_95220.f_2311.f_12.f_65 = Global_92815.f_2311.f_12.f_65;
	Global_95220.f_2311.f_12.f_77 = Global_92815.f_2311.f_12.f_77;
	Global_95220.f_2311.f_12.f_66 = Global_92815.f_2311.f_12.f_66;
	Global_95220.f_2311.f_12.f_67 = Global_92815.f_2311.f_12.f_67;
	Global_95220.f_2311.f_12.f_68 = Global_92815.f_2311.f_12.f_68;
	Global_95220.f_2311.f_12.f_69 = Global_92815.f_2311.f_12.f_69;
	Global_95220.f_2311.f_12.f_71 = Global_92815.f_2311.f_12.f_71;
	Global_95220.f_2311.f_12.f_72 = Global_92815.f_2311.f_12.f_72;
	Global_95220.f_2311.f_12.f_73 = Global_92815.f_2311.f_12.f_73;
	Global_95220.f_2311.f_12.f_74 = Global_92815.f_2311.f_12.f_74;
	Global_95220.f_2311.f_12.f_75 = Global_92815.f_2311.f_12.f_75;
	Global_95220.f_2311.f_12.f_76 = Global_92815.f_2311.f_12.f_76;
	Global_95220.f_2401 = Global_92815.f_2401;
	Global_95220.f_2401.f_1 = Global_92815.f_2401.f_1;
	Global_95220.f_2401.f_2 = Global_92815.f_2401.f_2;
	Global_95220.f_2401.f_3 = Global_92815.f_2401.f_3;
}

void func_28(var uParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_207();
	uParam0->f_1 = func_81();
	unk_0x8F305E87CAD8DE0B(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
	{
		func_66(&(uParam0->f_2305), 0);
		func_65(unk_0xE7869D5D7816A9B6());
		func_59(unk_0xE7869D5D7816A9B6(), 0);
		unk_0x5E99B63A819500A5(unk_0xE7869D5D7816A9B6(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_99155.f_1750.f_539.f_294[iVar1];
		if (iVar1 == func_56())
		{
			func_49(unk_0xE7869D5D7816A9B6(), &(uParam0->f_616[iVar1 /*65*/]), 1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_90815[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_90815[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_90815[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_90815[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_90815[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_90815[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_90815[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_90815[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_90815[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_90815[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*284*/][iVar0 /*3*/] = { Global_99155.f_1750.f_539.f_298[iVar1 /*284*/][iVar0 /*3*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			uParam0->f_812[iVar1 /*284*/].f_133[iVar0 /*3*/] = { Global_99155.f_1750.f_539.f_298[iVar1 /*284*/].f_133[iVar0 /*3*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				unk_0x56DCF5665F92F9BD(joaat("sp0_weap_purch_0"), &(uParam0->f_1665[iVar1 /*32*/][0]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp0_weap_purch_1"), &(uParam0->f_1665[iVar1 /*32*/][1]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_5[0]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_5[1]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_5[2]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_5[3]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_5[4]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_16[0]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_16[1]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_16[2]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_16[3]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_16[4]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_1665[iVar1 /*32*/].f_16[5]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_1665[iVar1 /*32*/].f_16[6]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_1665[iVar1 /*32*/].f_16[7]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_1665[iVar1 /*32*/].f_16[8]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_1665[iVar1 /*32*/].f_16[9]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_1665[iVar1 /*32*/].f_16[10]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_1665[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				unk_0x56DCF5665F92F9BD(joaat("sp1_weap_purch_0"), &(uParam0->f_1665[iVar1 /*32*/][0]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp1_weap_purch_1"), &(uParam0->f_1665[iVar1 /*32*/][1]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_5[0]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_5[1]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_5[2]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_5[3]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_5[4]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_16[0]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_16[1]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_16[2]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_16[3]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_16[4]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_1665[iVar1 /*32*/].f_16[5]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_1665[iVar1 /*32*/].f_16[6]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_1665[iVar1 /*32*/].f_16[7]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_1665[iVar1 /*32*/].f_16[8]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_1665[iVar1 /*32*/].f_16[9]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_1665[iVar1 /*32*/].f_16[10]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_1665[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				unk_0x56DCF5665F92F9BD(joaat("sp2_weap_purch_0"), &(uParam0->f_1665[iVar1 /*32*/][0]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp2_weap_purch_1"), &(uParam0->f_1665[iVar1 /*32*/][1]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_5[0]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_5[1]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_5[2]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_5[3]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_5[4]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_16[0]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_16[1]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_16[2]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_16[3]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_16[4]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_1665[iVar1 /*32*/].f_16[5]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_1665[iVar1 /*32*/].f_16[6]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_1665[iVar1 /*32*/].f_16[7]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_1665[iVar1 /*32*/].f_16[8]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_1665[iVar1 /*32*/].f_16[9]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_1665[iVar1 /*32*/].f_16[10]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_1665[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_99155.f_25013.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_52753[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_99155.f_1750.f_539.f_1635[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_99155.f_1750.f_539.f_1635[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2259[iVar1 /*15*/][iVar0] = Global_99155.f_1750.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2259[iVar1 /*15*/].f_5[iVar0] = Global_99155.f_1750.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2259[iVar1 /*15*/].f_10[iVar0] = Global_99155.f_1750.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_1766[iVar1 /*164*/][iVar0] = Global_99155.f_1750[iVar1 /*164*/][iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_4[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_8[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_12[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_16[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_20[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_24[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_28[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_32[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_36[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_40[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_44[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_48[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_52[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_56[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_60[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_64[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_68[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_72[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_76[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_80[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_84[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_88[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_92[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_96[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_100[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_104[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_108[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_112[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_116[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_120[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_124[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_128[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_132[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_136[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_140[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_144[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_148[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_152[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_156[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_160[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	unk_0x56DCF5665F92F9BD(joaat("sp0_special_ability"), &(uParam0->f_1762[0]), -1);
	unk_0x56DCF5665F92F9BD(joaat("sp1_special_ability"), &(uParam0->f_1762[1]), -1);
	unk_0x56DCF5665F92F9BD(joaat("sp2_special_ability"), &(uParam0->f_1762[2]), -1);
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
	*uParam0 = Global_87207;
	uParam0->f_1 = Global_87208;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_30(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = unk_0xE7869D5D7816A9B6();
	}
	if (unk_0xD51CFE69539DB6D8(iParam2))
	{
		uParam1->f_5 = func_47(iParam2);
	}
	if (func_44(iParam2, &iVar0, iParam3, iParam5))
	{
		func_31(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0xD51CFE69539DB6D8(iVar0))
	{
		if (!unk_0x76B2D234F1895632(iVar0))
		{
			if (unk_0x7579897B912B3328(iVar0, joaat("skylift")) && unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), iVar0, 0))
			{
				func_31(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_31(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (unk_0xC45A34912542C4EB(iParam2, 0))
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
		if (Global_91025.f_22[iVar0] == iParam0)
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
		*uParam0 = { unk_0x1141852D07400777(iParam1, 1) };
		uParam0->f_6 = unk_0x2CAFFCD9F5E16D2F(iParam1);
		uParam0->f_3 = { unk_0x834FF019A048DE2C(iParam1) };
		if (unk_0x22E902D6AF27E232(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_69010 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
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
		if (unk_0xD51CFE69539DB6D8(Global_68105.f_484[iVar0]))
		{
			if (iParam0 == Global_68105.f_484[iVar0])
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
	
	if (!unk_0xD51CFE69539DB6D8(iParam0))
	{
		return 145;
	}
	if (!unk_0xC45A34912542C4EB(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xD51CFE69539DB6D8(Global_88689[iVar0]))
		{
			if (Global_88689[iVar0] == iParam0)
			{
				return Global_88699[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_36(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0xD51CFE69539DB6D8(iParam0))
	{
		return 0;
	}
	if (!unk_0xC45A34912542C4EB(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xD51CFE69539DB6D8(Global_88689[iVar0]))
		{
			if (Global_88689[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_88699[iVar0])
				{
					if (iParam2 == 0 || unk_0x1B2DC87EFB36DF80(iParam0) == func_37(iParam1, iParam2))
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
			if (Global_99155.f_7699.f_99.f_58[128] && !Global_99155.f_7699.f_99.f_58[131])
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
					if (Global_99155.f_7699.f_99.f_58[119])
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
			else if (Global_99155.f_7699.f_99.f_58[118])
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
	
	if (unk_0xC45A34912542C4EB(iParam0, 0))
	{
		func_43(uParam1);
		uParam1->f_66 = unk_0x1B2DC87EFB36DF80(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xC2421167AF5744AC(iParam0), 16);
		*uParam1 = unk_0x0FD17058EC3E1147(iParam0);
		unk_0x95C00B12C5FCA494(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0xCFEF2B49C7ED1A18(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x8062A8ED0C7F4651(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0x71D4F790860F6A5A(iParam0);
		uParam1->f_67 = unk_0x90DC8CCD4852ECAA(iParam0);
		uParam1->f_69 = unk_0x31211750BC54126F(iParam0);
		uParam1->f_70 = unk_0xF222368EEA38E69D(iParam0);
		unk_0xCCD9F17DFC40BAE7(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x7C2F17D7A0663F15(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x2C876F34337848DC(iParam0, 2))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 28);
		}
		if (unk_0x2C876F34337848DC(iParam0, 3))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 29);
		}
		if (unk_0x2C876F34337848DC(iParam0, 0))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 30);
		}
		if (unk_0x2C876F34337848DC(iParam0, 1))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x657F8DC28088EB36(iParam0, 0))
		{
			uParam1->f_68 = unk_0x96616C6B22C7747D(iParam0);
		}
		if (unk_0xD1C57B32C6DE7BB6(uParam1->f_66))
		{
			if (unk_0x852BA91F4F2922FF(iParam0))
			{
				switch (unk_0x97AE2442D106D426(iParam0))
				{
					case 2:
					case 0:
						unk_0x73817D396768E4C6(&(uParam1->f_77), 23);
						unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 22);
						break;
					
					case 3:
					case 1:
						unk_0x73817D396768E4C6(&(uParam1->f_77), 23);
						unk_0x73817D396768E4C6(&(uParam1->f_77), 22);
						break;
					
					case 4:
						unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x54AAF075A06F73AA(iParam0))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 9);
		}
		if (unk_0xB1748D5D7F598D5E(iParam0))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 10);
		}
		if (unk_0x22929DCF418D8AAF(iParam0))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 13);
			unk_0x6A5331108E27160A(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x3781B3A8FED51121(iParam0))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 12);
		}
		func_42(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xDF705551345526F6(iParam0, iVar0 + 1))
			{
				unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), func_41(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x43CA43F21BD77772(iParam0, 0))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x73817D396768E4C6(&(uParam1->f_77), 11);
		}
		if (unk_0xB7AFC499DA70400A(iParam0, "IgnoredByQuickSave") && unk_0x4A36D1C22F217975(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x73817D396768E4C6(&(uParam1->f_77), 27);
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
	
	if (!unk_0xC45A34912542C4EB(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xA9D3956F42AEC644(*iParam0) == 0)
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
			if (unk_0x44EF52A7698B3306(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x1C8AF615CFEF2FE5(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xB4686A5F9149447D(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xB4686A5F9149447D(*iParam0, iVar0);
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
	
	if (unk_0xD51CFE69539DB6D8(iParam0))
	{
		if (!unk_0xAF437D7C802AB246(iParam0))
		{
			if (iParam0 == unk_0xE7869D5D7816A9B6())
			{
				*uParam1 = unk_0xA0B1717D806F4901();
			}
			else
			{
				*uParam1 = unk_0xF0295FF51F2D7803(iParam0, 1);
			}
			if (unk_0xD51CFE69539DB6D8(*uParam1))
			{
				if (unk_0xC45A34912542C4EB(*uParam1, 0))
				{
					if (iParam2 == 0 || unk_0xF18329472591CFE6(unk_0x1141852D07400777(*uParam1, 1), unk_0x1141852D07400777(iParam0, 1), 1) < 100f)
					{
						if (unk_0x7579897B912B3328(*uParam1, joaat("taxi")))
						{
							if (unk_0xBD6B21D725712BDE(*uParam1, -1) != iParam0 && unk_0xBD6B21D725712BDE(*uParam1, -1) != 0)
							{
								return 0;
							}
						}
						if (func_45(*uParam1, func_207(), 1))
						{
							sVar0 = unk_0x959E7FA37C0D0892();
							if (!unk_0x04E7E853E31F41A3(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!unk_0x51374A0BB2871E6E(iParam0, 1))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (unk_0xB7AFC499DA70400A(*uParam1, "IgnoredByQuickSave"))
							{
								if (unk_0x4A36D1C22F217975(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (unk_0x7579897B912B3328(*uParam1, joaat("blimp")))
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
	
	if (!unk_0xD51CFE69539DB6D8(iParam0) || !unk_0xC45A34912542C4EB(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_46(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0xB519E5386FBF69E5(Global_99155.f_5843[iVar9], 0))
		{
			if (unk_0x56C8E476471194F1(&sVar1, iParam0))
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
	
	if (unk_0xD51CFE69539DB6D8(iParam0))
	{
		iVar1 = unk_0x1B2DC87EFB36DF80(iParam0);
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
		return Global_99155.f_32499[iParam0 /*29*/];
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
	
	if (!unk_0xAF437D7C802AB246(iParam0))
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
			uParam1->f_59 = Global_99155.f_1750.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_99155.f_1750.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_99155.f_1750.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_99155.f_1750.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_99155.f_1750.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_99155.f_1750.f_539[iVar0 /*65*/].f_64;
		}
		else if (unk_0x00AAD79B42B3E036() && unk_0x1B2DC87EFB36DF80(iParam0) == unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()))
		{
			if (func_53(161, -1))
			{
				uParam1->f_59 = func_50(2040, Global_69095, 0);
			}
			else
			{
				uParam1->f_59 = func_50(742, Global_69095, 0);
			}
			uParam1->f_60 = func_50(743, Global_69095, 0);
			uParam1->f_61 = func_50(744, Global_69095, 0);
		}
		if (unk_0x00AAD79B42B3E036() && iParam0 == unk_0xE7869D5D7816A9B6())
		{
			if (func_53(161, -1))
			{
				uParam1->f_59 = func_50(2040, Global_69095, 0);
			}
			else
			{
				uParam1->f_59 = func_50(742, Global_69095, 0);
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
	uVar0 = Global_2466310[iParam0 /*5*/][func_51(iParam1)];
	if (unk_0x56DCF5665F92F9BD(uVar0, &uVar1, -1))
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
			Global_2466023 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2466023 = 1;
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
	
	uVar0 = Global_2486042[iParam0 /*5*/][func_51(iParam1)];
	if (unk_0xA1B21B1D84085DB0(uVar0, &uVar1, -1))
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
		*uParam2 = unk_0x83058EDD668C4856(iParam0, iParam1);
		*uParam3 = unk_0x377FCFBE04F73608(iParam0, iParam1);
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
				if (unk_0xAD7645F387EFDC15(iParam0) && unk_0x0B3E0BA36394B459(iParam0) != -1)
				{
					*uParam2 = unk_0x0B3E0BA36394B459(iParam0);
					*uParam3 = unk_0x4F862D22CA6059E9(iParam0);
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
		*uParam2 = unk_0x0CBEED266436AEFF(iParam0, iParam1);
		*uParam3 = unk_0xB9111DA78E2971F6(iParam0, iParam1);
		*uParam4 = unk_0x5B56B32E043336F7(iParam0, iParam1);
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
	return Global_99155.f_1750.f_539.f_3549;
}

void func_57()
{
	int iVar0;
	
	if (unk_0xD51CFE69539DB6D8(unk_0xE7869D5D7816A9B6()))
	{
		if (func_48(Global_99155.f_1750.f_539.f_3549) != unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()))
		{
			iVar0 = func_47(unk_0xE7869D5D7816A9B6());
			if (func_39(iVar0) && (!func_58(14) || Global_98107))
			{
				if (Global_99155.f_1750.f_539.f_3549 != iVar0 && func_39(Global_99155.f_1750.f_539.f_3549))
				{
					Global_99155.f_1750.f_539.f_3550 = Global_99155.f_1750.f_539.f_3549;
				}
				Global_99155.f_1750.f_539.f_3551 = iVar0;
				Global_99155.f_1750.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_99155.f_1750.f_539.f_3549 != 145)
			{
				Global_99155.f_1750.f_539.f_3551 = Global_99155.f_1750.f_539.f_3549;
			}
			return;
		}
	}
	Global_99155.f_1750.f_539.f_3549 = 145;
}

bool func_58(int iParam0)
{
	return Global_35619 == iParam0;
}

void func_59(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = func_47(iParam0);
	if (func_39(iVar0) && !unk_0xAF437D7C802AB246(iParam0))
	{
		if (iParam0 == unk_0xE7869D5D7816A9B6())
		{
			func_60(iParam0, &(Global_99155.f_1750.f_539.f_298[iVar0 /*284*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_99155.f_1750.f_539.f_1151[iVar2 /*4*/][iVar0] = unk_0x3E9A9913C8317DB2(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0x32C7968FD411D702();
					if (Global_99155.f_1750.f_539.f_1151[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_99155.f_1750.f_539.f_1184 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0xC4EFB6A96FD4EFD7(unk_0x3F80C6638E3A1A90(), &uVar3);
			if (iVar0 == 0)
			{
				unk_0x39DEDCCD70293F58(joaat("sp0_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 1)
			{
				unk_0x39DEDCCD70293F58(joaat("sp1_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 2)
			{
				unk_0x39DEDCCD70293F58(joaat("sp2_parachute_current_tint"), uVar3, 1);
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
	
	if (!unk_0xAF437D7C802AB246(iParam0))
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
				Var4.f_0 = unk_0x08B9ED9EC2BBF5E8(iParam0, func_64(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				if (Var4.f_0 != 0 && Var4.f_0 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = unk_0x4B88462744233B66(iParam0, Var4.f_0);
					if (Var4.f_0 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					unk_0x9956FB0E4B50ECB8(&(Var4.f_2), (20 + unk_0x59E70E8146E8C2AB(iParam0, Var4.f_0)));
					if (Var4.f_1 == -1)
					{
						if (!unk_0x34AED71D17A91BDF(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*3*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_62(Var4.f_0, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0xA5DA14627B3BFA44(iParam0, Var4.f_0, iVar2))
						{
							unk_0x9956FB0E4B50ECB8(&(Var4.f_2), iVar1);
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
		iVar8 = unk_0xEBEB71E208C23D76();
		iVar7 = 0;
		while (iVar7 < iVar8)
		{
			if ((unk_0x74CFE4255BC4FBF3(iVar7, &Var9) && !func_61(Var9.f_1)) && iVar70 < 50)
			{
				if (!unk_0xCA0E36ABF4510784(Var9.f_0))
				{
					Var4.f_0 = Var9.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_1 = unk_0x4B88462744233B66(iParam0, Var4.f_0);
					if (unk_0xFB3EFA6765C8A823(iParam0, Var4.f_0, 0))
					{
						unk_0x9956FB0E4B50ECB8(&(Var4.f_2), (20 + unk_0x59E70E8146E8C2AB(iParam0, Var4.f_0)));
					}
					else
					{
						unk_0x9956FB0E4B50ECB8(&(Var4.f_2), 20);
					}
					if (Var4.f_1 == -1)
					{
						if (!unk_0x34AED71D17A91BDF(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_133[iVar70 /*3*/].f_1 = Var4.f_1;
					iVar1 = 0;
					while (iVar1 < unk_0x8D57B92B1C3958E6(iVar7))
					{
						if (unk_0x71E17ACF157ADB35(iVar7, iVar1, &Var48))
						{
							if (unk_0xA5DA14627B3BFA44(iParam0, Var4.f_0, Var48.f_3))
							{
								unk_0x9956FB0E4B50ECB8(&(Var4.f_2), iVar1);
							}
						}
						iVar1++;
					}
				}
				if (Var4.f_0 != 0)
				{
					if (!unk_0xFB3EFA6765C8A823(iParam0, Var4.f_0, 0))
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
	if (unk_0x00AAD79B42B3E036())
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
					if (iParam1 < unk_0x8D57B92B1C3958E6(iVar1))
					{
						if (unk_0x71E17ACF157ADB35(iVar1, iParam1, &Var41))
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
	
	iVar1 = unk_0xEBEB71E208C23D76();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0x74CFE4255BC4FBF3(iVar0, uParam1))
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
	if (func_39(iVar0) && !unk_0xAF437D7C802AB246(iParam0))
	{
		Global_99155.f_1750.f_539.f_294[iVar0] = unk_0xCF6C3B9035370727(iParam0);
	}
}

void func_66(var uParam0, int iParam1)
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	int iVar5;
	
	*uParam0 = { unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1) };
	uParam0->f_3 = unk_0x2CAFFCD9F5E16D2F(unk_0xE7869D5D7816A9B6());
	uParam0->f_5 = unk_0x3CDEA125E379201E(unk_0xE7869D5D7816A9B6());
	if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
	{
		uParam0->f_4 = unk_0x44B59DB1458EE8E0(unk_0x3F80C6638E3A1A90());
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
	else if (unk_0xFF6891E21E7FC193(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (unk_0xB519E5386FBF69E5(Global_69484, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (unk_0xB519E5386FBF69E5(Global_69484, 5))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (unk_0xB519E5386FBF69E5(Global_69484, 6))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (unk_0xB519E5386FBF69E5(Global_69484, 7))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (unk_0xB034B5B185BD9C69(unk_0xE7869D5D7816A9B6()) == unk_0x41D9D981197E60A2(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, 1, 0) || unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, 1, 0))
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
		else if (unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0))
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
		else if (unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, 1, 0))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, 1, 0))
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
	
	if (!unk_0x0EDE95A6D2634A75(Param0))
	{
		iVar0 = unk_0x41D9D981197E60A2(Param4, sParam3);
		if (!unk_0x4443D8D533ACB547(iVar0))
		{
			return 0;
		}
		iVar1 = unk_0x1F8C689B25A0EC84(Param0);
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
	if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()) && !unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
	{
		if (func_80())
		{
			*uParam0 = func_76(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 0), 5, -1, 0, 1, -1);
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
		return unk_0xB519E5386FBF69E5(Global_91077.f_1286[iParam0], iParam1);
	}
	else if (unk_0x00AAD79B42B3E036())
	{
		if (func_74() == 0)
		{
			return unk_0xB519E5386FBF69E5(func_50(func_73(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xB519E5386FBF69E5(Global_99155.f_668[iParam0], iParam1);
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
			return 3640;
			break;
		
		default:
			break;
	}
	return 3717;
}

int func_74()
{
	return Global_25034;
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
				fVar1 = unk_0xF18329472591CFE6(Param0, func_77(iVar0, 0), 1);
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
	return Global_91077.f_296 > 0;
}

var func_81()
{
	var uVar0;
	
	func_91(&uVar0, unk_0x0CE219089BDB83C5());
	func_90(&uVar0, unk_0x1B24A2CA27443F7B());
	func_89(&uVar0, unk_0x7C833E3C6EEE41E0());
	func_84(&uVar0, unk_0x2DA3502053F9E535());
	func_83(&uVar0, unk_0xEB4EA596232DA76E());
	func_82(&uVar0, unk_0xB99227ECC84A576C());
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
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_87(unk_0xB519E5386FBF69E5(iParam0, 31), -1, 1)) + 2011;
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
	
	if (unk_0xA4844394CE04D85D() || unk_0xFD563D1BF81A2CB8())
	{
		uVar0 = iParam0;
		unk_0x52D7AD2E007B9DFC(9, &uVar0, 1, 1);
	}
	else if (unk_0x26A43F8C0E764E33() || unk_0x7ECD3D8283875DD1())
	{
		StringCopy(&cVar1, "SPRC_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x492EDD75C56D6606(9, &cVar1);
	}
}

void func_93(char* sParam0, var uParam1, int iParam2)
{
	if (!unk_0xF6917DE0E003509D(&Global_88428))
	{
		unk_0x733FF20A35E9C990(&Global_88428, 0, 0, 0, 1, 0);
		StringCopy(&Global_88428, "", 64);
	}
	StringCopy(&Global_88428, sParam0, 64);
	unk_0x75618AE92F45E20F(sParam0, uParam1, iParam2, func_197(0));
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
		if (!unk_0xF6917DE0E003509D(&(uParam0->f_9)))
		{
			func_118(1);
			func_116(uParam0, 1, func_117(*uParam0));
		}
		if (uParam0->f_27)
		{
			if (func_115(*uParam0))
			{
				while (!unk_0xD33337101FE7D2FE(unk_0xE7869D5D7816A9B6()))
				{
					func_174();
					unk_0x4EDE34FBADD967A6(0);
				}
			}
		}
		func_99(*uParam0);
		iVar0 = unk_0xB8BA7F44DF1575E1(&(uParam0->f_1), uParam0, 61, 17000);
		unk_0x307B32C17692E50D(&(uParam0->f_1));
		if (unk_0x3CBB06ED9434F6B3())
		{
			func_295("Initial cutscene loaded and passing to RC mission.");
			unk_0x3C4A820866042E01(iVar0);
		}
		else
		{
			func_295("Initial cutscene wasn't loaded in time to pass to RC mission.");
			unk_0x9F13924F68008214();
		}
		return 1;
	}
	return 0;
}

void func_99(int iParam0)
{
	struct<2> Var0;
	
	func_114();
	if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
	{
		unk_0x1C26C4B0DAB91B21(unk_0xE7869D5D7816A9B6(), 32, 0);
		unk_0x1C26C4B0DAB91B21(unk_0xE7869D5D7816A9B6(), 250, 0);
	}
	if (func_113(iParam0))
	{
		unk_0x60F73C5C71B102FE(unk_0xE7869D5D7816A9B6(), 0);
	}
	unk_0x7CBBF6C9E2EED3EA(unk_0x3F80C6638E3A1A90(), 1);
	unk_0x3A2938D665EA8A9E(0, 1);
	unk_0x3A2938D665EA8A9E(3, 1);
	unk_0x3A2938D665EA8A9E(2, 1);
	if (Global_36669 == 1)
	{
		if (func_111(unk_0xE7869D5D7816A9B6()))
		{
			func_102(unk_0xE7869D5D7816A9B6());
		}
	}
	if (!func_188())
	{
		if (iParam0 < 63)
		{
			func_100(iParam0);
			Var0 = { func_12(iParam0) };
			unk_0xFB04AECD5A11A220(1, &Var0);
		}
	}
}

void func_100(int iParam0)
{
	if (iParam0 < 63)
	{
		func_101();
		Global_69491 = iParam0;
		Global_69490 = 0;
		Global_69493 = 7;
	}
}

void func_101()
{
	if (Global_69490 != 6)
	{
	}
	if (Global_69495)
	{
		unk_0x4A819C86009EE6EC(15);
		Global_69495 = 0;
		Global_17257.f_7776 = 0;
	}
	Global_69490 = 6;
	Global_69492 = -1;
	Global_69491 = -1;
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
	if (!unk_0xD51CFE69539DB6D8(iParam0))
	{
		return;
	}
	iVar0 = func_110(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_36472[iVar0 /*5*/];
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
	if (!Global_36446[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_36446[iParam0 /*5*/].f_1 == unk_0xE7869D5D7816A9B6())
		{
			Global_36667 = 0;
		}
	}
	Global_36446[iParam0 /*5*/] = 13;
	Global_36446[iParam0 /*5*/].f_1 = 0;
	Global_36446[iParam0 /*5*/].f_2 = 0;
	Global_36446[iParam0 /*5*/].f_3 = 0;
	Global_36446[iParam0 /*5*/].f_4 = 0;
	Global_36445 = (Global_36445 - 1);
	if (Global_36445 < 0)
	{
		Global_36445 = 0;
	}
}

int func_104(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_36446[iVar0 /*5*/].f_1 == iParam0)
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
	Global_36553[iVar0 /*5*/] = iParam0;
	Global_36553[iVar0 /*5*/].f_1 = iParam1;
	Global_36553[iVar0 /*5*/].f_2 = iParam2;
	Global_36553[iVar0 /*5*/].f_3 = iParam3;
	Global_36553[iVar0 /*5*/].f_4 = iParam4;
}

int func_107()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36553[iVar0 /*5*/].f_2 == 6)
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
		if (iParam2 == Global_36553[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_36553[iVar0 /*5*/])
			{
				if (iParam1 == Global_36553[iVar0 /*5*/].f_1)
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
		if (!Global_36472[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_36472[iVar0 /*5*/].f_1)
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
		if (!unk_0xAF437D7C802AB246(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_112(int iParam0)
{
	if (unk_0xD51CFE69539DB6D8(iParam0))
	{
		if (!unk_0x76B2D234F1895632(iParam0))
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
	unk_0x73817D396768E4C6(&Global_2283, 25);
	unk_0x9956FB0E4B50ECB8(&Global_2284, 11);
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
			unk_0xD39141689169EF06(uParam0->f_28[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_112(uParam0->f_35[iVar0]))
		{
			unk_0xD39141689169EF06(uParam0->f_35[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_112(uParam0->f_41[iVar0]))
		{
			unk_0xD39141689169EF06(uParam0->f_41[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		}
		iVar0++;
	}
	if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
	{
		unk_0xD39141689169EF06(unk_0xE7869D5D7816A9B6(), iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		unk_0x2EF7A8CB89D363F6(unk_0xE7869D5D7816A9B6(), iParam1);
		if (bParam2)
		{
			unk_0x36EE5CBF45EC4826(unk_0xE7869D5D7816A9B6(), joaat("weapon_unarmed"), 1);
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
	
	uVar0 = unk_0xBFAE5F9DEC53DAE2();
	if (!unk_0x9A3F18713F55FCC4(uVar0))
	{
		if (bParam0)
		{
		}
		unk_0x8FE59DE2329CBE64(uVar0, bParam0, 16);
		unk_0x8FE59DE2329CBE64(uVar0, bParam0, 32);
	}
	func_119(1, 1, 0, 0);
}

void func_119(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0xB14E3E3C57569BDB(unk_0x3F80C6638E3A1A90());
		unk_0x7CBBF6C9E2EED3EA(unk_0x3F80C6638E3A1A90(), 1);
		unk_0x30584A18ECB7ED72(unk_0x3F80C6638E3A1A90(), 1);
		func_126(1);
		unk_0x86F04B1FEFFA59AF();
		unk_0x7D5D106C0BC41E4F();
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xD6F17BA188A65E8F())
			{
				unk_0xDA09A6E60FE9645E(0);
			}
			if (!func_125())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_124(1, iParam3, iParam2, 0);
		Global_55584 = 1;
		Global_67890 = 1;
		Global_69234 = 1;
	}
	else
	{
		func_126(0);
		unk_0x77B6DFDC1F6D6D54();
		Global_55584 = 0;
		if (bParam1)
		{
			unk_0xDD8068D05776246D();
		}
		unk_0x7CBBF6C9E2EED3EA(unk_0x3F80C6638E3A1A90(), 0);
		unk_0x30584A18ECB7ED72(unk_0x3F80C6638E3A1A90(), 0);
		func_124(0, iParam3, iParam2, 0);
		if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()) && !func_120(unk_0x3F80C6638E3A1A90()))
		{
			unk_0x2EF7A8CB89D363F6(unk_0xE7869D5D7816A9B6(), 0);
		}
		Global_69234 = 0;
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
		if (iParam0 == unk_0x3F80C6638E3A1A90())
		{
			return 1;
		}
	}
	if (unk_0xB519E5386FBF69E5(Global_2416794[iParam0 /*303*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_121()
{
	return unk_0xB519E5386FBF69E5(Global_2359301, 3);
}

bool func_122(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x3F80C6638E3A1A90())
	{
		bVar0 = func_123(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1586079[iParam0 /*408*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xD18C3CF631455087(iParam0))
		{
			bVar0 = unk_0x2CC717AC6CF51F8F(iParam0) == 8;
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
	if (Global_1315887[iVar1] == 1)
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
	if (unk_0xA78EA29AC2FFBADE())
	{
		if (unk_0xE5021B3C1EC84FDE() != iParam0 && uParam2)
		{
			unk_0xA0DB703A9F74EAE8(iParam0, uParam1, 1, iParam3);
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
		unk_0x9956FB0E4B50ECB8(&Global_2283, 13);
	}
	else
	{
		unk_0x73817D396768E4C6(&Global_2283, 13);
	}
}

int func_127(char* sParam0)
{
	if (!unk_0xF6917DE0E003509D(uParam0))
	{
		unk_0x5BA7CCA84A74BEA3(uParam0);
		while (!unk_0xD51489677E1B0844(sParam0))
		{
			unk_0x5BA7CCA84A74BEA3(sParam0);
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
	unk_0xACA77D3E6C847C83();
	Global_16723 = 0;
	if ((unk_0xD6F17BA188A65E8F() || Global_14413.f_1 == 9) || Global_14412 == 1)
	{
		unk_0xDA09A6E60FE9645E(0);
		Global_15712 = 6;
		Global_14413.f_1 = 3;
		return;
	}
	if (unk_0xF0A330A29F97AA7E())
	{
		unk_0xDA09A6E60FE9645E(1);
		Global_15712 = 6;
		return;
	}
}

int func_130()
{
	if (Global_15712 != 0 || unk_0xF0A330A29F97AA7E())
	{
		return 1;
	}
	return 0;
}

int func_131(var uParam0, bool bParam1)
{
	struct<27> Var0;
	
	if (Global_69236)
	{
		func_295("IS_RC_FINE_AND_IN_RANGE(): The game is running Multiplayer [TERMINATING]");
		return 0;
	}
	func_95(*uParam0, &Var0);
	if ((func_173(*uParam0) || func_171(*uParam0)) || Global_69481 == 1)
	{
		return 1;
	}
	if (!unk_0x18544C93469391DA())
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
			if (!unk_0x3761EA7F8628B81A(uParam0->f_35[0], Var0.f_6, 8f, 8f, 8f, 0, 1, 0))
			{
				return 0;
			}
		}
	}
	if (*uParam0 == 10)
	{
		if (unk_0x048B85C1B162DC5D(-1, uParam0->f_17[0 /*3*/], 8f))
		{
			func_295("IS_RC_FINE_AND_IN_RANGE(): Explosion near mission trigger [TERMINATING]");
			return 0;
		}
	}
	if (Var0.f_4 != 17)
	{
		if (!unk_0xB519E5386FBF69E5(Var0.f_26, func_207()))
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
					if (unk_0x2917D5E1CB5CE43A(*uParam1))
					{
						unk_0xDE31B2587775EDAD(iParam0);
						if (iParam2 != 21)
						{
							if (func_69(uParam1->f_5, 0f, 0f, 0f, 0))
							{
								unk_0xDCF460AE46C9489C(iParam0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
							}
							else
							{
								unk_0x94026C1D1DB14225(&uVar0);
								if (func_134(uParam1))
								{
									unk_0xCECFBDAE08977579(0, *uParam1, uParam1->f_2, uParam1->f_5, uParam1->f_8, 1000f, -8f, -1, 262152, 0, 2, 0);
								}
								else
								{
									unk_0xCECFBDAE08977579(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 1000f, -8f, -1, 262152, 0, 2, 0);
								}
								unk_0xCECFBDAE08977579(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 0);
								unk_0x911ECBCE73F8EC3F(uVar0);
								unk_0xC2C4A3A9FF2FBFFF(iParam0, uVar0);
								unk_0x33A90AD8FA327B72(&uVar0);
							}
						}
						else
						{
							unk_0xCECFBDAE08977579(iParam0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 3);
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
				if (!func_134(uParam1) || !unk_0x23417CDB252083F9(iParam0, *uParam1, uParam1->f_2, 3))
				{
					if (func_133(iParam2) && !unk_0xFA68268DB708808B(iParam0, unk_0xE7869D5D7816A9B6(), 25f))
					{
						unk_0x58F62EDF6111D598(iParam0, unk_0xE7869D5D7816A9B6(), 0);
						uParam1->f_3 = 5;
					}
					else if ((func_134(uParam1) && uParam1->f_4 == 0) && unk_0xF18329472591CFE6(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), unk_0x1141852D07400777(iParam0, 1), 1) < 20f)
					{
						uParam1->f_3 = 3;
					}
				}
				break;
			
			case 3:
				unk_0x94026C1D1DB14225(&uVar1);
				if (func_69(uParam1->f_5, 0f, 0f, 0f, 0))
				{
					unk_0xDCF460AE46C9489C(0, *uParam1, uParam1->f_2, 4f, -4f, -1, 262144, 0, 0, 0, 0);
					unk_0xDCF460AE46C9489C(0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
				}
				else
				{
					unk_0xCECFBDAE08977579(0, *uParam1, uParam1->f_2, uParam1->f_5, uParam1->f_8, 4f, -4f, -1, 262152, 0, 2, 0);
					unk_0xCECFBDAE08977579(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 0);
				}
				unk_0x911ECBCE73F8EC3F(uVar1);
				unk_0xC2C4A3A9FF2FBFFF(iParam0, uVar1);
				unk_0x33A90AD8FA327B72(&uVar1);
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
				if (!func_133(iParam2) || unk_0xFA68268DB708808B(iParam0, unk_0xE7869D5D7816A9B6(), 10f))
				{
					if (func_69(uParam1->f_5, 0f, 0f, 0f, 0))
					{
						unk_0xDCF460AE46C9489C(iParam0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
					}
					else
					{
						unk_0xCECFBDAE08977579(iParam0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 0);
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
	if (unk_0xF6917DE0E003509D(uParam0->f_2))
	{
		return 0;
	}
	return 1;
}

int func_135(var uParam0)
{
	if (unk_0xF6917DE0E003509D(*uParam0) || unk_0xF6917DE0E003509D(uParam0->f_1))
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
	if (func_112(unk_0xE7869D5D7816A9B6()))
	{
		iVar0 = 0;
		while (iVar0 <= (uParam0->f_28 - 1))
		{
			if (func_111(uParam0->f_28[iVar0]))
			{
				if (!unk_0x51374A0BB2871E6E(uParam0->f_28[iVar0], 0))
				{
					unk_0x70EE8EFEE355AD29(uParam0->f_28[iVar0], 1, 0);
					unk_0x2878EC06B3F897A0(uParam0->f_28[0], 0);
				}
				unk_0x8D6671D78D1F569B(uParam0->f_28[iVar0], 1);
				if (*uParam0 == 34)
				{
					if (func_112(uParam0->f_41[0]))
					{
						unk_0x70EE8EFEE355AD29(uParam0->f_41[0], 1, 0);
						unk_0x2878EC06B3F897A0(uParam0->f_41[0], 0);
					}
				}
				switch (*uParam0)
				{
					case 19:
						func_162(uParam0->f_28[iVar0]);
						break;
					
					case 8:
						unk_0x2B0BB514F9140141("rcmcollect_paperleadinout@");
						while (!unk_0x2917D5E1CB5CE43A("rcmcollect_paperleadinout@"))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						unk_0x94026C1D1DB14225(&uVar1);
						unk_0xDCF460AE46C9489C(0, "rcmcollect_paperleadinout@", "meditate_getup", 8f, -8f, -1, 8, 0, 0, 0, 0);
						unk_0x4B79E06845D63B96(0, unk_0xE7869D5D7816A9B6(), 10000f, -1, 0, 0);
						unk_0x911ECBCE73F8EC3F(uVar1);
						unk_0xC2C4A3A9FF2FBFFF(uParam0->f_28[iVar0], uVar1);
						unk_0x33A90AD8FA327B72(&uVar1);
						break;
					
					case 0:
					case 1:
						unk_0x2B0BB514F9140141("rcmabigail");
						while (!unk_0x2917D5E1CB5CE43A("rcmabigail"))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						unk_0x94026C1D1DB14225(&uVar1);
						unk_0xDCF460AE46C9489C(0, "rcmabigail", "breakout_base", 8f, -8f, -1, 8, 0, 0, 0, 0);
						unk_0x4B79E06845D63B96(0, unk_0xE7869D5D7816A9B6(), 10000f, -1, 0, 0);
						unk_0x911ECBCE73F8EC3F(uVar1);
						unk_0xC2C4A3A9FF2FBFFF(uParam0->f_28[iVar0], uVar1);
						unk_0x33A90AD8FA327B72(&uVar1);
						break;
					
					case 32:
						unk_0x2B0BB514F9140141("rcmminute1");
						while (!unk_0x2917D5E1CB5CE43A("rcmminute1"))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						unk_0x94026C1D1DB14225(&uVar1);
						if (iVar0 == 0)
						{
							unk_0xDCF460AE46C9489C(0, "rcmminute1", "base_to_idle_joe", 8f, -8f, -1, 32776, 0, 0, 0, 0);
						}
						else
						{
							unk_0xDCF460AE46C9489C(0, "rcmminute1", "base_to_idle_josef", 8f, -8f, -1, 32776, 0, 0, 0, 0);
						}
						unk_0x4B79E06845D63B96(0, unk_0xE7869D5D7816A9B6(), 10000f, -1, 0, 0);
						unk_0x911ECBCE73F8EC3F(uVar1);
						unk_0xC2C4A3A9FF2FBFFF(uParam0->f_28[iVar0], uVar1);
						unk_0x33A90AD8FA327B72(&uVar1);
						break;
					
					case 24:
						unk_0x2B0BB514F9140141("special_ped@hao@base");
						while (!unk_0x2917D5E1CB5CE43A("special_ped@hao@base"))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						unk_0x94026C1D1DB14225(&uVar1);
						unk_0xDCF460AE46C9489C(0, "special_ped@hao@base", "hao_exit", 8f, -8f, -1, 520, 0, 0, 0, 0);
						unk_0x4B79E06845D63B96(0, unk_0xE7869D5D7816A9B6(), 10000f, -1, 0, 0);
						unk_0x911ECBCE73F8EC3F(uVar1);
						unk_0xC2C4A3A9FF2FBFFF(uParam0->f_28[iVar0], uVar1);
						unk_0x33A90AD8FA327B72(&uVar1);
						break;
					
					default:
						unk_0xAA6742AEFA0B2BC4(uParam0->f_28[iVar0]);
						unk_0x4B79E06845D63B96(uParam0->f_28[iVar0], unk_0xE7869D5D7816A9B6(), 10000f, -1, 0, 0);
						break;
					}
			}
			iVar0++;
		}
	}
}

void func_137(var uParam0)
{
	if (unk_0xD51CFE69539DB6D8(*uParam0))
	{
		if (unk_0x74A345D6EBF02AD7(*uParam0))
		{
			unk_0x27B54A887EC71B05(*uParam0, 1, 1);
		}
		unk_0xD4E454973E16D31B(uParam0);
	}
}

void func_138(var uParam0)
{
	int iVar0;
	
	if (func_112(unk_0xE7869D5D7816A9B6()))
	{
		iVar0 = 0;
		while (iVar0 <= (uParam0->f_28 - 1))
		{
			if (func_111(uParam0->f_28[iVar0]))
			{
				unk_0x7E3DC7ED30B648F0(uParam0->f_28[iVar0], 1, 0);
				unk_0x9BEE7E791BC4D38B(uParam0->f_28[iVar0], 0);
				unk_0x8D6671D78D1F569B(uParam0->f_28[iVar0], 1);
				unk_0x13C351F151D49F89(uParam0->f_28[iVar0], unk_0xE7869D5D7816A9B6(), 0, 16);
				unk_0x506D42CB68AE4EA5(&(uParam0->f_28[iVar0]));
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
	if (func_111(unk_0xE7869D5D7816A9B6()))
	{
		iVar0 = 0;
		while (iVar0 <= iVar1)
		{
			if (unk_0xD51CFE69539DB6D8(uParam0->f_35[iVar0]))
			{
				if (unk_0x76B2D234F1895632(uParam0->f_35[iVar0]))
				{
					func_295("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is dead [TERMINATING]");
					return 0;
				}
				if (!unk_0xC45A34912542C4EB(uParam0->f_35[iVar0], 0))
				{
					func_295("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is not driveable [TERMINATING]");
					return 0;
				}
				if (unk_0x915685CA559C211B(uParam0->f_35[iVar0], unk_0xE7869D5D7816A9B6(), 0))
				{
					func_295("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has been damaged by player [TERMINATING]");
					return 0;
				}
				if (unk_0x8219941CC4732B36(uParam0->f_35[iVar0]) < 850)
				{
					func_295("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle health is less than 850 [TERMINATING]");
					return 0;
				}
				if (bParam2)
				{
					if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
					{
						if (unk_0x3C1B1C07A878AE1D(uParam0->f_35[iVar0], unk_0xE7869D5D7816A9B6()) && unk_0xD4F0FC8FFEDE152B(unk_0xE7869D5D7816A9B6()) > 5f)
						{
							func_295("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has collided with the player vehicle at speed [TERMINATING]");
							return 0;
						}
						uVar2 = unk_0xA0B1717D806F4901();
						if (func_141(uVar2))
						{
							if (unk_0x1B2DC87EFB36DF80(uVar2) == joaat("towtruck") || unk_0x1B2DC87EFB36DF80(iVar2) == joaat("towtruck2"))
							{
								if (func_141(uParam0->f_35[iVar0]))
								{
									if (unk_0x3E29DD6D10980B6B(iVar2, uParam0->f_35[iVar0]))
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
						iVar3 = unk_0xA0B1717D806F4901();
						if (func_141(iVar3))
						{
							if (unk_0x3C1B1C07A878AE1D(uParam0->f_35[iVar0], iVar3) && unk_0xD4F0FC8FFEDE152B(iVar3) > 6f)
							{
								func_295("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has collided with the player's last known vehicle at speed (player bailed out?) [TERMINATING]");
								return 0;
							}
						}
						if (*uParam0 == 16)
						{
							if (func_140(unk_0xE7869D5D7816A9B6(), uParam0->f_35[iVar0]))
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
	
	if (!unk_0xAF437D7C802AB246(iParam0))
	{
		if (unk_0xC45A34912542C4EB(iParam1, 0))
		{
			iVar0 = unk_0x03291915DC767232(iParam0);
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
		if (unk_0xC45A34912542C4EB(uParam0, 0))
		{
			if (!unk_0x9DD85FBDD5BC3BF1(iParam0))
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
	if (func_111(unk_0xE7869D5D7816A9B6()))
	{
		iVar0 = 0;
		while (iVar0 <= iVar1)
		{
			if (unk_0xD51CFE69539DB6D8(uParam0->f_28[iVar0]))
			{
				if (!unk_0xAF437D7C802AB246(uParam0->f_28[iVar0]))
				{
					if (unk_0x471E33531AEA977D(unk_0xE7869D5D7816A9B6()))
					{
						if (unk_0x3C1B1C07A878AE1D(unk_0xE7869D5D7816A9B6(), uParam0->f_28[iVar0]))
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
					if ((unk_0xBE39A9E9E0D434A6(uParam0->f_28[iVar0]) || unk_0x3B2CF3CC08ABF68C(uParam0->f_28[iVar0])) || unk_0x266A805ED6E2979C(uParam0->f_28[iVar0]))
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
					if (unk_0x8E2CF6ACCED3BD0F(uParam0->f_28[iVar0]))
					{
						if (unk_0x0E6C083BC5101C8B(uParam0->f_28[iVar0], unk_0xE7869D5D7816A9B6(), 3f, 3f, 3f, 0, 1, 0))
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
						if (unk_0x048B85C1B162DC5D(-1, unk_0x1141852D07400777(uParam0->f_28[iVar0], 1), 15f))
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
						if (unk_0x048B85C1B162DC5D(-1, unk_0x1141852D07400777(uParam0->f_28[iVar0], 1), 5f))
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
						if (unk_0x44B59DB1458EE8E0(unk_0x3F80C6638E3A1A90()) > 0)
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
							unk_0x70EE8EFEE355AD29(uParam0->f_41[0], 1, 0);
							unk_0x2878EC06B3F897A0(uParam0->f_41[0], 0);
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
	
	if (func_112(unk_0xE7869D5D7816A9B6()) && func_112(iParam0))
	{
		if (func_155(iParam0) || unk_0x386C3192F791D414(unk_0x3F80C6638E3A1A90(), iParam0))
		{
			if (unk_0x72957E5DA83E879F(unk_0xE7869D5D7816A9B6(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0x0E6C083BC5101C8B(unk_0xE7869D5D7816A9B6(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
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
	return func_146(iParam0, unk_0xE7869D5D7816A9B6(), fParam1, 1, 250, 7);
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
	Var1 = { unk_0x5D551231E967CD2B(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_147(&(Local_37[iVar4 /*4*/]), Var1, iParam1, &(Local_37[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0x9D40BBF80D8F5E8A() - Local_37[iVar4 /*4*/].f_3) < iParam4);
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
		*uParam0 = unk_0x1EAB9962ED64CF16(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam6, 7);
		return 0;
	}
	iVar8 = unk_0x9CBE058E2C3ABB72(*uParam0, &uVar0, &Var1, &uVar4, &iVar7);
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
	if (unk_0x41B17741CACC905E(iVar7))
	{
		func_112(iVar7);
		if (unk_0x10E754B2E0DF2A70(iVar7) == iParam4)
		{
			if (bLocal_78)
			{
				unk_0x324DE41C811EF6E2(Param1, unk_0x1141852D07400777(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam5 = unk_0x9D40BBF80D8F5E8A();
			return 1;
		}
		return 0;
	}
	if (unk_0x8C1ED5BB2888BA25(iVar7))
	{
		func_112(iVar7);
		if (unk_0x51374A0BB2871E6E(iParam4, 0))
		{
			if (unk_0xE59FAD6B5E1AA42D(iVar7) == unk_0xF0295FF51F2D7803(iParam4, 0))
			{
				if (bLocal_78)
				{
					unk_0x324DE41C811EF6E2(Param1, unk_0x1141852D07400777(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam5 = unk_0x9D40BBF80D8F5E8A();
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
		iVar0 = unk_0x0ADD324BC46177EF(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return unk_0x1141852D07400777(iParam0, 1);
	}
	else if (iParam1 == 1)
	{
		return unk_0x5D551231E967CD2B(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return unk_0x5D551231E967CD2B(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return unk_0x5D551231E967CD2B(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return unk_0x5D551231E967CD2B(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return unk_0x5D551231E967CD2B(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return unk_0x5D551231E967CD2B(iParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0x1141852D07400777(iParam0, 1);
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
	
	Var0 = { func_152(unk_0x1141852D07400777(iParam1, 1) - unk_0x1141852D07400777(iParam0, 1)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var3 = { unk_0x5ED441592163C054(iParam0) };
	}
	else
	{
		Var3 = { func_152(unk_0x5D551231E967CD2B(iParam0, 31086, 0f, 5f, 0f) - unk_0x5D551231E967CD2B(iParam0, 31086, 0f, 0f, 0f)) };
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
	if (unk_0xBC273BCD46110BE6(unk_0x3F80C6638E3A1A90(), uParam0) && unk_0x72957E5DA83E879F(unk_0xE7869D5D7816A9B6(), 6))
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
	if (func_112(unk_0xE7869D5D7816A9B6()) && func_112(uParam0))
	{
		unk_0x5E99B63A819500A5(unk_0xE7869D5D7816A9B6(), &iVar2, 1);
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
			if (unk_0x678D45DA30B158ED(unk_0xE7869D5D7816A9B6()))
			{
				if (unk_0xD0C9DCB982CB2D78(unk_0xE7869D5D7816A9B6()))
				{
					if (unk_0x742CA22C114D89E4(unk_0x1141852D07400777(uParam0, 1), fVar0, 1))
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
	
	Var0 = { unk_0x1141852D07400777(uParam0, 1) };
	Var3 = { Var0 };
	Var0.f_0 = (Var0.f_0 - fParam1);
	Var0.f_1 = (Var0.f_1 - fParam1);
	Var0.f_2 = (Var0.f_2 - fParam1);
	Var3.f_0 = (Var3.f_0 + fParam1);
	Var3.f_1 = (Var3.f_1 + fParam1);
	Var3.f_2 = (Var3.f_2 + fParam1);
	if (bParam2)
	{
		if (((unk_0xC1D1BBC7E173C798(unk_0x1141852D07400777(iParam0, 1), joaat("weapon_grenade"), fParam1, 1) || unk_0xC1D1BBC7E173C798(unk_0x1141852D07400777(iParam0, 1), joaat("weapon_molotov"), fParam1, 1)) || unk_0xC1D1BBC7E173C798(unk_0x1141852D07400777(iParam0, 1), joaat("weapon_smokegrenade"), fParam1, 1)) || unk_0xC1D1BBC7E173C798(unk_0x1141852D07400777(iParam0, 1), joaat("weapon_stickybomb"), 5f, 1))
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
		if (unk_0xC77E15B3AC49D8CF(Var0, Var3, 1))
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
	
	if ((((unk_0xAC4A06357AE3A443(uParam0, joaat("weapon_grenade"), fParam1, &Var1, &uVar0, 0) || unk_0xAC4A06357AE3A443(uParam0, joaat("weapon_smokegrenade"), fParam1, &Var1, &uVar0, 0)) || unk_0xAC4A06357AE3A443(uParam0, joaat("weapon_bzgas"), fParam1, &Var1, &uVar0, 0)) || unk_0xAC4A06357AE3A443(uParam0, joaat("weapon_stickybomb"), fParam1, &Var1, &uVar0, 0)) || unk_0xAC4A06357AE3A443(uParam0, joaat("weapon_molotov"), fParam1, &Var1, &uVar0, 0))
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
	
	Var0 = { func_152(Param1 - unk_0x1141852D07400777(uParam0, 1)) };
	if (fParam4 < 0.1f || fParam4 > 360f)
	{
		return 1;
	}
	if (iParam5 == 0)
	{
		Var3 = { unk_0x5ED441592163C054(iParam0) };
	}
	else
	{
		Var3 = { func_152(unk_0x5D551231E967CD2B(iParam0, 31086, 0f, 5f, 0f) - unk_0x5D551231E967CD2B(iParam0, 31086, 0f, 0f, 0f)) };
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
		if (unk_0xD0C9DCB982CB2D78(unk_0xE7869D5D7816A9B6()))
		{
			if (unk_0x0E6C083BC5101C8B(unk_0xE7869D5D7816A9B6(), uParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (unk_0x742CA22C114D89E4(unk_0x1141852D07400777(iParam0, 1), fParam2, 1))
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
	
	if (func_112(unk_0xE7869D5D7816A9B6()) && func_112(uParam0))
	{
		unk_0x2B0BB514F9140141("rcmextreme3");
		while (!unk_0x2917D5E1CB5CE43A("rcmextreme3"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x94026C1D1DB14225(&uVar0);
		unk_0xDCF460AE46C9489C(0, "rcmextreme3", "jump_fall", 1000f, -8f, -1, 8, 0, 0, 0, 0);
		unk_0x732BBAB72712004C(0, 1);
		unk_0x939DB0E588B9D9E5(0, 64.6f, -737.8f, 44.2f);
		unk_0x4B79E06845D63B96(0, unk_0xE7869D5D7816A9B6(), 10000f, -1, 0, 0);
		unk_0x911ECBCE73F8EC3F(uVar0);
		unk_0xC2C4A3A9FF2FBFFF(uParam0, uVar0);
		unk_0x33A90AD8FA327B72(&uVar0);
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
		if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
		{
			if (unk_0x44B59DB1458EE8E0(unk_0x3F80C6638E3A1A90()) != 0)
			{
				return 1;
			}
		}
	}
	if (!unk_0xB519E5386FBF69E5(Global_99155.f_17188[iParam0 /*6*/], 2))
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
	if (unk_0xA78EA29AC2FFBADE())
	{
		if (unk_0xB6A14C2017960DFA() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_166()
{
	if (Global_88280 != -1)
	{
		return unk_0xB519E5386FBF69E5(Global_82146[Global_88280 /*34*/].f_15, 20);
	}
	return 0;
}

bool func_167(int iParam0)
{
	return func_168(iParam0, Global_35619);
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
	return func_170(unk_0x959E7FA37C0D0892(), 0);
}

int func_170(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar33;
	int iVar34;
	
	iVar33 = unk_0xC7C6DDDE84A8E734(uParam0);
	iVar34 = 0;
	iVar34 = 0;
	while (iVar34 < 63)
	{
		iVar0 = iVar34;
		func_95(iVar0, &uVar1);
		if (unk_0xC7C6DDDE84A8E734(uVar1) == iVar33)
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
	if ((func_172() && Global_91025.f_11 == 6) && iParam0 == func_170(&(Global_91025.f_3), 0))
	{
		return 1;
	}
	return 0;
}

int func_172()
{
	if (((Global_91025 == 13 || Global_91025 == 10) || Global_91025 == 11) || Global_91025 == 12)
	{
		return 0;
	}
	return 1;
}

int func_173(int iParam0)
{
	if (func_197(0))
	{
		if (Global_69482.f_1 == 7)
		{
			if (Global_69482 == iParam0)
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
	if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
	{
		if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
		{
			if (func_176(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0), 10.5f, 1, 1056964608, 0, 1, 0))
			{
				if (unk_0xC47857E5E74EA5AF(unk_0xE7869D5D7816A9B6(), -828834893) != 1)
				{
					unk_0xCD7A5BCC47D00FB2(unk_0xE7869D5D7816A9B6(), 0, 0);
				}
			}
		}
	}
}

int func_176(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x8CCCC48313B0F20F(0, 71, 1);
	unk_0x8CCCC48313B0F20F(0, 72, 1);
	unk_0x8CCCC48313B0F20F(0, 76, 1);
	unk_0x8CCCC48313B0F20F(0, 73, 1);
	unk_0x8CCCC48313B0F20F(0, 59, 1);
	unk_0x8CCCC48313B0F20F(0, 60, 1);
	if (bParam5)
	{
		unk_0x8CCCC48313B0F20F(0, 75, 1);
	}
	unk_0x8CCCC48313B0F20F(0, 80, 1);
	if (!bParam6)
	{
		unk_0x8CCCC48313B0F20F(0, 69, 1);
		unk_0x8CCCC48313B0F20F(0, 70, 1);
		unk_0x8CCCC48313B0F20F(0, 68, 1);
	}
	unk_0x8CCCC48313B0F20F(0, 74, 1);
	unk_0x8CCCC48313B0F20F(0, 86, 1);
	unk_0x8CCCC48313B0F20F(0, 81, 1);
	unk_0x8CCCC48313B0F20F(0, 82, 1);
	unk_0x8CCCC48313B0F20F(0, 138, 1);
	unk_0x8CCCC48313B0F20F(0, 136, 1);
	unk_0x8CCCC48313B0F20F(0, 114, 1);
	unk_0x8CCCC48313B0F20F(0, 107, 1);
	unk_0x8CCCC48313B0F20F(0, 110, 1);
	unk_0x8CCCC48313B0F20F(0, 89, 1);
	unk_0x8CCCC48313B0F20F(0, 89, 1);
	unk_0x8CCCC48313B0F20F(0, 87, 1);
	unk_0x8CCCC48313B0F20F(0, 88, 1);
	unk_0x8CCCC48313B0F20F(0, 113, 1);
	unk_0x8CCCC48313B0F20F(0, 115, 1);
	unk_0x8CCCC48313B0F20F(0, 116, 1);
	unk_0x8CCCC48313B0F20F(0, 117, 1);
	unk_0x8CCCC48313B0F20F(0, 118, 1);
	unk_0x8CCCC48313B0F20F(0, 119, 1);
	unk_0x8CCCC48313B0F20F(0, 131, 1);
	unk_0x8CCCC48313B0F20F(0, 132, 1);
	unk_0x8CCCC48313B0F20F(0, 123, 1);
	unk_0x8CCCC48313B0F20F(0, 126, 1);
	unk_0x8CCCC48313B0F20F(0, 129, 1);
	unk_0x8CCCC48313B0F20F(0, 130, 1);
	unk_0x8CCCC48313B0F20F(0, 133, 1);
	unk_0x8CCCC48313B0F20F(0, 134, 1);
	unk_0x01E20DCCA2C958A3();
	if ((unk_0x9D40BBF80D8F5E8A() - Global_29) > 500)
	{
		unk_0x1B9F8E5CCC384F1E(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x9D40BBF80D8F5E8A();
	if (!unk_0x76B2D234F1895632(iParam0))
	{
		if (unk_0x7F38A542899D217A(unk_0xD4F0FC8FFEDE152B(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_177()
{
	unk_0x8CCCC48313B0F20F(0, 21, 1);
	unk_0x8CCCC48313B0F20F(0, 37, 1);
	unk_0x8CCCC48313B0F20F(0, 25, 1);
	unk_0x8CCCC48313B0F20F(0, 141, 1);
	unk_0x8CCCC48313B0F20F(0, 140, 1);
	unk_0x8CCCC48313B0F20F(0, 24, 1);
	unk_0x8CCCC48313B0F20F(0, 257, 1);
	unk_0x8CCCC48313B0F20F(0, 22, 1);
	unk_0x8CCCC48313B0F20F(0, 23, 1);
}

void func_178()
{
	if (!Global_14413.f_1 == 1)
	{
		if (func_181(0))
		{
			func_179(0);
		}
		unk_0x9956FB0E4B50ECB8(&Global_2284, 2);
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
		unk_0x9956FB0E4B50ECB8(&Global_2284, 16);
	}
	if (unk_0xD6F17BA188A65E8F())
	{
		unk_0xDA09A6E60FE9645E(0);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		unk_0x9956FB0E4B50ECB8(&Global_2283, 30);
	}
	else
	{
		unk_0x73817D396768E4C6(&Global_2283, 30);
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
				unk_0x2EA67F1118848733(&Global_14350);
			}
			Global_14341 = { Global_14359[Global_14358 /*3*/] };
			unk_0xD61764696C2259C9(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = { Global_14366[Global_14358 /*3*/] };
		if (bParam1)
		{
			unk_0xD61764696C2259C9(Global_14350);
		}
		else
		{
			unk_0xD61764696C2259C9(Global_14341);
		}
	}
}

int func_181(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xB519E5386FBF69E5(Global_2283, 14))
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
	if (unk_0xFF6891E21E7FC193(joaat("cellphone_flashhand")) > 0)
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
	iVar0 = func_185(&(Global_98242[iParam0 /*10*/].f_9), 1, 4, 0, 0);
	if (!iVar0 == 1)
	{
		return 0;
	}
	func_184(iParam0);
	return 1;
}

void func_184(int iParam0)
{
	Global_98242[iParam0 /*10*/].f_4 = 1;
	Global_98242[iParam0 /*10*/].f_5 = 0;
	Global_98242[iParam0 /*10*/].f_6 = 0;
	Global_98242[iParam0 /*10*/] = 0;
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
		if (Global_88836.f_44 == 1)
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
		Global_35583++;
		*uParam0 = Global_35583;
		unk_0xD30CBD7E69615F8C(unk_0xBFAE5F9DEC53DAE2(), 0);
		Global_17118.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x6581912D0AD8605D(8);
		}
		Global_35619 = iParam2;
		Global_35581 = *uParam0;
		Global_35582 = iParam4;
		Global_35580 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35580 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35580)
			{
				if (Global_35586[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35581 == *uParam0)
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
		if (Global_35580 == 8)
		{
			return 0;
		}
		Global_35583++;
		*uParam0 = Global_35583;
		Global_35586[Global_35580 /*4*/] = Global_35583;
		Global_35586[Global_35580 /*4*/].f_1 = iParam1;
		Global_35586[Global_35580 /*4*/].f_2 = iParam2;
		Global_35586[Global_35580 /*4*/].f_3 = 0;
		Global_35580++;
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
	
	if (Global_35580 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35580)
	{
		if (Global_35586[iVar0 /*4*/] == *uParam0)
		{
			Global_35586[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

int func_187(int iParam0)
{
	if (Global_35619 == 15)
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
	if (Global_91025 == 10 || Global_91025 == 9)
	{
		return 1;
	}
	return 0;
}

int func_189(int iParam0)
{
	char* sVar0;
	
	if (Global_69236)
	{
		func_295("STEP_3_COMMON_CanRCLaunch - Script denied. Multiplayer is running [TERMINATING]");
		return 0;
	}
	if (!Global_99155.f_7699 && !func_197(1))
	{
		func_295("STEP_3_COMMON_CanRCLaunch - Script denied, game flow is not active");
		return 0;
	}
	if (!func_190(iParam0))
	{
		Global_98242[iParam0 /*10*/].f_1 = 1;
		func_295("STEP_3_COMMON_CanRCLaunch - Script denied by RC Controller [TERMINATING]");
		return 0;
	}
	if (Global_91025.f_11 == 6)
	{
		if (Global_91025 < 9)
		{
			func_95(iParam0, &sVar0);
			if (unk_0x04E7E853E31F41A3(&(Global_91025.f_3), sVar0))
			{
				func_295("STEP_3_COMMON_CanRCLaunch - Script denied as a replay for this RC is being configured. [TERMINATING]");
				return 0;
			}
		}
	}
	if (unk_0xFF6891E21E7FC193(joaat("candidate_controller")) == 0)
	{
		Global_98242[iParam0 /*10*/].f_1 = 1;
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
			Global_98242[iParam0 /*10*/].f_3 = 0;
		}
	}
	if (Global_98242[iParam0 /*10*/].f_3 == 1)
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
	
	if (Global_91077.f_294 == 0)
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
	else if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
	{
		func_192(iParam0, &sVar1);
		iVar9 = unk_0x41D9D981197E60A2(Global_86396[iParam0 /*10*/].f_3, &sVar1);
		if (iVar9 != 0 && Global_91077.f_294 == iVar9)
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
			if (unk_0xAAF84168D1079DB3("TrevorsTrailer"))
			{
				StringCopy(sParam1, "v_trailer", 32);
			}
			else if (unk_0xAAF84168D1079DB3("TrevorsTrailerTidy"))
			{
				StringCopy(sParam1, "V_TrailerTIDY", 32);
			}
			else if (unk_0xAAF84168D1079DB3("TrevorsTrailerTrash"))
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
	return !unk_0x04E7E853E31F41A3(sParam1, "");
}

bool func_193(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return unk_0xB519E5386FBF69E5(Global_99155.f_17188[iParam0 /*6*/], 3);
}

bool func_194(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return unk_0xB519E5386FBF69E5(Global_99155.f_17188[iParam0 /*6*/], 2);
}

bool func_195(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return unk_0xB519E5386FBF69E5(Global_99155.f_17188[iParam0 /*6*/], 0);
}

int func_196(int iParam0)
{
	if (func_164(iParam0))
	{
		return 0;
	}
	else if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
	{
		if (unk_0x44B59DB1458EE8E0(unk_0x3F80C6638E3A1A90()) != 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_197(bool bParam0)
{
	if (!bParam0 && unk_0xFF6891E21E7FC193(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xB519E5386FBF69E5(Global_69484, 0);
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
	if (!func_205(unk_0xE7869D5D7816A9B6()))
	{
		return bVar0;
	}
	if (Global_98242[56 /*10*/].f_3)
	{
		return bVar0;
	}
	if (unk_0x51AFBB2BC4E2AAFD(unk_0x3F80C6638E3A1A90(), 0))
	{
		if (iLocal_291)
		{
			unk_0x1D208E4A4E1D4FFE(1);
			func_204("RAMP_HELP_CRIM", -1);
			iLocal_291 = 0;
		}
		bVar0 = true;
	}
	else if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
	{
		if (iLocal_290)
		{
			unk_0x1D208E4A4E1D4FFE(1);
			func_204("RAMP_HELP_FOOT", -1);
			iLocal_290 = 0;
		}
		bVar0 = true;
	}
	else if ((func_203(0) || unk_0xF478777FFCC96862()) || func_202())
	{
		if (func_2("RAMP_HELP_TRIG"))
		{
			if (func_203(0))
			{
			}
			else if (unk_0xF478777FFCC96862())
			{
			}
			else if (func_202())
			{
			}
			unk_0x1D208E4A4E1D4FFE(1);
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
				unk_0x1D208E4A4E1D4FFE(1);
				func_201("RAMP_HELP_TRIG");
			}
			iLocal_292 = 1;
		}
		bVar0 = !unk_0x6BBF308E0A0F9AD4(2, 51);
	}
	return bVar0;
}

void func_201(char* sParam0)
{
	unk_0xCAFBB15049416379(sParam0);
	unk_0x7CBFB87C647743C3(0, 1, 1, -1);
}

int func_202()
{
	if (!unk_0x00AAD79B42B3E036())
	{
		return Global_88836.f_44 == 1;
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
	unk_0xCAFBB15049416379(sParam0);
	unk_0x7CBFB87C647743C3(0, 0, 1, iParam1);
}

bool func_205(int iParam0)
{
	if (!unk_0xD51CFE69539DB6D8(iParam0))
	{
		return 0;
	}
	return !unk_0x76B2D234F1895632(iParam0);
}

int func_206(float fParam0)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	if (!func_205(unk_0xE7869D5D7816A9B6()))
	{
		return -1;
	}
	Var4 = { unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Var1 = { Global_25343[(iLocal_287 + iVar0) /*23*/][0 /*3*/] };
		if (unk_0xF18329472591CFE6(Var4, Var1, 1) <= fParam0 && unk_0x7F38A542899D217A((Var4.f_2 - Var1.f_2)) < 1.5f)
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
	return Global_99155.f_1750.f_539.f_3549;
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
	unk_0xB86B1248EA9B87EA(Param1, uParam0->f_15, 1, 0, 0, 0);
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (*uParam0 == 52 || *uParam0 == 53)
		{
			if (func_112(uParam0->f_28[0]))
			{
				if (unk_0x048B85C1B162DC5D(-1, unk_0x1141852D07400777(uParam0->f_28[0], 1), 5.1f))
				{
					if (*uParam0 == 52)
					{
						iVar7 = 0;
						while (iVar7 < uParam0->f_41)
						{
							if (unk_0xD51CFE69539DB6D8(uParam0->f_41[iVar7]))
							{
								if ((func_112(uParam0->f_28[0]) && unk_0x6CE07ABFB69A4990(uParam0->f_41[iVar7], uParam0->f_28[0])) || (func_112(uParam0->f_28[1]) && unk_0x6CE07ABFB69A4990(uParam0->f_41[iVar7], uParam0->f_28[1])))
								{
									unk_0xD4E454973E16D31B(&(uParam0->f_41[iVar7]));
								}
							}
							iVar7++;
						}
					}
					unk_0x5F0FEFB9EF0F238E(uParam0->f_28[0], 100, 500, 0, 1, 1, 0);
					unk_0xF35E9C82246B2BAD(uParam0->f_28[0], 1000, 1);
					if (func_112(uParam0->f_28[1]))
					{
						unk_0x5F0FEFB9EF0F238E(uParam0->f_28[1], 100, 500, 0, 1, 1, 0);
						unk_0xF35E9C82246B2BAD(uParam0->f_28[1], 1000, 1);
					}
					func_295("Sitting Rampage attacked with explosives, cleaning up");
					func_280(uParam0, 1);
				}
			}
			if (func_112(uParam0->f_28[1]))
			{
				if (unk_0x048B85C1B162DC5D(-1, unk_0x1141852D07400777(uParam0->f_28[1], 1), 5.1f))
				{
					if (*uParam0 == 52)
					{
						iVar7 = 0;
						while (iVar7 < uParam0->f_41)
						{
							if (unk_0xD51CFE69539DB6D8(uParam0->f_41[iVar7]))
							{
								if ((func_112(uParam0->f_28[0]) && unk_0x6CE07ABFB69A4990(uParam0->f_41[iVar7], uParam0->f_28[0])) || (func_112(uParam0->f_28[1]) && unk_0x6CE07ABFB69A4990(uParam0->f_41[iVar7], uParam0->f_28[1])))
								{
									unk_0xD4E454973E16D31B(&(uParam0->f_41[iVar7]));
								}
							}
							iVar7++;
						}
					}
					unk_0x5F0FEFB9EF0F238E(uParam0->f_28[1], 100, 500, 0, 1, 1, 0);
					unk_0xF35E9C82246B2BAD(uParam0->f_28[1], 1000, 1);
					if (func_112(uParam0->f_28[0]))
					{
						unk_0x5F0FEFB9EF0F238E(uParam0->f_28[0], 100, 500, 0, 1, 1, 0);
						unk_0xF35E9C82246B2BAD(uParam0->f_28[0], 1000, 1);
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
			if (unk_0x5E67A92FC1C4AFCB("Rampage1"))
			{
				func_295(" Turning Off Scenario Group For Rampage 1");
				unk_0x34889147FAD10C2C("Rampage1", 0);
			}
		}
		func_246(*uParam0);
		func_238(&iLocal_288, &(uParam0->f_9), Param1);
		if (iVar0 == 0 && iLocal_288 != -1)
		{
			func_237(uParam0, &uLocal_293);
			if (unk_0x3CBB06ED9434F6B3())
			{
				func_295(" Cutscene Loaded");
				iVar0 = 1;
			}
		}
		Local_297 = { unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1) };
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
				if (unk_0xA16CC47187A94189())
				{
					iLocal_114 = -1;
					unk_0xC36FD2B6875CA6EA(0);
					unk_0x44C7AD5B54E267EE(unk_0xE7869D5D7816A9B6());
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
			unk_0x2B0BB514F9140141(sVar0);
			if (unk_0x2917D5E1CB5CE43A(sVar0))
			{
				iLocal_115++;
			}
			break;
		
		case 1:
			if (func_112(uParam0->f_28[0]))
			{
				if (func_220(uParam0->f_28[0], unk_0xE7869D5D7816A9B6(), 1) < 30f && unk_0xD525F9D50CBB6A5D(uParam0->f_28[0]))
				{
					func_219(&uLocal_120, 0, uParam0->f_28[0], "RAMPAGEHIPSTER", 0, 1);
					iLocal_115++;
				}
			}
			break;
		
		case 2:
			uLocal_116[0] = unk_0xB839A1C489B63ACC(Local_107, Local_110, 2);
			if (func_112(uParam0->f_28[0]))
			{
				func_210(&uLocal_120, "RAMP2AU", "RAMP2_LEADIN", "RAMP2_LEADIN_1", 7, 0, 0);
				unk_0x360F0D01112F8AD0(uParam0->f_28[0], uLocal_116[0], sVar0, "hipster_post_post_irony", 8f, -8f, 513, 0, 1148846080, 0);
			}
			unk_0x3A7DEF86891D2891(uLocal_116[0], 0);
			unk_0xDB14F40E3E8CB36F(uLocal_116[0], 1);
			iLocal_115++;
			break;
		
		case 3:
			if (unk_0x47B2F09FC779F5CD(uLocal_116[0]))
			{
				if (unk_0x4D221DFBB84DCF0B(uLocal_116[0]) >= 0.95f)
				{
					iLocal_115++;
				}
			}
			break;
		
		case 4:
			uLocal_116[1] = unk_0xB839A1C489B63ACC(Local_107, Local_110, 2);
			if (func_112(uParam0->f_28[0]))
			{
				func_210(&uLocal_120, "RAMP2AU", "RAMP2_LEADIN", "RAMP2_LEADIN_2", 7, 0, 0);
				unk_0x360F0D01112F8AD0(uParam0->f_28[0], uLocal_116[1], sVar0, "hipster_self_hating_hipster", 8f, -8f, 513, 0, 1148846080, 0);
			}
			unk_0x3A7DEF86891D2891(uLocal_116[1], 0);
			unk_0xDB14F40E3E8CB36F(uLocal_116[1], 1);
			iLocal_115++;
			break;
		
		case 5:
			if (unk_0x47B2F09FC779F5CD(uLocal_116[1]))
			{
				if (unk_0x4D221DFBB84DCF0B(uLocal_116[1]) >= 0.95f)
				{
					iLocal_115++;
				}
			}
			break;
		
		case 6:
			uLocal_116[2] = unk_0xB839A1C489B63ACC(Local_107, Local_110, 2);
			if (func_112(uParam0->f_28[0]))
			{
				unk_0x360F0D01112F8AD0(uParam0->f_28[0], uLocal_116[2], sVar0, "hipster_idle", 8f, -8f, 513, 0, 1148846080, 0);
			}
			unk_0x3A7DEF86891D2891(uLocal_116[2], 1);
			unk_0xDB14F40E3E8CB36F(uLocal_116[2], 0);
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
					unk_0xDA09A6E60FE9645E(0);
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
		if (unk_0xF0A330A29F97AA7E())
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
			unk_0x73817D396768E4C6(&Global_2283, 20);
			unk_0x73817D396768E4C6(&Global_2284, 17);
			unk_0x73817D396768E4C6(&Global_2285, 0);
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
			if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
			{
				if (unk_0xC3AE89795D844EE9(unk_0xE7869D5D7816A9B6()))
				{
					return 0;
				}
				if (func_214())
				{
					return 0;
				}
				if (unk_0x25AE83AAAFB359D8(unk_0xE7869D5D7816A9B6()))
				{
					return 0;
				}
				if (unk_0x8E2CF6ACCED3BD0F(unk_0xE7869D5D7816A9B6()))
				{
					return 0;
				}
				if (unk_0x3A065D524128D33B(unk_0xE7869D5D7816A9B6()))
				{
					return 0;
				}
				if (unk_0x14618ECB1EB17B8F(unk_0xE7869D5D7816A9B6(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69236)
				{
					if (unk_0xA7D2A868253353BE(unk_0xE7869D5D7816A9B6()))
					{
						return 0;
					}
					if (unk_0x39CB1B5DEC5DD307(unk_0x3F80C6638E3A1A90()))
					{
						return 0;
					}
					if (unk_0xA7AC3687807201B4(unk_0xE7869D5D7816A9B6()))
					{
						return 0;
					}
					if (unk_0x3CD36EADD6272F29(unk_0x3F80C6638E3A1A90()))
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
				if (unk_0xB519E5386FBF69E5(Global_2283, 9))
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
	unk_0xDA09A6E60FE9645E(0);
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
	unk_0x73817D396768E4C6(&Global_2284, 16);
}

int func_214()
{
	int iVar0;
	int iVar1;
	
	if (Global_69236)
	{
		iVar0 = 0;
		unk_0x5E99B63A819500A5(unk_0xE7869D5D7816A9B6(), &iVar1, 1);
		if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x834CA326769DA173() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
	{
		if (unk_0x9699041CFA6517D2(unk_0xE7869D5D7816A9B6(), 78, 1))
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
		if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
		{
			if (unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()) == Global_99155.f_32499[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()) == Global_99155.f_32499[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()) == Global_99155.f_32499[2 /*29*/])
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
		if (Global_69236)
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
				return Global_1338577.f_203[iParam1];
			}
			break;
	}
	return unk_0xB519E5386FBF69E5(Global_1338577.f_949, iParam0);
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
	if (!Global_69236)
	{
		if (!unk_0xAF437D7C802AB246(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xA6ED3077A967AC63(iParam2, 0);
			}
			else
			{
				unk_0xA6ED3077A967AC63(iParam2, 1);
			}
		}
		if (!unk_0xAF437D7C802AB246(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x7294CF31F80E052D(iParam2, 0);
			}
			else
			{
				unk_0x7294CF31F80E052D(iParam2, 1);
			}
		}
	}
}

float func_220(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x76B2D234F1895632(iParam0))
	{
		Var0 = { unk_0x1141852D07400777(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x1141852D07400777(iParam0, 0) };
	}
	if (!unk_0x76B2D234F1895632(iParam1))
	{
		Var3 = { unk_0x1141852D07400777(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x1141852D07400777(iParam1, 0) };
	}
	return unk_0xF18329472591CFE6(Var0, Var3, iParam2);
}

int func_221(var* uParam0)
{
	func_174();
	if (iLocal_114 < 0)
	{
		if (unk_0xB7A628320EFF8E47(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), unk_0x1141852D07400777(uParam0->f_28[1], 1)) < 25f)
		{
			return 1;
		}
		switch (*uParam0)
		{
			case 52:
				unk_0xA109811CF2C55706(uParam0->f_28[0], 0.1f, 0f, 0.9f, 1, -1, 2500, 2000, 0);
				unk_0x6A8BCE61F660B8D0(unk_0xE7869D5D7816A9B6(), uParam0->f_28[0], -1, 0, 2);
				unk_0xE0EC82CEC5BEF2D6(1);
				unk_0x1260408BAB736413(-5f);
				unk_0x137929A7453FE708(0.1f);
				unk_0x99B62758419E344A(0f);
				unk_0x464E3BE818E0EC29(0.3f);
				unk_0x93B3BE845878F896(40f);
				break;
			
			case 54:
				unk_0xA109811CF2C55706(uParam0->f_28[0], 0f, -0.1f, 0.9f, 1, -1, 2500, 2000, 0);
				unk_0x6A8BCE61F660B8D0(unk_0xE7869D5D7816A9B6(), uParam0->f_28[0], -1, 0, 2);
				unk_0xE0EC82CEC5BEF2D6(1);
				unk_0x1260408BAB736413(-10f);
				unk_0x137929A7453FE708(-0.9f);
				unk_0x99B62758419E344A(0f);
				unk_0x464E3BE818E0EC29(0.35f);
				unk_0x93B3BE845878F896(40f);
				break;
			
			case 55:
				unk_0xA109811CF2C55706(uParam0->f_28[1], 0f, 0f, 0.9f, 1, -1, 2500, 2000, 0);
				unk_0x6A8BCE61F660B8D0(unk_0xE7869D5D7816A9B6(), uParam0->f_28[1], -1, 0, 2);
				unk_0xE0EC82CEC5BEF2D6(1);
				unk_0x1260408BAB736413(-8f);
				unk_0x137929A7453FE708(-0.9f);
				unk_0x99B62758419E344A(0.1f);
				unk_0x464E3BE818E0EC29(0.35f);
				unk_0x93B3BE845878F896(40f);
				break;
			
			case 56:
				unk_0xA109811CF2C55706(uParam0->f_28[1], 0f, 0f, 0f, 1, -1, 2500, 2000, 0);
				unk_0x6A8BCE61F660B8D0(unk_0xE7869D5D7816A9B6(), uParam0->f_28[1], -1, 0, 2);
				unk_0xE0EC82CEC5BEF2D6(1);
				unk_0x1260408BAB736413(-5f);
				unk_0x137929A7453FE708(0.15f);
				unk_0x99B62758419E344A(0f);
				unk_0x464E3BE818E0EC29(0.3f);
				unk_0x93B3BE845878F896(40f);
				break;
		}
		iLocal_114 = unk_0x9D40BBF80D8F5E8A() + 2500;
	}
	else if (unk_0x9D40BBF80D8F5E8A() > iLocal_114)
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
						uLocal_286 = unk_0xB839A1C489B63ACC(Local_107, Local_110, 2);
						unk_0x360F0D01112F8AD0(uParam0->f_28[0], uLocal_286, "misstrvram_2", "hipster_cunts_in_america", 8f, -8f, 513, 0, 1148846080, 0);
						unk_0xA109811CF2C55706(uParam0->f_28[0], 0f, 0f, 0.5f, 1, -1, 2500, 2000, 0);
						unk_0x6A8BCE61F660B8D0(unk_0xE7869D5D7816A9B6(), uParam0->f_28[0], -1, 0, 2);
						unk_0xE0EC82CEC5BEF2D6(1);
						unk_0x1260408BAB736413(0f);
						unk_0x137929A7453FE708(0.1f);
						unk_0x99B62758419E344A(0f);
						unk_0x464E3BE818E0EC29(0.35f);
						unk_0x93B3BE845878F896(40f);
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
	unk_0xACA77D3E6C847C83();
	Global_16723 = 0;
	if (unk_0xF0A330A29F97AA7E())
	{
		unk_0xDA09A6E60FE9645E(0);
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
				if (unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), 1826.631f, 4699.115f, 35.38089f, 1812.878f, 4710.457f, 42.05354f, 23.75f, 0, 1, 0))
				{
					if (func_112(uParam0->f_28[0]))
					{
						if (unk_0xF18329472591CFE6(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), unk_0x1141852D07400777(uParam0->f_28[0], 1), 1) < 3f)
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
				if ((((!unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), -1895.788f, -434.0192f, 40.30126f, -1883.038f, -444.0811f, 50.24509f, 8.5f, 0, 1, 0) && !unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), -1883.576f, -443.6434f, 36.40581f, -1874.826f, -448.0797f, 49.15162f, 8.5f, 0, 1, 0)) && !unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), -1876.343f, -446.2214f, 35.64637f, -1866.952f, -456.5601f, 49.0442f, 8.5f, 0, 1, 0)) && !unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), -1882.997f, -438.9922f, 44.17246f, -1874.079f, -443.342f, 48.69179f, 0.75f, 0, 1, 0)) || unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), -1878.822f, -441.7655f, 44.9175f, -1877.941f, -439.9522f, 47.28982f, 1.25f, 0, 1, 0))
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
				if (!unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), 837.0731f, 1261.086f, 366.1592f, 780.8383f, 1260.829f, 351.405f, 17.75f, 0, 1, 0))
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
				if (unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), uParam0->f_35[0], 0))
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
			if (unk_0xD51CFE69539DB6D8(uParam0->f_35[0]))
			{
				if (!unk_0x76B2D234F1895632(uParam0->f_35[0]))
				{
					if (unk_0xF18329472591CFE6(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), unk_0x1141852D07400777(uParam0->f_35[0], 1), 1) < uParam0->f_15)
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
			if (unk_0xF18329472591CFE6(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), uParam0->f_17[0 /*3*/], 1) < uParam0->f_15)
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
			if (unk_0x3761EA7F8628B81A(unk_0xE7869D5D7816A9B6(), uParam0->f_17[0 /*3*/], uParam0->f_17[1 /*3*/], 0, 1, 0))
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
				if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
				{
					if (func_112(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0)))
					{
						if (unk_0x7579897B912B3328(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0), joaat("towtruck")) || unk_0x7579897B912B3328(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0), joaat("towtruck2")))
						{
							if (unk_0x3E29DD6D10980B6B(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0), uParam0->f_35[0]))
							{
								if (func_230(3))
								{
									return 1;
								}
							}
						}
						else if ((unk_0x7579897B912B3328(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0), joaat("cargobob")) || unk_0x7579897B912B3328(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0), joaat("cargobob2"))) || unk_0x7579897B912B3328(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0), joaat("cargobob3")))
						{
							if (unk_0x2CEA05E9BFD176CB(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0)) && unk_0xC4273BA868B55B6F(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0), uParam0->f_35[0]))
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
				if (unk_0xF0578CB5A09F8398(unk_0xE7869D5D7816A9B6()) >= 2f)
				{
					if (unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), 245.8885f, 371.9034f, 103.9884f, 241.5898f, 359.6458f, 107.3461f, 1.25f, 0, 1, 0))
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
				if (unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), -164.2046f, 277.4866f, 91.55322f, -153.6f, 277.4061f, 97.33813f, 10f, 0, 1, 0))
				{
					return 0;
				}
			}
			else if (*uParam0 == 31)
			{
				if (unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), 2728.948f, 4143.44f, 42.29295f, 2722.213f, 4144.521f, 45.43182f, 10f, 0, 1, 0))
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
				if (unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), -992.4995f, 358.7455f, 96.3735f, -1021.94f, 361.8888f, 65.36148f, 30f, 0, 1, 0))
				{
					if (!unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), -983.5426f, 369.1104f, 68.46017f, -1028.566f, 395.4613f, 94.57245f, 15f, 0, 1, 0))
					{
						if (!unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), -983.875f, 346.7556f, 68.02096f, -1021.451f, 336.3458f, 93.18714f, 14.5f, 0, 1, 0))
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
			if (unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), uParam0->f_17[0 /*3*/], uParam0->f_17[1 /*3*/], uParam0->f_24, 0, 1, 0))
			{
				if (*uParam0 == 45)
				{
					if (unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), 2338.697f, 2597.037f, 45.39052f, 2324.003f, 2597.185f, 47.74961f, 8.5f, 0, 1, 0))
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
	func_30(&(Global_92815.f_2311), &Global_92815, 0, 1, 1, 0);
}

int func_227(var uParam0)
{
	float fVar0;
	
	if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0) && uParam0->f_27)
	{
		if (*uParam0 == 27 || *uParam0 == 30)
		{
			fVar0 = 1f;
		}
		else
		{
			fVar0 = 5f;
		}
		if (unk_0xF18329472591CFE6(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), unk_0x1141852D07400777(uParam0->f_28[0], 1), 1) < (uParam0->f_15 + fVar0))
		{
			return 1;
		}
	}
	else if (unk_0xF18329472591CFE6(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), unk_0x1141852D07400777(uParam0->f_28[0], 1), 1) < uParam0->f_15)
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
		if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
		{
			func_295("RC_STOP_PLAYER_VEHICLE_CHECK: Stopping player's vehicle.");
			if (unk_0x523C6F050AF90E4F(unk_0xE7869D5D7816A9B6()) || unk_0x8BFF7CA791EED675(unk_0xE7869D5D7816A9B6()))
			{
				func_295("RC_STOP_PLAYER_VEHICLE_CHECK: Turning off engine for plane or helicopter.");
				unk_0xE9A614E9191BFB4A(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0), 0, 1, 0);
			}
			func_174();
		}
	}
}

int func_229(bool bParam0)
{
	int iVar0;
	
	if (unk_0x2E6D4A0CE8AD9494(unk_0xBFAE5F9DEC53DAE2()))
	{
		if (unk_0xD33337101FE7D2FE(unk_0xE7869D5D7816A9B6()))
		{
			return 1;
		}
		else if (bParam0)
		{
			if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
			{
				iVar0 = unk_0xA0B1717D806F4901();
				if (func_141(iVar0))
				{
					if (unk_0x523C6F050AF90E4F(unk_0xE7869D5D7816A9B6()) || unk_0x8BFF7CA791EED675(unk_0xE7869D5D7816A9B6()))
					{
						if ((!unk_0x641FE3AF0CF996E3(iVar0) && !unk_0x47EF9ED961F4F559(iVar0)) && unk_0xD4F0FC8FFEDE152B(iVar0) < 1f)
						{
							return 1;
						}
					}
					else if (!unk_0x47EF9ED961F4F559(iVar0))
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
	
	if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
	{
		if (unk_0xD51CFE69539DB6D8(unk_0xE7869D5D7816A9B6()))
		{
			if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
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
						if (((((((((((((((((!unk_0x69CFD69005B7F5D7(unk_0x3F80C6638E3A1A90()) || unk_0x47EF9ED961F4F559(unk_0xE7869D5D7816A9B6())) || unk_0xF3140D055686CF79(unk_0xE7869D5D7816A9B6())) || unk_0x8E2CF6ACCED3BD0F(unk_0xE7869D5D7816A9B6())) || unk_0xA2245114BF58F40D(unk_0xE7869D5D7816A9B6())) || unk_0xA01404E50546EA1D(unk_0x3F80C6638E3A1A90(), 1)) || unk_0x39CB1B5DEC5DD307(unk_0x3F80C6638E3A1A90())) || unk_0x0930CF2B56CCE2B8(unk_0xE7869D5D7816A9B6(), 0)) || func_202()) || Global_98202) || Global_25036) || func_236()) || func_217(8, -1)) || func_80()) || func_235()) || func_234()) || func_233()) || Global_99155.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xA01404E50546EA1D(unk_0x3F80C6638E3A1A90(), 1) || func_202()) || Global_25036) || func_236()) || func_217(8, -1)) || func_234()) || func_80()) || func_235()) || func_233()) || Global_99155.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x69CFD69005B7F5D7(unk_0x3F80C6638E3A1A90()) || unk_0x47EF9ED961F4F559(unk_0xE7869D5D7816A9B6())) || unk_0xF3140D055686CF79(unk_0xE7869D5D7816A9B6())) || unk_0x8E2CF6ACCED3BD0F(unk_0xE7869D5D7816A9B6())) || unk_0xA2245114BF58F40D(unk_0xE7869D5D7816A9B6())) || unk_0xA01404E50546EA1D(unk_0x3F80C6638E3A1A90(), 1)) || unk_0x39CB1B5DEC5DD307(unk_0x3F80C6638E3A1A90())) || unk_0x0930CF2B56CCE2B8(unk_0xE7869D5D7816A9B6(), 0)) || func_202()) || Global_98202) || Global_25036) || func_236()) || func_217(8, -1)) || func_234()) || func_80()) || func_235()) || func_233()) || Global_99155.f_6302.f_919[iVar0] == 5) || Global_36166 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x8E2CF6ACCED3BD0F(unk_0xE7869D5D7816A9B6()) || unk_0xA2245114BF58F40D(unk_0xE7869D5D7816A9B6())) || unk_0xA01404E50546EA1D(unk_0x3F80C6638E3A1A90(), 1)) || unk_0x0930CF2B56CCE2B8(unk_0xE7869D5D7816A9B6(), 0)) || func_202()) || Global_98202) || Global_25036) || func_236()) || func_217(8, -1)) || func_80()) || func_235()) || func_233()) || Global_99155.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_202() || unk_0x44B59DB1458EE8E0(unk_0x3F80C6638E3A1A90()) > 0) || func_217(8, -1)) || func_233()) || func_232()) || Global_99155.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_217(8, -1) || func_80()) || func_235()) || func_232()) || func_231())
						{
							return 0;
						}
						if ((unk_0xF478777FFCC96862() && unk_0x5824E40B4C3C5757() != 3) && unk_0x3ABB0F1D57A0AD8C() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0xD51CFE69539DB6D8(unk_0xE7869D5D7816A9B6()))
						{
							if ((((((((((((((unk_0x0930CF2B56CCE2B8(unk_0xE7869D5D7816A9B6(), 0) || unk_0x44B59DB1458EE8E0(unk_0x3F80C6638E3A1A90()) > 0) || unk_0x47EF9ED961F4F559(unk_0xE7869D5D7816A9B6())) || unk_0x8E2CF6ACCED3BD0F(unk_0xE7869D5D7816A9B6())) || unk_0xA2245114BF58F40D(unk_0xE7869D5D7816A9B6())) || unk_0xA01404E50546EA1D(unk_0x3F80C6638E3A1A90(), 1)) || unk_0x39CB1B5DEC5DD307(unk_0x3F80C6638E3A1A90())) || func_202()) || Global_25036) || func_236()) || func_217(8, -1)) || func_235()) || func_234()) || func_233()) || Global_99155.f_6302.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x0930CF2B56CCE2B8(unk_0xE7869D5D7816A9B6(), 0) || !unk_0x4844BC1882594FDB(unk_0x3F80C6638E3A1A90())) || !unk_0x69CFD69005B7F5D7(unk_0x3F80C6638E3A1A90())) || !unk_0xDE185266FE919B68()) || unk_0x47EF9ED961F4F559(unk_0xE7869D5D7816A9B6())) || unk_0x8E2CF6ACCED3BD0F(unk_0xE7869D5D7816A9B6())) || unk_0xA2245114BF58F40D(unk_0xE7869D5D7816A9B6())) || unk_0xA01404E50546EA1D(unk_0x3F80C6638E3A1A90(), 1)) || func_202()) || func_235()) || Global_98202) || Global_25036) || func_236()) || Global_36669) || func_217(8, -1)) || func_234()) || func_232()) || func_233()) || Global_99155.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x0930CF2B56CCE2B8(unk_0xE7869D5D7816A9B6(), 0) || !unk_0x4844BC1882594FDB(unk_0x3F80C6638E3A1A90())) || !unk_0x69CFD69005B7F5D7(unk_0x3F80C6638E3A1A90())) || !unk_0xDE185266FE919B68()) || unk_0x51AFBB2BC4E2AAFD(unk_0x3F80C6638E3A1A90(), 0)) || unk_0x47EF9ED961F4F559(unk_0xE7869D5D7816A9B6())) || unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1)) || unk_0x8E2CF6ACCED3BD0F(unk_0xE7869D5D7816A9B6())) || unk_0xA2245114BF58F40D(unk_0xE7869D5D7816A9B6())) || unk_0x43F528FB3D5E9B0F(unk_0xE7869D5D7816A9B6())) || unk_0xA01404E50546EA1D(unk_0x3F80C6638E3A1A90(), 1)) || unk_0x39CB1B5DEC5DD307(unk_0x3F80C6638E3A1A90())) || func_202()) || Global_98202) || Global_25036) || func_236()) || func_217(8, -1)) || func_234()) || func_232()) || func_80()) || func_235()) || func_233())
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
	return Global_91064.f_1;
}

int func_232()
{
	if (Global_88280 != -1)
	{
		return unk_0xB519E5386FBF69E5(Global_82146[Global_88280 /*34*/].f_15, 13);
	}
	return 0;
}

int func_233()
{
	if (unk_0xFF6891E21E7FC193(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_234()
{
	if (Global_69496)
	{
		return 1;
	}
	else if (Global_55572 && !Global_55578)
	{
		return 1;
	}
	return 0;
}

bool func_235()
{
	return Global_91077.f_297 > 0;
}

var func_236()
{
	return Global_1315909;
}

void func_237(var uParam0, var uParam1)
{
	if (unk_0xFC7560DB639D4C2A())
	{
		if (func_112(unk_0xE7869D5D7816A9B6()))
		{
			unk_0x22D369EB33738D0F("Trevor", unk_0xE7869D5D7816A9B6(), unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()));
		}
		switch (*uParam0)
		{
			case 52:
				if (func_112(uParam0->f_28[0]))
				{
					(*uParam1)[0] = "TriggerHappy_WhiteTrash";
					unk_0x22D369EB33738D0F((*uParam1)[0], uParam0->f_28[0], 0);
				}
				if (func_112(uParam0->f_28[1]))
				{
					(*uParam1)[1] = "Nervous_WhiteTrash";
					unk_0x22D369EB33738D0F((*uParam1)[1], uParam0->f_28[1], 0);
				}
				break;
			
			case 53:
				if (func_112(uParam0->f_28[0]))
				{
					(*uParam1)[0] = "Rampage_Hipster";
					unk_0x22D369EB33738D0F((*uParam1)[0], uParam0->f_28[0], 0);
				}
				break;
			
			case 54:
				if (func_112(uParam0->f_28[0]))
				{
					(*uParam1)[0] = "Armed_Mexican_Goon";
					unk_0x22D369EB33738D0F((*uParam1)[0], uParam0->f_28[0], 0);
					unk_0x1AA2497D94D7E76D((*uParam1)[0], 8, 1, 0, 0);
				}
				if (func_112(uParam0->f_28[1]))
				{
					(*uParam1)[1] = "Mexican_Goon";
					unk_0x22D369EB33738D0F((*uParam1)[1], uParam0->f_28[1], 0);
				}
				break;
			
			case 55:
				if (func_112(uParam0->f_28[0]))
				{
					(*uParam1)[0] = "Thug";
					unk_0x22D369EB33738D0F((*uParam1)[0], uParam0->f_28[0], 0);
					unk_0x1AA2497D94D7E76D((*uParam1)[0], 10, 0, 1, 0);
				}
				if (func_112(uParam0->f_28[1]))
				{
					(*uParam1)[1] = "Armed_Thug";
					unk_0x22D369EB33738D0F((*uParam1)[1], uParam0->f_28[1], 0);
					unk_0x1AA2497D94D7E76D((*uParam1)[1], 10, 1, 0, 0);
				}
				break;
			
			case 56:
				if (func_112(uParam0->f_28[0]))
				{
					(*uParam1)[0] = "Army_Guy_Right";
					unk_0x22D369EB33738D0F((*uParam1)[0], uParam0->f_28[0], 0);
				}
				if (func_112(uParam0->f_28[1]))
				{
					(*uParam1)[1] = "Army_Guy_Left";
					unk_0x22D369EB33738D0F((*uParam1)[1], uParam0->f_28[1], 0);
				}
				break;
			}
	}
}

void func_238(int iParam0, char* sParam1, struct<3> Param2)
{
	if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
	{
		if (!unk_0xF6917DE0E003509D(sParam1))
		{
			if (Global_35619 == 17)
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
				if (func_242(unk_0xE7869D5D7816A9B6(), Param2, 1) <= 100f)
				{
					func_241(iParam0, 1);
				}
			}
			else
			{
				switch (func_240(*iParam0))
				{
					case 1:
						if (unk_0x04E7E853E31F41A3(sParam1, "JOSH_1_INT_CONCAT"))
						{
							unk_0x11B4892CEBF2DF81(sParam1, 14, 8);
						}
						else
						{
							unk_0x21CDC0BA99DF1B1B(sParam1, 8);
						}
						unk_0xD4471475CCE4533D(2);
						func_239(*iParam0, 1);
						break;
					
					case 2:
						unk_0xEFCAB8003504D08E(0);
						unk_0x9F13924F68008214();
						unk_0xD4471475CCE4533D(0);
						func_239(*iParam0, 0);
						break;
				}
				if (func_242(unk_0xE7869D5D7816A9B6(), Param2, 1) > 120f)
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
		if (Global_69232 == iParam0)
		{
			Global_69233 = iParam0;
		}
	}
	else if (Global_69233 == iParam0)
	{
		Global_69233 = -1;
	}
}

int func_240(int iParam0)
{
	if (Global_69232 == iParam0)
	{
		if (Global_69233 == -1)
		{
			if (Global_69231 < unk_0x9698C5C67A3BBE47())
			{
				return 1;
			}
		}
	}
	else if (Global_69233 == iParam0)
	{
		return 2;
	}
	return 0;
}

void func_241(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	
	if (Global_69229 < 5)
	{
		Global_69218[Global_69229 /*2*/] = 0;
		Global_69218[Global_69229 /*2*/].f_1 = iParam1;
		bVar0 = false;
		while (!bVar0)
		{
			bVar0 = true;
			iVar1 = 0;
			while (iVar1 < Global_69229)
			{
				if (Global_69218[iVar1 /*2*/] == Global_69218[Global_69229 /*2*/])
				{
					Global_69218[Global_69229 /*2*/]++;
					bVar0 = false;
				}
				iVar1++;
			}
		}
		*iParam0 = Global_69218[Global_69229 /*2*/];
		Global_69229++;
		Global_69230 = 1;
	}
	else
	{
		*iParam0 = -1;
	}
}

float func_242(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x76B2D234F1895632(iParam0))
	{
		Var0 = { unk_0x1141852D07400777(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x1141852D07400777(iParam0, 0) };
	}
	return unk_0xF18329472591CFE6(Var0, Param1, iParam4);
}

bool func_243()
{
	return Global_88667;
}

void func_244(int iParam0)
{
	unk_0xEFCAB8003504D08E(0);
	unk_0x9F13924F68008214();
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
	if (Global_69233 == *iParam0)
	{
		func_239(*iParam0, 0);
	}
	if (Global_69232 == *iParam0)
	{
		Global_69232 = -1;
	}
	bVar0 = false;
	iVar1 = 0;
	while (!bVar0 && iVar1 < Global_69229)
	{
		if (Global_69218[iVar1 /*2*/] == *iParam0)
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
	while (iVar2 <= (Global_69229 - 2))
	{
		Global_69218[iVar2 /*2*/] = Global_69218[iVar2 + 1 /*2*/];
		Global_69218[iVar2 /*2*/].f_1 = Global_69218[iVar2 + 1 /*2*/].f_1;
		iVar2++;
	}
	Global_69218[(Global_69229 - 1) /*2*/] = -1;
	Global_69218[(Global_69229 - 1) /*2*/].f_1 = 3;
	Global_69229 = (Global_69229 - 1);
	Global_69230 = 1;
	Global_69231 = unk_0x9698C5C67A3BBE47();
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
	Global_98242[iParam0 /*10*/].f_1 = 1;
}

bool func_247(int iParam0)
{
	return Global_98242[iParam0 /*10*/].f_1;
}

void func_248(var uParam0)
{
	if (*uParam0 == 52)
	{
		func_295(" RAMPAGE 1 - FORCE FREEZE CHAIRS AND PRE-RELEASE FOR B*2124538");
		if (unk_0xD51CFE69539DB6D8(uParam0->f_41[3]))
		{
			unk_0x2878EC06B3F897A0(uParam0->f_41[3], 1);
			unk_0x9083C015A6C271BD(&(uParam0->f_41[3]));
			uParam0->f_41[3] = 0;
		}
		if (unk_0xD51CFE69539DB6D8(uParam0->f_41[4]))
		{
			unk_0x2878EC06B3F897A0(uParam0->f_41[4], 1);
			unk_0x9083C015A6C271BD(&(uParam0->f_41[4]));
			uParam0->f_41[4] = 0;
		}
	}
}

int func_249(var uParam0)
{
	if ((*uParam0 == 54 || *uParam0 == 55) || *uParam0 == 56)
	{
		if (unk_0x8F4395E832F66DDF(unk_0xE7869D5D7816A9B6()) > 0)
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
	unk_0x801429C020C467BA(iVar1);
	unk_0x801429C020C467BA(iVar2);
	unk_0x2B0BB514F9140141(sVar0);
	unk_0x399379B908F89E3D(joaat("weapon_grenadelauncher"), 31, 0);
	while ((!unk_0x5053BF6D5604065B(iVar1) || !unk_0x5053BF6D5604065B(iVar2)) || !unk_0x2917D5E1CB5CE43A(sVar0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!func_259(&(uParam0->f_28[0]), iVar1, -1299.4f, 2506.24f, 21.07f, -122.79f, 0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_258(&(uParam0->f_28[0]));
	unk_0x4C6DD31AB89A02B8(uParam0->f_28[0], "RAMP:PED 0");
	unk_0xDCF460AE46C9489C(uParam0->f_28[0], sVar0, "marines_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[0], 0, 0, 0, 0);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[0], 1, 0, 0, 0);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[0], 2, 0, 0, 0);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[0], 3, 0, 0, 0);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[0], 4, 0, 0, 0);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[0], 5, 0, 0, 0);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[0], 6, 0, 0, 0);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[0], 7, 0, 0, 0);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[0], 8, 0, 0, 0);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[0], 9, 0, 0, 0);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[0], 10, 0, 0, 0);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[0], 11, 0, 0, 0);
	unk_0xAE2E2476C9353748(uParam0->f_28[0], 0);
	unk_0xAE2E2476C9353748(uParam0->f_28[0], 1);
	unk_0xAE2E2476C9353748(uParam0->f_28[0], 2);
	unk_0xAE2E2476C9353748(uParam0->f_28[0], 3);
	unk_0xAE2E2476C9353748(uParam0->f_28[0], 4);
	unk_0xAE2E2476C9353748(uParam0->f_28[0], 5);
	unk_0xAE2E2476C9353748(uParam0->f_28[0], 6);
	unk_0xAE2E2476C9353748(uParam0->f_28[0], 7);
	unk_0xAE2E2476C9353748(uParam0->f_28[0], 8);
	while (!func_259(&(uParam0->f_28[1]), iVar1, -1299.49f, 2505.53f, 21.05f, -101.94f, 0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_258(&(uParam0->f_28[1]));
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[1], 0, 1, 0, 0);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[1], 1, 0, 0, 0);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[1], 2, 0, 0, 0);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[1], 3, 0, 0, 0);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[1], 4, 0, 0, 0);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[1], 5, 0, 0, 0);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[1], 6, 0, 0, 0);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[1], 7, 0, 0, 0);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[1], 8, 0, 0, 0);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[1], 9, 0, 0, 0);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[1], 10, 0, 0, 0);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[1], 11, 0, 0, 0);
	unk_0xAE2E2476C9353748(uParam0->f_28[1], 0);
	unk_0xAE2E2476C9353748(uParam0->f_28[1], 1);
	unk_0xAE2E2476C9353748(uParam0->f_28[1], 2);
	unk_0xAE2E2476C9353748(uParam0->f_28[1], 3);
	unk_0xAE2E2476C9353748(uParam0->f_28[1], 4);
	unk_0xAE2E2476C9353748(uParam0->f_28[1], 5);
	unk_0xAE2E2476C9353748(uParam0->f_28[1], 6);
	unk_0xAE2E2476C9353748(uParam0->f_28[1], 7);
	unk_0xAE2E2476C9353748(uParam0->f_28[1], 8);
	unk_0x4C6DD31AB89A02B8(uParam0->f_28[1], "RAMP:PED 1");
	unk_0xDCF460AE46C9489C(uParam0->f_28[1], sVar0, "marines_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
	while (!func_257(&(uParam0->f_35[0]), iVar2, -1298.16f, 2504.153f, 21.062f, 165.48f))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0xC9CEB5227A733CE6(uParam0->f_35[0]);
	func_256(&(uParam0->f_35[0]));
	unk_0xC1DD29CFE93055E7(uParam0->f_35[0], 1, 0);
	unk_0xC1DD29CFE93055E7(uParam0->f_35[0], 1, 1);
	unk_0x2878EC06B3F897A0(uParam0->f_35[0], 1);
	if (!func_252(&(uParam0->f_41[0]), joaat("weapon_grenadelauncher"), -1297.84f, 2505.91f, 19.34f, func_255(-0.5f)))
	{
	}
	else
	{
		unk_0x70EE8EFEE355AD29(uParam0->f_41[0], 0, 0);
		unk_0x88A973CE47FBEF95(uParam0->f_41[0], -1297.84f, 2505.91f, 19.34f, 1, 0, 0, 1);
		unk_0x151F32CB40BE730C(uParam0->f_41[0], func_255(-0.5f));
		unk_0x2878EC06B3F897A0(uParam0->f_41[0], 1);
	}
	StringCopy(&(uParam0->f_9), "TRVRAM_5_CON", 24);
	uParam0->f_27 = 0;
	unk_0x839E9476E54502A2(iVar1);
	unk_0x839E9476E54502A2(iVar2);
}

int func_252(var uParam0, int iParam1, struct<3> Param2, float fParam5)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD51CFE69539DB6D8(*uParam0))
	{
		unk_0xD4E454973E16D31B(uParam0);
		*uParam0 = 0;
	}
	iVar0 = unk_0x761C106ED7012D7F(iParam1);
	unk_0x801429C020C467BA(iVar0);
	iVar1 = unk_0x9D40BBF80D8F5E8A() + 10000;
	while (unk_0x9D40BBF80D8F5E8A() < iVar1)
	{
		if (unk_0x5053BF6D5604065B(iVar0))
		{
			*uParam0 = unk_0xB03934094488FFF4(iParam1, -1, Param2, 1, 1065353216, 0);
			unk_0x839E9476E54502A2(iVar0);
			if (func_254(iParam1))
			{
				if (unk_0x6BFA35CC05C7B4D3(*uParam0, func_253(iParam1, 0)))
				{
					unk_0x2833E4D766D2694C(*uParam0, func_253(iParam1, 0));
				}
				else if (unk_0x6BFA35CC05C7B4D3(*uParam0, func_253(iParam1, 1)))
				{
					unk_0x2833E4D766D2694C(*uParam0, func_253(iParam1, 1));
				}
			}
			if (unk_0xD51CFE69539DB6D8(*uParam0))
			{
				unk_0x88A973CE47FBEF95(*uParam0, Param2, 1, 0, 0, 1);
				unk_0x151F32CB40BE730C(*uParam0, fParam5);
				return 1;
			}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x839E9476E54502A2(iVar0);
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
	if (!unk_0xD51CFE69539DB6D8(*uParam0))
	{
		return 0;
	}
	unk_0x059F430B70190AB2(*uParam0, 1);
	return 1;
}

int func_257(var uParam0, int iParam1, struct<3> Param2, float fParam5)
{
	if (unk_0xD51CFE69539DB6D8(*uParam0))
	{
		unk_0x9E55BD45B84E7BDC(uParam0);
		*uParam0 = 0;
	}
	*uParam0 = unk_0xD504D1FF5DD2FFD7(iParam1, Param2, fParam5, 1, 1);
	if (!unk_0xD51CFE69539DB6D8(*uParam0))
	{
		return 0;
	}
	return 1;
}

int func_258(var uParam0)
{
	if (!unk_0xD51CFE69539DB6D8(*uParam0))
	{
		return 0;
	}
	unk_0x82F10D839CF95C09(*uParam0, 0);
	unk_0x4C6DD31AB89A02B8(*uParam0, "RAMP:SCENE PED");
	unk_0x321C1AA209172C00(*uParam0, 0);
	unk_0x9BEE7E791BC4D38B(*uParam0, 1);
	return 1;
}

int func_259(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6)
{
	if (unk_0xD51CFE69539DB6D8(*uParam0))
	{
		unk_0x2C9DDB5306DF417C(uParam0);
		*uParam0 = 0;
	}
	*uParam0 = unk_0xA7F4088D9A2629CC(26, iParam1, Param2, fParam5, 1, 1);
	if (!unk_0xD51CFE69539DB6D8(*uParam0))
	{
		return 0;
	}
	if (bParam6)
	{
		func_260(*uParam0, Param2);
		unk_0x151F32CB40BE730C(*uParam0, fParam5);
	}
	unk_0x82F10D839CF95C09(*uParam0, 0);
	unk_0x4C6DD31AB89A02B8(*uParam0, "RAMP:SCENE PED");
	unk_0x321C1AA209172C00(*uParam0, 0);
	unk_0x9BEE7E791BC4D38B(*uParam0, 1);
	return 1;
}

Vector3 func_260(var uParam0, struct<3> Param1)
{
	var uVar0;
	
	Param1.f_2 = (Param1.f_2 + 0.15f);
	if (unk_0xC4A43A7E257E1FD9(Param1, &uVar0, 0))
	{
		Param1.f_2 = uVar0;
	}
	if (func_205(uParam0))
	{
		unk_0x88A973CE47FBEF95(uParam0, Param1, 1, 0, 0, 1);
	}
	return Param1;
}

int func_261()
{
	return unk_0x8668A841B325FF16(-177.0628f, -1679.715f, 33.16263f, -157.0628f, -1659.715f, 37.16263f, 0, 1, 1, 1);
}

void func_262(var uParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = joaat("ig_ramp_gang");
	sVar1 = "misstrvram_4";
	unk_0x801429C020C467BA(iVar0);
	unk_0x2B0BB514F9140141(sVar1);
	unk_0x399379B908F89E3D(joaat("weapon_assaultrifle"), 31, 0);
	while (!unk_0x5053BF6D5604065B(iVar0) || !unk_0x2917D5E1CB5CE43A(sVar1))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!func_259(&(uParam0->f_28[0]), iVar0, -161.37f, -1669.63f, 33.1f, func_255(1.03f), 1))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_258(&(uParam0->f_28[0]));
	unk_0x4C6DD31AB89A02B8(uParam0->f_28[0], "RP0_NOGUN");
	unk_0x659DCAE2E07E7AC2(uParam0->f_28[0]);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[0], 0, 1, 0, 0);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[0], 1, 0, 0, 0);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[0], 2, 0, 0, 0);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[0], 3, 0, 1, 0);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[0], 4, 0, 0, 0);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[0], 5, 0, 0, 0);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[0], 6, 0, 0, 0);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[0], 7, 0, 0, 0);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[0], 8, 0, 0, 0);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[0], 9, 0, 0, 0);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[0], 10, 0, 1, 0);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[0], 11, 0, 0, 0);
	unk_0xDCF460AE46C9489C(uParam0->f_28[0], sVar1, "thugs_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
	while (!func_259(&(uParam0->f_28[1]), iVar0, -161.93f, -1670.39f, 33.14f, func_255(0.2f), 1))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_258(&(uParam0->f_28[1]));
	unk_0x4C6DD31AB89A02B8(uParam0->f_28[1], "RP1_GUN");
	unk_0x659DCAE2E07E7AC2(uParam0->f_28[1]);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[1], 0, 0, 0, 0);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[1], 1, 0, 0, 0);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[1], 2, 0, 0, 0);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[1], 3, 1, 1, 0);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[1], 4, 0, 0, 0);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[1], 5, 0, 0, 0);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[1], 6, 0, 0, 0);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[1], 7, 0, 0, 0);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[1], 8, 0, 0, 0);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[1], 9, 0, 0, 0);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[1], 10, 1, 0, 0);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[1], 11, 0, 0, 0);
	unk_0xCC897563F1971D6A(uParam0->f_28[1], joaat("weapon_assaultrifle"), 100, 1, 1);
	unk_0xDCF460AE46C9489C(uParam0->f_28[1], sVar1, "thugs_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
	StringCopy(&(uParam0->f_9), "TRVRAM_4", 24);
	uParam0->f_27 = 0;
	unk_0x839E9476E54502A2(iVar0);
}

void func_263(var uParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = joaat("ig_ramp_mex");
	sVar1 = "misstrvram_3";
	unk_0x801429C020C467BA(iVar0);
	unk_0x2B0BB514F9140141(sVar1);
	unk_0x399379B908F89E3D(joaat("weapon_microsmg"), 31, 10);
	while ((!unk_0x5053BF6D5604065B(iVar0) || !unk_0x8150EED628D374BE(joaat("weapon_microsmg"))) || !unk_0x2917D5E1CB5CE43A(sVar1))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!func_259(&(uParam0->f_28[0]), iVar0, 464.6125f, -1848.767f, 27.816f, 177.39f, 1))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_258(&(uParam0->f_28[0]));
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[0], 0, 0, 0, 0);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[0], 1, 0, 0, 0);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[0], 2, 0, 0, 0);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[0], 3, 0, 0, 0);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[0], 4, 0, 0, 0);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[0], 5, 0, 0, 0);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[0], 6, 0, 0, 0);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[0], 7, 0, 0, 0);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[0], 8, 0, 0, 0);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[0], 9, 1, 0, 0);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[0], 10, 0, 0, 0);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[0], 11, 0, 0, 0);
	unk_0x4C6DD31AB89A02B8(uParam0->f_28[0], "RAMP:PED 0");
	unk_0xDCF460AE46C9489C(uParam0->f_28[0], sVar1, "mexicans_idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
	while (!func_259(&(uParam0->f_28[1]), iVar0, 465.782f, -1849.073f, 27.817f, 129.92f, 1))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_258(&(uParam0->f_28[1]));
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[1], 0, 1, 0, 0);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[1], 1, 0, 0, 0);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[1], 2, 0, 0, 0);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[1], 3, 1, 0, 0);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[1], 4, 0, 1, 0);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[1], 5, 0, 0, 0);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[1], 6, 0, 0, 0);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[1], 7, 0, 0, 0);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[1], 8, 1, 0, 0);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[1], 9, 0, 0, 0);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[1], 10, 0, 0, 0);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[1], 11, 0, 0, 0);
	unk_0x4C6DD31AB89A02B8(uParam0->f_28[1], "RAMP:PED 1");
	unk_0xDCF460AE46C9489C(uParam0->f_28[1], sVar1, "mexicans_idle_b", 8f, -8f, -1, 1, 0, 0, 0, 0);
	if (func_252(&(uParam0->f_41[0]), joaat("weapon_microsmg"), 467f, -1855.4f, 32f, func_255(-0.85f)))
	{
		unk_0x41AFDFB8D6346E5E(uParam0->f_41[0], joaat("component_at_scope_macro"));
		unk_0x41AFDFB8D6346E5E(uParam0->f_41[0], joaat("component_microsmg_clip_02"));
	}
	StringCopy(&(uParam0->f_9), "TRVRAM_3", 24);
	uParam0->f_27 = 0;
	unk_0x839E9476E54502A2(iVar0);
}

int func_264()
{
	return func_265(1182.137f, -400.4787f, 66.92414f, 8f);
}

var func_265(struct<3> Param0, float fParam3)
{
	struct<3> Var0;
	
	Var0 = { (fParam3 / 2f), (fParam3 / 2f), (fParam3 / 2f) };
	return unk_0x8668A841B325FF16(Param0 - Var0, Param0 + Var0, 0, 1, 1, 1);
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
	unk_0x399379B908F89E3D(joaat("weapon_sawnoffshotgun"), 31, 0);
	unk_0x801429C020C467BA(iVar0);
	unk_0x801429C020C467BA(iVar1);
	unk_0x801429C020C467BA(iVar2);
	unk_0x2B0BB514F9140141(sVar3);
	func_270(&uLocal_113);
	while ((((!unk_0x5053BF6D5604065B(iVar0) || !unk_0x5053BF6D5604065B(iVar1)) || !unk_0x5053BF6D5604065B(iVar2)) || !unk_0x2917D5E1CB5CE43A(sVar3)) || !func_269(&uLocal_113))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0xFF08C54E7EC23A77(1180.021f, -401.7374f, 66.8767f, 0.75f, 0);
	uParam0->f_41[2] = unk_0xEE756BAA02761E84(1179.778f, -401.7374f, 66.8697f, 1f, joaat("prop_chair_01a"), 1, 0, 1);
	if (unk_0xD51CFE69539DB6D8(uParam0->f_41[2]))
	{
		unk_0x88A973CE47FBEF95(uParam0->f_41[2], 1180.05f, -401.83f, 66.88f, 1, 0, 0, 1);
		unk_0x11089405D5CD3FD2(uParam0->f_41[2], 0f, 0f, 50f, 2, 1);
		unk_0x2878EC06B3F897A0(uParam0->f_41[2], 1);
	}
	uParam0->f_41[3] = unk_0xEE756BAA02761E84(1181.243f, -402.5309f, 67.2564f, 1f, joaat("prop_table_01"), 1, 0, 1);
	if (unk_0xD51CFE69539DB6D8(uParam0->f_41[3]))
	{
		unk_0x2878EC06B3F897A0(uParam0->f_41[3], 1);
	}
	while (!func_259(&(uParam0->f_28[0]), iVar0, 1181.547f, -400.0954f, 67.5757f, -124.2928f, 0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_258(&(uParam0->f_28[0]));
	unk_0x2878EC06B3F897A0(uParam0->f_28[0], 1);
	unk_0x659DCAE2E07E7AC2(uParam0->f_28[0]);
	unk_0x497AFDFE79EEFE4F(uParam0->f_28[0], 2, 0, 0, 0);
	func_268(&(uParam0->f_41[1]), iVar2, 1181.547f, -400.0954f, 65.5757f, 0f);
	unk_0x9E4D318905B670CB(uParam0->f_41[1], uParam0->f_28[0], unk_0x206A9EC63F98F19D(uParam0->f_28[0], iVar4), Var8, Var5, 1, 0, 0, 0, 2, 1);
	func_267(&uLocal_113, 0, 3);
	if (!unk_0x47B2F09FC779F5CD(uParam0->f_59))
	{
		uParam0->f_59 = unk_0xB839A1C489B63ACC(Local_107, Local_110, 2);
		if (func_112(uParam0->f_28[0]))
		{
			unk_0x360F0D01112F8AD0(uParam0->f_28[0], uParam0->f_59, sVar3, "hipster_idle", 8f, -8f, 513, 0, 1148846080, 0);
		}
		unk_0x3A7DEF86891D2891(uParam0->f_59, 1);
	}
	if (!func_252(&(uParam0->f_41[0]), joaat("weapon_sawnoffshotgun"), 1162.2f, -395.4f, 72.9f, func_255(-0.71f)))
	{
	}
	StringCopy(&(uParam0->f_9), "TRVRAM_2_CONCAT", 24);
	uParam0->f_27 = 0;
	unk_0x839E9476E54502A2(iVar0);
	unk_0x839E9476E54502A2(iVar1);
	unk_0x839E9476E54502A2(iVar2);
}

void func_267(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	if (unk_0x4A4851D44CDF03C0(*uParam0))
	{
		if (bParam1)
		{
			unk_0x6B677D523F73FDF8(&uVar0);
		}
		else
		{
			if (!unk_0x23029FE435A4B2A1("npcphone"))
			{
				unk_0x81A88F033907F069("npcphone", 0);
				unk_0xB4B0172C1DF0ECED(joaat("prop_npc_phone"));
			}
			uVar0 = unk_0xD322440EC90C6129("npcphone");
		}
		unk_0xFEC09A9FB6A5B7D4(uVar0);
		unk_0xA4F3B84032D46C13(*uParam0, "DISPLAY_VIEW");
		unk_0x43C93E686A1E92C5(iParam2);
		unk_0xFF141057ED7B4C73();
		unk_0xAF5B7C9C0A5116E9(*uParam0, Global_14333, Global_14334, Global_14335, Global_14336, 255, 255, 255, 255, 0);
	}
}

void func_268(var uParam0, int iParam1, struct<3> Param2, float fParam5)
{
	func_137(uParam0);
	*uParam0 = unk_0x8C15E6EC0BC9B4BE(iParam1, Param2, 1, 1, 0);
	unk_0x151F32CB40BE730C(*uParam0, fParam5);
}

int func_269(var uParam0)
{
	if (unk_0x4A4851D44CDF03C0(*uParam0))
	{
		return 1;
	}
	return 0;
}

void func_270(var uParam0)
{
	*uParam0 = unk_0xE3C796DC28BC3254(func_271());
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
	unk_0x801429C020C467BA(iVar11);
	unk_0x801429C020C467BA(iVar12);
	unk_0x801429C020C467BA(iVar13);
	unk_0x2B0BB514F9140141(sVar3);
	unk_0x399379B908F89E3D(joaat("weapon_assaultrifle"), 31, 0);
	while ((((!unk_0x5053BF6D5604065B(iVar11) || !unk_0x5053BF6D5604065B(iVar12)) || !unk_0x5053BF6D5604065B(iVar13)) || !unk_0x2917D5E1CB5CE43A(sVar3)) || !unk_0x8150EED628D374BE(joaat("weapon_assaultrifle")))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!func_259(&(uParam0->f_28[0]), iVar11, 907.998f, 3643.826f, 32.29243f, -173.0453f, 0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (func_112(uParam0->f_28[0]))
	{
		unk_0x497AFDFE79EEFE4F(uParam0->f_28[0], 0, 0, 0, 0);
		unk_0x497AFDFE79EEFE4F(uParam0->f_28[0], 1, 0, 0, 0);
		unk_0x497AFDFE79EEFE4F(uParam0->f_28[0], 2, 0, 0, 0);
		unk_0x497AFDFE79EEFE4F(uParam0->f_28[0], 3, 0, 0, 0);
		unk_0x497AFDFE79EEFE4F(uParam0->f_28[0], 4, 0, 0, 0);
		unk_0x497AFDFE79EEFE4F(uParam0->f_28[0], 5, 0, 0, 0);
		unk_0x497AFDFE79EEFE4F(uParam0->f_28[0], 6, 0, 0, 0);
		unk_0x497AFDFE79EEFE4F(uParam0->f_28[0], 7, 0, 0, 0);
		unk_0x497AFDFE79EEFE4F(uParam0->f_28[0], 8, 0, 0, 0);
		unk_0x497AFDFE79EEFE4F(uParam0->f_28[0], 9, 0, 0, 0);
		unk_0x497AFDFE79EEFE4F(uParam0->f_28[0], 10, 0, 0, 0);
		unk_0x497AFDFE79EEFE4F(uParam0->f_28[0], 11, 0, 0, 0);
		Var0 = { unk_0x5D551231E967CD2B(uParam0->f_28[0], iVar4, 0f, 0f, 0f) };
		unk_0x4C6DD31AB89A02B8(uParam0->f_28[0], "RAMP:PED 0");
		func_268(&(uParam0->f_41[1]), iVar13, Var0, 0f);
		unk_0x9E4D318905B670CB(uParam0->f_41[1], uParam0->f_28[0], unk_0x206A9EC63F98F19D(uParam0->f_28[0], iVar4), Var8, Var5, 1, 1, 0, 0, 2, 1);
		unk_0x351E04F63B74E221(uParam0->f_41[1], 1);
		unk_0x2878EC06B3F897A0(uParam0->f_28[0], 1);
		unk_0x1C26C4B0DAB91B21(uParam0->f_28[0], 208, 1);
		unk_0x690C5239500171FE(uParam0->f_28[0], joaat("player"));
	}
	while (!func_259(&(uParam0->f_28[1]), iVar11, 909.3126f, 3643.507f, 32.2952f, 153.0127f, 0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (func_112(uParam0->f_28[1]))
	{
		unk_0x497AFDFE79EEFE4F(uParam0->f_28[1], 0, 1, 0, 0);
		unk_0x497AFDFE79EEFE4F(uParam0->f_28[1], 1, 0, 0, 0);
		unk_0x497AFDFE79EEFE4F(uParam0->f_28[1], 2, 1, 0, 0);
		unk_0x497AFDFE79EEFE4F(uParam0->f_28[1], 3, 1, 0, 0);
		unk_0x497AFDFE79EEFE4F(uParam0->f_28[1], 4, 1, 0, 0);
		unk_0x497AFDFE79EEFE4F(uParam0->f_28[1], 5, 0, 0, 0);
		unk_0x497AFDFE79EEFE4F(uParam0->f_28[1], 6, 0, 0, 0);
		unk_0x497AFDFE79EEFE4F(uParam0->f_28[1], 7, 0, 0, 0);
		unk_0x497AFDFE79EEFE4F(uParam0->f_28[1], 8, 0, 0, 0);
		unk_0x497AFDFE79EEFE4F(uParam0->f_28[1], 9, 0, 0, 0);
		unk_0x497AFDFE79EEFE4F(uParam0->f_28[1], 10, 0, 0, 0);
		unk_0x497AFDFE79EEFE4F(uParam0->f_28[1], 11, 0, 0, 0);
		Var0 = { unk_0x5D551231E967CD2B(uParam0->f_28[1], iVar4, 0f, 0f, 0f) };
		unk_0x4C6DD31AB89A02B8(uParam0->f_28[1], "RAMP:PED 1");
		func_268(&(uParam0->f_41[2]), iVar13, Var0, 0f);
		unk_0x9E4D318905B670CB(uParam0->f_41[2], uParam0->f_28[1], unk_0x206A9EC63F98F19D(uParam0->f_28[1], iVar4), Var8, Var5, 1, 1, 0, 0, 2, 1);
		unk_0x351E04F63B74E221(uParam0->f_41[2], 1);
		unk_0x2878EC06B3F897A0(uParam0->f_28[1], 1);
		unk_0x1C26C4B0DAB91B21(uParam0->f_28[1], 208, 1);
		unk_0x690C5239500171FE(uParam0->f_28[1], joaat("player"));
	}
	uParam0->f_41[3] = unk_0xEE756BAA02761E84(909.3884f, 3643.652f, 31.699f, 1f, joaat("prop_table_03b_chr"), 1, 0, 1);
	if (unk_0xD51CFE69539DB6D8(uParam0->f_41[3]))
	{
		unk_0x2878EC06B3F897A0(uParam0->f_41[3], 1);
	}
	uParam0->f_41[4] = unk_0xEE756BAA02761E84(908.0437f, 3643.682f, 31.7073f, 1f, joaat("prop_table_03b_chr"), 1, 0, 1);
	if (unk_0xD51CFE69539DB6D8(uParam0->f_41[4]))
	{
		unk_0x2878EC06B3F897A0(uParam0->f_41[4], 1);
	}
	if (!unk_0x47B2F09FC779F5CD(uParam0->f_59))
	{
		uParam0->f_59 = unk_0xB839A1C489B63ACC(910.13f, 3643.74f, 31.69f, 0f, 0f, func_255(-0.26f), 2);
		if (func_112(uParam0->f_28[0]))
		{
			unk_0x360F0D01112F8AD0(uParam0->f_28[0], uParam0->f_59, sVar3, "redneck_idle_a", 8f, -8f, 513, 0, 1148846080, 0);
		}
		if (func_112(uParam0->f_28[1]))
		{
			unk_0x360F0D01112F8AD0(uParam0->f_28[1], uParam0->f_59, sVar3, "redneck_idle_b", 8f, -8f, 513, 0, 1148846080, 0);
		}
		unk_0x3A7DEF86891D2891(uParam0->f_59, 1);
	}
	if (!func_252(&(uParam0->f_41[0]), joaat("weapon_assaultrifle"), 907.52f, 3644.32f, 31.86f, -164.89f))
	{
	}
	unk_0x839E9476E54502A2(iVar11);
	unk_0x839E9476E54502A2(iVar12);
	StringCopy(&(uParam0->f_9), "TRVRAM_1", 24);
	uParam0->f_27 = 0;
}

int func_274(int iParam0)
{
	if (!unk_0x18544C93469391DA())
	{
		return 1;
	}
	if (unk_0xF478777FFCC96862())
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
	if (!unk_0xB519E5386FBF69E5(Var0.f_26, iVar32))
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
		if (unk_0xB519E5386FBF69E5(Global_99155.f_17188[iParam0 /*6*/], 0))
		{
			if (!unk_0xB519E5386FBF69E5(Global_99155.f_17188[iParam0 /*6*/], 3))
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
		if (unk_0x7F38A542899D217A((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x7F38A542899D217A((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x7F38A542899D217A((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x7F38A542899D217A((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x7F38A542899D217A((Param0.f_1 - Param3.f_1)) <= fParam6)
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
	return Global_99155.f_7699.f_99.f_58[iParam0];
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
			unk_0x3AD14BFC20FCADDB(iLocal_300, 0);
		}
	}
	if (unk_0xA16CC47187A94189())
	{
		unk_0xC36FD2B6875CA6EA(0);
	}
	if (iLocal_292)
	{
		if (func_2("RAMP_HELP_TRIG"))
		{
			unk_0x1D208E4A4E1D4FFE(1);
			iLocal_292 = 0;
		}
	}
	func_281();
	func_295("SCRIPT TERMINATED");
	Global_88630 = 0;
	unk_0x52F20802944F8DCE();
}

void func_281()
{
	func_295("Running end routines.");
	Global_98873 = (Global_98873 - 1);
}

int func_282(var uParam0)
{
	if (func_135(uParam0))
	{
		if (unk_0x2917D5E1CB5CE43A(*uParam0))
		{
			unk_0x8B10CC9832827D27(*uParam0);
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
	if (unk_0xD51CFE69539DB6D8(*uParam0))
	{
		if (unk_0x74A345D6EBF02AD7(*uParam0))
		{
			unk_0x27B54A887EC71B05(*uParam0, 1, 1);
		}
		if (!bParam1)
		{
			unk_0x9083C015A6C271BD(uParam0);
		}
		else
		{
			unk_0x2B23A4981329400D(*uParam0);
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
	if (unk_0xD51CFE69539DB6D8(*uParam0))
	{
		unk_0x76B2D234F1895632(*uParam0);
		if (unk_0x28D33422BA6C479D(*uParam0) && unk_0x4C5CA989AEF3A14C(*uParam0, 1))
		{
			unk_0xC1F2137782A816E9(uParam0);
		}
	}
}

void func_290(var uParam0)
{
	if (unk_0xD51CFE69539DB6D8(*uParam0))
	{
		if (!unk_0x28D33422BA6C479D(*uParam0))
		{
			unk_0x20BB4B94CC6DDC9A(*uParam0, 1, 0);
		}
		if (func_141(*uParam0))
		{
			if (unk_0x28D33422BA6C479D(*uParam0) && unk_0x4C5CA989AEF3A14C(*uParam0, 1))
			{
				if (func_112(unk_0xE7869D5D7816A9B6()))
				{
					if (unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), *uParam0, 0))
					{
						unk_0xC1F2137782A816E9(uParam0);
						return;
					}
				}
				unk_0x9E55BD45B84E7BDC(uParam0);
			}
		}
		else
		{
			if (func_112(unk_0xE7869D5D7816A9B6()))
			{
				if (unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), *uParam0, 0))
				{
					unk_0xC1F2137782A816E9(uParam0);
					return;
				}
			}
			unk_0x9E55BD45B84E7BDC(uParam0);
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
	if (unk_0xD51CFE69539DB6D8(*uParam0))
	{
		if (!unk_0xAF437D7C802AB246(*uParam0))
		{
			unk_0xC602CB510D8B9EAE(*uParam0, 0);
			if (iParam3 == 0)
			{
				unk_0xAA6742AEFA0B2BC4(*uParam0);
			}
			unk_0x8D6671D78D1F569B(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0x9BEE7E791BC4D38B(*uParam0, 0);
			}
		}
		unk_0x506D42CB68AE4EA5(uParam0);
	}
}

void func_294(var uParam0)
{
	if (unk_0xD51CFE69539DB6D8(*uParam0))
	{
		if (!unk_0x76B2D234F1895632(*uParam0))
		{
			unk_0xC602CB510D8B9EAE(*uParam0, 0);
		}
		if (!unk_0x28D33422BA6C479D(*uParam0))
		{
			unk_0x20BB4B94CC6DDC9A(*uParam0, 1, 0);
		}
		unk_0x2C9DDB5306DF417C(uParam0);
	}
}

void func_295(char* sParam0)
{
	if (!unk_0xF6917DE0E003509D(sParam0))
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
	Global_98873++;
}

