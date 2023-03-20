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
	bool bLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	var uLocal_51[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<3> Local_64[12];
	int iLocal_101 = 0;
	bool bLocal_102 = 0;
	int iLocal_103 = 0;
	var uLocal_104 = 0;
	bool bLocal_105 = 0;
	int iLocal_106[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_117 = 0;
	bool bLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	struct<7> Local_127 = { 0, 0, 1097859072, 1500, 45, 1103626240, 5 } ;
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
	var uLocal_144 = 16;
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
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	struct<3> Local_311 = { 0, 0, 0 } ;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	struct<76> Local_317 = { 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403[3] = { 0, 0, 0 };
	var uLocal_407[3] = { 0, 0, 0 };
	int iLocal_411[3] = { 0, 0, 0 };
	float fLocal_415 = 0f;
	bool bLocal_416 = 0;
	int iLocal_417 = 0;
	int iLocal_418 = 0;
	struct<13> Local_419[10];
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	int iLocal_568 = 0;
	int iLocal_569 = 0;
	var uLocal_570 = 0;
	bool bLocal_571 = 0;
	int iLocal_572 = 0;
	bool bLocal_573 = 0;
	int iLocal_574 = 0;
	var uLocal_575[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_596[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_617 = 0;
	int iLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	struct<3> Local_624 = { 0, 0, 0 } ;
	int iLocal_627 = 0;
	struct<41> Local_628 = { 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 3, 0, 0, 0, 4 } ;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
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
	fLocal_415 = 0f;
	bLocal_416 = true;
	Local_624 = { 1683.682f, 2518.867f, 44.5651f };
	if (unk_0x8D841F1DD3FA555F(3))
	{
		func_83(0);
	}
	uLocal_310 = unk_0x81873881071CD9FE();
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		unk_0xC61B7EAF420531B6(unk_0x1329891157A54C63());
	}
	while (true)
	{
		if (unk_0x930F8FBB8E9537CC(uLocal_310))
		{
			func_83(0);
		}
		func_82();
		Local_311 = { unk_0xB6AE0DAE06D56288(iLocal_310, 1) };
		switch (iLocal_309)
		{
			case 0:
				func_80();
				iLocal_309 = 1;
				break;
			
			case 1:
				if (!Global_24954)
				{
					func_79();
					func_78();
					func_77();
					func_75();
					iLocal_309 = 2;
				}
				break;
			
			case 2:
				if ((((func_74() && func_73()) && func_72()) && func_71()) && func_70())
				{
					iLocal_309 = 3;
				}
				break;
			
			case 3:
				func_64();
				unk_0x4EDE34FBADD967A6(0);
				func_63();
				unk_0x4EDE34FBADD967A6(0);
				func_60();
				func_59();
				iLocal_309 = 4;
				break;
			
			case 4:
				if (!Global_24954)
				{
					if (Global_88070)
					{
						func_83(0);
					}
					func_34();
					func_33();
					func_30();
					func_29();
					func_27();
					func_5();
					func_4();
				}
				else if (func_1(0))
				{
					func_83(1);
				}
				break;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

int func_1(bool bParam0)
{
	if (bParam0)
	{
		if (func_3())
		{
			return 1;
		}
	}
	if (func_2(14))
	{
		return 1;
	}
	return 0;
}

bool func_2(int iParam0)
{
	return Global_35443 == iParam0;
}

int func_3()
{
	if (Global_97878)
	{
		return 1;
	}
	if (!func_2(14) && unk_0x968BF1C2C695B61A(joaat("director_mode")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_4()
{
	int iVar0;
	bool bVar1;
	
	bVar1 = false;
	if (iLocal_50 == 1)
	{
		if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
		{
			if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), 1766.972f, 2409.596f, 43.55469f, 1826.647f, 2471.633f, 56.30863f, 12f, 0, 1, 0))
			{
				if (!bLocal_102)
				{
					unk_0x2B789CAC1EFE0ABB("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x2B789CAC1EFE0ABB("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_106[0] = 1;
				}
			}
			else
			{
				iLocal_106[0] = 0;
			}
		}
	}
	else if (iLocal_50 == 2)
	{
		if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
		{
			if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), 1662.31f, 2391.06f, 43.51377f, 1761.362f, 2405.143f, 56.65472f, 12f, 0, 1, 0))
			{
				if (!bLocal_102)
				{
					unk_0x2B789CAC1EFE0ABB("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x2B789CAC1EFE0ABB("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_106[1] = 1;
				}
			}
			else
			{
				iLocal_106[1] = 0;
			}
		}
	}
	else if (iLocal_50 == 3)
	{
		if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
		{
			if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), 1537.369f, 2465.132f, 43.5756f, 1655.663f, 2391.822f, 56.54404f, 12f, 0, 1, 0))
			{
				if (!bLocal_102)
				{
					unk_0x2B789CAC1EFE0ABB("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x2B789CAC1EFE0ABB("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_106[2] = 1;
				}
			}
			else
			{
				iLocal_106[2] = 0;
			}
		}
	}
	else if (iLocal_50 == 4)
	{
		if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
		{
			if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), 1529.153f, 2584.264f, 43.6168f, 1535.014f, 2469.253f, 56.5985f, 12f, 0, 1, 0))
			{
				if (!bLocal_102)
				{
					unk_0x2B789CAC1EFE0ABB("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x2B789CAC1EFE0ABB("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_106[3] = 1;
				}
			}
			else
			{
				iLocal_106[3] = 0;
			}
		}
	}
	else if (iLocal_50 == 5)
	{
		if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
		{
			if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), 1565.045f, 2681.205f, 43.50552f, 1529.915f, 2586.427f, 56.52686f, 12f, 0, 1, 0))
			{
				if (!bLocal_102)
				{
					unk_0x2B789CAC1EFE0ABB("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x2B789CAC1EFE0ABB("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_106[4] = 1;
				}
			}
			else
			{
				iLocal_106[4] = 0;
			}
		}
	}
	else if (iLocal_50 == 6)
	{
		if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
		{
			if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), 1645.169f, 2760.33f, 43.6705f, 1567.113f, 2682.905f, 56.39177f, 12f, 0, 1, 0))
			{
				if (!bLocal_102)
				{
					unk_0x2B789CAC1EFE0ABB("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x2B789CAC1EFE0ABB("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_106[5] = 1;
				}
			}
			else
			{
				iLocal_106[5] = 0;
			}
		}
	}
	else if (iLocal_50 == 7)
	{
		if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
		{
			if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), 1772.306f, 2766.364f, 43.59126f, 1650.228f, 2761.691f, 56.53028f, 12f, 0, 1, 0))
			{
				if (!bLocal_102)
				{
					unk_0x2B789CAC1EFE0ABB("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x2B789CAC1EFE0ABB("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_106[6] = 1;
				}
			}
			else
			{
				iLocal_106[6] = 0;
			}
		}
	}
	else if (iLocal_50 == 8)
	{
		if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
		{
			if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), 1831.435f, 2623.257f, 43.46658f, 1851.659f, 2696.404f, 56.68093f, 12f, 0, 1, 0))
			{
				if (!bLocal_102)
				{
					unk_0x2B789CAC1EFE0ABB("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x2B789CAC1EFE0ABB("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_106[7] = 1;
				}
			}
			else
			{
				iLocal_106[7] = 0;
			}
		}
	}
	else if (iLocal_50 == 9)
	{
		if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
		{
			if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), 1831.435f, 2623.257f, 43.46658f, 1851.659f, 2696.404f, 56.68093f, 12f, 0, 1, 0))
			{
				if (!bLocal_102)
				{
					unk_0x2B789CAC1EFE0ABB("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x2B789CAC1EFE0ABB("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_106[8] = 1;
				}
			}
			else
			{
				iLocal_106[8] = 0;
			}
		}
	}
	else if (iLocal_50 == 10)
	{
		if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
		{
			if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), 1829.468f, 2480.96f, 43.52237f, 1836.998f, 2566.856f, 60.35412f, 20.5f, 0, 1, 0))
			{
				if (!bLocal_102)
				{
					unk_0x2B789CAC1EFE0ABB("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x2B789CAC1EFE0ABB("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 1, 1);
					iLocal_106[9] = 1;
				}
			}
			else
			{
				iLocal_106[9] = 0;
			}
		}
	}
	iLocal_50++;
	if (iLocal_50 > 10)
	{
		iLocal_50 = 0;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (iLocal_106[iVar0])
			{
				bVar1 = true;
			}
			iVar0++;
		}
		if (!bVar1)
		{
			if (!bLocal_102)
			{
				unk_0x2B789CAC1EFE0ABB("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_WARNING", 0, 1);
				unk_0x2B789CAC1EFE0ABB("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 1, 1);
			}
		}
	}
}

void func_5()
{
	struct<3> Var0;
	
	switch (iLocal_49)
	{
		case 0:
			unk_0x32A12757CBF48A33(joaat("police3"));
			unk_0x32A12757CBF48A33(joaat("s_m_y_cop_01"));
			if (unk_0x33ACB874CECA2D4B(joaat("police3")) && unk_0x33ACB874CECA2D4B(joaat("s_m_y_cop_01")))
			{
				iLocal_49++;
			}
			break;
		
		case 1:
			iLocal_123 = unk_0xE00F8DEA9778FC87(joaat("police3"), 1797.785f, 2599.697f, 44.5769f, 269.6189f, 1, 1);
			iLocal_125 = unk_0x4D135F3066A9BF9C(iLocal_123, 6, joaat("s_m_y_cop_01"), -1, 1, 1);
			func_26(&iLocal_125);
			iLocal_49++;
			break;
		
		case 2:
			if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
			{
				Var0 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) };
			}
			if ((func_16(iLocal_125, iLocal_123, &Local_127, &uLocal_134, 0, 1, 0, 1, 1) || func_16(iLocal_126, iLocal_124, &Local_127, &uLocal_134, 0, 1, 0, 1, 1)) || (func_15(Var0, 4, 20, 0) && !unk_0x73513C0B8FDDCF2F(unk_0x81873881071CD9FE())))
			{
				unk_0xFD01CCC3CB6F7424(joaat("prop_gate_prison_01"), 1845f, 2605f, 45f, 0, 0f, 50f, 0);
				unk_0xFD01CCC3CB6F7424(joaat("prop_gate_prison_01"), 1819.274f, 2608.537f, 44.6195f, 0, 0f, 50f, 0);
				if (!unk_0x930F8FBB8E9537CC(iLocal_125))
				{
					unk_0x633A554EB6BC4E71(iLocal_125, unk_0x81873881071CD9FE(), 0, 16);
				}
				if (!func_14(&uLocal_135))
				{
					func_11(&uLocal_135);
				}
				iLocal_49++;
			}
			break;
		
		case 3:
			if (func_14(&uLocal_135))
			{
				if (func_8(&uLocal_135) > 15f)
				{
					iLocal_124 = unk_0xE00F8DEA9778FC87(joaat("police3"), 1755.159f, 2614.456f, 44.5652f, 179.3394f, 1, 1);
					iLocal_126 = unk_0x4D135F3066A9BF9C(iLocal_124, 6, joaat("s_m_y_cop_01"), -1, 1, 1);
					func_26(&iLocal_126);
					unk_0x633A554EB6BC4E71(iLocal_126, unk_0x81873881071CD9FE(), 0, 16);
					iLocal_49++;
				}
				else if (unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) == 0)
				{
					if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
					{
						Var0 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) };
					}
					if (func_7(1818.237f, 2604.927f, 44.57381f, Var0, 1125515264))
					{
						func_6();
						iLocal_49 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) == 0)
			{
				if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
				{
					Var0 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) };
				}
				if (func_7(1818.237f, 2604.927f, 44.57381f, Var0, 1125515264))
				{
					func_6();
					iLocal_49 = 0;
				}
			}
			break;
	}
}

void func_6()
{
	if (unk_0x86CCCD2FAE9D5E65(iLocal_123))
	{
		unk_0x5D00E836B6BE8693(&iLocal_123);
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_125))
	{
		unk_0xF210D34D7F7152ED(&iLocal_125);
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_124))
	{
		unk_0x5D00E836B6BE8693(&iLocal_124);
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_126))
	{
		unk_0xF210D34D7F7152ED(&iLocal_126);
	}
}

