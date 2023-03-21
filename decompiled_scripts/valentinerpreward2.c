#region Local Var
	char* sLocal_0 = NULL;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	struct<3> Local_20 = { 0, 0, 0 } ;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	struct<5> Local_28 = { 0, 0, 0, 0, 31 } ;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
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
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	int iLocal_64[3] = { 0, 0, 0 };
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	struct<15> Local_74 = { 1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, 0 } ;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	struct<3> Local_97 = { 0, 0, 0 } ;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	int iLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	int iLocal_107[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	struct<3> Local_147 = { -1, -1000, 0 } ;
	int iLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 4;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 10;
	var uLocal_171 = -1;
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
	var uLocal_190 = -1;
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
	var uLocal_209 = -1;
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
	var uLocal_228 = -1;
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
	var uLocal_247 = -1;
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
	var uLocal_266 = -1;
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
	var uLocal_285 = -1;
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
	var uLocal_304 = -1;
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
	var uLocal_323 = -1;
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
	var uLocal_342 = -1;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	int iLocal_361 = 0;
	int iLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	sLocal_0 = "1.53.03";
	iLocal_24 = -1;
	iLocal_25 = -1;
	iLocal_150 = -1;
	unk_0x3A396632EB359434(0);
	unk_0xDB4E5F36ED3505EE();
	if (iScriptParam_0 == iScriptParam_0)
	{
	}
	Global_1315828 = unk_0x856D5567211886A2(sLocal_0);
	iVar0 = unk_0x578C4EF320340AF7() + 10000;
	while (unk_0x578C4EF320340AF7() < iVar0)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_234();
	while (true)
	{
		if (func_233())
		{
			func_231();
		}
		if (unk_0x25DDB354A40FFCDB() && Global_2460478.f_3)
		{
			func_230();
			func_216();
			func_215();
			func_214();
			func_211();
			func_209();
			func_208();
			func_206();
			func_203();
			func_201();
			func_200();
			func_185();
			func_183();
			func_182();
			func_181();
			func_173();
			func_156();
			func_151();
			func_144();
			func_140();
			func_139();
			func_137();
			func_131();
			func_119();
			func_118();
			func_116();
			func_114();
			func_110();
			func_109();
			func_102();
			func_89();
			func_85();
			func_81();
			func_80();
			func_75();
			func_72();
			func_64();
			func_53();
			func_47();
			func_43();
			func_39();
			func_37();
			func_33();
			func_29();
			func_27();
			func_19();
			if (unk_0xF8EDFF98A9C94C74())
			{
			}
		}
		if (unk_0xFC559366953F62B3())
		{
			func_18();
			func_17();
			func_9();
			func_2();
		}
		else
		{
			func_1();
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0xD39E529EBE5DB04F();
}

void func_1()
{
	int iVar0;
	int iVar1;
	
	if (!Global_2451787.f_23)
	{
		if (iLocal_140)
		{
			iVar0 = 0;
			while (iVar0 <= 31)
			{
				iLocal_107[iVar0] = 0;
				iVar0++;
			}
			iLocal_140 = 0;
		}
		if (iLocal_68)
		{
			iVar1 = 0;
			while (iVar1 <= 2)
			{
				iLocal_64[iVar1] = 0;
				iVar1++;
			}
			iLocal_68 = 0;
		}
	}
}

void func_2()
{
	int iVar0;
	
	if (func_8(Global_4456448.f_82708) && func_7() == 26)
	{
		if (!iLocal_141)
		{
			iVar0 = func_3();
			if (iVar0 != -1)
			{
				Global_1704025.f_6 = Global_1706028[iVar0 /*53*/].f_5.f_6;
				Global_1704025.f_7 = Global_1706028[iVar0 /*53*/].f_5.f_7;
				Global_1704025.f_8 = Global_1706028[iVar0 /*53*/].f_5.f_8;
			}
			iLocal_141 = 1;
		}
	}
	else if (iLocal_141)
	{
		iLocal_141 = 0;
	}
}

var func_3()
{
	var uVar0;
	struct<13> Var1;
	
	Var1 = { func_4(&uVar0) };
	return unk_0xAAA938655BBB5286(&Var1);
}

struct<13> func_4(var uParam0)
{
	int iVar0;
	struct<13> Var1;
	struct<13> Var14;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_6(iVar0))
		{
			*uParam0 = 0;
			if (unk_0x166E920FB00B2DBB(unk_0x460153A63B9477BC()))
			{
				Var1 = { func_5(unk_0x460153A63B9477BC()) };
				if (unk_0xF6B8932480699645(&Var1, 13))
				{
					if (unk_0xF6B8932480699645(&(Global_2452679.f_1.f_845[iVar0 /*57*/]), 13))
					{
						if (unk_0xFFC66A35D4B5E605(&(Global_2452679.f_1.f_845[iVar0 /*57*/]), &Var1))
						{
							*uParam0 = 1;
						}
					}
				}
			}
			return Global_2452679.f_1.f_845[iVar0 /*57*/];
		}
		iVar0++;
	}
	return Var14;
}

struct<13> func_5(int iParam0)
{
	struct<13> Var0;
	
	unk_0x2BDD80E79441BD36(iParam0, &Var0, 13);
	return Var0;
}

bool func_6(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_2452679.f_1.f_845[iParam0 /*57*/].f_50, 0);
}

int func_7()
{
	return Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_196;
}

