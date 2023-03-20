#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	float fLocal_17 = 0f;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	char* sLocal_22 = NULL;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	var uLocal_38 = 0;
	struct<4> Local_39[10];
	bool bLocal_80 = 0;
	int iLocal_81 = 0;
	struct<6> Local_82 = { 10, 0, -1, 1000, -1, 0 } ;
	struct<3> Local_88 = { 0, 0, 0 } ;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	bool bLocal_98 = 0;
	bool bLocal_99 = 0;
	int iLocal_100 = 0;
	bool bLocal_101 = 0;
	var uLocal_102[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	struct<3> Local_112 = { 0, 0, 0 } ;
	float fLocal_115 = 0f;
	int iLocal_116 = 0;
	struct<3> Local_117 = { 0, 0, 0 } ;
	float fLocal_120 = 0f;
	struct<3> Local_121[3];
	float fLocal_131[3] = { 0f, 0f, 0f };
	struct<3> Local_135[7];
	float fLocal_157[7] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	int iLocal_165[3] = { 0, 0, 0 };
	int iLocal_169[3] = { 0, 0, 0 };
	int iLocal_173[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_181 = 0;
	int iLocal_182 = 0;
	char[] cLocal_183[8] = 0;
	char* sLocal_184[7] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	int iLocal_194 = 0;
	int iLocal_195 = 0;
	int iLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	struct<3> Local_200 = { 0, 0, 0 } ;
	struct<3> Local_203 = { 0, 0, 0 } ;
	struct<3> Local_206 = { 0, 0, 0 } ;
	struct<3> Local_209 = { 0, 0, 0 } ;
	float fLocal_212 = 0f;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 8;
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
	var uLocal_361 = 0;
	var uLocal_362 = 1;
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
	iLocal_5 = 1;
	iLocal_6 = 134;
	iLocal_7 = 134;
	iLocal_8 = 1;
	iLocal_9 = 1;
	iLocal_10 = 1;
	iLocal_11 = 134;
	iLocal_12 = 1;
	iLocal_13 = 12;
	iLocal_14 = 12;
	fLocal_17 = 0.001f;
	sLocal_22 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_37 = 3;
	iLocal_92 = 1;
	bLocal_101 = true;
	iLocal_182 = joaat("feltzer2");
	iLocal_192 = 1;
	Local_200 = { 0f, 0f, 0f };
	Local_203 = { 1f, 1f, 1f };
	Local_206 = { 0f, 0f, 0f };
	Local_209 = { 0f, 0f, 0f };
	fLocal_212 = 0f;
	unk_0x37AABDB2D9C9224A(1);
	Local_88 = { ScriptParam_0.f_1[0 /*3*/] };
	if (unk_0x8D841F1DD3FA555F(83))
	{
		func_200(0);
	}
	func_197();
	switch (Local_82.f_1)
	{
		case 1:
		case 2:
			if (!func_196(0, 8))
			{
				func_200(0);
			}
			if (!func_195(Local_82.f_0))
			{
				func_200(0);
			}
			break;
		
		case 3:
			if (!func_196(0, 7))
			{
				func_200(0);
			}
			break;
		
		case 0:
			func_200(0);
			break;
	}
	func_189();
	if (!func_165())
	{
		func_200(0);
	}
	func_159();
	while (true)
	{
		func_156(&uLocal_215);
		if (func_165())
		{
			if (unk_0x52AB115D3D6A8417())
			{
				switch (iLocal_81)
				{
					case 0:
						iLocal_81 = 1;
						break;
					
					case 1:
						func_147();
						func_116();
						break;
					
					case 2:
						func_55();
						break;
					
					case 3:
						func_1();
						break;
				}
			}
			else
			{
				func_200(0);
			}
		}
		else
		{
			func_200(0);
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	if (!bLocal_99)
	{
		func_9();
	}
	else
	{
		func_2();
	}
}

void func_2()
{
	func_8(-1);
	func_7(0);
	func_6(Local_88);
	func_5();
	Global_1312344 = 1;
	Global_1312344.f_1 = Local_82.f_0;
	StringCopy(&(Global_1312344.f_2), func_4(), 24);
	StringCopy(&(Global_1312344.f_8), func_3(Local_82.f_0), 32);
	Global_1312344.f_16 = { Local_88 };
	Global_1315895 = 1;
	func_200(1);
}

char* func_3(int iParam0)
{
	char* sVar0;
	
	if (unk_0x211AF631627DE2C5())
	{
		switch (iParam0)
		{
			case 8:
				sVar0 = "qLp8OsaeTkCjzhK0SZoRVA";
				break;
			
			case 6:
				sVar0 = "JhV_7Ir4ekSQLafj22vFkg";
				break;
			
			case 7:
				sVar0 = "Fuc2Yl2sukOrORoMo1YJ1A";
				break;
			
			case 5:
				sVar0 = "aNlcpqEkhUytgK-8IMbTYQ";
				break;
			
			case 0:
				sVar0 = "9aLp9VEnME25Mp_6XZaw0A";
				break;
			
			case 2:
				sVar0 = "lT9gI2mfrkGDhiW1lSlhbw";
				break;
			
			case 3:
				sVar0 = "YxiNucGMGEu4lCKqizI2lA";
				break;
			
			case 1:
				sVar0 = "szYNFSberECI5goiWsh1bw";
				break;
			
			case 4:
				sVar0 = "nZ4p_4_F0EOFyZa2yKEHGA";
				break;
		}
	}
	else if (unk_0x9800AF1CCAFA4639())
	{
		switch (iParam0)
		{
			case 0:
				sVar0 = "dm_test_20";
				break;
			
			case 1:
				sVar0 = "dm_test_18";
				break;
			
			case 2:
				sVar0 = "dm_test_2";
				break;
			
			case 3:
				sVar0 = "dm_test_4";
				break;
			
			case 4:
				sVar0 = "dm_test_5";
				break;
			
			case 5:
				sVar0 = "dm_test_16";
				break;
			
			case 6:
				sVar0 = "dm_test_13";
				break;
			
			case 7:
				sVar0 = "dm_test_15";
				break;
			
			case 8:
				sVar0 = "dm_test_24";
				break;
		}
	}
	else if (unk_0xEC209B562C5EFDB2())
	{
		switch (iParam0)
		{
			case 8:
				sVar0 = "qLp8OsaeTkCjzhK0SZoRVA";
				break;
			
			case 6:
				sVar0 = "JhV_7Ir4ekSQLafj22vFkg";
				break;
			
			case 7:
				sVar0 = "Fuc2Yl2sukOrORoMo1YJ1A";
				break;
			
			case 5:
				sVar0 = "aNlcpqEkhUytgK-8IMbTYQ";
				break;
			
			case 0:
				sVar0 = "9aLp9VEnME25Mp_6XZaw0A";
				break;
			
			case 2:
				sVar0 = "lT9gI2mfrkGDhiW1lSlhbw";
				break;
			
			case 3:
				sVar0 = "YxiNucGMGEu4lCKqizI2lA";
				break;
			
			case 1:
				sVar0 = "szYNFSberECI5goiWsh1bw";
				break;
			
			case 4:
				sVar0 = "nZ4p_4_F0EOFyZa2yKEHGA";
				break;
		}
	}
	else if (unk_0x3F0C224D3CC05EF2())
	{
		switch (iParam0)
		{
			case 0:
				sVar0 = "dm_test_20";
				break;
			
			case 1:
				sVar0 = "dm_test_18";
				break;
			
			case 2:
				sVar0 = "dm_test_2";
				break;
			
			case 3:
				sVar0 = "dm_test_4";
				break;
			
			case 4:
				sVar0 = "dm_test_5";
				break;
			
			case 5:
				sVar0 = "dm_test_16";
				break;
			
			case 6:
				sVar0 = "dm_test_13";
				break;
			
			case 7:
				sVar0 = "dm_test_15";
				break;
			
			case 8:
				sVar0 = "dm_test_24";
				break;
		}
	}
	else if (unk_0x913B1C01C1BA6C6F())
	{
		switch (iParam0)
		{
			case 0:
				sVar0 = "dm_test_20";
				break;
			
			case 1:
				sVar0 = "dm_test_18";
				break;
			
			case 2:
				sVar0 = "dm_test_2";
				break;
			
			case 3:
				sVar0 = "dm_test_4";
				break;
			
			case 4:
				sVar0 = "dm_test_5";
				break;
			
			case 5:
				sVar0 = "dm_test_16";
				break;
			
			case 6:
				sVar0 = "dm_test_13";
				break;
			
			case 7:
				sVar0 = "dm_test_15";
				break;
			
			case 8:
				sVar0 = "dm_test_24";
				break;
			}
	}
	return sVar0;
}

char* func_4()
{
	char* sVar0;
	
	if (unk_0x211AF631627DE2C5())
	{
		sVar0 = "SPRACE";
	}
	else if (unk_0x9800AF1CCAFA4639())
	{
		sVar0 = "2535285330962926";
	}
	else if (unk_0xEC209B562C5EFDB2())
	{
		sVar0 = "SPRACE";
	}
	else if (unk_0x3F0C224D3CC05EF2())
	{
		sVar0 = "2535285330962926";
	}
	else if (unk_0x913B1C01C1BA6C6F())
	{
		sVar0 = "SPRACE";
	}
	else
	{
		sVar0 = "SPRACE";
	}
	return sVar0;
}

void func_5()
{
	unk_0xF3148AAF69AF9CBC(&Global_1312423, 0);
}

void func_6(struct<3> Param0)
{
	Global_1312423.f_6 = { Param0 };
}

void func_7(int iParam0)
{
	Global_1312423.f_2 = iParam0;
}

void func_8(int iParam0)
{
	Global_1312423.f_1 = iParam0;
}

void func_9()
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	Local_82.f_2 = -1;
	if (func_54(unk_0x81873881071CD9FE()))
	{
		if (!unk_0x77B5315758411237(unk_0x81873881071CD9FE()))
		{
			unk_0x06618C182FDAA45F(unk_0x81873881071CD9FE(), 0);
		}
	}
	while (!func_48())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (Local_82.f_1 != 3)
	{
		func_15(func_43(), 1, Local_82.f_3);
		iVar0 = unk_0x48E480685981C7D4() + 1500;
		iVar1 = unk_0x2ADE2CEED2637E95();
		if (func_13(iVar1))
		{
			while (!func_12(iVar1, 3f, 2, 1056964608, 0, 1, 0) || unk_0x48E480685981C7D4() < iVar0)
			{
				unk_0x4EDE34FBADD967A6(0);
			}
		}
		uVar2 = unk_0xEC537F0C0E8265EE();
		if (unk_0x7DF7DE8C76D7F346(uVar2))
		{
			unk_0x034205BA180B4E43(uVar2, 0, 0);
		}
	}
	func_10();
}

void func_10()
{
	if (!func_11(0))
	{
		unk_0xE0013E74AB6963DC("mission_Race");
		while (!unk_0x06D4A1BE3DF77306("mission_Race"))
		{
			unk_0xE0013E74AB6963DC("mission_Race");
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xB8BA7F44DF1575E1("mission_Race", &Local_82, 6, 17000);
	}
	unk_0xD25F9F5A80824C77("mission_Race");
	func_200(1);
}

bool func_11(bool bParam0)
{
	if (!bParam0 && unk_0x968BF1C2C695B61A(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x236D8AD7EE179F46(Global_69268, 0);
}

int func_12(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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

int func_13(int iParam0)
{
	if (func_14(iParam0))
	{
		if (unk_0x7404950238A154C2(iParam0, 0))
		{
			if (!unk_0x2D2289DC6C760F31(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_14(int iParam0)
{
	if (unk_0x86CCCD2FAE9D5E65(iParam0))
	{
		if (!unk_0x930F8FBB8E9537CC(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_15(int iParam0, int iParam1, int iParam2)
{
	if (Global_98931.f_32499[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_98931.f_32499[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_16(Global_98931.f_32499[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

int func_16(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_42();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_41(99, 1);
					func_40(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_40(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_40(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_24(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_23(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_40(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_40(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_40(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_23(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_40(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_40(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_40(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_40(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_40(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_40(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 98:
				case 99:
				case 100:
				case 101:
				case 103:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
					switch (iParam0)
					{
						case 0:
							func_40(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_40(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_40(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0xA60A6B4935A3E9A7())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_40(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_40(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_40(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_40(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_40(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_40(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_23(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_40(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_40(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_40(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_40(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_40(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_40(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_22(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_41(95, iParam3);
					break;
				
				case 1:
					func_41(97, iParam3);
					break;
				
				case 2:
					func_41(96, iParam3);
					break;
			}
			func_41(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_19(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_19(iVar1);
	}
	iVar5 = (Global_52577[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_52577[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_52577[iVar2] = 2147483647;
				}
				else
				{
					Global_52577[iVar2] = (Global_52577[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_40(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_40(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_40(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_52577[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_52577[iVar2];
			Global_52577[iVar2] = (Global_52577[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_98931.f_25013.f_233[iVar2 /*69*/].f_2[Global_98931.f_25013.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_98931.f_25013.f_233[iVar2 /*69*/].f_2[Global_98931.f_25013.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_98931.f_25013.f_233[iVar2 /*69*/].f_2[Global_98931.f_25013.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_98931.f_25013.f_233[iVar2 /*69*/]++;
		Global_98931.f_25013.f_233[iVar2 /*69*/].f_1++;
		if (Global_98931.f_25013.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_98931.f_25013.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_18(iParam0);
	if (Global_35443 == 15)
	{
		func_17(0);
	}
	return 1;
}

void func_17(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_98931.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_98931.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_98931.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_98931.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_98931.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_98931.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_52585[iVar0 /*3*/][0] = Global_98931.f_25013[iVar0];
		Global_52585.f_31[iVar0 /*3*/][0] = Global_98931.f_25013.f_11[iVar0];
		Global_52585.f_62[iVar0 /*3*/][0] = Global_98931.f_25013.f_22[iVar0];
		Global_52585.f_93[iVar0 /*3*/][0] = Global_98931.f_25013.f_33[iVar0];
		Global_52585.f_124[iVar0 /*3*/][0] = Global_98931.f_25013.f_44[iVar0];
		Global_52585.f_155[iVar0 /*3*/][0] = Global_98931.f_25013.f_55[iVar0];
		Global_52585.f_186[iVar0 /*3*/][0] = Global_98931.f_25013.f_66[iVar0];
		Global_52585.f_217[iVar0 /*3*/][0] = Global_98931.f_25013.f_77[iVar0];
		Global_52585.f_248[iVar0 /*3*/][0] = Global_98931.f_25013.f_88[iVar0];
		if (!bParam0)
		{
			Global_52585[iVar0 /*3*/][1] = Global_98931.f_25013[iVar0];
			Global_52585.f_31[iVar0 /*3*/][1] = Global_98931.f_25013.f_11[iVar0];
			Global_52585.f_62[iVar0 /*3*/][1] = Global_98931.f_25013.f_22[iVar0];
			Global_52585.f_93[iVar0 /*3*/][1] = Global_98931.f_25013.f_33[iVar0];
			Global_52585.f_124[iVar0 /*3*/][1] = Global_98931.f_25013.f_44[iVar0];
			Global_52585.f_155[iVar0 /*3*/][1] = Global_98931.f_25013.f_55[iVar0];
			Global_52585.f_186[iVar0 /*3*/][1] = Global_98931.f_25013.f_66[iVar0];
			Global_52585.f_217[iVar0 /*3*/][1] = Global_98931.f_25013.f_77[iVar0];
			Global_52585.f_248[iVar0 /*3*/][1] = Global_98931.f_25013.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_18(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_52577[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x123B783056E76C4E(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x123B783056E76C4E(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x123B783056E76C4E(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_19(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x1C6DF6AD69BE853E())
	{
		if (unk_0x236D8AD7EE179F46(Global_98931.f_25013.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xC69E84EBBD7166E6(&(Global_98931.f_25013.f_471), iParam0);
		}
	}
	else if (unk_0x236D8AD7EE179F46(Global_98931.f_25013.f_471, iParam0) || unk_0x236D8AD7EE179F46(Global_2097152[func_21() /*9662*/].f_7252.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xC69E84EBBD7166E6(&(Global_98931.f_25013.f_471), iParam0);
		unk_0xC69E84EBBD7166E6(&(Global_2097152[func_21() /*9662*/].f_7252.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x02A6B267064771B1("COUP_RED");
		unk_0x072D7B028D6C7A05(func_20(iParam0));
		unk_0xDFBE4FFEF7FC22F3(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_20(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		default:
	}
	return "";
}

int func_21()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_22(int iParam0)
{
	func_41(93, iParam0);
	func_41(29, iParam0);
	func_41(30, iParam0);
}

bool func_23(int iParam0)
{
	if (!unk_0x1C6DF6AD69BE853E())
	{
		return unk_0x236D8AD7EE179F46(Global_98931.f_25013.f_471, iParam0);
	}
	return unk_0x236D8AD7EE179F46(Global_2097152[func_21() /*9662*/].f_7252.f_10, iParam0);
}

int func_24(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x8A933F79CD45968A(27))
	{
		return 0;
	}
	if (unk_0x85C45034BA638694(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x85C45034BA638694(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x85C45034BA638694(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x85C45034BA638694(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x123B783056E76C4E(joaat("num_cash_spent"), iVar1, 1);
		func_39(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_25(27, 1);
	return 1;
}

int func_25(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_26(iParam0, iParam1);
}

int func_26(int iParam0, int iParam1)
{
	if (func_38(14) && !func_37(iParam0))
	{
		return 0;
	}
	if (unk_0x8A933F79CD45968A(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25192 != 0 && !Global_69020)
	{
		return 0;
	}
	if (func_36(&Global_2550589))
	{
		if (func_34(&Global_2550589, iParam0))
		{
			return 0;
		}
		if (func_27(&Global_2550589, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0xCE7DBCA2772D9659(iParam0))
		{
			return 0;
		}
		if (unk_0x8A933F79CD45968A(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_27(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[70];
	
	if (unk_0x8A933F79CD45968A(iParam1))
	{
		return 0;
	}
	if (func_38(14) && !func_37(iParam1))
	{
		return 0;
	}
	if (func_34(uParam0, iParam1))
	{
		return 0;
	}
	if (func_33(uParam0) < 0f)
	{
		func_32(uParam0, 0);
	}
	func_30(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_28(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_28(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x8A933F79CD45968A(iParam1))
	{
		return 0;
	}
	if (func_38(14) && !func_37(iParam1))
	{
		return 0;
	}
	if (func_34(uParam0, iParam1))
	{
		return 0;
	}
	if (func_33(uParam0) < 0f)
	{
		func_32(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_29(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_29(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 70;
}

void func_30(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_31(uParam0, iVar0);
		iVar0++;
	}
	func_32(uParam0, (Global_2550588 - 0.5f));
}

void func_31(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 70;
}

void func_32(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_72 = 0f;
	}
	else
	{
		uParam0->f_72 = fParam1;
	}
}

float func_33(var uParam0)
{
	return uParam0->f_72;
}

bool func_34(var uParam0, int iParam1)
{
	return func_35(uParam0, iParam1) != -1;
}

int func_35(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_36(var uParam0)
{
	return uParam0->f_71 == 1;
}

int func_37(int iParam0)
{
	switch (iParam0)
	{
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
		
		default:
	}
	return 0;
}

bool func_38(int iParam0)
{
	return Global_35443 == iParam0;
}

int func_39(int iParam0, int iParam1)
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

void func_40(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x85C45034BA638694(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x123B783056E76C4E(iParam0, iVar0, 1);
}

void func_41(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51145[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x1C6DF6AD69BE853E())
	{
		return;
	}
	if (Global_51145[iParam0 /*7*/])
	{
		unk_0x85C45034BA638694(Global_51145[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x123B783056E76C4E(Global_51145[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_42()
{
	int iVar0;
	
	if (unk_0xE8A8D52287C1BC6A())
	{
		unk_0x85C45034BA638694(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_52577[0] == iVar0)
		{
			Global_52577[0] = iVar0;
		}
		unk_0x85C45034BA638694(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_52577[1] == iVar0)
		{
			Global_52577[1] = iVar0;
		}
		unk_0x85C45034BA638694(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_52577[2] == iVar0)
		{
			Global_52577[2] = iVar0;
		}
	}
}

int func_43()
{
	func_44();
	return Global_98931.f_1750.f_539.f_3549;
}

void func_44()
{
	int iVar0;
	
	if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
	{
		if (func_47(Global_98931.f_1750.f_539.f_3549) != unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()))
		{
			iVar0 = func_46(unk_0x81873881071CD9FE());
			if (func_45(iVar0) && (!func_38(14) || Global_97883))
			{
				if (Global_98931.f_1750.f_539.f_3549 != iVar0 && func_45(Global_98931.f_1750.f_539.f_3549))
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

bool func_45(int iParam0)
{
	return iParam0 < 3;
}

int func_46(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		iVar1 = unk_0x14B7103DBD149FFE(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_47(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_47(int iParam0)
{
	if (func_45(iParam0))
	{
		return Global_98931.f_32499[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_48()
{
	int iVar0;
	
	iVar0 = func_49(&(Local_82.f_2), 0, 9, 0, 0);
	if (!iVar0 == 1)
	{
		return 0;
	}
	return 1;
}

int func_49(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_88620.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_53(0))
		{
			return 0;
		}
		Global_35407++;
		*uParam0 = Global_35407;
		unk_0xE5BBA710593FB752(unk_0xEC537F0C0E8265EE(), 0);
		Global_17099.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xEC4E76F112E5A727(8);
		}
		Global_35443 = iParam2;
		Global_35405 = *uParam0;
		Global_35406 = iParam4;
		Global_35404 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35404 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35404)
			{
				if (Global_35410[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35405 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_51(iParam2))
		{
			return 0;
		}
		if (Global_35404 == 8)
		{
			return 0;
		}
		Global_35407++;
		*uParam0 = Global_35407;
		Global_35410[Global_35404 /*4*/] = Global_35407;
		Global_35410[Global_35404 /*4*/].f_1 = iParam1;
		Global_35410[Global_35404 /*4*/].f_2 = iParam2;
		Global_35410[Global_35404 /*4*/].f_3 = 0;
		Global_35404++;
		if (iParam4 != 0)
		{
			func_50(uParam0, iParam4);
		}
	}
	return 2;
}

void func_50(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_35404 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35404)
	{
		if (Global_35410[iVar0 /*4*/] == *uParam0)
		{
			Global_35410[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_51(int iParam0)
{
	return func_52(iParam0, Global_35443);
}

int func_52(int iParam0, int iParam1)
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

int func_53(int iParam0)
{
	if (Global_35443 == 15)
	{
		return 0;
	}
	if (func_51(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_54(int iParam0)
{
	if (func_14(iParam0))
	{
		if (!unk_0x5FEB513A4402FD59(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_55()
{
	var uVar0;
	
	switch (iLocal_95)
	{
		case 0:
			if (func_114(0, -1))
			{
				unk_0xB8BB626315D394F5(1);
				func_103();
				unk_0x094B864326B5FE96(0);
				iLocal_100 = 1;
				bLocal_98 = false;
				bLocal_99 = false;
				iLocal_95 = 1;
			}
			break;
		
		case 1:
			if (func_68())
			{
				iLocal_95 = 2;
			}
			break;
		
		case 2:
			uVar0 = unk_0xEC537F0C0E8265EE();
			unk_0x0B8AC09F18292E35(uVar0, 0);
			unk_0x034205BA180B4E43(uVar0, 1, 0);
			func_59(0, 1, 1, 0);
			func_56(1, -1);
			iLocal_95 = 0;
			if (bLocal_98)
			{
				iLocal_81 = 3;
			}
			else
			{
				unk_0x094B864326B5FE96(1);
				iLocal_81 = 1;
			}
			break;
	}
}

void func_56(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_58(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_17238.f_7707)
	{
		unk_0x5547446287DE314B(15);
		Global_17238.f_7707 = 0;
	}
	unk_0x97925E0DE42EFC5C(0f);
	if (Global_17238.f_5386[iVar0])
	{
		unk_0xBEE99C97A1B87F95(9, false);
		Global_17238.f_5386[iVar0] = 0;
	}
	if (Global_17238.f_5379[iVar0])
	{
		unk_0x9B331DCFDFC55491("CommonMenu");
		Global_17238.f_5379[iVar0] = 0;
	}
	if (bParam0)
	{
		func_57(&(Global_17238.f_5418[iVar0 /*10*/]));
		Global_17238.f_5479[iVar0] = 0;
	}
	else
	{
		Global_17238.f_5479[iVar0] = 0;
	}
}

void func_57(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (unk_0xCC8E3BAC62A29F42(*uParam0))
		{
			unk_0x4B6F01DE8CCE643E(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_58(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (unk_0x1C6DF6AD69BE853E() && unk_0xA360A5024482E898())
		{
			iParam2 = unk_0xC74204D062B48807();
		}
	}
	StringCopy(&cVar0, unk_0x11CA2334E341B424(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = unk_0x8DAF7A748E41AD46(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_17238.f_5479[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_17238.f_5479[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_17238.f_5479[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_59(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0xA01309A4CCECDBBE(unk_0x1329891157A54C63());
		unk_0x334B670F8C2E871D(unk_0x1329891157A54C63(), 1);
		unk_0x302581C7F63C3DAF(unk_0x1329891157A54C63(), 1);
		func_67(1);
		unk_0x314942833427CBA3();
		unk_0xDF12B8D7DEE2158B();
		if (Global_14394.f_1 > 3)
		{
			if (unk_0xE0A43912E369FFA5())
			{
				unk_0x9E95048D8C96C1EA(0);
			}
			if (!func_66())
			{
				Global_14394.f_1 = 3;
			}
			Global_15693 = 5;
		}
		func_65(1, iParam3, iParam2, 0);
		Global_55408 = 1;
		Global_67713 = 1;
		Global_69018 = 1;
	}
	else
	{
		func_67(0);
		unk_0x6246FB0D4AFA25CC();
		Global_55408 = 0;
		if (bParam1)
		{
			unk_0x5A01C8176534B756();
		}
		unk_0x334B670F8C2E871D(unk_0x1329891157A54C63(), 0);
		unk_0x302581C7F63C3DAF(unk_0x1329891157A54C63(), 0);
		func_65(0, iParam3, iParam2, 0);
		if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()) && !func_60(unk_0x1329891157A54C63()))
		{
			unk_0x210A4A0B257F8433(unk_0x81873881071CD9FE(), 0);
		}
		Global_69018 = 0;
	}
}

int func_60(int iParam0)
{
	if (func_62(iParam0, 0))
	{
		return 1;
	}
	if (func_61())
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

bool func_61()
{
	return unk_0x236D8AD7EE179F46(Global_2359301, 3);
}

bool func_62(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1329891157A54C63())
	{
		bVar0 = func_63(-1, 0) == 8;
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

int func_63(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_64();
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

int func_64()
{
	return Global_1312729;
}

int func_65(int iParam0, var uParam1, var uParam2, int iParam3)
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

int func_66()
{
	if (Global_14394.f_1 == 1 || Global_14394.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_67(int iParam0)
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

int func_68()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	
	func_102(&iVar0, &iVar1, &uVar2, &uVar3, 0);
	unk_0x89086B596828ACBE(2, 201);
	unk_0x89086B596828ACBE(2, 202);
	unk_0x89086B596828ACBE(2, 188);
	unk_0x89086B596828ACBE(2, 187);
	if (iLocal_97 != 0)
	{
		if (unk_0x83666F9FB8FEBD4B() > 800 || (((iVar1 > -64 && iVar1 < 64) && iVar0 > -64) && iVar0 < 64))
		{
			iLocal_97 = 0;
		}
		else
		{
			iVar0 = 0;
			iVar1 = 0;
		}
	}
	bVar4 = (iVar1 < -64 || unk_0x093DEAE9A023FAA0(2, 188));
	bVar5 = (iVar1 > 64 || unk_0x093DEAE9A023FAA0(2, 187));
	bVar6 = unk_0x093DEAE9A023FAA0(2, 201);
	bVar7 = unk_0x093DEAE9A023FAA0(2, 202);
	bVar8 = (iVar1 < -64 || iVar1 > 64);
	if (bVar6)
	{
		if (iLocal_96 == 1)
		{
			bLocal_99 = true;
		}
		else
		{
			bLocal_99 = false;
		}
		bLocal_98 = true;
		return 1;
	}
	else if (bVar7)
	{
		iLocal_193 = 0;
		bLocal_98 = false;
		return 1;
	}
	else
	{
		if (bVar5)
		{
			if (iLocal_96 == 0)
			{
				iLocal_96 = 1;
			}
			else if (iLocal_96 == 0)
			{
			}
		}
		else if (bVar4)
		{
			if (iLocal_96 == 1)
			{
				iLocal_96 = 0;
			}
			else if (iLocal_96 == 1)
			{
			}
		}
		if (bVar5 || bVar4)
		{
			if (bVar8)
			{
				unk_0xC1B1E9A034A63A62(0);
				iLocal_97 = 1;
			}
			func_101(iLocal_96, 1, 1);
		}
	}
	func_69(1, -1, 1, 0, 1, -1082130432, 0, 0);
	return 0;
}

void func_69(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
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
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	bool bVar31;
	bool bVar32;
	float fVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	struct<3> Var37;
	bool bVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	float fVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	float fVar49;
	bool bVar50;
	bool bVar51;
	int iVar52;
	bool bVar53;
	float fVar54;
	float fVar55;
	float fVar56;
	int iVar57;
	int iVar58;
	float fVar59;
	float fVar60;
	float fVar61;
	float fVar62;
	int iVar63;
	float fVar64;
	float fVar65;
	int iVar66;
	int iVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	
	if (!func_58(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_98(0, bParam6))
	{
		return;
	}
	unk_0x700CD125EC59941D(76, 84);
	unk_0x931DC442937495CF(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	if (Global_17238)
	{
		if (func_96(29, 1, 1, &fVar35, &fVar36, bParam7))
		{
			fVar55 = fVar36;
			fVar55 = (fVar55 + 0f);
		}
		else
		{
			Global_17238 = 0;
		}
	}
	if (unk_0x8DAF7A748E41AD46(&(Global_17238.f_1)) == unk_0x8DAF7A748E41AD46("HIDE"))
	{
		fVar56 = Global_17236;
	}
	else
	{
		fVar56 = (((Global_17236 + fVar55) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_17237;
	}
	fVar59 = 1f;
	if (bParam7)
	{
		unk_0x510185F6AA2AE89F(&iVar57, &iVar58);
		fVar60 = unk_0xA32FB34BA4B9C4AA(0);
		if (func_95())
		{
			iVar57 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar58) * fVar60));
		}
		fVar61 = (unk_0xBBDA792448DB5A89(iVar57) / unk_0xBBDA792448DB5A89(iVar58));
		fVar59 = (fVar61 / fVar60);
		if (func_95())
		{
			fVar59 = 1f;
		}
		iVar57 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar57) / fVar59));
		iVar58 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar58) / fVar59));
	}
	else
	{
		unk_0xF8BA71207732310A(&iVar57, &iVar58);
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_17238.f_5486)
		{
			if (unk_0x8DAF7A748E41AD46(&(Global_17238.f_1)) == unk_0x8DAF7A748E41AD46("HIDE"))
			{
				fVar49 = Global_17236;
			}
			else
			{
				if (Global_17238)
				{
					unk_0xE31E1C3DC82BAC87(func_94(29), func_92(29, 1), (Global_17235 + (fParam5 * 0.5f)), (Global_17236 + ((fVar55 - 0f) * 0.5f)), fParam5, (fVar55 - 0f), 0f, 255, 255, 255, 255, 0);
				}
				if (Global_17238.f_7677)
				{
					iVar1 = Global_17238.f_7673;
					iVar2 = Global_17238.f_7674;
					iVar3 = Global_17238.f_7675;
					iVar4 = Global_17238.f_7676;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_91(Global_17235, (Global_17236 + fVar55), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_17236 + fVar55) + 0.034722f) + 0f);
				if (unk_0x8DAF7A748E41AD46(&(Global_17238.f_1)) != 0)
				{
					func_90();
					unk_0xA004CFE21CA812EA(&(Global_17238.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_17238.f_68)
					{
						if (Global_17238.f_5[iVar14] == 2)
						{
							unk_0x6D55FF05D62B91BC(Global_17238.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_17238.f_5[iVar14] == 3)
						{
							unk_0xB6F6A8755E3C6180(Global_17238.f_14[iVar16], Global_17238.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_17238.f_5[iVar14] == 1)
						{
							unk_0x072D7B028D6C7A05(&(Global_17238.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17238.f_5[iVar14] == 8)
						{
							unk_0x072D7B028D6C7A05(&(Global_17238.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17238.f_5[iVar14] == 5)
						{
							unk_0x6222A57F463E8EE7(&(Global_17238.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17238.f_5[iVar14] == 6)
						{
							unk_0x072D7B028D6C7A05(&(Global_17238.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17238.f_5[iVar14] == 7)
						{
							unk_0x6222A57F463E8EE7(&(Global_17238.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0x834054753F171911((Global_17235 + 0.00390625f), ((Global_17236 + fVar55) + 0.00416664f), 0);
				}
				if (Global_17238.f_5489 > Global_17238.f_4999)
				{
					if (Global_17238.f_5492 != 0)
					{
						func_90();
						func_88((((Global_17235 + fParam5) - 0.00390625f) - func_89("CM_ITEM_COUNT", Global_17238.f_5492, Global_17238.f_5491)), ((Global_17236 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_17238.f_5492, Global_17238.f_5491);
					}
				}
			}
			iVar6 = Global_17238.f_5493;
			iVar9 = 0;
			fVar62 = fVar49;
			if (Global_17238.f_7687)
			{
				iVar1 = Global_17238.f_7683;
				iVar2 = Global_17238.f_7684;
				iVar3 = Global_17238.f_7685;
				iVar4 = Global_17238.f_7686;
			}
			else
			{
				unk_0xDFC297A2CE47E495(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_17238.f_4999 && iVar6 <= Global_17238.f_4992)
			{
				if (iVar6 >= 0)
				{
					if (Global_17238.f_5253[iVar6])
					{
						if (Global_17238.f_5127[iVar6] && iVar6 != Global_17238.f_5493)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar54 = 0.034722f;
						if (Global_17238.f_5500[iVar6] != 0f)
						{
							fVar54 = Global_17238.f_5500[iVar6];
						}
						fVar49 = (fVar49 + fVar54);
						iVar9++;
					}
				}
				iVar6++;
			}
			if (bParam3)
			{
				if (iVar9 <= 1)
				{
					fVar54 = 0.034722f;
					fVar49 = (fVar49 + fVar54);
					iVar9++;
					if (Global_17238.f_4992 <= 1)
					{
						Global_17238.f_4992++;
					}
					iVar52 = 1;
				}
			}
			unk_0xE31E1C3DC82BAC87("CommonMenu", "Gradient_Bgd", (Global_17235 + (fParam5 * 0.5f)), ((fVar62 + ((fVar49 - fVar62) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar62), 0f, 255, 255, 255, 255, 0);
			if (Global_17238.f_5489 > Global_17238.f_4999)
			{
				if (Global_17238.f_7692)
				{
					iVar1 = Global_17238.f_7688;
					iVar2 = Global_17238.f_7689;
					iVar3 = Global_17238.f_7690;
					iVar4 = Global_17238.f_7691;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_91(Global_17235, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var37 = { unk_0x71E755E29C4DCADF("CommonMenu", "shop_arrows_upANDdown") };
				Var37.f_0 = (Var37.f_0 * (0.5f / fVar59));
				Var37.f_1 = (Var37.f_1 * (0.5f / fVar59));
				if (Global_17238.f_7705)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0xDFC297A2CE47E495(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xE31E1C3DC82BAC87("CommonMenu", "shop_arrows_upANDdown", (Global_17235 + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), ((Var37.f_0 / 1280f) * fVar59), ((Var37.f_1 / 720f) * fVar59), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (unk_0x8DAF7A748E41AD46(&(Global_17238.f_4469)) != 0 && Global_17238.f_4543 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar41 = (Global_17235 + 0.0046875f);
				if (Global_17238.f_4545 != 0)
				{
					func_96(Global_17238.f_4545, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17235 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_87(fVar41);
				unk_0x1F1C628562B7BD8A(&(Global_17238.f_4469));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17238.f_4539)
				{
					if (Global_17238.f_4473[iVar14] == 2)
					{
						unk_0x6D55FF05D62B91BC(Global_17238.f_4478[iVar15]);
						iVar15++;
					}
					else if (Global_17238.f_4473[iVar14] == 3)
					{
						unk_0xB6F6A8755E3C6180(Global_17238.f_4482[iVar16], Global_17238.f_4486[iVar16]);
						iVar16++;
					}
					else if (Global_17238.f_4473[iVar14] == 1)
					{
						unk_0x072D7B028D6C7A05(&(Global_17238.f_4490[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17238.f_4473[iVar14] == 5)
					{
						unk_0x6222A57F463E8EE7(&(Global_17238.f_4490[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17238.f_4473[iVar14] == 6)
					{
						unk_0x072D7B028D6C7A05(&(Global_17238.f_4490[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17238.f_4473[iVar14] == 7)
					{
						unk_0x6222A57F463E8EE7(&(Global_17238.f_4490[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x78C28B5B2055F149(fVar41, (fVar49 + 0.00277776f));
				unk_0xDFC297A2CE47E495(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_91(Global_17235, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17238.f_7697)
				{
					iVar1 = Global_17238.f_7693;
					iVar2 = Global_17238.f_7694;
					iVar3 = Global_17238.f_7695;
					iVar4 = Global_17238.f_7696;
				}
				else
				{
					unk_0xDFC297A2CE47E495(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xE31E1C3DC82BAC87("CommonMenu", "Gradient_Bgd", (Global_17235 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x9885727BF51C57B4(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x9885727BF51C57B4(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_87(fVar41);
				unk_0xA004CFE21CA812EA(&(Global_17238.f_4469));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17238.f_4539)
				{
					if (Global_17238.f_4473[iVar14] == 2)
					{
						unk_0x6D55FF05D62B91BC(Global_17238.f_4478[iVar15]);
						iVar15++;
					}
					else if (Global_17238.f_4473[iVar14] == 3)
					{
						unk_0xB6F6A8755E3C6180(Global_17238.f_4482[iVar16], Global_17238.f_4486[iVar16]);
						iVar16++;
					}
					else if (Global_17238.f_4473[iVar14] == 1)
					{
						unk_0x072D7B028D6C7A05(&(Global_17238.f_4490[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17238.f_4473[iVar14] == 5)
					{
						unk_0x6222A57F463E8EE7(&(Global_17238.f_4490[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17238.f_4473[iVar14] == 6)
					{
						unk_0x072D7B028D6C7A05(&(Global_17238.f_4490[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17238.f_4473[iVar14] == 7)
					{
						unk_0x6222A57F463E8EE7(&(Global_17238.f_4490[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17238.f_4473[iVar14] == 8)
					{
						unk_0x072D7B028D6C7A05(&(Global_17238.f_4490[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x834054753F171911(fVar41, (fVar49 + 0.00277776f), 0);
				if (Global_17238.f_4545 != 0)
				{
					func_96(Global_17238.f_4545, 1, 1, &fVar35, &fVar36, bParam7);
					func_86(Global_17238.f_4545, 1, &iVar46, &iVar47, &iVar48);
					unk_0xE31E1C3DC82BAC87(func_94(Global_17238.f_4545), func_92(Global_17238.f_4545, 1), ((Global_17235 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 = (fVar49 + (((unk_0x9885727BF51C57B4(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_17238.f_4543 > 0)
				{
					if ((unk_0x48E480685981C7D4() - Global_17238.f_4544) > Global_17238.f_4543)
					{
						StringCopy(&(Global_17238.f_4469), "", 16);
						Global_17238.f_4543 = -1;
					}
				}
			}
			if (unk_0x8DAF7A748E41AD46(&(Global_2549033.f_21)) != 0 && Global_2549033.f_65 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar41 = (Global_17235 + 0.0046875f);
				if (Global_2549033.f_67 != 0)
				{
					func_96(Global_2549033.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					fVar41 = (((Global_17235 + fVar35) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_87(fVar41);
				unk_0x1F1C628562B7BD8A(&(Global_2549033.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2549033.f_61)
				{
					if (Global_2549033.f_25[iVar14] == 2)
					{
						unk_0x6D55FF05D62B91BC(Global_2549033.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2549033.f_25[iVar14] == 3)
					{
						unk_0xB6F6A8755E3C6180(Global_2549033.f_34[iVar16], Global_2549033.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2549033.f_25[iVar14] == 1)
					{
						unk_0x072D7B028D6C7A05(&(Global_2549033.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2549033.f_25[iVar14] == 5)
					{
						unk_0x6222A57F463E8EE7(&(Global_2549033.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2549033.f_25[iVar14] == 6)
					{
						unk_0x072D7B028D6C7A05(&(Global_2549033.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2549033.f_25[iVar14] == 7)
					{
						unk_0x6222A57F463E8EE7(&(Global_2549033.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2549033.f_25[iVar14] == 8)
					{
						unk_0x072D7B028D6C7A05(&(Global_2549033.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x78C28B5B2055F149(fVar41, (fVar49 + 0.00277776f));
				unk_0xDFC297A2CE47E495(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_91(Global_17235, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17238.f_7697)
				{
					iVar1 = Global_17238.f_7693;
					iVar2 = Global_17238.f_7694;
					iVar3 = Global_17238.f_7695;
					iVar4 = Global_17238.f_7696;
				}
				else
				{
					unk_0xDFC297A2CE47E495(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0xE31E1C3DC82BAC87("CommonMenu", "Gradient_Bgd", (Global_17235 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0x9885727BF51C57B4(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0x9885727BF51C57B4(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_87(fVar41);
				unk_0xA004CFE21CA812EA(&(Global_2549033.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2549033.f_61)
				{
					if (Global_2549033.f_25[iVar14] == 2)
					{
						unk_0x6D55FF05D62B91BC(Global_2549033.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2549033.f_25[iVar14] == 3)
					{
						unk_0xB6F6A8755E3C6180(Global_2549033.f_34[iVar16], Global_2549033.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2549033.f_25[iVar14] == 1)
					{
						unk_0x072D7B028D6C7A05(&(Global_2549033.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2549033.f_25[iVar14] == 8)
					{
						unk_0x072D7B028D6C7A05(&(Global_2549033.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2549033.f_25[iVar14] == 5)
					{
						unk_0x6222A57F463E8EE7(&(Global_2549033.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2549033.f_25[iVar14] == 6)
					{
						unk_0x072D7B028D6C7A05(&(Global_2549033.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2549033.f_25[iVar14] == 7)
					{
						unk_0x6222A57F463E8EE7(&(Global_2549033.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0x834054753F171911(fVar41, (fVar49 + 0.00277776f), 0);
				if (Global_2549033.f_67 != 0)
				{
					func_96(Global_2549033.f_67, 1, 1, &fVar35, &fVar36, bParam7);
					func_86(Global_2549033.f_67, 1, &iVar46, &iVar47, &iVar48);
					unk_0xE31E1C3DC82BAC87(func_94(Global_2549033.f_67), func_92(Global_2549033.f_67, 1), ((Global_17235 + (fVar35 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar36 * 0.5f)) - (0.00138888f * 4f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 = (fVar49 + (((unk_0x9885727BF51C57B4(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_2549033.f_65 > 0)
				{
					if ((unk_0x48E480685981C7D4() - Global_2549033.f_66) > Global_2549033.f_65)
					{
						StringCopy(&(Global_2549033.f_21), "", 16);
						Global_2549033.f_65 = -1;
					}
				}
			}
			func_81(iVar57, iParam1, 0, 0, 0, 0, bParam4, 1, 0);
			unk_0x700CD125EC59941D(76, 84);
			unk_0x931DC442937495CF(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_17238.f_5486)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar63 = Global_17238.f_4992;
			if (Global_17238.f_5487)
			{
				iVar63 = (Global_17238.f_5490 - 1);
			}
			fVar64 = 0f;
			fVar65 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar63)
			{
				fVar54 = 0.034722f;
				if (Global_17238.f_5500[iVar6] != 0f)
				{
					fVar54 = Global_17238.f_5500[iVar6];
				}
				if (Global_17238.f_5487)
				{
					iVar6 = Global_17238.f_7333[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar32 = false;
				if (iVar6 >= Global_17238.f_5493 && iVar9 < Global_17238.f_4999)
				{
					bVar32 = true;
					if (Global_17238.f_5494 == iVar6)
					{
						fVar65 = fVar64;
					}
					if (Global_17238.f_5127[iVar6])
					{
						iVar12++;
					}
					fVar34 = (((fVar56 + fVar64) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_17238.f_5631[iVar6] = fVar34;
				fVar33 = (Global_17235 + 0.0046875f);
				bVar40 = false;
				bVar31 = Global_17238.f_5494 == iVar6;
				if ((bVar31 && iVar5 == 1) && bVar32)
				{
					iVar66 = 255;
					iVar67 = 255;
					iVar68 = 255;
					iVar69 = 255;
					if (Global_17238.f_7699)
					{
						unk_0xDFC297A2CE47E495(Global_17238.f_7698, &iVar66, &iVar67, &iVar68, &iVar69);
					}
					else
					{
						unk_0xDFC297A2CE47E495(1, &iVar66, &iVar67, &iVar68, &iVar69);
					}
					unk_0xE31E1C3DC82BAC87("CommonMenu", "Gradient_Nav", (Global_17235 + (fParam5 * 0.5f)), (((fVar56 + fVar65) + (0.00277776f * IntToFloat(iVar12))) + (fVar54 * 0.5f)), fParam5, fVar54, 0f, iVar66, iVar67, iVar68, iVar69, 0);
					Global_17238.f_5629 = fVar34;
				}
				if (iVar52 && iVar7 == iVar63)
				{
					func_79(bVar31, 1, 0, 0, 0, 0);
					unk_0xA004CFE21CA812EA("DFLT_MNU_OPT");
					unk_0x834054753F171911(fVar33, fVar34, 0);
					bVar40 = true;
				}
				else
				{
					iVar8 = 0;
					while (iVar8 < Global_17238.f_5000)
					{
						if (unk_0x236D8AD7EE179F46(Global_17238.f_4866[iVar6], iVar8) || Global_17238.f_4833[iVar8] == 5)
						{
							if (Global_17238.f_5487)
							{
								iVar19 = Global_17238.f_7344[((iVar9 * Global_17238.f_5000) + iVar8)];
								iVar20 = Global_17238.f_7385[((iVar9 * Global_17238.f_5000) + iVar8)];
								iVar21 = Global_17238.f_7426[((iVar9 * Global_17238.f_5000) + iVar8)];
								iVar22 = Global_17238.f_7467[((iVar9 * Global_17238.f_5000) + iVar8)];
								iVar23 = Global_17238.f_7508[((iVar9 * Global_17238.f_5000) + iVar8)];
							}
							else
							{
								Global_17238.f_7344[((iVar9 * Global_17238.f_5000) + iVar8)] = iVar19;
								Global_17238.f_7385[((iVar9 * Global_17238.f_5000) + iVar8)] = iVar20;
								Global_17238.f_7426[((iVar9 * Global_17238.f_5000) + iVar8)] = iVar21;
								Global_17238.f_7467[((iVar9 * Global_17238.f_5000) + iVar8)] = iVar22;
								Global_17238.f_7508[((iVar9 * Global_17238.f_5000) + iVar8)] = iVar23;
							}
							iVar70 = 0;
							bVar53 = false;
							if (Global_17238.f_5760[0] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17238.f_5757[0])
								{
									bVar53 = true;
									iVar70 = 0;
								}
							}
							if (Global_17238.f_5760[1] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17238.f_5757[1])
								{
									bVar53 = true;
									iVar70 = 1;
								}
							}
							if (Global_17238.f_4839[iVar8] != -1f)
							{
								fVar33 = ((Global_17235 + 0.0046875f) + Global_17238.f_4839[iVar8]);
							}
							if ((iVar8 < 4 && Global_17238.f_4839[iVar8 + 1] != -1f) && fVar33 < Global_17238.f_4839[iVar8 + 1])
							{
								fVar45 = (Global_17238.f_4839[iVar8 + 1] - fVar33);
							}
							else
							{
								fVar45 = (((Global_17235 + Global_17237) - 0.0046875f) - fVar33);
							}
							if ((Global_17238.f_4852[iVar8] && Global_17238.f_5626) && bVar31)
							{
								bVar51 = true;
							}
							else
							{
								bVar51 = false;
							}
							switch (Global_17238.f_4833[iVar8])
							{
								case 0:
									break;
								
								case 1:
									iVar24 = iVar19;
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17238.f_5487)
										{
											fVar42 = 0f;
											fVar43 = 0f;
											iVar25 = 0;
											iVar26 = 0;
											iVar27 = 0;
											iVar28 = 0;
											iVar29 = 0;
											if (unk_0x8DAF7A748E41AD46(&(Global_17238.f_73[iVar24 /*6*/])) != 0)
											{
												bVar50 = false;
												iVar14 = 0;
												while (iVar14 < 4)
												{
													if (Global_17238.f_2076[iVar24 /*5*/][iVar14] == 5 || Global_17238.f_2076[iVar24 /*5*/][iVar14] == 8)
													{
														bVar50 = true;
													}
													iVar14++;
												}
												func_79(bVar31, Global_17238.f_1574[iVar24], Global_17238.f_1825[iVar24], bVar53, iVar70, bVar50);
												unk_0xB865D57D92832050(&(Global_17238.f_73[iVar24 /*6*/]));
											}
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17238.f_2076[iVar24 /*5*/][iVar14] == 1)
												{
													iVar25++;
													if (unk_0x8DAF7A748E41AD46(&(Global_17238.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x072D7B028D6C7A05(&(Global_17238.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17238.f_2076[iVar24 /*5*/][iVar14] == 8)
												{
													iVar25++;
													if (unk_0x8DAF7A748E41AD46(&(Global_17238.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x072D7B028D6C7A05(&(Global_17238.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17238.f_2076[iVar24 /*5*/][iVar14] == 5)
												{
													if (unk_0x8DAF7A748E41AD46(&(Global_17238.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x6222A57F463E8EE7(&(Global_2437099[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17238.f_2076[iVar24 /*5*/][iVar14] == 6)
												{
													if (unk_0x8DAF7A748E41AD46(&(Global_17238.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x072D7B028D6C7A05(&(Global_2437099[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17238.f_2076[iVar24 /*5*/][iVar14] == 7)
												{
													if (unk_0x8DAF7A748E41AD46(&(Global_17238.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x6222A57F463E8EE7(&(Global_2437099[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17238.f_2076[iVar24 /*5*/][iVar14] == 2)
												{
													if (unk_0x8DAF7A748E41AD46(&(Global_17238.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0x6D55FF05D62B91BC(Global_17238.f_3840[(iVar20 + iVar26)]);
													}
													iVar26++;
												}
												else if (Global_17238.f_2076[iVar24 /*5*/][iVar14] == 3)
												{
													if (unk_0x8DAF7A748E41AD46(&(Global_17238.f_73[iVar24 /*6*/])) != 0)
													{
														unk_0xB6F6A8755E3C6180(Global_17238.f_4091[(iVar21 + iVar27)], Global_17238.f_4217[(iVar21 + iVar27)]);
													}
													iVar27++;
												}
												else if (Global_17238.f_2076[iVar24 /*5*/][iVar14] == 4)
												{
													iVar28++;
												}
												iVar14++;
											}
											if (unk_0x8DAF7A748E41AD46(&(Global_17238.f_73[iVar24 /*6*/])) != 0)
											{
												fVar42 = unk_0x0239B891C698A437(1);
											}
											if (iVar28 > 0)
											{
												iVar14 = 0;
												while (iVar14 < iVar28)
												{
													if (func_96(Global_17238.f_4343[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar43 = (fVar43 + fVar35);
														if (iVar14 > 0)
														{
															fVar43 = (fVar43 - (0.00078125f * 4f));
														}
														if (Global_17238.f_4343[(iVar22 + iVar14)] == 2)
														{
															fVar43 = (fVar43 - (0.00078125f * 5f));
														}
													}
													iVar14++;
												}
											}
											fVar41 = 0f;
											if (Global_17238.f_4860[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - (fVar42 + fVar43)) + (0.00078125f * 1f)));
											}
											else if (Global_17238.f_4860[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - ((fVar42 + fVar43) * 0.5f)));
											}
											Global_17238.f_7549[((iVar9 * Global_17238.f_5000) + iVar8)] = fVar41;
											Global_17238.f_7590[((iVar9 * Global_17238.f_5000) + iVar8)] = fVar42;
											Global_17238.f_7631[((iVar9 * Global_17238.f_5000) + iVar8)] = fVar43;
										}
										else
										{
											fVar41 = Global_17238.f_7549[((iVar9 * Global_17238.f_5000) + iVar8)];
											fVar42 = Global_17238.f_7590[((iVar9 * Global_17238.f_5000) + iVar8)];
											fVar43 = Global_17238.f_7631[((iVar9 * Global_17238.f_5000) + iVar8)];
										}
										if (bVar51)
										{
											if (func_96(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_17238.f_4860[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_96(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_86(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0xE31E1C3DC82BAC87(func_94(26), func_92(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_96(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_96(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_86(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xE31E1C3DC82BAC87(func_94(27), func_92(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										iVar30 = 0;
										if (unk_0x8DAF7A748E41AD46(&(Global_17238.f_73[iVar24 /*6*/])) != 0)
										{
											bVar50 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17238.f_2076[iVar24 /*5*/][iVar14] == 5 || Global_17238.f_2076[iVar24 /*5*/][iVar14] == 8)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											func_79(bVar31, Global_17238.f_1574[iVar24], Global_17238.f_1825[iVar24], bVar53, 0, bVar50);
											if (Global_17238.f_7703 && Global_17238.f_7704 == iVar6)
											{
												func_78(bVar31);
											}
											unk_0xA004CFE21CA812EA(&(Global_17238.f_73[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_17238.f_2076[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0x8DAF7A748E41AD46(&(Global_17238.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x072D7B028D6C7A05(&(Global_17238.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar30 = 1;
											}
											else if (Global_17238.f_2076[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0x8DAF7A748E41AD46(&(Global_17238.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x072D7B028D6C7A05(&(Global_17238.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar30 = 8;
											}
											else if (Global_17238.f_2076[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0x8DAF7A748E41AD46(&(Global_17238.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x6222A57F463E8EE7(&(Global_2437099[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 5;
											}
											else if (Global_17238.f_2076[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0x8DAF7A748E41AD46(&(Global_17238.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x072D7B028D6C7A05(&(Global_2437099[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17238.f_2076[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0x8DAF7A748E41AD46(&(Global_17238.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x6222A57F463E8EE7(&(Global_2437099[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17238.f_2076[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0x8DAF7A748E41AD46(&(Global_17238.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x6D55FF05D62B91BC(Global_17238.f_3840[(iVar20 + iVar26)]);
												}
												iVar26++;
												iVar30 = 2;
											}
											else if (Global_17238.f_2076[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0x8DAF7A748E41AD46(&(Global_17238.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0xB6F6A8755E3C6180(Global_17238.f_4091[(iVar21 + iVar27)], Global_17238.f_4217[(iVar21 + iVar27)]);
												}
												iVar27++;
												iVar30 = 3;
											}
											else if (Global_17238.f_2076[iVar24 /*5*/][iVar14] == 4)
											{
												if (Global_17238.f_4343[(iVar22 + iVar28)] == 2)
												{
													if (func_96(Global_17238.f_4343[(iVar22 + iVar28)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (func_96(Global_17238.f_4343[(iVar22 + iVar28)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_86(Global_17238.f_4343[(iVar22 + iVar28)], bVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17238.f_4860[iVar8] == 2)
															{
																unk_0xE31E1C3DC82BAC87(func_94(Global_17238.f_4343[(iVar22 + iVar28)]), func_92(Global_17238.f_4343[(iVar22 + iVar28)], bVar31), (((fVar33 + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																unk_0xE31E1C3DC82BAC87(func_94(Global_17238.f_4343[(iVar22 + iVar28)]), func_92(Global_17238.f_4343[(iVar22 + iVar28)], bVar31), ((fVar33 + fVar41) - (0.00078125f * 8f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															fVar41 = (fVar41 + (0.00078125f * 3f));
														}
													}
												}
												iVar28++;
												iVar30 = 4;
											}
											iVar14++;
										}
										if (unk_0x8DAF7A748E41AD46(&(Global_17238.f_73[iVar24 /*6*/])) != 0)
										{
											if (iVar30 == 4 && Global_17238.f_4860[iVar8] == 2)
											{
												unk_0x834054753F171911(((fVar33 + fVar41) + (0.00078125f * 7f)), fVar34, 0);
											}
											else
											{
												unk_0x834054753F171911((fVar33 + fVar41), fVar34, 0);
											}
										}
										if (iVar28 > 0)
										{
											fVar41 = (fVar41 + (6f * 0.00078125f));
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (Global_17238.f_4343[(iVar22 + iVar14)] != 2)
												{
													if (func_96(Global_17238.f_4343[(iVar22 + iVar14)], bVar31, 0, &fVar35, &fVar36, bParam7))
													{
														fVar41 = (fVar41 + (fVar35 * 0.5f));
														if (func_96(Global_17238.f_4343[(iVar22 + iVar14)], bVar31, 1, &fVar35, &fVar36, bParam7))
														{
															func_86(Global_17238.f_4343[(iVar22 + iVar14)], bVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17238.f_4343[(iVar22 + iVar14)] == 30)
															{
																unk_0xE31E1C3DC82BAC87(func_94(Global_17238.f_4343[(iVar22 + iVar14)]), func_92(Global_17238.f_4343[(iVar22 + iVar14)], bVar31), (Global_17235 + (fVar35 * 0.5f)), (((fVar34 + 0.00277776f) + (fVar36 * 0.5f)) - (0.00078125f * 11f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else if (Global_17238.f_4860[iVar8] == 2)
															{
																unk_0xE31E1C3DC82BAC87(func_94(Global_17238.f_4343[(iVar22 + iVar14)]), func_92(Global_17238.f_4343[(iVar22 + iVar14)], bVar31), ((((fVar33 + fVar41) + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																unk_0xE31E1C3DC82BAC87(func_94(Global_17238.f_4343[(iVar22 + iVar14)]), func_92(Global_17238.f_4343[(iVar22 + iVar14)], bVar31), (((fVar33 + fVar41) + fVar42) - (0.00078125f * 12f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
														}
														fVar41 = (fVar41 + (12f * 0.00078125f));
													}
												}
												iVar14++;
											}
										}
									}
									bVar40 = true;
									iVar19++;
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_17238.f_2076[iVar24 /*5*/][iVar14] == 1)
										{
											iVar19++;
										}
										else if (Global_17238.f_2076[iVar24 /*5*/][iVar14] == 8)
										{
											iVar19++;
										}
										else if (Global_17238.f_2076[iVar24 /*5*/][iVar14] == 2)
										{
											iVar20++;
										}
										else if (Global_17238.f_2076[iVar24 /*5*/][iVar14] == 3)
										{
											iVar21++;
										}
										else if (Global_17238.f_2076[iVar24 /*5*/][iVar14] == 4)
										{
											iVar22++;
										}
										else if (Global_17238.f_2076[iVar24 /*5*/][iVar14] == 5)
										{
											iVar23++;
										}
										else if (Global_17238.f_2076[iVar24 /*5*/][iVar14] == 6)
										{
											iVar23++;
										}
										else if (Global_17238.f_2076[iVar24 /*5*/][iVar14] == 7)
										{
											iVar23++;
										}
										iVar14++;
									}
									break;
								
								case 2:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17238.f_5487)
										{
											func_79(bVar31, Global_17238.f_1574[iVar24], Global_17238.f_1825[iVar24], bVar53, 0, 0);
											if (Global_17238.f_7703 && Global_17238.f_7704 == iVar6)
											{
												func_78(bVar31);
											}
											unk_0xB865D57D92832050("NUMBER");
											unk_0x6D55FF05D62B91BC(Global_17238.f_3840[iVar20]);
											fVar42 = unk_0x0239B891C698A437(1);
											fVar41 = 0f;
											if (Global_17238.f_4860[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17238.f_4860[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17238.f_7549[((iVar9 * Global_17238.f_5000) + iVar8)] = fVar41;
											Global_17238.f_7590[((iVar9 * Global_17238.f_5000) + iVar8)] = fVar42;
										}
										else
										{
											fVar41 = Global_17238.f_7549[((iVar9 * Global_17238.f_5000) + iVar8)];
											fVar42 = Global_17238.f_7590[((iVar9 * Global_17238.f_5000) + iVar8)];
										}
										if (bVar51)
										{
											if (func_96(26, 1, 0, &fVar35, &fVar36, bParam7))
											{
												if (Global_17238.f_4860[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_96(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_86(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0xE31E1C3DC82BAC87(func_94(26), func_92(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_96(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_96(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_86(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xE31E1C3DC82BAC87(func_94(27), func_92(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_79(bVar31, Global_17238.f_1574[iVar24], Global_17238.f_1825[iVar24], bVar53, 0, 0);
										func_77((fVar33 + fVar41), fVar34, "NUMBER", Global_17238.f_3840[iVar20], 0);
									}
									bVar40 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar32)
									{
										if (!Global_17238.f_5487)
										{
											func_79(bVar31, Global_17238.f_1574[iVar24], Global_17238.f_1825[iVar24], bVar53, 0, 0);
											if (Global_17238.f_7703 && Global_17238.f_7704 == iVar6)
											{
												func_78(bVar31);
											}
											unk_0xB865D57D92832050("NUMBER");
											unk_0xB6F6A8755E3C6180(Global_17238.f_4091[iVar21], Global_17238.f_4217[iVar21]);
											fVar42 = unk_0x0239B891C698A437(1);
											fVar41 = 0f;
											if (Global_17238.f_4860[iVar8] == 2)
											{
												fVar41 = (fVar41 + ((fVar45 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_17238.f_4860[iVar8] == 0)
											{
												fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_17238.f_7549[((iVar9 * Global_17238.f_5000) + iVar8)] = fVar41;
											Global_17238.f_7590[((iVar9 * Global_17238.f_5000) + iVar8)] = fVar42;
										}
										else
										{
											fVar41 = Global_17238.f_7549[((iVar9 * Global_17238.f_5000) + iVar8)];
											fVar42 = Global_17238.f_7590[((iVar9 * Global_17238.f_5000) + iVar8)];
										}
										if (bVar51)
										{
											if (func_96(26, 1, 0, &fVar35, &fVar36, 0))
											{
												if (Global_17238.f_4860[iVar8] == 2)
												{
													fVar41 = (fVar41 - (fVar35 * 2f));
												}
												fVar44 = (fVar35 * 0.5f);
												if (func_96(26, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_86(26, 1, &iVar46, &iVar47, &iVar48);
													unk_0xE31E1C3DC82BAC87(func_94(26), func_92(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_96(27, 1, 0, &fVar35, &fVar36, bParam7))
											{
												fVar41 = (fVar41 + fVar35);
												fVar44 = (fVar35 * 0.5f);
												if (func_96(27, 1, 1, &fVar35, &fVar36, bParam7))
												{
													func_86(27, 1, &iVar46, &iVar47, &iVar48);
													unk_0xE31E1C3DC82BAC87(func_94(27), func_92(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_79(bVar31, Global_17238.f_1574[iVar24], Global_17238.f_1825[iVar24], bVar53, 0, 0);
										func_76((fVar33 + fVar41), fVar34, "NUMBER", Global_17238.f_4091[iVar21], Global_17238.f_4217[iVar21]);
									}
									bVar40 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar32)
									{
										if (func_96(Global_17238.f_4343[iVar22], bVar31, 0, &fVar35, &fVar36, bParam7))
										{
											if (!Global_17238.f_5487)
											{
												fVar43 = fVar35;
												fVar41 = 0f;
												if (Global_17238.f_4860[iVar8] == 2)
												{
													fVar41 = (fVar41 + ((fVar45 - fVar43) + (0.00078125f * 1f)));
												}
												else if (Global_17238.f_4860[iVar8] == 0)
												{
													fVar41 = (fVar41 + (((fVar45 - fVar33) * 0.5f) - (fVar43 * 0.5f)));
												}
												Global_17238.f_7549[((iVar9 * Global_17238.f_5000) + iVar8)] = fVar41;
												Global_17238.f_7631[((iVar9 * Global_17238.f_5000) + iVar8)] = fVar43;
											}
											else
											{
												fVar41 = Global_17238.f_7549[((iVar9 * Global_17238.f_5000) + iVar8)];
												fVar43 = Global_17238.f_7631[((iVar9 * Global_17238.f_5000) + iVar8)];
											}
											if (bVar51)
											{
												if (func_96(26, 1, 0, &fVar35, &fVar36, bParam7))
												{
													if (Global_17238.f_4860[iVar8] == 2)
													{
														fVar41 = (fVar41 - (fVar35 * 2f));
													}
													fVar44 = (fVar35 * 0.5f);
													if (func_96(26, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_86(26, 1, &iVar46, &iVar47, &iVar48);
														unk_0xE31E1C3DC82BAC87(func_94(26), func_92(26, 1), ((fVar33 + fVar41) + fVar44), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
												if (func_96(27, 1, 0, &fVar35, &fVar36, bParam7))
												{
													fVar41 = (fVar41 + fVar35);
													fVar44 = (fVar35 * 0.5f);
													if (func_96(27, 1, 1, &fVar35, &fVar36, bParam7))
													{
														func_86(27, 1, &iVar46, &iVar47, &iVar48);
														unk_0xE31E1C3DC82BAC87(func_94(27), func_92(27, 1), (((fVar33 + fVar41) + fVar44) + (fVar42 + fVar43)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
											}
											if (func_96(Global_17238.f_4343[iVar22], bVar31, 1, &fVar35, &fVar36, bParam7))
											{
												func_86(Global_17238.f_4343[iVar22], bVar31, &iVar46, &iVar47, &iVar48);
												unk_0xE31E1C3DC82BAC87(func_94(Global_17238.f_4343[iVar22]), func_92(Global_17238.f_4343[iVar22], bVar31), ((fVar33 + fVar41) + (fVar35 * 0.5f)), ((fVar34 - 0.00277776f) + (fVar54 * 0.5f)), (fVar35 * func_75(Global_17238.f_4343[iVar22])), (fVar36 * func_75(Global_17238.f_4343[iVar22])), 0f, iVar46, iVar47, iVar48, 255, 0);
											}
										}
									}
									bVar40 = true;
									iVar22++;
									break;
								
								case 5:
									bVar40 = true;
									break;
							}
							if (Global_17238.f_4833[iVar8] == 5)
							{
								if (Global_17238.f_4845[iVar8] > 0.05f)
								{
									fVar33 = (fVar33 + Global_17238.f_4845[iVar8]);
								}
								else
								{
									fVar33 = (fVar33 + 0.05f);
								}
							}
							else
							{
								fVar33 = (fVar33 + Global_17238.f_4845[iVar8]);
								if (Global_17238.f_4852[iVar8])
								{
									if (func_96(26, 1, 1, &fVar35, &fVar36, bParam7))
									{
										fVar33 = (fVar33 - fVar35);
									}
								}
							}
						}
						else
						{
							fVar33 = (fVar33 + Global_17238.f_4845[iVar8]);
						}
						iVar8++;
					}
				}
				if (bVar40)
				{
					if (bVar32)
					{
						Global_17238.f_7333[iVar9] = iVar6;
						Global_17238.f_5495 = iVar6;
						iVar9++;
						if (Global_17238.f_5127[iVar6])
						{
							iVar13++;
						}
						if (Global_17238.f_5500[iVar6] != 0f)
						{
							fVar64 = (fVar64 + Global_17238.f_5500[iVar6]);
						}
						else
						{
							fVar64 = (fVar64 + 0.034722f);
						}
					}
					if (!Global_17238.f_5486)
					{
						Global_17238.f_5253[iVar6] = 1;
						if (Global_17238.f_5001[iVar6])
						{
							if (bVar31)
							{
								Global_17238.f_5492 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar31)
							{
								Global_17238.f_5492 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_17238.f_5486)
			{
				Global_17238.f_5488 = ((fVar56 + fVar64) + (0.00277776f * IntToFloat(iVar12)));
				Global_17238.f_5491 = iVar11;
				Global_17238.f_5489 = iVar10;
				Global_17238.f_5486 = 1;
			}
		}
		iVar5++;
	}
	if (!Global_17238.f_5487)
	{
		Global_17238.f_5490 = iVar9;
		Global_17238.f_5487 = 1;
	}
	Global_17238.f_5628 = fVar49;
	Global_17238.f_5630 = unk_0x48E480685981C7D4();
	unk_0x97925E0DE42EFC5C(Global_17238.f_5628);
	if (!Global_17238.f_7672)
	{
		func_71();
	}
	Global_17238.f_7672 = 0;
	if (bParam2)
	{
		unk_0xC9A352663D97EFC3(10);
	}
	unk_0xC9A352663D97EFC3(6);
	unk_0xC9A352663D97EFC3(7);
	unk_0xC9A352663D97EFC3(9);
	unk_0xC9A352663D97EFC3(8);
	if (bParam0)
	{
		func_70(1);
	}
	unk_0x94CD3CDE7BD3510B();
}

void func_70(int iParam0)
{
	Global_1336084.f_932 = iParam0;
}

void func_71()
{
	if (!Global_14394.f_1 == 1)
	{
		if (func_74(0))
		{
			func_72(0);
		}
		unk_0xF3148AAF69AF9CBC(&Global_2265, 2);
	}
}

void func_72(int iParam0)
{
	if (Global_14552)
	{
		func_73(0, 0);
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
	if (!func_66())
	{
		Global_14394.f_1 = 3;
	}
}

void func_73(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_74(0))
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

int func_74(int iParam0)
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

float func_75(int iParam0)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 43:
		case 44:
		case 45:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_76(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4)
{
	unk_0xA004CFE21CA812EA(sParam2);
	unk_0xB6F6A8755E3C6180(uParam3, uParam4);
	unk_0x834054753F171911(fParam0, fParam1, 0);
}

void func_77(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0xA004CFE21CA812EA(sParam2);
	unk_0x6D55FF05D62B91BC(iParam3);
	unk_0x834054753F171911(fParam0, fParam1, iParam4);
}

void func_78(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0xDFC297A2CE47E495(Global_17238.f_7700[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0xDFC297A2CE47E495(Global_17238.f_7700[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0x00793A77639A3BAC(iVar0, iVar1, iVar2, 255);
}

void func_79(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_80(Global_17238.f_5760[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0xDFC297A2CE47E495(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			unk_0x00793A77639A3BAC(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0xDFC297A2CE47E495(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x00793A77639A3BAC(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0xDFC297A2CE47E495(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0x00793A77639A3BAC(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0x00793A77639A3BAC(155, 155, 155, 255);
		}
		else
		{
			unk_0x00793A77639A3BAC(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0x00793A77639A3BAC(0, 0, 0, unk_0xF34EE736CF047844((255f * 0.8f)));
		}
		else
		{
			unk_0xDFC297A2CE47E495(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0x00793A77639A3BAC(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0x00793A77639A3BAC(155, 155, 155, 255);
	}
	else
	{
		unk_0x00793A77639A3BAC(155, 155, 155, 255);
	}
	unk_0x73984E9D23C977BA(0f, 0.35f);
	unk_0x52B16DD1F847B2B9(1);
	if (bParam5)
	{
		unk_0x73984E9D23C977BA(0f, 0.425f);
		unk_0x992C39DBBED35AE3(4);
	}
	else
	{
		unk_0x992C39DBBED35AE3(0);
	}
	unk_0xD90CB3CB1328F03F(0f, 1f);
	unk_0x2BE2394F62FC653A(0);
	unk_0xE927678D0258C5A3(0, 0, 0, 0, 0);
	unk_0x9218408BEDC82866(0, 0, 0, 0, 0);
}

void func_80(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_81(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_58(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_98(bParam4, bParam8))
	{
		return;
	}
	if (func_84())
	{
		return;
	}
	if (unk_0x18138B3C6FD07449())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_62(unk_0x1329891157A54C63(), 0))
		{
			return;
		}
	}
	if (unk_0x913B1C01C1BA6C6F())
	{
		if (unk_0x87E58291A874D55F() == 0 || unk_0x18138B3C6FD07449())
		{
			return;
		}
	}
	if (Global_17238.f_4546 != 0)
	{
		if (unk_0x34C16363C251572E(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_17238.f_4546)
			{
				if (Global_17238.f_4803[iVar1] != 344)
				{
					StringCopy(&(Global_17238.f_4548[iVar1 /*16*/]), unk_0x2576ED87DB06844F(2, Global_17238.f_4803[iVar1], 1), 64);
				}
				else if (Global_17238.f_4816[iVar1] != 32)
				{
					StringCopy(&(Global_17238.f_4548[iVar1 /*16*/]), unk_0x2ABE9D86108310D2(2, Global_17238.f_4816[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_17238.f_4547 = 0;
		}
		if (!Global_17238.f_4547)
		{
			unk_0x21ED0FC9B5CC748B(Global_17238.f_5418[iVar0 /*10*/], "CLEAR_ALL");
			unk_0xBA9BA6181F2B6111();
			unk_0x21ED0FC9B5CC748B(Global_17238.f_5418[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0x518198639630AE08((1f - (Global_17238.f_4858 / 100f)));
			unk_0xBA9BA6181F2B6111();
			if (unk_0x913B1C01C1BA6C6F())
			{
				unk_0x21ED0FC9B5CC748B(Global_17238.f_5418[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0x75A2A42ADE12FD0E(1);
				unk_0xBA9BA6181F2B6111();
			}
			iVar1 = 0;
			while (iVar1 < Global_17238.f_4546)
			{
				if (unk_0x8DAF7A748E41AD46(&(Global_17238.f_4741[iVar1 /*4*/])) != unk_0x8DAF7A748E41AD46("PREV"))
				{
					unk_0x21ED0FC9B5CC748B(Global_17238.f_5418[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0xBD0C54D89298454E(iVar1);
					func_83(&(Global_17238.f_4548[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x8DAF7A748E41AD46(&(Global_17238.f_4741[iVar2 /*4*/])) == unk_0x8DAF7A748E41AD46("PREV"))
					{
						func_83(&(Global_17238.f_4548[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17238.f_4790[iVar1] == -1)
					{
						func_82(&(Global_17238.f_4741[iVar1 /*4*/]));
					}
					else
					{
						unk_0x6CE839BF5D87A428(&(Global_17238.f_4741[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0x628846883063947B(iParam2, 70);
						}
						else
						{
							unk_0x6D55FF05D62B91BC(iParam2);
						}
						unk_0xC3822F70D0E7940B();
					}
					if (unk_0x913B1C01C1BA6C6F())
					{
						if (Global_17238.f_4803[iVar1] != 344 && unk_0x236D8AD7EE179F46(Global_17238.f_4829, iVar1))
						{
							unk_0x75A2A42ADE12FD0E(1);
							unk_0xBD0C54D89298454E(Global_17238.f_4803[iVar1]);
						}
						else
						{
							unk_0x75A2A42ADE12FD0E(0);
							unk_0xBD0C54D89298454E(344);
						}
					}
					unk_0xBA9BA6181F2B6111();
				}
				iVar1++;
			}
			if (unk_0x8DAF7A748E41AD46(&(Global_2549033.f_16)) != unk_0x8DAF7A748E41AD46(""))
			{
				unk_0x21ED0FC9B5CC748B(Global_17238.f_5418[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0xBD0C54D89298454E(Global_17238.f_4546);
				func_83(&Global_2549033);
				if (Global_2549033.f_20 == -1)
				{
					func_82(&(Global_2549033.f_16));
				}
				else
				{
					unk_0x6CE839BF5D87A428(&(Global_2549033.f_16));
					if (bParam5)
					{
						unk_0x628846883063947B(iParam2, 70);
					}
					else
					{
						unk_0x6D55FF05D62B91BC(iParam2);
					}
					unk_0xC3822F70D0E7940B();
				}
				unk_0xBA9BA6181F2B6111();
			}
			unk_0x21ED0FC9B5CC748B(Global_17238.f_5418[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0xBD0C54D89298454E(0);
			unk_0xBD0C54D89298454E(0);
			unk_0xBD0C54D89298454E(0);
			unk_0xBD0C54D89298454E(80);
			unk_0xBA9BA6181F2B6111();
			unk_0x21ED0FC9B5CC748B(Global_17238.f_5418[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_17238.f_4859)
			{
				unk_0xBD0C54D89298454E(1);
			}
			else
			{
				unk_0xBD0C54D89298454E(0);
			}
			unk_0xBA9BA6181F2B6111();
			Global_17238.f_4547 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_17238.f_4546)
		{
			if (Global_17238.f_4790[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0x21ED0FC9B5CC748B(Global_17238.f_5418[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0xBD0C54D89298454E(iVar1);
					unk_0x6CE839BF5D87A428(&(Global_17238.f_4741[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0x628846883063947B(iParam2, 70);
					}
					else
					{
						unk_0x6D55FF05D62B91BC(iParam2);
					}
					unk_0xC3822F70D0E7940B();
					unk_0xBA9BA6181F2B6111();
				}
			}
			iVar1++;
		}
		if (Global_2549033.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0x21ED0FC9B5CC748B(Global_17238.f_5418[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0xBD0C54D89298454E(iVar1);
				unk_0x6CE839BF5D87A428(&(Global_2549033.f_16));
				if (bParam5)
				{
					unk_0x628846883063947B(iParam2, 70);
				}
				else
				{
					unk_0x6D55FF05D62B91BC(iParam2);
				}
				unk_0xC3822F70D0E7940B();
				unk_0xBA9BA6181F2B6111();
			}
		}
		unk_0x700CD125EC59941D(76, 66);
		unk_0x931DC442937495CF(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_17238.f_7707)
			{
				unk_0xD43E234447A65E08(15, 0f, -0.0375f);
				Global_17238.f_7707 = 1;
			}
		}
		else if (Global_17238.f_7707)
		{
			unk_0x5547446287DE314B(15);
			Global_17238.f_7707 = 0;
		}
		unk_0x94CD3CDE7BD3510B();
		if (Global_17238.f_4832)
		{
			unk_0x700CD125EC59941D(82, 66);
			unk_0x931DC442937495CF(0f, 0f, 0f, 0f);
			unk_0xD45896EF84BD41C8(Global_17238.f_5418[iVar0 /*10*/], Global_17238.f_4830, Global_17238.f_4831, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0x94CD3CDE7BD3510B();
		}
		else
		{
			unk_0x88188CE25DF2572C(Global_17238.f_5418[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_82(var uParam0)
{
	unk_0x6CE839BF5D87A428(uParam0);
	unk_0xC3822F70D0E7940B();
}

void func_83(var uParam0)
{
	unk_0x1F704997074F9C16(uParam0);
}

int func_84()
{
	struct<3> Var0;
	
	if (Global_14394.f_1 > 3)
	{
		return 1;
	}
	if (func_85())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0x2B4380FBF49E1B71(&Var0);
		if (Global_14339 == 0)
		{
			if (Var0.f_1 > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.f_1 > -101f)
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

int func_85()
{
	if (unk_0x968BF1C2C695B61A(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_86(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	
	unk_0xDFC297A2CE47E495(1, iParam2, iParam3, iParam4, &uVar0);
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 43:
		case 44:
		case 45:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
	}
}

void func_87(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xDFC297A2CE47E495(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0x992C39DBBED35AE3(0);
	unk_0x73984E9D23C977BA(0f, 0.35f);
	unk_0xDA5E01AA73A367E0(2);
	unk_0x00793A77639A3BAC(iVar0, iVar1, iVar2, iVar3);
	unk_0xD90CB3CB1328F03F(fParam0, ((Global_17235 + Global_17237) - 0.0046875f));
	unk_0x2BE2394F62FC653A(0);
	unk_0xE927678D0258C5A3(0, 0, 0, 0, 0);
	unk_0x9218408BEDC82866(0, 0, 0, 0, 0);
}

void func_88(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0xA004CFE21CA812EA(sParam2);
	unk_0x6D55FF05D62B91BC(uParam3);
	unk_0x6D55FF05D62B91BC(uParam4);
	unk_0x834054753F171911(fParam0, fParam1, 0);
}

float func_89(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0x4357449749A521B1(sParam0))
	{
		if (unk_0x8DAF7A748E41AD46(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_90();
	unk_0xB865D57D92832050(sParam0);
	unk_0x6D55FF05D62B91BC(uParam1);
	unk_0x6D55FF05D62B91BC(uParam2);
	return unk_0x0239B891C698A437(1);
}

void func_90()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0xDFC297A2CE47E495(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_17238.f_7682)
	{
		iVar0 = Global_17238.f_7678;
		iVar1 = Global_17238.f_7679;
		iVar2 = Global_17238.f_7680;
		iVar3 = Global_17238.f_7681;
	}
	unk_0x992C39DBBED35AE3(0);
	unk_0x73984E9D23C977BA(0f, 0.35f);
	unk_0x00793A77639A3BAC(iVar0, iVar1, iVar2, iVar3);
	unk_0xD90CB3CB1328F03F((Global_17235 + 0.0046875f), ((Global_17235 + Global_17237) - 0.0046875f));
	unk_0x2BE2394F62FC653A(0);
	unk_0xE927678D0258C5A3(0, 0, 0, 0, 0);
	unk_0x9218408BEDC82866(0, 0, 0, 0, 0);
}

void func_91(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0x0AD1CA312687609D((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

var func_92(int iParam0, bool bParam1)
{
	char* sVar0[2];
	
	if (!unk_0xB318FDA0D1ABDB20(&(Global_17238.f_6548[iParam0 /*16*/])))
	{
		return func_93(&(Global_17238.f_6548[iParam0 /*16*/]));
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 48:
			sVar0[0] = "Shop_Discount_Icon";
			sVar0[1] = "Shop_Discount_Icon";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_93(var uParam0)
{
	return uParam0;
}

char* func_94(int iParam0)
{
	if (!unk_0xB318FDA0D1ABDB20(&(Global_17238.f_5763[iParam0 /*16*/])))
	{
		return func_93(&(Global_17238.f_5763[iParam0 /*16*/]));
	}
	return "CommonMenu";
}

int func_95()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0x510185F6AA2AE89F(&iVar0, &iVar1);
	fVar2 = (unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

int func_96(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	
	uVar0 = func_94(iParam0);
	uVar1 = func_92(iParam0, bParam1);
	if (unk_0x8DAF7A748E41AD46(uVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0x510185F6AA2AE89F(&iVar2, &iVar3);
			fVar5 = unk_0xA32FB34BA4B9C4AA(0);
			if (func_95())
			{
				iVar2 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar3) * fVar5));
			}
			fVar6 = (unk_0xBBDA792448DB5A89(iVar2) / unk_0xBBDA792448DB5A89(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_95())
			{
				fVar4 = 1f;
			}
			if (unk_0x968BF1C2C695B61A(joaat("director_mode")) > 0)
			{
				unk_0xF8BA71207732310A(&iVar2, &iVar3);
			}
			iVar2 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar2) / fVar4));
			iVar3 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar3) / fVar4));
		}
		else
		{
			unk_0xF8BA71207732310A(&iVar2, &iVar3);
		}
		Var7 = { unk_0x71E755E29C4DCADF(uVar0, sVar1) };
		Var7.f_0 = (Var7.f_0 * (func_97(iParam0) / fVar4));
		Var7.f_1 = (Var7.f_1 * (func_97(iParam0) / fVar4));
		if (!bParam2)
		{
			Var7.f_0 = (Var7.f_0 - 2f);
			Var7.f_1 = (Var7.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var7.f_0 = 288f;
			Var7.f_1 = 106f;
		}
		*fParam3 = ((Var7.f_0 / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((Var7.f_1 / IntToFloat(iVar3)) / (Var7.f_0 / IntToFloat(iVar2))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0xA8D3C47114E32A16() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_17237)
			{
				*fParam4 = (*fParam4 * (Global_17237 / *fParam3));
				*fParam3 = Global_17237;
			}
		}
		return 1;
	}
	return 0;
}

float func_97(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
			return 0.5f;
			break;
	}
	return 1f;
}

int func_98(bool bParam0, bool bParam1)
{
	if (Global_2422670.f_1324.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0xECDEA377354CBDA4() || (func_100(8, -1) && func_99() != 64)) || (unk_0x37F19465A7165331() != 0 && !bParam1)) || (unk_0xF33755A765033580() && !bParam0)) || unk_0x110C7CC4965F4074()) || Global_69280) || Global_17238.f_7706) || unk_0x30D46D6512711A3E()) || Global_90861.f_1331)
	{
		return 0;
	}
	return 1;
}

int func_99()
{
	return Global_1315825;
}

bool func_100(int iParam0, int iParam1)
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

void func_101(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_17238.f_5494 = iParam0;
	Global_17238.f_5626 = iParam2;
	if (Global_17238.f_5494 < Global_17238.f_5493)
	{
		Global_17238.f_5493 = Global_17238.f_5494;
	}
	else if ((Global_17238.f_5487 && Global_17238.f_5494 > Global_17238.f_5495) || (!Global_17238.f_5487 && Global_17238.f_5494 >= (Global_17238.f_5493 + Global_17238.f_4999)))
	{
		iVar0 = Global_17238.f_5493;
		while (iVar0 <= Global_17238.f_5494)
		{
			if (iVar0 >= 0 && iVar0 < 124)
			{
				if (Global_17238.f_4866[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_17238.f_4999 && Global_17238.f_5493 < 125)
		{
			Global_17238.f_5493++;
			iVar1 = 0;
			iVar0 = Global_17238.f_5493;
			while (iVar0 <= Global_17238.f_5494)
			{
				if (iVar0 >= 0 && iVar0 < 124)
				{
					if (Global_17238.f_4866[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_17238.f_5486 = 0;
	Global_17238.f_5487 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_17238.f_4469), "", 16);
		StringCopy(&(Global_2549033.f_21), "", 16);
	}
}

void func_102(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0x208A691F35C2C023(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0x208A691F35C2C023(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0x208A691F35C2C023(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0x208A691F35C2C023(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0xD7CD731653154101(2, 218) * 127f));
			*uParam1 = unk_0xF34EE736CF047844((unk_0xD7CD731653154101(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0xD7CD731653154101(2, 220) * 127f));
			*uParam3 = unk_0xF34EE736CF047844((unk_0xD7CD731653154101(2, 221) * 127f));
		}
	}
}

void func_103()
{
	func_113(0);
	func_112(1, 0, 0, 0, 0);
	func_111(1, 1, 1, 1, 1);
	if (Local_82.f_1 == 3)
	{
		func_110("SEA_MENU");
	}
	else
	{
		func_110("STREET_MENU");
	}
	func_107(0, "RACES_OPT_SP", 0, 1, 0, 0);
	func_107(1, "RACES_OPT_MP", 0, 1, 0, 0);
	func_106(201, "ITEM_SELECT", -1);
	func_106(202, "ITEM_EXIT", -1);
	func_105(11, "ITEM_SCROLL", -1);
	func_104(0);
	func_101(0, 1, 1);
	iLocal_96 = 0;
}

void func_104(int iParam0)
{
	Global_17238.f_5493 = iParam0;
}

void func_105(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = unk_0x2ABE9D86108310D2(2, iParam0, 1);
	if (Global_17238.f_4546 >= 12)
	{
		StringCopy(&Global_2549033, sVar0, 64);
		StringCopy(&(Global_2549033.f_16), sParam1, 16);
		Global_2549033.f_20 = iParam2;
		return;
		return;
	}
	unk_0xC69E84EBBD7166E6(&(Global_17238.f_4829), Global_17238.f_4546);
	StringCopy(&(Global_17238.f_4548[Global_17238.f_4546 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17238.f_4741[Global_17238.f_4546 /*4*/]), sParam1, 16);
	Global_17238.f_4790[Global_17238.f_4546] = iParam2;
	Global_17238.f_4803[Global_17238.f_4546] = 344;
	Global_17238.f_4816[Global_17238.f_4546] = iParam0;
	Global_17238.f_4546++;
}

void func_106(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = unk_0x2576ED87DB06844F(2, iParam0, 1);
	if (Global_17238.f_4546 >= 12)
	{
		StringCopy(&Global_2549033, sVar0, 64);
		StringCopy(&(Global_2549033.f_16), sParam1, 16);
		Global_2549033.f_20 = iParam2;
		return;
		return;
	}
	unk_0xC69E84EBBD7166E6(&(Global_17238.f_4829), Global_17238.f_4546);
	StringCopy(&(Global_17238.f_4548[Global_17238.f_4546 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17238.f_4741[Global_17238.f_4546 /*4*/]), sParam1, 16);
	Global_17238.f_4790[Global_17238.f_4546] = iParam2;
	Global_17238.f_4803[Global_17238.f_4546] = iParam0;
	Global_17238.f_4816[Global_17238.f_4546] = 32;
	Global_17238.f_4546++;
}

void func_107(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_17238.f_4992 > iParam0)
	{
		return;
	}
	if (Global_17238.f_4992 >= 125)
	{
		return;
	}
	if (Global_17238.f_4994 >= 250)
	{
		return;
	}
	if (Global_17238.f_5498 < Global_17238.f_5496)
	{
		return;
	}
	if (Global_17238.f_4992 != iParam0)
	{
		Global_17238.f_4992 = iParam0;
		Global_17238.f_4993 = 0;
	}
	iVar0 = Global_17238.f_4833[Global_17238.f_4993];
	if (iVar0 != 1)
	{
		while (Global_17238.f_4993 < 4 && iVar0 != 1)
		{
			Global_17238.f_4993++;
			iVar0 = Global_17238.f_4833[Global_17238.f_4993];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_17238.f_73[Global_17238.f_4994 /*6*/]), sParam1, 24);
	if (!unk_0xB318FDA0D1ABDB20(sParam1) && !unk_0x7281387C8D4EC316(sParam1))
	{
	}
	Global_17238.f_1574[Global_17238.f_4994] = iParam3;
	Global_17238.f_1825[Global_17238.f_4994] = iParam4;
	Global_17238.f_4994++;
	if (iParam2 == 0)
	{
		fVar1 = func_109(&(Global_17238.f_73[Global_17238.f_4994 /*6*/]));
		if (Global_17238.f_4852[Global_17238.f_4993])
		{
			func_96(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_17238.f_4845[Global_17238.f_4993])
		{
			Global_17238.f_4845[Global_17238.f_4993] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_108(&(Global_17238.f_73[Global_17238.f_4994 /*6*/]));
			if (fVar4 > Global_17238.f_5500[iParam0])
			{
				Global_17238.f_5500[iParam0] = fVar4;
			}
		}
	}
	unk_0xF3148AAF69AF9CBC(&(Global_17238.f_4866[iParam0]), Global_17238.f_4993);
	Global_17238.f_4993++;
	Global_17238.f_5499 = 1;
	Global_17238.f_5497 = (Global_17238.f_4994 - 1);
	Global_17238.f_5498 = 0;
	Global_17238.f_5496 = iParam2;
}

float func_108(char* sParam0)
{
	if (!unk_0x7281387C8D4EC316(sParam0))
	{
	}
	return unk_0x9885727BF51C57B4(0.35f, 0);
}

float func_109(char* sParam0)
{
	if (!unk_0x4357449749A521B1(uParam0))
	{
		if (unk_0x8DAF7A748E41AD46(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_79(0, 1, 0, 0, 0, 0);
	unk_0xB865D57D92832050(sParam0);
	return unk_0x0239B891C698A437(1);
}

void func_110(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_17238.f_1), sParam0, 16);
	Global_17238.f_68 = 0;
	Global_17238.f_69 = 0;
	Global_17238.f_70 = 0;
	Global_17238.f_71 = 0;
	Global_17238.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17238.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_111(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17238.f_4860[0] = iParam0;
	Global_17238.f_4860[1] = iParam1;
	Global_17238.f_4860[2] = iParam2;
	Global_17238.f_4860[3] = iParam3;
	Global_17238.f_4860[4] = iParam4;
}

void func_112(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17238.f_4833[0] = iParam0;
	Global_17238.f_4833[1] = iParam1;
	Global_17238.f_4833[2] = iParam2;
	Global_17238.f_4833[3] = iParam3;
	Global_17238.f_4833[4] = iParam4;
	Global_17238.f_5000 = 0;
	if (iParam0 != 0)
	{
		Global_17238.f_5000++;
	}
	if (iParam1 != 0)
	{
		Global_17238.f_5000++;
	}
	if (iParam2 != 0)
	{
		Global_17238.f_5000++;
	}
	if (iParam3 != 0)
	{
		Global_17238.f_5000++;
	}
	if (iParam4 != 0)
	{
		Global_17238.f_5000++;
	}
}

void func_113(bool bParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 250)
	{
		StringCopy(&(Global_17238.f_73[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_17238.f_2076[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2437099[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 250)
	{
		Global_17238.f_3840[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 125)
	{
		Global_17238.f_4091[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 125)
	{
		Global_17238.f_4343[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 125)
	{
		Global_17238.f_4866[iVar0] = 0;
		Global_17238.f_5001[iVar0] = 0;
		Global_17238.f_5127[iVar0] = 0;
		Global_17238.f_5631[iVar0] = 0f;
		Global_17238.f_5253[iVar0] = 0;
		Global_17238.f_5500[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_17238.f_4833[iVar0] = 0;
		Global_17238.f_4845[iVar0] = 0f;
		Global_17238.f_4839[iVar0] = -1f;
		Global_17238.f_4852[iVar0] = 0;
		Global_17238.f_4860[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17238.f_4741[iVar0 /*4*/]), "", 16);
		Global_17238.f_4790[iVar0] = -1;
		Global_17238.f_4803[iVar0] = 344;
		Global_17238.f_4816[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 49)
	{
		StringCopy(&(Global_17238.f_5763[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_17238.f_6548[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	StringCopy(&(Global_2549033.f_16), "", 16);
	Global_2549033.f_20 = -1;
	Global_17238 = 0;
	Global_17238.f_4992 = 0;
	Global_17238.f_4993 = 0;
	Global_17238.f_4994 = 0;
	Global_17238.f_4996 = 0;
	Global_17238.f_4997 = 0;
	Global_17238.f_4998 = 0;
	Global_17238.f_4995 = 0;
	Global_17238.f_5626 = 0;
	Global_17238.f_5494 = 0;
	Global_17238.f_5493 = 0;
	Global_17238.f_5495 = 0;
	StringCopy(&(Global_17238.f_4469), "", 16);
	Global_17238.f_4539 = 0;
	Global_17238.f_4540 = 0;
	Global_17238.f_4541 = 0;
	Global_17238.f_4542 = 0;
	Global_17238.f_4543 = 0;
	Global_17238.f_4544 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17238.f_4473[iVar0] = 0;
		iVar0++;
	}
	Global_17238.f_4545 = 0;
	StringCopy(&(Global_2549033.f_21), "", 16);
	Global_2549033.f_61 = 0;
	Global_2549033.f_62 = 0;
	Global_2549033.f_63 = 0;
	Global_2549033.f_64 = 0;
	Global_2549033.f_65 = 0;
	Global_2549033.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_2549033.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_2549033.f_67 = 0;
	StringCopy(&(Global_17238.f_1), "", 16);
	Global_17238.f_4851 = 0f;
	Global_17238.f_68 = 0;
	Global_17238.f_69 = 0;
	Global_17238.f_70 = 0;
	Global_17238.f_71 = 0;
	Global_17238.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17238.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_17238.f_5499 = 0;
	Global_17238.f_5498 = 0;
	Global_17238.f_5496 = 0;
	Global_17238.f_5497 = 0;
	Global_17238.f_4546 = 0;
	Global_17238.f_4547 = 0;
	Global_17238.f_4999 = 10;
	Global_17238.f_5000 = 0;
	Global_17238.f_5628 = 0f;
	Global_17238.f_5629 = 0f;
	Global_17238.f_5486 = 0;
	Global_17238.f_5487 = 0;
	Global_17238.f_5488 = 0f;
	Global_17238.f_5489 = 0;
	Global_17238.f_5491 = 0;
	Global_17238.f_5490 = 0;
	Global_17238.f_5492 = 0;
	Global_17238.f_7703 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_17238.f_5757[iVar0] = -1;
		Global_17238.f_5760[iVar0] = -1;
		iVar0++;
	}
	Global_17238.f_4858 = 0f;
	Global_17238.f_4829 = 0;
	Global_17238.f_4859 = 0;
	Global_17238.f_7682 = 0;
	Global_17238.f_7677 = 0;
	Global_17238.f_7687 = 0;
	Global_17238.f_7692 = 0;
	Global_17238.f_7697 = 0;
	Global_17238.f_7699 = 0;
	Global_17238.f_7705 = 0;
	Global_17235 = 0.05f;
	Global_17236 = 0.05f;
	Global_17237 = 0.225f;
	fVar2 = unk_0xA32FB34BA4B9C4AA(0);
	if (bParam0)
	{
		Global_17237 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_17237 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_17237 = 0.225f;
	}
}

bool func_114(char* sParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_58(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_17238.f_5393[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0xB318FDA0D1ABDB20(&(Global_17238.f_5393[iVar0 /*4*/])))
	{
		unk_0x86B83C54AF71BD12(&(Global_17238.f_5393[iVar0 /*4*/]), 9);
		Global_17238.f_5386[iVar0] = 1;
		if (!unk_0x138E88466113A6BE(&(Global_17238.f_5393[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0xB711FC19ADBD3C70("CommonMenu", false);
	Global_17238.f_5379[iVar0] = 1;
	if (!unk_0x682001A921A80123("CommonMenu"))
	{
		bVar1 = false;
	}
	bVar2 = false;
	StringCopy(&(Global_17238.f_5418[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_115(&(Global_17238.f_5418[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_115(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0xCC8E3BAC62A29F42(*uParam0))
			{
				*uParam0 = unk_0x95EF972E3A07B525(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0xCC8E3BAC62A29F42(*uParam0))
					{
						uParam0->f_8 = unk_0x48E480685981C7D4();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x48E480685981C7D4();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0xCC8E3BAC62A29F42(*uParam0))
			{
				uParam0->f_8 = unk_0x48E480685981C7D4();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0xCC8E3BAC62A29F42(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_116()
{
	int iVar0;
	
	if (func_146())
	{
		if (func_129())
		{
			iVar0 = 6;
			if (Local_82.f_1 == 1)
			{
				iVar0 = 4;
			}
			func_127(iVar0);
			if (func_54(uLocal_102[iVar0]))
			{
				if (bLocal_101)
				{
					if (unk_0x0BAE7BE122182FA8(uLocal_102[iVar0], cLocal_183, sLocal_184[iVar0], 3))
					{
						unk_0x3DD65E8B59E9E9CA(uLocal_102[iVar0], cLocal_183, sLocal_184[iVar0], -1056964608);
					}
					func_118(iVar0);
				}
			}
			unk_0x89086B596828ACBE(0, 51);
			if (unk_0xB93E207B3C65F1B1(0, 51))
			{
				iLocal_193 = 1;
				unk_0xB8BB626315D394F5(1);
				iLocal_81 = 3;
			}
		}
		else if (!iLocal_92)
		{
			unk_0x59E3A6BEFC421137(0);
			iLocal_92 = 1;
		}
	}
	else
	{
		func_117();
		if (!iLocal_92)
		{
			unk_0x59E3A6BEFC421137(0);
			iLocal_92 = 1;
		}
	}
}

void func_117()
{
	if (iLocal_91 && unk_0x48E480685981C7D4() > iLocal_94)
	{
		unk_0xB8BB626315D394F5(1);
		iLocal_91 = 0;
	}
}

void func_118(int iParam0)
{
	var uVar0;
	
	if (!unk_0x930F8FBB8E9537CC(uLocal_102[iParam0]) && !unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
	{
		switch (iLocal_194)
		{
			case 0:
				if (unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(uLocal_102[iParam0], 1), unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1)) < 64f)
				{
					iLocal_195 = 0;
					iLocal_196 = 0;
					iLocal_194 = 1;
				}
				break;
			
			case 1:
				unk_0xEAD984C2869B8B7C(&uVar0);
				unk_0xAF625598EDA64AD3(0, unk_0x81873881071CD9FE(), -1, 0, 2);
				unk_0xF88735A9354A45F3(0, unk_0x81873881071CD9FE(), 0);
				unk_0x56D9ED1541046AF6(uVar0);
				unk_0xC65002CAA1212AF9(uLocal_102[iParam0], uVar0);
				unk_0xA3561415EB3DA3A3(&uVar0);
				iLocal_194 = 2;
				break;
			
			case 2:
				if (unk_0xFA1212DE7C455679(uLocal_102[iParam0], 242628503) != 1 || unk_0x598CCC94D95857D9(uLocal_102[iParam0], unk_0x81873881071CD9FE(), 20f))
				{
					unk_0xF88735A9354A45F3(uLocal_102[iParam0], unk_0x81873881071CD9FE(), -1);
					if (!iLocal_196)
					{
						func_125(uLocal_102[iParam0], "PRERACE_CHAT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					else
					{
						func_125(uLocal_102[iParam0], "PRERACE_TAUNT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					iLocal_194 = 3;
				}
				break;
			
			case 3:
				if (!unk_0x3315DD7601B4423B(uLocal_102[iParam0]))
				{
					func_123(&uLocal_197);
					unk_0x31C1393E4ACFD794(uLocal_102[iParam0], "random@street_race", "_streetracer_wait_loop", 4f, -4f, -1, 9, 0, 0, 0, 0);
					iLocal_194 = 4;
				}
				break;
			
			case 4:
				if (unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(uLocal_102[iParam0], 1), unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1)) > 225f)
				{
					iLocal_194 = 0;
				}
				if (func_119(&uLocal_197) >= 5f && !iLocal_195)
				{
					iLocal_195 = 1;
					iLocal_194 = 1;
				}
				else if (func_119(&uLocal_197) >= 10f && !iLocal_196)
				{
					iLocal_196 = 1;
					iLocal_194 = 1;
				}
				break;
			
			case 5:
				break;
			}
	}
}

float func_119(var uParam0)
{
	if (func_122(uParam0))
	{
		if (func_121(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_120(unk_0x236D8AD7EE179F46(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_120(bool bParam0)
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

bool func_121(var uParam0)
{
	return unk_0x236D8AD7EE179F46(*uParam0, 2);
}

bool func_122(var uParam0)
{
	return unk_0x236D8AD7EE179F46(*uParam0, 1);
}

void func_123(var uParam0)
{
	func_124(uParam0, 0f);
}

void func_124(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_120(unk_0x236D8AD7EE179F46(*uParam0, 4)) - fParam1);
	unk_0xF3148AAF69AF9CBC(uParam0, 1);
	unk_0xC69E84EBBD7166E6(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_125(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x00641949E82961EF(uParam0, sParam1, sParam2, func_126(iParam3), 0);
}

int func_126(int iParam0)
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

void func_127(int iParam0)
{
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()) && !func_128())
	{
		if (func_54(uLocal_102[iParam0]))
		{
			if (iLocal_92 && unk_0xA04824262F150982(unk_0x81873881071CD9FE()) < 20f)
			{
				unk_0xA9076AE35130AE29(uLocal_102[iParam0], 0f, 0f, 0f, 1, 2000, 2000, 2000, 0);
				iLocal_92 = 0;
			}
		}
	}
}

int func_128()
{
	if (unk_0x7FCE6803A3D23268(unk_0x60FC347BF9CAD1BD()) == 4)
	{
		return 1;
	}
	return 0;
}

int func_129()
{
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		if (func_145())
		{
			return 0;
		}
		if (func_144(func_43()) < Local_82.f_3)
		{
			if (Local_82.f_1 == 3)
			{
				func_141("SEA_NA_CASH", Local_82.f_3);
			}
			else
			{
				func_141("STREET_NA_CASH", Local_82.f_3);
			}
			iLocal_91 = 1;
			iLocal_94 = unk_0x48E480685981C7D4() + 1000;
			return 0;
		}
		if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
		{
			func_140(&iLocal_0);
			iLocal_0 = unk_0xC848C6F4EF7777AB(unk_0x81873881071CD9FE());
			if (!func_135())
			{
				iLocal_91 = 1;
				iLocal_94 = unk_0x48E480685981C7D4() + 1000;
				return 0;
			}
			else if ((unk_0x4DC6EF945236C0F7(iLocal_0) <= 200 || unk_0x2D2289DC6C760F31(iLocal_0)) || func_134())
			{
				func_133("RACE_VehDmg");
				iLocal_91 = 1;
				iLocal_94 = unk_0x48E480685981C7D4() + 1000;
				return 0;
			}
			else if (unk_0xB0B9E53CEFDB16AA(iLocal_0, -1) != unk_0x81873881071CD9FE())
			{
				func_130();
				return 0;
			}
			else
			{
				if (func_74(0) || unk_0x968BF1C2C695B61A(joaat("appinternet")) > 0)
				{
					func_117();
					return 0;
				}
				switch (Local_82.f_1)
				{
					case 1:
						func_141("STREET_PLAY_B", Local_82.f_3);
						break;
					
					case 2:
						func_141("STREET_PLAY_C", Local_82.f_3);
						break;
					
					case 3:
						func_133("SEA_PLAY");
						break;
				}
				iLocal_91 = 1;
				iLocal_94 = unk_0x48E480685981C7D4();
				return 1;
			}
		}
		else
		{
			func_140(&iLocal_0);
			func_130();
			return 0;
		}
	}
	return 0;
}

void func_130()
{
	char* sVar0;
	
	if (Local_82.f_1 == 3)
	{
		if (func_13(iLocal_110))
		{
			sVar0 = "SEA_NA_VEH";
		}
		else
		{
			sVar0 = "SEA_NA_VEH2";
		}
		if (!func_132(sVar0))
		{
			func_131(sVar0);
			iLocal_91 = 1;
			iLocal_94 = unk_0x48E480685981C7D4() + 1000;
		}
	}
	else if (Local_82.f_1 == 1)
	{
		if (!func_132("STREET_NA_BIKE"))
		{
			func_131("STREET_NA_BIKE");
			iLocal_91 = 1;
			iLocal_94 = unk_0x48E480685981C7D4() + 1000;
		}
	}
	else if (!func_132("STREET_NA_CAR"))
	{
		func_131("STREET_NA_CAR");
		iLocal_91 = 1;
		iLocal_94 = unk_0x48E480685981C7D4() + 1000;
	}
}

void func_131(char* sParam0)
{
	unk_0x522099B37CAE9E12(sParam0);
	unk_0xC592EBAF1D879BDC(0, 1, 1, -1);
}

bool func_132(char* sParam0)
{
	unk_0xF7F787102FC9BCAC(sParam0);
	return unk_0xEF468B98099969A5(0);
}

void func_133(char* sParam0)
{
	if (!func_132(sParam0))
	{
		func_131(sParam0);
	}
}

int func_134()
{
	int iVar0;
	
	iVar0 = unk_0x14B7103DBD149FFE(iLocal_0);
	if (unk_0xC5ABD699DDC9D5A0(iVar0))
	{
		if (unk_0x2A87B5EC03992FB8(iLocal_0, 6, 0) || unk_0x2A87B5EC03992FB8(iLocal_0, 7, 0))
		{
			return 1;
		}
	}
	else if (unk_0x61A26017817C6AED(iVar0))
	{
		if (((unk_0x2A87B5EC03992FB8(iLocal_0, 0, 0) || unk_0x2A87B5EC03992FB8(iLocal_0, 1, 0)) || unk_0x2A87B5EC03992FB8(iLocal_0, 4, 0)) || unk_0x2A87B5EC03992FB8(iLocal_0, 5, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_135()
{
	int iVar0;
	char* sVar1;
	
	switch (Local_82.f_1)
	{
		case 1:
			iVar0 = func_139();
			if (iVar0 == 1)
			{
				func_133("STREET_NA_COP");
				return 0;
			}
			else if (iVar0 == 2)
			{
				func_133("STREET_NA_BIKE");
				return 0;
			}
			break;
		
		case 2:
			iVar0 = func_137();
			if (iVar0 == 1)
			{
				func_133("STREET_NA_COP");
				return 0;
			}
			else if (iVar0 == 2)
			{
				func_133("STREET_NA_CAR");
				return 0;
			}
			break;
		
		case 3:
			if (!func_136())
			{
				if (func_13(iLocal_110))
				{
					sVar1 = "SEA_NA_VEH";
				}
				else
				{
					sVar1 = "SEA_NA_VEH2";
				}
				func_133(sVar1);
				return 0;
			}
			break;
	}
	return 1;
}

int func_136()
{
	int iVar0;
	
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_0))
		{
			iVar0 = unk_0x14B7103DBD149FFE(iLocal_0);
			if (iVar0 == joaat("seashark") || iVar0 == joaat("seashark2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_137()
{
	int iVar0;
	int iVar1;
	int iVar2[83];
	
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_0))
		{
			iVar0 = unk_0x14B7103DBD149FFE(iLocal_0);
			if (func_138(iVar0))
			{
				return 1;
			}
			if ((((((((((iVar0 == joaat("police4") || iVar0 == joaat("policeold1")) || iVar0 == joaat("policeold2")) || iVar0 == joaat("fbi")) || iVar0 == joaat("fbi2")) || iVar0 == joaat("lguard")) || iVar0 == joaat("sheriff")) || iVar0 == joaat("sheriff2")) || iVar0 == joaat("pranger")) || iVar0 == joaat("ambulance")) || iVar0 == joaat("firetruk"))
			{
				return 1;
			}
			if (((unk_0xC5ABD699DDC9D5A0(iVar0) || unk_0x9F59BCFFFEAAD4B1(iVar0)) || unk_0xE083914AB72DD7CE(iVar0)) || unk_0x1699D7B95446F15C(iVar0))
			{
				return 2;
			}
			iVar2[0] = joaat("ambulance");
			iVar2[1] = joaat("benson");
			iVar2[2] = joaat("biff");
			iVar2[3] = joaat("bus");
			iVar2[4] = joaat("firetruk");
			iVar2[5] = joaat("forklift");
			iVar2[6] = joaat("mule");
			iVar2[7] = joaat("mule2");
			iVar2[8] = joaat("packer");
			iVar2[9] = joaat("phantom");
			iVar2[10] = joaat("mower");
			iVar2[11] = joaat("stockade");
			iVar2[12] = joaat("squalo");
			iVar2[13] = joaat("maverick");
			iVar2[14] = joaat("polmav");
			iVar2[15] = joaat("airtug");
			iVar2[16] = joaat("boxville3");
			iVar2[17] = joaat("annihilator");
			iVar2[18] = joaat("dinghy");
			iVar2[19] = 0;
			iVar2[20] = joaat("ripley");
			iVar2[21] = joaat("trash");
			iVar2[22] = joaat("burrito");
			iVar2[23] = joaat("pony");
			iVar2[24] = joaat("speedo");
			iVar2[25] = joaat("marquis");
			iVar2[26] = joaat("sanchez");
			iVar2[27] = joaat("airtug");
			iVar2[28] = joaat("taco");
			iVar2[29] = joaat("barracks");
			iVar2[30] = joaat("romero");
			iVar2[31] = joaat("blazer");
			iVar2[32] = joaat("blazer2");
			iVar2[33] = joaat("bodhi2");
			iVar2[34] = joaat("boxville2");
			iVar2[35] = joaat("bulldozer");
			iVar2[36] = joaat("caddy");
			iVar2[37] = joaat("caddy2");
			iVar2[38] = joaat("camper");
			iVar2[39] = joaat("tiptruck");
			iVar2[40] = joaat("tourbus");
			iVar2[41] = joaat("towtruck");
			iVar2[42] = joaat("towtruck2");
			iVar2[43] = joaat("tractor");
			iVar2[44] = joaat("tractor2");
			iVar2[45] = joaat("utillitruck");
			iVar2[46] = joaat("utillitruck2");
			iVar2[47] = joaat("utillitruck3");
			iVar2[48] = joaat("ratloader");
			iVar2[49] = joaat("dloader");
			iVar2[50] = joaat("docktug");
			iVar2[51] = joaat("dump");
			iVar2[52] = joaat("gburrito");
			iVar2[53] = joaat("handler");
			iVar2[54] = joaat("hauler");
			iVar2[55] = joaat("journey");
			iVar2[56] = joaat("rentalbus");
			iVar2[57] = joaat("mixer");
			iVar2[58] = joaat("rhino");
			iVar2[59] = joaat("cutter");
			iVar2[60] = joaat("pounder");
			iVar2[61] = joaat("tiptruck2");
			iVar2[62] = joaat("mixer2");
			iVar2[63] = joaat("rubble");
			iVar2[64] = joaat("scrap");
			iVar2[65] = joaat("armytanker");
			iVar2[66] = joaat("barracks2");
			iVar2[67] = joaat("airbus");
			iVar2[68] = joaat("coach");
			iVar2[69] = joaat("pbus");
			iVar2[70] = joaat("riot");
			iVar2[71] = 0;
			iVar2[72] = joaat("stockade3");
			iVar2[73] = joaat("flatbed");
			iVar2[74] = joaat("boxville");
			iVar2[75] = joaat("burrito2");
			iVar2[76] = joaat("burrito3");
			iVar2[77] = joaat("burrito4");
			iVar2[78] = joaat("rumpo");
			iVar2[79] = joaat("speedo2");
			iVar2[80] = 0;
			iVar2[81] = joaat("blimp");
			iVar2[82] = joaat("blimp2");
			iVar1 = 0;
			while (iVar1 < iVar2)
			{
				if (iVar0 == iVar2[iVar1])
				{
					return 2;
				}
				iVar1++;
			}
		}
	}
	return 0;
}

int func_138(int iParam0)
{
	switch (iParam0)
	{
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("polmav"):
		case joaat("policeb"):
		case joaat("policet"):
		case joaat("policeold2"):
		case joaat("policeold1"):
		case joaat("sheriff"):
		case joaat("sheriff2"):
			return 1;
			break;
	}
	return 0;
}

int func_139()
{
	int iVar0;
	
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_0))
		{
			iVar0 = unk_0x14B7103DBD149FFE(iLocal_0);
			if (iVar0 == joaat("policeb"))
			{
				return 1;
			}
			if (unk_0xC5ABD699DDC9D5A0(iVar0) && !unk_0xD382045D1EFD12D3(iVar0))
			{
				return 0;
			}
		}
	}
	return 2;
}

void func_140(int iParam0)
{
	if (unk_0x86CCCD2FAE9D5E65(*iParam0))
	{
		unk_0x930F8FBB8E9537CC(*iParam0);
		if (unk_0xE86442941AE40E75(*iParam0) && unk_0x46AE53A47E5D03D5(*iParam0, 1))
		{
			unk_0xE0913C01F5C0CC3D(iParam0);
		}
	}
}

void func_141(char* sParam0, var uParam1)
{
	if (!func_143(sParam0, uParam1))
	{
		func_142(sParam0, uParam1);
	}
}

void func_142(char* sParam0, int iParam1)
{
	unk_0x522099B37CAE9E12(uParam0);
	unk_0x6D55FF05D62B91BC(uParam1);
	unk_0xC592EBAF1D879BDC(0, 1, 1, -1);
}

bool func_143(char* sParam0, int iParam1)
{
	unk_0xF7F787102FC9BCAC(uParam0);
	unk_0x6D55FF05D62B91BC(uParam1);
	return unk_0xEF468B98099969A5(0);
}

int func_144(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0x85C45034BA638694(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0x85C45034BA638694(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0x85C45034BA638694(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

int func_145()
{
	int iVar0;
	
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
		{
			iVar0 = unk_0xC848C6F4EF7777AB(unk_0x81873881071CD9FE());
			if (func_14(iVar0))
			{
				if (unk_0x0752B24E8A13FF0E(iVar0))
				{
					if (Local_82.f_1 == 3 && unk_0x2C237D28F05F0008(iVar0))
					{
						return 0;
					}
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
	}
	return 0;
}

int func_146()
{
	int iVar0;
	
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		iVar0 = 20;
		if (Local_82.f_1 == 3)
		{
			iVar0 = 40;
		}
		if (unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), Local_88, 1) < IntToFloat(iVar0) && unk_0x74D4E5ACB4DAF9B8(unk_0x81873881071CD9FE()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_147()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_152(&uLocal_215))
	{
		if (Local_82.f_1 == 2)
		{
			if (func_149())
			{
				if (!unk_0x86CCCD2FAE9D5E65(iLocal_110))
				{
					if (unk_0x33ACB874CECA2D4B(iLocal_181) && unk_0x33ACB874CECA2D4B(iLocal_181))
					{
						iLocal_110 = unk_0xE00F8DEA9778FC87(iLocal_181, Local_112, fLocal_115, 1, 1);
						if (unk_0xC9BE90A8A35F85EC(1) && unk_0x033AAA0ABCCCDA82())
						{
							iLocal_111 = unk_0x18FBBAE099BA2A8F(iLocal_110, 1);
							unk_0xDBB92112C80D7254(iLocal_111, iLocal_110, 1, 99999999);
							unk_0x1D15D99A10A15334(iLocal_111, 1);
							unk_0x6CB332CB31E9FA96(iLocal_111, 1);
						}
						unk_0x5CC9D6711FE01F0D(iLocal_110);
						unk_0x686D6CDC14C4BA6C(iLocal_110, 1, 1);
						unk_0x89540DDA99D7346F(iLocal_110, 1);
						unk_0x39AD461928A70C5A(iLocal_110, 1);
						unk_0x03B2F9AA710B4B0F(unk_0x41899D9898B4EEE4(10), 1);
						unk_0xD578599BB87169AA(iLocal_110, unk_0x41899D9898B4EEE4(10));
						unk_0x726A9B2010B2B4D6(iLocal_110, 0);
						unk_0x887F4488DA99FD21(iLocal_181);
						unk_0x4EDE34FBADD967A6(0);
					}
				}
				if (!unk_0x86CCCD2FAE9D5E65(iLocal_116))
				{
					if (unk_0x33ACB874CECA2D4B(iLocal_182))
					{
						iLocal_116 = unk_0xE00F8DEA9778FC87(iLocal_182, Local_117, fLocal_120, 1, 1);
						unk_0x686D6CDC14C4BA6C(iLocal_116, 0, 1);
						unk_0x89540DDA99D7346F(iLocal_116, 1);
						unk_0x39AD461928A70C5A(iLocal_116, 1);
						unk_0x5CC9D6711FE01F0D(iLocal_116);
						unk_0x03B2F9AA710B4B0F(unk_0x41899D9898B4EEE4(10), 1);
						unk_0xD578599BB87169AA(iLocal_116, unk_0x41899D9898B4EEE4(10));
						unk_0x726A9B2010B2B4D6(iLocal_116, 0);
						unk_0x887F4488DA99FD21(iLocal_182);
						unk_0x4EDE34FBADD967A6(0);
					}
				}
				if (unk_0x8E8B546E1A81D27F(cLocal_183))
				{
					if (iLocal_192)
					{
						iVar0 = 0;
						while (iVar0 <= (iLocal_173 - 1))
						{
							if (unk_0x86CCCD2FAE9D5E65(uLocal_102[iVar0]))
							{
								if (!unk_0x930F8FBB8E9537CC(uLocal_102[iVar0]) && !func_148(uLocal_102[iVar0], -2017877118))
								{
									unk_0x31C1393E4ACFD794(uLocal_102[iVar0], cLocal_183, sLocal_184[iVar0], 1000f, -1000f, -1, 1, 0, 0, 0, 0);
									unk_0x6CB332CB31E9FA96(uLocal_102[iVar0], 1);
								}
							}
							else if (unk_0x33ACB874CECA2D4B(iLocal_173[iVar0]))
							{
								uLocal_102[iVar0] = unk_0x206897C6DBC12488(25, iLocal_173[iVar0], Local_135[iVar0 /*3*/], fLocal_157[iVar0], 1, 1);
								unk_0xB901CB880393ADF7(uLocal_102[iVar0], Local_135[iVar0 /*3*/], 0, 0, 1);
								unk_0x1D15D99A10A15334(uLocal_102[iVar0], 1);
								unk_0x31C1393E4ACFD794(uLocal_102[iVar0], cLocal_183, sLocal_184[iVar0], 1000f, -1000f, -1, 1, 0, 0, 0, 0);
								unk_0x6CB332CB31E9FA96(uLocal_102[iVar0], 1);
							}
							iVar0++;
						}
						if ((((((((func_54(uLocal_102[0]) && func_54(uLocal_102[1])) && func_54(uLocal_102[2])) && func_54(uLocal_102[3])) && func_54(uLocal_102[4])) && func_54(uLocal_102[5])) && func_54(uLocal_102[6])) && func_13(iLocal_110)) && func_13(iLocal_116))
						{
							bLocal_101 = true;
							iVar0 = 0;
							while (iVar0 <= (iLocal_173 - 1))
							{
								unk_0x887F4488DA99FD21(iLocal_173[iVar0]);
								iVar0++;
							}
							iLocal_192 = 0;
						}
					}
				}
			}
		}
		else if (Local_82.f_1 == 1)
		{
			if (func_149())
			{
				if (!unk_0x86CCCD2FAE9D5E65(iLocal_110))
				{
					if (unk_0x33ACB874CECA2D4B(iLocal_181))
					{
						iLocal_110 = unk_0xE00F8DEA9778FC87(iLocal_181, Local_112, fLocal_115, 1, 1);
						if (unk_0xC9BE90A8A35F85EC(0) && unk_0xAD0A666BB76E2357())
						{
							iLocal_111 = unk_0x18FBBAE099BA2A8F(iLocal_110, 1);
							unk_0xDBB92112C80D7254(iLocal_111, iLocal_110, 1, 99999999);
							unk_0x1D15D99A10A15334(iLocal_111, 1);
							unk_0x6CB332CB31E9FA96(iLocal_111, 1);
						}
						unk_0x686D6CDC14C4BA6C(iLocal_110, 1, 1);
						unk_0x89540DDA99D7346F(iLocal_110, 1);
						unk_0x39AD461928A70C5A(iLocal_110, 1);
						unk_0x03B2F9AA710B4B0F(unk_0x41899D9898B4EEE4(10), 1);
						unk_0xD578599BB87169AA(iLocal_110, unk_0x41899D9898B4EEE4(10));
						unk_0x726A9B2010B2B4D6(iLocal_110, 0);
						unk_0x887F4488DA99FD21(iLocal_181);
					}
				}
				if (unk_0x8E8B546E1A81D27F(cLocal_183))
				{
					if (iLocal_192)
					{
						iVar1 = 0;
						while (iVar1 <= (iLocal_173 - 3))
						{
							if (unk_0x86CCCD2FAE9D5E65(uLocal_102[iVar1]))
							{
								if (!unk_0x930F8FBB8E9537CC(uLocal_102[iVar1]) && !func_148(uLocal_102[iVar1], -2017877118))
								{
									unk_0xB901CB880393ADF7(uLocal_102[iVar1], Local_135[iVar1 /*3*/], 0, 0, 1);
									if (iVar1 != 2 && iVar1 != 3)
									{
										unk_0x31C1393E4ACFD794(uLocal_102[iVar1], cLocal_183, sLocal_184[iVar1], 1000f, -1000f, -1, 1, 0, 0, 0, 0);
									}
									else
									{
										unk_0x31C1393E4ACFD794(uLocal_102[iVar1], cLocal_183, sLocal_184[iVar1], 1000f, -1000f, -1, 1, 0.5f, 0, 0, 0);
									}
									unk_0x6CB332CB31E9FA96(uLocal_102[iVar1], 1);
								}
							}
							else if (unk_0x33ACB874CECA2D4B(iLocal_173[iVar1]))
							{
								uLocal_102[iVar1] = unk_0x206897C6DBC12488(25, iLocal_173[iVar1], Local_135[iVar1 /*3*/], fLocal_157[iVar1], 1, 1);
								unk_0x1D15D99A10A15334(uLocal_102[iVar1], 1);
							}
							iVar1++;
						}
						if ((((func_54(uLocal_102[0]) && func_54(uLocal_102[1])) && func_54(uLocal_102[2])) && func_54(uLocal_102[3])) && func_54(uLocal_102[4]))
						{
							unk_0xAF625598EDA64AD3(uLocal_102[4], unk_0x81873881071CD9FE(), -1, 2048, 4);
							iVar1 = 0;
							while (iVar1 <= (iLocal_173 - 1))
							{
								unk_0x887F4488DA99FD21(iLocal_173[iVar1]);
								iVar1++;
							}
							iLocal_192 = 0;
						}
					}
				}
			}
		}
		else if (Local_82.f_1 == 3)
		{
			if (func_149())
			{
				if (!unk_0x86CCCD2FAE9D5E65(iLocal_110))
				{
					if (unk_0x33ACB874CECA2D4B(iLocal_181))
					{
						iLocal_110 = unk_0xE00F8DEA9778FC87(iLocal_181, Local_112, fLocal_115, 1, 1);
						unk_0x5CC9D6711FE01F0D(iLocal_110);
						unk_0x71B53EEE12CC2A9C(iLocal_110, 0f);
						unk_0xB44164DC21AF010F(iLocal_110, 0);
						unk_0x5E80FC94204C2E8C(iLocal_110, 0);
						if (unk_0x90CBCA0418056042(iLocal_110))
						{
							unk_0xC3D55C17F4AFE6C8(iLocal_110, 1);
						}
						unk_0x686D6CDC14C4BA6C(iLocal_110, 0, 1);
					}
				}
				iVar2 = 0;
				iVar2 = 0;
				while (iVar2 < 3)
				{
					if (unk_0x86CCCD2FAE9D5E65(iLocal_165[iVar2]))
					{
						if (unk_0x86CCCD2FAE9D5E65(iLocal_169[iVar2]))
						{
							if (!unk_0x5FEB513A4402FD59(iLocal_169[iVar2]) && func_13(iLocal_165[iVar2]))
							{
								if (unk_0xBEB00EB4ADDC2A33(iLocal_165[iVar2], -1))
								{
									unk_0xDC81A805934C85CD(iLocal_169[iVar2], iLocal_165[iVar2], -1);
								}
							}
						}
						else if (func_13(iLocal_165[iVar2]) && unk_0x33ACB874CECA2D4B(joaat("a_m_y_jetski_01")))
						{
							iLocal_169[iVar2] = unk_0x4D135F3066A9BF9C(iLocal_165[iVar2], 25, joaat("a_m_y_jetski_01"), -1, 1, 1);
							unk_0xE56D08F12AE48555(iLocal_169[iVar2], 0);
							unk_0x1D15D99A10A15334(iLocal_169[iVar2], 1);
						}
					}
					else if (unk_0x33ACB874CECA2D4B(iLocal_181))
					{
						iLocal_165[iVar2] = unk_0xE00F8DEA9778FC87(iLocal_181, Local_121[iVar2 /*3*/], fLocal_131[iVar2], 1, 1);
						unk_0x5CC9D6711FE01F0D(iLocal_165[iVar2]);
						unk_0x71B53EEE12CC2A9C(iLocal_165[iVar2], 0f);
						unk_0xB44164DC21AF010F(iLocal_165[iVar2], 1);
						unk_0x5E80FC94204C2E8C(iLocal_165[iVar2], 1);
						if (unk_0x90CBCA0418056042(iLocal_165[iVar2]))
						{
							unk_0xC3D55C17F4AFE6C8(iLocal_165[iVar2], 1);
						}
						unk_0x686D6CDC14C4BA6C(iLocal_165[iVar2], 0, 1);
					}
					iVar2++;
				}
				if (((unk_0x86CCCD2FAE9D5E65(iLocal_110) && unk_0x86CCCD2FAE9D5E65(iLocal_165[0])) && unk_0x86CCCD2FAE9D5E65(iLocal_165[1])) && unk_0x86CCCD2FAE9D5E65(iLocal_165[2]))
				{
					unk_0x887F4488DA99FD21(iLocal_181);
				}
				if ((unk_0x86CCCD2FAE9D5E65(iLocal_169[0]) && unk_0x86CCCD2FAE9D5E65(iLocal_169[1])) && unk_0x86CCCD2FAE9D5E65(iLocal_169[2]))
				{
					unk_0x887F4488DA99FD21(joaat("a_m_y_jetski_01"));
				}
				unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 170, 1);
			}
		}
	}
}

int func_148(int iParam0, int iParam1)
{
	if (func_54(iParam0))
	{
		if (unk_0xFA1212DE7C455679(iParam0, iParam1) == 1 || unk_0xFA1212DE7C455679(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_149()
{
	if (!func_151())
	{
		return 0;
	}
	if (func_54(unk_0x81873881071CD9FE()))
	{
		if (!func_150(unk_0x81873881071CD9FE(), Local_112, 100f) || unk_0x29AFA2493D7C23D0())
		{
			return 1;
		}
	}
	return 0;
}

bool func_150(int iParam0, struct<3> Param1, float fParam4)
{
	return unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(iParam0, 1), Param1) <= (fParam4 * fParam4);
}

int func_151()
{
	if (Local_82.f_1 == 3)
	{
		return 1;
	}
	else if (Local_82.f_1 == 1 || Local_82.f_1 == 2)
	{
		if (unk_0x0C937048CF6952B5() >= 20 || unk_0x0C937048CF6952B5() < 5)
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

int func_152(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_145)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0x236D8AD7EE179F46((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!unk_0x236D8AD7EE179F46((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_153(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_145 = 0;
	return 1;
}

bool func_153(var uParam0)
{
	return func_154(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_154(var uParam0, char[4] cParam1, int iParam2)
{
	if (unk_0x236D8AD7EE179F46(uParam0, 30))
	{
		if (unk_0x236D8AD7EE179F46(uParam0, 29))
		{
			switch (func_155(uParam0))
			{
				case 0:
					return unk_0x33ACB874CECA2D4B(uParam2);
					break;
				
				case 1:
					return unk_0x8E8B546E1A81D27F(uParam1);
					break;
				
				case 2:
					return unk_0xDBB20E5B224C075C(cParam1);
					break;
				
				case 3:
					return unk_0x682001A921A80123(cParam1);
					break;
				
				case 4:
					return unk_0x498998F33897432E(iParam2, cParam1);
					break;
				
				case 5:
					return unk_0x0F7866B4F5BE7CD4(cParam1);
					break;
				
				case 6:
					return unk_0x9D2B95F4020E5347(cParam1, unk_0x236D8AD7EE179F46(uParam0, 27));
					break;
				
				case 7:
					return unk_0x55D66FAE859776D2(iParam2);
					break;
				
				case 8:
					return unk_0xCD8DA898314F3016(iParam2);
					break;
				
				case 9:
					return unk_0x7A74065A1435C8AB();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_155(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x236D8AD7EE179F46(uParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_156(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_145)
	{
		if ((unk_0x5CE96B2C9C8B727F() >= (uParam0->f_146 + uParam0->f_147) || unk_0x236D8AD7EE179F46(Global_90809.f_20, 2)) || unk_0x236D8AD7EE179F46(Global_90809.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (unk_0x236D8AD7EE179F46((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!unk_0x236D8AD7EE179F46((*uParam0)[iVar0 /*18*/], 29))
					{
						func_157(uParam0[iVar0 /*18*/]);
						uParam0->f_146 = unk_0x5CE96B2C9C8B727F();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_157(var uParam0)
{
	func_158(uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_158(var uParam0, char* sParam1, int iParam2)
{
	if (unk_0x236D8AD7EE179F46(*uParam0, 30))
	{
		switch (func_155(*uParam0))
		{
			case 0:
				unk_0x32A12757CBF48A33(uParam2);
				break;
			
			case 1:
				unk_0x295DC04FC13E025B(uParam1);
				break;
			
			case 2:
				unk_0xF147E5A343BAF150(uParam1);
				break;
			
			case 3:
				unk_0xB711FC19ADBD3C70(uParam1, unk_0x236D8AD7EE179F46(*uParam0, 28));
				break;
			
			case 4:
				unk_0x995DCDA796A47049(uParam2, sParam1);
				break;
			
			case 5:
				unk_0x2D148CBB17A2B0C7(sParam1);
				break;
			
			case 6:
				unk_0x9D2B95F4020E5347(sParam1, unk_0x236D8AD7EE179F46(*uParam0, 27));
				break;
			
			case 7:
				unk_0x0A3E2A43DEA2DB9D(uParam2);
				break;
			
			case 8:
				unk_0x86B83C54AF71BD12(sParam1, uParam2);
				break;
			
			case 9:
				unk_0x18C8823792832C78();
				break;
			
			default:
				break;
		}
		unk_0xF3148AAF69AF9CBC(uParam0, 29);
	}
}

void func_159()
{
	int iVar0;
	
	if (Local_82.f_1 == 1 || Local_82.f_1 == 2)
	{
		switch (Local_82.f_0)
		{
			case 0:
				Local_112 = { -158.67f, -1555.16f, 34.63f };
				fLocal_115 = 187.71f;
				Local_117 = { -155.15f, -1550.83f, 34.53f };
				fLocal_120 = 213.13f;
				Local_200 = { -68.87878f, -1818.903f, 24.55311f };
				Local_203 = { -56.0098f, -1807.029f, 27.85417f };
				Local_135[0 /*3*/] = { -157.19f, -1555.36f, 35.07f };
				Local_135[1 /*3*/] = { -157.04f, -1557.57f, 35.11f };
				Local_135[2 /*3*/] = { -159.83f, -1557.39f, 34.96f };
				Local_135[3 /*3*/] = { -156.64f, -1551.96f, 34.92f };
				Local_135[4 /*3*/] = { -156.25f, -1552.58f, 34.93f };
				Local_135[5 /*3*/] = { -153.23f, -1553.05f, 34.93f };
				Local_135[6 /*3*/] = { -155.3f, -1556.41f, 35.13f };
				fLocal_157[0] = 101.91f;
				fLocal_157[1] = 38.48f;
				fLocal_157[2] = -36.7f;
				fLocal_157[3] = -52.93f;
				fLocal_157[4] = -75.07f;
				fLocal_157[5] = 33.13f;
				fLocal_157[6] = -170.02f;
				break;
			
			case 1:
				Local_112 = { 368.72f, 294.06f, 102.96f };
				fLocal_115 = 25.17f;
				Local_117 = { 373.71f, 290.72f, 102.89f };
				fLocal_120 = 33.24f;
				Local_200 = { -523.5497f, 262.2986f, 80.01991f };
				Local_203 = { -509.1013f, 272.478f, 86.17713f };
				Local_135[0 /*3*/] = { 367.24f, 293.81f, 103.41f };
				Local_135[1 /*3*/] = { 368.73f, 296.89f, 103.41f };
				Local_135[2 /*3*/] = { 366.94f, 296.34f, 103.43f };
				Local_135[3 /*3*/] = { 375.21f, 291.85f, 103.25f };
				Local_135[4 /*3*/] = { 374.81f, 292.47f, 103.26f };
				Local_135[5 /*3*/] = { 371.51f, 291.85f, 103.31f };
				Local_135[6 /*3*/] = { 373.86f, 296.3f, 103.31f };
				fLocal_157[0] = -64.83f;
				fLocal_157[1] = -163.04f;
				fLocal_157[2] = -118.77f;
				fLocal_157[3] = 127.18f;
				fLocal_157[4] = 105.04f;
				fLocal_157[5] = -146.75f;
				fLocal_157[6] = 10.11f;
				break;
			
			case 2:
				Local_112 = { -807.98f, -2555.14f, 13.34f };
				fLocal_115 = 3.35f;
				Local_117 = { -810.1f, -2560.85f, 13.38f };
				fLocal_120 = 43.57f;
				Local_200 = { -1000.759f, -2436.092f, 17.16946f };
				Local_203 = { -986.7399f, -2424.87f, 22.16946f };
				Local_135[0 /*3*/] = { -809.45f, -2554.82f, 13.76f };
				Local_135[1 /*3*/] = { -808.47f, -2552.43f, 13.76f };
				Local_135[2 /*3*/] = { -806.32f, -2552.87f, 13.76f };
				Local_135[3 /*3*/] = { -808.59f, -2559.5f, 13.76f };
				Local_135[4 /*3*/] = { -809.1f, -2558.97f, 13.76f };
				Local_135[5 /*3*/] = { -812.82f, -2559.48f, 13.76f };
				Local_135[6 /*3*/] = { -810.72f, -2555.37f, 13.76f };
				fLocal_157[0] = -86.65f;
				fLocal_157[1] = -130.05f;
				fLocal_157[2] = 150.04f;
				fLocal_157[3] = 137.51f;
				fLocal_157[4] = 115.37f;
				fLocal_157[5] = -136.43f;
				fLocal_157[6] = 20.43f;
				break;
			
			case 3:
				Local_112 = { 778.59f, -1160.2f, 28.35f };
				fLocal_115 = 302.47f;
				Local_117 = { 778.47f, -1164.01f, 28.25f };
				fLocal_120 = 287.97f;
				Local_200 = { -1000.759f, -2436.092f, 17.16946f };
				Local_203 = { -986.7399f, -2424.87f, 22.16946f };
				Local_135[0 /*3*/] = { 778.16f, -1158.78f, 28.88f };
				Local_135[1 /*3*/] = { 780.82f, -1158.1f, 28.73f };
				Local_135[2 /*3*/] = { 781.52f, -1158.81f, 28.7f };
				Local_135[3 /*3*/] = { 779.16f, -1165.74f, 28.72f };
				Local_135[4 /*3*/] = { 779.86f, -1165.52f, 28.72f };
				Local_135[5 /*3*/] = { 780.75f, -1161.99f, 28.65f };
				Local_135[6 /*3*/] = { 783.8f, -1165.61f, 28.74f };
				fLocal_157[0] = -147.53f;
				fLocal_157[1] = 171.51f;
				fLocal_157[2] = 104.94f;
				fLocal_157[3] = 21.91f;
				fLocal_157[4] = -0.22f;
				fLocal_157[5] = 107.91f;
				fLocal_157[6] = -95.23f;
				break;
			
			case 4:
				Local_112 = { -1066.59f, -1151.04f, 1.71f };
				fLocal_115 = 258.32f;
				Local_135[0 /*3*/] = { -1065.07f, -1151.02f, 2.16f };
				Local_135[1 /*3*/] = { -1065.35f, -1149.36f, 2.16f };
				Local_135[2 /*3*/] = { -1067.13f, -1151.68f, 2.16f };
				Local_135[3 /*3*/] = { -1066.3f, -1149.38f, 2.16f };
				Local_135[4 /*3*/] = { -1066.01f, -1152.26f, 2.16f };
				fLocal_157[0] = 75.06f;
				fLocal_157[1] = 134.25f;
				fLocal_157[2] = -52.71f;
				fLocal_157[3] = -93.39f;
				fLocal_157[4] = -141.52f;
				Local_200 = { -1265.744f, -1057.199f, 5.410841f };
				Local_203 = { -1258.679f, -1049.919f, 9.443882f };
				break;
		}
		func_164(Local_82.f_0, &Local_206, &Local_209, &fLocal_212);
		iLocal_173[0] = joaat("a_f_y_hipster_02");
		iLocal_173[1] = joaat("a_m_y_hipster_02");
		iLocal_173[2] = joaat("a_m_y_hipster_02");
		iLocal_173[3] = joaat("a_f_y_hipster_02");
		iLocal_173[4] = joaat("a_m_y_hipster_02");
		iLocal_173[5] = joaat("a_m_y_hipster_02");
		iLocal_173[6] = joaat("a_m_y_hipster_02");
		if (Local_82.f_1 == 1)
		{
			cLocal_183 = "random@street_race";
			sLocal_184[0] = "_car_b_chatting_female";
			sLocal_184[1] = "_car_b_chatting_male";
			sLocal_184[2] = "_car_b_chatting_male";
			sLocal_184[3] = "_car_b_chatting_female";
			sLocal_184[4] = "_car_b_lookout";
		}
		else
		{
			cLocal_183 = "random@street_race";
			sLocal_184[0] = "_car_a_flirt_girl";
			sLocal_184[1] = "_car_a_gawker_male_a";
			sLocal_184[2] = "_car_a_gawker_male_b";
			sLocal_184[3] = "_car_b_chatting_female";
			sLocal_184[4] = "_car_b_chatting_male";
			sLocal_184[5] = "_car_b_driver";
			sLocal_184[6] = "_car_b_lookout";
			func_163(&uLocal_215, iLocal_182);
		}
		iLocal_181 = func_162(Local_82.f_1);
		iVar0 = 0;
		while (iVar0 <= (iLocal_173 - 1))
		{
			func_163(&uLocal_215, iLocal_173[iVar0]);
			iVar0++;
		}
		func_163(&uLocal_215, iLocal_181);
		func_160(&uLocal_215, cLocal_183);
		unk_0xF47DE13A08D86AB8(Local_200, Local_203, 0, 0);
		unk_0x0C17E2FCF3ABF5A3(Local_206, Local_209, fLocal_212, 0, 0, 1);
		iLocal_93 = 1;
	}
	else if (Local_82.f_1 == 3)
	{
		switch (Local_82.f_0)
		{
			case 5:
				Local_112 = { 3066.63f, 650.9f, 0.17f };
				fLocal_115 = 351.81f;
				Local_121[0 /*3*/] = { 3073.57f, 648.09f, 0.01f };
				fLocal_131[0] = 5.72f;
				Local_121[1 /*3*/] = { 3071.53f, 648.79f, -0.09f };
				fLocal_131[1] = 351.33f;
				Local_121[2 /*3*/] = { 3068.73f, 645.53f, -0.07f };
				fLocal_131[2] = 348.18f;
				break;
			
			case 6:
				Local_112 = { 3462.11f, 5192.15f, -0.04f };
				fLocal_115 = 222.9f;
				Local_121[0 /*3*/] = { 3456.64f, 5195.91f, 0.12f };
				fLocal_131[0] = 211.54f;
				Local_121[1 /*3*/] = { 3453.19f, 5192.84f, -0.17f };
				fLocal_131[1] = 201.55f;
				Local_121[2 /*3*/] = { 3451.06f, 5189.43f, -0.3f };
				fLocal_131[2] = 221.55f;
				break;
			
			case 7:
				Local_112 = { 194.64f, 3621.27f, 29.91f };
				fLocal_115 = 163.95f;
				Local_121[0 /*3*/] = { 198.62f, 3620.46f, 29.91f };
				fLocal_131[0] = 175.4f;
				Local_121[1 /*3*/] = { 202.78f, 3619.69f, 29.87f };
				fLocal_131[1] = 163.69f;
				Local_121[2 /*3*/] = { 210.14f, 3618.88f, 29.87f };
				fLocal_131[2] = 175.31f;
				break;
			
			case 8:
				Local_112 = { 627.58f, -2138.06f, -0.07f };
				fLocal_115 = 180.09f;
				Local_121[0 /*3*/] = { 643.09f, -2146.11f, -0.09f };
				fLocal_131[0] = 143.89f;
				Local_121[1 /*3*/] = { 638.21f, -2145.3f, -0.1f };
				fLocal_131[1] = 172.41f;
				Local_121[2 /*3*/] = { 633.56f, -2143.83f, -0.04f };
				fLocal_131[2] = 191.97f;
				break;
		}
		iLocal_181 = joaat("seashark");
		func_163(&uLocal_215, iLocal_181);
		func_163(&uLocal_215, joaat("a_m_y_jetski_01"));
	}
}

void func_160(var uParam0, char* sParam1)
{
	func_161(uParam0, 1, -1, sParam1, 0);
}

void func_161(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0x236D8AD7EE179F46((*uParam0)[iVar0 /*18*/], 30))
		{
			if (unk_0x236D8AD7EE179F46((*uParam0)[iVar0 /*18*/], iParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*18*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (iParam1 != 4)
				{
					if (!unk_0xD994929E13CC1ED5(sParam3, "NULL"))
					{
						if (unk_0xD994929E13CC1ED5(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
						{
							return;
						}
					}
				}
				if (iParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_145)
	{
		uParam0->f_145 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!unk_0x236D8AD7EE179F46((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			unk_0xF3148AAF69AF9CBC(uParam0[iVar0 /*18*/], iParam1);
			unk_0xF3148AAF69AF9CBC(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

int func_162(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 1:
			iVar0 = joaat("bati");
			break;
		
		case 2:
			iVar0 = joaat("ninef");
			break;
		
		case 3:
			iVar0 = joaat("seashark");
			break;
	}
	return iVar0;
}

void func_163(var uParam0, int iParam1)
{
	func_161(uParam0, 0, iParam1, "NULL", 0);
}

void func_164(int iParam0, var uParam1, var uParam2, float fParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 311.1262f, -1896.261f, 20.68329f };
			*uParam2 = { -295.0653f, -1405.53f, 35.3146f };
			*fParam3 = 300f;
			break;
		
		case 1:
			*uParam1 = { 273.185f, 335.2969f, 105.5704f };
			*uParam2 = { 412.2877f, 299.2304f, 101.0724f };
			*fParam3 = 20f;
			break;
		
		case 2:
			*uParam1 = { -823.7157f, -2588f, 13.7691f };
			*uParam2 = { -801.3356f, -2464.007f, 12.42913f };
			*fParam3 = 30f;
			break;
		
		case 3:
			*uParam1 = { 791.8257f, -1423.863f, 24.17954f };
			*uParam2 = { 783.167f, -1015.648f, 50.24134f };
			*fParam3 = 200f;
			break;
		
		case 4:
			*uParam1 = { -1084.03f, -1165.724f, 0.150211f };
			*uParam2 = { -1029.213f, -1134.581f, 2.174534f };
			*fParam3 = 10f;
			break;
	}
}

int func_165()
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	
	if (func_53(9))
	{
		return 0;
	}
	if (func_38(6) || func_38(7))
	{
		return 0;
	}
	if (Global_55396)
	{
		return 0;
	}
	if (func_188())
	{
		return 0;
	}
	if (Local_82.f_1 != 3 && func_43() != 1)
	{
		return 0;
	}
	if (unk_0xFA93A31A91EA0392())
	{
		return 0;
	}
	if (func_54(unk_0x81873881071CD9FE()) && unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		uVar0 = unk_0x2ADE2CEED2637E95();
		if (((func_13(uVar0) && unk_0x58A69336FE7307D8(unk_0x81873881071CD9FE(), uVar0)) && !func_187(unk_0x81873881071CD9FE(), uVar0, -1)) && unk_0x14B7103DBD149FFE(uVar0) != joaat("taxi"))
		{
			return 0;
		}
	}
	switch (Local_82.f_0)
	{
		case 0:
			if (Global_98905[0])
			{
				return 0;
			}
			break;
		
		case 1:
			if (Global_98905[1])
			{
				return 0;
			}
			break;
		
		case 2:
			if (Global_98905[2])
			{
				return 0;
			}
			break;
		
		case 3:
			if (Global_98905[3])
			{
				return 0;
			}
			break;
		
		case 4:
			if (Global_98905[4])
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_98895[0])
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_98895[1])
			{
				return 0;
			}
			break;
		
		case 7:
			if (Global_98895[2])
			{
				return 0;
			}
			break;
		
		case 8:
			if (Global_98895[3])
			{
				return 0;
			}
			break;
	}
	if (!func_151())
	{
		iVar1 = 0;
		while (iVar1 <= (iLocal_173 - 1))
		{
			if (func_54(uLocal_102[iVar1]))
			{
				unk_0xEAD984C2869B8B7C(&uVar2);
				unk_0x5EAAD72695348E00(0, iVar1 * 100);
				unk_0x9AF45ACD4E9068EE(0, 1193033728, 0);
				unk_0x56D9ED1541046AF6(uVar2);
				unk_0xC65002CAA1212AF9(uLocal_102[iVar1], uVar2);
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= (iLocal_169 - 1))
		{
			if (func_54(iLocal_169[iVar1]))
			{
				unk_0xEAD984C2869B8B7C(&uVar2);
				unk_0x5EAAD72695348E00(0, iVar1 * 110);
				if (func_13(iLocal_165[iVar1]) && unk_0x04C377C10639B842(iLocal_169[iVar1], iLocal_165[iVar1], 0))
				{
					unk_0x2D7E8CD6F4101CAB(0, iLocal_165[iVar1], 30f, 786597);
				}
				else
				{
					unk_0x9AF45ACD4E9068EE(0, 1193033728, 0);
				}
				unk_0x56D9ED1541046AF6(uVar2);
				unk_0xC65002CAA1212AF9(iLocal_169[iVar1], uVar2);
			}
			iVar1++;
		}
		if (func_54(iLocal_111))
		{
			if (func_13(iLocal_110) && unk_0x04C377C10639B842(iLocal_111, iLocal_110, 0))
			{
				unk_0x2D7E8CD6F4101CAB(iLocal_111, iLocal_110, 30f, 786597);
			}
			else
			{
				unk_0x9AF45ACD4E9068EE(iLocal_111, 1193033728, 0);
			}
		}
		return 0;
	}
	if (func_167())
	{
		iVar4 = 0;
		while (iVar4 <= (iLocal_173 - 1))
		{
			if (func_54(uLocal_102[iVar4]))
			{
				unk_0xEAD984C2869B8B7C(&uVar3);
				unk_0x5EAAD72695348E00(0, iVar4 * 50);
				unk_0x754376E2234CBB4A(0, unk_0x81873881071CD9FE(), 500f, -1, 0, 0);
				unk_0x56D9ED1541046AF6(uVar3);
				if ((iVar4 % 2) == 0)
				{
					func_166(uLocal_102[iVar4], 1);
				}
				unk_0xC65002CAA1212AF9(uLocal_102[iVar4], uVar3);
			}
			iVar4++;
		}
		iVar4 = 0;
		while (iVar4 <= (iLocal_169 - 1))
		{
			if (func_13(iLocal_165[iVar4]) && Local_82.f_1 == 3)
			{
				unk_0xC3D55C17F4AFE6C8(iLocal_165[iVar4], 0);
			}
			if (func_54(iLocal_169[iVar4]))
			{
				unk_0xEAD984C2869B8B7C(&uVar3);
				unk_0x5EAAD72695348E00(0, iVar4 * 60);
				if (func_13(iLocal_165[iVar4]) && unk_0x04C377C10639B842(iLocal_169[iVar4], iLocal_165[iVar4], 0))
				{
					unk_0x2D7E8CD6F4101CAB(0, iLocal_165[iVar4], 50f, 786468);
				}
				else
				{
					unk_0x754376E2234CBB4A(0, unk_0x81873881071CD9FE(), 500f, -1, 0, 0);
				}
				unk_0x56D9ED1541046AF6(uVar3);
				unk_0xC65002CAA1212AF9(iLocal_169[iVar4], uVar3);
				if ((iVar4 % 2) == 0)
				{
					func_166(iLocal_169[iVar4], 1);
				}
			}
			iVar4++;
		}
		if (func_13(iLocal_110) && Local_82.f_1 == 3)
		{
			unk_0xC3D55C17F4AFE6C8(iLocal_110, 0);
		}
		if (func_54(iLocal_111))
		{
			if (func_13(iLocal_110) && unk_0x04C377C10639B842(iLocal_111, iLocal_110, 0))
			{
				unk_0x2D7E8CD6F4101CAB(iLocal_111, iLocal_110, 50f, 786468);
			}
			else
			{
				unk_0x754376E2234CBB4A(iLocal_111, unk_0x81873881071CD9FE(), 500f, -1, 0, 0);
			}
		}
		switch (Local_82.f_0)
		{
			case 0:
				Global_98905[0] = 1;
				Global_98911[0] = unk_0x48E480685981C7D4();
				break;
			
			case 1:
				Global_98905[1] = 1;
				Global_98911[1] = unk_0x48E480685981C7D4();
				break;
			
			case 2:
				Global_98905[2] = 1;
				Global_98911[2] = unk_0x48E480685981C7D4();
				break;
			
			case 3:
				Global_98905[3] = 1;
				Global_98911[3] = unk_0x48E480685981C7D4();
				break;
			
			case 4:
				Global_98905[4] = 1;
				Global_98911[4] = unk_0x48E480685981C7D4();
				break;
			
			case 5:
				Global_98895[0] = 1;
				Global_98900[0] = unk_0x48E480685981C7D4();
				break;
			
			case 6:
				Global_98895[1] = 1;
				Global_98900[1] = unk_0x48E480685981C7D4();
				break;
			
			case 7:
				Global_98895[2] = 1;
				Global_98900[2] = unk_0x48E480685981C7D4();
				break;
			
			case 8:
				Global_98895[3] = 1;
				Global_98900[3] = unk_0x48E480685981C7D4();
				break;
		}
		return 0;
	}
	return 1;
}

void func_166(var uParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	if (func_54(uParam0))
	{
		iVar1 = 2;
		if (bParam1)
		{
			iVar1 = 3;
		}
		iVar2 = unk_0x2E0A9E3291F398E3(0, iVar1);
		if (iVar2 == 0)
		{
			sVar0 = "SCREAM_PANIC";
		}
		else if (iVar2 == 1)
		{
			sVar0 = "SCREAM_TERROR";
		}
		else
		{
			sVar0 = "SUPER_HIGH_FALL";
		}
		if (unk_0xBFC4295E811860E5(uParam0))
		{
			func_125(uParam0, sVar0, "WAVELOAD_PAIN_MALE", 24);
		}
		else
		{
			func_125(uParam0, sVar0, "WAVELOAD_PAIN_FEMALE", 24);
		}
	}
}

int func_167()
{
	int iVar0;
	
	if (unk_0x9C85ECF581158409(unk_0x1329891157A54C63(), 0))
	{
		return 1;
	}
	if (Local_82.f_1 == 3)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_169 - 1))
		{
			if (unk_0x86CCCD2FAE9D5E65(iLocal_169[iVar0]))
			{
				if (unk_0x5FEB513A4402FD59(iLocal_169[iVar0]))
				{
					return 1;
				}
				else if (func_168(iLocal_169[iVar0], 1, 1116471296, 1126825984, 0, 0, 0, 0) || unk_0x70847137E3B37A59(iLocal_169[iVar0]))
				{
					return 1;
				}
			}
			if (unk_0x86CCCD2FAE9D5E65(iLocal_165[iVar0]))
			{
				if (unk_0x930F8FBB8E9537CC(iLocal_165[iVar0]))
				{
					return 1;
				}
				else if (unk_0xBBEF8270CE27C0EE(iLocal_165[iVar0], unk_0x81873881071CD9FE(), 1) && unk_0x4DC6EF945236C0F7(iLocal_165[iVar0]) < 900)
				{
					return 1;
				}
			}
			iVar0++;
		}
		if (unk_0x86CCCD2FAE9D5E65(iLocal_110))
		{
			if (unk_0x930F8FBB8E9537CC(iLocal_110))
			{
				return 1;
			}
			else if (unk_0xBBEF8270CE27C0EE(iLocal_110, unk_0x81873881071CD9FE(), 1) && unk_0x4DC6EF945236C0F7(iLocal_110) < 900)
			{
				return 1;
			}
		}
		return 0;
	}
	if (func_150(unk_0x81873881071CD9FE(), Local_88, 50f) && unk_0xADBE95599A01932F(unk_0x81873881071CD9FE()))
	{
		return 1;
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_111))
	{
		if (unk_0x5FEB513A4402FD59(iLocal_111))
		{
			return 1;
		}
		else if (func_168(iLocal_111, 1, 1116471296, 1126825984, 0, 0, 0, 0))
		{
			return 1;
		}
		else if (unk_0x70847137E3B37A59(iLocal_111))
		{
			unk_0x1D15D99A10A15334(iLocal_111, 0);
			return 1;
		}
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_110))
	{
		if (unk_0x930F8FBB8E9537CC(iLocal_110))
		{
			return 1;
		}
		else if (unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iLocal_110, 1) || unk_0xBBEF8270CE27C0EE(iLocal_110, unk_0x81873881071CD9FE(), 1))
		{
			return 1;
		}
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_116))
	{
		if (unk_0x930F8FBB8E9537CC(iLocal_116))
		{
			return 1;
		}
		else if (unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iLocal_116, 1) || unk_0xBBEF8270CE27C0EE(iLocal_116, unk_0x81873881071CD9FE(), 1))
		{
			return 1;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_173 - 1))
	{
		if (unk_0x86CCCD2FAE9D5E65(uLocal_102[iVar0]))
		{
			if (unk_0x5FEB513A4402FD59(uLocal_102[iVar0]))
			{
				return 1;
			}
			else if (func_168(uLocal_102[iVar0], 1, 1116471296, 1126825984, 0, 0, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_168(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	struct<3> Var0;
	
	if (func_14(unk_0x81873881071CD9FE()) && func_14(iParam0))
	{
		if (unk_0xBBEF8270CE27C0EE(iParam0, unk_0x81873881071CD9FE(), 1))
		{
			return 1;
		}
		if (func_182(iParam0, bParam1, bParam5, bParam6, bParam7))
		{
			return 1;
		}
		if (!unk_0x2B738BBCCA41F260(unk_0x81873881071CD9FE(), 6))
		{
			if (unk_0xF371669B2D6B4C8E(unk_0x81873881071CD9FE()))
			{
				Var0 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) - unk_0xB6AE0DAE06D56288(iParam0, 1) };
				if ((((Var0.f_0 * Var0.f_0) + (Var0.f_1 * Var0.f_1)) + (Var0.f_2 * Var0.f_2)) <= 5f)
				{
					return func_181(unk_0x81873881071CD9FE(), iParam0, fParam2);
				}
			}
		}
		if (bParam4)
		{
			return 0;
		}
		else if (func_169(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_169(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_14(unk_0x81873881071CD9FE()) && func_14(iParam0))
	{
		if (func_180(iParam0) || unk_0x2449A722A5E85855(unk_0x1329891157A54C63(), iParam0))
		{
			if (unk_0x2B738BBCCA41F260(unk_0x81873881071CD9FE(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_170(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_170(int iParam0, float fParam1)
{
	return func_171(iParam0, unk_0x81873881071CD9FE(), fParam1, 1, 250, 7);
}

bool func_171(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_179(iParam0, iParam1);
	if (!func_14(iParam0) || !func_14(iParam1))
	{
		if (iVar4 != -1)
		{
			func_178(&(Local_39[iVar4 /*4*/]));
		}
		return 0;
	}
	if (!func_175(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_174();
		if (iVar4 == -1)
		{
			return 0;
		}
		Local_39[iVar4 /*4*/].f_1 = iParam0;
		Local_39[iVar4 /*4*/].f_2 = iParam1;
	}
	Var1 = { unk_0xC91EFAB304EB7DE6(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_172(&(Local_39[iVar4 /*4*/]), Var1, iParam1, &(Local_39[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0x48E480685981C7D4() - Local_39[iVar4 /*4*/].f_3) < iParam4);
}

int func_172(var uParam0, struct<3> Param1, int iParam4, var uParam5, int iParam6, int iParam7)
{
	var uVar0;
	struct<3> Var1;
	var uVar4;
	int iVar7;
	int iVar8;
	
	iVar7 = 0;
	if (!func_14(iParam4))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		Var1 = { func_173(iParam4, iParam7) };
		*uParam0 = unk_0x68D61DC7116FF797(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam6, 7);
		return 0;
	}
	iVar8 = unk_0x26CECBCADF60693F(*uParam0, &uVar0, &Var1, &uVar4, &iVar7);
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
	if (unk_0xCF0C46D719D5302C(iVar7))
	{
		func_14(iVar7);
		if (unk_0x8F1CCE5AF629C4D3(iVar7) == iParam4)
		{
			if (bLocal_80)
			{
				unk_0xADE6A92F477E3034(Param1, unk_0xB6AE0DAE06D56288(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam5 = unk_0x48E480685981C7D4();
			return 1;
		}
		return 0;
	}
	if (unk_0xCF8AA94BAD0F766A(iVar7))
	{
		func_14(iVar7);
		if (unk_0xE5AB05962FA1FF3F(iParam4, 0))
		{
			if (unk_0x522C7043B2B961F9(iVar7) == unk_0xE68E6B44DABA9C05(iParam4, 0))
			{
				if (bLocal_80)
				{
					unk_0xADE6A92F477E3034(Param1, unk_0xB6AE0DAE06D56288(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam5 = unk_0x48E480685981C7D4();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_173(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = unk_0x2E0A9E3291F398E3(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return unk_0xB6AE0DAE06D56288(iParam0, 1);
	}
	else if (iParam1 == 1)
	{
		return unk_0xC91EFAB304EB7DE6(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return unk_0xC91EFAB304EB7DE6(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return unk_0xC91EFAB304EB7DE6(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return unk_0xC91EFAB304EB7DE6(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return unk_0xC91EFAB304EB7DE6(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return unk_0xC91EFAB304EB7DE6(iParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0xB6AE0DAE06D56288(iParam0, 1);
}

int func_174()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_39.f_0)
	{
		if ((Local_39[iVar0 /*4*/] == 0 && Local_39[iVar0 /*4*/].f_1 == 0) && Local_39[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_175(int iParam0, int iParam1, float fParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_177(unk_0xB6AE0DAE06D56288(iParam1, 1) - unk_0xB6AE0DAE06D56288(iParam0, 1)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var3 = { unk_0xC99223BD7E489FC6(iParam0) };
	}
	else
	{
		Var3 = { func_177(unk_0xC91EFAB304EB7DE6(iParam0, 31086, 0f, 5f, 0f) - unk_0xC91EFAB304EB7DE6(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_176(Var3, Var0);
	if (fVar6 <= unk_0xD0FFB162F40A139C((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_176(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_177(struct<3> Param0)
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

void func_178(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_179(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_39.f_0)
	{
		if (Local_39[iVar0 /*4*/].f_1 == iParam0 && Local_39[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_180(int iParam0)
{
	if (unk_0xE8039CE2181EACCB(unk_0x1329891157A54C63(), iParam0) && unk_0x2B738BBCCA41F260(unk_0x81873881071CD9FE(), 6))
	{
		return 1;
	}
	return 0;
}

bool func_181(int iParam0, int iParam1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0xC99223BD7E489FC6(iParam0) };
	Var3 = { unk_0xB6AE0DAE06D56288(iParam1, 1) - unk_0xB6AE0DAE06D56288(iParam0, 1) };
	return (((Var0.f_0 * Var3.f_0) + (Var0.f_1 * Var3.f_1)) / unk_0x2A488C176D52CCA5(Var3, 0f, 0f, 0f)) > unk_0xD0FFB162F40A139C(fParam2);
}

int func_182(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
	if (func_14(unk_0x81873881071CD9FE()) && func_14(iParam0))
	{
		unk_0x5F446E70DA9B8122(unk_0x81873881071CD9FE(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_186(iParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_183(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (unk_0xC0DEC39E5B9D1886(unk_0x81873881071CD9FE()))
			{
				if (unk_0xADBE95599A01932F(unk_0x81873881071CD9FE()))
				{
					if (unk_0x544121698BDAB87E(unk_0xB6AE0DAE06D56288(iParam0, 1), fVar0, 1))
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
				if (func_186(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_183(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_183(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0xB6AE0DAE06D56288(iParam0, 1) };
	Var3 = { Var0 };
	Var0.f_0 = (Var0.f_0 - fParam1);
	Var0.f_1 = (Var0.f_1 - fParam1);
	Var0.f_2 = (Var0.f_2 - fParam1);
	Var3.f_0 = (Var3.f_0 + fParam1);
	Var3.f_1 = (Var3.f_1 + fParam1);
	Var3.f_2 = (Var3.f_2 + fParam1);
	if (bParam2)
	{
		if (((unk_0x2DB0F20FA993D041(unk_0xB6AE0DAE06D56288(iParam0, 1), joaat("weapon_grenade"), fParam1, 1) || unk_0x2DB0F20FA993D041(unk_0xB6AE0DAE06D56288(iParam0, 1), joaat("weapon_molotov"), fParam1, 1)) || unk_0x2DB0F20FA993D041(unk_0xB6AE0DAE06D56288(iParam0, 1), joaat("weapon_smokegrenade"), fParam1, 1)) || unk_0x2DB0F20FA993D041(unk_0xB6AE0DAE06D56288(iParam0, 1), joaat("weapon_stickybomb"), 5f, 1))
		{
			if (bParam3)
			{
				if (func_184(iParam0, fParam1))
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
			if (func_184(iParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x6DF2A27FBC647AEC(Var0, Var3, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_184(var uParam0, float fParam1)
{
	var uVar0;
	struct<3> Var1;
	
	if ((((unk_0xEDD0C1C7B35A1DBA(uParam0, joaat("weapon_grenade"), fParam1, &Var1, &uVar0, 0) || unk_0xEDD0C1C7B35A1DBA(uParam0, joaat("weapon_smokegrenade"), fParam1, &Var1, &uVar0, 0)) || unk_0xEDD0C1C7B35A1DBA(uParam0, joaat("weapon_bzgas"), fParam1, &Var1, &uVar0, 0)) || unk_0xEDD0C1C7B35A1DBA(uParam0, joaat("weapon_stickybomb"), fParam1, &Var1, &uVar0, 0)) || unk_0xEDD0C1C7B35A1DBA(uParam0, joaat("weapon_molotov"), fParam1, &Var1, &uVar0, 0))
	{
		if (func_185(uParam0, Var1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_185(int iParam0, struct<3> Param1, float fParam4, int iParam5)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_177(Param1 - unk_0xB6AE0DAE06D56288(uParam0, 1)) };
	if (fParam4 < 0.1f || fParam4 > 360f)
	{
		return 1;
	}
	if (iParam5 == 0)
	{
		Var3 = { unk_0xC99223BD7E489FC6(iParam0) };
	}
	else
	{
		Var3 = { func_177(unk_0xC91EFAB304EB7DE6(iParam0, 31086, 0f, 5f, 0f) - unk_0xC91EFAB304EB7DE6(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_176(Var3, Var0);
	if (fVar6 <= unk_0xD0FFB162F40A139C((fParam4 / 2f)))
	{
		return 0;
	}
	return 1;
}

int func_186(int iParam0, bool bParam1, float fParam2, float fParam3)
{
	if (bParam1)
	{
		if (unk_0xADBE95599A01932F(unk_0x81873881071CD9FE()))
		{
			if (unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (unk_0x544121698BDAB87E(unk_0xB6AE0DAE06D56288(iParam0, 1), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

int func_187(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0x930F8FBB8E9537CC(iParam0) && !unk_0x930F8FBB8E9537CC(uParam1))
	{
		if (unk_0x58A69336FE7307D8(iParam0, iParam1))
		{
			if (unk_0xB0B9E53CEFDB16AA(iParam1, iParam2) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_188()
{
	switch (Local_82.f_0)
	{
		case 5:
			return unk_0x236D8AD7EE179F46(Global_98931.f_29425.f_2, 0);
			break;
		
		case 6:
			return unk_0x236D8AD7EE179F46(Global_98931.f_29425.f_2, 1);
			break;
		
		case 7:
			return unk_0x236D8AD7EE179F46(Global_98931.f_29425.f_2, 2);
			break;
		
		case 8:
			return unk_0x236D8AD7EE179F46(Global_98931.f_29425.f_2, 3);
			break;
		
		case 0:
			return unk_0x236D8AD7EE179F46(Global_98931.f_29428.f_3, 0);
			break;
		
		case 1:
			return unk_0x236D8AD7EE179F46(Global_98931.f_29428.f_3, 1);
			break;
		
		case 2:
			return unk_0x236D8AD7EE179F46(Global_98931.f_29428.f_3, 2);
			break;
		
		case 3:
			return unk_0x236D8AD7EE179F46(Global_98931.f_29428.f_3, 3);
			break;
		
		case 4:
			return unk_0x236D8AD7EE179F46(Global_98931.f_29428.f_3, 4);
			break;
	}
	return 0;
}

void func_189()
{
	iLocal_81 = 0;
	iLocal_91 = 0;
	bLocal_98 = false;
	bLocal_99 = false;
	iLocal_95 = 0;
	iLocal_96 = 0;
	iLocal_97 = 0;
	func_191(1);
	unk_0xC904C30D9B70F037("WORLD_VEHICLE_PARK_PERPENDICULAR_NOSE_IN", 0);
	unk_0xC904C30D9B70F037("WORLD_VEHICLE_PARK_PARALLEL", 0);
	if (Local_82.f_0 == 1)
	{
		uLocal_214 = func_190(374.0083f, 279.5919f, 102.3306f, 40f);
		unk_0xA450601E968044DB(374.0083f, 279.5919f, 102.3306f, 25f, 0, 0, 0, 0, 0);
	}
	if (Local_82.f_1 == 1 || Local_82.f_1 == 2)
	{
		uLocal_213 = func_190(Local_88, 60f);
	}
}

var func_190(struct<3> Param0, float fParam3)
{
	struct<3> Var0;
	
	Var0 = { (fParam3 / 2f), (fParam3 / 2f), (fParam3 / 2f) };
	return unk_0x13705C66F125D98D(Param0 - Var0, Param0 + Var0, 0, 1, 1, 1);
}

void func_191(bool bParam0)
{
	if (bParam0)
	{
		switch (Local_82.f_0)
		{
			case 0:
			case 1:
			case 2:
			case 3:
				func_163(&uLocal_215, joaat("banshee"));
				func_163(&uLocal_215, joaat("feltzer2"));
				func_163(&uLocal_215, joaat("sentinel"));
				break;
			
			case 4:
				func_163(&uLocal_215, joaat("bati"));
				func_163(&uLocal_215, joaat("ruffian"));
				break;
			
			case 5:
			case 6:
			case 7:
			case 8:
				func_163(&uLocal_215, joaat("seashark"));
				break;
		}
	}
	else
	{
		func_192(&uLocal_215);
	}
}

void func_192(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0x236D8AD7EE179F46((*uParam0)[iVar0 /*18*/], 30))
		{
			func_193(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_145 = 1;
}

void func_193(var uParam0)
{
	func_194(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_194(var uParam0, char* sParam1, int iParam2)
{
	if (unk_0x236D8AD7EE179F46(uParam0, 30))
	{
		switch (func_155(uParam0))
		{
			case 0:
				unk_0x887F4488DA99FD21(uParam2);
				break;
			
			case 1:
				unk_0xD8323B49BAE93D80(uParam1);
				break;
			
			case 2:
				unk_0x89A95366100690C0(uParam1);
				break;
			
			case 3:
				unk_0x9B331DCFDFC55491(uParam1);
				break;
			
			case 4:
				unk_0x4855165A2773595C(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x010ACF5A865CA942(sParam1);
				break;
			
			case 6:
				unk_0xABF33AFE6B2877A8();
				break;
			
			case 7:
				unk_0xEDEECB22A033000E(iParam2);
				break;
			
			case 8:
				unk_0xBEE99C97A1B87F95(iParam2, unk_0x236D8AD7EE179F46(uParam0, 26));
				break;
			
			case 9:
				unk_0x954FB3FC1E04A7A9();
				break;
			
			default:
				break;
		}
	}
}

int func_195(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return unk_0x236D8AD7EE179F46(Global_98931.f_29428.f_1, 0);
			break;
		
		case 1:
			return unk_0x236D8AD7EE179F46(Global_98931.f_29428.f_1, 1);
			break;
		
		case 2:
			return unk_0x236D8AD7EE179F46(Global_98931.f_29428.f_1, 2);
			break;
		
		case 3:
			return unk_0x236D8AD7EE179F46(Global_98931.f_29428.f_1, 3);
			break;
		
		case 4:
			return unk_0x236D8AD7EE179F46(Global_98931.f_29428.f_1, 4);
			break;
	}
	return 0;
}

bool func_196(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	bVar0 = unk_0x236D8AD7EE179F46(Global_98931.f_7699.f_99.f_219[iParam0], iParam1);
	return bVar0;
}

void func_197()
{
	if (func_198(func_199(86, 0), Local_88, 1f, 0))
	{
		Local_82.f_0 = 0;
		Local_82.f_1 = 2;
		Local_82.f_3 = 100;
		Local_82.f_4 = 20;
	}
	else if (func_198(func_199(87, 0), Local_88, 1f, 0))
	{
		Local_82.f_0 = 1;
		Local_82.f_1 = 2;
		Local_82.f_3 = 500;
		Local_82.f_4 = 18;
	}
	else if (func_198(func_199(88, 0), Local_88, 1f, 0))
	{
		Local_82.f_0 = 2;
		Local_82.f_1 = 2;
		Local_82.f_3 = 1000;
		Local_82.f_4 = 2;
	}
	else if (func_198(func_199(89, 0), Local_88, 1f, 0))
	{
		Local_82.f_0 = 3;
		Local_82.f_1 = 2;
		Local_82.f_3 = 1250;
		Local_82.f_4 = 4;
	}
	else if (func_198(func_199(90, 0), Local_88, 1f, 0))
	{
		Local_82.f_0 = 4;
		Local_82.f_1 = 1;
		Local_82.f_3 = 1500;
		Local_82.f_4 = 5;
	}
	else if (func_198(func_199(82, 0), Local_88, 1f, 0))
	{
		Local_82.f_0 = 5;
		Local_82.f_1 = 3;
		Local_82.f_3 = 0;
		Local_82.f_4 = 16;
	}
	else if (func_198(func_199(83, 0), Local_88, 1f, 0))
	{
		Local_82.f_0 = 6;
		Local_82.f_1 = 3;
		Local_82.f_3 = 0;
		Local_82.f_4 = 13;
	}
	else if (func_198(func_199(84, 0), Local_88, 1f, 0))
	{
		Local_82.f_0 = 7;
		Local_82.f_1 = 3;
		Local_82.f_3 = 0;
		Local_82.f_4 = 15;
		Local_82.f_5 = 1;
	}
	else if (func_198(func_199(85, 0), Local_88, 1f, 0))
	{
		Local_82.f_0 = 8;
		Local_82.f_1 = 3;
		Local_82.f_4 = 24;
		Local_82.f_3 = 0;
		Local_82.f_5 = 1;
	}
	else
	{
		func_200(0);
	}
}

int func_198(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0xB9AA84B14E04BC20((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0xB9AA84B14E04BC20((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0xB9AA84B14E04BC20((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xB9AA84B14E04BC20((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0xB9AA84B14E04BC20((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_199(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0f, 0f, 0f;
	}
	return Global_25250[iVar0 /*23*/][iParam1 /*3*/];
}

void func_200(bool bParam0)
{
	int iVar0;
	var uVar1;
	
	if (!iLocal_92)
	{
		unk_0x59E3A6BEFC421137(0);
		iLocal_92 = 1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (func_14(uLocal_102[iVar0]))
		{
			unk_0x27CC98B7C879C320(uLocal_102[iVar0]);
			unk_0x9AF45ACD4E9068EE(uLocal_102[iVar0], 1193033728, 0);
			unk_0x1D15D99A10A15334(uLocal_102[iVar0], 0);
			unk_0x71A8BCA218722FA1(&(uLocal_102[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_14(iLocal_169[iVar0]))
		{
			if (func_14(iLocal_165[iVar0]))
			{
				unk_0x27CC98B7C879C320(iLocal_169[iVar0]);
				if (unk_0x9F59BCFFFEAAD4B1(unk_0x14B7103DBD149FFE(iLocal_165[iVar0])))
				{
					unk_0xC3D55C17F4AFE6C8(iLocal_165[iVar0], 0);
				}
				unk_0x2D7E8CD6F4101CAB(iLocal_169[iVar0], iLocal_165[iVar0], 20f, 786599);
				unk_0x6CB332CB31E9FA96(iLocal_169[iVar0], 1);
				unk_0x1D15D99A10A15334(iLocal_169[iVar0], 0);
				unk_0x71A8BCA218722FA1(&(iLocal_169[iVar0]));
				unk_0xE0913C01F5C0CC3D(&(iLocal_165[iVar0]));
			}
		}
		iVar0++;
	}
	if (func_14(iLocal_111))
	{
		if (func_14(iLocal_110))
		{
			unk_0x27CC98B7C879C320(iLocal_111);
			unk_0x4B9FA68A3AC8C29D(iLocal_111, 1, 1);
			unk_0x2D7E8CD6F4101CAB(iLocal_111, iLocal_110, 15f, 786599);
			unk_0x6CB332CB31E9FA96(iLocal_111, 1);
			unk_0x1D15D99A10A15334(iLocal_111, 0);
			unk_0x71A8BCA218722FA1(&iLocal_111);
			unk_0xE0913C01F5C0CC3D(&iLocal_110);
		}
	}
	if (func_14(iLocal_116))
	{
		unk_0xE0913C01F5C0CC3D(&iLocal_116);
	}
	switch (Local_82.f_0)
	{
		case 5:
			func_203(82, 0, 0);
			unk_0xF3148AAF69AF9CBC(&(Global_98931.f_29425.f_2), 0);
			break;
		
		case 6:
			func_203(83, 0, 0);
			unk_0xF3148AAF69AF9CBC(&(Global_98931.f_29425.f_2), 1);
			break;
		
		case 7:
			func_203(84, 0, 0);
			unk_0xF3148AAF69AF9CBC(&(Global_98931.f_29425.f_2), 2);
			break;
		
		case 8:
			func_203(85, 0, 0);
			unk_0xF3148AAF69AF9CBC(&(Global_98931.f_29425.f_2), 3);
			break;
		
		case 0:
			func_203(86, 0, 0);
			unk_0xF3148AAF69AF9CBC(&(Global_98931.f_29428.f_3), 0);
			break;
		
		case 1:
			func_203(87, 0, 0);
			unk_0xF3148AAF69AF9CBC(&(Global_98931.f_29428.f_3), 1);
			break;
		
		case 2:
			func_203(88, 0, 0);
			unk_0xF3148AAF69AF9CBC(&(Global_98931.f_29428.f_3), 2);
			break;
		
		case 3:
			func_203(89, 0, 0);
			unk_0xF3148AAF69AF9CBC(&(Global_98931.f_29428.f_3), 3);
			break;
		
		case 4:
			func_203(90, 0, 0);
			unk_0xF3148AAF69AF9CBC(&(Global_98931.f_29428.f_3), 4);
			break;
	}
	if (iLocal_91)
	{
		unk_0xB8BB626315D394F5(1);
	}
	unk_0x03B2F9AA710B4B0F(unk_0x41899D9898B4EEE4(10), 0);
	if (iLocal_100)
	{
		unk_0x094B864326B5FE96(1);
	}
	if (iLocal_193 && !bParam0)
	{
		uVar1 = unk_0xEC537F0C0E8265EE();
		if (unk_0x7DF7DE8C76D7F346(uVar1))
		{
			if (!unk_0xF26CA0663D2E037E(iVar1))
			{
				unk_0x034205BA180B4E43(iVar1, 1, 0);
			}
		}
	}
	if (!bParam0)
	{
		func_191(0);
	}
	if (iLocal_93)
	{
		unk_0x8DBC0C86D2397C6A(Local_200, Local_203, 1);
		unk_0xC3A1174645E71AB9(Local_206, Local_209, fLocal_212, 1);
		iLocal_93 = 0;
	}
	unk_0xC904C30D9B70F037("WORLD_VEHICLE_PARK_PERPENDICULAR_NOSE_IN", 1);
	unk_0xC904C30D9B70F037("WORLD_VEHICLE_PARK_PARALLEL", 1);
	if (Local_82.f_0 == 1)
	{
		unk_0xE91F714E010C7127(uLocal_214, 0);
	}
	if (Local_82.f_1 == 1 || Local_82.f_1 == 2)
	{
		unk_0xE91F714E010C7127(uLocal_213, 0);
	}
	else
	{
		unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 170, 0);
	}
	func_201(&uLocal_215, 0);
	unk_0xC23A229F78DAD92A();
}

void func_201(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_192(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_202(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_145 = 0;
	uParam0->f_146 = -1;
}

void func_202(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_203(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		iVar1 = unk_0x236D8AD7EE179F46(Global_25250[iVar0 /*23*/].f_11, 15);
		if (iVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != unk_0x236D8AD7EE179F46(Global_25250[iVar0 /*23*/].f_11, 0))
	{
		unk_0xF3148AAF69AF9CBC(&(Global_25250[iVar0 /*23*/].f_11), 18);
		if (Global_25247 == 1)
		{
			Global_25248 = 1;
		}
		Global_25247 = 1;
	}
	if (bParam1)
	{
		unk_0xF3148AAF69AF9CBC(&(Global_25250[iVar0 /*23*/].f_11), 0);
		unk_0xF3148AAF69AF9CBC(&(Global_25250[iVar0 /*23*/].f_11), 15);
		unk_0xF3148AAF69AF9CBC(&(Global_25250[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&(Global_25250[iVar0 /*23*/].f_11), 0);
		unk_0xC69E84EBBD7166E6(&(Global_25250[iVar0 /*23*/].f_11), 15);
	}
	if (!unk_0x236D8AD7EE179F46(Global_25250[iVar0 /*23*/].f_11, 0))
	{
		if (unk_0xFBACB273AA628CC5(Global_25250[iVar0 /*23*/].f_19))
		{
			unk_0x2A69072B23BDFD07(1);
			unk_0x0A8175F24237A3D4(&(Global_25250[iVar0 /*23*/].f_19));
			unk_0x2A69072B23BDFD07(0);
		}
	}
}