int func_7(struct<3> Param0, struct<3> Param3, float fParam6)
{
	if (unk_0xB7A628320EFF8E47(Param0, Param3) < (fParam6 * fParam6))
	{
		if (((unk_0x86CCCD2FAE9D5E65(iLocal_123) && unk_0x86CCCD2FAE9D5E65(iLocal_125)) && unk_0x86CCCD2FAE9D5E65(iLocal_124)) && unk_0x86CCCD2FAE9D5E65(iLocal_126))
		{
			if (unk_0x895C275673BCEAB0(iLocal_123) || !unk_0x331E7ACCFD0869AD(iLocal_123))
			{
				if (unk_0x895C275673BCEAB0(iLocal_125) || !unk_0x331E7ACCFD0869AD(iLocal_125))
				{
					if (unk_0x895C275673BCEAB0(iLocal_124) || !unk_0x331E7ACCFD0869AD(iLocal_124))
					{
						if (unk_0x895C275673BCEAB0(iLocal_126) || !unk_0x331E7ACCFD0869AD(iLocal_126))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	else if (unk_0xB7A628320EFF8E47(Param0, Param3) > 62500f)
	{
		return 1;
	}
	return 0;
}

float func_8(var uParam0)
{
	if (func_14(uParam0))
	{
		if (func_10(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_9(unk_0x236D8AD7EE179F46(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_9(bool bParam0)
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

bool func_10(var uParam0)
{
	return unk_0x236D8AD7EE179F46(*uParam0, 2);
}

void func_11(var uParam0)
{
	if (!func_14(uParam0))
	{
		func_12(uParam0);
	}
}

void func_12(var uParam0)
{
	func_13(uParam0, 0f);
}

void func_13(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_9(unk_0x236D8AD7EE179F46(*uParam0, 4)) - fParam1);
	unk_0xF3148AAF69AF9CBC(uParam0, 1);
	unk_0xC69E84EBBD7166E6(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_14(var uParam0)
{
	return unk_0x236D8AD7EE179F46(*uParam0, 1);
}

int func_15(struct<3> Param0, int iParam3, int iParam4, bool bParam5)
{
	struct<3> Var0[15];
	struct<3> Var46[15];
	float fVar92[15];
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	
	iVar110 = 0;
	switch (iParam3)
	{
		case 1:
			Var0[0 /*3*/] = { -1332.211f, 100.4608f, 40.38437f };
			Var46[0 /*3*/] = { -1094.238f, 148.4274f, 73f };
			fVar92[0] = 171.25f;
			Var0[1 /*3*/] = { -999.7344f, -110.2231f, 25.25706f };
			Var46[1 /*3*/] = { -1149.494f, 109.2558f, 73f };
			fVar92[1] = 132f;
			Var0[2 /*3*/] = { -1035.113f, -84.95885f, 28.2746f };
			Var46[2 /*3*/] = { -1261.103f, 50.08148f, 73f };
			fVar92[2] = 132f;
			iVar108 = 3;
			break;
		
		case 2:
			Var0[0 /*3*/] = { -804.3439f, -3346.5f, 10f };
			Var46[0 /*3*/] = { -1816.954f, -2768.893f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 247f;
			Var0[1 /*3*/] = { -1911.488f, -2934.197f, 10f };
			Var46[1 /*3*/] = { -968.6236f, -3477.748f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 149f;
			Var0[2 /*3*/] = { -844.9433f, -2802.785f, 10f };
			Var46[2 /*3*/] = { -1011.081f, -3086.904f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 185.5f;
			Var0[3 /*3*/] = { -1021.086f, -2952.277f, 10f };
			Var46[3 /*3*/] = { -1599.008f, -2616.271f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 250f;
			Var0[4 /*3*/] = { -1027.136f, -2436.457f, 10f };
			Var46[4 /*3*/] = { -1392.61f, -2226.763f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 193.5f;
			Var0[5 /*3*/] = { -1497.549f, -2408.712f, 10f };
			Var46[5 /*3*/] = { -1136.917f, -2617.955f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 234.5f;
			Var0[6 /*3*/] = { -982.7924f, -2831.709f, 12.93313f };
			Var46[6 /*3*/] = { -966.4677f, -2803.458f, 16.68313f };
			fVar92[6] = 16f;
			Var0[7 /*3*/] = { -1110.083f, -3496.806f, 12f };
			Var46[7 /*3*/] = { -1955.298f, -3010.431f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 80f;
			Var0[8 /*3*/] = { -1886.899f, -3193.024f, 12f };
			Var46[8 /*3*/] = { -1836.143f, -3105.268f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 142f;
			Var0[9 /*3*/] = { -1134.337f, -3535.648f, 12f };
			Var46[9 /*3*/] = { -1259.649f, -3463.486f, IntToFloat((250 + iParam4)) };
			fVar92[9] = 30.75f;
			Var0[10 /*3*/] = { -969.1279f, -3463.899f, 12f };
			Var46[10 /*3*/] = { -896.3734f, -3505.715f, IntToFloat((250 + iParam4)) };
			fVar92[10] = 150f;
			Var0[11 /*3*/] = { -1369.491f, -2173.579f, 10f };
			Var46[11 /*3*/] = { -1685.626f, -2720.364f, IntToFloat((250 + iParam4)) };
			fVar92[11] = 29.25f;
			Var0[12 /*3*/] = { -1010.926f, -3550.943f, 10f };
			Var46[12 /*3*/] = { -1110.198f, -3493.617f, IntToFloat((250 + iParam4)) };
			fVar92[12] = 43f;
			iVar108 = 13;
			break;
		
		case 3:
			Var0[0 /*3*/] = { -1773.944f, 3287.334f, 30f };
			Var46[0 /*3*/] = { -2029.776f, 2845.083f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 250f;
			Var0[1 /*3*/] = { -2725.889f, 3291.099f, 30f };
			Var46[1 /*3*/] = { -2009.182f, 2879.835f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 180f;
			Var0[2 /*3*/] = { -2442.026f, 3326.699f, 30f };
			Var46[2 /*3*/] = { -2033.928f, 3089.049f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 200f;
			Var0[3 /*3*/] = { -1917.165f, 3374.209f, 30f };
			Var46[3 /*3*/] = { -2016.791f, 3195.058f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 86.25f;
			Var0[4 /*3*/] = { -2192.753f, 3373.278f, 30f };
			Var46[4 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 140.5f;
			Var0[5 /*3*/] = { -2077.663f, 3344.514f, 30f };
			Var46[5 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 140.5f;
			Var0[6 /*3*/] = { -2861.755f, 3352.661f, 30f };
			Var46[6 /*3*/] = { -2715.871f, 3269.916f, IntToFloat((250 + iParam4)) };
			fVar92[6] = 90f;
			Var0[7 /*3*/] = { -2005.574f, 3364.533f, 30f };
			Var46[7 /*3*/] = { -1977.569f, 3330.888f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 100f;
			Var0[8 /*3*/] = { -1682.235f, 3004.285f, 30f };
			Var46[8 /*3*/] = { -1942.747f, 2947.441f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 248.75f;
			Var0[9 /*3*/] = { -2393.295f, 2936.406f, 31.6801f };
			Var46[9 /*3*/] = { -2453.037f, 3006.863f, 52.31003f };
			fVar92[9] = 128f;
			Var0[10 /*3*/] = { -2347.185f, 3023.83f, 31.56573f };
			Var46[10 /*3*/] = { -2517.33f, 2989.063f, 49.95644f };
			fVar92[10] = 127.25f;
			Var0[11 /*3*/] = { -2259.922f, 3358.04f, 29.99972f };
			Var46[11 /*3*/] = { -2299.772f, 3385.79f, 38.06014f };
			fVar92[11] = 16f;
			Var0[12 /*3*/] = { -2476.309f, 3363.914f, 31.67933f };
			Var46[12 /*3*/] = { -2431.981f, 3287.669f, 39.97826f };
			fVar92[12] = 214.25f;
			Var0[13 /*3*/] = { -2103.081f, 2797.783f, 29.37864f };
			Var46[13 /*3*/] = { -2096.821f, 2874.423f, 57.80989f };
			fVar92[13] = 65.75f;
			if (bParam5)
			{
				iVar111 = iParam4;
			}
			else
			{
				iVar111 = 0;
			}
			Var46[9 /*3*/].f_2 = (Var46[9 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[10 /*3*/].f_2 = (Var46[10 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[11 /*3*/].f_2 = (Var46[11 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[12 /*3*/].f_2 = (Var46[12 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[13 /*3*/].f_2 = (Var46[13 /*3*/].f_2 + IntToFloat(iVar111));
			iVar108 = 14;
			break;
		
		case 4:
			Var0[0 /*3*/] = { 1541.607f, 2527.555f, 40f };
			Var46[0 /*3*/] = { 1815.575f, 2535.06f, IntToFloat((150 + iParam4)) };
			fVar92[0] = 114f;
			Var0[1 /*3*/] = { 1788.879f, 2445.727f, 40f };
			Var46[1 /*3*/] = { 1716.96f, 2502.957f, IntToFloat((150 + iParam4)) };
			fVar92[1] = 88.5f;
			Var0[2 /*3*/] = { 1601.157f, 2436.244f, 40f };
			Var46[2 /*3*/] = { 1650.078f, 2515.923f, IntToFloat((150 + iParam4)) };
			fVar92[2] = 133.25f;
			Var0[3 /*3*/] = { 1706.331f, 2407.597f, 40f };
			Var46[3 /*3*/] = { 1698.555f, 2460.208f, IntToFloat((150 + iParam4)) };
			fVar92[3] = 104.5f;
			Var0[4 /*3*/] = { 1712.452f, 2756.218f, 40f };
			Var46[4 /*3*/] = { 1718.848f, 2589.162f, IntToFloat((150 + iParam4)) };
			fVar92[4] = 121.75f;
			Var0[5 /*3*/] = { 1830.228f, 2661.24f, 40f };
			Var46[5 /*3*/] = { 1774.812f, 2679.419f, IntToFloat((150 + iParam4)) };
			fVar92[5] = 84.5f;
			Var0[6 /*3*/] = { 1559.05f, 2632.22f, 40f };
			Var46[6 /*3*/] = { 1657.208f, 2595.484f, IntToFloat((150 + iParam4)) };
			fVar92[6] = 103.75f;
			Var0[7 /*3*/] = { 1612.021f, 2716.869f, 40f };
			Var46[7 /*3*/] = { 1657.165f, 2669.721f, IntToFloat((150 + iParam4)) };
			fVar92[7] = 104.25f;
			Var0[8 /*3*/] = { 1809.872f, 2729.827f, 40f };
			Var46[8 /*3*/] = { 1789.855f, 2705.037f, IntToFloat((150 + iParam4)) };
			fVar92[8] = 91f;
			Var0[9 /*3*/] = { 1818.789f, 2605.948f, 40f };
			Var46[9 /*3*/] = { 1783.114f, 2606.783f, IntToFloat((150 + iParam4)) };
			fVar92[9] = 51.25f;
			iVar108 = 10;
			break;
		
		case 5:
			Var0[0 /*3*/] = { 3411.002f, 3663.185f, 20f };
			Var46[0 /*3*/] = { 3615.583f, 3626.194f, IntToFloat((40 + iParam4)) };
			fVar92[0] = 45.75f;
			Var0[1 /*3*/] = { 3426.66f, 3733.078f, 20f };
			Var46[1 /*3*/] = { 3643.801f, 3694.362f, IntToFloat((40 + iParam4)) };
			fVar92[1] = 99f;
			Var0[2 /*3*/] = { 3446.036f, 3795.688f, 20f };
			Var46[2 /*3*/] = { 3650.914f, 3766.152f, IntToFloat((40 + iParam4)) };
			fVar92[2] = 81.5f;
			iVar108 = 3;
			break;
		
		case 6:
			Var0[0 /*3*/] = { 526.053f, -3391.497f, -10f };
			Var46[0 /*3*/] = { 523.2289f, -3118.678f, IntToFloat((10 + iParam4)) };
			fVar92[0] = 120f;
			Var0[1 /*3*/] = { 459.4397f, -3199.99f, 4.819676f };
			Var46[1 /*3*/] = { 593.8928f, -3199.998f, 30.06926f };
			fVar92[1] = 170f;
			Var0[2 /*3*/] = { 552.8467f, -3111.054f, 4.819394f };
			Var46[2 /*3*/] = { 585.3137f, -3111.844f, 17.56923f };
			fVar92[2] = 12.5f;
			Var0[3 /*3*/] = { 598.4666f, -3140.147f, 4.819257f };
			Var46[3 /*3*/] = { 597.4973f, -3117.063f, 17.31926f };
			fVar92[3] = 9.75f;
			iVar108 = 4;
			break;
		
		case 7:
			Var0[0 /*3*/] = { -1108.55f, -570.8798f, 20f };
			Var46[0 /*3*/] = { -1187.811f, -477.5037f, IntToFloat((50 + iParam4)) };
			fVar92[0] = 162f;
			Var0[1 /*3*/] = { -1201.378f, -485.9673f, 20f };
			Var46[1 /*3*/] = { -1215.796f, -464.8281f, IntToFloat((50 + iParam4)) };
			fVar92[1] = 124f;
			Var0[2 /*3*/] = { -985.6311f, -525.4233f, 20f };
			Var46[2 /*3*/] = { -1013.393f, -475.2057f, IntToFloat((50 + iParam4)) };
			fVar92[2] = 55f;
			Var0[3 /*3*/] = { -1055.849f, -477.8226f, 20f };
			Var46[3 /*3*/] = { -1073.333f, -498.717f, IntToFloat((50 + iParam4)) };
			fVar92[3] = 142f;
			iVar108 = 4;
			break;
		
		case 8:
			Var0[0 /*3*/] = { 461.5684f, -984.572f, 29.43951f };
			Var46[0 /*3*/] = { 471.17f, -984.4292f, 40.14212f };
			fVar92[0] = 7.75f;
			Var0[1 /*3*/] = { 457.3404f, -984.756f, 34.43951f };
			Var46[1 /*3*/] = { 457.2084f, -993.7189f, 29.38958f };
			fVar92[1] = 14.75f;
			Var0[2 /*3*/] = { 477.6227f, -986.6f, 40.00819f };
			Var46[2 /*3*/] = { 424.8687f, -986.3279f, 48.71241f };
			fVar92[2] = 31.5f;
			Var0[3 /*3*/] = { 474.3889f, -974.4613f, 39.55761f };
			Var46[3 /*3*/] = { 474.0358f, -1021.972f, 49.10033f };
			fVar92[3] = 30.5f;
			Var0[4 /*3*/] = { 442.1768f, -974.1888f, 29.68951f };
			Var46[4 /*3*/] = { 442.1855f, -979.8635f, 33.43951f };
			fVar92[4] = 6.75f;
			iVar108 = 5;
			break;
	}
	iVar109 = 0;
	while (iVar109 < iVar108)
	{
		if (unk_0xE15A3D0C3294EAF3(Param0, Var0[iVar109 /*3*/], Var46[iVar109 /*3*/], fVar92[iVar109], iVar110, 1))
		{
			return 1;
		}
		iVar109++;
	}
	return 0;
}

int func_16(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0x81873881071CD9FE();
	if (!unk_0x930F8FBB8E9537CC(iVar0) && !unk_0x930F8FBB8E9537CC(iParam0))
	{
		if (!func_25(*uParam2, 1))
		{
			if (func_24(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_25(*uParam2, 2))
		{
			if (unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_25(*uParam2, 4))
		{
			if (func_22(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_25(*uParam2, 8))
		{
			if (func_21(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_25(*uParam2, 128);
		if (bParam4)
		{
			if (func_17(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_25(*uParam2, 16))
		{
			if (func_17(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
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

int func_17(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	var uVar1;
	
	if (bParam3)
	{
		if (!bLocal_44)
		{
			iLocal_45 = unk_0x4DC6EF945236C0F7(iParam0);
			bLocal_44 = true;
		}
		iLocal_46 = unk_0x4DC6EF945236C0F7(iParam0);
		iLocal_47 = (iLocal_45 - iLocal_46);
		uVar0 = unk_0x2ADE2CEED2637E95();
		if (!unk_0x930F8FBB8E9537CC(uVar0))
		{
			if (unk_0xBBEF8270CE27C0EE(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_47) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_44)
		{
			if (unk_0xBBEF8270CE27C0EE(iParam0, unk_0x81873881071CD9FE(), 1))
			{
				if (IntToFloat(iLocal_47) > 100f)
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
		uVar1 = unk_0x2ADE2CEED2637E95();
		if (!unk_0x930F8FBB8E9537CC(uVar1))
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
	if (func_20(unk_0x81873881071CD9FE(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0xD81BC0FD4D47CC04(iParam0) && func_18(iParam0, 1) < 1.5f)
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
		if (!unk_0x930F8FBB8E9537CC(uParam1))
		{
			if (unk_0xBBEF8270CE27C0EE(iParam1, unk_0x81873881071CD9FE(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_18(int iParam0, int iParam1)
{
	return func_19(unk_0xE495E987CB2BE7EF(unk_0xEC537F0C0E8265EE()), iParam0, iParam1);
}

float func_19(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x930F8FBB8E9537CC(uParam0))
	{
		Var0 = { unk_0xB6AE0DAE06D56288(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xB6AE0DAE06D56288(iParam0, 0) };
	}
	if (!unk_0x930F8FBB8E9537CC(uParam1))
	{
		Var3 = { unk_0xB6AE0DAE06D56288(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xB6AE0DAE06D56288(iParam1, 0) };
	}
	return unk_0x0D6E79537424BACE(Var0, Var3, iParam2);
}

int func_20(int iParam0, int iParam1)
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

int func_21(int iParam0, int iParam1, var uParam2)
{
	if (unk_0x2B738BBCCA41F260(uParam0, 4))
	{
		if (unk_0xADBE95599A01932F(uParam0) && !unk_0xC0DEC39E5B9D1886(iParam0))
		{
			if (unk_0x515B65C19A5CA9B1(uParam1, unk_0xB6AE0DAE06D56288(iParam0, 1), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_22(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	int iVar3;
	
	iVar3 = 0;
	if (!unk_0x930F8FBB8E9537CC(uParam1))
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
	if (unk_0x2B738BBCCA41F260(uParam0, 2))
	{
		if (unk_0xADBE95599A01932F(uParam0))
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
			if (unk_0x2881A00480A747EC(iParam0) || func_23(iVar3))
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

int func_23(int iParam0)
{
	int iVar0;
	var uVar1;
	
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
						if (func_19(unk_0x81873881071CD9FE(), iParam0, 1) < 40f)
						{
							if (unk_0x257893CA44B56646(unk_0x1329891157A54C63(), &uVar1))
							{
								if ((unk_0xCF8AA94BAD0F766A(uVar1) && unk_0x522C7043B2B961F9(uVar1) == iParam0) || (unk_0xCF0C46D719D5302C(uVar1) && unk_0x8F1CCE5AF629C4D3(uVar1) == unk_0xB0B9E53CEFDB16AA(iParam0, -1)))
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

int func_24(int iParam0, var uParam1)
{
	if (!unk_0x930F8FBB8E9537CC(uParam0))
	{
		if (unk_0x2B738BBCCA41F260(unk_0x81873881071CD9FE(), 6))
		{
			if (unk_0xE8039CE2181EACCB(unk_0x1329891157A54C63(), iParam0) || unk_0x2449A722A5E85855(unk_0x1329891157A54C63(), iParam0))
			{
				if (unk_0x598CCC94D95857D9(iParam0, unk_0x81873881071CD9FE(), 90f))
				{
					if (func_18(iParam0, 1) < uParam1->f_2)
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

bool func_25(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_26(int iParam0)
{
	unk_0x8E4A427F5C43E416(*iParam0, joaat("weapon_assaultshotgun"), -1, 0, 1);
	unk_0x1D15D99A10A15334(*iParam0, 1);
	unk_0x4B9FA68A3AC8C29D(*iParam0, 13, 1);
	unk_0x4B9FA68A3AC8C29D(*iParam0, 0, 1);
	unk_0x632435B4905EF92E(*iParam0, 1);
	unk_0xA97FB3A1E6744863(*iParam0, 1);
	unk_0xCAF9ADC59A7B3305(*iParam0, 0f);
	unk_0x6CB332CB31E9FA96(*iParam0, 1);
	unk_0xD31C3826B16CD027(*iParam0, 100);
	unk_0x6D0DD3956DE3B78F(*iParam0, 2);
	unk_0x4B9FA68A3AC8C29D(*iParam0, 23, 0);
	unk_0xA867A6CA433961B0(*iParam0, 1000f);
	unk_0x4B9FA68A3AC8C29D(*iParam0, 1, 1);
}

void func_27()
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (bLocal_573)
	{
		if (!unk_0x930F8FBB8E9537CC(iLocal_568))
		{
			if (!unk_0xE20321A2D7F8960C(iLocal_568))
			{
				unk_0xC8F62804B10A6701(iLocal_568, 101, "PrisonHeli", 1);
			}
			if (!unk_0x930F8FBB8E9537CC(iLocal_569))
			{
				Var0 = { unk_0xB07F27EC3B05E4EA(iLocal_569, 0f, 4f, -2f) };
				unk_0x63133C3465BA5C3D(iLocal_569, Var0);
			}
			if (bLocal_571)
			{
				if (!func_28())
				{
					bLocal_571 = false;
					unk_0x87BE2E2A9B3D94F8(iLocal_568, 0, 0);
				}
			}
			else if (func_28())
			{
				bLocal_571 = true;
				unk_0x87BE2E2A9B3D94F8(iLocal_568, 1, 0);
			}
			if (bLocal_571)
			{
				Var3 = { unk_0xB6AE0DAE06D56288(iLocal_568, 1) };
				if (unk_0xB7A628320EFF8E47(Local_311, Var3) < 90000f)
				{
					if (!iLocal_572)
					{
						iLocal_572 = 1;
					}
				}
			}
		}
		else if (unk_0xFBACB273AA628CC5(uLocal_570))
		{
			unk_0x0A8175F24237A3D4(&uLocal_570);
		}
	}
}

int func_28()
{
	if (unk_0x0C937048CF6952B5() >= 20 || unk_0x0C937048CF6952B5() < 6)
	{
		return 1;
	}
	return 0;
}

void func_29()
{
	int iVar0;
	struct<3> Var1;
	
	if (!Local_628.f_18[0])
	{
		if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
		{
			Var1 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) };
		}
		if (!bLocal_105)
		{
			if (unk_0xB7A628320EFF8E47(Var1, Local_624) < 5625f)
			{
				iLocal_627 = 1;
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x5FEB513A4402FD59(Local_628.f_27[iVar0]))
		{
			if (!Local_628.f_18[iVar0])
			{
				if (func_16(Local_628.f_27[iVar0], 0, &Local_127, &uLocal_134, 1, 1, 0, 1, 1) || iLocal_627)
				{
					unk_0x633A554EB6BC4E71(Local_628.f_27[iVar0], unk_0x81873881071CD9FE(), 0, 16);
					Local_628.f_18[iVar0] = 1;
				}
			}
			if (!Local_628.f_18[iVar0])
			{
				if (!unk_0xAF67F8863F1E68BF(Local_628.f_27[iVar0]))
				{
					unk_0xDA3EE2B44E12D00C(Local_628.f_27[iVar0], Local_628.f_14[iVar0], 0, 0, -1);
				}
			}
		}
		else if (unk_0xFBACB273AA628CC5(Local_628.f_36[iVar0]))
		{
			unk_0x0A8175F24237A3D4(&(Local_628.f_36[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x86CCCD2FAE9D5E65(Local_628.f_31[iVar0]))
		{
			if (unk_0x5FEB513A4402FD59(Local_628.f_31[iVar0]))
			{
				if (unk_0xFBACB273AA628CC5(Local_628.f_40[iVar0]))
				{
					unk_0x0A8175F24237A3D4(&(Local_628.f_40[iVar0]));
				}
			}
		}
		iVar0++;
	}
	if (!Local_628.f_22[0])
	{
		if (!unk_0x5FEB513A4402FD59(Local_628.f_31[0]))
		{
			if ((func_16(Local_628.f_31[0], 0, &Local_127, &uLocal_134, 1, 1, 0, 1, 1) || Local_628.f_18[1] == 1) || iLocal_627)
			{
				unk_0x27CC98B7C879C320(Local_628.f_31[0]);
				unk_0x633A554EB6BC4E71(Local_628.f_31[0], unk_0x81873881071CD9FE(), 0, 16);
				Local_628.f_22[0] = 1;
			}
		}
	}
	if (!Local_628.f_22[1])
	{
		if (!unk_0x5FEB513A4402FD59(Local_628.f_31[1]))
		{
			if ((func_16(Local_628.f_31[1], 0, &Local_127, &uLocal_134, 0, 1, 0, 1, 1) || Local_628.f_18[1] == 1) || iLocal_627)
			{
				unk_0x27CC98B7C879C320(Local_628.f_31[1]);
				unk_0x633A554EB6BC4E71(Local_628.f_31[1], unk_0x81873881071CD9FE(), 0, 16);
				Local_628.f_22[1] = 1;
			}
		}
	}
	if (!Local_628.f_22[2])
	{
		if (!unk_0x5FEB513A4402FD59(Local_628.f_31[2]))
		{
			if ((func_16(Local_628.f_31[2], 0, &Local_127, &uLocal_134, 0, 1, 0, 1, 1) || Local_628.f_18[2] == 1) || iLocal_627)
			{
				unk_0x27CC98B7C879C320(Local_628.f_31[2]);
				unk_0x633A554EB6BC4E71(Local_628.f_31[2], unk_0x81873881071CD9FE(), 0, 16);
				Local_628.f_22[2] = 1;
			}
		}
	}
	if (!Local_628.f_22[3])
	{
		if (!unk_0x5FEB513A4402FD59(Local_628.f_31[3]))
		{
			if ((func_16(Local_628.f_31[3], 0, &Local_127, &uLocal_134, 0, 1, 0, 1, 1) || Local_628.f_18[2] == 1) || iLocal_627)
			{
				unk_0x27CC98B7C879C320(Local_628.f_31[3]);
				unk_0x633A554EB6BC4E71(Local_628.f_31[3], unk_0x81873881071CD9FE(), 0, 16);
				Local_628.f_22[3] = 1;
			}
		}
	}
	if (!unk_0x5FEB513A4402FD59(Local_628.f_27[1]))
	{
		if (unk_0xAF67F8863F1E68BF(Local_628.f_27[1]))
		{
			if (!Local_628.f_22[0])
			{
				if (!unk_0x5FEB513A4402FD59(Local_628.f_31[0]))
				{
					unk_0x874614DC82BB9C8A(Local_628.f_31[0], Local_628.f_27[1], -2f, 0f, 0f, 1f, -1, 1036831949, 1);
				}
			}
			if (!Local_628.f_22[1])
			{
				if (!unk_0x5FEB513A4402FD59(Local_628.f_31[1]))
				{
					unk_0x874614DC82BB9C8A(Local_628.f_31[1], Local_628.f_27[1], -1f, 0f, 0f, 1f, -1, 1036831949, 1);
				}
			}
		}
	}
	if (!unk_0x5FEB513A4402FD59(Local_628.f_27[2]))
	{
		if (unk_0xAF67F8863F1E68BF(Local_628.f_27[2]))
		{
			if (!Local_628.f_22[2])
			{
				if (!unk_0x5FEB513A4402FD59(Local_628.f_31[2]))
				{
					unk_0x874614DC82BB9C8A(Local_628.f_31[2], Local_628.f_27[2], 1f, 0f, 0f, 1f, -1, 1036831949, 1);
				}
			}
			if (!Local_628.f_22[3])
			{
				if (!unk_0x5FEB513A4402FD59(Local_628.f_31[3]))
				{
					unk_0x874614DC82BB9C8A(Local_628.f_31[3], Local_628.f_27[2], -1f, 0f, 0f, 1f, -1, 1036831949, 1);
				}
			}
		}
	}
}

void func_30()
{
	int iVar0;
	struct<3> Var1;
	
	iLocal_418++;
	if (iLocal_418 >= 30)
	{
		if (!bLocal_105)
		{
			if (func_15(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), 4, 100, 0))
			{
				iVar0 = 0;
				while (iVar0 < 10)
				{
					if (unk_0x86CCCD2FAE9D5E65(Local_317.f_64[iVar0]) && !unk_0x5FEB513A4402FD59(Local_317.f_64[iVar0]))
					{
						if (unk_0x212579F7919ACAFB(unk_0x81873881071CD9FE()) != -1)
						{
							if (unk_0x212579F7919ACAFB(unk_0x81873881071CD9FE()) == 1 || unk_0x212579F7919ACAFB(unk_0x81873881071CD9FE()) == 2)
							{
								unk_0xD31C3826B16CD027(Local_317.f_64[iVar0], 10);
								iLocal_417 = 1;
							}
						}
						else if (unk_0x73513C0B8FDDCF2F(unk_0x81873881071CD9FE()))
						{
							unk_0xD31C3826B16CD027(Local_317.f_64[iVar0], 10);
							iLocal_417 = 1;
						}
						else
						{
							unk_0xD31C3826B16CD027(Local_317.f_64[iVar0], 100);
							iLocal_417 = 1;
						}
					}
					iVar0++;
				}
			}
			else
			{
				iLocal_417 = 0;
			}
		}
		iLocal_418 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x86CCCD2FAE9D5E65(Local_317.f_64[iVar0]) && !unk_0x5FEB513A4402FD59(Local_317.f_64[iVar0]))
		{
			if (unk_0x9C85ECF581158409(unk_0xEC537F0C0E8265EE(), 0))
			{
				unk_0xDF7972620F9AA146(unk_0x1329891157A54C63());
			}
			if ((((func_16(Local_317.f_64[iVar0], 0, &Local_127, &uLocal_134, 0, 1, 0, 1, 1) || unk_0x544121698BDAB87E(Local_317[iVar0 /*3*/], 20f, 1)) || unk_0x6C609B2592812E3A(Local_317[iVar0 /*3*/] - Vector(20f, 20f, 20f), Local_317[iVar0 /*3*/] + Vector(20f, 20f, 20f))) || iLocal_417) || func_32(&(Local_317.f_64[iVar0])))
			{
				if (!func_2(5))
				{
					if (unk_0x73513C0B8FDDCF2F(unk_0x81873881071CD9FE()))
					{
						if (bLocal_118)
						{
							func_31(iVar0);
						}
					}
					else
					{
						func_31(iVar0);
					}
				}
			}
			else if (unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) == 0)
			{
				if (!unk_0xAF67F8863F1E68BF(Local_317.f_64[iVar0]))
				{
					unk_0xDA3EE2B44E12D00C(Local_317.f_64[iVar0], Local_317.f_42[iVar0], 0, 0, -1);
					Local_317.f_53[iVar0] = 0;
				}
			}
		}
		else if (unk_0xFBACB273AA628CC5(Local_317.f_75[iVar0]))
		{
			unk_0x0A8175F24237A3D4(&(Local_317.f_75[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (((unk_0x86CCCD2FAE9D5E65(uLocal_407[iVar0]) && !unk_0x930F8FBB8E9537CC(uLocal_407[iVar0])) && unk_0x86CCCD2FAE9D5E65(uLocal_403[iVar0])) && !unk_0x930F8FBB8E9537CC(uLocal_403[iVar0]))
		{
			Var1 = { unk_0xB07F27EC3B05E4EA(uLocal_407[iVar0], 0f, 3.5f, -2f) };
			unk_0x63133C3465BA5C3D(uLocal_407[iVar0], Var1);
			unk_0x686D6CDC14C4BA6C(uLocal_403[iVar0], 0, 0);
			if (iLocal_411[iVar0])
			{
				if (!func_28())
				{
					if (!unk_0x930F8FBB8E9537CC(uLocal_403[iVar0]))
					{
						iLocal_411[iVar0] = 0;
						unk_0x87BE2E2A9B3D94F8(uLocal_403[iVar0], 0, 0);
					}
				}
			}
			else if (func_28())
			{
				if (!unk_0x930F8FBB8E9537CC(uLocal_403[iVar0]))
				{
					iLocal_411[iVar0] = 1;
					unk_0x87BE2E2A9B3D94F8(uLocal_403[iVar0], 1, 0);
				}
			}
		}
		iVar0++;
	}
	if (fLocal_415 > 20f)
	{
		bLocal_416 = false;
	}
	else if (fLocal_415 < -20f)
	{
		bLocal_416 = true;
	}
	if (bLocal_416)
	{
		fLocal_415 = (fLocal_415 + 0.25f);
	}
	else
	{
		fLocal_415 = (fLocal_415 - 0.25f);
	}
	if (unk_0x86CCCD2FAE9D5E65(uLocal_403[0]))
	{
		unk_0xC24172029826A66F(uLocal_403[0], (53f + fLocal_415));
	}
	if (unk_0x86CCCD2FAE9D5E65(uLocal_403[1]))
	{
		unk_0xC24172029826A66F(uLocal_403[1], (13f + fLocal_415));
	}
	if (unk_0x86CCCD2FAE9D5E65(uLocal_403[2]))
	{
		unk_0xC24172029826A66F(uLocal_403[2], (250f + fLocal_415));
	}
}

void func_31(int iParam0)
{
	if (!Local_317.f_53[iParam0])
	{
		unk_0x2911FA855456BA78(Local_317.f_64[iParam0], unk_0x81873881071CD9FE(), -1, 0);
		unk_0xA867A6CA433961B0(Local_317.f_64[iParam0], 1000f);
		unk_0x4C0903A3599ABE7A(Local_317.f_64[iParam0]);
		Local_317.f_53[iParam0] = 1;
		if (unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) == 0)
		{
			unk_0xE9E74A97DB98B442(unk_0x1329891157A54C63(), 3, 0);
			unk_0x2E2A75923F20DCD2(unk_0x1329891157A54C63(), 0);
		}
	}
}

int func_32(var uParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
	{
		Var0 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) };
	}
	if (!unk_0x930F8FBB8E9537CC(*uParam0))
	{
		Var3 = { unk_0xB6AE0DAE06D56288(*uParam0, 1) };
	}
	if (unk_0xB7A628320EFF8E47(Var0, Var3) < 100f)
	{
		return 1;
	}
	return 0;
}

void func_33()
{
	if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
	{
		if (unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) >= 2 || func_15(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), 4, 150, 0))
		{
			if (unk_0x57C989847AA9C075("PRISON_ALARMS"))
			{
				unk_0xFEA6CFB6400EB32E("PRISON_ALARMS", 0);
			}
		}
		else
		{
			unk_0xF6B1673032299769("PRISON_ALARMS", 0);
		}
	}
}

void func_34()
{
	struct<3> Var0;
	
	if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
	{
		if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), 1840.23f, 2471.49f, 41.94113f, 1840.553f, 2751.983f, 54.68177f, 84.25f, 0, 1, 0))
		{
			func_57(&Local_127, 2);
		}
		else
		{
			func_55(&Local_127, 2);
		}
	}
	if (iLocal_48 > 20)
	{
		if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
		{
			Var0 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) };
			if (unk_0x73513C0B8FDDCF2F(unk_0x81873881071CD9FE()))
			{
				if (func_15(Var0, 4, 150, 0))
				{
					func_54(4, 1);
					if (!func_14(&uLocal_141))
					{
						func_11(&uLocal_141);
					}
					if (!bLocal_117)
					{
						if (unk_0x86CCCD2FAE9D5E65(iLocal_125) && !unk_0x930F8FBB8E9537CC(iLocal_125))
						{
							func_53(&uLocal_144, 8, iLocal_125, "TANNOY", 0, 1);
							if (func_37(&uLocal_144, "FH1AUD", "FH1_TANNOY", 8, 0, 0, 0))
							{
								bLocal_105 = true;
								bLocal_117 = true;
							}
						}
					}
				}
				else
				{
					func_54(4, 0);
					if (func_14(&uLocal_141))
					{
						func_12(&uLocal_141);
					}
					bLocal_105 = false;
				}
			}
			else
			{
				func_54(4, 0);
				if (func_14(&uLocal_141))
				{
					func_12(&uLocal_141);
				}
				bLocal_105 = false;
			}
			if (bLocal_105)
			{
				if (func_14(&uLocal_141))
				{
					if (func_8(&uLocal_141) > 10f)
					{
						if (unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) < 4)
						{
							unk_0xE9E74A97DB98B442(unk_0x1329891157A54C63(), 4, 0);
							unk_0x2E2A75923F20DCD2(unk_0x1329891157A54C63(), 0);
							bLocal_118 = true;
							bLocal_105 = false;
							func_54(4, 0);
						}
					}
				}
			}
			if (!bLocal_102)
			{
				if (bLocal_117)
				{
					if (!func_36())
					{
						if (unk_0x9C85ECF581158409(unk_0x1329891157A54C63(), 0))
						{
							unk_0x2B789CAC1EFE0ABB("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
							unk_0x2B789CAC1EFE0ABB("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", 1, 1);
							bLocal_102 = true;
						}
					}
				}
				else if (unk_0x9C85ECF581158409(unk_0x1329891157A54C63(), 0))
				{
					unk_0x2B789CAC1EFE0ABB("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
					unk_0x2B789CAC1EFE0ABB("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", 1, 1);
					bLocal_102 = true;
				}
			}
			if (!bLocal_105)
			{
				if (func_15(Var0, 4, 100, 0))
				{
					if (!bLocal_102)
					{
						if (bLocal_117)
						{
							if (!func_36())
							{
								unk_0x2B789CAC1EFE0ABB("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
								unk_0x2B789CAC1EFE0ABB("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", 1, 1);
								bLocal_102 = true;
							}
						}
						else
						{
							unk_0x2B789CAC1EFE0ABB("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_GENERAL", 0, 1);
							unk_0x2B789CAC1EFE0ABB("AZ_COUNTRYSIDE_PRISON_01_ANNOUNCER_ALARM", 1, 1);
							bLocal_102 = true;
						}
					}
					func_35();
				}
			}
			iLocal_48 = 0;
		}
	}
	iLocal_48++;
}

void func_35()
{
	int iVar0;
	
	if (!iLocal_101)
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			uLocal_51[iVar0] = unk_0x5BF7BCF26E3E564B(Local_64[iVar0 /*3*/], 10f, 10f, 10f, 0f, 0, 7);
			iVar0++;
		}
		iLocal_101 = 1;
	}
}

int func_36()
{
	if (Global_15693 != 0 || unk_0xE1772957381F609F())
	{
		return 1;
	}
	return 0;
}

bool func_37(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_52(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_38(sParam2, iParam3, 0);
}

int func_38(char* sParam0, int iParam1, bool bParam2)
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
					func_51();
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
		if (func_50(8, -1))
		{
			return 0;
		}
		Global_15769 = { Global_15763 };
		func_49();
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
				func_43();
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
				if (func_42())
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
			if (func_41())
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
			func_40();
			Global_15703 = bParam2;
		}
		Global_15695 = iParam1;
		StringCopy(&Global_15312, sParam0, 24);
		Global_14559 = 0;
		func_39();
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
		func_51();
	}
	return 0;
}

void func_39()
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

void func_40()
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

int func_41()
{
	if (Global_14394.f_1 == 1 || Global_14394.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_42()
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

void func_43()
{
	if (func_2(14))
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
		Global_14394 = func_44();
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

var func_44()
{
	func_45();
	return Global_98931.f_1750.f_539.f_3549;
}

void func_45()
{
	int iVar0;
	
	if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
	{
		if (func_48(Global_98931.f_1750.f_539.f_3549) != unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()))
		{
			iVar0 = func_47(unk_0x81873881071CD9FE());
			if (func_46(iVar0) && (!func_2(14) || Global_97883))
			{
				if (Global_98931.f_1750.f_539.f_3549 != iVar0 && func_46(Global_98931.f_1750.f_539.f_3549))
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

bool func_46(int iParam0)
{
	return iParam0 < 3;
}

int func_47(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		iVar1 = unk_0x14B7103DBD149FFE(iParam0);
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
	if (func_46(iParam0))
	{
		return Global_98931.f_32499[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_49()
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

bool func_50(int iParam0, int iParam1)
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

void func_51()
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

void func_52(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15147 = { *uParam0 };
	Global_1580 = iParam1;
	StringCopy(&Global_15763, sParam2, 24);
	Global_16682 = uParam5;
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

void func_53(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69020)
	{
		if (!unk_0x5FEB513A4402FD59(uParam2))
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

void func_54(int iParam0, int iParam1)
{
	unk_0xF3148AAF69AF9CBC(&Global_25103, iParam0);
	StringCopy(&(Global_25104[iParam0 /*6*/]), unk_0x11CA2334E341B424(), 24);
	Global_25159[iParam0] = iParam1;
}

void func_55(var uParam0, int iParam1)
{
	func_56(uParam0, iParam1);
}

void func_56(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_57(var uParam0, int iParam1)
{
	func_58(uParam0, iParam1);
}

void func_58(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_59()
{
	unk_0x887F4488DA99FD21(joaat("s_m_m_security_01"));
	unk_0x887F4488DA99FD21(joaat("s_m_m_prisguard_01"));
}

void func_60()
{
	func_62();
	func_61();
}

void func_61()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x86CCCD2FAE9D5E65(Local_628.f_27[iVar0]) && !unk_0x930F8FBB8E9537CC(Local_628.f_27[iVar0]))
		{
			unk_0x8E4A427F5C43E416(Local_628.f_27[iVar0], joaat("weapon_assaultrifle"), -1, 1, 1);
			unk_0x6927F8C100125A71(Local_628.f_27[iVar0], 1000);
			unk_0x506A601663C5417C(Local_628.f_27[iVar0], -183807561);
			unk_0x48D0113FA38ED789(Local_628.f_27[iVar0], 0);
			unk_0x1D15D99A10A15334(Local_628.f_27[iVar0], 1);
			if (!unk_0x5FEB513A4402FD59(Local_628.f_27[iVar0]))
			{
				unk_0xDA3EE2B44E12D00C(Local_628.f_27[iVar0], Local_628.f_14[iVar0], 0, 0, -1);
			}
		}
		iVar0++;
	}
}

void func_62()
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x86CCCD2FAE9D5E65(Local_628.f_27[iVar0]))
		{
			Local_628.f_27[iVar0] = unk_0x206897C6DBC12488(6, joaat("s_m_m_prisguard_01"), Local_628[iVar0 /*3*/], Local_628.f_10[iVar0], 1, 1);
			unk_0x4EDE34FBADD967A6(0);
		}
		iVar0++;
	}
	Var1 = { unk_0x957F1AE07A974C5E(Local_628[1 /*3*/], Local_628.f_10[1], -2f, 0f, 0f) };
	Var4 = { unk_0x957F1AE07A974C5E(Local_628[1 /*3*/], Local_628.f_10[1], -1f, 0f, 0f) };
	Var7 = { unk_0x957F1AE07A974C5E(Local_628[2 /*3*/], Local_628.f_10[2], 1f, 0f, 0f) };
	Var10 = { unk_0x957F1AE07A974C5E(Local_628[2 /*3*/], Local_628.f_10[2], -1f, 0f, 0f) };
	Local_628.f_31[0] = unk_0x206897C6DBC12488(6, joaat("s_m_m_prisguard_01"), Var1, Local_628.f_10[1], 1, 1);
	Local_628.f_31[1] = unk_0x206897C6DBC12488(6, joaat("s_m_m_prisguard_01"), Var4, Local_628.f_10[1], 1, 1);
	Local_628.f_31[2] = unk_0x206897C6DBC12488(6, joaat("s_m_m_prisguard_01"), Var7, Local_628.f_10[2], 1, 1);
	Local_628.f_31[3] = unk_0x206897C6DBC12488(6, joaat("s_m_m_prisguard_01"), Var10, Local_628.f_10[2], 1, 1);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x86CCCD2FAE9D5E65(Local_628.f_31[iVar0]))
		{
			unk_0x8E4A427F5C43E416(Local_628.f_31[iVar0], joaat("weapon_assaultrifle"), -1, 1, 1);
			unk_0x6927F8C100125A71(Local_628.f_31[iVar0], 500);
			unk_0x506A601663C5417C(Local_628.f_31[iVar0], -183807561);
			unk_0x2E989A4B91651967(Local_628.f_31[iVar0], 0);
			unk_0x1D15D99A10A15334(Local_628.f_31[iVar0], 1);
		}
		iVar0++;
	}
	unk_0x887F4488DA99FD21(joaat("s_m_m_prisguard_01"));
}

void func_63()
{
	if (bLocal_573)
	{
		iLocal_568 = unk_0xE00F8DEA9778FC87(joaat("polmav"), 10f, 10f, -30f, 0f, 1, 1);
		unk_0x686D6CDC14C4BA6C(iLocal_568, 1, 1);
		unk_0x50638C188ABB218B(iLocal_568);
		unk_0x5FAEE66A01F82335(iLocal_568, 0f, 0f, 10f);
		unk_0x6927F8C100125A71(iLocal_568, 500);
		if (func_28())
		{
			bLocal_571 = true;
			unk_0x87BE2E2A9B3D94F8(iLocal_568, 1, 0);
		}
		iLocal_569 = unk_0x206897C6DBC12488(6, joaat("s_m_m_prisguard_01"), 10f, 10f, -20f, 0f, 1, 1);
		unk_0xDC81A805934C85CD(iLocal_569, iLocal_568, -1);
		if (!unk_0x930F8FBB8E9537CC(iLocal_568))
		{
			unk_0xC8F62804B10A6701(iLocal_568, 101, "PrisonHeli", 1);
		}
		unk_0x887F4488DA99FD21(joaat("polmav"));
	}
}

void func_64()
{
	func_69();
	func_68();
	func_67();
	func_66();
	func_65();
}

void func_65()
{
	Local_419[0 /*13*/][0 /*3*/] = { 1827.69f, 2474.181f, 61.7202f };
	Local_419[0 /*13*/][1 /*3*/] = { 1826.054f, 2478.934f, 61.7157f };
	Local_419[0 /*13*/][2 /*3*/] = { 1820.909f, 2477.528f, 61.7153f };
	Local_419[0 /*13*/][3 /*3*/] = { 1822.585f, 2472.122f, 61.7167f };
	unk_0x68FC6C5193E92FE6("miss_Tower_01");
	unk_0x824941077A5D7A0C(0, "WORLD_HUMAN_GUARD_STAND", Local_419[0 /*13*/][0 /*3*/], 1879.944f, 2461.988f, 53.5496f, unk_0x2E0A9E3291F398E3(5000, 10000));
	unk_0x824941077A5D7A0C(1, "WORLD_HUMAN_GUARD_STAND", Local_419[0 /*13*/][1 /*3*/], 1831.631f, 2522.218f, 54.1376f, unk_0x2E0A9E3291F398E3(5000, 10000));
	unk_0x824941077A5D7A0C(2, "WORLD_HUMAN_GUARD_STAND", Local_419[0 /*13*/][2 /*3*/], 1789.07f, 2490.558f, 54.1381f, unk_0x2E0A9E3291F398E3(5000, 10000));
	unk_0x824941077A5D7A0C(3, "WORLD_HUMAN_GUARD_STAND", Local_419[0 /*13*/][3 /*3*/], 1789.8f, 2426.876f, 44.7729f, unk_0x2E0A9E3291F398E3(5000, 10000));
	unk_0x5CB9DD796A8ECC3E(0, 1);
	unk_0x5CB9DD796A8ECC3E(1, 2);
	unk_0x5CB9DD796A8ECC3E(2, 3);
	unk_0x5CB9DD796A8ECC3E(3, 0);
	unk_0x1FA7F8E01176D1BA();
	unk_0x0241E3953C6B8442();
	Local_419[1 /*13*/][0 /*3*/] = { 1764.729f, 2409.139f, 61.7533f };
	Local_419[1 /*13*/][1 /*3*/] = { 1763.129f, 2413.976f, 61.7328f };
	Local_419[1 /*13*/][2 /*3*/] = { 1758.079f, 2411.984f, 61.7403f };
	Local_419[1 /*13*/][3 /*3*/] = { 1760.213f, 2406.827f, 61.7419f };
	unk_0x68FC6C5193E92FE6("miss_Tower_02");
	unk_0x824941077A5D7A0C(0, "WORLD_HUMAN_GUARD_STAND", Local_419[1 /*13*/][0 /*3*/], 1879.944f, 2461.988f, 53.5496f, unk_0x2E0A9E3291F398E3(5000, 10000));
	unk_0x824941077A5D7A0C(1, "WORLD_HUMAN_GUARD_STAND", Local_419[1 /*13*/][1 /*3*/], 1831.631f, 2522.218f, 54.1376f, unk_0x2E0A9E3291F398E3(5000, 10000));
	unk_0x824941077A5D7A0C(2, "WORLD_HUMAN_GUARD_STAND", Local_419[1 /*13*/][2 /*3*/], 1789.07f, 2490.558f, 54.1381f, unk_0x2E0A9E3291F398E3(5000, 10000));
	unk_0x824941077A5D7A0C(3, "WORLD_HUMAN_GUARD_STAND", Local_419[1 /*13*/][3 /*3*/], 1789.8f, 2426.876f, 44.7729f, unk_0x2E0A9E3291F398E3(5000, 10000));
	unk_0x5CB9DD796A8ECC3E(0, 1);
	unk_0x5CB9DD796A8ECC3E(1, 2);
	unk_0x5CB9DD796A8ECC3E(2, 3);
	unk_0x5CB9DD796A8ECC3E(3, 0);
	unk_0x1FA7F8E01176D1BA();
	unk_0x0241E3953C6B8442();
	Local_419[2 /*13*/][0 /*3*/] = { 1658.829f, 2390.888f, 61.7462f };
	Local_419[2 /*13*/][1 /*3*/] = { 1662.521f, 2394.692f, 61.7532f };
	Local_419[2 /*13*/][2 /*3*/] = { 1658.854f, 2398.062f, 61.7573f };
	Local_419[2 /*13*/][3 /*3*/] = { 1655.15f, 2394.705f, 61.7429f };
	unk_0x68FC6C5193E92FE6("miss_Tower_03");
	unk_0x824941077A5D7A0C(0, "WORLD_HUMAN_GUARD_STAND", Local_419[2 /*13*/][0 /*3*/], 1655.908f, 2349.021f, 55.1775f, unk_0x2E0A9E3291F398E3(5000, 10000));
	unk_0x824941077A5D7A0C(1, "WORLD_HUMAN_GUARD_STAND", Local_419[2 /*13*/][1 /*3*/], 1733.875f, 2385.521f, 44.9049f, unk_0x2E0A9E3291F398E3(5000, 10000));
	unk_0x824941077A5D7A0C(2, "WORLD_HUMAN_GUARD_STAND", Local_419[2 /*13*/][2 /*3*/], 1662.234f, 2446.357f, 44.5652f, unk_0x2E0A9E3291F398E3(5000, 10000));
	unk_0x824941077A5D7A0C(3, "WORLD_HUMAN_GUARD_STAND", Local_419[2 /*13*/][3 /*3*/], 1524.631f, 2426.997f, 44.6212f, unk_0x2E0A9E3291F398E3(5000, 10000));
	unk_0x5CB9DD796A8ECC3E(0, 1);
	unk_0x5CB9DD796A8ECC3E(1, 2);
	unk_0x5CB9DD796A8ECC3E(2, 3);
	unk_0x5CB9DD796A8ECC3E(3, 0);
	unk_0x1FA7F8E01176D1BA();
	unk_0x0241E3953C6B8442();
	Local_419[3 /*13*/][0 /*3*/] = { 1537.28f, 2468.338f, 61.7497f };
	Local_419[3 /*13*/][1 /*3*/] = { 1542.189f, 2465.756f, 61.7247f };
	Local_419[3 /*13*/][2 /*3*/] = { 1543.899f, 2470.971f, 61.7482f };
	Local_419[3 /*13*/][3 /*3*/] = { 1539.14f, 2473.264f, 61.7359f };
	unk_0x68FC6C5193E92FE6("miss_Tower_04");
	unk_0x824941077A5D7A0C(0, "WORLD_HUMAN_GUARD_STAND", Local_419[3 /*13*/][0 /*3*/], 1455.081f, 2432.642f, 51.3366f, unk_0x2E0A9E3291F398E3(5000, 10000));
	unk_0x824941077A5D7A0C(1, "WORLD_HUMAN_GUARD_STAND", Local_419[3 /*13*/][1 /*3*/], 1576.174f, 2407.076f, 44.8143f, unk_0x2E0A9E3291F398E3(5000, 10000));
	unk_0x824941077A5D7A0C(2, "WORLD_HUMAN_GUARD_STAND", Local_419[3 /*13*/][2 /*3*/], 1578.1f, 2486.227f, 44.5655f, unk_0x2E0A9E3291F398E3(5000, 10000));
	unk_0x824941077A5D7A0C(3, "WORLD_HUMAN_GUARD_STAND", Local_419[3 /*13*/][3 /*3*/], 1512.837f, 2560.419f, 44.8417f, unk_0x2E0A9E3291F398E3(5000, 10000));
	unk_0x5CB9DD796A8ECC3E(0, 1);
	unk_0x5CB9DD796A8ECC3E(1, 2);
	unk_0x5CB9DD796A8ECC3E(2, 3);
	unk_0x5CB9DD796A8ECC3E(3, 0);
	unk_0x1FA7F8E01176D1BA();
	unk_0x0241E3953C6B8442();
	Local_419[4 /*13*/][0 /*3*/] = { 1535.098f, 2581.919f, 61.7312f };
	Local_419[4 /*13*/][1 /*3*/] = { 1535.124f, 2581.101f, 61.7002f };
	Local_419[4 /*13*/][2 /*3*/] = { 1538.325f, 2585.722f, 61.7251f };
	Local_419[4 /*13*/][3 /*3*/] = { 1534.679f, 2589.268f, 61.7123f };
	unk_0x68FC6C5193E92FE6("miss_Tower_05");
	unk_0x824941077A5D7A0C(0, "WORLD_HUMAN_GUARD_STAND", Local_419[4 /*13*/][0 /*3*/], 1484.2f, 2584.409f, 51.9283f, unk_0x2E0A9E3291F398E3(5000, 10000));
	unk_0x824941077A5D7A0C(1, "WORLD_HUMAN_GUARD_STAND", Local_419[4 /*13*/][1 /*3*/], 1535.154f, 2538.926f, 44.496f, unk_0x2E0A9E3291F398E3(5000, 10000));
	unk_0x824941077A5D7A0C(2, "WORLD_HUMAN_GUARD_STAND", Local_419[4 /*13*/][2 /*3*/], 1570.661f, 2587.814f, 44.5655f, unk_0x2E0A9E3291F398E3(5000, 10000));
	unk_0x824941077A5D7A0C(3, "WORLD_HUMAN_GUARD_STAND", Local_419[4 /*13*/][3 /*3*/], 1538.227f, 2655.531f, 44.9156f, unk_0x2E0A9E3291F398E3(5000, 10000));
	unk_0x5CB9DD796A8ECC3E(0, 1);
	unk_0x5CB9DD796A8ECC3E(1, 2);
	unk_0x5CB9DD796A8ECC3E(2, 3);
	unk_0x5CB9DD796A8ECC3E(3, 0);
	unk_0x1FA7F8E01176D1BA();
	unk_0x0241E3953C6B8442();
	Local_419[5 /*13*/][0 /*3*/] = { 1566.921f, 2682.525f, 61.7716f };
	Local_419[5 /*13*/][1 /*3*/] = { 1567.927f, 2677.463f, 61.7741f };
	Local_419[5 /*13*/][2 /*3*/] = { 1572.574f, 2678.193f, 61.7702f };
	Local_419[5 /*13*/][3 /*3*/] = { 1572.359f, 2683.086f, 61.7664f };
	unk_0x68FC6C5193E92FE6("miss_Tower_06");
	unk_0x824941077A5D7A0C(0, "WORLD_HUMAN_GUARD_STAND", Local_419[5 /*13*/][0 /*3*/], 1505.538f, 2727.242f, 37.6965f, unk_0x2E0A9E3291F398E3(5000, 10000));
	unk_0x824941077A5D7A0C(1, "WORLD_HUMAN_GUARD_STAND", Local_419[5 /*13*/][1 /*3*/], 1545.95f, 2632.524f, 44.7178f, unk_0x2E0A9E3291F398E3(5000, 10000));
	unk_0x824941077A5D7A0C(2, "WORLD_HUMAN_GUARD_STAND", Local_419[5 /*13*/][2 /*3*/], 1599.355f, 2658.319f, 44.5652f, unk_0x2E0A9E3291F398E3(5000, 10000));
	unk_0x824941077A5D7A0C(3, "WORLD_HUMAN_GUARD_STAND", Local_419[5 /*13*/][3 /*3*/], 1599.041f, 2713.393f, 44.4309f, unk_0x2E0A9E3291F398E3(5000, 10000));
	unk_0x5CB9DD796A8ECC3E(0, 1);
	unk_0x5CB9DD796A8ECC3E(1, 2);
	unk_0x5CB9DD796A8ECC3E(2, 3);
	unk_0x5CB9DD796A8ECC3E(3, 0);
	unk_0x1FA7F8E01176D1BA();
	unk_0x0241E3953C6B8442();
	Local_419[6 /*13*/][0 /*3*/] = { 1648.104f, 2761.528f, 61.9103f };
	Local_419[6 /*13*/][1 /*3*/] = { 1646.051f, 2756.671f, 61.9091f };
	Local_419[6 /*13*/][2 /*3*/] = { 1651.533f, 2754.668f, 61.9021f };
	Local_419[6 /*13*/][3 /*3*/] = { 1653.125f, 2759.327f, 61.9056f };
	unk_0x68FC6C5193E92FE6("miss_Tower_07");
	unk_0x824941077A5D7A0C(0, "WORLD_HUMAN_GUARD_STAND", Local_419[6 /*13*/][0 /*3*/], 1606.661f, 2815.673f, 37.9512f, unk_0x2E0A9E3291F398E3(5000, 10000));
	unk_0x824941077A5D7A0C(1, "WORLD_HUMAN_GUARD_STAND", Local_419[6 /*13*/][1 /*3*/], 1602.887f, 2721.398f, 44.651f, unk_0x2E0A9E3291F398E3(5000, 10000));
	unk_0x824941077A5D7A0C(2, "WORLD_HUMAN_GUARD_STAND", Local_419[6 /*13*/][2 /*3*/], 1599.355f, 2658.319f, 44.5652f, unk_0x2E0A9E3291F398E3(5000, 10000));
	unk_0x824941077A5D7A0C(3, "WORLD_HUMAN_GUARD_STAND", Local_419[6 /*13*/][3 /*3*/], 1719.225f, 2766.111f, 44.6846f, unk_0x2E0A9E3291F398E3(5000, 10000));
	unk_0x5CB9DD796A8ECC3E(0, 1);
	unk_0x5CB9DD796A8ECC3E(1, 2);
	unk_0x5CB9DD796A8ECC3E(2, 3);
	unk_0x5CB9DD796A8ECC3E(3, 0);
	unk_0x1FA7F8E01176D1BA();
	unk_0x0241E3953C6B8442();
	Local_419[7 /*13*/][0 /*3*/] = { 1774.523f, 2766.559f, 61.9143f };
	Local_419[7 /*13*/][1 /*3*/] = { 1769.768f, 2763.816f, 61.9248f };
	Local_419[7 /*13*/][2 /*3*/] = { 1772.442f, 2759.139f, 61.9193f };
	Local_419[7 /*13*/][3 /*3*/] = { 1776.893f, 2762.356f, 61.9258f };
	unk_0x68FC6C5193E92FE6("miss_Tower_08");
	unk_0x824941077A5D7A0C(0, "WORLD_HUMAN_GUARD_STAND", Local_419[7 /*13*/][0 /*3*/], 1783.204f, 2811.375f, 44.4414f, unk_0x2E0A9E3291F398E3(5000, 10000));
	unk_0x824941077A5D7A0C(1, "WORLD_HUMAN_GUARD_STAND", Local_419[7 /*13*/][1 /*3*/], 1709.275f, 2764.432f, 44.5747f, unk_0x2E0A9E3291F398E3(5000, 10000));
	unk_0x824941077A5D7A0C(2, "WORLD_HUMAN_GUARD_STAND", Local_419[7 /*13*/][2 /*3*/], 1599.355f, 2658.319f, 44.5652f, unk_0x2E0A9E3291F398E3(5000, 10000));
	unk_0x824941077A5D7A0C(3, "WORLD_HUMAN_GUARD_STAND", Local_419[7 /*13*/][3 /*3*/], 1822.456f, 2749.189f, 44.9326f, unk_0x2E0A9E3291F398E3(5000, 10000));
	unk_0x5CB9DD796A8ECC3E(0, 1);
	unk_0x5CB9DD796A8ECC3E(1, 2);
	unk_0x5CB9DD796A8ECC3E(2, 3);
	unk_0x5CB9DD796A8ECC3E(3, 0);
	unk_0x1FA7F8E01176D1BA();
	unk_0x0241E3953C6B8442();
	Local_419[9 /*13*/][0 /*3*/] = { 1824.288f, 2625.042f, 61.9749f };
	Local_419[9 /*13*/][1 /*3*/] = { 1820.524f, 2621.49f, 61.9951f };
	Local_419[9 /*13*/][2 /*3*/] = { 1820.414f, 2621.544f, 61.9908f };
	Local_419[9 /*13*/][3 /*3*/] = { 1823.45f, 2617.477f, 61.9829f };
	unk_0x68FC6C5193E92FE6("miss_Tower_10");
	unk_0x824941077A5D7A0C(0, "WORLD_HUMAN_GUARD_STAND", Local_419[9 /*13*/][0 /*3*/], 1606.661f, 2815.673f, 37.9512f, unk_0x2E0A9E3291F398E3(5000, 10000));
	unk_0x824941077A5D7A0C(1, "WORLD_HUMAN_GUARD_STAND", Local_419[9 /*13*/][1 /*3*/], 1602.887f, 2721.398f, 44.651f, unk_0x2E0A9E3291F398E3(5000, 10000));
	unk_0x824941077A5D7A0C(2, "WORLD_HUMAN_GUARD_STAND", Local_419[9 /*13*/][2 /*3*/], 1599.355f, 2658.319f, 44.5652f, unk_0x2E0A9E3291F398E3(5000, 10000));
	unk_0x824941077A5D7A0C(3, "WORLD_HUMAN_GUARD_STAND", Local_419[9 /*13*/][3 /*3*/], 1719.225f, 2766.111f, 44.6846f, unk_0x2E0A9E3291F398E3(5000, 10000));
	unk_0x5CB9DD796A8ECC3E(0, 1);
	unk_0x5CB9DD796A8ECC3E(1, 2);
	unk_0x5CB9DD796A8ECC3E(2, 3);
	unk_0x5CB9DD796A8ECC3E(3, 0);
	unk_0x1FA7F8E01176D1BA();
	unk_0x0241E3953C6B8442();
}

void func_66()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x86CCCD2FAE9D5E65(Local_317.f_64[iVar0]) && !unk_0x930F8FBB8E9537CC(Local_317.f_64[iVar0]))
		{
			unk_0x506A601663C5417C(Local_317.f_64[iVar0], -183807561);
			unk_0xCE566DBDCACD245E(Local_317.f_64[iVar0], 132, 1);
			unk_0x202C32B2DC830B02(Local_317.f_64[iVar0], 300f, 10);
			unk_0xA867A6CA433961B0(Local_317.f_64[iVar0], 1000f);
			unk_0x1EE86E31A7BA93D4(Local_317.f_64[iVar0], 1000f);
			unk_0x8356A82AC98ECE3D(Local_317.f_64[iVar0], 1000f);
			unk_0xA161142D1C595060(Local_317.f_64[iVar0], 2);
			unk_0x4B9FA68A3AC8C29D(Local_317.f_64[iVar0], 13, 1);
			unk_0x4B9FA68A3AC8C29D(Local_317.f_64[iVar0], 0, 0);
			unk_0x632435B4905EF92E(Local_317.f_64[iVar0], 1);
			unk_0xA97FB3A1E6744863(Local_317.f_64[iVar0], 1);
			unk_0xCAF9ADC59A7B3305(Local_317.f_64[iVar0], 0f);
			unk_0x6CB332CB31E9FA96(Local_317.f_64[iVar0], 1);
			unk_0xD31C3826B16CD027(Local_317.f_64[iVar0], 20);
			unk_0x6D0DD3956DE3B78F(Local_317.f_64[iVar0], 2);
			unk_0x4B9FA68A3AC8C29D(Local_317.f_64[iVar0], 23, 0);
			unk_0x8E4A427F5C43E416(Local_317.f_64[iVar0], joaat("weapon_sniperrifle"), -1, 1, 1);
			unk_0x6927F8C100125A71(Local_317.f_64[iVar0], 1000);
			unk_0x1D15D99A10A15334(Local_317.f_64[iVar0], 1);
			unk_0xA867A6CA433961B0(Local_317.f_64[iVar0], 1000f);
			if (!unk_0x5FEB513A4402FD59(Local_317.f_64[iVar0]))
			{
				if (iVar0 == 0)
				{
					unk_0xBD93C94322D0E95B(Local_317.f_64[iVar0], "miss_Tower_01", 1, 0, 1);
				}
				else if (iVar0 == 1)
				{
					unk_0xBD93C94322D0E95B(Local_317.f_64[iVar0], "miss_Tower_02", 1, 0, 1);
				}
				else if (iVar0 == 2)
				{
					unk_0xBD93C94322D0E95B(Local_317.f_64[iVar0], "miss_Tower_03", 1, 0, 1);
				}
				else if (iVar0 == 3)
				{
					unk_0xBD93C94322D0E95B(Local_317.f_64[iVar0], "miss_Tower_04", 1, 0, 1);
				}
				else if (iVar0 == 4)
				{
					unk_0xBD93C94322D0E95B(Local_317.f_64[iVar0], "miss_Tower_05", 1, 0, 1);
				}
				else if (iVar0 == 5)
				{
					unk_0xBD93C94322D0E95B(Local_317.f_64[iVar0], "miss_Tower_06", 1, 0, 1);
				}
				else if (iVar0 == 6)
				{
					unk_0xBD93C94322D0E95B(Local_317.f_64[iVar0], "miss_Tower_07", 1, 0, 1);
				}
				else if (iVar0 == 7)
				{
					unk_0xBD93C94322D0E95B(Local_317.f_64[iVar0], "miss_Tower_08", 1, 0, 1);
				}
				else if (iVar0 == 9)
				{
					unk_0xBD93C94322D0E95B(Local_317.f_64[iVar0], "miss_Tower_10", 1, 0, 1);
				}
				else
				{
					unk_0xDA3EE2B44E12D00C(Local_317.f_64[iVar0], Local_317.f_42[iVar0], 0, 0, -1);
				}
			}
		}
		iVar0++;
	}
}

void func_67()
{
	int iVar0;
	
	if (!unk_0x547A2AA158CA2804(1823.845f, 2621.267f, 57f, 0.5f))
	{
		uLocal_403[0] = unk_0xE00F8DEA9778FC87(joaat("polmav"), 1823.845f, 2621.267f, 57f, 53f, 1, 1);
		if (unk_0x86CCCD2FAE9D5E65(uLocal_403[0]) && !unk_0x930F8FBB8E9537CC(uLocal_403[0]))
		{
			uLocal_407[0] = unk_0x4D135F3066A9BF9C(uLocal_403[0], 6, joaat("s_m_m_prisguard_01"), -1, 1, 1);
			unk_0x57B73553960790B6(uLocal_407[0], 0);
			unk_0x506A601663C5417C(uLocal_407[0], iLocal_315);
			unk_0x5CEA5F12775261F2(uLocal_403[0], 0, 0);
			unk_0xABA9860C0161F3CD(uLocal_403[0], 0);
			unk_0x57B73553960790B6(uLocal_403[0], 0);
			unk_0xA8F22633ACC22189(uLocal_403[0], 1);
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0x547A2AA158CA2804(1761.418f, 2410.378f, 61f, 0.5f))
	{
		uLocal_403[1] = unk_0xE00F8DEA9778FC87(joaat("polmav"), 1761.418f, 2410.378f, 61f, 13f, 1, 1);
		if (unk_0x86CCCD2FAE9D5E65(uLocal_403[1]) && !unk_0x930F8FBB8E9537CC(uLocal_403[1]))
		{
			uLocal_407[1] = unk_0x4D135F3066A9BF9C(uLocal_403[1], 6, joaat("s_m_m_prisguard_01"), -1, 1, 1);
			unk_0x57B73553960790B6(uLocal_407[1], 0);
			unk_0x506A601663C5417C(uLocal_407[1], iLocal_315);
			unk_0x5CEA5F12775261F2(uLocal_403[1], 0, 0);
			unk_0xABA9860C0161F3CD(uLocal_403[1], 0);
			unk_0x57B73553960790B6(uLocal_403[1], 0);
			unk_0xA8F22633ACC22189(uLocal_403[1], 1);
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0x547A2AA158CA2804(1534.635f, 2585.162f, 61f, 0.5f))
	{
		uLocal_403[2] = unk_0xE00F8DEA9778FC87(joaat("polmav"), 1534.635f, 2585.162f, 61f, 250f, 1, 1);
		if (unk_0x86CCCD2FAE9D5E65(uLocal_403[2]) && !unk_0x930F8FBB8E9537CC(uLocal_403[2]))
		{
			uLocal_407[2] = unk_0x4D135F3066A9BF9C(uLocal_403[2], 6, joaat("s_m_m_prisguard_01"), -1, 1, 1);
			unk_0x57B73553960790B6(uLocal_407[2], 0);
			unk_0x506A601663C5417C(uLocal_407[2], iLocal_315);
			unk_0x5CEA5F12775261F2(uLocal_403[2], 0, 0);
			unk_0xABA9860C0161F3CD(uLocal_403[2], 0);
			unk_0x57B73553960790B6(uLocal_403[2], 0);
			unk_0xA8F22633ACC22189(uLocal_403[2], 1);
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if ((unk_0x86CCCD2FAE9D5E65(uLocal_407[iVar0]) && !unk_0x930F8FBB8E9537CC(uLocal_407[iVar0])) && !unk_0x930F8FBB8E9537CC(uLocal_403[iVar0]))
		{
			if (func_28())
			{
				iLocal_411[iVar0] = 1;
				unk_0x87BE2E2A9B3D94F8(uLocal_403[iVar0], 1, 0);
			}
		}
		iVar0++;
	}
}

void func_68()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!unk_0x86CCCD2FAE9D5E65(Local_317.f_64[iVar0]))
		{
			Local_317.f_64[iVar0] = unk_0x206897C6DBC12488(6, joaat("s_m_m_prisguard_01"), Local_317[iVar0 /*3*/], Local_317.f_31[iVar0], 1, 1);
			unk_0x887F4488DA99FD21(joaat("s_m_m_prisguard_01"));
			unk_0x4EDE34FBADD967A6(0);
		}
		iVar0++;
	}
}

void func_69()
{
	Local_317[0 /*3*/] = { 1827.69f, 2474.181f, 61.7202f };
	Local_317[1 /*3*/] = { 1764.729f, 2409.139f, 61.7533f };
	Local_317[2 /*3*/] = { 1658.829f, 2390.888f, 61.7462f };
	Local_317[3 /*3*/] = { 1537.28f, 2468.338f, 61.7497f };
	Local_317[4 /*3*/] = { 1530.493f, 2585.172f, 61.7001f };
	Local_317[5 /*3*/] = { 1566.921f, 2682.525f, 61.7716f };
	Local_317[6 /*3*/] = { 1648.104f, 2761.528f, 61.9103f };
	Local_317[7 /*3*/] = { 1774.523f, 2766.559f, 61.9143f };
	Local_317[8 /*3*/] = { 1852.475f, 2697.632f, 61.9547f };
	Local_317[9 /*3*/] = { 1824.288f, 2625.042f, 61.9749f };
	Local_317.f_31[0] = 248.9733f;
	Local_317.f_31[1] = 45.8793f;
	Local_317.f_31[2] = 186.3656f;
	Local_317.f_31[3] = 313.5206f;
	Local_317.f_31[4] = 95.9574f;
	Local_317.f_31[5] = 289.3531f;
	Local_317.f_31[6] = 13.7511f;
	Local_317.f_31[7] = 0f;
	Local_317.f_31[8] = 208.5786f;
	Local_317.f_31[9] = 280.9389f;
}

int func_70()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		while (!unk_0x0F7866B4F5BE7CD4(Local_628.f_14[iVar0]))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		iVar0++;
	}
	return 1;
}

int func_71()
{
	if (bLocal_617)
	{
		if (!unk_0x33ACB874CECA2D4B(joaat("s_m_y_prisoner_01")))
		{
			return 0;
		}
	}
	return 1;
}

int func_72()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!unk_0x0F7866B4F5BE7CD4(Local_317.f_42[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	if (!unk_0x33ACB874CECA2D4B(joaat("polmav")))
	{
		return 0;
	}
	if (!unk_0x33ACB874CECA2D4B(joaat("s_m_m_prisguard_01")))
	{
		return 0;
	}
	return 1;
}

int func_73()
{
	if (bLocal_573)
	{
		if (!unk_0x33ACB874CECA2D4B(joaat("polmav")))
		{
			return 0;
		}
		if (!unk_0x498998F33897432E(101, "PrisonHeli"))
		{
			return 0;
		}
	}
	return 1;
}

int func_74()
{
	if (!unk_0x33ACB874CECA2D4B(joaat("s_m_m_security_01")))
	{
		return 0;
	}
	if (!unk_0x33ACB874CECA2D4B(joaat("s_m_m_prisguard_01")))
	{
		return 0;
	}
	if (!unk_0x33ACB874CECA2D4B(joaat("polmav")))
	{
		return 0;
	}
	return 1;
}

void func_75()
{
	int iVar0;
	
	func_76();
	iVar0 = 0;
	while (iVar0 < 3)
	{
		unk_0x2D148CBB17A2B0C7(Local_628.f_14[iVar0]);
		iVar0++;
	}
}

void func_76()
{
	Local_628[0 /*3*/] = { 1768.628f, 2538.97f, 44.4054f };
	Local_628[1 /*3*/] = { 1633.613f, 2498.849f, 44.4117f };
	Local_628[2 /*3*/] = { 1622.61f, 2555.683f, 44.4051f };
	Local_628.f_10[0] = 0f;
	Local_628.f_10[1] = 0f;
	Local_628.f_10[2] = 198.4323f;
	Local_628.f_14[0] = "PatrolGuard02";
	Local_628.f_14[1] = "PatrolGuard03";
	Local_628.f_14[2] = "PatrolGuard04";
}

void func_77()
{
	int iVar0;
	
	Local_317.f_42[0] = "TowerGuard01";
	Local_317.f_42[1] = "TowerGuard02";
	Local_317.f_42[2] = "TowerGuard03";
	Local_317.f_42[3] = "TowerGuard04";
	Local_317.f_42[4] = "TowerGuard05";
	Local_317.f_42[5] = "TowerGuard06";
	Local_317.f_42[6] = "TowerGuard07";
	Local_317.f_42[7] = "TowerGuard08";
	Local_317.f_42[8] = "TowerGuard09";
	Local_317.f_42[9] = "TowerGuard10";
	iVar0 = 0;
	while (iVar0 < 10)
	{
		unk_0x2D148CBB17A2B0C7(Local_317.f_42[iVar0]);
		iVar0++;
	}
	unk_0x32A12757CBF48A33(joaat("polmav"));
	unk_0x32A12757CBF48A33(joaat("s_m_m_prisguard_01"));
}

void func_78()
{
	bLocal_573 = false;
	if (func_28())
	{
		iLocal_574 = (unk_0x2E0A9E3291F398E3(0, 65535) % 2);
		if (iLocal_574 == 0)
		{
			bLocal_573 = true;
			unk_0x32A12757CBF48A33(joaat("polmav"));
			unk_0x995DCDA796A47049(101, "PrisonHeli");
		}
		else
		{
			bLocal_573 = false;
		}
	}
}

void func_79()
{
	unk_0x32A12757CBF48A33(joaat("s_m_m_security_01"));
	unk_0x32A12757CBF48A33(joaat("s_m_m_prisguard_01"));
	unk_0x32A12757CBF48A33(joaat("polmav"));
}

void func_80()
{
	iLocal_314 = iLocal_314;
	iLocal_314 = 0;
	func_81();
	func_34();
	Local_127.f_4 = 75;
	Local_127.f_6 = 15;
	unk_0xFD01CCC3CB6F7424(joaat("prop_gate_prison_01"), 1845f, 2605f, 45f, 1, 0, 0, 0);
	unk_0xFD01CCC3CB6F7424(joaat("prop_gate_prison_01"), 1819.274f, 2608.537f, 44.6195f, 1, 0f, 50f, 0);
	unk_0x4865E80F793024CE("Prison_Guards", &iLocal_315);
	unk_0x4865E80F793024CE("Prison_Prisoners", &iLocal_316);
	unk_0xF8E77F310A5B6EAB(2, iLocal_315, iLocal_316);
	unk_0xF8E77F310A5B6EAB(2, iLocal_316, iLocal_315);
	unk_0xF8E77F310A5B6EAB(1, iLocal_315, joaat("COP"));
	unk_0xF8E77F310A5B6EAB(1, joaat("COP"), iLocal_315);
	unk_0xF8E77F310A5B6EAB(3, joaat("player"), iLocal_316);
	unk_0xF8E77F310A5B6EAB(3, iLocal_316, joaat("player"));
}

void func_81()
{
	Local_64[0 /*3*/] = { 1809.816f, 2482.877f, 44.4744f };
	Local_64[1 /*3*/] = { 1755.823f, 2424.904f, 44.4319f };
	Local_64[2 /*3*/] = { 1661.2f, 2410.096f, 44.4265f };
	Local_64[3 /*3*/] = { 1555.966f, 2476.43f, 44.4042f };
	Local_64[4 /*3*/] = { 1549.141f, 2583.103f, 44.4225f };
	Local_64[5 /*3*/] = { 1581.156f, 2671.974f, 44.481f };
	Local_64[6 /*3*/] = { 1655.49f, 2743.69f, 44.4665f };
	Local_64[7 /*3*/] = { 1768.776f, 2748.527f, 44.4402f };
	Local_64[8 /*3*/] = { 1831.2f, 2696f, 44.4578f };
	Local_64[9 /*3*/] = { 1803.121f, 2617.781f, 44.5082f };
	Local_64[10 /*3*/] = { 1817.221f, 2608.387f, 44.6204f };
	Local_64[11 /*3*/] = { 1843.838f, 2608.361f, 44.6178f };
}

void func_82()
{
	if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
	{
		if ((unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), 1879.956f, 2705.097f, 52.07341f, 1869.859f, 2726.776f, 59.82338f, 24.75f, 0, 1, 0) || unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), 1833.113f, 2520.888f, 52.26086f, 1833.115f, 2554.431f, 61.25998f, 15f, 0, 1, 0)) || unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), 1832.742f, 2568.421f, 48.87375f, 1833.015f, 2596.529f, 57.12439f, 27.75f, 0, 1, 0))
		{
			if (unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) == 0)
			{
				unk_0xE9E74A97DB98B442(unk_0x1329891157A54C63(), 2, 0);
				unk_0x2E2A75923F20DCD2(unk_0x1329891157A54C63(), 0);
			}
		}
	}
	if (!iLocal_103)
	{
		if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
		{
			if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), 1917.889f, 2618.476f, -45.677f, 1822.889f, 2618.476f, 45.677f, 195f, 0, 0, 0))
			{
				if (unk_0xB1EC248359BCBB48(unk_0x1329891157A54C63()))
				{
					unk_0xE9E74A97DB98B442(unk_0x1329891157A54C63(), 4, 0);
					unk_0x2E2A75923F20DCD2(unk_0x1329891157A54C63(), 0);
					unk_0xF8E77F310A5B6EAB(5, joaat("player"), -183807561);
					unk_0xF8E77F310A5B6EAB(5, -183807561, joaat("player"));
					iLocal_103 = 1;
				}
				if ((unk_0x544121698BDAB87E(1874.072f, 2605.423f, 44.6723f, 100f, 1) && !unk_0x3369E84B95F0CE56(unk_0x1329891157A54C63())) || (unk_0xADBE95599A01932F(unk_0x81873881071CD9FE()) && !unk_0xB1EC248359BCBB48(unk_0x1329891157A54C63())))
				{
					unk_0x2E2A75923F20DCD2(unk_0x1329891157A54C63(), 0);
					unk_0xE9E74A97DB98B442(unk_0x1329891157A54C63(), 1, 0);
					unk_0xF8E77F310A5B6EAB(5, joaat("player"), -183807561);
					unk_0xF8E77F310A5B6EAB(5, -183807561, joaat("player"));
					iLocal_103 = 1;
				}
			}
		}
	}
}

void func_83(bool bParam0)
{
	int iVar0;
	
	func_89();
	func_88();
	func_87();
	func_86();
	func_85();
	func_84();
	unk_0xF6B1673032299769("PRISON_ALARMS", 1);
	if (iLocal_103)
	{
		unk_0xF8E77F310A5B6EAB(2, joaat("player"), -183807561);
		unk_0xF8E77F310A5B6EAB(2, -183807561, joaat("player"));
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (unk_0x239FCE53874D846F(uLocal_51[iVar0]))
		{
			unk_0x8492108E769E5C1B(uLocal_51[iVar0]);
		}
		iVar0++;
	}
	unk_0xFD01CCC3CB6F7424(joaat("prop_gate_prison_01"), 1845f, 2605f, 45f, 1, 0, 0, 0);
	unk_0xFD01CCC3CB6F7424(joaat("prop_gate_prison_01"), 1819.274f, 2608.537f, 44.6195f, 1, 0f, 50f, 0);
	if (bParam0)
	{
		unk_0x7C6BF0CD5D7454C9(1695.1f, 2595.8f, 50f, 1000f, 1, 0, 0, 0);
	}
	unk_0xC23A229F78DAD92A();
}

void func_84()
{
	if (unk_0x86CCCD2FAE9D5E65(iLocal_123))
	{
		unk_0xE0913C01F5C0CC3D(&iLocal_123);
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_125))
	{
		unk_0x71A8BCA218722FA1(&iLocal_125);
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_124))
	{
		unk_0xE0913C01F5C0CC3D(&iLocal_124);
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_126))
	{
		unk_0x71A8BCA218722FA1(&iLocal_126);
	}
}

void func_85()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x86CCCD2FAE9D5E65(Local_628.f_27[iVar0]))
		{
			if (unk_0xFBACB273AA628CC5(Local_628.f_36[iVar0]))
			{
				unk_0x0A8175F24237A3D4(&(Local_628.f_36[iVar0]));
			}
			if (unk_0x895C275673BCEAB0(Local_628.f_27[iVar0]))
			{
				unk_0xF210D34D7F7152ED(&(Local_628.f_27[iVar0]));
			}
			else
			{
				unk_0x71A8BCA218722FA1(&(Local_628.f_27[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x86CCCD2FAE9D5E65(Local_628.f_31[iVar0]))
		{
			if (unk_0xFBACB273AA628CC5(Local_628.f_40[iVar0]))
			{
				unk_0x0A8175F24237A3D4(&(Local_628.f_40[iVar0]));
			}
			if (unk_0x895C275673BCEAB0(Local_628.f_31[iVar0]))
			{
				unk_0xF210D34D7F7152ED(&(Local_628.f_31[iVar0]));
			}
			else
			{
				unk_0x71A8BCA218722FA1(&(Local_628.f_31[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_86()
{
	if (unk_0xFBACB273AA628CC5(uLocal_620))
	{
		unk_0x0A8175F24237A3D4(&uLocal_620);
	}
	if (unk_0x86CCCD2FAE9D5E65(uLocal_618))
	{
		unk_0x5D00E836B6BE8693(&iLocal_618);
	}
}

void func_87()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (unk_0x86CCCD2FAE9D5E65(uLocal_575[iVar0]))
		{
			if (unk_0xFBACB273AA628CC5(uLocal_596[iVar0]))
			{
				unk_0x0A8175F24237A3D4(&(uLocal_596[iVar0]));
			}
			unk_0xF210D34D7F7152ED(&(uLocal_575[iVar0]));
		}
		iVar0++;
	}
}

void func_88()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x86CCCD2FAE9D5E65(uLocal_403[iVar0]))
		{
			unk_0x5D00E836B6BE8693(&(uLocal_403[iVar0]));
		}
		if (unk_0x86CCCD2FAE9D5E65(uLocal_407[iVar0]))
		{
			unk_0xF210D34D7F7152ED(&(uLocal_407[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x86CCCD2FAE9D5E65(Local_317.f_64[iVar0]))
		{
			if (unk_0xFBACB273AA628CC5(Local_317.f_75[iVar0]))
			{
				unk_0x0A8175F24237A3D4(&(Local_317.f_75[iVar0]));
			}
			if (unk_0x895C275673BCEAB0(Local_317.f_64[iVar0]))
			{
				unk_0xF210D34D7F7152ED(&(Local_317.f_64[iVar0]));
			}
			else
			{
				unk_0x71A8BCA218722FA1(&(Local_317.f_64[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_89()
{
	if (unk_0xFBACB273AA628CC5(uLocal_570))
	{
		unk_0x0A8175F24237A3D4(&uLocal_570);
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_568))
	{
		if (unk_0x895C275673BCEAB0(iLocal_568))
		{
			unk_0x5D00E836B6BE8693(&iLocal_568);
			unk_0xF210D34D7F7152ED(&iLocal_569);
		}
		else
		{
			func_90(&iLocal_568, &iLocal_569);
			unk_0xE0913C01F5C0CC3D(&iLocal_568);
		}
	}
}

void func_90(var uParam0, var uParam1)
{
	if (((unk_0x86CCCD2FAE9D5E65(*uParam0) && unk_0x86CCCD2FAE9D5E65(*uParam1)) && !unk_0x930F8FBB8E9537CC(*uParam0)) && !unk_0x930F8FBB8E9537CC(*uParam1))
	{
		if (unk_0x0752B24E8A13FF0E(*uParam0))
		{
			if (unk_0xE20321A2D7F8960C(*uParam0))
			{
				if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
				{
					unk_0x0EF9ADF085D23B65(*uParam1, *uParam0, 0, 0, unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), 8, 50f, -1f, 30f, 100, 50);
				}
			}
		}
	}
}