int func_8(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (Global_262145.f_29187[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_9()
{
	int iVar0;
	
	if (unk_0x7B70881748D166CD(joaat("fm_mission_controller_2020")) <= 0)
	{
		return;
	}
	if (!Global_2451787.f_23)
	{
		return;
	}
	if (Global_969017.f_1 != 6)
	{
		return;
	}
	if (Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11 != unk_0x460153A63B9477BC())
	{
		return;
	}
	iLocal_140 = 1;
	iVar0 = 0;
	while (iVar0 < unk_0x2AC1C68C7CCA90E5(1))
	{
		func_10(iVar0);
		iVar0++;
	}
}

void func_10(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<21> Var3;
	
	iVar0 = unk_0x39BE1B4CEB4DAEC8(1, iParam0);
	if (iVar0 == 174)
	{
		unk_0x477FAFFE21935947(1, iParam0, &iVar1, 2);
		switch (iVar1)
		{
			case 535012684:
				func_16(iParam0);
				break;
			
			case -1916698999:
				func_15(iParam0);
				break;
			
			case 1830665727:
				func_14(iParam0);
				break;
		}
	}
	else if (iVar0 == 154)
	{
		Var3.f_20 = 20;
		unk_0x477FAFFE21935947(1, iParam0, &Var3, 56);
		func_11(iLocal_107[Var3.f_16], 500);
	}
}

void func_11(var uParam0, int iParam1)
{
	struct<4> Var0;
	int iVar4;
	
	Var0.f_0 = 1830665727;
	Var0.f_1 = unk_0x460153A63B9477BC();
	Var0.f_2 = uParam0;
	Var0.f_3 = iParam1;
	iVar4 = func_12(1);
	if (!iVar4 == 0)
	{
		unk_0xB802750B43D4047C(1, &Var0, 4, iVar4);
	}
}

var func_12(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xF1110FE23C67293A(iVar1);
		if (func_13(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x460153A63B9477BC() || iParam0)
			{
				unk_0xBE20AB8238688965(&uVar0, iVar2);
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_13(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x166E920FB00B2DBB(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x5A228A6A51E757C8(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2440049.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_14(int iParam0)
{
	struct<3> Var0;
	
	if (!unk_0x477FAFFE21935947(1, iParam0, &Var0, 4))
	{
		return;
	}
	iLocal_107[Var0.f_1] = (iLocal_107[Var0.f_1] - Var0.f_2);
}

void func_15(int iParam0)
{
	struct<3> Var0;
	
	if (!unk_0x477FAFFE21935947(1, iParam0, &Var0, 4))
	{
		return;
	}
	iLocal_107[Var0.f_1] = (iLocal_107[Var0.f_1] + Var0.f_2);
}

void func_16(int iParam0)
{
	struct<3> Var0;
	
	if (!unk_0x477FAFFE21935947(1, iParam0, &Var0, 8))
	{
		return;
	}
	iLocal_107[Var0.f_1] = (iLocal_107[Var0.f_1] + Var0.f_2);
}

void func_17()
{
	if (!Global_2451787.f_23)
	{
		return;
	}
	if (Global_2452679.f_6238)
	{
		return;
	}
	if (Global_2452679.f_6634.f_13.f_1 > 0)
	{
		Global_2452679.f_6238 = 1;
	}
}

void func_18()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= 79)
	{
		if (unk_0xCE990E643CD9D0E5(Global_4718592.f_70220[iVar0 /*636*/].f_296, 22))
		{
			iVar1 = Global_969055.f_152[iVar0];
			if (unk_0x5AEB5DDFFAD43CA5(iVar1))
			{
				unk_0xD2459066EA58CE43(&(iLocal_64[(iVar0 / 32)]), (iVar0 % 32));
			}
			else if (!unk_0xAA5B806352173DEA(iVar1))
			{
				unk_0xD2459066EA58CE43(&(iLocal_64[(iVar0 / 32)]), (iVar0 % 32));
			}
			else if (unk_0xCE990E643CD9D0E5(iLocal_64[(iVar0 / 32)], (iVar0 % 32)))
			{
			}
			else
			{
				unk_0x694113444F21E39F(iVar1, 245, 1);
				unk_0xBE20AB8238688965(&(iLocal_64[(iVar0 / 32)]), (iVar0 % 32));
				iLocal_68 = 1;
			}
		}
		iVar0++;
	}
}

void func_19()
{
	if (func_13(unk_0x460153A63B9477BC(), 0, 1))
	{
		if (func_26(Global_1683921.f_4766) && func_25(Global_1683921.f_4766))
		{
			if (unk_0x7B70881748D166CD(Global_1683921.f_4766) <= 0)
			{
				if (!func_24(&uLocal_363))
				{
					func_23(&uLocal_363, 0, 0);
				}
				else if (func_22(&uLocal_363, 30000, 0))
				{
					func_21();
					func_20(&uLocal_363);
				}
			}
			else if (func_24(&uLocal_363))
			{
				func_20(&uLocal_363);
			}
		}
		else if (func_24(&uLocal_363))
		{
			func_20(&uLocal_363);
		}
	}
	else if (func_24(&uLocal_363))
	{
		func_20(&uLocal_363);
	}
}

void func_20(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_21()
{
	Global_1683921.f_4766.f_2 = 0;
	Global_1683921.f_4766 = -1;
	Global_1683921.f_4766.f_1 = -1000;
}

int func_22(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_23(uParam0, bParam2, 0);
	if (unk_0x25DDB354A40FFCDB() && !bParam2)
	{
		if (unk_0x44F29CF6A0675F4F(unk_0x624736CA66E14161(unk_0x6CAAB7E78B5D978A(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x44F29CF6A0675F4F(unk_0x624736CA66E14161(unk_0x578C4EF320340AF7(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_23(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x25DDB354A40FFCDB() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x6CAAB7E78B5D978A();
			}
			else
			{
				*uParam0 = unk_0x29B9AF1CB5B8175D();
			}
		}
		else
		{
			*uParam0 = unk_0x578C4EF320340AF7();
		}
		uParam0->f_1 = 1;
	}
}

bool func_24(var uParam0)
{
	return uParam0->f_1;
}

int func_25(int iParam0)
{
	switch (iParam0)
	{
		case joaat("business_battles"):
		case joaat("fm_content_drug_vehicle"):
		case joaat("fm_content_business_battles"):
		case joaat("fm_content_movie_props"):
			return 1;
			break;
	}
	return 0;
}

int func_26(struct<2> Param0)
{
	if (Param0.f_0 == -1 || Param0.f_1 == -1000)
	{
		return 0;
	}
	return 1;
}

void func_27()
{
	if (func_13(unk_0x460153A63B9477BC(), 1, 1))
	{
		if (func_28(Global_2540384.f_324))
		{
			if (!iLocal_361)
			{
				if (unk_0xAA5B806352173DEA(Global_2540384.f_324))
				{
					unk_0x52090984B5C8A3E4(Global_2540384.f_324, 0, 1, 0, 0, 0, 0, 0, 0);
					iLocal_361 = 1;
				}
				else
				{
					unk_0xDE298EE8EAAC0776(Global_2540384.f_324);
				}
			}
		}
		else if (iLocal_361)
		{
			iLocal_361 = 0;
		}
	}
}

int func_28(int iParam0)
{
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		if (!unk_0xA59F96B50B97E63C(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_29()
{
	if (unk_0x460153A63B9477BC() == func_32())
	{
		return;
	}
	if (func_30(unk_0x460153A63B9477BC()) && unk_0xCE990E643CD9D0E5(Global_99007.f_1364[45], 6))
	{
		if (unk_0xCE990E643CD9D0E5(Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_200, 22))
		{
			Global_262145.f_25208 = 1;
			iLocal_168 = 1;
		}
	}
	else if (!func_30(unk_0x460153A63B9477BC()))
	{
		if (iLocal_168)
		{
			unk_0xD2459066EA58CE43(&(Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_200), 22);
			Global_262145.f_25208 = 0;
			iLocal_168 = 0;
		}
	}
}

int func_30(int iParam0)
{
	if (iParam0 != func_32())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_31(Global_2425869[iParam0 /*443*/].f_314.f_6) == 13;
			}
		}
	}
	return 0;
}

int func_31(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
	}
	return -1;
}

int func_32()
{
	return -1;
}

void func_33()
{
	if (((unk_0x460153A63B9477BC() != func_32() && unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_123, 31)) && func_36()) && func_35(11))
	{
		func_34(11);
	}
}

void func_34(int iParam0)
{
	if (iParam0 < 32)
	{
		if (unk_0xCE990E643CD9D0E5(Global_2440049.f_502.f_1, iParam0))
		{
			unk_0xD2459066EA58CE43(&(Global_2440049.f_502.f_1), iParam0);
		}
	}
	else if (unk_0xCE990E643CD9D0E5(Global_2440049.f_502.f_2, (iParam0 - 32)))
	{
		unk_0xD2459066EA58CE43(&(Global_2440049.f_502.f_2), (iParam0 - 32));
	}
}

bool func_35(int iParam0)
{
	if (iParam0 < 32)
	{
		return unk_0xCE990E643CD9D0E5(Global_2440049.f_502.f_1, iParam0);
	}
	return unk_0xCE990E643CD9D0E5(Global_2440049.f_502.f_2, (iParam0 - 32));
}

int func_36()
{
	if (func_35(2) || func_35(1))
	{
		return 1;
	}
	return 0;
}

void func_37()
{
	if (!func_38() && Global_2440049.f_3858)
	{
		if (!iLocal_26)
		{
			iLocal_26 = 1;
			Global_1689674 = 1;
			Global_1689673 = 1;
		}
	}
	else if (iLocal_26)
	{
		iLocal_26 = 0;
		Global_1689674 = 0;
		Global_1689673 = 0;
	}
}

bool func_38()
{
	return Global_1678288.f_482;
}

void func_39()
{
	if (unk_0x460153A63B9477BC() != func_32() && func_41(unk_0x460153A63B9477BC()))
	{
		if (unk_0xAE06B9E39EBDE049(Global_2540384.f_303))
		{
			func_40(1);
		}
	}
	if (unk_0xF7DE07F319727299(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_74))
	{
		if (unk_0x272784C60C397DB6(5017.422f, -5130.448f, 2.19928f, unk_0x3E4D3CCC220BDFB1(unk_0x770D3B2B4702434A(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_74), 1), 1) < 1500f)
		{
			if (Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_59 != 3)
			{
				Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_59 = 3;
			}
		}
	}
}

void func_40(int iParam0)
{
	if (unk_0xAE06B9E39EBDE049(Global_2540384.f_303))
	{
		Global_2540384.f_5979 = 1;
		Global_2540384.f_5980 = iParam0;
	}
}

bool func_41(int iParam0)
{
	return func_42(&(Global_2425869[iParam0 /*443*/].f_429), 0);
}

bool func_42(var uParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(*uParam0, iParam1);
}

void func_43()
{
	var uVar0;
	
	if ((func_28(unk_0x9B0761B4C3EB8BC7()) && unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0)) && func_46(unk_0x9B0761B4C3EB8BC7(), 0) == -1)
	{
		if (!iLocal_167)
		{
			if ((!func_45(unk_0x460153A63B9477BC()) && !func_44(unk_0x460153A63B9477BC())) && unk_0x4DC4117F94CD5B84(unk_0x460153A63B9477BC()))
			{
				uVar0 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0);
				if ((unk_0xAE06B9E39EBDE049(uVar0) && unk_0x80FF6C016CDB0FAF(iVar0, 0)) && unk_0x68AEFA37A65085FD(iVar0, joaat("seasparrow2")))
				{
					if (unk_0xAA5B806352173DEA(iVar0))
					{
						unk_0x0312E5501F93E5AB(iVar0, 0);
						iLocal_167 = 1;
					}
					else
					{
						unk_0xDE298EE8EAAC0776(iVar0);
					}
				}
			}
		}
	}
	else
	{
		iLocal_167 = 0;
	}
}

int func_44(int iParam0)
{
	if (iParam0 != func_32())
	{
		if (func_13(iParam0, 1, 1))
		{
			return Global_2425869[iParam0 /*443*/].f_314.f_6 != -1;
		}
		else if ((Global_1312896 && iParam0 == unk_0x460153A63B9477BC()) && func_13(iParam0, 1, 0))
		{
			return Global_2425869[iParam0 /*443*/].f_314.f_6 != -1;
		}
	}
	return 0;
}

int func_45(int iParam0)
{
	if (iParam0 != func_32() && func_13(iParam0, 1, 1))
	{
		return unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_314, 4);
	}
	return 0;
}

int func_46(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		if (unk_0x47DBF174A0CB9D55(iParam0, iParam1))
		{
			uVar0 = unk_0xA5D5B1042E8F47BD(iParam0, iParam1);
			if (unk_0xAE06B9E39EBDE049(uVar0))
			{
				iVar1 = unk_0x112A81273D7187A5(unk_0x36FE6D3220816ADA(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0xB064AF9925F5537B(iVar0, iVar3, 0))
					{
						if (unk_0x10D3F7E169A49C44(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

void func_47()
{
	if (func_51() || func_49())
	{
		func_48();
	}
}

void func_48()
{
	Global_2452679.f_4312.f_700 = 1;
}

bool func_49()
{
	return func_50() == 1;
}

int func_50()
{
	return Global_1704006;
}

var func_51()
{
	return func_52(unk_0x460153A63B9477BC());
}

var func_52(int iParam0)
{
	return Global_2425869[iParam0 /*443*/].f_431.f_1;
}

void func_53()
{
	var uVar0;
	int iVar1;
	
	if (!func_63(unk_0x460153A63B9477BC()))
	{
		uVar0 = func_59();
		iVar1 = func_56(uVar0, 1, 0);
		if (unk_0xAE06B9E39EBDE049(uVar0))
		{
			if ((!unk_0xFEB73FC16397E7DC(iVar0) && unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0)) && func_46(unk_0x9B0761B4C3EB8BC7(), 0) == -1)
			{
				if (!iLocal_163)
				{
					iLocal_163 = 1;
				}
				unk_0xBE20AB8238688965(&Global_1678288, 19);
				if (!unk_0xCE990E643CD9D0E5(Global_1678288.f_1, 3) && func_54(iVar1))
				{
					unk_0xBE20AB8238688965(&(Global_1678288.f_1), 3);
				}
			}
			else if (iLocal_163)
			{
				unk_0xD2459066EA58CE43(&Global_1678288, 19);
				iLocal_163 = 0;
			}
		}
		else if (iLocal_163)
		{
			unk_0xD2459066EA58CE43(&Global_1678288, 19);
			iLocal_163 = 0;
		}
	}
}

int func_54(int iParam0)
{
	if (func_13(unk_0x460153A63B9477BC(), 1, 1))
	{
		if (func_55(unk_0x460153A63B9477BC(), -1))
		{
			if (unk_0x460153A63B9477BC() != iParam0)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_55(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_13(iParam0, 1, 1))
	{
		if (unk_0x47DBF174A0CB9D55(unk_0x1FA7B77001D60F9D(iParam0), 0))
		{
			iVar0 = unk_0xA5D5B1042E8F47BD(unk_0x1FA7B77001D60F9D(iParam0), 0);
			if (unk_0x80FF6C016CDB0FAF(iVar0, 0))
			{
				if (unk_0x9B0761B4C3EB8BC7() == unk_0x10D3F7E169A49C44(iVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_56(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (!func_58(uParam0, 1))
	{
		return func_32();
	}
	if (unk_0xAE06B9E39EBDE049(uParam0))
	{
		iVar0 = unk_0x8C0800114C2864BE(iParam0, "Player_Truck");
		return func_57(iVar0, 0, bParam1, iParam2);
	}
	return func_32();
}

int func_57(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (bParam2)
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			iVar0 = unk_0xF1110FE23C67293A(iVar1);
			if (func_13(iVar0, 0, 1) || (iParam1 && unk_0xB64E1AAF98811C56(iVar0)))
			{
				if (iParam0 == unk_0x69FCAB6112C0ABA7(iVar0))
				{
					return iVar0;
				}
			}
			iVar1++;
		}
	}
	else if (func_13(iParam3, 0, 1) || (iParam1 && unk_0xB64E1AAF98811C56(iParam3)))
	{
		if (iParam0 == unk_0x69FCAB6112C0ABA7(iParam3))
		{
			return iParam3;
		}
	}
	return func_32();
}

int func_58(int iParam0, bool bParam1)
{
	if (Global_76833)
	{
		if (unk_0xAE06B9E39EBDE049(uParam0) && (!bParam1 || unk_0x80FF6C016CDB0FAF(iParam0, 0)))
		{
			if (unk_0x871819940BD2E434(iParam0, "Player_Truck"))
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_59()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_32();
	if (func_28(unk_0x9B0761B4C3EB8BC7()) && unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		iVar1 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0);
		if (func_28(iVar1))
		{
			iVar2 = unk_0x10D3F7E169A49C44(iVar1, -1, 0);
			if (func_28(iVar2) && unk_0xD0390A93AF3907B8(iVar2))
			{
				iVar0 = unk_0xE4400E48E081F17A(iVar2);
			}
		}
	}
	if (iVar0 == func_32() && func_61(unk_0x460153A63B9477BC(), 0))
	{
		iVar0 = func_60();
	}
	if (iVar0 != func_32() && unk_0x460153A63B9477BC() != iVar0)
	{
		return Global_2440049.f_673[iVar0 /*3*/][1];
	}
	return Global_2540384.f_304[1];
}

int func_60()
{
	return Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11;
}

bool func_61(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_62(iParam0))
		{
			return 0;
		}
	}
	return Global_1630317[iParam0 /*595*/].f_11 != func_32();
}

int func_62(int iParam0)
{
	if (iParam0 != func_32())
	{
		if (Global_1630317[iParam0 /*595*/].f_11 != func_32())
		{
			return Global_1630317[iParam0 /*595*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_63(int iParam0)
{
	if (iParam0 != func_32())
	{
		return unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_314, 6);
	}
	return 0;
}

void func_64()
{
	if (!iLocal_160)
	{
		iLocal_161 = func_32();
		iLocal_160 = 1;
	}
	if (unk_0x1B2EFC1EEC84CBE3("AM_MP_SMPL_INTERIOR_EXT", 147, 0, 0))
	{
		func_67();
		if (iLocal_161 != func_32())
		{
			switch (iLocal_162)
			{
				case 0:
					if ((((((func_45(unk_0x460153A63B9477BC()) && func_66(unk_0x460153A63B9477BC()) == 147) && !Global_1678288.f_3057) && !func_65()) && !unk_0xCE990E643CD9D0E5(Global_1678288, 27)) && !Global_2405074.f_2673) && iLocal_161 == unk_0x460153A63B9477BC())
					{
						Global_1678288.f_469 = 0;
						unk_0xBE20AB8238688965(&(Global_1678288.f_469), 29);
						iLocal_162 = 1;
					}
					break;
				
				case 1:
					if (!func_45(unk_0x460153A63B9477BC()))
					{
						iLocal_162 = 2;
					}
					else if (!func_44(unk_0x460153A63B9477BC()) && !func_45(unk_0x460153A63B9477BC()))
					{
						iLocal_162 = 0;
					}
					else if (!unk_0xCE990E643CD9D0E5(Global_1678288.f_469, 29))
					{
						if (Global_1678288.f_469 == 0)
						{
							unk_0x694113444F21E39F(unk_0x9B0761B4C3EB8BC7(), 184, 1);
							unk_0xBE20AB8238688965(&(Global_1678288.f_469), 0);
							unk_0xBE20AB8238688965(&(Global_1678288.f_469), 29);
							Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_314.f_9 = unk_0x460153A63B9477BC();
						}
					}
					break;
				
				case 2:
					if (!func_45(unk_0x460153A63B9477BC()) && func_66(unk_0x460153A63B9477BC()) == 147)
					{
						iLocal_162 = 0;
					}
					else if (!func_44(unk_0x460153A63B9477BC()))
					{
						iLocal_162 = 0;
					}
					break;
			}
		}
		else if (iLocal_161 != func_32())
		{
			iLocal_161 = func_32();
			iLocal_162 = 0;
		}
	}
	else if (iLocal_161 != func_32())
	{
		iLocal_161 = func_32();
		iLocal_162 = 0;
	}
}

bool func_65()
{
	return unk_0xCE990E643CD9D0E5(Global_1678288, 6);
}

int func_66(int iParam0)
{
	if (iParam0 != func_32() && func_13(iParam0, 1, 1))
	{
		return Global_2425869[iParam0 /*443*/].f_314.f_15;
	}
	return -1;
}

void func_67()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_71();
	if (func_28(iVar0))
	{
		iVar1 = func_68(iVar0);
		if (iLocal_161 != iVar1 && iVar1 != func_32())
		{
			iLocal_161 = iVar1;
		}
	}
}

int func_68(int iParam0)
{
	if (iParam0 != 0)
	{
		return func_69(iParam0, 1, 0);
	}
	return func_69(func_71(), 1, 0);
}

int func_69(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (!func_70(iParam0, 1))
	{
		return func_32();
	}
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		iVar0 = unk_0x8C0800114C2864BE(iParam0, "Player_Submarine");
		return func_57(iVar0, 0, bParam1, iParam2);
	}
	return func_32();
}

int func_70(int iParam0, bool bParam1)
{
	if (Global_76833)
	{
		if (unk_0xAE06B9E39EBDE049(uParam0) && (!bParam1 || unk_0x80FF6C016CDB0FAF(iParam0, 0)))
		{
			if (unk_0x871819940BD2E434(iParam0, "Player_Submarine"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_71()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_32();
	if (func_28(unk_0x9B0761B4C3EB8BC7()) && unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		iVar1 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0);
		if (func_28(iVar1))
		{
			iVar2 = unk_0x10D3F7E169A49C44(iVar1, -1, 0);
			if (func_28(iVar2) && unk_0xD0390A93AF3907B8(iVar2))
			{
				iVar0 = unk_0xE4400E48E081F17A(iVar2);
			}
		}
	}
	if (iVar0 == func_32() && func_61(unk_0x460153A63B9477BC(), 0))
	{
		iVar0 = func_60();
	}
	if (iVar0 != func_32() && unk_0x460153A63B9477BC() != iVar0)
	{
		return Global_2440049.f_836[iVar0];
	}
	return Global_2540384.f_324;
}

void func_72()
{
	if (unk_0xCE990E643CD9D0E5(Global_1678288.f_7, 11))
	{
		if (!func_73())
		{
			unk_0xD2459066EA58CE43(&(Global_1678288.f_7), 11);
		}
	}
}

int func_73()
{
	if (func_74() == 0)
	{
		return 1;
	}
	return 0;
}

int func_74()
{
	return Global_1312485.f_18;
}

void func_75()
{
	if (func_79(unk_0x460153A63B9477BC()))
	{
		if (func_76())
		{
			Global_262145.f_24170 = 1;
			Global_262145.f_24171 = 1;
			if (!iLocal_159)
			{
				iLocal_159 = 1;
			}
		}
		else if (iLocal_159)
		{
			Global_262145.f_24170 = 0;
			Global_262145.f_24171 = 0;
			iLocal_159 = 0;
		}
	}
	else if (iLocal_159)
	{
		Global_262145.f_24170 = 0;
		Global_262145.f_24171 = 0;
		iLocal_159 = 0;
	}
}

int func_76()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0xF1110FE23C67293A(iVar0);
		if (func_13(iVar1, 1, 1) && !unk_0xB133126C8E12F9C7(iVar1))
		{
			if (iVar1 != unk_0x460153A63B9477BC())
			{
				if ((((unk_0x9934470AA0A08B57(unk_0x1FA7B77001D60F9D(iVar1), "anim@scripted@submarine@ig28_submarine_turret_control@male@", "enter_left", 3) || unk_0x9934470AA0A08B57(unk_0x1FA7B77001D60F9D(iVar1), "anim@scripted@submarine@ig28_submarine_turret_control@heeled@", "enter_left", 3)) || unk_0x9934470AA0A08B57(unk_0x1FA7B77001D60F9D(iVar1), "anim@scripted@submarine@ig28_submarine_turret_control@male@", "enter", 3)) || unk_0x9934470AA0A08B57(unk_0x1FA7B77001D60F9D(iVar1), "anim@scripted@submarine@ig28_submarine_turret_control@heeled@", "enter", 3)) || func_77(unk_0x1FA7B77001D60F9D(iVar1), 2106541073))
				{
					fVar2 = unk_0x272784C60C397DB6(unk_0x3E4D3CCC220BDFB1(unk_0x1FA7B77001D60F9D(iVar1), 1), unk_0x3E4D3CCC220BDFB1(unk_0x1FA7B77001D60F9D(unk_0x460153A63B9477BC()), 1), 1);
					if (fVar2 < 2f)
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

int func_77(int iParam0, int iParam1)
{
	if (func_78(iParam0))
	{
		if (unk_0x16BC17A8EDC701A2(iParam0, iParam1) == 1 || unk_0x16BC17A8EDC701A2(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_78(int iParam0)
{
	if (func_28(iParam0))
	{
		if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_79(int iParam0)
{
	if (iParam0 != func_32())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1 && Global_2425869[iParam0 /*443*/].f_314.f_9 != func_32())
			{
				return func_31(Global_2425869[iParam0 /*443*/].f_314.f_6) == 20;
			}
		}
	}
	return 0;
}

void func_80()
{
	if (unk_0xCE990E643CD9D0E5(Global_2516817.f_1, 0) && (Global_2516817.f_3 == 1 || Global_2516817.f_3 == 2))
	{
		if (unk_0x87F0CB19476706C3())
		{
			unk_0x1D40553EDD51A1B8(0);
		}
	}
}

void func_81()
{
	var uVar0;
	
	if (func_28(unk_0x9B0761B4C3EB8BC7()))
	{
		if (func_79(unk_0x460153A63B9477BC()) && unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			if (func_46(unk_0x9B0761B4C3EB8BC7(), 0) == -1)
			{
				uVar0 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0);
				if (func_84(uVar0))
				{
					if (func_82())
					{
						Global_1689712 = 0;
					}
					else
					{
						Global_1689712 = 1;
					}
				}
			}
		}
	}
}

int func_82()
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	var uVar10;
	
	iVar0 = func_83();
	if (func_28(iVar0))
	{
		Var1 = { unk_0x3E4D3CCC220BDFB1(iVar0, 1) };
		Var4 = { 0f, 0f, -8f };
		Var7 = { unk_0x7EC595B99EA7C4B1(iVar0, Var4) };
		unk_0xC11B9FC002323550(Var1);
		if (unk_0xE5CC8E2D904E42CE(Var7, &uVar10, 0, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_83()
{
	if (Global_1590528 != func_32())
	{
		if (unk_0xAE06B9E39EBDE049(Global_1370325))
		{
			return Global_1370325;
		}
		if (unk_0xAE06B9E39EBDE049(Global_1694879[Global_1590528]))
		{
			return Global_1694879[Global_1590528];
		}
	}
	return -1;
}

int func_84(int iParam0)
{
	if (unk_0xAE06B9E39EBDE049(uParam0))
	{
		switch (unk_0x36FE6D3220816ADA(iParam0))
		{
			case joaat("avisa"):
			case joaat("toreador"):
			case joaat("stromberg"):
				return 1;
				break;
			}
	}
	return 0;
}

void func_85()
{
	if (unk_0x460153A63B9477BC() > -1)
	{
		if (Global_1649358[unk_0x460153A63B9477BC() /*93*/].f_29.f_3 != 0)
		{
			if ((Global_1683921.f_4766.f_2 != 0 && func_88(unk_0x460153A63B9477BC())) && !func_87(Global_1683921.f_4766.f_2))
			{
				if (Local_147.f_2 == 0)
				{
					Local_147 = { Global_1683921.f_4766 };
				}
				else if (Local_147.f_2 != Global_1683921.f_4766.f_2)
				{
					Local_147 = { Global_1683921.f_4766 };
				}
			}
			else if (Local_147.f_2 != 0)
			{
				Local_147 = { func_86() };
			}
		}
		else if (Local_147.f_2 != 0)
		{
			if (Global_1683921.f_4766.f_2 == 0)
			{
				Global_1683921.f_4766 = { Local_147 };
			}
			Local_147 = { func_86() };
		}
	}
	else
	{
		Local_147 = { func_86() };
	}
}

Vector3 func_86()
{
	struct<3> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1000;
	return Var0;
}

int func_87(int iParam0)
{
	switch (iParam0)
	{
		case 737:
		case 738:
		case 739:
		case 740:
		case 741:
			return 1;
			break;
	}
	return 0;
}

int func_88(int iParam0)
{
	if (iParam0 != func_32() && func_13(iParam0, 0, 1))
	{
		return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_552, 0);
	}
	return 0;
}

void func_89()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 1;
	if (func_62(unk_0x460153A63B9477BC()))
	{
		if (func_24(&uLocal_143) && !func_22(&uLocal_143, 10000, 0))
		{
			return;
		}
		if (!func_101(unk_0x460153A63B9477BC(), 1) || !func_99(unk_0x460153A63B9477BC()))
		{
			iVar1 = 0;
			while (iVar1 < 10)
			{
				if (Global_2419386.f_199.f_674[iVar1 /*57*/] == unk_0x460153A63B9477BC())
				{
					iVar2 = 0;
					while (iVar2 < 18)
					{
						if (Global_2419386.f_199.f_674[iVar1 /*57*/].f_1[iVar2] == 755 || Global_2419386.f_199.f_674[iVar1 /*57*/].f_1[iVar2] == 756)
						{
							if (!func_26(Global_2419386.f_199.f_674[iVar1 /*57*/].f_20[iVar2 /*2*/]) && !func_98(0))
							{
								if (func_24(&uLocal_145) && func_22(&uLocal_145, 15000, 0))
								{
									func_91();
									func_90(&uLocal_143, 0, 0);
								}
								else if (!func_24(&uLocal_145))
								{
									func_23(&uLocal_145, 0, 0);
								}
								iVar0 = 0;
							}
						}
						iVar2++;
					}
				}
				else
				{
					iVar1++;
				}
			}
		}
	}
	if (iVar0 && func_24(&uLocal_145))
	{
		func_20(&uLocal_145);
	}
}

void func_90(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x25DDB354A40FFCDB() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x6CAAB7E78B5D978A();
		}
		else
		{
			*uParam0 = unk_0x29B9AF1CB5B8175D();
		}
	}
	else
	{
		*uParam0 = unk_0x578C4EF320340AF7();
	}
	uParam0->f_1 = 1;
}

void func_91()
{
	struct<2> Var0;
	
	if (func_97())
	{
		Var0 = -1;
		Var0.f_1 = -1000;
		func_92(0, Var0);
	}
}

void func_92(int iParam0, struct<2> Param1)
{
	struct<4> Var0;
	int iVar5;
	
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1000;
	Var0.f_0 = -1014199946;
	Var0.f_1 = unk_0x460153A63B9477BC();
	Var0.f_2 = iParam0;
	Var0.f_3 = { Param1 };
	iVar5 = func_93(1, 1);
	if (!iVar5 == 0)
	{
		unk_0xB802750B43D4047C(1, &Var0, 5, iVar5);
	}
}

var func_93(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xF1110FE23C67293A(iVar1);
		if (func_13(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x460153A63B9477BC() || iParam0)
			{
				if (bParam1)
				{
					unk_0xBE20AB8238688965(&uVar0, iVar1);
				}
				else if (!func_94(iVar2, 0))
				{
					unk_0xBE20AB8238688965(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_94(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x460153A63B9477BC())
	{
		bVar0 = func_95(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590682[iParam0 /*883*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x166E920FB00B2DBB(iParam0))
		{
			bVar0 = unk_0x6CC163E30ECE0790(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_95(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_96();
	}
	if (Global_1312876[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312757[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_96()
{
	return Global_1312763;
}

bool func_97()
{
	return func_62(unk_0x460153A63B9477BC());
}

int func_98(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19681.f_1 > 3)
		{
			if (unk_0xCE990E643CD9D0E5(Global_7551, 14))
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
	if (unk_0x7B70881748D166CD(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_19681.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_99(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_100(iParam0, 9);
	}
	return 0;
}

bool func_100(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_11.f_4, iParam1);
}

int func_101(int iParam0, int iParam1)
{
	if (Global_1630317[iParam0 /*595*/].f_11.f_33 != -1 || (iParam1 && Global_1630317[iParam0 /*595*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_102()
{
	int iVar0;
	var uVar1;
	int iVar2;
	struct<3> Var3;
	float fVar6;
	
	if (((func_28(unk_0x9B0761B4C3EB8BC7()) && func_108(unk_0x460153A63B9477BC()) == 256) && func_107(unk_0x460153A63B9477BC()) == 18) && func_106())
	{
		iVar0 = joaat("h4_prop_h4_card_hack_01a");
		uVar1 = unk_0x0E53022872AE0C0E(unk_0x9B0761B4C3EB8BC7(), iVar0);
		if (unk_0xAE06B9E39EBDE049(uVar1) && unk_0xAA5B806352173DEA(iVar1))
		{
			iVar2 = func_105();
			if (func_103(iVar2, &Var3, &fVar6))
			{
				Var3 = { Var3.f_0, Var3.f_1, (Var3.f_2 + 5f) };
				unk_0x1F8106DB8796859F(iVar1, 1, 1);
				unk_0x03D382CB0B44E2FC(iVar1, Var3, 1, 0, 0, 1);
				unk_0xE922BAA80E8F9324(iVar1, fVar6);
				unk_0x226D047B93B6FC57(iVar1);
			}
		}
	}
}

bool func_103(int iParam0, var uParam1, var uParam2)
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
		
		case 48:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 49:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 52:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 50:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 51:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !func_104(*uParam1, 0f, 0f, 0f, 0);
}

bool func_104(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

var func_105()
{
	return Global_99007.f_444;
}

bool func_106()
{
	return Global_99007.f_351 > 0;
}

int func_107(int iParam0)
{
	if (func_101(iParam0, 0))
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_181;
	}
	return -1;
}

int func_108(int iParam0)
{
	if (func_101(iParam0, 0))
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_33;
	}
	return -1;
}

void func_109()
{
	int iVar0;
	float fVar1;
	
	if (func_28(unk_0x9B0761B4C3EB8BC7()) && unk_0x94BF5C4EB0D40E9E(unk_0x9B0761B4C3EB8BC7()))
	{
		iVar0 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0);
		if (func_28(iVar0))
		{
			fVar1 = unk_0xF3A639BEE7AADF55(iVar0);
			if (fVar1 > 25f)
			{
				Global_2462286.f_301 = 1;
				iLocal_142 = 1;
			}
			else if (iLocal_142)
			{
				iLocal_142 = 0;
				Global_2462286.f_301 = 0;
			}
		}
		else if (iLocal_142)
		{
			iLocal_142 = 0;
			Global_2462286.f_301 = 0;
		}
	}
	else if (iLocal_142)
	{
		iLocal_142 = 0;
		Global_2462286.f_301 = 0;
	}
}

void func_110()
{
	if (func_113(105, -1) >= 20000000 && func_113(105, -1) < 200000000)
	{
		func_111(105, 200000000, -1);
	}
}

void func_111(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = Global_2589533[iParam0 /*3*/][func_112(iParam2)];
	unk_0x6000E4684CB4330B(iVar0, iParam1, 1);
}

int func_112(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_96();
		if (iVar1 > -1)
		{
			Global_2551544 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2551544 = 1;
		}
	}
	return iVar0;
}

int func_113(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2589533[iParam0 /*3*/][func_112(iParam1)];
	if (unk_0xD2F202166691EDB2(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_114()
{
	if (func_115(unk_0x460153A63B9477BC()))
	{
		if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			if (func_46(unk_0x9B0761B4C3EB8BC7(), 0) == -1)
			{
				if (unk_0x68AEFA37A65085FD(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0), joaat("alkonost")))
				{
					iLocal_104 = 1;
					func_20(&uLocal_105);
				}
			}
			else
			{
				iLocal_104 = 0;
			}
		}
		else if (iLocal_104)
		{
			if ((unk_0x03DB5C6AABF8DA46() || unk_0x5DA78AD6801A0523()) && !unk_0x4DC4117F94CD5B84(unk_0x460153A63B9477BC()))
			{
				if (func_22(&uLocal_105, 30000, 0))
				{
					unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), 1, 0);
					unk_0xFD45D90342D2A0CD(500);
					func_20(&uLocal_105);
				}
			}
			else
			{
				iLocal_104 = 0;
			}
		}
	}
	else
	{
		iLocal_104 = 0;
	}
}

int func_115(int iParam0)
{
	if (iParam0 != func_32())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_31(Global_2425869[iParam0 /*443*/].f_314.f_6) == 7;
			}
		}
	}
	return 0;
}

void func_116()
{
	if (unk_0xCE990E643CD9D0E5(Global_102381, 0))
	{
		if (!func_117())
		{
			if (!func_24(&uLocal_102))
			{
				func_23(&uLocal_102, 0, 0);
			}
			else if (func_22(&uLocal_102, 5000, 0))
			{
				unk_0xD2459066EA58CE43(&Global_102381, 0);
			}
		}
		else
		{
			func_20(&uLocal_102);
		}
	}
	else
	{
		func_20(&uLocal_102);
	}
}

bool func_117()
{
	return unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), 201.2196f, 5174.217f, -89.99727f, 198.8149f, 5175.969f, -87.49727f, 1.75f, 0, 1, 0);
}

void func_118()
{
	if ((!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()) && func_41(unk_0x460153A63B9477BC())) && unk_0x272784C60C397DB6(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1), 4726.769f, -5534.592f, 18.04668f, 1) < 8f)
	{
		unk_0x8342E6CB98CD545C(unk_0x9B0761B4C3EB8BC7(), 102, 1);
		unk_0x8342E6CB98CD545C(unk_0x9B0761B4C3EB8BC7(), 47, 1);
	}
}

void func_119()
{
	bool bVar0;
	
	if (((!unk_0xFC559366953F62B3() && !func_41(unk_0x460153A63B9477BC())) && !func_130(unk_0x460153A63B9477BC(), 25)) && !func_106())
	{
		switch (iLocal_3)
		{
			case joaat("kosatka"):
			case joaat("alkonost"):
			case joaat("seasparrow2"):
			case joaat("toreador"):
			case joaat("patrolboat"):
			case joaat("dinghy5"):
			case joaat("annihilator2"):
				bVar0 = true;
				if (!unk_0xCE990E643CD9D0E5(Global_2540384.f_4655, 28))
				{
					func_129(1);
					iLocal_100 = 1;
				}
				if (func_128() && !func_127())
				{
					if (!iLocal_101)
					{
						iLocal_101 = 1;
						func_120(10, 1, 1);
					}
				}
				break;
			}
	}
	if (!bVar0)
	{
		if (iLocal_100)
		{
			func_129(0);
			iLocal_100 = 0;
		}
		if (iLocal_101)
		{
			iLocal_101 = 0;
		}
	}
}

void func_120(int iParam0, int iParam1, bool bParam2)
{
	if (func_128())
	{
		if (iParam1 == 1)
		{
			if (Global_2540384.f_4458 == -1)
			{
				Global_2540384.f_4458 = Global_262145.f_26466;
			}
			func_90(&(Global_2540384.f_4456), 0, 0);
			if (bParam2)
			{
				if (Global_2540384.f_4461 == -1)
				{
					Global_2540384.f_4461 = Global_262145.f_26467;
				}
				func_90(&(Global_2540384.f_4459), 0, 0);
			}
			else
			{
				Global_1312436 = 0;
				Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_8 = 0;
				func_126(1);
			}
		}
		else
		{
			Global_1312436 = 0;
			Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_8 = 0;
			func_126(1);
		}
		if ((!unk_0xFC559366953F62B3() && !func_125()) && !func_121(unk_0x460153A63B9477BC()))
		{
			Global_968396 = 0;
		}
		unk_0x88B39313953E52DA(0, -1, -1, iParam0);
	}
}

int func_121(int iParam0)
{
	if (func_122(iParam0, 1, 0))
	{
		if (Global_1590682[iParam0 /*883*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_122(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_123(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590682[iParam0 /*883*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_123(int iParam0)
{
	return func_124(iParam0);
}

bool func_124(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_13.f_1, 0);
}

bool func_125()
{
	return Global_2451787.f_838;
}

void func_126(bool bParam0)
{
	if (unk_0x25DDB354A40FFCDB())
	{
		if (!func_128())
		{
			if (func_13(unk_0x460153A63B9477BC(), 1, 0))
			{
				unk_0x7542EFCD7D27E5D2(unk_0x9B0761B4C3EB8BC7(), 1);
				unk_0x694113444F21E39F(unk_0x9B0761B4C3EB8BC7(), 342, 0);
				unk_0x694113444F21E39F(unk_0x9B0761B4C3EB8BC7(), 122, 0);
			}
			unk_0x6C017D65D396CE15(unk_0x460153A63B9477BC(), 1f);
			unk_0x74803B5FA5C6AE45(0);
			unk_0x873FC7B9D84F77F0(1);
			if (Global_1312436.f_1 == 0 || Global_1312436.f_2 == 1)
			{
				Global_1312436.f_2 = 0;
				if (bParam0)
				{
					unk_0x6543AC06C231023E(0, 0);
				}
			}
		}
		else
		{
			if (func_13(unk_0x460153A63B9477BC(), 1, 1))
			{
				unk_0x7542EFCD7D27E5D2(unk_0x9B0761B4C3EB8BC7(), 0);
				unk_0x69C71C91F56D82B9(unk_0x9B0761B4C3EB8BC7(), joaat("weapon_unarmed"), 1);
				unk_0x694113444F21E39F(unk_0x9B0761B4C3EB8BC7(), 342, 1);
				unk_0x694113444F21E39F(unk_0x9B0761B4C3EB8BC7(), 122, 1);
				unk_0x6C017D65D396CE15(unk_0x460153A63B9477BC(), 0.5f);
				if (Global_1312436.f_1 == 0 || Global_1312436.f_2 == 1)
				{
					unk_0x6543AC06C231023E(1, 0);
				}
			}
			unk_0x74803B5FA5C6AE45(1);
			unk_0x873FC7B9D84F77F0(0);
		}
	}
}

bool func_127()
{
	return Global_1312436.f_1;
}

bool func_128()
{
	return Global_1312436;
}

void func_129(int iParam0)
{
	if (iParam0 == 1)
	{
		if (!unk_0xCE990E643CD9D0E5(Global_2540384.f_4655, 28))
		{
			unk_0xBE20AB8238688965(&(Global_2540384.f_4655), 28);
		}
	}
	else if (unk_0xCE990E643CD9D0E5(Global_2540384.f_4655, 28))
	{
		unk_0xD2459066EA58CE43(&(Global_2540384.f_4655), 28);
	}
}

bool func_130(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_212, iParam1);
}

void func_131()
{
	var uVar0;
	
	if (func_136(unk_0x460153A63B9477BC()) == 4 && !func_132(func_135(), 0))
	{
		if (!iLocal_95)
		{
			uVar0 = unk_0x9B0761B4C3EB8BC7();
			if (unk_0xCE990E643CD9D0E5(Global_4271024, 21) && unk_0xE9159DB182CF0841())
			{
				if (unk_0x2F1E5653B875E967(unk_0x460153A63B9477BC()))
				{
					iLocal_95 = 1;
					if (iLocal_96)
					{
						unk_0x03D382CB0B44E2FC(uVar0, Local_97, 1, 0, 0, 1);
						unk_0x6A8F948698B360B4(iVar0, 0);
					}
				}
				else if (func_22(&uLocal_93, 60000, 0))
				{
					if (!iLocal_96)
					{
						Local_97 = { unk_0x3E4D3CCC220BDFB1(iVar0, 0) };
						unk_0x03D382CB0B44E2FC(iVar0, 4978.723f, -5764.301f, -2.3232f, 1, 0, 0, 1);
						unk_0x6A8F948698B360B4(iVar0, 1);
						iLocal_96 = 1;
					}
				}
			}
		}
	}
	else
	{
		if (iLocal_95)
		{
			iLocal_95 = 0;
		}
		if (iLocal_96)
		{
			iLocal_96 = 0;
		}
		if (func_24(&uLocal_93))
		{
			func_20(&uLocal_93);
		}
	}
}

int func_132(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		return func_133(iParam0, func_134(iParam1));
	}
	return 0;
}

int func_133(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		return unk_0xCE990E643CD9D0E5(Global_1706028[iParam0 /*53*/].f_2, iParam1);
	}
	return 0;
}

int func_134(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 7:
			return 1;
		
		case 1:
			return 2;
		
		case 5:
			return 3;
		
		case 2:
			return 4;
		
		case 3:
			return 5;
		
		case 4:
			return 6;
		
		case 6:
			return 7;
		
		case 8:
			return 8;
		
		case 9:
			return 9;
		
		case 10:
			return 10;
		
		case 11:
			return 10;
		
		case 12:
			return 11;
		
		case 13:
			return 12;
		
		case 14:
			return 13;
		
		case 15:
			return 14;
		
		case 16:
			return 15;
		
		default:
	}
	return -1;
}

int func_135()
{
	return Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_35;
}

int func_136(int iParam0)
{
	if (func_108(iParam0) == 256)
	{
		return func_107(iParam0);
	}
	return -1;
}

void func_137()
{
	if (unk_0x9CC4D06F5338CA6B() || !func_79(unk_0x460153A63B9477BC()))
	{
		iLocal_91 = 0;
		iLocal_92 = 0;
		return;
	}
	if (func_138())
	{
		if (!iLocal_91)
		{
			iLocal_91 = 1;
		}
	}
	else if (iLocal_91)
	{
		if (!iLocal_92)
		{
			unk_0xF16CDD1D05F4411A(1559.421f, 381.4f, -50.105f, 25f, 0);
			iLocal_92 = 1;
		}
		else if (unk_0xE9159DB182CF0841())
		{
			if (!unk_0x0C7F95EB5CFEFB8B())
			{
			}
			else
			{
				unk_0xF990EDED7D25FB88();
				iLocal_91 = 0;
				iLocal_92 = 0;
			}
		}
	}
}

bool func_138()
{
	return unk_0xCE990E643CD9D0E5(Global_1678288.f_7, 14);
}

void func_139()
{
	if (iLocal_3 == joaat("toreador"))
	{
		if (!Global_262145.f_10188)
		{
			Global_262145.f_10188 = 1;
		}
	}
	else if (Global_262145.f_10188)
	{
		Global_262145.f_10188 = 0;
	}
}

void func_140()
{
	if (func_142(unk_0x460153A63B9477BC()))
	{
		if (!iLocal_90)
		{
			if (func_41(unk_0x460153A63B9477BC()))
			{
				iLocal_90 = 1;
			}
		}
		else if (func_141())
		{
			if (!Global_2540384.f_4631)
			{
				Global_2540384.f_4631 = 1;
			}
		}
	}
	else
	{
		if (iLocal_90)
		{
			iLocal_90 = 0;
		}
		if (Global_2540384.f_4631)
		{
			Global_2540384.f_4631 = 0;
		}
	}
}

bool func_141()
{
	return Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_196 != 0;
}

bool func_142(int iParam0)
{
	return func_143(func_136(iParam0));
}

int func_143(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
		
		default:
	}
	return 0;
}

void func_144()
{
	func_150();
	func_145();
}

void func_145()
{
	bool bVar0;
	
	if (Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_431.f_1)
	{
		if (func_24(&uLocal_165))
		{
			func_20(&uLocal_165);
		}
		return;
	}
	bVar0 = false;
	if (func_61(unk_0x460153A63B9477BC(), 1))
	{
		if (func_41(func_60()) && func_148(func_60()) == 256)
		{
			bVar0 = true;
		}
	}
	if (!bVar0 && !func_146(unk_0x460153A63B9477BC()))
	{
		if (unk_0xD0E70037A973A810())
		{
			if (unk_0x34D3DEA08A3E12E5(unk_0x460153A63B9477BC()) != 63)
			{
				if (func_22(&uLocal_165, 20000, 0))
				{
					func_20(&uLocal_165);
					if (Global_1704006 != 1)
					{
						Global_1704006.f_2 = 1;
						Global_1704006.f_1 = 0;
						Global_1704006 = 1;
					}
					return;
				}
			}
		}
	}
	else if (func_24(&uLocal_165))
	{
		func_20(&uLocal_165);
	}
}

int func_146(int iParam0)
{
	if (func_147(func_108(iParam0)))
	{
		return 1;
	}
	return 0;
}

int func_147(int iParam0)
{
	switch (iParam0)
	{
		case 256:
			return 1;
		
		default:
	}
	return 0;
}

int func_148(int iParam0)
{
	if (func_149(iParam0, 0))
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_32;
	}
	return -1;
}

int func_149(int iParam0, int iParam1)
{
	if (Global_1630317[iParam0 /*595*/].f_11.f_32 != -1 || (iParam1 && Global_1630317[iParam0 /*595*/].f_11.f_33 != -1))
	{
		return 1;
	}
	return 0;
}

void func_150()
{
	if (unk_0xFC559366953F62B3())
	{
		if (iLocal_164 != 0)
		{
			iLocal_164 = 0;
		}
		return;
	}
	if (!func_13(unk_0x460153A63B9477BC(), 0, 1))
	{
		return;
	}
	switch (iLocal_164)
	{
		case 0:
			if (Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_431.f_1)
			{
				return;
			}
			if (unk_0xF1E6A9807E4F24AD("H4_islandx_terrain_01") && !unk_0xD0E70037A973A810())
			{
				unk_0x1D40553EDD51A1B8(800);
				iLocal_164 = 1;
			}
			break;
		
		case 1:
			if (!unk_0x5DA78AD6801A0523())
			{
				unk_0x1D40553EDD51A1B8(800);
			}
			if (unk_0x03DB5C6AABF8DA46())
			{
				iLocal_164 = 2;
			}
			break;
		
		case 2:
			unk_0x2BB0EF9DE445EA13(unk_0x9B0761B4C3EB8BC7());
			unk_0x58ADF88C51AAFDC5(unk_0x9B0761B4C3EB8BC7(), 1, 0);
			unk_0x03D382CB0B44E2FC(unk_0x9B0761B4C3EB8BC7(), -1168.914f, -2751.29f, 13.029f, 1, 0, 0, 1);
			unk_0xE922BAA80E8F9324(unk_0x9B0761B4C3EB8BC7(), 293.599f);
			unk_0xC11B9FC002323550(-1168.914f, -2751.29f, 13.029f);
			unk_0xE2817E00BFDDDB34();
			unk_0xFD45D90342D2A0CD(800);
			iLocal_164 = 3;
			break;
		
		case 3:
			if (!unk_0x5B772EFCB84373BE())
			{
				unk_0xFD45D90342D2A0CD(800);
			}
			if (unk_0x87F0CB19476706C3())
			{
				iLocal_164 = 0;
			}
			break;
	}
}

void func_151()
{
	bool bVar0;
	
	bVar0 = false;
	if (func_155(1))
	{
		if (func_108(unk_0x460153A63B9477BC()) == 256 && func_99(unk_0x460153A63B9477BC()))
		{
			if (func_136(unk_0x460153A63B9477BC()) == 21)
			{
				if (!func_154(10))
				{
					func_153(10);
					iLocal_89 = 1;
				}
				bVar0 = true;
			}
		}
	}
	if (iLocal_89 && !bVar0)
	{
		if (func_154(10))
		{
			func_152(10);
		}
		iLocal_89 = 0;
	}
}

void func_152(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_1678288.f_4481 <= 0)
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (iParam0 == Global_1678288.f_4477[iVar0])
		{
			Global_1678288.f_4477[iVar0] = -1;
			iVar1 = iVar0;
		}
		else
		{
			iVar0++;
		}
	}
	if (iVar1 != -1)
	{
		if (Global_1678288.f_4481 > 0)
		{
			Global_1678288.f_4481 = (Global_1678288.f_4481 - 1);
		}
	}
}

void func_153(int iParam0)
{
	if (Global_1678288.f_4481 >= 3)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		return;
	}
	else if (func_154(iParam0))
	{
		return;
	}
	Global_1678288.f_4477[Global_1678288.f_4481] = iParam0;
	Global_1678288.f_4481++;
}

int func_154(int iParam0)
{
	int iVar0;
	
	if (Global_1678288.f_4481 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_1678288.f_4481)
		{
			if (iParam0 == Global_1678288.f_4477[iVar0])
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_155(bool bParam0)
{
	return func_61(unk_0x460153A63B9477BC(), bParam0);
}

void func_156()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0x460153A63B9477BC() != unk_0xCCF088254BE59A9B(func_172(), -1, 0))
	{
		return;
	}
	if (unk_0xCE990E643CD9D0E5(Global_2419386.f_1444[1 /*15*/].f_6, 0))
	{
		return;
	}
	if (Global_2419386.f_1444[1 /*15*/].f_8 == -1)
	{
		return;
	}
	if (func_170())
	{
		return;
	}
	Local_74 = { Global_2419386.f_1444[1 /*15*/] };
	iVar0 = func_169(&(Local_74.f_13), 0, 1);
	iVar1 = func_168(Local_74.f_10);
	bVar2 = true;
	iVar3 = 1;
	while (iVar3 <= iVar1)
	{
		if (iVar0 < func_167(&Local_74, iVar3))
		{
			Local_74.f_0 = iVar3;
			if (iVar3 == 1)
			{
				Local_74.f_2 = func_166(&Local_74, iVar0);
			}
			else
			{
				Local_74.f_2 = func_166(&Local_74, (iVar0 - func_167(&Local_74, (iVar3 - 1))));
			}
			bVar2 = false;
			Jump @212; //curOff = 194
		}
		else
		{
			bVar2 = true;
		}
		iVar3++;
	}
	if (!bVar2)
	{
		if (Local_74.f_0 == func_168(Local_74.f_10))
		{
			iVar4 = func_165(&Local_74, iVar0);
			iVar5 = func_163(Local_74.f_10, Local_74.f_0);
			if ((iVar5 - iVar4) <= 30000)
			{
				bVar2 = true;
			}
		}
	}
	if (!bVar2)
	{
		return;
	}
	Global_2419386.f_1444[1 /*15*/].f_8 = func_160(Global_2419386.f_1444[1 /*15*/].f_8, 1);
	Global_2419386.f_1444[1 /*15*/].f_10 = func_159(Global_2419386.f_1444[1 /*15*/].f_8, 0);
	Global_2419386.f_1444[1 /*15*/] = 1;
	Global_2419386.f_1444[1 /*15*/].f_3 = func_158(&(Global_2419386.f_1444[1 /*15*/]), 0);
	Global_2419386.f_1444[1 /*15*/].f_2 = 0;
	func_90(&(Global_2419386.f_1444[1 /*15*/].f_13), 0, 0);
	Global_2419386.f_1444[1 /*15*/].f_13 = unk_0x8C358101651A3F7C(Global_2419386.f_1444[1 /*15*/].f_13, -Global_2419386.f_1444[1 /*15*/].f_2);
	Global_2419386.f_1444[1 /*15*/].f_1 = unk_0x856D5567211886A2(func_157(Global_2419386.f_1444[1 /*15*/].f_10, Global_2419386.f_1444[1 /*15*/]));
}

char* func_157(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 9:
			switch (iParam1)
			{
				case 1:
					return "DLC_HEI4_MUSIC_HEI4_KM_BEACH_REVERB_01";
				
				case 2:
					return "DLC_HEI4_MUSIC_HEI4_KM_BEACH_REVERB_02";
				
				case 3:
					return "DLC_HEI4_MUSIC_HEI4_KM_BEACH_REVERB_03";
				
				case 4:
					return "DLC_HEI4_MUSIC_HEI4_KM_BEACH_REVERB_04";
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 1:
					return "DLC_HEI4_MUSIC_HEI4_KM_CLUB_LIVE_MIX_P1";
				
				case 2:
					return "DLC_HEI4_MUSIC_HEI4_KM_CLUB_LIVE_MIX_P2";
				
				case 3:
					return "DLC_HEI4_MUSIC_HEI4_KM_CLUB_LIVE_MIX_P3";
				
				case 4:
					return "DLC_HEI4_MUSIC_HEI4_KM_CLUB_LIVE_MIX_P4";
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 1:
					return "DLC_HEI4_MUSIC_HEI4_PT_CLUB_LIVE_MIX_P1";
				
				case 2:
					return "DLC_HEI4_MUSIC_HEI4_PT_CLUB_LIVE_MIX_P2";
				
				case 3:
					return "DLC_HEI4_MUSIC_HEI4_PT_CLUB_LIVE_MIX_P3";
				
				default:
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 1:
					return "DLC_HEI4_MUSIC_HEI4_MM_CLUB_LIVE_MIX_P1";
				
				case 2:
					return "DLC_HEI4_MUSIC_HEI4_MM_CLUB_LIVE_MIX_P2";
				
				case 3:
					return "DLC_HEI4_MUSIC_HEI4_MM_CLUB_LIVE_MIX_P3";
				
				case 4:
					return "DLC_HEI4_MUSIC_HEI4_MM_CLUB_LIVE_MIX_P4";
				
				default:
			}
			break;
	}
	return "";
}

int func_158(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 1;
	while (iVar0 <= func_168(uParam0->f_10))
	{
		iVar1 = (iVar1 + func_163(uParam0->f_10, iVar0));
		if (!bParam1)
		{
			if (*uParam0 == iVar0)
			{
			}
			else
			{
				iVar0++;
			}
			return iVar1;
		}

int func_159(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				iVar0 = 4;
				break;
			
			case 2:
				iVar0 = 5;
				break;
			
			case 1:
				iVar0 = 6;
				break;
			
			case 3:
				iVar0 = 7;
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				iVar0 = 0;
				break;
			
			case 2:
				iVar0 = 1;
				break;
			
			case 1:
				iVar0 = 2;
				break;
			
			case 3:
				iVar0 = 3;
				break;
			}
	}
	switch (iParam0)
	{
		case 4:
			iVar0 = 8;
			break;
		
		case 5:
			iVar0 = 9;
			break;
		
		case 6:
			iVar0 = 10;
			break;
		
		case 7:
			iVar0 = 11;
			break;
	}
	return iVar0;
}

int func_160(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	if (!bParam1)
	{
		if (func_162())
		{
			iVar1 = Global_262145.f_24206;
			if (!Global_262145.f_24211)
			{
				iVar1 = unk_0x344C570D6F8700DF(1, 7);
			}
			switch (iVar1)
			{
				case 1:
				case 2:
					return 4;
				
				case 3:
				case 4:
					return 6;
				
				case 5:
				case 6:
					return 7;
				
				default:
			}
			return 6;
		}
		else if (!Global_262145.f_24207 && !Global_262145.f_24208)
		{
			iVar2 = Global_262145.f_24206;
			if (!Global_262145.f_24211)
			{
				if (func_161())
				{
					iVar2 = 7;
				}
				else
				{
					iVar2 = 9;
				}
			}
			switch (iVar2)
			{
				case 7:
					return 7;
				
				case 9:
					return 4;
				
				default:
			}
			return 7;
		}
		else if (!Global_262145.f_24208 && !Global_262145.f_24209)
		{
			iVar3 = Global_262145.f_24206;
			if (!Global_262145.f_24211)
			{
				if (func_161())
				{
					iVar3 = 10;
				}
				else
				{
					iVar3 = 12;
				}
			}
			switch (iVar3)
			{
				case 10:
					return 4;
				
				case 12:
					return 6;
				
				default:
			}
			return 4;
		}
		else if (!Global_262145.f_24209 && !Global_262145.f_24207)
		{
			iVar4 = Global_262145.f_24206;
			if (!Global_262145.f_24211)
			{
				if (func_161())
				{
					iVar4 = 8;
				}
				else
				{
					iVar4 = 11;
				}
			}
			switch (iVar4)
			{
				case 8:
					return 7;
				
				case 11:
					return 6;
				
				default:
			}
			return 7;
		}
		else if (!Global_262145.f_24207)
		{
			return 7;
		}
		else if (!Global_262145.f_24208)
		{
			return 4;
		}
		else if (!Global_262145.f_24209)
		{
			return 6;
		}
	}
	else if (func_162())
	{
		switch (Global_262145.f_24206)
		{
			case 1:
				switch (iParam0)
				{
					case 4:
						iVar0 = 6;
						break;
					
					case 6:
						iVar0 = 7;
						break;
					
					case 7:
						iVar0 = 4;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case 4:
						iVar0 = 7;
						break;
					
					case 6:
						iVar0 = 4;
						break;
					
					case 7:
						iVar0 = 6;
						break;
				}
				break;
			
			case 3:
				switch (iParam0)
				{
					case 4:
						iVar0 = 6;
						break;
					
					case 6:
						iVar0 = 7;
						break;
					
					case 7:
						iVar0 = 4;
						break;
				}
				break;
			
			case 4:
				switch (iParam0)
				{
					case 4:
						iVar0 = 7;
						break;
					
					case 6:
						iVar0 = 4;
						break;
					
					case 7:
						iVar0 = 6;
						break;
				}
				break;
			
			case 5:
				switch (iParam0)
				{
					case 4:
						iVar0 = 6;
						break;
					
					case 6:
						iVar0 = 7;
						break;
					
					case 7:
						iVar0 = 4;
						break;
				}
				break;
			
			case 6:
				switch (iParam0)
				{
					case 4:
						iVar0 = 7;
						break;
					
					case 6:
						iVar0 = 4;
						break;
					
					case 7:
						iVar0 = 6;
						break;
				}
				break;
			
			default:
				switch (iParam0)
				{
					case 4:
						iVar0 = 6;
						break;
					
					case 6:
						iVar0 = 7;
						break;
					
					case 7:
						iVar0 = 4;
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 4:
				if (!Global_262145.f_24207)
				{
					iVar0 = 7;
				}
				else if (!Global_262145.f_24209)
				{
					iVar0 = 6;
				}
				else
				{
					iVar0 = 4;
				}
				break;
			
			case 6:
				if (!Global_262145.f_24207)
				{
					iVar0 = 7;
				}
				else if (!Global_262145.f_24208)
				{
					iVar0 = 4;
				}
				else
				{
					iVar0 = 6;
				}
				break;
			
			case 7:
				if (!Global_262145.f_24209)
				{
					iVar0 = 6;
				}
				else if (!Global_262145.f_24208)
				{
					iVar0 = 4;
				}
				else
				{
					iVar0 = 7;
				}
				break;
			}
	}
	return iVar0;
}

int func_161()
{
	if (unk_0xCE990E643CD9D0E5(unk_0x344C570D6F8700DF(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_162()
{
	if (Global_262145.f_24207)
	{
		return 0;
	}
	if (Global_262145.f_24208)
	{
		return 0;
	}
	if (Global_262145.f_24209)
	{
		return 0;
	}
	return 1;
}

int func_163(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = func_164(iParam0, iParam1);
	iVar0 = (iVar0 - 1000);
	return iVar0;
}

int func_164(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 9:
			switch (iParam1)
			{
				case 1:
					return 2352424;
				
				case 2:
					return 1552637;
				
				case 3:
					return 1152081;
				
				case 4:
					return 1587519;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 1:
					return 2352424;
				
				case 2:
					return 1552637;
				
				case 3:
					return 1152080;
				
				case 4:
					return 1813200;
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 1:
					return 1041521;
				
				case 2:
					return 1537939;
				
				case 3:
					return 1811912;
				
				default:
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 1:
					return 2353875;
				
				case 2:
					return 1552637;
				
				case 3:
					return 1152080;
				
				case 4:
					return 1287786;
				
				default:
			}
			break;
	}
	return 0;
}

int func_165(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (iParam0->f_3 - iParam1);
	return (func_163(iParam0->f_10, *iParam0) - iVar0);
}

int func_166(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 1)
	{
		iVar0 = 2;
		while (iVar0 <= func_168(iParam0->f_10))
		{
			iParam1 = (iParam1 + func_163(iParam0->f_10, (iVar0 - 1)));
			if (*iParam0 == iVar0)
			{
			}
			else
			{
				iVar0++;
			}
		}
	}
	return iParam1;
}

int func_167(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	while (iVar0 <= iParam1)
	{
		iVar1 = (iVar1 + func_163(uParam0->f_10, iVar0));
		iVar0++;
	}
	return iVar1;
}

int func_168(int iParam0)
{
	switch (iParam0)
	{
		case 9:
			return 4;
		
		case 8:
			return 4;
		
		case 10:
			return 3;
		
		case 11:
			return 4;
		
		default:
	}
	return 0;
}

var func_169(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x25DDB354A40FFCDB() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x624736CA66E14161(unk_0x6CAAB7E78B5D978A(), *uParam0);
		}
		else
		{
			return unk_0x624736CA66E14161(unk_0x29B9AF1CB5B8175D(), *uParam0);
		}
	}
	return unk_0x624736CA66E14161(unk_0x578C4EF320340AF7(), *uParam0);
}

int func_170()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = unk_0xF1110FE23C67293A(iVar0);
		if (func_13(iVar1, 0, 1))
		{
			if (func_171(iVar1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_171(int iParam0)
{
	if (iParam0 != func_32())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_31(Global_2425869[iParam0 /*443*/].f_314.f_6) == 19;
			}
		}
	}
	return 0;
}

char* func_172()
{
	switch (Global_2464595)
	{
		case 0:
			return "freemode";
		
		default:
	}
	return "freemode";
}

void func_173()
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	struct<5> Var7;
	
	bVar6 = (func_62(unk_0x460153A63B9477BC()) && func_108(unk_0x460153A63B9477BC()) == 256);
	switch (Local_28.f_2)
	{
		case 0:
			if (bVar6)
			{
				switch (func_107(unk_0x460153A63B9477BC()))
				{
					case 11:
					case 20:
					case 21:
					case 23:
					case 18:
					case 16:
					case 12:
						func_23(&Local_28, 0, 0);
						Local_28.f_2 = 1;
						break;
					}
			}
			break;
		
		case 1:
			if (func_24(&Local_28))
			{
				if (func_22(&Local_28, 5000, 0))
				{
					iVar4 = func_180(unk_0x460153A63B9477BC());
					if (iVar4 != -1)
					{
						iVar3 = 0;
						while (iVar3 < 31)
						{
							if (!unk_0xCE990E643CD9D0E5(Local_28.f_3, iVar3))
							{
								Var0 = { func_179(iVar4, iVar3) };
								iVar5 = func_178(iVar4, iVar3);
								if (!func_177(Var0) && iVar5 != 0)
								{
									if (!unk_0xAE06B9E39EBDE049(Local_28.f_4[iVar3]))
									{
										Local_28.f_4[iVar3] = unk_0x5BBA0055476D633A(Var0, 5f, iVar5, 0, 0, 0);
										unk_0xBE20AB8238688965(&(Local_28.f_3), iVar3);
									}
								}
							}
							iVar3++;
						}
						iVar3 = 0;
						while (iVar3 < 31)
						{
							if (unk_0xCE990E643CD9D0E5(Local_28.f_3, iVar3))
							{
								if (unk_0xAE06B9E39EBDE049(Local_28.f_4[iVar3]) && func_176(Local_28.f_4[iVar3]))
								{
									unk_0xFA6E875B9DF13F14(Local_28.f_4[iVar3], 1);
									unk_0xD2459066EA58CE43(&(Local_28.f_3), iVar3);
								}
							}
							iVar3++;
						}
					}
					if (func_174(Local_28.f_3) == 0 || func_22(&Local_28, 10000, 0))
					{
						Local_28.f_2 = 2;
					}
				}
			}
			else
			{
				Local_28.f_2 = 2;
			}
			break;
		
		case 2:
			if (!bVar6)
			{
				Var7.f_4 = 31;
				unk_0x13AF25746D6C3CA9(&Local_28, &Var7, 36);
			}
			break;
	}
}

int func_174(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = uParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_175(&iVar1, -2147483648);
	}
	else
	{
		iVar0 = 0;
	}
	while (iVar1 > 0)
	{
		iVar1 = (iVar1 && (iVar1 - 1));
		iVar0++;
	}
	return iVar0;
}

void func_175(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

int func_176(int iParam0)
{
	if (unk_0xAE06B9E39EBDE049(uParam0))
	{
		if (unk_0x4349BF35C5B9A49B(iParam0))
		{
			unk_0xDE298EE8EAAC0776(iParam0);
			return unk_0xAA5B806352173DEA(iParam0);
		}
	}
	return 0;
}

int func_177(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_178(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 39:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("gr_prop_gr_bench_02a");
					break;
				
				case 1:
					iVar0 = joaat("gr_prop_gr_crates_rifles_01a");
					break;
				
				case 2:
					iVar0 = joaat("gr_prop_gr_gunsmithsupl_02a");
					break;
				
				case 3:
					iVar0 = joaat("gr_prop_gr_crates_pistols_01a");
					break;
				
				case 4:
					iVar0 = joaat("gr_prop_gr_rsply_crate02a");
					break;
				
				case 5:
					iVar0 = joaat("gr_prop_gr_rsply_crate02a");
					break;
				
				case 6:
					iVar0 = joaat("gr_prop_gr_rsply_crate03a");
					break;
				
				case 7:
					iVar0 = joaat("xm_prop_x17_bag_01a");
					break;
				
				case 8:
					iVar0 = joaat("xm_prop_x17_bag_01a");
					break;
				
				case 9:
					iVar0 = joaat("xm_prop_x17_bag_01a");
					break;
				
				case 10:
					iVar0 = joaat("h4_prop_h4_board_01a");
					break;
				
				case 14:
					iVar0 = joaat("prop_cabinet_02b");
					break;
			}
			break;
		
		case 40:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("gr_prop_gr_bench_02a");
					break;
				
				case 1:
					iVar0 = joaat("gr_prop_gr_crates_rifles_01a");
					break;
				
				case 2:
					iVar0 = joaat("gr_prop_gr_gunsmithsupl_02a");
					break;
				
				case 3:
					iVar0 = joaat("gr_prop_gr_gunsmithsupl_03a");
					break;
				
				case 4:
					iVar0 = joaat("gr_prop_gr_rsply_crate02a");
					break;
				
				case 5:
					iVar0 = joaat("gr_prop_gr_rsply_crate02a");
					break;
				
				case 6:
					iVar0 = joaat("gr_prop_gr_rsply_crate03a");
					break;
				
				case 7:
					iVar0 = joaat("xm_prop_x17_bag_01a");
					break;
				
				case 8:
					iVar0 = joaat("xm_prop_x17_bag_01a");
					break;
				
				case 9:
					iVar0 = joaat("xm_prop_x17_bag_01a");
					break;
				
				case 10:
					iVar0 = joaat("h4_prop_h4_board_01a");
					break;
				
				case 14:
					iVar0 = joaat("prop_cabinet_02b");
					break;
			}
			break;
		
		case 41:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("gr_prop_gr_bench_02a");
					break;
				
				case 1:
					iVar0 = joaat("gr_prop_gr_crates_rifles_01a");
					break;
				
				case 2:
					iVar0 = joaat("gr_prop_gr_gunsmithsupl_02a");
					break;
				
				case 3:
					iVar0 = joaat("gr_prop_gr_crates_pistols_01a");
					break;
				
				case 4:
					iVar0 = joaat("gr_prop_gr_rsply_crate02a");
					break;
				
				case 5:
					iVar0 = joaat("gr_prop_gr_rsply_crate02a");
					break;
				
				case 6:
					iVar0 = joaat("gr_prop_gr_rsply_crate03a");
					break;
				
				case 7:
					iVar0 = joaat("xm_prop_x17_bag_01a");
					break;
				
				case 8:
					iVar0 = joaat("xm_prop_x17_bag_01a");
					break;
				
				case 9:
					iVar0 = joaat("xm_prop_x17_bag_01a");
					break;
				
				case 10:
					iVar0 = joaat("h4_prop_h4_board_01a");
					break;
				
				case 14:
					iVar0 = joaat("prop_cabinet_02b");
					break;
			}
			break;
		
		case 28:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("h4_prop_h4_win_blind_02a");
					break;
				
				case 1:
					iVar0 = joaat("h4_prop_h4_win_blind_02a");
					break;
				
				case 2:
					iVar0 = joaat("h4_prop_h4_win_blind_02a");
					break;
				
				case 3:
					iVar0 = joaat("h4_prop_h4_win_blind_02a");
					break;
				
				case 4:
					iVar0 = joaat("h4_prop_h4_win_blind_02a");
					break;
				
				case 5:
					iVar0 = joaat("h4_prop_h4_win_blind_03a");
					break;
				
				case 6:
					iVar0 = joaat("h4_prop_h4_win_blind_03a");
					break;
				
				case 7:
					iVar0 = joaat("h4_prop_h4_win_blind_03a");
					break;
				
				case 8:
					iVar0 = joaat("h4_prop_h4_win_blind_03a");
					break;
				
				case 9:
					iVar0 = joaat("h4_prop_h4_win_blind_03a");
					break;
				
				case 10:
					iVar0 = joaat("h4_prop_h4_win_blind_03a");
					break;
				
				case 11:
					iVar0 = joaat("h4_prop_h4_win_blind_03a");
					break;
				
				case 12:
					iVar0 = joaat("h4_prop_h4_win_blind_03a");
					break;
				
				case 13:
					iVar0 = joaat("h4_prop_h4_win_blind_03a");
					break;
				
				case 14:
					iVar0 = joaat("gr_prop_gr_crates_rifles_01a");
					break;
				
				case 15:
					iVar0 = joaat("hei_prop_hei_drug_case");
					break;
				
				case 16:
					iVar0 = joaat("bkr_prop_weed_bigbag_open_01a");
					break;
				
				case 17:
					iVar0 = joaat("ch_prop_ch_crate_full_01a");
					break;
				
				case 18:
					iVar0 = joaat("xm_prop_rsply_crate04a");
					break;
				
				case 19:
					iVar0 = joaat("ch_prop_ch_crate_full_01a");
					break;
				
				case 20:
					iVar0 = joaat("prop_cash_case_02");
					break;
				
				case 21:
					iVar0 = joaat("hei_prop_hei_drug_pack_01a");
					break;
				
				case 22:
					iVar0 = joaat("bkr_prop_weed_bigbag_open_01a");
					break;
				
				case 23:
					iVar0 = joaat("bkr_prop_money_counter");
					break;
			}
			break;
		
		case 29:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("h4_prop_h4_win_blind_03a");
					break;
				
				case 1:
					iVar0 = joaat("h4_prop_h4_win_blind_03a");
					break;
				
				case 2:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 3:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 4:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 5:
					iVar0 = joaat("h4_prop_h4_win_blind_03a");
					break;
				
				case 6:
					iVar0 = joaat("h4_prop_h4_win_blind_03a");
					break;
				
				case 7:
					iVar0 = joaat("h4_prop_h4_win_blind_03a");
					break;
				
				case 8:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 9:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 10:
					iVar0 = joaat("h4_prop_h4_win_blind_03a");
					break;
				
				case 11:
					iVar0 = joaat("h4_prop_h4_win_blind_03a");
					break;
				
				case 12:
					iVar0 = joaat("h4_prop_h4_win_blind_03a");
					break;
				
				case 13:
					iVar0 = joaat("h4_prop_h4_win_blind_03a");
					break;
				
				case 14:
					iVar0 = joaat("gr_prop_gr_crates_rifles_01a");
					break;
				
				case 15:
					iVar0 = joaat("hei_prop_hei_drug_case");
					break;
				
				case 16:
					iVar0 = joaat("xm_prop_rsply_crate04a");
					break;
				
				case 17:
					iVar0 = joaat("ch_prop_ch_crate_full_01a");
					break;
				
				case 18:
					iVar0 = joaat("ch_prop_ch_crate_full_01a");
					break;
				
				case 19:
					iVar0 = joaat("bkr_prop_money_counter");
					break;
				
				case 20:
					iVar0 = joaat("prop_cash_case_02");
					break;
				
				case 21:
					iVar0 = joaat("hei_prop_hei_drug_pack_01a");
					break;
			}
			break;
		
		case 30:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("h4_prop_h4_win_blind_03a");
					break;
				
				case 1:
					iVar0 = joaat("h4_prop_h4_win_blind_03a");
					break;
				
				case 2:
					iVar0 = joaat("h4_prop_h4_win_blind_03a");
					break;
				
				case 3:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 4:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 5:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 6:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 7:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 8:
					iVar0 = joaat("h4_prop_h4_win_blind_03a");
					break;
				
				case 9:
					iVar0 = joaat("h4_prop_h4_win_blind_03a");
					break;
				
				case 10:
					iVar0 = joaat("h4_prop_h4_win_blind_03a");
					break;
				
				case 11:
					iVar0 = joaat("h4_prop_h4_win_blind_03a");
					break;
				
				case 12:
					iVar0 = joaat("h4_prop_h4_win_blind_03a");
					break;
				
				case 13:
					iVar0 = joaat("h4_prop_h4_win_blind_03a");
					break;
				
				case 14:
					iVar0 = joaat("gr_prop_gr_crates_rifles_01a");
					break;
				
				case 15:
					iVar0 = joaat("hei_prop_hei_drug_case");
					break;
				
				case 16:
					iVar0 = joaat("ch_prop_ch_crate_full_01a");
					break;
				
				case 17:
					iVar0 = joaat("xm_prop_rsply_crate04a");
					break;
				
				case 18:
					iVar0 = joaat("ch_prop_ch_crate_full_01a");
					break;
				
				case 19:
					iVar0 = joaat("bkr_prop_money_counter");
					break;
				
				case 20:
					iVar0 = joaat("prop_cash_case_02");
					break;
				
				case 21:
					iVar0 = joaat("hei_prop_hei_drug_pack_01a");
					break;
			}
			break;
		
		case 51:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 1:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 2:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 3:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 4:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 5:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 6:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 7:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 8:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 9:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 10:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 11:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 12:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 14:
					iVar0 = joaat("hei_p_attache_case_shut");
					break;
				
				case 15:
					iVar0 = joaat("w_sg_pumpshotgun");
					break;
				
				case 16:
					iVar0 = joaat("w_sg_assaultshotgun");
					break;
				
				case 17:
					iVar0 = joaat("w_sb_pdw");
					break;
				
				case 18:
					iVar0 = joaat("prop_box_ammo02a");
					break;
				
				case 19:
					iVar0 = joaat("prop_box_ammo01a");
					break;
				
				case 20:
					iVar0 = joaat("ex_prop_safedoor_office2a_l");
					break;
			}
			break;
		
		case 52:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 1:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 2:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 3:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 4:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 5:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 6:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 7:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 8:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 9:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 10:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 11:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 12:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 14:
					iVar0 = joaat("hei_p_attache_case_shut");
					break;
				
				case 15:
					iVar0 = joaat("prop_box_ammo02a");
					break;
				
				case 16:
					iVar0 = joaat("prop_box_ammo01a");
					break;
				
				case 17:
					iVar0 = joaat("w_sg_assaultshotgun");
					break;
				
				case 18:
					iVar0 = joaat("w_sg_pumpshotgun");
					break;
				
				case 19:
					iVar0 = joaat("w_sb_pdw");
					break;
				
				case 20:
					iVar0 = joaat("ex_prop_safedoor_office2a_l");
					break;
			}
			break;
		
		case 53:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 1:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 2:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 3:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 4:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 5:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 6:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 7:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 8:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 9:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 10:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 11:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 12:
					iVar0 = joaat("h4_prop_h4_win_blind_01a");
					break;
				
				case 14:
					iVar0 = joaat("bkr_prop_biker_case_shut");
					break;
				
				case 15:
					iVar0 = joaat("prop_box_ammo01a");
					break;
				
				case 16:
					iVar0 = joaat("w_sg_pumpshotgun");
					break;
				
				case 17:
					iVar0 = joaat("w_sg_assaultshotgun");
					break;
				
				case 18:
					iVar0 = joaat("w_sb_pdw");
					break;
				
				case 19:
					iVar0 = joaat("ex_prop_safedoor_office2a_l");
					break;
			}
			break;
		
		case 45:
			switch (iParam1)
			{
				case 2:
					iVar0 = joaat("xm_base_cia_data_desks");
					break;
				
				case 3:
					iVar0 = joaat("xm_base_cia_data_desks");
					break;
				
				case 4:
					iVar0 = joaat("xm_prop_base_staff_desk_01");
					break;
				
				case 5:
					iVar0 = joaat("bkr_prop_coke_doll");
					break;
				
				case 6:
					iVar0 = joaat("xm_base_cia_data_desks");
					break;
				
				case 7:
					iVar0 = joaat("prop_power_cell");
					break;
				
				case 8:
					iVar0 = joaat("prop_porn_mag_02");
					break;
				
				case 9:
					iVar0 = joaat("bkr_prop_clubhouse_offchair_01a");
					break;
				
				case 10:
					iVar0 = joaat("xm_prop_x17_avengerchair_02");
					break;
				
				case 11:
					iVar0 = joaat("xm_prop_x17_avengerchair_02");
					break;
				
				case 12:
					iVar0 = joaat("xm_prop_x17_avengerchair_02");
					break;
				
				case 13:
					iVar0 = joaat("xm_prop_x17_avengerchair_02");
					break;
				
				case 14:
					iVar0 = joaat("xm_prop_base_staff_desk_02");
					break;
				
				case 15:
					iVar0 = joaat("h4_prop_h4_crate_cloth_01a");
					break;
				
				case 16:
					iVar0 = joaat("h4_prop_h4_bag_hook_01a");
					break;
				
				case 17:
					iVar0 = joaat("prop_boxpile_05a");
					break;
				
				case 18:
					iVar0 = joaat("prop_boxpile_05a");
					break;
				
				case 19:
					iVar0 = joaat("prop_boxpile_07a");
					break;
				
				case 20:
					iVar0 = joaat("prop_mb_crate_01b");
					break;
				
				case 21:
					iVar0 = joaat("prop_mb_crate_01b");
					break;
				
				case 22:
					iVar0 = joaat("prop_box_wood04a");
					break;
				
				case 23:
					iVar0 = joaat("prop_box_wood04a");
					break;
				
				case 24:
					iVar0 = joaat("h4_prop_h4_crate_cloth_01a");
					break;
				
				case 25:
					iVar0 = joaat("h4_prop_h4_bolt_cutter_01a");
					break;
			}
			break;
		
		case 46:
			switch (iParam1)
			{
				case 2:
					iVar0 = joaat("xm_base_cia_data_desks");
					break;
				
				case 3:
					iVar0 = joaat("xm_base_cia_data_desks");
					break;
				
				case 4:
					iVar0 = joaat("xm_prop_base_staff_desk_01");
					break;
				
				case 5:
					iVar0 = joaat("bkr_prop_coke_doll");
					break;
				
				case 6:
					iVar0 = joaat("xm_base_cia_data_desks");
					break;
				
				case 7:
					iVar0 = joaat("prop_power_cell");
					break;
				
				case 8:
					iVar0 = joaat("prop_porn_mag_02");
					break;
				
				case 9:
					iVar0 = joaat("bkr_prop_clubhouse_offchair_01a");
					break;
				
				case 10:
					iVar0 = joaat("xm_prop_x17_avengerchair_02");
					break;
				
				case 11:
					iVar0 = joaat("xm_prop_x17_avengerchair_02");
					break;
				
				case 12:
					iVar0 = joaat("xm_prop_x17_avengerchair_02");
					break;
				
				case 13:
					iVar0 = joaat("xm_prop_x17_avengerchair_02");
					break;
				
				case 14:
					iVar0 = joaat("xm_prop_base_staff_desk_02");
					break;
				
				case 15:
					iVar0 = joaat("h4_prop_h4_crate_cloth_01a");
					break;
				
				case 16:
					iVar0 = joaat("h4_prop_h4_bag_hook_01a");
					break;
				
				case 17:
					iVar0 = joaat("prop_boxpile_05a");
					break;
				
				case 18:
					iVar0 = joaat("prop_boxpile_05a");
					break;
				
				case 19:
					iVar0 = joaat("prop_boxpile_07a");
					break;
				
				case 20:
					iVar0 = joaat("prop_mb_crate_01b");
					break;
				
				case 21:
					iVar0 = joaat("prop_mb_crate_01b");
					break;
				
				case 22:
					iVar0 = joaat("prop_box_wood04a");
					break;
				
				case 23:
					iVar0 = joaat("prop_box_wood04a");
					break;
				
				case 24:
					iVar0 = joaat("h4_prop_h4_bolt_cutter_01a");
					break;
				
				case 25:
					iVar0 = joaat("h4_prop_h4_bolt_cutter_01a");
					break;
			}
			break;
		
		case 47:
			switch (iParam1)
			{
				case 2:
					iVar0 = joaat("xm_base_cia_data_desks");
					break;
				
				case 3:
					iVar0 = joaat("xm_base_cia_data_desks");
					break;
				
				case 4:
					iVar0 = joaat("xm_prop_base_staff_desk_01");
					break;
				
				case 5:
					iVar0 = joaat("bkr_prop_coke_doll");
					break;
				
				case 6:
					iVar0 = joaat("xm_base_cia_data_desks");
					break;
				
				case 7:
					iVar0 = joaat("prop_power_cell");
					break;
				
				case 8:
					iVar0 = joaat("prop_porn_mag_02");
					break;
				
				case 9:
					iVar0 = joaat("bkr_prop_clubhouse_offchair_01a");
					break;
				
				case 10:
					iVar0 = joaat("xm_prop_x17_avengerchair_02");
					break;
				
				case 11:
					iVar0 = joaat("xm_prop_x17_avengerchair_02");
					break;
				
				case 12:
					iVar0 = joaat("xm_prop_x17_avengerchair_02");
					break;
				
				case 13:
					iVar0 = joaat("xm_prop_x17_avengerchair_02");
					break;
				
				case 14:
					iVar0 = joaat("xm_prop_base_staff_desk_02");
					break;
				
				case 15:
					iVar0 = joaat("h4_prop_h4_crate_cloth_01a");
					break;
				
				case 16:
					iVar0 = joaat("h4_prop_h4_bag_hook_01a");
					break;
				
				case 17:
					iVar0 = joaat("prop_boxpile_05a");
					break;
				
				case 18:
					iVar0 = joaat("prop_boxpile_05a");
					break;
				
				case 19:
					iVar0 = joaat("prop_boxpile_07a");
					break;
				
				case 20:
					iVar0 = joaat("prop_mb_crate_01b");
					break;
				
				case 21:
					iVar0 = joaat("prop_mb_crate_01b");
					break;
				
				case 22:
					iVar0 = joaat("prop_box_wood04a");
					break;
				
				case 23:
					iVar0 = joaat("prop_box_wood04a");
					break;
				
				case 24:
					iVar0 = joaat("h4_prop_h4_bolt_cutter_01a");
					break;
				
				case 25:
					iVar0 = joaat("h4_prop_h4_bolt_cutter_01a");
					break;
			}
			break;
		
		case 60:
			switch (iParam1)
			{
				case 9:
					iVar0 = joaat("prop_box_wood03a");
					break;
				
				case 10:
					iVar0 = joaat("prop_box_wood04a");
					break;
				
				case 11:
					iVar0 = joaat("prop_box_wood07a");
					break;
				
				case 12:
					iVar0 = joaat("prop_boxpile_02b");
					break;
				
				case 13:
					iVar0 = joaat("prop_boxpile_02b");
					break;
				
				case 14:
					iVar0 = joaat("prop_boxpile_07a");
					break;
				
				case 15:
					iVar0 = joaat("prop_air_cargo_01a");
					break;
				
				case 16:
					iVar0 = joaat("prop_air_cargo_01a");
					break;
				
				case 17:
					iVar0 = joaat("prop_mb_cargo_04a");
					break;
				
				case 18:
					iVar0 = joaat("prop_mb_crate_01b");
					break;
				
				case 19:
					iVar0 = joaat("prop_mb_cargo_04a");
					break;
				
				case 20:
					iVar0 = joaat("h4_prop_h4_mil_crate_02");
					break;
				
				case 21:
					iVar0 = joaat("h4_prop_h4_mil_crate_02");
					break;
				
				case 22:
					iVar0 = joaat("h4_prop_h4_mil_crate_02");
					break;
				
				case 23:
					iVar0 = joaat("h4_prop_h4_mil_crate_02");
					break;
				
				case 24:
					iVar0 = joaat("h4_prop_h4_mil_crate_02");
					break;
			}
			break;
		
		case 61:
			switch (iParam1)
			{
				case 10:
					iVar0 = joaat("prop_boxpile_07a");
					break;
				
				case 11:
					iVar0 = joaat("prop_box_wood03a");
					break;
				
				case 12:
					iVar0 = joaat("prop_box_wood04a");
					break;
				
				case 13:
					iVar0 = joaat("prop_air_cargo_01a");
					break;
				
				case 14:
					iVar0 = joaat("prop_box_wood07a");
					break;
				
				case 15:
					iVar0 = joaat("prop_boxpile_02b");
					break;
				
				case 16:
					iVar0 = joaat("prop_boxpile_02b");
					break;
				
				case 17:
					iVar0 = joaat("prop_mb_cargo_04a");
					break;
				
				case 18:
					iVar0 = joaat("prop_mb_crate_01b");
					break;
				
				case 19:
					iVar0 = joaat("prop_air_cargo_01a");
					break;
				
				case 20:
					iVar0 = joaat("prop_mb_crate_01b");
					break;
				
				case 21:
					iVar0 = joaat("h4_prop_h4_mil_crate_02");
					break;
				
				case 22:
					iVar0 = joaat("h4_prop_h4_mil_crate_02");
					break;
				
				case 23:
					iVar0 = joaat("h4_prop_h4_mil_crate_02");
					break;
				
				case 24:
					iVar0 = joaat("h4_prop_h4_mil_crate_02");
					break;
				
				case 25:
					iVar0 = joaat("h4_prop_h4_mil_crate_02");
					break;
			}
			break;
		
		case 62:
			switch (iParam1)
			{
				case 9:
					iVar0 = joaat("prop_box_wood07a");
					break;
				
				case 10:
					iVar0 = joaat("prop_boxpile_02b");
					break;
				
				case 11:
					iVar0 = joaat("prop_boxpile_07a");
					break;
				
				case 12:
					iVar0 = joaat("prop_box_wood04a");
					break;
				
				case 13:
					iVar0 = joaat("prop_box_wood03a");
					break;
				
				case 14:
					iVar0 = joaat("prop_air_cargo_01a");
					break;
				
				case 15:
					iVar0 = joaat("prop_air_cargo_01a");
					break;
				
				case 16:
					iVar0 = joaat("prop_mb_cargo_04a");
					break;
				
				case 17:
					iVar0 = joaat("prop_mb_crate_01b");
					break;
				
				case 18:
					iVar0 = joaat("prop_mb_crate_01b");
					break;
				
				case 19:
					iVar0 = joaat("h4_prop_h4_mil_crate_02");
					break;
				
				case 20:
					iVar0 = joaat("h4_prop_h4_mil_crate_02");
					break;
				
				case 21:
					iVar0 = joaat("h4_prop_h4_mil_crate_02");
					break;
				
				case 22:
					iVar0 = joaat("h4_prop_h4_mil_crate_02");
					break;
				
				case 23:
					iVar0 = joaat("h4_prop_h4_mil_crate_02");
					break;
			}
			break;
		
		case 54:
		case 55:
			switch (iParam1)
			{
				case 14:
					iVar0 = joaat("prop_mb_cargo_03a");
					break;
				
				case 15:
					iVar0 = joaat("prop_mb_cargo_04a");
					break;
				
				case 16:
					iVar0 = joaat("prop_air_cargo_01a");
					break;
				
				case 17:
					iVar0 = joaat("gr_prop_gr_rsply_crate02a");
					break;
				
				case 18:
					iVar0 = joaat("p_parachute_s_shop");
					break;
				
				case 19:
					iVar0 = joaat("p_parachute_s_shop");
					break;
			}
			break;
		
		case 56:
			switch (iParam1)
			{
				case 13:
					iVar0 = joaat("prop_mb_cargo_03a");
					break;
				
				case 14:
					iVar0 = joaat("prop_mb_cargo_04a");
					break;
				
				case 15:
					iVar0 = joaat("prop_air_cargo_01a");
					break;
				
				case 16:
					iVar0 = joaat("p_parachute_s_shop");
					break;
				
				case 17:
					iVar0 = joaat("p_parachute_s_shop");
					break;
				
				case 18:
					iVar0 = joaat("gr_prop_gr_rsply_crate02a");
					break;
			}
			break;
		
		case 25:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("prop_mb_cargo_04b");
					break;
				
				case 1:
					iVar0 = joaat("prop_air_cargo_01a");
					break;
				
				case 2:
					iVar0 = joaat("prop_mb_cargo_02a");
					break;
				
				case 3:
					iVar0 = joaat("prop_mb_cargo_04a");
					break;
				
				case 4:
					iVar0 = joaat("prop_elecbox_24b");
					break;
				
				case 5:
					iVar0 = joaat("prop_box_wood04a");
					break;
				
				case 6:
					iVar0 = joaat("prop_mb_crate_01b");
					break;
				
				case 7:
					iVar0 = joaat("gr_prop_gr_prop_welder_01a");
					break;
				
				case 8:
					iVar0 = joaat("gr_prop_gr_prop_welder_01a");
					break;
				
				case 9:
					iVar0 = joaat("prop_toolchest_05");
					break;
				
				case 10:
					iVar0 = joaat("prop_toolchest_05");
					break;
				
				case 11:
					iVar0 = joaat("imp_prop_covered_vehicle_02a");
					break;
				
				case 12:
					iVar0 = joaat("imp_prop_covered_vehicle_03a");
					break;
				
				case 13:
					iVar0 = joaat("gr_prop_gr_crates_sam_01a");
					break;
				
				case 14:
					iVar0 = joaat("gr_prop_gr_crates_sam_01a");
					break;
				
				case 15:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				
				case 16:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				
				case 17:
					iVar0 = joaat("gr_prop_gr_gunsmithsupl_02a");
					break;
				
				case 18:
					iVar0 = joaat("gr_prop_gr_gunsmithsupl_02a");
					break;
				
				case 19:
					break;
				
				case 20:
					break;
				
				case 21:
					iVar0 = joaat("imp_prop_covered_vehicle_01a");
					break;
				
				case 22:
					iVar0 = joaat("prop_cd_folder_pile1");
					break;
				
				case 23:
					iVar0 = joaat("prop_box_ammo07b");
					break;
				
				case 24:
					iVar0 = joaat("prop_box_guncase_01a");
					break;
				
				case 25:
					iVar0 = joaat("prop_box_ammo07b");
					break;
				
				case 26:
					iVar0 = joaat("prop_box_guncase_01a");
					break;
			}
			break;
		
		case 26:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					iVar0 = joaat("prop_mb_cargo_04b");
					break;
				
				case 2:
					iVar0 = joaat("prop_air_cargo_01a");
					break;
				
				case 3:
					iVar0 = joaat("prop_mb_cargo_02a");
					break;
				
				case 4:
					iVar0 = joaat("prop_mb_cargo_04a");
					break;
				
				case 5:
					iVar0 = joaat("prop_elecbox_24b");
					break;
				
				case 6:
					iVar0 = joaat("prop_box_wood04a");
					break;
				
				case 7:
					iVar0 = joaat("prop_mb_crate_01b");
					break;
				
				case 8:
					iVar0 = joaat("gr_prop_gr_prop_welder_01a");
					break;
				
				case 9:
					iVar0 = joaat("gr_prop_gr_prop_welder_01a");
					break;
				
				case 10:
					iVar0 = joaat("prop_toolchest_05");
					break;
				
				case 11:
					iVar0 = joaat("prop_toolchest_05");
					break;
				
				case 12:
					iVar0 = joaat("imp_prop_covered_vehicle_01a");
					break;
				
				case 13:
					iVar0 = joaat("imp_prop_covered_vehicle_02a");
					break;
				
				case 14:
					iVar0 = joaat("imp_prop_covered_vehicle_03a");
					break;
				
				case 15:
					iVar0 = joaat("gr_prop_gr_crates_sam_01a");
					break;
				
				case 16:
					iVar0 = joaat("gr_prop_gr_crates_sam_01a");
					break;
				
				case 17:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				
				case 18:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				
				case 19:
					iVar0 = joaat("gr_prop_gr_gunsmithsupl_02a");
					break;
				
				case 20:
					iVar0 = joaat("gr_prop_gr_gunsmithsupl_02a");
					break;
				
				case 21:
					break;
				
				case 22:
					iVar0 = joaat("prop_cd_folder_pile1");
					break;
				
				case 23:
					iVar0 = joaat("prop_box_ammo07b");
					break;
				
				case 24:
					iVar0 = joaat("prop_box_guncase_02a");
					break;
				
				case 25:
					iVar0 = joaat("prop_box_ammo07b");
					break;
				
				case 26:
					iVar0 = joaat("prop_box_guncase_02a");
					break;
			}
			break;
		
		case 27:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					iVar0 = joaat("prop_mb_cargo_04b");
					break;
				
				case 2:
					iVar0 = joaat("prop_air_cargo_01a");
					break;
				
				case 3:
					iVar0 = joaat("prop_mb_cargo_02a");
					break;
				
				case 4:
					iVar0 = joaat("prop_mb_cargo_04a");
					break;
				
				case 5:
					iVar0 = joaat("prop_elecbox_24b");
					break;
				
				case 6:
					iVar0 = joaat("prop_box_wood04a");
					break;
				
				case 7:
					iVar0 = joaat("prop_mb_crate_01b");
					break;
				
				case 8:
					iVar0 = joaat("gr_prop_gr_prop_welder_01a");
					break;
				
				case 9:
					iVar0 = joaat("gr_prop_gr_prop_welder_01a");
					break;
				
				case 10:
					iVar0 = joaat("prop_toolchest_05");
					break;
				
				case 11:
					iVar0 = joaat("prop_toolchest_05");
					break;
				
				case 12:
					iVar0 = joaat("imp_prop_covered_vehicle_01a");
					break;
				
				case 13:
					iVar0 = joaat("imp_prop_covered_vehicle_02a");
					break;
				
				case 14:
					iVar0 = joaat("imp_prop_covered_vehicle_03a");
					break;
				
				case 15:
					iVar0 = joaat("gr_prop_gr_crates_sam_01a");
					break;
				
				case 16:
					iVar0 = joaat("gr_prop_gr_crates_sam_01a");
					break;
				
				case 17:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				
				case 18:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				
				case 19:
					iVar0 = joaat("gr_prop_gr_gunsmithsupl_02a");
					break;
				
				case 20:
					iVar0 = joaat("gr_prop_gr_gunsmithsupl_02a");
					break;
				
				case 21:
					break;
				
				case 22:
					iVar0 = joaat("prop_box_guncase_02a");
					break;
				
				case 23:
					iVar0 = joaat("prop_box_ammo07b");
					break;
				
				case 24:
					iVar0 = joaat("prop_cd_folder_pile1");
					break;
				
				case 25:
					iVar0 = joaat("prop_box_ammo07b");
					break;
				
				case 26:
					iVar0 = joaat("prop_box_guncase_02a");
					break;
			}
			break;
	}
	return iVar0;
}

Vector3 func_179(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	switch (iParam0)
	{
		case 39:
			switch (iParam1)
			{
				case 0:
					Var0 = { 1165.44f, -3191.6f, -40.008f };
					break;
				
				case 1:
					Var0 = { 1158.08f, -3191.54f, -40.007f };
					break;
				
				case 2:
					Var0 = { 1156.9f, -3198.11f, -40.006f };
					break;
				
				case 3:
					Var0 = { 1171.24f, -3193.93f, -40.022f };
					break;
				
				case 4:
					Var0 = { 1167.76f, -3199.4f, -39.006f };
					break;
				
				case 5:
					Var0 = { 1162.08f, -3190.13f, -39.099f };
					break;
				
				case 6:
					Var0 = { 1162.58f, -3193.59f, -40.007f };
					break;
				
				case 7:
					Var0 = { 1164.8f, -3197.08f, -39.196f };
					break;
				
				case 8:
					Var0 = { 1161.66f, -3192.38f, -40.001f };
					break;
				
				case 9:
					Var0 = { 1161.03f, -3191.95f, -40.001f };
					break;
				
				case 10:
					Var0 = { 1156.45f, -3195.52f, -40.008f };
					break;
				
				case 14:
					Var0 = { 1160.54f, -3195.36f, -39.093f };
					break;
			}
			break;
		
		case 40:
			switch (iParam1)
			{
				case 0:
					Var0 = { 1165.44f, -3191.6f, -40.008f };
					break;
				
				case 1:
					Var0 = { 1158.08f, -3191.54f, -40.007f };
					break;
				
				case 2:
					Var0 = { 1156.9f, -3198.11f, -40.006f };
					break;
				
				case 3:
					Var0 = { 1171.52f, -3194.46f, -40.006f };
					break;
				
				case 4:
					Var0 = { 1167.81f, -3199.39f, -39.018f };
					break;
				
				case 5:
					Var0 = { 1162.06f, -3190.14f, -39.092f };
					break;
				
				case 6:
					Var0 = { 1162.58f, -3193.59f, -40.007f };
					break;
				
				case 7:
					Var0 = { 1164.9f, -3197.07f, -39.196f };
					break;
				
				case 8:
					Var0 = { 1161.66f, -3192.38f, -40.001f };
					break;
				
				case 9:
					Var0 = { 1161.03f, -3191.95f, -40.001f };
					break;
				
				case 10:
					Var0 = { 1156.45f, -3195.52f, -40.008f };
					break;
				
				case 14:
					Var0 = { 1160.49f, -3195.34f, -39.093f };
					break;
			}
			break;
		
		case 41:
			switch (iParam1)
			{
				case 0:
					Var0 = { 1165.44f, -3191.6f, -40.008f };
					break;
				
				case 1:
					Var0 = { 1158.08f, -3191.54f, -40.007f };
					break;
				
				case 2:
					Var0 = { 1156.9f, -3198.11f, -40.006f };
					break;
				
				case 3:
					Var0 = { 1171.31f, -3193.94f, -40.01f };
					break;
				
				case 4:
					Var0 = { 1167.74f, -3199.35f, -39.011f };
					break;
				
				case 5:
					Var0 = { 1162.09f, -3190.13f, -39.102f };
					break;
				
				case 6:
					Var0 = { 1162.58f, -3193.59f, -40.007f };
					break;
				
				case 7:
					Var0 = { 1164.66f, -3197.04f, -39.196f };
					break;
				
				case 8:
					Var0 = { 1161.66f, -3192.38f, -40.001f };
					break;
				
				case 9:
					Var0 = { 1161.03f, -3191.95f, -40.001f };
					break;
				
				case 10:
					Var0 = { 1156.45f, -3195.52f, -40.008f };
					break;
				
				case 14:
					Var0 = { 1160.53f, -3195.28f, -39.093f };
					break;
			}
			break;
		
		case 28:
			switch (iParam1)
			{
				case 0:
					Var0 = { -776.483f, 608.112f, 145.335f };
					break;
				
				case 1:
					Var0 = { -777.702f, 611.747f, 145.33f };
					break;
				
				case 2:
					Var0 = { -777.088f, 609.926f, 145.336f };
					break;
				
				case 3:
					Var0 = { -775.876f, 606.296f, 145.34f };
					break;
				
				case 4:
					Var0 = { -775.27f, 604.485f, 145.337f };
					break;
				
				case 5:
					Var0 = { -766.149f, 606.328f, 146.521f };
					break;
				
				case 6:
					Var0 = { -764.436f, 606.901f, 146.522f };
					break;
				
				case 7:
					Var0 = { -757.752f, 609.172f, 146.82f };
					break;
				
				case 8:
					Var0 = { -773.336f, 603.948f, 142.998f };
					break;
				
				case 9:
					Var0 = { -775.905f, 606.284f, 141.932f };
					break;
				
				case 10:
					Var0 = { -775.299f, 604.465f, 141.932f };
					break;
				
				case 11:
					Var0 = { -776.513f, 608.104f, 141.932f };
					break;
				
				case 12:
					Var0 = { -777.12f, 609.919f, 141.932f };
					break;
				
				case 13:
					Var0 = { -777.728f, 611.732f, 141.933f };
					break;
				
				case 14:
					Var0 = { -760.101f, 617.678f, 135.509f };
					break;
				
				case 15:
					Var0 = { -761.855f, 613.439f, 144.443f };
					break;
				
				case 16:
					Var0 = { -766.645f, 610.83f, 143.731f };
					break;
				
				case 17:
					Var0 = { -755.653f, 615.589f, 135.53f };
					break;
				
				case 18:
					Var0 = { -759.518f, 616.393f, 135.508f };
					break;
				
				case 19:
					Var0 = { -765.752f, 616.25f, 142.93f };
					break;
				
				case 20:
					Var0 = { -770.441f, 606.968f, 140.098f };
					break;
				
				case 21:
					Var0 = { -770.675f, 607.569f, 140.038f };
					break;
				
				case 22:
					Var0 = { -765.897f, 610.676f, 143.745f };
					break;
				
				case 23:
					Var0 = { -766.637f, 610.734f, 143.726f };
					break;
			}
			break;
		
		case 29:
			switch (iParam1)
			{
				case 0:
					Var0 = { -773.265f, 603.954f, 142.96f };
					break;
				
				case 1:
					Var0 = { -775.297f, 604.469f, 141.935f };
					break;
				
				case 2:
					Var0 = { -775.279f, 604.502f, 145.342f };
					break;
				
				case 3:
					Var0 = { -777.085f, 609.915f, 145.341f };
					break;
				
				case 4:
					Var0 = { -777.688f, 611.717f, 145.341f };
					break;
				
				case 5:
					Var0 = { -757.826f, 609.156f, 146.854f };
					break;
				
				case 6:
					Var0 = { -764.546f, 606.874f, 146.622f };
					break;
				
				case 7:
					Var0 = { -766.287f, 606.29f, 146.621f };
					break;
				
				case 8:
					Var0 = { -775.883f, 606.3f, 145.34f };
					break;
				
				case 9:
					Var0 = { -776.479f, 608.106f, 145.341f };
					break;
				
				case 10:
					Var0 = { -775.904f, 606.279f, 141.93f };
					break;
				
				case 11:
					Var0 = { -776.514f, 608.115f, 141.927f };
					break;
				
				case 12:
					Var0 = { -777.114f, 609.913f, 141.932f };
					break;
				
				case 13:
					Var0 = { -777.73f, 611.735f, 141.93f };
					break;
				
				case 14:
					Var0 = { -760.008f, 617.577f, 135.529f };
					break;
				
				case 15:
					Var0 = { -761.979f, 613.297f, 144.432f };
					break;
				
				case 16:
					Var0 = { -759.454f, 616.171f, 135.527f };
					break;
				
				case 17:
					Var0 = { -755.663f, 615.504f, 135.53f };
					break;
				
				case 18:
					Var0 = { -765.722f, 616.303f, 142.921f };
					break;
				
				case 19:
					Var0 = { -766.58f, 610.731f, 143.736f };
					break;
				
				case 20:
					Var0 = { -770.525f, 606.775f, 140.084f };
					break;
				
				case 21:
					Var0 = { -770.866f, 607.453f, 140.038f };
					break;
			}
			break;
		
		case 30:
			switch (iParam1)
			{
				case 0:
					Var0 = { -757.78f, 609.162f, 146.802f };
					break;
				
				case 1:
					Var0 = { -766.203f, 606.319f, 146.559f };
					break;
				
				case 2:
					Var0 = { -764.563f, 606.867f, 146.558f };
					break;
				
				case 3:
					Var0 = { -777.699f, 611.734f, 145.348f };
					break;
				
				case 4:
					Var0 = { -777.089f, 609.912f, 145.347f };
					break;
				
				case 5:
					Var0 = { -776.485f, 608.096f, 145.346f };
					break;
				
				case 6:
					Var0 = { -775.876f, 606.28f, 145.344f };
					break;
				
				case 7:
					Var0 = { -775.272f, 604.479f, 145.342f };
					break;
				
				case 8:
					Var0 = { -773.352f, 603.944f, 142.957f };
					break;
				
				case 9:
					Var0 = { -775.292f, 604.464f, 141.93f };
					break;
				
				case 10:
					Var0 = { -775.9f, 606.28f, 141.932f };
					break;
				
				case 11:
					Var0 = { -776.501f, 608.107f, 141.929f };
					break;
				
				case 12:
					Var0 = { -777.094f, 609.913f, 141.931f };
					break;
				
				case 13:
					Var0 = { -777.704f, 611.727f, 141.927f };
					break;
				
				case 14:
					Var0 = { -760.067f, 617.711f, 135.519f };
					break;
				
				case 15:
					Var0 = { -761.857f, 613.312f, 144.436f };
					break;
				
				case 16:
					Var0 = { -755.771f, 615.58f, 135.53f };
					break;
				
				case 17:
					Var0 = { -759.542f, 616.43f, 135.428f };
					break;
				
				case 18:
					Var0 = { -765.681f, 616.25f, 142.925f };
					break;
				
				case 19:
					Var0 = { -766.199f, 610.998f, 143.736f };
					break;
				
				case 20:
					Var0 = { -770.641f, 606.95f, 140.067f };
					break;
				
				case 21:
					Var0 = { -770.854f, 607.562f, 140.035f };
					break;
			}
			break;
		
		case 51:
			switch (iParam1)
			{
				case 0:
					Var0 = { -1556.08f, -579.813f, 111.013f };
					break;
				
				case 1:
					Var0 = { -1554.52f, -578.673f, 111.013f };
					break;
				
				case 2:
					Var0 = { -1552.97f, -577.536f, 111.01f };
					break;
				
				case 3:
					Var0 = { -1557.62f, -580.932f, 111.014f };
					break;
				
				case 4:
					Var0 = { -1559.78f, -582.504f, 110.976f };
					break;
				
				case 5:
					Var0 = { -1561.27f, -583.588f, 110.978f };
					break;
				
				case 6:
					Var0 = { -1562.74f, -584.654f, 110.977f };
					break;
				
				case 7:
					Var0 = { -1564.21f, -585.721f, 110.976f };
					break;
				
				case 8:
					Var0 = { -1565.64f, -586.759f, 110.98f };
					break;
				
				case 9:
					Var0 = { -1567.12f, -587.838f, 110.979f };
					break;
				
				case 10:
					Var0 = { -1569.32f, -589.432f, 111.009f };
					break;
				
				case 11:
					Var0 = { -1572.47f, -591.724f, 111.008f };
					break;
				
				case 12:
					Var0 = { -1570.88f, -590.57f, 111.005f };
					break;
				
				case 14:
					Var0 = { -1556.14f, -575.462f, 108.362f };
					break;
				
				case 15:
					Var0 = { -1554.89f, -571.738f, 108.101f };
					break;
				
				case 16:
					Var0 = { -1554.76f, -571.925f, 108.052f };
					break;
				
				case 17:
					Var0 = { -1555.03f, -571.701f, 108.065f };
					break;
				
				case 18:
					Var0 = { -1554.5f, -572.978f, 107.494f };
					break;
				
				case 19:
					Var0 = { -1554.78f, -573.08f, 107.529f };
					break;
				
				case 20:
					Var0 = { -1555.4f, -571.738f, 108.599f };
					break;
			}
			break;
		
		case 52:
			switch (iParam1)
			{
				case 0:
					Var0 = { -1556.07f, -579.803f, 111.027f };
					break;
				
				case 1:
					Var0 = { -1554.53f, -578.681f, 111.021f };
					break;
				
				case 2:
					Var0 = { -1552.99f, -577.554f, 111.024f };
					break;
				
				case 3:
					Var0 = { -1557.62f, -580.933f, 111.024f };
					break;
				
				case 4:
					Var0 = { -1559.91f, -582.582f, 110.955f };
					break;
				
				case 5:
					Var0 = { -1561.35f, -583.627f, 110.958f };
					break;
				
				case 6:
					Var0 = { -1562.81f, -584.689f, 110.954f };
					break;
				
				case 7:
					Var0 = { -1564.31f, -585.781f, 110.953f };
					break;
				
				case 8:
					Var0 = { -1565.59f, -586.719f, 110.954f };
					break;
				
				case 9:
					Var0 = { -1567.09f, -587.805f, 110.954f };
					break;
				
				case 10:
					Var0 = { -1569.33f, -589.432f, 111.002f };
					break;
				
				case 11:
					Var0 = { -1572.5f, -591.744f, 110.994f };
					break;
				
				case 12:
					Var0 = { -1570.9f, -590.583f, 110.997f };
					break;
				
				case 14:
					Var0 = { -1556.11f, -575.479f, 108.372f };
					break;
				
				case 15:
					Var0 = { -1554.47f, -572.967f, 107.525f };
					break;
				
				case 16:
					Var0 = { -1554.77f, -573.14f, 107.535f };
					break;
				
				case 17:
					Var0 = { -1554.78f, -571.919f, 108.074f };
					break;
				
				case 18:
					Var0 = { -1554.88f, -571.728f, 108.109f };
					break;
				
				case 19:
					Var0 = { -1554.96f, -571.639f, 108.149f };
					break;
				
				case 20:
					Var0 = { -1555.41f, -571.733f, 108.581f };
					break;
			}
			break;
		
		case 53:
			switch (iParam1)
			{
				case 0:
					Var0 = { -1556.07f, -579.804f, 111.021f };
					break;
				
				case 1:
					Var0 = { -1554.51f, -578.669f, 111.021f };
					break;
				
				case 2:
					Var0 = { -1552.96f, -577.541f, 111.02f };
					break;
				
				case 3:
					Var0 = { -1557.62f, -580.931f, 111.02f };
					break;
				
				case 4:
					Var0 = { -1559.91f, -582.595f, 110.941f };
					break;
				
				case 5:
					Var0 = { -1561.41f, -583.686f, 110.941f };
					break;
				
				case 6:
					Var0 = { -1562.79f, -584.688f, 110.942f };
					break;
				
				case 7:
					Var0 = { -1564.24f, -585.738f, 110.934f };
					break;
				
				case 8:
					Var0 = { -1565.69f, -586.794f, 110.932f };
					break;
				
				case 9:
					Var0 = { -1567.01f, -587.755f, 110.933f };
					break;
				
				case 10:
					Var0 = { -1569.32f, -589.433f, 110.994f };
					break;
				
				case 11:
					Var0 = { -1572.46f, -591.715f, 110.991f };
					break;
				
				case 12:
					Var0 = { -1570.89f, -590.573f, 110.993f };
					break;
				
				case 14:
					Var0 = { -1556.16f, -575.495f, 108.366f };
					break;
				
				case 15:
					Var0 = { -1554.69f, -573.113f, 107.565f };
					break;
				
				case 16:
					Var0 = { -1554.92f, -571.749f, 108.114f };
					break;
				
				case 17:
					Var0 = { -1554.97f, -571.647f, 108.087f };
					break;
				
				case 18:
					Var0 = { -1554.81f, -571.941f, 108.193f };
					break;
				
				case 19:
					Var0 = { -1555.41f, -571.733f, 108.577f };
					break;
			}
			break;
		
		case 45:
			switch (iParam1)
			{
				case 2:
					Var0 = { 970.361f, -3008.27f, -48.547f };
					break;
				
				case 3:
					Var0 = { 962.617f, -3008.31f, -48.547f };
					break;
				
				case 4:
					Var0 = { 955.074f, -3010.29f, -48.547f };
					break;
				
				case 5:
					Var0 = { 955.655f, -3010.34f, -47.749f };
					break;
				
				case 6:
					Var0 = { 962.567f, -3008.32f, -48.547f };
					break;
				
				case 7:
					Var0 = { 952.557f, -3006.29f, -47.651f };
					break;
				
				case 8:
					Var0 = { 953.653f, -3009.95f, -47.731f };
					break;
				
				case 9:
					Var0 = { 954.945f, -3008.41f, -47.945f };
					break;
				
				case 10:
					Var0 = { 960.759f, -3007.08f, -47.944f };
					break;
				
				case 11:
					Var0 = { 964.01f, -3004.83f, -47.944f };
					break;
				
				case 12:
					Var0 = { 968.329f, -3008.86f, -47.944f };
					break;
				
				case 13:
					Var0 = { 971.982f, -3006.9f, -47.944f };
					break;
				
				case 14:
					Var0 = { 952.421f, -3007.53f, -48.547f };
					break;
				
				case 15:
					Var0 = { 1093.96f, -3098.97f, -40f };
					break;
				
				case 16:
					Var0 = { 1097.94f, -3101.85f, -39.416f };
					break;
				
				case 17:
					Var0 = { 1091.8f, -3102.1f, -40f };
					break;
				
				case 18:
					Var0 = { 1101.32f, -3097.06f, -40f };
					break;
				
				case 19:
					Var0 = { 1097.54f, -3098f, -39.999f };
					break;
				
				case 20:
					Var0 = { 1095.04f, -3096.34f, -40f };
					break;
				
				case 21:
					Var0 = { 1096.17f, -3102.22f, -40f };
					break;
				
				case 22:
					Var0 = { 1088.7f, -3097.29f, -39.997f };
					break;
				
				case 23:
					Var0 = { 1101.8f, -3101.48f, -39.997f };
					break;
				
				case 24:
					Var0 = { 1095.14f, -3098.11f, -39.404f };
					break;
				
				case 25:
					Var0 = { 1101.32f, -3100.76f, -38.843f };
					break;
			}
			break;
		
		case 46:
			switch (iParam1)
			{
				case 2:
					Var0 = { 970.361f, -3008.27f, -48.547f };
					break;
				
				case 3:
					Var0 = { 962.617f, -3008.31f, -48.547f };
					break;
				
				case 4:
					Var0 = { 955.074f, -3010.29f, -48.547f };
					break;
				
				case 5:
					Var0 = { 955.655f, -3010.34f, -47.749f };
					break;
				
				case 6:
					Var0 = { 962.567f, -3008.32f, -48.547f };
					break;
				
				case 7:
					Var0 = { 952.557f, -3006.29f, -47.651f };
					break;
				
				case 8:
					Var0 = { 953.653f, -3009.95f, -47.731f };
					break;
				
				case 9:
					Var0 = { 954.945f, -3008.41f, -47.945f };
					break;
				
				case 10:
					Var0 = { 960.759f, -3007.08f, -47.944f };
					break;
				
				case 11:
					Var0 = { 964.01f, -3004.83f, -47.944f };
					break;
				
				case 12:
					Var0 = { 968.329f, -3008.86f, -47.944f };
					break;
				
				case 13:
					Var0 = { 971.982f, -3006.9f, -47.944f };
					break;
				
				case 14:
					Var0 = { 952.421f, -3007.53f, -48.547f };
					break;
				
				case 15:
					Var0 = { 1093.96f, -3098.97f, -40f };
					break;
				
				case 16:
					Var0 = { 1097.94f, -3101.85f, -39.416f };
					break;
				
				case 17:
					Var0 = { 1091.8f, -3102.1f, -40f };
					break;
				
				case 18:
					Var0 = { 1101.32f, -3097.06f, -40f };
					break;
				
				case 19:
					Var0 = { 1097.54f, -3098f, -39.999f };
					break;
				
				case 20:
					Var0 = { 1095.04f, -3096.34f, -40f };
					break;
				
				case 21:
					Var0 = { 1096.17f, -3102.22f, -40f };
					break;
				
				case 22:
					Var0 = { 1088.7f, -3097.29f, -39.997f };
					break;
				
				case 23:
					Var0 = { 1101.8f, -3101.48f, -39.997f };
					break;
				
				case 24:
					Var0 = { 1095.14f, -3098.11f, -39.404f };
					break;
				
				case 25:
					Var0 = { 1101.32f, -3100.76f, -38.843f };
					break;
			}
			break;
		
		case 47:
			switch (iParam1)
			{
				case 2:
					Var0 = { 970.361f, -3008.27f, -48.547f };
					break;
				
				case 3:
					Var0 = { 962.617f, -3008.31f, -48.547f };
					break;
				
				case 4:
					Var0 = { 955.074f, -3010.29f, -48.547f };
					break;
				
				case 5:
					Var0 = { 955.655f, -3010.34f, -47.749f };
					break;
				
				case 6:
					Var0 = { 962.567f, -3008.32f, -48.547f };
					break;
				
				case 7:
					Var0 = { 952.557f, -3006.29f, -47.651f };
					break;
				
				case 8:
					Var0 = { 953.653f, -3009.95f, -47.731f };
					break;
				
				case 9:
					Var0 = { 954.945f, -3008.41f, -47.945f };
					break;
				
				case 10:
					Var0 = { 960.759f, -3007.08f, -47.944f };
					break;
				
				case 11:
					Var0 = { 964.01f, -3004.83f, -47.944f };
					break;
				
				case 12:
					Var0 = { 968.329f, -3008.86f, -47.944f };
					break;
				
				case 13:
					Var0 = { 971.982f, -3006.9f, -47.944f };
					break;
				
				case 14:
					Var0 = { 952.421f, -3007.53f, -48.547f };
					break;
				
				case 15:
					Var0 = { 1093.96f, -3098.97f, -40f };
					break;
				
				case 16:
					Var0 = { 1097.94f, -3101.85f, -39.416f };
					break;
				
				case 17:
					Var0 = { 1091.8f, -3102.1f, -40f };
					break;
				
				case 18:
					Var0 = { 1101.32f, -3097.06f, -40f };
					break;
				
				case 19:
					Var0 = { 1097.54f, -3098f, -39.999f };
					break;
				
				case 20:
					Var0 = { 1095.04f, -3096.34f, -40f };
					break;
				
				case 21:
					Var0 = { 1096.17f, -3102.22f, -40f };
					break;
				
				case 22:
					Var0 = { 1088.7f, -3097.29f, -39.997f };
					break;
				
				case 23:
					Var0 = { 1101.8f, -3101.48f, -39.997f };
					break;
				
				case 24:
					Var0 = { 1095.14f, -3098.11f, -39.404f };
					break;
				
				case 25:
					Var0 = { 1101.32f, -3100.76f, -38.843f };
					break;
			}
			break;
		
		case 60:
			switch (iParam1)
			{
				case 9:
					Var0 = { 1060.03f, -3098.1f, -39.993f };
					break;
				
				case 10:
					Var0 = { 1053.52f, -3107.47f, -39.997f };
					break;
				
				case 11:
					Var0 = { 1068.56f, -3100.27f, -39.911f };
					break;
				
				case 12:
					Var0 = { 1068.13f, -3106.15f, -39.875f };
					break;
				
				case 13:
					Var0 = { 1050.45f, -3095.33f, -39.875f };
					break;
				
				case 14:
					Var0 = { 1062.71f, -3102.73f, -39.999f };
					break;
				
				case 15:
					Var0 = { 1062.64f, -3109.4f, -40.104f };
					break;
				
				case 16:
					Var0 = { 1055.59f, -3095.77f, -40.004f };
					break;
				
				case 17:
					Var0 = { 1062.8f, -3096.05f, -40f };
					break;
				
				case 18:
					Var0 = { 1057.94f, -3110.31f, -40f };
					break;
				
				case 19:
					Var0 = { 1055.37f, -3102.58f, -40f };
					break;
				
				case 20:
					Var0 = { 1050.41f, -3096.75f, -40f };
					break;
				
				case 21:
					Var0 = { 1065.13f, -3095.59f, -40f };
					break;
				
				case 22:
					Var0 = { 1057.63f, -3102.73f, -40f };
					break;
				
				case 23:
					Var0 = { 1060.28f, -3109.25f, -40f };
					break;
				
				case 24:
					Var0 = { 1052.12f, -3107.19f, -40f };
					break;
			}
			break;
		
		case 61:
			switch (iParam1)
			{
				case 10:
					Var0 = { 1062.73f, -3102.65f, -40.005f };
					break;
				
				case 11:
					Var0 = { 1059.84f, -3098.36f, -39.993f };
					break;
				
				case 12:
					Var0 = { 1053.18f, -3107.29f, -39.997f };
					break;
				
				case 13:
					Var0 = { 1055.54f, -3095.79f, -40.004f };
					break;
				
				case 14:
					Var0 = { 1068.45f, -3100.11f, -39.911f };
					break;
				
				case 15:
					Var0 = { 1068.19f, -3106.3f, -39.875f };
					break;
				
				case 16:
					Var0 = { 1050.28f, -3095.22f, -39.875f };
					break;
				
				case 17:
					Var0 = { 1055.49f, -3102.77f, -40f };
					break;
				
				case 18:
					Var0 = { 1062.57f, -3096.19f, -40f };
					break;
				
				case 19:
					Var0 = { 1062.73f, -3109.38f, -40.004f };
					break;
				
				case 20:
					Var0 = { 1057.81f, -3110.68f, -40f };
					break;
				
				case 21:
					Var0 = { 1050.54f, -3097.03f, -40f };
					break;
				
				case 22:
					Var0 = { 1065.13f, -3095.94f, -40f };
					break;
				
				case 23:
					Var0 = { 1057.57f, -3102.46f, -40f };
					break;
				
				case 24:
					Var0 = { 1052.05f, -3106.59f, -40f };
					break;
				
				case 25:
					Var0 = { 1060.13f, -3109.52f, -40.1f };
					break;
			}
			break;
		
		case 62:
			switch (iParam1)
			{
				case 9:
					Var0 = { 1051.8f, -3100.1f, -39.911f };
					break;
				
				case 10:
					Var0 = { 1053.11f, -3096.68f, -39.875f };
					break;
				
				case 11:
					Var0 = { 1057.84f, -3102.69f, -39.999f };
					break;
				
				case 12:
					Var0 = { 1068.43f, -3107.14f, -39.997f };
					break;
				
				case 13:
					Var0 = { 1060.64f, -3097.96f, -39.993f };
					break;
				
				case 14:
					Var0 = { 1060.27f, -3109.22f, -40.004f };
					break;
				
				case 15:
					Var0 = { 1065.18f, -3095.68f, -40.004f };
					break;
				
				case 16:
					Var0 = { 1065.26f, -3102.84f, -40f };
					break;
				
				case 17:
					Var0 = { 1055.62f, -3110.61f, -40f };
					break;
				
				case 18:
					Var0 = { 1057.95f, -3095.86f, -40f };
					break;
				
				case 19:
					Var0 = { 1057.89f, -3109.3f, -40f };
					break;
				
				case 20:
					Var0 = { 1062.7f, -3095.94f, -40f };
					break;
				
				case 21:
					Var0 = { 1067.55f, -3102.7f, -40f };
					break;
				
				case 22:
					Var0 = { 1065.21f, -3109.07f, -40f };
					break;
				
				case 23:
					Var0 = { 1069.96f, -3096.07f, -40.019f };
					break;
			}
			break;
		
		case 54:
		case 55:
			switch (iParam1)
			{
				case 14:
					Var0 = { 527.034f, 4750.56f, -69.996f };
					break;
				
				case 15:
					Var0 = { 523.106f, 4748.99f, -69.996f };
					break;
				
				case 16:
					Var0 = { 520.783f, 4751.96f, -70f };
					break;
				
				case 17:
					Var0 = { 509.587f, 4749.41f, -69.816f };
					break;
				
				case 18:
					Var0 = { 508.629f, 4748.8f, -68.493f };
					break;
				
				case 19:
					Var0 = { 507.79f, 4748.8f, -68.49f };
					break;
			}
			break;
		
		case 56:
			switch (iParam1)
			{
				case 13:
					Var0 = { 527.282f, 4750.55f, -69.978f };
					break;
				
				case 14:
					Var0 = { 523.103f, 4749.02f, -69.996f };
					break;
				
				case 15:
					Var0 = { 520.286f, 4752.03f, -70f };
					break;
				
				case 16:
					Var0 = { 508.642f, 4748.81f, -68.53f };
					break;
				
				case 17:
					Var0 = { 507.783f, 4748.78f, -68.551f };
					break;
				
				case 18:
					Var0 = { 509.609f, 4749.65f, -69.816f };
					break;
			}
			break;
		
		case 25:
			switch (iParam1)
			{
				case 0:
					Var0 = { -1284.05f, -3015.49f, -49.49f };
					break;
				
				case 1:
					Var0 = { -1282.61f, -3019.03f, -49.494f };
					break;
				
				case 2:
					Var0 = { -1253.14f, -3011.39f, -49.49f };
					break;
				
				case 3:
					Var0 = { -1251.87f, -3013.93f, -49.49f };
					break;
				
				case 4:
					Var0 = { -1230.81f, -3062.46f, -49.585f };
					break;
				
				case 5:
					Var0 = { -1254.58f, -3013.43f, -49.488f };
					break;
				
				case 6:
					Var0 = { -1281.58f, -3016.27f, -49.49f };
					break;
				
				case 7:
					Var0 = { -1270.88f, -3008.99f, -49.489f };
					break;
				
				case 8:
					Var0 = { -1256.88f, -3028.78f, -49.489f };
					break;
				
				case 9:
					Var0 = { -1257.27f, -2992.3f, -49.491f };
					break;
				
				case 10:
					Var0 = { -1271.01f, -3006.86f, -49.491f };
					break;
				
				case 11:
					Var0 = { -1250.56f, -3033.55f, -49.488f };
					break;
				
				case 12:
					Var0 = { -1293.63f, -3005.67f, -49.488f };
					break;
				
				case 13:
					Var0 = { -1240.41f, -3017.84f, -49.49f };
					break;
				
				case 14:
					Var0 = { -1236.94f, -3009.41f, -49.489f };
					break;
				
				case 15:
					Var0 = { -1243.08f, -3007.01f, -49.493f };
					break;
				
				case 16:
					Var0 = { -1234.46f, -3001.42f, -49.513f };
					break;
				
				case 17:
					Var0 = { -1229.99f, -3013.47f, -49.487f };
					break;
				
				case 18:
					Var0 = { -1237.01f, -2998.21f, -49.487f };
					break;
				
				case 19:
					break;
				
				case 20:
					break;
				
				case 21:
					Var0 = { -1253.65f, -3036.25f, -49.484f };
					break;
				
				case 22:
					Var0 = { -1241.2f, -3002.71f, -42.888f };
					break;
				
				case 23:
					Var0 = { -1239.3f, -3002.78f, -43.08f };
					break;
				
				case 24:
					Var0 = { -1239.61f, -3002.97f, -43.086f };
					break;
				
				case 25:
					Var0 = { -1299.62f, -3031.62f, -48.686f };
					break;
				
				case 26:
					Var0 = { -1299.52f, -3030.31f, -48.707f };
					break;
			}
			break;
		
		case 26:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					Var0 = { -1284.05f, -3015.49f, -49.49f };
					break;
				
				case 2:
					Var0 = { -1282.61f, -3019.03f, -49.494f };
					break;
				
				case 3:
					Var0 = { -1253.14f, -3011.39f, -49.49f };
					break;
				
				case 4:
					Var0 = { -1251.87f, -3013.93f, -49.49f };
					break;
				
				case 5:
					Var0 = { -1230.81f, -3062.46f, -49.585f };
					break;
				
				case 6:
					Var0 = { -1254.58f, -3013.43f, -49.488f };
					break;
				
				case 7:
					Var0 = { -1281.58f, -3016.27f, -49.49f };
					break;
				
				case 8:
					Var0 = { -1270.88f, -3008.99f, -49.489f };
					break;
				
				case 9:
					Var0 = { -1253.17f, -3028.16f, -49.489f };
					break;
				
				case 10:
					Var0 = { -1257.27f, -2992.3f, -49.491f };
					break;
				
				case 11:
					Var0 = { -1270.55f, -3007f, -49.491f };
					break;
				
				case 12:
					Var0 = { -1254.13f, -3033.29f, -49.484f };
					break;
				
				case 13:
					Var0 = { -1250.51f, -3034.71f, -49.488f };
					break;
				
				case 14:
					Var0 = { -1293.63f, -3005.67f, -49.488f };
					break;
				
				case 15:
					Var0 = { -1240.41f, -3017.84f, -49.49f };
					break;
				
				case 16:
					Var0 = { -1236.94f, -3009.41f, -49.489f };
					break;
				
				case 17:
					Var0 = { -1243.08f, -3007.01f, -49.493f };
					break;
				
				case 18:
					Var0 = { -1234.46f, -3001.42f, -49.513f };
					break;
				
				case 19:
					Var0 = { -1229.99f, -3013.47f, -49.487f };
					break;
				
				case 20:
					Var0 = { -1237.01f, -2998.21f, -49.487f };
					break;
				
				case 21:
					break;
				
				case 22:
					Var0 = { -1241.19f, -3002.96f, -42.884f };
					break;
				
				case 23:
					Var0 = { -1240.54f, -3003.18f, -43.067f };
					break;
				
				case 24:
					Var0 = { -1239.34f, -3002.96f, -43.085f };
					break;
				
				case 25:
					Var0 = { -1299.53f, -3031.74f, -48.686f };
					break;
				
				case 26:
					Var0 = { -1299.52f, -3030.39f, -48.711f };
					break;
			}
			break;
		
		case 27:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					Var0 = { -1284.05f, -3015.49f, -49.49f };
					break;
				
				case 2:
					Var0 = { -1282.61f, -3019.03f, -49.494f };
					break;
				
				case 3:
					Var0 = { -1253.14f, -3011.39f, -49.49f };
					break;
				
				case 4:
					Var0 = { -1251.87f, -3013.93f, -49.49f };
					break;
				
				case 5:
					Var0 = { -1230.81f, -3062.46f, -49.585f };
					break;
				
				case 6:
					Var0 = { -1254.58f, -3013.43f, -49.488f };
					break;
				
				case 7:
					Var0 = { -1281.58f, -3016.27f, -49.49f };
					break;
				
				case 8:
					Var0 = { -1270.88f, -3008.99f, -49.489f };
					break;
				
				case 9:
					Var0 = { -1253.17f, -3028.16f, -49.489f };
					break;
				
				case 10:
					Var0 = { -1257.27f, -2992.3f, -49.491f };
					break;
				
				case 11:
					Var0 = { -1270.55f, -3007f, -49.491f };
					break;
				
				case 12:
					Var0 = { -1253.62f, -3034.36f, -49.484f };
					break;
				
				case 13:
					Var0 = { -1250.1f, -3035.93f, -49.488f };
					break;
				
				case 14:
					Var0 = { -1293.63f, -3005.67f, -49.488f };
					break;
				
				case 15:
					Var0 = { -1240.41f, -3017.84f, -49.49f };
					break;
				
				case 16:
					Var0 = { -1236.94f, -3009.41f, -49.489f };
					break;
				
				case 17:
					Var0 = { -1243.08f, -3007.01f, -49.493f };
					break;
				
				case 18:
					Var0 = { -1234.46f, -3001.42f, -49.513f };
					break;
				
				case 19:
					Var0 = { -1229.99f, -3013.47f, -49.487f };
					break;
				
				case 20:
					Var0 = { -1237.01f, -2998.21f, -49.487f };
					break;
				
				case 21:
					break;
				
				case 22:
					Var0 = { -1239.38f, -3002.83f, -43.087f };
					break;
				
				case 23:
					Var0 = { -1240.49f, -3002.92f, -43.063f };
					break;
				
				case 24:
					Var0 = { -1241.19f, -3002.83f, -42.88f };
					break;
				
				case 25:
					Var0 = { -1299.56f, -3030.33f, -48.686f };
					break;
				
				case 26:
					Var0 = { -1299.46f, -3031.64f, -48.708f };
					break;
			}
			break;
	}
	return Var0;
}

int func_180(int iParam0)
{
	if (func_101(iParam0, 0))
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_192;
	}
	return -1;
}

void func_181()
{
	int iVar0;
	struct<3> Var1;
	
	if (func_108(unk_0x460153A63B9477BC()) == 256)
	{
		iVar0 = -1;
		switch (func_107(unk_0x460153A63B9477BC()))
		{
			case 19:
				iVar0 = func_180(unk_0x460153A63B9477BC());
				switch (iVar0)
				{
					case 48:
						Var1 = { -2136.9f, 5406.84f, -72.701f };
						break;
					
					case 49:
						Var1 = { 3721.85f, 6010.4f, -153.529f };
						break;
					
					case 50:
						Var1 = { 204.126f, 7645.72f, -153.104f };
						break;
				}
				if (((!unk_0x4DC4117F94CD5B84(unk_0x460153A63B9477BC()) && !unk_0x03DB5C6AABF8DA46()) && unk_0xB7A628320EFF8E47(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 0), Var1) < 25f) && !unk_0xF0C12886E5C1B20E())
				{
					if (func_22(&uLocal_72, 20000, 0))
					{
						unk_0x1D40553EDD51A1B8(0);
					}
				}
				else if (func_24(&uLocal_72))
				{
					func_20(&uLocal_72);
				}
				break;
			
			case 17:
				if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), 971.6008f, 60.19165f, 118.2942f, 967.9448f, 53.68709f, 119.7942f, 9.5f, 0, 1, 0))
				{
					unk_0x03D382CB0B44E2FC(unk_0x9B0761B4C3EB8BC7(), 972.0234f, 58.7202f, 115.1641f, 1, 0, 0, 1);
					unk_0xE922BAA80E8F9324(unk_0x9B0761B4C3EB8BC7(), 111.7022f);
				}
				break;
		}
	}
	else if (func_24(&uLocal_72))
	{
		func_20(&uLocal_72);
	}
}

