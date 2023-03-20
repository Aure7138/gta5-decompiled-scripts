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
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	int iLocal_44 = 0;
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
	bool bLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	struct<3> Local_62 = { 0, 0, 0 } ;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	var uLocal_69 = 0;
	bool bLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	var uLocal_75[1] = { 0 };
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	var uLocal_80 = 16;
	var uLocal_81 = 0;
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
	var uLocal_268 = 1097859072;
	var uLocal_269 = 1500;
	var uLocal_270 = 45;
	var uLocal_271 = 1103626240;
	var uLocal_272 = 5;
	var uLocal_273[1] = { 0 };
	char* sLocal_275 = NULL;
	char* sLocal_276 = NULL;
	var uLocal_277 = 1;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281[1] = { 0 };
	var uLocal_283[4] = { 0, 0, 0, 0 };
	struct<9> Local_288 = { 0, 0, 0, 0, 0, 0, 0, 21, 6 } ;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	struct<3> Local_301 = { 0, 0, 0 } ;
	struct<3> Local_304 = { 0, 0, 0 } ;
	struct<3> Local_307 = { 0, 0, 0 } ;
	struct<3> Local_310 = { 0, 0, 0 } ;
	struct<3> Local_313 = { 0, 0, 0 } ;
	struct<3> Local_316 = { 0, 0, 0 } ;
	struct<3> Local_319 = { 0, 0, 0 } ;
	struct<3> Local_322 = { 0, 0, 0 } ;
	float fLocal_325 = 0f;
	float fLocal_326 = 0f;
	float fLocal_327 = 0f;
	float fLocal_328 = 0f;
	int iLocal_329 = 0;
	var uLocal_330 = 0;
	int iLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	int iLocal_334 = 0;
	bool bLocal_335 = 0;
	bool bLocal_336 = 0;
	int iLocal_337 = 0;
	var uLocal_338 = 0;
	int iLocal_339 = 0;
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
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	iLocal_27 = 3;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	Local_62 = { 500f, 500f, 500f };
	fLocal_328 = -1f;
	iLocal_331 = -1;
	bLocal_335 = true;
	unk_0xD25F9F5A80824C77("stripperhome");
	unk_0xAE2A9FD3EEF99954(1);
	unk_0x7438D30AEB0A7AAD(unk_0x1329891157A54C63(), 1);
	if (unk_0x8D841F1DD3FA555F(75))
	{
		func_287();
	}
	bLocal_336 = ScriptParam_0.f_5;
	if (bLocal_336)
	{
		unk_0xBA029707F4D8FFB0(32, 0, -1);
		func_282(0, -1, 0);
		unk_0xAADD6AD1A7B6D4E2(1);
		unk_0xE6E19E3BBABCBC24(0);
	}
	uLocal_75[0] = ScriptParam_0[0];
	Global_97956.f_1 = uLocal_75[0];
	bVar0 = false;
	bVar1 = true;
	iVar2 = unk_0x0C937048CF6952B5();
	if (func_281() && ScriptParam_0.f_4)
	{
		bVar1 = false;
		if (iVar2 > 14 && iVar2 < 22)
		{
			bVar0 = true;
		}
	}
	while (((!func_252(&ScriptParam_0, bVar0) && iLocal_73 != 6) && iLocal_73 != 5) && (iLocal_73 != -1 || !func_251(uLocal_332, 1024)))
	{
		func_243(0);
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x887F4488DA99FD21(func_242(0, 0));
	unk_0x887F4488DA99FD21(func_242(1, 0));
	if (!bVar1)
	{
		iLocal_73 = 2;
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (iLocal_334 > 0)
		{
			func_240();
			iLocal_334 = (iLocal_334 - unk_0xF2DB717A73826179((unk_0x8D51D24D214E2FF2() * 1000f)));
		}
		switch (iLocal_73)
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
				func_35(bLocal_335);
				break;
			
			case 5:
				func_11();
				break;
			
			case 6:
				if (!func_10(&uLocal_260))
				{
					func_7(&uLocal_260);
				}
				else if (func_1(&uLocal_260, 7.5f))
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
			return (func_5(unk_0x236D8AD7EE179F46(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_5(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		return (unk_0xBBDA792448DB5A89(unk_0x48E480685981C7D4()) / 1000f);
	}
	if (unk_0x1C6DF6AD69BE853E())
	{
		iVar0 = unk_0xD74C7D8D2E5E43D2();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x48E480685981C7D4()) / 1000f);
}

bool func_6(var uParam0)
{
	return unk_0x236D8AD7EE179F46(*uParam0, 2);
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
	uParam0->f_1 = (func_5(unk_0x236D8AD7EE179F46(*uParam0, 4)) - fParam1);
	unk_0xF3148AAF69AF9CBC(uParam0, 1);
	unk_0xC69E84EBBD7166E6(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_10(var uParam0)
{
	return unk_0x236D8AD7EE179F46(*uParam0, 1);
}

void func_11()
{
	if (!func_251(uLocal_332, 8192))
	{
		if (func_34())
		{
			func_25();
		}
		else
		{
			iLocal_73 = 6;
		}
	}
	if (func_251(uLocal_332, 16384))
	{
		if (func_12())
		{
			iLocal_73 = 6;
		}
	}
}

int func_12()
{
	if (unk_0x930F8FBB8E9537CC(uLocal_273[0]))
	{
		return 1;
	}
	if (func_251(uLocal_332, 8192))
	{
		unk_0x0B895A812F665A52(uLocal_273[0], 60, 1);
		if (unk_0x515B65C19A5CA9B1(uLocal_273[0], 96.8033f, -1287.597f, 28.2688f, 5f, 5f, 2f, 0, 1, 1) || func_24(unk_0x81873881071CD9FE(), 96.8033f, -1287.597f, 28.2688f, 1) > 100f)
		{
			if (unk_0x667A6FB4A24C8B47(96.12f, -1284.91f, 29.43f, 5f, joaat("prop_magenta_door"), 0))
			{
				unk_0xBF4F29C80C79D83C(joaat("prop_magenta_door"), 96.12f, -1284.91f, 29.43f, 1, 0f, 0);
			}
			if (unk_0x42E36F2D658EB2FF(uLocal_283[0]))
			{
				if (unk_0x0AE0AF4D15B6ED2F(uLocal_283[0]))
				{
					func_13(1, 1, 0);
					unk_0xFEBF3DDE5E4DC5C5(false, 0, 3000, 1, 0, 0);
					unk_0x35B958B469415A23(uLocal_283[0], 1);
				}
			}
			unk_0xF210D34D7F7152ED(&(uLocal_273[0]));
			return 1;
		}
	}
	return 0;
}

void func_13(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		unk_0x034205BA180B4E43(unk_0xEC537F0C0E8265EE(), true, 0);
	}
	unk_0x0C64B47F8E6AF117(1);
	func_15(0, 1, iParam2, 0);
	if (bParam1)
	{
		unk_0x3BF4F473786B0150(1);
		unk_0xF1BC58601CA4A5C7(1);
	}
	func_14(23, 0);
}

void func_14(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xF3148AAF69AF9CBC(&Global_25190, iParam0);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&Global_25190, iParam0);
	}
}

void func_15(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0xA01309A4CCECDBBE(unk_0x1329891157A54C63());
		unk_0x334B670F8C2E871D(unk_0x1329891157A54C63(), 1);
		unk_0x302581C7F63C3DAF(unk_0x1329891157A54C63(), 1);
		func_23(1);
		unk_0x314942833427CBA3();
		unk_0xDF12B8D7DEE2158B();
		if (Global_14394.f_1 > 3)
		{
			if (unk_0xE0A43912E369FFA5())
			{
				unk_0x9E95048D8C96C1EA(0);
			}
			if (!func_22())
			{
				Global_14394.f_1 = 3;
			}
			Global_15693 = 5;
		}
		func_21(1, iParam3, iParam2, 0);
		Global_55408 = 1;
		Global_67713 = 1;
		Global_69018 = 1;
	}
	else
	{
		func_23(0);
		unk_0x6246FB0D4AFA25CC();
		Global_55408 = 0;
		if (bParam1)
		{
			unk_0x5A01C8176534B756();
		}
		unk_0x334B670F8C2E871D(unk_0x1329891157A54C63(), 0);
		unk_0x302581C7F63C3DAF(unk_0x1329891157A54C63(), 0);
		func_21(0, iParam3, iParam2, 0);
		if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()) && !func_16(unk_0x1329891157A54C63()))
		{
			unk_0x210A4A0B257F8433(unk_0x81873881071CD9FE(), 0);
		}
		Global_69018 = 0;
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
		if (iParam0 == unk_0x1329891157A54C63())
		{
			return 1;
		}
	}
	if (unk_0x236D8AD7EE179F46(Global_2414506[iParam0 /*255*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_17()
{
	return unk_0x236D8AD7EE179F46(Global_2359301, 3);
}

bool func_18(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1329891157A54C63())
	{
		bVar0 = func_19(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1585045[iParam0 /*400*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xA89AE5060232966A(iParam0))
		{
			bVar0 = unk_0xCCFDB2B968281FE8(iParam0) == 8;
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
	if (Global_1315870[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312723[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_20()
{
	return Global_1312729;
}

int func_21(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x913B1C01C1BA6C6F())
	{
		if (unk_0x5FB5CC66497A76D2() != iParam0 && uParam2)
		{
			unk_0xCC69602716E0A325(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_22()
{
	if (Global_14394.f_1 == 1 || Global_14394.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_23(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xF3148AAF69AF9CBC(&Global_2264, 13);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&Global_2264, 13);
	}
}

float func_24(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x930F8FBB8E9537CC(iParam0))
	{
		Var0 = { unk_0xB6AE0DAE06D56288(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xB6AE0DAE06D56288(iParam0, 0) };
	}
	return unk_0x0D6E79537424BACE(Var0, Param1, iParam4);
}

void func_25()
{
	var uVar0;
	
	func_28();
	if (unk_0x667A6FB4A24C8B47(96.12f, -1284.91f, 29.43f, 5f, joaat("prop_magenta_door"), 0))
	{
		unk_0xBF4F29C80C79D83C(joaat("prop_magenta_door"), 96.12f, -1284.91f, 29.43f, 0, 0f, 0);
	}
	func_26(&uLocal_332, 16384);
	unk_0xA8F22633ACC22189(uLocal_273[0], 0);
	unk_0xCE566DBDCACD245E(uLocal_273[0], 104, 1);
	unk_0xEAD984C2869B8B7C(&uVar0);
	unk_0xD91194CE3D1E1D77(0, 98.2041f, -1291.252f, 28.2688f, 1f, -1, 0.25f, 1, 1193033728);
	unk_0xD91194CE3D1E1D77(0, 107.6303f, -1304.742f, 27.7688f, 1f, -1, 0.25f, 0, 1193033728);
	unk_0x31C1393E4ACFD794(0, "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -4f, 15000, 1, 0, 0, 0, 0);
	unk_0x56D9ED1541046AF6(uVar0);
	unk_0xC65002CAA1212AF9(uLocal_273[0], uVar0);
	unk_0xA3561415EB3DA3A3(&uVar0);
	func_26(&uLocal_332, 8192);
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
	if (!unk_0x895C275673BCEAB0(uLocal_273[0]) && func_33(1, 0, 1))
	{
		func_29(0, 0, 0);
		uLocal_283[0] = unk_0xA41C1C111139F838("DEFAULT_SCRIPTED_CAMERA", 90.1007f, -1281.573f, 28.6661f, 2.4422f, 0f, -113.4013f, 45f, 1, 2);
		unk_0xFEBF3DDE5E4DC5C5(true, 0, 3000, 1, 0, 0);
	}
}

void func_29(int iParam0, int iParam1, int iParam2)
{
	unk_0x034205BA180B4E43(unk_0xEC537F0C0E8265EE(), false, iParam0);
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		unk_0xCE5ED63F8CA77F8B(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), 15f);
	}
	unk_0x0C64B47F8E6AF117(iParam1);
	func_30(0);
	func_15(1, 1, iParam2, 0);
	unk_0x3BF4F473786B0150(0);
	unk_0xF1BC58601CA4A5C7(0);
	func_14(23, 1);
}

void func_30(int iParam0)
{
	if (Global_14552)
	{
		func_31(0, 0);
	}
	if (Global_14394.f_1 == 10 || Global_14394.f_1 == 9)
	{
		unk_0xF3148AAF69AF9CBC(&Global_2265, 16);
	}
	if (unk_0xE0A43912E369FFA5())
	{
		unk_0x9E95048D8C96C1EA(0);
	}
	Global_15693 = 5;
	if (iParam0 == 1)
	{
		unk_0xF3148AAF69AF9CBC(&Global_2264, 30);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&Global_2264, 30);
	}
	if (!func_22())
	{
		Global_14394.f_1 = 3;
	}
}

void func_31(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_32(0))
		{
			Global_14552 = 1;
			if (bParam1)
			{
				unk_0x2B4380FBF49E1B71(&Global_14331);
			}
			Global_14322 = { Global_14340[Global_14339 /*3*/] };
			unk_0xB30AC22133A50DEE(Global_14322);
		}
	}
	else if (Global_14552 == 1)
	{
		Global_14552 = 0;
		Global_14322 = { Global_14347[Global_14339 /*3*/] };
		if (bParam1)
		{
			unk_0xB30AC22133A50DEE(Global_14331);
		}
		else
		{
			unk_0xB30AC22133A50DEE(Global_14322);
		}
	}
}

