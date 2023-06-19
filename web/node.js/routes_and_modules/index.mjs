import express from 'express'
import { index, news, exam, form, answer } from './routes.mjs'

const app	= express()

app.get('/', index)

app.get('/news', news)

app.get('/exam', exam)

app.get('/form', form)

app.get('/answer', answer)

app
.listen(3000)