void func_182()
{
	if (Global_2540384.f_342)
	{
		unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), 0, 0);
		unk_0x779660A9E5364C4D(2, 201, 1);
		iLocal_69 = 1;
		func_20(&uLocal_70);
	}
	else if (iLocal_69)
	{
		if ((!func_22(&uLocal_70, 1500, 0) || !unk_0x87F0CB19476706C3()) || unk_0x5B772EFCB84373BE())
		{
			unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), 0, 0);
			unk_0x779660A9E5364C4D(2, 201, 1);
		}
		else
		{
			unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), 1, 0);
			iLocal_69 = 0;
			func_20(&uLocal_70);
		}
	}
}

void func_183()
{
	bool bVar0;
	var uVar1;
	
	if (func_38())
	{
		unk_0x779660A9E5364C4D(0, 74, 1);
		unk_0x779660A9E5364C4D(0, 104, 1);
		unk_0x779660A9E5364C4D(0, 54, 1);
	}
	if (func_184(unk_0x460153A63B9477BC(), 1, 1))
	{
		if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 1))
		{
			uVar1 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 1);
			if (!unk_0xA59F96B50B97E63C(uVar1, 0))
			{
				if (unk_0x36FE6D3220816ADA(iVar1) == joaat("dune3") || unk_0x36FE6D3220816ADA(iVar1) == joaat("apc"))
				{
					unk_0x779660A9E5364C4D(0, 104, 1);
					unk_0x779660A9E5364C4D(0, 54, 1);
				}
			}
		}
	}
	if (unk_0x018979C457E7B3A2(unk_0x9B0761B4C3EB8BC7(), 373))
	{
		if (Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_314.f_6 != -1 && func_31(Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_314.f_6) == 11)
		{
			bVar0 = true;
			if (!iLocal_27 || !Global_1689673)
			{
				Global_1689673 = 1;
				iLocal_27 = 1;
			}
		}
	}
	if (!bVar0)
	{
		if (iLocal_27)
		{
			if (!iLocal_26)
			{
				Global_1689673 = 0;
			}
			iLocal_27 = 0;
		}
	}
}

