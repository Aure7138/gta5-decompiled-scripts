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
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	int iLocal_45 = 0;
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
	bool bLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	struct<3> Local_63 = { 0, 0, 0 } ;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	var uLocal_70 = 0;
	bool bLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	var uLocal_76[1] = { 0 };
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	var uLocal_81 = 16;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
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
	var uLocal_104 = 0;
	var uLocal_105 = 0;
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
	var uLocal_269 = 1097859072;
	var uLocal_270 = 1500;
	var uLocal_271 = 45;
	var uLocal_272 = 1103626240;
	var uLocal_273 = 5;
	var uLocal_274[1] = { 0 };
	char* sLocal_276 = NULL;
	char* sLocal_277 = NULL;
	var uLocal_278 = 1;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282[1] = { 0 };
	var uLocal_284[4] = { 0, 0, 0, 0 };
	struct<9> Local_289 = { 0, 0, 0, 0, 0, 0, 0, 21, 6 } ;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	struct<3> Local_302 = { 0, 0, 0 } ;
	struct<3> Local_305 = { 0, 0, 0 } ;
	struct<3> Local_308 = { 0, 0, 0 } ;
	struct<3> Local_311 = { 0, 0, 0 } ;
	struct<3> Local_314 = { 0, 0, 0 } ;
	struct<3> Local_317 = { 0, 0, 0 } ;
	struct<3> Local_320 = { 0, 0, 0 } ;
	struct<3> Local_323 = { 0, 0, 0 } ;
	float fLocal_326 = 0f;
	float fLocal_327 = 0f;
	float fLocal_328 = 0f;
	float fLocal_329 = 0f;
	int iLocal_330 = 0;
	var uLocal_331 = 0;
	int iLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	int iLocal_335 = 0;
	bool bLocal_336 = 0;
	bool bLocal_337 = 0;
	int iLocal_338 = 0;
	var uLocal_339 = 0;
	int iLocal_340 = 0;
	struct<5> ScriptParam_0 = { 1, 0, 0, 0, 0 } ;
	var uScriptParam_5 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	Local_63 = { 500f, 500f, 500f };
	fLocal_329 = -1f;
	iLocal_332 = -1;
	bLocal_336 = true;
	unk_0x996557D48454AE40("stripperhome");
	unk_0x5B0FC38A6C315E32(1);
	unk_0xDFF09A72B40AC5D9(unk_0xA34E7C2A5118D638(), 1);
	if (unk_0x24862A9CDC8F8874(75))
	{
		func_287();
	}
	bLocal_337 = ScriptParam_0.f_5;
	if (bLocal_337)
	{
		unk_0x170190A515596E3F(32, 0, -1);
		func_282(0, -1, 0);
		unk_0xB575A770677DC316(1);
		unk_0x6ECAEE4901F465A1(0);
	}
	uLocal_76[0] = ScriptParam_0[0];
	Global_100001.f_1 = uLocal_76[0];
	bVar0 = false;
	bVar1 = true;
	iVar2 = unk_0x342FDFC48311CCCE();
	if (func_281() && ScriptParam_0.f_4)
	{
		bVar1 = false;
		if (iVar2 > 14 && iVar2 < 22)
		{
			bVar0 = true;
		}
	}
	while (((!func_252(&ScriptParam_0, bVar0) && iLocal_74 != 6) && iLocal_74 != 5) && (iLocal_74 != -1 || !func_251(uLocal_333, 1024)))
	{
		func_243(0);
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x4BBD72565A0AF033(func_242(0, 0));
	unk_0x4BBD72565A0AF033(func_242(1, 0));
	if (!bVar1)
	{
		iLocal_74 = 2;
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (iLocal_335 > 0)
		{
			func_240();
			iLocal_335 = (iLocal_335 - unk_0xF2DB717A73826179((unk_0x6CE7EDC8B5C46819() * 1000f)));
		}
		switch (iLocal_74)
		{
			case -1:
				func_239();
				break;
			
			case 0:
				func_200(1);
				break;
			
			case 1:
				func_103();
				break;
			
			case 2:
				func_200(0);
				break;
			
			case 3:
				func_85();
				break;
			
			case 4:
				func_35(bLocal_336);
				break;
			
			case 5:
				func_11();
				break;
			
			case 6:
				if (!func_10(&uLocal_261))
				{
					func_7(&uLocal_261);
				}
				else if (func_1(&uLocal_261, 7.5f))
				{
					func_287();
				}
				break;
		}
	}
}

int func_1(var uParam0, float fParam1)
{
	if (func_3(uParam0, fParam1))
	{
		func_2(uParam0);
		return 1;
	}
	return 0;
}