int func_32(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14394.f_1 > 3)
		{
			if (unk_0x236D8AD7EE179F46(Global_2264, 14))
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
	if (unk_0x968BF1C2C695B61A(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14394.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_33(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x4DA8CC792B3D5CB0())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		if (!unk_0x86F7E6A693F6370F(unk_0x81873881071CD9FE()))
		{
			return 0;
		}
		iVar0 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
		if (bParam0)
		{
			if (unk_0x930F8FBB8E9537CC(iVar0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x930F8FBB8E9537CC(iVar0))
			{
				if (unk_0xB0B9E53CEFDB16AA(iVar0, -1) != unk_0x81873881071CD9FE())
				{
					return 0;
				}
			}
		}
		if (!unk_0x930F8FBB8E9537CC(iVar0))
		{
			if (unk_0xCADEFB8A5B164C68(iVar0) < 0.95f || unk_0xCADEFB8A5B164C68(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x817D7181C9C0AC5F(unk_0x1329891157A54C63()))
	{
		return 0;
	}
	if (!unk_0xD894621CB0A2B724(unk_0x1329891157A54C63()))
	{
		return 0;
	}
	return 1;
}

int func_34()
{
	if ((uLocal_75[0] == 8 || uLocal_75[0] == 9) || func_24(uLocal_273[0], 96.12f, -1284.91f, 29.43f, 1) > 10f)
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
		Var0 = { Local_307 };
	}
	else
	{
		func_60(&Var0, &uVar3, 0);
	}
	func_57(Var0);
	if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		if (unk_0xE5AB05962FA1FF3F(uLocal_273[0], 0))
		{
			iVar4 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
			if (unk_0x86CCCD2FAE9D5E65(iVar4) && !unk_0x930F8FBB8E9537CC(iVar4))
			{
				if (iLocal_337)
				{
					if (func_56(iVar4, 4f, 1, 1056964608, 0, 1, 0))
					{
						func_55();
						unk_0x98046F3D16B9CF76(uLocal_273[0], 0, 16777216);
						func_36();
					}
				}
				else if (unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), Var0, 4f, 4f, 2f, 1, 1, 2))
				{
					iLocal_337 = 1;
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
	if (!iLocal_68)
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
		unk_0x63CCF741F5F72521(131, func_41(), 0f);
		unk_0x63CCF741F5F72521(108, func_40(), 0f);
		unk_0x63CCF741F5F72521(102, func_39(), 0f);
		unk_0x63CCF741F5F72521(8, func_38(), 0f);
	}
	iLocal_65 = 0;
	iLocal_66 = 0;
	iLocal_67 = 0;
	iLocal_68 = 0;
}

int func_38()
{
	return iLocal_66;
}

int func_39()
{
	return iLocal_67;
}

int func_40()
{
	return iLocal_65;
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
	
	if (!unk_0x1F2C82EFDAD19C5D())
	{
	}
	if ((!unk_0x048404777B43DB4C() && (unk_0x90D70709D2558B5A() || !unk_0x145838334F50DC33())) && unk_0x0E42A3FF41472888())
	{
		Var0.f_2.f_1 = 4;
		Var0.f_0 = iParam0;
		if (iParam4 == -1)
		{
			if (unk_0x80622F5ED5957337())
			{
				Var69 = { func_43(unk_0x1329891157A54C63()) };
				if (unk_0x464883E45616A088(&Var69))
				{
					if (unk_0xEF956A1EC046AA4A(&uVar82, 35, &Var69))
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
			if (unk_0x1C6DF6AD69BE853E() && Global_2435406.f_3)
			{
				unk_0x1FCDB6131A5D6125(&Var0, &(Global_1698884.f_10));
			}
			else
			{
				unk_0x473BB6AF48713A44(&Var0);
			}
		}
		return 1;
	}
	if (unk_0x048404777B43DB4C())
	{
	}
	if (!unk_0x90D70709D2558B5A())
	{
	}
	if (unk_0x145838334F50DC33())
	{
	}
	if (!unk_0x0E42A3FF41472888())
	{
	}
	return 0;
}

struct<13> func_43(int iParam0)
{
	struct<13> Var0;
	
	unk_0x73231AB7B8BD1CD1(iParam0, &Var0, 13);
	return Var0;
}

int func_44()
{
	if ((unk_0x1F2C82EFDAD19C5D() && unk_0xE8A8D52287C1BC6A()) && func_45())
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
	if (unk_0x847832409C9B7582() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_46()
{
	return Global_2437061;
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
	if (Global_98931.f_8808[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_98931.f_8808[iParam0 /*12*/].f_6 == 11 || Global_98931.f_8808[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_98931.f_8808[iParam0 /*12*/].f_5 = 1;
		Global_98931.f_8808[iParam0 /*12*/].f_10 = iParam1;
		Global_98931.f_8808[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x3D83BB667D56D187(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x3D83BB667D56D187(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x3D83BB667D56D187(joaat("num_hidden_packages_3"), 50, 0);
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
	Global_98667 = 0;
	Global_98668 = 0;
	Global_98669 = 0;
	Global_98670 = 0;
	Global_98671 = 0;
	Global_98672 = 0;
	Global_98673 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_98931.f_8808.f_3853;
	Global_98931.f_8808.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_98931.f_8808[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_98931.f_8808[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_98667++;
					fVar1 = (fVar1 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_98668++;
					fVar2 = (fVar2 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_98669++;
					fVar3 = (fVar3 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_98670++;
					fVar4 = (fVar4 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_98671++;
					fVar5 = (fVar5 + (Global_98931.f_8808[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_98672++;
					fVar6 = (fVar6 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_98673++;
					fVar7 = (fVar7 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_98650 > 0)
	{
		if (Global_98667 == Global_98650)
		{
			fVar1 = 55f;
		}
	}
	if (Global_98651 > 0)
	{
		if (Global_98668 == Global_98651)
		{
			fVar2 = 10f;
		}
	}
	if (Global_98652 > 0)
	{
		if (Global_98669 == Global_98652)
		{
			fVar3 = 0f;
		}
	}
	if (Global_98653 > 0)
	{
		if (Global_98670 == Global_98653)
		{
			fVar4 = 10f;
		}
	}
	if (Global_98654 > 0)
	{
		if (((Global_98671 == Global_98654 || (Global_98654 * 10 / Global_98671) < 41) || Global_98671 > Global_98657) || Global_98671 == Global_98657)
		{
			if (!unk_0x236D8AD7EE179F46(Global_98931.f_8808.f_3856, 14))
			{
				if (Global_98671 == Global_98654)
				{
					unk_0x3D83BB667D56D187(joaat("num_rndevents_completed"), Global_98654, 0);
					unk_0xF3148AAF69AF9CBC(&(Global_98931.f_8808.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_98655 > 0)
	{
		if (Global_98672 == Global_98655)
		{
			fVar6 = 15f;
		}
	}
	if (Global_98656 > 0)
	{
		if (Global_98673 == Global_98656)
		{
			fVar7 = 5f;
		}
	}
	Global_98931.f_8808.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_98671 > Global_98657 || Global_98671 == Global_98657)
	{
		iVar9 = Global_98657;
	}
	else
	{
		iVar9 = Global_98671;
	}
	unk_0x123B783056E76C4E(joaat("num_missions_completed"), Global_98667, 1);
	unk_0x123B783056E76C4E(joaat("num_missions_available"), Global_98650, 1);
	unk_0x123B783056E76C4E(joaat("num_minigames_completed"), Global_98668, 1);
	unk_0x123B783056E76C4E(joaat("num_minigames_available"), Global_98651, 1);
	unk_0x123B783056E76C4E(joaat("num_oddjobs_completed"), Global_98669, 1);
	unk_0x123B783056E76C4E(joaat("num_oddjobs_available"), Global_98652, 1);
	unk_0x123B783056E76C4E(joaat("num_rndpeople_completed"), Global_98670, 1);
	unk_0x123B783056E76C4E(joaat("num_rndpeople_available"), Global_98653, 1);
	unk_0x123B783056E76C4E(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x123B783056E76C4E(joaat("num_rndevents_available"), Global_98657, 1);
	unk_0x123B783056E76C4E(joaat("num_misc_completed"), (Global_98673 + Global_98672), 1);
	unk_0x123B783056E76C4E(joaat("num_misc_available"), (Global_98656 + Global_98655), 1);
	Global_98674 = (Global_98667 * 100 / Global_98650);
	Global_98676 = ((Global_98669 + Global_98668) * 100 / (Global_98652 + Global_98651));
	Global_98675 = ((Global_98670 + iVar9) * 100 / (Global_98653 + Global_98657));
	Global_98677 = ((Global_98672 + Global_98673) * 100 / (Global_98655 + Global_98656));
	unk_0x7E6C0B47A4041A3A(joaat("total_progress_made"), Global_98931.f_8808.f_3853, 1);
	unk_0x123B783056E76C4E(joaat("percent_story_missions"), Global_98674, 1);
	unk_0x123B783056E76C4E(joaat("percent_ambient_missions"), Global_98675, 1);
	unk_0x123B783056E76C4E(joaat("percent_oddjobs"), Global_98676, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_98931.f_8808.f_3853))
	{
		func_52(13, unk_0xF34EE736CF047844(Global_98931.f_8808.f_3853));
	}
	if (!unk_0x14AA58B411AA05B2())
	{
		if (!Global_69020)
		{
			if (func_51() == 2 == 0 && !unk_0x1C6DF6AD69BE853E())
			{
				if (unk_0x847832409C9B7582())
				{
					Global_98665 = 0;
				}
				if (!Global_55402)
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
	if (Global_90848.f_8)
	{
		if (Global_90848.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_90848.f_10 > 1)
	{
		return 0;
	}
	Global_90848.f_10++;
	return 1;
}

bool func_50(bool bParam0)
{
	if (!bParam0 && unk_0x968BF1C2C695B61A(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x236D8AD7EE179F46(Global_69268, 0);
}

int func_51()
{
	return Global_24946;
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
	iVar0 = unk_0x0AF2546798051B0F(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x5CF8B8E5AE9ED569(iParam0, iParam1);
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_20();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xE307AE970E97417F((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xE527C242A8C1FBA9((iParam0 - 0)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xE307AE970E97417F((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xE527C242A8C1FBA9((iParam0 - 192)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xE307AE970E97417F((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xE527C242A8C1FBA9((iParam0 - 513)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xE307AE970E97417F((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xE527C242A8C1FBA9((iParam0 - 705)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x842AB1A4A6E7A6FD((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xE527C242A8C1FBA9((iParam0 - 3111)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x842AB1A4A6E7A6FD((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xE527C242A8C1FBA9((iParam0 - 2919)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x212AB7197F0FF1D7((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xE527C242A8C1FBA9((iParam0 - 4207)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x212AB7197F0FF1D7((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xE527C242A8C1FBA9((iParam0 - 4335)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6989)
	{
		uVar10 = unk_0x212AB7197F0FF1D7((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xE527C242A8C1FBA9((iParam0 - 6029)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar10, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_54()
{
	iLocal_67++;
	iLocal_68 = 1;
}

void func_55()
{
	if (unk_0x86CCCD2FAE9D5E65(uLocal_273[0]) && !unk_0x930F8FBB8E9537CC(uLocal_273[0]))
	{
		unk_0xC9E1121219C75417(uLocal_273[0], 1);
		if (unk_0xCD67A1A6022640ED(uLocal_273[0]))
		{
			unk_0x6EC15FE0ADD3E99C(uLocal_273[0]);
		}
	}
}

int func_56(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0xDE1125A413AF241C(0, 71, 1);
	unk_0xDE1125A413AF241C(0, 72, 1);
	unk_0xDE1125A413AF241C(0, 76, 1);
	unk_0xDE1125A413AF241C(0, 73, 1);
	unk_0xDE1125A413AF241C(0, 59, 1);
	unk_0xDE1125A413AF241C(0, 60, 1);
	if (bParam5)
	{
		unk_0xDE1125A413AF241C(0, 75, 1);
	}
	unk_0xDE1125A413AF241C(0, 80, 1);
	if (!bParam6)
	{
		unk_0xDE1125A413AF241C(0, 69, 1);
		unk_0xDE1125A413AF241C(0, 70, 1);
		unk_0xDE1125A413AF241C(0, 68, 1);
	}
	unk_0xDE1125A413AF241C(0, 74, 1);
	unk_0xDE1125A413AF241C(0, 86, 1);
	unk_0xDE1125A413AF241C(0, 81, 1);
	unk_0xDE1125A413AF241C(0, 82, 1);
	unk_0xDE1125A413AF241C(0, 138, 1);
	unk_0xDE1125A413AF241C(0, 136, 1);
	unk_0xDE1125A413AF241C(0, 114, 1);
	unk_0xDE1125A413AF241C(0, 107, 1);
	unk_0xDE1125A413AF241C(0, 110, 1);
	unk_0xDE1125A413AF241C(0, 89, 1);
	unk_0xDE1125A413AF241C(0, 89, 1);
	unk_0xDE1125A413AF241C(0, 87, 1);
	unk_0xDE1125A413AF241C(0, 88, 1);
	unk_0xDE1125A413AF241C(0, 113, 1);
	unk_0xDE1125A413AF241C(0, 115, 1);
	unk_0xDE1125A413AF241C(0, 116, 1);
	unk_0xDE1125A413AF241C(0, 117, 1);
	unk_0xDE1125A413AF241C(0, 118, 1);
	unk_0xDE1125A413AF241C(0, 119, 1);
	unk_0xDE1125A413AF241C(0, 131, 1);
	unk_0xDE1125A413AF241C(0, 132, 1);
	unk_0xDE1125A413AF241C(0, 123, 1);
	unk_0xDE1125A413AF241C(0, 126, 1);
	unk_0xDE1125A413AF241C(0, 129, 1);
	unk_0xDE1125A413AF241C(0, 130, 1);
	unk_0xDE1125A413AF241C(0, 133, 1);
	unk_0xDE1125A413AF241C(0, 134, 1);
	unk_0xA733C8A9B9CF0E2E();
	if ((unk_0x48E480685981C7D4() - Global_29) > 500)
	{
		unk_0xE4DF2496E641851E(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x48E480685981C7D4();
	if (!unk_0x930F8FBB8E9537CC(iParam0))
	{
		if (unk_0xB9AA84B14E04BC20(unk_0xA04824262F150982(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_57(struct<3> Param0)
{
	int iVar0;
	
	if (unk_0xFBACB273AA628CC5(uLocal_280))
	{
		unk_0x0A8175F24237A3D4(&uLocal_280);
	}
	if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		return;
	}
	iVar0 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
	if (unk_0x86CCCD2FAE9D5E65(iVar0) && !unk_0x930F8FBB8E9537CC(iVar0))
	{
		if (unk_0xE5AB05962FA1FF3F(uLocal_273[0], 0))
		{
			if (unk_0x04C377C10639B842(uLocal_273[0], unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0), 0))
			{
				if (!unk_0xFBACB273AA628CC5(uLocal_279))
				{
					uLocal_279 = func_58(Param0, 1);
				}
			}
		}
	}
}

var func_58(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0xA949BE56543040D2(Param0);
	unk_0xD6DF56BB9537BCC5(uVar0, func_59(unk_0x1C6DF6AD69BE853E(), 1f, 1f));
	unk_0x116FDB7E27590C7F(uVar0, iParam3);
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
	Local_316 = { Local_316 };
	switch (uLocal_75[0])
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
				*uParam0 = { Local_313 };
				*uParam1 = fLocal_325;
			}
			Local_316 = { *uParam0 };
			break;
		
		case 8:
			if (!bParam2)
			{
				*uParam0 = { -1615.991f, 187.4827f, 59.1337f };
				*uParam1 = 217.5474f;
			}
			else
			{
				*uParam0 = { Local_313 };
				*uParam1 = fLocal_325;
			}
			Local_316 = { *uParam0 };
			break;
		
		case 9:
			if (!bParam2)
			{
				*uParam0 = { 1538.432f, 3776.85f, 33.5178f };
				*uParam1 = 225.8821f;
			}
			else
			{
				*uParam0 = { Local_313 };
				*uParam1 = fLocal_325;
			}
			Local_316 = { *uParam0 };
			break;
	}
}

void func_61()
{
	if (unk_0x5FEB513A4402FD59(uLocal_273[0]))
	{
		if (!unk_0x86CCCD2FAE9D5E65(uLocal_273[0]))
		{
		}
		else if (unk_0x930F8FBB8E9537CC(uLocal_273[0]))
		{
		}
		func_62(0);
	}
}

void func_62(int iParam0)
{
	if ((uLocal_75[0] > -1 && uLocal_75[0] < 10) && iParam0 != 2)
	{
		func_83(uLocal_75[0], (func_84(uLocal_75[0]) / 2));
	}
	func_81();
	switch (iParam0)
	{
		case 0:
			func_79("SCLUB_HOME_D", uLocal_75[0]);
			func_83(uLocal_75[0], 0);
			func_68(uLocal_75[0], 1);
			iLocal_73 = 6;
			break;
		
		case 1:
			unk_0xD1C83BD797927DD5();
			func_63("SCLUB_HOME_A", uLocal_75[0], 0);
			iLocal_73 = 5;
			break;
		
		case 2:
			iLocal_73 = 5;
			break;
		
		case 4:
			func_79("SCLUB_HOME_D3", uLocal_75[0]);
			iLocal_73 = 6;
			break;
		
		case 3:
			if (func_24(uLocal_273[0], 92.5861f, -1282.86f, 28.2548f, 1) < 10f)
			{
				iLocal_73 = 5;
			}
			else
			{
				iLocal_73 = 6;
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
	unk_0x522099B37CAE9E12(uParam0);
	unk_0x072D7B028D6C7A05(uParam1);
	unk_0xC592EBAF1D879BDC(0, 1, 1, -1);
}

void func_65(var uParam0, var uParam1, int iParam2)
{
	unk_0x522099B37CAE9E12(uParam0);
	unk_0x072D7B028D6C7A05(uParam1);
	unk_0xC592EBAF1D879BDC(0, 0, 1, iParam2);
}

bool func_66(char* sParam0, var uParam1)
{
	unk_0xF7F787102FC9BCAC(sParam0);
	unk_0x072D7B028D6C7A05(uParam1);
	return unk_0xEF468B98099969A5(0);
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
		func_26(&(Global_98931.f_243[func_71() /*53*/].f_2[iParam0 /*5*/].f_3), 2);
	}
	else
	{
		func_69(&(Global_98931.f_243[func_71() /*53*/].f_2[iParam0 /*5*/].f_3), 2);
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
			Global_2459480 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2459480 = 1;
		}
	}
	return iVar0;
}

int func_73()
{
	func_74();
	return Global_98931.f_1750.f_539.f_3549;
}

void func_74()
{
	int iVar0;
	
	if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
	{
		if (func_78(Global_98931.f_1750.f_539.f_3549) != unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()))
		{
			iVar0 = func_77(unk_0x81873881071CD9FE());
			if (func_76(iVar0) && (!func_75(14) || Global_97883))
			{
				if (Global_98931.f_1750.f_539.f_3549 != iVar0 && func_76(Global_98931.f_1750.f_539.f_3549))
				{
					Global_98931.f_1750.f_539.f_3550 = Global_98931.f_1750.f_539.f_3549;
				}
				Global_98931.f_1750.f_539.f_3551 = iVar0;
				Global_98931.f_1750.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_98931.f_1750.f_539.f_3549 != 145)
			{
				Global_98931.f_1750.f_539.f_3551 = Global_98931.f_1750.f_539.f_3549;
			}
			return;
		}
	}
	Global_98931.f_1750.f_539.f_3549 = 145;
}

bool func_75(int iParam0)
{
	return Global_35443 == iParam0;
}

bool func_76(int iParam0)
{
	return iParam0 < 3;
}

int func_77(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		iVar1 = unk_0x14B7103DBD149FFE(iParam0);
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
		return Global_98931.f_32499[iParam0 /*29*/];
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
	unk_0x645DF34C4E038370(sParam0);
	unk_0x072D7B028D6C7A05(uParam1);
	unk_0x16885CADDEC73B2E(iParam2, 1);
}

void func_81()
{
	if (unk_0xFBACB273AA628CC5(uLocal_280))
	{
		unk_0x0A8175F24237A3D4(&uLocal_280);
	}
	if (unk_0xFBACB273AA628CC5(uLocal_279))
	{
		unk_0x0A8175F24237A3D4(&uLocal_279);
	}
	func_82();
}

void func_82()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (unk_0xFBACB273AA628CC5(uLocal_281[iVar0]))
		{
			unk_0x0A8175F24237A3D4(&(uLocal_281[iVar0]));
		}
		iVar0++;
	}
}

void func_83(int iParam0, int iParam1)
{
	Global_98931.f_243[func_71() /*53*/].f_2[iParam0 /*5*/] = iParam1;
}

int func_84(int iParam0)
{
	return Global_98931.f_243[func_71() /*53*/].f_2[iParam0 /*5*/];
}

void func_85()
{
	func_61();
	func_81();
	switch (iLocal_79)
	{
		case 0:
			if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
			{
				if (unk_0xE5AB05962FA1FF3F(uLocal_273[0], 0))
				{
					if (!func_102("SCLUB_SECLUDED"))
					{
						func_101("SCLUB_SECLUDED");
					}
					if (func_100() && unk_0xA04824262F150982(unk_0x81873881071CD9FE()) == 0f)
					{
						unk_0xB8BB626315D394F5(1);
						unk_0x295DC04FC13E025B(func_95(uLocal_273[0], 0, 0));
						iLocal_79 = 1;
					}
				}
			}
			break;
		
		case 1:
			if (func_88())
			{
				iLocal_79 = 2;
			}
			break;
		
		case 2:
			if (unk_0xFA1212DE7C455679(unk_0x81873881071CD9FE(), 242628503) != 1)
			{
				func_240();
				if (unk_0x0C937048CF6952B5() > 20 || unk_0x0C937048CF6952B5() < 4)
				{
					bLocal_335 = false;
				}
				unk_0xEA0021A5231667BF(iLocal_44);
				func_86(bLocal_335);
				iLocal_73 = 4;
			}
			break;
	}
}

void func_86(bool bParam0)
{
	switch (uLocal_75[0])
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
				func_79("SCLUB_HOME_GO", uLocal_75[0]);
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
	unk_0x645DF34C4E038370(sParam0);
	unk_0x16885CADDEC73B2E(iParam1, 1);
}

int func_88()
{
	if (unk_0x8E8B546E1A81D27F(func_95(uLocal_273[0], 0, 0)))
	{
		func_89(uLocal_273[0], 0, 1, -1);
		func_89(unk_0x81873881071CD9FE(), 0, 0, -1);
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
	
	if (unk_0x930F8FBB8E9537CC(iParam0))
	{
		return;
	}
	iVar0 = unk_0xE68E6B44DABA9C05(iParam0, 1);
	if (!unk_0x7404950238A154C2(iVar0, 0))
	{
		return;
	}
	iLocal_44 = unk_0x4D872223E3957144();
	if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1) && func_94(0, 1))
	{
		if (iLocal_44 != 4)
		{
			unk_0xEA0021A5231667BF(4);
		}
	}
	bVar1 = func_93(iVar0);
	sVar2 = func_95(iParam0, 0, 0);
	if (!unk_0x8E8B546E1A81D27F(sVar2))
	{
		unk_0x295DC04FC13E025B(sVar2);
	}
	else
	{
		unk_0xEAD984C2869B8B7C(&uVar3);
		unk_0x31C1393E4ACFD794(0, sVar2, func_90(0, bParam2, bParam1, bVar1), 8f, -8f, -1, 0, 0, 0, 0, 0);
		unk_0x31C1393E4ACFD794(0, sVar2, func_90(1, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0x31C1393E4ACFD794(0, sVar2, func_90(2, bParam2, bParam1, bVar1), 8f, -4f, iParam3, 1, 0, 0, 0, 0);
		unk_0x31C1393E4ACFD794(0, sVar2, func_90(3, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0x31C1393E4ACFD794(0, sVar2, func_90(4, bParam2, bParam1, bVar1), 4f, -2f, -1, 0, 0, 0, 0, 0);
		unk_0x56D9ED1541046AF6(uVar3);
		unk_0xC65002CAA1212AF9(iParam0, uVar3);
		unk_0xA3561415EB3DA3A3(&uVar3);
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
	if (unk_0x7404950238A154C2(iParam0, 0))
	{
		switch (unk_0xB9A3BBF5DF8DE475(iParam0))
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
		bVar0 = unk_0x7FCE6803A3D23268(0) == 4;
	}
	if (bParam1)
	{
		if (!bVar0)
		{
			bVar0 = unk_0x7FCE6803A3D23268(1) == 4;
		}
	}
	return bVar0;
}

var func_95(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0x930F8FBB8E9537CC(iParam0))
	{
		iVar0 = unk_0xE68E6B44DABA9C05(iParam0, 1);
		if (unk_0x7404950238A154C2(iVar0, 0))
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
	if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
	{
		if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
		{
			iVar2 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
		}
		Var3 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) };
		if (unk_0x0638BC4CE3F24259(Var3, &Var11, 1077936128, 0))
		{
			fVar14 = unk_0x2A488C176D52CCA5(Var3, Var11);
			if (fVar14 <= 10f)
			{
				return 0;
			}
		}
		if (unk_0x2A488C176D52CCA5(Var3, Local_307) < 20f || unk_0x2A488C176D52CCA5(Var3, Var7) < 20f)
		{
			return 0;
		}
		if (unk_0x57E9C5666B081646(Var3 - Vector(20f, 20f, 20f), Var3 + Vector(20f, 20f, 20f)))
		{
			return 0;
		}
		unk_0x9BAEA166728E6B4A(Var3, fVar6, 1, 1, &iVar0, 0, 0, -1);
		if (!iVar0 == 0)
		{
			if (!unk_0x930F8FBB8E9537CC(iVar0))
			{
				if (unk_0xA1AC67F9B7B2E9C4(iVar0, unk_0x81873881071CD9FE(), 17))
				{
					return 0;
				}
			}
		}
		else
		{
			iVar1 = unk_0xE800E479A60822F5(Var3, fVar6, 0, -1);
			if (!iVar1 == 0)
			{
				if (!iVar1 == iVar2)
				{
					if (unk_0x7404950238A154C2(iVar1, 0))
					{
						iVar0 = unk_0xB0B9E53CEFDB16AA(iVar1, -1);
						if (!iVar0 == 0)
						{
							return 0;
						}
					}
				}
			}
		}
		iVar15 = unk_0x74D4E5ACB4DAF9B8(unk_0x81873881071CD9FE());
		if (!iVar15 == 0)
		{
			return 0;
		}
	}
	return 1;
}

void func_101(char* sParam0)
{
	unk_0x522099B37CAE9E12(sParam0);
	unk_0xC592EBAF1D879BDC(0, 1, 1, -1);
}

bool func_102(char* sParam0)
{
	unk_0xF7F787102FC9BCAC(sParam0);
	return unk_0xEF468B98099969A5(0);
}

void func_103()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iLocal_74 < 12 && iLocal_74 >= 2)
	{
		if (func_198(3000))
		{
			unk_0x3B283FEBA87FFBEB(1000);
			iLocal_74 = 12;
		}
	}
	if (!bLocal_70 && iLocal_74 >= 5)
	{
		iVar0 = unk_0x88ABD651B4BEC8A3();
		if (unk_0x7404950238A154C2(iVar0, 0) && !unk_0x930F8FBB8E9537CC(iVar0))
		{
			if (unk_0x14B7103DBD149FFE(iVar0) == joaat("blimp2"))
			{
				bLocal_70 = false;
			}
			else if (unk_0x8807D8929DF94A13(unk_0x88ABD651B4BEC8A3()) && uLocal_75[0] == 5)
			{
				bLocal_70 = func_195(&uLocal_69, -865f, 516.3f, 90f, 1, 15f);
			}
			else if (func_194(unk_0x88ABD651B4BEC8A3()))
			{
				bLocal_70 = func_195(&uLocal_69, Local_322, 1, fLocal_326);
			}
			else
			{
				bLocal_70 = func_195(&uLocal_69, Local_307, 1, fLocal_326);
			}
		}
	}
	if (iLocal_74 > 0 && iLocal_74 < 13)
	{
		unk_0xD61D5795530D0627();
	}
	switch (iLocal_74)
	{
		case 0:
			unk_0xB8BB626315D394F5(1);
			unk_0xD1C83BD797927DD5();
			func_81();
			unk_0x9D2B95F4020E5347("TIME_LAPSE", 0);
			func_29(56, 1, 0);
			if (!func_251(uLocal_332, 131072))
			{
				func_26(&uLocal_332, 131072);
			}
			if (!func_251(uLocal_332, 256))
			{
				func_193();
				func_26(&uLocal_332, 256);
			}
			if (!func_251(uLocal_332, 32768))
			{
				unk_0x295DC04FC13E025B(func_192());
				func_26(&uLocal_332, 32768);
			}
			if (!func_251(uLocal_332, 256))
			{
				unk_0x295DC04FC13E025B(func_191());
				func_26(&uLocal_332, 256);
			}
			if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
			{
				iLocal_339 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
				func_190(unk_0x81873881071CD9FE(), iLocal_339);
				iLocal_74 = 1;
			}
			else
			{
				func_55();
				func_188(unk_0x81873881071CD9FE(), Local_301);
				func_188(uLocal_273[0], Local_304);
				iLocal_74 = 2;
			}
			func_186();
			break;
		
		case 1:
			if (!unk_0x930F8FBB8E9537CC(iLocal_339))
			{
				if (unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(iLocal_339, 1), Local_307) < 2f)
				{
					func_55();
					func_188(unk_0x81873881071CD9FE(), Local_301);
					func_188(uLocal_273[0], Local_304);
					unk_0x5AD73EF670D05F7D();
					iLocal_74 = 2;
				}
				else if (unk_0x48E480685981C7D4() >= 10000)
				{
					iLocal_74 = 13;
				}
			}
			break;
		
		case 2:
			if (!unk_0x0AE0AF4D15B6ED2F(uLocal_283[0]))
			{
				unk_0xDD0B0D77CB8995B1(uLocal_283[0], 1);
				unk_0xFEBF3DDE5E4DC5C5(true, 0, 3000, 1, 0, 0);
				if (!unk_0x930F8FBB8E9537CC(iLocal_339))
				{
					if (unk_0x14B7103DBD149FFE(iLocal_339) == joaat("blimp2"))
					{
						unk_0xABA9860C0161F3CD(iLocal_339, 0);
					}
				}
				func_8(&uLocal_254);
				iLocal_74 = 3;
			}
			break;
		
		case 3:
			if (func_185(&uLocal_254) > 1f)
			{
				unk_0x2CD388BEA8B3C5E8(uLocal_283[1], uLocal_283[0], 6000, 1, 1);
				func_184(&Local_288, 1, 0, 2000, 1, 1, 0, 1);
				iVar1 = unk_0x0C937048CF6952B5();
				iLocal_329 = iVar1 + 8;
				if (iLocal_329 > 23)
				{
					iLocal_329 = (iLocal_329 - 24);
				}
				Local_288.f_7 = iVar1;
				Local_288.f_8 = iLocal_329;
				func_2(&uLocal_254);
				iLocal_74 = 4;
			}
			break;
		
		case 4:
			if (!unk_0xEBA04D3308C6781F(uLocal_283[1]) && unk_0x0AE0AF4D15B6ED2F(uLocal_283[1]))
			{
				if (!func_251(uLocal_330, 512))
				{
					if (unk_0x86CCCD2FAE9D5E65(iLocal_339) && !unk_0x930F8FBB8E9537CC(iLocal_339))
					{
						unk_0xE6116B2B5D358CE9(iLocal_339, 1);
					}
					func_181(unk_0x81873881071CD9FE(), func_183());
					unk_0xC24172029826A66F(unk_0x81873881071CD9FE(), func_180());
					func_162();
					func_26(&uLocal_330, 512);
				}
				else if (!func_251(uLocal_330, 2048))
				{
					if (unk_0x930F8FBB8E9537CC(uLocal_273[0]))
					{
					}
					if (!func_161() && !unk_0x3315DD7601B4423B(uLocal_273[0]))
					{
						func_162();
						if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
						{
							unk_0x8F1C12DE2874472B(unk_0x81873881071CD9FE());
							unk_0xE66E1668957ECE7B(unk_0x81873881071CD9FE(), "SEX_CLIMAX", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
						}
						func_26(&uLocal_330, 2048);
						func_8(&uLocal_254);
						sLocal_276 = func_160();
						iLocal_74 = 5;
					}
				}
			}
			break;
		
		case 5:
			if (func_185(&uLocal_254) > 1f)
			{
				if (func_135(iLocal_329, 0, sLocal_276, "", &Local_288, (func_185(&uLocal_254) * 0.2f), 0))
				{
					if (!func_161())
					{
						if (unk_0x86CCCD2FAE9D5E65(iLocal_339))
						{
							if (unk_0x14B7103DBD149FFE(iLocal_339) != joaat("blimp2"))
							{
								unk_0x7C6BF0CD5D7454C9(Local_304, 20f, 1, 0, 0, 0);
							}
						}
						else
						{
							unk_0x7C6BF0CD5D7454C9(Local_304, 20f, 1, 0, 0, 0);
						}
						if (unk_0x86CCCD2FAE9D5E65(uLocal_273[0]))
						{
							unk_0xABA9860C0161F3CD(uLocal_273[0], 0);
						}
						unk_0x1333E4109B8E5382(unk_0x81873881071CD9FE(), 0);
						func_8(&uLocal_254);
						iLocal_74 = 6;
					}
				}
			}
			break;
		
		case 6:
			unk_0x649CF94A4282A7FD(unk_0x81873881071CD9FE(), joaat("weapon_unarmed"), 1);
			if (func_185(&uLocal_254) > 1.5f)
			{
				if (bLocal_70)
				{
					func_133(&uLocal_69);
				}
				func_8(&uLocal_254);
				iLocal_74 = 7;
			}
			break;
		
		case 7:
			if (!unk_0x0AE0AF4D15B6ED2F(uLocal_283[2]))
			{
				unk_0x5A01C8176534B756();
				unk_0x17EFBD7C07660E31(1);
				unk_0xE52010B703D6579E(1);
				unk_0x2CD388BEA8B3C5E8(uLocal_283[2], uLocal_283[1], 6000, 1, 1);
				func_8(&uLocal_254);
				iLocal_74 = 8;
			}
			break;
		
		case 8:
			if (!func_251(uLocal_332, 262144))
			{
				if (func_185(&uLocal_254) >= 1.25f)
				{
					func_132();
				}
			}
			if (func_185(&uLocal_254) > 6f)
			{
				unk_0xDD0B0D77CB8995B1(uLocal_283[3], 1);
				if (!unk_0x930F8FBB8E9537CC(iLocal_339))
				{
					if (unk_0x14B7103DBD149FFE(iLocal_339) == joaat("blimp2"))
					{
						unk_0xABA9860C0161F3CD(iLocal_339, 1);
					}
					unk_0xD768713E73165208(iLocal_339, 1, 1);
					unk_0xE61FF1947C0507EB(iLocal_339, 1000f);
					unk_0xB43C660E422A4C75(iLocal_339, 1000f);
					unk_0x4F7552F76F378DB7(iLocal_339);
				}
				func_8(&uLocal_254);
				iLocal_74 = 10;
			}
			break;
		
		case 10:
			if (func_185(&uLocal_254) > 2f)
			{
				unk_0x4D7278EDFCDA8389(0, 0, 3, 0);
				iLocal_74 = 13;
			}
			break;
		
		case 12:
			if (unk_0x29AFA2493D7C23D0() && !unk_0xC584A413BCB2AA39())
			{
				if (!func_251(uLocal_332, 262144))
				{
					unk_0x2ED8088A589F1EAF(unk_0x1329891157A54C63(), Local_313, fLocal_325, 0, 1, 1);
					func_132();
				}
				if (!unk_0x930F8FBB8E9537CC(iLocal_339))
				{
					if (unk_0x14B7103DBD149FFE(iLocal_339) == joaat("blimp2"))
					{
						unk_0xABA9860C0161F3CD(iLocal_339, 1);
					}
				}
				unk_0x649CF94A4282A7FD(unk_0x81873881071CD9FE(), joaat("weapon_unarmed"), 1);
				if (!unk_0x930F8FBB8E9537CC(iLocal_339))
				{
					unk_0xD768713E73165208(iLocal_339, 1, 1);
					unk_0xE61FF1947C0507EB(iLocal_339, 1000f);
					unk_0xB43C660E422A4C75(iLocal_339, 1000f);
					unk_0x4F7552F76F378DB7(iLocal_339);
				}
				func_8(&uLocal_254);
				iLocal_74 = 13;
			}
			break;
		
		case 13:
			if (!unk_0xC584A413BCB2AA39() && func_185(&uLocal_254) >= 1f)
			{
				func_13(1, 1, 0);
				unk_0x9765BF567DB87B5F(unk_0x81873881071CD9FE(), unk_0xACEA59ACBD45D1AD(unk_0x81873881071CD9FE()));
				unk_0xDB65698E9AF8C058(unk_0x1329891157A54C63(), 30, 1);
				if (unk_0xEC4A3A1FDAD5EF24(unk_0x81873881071CD9FE(), func_78(0)))
				{
					func_131();
				}
				unk_0xC3A1174645E71AB9(Local_307 - Vector(3f, 3f, 3f), Local_307 + Vector(3f, 3f, 3f), 15f, 1);
				if (!unk_0x930F8FBB8E9537CC(iLocal_339))
				{
					unk_0xD768713E73165208(iLocal_339, 1, 1);
					if (unk_0x14B7103DBD149FFE(iLocal_339) != joaat("blimp2"))
					{
						unk_0xB067093BBAF0A747(iLocal_339, Local_307, 1, 0, 0, 1);
						unk_0xC24172029826A66F(iLocal_339, fLocal_326);
						if (unk_0x8807D8929DF94A13(iLocal_339) && uLocal_75[0] == 5)
						{
							unk_0xB067093BBAF0A747(iLocal_339, -865f, 516.3f, 90f, 1, 0, 0, 1);
							unk_0xC24172029826A66F(iLocal_339, 15f);
						}
						else if (func_194(iLocal_339))
						{
							unk_0xB067093BBAF0A747(iLocal_339, Local_322, 1, 0, 0, 1);
							unk_0xC24172029826A66F(iLocal_339, fLocal_327);
						}
						unk_0x5CC9D6711FE01F0D(iLocal_339);
					}
				}
				if (!unk_0x29AFA2493D7C23D0())
				{
					func_184(&Local_288, 0, 0, 2000, 1, 0, 0, 1);
				}
				else
				{
					unk_0x080C1E30237C9EA7(8, 0, 0);
					func_129(unk_0xBBDA792448DB5A89(8));
					unk_0xAE2B1C30F8A0B67C(2000);
					unk_0x270066FDBAF3A458(0);
					unk_0xEAB527164AD92BF3(0, 1065353216);
					func_184(&Local_288, 0, 0, 2000, 1, 1, 0, 1);
				}
				if (unk_0x86CCCD2FAE9D5E65(uLocal_273[0]))
				{
					unk_0xF210D34D7F7152ED(&(uLocal_273[0]));
				}
				if (!func_128(uLocal_75[0], -1))
				{
					if (uLocal_75[0] == 5)
					{
						func_63("SCLUB_PHON_HELP_ALT", uLocal_75[0], 0);
					}
					else
					{
						func_63("SCLUB_PHON_HELP", uLocal_75[0], 0);
					}
					func_114(uLocal_75[0], 1, -1);
					unk_0x4EDE34FBADD967A6(4000);
				}
				func_112(uLocal_75[0]);
				iVar2 = func_111(uLocal_75[0]);
				if (iVar2 <= 2)
				{
					iVar3 = func_110(uLocal_75[0]);
					iVar4 = func_109(iVar2);
					func_104(-384575792, iVar3, iVar4, 3, func_108(), func_107(uLocal_75[0]), 60000, 10000, -1, 0, -1, 0, 1);
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
		if (unk_0x236D8AD7EE179F46(iParam4, iParam5))
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
	if (Global_98931.f_6302.f_764 < 8)
	{
		Var0.f_0 = iParam0;
		Var0.f_3 = func_106(iParam3);
		Var0.f_4 = (unk_0x48E480685981C7D4() + iParam6);
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
		unk_0xC69E84EBBD7166E6(&(Var0.f_1), 0);
		Global_98931.f_6302.f_651[Global_98931.f_6302.f_764 /*14*/] = { Var0 };
		Global_98931.f_6302.f_764++;
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
	while (iVar0 < Global_98931.f_6302.f_136)
	{
		if (unk_0x236D8AD7EE179F46(Global_98931.f_6302[iVar0 /*15*/].f_2, iParam0))
		{
			if (Global_98931.f_6302[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_98931.f_6302[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_98931.f_6302.f_764)
	{
		if (unk_0x236D8AD7EE179F46(Global_98931.f_6302.f_651[iVar2 /*14*/].f_2, iParam0))
		{
			if (Global_98931.f_6302.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_98931.f_6302.f_919[iParam0] = iVar1;
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
	switch (Global_98931.f_1750.f_539.f_3549)
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
	return Global_98931.f_243[func_71() /*53*/].f_2[iParam0 /*5*/].f_2;
}

void func_112(int iParam0)
{
	if (func_111(iParam0) < 0)
	{
		func_113(iParam0, 0);
	}
	Global_98931.f_243[func_71() /*53*/].f_2[iParam0 /*5*/].f_2++;
}

void func_113(int iParam0, int iParam1)
{
	Global_98931.f_243[func_71() /*53*/].f_2[iParam0 /*5*/].f_2 = iParam1;
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
	bVar0 = Global_98931.f_243[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4;
	if (bVar0)
	{
		if (unk_0x1C6DF6AD69BE853E())
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
	Global_98931.f_243[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4 = bParam1;
	if (bParam1)
	{
		if (!bVar0)
		{
			func_125(iParam0, 0);
			func_122(func_107(iParam0), func_127(iParam2), 1);
			iVar1 = unk_0x2E0A9E3291F398E3(1800000, 2100000);
			switch (iParam2)
			{
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
					unk_0xF3148AAF69AF9CBC(&(Global_2097152[func_121() /*9662*/].f_7252.f_670), iParam0);
					func_118(15, 0);
					break;
			}
			func_117(iVar1);
			func_116(iParam0, iVar1);
			Global_97925.f_15[iParam0] = unk_0x48E480685981C7D4();
		}
	}
	else if (bVar0)
	{
		func_115(func_107(iParam0), func_127(iParam2));
	}
}

void func_115(int iParam0, int iParam1)
{
	if (Global_98[iParam0 /*10*/].f_8 != 138)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			Global_98931.f_32499[iParam0 /*29*/].f_12[iParam1] = 0;
			Global_98931.f_32499[iParam0 /*29*/].f_24[iParam1] = 0;
		}
	}
}

void func_116(int iParam0, int iParam1)
{
	if (iParam1 > -1)
	{
		Global_97925.f_4[iParam0] = (unk_0x48E480685981C7D4() + iParam1);
	}
	else
	{
		Global_97925.f_4[iParam0] = (unk_0x48E480685981C7D4() + unk_0x2E0A9E3291F398E3(1200000, 2100000));
	}
}

void func_117(int iParam0)
{
	if (iParam0 != -1)
	{
		Global_97925.f_3 = (unk_0x48E480685981C7D4() + iParam0);
	}
	else
	{
		Global_97925.f_3 = (unk_0x48E480685981C7D4() + unk_0x2E0A9E3291F398E3(21600000, 25200000));
	}
}

void func_118(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_120(iParam0, iParam1))
	{
		iVar0 = func_119();
		Global_2436893[iVar0] = iParam0;
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
		if (Global_2436893[iVar1] == 0)
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
	if (Global_1315880)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315892) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
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
	Global_2950 = iParam0;
	if (Global_98[iParam0 /*10*/].f_8 != 138)
	{
		func_124();
		if (iParam1 == 4)
		{
			Global_98931.f_32499[iParam0 /*29*/].f_12[0] = 1;
			Global_98931.f_32499[iParam0 /*29*/].f_12[1] = 1;
			Global_98931.f_32499[iParam0 /*29*/].f_12[2] = 1;
			Global_98931.f_32499[iParam0 /*29*/].f_24[0] = 1;
			Global_98931.f_32499[iParam0 /*29*/].f_24[1] = 1;
			Global_98931.f_32499[iParam0 /*29*/].f_24[2] = 1;
		}
		else
		{
			if (Global_98931.f_32499[iParam0 /*29*/].f_12[iParam1] == 1 && Global_98931.f_32499[iParam0 /*29*/].f_24[iParam1] == 1)
			{
				bParam2 = false;
			}
			Global_98931.f_32499[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_98931.f_32499[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (bParam2)
		{
			if (!Global_69020)
			{
				if (iParam1 != 4)
				{
					if (Global_14394 != iParam1)
					{
						Global_2923[iParam1 /*4*/] = { Global_98931.f_32499[iParam0 /*29*/].f_3 };
						Global_2940[iParam1] = 1;
						Global_2945[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14394)
					{
					}
					else
					{
						Global_2874[1 /*6*/] = { Global_98931.f_32499[iParam0 /*29*/].f_3 };
						Global_2874[1 /*6*/].f_5 = iParam1;
						func_123();
					}
				}
				else
				{
					Global_2874[1 /*6*/] = { Global_98931.f_32499[iParam0 /*29*/].f_3 };
					Global_2874[1 /*6*/].f_5 = iParam1;
					func_123();
				}
			}
			else
			{
				Global_2874[1 /*6*/] = { Global_98931.f_32499[iParam0 /*29*/].f_3 };
				Global_2874[1 /*6*/].f_5 = iParam1;
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
	
	StringCopy(&cVar0, unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[Global_2950 /*29*/].f_7)), 64);
	if (Global_2969 == 0)
	{
		unk_0x02A6B267064771B1("");
		StringCopy(&cVar16, unk_0x46E7F5908F815DDC(&(Global_2874[1 /*6*/])), 64);
		sVar32 = unk_0x46E7F5908F815DDC("CELL_253");
		unk_0xDFBE4FFEF7FC22F3(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else
	{
		unk_0x02A6B267064771B1("CELL_255");
		unk_0x072D7B028D6C7A05(&(Global_2874[1 /*6*/]));
		unk_0xDFBE4FFEF7FC22F3(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0xC69E84EBBD7166E6(&Global_2264, 0);
}

void func_124()
{
	if (func_75(14))
	{
		if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
		{
			if (unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) == Global_98931.f_32499[0 /*29*/])
			{
				Global_14394 = 0;
			}
			else if (unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) == Global_98931.f_32499[1 /*29*/])
			{
				Global_14394 = 1;
			}
			else if (unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) == Global_98931.f_32499[2 /*29*/])
			{
				Global_14394 = 2;
			}
			else
			{
				Global_14394 = 0;
			}
		}
	}
	else
	{
		Global_14394 = func_73();
		if (Global_14394 == 145)
		{
			Global_14394 = 3;
		}
		if (Global_69020)
		{
			Global_14394 = 3;
		}
		if (Global_14394 > 3)
		{
			Global_14394 = 3;
		}
	}
}

void func_125(int iParam0, int iParam1)
{
	Global_98931.f_243[func_71() /*53*/].f_2[iParam0 /*5*/].f_1 = iParam1;
}

int func_126(int iParam0, int iParam1)
{
	if (Global_98931.f_32499[iParam0 /*29*/].f_12[iParam1] == 1)
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
	return Global_98931.f_243[iParam1 /*53*/].f_2[iParam0 /*5*/].f_4;
}

void func_129(float fParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_10(&(Global_98931.f_16717.f_175[iVar0 /*19*/].f_5)))
		{
			func_130(&(Global_98931.f_16717.f_175[iVar0 /*19*/].f_5), (fParam0 * 60f));
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_10(&(Global_98931.f_16717.f_362[iVar1 /*3*/])))
		{
			func_130(&(Global_98931.f_16717.f_362[iVar1 /*3*/]), (fParam0 * 60f));
		}
		iVar1++;
	}
	unk_0x870AE8ECD52E0687();
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
			Global_87604[iVar0] = Global_87604[iVar0 + 1];
		}
		else
		{
			Global_87604[iVar0] = unk_0x48E480685981C7D4();
		}
		iVar0++;
	}
}

void func_132()
{
	int iVar0;
	var uVar1;
	
	if (!unk_0x8E8B546E1A81D27F(sLocal_275))
	{
	}
	else
	{
		iVar0 = unk_0x2E0A9E3291F398E3(0, 50000);
		unk_0x27CC98B7C879C320(unk_0x81873881071CD9FE());
		unk_0xEAD984C2869B8B7C(&uVar1);
		unk_0xD91194CE3D1E1D77(0, Local_313, 1f, -1, 0.25f, 0, fLocal_325);
		if (iVar0 < 15000)
		{
			unk_0x31C1393E4ACFD794(0, sLocal_275, "fidget_rub_hands", 1.5f, -1f, -1, 8320, 0, 0, 0, 0);
		}
		else if (iVar0 >= 15000 && iVar0 < 35000)
		{
			unk_0x31C1393E4ACFD794(0, sLocal_275, "fidget_rub_chin", 1.5f, -1f, -1, 8320, 0, 0, 0, 0);
		}
		else
		{
			unk_0x31C1393E4ACFD794(0, sLocal_275, "fidget_arm_swing", 1.5f, -1f, -1, 8320, 0, 0, 0, 0);
		}
		unk_0x56D9ED1541046AF6(uVar1);
		unk_0xC65002CAA1212AF9(unk_0x81873881071CD9FE(), uVar1);
		unk_0xA3561415EB3DA3A3(&uVar1);
		func_26(&uLocal_332, 262144);
	}
}

void func_133(var uParam0)
{
	var uVar0;
	
	uVar0 = *uParam0;
	if (unk_0x86CCCD2FAE9D5E65(uVar0))
	{
		if (!func_134(iVar0))
		{
			unk_0x5CEA5F12775261F2(iVar0, 1, 0);
			unk_0xABA9860C0161F3CD(iVar0, 1);
			unk_0xA8F22633ACC22189(iVar0, 0);
		}
	}
}

int func_134(int iParam0)
{
	if (unk_0x86CCCD2FAE9D5E65(iParam0))
	{
		if (unk_0x930F8FBB8E9537CC(iParam0))
		{
			return 1;
		}
		else if (!unk_0x7404950238A154C2(iParam0, 0))
		{
			if (!unk_0x2D2289DC6C760F31(iParam0))
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
			unk_0xF42638C5F9CFB208(0.6f);
			unk_0xE52010B703D6579E(0);
			unk_0x17EFBD7C07660E31(0);
			func_145();
			uParam4->f_10 = unk_0xEDDCCC3D357A50F8();
			unk_0x35D7948F61AA3FEC(uParam4->f_10, "TIME_LAPSE_MASTER", 0, 1);
			unk_0xF2A6D4C99549CA85("TOD_SHIFT_SCENE");
			func_144();
			uParam4->f_3++;
			break;
		
		case 1:
		case 2:
			if (fParam5 >= 0.5f)
			{
				if (uParam4->f_3 == 1)
				{
					if (unk_0x8DAF7A748E41AD46(sParam2) != 0)
					{
						unk_0x396F0C76E11511A8(sParam2, 1f);
					}
					if (unk_0x8DAF7A748E41AD46(sParam3) != 0)
					{
						unk_0xED211CB5CA1BCD13();
						unk_0xD6C6A4CDACA04556(sParam3, 0);
					}
					uParam4->f_3 = 2;
				}
			}
			if (fParam5 >= 0.99f || fParam5 == -1f)
			{
				iVar4 = *uParam4;
				func_149(&iVar4, uParam4->f_11, 0, 0, 0, 0, 0);
				unk_0xF17C5F2A2EECAA41(func_143(iVar4), func_142(iVar4), func_141(iVar4));
				unk_0x98A5E5B909F1B162(uParam4->f_10);
				unk_0x2D2FB8B6D397597E("TIME_LAPSE");
				return 1;
			}
			fVar10 = fParam5;
			fVar8 = 0.1f;
			fVar9 = 0.9f;
			fVar11 = func_140(((fVar10 - fVar8) / (fVar9 - fVar8)), 0f, 1f);
			iVar3 = unk_0xF2DB717A73826179((IntToFloat(uParam4->f_11) * fVar11));
			iVar4 = *uParam4;
			func_149(&iVar4, iVar3, 0, 0, 0, 0, 0);
			unk_0xF17C5F2A2EECAA41(func_143(iVar4), func_142(iVar4), func_141(iVar4));
			if (func_139(iVar4) != unk_0x8B6B3DD84CE74978())
			{
				unk_0x7E6529D8BD2E5BE5(func_139(iVar4), func_138(iVar4), func_136(iVar4));
			}
			func_240();
			unk_0xFF37998A011E1E8E(6);
			break;
	}
	return 0;
}

int func_136(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_137(unk_0x236D8AD7EE179F46(iParam0, 31), -1, 1)) + 2011;
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
		unk_0x4474CF0FD32A90B2(Global_98931.f_12755[iVar0 /*104*/].f_16);
		iVar0++;
	}
}

int func_145()
{
	int iVar0;
	
	if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
	{
		return 0;
	}
	if (!unk_0x86F7E6A693F6370F(unk_0x81873881071CD9FE()))
	{
		return 0;
	}
	iVar0 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
	if (!unk_0x930F8FBB8E9537CC(iVar0))
	{
		return 0;
	}
	unk_0xD578599BB87169AA(iVar0, "OFF");
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
	
	func_156(&uVar0, unk_0xBF0A1447DA6AE4B5());
	func_157(&uVar0, unk_0x25B31B877207A3A9());
	func_158(&uVar0, unk_0x0C937048CF6952B5());
	func_152(&uVar0, unk_0x8B6B3DD84CE74978());
	func_153(&uVar0, unk_0x02DC618B9A1DB8D1());
	func_151(&uVar0, unk_0x57E483B654EDD986());
	return uVar0;
}

char* func_160()
{
	char* sVar0;
	
	switch (uLocal_75[0])
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
	if (Global_15693 != 0 || unk_0xE1772957381F609F())
	{
		return 1;
	}
	return 0;
}

void func_162()
{
	if (!unk_0x930F8FBB8E9537CC(uLocal_273[0]))
	{
		if (uLocal_75[0] == 8 || uLocal_75[0] == 9)
		{
			func_178(&uLocal_80, 1, 0, func_179(uLocal_75[0]), 0, 1);
			func_165("SC_SEX", 0, 0, 0);
		}
		else
		{
			func_163(uLocal_273[0], "SEX_ORAL", 10);
		}
	}
}

void func_163(int iParam0, char* sParam1, int iParam2)
{
	unk_0xE66E1668957ECE7B(iParam0, sParam1, func_164(iParam2), 1);
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
		if (func_166(&uLocal_80, cVar6, &Var0, 7, 0, 0, 0))
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
	Global_15700 = 0;
	Global_15702 = 0;
	Global_15707 = 0;
	Global_16684 = 0;
	Global_16686 = 0;
	Global_16690 = 0;
	Global_2621441 = 0;
	return func_167(sParam2, iParam3, 0);
}

int func_167(char* sParam0, int iParam1, bool bParam2)
{
	Global_15694 = 0;
	if (Global_15693 == 0 || Global_15695 == 2)
	{
		if (Global_15693 != 0)
		{
			if (iParam1 > Global_15695)
			{
				if (Global_15700 == 0)
				{
					unk_0x9E95048D8C96C1EA(0);
					Global_14394.f_1 = 3;
					Global_15693 = 0;
					Global_15694 = 1;
					Global_15746 = 0;
					Global_15689 = 0;
					Global_15690 = 0;
					Global_15704 = 0;
					Global_15703 = 0;
					Global_14393 = 0;
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
		if (unk_0xE1772957381F609F())
		{
			return 0;
		}
		if (func_172(8, -1))
		{
			return 0;
		}
		Global_15769 = { Global_15763 };
		func_171();
		Global_14982 = { Global_15147 };
		Global_15699 = Global_15700;
		Global_15706 = Global_15707;
		Global_2621442 = Global_2621441;
		Global_15708 = { Global_15724 };
		Global_15701 = Global_15702;
		Global_16683 = Global_16684;
		Global_16691 = { Global_16697 };
		Global_16685 = Global_16686;
		Global_16687 = Global_16688;
		Global_16689 = Global_16690;
		Global_15312.f_370 = Global_16682;
		Global_15312.f_368 = Global_16680;
		Global_15312.f_369 = Global_16681;
		Global_15689 = Global_15690;
		if (Global_15699)
		{
			unk_0xC69E84EBBD7166E6(&Global_2264, 20);
			unk_0xC69E84EBBD7166E6(&Global_2265, 17);
			unk_0xC69E84EBBD7166E6(&Global_2266, 0);
			if (bParam2)
			{
				func_124();
				if (Global_3069[Global_14394 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14394.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14360 == 1)
			{
				return 0;
			}
			if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
			{
				if (unk_0xF371669B2D6B4C8E(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (func_170())
				{
					return 0;
				}
				if (unk_0xE8CA5AAF4928DD46(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (unk_0x326033AAF1073AF3(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (unk_0xEAF6063E5F7E0DD4(unk_0x81873881071CD9FE(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69020)
				{
					if (unk_0x2C237D28F05F0008(unk_0x81873881071CD9FE()))
					{
						return 0;
					}
					if (unk_0x1E73DDF10071C453(unk_0x1329891157A54C63()))
					{
						return 0;
					}
					if (unk_0x2881A00480A747EC(unk_0x81873881071CD9FE()))
					{
						return 0;
					}
					if (unk_0x2C3A6C25D061092B(unk_0x1329891157A54C63()))
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
				switch (Global_14394.f_1)
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
				if (unk_0x236D8AD7EE179F46(Global_2264, 9))
				{
					return 0;
				}
			}
			func_169();
			Global_15703 = bParam2;
		}
		Global_15695 = iParam1;
		StringCopy(&Global_15312, sParam0, 24);
		Global_14559 = 0;
		func_168();
		return 1;
	}
	if (Global_15693 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15695 || iParam1 == Global_15695)
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
		StringCopy(&(Global_14561[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x9E95048D8C96C1EA(0);
	Global_15693 = 1;
}

void func_169()
{
	Global_15746 = Global_15745;
	Global_15740 = Global_15741;
	Global_15787 = { Global_15775 };
	Global_15793 = { Global_15781 };
	Global_15748 = Global_15747;
	Global_15817 = { Global_15799 };
	Global_15823 = { Global_15805 };
	Global_15829 = { Global_15811 };
	Global_15835 = { Global_15841 };
	Global_1579 = Global_1580;
	Global_1581 = Global_1582;
	Global_15704 = Global_15705;
	Global_15706 = Global_15707;
	Global_15708 = { Global_15724 };
	Global_15697 = Global_15698;
	Global_16709 = 0;
	Global_15742 = 0;
	Global_15743 = 0;
	unk_0xC69E84EBBD7166E6(&Global_2265, 16);
}

int func_170()
{
	int iVar0;
	int iVar1;
	
	if (Global_69020)
	{
		iVar0 = 0;
		unk_0x5F446E70DA9B8122(unk_0x81873881071CD9FE(), &iVar1, 1);
		if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x52946741890858CC() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		if (unk_0x99E8A1E54746EF15(unk_0x81873881071CD9FE(), 78, 1))
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
		Global_14982[iVar0 /*10*/] = 0;
		StringCopy(&(Global_14982[iVar0 /*10*/].f_1), "", 24);
		Global_14982[iVar0 /*10*/].f_7 = 0;
		Global_14982[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_14982.f_161 = -99;
	Global_14982.f_162 = { 0f, 0f, 0f };
}

bool func_172(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1334766.f_203[iParam1];
			}
			break;
	}
	return unk_0x236D8AD7EE179F46(Global_1334766.f_949, iParam0);
}

void func_173()
{
	unk_0xE1BF98267C70D822();
	Global_16704 = 0;
	if ((unk_0xE0A43912E369FFA5() || Global_14394.f_1 == 9) || Global_14393 == 1)
	{
		unk_0x9E95048D8C96C1EA(0);
		Global_15693 = 6;
		Global_14394.f_1 = 3;
		return;
	}
	if (unk_0xE1772957381F609F())
	{
		unk_0x9E95048D8C96C1EA(1);
		Global_15693 = 6;
		return;
	}
}

void func_174(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15147 = { *uParam0 };
	Global_1580 = iParam1;
	StringCopy(&Global_15763, sParam2, 24);
	Global_16682 = iParam5;
	if (iParam3 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16681 = 1;
		Global_16679 = 0;
	}
	else
	{
		Global_16681 = 0;
		Global_16679 = 1;
	}
}

struct<6> func_175(char[24] cParam0)
{
	int iVar0;
	
	StringConCat(&cParam0, "_", 24);
	iVar0 = uLocal_75[0];
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
	if ((unk_0xDBD19E93A4D01117() || unk_0xE1772957381F609F()) || Global_15693 != 0)
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
	if (!Global_69020)
	{
		if (!unk_0x5FEB513A4402FD59(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xE814EBF9E6A3FB47(iParam2, 0);
			}
			else
			{
				unk_0xE814EBF9E6A3FB47(iParam2, 1);
			}
		}
		if (!unk_0x5FEB513A4402FD59(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xA7ED59066FB82067(iParam2, 0);
			}
			else
			{
				unk_0xA7ED59066FB82067(iParam2, 1);
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
	switch (uLocal_75[0])
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
	if (unk_0x84426D0C9AE7A434(Param1, &uVar0, 0))
	{
		Param1.f_2 = uVar0;
	}
	if (func_182(iParam0))
	{
		unk_0xB067093BBAF0A747(iParam0, Param1, 1, 0, 0, 1);
	}
	return Param1;
}

bool func_182(int iParam0)
{
	if (!unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		return 0;
	}
	return !unk_0x930F8FBB8E9537CC(iParam0);
}

Vector3 func_183()
{
	switch (uLocal_75[0])
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
		unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), unk_0xF26CA0663D2E037E(unk_0x1329891157A54C63()), 64);
	}
	if (!unk_0x521385D8214D27C4())
	{
		unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), !bParam1, 0);
	}
	if (bParam7)
	{
		if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
		{
			unk_0x78693D09089780B5(unk_0x81873881071CD9FE(), 1);
		}
	}
	if (!bParam1 && iParam6)
	{
		unk_0x4D7278EDFCDA8389(0, 0, 3, 0);
	}
	else
	{
		unk_0xFEBF3DDE5E4DC5C5(bParam1, iParam2, iParam3, 1, 0, 0);
	}
	if (bParam1)
	{
		unk_0xB8BB626315D394F5(1);
	}
	else
	{
		if (unk_0x42E36F2D658EB2FF(uParam0->f_4))
		{
			if (unk_0x6B6362BE9BFD1ACA(uParam0->f_4))
			{
				unk_0xDD0B0D77CB8995B1(uParam0->f_4, 0);
			}
			unk_0x35B958B469415A23(uParam0->f_4, 1);
		}
		if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
		{
			unk_0xABA9860C0161F3CD(unk_0x81873881071CD9FE(), 1);
		}
		iVar0 = unk_0x2ADE2CEED2637E95();
		if (unk_0x86CCCD2FAE9D5E65(iVar0))
		{
			unk_0xABA9860C0161F3CD(iVar0, 1);
		}
		unk_0x2D2FB8B6D397597E("TIME_LAPSE");
		if (unk_0x12F24A1A22BF90A7("TOD_SHIFT_SCENE"))
		{
			unk_0x98A5E5B909F1B162(uParam0->f_10);
			unk_0x2D2FB8B6D397597E("TIME_LAPSE");
			unk_0x0C22E352114F699C("TOD_SHIFT_SCENE");
		}
	}
	func_15(bParam1, 1, 0, 0);
	func_144();
	if (!bParam1 && iParam5)
	{
		if (uParam0->f_5)
		{
			unk_0xF17C5F2A2EECAA41(uParam0->f_7, 0, 0);
		}
		else
		{
			unk_0xF17C5F2A2EECAA41(uParam0->f_8, 0, 0);
		}
	}
	if (!bParam1)
	{
		if (unk_0x29AFA2493D7C23D0())
		{
			unk_0xAE2B1C30F8A0B67C(250);
		}
	}
	if (!bParam1)
	{
		if (Global_98931.f_18731.f_4801 != -15)
		{
			Global_98931.f_18731.f_4801 = func_159();
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
			return (func_5(unk_0x236D8AD7EE179F46(*uParam0, 4)) - uParam0->f_1);
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
		if (!unk_0x42E36F2D658EB2FF(uLocal_283[iVar0]))
		{
			uLocal_283[iVar0] = unk_0x6112CFE839591737(26379945, Var1[iVar0 /*3*/], Var14[iVar0 /*3*/], uVar27[iVar0], 0, 2);
			unk_0x4BC806FF702341FC(uLocal_283[iVar0], "HAND_SHAKE", 0.3f);
		}
		iVar0++;
	}
	Local_288.f_4 = unk_0xAAC4D4F273757469("DEFAULT_SPLINE_CAMERA", 0);
	unk_0x0AE74125895277D3(Local_288.f_4, Var1[0 /*3*/], Var14[0 /*3*/], 6000, 3, 2);
	unk_0x0AE74125895277D3(Local_288.f_4, Var1[1 /*3*/], Var14[1 /*3*/], 6000, 3, 2);
	unk_0xBF1C17EB7F681E53(Local_288.f_4, uVar27[0]);
}

void func_187(var uParam0, var uParam1, var uParam2)
{
	switch (uLocal_75[0])
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
	
	if (!unk_0x5FEB513A4402FD59(iParam0))
	{
		unk_0x1333E4109B8E5382(iParam0, 1);
		if (unk_0xFA1212DE7C455679(iParam0, 242628503) != 1)
		{
			unk_0xA3561415EB3DA3A3(&uLocal_338);
			unk_0xEAD984C2869B8B7C(&uLocal_338);
			if (unk_0xE5AB05962FA1FF3F(iParam0, 0))
			{
				unk_0x98046F3D16B9CF76(0, 0, 16777216);
			}
			if (iParam0 == unk_0x81873881071CD9FE())
			{
				fVar0 = unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(iParam0, 1), Local_301);
				fVar1 = unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(iParam0, 1), Local_304);
				if (fVar1 < fVar0)
				{
					unk_0xF88735A9354A45F3(0, uLocal_273[0], 0);
				}
				else if (!unk_0xB318FDA0D1ABDB20(func_189()))
				{
					unk_0xDA3EE2B44E12D00C(0, func_189(), 0, 552, -1);
				}
				else
				{
					unk_0xD91194CE3D1E1D77(0, Local_301, 1f, -1, 0.25f, 64, 1193033728);
				}
			}
			if (iParam0 != unk_0x81873881071CD9FE())
			{
				if (!unk_0xB318FDA0D1ABDB20(func_189()))
				{
					unk_0xDA3EE2B44E12D00C(0, func_189(), 0, 546, -1);
				}
				else
				{
					unk_0xD91194CE3D1E1D77(0, Param1, 1f, -1, 0.25f, 1, 1193033728);
				}
				if (func_24(iParam0, Param1, 1) > 5f)
				{
					unk_0xF88735A9354A45F3(0, unk_0x81873881071CD9FE(), 0);
					unk_0x31C1393E4ACFD794(0, "gestures@f@standing@casual", "gesture_come_here_soft", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x52A7A8711E08087B(0, unk_0x2E0A9E3291F398E3(3000, 6000));
					unk_0xF88735A9354A45F3(0, unk_0x81873881071CD9FE(), 0);
					unk_0x31C1393E4ACFD794(0, "gestures@f@standing@casual", "gesture_come_here_soft", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x52A7A8711E08087B(0, unk_0x2E0A9E3291F398E3(3000, 6000));
					unk_0xF88735A9354A45F3(0, unk_0x81873881071CD9FE(), 0);
					unk_0x31C1393E4ACFD794(0, "gestures@f@standing@casual", "gesture_come_here_soft", 8f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x31C1393E4ACFD794(0, "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -4f, -1, 0, 0, 0, 0, 0);
				}
			}
			unk_0x56D9ED1541046AF6(uLocal_338);
			unk_0xC65002CAA1212AF9(iParam0, uLocal_338);
		}
	}
}

char* func_189()
{
	char* sVar0;
	
	if (uLocal_75[0] == 1)
	{
		sVar0 = "BC_NIKKI_H_F";
	}
	return sVar0;
}

void func_190(int iParam0, int iParam1)
{
	if (!unk_0x5FEB513A4402FD59(iParam0) && !unk_0x930F8FBB8E9537CC(iParam1))
	{
		unk_0xB5583B79BBC50AC9(iParam0, iParam1, Local_307, fLocal_326, 3, 1092616192, 0);
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
	sLocal_275 = "move_p_m_one_idles@generic";
	unk_0x295DC04FC13E025B(sLocal_275);
}

int func_194(int iParam0)
{
	if (unk_0xCC6B00B8460CDA0E(iParam0, joaat("blimp")))
	{
		return 1;
	}
	else if (unk_0xCC6B00B8460CDA0E(iParam0, joaat("cargobob")))
	{
		return 1;
	}
	else if (unk_0xCC6B00B8460CDA0E(iParam0, joaat("cargobob2")))
	{
		return 1;
	}
	else if (unk_0xCC6B00B8460CDA0E(iParam0, joaat("cargobob3")))
	{
		return 1;
	}
	else if (unk_0xCC6B00B8460CDA0E(iParam0, joaat("buzzard")))
	{
		return 1;
	}
	else if (unk_0xCC6B00B8460CDA0E(iParam0, joaat("buzzard2")))
	{
		return 1;
	}
	else if (unk_0xCC6B00B8460CDA0E(iParam0, joaat("maverick")))
	{
		return 1;
	}
	else if (unk_0xCC6B00B8460CDA0E(iParam0, joaat("polmav")))
	{
		return 1;
	}
	else if (unk_0xCC6B00B8460CDA0E(iParam0, joaat("annihilator")))
	{
		return 1;
	}
	else if (unk_0xCC6B00B8460CDA0E(iParam0, joaat("frogger")))
	{
		return 1;
	}
	else if (unk_0xCC6B00B8460CDA0E(iParam0, joaat("frogger2")))
	{
		return 1;
	}
	return 0;
}

int func_195(var uParam0, struct<3> Param1, bool bParam4, float fParam5)
{
	if (func_197(uParam0))
	{
		unk_0xA7C8FC8A54F8B9BD(*uParam0);
		if (!func_196(Param1))
		{
			unk_0xB067093BBAF0A747(*uParam0, Param1, 1, 0, 0, 1);
			if (bParam4)
			{
				unk_0xC24172029826A66F(*uParam0, fParam5);
			}
			unk_0x5CC9D6711FE01F0D(*uParam0);
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
	
	iVar0 = unk_0x2ADE2CEED2637E95();
	if (unk_0x86CCCD2FAE9D5E65(iVar0))
	{
		if (!func_134(iVar0))
		{
			if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()) && unk_0x8D28631AAAEFC957(iVar0, unk_0x81873881071CD9FE(), Local_62, 0, 1, 0))
			{
				unk_0xA7C8FC8A54F8B9BD(iVar0);
				unk_0x5CEA5F12775261F2(iVar0, 0, 0);
				unk_0xABA9860C0161F3CD(iVar0, 0);
				unk_0xA8F22633ACC22189(iVar0, 1);
				unk_0xD768713E73165208(iVar0, 1, 1);
				*uParam0 = iVar0;
				return 1;
			}
		}
	}
	return 0;
}

int func_198(int iParam0)
{
	if (unk_0xECDEA377354CBDA4())
	{
		if ((unk_0x48E480685981C7D4() - Global_28) > iParam0)
		{
			Global_27 = unk_0x48E480685981C7D4();
		}
		Global_28 = unk_0x48E480685981C7D4();
		if ((unk_0x48E480685981C7D4() - Global_27) > iParam0)
		{
			if (func_199())
			{
				Global_27 = unk_0x48E480685981C7D4();
				return 1;
			}
		}
	}
	return 0;
}

int func_199()
{
	if (unk_0xDB10DED5ABC4AA20())
	{
		return 0;
	}
	if (unk_0x093DEAE9A023FAA0(0, 18) || unk_0x093DEAE9A023FAA0(2, 18))
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
	if (unk_0x930F8FBB8E9537CC(uLocal_273[0]))
	{
		return;
	}
	unk_0x3DD1ED742E99F292(Local_307 + Vector(0f, 1f, 1f) * Vector(10f, 10f, 10f), Local_307 + Vector(0f, -1f, -1f) * Vector(10f, 10f, 10f), 0, 1);
	fVar4 = unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), unk_0xB6AE0DAE06D56288(uLocal_273[0], 1));
	if (iLocal_77 != 9)
	{
		if (((fVar4 >= (200f / 2f) && func_177()) && !func_251(uLocal_332, 2)) || func_238(uLocal_273[0], 0))
		{
			if (unk_0xFBACB273AA628CC5(uLocal_280))
			{
				unk_0x0A8175F24237A3D4(&uLocal_280);
			}
			if (unk_0xFBACB273AA628CC5(uLocal_279))
			{
				unk_0x0A8175F24237A3D4(&uLocal_279);
			}
			func_235(0);
			func_79("SCLUB_HOME_R", uLocal_75[0]);
			iLocal_77 = 9;
		}
	}
	if (unk_0x9C85ECF581158409(unk_0x1329891157A54C63(), 0))
	{
		if (iLocal_77 != 8)
		{
			if (unk_0xFBACB273AA628CC5(uLocal_280))
			{
				unk_0x0A8175F24237A3D4(&uLocal_280);
			}
			if (unk_0xFBACB273AA628CC5(uLocal_279))
			{
				unk_0x0A8175F24237A3D4(&uLocal_279);
			}
			iLocal_77 = 8;
		}
	}
	if (func_224(uLocal_273[0], &uLocal_266, &uLocal_263))
	{
		func_62(4);
	}
	if (iLocal_77 <= 1)
	{
		func_243(1);
	}
	switch (iLocal_77)
	{
		case 0:
			iLocal_78 = 0;
			if (func_177())
			{
				if (!func_251(uLocal_332, 1))
				{
					unk_0xA8F22633ACC22189(uLocal_273[0], 1);
					func_79("SCLUB_HOME_MEET", uLocal_75[0]);
					func_235(0);
					func_26(&uLocal_332, 1);
				}
				iLocal_77 = 1;
			}
			break;
		
		case 1:
			iLocal_78 = 1;
			Var0 = { func_67(uLocal_75[0]) };
			if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
			{
				iLocal_339 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
				uLocal_333 = unk_0x4DC6EF945236C0F7(iLocal_339);
			}
			if (unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), unk_0xB6AE0DAE06D56288(uLocal_273[0], 1), 3f, 3f, 3f, 0, 1, 0) || (unk_0x7404950238A154C2(iLocal_339, 0) && func_223(iLocal_339, uLocal_273[0], 1) <= 10f))
			{
				unk_0xA8F22633ACC22189(uLocal_273[0], 0);
				if (unk_0x86CCCD2FAE9D5E65(iLocal_339) && (unk_0x59D35AC211D17FAB(iLocal_339) < 1 || (!bParam0 && !unk_0x61A26017817C6AED(unk_0x14B7103DBD149FFE(iLocal_339)))))
				{
					if (!func_66("SCLUB_SMALL_CAR", &Var0))
					{
						func_63("SCLUB_SMALL_CAR", uLocal_75[0], 0);
						func_163(uLocal_273[0], "NEED_A_VEHICLE", 10);
					}
				}
				else
				{
					unk_0xB8BB626315D394F5(1);
					unk_0x27CC98B7C879C320(uLocal_273[0]);
					func_221();
					if (!func_251(uLocal_332, 2))
					{
						func_26(&uLocal_332, 2);
					}
					func_220();
					func_81();
					func_213(39, 1);
					func_213(40, 1);
					func_213(41, 1);
					func_213(42, 1);
					func_213(43, 1);
					func_213(44, 1);
					iLocal_77 = 2;
				}
			}
			else if (func_66("SCLUB_SMALL_CAR", &Var0))
			{
				unk_0xB8BB626315D394F5(1);
			}
			break;
		
		case 2:
			iLocal_78 = 2;
			if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
			{
				if (unk_0xE5AB05962FA1FF3F(uLocal_273[0], 0))
				{
					iLocal_77 = 3;
				}
			}
			else
			{
				func_163(uLocal_273[0], "NEED_A_VEHICLE", 10);
				iLocal_77 = 3;
			}
			break;
		
		case 3:
			iLocal_78 = 3;
			func_210();
			if (!func_161())
			{
				if (func_177())
				{
					unk_0xEB1F3AEB071C6A9E(Local_307 - Vector(3f, 3f, 3f), Local_307 + Vector(3f, 3f, 3f), 0, 1);
					unk_0x3DD1ED742E99F292(Local_307 - Vector(3f, 3f, 3f), Local_307 + Vector(3f, 3f, 3f), 0, 1);
					unk_0xA450601E968044DB(Local_307, 10f, 0, 0, 0, 0, 0);
					unk_0x984F8E3A66FFFEE5(Local_307, 10f, 0);
					uLocal_300 = unk_0x13705C66F125D98D(Local_307 - Vector(35f, 35f, 35f), Local_307 + Vector(35f, 35f, 35f), 0, 1, 1, 1);
					func_8(&uLocal_245);
					if (bParam0)
					{
						func_86(1);
						func_209();
					}
					else
					{
						iLocal_73 = 3;
					}
				}
			}
			break;
		
		case 4:
			iLocal_78 = 4;
			func_206(fVar4, Local_310);
			func_201();
			if ((func_4(&uLocal_257) > 45f || unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), Local_319) > (100f * 100f)) && func_24(unk_0x81873881071CD9FE(), Local_310, 1) > 100f)
			{
				if (uLocal_75[0] == 8)
				{
					func_165("SC_WALK", 0, 0, 0);
				}
				else
				{
					func_163(uLocal_273[0], "GENERIC_FUCK_YOU", 10);
				}
				func_62(3);
			}
			else if (func_238(uLocal_273[0], 1))
			{
				if (unk_0xFBACB273AA628CC5(uLocal_280))
				{
					unk_0x0A8175F24237A3D4(&uLocal_280);
				}
				if (unk_0xFBACB273AA628CC5(uLocal_279))
				{
					unk_0x0A8175F24237A3D4(&uLocal_279);
				}
				func_235(0);
				func_79("SCLUB_HOME_R", uLocal_75[0]);
				iLocal_77 = 9;
			}
			else if (unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), Local_307, 3f, 3f, 2f, 1, 1, 2) || unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), Local_304, 5f, 5f, 2f, 1, 1, 1))
			{
				if (func_33(1, 0, 1))
				{
					iLocal_73 = 1;
				}
			}
			else if (!unk_0x25CC8E51B72F474F(unk_0x81873881071CD9FE()))
			{
				func_209();
			}
			break;
		
		case 5:
			iLocal_78 = 5;
			func_206(fVar4, Local_307);
			func_201();
			func_221();
			if (unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), Local_307, 1f, 1f, 2f, 1, 1, 2))
			{
				iLocal_77 = 6;
			}
			else
			{
				if (unk_0x25CC8E51B72F474F(unk_0x81873881071CD9FE()))
				{
					func_209();
				}
				else
				{
					func_57(Local_307);
				}
				if (func_102("SCLUB_HOME_WALK"))
				{
					unk_0xB8BB626315D394F5(1);
				}
			}
			break;
		
		case 6:
			if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
			{
				if (unk_0x86CCCD2FAE9D5E65(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0)))
				{
					if (func_56(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0), 3f, 2, 0.5f, 0, 1, 0))
					{
						func_55();
						func_188(uLocal_273[0], Local_304);
						if (uLocal_75[0] == 9 || uLocal_75[0] == 8)
						{
							func_165("SC_GO_DOOR", 0, 0, 0);
						}
						else
						{
							func_165("SC_FOLLOWD", 0, 0, 1);
						}
						iLocal_77 = 7;
					}
				}
			}
			else if (unk_0x25CC8E51B72F474F(unk_0x81873881071CD9FE()))
			{
				unk_0x1E2B48EE3EC55DCF(uLocal_273[0]);
				func_209();
				unk_0xB8BB626315D394F5(1);
			}
			break;
		
		case 7:
			iLocal_78 = 7;
			if ((!func_161() && !unk_0xDBD19E93A4D01117()) && !func_251(uLocal_332, 2048))
			{
				Var0 = { func_67(uLocal_75[0]) };
				func_80("SCLUB_FOLLOW_H", &Var0, 7500, 1);
				func_81();
				func_235(0);
				func_26(&uLocal_332, 2048);
			}
			if ((unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), Local_310, 5f, 5f, 2f, 0, 1, 1) || unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), Local_304, 5f, 5f, 2f, 0, 1, 1)) && unk_0x25CC8E51B72F474F(unk_0x81873881071CD9FE()))
			{
				if (func_33(1, 0, 1))
				{
					iLocal_73 = 1;
				}
			}
			break;
		
		case 8:
			if ((!func_251(uLocal_330, 4096) && !func_161()) && !unk_0x3315DD7601B4423B(uLocal_273[0]))
			{
				if (iLocal_78 > 1 || unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), unk_0xB6AE0DAE06D56288(uLocal_273[0], 1)) < (3f * 3f))
				{
					func_163(uLocal_273[0], "GENERIC_FRIGHTENED_MED", 10);
					func_26(&uLocal_330, 4096);
				}
			}
			if (!unk_0x9C85ECF581158409(unk_0x1329891157A54C63(), 0))
			{
				iLocal_77 = iLocal_78;
			}
			break;
		
		case 9:
			if (fVar4 > 200f)
			{
				func_62(1);
			}
			else if (fVar4 <= (200f / 2f) && !func_238(uLocal_273[0], 1))
			{
				unk_0xD1C83BD797927DD5();
				iLocal_77 = iLocal_78;
				if (unk_0x25CC8E51B72F474F(unk_0x81873881071CD9FE()))
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
	
	if (!func_251(uLocal_332, 16))
	{
		if (func_202())
		{
			func_26(&uLocal_332, 16);
		}
		else
		{
			return;
		}
	}
	sVar0 = func_95(uLocal_273[0], 0, 0);
	if (!func_251(uLocal_332, 8))
	{
		if (!func_251(uLocal_332, 4))
		{
			if (!func_251(uLocal_330, 256))
			{
				if (uLocal_75[0] == 8 || uLocal_75[0] == 9)
				{
					func_165("SC_BJ", 0, 0, 0);
				}
				func_26(&uLocal_330, 256);
			}
			else
			{
				unk_0x295DC04FC13E025B(sVar0);
				func_26(&uLocal_332, 4);
			}
		}
		else if (unk_0x8E8B546E1A81D27F(sVar0))
		{
			func_89(uLocal_273[0], 1, 1, -1);
			unk_0x6CB332CB31E9FA96(uLocal_273[0], 1);
			func_7(&uLocal_254);
			func_26(&uLocal_332, 8);
		}
	}
	else if (func_251(uLocal_332, 4))
	{
		iVar1 = 0;
		bVar2 = unk_0x0BAE7BE122182FA8(uLocal_273[0], sVar0, func_90(4, 1, 1, func_93(iLocal_339)), 3);
		bVar3 = unk_0xADBE95599A01932F(unk_0x81873881071CD9FE());
		bVar4 = unk_0xFA1212DE7C455679(uLocal_273[0], 242628503) == 7;
		bVar5 = unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0);
		bVar6 = false;
		if (bVar5)
		{
			if (unk_0x86CCCD2FAE9D5E65(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0)) && !unk_0x930F8FBB8E9537CC(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0)))
			{
				bVar6 = (unk_0x03CF5B18BF9EC613(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0)) && unk_0xA04824262F150982(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0)) > 5f);
			}
		}
		if ((((!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0) || func_4(&uLocal_254) > 35f) || unk_0x2A488C176D52CCA5(Local_307, unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1)) < 75f) || bVar3) || bVar6)
		{
			if (!bVar4 && !bVar2)
			{
				unk_0x31C1393E4ACFD794(uLocal_273[0], sVar0, func_90(4, 1, 1, func_93(iLocal_339)), 8f, -8f, -1, 0, 0, 0, 0, 0);
			}
			if (bVar3)
			{
				iLocal_334 = 2000;
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
					unk_0x9765BF567DB87B5F(unk_0x81873881071CD9FE(), (unk_0x4DC6EF945236C0F7(unk_0x81873881071CD9FE()) - unk_0x11E019C8F43ACC8A((IntToFloat(unk_0xACEA59ACBD45D1AD(unk_0x81873881071CD9FE())) * 0.1f))));
					func_163(unk_0x81873881071CD9FE(), "GENERIC_CURSE_HIGH", 10);
				}
				else
				{
					func_163(unk_0x81873881071CD9FE(), "SEX_CLIMAX", 10);
				}
				func_26(&uLocal_330, 128);
			}
			unk_0xD8323B49BAE93D80(sVar0);
			func_69(&uLocal_332, 4);
		}
		if (!func_251(uLocal_330, 64))
		{
			if (func_4(&uLocal_254) > 10f)
			{
				func_163(unk_0x81873881071CD9FE(), "SEX_GENERIC", 10);
				func_163(uLocal_273[0], "SEX_ORAL", 10);
				func_26(&uLocal_330, 64);
			}
		}
		unk_0xDD6EEBB523B92159();
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
	if (((unk_0x2A488C176D52CCA5(Local_307, unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1)) > (75f * 2f) && unk_0x2A488C176D52CCA5(Var0, unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1)) > (75f / 2f)) && func_111(uLocal_75[0]) > 1) && func_203())
	{
		return 1;
	}
	return 0;
}

int func_203()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		return 0;
	}
	iVar0 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
	if (unk_0x7404950238A154C2(iVar0, 0))
	{
		iVar1 = unk_0x14B7103DBD149FFE(iVar0);
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
	
	if (unk_0x7404950238A154C2(iParam0, 0))
	{
		if (unk_0xBE23E5C609DF6E79(iParam0) > 0)
		{
			iVar0 = 0;
			while (iVar0 < 49)
			{
				iVar1 = iVar0;
				if (((((iVar1 != 17 && iVar1 != 18) && iVar1 != 19) && iVar1 != 20) && iVar1 != 21) && iVar1 != 22)
				{
					if (unk_0x64D946BA23568D30(iParam0, iVar1) != -1)
					{
						StringCopy(&cVar3, unk_0xFAEBBFA35E2022F2(iParam0, iVar1, unk_0x64D946BA23568D30(iParam0, iVar1)), 16);
						iVar2 = unk_0x8DAF7A748E41AD46(&cVar3);
						if (iVar2 != 0)
						{
							if (iVar2 == unk_0x8DAF7A748E41AD46("SABRE_CAG"))
							{
								return 0;
							}
						}
					}
				}
				iVar0++;
			}
		}
		switch (unk_0xB9A3BBF5DF8DE475(iParam0))
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
				return 1;
				break;
		}
		if (unk_0xB9A3BBF5DF8DE475(iParam0) == 931866387 && unk_0x14B7103DBD149FFE(iParam0) == joaat("slamvan"))
		{
			return 1;
		}
	}
	return 0;
}

int func_205(int iParam0, bool bParam1)
{
	if ((((unk_0x9F59BCFFFEAAD4B1(iParam0) || unk_0x1699D7B95446F15C(iParam0)) || unk_0xE083914AB72DD7CE(iParam0)) || unk_0xE4CD4B212196D2C5(iParam0)) || unk_0xC5ABD699DDC9D5A0(iParam0))
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
	
	if (!func_251(uLocal_330, 262144))
	{
		if (func_208(uLocal_273[0]))
		{
			if (uLocal_75[0] == 8)
			{
				func_165("SC_STEALC", 0, 0, 0);
			}
			else
			{
				func_163(uLocal_273[0], "GENERIC_SHOCKED_MED", 10);
			}
			func_8(&uLocal_248);
			func_26(&uLocal_330, 262144);
		}
	}
	else if (func_4(&uLocal_248) > 10f)
	{
		func_69(&uLocal_330, 262144);
		func_8(&uLocal_248);
	}
	if ((fParam0 > 5f || !func_177()) || func_251(uLocal_332, 4))
	{
		return;
	}
	if (!func_251(uLocal_330, 1) && !func_251(uLocal_330, 128))
	{
		if (unk_0x2A488C176D52CCA5(Param1, unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1)) < 75f)
		{
			if (uLocal_75[0] == 8 || uLocal_75[0] == 9)
			{
				if (func_165("SC_NEAR", 0, 0, 0))
				{
					func_26(&uLocal_330, 1);
				}
			}
			else
			{
				func_26(&uLocal_330, 1);
			}
			unk_0xA450601E968044DB(Local_307, 5f, 0, 0, 0, 0, 0);
		}
	}
	if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		return;
	}
	iVar0 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
	if (!unk_0x7404950238A154C2(iVar0, 0))
	{
		if (!func_251(uLocal_330, 16))
		{
			func_163(uLocal_273[0], "NEED_A_VEHICLE", 10);
			func_26(&uLocal_330, 16);
			func_8(&uLocal_245);
		}
		if (!func_251(uLocal_330, 4))
		{
			func_69(&uLocal_330, 4);
		}
		if (!func_251(uLocal_330, 8))
		{
			func_69(&uLocal_330, 8);
		}
	}
	else
	{
		fVar1 = unk_0xA04824262F150982(iVar0);
		fVar2 = unk_0x5855978686FD0737(iVar0);
		if (fVar1 < (fVar2 * 0.9f) || fVar1 > (fVar2 * 0.1f))
		{
			func_8(&uLocal_251);
		}
		if (!func_251(uLocal_330, 4))
		{
			if (func_4(&uLocal_245) > 15f && func_4(&uLocal_251) > 5f)
			{
				func_163(uLocal_273[0], "DRIVEN_FAST", 10);
				func_26(&uLocal_330, 4);
				func_8(&uLocal_245);
			}
		}
		else if (func_4(&uLocal_245) < 5f)
		{
			func_69(&uLocal_330, 4);
			func_8(&uLocal_245);
		}
		if (!func_251(uLocal_330, 8))
		{
			if (func_4(&uLocal_245) > 15f && func_4(&uLocal_251) > 5f)
			{
				func_163(uLocal_273[0], "DRIVEN_SLOW", 10);
				func_26(&uLocal_330, 4);
				func_8(&uLocal_245);
			}
		}
		else if (func_4(&uLocal_245) < 5f)
		{
			func_69(&uLocal_330, 8);
			func_8(&uLocal_245);
		}
		if (!func_251(uLocal_330, 131072))
		{
			if (func_207(uLocal_273[0], &uLocal_333))
			{
				if (func_4(&uLocal_248) > 5f)
				{
					func_163(uLocal_273[0], "CRASH_GENERIC_DRIVEN", 10);
					func_26(&uLocal_330, 131072);
					func_8(&uLocal_245);
				}
			}
		}
		else if (func_4(&uLocal_248) > 5f)
		{
			func_69(&uLocal_330, 131072);
			func_8(&uLocal_248);
		}
		if (!func_251(uLocal_330, 65536))
		{
			if (func_4(&uLocal_245) > 30f || (func_4(&uLocal_245) > 10f && !func_251(uLocal_330, 32)))
			{
				func_163(uLocal_273[0], "BOOTY_FLIRT", 10);
				func_26(&uLocal_330, 32);
				func_26(&uLocal_330, 524288);
				func_8(&uLocal_245);
			}
			else if (func_251(uLocal_330, 524288))
			{
				if (!unk_0x3315DD7601B4423B(uLocal_273[0]) && func_4(&uLocal_245) > 4f)
				{
					func_163(unk_0x81873881071CD9FE(), "BOOTY_FLIRT_RESP", 10);
					func_69(&uLocal_330, 524288);
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
	
	iVar0 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
	if (unk_0x7404950238A154C2(iVar0, 0))
	{
		if (unk_0x58A69336FE7307D8(uParam0, iVar0))
		{
			if (unk_0x03CF5B18BF9EC613(iVar0))
			{
				iVar1 = unk_0x4DC6EF945236C0F7(iVar0);
				iVar2 = (*uParam1 - iVar1);
				*uParam1 = iVar1;
				unk_0xD24EA1F9FB501BB5(iVar0);
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
	if (!unk_0x930F8FBB8E9537CC(iParam0))
	{
		if (unk_0x038B89F2761F15A3(108, unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), 10f) && unk_0x246F0F22FE99F17E(iParam0, unk_0x81873881071CD9FE()))
		{
			return 1;
		}
	}
	return 0;
}

void func_209()
{
	func_82();
	func_8(&uLocal_245);
	if (unk_0x25CC8E51B72F474F(unk_0x81873881071CD9FE()))
	{
		if (unk_0xFBACB273AA628CC5(uLocal_279))
		{
			unk_0x0A8175F24237A3D4(&uLocal_279);
		}
		if (!unk_0xFBACB273AA628CC5(uLocal_280))
		{
			uLocal_280 = func_58(Local_310, 0);
		}
		func_8(&uLocal_257);
		Local_319 = { unk_0xB6AE0DAE06D56288(uLocal_273[0], 1) };
		iLocal_77 = 4;
	}
	else
	{
		func_8(&uLocal_248);
		func_57(Local_307);
		iLocal_77 = 5;
	}
}

void func_210()
{
	if (!func_251(uLocal_330, 1024))
	{
		if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()) && unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
		{
			if (func_211(uLocal_75[0]))
			{
				if (!func_161())
				{
					func_163(uLocal_273[0], "NICE_CAR", 10);
					func_26(&uLocal_330, 1024);
				}
			}
		}
	}
}

int func_211(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
	if (unk_0x7404950238A154C2(iVar0, 0))
	{
		iVar1 = unk_0x14B7103DBD149FFE(iVar0);
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
		unk_0xC69E84EBBD7166E6(&(Global_90861.f_1279[iParam0]), iParam1);
	}
	else if (unk_0x1C6DF6AD69BE853E())
	{
		if (func_51() == 0)
		{
			uVar0 = func_216(func_217(iParam0), -1, 0);
			unk_0xC69E84EBBD7166E6(&uVar0, iParam1);
			func_215(func_217(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&(Global_98931.f_668[iParam0]), iParam1);
	}
}

void func_215(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2459767[iParam0 /*5*/][func_72(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x123B783056E76C4E(iVar0, uParam1, iParam3);
	}
}

int func_216(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2459767[iParam0 /*5*/][func_72(iParam1)];
	if (unk_0x85C45034BA638694(uVar0, &uVar1, -1))
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
			return 3422;
			break;
		
		default:
			break;
	}
	return 3438;
}

void func_218(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xF3148AAF69AF9CBC(&(Global_90861.f_1279[iParam0]), iParam1);
	}
	else if (unk_0x1C6DF6AD69BE853E())
	{
		if (func_51() == 0)
		{
			uVar0 = func_216(func_217(iParam0), -1, 0);
			unk_0xF3148AAF69AF9CBC(&uVar0, iParam1);
			func_215(func_217(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0xF3148AAF69AF9CBC(&(Global_98931.f_668[iParam0]), iParam1);
	}
}

int func_219(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0x236D8AD7EE179F46(Global_90861.f_1279[iParam0], iParam1);
	}
	else if (unk_0x1C6DF6AD69BE853E())
	{
		if (func_51() == 0)
		{
			return unk_0x236D8AD7EE179F46(func_216(func_217(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x236D8AD7EE179F46(Global_98931.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_220()
{
	if (uLocal_75[0] == 8)
	{
		func_165("SC_GREET", 0, 0, 0);
	}
	else
	{
		func_163(uLocal_273[0], "GENERIC_HI_FLIRTY", 10);
	}
}

void func_221()
{
	if (!unk_0xCD67A1A6022640ED(uLocal_273[0]) && unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), unk_0xB6AE0DAE06D56288(uLocal_273[0], 1)) < 10f)
	{
		unk_0xABED360AB1F46D3D(uLocal_273[0], func_222());
		unk_0x2DA3CE5ACB2F30AC(uLocal_273[0], 0);
	}
}

int func_222()
{
	return unk_0xC80D3C64CC2CE6A3(unk_0xEC537F0C0E8265EE());
}

float func_223(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x930F8FBB8E9537CC(iParam0))
	{
		Var0 = { unk_0xB6AE0DAE06D56288(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xB6AE0DAE06D56288(iParam0, 0) };
	}
	if (!unk_0x930F8FBB8E9537CC(iParam1))
	{
		Var3 = { unk_0xB6AE0DAE06D56288(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xB6AE0DAE06D56288(iParam1, 0) };
	}
	return unk_0x0D6E79537424BACE(Var0, Var3, iParam2);
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
		if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
		{
			iVar1 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
		}
		if (func_227(iParam0, iVar1, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_225(&uVar0);
			if (unk_0x86CCCD2FAE9D5E65(iParam0))
			{
				if (!unk_0x930F8FBB8E9537CC(iParam0))
				{
					if (!unk_0xCC6E3B6BB69501F1(iLocal_71))
					{
						unk_0x4865E80F793024CE("BootyCall", &iLocal_71);
					}
					unk_0xF8E77F310A5B6EAB(2, iLocal_71, joaat("player"));
					unk_0xF8E77F310A5B6EAB(2, joaat("player"), iLocal_71);
					unk_0x506A601663C5417C(iParam0, iLocal_71);
					unk_0x754376E2234CBB4A(iParam0, unk_0x81873881071CD9FE(), 500f, -1, 0, 0);
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
	Global_97925 = 0;
	Global_97925.f_1 = -1;
	Global_97925.f_2 = -1;
	if (bParam0)
	{
		func_117(-1);
	}
}

int func_227(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0x81873881071CD9FE();
	if (!unk_0x930F8FBB8E9537CC(iVar0) && !unk_0x930F8FBB8E9537CC(iParam0))
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
			if (unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) > 0)
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
	else if (unk_0x86CCCD2FAE9D5E65(iParam0))
	{
		if (iParam7 && unk_0xBBEF8270CE27C0EE(iParam0, iVar0, 1))
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
		if (!bLocal_58)
		{
			iLocal_59 = unk_0x4DC6EF945236C0F7(iParam0);
			bLocal_58 = true;
		}
		iLocal_60 = unk_0x4DC6EF945236C0F7(iParam0);
		iLocal_61 = (iLocal_59 - iLocal_60);
		iVar0 = unk_0x2ADE2CEED2637E95();
		if (!unk_0x930F8FBB8E9537CC(iVar0))
		{
			if (unk_0xBBEF8270CE27C0EE(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_61) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_58)
		{
			if (unk_0xBBEF8270CE27C0EE(iParam0, unk_0x81873881071CD9FE(), 1))
			{
				if (IntToFloat(iLocal_61) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xBBEF8270CE27C0EE(iParam0, unk_0x81873881071CD9FE(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		iVar1 = unk_0x2ADE2CEED2637E95();
		if (!unk_0x930F8FBB8E9537CC(iVar1))
		{
			if (unk_0xBBEF8270CE27C0EE(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0x930F8FBB8E9537CC(iParam0))
		{
			if (unk_0x70847137E3B37A59(iParam0))
			{
				if (unk_0x5470663D3086F340(iParam0) == unk_0x81873881071CD9FE())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0xF371669B2D6B4C8E(unk_0x81873881071CD9FE()))
		{
			if (unk_0x515B65C19A5CA9B1(iParam0, unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), 10f, 10f, 10f, 0, 1, 0))
			{
				if (unk_0x3369E84B95F0CE56(unk_0x1329891157A54C63()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0xA696433F321F3321(unk_0x81873881071CD9FE()))
	{
		if (unk_0x5460056E19D91D7F(iParam0))
		{
			return 1;
		}
	}
	if (func_230(unk_0x81873881071CD9FE(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0xD81BC0FD4D47CC04(iParam0) && func_229(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (unk_0xE5AB05962FA1FF3F(iParam0, 0))
		{
			if (unk_0xB454AC819016CE5E(unk_0x81873881071CD9FE(), unk_0xE68E6B44DABA9C05(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (unk_0xB454AC819016CE5E(unk_0x81873881071CD9FE(), iParam0))
		{
			return 1;
		}
		if (!unk_0x930F8FBB8E9537CC(iParam1))
		{
			if (unk_0xBBEF8270CE27C0EE(iParam1, unk_0x81873881071CD9FE(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_229(int iParam0, int iParam1)
{
	return func_223(unk_0xE495E987CB2BE7EF(unk_0xEC537F0C0E8265EE()), iParam0, iParam1);
}

int func_230(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x5F446E70DA9B8122(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0xADBE95599A01932F(iParam0))
		{
			if (unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(iParam0, 1), unk_0xB6AE0DAE06D56288(iParam1, 1)) < 2.5f)
			{
				if (unk_0x598CCC94D95857D9(iParam0, iParam1, 180f))
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
	if (unk_0x2B738BBCCA41F260(iParam0, 4))
	{
		if (unk_0xADBE95599A01932F(iParam0) && !unk_0xC0DEC39E5B9D1886(iParam0))
		{
			if (unk_0x515B65C19A5CA9B1(iParam1, unk_0xB6AE0DAE06D56288(iParam0, 1), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), 0, 1, 0))
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
	if (!unk_0x930F8FBB8E9537CC(iParam1))
	{
		Var0 = { unk_0xB6AE0DAE06D56288(iParam1, 1) };
	}
	if (unk_0x544121698BDAB87E(Var0, 4f, 1))
	{
		return 1;
	}
	if (unk_0x03322A5547317A3D(Var0, unk_0xBBDA792448DB5A89(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (unk_0x2B738BBCCA41F260(iParam0, 2))
	{
		if (unk_0xADBE95599A01932F(iParam0))
		{
			if (unk_0x515B65C19A5CA9B1(iParam1, unk_0xB6AE0DAE06D56288(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0))
			{
				if (unk_0x598CCC94D95857D9(unk_0x8F1CCE5AF629C4D3(iParam1), iParam0, 120f) && unk_0xA1AC67F9B7B2E9C4(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0xE5AB05962FA1FF3F(unk_0x8F1CCE5AF629C4D3(iParam1), 0))
			{
				iVar3 = unk_0xE68E6B44DABA9C05(unk_0x8F1CCE5AF629C4D3(iParam1), 0);
			}
			if (unk_0x2881A00480A747EC(iParam0) || func_233(iVar3))
			{
				if (unk_0x515B65C19A5CA9B1(iParam1, unk_0xB6AE0DAE06D56288(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0))
				{
					if (unk_0x598CCC94D95857D9(unk_0x8F1CCE5AF629C4D3(iParam1), iParam0, 120f) && unk_0xA1AC67F9B7B2E9C4(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0x6DF2A27FBC647AEC((Var0.f_0 - IntToFloat(uParam2->f_6)), (Var0.f_1 - IntToFloat(uParam2->f_6)), (Var0.f_2 - IntToFloat(uParam2->f_6)), (Var0.f_0 + IntToFloat(uParam2->f_6)), (Var0.f_1 + IntToFloat(uParam2->f_6)), (Var0.f_2 + IntToFloat(uParam2->f_6)), 0))
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
	
	if (unk_0x86CCCD2FAE9D5E65(iParam0))
	{
		if (unk_0x7404950238A154C2(iParam0, 0))
		{
			if (unk_0xB0B9E53CEFDB16AA(iParam0, -1) != 0)
			{
				if (unk_0x5F446E70DA9B8122(unk_0x81873881071CD9FE(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_223(unk_0x81873881071CD9FE(), iParam0, 1) < 40f)
						{
							if (unk_0x257893CA44B56646(unk_0x1329891157A54C63(), &iVar1))
							{
								if ((unk_0xCF8AA94BAD0F766A(iVar1) && unk_0x522C7043B2B961F9(iVar1) == iParam0) || (unk_0xCF0C46D719D5302C(iVar1) && unk_0x8F1CCE5AF629C4D3(iVar1) == unk_0xB0B9E53CEFDB16AA(iParam0, -1)))
								{
									if ((unk_0x25CC8E51B72F474F(unk_0x81873881071CD9FE()) && unk_0xCAD9951C953F5B2D(0, 24)) || (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0) && unk_0xCAD9951C953F5B2D(0, 69)))
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
	if (!unk_0x930F8FBB8E9537CC(iParam0))
	{
		if (unk_0x2B738BBCCA41F260(unk_0x81873881071CD9FE(), 6))
		{
			if (unk_0xE8039CE2181EACCB(unk_0x1329891157A54C63(), iParam0) || unk_0x2449A722A5E85855(unk_0x1329891157A54C63(), iParam0))
			{
				if (unk_0x598CCC94D95857D9(iParam0, unk_0x81873881071CD9FE(), 90f))
				{
					if (func_229(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0x48E480685981C7D4();
						}
						else if ((unk_0x48E480685981C7D4() - uParam1->f_1) > uParam1->f_3)
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
	
	if (unk_0xFBACB273AA628CC5(uLocal_281[iParam0]))
	{
		unk_0x0A8175F24237A3D4(&(uLocal_281[iParam0]));
	}
	uLocal_281[iParam0] = func_236(uLocal_273[iParam0], 0, 145);
	Var0 = { func_67(uLocal_75[iParam0]) };
	unk_0x2AB7C42FF2AF476D(uLocal_281[iParam0], &Var0);
}

var func_236(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_237(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xFBACB273AA628CC5(uVar0)) && unk_0x7281387C8D4EC316(&(Global_98931.f_32499[iParam2 /*29*/].f_3)))
	{
		unk_0x2AB7C42FF2AF476D(uVar0, &(Global_98931.f_32499[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_237(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xE122DDAE9E94767B(iParam0);
	if (unk_0xCF8AA94BAD0F766A(iParam0))
	{
		unk_0xD6DF56BB9537BCC5(uVar0, func_59(unk_0x1C6DF6AD69BE853E(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xD5CD0E7173F858FF(uVar0, bParam1);
		}
		else
		{
			unk_0x1B86E7A8766EA6B4(uVar0, 2);
		}
	}
	else if (unk_0xCF0C46D719D5302C(iParam0))
	{
		unk_0xD6DF56BB9537BCC5(uVar0, func_59(unk_0x1C6DF6AD69BE853E(), 0.7f, 0.7f));
		unk_0xD5CD0E7173F858FF(uVar0, bParam1);
	}
	else if (unk_0x9F76B19299294A0E(iParam0))
	{
		unk_0xD6DF56BB9537BCC5(uVar0, func_59(unk_0x1C6DF6AD69BE853E(), 0.7f, 0.7f));
	}
	return uVar0;
}

int func_238(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	var uVar6;
	float fVar7;
	
	Var0 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) };
	Var3 = { unk_0xB6AE0DAE06D56288(iParam0, 1) };
	if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		uVar6 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
		if (unk_0x57FE35CC8642857E(iParam0) == func_222())
		{
			if (unk_0x7404950238A154C2(uVar6, 0))
			{
				if (!unk_0x04C377C10639B842(iParam0, iVar6, 0) && unk_0x2A488C176D52CCA5(Var0, Var3) > 10f)
				{
					return 1;
				}
			}
		}
	}
	if (iParam1 && func_251(uLocal_332, 2))
	{
		fVar7 = unk_0xB9AA84B14E04BC20((Var0.f_2 - Var3.f_2));
		if (fVar7 > 8f)
		{
			return 1;
		}
	}
	return 0;
}

void func_239()
{
	if (!unk_0x930F8FBB8E9537CC(uLocal_273[0]))
	{
		if (!unk_0x2CB3B76C90F08111())
		{
			func_181(uLocal_273[0], unk_0x957F1AE07A974C5E(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), unk_0x3306AAAFE3B25098(unk_0x81873881071CD9FE()), 0f, 2f, 0f));
			iLocal_73 = 1;
			iLocal_74 = 0;
		}
	}
}

void func_240()
{
	unk_0xF4753D4FA13FFE6E();
	func_241();
}

void func_241()
{
	Global_17099.f_134 = 1;
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
	
	if (!func_155(iLocal_72))
	{
		iLocal_72 = func_159();
		func_149(&iLocal_72, 0, 0, unk_0x2E0A9E3291F398E3(5, 7), 0, 0, 0);
	}
	else if (bParam0)
	{
		if (!func_251(uLocal_332, 512))
		{
			if (func_250(iLocal_72) && unk_0x895C275673BCEAB0(uLocal_273[0]))
			{
				if (uLocal_75[0] == 8 || uLocal_75[0] == 9)
				{
					StringCopy(&Var0, "SC_CANCEL_", 64);
					StringIntConCat(&Var0, uLocal_75[0], 64);
					func_178(&uLocal_80, 1, 0, func_179(uLocal_75[0]), 0, 1);
					func_249(&uLocal_80, func_107(uLocal_75[0]), "SHAUD", &Var0, 7, 0, 0, 1);
				}
				else
				{
					func_247();
				}
				func_246(uLocal_273[0]);
				func_26(&uLocal_332, 512);
			}
		}
		else if (func_245())
		{
			func_69(&uLocal_332, 512);
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
	if (Global_15693 == 0)
	{
		return 1;
	}
	return 0;
}

int func_245()
{
	if (Global_15742 == 1 || Global_16709 == 1)
	{
		return 1;
	}
	return 0;
}

void func_246(int iParam0)
{
	if (!unk_0x5FEB513A4402FD59(uParam0))
	{
		unk_0x1333E4109B8E5382(iParam0, 1);
		if (unk_0xFA1212DE7C455679(iParam0, 242628503) != 1)
		{
			unk_0xA3561415EB3DA3A3(&uLocal_338);
			unk_0xEAD984C2869B8B7C(&uLocal_338);
			unk_0xEFCD4942377423D3(0, 8000);
			unk_0xD91194CE3D1E1D77(0, Local_304, 1.5f, -1, 0.25f, 0, 1193033728);
			unk_0x56D9ED1541046AF6(uLocal_338);
			unk_0xC65002CAA1212AF9(iParam0, uLocal_338);
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
	iVar0 = func_110(uLocal_75[0]);
	func_104(-384575792, iVar0, 6, 3, func_108(), func_107(uLocal_75[0]), 0, 10000, -1, 0, -1, 0, 1);
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
	Global_15741 = 1;
	Global_15700 = 1;
	Global_15707 = 0;
	Global_15702 = 0;
	Global_16684 = 0;
	Global_16686 = 0;
	Global_16690 = 0;
	Global_15698 = 0;
	Global_15745 = 0;
	Global_15747 = 0;
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
	if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
	{
		if (fLocal_328 == -1f)
		{
			fLocal_328 = unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), Var0);
		}
		if (iLocal_331 == -1)
		{
			iLocal_331 = uParam0->f_3;
		}
		if (!func_251(uLocal_332, 32))
		{
			func_276(&uLocal_277, func_278((*uParam0)[0], 0));
			func_275(&uLocal_277);
			func_26(&uLocal_332, 32);
			unk_0x295DC04FC13E025B("mini@strip_club@idles@stripper");
			unk_0x295DC04FC13E025B("gestures@f@standing@casual");
			func_274();
			return 0;
		}
		else if ((!func_273(&uLocal_277) || !unk_0x8E8B546E1A81D27F("mini@strip_club@idles@stripper")) || !func_272())
		{
			return 0;
		}
		if (bLocal_336)
		{
			if (!unk_0x9C32248B2352E183(1))
			{
				return 0;
			}
		}
		if (!func_251(uLocal_332, 1024))
		{
			uLocal_75[0] = (*uParam0)[0];
			uLocal_273[0] = unk_0x206897C6DBC12488(26, func_278((*uParam0)[0], 0), Var0, uVar3, 1, 1);
			func_266(uLocal_273[0], uLocal_75[0], 0);
			unk_0x1D15D99A10A15334(uLocal_273[iVar4], 1);
			unk_0x6CB332CB31E9FA96(uLocal_273[0], 1);
			unk_0xCF01B06C83451A7F(uLocal_273[0], 1);
			func_262(uLocal_273[0]);
			unk_0x31C1393E4ACFD794(uLocal_273[0], "mini@strip_club@idles@stripper", "stripper_idle_01", 8f, -1.5f, -1, 1, 0, 0, 0, 0);
			unk_0xAF625598EDA64AD3(uLocal_273[iVar4], unk_0x81873881071CD9FE(), -1, 2048, 4);
			unk_0x2DA3CE5ACB2F30AC(uLocal_273[0], 0);
			unk_0xEF1A2C5B3EE83E3E(uLocal_273[0], func_179((*uParam0)[0]));
			func_178(&uLocal_80, 1, uLocal_273[0], func_179((*uParam0)[0]), 0, 1);
			func_26(&uLocal_332, 1024);
		}
		if (unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), Var0) > 100f)
		{
			if (func_177())
			{
				if (!func_251(uLocal_332, 1))
				{
					func_261(bParam1);
					func_235(0);
					func_26(&uLocal_332, 1);
				}
			}
			if (!func_251(uLocal_332, 64) && !func_251(uLocal_332, 512))
			{
				if (func_260(func_107((*uParam0)[0])))
				{
					StringCopy(&cVar5, "BC_PLYRC_", 64);
					if (func_73() == 2)
					{
						func_178(&uLocal_80, 0, unk_0x81873881071CD9FE(), "TREVOR", 0, 1);
						StringConCat(&cVar5, "T", 64);
					}
					else if (func_73() == 0)
					{
						func_178(&uLocal_80, 0, unk_0x81873881071CD9FE(), "MICHAEL", 0, 1);
						StringConCat(&cVar5, "M", 64);
					}
					else if (func_73() == 1)
					{
						func_178(&uLocal_80, 0, unk_0x81873881071CD9FE(), "FRANKLIN", 0, 1);
						StringConCat(&cVar5, "F", 64);
					}
					func_178(&uLocal_80, 3, 0, func_179((*uParam0)[0]), 0, 1);
					Var21 = { func_259() };
					func_254(&uLocal_80, func_107((*uParam0)[0]), "BCAUD", &cVar5, &cVar5, &Var21, &Var21, 12, 1, 0, 0, 0);
					func_26(&uLocal_332, 64);
				}
				if (func_155(iLocal_72))
				{
					if (func_250(iLocal_72))
					{
						if ((*uParam0)[0] == 8 || (*uParam0)[0] == 9)
						{
							StringCopy(&Var37, "SC_CANCEL_", 64);
							StringIntConCat(&Var37, (*uParam0)[0], 64);
							func_178(&uLocal_80, 1, 0, func_179((*uParam0)[0]), 0, 1);
							func_249(&uLocal_80, func_107((*uParam0)[0]), "SHAUD", &Var37, 12, 0, 0, 1);
						}
						else
						{
							func_247();
						}
						func_26(&uLocal_332, 512);
					}
				}
			}
			else if (func_245())
			{
				func_69(&uLocal_332, 64);
				func_69(&uLocal_332, 512);
			}
			else if ((!func_161() && func_244()) && !func_245())
			{
				func_253((*uParam0)[0]);
				func_226(1);
				func_62(2);
			}
			if (!func_251(uLocal_332, 128))
			{
				if (!func_32(0))
				{
					func_63("SCLUB_HOME_C_H", uLocal_75[0], 0);
					func_26(&uLocal_332, 128);
				}
			}
			if (unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), Var0) > (fLocal_328 + (200f * 3f)))
			{
				func_62(1);
			}
			else if (unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), Var0) < fLocal_328)
			{
				fLocal_328 = unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), Var0);
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
		func_178(&uLocal_80, 0, unk_0x81873881071CD9FE(), "TREVOR", 0, 1);
	}
	else if (func_73() == 0)
	{
		func_178(&uLocal_80, 0, unk_0x81873881071CD9FE(), "MICHAEL", 0, 1);
	}
	else if (func_73() == 1)
	{
		func_178(&uLocal_80, 0, unk_0x81873881071CD9FE(), "FRANKLIN", 0, 1);
	}
	return 1;
}

void func_253(int iParam0)
{
	if (Global_98931.f_243[func_71() /*53*/].f_2[iParam0 /*5*/].f_1 < 0)
	{
		Global_98931.f_243[func_71() /*53*/].f_2[iParam0 /*5*/].f_1 = 0;
	}
	Global_98931.f_243[func_71() /*53*/].f_2[iParam0 /*5*/].f_1++;
}

int func_254(var uParam0, int iParam1, char* sParam2, char[4] cParam3, char[4] cParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	var uVar11;
	
	func_174(uParam0, iParam1, sParam2, iParam9, iParam10, 0);
	func_258();
	if (iParam8 == 1)
	{
		Global_15705 = 1;
	}
	else
	{
		Global_15705 = 0;
	}
	uVar0 = 10;
	uVar11 = 10;
	func_256(2, &uVar0, &uVar11, cParam3, cParam4, uParam5, uParam6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_255(&uVar0, &uVar11, iParam7, bParam11);
}

int func_255(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	Global_15694 = 0;
	if (Global_15693 == 0 || Global_15695 == 2)
	{
		if (Global_15693 != 0)
		{
			if (iParam2 > Global_15695)
			{
				if (bParam3 == 0)
				{
					unk_0x9E95048D8C96C1EA(0);
					Global_14394.f_1 = 3;
					Global_15693 = 0;
					Global_15694 = 1;
					Global_15746 = 0;
					Global_15689 = 0;
					Global_15690 = 0;
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
		if (unk_0xE1772957381F609F())
		{
			return 0;
		}
		if (func_172(8, -1))
		{
			return 0;
		}
		Global_15769 = { Global_15763 };
		func_171();
		Global_14982 = { Global_15147 };
		Global_15699 = Global_15700;
		Global_15706 = Global_15707;
		Global_2621442 = Global_2621441;
		Global_15708 = { Global_15724 };
		Global_15701 = Global_15702;
		Global_16683 = Global_16684;
		Global_16691 = { Global_16697 };
		Global_16689 = Global_16690;
		Global_16685 = Global_16686;
		Global_16687 = Global_16688;
		Global_15312.f_368 = Global_16680;
		Global_15312.f_369 = Global_16681;
		Global_15312.f_370 = Global_16682;
		Global_15689 = Global_15690;
		Global_15691 = Global_15692;
		if (Global_15951 == 0)
		{
			Global_15847[0 /*6*/] = { Global_15873[0 /*6*/] };
			Global_15847[1 /*6*/] = { Global_15873[1 /*6*/] };
			Global_15899[0 /*6*/] = { Global_15925[0 /*6*/] };
			Global_15899[1 /*6*/] = { Global_15925[1 /*6*/] };
			Global_15860[0 /*6*/] = { Global_15886[0 /*6*/] };
			Global_15860[1 /*6*/] = { Global_15886[1 /*6*/] };
			Global_15912[0 /*6*/] = { Global_15938[0 /*6*/] };
			Global_15912[1 /*6*/] = { Global_15938[1 /*6*/] };
		}
		if (Global_15699)
		{
			unk_0xC69E84EBBD7166E6(&Global_2264, 20);
			unk_0xC69E84EBBD7166E6(&Global_2265, 17);
			unk_0xC69E84EBBD7166E6(&Global_2266, 0);
			if (bParam3)
			{
				func_124();
				if (Global_3069[Global_14394 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14394.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14360 == 1)
			{
				return 0;
			}
			if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
			{
				if (unk_0xF371669B2D6B4C8E(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (func_170())
				{
					return 0;
				}
				if (unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (unk_0x326033AAF1073AF3(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (unk_0xEAF6063E5F7E0DD4(unk_0x81873881071CD9FE(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69020)
				{
					if (Global_15951 == 0)
					{
						if (unk_0x2C237D28F05F0008(unk_0x81873881071CD9FE()))
						{
							return 0;
						}
						if (unk_0x1E73DDF10071C453(unk_0x1329891157A54C63()))
						{
							return 0;
						}
						if (unk_0x2881A00480A747EC(unk_0x81873881071CD9FE()))
						{
							return 0;
						}
						if (unk_0x2C3A6C25D061092B(unk_0x1329891157A54C63()))
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
				switch (Global_14394.f_1)
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
			Global_15703 = bParam3;
		}
		Global_15695 = iParam2;
		if (Global_15689 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_15689)
			{
				StringCopy(&(Global_15312.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_15312.f_187[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_14559 = 0;
		func_168();
		return 1;
	}
	if (Global_15693 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_15695 || iParam2 == Global_15695)
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
	Global_15690 = uParam0;
	Global_15700 = 1;
	Global_15707 = 0;
	Global_15702 = 0;
	Global_16684 = 0;
	Global_16690 = 0;
	Global_2621441 = 0;
}

void func_258()
{
	Global_15741 = 0;
	Global_15700 = 1;
	Global_15707 = 0;
	Global_15702 = 0;
	Global_16684 = 0;
	Global_16686 = 0;
	Global_15707 = 0;
	Global_16690 = 0;
	Global_15698 = 0;
	Global_15745 = 0;
	Global_15747 = 0;
	Global_2621441 = 0;
}

struct<16> func_259()
{
	struct<16> Var0;
	
	StringCopy(&Var0, "BC_DECR_", 64);
	StringIntConCat(&Var0, uLocal_75[0], 64);
	return Var0;
}

int func_260(int iParam0)
{
	if ((Global_16807 || Global_16806) || Global_16808)
	{
		if (iParam0 == 130)
		{
		}
		else
		{
			return 0;
		}
	}
	if (Global_98[iParam0 /*10*/].f_8 != 138)
	{
		if (Global_14394.f_1 == 10)
		{
			if (Global_1579 == iParam0)
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
	switch (uLocal_75[0])
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
				func_79("SCLUB_HOME_MEE4", uLocal_75[0]);
			}
			else
			{
				func_79("SCLUB_HOME_MEET", uLocal_75[0]);
			}
			break;
		
		case 8:
			func_79("SCLUB_HOME_LIZ", uLocal_75[0]);
			break;
		
		case 9:
			func_79("SCLUB_HOME_HITCH", uLocal_75[0]);
			break;
	}
}

void func_262(int iParam0)
{
	if (unk_0x14B7103DBD149FFE(uParam0) == joaat("s_f_y_stripper_02"))
	{
		func_265(iParam0, 2, unk_0x2E0A9E3291F398E3(0, 3));
		func_264(iParam0, 2, unk_0x2E0A9E3291F398E3(0, 3));
		func_263(iParam0, 0, 0);
	}
}

void func_263(var uParam0, int iParam1, int iParam2)
{
	if (unk_0xA37C3E34EE91E32B(uParam0, 6, iParam1, iParam2))
	{
		unk_0x03F73D35E5AC583A(uParam0, 6, iParam1, iParam2, 0);
	}
}

void func_264(var uParam0, int iParam1, int iParam2)
{
	if (unk_0xA37C3E34EE91E32B(uParam0, 3, iParam1, iParam2))
	{
		unk_0x03F73D35E5AC583A(uParam0, 3, iParam1, iParam2, 0);
	}
}

void func_265(var uParam0, int iParam1, int iParam2)
{
	if (unk_0xA37C3E34EE91E32B(uParam0, 8, iParam1, iParam2))
	{
		unk_0x03F73D35E5AC583A(uParam0, 8, iParam1, iParam2, 0);
	}
}

void func_266(int iParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	
	if (!unk_0x5FEB513A4402FD59(uParam0))
	{
		unk_0x8A7A890067E00092(iParam0);
		bVar0 = false;
		if (unk_0x14B7103DBD149FFE(iParam0) == joaat("mp_f_stripperlite"))
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
				unk_0x03F73D35E5AC583A(iParam0, 3, 2, 0, 0);
				unk_0x03F73D35E5AC583A(iParam0, 4, 0, 1, 0);
				break;
			
			case 9:
				unk_0x03F73D35E5AC583A(iParam0, 0, 0, 1, 0);
				unk_0x03F73D35E5AC583A(iParam0, 2, 0, 1, 0);
				unk_0x03F73D35E5AC583A(iParam0, 3, 0, 0, 0);
				unk_0x03F73D35E5AC583A(iParam0, 4, 0, 1, 0);
				unk_0x03F73D35E5AC583A(iParam0, 8, 1, 0, 0);
				unk_0x03F73D35E5AC583A(iParam0, 10, 0, 0, 0);
				break;
			}
	}
}

void func_267(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xA37C3E34EE91E32B(uParam0, 11, iParam1, iParam2))
	{
		unk_0x03F73D35E5AC583A(uParam0, 11, iParam1, iParam2, 0);
	}
}

void func_268(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (unk_0x930F8FBB8E9537CC(uParam0))
	{
		return;
	}
	iVar0 = unk_0x14B7103DBD149FFE(iParam0);
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
	if (unk_0xA37C3E34EE91E32B(uParam0, 4, iParam1, iParam2))
	{
		unk_0x03F73D35E5AC583A(uParam0, 4, iParam1, iParam2, 0);
	}
}

void func_270(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xA37C3E34EE91E32B(uParam0, 2, iParam1, iParam2))
	{
		unk_0x03F73D35E5AC583A(uParam0, 2, iParam1, iParam2, 0);
	}
}

void func_271(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xA37C3E34EE91E32B(uParam0, 0, iParam1, iParam2))
	{
		unk_0x03F73D35E5AC583A(uParam0, 0, iParam1, iParam2, 0);
	}
}

int func_272()
{
	if (unk_0xB318FDA0D1ABDB20(func_189()))
	{
		return 1;
	}
	else if (unk_0x0F7866B4F5BE7CD4(func_189()))
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
			if (!unk_0x33ACB874CECA2D4B((*uParam0)[iVar0]))
			{
				if (!unk_0x33ACB874CECA2D4B((*uParam0)[iVar0]))
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
	if (!unk_0xB318FDA0D1ABDB20(func_189()))
	{
		unk_0x2D148CBB17A2B0C7(func_189());
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
			unk_0x32A12757CBF48A33((*uParam0)[iVar0]);
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
		return Global_98931.f_32499[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_280()
{
	switch (uLocal_75[0])
	{
		case 1:
			Local_301 = { 128.1002f, -1895.001f, 22.4811f };
			Local_304 = { 128.1059f, -1896.819f, 22.6792f };
			Local_307 = { 133.9411f, -1881.89f, 22.5257f };
			Local_310 = { 130.1663f, -1893.057f, 22.3748f };
			Local_313 = { 133.4958f, -1891.641f, 22.4252f };
			fLocal_325 = 330.5705f;
			fLocal_326 = 244f;
			Local_322 = { 146.293f, -1888.049f, 22.2193f };
			fLocal_327 = fLocal_326;
			break;
		
		case 0:
			Local_301 = { -161.9628f, -1636.501f, 33.0339f };
			Local_304 = { -159.9415f, -1637.307f, 33.0339f };
			Local_307 = { -178.6316f, -1629.522f, 32.1789f };
			Local_310 = { -166.1453f, -1633.102f, 32.6574f };
			Local_313 = { -166.6636f, -1633.229f, 32.6567f };
			fLocal_325 = 108.072f;
			fLocal_326 = 180.9811f;
			Local_322 = { Local_307 };
			fLocal_327 = fLocal_326;
			break;
		
		case 4:
			Local_301 = { -198.3824f, 87.8785f, 68.7436f };
			Local_304 = { -197.2292f, 86.3497f, 68.7561f };
			Local_307 = { -200.9078f, 113.537f, 68.5518f };
			Local_310 = { -200.1384f, 96.9809f, 68.5203f };
			Local_313 = { -199.5068f, 95.7042f, 68.5193f };
			fLocal_325 = 48.99f;
			fLocal_326 = 64.3f;
			Local_322 = { Local_307 };
			fLocal_327 = fLocal_326;
			break;
		
		case 5:
			Local_301 = { -849.0348f, 510.6906f, 89.8218f };
			Local_304 = { -849.0408f, 508.5767f, 89.8218f };
			Local_307 = { -846.1005f, 520.2202f, 89.6217f };
			Local_310 = { -851.8972f, 512.73f, 89.6217f };
			Local_313 = { -851.8746f, 513.6746f, 89.6217f };
			fLocal_325 = 92.365f;
			fLocal_326 = 293f;
			Local_322 = { -860.4819f, 514.2496f, 88.1473f };
			fLocal_327 = fLocal_326;
			break;
		
		case 8:
			Local_301 = { -28.2427f, -1555.892f, 29.6918f };
			Local_304 = { -24.8589f, -1556.846f, 29.6819f };
			Local_307 = { -41.8174f, -1575.609f, 28.2831f };
			Local_310 = { -25.3404f, -1556.341f, 29.6919f };
			Local_313 = { -27.7382f, -1570.572f, 29.3f };
			fLocal_325 = 181.352f;
			fLocal_326 = 47.9206f;
			Local_322 = { Local_307 };
			fLocal_327 = fLocal_326;
			break;
		
		case 9:
			Local_301 = { 3313.487f, 5175.831f, 18.619f };
			Local_304 = { 3310.816f, 5176.331f, 18.619f };
			Local_307 = { 3334.321f, 5161.122f, 17.2996f };
			Local_310 = { 3317.788f, 5171.707f, 17.4471f };
			Local_313 = { 3318.076f, 5171.805f, 17.4385f };
			fLocal_325 = 236.4579f;
			Local_322 = { 3322.927f, 5148.607f, 17.3141f };
			fLocal_327 = 310.8648f;
			break;
	}
}

int func_281()
{
	switch (uLocal_75[0])
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (bLocal_336)
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
	
	iVar0 = unk_0x428E5E7D8B8CA428();
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
				if (!unk_0x1C6DF6AD69BE853E())
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
			else if (!unk_0x25E16CB232F8AB91())
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
		iVar0 = unk_0x428E5E7D8B8CA428();
	}
	if (iParam1 > -1)
	{
		Global_1312502 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x1C6DF6AD69BE853E())
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
	else if (!unk_0x25E16CB232F8AB91())
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
	if (unk_0xE0A17F32C7C30546(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_284()
{
	return Global_2428865.f_568;
}

bool func_285()
{
	return Global_1315867;
}

void func_286()
{
	unk_0xC23A229F78DAD92A();
}

void func_287()
{
	unk_0xFF7EEE3F99F568CD(0);
	unk_0xA5EC8D4B74D54C9B();
	func_81();
	unk_0xD1C83BD797927DD5();
	unk_0xE91F714E010C7127(uLocal_300, 0);
	unk_0x3DD1ED742E99F292(Local_307 - Vector(3f, 3f, 3f), Local_307 + Vector(3f, 3f, 3f), 1, 1);
	unk_0xC3A1174645E71AB9(Local_307 - Vector(3f, 3f, 3f), Local_307 + Vector(3f, 3f, 3f), 15f, 1);
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), true, 0);
	}
	unk_0xFEBF3DDE5E4DC5C5(false, 0, 3000, 1, 0, 0);
	if (unk_0x86CCCD2FAE9D5E65(uLocal_273[0]))
	{
		if (!unk_0x930F8FBB8E9537CC(uLocal_273[0]))
		{
			if (!func_251(uLocal_332, 8192))
			{
				unk_0x9AF45ACD4E9068EE(uLocal_273[0], 1193033728, 0);
			}
			unk_0x6CB332CB31E9FA96(uLocal_273[0], 1);
			if (!unk_0xCC6E3B6BB69501F1(iLocal_71))
			{
				unk_0x4865E80F793024CE("BootyCall", &iLocal_71);
			}
			unk_0xF8E77F310A5B6EAB(2, iLocal_71, joaat("player"));
			unk_0xF8E77F310A5B6EAB(2, joaat("player"), iLocal_71);
			unk_0x506A601663C5417C(uLocal_273[0], iLocal_71);
		}
		unk_0x71A8BCA218722FA1(&(uLocal_273[0]));
	}
	if (iLocal_331 != -1)
	{
		func_289(&iLocal_331);
	}
	if (bLocal_70)
	{
		func_133(&uLocal_69);
	}
	unk_0x7438D30AEB0A7AAD(unk_0x1329891157A54C63(), 0);
	func_116(uLocal_75[0], -1);
	Global_97925 = 0;
	func_288(0);
	unk_0xC23A229F78DAD92A();
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
	if (!*iParam0 == Global_35405)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_35404 = 0;
	Global_35406 = 0;
	Global_35443 = 15;
	Global_55399 = 0;
	Global_55400 = 0;
}