int func_184(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_32())
	{
		return 0;
	}
	if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_26, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_26, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
		{
			return 1;
		}
	}
	return 0;
}

void func_185()
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	float fVar46;
	float fVar47;
	struct<3> Var48;
	
	if (func_24(&uLocal_18))
	{
		unk_0xBE20AB8238688965(&Global_7552, 2);
		if (func_22(&uLocal_18, 60000, 0))
		{
			func_90(&uLocal_18, 0, 0);
			func_20(&uLocal_18);
		}
	}
	if (func_24(&uLocal_16) && func_22(&uLocal_16, 1000, 0))
	{
		if (iLocal_25 == -1)
		{
			if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
			{
				iLocal_25 = unk_0x5E54B0823F46079E();
				unk_0x2DB2D4C3CB88500D(iLocal_25, "05", unk_0x9B0761B4C3EB8BC7(), "DLC_GR_CS2_Sounds", 0, 0);
			}
		}
		else if (func_22(&uLocal_16, 4000, 0))
		{
			if (!unk_0x046706CBB367B768(iLocal_25))
			{
				unk_0xC5E5600D1CF5CEF9(iLocal_25);
			}
			unk_0xADB6EEE689FE86DE(iLocal_25);
			iLocal_25 = -1;
			unk_0xFA07F8BEBDAAFBA8("DLC_GR_CS2_General_Scene");
			func_90(&uLocal_16, 0, 0);
			func_20(&uLocal_16);
		}
	}
	if (!iLocal_10 && !func_193())
	{
		return;
	}
	iLocal_10 = 1;
	unk_0xBE20AB8238688965(&Global_7552, 2);
	if (!unk_0xAE06B9E39EBDE049(uLocal_9))
	{
		iVar0 = joaat("imp_prop_ship_01a");
		unk_0x78FCB2E22C41B9D5(iVar0);
		if (unk_0x7D167B9A0CCDA347(iVar0))
		{
			iLocal_9 = unk_0x6E52E47D436A2C77(iVar0, 360.8759f, 5623.427f, 780.1747f, 0, 0, 1);
			unk_0x74528AC0906CBABE(iVar0);
			unk_0x6A8F948698B360B4(iLocal_9, 1);
			unk_0x1CCBC799127EA27B(iLocal_9, 8000);
			iVar1 = func_192(7867, -1, 0);
			func_191(7867, iVar1 + 1, -1, 1, 0);
			Var2.f_1 = 1;
			Var2.f_0 = 24;
			unk_0xCB78201804D687F2(&Var2);
			Local_20 = { unk_0x3E4D3CCC220BDFB1(iLocal_9, 0) };
			iLocal_23 = 0;
		}
	}
	else
	{
		func_190();
		if (unk_0x87F0CB19476706C3() || unk_0x5B772EFCB84373BE())
		{
			if (iLocal_24 == -1)
			{
				unk_0x17E478571720218F("DLC_GR_CS2_General_Scene");
				iLocal_24 = unk_0x5E54B0823F46079E();
				unk_0x2DB2D4C3CB88500D(iLocal_24, "07", iLocal_9, "DLC_GR_CS2_Sounds", 0, 0);
			}
			if (!iLocal_11)
			{
				if (func_22(&uLocal_12, 4500, 0))
				{
					unk_0x6A8F948698B360B4(iLocal_9, 0);
					func_90(&uLocal_12, 0, 0);
					func_20(&uLocal_12);
					func_23(&uLocal_14, 0, 0);
					iLocal_11 = 1;
				}
			}
			else
			{
				fVar46 = (unk_0xBBDA792448DB5A89(func_169(&uLocal_14, 0, 0)) / unk_0xBBDA792448DB5A89(func_189()));
				fVar47 = (unk_0xBBDA792448DB5A89(func_169(&uLocal_12, 0, 0)) / unk_0xBBDA792448DB5A89(func_188()));
				fVar47 = (fVar47 * fVar46);
				Var48 = { func_186(Local_20, func_187(), fVar47) };
				unk_0x03D382CB0B44E2FC(iLocal_9, Var48, 1, 0, 0, 1);
				if (fVar47 >= 1f)
				{
					iLocal_23++;
					Local_20 = { unk_0x3E4D3CCC220BDFB1(iLocal_9, 0) };
					func_90(&uLocal_12, 0, 0);
					func_20(&uLocal_12);
					if (func_188() == -1)
					{
						unk_0x315F7D8C33F0AB37(&iLocal_9);
						unk_0xD335AF0E22FABE4C();
						if (!unk_0x046706CBB367B768(iLocal_24))
						{
							unk_0xC5E5600D1CF5CEF9(iLocal_24);
						}
						unk_0xADB6EEE689FE86DE(iLocal_24);
						iLocal_24 = -1;
						func_23(&uLocal_16, 0, 0);
						func_23(&uLocal_18, 0, 0);
						func_90(&uLocal_14, 0, 0);
						func_20(&uLocal_14);
						Local_20 = { 0f, 0f, 0f };
						iLocal_23 = 0;
						iLocal_10 = 0;
						iLocal_11 = 0;
					}
				}
			}
		}
	}
}

