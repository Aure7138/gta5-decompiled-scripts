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
	char* sLocal_17 = NULL;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
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
	struct<21> Local_55 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 3, -1, 0, 0, -1861623876, 0 } ;
	var uLocal_76 = 0;
	struct<3> Local_77[32];
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	int iLocal_176 = 0;
	int iLocal_177 = 0;
	bool bLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 16;
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
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	struct<20> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1 } ;
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
	sLocal_17 = "NULL";
	fLocal_22 = 80f;
	fLocal_23 = 140f;
	fLocal_24 = 180f;
	fLocal_27 = 0f;
	fLocal_31 = -0.0375f;
	fLocal_32 = 0.17f;
	iLocal_35 = 3;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	if (unk_0x10FAB35428CCC9D7())
	{
		if (!func_106(ScriptParam_0))
		{
			func_99();
		}
	}
	while (true)
	{
		func_98();
		if (func_88())
		{
			func_99();
		}
		if (unk_0xADA24309FE08DACF() != bLocal_178)
		{
			func_99();
		}
		if (unk_0x24FB80D107371267(unk_0xC7B4D79B01FA7A5C()) != Local_55.f_17)
		{
			func_99();
		}
		unk_0x2302C0264EA58D31();
		switch (func_87(unk_0x57A3BDDAD8E5AA0A()))
		{
			case 0:
				if (func_85())
				{
					if (func_84() == 1)
					{
						func_83();
						Local_77[unk_0x57A3BDDAD8E5AA0A() /*3*/] = 1;
					}
					else if (func_84() == 4)
					{
						Local_77[unk_0x57A3BDDAD8E5AA0A() /*3*/] = 3;
					}
				}
				break;
			
			case 1:
				if (func_84() == 1)
				{
					func_64();
				}
				else if (func_84() == 4)
				{
					Local_77[unk_0x57A3BDDAD8E5AA0A() /*3*/] = 3;
				}
				break;
			
			case 3:
				func_63(&(Local_55.f_20));
				if (func_62(&(Local_55.f_20)))
				{
					Local_77[unk_0x57A3BDDAD8E5AA0A() /*3*/] = 4;
				}
				break;
			
			case 2:
				Local_77[unk_0x57A3BDDAD8E5AA0A() /*3*/] = 4;
			
			case 4:
				func_99();
				break;
		}
		if (unk_0x83CD99A1E6061AB5())
		{
			switch (func_84())
			{
				case 0:
					if (func_41())
					{
						Local_55.f_0 = 1;
					}
					break;
				
				case 1:
					func_7();
					if (func_1())
					{
						Local_55.f_0 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()
{
	if (unk_0xA921AA820C25702F(iLocal_174, 8))
	{
		if (!func_6(unk_0x4F8644AF03D0E0D6(), 1, 1))
		{
			if (!unk_0xA921AA820C25702F(Local_55.f_1, 9))
			{
				unk_0x933D6A9EEC1BACD0(&(Local_55.f_1), 9);
			}
			return 0;
		}
		else if (unk_0xA921AA820C25702F(Local_55.f_1, 9))
		{
			return 1;
		}
	}
	if (Local_55.f_12 == 0 || Local_55.f_12 == 1)
	{
		if (!unk_0x18A47D074708FD68(Local_55.f_4))
		{
			if (!func_4(Local_55.f_2))
			{
				return 1;
			}
			if (func_3(Local_55.f_3))
			{
				return 1;
			}
			if (Local_55.f_12 > 0)
			{
				return 1;
			}
		}
		if (unk_0xA921AA820C25702F(iLocal_174, 8))
		{
			if (!unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Local_55.f_6, 250f, 250f, 250f, false, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_3(int iParam0)
{
	if (unk_0x38CE16C96BD11344(iParam0))
	{
		return unk_0x84A2DD9AC37C35C1(unk_0xBDCD95FC216A8B3E(iParam0));
	}
	return 1;
}

int func_4(int iParam0)
{
	if (unk_0x38CE16C96BD11344(iParam0))
	{
		return !func_5(unk_0x367B936610BA360C(iParam0));
	}
	return 0;
}

int func_5(int iParam0)
{
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		if (unk_0x5F9532F3B5CC2551(iParam0))
		{
			return 1;
		}
		else if (!unk_0x4C241E39B23DF959(iParam0, false))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_6(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0xB8DFD30D6973E135(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x5E9564D8246B909A(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2421967.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_7()
{
	switch (Local_55.f_12)
	{
		case 0:
			func_35();
			if (func_10())
			{
				func_9();
				Local_55.f_12 = 1;
			}
			break;
		
		case 1:
			if (unk_0x38CE16C96BD11344(Local_55.f_4))
			{
				if (Local_55.f_15 == 3)
				{
					if (!unk_0x38CE16C96BD11344(Local_55.f_5))
					{
						Local_55.f_15 = 2;
					}
				}
				if (unk_0x38CE16C96BD11344(Local_55.f_2))
				{
					func_8(&(Local_55.f_2));
				}
				else if (Local_55.f_13 == 1)
				{
					Local_55.f_13 = 0;
				}
				if (unk_0x38CE16C96BD11344(Local_55.f_3))
				{
					func_8(&(Local_55.f_3));
				}
				else if (Local_55.f_14 == 1)
				{
					Local_55.f_14 = 0;
				}
			}
			break;
		
		case 2:
			break;
	}
}

void func_8(var uParam0)
{
	int iVar0;
	
	if (unk_0x18A47D074708FD68(*uParam0))
	{
		iVar0 = unk_0xBFFEAB45A9A9094A(*uParam0);
		unk_0xB736A491E64A32CF(&iVar0);
	}
}

void func_9()
{
	if (!unk_0xA6DB27D19ECBB7DA(iLocal_175))
	{
		iLocal_175 = unk_0x5CDE92C702A8FCE7(unk_0xD8515F5FEA14CB3F(Local_55.f_4));
		unk_0xD38744167B2FA257(iLocal_175, 0.7f);
		unk_0xDF735600A4696DAF(iLocal_175, 351);
		unk_0x03D7FB09E75D6B7E(iLocal_175, 2);
		unk_0x45FF974EEE1C8734(iLocal_175, 120);
		unk_0xEAA0FFE120D92784(iLocal_175, "AMD_BLIPN");
	}
}

int func_10()
{
	if (!unk_0xA921AA820C25702F(Local_55.f_1, 7))
	{
		if (func_4(Local_55.f_2))
		{
			if (unk_0x20B60995556D004F(unk_0x367B936610BA360C(Local_55.f_2), Local_55.f_6, 5f, 5f, 600f, false, true, 0))
			{
				unk_0x933D6A9EEC1BACD0(&(Local_55.f_1), 7);
			}
		}
	}
	else if (func_85())
	{
		if (func_13())
		{
			if (func_11())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_11()
{
	unk_0x963D27A58DF860AC(Local_55.f_18.f_1);
	if (unk_0x98A4EB5D89A0C952(Local_55.f_18.f_1))
	{
		if (!unk_0x38CE16C96BD11344(Local_55.f_18) && unk_0x38CE16C96BD11344(Local_55.f_4))
		{
			if (unk_0x800DD4721A8B008B(1))
			{
				if (func_12(&(Local_55.f_18), Local_55.f_18.f_1, unk_0x3FEF770D40960D5A(unk_0xD8515F5FEA14CB3F(Local_55.f_4), true) - Vector(5f, 0f, 0f), 1, 1, 1, 0))
				{
					unk_0xE05E81A888FA63C8(Local_55.f_18, true);
					unk_0x8E2530AA8ADA980E(unk_0xD8515F5FEA14CB3F(Local_55.f_18), unk_0xE83D4F9BA2A38914(unk_0xD8515F5FEA14CB3F(Local_55.f_4)));
					unk_0x6B9BBD38AB0796DF(unk_0xD8515F5FEA14CB3F(Local_55.f_4), unk_0xD8515F5FEA14CB3F(Local_55.f_18), 0, 0f, 0f, 0.25f, 0f, 0f, 0f, false, false, true, false, 2, true);
					unk_0x406137F8EF90EAF5(unk_0xD8515F5FEA14CB3F(Local_55.f_18), true);
					unk_0x3910051CCECDB00C(unk_0xD8515F5FEA14CB3F(Local_55.f_18), false);
					unk_0x710311ADF0E20730(unk_0xD8515F5FEA14CB3F(Local_55.f_18));
					unk_0x1C99BB7B6E96D16F(unk_0xD8515F5FEA14CB3F(Local_55.f_18), 0f, 0f, -0.2f);
					unk_0x5CEC1A84620E7D5B(unk_0xD8515F5FEA14CB3F(Local_55.f_18), true);
				}
			}
		}
	}
	if (!unk_0x38CE16C96BD11344(Local_55.f_18))
	{
		return 0;
	}
	return 1;
}

int func_12(var uParam0, int iParam1, struct<3> Param2, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	if (!unk_0x800DD4721A8B008B(1))
	{
		return 0;
	}
	*uParam0 = unk_0x99BFDC94A603E541(unk_0x509D5878EB39E842(iParam1, Param2, bParam6, bParam5, bParam7));
	if (unk_0x38CE16C96BD11344(*uParam0))
	{
		unk_0x3910051CCECDB00C(unk_0xD8515F5FEA14CB3F(*uParam0), bParam8);
		if (unk_0xC7827959479DCC78(unk_0xD8515F5FEA14CB3F(*uParam0)))
		{
			if (bParam5)
			{
				unk_0xE05E81A888FA63C8(*uParam0, true);
			}
		}
		return 1;
	}
	return 0;
}

int func_13()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	unk_0x963D27A58DF860AC(joaat("prop_box_ammo02a"));
	unk_0x963D27A58DF860AC(joaat("p_cargo_chute_s"));
	if (unk_0x98A4EB5D89A0C952(joaat("prop_box_ammo02a")) && unk_0x98A4EB5D89A0C952(joaat("p_cargo_chute_s")))
	{
		if (!unk_0x38CE16C96BD11344(Local_55.f_4) && !unk_0x38CE16C96BD11344(Local_55.f_5))
		{
			if (func_4(Local_55.f_2) && unk_0x69778E7564BADE6D(0, 0, 2, 0))
			{
				iVar0 = 200;
				if (!unk_0x38CE16C96BD11344(Local_55.f_4))
				{
					iVar1 = 0;
					unk_0x933D6A9EEC1BACD0(&iVar1, 12);
					Local_55.f_4 = unk_0x99BFDC94A603E541(unk_0x673966A0C0FD7171(joaat("pickup_ammo_bullet_mp"), unk_0x3FEF770D40960D5A(unk_0x367B936610BA360C(Local_55.f_2), true) - Vector(3f, 0f, 0f), iVar1, iVar0, joaat("prop_box_ammo02a"), true, true));
					unk_0x3882114BDE571AD4(unk_0xD8515F5FEA14CB3F(Local_55.f_4), true);
					unk_0x77F33F2CCF64B3AA(unk_0xD8515F5FEA14CB3F(Local_55.f_4), true);
					unk_0x406137F8EF90EAF5(unk_0xD8515F5FEA14CB3F(Local_55.f_4), true);
					unk_0x3910051CCECDB00C(unk_0xD8515F5FEA14CB3F(Local_55.f_4), false);
					unk_0x710311ADF0E20730(unk_0xD8515F5FEA14CB3F(Local_55.f_4));
					func_34();
					iVar2 = unk_0x430386FE9BF80B45();
					unk_0xE65F427EB70AB1ED(iVar2, "Crate_Beeps", unk_0xD8515F5FEA14CB3F(Local_55.f_4), "MP_CRATE_DROP_SOUNDS", true, 0);
					Local_55.f_16 = unk_0x2DE3F0A134FFBC0D(iVar2);
				}
				if (unk_0x38CE16C96BD11344(Local_55.f_4) && !unk_0x38CE16C96BD11344(Local_55.f_5))
				{
					if (func_12(&(Local_55.f_5), joaat("p_cargo_chute_s"), unk_0x3FEF770D40960D5A(unk_0x367B936610BA360C(Local_55.f_2), true) - Vector(2f, 0f, 0f), 1, 1, 0, 1))
					{
						unk_0xE05E81A888FA63C8(Local_55.f_5, true);
						unk_0x6B9BBD38AB0796DF(unk_0xD8515F5FEA14CB3F(Local_55.f_5), unk_0xD8515F5FEA14CB3F(Local_55.f_4), 0, 0f, 0f, 0.1f, 0f, 0f, 0f, false, false, false, false, 2, true);
						unk_0x406137F8EF90EAF5(unk_0xD8515F5FEA14CB3F(Local_55.f_5), true);
						unk_0x3910051CCECDB00C(unk_0xD8515F5FEA14CB3F(Local_55.f_5), false);
						unk_0x7FB218262B810701(unk_0xD8515F5FEA14CB3F(Local_55.f_5), "P_cargo_chute_S_deploy", "P_cargo_chute_S", 1000f, false, false, false, 0f, 0);
						unk_0x40FDEDB72F8293B2(unk_0xD8515F5FEA14CB3F(Local_55.f_5));
					}
				}
				func_32();
				if (!unk_0xA921AA820C25702F(iLocal_174, 15))
				{
					func_31(&uLocal_183, 3, unk_0xBDCD95FC216A8B3E(Local_55.f_3), "FM_Pilot_Ammo", 0, 1);
					func_14(&uLocal_183, "CT_AUD", "MPCT_AMOinc", 12, 0, 0, 1);
					unk_0x933D6A9EEC1BACD0(&iLocal_174, 15);
				}
			}
		}
	}
	if (unk_0x38CE16C96BD11344(Local_55.f_4) && unk_0x38CE16C96BD11344(Local_55.f_5))
	{
		return 1;
	}
	return 0;
}

int func_14(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_30(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_2621441 = 1;
	return func_15(sParam2, iParam3, 0);
}

int func_15(char* sParam0, int iParam1, bool bParam2)
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
					unk_0xD79DEEFB53455EBA(false);
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
					func_29();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x16754C556D2EDE3D())
		{
			return 0;
		}
		if (func_28(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_27();
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
			unk_0xE80492A9AC099A93(&Global_2263, 20);
			unk_0xE80492A9AC099A93(&Global_2264, 17);
			unk_0xE80492A9AC099A93(&Global_2265, 0);
			if (bParam2)
			{
				func_20();
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
			if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
			{
				if (unk_0x4E209B2C1EAD5159(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (func_19())
				{
					return 0;
				}
				if (unk_0x57E457CD2C0FC168(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0x7DCE8BDA0F1C1200(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0xF731332072F5156C(unk_0xD80958FC74E988A6(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68067)
				{
					if (unk_0xCFB0A0D8EDD145A3(unk_0xD80958FC74E988A6()))
					{
						return 0;
					}
					if (unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6()))
					{
						return 0;
					}
					if (unk_0xC70B5FAE151982D8(unk_0xD80958FC74E988A6()))
					{
						return 0;
					}
					if (unk_0x3E5F7FC85D854E15(unk_0x4F8644AF03D0E0D6()))
					{
						return 0;
					}
				}
			}
			if (func_18())
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
				if (unk_0xA921AA820C25702F(Global_2263, 9))
				{
					return 0;
				}
			}
			func_17();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_16();
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
		func_29();
	}
	return 0;
}

void func_16()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14560[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xD79DEEFB53455EBA(false);
	Global_15692 = 1;
}

void func_17()
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
	unk_0xE80492A9AC099A93(&Global_2264, 16);
}

int func_18()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_19()
{
	int iVar0;
	int iVar1;
	
	if (Global_68067)
	{
		iVar0 = 0;
		unk_0x3A87E44BB9A01D54(unk_0xD80958FC74E988A6(), &iVar1, true);
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x68EDDA28A5976D07() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (unk_0x7EE53118C892B513(unk_0xD80958FC74E988A6(), 78, true))
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

void func_20()
{
	if (func_26(14))
	{
		if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
		{
			if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_97173.f_29699[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_97173.f_29699[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_97173.f_29699[2 /*29*/])
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
		Global_14393 = func_21();
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

var func_21()
{
	func_22();
	return Global_97173.f_1729.f_539.f_3213;
}

void func_22()
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (func_25(Global_97173.f_1729.f_539.f_3213) != unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			iVar0 = func_24(unk_0xD80958FC74E988A6());
			if (func_23(iVar0) && (!func_26(14) || Global_96126))
			{
				if (Global_97173.f_1729.f_539.f_3213 != iVar0 && func_23(Global_97173.f_1729.f_539.f_3213))
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

bool func_23(int iParam0)
{
	return iParam0 < 3;
}

int func_24(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		iVar1 = unk_0x9F47B058362C84B5(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_25(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_25(int iParam0)
{
	if (func_23(iParam0))
	{
		return Global_97173.f_29699[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_26(int iParam0)
{
	return Global_34909 == iParam0;
}

void func_27()
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

bool func_28(int iParam0, int iParam1)
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
	return unk_0xA921AA820C25702F(Global_1327591.f_949, iParam0);
}

void func_29()
{
	unk_0x9AEB285D1818C9AC();
	Global_16703 = 0;
	if ((unk_0x7497D2CE2C30D24C() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		unk_0xD79DEEFB53455EBA(false);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (unk_0x16754C556D2EDE3D())
	{
		unk_0xD79DEEFB53455EBA(true);
		Global_15692 = 6;
		return;
	}
}

void func_30(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15146 = { *uParam0 };
	Global_1579 = iParam1;
	StringCopy(&Global_15762, sParam2, 24);
	Global_16681 = uParam5;
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

void func_31(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68067)
	{
		if (!unk_0x84A2DD9AC37C35C1(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x6373D1349925A70E(iParam2, false);
			}
			else
			{
				unk_0x6373D1349925A70E(iParam2, true);
			}
		}
		if (!unk_0x84A2DD9AC37C35C1(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xEC4686EC06434678(iParam2, false);
			}
			else
			{
				unk_0xEC4686EC06434678(iParam2, true);
			}
		}
	}
}

int func_32()
{
	if (func_33())
	{
		if (!unk_0x74AFEF0D2E1E409B(iLocal_177))
		{
			iLocal_177 = unk_0x6F60E89A7B64EE1D("scr_crate_drop_beacon", unk_0xD8515F5FEA14CB3F(Local_55.f_4), 0f, 0f, 0.2f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
			unk_0x7F8F65877F88783B(iLocal_177, 0.8f, 0.18f, 0.19f, false);
		}
	}
	if (!unk_0x74AFEF0D2E1E409B(iLocal_177))
	{
		return 0;
	}
	return 1;
}

int func_33()
{
	unk_0x944955FB2A3935C8();
	if (unk_0xCA7D9B86ECA7481B())
	{
		return 1;
	}
	return 0;
}

void func_34()
{
	if (unk_0x75262FD12D0A1C84(Local_55.f_16) != -1)
	{
		if (unk_0x38CE16C96BD11344(Local_55.f_4))
		{
			if (!unk_0xFCBDCE714A7C88E5(unk_0x75262FD12D0A1C84(Local_55.f_16)))
			{
				unk_0xA3B0C41BA5CC0BB5(unk_0x75262FD12D0A1C84(Local_55.f_16));
			}
			unk_0x353FC880830B88FA(unk_0x75262FD12D0A1C84(Local_55.f_16));
		}
		else
		{
			if (!unk_0xFCBDCE714A7C88E5(unk_0x75262FD12D0A1C84(Local_55.f_16)))
			{
				unk_0xA3B0C41BA5CC0BB5(unk_0x75262FD12D0A1C84(Local_55.f_16));
			}
			unk_0x353FC880830B88FA(unk_0x75262FD12D0A1C84(Local_55.f_16));
		}
	}
}

void func_35()
{
	int iVar0;
	
	if (!unk_0xA921AA820C25702F(iLocal_174, 11))
	{
		if (!unk_0x4D79439A6B55AC67())
		{
			iVar0 = func_40(1176, -1, 0);
			if (!unk_0xA921AA820C25702F(iVar0, 10))
			{
				func_39("AMD_HELP1", -1);
				unk_0x933D6A9EEC1BACD0(&iVar0, 10);
				func_36(1176, iVar0, -1, 1);
				unk_0x933D6A9EEC1BACD0(&iLocal_174, 11);
			}
			else if (!unk_0xA921AA820C25702F(iVar0, 11))
			{
				func_39("AMD_HELP2", -1);
				unk_0x933D6A9EEC1BACD0(&iVar0, 11);
				func_36(1176, iVar0, -1, 1);
				unk_0x933D6A9EEC1BACD0(&iLocal_174, 11);
			}
			else
			{
				unk_0x933D6A9EEC1BACD0(&iLocal_174, 11);
			}
		}
	}
}

void func_36(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = Global_2454188[iParam0 /*6*/][func_37(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB3271D7AB655B441(iVar0, iParam1, bParam3);
	}
}

int func_37(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_38();
		if (iVar1 > -1)
		{
			Global_2453901 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2453901 = 1;
		}
	}
	return iVar0;
}

int func_38()
{
	return Global_1312736;
}

void func_39(char* sParam0, int iParam1)
{
	unk_0x8509B634FBE7DA11(sParam0);
	unk_0x238FFE5C7B0498A6(0, false, true, iParam1);
}

int func_40(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2454188[iParam0 /*6*/][func_37(iParam1)];
	if (unk_0x767FBC2AC802EF3D(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_41()
{
	if (func_61(joaat("cuban800")) && func_61(joaat("s_m_m_pilot_02")))
	{
		if (func_59(&uLocal_181, 4000, 0))
		{
			if (func_44() && func_42())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_42()
{
	if ((!unk_0x38CE16C96BD11344(Local_55.f_3) && func_61(joaat("s_m_m_pilot_02"))) && unk_0x38CE16C96BD11344(Local_55.f_2))
	{
		if (func_4(Local_55.f_2))
		{
			if (func_43(&(Local_55.f_3), Local_55.f_2, 22, joaat("s_m_m_pilot_02"), -1, 1, 1, 1))
			{
				unk_0x9F8AA94D6D97DBF4(unk_0xBDCD95FC216A8B3E(Local_55.f_3), true);
				unk_0xC80A74AC829DDD92(unk_0xBDCD95FC216A8B3E(Local_55.f_3), Global_1574049);
				unk_0xC8A9481A01E63C28(unk_0xBDCD95FC216A8B3E(Local_55.f_3), 0);
				unk_0x971D38760FBC02EF(unk_0xBDCD95FC216A8B3E(Local_55.f_3), true);
				unk_0x6B76DC1F3AE6E6A3(unk_0xBDCD95FC216A8B3E(Local_55.f_3), unk_0xF2DB717A73826179((200f * Global_262145.f_133)));
				func_83();
				unk_0x5ABA3986D90D8A3B(unk_0xBDCD95FC216A8B3E(Local_55.f_3), iLocal_176);
				unk_0xB893215D8D4C015B(unk_0x367B936610BA360C(Local_55.f_2), unk_0xF2DB717A73826179(50f));
			}
		}
	}
	if (!unk_0x38CE16C96BD11344(Local_55.f_3))
	{
		return 0;
	}
	unk_0xE532F5D78798DAAB(joaat("s_m_m_pilot_02"));
	return 1;
}

int func_43(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!unk_0xBCBF4FEF9FA5D781(1))
	{
		return 0;
	}
	if (!unk_0x38CE16C96BD11344(iParam1))
	{
		return 0;
	}
	if (!unk_0x4C241E39B23DF959(unk_0x367B936610BA360C(iParam1), false))
	{
		return 0;
	}
	*uParam0 = unk_0x0EDEC3C276198689(unk_0x7DD959874C1FD534(unk_0x367B936610BA360C(iParam1), iParam2, iParam3, iParam4, bParam6, bParam5));
	if (unk_0x38CE16C96BD11344(*uParam0))
	{
		unk_0x3910051CCECDB00C(unk_0xBDCD95FC216A8B3E(*uParam0), bParam7);
		if (unk_0xC7827959479DCC78(unk_0xBDCD95FC216A8B3E(*uParam0)))
		{
			if (bParam5)
			{
				unk_0xE05E81A888FA63C8(*uParam0, true);
			}
		}
		return 1;
	}
	return 0;
}

int func_44()
{
	struct<3> Var0;
	float fVar3;
	
	if (!unk_0x38CE16C96BD11344(Local_55.f_2))
	{
		if (func_61(joaat("cuban800")))
		{
			func_56(&Var0, &fVar3);
			if (func_46(Var0, 6f, 1f, 1f, 5f, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0))
			{
				if (func_45(&(Local_55.f_2), joaat("cuban800"), Var0, fVar3, 1, 1, 1, 0, 1, 1))
				{
					unk_0xB664292EAECF7FA6(unk_0x367B936610BA360C(Local_55.f_2), 2);
					unk_0x428CA6DBD1094446(unk_0x367B936610BA360C(Local_55.f_2), false);
					unk_0x1718DE8E3F2823CA(unk_0x367B936610BA360C(Local_55.f_2), true);
					unk_0x710311ADF0E20730(unk_0x367B936610BA360C(Local_55.f_2));
					unk_0xAB54A438726D25D5(unk_0x367B936610BA360C(Local_55.f_2), 60f);
					unk_0xA178472EBB8AE60D(unk_0x367B936610BA360C(Local_55.f_2));
					unk_0x2497C4717C8B881E(unk_0x367B936610BA360C(Local_55.f_2), 1, 1);
					unk_0x983765856F2564F9(unk_0x367B936610BA360C(Local_55.f_2), false);
					unk_0x3910051CCECDB00C(unk_0x367B936610BA360C(Local_55.f_2), false);
					unk_0xCFC8BE9A5E1FE575(unk_0x367B936610BA360C(Local_55.f_2), 3);
					unk_0x87E7F24270732CB1(unk_0x367B936610BA360C(Local_55.f_2));
				}
			}
		}
	}
	if (!unk_0x38CE16C96BD11344(Local_55.f_2))
	{
		return 0;
	}
	unk_0xE532F5D78798DAAB(joaat("cuban800"));
	return 1;
}

int func_45(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
{
	int iVar0;
	
	if (!unk_0x7277F1F2E085EE74(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0x01C7B9B38428AEB6(Param2, 1f, 0, 0, 1, 1, 1);
	}
	iVar0 = unk_0xAF35D0D2583051B0(iParam1, Param2, fParam5, bParam7, bParam6);
	*uParam0 = unk_0xB4C94523F023419C(iVar0);
	if (unk_0x38CE16C96BD11344(*uParam0))
	{
		unk_0x3910051CCECDB00C(iVar0, bParam10);
		if (unk_0xC7827959479DCC78(iVar0))
		{
			if (bParam8)
			{
				unk_0xE05E81A888FA63C8(*uParam0, true);
			}
			else
			{
				unk_0xE05E81A888FA63C8(*uParam0, false);
			}
		}
		unk_0x67B2C79AA7FF5738(iVar0, bParam9);
		return 1;
	}
	return 0;
}

int func_46(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17)
{
	Global_2404546 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x61E1DD6125A3EEE6(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0x083961498679DC9F(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0x083961498679DC9F(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x397DC58FF00298D1(Param0, fParam5, false))
		{
			return 0;
		}
	}
	Global_2404546++;
	if (bParam13)
	{
		if (unk_0x50CAD495A460B305(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404546++;
	if (fParam14 > 0f)
	{
		if (func_52(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404546++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_47(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2404546++;
	return 1;
}

int func_47(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_6(unk_0x4F8644AF03D0E0D6(), 1, 1))
		{
			if (!unk_0xB16FCE9DDC7BA182())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0xF1B760881820C952(func_51(unk_0x4F8644AF03D0E0D6()), Param0, true) <= (fVar2 + fParam3))
				{
					if (unk_0xE33D59DA70B58FDF(Param0, fParam3))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_6(iVar1, 1, 1))
		{
			if (!func_49(iVar1, 0) && unk_0x9DE986FC9A87C474(unk_0x4F8644AF03D0E0D6(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x4F8644AF03D0E0D6()))
				{
					if ((func_48(iVar1) || !bParam10) && !Global_2413868[iVar1 /*253*/].f_252)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x37039302F4E0A008(iVar1) == -1)
							{
								if (unk_0x37039302F4E0A008(iVar1) == unk_0x37039302F4E0A008(unk_0x4F8644AF03D0E0D6()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x37039302F4E0A008(iVar1) != unk_0x37039302F4E0A008(unk_0x4F8644AF03D0E0D6()))) || unk_0x37039302F4E0A008(iVar1) == -1)
							{
								if (unk_0xF1B760881820C952(func_51(iVar1), Param0, true) <= (fVar2 + fParam3))
								{
									if (unk_0xDC3A310219E5DA62(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x37039302F4E0A008(iVar1) != iParam8 || unk_0x37039302F4E0A008(iVar1) == -1)
						{
							if (unk_0xF1B760881820C952(func_51(iVar1), Param0, true) <= (fVar2 + fParam3))
							{
								if (unk_0xDC3A310219E5DA62(iVar1, Param0, fParam3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_48(int iParam0)
{
	if (unk_0xD796CB5BA8F20E32(unk_0x43A66C31C68491C0(iParam0)) || Global_2413868[iParam0 /*253*/].f_239)
	{
		return 1;
	}
	return 0;
}

bool func_49(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x4F8644AF03D0E0D6())
	{
		bVar0 = func_50(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582048[iParam0 /*324*/].f_180 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xB8DFD30D6973E135(iParam0))
		{
			bVar0 = unk_0x37039302F4E0A008(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_50(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_38();
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

Vector3 func_51(int iParam0)
{
	return unk_0x3FEF770D40960D5A(unk_0x43A66C31C68491C0(iParam0), false);
}

int func_52(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x4F8644AF03D0E0D6() != iVar1) || iParam8 == 0)
		{
			if (func_6(iVar1, bParam4, bParam5))
			{
				if (unk_0x9DE986FC9A87C474(unk_0x4F8644AF03D0E0D6(), iVar1))
				{
					if (!bParam7 || (!unk_0x84A2DD9AC37C35C1(unk_0x43A66C31C68491C0(iVar1)) && func_48(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x37039302F4E0A008(unk_0x4F8644AF03D0E0D6()) != unk_0x37039302F4E0A008(iVar1))) || unk_0x37039302F4E0A008(unk_0x4F8644AF03D0E0D6()) == -1)
						{
							if (((unk_0x37039302F4E0A008(unk_0x4F8644AF03D0E0D6()) == -1 && uParam9) && bParam6) && func_53(iVar1))
							{
							}
							else if (unk_0x7239B21A38F536BA(unk_0x43A66C31C68491C0(iVar1)))
							{
								if (unk_0xF1B760881820C952(func_51(iVar1), Param0, true) < fParam3)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_53(int iParam0)
{
	if (func_55(unk_0x4F8644AF03D0E0D6(), iParam0))
	{
		return 1;
	}
	Global_2445237 = { func_54(iParam0) };
	if (unk_0x1A24A179F9B31654(&Global_2445237))
	{
		return 1;
	}
	return 0;
}

struct<13> func_54(int iParam0)
{
	struct<13> Var0;
	
	unk_0x388EB2B86C73B6B3(iParam0, &Var0, 13);
	return Var0;
}

int func_55(int iParam0, int iParam1)
{
	if (unk_0x579CCED0265D4896())
	{
		Global_2445237 = { func_54(iParam0) };
		Global_2445250 = { func_54(iParam1) };
		if (unk_0xB124B57F571D8F18(&Global_2445237))
		{
			if (unk_0xB124B57F571D8F18(&Global_2445250))
			{
				unk_0xEEE6EACBE8874FBA(&Global_2445167, 35, &Global_2445237);
				unk_0xEEE6EACBE8874FBA(&Global_2445202, 35, &Global_2445250);
				if (Global_2445167 == Global_2445202)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_56(var uParam0, var uParam1)
{
	float fVar0;
	
	*uParam0 = { func_57(Local_55.f_6 + Vector(200f, 0f, 0f), (400f / 2f), 400f, (200f / 2f)) };
	*uParam1 = unk_0x2FFB6B224F4B2926((Local_55.f_6 - *uParam0), (Local_55.f_6.f_1 - uParam0->f_1));
	fVar0 = unk_0x8ABE8608576D9CE3((*uParam0 - 400f), (uParam0->f_1 - 400f), (*uParam0 + 400f), (uParam0->f_1 + 400f));
	if (uParam0->f_2 < fVar0)
	{
		uParam0->f_2 = fVar0;
	}
}

Vector3 func_57(struct<3> Param0, float fParam3, float fParam4, float fParam5)
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { unk_0x313CE5879CEB6FCD(-1f, 1f), unk_0x313CE5879CEB6FCD(-1f, 1f), 0f };
	fVar3 = (fParam5 / 2f);
	Var0 = { func_58(Var0, unk_0x313CE5879CEB6FCD(fParam3, fParam4)) };
	Var0.f_2 = unk_0x313CE5879CEB6FCD(-fVar3, fVar3);
	return Param0 + Var0;
}

Vector3 func_58(struct<3> Param0, float fParam3)
{
	float fVar0;
	
	if (fParam3 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = unk_0x652D2EEEF1D3E62C(Param0);
	if (fVar0 != 0f)
	{
		return Param0 * FtoV((fParam3 / fVar0));
	}
	return 0f, 0f, 0f;
}

int func_59(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_60(uParam0, bParam2, 0);
	if (unk_0x10FAB35428CCC9D7() && !bParam2)
	{
		if (unk_0xF0D31AD191A74F87(unk_0xA2C6FC031D46FFF0(unk_0x7A5487FE9FAA6B48(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xF0D31AD191A74F87(unk_0xA2C6FC031D46FFF0(unk_0x9CD27B0045628463(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_60(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x10FAB35428CCC9D7() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x7A5487FE9FAA6B48();
			}
			else
			{
				*uParam0 = unk_0x89023FBBF9200E9F();
			}
		}
		else
		{
			*uParam0 = unk_0x9CD27B0045628463();
		}
		uParam0->f_1 = 1;
	}
}

bool func_61(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x963D27A58DF860AC(iParam0);
	return unk_0x98A4EB5D89A0C952(iParam0);
}

int func_62(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0xF0D31AD191A74F87(unk_0xA2C6FC031D46FFF0(unk_0x7A5487FE9FAA6B48(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_63(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x83CD99A1E6061AB5())
		{
			func_60(uParam0, 0, 0);
		}
	}
}

void func_64()
{
	func_74();
	switch (Local_77[unk_0x57A3BDDAD8E5AA0A() /*3*/].f_2)
	{
		case 0:
			if (Local_55.f_12 > 0)
			{
				Local_77[unk_0x57A3BDDAD8E5AA0A() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			func_69();
			func_65();
			break;
		
		case 2:
			func_99();
			break;
	}
}

void func_65()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x38CE16C96BD11344(Local_55.f_4))
	{
		if (func_6(unk_0x4F8644AF03D0E0D6(), 1, 1))
		{
			iVar1 = func_68(unk_0xD80958FC74E988A6());
			if (((((((((((((((((iVar1 == joaat("weapon_unarmed") || iVar1 == joaat("weapon_flare")) || iVar1 == joaat("weapon_knife")) || iVar1 == joaat("weapon_nightstick")) || iVar1 == joaat("weapon_bat")) || iVar1 == joaat("weapon_hammer")) || iVar1 == joaat("weapon_golfclub")) || iVar1 == joaat("weapon_crowbar")) || iVar1 == joaat("weapon_molotov")) || iVar1 == joaat("weapon_grenade")) || iVar1 == joaat("weapon_grenadelauncher")) || iVar1 == joaat("weapon_grenadelauncher_smoke")) || iVar1 == joaat("weapon_petrolcan")) || iVar1 == joaat("weapon_rpg")) || iVar1 == joaat("weapon_smokegrenade")) || iVar1 == joaat("weapon_stickybomb")) || iVar1 == joaat("weapon_bzgas")) || iVar1 == joaat("weapon_bottle"))
			{
				iVar1 = Global_1312417;
			}
			unk_0xDC16122C7A20C933(unk_0xD80958FC74E988A6(), iVar1, &iVar0);
			if ((func_67(iVar1) && func_66(iVar1)) && unk_0x015A522136D7F951(unk_0xD80958FC74E988A6(), iVar1) < iVar0)
			{
			}
			else if (unk_0x83CD99A1E6061AB5())
			{
				if (!unk_0xA921AA820C25702F(iLocal_174, 12))
				{
					if (!unk_0x4D79439A6B55AC67())
					{
						func_39("AMD_HELP3", -1);
						unk_0x933D6A9EEC1BACD0(&iLocal_174, 12);
					}
				}
				else if (!unk_0xA921AA820C25702F(iLocal_174, 13))
				{
					if (!unk_0x4D79439A6B55AC67())
					{
						if (unk_0x18A47D074708FD68(Local_55.f_4))
						{
							if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), unk_0xD8515F5FEA14CB3F(Local_55.f_4), 10f, 10f, 10f, false, true, 0))
							{
								if (func_59(&uLocal_179, 20000, 0))
								{
									func_39("AMD_HELP3", -1);
									unk_0x933D6A9EEC1BACD0(&iLocal_174, 13);
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_66(int iParam0)
{
	if ((((((((((iParam0 == joaat("gadget_parachute") || iParam0 == joaat("weapon_knife")) || iParam0 == joaat("weapon_bat")) || iParam0 == joaat("weapon_crowbar")) || iParam0 == joaat("weapon_nightstick")) || iParam0 == joaat("weapon_golfclub")) || iParam0 == joaat("weapon_hammer")) || iParam0 == joaat("weapon_bat")) || iParam0 == joaat("weapon_bottle")) || iParam0 == joaat("weapon_dagger")) || iParam0 == joaat("weapon_hatchet"))
	{
		return 0;
	}
	return 1;
}

int func_67(int iParam0)
{
	if (iParam0 == joaat("weapon_flare"))
	{
		return 0;
	}
	return 1;
}

var func_68(int iParam0)
{
	var uVar0;
	
	unk_0x3A87E44BB9A01D54(iParam0, &uVar0, true);
	return uVar0;
}

void func_69()
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	
	if (unk_0x18A47D074708FD68(Local_55.f_4))
	{
		if (unk_0x4D36070FE0215186(Local_55.f_4) || (!unk_0xA1607996431332DF(Local_55.f_4) && unk_0x83CD99A1E6061AB5()))
		{
			if (unk_0x18A47D074708FD68(Local_55.f_5))
			{
				if (unk_0x4D36070FE0215186(Local_55.f_5) || (!unk_0xA1607996431332DF(Local_55.f_5) && unk_0x83CD99A1E6061AB5()))
				{
					if (func_73(Local_55.f_4) && func_73(Local_55.f_5))
					{
						if (!unk_0xA921AA820C25702F(iLocal_174, 8))
						{
							if (unk_0xA921AA820C25702F(iLocal_174, 7))
							{
								if (!unk_0x1F0B79228E461EC9(unk_0xD8515F5FEA14CB3F(Local_55.f_5), "P_cargo_chute_S", "P_cargo_chute_S_crumple", 3))
								{
									unk_0x933D6A9EEC1BACD0(&iLocal_174, 8);
									func_72(&(Local_55.f_5));
								}
							}
						}
						if (!unk_0xA921AA820C25702F(iLocal_174, 7))
						{
							if (unk_0xA921AA820C25702F(iLocal_174, 6))
							{
								if (unk_0x1F0B79228E461EC9(unk_0xD8515F5FEA14CB3F(Local_55.f_5), "P_cargo_chute_S", "P_cargo_chute_S_crumple", 3))
								{
									unk_0x933D6A9EEC1BACD0(&iLocal_174, 7);
								}
							}
						}
						if (!unk_0xA921AA820C25702F(iLocal_174, 6))
						{
							unk_0xEEA3B200A6FEB65B(unk_0xD8515F5FEA14CB3F(Local_55.f_4), 2, 0.0245f);
							if (func_70())
							{
								unk_0x7FB218262B810701(unk_0xD8515F5FEA14CB3F(Local_55.f_5), "P_cargo_chute_S_crumple", "P_cargo_chute_S", 1000f, false, false, false, 0f, 0);
								unk_0x933D6A9EEC1BACD0(&iLocal_174, 6);
								if (unk_0xA6DB27D19ECBB7DA(iLocal_175))
								{
									unk_0x45FF974EEE1C8734(iLocal_175, 255);
								}
							}
						}
					}
				}
			}
			if (!unk_0xA921AA820C25702F(iLocal_174, 14))
			{
				if (unk_0x18A47D074708FD68(Local_55.f_18))
				{
					if (unk_0x4D36070FE0215186(Local_55.f_18) || (!unk_0xA1607996431332DF(Local_55.f_18) && unk_0x83CD99A1E6061AB5()))
					{
						if (func_73(Local_55.f_18))
						{
							unk_0xEEA3B200A6FEB65B(unk_0xD8515F5FEA14CB3F(Local_55.f_18), 2, 0.1f);
							if (unk_0x8ABFB70C49CC43E2(unk_0xD8515F5FEA14CB3F(Local_55.f_18)))
							{
								if (unk_0x18A47D074708FD68(Local_55.f_4))
								{
									unk_0x961AC54BF0613F5D(unk_0xD8515F5FEA14CB3F(Local_55.f_4), true, true);
								}
								unk_0x933D6A9EEC1BACD0(&iLocal_174, 14);
							}
						}
						if (!unk_0xA921AA820C25702F(Local_55.f_1, 8) && unk_0xA921AA820C25702F(iLocal_174, 8))
						{
							if (func_73(Local_55.f_18))
							{
								if (!unk_0xD05BFF0C0A12C68F(unk_0xD8515F5FEA14CB3F(Local_55.f_18)) && unk_0xE9676F61BC0B3321(unk_0xD8515F5FEA14CB3F(Local_55.f_18)))
								{
									if (unk_0x605F5A140F202491(unk_0xD8515F5FEA14CB3F(Local_55.f_18)))
									{
										bVar0 = true;
									}
									else if (!unk_0x886E37EC497200B6(unk_0xD8515F5FEA14CB3F(Local_55.f_18)) && unk_0x1218E6886D3D8327(unk_0xD8515F5FEA14CB3F(Local_55.f_18)))
									{
										bVar0 = true;
									}
									if (bVar0)
									{
										unk_0x5CEC1A84620E7D5B(unk_0xD8515F5FEA14CB3F(Local_55.f_18), false);
										unk_0x933D6A9EEC1BACD0(&(Local_55.f_1), 8);
									}
								}
							}
						}
					}
				}
			}
			Var1 = { unk_0x3FEF770D40960D5A(unk_0xD8515F5FEA14CB3F(Local_55.f_4), true) };
			if (Var1.f_2 < -50f && !unk_0xCFB0A0D8EDD145A3(unk_0xD8515F5FEA14CB3F(Local_55.f_4)))
			{
				if (func_73(Local_55.f_4))
				{
					unk_0x06843DA7060A026B(unk_0xD8515F5FEA14CB3F(Local_55.f_4), Local_55.f_6, true, false, false, true);
				}
			}
			if (unk_0x18A47D074708FD68(Local_55.f_4))
			{
				if (unk_0x18A47D074708FD68(Local_55.f_18) && unk_0xB346476EF1A64897(unk_0xD8515F5FEA14CB3F(Local_55.f_4)))
				{
					iVar4 = unk_0xD8515F5FEA14CB3F(Local_55.f_18);
				}
				else
				{
					iVar4 = unk_0xD8515F5FEA14CB3F(Local_55.f_4);
				}
			}
			if (unk_0x7239B21A38F536BA(iVar4))
			{
				if (!unk_0xA921AA820C25702F(iLocal_174, 16))
				{
					if (unk_0xE81AFC1BC4CC41CE(iVar4) >= 0.9f)
					{
						if (unk_0x75262FD12D0A1C84(Local_55.f_16) != -1)
						{
							unk_0xAD6B3148A78AE9B6(unk_0x75262FD12D0A1C84(Local_55.f_16), "Crate_Underwater", 1f);
						}
						unk_0x933D6A9EEC1BACD0(&iLocal_174, 16);
					}
				}
				else if (unk_0xE81AFC1BC4CC41CE(iVar4) < 0.9f)
				{
					if (unk_0x75262FD12D0A1C84(Local_55.f_16) != -1)
					{
						unk_0xAD6B3148A78AE9B6(unk_0x75262FD12D0A1C84(Local_55.f_16), "Crate_Underwater", 0f);
					}
					unk_0xE80492A9AC099A93(&iLocal_174, 16);
				}
			}
		}
	}
}

int func_70()
{
	int iVar0;
	
	if (unk_0x18A47D074708FD68(Local_55.f_18))
	{
		if (!unk_0x886E37EC497200B6(unk_0xD8515F5FEA14CB3F(Local_55.f_18)))
		{
			iVar0 = 1;
		}
		if (unk_0x8ABFB70C49CC43E2(unk_0xD8515F5FEA14CB3F(Local_55.f_18)))
		{
			iVar0 = 1;
		}
		if (unk_0xCFB0A0D8EDD145A3(unk_0xD8515F5FEA14CB3F(Local_55.f_18)))
		{
			iVar0 = 1;
		}
		if (func_71())
		{
			iVar0 = 1;
		}
		if (iVar0 == 1)
		{
			if (func_73(Local_55.f_18))
			{
				unk_0x5CEC1A84620E7D5B(unk_0xD8515F5FEA14CB3F(Local_55.f_18), false);
				return 1;
			}
		}
	}
	return 0;
}

int func_71()
{
	float fVar0;
	
	fVar0 = unk_0xD45DC2893621E1FE(unk_0xD8515F5FEA14CB3F(Local_55.f_5));
	if (fVar0 > 10f || fVar0 < -10f)
	{
		return 1;
	}
	fVar0 = unk_0x831E0242595560DF(unk_0xD8515F5FEA14CB3F(Local_55.f_5));
	if (fVar0 > 10f || fVar0 < -10f)
	{
		return 1;
	}
	return 0;
}

void func_72(var uParam0)
{
	int iVar0;
	
	if (unk_0x38CE16C96BD11344(*uParam0))
	{
		if (!unk_0x4D36070FE0215186(*uParam0))
		{
		}
	}
	if (unk_0x18A47D074708FD68(*uParam0))
	{
		iVar0 = unk_0xBFFEAB45A9A9094A(*uParam0);
		unk_0xAE3CBE5BF394C9C9(&iVar0);
	}
}

int func_73(int iParam0)
{
	if (unk_0x38CE16C96BD11344(iParam0))
	{
		unk_0xA670B3662FAFFBD0(iParam0);
		return unk_0x4D36070FE0215186(iParam0);
	}
	return 0;
}

void func_74()
{
	int iVar0;
	
	iVar0 = unk_0xCF3A965906452031(false);
	if (Local_55.f_13 != iVar0)
	{
		if (Local_55.f_13 > 0 || !unk_0x38CE16C96BD11344(Local_55.f_2))
		{
			if (Local_55.f_13 < iVar0 || func_82(Local_55.f_13, 0, 1))
			{
				unk_0x76B02E21ED27A469(Local_55.f_13);
			}
		}
	}
	iVar0 = unk_0x1F13D5AE5CB17E17(false);
	if (Local_55.f_14 != iVar0)
	{
		if (Local_55.f_14 > 0 || !unk_0x38CE16C96BD11344(Local_55.f_3))
		{
			if (Local_55.f_14 < iVar0 || func_81(Local_55.f_14, 0, 1))
			{
				unk_0xB60FEBA45333D36F(Local_55.f_14);
			}
		}
	}
	iVar0 = unk_0xAA81B5F10BC43AC2(false);
	if (Local_55.f_15 != iVar0)
	{
		if (Local_55.f_15 < iVar0 || func_75(Local_55.f_15, 0, 1))
		{
			unk_0x4E5C93BD0C32FBF8(Local_55.f_15);
		}
	}
}

int func_75(int iParam0, bool bParam1, bool bParam2)
{
	return func_76(2, iParam0, 1, bParam1, bParam2);
}

int func_76(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xA921AA820C25702F(Global_1334840, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_80(iParam0) - func_79(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_79(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_80(iParam0) - func_78(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_79(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_80(iParam0) - func_79(iParam0, 1));
		}
		if (!bParam4 && Global_1582048[unk_0x4F8644AF03D0E0D6() /*324*/] != 3)
		{
			iVar1 = (iVar1 - func_77(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_77(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_78(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1334840.f_1;
			break;
		
		case 1:
			return Global_1334840.f_2;
			break;
		
		case 2:
			return Global_1334840.f_3;
			break;
	}
	return 0;
}

int func_79(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x4F8644AF03D0E0D6();
	switch (iParam0)
	{
		case 0:
			if (!unk_0x2910669969E9535E())
			{
				return Global_2413868[iVar0 /*253*/].f_206;
			}
			else
			{
				return unk_0x1F13D5AE5CB17E17(!bParam1);
			}
			break;
		
		case 1:
			if (!unk_0x2910669969E9535E())
			{
				return Global_2413868[iVar0 /*253*/].f_207;
			}
			else
			{
				return unk_0xCF3A965906452031(!bParam1);
			}
			break;
		
		case 2:
			if (!unk_0x2910669969E9535E())
			{
				return Global_2413868[iVar0 /*253*/].f_208;
			}
			else
			{
				return unk_0xAA81B5F10BC43AC2(!bParam1);
			}
			break;
	}
	return 0;
}

int func_80(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1334848;
			break;
		
		case 1:
			return Global_1334849;
			break;
		
		case 2:
			return Global_1334850;
			break;
	}
	return 0;
}

int func_81(int iParam0, bool bParam1, bool bParam2)
{
	return func_76(0, iParam0, 1, bParam1, bParam2);
}

int func_82(int iParam0, bool bParam1, bool bParam2)
{
	return func_76(1, iParam0, 1, bParam1, bParam2);
}

void func_83()
{
	if (!unk_0xA921AA820C25702F(iLocal_174, 10))
	{
		if (func_4(Local_55.f_2))
		{
			unk_0xE8854A4326B9E12B(&iLocal_176);
			unk_0xE2A2AA2F659D77A7(0, unk_0x367B936610BA360C(Local_55.f_2), Local_55.f_6 + Vector(50f, 0f, 0f), 60f, 0, joaat("cuban800"), 262144, 15f, -1f);
			unk_0xE2A2AA2F659D77A7(0, unk_0x367B936610BA360C(Local_55.f_2), Local_55.f_9, 60f, 0, joaat("cuban800"), 262144, -1f, -1f);
			unk_0x39E72BC99E6360CB(iLocal_176);
			unk_0x933D6A9EEC1BACD0(&iLocal_174, 10);
		}
	}
}

int func_84()
{
	return Local_55.f_0;
}

int func_85()
{
	unk_0x963D27A58DF860AC(joaat("prop_box_ammo02a"));
	unk_0x963D27A58DF860AC(joaat("p_cargo_chute_s"));
	if ((unk_0x98A4EB5D89A0C952(joaat("prop_box_ammo02a")) && unk_0x98A4EB5D89A0C952(joaat("p_cargo_chute_s"))) && func_86())
	{
		return 1;
	}
	return 0;
}

int func_86()
{
	unk_0xD3BD40951412FEF6("P_cargo_chute_S");
	if (unk_0xD031A9162D01088C("P_cargo_chute_S"))
	{
		return 1;
	}
	return 0;
}

int func_87(int iParam0)
{
	return Local_77[iParam0 /*3*/];
}

int func_88()
{
	bool bVar0;
	
	func_95(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315872 == 0)
	{
		if (!unk_0x10FAB35428CCC9D7())
		{
			return 1;
		}
	}
	if (func_94())
	{
		return 1;
	}
	if (Global_2436713)
	{
		return 1;
	}
	if (func_93())
	{
		return 1;
	}
	if (func_92(157))
	{
		if (!func_91())
		{
			return 1;
		}
	}
	if (func_92(155))
	{
		return 1;
	}
	if (!unk_0x1077788E268557C2())
	{
		return 1;
	}
	if (func_89() != 0)
	{
		if (unk_0x2C83A9DA6BFFC4F9(func_89()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_89()
{
	switch (func_90())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_90()
{
	return Global_24444;
}

bool func_91()
{
	return Global_2427935.f_570;
}

int func_92(int iParam0)
{
	if (unk_0x936E6168A9BCEDB5(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_93()
{
	return Global_2434971;
}

bool func_94()
{
	return Global_2427935.f_565;
}

void func_95(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x5F92A689A06620AA(1))
	{
		iVar1 = unk_0xD8F66A3A60C62153(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x2902843FCD2B2D79(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 305:
					func_96(iVar0);
					break;
				
				case 2:
					unk_0x2902843FCD2B2D79(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 53)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_96(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (unk_0x2902843FCD2B2D79(1, iParam0, &Var0, 3))
	{
		if (func_6(Var0.f_1, 1, 1))
		{
			iVar3 = unk_0x43A66C31C68491C0(Var0.f_1);
			if (unk_0x7239B21A38F536BA(iVar3))
			{
				if (unk_0x997ABD671D25CA0B(iVar3, false))
				{
					iVar4 = unk_0x9A9112A0FE9A4713(iVar3, false);
					if (unk_0x46E571A0E20D01F1(iVar4, Var0.f_2) && unk_0x2910669969E9535E())
					{
						if (func_97(iVar4, &bVar5))
						{
							unk_0xA711568EEDB43069(iVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x629BFA74418D6239(&iVar4);
						}
					}
				}
			}
		}
	}
}

int func_97(int iParam0, var uParam1)
{
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		if (!unk_0x0A7B270912999B3C(iParam0))
		{
			if (unk_0x0991549DE4D64762(iParam0))
			{
				unk_0xAD738C3085FE7E11(iParam0, false, true);
				*uParam1 = 1;
			}
		}
		if (unk_0xDDE6DF5AE89981D2(iParam0, false))
		{
			if (unk_0x01BF60A500E28887(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_98()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_99()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0xA6DB27D19ECBB7DA(iLocal_175))
	{
		unk_0x86A652570E5F25DD(&iLocal_175);
	}
	if (unk_0x83CD99A1E6061AB5())
	{
		iVar0 = 0;
		while (iVar0 < 250)
		{
			if (iVar1 == 0)
			{
				if (unk_0x18A47D074708FD68(Local_55.f_18))
				{
					if (unk_0x8ABFB70C49CC43E2(unk_0xD8515F5FEA14CB3F(Local_55.f_18)))
					{
						if (func_73(Local_55.f_18))
						{
							unk_0x5CEC1A84620E7D5B(unk_0xD8515F5FEA14CB3F(Local_55.f_18), false);
							iVar1 = 1;
						}
					}
					else
					{
						iVar1 = 1;
					}
				}
				else
				{
					iVar1 = 1;
				}
			}
			if (iVar2 == 0)
			{
				if (unk_0x18A47D074708FD68(Local_55.f_4))
				{
					if (unk_0xB346476EF1A64897(unk_0xD8515F5FEA14CB3F(Local_55.f_4)))
					{
						if (func_73(Local_55.f_4))
						{
							unk_0x961AC54BF0613F5D(unk_0xD8515F5FEA14CB3F(Local_55.f_4), true, true);
							iVar2 = 1;
						}
					}
					else
					{
						iVar2 = 1;
					}
				}
				else
				{
					iVar2 = 1;
				}
			}
			if (iVar3 == 0)
			{
				if (unk_0x18A47D074708FD68(Local_55.f_5))
				{
					if (func_73(Local_55.f_5))
					{
						func_72(&(Local_55.f_5));
						iVar3 = 1;
					}
				}
				else
				{
					iVar3 = 1;
				}
			}
			if ((iVar2 == 1 && iVar3 == 1) && iVar1 == 1)
			{
				iVar0 = 9999;
			}
			else
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iVar0++;
		}
		Local_55.f_0 = 4;
		func_103(func_105(1, 1), 8, func_104());
	}
	func_102();
	func_34();
	func_101();
	func_100();
}

void func_100()
{
	unk_0x1090044AD1DA76FA();
}

void func_101()
{
	if (unk_0xA921AA820C25702F(iLocal_174, 10))
	{
		unk_0x3841422E9C488D8C(&iLocal_176);
	}
}

void func_102()
{
	if (iLocal_177 != 0)
	{
		if (unk_0x74AFEF0D2E1E409B(iLocal_177))
		{
			unk_0x8F75998877616996(iLocal_177, false);
			iLocal_177 = 0;
		}
	}
}

void func_103(int iParam0, int iParam1, var uParam2)
{
	struct<4> Var0;
	
	Var0.f_0 = 292;
	Var0.f_1 = unk_0x4F8644AF03D0E0D6();
	Var0.f_3 = iParam1;
	Var0.f_2 = uParam2;
	if (!iParam0 == 0)
	{
		unk_0x5AE99C571D5BBE5D(1, &Var0, 6, iParam0);
	}
}

int func_104()
{
	return -1;
}

int func_105(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x41BD2A6B006AF756(iVar1);
		if (func_6(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x4F8644AF03D0E0D6() || iParam0)
			{
				if (bParam1)
				{
					unk_0x933D6A9EEC1BACD0(&uVar0, iVar1);
				}
				else if (!func_49(iVar2, 0))
				{
					unk_0x933D6A9EEC1BACD0(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_106(struct<20> Param0)
{
	int iVar0;
	
	func_110(func_111(Param0.f_0), Param0);
	unk_0xB60FEBA45333D36F(1);
	unk_0x76B02E21ED27A469(1);
	unk_0x4E5C93BD0C32FBF8(2);
	func_108(0, -1, 0);
	unk_0x3E9B2F01C50DF595(&Local_55, 22);
	unk_0x3364AA97340CA215(&Local_77, 97);
	if (!func_107())
	{
		return 0;
	}
	unk_0xAA391C728106F7AF(false);
	if (unk_0x83CD99A1E6061AB5())
	{
		Local_55.f_17 = unk_0x4F8644AF03D0E0D6();
		Local_55.f_6 = { unk_0x1899F328B0E12848(unk_0xD80958FC74E988A6(), 0f, (5f * 1.5f), 0f) };
		Local_55.f_13 = 1;
		Local_55.f_14 = 1;
		Local_55.f_15 = 3;
		Local_55.f_9 = { 0f, 0f, 500f };
		iVar0 = unk_0xD53343AA4FB7DD28(0, 3);
		if (iVar0 == 1)
		{
			Local_55.f_9 = 9000f;
		}
		else if (iVar0 == 2)
		{
			Local_55.f_9 = -9000f;
		}
		iVar0 = unk_0xD53343AA4FB7DD28(0, 3);
		if (iVar0 == 1)
		{
			Local_55.f_9.f_1 = 9000f;
		}
		else if (iVar0 == 2)
		{
			Local_55.f_9.f_1 = -9000f;
		}
		if (Local_55.f_9 == 0f && Local_55.f_9.f_1 == 0f)
		{
			Local_55.f_9 = { -9000f, 5000f, 500f };
		}
	}
	bLocal_178 = unk_0xADA24309FE08DACF();
	if (unk_0x10FAB35428CCC9D7())
	{
		Local_77[unk_0x57A3BDDAD8E5AA0A() /*3*/] = 0;
	}
	return 1;
}

int func_107()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x10FAB35428CCC9D7())
		{
			return 0;
		}
		if (unk_0x5D10B3795F3FC886())
		{
			return 1;
		}
		if (func_94())
		{
			return 0;
		}
		if (func_92(155))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	return 0;
}

int func_108(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x57D158647A6BFABF();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_100();
			}
			else
			{
				return 0;
			}
		}
		if (!func_109())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x10FAB35428CCC9D7())
				{
					if (!bParam2)
					{
						func_100();
					}
					else
					{
						return 0;
					}
				}
				if (func_94())
				{
					if (!bParam2)
					{
						func_100();
					}
					else
					{
						return 0;
					}
				}
				if (func_92(155))
				{
					if (!bParam2)
					{
						func_100();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xCA97246103B63917())
			{
				if (!bParam2)
				{
					func_100();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x57D158647A6BFABF();
	}
	if (iParam1 > -1)
	{
		Global_1312503 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x10FAB35428CCC9D7())
		{
			if (!bParam2)
			{
				func_100();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xCA97246103B63917())
	{
		if (!bParam2)
		{
			func_100();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_109()
{
	return Global_1315872;
}

void func_110(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x10FAB35428CCC9D7())
	{
		func_100();
	}
	unk_0x1CA59E306ECB80A5(iParam0, false, Param1.f_16);
}

int func_111(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 43:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 44:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 32;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 2;
		
		case 58:
			return 1;
		
		case 54:
			return 2;
		
		case 55:
			return 4;
		
		case 56:
			return 2;
		
		case 57:
			return 2;
		
		case 40:
			return 1;
		
		case 59:
			return 2;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			return 0;
		
		case 66:
			return 1;
		
		default:
	}
	return 0;
}

