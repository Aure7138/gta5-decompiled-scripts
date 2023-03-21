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
	int iLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	struct<28> Local_37 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 786468, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	bool bLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	var uLocal_73 = 16;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
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
	int iLocal_238 = 0;
	int iLocal_239 = 0;
	char[] cLocal_240[8] = 0;
	var uLocal_241 = 0;
	int iLocal_242 = 0;
	var uLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	int iLocal_251 = 0;
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = -1;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 1000;
	var uLocal_264 = 1000;
	var uLocal_265 = 0;
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
	iLocal_17 = -1;
	iLocal_20 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_67 = -1;
	iLocal_238 = -1;
	iLocal_239 = -1;
	StringCopy(&cLocal_240, "PMRAUD", 8);
	iLocal_252 = -1;
	iLocal_253 = -1;
	unk_0x7E34CF542225E666(1);
	if (unk_0xBCA819F9975BEDFA(3))
	{
		func_81(2);
		func_80();
	}
	func_74();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (func_73())
		{
			iLocal_239 = -1;
		}
		else if (iLocal_239 == -1)
		{
			iLocal_239 = unk_0x94E3E074F38DF86C();
		}
		func_1();
	}
}

void func_1()
{
	char cVar0[32];
	struct<3> Var8;
	int iVar11;
	
	switch (iLocal_36)
	{
		case 0:
			unk_0xE1324F59713746FA(Local_37.f_10);
			if (Local_37.f_11 != 0)
			{
				unk_0xE1324F59713746FA(Local_37.f_11);
			}
			unk_0xA73AE78D2491E6E1("PRECOV", 0);
			if (unk_0x657558590DD37F85(0))
			{
				if (unk_0x23E9113C762466ED(Global_100412.f_222[0]) && unk_0x45CD66F0A131E554(Global_100412.f_222[0], 0))
				{
					iLocal_244 = Global_100412.f_222[0];
					Global_100412.f_222[0] = 0;
					unk_0xF0F77C99098F999B(iLocal_244, 1, 1);
					Local_37.f_7 = unk_0x0324EEB10F81965F(iLocal_244);
					unk_0x924CDE68BA2ED3BA(Local_37.f_7);
					unk_0xD90CB3CF9A40791C(Local_37.f_7, 1);
				}
				if (unk_0x23E9113C762466ED(Global_100412.f_225[0]))
				{
					iLocal_245 = Global_100412.f_225[0];
					Global_100412.f_225[0] = 0;
					unk_0xF0F77C99098F999B(iLocal_245, 1, 1);
					Local_37.f_8 = unk_0x0324EEB10F81965F(iLocal_245);
					unk_0x3BB70315907D9456(iLocal_245, iLocal_251);
					unk_0x4DF0B516187EED5A(iLocal_245, 0);
					unk_0xFA4023BBD5BCB8B5(iLocal_245, 5);
					unk_0x650BB0E111420EAF(iLocal_245, 1);
					unk_0xC96275575DC981A9(iLocal_245, 23, 1);
					if (unk_0xD28959FE5BC2D14D(Local_37.f_7))
					{
						if (Local_37.f_26)
						{
							unk_0x17E7D6CE3100F6AF(iLocal_245, 1);
							unk_0xD0CB3DBFBB095E91(iLocal_245, 1, 4096, -1);
						}
						else
						{
							unk_0x17E7D6CE3100F6AF(iLocal_245, 0);
						}
					}
					if (Local_37.f_20)
					{
						unk_0xC1B7B5C6FDC0755B(iLocal_245, joaat("weapon_pistol"), 120, 0, 0);
						unk_0xC1B7B5C6FDC0755B(iLocal_245, joaat("weapon_microsmg"), 120, 1, 1);
					}
					unk_0x924CDE68BA2ED3BA(Local_37.f_8);
					unk_0x4C44C1A3160350E2(iLocal_245, 0, 0, 0, Local_37.f_27, 0, 0, 0, 0);
					func_72(&uLocal_73, 3, iLocal_245, "ABIGAIL", 0, 1);
				}
				if (unk_0x23E9113C762466ED(Global_100412.f_225[1]))
				{
					iLocal_246 = Global_100412.f_225[1];
					Global_100412.f_225[1] = 0;
					unk_0xF0F77C99098F999B(iLocal_246, 1, 1);
					Local_37.f_9 = unk_0x0324EEB10F81965F(iLocal_246);
					unk_0x3BB70315907D9456(iLocal_246, iLocal_251);
					unk_0x4DF0B516187EED5A(iLocal_246, 0);
					unk_0xFA4023BBD5BCB8B5(iLocal_246, 5);
					unk_0x650BB0E111420EAF(iLocal_246, 1);
					unk_0xC96275575DC981A9(iLocal_246, 23, 1);
					if (unk_0xD28959FE5BC2D14D(Local_37.f_7))
					{
						if (Local_37.f_26)
						{
							unk_0x17E7D6CE3100F6AF(iLocal_246, 1);
							unk_0xD0CB3DBFBB095E91(iLocal_246, 1, 4096, -1);
						}
						else
						{
							unk_0x17E7D6CE3100F6AF(iLocal_246, 0);
						}
					}
					unk_0x924CDE68BA2ED3BA(Local_37.f_9);
					unk_0x4C44C1A3160350E2(iLocal_246, 0, 0, 0, Local_37.f_27, 0, 0, 0, 0);
				}
				if ((!unk_0x23E9113C762466ED(iLocal_245) || !unk_0xCA41A00932714525(iLocal_245)) && (!unk_0x23E9113C762466ED(iLocal_246) || !unk_0xCA41A00932714525(iLocal_246)))
				{
					uLocal_249 = func_71(iLocal_244, 1, 0);
					StringCopy(&cVar0, "STOP_THIEF_", 32);
					StringConCat(&cVar0, &(Local_37.f_12), 32);
					func_70(&cVar0, 7500, 1);
					func_69(&(Local_37.f_22), 10000);
					iLocal_238 = 0;
					iLocal_68 = 0;
					iLocal_69 = 0;
					if (Local_37.f_19 != -1)
					{
						iLocal_67 = (unk_0x94E3E074F38DF86C() + Local_37.f_19);
					}
				}
				iLocal_36++;
			}
			break;
		
		case 1:
			if (((((unk_0x23E9113C762466ED(iLocal_245) && unk_0xCA41A00932714525(iLocal_245)) || (unk_0x23E9113C762466ED(iLocal_246) && unk_0xCA41A00932714525(iLocal_246))) || ((Local_37.f_17 && unk_0xD28959FE5BC2D14D(Local_37.f_7)) && !unk_0x2315BB1606BC3DC3(iLocal_245, iLocal_244, 0))) || ((Local_37.f_17 && unk_0xD28959FE5BC2D14D(Local_37.f_7)) && !unk_0x2315BB1606BC3DC3(iLocal_246, iLocal_244, 0))) || ((Local_37.f_18 && !unk_0x2315BB1606BC3DC3(iLocal_245, iLocal_244, 0)) && func_68(iLocal_245)))
			{
				if (Local_37.f_17 && unk_0xD28959FE5BC2D14D(Local_37.f_7))
				{
					if (!unk_0xCA41A00932714525(iLocal_245) && unk_0x2315BB1606BC3DC3(iLocal_245, iLocal_244, 0))
					{
						unk_0xE0D1605D3819AA27(iLocal_245);
					}
					if (!unk_0xCA41A00932714525(iLocal_246) && unk_0x2315BB1606BC3DC3(iLocal_246, iLocal_244, 0))
					{
						unk_0xE0D1605D3819AA27(iLocal_246);
					}
				}
				if (unk_0x75342B3CD0FB5275())
				{
					unk_0xD12BCC85C2F8B1DE();
				}
				if (unk_0x9E123D5FF2973C60())
				{
					unk_0x2E2945F5602A744F(1);
				}
				if (func_73())
				{
					func_66();
				}
				iLocal_238 = -1;
				if (unk_0x9F746898F7881612(Local_37.f_10) && (Local_37.f_11 == 0 || unk_0x9F746898F7881612(Local_37.f_11)))
				{
					if (unk_0x23E9113C762466ED(iLocal_245))
					{
						Var8 = { unk_0x795835F85C52F363(iLocal_245, 1067030938, 1069547520) };
						uLocal_247 = unk_0xA26C2D9EE51CAC7D(joaat("pickup_money_med_bag"), Var8, Local_37.f_28, -1, 1, Local_37.f_10);
						unk_0x924CDE68BA2ED3BA(Local_37.f_10);
						if (unk_0xA3794949321E107C(uLocal_249))
						{
							unk_0x020DF7300725ECAB(&uLocal_249);
						}
						uLocal_249 = func_65(uLocal_247);
					}
					if (unk_0x23E9113C762466ED(iLocal_246) && Local_37.f_11 != 0)
					{
						Var8 = { unk_0x795835F85C52F363(iLocal_246, 1067030938, 1069547520) };
						uLocal_248 = unk_0xA26C2D9EE51CAC7D(joaat("pickup_money_med_bag"), Var8, Local_37.f_29, -1, 1, Local_37.f_11);
						unk_0x924CDE68BA2ED3BA(Local_37.f_11);
						if (unk_0xA3794949321E107C(uLocal_250))
						{
							unk_0x020DF7300725ECAB(&uLocal_250);
						}
						uLocal_250 = func_65(uLocal_248);
					}
					func_64(&uLocal_254, 0, 0);
					iLocal_242 = 1;
					iLocal_36++;
				}
			}
			else
			{
				if (unk_0xFD0FE723227D5AB6(iLocal_245, 0))
				{
					if (unk_0xA3794949321E107C(uLocal_250))
					{
						unk_0x020DF7300725ECAB(&uLocal_250);
					}
					if (!unk_0xA3794949321E107C(uLocal_249))
					{
						uLocal_249 = func_71(unk_0x60604E51E30D25B8(iLocal_245, 0), 1, 0);
					}
				}
				else
				{
					if (unk_0xA3794949321E107C(uLocal_249))
					{
						unk_0x020DF7300725ECAB(&uLocal_249);
					}
					if (!unk_0xA3794949321E107C(uLocal_250))
					{
						uLocal_250 = func_61(iLocal_245, 1, 145);
					}
				}
				func_40(&uLocal_254, iLocal_245, 0, 0, 1, 1, 1);
				if (iLocal_67 != -1)
				{
					if (unk_0x94E3E074F38DF86C() > iLocal_67)
					{
						func_39();
					}
					else
					{
						iVar11 = func_38(unk_0x049F77DED8AE0AF4((iLocal_67 - unk_0x94E3E074F38DF86C())), 0, Local_37.f_19);
						if (iVar11 <= 10000)
						{
							func_34((Local_37.f_19 - iVar11), Local_37.f_19, "UPLOAD", 9, 10000, 1, 2);
						}
						else
						{
							func_34((Local_37.f_19 - iVar11), Local_37.f_19, "UPLOAD", 9, 0, 1, 2);
						}
					}
				}
				if (unk_0x23E9113C762466ED(iLocal_245))
				{
					if (func_33(unk_0x17B5CC8A8615737D(), iLocal_245, 1) > 500f)
					{
						func_39();
					}
					else if (unk_0xA3794949321E107C(uLocal_249))
					{
						func_32(uLocal_249, iLocal_245, 500f, 0.8f, 0);
					}
				}
				if (unk_0x23E9113C762466ED(iLocal_246))
				{
					if (func_33(unk_0x17B5CC8A8615737D(), iLocal_246, 1) > 500f)
					{
						func_39();
					}
					else if (unk_0xA3794949321E107C(uLocal_250))
					{
						func_32(uLocal_250, iLocal_246, 500f, 0.8f, 0);
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0xAF6D1E258B973F1D(uLocal_247) || unk_0x386274C5877FE8E9(uLocal_247))
			{
				if (unk_0xAF6D1E258B973F1D(uLocal_247))
				{
					unk_0xC2E11A6D29A07A71(uLocal_247);
				}
				if (unk_0xA3794949321E107C(uLocal_249))
				{
					unk_0x020DF7300725ECAB(&uLocal_249);
				}
			}
			if (!unk_0xAF6D1E258B973F1D(uLocal_248) || unk_0x386274C5877FE8E9(uLocal_248))
			{
				if (unk_0xAF6D1E258B973F1D(uLocal_248))
				{
					unk_0xC2E11A6D29A07A71(uLocal_248);
				}
				if (unk_0xA3794949321E107C(uLocal_250))
				{
					unk_0x020DF7300725ECAB(&uLocal_250);
				}
			}
			if (!unk_0xA3794949321E107C(uLocal_249) && !unk_0xA3794949321E107C(uLocal_250))
			{
				if (unk_0x0DD3F4C17D207474(unk_0xBE369BE1BC57A796(), 0))
				{
					if (!iLocal_71)
					{
						func_70("LOSE_WANTED", 7500, 1);
						iLocal_71 = 1;
					}
				}
				else
				{
					unk_0xD12BCC85C2F8B1DE();
					func_31();
				}
			}
			else if ((unk_0xAF6D1E258B973F1D(uLocal_247) && func_30(unk_0x17B5CC8A8615737D(), unk_0xE63C64081D02EFD3(uLocal_247), 1) > 500f) || (unk_0xAF6D1E258B973F1D(uLocal_248) && func_30(unk_0x17B5CC8A8615737D(), unk_0xE63C64081D02EFD3(uLocal_248), 1) > 500f))
			{
				func_39();
			}
			else if (iLocal_242 && func_28())
			{
				unk_0xD12BCC85C2F8B1DE();
				StringCopy(&cVar0, "PKUP_", 32);
				StringConCat(&cVar0, &(Local_37.f_12), 32);
				func_70(&cVar0, 7500, 1);
				iLocal_242 = 0;
			}
			break;
	}
	if (unk_0x23E9113C762466ED(iLocal_245) && !unk_0xCA41A00932714525(iLocal_245))
	{
		if ((unk_0x23E9113C762466ED(iLocal_244) && unk_0x45CD66F0A131E554(iLocal_244, 0)) && !iLocal_68)
		{
			if (!func_27(iLocal_245, 242628503, 1))
			{
				unk_0x86DD54980FE55567(&uLocal_243);
				unk_0x736D228B743132A9(0, iLocal_244, 31, 10000);
				unk_0xA0F84EA3D7C06982(0, iLocal_244, unk_0x17B5CC8A8615737D(), 8, 30f, Local_37.f_16, 1000f, 0f, 1);
				unk_0x007AE2AA9E15FA7B(uLocal_243);
				unk_0x00E85C3B3BD34B10(iLocal_245, uLocal_243);
				unk_0x08377FB2AE4C6899(&uLocal_243);
				iLocal_68 = 1;
			}
		}
		else if (((func_27(iLocal_245, 242628503, 1) && unk_0x408A2D0FD72AD367(iLocal_245) < 1) && !iLocal_69) && (((((unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), Local_37, Local_37.f_3, Local_37.f_6, 0, 1, 0) || unk_0x080A2F4FECE019B1(iLocal_245, 122)) || unk_0x080A2F4FECE019B1(iLocal_245, 123)) || unk_0x080A2F4FECE019B1(iLocal_245, 124)) || unk_0x080A2F4FECE019B1(iLocal_245, 23)) || func_26(Global_100412.f_35, 134217728)))
		{
			unk_0xA0F84EA3D7C06982(iLocal_245, iLocal_244, unk_0x17B5CC8A8615737D(), 8, 30f, Local_37.f_16, 1000f, 0f, 1);
			iLocal_69 = 1;
		}
		else if ((!func_27(iLocal_245, 242628503, 1) && !func_27(iLocal_245, -1273030092, 1)) || !unk_0xFD0FE723227D5AB6(iLocal_245, 0))
		{
			if (!func_27(iLocal_245, 1805844857, 1))
			{
				unk_0xCA58071CE9CCE891(iLocal_245, unk_0x17B5CC8A8615737D(), 1000f, -1, 0, 1);
			}
		}
		else if (unk_0x2315BB1606BC3DC3(iLocal_245, iLocal_244, 1) && (((unk_0x01F09F0D64EF3285(iLocal_244, 0, 3000) || unk_0x01F09F0D64EF3285(iLocal_244, 1, 3000)) || unk_0x01F09F0D64EF3285(iLocal_244, 2, 8000)) || unk_0x01F09F0D64EF3285(iLocal_244, 3, 8000)))
		{
			if (!func_27(iLocal_245, 451360105, 1))
			{
				unk_0x335F081010BB7A76(iLocal_245, iLocal_244, 0);
			}
		}
		if (Local_37.f_20)
		{
			if (!bLocal_70)
			{
				if ((((unk_0xC017443DBE6DA4D6(iLocal_245, unk_0x17B5CC8A8615737D(), 1) || unk_0xC017443DBE6DA4D6(iLocal_244, unk_0x17B5CC8A8615737D(), 1)) || unk_0x080A2F4FECE019B1(iLocal_245, 122)) || unk_0x080A2F4FECE019B1(iLocal_245, 123)) || unk_0x080A2F4FECE019B1(iLocal_245, 124))
				{
					bLocal_70 = true;
				}
			}
			if (bLocal_70)
			{
				if ((unk_0x1F8F07D86DA1A701(iLocal_245, 242628503) == 1 && unk_0x408A2D0FD72AD367(iLocal_245) == 1) || unk_0x1F8F07D86DA1A701(iLocal_245, -1273030092) == 1)
				{
					if (!unk_0x6FF116803583BC8B(iLocal_245))
					{
						unk_0x9E087EF1619B5C7B(iLocal_245, joaat("weapon_microsmg"));
						unk_0xBF17D64933EE9BE1(iLocal_245, unk_0x17B5CC8A8615737D(), 0, 0f, 0f, 0f, 1000f, 100, 1, -753768974);
					}
				}
			}
		}
		if (unk_0x23E9113C762466ED(iLocal_244) && unk_0x45CD66F0A131E554(iLocal_244, 0))
		{
			if (!iLocal_72)
			{
				if ((func_27(iLocal_245, 242628503, 1) && unk_0x408A2D0FD72AD367(iLocal_245) == 1) || func_27(iLocal_245, -1273030092, 1))
				{
					if (unk_0x985A2515CBAF7290("TAKINGS", 0, -1))
					{
						unk_0xEE4ED1F88396A702(-1, "TAKINGS_TIRES_PEELAWAY_master", iLocal_244, 0, 0, 0);
						iLocal_72 = 1;
					}
				}
			}
		}
	}
	if (unk_0x23E9113C762466ED(iLocal_246) && !unk_0xCA41A00932714525(iLocal_246))
	{
		if (!unk_0xFD0FE723227D5AB6(iLocal_246, 0) && !func_27(iLocal_246, 1805844857, 1))
		{
			unk_0xCA58071CE9CCE891(iLocal_246, unk_0x17B5CC8A8615737D(), 1000f, -1, 0, 1);
		}
	}
	if (unk_0x23E9113C762466ED(iLocal_245) && !unk_0xCA41A00932714525(iLocal_245))
	{
		if (unk_0x14E01C4EC4170496(iLocal_245) && !unk_0xFD0FE723227D5AB6(iLocal_245, 0))
		{
			if (func_73())
			{
				func_66();
			}
		}
		else if (func_33(unk_0x17B5CC8A8615737D(), iLocal_245, 1) < 15f)
		{
			switch (iLocal_238)
			{
				case 0:
					if (func_25())
					{
						MemCopy(&cVar0, {Local_37.f_12}, 8);
						StringConCat(&cVar0, "_1", 32);
						MemCopy(&cVar0, {func_24(&cVar0)}, 8);
						if (func_7(&uLocal_73, &cLocal_240, &cVar0, 8, 0, 0, 0))
						{
							StringCopy(&cVar0, "", 32);
							iLocal_238++;
						}
					}
					break;
				
				case 1:
					if (func_25())
					{
						if (!unk_0x872115A210435770(iLocal_245))
						{
							if (func_5() == 0)
							{
								StringCopy(&cVar0, "GENERIC_INSULT_HIGH", 32);
							}
							else if (func_5() == 1)
							{
								StringCopy(&cVar0, "GENERIC_INSULT_MED", 32);
							}
							func_3(iLocal_245, &cVar0, 10);
							iLocal_239 = -1;
							StringCopy(&cVar0, "", 32);
							iLocal_238++;
						}
					}
					break;
				
				case 2:
					if (func_25() && (unk_0x94E3E074F38DF86C() - iLocal_239) > 3500)
					{
						MemCopy(&cVar0, {Local_37.f_12}, 8);
						StringConCat(&cVar0, "_3", 32);
						MemCopy(&cVar0, {func_24(&cVar0)}, 8);
						if (func_7(&uLocal_73, &cLocal_240, &cVar0, 8, 0, 0, 0))
						{
							StringCopy(&cVar0, "", 32);
							iLocal_238++;
						}
					}
					break;
				
				case 3:
					if (func_25() && (unk_0x94E3E074F38DF86C() - iLocal_239) > 1500)
					{
						if (!unk_0x872115A210435770(iLocal_245))
						{
							if (func_5() == 0)
							{
								StringCopy(&cVar0, "GENERIC_INSULT_HIGH", 32);
							}
							else if (func_5() == 1)
							{
								StringCopy(&cVar0, "GENERIC_INSULT_MED", 32);
							}
							func_3(iLocal_245, &cVar0, 10);
							iLocal_239 = -1;
							StringCopy(&cVar0, "", 32);
							iLocal_238 = (iLocal_238 - 1);
						}
					}
					break;
				}
			}
	}
	if (unk_0x23E9113C762466ED(iLocal_245))
	{
		if (unk_0xCA41A00932714525(iLocal_245))
		{
			if (Local_37.f_21)
			{
				func_2(1);
				func_39();
			}
		}
		else if (Local_37.f_27)
		{
			if (iLocal_252 == -1)
			{
				if (!unk_0x14E01C4EC4170496(iLocal_245))
				{
					iLocal_252 = unk_0x94E3E074F38DF86C();
				}
			}
			else if ((unk_0x94E3E074F38DF86C() - iLocal_252) > 2000)
			{
				unk_0x4C44C1A3160350E2(iLocal_245, 0, 0, 0, 0, 0, 0, 0, 0);
			}
		}
	}
	if (unk_0x23E9113C762466ED(iLocal_246))
	{
		if (unk_0xCA41A00932714525(iLocal_246))
		{
			if (Local_37.f_21)
			{
				func_2(1);
				func_39();
			}
		}
		else if (Local_37.f_27)
		{
			if (iLocal_253 == -1)
			{
				if (!unk_0x14E01C4EC4170496(iLocal_246))
				{
					iLocal_253 = unk_0x94E3E074F38DF86C();
				}
			}
			else if ((unk_0x94E3E074F38DF86C() - iLocal_253) > 2000)
			{
				unk_0x4C44C1A3160350E2(iLocal_246, 0, 0, 0, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_2(int iParam0)
{
	Global_100412.f_220 = iParam0;
}

void func_3(int iParam0, char[4] cParam1, int iParam2)
{
	unk_0xE4C6605BC74297B4(iParam0, cParam1, func_4(iParam2), 1);
}

int func_4(int iParam0)
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

int func_5()
{
	return func_6(Global_100412.f_20, Global_100412.f_29);
}

int func_6(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 6:
		case 5:
		case 7:
			return 0;
			break;
		
		case 11:
		case 12:
		case 13:
		case 14:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 1;
					break;
			}
			break;
	}
	return iParam1;
}

bool func_7(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_23(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15752 = 0;
	Global_15754 = 0;
	Global_15759 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_2621441 = 0;
	return func_8(sParam2, iParam3, 0);
}

int func_8(char* sParam0, int iParam1, bool bParam2)
{
	Global_15746 = 0;
	if (Global_15745 == 0 || Global_15747 == 2)
	{
		if (Global_15745 != 0)
		{
			if (iParam1 > Global_15747)
			{
				if (Global_15752 == 0)
				{
					unk_0x660E8E7836E95077(0);
					Global_14443.f_1 = 3;
					Global_15745 = 0;
					Global_15746 = 1;
					Global_15798 = 0;
					Global_15741 = 0;
					Global_15742 = 0;
					Global_15756 = 0;
					Global_15755 = 0;
					Global_14442 = 0;
				}
				else
				{
					func_22();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x55C74612BE548D78())
		{
			return 0;
		}
		if (func_21(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_20();
		Global_15034 = { Global_15199 };
		Global_15751 = Global_15752;
		Global_15758 = Global_15759;
		Global_2621442 = Global_2621441;
		Global_15760 = { Global_15776 };
		Global_15753 = Global_15754;
		Global_16735 = Global_16736;
		Global_16743 = { Global_16749 };
		Global_16737 = Global_16738;
		Global_16739 = Global_16740;
		Global_16741 = Global_16742;
		Global_15364.f_370 = Global_16734;
		Global_15364.f_368 = Global_16732;
		Global_15364.f_369 = Global_16733;
		Global_15741 = Global_15742;
		if (Global_15751)
		{
			unk_0x21E7933CCC7B3724(&Global_2313, 20);
			unk_0x21E7933CCC7B3724(&Global_2314, 17);
			unk_0x21E7933CCC7B3724(&Global_2315, 0);
			if (bParam2)
			{
				func_13();
				if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14443.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14409 == 1)
			{
				return 0;
			}
			if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
			{
				if (unk_0x658CF746EFCB633E(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (func_12())
				{
					return 0;
				}
				if (unk_0x9D317EC24D9CDD2F(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (unk_0x7F4AE93855973529(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (unk_0xC3B1F1C9A58948C2(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (unk_0xBA11591586E3ABFF(unk_0x17B5CC8A8615737D(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69702)
				{
					if (unk_0xA77EE6C138A588EB(unk_0x17B5CC8A8615737D()))
					{
						return 0;
					}
					if (unk_0xA4FEB0448027296A(unk_0xBE369BE1BC57A796()))
					{
						return 0;
					}
					if (unk_0x95E290AF7BCBF364(unk_0x17B5CC8A8615737D()))
					{
						return 0;
					}
					if (unk_0xDB3C032119056A8B(unk_0xBE369BE1BC57A796()))
					{
						return 0;
					}
				}
			}
			if (func_11())
			{
				return 0;
			}
			else
			{
				switch (Global_14443.f_1)
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
				if (unk_0x48B8265059381CD0(Global_2313, 9))
				{
					return 0;
				}
			}
			func_10();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_9();
		return 1;
	}
	if (Global_15745 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15747 || iParam1 == Global_15747)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_22();
	}
	return 0;
}

void func_9()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14613[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x660E8E7836E95077(0);
	Global_15745 = 1;
}

void func_10()
{
	Global_15798 = Global_15797;
	Global_15792 = Global_15793;
	Global_15839 = { Global_15827 };
	Global_15845 = { Global_15833 };
	Global_15800 = Global_15799;
	Global_15869 = { Global_15851 };
	Global_15875 = { Global_15857 };
	Global_15881 = { Global_15863 };
	Global_15887 = { Global_15893 };
	Global_1628 = Global_1629;
	Global_1630 = Global_1631;
	Global_15756 = Global_15757;
	Global_15758 = Global_15759;
	Global_15760 = { Global_15776 };
	Global_15749 = Global_15750;
	Global_16761 = 0;
	Global_15794 = 0;
	Global_15795 = 0;
	unk_0x21E7933CCC7B3724(&Global_2314, 16);
}

int func_11()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_12()
{
	int iVar0;
	int iVar1;
	
	if (Global_69702)
	{
		iVar0 = 0;
		unk_0x5CD8291F2C5E0AD1(unk_0x17B5CC8A8615737D(), &iVar1, 1);
		if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x5053725CE851B850() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
	{
		if (unk_0x780A193B53AF21CF(unk_0x17B5CC8A8615737D(), 78, 1))
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

void func_13()
{
	if (func_19(14))
	{
		if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
		{
			if (unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()) == Global_101700.f_27009[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()) == Global_101700.f_27009[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()) == Global_101700.f_27009[2 /*29*/])
			{
				Global_14443 = 2;
			}
			else
			{
				Global_14443 = 0;
			}
		}
	}
	else
	{
		Global_14443 = func_14();
		if (Global_14443 == 145)
		{
			Global_14443 = 3;
		}
		if (Global_69702)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

int func_14()
{
	func_15();
	return Global_101700.f_2095.f_539.f_3549;
}

void func_15()
{
	int iVar0;
	
	if (unk_0x23E9113C762466ED(unk_0x17B5CC8A8615737D()))
	{
		if (func_18(Global_101700.f_2095.f_539.f_3549) != unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()))
		{
			iVar0 = func_17(unk_0x17B5CC8A8615737D());
			if (func_16(iVar0) && (!func_19(14) || Global_100652))
			{
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_16(Global_101700.f_2095.f_539.f_3549))
				{
					Global_101700.f_2095.f_539.f_3550 = Global_101700.f_2095.f_539.f_3549;
				}
				Global_101700.f_2095.f_539.f_3551 = iVar0;
				Global_101700.f_2095.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101700.f_2095.f_539.f_3549 != 145)
			{
				Global_101700.f_2095.f_539.f_3551 = Global_101700.f_2095.f_539.f_3549;
			}
			return;
		}
	}
	Global_101700.f_2095.f_539.f_3549 = 145;
}

bool func_16(int iParam0)
{
	return iParam0 < 3;
}

int func_17(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x23E9113C762466ED(uParam0))
	{
		iVar1 = unk_0x0324EEB10F81965F(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_18(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_18(int iParam0)
{
	if (func_16(iParam0))
	{
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_19(int iParam0)
{
	return Global_35781 == iParam0;
}

void func_20()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15034[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15034[iVar0 /*10*/].f_1), "", 24);
		Global_15034[iVar0 /*10*/].f_7 = 0;
		Global_15034[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15034.f_161 = -99;
	Global_15034.f_162 = { 0f, 0f, 0f };
}

bool func_21(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1353070.f_203[iParam1];
			}
			break;
	}
	return unk_0x48B8265059381CD0(Global_1353070.f_1015, iParam0);
}

void func_22()
{
	unk_0x5FB0B609B3A49840();
	Global_16756 = 0;
	if ((unk_0x3ED8A07C6FA41E1B() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0x660E8E7836E95077(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0x55C74612BE548D78())
	{
		unk_0x660E8E7836E95077(1);
		Global_15745 = 6;
		return;
	}
}

void func_23(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15199 = { *uParam0 };
	Global_1629 = iParam1;
	StringCopy(&Global_15815, sParam2, 24);
	Global_16734 = uParam5;
	if (iParam3 == 0)
	{
		Global_16732 = 1;
		Global_16730 = 0;
	}
	else
	{
		Global_16732 = 0;
		Global_16730 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16733 = 1;
		Global_16731 = 0;
	}
	else
	{
		Global_16733 = 0;
		Global_16731 = 1;
	}
}

struct<4> func_24(char* sParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, sParam0, 16);
	switch (func_14())
	{
		case 0:
			StringConCat(&Var0, "_M", 16);
			break;
		
		case 1:
			StringConCat(&Var0, "_F", 16);
			break;
		
		case 2:
			StringConCat(&Var0, "_T", 16);
			break;
	}
	return Var0;
}

int func_25()
{
	if (func_73())
	{
		return 0;
	}
	if (unk_0xDA5E060432EE0B26())
	{
		if (unk_0x75342B3CD0FB5275())
		{
			return 0;
		}
	}
	return 1;
}

bool func_26(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_27(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x1F8F07D86DA1A701(iParam0, iParam1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	else if (!bParam2)
	{
		if (iVar0 == 2 || iVar0 == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_28()
{
	if (unk_0x75342B3CD0FB5275())
	{
		return 0;
	}
	if (unk_0xDA5E060432EE0B26())
	{
		if (func_73() && !func_29())
		{
			return 0;
		}
	}
	return 1;
}

int func_29()
{
	if (Global_16756 == 1)
	{
		return 1;
	}
	return 0;
}

float func_30(var uParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0xA929B2923D14E2F8(uParam0, 0))
	{
		Var0 = { unk_0x57240623C1BC6E88(uParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x57240623C1BC6E88(uParam0, 0) };
	}
	return unk_0x3DC4639D5F23DEA2(Var0, Param1, iParam4);
}

void func_31()
{
	func_81(1);
	func_80();
}

void func_32(var uParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (unk_0xA3794949321E107C(uParam0))
	{
		if ((unk_0x23E9113C762466ED(uParam1) && unk_0x23E9113C762466ED(unk_0x17B5CC8A8615737D())) && !unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
		{
			if (unk_0x3983CCB0D958159C(iParam1))
			{
				if (unk_0x45CD66F0A131E554(unk_0xBFC71CD990E479DB(iParam1), 0))
				{
					fVar1 = unk_0x3DC4639D5F23DEA2(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), unk_0x57240623C1BC6E88(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = unk_0xF2DB717A73826179((255f * ((fVar1 - fVar2) / (fParam2 - fVar2))));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0x76C0584E1FF9B958(uParam0, 1);
						unk_0x5F97CFBDE7F2B599(uParam0, (255 - iVar0));
					}
					else
					{
						unk_0x76C0584E1FF9B958(uParam0, 0);
						unk_0x5F97CFBDE7F2B599(uParam0, 255);
					}
				}
			}
			else if (unk_0x80E9CA64E9C8E070(iParam1))
			{
				if (!unk_0xCA41A00932714525(unk_0xB80CAAF3D65FBC1F(iParam1)))
				{
					fVar1 = unk_0x3DC4639D5F23DEA2(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), unk_0x57240623C1BC6E88(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = unk_0xF2DB717A73826179(((255f * (fVar1 - fVar2)) / (fParam2 - fVar2)));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0x76C0584E1FF9B958(uParam0, 1);
						unk_0x5F97CFBDE7F2B599(uParam0, (255 - iVar0));
					}
					else
					{
						unk_0x76C0584E1FF9B958(uParam0, 0);
						unk_0x5F97CFBDE7F2B599(uParam0, 255);
					}
				}
			}
		}
	}
}

float func_33(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xA929B2923D14E2F8(uParam0, 0))
	{
		Var0 = { unk_0x57240623C1BC6E88(uParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x57240623C1BC6E88(iParam0, 0) };
	}
	if (!unk_0xA929B2923D14E2F8(iParam1, 0))
	{
		Var3 = { unk_0x57240623C1BC6E88(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x57240623C1BC6E88(iParam1, 0) };
	}
	return unk_0x3DC4639D5F23DEA2(Var0, Var3, iParam2);
}

void func_34(int iParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_35(iParam0, uParam1, sParam2, iParam3, iParam4, iParam6, -1f, -1f, 0, iParam5, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1);
}

void func_35(var uParam0, var uParam1, char* sParam2, var uParam3, var uParam4, var uParam5, float fParam6, float fParam7, int iParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_37(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1354542.f_1 = 1;
		func_36(0, iVar0);
		Global_1354542.f_1009[iVar0] = uParam0;
		Global_1354542.f_1009.f_11[iVar0] = uParam1;
		StringCopy(&(Global_1354542.f_1009.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1354542.f_1009.f_194[iVar0] = uParam3;
		Global_1354542.f_1009.f_183[iVar0] = uParam4;
		Global_1354542.f_1009.f_216[iVar0] = uParam5;
		Global_1354542.f_1009.f_227[iVar0 /*3*/] = fParam6;
		Global_1354542.f_1009.f_227[iVar0 /*3*/].f_1 = fParam7;
		Global_1354542.f_1009.f_258[iVar0] = iParam8;
		Global_1354542.f_1009.f_269[iVar0] = uParam9;
		Global_1354542.f_1009.f_312[iVar0] = iParam10;
		Global_1354542.f_1009.f_323[iVar0] = iParam11;
		Global_1354542.f_1009.f_334[iVar0] = iParam12;
		Global_1354542.f_1009.f_345[iVar0] = iParam13;
		Global_1354542.f_1004 = 1;
		Global_1354542.f_1009.f_356[iVar0] = iParam14;
		Global_1354542.f_1009.f_367[iVar0] = iParam15;
		Global_1354542.f_1009.f_378[iVar0] = iParam16;
		Global_1354542.f_1009.f_389[iVar0] = iParam17;
		Global_1354542.f_1009.f_400[iVar0] = iParam18;
		Global_1354542.f_1009.f_411[iVar0] = iParam19;
		Global_1354542.f_1009.f_422[iVar0] = iParam20;
		Global_1354542.f_1009.f_433[iVar0] = iParam21;
		Global_1354542.f_1009.f_444[iVar0] = iParam22;
		Global_1354542.f_1009.f_455[iVar0] = iParam23;
	}
}

void func_36(int iParam0, int iParam1)
{
	unk_0xEB79FECD9022AAF0(&(Global_1354542.f_5703[iParam0]), iParam1);
}

bool func_37(int iParam0, int iParam1)
{
	return unk_0x48B8265059381CD0(Global_1354542.f_5703[iParam0], iParam1);
}

int func_38(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_39()
{
	func_81(2);
	func_80();
}

void func_40(var uParam0, var uParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	uParam0->f_6 = 0;
	func_41(uParam0, uParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_41(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0xAB01297DD4A8577F())
	{
		if (unk_0x94E3E074F38DF86C() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0xD3115E7F7876D6E6(iVar0))
	{
		if (!unk_0x63C468D583002D23())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_60(iVar0))
	{
		func_59();
	}
	if (func_58(uParam1) && unk_0xADA6DD2D53C59AF0(uParam1))
	{
		iVar1 = 0;
		if (unk_0x80E9CA64E9C8E070(uParam1))
		{
			unk_0xCC614957B282546F(unk_0xB80CAAF3D65FBC1F(iParam1));
			unk_0x5A0679AC515DA45F(unk_0xB80CAAF3D65FBC1F(iParam1), 1);
			if (unk_0x4B08F3A62DC9B336(unk_0xB80CAAF3D65FBC1F(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x3983CCB0D958159C(iParam1))
		{
			unk_0x1976D6B36CACBFE7(unk_0xBFC71CD990E479DB(iParam1));
			if (unk_0x7D86ADEE79DE4C72(unk_0xBFC71CD990E479DB(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x1461B0B259D86067(iParam1))
		{
			unk_0xA8A81E4A8E21148C(unk_0xACDCB2312E61BD53(iParam1));
			if (unk_0xC61161F0BC70D70C(unk_0xACDCB2312E61BD53(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0xAB01297DD4A8577F())
		{
			if (func_53(uParam0, bParam7, bParam9, 0))
			{
				func_49(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_45(iVar0))
				{
					if ((unk_0xD3115E7F7876D6E6(uParam0->f_3) && !unk_0xD3115E7F7876D6E6(iVar0)) && unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
					{
						if ((iVar1 && !unk_0x9E123D5FF2973C60()) && uParam8)
						{
							if (!func_60(iVar0))
							{
								func_69(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x6A7B0D91FD88D9EE("CMN_HINT", iVar0))
								{
									func_44(1);
								}
							}
						}
					}
				}
			}
			else if (func_45(iVar0))
			{
				if (unk_0xD3115E7F7876D6E6(uParam0->f_3) && !unk_0xD3115E7F7876D6E6(iVar0))
				{
					if (((unk_0x1DCFA79E268F3EE5(iParam1) && iVar1) && !unk_0x9E123D5FF2973C60()) && uParam8)
					{
						if (!func_60(iVar0))
						{
							func_69(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x6A7B0D91FD88D9EE("CMN_HINT", iVar0))
							{
								func_44(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0xD3115E7F7876D6E6(sParam5))
			{
				if (func_60(sParam5))
				{
					unk_0x2E2945F5602A744F(1);
				}
			}
			if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1))
			{
				if (unk_0x72FC030E928A5207(unk_0x17B5CC8A8615737D()))
				{
					if (unk_0xB866C0EABE959340(3) == 3 || unk_0xB866C0EABE959340(3) == 4)
					{
						func_64(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x8EC3C2BC25ED8ECA(unk_0x17B5CC8A8615737D()))
				{
					if (unk_0xB866C0EABE959340(6) == 3 || unk_0xB866C0EABE959340(6) == 4)
					{
						func_64(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xE40FC0529CC75B0F(unk_0x17B5CC8A8615737D()))
				{
					if (unk_0xB866C0EABE959340(4) == 3 || unk_0xB866C0EABE959340(4) == 4)
					{
						func_64(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xC5DC3C111D329A7C(unk_0x17B5CC8A8615737D()))
				{
					if (unk_0xB866C0EABE959340(5) == 3 || unk_0xB866C0EABE959340(5) == 4)
					{
						func_64(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x3B22E4CC0F88E52E(unk_0x17B5CC8A8615737D()))
				{
					if (unk_0xB866C0EABE959340(2) == 3 || unk_0xB866C0EABE959340(2) == 4)
					{
						func_64(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x428CA09FA2E92B87() == 3 || unk_0x428CA09FA2E92B87() == 4)
				{
					func_64(uParam0, iVar0, 1);
				}
			}
			if (!func_53(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_43(uParam0))
				{
					func_42(uParam0);
				}
			}
		}
	}
	else
	{
		func_64(uParam0, iVar0, 0);
	}
}

void func_42(var uParam0)
{
	if (func_58(unk_0x17B5CC8A8615737D()))
	{
		unk_0xEF9294ED57E4AC3D(unk_0x17B5CC8A8615737D());
	}
	if (unk_0xAB01297DD4A8577F())
	{
		unk_0x73624B45C8E405BA(1);
		unk_0x72B6EAB729050F5B(0);
		unk_0xB8CAC5F3774894A1("HINT_CAM_SCENE");
		unk_0x8BBC558C75738A6D("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x9AF1ABF0E97411BF("FocusOut", 0, 0);
			unk_0x4988C48537D1AE4F(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_43(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x94E3E074F38DF86C()
		{
			return 1;
		}
	}
	return 0;
}

int func_44(bool bParam0)
{
	switch (Global_35781)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_101700.f_9008.f_100++;
			}
			return Global_101700.f_9008.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_101700.f_9008.f_101++;
			}
			return Global_101700.f_9008.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_101700.f_9008.f_102++;
			}
			return Global_101700.f_9008.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

int func_45(char* sParam0)
{
	if (!func_46(1, 1, 0))
	{
		if ((!unk_0x9C88EB7B70229335(sParam0) && func_60(sParam0)) || func_60("CMN_HINT"))
		{
			unk_0x2E2945F5602A744F(1);
		}
		return 0;
	}
	switch (Global_35781)
	{
		case 0:
		case 3:
			if (func_44(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_44(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_44(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_46(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!unk_0x94A5DEE82C898FDF(unk_0xBE369BE1BC57A796()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0xE9E6B5364105A000())
	{
		return 0;
	}
	if (func_48(0))
	{
		return 0;
	}
	if (func_47())
	{
		return 0;
	}
	if (unk_0x349B6C82BE3EF6DD())
	{
		return 0;
	}
	if (Global_68131)
	{
		return 0;
	}
	if (unk_0x82F1A060D8F4583B(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_53003)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1))
		{
			if (unk_0x72FC030E928A5207(unk_0x17B5CC8A8615737D()))
			{
				if (unk_0xB866C0EABE959340(3) == 3 || unk_0xB866C0EABE959340(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x8EC3C2BC25ED8ECA(unk_0x17B5CC8A8615737D()))
			{
				if (unk_0xB866C0EABE959340(6) == 3 || unk_0xB866C0EABE959340(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xE40FC0529CC75B0F(unk_0x17B5CC8A8615737D()))
			{
				if (unk_0xB866C0EABE959340(4) == 3 || unk_0xB866C0EABE959340(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xC5DC3C111D329A7C(unk_0x17B5CC8A8615737D()))
			{
				if (unk_0xB866C0EABE959340(5) == 3 || unk_0xB866C0EABE959340(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x3B22E4CC0F88E52E(unk_0x17B5CC8A8615737D()))
			{
				if (unk_0xB866C0EABE959340(2) == 3 || unk_0xB866C0EABE959340(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x428CA09FA2E92B87() == 3 || unk_0x428CA09FA2E92B87() == 4)
			{
				return 0;
			}
			if (unk_0x54271E538645DBDB())
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_47()
{
	return unk_0x94E3E074F38DF86C() <= Global_17290.f_5745 + 100;
}

int func_48(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x48B8265059381CD0(Global_2313, 14))
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
	if (unk_0x82F1A060D8F4583B(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_49(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0xA929B2923D14E2F8(uParam1, 0))
	{
		func_64(uParam0, 0, 0);
	}
	if (func_52(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0x80E9CA64E9C8E070(iParam1))
		{
			uVar0 = unk_0xB80CAAF3D65FBC1F(iParam1);
			if (!unk_0xFD0FE723227D5AB6(uVar0, 0))
			{
				if (unk_0x0764AC92F08BEC9E(iVar0))
				{
					if (!func_50())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0x81E2E02C57D459E6(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x73624B45C8E405BA(0);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam5 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	unk_0x986AC95588E8693B(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x4718A774D9248520(unk_0x17B5CC8A8615737D(), iParam1, -1, iVar3, iVar4);
	unk_0x9AF1ABF0E97411BF("FocusIn", 0, 0);
	unk_0x4A5D4AD0FE6ACF73("HINT_CAM_SCENE");
	unk_0x4988C48537D1AE4F(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x94E3E074F38DF86C();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_50()
{
	return func_51(unk_0xBE369BE1BC57A796());
}

int func_51(var uParam0)
{
	if (unk_0x0324EEB10F81965F(unk_0xDF7CE83326F434E9(uParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_52(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_53(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x94E3E074F38DF86C() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1))
				{
					if (func_57(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x94E3E074F38DF86C();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_56(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x94E3E074F38DF86C();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_56(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x94E3E074F38DF86C();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_57(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x94E3E074F38DF86C();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_43(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x94E3E074F38DF86C() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1))
					{
						if (!func_57(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x94E3E074F38DF86C();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_56(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x94E3E074F38DF86C();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_56(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x94E3E074F38DF86C();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_57(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x94E3E074F38DF86C();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1))
				{
					if (!func_57(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_56(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_56(bParam1, bParam2, bParam3) || unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1) || unk_0x8B41403849A60C7C(unk_0x17B5CC8A8615737D(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_57(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x94E3E074F38DF86C() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1))
					{
						if (func_55(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_54(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1) || func_54(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1) || unk_0x8B41403849A60C7C(unk_0x17B5CC8A8615737D(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_55(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_43(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_46(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_59();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_54(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_46(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
	{
		if (!unk_0x091275C60C62F17B(unk_0xBE369BE1BC57A796()))
		{
			unk_0xD1BB2AD73E7FC3A7(0, 140, 1);
			unk_0xD1BB2AD73E7FC3A7(0, 80, 1);
			if (unk_0x7C48E6953368E08B(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_55(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_46(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
	{
		unk_0xD1BB2AD73E7FC3A7(0, 80, 1);
		if (unk_0xBB4A435CD6A72A8E())
		{
			if (unk_0x7C48E6953368E08B(0, 80))
			{
				unk_0x73624B45C8E405BA(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_56(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_46(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
	{
		if (!unk_0x091275C60C62F17B(unk_0xBE369BE1BC57A796()))
		{
			unk_0xD1BB2AD73E7FC3A7(0, 140, 1);
			unk_0xD1BB2AD73E7FC3A7(0, 80, 1);
			if (unk_0x9E3D293A990C1BEF(0, 80) && unk_0x94E3E074F38DF86C() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_57(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_46(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
	{
		unk_0xD1BB2AD73E7FC3A7(0, 80, 1);
		if (unk_0xBB4A435CD6A72A8E())
		{
			if (unk_0x9E3D293A990C1BEF(0, 80) && unk_0x94E3E074F38DF86C() > Global_116)
			{
				unk_0x73624B45C8E405BA(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_58(int iParam0)
{
	if (unk_0x23E9113C762466ED(uParam0))
	{
		if (unk_0x3983CCB0D958159C(iParam0))
		{
			if (unk_0x45CD66F0A131E554(unk_0xBFC71CD990E479DB(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x80E9CA64E9C8E070(iParam0))
		{
			if (!unk_0xCA41A00932714525(unk_0xB80CAAF3D65FBC1F(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x1461B0B259D86067(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_59()
{
	unk_0xEB79FECD9022AAF0(&Global_2314, 4);
}

bool func_60(char* sParam0)
{
	unk_0x1B345BEADF0C82A0(sParam0);
	return unk_0xCF2B4FB18449D099(0);
}

var func_61(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_62(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xA3794949321E107C(uVar0)) && unk_0x63A528817609801B(&(Global_101700.f_27009[iParam2 /*29*/].f_3)))
	{
		unk_0xAAF15482D9DB27D9(uVar0, &(Global_101700.f_27009[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_62(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x23E9113C762466ED(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xF1FE04D602EA392E(iParam0);
	if (unk_0x3983CCB0D958159C(iParam0))
	{
		unk_0x00EA14207118EEE2(uVar0, func_63(unk_0x63C468D583002D23(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xB8F5F7438C07CC5E(uVar0, bParam1);
		}
		else
		{
			unk_0xCC930AE12D020496(uVar0, 2);
		}
	}
	else if (unk_0x80E9CA64E9C8E070(iParam0))
	{
		unk_0x00EA14207118EEE2(uVar0, func_63(unk_0x63C468D583002D23(), 0.7f, 0.7f));
		unk_0xB8F5F7438C07CC5E(uVar0, bParam1);
	}
	else if (unk_0x1461B0B259D86067(iParam0))
	{
		unk_0x00EA14207118EEE2(uVar0, func_63(unk_0x63C468D583002D23(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_63(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_64(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x63C468D583002D23())
	{
		if (unk_0x48B8265059381CD0(Global_2494199.f_4449, 26))
		{
			return;
		}
	}
	if (unk_0xAB01297DD4A8577F())
	{
		unk_0x72B6EAB729050F5B(iParam2);
		unk_0x8BBC558C75738A6D("FocusIn");
		unk_0xB8CAC5F3774894A1("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x9AF1ABF0E97411BF("FocusOut", 0, 0);
			unk_0x4988C48537D1AE4F(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x73624B45C8E405BA(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0xD3115E7F7876D6E6(sVar0))
	{
		if (!unk_0x63C468D583002D23())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0xD3115E7F7876D6E6(uParam0->f_3))
	{
		if (func_60(uParam0->f_3))
		{
			unk_0x2E2945F5602A744F(1);
		}
	}
	if (!unk_0xD3115E7F7876D6E6(sVar0))
	{
		if (func_60(sVar0))
		{
			unk_0x2E2945F5602A744F(1);
		}
	}
}

int func_65(var uParam0)
{
	var uVar0;
	
	if (!unk_0xAF6D1E258B973F1D(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x0F4B728BCFF10878(uParam0);
	unk_0x00EA14207118EEE2(uVar0, func_63(unk_0x63C468D583002D23(), 0.7f, 0.7f));
	return uVar0;
}

void func_66()
{
	Global_14611 = 0;
	func_67();
}

void func_67()
{
	unk_0x5FB0B609B3A49840();
	Global_16756 = 0;
	if (unk_0x55C74612BE548D78())
	{
		unk_0x660E8E7836E95077(0);
		Global_15745 = 6;
	}
}

int func_68(int iParam0)
{
	if (((((unk_0x080A2F4FECE019B1(uParam0, 122) || unk_0x080A2F4FECE019B1(iParam0, 123)) || unk_0x080A2F4FECE019B1(iParam0, 124)) || unk_0x080A2F4FECE019B1(iParam0, 41)) || (unk_0xC37168D3A492594E(iParam0, unk_0x17B5CC8A8615737D()) && unk_0x080A2F4FECE019B1(iParam0, 29))) || unk_0xC017443DBE6DA4D6(iParam0, unk_0x17B5CC8A8615737D(), 1))
	{
		return 1;
	}
	else
	{
		unk_0xCF458DC2F9000261(iParam0);
	}
	return 0;
}

void func_69(char* sParam0, int iParam1)
{
	unk_0x252D021C9D92DBA9(sParam0);
	unk_0x8B1500AADBA665BD(0, 0, 1, iParam1);
}

void func_70(char[4] cParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x7F755B97D75D9B44(cParam0);
	unk_0x6EBC181C75DC822D(iParam1, 1);
}

int func_71(var uParam0, bool bParam1, bool bParam2)
{
	return func_62(uParam0, !bParam1, bParam2);
}

void func_72(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69702)
	{
		if (!unk_0xCA41A00932714525(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xFB616ABA635A95B3(iParam2, 0);
			}
			else
			{
				unk_0xFB616ABA635A95B3(iParam2, 1);
			}
		}
		if (!unk_0xCA41A00932714525(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x8E601051A3FDE8ED(iParam2, 0);
			}
			else
			{
				unk_0x8E601051A3FDE8ED(iParam2, 1);
			}
		}
	}
}

int func_73()
{
	if (Global_15745 != 0 || unk_0x55C74612BE548D78())
	{
		return 1;
	}
	return 0;
}

void func_74()
{
	func_75(&Local_37);
	unk_0x1EF7A8224AE81790("relThief", &iLocal_251);
	unk_0xDE574EA7A7A2CAF8(5, joaat("player"), iLocal_251);
	unk_0xDE574EA7A7A2CAF8(5, iLocal_251, joaat("player"));
	switch (func_14())
	{
		case 0:
			func_72(&uLocal_73, 0, unk_0x17B5CC8A8615737D(), "MICHAEL", 0, 1);
			break;
		
		case 1:
			func_72(&uLocal_73, 1, unk_0x17B5CC8A8615737D(), "FRANKLIN", 0, 1);
			break;
		
		case 2:
			func_72(&uLocal_73, 2, unk_0x17B5CC8A8615737D(), "TREVOR", 0, 1);
			break;
	}
	unk_0x000E46314C3A507F(0.1f);
}

void func_75(var uParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	Var0 = { unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 0) };
	Var0.f_2 = 0f;
	iVar3 = 0;
	iVar4 = 0;
	unk_0xEB79FECD9022AAF0(&iVar3, 3);
	unk_0xEB79FECD9022AAF0(&iVar3, 4);
	unk_0xEB79FECD9022AAF0(&iVar4, 3);
	unk_0xEB79FECD9022AAF0(&iVar4, 4);
	unk_0xEB79FECD9022AAF0(&iVar4, 8);
	switch (func_5())
	{
		case 0:
			uParam0->f_8 = joaat("a_m_m_eastsa_02");
			uParam0->f_10 = joaat("prop_cs_duffel_01b");
			uParam0->f_16 = 572;
			StringCopy(&(uParam0->f_12), "MON", 16);
			uParam0->f_20 = 1;
			uParam0->f_28 = iVar3;
			break;
		
		case 1:
			uParam0->f_8 = joaat("a_m_m_paparazzi_01");
			uParam0->f_9 = joaat("a_m_m_paparazzi_01");
			uParam0->f_10 = joaat("prop_pap_camera_01");
			uParam0->f_11 = joaat("prop_npc_phone");
			uParam0->f_16 = 60;
			uParam0->f_17 = 1;
			uParam0->f_18 = 1;
			StringCopy(&(uParam0->f_12), "PAP", 16);
			uParam0->f_19 = 60000;
			uParam0->f_21 = 1;
			StringCopy(&(uParam0->f_22), "PAP_HLP", 16);
			uParam0->f_26 = 0;
			uParam0->f_27 = 1;
			uParam0->f_28 = iVar4;
			uParam0->f_29 = iVar3;
			break;
	}
	switch (func_79())
	{
		case 5:
			*uParam0 = { 178.0117f, 202.3507f, 102.9037f };
			uParam0->f_3 = { 514.5839f, 78.78811f, 111.1864f };
			uParam0->f_6 = 131.0625f;
			break;
		
		case 6:
			*uParam0 = { 418.5796f, -636.2899f, 25.43758f };
			uParam0->f_3 = { 400.2468f, -826.1611f, 44.10468f };
			uParam0->f_6 = 95.375f;
			break;
		
		case 7:
			*uParam0 = { -1368.458f, -238.4543f, 40.36241f };
			uParam0->f_3 = { -1475.669f, -127.621f, 65.65466f };
			uParam0->f_6 = 158.25f;
			break;
		
		case 11:
			if (func_76(func_79(), Var0))
			{
				*uParam0 = { -602.3785f, 258.2744f, 79.0293f };
				uParam0->f_3 = { -469.064f, 244.8735f, 97.88577f };
				uParam0->f_6 = 70.125f;
			}
			else
			{
				*uParam0 = { -621.5889f, 262.0915f, 78.67405f };
				uParam0->f_3 = { -494.7666f, 248.2196f, 97.88564f };
				uParam0->f_6 = 70.125f;
			}
			break;
		
		case 12:
			if (func_76(func_79(), Var0))
			{
				*uParam0 = { 137.2073f, 392.7482f, 110.9443f };
				uParam0->f_3 = { 297.2104f, 336.0269f, 120.3525f };
				uParam0->f_6 = 95.375f;
			}
			else
			{
				*uParam0 = { 191.3225f, 364.9949f, 104.5153f };
				uParam0->f_3 = { 320.3688f, 325.2877f, 120.2689f };
				uParam0->f_6 = 70.125f;
			}
			break;
		
		case 13:
			if (func_76(func_79(), Var0))
			{
				*uParam0 = { -221.6586f, 6310.131f, 28.40555f };
				uParam0->f_3 = { -319.8287f, 6211.665f, 46.19521f };
				uParam0->f_6 = 95.375f;
			}
			else
			{
				*uParam0 = { -260.2809f, 6273.981f, 28.42822f };
				uParam0->f_3 = { -371.5657f, 6164.586f, 46.1894f };
				uParam0->f_6 = 95.375f;
			}
			break;
		
		case 14:
			*uParam0 = { -2313.765f, 4159.022f, 29.59011f };
			uParam0->f_3 = { -2140.887f, 4437.057f, 72.619f };
			uParam0->f_6 = 113.5f;
			break;
	}
}

int func_76(int iParam0, struct<3> Param1)
{
	switch (iParam0)
	{
		case 5:
			if (func_77(func_78(Param1 - Vector(0f, 174.58f, 335.5574f)), func_78(Vector(0f, 174.8707f, 334.8261f) - Vector(0f, 174.58f, 335.5574f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 6:
			if (func_77(func_78(Param1 - Vector(0f, -711.023f, 393.0992f)), func_78(Vector(0f, -715.4372f, 393.1879f) - Vector(0f, -711.023f, 393.0992f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 7:
			if (func_77(func_78(Param1 - Vector(0f, -215.2002f, -1423.254f)), func_78(Vector(0f, -215.1443f, -1420.71f) - Vector(0f, -215.2002f, -1423.254f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 11:
			if (func_77(func_78(Param1 - Vector(0f, 274.9096f, -564.5655f)), func_78(Vector(0f, 275.0867f, -567.1105f) - Vector(0f, 274.9096f, -564.5655f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 12:
			if (func_77(func_78(Param1 - Vector(0f, 338.8084f, 225.5057f)), func_78(Vector(0f, 338.4193f, 226.8374f) - Vector(0f, 338.8084f, 225.5057f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 13:
			if (func_77(func_78(Param1 - Vector(0f, 6256.5f, -299.9329f)), func_78(Vector(0f, 6255.179f, -301.1977f) - Vector(0f, 6256.5f, -299.9329f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 14:
			if (func_77(func_78(Param1 - Vector(0f, 4287.951f, -2200.204f)), func_78(Vector(0f, 4289.739f, -2199.26f) - Vector(0f, 4287.951f, -2200.204f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

float func_77(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_78(struct<3> Param0)
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

int func_79()
{
	return Global_100412.f_20;
}

void func_80()
{
	if (unk_0x23E9113C762466ED(iLocal_245))
	{
		if (!unk_0xCA41A00932714525(iLocal_245))
		{
			unk_0xCA58071CE9CCE891(iLocal_245, unk_0x17B5CC8A8615737D(), 1000f, -1, 0, 1);
		}
		unk_0x6500ADB01E821BC0(&iLocal_245);
	}
	if (unk_0x23E9113C762466ED(iLocal_246))
	{
		if (!unk_0xCA41A00932714525(iLocal_246))
		{
			unk_0xCA58071CE9CCE891(iLocal_246, unk_0x17B5CC8A8615737D(), 1000f, -1, 0, 1);
		}
		unk_0x6500ADB01E821BC0(&iLocal_246);
	}
	if (unk_0x23E9113C762466ED(iLocal_244))
	{
		unk_0x921CF98C637B0043(&iLocal_244);
	}
	if (unk_0xAF6D1E258B973F1D(uLocal_247))
	{
		unk_0xC2E11A6D29A07A71(uLocal_247);
	}
	if (unk_0xAF6D1E258B973F1D(uLocal_248))
	{
		unk_0xC2E11A6D29A07A71(uLocal_248);
	}
	if (unk_0xA3794949321E107C(uLocal_249))
	{
		unk_0x020DF7300725ECAB(&uLocal_249);
	}
	if (unk_0xA3794949321E107C(uLocal_250))
	{
		unk_0x020DF7300725ECAB(&uLocal_250);
	}
	unk_0xD90CB3CF9A40791C(Local_37.f_7, 0);
	unk_0x000E46314C3A507F(1f);
	unk_0x111E99E32A85B908(iLocal_251);
	unk_0x921053BAF754303D();
}

void func_81(int iParam0)
{
	Global_100412.f_22 = iParam0;
}