void func_2(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_3(var uParam0, float fParam1)
{
	if (func_10(uParam0))
	{
		if (func_4(uParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float func_4(var uParam0)
{
	if (func_10(uParam0))
	{
		if (func_6(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_5(unk_0xDCC86F723E82125E(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_5(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		return (unk_0xBBDA792448DB5A89(unk_0x693EBB4F13506457()) / 1000f);
	}
	if (unk_0xBBAE3E0C60A8AD4B())
	{
		iVar0 = unk_0x2AA13A84EE2D3B24();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x693EBB4F13506457()) / 1000f);
}

bool func_6(var uParam0)
{
	return unk_0xDCC86F723E82125E(*uParam0, 2);
}

void func_7(var uParam0)
{
	if (!func_10(uParam0))
	{
		func_8(uParam0);
	}
}

void func_8(var uParam0)
{
	func_9(uParam0, 0f);
}

void func_9(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_5(unk_0xDCC86F723E82125E(*uParam0, 4)) - fParam1);
	unk_0x59A0729D503ED758(uParam0, 1);
	unk_0x77621132305B133B(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_10(var uParam0)
{
	return unk_0xDCC86F723E82125E(*uParam0, 1);
}

void func_11()
{
	if (!func_251(uLocal_333, 8192))
	{
		if (func_34())
		{
			func_25();
		}
		else
		{
			iLocal_74 = 6;
		}
	}
	if (func_251(uLocal_333, 16384))
	{
		if (func_12())
		{
			iLocal_74 = 6;
		}
	}
}

int func_12()
{
	if (unk_0xB6900B8CB0ABBD2B(uLocal_274[0]))
	{
		return 1;
	}
	if (func_251(uLocal_333, 8192))
	{
		unk_0x1F64302AA4F597A7(uLocal_274[0], 60, 1);
		if (unk_0xA0C23498D8E0BB93(uLocal_274[0], 96.8033f, -1287.597f, 28.2688f, 5f, 5f, 2f, 0, 1, 1) || func_24(unk_0xC8B93D94F8954288(), 96.8033f, -1287.597f, 28.2688f, 1) > 100f)
		{
			if (unk_0x32AADF258A6B79F2(96.12f, -1284.91f, 29.43f, 5f, joaat("prop_magenta_door"), 0))
			{
				unk_0xBEBEBC7C7A0BDA34(joaat("prop_magenta_door"), 96.12f, -1284.91f, 29.43f, 1, 0f, 0);
			}
			if (unk_0x844838E5D8A21336(uLocal_284[0]))
			{
				if (unk_0xB1E18FA70927BDAB(uLocal_284[0]))
				{
					func_13(1, 1, 0);
					unk_0x2544549FDE4C3A7E(false, 0, 3000, 1, 0, 0);
					unk_0x5CF5A880ED809DDA(uLocal_284[0], 1);
				}
			}
			unk_0x26B3B761603F5232(&(uLocal_274[0]));
			return 1;
		}
	}
	return 0;
}

void func_13(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		unk_0x6C1CBBF18B93CB8E(unk_0x1A96BAEAC664567A(), true, 0);
	}
	unk_0x5B712287C9AB5D4B(1);
	func_15(0, 1, iParam2, 0);
	if (bParam1)
	{
		unk_0xB7709513BF7C1AC0(1);
		unk_0xB1DF6C0157E453DE(1);
	}
	func_14(23, 0);
}

void func_14(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x59A0729D503ED758(&Global_25359, iParam0);
	}
	else
	{
		unk_0x77621132305B133B(&Global_25359, iParam0);
	}
}

void func_15(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0xD693CD4BF91071EA(unk_0xA34E7C2A5118D638());
		unk_0xBFDE8C755DF4A1ED(unk_0xA34E7C2A5118D638(), 1);
		unk_0x8F9941C14FA3BF97(unk_0xA34E7C2A5118D638(), 1);
		func_23(1);
		unk_0xC0E7FF19962AE47A();
		unk_0x31592941AC9991FE();
		if (Global_14413.f_1 > 3)
		{
			if (unk_0x44E93B894936152F())
			{
				unk_0xB518E9C8553B1D2B(0);
			}
			if (!func_22())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_21(1, iParam3, iParam2, 0);
		Global_55665 = 1;
		Global_67971 = 1;
		Global_69315 = 1;
	}
	else
	{
		func_23(0);
		unk_0x11D0AD0D13C88D1A();
		Global_55665 = 0;
		if (bParam1)
		{
			unk_0x48D86334348F315A();
		}
		unk_0xBFDE8C755DF4A1ED(unk_0xA34E7C2A5118D638(), 0);
		unk_0x8F9941C14FA3BF97(unk_0xA34E7C2A5118D638(), 0);
		func_21(0, iParam3, iParam2, 0);
		if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()) && !func_16(unk_0xA34E7C2A5118D638()))
		{
			unk_0xEE6504C7ECC425AB(unk_0xC8B93D94F8954288(), 0);
		}
		Global_69315 = 0;
	}
}

int func_16(int iParam0)
{
	if (func_18(iParam0, 0))
	{
		return 1;
	}
	if (func_17())
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

bool func_17()
{
	return unk_0xDCC86F723E82125E(Global_2359301, 3);
}

bool func_18(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xA34E7C2A5118D638())
	{
		bVar0 = func_19(-1, 0) == 8;
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

int func_19(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_20();
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

int func_20()
{
	return Global_1312746;
}

int func_21(int iParam0, var uParam1, var uParam2, int iParam3)
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

int func_22()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_23(int iParam0)
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

float func_24(int iParam0, struct<3> Param1, int iParam4)
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

void func_25()
{
	var uVar0;
	
	func_28();
	if (unk_0x32AADF258A6B79F2(96.12f, -1284.91f, 29.43f, 5f, joaat("prop_magenta_door"), 0))
	{
		unk_0xBEBEBC7C7A0BDA34(joaat("prop_magenta_door"), 96.12f, -1284.91f, 29.43f, 0, 0f, 0);
	}
	func_26(&uLocal_333, 16384);
	unk_0xB7A2078CD1C9A82F(uLocal_274[0], 0);
	unk_0xC778754E36F3FFD6(uLocal_274[0], 104, 1);
	unk_0x3E2E609450787FFE(&uVar0);
	unk_0x81333BEA4837207C(0, 98.2041f, -1291.252f, 28.2688f, 1f, -1, 0.25f, 1, 1193033728);
	unk_0x81333BEA4837207C(0, 107.6303f, -1304.742f, 27.7688f, 1f, -1, 0.25f, 0, 1193033728);
	unk_0x5323F488E6A1B660(0, "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -4f, 15000, 1, 0, 0, 0, 0);
	unk_0x939BC11172AA1303(uVar0);
	unk_0xBFE865E3B513451B(uLocal_274[0], uVar0);
	unk_0xA9351C9309E03069(&uVar0);
	func_26(&uLocal_333, 8192);
}

void func_26(var uParam0, int iParam1)
{
	func_27(uParam0, iParam1);
}

void func_27(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_28()
{
	if (!unk_0x3F13A387457FD9A7(uLocal_274[0]) && func_33(1, 0, 1))
	{
		func_29(0, 0, 0);
		uLocal_284[0] = unk_0xD5CF3E0D106CC7B8("DEFAULT_SCRIPTED_CAMERA", 90.1007f, -1281.573f, 28.6661f, 2.4422f, 0f, -113.4013f, 45f, 1, 2);
		unk_0x2544549FDE4C3A7E(true, 0, 3000, 1, 0, 0);
	}
}

void func_29(int iParam0, int iParam1, int iParam2)
{
	unk_0x6C1CBBF18B93CB8E(unk_0x1A96BAEAC664567A(), false, iParam0);
	if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
	{
		unk_0x0184403F1C1A3769(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), 15f);
	}
	unk_0x5B712287C9AB5D4B(iParam1);
	func_30(0);
	func_15(1, 1, iParam2, 0);
	unk_0xB7709513BF7C1AC0(0);
	unk_0xB1DF6C0157E453DE(0);
	func_14(23, 1);
}

void func_30(int iParam0)
{
	if (Global_14571)
	{
		func_31(0, 0);
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
	if (!func_22())
	{
		Global_14413.f_1 = 3;
	}
}

void func_31(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_32(0))
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

int func_32(int iParam0)
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

int func_33(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x6DAFE4284D2E6AD0())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
	{
		if (!unk_0x7F13E3D2383CF15F(unk_0xC8B93D94F8954288()))
		{
			return 0;
		}
		iVar0 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
		if (bParam0)
		{
			if (unk_0xB6900B8CB0ABBD2B(iVar0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0xB6900B8CB0ABBD2B(iVar0))
			{
				if (unk_0xC0ADAF0814175B68(iVar0, -1) != unk_0xC8B93D94F8954288())
				{
					return 0;
				}
			}
		}
		if (!unk_0xB6900B8CB0ABBD2B(iVar0))
		{
			if (unk_0x3E4CBCCFB5F133F1(iVar0) < 0.95f || unk_0x3E4CBCCFB5F133F1(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x56546FAE2D5E944B(unk_0xA34E7C2A5118D638()))
	{
		return 0;
	}
	if (!unk_0xBF43288C8D773F6A(unk_0xA34E7C2A5118D638()))
	{
		return 0;
	}
	return 1;
}

int func_34()
{
	if ((uLocal_76[0] == 8 || uLocal_76[0] == 9) || func_24(uLocal_274[0], 96.12f, -1284.91f, 29.43f, 1) > 10f)
	{
		return 0;
	}
	return 1;
}

void func_35(bool bParam0)
{
	struct<3> Var0;
	var uVar3;
	int iVar4;
	
	func_61();
	if (bParam0)
	{
		Var0 = { Local_308 };
	}
	else
	{
		func_60(&Var0, &uVar3, 0);
	}
	func_57(Var0);
	if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
	{
		if (unk_0x277ECDA23D8CCEB4(uLocal_274[0], 0))
		{
			iVar4 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
			if (unk_0x95CCECA3948CFE7B(iVar4) && !unk_0xB6900B8CB0ABBD2B(iVar4))
			{
				if (iLocal_338)
				{
					if (func_56(iVar4, 4f, 1, 1056964608, 0, 1, 0))
					{
						func_55();
						unk_0xE5F6BE3F8E937ACE(uLocal_274[0], 0, 16777216);
						func_36();
					}
				}
				else if (unk_0xA0C23498D8E0BB93(unk_0xC8B93D94F8954288(), Var0, 4f, 4f, 2f, 1, 1, 2))
				{
					iLocal_338 = 1;
				}
			}
		}
	}
}

void func_36()
{
	func_54();
	func_47(295, 0, 0);
	func_37(0);
	func_287();
}

void func_37(bool bParam0)
{
	struct<8> Var0[3];
	struct<6> Var25[3];
	
	if (!func_44())
	{
		return;
	}
	if (!iLocal_69)
	{
		return;
	}
	StringCopy(&(Var0[0 /*8*/]), "GameType", 32);
	StringCopy(&(Var0[1 /*8*/]), "Location", 32);
	StringCopy(&(Var0[2 /*8*/]), "Type", 32);
	if (bParam0)
	{
		StringCopy(&(Var25[0 /*6*/]), "MP", 24);
	}
	else
	{
		StringCopy(&(Var25[0 /*6*/]), "SP", 24);
	}
	StringCopy(&(Var25[1 /*6*/]), "City", 24);
	StringCopy(&(Var25[2 /*6*/]), "????", 24);
	if (func_42(200, &Var25, &Var0, 3, -1, 0, 0))
	{
		unk_0x0E68C97A53548AA2(131, func_41(), 0f);
		unk_0x0E68C97A53548AA2(108, func_40(), 0f);
		unk_0x0E68C97A53548AA2(102, func_39(), 0f);
		unk_0x0E68C97A53548AA2(8, func_38(), 0f);
	}
	iLocal_66 = 0;
	iLocal_67 = 0;
	iLocal_68 = 0;
	iLocal_69 = 0;
}

int func_38()
{
	return iLocal_67;
}

int func_39()
{
	return iLocal_68;
}

int func_40()
{
	return iLocal_66;
}

int func_41()
{
	return 0;
}

int func_42(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<68> Var0;
	int iVar68;
	struct<13> Var69;
	var uVar82;
	
	if (!unk_0xDC6347A8EBB9281E())
	{
	}
	if ((!unk_0xD3806BCA60629B3F() && (unk_0x2987DBAFED6F4E7C() || !unk_0xCE2AB8E6CC461E87())) && unk_0xDACB8C1598DAD773())
	{
		Var0.f_2.f_1 = 4;
		Var0.f_0 = iParam0;
		if (iParam4 == -1)
		{
			if (unk_0x14F2268F2CD21E48())
			{
				Var69 = { func_43(unk_0xA34E7C2A5118D638()) };
				if (unk_0x0BB7D2D2CAAFD70C(&Var69))
				{
					if (unk_0x59E0C66A4FA07806(&uVar82, 35, &Var69))
					{
						Var0.f_1 = uVar82;
					}
				}
			}
		}
		else
		{
			Var0.f_1 = iParam4;
		}
		Var0.f_2 = iParam3;
		iVar68 = 0;
		while (iVar68 < iParam3)
		{
			Var0.f_2.f_1[iVar68 /*16*/] = { *(uParam2[iVar68 /*8*/]) };
			MemCopy(&(Var0.f_2.f_1[iVar68 /*16*/].f_8), {*(uParam1[iVar68 /*6*/])}, 8);
			iVar68++;
		}
		if (bParam5)
		{
			Global_1835013.f_5 = { Var0 };
		}
		if (!bParam6)
		{
			if (unk_0xBBAE3E0C60A8AD4B() && Global_2439759.f_3)
			{
				unk_0x5BEDAFD51BD250F9(&Var0, &(Global_1710194.f_10));
			}
			else
			{
				unk_0xB7CCCBC5D4D05F4D(&Var0);
			}
		}
		return 1;
	}
	if (unk_0xD3806BCA60629B3F())
	{
	}
	if (!unk_0x2987DBAFED6F4E7C())
	{
	}
	if (unk_0xCE2AB8E6CC461E87())
	{
	}
	if (!unk_0xDACB8C1598DAD773())
	{
	}
	return 0;
}

struct<13> func_43(int iParam0)
{
	struct<13> Var0;
	
	unk_0xC7B591FDF5AB5356(iParam0, &Var0, 13);
	return Var0;
}

int func_44()
{
	if ((unk_0xDC6347A8EBB9281E() && unk_0x964FE4B401FC8514()) && func_45())
	{
		return 1;
	}
	return 0;
}

int func_45()
{
	if (func_46())
	{
		return 0;
	}
	if (unk_0x91629FFED455823B() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_46()
{
	return Global_2441455;
}

void func_47(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_53((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_100976.f_8828[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_100976.f_8828[iParam0 /*12*/].f_6 == 11 || Global_100976.f_8828[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_100976.f_8828[iParam0 /*12*/].f_5 = 1;
		Global_100976.f_8828[iParam0 /*12*/].f_10 = iParam1;
		Global_100976.f_8828[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x2343CAF890251A86(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x2343CAF890251A86(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x2343CAF890251A86(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_48();
	}
}

void func_48()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_100712 = 0;
	Global_100713 = 0;
	Global_100714 = 0;
	Global_100715 = 0;
	Global_100716 = 0;
	Global_100717 = 0;
	Global_100718 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_100976.f_8828.f_3853;
	Global_100976.f_8828.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_100976.f_8828[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_100976.f_8828[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_100712++;
					fVar1 = (fVar1 + Global_100976.f_8828[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_100713++;
					fVar2 = (fVar2 + Global_100976.f_8828[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_100714++;
					fVar3 = (fVar3 + Global_100976.f_8828[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_100715++;
					fVar4 = (fVar4 + Global_100976.f_8828[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_100716++;
					fVar5 = (fVar5 + (Global_100976.f_8828[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_100717++;
					fVar6 = (fVar6 + Global_100976.f_8828[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_100718++;
					fVar7 = (fVar7 + Global_100976.f_8828[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_100695 > 0)
	{
		if (Global_100712 == Global_100695)
		{
			fVar1 = 55f;
		}
	}
	if (Global_100696 > 0)
	{
		if (Global_100713 == Global_100696)
		{
			fVar2 = 10f;
		}
	}
	if (Global_100697 > 0)
	{
		if (Global_100714 == Global_100697)
		{
			fVar3 = 0f;
		}
	}
	if (Global_100698 > 0)
	{
		if (Global_100715 == Global_100698)
		{
			fVar4 = 10f;
		}
	}
	if (Global_100699 > 0)
	{
		if (((Global_100716 == Global_100699 || (Global_100699 * 10 / Global_100716) < 41) || Global_100716 > Global_100702) || Global_100716 == Global_100702)
		{
			if (!unk_0xDCC86F723E82125E(Global_100976.f_8828.f_3856, 14))
			{
				if (Global_100716 == Global_100699)
				{
					unk_0x2343CAF890251A86(joaat("num_rndevents_completed"), Global_100699, 0);
					unk_0x59A0729D503ED758(&(Global_100976.f_8828.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_100700 > 0)
	{
		if (Global_100717 == Global_100700)
		{
			fVar6 = 15f;
		}
	}
	if (Global_100701 > 0)
	{
		if (Global_100718 == Global_100701)
		{
			fVar7 = 5f;
		}
	}
	Global_100976.f_8828.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_100716 > Global_100702 || Global_100716 == Global_100702)
	{
		iVar9 = Global_100702;
	}
	else
	{
		iVar9 = Global_100716;
	}
	unk_0x071958EFED9481F5(joaat("num_missions_completed"), Global_100712, 1);
	unk_0x071958EFED9481F5(joaat("num_missions_available"), Global_100695, 1);
	unk_0x071958EFED9481F5(joaat("num_minigames_completed"), Global_100713, 1);
	unk_0x071958EFED9481F5(joaat("num_minigames_available"), Global_100696, 1);
	unk_0x071958EFED9481F5(joaat("num_oddjobs_completed"), Global_100714, 1);
	unk_0x071958EFED9481F5(joaat("num_oddjobs_available"), Global_100697, 1);
	unk_0x071958EFED9481F5(joaat("num_rndpeople_completed"), Global_100715, 1);
	unk_0x071958EFED9481F5(joaat("num_rndpeople_available"), Global_100698, 1);
	unk_0x071958EFED9481F5(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x071958EFED9481F5(joaat("num_rndevents_available"), Global_100702, 1);
	unk_0x071958EFED9481F5(joaat("num_misc_completed"), (Global_100718 + Global_100717), 1);
	unk_0x071958EFED9481F5(joaat("num_misc_available"), (Global_100701 + Global_100700), 1);
	Global_100719 = (Global_100712 * 100 / Global_100695);
	Global_100721 = ((Global_100714 + Global_100713) * 100 / (Global_100697 + Global_100696));
	Global_100720 = ((Global_100715 + iVar9) * 100 / (Global_100698 + Global_100702));
	Global_100722 = ((Global_100717 + Global_100718) * 100 / (Global_100700 + Global_100701));
	unk_0xB3AF65174F7E38A7(joaat("total_progress_made"), Global_100976.f_8828.f_3853, 1);
	unk_0x071958EFED9481F5(joaat("percent_story_missions"), Global_100719, 1);
	unk_0x071958EFED9481F5(joaat("percent_ambient_missions"), Global_100720, 1);
	unk_0x071958EFED9481F5(joaat("percent_oddjobs"), Global_100721, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_100976.f_8828.f_3853))
	{
		func_52(13, unk_0xF34EE736CF047844(Global_100976.f_8828.f_3853));
	}
	if (!unk_0x11C746AE4DB58A03())
	{
		if (!Global_69317)
		{
			if (func_51() == 2 == 0 && !unk_0xBBAE3E0C60A8AD4B())
			{
				if (unk_0x91629FFED455823B())
				{
					Global_100710 = 0;
				}
				if (!Global_55659)
				{
					func_49();
				}
			}
		}
	}
}

int func_49()
{
	if (func_50(0))
	{
		return 0;
	}
	if (Global_91145.f_8)
	{
		if (Global_91145.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91145.f_10 > 1)
	{
		return 0;
	}
	Global_91145.f_10++;
	return 1;
}

bool func_50(bool bParam0)
{
	if (!bParam0 && unk_0xCBC8FFE55DC722B5(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xDCC86F723E82125E(Global_69565, 0);
}

int func_51()
{
	return Global_25115;
}

int func_52(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 70)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x2D6B7C5EAD43367D(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x50EEE3FED4DFE988(iParam0, iParam1);
	}
	return 0;
}

int func_53(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	
	if (iParam2 == -1)
	{
		iParam2 = func_20();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x76928FD01140B865((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xCCB054268E9EBBCD((iParam0 - 0)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x76928FD01140B865((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xCCB054268E9EBBCD((iParam0 - 192)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x76928FD01140B865((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xCCB054268E9EBBCD((iParam0 - 513)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x76928FD01140B865((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xCCB054268E9EBBCD((iParam0 - 705)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x39DB3B2AF22A3569((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xCCB054268E9EBBCD((iParam0 - 3111)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x39DB3B2AF22A3569((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xCCB054268E9EBBCD((iParam0 - 2919)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0xD9B02A4858A8C0D5((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xCCB054268E9EBBCD((iParam0 - 4207)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0xD9B02A4858A8C0D5((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xCCB054268E9EBBCD((iParam0 - 4335)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0xD9B02A4858A8C0D5((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xCCB054268E9EBBCD((iParam0 - 6029)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7449)
	{
		uVar11 = unk_0xD9B02A4858A8C0D5((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0xCCB054268E9EBBCD((iParam0 - 7385)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0xD9B02A4858A8C0D5((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0xCCB054268E9EBBCD((iParam0 - 7321)) * 64);
		iVar0 = unk_0x19CD158A784CA81D(uVar12, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_54()
{
	iLocal_68++;
	iLocal_69 = 1;
}

void func_55()
{
	if (unk_0x95CCECA3948CFE7B(uLocal_274[0]) && !unk_0xB6900B8CB0ABBD2B(uLocal_274[0]))
	{
		unk_0x63E00E88AE3C86A3(uLocal_274[0], 1);
		if (unk_0x5BE4C4CB01F0877F(uLocal_274[0]))
		{
			unk_0x5980997C9ACA0572(uLocal_274[0]);
		}
	}
}

int func_56(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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

void func_57(struct<3> Param0)
{
	int iVar0;
	
	if (unk_0x6B4865E08E90ACC5(uLocal_281))
	{
		unk_0x5356E82C1E5E0C44(&uLocal_281);
	}
	if (!unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
	{
		return;
	}
	iVar0 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
	if (unk_0x95CCECA3948CFE7B(iVar0) && !unk_0xB6900B8CB0ABBD2B(iVar0))
	{
		if (unk_0x277ECDA23D8CCEB4(uLocal_274[0], 0))
		{
			if (unk_0x0C7EC810080F0459(uLocal_274[0], unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0), 0))
			{
				if (!unk_0x6B4865E08E90ACC5(uLocal_280))
				{
					uLocal_280 = func_58(Param0, 1);
				}
			}
		}
	}
}

var func_58(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0xDF811B9EAB020A4D(Param0);
	unk_0x3734DA1F207E7166(uVar0, func_59(unk_0xBBAE3E0C60A8AD4B(), 1f, 1f));
	unk_0x706ABF1139F36482(uVar0, iParam3);
	return uVar0;
}

float func_59(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_60(var uParam0, var uParam1, bool bParam2)
{
	Local_317 = { Local_317 };
	switch (uLocal_76[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (!bParam2)
			{
				*uParam0 = { 92.8829f, -1281.123f, 28.1845f };
				*uParam1 = 15f;
			}
			else
			{
				*uParam0 = { Local_314 };
				*uParam1 = fLocal_326;
			}
			Local_317 = { *uParam0 };
			break;
		
		case 8:
			if (!bParam2)
			{
				*uParam0 = { -1615.991f, 187.4827f, 59.1337f };
				*uParam1 = 217.5474f;
			}
			else
			{
				*uParam0 = { Local_314 };
				*uParam1 = fLocal_326;
			}
			Local_317 = { *uParam0 };
			break;
		
		case 9:
			if (!bParam2)
			{
				*uParam0 = { 1538.432f, 3776.85f, 33.5178f };
				*uParam1 = 225.8821f;
			}
			else
			{
				*uParam0 = { Local_314 };
				*uParam1 = fLocal_326;
			}
			Local_317 = { *uParam0 };
			break;
	}
}

void func_61()
{
	if (unk_0x2DC9BA2299B45EA6(uLocal_274[0]))
	{
		if (!unk_0x95CCECA3948CFE7B(uLocal_274[0]))
		{
		}
		else if (unk_0xB6900B8CB0ABBD2B(uLocal_274[0]))
		{
		}
		func_62(0);
	}
}

void func_62(int iParam0)
{
	if ((uLocal_76[0] > -1 && uLocal_76[0] < 10) && iParam0 != 2)
	{
		func_83(uLocal_76[0], (func_84(uLocal_76[0]) / 2));
	}
	func_81();
	switch (iParam0)
	{
		case 0:
			func_79("SCLUB_HOME_D", uLocal_76[0]);
			func_83(uLocal_76[0], 0);
			func_68(uLocal_76[0], 1);
			iLocal_74 = 6;
			break;
		
		case 1:
			unk_0x7846F09C04C34C46();
			func_63("SCLUB_HOME_A", uLocal_76[0], 0);
			iLocal_74 = 5;
			break;
		
		case 2:
			iLocal_74 = 5;
			break;
		
		case 4:
			func_79("SCLUB_HOME_D3", uLocal_76[0]);
			iLocal_74 = 6;
			break;
		
		case 3:
			if (func_24(uLocal_274[0], 92.5861f, -1282.86f, 28.2548f, 1) < 10f)
			{
				iLocal_74 = 5;
			}
			else
			{
				iLocal_74 = 6;
			}
			break;
	}
}

void func_63(char* sParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	MemCopy(&uVar0, {func_67(iParam1)}, 6);
	if (!func_66(sParam0, &uVar0))
	{
		if (!bParam2)
		{
			func_65(sParam0, &uVar0, -1);
		}
		else
		{
			func_64(sParam0, &uVar0);
		}
	}
}

void func_64(var uParam0, var uParam1)
{
	unk_0xF4A7F7324E8C92A2(uParam0);
	unk_0xCE59E3E42586D52D(uParam1);
	unk_0x31D76F87C39FB8DD(0, 1, 1, -1);
}

void func_65(var uParam0, var uParam1, int iParam2)
{
	unk_0xF4A7F7324E8C92A2(uParam0);
	unk_0xCE59E3E42586D52D(uParam1);
	unk_0x31D76F87C39FB8DD(0, 0, 1, iParam2);
}

bool func_66(char* sParam0, var uParam1)
{
	unk_0xD90D7D16FDE685B6(sParam0);
	unk_0xCE59E3E42586D52D(uParam1);
	return unk_0x699790DC9A5E5D9A(0);
}

struct<4> func_67(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "SCLUB_NM_", 16);
	StringIntConCat(&Var0, iParam0, 16);
	return Var0;
}

void func_68(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_26(&(Global_100976.f_243[func_71() /*53*/].f_2[iParam0 /*5*/].f_3), 2);
	}
	else
	{
		func_69(&(Global_100976.f_243[func_71() /*53*/].f_2[iParam0 /*5*/].f_3), 2);
	}
}

void func_69(var uParam0, int iParam1)
{
	func_70(uParam0, iParam1);
}

void func_70(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_71()
{
	int iVar0;
	
	iVar0 = func_73();
	switch (iVar0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		default:
			switch (func_72(-1))
			{
				case 0:
					return 3;
					break;
				
				case 1:
					return 4;
					break;
				
				case 2:
					return 5;
					break;
				
				case 3:
					return 6;
					break;
				
				case 4:
					return 7;
					break;
				
				default:
					break;
			}
			break;
	}
	return 3;
}

int func_72(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_20();
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

int func_73()
{
	func_74();
	return Global_100976.f_1770.f_539.f_3549;
}

void func_74()
{
	int iVar0;
	
	if (unk_0x95CCECA3948CFE7B(unk_0xC8B93D94F8954288()))
	{
		if (func_78(Global_100976.f_1770.f_539.f_3549) != unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()))
		{
			iVar0 = func_77(unk_0xC8B93D94F8954288());
			if (func_76(iVar0) && (!func_75(14) || Global_99928))
			{
				if (Global_100976.f_1770.f_539.f_3549 != iVar0 && func_76(Global_100976.f_1770.f_539.f_3549))
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

bool func_75(int iParam0)
{
	return Global_35700 == iParam0;
}

bool func_76(int iParam0)
{
	return iParam0 < 3;
}

int func_77(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x95CCECA3948CFE7B(uParam0))
	{
		iVar1 = unk_0x6D5BB810CC209E15(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_78(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_78(int iParam0)
{
	if (func_76(iParam0))
	{
		return Global_100976.f_32519[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_79(char* sParam0, int iParam1)
{
	var uVar0;
	
	MemCopy(&uVar0, {func_67(iParam1)}, 6);
	func_80(sParam0, &uVar0, 7500, 1);
}

void func_80(char* sParam0, var uParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0xBBB1F62EC5E3BBC6(sParam0);
	unk_0xCE59E3E42586D52D(uParam1);
	unk_0xEE90E717A80AA597(iParam2, 1);
}

void func_81()
{
	if (unk_0x6B4865E08E90ACC5(uLocal_281))
	{
		unk_0x5356E82C1E5E0C44(&uLocal_281);
	}
	if (unk_0x6B4865E08E90ACC5(uLocal_280))
	{
		unk_0x5356E82C1E5E0C44(&uLocal_280);
	}
	func_82();
}

void func_82()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (unk_0x6B4865E08E90ACC5(uLocal_282[iVar0]))
		{
			unk_0x5356E82C1E5E0C44(&(uLocal_282[iVar0]));
		}
		iVar0++;
	}
}

void func_83(int iParam0, int iParam1)
{
	Global_100976.f_243[func_71() /*53*/].f_2[iParam0 /*5*/] = iParam1;
}

int func_84(int iParam0)
{
	return Global_100976.f_243[func_71() /*53*/].f_2[iParam0 /*5*/];
}

void func_85()
{
	func_61();
	func_81();
	switch (iLocal_80)
	{
		case 0:
			if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
			{
				if (unk_0x277ECDA23D8CCEB4(uLocal_274[0], 0))
				{
					if (!func_102("SCLUB_SECLUDED"))
					{
						func_101("SCLUB_SECLUDED");
					}
					if (func_100() && unk_0x9BA9222C7124CA04(unk_0xC8B93D94F8954288()) == 0f)
					{
						unk_0x9F4AA6F234E8A860(1);
						unk_0xC0E8B67A4385D37D(func_95(uLocal_274[0], 0, 0));
						iLocal_80 = 1;
					}
				}
			}
			break;
		
		case 1:
			if (func_88())
			{
				iLocal_80 = 2;
			}
			break;
		
		case 2:
			if (unk_0x090C65D5190A249D(unk_0xC8B93D94F8954288(), 242628503) != 1)
			{
				func_240();
				if (unk_0x342FDFC48311CCCE() > 20 || unk_0x342FDFC48311CCCE() < 4)
				{
					bLocal_336 = false;
				}
				unk_0xDF9B2BE9FFD8B8B5(iLocal_45);
				func_86(bLocal_336);
				iLocal_74 = 4;
			}
			break;
	}
}

void func_86(bool bParam0)
{
	switch (uLocal_76[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (bParam0)
			{
				func_79("SCLUB_HOME_GO", uLocal_76[0]);
			}
			else
			{
				func_87("SCLUB_CLUB_GO", 7500, 1);
			}
			break;
		
		case 8:
		case 9:
			func_87("SCLUB_HOME_GO3", 7500, 1);
			break;
	}
}

void func_87(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xBBB1F62EC5E3BBC6(sParam0);
	unk_0xEE90E717A80AA597(iParam1, 1);
}

int func_88()
{
	if (unk_0xF9B86DC1728F1339(func_95(uLocal_274[0], 0, 0)))
	{
		func_89(uLocal_274[0], 0, 1, -1);
		func_89(unk_0xC8B93D94F8954288(), 0, 0, -1);
		return 1;
	}
	return 0;
}

void func_89(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	char* sVar2;
	var uVar3;
	
	if (unk_0xB6900B8CB0ABBD2B(iParam0))
	{
		return;
	}
	iVar0 = unk_0x275BEBE583A163B5(iParam0, 1);
	if (!unk_0x5D42322C7DB888D0(iVar0, 0))
	{
		return;
	}
	iLocal_45 = unk_0xB548555C3ED3CEBE();
	if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 1) && func_94(0, 1))
	{
		if (iLocal_45 != 4)
		{
			unk_0xDF9B2BE9FFD8B8B5(4);
		}
	}
	bVar1 = func_93(iVar0);
	sVar2 = func_95(iParam0, 0, 0);
	if (!unk_0xF9B86DC1728F1339(sVar2))
	{
		unk_0xC0E8B67A4385D37D(sVar2);
	}
	else
	{
		unk_0x3E2E609450787FFE(&uVar3);
		unk_0x5323F488E6A1B660(0, sVar2, func_90(0, bParam2, bParam1, bVar1), 8f, -8f, -1, 0, 0, 0, 0, 0);
		unk_0x5323F488E6A1B660(0, sVar2, func_90(1, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0x5323F488E6A1B660(0, sVar2, func_90(2, bParam2, bParam1, bVar1), 8f, -4f, iParam3, 1, 0, 0, 0, 0);
		unk_0x5323F488E6A1B660(0, sVar2, func_90(3, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0x5323F488E6A1B660(0, sVar2, func_90(4, bParam2, bParam1, bVar1), 4f, -2f, -1, 0, 0, 0, 0, 0);
		unk_0x939BC11172AA1303(uVar3);
		unk_0xBFE865E3B513451B(iParam0, uVar3);
		unk_0xA9351C9309E03069(&uVar3);
	}
}

char* func_90(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_92(18);
					}
					else
					{
						sVar0 = func_92(23);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_92(8);
				}
				else
				{
					sVar0 = func_92(13);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_91(18);
				}
				else
				{
					sVar0 = func_91(23);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_91(8);
			}
			else
			{
				sVar0 = func_91(13);
			}
			break;
		
		case 1:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_92(19);
					}
					else
					{
						sVar0 = func_92(24);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_92(9);
				}
				else
				{
					sVar0 = func_92(14);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_91(19);
				}
				else
				{
					sVar0 = func_91(24);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_91(9);
			}
			else
			{
				sVar0 = func_91(14);
			}
			break;
		
		case 2:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_92(20);
					}
					else
					{
						sVar0 = func_92(25);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_92(10);
				}
				else
				{
					sVar0 = func_92(15);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_91(20);
				}
				else
				{
					sVar0 = func_91(25);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_91(10);
			}
			else
			{
				sVar0 = func_91(15);
			}
			break;
		
		case 3:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_92(21);
					}
					else
					{
						sVar0 = func_92(26);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_92(11);
				}
				else
				{
					sVar0 = func_92(16);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_91(21);
				}
				else
				{
					sVar0 = func_91(26);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_91(11);
			}
			else
			{
				sVar0 = func_91(16);
			}
			break;
		
		case 4:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_92(22);
					}
					else
					{
						sVar0 = func_92(27);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_92(12);
				}
				else
				{
					sVar0 = func_92(17);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_91(22);
				}
				else
				{
					sVar0 = func_91(27);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_91(12);
			}
			else
			{
				sVar0 = func_91(17);
			}
			break;
		
		case 5:
			if (bParam3)
			{
				if (bParam1)
				{
					sVar0 = func_92(3);
				}
				else
				{
					sVar0 = func_92(2);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_91(3);
			}
			else
			{
				sVar0 = func_91(2);
			}
			break;
		
		case 6:
			break;
	}
	return sVar0;
}

char* func_91(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "into_proposition_male";
			break;
		
		case 1:
			sVar0 = "into_proposition_prostitute";
			break;
		
		case 2:
			sVar0 = "proposition_loop_male";
			break;
		
		case 3:
			sVar0 = "proposition_loop_prostitute";
			break;
		
		case 4:
			sVar0 = "proposition_to_exit_male";
			break;
		
		case 5:
			sVar0 = "prop_to_sit_alt_prostitute";
			break;
		
		case 6:
			sVar0 = "prop_to_sit_male";
			break;
		
		case 7:
			sVar0 = "prop_to_sit_prostitute";
			break;
		
		case 8:
			sVar0 = "proposition_to_sex_p1_prostitute";
			break;
		
		case 9:
			sVar0 = "proposition_to_sex_p2_prostitute";
			break;
		
		case 10:
			sVar0 = "sex_loop_prostitute";
			break;
		
		case 11:
			sVar0 = "sex_to_proposition_p1_prostitute";
			break;
		
		case 12:
			sVar0 = "sex_to_proposition_p2_prostitute";
			break;
		
		case 13:
			sVar0 = "proposition_to_sex_p1_male";
			break;
		
		case 14:
			sVar0 = "proposition_to_sex_p2_male";
			break;
		
		case 15:
			sVar0 = "sex_loop_male";
			break;
		
		case 16:
			sVar0 = "sex_to_proposition_p1_male";
			break;
		
		case 17:
			sVar0 = "sex_to_proposition_p2_male";
			break;
		
		case 18:
			sVar0 = "proposition_to_BJ_p1_prostitute";
			break;
		
		case 19:
			sVar0 = "proposition_to_BJ_p2_prostitute";
			break;
		
		case 20:
			sVar0 = "BJ_loop_prostitute";
			break;
		
		case 21:
			sVar0 = "BJ_to_proposition_p1_prostitute";
			break;
		
		case 22:
			sVar0 = "BJ_to_proposition_p2_prostitute";
			break;
		
		case 23:
			sVar0 = "proposition_to_BJ_p1_male";
			break;
		
		case 24:
			sVar0 = "proposition_to_BJ_p2_male";
			break;
		
		case 25:
			sVar0 = "BJ_loop_male";
			break;
		
		case 26:
			sVar0 = "BJ_to_proposition_p1_male";
			break;
		
		case 27:
			sVar0 = "BJ_to_proposition_p2_male";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

char* func_92(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "low_car_sit_to_prop_player";
			break;
		
		case 1:
			sVar0 = "low_car_sit_to_prop_female";
			break;
		
		case 2:
			sVar0 = "low_car_prop_loop_player";
			break;
		
		case 3:
			sVar0 = "low_car_prop_loop_female";
			break;
		
		case 4:
			sVar0 = "low_car_prop_to_leave_player";
			break;
		
		case 5:
			sVar0 = "low_car_prop_to_sit_alt_female";
			break;
		
		case 6:
			sVar0 = "low_car_prop_to_sit_player";
			break;
		
		case 7:
			sVar0 = "low_car_prop_to_sit_female";
			break;
		
		case 8:
			sVar0 = "low_car_prop_to_sex_p1_female";
			break;
		
		case 9:
			sVar0 = "low_car_prop_to_sex_p2_female";
			break;
		
		case 10:
			sVar0 = "low_car_sex_loop_female";
			break;
		
		case 11:
			sVar0 = "low_car_sex_to_prop_p1_female";
			break;
		
		case 12:
			sVar0 = "low_car_sex_to_prop_p2_female";
			break;
		
		case 13:
			sVar0 = "low_car_prop_to_sex_p1_player";
			break;
		
		case 14:
			sVar0 = "low_car_prop_to_sex_p2_player";
			break;
		
		case 15:
			sVar0 = "low_car_sex_loop_player";
			break;
		
		case 16:
			sVar0 = "low_car_sex_to_prop_p1_player";
			break;
		
		case 17:
			sVar0 = "low_car_sex_to_prop_p2_player";
			break;
		
		case 18:
			sVar0 = "low_car_prop_to_bj_p1_female";
			break;
		
		case 19:
			sVar0 = "low_car_prop_to_bj_p2_female";
			break;
		
		case 20:
			sVar0 = "low_car_bj_loop_female";
			break;
		
		case 21:
			sVar0 = "low_car_bj_to_prop_p1_female";
			break;
		
		case 22:
			sVar0 = "low_car_bj_to_prop_p2_female";
			break;
		
		case 23:
			sVar0 = "low_car_prop_to_bj_p1_player";
			break;
		
		case 24:
			sVar0 = "low_car_prop_to_bj_p2_player";
			break;
		
		case 25:
			sVar0 = "low_car_bj_loop_player";
			break;
		
		case 26:
			sVar0 = "low_car_bj_to_prop_p1_player";
			break;
		
		case 27:
			sVar0 = "low_car_bj_to_prop_p2_player";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

int func_93(int iParam0)
{
	if (unk_0x5D42322C7DB888D0(iParam0, 0))
	{
		switch (unk_0x38E553FFEC2B7BCC(iParam0))
		{
			case -2066252141:
			case -38413156:
			case -782720499:
			case 542797648:
			case 68566729:
			case -463340997:
			case 2033852426:
			case -1820894825:
			case 1697345049:
			case -635697407:
			case -1453479140:
			case 1837596901:
			case 2013836096:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_94(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (bParam0)
	{
		bVar0 = unk_0xA9B6C2A8F9FE269A(0) == 4;
	}
	if (bParam1)
	{
		if (!bVar0)
		{
			bVar0 = unk_0xA9B6C2A8F9FE269A(1) == 4;
		}
	}
	return bVar0;
}

var func_95(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0xB6900B8CB0ABBD2B(iParam0))
	{
		iVar0 = unk_0x275BEBE583A163B5(iParam0, 1);
		if (unk_0x5D42322C7DB888D0(iVar0, 0))
		{
			if (func_93(iVar0))
			{
				if ((!func_94(0, 1) || iParam2) && !bParam1)
				{
					return func_99();
				}
				else
				{
					return func_98();
				}
			}
		}
	}
	if ((!func_94(0, 1) || iParam2) && !bParam1)
	{
		return func_97();
	}
	return func_96();
}

char* func_96()
{
	return "mini@prostitutes@sexnorm_veh_first_person";
}

char* func_97()
{
	return "mini@prostitutes@sexnorm_veh";
}

char* func_98()
{
	return "mini@prostitutes@sexlow_veh_first_person";
}

char* func_99()
{
	return "mini@prostitutes@sexlow_veh";
}

int func_100()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	var uVar10;
	struct<3> Var11;
	float fVar14;
	int iVar15;
	
	fVar6 = 25f;
	func_60(&Var7, &uVar10, 0);
	if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
	{
		if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
		{
			iVar2 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
		}
		Var3 = { unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1) };
		if (unk_0xCF7E9F12E8804B21(Var3, &Var11, 1077936128, 0))
		{
			fVar14 = unk_0x2A488C176D52CCA5(Var3, Var11);
			if (fVar14 <= 10f)
			{
				return 0;
			}
		}
		if (unk_0x2A488C176D52CCA5(Var3, Local_308) < 20f || unk_0x2A488C176D52CCA5(Var3, Var7) < 20f)
		{
			return 0;
		}
		if (unk_0x315ACCD8574BBD32(Var3 - Vector(20f, 20f, 20f), Var3 + Vector(20f, 20f, 20f)))
		{
			return 0;
		}
		unk_0xC51B1A714DF7543D(Var3, fVar6, 1, 1, &iVar0, 0, 0, -1);
		if (!iVar0 == 0)
		{
			if (!unk_0xB6900B8CB0ABBD2B(iVar0))
			{
				if (unk_0x164373F9651C2457(iVar0, unk_0xC8B93D94F8954288(), 17))
				{
					return 0;
				}
			}
		}
		else
		{
			iVar1 = unk_0x072C2EF16D638437(Var3, fVar6, 0, -1);
			if (!iVar1 == 0)
			{
				if (!iVar1 == iVar2)
				{
					if (unk_0x5D42322C7DB888D0(iVar1, 0))
					{
						iVar0 = unk_0xC0ADAF0814175B68(iVar1, -1);
						if (!iVar0 == 0)
						{
							return 0;
						}
					}
				}
			}
		}
		iVar15 = unk_0x6907EB47FC00DB19(unk_0xC8B93D94F8954288());
		if (!iVar15 == 0)
		{
			return 0;
		}
	}
	return 1;
}

void func_101(char* sParam0)
{
	unk_0xF4A7F7324E8C92A2(sParam0);
	unk_0x31D76F87C39FB8DD(0, 1, 1, -1);
}

bool func_102(char* sParam0)
{
	unk_0xD90D7D16FDE685B6(sParam0);
	return unk_0x699790DC9A5E5D9A(0);
}

void func_103()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iLocal_75 < 12 && iLocal_75 >= 2)
	{
		if (func_198(3000))
		{
			unk_0x00F9843B9C06C2E9(1000);
			iLocal_75 = 12;
		}
	}
	if (!bLocal_71 && iLocal_75 >= 5)
	{
		iVar0 = unk_0xCF6A5CC48A3C303B();
		if (unk_0x5D42322C7DB888D0(iVar0, 0) && !unk_0xB6900B8CB0ABBD2B(iVar0))
		{
			if (unk_0x6D5BB810CC209E15(iVar0) == joaat("blimp2"))
			{
				bLocal_71 = false;
			}
			else if (unk_0xA298102257816428(unk_0xCF6A5CC48A3C303B()) && uLocal_76[0] == 5)
			{
				bLocal_71 = func_195(&uLocal_70, -865f, 516.3f, 90f, 1, 15f);
			}
			else if (func_194(unk_0xCF6A5CC48A3C303B()))
			{
				bLocal_71 = func_195(&uLocal_70, Local_323, 1, fLocal_327);
			}
			else
			{
				bLocal_71 = func_195(&uLocal_70, Local_308, 1, fLocal_327);
			}
		}
	}
	if (iLocal_75 > 0 && iLocal_75 < 13)
	{
		unk_0xC5E066210BF7DEBB();
	}
	switch (iLocal_75)
	{
		case 0:
			unk_0x9F4AA6F234E8A860(1);
			unk_0x7846F09C04C34C46();
			func_81();
			unk_0xC4C141A321D45FD8("TIME_LAPSE", 0);
			func_29(56, 1, 0);
			if (!func_251(uLocal_333, 131072))
			{
				func_26(&uLocal_333, 131072);
			}
			if (!func_251(uLocal_333, 256))
			{
				func_193();
				func_26(&uLocal_333, 256);
			}
			if (!func_251(uLocal_333, 32768))
			{
				unk_0xC0E8B67A4385D37D(func_192());
				func_26(&uLocal_333, 32768);
			}
			if (!func_251(uLocal_333, 256))
			{
				unk_0xC0E8B67A4385D37D(func_191());
				func_26(&uLocal_333, 256);
			}
			if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
			{
				iLocal_340 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
				func_190(unk_0xC8B93D94F8954288(), iLocal_340);
				iLocal_75 = 1;
			}
			else
			{
				func_55();
				func_188(unk_0xC8B93D94F8954288(), Local_302);
				func_188(uLocal_274[0], Local_305);
				iLocal_75 = 2;
			}
			func_186();
			break;
		
		case 1:
			if (!unk_0xB6900B8CB0ABBD2B(iLocal_340))
			{
				if (unk_0x2A488C176D52CCA5(unk_0x44C17CCB85A88A1F(iLocal_340, 1), Local_308) < 2f)
				{
					func_55();
					func_188(unk_0xC8B93D94F8954288(), Local_302);
					func_188(uLocal_274[0], Local_305);
					unk_0x11592AACD6BAEC7F();
					iLocal_75 = 2;
				}
				else if (unk_0x693EBB4F13506457() >= 10000)
				{
					iLocal_75 = 13;
				}
			}
			break;
		
		case 2:
			if (!unk_0xB1E18FA70927BDAB(uLocal_284[0]))
			{
				unk_0x7D1795B1E14EDFFD(uLocal_284[0], 1);
				unk_0x2544549FDE4C3A7E(true, 0, 3000, 1, 0, 0);
				if (!unk_0xB6900B8CB0ABBD2B(iLocal_340))
				{
					if (unk_0x6D5BB810CC209E15(iLocal_340) == joaat("blimp2"))
					{
						unk_0x872B541D7953A19B(iLocal_340, 0, 0);
					}
				}
				func_8(&uLocal_255);
				iLocal_75 = 3;
			}
			break;
		
		case 3:
			if (func_185(&uLocal_255) > 1f)
			{
				unk_0xB306DBE9AFBD23A6(uLocal_284[1], uLocal_284[0], 6000, 1, 1);
				func_184(&Local_289, 1, 0, 2000, 1, 1, 0, 1);
				iVar1 = unk_0x342FDFC48311CCCE();
				iLocal_330 = iVar1 + 8;
				if (iLocal_330 > 23)
				{
					iLocal_330 = (iLocal_330 - 24);
				}
				Local_289.f_7 = iVar1;
				Local_289.f_8 = iLocal_330;
				func_2(&uLocal_255);
				iLocal_75 = 4;
			}
			break;
		
		case 4:
			if (!unk_0xABE82A757E4DE125(uLocal_284[1]) && unk_0xB1E18FA70927BDAB(uLocal_284[1]))
			{
				if (!func_251(uLocal_331, 512))
				{
					if (unk_0x95CCECA3948CFE7B(iLocal_340) && !unk_0xB6900B8CB0ABBD2B(iLocal_340))
					{
						unk_0x4A6381DCF16569D3(iLocal_340, 1);
					}
					func_181(unk_0xC8B93D94F8954288(), func_183());
					unk_0x765E3FA65D011F03(unk_0xC8B93D94F8954288(), func_180());
					func_162();
					func_26(&uLocal_331, 512);
				}
				else if (!func_251(uLocal_331, 2048))
				{
					if (unk_0xB6900B8CB0ABBD2B(uLocal_274[0]))
					{
					}
					if (!func_161() && !unk_0x0D211C48FB8578B7(uLocal_274[0]))
					{
						func_162();
						if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
						{
							unk_0x5147F4FD3D9AB607(unk_0xC8B93D94F8954288());
							unk_0x7ABE44FB19CAE2E1(unk_0xC8B93D94F8954288(), "SEX_CLIMAX", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
						}
						func_26(&uLocal_331, 2048);
						func_8(&uLocal_255);
						sLocal_277 = func_160();
						iLocal_75 = 5;
					}
				}
			}
			break;
		
		case 5:
			if (func_185(&uLocal_255) > 1f)
			{
				if (func_135(iLocal_330, 0, sLocal_277, "", &Local_289, (func_185(&uLocal_255) * 0.2f), 0))
				{
					if (!func_161())
					{
						if (unk_0x95CCECA3948CFE7B(iLocal_340))
						{
							if (unk_0x6D5BB810CC209E15(iLocal_340) != joaat("blimp2"))
							{
								unk_0x98371F41D43CDFA9(Local_305, 20f, 1, 0, 0, 0);
							}
						}
						else
						{
							unk_0x98371F41D43CDFA9(Local_305, 20f, 1, 0, 0, 0);
						}
						if (unk_0x95CCECA3948CFE7B(uLocal_274[0]))
						{
							unk_0x872B541D7953A19B(uLocal_274[0], 0, 0);
						}
						unk_0xE4A882E3AFAB07D4(unk_0xC8B93D94F8954288(), 0);
						func_8(&uLocal_255);
						iLocal_75 = 6;
					}
				}
			}
			break;
		
		case 6:
			unk_0x80423B6A45BF05DA(unk_0xC8B93D94F8954288(), joaat("weapon_unarmed"), 1);
			if (func_185(&uLocal_255) > 1.5f)
			{
				if (bLocal_71)
				{
					func_133(&uLocal_70);
				}
				func_8(&uLocal_255);
				iLocal_75 = 7;
			}
			break;
		
		case 7:
			if (!unk_0xB1E18FA70927BDAB(uLocal_284[2]))
			{
				unk_0x48D86334348F315A();
				unk_0xE8E1200B54AEEB5E(1);
				unk_0xFC1F2AE3FDE7BB5D(1);
				unk_0xB306DBE9AFBD23A6(uLocal_284[2], uLocal_284[1], 6000, 1, 1);
				func_8(&uLocal_255);
				iLocal_75 = 8;
			}
			break;
		
		case 8:
			if (!func_251(uLocal_333, 262144))
			{
				if (func_185(&uLocal_255) >= 1.25f)
				{
					func_132();
				}
			}
			if (func_185(&uLocal_255) > 6f)
			{
				unk_0x7D1795B1E14EDFFD(uLocal_284[3], 1);
				if (!unk_0xB6900B8CB0ABBD2B(iLocal_340))
				{
					if (unk_0x6D5BB810CC209E15(iLocal_340) == joaat("blimp2"))
					{
						unk_0x872B541D7953A19B(iLocal_340, 1, 0);
					}
					unk_0xFD816D0E738EB817(iLocal_340, 1, 1);
					unk_0x62C4DFB4097A1725(iLocal_340, 1000f);
					unk_0x1F7ED83E60948CC2(iLocal_340, 1000f);
					unk_0x0E592F1973122876(iLocal_340);
				}
				func_8(&uLocal_255);
				iLocal_75 = 10;
			}
			break;
		
		case 10:
			if (func_185(&uLocal_255) > 2f)
			{
				unk_0xCEDE7EE5970B48B8(0, 0, 3, 0);
				iLocal_75 = 13;
			}
			break;
		
		case 12:
			if (unk_0xD5DFCA69ACAA20E3() && !unk_0xE71FCE10773CF7B0())
			{
				if (!func_251(uLocal_333, 262144))
				{
					unk_0xFB2780A463BD8369(unk_0xA34E7C2A5118D638(), Local_314, fLocal_326, 0, 1, 1);
					func_132();
				}
				if (!unk_0xB6900B8CB0ABBD2B(iLocal_340))
				{
					if (unk_0x6D5BB810CC209E15(iLocal_340) == joaat("blimp2"))
					{
						unk_0x872B541D7953A19B(iLocal_340, 1, 0);
					}
				}
				unk_0x80423B6A45BF05DA(unk_0xC8B93D94F8954288(), joaat("weapon_unarmed"), 1);
				if (!unk_0xB6900B8CB0ABBD2B(iLocal_340))
				{
					unk_0xFD816D0E738EB817(iLocal_340, 1, 1);
					unk_0x62C4DFB4097A1725(iLocal_340, 1000f);
					unk_0x1F7ED83E60948CC2(iLocal_340, 1000f);
					unk_0x0E592F1973122876(iLocal_340);
				}
				func_8(&uLocal_255);
				iLocal_75 = 13;
			}
			break;
		
		case 13:
			if (!unk_0xE71FCE10773CF7B0() && func_185(&uLocal_255) >= 1f)
			{
				func_13(1, 1, 0);
				unk_0xFE93132CC8944C8C(unk_0xC8B93D94F8954288(), unk_0x5A333ED85C979D34(unk_0xC8B93D94F8954288()));
				unk_0x3E0F86DC1C0D4477(unk_0xA34E7C2A5118D638(), 30, 1);
				if (unk_0x8F104CB36BD63D96(unk_0xC8B93D94F8954288(), func_78(0)))
				{
					func_131();
				}
				unk_0xEC0157120B9B77B0(Local_308 - Vector(3f, 3f, 3f), Local_308 + Vector(3f, 3f, 3f), 15f, 1);
				if (!unk_0xB6900B8CB0ABBD2B(iLocal_340))
				{
					unk_0xFD816D0E738EB817(iLocal_340, 1, 1);
					if (unk_0x6D5BB810CC209E15(iLocal_340) != joaat("blimp2"))
					{
						unk_0xC76B5C68AB6DC7DF(iLocal_340, Local_308, 1, 0, 0, 1);
						unk_0x765E3FA65D011F03(iLocal_340, fLocal_327);
						if (unk_0xA298102257816428(iLocal_340) && uLocal_76[0] == 5)
						{
							unk_0xC76B5C68AB6DC7DF(iLocal_340, -865f, 516.3f, 90f, 1, 0, 0, 1);
							unk_0x765E3FA65D011F03(iLocal_340, 15f);
						}
						else if (func_194(iLocal_340))
						{
							unk_0xC76B5C68AB6DC7DF(iLocal_340, Local_323, 1, 0, 0, 1);
							unk_0x765E3FA65D011F03(iLocal_340, fLocal_328);
						}
						unk_0xF18809B65D87E197(iLocal_340);
					}
				}
				if (!unk_0xD5DFCA69ACAA20E3())
				{
					func_184(&Local_289, 0, 0, 2000, 1, 0, 0, 1);
				}
				else
				{
					unk_0xB3BA9D1B667F05DB(8, 0, 0);
					func_129(unk_0xBBDA792448DB5A89(8));
					unk_0x31E6EB2040318451(2000);
					unk_0x8C67D2FDE360FBCA(0);
					unk_0x0F9FDCEB321235AB(0, 1065353216);
					func_184(&Local_289, 0, 0, 2000, 1, 1, 0, 1);
				}
				if (unk_0x95CCECA3948CFE7B(uLocal_274[0]))
				{
					unk_0x26B3B761603F5232(&(uLocal_274[0]));
				}
				if (!func_128(uLocal_76[0], -1))
				{
					if (uLocal_76[0] == 5)
					{
						func_63("SCLUB_PHON_HELP_ALT", uLocal_76[0], 0);
					}
					else
					{
						func_63("SCLUB_PHON_HELP", uLocal_76[0], 0);
					}
					func_114(uLocal_76[0], 1, -1);
					unk_0x4EDE34FBADD967A6(4000);
				}
				func_112(uLocal_76[0]);
				iVar2 = func_111(uLocal_76[0]);
				if (iVar2 <= 2)
				{
					iVar3 = func_110(uLocal_76[0]);
					iVar4 = func_109(iVar2);
					func_104(-384575792, iVar3, iVar4, 3, func_108(), func_107(uLocal_76[0]), 60000, 10000, -1, 0, -1, 0, 1);
				}
				func_36();
			}
			break;
	}
}

int func_104(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	struct<14> Var0;
	
	if (func_50(0))
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam7 < 0)
	{
		return 0;
	}
	if (iParam8 == 76)
	{
		return 0;
	}
	if (iParam9 == 235)
	{
		return 0;
	}
	if (iParam5 < 3)
	{
		if (unk_0xDCC86F723E82125E(iParam4, iParam5))
		{
			return 0;
		}
	}
	if (iParam4 < 1 || iParam4 > 7)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 83 || iParam2 == 83)
	{
		return 0;
	}
	if (Global_100976.f_6322.f_764 < 8)
	{
		Var0.f_0 = iParam0;
		Var0.f_3 = func_106(iParam3);
		Var0.f_4 = (unk_0x693EBB4F13506457() + iParam6);
		Var0.f_5 = iParam7;
		Var0.f_1 = iParam11;
		Var0.f_2 = iParam4;
		Var0.f_6 = iParam5;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		Var0.f_10 = iParam1;
		Var0.f_11 = iParam2;
		Var0.f_13 = iParam12;
		unk_0x77621132305B133B(&(Var0.f_1), 0);
		Global_100976.f_6322.f_651[Global_100976.f_6322.f_764 /*14*/] = { Var0 };
		Global_100976.f_6322.f_764++;
		func_105(0);
		func_105(1);
		func_105(2);
		return 1;
	}
	return 0;
}

void func_105(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_76(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_100976.f_6322.f_136)
	{
		if (unk_0xDCC86F723E82125E(Global_100976.f_6322[iVar0 /*15*/].f_2, iParam0))
		{
			if (Global_100976.f_6322[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_100976.f_6322[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_100976.f_6322.f_764)
	{
		if (unk_0xDCC86F723E82125E(Global_100976.f_6322.f_651[iVar2 /*14*/].f_2, iParam0))
		{
			if (Global_100976.f_6322.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_100976.f_6322.f_919[iParam0] = iVar1;
}

int func_106(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

int func_107(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 104;
			break;
		
		case 1:
			return 105;
			break;
		
		case 2:
			return 106;
			break;
		
		case 3:
			return 107;
			break;
		
		case 4:
			return 108;
			break;
		
		case 5:
			return 109;
			break;
		
		case 6:
			return 110;
			break;
		
		case 7:
			return 111;
			break;
		
		case 8:
			return 112;
			break;
		
		case 9:
			return 93;
			break;
	}
	return 145;
}

int func_108()
{
	func_74();
	switch (Global_100976.f_1770.f_539.f_3549)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

int func_109(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 8;
			break;
		
		case 2:
			return 9;
			break;
	}
	return -1;
}

int func_110(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 4:
			return 2;
			break;
		
		case 5:
			return 3;
			break;
		
		case 8:
			return 4;
			break;
		
		case 9:
			return 5;
			break;
	}
	return -1;
}

int func_111(int iParam0)
{
	return Global_100976.f_243[func_71() /*53*/].f_2[iParam0 /*5*/].f_2;
}

void func_112(int iParam0)
{
	if (func_111(iParam0) < 0)
	{
		func_113(iParam0, 0);
	}
	Global_100976.f_243[func_71() /*53*/].f_2[iParam0 /*5*/].f_2++;
}

void func_113(int iParam0, int iParam1)
{
	Global_100976.f_243[func_71() /*53*/].f_2[iParam0 /*5*/].f_2 = iParam1;
}

void func_114(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	
	if (iParam2 < 0)
	{
		iParam2 = func_71();
	}
	if (func_127(iParam2) == 4)
	{
	}
	bVar0 = Global_100976.f_243[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4;
	if (bVar0)
	{
		if (unk_0xBBAE3E0C60A8AD4B())
		{
			if (!func_126(func_107(iParam0), 3))
			{
				bVar0 = false;
			}
		}
		else if (!func_126(func_107(iParam0), 4))
		{
			bVar0 = false;
		}
	}
	Global_100976.f_243[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4 = bParam1;
	if (bParam1)
	{
		if (!bVar0)
		{
			func_125(iParam0, 0);
			func_122(func_107(iParam0), func_127(iParam2), 1);
			iVar1 = unk_0x531444754C426278(1800000, 2100000);
			switch (iParam2)
			{
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
					unk_0x59A0729D503ED758(&(Global_2097152[func_121() /*10270*/].f_7698.f_691), iParam0);
					func_118(15, 0);
					break;
			}
			func_117(iVar1);
			func_116(iParam0, iVar1);
			Global_99970.f_15[iParam0] = unk_0x693EBB4F13506457();
		}
	}
	else if (bVar0)
	{
		func_115(func_107(iParam0), func_127(iParam2));
	}
}

void func_115(int iParam0, int iParam1)
{
	if (Global_117[iParam0 /*10*/].f_8 != 138)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			Global_100976.f_32519[iParam0 /*29*/].f_12[iParam1] = 0;
			Global_100976.f_32519[iParam0 /*29*/].f_24[iParam1] = 0;
		}
	}
}

void func_116(int iParam0, int iParam1)
{
	if (iParam1 > -1)
	{
		Global_99970.f_4[iParam0] = (unk_0x693EBB4F13506457() + iParam1);
	}
	else
	{
		Global_99970.f_4[iParam0] = (unk_0x693EBB4F13506457() + unk_0x531444754C426278(1200000, 2100000));
	}
}

void func_117(int iParam0)
{
	if (iParam0 != -1)
	{
		Global_99970.f_3 = (unk_0x693EBB4F13506457() + iParam0);
	}
	else
	{
		Global_99970.f_3 = (unk_0x693EBB4F13506457() + unk_0x531444754C426278(21600000, 25200000));
	}
}

void func_118(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_120(iParam0, iParam1))
	{
		iVar0 = func_119();
		Global_2441286[iVar0] = iParam0;
	}
}

int func_119()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2441286[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_120(int iParam0, var uParam1)
{
	if (Global_1315899)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315911) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_121()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_122(int iParam0, int iParam1, bool bParam2)
{
	Global_2969 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 138)
	{
		func_124();
		if (iParam1 == 4)
		{
			Global_100976.f_32519[iParam0 /*29*/].f_12[0] = 1;
			Global_100976.f_32519[iParam0 /*29*/].f_12[1] = 1;
			Global_100976.f_32519[iParam0 /*29*/].f_12[2] = 1;
			Global_100976.f_32519[iParam0 /*29*/].f_24[0] = 1;
			Global_100976.f_32519[iParam0 /*29*/].f_24[1] = 1;
			Global_100976.f_32519[iParam0 /*29*/].f_24[2] = 1;
		}
		else
		{
			if (Global_100976.f_32519[iParam0 /*29*/].f_12[iParam1] == 1 && Global_100976.f_32519[iParam0 /*29*/].f_24[iParam1] == 1)
			{
				bParam2 = false;
			}
			Global_100976.f_32519[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_100976.f_32519[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (bParam2)
		{
			if (!Global_69317)
			{
				if (iParam1 != 4)
				{
					if (Global_14413 != iParam1)
					{
						Global_2942[iParam1 /*4*/] = { Global_100976.f_32519[iParam0 /*29*/].f_3 };
						Global_2959[iParam1] = 1;
						Global_2964[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14413)
					{
					}
					else
					{
						Global_2893[1 /*6*/] = { Global_100976.f_32519[iParam0 /*29*/].f_3 };
						Global_2893[1 /*6*/].f_5 = iParam1;
						func_123();
					}
				}
				else
				{
					Global_2893[1 /*6*/] = { Global_100976.f_32519[iParam0 /*29*/].f_3 };
					Global_2893[1 /*6*/].f_5 = iParam1;
					func_123();
				}
			}
			else
			{
				Global_2893[1 /*6*/] = { Global_100976.f_32519[iParam0 /*29*/].f_3 };
				Global_2893[1 /*6*/].f_5 = iParam1;
				func_123();
			}
		}
	}
}

void func_123()
{
	char cVar0[64];
	char cVar16[64];
	char* sVar32;
	
	StringCopy(&cVar0, unk_0x73630CECCD6630B5(&(Global_100976.f_32519[Global_2969 /*29*/].f_7)), 64);
	if (Global_2988 == 0)
	{
		unk_0x12F4A48D84A3989D("");
		StringCopy(&cVar16, unk_0x73630CECCD6630B5(&(Global_2893[1 /*6*/])), 64);
		sVar32 = unk_0x73630CECCD6630B5("CELL_253");
		unk_0x5EAB76FB4193096C(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else
	{
		unk_0x12F4A48D84A3989D("CELL_255");
		unk_0xCE59E3E42586D52D(&(Global_2893[1 /*6*/]));
		unk_0x5EAB76FB4193096C(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0x77621132305B133B(&Global_2283, 0);
}

void func_124()
{
	if (func_75(14))
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
		Global_14413 = func_73();
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

void func_125(int iParam0, int iParam1)
{
	Global_100976.f_243[func_71() /*53*/].f_2[iParam0 /*5*/].f_1 = iParam1;
}

int func_126(int iParam0, int iParam1)
{
	if (Global_100976.f_32519[iParam0 /*29*/].f_12[iParam1] == 1)
	{
		return 1;
	}
	return 0;
}

int func_127(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 1:
			return 1;
			break;
		
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			return 3;
			break;
	}
	return 4;
}

bool func_128(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = func_71();
	}
	return Global_100976.f_243[iParam1 /*53*/].f_2[iParam0 /*5*/].f_4;
}

void func_129(float fParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_10(&(Global_100976.f_16737.f_175[iVar0 /*19*/].f_5)))
		{
			func_130(&(Global_100976.f_16737.f_175[iVar0 /*19*/].f_5), (fParam0 * 60f));
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_10(&(Global_100976.f_16737.f_362[iVar1 /*3*/])))
		{
			func_130(&(Global_100976.f_16737.f_362[iVar1 /*3*/]), (fParam0 * 60f));
		}
		iVar1++;
	}
	unk_0xDF142CA0E368B8C5();
}

void func_130(var uParam0, float fParam1)
{
	if (func_10(uParam0))
	{
		func_9(uParam0, (func_4(uParam0) + fParam1));
	}
}

void func_131()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 < 1)
		{
			Global_87901[iVar0] = Global_87901[iVar0 + 1];
		}
		else
		{
			Global_87901[iVar0] = unk_0x693EBB4F13506457();
		}
		iVar0++;
	}
}

void func_132()
{
	int iVar0;
	var uVar1;
	
	if (!unk_0xF9B86DC1728F1339(sLocal_276))
	{
	}
	else
	{
		iVar0 = unk_0x531444754C426278(0, 50000);
		unk_0x5124C5FA52D2AF3E(unk_0xC8B93D94F8954288());
		unk_0x3E2E609450787FFE(&uVar1);
		unk_0x81333BEA4837207C(0, Local_314, 1f, -1, 0.25f, 0, fLocal_326);
		if (iVar0 < 15000)
		{
			unk_0x5323F488E6A1B660(0, sLocal_276, "fidget_rub_hands", 1.5f, -1f, -1, 8320, 0, 0, 0, 0);
		}
		else if (iVar0 >= 15000 && iVar0 < 35000)
		{
			unk_0x5323F488E6A1B660(0, sLocal_276, "fidget_rub_chin", 1.5f, -1f, -1, 8320, 0, 0, 0, 0);
		}
		else
		{
			unk_0x5323F488E6A1B660(0, sLocal_276, "fidget_arm_swing", 1.5f, -1f, -1, 8320, 0, 0, 0, 0);
		}
		unk_0x939BC11172AA1303(uVar1);
		unk_0xBFE865E3B513451B(unk_0xC8B93D94F8954288(), uVar1);
		unk_0xA9351C9309E03069(&uVar1);
		func_26(&uLocal_333, 262144);
	}
}

void func_133(var uParam0)
{
	var uVar0;
	
	uVar0 = *uParam0;
	if (unk_0x95CCECA3948CFE7B(uVar0))
	{
		if (!func_134(iVar0))
		{
			unk_0x8FB4254399424391(iVar0, 1, 0);
			unk_0x872B541D7953A19B(iVar0, 1, 0);
			unk_0xB7A2078CD1C9A82F(iVar0, 0);
		}
	}
}

int func_134(int iParam0)
{
	if (unk_0x95CCECA3948CFE7B(iParam0))
	{
		if (unk_0xB6900B8CB0ABBD2B(iParam0))
		{
			return 1;
		}
		else if (!unk_0x5D42322C7DB888D0(iParam0, 0))
		{
			if (!unk_0x79E944054F6C9DCD(iParam0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_135(int iParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, float fParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	
	switch (uParam4->f_3)
	{
		case 0:
			*uParam4 = func_159();
			iVar4 = func_159();
			func_158(&iVar4, iParam0);
			func_157(&iVar4, iParam1);
			func_156(&iVar4, 0);
			if (func_154(*uParam4, iVar4))
			{
				func_149(&iVar4, 0, 0, 0, 1, 0, 0);
			}
			func_146(*uParam4, iVar4, &iVar0, &iVar1, &iVar2, &uVar5, &uVar6, &uVar7);
			uParam4->f_11 = ((iVar0 + iVar1 * 60) + (iVar2 + iParam6) * 3600);
			func_129((unk_0xBBDA792448DB5A89(uParam4->f_11) / 3600f));
			unk_0x3F7A4A7C823179B3(0.6f);
			unk_0xFC1F2AE3FDE7BB5D(0);
			unk_0xE8E1200B54AEEB5E(0);
			func_145();
			uParam4->f_10 = unk_0x83E9D86E63672B9A();
			unk_0xC4EE38A4CFF7544C(uParam4->f_10, "TIME_LAPSE_MASTER", 0, 1);
			unk_0x925AE2E6F6E41362("TOD_SHIFT_SCENE");
			func_144();
			uParam4->f_3++;
			break;
		
		case 1:
		case 2:
			if (fParam5 >= 0.5f)
			{
				if (uParam4->f_3 == 1)
				{
					if (unk_0x7CBED6EFED40E7EB(sParam2) != 0)
					{
						unk_0x4F5A2A83DD76FE4C(sParam2, 1f);
					}
					if (unk_0x7CBED6EFED40E7EB(sParam3) != 0)
					{
						unk_0xB86BBFD84291AAEE();
						unk_0x9654D0B81DE8EC63(sParam3, 0);
					}
					uParam4->f_3 = 2;
				}
			}
			if (fParam5 >= 0.99f || fParam5 == -1f)
			{
				iVar4 = *uParam4;
				func_149(&iVar4, uParam4->f_11, 0, 0, 0, 0, 0);
				unk_0xCFC0F0DF27A94807(func_143(iVar4), func_142(iVar4), func_141(iVar4));
				unk_0x7A2D5FC5F94932AA(uParam4->f_10);
				unk_0xF636B80CA6E4C266("TIME_LAPSE");
				return 1;
			}
			fVar10 = fParam5;
			fVar8 = 0.1f;
			fVar9 = 0.9f;
			fVar11 = func_140(((fVar10 - fVar8) / (fVar9 - fVar8)), 0f, 1f);
			iVar3 = unk_0xF2DB717A73826179((IntToFloat(uParam4->f_11) * fVar11));
			iVar4 = *uParam4;
			func_149(&iVar4, iVar3, 0, 0, 0, 0, 0);
			unk_0xCFC0F0DF27A94807(func_143(iVar4), func_142(iVar4), func_141(iVar4));
			if (func_139(iVar4) != unk_0x818078CDB71D3E9C())
			{
				unk_0xB7CF5820941CEAE4(func_139(iVar4), func_138(iVar4), func_136(iVar4));
			}
			func_240();
			unk_0xFD363D98CA84289C(6);
			break;
	}
	return 0;
}

int func_136(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_137(unk_0xDCC86F723E82125E(iParam0, 31), -1, 1)) + 2011;
}

int func_137(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_138(int iParam0)
{
	return iParam0 & 15;
}

int func_139(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

float func_140(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_141(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_142(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_143(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

void func_144()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		unk_0x69BE07152CD8DBFA(Global_100976.f_12775[iVar0 /*104*/].f_16);
		iVar0++;
	}
}

int func_145()
{
	int iVar0;
	
	if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
	{
		return 0;
	}
	if (!unk_0x7F13E3D2383CF15F(unk_0xC8B93D94F8954288()))
	{
		return 0;
	}
	iVar0 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
	if (!unk_0xB6900B8CB0ABBD2B(iVar0))
	{
		return 0;
	}
	unk_0x13A608BECDF12842(iVar0, "OFF");
	return 1;
}

void func_146(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_154(iParam0, iParam1))
	{
		iVar0 = func_138(iParam1);
		iVar1 = func_136(iParam0);
		iVar2 = (func_136(iParam0) - func_136(iParam1));
		iVar3 = (func_138(iParam0) - func_138(iParam1));
		iVar4 = (func_139(iParam0) - func_139(iParam1));
		iVar5 = (func_143(iParam0) - func_143(iParam1));
		iVar6 = (func_142(iParam0) - func_142(iParam1));
		iVar7 = (func_141(iParam0) - func_141(iParam1));
	}
	else
	{
		iVar0 = func_138(iParam0);
		iVar1 = func_136(iParam1);
		iVar2 = (func_136(iParam1) - func_136(iParam0));
		iVar3 = (func_138(iParam1) - func_138(iParam0));
		iVar4 = (func_139(iParam1) - func_139(iParam0));
		iVar5 = (func_143(iParam1) - func_143(iParam0));
		iVar6 = (func_142(iParam1) - func_142(iParam0));
		iVar7 = (func_141(iParam1) - func_141(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_148(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_147(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_147(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(unk_0xF2DB717A73826179(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_148(int iParam0, int iParam1)
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

void func_149(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_136(*iParam0);
	iVar1 = func_138(*iParam0);
	iVar2 = func_139(*iParam0);
	iVar3 = func_143(*iParam0);
	iVar4 = func_142(*iParam0);
	iVar5 = func_141(*iParam0);
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
	iVar6 = func_148(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_148(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_150(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_150(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_156(uParam0, iParam1);
	func_157(uParam0, iParam2);
	func_158(uParam0, iParam3);
	func_153(uParam0, iParam5);
	func_152(uParam0, iParam4);
	func_151(uParam0, iParam6);
}

void func_151(var uParam0, int iParam1)
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

void func_152(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_138(*uParam0);
	iVar1 = func_136(*uParam0);
	if (iParam1 < 1 || iParam1 > func_148(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_153(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

int func_154(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_155(iParam1) || !func_155(iParam0))
	{
		return 1;
	}
	iVar0 = func_136(iParam0);
	iVar1 = func_136(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_138(iParam0);
	iVar1 = func_138(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_139(iParam0);
	iVar1 = func_139(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_143(iParam0);
	iVar1 = func_143(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_142(iParam0);
	iVar1 = func_142(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_141(iParam0);
	iVar1 = func_141(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_155(int iParam0)
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
	iVar0 = func_141(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_142(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_143(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_136(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_138(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_139(iParam0);
	if (iVar5 < 1 || iVar5 > func_148(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_156(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 66060288);
	*iParam0 = (*iParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

void func_157(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 1032192);
	*iParam0 = (*iParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_158(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 15872);
	*iParam0 = (*iParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

int func_159()
{
	var uVar0;
	
	func_156(&uVar0, unk_0x4C374828FD653ECC());
	func_157(&uVar0, unk_0x44AD07D9D178F321());
	func_158(&uVar0, unk_0x342FDFC48311CCCE());
	func_152(&uVar0, unk_0x818078CDB71D3E9C());
	func_153(&uVar0, unk_0x49D01BEA8D03E892());
	func_151(&uVar0, unk_0x90D477BB666B03DB());
	return uVar0;
}

char* func_160()
{
	char* sVar0;
	
	switch (uLocal_76[0])
	{
		case 0:
			sVar0 = "CLEARING";
			break;
		
		case 1:
			sVar0 = "OVERCAST";
			break;
		
		case 4:
			sVar0 = "CLOUDS";
			break;
		
		case 5:
			sVar0 = "CLEAR";
			break;
		
		case 8:
			sVar0 = "EXTRASUNNY";
			break;
		
		case 9:
			sVar0 = "RAIN";
			break;
		
		default:
			sVar0 = "EXTRASUNNY";
			break;
	}
	return sVar0;
}

int func_161()
{
	if (Global_15712 != 0 || unk_0x2964A62922189B93())
	{
		return 1;
	}
	return 0;
}

void func_162()
{
	if (!unk_0xB6900B8CB0ABBD2B(uLocal_274[0]))
	{
		if (uLocal_76[0] == 8 || uLocal_76[0] == 9)
		{
			func_178(&uLocal_81, 1, 0, func_179(uLocal_76[0]), 0, 1);
			func_165("SC_SEX", 0, 0, 0);
		}
		else
		{
			func_163(uLocal_274[0], "SEX_ORAL", 10);
		}
	}
}

void func_163(int iParam0, char* sParam1, int iParam2)
{
	unk_0x7ABE44FB19CAE2E1(iParam0, sParam1, func_164(iParam2), 1);
}

int func_164(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

int func_165(char* sParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<6> Var0;
	char[] cVar6[8];
	
	if (func_177())
	{
		StringCopy(&Var0, sParam0, 24);
		if (bParam1)
		{
			func_176(&Var0, bParam2);
		}
		else
		{
			Var0 = { func_175(Var0) };
		}
		if (bParam3)
		{
			cVar6 = "SCAUD";
		}
		else
		{
			cVar6 = "SHAUD";
		}
		if (func_166(&uLocal_81, cVar6, &Var0, 7, 0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_166(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_174(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15719 = 0;
	Global_15721 = 0;
	Global_15726 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 0;
	Global_2621441 = 0;
	return func_167(sParam2, iParam3, 0);
}

int func_167(char* sParam0, int iParam1, bool bParam2)
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
					func_173();
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
		if (func_172(8, -1))
		{
			return 0;
		}
		Global_15788 = { Global_15782 };
		func_171();
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
				func_124();
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
				if (func_170())
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
			if (func_22())
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
			func_169();
			Global_15722 = bParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_168();
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
		func_173();
	}
	return 0;
}

void func_168()
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

void func_169()
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

int func_170()
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

void func_171()
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

bool func_172(int iParam0, int iParam1)
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

void func_173()
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

void func_174(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

struct<6> func_175(char[24] cParam0)
{
	int iVar0;
	
	StringConCat(&cParam0, "_", 24);
	iVar0 = uLocal_76[0];
	StringIntConCat(&cParam0, iVar0, 24);
	return cParam0;
}

void func_176(char* sParam0, bool bParam1)
{
	StringConCat(sParam0, "_", 24);
	if (func_73() == 2)
	{
		StringConCat(sParam0, "T", 24);
	}
	else if (func_73() == 0)
	{
		StringConCat(sParam0, "M", 24);
	}
	else if (func_73() == 1)
	{
		StringConCat(sParam0, "F", 24);
	}
	if (bParam1)
	{
		*sParam0 = { func_175(*sParam0) };
	}
}

int func_177()
{
	if ((unk_0xA3858ADDDBC3CB71() || unk_0x2964A62922189B93()) || Global_15712 != 0)
	{
		return 0;
	}
	return 1;
}

void func_178(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

char* func_179(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Juliet";
			break;
		
		case 1:
			return "Nikki";
			break;
		
		case 2:
			return "Chastity";
			break;
		
		case 3:
			return "Cheetah";
			break;
		
		case 4:
			return "Sapphire";
			break;
		
		case 5:
			return "Infernus";
			break;
		
		case 6:
			return "Fufu";
			break;
		
		case 7:
			return "Peach";
			break;
		
		case 8:
			return "TaxiLiz";
			break;
		
		case 9:
			return "REHH2Hiker";
			break;
	}
	return "Invalid name";
}

float func_180()
{
	switch (uLocal_76[0])
	{
		case 1:
			return 325.6f;
			break;
		
		case 0:
			return 52.89f;
			break;
		
		case 4:
			return 14.5f;
			break;
		
		case 5:
			return 43.85f;
			break;
		
		case 8:
			return 193.5f;
			break;
		
		case 9:
			return 233.2f;
			break;
	}
	return 0f;
}

Vector3 func_181(int iParam0, struct<3> Param1)
{
	var uVar0;
	
	Param1.f_2 = (Param1.f_2 + 0.15f);
	if (unk_0x32B7B9548CC32D81(Param1, &uVar0, 0))
	{
		Param1.f_2 = uVar0;
	}
	if (func_182(iParam0))
	{
		unk_0xC76B5C68AB6DC7DF(iParam0, Param1, 1, 0, 0, 1);
	}
	return Param1;
}

bool func_182(int iParam0)
{
	if (!unk_0x95CCECA3948CFE7B(uParam0))
	{
		return 0;
	}
	return !unk_0xB6900B8CB0ABBD2B(iParam0);
}

Vector3 func_183()
{
	switch (uLocal_76[0])
	{
		case 1:
			return 130.7462f, -1896.513f, 22.3246f;
			break;
		
		case 0:
			return -162.4315f, -1635.107f, 32.6529f;
			break;
		
		case 4:
			return -197.6542f, 92.3329f, 68.5846f;
			break;
		
		case 5:
			return -848.9675f, 510.048f, 89.8218f;
			break;
		
		case 8:
			return -28.5266f, -1565.793f, 28.918f;
			break;
		
		case 9:
			return 3315.045f, 5174.08f, 17.6765f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_184(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	
	if (iParam4 == 1)
	{
		unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), unk_0x0332C5816E3E66D5(unk_0xA34E7C2A5118D638()), 64);
	}
	if (!unk_0x308528B5CF35F306())
	{
		unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), !bParam1, 0);
	}
	if (bParam7)
	{
		if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
		{
			unk_0x1775E0DE78304CB9(unk_0xC8B93D94F8954288(), 1);
		}
	}
	if (!bParam1 && iParam6)
	{
		unk_0xCEDE7EE5970B48B8(0, 0, 3, 0);
	}
	else
	{
		unk_0x2544549FDE4C3A7E(bParam1, iParam2, iParam3, 1, 0, 0);
	}
	if (bParam1)
	{
		unk_0x9F4AA6F234E8A860(1);
	}
	else
	{
		if (unk_0x844838E5D8A21336(uParam0->f_4))
		{
			if (unk_0xF96FC657C212A30E(uParam0->f_4))
			{
				unk_0x7D1795B1E14EDFFD(uParam0->f_4, 0);
			}
			unk_0x5CF5A880ED809DDA(uParam0->f_4, 1);
		}
		if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
		{
			unk_0x872B541D7953A19B(unk_0xC8B93D94F8954288(), 1, 0);
		}
		iVar0 = unk_0x974516F979AD07BC();
		if (unk_0x95CCECA3948CFE7B(iVar0))
		{
			unk_0x872B541D7953A19B(iVar0, 1, 0);
		}
		unk_0xF636B80CA6E4C266("TIME_LAPSE");
		if (unk_0xB5F5536784683C33("TOD_SHIFT_SCENE"))
		{
			unk_0x7A2D5FC5F94932AA(uParam0->f_10);
			unk_0xF636B80CA6E4C266("TIME_LAPSE");
			unk_0xDB9D78E5137EE7AD("TOD_SHIFT_SCENE");
		}
	}
	func_15(bParam1, 1, 0, 0);
	func_144();
	if (!bParam1 && iParam5)
	{
		if (uParam0->f_5)
		{
			unk_0xCFC0F0DF27A94807(uParam0->f_7, 0, 0);
		}
		else
		{
			unk_0xCFC0F0DF27A94807(uParam0->f_8, 0, 0);
		}
	}
	if (!bParam1)
	{
		if (unk_0xD5DFCA69ACAA20E3())
		{
			unk_0x31E6EB2040318451(250);
		}
	}
	if (!bParam1)
	{
		if (Global_100976.f_18751.f_4801 != -15)
		{
			Global_100976.f_18751.f_4801 = func_159();
		}
	}
}

float func_185(var uParam0)
{
	if (func_10(uParam0))
	{
		if (func_6(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_5(unk_0xDCC86F723E82125E(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

void func_186()
{
	int iVar0;
	struct<3> Var1[4];
	struct<3> Var14[4];
	var uVar27[4];
	
	func_187(&Var1, &Var14, &uVar27);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0x844838E5D8A21336(uLocal_284[iVar0]))
		{
			uLocal_284[iVar0] = unk_0x785B53D5654A2FFD(26379945, Var1[iVar0 /*3*/], Var14[iVar0 /*3*/], uVar27[iVar0], 0, 2);
			unk_0xB61A035EB3575B09(uLocal_284[iVar0], "HAND_SHAKE", 0.3f);
		}
		iVar0++;
	}
	Local_289.f_4 = unk_0xFE4F2696906F18A3("DEFAULT_SPLINE_CAMERA", 0);
	unk_0x46D68916D0AD000D(Local_289.f_4, Var1[0 /*3*/], Var14[0 /*3*/], 6000, 3, 2);
	unk_0x46D68916D0AD000D(Local_289.f_4, Var1[1 /*3*/], Var14[1 /*3*/], 6000, 3, 2);
	unk_0xD9D8D5E5A50FF6D5(Local_289.f_4, uVar27[0]);
}

void func_187(var uParam0, var uParam1, var uParam2)
{
	switch (uLocal_76[0])
	{
		case 1:
			*(uParam0[0 /*3*/]) = { 140.9085f, -1885.527f, 25.6959f };
			*(uParam1[0 /*3*/]) = { -9.0308f, 0f, 126.3829f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { 141.712f, -1884.935f, 30.7241f };
			*(uParam1[1 /*3*/]) = { 4.7025f, 0f, 129.5531f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { 139.1899f, -1885.865f, 24.96737f };
			*(uParam1[2 /*3*/]) = { -3.535496f, 0.081819f, 135.1308f };
			(*uParam2)[2] = 50f;
			*(uParam0[3 /*3*/]) = { 133.9669f, -1893.292f, 23.9573f };
			*(uParam1[3 /*3*/]) = { -1.8669f, -0.0329f, -5.5828f };
			(*uParam2)[3] = 50f;
			break;
		
		case 0:
			*(uParam0[0 /*3*/]) = { -186.5408f, -1629.328f, 35.8275f };
			*(uParam1[0 /*3*/]) = { -1.5588f, 0f, -118.8025f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -186.1923f, -1629.505f, 48.7132f };
			*(uParam1[1 /*3*/]) = { -1.2745f, 0f, -116.9616f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -184.9595f, -1632.193f, 36.32303f };
			*(uParam1[2 /*3*/]) = { -3.262451f, 0.073971f, -100.6756f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { -164.7078f, -1632.25f, 34.0944f };
			*(uParam1[3 /*3*/]) = { -3.7303f, 0.0222f, 108.1824f };
			(*uParam2)[3] = 40f;
			break;
		
		case 4:
			*(uParam0[0 /*3*/]) = { -208.6886f, 112.8581f, 73.0855f };
			*(uParam1[0 /*3*/]) = { -0.1055f, 0f, -156.0082f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -208.9068f, 113.3747f, 85.2889f };
			*(uParam1[1 /*3*/]) = { 3.8438f, 0f, -157.0767f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -206.2357f, 106.941f, 72.07555f };
			*(uParam1[2 /*3*/]) = { -11.58381f, 0.084975f, -158.9702f };
			(*uParam2)[2] = 45f;
			*(uParam0[3 /*3*/]) = { -197.6886f, 94.7063f, 69.814f };
			*(uParam1[3 /*3*/]) = { 0.5155f, -0.0266f, 48.8652f };
			(*uParam2)[3] = 45f;
			break;
		
		case 5:
			*(uParam0[0 /*3*/]) = { -871.6285f, 520.8466f, 93.1945f };
			*(uParam1[0 /*3*/]) = { -0.1377f, -1.3933f, -105.9309f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -871.5255f, 521.1066f, 104.6356f };
			*(uParam1[1 /*3*/]) = { 3.1118f, -1.3933f, -105.9309f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -866.6436f, 514.6121f, 92.90275f };
			*(uParam1[2 /*3*/]) = { -5.957637f, -1.324997f, -101.9062f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { -849.5522f, 514.2322f, 91.0095f };
			*(uParam1[3 /*3*/]) = { -1.626f, -1.3198f, 92.3739f };
			(*uParam2)[3] = 40f;
			break;
		
		case 8:
			*(uParam0[0 /*3*/]) = { -27.698f, -1584.646f, 31.1034f };
			*(uParam1[0 /*3*/]) = { 0.0044f, 0f, -1.9117f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { -27.698f, -1584.646f, 40.4849f };
			*(uParam1[1 /*3*/]) = { 7.981f, 0f, -1.9117f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { -28.63904f, -1579.74f, 30.82423f };
			*(uParam1[2 /*3*/]) = { -7.527712f, 0.030218f, -14.33051f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { -28.6719f, -1568.09f, 29.7492f };
			*(uParam1[3 /*3*/]) = { -1.5414f, 0f, -168.6005f };
			(*uParam2)[3] = 40f;
			break;
		
		case 9:
			*(uParam0[0 /*3*/]) = { 3323.631f, 5148.861f, 20.9592f };
			*(uParam1[0 /*3*/]) = { 1.1547f, 1.0064f, 21.8733f };
			(*uParam2)[0] = 40f;
			*(uParam0[1 /*3*/]) = { 3323.844f, 5148.672f, 28.2303f };
			*(uParam1[1 /*3*/]) = { 11.4168f, 1.0064f, 22.8025f };
			(*uParam2)[1] = 40f;
			*(uParam0[2 /*3*/]) = { 3328.904f, 5157.818f, 20.5799f };
			*(uParam1[2 /*3*/]) = { -3.634001f, 1.039937f, 30.44809f };
			(*uParam2)[2] = 40f;
			*(uParam0[3 /*3*/]) = { 3315.368f, 5171.771f, 18.9066f };
			*(uParam1[3 /*3*/]) = { -2.8773f, 1.0064f, -103.0585f };
			(*uParam2)[3] = 40f;
			break;
	}
}

void func_188(int iParam0, struct<3> Param1)
{
	float fVar0;
	float fVar1;
	
	if (!unk_0x2DC9BA2299B45EA6(iParam0))
	{
		unk_0xE4A882E3AFAB07D4(iParam0, 1);
		if (unk_0x090C65D5190A249D(iParam0, 242628503) != 1)
		{
			unk_0xA9351C9309E03069(&uLocal_339);
			unk_0x3E2E609450787FFE(&uLocal_339);
			if (unk_0x277ECDA23D8CCEB4(iParam0, 0))
			{
				unk_0xE5F6BE3F8E937ACE(0, 0, 16777216);
			}
			if (iParam0 == unk_0xC8B93D94F8954288())
			{
				fVar0 = unk_0x2A488C176D52CCA5(unk_0x44C17CCB85A88A1F(iParam0, 1), Local_302);
				fVar1 = unk_0x2A488C176D52CCA5(unk_0x44C17CCB85A88A1F(iParam0, 1), Local_305);
				if (fVar1 < fVar0)
				{
					unk_0xC518AECFA9CF7722(0, uLocal_274[0], 0);
				}
				else if (!unk_0xB8A06E7E729EED0A(func_189()))
				{
					unk_0xC69F770D3B4E67F8(0, func_189(), 0, 552, -1);
				}
				else
				{
					unk_0x81333BEA4837207C(0, Local_302, 1f, -1, 0.25f, 64, 1193033728);
				}
			}
			if (iParam0 != unk_0xC8B93D94F8954288())
			{
				if (!unk_0xB8A06E7E729EED0A(func_189()))
				{
					unk_0xC69F770D3B4E67F8(0, func_189(), 0, 546, -1);
				}
				else
				{
					unk_0x81333BEA4837207C(0, Param1, 1f, -1, 0.25f, 1, 1193033728);
				}
				if (func_24(iParam0, Param1, 1) > 5f)
				{
					unk_0xC518AECFA9CF7722(0, unk_0xC8B93D94F8954288(), 0);
					unk_0x5323F488E6A1B660(0, "gestures@f@standing@casual", "gesture_come_here_soft", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x1A95AE7201CE6376(0, unk_0x531444754C426278(3000, 6000));
					unk_0xC518AECFA9CF7722(0, unk_0xC8B93D94F8954288(), 0);
					unk_0x5323F488E6A1B660(0, "gestures@f@standing@casual", "gesture_come_here_soft", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x1A95AE7201CE6376(0, unk_0x531444754C426278(3000, 6000));
					unk_0xC518AECFA9CF7722(0, unk_0xC8B93D94F8954288(), 0);
					unk_0x5323F488E6A1B660(0, "gestures@f@standing@casual", "gesture_come_here_soft", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x5323F488E6A1B660(0, "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -4f, -1, 0, 0, 0, 0, 0);
				}
			}
			unk_0x939BC11172AA1303(uLocal_339);
			unk_0xBFE865E3B513451B(iParam0, uLocal_339);
		}
	}
}

char* func_189()
{
	char* sVar0;
	
	if (uLocal_76[0] == 1)
	{
		sVar0 = "BC_NIKKI_H_F";
	}
	return sVar0;
}

void func_190(int iParam0, int iParam1)
{
	if (!unk_0x2DC9BA2299B45EA6(iParam0) && !unk_0xB6900B8CB0ABBD2B(iParam1))
	{
		unk_0xBD14E3B051184704(iParam0, iParam1, Local_308, fLocal_327, 3, 1092616192, 0);
	}
}

char* func_191()
{
	return "mini@strip_club@idles@bouncer@base";
}

char* func_192()
{
	if (func_73() == 0)
	{
		return "facials@p_m_zero@variations@happy";
	}
	else if (func_73() == 1)
	{
		return "facials@p_m_one@variations@happy";
	}
	else if (func_73() == 2)
	{
		return "facials@p_m_two@variations@happy";
	}
	return "facials@p_m_zero@variations@happy";
}

void func_193()
{
	sLocal_276 = "move_p_m_one_idles@generic";
	unk_0xC0E8B67A4385D37D(sLocal_276);
}

int func_194(int iParam0)
{
	if (unk_0x6B89D299CB2A726F(iParam0, joaat("blimp")))
	{
		return 1;
	}
	else if (unk_0x6B89D299CB2A726F(iParam0, joaat("cargobob")))
	{
		return 1;
	}
	else if (unk_0x6B89D299CB2A726F(iParam0, joaat("cargobob2")))
	{
		return 1;
	}
	else if (unk_0x6B89D299CB2A726F(iParam0, joaat("cargobob3")))
	{
		return 1;
	}
	else if (unk_0x6B89D299CB2A726F(iParam0, joaat("buzzard")))
	{
		return 1;
	}
	else if (unk_0x6B89D299CB2A726F(iParam0, joaat("buzzard2")))
	{
		return 1;
	}
	else if (unk_0x6B89D299CB2A726F(iParam0, joaat("maverick")))
	{
		return 1;
	}
	else if (unk_0x6B89D299CB2A726F(iParam0, joaat("polmav")))
	{
		return 1;
	}
	else if (unk_0x6B89D299CB2A726F(iParam0, joaat("annihilator")))
	{
		return 1;
	}
	else if (unk_0x6B89D299CB2A726F(iParam0, joaat("frogger")))
	{
		return 1;
	}
	else if (unk_0x6B89D299CB2A726F(iParam0, joaat("frogger2")))
	{
		return 1;
	}
	return 0;
}

int func_195(var uParam0, struct<3> Param1, bool bParam4, float fParam5)
{
	if (func_197(uParam0))
	{
		unk_0xA384C028CB596A07(*uParam0);
		if (!func_196(Param1))
		{
			unk_0xC76B5C68AB6DC7DF(*uParam0, Param1, 1, 0, 0, 1);
			if (bParam4)
			{
				unk_0x765E3FA65D011F03(*uParam0, fParam5);
			}
			unk_0xF18809B65D87E197(*uParam0);
		}
		return 1;
	}
	return 0;
}

int func_196(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_197(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0x974516F979AD07BC();
	if (unk_0x95CCECA3948CFE7B(iVar0))
	{
		if (!func_134(iVar0))
		{
			if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()) && unk_0x5534579797ACFD77(iVar0, unk_0xC8B93D94F8954288(), Local_63, 0, 1, 0))
			{
				unk_0xA384C028CB596A07(iVar0);
				unk_0x8FB4254399424391(iVar0, 0, 0);
				unk_0x872B541D7953A19B(iVar0, 0, 0);
				unk_0xB7A2078CD1C9A82F(iVar0, 1);
				unk_0xFD816D0E738EB817(iVar0, 1, 1);
				*uParam0 = iVar0;
				return 1;
			}
		}
	}
	return 0;
}

int func_198(int iParam0)
{
	if (unk_0xB66DD474AA9E764E())
	{
		if ((unk_0x693EBB4F13506457() - Global_28) > iParam0)
		{
			Global_27 = unk_0x693EBB4F13506457();
		}
		Global_28 = unk_0x693EBB4F13506457();
		if ((unk_0x693EBB4F13506457() - Global_27) > iParam0)
		{
			if (func_199())
			{
				Global_27 = unk_0x693EBB4F13506457();
				return 1;
			}
		}
	}
	return 0;
}

int func_199()
{
	if (unk_0x2BF05095F2389894())
	{
		return 0;
	}
	if (unk_0x8D9008B8900A28D0(0, 18) || unk_0x8D9008B8900A28D0(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_200(bool bParam0)
{
	struct<4> Var0;
	float fVar4;
	
	func_61();
	if (unk_0xB6900B8CB0ABBD2B(uLocal_274[0]))
	{
		return;
	}
	unk_0xE6D99A6809A1F8CE(Local_308 + Vector(0f, 1f, 1f) * Vector(10f, 10f, 10f), Local_308 + Vector(0f, -1f, -1f) * Vector(10f, 10f, 10f), 0, 1);
	fVar4 = unk_0x2A488C176D52CCA5(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), unk_0x44C17CCB85A88A1F(uLocal_274[0], 1));
	if (iLocal_78 != 9)
	{
		if (((fVar4 >= (200f / 2f) && func_177()) && !func_251(uLocal_333, 2)) || func_238(uLocal_274[0], 0))
		{
			if (unk_0x6B4865E08E90ACC5(uLocal_281))
			{
				unk_0x5356E82C1E5E0C44(&uLocal_281);
			}
			if (unk_0x6B4865E08E90ACC5(uLocal_280))
			{
				unk_0x5356E82C1E5E0C44(&uLocal_280);
			}
			func_235(0);
			func_79("SCLUB_HOME_R", uLocal_76[0]);
			iLocal_78 = 9;
		}
	}
	if (unk_0x719D80C8C2BB7B0A(unk_0xA34E7C2A5118D638(), 0))
	{
		if (iLocal_78 != 8)
		{
			if (unk_0x6B4865E08E90ACC5(uLocal_281))
			{
				unk_0x5356E82C1E5E0C44(&uLocal_281);
			}
			if (unk_0x6B4865E08E90ACC5(uLocal_280))
			{
				unk_0x5356E82C1E5E0C44(&uLocal_280);
			}
			iLocal_78 = 8;
		}
	}
	if (func_224(uLocal_274[0], &uLocal_267, &uLocal_264))
	{
		func_62(4);
	}
	if (iLocal_78 <= 1)
	{
		func_243(1);
	}
	switch (iLocal_78)
	{
		case 0:
			iLocal_79 = 0;
			if (func_177())
			{
				if (!func_251(uLocal_333, 1))
				{
					unk_0xB7A2078CD1C9A82F(uLocal_274[0], 1);
					func_79("SCLUB_HOME_MEET", uLocal_76[0]);
					func_235(0);
					func_26(&uLocal_333, 1);
				}
				iLocal_78 = 1;
			}
			break;
		
		case 1:
			iLocal_79 = 1;
			Var0 = { func_67(uLocal_76[0]) };
			if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
			{
				iLocal_340 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
				uLocal_334 = unk_0xD3A4099D2845F152(iLocal_340);
			}
			if (unk_0xA0C23498D8E0BB93(unk_0xC8B93D94F8954288(), unk_0x44C17CCB85A88A1F(uLocal_274[0], 1), 3f, 3f, 3f, 0, 1, 0) || (unk_0x5D42322C7DB888D0(iLocal_340, 0) && func_223(iLocal_340, uLocal_274[0], 1) <= 10f))
			{
				unk_0xB7A2078CD1C9A82F(uLocal_274[0], 0);
				if (unk_0x95CCECA3948CFE7B(iLocal_340) && (unk_0x7EFD275DF858497F(iLocal_340) < 1 || (!bParam0 && !unk_0x1B477DDE9D088A91(unk_0x6D5BB810CC209E15(iLocal_340)))))
				{
					if (!func_66("SCLUB_SMALL_CAR", &Var0))
					{
						func_63("SCLUB_SMALL_CAR", uLocal_76[0], 0);
						func_163(uLocal_274[0], "NEED_A_VEHICLE", 10);
					}
				}
				else
				{
					unk_0x9F4AA6F234E8A860(1);
					unk_0x5124C5FA52D2AF3E(uLocal_274[0]);
					func_221();
					if (!func_251(uLocal_333, 2))
					{
						func_26(&uLocal_333, 2);
					}
					func_220();
					func_81();
					func_213(39, 1);
					func_213(40, 1);
					func_213(41, 1);
					func_213(42, 1);
					func_213(43, 1);
					func_213(44, 1);
					iLocal_78 = 2;
				}
			}
			else if (func_66("SCLUB_SMALL_CAR", &Var0))
			{
				unk_0x9F4AA6F234E8A860(1);
			}
			break;
		
		case 2:
			iLocal_79 = 2;
			if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
			{
				if (unk_0x277ECDA23D8CCEB4(uLocal_274[0], 0))
				{
					iLocal_78 = 3;
				}
			}
			else
			{
				func_163(uLocal_274[0], "NEED_A_VEHICLE", 10);
				iLocal_78 = 3;
			}
			break;
		
		case 3:
			iLocal_79 = 3;
			func_210();
			if (!func_161())
			{
				if (func_177())
				{
					unk_0xB7A03E3BBB19D493(Local_308 - Vector(3f, 3f, 3f), Local_308 + Vector(3f, 3f, 3f), 0, 1);
					unk_0xE6D99A6809A1F8CE(Local_308 - Vector(3f, 3f, 3f), Local_308 + Vector(3f, 3f, 3f), 0, 1);
					unk_0x3FC9316FEF4E4720(Local_308, 10f, 0, 0, 0, 0, 0);
					unk_0x425A7D451DB73551(Local_308, 10f, 0);
					uLocal_301 = unk_0x8738B068D97CDC64(Local_308 - Vector(35f, 35f, 35f), Local_308 + Vector(35f, 35f, 35f), 0, 1, 1, 1);
					func_8(&uLocal_246);
					if (bParam0)
					{
						func_86(1);
						func_209();
					}
					else
					{
						iLocal_74 = 3;
					}
				}
			}
			break;
		
		case 4:
			iLocal_79 = 4;
			func_206(fVar4, Local_311);
			func_201();
			if ((func_4(&uLocal_258) > 45f || unk_0xB7A628320EFF8E47(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), Local_320) > (100f * 100f)) && func_24(unk_0xC8B93D94F8954288(), Local_311, 1) > 100f)
			{
				if (uLocal_76[0] == 8)
				{
					func_165("SC_WALK", 0, 0, 0);
				}
				else
				{
					func_163(uLocal_274[0], "GENERIC_FUCK_YOU", 10);
				}
				func_62(3);
			}
			else if (func_238(uLocal_274[0], 1))
			{
				if (unk_0x6B4865E08E90ACC5(uLocal_281))
				{
					unk_0x5356E82C1E5E0C44(&uLocal_281);
				}
				if (unk_0x6B4865E08E90ACC5(uLocal_280))
				{
					unk_0x5356E82C1E5E0C44(&uLocal_280);
				}
				func_235(0);
				func_79("SCLUB_HOME_R", uLocal_76[0]);
				iLocal_78 = 9;
			}
			else if (unk_0xA0C23498D8E0BB93(unk_0xC8B93D94F8954288(), Local_308, 3f, 3f, 2f, 1, 1, 2) || unk_0xA0C23498D8E0BB93(unk_0xC8B93D94F8954288(), Local_305, 5f, 5f, 2f, 1, 1, 1))
			{
				if (func_33(1, 0, 1))
				{
					iLocal_74 = 1;
				}
			}
			else if (!unk_0xCD8A4525A9B5A276(unk_0xC8B93D94F8954288()))
			{
				func_209();
			}
			break;
		
		case 5:
			iLocal_79 = 5;
			func_206(fVar4, Local_308);
			func_201();
			func_221();
			if (unk_0xA0C23498D8E0BB93(unk_0xC8B93D94F8954288(), Local_308, 1f, 1f, 2f, 1, 1, 2))
			{
				iLocal_78 = 6;
			}
			else
			{
				if (unk_0xCD8A4525A9B5A276(unk_0xC8B93D94F8954288()))
				{
					func_209();
				}
				else
				{
					func_57(Local_308);
				}
				if (func_102("SCLUB_HOME_WALK"))
				{
					unk_0x9F4AA6F234E8A860(1);
				}
			}
			break;
		
		case 6:
			if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
			{
				if (unk_0x95CCECA3948CFE7B(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0)))
				{
					if (func_56(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0), 3f, 2, 0.5f, 0, 1, 0))
					{
						func_55();
						func_188(uLocal_274[0], Local_305);
						if (uLocal_76[0] == 9 || uLocal_76[0] == 8)
						{
							func_165("SC_GO_DOOR", 0, 0, 0);
						}
						else
						{
							func_165("SC_FOLLOWD", 0, 0, 1);
						}
						iLocal_78 = 7;
					}
				}
			}
			else if (unk_0xCD8A4525A9B5A276(unk_0xC8B93D94F8954288()))
			{
				unk_0xBA73099E237C7E5E(uLocal_274[0]);
				func_209();
				unk_0x9F4AA6F234E8A860(1);
			}
			break;
		
		case 7:
			iLocal_79 = 7;
			if ((!func_161() && !unk_0xA3858ADDDBC3CB71()) && !func_251(uLocal_333, 2048))
			{
				Var0 = { func_67(uLocal_76[0]) };
				func_80("SCLUB_FOLLOW_H", &Var0, 7500, 1);
				func_81();
				func_235(0);
				func_26(&uLocal_333, 2048);
			}
			if ((unk_0xA0C23498D8E0BB93(unk_0xC8B93D94F8954288(), Local_311, 5f, 5f, 2f, 0, 1, 1) || unk_0xA0C23498D8E0BB93(unk_0xC8B93D94F8954288(), Local_305, 5f, 5f, 2f, 0, 1, 1)) && unk_0xCD8A4525A9B5A276(unk_0xC8B93D94F8954288()))
			{
				if (func_33(1, 0, 1))
				{
					iLocal_74 = 1;
				}
			}
			break;
		
		case 8:
			if ((!func_251(uLocal_331, 4096) && !func_161()) && !unk_0x0D211C48FB8578B7(uLocal_274[0]))
			{
				if (iLocal_79 > 1 || unk_0xB7A628320EFF8E47(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), unk_0x44C17CCB85A88A1F(uLocal_274[0], 1)) < (3f * 3f))
				{
					func_163(uLocal_274[0], "GENERIC_FRIGHTENED_MED", 10);
					func_26(&uLocal_331, 4096);
				}
			}
			if (!unk_0x719D80C8C2BB7B0A(unk_0xA34E7C2A5118D638(), 0))
			{
				iLocal_78 = iLocal_79;
			}
			break;
		
		case 9:
			if (fVar4 > 200f)
			{
				func_62(1);
			}
			else if (fVar4 <= (200f / 2f) && !func_238(uLocal_274[0], 1))
			{
				unk_0x7846F09C04C34C46();
				iLocal_78 = iLocal_79;
				if (unk_0xCD8A4525A9B5A276(unk_0xC8B93D94F8954288()))
				{
					func_209();
				}
			}
			break;
	}
}

void func_201()
{
	char* sVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	if (!func_251(uLocal_333, 16))
	{
		if (func_202())
		{
			func_26(&uLocal_333, 16);
		}
		else
		{
			return;
		}
	}
	sVar0 = func_95(uLocal_274[0], 0, 0);
	if (!func_251(uLocal_333, 8))
	{
		if (!func_251(uLocal_333, 4))
		{
			if (!func_251(uLocal_331, 256))
			{
				if (uLocal_76[0] == 8 || uLocal_76[0] == 9)
				{
					func_165("SC_BJ", 0, 0, 0);
				}
				func_26(&uLocal_331, 256);
			}
			else
			{
				unk_0xC0E8B67A4385D37D(sVar0);
				func_26(&uLocal_333, 4);
			}
		}
		else if (unk_0xF9B86DC1728F1339(sVar0))
		{
			func_89(uLocal_274[0], 1, 1, -1);
			unk_0xF1A02DDEC7E15D6E(uLocal_274[0], 1);
			func_7(&uLocal_255);
			func_26(&uLocal_333, 8);
		}
	}
	else if (func_251(uLocal_333, 4))
	{
		iVar1 = 0;
		bVar2 = unk_0xCD61E9D5CABC7E35(uLocal_274[0], sVar0, func_90(4, 1, 1, func_93(iLocal_340)), 3);
		bVar3 = unk_0x1E8D3FA42E89ED72(unk_0xC8B93D94F8954288());
		bVar4 = unk_0x090C65D5190A249D(uLocal_274[0], 242628503) == 7;
		bVar5 = unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0);
		bVar6 = false;
		if (bVar5)
		{
			if (unk_0x95CCECA3948CFE7B(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0)) && !unk_0xB6900B8CB0ABBD2B(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0)))
			{
				bVar6 = (unk_0x955A04DD5208F4B7(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0)) && unk_0x9BA9222C7124CA04(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0)) > 5f);
			}
		}
		if ((((!unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0) || func_4(&uLocal_255) > 35f) || unk_0x2A488C176D52CCA5(Local_308, unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1)) < 75f) || bVar3) || bVar6)
		{
			if (!bVar4 && !bVar2)
			{
				unk_0x5323F488E6A1B660(uLocal_274[0], sVar0, func_90(4, 1, 1, func_93(iLocal_340)), 8f, -8f, -1, 0, 0, 0, 0, 0);
			}
			if (bVar3)
			{
				iLocal_335 = 2000;
			}
			iVar1 = 1;
		}
		else if (bVar4)
		{
			iVar1 = 1;
		}
		if (bVar2)
		{
			func_240();
		}
		if ((iVar1 && bVar4) && !bVar2)
		{
			if (!bVar3 && bVar5)
			{
				if (bVar6)
				{
					unk_0xFE93132CC8944C8C(unk_0xC8B93D94F8954288(), (unk_0xD3A4099D2845F152(unk_0xC8B93D94F8954288()) - unk_0x11E019C8F43ACC8A((IntToFloat(unk_0x5A333ED85C979D34(unk_0xC8B93D94F8954288())) * 0.1f))));
					func_163(unk_0xC8B93D94F8954288(), "GENERIC_CURSE_HIGH", 10);
				}
				else
				{
					func_163(unk_0xC8B93D94F8954288(), "SEX_CLIMAX", 10);
				}
				func_26(&uLocal_331, 128);
			}
			unk_0x3ECF1E41E6ED71D8(sVar0);
			func_69(&uLocal_333, 4);
		}
		if (!func_251(uLocal_331, 64))
		{
			if (func_4(&uLocal_255) > 10f)
			{
				func_163(unk_0xC8B93D94F8954288(), "SEX_GENERIC", 10);
				func_163(uLocal_274[0], "SEX_ORAL", 10);
				func_26(&uLocal_331, 64);
			}
		}
		unk_0x3836D389E39F1D26();
		func_240();
	}
}

int func_202()
{
	struct<3> Var0;
	var uVar3;
	
	if (!func_177())
	{
		return 0;
	}
	func_60(&Var0, &uVar3, 0);
	if (((unk_0x2A488C176D52CCA5(Local_308, unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1)) > (75f * 2f) && unk_0x2A488C176D52CCA5(Var0, unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1)) > (75f / 2f)) && func_111(uLocal_76[0]) > 1) && func_203())
	{
		return 1;
	}
	return 0;
}

int func_203()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
	{
		return 0;
	}
	iVar0 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
	if (unk_0x5D42322C7DB888D0(iVar0, 0))
	{
		iVar1 = unk_0x6D5BB810CC209E15(iVar0);
		if (func_205(iVar1, 0) && func_204(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_204(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if (unk_0x5D42322C7DB888D0(iParam0, 0))
	{
		if (unk_0x35C1534E81F87E96(iParam0) > 0)
		{
			iVar0 = 0;
			while (iVar0 < 49)
			{
				iVar1 = iVar0;
				if (((((iVar1 != 17 && iVar1 != 18) && iVar1 != 19) && iVar1 != 20) && iVar1 != 21) && iVar1 != 22)
				{
					if (unk_0x342B167253E636DE(iParam0, iVar1) != -1)
					{
						StringCopy(&cVar3, unk_0x2089F9858CC119AB(iParam0, iVar1, unk_0x342B167253E636DE(iParam0, iVar1)), 16);
						iVar2 = unk_0x7CBED6EFED40E7EB(&cVar3);
						if (iVar2 != 0)
						{
							if (iVar2 == unk_0x7CBED6EFED40E7EB("SABRE_CAG"))
							{
								return 0;
							}
						}
					}
				}
				iVar0++;
			}
		}
		switch (unk_0x38E553FFEC2B7BCC(iParam0))
		{
			case -2066252141:
			case -782720499:
			case 542797648:
			case 68566729:
			case joaat("LAYOUT_STANDARD"):
			case -1917671975:
			case -1405350320:
			case -157990217:
			case -280076747:
			case 1710903184:
			case 434478421:
			case 1816176348:
			case 919485892:
			case 945079693:
			case 85100643:
			case 1939145032:
			case 1869774540:
			case -28233912:
			case -1150063973:
			case -463340997:
			case -703649403:
			case 197952738:
			case -208246612:
			case 2033852426:
			case -1820894825:
			case 1697345049:
			case -635697407:
			case -1910741341:
			case -1158091941:
			case -1834221859:
			case -1453479140:
			case -1954624455:
			case 1837596901:
			case 2013836096:
			case 1374303184:
			case 1419869906:
			case -526725184:
				return 1;
				break;
		}
		if (unk_0x38E553FFEC2B7BCC(iParam0) == 931866387 && unk_0x6D5BB810CC209E15(iParam0) == joaat("slamvan"))
		{
			return 1;
		}
	}
	return 0;
}

int func_205(int iParam0, bool bParam1)
{
	if ((((unk_0x9DABB329596B1BD6(iParam0) || unk_0xE924C2C283992918(iParam0)) || unk_0xAF40E7422A6D9D80(iParam0)) || unk_0xC9E810FB9A83EF58(iParam0)) || unk_0xE6CB12C10EE5D793(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (((((((iParam0 == joaat("police") || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("caddy")) || iParam0 == joaat("caddy2"))
		{
			return 0;
		}
	}
	if ((((iParam0 == joaat("issi2") || iParam0 == joaat("hotknife")) || iParam0 == joaat("jb700")) || iParam0 == joaat("jester")) || iParam0 == joaat("jester2"))
	{
		return 0;
	}
	return 1;
}

void func_206(float fParam0, struct<3> Param1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	if (!func_251(uLocal_331, 262144))
	{
		if (func_208(uLocal_274[0]))
		{
			if (uLocal_76[0] == 8)
			{
				func_165("SC_STEALC", 0, 0, 0);
			}
			else
			{
				func_163(uLocal_274[0], "GENERIC_SHOCKED_MED", 10);
			}
			func_8(&uLocal_249);
			func_26(&uLocal_331, 262144);
		}
	}
	else if (func_4(&uLocal_249) > 10f)
	{
		func_69(&uLocal_331, 262144);
		func_8(&uLocal_249);
	}
	if ((fParam0 > 5f || !func_177()) || func_251(uLocal_333, 4))
	{
		return;
	}
	if (!func_251(uLocal_331, 1) && !func_251(uLocal_331, 128))
	{
		if (unk_0x2A488C176D52CCA5(Param1, unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1)) < 75f)
		{
			if (uLocal_76[0] == 8 || uLocal_76[0] == 9)
			{
				if (func_165("SC_NEAR", 0, 0, 0))
				{
					func_26(&uLocal_331, 1);
				}
			}
			else
			{
				func_26(&uLocal_331, 1);
			}
			unk_0x3FC9316FEF4E4720(Local_308, 5f, 0, 0, 0, 0, 0);
		}
	}
	if (!unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
	{
		return;
	}
	iVar0 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
	if (!unk_0x5D42322C7DB888D0(iVar0, 0))
	{
		if (!func_251(uLocal_331, 16))
		{
			func_163(uLocal_274[0], "NEED_A_VEHICLE", 10);
			func_26(&uLocal_331, 16);
			func_8(&uLocal_246);
		}
		if (!func_251(uLocal_331, 4))
		{
			func_69(&uLocal_331, 4);
		}
		if (!func_251(uLocal_331, 8))
		{
			func_69(&uLocal_331, 8);
		}
	}
	else
	{
		fVar1 = unk_0x9BA9222C7124CA04(iVar0);
		fVar2 = unk_0x6A2F6A048580765F(iVar0);
		if (fVar1 < (fVar2 * 0.9f) || fVar1 > (fVar2 * 0.1f))
		{
			func_8(&uLocal_252);
		}
		if (!func_251(uLocal_331, 4))
		{
			if (func_4(&uLocal_246) > 15f && func_4(&uLocal_252) > 5f)
			{
				func_163(uLocal_274[0], "DRIVEN_FAST", 10);
				func_26(&uLocal_331, 4);
				func_8(&uLocal_246);
			}
		}
		else if (func_4(&uLocal_246) < 5f)
		{
			func_69(&uLocal_331, 4);
			func_8(&uLocal_246);
		}
		if (!func_251(uLocal_331, 8))
		{
			if (func_4(&uLocal_246) > 15f && func_4(&uLocal_252) > 5f)
			{
				func_163(uLocal_274[0], "DRIVEN_SLOW", 10);
				func_26(&uLocal_331, 4);
				func_8(&uLocal_246);
			}
		}
		else if (func_4(&uLocal_246) < 5f)
		{
			func_69(&uLocal_331, 8);
			func_8(&uLocal_246);
		}
		if (!func_251(uLocal_331, 131072))
		{
			if (func_207(uLocal_274[0], &uLocal_334))
			{
				if (func_4(&uLocal_249) > 5f)
				{
					func_163(uLocal_274[0], "CRASH_GENERIC_DRIVEN", 10);
					func_26(&uLocal_331, 131072);
					func_8(&uLocal_246);
				}
			}
		}
		else if (func_4(&uLocal_249) > 5f)
		{
			func_69(&uLocal_331, 131072);
			func_8(&uLocal_249);
		}
		if (!func_251(uLocal_331, 65536))
		{
			if (func_4(&uLocal_246) > 30f || (func_4(&uLocal_246) > 10f && !func_251(uLocal_331, 32)))
			{
				func_163(uLocal_274[0], "BOOTY_FLIRT", 10);
				func_26(&uLocal_331, 32);
				func_26(&uLocal_331, 524288);
				func_8(&uLocal_246);
			}
			else if (func_251(uLocal_331, 524288))
			{
				if (!unk_0x0D211C48FB8578B7(uLocal_274[0]) && func_4(&uLocal_246) > 4f)
				{
					func_163(unk_0xC8B93D94F8954288(), "BOOTY_FLIRT_RESP", 10);
					func_69(&uLocal_331, 524288);
				}
			}
		}
	}
}

int func_207(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
	if (unk_0x5D42322C7DB888D0(iVar0, 0))
	{
		if (unk_0x465DC424E3211BBE(uParam0, iVar0))
		{
			if (unk_0x955A04DD5208F4B7(iVar0))
			{
				iVar1 = unk_0xD3A4099D2845F152(iVar0);
				iVar2 = (*uParam1 - iVar1);
				*uParam1 = iVar1;
				unk_0x0CBE045BBBA5CFDE(iVar0);
				if (iVar2 > 10)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_208(int iParam0)
{
	if (!unk_0xB6900B8CB0ABBD2B(iParam0))
	{
		if (unk_0x2585B6892F479881(108, unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), 10f) && unk_0x6F40F1AEF9770612(iParam0, unk_0xC8B93D94F8954288()))
		{
			return 1;
		}
	}
	return 0;
}

void func_209()
{
	func_82();
	func_8(&uLocal_246);
	if (unk_0xCD8A4525A9B5A276(unk_0xC8B93D94F8954288()))
	{
		if (unk_0x6B4865E08E90ACC5(uLocal_280))
		{
			unk_0x5356E82C1E5E0C44(&uLocal_280);
		}
		if (!unk_0x6B4865E08E90ACC5(uLocal_281))
		{
			uLocal_281 = func_58(Local_311, 0);
		}
		func_8(&uLocal_258);
		Local_320 = { unk_0x44C17CCB85A88A1F(uLocal_274[0], 1) };
		iLocal_78 = 4;
	}
	else
	{
		func_8(&uLocal_249);
		func_57(Local_308);
		iLocal_78 = 5;
	}
}

void func_210()
{
	if (!func_251(uLocal_331, 1024))
	{
		if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()) && unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
		{
			if (func_211(uLocal_76[0]))
			{
				if (!func_161())
				{
					func_163(uLocal_274[0], "NICE_CAR", 10);
					func_26(&uLocal_331, 1024);
				}
			}
		}
	}
}

int func_211(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
	if (unk_0x5D42322C7DB888D0(iVar0, 0))
	{
		iVar1 = unk_0x6D5BB810CC209E15(iVar0);
		if (func_212(iParam0, iVar1))
		{
			return 1;
		}
	}
	return 0;
}

int func_212(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("manana"):
		case joaat("tornado"):
		case joaat("tornado3"):
		case joaat("tornado4"):
		case joaat("ztype"):
		case joaat("regina"):
			if (iParam0 == 0)
			{
				return 1;
			}
			break;
		
		case joaat("blista"):
		case joaat("surge"):
		case joaat("dilettante"):
		case joaat("penumbra"):
		case joaat("asterope"):
			if (iParam0 == 1)
			{
				return 1;
			}
			break;
		
		case joaat("dominator"):
		case joaat("gauntlet"):
		case joaat("phoenix"):
		case joaat("sabregt"):
		case joaat("bullet"):
		case joaat("banshee"):
		case joaat("peyote"):
		case joaat("buffalo"):
		case joaat("buffalo2"):
			if (iParam0 == 2)
			{
				return 1;
			}
			break;
		
		case joaat("cheetah"):
		case joaat("cogcabrio"):
		case joaat("jb700"):
		case joaat("stingergt"):
		case joaat("monroe"):
		case joaat("comet2"):
		case joaat("oracle"):
		case joaat("oracle2"):
		case joaat("intruder"):
		case joaat("jackal"):
		case joaat("exemplar"):
		case joaat("felon"):
		case joaat("superd"):
		case joaat("infernus"):
		case joaat("entityxf"):
		case joaat("adder"):
		case joaat("vacca"):
			if (iParam0 == 3 || iParam0 == 5)
			{
				return 1;
			}
			break;
		
		case joaat("baller"):
		case joaat("bison"):
		case joaat("dubsta"):
		case joaat("granger"):
		case joaat("patriot"):
		case joaat("baller2"):
		case joaat("bjxl"):
		case joaat("cavalcade"):
		case joaat("cavalcade2"):
		case joaat("gresley"):
		case joaat("landstalker"):
		case joaat("mesa"):
		case joaat("rancherxl"):
		case joaat("sandking"):
		case joaat("rebel"):
		case joaat("stretch"):
		case joaat("romero"):
		case joaat("coach"):
		case joaat("bus"):
			if (iParam0 == 4 || iParam0 == 7)
			{
				return 1;
			}
			break;
		
		case joaat("surano"):
		case joaat("rapidgt2"):
		case joaat("ninef2"):
		case joaat("zion2"):
		case joaat("tornado2"):
		case joaat("sentinel2"):
		case joaat("issi2"):
		case joaat("felon2"):
			if (iParam0 == 6 || iParam0 == 1)
			{
				return 1;
			}
			break;
		
		case joaat("vader"):
		case joaat("akuma"):
		case joaat("bagger"):
		case joaat("bati"):
		case joaat("bati2"):
		case joaat("double"):
		case joaat("hexer"):
		case joaat("nemesis"):
		case joaat("ruffian"):
			if (iParam0 == 8)
			{
				return 1;
			}
			break;
		
		case joaat("fbi"):
		case joaat("taxi"):
		case joaat("pranger"):
		case joaat("ambulance"):
		case joaat("police3"):
			if (iParam0 == 9)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_213(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_219(iParam0, 2, 1))
		{
			func_218(iParam0, 2, 1);
		}
	}
	else if (func_219(iParam0, 2, 1))
	{
		func_214(iParam0, 2, 1);
	}
}

void func_214(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0x77621132305B133B(&(Global_91158.f_1300[iParam0]), iParam1);
	}
	else if (unk_0xBBAE3E0C60A8AD4B())
	{
		if (func_51() == 0)
		{
			uVar0 = func_216(func_217(iParam0), -1, 0);
			unk_0x77621132305B133B(&uVar0, iParam1);
			func_215(func_217(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0x77621132305B133B(&(Global_100976.f_668[iParam0]), iParam1);
	}
}

void func_215(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2466774[iParam0 /*5*/][func_72(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x071958EFED9481F5(iVar0, uParam1, iParam3);
	}
}

int func_216(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2466774[iParam0 /*5*/][func_72(iParam1)];
	if (unk_0x5F0618A5FDAD55C4(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_217(int iParam0)
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

void func_218(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0x59A0729D503ED758(&(Global_91158.f_1300[iParam0]), iParam1);
	}
	else if (unk_0xBBAE3E0C60A8AD4B())
	{
		if (func_51() == 0)
		{
			uVar0 = func_216(func_217(iParam0), -1, 0);
			unk_0x59A0729D503ED758(&uVar0, iParam1);
			func_215(func_217(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0x59A0729D503ED758(&(Global_100976.f_668[iParam0]), iParam1);
	}
}

int func_219(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0xDCC86F723E82125E(Global_91158.f_1300[iParam0], iParam1);
	}
	else if (unk_0xBBAE3E0C60A8AD4B())
	{
		if (func_51() == 0)
		{
			return unk_0xDCC86F723E82125E(func_216(func_217(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xDCC86F723E82125E(Global_100976.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_220()
{
	if (uLocal_76[0] == 8)
	{
		func_165("SC_GREET", 0, 0, 0);
	}
	else
	{
		func_163(uLocal_274[0], "GENERIC_HI_FLIRTY", 10);
	}
}

void func_221()
{
	if (!unk_0x5BE4C4CB01F0877F(uLocal_274[0]) && unk_0x2A488C176D52CCA5(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), unk_0x44C17CCB85A88A1F(uLocal_274[0], 1)) < 10f)
	{
		unk_0x13B202E60E04C733(uLocal_274[0], func_222());
		unk_0x64CD20398FAC9617(uLocal_274[0], 0);
	}
}

int func_222()
{
	return unk_0x471BC3ECFB439FD6(unk_0x1A96BAEAC664567A());
}

float func_223(int iParam0, int iParam1, int iParam2)
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

int func_224(int iParam0, var uParam1, var uParam2)
{
	var uVar0;
	int iVar1;
	
	if (!func_10(uParam2))
	{
		func_7(uParam2);
	}
	if (func_4(uParam2) > 3f)
	{
		if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
		{
			iVar1 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
		}
		if (func_227(iParam0, iVar1, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_225(&uVar0);
			if (unk_0x95CCECA3948CFE7B(iParam0))
			{
				if (!unk_0xB6900B8CB0ABBD2B(iParam0))
				{
					if (!unk_0xAA78AD621F2EA1F0(iLocal_72))
					{
						unk_0x4A606A8BE6924115("BootyCall", &iLocal_72);
					}
					unk_0x6CCF5F545348D54E(2, iLocal_72, joaat("player"));
					unk_0x6CCF5F545348D54E(2, joaat("player"), iLocal_72);
					unk_0xCBD60E398042F554(iParam0, iLocal_72);
					unk_0x622E764F80DBF8B7(iParam0, unk_0xC8B93D94F8954288(), 500f, -1, 0, 0);
				}
			}
			func_8(uParam2);
			return 1;
		}
	}
	return 0;
}

void func_225(var uParam0)
{
	switch (*uParam0)
	{
		case 1:
		case 4:
		case 16:
			func_226(1);
			break;
		
		case 2:
			break;
	}
}

void func_226(bool bParam0)
{
	Global_99970 = 0;
	Global_99970.f_1 = -1;
	Global_99970.f_2 = -1;
	if (bParam0)
	{
		func_117(-1);
	}
}

int func_227(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0xC8B93D94F8954288();
	if (!unk_0xB6900B8CB0ABBD2B(iVar0) && !unk_0xB6900B8CB0ABBD2B(iParam0))
	{
		if (!func_251(*uParam2, 1))
		{
			if (func_234(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_251(*uParam2, 2))
		{
			if (unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_251(*uParam2, 4))
		{
			if (func_232(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_251(*uParam2, 8))
		{
			if (func_231(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_251(*uParam2, 128);
		if (bParam4)
		{
			if (func_228(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_251(*uParam2, 16))
		{
			if (func_228(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return 1;
			}
		}
	}
	else if (unk_0x95CCECA3948CFE7B(iParam0))
	{
		if (iParam7 && unk_0x87D4C731B013290A(iParam0, iVar0, 1))
		{
			*uParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_228(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_59)
		{
			iLocal_60 = unk_0xD3A4099D2845F152(iParam0);
			bLocal_59 = true;
		}
		iLocal_61 = unk_0xD3A4099D2845F152(iParam0);
		iLocal_62 = (iLocal_60 - iLocal_61);
		iVar0 = unk_0x974516F979AD07BC();
		if (!unk_0xB6900B8CB0ABBD2B(iVar0))
		{
			if (unk_0x87D4C731B013290A(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_62) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_59)
		{
			if (unk_0x87D4C731B013290A(iParam0, unk_0xC8B93D94F8954288(), 1))
			{
				if (IntToFloat(iLocal_62) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x87D4C731B013290A(iParam0, unk_0xC8B93D94F8954288(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		iVar1 = unk_0x974516F979AD07BC();
		if (!unk_0xB6900B8CB0ABBD2B(iVar1))
		{
			if (unk_0x87D4C731B013290A(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0xB6900B8CB0ABBD2B(iParam0))
		{
			if (unk_0xB03AB89ABCAB2B4E(iParam0))
			{
				if (unk_0x2BE02B2E8F70BEEC(iParam0) == unk_0xC8B93D94F8954288())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0x7E515EEFC038658D(unk_0xC8B93D94F8954288()))
		{
			if (unk_0xA0C23498D8E0BB93(iParam0, unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), 10f, 10f, 10f, 0, 1, 0))
			{
				if (unk_0xA44A20565B141DAE(unk_0xA34E7C2A5118D638()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0xBE749D71030A14D3(unk_0xC8B93D94F8954288()))
	{
		if (unk_0x64A71C92E3B69E73(iParam0))
		{
			return 1;
		}
	}
	if (func_230(unk_0xC8B93D94F8954288(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x770AAB67BDD9C729(iParam0) && func_229(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (unk_0x277ECDA23D8CCEB4(iParam0, 0))
		{
			if (unk_0xA499226F64D3A26A(unk_0xC8B93D94F8954288(), unk_0x275BEBE583A163B5(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (unk_0xA499226F64D3A26A(unk_0xC8B93D94F8954288(), iParam0))
		{
			return 1;
		}
		if (!unk_0xB6900B8CB0ABBD2B(iParam1))
		{
			if (unk_0x87D4C731B013290A(iParam1, unk_0xC8B93D94F8954288(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_229(int iParam0, int iParam1)
{
	return func_223(unk_0xCF4C00513A86E840(unk_0x1A96BAEAC664567A()), iParam0, iParam1);
}

int func_230(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xA51F11E1DC7307BB(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0x1E8D3FA42E89ED72(iParam0))
		{
			if (unk_0x2A488C176D52CCA5(unk_0x44C17CCB85A88A1F(iParam0, 1), unk_0x44C17CCB85A88A1F(iParam1, 1)) < 2.5f)
			{
				if (unk_0xAF9BF2C76079B4BF(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_231(int iParam0, int iParam1, var uParam2)
{
	if (unk_0x74BBB84E37C71AAC(iParam0, 4))
	{
		if (unk_0x1E8D3FA42E89ED72(iParam0) && !unk_0xBCB541CE877969BE(iParam0))
		{
			if (unk_0xA0C23498D8E0BB93(iParam1, unk_0x44C17CCB85A88A1F(iParam0, 1), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_232(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	int iVar3;
	
	iVar3 = 0;
	if (!unk_0xB6900B8CB0ABBD2B(iParam1))
	{
		Var0 = { unk_0x44C17CCB85A88A1F(iParam1, 1) };
	}
	if (unk_0x0592F98C32AC22CA(Var0, 4f, 1))
	{
		return 1;
	}
	if (unk_0xFB2795545DBC1C8A(Var0, unk_0xBBDA792448DB5A89(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (unk_0x74BBB84E37C71AAC(iParam0, 2))
	{
		if (unk_0x1E8D3FA42E89ED72(iParam0))
		{
			if (unk_0xA0C23498D8E0BB93(iParam1, unk_0x44C17CCB85A88A1F(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0))
			{
				if (unk_0xAF9BF2C76079B4BF(unk_0x4D3C2AC8339BFB4F(iParam1), iParam0, 120f) && unk_0x164373F9651C2457(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0x277ECDA23D8CCEB4(unk_0x4D3C2AC8339BFB4F(iParam1), 0))
			{
				iVar3 = unk_0x275BEBE583A163B5(unk_0x4D3C2AC8339BFB4F(iParam1), 0);
			}
			if (unk_0x3A2AAB26205C2C37(iParam0) || func_233(iVar3))
			{
				if (unk_0xA0C23498D8E0BB93(iParam1, unk_0x44C17CCB85A88A1F(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0))
				{
					if (unk_0xAF9BF2C76079B4BF(unk_0x4D3C2AC8339BFB4F(iParam1), iParam0, 120f) && unk_0x164373F9651C2457(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0xEC54737A42D57DA5((Var0.f_0 - IntToFloat(uParam2->f_6)), (Var0.f_1 - IntToFloat(uParam2->f_6)), (Var0.f_2 - IntToFloat(uParam2->f_6)), (Var0.f_0 + IntToFloat(uParam2->f_6)), (Var0.f_1 + IntToFloat(uParam2->f_6)), (Var0.f_2 + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_233(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x95CCECA3948CFE7B(iParam0))
	{
		if (unk_0x5D42322C7DB888D0(iParam0, 0))
		{
			if (unk_0xC0ADAF0814175B68(iParam0, -1) != 0)
			{
				if (unk_0xA51F11E1DC7307BB(unk_0xC8B93D94F8954288(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_223(unk_0xC8B93D94F8954288(), iParam0, 1) < 40f)
						{
							if (unk_0x07AC36C22591E640(unk_0xA34E7C2A5118D638(), &iVar1))
							{
								if ((unk_0x18BDAFC0B20C2C9E(iVar1) && unk_0xE6E6D9800E15A76C(iVar1) == iParam0) || (unk_0x96209AADF56E8FE8(iVar1) && unk_0x4D3C2AC8339BFB4F(iVar1) == unk_0xC0ADAF0814175B68(iParam0, -1)))
								{
									if ((unk_0xCD8A4525A9B5A276(unk_0xC8B93D94F8954288()) && unk_0x0139E142C27412BC(0, 24)) || (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0) && unk_0x0139E142C27412BC(0, 69)))
									{
										return 1;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_234(int iParam0, var uParam1)
{
	if (!unk_0xB6900B8CB0ABBD2B(iParam0))
	{
		if (unk_0x74BBB84E37C71AAC(unk_0xC8B93D94F8954288(), 6))
		{
			if (unk_0xFEDC9F0F78A56158(unk_0xA34E7C2A5118D638(), iParam0) || unk_0x0BBFEAC55291063A(unk_0xA34E7C2A5118D638(), iParam0))
			{
				if (unk_0xAF9BF2C76079B4BF(iParam0, unk_0xC8B93D94F8954288(), 90f))
				{
					if (func_229(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0x693EBB4F13506457();
						}
						else if ((unk_0x693EBB4F13506457() - uParam1->f_1) > uParam1->f_3)
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

void func_235(int iParam0)
{
	struct<4> Var0;
	
	if (unk_0x6B4865E08E90ACC5(uLocal_282[iParam0]))
	{
		unk_0x5356E82C1E5E0C44(&(uLocal_282[iParam0]));
	}
	uLocal_282[iParam0] = func_236(uLocal_274[iParam0], 0, 145);
	Var0 = { func_67(uLocal_76[iParam0]) };
	unk_0x8755DAC584918BF9(uLocal_282[iParam0], &Var0);
}

var func_236(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_237(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x6B4865E08E90ACC5(uVar0)) && unk_0xF2831232D38CD691(&(Global_100976.f_32519[iParam2 /*29*/].f_3)))
	{
		unk_0x8755DAC584918BF9(uVar0, &(Global_100976.f_32519[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_237(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x95CCECA3948CFE7B(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x361E437CE4AD5532(iParam0);
	if (unk_0x18BDAFC0B20C2C9E(iParam0))
	{
		unk_0x3734DA1F207E7166(uVar0, func_59(unk_0xBBAE3E0C60A8AD4B(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xDDD65F4720293225(uVar0, bParam1);
		}
		else
		{
			unk_0x32546F91F646B246(uVar0, 2);
		}
	}
	else if (unk_0x96209AADF56E8FE8(iParam0))
	{
		unk_0x3734DA1F207E7166(uVar0, func_59(unk_0xBBAE3E0C60A8AD4B(), 0.7f, 0.7f));
		unk_0xDDD65F4720293225(uVar0, bParam1);
	}
	else if (unk_0x09C656419AB67926(iParam0))
	{
		unk_0x3734DA1F207E7166(uVar0, func_59(unk_0xBBAE3E0C60A8AD4B(), 0.7f, 0.7f));
	}
	return uVar0;
}

int func_238(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	var uVar6;
	float fVar7;
	
	Var0 = { unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1) };
	Var3 = { unk_0x44C17CCB85A88A1F(iParam0, 1) };
	if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
	{
		uVar6 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
		if (unk_0x9C3EFF22E14C3C1D(iParam0) == func_222())
		{
			if (unk_0x5D42322C7DB888D0(uVar6, 0))
			{
				if (!unk_0x0C7EC810080F0459(iParam0, iVar6, 0) && unk_0x2A488C176D52CCA5(Var0, Var3) > 10f)
				{
					return 1;
				}
			}
		}
	}
	if (iParam1 && func_251(uLocal_333, 2))
	{
		fVar7 = unk_0xA3C5926D6E5619AE((Var0.f_2 - Var3.f_2));
		if (fVar7 > 8f)
		{
			return 1;
		}
	}
	return 0;
}

void func_239()
{
	if (!unk_0xB6900B8CB0ABBD2B(uLocal_274[0]))
	{
		if (!unk_0x2394B86AAC723FB8())
		{
			func_181(uLocal_274[0], unk_0xE79F1883B253E5B8(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), unk_0x59DD203239FBDCAD(unk_0xC8B93D94F8954288()), 0f, 2f, 0f));
			iLocal_74 = 1;
			iLocal_75 = 0;
		}
	}
}

void func_240()
{
	unk_0x5B53B03A14798328();
	func_241();
}

void func_241()
{
	Global_17118.f_134 = 1;
}

int func_242(int iParam0, bool bParam1)
{
	if (iParam0 == 0)
	{
		if (bParam1)
		{
			return joaat("csb_stripper_01");
		}
		else
		{
			return joaat("s_f_y_stripper_01");
		}
	}
	else if (iParam0 == 1)
	{
		if (bParam1)
		{
			return joaat("csb_stripper_02");
		}
		else
		{
			return joaat("s_f_y_stripper_02");
		}
	}
	return 0;
}

void func_243(bool bParam0)
{
	struct<8> Var0;
	
	if (!func_155(iLocal_73))
	{
		iLocal_73 = func_159();
		func_149(&iLocal_73, 0, 0, unk_0x531444754C426278(5, 7), 0, 0, 0);
	}
	else if (bParam0)
	{
		if (!func_251(uLocal_333, 512))
		{
			if (func_250(iLocal_73) && unk_0x3F13A387457FD9A7(uLocal_274[0]))
			{
				if (uLocal_76[0] == 8 || uLocal_76[0] == 9)
				{
					StringCopy(&Var0, "SC_CANCEL_", 64);
					StringIntConCat(&Var0, uLocal_76[0], 64);
					func_178(&uLocal_81, 1, 0, func_179(uLocal_76[0]), 0, 1);
					func_249(&uLocal_81, func_107(uLocal_76[0]), "SHAUD", &Var0, 7, 0, 0, 1);
				}
				else
				{
					func_247();
				}
				func_246(uLocal_274[0]);
				func_26(&uLocal_333, 512);
			}
		}
		else if (func_245())
		{
			func_69(&uLocal_333, 512);
		}
		else if ((!func_161() && func_244()) && !func_245())
		{
			func_226(1);
			func_62(2);
		}
	}
}

int func_244()
{
	if (Global_15712 == 0)
	{
		return 1;
	}
	return 0;
}

int func_245()
{
	if (Global_15761 == 1 || Global_16728 == 1)
	{
		return 1;
	}
	return 0;
}

void func_246(int iParam0)
{
	if (!unk_0x2DC9BA2299B45EA6(uParam0))
	{
		unk_0xE4A882E3AFAB07D4(iParam0, 1);
		if (unk_0x090C65D5190A249D(iParam0, 242628503) != 1)
		{
			unk_0xA9351C9309E03069(&uLocal_339);
			unk_0x3E2E609450787FFE(&uLocal_339);
			unk_0x68C10C01CBAADA0A(0, 8000);
			unk_0x81333BEA4837207C(0, Local_305, 1.5f, -1, 0.25f, 0, 1193033728);
			unk_0x939BC11172AA1303(uLocal_339);
			unk_0xBFE865E3B513451B(iParam0, uLocal_339);
		}
	}
}

void func_247()
{
	int iVar0;
	
	if (func_248())
	{
		return;
	}
	iVar0 = func_110(uLocal_76[0]);
	func_104(-384575792, iVar0, 6, 3, func_108(), func_107(uLocal_76[0]), 0, 10000, -1, 0, -1, 0, 1);
}

int func_248()
{
	if (func_51() == 0)
	{
		return 1;
	}
	return 0;
}

int func_249(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_174(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15760 = 1;
	Global_15719 = 1;
	Global_15726 = 0;
	Global_15721 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 0;
	Global_15717 = 0;
	Global_15764 = 0;
	Global_15766 = 0;
	Global_2621441 = 0;
	return func_167(sParam3, iParam4, bParam7);
}

bool func_250(int iParam0)
{
	return func_154(func_159(), iParam0);
}

bool func_251(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_252(var uParam0, bool bParam1)
{
	struct<3> Var0;
	var uVar3;
	int iVar4;
	char cVar5[64];
	struct<16> Var21;
	struct<8> Var37;
	
	func_280();
	func_60(&Var0, &uVar3, bParam1);
	if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
	{
		if (fLocal_329 == -1f)
		{
			fLocal_329 = unk_0x2A488C176D52CCA5(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), Var0);
		}
		if (iLocal_332 == -1)
		{
			iLocal_332 = uParam0->f_3;
		}
		if (!func_251(uLocal_333, 32))
		{
			func_276(&uLocal_278, func_278((*uParam0)[0], 0));
			func_275(&uLocal_278);
			func_26(&uLocal_333, 32);
			unk_0xC0E8B67A4385D37D("mini@strip_club@idles@stripper");
			unk_0xC0E8B67A4385D37D("gestures@f@standing@casual");
			func_274();
			return 0;
		}
		else if ((!func_273(&uLocal_278) || !unk_0xF9B86DC1728F1339("mini@strip_club@idles@stripper")) || !func_272())
		{
			return 0;
		}
		if (bLocal_337)
		{
			if (!unk_0x30D45E180EF7AEE1(1))
			{
				return 0;
			}
		}
		if (!func_251(uLocal_333, 1024))
		{
			uLocal_76[0] = (*uParam0)[0];
			uLocal_274[0] = unk_0x71DD988C1B903F5D(26, func_278((*uParam0)[0], 0), Var0, uVar3, 1, 1);
			func_266(uLocal_274[0], uLocal_76[0], 0);
			unk_0xAAD662D7E0D59F4C(uLocal_274[iVar4], 1);
			unk_0xF1A02DDEC7E15D6E(uLocal_274[0], 1);
			unk_0x6EF57C6D89E028F1(uLocal_274[0], 1);
			func_262(uLocal_274[0]);
			unk_0x5323F488E6A1B660(uLocal_274[0], "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -1.5f, -1, 1, 0, 0, 0, 0);
			unk_0xE48D9147BC1F4CD7(uLocal_274[iVar4], unk_0xC8B93D94F8954288(), -1, 2048, 4);
			unk_0x64CD20398FAC9617(uLocal_274[0], 0);
			unk_0xB7F5BF6BE1CE7627(uLocal_274[0], func_179((*uParam0)[0]));
			func_178(&uLocal_81, 1, uLocal_274[0], func_179((*uParam0)[0]), 0, 1);
			func_26(&uLocal_333, 1024);
		}
		if (unk_0x2A488C176D52CCA5(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), Var0) > 100f)
		{
			if (func_177())
			{
				if (!func_251(uLocal_333, 1))
				{
					func_261(bParam1);
					func_235(0);
					func_26(&uLocal_333, 1);
				}
			}
			if (!func_251(uLocal_333, 64) && !func_251(uLocal_333, 512))
			{
				if (func_260(func_107((*uParam0)[0])))
				{
					StringCopy(&cVar5, "BC_PLYRC_", 64);
					if (func_73() == 2)
					{
						func_178(&uLocal_81, 0, unk_0xC8B93D94F8954288(), "TREVOR", 0, 1);
						StringConCat(&cVar5, "T", 64);
					}
					else if (func_73() == 0)
					{
						func_178(&uLocal_81, 0, unk_0xC8B93D94F8954288(), "MICHAEL", 0, 1);
						StringConCat(&cVar5, "M", 64);
					}
					else if (func_73() == 1)
					{
						func_178(&uLocal_81, 0, unk_0xC8B93D94F8954288(), "FRANKLIN", 0, 1);
						StringConCat(&cVar5, "F", 64);
					}
					func_178(&uLocal_81, 3, 0, func_179((*uParam0)[0]), 0, 1);
					Var21 = { func_259() };
					func_254(&uLocal_81, func_107((*uParam0)[0]), "BCAUD", &cVar5, &cVar5, &Var21, &Var21, 12, 1, 0, 0, 0);
					func_26(&uLocal_333, 64);
				}
				if (func_155(iLocal_73))
				{
					if (func_250(iLocal_73))
					{
						if ((*uParam0)[0] == 8 || (*uParam0)[0] == 9)
						{
							StringCopy(&Var37, "SC_CANCEL_", 64);
							StringIntConCat(&Var37, (*uParam0)[0], 64);
							func_178(&uLocal_81, 1, 0, func_179((*uParam0)[0]), 0, 1);
							func_249(&uLocal_81, func_107((*uParam0)[0]), "SHAUD", &Var37, 12, 0, 0, 1);
						}
						else
						{
							func_247();
						}
						func_26(&uLocal_333, 512);
					}
				}
			}
			else if (func_245())
			{
				func_69(&uLocal_333, 64);
				func_69(&uLocal_333, 512);
			}
			else if ((!func_161() && func_244()) && !func_245())
			{
				func_253((*uParam0)[0]);
				func_226(1);
				func_62(2);
			}
			if (!func_251(uLocal_333, 128))
			{
				if (!func_32(0))
				{
					func_63("SCLUB_HOME_C_H", uLocal_76[0], 0);
					func_26(&uLocal_333, 128);
				}
			}
			if (unk_0x2A488C176D52CCA5(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), Var0) > (fLocal_329 + (200f * 3f)))
			{
				func_62(1);
			}
			else if (unk_0x2A488C176D52CCA5(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), Var0) < fLocal_329)
			{
				fLocal_329 = unk_0x2A488C176D52CCA5(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), Var0);
			}
			return 0;
		}
	}
	else
	{
		return 0;
	}
	if (func_73() == 2)
	{
		func_178(&uLocal_81, 0, unk_0xC8B93D94F8954288(), "TREVOR", 0, 1);
	}
	else if (func_73() == 0)
	{
		func_178(&uLocal_81, 0, unk_0xC8B93D94F8954288(), "MICHAEL", 0, 1);
	}
	else if (func_73() == 1)
	{
		func_178(&uLocal_81, 0, unk_0xC8B93D94F8954288(), "FRANKLIN", 0, 1);
	}
	return 1;
}

void func_253(int iParam0)
{
	if (Global_100976.f_243[func_71() /*53*/].f_2[iParam0 /*5*/].f_1 < 0)
	{
		Global_100976.f_243[func_71() /*53*/].f_2[iParam0 /*5*/].f_1 = 0;
	}
	Global_100976.f_243[func_71() /*53*/].f_2[iParam0 /*5*/].f_1++;
}

int func_254(var uParam0, int iParam1, char* sParam2, char[4] cParam3, char[4] cParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	var uVar11;
	
	func_174(uParam0, iParam1, sParam2, iParam9, iParam10, 0);
	func_258();
	if (iParam8 == 1)
	{
		Global_15724 = 1;
	}
	else
	{
		Global_15724 = 0;
	}
	uVar0 = 10;
	uVar11 = 10;
	func_256(2, &uVar0, &uVar11, cParam3, cParam4, uParam5, uParam6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_255(&uVar0, &uVar11, iParam7, bParam11);
}

int func_255(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	Global_15713 = 0;
	if (Global_15712 == 0 || Global_15714 == 2)
	{
		if (Global_15712 != 0)
		{
			if (iParam2 > Global_15714)
			{
				if (bParam3 == 0)
				{
					unk_0xB518E9C8553B1D2B(0);
					Global_14413.f_1 = 3;
					Global_15712 = 0;
					Global_15713 = 1;
					Global_15765 = 0;
					Global_15708 = 0;
					Global_15709 = 0;
				}
				else
				{
					func_173();
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
		if (func_172(8, -1))
		{
			return 0;
		}
		Global_15788 = { Global_15782 };
		func_171();
		Global_15001 = { Global_15166 };
		Global_15718 = Global_15719;
		Global_15725 = Global_15726;
		Global_2621442 = Global_2621441;
		Global_15727 = { Global_15743 };
		Global_15720 = Global_15721;
		Global_16702 = Global_16703;
		Global_16710 = { Global_16716 };
		Global_16708 = Global_16709;
		Global_16704 = Global_16705;
		Global_16706 = Global_16707;
		Global_15331.f_368 = Global_16699;
		Global_15331.f_369 = Global_16700;
		Global_15331.f_370 = Global_16701;
		Global_15708 = Global_15709;
		Global_15710 = Global_15711;
		if (Global_15970 == 0)
		{
			Global_15866[0 /*6*/] = { Global_15892[0 /*6*/] };
			Global_15866[1 /*6*/] = { Global_15892[1 /*6*/] };
			Global_15918[0 /*6*/] = { Global_15944[0 /*6*/] };
			Global_15918[1 /*6*/] = { Global_15944[1 /*6*/] };
			Global_15879[0 /*6*/] = { Global_15905[0 /*6*/] };
			Global_15879[1 /*6*/] = { Global_15905[1 /*6*/] };
			Global_15931[0 /*6*/] = { Global_15957[0 /*6*/] };
			Global_15931[1 /*6*/] = { Global_15957[1 /*6*/] };
		}
		if (Global_15718)
		{
			unk_0x77621132305B133B(&Global_2283, 20);
			unk_0x77621132305B133B(&Global_2284, 17);
			unk_0x77621132305B133B(&Global_2285, 0);
			if (bParam3)
			{
				func_124();
				if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
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
				if (func_170())
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
					if (Global_15970 == 0)
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
			}
			if (func_22())
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
			}
			func_169();
			Global_15722 = bParam3;
		}
		Global_15714 = iParam2;
		if (Global_15708 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_15708)
			{
				StringCopy(&(Global_15331.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_15331.f_187[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_14578 = 0;
		func_168();
		return 1;
	}
	if (Global_15712 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_15714 || iParam2 == Global_15714)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		func_173();
	}
	return 0;
}

void func_256(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	func_257(iParam0);
	(*uParam1)[0] = uParam3;
	(*uParam2)[0] = uParam4;
	(*uParam1)[1] = uParam5;
	(*uParam2)[1] = uParam6;
	(*uParam1)[2] = iParam7;
	(*uParam2)[2] = iParam8;
	(*uParam1)[3] = iParam9;
	(*uParam2)[3] = iParam10;
	(*uParam1)[4] = iParam11;
	(*uParam2)[4] = iParam12;
	(*uParam1)[5] = iParam13;
	(*uParam2)[5] = iParam14;
	(*uParam1)[6] = iParam15;
	(*uParam2)[6] = iParam16;
}

void func_257(var uParam0)
{
	Global_15709 = uParam0;
	Global_15719 = 1;
	Global_15726 = 0;
	Global_15721 = 0;
	Global_16703 = 0;
	Global_16709 = 0;
	Global_2621441 = 0;
}

void func_258()
{
	Global_15760 = 0;
	Global_15719 = 1;
	Global_15726 = 0;
	Global_15721 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_15726 = 0;
	Global_16709 = 0;
	Global_15717 = 0;
	Global_15764 = 0;
	Global_15766 = 0;
	Global_2621441 = 0;
}

struct<16> func_259()
{
	struct<16> Var0;
	
	StringCopy(&Var0, "BC_DECR_", 64);
	StringIntConCat(&Var0, uLocal_76[0], 64);
	return Var0;
}

int func_260(int iParam0)
{
	if ((Global_16826 || Global_16825) || Global_16827)
	{
		if (iParam0 == 130)
		{
		}
		else
		{
			return 0;
		}
	}
	if (Global_117[iParam0 /*10*/].f_8 != 138)
	{
		if (Global_14413.f_1 == 10)
		{
			if (Global_1598 == iParam0)
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
	return 0;
}

void func_261(bool bParam0)
{
	switch (uLocal_76[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (bParam0)
			{
				func_79("SCLUB_HOME_MEE4", uLocal_76[0]);
			}
			else
			{
				func_79("SCLUB_HOME_MEET", uLocal_76[0]);
			}
			break;
		
		case 8:
			func_79("SCLUB_HOME_LIZ", uLocal_76[0]);
			break;
		
		case 9:
			func_79("SCLUB_HOME_HITCH", uLocal_76[0]);
			break;
	}
}

void func_262(int iParam0)
{
	if (unk_0x6D5BB810CC209E15(uParam0) == joaat("s_f_y_stripper_02"))
	{
		func_265(iParam0, 2, unk_0x531444754C426278(0, 3));
		func_264(iParam0, 2, unk_0x531444754C426278(0, 3));
		func_263(iParam0, 0, 0);
	}
}

void func_263(var uParam0, int iParam1, int iParam2)
{
	if (unk_0xC7499236BA7FE6D5(uParam0, 6, iParam1, iParam2))
	{
		unk_0x8C245572EDB27776(uParam0, 6, iParam1, iParam2, 0);
	}
}

void func_264(var uParam0, int iParam1, int iParam2)
{
	if (unk_0xC7499236BA7FE6D5(uParam0, 3, iParam1, iParam2))
	{
		unk_0x8C245572EDB27776(uParam0, 3, iParam1, iParam2, 0);
	}
}

void func_265(var uParam0, int iParam1, int iParam2)
{
	if (unk_0xC7499236BA7FE6D5(uParam0, 8, iParam1, iParam2))
	{
		unk_0x8C245572EDB27776(uParam0, 8, iParam1, iParam2, 0);
	}
}

void func_266(int iParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	
	if (!unk_0x2DC9BA2299B45EA6(uParam0))
	{
		unk_0x9AA5A07C66C84468(iParam0);
		bVar0 = false;
		if (unk_0x6D5BB810CC209E15(iParam0) == joaat("mp_f_stripperlite"))
		{
			bVar0 = true;
		}
		switch (iParam1)
		{
			case 0:
				if (bVar0)
				{
					func_271(iParam0, 1, 0);
					func_270(iParam0, 1, 0);
					func_264(iParam0, 1, 0);
					func_269(iParam0, 1, 0);
					func_268(iParam0, 1, -1, -1);
				}
				else
				{
					func_271(iParam0, 1, 1);
					func_270(iParam0, 2, 0);
					func_264(iParam0, 0, 0);
					func_269(iParam0, 0, 0);
					func_265(iParam0, 1, 0);
					func_267(iParam0, 0, 0);
					func_268(iParam0, bParam2, -1, -1);
				}
				break;
			
			case 1:
				if (bVar0)
				{
					func_271(iParam0, 0, 0);
					func_270(iParam0, 0, 0);
					func_264(iParam0, 0, 0);
					func_269(iParam0, 0, 0);
					func_265(iParam0, 0, 0);
					func_268(iParam0, bParam2, -1, -1);
				}
				else
				{
					func_271(iParam0, 0, 0);
					func_270(iParam0, 0, 0);
					func_264(iParam0, 0, 0);
					func_269(iParam0, 0, 0);
					func_263(iParam0, 4, 0);
					func_265(iParam0, 0, 0);
					func_268(iParam0, bParam2, 0, 4);
				}
				break;
			
			case 2:
				if (bVar0)
				{
					func_271(iParam0, 1, 0);
					func_270(iParam0, 1, 1);
					func_264(iParam0, 1, 0);
					func_269(iParam0, 1, 0);
					func_268(iParam0, 1, -1, -1);
				}
				else
				{
					func_271(iParam0, 0, 1);
					func_270(iParam0, 1, 1);
					func_264(iParam0, 1, 0);
					func_269(iParam0, 1, 1);
					func_265(iParam0, 1, 0);
					func_267(iParam0, 1, 0);
					func_268(iParam0, bParam2, -1, -1);
				}
				break;
			
			case 3:
				if (bVar0)
				{
					func_271(iParam0, 0, 0);
					func_270(iParam0, 0, 1);
					func_264(iParam0, 0, 1);
					func_269(iParam0, 0, 1);
					func_265(iParam0, 0, 0);
					func_268(iParam0, bParam2, -1, -1);
				}
				else
				{
					func_271(iParam0, 0, 0);
					func_270(iParam0, 2, 0);
					func_264(iParam0, 0, 2);
					func_269(iParam0, 1, 1);
					func_263(iParam0, 0, 0);
					func_265(iParam0, 0, 0);
					func_268(iParam0, bParam2, 2, 0);
				}
				break;
			
			case 4:
				if (bVar0)
				{
					func_271(iParam0, 1, 0);
					func_270(iParam0, 1, 0);
					func_264(iParam0, 1, 0);
					func_269(iParam0, 1, 0);
					func_268(iParam0, 1, -1, -1);
				}
				else
				{
					func_271(iParam0, 1, 0);
					func_270(iParam0, 2, 1);
					func_264(iParam0, 1, 2);
					func_269(iParam0, 0, 2);
					func_265(iParam0, 1, 0);
					func_267(iParam0, 1, 2);
					func_268(iParam0, bParam2, -1, -1);
				}
				break;
			
			case 5:
				if (bVar0)
				{
					func_271(iParam0, 0, 0);
					func_270(iParam0, 0, 0);
					func_264(iParam0, 0, 0);
					func_269(iParam0, 0, 0);
					func_265(iParam0, 0, 0);
					func_268(iParam0, bParam2, -1, -1);
				}
				else
				{
					func_271(iParam0, 1, 1);
					func_270(iParam0, 1, 0);
					func_264(iParam0, 0, 1);
					func_269(iParam0, 0, 2);
					func_263(iParam0, 2, 0);
					func_265(iParam0, 0, 0);
					func_268(iParam0, bParam2, 1, 2);
				}
				break;
			
			case 6:
				if (bVar0)
				{
					func_271(iParam0, 1, 0);
					func_270(iParam0, 1, 0);
					func_264(iParam0, 1, 0);
					func_269(iParam0, 1, 0);
					func_268(iParam0, 1, -1, -1);
				}
				else
				{
					func_271(iParam0, 0, 0);
					func_270(iParam0, 1, 0);
					func_264(iParam0, 0, 1);
					func_269(iParam0, 0, 1);
					func_265(iParam0, 1, 0);
					func_267(iParam0, 0, 1);
					func_268(iParam0, bParam2, 0, 1);
				}
				break;
			
			case 7:
				if (bVar0)
				{
					func_271(iParam0, 0, 0);
					func_270(iParam0, 0, 1);
					func_264(iParam0, 0, 0);
					func_269(iParam0, 0, 0);
					func_265(iParam0, 0, 0);
					func_268(iParam0, bParam2, -1, -1);
				}
				else
				{
					func_271(iParam0, 1, 0);
					func_270(iParam0, 0, 2);
					func_264(iParam0, 1, 1);
					func_269(iParam0, 0, 1);
					func_263(iParam0, 0, 0);
					func_265(iParam0, 1, 0);
					func_268(iParam0, bParam2, 0, 0);
				}
				break;
			
			case 8:
				unk_0x8C245572EDB27776(iParam0, 3, 2, 0, 0);
				unk_0x8C245572EDB27776(iParam0, 4, 0, 1, 0);
				break;
			
			case 9:
				unk_0x8C245572EDB27776(iParam0, 0, 0, 1, 0);
				unk_0x8C245572EDB27776(iParam0, 2, 0, 1, 0);
				unk_0x8C245572EDB27776(iParam0, 3, 0, 0, 0);
				unk_0x8C245572EDB27776(iParam0, 4, 0, 1, 0);
				unk_0x8C245572EDB27776(iParam0, 8, 1, 0, 0);
				unk_0x8C245572EDB27776(iParam0, 10, 0, 0, 0);
				break;
			}
	}
}

void func_267(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xC7499236BA7FE6D5(uParam0, 11, iParam1, iParam2))
	{
		unk_0x8C245572EDB27776(uParam0, 11, iParam1, iParam2, 0);
	}
}

void func_268(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (unk_0xB6900B8CB0ABBD2B(uParam0))
	{
		return;
	}
	iVar0 = unk_0x6D5BB810CC209E15(iParam0);
	if (iVar0 == func_242(0, 0) || iVar0 == func_242(0, 1))
	{
		if (bParam1)
		{
			func_264(iParam0, 2, 0);
			func_265(iParam0, 1, 0);
		}
	}
	else if (iVar0 == func_242(1, 0) || iVar0 == func_242(1, 1))
	{
		if (bParam1)
		{
			func_264(iParam0, 0, iParam2);
			func_263(iParam0, iParam3, 0);
			func_265(iParam0, 1, 0);
		}
	}
	else if (iVar0 == joaat("mp_f_stripperlite"))
	{
		if (bParam1)
		{
			func_265(iParam0, 1, 0);
		}
	}
}

void func_269(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xC7499236BA7FE6D5(uParam0, 4, iParam1, iParam2))
	{
		unk_0x8C245572EDB27776(uParam0, 4, iParam1, iParam2, 0);
	}
}

void func_270(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xC7499236BA7FE6D5(uParam0, 2, iParam1, iParam2))
	{
		unk_0x8C245572EDB27776(uParam0, 2, iParam1, iParam2, 0);
	}
}

void func_271(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xC7499236BA7FE6D5(uParam0, 0, iParam1, iParam2))
	{
		unk_0x8C245572EDB27776(uParam0, 0, iParam1, iParam2, 0);
	}
}

int func_272()
{
	if (unk_0xB8A06E7E729EED0A(func_189()))
	{
		return 1;
	}
	else if (unk_0xCB5C09DEC6D45DA8(func_189()))
	{
		return 1;
	}
	return 0;
}

int func_273(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if (!unk_0x0845149A26DABBA5((*uParam0)[iVar0]))
			{
				if (!unk_0x0845149A26DABBA5((*uParam0)[iVar0]))
				{
				}
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_274()
{
	if (!unk_0xB8A06E7E729EED0A(func_189()))
	{
		unk_0x354516B1347786F1(func_189());
	}
}

void func_275(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			unk_0x7567CEA8E6B5340B((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

int func_276(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if ((*uParam0)[iVar0] == iParam1)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_277(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_277(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_278(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		return joaat("mp_f_stripperlite");
	}
	iVar0 = func_107(iParam0);
	if (iVar0 != 145)
	{
		return func_279(iVar0);
	}
	return func_242(0, 0);
}

int func_279(int iParam0)
{
	if (!func_76(iParam0))
	{
		return Global_100976.f_32519[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_280()
{
	switch (uLocal_76[0])
	{
		case 1:
			Local_302 = { 128.1002f, -1895.001f, 22.4811f };
			Local_305 = { 128.1059f, -1896.819f, 22.6792f };
			Local_308 = { 133.9411f, -1881.89f, 22.5257f };
			Local_311 = { 130.1663f, -1893.057f, 22.3748f };
			Local_314 = { 133.4958f, -1891.641f, 22.4252f };
			fLocal_326 = 330.5705f;
			fLocal_327 = 244f;
			Local_323 = { 146.293f, -1888.049f, 22.2193f };
			fLocal_328 = fLocal_327;
			break;
		
		case 0:
			Local_302 = { -161.9628f, -1636.501f, 33.0339f };
			Local_305 = { -159.9415f, -1637.307f, 33.0339f };
			Local_308 = { -178.6316f, -1629.522f, 32.1789f };
			Local_311 = { -166.1453f, -1633.102f, 32.6574f };
			Local_314 = { -166.6636f, -1633.229f, 32.6567f };
			fLocal_326 = 108.072f;
			fLocal_327 = 180.9811f;
			Local_323 = { Local_308 };
			fLocal_328 = fLocal_327;
			break;
		
		case 4:
			Local_302 = { -198.3824f, 87.8785f, 68.7436f };
			Local_305 = { -197.2292f, 86.3497f, 68.7561f };
			Local_308 = { -200.9078f, 113.537f, 68.5518f };
			Local_311 = { -200.1384f, 96.9809f, 68.5203f };
			Local_314 = { -199.5068f, 95.7042f, 68.5193f };
			fLocal_326 = 48.99f;
			fLocal_327 = 64.3f;
			Local_323 = { Local_308 };
			fLocal_328 = fLocal_327;
			break;
		
		case 5:
			Local_302 = { -849.0348f, 510.6906f, 89.8218f };
			Local_305 = { -849.0408f, 508.5767f, 89.8218f };
			Local_308 = { -846.1005f, 520.2202f, 89.6217f };
			Local_311 = { -851.8972f, 512.73f, 89.6217f };
			Local_314 = { -851.8746f, 513.6746f, 89.6217f };
			fLocal_326 = 92.365f;
			fLocal_327 = 293f;
			Local_323 = { -860.4819f, 514.2496f, 88.1473f };
			fLocal_328 = fLocal_327;
			break;
		
		case 8:
			Local_302 = { -28.2427f, -1555.892f, 29.6918f };
			Local_305 = { -24.8589f, -1556.846f, 29.6819f };
			Local_308 = { -41.8174f, -1575.609f, 28.2831f };
			Local_311 = { -25.3404f, -1556.341f, 29.6919f };
			Local_314 = { -27.7382f, -1570.572f, 29.3f };
			fLocal_326 = 181.352f;
			fLocal_327 = 47.9206f;
			Local_323 = { Local_308 };
			fLocal_328 = fLocal_327;
			break;
		
		case 9:
			Local_302 = { 3313.487f, 5175.831f, 18.619f };
			Local_305 = { 3310.816f, 5176.331f, 18.619f };
			Local_308 = { 3334.321f, 5161.122f, 17.2996f };
			Local_311 = { 3317.788f, 5171.707f, 17.4471f };
			Local_314 = { 3318.076f, 5171.805f, 17.4385f };
			fLocal_326 = 236.4579f;
			Local_323 = { 3322.927f, 5148.607f, 17.3141f };
			fLocal_328 = 310.8648f;
			break;
	}
}

int func_281()
{
	switch (uLocal_76[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (bLocal_337)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

int func_282(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xD93BACE0E8C906AB();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_286();
			}
			else
			{
				return 0;
			}
		}
		if (!func_285())
		{
			if (iParam0 == 0)
			{
				if (!unk_0xBBAE3E0C60A8AD4B())
				{
					if (!bParam2)
					{
						func_286();
					}
					else
					{
						return 0;
					}
				}
				if (func_284())
				{
					if (!bParam2)
					{
						func_286();
					}
					else
					{
						return 0;
					}
				}
				if (func_283(155))
				{
					if (!bParam2)
					{
						func_286();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x16DD8839736956AC())
			{
				if (!bParam2)
				{
					func_286();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xD93BACE0E8C906AB();
	}
	if (iParam1 > -1)
	{
		Global_1312502 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0xBBAE3E0C60A8AD4B())
		{
			if (!bParam2)
			{
				func_286();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x16DD8839736956AC())
	{
		if (!bParam2)
		{
			func_286();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_283(int iParam0)
{
	if (unk_0x88FC52D6FDFA0AFA(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_284()
{
	return Global_2433098.f_569;
}

bool func_285()
{
	return Global_1315886;
}

void func_286()
{
	unk_0xA4E0D8FD51F2A6F7();
}

void func_287()
{
	unk_0x39E848BD36AA4E48(0);
	unk_0xA50F67D636D63292();
	func_81();
	unk_0x7846F09C04C34C46();
	unk_0x9DBF08025225340D(uLocal_301, 0);
	unk_0xE6D99A6809A1F8CE(Local_308 - Vector(3f, 3f, 3f), Local_308 + Vector(3f, 3f, 3f), 1, 1);
	unk_0xEC0157120B9B77B0(Local_308 - Vector(3f, 3f, 3f), Local_308 + Vector(3f, 3f, 3f), 15f, 1);
	if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
	{
		unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), true, 0);
	}
	unk_0x2544549FDE4C3A7E(false, 0, 3000, 1, 0, 0);
	if (unk_0x95CCECA3948CFE7B(uLocal_274[0]))
	{
		if (!unk_0xB6900B8CB0ABBD2B(uLocal_274[0]))
		{
			if (!func_251(uLocal_333, 8192))
			{
				unk_0xF7F92ABBE23C8EA8(uLocal_274[0], 1193033728, 0);
			}
			unk_0xF1A02DDEC7E15D6E(uLocal_274[0], 1);
			if (!unk_0xAA78AD621F2EA1F0(iLocal_72))
			{
				unk_0x4A606A8BE6924115("BootyCall", &iLocal_72);
			}
			unk_0x6CCF5F545348D54E(2, iLocal_72, joaat("player"));
			unk_0x6CCF5F545348D54E(2, joaat("player"), iLocal_72);
			unk_0xCBD60E398042F554(uLocal_274[0], iLocal_72);
		}
		unk_0x459A6F82E024C891(&(uLocal_274[0]));
	}
	if (iLocal_332 != -1)
	{
		func_289(&iLocal_332);
	}
	if (bLocal_71)
	{
		func_133(&uLocal_70);
	}
	unk_0xDFF09A72B40AC5D9(unk_0xA34E7C2A5118D638(), 0);
	func_116(uLocal_76[0], -1);
	Global_99970 = 0;
	func_288(0);
	unk_0xA4E0D8FD51F2A6F7();
}

void func_288(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 45)
	{
		func_213(iVar0, bParam0);
		iVar0++;
	}
}

void func_289(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_35662)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_35661 = 0;
	Global_35663 = 0;
	Global_35700 = 15;
	Global_55656 = 0;
	Global_55657 = 0;
}