Vector3 func_186(struct<3> Param0, struct<3> Param3, float fParam6)
{
	return FtoV((1f - fParam6)) * Param0 + Vector(fParam6, fParam6, fParam6) * Param3;
}

Vector3 func_187()
{
	switch (iLocal_23)
	{
		case 0:
			return 306.567f, 5652.283f, 785.594f;
		
		case 1:
			return -1082.865f, 6390.52f, 924.2493f;
		
		case 2:
			return -2542.874f, 7217.514f, 1051.333f;
		
		case 3:
			return -4139.106f, 8143.302f, 1412.694f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_188()
{
	switch (iLocal_23)
	{
		case 0:
			return 2000;
		
		case 1:
			return 1000;
		
		case 2:
			return 100;
		
		case 3:
			return 50;
		
		default:
	}
	return -1;
}

int func_189()
{
	return 3150;
}

void func_190()
{
	struct<3> Var0;
	
	Var0 = { unk_0x090239DEAF625B17(iLocal_9, 2) };
	Var0.f_0 = 0f;
	Var0.f_1 = 0f;
	Var0.f_2 = (Var0.f_2 + 1f);
	unk_0xC82085403E46A869(iLocal_9, Var0, 2, 1);
}

void func_191(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2551832[iParam0 /*3*/][func_112(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x6000E4684CB4330B(iVar0, iParam1, iParam3);
	}
}

int func_192(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2551832[iParam0 /*3*/][func_112(iParam1)];
	if (unk_0xD2F202166691EDB2(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_193()
{
	if (((((((func_197(22107, -1, -1) && Global_2409291 == 7) && !unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0)) && func_196(unk_0x9B0761B4C3EB8BC7(), 426.433f, 5614.172f, 766.414f, 1f)) && Global_2452679.f_3074.f_178 >= 1) && Global_2452679.f_3074.f_178 < 4) && func_195()) && func_194())
	{
		return 1;
	}
	return 0;
}

int func_194()
{
	if (func_197(15476, -1, -1) && func_192(5451, func_96(), 0) > 577)
	{
		return 1;
	}
	return 0;
}

int func_195()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0x012D8A79244042A4(&iVar0, &iVar1, &fVar2);
	if (fVar2 < 0.5f)
	{
		if ((iVar0 == joaat("rain") || iVar0 == joaat("THUNDER")) || iVar1 == -1429616491)
		{
			return 1;
		}
	}
	else if ((iVar1 == joaat("rain") || iVar1 == joaat("THUNDER")) || iVar1 == -1429616491)
	{
		return 1;
	}
	return 0;
}

bool func_196(int iParam0, struct<3> Param1, float fParam4)
{
	return unk_0xB7A628320EFF8E47(unk_0x3E4D3CCC220BDFB1(uParam0, 1), Param1) <= (fParam4 * fParam4);
}

int func_197(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_96();
	}
	iVar1 = func_199(iParam0, iParam1);
	uVar2 = func_198(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x9FD0AD883E4A7C1E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_198(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x12730A13C85FC896((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x12730A13C85FC896((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x12730A13C85FC896((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x12730A13C85FC896((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x12730A13C85FC896((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x12730A13C85FC896((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x12730A13C85FC896((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x12730A13C85FC896((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x12730A13C85FC896((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x12730A13C85FC896((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x12730A13C85FC896((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x12730A13C85FC896((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x12730A13C85FC896((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x12730A13C85FC896((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0x12730A13C85FC896((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0x12730A13C85FC896((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - unk_0x12730A13C85FC896((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - unk_0x12730A13C85FC896((iParam0 - 24962)) * 64);
	}
	return iVar0;
}

int func_199(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_96();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x43BE40E27DB6DC2E((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x43BE40E27DB6DC2E((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x43BE40E27DB6DC2E((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x43BE40E27DB6DC2E((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x840F9A9E6D216561((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x840F9A9E6D216561((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	return iVar0;
}

void func_200()
{
	if (Global_1704006 == 1)
	{
		if (!Global_1689724)
		{
			Global_1689724 = 1;
		}
	}
	else if (Global_1689724)
	{
		Global_1689724 = 0;
	}
}

void func_201()
{
	if (!func_202())
	{
		if (func_24(&uLocal_6))
		{
			func_20(&uLocal_6);
		}
		iLocal_8 = 0;
	}
	if (iLocal_8)
	{
		return;
	}
	if (!func_24(&uLocal_6))
	{
		func_90(&uLocal_6, 0, 0);
	}
	if (!func_22(&uLocal_6, 35000, 0))
	{
		return;
	}
	iLocal_8 = 1;
	Global_2451787.f_42.f_3 = 3;
	Global_2451787.f_42.f_40 = 1;
	unk_0xBE20AB8238688965(&(Global_4456448.f_27), 22);
	unk_0x1D40553EDD51A1B8(0);
	unk_0xA1AE959E1DC01C54(0, 0);
	unk_0xAA81B2C71789B4BE();
}

int func_202()
{
	if (!unk_0xFC559366953F62B3())
	{
		return 0;
	}
	if (!Global_2451787.f_23)
	{
		return 0;
	}
	if (!unk_0xCE990E643CD9D0E5(Global_2451787.f_42.f_4, 0) && !Global_2451787.f_42.f_57)
	{
		return 0;
	}
	if (Global_2451787.f_42 == -1)
	{
		return 0;
	}
	if (Global_2451787.f_42.f_3 != 6)
	{
		return 0;
	}
	return 1;
}

void func_203()
{
	if ((unk_0x5A002C4821A13338() > func_192(9583, -1, 0) && func_148(unk_0x460153A63B9477BC()) == 258) && func_205() == 3)
	{
		func_204(-1);
	}
}

void func_204(int iParam0)
{
	int iVar0;
	
	iVar0 = (unk_0x5A002C4821A13338() + Global_262145.f_29435);
	if (iParam0 != -1)
	{
		iVar0 = iParam0;
	}
	func_191(9583, iVar0, -1, 1, 0);
}

int func_205()
{
	return Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_102;
}

void func_206()
{
	switch (func_207())
	{
		case joaat("cheetah2"):
			Global_1696941 = 0.8f;
			break;
		
		case joaat("paragon2"):
			Global_1696941 = 0.65f;
			break;
		
		case joaat("dominator3"):
			Global_1696941 = 0.65f;
			break;
		
		case joaat("tropos"):
			Global_1696941 = 0.56f;
			break;
		
		case joaat("omnis"):
			Global_1696941 = 0.66f;
			break;
		
		case joaat("paragon"):
			Global_1696941 = 0.65f;
			break;
		
		case joaat("toreador"):
			Global_1696941 = 0.55f;
			break;
		
		case joaat("peyote3"):
			Global_1696941 = 0.47f;
			break;
		
		case joaat("osiris"):
			Global_1696941 = 0.8f;
			break;
		
		case joaat("tyrus"):
			Global_1696941 = 0.47f;
			break;
		
		case joaat("verlierer2"):
			Global_1696941 = 0.77f;
			break;
		
		case joaat("nightshark"):
			Global_1696941 = 0.69f;
			break;
		
		case joaat("tyrant"):
			Global_1696941 = 0.49f;
			break;
		
		case joaat("fmj"):
			Global_1696941 = 0.63f;
			break;
		
		case joaat("comet5"):
			Global_1696941 = 0.8f;
			break;
		
		case joaat("hakuchou2"):
			Global_1696941 = 0.79f;
			break;
	}
}

int func_207()
{
	return Global_262145.f_26058;
}

void func_208()
{
	if ((Global_110804 && unk_0x7B70881748D166CD(joaat("director_mode")) <= 0) && func_73())
	{
		unk_0x8B0F63F2E7A2FA36();
	}
}

void func_209()
{
	int iVar0;
	
	if (!iLocal_5)
	{
		if (Global_1574217)
		{
			iVar0 = func_210(joaat("mpply_char_exploit_level"));
			if (iVar0 >= 4)
			{
				Global_262145.f_10128 = 1;
			}
			iLocal_5 = 1;
		}
	}
	else if (!Global_1574217)
	{
		iLocal_5 = 0;
	}
}

int func_210(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0xD2F202166691EDB2(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_211()
{
	if (!iLocal_4)
	{
		if (Global_1574217)
		{
			if (func_213() || func_212())
			{
				Global_262145.f_19705 = 1;
			}
			else
			{
				Global_262145.f_19705 = 0;
			}
			iLocal_4 = 1;
		}
	}
	else if (!Global_1574217)
	{
		iLocal_4 = 0;
	}
}

int func_212()
{
	int iVar0;
	var uVar1[4];
	int iVar6;
	
	iVar0 = func_210(joaat("mpply_char_peak_exploit_level"));
	if (iVar0 < Global_262145.f_10237)
	{
		return 0;
	}
	uVar1[0] = func_210(joaat("mpply_prevseasonexploitlevel"));
	uVar1[1] = func_210(joaat("mpply_prevseason2exploitlevel"));
	uVar1[2] = func_210(joaat("mpply_prevseason3exploitlevel"));
	uVar1[3] = func_210(joaat("mpply_prevseason4exploitlevel"));
	iVar6 = 0;
	while (iVar6 < (Global_262145.f_10233 - 1))
	{
		if (uVar1[iVar6] < Global_262145.f_10237)
		{
			return 0;
		}
		iVar6++;
	}
	return 1;
}

int func_213()
{
	int iVar0;
	var uVar1[4];
	int iVar6;
	
	iVar0 = func_210(joaat("mpply_char_peak_exploit_level"));
	if (iVar0 < Global_262145.f_10236)
	{
		return 0;
	}
	uVar1[0] = func_210(joaat("mpply_prevseasonexploitlevel"));
	uVar1[1] = func_210(joaat("mpply_prevseason2exploitlevel"));
	uVar1[2] = func_210(joaat("mpply_prevseason3exploitlevel"));
	uVar1[3] = func_210(joaat("mpply_prevseason4exploitlevel"));
	iVar6 = 0;
	while (iVar6 < (Global_262145.f_10232 - 1))
	{
		if (uVar1[iVar6] < Global_262145.f_10236)
		{
			return 0;
		}
		iVar6++;
	}
	return 1;
}

void func_214()
{
	int iVar0;
	
	if (unk_0xF8EDFF98A9C94C74())
	{
		iVar0 = 0;
		while (iVar0 < Global_1590682)
		{
			unk_0xBE20AB8238688965(&(Global_1590682[iVar0 /*883*/].f_744), 1);
			iVar0++;
		}
	}
}

void func_215()
{
	if (Global_262145.f_10212 != 120)
	{
		Global_262145.f_10212 = 120;
	}
}

void func_216()
{
	Global_1391942.f_731 = 1;
	func_221();
	func_217();
}

void func_217()
{
	if (unk_0xCCF088254BE59A9B(func_172(), -1, 0) != unk_0x460153A63B9477BC())
	{
		return;
	}
	if (Global_1652336.f_695 == 0)
	{
		iLocal_362 = 0;
		while (iLocal_362 < 48)
		{
			if (func_220(Global_2419386.f_199.f_1[iLocal_362 /*14*/].f_1))
			{
				if (Global_2419386.f_199.f_1[iLocal_362 /*14*/].f_3 == 22)
				{
					func_218(Global_2419386.f_199.f_1[iLocal_362 /*14*/].f_1);
				}
				iLocal_362 = (iLocal_362 + 1 % 48);
			}
			iLocal_362++;
		}
	}
}

void func_218(struct<2> Param0)
{
	int iVar0;
	
	if (unk_0xCCF088254BE59A9B(func_172(), -1, 0) == unk_0x460153A63B9477BC())
	{
		iVar0 = 0;
		while (iVar0 < 48)
		{
			if (func_219(Global_2419386.f_199.f_1[iVar0 /*14*/].f_1, Param0))
			{
				Global_2419386.f_199.f_1[iVar0 /*14*/].f_1.f_1 = -1;
				Global_2419386.f_199.f_1[iVar0 /*14*/] = -1;
				Global_2419386.f_199.f_1[iVar0 /*14*/].f_13 = 0;
				Global_2419386.f_199.f_1[iVar0 /*14*/].f_3 = 0;
				return;
			}
			iVar0++;
		}
	}
}

int func_219(struct<2> Param0, struct<2> Param2)
{
	if (Param0.f_1 != -1 && Param2.f_1 != -1)
	{
		return (Param0.f_0 == Param2.f_0 && Param0.f_1 == Param2.f_1);
	}
	return 0;
}

bool func_220(struct<2> Param0)
{
	return (Param0.f_1 != -1 && Param0.f_0 != func_32());
}

void func_221()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < unk_0x2AC1C68C7CCA90E5(1))
	{
		iVar1 = unk_0x39BE1B4CEB4DAEC8(1, iVar0);
		if (iVar1 == 174)
		{
			unk_0x477FAFFE21935947(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 1996378932:
					func_222(iVar0);
					break;
				}
		}
		iVar0++;
	}
}

void func_222(int iParam0)
{
	struct<9> Var0;
	
	Var0.f_2.f_1 = -1;
	Var0.f_6 = -1;
	Var0.f_6.f_1 = -1000;
	if (unk_0x477FAFFE21935947(1, iParam0, &Var0, 9))
	{
		if (unk_0xCCF088254BE59A9B(func_172(), -1, 0) != unk_0x460153A63B9477BC())
		{
			if (unk_0xCCF088254BE59A9B(func_172(), -1, 0) != func_32() && unk_0x166E920FB00B2DBB(unk_0xCCF088254BE59A9B(func_172(), -1, 0)))
			{
			}
			return;
		}
		if ((((Var0.f_4 == 15 || Var0.f_4 == 16) || Var0.f_4 == 17) || Var0.f_4 == 18) || Var0.f_4 == 19)
		{
			func_227(Var0.f_2, Var0.f_6);
		}
		else if (Var0.f_4 == 24)
		{
			if (Var0.f_6 == joaat("fm_content_business_battles"))
			{
				func_227(Var0.f_2, Var0.f_6);
			}
			else
			{
				func_226(Var0.f_2, Var0.f_6);
			}
		}
		func_223(Var0.f_2, Var0.f_6, Var0.f_4, Var0.f_8, Var0.f_5);
	}
}

void func_223(struct<2> Param0, struct<2> Param2, var uParam4, int iParam5, var uParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xCCF088254BE59A9B(func_172(), -1, 0) == unk_0x460153A63B9477BC())
	{
		if (Param0.f_0 == func_32())
		{
			return;
		}
		if (!func_13(Param0.f_0, 0, 0))
		{
			return;
		}
		if (Param0.f_1 == -1)
		{
			return;
		}
		if (func_225(Param0))
		{
			return;
		}
		if (iParam5 < 1)
		{
			return;
		}
		if (!func_26(Param2))
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 48)
		{
			if (Global_2419386.f_199.f_1[iVar0 /*14*/].f_1.f_1 == -1)
			{
				Global_2419386.f_199.f_1[iVar0 /*14*/].f_1 = { Param0 };
				Global_2419386.f_199.f_1[iVar0 /*14*/] = 0;
				Global_2419386.f_199.f_1[iVar0 /*14*/].f_3 = uParam4;
				Global_2419386.f_199.f_1[iVar0 /*14*/].f_4 = uParam6;
				Global_2419386.f_199.f_1[iVar0 /*14*/].f_11 = { Param2 };
				if (iParam5 > 18)
				{
					iParam5 = 18;
				}
				Global_2419386.f_199.f_1[iVar0 /*14*/].f_13 = iParam5;
				iVar1 = 0;
				while (iVar1 < 5)
				{
					Global_2419386.f_199.f_1[iVar0 /*14*/].f_5[iVar1] = 0;
					iVar1++;
				}
				func_224(Param0, "FREEMODE_DELIVERY_SERVER_ADD_DELIVERABLE_ID");
				return;
			}
			iVar0++;
		}
	}
}

void func_224(var uParam0, var uParam1, char* sParam2)
{
}

int func_225(struct<2> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (Global_2419386.f_199.f_1[iVar0 /*14*/].f_1.f_1 != -1 && func_219(Global_2419386.f_199.f_1[iVar0 /*14*/].f_1, Param0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_226(struct<2> Param0, int iParam2, var uParam3)
{
	int iVar0;
	
	if (!func_220(Param0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_220(Global_2419386.f_199.f_1[iVar0 /*14*/].f_1))
		{
			if (!func_219(Global_2419386.f_199.f_1[iVar0 /*14*/].f_1, Param0))
			{
				if (Global_2419386.f_199.f_1[iVar0 /*14*/].f_3 == 24 && iParam2 == Global_2419386.f_199.f_1[iVar0 /*14*/].f_11)
				{
					func_218(Global_2419386.f_199.f_1[iVar0 /*14*/].f_1);
				}
			}
		}
		iVar0++;
	}
}

void func_227(struct<2> Param0, struct<2> Param2)
{
	int iVar0;
	
	if (!func_220(Param0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_220(Global_2419386.f_199.f_1[iVar0 /*14*/].f_1))
		{
			if (!func_219(Global_2419386.f_199.f_1[iVar0 /*14*/].f_1, Param0))
			{
				if (!func_229(Global_2419386.f_199.f_1[iVar0 /*14*/].f_11, Param2) || func_228(Global_2419386.f_199.f_1[iVar0 /*14*/].f_1, Param0))
				{
					if ((((Global_2419386.f_199.f_1[iVar0 /*14*/].f_3 == 15 || Global_2419386.f_199.f_1[iVar0 /*14*/].f_3 == 16) || Global_2419386.f_199.f_1[iVar0 /*14*/].f_3 == 17) || Global_2419386.f_199.f_1[iVar0 /*14*/].f_3 == 18) || Global_2419386.f_199.f_1[iVar0 /*14*/].f_3 == 19)
					{
						func_218(Global_2419386.f_199.f_1[iVar0 /*14*/].f_1);
					}
					else if (Global_2419386.f_199.f_1[iVar0 /*14*/].f_3 == 24)
					{
						if (Global_2419386.f_199.f_1[iVar0 /*14*/].f_11 == joaat("fm_content_business_battles"))
						{
							func_218(Global_2419386.f_199.f_1[iVar0 /*14*/].f_1);
						}
					}
				}
			}
		}
		iVar0++;
	}
}

int func_228(struct<2> Param0, struct<2> Param2)
{
	if (Param2.f_1 <= (Param0.f_1 - 48) || Param2.f_1 >= Param0.f_1 + 48)
	{
		return 1;
	}
	return 0;
}

int func_229(struct<2> Param0, struct<2> Param2)
{
	if (!func_26(Param0))
	{
		return 0;
	}
	if (Param0.f_0 == Param2.f_0 && Param0.f_1 == Param2.f_1)
	{
		return 1;
	}
	return 0;
}

void func_230()
{
	var uVar0;
	
	iLocal_3 = 0;
	if (func_13(unk_0x460153A63B9477BC(), 1, 1))
	{
		if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			uVar0 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0);
			iLocal_3 = unk_0x36FE6D3220816ADA(uVar0);
		}
	}
}

void func_231()
{
	if (iLocal_1)
	{
		unk_0x151E2F6EE4A34CFE(0f, 0.23f);
		unk_0xA11D279671F2289C(255, 255, 255, 255);
		func_232(0.875f, 0.03f, "STRING", sLocal_0);
	}
	if (!iLocal_1)
	{
		if (unk_0xF0C12886E5C1B20E())
		{
			switch (iLocal_2)
			{
				case 0:
					if (unk_0x1BD7199394D7F19A(2, 189))
					{
						iLocal_2++;
						unk_0xC1B1E9A034A63A62(0);
					}
					break;
				
				case 1:
					if (unk_0x1BD7199394D7F19A(2, 190))
					{
						iLocal_2++;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				
				case 2:
					if (unk_0x1BD7199394D7F19A(2, 189))
					{
						iLocal_2++;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				
				case 3:
					if (unk_0x1BD7199394D7F19A(2, 190))
					{
						iLocal_2++;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				
				case 4:
					if (unk_0x1BD7199394D7F19A(2, 188))
					{
						iLocal_1 = 1;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				}
		}
	}
	else if (unk_0xF0C12886E5C1B20E())
	{
		switch (iLocal_2)
		{
			case 0:
				if (unk_0x1BD7199394D7F19A(2, 188))
				{
					iLocal_2++;
					unk_0xC1B1E9A034A63A62(0);
				}
				break;
			
			case 1:
				if (unk_0x1BD7199394D7F19A(2, 190))
				{
					iLocal_2++;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			
			case 2:
				if (unk_0x1BD7199394D7F19A(2, 189))
				{
					iLocal_2++;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			
			case 3:
				if (unk_0x1BD7199394D7F19A(2, 190))
				{
					iLocal_2++;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			
			case 4:
				if (unk_0x1BD7199394D7F19A(2, 189))
				{
					iLocal_1 = 0;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			}
	}
}

void func_232(float fParam0, float fParam1, char* sParam2, char* sParam3)
{
	unk_0x40A75E32D30C605F(sParam2);
	unk_0x05CA0125610AB2F4(sParam3);
	unk_0xA434CC17B5517E4E(fParam0, fParam1, 0);
}

bool func_233()
{
	return unk_0x95C5B896CB42B20E(-1762644250);
}

void func_234()
{
	unk_0x97294874633DD507("RADIO_13_JAZZ", "WWFM_ISLAND_UPDATE_MUSIC_MUSIC");
	unk_0x97294874633DD507("RADIO_14_DANCE_02", "FLYLO_ISLAND_UPDATE_MUSIC_MUSIC");
}

